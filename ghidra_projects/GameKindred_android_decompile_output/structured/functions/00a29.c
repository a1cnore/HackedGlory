// functions/00a29 — 16 functions
#include "libGameKindred.h"




void FUN_00a29080(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c89f8;
  FUN_00afc0a4(param_1 + 0x13e);
  FUN_00f0d3a4(param_1 + 0x118);
  param_1[0xfa] = &PTR_FUN_028266f0;
  param_1[0x111] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x114);
  FUN_00f13d08(param_1 + 0xfa);
  param_1[0xdc] = &PTR_FUN_028266f0;
  param_1[0xf3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf6);
  FUN_00f13d08(param_1 + 0xdc);
  param_1[0xbe] = &PTR_FUN_028266f0;
  param_1[0xd5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd8);
  FUN_00f13d08(param_1 + 0xbe);
  FUN_00f01868(param_1 + 0xad);
  param_1[0x83] = &PTR_FUN_02826f38;
  param_1[0x9a] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x9d);
  FUN_00f13d08(param_1 + 0x83);
  param_1[0x59] = &PTR_FUN_02826f38;
  param_1[0x70] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x73);
  FUN_00f13d08(param_1 + 0x59);
  param_1[0x2e] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x45);
  FUN_00f13d08(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a291a8(void *param_1)

{
  FUN_00a29080();
  operator_delete(param_1);
  return;
}




void FUN_00a291cc(undefined8 *param_1)

{
  FUN_00f0e4a8();
  param_1[0x17] = &PTR_FUN_027c8ca0;
  *param_1 = &PTR_FUN_027c8b40;
  param_1[0x1f] = 0x3f8000003fe00000;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffef;
  if ((*(float *)(param_1 + 10) == 0.5) && (*(float *)((long)param_1 + 0x54) == 0.5)) {
    return;
  }
  param_1[10] = 0x3f0000003f000000;
  FUN_0091ada4(param_1);
  return;
}




void FUN_00a29250(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c8b40;
  param_1[0x17] = &PTR_FUN_027c8ca0;
  if ((long *)param_1[0x1e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1e] + 8))();
    param_1[0x1e] = 0;
  }
  *param_1 = &PTR_FUN_028266f0;
  param_1[0x17] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a292c0(long param_1)

{
  FUN_00a29250(param_1 + -0xb8);
  return;
}




void FUN_00a292c8(void *param_1)

{
  FUN_00a29250();
  operator_delete(param_1);
  return;
}




void FUN_00a292ec(long param_1)

{
  FUN_00a29250((void *)(param_1 + -0xb8));
  operator_delete((void *)(param_1 + -0xb8));
  return;
}




