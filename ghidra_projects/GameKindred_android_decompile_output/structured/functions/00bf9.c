// functions/00bf9 — 18 functions
#include "libGameKindred.h"




void FUN_00bf90dc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027f3f78;
  param_1[2] = &PTR_FUN_027f3ff0;
  param_1[5] = &PTR_FUN_027f4020;
  FUN_0090de68();
  if (*(char *)(param_1 + 0x14) != '\0') {
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      lVar1 = (long)param_1 + 0x41;
    }
    else {
      lVar1 = param_1[10];
    }
    FUN_0090de08(lVar1,param_1);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      lVar1 = (long)param_1 + 0x41;
    }
    else {
      lVar1 = param_1[10];
    }
    FUN_0090de28(lVar1,param_1);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      lVar1 = (long)param_1 + 0x41;
    }
    else {
      lVar1 = param_1[10];
    }
    FUN_0090de48(lVar1,param_1);
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    operator_delete((void *)param_1[0x13]);
  }
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    operator_delete((void *)param_1[0x10]);
  }
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    operator_delete((void *)param_1[0xd]);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  FUN_00948d58(param_1 + 5);
  FUN_00e835e0(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027f43b8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf9204(long param_1)

{
  FUN_00bf90dc(param_1 + -0x10);
  return;
}




void FUN_00bf920c(long param_1)

{
  FUN_00bf90dc(param_1 + -0x28);
  return;
}




void FUN_00bf9214(void *param_1)

{
  FUN_00bf90dc();
  operator_delete(param_1);
  return;
}




void FUN_00bf9238(long param_1)

{
  FUN_00bf90dc((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bf9260(long param_1)

{
  FUN_00bf90dc((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00bf9288(long param_1)

{
  FUN_00c7c850(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bf9290(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  byte *pbVar10;
  char *pcVar11;
  byte *__s2;
  void *pvVar12;
  char *pcVar13;
  byte *pbVar14;
  size_t sVar15;
  size_t sVar16;
  undefined8 uVar17;
  byte bVar18;
  char *pcVar19;
  byte local_98 [16];
  void *local_88;
  byte local_80 [8];
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FUN_0090dab8(local_98,&DAT_01b9349c);
  FUN_008fcdb8(local_80,local_98);
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  pbVar14 = (byte *)(param_1 + 0x40);
  bVar18 = *pbVar14;
  uVar5 = (ulong)(bVar18 >> 1);
  sVar15 = uVar5;
  if ((bVar18 & 1) != 0) {
    sVar15 = *(size_t *)(param_1 + 0x48);
  }
  sVar16 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar16 = DAT_0320ffb0;
  }
  if (sVar15 == sVar16) {
    pcVar19 = *(char **)(param_1 + 0x50);
    pcVar13 = pcVar19;
    if ((bVar18 & 1) == 0) {
      pcVar13 = (char *)(param_1 + 0x41);
    }
    pcVar11 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar11 = &DAT_0320ffa9;
    }
    if ((bVar18 & 1) == 0) {
      pcVar19 = (char *)(param_1 + 0x41);
      if (sVar15 != 0) {
        lVar9 = -uVar5;
        do {
          if (*pcVar19 != *pcVar11) goto LAB_00bf9398;
          pcVar19 = pcVar19 + 1;
          lVar9 = lVar9 + 1;
          pcVar11 = pcVar11 + 1;
        } while (lVar9 != 0);
        goto LAB_00bf9480;
      }
    }
    else if ((sVar15 != 0) && (iVar8 = memcmp(pcVar13,pcVar11,sVar15), iVar8 != 0))
    goto LAB_00bf9398;
  }
  else {
LAB_00bf9398:
    if ((param_6 & 1) != 0) {
      sVar16 = (ulong)(local_80[0] >> 1);
      if ((local_80[0] & 1) != 0) {
        sVar16 = local_78;
      }
      if (sVar16 == sVar15) {
        pcVar13 = *(char **)(param_1 + 0x50);
        pcVar19 = (char *)((ulong)local_80 | 1);
        pcVar11 = pcVar19;
        if ((local_80[0] & 1) != 0) {
          pcVar11 = local_70;
        }
        if ((bVar18 & 1) == 0) {
          pcVar13 = (char *)(param_1 + 0x41);
        }
        if ((local_80[0] & 1) == 0) {
          if (sVar15 != 0) {
            lVar9 = -(ulong)(local_80[0] >> 1);
            do {
              if (*pcVar19 != *pcVar13) goto LAB_00bf9418;
              pcVar19 = pcVar19 + 1;
              lVar9 = lVar9 + 1;
              pcVar13 = pcVar13 + 1;
            } while (lVar9 != 0);
          }
          goto LAB_00bf9918;
        }
        if ((sVar15 == 0) || (iVar8 = memcmp(pcVar11,pcVar13,sVar15), iVar8 == 0))
        goto LAB_00bf9918;
      }
    }
LAB_00bf9418:
    bVar3 = *param_2;
    sVar16 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar16 = *(size_t *)(param_2 + 8);
    }
    if (sVar15 == sVar16) {
      pcVar19 = *(char **)(param_1 + 0x50);
      __s2 = *(byte **)(param_2 + 0x10);
      pcVar13 = pcVar19;
      if ((bVar18 & 1) == 0) {
        pcVar13 = (char *)(param_1 + 0x41);
      }
      if ((bVar3 & 1) == 0) {
        __s2 = param_2 + 1;
      }
      if ((bVar18 & 1) == 0) {
        if (sVar15 != 0) {
          pbVar10 = (byte *)(param_1 + 0x41);
          lVar9 = -uVar5;
          do {
            if (*pbVar10 != *__s2) goto LAB_00bf9480;
            pbVar10 = pbVar10 + 1;
            lVar9 = lVar9 + 1;
            __s2 = __s2 + 1;
          } while (lVar9 != 0);
        }
        goto LAB_00bf9918;
      }
      if ((sVar15 == 0) || (iVar8 = memcmp(pcVar13,__s2,sVar15), iVar8 == 0)) goto LAB_00bf9918;
    }
    else {
LAB_00bf9480:
      if ((bVar18 & 1) == 0) {
        pcVar19 = (char *)(param_1 + 0x41);
      }
      else {
        pcVar19 = *(char **)(param_1 + 0x50);
      }
    }
  }
  FUN_0090de08(pcVar19,param_1);
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    lVar9 = param_1 + 0x41;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x50);
  }
  FUN_0090de28(lVar9,param_1);
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    lVar9 = param_1 + 0x41;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x50);
  }
  FUN_0090de48(lVar9,param_1);
  FUN_008fce60(pbVar14,param_2);
  lVar9 = param_1 + 0x58;
  FUN_008fce60(lVar9,param_3);
  FUN_008fce60(param_1 + 0x70,param_4);
  pcVar19 = (char *)(param_1 + 0x88);
  FUN_008fce60(pcVar19,param_5);
  *(byte *)(param_1 + 0xa0) = param_6 & 1;
  if ((param_6 & 1) == 0) {
    FUN_00bf9960(*(undefined8 *)(param_1 + 8),lVar9);
    bVar7 = false;
    bVar18 = DAT_0320ffa8 & 1;
    sVar15 = (size_t)(DAT_0320ffa8 >> 1);
    sVar16 = DAT_0320ffb0;
  }
  else {
    FUN_008fce60(pbVar14,local_80);
    FUN_00bf9960(*(undefined8 *)(param_1 + 8),lVar9);
    sVar16 = DAT_0320ffb0;
    bVar3 = *(byte *)(param_1 + 0x88);
    sVar15 = (size_t)(DAT_0320ffa8 >> 1);
    sVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar2 = *(size_t *)(param_1 + 0x90);
    }
    sVar1 = sVar15;
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    bVar18 = DAT_0320ffa8 & 1;
    if (sVar2 == sVar1) {
      pvVar12 = *(void **)(param_1 + 0x98);
      if ((bVar3 & 1) == 0) {
        pvVar12 = (void *)(param_1 + 0x89);
      }
      pcVar13 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar13 = &DAT_0320ffa9;
      }
      if ((bVar3 & 1) == 0) {
        if (sVar2 != 0) {
          lVar9 = -(ulong)(bVar3 >> 1);
          pcVar11 = pcVar19;
          do {
            pcVar11 = pcVar11 + 1;
            if (*pcVar11 != *pcVar13) goto LAB_00bf95f8;
            lVar9 = lVar9 + 1;
            pcVar13 = pcVar13 + 1;
          } while (lVar9 != 0);
        }
      }
      else if (sVar2 != 0) {
        iVar8 = memcmp(pvVar12,pcVar13,sVar2);
        bVar7 = iVar8 != 0;
        goto LAB_00bf9618;
      }
      bVar7 = false;
    }
    else {
LAB_00bf95f8:
      bVar7 = true;
    }
  }
LAB_00bf9618:
  bVar3 = *(byte *)(param_1 + 0x70);
  uVar17 = *(undefined8 *)(param_1 + 8);
  sVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x78);
  }
  if (bVar18 != 0) {
    sVar15 = sVar16;
  }
  if (sVar2 == sVar15) {
    pvVar12 = *(void **)(param_1 + 0x80);
    if ((bVar3 & 1) == 0) {
      pvVar12 = (void *)(param_1 + 0x71);
    }
    pcVar13 = DAT_0320ffb8;
    if (bVar18 == 0) {
      pcVar13 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar11 = (char *)(param_1 + 0x71);
        lVar9 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar11 != *pcVar13) goto LAB_00bf968c;
          pcVar11 = pcVar11 + 1;
          lVar9 = lVar9 + 1;
          pcVar13 = pcVar13 + 1;
        } while (lVar9 != 0);
      }
    }
    else if (sVar2 != 0) {
      iVar8 = memcmp(pvVar12,pcVar13,sVar2);
      bVar6 = iVar8 != 0;
      goto LAB_00bf96ac;
    }
    bVar6 = false;
  }
  else {
LAB_00bf968c:
    bVar6 = true;
  }
