// functions/00915 — 16 functions
#include "libGameKindred.h"




undefined8 FUN_009155f8(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 0x18);
  puVar2 = puVar1 + 1;
  if (*(undefined1 **)(param_1 + 0x20) <= puVar2) {
    FUN_008fe7c0(param_1,1);
    puVar1 = *(undefined1 **)(param_1 + 0x18);
    puVar2 = puVar1 + 1;
  }
  *(undefined1 **)(param_1 + 0x18) = puVar2;
  *puVar1 = 0;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0091564c(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
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
    FUN_00918524(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x188;
  *(undefined1 *)(lVar4 + -0x184) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(lVar4 + -0x188) = *param_2;
  FUN_008fcdb8(lVar4 + -0x180,param_2 + 2);
  thunk_FUN_00e7051c(lVar4 + -0x168,param_2 + 8);
  thunk_FUN_00e7051c(lVar4 + -0x158,param_2 + 0xc);
  thunk_FUN_00e7051c(lVar4 + -0x148,param_2 + 0x10);
  FUN_008fcdb8(lVar4 + -0x138,param_2 + 0x14);
  thunk_FUN_00e7051c(lVar4 + -0x120,param_2 + 0x1a);
  thunk_FUN_00e7051c(lVar4 + -0x110,param_2 + 0x1e);
  FUN_008fcdb8(lVar4 + -0x100,param_2 + 0x22);
  memcpy((void *)(lVar4 + -0xe8),param_2 + 0x28,0xac);
  FUN_00918688(lVar4 + -0x38,param_2 + 0x54);
  *(undefined4 *)(lVar4 + -0x28) = param_2[0x58];
  FUN_008fcdb8(lVar4 + -0x20,param_2 + 0x5a);
  *(undefined2 *)(lVar4 + -8) = *(undefined2 *)(param_2 + 0x60);
  return;
}




void FUN_00915780(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00913cd8(param_1,param_2 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
    *puVar1 = *param_2;
    FUN_008fce60(puVar1 + 2,param_2 + 2);
    FUN_00910394(puVar1 + 8,param_2 + 8);
    FUN_00910394(puVar1 + 0xc,param_2 + 0xc);
    FUN_00910394(puVar1 + 0x10,param_2 + 0x10);
    FUN_008fce60(puVar1 + 0x14,param_2 + 0x14);
    FUN_00910394(puVar1 + 0x1a,param_2 + 0x1a);
    FUN_00910394(puVar1 + 0x1e,param_2 + 0x1e);
    FUN_008fce60(puVar1 + 0x22,param_2 + 0x22);
    memcpy(puVar1 + 0x28,param_2 + 0x28,0xac);
    FUN_0091630c(puVar1 + 0x54,param_2 + 0x54);
    puVar1[0x58] = param_2[0x58];
    FUN_008fce60(puVar1 + 0x5a,param_2 + 0x5a);
    *(undefined2 *)(puVar1 + 0x60) = *(undefined2 *)(param_2 + 0x60);
    return;
  }
  FUN_0091564c(param_1 + 0x270,param_2);
  return;
}




void FUN_0091587c(long param_1)

{
  if ((*(byte *)(param_1 + 0x168) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x178));
  }
  FUN_0090eb54(param_1 + 0x150,1);
  if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x98));
  }
  if (*(void **)(param_1 + 0x80) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(void **)(param_1 + 0x70) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}




