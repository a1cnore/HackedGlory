// functions/00c3d — 31 functions
#include "libGameKindred.h"




void FUN_00c3d0c0(long *param_1)

{
  FUN_00f01a4c(param_1,1);
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c3d0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1);
    return;
  }
  return;
}




void FUN_00c3d100(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(uint *)(*(long *)(param_1 + 0x88) + 0x84) = *(uint *)(*(long *)(param_1 + 0x88) + 0x84) | 4;
  lVar2 = *(long *)(param_1 + 0x88);
  if ((*(uint *)(lVar2 + 0x84) & 0x7f80) != 0x3f80) {
    *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffff807f | 0x3f80;
    FUN_0091ada4();
    lVar2 = *(long *)(param_1 + 0x88);
  }
  if ((*(float *)(lVar2 + 0x48) != 1.0) || (*(float *)(lVar2 + 0x4c) != 1.0)) {
    uVar3 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(lVar2 + 0x48) = uVar3;
    FUN_0091ada4();
  }
  FUN_00e70510(&local_38);
  FUN_00e70e18(&local_38,&DAT_01b95634,*(undefined4 *)(param_1 + 0x94));
  (**(code **)(**(long **)(param_1 + 0x88) + 0x138))(*(long **)(param_1 + 0x88),&local_38);
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00c3d1e8(void)

{
  return 0;
}




void FUN_00c3d1f0(void *param_1)

{
  FUN_00f01868();
  operator_delete(param_1);
  return;
}




undefined8 * FUN_00c3d214(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0xa0);
  FUN_00f017e8();
  *puVar1 = &PTR_FUN_027faf00;
  puVar1[0x11] = 0;
  *(undefined4 *)((long)puVar1 + 0x94) = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  *(undefined4 *)(puVar1 + 0x12) = 0x3f800000;
  *(uint *)((long)puVar1 + 0x84) =
       *(uint *)((long)puVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)puVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  }
  return puVar1;
}




void FUN_00c3d29c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 local_a8 [2];
  undefined4 local_a0 [2];
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  FUN_00ed45a4();
  plVar1 = param_1 + 0x1c;
  param_1[0x1b] = 0;
  *param_1 = (long)&PTR_FUN_027fb000;
  FUN_00f0c714(plVar1);
  plVar2 = param_1 + 0x37;
  FUN_00f0c714(plVar2);
  plVar3 = param_1 + 0x52;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x70;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x8e;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0xac;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0xca;
  FUN_00f13ca4(plVar7);
  param_1[0xe2] = 0;
  param_1[0xe1] = 0;
  FUN_00ed2460(param_1 + 0xe3);
  *(undefined1 *)(param_1 + 0x117) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  local_a0[0] = 0xff120906;
  local_a8[0] = 0xff3b1d17;
  FUN_00f0c774(plVar1,local_a0);
  FUN_00f0e670(plVar5,local_a0,2);
  FUN_00f0c774(plVar2,local_a8);
  FUN_00f0e670(plVar6,local_a8,2);
  FUN_00f0e548(plVar5,PTR_s_build___VGX_common_atlas_02be3540,"global_fade_curved_01");
  *(byte *)(param_1 + 0xa9) = *(byte *)(param_1 + 0xa9) | 1;
  FUN_00f0e548(plVar6,PTR_s_build___VGX_common_atlas_02be3540,"global_fade_curved_01");
  local_98 = (code *)CONCAT44(local_98._4_4_,0xff606060);
  FUN_00f0e670(plVar3,&local_98,2);
  FUN_00f0e548(plVar3,PTR_s_build___VGX_splash_tga_02be3538,"blurred");
  FUN_00f0e548(plVar4,PTR_s_build___VGX_splash_tga_02be3538,"splash");
  uVar9 = FUN_00f13624();
  FUN_00f13fd8(plVar7,uVar9);
  local_70 = DAT_03210c7c;
  local_98 = thunk_FUN_00c3df60;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 1,&local_98);
  local_70 = DAT_03210c3c;
  local_98 = FUN_00c3d5bc;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0xe4,&local_98);
  local_70 = DAT_03210c38;
  local_98 = FUN_00c3d5cc;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0xe4,&local_98);
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c3df60(long param_1)

