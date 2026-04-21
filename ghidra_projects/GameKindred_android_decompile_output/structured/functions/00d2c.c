// functions/00d2c — 19 functions
#include "libGameKindred.h"




void FUN_00d2c010(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_50 [2];
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Gwen_Cleanse");
  local_50[0] = 0x3f800000;
  local_48 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,local_50);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0x90))();
  uVar4 = FUN_00d67c60(param_1);
  FUN_00d425ec(local_50,uVar4);
  FUN_00d3e534();
  uVar4 = FUN_00d2aa68();
  FUN_00d42654(local_50,uVar4);
  FUN_00d3f914(uVar4,0xd);
  FUN_00d3e534();
  uVar4 = FUN_00d2a504();
  FUN_00d42654(local_50,uVar4);
  FUN_00d3e534();
  uVar4 = FUN_00d2a994();
  FUN_00d42654(local_50,uVar4);
  FUN_00d46fc8(uVar4,2);
  FUN_00d3e534();
  uVar4 = FUN_00d2a6c0();
  FUN_00d42654(local_50,uVar4);
  lVar2 = FUN_00d65010(param_1);
  uVar4 = FUN_00d29a18(lVar2 + 0x10);
  FUN_00d46cdc(uVar4,0x12);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2c168(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d65548();
  lVar3 = FUN_00d4891c(0x3dcccccd,uVar2,0);
  uVar2 = FUN_00d29f44(lVar3 + 0x10);
  local_38 = FUN_00d2c210;
  local_30 = 3;
  FUN_00d47690(uVar2,1,&local_38);
  FUN_00d476e0(0,0x3f800000);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2ccfc(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x38))();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2c210(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00d2c224(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)FUN_00d59f54(param_2,2,5,0x19,0);
  fVar3 = (float)FUN_00d59f54(param_2,2,6,0x19,0);
  FUN_00d041e4(-((fVar2 / fVar3) * param_1),auStack_70,*(undefined4 *)(param_2 + 0x260),0x12,1,0,
               0xffffffff);
  FUN_00ce20fc(auStack_70);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2c2d8(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  undefined8 local_98;
  undefined1 auStack_90 [56];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_98);
  lVar3 = FUN_00d66d28(local_98);
  lVar4 = FUN_00d67c60(local_98);
  uVar2 = FUN_00e6a474("rampTimer");
  uVar2 = FUN_0091ed5c("rampTimer",uVar2,0x12345678);
  pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x10))(lVar4 + 0x100,uVar2);
  lVar4 = FUN_00d67c60(local_98);
  uVar2 = FUN_00e6a474("disableTimer");
  uVar2 = FUN_0091ed5c("disableTimer",uVar2,0x12345678);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x10))(lVar4 + 0x100,uVar2);
  lVar4 = FUN_00d67c60(local_98);
  uVar2 = FUN_00e6a474("__VAR1_FLOAT__");
  uVar2 = FUN_0091ed5c("__VAR1_FLOAT__",uVar2,0x12345678);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x10))(lVar4 + 0x100,uVar2);
  fVar8 = (float)FUN_00d59f54(lVar3,2,6,0x19,0);
  if (*pfVar6 <= 0.01) {
    if (*pfVar5 < fVar8 + -0.01) {
      *puVar7 = 0x3f800000;
      fVar8 = (float)FUN_00d59f54(lVar3,2,5,0x19,0);
      fVar9 = (float)FUN_00d59f54(lVar3,2,6,0x19,0);
      FUN_00d041e4(fVar8 / fVar9,auStack_90,*(undefined4 *)(lVar3 + 0x260),0x12,1,0,0xffffffff);
      FUN_00ce20fc(auStack_90);
      fVar8 = (float)FUN_00d67b0c(local_98);
      *pfVar5 = fVar8 + *pfVar5;
    }
  }
  else {
    fVar8 = (float)FUN_00d67b0c(local_98);
    *pfVar6 = *pfVar6 - fVar8;
    *puVar7 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2c51c(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_50);
  uVar3 = FUN_00d66d28(local_50);
  lVar4 = FUN_00d67c60(local_50);
  uVar2 = FUN_00e6a474("rampTimer");
  uVar2 = FUN_0091ed5c("rampTimer",uVar2,0x12345678);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x10))(lVar4 + 0x100,uVar2);
  FUN_00d2c224(*puVar5,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2c5d8(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_50,&local_58);
  uVar3 = FUN_00d66d28(local_50);
  uVar4 = FUN_00daa58c(local_58,uVar3);
  if (((((uVar4 & 1) != 0) && ((*(byte *)(local_58 + 0xc) >> 4 & 1) == 0)) &&
      (*(long *)(local_58 + 0x28) != 0)) &&
     ((*(byte *)(*(long *)(local_58 + 0x28) + 0x2f4) & 1) != 0)) {
    lVar5 = FUN_00d67c60(local_50);
    uVar2 = FUN_00e6a474("rampTimer");
    uVar2 = FUN_0091ed5c("rampTimer",uVar2,0x12345678);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar2);
    FUN_00d2c224(*puVar6,uVar3);
    lVar5 = FUN_00d67c60(local_50);
    uVar2 = FUN_00e6a474("rampTimer");
    uVar2 = FUN_0091ed5c("rampTimer",uVar2,0x12345678);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar2);
    *puVar6 = 0;
    uVar7 = FUN_00d59f54(uVar3,2,7,0x19,0);
    lVar5 = FUN_00d67c60(local_50);
    uVar2 = FUN_00e6a474("disableTimer");
    uVar2 = FUN_0091ed5c("disableTimer",uVar2,0x12345678);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar2);
    *puVar6 = uVar7;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2c778(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  int local_9c;
  undefined8 local_98;
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    FUN_00d69554(param_1,&local_98,&local_9c);
    lVar7 = FUN_00d66d28(local_98);
    if ((local_9c == DAT_0314f394) && (iVar4 = FUN_00d5c238(lVar7,2), iVar4 == 1)) {
      FUN_00d436dc(local_98);
      puVar3 = PTR_s_Buff_Gwen_Travel_02beb5d0;
      uVar1 = *(undefined4 *)(lVar7 + 0x260);
      uVar5 = FUN_00ceb350();
      FUN_00cfe864(0xbf800000,0,0,auStack_90,uVar1,uVar1,puVar3,uVar5,1,0,0);
      FUN_00ce20fc(auStack_90);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2c864(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = FUN_00d67c60();
  puVar2 = PTR_s_onAbilityUpgradedName_02bed538;
  uVar3 = FUN_00e6a474(PTR_s_onAbilityUpgradedName_02bed538);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d2c778;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  return;
}




void FUN_00d2c8d4(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d67c60(param_1);
    uVar4 = FUN_00e6a474("rampTimer");
    uVar4 = FUN_0091ed5c("rampTimer",uVar4,0x12345678);
    (**(code **)(*(long *)(lVar6 + 0x100) + 8))(lVar6 + 0x100,uVar4);
    lVar6 = FUN_00d67c60(param_1);
    uVar4 = FUN_00e6a474("disableTimer");
    uVar4 = FUN_0091ed5c("disableTimer",uVar4,0x12345678);
    (**(code **)(*(long *)(lVar6 + 0x100) + 8))(lVar6 + 0x100,uVar4);
    lVar6 = FUN_00d67c60(param_1);
    uVar4 = FUN_00e6a474("rampTimer");
    uVar4 = FUN_0091ed5c("rampTimer",uVar4,0x12345678);
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x100) + 0x10))(lVar6 + 0x100,uVar4);
    *puVar7 = 0;
    lVar6 = FUN_00d67c60(param_1);
    uVar4 = FUN_00e6a474("disableTimer");
    uVar4 = FUN_0091ed5c("disableTimer",uVar4,0x12345678);
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x100) + 0x10))(lVar6 + 0x100,uVar4);
    *puVar7 = 0;
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBuffIntervalName_02bed520;
    uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d2c2d8;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onPreCalculateDamageExchangeName_02bed5e8;
    uVar4 = FUN_00e6a474(PTR_s_onPreCalculateDamageExchangeName_02bed5e8);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d2c5d8;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onEndName_02bed518;
    uVar4 = FUN_00e6a474(PTR_s_onEndName_02bed518);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d2c51c;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  }
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar6 + 8);
  FUN_00d3e534();
  uVar8 = FUN_00d2965c();
  FUN_00d42654(auStack_60,uVar8);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_00d2cb84(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x4c010);
  if ((ulong)uVar2 == 0xffff) {
    __s = (void *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x98;
    if (uVar2 == *(ushort *)(param_1 + 0x4c012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c010) = uVar2;
    __s = (void *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c014) = *(int *)(param_1 + 0x4c014) + 1;
    memset(__s,0,0x60);
    FUN_00d3e824(__s);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return __s;
}




void FUN_00d2cc5c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a33a0();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00d2ccac(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099ff34();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00d2ccfc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a30a0();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




undefined1  [16] FUN_00d2cd4c(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  
  uVar1 = FUN_00d426b0(*param_1);
  auVar4 = thunk_FUN_00d086f0(uVar1,1,0x13);
  uVar6 = auVar4._8_8_;
  uVar5 = auVar4._0_8_;
  uVar2 = FUN_00d44be0(uVar1,PTR_s_Buff_Reza_Talent_Firemaker_02bee2c8);
  if ((uVar2 & 1) != 0) {
    fVar3 = (float)FUN_00d5a3d0(uVar1,DAT_031ac770,0,9);
    uVar5 = (ulong)(uint)(auVar4._0_4_ * fVar3);
    uVar6 = 0;
  }
  auVar4._8_8_ = uVar6;
  auVar4._0_8_ = uVar5;
  return auVar4;
}




void FUN_00d2cdc4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,6);
  FUN_00d4bc10();
  lVar3 = FUN_00d4bc38();
  uVar2 = FUN_00d2d01c(lVar3 + 0x10);
  FUN_00d9b700(uVar2,PTR_s_Buff_Reza_VolatileSpark_02beb5e8);
  FUN_00d9b5b0(uVar2);
  FUN_00d2cf2c();
  FUN_00d9b5b0(uVar2);
  plVar4 = (long *)FUN_00d2b818();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  local_48 = FUN_00d2cd4c;
  local_40 = 5;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48,1,1);
  FUN_00d9b5b0(uVar2);
  plVar4 = (long *)FUN_00d2cf7c();
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Reza_PlayVolatileSparkPfx_02beb5f0);
  FUN_00d9b5b0(uVar2);
  plVar4 = (long *)FUN_00d2cfcc();
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Reza_VolatileSpark_02beb5e8);
  FUN_00d9b5b8(uVar2);
  uVar2 = FUN_00d2d01c();
  FUN_00d9b610(uVar2,PTR_s_Buff_Reza_C_Netherform_02beb5f8);
  FUN_00d9b5b0(uVar2);
  FUN_00d2cf2c();
  FUN_00d9b5b0(uVar2);
  plVar4 = (long *)FUN_00d2cf7c();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Reza_VolatileSpark_02beb5e8);
  local_48 = FUN_00d2d06c;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2cf2c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a0bbc();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00d2cf7c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099d760();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00d2cfcc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099df88();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}

