// functions/00a06 — 26 functions
#include "libGameKindred.h"




void FUN_00a067d8(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x50;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x30);
      do {
        if ((void *)puVar2[3] != (void *)0x0) {
          operator_delete__((void *)puVar2[3]);
          puVar2[2] = 0;
          puVar2[3] = 0;
        }
        if ((void *)puVar2[1] != (void *)0x0) {
          operator_delete__((void *)puVar2[1]);
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        if ((*(byte *)(puVar2 + -4) & 1) != 0) {
          operator_delete((void *)puVar2[-2]);
        }
        lVar1 = lVar1 + -0x50;
        puVar2 = puVar2 + 10;
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




void FUN_00a06874(uint *param_1,undefined8 *param_2)

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
    FUN_00a06928(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  uVar5 = *param_2;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x50;
  *(undefined8 *)(lVar4 + -0x48) = param_2[1];
  *(undefined8 *)(lVar4 + -0x50) = uVar5;
  FUN_008fcdb8(lVar4 + -0x40,param_2 + 2);
  *(undefined8 *)(lVar4 + -0x28) = param_2[5];
  thunk_FUN_00e7051c(lVar4 + -0x20,param_2 + 6);
  thunk_FUN_00e7051c(lVar4 + -0x10,param_2 + 8);
  return;
}




void FUN_00a06928(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x50);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      puVar4 = puVar2 + (ulong)*param_1 * 10;
      puVar5 = puVar1;
      do {
        uVar6 = *puVar2;
        puVar5[1] = puVar2[1];
        *puVar5 = uVar6;
        FUN_008fcdb8(puVar5 + 2,puVar2 + 2);
        puVar5[5] = puVar2[5];
        thunk_FUN_00e7051c(puVar5 + 6,puVar2 + 6);
        thunk_FUN_00e7051c(puVar5 + 8,puVar2 + 8);
        puVar2 = puVar2 + 10;
        puVar5 = puVar5 + 10;
      } while (puVar2 != puVar4);
      puVar2 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar3 = (ulong)*param_1 * 0x50;
        puVar2 = puVar2 + 6;
        do {
          if ((void *)puVar2[3] != (void *)0x0) {
            operator_delete__((void *)puVar2[3]);
            puVar2[2] = 0;
            puVar2[3] = 0;
          }
          if ((void *)puVar2[1] != (void *)0x0) {
            operator_delete__((void *)puVar2[1]);
            *puVar2 = 0;
            puVar2[1] = 0;
          }
          if ((*(byte *)(puVar2 + -4) & 1) != 0) {
            operator_delete((void *)puVar2[-2]);
          }
          lVar3 = lVar3 + -0x50;
          puVar2 = puVar2 + 10;
        } while (lVar3 != 0);
        puVar2 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00a06a44(undefined8 param_1)

{
  FUN_00a067d8(param_1,1);
  return;
}




void FUN_00a06a4c(void)

{
  undefined8 *puVar1;
  
  if (DAT_03130a68 != (undefined8 *)0x0) {
    return;
  }
  puVar1 = operator_new(0x70);
  FUN_00948cd8();
  FUN_00e83560(puVar1 + 3);
  *(undefined8 *)((long)puVar1 + 0x65) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_FUN_027c7288;
  puVar1[3] = &PTR_FUN_027c7628;
  DAT_03130a68 = puVar1;
  FUN_00a05c34(&DAT_03130a58);
  return;
}




void FUN_00a06acc(void)

{
  FUN_00a05c34(&DAT_03130a58);
  return;
}




void FUN_00a06ad8(void)

{
  if (DAT_03130a68 != (long *)0x0) {
    (**(code **)(*DAT_03130a68 + 8))();
    DAT_03130a68 = (long *)0x0;
    FUN_00a067d8(&DAT_03130a58,0);
    return;
  }
  return;
}




undefined8 FUN_00a06b24(void)

{
  return DAT_03130a68;
}




void FUN_00a06b30(undefined8 *param_1)

{
  FUN_00948cd8();
  FUN_00e83560(param_1 + 3);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_027c7288;
  param_1[3] = &PTR_FUN_027c7628;
  *(undefined8 *)((long)param_1 + 0x65) = 0;
  return;
}




void FUN_00a06b84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c7288;
  param_1[3] = &PTR_FUN_027c7628;
  if ((void *)param_1[0xb] != (void *)0x0) {
    operator_delete__((void *)param_1[0xb]);
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  if ((void *)param_1[9] != (void *)0x0) {
    operator_delete__((void *)param_1[9]);
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_00e835e0(param_1 + 3);
  FUN_00948d58(param_1);
  return;
}




void FUN_00a06bf8(long param_1)

{
  FUN_00a06b84(param_1 + -0x18);
  return;
}




void FUN_00a06c00(void *param_1)

{
  FUN_00a06b84();
  operator_delete(param_1);
  return;
}




void FUN_00a06c24(long param_1)

{
  FUN_00a06b84((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}




undefined4 FUN_00a06c4c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}




undefined4 FUN_00a06c54(long param_1)

{
  return *(undefined4 *)(param_1 + 100);
}




undefined4 FUN_00a06c5c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}




undefined4 FUN_00a06c64(void)

{
  long lVar1;
  
  lVar1 = FUN_00e829e0();
  return *(undefined4 *)(lVar1 + 0x100);
}




bool FUN_00a06c7c(long param_1)

{
  return *(uint *)(param_1 + 0x60) < 2;
}




void FUN_00a06c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009580b8();
  FUN_008fa54c(local_50,param_2);
  FUN_008fa54c(local_68,param_3);
  FUN_009603f4(uVar2,local_50,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a06d2c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_009606dc(uVar1,1);
  return;
}




undefined1 * FUN_00a06d44(int *param_1)

{
  int *piVar1;
  
  if (DAT_03130a58 == 0) {
    return &DAT_01e277f2;
  }
  piVar1 = DAT_03130a60;
  while ((*piVar1 != *param_1 || (piVar1[1] != param_1[1]))) {
    piVar1 = piVar1 + 0x14;
    if (DAT_03130a60 + (ulong)DAT_03130a58 * 0x14 <= piVar1) {
      return &DAT_01e277f2;
    }
  }
  return *(undefined1 **)(piVar1 + 10);
}




int * FUN_00a06da8(int *param_1)

{
  int *piVar1;
  
  if (DAT_03130a58 == 0) {
    return (int *)&DAT_03210450;
  }
  piVar1 = DAT_03130a60;
  while ((*piVar1 != *param_1 || (piVar1[1] != param_1[1]))) {
    piVar1 = piVar1 + 0x14;
    if (DAT_03130a60 + (ulong)DAT_03130a58 * 0x14 <= piVar1) {
      return (int *)&DAT_03210450;
    }
  }
  return piVar1 + 0xc;
}




int * FUN_00a06e0c(int *param_1)

{
  int *piVar1;
  
  if (DAT_03130a58 == 0) {
    return (int *)&DAT_03210450;
  }
  piVar1 = DAT_03130a60;
  while ((*piVar1 != *param_1 || (piVar1[1] != param_1[1]))) {
    piVar1 = piVar1 + 0x14;
    if (DAT_03130a60 + (ulong)DAT_03130a58 * 0x14 <= piVar1) {
      return (int *)&DAT_03210450;
    }
  }
  return piVar1 + 0x10;
}




undefined8 * FUN_00a06e70(char *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (DAT_03130a58 != 0) {
    puVar3 = (undefined8 *)(DAT_03130a60 + 0x30);
    do {
      iVar2 = strcmp((char *)puVar3[-1],param_1);
      if (iVar2 == 0) {
        return puVar3;
      }
      puVar1 = puVar3 + 4;
      puVar3 = puVar3 + 10;
    } while (puVar1 < (undefined8 *)(DAT_03130a60 + (ulong)DAT_03130a58 * 0x50));
  }
  return &DAT_03210450;
}




undefined8 * FUN_00a06f04(char *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (DAT_03130a58 != 0) {
    puVar3 = (undefined8 *)(DAT_03130a60 + 0x40);
    do {
      iVar2 = strcmp((char *)puVar3[-3],param_1);
      if (iVar2 == 0) {
        return puVar3;
      }
      puVar1 = puVar3 + 2;
      puVar3 = puVar3 + 10;
    } while (puVar1 < (undefined8 *)(DAT_03130a60 + (ulong)DAT_03130a58 * 0x50));
  }
  return &DAT_03210450;
}




void FUN_00a06f98(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  long local_48;
  code *pcStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar4 = FUN_009580b8();
  uVar2 = *(uint *)(lVar4 + 0x55dc);
  piVar6 = (int *)(param_1 + 0x60);
  iVar1 = *piVar6;
  *(int *)(param_1 + 100) = iVar1;
  iVar5 = iVar1;
  if ((uVar2 < 9) && ((0x1dfU >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
    iVar5 = *(int *)(&DAT_01b9eb40 + (long)(int)uVar2 * 4);
    *piVar6 = iVar5;
  }
  if (iVar1 != iVar5) {
    if ((iVar1 == 1) || (iVar5 != 1)) {
      if (iVar1 != 3) {
        if (iVar1 == 1) {
          if (iVar5 != 1) {
            pcStack_40 = thunk_FUN_00a072e0;
            local_48 = param_1;
            FUN_00f03390(&local_48);
            *(undefined1 *)(param_1 + 0x6c) = 0;
          }
        }
        else if (iVar5 == 3) {
          FUN_009013b4();
        }
      }
    }
    else {
      FUN_00a07204(param_1);
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    FUN_00a07130(param_1 + 0x30,param_1 + 100);
    FUN_00a07130(param_1 + 0x40,piVar6);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

