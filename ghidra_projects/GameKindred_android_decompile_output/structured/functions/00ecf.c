// functions/00ecf — 39 functions
#include "libGameKindred.h"




long * FUN_00ecf02c(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_009343e8(param_1[1],param_2);
  operator_delete(param_2);
  return plVar3;
}




void FUN_00ecf0c0(uint *param_1,uint param_2)

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




void FUN_00ecf148(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00ecb408(param_2);
  FUN_00ecc1c0(param_1,uVar1);
  return;
}




void FUN_00ecf178(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  code *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_02822440;
  param_1[0x45] = param_1;
  *(ushort *)(param_1 + 0x46) = *(ushort *)(param_1 + 0x46) & 0x8000 | 0x3ff;
  puVar2 = param_1 + 0x17;
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 0x47) = 0xbf800000;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(byte *)((long)param_1 + 0x23c) = *(byte *)((long)param_1 + 0x23c) & 0xfc;
  FUN_00ecf484(puVar2,0,0,0,FUN_00ecf4d8,0,0,0);
  FUN_00ecf484(puVar2,1,0,0,FUN_00ecf4e4,0,0,0);
  FUN_00ecf484(puVar2,2,0,0,FUN_00ecf4f0,0,0,0);
  FUN_00ecf484(puVar2,3,0,0,FUN_00ecf560,0,0,0);
  FUN_00ecf56c(puVar2,0,3);
  FUN_00ecf56c(puVar2,1,3);
  FUN_00ecf56c(puVar2,2,3);
  FUN_00ecf56c(puVar2,1,2);
  FUN_00ecf56c(puVar2,0,1);
  FUN_00ecf56c(puVar2,1,0);
  FUN_00ecf56c(puVar2,3,0);
  FUN_00ecf56c(puVar2,2,0);
  FUN_00ecf5f4(puVar2,0);
  puVar2 = param_1 + 1;
  local_40 = DAT_03210f58;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  local_68 = FUN_00ecf720;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar2,&local_68);
  local_68 = FUN_00ecf720;
  local_40 = DAT_03210f84;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar2,&local_68);
  local_40 = DAT_03210f5c;
  local_68 = FUN_00ecf728;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar2,&local_68);
  local_68 = FUN_00ecf728;
  local_40 = DAT_03210f88;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar2,&local_68);
  local_40 = DAT_03210f60;
  local_68 = FUN_00ecf73c;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar2,&local_68);
  local_68 = FUN_00ecf73c;
  local_40 = DAT_03210f8c;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar2,&local_68);
  local_40 = DAT_03210fa4;
  local_68 = FUN_00ecf744;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar2,&local_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ecf484(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  
  lVar1 = param_1 + (ulong)(*(ushort *)(param_1 + 0x178) >> 10 & 0x1f) * 0x58;
  *(undefined4 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  *(undefined8 *)(lVar1 + 0x30) = param_6;
  *(undefined8 *)(lVar1 + 0x38) = param_7;
  *(undefined8 *)(lVar1 + 0x40) = param_8;
  *(code **)(lVar1 + 0x50) = FUN_00ecfaec;
  *(code **)(lVar1 + 0x48) = FUN_00ecfaec;
  *(code **)(lVar1 + 0x58) = FUN_00ecfaec;
  *(undefined4 *)(lVar1 + 0x60) = 0;
  *(ushort *)(param_1 + 0x178) =
       *(ushort *)(param_1 + 0x178) + 0x400 & 0x7c00 | *(ushort *)(param_1 + 0x178) & 0x83ff;
  return;
}




void FUN_00ecf4d8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ecf4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}




void FUN_00ecf4e4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ecf4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}




void FUN_00ecf4f0(long *param_1)

