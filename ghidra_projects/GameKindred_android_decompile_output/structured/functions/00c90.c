// functions/00c90 — 14 functions
#include "libGameKindred.h"




void FUN_00c90214(long param_1)

{
  size_t __n;
  size_t sVar1;
  char *__s1;
  byte bVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  char *__s2;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  undefined8 local_68;
  void *local_60;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar7 = param_1 + 0x520;
  FUN_00ca3130((float)*(int *)(param_1 + 0x1668),(float)*(int *)(param_1 + 0x166c),lVar7);
  FUN_00ca3280((float)*(int *)(param_1 + 0x1668),lVar7);
  FUN_00c9059c(param_1);
  FUN_00ca3288(lVar7,*(undefined4 *)(param_1 + 0x1674));
  uVar4 = FUN_00f048a4("SPOILSOFWAR::PULSE_RING");
  FUN_00f048e0(auStack_58,uVar4,0);
  FUN_00f04760(param_1,auStack_58,1);
  bVar2 = *(byte *)(param_1 + 0x1610);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x1618);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pcVar8 = *(char **)(param_1 + 0x1620);
    pcVar6 = (char *)(param_1 + 0x1611);
    __s1 = pcVar6;
    if ((bVar2 & 1) != 0) {
      __s1 = pcVar8;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar7 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar6 != *__s2) goto LAB_00c90330;
          pcVar6 = pcVar6 + 1;
          lVar7 = lVar7 + 1;
          __s2 = __s2 + 1;
        } while (lVar7 != 0);
      }
      goto LAB_00c90368;
    }
    if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) goto LAB_00c90368;
  }
  else {
LAB_00c90330:
    if ((bVar2 & 1) == 0) {
      pcVar8 = (char *)(param_1 + 0x1611);
    }
    else {
      pcVar8 = *(char **)(param_1 + 0x1620);
    }
  }
  FUN_00aa12a8(0x3f800000,pcVar8,0,1);
