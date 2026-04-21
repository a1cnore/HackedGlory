// functions/00a91 — 43 functions
#include "libGameKindred.h"




void FUN_00a91048(void)

{
  return;
}




void FUN_00a9104c(void)

{
  return;
}




void FUN_00a91054(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_03214ce8;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}




void FUN_00a9106c(void)

{
  return;
}




void FUN_00a91078(void *param_1)

{
  FUN_00a89680();
  operator_delete(param_1);
  return;
}




void FUN_00a910a0(void *param_1)

{
  FUN_00a89680();
  operator_delete(param_1);
  return;
}




void FUN_00a910c4(long param_1,undefined8 param_2,int *param_3)

{
  if (*(int *)(param_1 + 0x40) == *param_3) {
    FUN_00a89274();
    return;
  }
  return;
}




void FUN_00a910dc(void *param_1)

{
  FUN_00a89680();
  operator_delete(param_1);
  return;
}




void FUN_00a91104(void *param_1)

{
  FUN_00a89680();
  operator_delete(param_1);
  return;
}




void FUN_00a91128(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_450;
  undefined4 local_448;
  undefined1 auStack_440 [1032];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_448 = 0;
  local_450 = param_2;
  FUN_00d9d958(auStack_440);
  FUN_00a88af8(param_1,&local_450);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a91194(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_450;
  undefined4 local_448;
  undefined1 auStack_440 [1032];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_448 = 0;
  local_450 = param_2;
  FUN_00d9d958(auStack_440);
  FUN_00a88bb4(param_1,&local_450);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a91200(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cfb50;
  FUN_00a8950c(param_1 + 5);
  FUN_00a8944c(param_1 + 2);
  operator_delete(param_1);
  return;
}




void FUN_00a91244(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_460;
  undefined4 local_458;
  undefined1 auStack_450 [1032];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_01985d44(param_2,DAT_0312e6d4);
  uVar3 = DAT_03214ce8;
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    iVar1 = *(int *)(lVar4 + 0x30);
    *(long **)(param_1 + 0x68) = (long *)(lVar4 + 0x28);
    *(int *)(param_1 + 0x70) = iVar1;
    if (iVar1 == *(int *)(lVar4 + 0x30)) {
      lVar4 = (**(code **)(*(long *)(lVar4 + 0x28) + 0x10))();
      if (lVar4 != 0) {
        plVar5 = *(long **)(param_1 + 0x68);
        uVar6 = 0;
        if (plVar5 != (long *)0x0) {
          if (*(int *)(param_1 + 0x70) == (int)plVar5[1]) {
            uVar6 = (**(code **)(*plVar5 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x68) = 0;
            uVar6 = 0;
            *(undefined4 *)(param_1 + 0x70) = DAT_03214ce8;
          }
        }
        FUN_00d7bf88(*(undefined4 *)(param_1 + 0x78),uVar6,param_1 + 0x60);
      }
      goto LAB_00a9132c;
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(undefined4 *)(param_1 + 0x70) = uVar3;
LAB_00a9132c:
  local_458 = 0;
  local_460 = param_2;
  FUN_00d9d958(auStack_450);
  FUN_00a88af8(param_1,&local_460);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a91378(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_450;
  undefined4 local_448;
  undefined1 auStack_440 [1032];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x68);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x70) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x68);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x70) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x68) = 0;
            uVar4 = 0;
            *(undefined4 *)(param_1 + 0x70) = DAT_03214ce8;
          }
        }
        FUN_01985ca8(uVar4);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x70) = DAT_03214ce8;
    }
  }
  local_448 = 0;
  local_450 = param_2;
  FUN_00d9d958(auStack_440);
  FUN_00a88bb4(param_1,&local_450);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9146c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cfb50;
  FUN_00a8950c(param_1 + 5);
  FUN_00a8944c(param_1 + 2);
  return;
}




void FUN_00a914a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cfb50;
  FUN_00a8950c(param_1 + 5);
  FUN_00a8944c(param_1 + 2);
  operator_delete(param_1);
  return;
}




void FUN_00a914e8(long param_1,long param_2)

