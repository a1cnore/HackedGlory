// functions/00ab6 — 15 functions
#include "libGameKindred.h"




void FUN_00ab60a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d4918;
  param_1[0x3de] = &PTR_FUN_027d4af0;
  FUN_00f0d3a4(param_1 + 0x4fd);
  param_1[0x4df] = &PTR_FUN_028266f0;
  param_1[0x4f6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f9);
  FUN_00f13d08(param_1 + 0x4df);
  param_1[0x4c1] = &PTR_FUN_028266f0;
  param_1[0x4d8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4db);
  FUN_00f13d08(param_1 + 0x4c1);
  FUN_00f01868(param_1 + 0x4b0);
  FUN_00f01868(param_1 + 0x49f);
  FUN_00b0c2f8(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ab6164(undefined8 *param_1)

{
  param_1[-0x3de] = &PTR_FUN_027d4918;
  *param_1 = &PTR_FUN_027d4af0;
  FUN_00f0d3a4(param_1 + 0x11f);
  param_1[0x101] = &PTR_FUN_028266f0;
  param_1[0x118] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x11b);
  FUN_00f13d08(param_1 + 0x101);
  param_1[0xe3] = &PTR_FUN_028266f0;
  param_1[0xfa] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xfd);
  FUN_00f13d08(param_1 + 0xe3);
  FUN_00f01868(param_1 + 0xd2);
  FUN_00f01868(param_1 + 0xc1);
  FUN_00b0c2f8(param_1 + -0x3de);
  return;
}




