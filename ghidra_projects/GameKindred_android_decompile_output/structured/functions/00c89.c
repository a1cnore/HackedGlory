// functions/00c89 — 10 functions
#include "libGameKindred.h"




void FUN_00c89234(long param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,"x");
  FUN_008fce60(param_1 + 0x680,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c892a4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  plVar1 = param_1 + 0xa9;
  uVar7 = (**(code **)(*param_1 + 0x48))();
  FUN_00f0db64(uVar7,0,0x3f800000,plVar1);
  plVar2 = param_1 + 0x2e;
  FUN_00f13f08((int)param_1[0xcf],(int)param_1[0xcf],plVar2);
  fVar8 = *(float *)(param_1 + 0xcf);
  plVar3 = param_1 + 0x4f;
  FUN_00af6d64(plVar3);
  fVar9 = (float)FUN_00af6d80(plVar3);
  FUN_00af6d80(plVar3);
  if (fVar9 <= fVar8) {
    fVar9 = fVar8;
  }
  fVar9 = *(float *)(param_1 + 0xcf) / (float)(uint)(int)fVar9;
  if ((*(float *)(param_1 + 0x58) != fVar9) || (*(float *)((long)param_1 + 0x2c4) != fVar9)) {
    *(float *)(param_1 + 0x58) = fVar9;
    *(float *)((long)param_1 + 0x2c4) = fVar9;
    FUN_0091ada4(plVar3);
  }
  uVar6 = FUN_00f023dc(plVar1);
  if ((uVar6 & 1) == 0) {
    plVar4 = param_1 + 0x6c;
    uVar6 = FUN_00f023dc(plVar4);
    if ((uVar6 & 1) == 0) {
      uVar7 = 0x3f000000;
      FUN_00f07b78(0x3f000000,0x3f000000,0x3f000000,0x3f666666,0,0,plVar1,param_1);
      local_60 = FUN_00f01c54(plVar4,1,0,1,1);
      uStack_5c = uVar7;
      FUN_00f13f18(plVar4,&local_60);
      FUN_00f07b18(0x80000000,plVar4,2,plVar1,0);
      FUN_00f07b18(0,plVar4,4,plVar1,4);
    }
  }
  uVar6 = FUN_00f023dc(plVar2);
  if ((uVar6 & 1) == 0) {
    FUN_00f07b18(0xc2c80000,plVar2,2,plVar1,0);
    FUN_00f07b18(0,plVar2,4,plVar1,4);
  }
  uVar6 = FUN_00f023dc(plVar3);
  if ((uVar6 & 1) == 0) {
    FUN_00f07b18(0xc2c80000,plVar3,2,plVar1,0);
    FUN_00f07b18(0,plVar3,4,plVar1,4);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c894bc(undefined4 param_1,float param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  size_t __n;
  size_t sVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *__s2;
  uint uVar9;
  char *pcVar10;
  ushort uVar11;
  long lVar12;
  void *__s1;
  ushort *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_a0;
  float fStack_9c;
  long local_98;
  
  lVar5 = tpidr_el0;
  local_98 = *(long *)(lVar5 + 0x28);
  fVar18 = *(float *)(param_4 + 8);
  fVar17 = *(float *)((long)param_4 + 0x44);
  local_a0 = param_1;
  fStack_9c = param_2;
  fVar14 = (float)FUN_00f08664(&local_a0,param_4[4]);
  fVar16 = param_2;
  fVar15 = (float)(**(code **)(*param_4 + 0x48))(param_4);
  fVar14 = fVar14 - fVar15 * 0.5;
  param_2 = param_2 - fVar16 * 0.5;
  if ((*(float *)(param_4 + 8) != fVar14) || (*(float *)((long)param_4 + 0x44) != param_2)) {
    *(float *)(param_4 + 8) = fVar14;
    *(float *)((long)param_4 + 0x44) = param_2;
    FUN_0091ada4(param_4);
  }
  uVar9 = *(uint *)((long)param_4 + 0x84);
  if ((uVar9 & 0x7f80) != 0) {
    *(uint *)((long)param_4 + 0x84) = uVar9 & 0xffff807f;
    FUN_0091ada4(param_4);
    uVar9 = *(uint *)((long)param_4 + 0x84);
  }
  *(uint *)((long)param_4 + 0x84) = uVar9 | 4;
  lVar12 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar13 = (ushort *)0x0;
  }
  else {
    puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar13;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar12 + 0x20014) = *(int *)(lVar12 + 0x20014) + 1;
    FUN_00efcad4(puVar13);
    *(undefined ***)puVar13 = &PTR_FUN_027c1a60;
    *(int *)(lVar12 + 0x20020) = *(int *)(lVar12 + 0x20020) + 1;
  }
  fVar16 = (float)param_3;
  FUN_00efcac4(fVar16 * 0.5,puVar13);
  FUN_00f022a0(param_4,puVar13);
  uVar7 = FUN_00efee28(0x3f800000,param_3,FUN_009a7624);
  uVar8 = FUN_00eff008(fVar18 - fVar14,fVar17 - param_2,param_3,FUN_009a7608);
  lVar12 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar13 = (ushort *)0x0;
  }
  else {
    puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar13;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar12 + 0x20014) = *(int *)(lVar12 + 0x20014) + 1;
    FUN_00efcd98(puVar13);
    *(int *)(lVar12 + 0x20020) = *(int *)(lVar12 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar13,uVar7,uVar8,0);
  FUN_00f022a0(param_4,puVar13);
  bVar4 = *(byte *)(param_4 + 0x29);
  __n = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    __n = param_4[0x2a];
  }
  sVar3 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar3 = DAT_0320ffb0;
  }
  if (__n == sVar3) {
    __s1 = (void *)param_4[0x2b];
    if ((bVar4 & 1) == 0) {
      __s1 = (void *)((long)param_4 + 0x149);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (__n != 0) {
        pcVar10 = (char *)((long)param_4 + 0x149);
        lVar12 = -(ulong)(bVar4 >> 1);
        do {
          if (*pcVar10 != *__s2) goto LAB_00c897b0;
          pcVar10 = pcVar10 + 1;
          lVar12 = lVar12 + 1;
          __s2 = __s2 + 1;
        } while (lVar12 != 0);
      }
      goto LAB_00c89870;
    }
    if ((__n == 0) || (iVar6 = memcmp(__s1,__s2,__n), iVar6 == 0)) goto LAB_00c89870;
  }
