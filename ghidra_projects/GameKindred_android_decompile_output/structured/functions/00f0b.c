// functions/00f0b — 40 functions
#include "libGameKindred.h"




void FUN_00f0b160(float param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  
  bVar2 = *(byte *)(param_2 + 0x120);
  if ((bVar2 & 1) != 0) {
    fVar4 = (float)(uint)(int)*(float *)(param_2 + 0xf8);
    fVar3 = param_1 / *(float *)(param_2 + 0xfc) + (*(float *)(param_2 + 0xf8) - fVar4);
    fVar4 = fVar3 + fVar4;
    *(float *)(param_2 + 0xf8) = fVar4;
    if (1.0 < fVar3) {
      uVar1 = *(uint *)(*(long *)(param_2 + 0xf0) + 0x18);
      fVar3 = (float)uVar1;
      if (fVar3 <= fVar4) {
        do {
          fVar4 = fVar4 - fVar3;
        } while (fVar3 <= fVar4);
        *(float *)(param_2 + 0xf8) = fVar4;
        if ((bVar2 >> 1 & 1) == 0) {
          *(float *)(param_2 + 0xf8) = (float)(uVar1 - 1);
          *(byte *)(param_2 + 0x120) = bVar2 & 0xfe;
        }
      }
      FUN_00f0af9c();
      return;
    }
  }
  return;
}




void FUN_00f0b1d8(long param_1)

{
  *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) & 0xfe;
  return;
}




void FUN_00f0b1e8(void)

{
  FUN_0199d9a4(0xc);
  return;
}




void FUN_00f0b200(void)

{
  FUN_0199d9a4(0xc);
  return;
}




undefined8 FUN_00f0b218(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0xd0) + 8) + 0x30;
  return 1;
}




undefined8 FUN_00f0b230(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x18) + 8) + 0x30;
  return 1;
}




undefined8 FUN_00f0b248(long param_1,undefined4 *param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  *param_2 = *(undefined4 *)(param_1 + 0x108);
  param_2[1] = *(undefined4 *)(param_1 + 0x10c);
  param_2[2] = *(undefined4 *)(param_1 + 0x100);
  param_2[3] = *(undefined4 *)(param_1 + 0x104);
  param_2[4] = *(undefined4 *)(param_1 + 0x118);
  param_2[5] = *(undefined4 *)(param_1 + 0x11c);
  param_2[6] = *(undefined4 *)(param_1 + 0x110);
  param_2[7] = *(undefined4 *)(param_1 + 0x114);
  if ((*(byte *)(param_1 + 0x120) >> 2 & 1) != 0) {
    fVar1 = *(float *)(param_1 + 0xf8) - (float)(uint)(int)*(float *)(param_1 + 0xf8);
  }
  param_2[8] = fVar1;
  return 9;
}




undefined8 FUN_00f0b2b0(long param_1)

{
  FUN_00f0b248(param_1 + -0xb8);
  return 9;
}




void FUN_00f0b2cc(long param_1)

{
  *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) | 1;
  return;
}




void FUN_00f0b2dc(long param_1)

{
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) | 1;
  FUN_00f0af9c();
  return;
}




void FUN_00f0b2f0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xfc) = param_1;
  return;
}




undefined4 FUN_00f0b2f8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xfc);
}




void FUN_00f0b300(long param_1,byte param_2)

{
  if ((param_2 & 1) == (*(byte *)(param_1 + 0x120) >> 2 & 1)) {
    return;
  }
  *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) & 0xfb | (param_2 & 1) << 2;
  FUN_00f0af9c();
  return;
}




byte FUN_00f0b328(long param_1)

{
  return *(byte *)(param_1 + 0x120) >> 2 & 1;
}




void FUN_00f0b334(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) & 0xfd | (param_2 & 1) << 1;
  return;
}




byte FUN_00f0b34c(long param_1)

{
  return *(byte *)(param_1 + 0x120) >> 1 & 1;
}




undefined4 FUN_00f0b358(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0xf0) + 0x18));
  return uVar1;
}




