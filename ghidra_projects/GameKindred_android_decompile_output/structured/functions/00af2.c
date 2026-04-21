// functions/00af2 — 9 functions
#include "libGameKindred.h"




void FUN_00af2024(undefined8 param_1)

{
  FUN_00af2048();
  FUN_00af21a4(param_1);
  return;
}




void FUN_00af2048(long param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 local_f8 [2];
  undefined1 auStack_f0 [16];
  byte local_e0 [16];
  void *local_d0;
  undefined8 local_c8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0 [2];
  void *local_90;
  undefined8 local_88;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  *(int *)(param_1 + 0x1ae8) = *(int *)(param_1 + 0x1ae8) + 1;
  fVar4 = (float)NEON_ucvtf(*param_2);
  iVar3 = (int)(fVar4 / 6.0);
  if (iVar3 != 0) {
    iVar2 = 0;
    do {
      local_90 = (void *)0x0;
      uStack_a8 = 0;
      local_b0 = 0;
      local_a0[1] = 0;
      local_a0[0] = 0;
      FUN_00caefd4(&local_b0,param_2,iVar2,6);
      local_f8[0] = *(undefined4 *)(param_1 + 0x1ae8);
      FUN_00af4108(auStack_f0,&local_b0);
      FUN_008fcdb8(local_e0,local_a0);
      local_c8 = local_88;
      FUN_00af34b0(param_1 + 0x1a18,local_f8);
      if ((local_e0[0] & 1) != 0) {
        operator_delete(local_d0);
      }
      FUN_00af405c(auStack_f0,1);
      if ((local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
      FUN_00af405c(&local_b0,1);
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + 6;
    } while (iVar3 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af21a4(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  char *__s2;
  char *pcVar4;
  long lVar5;
  void *__s1;
  undefined8 uVar6;
  
  bVar2 = *(byte *)(param_1 + 0x1ad0);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x1ad8);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x1ae0);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x1ad1);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar4 = (char *)(param_1 + 0x1ad1);
        lVar5 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar4 != *__s2) goto LAB_00af22c4;
          pcVar4 = pcVar4 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
    }
    else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) goto LAB_00af22c4;
    if (*(int *)(param_1 + 0x1a18) != 0) {
      lVar5 = *(long *)(param_1 + 0x1a20);
      FUN_00af42ec(param_1 + 0x1a38,lVar5 + 8);
      FUN_008fce60(param_1 + 0x1a48,lVar5 + 0x18);
      *(undefined8 *)(param_1 + 0x1a6d) = *(undefined8 *)(lVar5 + 0x3d);
      uVar6 = *(undefined8 *)(lVar5 + 0x30);
      *(undefined8 *)(param_1 + 0x1a68) = *(undefined8 *)(lVar5 + 0x38);
      *(undefined8 *)(param_1 + 0x1a60) = uVar6;
      FUN_00af3564(param_1,param_1 + 0x1a38);
      FUN_00af4660(param_1 + 0x1a18,*(long *)(param_1 + 0x1a20),*(long *)(param_1 + 0x1a20) + 0x48);
      return;
    }
  }
LAB_00af22c4:
  if (*(int *)(param_1 + 0x1a18) == 0) {
    lVar5 = FUN_009b8d90();
    FUN_00cd7450(*(undefined8 *)(lVar5 + 0xc6e0),param_1 + 0x1a38);
    return;
  }
  return;
}




