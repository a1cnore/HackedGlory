// functions/00933 — 29 functions
#include "libGameKindred.h"




void FUN_009330b4(uint *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      if (*(int *)(*(long *)(param_1 + 2) + lVar3) != -1) {
        FUN_009347c4(param_1);
        uVar1 = (ulong)*param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar1);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_00933134(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec5f3c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5f58();
    uVar1 = FUN_00932e44(param_1);
    if ((uVar1 & 1) == 0) {
      FUN_008f6b34(0,1);
      FUN_008fa130(0,1);
      thunk_FUN_00ecb45c(1);
      return;
    }
  }
  return;
}




void FUN_00933190(long param_1,char *param_2)

{
  ulong uVar1;
  size_t sVar2;
  
  uVar1 = FUN_00ec5f3c();
  if ((uVar1 & 1) != 0) {
    sVar2 = strlen(param_2);
    FUN_008fcea8(param_1 + 0x70,param_2,sVar2);
    FUN_00933134(param_1);
    return;
  }
  return;
}




long FUN_009331f0(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  iVar1 = FUN_009329e0(param_2);
  plVar4 = (long *)(param_1 + 0x48);
  plVar3 = (long *)*plVar4;
  plVar2 = plVar4;
  if (plVar3 != (long *)0x0) {
    do {
      if (iVar1 <= (int)plVar3[4]) {
        plVar2 = plVar3;
      }
      plVar3 = (long *)plVar3[(int)plVar3[4] < iVar1];
    } while (plVar3 != (long *)0x0);
    if (plVar2 != plVar4) {
      if (iVar1 < (int)plVar2[4]) {
        return 0;
      }
      return plVar2[5];
    }
  }
  return 0;
}




long FUN_0093325c(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 0x48);
  plVar4 = (long *)*plVar1;
  plVar3 = plVar1;
  if (plVar4 != (long *)0x0) {
    do {
      if (param_2 <= (int)plVar4[4]) {
        plVar3 = plVar4;
      }
      plVar4 = (long *)plVar4[(int)plVar4[4] < param_2];
    } while (plVar4 != (long *)0x0);
    if (plVar3 != plVar1) {
      lVar2 = 0;
      if ((int)plVar3[4] <= param_2) {
        lVar2 = plVar3[5];
      }
      return lVar2;
    }
  }
  return 0;
}




bool FUN_009332a8(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_009329e0(param_2);
  return iVar1 == *(int *)(param_1 + 0x68);
}




void FUN_009332d8(long param_1,byte param_2)

{
  FUN_00ec5f74(param_2 & 1);
  *(byte *)(param_1 + 0x88) = param_2 & 1;
  return;
}




undefined1 FUN_00933304(long param_1)

{
  return *(undefined1 *)(param_1 + 0x88);
}




void FUN_0093330c(long param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  uVar2 = FUN_00ec5f3c();
  if ((uVar2 & 1) != 0) {
    iVar1 = FUN_009329e0(param_2);
    plVar3 = (long *)(param_1 + 0x48);
    plVar4 = (long *)*plVar3;
    if (plVar4 != (long *)0x0) {
      plVar5 = plVar3;
      do {
        if (iVar1 <= (int)plVar4[4]) {
          plVar5 = plVar4;
        }
        plVar4 = (long *)plVar4[(int)plVar4[4] < iVar1];
      } while (plVar4 != (long *)0x0);
      if ((plVar5 != plVar3) && ((int)plVar5[4] <= iVar1)) {
        uVar2 = FUN_00ec5f5c();
        if ((uVar2 & 1) != 0) {
          if (iVar1 == *(int *)(param_1 + 0x68)) {
            FUN_00ec5f78(param_3 & 1);
          }
          else {
            FUN_00ec5f7c(iVar1,param_3 & 1);
          }
        }
        if (plVar5[5] != 0) {
          *(byte *)(plVar5[5] + 0x20) = param_3 & 1;
        }
      }
    }
  }
  return;
}




