// functions/00e16 — 19 functions
#include "libGameKindred.h"




void FUN_00e16144(void)

{
  return;
}




bool FUN_00e16148(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  
  uVar2 = FUN_00d66d28();
  fVar3 = (float)thunk_FUN_00d086f0(uVar2,0,1);
  uVar1 = FUN_00d66cf4(param_1);
  return uVar1 < (uint)(int)fVar3;
}




void FUN_00e16188(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00d67b78(param_1);
    uVar3 = thunk_FUN_00d086f0(uVar2,1,1);
    *param_2 = uVar3;
  }
  return;
}




void FUN_00e161c8(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_00d66cf4(param_1);
    *param_2 = uVar1;
  }
  return;
}




int FUN_00e161fc(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d66d28(*param_1);
  fVar2 = (float)thunk_FUN_00d086f0(uVar1,0,1);
  return (int)fVar2;
}




float FUN_00e16224(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  
  uVar1 = FUN_00d66cf4(*param_1);
  uVar2 = FUN_00d66d28(*param_1);
  fVar3 = (float)thunk_FUN_00d086f0(uVar2,2,1);
  return 1.0 / (fVar3 * (float)uVar1 + 1.0);
}




float FUN_00e1627c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  
  uVar1 = FUN_00d66cf4(*param_1);
  uVar2 = FUN_00d66d28(*param_1);
  fVar3 = (float)thunk_FUN_00d086f0(uVar2,3,1);
  return fVar3 * (float)uVar1 + 1.0;
}




void FUN_00e162d0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_70;
  undefined4 local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d66d04(param_1,0x20,1);
  FUN_00d66d04(param_1,0x100,1);
  FUN_00d66d04(param_1,8,1);
  FUN_00d6a324(param_1,FUN_00e16148);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  lVar3 = FUN_00d4bc10();
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_70 = FUN_00e1627c;
  local_68 = 4;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_70);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,5);
  lVar3 = FUN_00d4bc24();
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_70 = FUN_00e16224;
  local_68 = 4;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_70);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,6);
  lVar3 = FUN_00d4bc24();
  uVar2 = FUN_00d2d01c(lVar3 + 0x10);
  uVar2 = FUN_00d9b610(uVar2,PTR_s_Buff_Blitz_SentryDefense_Cooldow_02bf0460);
  FUN_00d9b5b8();
  plVar4 = (long *)FUN_00d39930();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Blitz_SentryDefense_02bf0468);
  local_70 = (code *)CONCAT44(local_70._4_4_,0xffffffff);
  local_68 = 1;
  (**(code **)(*plVar4 + 0x10))(plVar4,&local_70);
  FUN_00d9b5b8(uVar2);
  plVar4 = (long *)FUN_00d2887c();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Blitz_SentryDefense_Cooldow_02bf0460);
  local_70 = FUN_00e16508;
  local_68 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_70);
  lVar3 = FUN_00d63f30(param_1);
  plVar4 = (long *)FUN_00d39930(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Blitz_SentryDefense_02bf0468);
  local_70 = FUN_00e161fc;
  local_68 = 4;
  (**(code **)(*plVar4 + 0x10))(plVar4,&local_70);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_70,lVar3 + 0x30);
  FUN_00d3e534();
  uVar2 = FUN_00e17320();
  FUN_00d42654(&local_70,uVar2);
  FUN_00d3e744(uVar2,FUN_00e16188);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e16508(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,4,1);
  return;
}




