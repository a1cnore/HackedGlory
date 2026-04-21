// functions/00a01 — 25 functions
#include "libGameKindred.h"




void FUN_00a01034(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar14 = *param_2;
  uVar4 = FUN_00e6a474(uVar14);
  uVar5 = FUN_0091ed5c(uVar14,uVar4,0x12345678);
  uVar10 = param_1[4];
  uVar9 = *param_1;
  param_1[4] = uVar10 + 1;
  if (uVar9 >> 1 < uVar10 + 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar9 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar10 = *param_1;
    uVar11 = uVar10 - 1;
    uVar9 = (uint)local_58;
    if ((int)uVar11 < 0) {
      pvVar7 = *(void **)(param_1 + 2);
    }
    else {
      pvVar7 = *(void **)(param_1 + 2);
      do {
        iVar6 = *(int *)((long)pvVar7 + (ulong)uVar11 * 8 + 4);
        if (iVar6 != -1) {
          uVar10 = *(uint *)((long)pvVar7 + (ulong)uVar11 * 8);
          uVar2 = 0;
          if ((uint)local_58 != 0) {
            uVar2 = uVar10 / (uint)local_58;
          }
          uVar12 = (ulong)(uVar10 - uVar2 * (uint)local_58);
          piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
          iVar1 = *piVar13;
          while (iVar1 != -1) {
            uVar2 = (uint)local_58;
            if (0 < (int)(uint)uVar12) {
              uVar2 = (uint)uVar12;
            }
            uVar12 = (ulong)(uVar2 - 1);
            piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
            iVar1 = *piVar13;
          }
          *(uint *)((long)local_50 + uVar12 * 8) = uVar10;
          *piVar13 = iVar6;
        }
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
      uVar10 = *param_1;
    }
    uVar11 = param_1[1];
    *param_1 = (uint)local_58;
    param_1[1] = local_58._4_4_;
    local_58 = CONCAT44(uVar11,uVar10);
    *(void **)(param_1 + 2) = local_50;
    local_50 = pvVar7;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar9 = *param_1;
    }
  }
  lVar8 = *(long *)(param_1 + 2);
  uVar10 = 0;
  if (uVar9 != 0) {
    uVar10 = uVar5 / uVar9;
  }
  uVar12 = (ulong)(uVar5 - uVar10 * uVar9);
  piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
  iVar6 = *piVar13;
  while (iVar6 != -1) {
    uVar10 = uVar9;
    if (0 < (int)(uint)uVar12) {
      uVar10 = (uint)uVar12;
    }
    uVar12 = (ulong)(uVar10 - 1);
    piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
    iVar6 = *piVar13;
  }
  *(uint *)(lVar8 + uVar12 * 8) = uVar5;
  iVar6 = FUN_00a028ac(param_1,param_3);
  *piVar13 = iVar6;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00a0120c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar4 = FUN_00e6a474(uVar7);
  uVar5 = FUN_0091ed5c(uVar7,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if ((uVar3 != 0xffffffff) &&
       (uVar2 = *(uint *)(lVar6 + (ulong)uVar3 * 8 + 4), uVar2 != 0xffffffff)) {
      return *(long *)(param_1 + 8) + (ulong)uVar2 * 8;
    }
  }
  return 0;
}




long FUN_00a012b4(void)

{
  long lVar1;
  
  lVar1 = 0;
  if (DAT_031308d0 != 0) {
    lVar1 = DAT_031308d0 + 0x60;
  }
  return lVar1;
}




