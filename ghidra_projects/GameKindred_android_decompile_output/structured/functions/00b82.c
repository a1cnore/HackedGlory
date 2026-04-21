// functions/00b82 — 7 functions
#include "libGameKindred.h"




void FUN_00b82038(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  byte local_88 [16];
  void *local_78;
  byte local_70 [16];
  void *local_60;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00b84ac8();
  plVar4 = (long *)((long)param_1 + 0xdd87);
  if (*(char *)plVar4 == '\0') {
    plVar4 = param_1 + 0x1bb1;
    if ((char)*plVar4 == '\0') {
      plVar4 = (long *)((long)param_1 + 0xdd89);
      if (*(char *)plVar4 == '\0') {
        plVar4 = (long *)((long)param_1 + 0xdd8a);
        if (*(char *)plVar4 == '\0') {
          plVar4 = (long *)((long)param_1 + 0xdd8b);
          if (*(char *)plVar4 == '\0') {
            FUN_00f01980(param_1);
            FUN_00b80b2c(param_1);
            (**(code **)(*param_1 + 0x138))(0x3f000000,param_1,0,4,1);
            FUN_00f048e0(auStack_58,DAT_031341c4,0);
            FUN_00f04760(param_1,auStack_58,1);
            if (*(char *)((long)param_1 + 0xdd8d) != '\0') {
              uVar2 = FUN_009b8d90();
              FUN_008fa54c(local_70,"vainglory://Profile");
              FUN_008fa54c(local_88,"Ascension");
              FUN_009bb46c(uVar2,local_70,local_88,0,0);
              if ((local_88[0] & 1) != 0) {
                operator_delete(local_78);
              }
              if ((local_70[0] & 1) != 0) {
                operator_delete(local_60);
              }
            }
            lVar3 = FUN_009b8d90();
            FUN_00cd732c(*(undefined8 *)(lVar3 + 0xc6e0),param_1 + 0x1b75);
            uVar2 = 0;
            goto LAB_00b82100;
          }
          FUN_00b82264(param_1);
        }
        else {
          FUN_00b86838(param_1);
        }
      }
      else {
        FUN_00b86344(param_1);
      }
    }
    else {
      FUN_00b85910(param_1);
    }
  }
  else {
    FUN_00b8530c(param_1);
  }
  *(char *)plVar4 = '\0';
  (**(code **)(*param_1 + 0x150))(param_1);
  uVar2 = 1;
LAB_00b82100:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




void FUN_00b8220c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00b82038();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00f04900(param_2);
  return;
}




void FUN_00b82240(undefined8 param_1)

