// functions/00a2d — 11 functions
#include "libGameKindred.h"




void FUN_00a2d06c(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x3960) + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_00d535a4(lVar2,*(undefined4 *)(param_1 + 0x3970));
  if (iVar1 == *(int *)(param_1 + 0x3974)) {
    return;
  }
  FUN_00a2c0a0(param_1);
  return;
}




void FUN_00a2d0d8(void *param_1)

{
  FUN_00a2a210();
  operator_delete(param_1);
  return;
}




void FUN_00a2d0fc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  code *local_98;
  long *plStack_90;
  long *local_88;
  code *local_80;
  long local_78;
  undefined4 local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  FUN_00f13ca4();
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027c9050;
  *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
  FUN_00b27c04(param_1 + 0x19,1);
  plVar14 = param_1 + 0x36;
  FUN_00b89cd8(plVar14);
  plVar1 = param_1 + 0x4f;
  FUN_00f0e4a8(plVar1);
  FUN_00f13ca4();
  lVar12 = 0;
  do {
    FUN_00a21dfc((long)param_1 + lVar12 + 0x420);
    lVar12 = lVar12 + 0x1cf8;
  } while (lVar12 != 0x56e8);
  FUN_00f017e8(param_1 + 0xb61);
  plVar13 = param_1 + 0xb72;
  lVar12 = 0x23b8;
  param_1[0xb61] = (long)&PTR_FUN_027c1f80;
  do {
    FUN_00a277ec(plVar13);
    lVar12 = lVar12 + -0xbe8;
    plVar13 = plVar13 + 0x17d;
  } while (lVar12 != 0);
  plVar2 = param_1 + 0xfe9;
  FUN_00f13ca4(plVar2);
  plVar13 = param_1 + 0x1000;
  FUN_00f13ca4(plVar13);
  plVar3 = param_1 + 0x1017;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x1035;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x1053;
  FUN_00f0c714(plVar5);
  plVar6 = param_1 + 0x1070;
  param_1[0x106f] = 0;
  param_1[0x106e] = 0;
  FUN_00f13ca4(plVar6);
  plVar7 = param_1 + 0x1087;
  FUN_00f0d160(plVar7);
  param_1[0x10ad] = 0x3e4ccccd00000000;
  *(ushort *)(param_1 + 0x10ae) = *(ushort *)(param_1 + 0x10ae) & 0xc000 | 0x30ff;
  uVar11 = FUN_00d7e3d0();
  FUN_00e6ea58(uVar11,param_1,0xb924e89d,FUN_00a2d73c,0);
  uVar11 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar11,param_1,0xf4269e13,FUN_00a2d830,0);
  uVar11 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar11,param_1,0xccc11f8e,FUN_00a2d8dc,0);
  uVar11 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar11,param_1,0x8a579c5c,FUN_00a2d9a0,0);
  uVar11 = FUN_009f1f64();
  local_98 = (code *)0x0;
  local_80 = FUN_00a300dc;
  plStack_90 = param_1;
  local_88 = param_1;
  FUN_009104f8(uVar11,&local_98);
  (**(code **)(*param_1 + 0x78))(param_1,plVar14,1);
  FUN_00f023ec(plVar14,plVar6,1);
  FUN_00f023ec(plVar6,plVar7,1);
  FUN_00f023ec(plVar14,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x6d,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,plVar13,1);
  FUN_00f023ec(plVar13,plVar3,1);
  FUN_00f023ec(plVar13,plVar4,1);
  FUN_00f023ec(plVar1,param_1 + 0x19,1);
  FUN_00f023ec(plVar1,plVar5,1);
  local_98 = (code *)0x3f8000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_98);
  *(uint *)((long)param_1 + 0x2fc) = *(uint *)((long)param_1 + 0x2fc) | 4;
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0xc;
  *(uint *)((long)param_1 + 0x3ec) = *(uint *)((long)param_1 + 0x3ec) | 4;
  FUN_00f0e540(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(plVar3,"hud_xpbar_empty");
  uVar10 = *(uint *)((long)param_1 + 0x813c);
  if ((uVar10 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x813c) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0xc80;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e540(plVar4,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(plVar4,"hud_xpbar_fill");
  uVar10 = *(uint *)((long)param_1 + 0x822c);
  if ((uVar10 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x822c) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x2600;
    FUN_0091ada4(plVar4);
  }
  *(uint *)((long)param_1 + 0x7fcc) = *(uint *)((long)param_1 + 0x7fcc) | 4;
  FUN_00f0d378(plVar7,PTR_s_build___Fonts_Avenir_Heavy_30_fo_02be9d00);
  FUN_00f0d7fc(plVar7,&DAT_03131c14);
  FUN_00f0da80(plVar7,&DAT_03131298);
  FUN_00f0da30(plVar7,1);
  *(uint *)((long)param_1 + 0x84bc) = *(uint *)((long)param_1 + 0x84bc) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x1091) != 0.5) || (*(float *)((long)param_1 + 0x848c) != 0.0)) {
    param_1[0x1091] = 0x3f000000;
    FUN_0091ada4(plVar7);
  }
  FUN_00b89d24(0x3dcccccd,plVar14,1,4,1);
  uVar9 = FUN_00e6a474("HUD_AbilityTray");
  uVar10 = FUN_0091ed5c("HUD_AbilityTray",uVar9,0x1234);
  lVar12 = 0;
  plVar14 = param_1 + 0x85;
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar10 & 0xffff) << 0xf;
  do {
    local_70 = FUN_00f048a4("EVENT_REQUEST_ABILITY_UPGRADE");
    local_98 = FUN_00a2da88;
    local_88 = (long *)0x0;
    local_80 = (code *)0x0;
    plStack_90 = param_1;
    local_78 = lVar12;
    FUN_009693a0(plVar14,&local_98);
    local_70 = FUN_00f048a4("EVENT_REQUEST_ABILITY_ACTIVATION");
    local_98 = FUN_00a2da90;
    local_88 = (long *)0x0;
    local_80 = (code *)0x0;
    plStack_90 = param_1;
    local_78 = lVar12;
    FUN_009693a0(plVar14,&local_98);
    local_70 = FUN_00f048a4("EVENT_REQUEST_ABILITY_CAST");
    local_98 = FUN_00a2da98;
    local_88 = (long *)0x0;
    local_80 = (code *)0x0;
    plStack_90 = param_1;
    local_78 = lVar12;
    FUN_009693a0(plVar14,&local_98);
    local_70 = FUN_00f048a4("EVENT_REQUEST_ABILITY_TOOLTIP");
    local_98 = FUN_00a2daa0;
    local_88 = (long *)0x0;
    local_80 = (code *)0x0;
    plStack_90 = param_1;
    local_78 = lVar12;
    FUN_009693a0(plVar14,&local_98);
    local_70 = FUN_00f048a4("EVENT_REQUEST_ABILITY_TOOLTIP_CANCEL");
    local_98 = FUN_00a2daac;
    local_88 = (long *)0x0;
    local_80 = (code *)0x0;
    plStack_90 = param_1;
    local_78 = lVar12;
    FUN_009693a0(plVar14,&local_98);
    lVar12 = lVar12 + 1;
    plVar14 = plVar14 + 0x39f;
  } while (lVar12 != 3);
  FUN_00f0c774(plVar5,&DAT_01bee7f6);
  local_70 = DAT_03210fa4;
  local_98 = thunk_FUN_00a2e7a4;
  local_80 = (code *)0x0;
  local_78 = 0;
  local_88 = (long *)0x0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 1,&local_98);
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a2da88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00a2fb54(param_1,param_2,param_5);
  return;
}