LAB_00c90368:
  FUN_00e70510(&local_68);
  FUN_00e70e18(&local_68,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0x1674));
  FUN_00f0d75c(param_1 + 0x2c0,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c903c8(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  long local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00c8be40();
  pcStack_40 = FUN_00c90934;
  local_48 = param_1;
  FUN_00f03390(&local_48);
  fVar3 = (float)*(int *)(param_1 + 0x1668);
  if ((*(float *)(param_1 + 0x16a0) < fVar3) ||
     (fVar4 = (float)*(int *)(param_1 + 0x166c), fVar4 < *(float *)(param_1 + 0x16a0))) {
    fVar3 = (float)*(int *)(param_1 + 0x1658);
    fVar4 = (float)*(int *)(param_1 + 0x165c);
  }
  lVar2 = param_1 + 0x520;
  FUN_00ca3130(fVar3,fVar4,lVar2);
  FUN_00ca3280(*(undefined4 *)(param_1 + 0x16a0),lVar2);
  FUN_00ca3308(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c90488(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x520;
  FUN_00f13f08(*(undefined4 *)(param_1 + 0x1698),*(undefined4 *)(param_1 + 0x169c),lVar1);
  FUN_00f07940(0,0x42820000,param_1 + 0xd8,4,param_1,4);
  FUN_00f07940(0,0xc2200000,param_1 + 0x208,8,param_1,8);
  FUN_00f07940(0,0xc2aa0000,lVar1,6,param_1,6);
  FUN_00f07b18(0xc2480000,param_1 + 0x3f0,2,lVar1,0);
  FUN_00f07b18(0,param_1 + 0x3f0,4,lVar1,4);
  return;
}




void FUN_00c9054c(long param_1)

{
  FUN_00c8bee8();
  *(uint *)(param_1 + 0x5a4) = *(uint *)(param_1 + 0x5a4) & 0xfffffffb;
  *(uint *)(param_1 + 0x474) = *(uint *)(param_1 + 0x474) & 0xfffffffb;
  return;
}




void FUN_00c90584(float param_1,long *param_2)

{
  *(float *)(param_2 + 0x2d4) = *(float *)(param_2 + 0x2d4) + param_1;
                    /* WARNING: Could not recover jumptable at 0x00c90598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x148))();
  return;
}




void FUN_00c9059c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined8 uVar8;
  undefined4 local_60 [2];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0xd8;
  *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 4;
  FUN_00f01980(lVar1);
  if ((*(float *)(param_1 + 0x120) != 4.0) || (*(float *)(param_1 + 0x124) != 4.0)) {
    uVar8 = NEON_fmov(0x40800000,4);
    *(undefined8 *)(param_1 + 0x120) = uVar8;
    FUN_0091ada4(lVar1);
  }
  if ((*(uint *)(param_1 + 0x15c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  local_60[0] = 0xfff6b43b;
  FUN_00f0d7fc(lVar1,local_60);
  uVar8 = FUN_00eff63c(0x3fa00000,0x3fa00000,0x3e800000,0);
  FUN_00efcb24(uVar8,FUN_009a7624);
  uVar4 = FUN_00eff63c(0x3fc00000,0x3fc00000,0x3d23d70a,0);
  FUN_00efcb24(uVar4,FUN_009a7624);
  lVar3 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efd208(puVar6);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efd2dc(puVar6,uVar8,uVar4,0);
  uVar8 = FUN_00efee28(0x3f800000,0x3ee66666,FUN_009a7624);
  uVar4 = FUN_00eff224(0x3ee66666,lVar1,&DAT_01bee7fa,FUN_009a7624);
  lVar3 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efcd98(puVar7);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar7,puVar6,uVar8,uVar4,0);
  uVar8 = FUN_00efee28(0,0x3f800000,FUN_009a7624);
  FUN_00f022a0(lVar1,puVar7);
  FUN_00f022a0(lVar1,uVar8);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c90870(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02805e08;
  param_1[0x2b0] = &PTR_FUN_027efbe0;
  if ((void *)param_1[0x2d2] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2d2]);
    param_1[0x2d2] = 0;
    param_1[0x2d1] = 0;
  }
  if ((void *)param_1[0x2d0] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2d0]);
    param_1[0x2d0] = 0;
    param_1[0x2cf] = 0;
  }
  FUN_00beb548(param_1 + 0x2b0);
  FUN_00c1d3c8(param_1 + 0xa4);
  FUN_00f0d3a4(param_1 + 0x7e);
  FUN_00f0d3a4(param_1 + 0x58);
  FUN_00f13d08(param_1 + 0x41);
  FUN_00f0d3a4(param_1 + 0x1b);
  FUN_00c8bc58(param_1);
  return;
}




void FUN_00c90910(void *param_1)

{
  FUN_00c90870();
  operator_delete(param_1);
  return;
}




void FUN_00c90934(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c9093c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}




void FUN_00c90940(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_00c8bc0c();
  plVar1 = param_1 + 0x1b;
  *param_1 = (long)&PTR_FUN_02805f90;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x32;
  FUN_00f13ca4(plVar2);
  FUN_00b1dc5c(param_1 + 0x49);
  plVar3 = param_1 + 0x1b7;
  FUN_00b1c70c(plVar3);
  param_1[0x5a9] = 0;
  param_1[0x5a8] = 0;
  param_1[0x5aa] = 0;
  *(undefined8 *)((long)param_1 + 0x2d84) = 0;
  *(undefined8 *)((long)param_1 + 0x2d7c) = 0;
  *(undefined8 *)((long)param_1 + 0x2d74) = 0;
  *(undefined8 *)((long)param_1 + 0x2d6c) = 0;
  *(undefined8 *)((long)param_1 + 0x2d64) = 0;
  *(undefined8 *)((long)param_1 + 0x2d5c) = 0;
  *(undefined4 *)((long)param_1 + 0x2d8c) = 0;
  memset(param_1 + 0x5b3,0,0x78);
  *(undefined4 *)(param_1 + 0x5b2) = 0x3f800000;
  param_1[0x5a7] = (long)&PTR_FUN_027efcc8;
  FUN_00a0767c(param_1 + 0x5c2);
  FUN_00a0767c(param_1 + 0x5c8);
  *(undefined4 *)(param_1 + 0x5ab) = 2;
  param_1[0x5cf] = 0;
  param_1[0x5ce] = 0x4258000044960000;
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,param_1 + 0x49,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00b1cb2c(plVar3,1);
  return;
}




void FUN_00c90a9c(long param_1)

{
  long lVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x2e7c);
  lVar1 = param_1 + 0xdb8;
  iVar2 = 1000;
  if ((0.0 < *(float *)(param_1 + 0x2e78)) && (0.0 < fVar3)) {
    iVar2 = (int)(fVar3 / *(float *)(param_1 + 0x2e78));
  }
  FUN_00b1cb48(*(undefined4 *)(param_1 + 0x2e70),*(undefined4 *)(param_1 + 0x2e74),lVar1,0,iVar2,
               (int)fVar3,(int)fVar3,(int)*(float *)(param_1 + 0x2e80),0);
  fVar3 = (float)NEON_fminnm((float)*(int *)(param_1 + 0x2e14),0x41e80000);
  if (fVar3 <= -1.0) {
    fVar3 = -1.0;
  }
  FUN_00b1d2b4(*(undefined4 *)(param_1 + 0x2e78),*(undefined4 *)(param_1 + 0x2e20),
               *(undefined4 *)(param_1 + 0x2e24),*(undefined4 *)(param_1 + 0x2e28),lVar1,(int)fVar3)
  ;
  FUN_00b1cbb0(lVar1);
  return;
}




void FUN_00c90b40(long *param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  void *__s1;
  byte bVar2;
  int iVar3;
  char *__s2;
  char *pcVar4;
  long lVar5;
  void *pvVar6;
  float fVar7;
  
  FUN_008fce60(param_1 + 0x5a8,param_2 + 8);
  param_1[0x5ab] = *(long *)(param_2 + 0x20);
  FUN_008fce60(param_1 + 0x5ac,param_2 + 0x28);
  FUN_008fce60(param_1 + 0x5af,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x5b2) = *(undefined4 *)(param_2 + 0x58);
  FUN_008fce60(param_1 + 0x5b3,param_2 + 0x60);
  FUN_008fce60(param_1 + 0x5b6,param_2 + 0x78);
  FUN_008fce60(param_1 + 0x5b9,param_2 + 0x90);
  FUN_008fce60(param_1 + 0x5bc,param_2 + 0xa8);
  FUN_008fce60(param_1 + 0x5bf,param_2 + 0xc0);
  memcpy(param_1 + 0x5c2,(void *)(param_2 + 0xd8),0x60);
  iVar3 = *(int *)((long)param_1 + 0x2e14);
  fVar7 = (float)NEON_fminnm((float)iVar3,0x41e80000);
  if (fVar7 <= -1.0) {
    fVar7 = -1.0;
  }
  *(float *)(param_1 + 0x5cf) = *(float *)((long)param_1 + 0x2e1c);
  if (*(float *)((long)param_1 + 0x2e1c) == 0.0 && (int)fVar7 == 0) {
    iVar3 = -1;
  }
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  *(undefined4 *)((long)param_1 + 0x2e7c) = *(undefined4 *)((long)param_1 + 0x2e2c);
  FUN_00b1e298(param_1 + 0x49,iVar3);
  FUN_00c90d84(param_1,param_1 + 0x5c2);
  (**(code **)(*param_1 + 0x160))(param_1);
  (**(code **)(*param_1 + 0x148))(param_1);
  FUN_00c8b224(0x438c0000,0x41700000,0x3f333333,0x3e800000,param_1 + 0x49,param_1 + 0x5bc);
  bVar2 = *(byte *)(param_1 + 0x5ac);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = param_1[0x5ad];
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pvVar6 = (void *)param_1[0x5ae];
    __s1 = pvVar6;
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)((long)param_1 + 0x2d61);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar4 = (char *)((long)param_1 + 0x2d61);
        lVar5 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar4 != *__s2) goto LAB_00c90d2c;
          pcVar4 = pcVar4 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
    }
    else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) goto LAB_00c90d4c;
    return;
  }
LAB_00c90d2c:
  if ((bVar2 & 1) == 0) {
    pvVar6 = (void *)((long)param_1 + 0x2d61);
  }
  else {
    pvVar6 = (void *)param_1[0x5ae];
  }
LAB_00c90d4c:
  FUN_00aa12a8(0x3f800000,pvVar6,0,1);
  return;
}




void FUN_00c90d84(long param_1,long param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_2 + 0x1c);
  fVar3 = *(float *)(param_2 + 0xc);
  iVar1 = 1000;
  if ((0.0 < fVar2) && (0.0 < fVar3)) {
    iVar1 = (int)(fVar2 / fVar3);
  }
  FUN_00b1cb48(*(undefined4 *)(param_1 + 0x2e70),*(undefined4 *)(param_1 + 0x2e74),param_1 + 0xdb8,0
               ,iVar1,(int)fVar2,(int)fVar2,(int)*(float *)(param_2 + 0x20),0);
  fVar2 = (float)NEON_fminnm((float)*(int *)(param_2 + 4),0x41e80000);
  if (fVar2 <= -1.0) {
    fVar2 = -1.0;
  }
  FUN_00b1d2b4(fVar3,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
               *(undefined4 *)(param_2 + 0x18),param_1 + 0xdb8,(int)fVar2);
  return;
}




void FUN_00c90e24(ulong param_1)

{
  size_t sVar1;
  size_t sVar2;
  code *pcVar3;
  byte bVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  byte *pbVar11;
  char *pcVar12;
  ushort uVar13;
  long lVar14;
  void *pvVar15;
  ushort *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  ulong local_90;
  code *pcStack_88;
  void *local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  FUN_00c8bd18();
  pcStack_88 = FUN_00c91fb0;
  local_90 = param_1;
  FUN_00f02e98(0xbf800000,&local_90,0,1);
  lVar14 = DAT_03210d00;
  uVar13 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar13 == 0xffff) {
    puVar16 = (ushort *)0x0;
  }
  else {
    puVar16 = (ushort *)(DAT_03210d00 + (ulong)uVar13 * 0x40 + 0x10);
    if (uVar13 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar13 = 0xffff;
    }
    else {
      uVar13 = *puVar16;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar13;
    *(int *)(lVar14 + 0x20014) = *(int *)(lVar14 + 0x20014) + 1;
    FUN_00efcad4(puVar16);
    *(undefined ***)puVar16 = &PTR_FUN_027c1a60;
    *(int *)(lVar14 + 0x20020) = *(int *)(lVar14 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3fc00000,puVar16);
  FUN_00f022a0(param_1,puVar16);
  uVar7 = FUN_00cb41f0(*(undefined4 *)(param_1 + 0x2e14));
  uVar8 = FUN_00cb41f0(*(undefined4 *)(param_1 + 0x2e44));
  lVar14 = DAT_03210d00;
  uVar13 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar13 == 0xffff) {
    puVar16 = (ushort *)0x0;
  }
  else {
    puVar16 = (ushort *)(DAT_03210d00 + (ulong)uVar13 * 0x40 + 0x10);
    if (uVar13 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar13 = 0xffff;
    }
    else {
      uVar13 = *puVar16;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar13;
    *(int *)(lVar14 + 0x20014) = *(int *)(lVar14 + 0x20014) + 1;
    FUN_00efeb30(puVar16);
    *(int *)(lVar14 + 0x20020) = *(int *)(lVar14 + 0x20020) + 1;
  }
  FUN_00efeba8(*(undefined4 *)(param_1 + 0x2e5c),puVar16,param_1 + 0x2e7c);
  FUN_00efcb24(puVar16,FUN_00c8d764);
  FUN_00efcac4(0x3f800000,puVar16);
  lVar14 = DAT_03210d00;
  uVar13 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar13 == 0xffff) {
    puVar17 = (ushort *)0x0;
  }
  else {
    puVar17 = (ushort *)(DAT_03210d00 + (ulong)uVar13 * 0x40 + 0x10);
    if (uVar13 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar13 = 0xffff;
    }
    else {
      uVar13 = *puVar17;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar13;
    *(int *)(lVar14 + 0x20014) = *(int *)(lVar14 + 0x20014) + 1;
    FUN_00efeb30(puVar17);
    *(int *)(lVar14 + 0x20020) = *(int *)(lVar14 + 0x20020) + 1;
  }
  FUN_00efeba8(*(undefined4 *)(param_1 + 0x2e60),puVar17,param_1 + 0x2e80);
  FUN_00efcb24(puVar17,FUN_00c8d764);
  FUN_00efcac4(0x3f800000,puVar17);
  if (*(float *)(param_1 + 0x2e5c) <= *(float *)(param_1 + 0x2e2c)) {
    pbVar11 = (byte *)(param_1 + 0x2d98);
    bVar4 = *pbVar11;
    sVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x2da0);
    }
    sVar2 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar2 = DAT_0320ffb0;
    }
    if (sVar1 == sVar2) {
      pvVar15 = *(void **)(param_1 + 0x2da8);
      if ((bVar4 & 1) == 0) {
        pvVar15 = (void *)(param_1 + 0x2d99);
      }
      pcVar10 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar10 = &DAT_0320ffa9;
      }
      if ((bVar4 & 1) == 0) {
        if (sVar1 != 0) {
          pcVar12 = (char *)(param_1 + 0x2d99);
          lVar14 = -(ulong)(bVar4 >> 1);
          do {
            if (*pcVar12 != *pcVar10) goto LAB_00c9124c;
            pcVar12 = pcVar12 + 1;
            lVar14 = lVar14 + 1;
            pcVar10 = pcVar10 + 1;
          } while (lVar14 != 0);
        }
        goto LAB_00c913a0;
      }
      if ((sVar1 == 0) || (iVar9 = memcmp(pvVar15,pcVar10,sVar1), iVar9 == 0)) goto LAB_00c913a0;
    }
LAB_00c9124c:
    lVar14 = DAT_03210d00;
    uVar13 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar13 == 0xffff) {
      puVar20 = (ushort *)0x0;
    }
    else {
      puVar20 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar13 * 0x40);
      if (uVar13 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar13 = 0xffff;
      }
      else {
        uVar13 = *puVar20;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar13;
      *(int *)(lVar14 + 0x20014) = *(int *)(lVar14 + 0x20014) + 1;
      FUN_00efc8e8(puVar20);
      puVar20[8] = 0;
      puVar20[9] = 0;
      puVar20[10] = 0;
      puVar20[0xb] = 0;
      puVar20[0xc] = 0;
      puVar20[0xd] = 0;
      puVar20[0xe] = 0;
      puVar20[0xf] = 0;
      puVar20[0x14] = 0;
      puVar20[0x10] = 0;
      puVar20[0x11] = 0;
      puVar20[0x12] = 0;
      puVar20[0x13] = 0;
      *(undefined ***)puVar20 = &PTR_FUN_027d0db0;
      *(int *)(lVar14 + 0x20020) = *(int *)(lVar14 + 0x20020) + 1;
      bVar4 = *pbVar11;
    }
    if ((bVar4 & 1) == 0) goto LAB_00c9135c;
    pbVar11 = *(byte **)(param_1 + 0x2da8);
  }
  else {
    pbVar11 = (byte *)(param_1 + 0x2db0);
    bVar4 = *pbVar11;
    sVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x2db8);
    }
    sVar2 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar2 = DAT_0320ffb0;
    }
    if (sVar1 == sVar2) {
      pvVar15 = *(void **)(param_1 + 0x2dc0);
      if ((bVar4 & 1) == 0) {
        pvVar15 = (void *)(param_1 + 0x2db1);
      }
      pcVar10 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar10 = &DAT_0320ffa9;
      }
      if ((bVar4 & 1) == 0) {
        if (sVar1 != 0) {
          pcVar12 = (char *)(param_1 + 0x2db1);
          lVar14 = -(ulong)(bVar4 >> 1);
          do {
            if (*pcVar12 != *pcVar10) goto LAB_00c911f0;
            pcVar12 = pcVar12 + 1;
            lVar14 = lVar14 + 1;
            pcVar10 = pcVar10 + 1;
          } while (lVar14 != 0);
        }
        goto LAB_00c913a0;
      }
      if ((sVar1 == 0) || (iVar9 = memcmp(pvVar15,pcVar10,sVar1), iVar9 == 0)) goto LAB_00c913a0;
    }
LAB_00c911f0:
    lVar14 = DAT_03210d00;
    uVar13 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar13 == 0xffff) {
      puVar20 = (ushort *)0x0;
    }
    else {
      puVar20 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar13 * 0x40);
      if (uVar13 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar13 = 0xffff;
      }
      else {
        uVar13 = *puVar20;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar13;
      *(int *)(lVar14 + 0x20014) = *(int *)(lVar14 + 0x20014) + 1;
      FUN_00efc8e8(puVar20);
      puVar20[8] = 0;
      puVar20[9] = 0;
      puVar20[10] = 0;
      puVar20[0xb] = 0;
      puVar20[0xc] = 0;
      puVar20[0xd] = 0;
      puVar20[0xe] = 0;
      puVar20[0xf] = 0;
      puVar20[0x14] = 0;
      puVar20[0x10] = 0;
      puVar20[0x11] = 0;
      puVar20[0x12] = 0;
      puVar20[0x13] = 0;
      *(undefined ***)puVar20 = &PTR_FUN_027d0db0;
      *(int *)(lVar14 + 0x20020) = *(int *)(lVar14 + 0x20020) + 1;
      bVar4 = *pbVar11;
    }
    if ((bVar4 & 1) == 0) {
LAB_00c9135c:
      pbVar11 = pbVar11 + 1;
    }
    else {
      pbVar11 = *(byte **)(param_1 + 0x2dc0);
    }
  }
  FUN_008fa54c(&local_90,pbVar11);
  FUN_00a99c48(puVar20,&local_90,0,0);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  FUN_00f022a0(param_1,puVar20);
LAB_00c913a0:
  lVar14 = DAT_03210d00;
  if (uVar7 == uVar8) {
    uVar13 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar13 == 0xffff) {
      puVar18 = (ushort *)0x0;
    }
    else {
      puVar18 = (ushort *)(DAT_03210d00 + (ulong)uVar13 * 0x40 + 0x10);
      if (uVar13 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar13 = 0xffff;
      }
      else {
        uVar13 = *puVar18;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar13;
      *(int *)(lVar14 + 0x20014) = *(int *)(lVar14 + 0x20014) + 1;
      FUN_00efeb30(puVar18);
      *(int *)(lVar14 + 0x20020) = *(int *)(lVar14 + 0x20020) + 1;
    }
    FUN_00efeba8(*(undefined4 *)(param_1 + 0x2e4c),puVar18,param_1 + 0x2e78);
    FUN_00efcb24(puVar18,FUN_00c8d764);
    FUN_00efcac4(0x3f800000,puVar18);
    lVar14 = DAT_03210d00;
    uVar13 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar13 == 0xffff) {
      puVar20 = (ushort *)0x0;
    }
    else {
      puVar20 = (ushort *)(DAT_03210d00 + (ulong)uVar13 * 0x40 + 0x10);
      if (uVar13 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar13 = 0xffff;
      }
      else {
        uVar13 = *puVar20;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar13;
      *(int *)(lVar14 + 0x20014) = *(int *)(lVar14 + 0x20014) + 1;
      FUN_00efcd98(puVar20);
      *(int *)(lVar14 + 0x20020) = *(int *)(lVar14 + 0x20020) + 1;
    }
    FUN_00efcea4(puVar20,puVar18,puVar16,puVar17,0);
  }
  else {
    uVar13 = *(ushort *)(DAT_03210d00 + 0x20010);
    uVar6 = 0x3f800000;
    if (uVar8 <= uVar7) {
      uVar6 = 0;
    }
    if ((ulong)uVar13 == 0xffff) {
      puVar20 = (ushort *)0x0;
    }
    else {
      puVar20 = (ushort *)(DAT_03210d00 + (ulong)uVar13 * 0x40 + 0x10);
      if (uVar13 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar13 = 0xffff;
      }
      else {
        uVar13 = *puVar20;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar13;
      *(int *)(lVar14 + 0x20014) = *(int *)(lVar14 + 0x20014) + 1;
      FUN_00efeb30(puVar20);
      *(int *)(lVar14 + 0x20020) = *(int *)(lVar14 + 0x20020) + 1;
    }
    FUN_00efeba8(uVar6,puVar20,param_1 + 0x2e78);
    FUN_00efcb24(puVar20,FUN_00c8d764);
    FUN_00efcac4(0x3f000000,puVar20);
    lVar14 = DAT_03210d00;
    uVar13 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar13 == 0xffff) {
      puVar18 = (ushort *)0x0;
    }
    else {
      puVar18 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar13 * 0x40);
      if (uVar13 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar13 = 0xffff;
      }
      else {
        uVar13 = *puVar18;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar13;
      *(int *)(lVar14 + 0x20014) = *(int *)(lVar14 + 0x20014) + 1;
      FUN_00efc8e8(puVar18);
      *(undefined ***)puVar18 = &PTR_FUN_027c27b8;
      puVar18[0xc] = 0;
      puVar18[0xd] = 0;
      puVar18[0xe] = 0;
      puVar18[0xf] = 0;
      puVar18[0x10] = 0;
      puVar18[0x11] = 0;
      puVar18[0x12] = 0;
      puVar18[0x13] = 0;
      puVar18[8] = 0;
      puVar18[9] = 0;
      puVar18[10] = 0;
      puVar18[0xb] = 0;
      *(int *)(lVar14 + 0x20020) = *(int *)(lVar14 + 0x20020) + 1;
    }
    pcVar3 = FUN_00c91a18;
    if (uVar8 <= uVar7) {
      pcVar3 = FUN_00c91b00;
    }
    *(code **)(puVar18 + 8) = pcVar3;
    *(ulong *)(puVar18 + 0x10) = param_1;
    lVar14 = DAT_03210d00;
    uVar13 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar13 == 0xffff) {
      puVar19 = (ushort *)0x0;
    }
    else {
      puVar19 = (ushort *)(DAT_03210d00 + (ulong)uVar13 * 0x40 + 0x10);
      if (uVar13 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar13 = 0xffff;
      }
      else {
        uVar13 = *puVar19;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar13;
      *(int *)(lVar14 + 0x20014) = *(int *)(lVar14 + 0x20014) + 1;
      FUN_00efeb30(puVar19);
      *(int *)(lVar14 + 0x20020) = *(int *)(lVar14 + 0x20020) + 1;
    }
    FUN_00efeba8(*(undefined4 *)(param_1 + 0x2e4c),puVar19,param_1 + 0x2e78);
    FUN_00efcb24(puVar19,FUN_00c8d764);
    FUN_00efcac4(0x3f000000,puVar19);
    lVar14 = DAT_03210d00;
    uVar13 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar13 == 0xffff) {
      puVar21 = (ushort *)0x0;
    }
    else {
      puVar21 = (ushort *)(DAT_03210d00 + (ulong)uVar13 * 0x40 + 0x10);
      if (uVar13 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar13 = 0xffff;
      }
      else {
        uVar13 = *puVar21;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar13;
      *(int *)(lVar14 + 0x20014) = *(int *)(lVar14 + 0x20014) + 1;
      FUN_00efd208(puVar21);
      *(int *)(lVar14 + 0x20020) = *(int *)(lVar14 + 0x20020) + 1;
    }
    FUN_00efd2dc(puVar21,puVar20,puVar18,puVar19,0);
    lVar14 = DAT_03210d00;
    uVar13 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar13 == 0xffff) {
      puVar20 = (ushort *)0x0;
    }
    else {
      puVar20 = (ushort *)(DAT_03210d00 + (ulong)uVar13 * 0x40 + 0x10);
      if (uVar13 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar13 = 0xffff;
      }
      else {
        uVar13 = *puVar20;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar13;
      *(int *)(lVar14 + 0x20014) = *(int *)(lVar14 + 0x20014) + 1;
      FUN_00efcd98(puVar20);
      *(int *)(lVar14 + 0x20020) = *(int *)(lVar14 + 0x20020) + 1;
    }
    FUN_00efcea4(puVar20,puVar21,puVar16,puVar17,0);
  }
  FUN_00f022a0(param_1,puVar20);
  lVar14 = DAT_03210d00;
  uVar13 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar13 == 0xffff) {
    puVar16 = (ushort *)0x0;
  }
  else {
    puVar16 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar13 * 0x40);
    if (uVar13 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar13 = 0xffff;
    }
    else {
      uVar13 = *puVar16;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar13;
    *(int *)(lVar14 + 0x20014) = *(int *)(lVar14 + 0x20014) + 1;
    FUN_00efc8e8(puVar16);
    *(undefined ***)puVar16 = &PTR_FUN_027c27b8;
    puVar16[0xc] = 0;
    puVar16[0xd] = 0;
    puVar16[0xe] = 0;
    puVar16[0xf] = 0;
    puVar16[0x10] = 0;
    puVar16[0x11] = 0;
    puVar16[0x12] = 0;
    puVar16[0x13] = 0;
    puVar16[8] = 0;
    puVar16[9] = 0;
    puVar16[10] = 0;
    puVar16[0xb] = 0;
    *(int *)(lVar14 + 0x20020) = *(int *)(lVar14 + 0x20020) + 1;
  }
  *(ulong *)(puVar16 + 0x10) = param_1;
  *(code **)(puVar16 + 8) = FUN_00c8be34;
  FUN_00f022a0(param_1,puVar16);
  lVar14 = DAT_03210d00;
  uVar13 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar13 == 0xffff) {
    puVar16 = (ushort *)0x0;
  }
  else {
    puVar16 = (ushort *)(DAT_03210d00 + (ulong)uVar13 * 0x40 + 0x10);
    if (uVar13 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar13 = 0xffff;
    }
    else {
      uVar13 = *puVar16;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar13;
    *(int *)(lVar14 + 0x20014) = *(int *)(lVar14 + 0x20014) + 1;
    FUN_00efcad4(puVar16);
    *(undefined ***)puVar16 = &PTR_FUN_027c1a60;
    *(int *)(lVar14 + 0x20020) = *(int *)(lVar14 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3fc00000,puVar16);
  FUN_00f022a0(param_1,puVar16);
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

