#include "global.h"
#include "event_object_movement.h"
#include "script.h"

void SpawnDynamicObject(u8 DynObjId, u16 graphicsId, u8 movementBehavior, s16 x, s16 y, u8 z, const u8 *scriptPtr);
int GetLowestEmptyDynamicObjectSlot(void);
void ClearAllDynamicObjects(void);
bool8 ScrCmd_adddynamicobject(struct ScriptContext *ctx);
bool8 ScrCmd_removedynamicobject(struct ScriptContext *ctx);