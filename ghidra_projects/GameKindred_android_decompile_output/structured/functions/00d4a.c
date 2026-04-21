// functions/00d4a — 72 functions
#include "libGameKindred.h"




void FUN_00d4a074(long param_1,undefined8 param_2,undefined8 param_3)

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
  uStack_50 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  local_58 = param_3;
  FUN_00e460e8(param_1 + 0x10,&local_4a0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d4a110(long param_1,undefined8 param_2)

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




void FUN_00d4a19c(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined8 local_4a0;
  undefined1 auStack_498 [1040];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00d66d28(param_2);
  uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f;
  if ((uVar1 != 0x1f) && (*(short *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) == 2)) {
    FUN_00d66d28(param_2);
    puVar4 = (undefined8 *)FUN_00da2d50();
    local_4b0 = *puVar4;
    local_4a8 = *(undefined4 *)(puVar4 + 1);
    local_4a0 = param_2;
    FUN_00d9d958(auStack_498);
    uStack_50 = 0;
    uStack_60 = 0;
    local_68 = 0;
    uStack_70 = 0;
    local_78 = 0;
    uStack_80 = 0;
    local_88 = 0;
    local_58 = (undefined1 *)&local_4b0;
    FUN_00e45fec(param_1 + 0x10,&local_4a0);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d4a288(long param_1,undefined8 param_2,undefined8 param_3)

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
  uStack_50 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  local_58 = param_3;
  FUN_00e45fec(param_1 + 0x10,&local_4a0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d4a324(long param_1,undefined8 param_2)

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




void FUN_00d4a3b0(long param_1,undefined8 param_2)

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




void FUN_00d4a43c(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_00e5d640();
  *param_1 = &PTR_FUN_0281c028;
  param_1[5] = &PTR_FUN_0281c100;
  param_1[6] = 0;
  uVar1 = DAT_03214ce8;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 7) = uVar1;
  return;
}




void FUN_00d4a488(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}




void FUN_00d4a490(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}




void FUN_00d4a498(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_01985d44(param_2,DAT_0312e6d4);
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
      FUN_00d7bf88(0x38d1b717,uVar5,param_1 + 0x28);
      return;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  return;
}




void FUN_00d4a57c(long param_1)

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




void FUN_00d4a620(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined1 local_4a8 [12];
  float local_49c;
  undefined1 local_498 [8];
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
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_031a9338) {
    lVar4 = 0;
  }
  (**(code **)(param_1 + 0x40))(lVar4,local_498);
  (**(code **)(param_1 + 0x48))(lVar4,&local_49c);
  uVar2 = FUN_00d66d28(lVar4);
  FUN_00d580a0(uVar2,local_4a8);
  fVar5 = (float)local_4a8._0_8_ - local_498._0_4_;
  fVar6 = SUB84(local_4a8._0_8_,4) - local_498._4_4_;
  if (local_49c * local_49c < fVar5 * fVar5 + fVar6 * fVar6) {
    local_490 = lVar4;
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
  }
  plVar3 = *(long **)(param_1 + 0x30);
  uVar2 = 0;
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x38) == (int)plVar3[1]) {
      uVar2 = (**(code **)(*plVar3 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = 0;
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_03214ce8;
    }
  }
  FUN_00d7bf94(0x38d1b717,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d4a774(long param_1)

{
  FUN_00d4a620(param_1 + -0x28);
  return;
}




void FUN_00d4a77c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d426b0();
  FUN_00d580a0(uVar1,param_2);
  return;
}




void FUN_00d4a7a0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d6a1f8();
  *param_2 = uVar1;
  uVar1 = FUN_00d6a25c(param_1);
  param_2[1] = uVar1;
  return;
}




void FUN_00d4a7d8(void)

{
  return;
}




void FUN_00d4a7dc(void)

{
  return;
}




void FUN_00d4a7e0(void)

{
  return;
}




void FUN_00d4a7e4(void)

{
  return;
}




void FUN_00d4a7e8(void)

{
  return;
}




void FUN_00d4a7ec(void)

{
  return;
}




void FUN_00d4a7f0(void)

{
  return;
}




void FUN_00d4a7f4(void)

{
  return;
}




void FUN_00d4a7f8(void)

{
  return;
}




void FUN_00d4a7fc(void)

{
  return;
}




void FUN_00d4a800(void)

{
  return;
}




void FUN_00d4a804(void)

{
  return;
}




void FUN_00d4a808(void)

{
  return;
}




void FUN_00d4a80c(void)

{
  return;
}




void FUN_00d4a810(void)

{
  return;
}




void FUN_00d4a814(void)

{
  return;
}




void FUN_00d4a818(void)

{
  return;
}




void FUN_00d4a81c(void)

{
  return;
}




void FUN_00d4a820(void)

{
  return;
}




void FUN_00d4a824(void)

{
  return;
}




void FUN_00d4a828(void)

{
  return;
}




void FUN_00d4a830(void)

{
  return;
}




void FUN_00d4a838(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281cf28;
  return;
}




void FUN_00d4a858(long param_1)

{
  *(undefined ***)(param_1 + -0x28) = &PTR_FUN_0281cf28;
  return;
}




void FUN_00d4a86c(long param_1)

{
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00d4a874(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281cf28;
  return;
}




void FUN_00d4a88c(long param_1)

{
  *(undefined ***)(param_1 + -0x28) = &PTR_FUN_0281cf28;
  return;
}




void FUN_00d4a8a0(long param_1)

{
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00d4a8a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281cf28;
  return;
}




void FUN_00d4a8c0(long param_1)

{
  *(undefined ***)(param_1 + -0x28) = &PTR_FUN_0281cf28;
  return;
}




void FUN_00d4a8d4(long param_1)

{
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00d4a8dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281cf28;
  return;
}




void FUN_00d4a8f4(long param_1)

{
  *(undefined ***)(param_1 + -0x28) = &PTR_FUN_0281cf28;
  return;
}




void FUN_00d4a908(long param_1)

{
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00d4a92c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281cf28;
  return;
}




void FUN_00d4a944(long param_1)

{
  *(undefined ***)(param_1 + -0x28) = &PTR_FUN_0281cf28;
  return;
}




void FUN_00d4a958(long param_1)

{
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00d4a974(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281cf28;
  return;
}




void FUN_00d4a98c(long param_1)

{
  *(undefined ***)(param_1 + -0x28) = &PTR_FUN_0281cf28;
  return;
}




void FUN_00d4a9a0(long param_1)

{
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00d4a9ac(undefined8 *param_1)

{
  FUN_00e5d640();
  *param_1 = &PTR_FUN_0281cff8;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xf8;
  return;
}




void FUN_00d4a9f0(long param_1)

{
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 1;
  return;
}




void FUN_00d4aa00(long param_1)

{
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 2;
  return;
}




void FUN_00d4aa10(long param_1,byte *param_2)

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
  *(uint *)(param_1 + 0x28) = uVar1;
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfb;
  return;
}




void FUN_00d4aa60(long param_1,byte *param_2)

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
  *(uint *)(param_1 + 0x28) = uVar1;
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 4;
  return;
}




void FUN_00d4aab0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00d4aab8(long param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined8 local_4a0;
  undefined1 auStack_498 [1032];
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x38);
  if ((((bVar1 & 1) == 0) || (*(char *)(*param_3 + 0x8b) != '\0')) &&
     (((bVar1 >> 1 & 1) == 0 || (*(char *)(*param_3 + 0x8e) != '\0')))) {
    if (*(uint *)(param_1 + 0x28) != 0) {
      pbVar5 = *(byte **)(*param_3 + 8);
      uVar4 = 0x811c9dc5;
      uVar6 = (uint)*pbVar5;
      if (*pbVar5 != 0) {
        do {
          pbVar5 = pbVar5 + 1;
          uVar4 = (uVar4 ^ uVar6) * 0x1000193;
          uVar6 = (uint)*pbVar5;
        } while (*pbVar5 != 0);
      }
      if ((bool)((bVar1 >> 2 ^ 0xff) & 1) != (uVar4 == *(uint *)(param_1 + 0x28)))
      goto LAB_00d4abc0;
    }
    if ((*(code **)(param_1 + 0x30) == (code *)0x0) ||
       (uVar3 = (**(code **)(param_1 + 0x30))(param_2,param_3), (uVar3 & 1) != 0)) {
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
      local_90 = param_3;
      FUN_00e45fec(param_1 + 0x10,&local_4a0);
    }
  }
LAB_00d4abc0:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d4abec(undefined8 *param_1)

{
  FUN_00e5d640();
  *param_1 = &PTR_FUN_0281d0c8;
  param_1[5] = 0xffffffff00000000;
  return;
}




void FUN_00d4ac24(long param_1,byte *param_2)

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
  *(uint *)(param_1 + 0x28) = uVar1;
  return;
}




void FUN_00d4ac68(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}




void FUN_00d4ac70(long param_1,undefined8 param_2,byte *param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
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
  uVar3 = (uint)*param_3;
  uVar2 = 0x811c9dc5;
  if (*param_3 != 0) {
    do {
      param_3 = param_3 + 1;
      uVar2 = (uVar2 ^ uVar3) * 0x1000193;
      uVar3 = (uint)*param_3;
    } while (*param_3 != 0);
  }
  if ((uVar2 == *(uint *)(param_1 + 0x28)) &&
     ((*(int *)(param_1 + 0x2c) < 0 || (*(int *)(param_1 + 0x2c) == param_5)))) {
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
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d4ad48(undefined8 *param_1)

{
  FUN_00e5d640();
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_0281d198;
  *(undefined2 *)((long)param_1 + 0x2c) = 0;
  return;
}




void FUN_00d4ad80(long param_1,byte *param_2)

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
  *(uint *)(param_1 + 0x28) = uVar1;
  return;
}




void FUN_00d4adc4(long param_1)

{
  *(undefined1 *)(param_1 + 0x2d) = 1;
  return;
}




void FUN_00d4add0(long param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
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
  uVar3 = FUN_00d66d28(param_2);
  lVar4 = FUN_00d9f258(uVar3,param_1 + 0x28);
  if (lVar4 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(lVar4 + 0x6a) == '\0';
  }
  *(bool *)(param_1 + 0x2c) = bVar2;
  if (bVar2 != (bool)*(char *)(param_1 + 0x2d)) {
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
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d4ae98(long param_1,undefined8 param_2)

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
  if (*(char *)(param_1 + 0x2c) != *(char *)(param_1 + 0x2d)) {
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
  *(undefined1 *)(param_1 + 0x2c) = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d4af38(long param_1,undefined8 param_2,int *param_3)

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
  if ((*(int *)(param_1 + 0x28) == *param_3) && (*(char *)(param_1 + 0x2c) == '\0')) {
    local_490 = param_2;
    if (*(char *)(param_1 + 0x2d) == '\0') {
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
    }
    else {
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
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

