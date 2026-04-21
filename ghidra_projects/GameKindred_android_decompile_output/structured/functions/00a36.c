// functions/00a36 — 14 functions
#include "libGameKindred.h"




void FUN_00a36250(long *param_1,undefined1 param_2)

{
  *(undefined1 *)((long)param_1 + 0x1647) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00a36260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_00a36264(undefined4 param_1,undefined4 param_2,long param_3,uint param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_3 + 0x1638) = param_1;
  *(undefined4 *)(param_3 + 0x1640) = param_2;
  if ((param_4 & 1) != 0) {
    FUN_009bbfb0();
    uVar1 = FUN_009bc268();
    *(undefined4 *)(param_3 + 0x163c) = uVar1;
  }
  return;
}




void FUN_00a36298(long param_1)

{
  float fVar1;
  
  FUN_009bbfb0();
  fVar1 = (float)FUN_009bc268();
  FUN_00e70e18(param_1 + 0x1458,"%02d",
               (((int)(*(float *)(param_1 + 0x1640) - (fVar1 - *(float *)(param_1 + 0x163c))) + 5) /
               5) * 5);
  FUN_00e70e18(param_1 + 0x1468,"%02d",0);
  FUN_00f0d75c(param_1 + 0x11f8,param_1 + 0x1458);
  FUN_00f0d75c(param_1 + 0x1328,param_1 + 0x1468);
  return;
}




void FUN_00a36348(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x24c) =
       *(uint *)(param_1 + 0x24c) & 0xfffffff0 | *(uint *)(param_1 + 0x24c) & 7 | (param_2 & 1) << 3
  ;
  return;
}




void FUN_00a3635c(long param_1,ushort param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x1647) & 0xf000 |
          *(ushort *)(param_1 + 0x1647) & 0x7ff | (param_2 & 1) << 0xb;
  *(ushort *)(param_1 + 0x1647) = uVar1;
  FUN_00b89d24(0x3e4ccccd,param_1 + 0x1c8,((uVar1 ^ 0xffff) & 0x1800) == 0,2,1);
  return;
}




void FUN_00a36398(long param_1)

{
  FUN_00b89d24(0x3e4ccccd,param_1 + 0x1c8,((*(ushort *)(param_1 + 0x1647) ^ 0xffff) & 0x1800) == 0,2
               ,1);
  return;
}




float FUN_00a363c8(long param_1)

{
  float fVar1;
  
  FUN_009bbfb0();
  fVar1 = (float)FUN_009bc268();
  return *(float *)(param_1 + 0x1640) - (fVar1 - *(float *)(param_1 + 0x163c));
}




void FUN_00a363fc(long *param_1)