LAB_00bf96ac:
  FUN_00c7ca5c(uVar17,bVar6,*(undefined1 *)(param_1 + 0xa1),bVar7);
  sVar15 = DAT_0320ffb0;
  bVar18 = DAT_0320ffa8;
  if ((param_6 & 1) == 0) {
    bVar7 = false;
    sVar16 = (size_t)(DAT_0320ffa8 >> 1);
  }
  else {
    bVar3 = *(byte *)(param_1 + 0x70);
    sVar16 = (size_t)(DAT_0320ffa8 >> 1);
    sVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar2 = *(size_t *)(param_1 + 0x78);
    }
    sVar1 = sVar16;
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (sVar2 == sVar1) {
      pvVar12 = *(void **)(param_1 + 0x80);
      if ((bVar3 & 1) == 0) {
        pvVar12 = (void *)(param_1 + 0x71);
      }
      pcVar13 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar13 = &DAT_0320ffa9;
      }
      if ((bVar3 & 1) == 0) {
        if (sVar2 != 0) {
          pcVar11 = (char *)(param_1 + 0x71);
          lVar9 = -(ulong)(bVar3 >> 1);
          do {
            if (*pcVar11 != *pcVar13) goto LAB_00bf9758;
            pcVar11 = pcVar11 + 1;
            lVar9 = lVar9 + 1;
            pcVar13 = pcVar13 + 1;
          } while (lVar9 != 0);
        }
      }
      else if (sVar2 != 0) {
        iVar8 = memcmp(pvVar12,pcVar13,sVar2);
        bVar7 = iVar8 != 0;
        goto LAB_00bf9778;
      }
      bVar7 = false;
    }
    else {
LAB_00bf9758:
      bVar7 = true;
    }
  }
