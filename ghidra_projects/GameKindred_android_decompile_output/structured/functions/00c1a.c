// functions/00c1a — 25 functions
#include "libGameKindred.h"




void FUN_00c1a180(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00ce1c44();
  plVar1 = param_1 + 0x80;
  *param_1 = (long)&PTR_FUN_027f6cb8;
  FUN_00ab6c24(plVar1,0);
  *(undefined1 *)(param_1 + 0x71) = 1;
  local_78 = (code *)0x3f00000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_78);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00ab703c(0,0x42c80000,0x447a0000,plVar1,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,0);
  if ((*(float *)(param_1 + 0x88) != 0.0) || (*(float *)((long)param_1 + 0x444) != 0.0)) {
    param_1[0x88] = 0;
    FUN_0091ada4(plVar1);
  }
  local_78 = (code *)0x0;
  (**(code **)(param_1[0x80] + 0x28))(plVar1,&local_78);
  plVar1 = param_1 + 0x22;
  if ((*(float *)(param_1 + 0x2a) != 0.0) || (*(float *)((long)param_1 + 0x154) != 0.0)) {
    param_1[0x2a] = 0;
    FUN_0091ada4(plVar1);
  }
  local_78 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x22] + 0x28))(plVar1,&local_78);
  plVar2 = param_1 + 0x48;
  if ((*(float *)(param_1 + 0x50) != 0.0) || (*(float *)((long)param_1 + 0x284) != 0.0)) {
    param_1[0x50] = 0;
    FUN_0091ada4(plVar2);
  }
  local_78 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x48] + 0x28))(plVar2,&local_78);
  FUN_00b0360c(param_1,PTR_s_build___Fonts_Brandon_Regular_30_02be9c38,&DAT_01bee7fa);
  FUN_00b03834(param_1,3);
  FUN_00ce1cbc(param_1,1);
  *(uint *)((long)param_1 + 0x194) = *(uint *)((long)param_1 + 0x194) & 0xffffffef;
  FUN_00f04710(plVar1);
  FUN_00f0d9a4(plVar1,0);
  *(uint *)((long)param_1 + 0x2c4) = *(uint *)((long)param_1 + 0x2c4) & 0xffffffef;
  FUN_00f04710(plVar2);
  FUN_00f0d9a4(plVar2,0);
  local_50 = DAT_03210c64;
  local_78 = thunk_FUN_00ce1ef0;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 0x81,&local_78);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1a3e4(undefined1 param_1 [16],undefined4 param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,ulong param_6,ulong param_7,uint param_8)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FUN_00f13ca4();
  plVar6 = param_3 + 0x17;
  *param_3 = (long)&PTR_FUN_027f6db8;
  FUN_00f0d160(plVar6);
  plVar1 = param_3 + 0x3d;
  FUN_00f0d160(plVar1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar6,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  uVar5 = FUN_00e70b88(param_4,&DAT_03210450);
  if ((uVar5 & 1) != 0) {
    puVar2 = &DAT_0313acc8;
    if ((param_6 & 1) == 0) {
      puVar2 = &DAT_0313ac80;
    }
    FUN_00f0d92c(plVar6,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,puVar2);
    if ((param_7 & 1) != 0) {
      param_4 = FUN_00e6ce7c("MENU_CHAT_PLAYER_LABEL_YOU",0);
    }
    thunk_FUN_00e7051c(&local_78,param_4);
    FUN_00e705c8(&local_88,&DAT_01bbb66f);
    FUN_00e70c34(&local_78,&local_88);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
    FUN_00f0d75c(plVar6,&local_78);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
      local_78 = 0;
      local_70 = (void *)0x0;
    }
  }
  uVar7 = 0xffffffff;
  uVar3 = DAT_0313ac8c;
  if (((param_7 & 1) != 0) || (uVar3 = DAT_0313acc8, (param_6 & 1) != 0)) {
    uVar7 = uVar3;
  }
  local_88 = CONCAT44(local_88._4_4_,uVar7);
  FUN_00f0d9a4(plVar1,param_8 & 1);
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&local_88);
  FUN_00f0d75c(plVar1,param_5);
  FUN_00f07b18(0,plVar1,3,plVar6,1);
  FUN_00f07b18(0,plVar1,0,plVar6,0);
  uVar7 = (**(code **)(*param_3 + 0x58))(param_3,0,0,1,1);
  local_78 = CONCAT44(param_2,uVar7);
  FUN_00f13f18(param_3,&local_78);
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c1a624(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f6cb8;
  FUN_009c7fa8(param_1 + 0x80);
  FUN_00abd150(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c1a664(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f6db8;
  FUN_00f0d3a4(param_1 + 0x3d);
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c1a6a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f6db8;
  FUN_00f0d3a4(param_1 + 0x3d);
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c1a6f4(long param_1,int param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    lVar3 = (ulong)uVar1 * 0x30;
    do {
      if ((((int)plVar2[5] == param_2) && (plVar2[1] == param_4)) && (*plVar2 == param_3)) {
        FUN_0099c2fc((uint *)(param_1 + 8),plVar2,plVar2 + 6);
        return;
      }
      lVar3 = lVar3 + -0x30;
      plVar2 = plVar2 + 6;
    } while (lVar3 != 0);
  }
  return;
}




void FUN_00c1a748(undefined8 *param_1)

{
  FUN_00f13ca4();
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_027f6f00;
  return;
}




void FUN_00c1a77c(long param_1)

{
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_00c26c2c();
                    /* WARNING: Could not recover jumptable at 0x00c1a7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x90))();
    return;
  }
  return;
}




void FUN_00c1a7bc(long *param_1,long param_2)

{
  param_1[0x18] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00c1a7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  return;
}




void FUN_00c1a7d0(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




undefined4 * FUN_00c1a7f4(uint param_1)

{
  undefined4 *puVar1;
  
  if (param_1 - 1 < 3) {
    return (undefined4 *)(&PTR_DAT_027f7a80)[(int)(param_1 - 1)];
  }
  puVar1 = &DAT_0313af84;
  if ((param_1 & 1) != 0) {
    puVar1 = &DAT_0313af80;
  }
  return puVar1;
}




void FUN_00c1a82c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00f13ca4();
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_027f7050;
  uVar1 = FUN_00f136e0();
  FUN_00f13fd8(param_1,uVar1);
  return;
}




void FUN_00c1a86c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f7050;
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 8))();
  }
  param_1[0x18] = 0;
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c1a8b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f7050;
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 8))();
  }
  param_1[0x18] = 0;
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c1a904(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  void *pvVar2;
  
  plVar1 = (long *)FUN_00f14058();
  (**(code **)(*plVar1 + 0x50))();
  FUN_00f019d4(param_1,1);
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 8))();
  }
  param_1[0x18] = 0;
  pvVar2 = operator_new(0x1228);
  FUN_00c1c04c();
  param_1[0x18] = (long)pvVar2;
  FUN_00c1a9dc(pvVar2,param_2,param_3,param_4);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x18],1);
  plVar1 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_1[0x18],0,2);
                    /* WARNING: Could not recover jumptable at 0x00c1a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_00c1a9dc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f0d75c(param_1 + 0xba8);
  FUN_00c1aef8(param_1 + 0xcd8,param_3,param_4,param_1);
  FUN_00c1be70(param_1 + 0xe90,param_4);
  uVar2 = (**(code **)(*param_4 + 0x38))(param_4);
  *(undefined8 *)(param_1 + 0x1220) = uVar2;
  lVar3 = FUN_00e85318(0);
  FUN_00c1c4e0(&local_48,lVar3 - *(long *)(param_1 + 0x1220));
  FUN_00f0d75c(param_1 + 0x1000,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1aaa4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027f7198;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x3d;
  FUN_00f0e4a8(plVar2);
  FUN_00f0e4a8(param_1 + 0x5b);
  FUN_00f0e4a8(param_1 + 0x79);
  *(undefined1 *)(param_1 + 0x9d) = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  uVar3 = FUN_00f13624();
  FUN_00f13fd8(param_1,uVar3);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f1515c(uVar3,plVar1,0,2);
  *(uint *)((long)param_1 + 0x26c) = *(uint *)((long)param_1 + 0x26c) & 0xffffffbf;
  FUN_00f14070(plVar2,&DAT_02bf25ac);
  *(uint *)((long)param_1 + 0x26c) = *(uint *)((long)param_1 + 0x26c) & 0xfffffffb;
  FUN_00f0e548(plVar2,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"quest_normal_state");
  FUN_00f0d378(plVar1,DAT_0313af98);
  FUN_00f0d7fc(plVar1,&DAT_0313ae0c);
  FUN_00f14070(plVar1,&DAT_03211038);
  FUN_00f0da30(plVar1,1);
  FUN_00f0dac8(plVar1,3);
  FUN_00f0d9b0(plVar1,1);
  return;
}




void FUN_00c1ac1c(long param_1,undefined8 param_2,byte *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  byte *pbVar2;
  
  FUN_008fce60(param_1 + 0x4b8);
  FUN_008fce60(param_1 + 0x4d0,param_3);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
  }
  uVar1 = FUN_00e6ce7c(pbVar2,0);
  FUN_00f0d75c(param_1 + 0xb8,uVar1);
  FUN_00f13f68(param_1 + 0xb8,CONCAT44(param_5,param_4));
  return;
}




void FUN_00c1ac94(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x26c) =
       *(uint *)(param_1 + 0x26c) & 0xfffffff8 | *(uint *)(param_1 + 0x26c) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00c1aca8(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00f13f08(param_3 + 0x1e8);
  FUN_00f13db0(param_1,param_2,param_3);
  return;
}




void FUN_00c1ace8(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined2 local_40 [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x19;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = (long)&PTR_FUN_027f72e0;
  FUN_00f0e4a8(plVar1);
  uVar3 = FUN_00f13624();
  FUN_00f13fd8(param_1,uVar3);
  local_40[0] = 3;
  FUN_00f14070(param_1,local_40);
  FUN_00f13f68(param_1,0x50000003e8);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"quest_normal_state");
  local_40[0] = 3;
  FUN_00f14070(plVar1,local_40);
  FUN_00f13f68(plVar1,0x50000003e8);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1ade0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f72e0;
  FUN_00c1ae50();
  param_1[0x19] = &PTR_FUN_028266f0;
  param_1[0x30] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x33);
  FUN_00f13d08(param_1 + 0x19);
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c1ae50(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    uVar2 = 0;
    do {
      FUN_00f04710(*(undefined8 *)(*(long *)(param_1 + 0xc0) + uVar2 * 8));
      plVar1 = *(long **)(*(long *)(param_1 + 0xc0) + uVar2 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0xb8));
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  plVar1 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar1 + 0x50))();
  FUN_00f019d4(param_1,1);
  return;
}




void FUN_00c1aed4(void *param_1)

{
  FUN_00c1ade0();
  operator_delete(param_1);
  return;
}




void FUN_00c1aef8(long *param_1,undefined8 param_2,long *param_3,size_t param_4)

{
  size_t __n;
  size_t sVar1;
  byte *__s1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  byte *pbVar11;
  byte *__s2;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_c0 [8];
  long local_b8;
  undefined1 auStack_b0 [8];
  long local_a8;
  void *local_a0;
  code *local_98;
  size_t local_90;
  byte *local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  FUN_00c1ae50();
  plVar8 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar8 + 0x78))(plVar8,0,1);
  (**(code **)(*param_3 + 0x18))(&local_98,param_3);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x84) & 3 | (uint)(1 < (uint)local_98) << 2;
  FUN_00951534(&local_98,1);
  if (param_1[0x18] != 0) {
    *(undefined4 *)(param_1 + 0x17) = 0;
  }
  (**(code **)(*param_3 + 0x18))(&local_98,param_3);
  iVar7 = (uint)local_98;
  FUN_00951534(&local_98,1);
  if (iVar7 != 0) {
    uVar14 = 0;
    uVar2 = DAT_03210f58;
    uVar3 = DAT_03210f84;
    do {
      pvVar9 = operator_new(0x4f0);
      FUN_00c1aaa4();
      local_a0 = pvVar9;
      (**(code **)(*param_3 + 0x18))(auStack_b0,param_3);
      FUN_00c1ac1c(pvVar9,param_2,local_a8 + uVar14 * 0x18,300,0x50);
      FUN_00951534(auStack_b0,1);
      local_98 = FUN_00c1b24c;
      local_88 = (byte *)0x0;
      uStack_80 = 0;
      local_78 = local_a0;
      local_90 = param_4;
      local_70 = uVar2;
      FUN_009693a0((long)local_a0 + 8,&local_98);
      local_98 = FUN_00c1b24c;
      local_88 = (byte *)0x0;
      uStack_80 = 0;
      local_78 = local_a0;
      local_90 = param_4;
      local_70 = uVar3;
      FUN_009693a0((long)local_a0 + 8,&local_98);
      pvVar9 = local_a0;
      (**(code **)(*param_3 + 0x20))(&local_98,param_3);
      (**(code **)(*param_3 + 0x18))(auStack_c0,param_3);
      pbVar11 = (byte *)(local_b8 + uVar14 * 0x18);
      bVar5 = *pbVar11;
      uVar13 = (ulong)local_98 >> 1 & 0x7f;
      __n = uVar13;
      if (((ulong)local_98 & 1) != 0) {
        __n = local_90;
      }
      sVar1 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar11 + 8);
      }
      uVar12 = 0;
      if (__n == sVar1) {
        __s2 = *(byte **)(local_b8 + uVar14 * 0x18 + 0x10);
        __s1 = (byte *)((ulong)&local_98 | 1);
        if (((ulong)local_98 & 1) != 0) {
          __s1 = local_88;
        }
        if ((bVar5 & 1) == 0) {
          __s2 = pbVar11 + 1;
        }
        if (((ulong)local_98 & 1) == 0) {
          if (__n != 0) {
            lVar10 = -uVar13;
            pbVar11 = (byte *)((ulong)&local_98 | 1);
            do {
              if (*pbVar11 != *__s2) {
                uVar12 = 0;
                goto LAB_00c1b178;
              }
              pbVar11 = pbVar11 + 1;
              lVar10 = lVar10 + 1;
              __s2 = __s2 + 1;
            } while (lVar10 != 0);
          }
        }
        else if (__n != 0) {
          iVar7 = memcmp(__s1,__s2,__n);
          uVar12 = (uint)(iVar7 == 0);
          goto LAB_00c1b178;
        }
        uVar12 = 1;
      }
LAB_00c1b178:
      uVar4 = *(uint *)((long)pvVar9 + 0x26c);
      *(uint *)((long)pvVar9 + 0x26c) = uVar4 & 0xfffffff8 | uVar4 & 3 | uVar12 << 2;
      FUN_00951534(auStack_c0,1);
      if (((ulong)local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      FUN_00c1b254(param_1 + 0x17,&local_a0);
      (**(code **)(*param_1 + 0x78))(param_1,local_a0,1);
      plVar8 = (long *)FUN_00f14058(param_1);
      (**(code **)(*plVar8 + 0x68))(plVar8,local_a0,0,0x12);
      uVar14 = uVar14 + 1;
      (**(code **)(*param_3 + 0x18))(&local_98,param_3);
      uVar13 = (ulong)local_98 & 0xffffffff;
      FUN_00951534(&local_98,1);
    } while (uVar14 < uVar13);
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

