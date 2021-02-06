#ifndef GUARD_MOVEMENT_PATH_PLANNING_H
#define GUARD_MOVEMENT_PATH_PLANNING_H
#include "event_object_movement.h"
#include "malloc.h"


static const struct Coords16 moves[] = 
{
    {0,1},
    {0,-1},
    {-1,0},
    {1,0},
};

static const u32 moves_walk[] = 
{
    MOVEMENT_ACTION_WALK_NORMAL_DOWN, 
    MOVEMENT_ACTION_WALK_NORMAL_UP,
    MOVEMENT_ACTION_WALK_NORMAL_LEFT, 
    MOVEMENT_ACTION_WALK_NORMAL_RIGHT,
    MOVEMENT_ACTION_FACE_DOWN,
    MOVEMENT_ACTION_FACE_UP,
    MOVEMENT_ACTION_FACE_LEFT,
    MOVEMENT_ACTION_FACE_RIGHT,
};


static EWRAM_DATA u8 *SolutionPath = NULL;
 

#define MAXPATH 100 // Max final path size
#define MAXNODES 500 //Max size of the queues

#define HEUR_WEIGHT 1
//Weight of the Heuristic, 0 for Dijkstra Algoritmin (Uniform Cost Search), 1 for A*, and >>1 for Greedy Best First Search

typedef struct Node{
    int state;
    struct Coords16 coords;
    int cost;
    int path[MAXPATH];
} Node;

typedef struct Set{
    unsigned int size;
    int value[MAXNODES]; // PODEMOS REEMPLAZAR ESTAS LISTAS USANDO EL HEAP
} Set;

typedef struct PriorityQueue{
    unsigned int size;
    float priority[MAXNODES]; // PODEMOS REEMPLAZAR ESTAS LISTAS USANDO EL HEAP
    struct Node value[MAXNODES]; // PODEMOS REEMPLAZAR ESTAS LISTAS USANDO EL HEAP
} PriorityQueue;

void swapNode(struct Node *a, struct Node *b) {
  Node temp = *b;
  *b = *a;
  *a = temp;
}

void swap(float *a, float *b) {
  float temp = *b;
  *b = *a;
  *a = temp;
}

u32 abs(s32 x){
    return (u32)((x<0)?-x:x);}

u32 L1Distance(s32 x0, s32 y0, s32 xf, s32 yf){ //Manhatan distance used as heuristic
    return abs(x0 - xf) + abs(y0 - yf);}

float CalcHeuristic(struct Node *node, s32 xgoal,s32 ygoal)
{
    float heuristic = HEUR_WEIGHT*L1Distance(node->coords.x, node->coords.y, xgoal, ygoal);
    heuristic *= (1.0 + 1/MAXPATH); // For breaking ties
    return heuristic;
}

// Function to insert to set
int isInSet(struct Set *set, int num){
    int i;
    for (i = 0; i< set->size; i++)
      if (set->value[i]==num)
        return 1;
    return 0;
}

void setInsert(struct Set *set, int num){
    if(!isInSet(set,num)){
        set->value[set->size] = num;
        set->size += 1;
    }
}

// Function to heapify the tree
void heapify(struct PriorityQueue *queue, int i) {
  if (queue->size == 1) {
    // printf("Single element in the heap");
  } else {
    // Find the shortest among root, left child and right child
    int shortest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < queue->size && queue->priority[l] < queue->priority[shortest])
      shortest = l;
    if (r < queue->size && queue->priority[r] < queue->priority[shortest])
      shortest = r;

    // Swap and continue heapifying if root is not shortest
    if (shortest != i) {
      swap(&(queue->priority[i]), &(queue->priority[shortest]));
      swapNode(&(queue->value[i]), &(queue->value[shortest]));
        // swap(&queue,i,shortest);
      heapify(queue, shortest);
    }
  }
}

int isInQueue(struct PriorityQueue *queue, int num){
    int i;
    for (i = 0; i< queue->size; i++)
      if (queue->value[i].state==num)
        return 1;
    return 0;
}

void isInQueueWithHigherPath(struct PriorityQueue *queue, struct Node newNode){
    int i;
    int j;
    for (i = 0; i< queue->size; i++)
      if (queue->value[i].state==newNode.state)
        if(queue->value[i].cost > newNode.cost){
            queue->priority[i] -= queue->value[i].cost - newNode.cost;
            queue->value[queue->size] = newNode;
            for (j = queue->size / 2 - 1; j >= 0; j--) 
                heapify(queue, j);
            return;
        }
}

// Function to insert an element into the tree
void insert(struct PriorityQueue *queue, struct Node newNode, int heuristic) {
    int i;
  if (queue->size == 0) {
    queue->priority[0] = newNode.cost + heuristic;
    queue->value[0] = newNode;
    queue->size += 1;
  } else {
    queue->priority[queue->size] = newNode.cost + heuristic;
    queue->value[queue->size] = newNode;
    queue->size += 1;
    for (i = queue->size / 2 - 1; i >= 0; i--) {
      heapify(queue, i);
    }
  }
}


struct Node pop(struct PriorityQueue *queue, int i) {
  struct Node element = queue->value[i];
  swapNode(&(queue->value[i]), &(queue->value[queue->size - 1]));
  swap(&(queue->priority[i]), &(queue->priority[queue->size - 1]));
  queue->size -= 1;
  for (i = queue->size / 2 - 1; i >= 0; i--) {
    heapify(queue, i);
  }
  return element;
}

void getChild(struct Node parent, int move, struct Node *child){
    int i;
    child->coords.x = parent.coords.x + moves[move].x;
    child->coords.y = parent.coords.y + moves[move].y;
    child->cost = parent.cost+1;
    for(i =0;i<parent.cost;i++)
        child->path[i] = parent.path[i];
    child->path[parent.cost] = move;
}

void getSolution(struct Node *node)
{
    int i;
    SolutionPath = AllocZeroed(node->cost+1);
    for(i=0;i<node->cost;i++)
        SolutionPath[i] = moves_walk[node->path[i]];
    SolutionPath[node->cost] = MOVEMENT_ACTION_STEP_END;
}

#endif // GUARD_MOVEMENT_PATH_PLANNING_H