{
  ushort *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort uVar9;
  ushort *puVar10;
  float fVar11;
  undefined4 local_80 [2];
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  FUN_009bbfb0();
  fVar11 = (float)FUN_009bc268();
  puVar1 = (ushort *)((long)param_1 + 0x1647);
  fVar11 = *(float *)(param_1 + 0x2c8) - (fVar11 - *(float *)((long)param_1 + 0x163c));
  if ((0.0 < fVar11) || ((*puVar1 >> 10 & 1) != 0)) {
    if (((*puVar1 >> 10 & 1) == 0) || (fVar11 <= 0.0)) goto LAB_00a3675c;
    FUN_00f01980(param_1 + 0x265);
    FUN_00f01980(param_1 + 0x23f);
    if ((~*(uint *)((long)param_1 + 0x127c) & 0x7f80) != 0) {
      *(uint *)((long)param_1 + 0x127c) = *(uint *)((long)param_1 + 0x127c) | 0x7f80;
      FUN_0091ada4(param_1 + 0x23f);
    }
    if ((~*(uint *)((long)param_1 + 0x13ac) & 0x7f80) != 0) {
      *(uint *)((long)param_1 + 0x13ac) = *(uint *)((long)param_1 + 0x13ac) | 0x7f80;
      FUN_0091ada4(param_1 + 0x265);
    }
    (**(code **)(*param_1 + 0x138))(param_1);
    *(uint *)((long)param_1 + 0x1584) = *(uint *)((long)param_1 + 0x1584) & 0xfffffffb;
    uVar9 = *puVar1 & 0xfbff;
  }
  else {
    (**(code **)(*param_1 + 0x138))(param_1);
    uVar6 = FUN_00efee28(0,0x3e99999a,FUN_0091aa80);
    FUN_00f01980(param_1 + 0x23f);
    FUN_00f022a0(param_1 + 0x23f,uVar6);
    uVar6 = FUN_00efee28(0,0x3e99999a,FUN_0091aa80);
    FUN_00f01980(param_1 + 0x265);
    FUN_00f022a0(param_1 + 0x265,uVar6);
    plVar2 = param_1 + 0x2a0;
    *(uint *)((long)param_1 + 0x1584) = *(uint *)((long)param_1 + 0x1584) | 4;
    uVar6 = FUN_00efed6c(0x3f19999a);
    uVar7 = FUN_00eff224(0x3f000000,plVar2,&DAT_01b9fbd4,FUN_00a36794);
    local_80[0] = 0xff000080;
    uVar8 = FUN_00eff224(0x3f000000,plVar2,local_80,FUN_00a36794);
    lVar5 = DAT_03210d00;
    uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar9 == 0xffff) {
      puVar10 = (ushort *)0x0;
    }
    else {
      puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
      if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar9 = 0xffff;
      }
      else {
        uVar9 = *puVar10;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
      *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
      FUN_00efd208(puVar10);
      *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
    }
    FUN_00efd2dc(puVar10,uVar7,uVar8,0);
    FUN_00efd3bc(puVar10);
    FUN_00f01980(plVar2);
    FUN_00f02308(plVar2,uVar6,puVar10,0);
    uVar6 = FUN_00eff63c(0x3f800000,0x3f800000,0x3f19999a,FUN_0091aa80);
    plVar3 = param_1 + 0x28f;
    if ((*(float *)(param_1 + 0x298) != 0.2) || (*(float *)((long)param_1 + 0x14c4) != 0.2)) {
      param_1[0x298] = 0x3e4ccccd3e4ccccd;
      FUN_0091ada4(plVar3);
    }
    FUN_00f01980(plVar3);
    FUN_00f022a0(plVar3,uVar6);
    if (*(char *)((long)param_1 + 0x1645) != *(char *)((long)param_1 + 0x1646)) {
      uVar6 = FUN_00e6ce7c("HUD_BLITZ_TIMES_UP",0);
      FUN_00f0d75c(plVar2,uVar6);
    }
    uVar9 = *puVar1 | 0x400;
  }
  *puVar1 = uVar9;
LAB_00a3675c:
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00a36794(float param_1,float param_2,float param_3,float param_4)

{
  param_1 = param_1 / (param_4 * 0.5);
  if (1.0 <= param_1) {
    param_1 = param_1 + -2.0;
    param_1 = param_3 * 0.5 * (param_1 * param_1 * param_1 + 2.0);
  }
  else {
    param_1 = param_1 * param_1 * param_3 * 0.5 * param_1;
  }
  return param_1 + param_2;
}




void FUN_00a367e8(long *param_1)

