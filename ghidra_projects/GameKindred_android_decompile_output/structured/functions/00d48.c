// functions/00d48 — 44 functions
#include "libGameKindred.h"




void FUN_00d48058(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar2 = FUN_00d66d28(param_2);
  FUN_00da2640(param_1 + 0x10,uVar2);
  return;
}




void FUN_00d480a0(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_00d66d28(param_2);
    uVar2 = FUN_00d66cf4(param_2);
    local_3c = (float)uVar2;
    FUN_00d5a7c4(uVar4,*(undefined4 *)(param_1 + 0x6c),"Stacks",1,&local_3c);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




byte FUN_00d48130(long param_1)

{
  return *(byte *)(param_1 + 0x78) >> 2 & 1;
}




byte FUN_00d4813c(long param_1)

{
  return *(byte *)(param_1 + 0x78) >> 3 & 1;
}




void FUN_00d48148(void *param_1)

{
  FUN_00d468dc();
  operator_delete(param_1);
  return;
}




void FUN_00d4816c(undefined8 *param_1)

{
  undefined4 uVar1;
  
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0281bb18;
  param_1[1] = 0;
  uVar1 = DAT_03214ce8;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 3) = uVar1;
  return;
}




void FUN_00d48198(long param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_00d481a8(long param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = 2;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_00d481b8(long param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = 3;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_00d481c8(long param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 4;
  return;
}




void FUN_00d481d4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}




void thunk_FUN_00d481e0(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00d66d28(*param_2);
  lVar3 = *(long *)(lVar3 + 0x18);
  do {
    if (lVar3 == 0) {
LAB_00d482e0:
      if (*(long *)(lVar2 + 0x28) == lStack_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_0314f724) {
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 == 3) {
        uStack_50 = 0;
        (**(code **)(param_1 + 0x20))(param_2,&uStack_50);
        if (uStack_50 != 0) {
          FUN_00d60c80(lVar3);
        }
      }
      else if (iVar1 == 2) {
        uStack_40 = 0;
        (**(code **)(param_1 + 0x20))(param_2,&uStack_40);
        uStack_50 = uStack_40 & 0xffffffff;
        uStack_48 = uStack_40._4_4_;
        FUN_00d60c3c(lVar3,&uStack_50);
      }
      else if (iVar1 == 1) {
        uStack_40 = 0;
        (**(code **)(param_1 + 0x20))(param_2,&uStack_40);
        uStack_50 = uStack_40 & 0xffffffff;
        uStack_48 = uStack_40._4_4_;
        FUN_00d60bf8(lVar3,&uStack_50);
      }
      goto LAB_00d482e0;
    }
    lVar3 = *(long *)(lVar3 + 0x20);
  } while( true );
}




void FUN_00d481e0(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong local_50;
  undefined4 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00d66d28(*param_2);
  lVar3 = *(long *)(lVar3 + 0x18);
  do {
    if (lVar3 == 0) {
LAB_00d482e0:
      if (*(long *)(lVar2 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_0314f724) {
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 == 3) {
        local_50 = 0;
        (**(code **)(param_1 + 0x20))(param_2,&local_50);
        if (local_50 != 0) {
          FUN_00d60c80(lVar3);
        }
      }
      else if (iVar1 == 2) {
        local_40 = 0;
        (**(code **)(param_1 + 0x20))(param_2,&local_40);
        local_50 = local_40 & 0xffffffff;
        local_48 = local_40._4_4_;
        FUN_00d60c3c(lVar3,&local_50);
      }
      else if (iVar1 == 1) {
        local_40 = 0;
        (**(code **)(param_1 + 0x20))(param_2,&local_40);
        local_50 = local_40 & 0xffffffff;
        local_48 = local_40._4_4_;
        FUN_00d60bf8(lVar3,&local_50);
      }
      goto LAB_00d482e0;
    }
    lVar3 = *(long *)(lVar3 + 0x20);
  } while( true );
}




void FUN_00d48308(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_00d66d28(*param_2);
  lVar1 = *(long *)(lVar1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0314f724) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00d60bd0();
  return;
}




void thunk_FUN_00d481e0(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00d66d28(*param_2);
  lVar3 = *(long *)(lVar3 + 0x18);
  do {
    if (lVar3 == 0) {
LAB_00d482e0:
      if (*(long *)(lVar2 + 0x28) == lStack_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_0314f724) {
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 == 3) {
        uStack_50 = 0;
        (**(code **)(param_1 + 0x20))(param_2,&uStack_50);
        if (uStack_50 != 0) {
          FUN_00d60c80(lVar3);
        }
      }
      else if (iVar1 == 2) {
        uStack_40 = 0;
        (**(code **)(param_1 + 0x20))(param_2,&uStack_40);
        uStack_50 = uStack_40 & 0xffffffff;
        uStack_48 = uStack_40._4_4_;
        FUN_00d60c3c(lVar3,&uStack_50);
      }
      else if (iVar1 == 1) {
        uStack_40 = 0;
        (**(code **)(param_1 + 0x20))(param_2,&uStack_40);
        uStack_50 = uStack_40 & 0xffffffff;
        uStack_48 = uStack_40._4_4_;
        FUN_00d60bf8(lVar3,&uStack_50);
      }
      goto LAB_00d482e0;
    }
    lVar3 = *(long *)(lVar3 + 0x20);
  } while( true );
}




void FUN_00d48354(undefined8 *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d6a1f8(*param_1);
  fVar1 = cosf(fVar1);
  *param_2 = fVar1;
  fVar1 = (float)FUN_00d6a1f8(*param_1);
  fVar1 = sinf(fVar1);
  param_2[1] = fVar1;
  return;
}




void FUN_00d48394(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d6a1f8(*param_1);
  *param_2 = uVar1;
  uVar1 = FUN_00d6a25c(*param_1);
  param_2[1] = uVar1;
  return;
}




void FUN_00d483cc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_1);
  FUN_00d5810c(uVar1,param_2,&DAT_03218f20);
  return;
}




void FUN_00d483fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_00d6a078(*param_1);
  uVar1 = FUN_00d9e390();
  *param_2 = uVar1;
  return;
}




