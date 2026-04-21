// functions/00bca — 26 functions
#include "libGameKindred.h"




void FUN_00bca0cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ec618;
  if ((*(byte *)(param_1 + 0xd) & 1) != 0) {
    operator_delete((void *)param_1[0xf]);
  }
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    operator_delete((void *)param_1[0xc]);
  }
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[9]);
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}




void FUN_00bca150(long param_1)

{
  FUN_00bc9f60(param_1 + -0x10);
  return;
}




void FUN_00bca158(long param_1)

{
  FUN_00bc9f60(param_1 + -0xa8);
  return;
}




void FUN_00bca160(void *param_1)

{
  FUN_00bc9f60();
  operator_delete(param_1);
  return;
}




void FUN_00bca184(long param_1)

{
  FUN_00bc9f60((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bca1ac(long param_1)

{
  FUN_00bc9f60((void *)(param_1 + -0xa8));
  operator_delete((void *)(param_1 + -0xa8));
  return;
}




void FUN_00bca1d4(long param_1)

{
  FUN_00c227c0(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bca1dc(long param_1)

{
  FUN_00c227c0(*(undefined8 *)(param_1 + -8));
  return;
}




void FUN_00bca1e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_00bcf3f4(param_1 + 0x10);
  FUN_00cdf7c4();
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_00cdfb54();
  FUN_00c22c90(uVar2,uVar1);
  FUN_00c227c0(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bca224(long param_1)

{
  FUN_00bca1e4(param_1 + -0x10);
  return;
}




void FUN_00bca22c(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *__s1;
  ulong uVar10;
  byte local_a0 [16];
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar5 = FUN_00cdbb24(param_2);
  if ((lVar5 != 0) && ((*(ushort *)(lVar5 + 0xb0) >> 8 & 1) != 0)) {
    FUN_008fa718(local_a0);
    lVar6 = FUN_00cdf7c4();
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    uVar10 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      lVar7 = lVar6 + uVar10 * 0xd0;
      bVar2 = *(byte *)(lVar7 + 0x10);
      uVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(ulong *)(lVar7 + 0x18);
      }
      if (uVar1 == __n) {
        __s1 = *(void **)(lVar6 + uVar10 * 0xd0 + 0x20);
        if ((bVar2 & 1) == 0) {
          __s1 = (void *)(lVar7 + 0x11);
        }
        if ((bVar2 & 1) == 0) {
          if (__n == 0) {
LAB_00bca32c:
            lVar6 = lVar6 + (uVar10 & 0xffffffff) * 0xd0;
            FUN_008fce60(local_a0,lVar6 + 0x40);
            uStack_80 = *(undefined8 *)(lVar6 + 0x60);
            local_88 = *(undefined8 *)(lVar6 + 0x58);
            uStack_70 = *(undefined8 *)(lVar6 + 0x70);
            local_78 = *(undefined8 *)(lVar6 + 0x68);
            uStack_60 = *(undefined8 *)(lVar6 + 0x80);
            local_68 = *(undefined8 *)(lVar6 + 0x78);
            break;
          }
          pbVar8 = (byte *)(lVar7 + 0x11);
          lVar7 = -(ulong)(bVar2 >> 1);
          pbVar9 = __s2;
          while (*pbVar8 == *pbVar9) {
            pbVar8 = pbVar8 + 1;
            lVar7 = lVar7 + 1;
            pbVar9 = pbVar9 + 1;
            if (lVar7 == 0) goto LAB_00bca32c;
          }
        }
        else if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) goto LAB_00bca32c;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 3);
    uVar10 = FUN_00cabb6c(local_a0);
    if ((uVar10 & 1) == 0) {
      FUN_00bca40c();
    }
    else {
      FUN_00cdf7d4(param_2,0);
      if ((*(byte *)(lVar5 + 0x78) & 1) == 0) {
        lVar6 = lVar5 + 0x79;
      }
      else {
        lVar6 = *(long *)(lVar5 + 0x88);
      }
      if ((*(byte *)(lVar5 + 0x90) & 1) == 0) {
        lVar7 = lVar5 + 0x91;
      }
      else {
        lVar7 = *(long *)(lVar5 + 0xa0);
      }
      lVar5 = FUN_00cdda38(lVar5);
      FUN_00906d44(lVar6,lVar7,*(undefined4 *)(lVar5 + 0x18),1,local_88._4_4_);
    }
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bca40c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0 [2];
  void *local_a0;
  void *local_98;
  byte local_88;
  void *local_78;
  byte local_70;
  void *local_60;
  undefined8 local_54;
  undefined4 local_4c;
  byte local_48;
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_b0,"MENU_TALENT_PURCHASE_POPUP");
  FUN_00affa44(local_b0);
  if (((byte)local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  FUN_00aff894(local_b0);
  uVar2 = FUN_00e6ce7c("MENU_MARKET_GLORY_PURCHASE_POPUP_TITLE",0);
  thunk_FUN_00e7051c(&local_c0,uVar2);
  FUN_00910394(&local_a0,&local_c0);
  local_b0[0] = 0x447a000044c80000;
  local_4c = 1;
  FUN_00aff91c(local_b0,PTR_s_build___MenuPartsCommon_tga_02be3530,"popup_fill",&DAT_01bba09a);
  local_54 = 0xffa3781effa4781e;
  uVar2 = FUN_00aa2040(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_02be9d38,local_b0);
  FUN_00cbd980(uVar2,0);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = 0;
    local_b8 = (void *)0x0;
  }
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = (void *)0x0;
    local_98 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bca55c(long param_1)

{
  FUN_00bca22c(param_1 + -0xa0);
  return;
}




void FUN_00bca564(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *__s1;
  ulong uVar10;
  byte local_a0 [16];
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar5 = FUN_00cdbb24(param_2);
  if (lVar5 != 0) {
    FUN_008fa718(local_a0);
    lVar6 = FUN_00cdf7c4();
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    uVar10 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      lVar7 = lVar6 + uVar10 * 0xd0;
      bVar2 = *(byte *)(lVar7 + 0x10);
      uVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(ulong *)(lVar7 + 0x18);
      }
      if (uVar1 == __n) {
        __s1 = *(void **)(lVar6 + uVar10 * 0xd0 + 0x20);
        if ((bVar2 & 1) == 0) {
          __s1 = (void *)(lVar7 + 0x11);
        }
        if ((bVar2 & 1) == 0) {
          if (__n == 0) {
LAB_00bca660:
            lVar6 = lVar6 + (uVar10 & 0xffffffff) * 0xd0;
            iVar4 = *(int *)(lVar6 + 0xd8) - *(int *)(lVar6 + 0xd4);
            FUN_008fce60(local_a0,lVar6 + 0x88);
            uStack_80 = *(undefined8 *)(lVar6 + 0xa8);
            local_88 = *(undefined8 *)(lVar6 + 0xa0);
            uStack_70 = *(undefined8 *)(lVar6 + 0xb8);
            local_78 = *(undefined8 *)(lVar6 + 0xb0);
            uStack_60 = *(undefined8 *)(lVar6 + 200);
            local_68 = *(undefined8 *)(lVar6 + 0xc0);
            goto LAB_00bca698;
          }
          pbVar8 = (byte *)(lVar7 + 0x11);
          lVar7 = -(ulong)(bVar2 >> 1);
          pbVar9 = __s2;
          while (*pbVar8 == *pbVar9) {
            pbVar8 = pbVar8 + 1;
            lVar7 = lVar7 + 1;
            pbVar9 = pbVar9 + 1;
            if (lVar7 == 0) goto LAB_00bca660;
          }
        }
        else if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) goto LAB_00bca660;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 3);
    iVar4 = 0;
LAB_00bca698:
    uVar10 = FUN_00cabb6c(local_a0);
    if ((uVar10 & 1) == 0) {
      FUN_00bca40c();
    }
    else {
      FUN_00cdf7d4(param_2,1);
      if ((*(byte *)(lVar5 + 0x78) & 1) == 0) {
        lVar6 = lVar5 + 0x79;
      }
      else {
        lVar6 = *(long *)(lVar5 + 0x88);
      }
      if ((*(byte *)(lVar5 + 0x90) & 1) == 0) {
        lVar7 = lVar5 + 0x91;
      }
      else {
        lVar7 = *(long *)(lVar5 + 0xa0);
      }
      lVar5 = FUN_00cdda38(lVar5);
      FUN_00906d44(lVar6,lVar7,*(undefined4 *)(lVar5 + 0x18),iVar4,local_88._4_4_);
    }
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bca564(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *__s1;
  ulong uVar10;
  byte abStack_a0 [16];
  void *pvStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar3 = tpidr_el0;
  lStack_58 = *(long *)(lVar3 + 0x28);
  lVar5 = FUN_00cdbb24(param_2);
  if (lVar5 != 0) {
    FUN_008fa718(abStack_a0);
    lVar6 = FUN_00cdf7c4();
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    uVar10 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      lVar7 = lVar6 + uVar10 * 0xd0;
      bVar2 = *(byte *)(lVar7 + 0x10);
      uVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(ulong *)(lVar7 + 0x18);
      }
      if (uVar1 == __n) {
        __s1 = *(void **)(lVar6 + uVar10 * 0xd0 + 0x20);
        if ((bVar2 & 1) == 0) {
          __s1 = (void *)(lVar7 + 0x11);
        }
        if ((bVar2 & 1) == 0) {
          if (__n == 0) {
LAB_00bca660:
            lVar6 = lVar6 + (uVar10 & 0xffffffff) * 0xd0;
            iVar4 = *(int *)(lVar6 + 0xd8) - *(int *)(lVar6 + 0xd4);
            FUN_008fce60(abStack_a0,lVar6 + 0x88);
            uStack_80 = *(undefined8 *)(lVar6 + 0xa8);
            uStack_88 = *(undefined8 *)(lVar6 + 0xa0);
            uStack_70 = *(undefined8 *)(lVar6 + 0xb8);
            uStack_78 = *(undefined8 *)(lVar6 + 0xb0);
            uStack_60 = *(undefined8 *)(lVar6 + 200);
            uStack_68 = *(undefined8 *)(lVar6 + 0xc0);
            goto LAB_00bca698;
          }
          pbVar8 = (byte *)(lVar7 + 0x11);
          lVar7 = -(ulong)(bVar2 >> 1);
          pbVar9 = __s2;
          while (*pbVar8 == *pbVar9) {
            pbVar8 = pbVar8 + 1;
            lVar7 = lVar7 + 1;
            pbVar9 = pbVar9 + 1;
            if (lVar7 == 0) goto LAB_00bca660;
          }
        }
        else if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) goto LAB_00bca660;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 3);
    iVar4 = 0;
LAB_00bca698:
    uVar10 = FUN_00cabb6c(abStack_a0);
    if ((uVar10 & 1) == 0) {
      FUN_00bca40c();
    }
    else {
      FUN_00cdf7d4(param_2,1);
      if ((*(byte *)(lVar5 + 0x78) & 1) == 0) {
        lVar6 = lVar5 + 0x79;
      }
      else {
        lVar6 = *(long *)(lVar5 + 0x88);
      }
      if ((*(byte *)(lVar5 + 0x90) & 1) == 0) {
        lVar7 = lVar5 + 0x91;
      }
      else {
        lVar7 = *(long *)(lVar5 + 0xa0);
      }
      lVar5 = FUN_00cdda38(lVar5);
      FUN_00906d44(lVar6,lVar7,*(undefined4 *)(lVar5 + 0x18),iVar4,uStack_88._4_4_);
    }
    if ((abStack_a0[0] & 1) != 0) {
      operator_delete(pvStack_90);
    }
  }
  if (*(long *)(lVar3 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bca74c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50,"MENU_TALENT_PURCHASE_POPUP");
  FUN_00affa44(local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  lVar2 = FUN_00cdbb24(param_2);
  if ((lVar2 != 0) && ((*(ushort *)(lVar2 + 0xb0) >> 8 & 1) != 0)) {
    FUN_00cae740(0x44e10000,0x44960000,param_2,1,0);
    (**(code **)*param_1)(param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bca808(long param_1)

{
  FUN_00bca74c(param_1 + -0xa0);
  return;
}




void FUN_00bca810(long param_1)

{
  FUN_00c227c0(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bca818(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte *__s2;
  long lVar9;
  byte *pbVar10;
  void *__s1;
  byte local_110 [16];
  void *local_100;
  undefined1 auStack_f8 [16];
  undefined8 local_e8;
  void *local_e0;
  byte local_d0;
  void *local_c0;
  byte local_b8;
  void *local_a8;
  byte local_90;
  void *local_80;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  lVar6 = FUN_00cdbb24(param_2);
  if ((lVar6 != 0) && ((*(ushort *)(lVar6 + 0xb0) >> 8 & 1) != 0)) {
    FUN_00cae3d8(auStack_f8,0x44af0000,0x447a0000,param_2,1);
    lVar7 = FUN_00bcaa40("MENU_TALENT_PURCHASE_POPUP",auStack_f8);
    FUN_00b220c8(lVar7,param_2);
    lVar8 = FUN_00cdf7c4();
    lVar6 = 0;
    do {
      lVar9 = lVar8 + lVar6 * 0xd0;
      bVar2 = *(byte *)(lVar9 + 0x10);
      bVar3 = *param_2;
      __n = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(lVar9 + 0x18);
      }
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
      }
      if (__n == sVar1) {
        __s1 = *(void **)(lVar8 + lVar6 * 0xd0 + 0x20);
        if ((bVar2 & 1) == 0) {
          __s1 = (void *)(lVar9 + 0x11);
        }
        __s2 = param_2 + 1;
        if ((bVar3 & 1) != 0) {
          __s2 = *(byte **)(param_2 + 0x10);
        }
        if ((bVar2 & 1) == 0) {
          if (__n != 0) {
            pbVar10 = (byte *)(lVar9 + 0x11);
            lVar9 = -(ulong)(bVar2 >> 1);
            do {
              if (*pbVar10 != *__s2) goto LAB_00bca9b8;
              pbVar10 = pbVar10 + 1;
              lVar9 = lVar9 + 1;
              __s2 = __s2 + 1;
            } while (lVar9 != 0);
          }
        }
        else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00bca9b8;
        FUN_008fa54c(local_110,"glory_icon_small");
        FUN_00b2214c(lVar7,local_110,*(undefined4 *)(lVar8 + lVar6 * 0xd0 + 0x5c));
        if ((local_110[0] & 1) != 0) {
          operator_delete(local_100);
        }
        FUN_008fa54c(local_110,"glory_icon_small");
        FUN_00b222e4(lVar7,local_110,*(undefined4 *)(lVar8 + lVar6 * 0xd0 + 0xa4));
        if ((local_110[0] & 1) != 0) {
          operator_delete(local_100);
        }
        lVar9 = lVar8 + lVar6 * 0xd0;
        FUN_00b22484(lVar7,*(int *)(lVar9 + 0xd8) - *(int *)(lVar9 + 0xd4));
      }
LAB_00bca9b8:
      lVar6 = lVar6 + 1;
    } while (lVar6 != 3);
    *(long *)(lVar7 + 0x5678) = param_1 + 0xa0;
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if ((local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    if (local_e0 != (void *)0x0) {
      operator_delete__(local_e0);
      local_e8 = 0;
      local_e0 = (void *)0x0;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bcaa40(undefined8 param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50,param_1);
  FUN_008fce60(param_2 + 0x68,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  pvVar2 = operator_new(0x5698);
  FUN_00b21658();
  *(void **)(param_2 + 0x80) = pvVar2;
  FUN_00affc48(DAT_03139948,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(param_2 + 0x80));
}




void FUN_00bcaae4(int *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  byte local_c8 [16];
  void *local_b8;
  ulong local_b0 [2];
  void *local_a0;
  ulong auStack_98 [2];
  void *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined1 uStack_70;
  byte bStack_6f;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00bcad08(param_1,3);
  lVar2 = FUN_00cdbb18();
  if (*(char *)(lVar2 + 200) != '\0') {
    lVar3 = FUN_00cdf7c4();
    lVar2 = 0;
    do {
      pbVar8 = (byte *)(lVar3 + lVar2 * 0xd0 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        if (*pbVar8 >> 1 != 0) {
LAB_00bcab78:
          auStack_98[0] = 0;
          local_a0 = (void *)0x0;
          local_88 = (void *)0x0;
          auStack_98[1] = 0;
          local_b0[1] = 0;
          local_b0[0] = 0;
          local_80 = 0xff000000;
          uStack_74 = 0;
          uStack_70 = 0;
          bStack_6f = 0;
          local_7c = 0;
          uStack_78 = 0;
          uStack_76 = 0;
          FUN_008fce60(auStack_98,pbVar8);
          FUN_008fa54c(local_c8,"glory_icon_small");
          FUN_008fce60(local_b0,local_c8);
          if ((local_c8[0] & 1) != 0) {
            operator_delete(local_b8);
          }
          lVar6 = lVar3 + lVar2 * 0xd0;
          uVar7 = *(uint *)(lVar6 + 0x5c);
          uStack_78 = (undefined2)uVar7;
          uStack_76 = (undefined2)(uVar7 >> 0x10);
          lVar4 = FUN_009580b8();
          local_80 = 0xff1111a1;
          if (uVar7 <= *(uint *)(lVar4 + 0x5454)) {
            local_80 = 0xffffffff;
          }
          uStack_70 = *(undefined1 *)(lVar6 + 0xd0);
          uStack_74 = *(undefined4 *)(lVar6 + 0xd4);
          lVar4 = FUN_00cdbb24(pbVar8);
          if ((lVar4 != 0) && ((*(ushort *)(lVar4 + 0xb0) >> 8 & 1) != 0)) {
            bStack_6f = FUN_00cdccb0(lVar4);
            bStack_6f = bStack_6f & 1;
            lVar4 = FUN_00cdda38(lVar4);
            local_7c = *(undefined4 *)(lVar4 + 0x18);
          }
          FUN_00bcae08(param_1,local_b0);
          uVar7 = *param_1 - 1;
          if (0 < (int)uVar7) {
            lVar4 = (ulong)(*param_1 - 2) * 0x48 + 0x34;
            lVar6 = (ulong)uVar7 * 0x48;
            do {
              lVar5 = *(long *)(param_1 + 2);
              if (*(uint *)(lVar5 + lVar6 + 0x34) < *(uint *)(lVar5 + lVar4)) {
                FUN_00bcaeb8(lVar5 + lVar6,lVar5 + lVar4 + -0x34);
              }
              uVar7 = uVar7 - 1;
              lVar4 = lVar4 + -0x48;
              lVar6 = lVar6 + -0x48;
            } while (0 < (int)uVar7);
          }
          if ((auStack_98[0] & 1) != 0) {
            operator_delete(local_88);
          }
          if ((local_b0[0] & 1) != 0) {
            operator_delete(local_a0);
          }
        }
      }
      else if (*(long *)(lVar3 + lVar2 * 0xd0 + 0x18) != 0) goto LAB_00bcab78;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 3);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bcad08(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  byte *pbVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x48);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x48);
      pvVar6 = pvVar2;
      do {
        FUN_008fcdb8(pvVar6,pvVar3);
        FUN_008fcdb8((long)pvVar6 + 0x18,(long)pvVar3 + 0x18);
        *(undefined2 *)((long)pvVar6 + 0x40) = *(undefined2 *)((long)pvVar3 + 0x40);
        puVar1 = (undefined8 *)((long)pvVar3 + 0x38);
        uVar8 = *(undefined8 *)((long)pvVar3 + 0x30);
        pvVar3 = (void *)((long)pvVar3 + 0x48);
        *(undefined8 *)((long)pvVar6 + 0x38) = *puVar1;
        *(undefined8 *)((long)pvVar6 + 0x30) = uVar8;
        pvVar6 = (void *)((long)pvVar6 + 0x48);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x48;
        pbVar4 = (byte *)((long)pvVar3 + 0x18);
        do {
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x10));
          }
          if ((pbVar4[-0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
          lVar5 = lVar5 + -0x48;
          pbVar4 = pbVar4 + 0x48;
        } while (lVar5 != 0);
        pvVar3 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    *(void **)(param_1 + 2) = pvVar2;
  }
  return;
}




void FUN_00bcae08(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
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
    FUN_00bcad08(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x48;
  FUN_008fcdb8(lVar4 + -0x48,param_2);
  FUN_008fcdb8(lVar4 + -0x30,param_2 + 0x18);
  *(undefined2 *)(lVar4 + -8) = *(undefined2 *)(param_2 + 0x40);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(lVar4 + -0x18) = uVar5;
  return;
}




void FUN_00bcaeb8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong local_90 [2];
  void *local_80;
  ulong auStack_78 [2];
  void *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined2 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  auStack_78[0] = 0;
  local_80 = (void *)0x0;
  local_68 = (void *)0x0;
  auStack_78[1] = 0;
  local_90[1] = 0;
  local_90[0] = 0;
  local_60 = 0xff000000;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_56 = 0;
  FUN_008fce60(local_90,param_1);
  FUN_008fce60(auStack_78,param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = (undefined2)uVar2;
  uStack_56 = (undefined2)((ulong)uVar2 >> 0x10);
  uStack_54 = (undefined4)((ulong)uVar2 >> 0x20);
  local_60 = (undefined4)*(undefined8 *)(param_1 + 0x30);
  uStack_5c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  uStack_50 = *(undefined2 *)(param_1 + 0x40);
  FUN_008fce60(param_1,param_2);
  FUN_008fce60(param_1 + 0x18,param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x40);
  FUN_008fce60(param_2,local_90);
  FUN_008fce60(param_2 + 0x18,auStack_78);
  *(undefined2 *)(param_2 + 0x40) = uStack_50;
  *(ulong *)(param_2 + 0x38) = CONCAT44(uStack_54,CONCAT22(uStack_56,uStack_58));
  *(ulong *)(param_2 + 0x30) = CONCAT44(uStack_5c,local_60);
  if ((auStack_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bcaae4(int *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  byte abStack_c8 [16];
  void *pvStack_b8;
  ulong auStack_b0 [2];
  void *pvStack_a0;
  ulong auStack_98 [2];
  void *pvStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined1 uStack_70;
  byte bStack_6f;
  long lStack_68;
  
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00bcad08(param_1,3);
  lVar2 = FUN_00cdbb18();
  if (*(char *)(lVar2 + 200) != '\0') {
    lVar3 = FUN_00cdf7c4();
    lVar2 = 0;
    do {
      pbVar8 = (byte *)(lVar3 + lVar2 * 0xd0 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        if (*pbVar8 >> 1 != 0) {
LAB_00bcab78:
          auStack_98[0] = 0;
          pvStack_a0 = (void *)0x0;
          pvStack_88 = (void *)0x0;
          auStack_98[1] = 0;
          auStack_b0[1] = 0;
          auStack_b0[0] = 0;
          uStack_80 = 0xff000000;
          uStack_74 = 0;
          uStack_70 = 0;
          bStack_6f = 0;
          uStack_7c = 0;
          uStack_78 = 0;
          uStack_76 = 0;
          FUN_008fce60(auStack_98,pbVar8);
          FUN_008fa54c(abStack_c8,"glory_icon_small");
          FUN_008fce60(auStack_b0,abStack_c8);
          if ((abStack_c8[0] & 1) != 0) {
            operator_delete(pvStack_b8);
          }
          lVar6 = lVar3 + lVar2 * 0xd0;
          uVar7 = *(uint *)(lVar6 + 0x5c);
          uStack_78 = (undefined2)uVar7;
          uStack_76 = (undefined2)(uVar7 >> 0x10);
          lVar4 = FUN_009580b8();
          uStack_80 = 0xff1111a1;
          if (uVar7 <= *(uint *)(lVar4 + 0x5454)) {
            uStack_80 = 0xffffffff;
          }
          uStack_70 = *(undefined1 *)(lVar6 + 0xd0);
          uStack_74 = *(undefined4 *)(lVar6 + 0xd4);
          lVar4 = FUN_00cdbb24(pbVar8);
          if ((lVar4 != 0) && ((*(ushort *)(lVar4 + 0xb0) >> 8 & 1) != 0)) {
            bStack_6f = FUN_00cdccb0(lVar4);
            bStack_6f = bStack_6f & 1;
            lVar4 = FUN_00cdda38(lVar4);
            uStack_7c = *(undefined4 *)(lVar4 + 0x18);
          }
          FUN_00bcae08(param_1,auStack_b0);
          uVar7 = *param_1 - 1;
          if (0 < (int)uVar7) {
            lVar4 = (ulong)(*param_1 - 2) * 0x48 + 0x34;
            lVar6 = (ulong)uVar7 * 0x48;
            do {
              lVar5 = *(long *)(param_1 + 2);
              if (*(uint *)(lVar5 + lVar6 + 0x34) < *(uint *)(lVar5 + lVar4)) {
                FUN_00bcaeb8(lVar5 + lVar6,lVar5 + lVar4 + -0x34);
              }
              uVar7 = uVar7 - 1;
              lVar4 = lVar4 + -0x48;
              lVar6 = lVar6 + -0x48;
            } while (0 < (int)uVar7);
          }
          if ((auStack_98[0] & 1) != 0) {
            operator_delete(pvStack_88);
          }
          if ((auStack_b0[0] & 1) != 0) {
            operator_delete(pvStack_a0);
          }
        }
      }
      else if (*(long *)(lVar3 + lVar2 * 0xd0 + 0x18) != 0) goto LAB_00bcab78;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 3);
  }
  if (*(long *)(lVar1 + 0x28) != lStack_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bcafd8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_00c227c0(*(undefined8 *)(param_1 + 8));
  FUN_00cdf7c4();
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_00cdfb54();
  FUN_00c22c90(uVar2,uVar1);
  return;
}

