// functions/00be2 — 23 functions
#include "libGameKindred.h"




undefined8
FUN_00be22f8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = (*(code *)*param_4)(*param_2,*param_1);
  uVar2 = (*(code *)*param_4)(*param_3,*param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    uVar1 = (*(code *)*param_4)(*param_2,*param_1);
    if ((uVar1 & 1) != 0) {
      uVar3 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar3;
      return 2;
    }
  }
  else {
    uVar3 = *param_1;
    if ((uVar2 & 1) == 0) {
      *param_1 = *param_2;
      *param_2 = uVar3;
      uVar1 = (*(code *)*param_4)(*param_3);
      if ((uVar1 & 1) != 0) {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        return 2;
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar3;
    }
  }
  return 1;
}




int FUN_00be23f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00be22f8();
  uVar2 = (*(code *)*param_5)(*param_4,*param_3);
  if ((uVar2 & 1) != 0) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    uVar2 = (*(code *)*param_5)(*param_3,*param_2);
    if ((uVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
    }
    else {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      uVar2 = (*(code *)*param_5)(*param_2,*param_1);
      if ((uVar2 & 1) == 0) {
        iVar1 = iVar1 + 2;
      }
      else {
        uVar3 = *param_1;
        iVar1 = iVar1 + 3;
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  return iVar1;
}




int FUN_00be24c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00be23f0();
  uVar2 = (*(code *)*param_6)(*param_5,*param_4);
  if ((uVar2 & 1) != 0) {
    uVar3 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar3;
    uVar2 = (*(code *)*param_6)(*param_4,*param_3);
    if ((uVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
    }
    else {
      uVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar3;
      uVar2 = (*(code *)*param_6)(*param_3,*param_2);
      if ((uVar2 & 1) == 0) {
        iVar1 = iVar1 + 2;
      }
      else {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        uVar2 = (*(code *)*param_6)(*param_2,*param_1);
        if ((uVar2 & 1) == 0) {
          iVar1 = iVar1 + 3;
        }
        else {
          uVar3 = *param_1;
          iVar1 = iVar1 + 4;
          *param_1 = *param_2;
          *param_2 = uVar3;
        }
      }
    }
  }
  return iVar1;
}




void FUN_00be25c8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  FUN_00be22f8(param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar7 = 0;
    puVar4 = param_1 + 3;
    puVar5 = param_1 + 2;
    do {
      puVar3 = puVar4;
      uVar2 = (*(code *)*param_3)(*puVar3,*puVar5);
      if ((uVar2 & 1) != 0) {
        uVar6 = *puVar3;
        lVar1 = lVar7;
        do {
          lVar8 = lVar1;
          *(undefined8 *)((long)param_1 + lVar8 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x10);
          puVar4 = param_1;
          if (lVar8 == -0x10) goto LAB_00be266c;
          uVar2 = (*(code *)*param_3)(uVar6,*(undefined8 *)((long)param_1 + lVar8 + 8));
          lVar1 = lVar8 + -8;
        } while ((uVar2 & 1) != 0);
        puVar4 = (undefined8 *)((long)param_1 + lVar8 + 0x10);
LAB_00be266c:
        *puVar4 = uVar6;
      }
      lVar7 = lVar7 + 8;
      puVar4 = puVar3 + 1;
      puVar5 = puVar3;
    } while (puVar3 + 1 != param_2);
  }
  return;
}




bool FUN_00be2698(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    uVar2 = (*(code *)*param_3)(param_2[-1],*param_1);
    if ((uVar2 & 1) != 0) {
      uVar6 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar6;
    }
    break;
  case 3:
    FUN_00be22f8(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_00be23f0(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_00be24c0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_00be22f8(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar7 = 0;
      iVar8 = 0;
      puVar4 = param_1 + 3;
      puVar5 = param_1 + 2;
      do {
        puVar3 = puVar4;
        uVar2 = (*(code *)*param_3)(*puVar3,*puVar5);
        if ((uVar2 & 1) != 0) {
          uVar6 = *puVar3;
          lVar1 = lVar7;
          do {
            lVar9 = lVar1;
            *(undefined8 *)((long)param_1 + lVar9 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar9 + 0x10);
            puVar4 = param_1;
            if (lVar9 == -0x10) goto LAB_00be2794;
            uVar2 = (*(code *)*param_3)(uVar6,*(undefined8 *)((long)param_1 + lVar9 + 8));
            lVar1 = lVar9 + -8;
          } while ((uVar2 & 1) != 0);
          puVar4 = (undefined8 *)((long)param_1 + lVar9 + 0x10);
LAB_00be2794:
          iVar8 = iVar8 + 1;
          *puVar4 = uVar6;
          if (iVar8 == 8) {
            return puVar3 + 1 == param_2;
          }
        }
        lVar7 = lVar7 + 8;
        puVar4 = puVar3 + 1;
        puVar5 = puVar3;
      } while (puVar3 + 1 != param_2);
    }
  }
  return true;
}




void FUN_00be2834(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
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




void FUN_00be28b4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027ef178;
  pvVar1 = operator_new(0xe28);
  FUN_00c55d18();
  param_1[1] = pvVar1;
  param_1[2] = 0;
  *(undefined8 **)((long)pvVar1 + 0x270) = param_1;
  *param_1 = &PTR_FUN_027ef150;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}




void FUN_00be290c(long param_1,undefined8 param_2,byte param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(byte *)(param_1 + 0x18) = param_3 & 1;
  FUN_00c56058(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00be2924(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00cc19bc();
    return;
  }
  return;
}




void FUN_00be2934(long param_1,uint param_2,uint param_3)

{
  FUN_00c56758(*(undefined8 *)(param_1 + 8),param_2 & 1);
  FUN_00c567a4(*(undefined8 *)(param_1 + 8),param_3 & 1);
  return;
}




void FUN_00be2968(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ef178;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00be29ac(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ef178;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00be29f0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbe29f4);
  (*pcVar1)();
}




void FUN_00be29f4(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027ef5b8;
  pvVar2 = operator_new(0x8080);
  FUN_00c56940();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0x148) = param_1;
  FUN_00aa1a38(param_1 + 2);
  *param_1 = &PTR_FUN_027ef1a0;
  param_1[2] = &PTR_FUN_027ef1f0;
  param_1[8] = &PTR_FUN_027ef598;
  param_1[9] = 0;
  uVar3 = FUN_0093dbe8();
  if ((uVar3 & 1) == 0) {
    FUN_00e6ea58(&DAT_02c7eef8,param_1,0x9d2c9b16,FUN_00be2b24,0);
    lVar4 = FUN_00a07af0();
    if (lVar4 != 0) {
      lVar4 = FUN_00a07af0();
      local_58 = 0;
      pcStack_40 = FUN_00be34c4;
      puStack_50 = param_1;
      local_48 = param_1;
      FUN_00be1490(lVar4 + 0x18,&local_58);
      lVar4 = FUN_00a07af0();
      local_58 = 0;
      pcStack_40 = thunk_FUN_00be325c;
      puStack_50 = param_1;
      local_48 = param_1;
      FUN_00be1490(lVar4 + 0x28,&local_58);
      lVar4 = FUN_00a07af0();
      local_58 = 0;
      pcStack_40 = FUN_00be34fc;
      puStack_50 = param_1;
      local_48 = param_1;
      FUN_00be1490(lVar4 + 0x38,&local_58);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be2b24(void)

{
  FUN_00be2e58();
  return;
}




void FUN_00be2b50(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027ef1a0;
  param_1[2] = &PTR_FUN_027ef1f0;
  param_1[8] = &PTR_FUN_027ef598;
  FUN_00e6ec98(&DAT_02c7eef8,param_1);
  lVar1 = FUN_00a07af0();
  if (lVar1 != 0) {
    lVar2 = FUN_00a07af0();
    lVar4 = (ulong)*(uint *)(lVar2 + 0x18) << 5;
    lVar1 = *(long *)(lVar2 + 0x20);
    do {
      lVar3 = lVar1;
      if (lVar4 == 0) goto LAB_00be2bcc;
      lVar4 = lVar4 + -0x20;
      lVar1 = lVar3 + 0x20;
    } while (*(undefined8 **)(lVar3 + 8) != param_1);
    FUN_00be15b0((uint *)(lVar2 + 0x18),lVar3);
LAB_00be2bcc:
    lVar2 = FUN_00a07af0();
    lVar4 = (ulong)*(uint *)(lVar2 + 0x28) << 5;
    lVar1 = *(long *)(lVar2 + 0x30);
    do {
      lVar3 = lVar1;
      if (lVar4 == 0) goto LAB_00be2bfc;
      lVar4 = lVar4 + -0x20;
      lVar1 = lVar3 + 0x20;
    } while (*(undefined8 **)(lVar3 + 8) != param_1);
    FUN_00be15b0((uint *)(lVar2 + 0x28),lVar3);
LAB_00be2bfc:
    lVar2 = FUN_00a07af0();
    lVar4 = (ulong)*(uint *)(lVar2 + 0x38) << 5;
    lVar1 = *(long *)(lVar2 + 0x40);
    do {
      lVar3 = lVar1;
      if (lVar4 == 0) goto LAB_00be2c2c;
      lVar4 = lVar4 + -0x20;
      lVar1 = lVar3 + 0x20;
    } while (*(undefined8 **)(lVar3 + 8) != param_1);
    FUN_00be15b0((uint *)(lVar2 + 0x38),lVar3);
  }
LAB_00be2c2c:
  param_1[2] = &PTR_FUN_027d1940;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027ef5b8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00be2c88(long param_1)

{
  FUN_00be2b50(param_1 + -0x10);
  return;
}




void FUN_00be2c90(void *param_1)

{
  FUN_00be2b50();
  operator_delete(param_1);
  return;
}




void FUN_00be2cb4(long param_1)

{
  FUN_00be2b50((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00be2cdc(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  char acStack_c8 [128];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined8 **)(param_1 + 0x48) = param_2;
  FUN_00c57588(*(undefined8 *)(param_1 + 8));
  uVar3 = FUN_0093dbe8();
  if ((uVar3 & 1) == 0) {
    plVar4 = (long *)FUN_00cc7ab8();
    FUN_00e6a8a8(acStack_c8,"card_skin_%s",*param_2);
    plVar4 = (long *)*plVar4;
    lVar5 = *plVar4;
    while (lVar5 != 0) {
      plVar4 = plVar4 + 1;
      iVar2 = strcmp(*(char **)(lVar5 + 8),acStack_c8);
      if (iVar2 == 0) {
        FUN_00c58304(*(undefined8 *)(param_1 + 8),lVar5,*(undefined4 *)(param_2 + 4));
        break;
      }
      lVar5 = *plVar4;
    }
    FUN_00c5880c(*(undefined8 *)(param_1 + 8),param_1 + 0x40);
    FUN_00a07af0();
    FUN_00a07ed8();
    FUN_00be2dc4(param_1);
    FUN_00be2e58(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be2dc4(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_00a07af0();
  uVar1 = FUN_00a07f2c(uVar6,*(undefined8 *)(param_1 + 0x48));
  uVar2 = FUN_00a07fb0(uVar6,*(undefined8 *)(param_1 + 0x48));
  uVar3 = FUN_00a084a8(uVar6);
  uVar4 = FUN_00a084b0(uVar6,*(undefined8 *)(param_1 + 0x48));
  uVar5 = FUN_00a08548(uVar6,*(undefined8 *)(param_1 + 0x48));
  FUN_00c583d8(*(undefined8 *)(param_1 + 8),uVar2 & 1,uVar1 & 1,uVar3,uVar4,uVar5);
  return;
}




void FUN_00be2e58(long param_1)

{
  size_t __n;
  size_t sVar1;
  char *__s1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  char *__s2;
  char *pcVar6;
  long lVar7;
  undefined4 uVar8;
  byte local_80 [8];
  size_t local_78;
  char *local_70;
  int local_68;
  int local_64;
  int local_60;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_0093dbe8();
  if (((uVar4 & 1) != 0) || (lVar5 = FUN_00cc7c38(), *(char *)(lVar5 + 0x38) == '\0'))
  goto LAB_00be3004;
  FUN_008fa54c(local_80,**(undefined8 **)(param_1 + 0x48));
  lVar5 = FUN_00cc8184(local_80);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (lVar5 == 0) goto LAB_00be3004;
  uVar4 = FUN_00cc851c(lVar5);
  if ((uVar4 & 1) == 0) {
    FUN_00cc7e2c(local_80,lVar5);
    __n = (ulong)(local_80[0] >> 1);
    if ((local_80[0] & 1) != 0) {
      __n = local_78;
    }
    sVar1 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (__n == sVar1) {
      pcVar6 = (char *)((ulong)local_80 | 1);
      __s1 = pcVar6;
      if ((local_80[0] & 1) != 0) {
        __s1 = local_70;
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((local_80[0] & 1) == 0) {
        if (__n != 0) {
          lVar5 = -(ulong)(local_80[0] >> 1);
          do {
            if (*pcVar6 != *__s2) goto LAB_00be2f78;
            pcVar6 = pcVar6 + 1;
            lVar5 = lVar5 + 1;
            __s2 = __s2 + 1;
          } while (lVar5 != 0);
        }
      }
      else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) goto LAB_00be2f78;
      FUN_00c57b8c(*(undefined8 *)(param_1 + 8),0);
    }
    else {
LAB_00be2f78:
      if (local_68 == 0) {
        if (local_60 != 0) {
          lVar5 = FUN_009580b8();
          lVar7 = 0x545c;
          goto LAB_00be2fc0;
        }
        if (local_64 != 0) {
          lVar5 = FUN_009580b8();
          lVar7 = 0x5454;
          goto LAB_00be2fc0;
        }
        uVar8 = 0;
      }
      else {
        lVar5 = FUN_009580b8();
        lVar7 = 0x5450;
LAB_00be2fc0:
        uVar8 = *(undefined4 *)(lVar5 + lVar7);
      }
      FUN_00c57b8c(*(undefined8 *)(param_1 + 8),1);
      FUN_00c57c40(*(undefined8 *)(param_1 + 8),local_80,uVar8);
    }
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
  }
  else {
    FUN_00c57be4(*(undefined8 *)(param_1 + 8));
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x138))();
LAB_00be3004:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00be2e58(long param_1)

{
  size_t __n;
  size_t sVar1;
  char *__s1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  char *__s2;
  char *pcVar6;
  long lVar7;
  undefined4 uVar8;
  byte abStack_80 [8];
  size_t sStack_78;
  char *pcStack_70;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_0093dbe8();
  if (((uVar4 & 1) != 0) || (lVar5 = FUN_00cc7c38(), *(char *)(lVar5 + 0x38) == '\0'))
  goto LAB_00be3004;
  FUN_008fa54c(abStack_80,**(undefined8 **)(param_1 + 0x48));
  lVar5 = FUN_00cc8184(abStack_80);
  if ((abStack_80[0] & 1) != 0) {
    operator_delete(pcStack_70);
  }
  if (lVar5 == 0) goto LAB_00be3004;
  uVar4 = FUN_00cc851c(lVar5);
  if ((uVar4 & 1) == 0) {
    FUN_00cc7e2c(abStack_80,lVar5);
    __n = (ulong)(abStack_80[0] >> 1);
    if ((abStack_80[0] & 1) != 0) {
      __n = sStack_78;
    }
    sVar1 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (__n == sVar1) {
      pcVar6 = (char *)((ulong)abStack_80 | 1);
      __s1 = pcVar6;
      if ((abStack_80[0] & 1) != 0) {
        __s1 = pcStack_70;
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((abStack_80[0] & 1) == 0) {
        if (__n != 0) {
          lVar5 = -(ulong)(abStack_80[0] >> 1);
          do {
            if (*pcVar6 != *__s2) goto LAB_00be2f78;
            pcVar6 = pcVar6 + 1;
            lVar5 = lVar5 + 1;
            __s2 = __s2 + 1;
          } while (lVar5 != 0);
        }
      }
      else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) goto LAB_00be2f78;
      FUN_00c57b8c(*(undefined8 *)(param_1 + 8),0);
    }
    else {
LAB_00be2f78:
      if (iStack_68 == 0) {
        if (iStack_60 != 0) {
          lVar5 = FUN_009580b8();
          lVar7 = 0x545c;
          goto LAB_00be2fc0;
        }
        if (iStack_64 != 0) {
          lVar5 = FUN_009580b8();
          lVar7 = 0x5454;
          goto LAB_00be2fc0;
        }
        uVar8 = 0;
      }
      else {
        lVar5 = FUN_009580b8();
        lVar7 = 0x5450;
LAB_00be2fc0:
        uVar8 = *(undefined4 *)(lVar5 + lVar7);
      }
      FUN_00c57b8c(*(undefined8 *)(param_1 + 8),1);
      FUN_00c57c40(*(undefined8 *)(param_1 + 8),abStack_80,uVar8);
    }
    if ((abStack_80[0] & 1) != 0) {
      operator_delete(pcStack_70);
    }
  }
  else {
    FUN_00c57be4(*(undefined8 *)(param_1 + 8));
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x138))();
LAB_00be3004:
  if (*(long *)(lVar2 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