void FUN_00af2300(undefined8 param_1,long param_2,float *param_3,undefined8 *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ulong uVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  ulong local_b0 [2];
  void *local_a0;
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(param_2 + 0x1ac0) = *param_4;
  FUN_00f01980();
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
    FUN_00efcad4(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_027c1a60;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcac4(param_1,puVar7);
  FUN_00f022a0(param_2,puVar7);
  lVar3 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar5 * 0x40);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efc8e8(puVar7);
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    puVar7[0x14] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = 0;
    puVar7[0x12] = 0;
    puVar7[0x13] = 0;
    *(undefined ***)puVar7 = &PTR_FUN_027d0db0;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_008fa54c(local_b0,"build://Sounds/Cards/cardbox_open_spit_out_cards.mp3");
  FUN_00a99c48(puVar7,local_b0,0,0);
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  FUN_00f022a0(param_2,puVar7);
  if (*(int *)(param_2 + 0x1a28) != 0) {
    uVar6 = 0;
    uVar12 = NEON_fmov(0x3f800000,4);
    do {
      lVar3 = (**(code **)(**(long **)(*(long *)(param_2 + 0x1a30) + uVar6 * 8) + 0x20))();
      FUN_00f01980();
      *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xffffffef;
      if ((*(float *)(lVar3 + 0x48) != 0.01) || (*(float *)(lVar3 + 0x4c) != 0.01)) {
        *(undefined8 *)(lVar3 + 0x48) = 0x3c23d70a3c23d70a;
        FUN_0091ada4(lVar3);
      }
      fVar11 = *param_3;
      if ((*(float *)(lVar3 + 0x40) != fVar11) ||
         (fVar11 = param_3[1], *(float *)(lVar3 + 0x44) != fVar11)) {
        *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)param_3;
        FUN_0091ada4(lVar3);
      }
      lVar4 = DAT_03210d00;
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
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_00efcad4(puVar7);
        *(undefined ***)puVar7 = &PTR_FUN_027c1a60;
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
      FUN_00efcac4((float)(uVar6 & 0xffffffff) * 0.1 + (float)param_1,puVar7);
      FUN_00f022a0(lVar3,puVar7);
      lVar4 = DAT_03210d00;
      uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar5 == 0xffff) {
        puVar7 = (ushort *)0x0;
      }
      else {
        puVar7 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar5 * 0x40);
        if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar7;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_00efc8e8(puVar7);
        puVar7[8] = 0;
        puVar7[9] = 0;
        puVar7[10] = 0;
        puVar7[0xb] = 0;
        puVar7[0xc] = 0;
        puVar7[0xd] = 0;
        puVar7[0xe] = 0;
        puVar7[0xf] = 0;
        puVar7[0x14] = 0;
        puVar7[0x10] = 0;
        puVar7[0x11] = 0;
        puVar7[0x12] = 0;
        puVar7[0x13] = 0;
        *(undefined ***)puVar7 = &PTR_FUN_027d0db0;
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
      FUN_008fa54c(local_b0,"build://Sounds/Cards/my_cards_flip.mp3");
      FUN_00a99c48(puVar7,local_b0,0,0);
      if ((local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
      FUN_00f022a0(lVar3,puVar7);
      lVar4 = DAT_03210d00;
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
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_00efdc08(puVar7);
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
      fVar10 = (float)FUN_00af1a2c(param_2,uVar6 & 0xffffffff);
      local_b0[0] = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x1ac0) >> 0x20) + fVar11,
                             (float)*(undefined8 *)(param_2 + 0x1ac0) + fVar10);
      FUN_00efdc50(puVar7,local_b0);
      FUN_00efcac4(0x3f000000,puVar7);
      FUN_00efcb24(puVar7,FUN_00af2e0c);
      lVar4 = DAT_03210d00;
      uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar5 == 0xffff) {
        puVar8 = (ushort *)0x0;
      }
      else {
        puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
        if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar8;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_00efe530(puVar8);
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
      local_b0[0] = uVar12;
      FUN_00efe58c(puVar8,local_b0);
      FUN_00efcac4(0x3f000000,puVar8);
      FUN_00efcb24(puVar8,FUN_009a7608);
      lVar4 = DAT_03210d00;
      uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar5 == 0xffff) {
        puVar9 = (ushort *)0x0;
      }
      else {
        puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
        if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar9;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_00efcd98(puVar9);
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
      FUN_00efcea4(puVar9,puVar7,puVar8,0);
      FUN_00f022a0(lVar3,puVar9);
      lVar4 = DAT_03210d00;
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
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_00efca2c(puVar7);
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
      FUN_00efca7c(puVar7,1);
      FUN_00f022a0(lVar3,puVar7);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_2 + 0x1a28));
  }
  lVar3 = param_2 + 0x1700;
  FUN_00f01980(lVar3);
  if ((*(uint *)(param_2 + 0x1784) & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x1784) = *(uint *)(param_2 + 0x1784) & 0xffff807f;
    FUN_0091ada4(lVar3);
  }
  lVar4 = DAT_03210d00;
  if (*(char *)(param_2 + 0x1a74) != '\0') {
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
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efcad4(puVar7);
      *(undefined ***)puVar7 = &PTR_FUN_027c1a60;
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efcac4(param_1,puVar7);
    FUN_00f022a0(lVar3,puVar7);
    lVar4 = DAT_03210d00;
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
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efdd74(puVar7);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efddc4(0x3f333333,puVar7);
    FUN_00efcac4(0x3f000000,puVar7);
    FUN_00efcb24(puVar7,FUN_009a7608);
    FUN_00f022a0(lVar3,puVar7);
  }
  uVar1 = *(uint *)(param_2 + 0x10c);
  lVar3 = param_2 + 0x88;
  *(uint *)(param_2 + 0x10c) = uVar1 & 0xfffffffb;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x10c) = uVar1 & 0xffff807b;
    FUN_0091ada4(lVar3);
  }
  uVar6 = FUN_00969254();
  if (((uVar6 & 1) == 0) || (lVar4 = FUN_00969248(), *(int *)(lVar4 + 0x38) < 1)) {
    lVar4 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    fVar11 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0x1a28));
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
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efcad4(puVar7);
      *(undefined ***)puVar7 = &PTR_FUN_027c1a60;
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efcac4(fVar11 * 0.1 + (float)param_1 + 0.5,puVar7);
    FUN_00f022a0(lVar3,puVar7);
    lVar4 = DAT_03210d00;
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
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efc8e8(puVar7);
      *(undefined ***)puVar7 = &PTR_FUN_02825100;
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00f022a0(lVar3,puVar7);
    lVar4 = DAT_03210d00;
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
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efdd74(puVar7);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3f000000,puVar7);
    FUN_00f022a0(lVar3,puVar7);
  }
  *(uint *)(param_2 + 0x192c) = *(uint *)(param_2 + 0x192c) | 0x10;
  if (*(long *)(lVar2 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00af2e0c(float param_1,float param_2,float param_3,float param_4)

{
  param_1 = param_1 / (param_4 * 0.5);
  if (1.0 <= param_1) {
    param_1 = param_1 + -2.0;
    param_1 = param_3 * 0.5 * (param_1 * param_1 * param_1 * param_1 * param_1 + 2.0);
  }
  else {
    param_1 = param_1 * param_1 * param_1 * param_1 * param_3 * 0.5 * param_1;
  }
  return param_1 + param_2;
}




void FUN_00af2e70(long param_1)

{
  *(undefined1 *)(param_1 + 0x1aec) = 1;
  return;
}




void FUN_00af2e80(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_009580b8();
  FUN_009658c8(lVar1 + 0x18);
  uVar2 = FUN_0093c588();
  if ((uVar2 & 1) == 0) {
    lVar1 = FUN_00969248();
    if (*(int *)(lVar1 + 0x38) == 4) goto LAB_00af2ec0;
  }
  uVar3 = FUN_00969248();
  FUN_0096875c(uVar3,1);
LAB_00af2ec0:
  FUN_00969248();
  FUN_00968ab4();
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x1874) = *(uint *)(param_1 + 0x1874) & 0xffffffef;
    FUN_00af21a4(param_1);
    return;
  }
  return;
}