{
  long lVar1;
  long local_450;
  undefined4 local_448;
  undefined1 auStack_440 [1032];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_450 = *(long *)(param_2 + 0x10);
  if ((local_450 != 0) && (*(int *)(*(long *)(local_450 + 8) + 0xa4) != DAT_02c7eb40)) {
    local_450 = 0;
  }
  local_448 = *(undefined4 *)(param_1 + 0x78);
  FUN_00d9d958(auStack_440);
  FUN_00a898d0(param_1 + 0x28,&local_450);
  FUN_00d7bfdc(param_2);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a91584(long param_1)

{
  *(undefined ***)(param_1 + -0x60) = &PTR_FUN_027cfb50;
  FUN_00a8950c(param_1 + -0x38);
  FUN_00a8944c(param_1 + -0x50);
  return;
}




void FUN_00a915bc(long param_1)

{
  *(undefined8 *)(param_1 + -0x60) = &PTR_FUN_027cfb50;
  FUN_00a8950c(param_1 + -0x38);
  FUN_00a8944c(param_1 + -0x50);
  operator_delete((undefined8 *)(param_1 + -0x60));
  return;
}




void FUN_00a915fc(long param_1)

{
  FUN_00a914e8(param_1 + -0x60);
  return;
}




void FUN_00a91604(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 local_460;
  undefined4 local_458;
  undefined1 auStack_450 [1032];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_01985d44(param_2,DAT_03133730);
  uVar3 = DAT_03214ce8;
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    iVar1 = *(int *)(lVar4 + 0x30);
    *(long **)(param_1 + 0x68) = (long *)(lVar4 + 0x28);
    *(int *)(param_1 + 0x70) = iVar1;
    if (iVar1 == *(int *)(lVar4 + 0x30)) {
      lVar4 = (**(code **)(*(long *)(lVar4 + 0x28) + 0x10))();
      if (lVar4 != 0) {
        plVar5 = *(long **)(param_1 + 0x68);
        uVar6 = 0;
        if (plVar5 != (long *)0x0) {
          if (*(int *)(param_1 + 0x70) == (int)plVar5[1]) {
            uVar6 = (**(code **)(*plVar5 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x68) = 0;
            uVar6 = 0;
            *(undefined4 *)(param_1 + 0x70) = DAT_03214ce8;
          }
        }
        FUN_00d7c534(uVar6,param_1 + 0x60);
      }
      goto LAB_00a916e8;
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(undefined4 *)(param_1 + 0x70) = uVar3;
LAB_00a916e8:
  local_458 = 0;
  local_460 = param_2;
  FUN_00d9d958(auStack_450);
  uVar9 = 0;
  plVar5 = (long *)(param_1 + 0x80);
  do {
    plVar7 = (long *)*plVar5;
    if (plVar7 == (long *)0x0) break;
    uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,&local_460);
    if ((uVar8 & 1) == 0) goto LAB_00a91744;
    uVar9 = uVar9 + 1;
    plVar5 = plVar5 + 7;
  } while (uVar9 < 2);
  *(undefined1 *)(param_1 + 0xf0) = 1;
  FUN_00a88af8(param_1,&local_460);
LAB_00a91744:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a91770(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_450;
  undefined4 local_448;
  undefined1 auStack_440 [1032];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x68);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x70) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x68);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x70) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x68) = 0;
            uVar4 = 0;
            *(undefined4 *)(param_1 + 0x70) = DAT_03214ce8;
          }
        }
        FUN_019888f4(uVar4);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x70) = DAT_03214ce8;
    }
  }
  if (*(char *)(param_1 + 0xf0) != '\0') {
    local_448 = 0;
    local_450 = param_2;
    FUN_00d9d958(auStack_440);
    FUN_00a88bb4(param_1,&local_450);
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a91870(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)param_1[0xd];
  *param_1 = &PTR_FUN_027d0968;
  param_1[0xc] = &PTR_FUN_027d09d0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xe) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = (long *)param_1[0xd];
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0xe) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            param_1[0xd] = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0xe) = DAT_03214ce8;
          }
        }
        FUN_019888f4(uVar3);
      }
    }
    else {
      param_1[0xd] = 0;
      *(undefined4 *)(param_1 + 0xe) = DAT_03214ce8;
    }
  }
  *param_1 = &PTR_FUN_027cfb50;
  FUN_00a8950c(param_1 + 5);
  FUN_00a8944c(param_1 + 2);
  return;
}




void FUN_00a91944(void *param_1)

{
  FUN_00a91870();
  operator_delete(param_1);
  return;
}




void FUN_00a91968(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long local_460;
  undefined4 local_458;
  undefined1 auStack_450 [1032];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_2 + 0x10);
  if ((lVar4 != 0) && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_02c7eb40)) {
    local_458 = 0;
    local_460 = lVar4;
    FUN_00d9d958(auStack_450);
    uVar5 = 0;
    plVar6 = (long *)(param_1 + 0x80);
    do {
      plVar2 = (long *)*plVar6;
      if (plVar2 == (long *)0x0) break;
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_460);
      if ((uVar3 & 1) == 0) {
        if (*(char *)(param_1 + 0xf0) != '\0') {
          FUN_00a88bb4(param_1,&local_460);
          *(undefined1 *)(param_1 + 0xf0) = 0;
        }
        goto LAB_00a91a30;
      }
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 7;
    } while (uVar5 < 2);
    if (*(char *)(param_1 + 0xf0) == '\0') {
      *(undefined1 *)(param_1 + 0xf0) = 1;
      FUN_00a88af8(param_1,&local_460);
    }
  }
