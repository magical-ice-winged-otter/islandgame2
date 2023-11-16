#include "global.h"
#include "event_data.h" // for gSpecialVar
#include "field_camera.h" // for MoveCameraAndRedrawMap

void TeleportCamera(void)
{
    s16 x = gSpecialVar_0x8000;
    s16 y = gSpecialVar_0x8001;

    s16 deltaX = x - gSaveBlock1Ptr->pos.x;
    s16 deltaY = y - gSaveBlock1Ptr->pos.y;
    MoveCameraAndRedrawMap(deltaX,deltaY);
}
