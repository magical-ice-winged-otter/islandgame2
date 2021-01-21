#include "global.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "field_camera.h"
#include "field_screen_effect.h"
#include "field_specials.h"
#include "fieldmap.h"
#include "main.h"
#include "overworld.h"
#include "palette.h"
#include "script.h"
#include "script_movement.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "constants/event_objects.h"
#include "constants/event_object_movement.h"
#include "constants/field_specials.h"
#include "constants/songs.h"
#include "constants/metatile_labels.h"
#include "constants/maps.h"
#include "movement_path_planning.h"
#include "malloc.h"

#define SECONDS(value) ((signed) (60.0 * value + 0.5))

u16 *InitalizeInd();
u32 abs();
u32 distance();
void MoveObjectToPos();

static const u32 MOVES_COUNT = 4;

// PARAMETROS DE ENTRADA DE LA FUNCION
static const u8 localId = 1;
static const s32 x_goal = 9;
static const s32 y_goal = 9;


// .text


int isMoveNotPossible(struct ObjectEvent *objectEvent, s16 x, s16 y, u32 dir)
{
    return GetCollisionAtCoords(objectEvent, x+7, y+7, dir+1);
}

// Driver code
int searchPath(struct ObjectEvent *objectEvent,s32 x, s32 y){
    
    Node startNode;
    PriorityQueue frontier;
    Set explored;
    Node child;
    Node node;
    u32 MapWidth = GetMapLayout()->width;
    
    int failure;
    int i;
    int childState;
   
    explored.size = 0;
    frontier.size = 0;

    failure = 0;

    startNode.coords.x = objectEvent->currentCoords.x -7;
    startNode.coords.y = objectEvent->currentCoords.y -7;
    startNode.state = startNode.coords.x + MapWidth * startNode.coords.y;
    startNode.cost = 0;

    insert(&frontier, startNode,CalcHeuristic(&child,x,y));
    
    while(1){
        if (frontier.size==0) // FAILURE
            return 0;

        node = pop(&frontier,0); 
        
        if(node.coords.x == x && node.coords.y == y){ // SUCCESS
            getSolution(&node);
            return 1;
        }
        setInsert(&explored,node.state);
        
        if(node.cost<MAXPATH){
            for(i=0; i<4;i++){
                if(node.cost == 0 || !(i+node.path[node.cost-1] == 1 || i+node.path[node.cost-1] == 5)){
                    if (!isMoveNotPossible(objectEvent,node.coords.x + moves[i].x, node.coords.y + moves[i].y,i))
                    {
                        getChild(node,i,&child);
                        childState = child.coords.x + MapWidth * child.coords.y; 
                        child.state = childState;
                        
                        if (!(isInSet(&explored,childState) || isInQueue(&frontier,childState)))
                            insert(&frontier,child,CalcHeuristic(&child,x,y));
                        else if(isInQueue(&frontier,childState)){
                            isInQueueWithHigherPath(&frontier,child);
                            }
                    }

                }
            
            }
        }
    }
}

void MoveObjectToPos(void)
{
    u8 mapNum = gSaveBlock1Ptr->location.mapNum;
    u8 mapGroup = gSaveBlock1Ptr->location.mapGroup;
    // LoadCurrentMapData();
    u8 objectEventId;
   
    if (!TryGetObjectEventIdByLocalIdAndMap(localId, mapNum, mapGroup, &objectEventId))
    {
        if(searchPath(&gObjectEvents[objectEventId],x_goal,y_goal))
        {
            ScriptMovement_StartObjectMovementScript(localId, mapNum, mapGroup, SolutionPath);
            SetMovingNpcId(localId);

            FREE_AND_SET_NULL(SolutionPath);
        }
    }
   

}

