// functions/019d5 — 6 functions
#include "libGameKindred.h"




void FUN_019d5bc0(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puStack_50 = auStack_90;
  ppuStack_58 = &local_60;
  uStack_48 = 0xffffff80ffffffd8;
  local_88 = in_x3;
  local_80 = in_x4;
  uStack_78 = in_x5;
  local_70 = in_x6;
  uStack_68 = in_x7;
  local_60 = (undefined1 *)register0x00000008;
  FUN_019d4a10();
  return;
}




long FUN_019d5c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 **ppuStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  int local_48;
  
  puStack_70 = auStack_c0;
  ppuStack_78 = &local_80;
  local_60 = 0;
  lStack_58 = 0;
  local_48 = 0;
  local_50 = 0;
  uStack_68 = 0xffffff80ffffffc8;
  local_b8 = param_2;
  local_b0 = param_3;
  uStack_a8 = param_4;
  local_a0 = param_5;
  uStack_98 = param_6;
  local_90 = param_7;
  uStack_88 = param_8;
  local_80 = (undefined1 *)register0x00000008;
  iVar1 = FUN_019d4a70(&local_60,&LAB_019d5d2c,param_1,&local_80);
  if ((iVar1 == -1) || (local_48 != 0)) {
    if (local_50 != 0) {
      (*(code *)PTR_free_02bf74b0)(local_60);
    }
    local_60 = 0;
  }
  else if (local_50 == 0) {
    local_60 = (*(code *)PTR_strdup_02bf74c0)(&DAT_01e277f2);
  }
  else {
    *(undefined1 *)(local_60 + lStack_58) = 0;
  }
  return local_60;
}




long FUN_019d5e00(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  long local_20;
  int local_18;
  
  local_18 = 0;
  local_28 = 0;
  local_20 = 0;
  local_30 = 0;
  uStack_38 = param_2[3];
  local_40 = param_2[2];
  uStack_48 = param_2[1];
  local_50 = *param_2;
  iVar1 = FUN_019d4a70(&local_30,&LAB_019d5d2c,param_1,&local_50);
  if ((iVar1 == -1) || (local_18 != 0)) {
    if (local_20 != 0) {
      (*(code *)PTR_free_02bf74b0)(local_30);
    }
    local_30 = 0;
  }
  else if (local_20 == 0) {
    local_30 = (*(code *)PTR_strdup_02bf74c0)(&DAT_01e277f2);
  }
  else {
    *(undefined1 *)(local_30 + local_28) = 0;
  }
  return local_30;
}




void FUN_019d5eac(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined1 *local_28;
  
  puStack_60 = &local_a0;
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  local_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  local_28 = param_1;
  FUN_019d4a70(&local_28,&LAB_019d5f48,param_2,&local_70);
  *local_28 = 0;
  return;
}




void FUN_019d5f64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puStack_50 = auStack_a0;
  ppuStack_58 = &local_60;
  uStack_48 = 0xffffff80ffffffc8;
  local_98 = param_2;
  uStack_90 = param_3;
  local_88 = param_4;
  local_80 = param_5;
  uStack_78 = param_6;
  local_70 = param_7;
  uStack_68 = param_8;
  local_60 = (undefined1 *)register0x00000008;
  FUN_019d4a70(isgraph,fputc,param_1,&local_60);
  return;
}




void FUN_019d5ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 **ppuStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puStack_50 = &local_90;
  ppuStack_58 = &local_60;
  uStack_48 = 0xffffff80ffffffd0;
  local_90 = param_3;
  uStack_88 = param_4;
  local_80 = param_5;
  uStack_78 = param_6;
  local_70 = param_7;
  uStack_68 = param_8;
  local_60 = (undefined1 *)register0x00000008;
  FUN_019d4a70(param_1,fputc,param_2,&local_60);
  return;
}

