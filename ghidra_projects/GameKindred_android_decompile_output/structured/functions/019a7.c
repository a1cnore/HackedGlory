// functions/019a7 — 11 functions
#include "libGameKindred.h"




bool FUN_019a7090(char *param_1,ulong param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((4 < param_2) && (bVar1 = false, *param_1 == '/')) {
    bVar1 = (byte)param_1[4] < 0x20;
  }
  return bVar1;
}




void FUN_019a70c0(char *param_1,ulong param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [52];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  if (((param_1 != (char *)0x0) && (4 < param_2)) && (uVar2 = 0, *param_1 == '/')) {
    uVar2 = 0;
    if ((byte)param_1[4] < 0x20) {
      FUN_019b6ac0(auStack_78);
      uVar2 = FUN_019a7194(auStack_78,&local_3c,&local_40,&local_44);
      if ((int)uVar2 != 0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = local_3c;
        }
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = local_40;
        }
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = local_44;
        }
        uVar2 = 1;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




bool FUN_019a7194(undefined8 param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_019b6c0c(param_1,8);
  bVar1 = false;
  if (iVar2 == 0x2f) {
    iVar2 = FUN_019b6c0c(param_1,0xe);
    *param_2 = iVar2 + 1;
    iVar2 = FUN_019b6c0c(param_1,0xe);
    *param_3 = iVar2 + 1;
    uVar3 = FUN_019b6c0c(param_1,1);
    *param_4 = uVar3;
    iVar2 = FUN_019b6c0c(param_1,3);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}




undefined8 * FUN_019a7224(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_019a2d64(1,0x138);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = 0x200000000;
    FUN_019aeb44();
  }
  return puVar1;
}




void FUN_019a726c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (param_1 != 0) {
    FUN_019a72f0(param_1 + 0x78);
    free(*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (0 < *(int *)(param_1 + 0xb8)) {
      lVar1 = 0;
      puVar2 = (undefined8 *)(param_1 + 0xd0);
      do {
        free((void *)*puVar2);
        *puVar2 = 0;
        lVar1 = lVar1 + 1;
        puVar2 = puVar2 + 3;
      } while (lVar1 < *(int *)(param_1 + 0xb8));
    }
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    free(*(void **)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}




void FUN_019a72f0(undefined8 *param_1)

{
  free((void *)param_1[5]);
  FUN_019b6d24(param_1[7],*(undefined4 *)(param_1 + 6));
  FUN_019b6cbc(param_1 + 1);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}




void FUN_019a7334(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_019a726c(param_1);
    free(param_1);
    return;
  }
  return;
}




undefined8
FUN_019a736c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  void *__ptr;
  
  puVar3 = (undefined4 *)FUN_019a7224();
  param_1[3] = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  puVar1 = param_1 + 4;
  *(undefined8 *)(puVar3 + 0x18) = *param_1;
  *(undefined8 **)(puVar3 + 4) = puVar1;
  FUN_019a5684(puVar1,0x203);
  FUN_019a428c(0,puVar1);
  param_1[0xb] = param_4;
  param_1[4] = *param_1;
  *puVar3 = 0;
  FUN_019b6ac0(puVar3 + 0xc,param_2,param_3);
  puVar3[1] = 1;
  iVar2 = FUN_019a74f0(*(undefined4 *)param_1,*(undefined4 *)((long)param_1 + 4),1,puVar3,0);
  if (iVar2 == 0) {
LAB_019a74bc:
    __ptr = (void *)param_1[3];
    if (__ptr != (void *)0x0) {
      FUN_019a726c(__ptr);
      free(__ptr);
    }
    uVar4 = 0;
    param_1[3] = 0;
  }
  else {
    if (((puVar3[0x2e] == 1) && (puVar3[0x30] == 3)) && ((int)puVar3[0x1e] < 1)) {
      if (0 < (int)puVar3[0x2a]) {
        lVar5 = *(long *)(puVar3 + 0x2c);
        lVar6 = 0;
        do {
          if (((1 < *(int *)(lVar5 + 0x51c)) || (1 < *(int *)(lVar5 + 0x7ac))) ||
             (1 < *(int *)(lVar5 + 0xa3c))) goto LAB_019a742c;
          lVar6 = lVar6 + 1;
          lVar5 = lVar5 + 0xcd0;
        } while (lVar6 < (int)puVar3[0x2a]);
      }
      *(undefined4 *)(param_1 + 0x18) = 1;
      *(undefined8 *)(puVar3 + 10) = 0;
      lVar6 = FUN_019a2d40((long)(int)puVar3[0x19] * (long)(int)puVar3[0x18],1);
      *(long *)(puVar3 + 8) = lVar6;
      if (lVar6 == 0) {
        *puVar3 = 1;
        goto LAB_019a74bc;
      }
    }
    else {
LAB_019a742c:
      *(undefined4 *)(param_1 + 0x18) = 0;
      iVar2 = FUN_019a7e50(puVar3,*(undefined4 *)param_1);
      if (iVar2 == 0) goto LAB_019a74bc;
    }
    puVar3[1] = 0;
    uVar4 = 1;
  }
  return uVar4;
}




void FUN_019a74f0(uint param_1,int param_2,int param_3,int *param_4,long *param_5)

{
  char *pcVar1;
  ulong *puVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  int *piVar22;
  undefined4 *puVar23;
  ulong uVar24;
  uint uVar25;
  int *piVar26;
  void *pvVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  byte *pbVar31;
  long lVar32;
  long local_3d8;
  int local_3c8;
  uint *local_3a0;
  undefined4 auStack_398 [19];
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_300;
  undefined4 local_2fc;
  short asStack_280 [128];
  short asStack_180 [128];
  long local_80;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  puVar2 = (ulong *)(param_4 + 0xc);
  piVar3 = param_4 + 0x1e;
  if (param_3 == 0) {
LAB_019a7734:
    iVar8 = FUN_019b6c0c(puVar2,1);
    if (iVar8 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_019b6c0c(puVar2,4);
      if (10 < uVar11 - 1) goto LAB_019a7d18;
    }
    local_3a0 = (uint *)0x0;
    if (param_3 != 0) {
      uVar9 = 1;
      iVar8 = FUN_019b6c0c(puVar2,1);
      if (iVar8 == 0) goto LAB_019a7810;
      iVar8 = FUN_019b6c0c(puVar2,3);
      uVar9 = iVar8 + 2;
      iVar8 = (1 << (ulong)(uVar9 & 0x1f)) + -1;
      uVar13 = iVar8 + param_1 >> (ulong)(uVar9 & 0x1f);
      uVar19 = (uint)(iVar8 + param_2) >> (ulong)(uVar9 & 0x1f);
      iVar8 = FUN_019a74f0(uVar13,uVar19,0,param_4,&local_3a0);
      if (iVar8 != 0) {
        uVar13 = uVar13 * uVar19;
        param_4[0x25] = uVar9;
        if ((int)uVar13 < 1) goto LAB_019a780c;
        uVar21 = (ulong)uVar13;
        uVar9 = 1;
        puVar18 = local_3a0;
        do {
          uVar13 = *puVar18 >> 8 & 0xffff;
          if (uVar9 <= uVar13) {
            uVar9 = uVar13 + 1;
          }
          uVar21 = uVar21 - 1;
          *puVar18 = uVar13;
          puVar18 = puVar18 + 1;
        } while (uVar21 != 0);
        goto LAB_019a7810;
      }
      pvVar27 = (void *)0x0;
      piVar26 = (int *)0x0;
      lVar29 = 0;
      uVar9 = 1;
      *param_4 = 3;
LAB_019a7cf8:
      free(pvVar27);
      free(piVar26);
      free(local_3a0);
      FUN_019b6d24(lVar29,uVar9);
      goto LAB_019a7d18;
    }
LAB_019a780c:
    uVar9 = 1;
LAB_019a7810:
    if (param_4[0x16] != 0) {
      pvVar27 = (void *)0x0;
      piVar26 = (int *)0x0;
      lVar29 = 0;
      goto LAB_019a7cf8;
    }
    lVar29 = 0;
    iVar8 = 1 << (ulong)(uVar11 & 0x1f);
    iVar10 = 0;
    do {
      iVar12 = iVar8;
      if (lVar29 != 0 || (int)uVar11 < 1) {
        iVar12 = 0;
      }
      iVar12 = iVar12 + (uint)*(ushort *)((long)&DAT_01e1c7d8 + lVar29);
      lVar29 = lVar29 + 2;
      if (iVar12 <= iVar10) {
        iVar12 = iVar10;
      }
      iVar10 = iVar12;
    } while (lVar29 != 10);
    lVar29 = FUN_019b6d18(uVar9);
    piVar26 = (int *)FUN_019a2d64((long)iVar12,4);
    pvVar27 = (void *)FUN_019a2d40((long)iVar12,4);
    if (((lVar29 == 0) || (piVar26 == (int *)0x0)) || (pvVar27 == (void *)0x0)) {
      *param_4 = 1;
      goto LAB_019a7cf8;
    }
    if (uVar9 != 0) {
      local_3d8 = 0;
      do {
        uVar21 = 0;
        do {
          lVar32 = lVar29 + local_3d8 * 0xcd0 + uVar21 * 0x290;
          iVar10 = iVar8;
          if (uVar21 != 0 || (int)uVar11 < 1) {
            iVar10 = 0;
          }
          uVar13 = iVar10 + (uint)(ushort)(&DAT_01e1c7d8)[uVar21];
          uVar30 = (ulong)uVar13;
          iVar10 = FUN_019b6c0c(puVar2,1);
          if (iVar10 == 0) {
            memset(auStack_398,0,0x4c);
            iVar10 = FUN_019b6c0c(puVar2,4);
            uVar19 = iVar10 + 4;
            if ((int)uVar19 < 0x14) {
              memset(piVar26,0,-(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar30 << 2);
              if (0 < (int)uVar19) {
                uVar28 = (ulong)uVar19;
                pbVar31 = &DAT_01e1c7e2;
                do {
                  uVar14 = FUN_019b6c0c(puVar2,3);
                  uVar28 = uVar28 - 1;
                  auStack_398[*pbVar31] = uVar14;
                  pbVar31 = pbVar31 + 1;
                } while (uVar28 != 0);
              }
              memset(&local_34c,0,0x4c);
              iVar10 = FUN_019b6f14(&local_300,auStack_398,&local_34c,0x13);
              if (iVar10 == 0) {
LAB_019a7c28:
                uVar13 = 0;
                *param_4 = 3;
              }
              else {
                iVar10 = FUN_019b6c0c(puVar2,1);
                if (iVar10 != 0) {
                  iVar10 = FUN_019b6c0c(puVar2,3);
                  iVar10 = FUN_019b6c0c(puVar2,iVar10 * 2 + 2);
                  uVar30 = (ulong)(iVar10 + 2U);
                  if ((int)uVar13 < (int)(iVar10 + 2U)) {
LAB_019a7c14:
                    *param_4 = 3;
                    FUN_019b6ce8(&local_300);
                    goto LAB_019a7c28;
                  }
                }
                if (0 < (int)uVar13) {
                  iVar10 = 0;
                  local_3c8 = 8;
                  do {
                    if ((int)uVar30 == 0) break;
                    uVar19 = param_4[0x14];
                    if (0x1f < (int)uVar19) {
                      FUN_019b6b5c(puVar2);
                      uVar19 = param_4[0x14];
                    }
                    uVar24 = *puVar2 >> ((ulong)uVar19 & 0x3f);
                    uVar28 = uVar24 & 0x7f;
                    if (*(byte *)((long)&local_300 + uVar28) < 8) {
                      iVar12 = uVar19 + *(byte *)((long)&local_300 + uVar28);
                      param_4[0x14] = iVar12;
                      param_4[0x15] =
                           (uint)(0x40 < iVar12 &&
                                 *(long *)(param_4 + 0x12) == *(long *)(param_4 + 0x10));
                      uVar28 = (ulong)asStack_280[uVar28];
                    }
                    else {
                      uVar24 = uVar24 >> 7 & 0x1ffffff;
                      puVar18 = (uint *)(local_80 + (long)asStack_180[uVar28] * 8);
                      uVar25 = puVar18[1];
                      iVar12 = uVar19 + 6;
                      do {
                        iVar20 = iVar12;
                        puVar18 = puVar18 + (long)(int)uVar25 * 2 + (ulong)((uint)uVar24 & 1) * 2;
                        uVar25 = puVar18[1];
                        uVar24 = (ulong)((uint)uVar24 >> 1);
                        iVar12 = iVar20 + 1;
                      } while (uVar25 != 0);
                      param_4[0x14] = iVar20 + 2;
                      param_4[0x15] =
                           (uint)(0x3f < iVar12 &&
                                 *(long *)(param_4 + 0x12) == *(long *)(param_4 + 0x10));
                      uVar28 = (ulong)*puVar18;
                    }
                    iVar12 = (int)uVar28;
                    if (iVar12 < 0x10) {
                      piVar26[iVar10] = iVar12;
                      iVar10 = iVar10 + 1;
                      if (iVar12 != 0) {
                        local_3c8 = iVar12;
                      }
                    }
                    else {
                      uVar28 = -(uVar28 >> 0x1f & 1) & 0xfffffffc00000000 |
                               (uVar28 & 0xffffffff) << 2;
                      iVar6 = *(int *)(&UNK_01e1c7c4 + uVar28);
                      iVar15 = FUN_019b6c0c(puVar2,*(undefined4 *)(&UNK_01e1c7b8 + uVar28));
                      iVar20 = iVar15 + iVar6;
                      if ((int)uVar13 < iVar20 + iVar10) goto LAB_019a7c14;
                      iVar5 = local_3c8;
                      if (iVar12 != 0x10) {
                        iVar5 = 0;
                      }
                      if (0 < iVar20) {
                        iVar12 = iVar15 + iVar6 + 1;
                        piVar22 = piVar26 + iVar10;
                        do {
                          iVar12 = iVar12 + -1;
                          *piVar22 = iVar5;
                          iVar10 = iVar10 + 1;
                          piVar22 = piVar22 + 1;
                        } while (1 < iVar12);
                      }
                    }
                    uVar30 = (ulong)((int)uVar30 - 1);
                  } while (iVar10 < (int)uVar13);
                }
                FUN_019b6ce8(&local_300);
                iVar10 = FUN_019b6f14(lVar32,piVar26,pvVar27,uVar13);
                uVar13 = (uint)(iVar10 != 0);
              }
              goto LAB_019a7c34;
            }
LAB_019a7ce8:
            *param_4 = 3;
            goto LAB_019a7cf8;
          }
          iVar10 = FUN_019b6c0c(puVar2,1);
          iVar12 = FUN_019b6c0c(puVar2,1);
          uVar14 = 8;
          if (iVar12 == 0) {
            uVar14 = 1;
          }
          local_300 = FUN_019b6c0c(puVar2,uVar14);
          local_34c = 0;
          *piVar26 = iVar10;
          if (iVar10 + 1 == 2) {
            local_2fc = FUN_019b6c0c(puVar2,8);
            local_348 = 1;
            piVar26[1] = iVar10;
          }
          uVar13 = FUN_019b7294(lVar32,piVar26,&local_34c,&local_300,uVar30,iVar10 + 1);
LAB_019a7c34:
          if ((uVar13 == 0) || (param_4[0x16] != 0)) goto LAB_019a7ce8;
          uVar21 = uVar21 + 1;
        } while (uVar21 < 5);
        local_3d8 = local_3d8 + 1;
      } while (local_3d8 < (int)uVar9);
    }
    free(pvVar27);
    free(piVar26);
    param_4[0x2a] = uVar9;
    *(long *)(param_4 + 0x2c) = lVar29;
    *(uint **)(param_4 + 0x28) = local_3a0;
    if ((int)uVar11 < 1) {
      *piVar3 = 0;
LAB_019a7da4:
      uVar9 = param_4[0x25];
      param_4[0x18] = param_1;
      param_4[0x19] = param_2;
      iVar8 = (1 << (ulong)(uVar9 & 0x1f)) + -1;
      uVar11 = iVar8 + param_1;
      if (uVar9 == 0) {
        iVar8 = -1;
      }
      param_4[0x26] = uVar11 >> (ulong)(uVar9 & 0x1f);
      param_4[0x24] = iVar8;
      if (param_3 != 0) {
        pvVar27 = (void *)0x0;
        param_4[2] = 1;
LAB_019a7ddc:
        if (param_5 != (long *)0x0) {
          *param_5 = (long)pvVar27;
        }
        param_4[0x1b] = 0;
        if (param_3 == 0) {
          FUN_019a72f0(piVar3);
        }
        uVar17 = 1;
        goto LAB_019a7d64;
      }
      pvVar27 = (void *)FUN_019a2d40((long)(int)param_1 * (long)param_2,4);
      if (pvVar27 == (void *)0x0) goto LAB_019a7e40;
      iVar8 = FUN_019a836c(param_4,pvVar27,param_1,param_2,param_2,0);
      if ((iVar8 != 0) && (param_4[0x16] == 0)) goto LAB_019a7ddc;
    }
    else {
      param_4[0x1e] = iVar8;
      iVar8 = FUN_019b6c70(param_4 + 0x20,uVar11);
      if (iVar8 != 0) goto LAB_019a7da4;
      pvVar27 = (void *)0x0;
LAB_019a7e40:
      *param_4 = 1;
    }
  }
  else {
    do {
      iVar8 = FUN_019b6c0c(puVar2,1);
      if (iVar8 == 0) goto LAB_019a7734;
      lVar29 = (long)param_4[0x2e];
      uVar9 = FUN_019b6c0c(puVar2,2);
      uVar11 = 1 << (ulong)(uVar9 & 0x1f);
      if ((param_4[0x48] & uVar11) != 0) break;
      param_4[0x48] = param_4[0x48] | uVar11;
      piVar26 = param_4 + lVar29 * 6 + 0x34;
      piVar26[0] = 0;
      piVar26[1] = 0;
      param_4[lVar29 * 6 + 0x30] = uVar9;
      puVar18 = (uint *)(param_4 + lVar29 * 6 + 0x32);
      *puVar18 = param_1;
      param_4[lVar29 * 6 + 0x33] = param_2;
      param_4[0x2e] = param_4[0x2e] + 1;
      if (uVar9 < 2) {
        iVar8 = FUN_019b6c0c(puVar2,3);
        uVar11 = iVar8 + 2;
        param_4[lVar29 * 6 + 0x31] = uVar11;
        iVar8 = (1 << (ulong)(uVar11 & 0x1f)) + -1;
        iVar8 = FUN_019a74f0(iVar8 + *puVar18 >> (ulong)(uVar11 & 0x1f),
                             (uint)(iVar8 + param_4[lVar29 * 6 + 0x33]) >> (ulong)(uVar11 & 0x1f),0,
                             param_4,piVar26);
      }
      else {
        if (uVar9 == 3) {
          iVar8 = FUN_019b6c0c(puVar2,8);
          iVar8 = iVar8 + 1;
          uVar11 = 0;
          if (iVar8 < 0x11) {
            if (iVar8 < 5) {
              uVar11 = 2;
              if (iVar8 < 3) {
                uVar11 = 3;
              }
            }
            else {
              uVar11 = 1;
            }
          }
          uVar9 = *puVar18;
          param_4[lVar29 * 6 + 0x31] = uVar11;
          iVar10 = FUN_019a74f0(iVar8,1,0,param_4,piVar26);
          if (iVar10 == 0) break;
          iVar10 = 1 << (ulong)(8U >> (ulong)(param_4[lVar29 * 6 + 0x31] & 0x1f) & 0x1f);
          puVar16 = (undefined4 *)FUN_019a2d40((long)iVar10,4);
          if (puVar16 == (undefined4 *)0x0) break;
          puVar23 = *(undefined4 **)piVar26;
          *puVar16 = *puVar23;
          if (iVar8 < 2) {
            uVar21 = 4;
          }
          else {
            uVar21 = 4;
            do {
              pcVar4 = (char *)((long)puVar16 + uVar21);
              pcVar1 = (char *)((long)puVar23 + uVar21);
              uVar21 = uVar21 + 1;
              *pcVar4 = pcVar4[-4] + *pcVar1;
            } while ((long)uVar21 < (long)(iVar8 * 4));
          }
          param_1 = (uVar9 + (1 << (ulong)uVar11)) - 1 >> (ulong)uVar11;
          if ((int)uVar21 < iVar10 * 4) {
            memset((void *)((long)puVar16 + (uVar21 & 0xffffffff)),0,
                   (ulong)(uint)((iVar10 * 4 + -1) - (int)uVar21) + 1);
          }
          free(*(void **)piVar26);
          *(undefined4 **)piVar26 = puVar16;
        }
        iVar8 = 1;
      }
    } while (iVar8 != 0);
LAB_019a7d18:
    *param_4 = 3;
    pvVar27 = (void *)0x0;
  }
  free(pvVar27);
  FUN_019a72f0(piVar3);
  uVar17 = 0;
  if (*param_4 == 3) {
    if (param_4[0x15] == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      *param_4 = 5;
    }
  }
LAB_019a7d64:
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar17);
}




bool FUN_019a7e50(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = param_1[0x18];
  iVar2 = param_1[0x19];
  lVar3 = FUN_019a2d40((ulong)(param_2 & 0xffff) + (long)(int)param_2 * 0x10 +
                       (long)iVar2 * (long)iVar1,4);
  *(long *)(param_1 + 8) = lVar3;
  if (lVar3 == 0) {
    lVar4 = 0;
    *param_1 = 1;
  }
  else {
    lVar4 = lVar3 + (long)iVar2 * (long)iVar1 * 4 + (ulong)(param_2 & 0xffff) * 4;
  }
  *(long *)(param_1 + 10) = lVar4;
  return lVar3 != 0;
}




undefined8 FUN_019a7eb8(long param_1,int param_2)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  undefined4 uVar11;
  int iVar12;
  ulong uVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined4 *puVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  
  puVar19 = *(undefined4 **)(param_1 + 0x18);
  iVar2 = puVar19[0x18];
  iVar21 = puVar19[0x1b];
  iVar5 = puVar19[0x19] * iVar2;
  if (iVar21 == iVar5) {
LAB_019a7ef4:
    uVar7 = 1;
  }
  else {
    lVar25 = *(long *)(puVar19 + 8);
    if (*(int *)(param_1 + 0xc0) == 0) {
      uVar7 = FUN_019a836c(puVar19,lVar25,iVar2,puVar19[0x19],param_2,FUN_019a8b94);
      return uVar7;
    }
    uVar3 = puVar19[0x25];
    uVar20 = 0;
    if (iVar2 != 0) {
      uVar20 = iVar21 / iVar2;
    }
    uVar23 = iVar21 - uVar20 * iVar2;
    if (uVar3 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (long)*(int *)(*(long *)(puVar19 + 0x28) +
                            (long)(((int)uVar23 >> (uVar3 & 0x1f)) +
                                  puVar19[0x26] * ((int)uVar20 >> (uVar3 & 0x1f))) * 4);
    }
    uVar3 = puVar19[0x24];
    puVar1 = (ulong *)(puVar19 + 0xc);
    lVar8 = *(long *)(puVar19 + 0x2c) + lVar8 * 0xcd0;
    do {
      if ((iVar2 * param_2 <= iVar21) || (puVar19[0x15] != 0)) {
        FUN_019a9248(puVar19,uVar20);
        if ((puVar19[0x16] == 0) && ((iVar5 <= iVar21 || (puVar19[0x15] == 0)))) {
          puVar19[0x1b] = iVar21;
          if (iVar5 == iVar21) {
            puVar19[2] = 0;
          }
          goto LAB_019a7ef4;
        }
        break;
      }
      if ((uVar23 & uVar3) == 0) {
        uVar24 = puVar19[0x25];
        if (uVar24 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = (long)*(int *)(*(long *)(puVar19 + 0x28) +
                                (long)(((int)uVar23 >> (uVar24 & 0x1f)) +
                                      puVar19[0x26] * ((int)uVar20 >> (uVar24 & 0x1f))) * 4);
        }
        lVar8 = *(long *)(puVar19 + 0x2c) + lVar8 * 0xcd0;
      }
      uVar24 = puVar19[0x14];
      if (0x1f < (int)uVar24) {
        FUN_019b6b5c(puVar1);
        uVar24 = puVar19[0x14];
      }
      uVar9 = *puVar1;
      uVar17 = uVar9 >> ((ulong)uVar24 & 0x3f);
      uVar13 = uVar17 & 0x7f;
      if (*(byte *)(lVar8 + uVar13) < 8) {
        uVar24 = uVar24 + *(byte *)(lVar8 + uVar13);
        puVar19[0x14] = uVar24;
        puVar19[0x15] =
             (uint)(0x40 < (int)uVar24 && *(long *)(puVar19 + 0x12) == *(long *)(puVar19 + 0x10));
        iVar12 = (int)*(short *)(lVar8 + uVar13 * 2 + 0x80);
      }
      else {
        piVar14 = (int *)(*(long *)(lVar8 + 0x280) +
                         (long)*(short *)(lVar8 + uVar13 * 2 + 0x180) * 8);
        iVar6 = piVar14[1];
        uVar13 = uVar17 >> 7 & 0x1ffffff;
        iVar12 = uVar24 + 6;
        do {
          iVar15 = iVar12;
          piVar14 = piVar14 + (long)iVar6 * 2 + (ulong)((uint)uVar13 & 1) * 2;
          iVar6 = piVar14[1];
          uVar13 = (ulong)((uint)uVar13 >> 1);
          iVar12 = iVar15 + 1;
        } while (iVar6 != 0);
        uVar24 = iVar15 + 2;
        puVar19[0x14] = uVar24;
        puVar19[0x15] =
             (uint)(0x3f < iVar12 && *(long *)(puVar19 + 0x12) == *(long *)(puVar19 + 0x10));
        iVar12 = *piVar14;
      }
      if (iVar12 < 0x100) {
        uVar23 = uVar23 + 1;
        *(char *)(lVar25 + iVar21) = (char)iVar12;
        iVar21 = iVar21 + 1;
        if (iVar2 <= (int)uVar23) {
          uVar20 = uVar20 + 1;
          if ((uVar20 & 0xf) == 0) {
            FUN_019a9248(puVar19,uVar20);
          }
          uVar23 = 0;
        }
      }
      else {
        if (0x117 < iVar12) break;
        uVar22 = iVar12 - 0x100;
        if (0x103 < iVar12) {
          iVar6 = FUN_019b6c0c(puVar1);
          uVar9 = *(ulong *)(puVar19 + 0xc);
          uVar24 = puVar19[0x14];
          uVar22 = iVar6 + ((uVar22 & 1 | 2) << (ulong)(iVar12 + -0x102 >> 1 & 0x1f));
        }
        uVar9 = uVar9 >> ((ulong)uVar24 & 0x3f);
        uVar13 = uVar9 & 0x7f;
        bVar4 = *(byte *)(lVar8 + uVar13 + 0xa40);
        if (bVar4 < 8) {
          iVar6 = uVar24 + bVar4;
          puVar19[0x14] = iVar6;
          puVar19[0x15] =
               (uint)(0x40 < iVar6 && *(long *)(puVar19 + 0x12) == *(long *)(puVar19 + 0x10));
          uVar24 = (uint)*(short *)(lVar8 + uVar13 * 2 + 0xac0);
        }
        else {
          uVar9 = uVar9 >> 7 & 0x1ffffff;
          puVar10 = (uint *)(*(long *)(lVar8 + 0xcc0) +
                            (long)*(short *)(lVar8 + uVar13 * 2 + 0xbc0) * 8);
          uVar16 = puVar10[1];
          iVar12 = uVar24 + 6;
          do {
            iVar6 = iVar12;
            puVar10 = puVar10 + (long)(int)uVar16 * 2 + (ulong)((uint)uVar9 & 1) * 2;
            uVar16 = puVar10[1];
            uVar9 = (ulong)((uint)uVar9 >> 1);
            iVar12 = iVar6 + 1;
          } while (uVar16 != 0);
          iVar6 = iVar6 + 2;
          puVar19[0x14] = iVar6;
          puVar19[0x15] =
               (uint)(0x3f < iVar12 && *(long *)(puVar19 + 0x12) == *(long *)(puVar19 + 0x10));
          uVar24 = *puVar10;
        }
        if (0x1f < iVar6) {
          FUN_019b6b5c(puVar1);
        }
        if (3 < (int)uVar24) {
          iVar12 = FUN_019b6c0c(puVar1);
          uVar24 = iVar12 + ((uVar24 & 1 | 2) << (ulong)((int)(uVar24 - 2) >> 1 & 0x1f));
        }
        uVar22 = uVar22 + 1;
        if ((int)(uVar24 + 1) < 0x79) {
          iVar12 = (8 - ((byte)(&DAT_01e1c810)[(int)uVar24] & 0xf)) +
                   (uint)((byte)(&DAT_01e1c810)[(int)uVar24] >> 4) * iVar2;
          if (iVar12 < 2) {
            iVar12 = 1;
          }
        }
        else {
          iVar12 = uVar24 - 0x77;
        }
        if ((iVar5 - iVar21 < (int)uVar22) || (iVar21 < iVar12)) break;
        if (0 < (int)uVar22) {
          uVar9 = (ulong)uVar22;
          puVar18 = (undefined1 *)(lVar25 + iVar21);
          do {
            uVar9 = uVar9 - 1;
            *puVar18 = puVar18[-(long)iVar12];
            puVar18 = puVar18 + 1;
          } while (uVar9 != 0);
        }
        uVar23 = uVar22 + uVar23;
        iVar21 = uVar22 + iVar21;
        while (iVar2 <= (int)uVar23) {
          uVar20 = uVar20 + 1;
          uVar23 = uVar23 - iVar2;
          if ((uVar20 & 0xf) == 0) {
            FUN_019a9248(puVar19,uVar20);
          }
        }
        if ((iVar21 < iVar2 * param_2) && ((uVar23 & uVar3) != 0)) {
          uVar24 = puVar19[0x25];
          if (uVar24 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = (long)*(int *)(*(long *)(puVar19 + 0x28) +
                                  (long)(((int)uVar23 >> (uVar24 & 0x1f)) +
                                        puVar19[0x26] * ((int)uVar20 >> (uVar24 & 0x1f))) * 4);
          }
          lVar8 = *(long *)(puVar19 + 0x2c) + lVar8 * 0xcd0;
        }
      }
    } while (puVar19[0x16] == 0);
    uVar7 = 0;
    uVar11 = 3;
    if (puVar19[0x15] != 0) {
      uVar11 = 5;
    }
    *puVar19 = uVar11;
  }
  return uVar7;
}

