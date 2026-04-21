// functions/00a02 — 35 functions
#include "libGameKindred.h"




undefined1 * FUN_00a02044(int param_1)

{
  if (param_1 == 10) {
    return &DAT_01e277f2;
  }
  return (&PTR_s_generic_quest_02be3358)[param_1];
}




undefined1 * FUN_00a02068(int param_1)

{
  if (param_1 == 10) {
    return &DAT_01e277f2;
  }
  return (&PTR_s_quest_icon_misc_02be33a8)[param_1];
}




void FUN_00a0208c(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xe8);
  FUN_00a020d4();
  DAT_031308d0 = pvVar1;
  pvVar1 = operator_new(0x70);
  FUN_009e3240();
  DAT_031308d8 = pvVar1;
  return;
}




void FUN_00a020d4(undefined8 *param_1)

{
  FUN_00948cd8();
  FUN_00e83560(param_1 + 3);
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_027c6eb0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[3] = &PTR_FUN_027c7258;
  *(undefined2 *)(param_1 + 0x10) = 0;
  FUN_0099ce88(param_1 + 0x11);
  FUN_0099ce88(param_1 + 0x15);
  FUN_0099ce88(param_1 + 0x19);
  FUN_0099cfec(param_1 + 0x11,"QUESTS.DAILYQUESTS.COLLECT",0);
  FUN_0099cfec(param_1 + 0x15,"ACCOUNT.LEVEL_UP_REWARDS",0);
  FUN_0099cfec(param_1 + 0x19,"QUESTS.7DAYLOGIN.COLLECT",0);
  return;
}




void FUN_00a02198(void)

{
  if (DAT_031308d8 != (long *)0x0) {
    (**(code **)(*DAT_031308d8 + 8))();
  }
  DAT_031308d8 = (long *)0x0;
  if (DAT_031308d0 != (long *)0x0) {
    (**(code **)(*DAT_031308d0 + 8))();
  }
  DAT_031308d0 = (long *)0x0;
  return;
}




void FUN_00a021e8(void)

{
  FUN_00a00380(DAT_031308d0);
  FUN_00a01eec(DAT_031308d0);
  return;
}




void FUN_00a02210(undefined8 param_1,undefined8 param_2)

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
  FUN_008fa54c(local_50,param_1);
  FUN_008fa54c(local_68,param_2);
  FUN_00962bd8(uVar2,local_50,local_68);
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




bool FUN_00a022b0(void)

{
  if (DAT_031308d0 != 0) {
    return *(char *)(DAT_031308d0 + 0x80) != '\0';
  }
  return false;
}




undefined8 FUN_00a022d4(void)

{
  return DAT_031308d8;
}




void FUN_00a022e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c6eb0;
  param_1[3] = &PTR_FUN_027c7258;
  FUN_0099cedc(param_1 + 0x19);
  FUN_0099cedc(param_1 + 0x15);
  FUN_0099cedc(param_1 + 0x11);
  if ((void *)param_1[0xf] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf]);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  FUN_00a02560(param_1 + 6);
  FUN_00e835e0(param_1 + 3);
  FUN_00948d58(param_1);
  return;
}




void FUN_00a02360(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c6eb0;
  param_1[3] = &PTR_FUN_027c7258;
  FUN_0099cedc(param_1 + 0x19);
  FUN_0099cedc(param_1 + 0x15);
  FUN_0099cedc(param_1 + 0x11);
  if ((void *)param_1[0xf] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf]);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  FUN_00a02560(param_1 + 6);
  FUN_00e835e0(param_1 + 3);
  FUN_00948d58(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a023e8(undefined8 *param_1)

{
  param_1[-3] = &PTR_FUN_027c6eb0;
  *param_1 = &PTR_FUN_027c7258;
  FUN_0099cedc(param_1 + 0x16);
  FUN_0099cedc(param_1 + 0x12);
  FUN_0099cedc(param_1 + 0xe);
  if ((void *)param_1[0xc] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc]);
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  if ((void *)param_1[10] != (void *)0x0) {
    operator_delete__((void *)param_1[10]);
    param_1[9] = 0;
    param_1[10] = 0;
  }
  FUN_00a02560(param_1 + 3);
  FUN_00e835e0(param_1);
  FUN_00948d58(param_1 + -3);
  return;
}




void FUN_00a02468(long param_1)

{
  FUN_00a02360(param_1 + -0x18);
  return;
}