void FUN_00a012cc(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  uVar6 = 0;
  do {
    uVar3 = uVar6;
    uVar4 = (ulong)uVar3;
    if (uVar1 <= uVar3) break;
    uVar6 = uVar3 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x38) + uVar4 * 8 + 4) == -1);
  iVar8 = 0;
  iVar7 = 0;
  iVar2 = 0;
  if (uVar1 != uVar3) {
    iVar2 = 0;
    iVar7 = 0;
    iVar8 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x50) +
                       (ulong)*(uint *)(*(long *)(param_1 + 0x38) + uVar4 * 8 + 4) * 8);
      if (((*(char *)(lVar5 + 0xd8) != '\0') && (*(char *)(lVar5 + 0xd9) == '\0')) &&
         (uVar6 = *(uint *)(lVar5 + 0x40), uVar6 < 10)) {
        if ((1 << (ulong)(uVar6 & 0x1f) & 0x23bU) == 0) {
          if (uVar6 == 2) {
            iVar8 = iVar8 + 1;
          }
          else if (uVar6 == 7) {
            iVar7 = iVar7 + 1;
          }
        }
        else {
          iVar2 = iVar2 + 1;
        }
      }
      uVar6 = (uint)uVar4;
      do {
        uVar6 = uVar6 + 1;
        uVar4 = (ulong)uVar6;
        if (uVar1 <= uVar6) break;
      } while (*(int *)(*(long *)(param_1 + 0x38) + uVar4 * 8 + 4) == -1);
    } while (uVar1 != uVar6);
  }
  FUN_0099cf94(param_1 + 0x88,iVar2);
  FUN_0099cf94(param_1 + 0xa8,iVar8);
  FUN_0099cf94(param_1 + 200,iVar7);
  return;
}




void FUN_00a01400(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  long lVar2;
  size_t __n;
  size_t sVar3;
  byte *__s1;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  int iVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  byte *__s2;
  byte *pbVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint *local_78;
  undefined1 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
    lVar18 = param_2 + 0x39;
  }
  else {
    lVar18 = *(long *)(param_2 + 0x48);
  }
  if (DAT_031308d0 == 0) {
    puVar9 = (uint *)0x0;
  }
  else {
    puVar9 = (uint *)FUN_00a0177c(DAT_031308d0,lVar18);
    if ((puVar9 != (uint *)0x0) && (*(char *)(param_2 + 0x68) != '\0')) {
      uVar4 = *(uint *)(param_2 + 0x60);
      *(undefined2 *)((long)puVar9 + 0xd9) = 1;
      puVar9[0x33] = uVar4;
      if (*puVar9 != 0) {
        pbVar16 = *(byte **)(puVar9 + 2);
        do {
          uVar4 = *(uint *)(param_2 + 0x50);
          if (uVar4 != 0) {
            bVar5 = *pbVar16;
            lVar18 = *(long *)(param_2 + 0x58);
            uVar20 = 0;
            __n = (ulong)(bVar5 >> 1);
            if ((bVar5 & 1) != 0) {
              __n = *(size_t *)(pbVar16 + 8);
            }
            do {
              pbVar1 = (byte *)(lVar18 + uVar20 * 0x40);
              bVar6 = *pbVar1;
              sVar3 = (ulong)(bVar6 >> 1);
              if ((bVar6 & 1) != 0) {
                sVar3 = *(size_t *)(pbVar1 + 8);
              }
              if (__n == sVar3) {
                __s2 = *(byte **)(pbVar1 + 0x10);
                __s1 = pbVar16 + 1;
                if ((bVar5 & 1) != 0) {
                  __s1 = *(byte **)(pbVar16 + 0x10);
                }
                if ((bVar6 & 1) == 0) {
                  __s2 = pbVar1 + 1;
                }
                if ((bVar5 & 1) == 0) {
                  if (__n == 0) {
LAB_00a0153c:
                    lVar19 = lVar18 + (uVar20 & 0xffffffff) * 0x40;
                    if ((*(byte *)(lVar19 + 0x18) & 1) == 0) {
                      lVar19 = lVar19 + 0x19;
                    }
                    else {
                      lVar19 = *(long *)(lVar19 + 0x28);
                    }
                    FUN_009f6a38(pbVar16,lVar19);
                    lVar18 = lVar18 + (uVar20 & 0xffffffff) * 0x40;
                    puVar17 = (uint *)(lVar18 + 0x30);
                    FUN_009f6a6c(pbVar16,*puVar17);
                    if (*puVar17 != 0) {
                      lVar19 = 0;
                      uVar20 = 0;
                      do {
                        lVar14 = *(long *)(lVar18 + 0x38);
                        if ((*(byte *)(lVar14 + lVar19) & 1) == 0) {
                          lVar10 = lVar14 + lVar19 + 1;
                        }
                        else {
                          lVar10 = *(long *)(lVar14 + lVar19 + 0x10);
                        }
                        lVar11 = lVar14 + lVar19;
                        if ((*(byte *)(lVar11 + 0x18) & 1) == 0) {
                          lVar11 = lVar11 + 0x19;
                        }
                        else {
                          lVar11 = *(long *)(lVar11 + 0x28);
                        }
                        lVar2 = lVar14 + lVar19;
                        if ((*(byte *)(lVar2 + 0x30) & 1) == 0) {
                          lVar12 = lVar2 + 0x31;
                        }
                        else {
                          lVar12 = *(long *)(lVar2 + 0x40);
                        }
                        lVar13 = lVar14 + lVar19;
                        if ((*(byte *)(lVar13 + 0x48) & 1) == 0) {
                          lVar13 = lVar13 + 0x49;
                        }
                        else {
                          lVar13 = *(long *)(lVar13 + 0x58);
                        }
                        FUN_009f6c84(pbVar16,lVar10,lVar11,*(undefined4 *)(lVar2 + 0x60),lVar12,
                                     lVar13,*(undefined4 *)(lVar14 + lVar19 + 100));
                        uVar20 = uVar20 + 1;
                        lVar19 = lVar19 + 0x68;
                      } while (uVar20 < *puVar17);
                    }
                    break;
                  }
                  uVar15 = 0;
                  while (pbVar16[uVar15 + 1] == __s2[uVar15]) {
                    uVar15 = uVar15 + 1;
                    if (bVar5 >> 1 == uVar15) {
                      if (pbVar1 == (byte *)0x0) goto LAB_00a0161c;
                      goto LAB_00a0153c;
                    }
                  }
                }
                else if ((__n == 0) || (iVar8 = memcmp(__s1,__s2,__n), iVar8 == 0))
                goto LAB_00a0153c;
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 < uVar4);
          }
LAB_00a0161c:
          pbVar16 = pbVar16 + 0x58;
        } while (pbVar16 != (byte *)(*(long *)(puVar9 + 2) + (ulong)*puVar9 * 0x58));
      }
    }
  }
  local_70 = *(undefined1 *)(param_2 + 0x68);
  lVar18 = 0;
  if (DAT_031308d0 != 0) {
    lVar18 = DAT_031308d0 + 0x70;
  }
  local_78 = puVar9;
  FUN_00a016ec(lVar18,&local_78);
  if (local_78 != (uint *)0x0) {
    FUN_00909ba8();
  }
  FUN_00a01eec(DAT_031308d0);
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00a016b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_031308d0 != 0) {
    uVar1 = FUN_00a0177c(DAT_031308d0,param_1);
    return uVar1;
  }
  return 0;
}