void FUN_00e16514(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40cd4(0x3f400000,uVar3,0x15,2,0,0);
  FUN_00d3e534();
  uVar3 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40cd4(0x3f400000,uVar3,0x14,2,0,0);
  lVar4 = FUN_00d66d28(param_1);
  lVar4 = *(long *)(lVar4 + 0x40);
  fVar5 = (*(float *)(lVar4 + 0x240) + 1.0) *
          (*(float *)(lVar4 + 0xd8) + *(float *)(lVar4 + 0x18c) * (*(float *)(lVar4 + 0x2f4) + 1.0))
  ;
  if (DAT_031b8fc0 <= fVar5) {
    fVar5 = DAT_031b8fc0;
  }
  fVar2 = DAT_031b8f00;
  if (DAT_031b8f00 <= fVar5) {
    fVar2 = fVar5;
  }
  FUN_00d3e534();
  uVar3 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40cd4(fVar2 * 0.1,uVar3,0x12,1,0,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e16680(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40cd4(0xbf800000,uVar3,0x15,2,0,0);
  FUN_00d3e534();
  uVar3 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40cd4(0xbf800000,uVar3,0x14,2,0,0);
  FUN_00d3e534();
  uVar3 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40cd4(0x432f0000,uVar3,7,1,0,0);
  FUN_00d3e534();
  uVar3 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40cd4(0x432f0000,uVar3,8,1,0,0);
  lVar4 = FUN_00d66d28(param_1);
  lVar4 = *(long *)(lVar4 + 0x40);
  fVar5 = (*(float *)(lVar4 + 0x240) + 1.0) *
          (*(float *)(lVar4 + 0xd8) + *(float *)(lVar4 + 0x18c) * (*(float *)(lVar4 + 0x2f4) + 1.0))
  ;
  if (DAT_031b8fc0 <= fVar5) {
    fVar5 = DAT_031b8fc0;
  }
  fVar2 = DAT_031b8f00;
  if (DAT_031b8f00 <= fVar5) {
    fVar2 = fVar5;
  }
  FUN_00d3e534();
  uVar3 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40cd4(fVar2 * 0.1,uVar3,0x12,1,0,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1685c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = FUN_00d67c60();
  uVar3 = FUN_00e6a474("revealed");
  uVar3 = FUN_0091ed5c("revealed",uVar3,0x12345678);
  (**(code **)(*(long *)(lVar5 + 0x100) + 8))(lVar5 + 0x100,uVar3);
  lVar5 = FUN_00d67c60(param_1);
  uVar3 = FUN_00e6a474("revealed");
  uVar3 = FUN_0091ed5c("revealed",uVar3,0x12345678);
  puVar6 = (undefined1 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar3);
  *puVar6 = 0;
  lVar5 = FUN_00d67c60(param_1);
  uVar3 = FUN_00e6a474("buffLifeTime");
  uVar3 = FUN_0091ed5c("buffLifeTime",uVar3,0x12345678);
  (**(code **)(*(long *)(lVar5 + 0x100) + 8))(lVar5 + 0x100,uVar3);
  lVar5 = FUN_00d67c60(param_1);
  uVar3 = FUN_00e6a474("buffLifeTime");
  uVar3 = FUN_0091ed5c("buffLifeTime",uVar3,0x12345678);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar3);
  *puVar7 = 0;
  uVar8 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,uVar8);
  FUN_00d66d28(param_1);
  iVar4 = FUN_00d5bc54();
  iVar2 = DAT_0314fd94;
  FUN_00d3e534();
  uVar8 = FUN_00d39980();
  FUN_00d42654(auStack_60,uVar8);
  if (iVar2 != iVar4) {
    uVar9 = 0x3fe00000;
    FUN_00d40cd4(0x3fe00000,uVar8,0x15,2,0,0);
    FUN_00d3e534();
    uVar8 = FUN_00d39980();
    FUN_00d42654(auStack_60,uVar8);
  }
  else {
    uVar9 = 0xbf800000;
    FUN_00d40cd4(0xbf800000,uVar8,0x15,2,1,0);
    FUN_00d3e534();
    uVar8 = FUN_00d39980();
    FUN_00d42654(auStack_60,uVar8);
  }
  FUN_00d40cd4(uVar9,uVar8,0x14,2,iVar2 == iVar4,0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e16ac0(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 local_60 [2];
  undefined4 local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d67c60();
  uVar2 = FUN_00e6a474("revealed");
  uVar2 = FUN_0091ed5c("revealed",uVar2,0x12345678);
  (**(code **)(*(long *)(lVar3 + 0x100) + 8))(lVar3 + 0x100,uVar2);
  lVar3 = FUN_00d67c60(param_1);
  uVar2 = FUN_00e6a474("revealed");
  uVar2 = FUN_0091ed5c("revealed",uVar2,0x12345678);
  puVar4 = (undefined1 *)(**(code **)(*(long *)(lVar3 + 0x100) + 0x10))(lVar3 + 0x100,uVar2);
  *puVar4 = 0;
  lVar3 = FUN_00d67c60(param_1);
  uVar2 = FUN_00e6a474("buffLifeTime");
  uVar2 = FUN_0091ed5c("buffLifeTime",uVar2,0x12345678);
  (**(code **)(*(long *)(lVar3 + 0x100) + 8))(lVar3 + 0x100,uVar2);
  lVar3 = FUN_00d67c60(param_1);
  uVar2 = FUN_00e6a474("buffLifeTime");
  uVar2 = FUN_0091ed5c("buffLifeTime",uVar2,0x12345678);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x100) + 0x10))(lVar3 + 0x100,uVar2);
  *puVar5 = 0;
  lVar3 = FUN_00d63f30(param_1);
  plVar6 = (long *)FUN_00d2a160(lVar3 + 0x10);
  (**(code **)(*plVar6 + 0x30))(plVar6,PTR_s_Buff_Blitz_SentryDefense_02bf0468);
  plVar6 = (long *)FUN_00d2a160(lVar3 + 0x10);
  (**(code **)(*plVar6 + 0x30))(plVar6,PTR_s_Buff_JungleMinion_Perk_NWScaling_02bf0958);
  uVar7 = FUN_00d67c60(param_1);
  FUN_00d425ec(local_60,uVar7);
  FUN_00d3e534();
  uVar7 = FUN_00d39980();
  FUN_00d42654(local_60,uVar7);
  FUN_00d40cd4(0xbf800000,uVar7,0x15,2,1,0);
  FUN_00d3e534();
  uVar7 = FUN_00d39980();
  FUN_00d42654(local_60,uVar7);
  FUN_00d40cd4(0xbf800000,uVar7,0x14,2,1,0);
  uVar7 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar7,4);
  lVar3 = FUN_00d4bc24();
  plVar6 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_60[0] = 0x3f400000;
  local_58 = 1;
  (**(code **)(*plVar6 + 0x30))(plVar6,local_60);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e16d34(void)

