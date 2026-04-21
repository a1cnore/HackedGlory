// functions/00e23 — 29 functions
#include "libGameKindred.h"




void FUN_00e23004(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(*(long *)(param_1 + 0x428) + 0x10);
  return;
}




undefined8 FUN_00e23014(undefined8 *param_1)

{
  char cVar1;
  char cVar2;
  
  if (*(long *)(param_1[0x85] + 0x28) != 0) {
    FUN_00d67b84(*param_1);
    FUN_00d9e390();
    cVar1 = FUN_00d55870();
    cVar2 = FUN_00d55870(*(undefined8 *)(param_1[0x85] + 0x28));
    if (cVar1 != cVar2) {
      return 0;
    }
  }
  return 1;
}




uint FUN_00e23070(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  FUN_00d67b84(*param_1);
  lVar3 = FUN_00d9e390();
  puVar1 = PTR_s_Buff_Churnwalker_ChainTetherSelf_02bf07a0;
  if (lVar3 == 0) {
    uVar2 = 1;
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x18);
    while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    lVar4 = FUN_00d66d28(*param_1);
    uVar2 = FUN_00d6c130(lVar3,puVar1,*(undefined4 *)(lVar4 + 0x260));
    uVar2 = uVar2 ^ 1;
  }
  return uVar2 & 1;
}




void FUN_00e230fc(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  code *local_88;
  undefined4 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_88 = (code *)((ulong)local_88 & 0xffffffff00000000);
  FUN_00e23610(param_1,PTR_s_lastDamager_02bf0798,&local_88);
  lVar3 = FUN_00d65010(param_1);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d2945c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_CenterMass");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Churnwalker_ChainTether");
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa0))(plVar4,FUN_00e2293c);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  (**(code **)(*plVar4 + 0xb8))(plVar4,1);
  plVar4 = (long *)FUN_00d2945c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"CenterBody");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))
                             (plVar4,"Effect_Churnwalker_ChainTetherDamageDebuff");
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  plVar4 = (long *)FUN_00d2887c(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_RevealToBestowersTeamTrueSi_02bebb08);
  lVar3 = FUN_00d63f30(param_1);
  lVar3 = lVar3 + 0x10;
  FUN_00d314f8(lVar3);
  uVar5 = FUN_00d98a08();
  lVar6 = FUN_00d98a14(uVar5,PTR_s_freehooks_02bede98);
  uVar2 = DAT_031b9be0;
  *(undefined4 *)(lVar6 + 0x18) = 3;
  *(code **)(lVar6 + 0x30) = FUN_00e22eb4;
  *(undefined4 *)(lVar6 + 8) = uVar2;
  *(undefined2 *)(lVar6 + 0x1c) = 0x101;
  FUN_00e0c91c(lVar3);
  plVar4 = (long *)FUN_00d2cf7c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Churnwalker_A_CD_Reset_02bf07b0);
  local_88 = (code *)((ulong)local_88 & 0xffffffff00000000);
  local_80 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_88);
  plVar4 = (long *)FUN_00d2cf7c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Churnwalker_ChainTetherSelf_02bf07a0);
  lVar3 = FUN_00d66d28(param_1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,*(undefined4 *)(lVar3 + 0x260));
  uVar2 = FUN_00d66d34(param_1);
  (**(code **)(*plVar4 + 0x50))(plVar4,uVar2);
  uVar5 = FUN_00d64d7c(param_1);
  lVar3 = FUN_00d4891c(0x3dcccccd,uVar5,0);
  FUN_00d2d01c(lVar3 + 0x10);
  uVar5 = FUN_00d9b294();
  FUN_00d9b5c0(uVar5,FUN_00e22988);
  FUN_00d9b5b0();
  FUN_00d2a320();
  uVar5 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar5,5);
  lVar3 = FUN_00d4bc24();
  uVar5 = FUN_00d2d01c(lVar3 + 0x10);
  uVar5 = FUN_00d9b5c0(uVar5,FUN_00e22bb4);
  FUN_00d9b5b0();
  FUN_00e0c91c();
  FUN_00d9b5b0(uVar5);
  plVar4 = (long *)FUN_00d39584();
  local_88 = FUN_00e22b2c;
  local_80 = 4;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_88);
  uVar5 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar5,5);
  lVar3 = FUN_00d4bc24();
  uVar5 = FUN_00d2d01c(lVar3 + 0x10);
  uVar5 = FUN_00d9b5c0(uVar5,FUN_00e22bb4);
  FUN_00d9b5b0();
  uVar7 = FUN_00d39b7c();
  uVar7 = FUN_00d9cef8(uVar7,FUN_00e22c38);
  FUN_00d9cb40(uVar7,PTR_s_Buff_Churnwalker_ChainTether_02bf07a8);
  FUN_00d9b5b0(uVar5);
  uVar7 = FUN_00d39a54();
  FUN_00d3e604(uVar7,FUN_00e22c7c);
  FUN_00d9b5b0(uVar5);
  uVar7 = FUN_00d314f8();
  lVar3 = FUN_00d98a14(uVar7,PTR_s_lastDamager_02bf0798);
  *(undefined4 *)(lVar3 + 0x18) = 3;
  *(code **)(lVar3 + 0x30) = FUN_00e23004;
  *(undefined1 *)(lVar3 + 0x1c) = 1;
  FUN_00d9b5b0(uVar5);
  uVar5 = FUN_00d2d01c();
  uVar5 = FUN_00d9b5c0(uVar5,FUN_00e23014);
  FUN_00d9b5b0();
  plVar4 = (long *)FUN_00d2b818();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  local_88 = (code *)((ulong)local_88 & 0xffffffff00000000);
  local_80 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_88,1,3);
  (**(code **)(*plVar4 + 0x60))(plVar4,FUN_00e22ca8);
  FUN_00d9b5b0(uVar5);
  plVar4 = (long *)FUN_00d2cf7c();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Churnwalker_ChainTetherDama_02bf07b8);
  local_88 = (code *)CONCAT44(local_88._4_4_,0x3dcccccd);
  local_80 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_88);
  uVar5 = FUN_00d64d7c(param_1);
  lVar3 = FUN_00d4891c(0x3f000000,uVar5,0);
  FUN_00d39534(lVar3 + 0x10);
  plVar4 = (long *)FUN_00d2b818(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"DamagePercent",0);
  uVar5 = FUN_00d64d7c(param_1);
  lVar3 = FUN_00d4891c(0x3dcccccd,uVar5,0);
  uVar5 = FUN_00d2d01c(lVar3 + 0x10);
  FUN_00d9b5c0(uVar5,FUN_00e23070);
  FUN_00d9b5b0();
  FUN_00d2a320();
  lVar3 = FUN_00d64980(param_1);
  FUN_00d314f8(lVar3 + 0x10);
  uVar5 = FUN_00d98a08();
  lVar6 = FUN_00d98a14(uVar5,PTR_s_freehooks_02bede98);
  uVar2 = DAT_031b9be0;
  *(undefined4 *)(lVar6 + 0x18) = 3;
  *(code **)(lVar6 + 0x30) = FUN_00e22f34;
  *(undefined4 *)(lVar6 + 8) = uVar2;
  *(undefined2 *)(lVar6 + 0x1c) = 0x101;
  plVar4 = (long *)FUN_00d2cc5c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Churnwalker_Chain_Break_1");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Churnwalker_Chain_Break_2");
  lVar3 = FUN_00d09310();
  FUN_00d09f68(*(undefined4 *)(lVar3 + 0x420));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e23610(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar1 = FUN_00e6a474(param_2);
  uVar1 = FUN_0091ed5c(param_2,uVar1,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar1);
  uVar1 = *param_3;
  uVar2 = FUN_00e6a474(param_2);
  uVar2 = FUN_0091ed5c(param_2,uVar2,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar2);
  *puVar3 = uVar1;
  return;
}




