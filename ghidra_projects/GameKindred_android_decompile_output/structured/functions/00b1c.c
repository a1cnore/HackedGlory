// functions/00b1c — 14 functions
#include "libGameKindred.h"




void FUN_00b1c1e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dd138;
  param_1[0x6c] = &PTR_FUN_028266f0;
  param_1[0x83] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x86);
  FUN_00f13d08(param_1 + 0x6c);
  param_1[0x4e] = &PTR_FUN_028266f0;
  param_1[0x65] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x68);
  FUN_00f13d08(param_1 + 0x4e);
  param_1[0x30] = &PTR_FUN_028266f0;
  param_1[0x47] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4a);
  FUN_00f13d08(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b1c288(void *param_1)

{
  FUN_00b1c1e4();
  operator_delete(param_1);
  return;
}




void FUN_00b1c2ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dcff0;
  param_1[0x82] = &PTR_FUN_028266f0;
  param_1[0x99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9c);
  FUN_00f13d08(param_1 + 0x82);
  param_1[100] = &PTR_FUN_028266f0;
  param_1[0x7b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7e);
  FUN_00f13d08(param_1 + 100);
  param_1[0x46] = &PTR_FUN_028266f0;
  param_1[0x5d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x60);
  FUN_00f13d08(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_028266f0;
  param_1[0x3f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b1c36c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dcff0;
  param_1[0x82] = &PTR_FUN_028266f0;
  param_1[0x99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9c);
  FUN_00f13d08(param_1 + 0x82);
  param_1[100] = &PTR_FUN_028266f0;
  param_1[0x7b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7e);
  FUN_00f13d08(param_1 + 100);
  param_1[0x46] = &PTR_FUN_028266f0;
  param_1[0x5d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x60);
  FUN_00f13d08(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_028266f0;
  param_1[0x3f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b1c434(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dd280;
  FUN_00f0d3a4(param_1 + 0x74);
  FUN_00f0d3a4(param_1 + 0x4e);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b1c4a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dd280;
  FUN_00f0d3a4(param_1 + 0x74);
  FUN_00f0d3a4(param_1 + 0x4e);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b1c524(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027dd3c8;
  lVar2 = 0x3c0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2 + 0x68);
    *puVar1 = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar2 + 0x120) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar2 + 0x138);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != 0);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b1c5ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027dd3c8;
  lVar2 = 0x3c0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2 + 0x68);
    *puVar1 = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar2 + 0x120) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar2 + 0x138);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != 0);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b1c63c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dd518;
  FUN_00f0d3a4(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00b1c6a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dd518;
  FUN_00f0d3a4(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b1c70c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined4 local_80 [2];
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  FUN_00f017e8();
  plVar12 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027dd618;
  FUN_00f017e8(plVar12);
  plVar11 = param_1 + 0x22;
  *plVar12 = (long)&PTR_FUN_027c1f80;
  FUN_00b09580(plVar11);
  lVar10 = 0;
  do {
    FUN_00f0e4a8((long)param_1 + lVar10 + 0x1428);
    lVar10 = lVar10 + 0xf0;
  } while (lVar10 != 0x2d0);
  plVar1 = param_1 + 0x2df;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x305;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x32b;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x351;
  FUN_00f017e8(plVar4);
  param_1[0x351] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  FUN_00f0d160();
  FUN_00f0d160();
  param_1[0x3eb] = 0x3f4000003f000000;
  param_1[0x3ea] = 0x3e80000000000000;
  param_1[0x3ed] = 0x3f80000000000000;
  param_1[0x3ec] = 0x4248000043960000;
  *(undefined8 *)((long)param_1 + 0x1f77) = 0;
  param_1[0x3ee] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  FUN_00f023ec(plVar12,plVar11,1);
  FUN_00f023ec(plVar12,plVar1,1);
  FUN_00f023ec(plVar12,plVar2,1);
  FUN_00f023ec(plVar12,plVar3,1);
  lVar10 = 0;
  do {
    FUN_00f023ec(plVar12,(long)param_1 + lVar10 + 0x1428,1);
    lVar10 = lVar10 + 0xf0;
  } while (lVar10 != 0x2d0);
  FUN_00f023ec(plVar12,plVar4,1);
  FUN_00f023ec(plVar4,param_1 + 0x380,1);
  FUN_00f023ec(plVar4,param_1 + 0x362,1);
  FUN_00f023ec(plVar4,param_1 + 0x39e,1);
  FUN_00f023ec(plVar4,param_1 + 0x3c4,1);
  uVar8 = FUN_0092ea9c();
  FUN_00b0b848(0x3fef684c,plVar11,"xp_bar_current","xp_bar_new");
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar8 & 1) == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_30_02be9c38;
  }
  local_80[0] = 0xffa0a0a0;
  FUN_00f0d92c(plVar1,*ppuVar5,local_80);
  uVar9 = FUN_00e6ce7c("SKILL_SUBTIER_BRONZE",0);
  FUN_00f0d75c(plVar1,uVar9);
  local_80[0] = 0xffa0a0a0;
  FUN_00f0d92c(plVar2,*ppuVar5,local_80);
  uVar9 = FUN_00e6ce7c("SKILL_SUBTIER_SILVER",0);
  FUN_00f0d75c(plVar2,uVar9);
  local_80[0] = 0xffa0a0a0;
  FUN_00f0d92c(plVar3,*ppuVar5,local_80);
  uVar9 = FUN_00e6ce7c("SKILL_SUBTIER_GOLD",0);
  FUN_00f0d75c(plVar3,uVar9);
  lVar10 = 3;
  plVar11 = param_1 + 0x285;
  do {
    FUN_00f0e548(plVar11,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
    FUN_00f13f08(0x40800000,0x42200000,plVar11);
    uVar6 = *(uint *)((long)plVar11 + 0x84);
    if ((uVar6 & 0x7f80) != 0x2c80) {
      *(uint *)((long)plVar11 + 0x84) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x2c80;
      FUN_0091ada4(plVar11);
    }
    lVar10 = lVar10 + -1;
    plVar11 = plVar11 + 0x1e;
  } while (lVar10 != 0);
  FUN_00f0e548(param_1 + 0x362,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e548(param_1 + 0x380,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_button_play");
  *(byte *)(param_1 + 0x39b) = *(byte *)(param_1 + 0x39b) | 1;
  FUN_00f0d378(param_1 + 0x39e,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10);
  FUN_00f0d378(param_1 + 0x3c4,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10);
  *(uint *)((long)param_1 + 0x1b0c) =
       *(uint *)((long)param_1 + 0x1b0c) & 0xfffffffb | (uint)*(byte *)((long)param_1 + 0x1f7c) << 2
  ;
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1cb2c(long param_1,uint param_2)

{
  *(char *)(param_1 + 0x1f7c) = (char)(param_2 & 1);
  *(uint *)(param_1 + 0x1b0c) =
       *(uint *)(param_1 + 0x1b0c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x1b0c) & 3 | (param_2 & 1) << 2;
  return;
}




void FUN_00b1cb48(undefined4 param_1,undefined4 param_2,long param_3,int param_4,int param_5,
                 int param_6,int param_7,int param_8,byte param_9)

{
  *(float *)(param_3 + 0x1f68) = (float)param_4;
  *(float *)(param_3 + 0x1f6c) = (float)param_5;
  *(float *)(param_3 + 0x1f70) = (float)param_6;
  *(undefined4 *)(param_3 + 0x1f60) = param_1;
  *(undefined4 *)(param_3 + 0x1f64) = param_2;
  *(float *)(param_3 + 0x1f78) = (float)param_8;
  *(float *)(param_3 + 0x1f74) = (float)param_7;
  *(byte *)(param_3 + 0x1f7e) = param_9 & 1;
  FUN_00b0a930(param_3 + 0x110);
  FUN_00b1cbb0(param_3);
  return;
}




void FUN_00b1cbb0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  long local_98;
  
  lVar5 = tpidr_el0;
  local_98 = *(long *)(lVar5 + 0x28);
  lVar7 = 3;
  lVar6 = param_1 + 0x1428;
  do {
    fVar8 = *(float *)(param_1 + 0x1f64) * 0.5 + 4.0;
    if (*(float *)(lVar6 + 0x44) != fVar8) {
      *(float *)(lVar6 + 0x44) = fVar8;
      FUN_0091ada4(lVar6);
    }
    lVar7 = lVar7 + -1;
    lVar6 = lVar6 + 0xf0;
  } while (lVar7 != 0);
  fVar8 = *(float *)(param_1 + 0x1f64) * 0.5 + 40.0;
  lVar6 = param_1 + 0x16f8;
  if (*(float *)(param_1 + 0x173c) != fVar8) {
    *(float *)(param_1 + 0x173c) = fVar8;
    FUN_0091ada4(lVar6);
    fVar8 = *(float *)(param_1 + 0x1f64) * 0.5 + 40.0;
  }
  lVar7 = param_1 + 0x1828;
  if (*(float *)(param_1 + 0x186c) != fVar8) {
    *(float *)(param_1 + 0x186c) = fVar8;
    FUN_0091ada4(lVar7);
    fVar8 = *(float *)(param_1 + 0x1f64) * 0.5 + 40.0;
  }
  lVar1 = param_1 + 0x1958;
  if (*(float *)(param_1 + 0x199c) != fVar8) {
    *(float *)(param_1 + 0x199c) = fVar8;
    FUN_0091ada4(lVar1);
  }
  fVar8 = *(float *)(param_1 + 0x1f60);
  fVar12 = *(float *)(param_1 + 0x150);
  fVar9 = fVar12 + fVar8 * *(float *)(param_1 + 0x1f54) + -2.0;
  if (*(float *)(param_1 + 0x1468) != fVar9) {
    *(float *)(param_1 + 0x1468) = fVar9;
    FUN_0091ada4(param_1 + 0x1428);
    fVar8 = *(float *)(param_1 + 0x1f60);
  }
  fVar9 = fVar12 + fVar8 * *(float *)(param_1 + 0x1f58) + -2.0;
  if (*(float *)(param_1 + 0x1558) != fVar9) {
    *(float *)(param_1 + 0x1558) = fVar9;
    FUN_0091ada4(param_1 + 0x1518);
    fVar8 = *(float *)(param_1 + 0x1f60);
  }
  fVar9 = fVar12 + fVar8 * *(float *)(param_1 + 0x1f5c) + -2.0;
  if (*(float *)(param_1 + 0x1648) != fVar9) {
    *(float *)(param_1 + 0x1648) = fVar9;
    FUN_0091ada4(param_1 + 0x1608);
    fVar8 = *(float *)(param_1 + 0x1f60);
  }
  fVar9 = *(float *)(param_1 + 0x1f58);
  fVar10 = fVar12 + fVar8 * (*(float *)(param_1 + 0x1f54) +
                            (fVar9 - *(float *)(param_1 + 0x1f54)) * 0.5);
  if (*(float *)(param_1 + 0x1738) != fVar10) {
    *(float *)(param_1 + 0x1738) = fVar10;
    FUN_0091ada4(lVar6);
    fVar8 = *(float *)(param_1 + 0x1f60);
    fVar9 = *(float *)(param_1 + 0x1f58);
  }
  fVar10 = *(float *)(param_1 + 0x1f5c);
  fVar9 = fVar12 + fVar8 * (fVar9 + (fVar10 - fVar9) * 0.5);
  if (*(float *)(param_1 + 0x1868) != fVar9) {
    *(float *)(param_1 + 0x1868) = fVar9;
    FUN_0091ada4(lVar7);
    fVar8 = *(float *)(param_1 + 0x1f60);
    fVar10 = *(float *)(param_1 + 0x1f5c);
  }
  fVar8 = fVar12 + fVar8 * (fVar10 + (1.0 - fVar10) * 0.5);
  if (*(float *)(param_1 + 0x1998) != fVar8) {
    *(float *)(param_1 + 0x1998) = fVar8;
    FUN_0091ada4(lVar1);
  }
  if (*(char *)(param_1 + 0x1f7e) == '\0') {
    fVar11 = *(float *)(param_1 + 0x1868);
    fVar8 = (float)FUN_00f0d4e0(lVar7);
    fVar13 = *(float *)(param_1 + 0x1998);
    fVar9 = (float)FUN_00f0d4e0(lVar1);
    fVar10 = *(float *)(param_1 + 0x1f64) * 0.5;
    if (fVar11 + fVar8 * 0.5 + 10.0 <= fVar13 - fVar9) {
      fVar10 = fVar10 + 40.0;
      if (*(float *)(param_1 + 0x186c) != fVar10) goto LAB_00b1ced8;
    }
    else {
      fVar10 = fVar10 + 70.0;
      if (*(float *)(param_1 + 0x186c) != fVar10) {
LAB_00b1ced8:
        *(float *)(param_1 + 0x186c) = fVar10;
        FUN_0091ada4(lVar7);
      }
    }
  }
  else {
    fVar8 = *(float *)(param_1 + 0x1f60) * 0.33 + -20.0;
    FUN_00f0db64(fVar8,0,0x3f800000,lVar6);
    FUN_00f0db64(fVar8,0,0x3f800000,lVar7);
    FUN_00f0db64(fVar8,0,0x3f800000,lVar1);
  }
  fVar8 = *(float *)(param_1 + 0x1f60);
  fVar9 = fVar12 + fVar8 * *(float *)(param_1 + 0x1f54) + -2.0;
  if (*(float *)(param_1 + 0x1468) != fVar9) {
    *(float *)(param_1 + 0x1468) = fVar9;
    FUN_0091ada4(param_1 + 0x1428);
    fVar8 = *(float *)(param_1 + 0x1f60);
  }
  fVar9 = fVar12 + fVar8 * *(float *)(param_1 + 0x1f58) + -2.0;
  if (*(float *)(param_1 + 0x1558) != fVar9) {
    *(float *)(param_1 + 0x1558) = fVar9;
    FUN_0091ada4(param_1 + 0x1518);
    fVar8 = *(float *)(param_1 + 0x1f60);
  }
  fVar8 = fVar12 + fVar8 * *(float *)(param_1 + 0x1f5c) + -2.0;
  if (*(float *)(param_1 + 0x1648) != fVar8) {
    *(float *)(param_1 + 0x1648) = fVar8;
    FUN_0091ada4(param_1 + 0x1608);
  }
  FUN_00e70510(&local_b0);
  fVar9 = *(float *)(param_1 + 0x1f74);
  fVar12 = fVar9 * 10.0;
  fVar8 = fVar12;
  if (1.0 <= fVar9) {
    fVar8 = fVar9;
  }
  FUN_00e70e18(&local_b0,&DAT_01bb6d43,(int)fVar8);
  plVar2 = (long *)(param_1 + 0x1cf0);
  FUN_00f0d75c(plVar2,&local_b0);
  if (*(float *)(param_1 + 0x1f78) == 0.0) {
    *(uint *)(param_1 + 0x1ea4) = *(uint *)(param_1 + 0x1ea4) & 0xfffffffb;
  }
  else {
    FUN_00e70e18(&local_b0,"(%+d)",(int)*(float *)(param_1 + 0x1f78));
    FUN_00f0d75c(param_1 + 0x1e20,&local_b0);
    *(uint *)(param_1 + 0x1ea4) = *(uint *)(param_1 + 0x1ea4) | 4;
    if (0.0 <= *(float *)(param_1 + 0x1f78)) {
      uVar4 = 0xff00ff00;
    }
    else {
      uVar4 = 0xff4040f0;
    }
    local_a0 = CONCAT44(local_a0._4_4_,uVar4);
    FUN_00f0d7fc(param_1 + 0x1e20,&local_a0);
  }
  fVar10 = *(float *)(param_1 + 0x1f64);
  FUN_00f01c20(plVar2);
  fVar10 = fVar10 + fVar12;
  lVar6 = param_1 + 0x1b10;
  FUN_00f13f08(0x40c00000,fVar10,lVar6);
  fVar8 = *(float *)(param_1 + 0x1f60) *
          (*(float *)(param_1 + 0x1f70) /
          (*(float *)(param_1 + 0x1f6c) - *(float *)(param_1 + 0x1f68)));
  fVar9 = *(float *)(param_1 + 0x1f64) * 0.5;
  if ((*(float *)(param_1 + 0x1b50) != fVar8) || (*(float *)(param_1 + 0x1b54) != fVar9)) {
    *(float *)(param_1 + 0x1b50) = fVar8;
    *(float *)(param_1 + 0x1b54) = fVar9;
    FUN_0091ada4(lVar6);
  }
  local_a0 = 0x3f80000000000000;
  (**(code **)(*(long *)(param_1 + 0x1b10) + 0x28))(lVar6,&local_a0);
  lVar6 = param_1 + 0x1c00;
  FUN_00f01c20(plVar2);
  FUN_00f13f08(0x41b00000,fVar9 * 0.75,lVar6);
  fVar8 = *(float *)(param_1 + 0x1b50) + 2.0;
  fVar9 = (*(float *)(param_1 + 0x1b54) - fVar10) + -4.0;
  if ((*(float *)(param_1 + 0x1c40) != fVar8) || (*(float *)(param_1 + 0x1c44) != fVar9)) {
    *(float *)(param_1 + 0x1c40) = fVar8;
    *(float *)(param_1 + 0x1c44) = fVar9;
    FUN_0091ada4(lVar6);
  }
  local_a0 = 0x3f800000;
  (**(code **)(*(long *)(param_1 + 0x1c00) + 0x28))(lVar6,&local_a0);
  fVar12 = *(float *)(param_1 + 0x1c40);
  fVar8 = (float)FUN_00f0eac0(lVar6);
  fVar10 = *(float *)(param_1 + 0x1c44);
  fVar9 = -8.0;
  fVar8 = (fVar12 - fVar8) + -8.0;
  FUN_00f0eac0(lVar6);
  fVar10 = fVar10 + fVar9 * 0.5;
  plVar3 = (long *)(param_1 + 0x1e20);
  if ((*(byte *)(param_1 + 0x1ea4) >> 2 & 1) != 0) {
    if ((*(float *)(param_1 + 0x1e60) != fVar8) || (*(float *)(param_1 + 0x1e64) != fVar10)) {
      *(float *)(param_1 + 0x1e60) = fVar8;
      *(float *)(param_1 + 0x1e64) = fVar10;
      FUN_0091ada4(plVar3);
    }
    local_a0 = 0x3f0000003f800000;
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_a0);
  }
  if ((*(byte *)(param_1 + 0x1d74) >> 2 & 1) == 0) goto LAB_00b1d264;
  if ((*(byte *)(param_1 + 0x1ea4) >> 2 & 1) == 0) {
    if ((*(float *)(param_1 + 0x1d30) != fVar8) || (*(float *)(param_1 + 0x1d34) != fVar10)) {
      *(float *)(param_1 + 0x1d30) = fVar8;
LAB_00b1d238:
      *(float *)(param_1 + 0x1d34) = fVar10;
      FUN_0091ada4(plVar2);
    }
  }
  else {
    fVar9 = (float)FUN_00f01c20(plVar3);
    fVar8 = (fVar8 - fVar9) + -4.0;
    if ((*(float *)(param_1 + 0x1d30) != fVar8) || (*(float *)(param_1 + 0x1d34) != fVar10)) {
      *(float *)(param_1 + 0x1d30) = fVar8;
      goto LAB_00b1d238;
    }
  }
  local_a0 = 0x3f0000003f800000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_a0);
LAB_00b1d264:
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  if (*(long *)(lVar5 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

