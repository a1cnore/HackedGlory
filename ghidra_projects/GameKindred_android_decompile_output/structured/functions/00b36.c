// functions/00b36 — 13 functions
#include "libGameKindred.h"




undefined8 FUN_00b3603c(void)

{
  return 1;
}




void FUN_00b36044(void)

{
  undefined8 in_x4;
  
  FUN_00af5c10(in_x4);
  return;
}




void FUN_00b36050(void)

{
  undefined8 in_x4;
  
  FUN_00af5c10(in_x4);
  return;
}




void FUN_00b3605c(long param_1)

{
  FUN_008fce60(param_1 + 0x3a0);
  return;
}




undefined8 FUN_00b36064(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_009580c4();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_009580b8();
    iVar1 = *(int *)(lVar3 + 0x55e0);
    if (-1 < iVar1) {
      if ((-1 < *(int *)(param_1 + 0x50c)) && (iVar1 < *(int *)(param_1 + 0x50c))) {
        return 1;
      }
      if ((0 < *(int *)(param_1 + 0x510)) && (*(int *)(param_1 + 0x510) < iVar1)) {
        return 1;
      }
    }
  }
  uVar2 = FUN_00b36434(param_1);
  if ((((uVar2 & 1) == 0) && (uVar2 = FUN_00b36ac8(param_1), (uVar2 & 1) == 0)) &&
     (uVar2 = FUN_00b374bc(param_1), (uVar2 & 1) == 0)) {
    uVar4 = FUN_00b37614(param_1);
    return uVar4;
  }
  return 1;
}