void FUN_00e236a8(void)

{
  long lVar1;
  
  lVar1 = FUN_00d65010();
  FUN_00d29be4(lVar1 + 0x10);
  return;
}




void FUN_00e236c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc2c80000;
  return;
}




void FUN_00e236cc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28(*param_1);
  FUN_00da000c(uVar2,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((local_2c & 1) == 0);
}




void FUN_00e23728(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28(*param_1);
  FUN_00da000c(uVar2,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((local_2c & 4) == 0);
}




void FUN_00e23784(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28(*param_1);
  FUN_00da000c(uVar2,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((local_2c & 2) == 0);
}




void FUN_00e237e0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28(*param_1);
  FUN_00da000c(uVar2,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((local_2c & 8) == 0);
}




void FUN_00e2383c(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  uVar5 = (&DAT_031b9be8)[param_2];
  uVar1 = FUN_00d64d7c();
  lVar2 = FUN_00d4891c(0x3dcccccd,uVar1,0);
  uVar1 = FUN_00d2d01c(lVar2 + 0x10);
  uVar1 = FUN_00d9b5c0(uVar1,(&PTR_FUN_0281fcf0)[param_2]);
  FUN_00d9b5b0();
  uVar3 = FUN_00d2d01c();
  uVar3 = FUN_00d9b610(uVar3,uVar5);
  FUN_00d9b5b8();
  plVar4 = (long *)FUN_00d2887c();
  (**(code **)(*plVar4 + 0x30))(plVar4,uVar5);
  FUN_00d9b5b8(uVar1);
  uVar1 = FUN_00d2d01c();
  FUN_00d9b298(uVar1,uVar3);
  FUN_00d9b5b0();
  plVar4 = (long *)FUN_00d2a160();
                    /* WARNING: Could not recover jumptable at 0x00e238ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x30))(plVar4,uVar5);
  return;
}




void FUN_00e238f0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = 0xffffffff;
  FUN_00e23610(param_1,PTR_s_freehooks_02bede98,&local_3c);
  iVar2 = 0;
  do {
    FUN_00e2383c(param_1,iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e23974(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"CenterBody");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Churnwalker_ChurnCloud");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  (**(code **)(*plVar4 + 0x90))();
  uVar5 = FUN_00d64d7c(param_1);
  fVar6 = (float)FUN_00d5a3d0(uVar2,DAT_031ac900,1,9);
  lVar3 = FUN_00d4891c(1.0 / fVar6,uVar5,0);
  plVar4 = (long *)FUN_00d2b778(lVar3 + 0x10);
  local_48 = FUN_00e23ae8;
  local_40 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  (**(code **)(*plVar4 + 0x20))(0x3f800000);
  plVar4 = (long *)FUN_00d2b818(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  local_48 = FUN_00e23b00;
  local_40 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_48,1,3);
  (**(code **)(*plVar4 + 0x78))();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e23ae8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac900,3,9);
  return;
}




void FUN_00e23b00(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac900,2,9);
  return;
}




void FUN_00e23b18(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 local_58 [2];
  undefined4 local_50 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  lVar3 = FUN_00d9e390();
  lVar4 = FUN_00d66d28(param_1);
  lVar4 = *(long *)(lVar4 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  thunk_FUN_00d9ff34(local_50,PTR_s_Buff_Churnwalker_ChainTether_02bf07a8);
  uVar5 = FUN_00d6bca8(lVar4,local_50[0],*(undefined4 *)(lVar3 + 0x260),0);
  if ((uVar5 & 1) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    thunk_FUN_00d9ff34(local_58,PTR_s_Buff_Churnwalker_ChainTether_02bf07a8);
    uVar2 = FUN_00d6b630(lVar4,local_58[0],*(undefined4 *)(lVar3 + 0x260));
    uVar2 = FUN_00d6bf28(lVar4,uVar2);
  }
  FUN_00d69fc0(param_1,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e23c0c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_00d67b84(*param_1);
  lVar4 = FUN_00d9e390();
  *param_2 = lVar4;
  *param_4 = &DAT_01e277f2;
  iVar3 = FUN_00d6a078(*param_1);
  uVar1 = *(ushort *)(lVar4 + 0x88) & 0x1f;
  bVar2 = false;
  if (uVar1 != 0x1f) {
    bVar2 = *(ushort *)(lVar4 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2;
  }
  if ((iVar3 != -1) && (!bVar2)) {
    uVar5 = FUN_00d9fff0();
    *param_4 = uVar5;
  }
  return;
}




void FUN_00e23ca4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  FUN_00e23b18();
  iVar1 = FUN_00d6a078(param_1);
  if (iVar1 != -1) {
    lVar2 = FUN_00d65010(param_1);
    plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
    plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Churnwalker_ChainTetherDamage");
    plVar3 = (long *)(**(code **)(*plVar3 + 0xa0))(plVar3,FUN_00e23c0c);
    (**(code **)(*plVar3 + 0x78))(plVar3,1);
  }
  return;
}




void FUN_00e23d30(void)

{
  return;
}




void FUN_00e23d34(undefined8 *param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d66d28(*param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,0,6,0x19,0);
  *param_2 = -fVar2;
  return;
}




void FUN_00e23d74(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,6,0x19,0);
  return;
}




void FUN_00e23d88(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64980();
  plVar3 = (long *)FUN_00d2b6d8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Churnwalker__A_02beec38);
  local_38 = FUN_00e23d74;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e23e10(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d3bcb8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_chainHook1_hide");
                    /* WARNING: Could not recover jumptable at 0x00e23e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  return;
}




void FUN_00e23e4c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d3bcb8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_chainHook2_hide");
                    /* WARNING: Could not recover jumptable at 0x00e23e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  return;
}




void FUN_00e23e88(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d3bcb8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_chainHook3_hide");
                    /* WARNING: Could not recover jumptable at 0x00e23ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  return;
}




void FUN_00e23ec4(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d3bcb8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_chainHook4_hide");
                    /* WARNING: Could not recover jumptable at 0x00e23efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  return;
}




void FUN_00e23f00(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar3);
  uVar3 = FUN_00d47dc4(uVar3,"CenterBody");
  FUN_00da2040(uVar3,"Effect_Hero034_PfxShaderParamAura");
  FUN_00da210c(0,0x3f800000,0x3f800000);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar3);
  uVar3 = FUN_00d47d9c(uVar3);
  FUN_00da2040(uVar3,"Effect_Hero034_PfxRadiusParamTest");
  uVar3 = FUN_00da210c(0,0x3f800000,0x3f800000);
  FUN_00da20dc(uVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e23fe4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar3);
  uVar3 = FUN_00d47dc4(uVar3,"CenterBody");
  FUN_00da2040(uVar3,"Effect_Hero034_PfxShaderParamAura");
  FUN_00da210c(0x3f800000,0,0x3f800000);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar3);
  uVar3 = FUN_00d47d9c(uVar3);
  FUN_00da2040(uVar3,"Effect_Hero034_PfxRadiusParamTest");
  FUN_00da210c(0x3f800000,0,0x3f800000);
  uVar3 = FUN_00da213c(0x40400000);
  FUN_00da20dc(uVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