bool FUN_009333cc(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_00ec5f3c();
  bVar1 = false;
  if (((uVar2 & 1) != 0) && (lVar3 = FUN_009331f0(param_1,param_2), bVar1 = false, lVar3 != 0)) {
    bVar1 = *(char *)(lVar3 + 0x20) != '\0';
  }
  return bVar1;
}




bool FUN_00933418(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_00ec5f3c();
  bVar1 = false;
  if (((uVar2 & 1) != 0) && (lVar3 = FUN_009331f0(param_1,param_2), bVar1 = false, lVar3 != 0)) {
    bVar1 = *(char *)(lVar3 + 0x22) != '\0';
  }
  return bVar1;
}




undefined4 FUN_00933464(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_00ec5f3c();
  uVar1 = 0;
  if (((uVar2 & 1) != 0) && (lVar3 = FUN_009331f0(param_1,param_2), uVar1 = 0, lVar3 != 0)) {
    uVar1 = *(undefined4 *)(lVar3 + 0x1c);
  }
  return uVar1;
}




void FUN_009334a8(long param_1,ulong param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  undefined1 uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  char *__s2;
  char *pcVar7;
  long lVar8;
  void *__s1;
  long lVar9;
  long local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_40 = param_1 + 0x48;
  uVar6 = FUN_00933610(param_1,param_2,&local_40);
  if ((uVar6 & 1) == 0) {
    FUN_00ec5f7c(param_2 & 0xffffffff,1);
    goto LAB_009335e8;
  }
  lVar9 = *(long *)(local_40 + 0x28);
  *(undefined1 *)(lVar9 + 0x21) = 1;
  if (*(int *)(param_1 + 0x68) == (int)param_2) {
    uVar3 = *(undefined1 *)(param_1 + 0x88);
    FUN_00ec5f74(uVar3);
    *(undefined1 *)(param_1 + 0x88) = uVar3;
    bVar2 = *(byte *)(param_1 + 0x70);
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(param_1 + 0x78);
    }
    sVar1 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (__n == sVar1) {
      __s1 = *(void **)(param_1 + 0x80);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(param_1 + 0x71);
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar7 = (char *)(param_1 + 0x71);
          lVar8 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar7 != *__s2) goto LAB_009335c4;
            pcVar7 = pcVar7 + 1;
            lVar8 = lVar8 + 1;
            __s2 = __s2 + 1;
          } while (lVar8 != 0);
        }
      }
      else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_009335c4;
    }
    else {
LAB_009335c4:
      FUN_008fce60((byte *)(param_1 + 0x70),&DAT_0320ffa8);
      FUN_00932388();
    }
    FUN_00ec5f78(*(undefined1 *)(lVar9 + 0x20));
  }
  else {
    FUN_00ec5f7c(*(undefined4 *)(lVar9 + 0x18),*(undefined1 *)(lVar9 + 0x20));
  }
  FUN_009322c0(lVar9);
LAB_009335e8:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00933610(long param_1,int param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  int local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)(param_1 + 0x48);
  plVar8 = (long *)*plVar4;
  plVar6 = plVar4;
  local_2c = param_2;
  if (plVar8 != (long *)0x0) {
    do {
      if (param_2 <= (int)plVar8[4]) {
        plVar6 = plVar8;
      }
      plVar8 = (long *)plVar8[(int)plVar8[4] < param_2];
    } while (plVar8 != (long *)0x0);
    if ((plVar6 != plVar4) && ((int)plVar6[4] <= param_2)) {
      *param_3 = (long)plVar6;
      uVar3 = 1;
      goto LAB_009336a0;
    }
  }
  *param_3 = (long)plVar4;
  uVar1 = *(uint *)(param_1 + 0x58);
  if (uVar1 != 0) {
    lVar7 = (ulong)uVar1 << 2;
    piVar5 = *(int **)(param_1 + 0x60);
    do {
      if (*piVar5 == param_2) goto LAB_0093369c;
      lVar7 = lVar7 + -4;
      piVar5 = piVar5 + 1;
    } while (lVar7 != 0);
  }
  FUN_00933c34((uint *)(param_1 + 0x58),&local_2c);
