// functions/009f1 — 17 functions
#include "libGameKindred.h"




long FUN_009f1a50(ulong param_1)

{
  return (param_1 & 0xffffffff) * 0x18 + 0x31307b0;
}




undefined * FUN_009f1a68(ulong param_1)

{
  return &DAT_0312fd10 + (param_1 & 0xffffffff) * 0x50;
}




void FUN_009f1a7c(uint *param_1,undefined4 *param_2)

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
    FUN_009f1c78(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  *(undefined4 *)(lVar4 + -0x28) = *param_2;
  thunk_FUN_00e7051c(lVar4 + -0x20,param_2 + 2);
  thunk_FUN_00e7051c(lVar4 + -0x10,param_2 + 6);
  return;
}




bool FUN_009f1b1c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00e6aee0(param_1,param_2,4);
  return iVar1 == 0;
}




void FUN_009f1b3c(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1 != param_2) {
    FUN_009f1bec(param_1,1);
    FUN_009f1c78(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      puVar2 = *(undefined4 **)(param_2 + 2);
      puVar3 = *(undefined4 **)(param_1 + 2);
      puVar4 = puVar2 + (ulong)*param_2 * 10;
      do {
        *puVar3 = *puVar2;
        thunk_FUN_00e7051c(puVar3 + 2,puVar2 + 2);
        thunk_FUN_00e7051c(puVar3 + 6,puVar2 + 6);
        puVar2 = puVar2 + 10;
        puVar3 = puVar3 + 10;
      } while (puVar2 != puVar4);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_009f1bec(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x28;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x20);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          operator_delete__((void *)*puVar2);
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        if ((void *)puVar2[-2] != (void *)0x0) {
          operator_delete__((void *)puVar2[-2]);
          puVar2[-3] = 0;
          puVar2[-2] = 0;
        }
        lVar1 = lVar1 + -0x28;
        puVar2 = puVar2 + 5;
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




void FUN_009f1c78(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x28);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      puVar5 = puVar2 + (ulong)*param_1 * 10;
      puVar6 = puVar1;
      do {
        *puVar6 = *puVar2;
        thunk_FUN_00e7051c(puVar6 + 2,puVar2 + 2);
        thunk_FUN_00e7051c(puVar6 + 6,puVar2 + 6);
        puVar2 = puVar2 + 10;
        puVar6 = puVar6 + 10;
      } while (puVar2 != puVar5);
      puVar2 = *(undefined4 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x28;
        puVar3 = (undefined8 *)(puVar2 + 8);
        do {
          if ((void *)*puVar3 != (void *)0x0) {
            operator_delete__((void *)*puVar3);
            puVar3[-1] = 0;
            *puVar3 = 0;
          }
          if ((void *)puVar3[-2] != (void *)0x0) {
            operator_delete__((void *)puVar3[-2]);
            puVar3[-3] = 0;
            puVar3[-2] = 0;
          }
          lVar4 = lVar4 + -0x28;
          puVar3 = puVar3 + 5;
        } while (lVar4 != 0);
        puVar2 = *(undefined4 **)(param_1 + 2);
      }
    }
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_009f1d80(void)

{
  void *pvVar1;
  
  if (DAT_03130890 != (void *)0x0) {
    return;
  }
  pvVar1 = operator_new(0xa0);
  FUN_009f1fbc();
  DAT_03130890 = pvVar1;
  FUN_009f1dc8(pvVar1);
  return;
}




void FUN_009f1dc8(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  void *local_78;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar5 = 0;
  lVar6 = 0x10;
  *(undefined1 *)(param_1 + 0x98) = 1;
  do {
    puVar4 = (undefined8 *)FUN_009f1a68(uVar5 & 0xffffffff);
    uStack_a8 = puVar4[1];
    local_b0 = *puVar4;
    uStack_98 = puVar4[3];
    local_a0 = puVar4[2];
    uStack_88 = puVar4[5];
    local_90 = puVar4[4];
    thunk_FUN_00e7051c(&local_80,puVar4 + 6);
    FUN_009f2318(auStack_70,puVar4 + 8);
    if ((int)uStack_98 == 2) {
      uVar3 = FUN_009374fc(uStack_98._4_4_,uStack_a8);
      *(undefined4 *)(param_1 + lVar6) = uVar3;
    }
    else if ((int)uStack_98 == 1) {
      uVar3 = FUN_00937424(uStack_a8,uStack_98._4_4_);
      *(undefined4 *)(param_1 + lVar6) = uVar3;
    }
    else if ((int)uStack_98 == 0) {
      uVar2 = FUN_0093734c(uStack_a8,uStack_98._4_1_);
      *(uint *)(param_1 + lVar6) = uVar2 & 1;
    }
    FUN_009f1bec(auStack_70,1);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
      local_80 = 0;
      local_78 = (void *)0x0;
    }
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 4;
  } while (uVar5 != 0x22);
  FUN_009f22bc(param_1);
  local_b0 = CONCAT44(local_b0._4_4_,0x22);
  FUN_009f2250(param_1,&local_b0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f1f18(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_03130890;
  if (DAT_03130890 != (void *)0x0) {
    FUN_009f202c(DAT_03130890);
    operator_delete(pvVar1);
    DAT_03130890 = (void *)0x0;
  }
  return;
}




bool FUN_009f1f50(void)

{
  return DAT_03130890 != 0;
}




undefined8 FUN_009f1f64(void)

{
  return DAT_03130890;
}




uint FUN_009f1f70(ulong param_1)

{
  return *(uint *)(DAT_03130890 + (param_1 & 0xffffffff) * 4 + 0x10) & 1;
}




undefined4 FUN_009f1f88(long param_1,uint param_2)

{
  return *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 0x10);
}




undefined4 FUN_009f1f94(ulong param_1)

{
  return *(undefined4 *)(DAT_03130890 + (param_1 & 0xffffffff) * 4 + 0x10);
}




undefined4 FUN_009f1fa8(uint param_1)

{
  return *(undefined4 *)(DAT_03130890 + (ulong)param_1 * 4 + 0x10);
}




void FUN_009f1fbc(void *param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_48;
  undefined8 uStack_40;
  void *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  memset(param_1,0,0x99);
  FUN_009eeb40();
  uVar2 = FUN_00940aac();
  uStack_40 = 0;
  pcStack_30 = FUN_009f23b4;
  local_48 = param_1;
  local_38 = param_1;
  FUN_009e4694(uVar2,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

