// functions/00d2b — 28 functions
#include "libGameKindred.h"




bool FUN_00d2b048(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x428);
  if (lVar1 != 0) {
    return *(float *)(*(long *)(*(long *)(lVar1 + 0x20) + 0x40) + 0x308) < *(float *)(lVar1 + 0x54);
  }
  return false;
}




void FUN_00d2b074(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  lVar3 = FUN_00d4bc10();
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48[0] = 0x40400000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,local_48);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,6);
  lVar3 = FUN_00d4bc10();
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  lVar5 = FUN_00d29edc(lVar3 + 0x10);
  *(code **)(lVar5 + 8) = FUN_00d2b048;
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x88);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_DelayedDestroy_02beb3e8);
  local_48[0] = 0x40400000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2b164(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = rand();
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"CenterBody");
  (**(code **)(*plVar4 + 0x48))(plVar4,(&PTR_s_Effect_AceBuff_0281a918)[iVar2 % 0xb]);
  plVar4 = (long *)FUN_00d2a110(lVar3 + 0x10);
  local_58[0] = 0x40400000;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,0x10,1,local_58);
  uVar5 = FUN_00d64d7c(param_1);
  fVar6 = (float)FUN_00d6a1f8(param_1);
  fVar7 = (float)FUN_00d6a25c(param_1);
  iVar2 = rand();
  lVar3 = FUN_00d4891c(fVar6 + (fVar7 - fVar6) * (float)iVar2 * 4.656613e-10,uVar5,0);
  plVar4 = (long *)FUN_00d2b778(lVar3 + 0x10);
  local_58[0] = 0x42c80000;
  local_50 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,local_58);
  (**(code **)(*plVar4 + 0x40))(plVar4,0x1001);
  plVar4 = (long *)FUN_00d2b7c8(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))();
  (**(code **)(*plVar4 + 0x30))(plVar4,0xd9);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2b2f8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  FUN_00d29fe4(lVar2 + 0x10);
  uVar3 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar3,4);
  uVar3 = FUN_00d4bc24();
  uVar3 = FUN_00d4bce8(uVar3,1);
  lVar2 = FUN_00d4bca4(uVar3,1);
  plVar4 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_48[0] = 0;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,local_48);
  FUN_00d2ab44(lVar2 + 0x10);
  uVar3 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar3,4);
  uVar3 = FUN_00d4bc24();
  lVar2 = FUN_00d4bce8(uVar3,0x40000000);
  plVar4 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_48[0] = 0;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,local_48);
  lVar2 = FUN_00d64980(param_1);
  plVar4 = (long *)FUN_00d2b778(lVar2 + 0x10);
  local_48[0] = 0x42480000;
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,local_48);
  (**(code **)(*plVar4 + 0x38))(plVar4,8);
  plVar4 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  local_48[0] = 0x47c34f80;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48,2,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2b45c(void)

{
  long lVar1;
  
  lVar1 = FUN_00d65010();
  FUN_00d29fe4(lVar1 + 0x10);
  return;
}




void FUN_00d2b474(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d29c84(lVar1 + 0x10);
  FUN_00d46b64(uVar2,0x1e);
  return;
}




