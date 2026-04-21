// functions/009cb — 33 functions
#include "libGameKindred.h"




void FUN_009cb00c(uint *param_1,uint param_2)

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




long FUN_009cb08c(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar4 = FUN_0091ed5c(0,0,*param_2);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar5 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar4 / uVar2;
    }
    uVar3 = uVar4 - uVar3 * uVar2;
    while ((*(uint *)(lVar5 + (ulong)uVar3 * 8) != uVar4 &&
           (*(int *)(lVar5 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if (uVar3 != 0xffffffff) {
      uVar6 = (ulong)*(uint *)(lVar5 + (ulong)uVar3 * 8 + 4);
      goto LAB_009cb108;
    }
  }
  uVar6 = 0xffffffff;
LAB_009cb108:
  return *(long *)(param_1 + 8) + uVar6 * 8;
}




void FUN_009cb11c(long param_1)

{
  long lVar1;
  
  DAT_0312eb20 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312eb20 + 1;
  lVar1 = param_1 + (ulong)DAT_0312eb20 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009cb41c;
  *(code **)(lVar1 + 0xb8) = FUN_009cb45c;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x20;
  *(uint *)(lVar1 + 0xa4) = DAT_0312eb20;
  *(undefined4 *)(lVar1 + 0xa8) = 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_019867cc(param_1,0x163803be,FUN_009cb190,0);
  return;
}




void FUN_009cb190(void)

{
  FUN_009cb228();
  return;
}




void FUN_009cb1bc(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_027c2cc0;
  uVar1 = FUN_00ceb350();
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined8 *)((long)param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  return;
}




void FUN_009cb1f8(long param_1,undefined4 *param_2)

{
  char *pcVar1;
  
  *(undefined4 *)(param_1 + 0x2c) = *param_2;
  pcVar1 = (char *)0x0;
  if (**(char **)(param_2 + 2) != '\0') {
    pcVar1 = *(char **)(param_2 + 2);
  }
  *(char **)(param_1 + 0x30) = pcVar1;
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x11);
  FUN_009cb228();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009cb228(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  ulong local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined2 local_41;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if (*(int *)(plVar4[1] + 0xa4) != DAT_0312e4a8) {
    plVar4 = (long *)0x0;
  }
  lVar5 = plVar4[2];
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c09220) {
    lVar5 = 0;
  }
  uStack_90 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  local_88 = *(undefined4 *)(param_1 + 0x2c);
  local_74 = 0xff000000;
  local_6c = _DAT_03218ef8;
  local_7c = 0;
  local_64 = DAT_03218f40;
  local_5c = DAT_03218f48;
  local_42 = 0;
  local_58 = 0;
  uStack_50 = 0x200000000;
  local_44 = 0x101;
  local_41 = 0;
  uStack_80 = *(undefined4 *)(param_1 + 0x28);
  local_84 = 0xbf800000;
  uVar2 = FUN_00d9e99c(lVar5);
  local_48 = ~uVar2 & 1;
  if (*(char *)(param_1 + 0x38) != '\0') {
    local_41 = 1;
    local_7c = local_7c & 0xffffffff00000000;
  }
  local_41 = CONCAT11(*(undefined1 *)(param_1 + 0x39),(undefined1)local_41);
  if (*(long *)(param_1 + 0x30) == 0) {
    (**(code **)(*plVar4 + 0xb0))(plVar4,&local_a8);
  }
  else {
    lVar5 = plVar4[2];
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c09220) {
      lVar5 = 0;
    }
    uVar3 = FUN_00d5a5c4(lVar5);
    (**(code **)(*plVar4 + 0xc0))(plVar4,&local_a8,uVar3);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009cb3b4(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (*(int *)(plVar1[1] + 0xa4) != DAT_0312e4a8) {
    plVar1 = (long *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x009cb3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x118))(plVar1,*(undefined4 *)(param_1 + 0x28),param_2,param_3,param_4);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_009cb228(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  ulong uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  uint uStack_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  undefined2 uStack_41;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if (*(int *)(plVar4[1] + 0xa4) != DAT_0312e4a8) {
    plVar4 = (long *)0x0;
  }
  lVar5 = plVar4[2];
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c09220) {
    lVar5 = 0;
  }
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_88 = *(undefined4 *)(param_1 + 0x2c);
  uStack_74 = 0xff000000;
  uStack_6c = _DAT_03218ef8;
  uStack_7c = 0;
  uStack_64 = DAT_03218f40;
  uStack_5c = DAT_03218f48;
  uStack_42 = 0;
  uStack_58 = 0;
  uStack_50 = 0x200000000;
  uStack_44 = 0x101;
  uStack_41 = 0;
  uStack_80 = *(undefined4 *)(param_1 + 0x28);
  uStack_84 = 0xbf800000;
  uVar2 = FUN_00d9e99c(lVar5);
  uStack_48 = ~uVar2 & 1;
  if (*(char *)(param_1 + 0x38) != '\0') {
    uStack_41 = 1;
    uStack_7c = uStack_7c & 0xffffffff00000000;
  }
  uStack_41 = CONCAT11(*(undefined1 *)(param_1 + 0x39),(undefined1)uStack_41);
  if (*(long *)(param_1 + 0x30) == 0) {
    (**(code **)(*plVar4 + 0xb0))(plVar4,&uStack_a8);
  }
  else {
    lVar5 = plVar4[2];
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c09220) {
      lVar5 = 0;
    }
    uVar3 = FUN_00d5a5c4(lVar5);
    (**(code **)(*plVar4 + 0xc0))(plVar4,&uStack_a8,uVar3);
  }
  if (*(long *)(lVar1 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009cb3f8(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




undefined8 * FUN_009cb41c(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_027c2cc0;
  uVar1 = FUN_00ceb350();
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined8 *)((long)param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  return param_1;
}




void FUN_009cb45c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009cb464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009cb468(long param_1)

{
  long lVar1;
  
  DAT_02c7eb40 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_02c7eb40 + 1;
  lVar1 = param_1 + (ulong)DAT_02c7eb40 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009cc1b0;
  *(code **)(lVar1 + 0xb8) = FUN_009cc244;
  *(uint *)(lVar1 + 0xa4) = DAT_02c7eb40;
  *(undefined4 *)(lVar1 + 0xa8) = 0xe0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,FUN_009cb560,0);
  FUN_019867cc(param_1,0x23ed04d9,FUN_009cb5b0,0);
  FUN_019867cc(param_1,0x377a062d,FUN_009cb5dc,0);
  FUN_019867cc(param_1,0x199203e9,FUN_009cb698,0);
  FUN_019867cc(param_1,0x6cf608dd,FUN_009cb754,0);
  return;
}




void FUN_009cb560(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar2 = *(long *)(param_1 + 0x38) + -8;
    while (lVar2 != 0) {
      FUN_01988c78();
      FUN_009cbda4(lVar2,param_1);
      plVar1 = (long *)(lVar2 + 8);
      lVar2 = 0;
      if (*plVar1 != 0) {
        lVar2 = *plVar1 + -8;
      }
    }
  }
  return;
}




void FUN_009cb5b0(void)

{
  FUN_009cbe88();
  return;
}




void FUN_009cb810(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_027c2cf0;
  param_1[5] = &PTR_FUN_027c2d20;
  param_1[0xd] = &PTR_FUN_027c2d50;
  memset(param_1 + 0xe,0,0x51);
  param_1[0x19] = 0;
  uVar1 = DAT_03214ce8;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x1a) = uVar1;
  return;
}




void FUN_009cb8a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2cf0;
  param_1[5] = &PTR_FUN_027c2d20;
  if (*(char *)(param_1 + 0x1b) != '\0') {
    FUN_009cb90c(param_1);
  }
  FUN_009cc718(param_1);
  FUN_009cb9a8(param_1 + 10);
  FUN_009cb9e8(param_1 + 7);
  FUN_0198931c(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009cb90c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x38) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2,param_1);
      FUN_009cbb78(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  *(undefined1 *)(param_1 + 0xd8) = 0;
  return;
}




void FUN_009cb9a8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    lVar1 = *param_1 + -8;
    while (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + 8);
      FUN_00a8a504();
      lVar1 = 0;
      if (lVar2 != 0) {
        lVar1 = lVar2 + -8;
      }
    }
  }
  return;
}




