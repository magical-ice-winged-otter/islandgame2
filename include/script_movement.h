#ifndef GUARD_SCRIPT_MOVEMENT_H
#define GUARD_SCRIPT_MOVEMENT_H

bool8 ScriptMovement_StartObjectMovementScript(u8 localId, u8 mapNum, u8 mapGroup, const u8 *movementScript);
bool8 ScriptMovement_IsObjectMovementFinished(u8 localId, u8 mapNum, u8 mapGroup);
void ScriptMovement_UnfreezeObjectEvents(void);
void MovementPathPlanning_MoveObjectToPos(u8 localId, u8 mapNum, u8 mapGroup, u8 x, u8 y, u8 facing);

#endif // GUARD_SCRIPT_MOVEMENT_H
