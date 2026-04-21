// functions/00c40 — 19 functions
#include "libGameKindred.h"




void FUN_00c40020(void *param_1)

{
  FUN_00c3fed4();
  operator_delete(param_1);
  return;
}




void FUN_00c40044(long *param_1,long param_2,undefined8 param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_1[(ulong)*(uint *)(param_1 + 0xc4) * 0x56 + 0x6d] != param_2) {
    (**(code **)(param_1[(ulong)*(uint *)(param_1 + 0xc4) * 0x56 + 0x18] + 0x138))
              (0x3e800000,param_1 + (ulong)*(uint *)(param_1 + 0xc4) * 0x56 + 0x18,0,param_3,1);
    uVar1 = *(uint *)(param_1 + 0xc4);
    *(uint *)(param_1 + 0xc4) = ~uVar1 & 1;
    uVar2 = FUN_00f02540(param_1 + (ulong)(~uVar1 & 1) * 0x56 + 0x18);
    if ((uVar2 & 1) != 0) {
      FUN_00f01a4c(param_1 + (ulong)*(uint *)(param_1 + 0xc4) * 0x56 + 0x18,1);
    }
    (**(code **)(*param_1 + 0x78))
              (param_1,param_1 + (ulong)*(uint *)(param_1 + 0xc4) * 0x56 + 0x18,1);
    FUN_00c3fa38(param_1 + (ulong)*(uint *)(param_1 + 0xc4) * 0x56 + 0x18,param_2,param_5 & 1);
                    /* WARNING: Could not recover jumptable at 0x00c40148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[(ulong)*(uint *)(param_1 + 0xc4) * 0x56 + 0x18] + 0x138))
              (0x3e800000,param_1 + (ulong)*(uint *)(param_1 + 0xc4) * 0x56 + 0x18,1,param_4,1);
    return;
  }
  return;
}




void FUN_00c40160(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = 0xc0;
  do {
    local_40 = (**(code **)(*param_3 + 0x48))(param_3);
    uStack_3c = param_2;
    FUN_00f13f18((long)param_3 + lVar2,&local_40);
    lVar2 = lVar2 + 0x2b0;
  } while (lVar2 != 0x620);
  FUN_00c3fb90(param_3 + (ulong)*(uint *)(param_3 + 0xc4) * 0x56 + 0x18);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c401f4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + (ulong)*(uint *)(param_1 + 0x620) * 0x2b0 + 0x368);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c40210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))();
    return;
  }
  return;
}




void FUN_00c40218(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + (ulong)*(uint *)(param_1 + 0x620) * 0x2b0 + 0x368);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c40234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}




void FUN_00c4023c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fb418;
  param_1[0x37] = &PTR_FUN_028266f0;
  param_1[0x4e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x51);
  FUN_00f13d08(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_028266f0;
  param_1[0x30] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x33);
  FUN_00f13d08(param_1 + 0x19);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c402c4(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(1.0 - *(float *)(param_5 + 0x708),0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_00f0a7e0(param_3,"Solid_Ring_Bar_Fill");
  FUN_00cb8428(*param_2,param_2[1],fVar2,0,0,param_1,param_2,uVar1,param_3,param_4);
  return;
}




void FUN_00c40348(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  code *local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long local_88;
  
  lVar8 = tpidr_el0;
  local_88 = *(long *)(lVar8 + 0x28);
  FUN_00f13ca4();
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027fb6c8;
  FUN_00f13ca4(param_1 + 0x18);
  plVar1 = param_1 + 0x2f;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x4d;
  FUN_00f017e8(plVar2);
  param_1[0x4d] = (long)&PTR_FUN_027c1f80;
  FUN_00f13ca4(param_1 + 0x5e);
  plVar3 = param_1 + 0x77;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  FUN_00f0e4a8(plVar3);
  FUN_00c422ac(param_1 + 0x95);
  plVar4 = param_1 + 0x1fe;
  FUN_00c41e38(plVar4);
  plVar5 = param_1 + 0x2e0;
  FUN_00c93600(plVar5,0);
  plVar6 = param_1 + 0x429;
  FUN_00c93600(plVar6,0);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x18,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,param_1 + 0x95,1);
  FUN_00f023ec(plVar2,plVar4,1);
  FUN_00f023ec(plVar2,param_1 + 0x5e,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar5,1);
  FUN_00f023ec(plVar2,plVar6,1);
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) | 0x10;
  local_b8._0_4_ = 0xff606060;
  FUN_00f0e670(plVar1,&local_b8,2);
  FUN_00f0e548(plVar1,PTR_s_build___VGX_splash_tga_02be3538,"blurred");
  FUN_00c93864(plVar5,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  FUN_00c938a4(plVar5,&DAT_01bee7fa);
  FUN_00c9279c(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xff5e4040);
  FUN_00c927dc(plVar5,&local_b8);
  FUN_00c927f8(0x3f4ccccd,plVar5);
  FUN_00c928a0(0x42480000,0x41400000,plVar5);
  uVar7 = DAT_03210c64;
  local_b8 = FUN_00c40718;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  local_90 = uVar7;
  FUN_009693a0(param_1 + 0x2e1,&local_b8);
  uVar9 = FUN_00e6ce7c("MAIN_MATCH_CONFIRM_ACCEPT",0);
  FUN_00c938d4(plVar5,uVar9);
  FUN_00f13f08(0x43c00000,0x42c00000,plVar5);
  FUN_00c93864(plVar6,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  FUN_00c938a4(plVar6,&DAT_01bee7fa);
  FUN_00c9279c(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00c927f8(0,plVar6);
  FUN_00c928a0(0x42480000,0x41400000,plVar6);
  local_b8 = FUN_00c4074c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  local_90 = uVar7;
  FUN_009693a0(param_1 + 0x42a,&local_b8);
  uVar9 = FUN_00e6ce7c("MAIN_MATCH_CONFIRM_DECLINE",0);
  FUN_00c938d4(plVar6,uVar9);
  FUN_00f13f08(0x43c00000,0x42c00000,plVar6);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  uVar9 = FUN_00f13f70(plVar4);
  FUN_00f13f2c(plVar4,uVar9);
  if (*(long *)(lVar8 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c40718(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  }
  FUN_00f04900(param_4);
  return;
}




void FUN_00c4074c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  }
  FUN_00f04900(param_4);
  return;
}




void FUN_00c40780(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fb6c8;
  param_1[0x429] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x54a);
  FUN_00c925cc(param_1 + 0x429);
  param_1[0x2e0] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x401);
  FUN_00c925cc(param_1 + 0x2e0);
  param_1[0x1fe] = &PTR_FUN_027fb810;
  FUN_00f0d3a4(param_1 + 0x2b8);
  FUN_00f0d3a4(param_1 + 0x292);
  param_1[0x272] = &PTR_FUN_028266f0;
  param_1[0x289] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x28c);
  FUN_00f13d08(param_1 + 0x272);
  param_1[0x254] = &PTR_FUN_028266f0;
  param_1[0x26b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x26e);
  FUN_00f13d08(param_1 + 0x254);
  param_1[0x233] = &PTR_FUN_02827290;
  param_1[0x24a] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x251);
  param_1[0x233] = &PTR_FUN_028266f0;
  param_1[0x24a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x24d);
  FUN_00f13d08(param_1 + 0x233);
  param_1[0x215] = &PTR_FUN_028266f0;
  param_1[0x22c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x22f);
  FUN_00f13d08(param_1 + 0x215);
  FUN_00f13d08(param_1 + 0x1fe);
  FUN_00c40a5c(param_1 + 0x95);
  param_1[0x77] = &PTR_FUN_028266f0;
  param_1[0x8e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x91);
  FUN_00f13d08(param_1 + 0x77);
  if ((void *)param_1[0x76] != (void *)0x0) {
    operator_delete__((void *)param_1[0x76]);
    param_1[0x76] = 0;
    param_1[0x75] = 0;
  }
  FUN_00f13d08(param_1 + 0x5e);
  FUN_00f01868(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_028266f0;
  param_1[0x46] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x2f);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c40974(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fb810;
  FUN_00f0d3a4(param_1 + 0xba);
  FUN_00f0d3a4(param_1 + 0x94);
  param_1[0x74] = &PTR_FUN_028266f0;
  param_1[0x8b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8e);
  FUN_00f13d08(param_1 + 0x74);
  param_1[0x56] = &PTR_FUN_028266f0;
  param_1[0x6d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x70);
  FUN_00f13d08(param_1 + 0x56);
  param_1[0x35] = &PTR_FUN_02827290;
  param_1[0x4c] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c40a5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fb958;
  FUN_00f0d3a4(param_1 + 0x143);
  FUN_00f0d3a4(param_1 + 0x11d);
  param_1[0xff] = &PTR_FUN_028266f0;
  param_1[0x116] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x119);
  FUN_00f13d08(param_1 + 0xff);
  param_1[0xe1] = &PTR_FUN_028266f0;
  param_1[0xf8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xfb);
  FUN_00f13d08(param_1 + 0xe1);
  param_1[0xc3] = &PTR_FUN_028266f0;
  param_1[0xda] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xdd);
  FUN_00f13d08(param_1 + 0xc3);
  param_1[0xa5] = &PTR_FUN_028266f0;
  param_1[0xbc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xbf);
  FUN_00f13d08(param_1 + 0xa5);
  FUN_00f13d08(param_1 + 0x71);
  param_1[0x53] = &PTR_FUN_028266f0;
  param_1[0x6a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6d);
  FUN_00f13d08(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c40b80(void *param_1)

{
  FUN_00c40780();
  operator_delete(param_1);
  return;
}




void FUN_00c40ba4(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  FUN_00f13db4();
  uVar9 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f13f08(uVar9,param_3 + 0x18);
  FUN_00f13f08(uVar9,param_2,param_3 + 0x2f);
  plVar1 = param_3 + 0x1fe;
  uVar12 = 0;
  FUN_00f07940(0,plVar1,8,param_3,8);
  uVar10 = (undefined4)uVar12;
  if (1 < *(uint *)(param_3 + 0x75)) {
    lVar7 = 0;
    do {
      puVar4 = (undefined8 *)(param_3[0x76] + lVar7 * 8);
      FUN_00f07b18(0x41400000,puVar4[1],3,*puVar4,1);
      uVar10 = (undefined4)uVar12;
      uVar6 = lVar7 + 2;
      lVar7 = lVar7 + 1;
    } while (uVar6 < *(uint *)(param_3 + 0x75));
  }
  plVar2 = param_3 + 0x5e;
  local_80 = FUN_00f01c54(plVar2,0,0,1,1);
  uStack_7c = uVar10;
  FUN_00f13f18(plVar2,&local_80);
  plVar3 = param_3 + 0x77;
  fVar8 = (float)FUN_00f13e54(plVar2);
  FUN_00f13f08(fVar8 + 96.0,0x40400000,plVar3);
  fVar11 = 24.0;
  FUN_00f07940(0,0x41c00000,plVar2,4,plVar1,6);
  FUN_00f07940(0,0x41400000,plVar3,4,plVar2,6);
  FUN_00f07940(0x42c00000,0x41c00000,param_3 + 0x2e0,0,plVar3,6);
  FUN_00f07940(0xc2c00000,0x41c00000,param_3 + 0x429,1,plVar3,6);
  plVar3 = param_3 + 0x95;
  uVar6 = FUN_00f13f70(plVar3);
  FUN_00f13e54(plVar1);
  fVar8 = fVar11 + (float)(uVar6 >> 0x20) + 96.0;
  FUN_00f13e54(plVar2);
  fVar11 = fVar11 + fVar8 + 24.0 + 12.0;
  fVar8 = fVar11 + 48.0;
  FUN_00f13e54(fVar8,fVar11,param_3 + 0x2e0);
  FUN_00f13f08(uVar9,fVar11 + fVar8 + 24.0 + 96.0,plVar3);
  FUN_00f07940(0,0,plVar3,8,plVar1,8);
  FUN_00f07b18(0x42c00000,plVar3,2,param_3 + 0x429,2);
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c40e38(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x1700;
  FUN_00ecf888(lVar1,1);
  lVar2 = param_1 + 0x2148;
  FUN_00ecf888(lVar2,1);
  FUN_00f01980(lVar2);
  FUN_00f01980(lVar1);
  if ((~*(uint *)(param_1 + 0x21cc) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x21cc) = *(uint *)(param_1 + 0x21cc) | 0x7f80;
    FUN_0091ada4(lVar2);
  }
  if ((~*(uint *)(param_1 + 0x1784) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x1784) = *(uint *)(param_1 + 0x1784) | 0x7f80;
    FUN_0091ada4(lVar1);
  }
  FUN_00c40f14(param_1 + 0xff0);
  return;
}




void FUN_00c40ed8(long param_1,uint param_2)

{
  FUN_00ecf888(param_1 + 0x1700,param_2 & 1);
  FUN_00ecf888(param_1 + 0x2148,param_2 & 1);
  return;
}




void FUN_00c40f14(long param_1)

{
  long lVar1;
  undefined4 local_50 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f01980(param_1 + 0xb8);
  FUN_00f01980(param_1 + 0x2b0);
  FUN_00f0e670(param_1 + 0xb8,&DAT_01bee7fa,2);
  local_50[0] = 0xffc8bebe;
  FUN_00f0e670(param_1 + 0x2b0,local_50,2);
  FUN_00f0e670(param_1 + 0x3a0,&DAT_01bee7fa,2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c40fc4(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_009b8d90();
  lVar2 = FUN_01985d44(uVar1,DAT_0312ebb0);
  if (lVar2 != 0) {
    FUN_009dbd5c(0x3f800000,lVar2,"build://Sounds/UI.assetbundle/ui_matchmaker_match_found.mp3",0,1,
                 0);
    FUN_009dbea4(lVar2);
    return;
  }
  return;
}