void FUN_009cb9e8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    lVar1 = *param_1 + -8;
    while (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + 8);
      FUN_00a89e2c();
      lVar1 = 0;
      if (lVar2 != 0) {
        lVar1 = lVar2 + -8;
      }
    }
  }
  return;
}




void FUN_009cba28(long param_1)

{
  FUN_009cb8a0(param_1 + -0x28);
  return;
}




void FUN_009cba30(void *param_1)

{
  FUN_009cb8a0();
  operator_delete(param_1);
  return;
}




void FUN_009cba54(long param_1)

{
  FUN_009cb8a0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_009cba7c(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 200) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  FUN_00a8df24(param_3,(long *)(param_1 + 0x38),param_1 + 0x50,param_1 + 0x68);
  *(undefined1 *)(param_1 + 0xd8) = 1;
  if (*(long *)(param_1 + 0x50) != 0) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x50) + -8);
    while (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,param_1);
      plVar1 = puVar3 + 1;
      puVar3 = (undefined8 *)0x0;
      if (*plVar1 != 0) {
        puVar3 = (undefined8 *)(*plVar1 + -8);
      }
    }
  }
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 != 0) {
    puVar3 = (undefined8 *)(lVar4 + -8);
    while (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,param_1);
      plVar1 = puVar3 + 1;
      puVar3 = (undefined8 *)0x0;
      if (*plVar1 != 0) {
        puVar3 = (undefined8 *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_009cbb44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a8de64(param_3);
  FUN_009cba7c(param_1,param_2,uVar1);
  return;
}




void FUN_009cbb78(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_470;
  undefined4 local_468;
  undefined1 auStack_460 [1032];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((param_1[5] != 0) && (lVar4 = param_1[5] + -0x20, lVar4 != 0)) {
    do {
      lVar1 = 0;
      if (*(long *)(lVar4 + 0x20) != 0) {
        lVar1 = *(long *)(lVar4 + 0x20) + -0x20;
      }
      if (*(long *)(lVar4 + 0x28) != 0) {
        local_468 = 0;
        local_470 = param_2;
        FUN_00d9d958(auStack_460);
        (**(code **)(*param_1 + 0x50))(param_1,&local_470);
        if (*(long *)(lVar4 + 0x28) != 0) {
          plVar3 = *(long **)(*(long *)(lVar4 + 0x28) + 0x10);
          (**(code **)(*plVar3 + 0x20))(plVar3,&local_470);
          *(undefined8 *)(lVar4 + 0x28) = 0;
        }
        FUN_009cc364(param_1,lVar4);
      }
      lVar4 = lVar1;
    } while (lVar1 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009cbc5c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 200);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xd0) != (int)plVar1[1]) {
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0xd0) = DAT_03214ce8;
      return 0;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))();
  }
  return uVar2;
}




