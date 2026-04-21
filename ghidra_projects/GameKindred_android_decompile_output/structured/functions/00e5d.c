// functions/00e5d — 46 functions
#include "libGameKindred.h"




void FUN_00e5d174(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  thunk_FUN_00d086f0(uVar2,0,1);
  FUN_00d67d04(param_1);
  uVar2 = FUN_00d64d7c(param_1);
  lVar3 = FUN_00d4891c(0x3dcccccd,uVar2,0);
  uVar2 = FUN_00d31490(lVar3 + 0x10);
  FUN_00d9ca38(uVar2,FUN_00e5cb50);
  plVar4 = (long *)FUN_00d2cf7c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Maaya_A_Selected_02bf1c88);
  local_48[0] = 0x3f000000;
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  (**(code **)(*plVar4 + 0x60))(plVar4,FUN_00e60638);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5d25c(void)

{
  return;
}




void FUN_00e5d260(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d67b84();
  FUN_00d9e390();
  lVar1 = FUN_00d63f30(param_1);
  plVar2 = (long *)FUN_00d46828(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e5d2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Maaya__Gravitypull_02bf01a0);
  return;
}




void FUN_00e5d2a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 auStack_d0 [24];
  undefined8 auStack_b8 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d4d54c(auStack_d0);
  FUN_00d66d28(param_2);
  uVar2 = FUN_00d55870();
  FUN_00d4d588(auStack_d0,uVar2);
  uVar3 = FUN_00d9e840(auStack_d0,auStack_b8,0x10,0);
  if (uVar3 != 0) {
    uVar4 = (ulong)uVar3;
    puVar5 = auStack_b8;
    do {
      FUN_00d67b8c(param_2,*puVar5);
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5d348(void *param_1)

{
  FUN_00d468dc();
  operator_delete(param_1);
  return;
}




void FUN_00e5d36c(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_FUN_0281fed0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
  return;
}




void FUN_00e5d3ac(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}




void FUN_00e5d3b4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}




void FUN_00e5d3bc(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d66d28(param_2);
    iVar3 = *(int *)(param_1 + 0x14);
    if (iVar3 == -1) {
      iVar3 = FUN_00d67b84(param_2);
    }
    lVar7 = FUN_00d9e390(iVar3);
    if ((lVar7 == 0) ||
       (fVar8 = (float)FUN_00d9e0c4(lVar6,lVar7),
       *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) < fVar8)) {
      uVar1 = *(undefined4 *)(lVar6 + 0x260);
      uVar4 = FUN_00d66d34(param_2);
      FUN_00d009d0(auStack_60,uVar1,uVar4);
      FUN_00ce20fc(auStack_60);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5d490(void *param_1)

{
  FUN_00d468dc();
  operator_delete(param_1);
  return;
}




void FUN_00e5d4b4(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_FUN_0281ff10;
  FUN_00da1f24(param_1 + 2);
  return;
}




long FUN_00e5d4e8(long param_1)

{
  FUN_00da1f84(param_1 + 0x10);
  return param_1 + 0x10;
}




long FUN_00e5d510(long param_1)

{
  FUN_00da1fa0(param_1 + 0x10);
  return param_1 + 0x10;
}




long FUN_00e5d538(long param_1)

{
  FUN_00da1fc0(param_1 + 0x10);
  return param_1 + 0x10;
}




void FUN_00e5d560(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  
  iVar1 = FUN_00d67bf4(param_2);
  if (iVar1 != 0) {
    uVar5 = 0;
    do {
      uVar3 = FUN_00d67bdc(param_2,uVar5);
      FUN_00d67b84(param_2);
      lVar4 = FUN_00d9e390();
      if ((lVar4 != 0) && (iVar1 = FUN_00d5cf60(lVar4), iVar1 != -1)) {
        FUN_00d5cf60(lVar4);
        lVar4 = FUN_00d9e390();
      }
      FUN_00da2188(param_1 + 0x10,uVar3,lVar4,param_2);
      uVar5 = uVar5 + 1;
      uVar2 = FUN_00d67bf4(param_2);
    } while (uVar5 < uVar2);
  }
  return;
}




void FUN_00e5d61c(void *param_1)

{
  FUN_00d468dc();
  operator_delete(param_1);
  return;
}




void FUN_00e5d640(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_0281cf28;
  param_1[1] = 0;
  return;
}




void FUN_00e5d65c(long param_1)

{
  FUN_00e4613c(param_1 + 0x10);
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00e5d698(DAT_0313ce08,param_1);
  return;
}




void FUN_00e5d698(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)*param_2)(param_2);
  *(int *)(param_1 + 0x51420) = *(int *)(param_1 + 0x51420) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x51410) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * 0x4ec5;
    *(short *)(param_1 + 0x51412) = sVar2;
    *(short *)(param_1 + 0x51410) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x51412);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * 0x4ec5;
    *(short *)(param_1 + 0x51412) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0x68) = sVar2;
  }
  *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + -1;
  return;
}