LAB_00bf9778:
  bVar3 = *(byte *)(param_1 + 0x88);
  uVar17 = *(undefined8 *)(param_1 + 8);
  sVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x90);
  }
  if ((bVar18 & 1) != 0) {
    sVar16 = sVar15;
  }
  if (sVar2 == sVar16) {
    pvVar12 = *(void **)(param_1 + 0x98);
    if ((bVar3 & 1) == 0) {
      pvVar12 = (void *)(param_1 + 0x89);
    }
    pcVar13 = DAT_0320ffb8;
    if ((bVar18 & 1) == 0) {
      pcVar13 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar2 != 0) {
        lVar9 = -(ulong)(bVar3 >> 1);
        do {
          pcVar19 = pcVar19 + 1;
          if (*pcVar19 != *pcVar13) goto LAB_00bf97fc;
          lVar9 = lVar9 + 1;
          pcVar13 = pcVar13 + 1;
        } while (lVar9 != 0);
      }
    }
    else if (sVar2 != 0) {
      iVar8 = memcmp(pvVar12,pcVar13,sVar2);
      bVar6 = iVar8 != 0;
      goto LAB_00bf9820;
    }
    bVar6 = false;
  }
  else {
LAB_00bf97fc:
    bVar6 = true;
  }
LAB_00bf9820:
  FUN_00c7cb44(uVar17,bVar6,*(undefined1 *)(param_1 + 0xa2),bVar7);
  lVar9 = FUN_00916034(param_2);
  if (lVar9 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(int *)(lVar9 + 0xac) == 3;
  }
  FUN_00c7cc30(*(undefined8 *)(param_1 + 8),bVar7);
  *(uint *)(*(long *)(param_1 + 8) + 0x202c) =
       *(uint *)(*(long *)(param_1 + 8) + 0x202c) & 0xfffffffb |
       ((uint)*(byte *)(param_1 + 0xa0) << 2 ^ 4) & 0xfc;
  FUN_00b27e8c(*(long *)(param_1 + 8) + 0x3dd8);
  if (*(char *)(param_1 + 0xa0) != '\0') {
    bVar18 = *pbVar14;
    if ((bVar18 & 1) == 0) {
      lVar9 = param_1 + 0x41;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x50);
    }
    if (DAT_02c091c0 != 0) {
      FUN_00bfb654(DAT_02c091c0,lVar9,param_1);
      bVar18 = *(byte *)(param_1 + 0x40);
    }
    if ((bVar18 & 1) == 0) {
      lVar9 = param_1 + 0x41;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x50);
    }
    if (DAT_02c091c0 != 0) {
      FUN_00bfb6e8(DAT_02c091c0,lVar9,param_1);
      bVar18 = *(byte *)(param_1 + 0x40);
    }
    if ((bVar18 & 1) == 0) {
      lVar9 = param_1 + 0x41;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x50);
    }
    if (DAT_02c091c0 != 0) {
      FUN_00bfb898(DAT_02c091c0,lVar9,param_1);
    }
  }
  FUN_00c7ca1c(*(undefined8 *)(param_1 + 8));
  FUN_00bf99c8(param_1);