{
  return;
}




void FUN_00e16d38(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_60 [2];
  undefined4 local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67c60();
  FUN_00d425ec(local_60,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(local_60,uVar2);
  FUN_00d40cd4(0xbf800000,uVar2,0x15,2,1,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(local_60,uVar2);
  FUN_00d40cd4(0xbf800000,uVar2,0x14,2,1,0);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  lVar3 = FUN_00d4bc24();
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_60[0] = 0x3f000000;
  local_58 = 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,local_60);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e16e44(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65e5c();
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d3e39c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e16e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0xff,3);
  return;
}




void FUN_00e16e94(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_30,&local_38);
  uVar2 = FUN_00d66d28(local_30);
  uVar3 = FUN_00daa578(local_38,uVar2);
  if (((uVar3 & 1) != 0) && ((*(byte *)(*(long *)(local_38 + 0x20) + 0x2f5) >> 1 & 1) != 0)) {
    *(float *)(local_38 + 0x54) = *(float *)(local_38 + 0x54) * 0.9;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e16f20(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  FUN_00ceace8();
  uVar4 = FUN_00ceb054();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onBeforeApplyDamageName_02bed5f8;
    uVar3 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e16e94;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  return;
}




void FUN_00e16fa4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00ceace8();
  uVar2 = FUN_00ceb054();
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_00d67c60(param_1);
    FUN_00d425ec(auStack_40,uVar3);
    FUN_00d3e534();
    uVar3 = FUN_00d39980();
    FUN_00d42654(auStack_40,uVar3);
    FUN_00d40cd4(0xbeb33333,uVar3,5,2,1,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

