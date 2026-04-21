// functions/00c57 — 16 functions
#include "libGameKindred.h"




void thunk_FUN_00c57d20(long *param_1)

{
  float *pfVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0093dbe8();
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)((long)param_1 + 0x807c) = 1;
    uVar3 = (**(code **)(*param_1 + 0x138))(param_1);
    uVar3 = FUN_00c57e30(uVar3,param_1 + 0x641);
    FUN_00c57e30(uVar3,param_1 + 0xe05);
    pfVar1 = (float *)(param_1 + 0xe82);
    if ((*pfVar1 != 0.0) || (*(float *)((long)param_1 + 0x7414) != 0.0)) {
      pfVar1[0] = 0.0;
      pfVar1[1] = 0.0;
      FUN_0091ada4(param_1 + 0xe79);
    }
    uVar3 = FUN_00eff63c(0x3fc00000,0x3fc00000,0x3ecccccd,FUN_009a7608);
    FUN_00f022a0(param_1 + 0xe79,uVar3);
    if ((*(uint *)((long)param_1 + 0x5f4) & 0x7f80) != 0) {
      *(uint *)((long)param_1 + 0x5f4) = *(uint *)((long)param_1 + 0x5f4) & 0xffff807f;
      FUN_0091ada4(param_1 + 0xae);
    }
    uVar3 = FUN_00efee28(0,0x3ecccccd,FUN_009a7608);
    FUN_00f022a0(param_1 + 0xae,uVar3);
    return;
  }
  return;
}




void FUN_00c57538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c57544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x148))();
  return;
}




void FUN_00c57548(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c57580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x148) + 8))();
  return;
}




void FUN_00c57588(long param_1,long param_2)