ulong FUN_0091593c(undefined8 *param_1,undefined8 *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  long lVar14;
  void *pvVar15;
  char *pcVar16;
  uint *puVar17;
  int *piVar18;
  
  sVar5 = *(short *)*param_1;
  sVar6 = *(short *)*param_2;
  if (sVar5 != sVar6) {
    if (sVar5 == 0) {
      return 1;
    }
    if (sVar6 == 0) {
      return 0xffffffff;
    }
    if (sVar5 == 2) {
      return 1;
    }
    if (sVar6 == 2) {
      return 0xffffffff;
    }
    if (sVar5 == 4) {
      return 1;
    }
    if (sVar6 == 4) {
      return 0xffffffff;
    }
    if (sVar5 == 3) {
      return 1;
    }
    if (sVar6 == 3) {
      return 0xffffffff;
    }
  }
  lVar11 = FUN_009580b8();
  bVar4 = *(byte *)(lVar11 + 0x5490);
  sVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar1 = *(size_t *)(lVar11 + 0x5498);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar1 == sVar2) {
    pvVar15 = *(void **)(lVar11 + 0x54a0);
    if ((bVar4 & 1) == 0) {
      pvVar15 = (void *)(lVar11 + 0x5491);
    }
    pcVar16 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar16 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar13 = (char *)(lVar11 + 0x5491);
        lVar14 = -(ulong)(bVar4 >> 1);
        do {
          if (*pcVar13 != *pcVar16) goto LAB_00915a54;
          pcVar13 = pcVar13 + 1;
          lVar14 = lVar14 + 1;
          pcVar16 = pcVar16 + 1;
        } while (lVar14 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar10 = memcmp(pvVar15,pcVar16,sVar1), iVar10 != 0))
    goto LAB_00915a54;
  }
  else {
LAB_00915a54:
    puVar17 = (uint *)*param_1;
    bVar9 = false;
    bVar3 = (byte)puVar17[0x22];
    sVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar2 = *(size_t *)(puVar17 + 0x24);
    }
    if (sVar2 == sVar1) {
      pvVar15 = *(void **)(puVar17 + 0x26);
      pcVar16 = *(char **)(lVar11 + 0x54a0);
      if ((bVar3 & 1) == 0) {
        pvVar15 = (void *)((long)puVar17 + 0x89);
      }
      if ((bVar4 & 1) == 0) {
        pcVar16 = (char *)(lVar11 + 0x5491);
      }
      if ((bVar3 & 1) == 0) {
        if (sVar1 != 0) {
          pcVar13 = (char *)((long)puVar17 + 0x89);
          lVar14 = -(ulong)(bVar3 >> 1);
          do {
            if (*pcVar13 != *pcVar16) {
              bVar9 = false;
              goto LAB_00915aec;
            }
            pcVar13 = pcVar13 + 1;
            lVar14 = lVar14 + 1;
            pcVar16 = pcVar16 + 1;
          } while (lVar14 != 0);
        }
      }
      else if (sVar1 != 0) {
        iVar10 = memcmp(pvVar15,pcVar16,sVar1);
        bVar9 = iVar10 == 0;
        goto LAB_00915aec;
      }
      bVar9 = true;
    }
