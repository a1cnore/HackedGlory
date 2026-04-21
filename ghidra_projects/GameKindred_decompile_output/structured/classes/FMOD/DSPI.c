// classes/FMOD/DSPI — 3 functions
#include "GameKindred.h"




/* FMOD::DSPI::memoryAlloc(unsigned int, unsigned int, char const*) */

void FMOD::DSPI::memoryAlloc(uint param_1,uint param_2,char *param_3)

{
  FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,param_3,0,param_2 | 0x10,1);
  return;
}




/* FMOD::DSPI::memoryRealloc(void*, unsigned int, unsigned int, char const*) */

void FMOD::DSPI::memoryRealloc(void *param_1,uint param_2,uint param_3,char *param_4)

{
  FUN_1005d7a98(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,param_2,param_4,0,param_3 | 0x10);
  return;
}




/* FMOD::DSPI::memoryFree(void*, unsigned int, char const*) */

void FMOD::DSPI::memoryFree(void *param_1,uint param_2,char *param_3)

{
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,param_3,0);
  return;
}

