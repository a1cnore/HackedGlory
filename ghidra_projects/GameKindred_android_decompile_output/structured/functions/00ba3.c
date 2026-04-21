// functions/00ba3 — 3 functions
#include "libGameKindred.h"




void FUN_00ba3f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00ba9040(param_1,param_4,param_5);
  return;
}




void FUN_00ba3f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00ba9114(param_1,param_2,param_5);
  return;
}




void FUN_00ba3f98(long param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = "checkbox_filled";
  if (param_2 != 0) {
    pcVar1 = "checkbox_empty";
  }
  FUN_00f0e578(param_1 + 0x73b90,pcVar1);
  pcVar1 = "checkbox_filled";
  if (param_2 != 1) {
    pcVar1 = "checkbox_empty";
  }
  FUN_00f0e578(param_1 + 0x73e68,pcVar1);
  *(int *)(param_1 + 0x7a308) = param_2;
  return;
}

