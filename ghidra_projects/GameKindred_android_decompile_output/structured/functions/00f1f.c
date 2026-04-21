// functions/00f1f — 33 functions
#include "libGameKindred.h"




int FUN_00f1f07c(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((param_2 != 0) && (param_2 <= *(int *)(param_1 + 0x10))) &&
     (plVar3 = *(long **)(*(long *)(param_1 + 0x18) + (ulong)(param_2 - 1) * 8),
     plVar3 != (long *)0x0)) {
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if ((uVar2 & 1) == 0) goto LAB_00f1f114;
    local_3c = *(uint *)(plVar3 + 1);
    *(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)local_3c * 8) = 0;
    FUN_00933c34(param_1 + 0x20,&local_3c);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  param_2 = -1;
LAB_00f1f114:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00f1f140(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (param_2 <= *(int *)(param_1 + 0x10)) {
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)(param_2 - 1) * 8);
    }
  }
  return uVar1;
}




void FUN_00f1f170(long param_1,long *param_2)

{
  long lVar1;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = *(uint *)(param_2 + 1);
  *(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)local_3c * 8) = 0;
  FUN_00933c34(param_1 + 0x20,&local_3c);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00f1f1fc(long param_1,int param_2,long param_3,long param_4,uint param_5)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  if ((0 < param_4) && (param_2 != 0)) {
    if (*(int *)(param_1 + 0x10) < param_2) {
      return 0;
    }
    plVar3 = *(long **)(*(long *)(param_1 + 0x18) + (ulong)(param_2 - 1) * 8);
    if (plVar3 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar3 + 0x50))(plVar3);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      lVar2 = 0;
      while( true ) {
        uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,param_3 + lVar2,param_4 - lVar2);
        lVar2 = (uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU)) + lVar2;
        if ((long)uVar1 < 1) {
          return lVar2;
        }
        if ((param_5 & 1) == 0) break;
        if (param_4 <= lVar2) {
          return lVar2;
        }
      }
      return lVar2;
    }
  }
  return 0;
}




ulong FUN_00f1f2b8(long param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  char local_d8 [32];
  byte local_b8;
  undefined1 auStack_b7 [15];
  undefined1 *local_a8;
  ulong local_70 [2];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70[0] = 0;
  local_70[1] = 0;
  local_60 = (void *)0x0;
  FUN_00f1c904(param_2,local_70);
  pvVar5 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar5 = local_60;
  }
  FUN_00f1fdd0(local_d8,pvVar5);
  if (local_d8[0] != '\0') {
    puVar1 = auStack_b7;
    if ((local_b8 & 1) != 0) {
      puVar1 = local_a8;
    }
    plVar3 = (long *)FUN_00f1ef80(param_1,puVar1);
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x40))(plVar3);
      uVar6 = 0;
      if ((uVar4 & 1) == 0) goto LAB_00f1f428;
      uVar4 = (**(code **)(*plVar3 + 0x48))(plVar3,1);
      uVar6 = 0;
      if ((uVar4 & 1) == 0) goto LAB_00f1f428;
      plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,local_d8,1);
      if (plVar3 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar3 + 0x48))(plVar3);
        pvVar5 = operator_new__(uVar6);
        (**(code **)(*plVar3 + 0x18))(plVar3,pvVar5,uVar6);
        *param_3 = pvVar5;
        if ((param_4 & 1) != 0) {
          FUN_00f20050(param_1 + 0x30,pvVar5,FUN_00f1f474,uVar6 & 0xffffffff,0);
        }
        (**(code **)(*plVar3 + 0x10))(plVar3);
        (**(code **)(*plVar3 + 8))(plVar3);
        goto LAB_00f1f428;
      }
    }
  }
  uVar6 = 0;
LAB_00f1f428:
  FUN_00f1fee4(local_d8);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f1f474(void *param_1,undefined8 param_2,int param_3)

{
  if ((param_1 != (void *)0x0) && (param_3 < 1)) {
    operator_delete__(param_1);
    return;
  }
  return;
}




long FUN_00f1f488(long param_1,int param_2,long param_3,long param_4,uint param_5)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  if ((0 < param_4) && (param_2 != 0)) {
    if (*(int *)(param_1 + 0x10) < param_2) {
      return 0;
    }
    plVar3 = *(long **)(*(long *)(param_1 + 0x18) + (ulong)(param_2 - 1) * 8);
    if (plVar3 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar3 + 0x58))(plVar3);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      lVar2 = 0;
      while( true ) {
        uVar1 = (**(code **)(*plVar3 + 0x20))(plVar3,param_3 + lVar2,param_4 - lVar2);
        lVar2 = (uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU)) + lVar2;
        if ((long)uVar1 < 1) {
          return lVar2;
        }
        if ((param_5 & 1) == 0) break;
        if (param_4 <= lVar2) {
          return lVar2;
        }
      }
      return lVar2;
    }
  }
  return 0;
}