undefined8 FUN_009cbcb0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 200);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xd0) != (int)plVar1[1]) {
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0xd0) = DAT_03214ce8;
      return 0;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))();
  }
  return uVar2;
}




void FUN_009cbd04(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x38) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_009cbda4(undefined4 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_470;
  undefined4 local_468;
  undefined1 auStack_460 [1032];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((param_2[5] != 0) && (lVar3 = param_2[5] + -0x20, lVar3 != 0)) {
    do {
      lVar1 = 0;
      if (*(long *)(lVar3 + 0x20) != 0) {
        lVar1 = *(long *)(lVar3 + 0x20) + -0x20;
      }
      if (*(long *)(lVar3 + 0x28) != 0) {
        local_470 = param_3;
        local_468 = param_1;
        FUN_00d9d958(auStack_460);
        (**(code **)(*param_2 + 0x50))(param_2,&local_470);
        FUN_009cc440(lVar3,&local_470);
        if (*(long *)(lVar3 + 0x28) == 0) {
          FUN_009cc364(param_2,lVar3);
        }
      }
      lVar3 = lVar1;
    } while (lVar1 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009cbe88(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x38) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_009cbf14(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x38) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x38) + -8);
      while (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_2);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      }
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
      while (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_2);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      }
    }
  }
  return;
}




void FUN_009cbfb8(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x38) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x38) + -8);
      while (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_2);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      }
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
      while (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_2);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      }
    }
  }
  return;
}