{
  FUN_00aa1814(param_1 + 0x718);
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x10))();
  FUN_00a09558();
  FUN_00a0981c();
  return;
}




void FUN_00c3d5bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c3d5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 8))();
  return;
}




void FUN_00c3d5cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c3d5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xd8))();
  return;
}




void FUN_00c3d5dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_03210c3c;
  puVar1 = param_1 + 0xe3;
  *param_1 = &PTR_FUN_027fb000;
  FUN_00c3d6f8(puVar1,uVar2,FUN_00c3d5bc,param_1);
  FUN_00c3d6f8(puVar1,DAT_03210c38,FUN_00c3d5cc,param_1);
  FUN_00ed24bc(puVar1);
  FUN_00f13d08(param_1 + 0xca);
  param_1[0xac] = &PTR_FUN_028266f0;
  param_1[0xc3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc6);
  FUN_00f13d08(param_1 + 0xac);
  param_1[0x8e] = &PTR_FUN_028266f0;
  param_1[0xa5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa8);
  FUN_00f13d08(param_1 + 0x8e);
  param_1[0x70] = &PTR_FUN_028266f0;
  param_1[0x87] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8a);
  FUN_00f13d08(param_1 + 0x70);
  param_1[0x52] = &PTR_FUN_028266f0;
  param_1[0x69] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6c);
  FUN_00f13d08(param_1 + 0x52);
  FUN_00f13d08(param_1 + 0x37);
  FUN_00f13d08(param_1 + 0x1c);
  thunk_FUN_00f13d08(param_1);
  return;
}




void FUN_00c3d6f8(long param_1,int param_2,long param_3,long param_4)

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




void FUN_00c3d74c(void *param_1)

{
  FUN_00c3d5dc();
  operator_delete(param_1);
  return;
}