{
  FUN_00b80b2c();
  FUN_00b82264(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b82264(undefined1 param_1 [16],float param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ushort *puVar3;
  size_t __n;
  size_t sVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  void *pvVar9;
  ulong uVar10;
  undefined8 uVar11;
  char *__s2;
  uint uVar12;
  long lVar13;
  char *pcVar14;
  ushort uVar15;
  long lVar16;
  uint uVar17;
  ushort *puVar18;
  ushort *puVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  ulong local_90;
  void *local_88;
  void *local_80;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  plVar2 = (long *)(param_3 + 0xdac8);
  lVar8 = *plVar2;
  if (lVar8 == 0) {
    pvVar9 = operator_new(0x3358);
    FUN_00b87c70(pvVar9,param_3,*(undefined4 *)(param_3 + 0xdd48),*(undefined4 *)(param_3 + 0xdd4c))
    ;
    *plVar2 = (long)pvVar9;
    FUN_00acd9ec((long)pvVar9 + 0x88);
    lVar8 = *plVar2;
    fVar24 = *(float *)(param_3 + 0x634);
    plVar1 = (long *)(lVar8 + 0x88);
    FUN_00f0d4e0(param_3 + 0x5f0);
    fVar24 = fVar24 + param_2 * 0.5 + 20.0 + 305.0;
    if ((*(float *)(lVar8 + 200) != 0.0) || (*(float *)(lVar8 + 0xcc) != fVar24)) {
      *(undefined4 *)(lVar8 + 200) = 0;
      *(float *)(lVar8 + 0xcc) = fVar24;
      FUN_0091ada4(plVar1);
    }
    local_90 = 0x3f0000003f000000;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_90);
    lVar8 = *plVar2;
  }
  uVar10 = FUN_00f02540(lVar8);
  if ((uVar10 & 1) == 0) {
    FUN_00f023ec(param_3 + 0x180,*plVar2,1);
  }
  lVar8 = param_3 + 0x5f0;
  uVar10 = FUN_00f02540(lVar8);
  if ((uVar10 & 1) != 0) {
    FUN_00f01a4c(lVar8,1);
  }
  FUN_00f023ec(param_3 + 0x180,lVar8,1);
  lVar13 = *plVar2;
  if ((*(float *)(lVar13 + 0xd0) != 1.0) || (*(float *)(lVar13 + 0xd4) != 1.0)) {
    uVar23 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(lVar13 + 0xd0) = uVar23;
    FUN_0091ada4(lVar13 + 0x88);
    lVar13 = *plVar2;
  }
  *(uint *)(lVar13 + 0x10c) = *(uint *)(lVar13 + 0x10c) | 4;
  bVar5 = *(byte *)(param_3 + 0xdd30);
  lVar13 = *plVar2;
  __n = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    __n = *(size_t *)(param_3 + 0xdd38);
  }
  sVar4 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar4 = DAT_0320ffb0;
  }
  if (__n == sVar4) {
    pvVar9 = *(void **)(param_3 + 0xdd40);
    if ((bVar5 & 1) == 0) {
      pvVar9 = (void *)(param_3 + 0xdd31);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar5 & 1) == 0) {
      if (__n != 0) {
        pcVar14 = (char *)(param_3 + 0xdd31);
        lVar16 = -(ulong)(bVar5 >> 1);
        do {
          if (*pcVar14 != *__s2) goto LAB_00b82470;
          pcVar14 = pcVar14 + 1;
          lVar16 = lVar16 + 1;
          __s2 = __s2 + 1;
        } while (lVar16 != 0);
      }
    }
    else if (__n != 0) {
      iVar7 = memcmp(pvVar9,__s2,__n);
      uVar12 = (uint)(iVar7 != 0);
      goto LAB_00b82490;
    }
    uVar12 = 0;
  }
  else {
LAB_00b82470:
    uVar12 = 1;
  }