void FUN_00e5d764(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281ff50;
  DAT_0313ce08 = 0;
  return;
}




undefined8 FUN_00e5d780(void)

{
  return 0;
}




void FUN_00e5d788(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281ff50;
  DAT_0313ce08 = 0;
  operator_delete(param_1);
  return;
}




void FUN_00e5d7a4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00e5d7ac(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}




void FUN_00e5d7b4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00e5d7bc(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 local_4a0;
  undefined1 auStack_498 [1040];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_3 + 0x2f4);
  if (((*(uint *)(param_1 + 0x28) & (uVar1 ^ 0xffffffff)) == 0) &&
     (((*(uint *)(param_1 + 0x2c) == 0xffffffff || ((*(uint *)(param_1 + 0x2c) & uVar1) != 0)) &&
      ((*(uint *)(param_1 + 0x30) & uVar1) == 0)))) {
    local_4a0 = param_2;
    FUN_00d9d958(auStack_498);
    uStack_60 = 0;
    uStack_50 = 0;
    local_58 = 0;
    uStack_70 = 0;
    local_78 = 0;
    uStack_80 = 0;
    local_88 = 0;
    local_68 = param_3;
    FUN_00e45fec(param_1 + 0x10,&local_4a0);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5d88c(long param_1,undefined8 param_2)

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




void FUN_00e5d91c(long param_1,byte *param_2)

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




undefined8 FUN_00e5d960(long param_1,undefined8 *param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (*(uint *)(param_1 + 0x28) != 0) {
    pbVar2 = (byte *)*param_2;
    uVar1 = 0x811c9dc5;
    uVar3 = (uint)*pbVar2;
    if (*pbVar2 != 0) {
      do {
        pbVar2 = pbVar2 + 1;
        uVar1 = (uVar1 ^ uVar3) * 0x1000193;
        uVar3 = (uint)*pbVar2;
      } while (*pbVar2 != 0);
    }
    if (*(uint *)(param_1 + 0x28) != uVar1) {
      return 0;
    }
  }
  return 1;
}




void FUN_00e5d9b0(long param_1,byte *param_2)

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




undefined8 FUN_00e5d9f4(long param_1,undefined8 *param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (*(uint *)(param_1 + 0x28) != 0) {
    pbVar2 = (byte *)*param_2;
    uVar1 = 0x811c9dc5;
    uVar3 = (uint)*pbVar2;
    if (*pbVar2 != 0) {
      do {
        pbVar2 = pbVar2 + 1;
        uVar1 = (uVar1 ^ uVar3) * 0x1000193;
        uVar3 = (uint)*pbVar2;
      } while (*pbVar2 != 0);
    }
    if (*(uint *)(param_1 + 0x28) != uVar1) {
      return 0;
    }
  }
  return 1;
}




void FUN_00e5da44(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}




void FUN_00e5da4c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x28) != 0) {
    pbVar3 = *(byte **)*param_3;
    uVar2 = 0x811c9dc5;
    uVar4 = (uint)*pbVar3;
    if (*pbVar3 != 0) {
      do {
        pbVar3 = pbVar3 + 1;
        uVar2 = (uVar2 ^ uVar4) * 0x1000193;
        uVar4 = (uint)*pbVar3;
      } while (*pbVar3 != 0);
    }
    if (*(uint *)(param_1 + 0x28) != uVar2) goto LAB_00e5db24;
  }
  uVar2 = *(uint *)(param_3[2] + 0x2f4);
  if (((*(uint *)(param_1 + 0x2c) & (uVar2 ^ 0xffffffff)) == 0) &&
     (((*(uint *)(param_1 + 0x30) == 0xffffffff || ((*(uint *)(param_1 + 0x30) & uVar2) != 0)) &&
      ((*(uint *)(param_1 + 0x34) & uVar2) == 0)))) {
    local_490 = param_2;
    FUN_00d9d958(auStack_488);
    local_40 = 0;
    uStack_48 = 0;
    local_50 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_68 = 0;
    local_70 = 0;
    local_78 = param_3;
    FUN_00e45fec(param_1 + 0x10,&local_490);
  }
