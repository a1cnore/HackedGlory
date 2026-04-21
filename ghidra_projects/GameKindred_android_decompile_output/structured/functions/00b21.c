// functions/00b21 — 29 functions
#include "libGameKindred.h"




void thunk_FUN_00b21260(long param_1)

{
  uint uVar1;
  
  if ((*(char *)(param_1 + 0x2448) != '\0') && (*(char *)(param_1 + 0x2449) == '\0')) {
    uVar1 = *(uint *)(param_1 + 0x17ec);
    if ((~uVar1 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x17ec) = uVar1 | 0x7f80;
      FUN_0091ada4(param_1 + 0x1768);
      uVar1 = *(uint *)(param_1 + 0x17ec);
    }
    *(uint *)(param_1 + 0x17ec) = uVar1 ^ 4;
  }
  return;
}




void FUN_00b21040(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ddb60;
  FUN_00ac5128(param_1 + 0x2ed);
  if ((void *)param_1[0x488] != (void *)0x0) {
    operator_delete__((void *)param_1[0x488]);
    param_1[0x488] = 0;
    param_1[0x487] = 0;
  }
  FUN_00ac50d4(param_1 + 0x2ed);
  param_1[0x2cf] = &PTR_FUN_028266f0;
  param_1[0x2e6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2e9);
  FUN_00f13d08(param_1 + 0x2cf);
  FUN_009c7fa8(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b210dc(void *param_1)

{
  FUN_00b21040();
  operator_delete(param_1);
  return;
}




void FUN_00b21100(long param_1)

{
  FUN_00ac53e4(param_1 + 0x1768);
  FUN_00b20f58(param_1);
  return;
}




void FUN_00b21134(long param_1)

{
  FUN_00ac57dc(param_1 + 0x1768);
  FUN_00b20f58(param_1);
  return;
}




void FUN_00b21160(long param_1)

{
  FUN_00ac5820(param_1 + 0x1768);
  FUN_00b20f58(param_1);
  return;
}




void FUN_00b2118c(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_00ac5534(param_1 + 0x1768,param_2,1);
  lVar1 = param_1 + 0xb8;
  if (lVar3 == 0) {
    FUN_00ab7498(lVar1,param_1 + 0x2438);
    uVar2 = *(uint *)(param_1 + 0x13c);
    if ((uVar2 & 0x7f80) == 0x5900) goto LAB_00b21218;
    uVar2 = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5900;
  }
  else {
    uVar4 = FUN_00f08be8(lVar3 + 0x7f0);
    FUN_00ab7498(lVar1,uVar4);
    if ((~*(uint *)(param_1 + 0x13c) & 0x7f80) == 0) goto LAB_00b21218;
    uVar2 = *(uint *)(param_1 + 0x13c) | 0x7f80;
  }
  *(uint *)(param_1 + 0x13c) = uVar2;
  FUN_0091ada4(lVar1);
LAB_00b21218:
  FUN_00b20f58(param_1);
  return;
}




float FUN_00b21228(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x2430);
  fVar1 = (float)FUN_00f01c20(param_1 + 0xb8);
  if (fVar2 <= fVar1 + 56.0) {
    fVar2 = fVar1 + 56.0;
  }
  return fVar2;
}




void FUN_00b21260(long param_1)

{
  uint uVar1;
  
  if ((*(char *)(param_1 + 0x2448) != '\0') && (*(char *)(param_1 + 0x2449) == '\0')) {
    uVar1 = *(uint *)(param_1 + 0x17ec);
    if ((~uVar1 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x17ec) = uVar1 | 0x7f80;
      FUN_0091ada4(param_1 + 0x1768);
      uVar1 = *(uint *)(param_1 + 0x17ec);
    }
    *(uint *)(param_1 + 0x17ec) = uVar1 ^ 4;
  }
  return;
}




void FUN_00b212c4(long param_1)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  
  uVar2 = FUN_019807a4();
  if ((((uVar2 & 1) != 0) && (iVar1 = FUN_019807b8(), iVar1 != 0)) &&
     (pbVar3 = (byte *)FUN_019807cc(0), (*pbVar3 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x2449) = 1;
  }
  uVar2 = FUN_019806a4();
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_019806f8(0), (uVar2 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x2449) = 1;
  }
  return;
}




void FUN_00b2132c(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x17ec);
  if (*(char *)(param_1 + 0x2449) != '\0') {
    uVar1 = uVar1 & 0xfffffffb;
    *(uint *)(param_1 + 0x17ec) = uVar1;
    *(char *)(param_1 + 0x2449) = '\0';
  }
  if ((uVar1 >> 2 & 1) == 0) {
    return;
  }
  FUN_00b212c4();
  return;
}




void FUN_00b21358(long *param_1)

