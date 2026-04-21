// classes/FMOD/SystemI — 3 functions
#include "GameKindred.h"




/* FMOD::SystemI::pluginAlloc(unsigned int, unsigned int, char const*, int) */

ulong FMOD::SystemI::pluginAlloc(uint param_1,uint param_2,char *param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 8;
  if (0 < (int)param_2) {
    uVar1 = param_2;
  }
  lVar2 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1 + uVar1 + 8,param_3,
                        param_4,0x10,0);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = lVar2 + (int)(uVar1 - 1) + 8U & ((long)(int)(uVar1 - 1) ^ 0xffffffffffffffffU);
    *(long *)(uVar3 - 8) = lVar2;
  }
  return uVar3;
}




/* FMOD::SystemI::pluginFree(void*, char const*, int) */

void FMOD::SystemI::pluginFree(void *param_1,char *param_2,int param_3)

{
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(undefined8 *)((long)param_1 + -8),
                param_2,param_3);
  return;
}




/* FMOD::SystemI::pluginLog(unsigned int, char const*, int, char const*, char const*, ...) */

uint FMOD::SystemI::pluginLog
               (uint param_1,char *param_2,int param_3,char *param_4,char *param_5,...)

{
  return param_1;
}