LAB_0093369c:
  uVar3 = 0;
LAB_009336a0:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}




void FUN_009336d0(long param_1,undefined8 param_2)

{
  long lVar1;
  int *piVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (long *)(param_1 + 0x48);
  uVar4 = FUN_00933610(param_1,param_2,&local_40);
  if ((uVar4 & 1) == 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 0x58) << 2;
    piVar2 = *(int **)(param_1 + 0x60);
    do {
      piVar6 = piVar2;
      if (lVar5 == 0) goto LAB_009337ec;
      lVar5 = lVar5 + -4;
      piVar2 = piVar6 + 1;
    } while (*piVar6 != (int)param_2);
    FUN_009342e4((uint *)(param_1 + 0x58),piVar6);
  }
  else if ((*(int *)(param_1 + 0x68) == (int)param_2) &&
          (uVar4 = FUN_00932e44(param_1), (uVar4 & 1) != 0)) {
    plVar7 = *(long **)(param_1 + 0x40);
    while (plVar7 != (long *)(param_1 + 0x48)) {
      *(undefined1 *)(plVar7[5] + 0x21) = 0;
      plVar8 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        plVar8 = plVar7 + 2;
        bVar3 = *(long **)*plVar8 != plVar7;
        plVar7 = (long *)*plVar8;
        if (bVar3) {
          do {
            lVar5 = *plVar8;
            plVar8 = (long *)(lVar5 + 0x10);
            plVar7 = (long *)*plVar8;
          } while (*plVar7 != lVar5);
        }
      }
      else {
        do {
          plVar7 = plVar8;
          plVar8 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    }
    if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
      lVar5 = param_1 + 0x71;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x80);
    }
    FUN_00932ca4(param_1,lVar5);
  }
  else {
    *(undefined1 *)(local_40[5] + 0x21) = 0;
    FUN_00932324();
  }
LAB_009337ec:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00933814(void)

{
  return;
}