{
  long lVar1;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x8070) = param_2;
  local_40[0] = 0xff000000;
  FUN_00cb0394(param_2,local_40);
  FUN_00f0e670(param_1 + 0x2a0,local_40,2);
  FUN_00f105ec(param_1 + 0x150,local_40,2);
  if (*(long *)(param_1 + 0x460) != 0) {
    FUN_00f0e628(param_1 + 0x390);
  }
  FUN_00a9bc60(param_1 + 0x390,*(undefined8 *)(param_2 + 0x28));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c57634(undefined4 param_1,undefined4 param_2,long *param_3)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  uStack_2c = param_2;
  FUN_00f13f18(param_3,&local_30);
  (**(code **)(*param_3 + 0x138))(param_3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00c57694(float param_1)

{
  return (param_1 + -40.0) / 1.3333 + 40.0;
}




float FUN_00c576c0(float param_1)

{
  return (param_1 + -40.0) * 1.3333 + 40.0;
}




void FUN_00c576ec(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c576f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00c576f8(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar7 = FUN_0093dbe8();
  if ((uVar7 & 1) == 0) {
    lVar1 = param_3 + 0x390;
    uVar8 = FUN_00f0eac0(lVar1);
    bVar6 = false;
    if (*(byte *)(param_3 + 0x807c) == 0) {
      bVar6 = *(char *)(param_3 + 0x807d) != '\0';
    }
    FUN_00b09454(param_3 + 0x3290,bVar6);
    *(uint *)(param_3 + 0x414) =
         *(uint *)(param_3 + 0x414) & 0xffffffef | (uint)*(byte *)(param_3 + 0x807c) << 4;
    if (*(float *)(param_3 + 0x324c) != 0.0) {
      *(undefined4 *)(param_3 + 0x324c) = 0;
      FUN_0091ada4(param_3 + 0x3208);
    }
    local_60 = FUN_00f0eac0(lVar1);
    uStack_5c = param_2;
    FUN_00f13f18(param_3 + 0x3068,&local_60);
    fVar9 = 0.0;
    FUN_00f07940(0,0,param_3 + 0x3068,6,lVar1,6);
    if (*(char *)(param_3 + 0x807d) != '\0') {
      FUN_00f07b18(0xc1200000,param_3 + 0x77e0,0,param_3 + 0x75a8,2);
      FUN_00f07b18(0,param_3 + 0x77e0,4,param_3 + 0x75a8,4);
      lVar2 = param_3 + 0x7270;
      FUN_00f13238(lVar2);
      FUN_00f07a18(0,0,param_3 + 0x73c8,8);
      lVar3 = param_3 + 0x7f80;
      FUN_00f13f08(0x43910000,0x43a00000,lVar3);
      lVar4 = param_3 + 0x7180;
      FUN_00f07b18(0x43250000,lVar4,3,lVar3,1);
      FUN_00f07b18(0xc2200000,lVar4,5,lVar3,5);
      FUN_00f07b18(0x41200000,lVar2,3,lVar4,1);
      FUN_00f07b18(0,lVar2,5,lVar4,5);
      FUN_00f13238(param_3 + 0x7028);
      fVar9 = 0.0;
      FUN_00f07940(0,0,param_3 + 0x7910,8,lVar3,8);
    }
    FUN_00c57a9c(param_3);
    lVar2 = param_3 + 0x4c90;
    lVar3 = param_3 + 0x6b80;
    FUN_00f07b18(0x80000000,lVar2,2,lVar3,0);
    FUN_00f07b18(0,lVar2,4,lVar3,4);
    FUN_00f07b18(0xc2dc0000,param_3 + 0x7028,2,lVar2,0);
    FUN_00f07b18(0x428c0000,param_3 + 0x7028,4,lVar2,4);
    lVar4 = param_3 + 0x4b60;
    FUN_00f0dad0((float)uVar8 + -60.0,lVar4,1);
    FUN_00f07b18(0xc3d20000,lVar4,2,lVar2,0);
    FUN_00f07b18(0,lVar4,4,lVar2,4);
    FUN_00f080a0(lVar4,4,lVar3,6);
    lVar2 = param_3 + 0x4980;
    FUN_00f13f08(uVar8,fVar9 + 70.0,lVar2);
    FUN_00f07940(0,0,lVar2,6,lVar1,6);
    FUN_00f13f08(uVar8,0x42700000,param_3 + 0x4a70);
    FUN_00f07940(0,0,param_3 + 0x4a70,6,lVar2,4);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c57a9c(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = FUN_0093dbe8();
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar1 = param_1 + 0x6e08;
  FUN_00f07b18(0x40800000,lVar1,3,param_1 + 0x6cd8,1);
  FUN_00f07b18(0,lVar1,5,param_1 + 0x6cd8,5);
  FUN_00f07b18(0x40800000,param_1 + 0x6ef8,3,lVar1,1);
  FUN_00f07b18(0,param_1 + 0x6ef8,5,lVar1,5);
  FUN_00f13238(param_1 + 0x6b80);
  FUN_00f07940(0,0xc2200000,param_1 + 0x6b80,6,param_1 + 0x390,6);
  return;
}




void FUN_00c57b8c(long *param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
    return;
  }
  *(uint *)((long)param_1 + 0x7d4) =
       *(uint *)((long)param_1 + 0x7d4) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x7d4) & 3 | (param_2 & 1) << 2;
  FUN_00b09454(param_1 + 0xea);
                    /* WARNING: Could not recover jumptable at 0x00c57be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c57be4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x750;
  *(uint *)(param_1 + 0x26c4) = *(uint *)(param_1 + 0x26c4) & 0xfffffffb;
  (**(code **)(*(long *)(param_1 + 0x750) + 0x180))(lVar1);
  uVar2 = FUN_00e6ce7c("MENU_SKINS_HUB_COMING_SOON_LABEL",0);
  FUN_00ab7498(lVar1,uVar2);
  FUN_00b09454(lVar1,0);
  return;
}




void FUN_00c57c40(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0093dbe8();
  if ((uVar2 & 1) == 0) {
    FUN_00caf12c(param_2,param_1 + 0xea);
    lVar3 = FUN_00caf2d4(param_2);
    if (lVar3 != 0) {
      FUN_00f0e578(param_1 + 0x5c9,lVar3);
    }
    FUN_00e70510(&local_48);
    FUN_00e70e18(&local_48,&DAT_01bb6d43,param_3);
    FUN_00f0d75c(param_1 + 0x5e7,&local_48);
    (**(code **)(*param_1 + 0x138))(param_1);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c57d10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c57d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x148))();
  return;
}




void FUN_00c57d20(long *param_1)

{
  float *pfVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0093dbe8();
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)((long)param_1 + 0x807c) = 1;
    uVar3 = (**(code **)(*param_1 + 0x138))(param_1);
    uVar3 = FUN_00c57e30(uVar3,param_1 + 0x641);
    FUN_00c57e30(uVar3,param_1 + 0xe05);
    pfVar1 = (float *)(param_1 + 0xe82);
    if ((*pfVar1 != 0.0) || (*(float *)((long)param_1 + 0x7414) != 0.0)) {
      pfVar1[0] = 0.0;
      pfVar1[1] = 0.0;
      FUN_0091ada4(param_1 + 0xe79);
    }
    uVar3 = FUN_00eff63c(0x3fc00000,0x3fc00000,0x3ecccccd,FUN_009a7608);
    FUN_00f022a0(param_1 + 0xe79,uVar3);
    if ((*(uint *)((long)param_1 + 0x5f4) & 0x7f80) != 0) {
      *(uint *)((long)param_1 + 0x5f4) = *(uint *)((long)param_1 + 0x5f4) & 0xffff807f;
      FUN_0091ada4(param_1 + 0xae);
    }
    uVar3 = FUN_00efee28(0,0x3ecccccd,FUN_009a7608);
    FUN_00f022a0(param_1 + 0xae,uVar3);
    return;
  }
  return;
}




void FUN_00c57e30(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  FUN_00f01980(param_2);
  if ((*(uint *)(param_2 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xffff807f;
    FUN_0091ada4(param_2);
  }
  lVar1 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_02825100;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar2 = FUN_00eff008(0,0x41a00000,0,0);
  uVar3 = FUN_00efee28(0x3f800000,0x3ecccccd,FUN_009a7608);
  uVar4 = FUN_00eff008(0,0xc1a00000,0x3ecccccd,FUN_009a7608);
  lVar1 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcd98(puVar7);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar7,uVar3,uVar4,0);
  FUN_00f02308(param_2,puVar6,uVar2,puVar7,0);
  return;
}