undefined8 FUN_00b360f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  byte local_c0 [16];
  void *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x388) & 1) == 0) {
    lVar3 = param_1 + 0x389;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x398);
  }
  if ((*(byte *)(param_1 + 0x3a0) & 1) == 0) {
    param_1 = param_1 + 0x3a1;
  }
  else {
    param_1 = *(long *)(param_1 + 0x3b0);
  }
  FUN_00969b40(auStack_a8,"%s_%s",lVar3,param_1);
  FUN_008fa54c(local_c0,auStack_a8);
  uVar2 = FUN_00939be8(local_c0);
  if ((local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b361a0(uint *param_1,undefined8 *param_2)

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
    FUN_00b3792c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




long FUN_00b36228(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  
  bVar2 = *param_2;
  uVar5 = *(ulong *)(param_2 + 8);
  uVar6 = (ulong)(bVar2 >> 1);
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 4) {
    iVar3 = FUN_0090d610(param_2,0,0xffffffffffffffff,"news",4);
    if (iVar3 == 0) goto LAB_00b36308;
    bVar2 = *param_2;
    uVar5 = *(ulong *)(param_2 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 7) {
    iVar3 = FUN_0090d610(param_2,0,0xffffffffffffffff,"academy",7);
    if (iVar3 == 0) goto LAB_00b36308;
    bVar2 = *param_2;
    uVar5 = *(ulong *)(param_2 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  if ((bVar2 & 1) != 0) {
    uVar6 = uVar5;
  }
  if (uVar6 != 6) {
    return 0;
  }
  iVar3 = FUN_0090d610(param_2,0,0xffffffffffffffff,"market",6);
  if (iVar3 != 0) {
    return 0;
  }
LAB_00b36308:
  pvVar4 = operator_new(0x168);
  FUN_00bdb170();
  return (long)pvVar4 + 0x10;
}




void FUN_00b36328(undefined8 param_1,long *param_2)

{
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b36338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2);
    return;
  }
  return;
}




void FUN_00b36340(long *param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00b3637c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,uVar1,1);
  return;
}




void FUN_00b36380(long param_1,byte *param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_00af6c0c(param_4);
  if ((uVar1 & 1) == 0) {
    uVar1 = (ulong)(*param_2 >> 1);
    if ((*param_2 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 8);
    }
    if (uVar1 != 0) {
      if (param_3 == 1) {
        FUN_0096bd38(param_2,param_1 + 0x368,param_4);
        return;
      }
      if (param_3 == 0) {
        FUN_0096bd10(param_2,param_1 + 0x368,param_4);
        return;
      }
      FUN_0096bce8(param_2,param_1 + 0x368,param_4);
      return;
    }
  }
  return;
}




byte FUN_00b36434(long param_1)

{
  byte bVar1;
  size_t sVar2;
  size_t sVar3;
  undefined1 *puVar4;
  byte bVar5;
  long lVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  char *__s;
  size_t sVar11;
  undefined8 uVar12;
  long lVar13;
  byte bVar14;
  long lVar15;
  void *pvVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  byte *pbVar21;
  size_t sVar22;
  long lVar23;
  byte *pbVar24;
  long lVar25;
  size_t sVar26;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if (*(uint *)(param_1 + 0x4e8) == 0) {
    bVar14 = 0;
    bVar1 = 1;
  }
  else {
    bVar14 = 0;
    lVar25 = *(long *)(param_1 + 0x4f0);
    bVar1 = 1;
    lVar15 = lVar25 + (ulong)*(uint *)(param_1 + 0x4e8) * 0x38;
    do {
      bVar7 = DAT_0320ffa8;
      pbVar24 = (byte *)(lVar25 + 8);
      bVar9 = *pbVar24;
      sVar22 = *(size_t *)(lVar25 + 0x10);
      sVar26 = (size_t)(bVar9 >> 1);
      sVar11 = sVar26;
      if ((bVar9 & 1) != 0) {
        sVar11 = sVar22;
      }
      sVar2 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar2 = DAT_0320ffb0;
      }
      if (sVar11 == sVar2) {
        pvVar16 = *(void **)(lVar25 + 0x18);
        if ((bVar9 & 1) == 0) {
          pvVar16 = (void *)(lVar25 + 9);
        }
        puVar4 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          puVar4 = &DAT_0320ffa9;
        }
        if ((bVar9 & 1) == 0) {
          if (sVar11 != 0) {
            uVar17 = 0;
            do {
              if (*(char *)(lVar25 + uVar17 + 9) != puVar4[uVar17]) goto LAB_00b36524;
              uVar17 = uVar17 + 1;
            } while (sVar26 != uVar17);
          }
        }
        else if ((sVar11 != 0) && (iVar10 = memcmp(pvVar16,puVar4,sVar11), iVar10 != 0))
        goto LAB_00b36524;
      }
      else {
LAB_00b36524:
        pbVar21 = (byte *)(lVar25 + 0x20);
        bVar5 = *pbVar21;
        sVar3 = (ulong)(bVar5 >> 1);
        if ((bVar5 & 1) != 0) {
          sVar3 = *(size_t *)(lVar25 + 0x28);
        }
        if (sVar3 == sVar2) {
          pvVar16 = *(void **)(lVar25 + 0x30);
          if ((bVar5 & 1) == 0) {
            pvVar16 = (void *)(lVar25 + 0x21);
          }
          puVar4 = DAT_0320ffb8;
          if ((bVar7 & 1) == 0) {
            puVar4 = &DAT_0320ffa9;
          }
          if ((bVar5 & 1) == 0) {
            if (sVar2 != 0) {
              uVar17 = 0;
              do {
                if (*(char *)(lVar25 + uVar17 + 0x21) != puVar4[uVar17]) goto LAB_00b3659c;
                uVar17 = uVar17 + 1;
              } while (bVar5 >> 1 != uVar17);
            }
          }
          else if ((sVar2 != 0) && (iVar10 = memcmp(pvVar16,puVar4,sVar2), iVar10 != 0))
          goto LAB_00b3659c;
        }
        else {
LAB_00b3659c:
          if (sVar11 == 4) {
            iVar10 = FUN_0090d610(pbVar24,0,0xffffffffffffffff,"hero",4);
            if (iVar10 != 0) {
              bVar9 = *(byte *)(lVar25 + 8);
              sVar22 = *(size_t *)(lVar25 + 0x10);
              sVar26 = (size_t)(bVar9 >> 1);
              goto LAB_00b365d4;
            }
            uVar12 = FUN_009580b8();
            if ((*pbVar21 & 1) == 0) {
              lVar20 = lVar25 + 0x21;
            }
            else {
              lVar20 = *(long *)(lVar25 + 0x30);
            }
            bVar9 = FUN_00961804(uVar12,lVar20,1);
LAB_00b36744:
            bVar1 = bVar1 & bVar9;
            bVar14 = bVar14 | bVar9;
          }
          else {
LAB_00b365d4:
            sVar11 = sVar26;
            if ((bVar9 & 1) != 0) {
              sVar11 = sVar22;
            }
            if (sVar11 == 4) {
              iVar10 = FUN_0090d610(pbVar24,0,0xffffffffffffffff,&DAT_01b9230f,4);
              if (iVar10 == 0) {
                uVar12 = FUN_009580b8();
                if ((*pbVar21 & 1) == 0) {
                  lVar20 = lVar25 + 0x21;
                }
                else {
                  lVar20 = *(long *)(lVar25 + 0x30);
                }
                FUN_008fa54c(local_80,lVar20);
                bVar9 = FUN_00961744(uVar12,local_80);
                if ((local_80[0] & 1) != 0) {
                  operator_delete(local_70);
                }
                goto LAB_00b36744;
              }
              bVar9 = *(byte *)(lVar25 + 8);
              sVar22 = *(size_t *)(lVar25 + 0x10);
              sVar26 = (size_t)(bVar9 >> 1);
            }
            if ((bVar9 & 1) != 0) {
              sVar26 = sVar22;
            }
            if ((sVar26 == 6) &&
               (iVar10 = FUN_0090d610(pbVar24,0,0xffffffffffffffff,"device",6), iVar10 == 0)) {
              __s = (char *)FUN_00e70260(&DAT_0320ffc0);
              sVar11 = strlen(__s);
              uVar17 = (ulong)(*(byte *)(lVar25 + 0x20) >> 1);
              if ((*(byte *)(lVar25 + 0x20) & 1) != 0) {
                uVar17 = *(ulong *)(lVar25 + 0x28);
              }
              bVar8 = false;
              if (sVar11 == uVar17) {
                iVar10 = FUN_0090d610(pbVar21,0,0xffffffffffffffff,__s,sVar11);
                bVar8 = iVar10 == 0;
              }
              bVar1 = bVar1 & bVar8;
              bVar14 = bVar14 | bVar8;
            }
          }
        }
      }
      lVar25 = lVar25 + 0x38;
    } while (lVar25 != lVar15);
  }
  if (5 < *(int *)(param_1 + 0x4f8) - 1U) {
    bVar1 = 0;
    goto switchD_00b3679c_caseD_4;
  }
  bVar9 = bVar14 & (bVar1 ^ 1);
  switch(*(int *)(param_1 + 0x4f8)) {
  case 1:
    bVar1 = bVar1 ^ 1;
    goto switchD_00b3679c_caseD_4;
  case 2:
    bVar9 = bVar14 ^ 1;
    break;
  case 3:
    bVar9 = bVar9 ^ 1;
    break;
  case 4:
    goto switchD_00b3679c_caseD_4;
  case 5:
    bVar1 = bVar14;
    goto switchD_00b3679c_caseD_4;
  }
  bVar1 = bVar9;