LAB_00bf9918:
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bf9960(long param_1)

{
  long lVar1;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00e70570(&local_38);
  FUN_00f0d75c(param_1 + 0x6d8,&local_38);
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




void FUN_00bf99c8(long param_1)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  uint *puVar4;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  byte local_c0;
  void *local_b0;
  byte local_a8;
  void *local_98;
  byte local_90;
  void *local_80;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    lVar3 = param_1 + 0x41;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x50);
  }
  if (*(char *)(param_1 + 0xa0) == '\0') {
    FUN_0090d8d8(lVar3,200);
  }
  else {
    puVar2 = (uint *)FUN_0090ddb0();
    if (puVar2 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = puVar2;
      if (*puVar2 == 0) goto LAB_00bf9ae0;
    }
    lVar3 = *(long *)(puVar2 + 2);
    do {
      FUN_009e2da4(&local_e0,lVar3);
      FUN_00bf9b3c(param_1,&local_e0);
      FUN_00910328(auStack_78,local_70);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      if (local_c8 != (void *)0x0) {
        operator_delete__(local_c8);
        local_d0 = 0;
        local_c8 = (void *)0x0;
      }
      if (local_d8 != (void *)0x0) {
        operator_delete__(local_d8);
        local_e0 = 0;
        local_d8 = (void *)0x0;
      }
      lVar3 = lVar3 + 0x88;
    } while (lVar3 != *(long *)(puVar2 + 2) + (ulong)*puVar4 * 0x88);
  }