{
  long lVar1;
  long *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0x140))();
  pcStack_30 = FUN_00ecfb10;
  local_38 = param_1;
  FUN_00f02e98((int)param_1[0x47],&local_38,0,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ecf560(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ecf568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}




void FUN_00ecf56c(long param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x178) >> 10;
  if ((uVar1 & 0x1f) != 0) {
    uVar2 = 0;
    piVar4 = (int *)(param_1 + 0x10);
    do {
      if (*piVar4 == param_2) goto LAB_00ecf5a0;
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 0x16;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_00ecf5a0:
    if ((uVar1 & 0x1f) != 0) {
      uVar3 = 0;
      piVar4 = (int *)(param_1 + 0x10);
      do {
        if (*piVar4 == param_3) {
          if (uVar2 == 0xffffffff) {
            return;
          }
          param_1 = param_1 + (long)(int)uVar2 * 0x58;
          *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1 << (ulong)(uVar3 & 0x1f);
          return;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 0x16;
      } while (uVar3 < (uVar1 & 0x1f));
    }
  }
  return;
}




void FUN_00ecf5f4(int *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  
  uVar3 = *(ushort *)(param_1 + 0x5e);
  if ((uVar3 & 0x7c00) != 0) {
    uVar4 = 0;
    piVar6 = param_1 + 4;
    do {
      if (*piVar6 == param_2) goto LAB_00ecf63c;
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 0x16;
    } while (uVar4 < (uVar3 >> 10 & 0x1f));
  }
  uVar4 = 0x1f;
LAB_00ecf63c:
  uVar1 = uVar3 & 0x1f;
  uVar5 = (ulong)uVar1;
  if (uVar1 == 0x1f) {
    uVar3 = uVar3 & 0xfc1f | (ushort)((uVar4 & 0x1f) << 5);
    *(ushort *)(param_1 + 0x5e) = uVar3;
  }
  else {
    if (uVar4 == uVar1) {
      return;
    }
    if ((param_1[uVar5 * 0x16 + 0x18] & 1 << (ulong)(uVar4 & 0x1f)) == 0) {
      return;
    }
    *(ushort *)(param_1 + 0x5e) = uVar3 & 0xfc1f | (ushort)((uVar4 & 0x1f) << 5);
    if (*param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 2);
    }
    (**(code **)(param_1 + uVar5 * 0x16 + 0x16))
              (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + uVar5 * 0x16 + 0xe),
               *(undefined8 *)(param_1 + uVar5 * 0x16 + 0x10),uVar2);
    uVar3 = *(ushort *)(param_1 + 0x5e);
  }
  uVar4 = uVar4 & 0x1f;
  *(ushort *)(param_1 + 0x5e) = (ushort)uVar4 | uVar3 & 0xfc00 | 0x3e0;
  if (uVar4 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00ecf71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar4 * 0x16 + 0x14))
            (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + (ulong)uVar4 * 0x16 + 10),
             *(undefined8 *)(param_1 + (ulong)uVar4 * 0x16 + 0xc),uVar2);
  return;
}




void FUN_00ecf720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00ecf8d8(param_1,param_4);
  return;
}




void FUN_00ecf728(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*(byte *)(param_1 + 0x23c) >> 1 & 1) == 0) {
    return;
  }
  FUN_00f0490c(param_4);
  return;
}




void FUN_00ecf73c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00ecf960(param_1,param_4);
  return;
}




void FUN_00ecf744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00ecfa68(param_1,param_4);
  return;
}




void FUN_00ecf74c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_02822440;
  pcStack_40 = FUN_00ecfb10;
  local_48 = param_1;
  FUN_00f03390(&local_48);
  FUN_00ecf7d0(param_1 + 0x17);
  FUN_00f13d08(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ecf7d0(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x5e) & 0x1f;
  *(ushort *)(param_1 + 0x5e) = *(ushort *)(param_1 + 0x5e) | 0x3e0;
  if (uVar1 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00ecf81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x16))
            (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0xe),
             *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0x10),uVar2);
  return;
}




void FUN_00ecf820(void *param_1)

{
  FUN_00ecf74c();
  operator_delete(param_1);
  return;
}




undefined4 FUN_00ecf844(long param_1)

{
  uint uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x230) & 0x1f;
  if (uVar1 == 0x1f) {
    return 0x1f;
  }
  return *(undefined4 *)(param_1 + (ulong)uVar1 * 0x58 + 200);
}




void FUN_00ecf870(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x23c) = *(byte *)(param_1 + 0x23c) & 0xfd | (param_2 & 1) << 1;
  return;
}