{
  FUN_00aff644();
  *param_1 = (long)&PTR_FUN_027ddca8;
  FUN_00bd697c(param_1 + 0x17,1,0);
  FUN_00bf02a4(param_1 + 0x20);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x18],1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x21],1);
  *(uint *)(param_1[0x18] + 0x84) = *(uint *)(param_1[0x18] + 0x84) & 0xffffffef;
  (**(code **)(*(long *)param_1[0x18] + 0x138))();
  *(uint *)(param_1[0x18] + 0xec4) = *(uint *)(param_1[0x18] + 0xec4) & 0xfffffffb;
  return;
}




void FUN_00b21400(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  FUN_00aff690();
  fVar2 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  lVar1 = param_3[0x18];
  fVar3 = fVar2 - fVar2 * 0.62;
  FUN_00f13f08(fVar3 * 0.85,(float)param_2 * 0.85,lVar1);
  FUN_00f07940(fVar3 * 0.5,0,lVar1,8,param_3,7);
  FUN_00f13f08(fVar2 * 0.62,param_2,param_3[0x21]);
  lVar1 = param_3[0x21];
  if ((*(float *)(lVar1 + 0x40) == fVar3) && (*(float *)(lVar1 + 0x44) == 10.0)) {
    return;
  }
  *(float *)(lVar1 + 0x40) = fVar3;
  *(undefined4 *)(lVar1 + 0x44) = 0x41200000;
  FUN_0091ada4();
  return;
}




undefined1  [16] FUN_00b214e0(long *param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
  (**(code **)(*param_1 + 0x90))();
  plVar1 = (long *)param_1[0x21];
  auVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  uVar3 = auVar2._8_8_;
  (**(code **)(*plVar1 + 0x90))(plVar1);
  (**(code **)(*plVar1 + 0x48))(plVar1);
  auVar2._8_8_ = uVar3;
  return auVar2;
}




void FUN_00b2154c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xb5) = param_2 & 1;
  if ((param_2 & 1) != 0) {
    return;
  }
  FUN_00c62edc(*(undefined8 *)(param_1 + 0x108));
  return;
}




void FUN_00b21564(long *param_1,undefined8 param_2)

