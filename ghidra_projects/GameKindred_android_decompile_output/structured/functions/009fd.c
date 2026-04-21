// functions/009fd — 16 functions
#include "libGameKindred.h"




void FUN_009fd234(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ushort local_398 [2];
  undefined4 local_393;
  undefined2 local_38f;
  undefined2 local_2f7;
  undefined2 local_2f2 [2];
  undefined4 local_2ed;
  undefined2 local_2e9;
  undefined2 local_251;
  undefined2 local_24c [2];
  undefined4 local_247;
  undefined2 local_243;
  undefined2 local_1ab;
  undefined2 local_1a6 [2];
  undefined4 local_1a1;
  undefined2 local_19d;
  undefined2 local_105;
  undefined2 local_100 [2];
  undefined4 local_fb;
  undefined2 local_f7;
  undefined2 local_5f;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  memset(local_398,0,0x33e);
  local_398[0] = 0x101;
  local_393 = 0x2010003;
  uVar2 = FUN_00d6eb50();
  local_38f = FUN_00d6e9d4(uVar2,"*Celeste*");
  local_2f7 = 0x205;
  local_398[0] = local_398[0] & 0xff;
  local_2f2[0] = 0x101;
  local_2ed = 0x2010201;
  local_2e9 = 0xffff;
  local_251 = 0x306;
  local_24c[0] = 0x201;
  local_247 = 0x2010103;
  local_1ab = 0x607;
  if (*(char *)(param_1 + 0x1302) != '\0') {
    local_1a6[0] = 0x301;
    local_1a1 = 0x2010104;
    local_105 = 0x708;
    local_100[0] = 0x401;
    local_fb = 0x2010002;
    local_5f = 0xa09;
    local_19d = local_2e9;
    local_f7 = local_2e9;
  }
  local_243 = local_2e9;
  memcpy((void *)(param_1 + 0x4da),local_398,0xa6);
  memcpy((void *)(param_1 + 0x580),local_2f2,0xa6);
  memcpy((void *)(param_1 + 0x626),local_24c,0xa6);
  memcpy((void *)(param_1 + 0x6cc),local_1a6,0xa6);
  memcpy((void *)(param_1 + 0x772),local_100,0xa6);
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009fd3fc(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027c6628;
  pcStack_30 = thunk_FUN_009fd500;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  FUN_009e0914(param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009fd46c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027c6628;
  pcStack_30 = thunk_FUN_009fd500;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  FUN_009e0914(param_1);
  operator_delete(param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009fd4e4(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(undefined1 *)(param_1 + 0x23f + lVar1) = 0;
    lVar1 = lVar1 + 0xa6;
  } while (lVar1 != 0x67c);
  return;
}




void FUN_009fd500(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = FUN_01980664(0x10);
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x1a4) = 2;
    *(undefined1 *)((long)param_1 + 0x4e2) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(3);
  if ((uVar2 & 1) != 0) {
    uVar1 = 0xffff;
    if (*(int *)((long)param_1 + 0xac) == 0xffff) {
      uVar3 = FUN_00d6eb50();
      uVar1 = FUN_00d6e9d4(uVar3,"*Alpha*");
    }
    *(undefined4 *)((long)param_1 + 0xac) = uVar1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x11);
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x11d) = 1;
    *(undefined1 *)((long)param_1 + 0x23f) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x12);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)(param_1 + 0x11d) = 3;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x13);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)(param_1 + 0x11d) = 2;
    *(undefined1 *)((long)param_1 + 0x23f) = 1;
    uVar3 = FUN_00d6eb50();
    uVar1 = FUN_00d6e9d4(uVar3,"*Flicker*");
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined1 *)((long)param_1 + 0xaa) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x16);
  if ((uVar2 & 1) != 0) {
    *(undefined2 *)((long)param_1 + 0x1a1) = 0xff;
    *(undefined1 *)(param_1 + 0x48) = 0;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x14);
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x245) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0xb);
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x245) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(10);
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x245) = 0;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x1a);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)((long)param_1 + 0x23f) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x1b);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)((long)param_1 + 0x2e5) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x1c);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)((long)param_1 + 0x38b) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x1d);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)((long)param_1 + 0x431) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x1e);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)((long)param_1 + 0x4d7) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x1f);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)((long)param_1 + 0x57d) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x20);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)((long)param_1 + 0x623) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x21);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)((long)param_1 + 0x6c9) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x22);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)((long)param_1 + 0x76f) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x23);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)((long)param_1 + 0x815) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
                    /* WARNING: Could not recover jumptable at 0x009fdb08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
    return;
  }
  return;
}




void FUN_009fdb1c(long *param_1)

{
  (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
                    /* WARNING: Could not recover jumptable at 0x009fdb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  return;
}




undefined1 * FUN_009fdb58(long param_1,undefined1 *param_2,uint param_3,ulong param_4)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  char *local_490;
  undefined8 local_488;
  void *local_480;
  undefined8 local_478;
  void *local_470;
  undefined8 local_468;
  void *local_460;
  char *local_458 [128];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (((int)param_3 < 3) || (*(char *)(param_1 + 0x1302) != '\0')) {
    local_468 = 0;
    local_460 = (void *)0x0;
    local_458[0] = "PlayerOne";
    FUN_009f5f2c(&local_468,local_458);
    local_458[0] = "PlayerTwo";
    FUN_009f5f2c(&local_468,local_458);
    local_458[0] = "PlayerThree";
    FUN_009f5f2c(&local_468,local_458);
    local_458[0] = "PlayerFour";
    FUN_009f5f2c(&local_468,local_458);
    local_458[0] = "PlayerFive";
    FUN_009f5f2c(&local_468,local_458);
    bVar4 = (param_4 & 1) == 0;
    pcVar1 = "Left";
    if (bVar4) {
      pcVar1 = "Right";
    }
    uVar7 = 1;
    if (bVar4) {
      uVar7 = 2;
    }
    FUN_009fddc0(local_458,"team%s%s",pcVar1,*(undefined8 *)((long)local_460 + (ulong)param_3 * 8));
    FUN_00e705c8(&local_478,local_458);
    local_488 = 0;
    local_480 = (void *)0x0;
    local_490 = "*Tony*";
    FUN_009f5f2c(&local_488,&local_490);
    local_490 = "*Ardan*";
    FUN_009f5f2c(&local_488,&local_490);
    local_490 = "*Blackfeather*";
    FUN_009f5f2c(&local_488,&local_490);
    local_490 = "*Celeste*";
    FUN_009f5f2c(&local_488,&local_490);
    local_490 = "*Ringo*";
    FUN_009f5f2c(&local_488,&local_490);
    cVar2 = (char)param_3 + -1;
    if (2 < param_3) {
      cVar2 = '\x02';
    }
    FUN_00e70978(&local_478,param_2 + 0x11,0x40);
    *param_2 = 1;
    param_2[6] = cVar2;
    param_2[8] = uVar7;
    param_2[1] = (char)param_3 + '\x01';
    param_2[5] = 0xff;
    param_2[3] = 0;
    uVar6 = FUN_00d6eb50();
    uVar5 = FUN_00d6e9d4(uVar6,*(undefined8 *)((long)local_480 + (ulong)param_3 * 8));
    *(undefined2 *)(param_2 + 9) = uVar5;
    *(undefined2 *)(param_2 + 0xb) = 0xffff;
    if (local_480 != (void *)0x0) {
      operator_delete__(local_480);
      local_488 = 0;
      local_480 = (void *)0x0;
    }
    if (local_470 != (void *)0x0) {
      operator_delete__(local_470);
      local_478 = 0;
      local_470 = (void *)0x0;
    }
    if (local_460 != (void *)0x0) {
      operator_delete__(local_460);
      local_468 = 0;
      local_460 = (void *)0x0;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_009fdda4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00e6a474(param_2);
  return uVar1 & 1;
}




void FUN_009fddc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  puStack_60 = &local_a0;
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  FUN_00e6a9d0(param_1,0x400,param_2,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_009fd500(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = FUN_01980664(0x10);
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x1a4) = 2;
    *(undefined1 *)((long)param_1 + 0x4e2) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(3);
  if ((uVar2 & 1) != 0) {
    uVar1 = 0xffff;
    if (*(int *)((long)param_1 + 0xac) == 0xffff) {
      uVar3 = FUN_00d6eb50();
      uVar1 = FUN_00d6e9d4(uVar3,"*Alpha*");
    }
    *(undefined4 *)((long)param_1 + 0xac) = uVar1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x11);
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x11d) = 1;
    *(undefined1 *)((long)param_1 + 0x23f) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x12);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)(param_1 + 0x11d) = 3;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x13);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)(param_1 + 0x11d) = 2;
    *(undefined1 *)((long)param_1 + 0x23f) = 1;
    uVar3 = FUN_00d6eb50();
    uVar1 = FUN_00d6e9d4(uVar3,"*Flicker*");
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined1 *)((long)param_1 + 0xaa) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x16);
  if ((uVar2 & 1) != 0) {
    *(undefined2 *)((long)param_1 + 0x1a1) = 0xff;
    *(undefined1 *)(param_1 + 0x48) = 0;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x14);
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x245) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0xb);
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x245) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(10);
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x245) = 0;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x1a);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)((long)param_1 + 0x23f) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x1b);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)((long)param_1 + 0x2e5) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x1c);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)((long)param_1 + 0x38b) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x1d);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)((long)param_1 + 0x431) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x1e);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)((long)param_1 + 0x4d7) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x1f);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)((long)param_1 + 0x57d) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x20);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)((long)param_1 + 0x623) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x21);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)((long)param_1 + 0x6c9) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x22);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)((long)param_1 + 0x76f) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
  }
  uVar2 = FUN_01980664(0x23);
  if ((uVar2 & 1) != 0) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar4 + 0x23f) = 0;
      lVar4 = lVar4 + 0xa6;
    } while (lVar4 != 0x67c);
    *(undefined1 *)((long)param_1 + 0x815) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_1 + 0x94);
                    /* WARNING: Could not recover jumptable at 0x009fdb08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1,(long)param_1 + 0x8ea);
    return;
  }
  return;
}




void FUN_009fde64(void)

{
  void *pvVar1;
  
  if (DAT_031308c0 == (void *)0x0) {
    pvVar1 = operator_new(0x1a0);
    FUN_009fdf60();
    DAT_031308c0 = pvVar1;
  }
  return;
}




void FUN_009fde9c(void)

{
  if (DAT_031308c0 != (long *)0x0) {
    (**(code **)(*DAT_031308c0 + 8))();
    DAT_031308c0 = (long *)0x0;
  }
  return;
}




undefined8 FUN_009fded0(void)

{
  return DAT_031308c0;
}




void FUN_009fdedc(void)

{
  FUN_009fdee8(DAT_031308c0);
  return;
}




void FUN_009fdee8(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_00e85318(0);
  if (lVar1 - *(long *)(param_1 + 400) < 0x3c) {
    lVar1 = *(long *)(param_1 + 400) + 0x3c;
  }
  else {
    uVar2 = FUN_00e80f6c();
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_00e84e4c(param_1 + 200);
      if ((uVar2 & 1) == 0) {
        FUN_00e82468(param_1 + 200);
        lVar1 = lVar1 + 600;
        goto LAB_009fdf4c;
      }
    }
    lVar1 = lVar1 + 10;
  }
LAB_009fdf4c:
  *(long *)(param_1 + 0x188) = lVar1;
  return;
}




void FUN_009fdf60(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00948cd8();
  FUN_00e83560(param_1 + 3);
  *param_1 = &PTR_FUN_027c6688;
  param_1[3] = &PTR_FUN_027c6a40;
  param_1[6] = &PTR_FUN_027c6a70;
  FUN_00e84dac(param_1 + 7);
  param_1[7] = &PTR_FUN_027bb6e8;
  memset(param_1 + 0xd,0,0x60);
  FUN_00e84dac(param_1 + 0x19);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  param_1[0x19] = &PTR_FUN_027bb718;
  memset(param_1 + 0x25,0,0x71);
  pcStack_30 = FUN_009feb64;
  local_38 = param_1;
  FUN_00f02e98(0x3dcccccd,&local_38,0,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