void FUN_00d48428(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d44c78(*param_1);
  *param_2 = uVar1;
  return;
}




void FUN_00d48450(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281bb18;
  return;
}




void FUN_00d48468(long param_1,undefined8 param_2)

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




void FUN_00d484f4(long param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_00e45fec(param_1 + 0x10,&local_4a0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d48590(long param_1,undefined8 param_2)

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




void FUN_00d4861c(long param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_00e45fec(param_1 + 0x10,&local_4a0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d486b8(long param_1,undefined8 param_2,uint param_3)

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
  FUN_00e45fec(param_1 + 0x10,&local_4a0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d48754(undefined8 *param_1)

{
  FUN_00e5d640();
  *param_1 = &PTR_FUN_0281bb58;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}




void FUN_00d48788(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}




void FUN_00d48794(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
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
  iVar2 = FUN_00d66cf4(param_2);
  iVar3 = FUN_00d66cfc(param_2);
  if (iVar2 == iVar3) {
    local_4a0 = param_2;
    FUN_00d9d958(auStack_498);
    uStack_50 = 0;
    local_58 = 0;
    uStack_60 = 0;
    local_68 = 0;
    uStack_70 = 0;
    local_78 = 0;
    uStack_80 = 0;
    local_88 = 0;
    if (*(char *)(param_1 + 0x28) == '\0') {
      FUN_00e45fec(param_1 + 0x10,&local_4a0);
    }
    else {
      FUN_00e46040();
    }
  }
  else if (*(char *)(param_1 + 0x28) != '\0') {
    iVar2 = FUN_00d66cf4(param_2);
    iVar3 = FUN_00d66cfc(param_2);
    if (iVar2 - param_3 == iVar3) {
      local_4a0 = param_2;
      FUN_00d9d958(auStack_498);
      uStack_50 = 0;
      local_58 = 0;
      uStack_60 = 0;
      local_68 = 0;
      uStack_70 = 0;
      local_78 = 0;
      uStack_80 = 0;
      local_88 = 0;
      FUN_00e46094(param_1 + 0x10,&local_4a0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d488c4(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_00e5d640();
  *param_1 = &PTR_FUN_0281bc28;
  param_1[5] = &PTR_FUN_0281bd00;
  param_1[6] = 0;
  uVar1 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 8) = 0;
  *(byte *)((long)param_1 + 0x44) = *(byte *)((long)param_1 + 0x44) & 0xfc;
  *(undefined4 *)(param_1 + 7) = uVar1;
  return;
}




void FUN_00d4891c(undefined4 param_1,long param_2,byte param_3)

{
  *(undefined4 *)(param_2 + 0x40) = param_1;
  *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) & 0xfe | param_3 & 1;
  return;
}




void FUN_00d48930(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_4a0;
  undefined1 auStack_498 [1040];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long lStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
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
        FUN_00d7bf88(*(undefined4 *)(param_1 + 0x40),uVar6,param_1 + 0x28);
      }
      goto LAB_00d48a18;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = uVar3;
LAB_00d48a18:
  if ((*(byte *)(param_1 + 0x44) & 1) != 0) {
    local_4a0 = param_2;
    FUN_00d9d958(auStack_498);
    local_58 = 0;
    uStack_60 = 0;
    local_68 = 0;
    uStack_70 = 0;
    local_78 = 0;
    uStack_80 = 0;
    local_88 = 0;
    lStack_50 = (ulong)*(uint *)(param_1 + 0x40) << 0x20;
    FUN_00e45fec(param_1 + 0x10,&local_4a0);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d48a94(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
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
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x38) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        if ((*(byte *)(param_1 + 0x44) & 3) == 0) {
          local_4a0 = param_2;
          FUN_00d9d958(auStack_498);
          uStack_50 = 0;
          local_58 = 0;
          uStack_60 = 0;
          local_68 = 0;
          uStack_70 = 0;
          local_78 = 0;
          uStack_80 = 0;
          local_88 = 0;
          lVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
          fVar5 = *(float *)(lVar3 + 0x40);
          lVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))(*(long **)(param_1 + 0x30));
          uStack_50 = CONCAT44(fVar5 - *(float *)(lVar3 + 0x44),(undefined4)uStack_50);
          FUN_00e45fec(param_1 + 0x10,&local_4a0);
        }
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
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d48bf0(long param_1,long param_2)

{
  long lVar1;
  long local_4a0;
  undefined1 auStack_498 [1040];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long lStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_4a0 = *(long *)(param_2 + 0x10);
  if ((local_4a0 != 0) && (*(int *)(*(long *)(local_4a0 + 8) + 0xa4) != DAT_031a9338)) {
    local_4a0 = 0;
  }
  FUN_00d9d958(auStack_498);
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  lStack_50 = (ulong)*(uint *)(param_1 + 0x40) << 0x20;
  if ((*(byte *)(param_1 + 0x44) >> 1 & 1) == 0) {
    FUN_00e45fec();
  }
  else {
    FUN_00e460e8(param_1 + 0x10,&local_4a0);
  }
  FUN_00d7bfdc(param_2);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d48cc8(long param_1)

{
  FUN_00d48bf0(param_1 + -0x28);
  return;
}




void FUN_00d48cd0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_01985d44(param_2,DAT_03133730);
  uVar2 = DAT_03214ce8;
  if (lVar3 == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x30);
    *(long **)(param_1 + 0x30) = (long *)(lVar3 + 0x28);
    *(int *)(param_1 + 0x38) = iVar1;
    if (iVar1 == *(int *)(lVar3 + 0x30)) {
      lVar3 = (**(code **)(*(long *)(lVar3 + 0x28) + 0x10))();
      if (lVar3 == 0) {
        return;
      }
      plVar4 = *(long **)(param_1 + 0x30);
      uVar5 = 0;
      if (plVar4 != (long *)0x0) {
        if (*(int *)(param_1 + 0x38) == (int)plVar4[1]) {
          uVar5 = (**(code **)(*plVar4 + 0x10))();
        }
        else {
          *(undefined8 *)(param_1 + 0x30) = 0;
          uVar5 = 0;
          *(undefined4 *)(param_1 + 0x38) = DAT_03214ce8;
        }
      }
      FUN_00d7c534(uVar5,param_1 + 0x28);
      return;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  return;
}




void FUN_00d48dac(long param_1)

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




void FUN_00d48e50(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
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
  FUN_00d9d958(auStack_488);
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  uVar2 = FUN_01988c78();
  uStack_40 = CONCAT44(uVar2,(undefined4)uStack_40);
  FUN_00e45fec(param_1 + 0x10,&local_490);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d48f04(long param_1)

{
  FUN_00d48e50(param_1 + -0x28);
  return;
}




void FUN_00d48f0c(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_00e5d640();
  *param_1 = &PTR_FUN_0281bd28;
  param_1[5] = &PTR_FUN_0281be00;
  param_1[6] = 0;
  uVar1 = DAT_03214ce8;
  param_1[8] = 0;
  param_1[9] = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 7) = uVar1;
  return;
}




void FUN_00d48f64(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}




void FUN_00d48f6c(long param_1,long param_2)

{
  *(long *)(param_2 + 0x48) = param_1;
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfe;
  return;
}




void FUN_00d48f80(long param_1)

{
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    return;
  }
  FUN_00d48f90();
  return;
}




void FUN_00d48f90(long param_1,undefined8 param_2)

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
      goto LAB_00d49088;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = uVar3;
LAB_00d49088:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