void FUN_00c3d770(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c3d778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00c3d77c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_9c;
  undefined1 auStack_98 [4];
  float local_94;
  float local_90;
  float fStack_8c;
  long local_88;
  
  lVar7 = tpidr_el0;
  local_88 = *(long *)(lVar7 + 0x28);
  FUN_00f13db4();
  FUN_00f07a78(0,0,param_1,0);
  FUN_00f0025c(&fStack_8c,&local_90);
  FUN_00f00298(&local_94,auStack_98);
  lVar1 = param_1 + 0xe0;
  FUN_00f13f08(fStack_8c * 0.5,local_90,lVar1);
  lVar12 = param_1 + 0x1b8;
  FUN_00f13f08(fStack_8c * 0.5,local_90,lVar12);
  FUN_00f07a78(0,0,lVar1,0);
  FUN_00f07a78(0,0,lVar12,1);
  lVar2 = param_1 + 0x380;
  local_9c = 1.7777778;
  FUN_00f0e9c0(lVar2,1);
  FUN_00f0e800(lVar2,&local_9c);
  iVar10 = FUN_0092f2b8();
  fVar14 = 1.1;
  if (iVar10 != 1) {
    fVar14 = 1.0;
  }
  fVar16 = 1.3;
  if (iVar10 != 0) {
    fVar16 = fVar14;
  }
  fVar14 = local_90 * local_9c * fVar16;
  fVar16 = local_90 * fVar16;
  uVar8 = 0x3edc28f6;
  if (fVar14 <= fStack_8c) {
    uVar8 = (undefined4)DAT_03218f08;
  }
  uVar9 = 0x3ec7ae14;
  if (fVar16 <= local_90) {
    uVar9 = DAT_03218f08._4_4_;
  }
  FUN_00f13f08(fVar14,fVar16,lVar2);
  uVar11 = FUN_00f00438("root-layer");
  FUN_00f07b78(uVar8,uVar9,uVar8,uVar9,0,0,lVar2,uVar11);
  FUN_00f13f08(fVar14,fVar16,param_1 + 0x290);
  if ((*(float *)(param_1 + 0x2d0) != *(float *)(param_1 + 0x3c0)) ||
     (*(float *)(param_1 + 0x2d4) != *(float *)(param_1 + 0x3c4))) {
    *(float *)(param_1 + 0x2d0) = *(float *)(param_1 + 0x3c0);
    *(float *)(param_1 + 0x2d4) = *(float *)(param_1 + 0x3c4);
    FUN_0091ada4(param_1 + 0x290);
  }
  fVar16 = (float)NEON_fminnm(fStack_8c / fVar14,0x3f800000);
  if (fVar16 <= 0.85) {
    fVar16 = 0.85;
  }
  fVar16 = (fVar16 + -0.85) / 0.14999998;
  lVar3 = param_1 + 0x470;
  fVar15 = (fVar16 * -0.25 + 1.0) * local_90;
  FUN_00f13f08((fVar16 * -0.19999999 + 0.75) * local_90 + 16.0,local_90 + 32.0,lVar3);
  lVar4 = param_1 + 0x560;
  FUN_00f13f08(fVar15 + 16.0,local_90 + 32.0,lVar4);
  uVar5 = *(uint *)(param_1 + 0x4f4);
  uVar6 = uVar5 >> 7 & 0xff;
  if (fStack_8c / fVar14 <= 1.0) {
    if (uVar6 != 0xe5) {
      *(uint *)(param_1 + 0x4f4) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x7280;
      FUN_0091ada4(lVar3);
    }
    uVar5 = *(uint *)(param_1 + 0x5e4);
    if ((uVar5 & 0x7f80) != 0x7280) {
      *(uint *)(param_1 + 0x5e4) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x7280;
      FUN_0091ada4(lVar4);
    }
    FUN_00f07940(0xc1000000,0,lVar3,0,lVar1,0);
    uVar11 = 1;
    uVar13 = 1;
  }
  else {
    if (uVar6 != 0xff) {
      *(uint *)(param_1 + 0x4f4) = uVar5 | 0x7f80;
      FUN_0091ada4(lVar3);
    }
    if ((~*(uint *)(param_1 + 0x5e4) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x5e4) = *(uint *)(param_1 + 0x5e4) | 0x7f80;
      FUN_0091ada4(lVar4);
    }
    FUN_00f07940(0xc1000000,0,lVar3,7,lVar2,7);
    uVar11 = 5;
    uVar13 = 5;
    lVar12 = lVar2;
  }
  FUN_00f07940(0x41000000,0,lVar4,uVar11,lVar12,uVar13);
  iVar10 = FUN_0092f2b8();
  fVar14 = 1.6666666;
  if (iVar10 < 2) {
    fVar14 = 2.0;
  }
  if (fVar14 < local_94 / local_90) {
    fVar14 = local_90 * (fVar14 + (local_94 / local_90 - fVar14) * 0.4);
    local_94 = local_90 * 2.2222223;
    if (fVar14 <= local_90 * 2.2222223) {
      local_94 = fVar14;
    }
  }
  FUN_00f13f08(local_94,param_1 + 0x650);
  FUN_00f13db4(param_1 + 0x650);
  FUN_00f07940(0,0,param_1 + 0x650,8,param_1,8);
  if (*(long *)(lVar7 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3db9c(void)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f0025c(&local_30,(ulong)&local_30 | 4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30,uStack_2c);
}




void FUN_00c3dbf0(long param_1)

{
  FUN_00c3f628(*(undefined8 *)(param_1 + 0x708));
  return;
}




void FUN_00c3dbf8(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x708) != 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x708) = param_2;
  plVar1 = (long *)FUN_00f14058(param_1 + 0x650);
                    /* WARNING: Could not recover jumptable at 0x00c3dc44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))(plVar1,*(undefined8 *)(param_1 + 0x708),0,9);
  return;
}




void FUN_00c3dc48(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x710) != 0) {
    return;
  }
  lVar1 = param_1 + 0x650;
  *(undefined8 *)(param_1 + 0x710) = param_2;
  FUN_00f023ec(lVar1,param_2,1);
  if (*(long *)(param_1 + 0x708) != 0) {
    FUN_00f023ec(lVar1,*(long *)(param_1 + 0x708),1);
  }
  plVar2 = (long *)FUN_00f14058(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00c3dcb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x68))(plVar2,*(undefined8 *)(param_1 + 0x710),1,9);
  return;
}




void FUN_00c3dcbc(long param_1,byte param_2,ulong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  long lVar6;
  
  if ((param_2 & 1) != *(byte *)(param_1 + 0x8b8)) {
    uVar2 = 0x3ea8f5c3;
    if ((param_3 & 1) == 0) {
      uVar2 = 0x3f800000;
    }
    if ((param_2 & 1) == 0) {
      uVar1 = *(uint *)(param_1 + 0x404);
      lVar6 = param_1 + 0x380;
      *(uint *)(param_1 + 0x404) = uVar1 | 4;
      if ((uVar1 & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x404) = uVar1 & 0xffff807f | 4;
        FUN_0091ada4(lVar6);
      }
      uVar3 = FUN_00efee28(0x3f800000,uVar2,FUN_0091aa80);
      FUN_00f01980(lVar6);
      FUN_00f022a0(lVar6,uVar3);
      uVar3 = FUN_00efed6c(uVar2);
      lVar6 = DAT_03210d00;
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
        *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
        FUN_00efc8e8(puVar5);
        *(undefined ***)puVar5 = &PTR_FUN_02825148;
        *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
      }
      lVar6 = param_1 + 0x290;
    }
    else {
      FUN_00f01980(param_1 + 0x290);
      *(uint *)(param_1 + 0x314) = *(uint *)(param_1 + 0x314) | 4;
      uVar3 = FUN_00efee28(0,uVar2,FUN_0091aa80);
      lVar6 = DAT_03210d00;
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
        *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
        FUN_00efc8e8(puVar5);
        *(undefined ***)puVar5 = &PTR_FUN_02825148;
        *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
      }
      lVar6 = param_1 + 0x380;
    }
    FUN_00f01980(lVar6);
    FUN_00f02308(lVar6,uVar3,puVar5,0);
    *(byte *)(param_1 + 0x8b8) = param_2 & 1;
  }
  return;
}




long FUN_00c3df08(long param_1)

{
  return param_1 + 0x718;
}




void FUN_00c3df10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c3df1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xd8))();
  return;
}




void FUN_00c3df20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c3df2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 8))();
  return;
}




void FUN_00c3df30(void)

{
  ulong uVar1;
  char *pcVar2;
  
  uVar1 = FUN_0092e900();
  if ((uVar1 & 1) == 0) {
    pcVar2 = "vainglory://PEOPLE/FRIENDS";
  }
  else {
    pcVar2 = "vainglory://SOCIAL";
  }
  FUN_00aa25b0(pcVar2,0);
  return;
}




void FUN_00c3df60(long param_1)

{
  FUN_00aa1814(param_1 + 0x718);
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x10))();
  FUN_00a09558();
  FUN_00a0981c();
  return;
}




void FUN_00c3df98(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00ed4748();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00f04924(param_2);
                    /* WARNING: Could not recover jumptable at 0x00c3dfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x18))(*(long **)(param_1 + 0xd8),uVar2);
    return;
  }
  return;
}




void FUN_00c3dfe8(void)

{
  return;
}




void FUN_00c3dfec(void)

{
  return;
}




void FUN_00c3dff0(void)

{
  return;
}




void FUN_00c3dff4(void)

{
  return;
}




void FUN_00c3dff8(void)

{
  return;
}




void FUN_00c3dffc(void)

{
  return;
}