LAB_00e5db24:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e5db4c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x28) != 0) {
    pbVar3 = *(byte **)*param_3;
    uVar2 = 0x811c9dc5;
    uVar4 = (uint)*pbVar3;
    if (*pbVar3 != 0) {
      do {
        pbVar3 = pbVar3 + 1;
        uVar2 = (uVar2 ^ uVar4) * 0x1000193;
        uVar4 = (uint)*pbVar3;
      } while (*pbVar3 != 0);
    }
    if (*(uint *)(param_1 + 0x28) != uVar2) goto LAB_00e5dbf0;
  }
  local_490 = param_2;
  FUN_00d9d958(auStack_488);
  local_40 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_78 = param_3;
  FUN_00e45fec(param_1 + 0x10,&local_490);
LAB_00e5dbf0:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e5dc18(long param_1,undefined8 param_2)

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




void FUN_00e5dca4(long param_1,undefined8 param_2)

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




void FUN_00e5dd30(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x28) != 0) {
    pbVar3 = *(byte **)*param_3;
    uVar2 = 0x811c9dc5;
    uVar4 = (uint)*pbVar3;
    if (*pbVar3 != 0) {
      do {
        pbVar3 = pbVar3 + 1;
        uVar2 = (uVar2 ^ uVar4) * 0x1000193;
        uVar4 = (uint)*pbVar3;
      } while (*pbVar3 != 0);
    }
    if (*(uint *)(param_1 + 0x28) != uVar2) goto LAB_00e5ddd4;
  }
  local_490 = param_2;
  FUN_00d9d958(auStack_488);
  local_40 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_78 = param_3;
  FUN_00e460e8(param_1 + 0x10,&local_490);
LAB_00e5ddd4:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00e5de08(uint param_1,uint param_2)

{
  return (1 << (ulong)(param_1 & 0x1f) & param_2 & 0xffff) != 0;
}




void FUN_00e5de20(undefined8 *param_1,undefined4 *param_2,byte param_3)

{
  undefined4 uVar1;
  
  *(byte *)(param_1 + 1) = param_3 & 1;
  *param_1 = &PTR_FUN_02820380;
  uVar1 = param_2[1];
  *(undefined4 *)((long)param_1 + 0xc) = *param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = uVar1;
  return;
}




void FUN_00e5de48(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  *(byte *)(param_1 + 1) = param_3 & 1;
  *param_1 = &PTR_FUN_02820380;
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((long)param_1 + 0xc) = *param_2;
  return;
}




undefined8 FUN_00e5de74(long param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_3 = *(undefined8 *)(param_1 + 0xc);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 0x14);
  return 1;
}




void FUN_00e5de8c(undefined8 *param_1,undefined4 *param_2,byte param_3)

{
  undefined4 uVar1;
  
  *(byte *)(param_1 + 1) = param_3 & 1;
  *param_1 = &PTR_FUN_028203a8;
  uVar1 = param_2[1];
  *(undefined4 *)((long)param_1 + 0xc) = *param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = uVar1;
  return;
}




void FUN_00e5deb4(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  *(byte *)(param_1 + 1) = param_3 & 1;
  *param_1 = &PTR_FUN_028203a8;
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((long)param_1 + 0xc) = *param_2;
  return;
}




undefined8 FUN_00e5dee0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)*(undefined8 *)(param_1 + 0xc) - (float)*param_2;
  fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20) - (float)((ulong)*param_2 >> 0x20);
  fVar2 = *(float *)(param_1 + 0x14) - *(float *)(param_2 + 1);
  *param_3 = CONCAT44(fVar4,fVar3);
  *(float *)(param_3 + 1) = fVar2;
  if (((1.1920929e-07 <= ABS(fVar2)) || (1.1920929e-07 <= ABS(fVar3))) ||
     (uVar1 = 0, 1.1920929e-07 <= ABS(fVar4))) {
    fVar3 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
    fVar2 = SQRT(fVar3);
    if (NAN(fVar2)) {
      fVar2 = sqrtf(fVar3);
    }
    uVar1 = 1;
    *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) / fVar2,(float)*param_3 / fVar2);
    *(float *)(param_3 + 1) = *(float *)(param_3 + 1) / fVar2;
  }
  return uVar1;
}




void FUN_00e5dfa8(void)

{
  return;
}




void FUN_00e5dfac(long param_1)

{
  long lVar1;
  
  DAT_031a9690 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031a9690 + 1;
  lVar1 = param_1 + (ulong)DAT_031a9690 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00e5e00c;
  *(code **)(lVar1 + 0xb8) = FUN_00e5e05c;
  *(uint *)(lVar1 + 0xa4) = DAT_031a9690;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x80;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}