LAB_00bf9ae0:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf9b10(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    lVar1 = param_1 + 0x41;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x50);
  }
  FUN_0090dca4(lVar1,param_2,*(char *)(param_1 + 0xa0) == '\0');
  return;
}




void FUN_00bf9b3c(long param_1,long param_2)

{
  void *pvVar1;
  void *pvVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  byte local_a0 [16];
  void *local_90;
  ulong local_88 [2];
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  bVar3 = *(byte *)(param_2 + 0x50);
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 == 0) {
LAB_00bf9b94:
      uVar7 = 0;
      goto LAB_00bf9ba4;
    }
  }
  else if (*(long *)(param_2 + 0x58) == 0) goto LAB_00bf9b94;
  if ((bVar3 & 1) == 0) {
    lVar5 = param_2 + 0x51;
  }
  else {
    lVar5 = *(long *)(param_2 + 0x60);
  }
  uVar7 = FUN_00e6bdf4(lVar5);
LAB_00bf9ba4:
  printf("%f",uVar7);
  FUN_008fcdb8(local_70,&DAT_0320ffa8);
  uVar7 = thunk_FUN_00ec6548();
  FUN_008fa54c(local_88,uVar7);
  lVar5 = FUN_009e2b04(param_2 + 0x68,local_88);
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (param_2 + 0x70 != lVar5) {
    uVar7 = thunk_FUN_00ec6548();
    FUN_008fa54c(local_a0,uVar7);
    plVar6 = (long *)FUN_0091092c(param_2 + 0x68,local_88,local_a0);
    uVar7 = FUN_00ec3f08(*plVar6 + 0x38);
    FUN_008fa54c(local_88,uVar7);
    FUN_008fce60(local_70,local_88);
    if (((byte)local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = (void *)0x0;
  FUN_00e70a24(param_2 + 0x10,local_88);
  pvVar1 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar1 = local_60;
  }
  if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
    lVar5 = param_2 + 0x51;
  }
  else {
    lVar5 = *(long *)(param_2 + 0x60);
  }
  pvVar2 = (void *)((ulong)local_88 | 1);
  if ((local_88[0] & 1) != 0) {
    pvVar2 = local_78;
  }
  FUN_00c7c8a8(*(undefined8 *)(param_1 + 8),pvVar1,lVar5,pvVar2,*(undefined1 *)(param_2 + 0x82));
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf9d18(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  int extraout_w8;
  long lVar7;
  char *pcVar8;
  long lVar9;
  void *__s1;
  ulong uVar10;
  char *__s2;
  long lVar11;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  piVar6 = (int *)FUN_0090dde0();
  iVar5 = extraout_w8;
  if ((piVar6 == (int *)0x0) || (iVar5 = *piVar6, iVar5 != 0)) {
    lVar9 = *(long *)(piVar6 + 2);
    uVar10 = (ulong)(iVar5 - 1);
    lVar11 = lVar9 + uVar10 * 0x88;
    if (*(char *)(lVar11 + 0x82) == '\0') {
      FUN_00e70570(&local_48,param_1 + 0x58);
      uVar10 = FUN_00e70b34(lVar11,&local_48);
      if (local_40 != (void *)0x0) {
        operator_delete__(local_40);
        local_48 = 0;
        local_40 = (void *)0x0;
      }
      if ((uVar10 & 1) == 0) goto LAB_00bf9e48;
    }
    else {
      lVar7 = lVar9 + uVar10 * 0x88;
      bVar2 = *(byte *)(lVar7 + 0x20);
      bVar3 = *(byte *)(param_1 + 0x40);
      __n = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(lVar7 + 0x28);
      }
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(param_1 + 0x48);
      }
      if (__n != sVar1) goto LAB_00bf9e48;
      __s1 = *(void **)(lVar9 + uVar10 * 0x88 + 0x30);
      __s2 = *(char **)(param_1 + 0x50);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(lVar7 + 0x21);
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (char *)(param_1 + 0x41);
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar8 = (char *)(lVar7 + 0x21);
          lVar9 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar8 != *__s2) goto LAB_00bf9e48;
            pcVar8 = pcVar8 + 1;
            lVar9 = lVar9 + 1;
            __s2 = __s2 + 1;
          } while (lVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00bf9e48;
    }
    FUN_00bf9b3c(param_1,lVar11);
  }