switchD_00b3679c_caseD_4:
  if (*(char *)(param_1 + 0x590) == '\0') {
    bVar14 = 0;
  }
  else {
    bVar14 = 0;
    if (*(int *)(param_1 + 0x504) == 6) {
      if (*(uint *)(param_1 + 8) == 0) {
        bVar14 = 1;
      }
      else {
        lVar25 = *(long *)(param_1 + 0x10);
        bVar14 = 1;
        lVar15 = lVar25 + (ulong)*(uint *)(param_1 + 8) * 0x30;
        do {
          if (*(uint *)(lVar25 + 8) != 0) {
            lVar20 = *(long *)(lVar25 + 0x10);
            lVar18 = lVar20 + (ulong)*(uint *)(lVar25 + 8) * 0xd0;
            do {
              if (*(uint *)(lVar20 + 8) != 0) {
                lVar23 = *(long *)(lVar20 + 0x10);
                lVar19 = lVar23 + (ulong)*(uint *)(lVar20 + 8) * 0x38;
                do {
                  bVar7 = DAT_0320ffa8;
                  pbVar24 = (byte *)(lVar23 + 8);
                  bVar9 = *pbVar24;
                  sVar22 = *(size_t *)(lVar23 + 0x10);
                  sVar26 = (size_t)(bVar9 >> 1);
                  sVar11 = sVar26;
                  if ((bVar9 & 1) != 0) {
                    sVar11 = sVar22;
                  }
                  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
                  if ((DAT_0320ffa8 & 1) != 0) {
                    sVar2 = DAT_0320ffb0;
                  }
                  if (sVar11 == sVar2) {
                    pvVar16 = *(void **)(lVar23 + 0x18);
                    if ((bVar9 & 1) == 0) {
                      pvVar16 = (void *)(lVar23 + 9);
                    }
                    puVar4 = DAT_0320ffb8;
                    if ((DAT_0320ffa8 & 1) == 0) {
                      puVar4 = &DAT_0320ffa9;
                    }
                    if ((bVar9 & 1) == 0) {
                      if (sVar11 != 0) {
                        uVar17 = 0;
                        do {
                          if (*(char *)(lVar23 + uVar17 + 9) != puVar4[uVar17]) goto LAB_00b368dc;
                          uVar17 = uVar17 + 1;
                        } while (sVar26 != uVar17);
                      }
                    }
                    else if ((sVar11 != 0) && (iVar10 = memcmp(pvVar16,puVar4,sVar11), iVar10 != 0))
                    goto LAB_00b368dc;
                  }
                  else {
LAB_00b368dc:
                    pbVar21 = (byte *)(lVar23 + 0x20);
                    bVar5 = *pbVar21;
                    sVar3 = (ulong)(bVar5 >> 1);
                    if ((bVar5 & 1) != 0) {
                      sVar3 = *(size_t *)(lVar23 + 0x28);
                    }
                    if (sVar3 == sVar2) {
                      pvVar16 = *(void **)(lVar23 + 0x30);
                      if ((bVar5 & 1) == 0) {
                        pvVar16 = (void *)(lVar23 + 0x21);
                      }
                      puVar4 = DAT_0320ffb8;
                      if ((bVar7 & 1) == 0) {
                        puVar4 = &DAT_0320ffa9;
                      }
                      if ((bVar5 & 1) == 0) {
                        if (sVar2 != 0) {
                          uVar17 = 0;
                          do {
                            if (*(char *)(lVar23 + uVar17 + 0x21) != puVar4[uVar17])
                            goto LAB_00b36954;
                            uVar17 = uVar17 + 1;
                          } while (bVar5 >> 1 != uVar17);
                        }
                      }
                      else if ((sVar2 != 0) && (iVar10 = memcmp(pvVar16,puVar4,sVar2), iVar10 != 0))
                      goto LAB_00b36954;
                    }
                    else {
LAB_00b36954:
                      if (sVar11 == 4) {
                        iVar10 = FUN_0090d610(pbVar24,0,0xffffffffffffffff,"hero",4);
                        if (iVar10 != 0) {
                          bVar9 = *(byte *)(lVar23 + 8);
                          sVar22 = *(size_t *)(lVar23 + 0x10);
                          sVar26 = (size_t)(bVar9 >> 1);
                          goto LAB_00b3698c;
                        }
                        uVar12 = FUN_009580b8();
                        if ((*pbVar21 & 1) == 0) {
                          lVar13 = lVar23 + 0x21;
                        }
                        else {
                          lVar13 = *(long *)(lVar23 + 0x30);
                        }
                        bVar9 = FUN_00961804(uVar12,lVar13,1);
                      }
                      else {
LAB_00b3698c:
                        if ((bVar9 & 1) != 0) {
                          sVar26 = sVar22;
                        }
                        if ((sVar26 != 4) ||
                           (iVar10 = FUN_0090d610(pbVar24,0,0xffffffffffffffff,&DAT_01b9230f,4),
                           iVar10 != 0)) goto LAB_00b36a38;
                        uVar12 = FUN_009580b8();
                        if ((*pbVar21 & 1) == 0) {
                          lVar13 = lVar23 + 0x21;
                        }
                        else {
                          lVar13 = *(long *)(lVar23 + 0x30);
                        }
                        FUN_008fa54c(local_80,lVar13);
                        bVar9 = FUN_00961744(uVar12,local_80);
                        if ((local_80[0] & 1) != 0) {
                          operator_delete(local_70);
                        }
                      }
                      bVar14 = bVar14 & bVar9;
                    }
                  }
LAB_00b36a38:
                  lVar23 = lVar23 + 0x38;
                } while (lVar23 != lVar19);
              }
              lVar20 = lVar20 + 0xd0;
            } while (lVar20 != lVar18);
          }
          lVar25 = lVar25 + 0x30;
        } while (lVar25 != lVar15);
      }
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar1 & 1 | bVar14;
}




undefined8 FUN_00b36ac8(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  uint *puVar16;
  byte *pbVar17;
  long lVar18;
  byte *pbVar19;
  void *__s2;
  byte *pbVar20;
  undefined8 uVar21;
  ulong uVar22;
  
  lVar12 = FUN_009580b8();
  iVar8 = *(int *)(lVar12 + 0x5660);
  lVar12 = FUN_009580b8();
  iVar9 = *(int *)(lVar12 + 0x5668);
  lVar12 = FUN_009580b8();
  iVar11 = *(int *)(lVar12 + 0x566c);
  lVar12 = FUN_009580b8();
  iVar10 = *(int *)(lVar12 + 0x5670);
  lVar12 = FUN_009580b8();
  uVar21 = *(undefined8 *)(lVar12 + 0x55c0);
  lVar12 = FUN_009580b8();
  iVar4 = *(int *)(lVar12 + 0x5664);
  lVar12 = FUN_009580b8();
  lVar12 = *(long *)(lVar12 + 0x55c8);
  if ((-1 < *(int *)(param_1 + 0x514)) && (iVar8 < *(int *)(param_1 + 0x514))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x518)) && (*(int *)(param_1 + 0x518) < iVar8)) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x51c)) && (iVar9 < *(int *)(param_1 + 0x51c))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x520)) && (*(int *)(param_1 + 0x520) < iVar9)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x592) != '\0') {
    iVar8 = FUN_00e85318(0);
    iVar11 = iVar8 - iVar11;
  }
  if ((-1 < *(int *)(param_1 + 0x524)) && (iVar11 < *(int *)(param_1 + 0x524))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x528)) && (*(int *)(param_1 + 0x528) < iVar11)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x593) != '\0') {
    iVar8 = FUN_00e85318(0);
    lVar12 = (long)(iVar8 - (int)lVar12);
  }
  if ((-1 < *(int *)(param_1 + 0x52c)) && (lVar12 < *(int *)(param_1 + 0x52c))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x530)) && (*(int *)(param_1 + 0x530) < lVar12)) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x534)) && (iVar10 < *(int *)(param_1 + 0x534))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x538)) && (*(int *)(param_1 + 0x538) < iVar10)) {
    return 1;
  }
  iVar8 = (int)uVar21;
  if (*(char *)(param_1 + 0x594) == '\0') {
    lVar12 = (long)iVar8;
  }
  else {
    iVar9 = FUN_00e85318(0);
    lVar12 = (long)((float)(iVar9 - iVar8) / 86400.0);
  }
  if ((-1 < *(int *)(param_1 + 0x53c)) && (lVar12 < *(int *)(param_1 + 0x53c))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x540)) && (*(int *)(param_1 + 0x540) < lVar12)) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x544)) && (iVar4 < *(int *)(param_1 + 0x544))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x548)) && (*(int *)(param_1 + 0x548) < iVar4)) {
    return 1;
  }
  if ((((*(int *)(param_1 + 0x54c) < 0) && (*(int *)(param_1 + 0x550) < 0)) &&
      (*(int *)(param_1 + 0x55c) < 0)) && (*(int *)(param_1 + 0x560) < 0)) {
    iVar8 = 0;
    iVar9 = 0;
  }
  else {
    FUN_009580b8();
    iVar9 = FUN_0095e478();
    iVar8 = FUN_00ce9c64(1);
    iVar8 = iVar8 - iVar9;
  }
  if (((*(int *)(param_1 + 0x554) < 0) && (*(int *)(param_1 + 0x558) < 0)) &&
     ((*(int *)(param_1 + 0x564) < 0 && (*(int *)(param_1 + 0x568) < 0)))) {
    iVar11 = 0;
    iVar10 = 0;
  }
  else {
    uVar21 = FUN_009580b8();
    iVar10 = FUN_00961900(uVar21,1);
    FUN_00cc7c38();
    iVar11 = FUN_00cc97cc();
    iVar11 = iVar11 - iVar10;
  }
  if ((-1 < *(int *)(param_1 + 0x54c)) && (iVar9 < *(int *)(param_1 + 0x54c))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x550)) && (*(int *)(param_1 + 0x550) < iVar9)) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x554)) && (iVar10 < *(int *)(param_1 + 0x554))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x558)) && (*(int *)(param_1 + 0x558) < iVar10)) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x55c)) && (iVar8 < *(int *)(param_1 + 0x55c))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x560)) && (*(int *)(param_1 + 0x560) < iVar8)) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x564)) && (iVar11 < *(int *)(param_1 + 0x564))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x568)) && (*(int *)(param_1 + 0x568) < iVar11)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x58e) != '\0') {
    lVar12 = FUN_009580b8();
    uVar13 = FUN_0093dbe8();
    if (((uVar13 & 1) == 0) && (*(char *)(lVar12 + 0x5680) == '\0')) {
      return 1;
    }
  }
  if (-1 < *(int *)(param_1 + 0x56c)) {
    lVar12 = FUN_008fc920();
    if (lVar12 == 0) {
      return 1;
    }
    lVar12 = FUN_008fc920();
    if (*(uint *)(lVar12 + 0x60) < *(uint *)(param_1 + 0x56c)) {
      return 1;
    }
  }
  if (-1 < *(int *)(param_1 + 0x570)) {
    lVar12 = FUN_008fc920();
    if (lVar12 == 0) {
      return 1;
    }
    lVar12 = FUN_008fc920();
    if (*(uint *)(param_1 + 0x570) < *(uint *)(lVar12 + 0x60)) {
      return 1;
    }
  }
  if (*(int *)(param_1 + 0x4d8) != 0) {
    lVar12 = FUN_009580b8();
    if ((*(byte *)(lVar12 + 0x5520) & 1) == 0) {
      if (*(byte *)(lVar12 + 0x5520) >> 1 == 0) {
        return 1;
      }
    }
    else if (*(long *)(lVar12 + 0x5528) == 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x4d8) == 0) {
      return 1;
    }
    pbVar20 = *(byte **)(param_1 + 0x4e0);
    do {
      lVar12 = FUN_009580b8(lVar12);
      bVar5 = *pbVar20;
      bVar6 = *(byte *)(lVar12 + 0x5520);
      sVar1 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar20 + 8);
      }
      sVar2 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        sVar2 = *(size_t *)(lVar12 + 0x5528);
      }
      if (sVar1 == sVar2) {
        pbVar19 = *(byte **)(pbVar20 + 0x10);
        __s2 = *(void **)(lVar12 + 0x5530);
        if ((bVar5 & 1) == 0) {
          pbVar19 = pbVar20 + 1;
        }
        if ((bVar6 & 1) == 0) {
          __s2 = (void *)(lVar12 + 0x5521);
        }
        if ((bVar5 & 1) == 0) {
          if (sVar1 == 0) break;
          uVar13 = 0;
          while (pbVar20[uVar13 + 1] == *(byte *)((long)__s2 + uVar13)) {
            uVar13 = uVar13 + 1;
            if (bVar5 >> 1 == uVar13) goto LAB_00b36efc;
          }
        }
        else if ((sVar1 == 0) || (iVar8 = memcmp(pbVar19,__s2,sVar1), iVar8 == 0)) break;
      }
      pbVar20 = pbVar20 + 0x18;
      lVar12 = 1;
      if (pbVar20 == (byte *)(*(long *)(param_1 + 0x4e0) + (ulong)*(uint *)(param_1 + 0x4d8) * 0x18)
         ) {
        return 1;
      }
    } while( true );
  }