{
  FUN_00bd6afc(param_1 + 0x17);
  FUN_00c3b76c(param_1[0x18],1);
  FUN_00bf03e4(param_1 + 0x20,param_2);
                    /* WARNING: Could not recover jumptable at 0x00b215ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00b215b0(long param_1,uint param_2)

{
  FUN_00c63434(*(undefined8 *)(param_1 + 0x108),param_2 & 1);
  return;
}




void FUN_00b215bc(long param_1,uint param_2)

{
  FUN_00bd6eec(param_1 + 0xb8,param_2 & 1);
  return;
}




void FUN_00b215c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ddca8;
  FUN_00bf0310(param_1 + 0x20);
  FUN_00bd6cac(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b2160c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ddca8;
  FUN_00bf0310(param_1 + 0x20);
  FUN_00bd6cac(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b21658(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  code *local_c8;
  long *plStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  long local_98;
  
  lVar12 = tpidr_el0;
  local_98 = *(long *)(lVar12 + 0x28);
  FUN_00aff644();
  FUN_00cde7f4(param_1 + 0x17);
  *param_1 = (long)&PTR_FUN_027dde08;
  param_1[0x17] = (long)&PTR_FUN_027ddf70;
  FUN_00bd697c(param_1 + 0x1a,1,0);
  FUN_00abaee8(param_1 + 0x23,0);
  FUN_00f13ca4(param_1 + 0xe2);
  plVar1 = param_1 + 0xf9;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x10a;
  param_1[0xf9] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x128;
  FUN_00f0bdbc(plVar3,1);
  plVar4 = param_1 + 0x141;
  param_1[0x128] = (long)&PTR_FUN_027ccd08;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0x167;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0x18d;
  FUN_00aba378(plVar6,0);
  plVar7 = param_1 + 0x61b;
  FUN_00f0d160(plVar7);
  plVar8 = param_1 + 0x641;
  FUN_00aba378(plVar8,0);
  param_1[0xad2] = 0;
  param_1[0xad1] = 0;
  param_1[0xad0] = 0;
  param_1[0xacf] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x1b],1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xe2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar3,plVar6,1);
  FUN_00f023ec(plVar6,plVar5,1);
  FUN_00f023ec(plVar3,plVar8,1);
  FUN_00f023ec(plVar8,plVar7,1);
  *(uint *)(param_1[0x1b] + 0x84) = *(uint *)(param_1[0x1b] + 0x84) & 0xffffffef;
  (**(code **)(*(long *)param_1[0x1b] + 0x138))();
  *(uint *)(param_1[0x1b] + 0xec4) = *(uint *)(param_1[0x1b] + 0xec4) & 0xfffffffb;
  FUN_00bd6ee0(param_1 + 0x1a,1);
  local_a0 = DAT_03210f58;
  *(uint *)((long)param_1 + 0x794) = *(uint *)((long)param_1 + 0x794) | 0x10;
  local_c8 = FUN_00b21cd8;
  local_b0 = 0;
  uStack_a8 = 0;
  local_b8 = 0;
  plStack_c0 = param_1;
  FUN_009693a0(param_1 + 0xe3,&local_c8);
  local_c8 = FUN_00b21cd8;
  local_a0 = DAT_03210f84;
  local_b0 = 0;
  uStack_a8 = 0;
  local_b8 = 0;
  plStack_c0 = param_1;
  FUN_009693a0(param_1 + 0xe3,&local_c8);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  uVar10 = *(uint *)((long)param_1 + 0x8d4);
  if ((uVar10 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x8d4) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x1980;
    FUN_0091ada4(plVar2);
  }
  uVar13 = FUN_0092ea9c();
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  if ((uVar13 & 1) == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(plVar4,*ppuVar9);
  uVar10 = *(uint *)((long)param_1 + 0xa8c);
  if ((uVar10 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0xa8c) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar4);
  }
  if ((*(float *)(param_1 + 0x14b) != 0.5) || (*(float *)((long)param_1 + 0xa5c) != 0.0)) {
    param_1[0x14b] = 0x3f000000;
    FUN_0091ada4(plVar4);
  }
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar13 & 1) == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d92c(plVar5,*ppuVar9,&DAT_01bb221c);
  uVar14 = FUN_00e6ce7c("MENU_MARKET_DAILY_PURCHASE_SINGLE_LABEL",0);
  FUN_00f0d75c(plVar5,uVar14);
  if ((*(float *)(param_1 + 0x171) != 0.5) || (*(float *)((long)param_1 + 0xb8c) != 1.0)) {
    param_1[0x171] = 0x3f8000003f000000;
    FUN_0091ada4(plVar5);
  }
  if (*(float *)((long)param_1 + 0xb7c) != -10.0) {
    *(undefined4 *)((long)param_1 + 0xb7c) = 0xc1200000;
    FUN_0091ada4(plVar5);
  }
  fVar16 = 500.0;
  fVar15 = fVar16;
  FUN_00ab703c(0x41c00000,0x43fa0000,0x43fa0000,plVar6,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,
               PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  FUN_00ab7628(0x43480000,plVar6);
  FUN_00f0d4e0(plVar5);
  FUN_00ab74fc(0,fVar15 * 0.5 + 10.0,plVar6);
  FUN_00ab95f4(0,plVar6);
  local_b0 = 0;
  uStack_a8 = 0;
  uVar11 = DAT_03210c90;
  local_c8 = FUN_00b21cfc;
  local_b8 = 0;
  plStack_c0 = param_1;
  local_a0 = uVar11;
  FUN_009693a0(param_1 + 0x18e,&local_c8);
  FUN_00b09144(0,plVar6);
  FUN_00b0914c(plVar6,1);
  FUN_00ab71fc(plVar6,1);
  FUN_00f0da30(param_1 + 0x271,1);
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar13 & 1) == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d92c(plVar7,*ppuVar9,&DAT_01bb221c);
  uVar14 = FUN_00e6ce7c("MENU_MARKET_DAILY_PURCHASE_ALL_LABEL",0);
  FUN_00f0d75c(plVar7,uVar14);
  if ((*(float *)(param_1 + 0x625) != 0.5) || (*(float *)((long)param_1 + 0x312c) != 1.0)) {
    param_1[0x625] = 0x3f8000003f000000;
    FUN_0091ada4(plVar7);
  }
  if (*(float *)((long)param_1 + 0x311c) != -10.0) {
    *(undefined4 *)((long)param_1 + 0x311c) = 0xc1200000;
    FUN_0091ada4(plVar7);
  }
  FUN_00ab703c(0x41c00000,0x43fa0000,0x43fa0000,plVar8,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,
               PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  FUN_00ab7628(0x43480000,plVar8);
  FUN_00f0d4e0(plVar7);
  FUN_00ab74fc(0,fVar16 * 0.5 + 10.0,plVar8);
  FUN_00ab95f4(0x3f800000,plVar8);
  FUN_00b09144(0,plVar8);
  local_c8 = FUN_00b21d20;
  local_b0 = 0;
  uStack_a8 = 0;
  local_b8 = 0;
  plStack_c0 = param_1;
  local_a0 = uVar11;
  FUN_009693a0(param_1 + 0x642,&local_c8);
  FUN_00b0914c(plVar8,1);
  FUN_00ab71fc(plVar8,1);
  FUN_00f0da30(param_1 + 0x725,1);
  if (*(long *)(lVar12 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b21cd8(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x5678);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b21cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x5680);
    return;
  }
  return;
}




void FUN_00b21cfc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x5678);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b21d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,param_1 + 0x5680);
    return;
  }
  return;
}




void FUN_00b21d20(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x5678);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b21d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,param_1 + 0x5680);
    return;
  }
  return;
}




void FUN_00b21d44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dde08;
  param_1[0x17] = &PTR_FUN_027ddf70;
  if ((*(byte *)(param_1 + 0xad0) & 1) != 0) {
    operator_delete((void *)param_1[0xad2]);
  }
  FUN_00abbb28(param_1 + 0x641);
  FUN_00f0d3a4(param_1 + 0x61b);
  FUN_00abbb28(param_1 + 0x18d);
  FUN_00f0d3a4(param_1 + 0x167);
  FUN_00f0d3a4(param_1 + 0x141);
  FUN_00f13d08(param_1 + 0x128);
  param_1[0x10a] = &PTR_FUN_028266f0;
  param_1[0x121] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x124);
  FUN_00f13d08(param_1 + 0x10a);
  FUN_00f01868(param_1 + 0xf9);
  FUN_00f13d08(param_1 + 0xe2);
  param_1[0xbe] = &PTR_FUN_028266f0;
  param_1[0xd5] = &PTR_FUN_02826850;
  param_1[0x23] = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0xd8);
  FUN_00f13d08(param_1 + 0xbe);
  param_1[0xa0] = &PTR_FUN_028266f0;
  param_1[0xb7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xba);
  FUN_00f13d08(param_1 + 0xa0);
  param_1[0x82] = &PTR_FUN_028266f0;
  param_1[0x99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9c);
  FUN_00f13d08(param_1 + 0x82);
  FUN_00f01868(param_1 + 0x71);
  FUN_009c825c(param_1 + 0x23);
  FUN_00bd6cac(param_1 + 0x1a);
  FUN_00cde874(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b21ea0(long param_1)

{
  FUN_00b21d44(param_1 + -0xb8);
  return;
}




void FUN_00b21ea8(void *param_1)

{
  FUN_00b21d44();
  operator_delete(param_1);
  return;
}




void FUN_00b21ecc(long param_1)

{
  FUN_00b21d44((void *)(param_1 + -0xb8));
  operator_delete((void *)(param_1 + -0xb8));
  return;
}




void FUN_00b21ef4(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00aff690();
  fVar4 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar6 = fVar4 * 0.55;
  fVar4 = fVar4 - fVar6;
  FUN_00f13f08(fVar4,param_2,param_3 + 0xe2);
  lVar3 = param_3[0x1b];
  fVar7 = fVar4 * 0.5;
  fVar5 = (float)param_2;
  if ((*(float *)(lVar3 + 0x40) != fVar7) || (*(float *)(lVar3 + 0x44) != fVar5 * 0.5)) {
    *(float *)(lVar3 + 0x40) = fVar7;
    *(float *)(lVar3 + 0x44) = fVar5 * 0.5;
    FUN_0091ada4(lVar3);
    lVar3 = param_3[0x1b];
  }
  *(uint *)(lVar3 + 0x6d4) = *(uint *)(lVar3 + 0x6d4) | 4;
  FUN_00f13f08(fVar4 * 0.9,fVar5 * 0.9,lVar3);
  FUN_00f07940(fVar7,0,lVar3,8,param_3,7);
  if ((*(float *)(param_3 + 0x101) != fVar4) ||
     (fVar7 = *(float *)((long)param_3 + 0x80c), fVar7 != 0.0)) {
    *(float *)(param_3 + 0x101) = fVar4;
    *(undefined4 *)((long)param_3 + 0x80c) = 0;
    FUN_0091ada4(param_3 + 0xf9);
    fVar7 = *(float *)((long)param_3 + 0x80c);
  }
  FUN_00f13f08(fVar6,fVar5 - (fVar7 + fVar7),param_3 + 0x10a);
  fVar4 = 0.0;
  plVar1 = param_3 + 0x128;
  FUN_00f0bc10(0,0,0x42a00000,auStack_68);
  FUN_00f0c168(plVar1,auStack_68);
  (**(code **)(param_3[0x128] + 0x90))(plVar1);
  FUN_00f13e54(plVar1);
  fVar4 = (fVar5 - fVar4) * 0.5;
  if ((*(float *)(param_3 + 0x130) != fVar6 * 0.5) || (*(float *)((long)param_3 + 0x984) != fVar4))
  {
    *(float *)(param_3 + 0x130) = fVar6 * 0.5;
    *(float *)((long)param_3 + 0x984) = fVar4;
    FUN_0091ada4(plVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