void FUN_00af2ef4(long param_1)

{
  *(uint *)(param_1 + 0x1874) = *(uint *)(param_1 + 0x1874) & 0xffffffef;
  FUN_00af21a4();
  return;
}




void FUN_00af2f04(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ulong uVar9;
  undefined8 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  *(uint *)(param_1 + 0x192c) = *(uint *)(param_1 + 0x192c) & 0xffffffef;
  *(uint *)(param_1 + 0x1874) = *(uint *)(param_1 + 0x1874) & 0xffffffef;
  *(uint *)(param_1 + 0x1784) = *(uint *)(param_1 + 0x1784) & 0xfffffffb;
  lVar1 = param_1 + 0x1700;
  if (*(int *)(param_1 + 0x1a28) != 0) {
    uVar9 = 0;
    do {
      lVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x1a30) + uVar9 * 8) + 0x20))();
      FUN_00f01980();
      *(uint *)(lVar4 + 0x84) = *(uint *)(lVar4 + 0x84) & 0xffffffef;
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
        FUN_00efdc08(puVar6);
        *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
      }
      FUN_00efdc50(puVar6,param_2);
      FUN_00efcac4(0x3f400000,puVar6);
      FUN_00efcb24(puVar6,FUN_009a816c);
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
        FUN_00efe530(puVar7);
        *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
      }
      local_80 = 0;
      FUN_00efe58c(puVar7,&local_80);
      FUN_00efcac4(0x3f400000,puVar7);
      FUN_00efcb24(puVar7,FUN_009a816c);
      lVar3 = DAT_03210d00;
      uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar5 == 0xffff) {
        puVar8 = (ushort *)0x0;
      }
      else {
        puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
        if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar8;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
        *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
        FUN_00efcd98(puVar8);
        *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
      }
      FUN_00efcea4(puVar8,puVar6,puVar7,0);
      lVar3 = DAT_03210d00;
      uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar5 == 0xffff) {
        puVar6 = (ushort *)0x0;
      }
      else {
        puVar6 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar5 * 0x40);
        if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar6;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
        *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
        FUN_00efc8e8(puVar6);
        puVar6[0xc] = 0;
        puVar6[0xd] = 0;
        puVar6[0xe] = 0;
        puVar6[0xf] = 0;
        puVar6[0x10] = 0;
        puVar6[0x11] = 0;
        puVar6[0x12] = 0;
        puVar6[0x13] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[10] = 0;
        puVar6[0xb] = 0;
        *(undefined ***)puVar6 = &PTR_FUN_027c27b8;
        *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
      }
      *(code **)(puVar6 + 8) = FUN_00af2e70;
      *(long *)(puVar6 + 0x10) = param_1;
      FUN_00f02308(lVar4,puVar8,puVar6,0);
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x1a28));
  }
  FUN_00f01980(lVar1);
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
    FUN_00efdd74(puVar6);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar6);
  FUN_00efcac4(0x3f400000,puVar6);
  FUN_00efcb24(puVar6,FUN_009a7608);
  FUN_00f022a0(lVar1,puVar6);
  lVar3 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar5 * 0x40);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_027c27b8;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  *(code **)(puVar6 + 8) = FUN_00af2e80;
  *(long *)(puVar6 + 0x10) = param_1;
  FUN_00f022a0(lVar1,puVar6);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