LAB_00915aec:
    piVar18 = (int *)*param_2;
    bVar3 = *(byte *)(piVar18 + 0x22);
    sVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar2 = *(size_t *)(piVar18 + 0x24);
    }
    if (sVar2 == sVar1) {
      pvVar15 = *(void **)(piVar18 + 0x26);
      pcVar16 = *(char **)(lVar11 + 0x54a0);
      if ((bVar3 & 1) == 0) {
        pvVar15 = (void *)((long)piVar18 + 0x89);
      }
      if ((bVar4 & 1) == 0) {
        pcVar16 = (char *)(lVar11 + 0x5491);
      }
      if ((bVar3 & 1) == 0) {
        if (sVar1 != 0) {
          pcVar13 = (char *)((long)piVar18 + 0x89);
          lVar11 = -(ulong)(bVar3 >> 1);
          do {
            if (*pcVar13 != *pcVar16) goto LAB_00915b5c;
            pcVar13 = pcVar13 + 1;
            lVar11 = lVar11 + 1;
            pcVar16 = pcVar16 + 1;
          } while (lVar11 != 0);
        }
LAB_00915b88:
        if (!bVar9) goto LAB_00915e0c;
        bVar8 = true;
      }
      else {
        if (sVar1 == 0) goto LAB_00915b88;
        iVar10 = memcmp(pvVar15,pcVar16,sVar1);
        bVar8 = iVar10 == 0;
        if ((bool)(bVar9 ^ bVar8)) goto LAB_00915e0c;
      }
      if ((bool)(bVar9 & bVar8)) {
        uVar7 = *puVar17 >> 0x1f;
        if (uVar7 == -(*piVar18 >> 0x1f)) {
          puVar17 = puVar17 + 8;
          piVar18 = piVar18 + 8;
          goto LAB_00915d90;
        }
        goto LAB_00915e1c;
      }
    }
    else {
LAB_00915b5c:
      if (bVar9) goto LAB_00915e0c;
    }
  }
  lVar11 = FUN_009580b8();
  bVar4 = *(byte *)(lVar11 + 0x5478);
  sVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar1 = *(size_t *)(lVar11 + 0x5480);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar1 == sVar2) {
    pvVar15 = *(void **)(lVar11 + 0x5488);
    if ((bVar4 & 1) == 0) {
      pvVar15 = (void *)(lVar11 + 0x5479);
    }
    pcVar16 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar16 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar13 = (char *)(lVar11 + 0x5479);
        lVar14 = -(ulong)(bVar4 >> 1);
        do {
          if (*pcVar13 != *pcVar16) goto LAB_00915c60;
          pcVar13 = pcVar13 + 1;
          lVar14 = lVar14 + 1;
          pcVar16 = pcVar16 + 1;
        } while (lVar14 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar10 = memcmp(pvVar15,pcVar16,sVar1), iVar10 != 0))
    goto LAB_00915c60;
  }
  else {
LAB_00915c60:
    puVar17 = (uint *)*param_1;
    bVar9 = false;
    bVar3 = (byte)puVar17[0x14];
    sVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar2 = *(size_t *)(puVar17 + 0x16);
    }
    if (sVar2 == sVar1) {
      pvVar15 = *(void **)(puVar17 + 0x18);
      pcVar16 = *(char **)(lVar11 + 0x5488);
      if ((bVar3 & 1) == 0) {
        pvVar15 = (void *)((long)puVar17 + 0x51);
      }
      if ((bVar4 & 1) == 0) {
        pcVar16 = (char *)(lVar11 + 0x5479);
      }
      if ((bVar3 & 1) == 0) {
        if (sVar1 != 0) {
          pcVar13 = (char *)((long)puVar17 + 0x51);
          lVar14 = -(ulong)(bVar3 >> 1);
          do {
            if (*pcVar13 != *pcVar16) {
              bVar9 = false;
              goto LAB_00915cf8;
            }
            pcVar13 = pcVar13 + 1;
            lVar14 = lVar14 + 1;
            pcVar16 = pcVar16 + 1;
          } while (lVar14 != 0);
        }
      }
      else if (sVar1 != 0) {
        iVar10 = memcmp(pvVar15,pcVar16,sVar1);
        bVar9 = iVar10 == 0;
        goto LAB_00915cf8;
      }
      bVar9 = true;
    }
LAB_00915cf8:
    piVar18 = (int *)*param_2;
    bVar3 = *(byte *)(piVar18 + 0x14);
    sVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar2 = *(size_t *)(piVar18 + 0x16);
    }
    if (sVar2 == sVar1) {
      pvVar15 = *(void **)(piVar18 + 0x18);
      pcVar16 = *(char **)(lVar11 + 0x5488);
      if ((bVar3 & 1) == 0) {
        pvVar15 = (void *)((long)piVar18 + 0x51);
      }
      if ((bVar4 & 1) == 0) {
        pcVar16 = (char *)(lVar11 + 0x5479);
      }
      if ((bVar3 & 1) == 0) {
        if (sVar1 != 0) {
          pcVar13 = (char *)((long)piVar18 + 0x51);
          lVar11 = -(ulong)(bVar3 >> 1);
          do {
            if (*pcVar13 != *pcVar16) goto LAB_00915d68;
            pcVar13 = pcVar13 + 1;
            lVar11 = lVar11 + 1;
            pcVar16 = pcVar16 + 1;
          } while (lVar11 != 0);
        }
LAB_00915de4:
        if (!bVar9) {
LAB_00915e0c:
          uVar7 = 1;
          if (bVar9) {
            uVar7 = 0xffffffff;
          }
          return (ulong)uVar7;
        }
      }
      else {
        if (sVar1 == 0) goto LAB_00915de4;
        iVar10 = memcmp(pvVar15,pcVar16,sVar1);
        if ((bool)(bVar9 ^ iVar10 == 0)) goto LAB_00915e0c;
        if (!bVar9) goto LAB_00915d6c;
      }
      uVar7 = *puVar17 >> 0x1f;
      if (uVar7 == -(*piVar18 >> 0x1f)) {
        puVar17 = puVar17 + 8;
        piVar18 = piVar18 + 8;
        goto LAB_00915d90;
      }
      goto LAB_00915e1c;
    }
