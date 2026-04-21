// functions/00ad2 — 10 functions
#include "libGameKindred.h"




void FUN_00ad23c4(void *param_1)

{
  FUN_00ad1e04();
  operator_delete(param_1);
  return;
}




void FUN_00ad23e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027d72e8;
  if ((*(byte *)(param_1 + 0x179d) & 1) != 0) {
    operator_delete((void *)param_1[0x179f]);
  }
  lVar2 = -0xbc30;
  puVar1 = param_1 + 0xbda;
  do {
    FUN_00ad1e04(puVar1);
    lVar2 = lVar2 + 0x5e18;
    puVar1 = puVar1 + -0xbc3;
  } while (lVar2 != 0);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ad2468(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027d72e8;
  if ((*(byte *)(param_1 + 0x179d) & 1) != 0) {
    operator_delete((void *)param_1[0x179f]);
  }
  lVar2 = -0xbc30;
  puVar1 = param_1 + 0xbda;
  do {
    FUN_00ad1e04(puVar1);
    lVar2 = lVar2 + 0x5e18;
    puVar1 = puVar1 + -0xbc3;
  } while (lVar2 != 0);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ad24f0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  ulong uVar5;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027d7430;
  FUN_00f0bdbc(plVar1,1);
  plVar2 = param_1 + 0x30;
  param_1[0x17] = (long)&PTR_FUN_027ccd08;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x56;
  FUN_00f0d160(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  uVar5 = FUN_0092ea9c();
  if ((*(uint *)((long)param_1 + 0x204) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0db64(0x43480000,0,0x3f800000,plVar2);
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar5 & 1) == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d378(plVar2,*ppuVar4);
  if ((*(float *)(param_1 + 0x3a) != 0.5) || (*(float *)((long)param_1 + 0x1d4) != 0.0)) {
    param_1[0x3a] = 0x3f000000;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0db64(0x43480000,0,0x3f800000,plVar3);
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  if ((uVar5 & 1) == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(plVar3,*ppuVar4);
  if ((*(float *)(param_1 + 0x60) == 0.5) && (*(float *)((long)param_1 + 0x304) == 0.0)) {
    return;
  }
  param_1[0x60] = 0x3f000000;
  FUN_0091ada4(plVar3);
  return;
}




void FUN_00ad26b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f0d75c(param_1 + 0x180);
  FUN_00f0d75c(param_1 + 0x2b0,param_3);
  FUN_00ad26ec(param_1);
  return;
}




void FUN_00ad26ec(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_48;
  float fStack_44;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0xb8;
  FUN_00f0bc10(0,0,0,&local_48);
  FUN_00f0c168(lVar1,&local_48);
  (**(code **)(*(long *)(param_1 + 0xb8) + 0x90))(lVar1);
  fVar3 = (float)FUN_00f13e54(lVar1);
  fVar4 = *(float *)(param_1 + 0xf8);
  if (fVar4 != fVar3 * 0.5) {
    *(float *)(param_1 + 0xf8) = fVar3 * 0.5;
    FUN_0091ada4(lVar1);
  }
  local_48 = FUN_00f13e54(lVar1);
  fStack_44 = fVar4;
  FUN_00f13f18(param_1,&local_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad27ac(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027d7578;
  FUN_00f0bdbc(plVar1,1);
  plVar2 = param_1 + 0x30;
  param_1[0x17] = (long)&PTR_FUN_027ccd08;
  FUN_00f0d160(plVar2);
  FUN_00b1d5d8(param_1 + 0x56);
  plVar3 = param_1 + 0xd0;
  FUN_00f0d160(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,param_1 + 0x56,1);
  FUN_00f023ec(plVar1,plVar3,1);
  uVar5 = FUN_0092ea9c();
  if ((*(uint *)((long)param_1 + 0x204) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0db64(0x43480000,0,0x3f800000,plVar2);
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar5 & 1) == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d378(plVar2,*ppuVar4);
  if ((*(float *)(param_1 + 0x3a) != 0.5) || (*(float *)((long)param_1 + 0x1d4) != 0.0)) {
    param_1[0x3a] = 0x3f000000;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0db64(0x43480000,0,0x3f800000,plVar3);
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  if ((uVar5 & 1) == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(plVar3,*ppuVar4);
  uVar6 = FUN_00cb439c(0xffffffff,0,0);
  FUN_00f0d75c(plVar3,uVar6);
  if ((*(float *)(param_1 + 0xda) != 0.5) || (*(float *)((long)param_1 + 0x6d4) != 0.0)) {
    param_1[0xda] = 0x3f000000;
    FUN_0091ada4(plVar3);
  }
  *(uint *)((long)param_1 + 0x704) = *(uint *)((long)param_1 + 0x704) & 0xfffffffb;
  return;
}




void FUN_00ad29ac(long param_1,undefined8 param_2,uint param_3)

{
  FUN_00f0d75c(param_1 + 0x180);
  FUN_00b1d77c(param_1 + 0x2b0,param_3);
  *(uint *)(param_1 + 0x334) =
       (*(uint *)(param_1 + 0x334) & 0xfffffff8 |
       *(uint *)(param_1 + 0x334) & 3 | (param_3 >> 0x1f) << 2) ^ 4;
  *(uint *)(param_1 + 0x704) =
       *(uint *)(param_1 + 0x704) & 0xfffffff8 |
       *(uint *)(param_1 + 0x704) & 3 | (uint)(param_3 == 0xffffffff) << 2;
  FUN_00ad2a10(param_1);
  return;
}




void FUN_00ad2a10(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_48;
  float fStack_44;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0xb8;
  FUN_00f0bc10(0,0,0,&local_48);
  FUN_00f0c168(lVar1,&local_48);
  (**(code **)(*(long *)(param_1 + 0xb8) + 0x90))(lVar1);
  fVar3 = (float)FUN_00f13e54(lVar1);
  if (*(float *)(param_1 + 0xf8) != fVar3 * 0.5) {
    *(float *)(param_1 + 0xf8) = fVar3 * 0.5;
    FUN_0091ada4(lVar1);
  }
  fVar3 = (float)FUN_00f13e54(param_1 + 0x2b0);
  fVar4 = *(float *)(param_1 + 0x2f0);
  if (fVar4 != fVar3 * -0.5) {
    *(float *)(param_1 + 0x2f0) = fVar3 * -0.5;
    FUN_0091ada4(param_1 + 0x2b0);
  }
  local_48 = FUN_00f13e54(lVar1);
  fStack_44 = fVar4;
  FUN_00f13f18(param_1,&local_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad2afc(long *param_1)

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
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  undefined **ppuVar25;
  undefined4 uVar26;
  long lVar27;
  undefined4 uVar28;
  undefined **ppuVar29;
  bool bVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [4];
  code *local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  long local_a0;
  
  lVar27 = tpidr_el0;
  local_a0 = *(long *)(lVar27 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027d76c0;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x28;
  param_1[0x17] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  plVar3 = param_1 + 0x46;
  FUN_00f0e4a8();
  plVar4 = param_1 + 100;
  FUN_00f0e4a8();
  plVar5 = param_1 + 0x82;
  FUN_00f017e8();
  plVar6 = param_1 + 0x93;
  param_1[0x82] = (long)&PTR_FUN_027c1f80;
  FUN_00f13ca4();
  plVar7 = param_1 + 0xaa;
  FUN_00f0bdbc(plVar7,1);
  plVar8 = param_1 + 0xc3;
  param_1[0xaa] = (long)&PTR_FUN_027ccd08;
  FUN_00f0d160(plVar8);
  plVar9 = param_1 + 0xe9;
  FUN_00f0d160();
  plVar10 = param_1 + 0x10f;
  FUN_00abaee8(plVar10,0);
  plVar11 = param_1 + 0x1ce;
  FUN_00f0d160();
  plVar12 = param_1 + 500;
  FUN_00f0d160();
  plVar13 = param_1 + 0x21a;
  FUN_00abaee8(plVar13,0);
  plVar14 = param_1 + 0x2d9;
  FUN_00aea298();
  plVar15 = param_1 + 0x5b5;
  FUN_00aea298();
  plVar16 = param_1 + 0x891;
  FUN_00aea298();
  plVar17 = param_1 + 0xb6d;
  FUN_00f0bdbc(plVar17,1);
  param_1[0xb6d] = (long)&PTR_FUN_027ccd08;
  FUN_00ad24f0();
  FUN_00ad27ac();
  FUN_00ad24f0();
  FUN_00ad24f0();
  plVar18 = param_1 + 0xdf0;
  FUN_00f0bdbc(plVar18,1);
  param_1[0xdf0] = (long)&PTR_FUN_027ccd08;
  FUN_00ad24f0();
  FUN_00ad27ac();
  FUN_00ad24f0();
  FUN_00ad24f0();
  plVar19 = param_1 + 0x1073;
  FUN_00ab6c24(plVar19,0);
  plVar20 = param_1 + 0x132b;
  FUN_00f0e4a8(plVar20);
  plVar21 = param_1 + 0x1349;
  FUN_00ab6c24(plVar21,0);
  plVar22 = param_1 + 0x1601;
  FUN_00f0bdbc(plVar22,0);
  plVar23 = param_1 + 0x161a;
  *plVar22 = (long)&PTR_FUN_027c3260;
  FUN_00ab6c24(plVar23,0);
  plVar24 = param_1 + 0x18d2;
  FUN_00ab6c24(plVar24,0);
  *(undefined1 *)(param_1 + 0x1b8a) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar19,1);
  FUN_00f023ec(plVar19,plVar20,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_00f023ec(plVar5,plVar6,1);
  FUN_00f023ec(plVar6,plVar7,1);
  FUN_00f023ec(plVar7,plVar8,1);
  FUN_00f023ec(plVar8,plVar10,1);
  FUN_00f023ec(plVar7,plVar9,1);
  FUN_00f023ec(plVar7,plVar11,1);
  FUN_00f023ec(plVar11,plVar13,1);
  FUN_00f023ec(plVar7,plVar12,1);
  FUN_00f023ec(plVar7,plVar14,1);
  FUN_00f023ec(plVar7,plVar15,1);
  FUN_00f023ec(plVar7,plVar16,1);
  FUN_00f023ec(plVar6,plVar17,1);
  FUN_00f023ec(plVar17,param_1 + 0xb86,1);
  FUN_00f023ec(plVar17,param_1 + 0xc02,1);
  FUN_00f023ec(plVar17,param_1 + 0xcf8,1);
  FUN_00f023ec(plVar17,param_1 + 0xd74,1);
  FUN_00f023ec(plVar6,plVar18,1);
  FUN_00f023ec(plVar18,param_1 + 0xe09,1);
  FUN_00f023ec(plVar18,param_1 + 0xe85,1);
  FUN_00f023ec(plVar18,param_1 + 0xf7b,1);
  FUN_00f023ec(plVar18,param_1 + 0xff7,1);
  FUN_00f023ec(plVar5,plVar21,1);
  FUN_00f023ec(plVar5,plVar22,1);
  FUN_00f023ec(plVar22,plVar24,1);
  FUN_00f023ec(plVar22,plVar23,1);
  uVar31 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar31 & 1,auStack_d4,auStack_d8,auStack_dc);
  uVar32 = FUN_0092ea9c();
  uVar33 = FUN_00f13624();
  FUN_00f1515c(uVar33,plVar7,3,10);
  FUN_00f1515c(uVar33,plVar17,2,10);
  FUN_00f1515c(uVar33,plVar18,2,10);
  FUN_00f13ba0(uVar33,0x50,0,0x50,0);
  FUN_00f13fd8(plVar6,uVar33);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  uVar31 = *(uint *)((long)param_1 + 0x1c4);
  if ((uVar31 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x1c4) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x1980;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  if ((*(uint *)((long)param_1 + 0x2b4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2b4) = *(uint *)((long)param_1 + 0x2b4) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  uVar31 = *(uint *)((long)param_1 + 0x3a4);
  if ((uVar31 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x3a4) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x1980;
    FUN_0091ada4(plVar4);
  }
  *(byte *)(param_1 + 0x7f) = *(byte *)(param_1 + 0x7f) | 2;
  if ((*(float *)(param_1 + 0x6e) != 0.0) || (*(float *)((long)param_1 + 0x374) != 1.0)) {
    param_1[0x6e] = 0x3f80000000000000;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  FUN_00f0e578(param_1 + 0x1aa,"edit_handle");
  *(uint *)((long)param_1 + 0xce4) = *(uint *)((long)param_1 + 0xce4) & 0xfffffffb;
  FUN_00b09144(0x3ecccccd,plVar10);
  uVar31 = *(uint *)((long)param_1 + 0x8fc);
  if ((uVar31 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x8fc) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar10);
  }
  local_b8 = 0;
  uStack_b0 = 0;
  uVar26 = DAT_03210c64;
  local_d0 = thunk_FUN_00ad4d74;
  local_c0 = 0;
  local_c8 = param_1;
  local_a8 = uVar26;
  FUN_009693a0(param_1 + 0x110,&local_d0);
  FUN_00b0914c(plVar10,1);
  if ((*(float *)(param_1 + 0x118) != 0.7) || (*(float *)((long)param_1 + 0x8c4) != 0.7)) {
    param_1[0x118] = 0x3f3333333f333333;
    FUN_0091ada4(plVar10);
  }
  bVar30 = (uVar32 & 1) == 0;
  ppuVar25 = &PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20;
  if (bVar30) {
    ppuVar25 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  }
  fVar35 = 1000.0;
  ppuVar29 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if (bVar30) {
    fVar35 = 800.0;
    ppuVar29 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d378(plVar8,*ppuVar25);
  uVar33 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_GUILD_MOTTO_LABEL",0);
  FUN_00f0d75c(plVar8,uVar33);
  fVar34 = (float)FUN_00f01c20(plVar10);
  FUN_00f0db64(fVar35 - fVar34,0,0x3f800000,plVar11);
  FUN_00f0d9a4(plVar9,0);
  FUN_00f0d378(plVar9,*ppuVar29);
  uVar31 = *(uint *)((long)param_1 + 0x7cc);
  if ((uVar31 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x7cc) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar9);
  }
  FUN_00f0dad0(fVar35,plVar9,1);
  FUN_00f0e578(param_1 + 0x2b5,"edit_handle");
  *(uint *)((long)param_1 + 0x153c) = *(uint *)((long)param_1 + 0x153c) & 0xfffffffb;
  FUN_00b09144(0x3ecccccd,plVar13);
  uVar31 = *(uint *)((long)param_1 + 0x1154);
  if ((uVar31 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x1154) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar13);
  }
  local_d0 = thunk_FUN_00ad4de4;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  local_c8 = param_1;
  local_a8 = uVar26;
  FUN_009693a0(param_1 + 0x21b,&local_d0);
  FUN_00b0914c(plVar13,1);
  if ((*(float *)(param_1 + 0x223) != 0.7) || (*(float *)((long)param_1 + 0x111c) != 0.7)) {
    param_1[0x223] = 0x3f3333333f333333;
    FUN_0091ada4(plVar13);
  }
  ppuVar25 = &PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20;
  ppuVar29 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if ((uVar32 & 1) == 0) {
    ppuVar25 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
    ppuVar29 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d378(plVar11,*ppuVar25);
  uVar33 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_GUILD_MESSAGE_LABEL",0);
  FUN_00f0d75c(plVar11,uVar33);
  fVar34 = (float)FUN_00f01c20(plVar13);
  FUN_00f0db64(fVar35 - fVar34,0,0x3f800000,plVar11);
  FUN_00f0d9a4(plVar12,0);
  FUN_00f0d378(plVar12,*ppuVar29);
  FUN_00e705c8(&local_d0,
               "Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, fr"
              );
  FUN_00f0d75c(plVar12,&local_d0);
  if (local_c8 != (long *)0x0) {
    operator_delete__(local_c8);
    local_d0 = (code *)0x0;
    local_c8 = (long *)0x0;
  }
  uVar31 = *(uint *)((long)param_1 + 0x1024);
  if ((uVar31 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x1024) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar12);
  }
  FUN_00f0dad0(fVar35,plVar12,1);
  ppuVar25 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar32 & 1) == 0) {
    ppuVar25 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  }
  FUN_00ab703c(0,0,fVar35,plVar14,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,*ppuVar25);
  plVar1 = param_1 + 0x368;
  fVar34 = (float)FUN_00f10374(plVar1,0);
  FUN_00ab74fc(-(fVar34 * *(float *)(param_1 + 0x3bc)),0,plVar14);
  *(uint *)((long)param_1 + 0x1bc4) = *(uint *)((long)param_1 + 0x1bc4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1a74) = *(uint *)((long)param_1 + 0x1a74) & 0xfffffffb;
  FUN_00ab703c(0,0,fVar35,plVar15,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,*ppuVar25);
  fVar34 = (float)FUN_00f10374(plVar1,0);
  FUN_00ab74fc(-(fVar34 * *(float *)(param_1 + 0x3bc)),0,plVar15);
  *(uint *)((long)param_1 + 0x32a4) = *(uint *)((long)param_1 + 0x32a4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x3154) = *(uint *)((long)param_1 + 0x3154) & 0xfffffffb;
  FUN_00ab703c(0,0,fVar35,plVar16,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,*ppuVar25);
  fVar35 = (float)FUN_00f10374(plVar1,0);
  FUN_00ab74fc(-(fVar35 * *(float *)(param_1 + 0x3bc)),0,plVar16);
  *(uint *)((long)param_1 + 0x4984) = *(uint *)((long)param_1 + 0x4984) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x4834) = *(uint *)((long)param_1 + 0x4834) & 0xfffffffb;
  if ((*(uint *)((long)param_1 + 0x494) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) & 0xffff807f;
    FUN_0091ada4(plVar5);
  }
  uVar33 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_GUILD_DETAILS_BUTTON",0);
  FUN_00ab703c(0x41f00000,0,0x44480000,plVar19,0,uVar33,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_d0 = FUN_00ad3a30;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  local_c8 = param_1;
  local_a8 = uVar26;
  FUN_009693a0(param_1 + 0x1074,&local_d0);
  *(uint *)((long)param_1 + 0x8894) = *(uint *)((long)param_1 + 0x8894) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x8744) = *(uint *)((long)param_1 + 0x8744) & 0xfffffffb;
  FUN_00f0d378(param_1 + 0x1157,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50);
  FUN_00b09144(0xbf800000,plVar19);
  FUN_00b0914c(plVar19,1);
  FUN_00f0e548(plVar20,PTR_s_build___MenuPartsCommon_tga_02be3530,"arrow_right");
  if ((*(float *)(param_1 + 0x1335) != 0.5) || (*(float *)((long)param_1 + 0x99ac) != 0.5)) {
    param_1[0x1335] = 0x3f0000003f000000;
    FUN_0091ada4(plVar20);
  }
  uVar33 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_EDIT_GUILD_BUTTON",0);
  FUN_00ab703c(0x41f00000,0,0x44480000,plVar21,0,uVar33,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_d0 = thunk_FUN_00ad4d04;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  local_c8 = param_1;
  local_a8 = uVar26;
  FUN_009693a0(param_1 + 0x134a,&local_d0);
  FUN_00b0914c(plVar21,1);
  uVar33 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_JOIN",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x44960000,plVar23,0,uVar33,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_d0 = thunk_FUN_00ad4e54;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  local_c8 = param_1;
  local_a8 = uVar26;
  FUN_009693a0(param_1 + 0x161b,&local_d0);
  bVar30 = (uVar32 & 1) == 0;
  ppuVar25 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0;
  if (bVar30) {
    ppuVar25 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  }
  uVar28 = 0x43380000;
  if (bVar30) {
    uVar28 = 0x4300cccd;
  }
  FUN_00f0d378(param_1 + 0x16fe,*ppuVar25);
  FUN_00ab7628(uVar28,plVar23);
  FUN_00b0914c(plVar23,1);
  uVar33 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_DECLINE",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x44960000,plVar24,0,uVar33,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_d0 = thunk_FUN_00ad4ec4;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  local_c8 = param_1;
  local_a8 = uVar26;
  FUN_009693a0(param_1 + 0x18d3,&local_d0);
  FUN_00f0d378(param_1 + 0x19b6,*ppuVar25);
  FUN_00ab7628(uVar28,plVar24);
  FUN_00b0914c(plVar24,1);
  *(uint *)((long)param_1 + 0xb154) = *(uint *)((long)param_1 + 0xb154) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xc714) = *(uint *)((long)param_1 + 0xc714) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xb08c) = *(uint *)((long)param_1 + 0xb08c) & 0xfffffffb;
  FUN_00ad3a94(param_1);
  if ((*(float *)(param_1 + 0xb77) != 0.5) || (*(float *)((long)param_1 + 0x5bbc) != 0.0)) {
    param_1[0xb77] = 0x3f000000;
    FUN_0091ada4(plVar17);
  }
  if ((*(float *)(param_1 + 0xdfa) != 0.5) || (*(float *)((long)param_1 + 0x6fd4) != 0.0)) {
    param_1[0xdfa] = 0x3f000000;
    FUN_0091ada4(plVar18);
  }
  *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) & 0xfffffffb;
  FUN_00ad3a94(param_1);
  if (*(long *)(lVar27 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