LAB_00bf9e48:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bf9e70(long param_1)

{
  long lVar1;
  int *piVar2;
  int extraout_w8;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    lVar1 = param_1 + 0x41;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x50);
  }
  piVar2 = (int *)FUN_0090ddb0(lVar1);
  iVar3 = extraout_w8;
  if ((piVar2 != (int *)0x0) && (iVar3 = *piVar2, iVar3 == 0)) {
    return;
  }
  FUN_00bf9b3c(param_1,*(long *)(piVar2 + 2) + (ulong)(iVar3 - 1) * 0x88);
  return;
}




void FUN_00bf9ed4(long param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong local_70;
  void *local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  thunk_FUN_00e7051c(&local_48,&DAT_03210450);
  if (*(char *)(param_2 + 0x30) == '\0') {
    if (*(char *)(param_2 + 0x31) == '\0') goto LAB_00bf9f44;
    pcVar3 = "MENU_CHAT_PLAYER_HAS_LEFT_MESSAGE";
  }
  else {
    pcVar3 = "MENU_CHAT_PLAYER_HAS_JOINED_MESSAGE";
  }
  uVar4 = FUN_00e6ce7c(pcVar3,0);
  FUN_00910394(&local_48,uVar4);
LAB_00bf9f44:
  FUN_00e70570(&local_58,param_2);
  FUN_00e705c8(&local_70,"[PLAYER_HANDLE]");
  FUN_00e71248(&local_48,0,&local_70,&local_58);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  FUN_008fcdb8(&local_70,&DAT_0320ffa8);
  FUN_00e70a24(&local_48,&local_70);
  pvVar1 = (void *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    pvVar1 = local_60;
  }
  if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
    param_2 = param_2 + 0x19;
  }
  else {
    param_2 = *(long *)(param_2 + 0x28);
  }
  FUN_00c7c970(*(undefined8 *)(param_1 + 8),pvVar1,param_2);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bf9d18(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  int extraout_w8;
  long lVar7;
  char *pcVar8;
  long lVar9;
  void *__s1;
  ulong uVar10;
  char *__s2;
  long lVar11;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar4 = tpidr_el0;
  lStack_38 = *(long *)(lVar4 + 0x28);
  piVar6 = (int *)FUN_0090dde0();
  iVar5 = extraout_w8;
  if ((piVar6 == (int *)0x0) || (iVar5 = *piVar6, iVar5 != 0)) {
    lVar9 = *(long *)(piVar6 + 2);
    uVar10 = (ulong)(iVar5 - 1);
    lVar11 = lVar9 + uVar10 * 0x88;
    if (*(char *)(lVar11 + 0x82) == '\0') {
      FUN_00e70570(&uStack_48,param_1 + 0x58);
      uVar10 = FUN_00e70b34(lVar11,&uStack_48);
      if (pvStack_40 != (void *)0x0) {
        operator_delete__(pvStack_40);
        uStack_48 = 0;
        pvStack_40 = (void *)0x0;
      }
      if ((uVar10 & 1) == 0) goto LAB_00bf9e48;
    }
    else {
      lVar7 = lVar9 + uVar10 * 0x88;
      bVar2 = *(byte *)(lVar7 + 0x20);
      bVar3 = *(byte *)(param_1 + 0x40);
      __n = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(lVar7 + 0x28);
      }
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(param_1 + 0x48);
      }
      if (__n != sVar1) goto LAB_00bf9e48;
      __s1 = *(void **)(lVar9 + uVar10 * 0x88 + 0x30);
      __s2 = *(char **)(param_1 + 0x50);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(lVar7 + 0x21);
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (char *)(param_1 + 0x41);
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar8 = (char *)(lVar7 + 0x21);
          lVar9 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar8 != *__s2) goto LAB_00bf9e48;
            pcVar8 = pcVar8 + 1;
            lVar9 = lVar9 + 1;
            __s2 = __s2 + 1;
          } while (lVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00bf9e48;
    }
    FUN_00bf9b3c(param_1,lVar11);
  }