{
  ushort *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort *puVar8;
  float fVar9;
  undefined4 local_80 [2];
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  FUN_009bbfb0();
  fVar9 = (float)FUN_009bc268();
  puVar1 = (ushort *)((long)param_1 + 0x1647);
  fVar9 = *(float *)(param_1 + 0x2c8) - (fVar9 - *(float *)((long)param_1 + 0x163c));
  if ((10.0 < fVar9) || ((*puVar1 >> 8 & 1) != 0)) {
    if (((*puVar1 >> 8 & 1) == 0) || (fVar9 <= 10.0)) goto LAB_00a36b14;
    plVar2 = param_1 + 0x23f;
    uVar5 = FUN_00eff224(0x3e4ccccd,plVar2,&DAT_01b9fbd0,FUN_00a36794);
    FUN_00f01980(plVar2);
    FUN_00f022a0(plVar2,uVar5);
    plVar2 = param_1 + 0x265;
    uVar5 = FUN_00eff224(0x3e4ccccd,plVar2,&DAT_01b9fbd0,FUN_00a36794);
    FUN_00f01980(plVar2);
    FUN_00f022a0(plVar2,uVar5);
    uVar7 = *puVar1 & 0xfeff;
  }
  else {
    plVar2 = param_1 + 0x23f;
    uVar5 = FUN_00eff224(0x3f000000,plVar2,&DAT_01b9fbd4,FUN_00a36794);
    local_80[0] = 0xff000080;
    uVar6 = FUN_00eff224(0x3f000000,plVar2,local_80,FUN_00a36794);
    lVar4 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efd208(puVar8);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efd2dc(puVar8,uVar5,uVar6,0);
    FUN_00efd3bc(puVar8);
    FUN_00f01980(plVar2);
    FUN_00f022a0(plVar2,puVar8);
    plVar2 = param_1 + 0x265;
    uVar5 = FUN_00eff224(0x3f000000,plVar2,&DAT_01b9fbd4,FUN_00a36794);
    local_80[0] = 0xff000080;
    uVar6 = FUN_00eff224(0x3f000000,plVar2,local_80,FUN_00a36794);
    lVar4 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efd208(puVar8);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efd2dc(puVar8,uVar5,uVar6,0);
    FUN_00efd3bc(puVar8);
    FUN_00f01980(plVar2);
    FUN_00f022a0(plVar2,puVar8);
    uVar7 = *puVar1 | 0x100;
  }
  *puVar1 = uVar7;
  (**(code **)(*param_1 + 0x138))(param_1);
LAB_00a36b14:
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a36b4c(long *param_1)

{
  ushort *puVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  FUN_009bbfb0();
  fVar7 = (float)FUN_009bc268();
  puVar1 = (ushort *)((long)param_1 + 0x1647);
  uVar3 = *puVar1;
  plVar2 = param_1 + 0x28b;
  fVar7 = *(float *)(param_1 + 0x2c8) - (fVar7 - *(float *)((long)param_1 + 0x163c));
  iVar4 = FUN_00e70b14(plVar2);
  if (fVar7 <= 60.0) {
    fVar8 = (float)(int)fVar7;
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    FUN_00e70e18(plVar2,"%02d",(int)fVar8);
    FUN_00e70e18(param_1 + 0x28d,"%02d",(int)((fVar7 - fVar8) * 100.0));
    FUN_00f0d75c(param_1 + 0x23f,plVar2);
    FUN_00f0d75c(param_1 + 0x265,param_1 + 0x28d);
    uVar5 = *puVar1 | 0x200;
    *puVar1 = (ushort)uVar5;
    uVar6 = *(uint *)((long)param_1 + 0x13ac) | 4;
  }
  else {
    FUN_00e70e18(plVar2,"%d:%02d",(int)(fVar7 / 60.0),(int)fVar7 % 0x3c);
    FUN_00f0d75c(param_1 + 0x23f,plVar2);
    uVar5 = *puVar1 & 0xfffffdff;
    *puVar1 = (ushort)uVar5;
    uVar6 = *(uint *)((long)param_1 + 0x13ac) & 0xfffffffb;
  }
  *(uint *)((long)param_1 + 0x13ac) = uVar6;
  if ((((uVar5 ^ uVar3) >> 9 & 1) == 0) &&
     ((iVar4 != 0 || (iVar4 = FUN_00e70b14(plVar2), iVar4 == 0)))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a36ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00a36d08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c95e0;
  FUN_00f0d3a4(param_1 + 0x2a0);
  FUN_00f01868(param_1 + 0x28f);
  if ((void *)param_1[0x28e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x28e]);
    param_1[0x28e] = 0;
    param_1[0x28d] = 0;
  }
  if ((void *)param_1[0x28c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x28c]);
    param_1[0x28c] = 0;
    param_1[0x28b] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x265);
  FUN_00f0d3a4(param_1 + 0x23f);
  param_1[0x214] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x22b);
  FUN_00f13d08(param_1 + 0x214);
  param_1[0x17e] = &PTR_FUN_028051d0;
  FUN_00f0d3a4(param_1 + 0x1ed);
  FUN_00f0d3a4(param_1 + 0x1c7);
  param_1[0x1a9] = &PTR_FUN_028266f0;
  param_1[0x1c0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1c3);
  FUN_00f13d08(param_1 + 0x1a9);
  param_1[0x17e] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x195);
  FUN_00f13d08(param_1 + 0x17e);
  param_1[0xe8] = &PTR_FUN_028051d0;
  FUN_00f0d3a4(param_1 + 0x157);
  FUN_00f0d3a4(param_1 + 0x131);
  param_1[0x113] = &PTR_FUN_028266f0;
  param_1[0x12a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x12d);
  FUN_00f13d08(param_1 + 0x113);
  param_1[0xe8] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0xff);
  FUN_00f13d08(param_1 + 0xe8);
  param_1[0xbd] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0xd4);
  FUN_00f13d08(param_1 + 0xbd);
  param_1[0x9f] = &PTR_FUN_028266f0;
  param_1[0xb6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb9);
  FUN_00f13d08(param_1 + 0x9f);
  param_1[0x81] = &PTR_FUN_028266f0;
  param_1[0x98] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9b);
  FUN_00f13d08(param_1 + 0x81);
  param_1[99] = &PTR_FUN_028266f0;
  param_1[0x7a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7d);
  FUN_00f13d08(param_1 + 99);
  FUN_00f01868(param_1 + 0x52);
  FUN_00f13d08(param_1 + 0x39);
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a36f1c(void *param_1)

