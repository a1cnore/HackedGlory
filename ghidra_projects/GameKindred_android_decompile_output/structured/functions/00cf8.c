// functions/00cf8 — 65 functions
#include "libGameKindred.h"




void FUN_00cf816c(long param_1,undefined8 param_2,byte param_3,byte param_4)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(byte *)(param_1 + 0x18) = param_3 & 1 | (param_4 & 1) << 1 | *(byte *)(param_1 + 0x18) & 0xfc;
  return;
}




void FUN_00cf8190(undefined8 *param_1)

{
  FUN_00cfc438();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_02810148;
  *(undefined2 *)(param_1 + 3) = 0;
  return;
}




void FUN_00cf81c8(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  float local_90;
  float local_8c;
  float local_88 [12];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar5 = FUN_00ceab48();
    if (((uVar5 & 1) != 0) && (iVar2 = FUN_00d51964(param_2), iVar2 != 0)) {
      uVar8 = 0;
      do {
        lVar6 = FUN_00d51954(param_2,uVar8);
        if (*(char *)(param_1 + 0x19) == '\0') {
          if (lVar6 != 0) goto LAB_00cf82b8;
        }
        else {
          iVar2 = *(int *)(lVar6 + 0x260);
          lVar7 = FUN_00d5048c(param_2);
          if ((iVar2 == *(int *)(lVar7 + 0x260)) ||
             (uVar5 = FUN_00d6a814(lVar6,0x10), (uVar5 & 1) == 0)) {
LAB_00cf82b8:
            if (((*(byte *)(lVar6 + 0x2f6) >> 5 & 1) != 0) &&
               (((**(code **)(param_1 + 0x10))(param_2,lVar6,&local_8c,&local_90), 0.0 < local_8c &&
                (0.1 < local_90)))) {
              FUN_00cfee84(local_88,*(undefined4 *)(lVar6 + 0x260),1);
              FUN_00ce20fc(local_88);
            }
          }
        }
        uVar8 = uVar8 + 1;
        uVar3 = FUN_00d51964(param_2);
      } while (uVar8 < uVar3);
    }
  }
  else {
    uVar4 = FUN_00d5048c(param_2);
    (**(code **)(param_1 + 0x10))(param_2,uVar4,local_88,&local_8c);
    if ((0.0 < local_88[0]) && (0.1 < local_8c)) {
      FUN_00d57dd0(uVar4);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf834c(long param_1,undefined8 param_2,byte param_3,byte param_4)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(byte *)(param_1 + 0x18) = param_3 & 1;
  *(byte *)(param_1 + 0x19) = param_4 & 1;
  return;
}




void FUN_00cf8364(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_028101a8;
  param_1[2] = 0;
  return;
}




void FUN_00cf8398(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00cf83a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined1 auStack_3a8 [16];
  undefined1 auStack_398 [16];
  undefined1 auStack_388 [792];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    uVar8 = FUN_00d6eb50();
    uVar2 = FUN_00d6e9d4(uVar8,*(undefined8 *)(param_1 + 0x10));
    lVar9 = FUN_00d5048c(param_2);
    iVar3 = FUN_00d51964(param_2);
    if (iVar3 != 0) {
      iVar11 = 0;
      do {
        lVar10 = FUN_00d51954(param_2,iVar11);
        if (lVar10 != 0) {
          FUN_00d557c4(lVar10,auStack_398,&DAT_03218f68);
          FUN_00d55794(lVar10,auStack_3a8,0);
          uVar4 = FUN_00ceb350();
          FUN_00d4d1ec(auStack_388);
          uVar5 = FUN_00d5bab4(lVar9);
          uVar6 = FUN_00d55870(lVar9);
          FUN_008ff600(uVar2,uVar5,uVar4,uVar6,auStack_3a8,auStack_398,0xffffffff,1,
                       *(undefined4 *)(lVar9 + 0x260),0,0xffffffff);
        }
        iVar11 = iVar11 + 1;
      } while (iVar3 != iVar11);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf84ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00d5048c(param_2);
    FUN_00d043c0(0xc61c4000,auStack_58,*(undefined4 *)(lVar3 + 0x260),0,1);
    FUN_00ce20fc(auStack_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf8564(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00ceab48();
  if (((uVar4 & 1) != 0) && (iVar2 = FUN_00d51964(param_2), iVar2 != 0)) {
    uVar6 = 0;
    do {
      lVar5 = FUN_00d51954(param_2,uVar6);
      if (lVar5 != 0) {
        FUN_00d043c0(0xc61c4000,auStack_68,*(undefined4 *)(lVar5 + 0x260),0,1);
        FUN_00ce20fc(auStack_68);
      }
      uVar6 = uVar6 + 1;
      uVar3 = FUN_00d51964(param_2);
    } while (uVar6 < uVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf861c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00d5048c(param_2);
    *(ushort *)(lVar2 + 0x301) = *(ushort *)(lVar2 + 0x301) | 0x8000;
  }
  return;
}




void FUN_00cf8658(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_02810208;
  param_1[2] = 0;
  return;
}




void FUN_00cf868c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00cf8694(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d5048c(param_2);
  FUN_00cf86c0(param_1,uVar1);
  return;
}




void FUN_00cf86c0(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 auStack_160 [40];
  long alStack_138 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    FUN_00d4d634(auStack_160);
    FUN_00d4d66c(auStack_160,param_2);
    FUN_00d4d678(auStack_160,*(undefined8 *)(param_1 + 0x10));
    uVar2 = FUN_00d9e840(auStack_160,alStack_138,0x20,0);
    if (uVar2 != 0) {
      uVar3 = (ulong)uVar2;
      plVar4 = alStack_138;
      do {
        uVar3 = uVar3 - 1;
        *(ushort *)(*plVar4 + 0x301) = *(ushort *)(*plVar4 + 0x301) | 0x8000;
        plVar4 = plVar4 + 1;
      } while (uVar3 != 0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf8774(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d5048c(param_2);
  FUN_00cf86c0(param_1,uVar1);
  return;
}




void FUN_00cf87a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00d5048c(param_2);
    FUN_00cfe30c(auStack_48,*(undefined4 *)(lVar3 + 0x260));
    FUN_00ce20fc(auStack_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf8808(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_02810268;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}




void FUN_00cf883c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}




void FUN_00cf8844(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d5048c(param_2);
  FUN_00d59fb0(uVar1,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_00cf886c(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_028102c8;
  param_1[2] = 0;
  return;
}




void FUN_00cf88a0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if (((uVar2 & 1) == 0) && (*(long *)(param_1 + 0x10) != 0)) {
    FUN_019889cc(&local_30,1,DAT_02e3ef88,0);
    FUN_00d76060(local_30,*(undefined8 *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf8918(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00cf8920(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_02810328;
  *(undefined4 *)(param_1 + 2) = 0xbf800000;
  return;
}




void FUN_00cf8958(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}




long FUN_00cf8960(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00d50ef8(param_2);
  return (ulong)(*(float *)(*(long *)(lVar1 + 0x40) + 0x314) < *(float *)(param_1 + 0x10)) << 3;
}




void FUN_00cf899c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00d5048c(param_2);
  lVar2 = FUN_00d51778(param_2);
  if (lVar2 != 0) {
    FUN_00d5db38(uVar1,lVar2,0);
    return;
  }
  return;
}




void FUN_00cf89e8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = FUN_00ceab48();
  if (((uVar2 & 1) != 0) && (iVar1 = FUN_00d51964(param_2), iVar1 != 0)) {
    uVar3 = FUN_00d5048c(param_2);
    lVar4 = FUN_00d51954(param_2,0);
    if (lVar4 != 0) {
      FUN_00d5db38(uVar3,lVar4,0);
      return;
    }
  }
  return;
}




void FUN_00cf8a4c(undefined4 param_1,long param_2,undefined2 param_3)

{
  *(undefined2 *)(param_2 + 0x10) = param_3;
  *(undefined4 *)(param_2 + 0x14) = param_1;
  return;
}




void FUN_00cf8a58(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined1 auStack_c0 [88];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar8 = FUN_00ceab48();
  if (((uVar8 & 1) != 0) && (iVar5 = FUN_00d51964(param_2), iVar5 != 0)) {
    uVar10 = 0;
    do {
      lVar9 = FUN_00d5048c(param_2);
      uVar1 = *(undefined4 *)(lVar9 + 0x260);
      lVar9 = FUN_00d51954(param_2,uVar10);
      puVar4 = PTR_s_Buff_Debug_CrowdControl_02beb518;
      uVar2 = *(undefined4 *)(lVar9 + 0x260);
      uVar11 = *(undefined4 *)(param_1 + 0x14);
      uVar6 = FUN_00ceb350();
      FUN_00cfe864(uVar11,0,0,auStack_c0,uVar1,uVar2,puVar4,uVar6,1,*(undefined2 *)(param_1 + 0x10),
                   0);
      FUN_00ce20fc(auStack_c0);
      uVar10 = uVar10 + 1;
      uVar7 = FUN_00d51964(param_2);
    } while (uVar10 < uVar7);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf8b54(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_02810388;
  return;
}




void FUN_00cf8b84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d5048c(param_2);
  FUN_00d5baf0(uVar1,&DAT_0314f590);
  return;
}




void FUN_00cf8ba4(undefined8 param_1,undefined8 param_2)

{
  FUN_00e6a8a8(&DAT_0314f590,"-=-: %s",param_2);
  return;
}




void FUN_00cf8bc0(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_028103e8;
  param_1[2] = 0;
  return;
}




void FUN_00cf8bf4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00cf8bfc(void)

{
  return;
}




void FUN_00cf8c00(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8c24(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8c48(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8c6c(void)

{
  return;
}




void FUN_00cf8c70(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8c94(void)

{
  return;
}




void FUN_00cf8c98(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8cbc(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8ce0(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8d04(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8d28(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8d4c(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8d70(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8d94(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8db8(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8ddc(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8e00(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8e24(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8e48(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8e6c(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8e90(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8eb4(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8ed8(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8efc(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8f20(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8f44(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8f68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280f9c8;
  FUN_00cfc44c();
  return;
}




void FUN_00cf8f7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280f9c8;
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8fb4(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cf8fdc(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}

