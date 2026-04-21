// functions/00d49 — 28 functions
#include "libGameKindred.h"




void FUN_00d490b0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x38) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x30);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x38) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x30) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x38) = DAT_03214ce8;
          }
        }
        FUN_01985ca8(uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00d49154(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long local_4a0;
  undefined1 auStack_498 [1040];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_031a9338) {
    lVar4 = 0;
  }
  local_4a0 = lVar4;
  FUN_00d9d958(auStack_498);
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_00e45fec(param_1 + 0x10,&local_4a0);
  plVar2 = *(long **)(param_1 + 0x30);
  uVar3 = 0;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x38) == (int)plVar2[1]) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = 0;
      uVar3 = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_03214ce8;
    }
  }
  FUN_01985ca8(uVar3);
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00d48f90(*(long *)(param_1 + 0x48),lVar4);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d49264(long param_1)

{
  FUN_00d49154(param_1 + -0x28);
  return;
}




void FUN_00d4926c(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_00e5d640();
  *param_1 = &PTR_FUN_0281be28;
  param_1[5] = &PTR_FUN_0281bf00;
  param_1[6] = 0;
  uVar1 = DAT_03214ce8;
  param_1[8] = 0;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfe;
  *(undefined4 *)(param_1 + 7) = uVar1;
  return;
}




void FUN_00d492c4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}




void FUN_00d492cc(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_01985d44(param_2,DAT_0312e6d4);
  uVar3 = DAT_03214ce8;
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    iVar1 = *(int *)(lVar4 + 0x30);
    *(long **)(param_1 + 0x30) = (long *)(lVar4 + 0x28);
    *(int *)(param_1 + 0x38) = iVar1;
    if (iVar1 == *(int *)(lVar4 + 0x30)) {
      lVar4 = (**(code **)(*(long *)(lVar4 + 0x28) + 0x10))();
      if (lVar4 != 0) {
        local_3c = 0;
        (**(code **)(param_1 + 0x40))(param_2,&local_3c);
        plVar5 = *(long **)(param_1 + 0x30);
        uVar6 = 0;
        if (plVar5 != (long *)0x0) {
          if (*(int *)(param_1 + 0x38) == (int)plVar5[1]) {
            uVar6 = (**(code **)(*plVar5 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x30) = 0;
            uVar6 = 0;
            *(undefined4 *)(param_1 + 0x38) = DAT_03214ce8;
          }
        }
        FUN_00d7bf88(local_3c,uVar6,param_1 + 0x28);
      }
      goto LAB_00d493c4;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = uVar3;
LAB_00d493c4:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d493ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x38) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x30);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x38) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x30) = 0;
            uVar4 = 0;
            *(undefined4 *)(param_1 + 0x38) = DAT_03214ce8;
          }
        }
        FUN_01985ca8(uVar4);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_03214ce8;
    }
  }
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    local_490 = param_2;
    FUN_00d9d958(auStack_488);
    uStack_40 = 0;
    local_48 = 0;
    uStack_50 = 0;
    local_58 = 0;
    uStack_60 = 0;
    local_68 = 0;
    uStack_70 = 0;
    local_78 = 0;
    FUN_00e46094(param_1 + 0x10,&local_490);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d49508(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_490 = *(long *)(param_2 + 0x10);
  if ((local_490 != 0) && (*(int *)(*(long *)(local_490 + 8) + 0xa4) != DAT_031a9338)) {
    local_490 = 0;
  }
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 1;
  FUN_00d9d958(auStack_488);
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  FUN_00e46040(param_1 + 0x10,&local_490);
  plVar2 = *(long **)(param_1 + 0x30);
  uVar3 = 0;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x38) == (int)plVar2[1]) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = 0;
      uVar3 = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_03214ce8;
    }
  }
  FUN_01985ca8(uVar3);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d49604(long param_1)

{
  FUN_00d49508(param_1 + -0x28);
  return;
}




void FUN_00d4960c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_490 = param_2;
  FUN_00d9d958(auStack_488);
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  FUN_00e45fec(param_1 + 0x10,&local_490);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d49698(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_490 = param_2;
  FUN_00d9d958(auStack_488);
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  FUN_00e45fec(param_1 + 0x10,&local_490);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d49724(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_490 = param_2;
  FUN_00d9d958(auStack_488);
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  FUN_00e45fec(param_1 + 0x10,&local_490);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d497b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_490 = param_2;
  FUN_00d9d958(auStack_488);
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  FUN_00e46040(param_1 + 0x10,&local_490);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d4983c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_490 = param_2;
  FUN_00d9d958(auStack_488);
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  FUN_00e46094(param_1 + 0x10,&local_490);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d498c8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_490 = param_2;
  FUN_00d9d958(auStack_488);
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  FUN_00e46040(param_1 + 0x10,&local_490);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d49954(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_490 = param_2;
  FUN_00d9d958(auStack_488);
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  FUN_00e46094(param_1 + 0x10,&local_490);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d499e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_490 = param_2;
  FUN_00d9d958(auStack_488);
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  FUN_00e460e8(param_1 + 0x10,&local_490);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d49a6c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_490 = param_2;
  FUN_00d9d958(auStack_488);
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  FUN_00e46040(param_1 + 0x10,&local_490);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d49af8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_4a0;
  undefined1 auStack_498 [1040];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_4a0 = param_2;
  FUN_00d9d958(auStack_498);
  local_88 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  uStack_80 = param_3;
  FUN_00e460e8(param_1 + 0x10,&local_4a0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d49b94(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_490 = param_2;
  FUN_00d9d958(auStack_488);
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  FUN_00e46094(param_1 + 0x10,&local_490);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d49c20(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_490 = param_2;
  FUN_00d9d958(auStack_488);
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  FUN_00e46040(param_1 + 0x10,&local_490);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d49cac(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 local_4a0;
  undefined1 auStack_498 [1040];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulong uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_4a0 = param_2;
  FUN_00d9d958(auStack_498);
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  uStack_50 = (ulong)param_3;
  FUN_00e460e8(param_1 + 0x10,&local_4a0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d49d48(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_490 = param_2;
  FUN_00d9d958(auStack_488);
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  FUN_00e46094(param_1 + 0x10,&local_490);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d49dd4(undefined8 *param_1)

{
  FUN_00e5d640();
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = DAT_03214ce8;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_0281bf28;
  param_1[5] = &PTR_FUN_0281c000;
  *(byte *)((long)param_1 + 0x44) = *(byte *)((long)param_1 + 0x44) & 0xfc | 2;
  return;
}




void FUN_00d49e34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d48930();
  local_490 = param_2;
  FUN_00d9d958(auStack_488);
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  FUN_00e46040(param_1 + 0x10,&local_490);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d49ec8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d48a94();
  local_490 = param_2;
  FUN_00d9d958(auStack_488);
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  FUN_00e46094(param_1 + 0x10,&local_490);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d49f5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_490 = param_2;
  FUN_00d9d958(auStack_488);
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  FUN_00e46040(param_1 + 0x10,&local_490);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d49fe8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_490 = param_2;
  FUN_00d9d958(auStack_488);
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  FUN_00e46094(param_1 + 0x10,&local_490);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