void FUN_00a29314(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined8 uVar6;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(float *)(param_1 + 0x48) != 1.0) || (*(float *)(param_1 + 0x4c) != 1.0)) {
    uVar6 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x48) = uVar6;
    FUN_0091ada4(param_1);
  }
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efe530(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  local_50 = *(undefined4 *)(param_1 + 0xf8);
  uStack_4c = local_50;
  FUN_00efe58c(puVar4,&local_50);
  FUN_00efcac4(0x3c23d70a,puVar4);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efe530(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  local_50 = *(undefined4 *)(param_1 + 0xfc);
  uStack_4c = local_50;
  FUN_00efe58c(puVar5,&local_50);
  FUN_00efcac4(0x3e800000,puVar5);
  FUN_00efcb24(puVar5,FUN_00a269a4);
  FUN_00f01980(param_1);
  FUN_00f02308(param_1,puVar4,puVar5,0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a29514(undefined8 param_1)

{
  FUN_00a29520(0x3f800000,param_1);
  return;
}




void FUN_00a29520(float param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ushort uVar4;
  ushort *puVar5;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(float *)(param_3 + 0xfc) != param_1) {
    uVar3 = FUN_00f023dc(param_3);
    if ((uVar3 & 1) == 0) {
      if ((*(float *)(param_3 + 0x48) != param_1) || (*(float *)(param_3 + 0x4c) != param_1)) {
        *(float *)(param_3 + 0x48) = param_1;
        *(float *)(param_3 + 0x4c) = param_1;
        FUN_0091ada4(param_3);
      }
    }
    else {
      FUN_00f01980(param_3);
      lVar2 = DAT_03210d00;
      uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar4 == 0xffff) {
        puVar5 = (ushort *)0x0;
      }
      else {
        puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
        if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar4 = 0xffff;
        }
        else {
          uVar4 = *puVar5;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efe530(puVar5);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      local_50 = param_1;
      fStack_4c = param_1;
      FUN_00efe58c(puVar5,&local_50);
      FUN_00efcac4(0x3e800000,puVar5);
      FUN_00efcb24(puVar5,FUN_00a269a4);
      FUN_00f022a0(param_3,puVar5);
    }
  }
  *(undefined4 *)(param_3 + 0xf8) = param_2;
  *(float *)(param_3 + 0xfc) = param_1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a2968c(long param_1)

{
  if (*(long *)(param_1 + 0xf0) != 0) {
    FUN_00f07a18(0,0,*(long *)(param_1 + 0xf0),6);
    return;
  }
  return;
}




void FUN_00a296a8(long *param_1,undefined4 param_2)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = param_1[0x1e];
  if (lVar1 == 0) {
    pvVar2 = operator_new(0x200);
    FUN_00c81dd8(pvVar2,param_2);
    param_1[0x1e] = (long)pvVar2;
    (**(code **)(*param_1 + 0x78))(param_1,pvVar2,1);
    lVar1 = param_1[0x1e];
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_00f07a18(0,0,lVar1,6);
  return;
}




void FUN_00a2972c(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xf0);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x84) =
         *(uint *)(lVar1 + 0x84) & 0xfffffff8 | *(uint *)(lVar1 + 0x84) & 3 | (param_2 & 1) << 2;
  }
  return;
}




