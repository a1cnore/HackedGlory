// functions/00a4b — 7 functions
#include "libGameKindred.h"




void FUN_00a4b044(long param_1)

{
  FUN_00a4ae88(param_1 + -0xb8);
  return;
}




void FUN_00a4b04c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  uint *puVar9;
  undefined4 uVar10;
  long lVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined8 uVar14;
  ulong uVar15;
  float fVar16;
  long lVar17;
  float fVar18;
  undefined4 local_c8 [2];
  code *local_c0;
  long *plStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  long local_90;
  
  lVar11 = tpidr_el0;
  local_90 = *(long *)(lVar11 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027ca7d0;
  FUN_00b89cd8(plVar1);
  plVar2 = param_1 + 0x30;
  FUN_00f017e8(plVar2);
  plVar3 = param_1 + 0x41;
  param_1[0x30] = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8(plVar3);
  pcVar4 = (code *)(param_1 + 0x52);
  param_1[0x41] = (long)&PTR_FUN_027c1f80;
  FUN_00abb534(pcVar4,1);
  pcVar5 = (code *)(param_1 + 0x159);
  FUN_00abb534(pcVar5,1);
  pcVar6 = (code *)(param_1 + 0x260);
  FUN_00abb534(pcVar6,1);
  pcVar7 = (code *)(param_1 + 0x367);
  FUN_00abb534(pcVar7,1);
  pcVar8 = (code *)(param_1 + 0x46e);
  FUN_00abb534(pcVar8,1);
  param_1[0x579] = 0;
  puVar9 = (uint *)(param_1 + 0x577);
  param_1[0x578] = 0;
  puVar9[0] = 0;
  puVar9[1] = 0;
  param_1[0x576] = 0;
  param_1[0x575] = 0;
  *(undefined4 *)(param_1 + 0x57a) = DAT_03214ce8;
  *(undefined1 *)(param_1 + 0x57b) = 0xff;
  uVar12 = FUN_00e6a474("HUD_Pings");
  uVar13 = FUN_0091ed5c("HUD_Pings",uVar12,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar13 & 0xffff) << 0xf;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar3,pcVar4,1);
  FUN_00f023ec(plVar3,pcVar5,1);
  FUN_00f023ec(plVar3,pcVar6,1);
  FUN_00f023ec(plVar3,pcVar7,1);
  FUN_00f023ec(plVar3,pcVar8,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 4;
  FUN_00abb1c8(0x3ee66666,pcVar4,&DAT_01bee7f6);
  uVar12 = DAT_03210f58;
  local_c0 = FUN_00a4b90c;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 2;
  plStack_b8 = param_1;
  local_98 = uVar12;
  FUN_009693a0(param_1 + 0x53,&local_c0);
  local_c0 = FUN_00a4b90c;
  uVar10 = DAT_03210f84;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 2;
  plStack_b8 = param_1;
  local_98 = uVar10;
  FUN_009693a0(param_1 + 0x53,&local_c0);
  FUN_00b09144(0,pcVar4);
  plVar1 = param_1 + 0xed;
  uVar14 = FUN_00920bec(2,0);
  FUN_00f0e578(plVar1,uVar14);
  if ((*(float *)(param_1 + 0xf6) != 1.5) || (*(float *)((long)param_1 + 0x7b4) != 1.5)) {
    lVar17 = NEON_fmov(0x3fc00000,4);
    param_1[0xf6] = lVar17;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e6bc(0x3f000000,plVar1);
  fVar16 = (float)FUN_00f13e54(pcVar4);
  fVar16 = 90.0 / fVar16;
  fVar18 = fVar16 * 1.25;
  FUN_00abb218(fVar16,fVar18,pcVar4);
  FUN_00abb1c8(0x3ee66666,pcVar6,&DAT_01bee7f6);
  local_c0 = FUN_00a4b90c;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 3;
  plStack_b8 = param_1;
  local_98 = uVar12;
  FUN_009693a0(param_1 + 0x261,&local_c0);
  local_c0 = FUN_00a4b90c;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 3;
  plStack_b8 = param_1;
  local_98 = uVar10;
  FUN_009693a0(param_1 + 0x261,&local_c0);
  FUN_00b09144(0,pcVar6);
  plVar1 = param_1 + 0x2fb;
  uVar14 = FUN_00920bec(3,0);
  FUN_00f0e578(plVar1,uVar14);
  if ((*(float *)(param_1 + 0x304) != 1.5) || (*(float *)((long)param_1 + 0x1824) != 1.5)) {
    lVar17 = NEON_fmov(0x3fc00000,4);
    param_1[0x304] = lVar17;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e6bc(0x3f000000,plVar1);
  FUN_00abb218(fVar16,fVar18,pcVar6);
  FUN_00abb1c8(0x3ee66666,pcVar5,&DAT_01bee7f6);
  local_c0 = FUN_00a4b90c;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 4;
  plStack_b8 = param_1;
  local_98 = uVar12;
  FUN_009693a0(param_1 + 0x15a,&local_c0);
  local_c0 = FUN_00a4b90c;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 4;
  plStack_b8 = param_1;
  local_98 = uVar10;
  FUN_009693a0(param_1 + 0x15a,&local_c0);
  FUN_00b09144(0,pcVar5);
  plVar1 = param_1 + 500;
  uVar14 = FUN_00920bec(4,0);
  FUN_00f0e578(plVar1,uVar14);
  if ((*(float *)(param_1 + 0x1fd) != 1.5) || (*(float *)((long)param_1 + 0xfec) != 1.5)) {
    lVar17 = NEON_fmov(0x3fc00000,4);
    param_1[0x1fd] = lVar17;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e6bc(0x3f000000,plVar1);
  FUN_00abb218(fVar16,fVar18,pcVar5);
  FUN_00abb1c8(0x3ee66666,pcVar7,&DAT_01bee7f6);
  local_c0 = FUN_00a4b90c;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 5;
  plStack_b8 = param_1;
  local_98 = uVar12;
  FUN_009693a0(param_1 + 0x368,&local_c0);
  local_c0 = FUN_00a4b90c;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 5;
  plStack_b8 = param_1;
  local_98 = uVar10;
  FUN_009693a0(param_1 + 0x368,&local_c0);
  FUN_00b09144(0,pcVar7);
  plVar1 = param_1 + 0x402;
  uVar14 = FUN_00920bec(5,0);
  FUN_00f0e578(plVar1,uVar14);
  if ((*(float *)(param_1 + 0x40b) != 1.5) || (*(float *)((long)param_1 + 0x205c) != 1.5)) {
    lVar17 = NEON_fmov(0x3fc00000,4);
    param_1[0x40b] = lVar17;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e6bc(0x3f000000,plVar1);
  FUN_00abb218(fVar16,fVar18,pcVar7);
  FUN_00abb1c8(0x3ee66666,pcVar8,&DAT_01bee7f6);
  local_c0 = thunk_FUN_00a4c268;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 6;
  plStack_b8 = param_1;
  local_98 = uVar12;
  FUN_009693a0(param_1 + 0x46f,&local_c0);
  local_c0 = thunk_FUN_00a4c268;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 6;
  plStack_b8 = param_1;
  local_98 = uVar10;
  FUN_009693a0(param_1 + 0x46f,&local_c0);
  FUN_00b09144(0,pcVar8);
  plVar1 = param_1 + 0x509;
  uVar14 = FUN_00920bec(6,0);
  FUN_00f0e578(plVar1,uVar14);
  if ((*(float *)(param_1 + 0x512) != 1.5) || (*(float *)((long)param_1 + 0x2894) != 1.5)) {
    lVar17 = NEON_fmov(0x3fc00000,4);
    param_1[0x512] = lVar17;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e6bc(0x3f000000,plVar1);
  FUN_00abb218(fVar16,fVar18,pcVar8);
  local_c0 = pcVar8;
  FUN_00a4b918(puVar9,&local_c0);
  local_c0 = pcVar7;
  FUN_00a4b918(puVar9,&local_c0);
  local_c0 = pcVar6;
  FUN_00a4b918(puVar9,&local_c0);
  local_c0 = pcVar5;
  FUN_00a4b918(puVar9,&local_c0);
  local_c0 = pcVar4;
  FUN_00a4b918(puVar9,&local_c0);
  if (*puVar9 != 0) {
    uVar15 = 0;
    do {
      FUN_00f0e6bc(0x3f000000,*(long *)(param_1[0x578] + uVar15 * 8) + 0x4d8);
      lVar17 = *(long *)(param_1[0x578] + uVar15 * 8);
      uVar13 = *(uint *)(lVar17 + 0x55c);
      if ((uVar13 & 0x7f80) != 0x5f80) {
        *(uint *)(lVar17 + 0x55c) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x5f80;
        FUN_0091ada4(lVar17 + 0x4d8);
        lVar17 = *(long *)(param_1[0x578] + uVar15 * 8);
      }
      uVar13 = *(uint *)(lVar17 + 0x37c);
      if ((uVar13 & 0x7f80) != 0x1980) {
        *(uint *)(lVar17 + 0x37c) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x1980;
        FUN_0091ada4(lVar17 + 0x2f8);
        lVar17 = *(long *)(param_1[0x578] + uVar15 * 8);
      }
      FUN_00abb250(lVar17,1);
      FUN_00abb1c8(0,*(undefined8 *)(param_1[0x578] + uVar15 * 8),&DAT_01bee7f6);
      lVar17 = *(long *)(param_1[0x578] + uVar15 * 8);
      if ((*(float *)(lVar17 + 0x430) != 0.85) || (*(float *)(lVar17 + 0x434) != 0.85)) {
        *(undefined8 *)(lVar17 + 0x430) = 0x3f59999a3f59999a;
        FUN_0091ada4(lVar17 + 1000);
        lVar17 = *(long *)(param_1[0x578] + uVar15 * 8);
      }
      if ((*(float *)(lVar17 + 0x640) != 0.85) || (*(float *)(lVar17 + 0x644) != 0.85)) {
        *(undefined8 *)(lVar17 + 0x640) = 0x3f59999a3f59999a;
        FUN_0091ada4(lVar17 + 0x5f8);
      }
      local_c0 = (code *)FUN_00a4c67c(plVar2,1);
      FUN_00f0e548(local_c0,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_fuzzy_dot");
      switch(uVar15 & 0x7fffffff) {
      case 0:
        local_c8[0] = 0xffff74af;
        break;
      case 1:
        local_c8[0] = 0xffdddddd;
        break;
      case 2:
        local_c8[0] = 0xffffdd47;
        break;
      case 3:
        local_c8[0] = 0xff4bf9ff;
        break;
      case 4:
        local_c8[0] = 0xff32ff71;
        break;
      default:
        goto switchD_00a4b850_default;
      }
      FUN_00f0e670(local_c0,local_c8,2);
switchD_00a4b850_default:
      FUN_009d6990(param_1 + 0x575,&local_c0);
      uVar15 = uVar15 + 1;
    } while (uVar15 < *puVar9);
  }
  FUN_00a4b9a0(param_1);
  if (*(long *)(lVar11 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a4b90c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00a4c1d8(param_1,param_2,param_5);
  return;
}




void FUN_00a4b918(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00a4c5fc(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00a4b9a0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if ((*(float *)(param_1 + 600) != *(float *)(param_1 + 0x50)) ||
     (*(float *)(param_1 + 0x25c) != *(float *)(param_1 + 0x54))) {
    *(float *)(param_1 + 600) = *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x25c) = *(float *)(param_1 + 0x54);
    FUN_0091ada4(param_1 + 0x208);
  }
  if ((*(int *)(param_1 + 0x2bb8) != 0) &&
     (fVar6 = (float)(**(code **)(*(long *)**(undefined8 **)(param_1 + 0x2bc0) + 0x48))(),
     *(int *)(param_1 + 0x2bb8) != 0)) {
    plVar2 = *(long **)(param_1 + 0x2bc0);
    uVar5 = 0;
    fVar9 = *(float *)(*plVar2 + 0x48);
    while( true ) {
      plVar4 = (long *)plVar2[uVar5];
      fVar7 = (float)(**(code **)(*plVar4 + 0x48))(plVar4);
      plVar2 = *(long **)(*(long *)(param_1 + 0x2bc0) + uVar5 * 8);
      fVar8 = *(float *)(plVar2 + 9);
      fVar10 = (fVar6 * fVar9 * -0.5 + -5.0) - (fVar7 * fVar8 + 5.0) * (float)(int)uVar5;
      (**(code **)(*plVar2 + 0x48))();
      fVar7 = fVar8 * *(float *)(*(long *)(*(long *)(param_1 + 0x2bc0) + uVar5 * 8) + 0x4c) * 0.5;
      if ((*(float *)(plVar4 + 8) != fVar10) || (*(float *)((long)plVar4 + 0x44) != fVar7)) {
        *(float *)(plVar4 + 8) = fVar10;
        *(float *)((long)plVar4 + 0x44) = fVar7;
        FUN_0091ada4(plVar4);
      }
      local_80 = 0x3f0000003f000000;
      (**(code **)(*plVar4 + 0x28))(plVar4,&local_80);
      if (*(int *)(param_1 + 0x2ba8) != 0) {
        FUN_00f13f08(0x42b40000,0x42b40000,*(undefined8 *)(*(long *)(param_1 + 0x2bb0) + uVar5 * 8))
        ;
        lVar3 = *(long *)(*(long *)(param_1 + 0x2bb0) + uVar5 * 8);
        *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xffffffbf;
        lVar3 = *(long *)(*(long *)(param_1 + 0x2bb0) + uVar5 * 8);
        if ((*(uint *)(lVar3 + 0x84) & 0x7f80) != 0x3f80) {
          *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xffff807f | 0x3f80;
          FUN_0091ada4();
          lVar3 = *(long *)(*(long *)(param_1 + 0x2bb0) + uVar5 * 8);
        }
        FUN_00f07940(0,0,lVar3,8,*(undefined8 *)(*(long *)(param_1 + 0x2bc0) + uVar5 * 8),8);
      }
      uVar5 = uVar5 + 1;
      if (*(uint *)(param_1 + 0x2bb8) <= uVar5) break;
      plVar2 = *(long **)(param_1 + 0x2bc0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a4bbbc(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0x576];
  *param_1 = &PTR_FUN_027ca7d0;
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x575) = 0;
  }
  if ((void *)param_1[0x578] != (void *)0x0) {
    operator_delete__((void *)param_1[0x578]);
    param_1[0x578] = 0;
    param_1[0x577] = 0;
    pvVar1 = (void *)param_1[0x576];
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    param_1[0x575] = 0;
    param_1[0x576] = 0;
  }
  param_1[0x46e] = &PTR_FUN_027ca918;
  FUN_00f0d3a4(param_1 + 0x54d);
  param_1[0x52d] = &PTR_FUN_028266f0;
  param_1[0x544] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x547);
  FUN_00f13d08(param_1 + 0x52d);
  param_1[0x509] = &PTR_FUN_028266f0;
  param_1[0x520] = &PTR_FUN_02826850;
  param_1[0x46e] = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0x523);
  FUN_00f13d08(param_1 + 0x509);
  param_1[0x4eb] = &PTR_FUN_028266f0;
  param_1[0x502] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x505);
  FUN_00f13d08(param_1 + 0x4eb);
  param_1[0x4cd] = &PTR_FUN_028266f0;
  param_1[0x4e4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4e7);
  FUN_00f13d08(param_1 + 0x4cd);
  FUN_00f01868(param_1 + 0x4bc);
  FUN_009c825c(param_1 + 0x46e);
  param_1[0x367] = &PTR_FUN_027ca918;
  FUN_00f0d3a4(param_1 + 0x446);
  param_1[0x426] = &PTR_FUN_028266f0;
  param_1[0x43d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x440);
  FUN_00f13d08(param_1 + 0x426);
  param_1[0x367] = &PTR_FUN_027d5388;
  param_1[0x402] = &PTR_FUN_028266f0;
  param_1[0x419] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x41c);
  FUN_00f13d08(param_1 + 0x402);
  param_1[0x3e4] = &PTR_FUN_028266f0;
  param_1[0x3fb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3fe);
  FUN_00f13d08(param_1 + 0x3e4);
  param_1[0x3c6] = &PTR_FUN_028266f0;
  param_1[0x3dd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3e0);
  FUN_00f13d08(param_1 + 0x3c6);
  FUN_00f01868(param_1 + 0x3b5);
  FUN_009c825c(param_1 + 0x367);
  param_1[0x260] = &PTR_FUN_027ca918;
  FUN_00f0d3a4(param_1 + 0x33f);
  param_1[799] = &PTR_FUN_028266f0;
  param_1[0x336] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x339);
  FUN_00f13d08(param_1 + 799);
  param_1[0x260] = &PTR_FUN_027d5388;
  param_1[0x2fb] = &PTR_FUN_028266f0;
  param_1[0x312] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x315);
  FUN_00f13d08(param_1 + 0x2fb);
  param_1[0x2dd] = &PTR_FUN_028266f0;
  param_1[0x2f4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2f7);
  FUN_00f13d08(param_1 + 0x2dd);
  param_1[0x2bf] = &PTR_FUN_028266f0;
  param_1[0x2d6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2d9);
  FUN_00f13d08(param_1 + 0x2bf);
  FUN_00f01868(param_1 + 0x2ae);
  FUN_009c825c(param_1 + 0x260);
  param_1[0x159] = &PTR_FUN_027ca918;
  FUN_00f0d3a4(param_1 + 0x238);
  param_1[0x218] = &PTR_FUN_028266f0;
  param_1[0x22f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x232);
  FUN_00f13d08(param_1 + 0x218);
  param_1[0x159] = &PTR_FUN_027d5388;
  param_1[500] = &PTR_FUN_028266f0;
  param_1[0x20b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x20e);
  FUN_00f13d08(param_1 + 500);
  param_1[0x1d6] = &PTR_FUN_028266f0;
  param_1[0x1ed] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1f0);
  FUN_00f13d08(param_1 + 0x1d6);
  param_1[0x1b8] = &PTR_FUN_028266f0;
  param_1[0x1cf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1d2);
  FUN_00f13d08(param_1 + 0x1b8);
  FUN_00f01868(param_1 + 0x1a7);
  FUN_009c825c(param_1 + 0x159);
  param_1[0x52] = &PTR_FUN_027ca918;
  FUN_00f0d3a4(param_1 + 0x131);
  param_1[0x111] = &PTR_FUN_028266f0;
  param_1[0x128] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 299);
  FUN_00f13d08(param_1 + 0x111);
  param_1[0x52] = &PTR_FUN_027d5388;
  param_1[0xed] = &PTR_FUN_028266f0;
  param_1[0x104] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x107);
  FUN_00f13d08(param_1 + 0xed);
  param_1[0xcf] = &PTR_FUN_028266f0;
  param_1[0xe6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe9);
  FUN_00f13d08(param_1 + 0xcf);
  param_1[0xb1] = &PTR_FUN_028266f0;
  param_1[200] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xcb);
  FUN_00f13d08(param_1 + 0xb1);
  FUN_00f01868(param_1 + 0xa0);
  FUN_009c825c(param_1 + 0x52);
  FUN_00f01868(param_1 + 0x41);
  FUN_00f01868(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a4bffc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ca918;
  FUN_00f0d3a4(param_1 + 0xdf);
  param_1[0xbf] = &PTR_FUN_028266f0;
  param_1[0xd6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd9);
  FUN_00f13d08(param_1 + 0xbf);
  param_1[0x9b] = &PTR_FUN_028266f0;
  param_1[0xb2] = &PTR_FUN_02826850;
  *param_1 = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0xb5);
  FUN_00f13d08(param_1 + 0x9b);
  param_1[0x7d] = &PTR_FUN_028266f0;
  param_1[0x94] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x97);
  FUN_00f13d08(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_028266f0;
  param_1[0x76] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x79);
  FUN_00f13d08(param_1 + 0x5f);
  FUN_00f01868(param_1 + 0x4e);
  FUN_009c825c(param_1);
  return;
}