LAB_00b36efc:
  if ((*(byte *)(param_1 + 0x4b0) & 1) == 0) {
    if (*(byte *)(param_1 + 0x4b0) >> 1 != 0) {
LAB_00b36f18:
      lVar12 = FUN_009fa72c();
      if (lVar12 == 0) {
        return 1;
      }
      piVar14 = (int *)FUN_009fadb8(lVar12);
      if (*piVar14 == 0) {
        return 1;
      }
      uVar13 = 0;
      bVar7 = false;
      do {
        lVar15 = FUN_009fadb8(lVar12);
        uVar3 = *(uint *)(*(long *)(lVar15 + 8) + uVar13 * 0x98 + 0x58);
        if (uVar3 != 0) {
          bVar5 = *(byte *)(param_1 + 0x4b0);
          lVar15 = *(long *)(*(long *)(lVar15 + 8) + uVar13 * 0x98 + 0x60);
          uVar22 = 0;
          sVar1 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            sVar1 = *(size_t *)(param_1 + 0x4b8);
          }
          do {
            pbVar20 = (byte *)(lVar15 + uVar22 * 0x28);
            bVar6 = *pbVar20;
            sVar2 = (ulong)(bVar6 >> 1);
            if ((bVar6 & 1) != 0) {
              sVar2 = *(size_t *)(pbVar20 + 8);
            }
            if (sVar2 == sVar1) {
              pbVar19 = *(byte **)(lVar15 + uVar22 * 0x28 + 0x10);
              if ((bVar6 & 1) == 0) {
                pbVar19 = pbVar20 + 1;
              }
              pbVar17 = (byte *)(param_1 + 0x4b1);
              if ((bVar5 & 1) != 0) {
                pbVar17 = *(byte **)(param_1 + 0x4c0);
              }
              if ((bVar6 & 1) == 0) {
                if (sVar1 == 0) {
LAB_00b3701c:
                  uVar22 = uVar22 & 0xffffffff;
                  if ((*(char *)(param_1 + 0x58c) != '\0') &&
                     (*(float *)(lVar15 + uVar22 * 0x28 + 0x1c) < 0.0)) {
                    return 1;
                  }
                  if ((-1 < *(int *)(param_1 + 0x574)) &&
                     (*(float *)(lVar15 + uVar22 * 0x28 + 0x1c) < (float)*(int *)(param_1 + 0x574)))
                  {
                    return 1;
                  }
                  if ((-1 < *(int *)(param_1 + 0x578)) &&
                     ((float)*(int *)(param_1 + 0x578) < *(float *)(lVar15 + uVar22 * 0x28 + 0x1c)))
                  {
                    return 1;
                  }
                  if (*(char *)(param_1 + 0x58d) != '\0') {
                    iVar8 = *(int *)(lVar15 + uVar22 * 0x28 + 0x20);
                    if (iVar8 < 0) {
                      return 1;
                    }
                    if (*(int *)(lVar15 + uVar22 * 0x28 + 0x24) < iVar8) {
                      return 1;
                    }
                  }
                  if (((-1 < *(int *)(param_1 + 0x57c)) &&
                      (iVar8 = *(int *)(lVar15 + uVar22 * 0x28 + 0x20), 0 < iVar8)) &&
                     (iVar8 < *(int *)(param_1 + 0x57c))) {
                    return 1;
                  }
                  if (-1 < *(int *)(param_1 + 0x580)) {
                    iVar8 = *(int *)(lVar15 + uVar22 * 0x28 + 0x20);
                    if (iVar8 < 0) {
                      return 1;
                    }
                    if (*(int *)(param_1 + 0x580) < iVar8) {
                      return 1;
                    }
                  }
                  if (((-1.0 < *(float *)(param_1 + 0x584)) &&
                      (iVar8 = *(int *)(lVar15 + uVar22 * 0x28 + 0x20), -1 < iVar8)) &&
                     ((float)iVar8 / (float)*(int *)(lVar15 + uVar22 * 0x28 + 0x24) <
                      *(float *)(param_1 + 0x584))) {
                    return 1;
                  }
                  if (*(float *)(param_1 + 0x588) <= -1.0) {
                    bVar7 = true;
                  }
                  else {
                    iVar8 = *(int *)(lVar15 + uVar22 * 0x28 + 0x20);
                    if (iVar8 < 0) {
                      return 1;
                    }
                    bVar7 = true;
                    if (*(float *)(param_1 + 0x588) <
                        (float)iVar8 / (float)*(int *)(lVar15 + uVar22 * 0x28 + 0x24)) {
                      return 1;
                    }
                  }
                  break;
                }
                lVar18 = -(ulong)(bVar6 >> 1);
                while (pbVar20 = pbVar20 + 1, *pbVar20 == *pbVar17) {
                  lVar18 = lVar18 + 1;
                  pbVar17 = pbVar17 + 1;
                  if (lVar18 == 0) goto LAB_00b3701c;
                }
              }
              else if ((sVar1 == 0) || (iVar8 = memcmp(pbVar19,pbVar17,sVar1), iVar8 == 0))
              goto LAB_00b3701c;
            }
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar3);
        }
        uVar13 = uVar13 + 1;
        puVar16 = (uint *)FUN_009fadb8(lVar12);
      } while (uVar13 < *puVar16);
      if (!bVar7) {
        return 1;
      }
    }
  }
  else if (*(long *)(param_1 + 0x4b8) != 0) goto LAB_00b36f18;
  uVar13 = FUN_00b37730(param_1 + 0x328);
  if ((uVar13 & 1) != 0) {
    lVar12 = FUN_009fa72c();
    if (lVar12 == 0) {
      bVar7 = false;
    }
    else {
      piVar14 = (int *)FUN_009fadb8(lVar12);
      if (*piVar14 == 0) {
        bVar7 = false;
      }
      else {
        uVar13 = 0;
        bVar7 = false;
        do {
          lVar15 = FUN_009fadb8(lVar12);
          uVar3 = *(uint *)(*(long *)(lVar15 + 8) + uVar13 * 0x98 + 0x68);
          if (uVar3 != 0) {
            bVar5 = *(byte *)(param_1 + 0x330);
            lVar15 = *(long *)(*(long *)(lVar15 + 8) + uVar13 * 0x98 + 0x70);
            uVar22 = 0;
            sVar1 = (ulong)(bVar5 >> 1);
            if ((bVar5 & 1) != 0) {
              sVar1 = *(size_t *)(param_1 + 0x338);
            }
            do {
              pbVar20 = (byte *)(lVar15 + uVar22 * 0x28);
              bVar6 = *pbVar20;
              sVar2 = (ulong)(bVar6 >> 1);
              if ((bVar6 & 1) != 0) {
                sVar2 = *(size_t *)(pbVar20 + 8);
              }
              if (sVar2 == sVar1) {
                pbVar19 = *(byte **)(lVar15 + uVar22 * 0x28 + 0x10);
                if ((bVar6 & 1) == 0) {
                  pbVar19 = pbVar20 + 1;
                }
                pbVar17 = (byte *)(param_1 + 0x331);
                if ((bVar5 & 1) != 0) {
                  pbVar17 = *(byte **)(param_1 + 0x340);
                }
                if ((bVar6 & 1) == 0) {
                  if (sVar1 == 0) {
LAB_00b37278:
                    uVar22 = uVar22 & 0xffffffff;
                    if ((-1 < *(int *)(param_1 + 0x348)) &&
                       (*(int *)(lVar15 + uVar22 * 0x28 + 0x18) < *(int *)(param_1 + 0x348))) {
                      return 1;
                    }
                    if ((-1 < *(int *)(param_1 + 0x34c)) &&
                       (*(int *)(param_1 + 0x34c) < *(int *)(lVar15 + uVar22 * 0x28 + 0x18))) {
                      return 1;
                    }
                    if ((-1 < *(int *)(param_1 + 0x350)) &&
                       (*(int *)(lVar15 + uVar22 * 0x28 + 0x1c) < *(int *)(param_1 + 0x350))) {
                      return 1;
                    }
                    if (*(int *)(param_1 + 0x354) < 0) {
                      bVar7 = true;
                    }
                    else {
                      bVar7 = true;
                      if (*(int *)(param_1 + 0x354) < *(int *)(lVar15 + uVar22 * 0x28 + 0x1c)) {
                        return 1;
                      }
                    }
                    break;
                  }
                  lVar18 = -(ulong)(bVar6 >> 1);
                  while (pbVar20 = pbVar20 + 1, *pbVar20 == *pbVar17) {
                    lVar18 = lVar18 + 1;
                    pbVar17 = pbVar17 + 1;
                    if (lVar18 == 0) goto LAB_00b37278;
                  }
                }
                else if ((sVar1 == 0) || (iVar8 = memcmp(pbVar19,pbVar17,sVar1), iVar8 == 0))
                goto LAB_00b37278;
              }
              uVar22 = uVar22 + 1;
            } while (uVar22 < uVar3);
          }
          uVar13 = uVar13 + 1;
          puVar16 = (uint *)FUN_009fadb8(lVar12);
        } while (uVar13 < *puVar16);
      }
    }
    if ((!bVar7) && (*(int *)(param_1 + 0x358) == 1)) {
      return 1;
    }
    if ((*(int *)(param_1 + 0x358) == 2) && (bVar7)) {
      return 1;
    }
  }
  uVar13 = FUN_00b377e8(param_1 + 0x290);
  if ((uVar13 & 1) != 0) {
    lVar12 = FUN_009fa72c();
    if ((lVar12 != 0) && (piVar14 = (int *)FUN_009fadb8(lVar12), *piVar14 != 0)) {
      uVar13 = 0;
      bVar7 = false;
      do {
        lVar15 = FUN_009fadb8(lVar12);
        uVar3 = *(uint *)(*(long *)(lVar15 + 8) + uVar13 * 0x98 + 0x78);
        if (uVar3 != 0) {
          bVar5 = *(byte *)(param_1 + 0x298);
          lVar15 = *(long *)(*(long *)(lVar15 + 8) + uVar13 * 0x98 + 0x80);
          uVar22 = 0;
          sVar1 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            sVar1 = *(size_t *)(param_1 + 0x2a0);
          }
          do {
            pbVar20 = (byte *)(lVar15 + uVar22 * 0x28);
            bVar6 = *pbVar20;
            sVar2 = (ulong)(bVar6 >> 1);
            if ((bVar6 & 1) != 0) {
              sVar2 = *(size_t *)(pbVar20 + 8);
            }
            if (sVar2 == sVar1) {
              pbVar19 = *(byte **)(lVar15 + uVar22 * 0x28 + 0x10);
              if ((bVar6 & 1) == 0) {
                pbVar19 = pbVar20 + 1;
              }
              pbVar17 = (byte *)(param_1 + 0x299);
              if ((bVar5 & 1) != 0) {
                pbVar17 = *(byte **)(param_1 + 0x2a8);
              }
              if ((bVar6 & 1) == 0) {
                if (sVar1 == 0) {
LAB_00b37448:
                  bVar7 = true;
                  break;
                }
                lVar18 = -(ulong)(bVar6 >> 1);
                while (pbVar20 = pbVar20 + 1, *pbVar20 == *pbVar17) {
                  lVar18 = lVar18 + 1;
                  pbVar17 = pbVar17 + 1;
                  if (lVar18 == 0) goto LAB_00b37448;
                }
              }
              else if ((sVar1 == 0) || (iVar8 = memcmp(pbVar19,pbVar17,sVar1), iVar8 == 0))
              goto LAB_00b37448;
            }
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar3);
        }
        uVar13 = uVar13 + 1;
        puVar16 = (uint *)FUN_009fadb8(lVar12);
      } while (uVar13 < *puVar16);
      if (bVar7) goto LAB_00b37478;
    }
    if (*(char *)(param_1 + 0x321) != '\0') {
      return 1;
    }
  }
LAB_00b37478:
  if (*(int *)(param_1 + 0x374) == 0) {
    return 0;
  }
  uVar13 = FUN_00e702a0(&DAT_0320ffc0,*(undefined4 *)(param_1 + 0x368),
                        *(undefined4 *)(param_1 + 0x36c),*(undefined4 *)(param_1 + 0x370));
  if ((uVar13 & 1) == 0) {
    if (*(int *)(param_1 + 0x374) != 2) {
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x374) != 1) {
    return 0;
  }
  return 1;
}