void FUN_00a29748(long *param_1)

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
  undefined4 uVar12;
  undefined4 uVar13;
  long lVar14;
  bool bVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_70;
  
  lVar14 = tpidr_el0;
  local_70 = *(long *)(lVar14 + 0x28);
  FUN_00b89cd8();
  plVar22 = param_1 + 0x19;
  *param_1 = (long)&PTR_FUN_027c8ce8;
  FUN_00f017e8(plVar22);
  *plVar22 = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8(param_1 + 0x2a);
  plVar1 = param_1 + 0x3b;
  param_1[0x2a] = (long)&PTR_FUN_027c8e50;
  FUN_00b89cd8();
  FUN_00c83504();
  plVar21 = param_1 + 0xc5;
  FUN_00abaee8(plVar21,1);
  lVar19 = 0xc20;
  do {
    FUN_00b89cd8((long)param_1 + lVar19);
    lVar19 = lVar19 + 200;
  } while (lVar19 != 0xe78);
  lVar19 = 0xe78;
  do {
    FUN_00f1306c((long)param_1 + lVar19);
    bVar15 = lVar19 != 0x1128;
    lVar19 = lVar19 + 0x158;
  } while (bVar15);
  lVar19 = 0xac80;
  plVar20 = param_1 + 0x250;
  do {
    FUN_00a2b758(plVar20);
    lVar19 = lVar19 + -0x3980;
    plVar20 = plVar20 + 0x730;
  } while (lVar19 != 0);
  plVar20 = param_1 + 0x17e0;
  FUN_00f017e8(plVar20);
  plVar2 = param_1 + 0x17f1;
  *plVar20 = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8(plVar2);
  *plVar2 = (long)&PTR_FUN_027c1f80;
  plVar3 = param_1 + 0x1802;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x1828;
  FUN_00f0d160();
  plVar5 = param_1 + 0x184e;
  FUN_00f11234();
  plVar6 = param_1 + 0x1882;
  FUN_00ecfd6c(plVar6,0);
  plVar7 = param_1 + 0x1929;
  FUN_00f0d160();
  plVar8 = param_1 + 0x194f;
  FUN_00ab6c24(plVar8,1);
  lVar19 = 0;
  plVar9 = param_1 + 0x1c07;
  do {
    FUN_00f0d160((long)plVar9 + lVar19);
    lVar19 = lVar19 + 0x130;
  } while (lVar19 != 0x390);
  plVar10 = param_1 + 0x1c79;
  FUN_00f017e8(plVar10);
  plVar11 = param_1 + 0x1c8a;
  *plVar10 = (long)&PTR_FUN_027c1f80;
  FUN_00f1306c(plVar11);
  plVar24 = param_1 + 0x1cb5;
  lVar19 = 0x10a0;
  do {
    FUN_00f0d160(plVar24);
    lVar19 = lVar19 + -0x130;
    plVar24 = plVar24 + 0x26;
  } while (lVar19 != 0);
  plVar24 = param_1 + 0x1ec9;
  lVar19 = 0x10a0;
  do {
    FUN_00f0d160(plVar24);
    lVar19 = lVar19 + -0x130;
    plVar24 = plVar24 + 0x26;
  } while (lVar19 != 0);
  FUN_00e70510(param_1 + 0x20de);
  *(undefined1 *)(param_1 + 0x20e0) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar22,1);
  FUN_00f023ec(plVar22,param_1 + 0x2a,1);
  FUN_00f023ec(plVar22,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x54,1);
  uVar12 = DAT_03210f58;
  local_a0 = thunk_FUN_00a2afac;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  local_78 = uVar12;
  FUN_009693a0(param_1 + 0x2b,&local_a0);
  local_a0 = thunk_FUN_00a2afac;
  uVar13 = DAT_03210f84;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  local_78 = uVar13;
  FUN_009693a0(param_1 + 0x2b,&local_a0);
  *(uint *)((long)param_1 + 0x1d4) = *(uint *)((long)param_1 + 0x1d4) | 0x10;
  FUN_00f023ec(plVar1,plVar21,1);
  FUN_00f0e578(param_1 + 0x160,"circle_button_x");
  FUN_00abb1c8(0x3f400000,plVar21,&DAT_01bee7f6);
  local_a0 = thunk_FUN_00a2afac;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  local_78 = uVar12;
  FUN_009693a0(param_1 + 0xc6,&local_a0);
  local_a0 = thunk_FUN_00a2afac;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  local_78 = uVar13;
  FUN_009693a0(param_1 + 0xc6,&local_a0);
  uVar16 = FUN_00e6a474("HUD_Ability_Help_Close_Button");
  uVar17 = FUN_0091ed5c("HUD_Ability_Help_Close_Button",uVar16,0x1234);
  *(uint *)((long)param_1 + 0x6ac) =
       *(uint *)((long)param_1 + 0x6ac) & 0x80000000 |
       *(uint *)((long)param_1 + 0x6ac) & 0x7fff | (uVar17 & 0xffff) << 0xf;
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  FUN_00f0d7fc(plVar4,&DAT_031315e4);
  FUN_00f023ec(plVar2,plVar4,1);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Avenir_Medium_24_f_02be9cf0);
  FUN_00f0d7fc(plVar3,&DAT_031315e4);
  uVar18 = FUN_00e6ce7c("HUD_LEARN_HEROIC_PERK",0);
  FUN_00f0d75c(plVar3,uVar18);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar5,1);
  FUN_00f023ec(plVar5,plVar6,1);
  FUN_00ed026c(plVar6,plVar7,1);
  FUN_00f112f0(plVar5,1);
  FUN_00ed04d8(plVar6,0,1);
  FUN_00f0d378(plVar7,PTR_s_build___Fonts_Avenir_Medium_30_f_02be9cf8);
  FUN_00f0d7fc(plVar7,&DAT_031315e4);
  FUN_00f023ec(plVar1,plVar20,1);
  FUN_00f023ec(plVar20,plVar2,1);
  lVar19 = 0xc20;
  lVar23 = 0xe78;
  lVar25 = 0x1280;
  do {
    plVar21 = (long *)((long)param_1 + lVar19);
    plVar20 = (long *)((long)param_1 + lVar23);
    (**(code **)(*plVar21 + 0x78))(plVar21,plVar20,1);
    (**(code **)(*plVar20 + 0x78))(plVar20,(long)param_1 + lVar25,1);
    FUN_00f023ec(plVar22,plVar21,1);
    lVar19 = lVar19 + 200;
    lVar23 = lVar23 + 0x158;
    lVar25 = lVar25 + 0x3980;
  } while (lVar19 != 0xe78);
  lVar19 = 0;
  do {
    lVar23 = (long)param_1 + lVar19 + 0xe038;
    FUN_00f0d378(lVar23,PTR_s_build___Fonts_Avenir_Medium_24_f_02be9cf0);
    FUN_00f133a4(plVar11,lVar23,1);
    lVar19 = lVar19 + 0x130;
  } while (lVar19 != 0x390);
  uVar18 = FUN_00e6ce7c("HUD_LEARN_STAT_TABLE_LABEL_BASIC_STATS",0);
  (**(code **)(*plVar9 + 0x138))(plVar9,uVar18);
  uVar18 = FUN_00e6ce7c("HUD_LEARN_STAT_TABLE_LABEL_WEAPON",0);
  (**(code **)(param_1[0x1c2d] + 0x138))(param_1 + 0x1c2d,uVar18);
  uVar18 = FUN_00e6ce7c("HUD_LEARN_STAT_TABLE_LABEL_ABILITY",0);
  (**(code **)(param_1[0x1c53] + 0x138))(param_1 + 0x1c53,uVar18);
  lVar19 = 0xe;
  plVar21 = param_1 + 0x1cb5;
  plVar22 = param_1 + 0x1ec9;
  do {
    FUN_00f0d378(plVar21,PTR_s_build___Fonts_Avenir_Medium_24_f_02be9cf0);
    FUN_00f0d7fc(plVar21,&DAT_031315e8);
    FUN_00f133a4(plVar11,plVar21,1);
    FUN_00f0d378(plVar22,PTR_s_build___Fonts_Avenir_Medium_24_f_02be9cf0);
    FUN_00f0d7fc(plVar22,&DAT_031315e4);
    FUN_00f133a4(plVar11,plVar22,1);
    plVar21 = plVar21 + 0x26;
    lVar19 = lVar19 + -1;
    plVar22 = plVar22 + 0x26;
  } while (lVar19 != 0);
  FUN_00f023ec(plVar1,plVar10,1);
  FUN_00f023ec(plVar10,plVar11,1);
  uVar18 = FUN_00e6ce7c("HUD_LEARN_MORE_INFO",0);
  local_a0 = (code *)CONCAT44(local_a0._4_4_,0xffc0c0c0);
  FUN_00ab703c(0x42800000,0,0x44480000,plVar8,0,uVar18,&local_a0,&DAT_03218ef8,0);
  FUN_00b09454(plVar8,1);
  FUN_00b09144(0xbf800000,plVar8);
  plVar21 = param_1 + 0x1950;
  local_78 = DAT_03210c64;
  local_a0 = thunk_FUN_00a2b078;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_009693a0(plVar21,&local_a0);
  local_a0 = FUN_00a29f28;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  local_78 = uVar12;
  FUN_009693a0(plVar21,&local_a0);
  local_a0 = FUN_00a29f28;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  local_78 = uVar13;
  FUN_009693a0(plVar21,&local_a0);
  FUN_00f023ec(plVar1,plVar8,1);
  *(uint *)((long)param_1 + 0xe44c) = *(uint *)((long)param_1 + 0xe44c) & 0xfffffffb;
  if (*(long *)(lVar14 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a29f28(void)

{
  return;
}




void FUN_00a29f2c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027c8ce8;
  if ((void *)param_1[0x20df] != (void *)0x0) {
    operator_delete__((void *)param_1[0x20df]);
    param_1[0x20df] = 0;
    param_1[0x20de] = 0;
  }
  puVar1 = param_1 + 0x20b7;
  lVar2 = -0x10a0;
  do {
    FUN_00f0d3a4(puVar1);
    lVar2 = lVar2 + 0x130;
    puVar1 = puVar1 + -0x26;
  } while (lVar2 != 0);
  puVar1 = param_1 + 0x1ea3;
  lVar2 = -0x10a0;
  do {
    FUN_00f0d3a4(puVar1);
    lVar2 = lVar2 + 0x130;
    puVar1 = puVar1 + -0x26;
  } while (lVar2 != 0);
  param_1[0x1c8a] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x1ca1);
  FUN_00f13d08(param_1 + 0x1c8a);
  FUN_00f01868(param_1 + 0x1c79);
  lVar2 = 0;
  do {
    FUN_00f0d3a4((long)param_1 + lVar2 + 0xe298);
    lVar2 = lVar2 + -0x130;
  } while (lVar2 != -0x390);
  FUN_009c7fa8(param_1 + 0x194f);
  FUN_00f0d3a4(param_1 + 0x1929);
  FUN_00ed00e0(param_1 + 0x1882);
  FUN_00f13d08(param_1 + 0x184e);
  FUN_00f0d3a4(param_1 + 0x1828);
  FUN_00f0d3a4(param_1 + 0x1802);
  FUN_00f01868(param_1 + 0x17f1);
  FUN_00f01868(param_1 + 0x17e0);
  lVar2 = -0xac80;
  puVar1 = param_1 + 0x10b0;
  do {
    FUN_00a2a210(puVar1);
    lVar2 = lVar2 + 0x3980;
    puVar1 = puVar1 + -0x730;
  } while (lVar2 != 0);
  lVar2 = -0x408;
  puVar1 = param_1 + 0x225;
  do {
    *puVar1 = &PTR_FUN_02827fc8;
    FUN_00f01868(puVar1 + 0x17);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + 0x158;
    puVar1 = puVar1 + -0x2b;
  } while (lVar2 != 0);
  lVar2 = 0;
  do {
    FUN_00f13d08((long)param_1 + lVar2 + 0xdb0);
    lVar2 = lVar2 + -200;
  } while (lVar2 != -600);
  param_1[0xc5] = &PTR_FUN_027d5388;
  param_1[0x160] = &PTR_FUN_028266f0;
  param_1[0x177] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x17a);
  FUN_00f13d08(param_1 + 0x160);
  param_1[0x142] = &PTR_FUN_028266f0;
  param_1[0x159] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x15c);
  FUN_00f13d08(param_1 + 0x142);
  param_1[0x124] = &PTR_FUN_028266f0;
  param_1[0x13b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x13e);
  FUN_00f13d08(param_1 + 0x124);
  FUN_00f01868(param_1 + 0x113);
  FUN_009c825c(param_1 + 0xc5);
  param_1[0xa7] = &PTR_FUN_028266f0;
  param_1[0xbe] = &PTR_FUN_02826850;
  param_1[0x54] = &PTR_FUN_02804168;
  FUN_00f0a79c(param_1 + 0xc1);
  FUN_00f13d08(param_1 + 0xa7);
  param_1[0x89] = &PTR_FUN_028266f0;
  param_1[0xa0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa3);
  FUN_00f13d08(param_1 + 0x89);
  param_1[0x6b] = &PTR_FUN_028266f0;
  param_1[0x82] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x85);
  FUN_00f13d08(param_1 + 0x6b);
  FUN_00f13d08(param_1 + 0x54);
  FUN_00f13d08(param_1 + 0x3b);
  FUN_00f01868(param_1 + 0x2a);
  FUN_00f01868(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}