LAB_00b82490:
  uVar17 = *(uint *)(lVar13 + 0x9d4);
  *(uint *)(lVar13 + 0x9d4) = uVar17 & 0xfffffff8 | uVar17 & 3 | uVar12 << 2;
  lVar13 = *plVar2;
  FUN_00e70570(&local_90,(byte *)(param_3 + 0xdd30));
  FUN_00ac5fdc(lVar13 + 0x950,&local_90);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  uVar20 = FUN_00ac6090(*plVar2 + 0x950);
  *(undefined4 *)(param_3 + 0xdd80) = uVar20;
  lVar13 = *plVar2;
  if ((*(uint *)(lVar13 + 0x9d4) & 0x7f80) != 0) {
    *(uint *)(lVar13 + 0x9d4) = *(uint *)(lVar13 + 0x9d4) & 0xffff807f;
    FUN_0091ada4(lVar13 + 0x950);
  }
  lVar13 = DAT_03210d00;
  uVar15 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar15 == 0xffff) {
    puVar19 = (ushort *)0x0;
  }
  else {
    puVar19 = (ushort *)(DAT_03210d00 + (ulong)uVar15 * 0x40 + 0x10);
    if (uVar15 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar15 = 0xffff;
    }
    else {
      uVar15 = *puVar19;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar15;
    *(int *)(lVar13 + 0x20014) = *(int *)(lVar13 + 0x20014) + 1;
    FUN_00efc8e8(puVar19);
    *(undefined ***)puVar19 = &PTR_FUN_02825100;
    *(int *)(lVar13 + 0x20020) = *(int *)(lVar13 + 0x20020) + 1;
  }
  FUN_00f022a0(*plVar2 + 0x950,puVar19);
  uVar23 = FUN_00a250a8();
  FUN_00efddc4(0x3f800000);
  FUN_00efcac4(*(undefined4 *)(param_3 + 0xdd78),uVar23);
  FUN_00efcb24(uVar23,FUN_009a7608);
  FUN_00f022a0(*plVar2 + 0x950,uVar23);
  uVar12 = *(uint *)(*plVar2 + 0x84);
  if ((uVar12 & 0x7f80) != 0) {
    *(uint *)(*plVar2 + 0x84) = uVar12 & 0xffff807f;
    FUN_0091ada4();
  }
  lVar13 = DAT_03210d00;
  uVar15 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar15 == 0xffff) {
    puVar19 = (ushort *)0x0;
  }
  else {
    puVar19 = (ushort *)(DAT_03210d00 + (ulong)uVar15 * 0x40 + 0x10);
    if (uVar15 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar15 = 0xffff;
    }
    else {
      uVar15 = *puVar19;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar15;
    *(int *)(lVar13 + 0x20014) = *(int *)(lVar13 + 0x20014) + 1;
    FUN_00efc8e8(puVar19);
    *(undefined ***)puVar19 = &PTR_FUN_02825100;
    *(int *)(lVar13 + 0x20020) = *(int *)(lVar13 + 0x20020) + 1;
  }
  FUN_00f022a0(*plVar2,puVar19);
  uVar23 = FUN_00a250a8();
  FUN_00efddc4(0x3f800000);
  FUN_00efcac4(*(undefined4 *)(param_3 + 0xdd78),uVar23);
  FUN_00efcb24(uVar23,FUN_009a7608);
  FUN_00f022a0(*plVar2,uVar23);
  FUN_00f01980(lVar8);
  *(uint *)(param_3 + 0x674) = *(uint *)(param_3 + 0x674) | 4;
  FUN_00e70570(&local_90,param_3 + 0xdd18);
  FUN_00f0d75c(lVar8,&local_90);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((~*(uint *)(param_3 + 0x674) & 0x7f80) != 0) {
    *(uint *)(param_3 + 0x674) = *(uint *)(param_3 + 0x674) | 0x7f80;
    FUN_0091ada4(lVar8);
  }
  lVar13 = *plVar2;
  fVar25 = *(float *)(param_3 + 0x630);
  plVar1 = (long *)(lVar13 + 0x950);
  fVar24 = (float)FUN_00f01c20(lVar8);
  fVar21 = (float)FUN_00f01c54(*plVar2 + 0x950,0,0,1,1);
  fVar22 = *(float *)(param_3 + 0x634);
  fVar24 = ((fVar25 - fVar24 * 0.5) - fVar21 * 0.5) + -30.0;
  if ((*(float *)(lVar13 + 0x990) != fVar24) || (*(float *)(lVar13 + 0x994) != fVar22)) {
    *(float *)(lVar13 + 0x990) = fVar24;
    *(float *)(lVar13 + 0x994) = fVar22;
    FUN_0091ada4(plVar1);
  }
  local_90 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_90);
  if ((*(float *)(param_3 + 0xbc38) != 1.0) || (*(float *)(param_3 + 0xbc3c) != 1.0)) {
    uVar23 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_3 + 0xbc38) = uVar23;
    FUN_0091ada4(param_3 + 0xbbf0);
  }
  *(uint *)(param_3 + 0xda1c) = *(uint *)(param_3 + 0xda1c) & 0xfffffffb;
  *(uint *)(param_3 + 0xd8ec) = *(uint *)(param_3 + 0xd8ec) & 0xfffffffb;
  uVar12 = *(uint *)(param_3 + 0x5dec);
  lVar8 = param_3 + 0x5d68;
  if ((uVar12 & 0x7f80) != 0) {
    *(uint *)(param_3 + 0x5dec) = uVar12 & 0xffff807f;
    FUN_0091ada4(lVar8);
  }
  FUN_00b09454(lVar8,0);
  FUN_00f01980(lVar8);
  uVar23 = FUN_00efed6c(0x40000000);
  FUN_00f022a0(lVar8,uVar23);
  uVar23 = FUN_00efee28(0x3f800000,0x3f800000,0);
  FUN_00f022a0(lVar8,uVar23);
  lVar13 = DAT_03210d00;
  uVar15 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar15 == 0xffff) {
    puVar19 = (ushort *)0x0;
  }
  else {
    puVar19 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar15 * 0x40);
    if (uVar15 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar15 = 0xffff;
    }
    else {
      uVar15 = *puVar19;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar15;
    *(int *)(lVar13 + 0x20014) = *(int *)(lVar13 + 0x20014) + 1;
    FUN_00efc8e8(puVar19);
    *(undefined ***)puVar19 = &PTR_FUN_027c27b8;
    puVar19[0xc] = 0;
    puVar19[0xd] = 0;
    puVar19[0xe] = 0;
    puVar19[0xf] = 0;
    puVar19[0x10] = 0;
    puVar19[0x11] = 0;
    puVar19[0x12] = 0;
    puVar19[0x13] = 0;
    puVar19[8] = 0;
    puVar19[9] = 0;
    puVar19[10] = 0;
    puVar19[0xb] = 0;
    *(int *)(lVar13 + 0x20020) = *(int *)(lVar13 + 0x20020) + 1;
  }
  *(code **)(puVar19 + 8) = FUN_00b87494;
  *(long *)(puVar19 + 0x10) = param_3;
  FUN_00f022a0(lVar8,puVar19);
  uVar23 = FUN_00efed6c(0x3f800000);
  FUN_00f022a0(*plVar2,uVar23);
  FUN_008fa1d0();
  lVar8 = DAT_03210d00;
  uVar15 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar15 == 0xffff) {
    puVar19 = (ushort *)0x0;
  }
  else {
    puVar19 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar15 * 0x40);
    if (uVar15 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar15 = 0xffff;
    }
    else {
      uVar15 = *puVar19;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar15;
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_00efc8e8(puVar19);
    puVar19[8] = 0;
    puVar19[9] = 0;
    puVar19[10] = 0;
    puVar19[0xb] = 0;
    puVar19[0xc] = 0;
    puVar19[0xd] = 0;
    puVar19[0xe] = 0;
    puVar19[0xf] = 0;
    puVar19[0x14] = 0;
    puVar19[0x10] = 0;
    puVar19[0x11] = 0;
    puVar19[0x12] = 0;
    puVar19[0x13] = 0;
    *(undefined ***)puVar19 = &PTR_FUN_027d0db0;
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
  }
  FUN_008fa54c(&local_90,"build://Sounds/UI.assetbundle/spoils_of_war.mp3");
  FUN_00a99c48(puVar19,&local_90,0,0);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  FUN_00f022a0(*plVar2,puVar19);
  lVar8 = *plVar2;
  *(undefined8 *)(lVar8 + 0x334c) = 1;
  *(undefined4 *)(lVar8 + 0x3354) = 1;
  uVar12 = *(uint *)(param_3 + 0xdd48);
  uVar17 = (uint)((ulong)uVar12 * 0xcccccccd >> 0x20);
  fVar24 = (float)(uVar12 / 10 + 2);
  if (fVar24 <= 6.0) {
    fVar24 = 6.0;
  }
  *(float *)(lVar8 + 0x3340) = fVar24;
  lVar13 = DAT_03210d00;
  uVar15 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar15 == 0xffff) {
    puVar19 = (ushort *)0x0;
  }
  else {
    puVar19 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar15 * 0x40);
    if (uVar15 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar15 = 0xffff;
    }
    else {
      uVar15 = *puVar19;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar15;
    *(int *)(lVar13 + 0x20014) = *(int *)(lVar13 + 0x20014) + 1;
    FUN_00efc8e8(puVar19);
    *(undefined ***)puVar19 = &PTR_FUN_027c27b8;
    puVar19[0xc] = 0;
    puVar19[0xd] = 0;
    puVar19[0xe] = 0;
    puVar19[0xf] = 0;
    puVar19[0x10] = 0;
    puVar19[0x11] = 0;
    puVar19[0x12] = 0;
    puVar19[0x13] = 0;
    puVar19[8] = 0;
    puVar19[9] = 0;
    puVar19[10] = 0;
    puVar19[0xb] = 0;
    *(int *)(lVar13 + 0x20020) = *(int *)(lVar13 + 0x20020) + 1;
    lVar8 = *plVar2;
    fVar24 = *(float *)(lVar8 + 0x3340);
    uVar17 = (uint)((ulong)*(uint *)(param_3 + 0xdd48) * 0xcccccccd >> 0x20);
  }
  *(long *)(puVar19 + 0x10) = lVar8;
  iVar7 = 0xb;
  if ((uVar17 >> 3) + 1 < 0xb) {
    iVar7 = (uVar17 >> 3) + 1;
  }
  *(code **)(puVar19 + 8) = FUN_00b874c8;
  uVar23 = FUN_00eff848(fVar24,iVar7,puVar19);
  uVar11 = FUN_00efed6c(0x40e00000);
  lVar8 = DAT_03210d00;
  uVar15 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar15 == 0xffff) {
    _DAT_00000020 = *plVar2;
    _DAT_00000010 = thunk_FUN_008fa36c;
    puVar18 = (ushort *)0x0;
    puVar19 = (ushort *)0x0;
  }
  else {
    puVar18 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar15 * 0x40);
    if (uVar15 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar15 = 0xffff;
    }
    else {
      uVar15 = *puVar18;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar15;
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_00efc8e8(puVar18);
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
    *(undefined ***)puVar18 = &PTR_FUN_027c27b8;
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
    lVar8 = DAT_03210d00;
    lVar13 = *plVar2;
    puVar3 = (ushort *)(DAT_03210d00 + 0x20010);
    uVar15 = *puVar3;
    *(code **)(puVar18 + 8) = thunk_FUN_008fa36c;
    *(long *)(puVar18 + 0x10) = lVar13;
    if ((ulong)uVar15 == 0xffff) {
      puVar19 = (ushort *)0x0;
    }
    else {
      puVar19 = (ushort *)(lVar8 + (ulong)uVar15 * 0x40 + 0x10);
      if (uVar15 == *(ushort *)(lVar8 + 0x20012)) {
        uVar15 = 0xffff;
      }
      else {
        uVar15 = *puVar19;
      }
      *puVar3 = uVar15;
      *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
      FUN_00efd208(puVar19);
      *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
    }
  }
  FUN_00efd2dc(puVar19,uVar11,puVar18,0);
  FUN_00efd3b4(puVar19,0);
  lVar8 = DAT_03210d00;
  uVar15 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar15 == 0xffff) {
    puVar18 = (ushort *)0x0;
  }
  else {
    puVar18 = (ushort *)(DAT_03210d00 + (ulong)uVar15 * 0x40 + 0x10);
    if (uVar15 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar15 = 0xffff;
    }
    else {
      uVar15 = *puVar18;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar15;
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_00efcd98(puVar18);
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar18,uVar23,puVar19,0);
  FUN_00f022a0(*plVar2,puVar18);
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b82de4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined **local_140;
  undefined1 auStack_138 [40];
  long local_110;
  undefined8 local_f0;
  void *local_e8;
  byte local_e0;
  void *local_d0;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_98;
  ulong local_90;
  void *local_88;
  byte local_80;
  undefined7 uStack_7f;
  void *local_70;
  undefined4 local_68;
  undefined8 local_64;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  FUN_00b26098(&local_140);
  uVar2 = FUN_00e6ce7c("MENU_SPOILS_OF_WAR_ASCENSION_PIPS_TOOLTIP_TITLE",0);
  thunk_FUN_00e7051c(&local_90,uVar2);
  FUN_008fcdb8(&local_80,&DAT_0320ffa8);
  local_68 = 0;
  local_64 = 0x41a00000;
  FUN_009c82b4(auStack_138,&local_90);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  uVar2 = FUN_00e6ce7c("MENU_SPOILS_OF_WAR_ASCENSION_PIPS_TOOLTIP",0);
  thunk_FUN_00e7051c(&local_90,uVar2);
  FUN_008fcdb8(&local_80,&DAT_0320ffa8);
  local_68 = 1;
  local_64 = 0x41a00000;
  FUN_009c82b4(auStack_138,&local_90);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  local_110 = param_1 + 0x3af0;
  local_98 = 2;
  local_b0 = 0x3e4ccccd;
  uVar3 = FUN_0092ea9c();
  local_ac = 0x44548000;
  if ((uVar3 & 1) == 0) {
    local_ac = 0x44480000;
  }
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(&local_90,"spoilsSeasonProgressionPipInfo");
  FUN_009badc0(uVar2,&local_90,&local_140);
  if ((local_90 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_7f,local_80));
  }
  local_140 = &PTR_FUN_027de7f0;
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
    local_f0 = 0;
    local_e8 = (void *)0x0;
  }
  FUN_009c8464(auStack_138,1);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b82de4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined **ppuStack_140;
  undefined1 auStack_138 [40];
  long lStack_110;
  undefined8 uStack_f0;
  void *pvStack_e8;
  byte bStack_e0;
  void *pvStack_d0;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_98;
  ulong uStack_90;
  void *pvStack_88;
  byte bStack_80;
  undefined7 uStack_7f;
  void *pvStack_70;
  undefined4 uStack_68;
  undefined8 uStack_64;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  FUN_00b26098(&ppuStack_140);
  uVar2 = FUN_00e6ce7c("MENU_SPOILS_OF_WAR_ASCENSION_PIPS_TOOLTIP_TITLE",0);
  thunk_FUN_00e7051c(&uStack_90,uVar2);
  FUN_008fcdb8(&bStack_80,&DAT_0320ffa8);
  uStack_68 = 0;
  uStack_64 = 0x41a00000;
  FUN_009c82b4(auStack_138,&uStack_90);
  if ((bStack_80 & 1) != 0) {
    operator_delete(pvStack_70);
  }
  if (pvStack_88 != (void *)0x0) {
    operator_delete__(pvStack_88);
    uStack_90 = 0;
    pvStack_88 = (void *)0x0;
  }
  uVar2 = FUN_00e6ce7c("MENU_SPOILS_OF_WAR_ASCENSION_PIPS_TOOLTIP",0);
  thunk_FUN_00e7051c(&uStack_90,uVar2);
  FUN_008fcdb8(&bStack_80,&DAT_0320ffa8);
  uStack_68 = 1;
  uStack_64 = 0x41a00000;
  FUN_009c82b4(auStack_138,&uStack_90);
  if ((bStack_80 & 1) != 0) {
    operator_delete(pvStack_70);
  }
  if (pvStack_88 != (void *)0x0) {
    operator_delete__(pvStack_88);
    uStack_90 = 0;
    pvStack_88 = (void *)0x0;
  }
  lStack_110 = param_1 + 0x3af0;
  uStack_98 = 2;
  uStack_b0 = 0x3e4ccccd;
  uVar3 = FUN_0092ea9c();
  uStack_ac = 0x44548000;
  if ((uVar3 & 1) == 0) {
    uStack_ac = 0x44480000;
  }
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(&uStack_90,"spoilsSeasonProgressionPipInfo");
  FUN_009badc0(uVar2,&uStack_90,&ppuStack_140);
  if ((uStack_90 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_7f,bStack_80));
  }
  ppuStack_140 = &PTR_FUN_027de7f0;
  if ((bStack_e0 & 1) != 0) {
    operator_delete(pvStack_d0);
  }
  if (pvStack_e8 != (void *)0x0) {
    operator_delete__(pvStack_e8);
    uStack_f0 = 0;
    pvStack_e8 = (void *)0x0;
  }
  FUN_009c8464(auStack_138,1);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b82fe4(void)

{
  ulong uVar1;
  undefined8 in_x3;
  
  uVar1 = FUN_00b82038();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00f04900(in_x3);
  return;
}