void FUN_00a2da90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00a2fbe0(param_1,param_2,param_5);
  return;
}




void FUN_00a2da98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00a2fc78(param_1,param_2,param_5);
  return;
}




void FUN_00a2daa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00a2fcf4(param_1,param_4,param_5);
  return;
}




void FUN_00a2daac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00a2fd3c(param_1,param_2,param_5);
  return;
}




void FUN_00a2dab8(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_027c9050;
  uVar1 = FUN_00d7e3d0();
  FUN_00e6ec98(uVar1,param_1);
  uVar1 = FUN_00a1ffc0();
  FUN_00e6ec98(uVar1,param_1);
  uVar2 = FUN_009f1f50();
  if ((uVar2 & 1) != 0) {
    puVar3 = (uint *)FUN_009f1f64();
    lVar6 = (ulong)*puVar3 << 5;
    lVar8 = *(long *)(puVar3 + 2);
    do {
      lVar5 = lVar8;
      if (lVar6 == 0) goto LAB_00a2db30;
      lVar6 = lVar6 + -0x20;
      lVar8 = lVar5 + 0x20;
    } while (*(undefined8 **)(lVar5 + 8) != param_1);
    FUN_0091064c(puVar3,lVar5);
  }
LAB_00a2db30:
  plVar4 = (long *)param_1[0x106e];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
    param_1[0x106e] = 0;
  }
  plVar4 = (long *)param_1[0x106f];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
    param_1[0x106f] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x1087);
  FUN_00f13d08(param_1 + 0x1070);
  FUN_00f13d08(param_1 + 0x1053);
  param_1[0x1035] = &PTR_FUN_028266f0;
  param_1[0x104c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x104f);
  FUN_00f13d08(param_1 + 0x1035);
  param_1[0x1017] = &PTR_FUN_028266f0;
  param_1[0x102e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1031);
  FUN_00f13d08(param_1 + 0x1017);
  FUN_00f13d08(param_1 + 0x1000);
  FUN_00f13d08(param_1 + 0xfe9);
  puVar7 = param_1 + 0xe6c;
  lVar8 = -0x23b8;
  do {
    FUN_00a29080(puVar7);
    lVar8 = lVar8 + 0xbe8;
    puVar7 = puVar7 + -0x17d;
  } while (lVar8 != 0);
  FUN_00f01868(param_1 + 0xb61);
  lVar8 = -0x56e8;
  puVar7 = param_1 + 0x7c2;
  do {
    FUN_00a23b34(puVar7);
    lVar8 = lVar8 + 0x1cf8;
    puVar7 = puVar7 + -0x39f;
  } while (lVar8 != 0);
  FUN_00f13d08(param_1 + 0x6d);
  param_1[0x4f] = &PTR_FUN_028266f0;
  param_1[0x66] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x69);
  FUN_00f13d08(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x36);
  FUN_00b27cec(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a2dcb0(void *param_1)

{
  FUN_00a2dab8();
  operator_delete(param_1);
  return;
}




void FUN_00a2dcd4(long param_1,long param_2,uint param_3,uint param_4)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ushort uVar6;
  long lVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_f0 [128];
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  uVar8 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0xb8) = param_2 + 0x28;
  puVar1 = (ushort *)(param_1 + 0x8570);
  *(undefined4 *)(param_1 + 0xc0) = uVar8;
  *puVar1 = (ushort)((param_3 & 1) << 9) | (ushort)((param_3 & param_4 & 1) << 10) | *puVar1 & 63999
  ;
  fVar17 = *(float *)(param_1 + 0x50);
  fVar16 = *(float *)(param_1 + 0x54);
  if ((*(float *)(param_1 + 0x200) != fVar17) || (*(float *)(param_1 + 0x204) != fVar16)) {
    *(float *)(param_1 + 0x200) = fVar17;
    *(float *)(param_1 + 0x204) = fVar16;
    FUN_0091ada4();
    fVar17 = *(float *)(param_1 + 0x50);
    fVar16 = *(float *)(param_1 + 0x54);
  }
  lVar11 = param_1 + 0x278;
  if ((*(float *)(param_1 + 0x2c8) != fVar17) || (*(float *)(param_1 + 0x2cc) != fVar16)) {
    *(float *)(param_1 + 0x2c8) = fVar17;
    *(float *)(param_1 + 0x2cc) = fVar16;
    FUN_0091ada4(lVar11);
  }
  FUN_00f0e540(lVar11,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(lVar11,"white_background");
  FUN_00f0e670(lVar11,&DAT_01bee7f6,2);
  fVar17 = *(float *)(param_1 + 0x50);
  fVar16 = *(float *)(param_1 + 0x54);
  if ((*(float *)(param_1 + 0x3b8) != fVar17) || (*(float *)(param_1 + 0x3bc) != fVar16)) {
    *(float *)(param_1 + 0x3b8) = fVar17;
    *(float *)(param_1 + 0x3bc) = fVar16;
    FUN_0091ada4(param_1 + 0x368);
    fVar17 = *(float *)(param_1 + 0x50);
    fVar16 = *(float *)(param_1 + 0x54);
  }
  if ((*(float *)(param_1 + 0x7f98) != fVar17) || (*(float *)(param_1 + 0x7f9c) != fVar16)) {
    *(float *)(param_1 + 0x7f98) = fVar17;
    *(float *)(param_1 + 0x7f9c) = fVar16;
    FUN_0091ada4(param_1 + 0x7f48);
    fVar17 = *(float *)(param_1 + 0x50);
    fVar16 = *(float *)(param_1 + 0x54);
  }
  if ((*(float *)(param_1 + 0x8050) != fVar17) || (*(float *)(param_1 + 0x8054) != fVar16)) {
    *(float *)(param_1 + 0x8050) = fVar17;
    *(float *)(param_1 + 0x8054) = fVar16;
    FUN_0091ada4(param_1 + 0x8000);
    fVar17 = *(float *)(param_1 + 0x50);
    fVar16 = *(float *)(param_1 + 0x54);
  }
  if ((*(float *)(param_1 + 0x8108) != fVar17) || (*(float *)(param_1 + 0x810c) != fVar16)) {
    *(float *)(param_1 + 0x8108) = fVar17;
    *(float *)(param_1 + 0x810c) = fVar16;
    FUN_0091ada4(param_1 + 0x80b8);
  }
  uVar10 = FUN_00d9eb64(param_2);
  lVar11 = FUN_00d532e4();
  FUN_00a2e1c8(param_1,param_1 + 0x420,0,param_2,*(undefined4 *)(lVar11 + 0x48),*puVar1 >> 9 & 1,
               *puVar1 >> 10 & 1,"ability_icon_A");
  lVar11 = FUN_00d532e4(uVar10);
  FUN_00a2e1c8(param_1,param_1 + 0x2118,1,param_2,*(undefined4 *)(lVar11 + 0x4c),*puVar1 >> 9 & 1,
               *puVar1 >> 10 & 1,"ability_icon_B");
  lVar11 = FUN_00d532e4(uVar10);
  FUN_00a2e1c8(param_1,param_1 + 0x3e10,2,param_2,*(undefined4 *)(lVar11 + 0x50),*puVar1 >> 9 & 1,
               *puVar1 >> 10 & 1,"ability_icon_C");
  lVar15 = 0;
  uVar14 = 0;
  lVar11 = 0x5b90;
  lVar13 = 0x5c14;
  lVar2 = param_1 + 0x5b08;
  do {
    lVar3 = param_1 + lVar15;
    *(uint *)(lVar3 + 0x4a4) = *(uint *)(lVar3 + 0x4a4) | 4;
    if ((*(byte *)(param_1 + 0x8571) >> 1 & 1) == 0) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x10;
      *(uint *)(param_1 + lVar13) = *(uint *)(param_1 + lVar13) | 4;
      FUN_00f023ec(lVar2,param_1 + lVar11,1);
      puVar4 = &DAT_01e66526;
      if (uVar14 != 1) {
        puVar4 = &DAT_01e66520;
      }
      puVar5 = &DAT_01e239e7;
      if (uVar14 != 2) {
        puVar5 = puVar4;
      }
      FUN_00969b40(auStack_f0,"ability_upgrade_badge_%s",puVar5);
      uVar8 = FUN_00e6a474(auStack_f0);
      uVar9 = FUN_0091ed5c(auStack_f0,uVar8,0x1234);
      *(uint *)(param_1 + lVar13) =
           *(uint *)(param_1 + lVar13) & 0x80000000 |
           *(uint *)(param_1 + lVar13) & 0x7fff | (uVar9 & 0xffff) << 0xf;
      uVar8 = FUN_00a25768(lVar3 + 0x420);
      FUN_00a27d6c(param_1 + lVar11,param_2,uVar8,uVar14 & 0xffffffff);
      (**(code **)(*(long *)(lVar3 + 0x420) + 0x40))(0,lVar3 + 0x420);
      *(uint *)(lVar3 + 0x4a4) = *(uint *)(lVar3 + 0x4a4) | 0x10;
    }
    uVar14 = uVar14 + 1;
    lVar15 = lVar15 + 0x1cf8;
    lVar11 = lVar11 + 0xbe8;
    lVar13 = lVar13 + 0xbe8;
  } while (uVar14 != 3);
  uVar6 = *puVar1;
  if ((uVar6 >> 9 & 1) == 0) {
    FUN_00f023ec(param_1 + 0x1b0,lVar2,1);
    lVar11 = param_1 + 200;
    uVar14 = FUN_00f02540(lVar11);
    if ((uVar14 & 1) != 0) {
      FUN_00f01a4c(lVar11,1);
    }
    FUN_00f023ec(lVar2,lVar11,1);
    uVar6 = *puVar1;
  }
  puVar12 = (uint *)(param_1 + 0x4a4);
  lVar11 = 3;
  do {
    uVar9 = *puVar12 | 0x10;
    if ((uVar6 & 0x200) != 0) {
      uVar9 = *puVar12 & 0xffffffef;
    }
    lVar11 = lVar11 + -1;
    *puVar12 = uVar9;
    puVar12 = puVar12 + 0x73e;
  } while (lVar11 != 0);
  if ((uVar6 >> 9 & 1) == 0) {
    if ((*(float *)(param_1 + 0x83d0) != 0.5) || (*(float *)(param_1 + 0x83d4) != 0.0)) {
      *(undefined8 *)(param_1 + 0x83d0) = 0x3f000000;
      FUN_0091ada4(param_1 + 0x8380);
    }
  }
  else {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffffffef;
    uVar14 = FUN_00f02540(param_1 + 0x8380);
    if ((uVar14 & 1) != 0) {
      FUN_00f01a4c(param_1 + 0x8380,1);
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

