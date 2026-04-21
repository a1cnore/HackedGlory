// functions/00a08 — 32 functions
#include "libGameKindred.h"




void FUN_00a08068(undefined8 param_1)

{
  FUN_00a08094();
  FUN_00a08290(param_1);
  FUN_00a08314(param_1);
  return;
}




void FUN_00a08094(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  
  uVar2 = FUN_00e84e74(param_1 + 0x48);
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_00e84e5c(param_1 + 0x48), (uVar2 & 1) != 0)) {
    FUN_00a087a4(param_1 + 0x1c8,*(undefined8 *)(param_1 + 0xb8),param_1 + 0xc0);
    FUN_00a087a4(param_1 + 0x1b0,*(undefined8 *)(param_1 + 0xd0),param_1 + 0xd8);
    FUN_00a08b84(param_1 + 0x1e0,*(undefined8 *)(param_1 + 0x88),param_1 + 0x90);
    FUN_00a08b84(param_1 + 0x1f8,*(undefined8 *)(param_1 + 0xa0),param_1 + 0xa8);
    *(undefined1 *)(param_1 + 0x22c) = 1;
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x78);
    uVar3 = FUN_009580b8();
    FUN_0095e1c8(uVar3,param_1 + 0x70);
    FUN_00a083cc(param_1 + 0x18,param_1);
    if (*(long **)(param_1 + 0x1b0) == (long *)(param_1 + 0x1b8)) {
      iVar7 = 0;
      iVar10 = 0;
      iVar8 = 0;
      iVar9 = 0;
    }
    else {
      iVar9 = 0;
      iVar8 = 0;
      iVar10 = 0;
      iVar7 = 0;
      plVar11 = *(long **)(param_1 + 0x1b0);
      do {
        lVar4 = FUN_00cc8184(plVar11 + 4);
        if (lVar4 != 0) {
          uVar2 = FUN_00cc8570(lVar4);
          if ((uVar2 & 1) == 0) {
            iVar1 = *(int *)(lVar4 + 0xa0);
            if (iVar1 == 3) {
              iVar7 = iVar7 + 1;
            }
            else if (iVar1 == 2) {
              iVar8 = iVar8 + 1;
            }
            else if (iVar1 == 1) {
              iVar9 = iVar9 + 1;
            }
          }
          else {
            iVar10 = iVar10 + 1;
          }
        }
        plVar5 = (long *)plVar11[1];
        if ((long *)plVar11[1] == (long *)0x0) {
          plVar5 = plVar11 + 2;
          plVar6 = (long *)*plVar5;
          if ((long *)*plVar6 != plVar11) {
            do {
              lVar4 = *plVar5;
              plVar5 = (long *)(lVar4 + 0x10);
              plVar6 = (long *)*plVar5;
            } while (*plVar6 != lVar4);
          }
        }
        else {
          do {
            plVar6 = plVar5;
            plVar5 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
        plVar11 = plVar6;
      } while (plVar6 != (long *)(param_1 + 0x1b8));
    }
    FUN_008ffcf8("numLimitedSkinsUnlocked",iVar10,1);
    FUN_008ffcf8("numTier1SkinsUnlocked",iVar9,1);
    FUN_008ffcf8("numTier2SkinsUnlocked",iVar8,1);
    FUN_008ffcf8("numTier3SkinsUnlocked",iVar7,1);
    return;
  }
  return;
}




void FUN_00a08290(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e84e74(param_1 + 0xf0);
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_00e84e5c(param_1 + 0xf0), (uVar1 & 1) != 0)) {
    if (*(char *)(param_1 + 0x148) != '\0') {
      FUN_00a0904c(param_1 + 0x1c8,param_1 + 0x130);
    }
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x120);
    uVar2 = FUN_009580b8();
    FUN_0095e1c8(uVar2,param_1 + 0x118);
    FUN_00a083cc(param_1 + 0x18,param_1);
    FUN_00a083cc(param_1 + 0x38,param_1);
    return;
  }
  return;
}