void FUN_00ecf888(long param_1,ulong param_2)

{
  uint uVar1;
  
  if ((param_2 & 1) == 0) {
    FUN_00ecf5f4(param_1 + 0xb8,3);
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0x230) & 0x1f;
  if ((uVar1 != 0x1f) && (*(int *)(param_1 + (ulong)uVar1 * 0x58 + 200) == 3)) {
    FUN_00ecf5f4(param_1 + 0xb8,0);
    return;
  }
  return;
}




void FUN_00ecf8d0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x238) = param_1;
  return;
}




void FUN_00ecf8d8(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x230) & 0x1f;
  if ((uVar1 != 0x1f) && (*(int *)(param_1 + (ulong)uVar1 * 0x58 + 200) == 0)) {
    *(byte *)(param_1 + 0x23c) = *(byte *)(param_1 + 0x23c) | 1;
    FUN_00ecf5f4(param_1 + 0xb8,1);
  }
  if ((*(byte *)(param_1 + 0x23c) >> 1 & 1) == 0) {
    return;
  }
  FUN_00f0490c(param_2);
  return;
}




void FUN_00ecf94c(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x23c) >> 1 & 1) == 0) {
    return;
  }
  FUN_00f0490c(param_2);
  return;
}




void FUN_00ecf960(long *param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((((*(ushort *)(param_1 + 0x46) & 0x1f) == 0x1f) ||
      ((int)param_1[(ulong)(*(ushort *)(param_1 + 0x46) & 0x1f) * 0xb + 0x19] != 1)) ||
     ((*(byte *)((long)param_1 + 0x23c) & 1) == 0)) {
    bVar1 = *(byte *)((long)param_1 + 0x23c);
    *(byte *)((long)param_1 + 0x23c) = bVar1 & 0xfe;
  }
  else {
    *(byte *)((long)param_1 + 0x23c) = *(byte *)((long)param_1 + 0x23c) & 0xfe;
    if (*(float *)(param_1 + 0x47) <= 0.0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 2;
    }
    FUN_00ecf5f4(param_1 + 0x17,uVar3);
    (**(code **)(*param_1 + 0x138))(param_1);
    FUN_00ed8868(auStack_68,DAT_03210c64,0xffffffff,0);
    FUN_00f04760(param_1,auStack_68,1);
    bVar1 = *(byte *)((long)param_1 + 0x23c);
  }
  if ((bVar1 >> 1 & 1) != 0) {
    FUN_00f0490c(param_2);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ecfa68(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x230) & 0x1f;
  uVar2 = *(byte *)(param_1 + 0x23c) & 0xfffffffe;
  *(char *)(param_1 + 0x23c) = (char)uVar2;
  if ((uVar1 != 0x1f) && (*(int *)(param_1 + (ulong)uVar1 * 0x58 + 200) == 1)) {
    FUN_00ecf5f4(param_1 + 0xb8,0);
    uVar2 = (uint)*(byte *)(param_1 + 0x23c);
  }
  if ((uVar2 >> 1 & 1) == 0) {
    return;
  }
  FUN_00f0490c(param_2);
  return;
}




void FUN_00ecfae0(long param_1)

{
  FUN_00ecf5f4(param_1 + 0xb8,0);
  return;
}




void FUN_00ecfaec(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(param_1 + ((long)param_3 >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x00ecfb08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}




void FUN_00ecfb10(long param_1)

{
  FUN_00ecf5f4(param_1 + 0xb8,0);
  return;
}




void FUN_00ecfb1c(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_02822598;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}




void FUN_00ecfb3c(long *param_1)

{
  if ((char)param_1[5] == '\0') {
    (**(code **)(*param_1 + 0x20))(param_1);
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}




void FUN_00ecfb78(long *param_1,uint param_2)

{
  if ((char)param_1[5] != '\0') {
    (**(code **)(*param_1 + 0x28))(param_1);
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if ((param_2 & 1) != 0) {
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}




undefined1 FUN_00ecfbc4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}




void FUN_00ecfbcc(long *param_1)

{
  (**(code **)(*param_1 + 0x30))();
  if ((code *)param_1[1] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ecfc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[1])(param_1[4],0);
    return;
  }
  return;
}




void FUN_00ecfc10(long *param_1)

{
  (**(code **)(*param_1 + 0x38))();
  if ((code *)param_1[2] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ecfc44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[2])(param_1[4],1);
    return;
  }
  return;
}




void FUN_00ecfc54(long *param_1)

{
  (**(code **)(*param_1 + 0x40))();
  if ((code *)param_1[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ecfc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[3])(param_1[4],2);
    return;
  }
  return;
}




void FUN_00ecfc98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 0x18) = param_5;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_00ecfca4(long *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if ((char)param_1[5] != '\0') {
    (**(code **)(*param_1 + 0x28))(param_1);
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (param_2 == 2) {
    (**(code **)(*param_1 + 0x40))(param_1);
    pcVar3 = (code *)param_1[3];
    if (pcVar3 == (code *)0x0) goto LAB_00ecfd54;
    lVar1 = param_1[4];
    uVar2 = 2;
  }
  else if (param_2 == 1) {
    (**(code **)(*param_1 + 0x38))(param_1);
    pcVar3 = (code *)param_1[2];
    if (pcVar3 == (code *)0x0) goto LAB_00ecfd54;
    lVar1 = param_1[4];
    uVar2 = 1;
  }
  else {
    if (param_2 != 0) goto LAB_00ecfd54;
    (**(code **)(*param_1 + 0x30))(param_1);
    pcVar3 = (code *)param_1[1];
    if (pcVar3 == (code *)0x0) goto LAB_00ecfd54;
    lVar1 = param_1[4];
    uVar2 = 0;
  }
  (*pcVar3)(lVar1,uVar2);
LAB_00ecfd54:
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}




void FUN_00ecfd6c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_028225f0;
  FUN_00f13ca4(param_1 + 0x17);
  plVar1 = param_1 + 0x2e;
  FUN_00ed1ad4(plVar1);
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0x4448000044480000;
  *(undefined4 *)(param_1 + 0xa2) = 0x41700000;
  param_1[0xa1] = 0x3d4ccccd460ca000;
  param_1[0xa3] = 0;
  param_1[0xa5] = 0x42a00000439d8000;
  param_1[0xa4] = 0x4120000043160000;
  *(ushort *)(param_1 + 0xa6) = *(ushort *)(param_1 + 0xa6) & 0xfc00 | 0x110;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 1;
  local_60 = DAT_03210f58;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  local_88 = FUN_00ed007c;
  uStack_68 = 0;
  local_70 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(plVar2,&local_88);
  local_60 = DAT_03210f5c;
  local_88 = FUN_00ed0090;
  uStack_68 = 0;
  local_70 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(plVar2,&local_88);
  local_60 = DAT_03210f60;
  local_88 = FUN_00ed00a4;
  uStack_68 = 0;
  local_70 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(plVar2,&local_88);
  local_60 = DAT_03210f7c;
  local_88 = FUN_00ed00b8;
  uStack_68 = 0;
  local_70 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(plVar2,&local_88);
  local_60 = DAT_03210f84;
  local_88 = FUN_00ed007c;
  uStack_68 = 0;
  local_70 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(plVar2,&local_88);
  local_60 = DAT_03210f88;
  local_88 = FUN_00ed0090;
  uStack_68 = 0;
  local_70 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(plVar2,&local_88);
  local_60 = DAT_03210f8c;
  local_88 = FUN_00ed00a4;
  uStack_68 = 0;
  local_70 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(plVar2,&local_88);
  local_60 = DAT_03210fa4;
  local_88 = FUN_00ed00cc;
  uStack_68 = 0;
  local_70 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(plVar2,&local_88);
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  if ((*(uint *)((long)param_1 + 500) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 500) = *(uint *)((long)param_1 + 500) & 0xffff807f;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x37) != 0.4) || (*(float *)((long)param_1 + 0x1bc) != 1.0)) {
    param_1[0x37] = 0x3f8000003ecccccd;
    FUN_0091ada4(plVar1);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