long FUN_00a016d4(void)

{
  long lVar1;
  
  lVar1 = 0;
  if (DAT_031308d0 != 0) {
    lVar1 = DAT_031308d0 + 0x70;
  }
  return lVar1;
}




void FUN_00a016ec(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void FUN_00a01758(void)

{
  FUN_00a01eec(DAT_031308d0);
  return;
}




void FUN_00a01764(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x2d) != '\0') {
    FUN_00a01eec(DAT_031308d0);
    return;
  }
  return;
}




void FUN_00a0177c(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_40 = param_2;
  uVar5 = FUN_00e6a474(param_2);
  uVar6 = FUN_0091ed5c(param_2,uVar5,0x12345678);
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar2 != 0) {
    lVar9 = *(long *)(param_1 + 0x38);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar6 / uVar2;
    }
    uVar3 = uVar6 - uVar3 * uVar2;
    while ((*(uint *)(lVar9 + (ulong)uVar3 * 8) != uVar6 &&
           (*(int *)(lVar9 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if ((uVar3 != 0xffffffff) && (*(int *)(lVar9 + (ulong)uVar3 * 8 + 4) != -1)) {
      puVar7 = (undefined8 *)FUN_00a01864((uint *)(param_1 + 0x30),&local_40);
      uVar8 = *puVar7;
      goto LAB_00a0183c;
    }
  }
  uVar8 = 0;
LAB_00a0183c:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}




long FUN_00a01864(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  uVar4 = FUN_00e6a474(uVar8);
  uVar5 = FUN_0091ed5c(uVar8,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if (uVar3 != 0xffffffff) {
      uVar7 = (ulong)*(uint *)(lVar6 + (ulong)uVar3 * 8 + 4);
      goto LAB_00a018f0;
    }
  }
  uVar7 = 0xffffffff;
LAB_00a018f0:
  return *(long *)(param_1 + 8) + uVar7 * 8;
}




void FUN_00a01904(undefined8 *param_1,long param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *(uint *)(param_2 + 0x30);
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar2 = (ulong)uVar3;
    if (uVar1 <= uVar3) break;
    uVar4 = uVar3 + 1;
  } while (*(int *)(*(long *)(param_2 + 0x38) + uVar2 * 8 + 4) == -1);
  if (uVar1 != uVar3) {
    do {
      if (*(int *)(*(long *)(*(long *)(param_2 + 0x50) +
                            (ulong)*(uint *)(*(long *)(param_2 + 0x38) + uVar2 * 8 + 4) * 8) + 0x40)
          == param_3) {
        FUN_00a00b1c(param_1);
        uVar1 = *(uint *)(param_2 + 0x30);
      }
      uVar4 = (uint)uVar2;
      do {
        uVar4 = uVar4 + 1;
        uVar2 = (ulong)uVar4;
        if (uVar1 <= uVar4) break;
      } while (*(int *)(*(long *)(param_2 + 0x38) + uVar2 * 8 + 4) == -1);
    } while (uVar1 != uVar4);
  }
  return;
}




void FUN_00a019d8(undefined8 *param_1,uint *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_2 != 0) {
    uVar2 = 0;
    do {
      FUN_00a01904(&local_58,DAT_031308d0,*(undefined4 *)(*(long *)(param_2 + 2) + uVar2 * 4));
      FUN_00a01aa0(param_1,param_1[1],local_50,
                   (void *)((long)local_50 + (local_58 & 0xffffffff) * 8));
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a01a90(undefined4 param_1)

{
  FUN_00a01904(DAT_031308d0,param_1);
  return;
}




undefined8 * FUN_00a01aa0(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  
  if (param_3 != param_4) {
    uVar1 = *param_1;
    uVar7 = (ulong)uVar1;
    uVar5 = param_1[1];
    puVar13 = *(undefined8 **)(param_1 + 2);
    uVar15 = (ulong)((long)param_4 - (long)param_3) >> 3;
    uVar14 = (uint)uVar15;
    uVar16 = (long)param_2 - (long)puVar13;
    if (uVar5 - uVar1 < uVar14) {
      uVar1 = uVar1 + uVar14;
      if (uVar5 < 0x20) {
        uVar5 = uVar5 << 1;
      }
      else if (uVar5 == 0xffffffff) {
        uVar5 = 0;
      }
      else {
        uVar5 = (uVar5 + 0x10) - (uVar5 & 0xf);
      }
      uVar14 = uVar1;
      if (uVar1 <= uVar5) {
        uVar14 = uVar5;
      }
      puVar3 = operator_new__((ulong)uVar14 << 3);
      puVar6 = puVar3;
      for (; puVar13 != param_2; puVar13 = puVar13 + 1) {
        *puVar6 = *puVar13;
        puVar6 = puVar6 + 1;
      }
      puVar13 = puVar3 + (uVar16 >> 3 & 0xffffffff);
      puVar6 = puVar13;
      do {
        puVar8 = param_3 + 1;
        *puVar6 = *param_3;
        puVar6 = puVar6 + 1;
        param_3 = puVar8;
      } while (param_4 != puVar8);
      pvVar4 = *(void **)(param_1 + 2);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar7 * 8);
      if (puVar6 != param_2) {
        puVar8 = puVar13 + (uVar15 & 0xffffffff);
        do {
          puVar12 = param_2 + 1;
          *puVar8 = *param_2;
          puVar8 = puVar8 + 1;
          param_2 = puVar12;
        } while (puVar6 != puVar12);
        pvVar4 = *(void **)(param_1 + 2);
      }
      if (pvVar4 != (void *)0x0) {
        operator_delete__(pvVar4);
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      *(undefined8 **)(param_1 + 2) = puVar3;
      *param_1 = uVar1;
      param_1[1] = uVar14;
      param_2 = puVar13;
    }
    else {
      puVar13 = puVar13 + uVar7;
      uVar9 = (long)puVar13 - (long)param_2;
      uVar10 = uVar9 >> 3;
      uVar15 = (ulong)((long)param_4 - (long)param_3) >> 3 & 0xffffffff;
      if (uVar14 < (uint)uVar10) {
        puVar6 = puVar13 + -uVar15;
        if (uVar15 != 0) {
          lVar11 = 0;
          do {
            *(undefined8 *)((long)puVar13 + lVar11) = *(undefined8 *)((long)puVar6 + lVar11);
            lVar11 = lVar11 + 8;
          } while (lVar11 != uVar15 * 8);
          puVar6 = (undefined8 *)(*(long *)(param_1 + 2) + uVar7 * 8 + uVar15 * -8);
        }
        lVar11 = (long)puVar6 - (long)param_2;
        if (lVar11 != 0) {
          do {
            puVar6 = puVar6 + -1;
            lVar2 = lVar11 + uVar15 * 8;
            lVar11 = lVar11 + -8;
            *(undefined8 *)((long)param_2 + lVar2 + -8) = *puVar6;
          } while (lVar11 != 0);
        }
        do {
          puVar13 = param_3 + 1;
          *param_2 = *param_3;
          param_2 = param_2 + 1;
          param_3 = puVar13;
        } while (param_4 != puVar13);
      }
      else {
        puVar6 = param_2;
        if (puVar13 != param_2) {
          do {
            puVar6[uVar15] = *puVar6;
            puVar6 = puVar6 + 1;
          } while (puVar13 != puVar6);
          puVar13 = (undefined8 *)(*(long *)(param_1 + 2) + uVar7 * 8);
        }
        uVar7 = uVar9 >> 3 & 0xffffffff;
        for (puVar6 = param_3 + (uVar10 & 0xffffffff); puVar6 != param_4; puVar6 = puVar6 + 1) {
          *puVar13 = *puVar6;
          puVar13 = puVar13 + 1;
        }
        if (uVar7 != 0) {
          lVar11 = uVar7 << 3;
          do {
            lVar11 = lVar11 + -8;
            *param_2 = *param_3;
            param_2 = param_2 + 1;
            param_3 = param_3 + 1;
          } while (lVar11 != 0);
        }
      }
      *param_1 = uVar1 + uVar14;
      param_2 = (undefined8 *)(*(long *)(param_1 + 2) + (uVar16 >> 3 & 0xffffffff) * 8);
    }
  }
  return param_2;
}




void FUN_00a01ce0(undefined8 param_1)

{
  long lVar1;
  undefined4 local_3c;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  local_30 = (void *)0x0;
  local_3c = 3;
  FUN_00a01da4(&local_38,&local_3c);
  local_3c = 5;
  FUN_00a01da4(&local_38,&local_3c);
  local_3c = 0;
  FUN_00a01da4(&local_38,&local_3c);
  local_3c = 1;
  FUN_00a01da4(&local_38,&local_3c);
  local_3c = 4;
  FUN_00a01da4(&local_38,&local_3c);
  FUN_00a019d8(param_1,&local_38);
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




void FUN_00a01da4(uint *param_1,undefined4 *param_2)

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
    FUN_00a02a44(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_00a01e2c(undefined8 param_1)

{
  long lVar1;
  undefined4 local_3c;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  local_30 = (void *)0x0;
  local_3c = 3;
  FUN_00a01da4(&local_38,&local_3c);
  local_3c = 0;
  FUN_00a01da4(&local_38,&local_3c);
  local_3c = 1;
  FUN_00a01da4(&local_38,&local_3c);
  local_3c = 4;
  FUN_00a01da4(&local_38,&local_3c);
  FUN_00a019d8(param_1,&local_38);
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




long FUN_00a01edc(long param_1)

{
  return param_1 + 0x60;
}




long FUN_00a01ee4(long param_1)

{
  return param_1 + 0x70;
}




void FUN_00a01eec(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_009580c4();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_009580b8();
    uVar1 = FUN_00962a18(uVar2,1);
    if ((uVar1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x81) = 1;
    }
  }
  return;
}




undefined1 FUN_00a01f28(long param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}




undefined * FUN_00a01f30(int param_1)

{
  return (&PTR_s_player_02be3308)[param_1];
}




void FUN_00a01f40(undefined8 param_1,int param_2)

{
  long lVar1;
  size_t sVar2;
  ulong *puVar3;
  char *__s;
  byte local_88 [16];
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_88,"[");
  __s = (&PTR_s_player_02be3308)[param_2];
  sVar2 = strlen(__s);
  puVar3 = (ulong *)FUN_0090de84(local_88,__s,sVar2);
  local_60 = (void *)puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar3 = (ulong *)FUN_0090de84(&local_70,&DAT_01e21cb0,1);
  local_40 = (void *)puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_008fcdb8(param_1,&local_50);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

