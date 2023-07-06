#include "islandgame.h"
#include "task.h"

// Forward declare from src/main_menu.c
extern void NewGameBirchSpeech_SetDefaultPlayerName(u8);
extern void Task_NewGameBirchSpeech_Cleanup(u8);

void Task_IslandGameCustomSpeech(u8 taskId)
{
    // todo: this is fully random name, probably just for testing
    NewGameBirchSpeech_SetDefaultPlayerName(0);

    // After we are done w/ custom logic, skip ahead past the cutscene without leaking memory.
    gTasks[taskId].func = Task_NewGameBirchSpeech_Cleanup;
}