void FUN_00a08314(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e84e74(param_1 + 0x150);
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_00e84e5c(param_1 + 0x150), (uVar1 & 1) != 0)) {
    if (*(char *)(param_1 + 0x1a8) != '\0') {
      FUN_00a0929c(param_1 + 0x1b0,param_1 + 400,param_1 + 400);
    }
    if (*(char *)(param_1 + 0x1a9) == '\0') {
      FUN_00a0904c(param_1 + 0x1c8,param_1 + 400);
    }
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x180);
    uVar2 = FUN_009580b8();
    FUN_0095e1c8(uVar2,param_1 + 0x178);
    uVar2 = FUN_009580b8();
    FUN_00962c34(uVar2,param_1 + 400);
    FUN_00a083cc(param_1 + 0x18,param_1);
    FUN_00a083cc(param_1 + 0x28,param_1);
    return;
  }
  return;
}




void FUN_00a083cc(uint *param_1,undefined8 param_2)

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




void FUN_00a08438(long param_1,undefined8 param_2)

{
  FUN_00e828f8(param_2,param_1 + 0xf0);
  FUN_008fce60(param_1 + 0x210,param_2);
  return;
}




void FUN_00a0846c(long param_1,undefined8 param_2)

{
  FUN_00e82f64(param_2,param_1 + 0x150);
  FUN_008fce60(param_1 + 0x210,param_2);
  return;
}




void FUN_00a084a0(long param_1)

{
  *(undefined1 *)(param_1 + 0x22c) = 0;
  FUN_00a07ee8();
  return;
}




undefined4 FUN_00a084a8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x228);
}




undefined4 FUN_00a084b0(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(param_1 + 0x1e8);
  if (plVar3 != (long *)0x0) {
    iVar1 = *(int *)(param_2 + 0x20);
    plVar2 = (long *)(param_1 + 0x1e8);
    plVar4 = plVar3;
    do {
      if (iVar1 <= *(int *)((long)plVar4 + 0x1c)) {
        plVar2 = plVar4;
      }
      plVar4 = (long *)plVar4[*(int *)((long)plVar4 + 0x1c) < iVar1];
    } while (plVar4 != (long *)0x0);
    if (plVar2 != (long *)(param_1 + 0x1e8)) {
      if (iVar1 < *(int *)((long)plVar2 + 0x1c)) {
        return 0;
      }
      plVar2 = (long *)(param_1 + 0x1e8);
      do {
        if (iVar1 < *(int *)((long)plVar3 + 0x1c)) {
          plVar2 = plVar3;
          plVar3 = (long *)*plVar3;
        }
        else {
          if (iVar1 <= *(int *)((long)plVar3 + 0x1c)) break;
          plVar2 = plVar3 + 1;
          plVar3 = (long *)*plVar2;
        }
      } while (plVar3 != (long *)0x0);
      return *(undefined4 *)(*plVar2 + 0x20);
    }
  }
  return 0;
}




undefined4 FUN_00a08548(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(param_1 + 0x200);
  if (plVar3 != (long *)0x0) {
    iVar1 = *(int *)(param_2 + 0x20);
    plVar2 = (long *)(param_1 + 0x200);
    plVar4 = plVar3;
    do {
      if (iVar1 <= *(int *)((long)plVar4 + 0x1c)) {
        plVar2 = plVar4;
      }
      plVar4 = (long *)plVar4[*(int *)((long)plVar4 + 0x1c) < iVar1];
    } while (plVar4 != (long *)0x0);
    if (plVar2 != (long *)(param_1 + 0x200)) {
      if (iVar1 < *(int *)((long)plVar2 + 0x1c)) {
        return 0;
      }
      plVar2 = (long *)(param_1 + 0x200);
      do {
        if (iVar1 < *(int *)((long)plVar3 + 0x1c)) {
          plVar2 = plVar3;
          plVar3 = (long *)*plVar3;
        }
        else {
          if (iVar1 <= *(int *)((long)plVar3 + 0x1c)) break;
          plVar2 = plVar3 + 1;
          plVar3 = (long *)*plVar2;
        }
      } while (plVar3 != (long *)0x0);
      return *(undefined4 *)(*plVar2 + 0x20);
    }
  }
  return 0;
}