LAB_00c897b0:
  lVar12 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar13 = (ushort *)0x0;
  }
  else {
    puVar13 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar11 * 0x40);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar13;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar12 + 0x20014) = *(int *)(lVar12 + 0x20014) + 1;
    FUN_00efc8e8(puVar13);
    puVar13[8] = 0;
    puVar13[9] = 0;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    puVar13[0x14] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = 0;
    puVar13[0x12] = 0;
    puVar13[0x13] = 0;
    *(undefined ***)puVar13 = &PTR_FUN_027d0db0;
    *(int *)(lVar12 + 0x20020) = *(int *)(lVar12 + 0x20020) + 1;
  }
  FUN_00a99c48(puVar13,param_4 + 0x29,0,0);
  FUN_00f022a0(param_4,puVar13);
LAB_00c89870:
  plVar1 = param_4 + 0xa9;
  if ((*(uint *)((long)param_4 + 0x5cc) & 0x7f80) != 0) {
    *(uint *)((long)param_4 + 0x5cc) = *(uint *)((long)param_4 + 0x5cc) & 0xffff807f;
    FUN_0091ada4(plVar1);
  }
  plVar2 = param_4 + 0x6c;
  if ((*(uint *)((long)param_4 + 0x3e4) & 0x7f80) != 0) {
    *(uint *)((long)param_4 + 0x3e4) = *(uint *)((long)param_4 + 0x3e4) & 0xffff807f;
    FUN_0091ada4(plVar2);
  }
  fVar14 = *(float *)((long)param_4 + 0x58c) + 55.0;
  if ((NAN(*(float *)(param_4 + 0xb1))) || (*(float *)((long)param_4 + 0x58c) != fVar14)) {
    *(float *)((long)param_4 + 0x58c) = fVar14;
    FUN_0091ada4(plVar1);
  }
  fVar14 = *(float *)((long)param_4 + 0x3a4) + 55.0;
  if ((NAN(*(float *)(param_4 + 0x74))) || (*(float *)((long)param_4 + 0x3a4) != fVar14)) {
    *(float *)((long)param_4 + 0x3a4) = fVar14;
    FUN_0091ada4(plVar2);
  }
  lVar12 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar13 = (ushort *)0x0;
  }
  else {
    puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar13;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar12 + 0x20014) = *(int *)(lVar12 + 0x20014) + 1;
    FUN_00efcad4(puVar13);
    *(undefined ***)puVar13 = &PTR_FUN_027c1a60;
    *(int *)(lVar12 + 0x20020) = *(int *)(lVar12 + 0x20020) + 1;
  }
  FUN_00efcac4(fVar16 * 1.75,puVar13);
  FUN_00f022a0(plVar1,puVar13);
  uVar7 = FUN_00efee28(0x3f3d70a4,0x3e99999a,FUN_009a7608);
  uVar8 = FUN_00eff008(0,0xc25c0000,0x3e99999a,FUN_009a7608);
  lVar12 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar13 = (ushort *)0x0;
  }
  else {
    puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar13;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar12 + 0x20014) = *(int *)(lVar12 + 0x20014) + 1;
    FUN_00efcd98(puVar13);
    *(int *)(lVar12 + 0x20020) = *(int *)(lVar12 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar13,uVar7,uVar8,0);
  FUN_00f022a0(plVar1,puVar13);
  lVar12 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar13 = (ushort *)0x0;
  }
  else {
    puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar13;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar12 + 0x20014) = *(int *)(lVar12 + 0x20014) + 1;
    FUN_00efcad4(puVar13);
    *(undefined ***)puVar13 = &PTR_FUN_027c1a60;
    *(int *)(lVar12 + 0x20020) = *(int *)(lVar12 + 0x20020) + 1;
  }
  FUN_00efcac4(fVar16 * 1.6,puVar13);
  FUN_00f022a0(plVar2,puVar13);
  uVar7 = FUN_00efee28(0x3f800000,0x3e99999a,FUN_009a7608);
  uVar8 = FUN_00eff008(0,0xc25c0000,0x3e99999a,FUN_009a7608);
  lVar12 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar13 = (ushort *)0x0;
  }
  else {
    puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar13;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar12 + 0x20014) = *(int *)(lVar12 + 0x20014) + 1;
    FUN_00efcd98(puVar13);
    *(int *)(lVar12 + 0x20020) = *(int *)(lVar12 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar13,uVar7,uVar8,0);
  FUN_00f022a0(plVar2,puVar13);
  if (*(char *)((long)param_4 + 0x67c) == '\0') {
    param_4 = param_4 + 0x2e;
  }
  else {
    param_4 = param_4 + 0x4f;
  }
  FUN_00c8b224(0x425c0000,0x40e00000,0x3f333333,0,param_4,&DAT_0320ffa8);
  if (*(long *)(lVar5 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c89ca4(long *param_1)

{
  FUN_00af6c14(param_1 + 0x4f);
                    /* WARNING: Could not recover jumptable at 0x00c89cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))(param_1);
  return;
}




void FUN_00c89cd8(long param_1)

{
  FUN_00af6c14(param_1 + 0x1c0);
                    /* WARNING: Could not recover jumptable at 0x00c89d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -0xb8) + 0x140))((long *)(param_1 + -0xb8));
  return;
}




void FUN_00c89d0c(long param_1)

{
  *(uint *)(param_1 + 0x5cc) = *(uint *)(param_1 + 0x5cc) & 0xfffffffb;
  *(uint *)(param_1 + 0x3e4) = *(uint *)(param_1 + 0x3e4) & 0xfffffffb;
  return;
}




void FUN_00c89d28(long param_1)

{
  FUN_00f10dc8(param_1 + 0x170,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e698(param_1 + 0x170,0xb);
  return;
}




void FUN_00c89d68(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00c88df0();
  puVar1 = param_1 + 0xd3;
  *param_1 = &PTR_FUN_028054b8;
  param_1[0x17] = &PTR_FUN_02805628;
  FUN_00f0e4a8(puVar1);
  FUN_00f13ca4(param_1 + 0xf1);
  lVar4 = 0;
  do {
    FUN_00f0e4a8((long)param_1 + lVar4 + 0x840);
    lVar4 = lVar4 + 0xf0;
  } while (lVar4 != 0x4b0);
  FUN_00f023ec(param_1 + 0x6c,puVar1,1);
  FUN_00f023ec(param_1 + 0x6c,param_1 + 0xf1,1);
  FUN_00f0e548(puVar1,PTR_s_build___InventoryCommon_atlas_02be34e0,"inventory_hero_mastery_accent");
  FUN_00f0e9c0(puVar1,1);
  FUN_00f0e74c(puVar1,300);
  lVar4 = 0;
  do {
    lVar2 = (long)param_1 + lVar4 + 0x840;
    FUN_00f0e548(lVar2,PTR_s_build___InventoryCommon_atlas_02be34e0,"64x64_hero_mastery_star");
    FUN_00f13f08(0x42340000,0x42340000,lVar2);
    lVar4 = lVar4 + 0xf0;
  } while (lVar4 != 0x4b0);
  local_60 = 0x3f0000003f000000;
  (**(code **)(param_1[0x2e] + 0x28))(param_1 + 0x2e,&local_60);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c89ed8(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  FUN_00c88fa0();
  *(uint *)(param_1 + 0x71c) = *(uint *)(param_1 + 0x71c) & 0xfffffffb;
  *(uint *)(param_1 + 0x80c) = *(uint *)(param_1 + 0x80c) & 0xfffffffb;
  if (0 < *(int *)(param_2 + 0x68)) {
    lVar2 = param_1 + 0x840;
    uVar3 = 1;
    do {
      FUN_00f023ec(param_1 + 0x788,lVar2,1);
      if (uVar3 != 1) {
        FUN_00f07b18(0x41200000,lVar2,3,lVar2 + -0xf0,1);
      }
      if (4 < uVar3) {
        return;
      }
      lVar2 = lVar2 + 0xf0;
      bVar1 = (long)uVar3 < (long)*(int *)(param_2 + 0x68);
      uVar3 = uVar3 + 1;
    } while (bVar1);
  }
  return;
}




void FUN_00c89f8c(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar1 = param_3 + 0x788;
  local_40 = FUN_00f01c54(lVar1,1,0,1,1);
  uStack_3c = param_2;
  FUN_00f13f18(lVar1,&local_40);
  FUN_00f07b18(0x41200000,lVar1,0,param_3 + 0x698,2);
  FUN_00f07b18(0,lVar1,4,param_3 + 0x698,4);
  FUN_00c892a4(param_3);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

