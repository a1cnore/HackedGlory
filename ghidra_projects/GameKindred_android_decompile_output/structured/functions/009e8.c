// functions/009e8 — 19 functions
#include "libGameKindred.h"




void FUN_009e8018(void)

{
  undefined8 *__s;
  
  if (DAT_0312fd08 == (undefined8 *)0x0) {
    __s = operator_new(0x50);
    memset(__s,0,0x50);
    FUN_00948cd8(__s);
    __s[5] = 0;
    __s[6] = 0;
    __s[3] = 0;
    __s[4] = 0;
    __s[8] = __s + 7;
    __s[9] = 0;
    __s[7] = __s + 7;
    *__s = &PTR_FUN_027c50d8;
    DAT_0312fd08 = __s;
  }
  return;
}




void FUN_009e8084(void)

{
  if (DAT_0312fd08 != (long *)0x0) {
    (**(code **)(*DAT_0312fd08 + 8))();
    DAT_0312fd08 = (long *)0x0;
  }
  return;
}




undefined8 FUN_009e80b8(void)

{
  return DAT_0312fd08;
}




void FUN_009e80c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  char *__nptr;
  undefined8 uVar5;
  byte local_68 [16];
  void *local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_68,param_3);
  lVar3 = FUN_009ec4e0(param_2 + 0x68,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (param_2 + 0x70 != lVar3) {
    FUN_008fa54c(local_68,param_3);
    plVar4 = (long *)FUN_00941528(param_2 + 0x68,auStack_50,local_68);
    lVar3 = *plVar4;
    if ((*(byte *)(lVar3 + 0x38) & 1) == 0) {
      __nptr = (char *)(lVar3 + 0x39);
    }
    else {
      __nptr = *(char **)(lVar3 + 0x48);
    }
    iVar2 = atoi(__nptr);
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if (iVar2 != 0) {
      uVar5 = 1;
      goto LAB_009e818c;
    }
  }
  uVar5 = 0;
LAB_009e818c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}




