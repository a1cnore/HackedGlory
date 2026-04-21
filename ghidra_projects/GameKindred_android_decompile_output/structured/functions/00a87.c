// functions/00a87 — 20 functions
#include "libGameKindred.h"




void FUN_00a87024(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00a88510(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = lVar2 + (ulong)*param_2 * 0x28;
    do {
      FUN_008fcdb8(lVar3,lVar2);
      FUN_00a885fc(lVar3 + 0x18,lVar2 + 0x18);
      lVar2 = lVar2 + 0x28;
      lVar3 = lVar3 + 0x28;
    } while (lVar2 != lVar4);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}




void FUN_00a870a8(uint *param_1,undefined8 *param_2)

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
    FUN_00a8868c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00a87130(uint *param_1,undefined8 *param_2)

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
    FUN_00a8870c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




int FUN_00a871b8(long param_1,uint *param_2)

{
  size_t sVar1;
  byte *pbVar2;
  size_t __n;
  byte *__s1;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  size_t sVar8;
  int iVar9;
  ulong uVar10;
  byte *__s2;
  long lVar11;
  int iVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  
  uVar3 = *param_2;
  if (uVar3 == 0) {
    return 0;
  }
  lVar11 = *(long *)(param_2 + 2);
  uVar4 = *(uint *)(param_1 + 0x38);
  uVar10 = 0;
  iVar12 = 0;
LAB_00a871fc:
  if (uVar4 == 0) {
    return 0;
  }
  pbVar2 = (byte *)(lVar11 + uVar10 * 0x20);
  bVar5 = *pbVar2;
  lVar15 = *(long *)(param_1 + 0x40);
  uVar14 = 0;
  __n = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    __n = *(size_t *)(pbVar2 + 8);
  }
  do {
    pbVar13 = *(byte **)(lVar15 + uVar14 * 8);
    bVar6 = *pbVar13;
    sVar1 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar13 + 8);
    }
    if (__n == sVar1) {
      __s2 = *(byte **)(pbVar13 + 0x10);
      __s1 = pbVar2 + 1;
      if ((bVar5 & 1) != 0) {
        __s1 = *(byte **)(pbVar2 + 0x10);
      }
      if ((bVar6 & 1) == 0) {
        __s2 = pbVar13 + 1;
      }
      pbVar7 = pbVar2 + 1;
      sVar1 = -(ulong)(bVar5 >> 1);
      sVar8 = __n;
      if ((bVar5 & 1) == 0) {
        while (sVar8 != 0) {
          if (*pbVar7 != *__s2) goto LAB_00a872c4;
          __s2 = __s2 + 1;
          sVar1 = sVar1 + 1;
          pbVar7 = pbVar7 + 1;
          sVar8 = sVar1;
        }
      }
      else if ((__n != 0) && (iVar9 = memcmp(__s1,__s2,__n), iVar9 != 0)) goto LAB_00a872c4;
      iVar9 = *(int *)(pbVar13 + 0x48);
      if (*(int *)(pbVar2 + 0x18) <= iVar9) break;
    }
LAB_00a872c4:
    uVar14 = uVar14 + 1;
    if (uVar4 <= uVar14) {
      return iVar12;
    }
  } while( true );
  uVar10 = uVar10 + 1;
  iVar12 = iVar9;
  if (uVar3 <= uVar10) {
    return iVar9;
  }
  goto LAB_00a871fc;
}




