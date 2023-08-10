#ifndef GUARD_POKEVIAL_H
#define GUARD_POKEVIAL_H

#define POKEVIAL_MIN_SIZE 1
#define POKEVIAL_MAX_SIZE 15
void Pokevial_Initalize(void);
u8 Pokevial_GetDose(void);
u8 Pokevial_GetSize(void);
bool8 Pokevial_IncreaseSize(void);
bool8 Pokevial_DecreaseSize(void);
bool8 Pokevial_AddDose(void);
bool8 Pokevial_ReduceDose(void);
bool8 Pokevial_Refill(void);
void Pokevial_SetValues(u8 pokevialDoses);

#endif // GUARD_POKEVIAL_H