int FUN_009e81b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  char *__nptr;
  byte local_68 [16];
  void *local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_68,param_3);
  lVar3 = FUN_009ec4e0(param_2 + 0x68,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (param_2 + 0x70 == lVar3) {
    iVar2 = 0;
  }
  else {
    FUN_008fa54c(local_68,param_3);
    plVar4 = (long *)FUN_00941528(param_2 + 0x68,auStack_50,local_68);
    lVar3 = *plVar4;
    if ((*(byte *)(lVar3 + 0x38) & 1) == 0) {
      __nptr = (char *)(lVar3 + 0x39);
    }
    else {
      __nptr = *(char **)(lVar3 + 0x48);
    }
    iVar2 = atoi(__nptr);
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_009e82a8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  byte local_68 [16];
  void *local_58;
  undefined1 auStack_50 [8];
  long local_48;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_68,param_3);
  lVar2 = FUN_009ec4e0(param_2 + 0x68,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (param_2 + 0x70 == lVar2) {
    auVar5 = ZEXT816(0);
  }
  else {
    FUN_008fa54c(local_68,param_3);
    plVar3 = (long *)FUN_00941528(param_2 + 0x68,auStack_50,local_68);
    lVar2 = *plVar3;
    if ((*(byte *)(lVar2 + 0x38) & 1) == 0) {
      lVar2 = lVar2 + 0x39;
    }
    else {
      lVar2 = *(long *)(lVar2 + 0x48);
    }
    auVar5 = FUN_00e6ac94(lVar2);
    uVar6 = auVar5._8_8_;
    uVar4 = auVar5._0_8_;
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
      auVar5._8_8_ = uVar6;
      auVar5._0_8_ = uVar4;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1 * FUN_009e83a0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  byte local_68 [16];
  void *local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_68,param_3);
  lVar2 = FUN_009ec4e0(param_2 + 0x68,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (param_2 + 0x70 == lVar2) {
    puVar4 = &DAT_01e277f2;
  }
  else {
    FUN_008fa54c(local_68,param_3);
    plVar3 = (long *)FUN_00941528(param_2 + 0x68,auStack_50,local_68);
    lVar2 = *plVar3;
    if ((*(byte *)(lVar2 + 0x38) & 1) == 0) {
      puVar4 = (undefined1 *)(lVar2 + 0x39);
    }
    else {
      puVar4 = *(undefined1 **)(lVar2 + 0x48);
    }
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_009e848c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int *__nptr;
  char *pcVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pcVar4 = (char *)(param_3 + -1);
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  do {
    pcVar4 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  FUN_009ec648(&local_60,param_3,(int)pcVar4 - (int)param_3);
  __nptr = (int *)FUN_009ecc84(&local_60,param_2);
  if (__nptr == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    uVar1 = __nptr[4];
    if ((uVar1 >> 10 & 1) == 0) {
      iVar3 = 0;
      if ((uVar1 >> 0x14 & 1) != 0) {
        if ((uVar1 >> 0x16 & 1) == 0) {
          __nptr = *(int **)__nptr;
        }
        iVar3 = atoi((char *)__nptr);
      }
    }
    else {
      iVar3 = *__nptr;
    }
  }
  FUN_009e854c(&local_60);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e854c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    free(*(void **)(param_1 + 0x18));
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 8));
    return;
  }
  return;
}




bool FUN_009e858c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pcVar5 = (char *)(param_3 + -1);
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  FUN_009ec648(&local_60,param_3,(int)pcVar5 - (int)param_3);
  pcVar5 = (char *)FUN_009ecc84(&local_60,param_2);
  if (pcVar5 == (char *)0x0) {
    bVar3 = false;
  }
  else {
    uVar1 = *(uint *)(pcVar5 + 0x10);
    if ((uVar1 >> 8 & 1) == 0) {
      bVar3 = false;
      if ((uVar1 >> 0x14 & 1) != 0) {
        if ((uVar1 >> 0x16 & 1) == 0) {
          pcVar5 = *(char **)pcVar5;
        }
        iVar4 = atoi(pcVar5);
        bVar3 = iVar4 != 0;
      }
    }
    else {
      bVar3 = uVar1 == 0x102;
    }
  }
  FUN_009e854c(&local_60);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_009e8654(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pcVar4 = (char *)(param_3 + -1);
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  do {
    pcVar4 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  FUN_009ec648(&local_70,param_3,(int)pcVar4 - (int)param_3);
  plVar3 = (long *)FUN_009ecc84(&local_70,param_2);
  auVar6 = ZEXT816(0);
  if (plVar3 != (long *)0x0) {
    uVar1 = *(uint *)(plVar3 + 2);
    if ((uVar1 >> 0xe & 1) == 0) {
      auVar6 = ZEXT816(0);
      if ((uVar1 >> 0x14 & 1) != 0) {
        if ((uVar1 >> 0x16 & 1) == 0) {
          plVar3 = (long *)*plVar3;
        }
        auVar6 = FUN_00e6ac94(plVar3);
      }
    }
    else {
      dVar5 = (double)FUN_008fc0f0();
      auVar6 = ZEXT416((uint)(float)dVar5);
    }
  }
  uVar8 = auVar6._8_8_;
  FUN_009e854c(&local_70);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    auVar7._8_8_ = uVar8;
    auVar7._0_8_ = auVar6._0_8_;
    return auVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_009e8718(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcVar3 = (char *)(param_3 + -1);
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  do {
    pcVar3 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  FUN_009ec648(&local_60,param_3,(int)pcVar3 - (int)param_3);
  puVar2 = (undefined8 *)FUN_009ecc84(&local_60,param_2);
  if ((puVar2 == (undefined8 *)0x0) || ((*(uint *)(puVar2 + 2) >> 0x14 & 1) == 0)) {
    puVar2 = (undefined8 *)&DAT_01e277f2;
  }
  else if ((*(uint *)(puVar2 + 2) >> 0x16 & 1) == 0) {
    puVar2 = (undefined8 *)*puVar2;
  }
  FUN_009e854c(&local_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_009e87c8(long param_1)

{
  return *(long *)(param_1 + 0x40) + 0x10;
}




void FUN_009e87d4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x40);
  if ((*(byte *)(lVar2 + 0x340) & 1) == 0) {
    if (*(byte *)(lVar2 + 0x340) >> 1 == 0) goto LAB_009e8814;
  }
  else if (*(long *)(lVar2 + 0x348) == 0) goto LAB_009e8814;
  uVar1 = FUN_009580b8();
  FUN_00961e78(uVar1,lVar2 + 0x340);
LAB_009e8814:
  FUN_009e8848(param_1 + 0x38);
  return;
}




void FUN_009e8824(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_00961e78(uVar1,param_2);
  return;
}




void FUN_009e8848(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  lVar1 = *plVar2;
  *(long *)(lVar1 + 8) = plVar2[1];
  *(long *)plVar2[1] = lVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -1;
  FUN_009e9c8c(plVar2 + 2);
  operator_delete(plVar2);
  return;
}




void FUN_009e888c(long param_1)

{
  FUN_009e8848(param_1 + 0x38);
  return;
}




undefined4 FUN_009e8894(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}




void FUN_009e889c(long param_1,long param_2)

{
  long lVar1;
  
  if (*(int *)(param_2 + 0x28) != 0) {
    lVar1 = *(long *)(param_2 + 0x30);
    do {
      FUN_009e8910(param_1,lVar1);
      lVar1 = lVar1 + 0x80;
    } while (lVar1 != *(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x28) * 0x80);
    if (*(uint *)(param_2 + 0x28) != 0) {
      FUN_009e9ac4(param_1 + 0x18,param_1);
      return;
    }
  }
  return;
}