void FUN_00ab6214(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x3de;
  *puVar1 = &PTR_FUN_027d4918;
  *param_1 = &PTR_FUN_027d4af0;
  FUN_00f0d3a4(param_1 + 0x11f);
  param_1[0x101] = &PTR_FUN_028266f0;
  param_1[0x118] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x11b);
  FUN_00f13d08(param_1 + 0x101);
  param_1[0xe3] = &PTR_FUN_028266f0;
  param_1[0xfa] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xfd);
  FUN_00f13d08(param_1 + 0xe3);
  FUN_00f01868(param_1 + 0xd2);
  FUN_00f01868(param_1 + 0xc1);
  FUN_00b0c2f8(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00ab62cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d4cc0;
  param_1[0x5e] = &PTR_FUN_028266f0;
  param_1[0x75] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x78);
  FUN_00f13d08(param_1 + 0x5e);
  param_1[0x40] = &PTR_FUN_028266f0;
  param_1[0x57] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5a);
  FUN_00f13d08(param_1 + 0x40);
  FUN_00f01868(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ab6378(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00ab63f8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00f017e8();
  plVar3 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027d4dc0;
  FUN_00f017e8(plVar3);
  lVar4 = 0x110;
  *plVar3 = (long)&PTR_FUN_027c1f80;
  do {
    FUN_00f0e4a8((long)param_1 + lVar4);
    lVar4 = lVar4 + 0xf0;
  } while (lVar4 != 0x6b0);
  param_1[0xd7] = 0xff000000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  lVar4 = 0x110;
  do {
    FUN_00f023ec(plVar3,(long)param_1 + lVar4,1);
    lVar4 = lVar4 + 0xf0;
  } while (lVar4 != 0x6b0);
  lVar4 = 0;
  do {
    lVar1 = (long)param_1 + lVar4 + 0x110;
    FUN_00f0e548(lVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_sparkle");
    local_70 = CONCAT44(local_70._4_4_,0xffbef1ff);
    FUN_00f0e670(lVar1,&local_70,2);
    local_70 = 0x3f0000003f000000;
    (**(code **)(*(long *)((long)param_1 + lVar4 + 0x110) + 0x28))(lVar1,&local_70);
    lVar1 = lVar4 + 0xf0;
    *(uint *)((long)param_1 + lVar4 + 0x194) = *(uint *)((long)param_1 + lVar4 + 0x194) & 0xffffffbf
    ;
    lVar4 = lVar1;
  } while (lVar1 != 0x5a0);
  lVar4 = 0x110;
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xfffffffb;
  do {
    FUN_00f01980((long)param_1 + lVar4);
    lVar4 = lVar4 + 0xf0;
    *(undefined4 *)((long)param_1 + 0x6bc) = 0;
  } while (lVar4 != 0x6b0);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ab6588(long param_1,uint param_2,undefined8 *param_3)

{
  long lVar1;
  
  *(uint *)(param_1 + 0x10c) =
       *(uint *)(param_1 + 0x10c) & 0xfffffff8 | *(uint *)(param_1 + 0x10c) & 3 | (param_2 & 1) << 2
  ;
  if ((param_2 & 1) == 0) {
    lVar1 = 0x110;
    do {
      FUN_00f01980(param_1 + lVar1);
      lVar1 = lVar1 + 0xf0;
      *(undefined4 *)(param_1 + 0x6bc) = 0;
    } while (lVar1 != 0x6b0);
  }
  else {
    lVar1 = 0x110;
    *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(param_1 + 0x6b0) = *param_3;
    do {
      FUN_00f0e670(param_1 + lVar1,param_3 + 1,2);
      FUN_00ab6620(param_1);
      lVar1 = lVar1 + 0xf0;
    } while (lVar1 != 0x6b0);
  }
  return;
}




void FUN_00ab661c(void)

{
  return;
}




void FUN_00ab6620(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  ushort uVar11;
  long lVar12;
  long lVar13;
  ushort *puVar14;
  ushort *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar1 = rand();
  iVar2 = rand();
  iVar3 = rand();
  uVar4 = rand();
  uVar9 = *(uint *)(param_1 + 0x6bc);
  if (uVar9 < 6) {
    iVar5 = rand();
    iVar5 = iVar5 % 4;
    if (iVar5 == 1) {
      fVar18 = *(float *)(param_1 + 0x6b0);
      fVar17 = *(float *)(param_1 + 0x6b4);
      iVar5 = rand();
      fVar17 = fVar17 * (float)iVar5 * 4.656613e-10 + 0.0;
    }
    else if (iVar5 == 0) {
      fVar17 = *(float *)(param_1 + 0x6b4);
      iVar5 = rand();
      fVar18 = 0.0;
      fVar17 = fVar17 * (float)iVar5 * 4.656613e-10 + 0.0;
    }
    else {
      fVar18 = *(float *)(param_1 + 0x6b0);
      iVar6 = rand();
      fVar17 = 0.0;
      fVar18 = fVar18 * (float)iVar6 * 4.656613e-10 + 0.0;
      if (iVar5 != 2) {
        fVar17 = *(float *)(param_1 + 0x6b4);
      }
    }
    uVar10 = (ulong)*(uint *)(param_1 + 0x6bc);
    lVar13 = param_1 + uVar10 * 0xf0;
    uVar9 = *(uint *)(lVar13 + 0x194);
    if ((uVar9 & 0x7f80) != 0) {
      *(uint *)(lVar13 + 0x194) = uVar9 & 0xffff807f;
      FUN_0091ada4(param_1 + uVar10 * 0xf0 + 0x110);
      uVar10 = (ulong)*(uint *)(param_1 + 0x6bc);
    }
    lVar12 = param_1 + uVar10 * 0xf0;
    fVar16 = (float)iVar1 * 4.656613e-10 * 0.3 + 0.5;
    lVar13 = lVar12 + 0x110;
    if ((*(float *)(lVar12 + 0x150) != fVar18) || (*(float *)(lVar12 + 0x154) != fVar17)) {
      *(float *)(lVar12 + 0x150) = fVar18;
      *(float *)(lVar12 + 0x154) = fVar17;
      FUN_0091ada4(lVar13);
      uVar10 = (ulong)*(uint *)(param_1 + 0x6bc);
      lVar13 = param_1 + uVar10 * 0xf0 + 0x110;
    }
    lVar12 = param_1 + uVar10 * 0xf0;
    if ((*(float *)(lVar12 + 0x158) != 0.0) || (*(float *)(param_1 + uVar10 * 0xf0 + 0x15c) != 0.0))
    {
      *(undefined8 *)(lVar12 + 0x158) = 0;
      FUN_0091ada4(lVar13);
      uVar10 = (ulong)*(uint *)(param_1 + 0x6bc);
    }
    lVar13 = param_1 + uVar10 * 0xf0;
    fVar18 = (float)iVar2 * 4.656613e-10 * 0.75 + 3.5;
    *(byte *)(lVar13 + 0x1e8) =
         (byte)iVar3 & 1 | (byte)((uVar4 & 1) << 1) | *(byte *)(lVar13 + 0x1e8) & 0xfc;
    uVar7 = FUN_00efee28(0x3f800000,fVar16 * 0.67,FUN_009a71a4);
    uVar8 = FUN_00efee28(0,fVar16,FUN_00a53a7c);
    lVar13 = DAT_03210d00;
    uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar11 == 0xffff) {
      puVar15 = (ushort *)0x0;
    }
    else {
      puVar15 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
      if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar11 = 0xffff;
      }
      else {
        uVar11 = *puVar15;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
      *(int *)(lVar13 + 0x20014) = *(int *)(lVar13 + 0x20014) + 1;
      FUN_00efd208(puVar15);
      *(int *)(lVar13 + 0x20020) = *(int *)(lVar13 + 0x20020) + 1;
    }
    FUN_00efd2dc(puVar15,uVar7,uVar8,0);
    uVar7 = FUN_00eff63c(fVar18,fVar18,fVar16 + fVar16 * 0.67,FUN_009a71a4);
    lVar13 = DAT_03210d00;
    uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar11 == 0xffff) {
      puVar14 = (ushort *)0x0;
    }
    else {
      puVar14 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
      if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar11 = 0xffff;
      }
      else {
        uVar11 = *puVar14;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
      *(int *)(lVar13 + 0x20014) = *(int *)(lVar13 + 0x20014) + 1;
      FUN_00efcd98(puVar14);
      *(int *)(lVar13 + 0x20020) = *(int *)(lVar13 + 0x20020) + 1;
    }
    FUN_00efcea4(puVar14,puVar15,uVar7,0);
    lVar13 = DAT_03210d00;
    uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar11 == 0xffff) {
      puVar15 = (ushort *)0x0;
    }
    else {
      puVar15 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar11 * 0x40);
      if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar11 = 0xffff;
      }
      else {
        uVar11 = *puVar15;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
      *(int *)(lVar13 + 0x20014) = *(int *)(lVar13 + 0x20014) + 1;
      FUN_00efc8e8(puVar15);
      *(undefined ***)puVar15 = &PTR_FUN_027c27b8;
      puVar15[0xc] = 0;
      puVar15[0xd] = 0;
      puVar15[0xe] = 0;
      puVar15[0xf] = 0;
      puVar15[0x10] = 0;
      puVar15[0x11] = 0;
      puVar15[0x12] = 0;
      puVar15[0x13] = 0;
      puVar15[8] = 0;
      puVar15[9] = 0;
      puVar15[10] = 0;
      puVar15[0xb] = 0;
      *(int *)(lVar13 + 0x20020) = *(int *)(lVar13 + 0x20020) + 1;
    }
    *(code **)(puVar15 + 8) = FUN_00ab6ac8;
    *(long *)(puVar15 + 0x10) = param_1;
    FUN_00f01980(param_1 + 0x110 + (ulong)*(uint *)(param_1 + 0x6bc) * 0xf0);
    FUN_00f02308(param_1 + 0x110 + (ulong)*(uint *)(param_1 + 0x6bc) * 0xf0,puVar14,puVar15,0);
    uVar9 = *(uint *)(param_1 + 0x6bc);
  }
  *(uint *)(param_1 + 0x6bc) = (uVar9 + 1) % 6;
  return;
}