LAB_00a91a30:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a91a5c(long param_1)

{
  FUN_00a91870(param_1 + -0x60);
  return;
}




void FUN_00a91a64(long param_1)

{
  FUN_00a91870((void *)(param_1 + -0x60));
  operator_delete((void *)(param_1 + -0x60));
  return;
}




void FUN_00a91a8c(long param_1)

{
  FUN_00a91968(param_1 + -0x60);
  return;
}




void FUN_00a91a94(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00a91ae0(param_2);
  uVar2 = FUN_00a91b30(lVar1 + 0x10);
  uVar2 = FUN_00a851d4(uVar2,"Debug_FinalShotZoomIn");
  uVar2 = FUN_00a851dc(uVar2,"Debug_FinalShotZoomIn_NotTriggered");
  uVar2 = FUN_00a851dc(uVar2,"Debug_FinalShotZoomIn_Triggered");
  FUN_00a851dc(uVar2,"Debug_FinalShotZoomIn_Panning");
  return;
}




void FUN_00a91ae0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8d978();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00a91b30(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8c67c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00a91b80(void)

{
  return;
}




void FUN_00a91b84(void)

{
  long lVar1;
  
  lVar1 = FUN_00a91b9c();
  FUN_00a91bec(lVar1 + 0x10);
  return;
}




void FUN_00a91b9c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8d5ac();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00a91bec(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8a76c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00a91c3c(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00a91b9c();
  lVar2 = FUN_00a91c70(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x10) = 0x40e00000;
  FUN_00a91cc0(lVar1 + 0x10);
  return;
}




void FUN_00a91c70(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8aa50();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00a91cc0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8a81c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00a91d10(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00a91b9c();
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_00a91c70(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 0x40400000;
  lVar3 = FUN_00a91db0(lVar2);
  uVar4 = FUN_00a91e00(lVar3 + 0x10);
  local_48[0] = 0xd;
  local_40 = 1;
  FUN_00a7f880(uVar4,local_48);
  do {
    FUN_00a91e50(lVar3 + 0x28);
  } while (lVar3 + 0x28 == lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a91db0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8b25c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00a91e00(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8d320();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00a91e50(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8abd8();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00a91ea0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  (**(code **)*param_3)(param_3,"RecommendedAbility");
  uVar2 = FUN_00e6a474("RecommendedAbility");
  uVar2 = FUN_0091ed5c("RecommendedAbility",uVar2,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*param_3 + 0x10))(param_3,uVar2);
  *puVar3 = 0;
  lVar4 = FUN_00a91b9c(param_1);
  lVar5 = FUN_00a91c70(lVar4 + 0x10);
  *(undefined4 *)(lVar5 + 0x10) = 0x40400000;
  lVar4 = FUN_00a92020(lVar4 + 0x10);
  *(undefined4 *)(lVar4 + 0x10) = 0x933dc2c5;
  lVar5 = FUN_00a92070(param_1);
  lVar4 = lVar5 + 0x10;
  *(undefined4 *)(lVar5 + 0x40) = 0x933dc2c5;
  lVar5 = FUN_00a91db0(lVar4);
  uVar6 = FUN_00a91e00(lVar5 + 0x10);
  local_60 = 2;
  local_68 = FUN_00cb6d44;
  FUN_00a7f880(uVar6,&local_68);
  lVar5 = lVar5 + 0x28;
  do {
    lVar7 = FUN_00a920c0(lVar5);
    *(char **)(lVar7 + 0x10) = "RecommendedAbility";
    *(code **)(lVar7 + 0x18) = thunk_FUN_00cb6d44;
    *(undefined4 *)(lVar7 + 0x20) = 2;
    *(byte *)(lVar7 + 0x28) = *(byte *)(lVar7 + 0x28) & 0xfe;
    lVar7 = FUN_00a92110(lVar5);
    lVar7 = FUN_00a9283c(lVar7 + 0x10);
    *(char **)(lVar7 + 0x20) = "RecommendedAbility";
    *(undefined4 *)(lVar7 + 0x18) = 3;
    *(code **)(lVar7 + 8) = thunk_FUN_00cb6d44;
    *(undefined4 *)(lVar7 + 0x10) = 2;
  } while (lVar5 == lVar4);
  lVar4 = FUN_00a92020(lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0x933dc2c5;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