ulong FUN_00f1f544(long param_1,int param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2 != 0) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x10) < param_2) goto LAB_00f1f620;
    plVar7 = *(long **)(*(long *)(param_1 + 0x18) + (ulong)(param_2 - 1) * 8);
    if (plVar7 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar7 + 0x50))(plVar7);
      uVar6 = 0;
      if ((uVar3 & 1) != 0) {
        local_60 = 0;
        uVar6 = (**(code **)(*plVar7 + 0x28))(plVar7,&local_60);
        uVar2 = local_60;
        uVar4 = (**(code **)(*plVar7 + 0x38))(plVar7);
        uVar5 = (**(code **)(*plVar7 + 0x40))(plVar7);
        FUN_00f20050(param_1 + 0x30,uVar2,uVar4,uVar6 & 0xffffffff,uVar5);
        *param_3 = local_60;
      }
      goto LAB_00f1f620;
    }
  }
  uVar6 = 0;
LAB_00f1f620:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f1f654(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f20144(param_1 + 0x30,param_3);
  return;
}




void FUN_00f1f660(long param_1)

{
  FUN_00f20144(param_1 + 0x30);
  return;
}




uint FUN_00f1f668(undefined8 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  undefined1 auStack_a0 [32];
  byte local_80;
  undefined1 auStack_7f [15];
  undefined1 *local_70;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f1fdd0(auStack_a0);
  puVar1 = auStack_7f;
  if ((local_80 & 1) != 0) {
    puVar1 = local_70;
  }
  plVar4 = (long *)FUN_00f1ef80(param_1,puVar1);
  if (plVar4 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,auStack_a0);
  }
  FUN_00f1fee4(auStack_a0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00f1f708(void)

{
  long lVar1;
  char local_90 [104];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f1fdd0(local_90);
  FUN_00f1fee4(local_90);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_90[0] != '\0';
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00f1f768(undefined8 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  undefined1 auStack_a0 [32];
  byte local_80;
  undefined1 auStack_7f [15];
  undefined1 *local_70;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f1fdd0(auStack_a0);
  puVar1 = auStack_7f;
  if ((local_80 & 1) != 0) {
    puVar1 = local_70;
  }
  plVar4 = (long *)FUN_00f1ef80(param_1,puVar1);
  if (plVar4 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,auStack_a0);
  }
  FUN_00f1fee4(auStack_a0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00f1f808(undefined8 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  undefined1 auStack_a0 [32];
  byte local_80;
  undefined1 auStack_7f [15];
  undefined1 *local_70;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f1fdd0(auStack_a0);
  puVar1 = auStack_7f;
  if ((local_80 & 1) != 0) {
    puVar1 = local_70;
  }
  plVar4 = (long *)FUN_00f1ef80(param_1,puVar1);
  if (plVar4 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 0x28))(plVar4,auStack_a0);
  }
  FUN_00f1fee4(auStack_a0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00f1f8a8(undefined8 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [32];
  byte local_80;
  undefined1 auStack_7f [15];
  undefined1 *local_70;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f1fdd0(auStack_a0);
  puVar1 = auStack_7f;
  if ((local_80 & 1) != 0) {
    puVar1 = local_70;
  }
  plVar3 = (long *)FUN_00f1ef80(param_1,puVar1);
  if (plVar3 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x30))(plVar3,auStack_a0);
  }
  FUN_00f1fee4(auStack_a0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00f1f948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  undefined1 auStack_a0 [32];
  byte local_80;
  undefined1 auStack_7f [15];
  undefined1 *local_70;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f1fdd0(auStack_a0);
  puVar1 = auStack_7f;
  if ((local_80 & 1) != 0) {
    puVar1 = local_70;
  }
  plVar4 = (long *)FUN_00f1ef80(param_1,puVar1);
  if (plVar4 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,auStack_a0,param_3);
  }
  FUN_00f1fee4(auStack_a0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f1f9f0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
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
    FUN_00f1faf8(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00f1fa78(uint *param_1,uint param_2)

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




void FUN_00f1faf8(uint *param_1,uint param_2)

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




void FUN_00f1fb78(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_02828c20;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  FUN_008fa54c(local_40);
  FUN_008fce60(param_1 + 1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f1fbfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02828c20;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}




void FUN_00f1fc20(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xf1fc24);
  (*pcVar1)();
}




undefined8 FUN_00f1fc24(void)

{
  return 1;
}




bool FUN_00f1fc2c(long param_1,uint param_2)

{
  return (param_2 & (*(uint *)(param_1 + 0x20) ^ 0xffffffff)) == 0;
}




uint FUN_00f1fc3c(long param_1)

{
  return *(uint *)(param_1 + 0x20) & 1;
}




byte FUN_00f1fc48(long param_1)

{
  return *(byte *)(param_1 + 0x20) >> 1 & 1;
}




bool FUN_00f1fc54(long param_1,char *param_2)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  
  sVar5 = strlen(param_2);
  bVar2 = *(byte *)(param_1 + 8);
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x10);
  }
  bVar3 = false;
  if (sVar5 == uVar1) {
    iVar4 = FUN_0090d610((byte *)(param_1 + 8),0,0xffffffffffffffff,param_2,sVar5);
    bVar3 = iVar4 == 0;
  }
  return bVar3;
}




long FUN_00f1fcbc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return param_1 + 9;
  }
  return *(long *)(param_1 + 0x18);
}