void FUN_00933818(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  timespec local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar4 = clock_gettime(1,&local_48);
  lVar7 = local_48.tv_nsec - *(long *)(param_1 + 0x38);
  lVar6 = local_48.tv_sec - *(long *)(param_1 + 0x30);
  if (lVar7 < 0) {
    lVar6 = lVar6 + -1;
    lVar7 = (local_48.tv_nsec + 1000000000) - *(long *)(param_1 + 0x38);
  }
  if (*(long **)(param_1 + 0x40) != (long *)(param_1 + 0x48)) {
    lVar8 = *(long *)(param_2 + 2);
    uVar1 = *param_2;
    bVar3 = false;
    plVar5 = *(long **)(param_1 + 0x40);
    do {
      if (uVar1 != 0) {
        lVar9 = plVar5[5];
        lVar12 = (ulong)uVar1 << 3;
        piVar13 = (int *)(lVar8 + 4);
        do {
          if (((*(int *)(lVar9 + 0x18) == piVar13[-1]) ||
              ((piVar13[-1] == 0 && (*(int *)(lVar9 + 0x18) == *(int *)(param_1 + 0x68))))) &&
             (0 < *piVar13)) {
            bVar3 = true;
            *(int *)(lVar9 + 0x1c) = *piVar13;
            *(undefined1 *)(lVar9 + 0x22) = 1;
            *(double *)(lVar9 + 0x10) = (double)(lVar7 + lVar6 * 1000000000) * 1e-09 + 1.0;
            break;
          }
          lVar12 = lVar12 + -8;
          piVar13 = piVar13 + 2;
        } while (lVar12 != 0);
      }
      plVar10 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        plVar10 = plVar5 + 2;
        plVar11 = (long *)*plVar10;
        if ((long *)*plVar11 != plVar5) {
          do {
            lVar12 = *plVar10;
            plVar10 = (long *)(lVar12 + 0x10);
            plVar11 = (long *)*plVar10;
          } while (*plVar11 != lVar12);
        }
      }
      else {
        do {
          plVar11 = plVar10;
          plVar10 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
      plVar5 = plVar11;
    } while (plVar11 != (long *)(param_1 + 0x48));
    if (bVar3) {
      FUN_009323dc(iVar4);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00933998(void)

{
  return;
}




void FUN_0093399c(void)

{
  return;
}




void FUN_009339a0(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long local_70;
  ulong local_68;
  undefined8 *local_60;
  long local_58;
  undefined8 *puVar9;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_2 + 0x84) != 0) goto LAB_00933b74;
  uVar3 = FUN_00e84e5c(param_2);
  if ((uVar3 & 1) != 0) {
    uVar3 = (ulong)*(uint *)(param_2 + 0x70);
    if (*(uint *)(param_2 + 0x70) != 0) {
      uVar10 = 0;
      lVar11 = 0x2c;
      do {
        if (*(int *)(*(long *)(param_2 + 0x78) + lVar11) == 1) {
          uVar3 = FUN_009580c4();
          uVar2 = 0;
          if ((uVar3 & 1) != 0) {
            lVar5 = *(long *)(param_2 + 0x78);
            FUN_009580b8();
            uVar4 = FUN_0095fdf0();
            uVar2 = FUN_00e70b34(lVar5 + lVar11 + -0x14,uVar4);
          }
          FUN_0093289c(param_1,*(long *)(param_2 + 0x78) + lVar11 + -0x14,uVar2 & 1);
          uVar3 = (ulong)*(uint *)(param_2 + 0x70);
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x88;
      } while (uVar10 < uVar3);
    }
    local_68 = 0;
    local_60 = (undefined8 *)0x0;
    plVar12 = *(long **)(param_1 + 0x40);
    if (*(long **)(param_1 + 0x40) != (long *)(param_1 + 0x48)) {
      do {
        lVar11 = plVar12[5];
        if ((int)uVar3 != 0) {
          uVar3 = 0;
          lVar5 = 0x18;
          do {
            uVar10 = FUN_00e70b34(lVar11,*(long *)(param_2 + 0x78) + lVar5);
            if ((uVar10 & 1) != 0) goto LAB_00933ac4;
            uVar3 = uVar3 + 1;
            lVar5 = lVar5 + 0x88;
          } while (uVar3 < *(uint *)(param_2 + 0x70));
        }
        local_70 = lVar11;
        FUN_00933ba4(&local_68,&local_70);
LAB_00933ac4:
        plVar6 = (long *)plVar12[1];
        if ((long *)plVar12[1] == (long *)0x0) {
          plVar6 = plVar12 + 2;
          plVar7 = (long *)*plVar6;
          if ((long *)*plVar7 != plVar12) {
            do {
              lVar11 = *plVar6;
              plVar6 = (long *)(lVar11 + 0x10);
              plVar7 = (long *)*plVar6;
            } while (*plVar7 != lVar11);
          }
        }
        else {
          do {
            plVar7 = plVar6;
            plVar6 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
        if (plVar7 == (long *)(param_1 + 0x48)) goto code_r0x00933b18;
        uVar3 = (ulong)*(uint *)(param_2 + 0x70);
        plVar12 = plVar7;
      } while( true );
    }
  }
  goto LAB_00933b58;
code_r0x00933b18:
  puVar8 = local_60;
  if ((int)local_68 != 0) {
    do {
      puVar9 = puVar8 + 1;
      FUN_00932a9c(param_1,*puVar8);
      puVar8 = puVar9;
    } while (puVar9 != local_60 + (local_68 & 0xffffffff));
  }
  if (local_60 != (undefined8 *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (undefined8 *)0x0;
  }
LAB_00933b58:
  if ((*(int *)(param_1 + 0x50) == 1) && (uVar3 = FUN_00ec5f5c(), (uVar3 & 1) != 0)) {
    FUN_00933134(param_1);
  }
LAB_00933b74:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00933ba4(uint *param_1,undefined8 *param_2)

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
    FUN_00934aec(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00933c2c(long param_1)

{
  FUN_009339a0(param_1 + -0x18);
  return;
}




void FUN_00933c34(uint *param_1,undefined4 *param_2)

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
    FUN_00932524(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_00933cbc(undefined8 param_1)

{
  size_t __n;
  size_t sVar1;
  char *__s1;
  byte bVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  char *__s2;
  byte local_50 [8];
  size_t local_48;
  char *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_00a06b24();
  iVar6 = FUN_00a06c4c();
  if (iVar6 != 0) {
    FUN_00a06b24();
    iVar6 = FUN_00a06c4c();
    if (iVar6 != 1) {
      FUN_00a06b24();
      iVar6 = FUN_00a06c4c();
      if (iVar6 != 2) goto LAB_00933de8;
    }
  }
  FUN_00a06b24();
  iVar6 = FUN_00a06c54();
  if (iVar6 != 3) goto LAB_00933de8;
  uVar7 = FUN_009580c4();
  if ((uVar7 & 1) == 0) {
    uVar7 = FUN_00ec5f5c();
  }
  else {
    lVar8 = FUN_009580b8();
    cVar3 = *(char *)(lVar8 + 0x568a);
    uVar7 = FUN_00ec5f5c();
    if (cVar3 != '\0') {
      if ((uVar7 & 1) == 0) goto LAB_00933de8;
      FUN_00ec5f64(local_50);
      lVar8 = FUN_009580b8();
      bVar2 = *(byte *)(lVar8 + 0x54c0);
      __n = (ulong)(local_50[0] >> 1);
      if ((local_50[0] & 1) != 0) {
        __n = local_48;
      }
      sVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        sVar1 = *(size_t *)(lVar8 + 0x54c8);
      }
      if (__n == sVar1) {
        __s2 = *(char **)(lVar8 + 0x54d0);
        pcVar9 = (char *)((ulong)local_50 | 1);
        __s1 = pcVar9;
        if ((local_50[0] & 1) != 0) {
          __s1 = local_40;
        }
        if ((bVar2 & 1) == 0) {
          __s2 = (char *)(lVar8 + 0x54c1);
        }
        if ((local_50[0] & 1) == 0) {
          if (__n == 0) goto LAB_00933de8;
          lVar8 = -(ulong)(local_50[0] >> 1);
          do {
            if (*pcVar9 != *__s2) goto LAB_00933e0c;
            pcVar9 = pcVar9 + 1;
            lVar8 = lVar8 + 1;
            __s2 = __s2 + 1;
          } while (lVar8 != 0);
          bVar5 = false;
          if ((local_50[0] & 1) == 0) goto joined_r0x00933e14;
        }
        else {
          if (__n == 0) {
            operator_delete(local_40);
            goto LAB_00933de8;
          }
          iVar6 = memcmp(__s1,__s2,__n);
          bVar5 = iVar6 != 0;
        }
LAB_00933e2c:
        operator_delete(local_40);
      }
      else {
LAB_00933e0c:
        bVar5 = true;
        if ((local_50[0] & 1) != 0) goto LAB_00933e2c;
      }
joined_r0x00933e14:
      if (bVar5) {
        lVar8 = FUN_009580b8();
        if ((*(byte *)(lVar8 + 0x54c0) & 1) == 0) {
          lVar8 = lVar8 + 0x54c1;
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x54d0);
        }
        FUN_00933190(param_1,lVar8);
      }
      goto LAB_00933de8;
    }
  }
  if ((uVar7 & 1) != 0) {
    FUN_00933134(param_1);
  }
LAB_00933de8:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00933e74(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00933e74(param_1,*param_2);
    FUN_00933e74(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_00933ec0(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00933f54(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = param_2[2];
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  *(undefined8 *)(lVar1 + -8) = param_2[3];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  return;
}




void thunk_FUN_00933cbc(undefined8 param_1)

{
  size_t __n;
  size_t sVar1;
  char *__s1;
  byte bVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  char *__s2;
  byte abStack_50 [8];
  size_t sStack_48;
  char *pcStack_40;
  long lStack_38;
  
  lVar4 = tpidr_el0;
  lStack_38 = *(long *)(lVar4 + 0x28);
  FUN_00a06b24();
  iVar6 = FUN_00a06c4c();
  if (iVar6 != 0) {
    FUN_00a06b24();
    iVar6 = FUN_00a06c4c();
    if (iVar6 != 1) {
      FUN_00a06b24();
      iVar6 = FUN_00a06c4c();
      if (iVar6 != 2) goto LAB_00933de8;
    }
  }
  FUN_00a06b24();
  iVar6 = FUN_00a06c54();
  if (iVar6 != 3) goto LAB_00933de8;
  uVar7 = FUN_009580c4();
  if ((uVar7 & 1) == 0) {
    uVar7 = FUN_00ec5f5c();
  }
  else {
    lVar8 = FUN_009580b8();
    cVar3 = *(char *)(lVar8 + 0x568a);
    uVar7 = FUN_00ec5f5c();
    if (cVar3 != '\0') {
      if ((uVar7 & 1) == 0) goto LAB_00933de8;
      FUN_00ec5f64(abStack_50);
      lVar8 = FUN_009580b8();
      bVar2 = *(byte *)(lVar8 + 0x54c0);
      __n = (ulong)(abStack_50[0] >> 1);
      if ((abStack_50[0] & 1) != 0) {
        __n = sStack_48;
      }
      sVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        sVar1 = *(size_t *)(lVar8 + 0x54c8);
      }
      if (__n == sVar1) {
        __s2 = *(char **)(lVar8 + 0x54d0);
        pcVar9 = (char *)((ulong)abStack_50 | 1);
        __s1 = pcVar9;
        if ((abStack_50[0] & 1) != 0) {
          __s1 = pcStack_40;
        }
        if ((bVar2 & 1) == 0) {
          __s2 = (char *)(lVar8 + 0x54c1);
        }
        if ((abStack_50[0] & 1) == 0) {
          if (__n == 0) goto LAB_00933de8;
          lVar8 = -(ulong)(abStack_50[0] >> 1);
          do {
            if (*pcVar9 != *__s2) goto LAB_00933e0c;
            pcVar9 = pcVar9 + 1;
            lVar8 = lVar8 + 1;
            __s2 = __s2 + 1;
          } while (lVar8 != 0);
          bVar5 = false;
          if ((abStack_50[0] & 1) == 0) goto joined_r0x00933e14;
        }
        else {
          if (__n == 0) {
            operator_delete(pcStack_40);
            goto LAB_00933de8;
          }
          iVar6 = memcmp(__s1,__s2,__n);
          bVar5 = iVar6 != 0;
        }
LAB_00933e2c:
        operator_delete(pcStack_40);
      }
      else {
LAB_00933e0c:
        bVar5 = true;
        if ((abStack_50[0] & 1) != 0) goto LAB_00933e2c;
      }
joined_r0x00933e14:
      if (bVar5) {
        lVar8 = FUN_009580b8();
        if ((*(byte *)(lVar8 + 0x54c0) & 1) == 0) {
          lVar8 = lVar8 + 0x54c1;
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x54d0);
        }
        FUN_00933190(param_1,lVar8);
      }
      goto LAB_00933de8;
    }
  }
  if ((uVar7 & 1) != 0) {
    FUN_00933134(param_1);
  }
LAB_00933de8:
  if (*(long *)(lVar4 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00933f54(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      do {
        uVar5 = puVar2[2];
        lVar3 = lVar3 + -0x20;
        puVar4[3] = puVar2[3];
        puVar4[2] = uVar5;
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 4;
        puVar2 = puVar2 + 4;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00933fe0(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        uVar5 = param_3[2];
        param_2[3] = param_3[3];
        param_2[2] = uVar5;
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}