undefined8 * FUN_00d2b494(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
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
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c014) = *(int *)(param_1 + 0x4c014) + 1;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    FUN_00d41858(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




undefined8 * FUN_00d2b564(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
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
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c014) = *(int *)(param_1 + 0x4c014) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d408c0(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d2b638(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a1928();
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




void FUN_00d2b688(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a23c4();
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




void FUN_00d2b6d8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099f738();
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




void FUN_00d2b728(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099fd8c();
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




void FUN_00d2b778(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a1038();
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




void FUN_00d2b7c8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a166c();
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




void FUN_00d2b818(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099e42c();
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




void FUN_00d2b868(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2a160(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_GameObjectives_River5v5Bonu_02beb580);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00d2b8b0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,3);
  lVar3 = FUN_00d4bc24();
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_GameObjectives_River5v5Aura_02beb578);
  local_38[0] = 0x40a00000;
  local_30 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2b93c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d66d28(*param_1);
  uVar2 = FUN_00d9ea08();
  thunk_FUN_00d9ff34(local_30,PTR_s_Buff_RiverHero_02beb4f8);
  uVar3 = FUN_00d6bbac(uVar2,local_30[0],0);
  uVar4 = 0;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0x3f000000;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00d2b9c0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d66d28(*param_1);
  uVar2 = FUN_00d9ea08();
  thunk_FUN_00d9ff34(local_30,PTR_s_Buff_RiverHero_02beb4f8);
  uVar3 = FUN_00d6bbac(uVar2,local_30[0],0);
  uVar4 = 0x3f000000;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00d2ba44(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_4c = FUN_00d6a1f8();
  local_50 = 0;
  FUN_00d67dcc(param_1,FUN_00d69fb8);
  lVar2 = FUN_00d65010(param_1);
  uVar3 = FUN_00d29f44(lVar2 + 0x10);
  local_48 = FUN_00d2b93c;
  local_40 = 4;
  uVar3 = FUN_00d47690(uVar3,1,&local_48);
  FUN_00d476cc(uVar3,&local_50);
  uVar3 = FUN_00d29f44(lVar2 + 0x10);
  local_48 = FUN_00d2b9c0;
  local_40 = 4;
  FUN_00d47690(uVar3,1,&local_48);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2bb1c(undefined8 *param_1,undefined4 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_00d66d28(*param_1);
  *param_2 = *(undefined4 *)(lVar1 + 0x260);
  return;
}




void FUN_00d2bb48(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  float local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00d66d28(*param_1);
  lVar5 = FUN_00d67c60(*param_1);
  puVar2 = PTR_s_vain_node_respawn_pfx_02beb590;
  uVar3 = FUN_00e6a474(PTR_s_vain_node_respawn_pfx_02beb590);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar3);
  uVar3 = *puVar6;
  fVar7 = (float)FUN_00d67b34(*param_1);
  fVar8 = (float)FUN_00d67b3c(*param_1);
  local_5c = 1.0 - fVar7 / fVar8;
  FUN_00d5a7c4(uVar4,uVar3,"Percent",1,&local_5c);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2bc40(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_VainCrystal_Node_DeadGlow");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  uVar3 = FUN_00d65548(param_1);
  lVar1 = FUN_00d4891c(0x3dcccccd,uVar3,0);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_VainCrystal_Node_Timer");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00d2bd1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_00d2bd20(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2a504();
  FUN_00d42654(auStack_40,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2cb84();
  FUN_00d42654(auStack_40,uVar2);
  FUN_00d3e888(0xbf800000,0,0,uVar2,PTR_s_Buff_Gwen_PerkReady_02beb5a8,1,0xffffffff,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d2a6c0();
  FUN_00d42654(auStack_40,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2bde4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d29a68();
  FUN_00d42654(auStack_40,uVar3);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_40,lVar2 + 0x20);
  FUN_00d3e534();
  uVar3 = FUN_00d2a504();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d2cb84();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d3e888(0xbf800000,0,0,uVar3,PTR_s_Buff_Gwen_PerkReady_02beb5a8,1,0xffffffff,0,0);
  FUN_00d3e534();
  uVar3 = FUN_00d2a6c0();
  FUN_00d42654(auStack_40,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2bed4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Gwen_Empowered_Loaded");
  lVar1 = FUN_00d09310();
  FUN_00d09d1c(*(undefined4 *)(lVar1 + 0x354));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d2ccac(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Gwen__PerkAttack_02beaee8);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Pistol");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Gwen_PowerUp");
                    /* WARNING: Could not recover jumptable at 0x00d2bf94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  return;
}




void FUN_00d2bf98(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00d2bffc;
  local_30 = 3;
  FUN_00d42b30(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2bffc(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x84,0);
  return;
}