void FUN_00f1fdd0(undefined1 *param_1,char *param_2)

{
  long lVar1;
  size_t sVar2;
  ulong uVar3;
  undefined1 *local_90;
  code *pcStack_88;
  undefined1 *local_80;
  code *pcStack_78;
  undefined1 *local_70;
  code *pcStack_68;
  char *local_60;
  undefined4 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  memset(param_1 + 8,0,0x60);
  local_60 = param_2;
  sVar2 = strlen(param_2);
  local_58 = (undefined4)sVar2;
  local_70 = param_1 + 0x20;
  local_80 = param_1 + 0x38;
  pcStack_88 = pcrecpp::Arg::parse_string;
  pcStack_68 = pcrecpp::Arg::parse_string;
  pcStack_78 = pcrecpp::Arg::parse_string;
  local_90 = param_1 + 0x50;
  uVar3 = pcrecpp::RE::FullMatch
                    ((RE *)&DAT_03211290,(StringPiece *)&local_60,(Arg *)&local_70,(Arg *)&local_80,
                     (Arg *)&local_90,(Arg *)&pcrecpp::RE::no_arg,(Arg *)&pcrecpp::RE::no_arg,
                     (Arg *)&pcrecpp::RE::no_arg,(Arg *)&pcrecpp::RE::no_arg,
                     (Arg *)&pcrecpp::RE::no_arg,(Arg *)&pcrecpp::RE::no_arg,
                     (Arg *)&pcrecpp::RE::no_arg,(Arg *)&pcrecpp::RE::no_arg,
                     (Arg *)&pcrecpp::RE::no_arg,(Arg *)&pcrecpp::RE::no_arg,
                     (Arg *)&pcrecpp::RE::no_arg,(Arg *)&pcrecpp::RE::no_arg,
                     (Arg *)&pcrecpp::RE::no_arg);
  if ((uVar3 & 1) != 0) {
    *param_1 = 1;
    FUN_008fa54c(&local_60,param_2);
    FUN_008fce60(param_1 + 8,&local_60);
    if (((ulong)local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f1fee4(long param_1)

{
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}




void FUN_00f1ff48(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_1 + 1;
  return;
}




void FUN_00f1ff5c(long param_1)

{
  FUN_00f1ff84();
  FUN_00f201dc(param_1,*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00f1ff84(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  if (*(int *)(param_1 + 2) != 0) {
    plVar6 = (long *)*param_1;
    while (plVar6 != param_1 + 1) {
      iVar3 = *(int *)((long)plVar6 + 0x44);
      if (-1 < iVar3) {
        do {
          (*(code *)plVar6[5])(plVar6[6],(int)plVar6[8],iVar3,plVar6[7]);
          iVar1 = *(int *)((long)plVar6 + 0x44);
          iVar3 = iVar1 + -1;
          *(int *)((long)plVar6 + 0x44) = iVar3;
        } while (0 < iVar1);
      }
      plVar4 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        plVar4 = plVar6 + 2;
        bVar2 = *(long **)*plVar4 != plVar6;
        plVar6 = (long *)*plVar4;
        if (bVar2) {
          do {
            lVar5 = *plVar4;
            plVar4 = (long *)(lVar5 + 0x10);
            plVar6 = (long *)*plVar4;
          } while (*plVar6 != lVar5);
        }
      }
      else {
        do {
          plVar6 = plVar4;
          plVar4 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    }
    FUN_00f201dc(param_1,param_1[1]);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = param_1 + 1;
  }
  return;
}