{
  FUN_00a36d08();
  operator_delete(param_1);
  return;
}




void FUN_00a36f40(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027c9730;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x28;
  param_1[0x17] = (long)&PTR_FUN_027c1f80;
  FUN_00f10d7c(plVar2);
  plVar3 = param_1 + 0x49;
  FUN_00f0eda4(plVar3);
  plVar4 = param_1 + 0x69;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x87;
  FUN_00f0d160(plVar5);
  FUN_00e70314(param_1 + 0xad);
  *(undefined4 *)((long)param_1 + 0x57c) = 0;
  *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) & 0xf0;
  *(undefined4 *)(param_1 + 0xaf) = 0xffffffff;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f0e548(plVar2,PTR_s_build___HUDItemsAndBuffs_atlas_02be3448,"icon_item_empty");
  FUN_00f10dc8(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  FUN_00f0e698(plVar2,0xb);
  if ((*(float *)(param_1 + 0x32) != 0.5) || (*(float *)((long)param_1 + 0x194) != 0.5)) {
    param_1[0x32] = 0x3f0000003f000000;
    FUN_0091ada4(plVar2);
  }
  *(uint *)((long)param_1 + 0x1c4) = *(uint *)((long)param_1 + 0x1c4) | 4;
  FUN_00f0e540(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(plVar3,"hud_buffs_overlay");
  if ((*(float *)(param_1 + 0x53) != 0.5) || (*(float *)((long)param_1 + 0x29c) != 0.5)) {
    param_1[0x53] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0eea0(plVar3,FUN_00a372d8,(long)param_1 + 0x57c);
  FUN_00f0e548(plVar4,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_buffs_outline");
  if ((*(float *)(param_1 + 0x73) != 0.5) || (*(float *)((long)param_1 + 0x39c) != 0.5)) {
    param_1[0x73] = 0x3f0000003f000000;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0dac8(plVar5,0);
  FUN_00f0d378(plVar5,PTR_s_build___Fonts_Futura_Medium_40_S_02be9d10);
  if ((*(float *)(param_1 + 0x91) != 0.5) || (*(float *)((long)param_1 + 0x48c) != 0.5)) {
    param_1[0x91] = 0x3f0000003f000000;
    FUN_0091ada4(plVar5);
  }
  if ((*(float *)(param_1 + 0x8f) != -1.0) || (*(float *)((long)param_1 + 0x47c) != 0.0)) {
    param_1[0x8f] = 0xbf800000;
    FUN_0091ada4(plVar5);
  }
  *(uint *)((long)param_1 + 0x4bc) = *(uint *)((long)param_1 + 0x4bc) & 0xfffffffb;
  uVar7 = FUN_0093d830();
  if ((uVar7 & 1) != 0) {
    plVar1 = param_1 + 1;
    local_70 = DAT_03210f58;
    local_98 = thunk_FUN_00a37a68;
    local_80 = 0;
    uStack_78 = 0;
    local_88 = 0;
    plStack_90 = param_1;
    FUN_009693a0(plVar1,&local_98);
    local_98 = thunk_FUN_00a37a68;
    local_70 = DAT_03210f84;
    local_80 = 0;
    uStack_78 = 0;
    local_88 = 0;
    plStack_90 = param_1;
    FUN_009693a0(plVar1,&local_98);
    local_70 = DAT_03210f60;
    local_98 = FUN_00a37370;
    local_80 = 0;
    uStack_78 = 0;
    local_88 = 0;
    plStack_90 = param_1;
    FUN_009693a0(plVar1,&local_98);
    local_98 = FUN_00a37370;
    local_70 = DAT_03210f8c;
    local_80 = 0;
    uStack_78 = 0;
    local_88 = 0;
    plStack_90 = param_1;
    FUN_009693a0(plVar1,&local_98);
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