void FUN_00ab6ac8(long param_1)

{
  if (param_1 != 0) {
    FUN_00ab6620();
    return;
  }
  return;
}




void FUN_00ab6ad4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027d4dc0;
  lVar2 = 0x5a0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2 + 0x20);
    *puVar1 = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar2 + 0xd8) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar2 + 0xf0);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != 0);
  FUN_00f01868(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00ab6b4c(void *param_1)

{
  FUN_00ab6ad4();
  operator_delete(param_1);
  return;
}




void FUN_00ab6b70(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(1.0 - *(float *)(param_5 + 0x830),0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_00f0a7e0(param_3,"circle_button_fill");
  FUN_00a20e44(*param_2,param_2[1],fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2,uVar1,
               param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




undefined4 FUN_00ab6c1c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x830);
}




void FUN_00ab6c24(long *param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  byte bVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  code *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar10 = tpidr_el0;
  local_78 = *(long *)(lVar10 + 0x28);
  FUN_00b08d84();
  plVar1 = param_1 + 0x4e;
  bVar8 = param_2 & 1;
  *param_1 = (long)&PTR_FUN_027d4ec0;
  FUN_00b12bd8(plVar1,bVar8);
  FUN_00f0d160(param_1 + 0xe4);
  FUN_00f0e4a8();
  plVar2 = param_1 + 0x129;
  param_1[0x128] = 0;
  FUN_00b133a8(plVar2,bVar8);
  plVar4 = param_1 + 0x234;
  FUN_00f017e8(plVar4);
  plVar5 = param_1 + 0x245;
  param_1[0x234] = (long)&PTR_FUN_027c1f80;
  FUN_00f0fe84(plVar5);
  plVar6 = param_1 + 0x26f;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0x28d;
  FUN_00f0e4a8(plVar7);
  FUN_00e70510(param_1 + 0x2ab);
  *(undefined4 *)(param_1 + 0x2ad) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x156c) = 0xffffffff;
  param_1[0x2b0] = 0x300000000;
  *(undefined4 *)((long)param_1 + 0x1574) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2af) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x157c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2ae) = 0xff000000;
  *(undefined8 *)((long)param_1 + 0x1594) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x158c) = 0;
  *(undefined8 *)((long)param_1 + 0x15a4) = 0x3f8000003f4ccccd;
  *(undefined8 *)((long)param_1 + 0x159c) = 0x3f4ccccd3f800000;
  *(undefined8 *)((long)param_1 + 0x15ac) = 0x42b800003f800000;
  *(undefined4 *)((long)param_1 + 0x15b4) = 0;
  *(undefined1 *)(param_1 + 0x2b7) = 0;
  *(byte *)((long)param_1 + 0x15b9) = bVar8;
  plVar3 = param_1 + 0x34;
  *(undefined1 *)((long)param_1 + 0x15ba) = 1;
  FUN_00f023ec(plVar3,plVar1,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar4,plVar6,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar4,plVar7,1);
  FUN_00f023ec(plVar3,plVar2,1);
  FUN_00f023ec(plVar3,param_1 + 0xe4,1);
  FUN_00f023ec(plVar3,param_1 + 0x10a,1);
  *(uint *)((long)param_1 + 0x1224) = *(uint *)((long)param_1 + 0x1224) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x9cc) = *(uint *)((long)param_1 + 0x9cc) & 0xffffffbf;
  puVar9 = PTR_s_build___HUDPartsCommon_atlas_02be3440;
  if ((param_2 & 1) == 0) {
    puVar9 = PTR_s_build___MenuPartsCommon_tga_02be3530;
  }
  if ((param_2 & 1) == 0) {
    FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_starburst");
    if ((*(float *)(param_1 + 0x296) != 3.0) || (*(float *)((long)param_1 + 0x14b4) != 3.0)) {
      lVar11 = NEON_fmov(0x40400000,4);
      param_1[0x296] = lVar11;
      FUN_0091ada4(plVar7);
    }
    if ((*(float *)(param_1 + 0x297) != 0.48) || (*(float *)((long)param_1 + 0x14bc) != 0.48)) {
      param_1[0x297] = 0x3ef5c28f3ef5c28f;
      FUN_0091ada4(plVar7);
    }
    FUN_00f0ff6c(plVar5,puVar9);
  }
  local_a8 = (code *)0x3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_a8);
  local_a8 = (code *)0x3f0000003f000000;
  FUN_00b12ff0(plVar1,&local_a8);
  if ((*(float *)(param_1 + 0x133) != 0.5) || (*(float *)((long)param_1 + 0x99c) != 0.5)) {
    param_1[0x133] = 0x3f0000003f000000;
    FUN_0091ada4(plVar2);
  }
  FUN_00b13cb4(*(undefined4 *)((long)param_1 + 0x15ac),plVar2,(long)param_1 + 0x157c);
  *(uint *)((long)param_1 + 0x9cc) = *(uint *)((long)param_1 + 0x9cc) & 0xfffffffb;
  FUN_00f0e540(param_1 + 0x10a,puVar9);
  FUN_00f0e540(plVar6,puVar9);
  FUN_00b13324((int)param_1[0x2b4],plVar1);
  FUN_00f14070(param_1,&DAT_03211038);
  local_80 = DAT_03210c64;
  local_a8 = FUN_00ab7030;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_009693a0(param_1 + 1,&local_a8);
  FUN_00b094a4(param_1,&DAT_03133ff8);
  (**(code **)(*param_1 + 0x168))(param_1);
  if (*(long *)(lVar10 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