LAB_00915d68:
    if (bVar9) goto LAB_00915e0c;
  }
LAB_00915d6c:
  uVar7 = *(uint *)*param_1 >> 0x1f;
  if (uVar7 == -(*(int *)*param_2 >> 0x1f)) {
    puVar17 = (uint *)*param_1 + 8;
    piVar18 = (int *)*param_2 + 8;
LAB_00915d90:
    uVar12 = FUN_00e70d10(puVar17,piVar18,1,0xffffffff);
    return uVar12;
  }
LAB_00915e1c:
  return (ulong)((uVar7 << 1 ^ 2) - 1);
}




void FUN_00915e50(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x300);
  FUN_009115ec();
  DAT_02c09210 = pvVar1;
  return;
}




void FUN_00915e80(void)

{
  if (DAT_02c09210 != (long *)0x0) {
    (**(code **)(*DAT_02c09210 + 8))();
  }
  DAT_02c09210 = (long *)0x0;
  return;
}




void FUN_00915eb4(void)

{
  FUN_00911a60(DAT_02c09210);
  return;
}




void FUN_00915ec0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar2 = 0;
  puVar1 = &DAT_02c091f8;
  if (DAT_02c091f8 != 0) {
    puVar1 = DAT_02c09200;
  }
  *puVar1 = puVar2;
  DAT_02c09200 = puVar2;
  DAT_02c09208 = DAT_02c09208 + 1;
  return;
}




void FUN_00915ef0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (DAT_02c091f8 != 0) {
    lVar2 = DAT_02c091f8 + -8;
    while (lVar2 != 0) {
      if (lVar2 == param_1) {
        FUN_00915f34(&DAT_02c091f8);
        return;
      }
      plVar1 = (long *)(lVar2 + 8);
      lVar2 = 0;
      if (*plVar1 != 0) {
        lVar2 = *plVar1 + -8;
      }
    }
  }
  return;
}




void FUN_00915f34(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 8);
  plVar2 = (long *)*param_1;
  if (plVar1 == (long *)*param_1) {
    plVar3 = (long *)0x0;
    *param_1 = *plVar1;
  }
  else {
    do {
      plVar3 = plVar2;
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != plVar1);
    *plVar3 = *plVar1;
  }
  if (plVar1 == (long *)param_1[1]) {
    param_1[1] = (long)plVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_00915f90(byte param_1)

{
  long lVar1;
  
  lVar1 = DAT_02c09210 + 0x30;
  *(byte *)(DAT_02c09210 + 0x89) = param_1 & 1;
  FUN_009658c8(lVar1);
  return;
}




void FUN_00915fac(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = 0x40000000;
  if ((param_1 & 1) == 0) {
    uVar2 = 0x41a00000;
  }
  lVar1 = DAT_02c09210 + 0x30;
  *(undefined4 *)(DAT_02c09210 + 0x2f0) = uVar2;
  FUN_009658d4(lVar1);
  return;
}




void FUN_00915fd0(byte param_1)

{
  *(byte *)(DAT_02c09210 + 0x88) = param_1 & 1;
  return;
}




undefined4 FUN_00915fe4(void)

{
  return *(undefined4 *)(DAT_02c09210 + 0x2f4);
}




undefined4 FUN_00915ff4(void)

{
  return *(undefined4 *)(DAT_02c09210 + 0x270);
}