void FUN_00a02470(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 4) = param_1[10];
        uVar4 = *param_1;
        param_1[10] = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
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




void FUN_00a024f0(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x58;
      do {
        FUN_009f69d8(lVar1);
        lVar2 = lVar2 + -0x58;
        lVar1 = lVar1 + 0x58;
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




void FUN_00a02560(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
        uVar4 = *param_1;
        param_1[10] = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
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




void FUN_00a025e4(uint *param_1,uint param_2)

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




void FUN_00a02664(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_00a026f8(param_1 + 0x18,auStack_40);
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)(*(int *)(param_1 + 0x18) - 1) * 4);
  }
  else {
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28) * 4);
    *(undefined4 *)(param_1 + 0x28) = *puVar2;
  }
  *puVar2 = *param_2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a026f8(uint *param_1,undefined4 *param_2)

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
    FUN_00a02780(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_00a02780(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -4;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined4 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00a02800(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_009f6b4c(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x70;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
      *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar3 + 0x30);
      FUN_008fcdb8(lVar4 + 0x38,lVar3 + 0x38);
      FUN_008fcdb8(lVar4 + 0x50,lVar3 + 0x50);
      puVar1 = (undefined4 *)(lVar3 + 0x68);
      lVar3 = lVar3 + 0x70;
      *(undefined4 *)(lVar4 + 0x68) = *puVar1;
      lVar4 = lVar4 + 0x70;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_00a028ac(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_00a0293c(param_1 + 0x18,auStack_40);
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = (ulong)(*(int *)(param_1 + 0x18) - 1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar3 + uVar2 * 8);
  }
  *(undefined8 *)(lVar3 + uVar2 * 8) = *param_2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a0293c(uint *param_1,undefined8 *param_2)

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
    FUN_00a029c4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00a029c4(uint *param_1,uint param_2)

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




void FUN_00a02a44(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        lVar3 = lVar3 + -4;
        *puVar4 = *puVar5;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




bool FUN_00a02ac4(void)

{
  long lVar1;
  
  lVar1 = FUN_009580b8();
  return 0 < *(int *)(lVar1 + 0x55d8);
}




void FUN_00a02ae8(int *param_1,int *param_2)

{
  if (*param_2 != 0x11) {
    *param_1 = *param_2;
  }
  if (param_2[1] != 5) {
    param_1[1] = param_2[1];
  }
  if (param_2[2] != 5) {
    param_1[2] = param_2[2];
  }
  if (param_2[3] != 2) {
    param_1[3] = param_2[3];
  }
  return;
}




void FUN_00a02b2c(long param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x88) = 1;
  *(undefined1 *)(param_1 + 0x9c) = 1;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  return;
}




void FUN_00a02b4c(undefined8 *param_1,undefined4 param_2,byte *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[1] = 0x200000005;
  *param_1 = 0x500000011;
  FUN_00e70510(param_1 + 8);
  FUN_00e70510(param_1 + 10);
  FUN_00e70510(param_1 + 0xc);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((long)param_1 + 0x9d) = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((long)param_1 + 0x9c) = 1;
  *(undefined4 *)param_1 = param_2;
  if (param_3 != (byte *)0x0) {
    uVar2 = (uint)*param_3;
    uVar1 = 0x811c9dc5;
    if (*param_3 != 0) {
      do {
        param_3 = param_3 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_3;
      } while (*param_3 != 0);
    }
    *(uint *)(param_1 + 5) = uVar1;
  }
  *(undefined4 *)((long)param_1 + 0x2c) = param_4;
  *(undefined4 *)(param_1 + 6) = param_5;
  return;
}




void FUN_00a02c18(undefined8 *param_1,undefined4 param_2,byte *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[1] = 0x200000005;
  *param_1 = 0x500000011;
  FUN_00e70510(param_1 + 8);
  FUN_00e70510(param_1 + 10);
  FUN_00e70510(param_1 + 0xc);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((long)param_1 + 0x9d) = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((long)param_1 + 0x9c) = 1;
  *(undefined4 *)((long)param_1 + 4) = param_2;
  if (param_3 != (byte *)0x0) {
    uVar2 = (uint)*param_3;
    uVar1 = 0x811c9dc5;
    if (*param_3 != 0) {
      do {
        param_3 = param_3 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_3;
      } while (*param_3 != 0);
    }
    *(uint *)(param_1 + 5) = uVar1;
  }
  *(undefined4 *)((long)param_1 + 0x2c) = param_4;
  *(undefined4 *)(param_1 + 6) = param_5;
  return;
}




void FUN_00a02ce4(undefined8 *param_1,undefined4 param_2,byte *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[1] = 0x200000005;
  *param_1 = 0x500000011;
  FUN_00e70510(param_1 + 8);
  FUN_00e70510(param_1 + 10);
  FUN_00e70510(param_1 + 0xc);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((long)param_1 + 0x9d) = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((long)param_1 + 0x9c) = 1;
  *(undefined4 *)(param_1 + 1) = param_2;
  if (param_3 != (byte *)0x0) {
    uVar2 = (uint)*param_3;
    uVar1 = 0x811c9dc5;
    if (*param_3 != 0) {
      do {
        param_3 = param_3 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_3;
      } while (*param_3 != 0);
    }
    *(uint *)(param_1 + 5) = uVar1;
  }
  *(undefined4 *)((long)param_1 + 0x2c) = param_4;
  *(undefined4 *)(param_1 + 6) = param_5;
  return;
}




void FUN_00a02db0(undefined8 *param_1,undefined4 param_2,byte *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[1] = 0x200000005;
  *param_1 = 0x500000011;
  FUN_00e70510(param_1 + 8);
  FUN_00e70510(param_1 + 10);
  FUN_00e70510(param_1 + 0xc);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((long)param_1 + 0x9d) = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((long)param_1 + 0x9c) = 1;
  *(undefined4 *)((long)param_1 + 0xc) = param_2;
  if (param_3 != (byte *)0x0) {
    uVar2 = (uint)*param_3;
    uVar1 = 0x811c9dc5;
    if (*param_3 != 0) {
      do {
        param_3 = param_3 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_3;
      } while (*param_3 != 0);
    }
    *(uint *)(param_1 + 5) = uVar1;
  }
  *(undefined4 *)((long)param_1 + 0x2c) = param_4;
  *(undefined4 *)(param_1 + 6) = param_5;
  return;
}




void FUN_00a02e7c(uint *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    uVar1 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  *param_1 = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_3;
  FUN_00e70510(param_1 + 8);
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 0x32) = 0;
  return;
}




void FUN_00a02ef0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  iVar1 = -0x30;
  if (param_2 != 0) {
    plVar6 = (long *)register0x00000008;
    do {
      if (*(char *)(param_2 + 0x9d) == '\0') {
        FUN_00a02fcc(param_1 + 8);
      }
      lVar3 = (long)iVar1;
      if ((iVar1 < 0) && (iVar1 = iVar1 + 8, iVar1 < 1)) {
        plVar4 = (long *)(&stack0xffffffffffffffa8 + lVar3);
      }
      else {
        plVar4 = plVar6;
        plVar6 = plVar6 + 1;
      }
      param_2 = *plVar4;
    } while (param_2 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a02fcc(uint *param_1,undefined8 *param_2)

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
    FUN_00a03430(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  uVar5 = *param_2;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xa8;
  *(undefined8 *)(lVar4 + -0xa0) = param_2[1];
  *(undefined8 *)(lVar4 + -0xa8) = uVar5;
  FUN_008fcdb8(lVar4 + -0x98,param_2 + 2);
  *(undefined4 *)(lVar4 + -0x70) = *(undefined4 *)(param_2 + 7);
  uVar5 = param_2[5];
  *(undefined8 *)(lVar4 + -0x78) = param_2[6];
  *(undefined8 *)(lVar4 + -0x80) = uVar5;
  thunk_FUN_00e7051c(lVar4 + -0x68,param_2 + 8);
  thunk_FUN_00e7051c(lVar4 + -0x58,param_2 + 10);
  thunk_FUN_00e7051c(lVar4 + -0x48,param_2 + 0xc);
  FUN_008fcdb8(lVar4 + -0x38,param_2 + 0xe);
  uVar5 = *(undefined8 *)((long)param_2 + 0x91);
  *(undefined8 *)(lVar4 + -0xf) = *(undefined8 *)((long)param_2 + 0x99);
  *(undefined8 *)(lVar4 + -0x17) = uVar5;
  uVar5 = param_2[0x11];
  *(undefined8 *)(lVar4 + -0x18) = param_2[0x12];
  *(undefined8 *)(lVar4 + -0x20) = uVar5;
  return;
}