int FUN_00f0b368(long param_1)

{
  return *(int *)(*(long *)(param_1 + 0xf0) + 0x10) + (int)*(float *)(param_1 + 0xf8);
}




int FUN_00f0b380(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(long *)(param_1 + 0xf0) + 0x10);
  iVar1 = iVar2 + (int)*(float *)(param_1 + 0xf8);
  if (iVar1 + 1U <= *(uint *)(*(long *)(param_1 + 0xf0) + 0x14)) {
    iVar2 = iVar1 + 1;
  }
  return iVar2;
}




void FUN_00f0b3a4(undefined8 *param_1)

{
  long lVar1;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f0c714();
  *param_1 = &PTR_thunk_FUN_00f13d08_02825b28;
  param_1[0x17] = &PTR_FUN_02825c88;
  local_30[0] = 0xffffff;
  FUN_00f0c774(param_1,local_30);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0b424(undefined8 param_1,uint param_2)

{
  FUN_00f0b454(param_1,param_2 & 1);
  FUN_00f0b560(param_1,param_2 & 1);
  return;
}




void FUN_00f0b454(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((param_2 & 1) == 0) {
    FUN_00f04694(param_1);
    FUN_00f04694(param_1,DAT_03210f88);
    FUN_00f04694(param_1,DAT_03210f8c);
  }
  else {
    lVar1 = param_1 + 8;
    local_68 = FUN_00f0b7d4;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    local_40 = DAT_03210f84;
    FUN_009693a0(lVar1,&local_68);
    local_68 = FUN_00f0b7d4;
    local_40 = DAT_03210f88;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(lVar1,&local_68);
    local_68 = FUN_00f0b7d4;
    local_40 = DAT_03210f8c;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(lVar1,&local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0b560(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((param_2 & 1) == 0) {
    FUN_00f04694(param_1);
    FUN_00f04694(param_1,DAT_03210f5c);
    FUN_00f04694(param_1,DAT_03210f60);
    FUN_00f04694(param_1,DAT_03210f70);
    FUN_00f04694(param_1,DAT_03210f74);
    FUN_00f04694(param_1,DAT_03210f78);
    FUN_00f04694(param_1,DAT_03210f64);
    FUN_00f04694(param_1,DAT_03210f68);
    FUN_00f04694(param_1,DAT_03210f6c);
  }
  else {
    lVar1 = param_1 + 8;
    local_68 = FUN_00f0b7d4;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    local_40 = DAT_03210f58;
    FUN_009693a0(lVar1,&local_68);
    local_68 = FUN_00f0b7d4;
    local_40 = DAT_03210f5c;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(lVar1,&local_68);
    local_68 = FUN_00f0b7d4;
    local_40 = DAT_03210f60;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(lVar1,&local_68);
    local_68 = FUN_00f0b7d4;
    local_40 = DAT_03210f70;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(lVar1,&local_68);
    local_68 = FUN_00f0b7d4;
    local_40 = DAT_03210f74;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(lVar1,&local_68);
    local_68 = FUN_00f0b7d4;
    local_40 = DAT_03210f78;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(lVar1,&local_68);
    local_68 = FUN_00f0b7d4;
    local_40 = DAT_03210f64;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(lVar1,&local_68);
    local_68 = FUN_00f0b7d4;
    local_40 = DAT_03210f68;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(lVar1,&local_68);
    local_68 = FUN_00f0b7d4;
    local_40 = DAT_03210f6c;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(lVar1,&local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0b7d4(void)

{
  return;
}




void FUN_00f0b7d8(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((param_2 & 1) == 0) {
    FUN_00f04694(param_1);
    FUN_00f04694(param_1,DAT_03210f58);
    FUN_00f04694(param_1,DAT_03210f70);
    FUN_00f04694(param_1,DAT_03210f64);
  }
  else {
    lVar1 = param_1 + 8;
    local_68 = FUN_00f0b7d4;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    local_40 = DAT_03210f84;
    FUN_009693a0(lVar1,&local_68);
    local_68 = FUN_00f0b7d4;
    local_40 = DAT_03210f58;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(lVar1,&local_68);
    local_68 = FUN_00f0b7d4;
    local_40 = DAT_03210f70;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(lVar1,&local_68);
    local_68 = FUN_00f0b7d4;
    local_40 = DAT_03210f64;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(lVar1,&local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0b920(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((param_2 & 1) == 0) {
    FUN_00f04694(param_1);
    FUN_00f04694(param_1,DAT_03210f5c);
    FUN_00f04694(param_1,DAT_03210f74);
    FUN_00f04694(param_1,DAT_03210f68);
  }
  else {
    lVar1 = param_1 + 8;
    local_68 = FUN_00f0b7d4;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    local_40 = DAT_03210f88;
    FUN_009693a0(lVar1,&local_68);
    local_68 = FUN_00f0b7d4;
    local_40 = DAT_03210f5c;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(lVar1,&local_68);
    local_68 = FUN_00f0b7d4;
    local_40 = DAT_03210f74;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(lVar1,&local_68);
    local_68 = FUN_00f0b7d4;
    local_40 = DAT_03210f68;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(lVar1,&local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0ba68(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((param_2 & 1) == 0) {
    FUN_00f04694(param_1);
    FUN_00f04694(param_1,DAT_03210f60);
    FUN_00f04694(param_1,DAT_03210f78);
    FUN_00f04694(param_1,DAT_03210f6c);
  }
  else {
    lVar1 = param_1 + 8;
    local_68 = FUN_00f0b7d4;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    local_40 = DAT_03210f8c;
    FUN_009693a0(lVar1,&local_68);
    local_68 = FUN_00f0b7d4;
    local_40 = DAT_03210f60;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(lVar1,&local_68);
    local_68 = FUN_00f0b7d4;
    local_40 = DAT_03210f78;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(lVar1,&local_68);
    local_68 = FUN_00f0b7d4;
    local_40 = DAT_03210f6c;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(lVar1,&local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0bbb0(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00f0bbd4(long param_1)

{
  FUN_00f13d08(param_1 + -0xb8);
  return;
}




void FUN_00f0bbdc(long param_1)

{
  FUN_00f13d08((void *)(param_1 + -0xb8));
  operator_delete((void *)(param_1 + -0xb8));
  return;
}




void FUN_00f0bc04(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}




void FUN_00f0bc10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = param_3;
  return;
}




bool FUN_00f0bc1c(float *param_1,float *param_2)

{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return param_1[2] == param_2[2];
  }
  return false;
}




bool FUN_00f0bc58(float *param_1,float *param_2)

{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return param_1[2] != param_2[2];
  }
  return true;
}




void FUN_00f0bc94(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = *param_3;
  uVar1 = *param_4;
  *(undefined4 *)(param_1 + 3) = param_5;
  *(undefined4 *)((long)param_1 + 0x1c) = param_6;
  param_1[2] = uVar1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f0bcb4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = _DAT_03218ef8;
  uVar1 = _DAT_03218ef8;
  param_1[3] = 0xffffffffffffffff;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  return;
}




bool FUN_00f0bcd8(float *param_1,float *param_2)

{
  bool bVar1;
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (((param_1[3] == param_2[3] && (param_1[4] == param_2[4])) && (param_1[5] == param_2[5])))) {
    bVar1 = false;
    if (param_1[6] == param_2[6]) {
      bVar1 = param_1[7] == param_2[7];
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}




uint FUN_00f0bd6c(void)

{
  uint uVar1;
  
  uVar1 = FUN_00f0bcd8();
  return ~uVar1 & 1;
}




void FUN_00f0bd88(undefined8 *param_1)

{
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_02825cd0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return;
}




void FUN_00f0bdbc(undefined8 *param_1,undefined4 param_2)

{
  FUN_00f13ca4();
  param_1[0x17] = 0;
  *param_1 = &PTR_FUN_02825cd0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = param_2;
  return;
}

