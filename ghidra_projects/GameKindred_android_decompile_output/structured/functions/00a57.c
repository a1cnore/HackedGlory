// functions/00a57 — 18 functions
#include "libGameKindred.h"




void FUN_00a57000(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00a570f4();
  plVar1 = param_3 + 0x32;
  local_50 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_4c = param_2;
  FUN_00f13f18(plVar1,&local_50);
  fVar4 = *(float *)(param_3 + 10);
  if ((*(float *)(param_3 + 0x3c) != fVar4) ||
     (*(float *)((long)param_3 + 0x1e4) != *(float *)((long)param_3 + 0x54))) {
    *(float *)(param_3 + 0x3c) = fVar4;
    *(float *)((long)param_3 + 0x1e4) = *(float *)((long)param_3 + 0x54);
    FUN_0091ada4(plVar1);
  }
  FUN_00f13e54(plVar1);
  fVar5 = fVar4;
  FUN_00f13e54(param_3 + 0xd2);
  if ((*(float *)(param_3 + 0xda) != 0.0) || (*(float *)((long)param_3 + 0x6d4) != fVar4 - fVar5)) {
    *(undefined4 *)(param_3 + 0xda) = 0;
    *(float *)((long)param_3 + 0x6d4) = fVar4 - fVar5;
    FUN_0091ada4(param_3 + 0xd2);
  }
  lVar3 = NEON_fmov(0x41200000,4);
  param_3[0xdd] = lVar3;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a570f4(long *param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  undefined8 local_38;
  float local_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&local_2c,&local_30);
  *(undefined4 *)((long)param_1 + 0x98c) = 0x41200000;
  local_30 = local_30 + -530.0;
  *(float *)(param_1 + 0x131) = local_30;
  if ((*(float *)(param_1 + 8) != local_2c * 0.5) || (*(float *)((long)param_1 + 0x44) != local_30))
  {
    *(float *)(param_1 + 8) = local_2c * 0.5;
    *(float *)((long)param_1 + 0x44) = local_30;
    FUN_0091ada4(param_1);
  }
  uVar2 = FUN_0092ea9c();
  fVar3 = 1.25;
  if ((uVar2 & 1) == 0) {
    fVar3 = 1.0;
  }
  if ((*(float *)(param_1 + 9) != fVar3) || (*(float *)((long)param_1 + 0x4c) != fVar3)) {
    *(float *)(param_1 + 9) = fVar3;
    *(float *)((long)param_1 + 0x4c) = fVar3;
    FUN_0091ada4(param_1);
  }
  FUN_00f13f08(0x43660000,0x432e0000,param_1);
  local_38 = 0x3f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a57000(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  FUN_00a570f4();
  plVar1 = param_3 + 0x32;
  uStack_50 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_4c = param_2;
  FUN_00f13f18(plVar1,&uStack_50);
  fVar4 = *(float *)(param_3 + 10);
  if ((*(float *)(param_3 + 0x3c) != fVar4) ||
     (*(float *)((long)param_3 + 0x1e4) != *(float *)((long)param_3 + 0x54))) {
    *(float *)(param_3 + 0x3c) = fVar4;
    *(float *)((long)param_3 + 0x1e4) = *(float *)((long)param_3 + 0x54);
    FUN_0091ada4(plVar1);
  }
  FUN_00f13e54(plVar1);
  fVar5 = fVar4;
  FUN_00f13e54(param_3 + 0xd2);
  if ((*(float *)(param_3 + 0xda) != 0.0) || (*(float *)((long)param_3 + 0x6d4) != fVar4 - fVar5)) {
    *(undefined4 *)(param_3 + 0xda) = 0;
    *(float *)((long)param_3 + 0x6d4) = fVar4 - fVar5;
    FUN_0091ada4(param_3 + 0xd2);
  }
  lVar3 = NEON_fmov(0x41200000,4);
  param_3[0xdd] = lVar3;
  if (*(long *)(lVar2 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a57204(long param_1)

{
  undefined8 uVar1;
  
  if (*(float *)(param_1 + 0x44) != *(float *)(param_1 + 0x98c)) {
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x98c);
    FUN_0091ada4(param_1);
  }
  if ((*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffff807f;
    FUN_0091ada4(param_1);
  }
  uVar1 = FUN_00efee28(0x3f800000,0x3e99999a,FUN_0091aa80);
  FUN_00f01980(param_1);
  FUN_00f022a0(param_1,uVar1);
  return;
}




void FUN_00a57284(long param_1)

{
  undefined8 uVar1;
  
  if (*(float *)(param_1 + 0x44) != *(float *)(param_1 + 0x988)) {
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x988);
    FUN_0091ada4(param_1);
  }
  if ((*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffff807f;
    FUN_0091ada4(param_1);
  }
  uVar1 = FUN_00efee28(0x3f800000,0x3e99999a,FUN_0091aa80);
  FUN_00f01980(param_1);
  FUN_00f022a0(param_1,uVar1);
  return;
}




void FUN_00a57304(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00ed8868(auStack_58,DAT_03210c64,0xffffffff,0);
  FUN_00f04760(param_1,auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a57374(void *param_1)

{
  FUN_009c2760();
  operator_delete(param_1);
  return;
}




long FUN_00a57398(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_00ceab64();
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_009c1044();
  }
  else {
    uVar2 = FUN_009dc8c4();
  }
  lVar3 = FUN_01985d44(uVar2,DAT_0312ebb0);
  if (lVar3 != 0) {
    FUN_009dbd5c(param_1,lVar3,param_2,0,1,0);
    FUN_009dbea4(lVar3);
  }
  return lVar3;
}




void FUN_00a57410(undefined8 param_1,uint param_2)

{
  FUN_009db160(param_2 & 1);
  FUN_009dbd10(param_1,param_2 & 1);
  return;
}




void FUN_00a57448(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  int local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = 0;
  if (param_1 != (long *)0x0) {
    iVar2 = FUN_0092ec00();
    if (iVar2 == 0xf) {
      pcVar4 = "zh";
    }
    else if (iVar2 == 8) {
      pcVar4 = "ko";
    }
    else if (iVar2 == 6) {
      pcVar4 = "ja";
    }
    else {
      pcVar4 = "en";
    }
    thunk_FUN_00d9ff34(local_30,pcVar4);
    puVar5 = (undefined8 *)*param_1;
    while (puVar5 != (undefined8 *)0x0) {
      iVar2 = FUN_00d9ff9c(*puVar5);
      if (iVar2 == local_30[0]) {
        uVar3 = *(undefined8 *)(*param_1 + 8);
        goto LAB_00a574f4;
      }
      puVar5 = (undefined8 *)param_1[1];
      param_1 = param_1 + 1;
    }
    uVar3 = 0;
  }
LAB_00a574f4:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00a57518(long *param_1,byte param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined4 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined4 uVar19;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar13 = tpidr_el0;
  local_68 = *(long *)(lVar13 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027cb8d8;
  FUN_00b89cd8(plVar1);
  plVar2 = param_1 + 0x30;
  FUN_00f017e8(plVar2);
  plVar3 = param_1 + 0x41;
  param_1[0x30] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x67;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0x8d;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0xb3;
  FUN_00f0d160(plVar6);
  plVar7 = param_1 + 0xd9;
  FUN_00f0d160(plVar7);
  plVar8 = param_1 + 0xff;
  FUN_00f0e4a8();
  plVar9 = param_1 + 0x11d;
  FUN_00f0e4a8();
  plVar10 = param_1 + 0x13b;
  FUN_00f0e4a8();
  plVar11 = param_1 + 0x159;
  FUN_00f0e4a8();
  plVar12 = param_1 + 0x177;
  FUN_00f0e4a8();
  param_1[0x195] = 0;
  *(undefined4 *)(param_1 + 0x196) = DAT_03214ce8;
  FUN_00e70510(param_1 + 0x197);
  *(byte *)(param_1 + 0x199) = param_2 & 1;
  *(undefined1 *)((long)param_1 + 0xcc9) = 0;
  uVar14 = FUN_00e6a474("HUD_Stats");
  uVar15 = FUN_0091ed5c("HUD_Stats",uVar14,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       (uVar15 & 0xffff) << 0xf | *(uint *)((long)param_1 + 0x84) & 0x80007fff | 4;
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 8;
  if ((param_2 & 1) == 0) {
    ppuVar17 = &PTR_s_build___Fonts_Avenir_Heavy_30_fo_02be9d00;
  }
  else {
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70;
    if ((param_3 & 1) == 0) {
      ppuVar17 = &PTR_s_build___Fonts_Brandon_Bold_24_fo_02be9c68;
    }
  }
  puVar18 = *ppuVar17;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  if ((param_2 & 1) == 0) {
    uVar15 = *(uint *)((long)param_1 + 0x204);
    if ((uVar15 & 0x7f80) != 0x6600) {
      *(uint *)((long)param_1 + 0x204) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x6600;
      FUN_0091ada4(plVar2);
    }
    FUN_00f023ec(plVar2,plVar8,1);
    FUN_00f023ec(plVar2,plVar3,1);
    FUN_00f023ec(plVar2,plVar9,1);
    FUN_00f023ec(plVar2,plVar4,1);
    FUN_00f023ec(plVar2,plVar10,1);
    FUN_00f023ec(plVar2,plVar5,1);
    FUN_00f023ec(plVar2,plVar11,1);
    FUN_00f023ec(plVar2,plVar6,1);
    FUN_00f023ec(plVar2,plVar12,1);
    FUN_00f023ec(plVar2,plVar7,1);
  }
  else {
    FUN_00f023ec(plVar2,plVar9,1);
    FUN_00f023ec(plVar2,plVar4,1);
    FUN_00f023ec(plVar2,plVar12,1);
    FUN_00f023ec(plVar2,plVar7,1);
    FUN_00f023ec(plVar2,plVar8,1);
    FUN_00f023ec(plVar2,plVar3,1);
  }
  FUN_00f0d378(plVar3,puVar18);
  FUN_00f0da80(plVar3,&DAT_03131298);
  FUN_00f0da30(plVar3,1);
  FUN_00e705c8(&local_78,&DAT_01ba09ee);
  FUN_00f0d75c(plVar3,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  uVar14 = FUN_00e6a474("HUD_Label_Gold");
  uVar15 = FUN_0091ed5c("HUD_Label_Gold",uVar14,0x1234);
  *(uint *)((long)param_1 + 0x28c) =
       *(uint *)((long)param_1 + 0x28c) & 0x80000000 |
       *(uint *)((long)param_1 + 0x28c) & 0x7fff | (uVar15 & 0xffff) << 0xf;
  FUN_00f0d378(plVar4,puVar18);
  FUN_00f0da80(plVar4,&DAT_03131298);
  FUN_00f0da30(plVar4,1);
  FUN_00e705c8(&local_78,&DAT_01bbbc9f);
  FUN_00f0d75c(plVar4,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  FUN_00f0d378(plVar5,puVar18);
  FUN_00f0da80(plVar5,&DAT_03131298);
  FUN_00f0da30(plVar5,1);
  FUN_00e705c8(&local_78,&DAT_01bbbc9f);
  FUN_00f0d75c(plVar5,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  FUN_00f0d378(plVar6,puVar18);
  FUN_00f0da80(plVar6,&DAT_03131298);
  FUN_00f0da30(plVar6,1);
  FUN_00e705c8(&local_78,&DAT_01bbbc9f);
  FUN_00f0d75c(plVar6,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  FUN_00f0d378(plVar7,puVar18);
  FUN_00f0da80(plVar7,&DAT_03131298);
  FUN_00f0da30(plVar7,1);
  FUN_00e705c8(&local_78,&DAT_01ba09f0);
  FUN_00f0d75c(plVar7,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  FUN_00f0e540(plVar8,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(plVar8,"hud_stats_gold");
  FUN_00f0e540(plVar9,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(plVar9,"hud_stats_kills");
  FUN_00f0e540(plVar10,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(plVar10,"hud_stats_deaths");
  FUN_00f0e540(plVar11,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(plVar11,"hud_stats_assists");
  FUN_00ceace8();
  uVar16 = FUN_00ceb054();
  if ((uVar16 & 1) == 0) {
    FUN_00f0e540(plVar12,PTR_s_build___HUDPartsCommon_atlas_02be3440);
    FUN_00f0e578(plVar12,"hud_pingicon_action_minion");
    uVar19 = 0x41e00000;
    uVar14 = 0x41f00000;
  }
  else {
    FUN_00f0e548(plVar12,PTR_s_build___HUDPartsBlitz_tga_02be3460,"blitz_ally_score");
    uVar19 = 0x42100000;
    uVar14 = 0x42100000;
  }
  FUN_00f13f08(uVar19,uVar14,plVar12);
  if (*(long *)(lVar13 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a57b00(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x13c) =
       *(uint *)(param_1 + 0x13c) & 0xfffffff0 | *(uint *)(param_1 + 0x13c) & 7 | (param_2 & 1) << 3
  ;
  return;
}




void FUN_00a57b14(long param_1,long param_2,ulong param_3)

{
  undefined4 *puVar1;
  long lVar2;
  char cVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  *(long *)(param_1 + 0xca8) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xcb0) = *(undefined4 *)(param_2 + 0x30);
  if ((param_3 & 1) != 0) {
    cVar3 = FUN_00d55870(param_2);
    puVar1 = &DAT_031328fc;
    if (cVar3 != '\x01') {
      puVar1 = &DAT_03132900;
    }
    local_2c = *puVar1;
    FUN_00f0d7fc(param_1 + 0x338,&local_2c);
    FUN_00f0d7fc(param_1 + 0x6c8,&local_2c);
    FUN_00f0d7fc(param_1 + 0x208,&local_2c);
    FUN_00f0e670(param_1 + 0x8e8,&local_2c,2);
    FUN_00f0e670(param_1 + 3000,&local_2c,2);
    FUN_00f0e670(param_1 + 0x7f8,&local_2c,2);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a57bec(long param_1)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0xcc9) = 1;
  uVar1 = FUN_00f02540(param_1 + 0x468);
  if ((uVar1 & 1) != 0) {
    FUN_00f01a4c(param_1 + 0x468,1);
  }
  uVar1 = FUN_00f02540(param_1 + 0x598);
  if ((uVar1 & 1) != 0) {
    FUN_00f01a4c(param_1 + 0x598,1);
  }
  uVar1 = FUN_00f02540(param_1 + 0x9d8);
  if ((uVar1 & 1) != 0) {
    FUN_00f01a4c(param_1 + 0x9d8,1);
  }
  uVar1 = FUN_00f02540(param_1 + 0xac8);
  if ((uVar1 & 1) != 0) {
    FUN_00f01a4c(param_1 + 0xac8,1);
    return;
  }
  return;
}




void FUN_00a57c88(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  FUN_00b89d24(param_1 + 0xb8,param_2 & 1,param_3,param_4 & 1);
  return;
}




void FUN_00a57c98(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  plVar1 = *(long **)(param_1 + 0xca8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xcb0) != (int)plVar1[1]) {
      *(undefined8 *)(param_1 + 0xca8) = 0;
      iVar5 = 0;
      iVar7 = 0;
      iVar8 = 0;
      iVar6 = 0;
      iVar9 = 0;
      *(undefined4 *)(param_1 + 0xcb0) = DAT_03214ce8;
      goto LAB_00a57e20;
    }
    lVar2 = (**(code **)(*plVar1 + 0x10))();
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar2 + 0x40);
      iVar8 = (int)*(float *)(lVar4 + 800);
      fVar11 = (*(float *)(lVar4 + 0x244) + 1.0) *
               (*(float *)(lVar4 + 0xdc) +
               *(float *)(lVar4 + 400) * (*(float *)(lVar4 + 0x2f8) + 1.0));
      fVar10 = (*(float *)(lVar4 + 0x248) + 1.0) *
               (*(float *)(lVar4 + 0xe0) +
               *(float *)(lVar4 + 0x194) * (*(float *)(lVar4 + 0x2fc) + 1.0));
      if (DAT_03132c14 <= fVar11) {
        fVar11 = DAT_03132c14;
      }
      fVar12 = DAT_03132b54;
      if (DAT_03132b54 <= fVar11) {
        fVar12 = fVar11;
      }
      iVar7 = (int)fVar12;
      if (DAT_03132c18 <= fVar10) {
        fVar10 = DAT_03132c18;
      }
      fVar11 = (float)DAT_03132b58;
      if ((float)DAT_03132b58 <= fVar10) {
        fVar11 = fVar10;
      }
      iVar6 = (int)fVar11;
      iVar5 = (int)*(float *)(lVar4 + 0x334);
      FUN_00ceace8();
      uVar3 = FUN_00ceb054();
      lVar2 = *(long *)(lVar2 + 0x40);
      if ((uVar3 & 1) == 0) {
        fVar10 = *(float *)(lVar2 + 0x340);
      }
      else {
        fVar11 = (*(float *)(lVar2 + 0x238) + 1.0) *
                 (*(float *)(lVar2 + 0xd0) +
                 *(float *)(lVar2 + 0x184) * (*(float *)(lVar2 + 0x2ec) + 1.0));
        if (DAT_03132c08 <= fVar11) {
          fVar11 = DAT_03132c08;
        }
        fVar10 = DAT_03132b48;
        if (DAT_03132b48 <= fVar11) {
          fVar10 = fVar11;
        }
      }
      iVar9 = (int)fVar10;
      goto LAB_00a57e20;
    }
  }
  iVar5 = 0;
  iVar7 = 0;
  iVar8 = 0;
  iVar6 = 0;
  iVar9 = 0;
LAB_00a57e20:
  lVar2 = param_1 + 0xcb8;
  FUN_00e70e18(lVar2,&DAT_01bb6d43,iVar8);
  FUN_00f0d75c(param_1 + 0x208,lVar2);
  FUN_00e70e18(lVar2,&DAT_01bb6d43,iVar9);
  FUN_00f0d75c(param_1 + 0x6c8,lVar2);
  if ((*(char *)(param_1 + 0xcc8) == '\0') && (*(char *)(param_1 + 0xcc9) == '\0')) {
    FUN_00e70e18(lVar2,&DAT_01bb6d43,iVar7);
    FUN_00f0d75c(param_1 + 0x338,lVar2);
    FUN_00e70e18(lVar2,&DAT_01bb6d43,iVar6);
    FUN_00f0d75c(param_1 + 0x468,lVar2);
    FUN_00e70e18(lVar2,&DAT_01bb6d43,iVar5);
    param_1 = param_1 + 0x598;
  }
  else {
    FUN_00e70e18(lVar2,&DAT_01ba0a26,iVar7,iVar6,iVar5);
    param_1 = param_1 + 0x338;
  }
  FUN_00f0d75c(param_1,lVar2);
  return;
}




void FUN_00a57f0c(long param_1)

{
  if (*(char *)(param_1 + 0xcc8) == '\0') {
    FUN_00a5846c(param_1);
  }
  else {
    FUN_00a57f50(param_1);
  }
  FUN_00f13f08(0x40000000,0x40000000,param_1 + 0xb8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a57f50(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  fVar8 = *(float *)(param_1 + 10);
  fVar5 = *(float *)((long)param_1 + 0x54);
  if ((fVar8 == 0.5) && (fVar5 == 0.5)) {
    fVar5 = (float)(**(code **)(*param_1 + 0x48))(param_1);
    fVar5 = fVar5 * -0.5;
    (**(code **)(*param_1 + 0x48))(param_1);
    fVar6 = fVar8 * -0.5;
    if (*(float *)(param_1 + 0x38) == fVar5) {
LAB_00a58068:
      fVar8 = *(float *)((long)param_1 + 0x1c4);
      if (fVar8 == fVar6) goto LAB_00a58084;
    }
LAB_00a58074:
    *(float *)(param_1 + 0x38) = fVar5;
    *(float *)((long)param_1 + 0x1c4) = fVar6;
  }
  else {
    if ((fVar8 != DAT_03218ef8) || (fVar5 != _DAT_03218efc)) {
      if ((fVar8 != 0.5) || (fVar8 = 1.0, fVar5 != 1.0)) goto LAB_00a58084;
      fVar5 = (float)(**(code **)(*param_1 + 0x48))(param_1);
      fVar8 = -0.5;
      fVar5 = fVar5 * -0.5;
      (**(code **)(*param_1 + 0x48))(param_1);
      fVar6 = -fVar8;
      if (*(float *)(param_1 + 0x38) == fVar5) goto LAB_00a58068;
      goto LAB_00a58074;
    }
    if ((*(float *)(param_1 + 0x38) == 0.0) && (*(float *)((long)param_1 + 0x1c4) == 0.0))
    goto LAB_00a58084;
    param_1[0x38] = 0;
  }
  FUN_0091ada4(param_1 + 0x30);
LAB_00a58084:
  fVar6 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  plVar1 = param_1 + 0x11d;
  fVar5 = fVar8;
  if ((*(float *)(param_1 + 0x127) != 0.5) || (*(float *)((long)param_1 + 0x93c) != 0.5)) {
    param_1[0x127] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar9 = fVar5 * 0.25;
  FUN_00f0e700(plVar1);
  fVar9 = fVar9 / fVar5;
  if ((*(float *)(param_1 + 0x126) != fVar9) ||
     (fVar5 = *(float *)((long)param_1 + 0x934), fVar5 != fVar9)) {
    *(float *)(param_1 + 0x126) = fVar9;
    *(float *)((long)param_1 + 0x934) = fVar9;
    FUN_0091ada4(plVar1);
  }
  fVar9 = (float)FUN_00f0e700(plVar1);
  FUN_00f0e700(plVar1);
  fVar7 = fVar5 * 0.5;
  if ((*(float *)(param_1 + 0x125) != fVar9 * 0.5) ||
     (fVar5 = *(float *)((long)param_1 + 0x92c), fVar5 != fVar7)) {
    *(float *)(param_1 + 0x125) = fVar9 * 0.5;
    *(float *)((long)param_1 + 0x92c) = fVar7;
    FUN_0091ada4(plVar1);
  }
  plVar2 = param_1 + 0x177;
  if ((*(float *)(param_1 + 0x181) != 0.5) || (*(float *)((long)param_1 + 0xc0c) != 0.5)) {
    param_1[0x181] = 0x3f0000003f000000;
    FUN_0091ada4(plVar2);
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar9 = fVar5 * 0.25;
  FUN_00f0e700(plVar2);
  fVar9 = fVar9 / fVar5;
  if ((*(float *)(param_1 + 0x180) != fVar9) ||
     (fVar5 = *(float *)((long)param_1 + 0xc04), fVar5 != fVar9)) {
    *(float *)(param_1 + 0x180) = fVar9;
    *(float *)((long)param_1 + 0xc04) = fVar9;
    FUN_0091ada4(plVar2);
  }
  fVar7 = *(float *)(param_1 + 0x125);
  fVar10 = *(float *)((long)param_1 + 0x92c);
  FUN_00f0e700(plVar1);
  fVar9 = fVar5 * 0.5;
  FUN_00f0e700(plVar2);
  fVar9 = fVar10 + fVar9 + fVar5 * 0.5;
  fVar5 = fVar8 * 0.08 + fVar9;
  if ((*(float *)(param_1 + 0x17f) != fVar7) ||
     (fVar9 = *(float *)((long)param_1 + 0xbfc), fVar9 != fVar5)) {
    *(float *)(param_1 + 0x17f) = fVar7;
    *(float *)((long)param_1 + 0xbfc) = fVar5;
    FUN_0091ada4(plVar2);
  }
  plVar3 = param_1 + 0xff;
  if ((*(float *)(param_1 + 0x109) != 0.5) || (*(float *)((long)param_1 + 0x84c) != 0.5)) {
    param_1[0x109] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar5 = fVar9 * 0.25;
  FUN_00f0e700(plVar3);
  fVar5 = fVar5 / fVar9;
  if ((*(float *)(param_1 + 0x108) != fVar5) ||
     (fVar9 = *(float *)((long)param_1 + 0x844), fVar9 != fVar5)) {
    *(float *)(param_1 + 0x108) = fVar5;
    *(float *)((long)param_1 + 0x844) = fVar5;
    FUN_0091ada4(plVar3);
  }
  fVar7 = *(float *)(param_1 + 0x17f);
  fVar10 = *(float *)((long)param_1 + 0xbfc);
  FUN_00f0e700(plVar2);
  fVar5 = fVar9 * 0.5;
  FUN_00f0e700(plVar3);
  fVar5 = fVar8 * 0.08 + fVar10 + fVar5 + fVar9 * 0.5;
  if ((*(float *)(param_1 + 0x107) != fVar7) || (*(float *)((long)param_1 + 0x83c) != fVar5)) {
    *(float *)(param_1 + 0x107) = fVar7;
    *(float *)((long)param_1 + 0x83c) = fVar5;
    FUN_0091ada4(plVar3);
  }
  if ((*(float *)(param_1 + 0x71) != 0.0) || (*(float *)((long)param_1 + 0x38c) != 0.5)) {
    param_1[0x71] = 0x3f00000000000000;
    FUN_0091ada4(param_1 + 0x67);
  }
  fVar8 = *(float *)(param_1 + 0x125);
  fVar5 = (float)FUN_00f0eac0(plVar1);
  fVar5 = fVar6 * 0.1 + fVar8 + fVar5 * 0.5;
  if ((*(float *)(param_1 + 0x6f) != fVar5) ||
     (*(float *)((long)param_1 + 0x37c) != *(float *)((long)param_1 + 0x92c))) {
    *(float *)(param_1 + 0x6f) = fVar5;
    *(float *)((long)param_1 + 0x37c) = *(float *)((long)param_1 + 0x92c);
    FUN_0091ada4(param_1 + 0x67);
  }
  if ((*(float *)(param_1 + 0xe3) != 0.0) || (*(float *)((long)param_1 + 0x71c) != 0.5)) {
    param_1[0xe3] = 0x3f00000000000000;
    FUN_0091ada4(param_1 + 0xd9);
  }
  fVar5 = *(float *)(param_1 + 0xe1);
  if ((fVar5 != *(float *)(param_1 + 0x6f)) ||
     (*(float *)((long)param_1 + 0x70c) != *(float *)((long)param_1 + 0xbfc))) {
    *(float *)(param_1 + 0xe1) = *(float *)(param_1 + 0x6f);
    *(float *)((long)param_1 + 0x70c) = *(float *)((long)param_1 + 0xbfc);
    FUN_0091ada4(param_1 + 0xd9);
    fVar5 = *(float *)(param_1 + 0xe1);
  }
  plVar1 = param_1 + 0x41;
  if ((*(float *)(param_1 + 0x49) != fVar5) ||
     (*(float *)((long)param_1 + 0x24c) != *(float *)((long)param_1 + 0x83c))) {
    *(float *)(param_1 + 0x49) = fVar5;
    *(float *)((long)param_1 + 0x24c) = *(float *)((long)param_1 + 0x83c);
    FUN_0091ada4(plVar1);
  }
  local_80 = 0x3f00000000000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_80);
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