void FUN_00a8731c(undefined8 param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  byte local_e8 [16];
  void *local_d8;
  byte local_d0 [16];
  void *local_c0;
  byte local_b8 [16];
  void *local_a8;
  byte local_a0 [16];
  void *local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_008fcdb8(local_70,param_2 + 0x38);
  local_80 = 0;
  uStack_78 = 0;
  if (*(int *)(param_2 + 0x28) != 0) {
    lVar10 = 0;
    uVar11 = 0;
    do {
      memset(local_e8,0,0x60);
      FUN_008fce60(local_e8,*(long *)(param_2 + 0x30) + lVar10 + 0x18);
      FUN_008fce60(local_d0,*(long *)(param_2 + 0x30) + lVar10);
      lVar1 = *(long *)(param_2 + 0x30) + lVar10;
      local_88 = *(undefined4 *)(lVar1 + 0x60);
      FUN_008fce60(local_b8,lVar1 + 0x48);
      FUN_008fce60(local_a0,*(long *)(param_2 + 0x30) + lVar10 + 0x30);
      local_84 = *(undefined4 *)(*(long *)(param_2 + 0x30) + lVar10 + 100);
      FUN_00a87660(&local_80,local_e8);
      if ((local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
      if ((local_d0[0] & 1) != 0) {
        operator_delete(local_c0);
      }
      if ((local_e8[0] & 1) != 0) {
        operator_delete(local_d8);
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x68;
    } while (uVar11 < *(uint *)(param_2 + 0x28));
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    lVar10 = 0;
    uVar11 = 0;
    do {
      uVar6 = FUN_00cdbb18();
      FUN_00cdd418(uVar6,*(long *)(param_2 + 0x58) + lVar10);
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x78;
    } while (uVar11 < *(uint *)(param_2 + 0x50));
  }
  if (*(int *)(param_2 + 0x60) != 0) {
    lVar10 = 0;
    uVar11 = 0;
    do {
      uVar6 = FUN_00a07af0();
      FUN_00a085e0(uVar6,*(long *)(param_2 + 0x68) + lVar10);
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x18;
    } while (uVar11 < *(uint *)(param_2 + 0x60));
  }
  if (*(int *)(param_2 + 0x70) != 0) {
    lVar10 = 0;
    uVar11 = 0;
    do {
      uVar6 = FUN_00a07af0();
      FUN_00a08610(uVar6,*(long *)(param_2 + 0x78) + lVar10);
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x18;
    } while (uVar11 < *(uint *)(param_2 + 0x70));
  }
  iVar5 = (int)local_80;
  uVar6 = FUN_009b8d90();
  if (iVar5 == 0) {
    FUN_009bb89c(uVar6,local_70);
    uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
    uVar8 = FUN_00e6ce7c("MENU_DIALOG_CHEST_REDEMPTION_FAILIRE",0);
    uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar6,uVar8,uVar9,0,0);
  }
  else {
    lVar10 = FUN_00a87720(param_1);
    FUN_008fcdb8(local_e8,lVar10 + 0x80);
    FUN_009bb728(uVar6,local_70,local_e8);
    if ((local_e8[0] & 1) != 0) {
      operator_delete(local_d8);
    }
    uVar6 = FUN_009b8d90();
    FUN_009bb7d4(uVar6,local_70,&local_80);
    FUN_008fa54c(local_e8,&DAT_01e277f2);
    piVar7 = (int *)FUN_00a87720(param_1,local_70);
    if (*piVar7 != 0) {
      FUN_008fce60(local_e8,*(undefined8 *)(piVar7 + 2));
    }
    pvVar2 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar2 = local_60;
    }
    pvVar3 = (void *)((ulong)local_e8 | 1);
    if ((local_e8[0] & 1) != 0) {
      pvVar3 = local_d8;
    }
    FUN_0090d138(pvVar2,pvVar3);
    if ((local_e8[0] & 1) != 0) {
      operator_delete(local_d8);
    }
  }
  FUN_008fefd4(&local_80,1);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a87660(uint *param_1,long param_2)

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
    FUN_009369b0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x68;
  FUN_008fcdb8(lVar4 + -0x68,param_2);
  FUN_008fcdb8(lVar4 + -0x50,param_2 + 0x18);
  FUN_008fcdb8(lVar4 + -0x38,param_2 + 0x30);
  FUN_008fcdb8(lVar4 + -0x20,param_2 + 0x48);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x60);
  return;
}




long FUN_00a87720(long param_1,byte *param_2)