void FUN_00a085e0(long param_1,undefined8 param_2)

{
  FUN_00a0929c(param_1 + 0x1b0,param_2,param_2);
  FUN_00a083cc(param_1 + 0x18,param_1);
  return;
}




void FUN_00a08610(long param_1,undefined8 param_2)

{
  FUN_00a0929c(param_1 + 0x1c8,param_2,param_2);
  FUN_00a083cc(param_1 + 0x18,param_1);
  return;
}




void FUN_00a08640(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c7a20;
  FUN_00a08748(param_1 + 0x11,param_1[0x12]);
  FUN_00a08748(param_1 + 0xe,param_1[0xf]);
  FUN_00a086fc(param_1 + 0xb,param_1[0xc]);
  FUN_00a086fc(param_1 + 8,param_1[9]);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00a086a4(void)

{
  return 0x3a;
}




void FUN_00a086ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c7a50;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00a086f4(void)

{
  return 0x3b;
}




void FUN_00a086fc(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00a086fc(param_1,*param_2);
    FUN_00a086fc(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_00a08748(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00a08748(param_1,*param_2);
    FUN_00a08748(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      operator_delete((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_00a087a4(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1[2] != 0) {
    lVar5 = *param_1;
    plVar6 = param_1 + 1;
    *param_1 = (long)plVar6;
    *(undefined8 *)(*plVar6 + 0x10) = 0;
    param_1[2] = 0;
    *plVar6 = 0;
    lVar7 = *(long *)(lVar5 + 8);
    if (lVar7 != 0) {
      lVar5 = lVar7;
    }
joined_r0x00a08808:
    lVar7 = lVar5;
    if (lVar5 != 0) {
      do {
        if (param_2 == param_3) {
          lVar5 = *(long *)(lVar7 + 0x10);
          while (lVar2 = lVar5, lVar2 != 0) {
            lVar7 = lVar2;
            lVar5 = *(long *)(lVar2 + 0x10);
          }
          FUN_00a08748(param_1,lVar7);
          goto LAB_00a08910;
        }
        FUN_008fce60(lVar7 + 0x20,param_2 + 4);
        lVar5 = FUN_00a08964(lVar7);
        uVar4 = FUN_00a089c0(param_1,&local_60,lVar7 + 0x20);
        FUN_00a08a94(param_1,local_60,uVar4,lVar7);
        plVar6 = (long *)param_2[1];
        if ((long *)param_2[1] == (long *)0x0) {
          plVar6 = param_2 + 2;
          bVar3 = *(long **)*plVar6 == param_2;
          param_2 = (long *)*plVar6;
          if (bVar3) goto joined_r0x00a08808;
          do {
            lVar7 = *plVar6;
            plVar6 = (long *)(lVar7 + 0x10);
            param_2 = (long *)*plVar6;
          } while (*param_2 != lVar7);
        }
        else {
          do {
            param_2 = plVar6;
            plVar6 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
        lVar7 = lVar5;
        if (lVar5 == 0) break;
      } while( true );
    }
  }
  while (param_2 != param_3) {
    FUN_00a08ae8(param_1,param_2 + 4);
    plVar6 = (long *)param_2[1];
    if ((long *)param_2[1] == (long *)0x0) {
      plVar6 = param_2 + 2;
      bVar3 = *(long **)*plVar6 != param_2;
      param_2 = (long *)*plVar6;
      if (bVar3) {
        do {
          lVar5 = *plVar6;
          plVar6 = (long *)(lVar5 + 0x10);
          param_2 = (long *)*plVar6;
        } while (*param_2 != lVar5);
      }
    }
    else {
      do {
        param_2 = plVar6;
        plVar6 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
LAB_00a08910:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a08964(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    if (plVar2 == param_1) {
      plVar2 = (long *)plVar1[1];
      *plVar1 = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
    else {
      plVar1[1] = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
  }
  return;
}




long * FUN_00a089c0(long param_1,long *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s1;
  byte bVar3;
  int iVar4;
  long *plVar5;
  void *__s2;
  long *plVar6;
  
  plVar5 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    *param_2 = (long)plVar5;
  }
  else {
    uVar2 = *(ulong *)(param_3 + 8);
    __s1 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      __s1 = param_3 + 1;
      uVar2 = (ulong)(*param_3 >> 1);
    }
    do {
      while( true ) {
        plVar5 = plVar6;
        bVar3 = *(byte *)(plVar5 + 4);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = plVar5[5];
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        if (__n == 0) break;
        __s2 = (void *)plVar5[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar5 + 0x21);
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) break;
        if (iVar4 < 0) goto LAB_00a08a54;
LAB_00a08a40:
        plVar6 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) {
          *param_2 = (long)plVar5;
          return plVar5 + 1;
        }
      }
      if (uVar1 <= uVar2) goto LAB_00a08a40;
LAB_00a08a54:
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
    *param_2 = (long)plVar5;
  }
  return plVar5;
}




void FUN_00a08a94(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void * FUN_00a08ae8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x38);
  FUN_008fcdb8((long)pvVar2 + 0x20,param_2);
  uVar3 = FUN_00a089c0(param_1,&local_50,(long)pvVar2 + 0x20);
  FUN_00a08a94(param_1,local_50,uVar3,pvVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a08b84(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1[2] != 0) {
    lVar3 = *param_1;
    plVar4 = param_1 + 1;
    *param_1 = (long)plVar4;
    *(undefined8 *)(*plVar4 + 0x10) = 0;
    param_1[2] = 0;
    *plVar4 = 0;
    lVar5 = *(long *)(lVar3 + 8);
    if (lVar5 != 0) {
      lVar3 = lVar5;
    }
joined_r0x00a08bd4:
    lVar5 = lVar3;
    if (lVar3 != 0) {
      do {
        if (param_2 == param_3) {
          lVar3 = *(long *)(lVar5 + 0x10);
          while (lVar1 = lVar3, lVar1 != 0) {
            lVar5 = lVar1;
            lVar3 = *(long *)(lVar1 + 0x10);
          }
          FUN_00a086fc(param_1,lVar5);
          return;
        }
        *(undefined4 *)(lVar5 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
        *(int *)(lVar5 + 0x20) = (int)param_2[4];
        lVar3 = FUN_00a08d08(lVar5);
        FUN_00a08d64(param_1,lVar5);
        plVar4 = (long *)param_2[1];
        if ((long *)param_2[1] == (long *)0x0) {
          plVar4 = param_2 + 2;
          bVar2 = *(long **)*plVar4 == param_2;
          param_2 = (long *)*plVar4;
          if (bVar2) goto joined_r0x00a08bd4;
          do {
            lVar5 = *plVar4;
            plVar4 = (long *)(lVar5 + 0x10);
            param_2 = (long *)*plVar4;
          } while (*param_2 != lVar5);
        }
        else {
          do {
            param_2 = plVar4;
            plVar4 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
        lVar5 = lVar3;
        if (lVar3 == 0) break;
      } while( true );
    }
  }
  while (param_2 != param_3) {
    FUN_00a08e2c(param_1,(long)param_2 + 0x1c);
    plVar4 = (long *)param_2[1];
    if ((long *)param_2[1] == (long *)0x0) {
      plVar4 = param_2 + 2;
      bVar2 = *(long **)*plVar4 != param_2;
      param_2 = (long *)*plVar4;
      if (bVar2) {
        do {
          lVar3 = *plVar4;
          plVar4 = (long *)(lVar3 + 0x10);
          param_2 = (long *)*plVar4;
        } while (*param_2 != lVar3);
      }
    }
    else {
      do {
        param_2 = plVar4;
        plVar4 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}




void FUN_00a08d08(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    if (plVar2 == param_1) {
      plVar2 = (long *)plVar1[1];
      *plVar1 = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
    else {
      plVar1[1] = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
  }
  return;
}




long FUN_00a08d64(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = plVar2;
  if ((long *)*plVar2 != (long *)0x0) {
    plVar1 = (long *)*plVar2;
    do {
      while (plVar2 = plVar1, *(int *)(param_2 + 0x1c) < *(int *)((long)plVar2 + 0x1c)) {
        plVar3 = plVar2;
        plVar1 = (long *)*plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00a08dbc;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar3 = plVar2 + 1;
  }
LAB_00a08dbc:
  FUN_00a08dd8(param_1,plVar2,plVar3,param_2);
  return param_2;
}




void FUN_00a08dd8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void * FUN_00a08e2c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  
  pvVar2 = operator_new(0x28);
  uVar5 = *param_2;
  *(undefined8 *)((long)pvVar2 + 0x1c) = uVar5;
  plVar3 = (long *)(param_1 + 8);
  plVar1 = (long *)*plVar3;
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    do {
      while (plVar3 = plVar1, (int)uVar5 < *(int *)((long)plVar3 + 0x1c)) {
        plVar1 = (long *)*plVar3;
        plVar4 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00a08e98;
      }
      plVar1 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar4 = plVar3 + 1;
  }
LAB_00a08e98:
  FUN_00a08dd8(param_1,plVar3,plVar4,pvVar2);
  return pvVar2;
}




void FUN_00a08eb8(undefined8 param_1)

{
  FUN_00a08094();
  FUN_00a08290(param_1);
  FUN_00a08314(param_1);
  return;
}




undefined8 * FUN_00a08ee4(long param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  byte *__s1;
  void *__s2;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(param_1 + 8);
  puVar6 = (undefined8 *)FUN_00a08f9c(param_1,param_2,*puVar7,puVar7);
  if (puVar7 != puVar6) {
    bVar3 = *(byte *)(puVar6 + 4);
    bVar4 = *param_2;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = puVar6[5];
    }
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 8);
    }
    __n = uVar1;
    if (uVar2 <= uVar1) {
      __n = uVar2;
    }
    if (__n != 0) {
      __s1 = *(byte **)(param_2 + 0x10);
      __s2 = (void *)puVar6[6];
      if ((bVar4 & 1) == 0) {
        __s1 = param_2 + 1;
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (void *)((long)puVar6 + 0x21);
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 != 0) {
        if (iVar5 < 0) {
          return puVar7;
        }
        return puVar6;
      }
    }
    if (uVar1 <= uVar2) {
      return puVar6;
    }
  }
  return puVar7;
}




long FUN_00a08f9c(undefined8 param_1,byte *param_2,long param_3,long param_4)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s2;
  byte bVar3;
  uint uVar4;
  void *__s1;
  
  if (param_3 != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(param_3 + 0x20);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(param_3 + 0x28);
      }
      __n = uVar2;
      if (uVar1 <= uVar2) {
        __n = uVar1;
      }
      if (__n == 0) {
LAB_00a09010:
        uVar4 = (uint)(uVar2 < uVar1);
        if (uVar1 < uVar2) {
          uVar4 = 0xffffffff;
        }
      }
      else {
        __s1 = *(void **)(param_3 + 0x30);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(param_3 + 0x21);
        }
        uVar4 = memcmp(__s1,__s2,__n);
        if (uVar4 == 0) goto LAB_00a09010;
      }
      if ((int)uVar4 >= 0) {
        param_4 = param_3;
      }
      param_3 = *(long *)(param_3 + (ulong)((int)uVar4 < 0) * 8);
    } while (param_3 != 0);
  }
  return param_4;
}