LAB_00bf9e48:
  if (*(long *)(lVar4 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00bf9e70(long param_1)

{
  long lVar1;
  int *piVar2;
  int extraout_w8;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    lVar1 = param_1 + 0x41;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x50);
  }
  piVar2 = (int *)FUN_0090ddb0(lVar1);
  iVar3 = extraout_w8;
  if ((piVar2 != (int *)0x0) && (iVar3 = *piVar2, iVar3 == 0)) {
    return;
  }
  FUN_00bf9b3c(param_1,*(long *)(piVar2 + 2) + (ulong)(iVar3 - 1) * 0x88);
  return;
}




void thunk_FUN_00bf9ed4(long param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uStack_70;
  void *pvStack_68;
  void *pvStack_60;
  undefined8 uStack_58;
  void *pvStack_50;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  thunk_FUN_00e7051c(&uStack_48,&DAT_03210450);
  if (*(char *)(param_2 + 0x30) == '\0') {
    if (*(char *)(param_2 + 0x31) == '\0') goto LAB_00bf9f44;
    pcVar3 = "MENU_CHAT_PLAYER_HAS_LEFT_MESSAGE";
  }
  else {
    pcVar3 = "MENU_CHAT_PLAYER_HAS_JOINED_MESSAGE";
  }
  uVar4 = FUN_00e6ce7c(pcVar3,0);
  FUN_00910394(&uStack_48,uVar4);
LAB_00bf9f44:
  FUN_00e70570(&uStack_58,param_2);
  FUN_00e705c8(&uStack_70,"[PLAYER_HANDLE]");
  FUN_00e71248(&uStack_48,0,&uStack_70,&uStack_58);
  if (pvStack_68 != (void *)0x0) {
    operator_delete__(pvStack_68);
    uStack_70 = 0;
    pvStack_68 = (void *)0x0;
  }
  FUN_008fcdb8(&uStack_70,&DAT_0320ffa8);
  FUN_00e70a24(&uStack_48,&uStack_70);
  pvVar1 = (void *)((ulong)&uStack_70 | 1);
  if ((uStack_70 & 1) != 0) {
    pvVar1 = pvStack_60;
  }
  if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
    param_2 = param_2 + 0x19;
  }
  else {
    param_2 = *(long *)(param_2 + 0x28);
  }
  FUN_00c7c970(*(undefined8 *)(param_1 + 8),pvVar1,param_2);
  if ((uStack_70 & 1) != 0) {
    operator_delete(pvStack_60);
  }
  if (pvStack_50 != (void *)0x0) {
    operator_delete__(pvStack_50);
    uStack_58 = 0;
    pvStack_50 = (void *)0x0;
  }
  if (pvStack_40 != (void *)0x0) {
    operator_delete__(pvStack_40);
    uStack_48 = 0;
    pvStack_40 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