{
  size_t __n;
  byte *__s2;
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  void *__s1;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar7 = *(long *)(param_1 + 0x30);
    uVar6 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      lVar5 = *(long *)(lVar7 + uVar6 * 8);
      bVar2 = *(byte *)(lVar5 + 0x20);
      uVar4 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar4 = *(ulong *)(lVar5 + 0x28);
      }
      if (uVar4 == __n) {
        __s1 = *(void **)(lVar5 + 0x30);
        if ((bVar2 & 1) == 0) {
          __s1 = (void *)(lVar5 + 0x21);
        }
        if ((bVar2 & 1) == 0) {
          if (__n == 0) {
            return lVar5;
          }
          uVar4 = 0;
          while (*(byte *)(lVar5 + uVar4 + 0x21) == __s2[uVar4]) {
            uVar4 = uVar4 + 1;
            if (bVar2 >> 1 == uVar4) {
              return lVar5;
            }
          }
        }
        else {
          if (__n == 0) {
            return lVar5;
          }
          iVar3 = memcmp(__s1,__s2,__n);
          if (iVar3 == 0) {
            return lVar5;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return 0;
}




void FUN_00a877f8(void)

{
  long lVar1;
  undefined8 uVar2;
  byte local_50 [16];
  void *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  uStack_30 = 0;
  FUN_008fa54c(local_50,"chest");
  FUN_0096204c(&local_38,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa54c(local_50,"key");
  FUN_0096204c(&local_38,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa54c(local_50,"hat");
  FUN_0096204c(&local_38,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa54c(local_50,"craftingmaterial");
  FUN_0096204c(&local_38,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  uVar2 = FUN_009580b8();
  FUN_0095f0e8(uVar2,&local_38);
  FUN_00951534(&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a87904(void)

{
  long lVar1;
  undefined8 uVar2;
  byte local_50 [16];
  void *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  uStack_30 = 0;
  FUN_008fa54c(local_50,"chest");
  FUN_0096204c(&local_38,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa54c(local_50,"key");
  FUN_0096204c(&local_38,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa54c(local_50,"hat");
  FUN_0096204c(&local_38,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa54c(local_50,"craftingmaterial");
  FUN_0096204c(&local_38,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  uVar2 = FUN_009580b8();
  FUN_0095f0e8(uVar2,&local_38);
  FUN_00951534(&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a87a10(long param_1)

{
  if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xa8));
  }
  if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x90));
  }
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x78));
  }
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  FUN_00a8823c(param_1 + 0x10,1);
  FUN_00a87e6c(param_1,1);
  return;
}




void FUN_00a87aa0(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *__s2;
  byte *pbVar6;
  long lVar7;
  void *__s1;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  if (uVar2 != 0) {
    lVar9 = *(long *)(param_1 + 0x30);
    uVar8 = 0;
    do {
      lVar10 = *(long *)(lVar9 + uVar8 * 8);
      if (lVar10 != 0) {
        bVar3 = *(byte *)(lVar10 + 0x20);
        bVar4 = *param_2;
        __n = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          __n = *(size_t *)(lVar10 + 0x28);
        }
        sVar1 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar1 = *(size_t *)(param_2 + 8);
        }
        if (__n == sVar1) {
          __s1 = *(void **)(lVar10 + 0x30);
          if ((bVar3 & 1) == 0) {
            __s1 = (void *)(lVar10 + 0x21);
          }
          __s2 = param_2 + 1;
          if ((bVar4 & 1) != 0) {
            __s2 = *(byte **)(param_2 + 0x10);
          }
          if ((bVar3 & 1) == 0) {
            if (__n != 0) {
              pbVar6 = (byte *)(lVar10 + 0x21);
              lVar7 = -(ulong)(bVar3 >> 1);
              do {
                if (*pbVar6 != *__s2) goto LAB_00a87b6c;
                pbVar6 = pbVar6 + 1;
                lVar7 = lVar7 + 1;
                __s2 = __s2 + 1;
              } while (lVar7 != 0);
            }
          }
          else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00a87b6c;
          *(undefined1 *)(lVar10 + 0xb4) = 1;
        }
      }
LAB_00a87b6c:
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  return;
}




bool FUN_00a87b90(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  void *__s1;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar9 = *(long *)(param_1 + 0x30);
    uVar8 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      lVar10 = *(long *)(lVar9 + uVar8 * 8);
      if (lVar10 != 0) {
        bVar3 = *(byte *)(lVar10 + 0x20);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = *(ulong *)(lVar10 + 0x28);
        }
        if (uVar1 == __n) {
          __s1 = *(void **)(lVar10 + 0x30);
          if ((bVar3 & 1) == 0) {
            __s1 = (void *)(lVar10 + 0x21);
          }
          if ((bVar3 & 1) == 0) {
            if (__n == 0) {
LAB_00a87c60:
              return *(char *)(lVar10 + 0xb4) != '\0';
            }
            pbVar5 = (byte *)(lVar10 + 0x21);
            lVar6 = -(ulong)(bVar3 >> 1);
            pbVar7 = __s2;
            while (*pbVar5 == *pbVar7) {
              pbVar5 = pbVar5 + 1;
              lVar6 = lVar6 + 1;
              pbVar7 = pbVar7 + 1;
              if (lVar6 == 0) goto LAB_00a87c60;
            }
          }
          else if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) goto LAB_00a87c60;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  return false;
}




byte * FUN_00a87c80(long param_1,byte *param_2)

{
  size_t __n;
  byte *__s2;
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  byte *__s1;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar7 = *(long *)(param_1 + 0x40);
    uVar6 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      pbVar5 = *(byte **)(lVar7 + uVar6 * 8);
      bVar2 = *pbVar5;
      uVar4 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar4 = *(ulong *)(pbVar5 + 8);
      }
      if (uVar4 == __n) {
        __s1 = *(byte **)(pbVar5 + 0x10);
        if ((bVar2 & 1) == 0) {
          __s1 = pbVar5 + 1;
        }
        if ((bVar2 & 1) == 0) {
          if (__n == 0) {
            return pbVar5;
          }
          uVar4 = 0;
          while (pbVar5[uVar4 + 1] == __s2[uVar4]) {
            uVar4 = uVar4 + 1;
            if (bVar2 >> 1 == uVar4) {
              return pbVar5;
            }
          }
        }
        else {
          if (__n == 0) {
            return pbVar5;
          }
          iVar3 = memcmp(__s1,__s2,__n);
          if (iVar3 == 0) {
            return pbVar5;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return (byte *)0x0;
}




void FUN_00a87d54(uint *param_1,long param_2)

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
    FUN_00a88404(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x48;
  FUN_008fcdb8(lVar4 + -0x48,param_2);
  FUN_008fcdb8(lVar4 + -0x30,param_2 + 0x18);
  FUN_008fcdb8(lVar4 + -0x18,param_2 + 0x30);
  return;
}




void FUN_00a87dfc(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x68);
  FUN_00a85694();
  DAT_03133540 = pvVar1;
  return;
}




void FUN_00a87e2c(void)

{
  if (DAT_03133540 != (long *)0x0) {
    (**(code **)(*DAT_03133540 + 8))();
  }
  DAT_03133540 = (long *)0x0;
  return;
}




undefined8 FUN_00a87e60(void)

{
  return DAT_03133540;
}




void FUN_00a87e6c(uint *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x28;
      lVar1 = *(long *)(param_1 + 2) + 0x18;
      do {
        FUN_00a87ef4(lVar1,1);
        if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + -8));
        }
        lVar2 = lVar2 + -0x28;
        lVar1 = lVar1 + 0x28;
      } while (lVar2 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_00a87ef4(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 5;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        lVar1 = lVar1 + -0x20;
        puVar2 = puVar2 + 4;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_00a87f6c(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 << 5);
    pvVar4 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar2 = (void *)((long)pvVar4 + (ulong)*param_1 * 0x20);
      pvVar7 = pvVar3;
      do {
        FUN_008fcdb8(pvVar7,pvVar4);
        puVar1 = (undefined4 *)((long)pvVar4 + 0x18);
        pvVar4 = (void *)((long)pvVar4 + 0x20);
        *(undefined4 *)((long)pvVar7 + 0x18) = *puVar1;
        pvVar7 = (void *)((long)pvVar7 + 0x20);
      } while (pvVar4 != pvVar2);
      pvVar4 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 << 5;
        puVar5 = (undefined8 *)((long)pvVar4 + 0x10);
        do {
          if ((*(byte *)(puVar5 + -2) & 1) != 0) {
            operator_delete((void *)*puVar5);
          }
          lVar6 = lVar6 + -0x20;
          puVar5 = puVar5 + 4;
        } while (lVar6 != 0);
        pvVar4 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}

