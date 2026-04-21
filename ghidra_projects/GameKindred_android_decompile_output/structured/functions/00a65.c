// functions/00a65 — 26 functions
#include "libGameKindred.h"




void thunk_FUN_00a6572c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_68 [48];
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x24d90);
  if (lVar2 != 0) {
    FUN_00a60a14(lVar2,0);
  }
  *(long *)(param_1 + 0x24d90) = 0;
  if (*(int *)(param_1 + 0x298dc) != 0) {
    *(undefined8 *)(param_1 + 0x24d98) = 0;
  }
  FUN_00a64540(param_1);
  FUN_00ed8868(auStack_68,DAT_03210c64,0xffffffff,0);
  FUN_00f04760(param_1,auStack_68,1);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a657e8(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_CLOSE_SHOP_AND_OPEN_RECOMMENDED_PATH_SELECTOR");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a65520(long param_1)

{
  FUN_00a64fcc(param_1 + -0xb8);
  return;
}




undefined8 FUN_00a65528(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0xe0) + 8) + 0x30;
  return 1;
}




undefined8 FUN_00a65540(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30;
  return 1;
}




void FUN_00a65558(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    FUN_00a64218(param_1,param_3,0);
  }
  FUN_00f0490c(param_2);
  return;
}




void FUN_00a65588(long param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x24d90) == param_3) {
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
    if (((((uVar2 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) &&
        (uVar2 = FUN_00f04a94(param_2), (uVar2 & 1) != 0)) && (*(char *)(param_1 + 0x298e4) == '\0')
       ) {
      FUN_00ed8868(auStack_78,DAT_03210c6c,0xffffffff,param_3);
      FUN_00f04760(param_1,auStack_78,1);
    }
  }
  FUN_00f0490c(param_2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a65684(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 != 0) {
    FUN_00a64218(param_1,param_3,0);
  }
  if (*(long *)(param_1 + 0x24d90) == param_3) {
    uVar2 = FUN_00f048a4("EVENT_SHOP_RIGHT_CLICK_BUY_ITEM");
    FUN_00ed8868(auStack_68,uVar2,0xffffffff,param_3);
    FUN_00f04760(param_1,auStack_68,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a6572c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x24d90);
  if (lVar2 != 0) {
    FUN_00a60a14(lVar2,0);
  }
  *(long *)(param_1 + 0x24d90) = 0;
  if (*(int *)(param_1 + 0x298dc) != 0) {
    *(undefined8 *)(param_1 + 0x24d98) = 0;
  }
  FUN_00a64540(param_1);
  FUN_00ed8868(auStack_68,DAT_03210c64,0xffffffff,0);
  FUN_00f04760(param_1,auStack_68,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a657e8(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_CLOSE_SHOP_AND_OPEN_RECOMMENDED_PATH_SELECTOR");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ushort * FUN_00a65858(long param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x23280);
  if ((ulong)uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = (ushort *)(param_1 + (ulong)uVar1 * 3000);
    if (uVar1 == *(ushort *)(param_1 + 0x23282)) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = *puVar2;
    }
    *(ushort *)(param_1 + 0x23280) = uVar1;
    FUN_00a5fef4(puVar2);
    *(int *)(param_1 + 0x23284) = *(int *)(param_1 + 0x23284) + 1;
  }
  return puVar2;
}




void FUN_00a658e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  if (param_5 != 0) {
    FUN_00a64218(param_1,param_5,0);
  }
  FUN_00f0490c(param_4);
  return;
}




void FUN_00a65914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00a65588(param_1,param_4,param_5);
  return;
}




void FUN_00a65920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00a65684(param_1,param_2,param_5);
  return;
}




void FUN_00a65928(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00ed8868(auStack_58,DAT_03210c64,param_3 & 1,param_2);
  FUN_00f04760(param_1,auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a65998(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    FUN_00a659d8(param_1,param_3,1);
    FUN_00a63a44(param_1);
    return;
  }
  return;
}




void FUN_00a659d8(long param_1,long param_2,uint param_3)

{
  undefined4 *puVar1;
  
  if ((param_3 & 1) != 0) {
    puVar1 = &DAT_01bc8f98;
    if (param_2 != 0) {
      puVar1 = (undefined4 *)(param_2 + 0x63c);
    }
    FUN_00da3760(*puVar1);
  }
  FUN_00a64dd8(param_1,param_2);
  if (*(int *)(param_1 + 0x298dc) != 0) {
    return;
  }
  FUN_00a64104(param_1,*(undefined4 *)(param_2 + 0x63c));
  return;
}




void FUN_00a65a48(long param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(param_1 + 0x24da0) != 0) && (*(long *)(param_1 + 0x24da0) == param_3)) {
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
    if ((((uVar2 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) &&
       ((uVar2 = FUN_00f04a94(param_2), (uVar2 & 1) != 0 && (*(char *)(param_1 + 0x298e4) == '\0')))
       ) {
      FUN_00ed8868(auStack_78,DAT_03210c6c,0xffffffff,param_3);
      FUN_00f04760(param_1,auStack_78,1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a65b3c(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 local_b8 [20];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*(long *)(param_1 + 0xd8) != 0) && (param_2 != 0)) {
    uVar3 = FUN_00d786f8(param_2,local_b8,0x14);
    uVar8 = (ulong)uVar3;
    if (uVar3 != 0) {
      lVar5 = FUN_00d9eae0(*(undefined8 *)(param_1 + 0xd0));
      puVar9 = local_b8;
      do {
        uVar1 = *puVar9;
        uVar6 = FUN_00d75000(*(undefined8 *)(param_1 + 0xd8),uVar1);
        if ((uVar6 & 1) != 0) {
          uVar7 = FUN_00d6eb50();
          uVar7 = FUN_00d6eb88(uVar7,uVar1);
          uVar7 = FUN_00a65c88(param_1,uVar1,uVar7,0);
          if ((((*(long *)(param_1 + 0x24da0) == 0) && (iVar4 = FUN_00da376c(), lVar5 != 0)) &&
              (iVar4 != 0xffff)) &&
             (uVar6 = FUN_00da3d28(0,uVar1,local_b8,lVar5,*(undefined8 *)(param_1 + 0xd8)),
             (uVar6 & 1) != 0)) {
            FUN_00a659d8(param_1,uVar7,0);
          }
        }
        uVar8 = uVar8 - 1;
        puVar9 = puVar9 + 1;
      } while (uVar8 != 0);
      FUN_00a63648(param_1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00a65c88(long param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  code *local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar4 = FUN_00a65e24(param_1 + 0x26640);
  if (lVar4 != 0) {
    FUN_00a6163c(lVar4,param_3,param_2,*(undefined4 *)(param_1 + 0x298e0));
    lVar1 = lVar4 + 8;
    local_50 = DAT_03210f8c;
    local_78 = FUN_00a65ea0;
    local_68 = 0;
    uStack_60 = 0;
    lStack_70 = param_1;
    local_58 = lVar4;
    FUN_009693a0(lVar1,&local_78);
    local_78 = FUN_00a65ea0;
    local_50 = DAT_03210f60;
    local_68 = 0;
    uStack_60 = 0;
    lStack_70 = param_1;
    local_58 = lVar4;
    FUN_009693a0(lVar1,&local_78);
    local_50 = DAT_03210f58;
    local_78 = FUN_00a65ee0;
    local_68 = 0;
    uStack_60 = 0;
    lStack_70 = param_1;
    local_58 = lVar4;
    FUN_009693a0(lVar1,&local_78);
    local_78 = FUN_00a65ee0;
    local_50 = DAT_03210f84;
    local_68 = 0;
    uStack_60 = 0;
    lStack_70 = param_1;
    local_58 = lVar4;
    FUN_009693a0(lVar1,&local_78);
    *(uint *)(lVar4 + 0x84) = *(uint *)(lVar4 + 0x84) | 0x10;
    FUN_00a61734(lVar4,0);
    FUN_00f023ec(param_1 + 0x264b8,lVar4,1);
    uVar2 = *(uint *)(param_1 + 0x298e0);
    *(uint *)(param_1 + 0x298e0) = uVar2 + 1;
    *(long *)(param_1 + (ulong)uVar2 * 8 + 0x265f8) = lVar4;
    FUN_00a611e4(lVar4);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ushort * FUN_00a65e24(long param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x3280);
  if ((ulong)uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = (ushort *)(param_1 + (ulong)uVar1 * 0x650);
    if (uVar1 == *(ushort *)(param_1 + 0x3282)) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = *puVar2;
    }
    *(ushort *)(param_1 + 0x3280) = uVar1;
    FUN_00a60eb4(puVar2);
    *(int *)(param_1 + 0x3284) = *(int *)(param_1 + 0x3284) + 1;
  }
  return puVar2;
}




void FUN_00a65ea0(undefined8 param_1)

{
  long in_x4;
  
  if (in_x4 != 0) {
    FUN_00a659d8(param_1,in_x4,1);
    FUN_00a63a44(param_1);
    return;
  }
  return;
}




void FUN_00a65ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00a65a48(param_1,param_4,param_5);
  return;
}




void FUN_00a65eec(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  
  (**(code **)*param_2)(param_2);
  if (*(short *)(param_1 + 0x3280) == -1) {
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 4) * -0x4e93;
    *(short *)(param_1 + 0x3282) = sVar2;
    *(short *)(param_1 + 0x3280) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x3282);
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 4) * -0x4e93;
    *(short *)(param_1 + 0x3282) = sVar2;
    *(short *)(param_1 + (ulong)uVar1 * 0x650) = sVar2;
  }
  *(int *)(param_1 + 0x3284) = *(int *)(param_1 + 0x3284) + -1;
  return;
}




long FUN_00a65f8c(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(uint *)(param_1 + 0x298e0) == 0) {
    return 0;
  }
  uVar2 = 0;
  do {
    lVar1 = *(long *)(param_1 + 0x265f8 + uVar2 * 8);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x63c) == param_2)) {
      return lVar1;
    }
    uVar2 = uVar2 + 1;
    if (7 < uVar2) {
      return 0;
    }
  } while (uVar2 < *(uint *)(param_1 + 0x298e0));
  return 0;
}




void FUN_00a65fe4(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(uint *)(param_1 + 0x298e0) == 0) {
LAB_00a66034:
    lVar1 = 0;
  }
  else {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x265f8 + uVar2 * 8);
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0x63c) == param_2)) break;
      uVar2 = uVar2 + 1;
      if (7 < uVar2) goto LAB_00a66034;
      lVar1 = 0;
    } while (uVar2 < *(uint *)(param_1 + 0x298e0));
  }
  FUN_00a64dd8(param_1,lVar1);
  return;
}

