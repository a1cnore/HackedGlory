// functions/00d9a — 46 functions
#include "libGameKindred.h"




bool FUN_00d9a0f8(long param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_00d51964(param_2);
  uVar3 = FUN_00cf5968(param_1 + 8,param_2,0);
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
    bVar1 = uVar3 <= uVar2;
    break;
  case 2:
    bVar1 = uVar3 == uVar2;
    break;
  case 3:
    bVar1 = uVar3 != uVar2;
    break;
  case 4:
    bVar1 = uVar2 < uVar3;
    break;
  case 5:
    bVar1 = uVar2 <= uVar3;
    break;
  default:
    bVar1 = uVar3 < uVar2;
  }
  return bVar1;
}




bool FUN_00d9a1a4(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_00d9d984(param_2 + 8);
  uVar3 = FUN_00d9b7d8(param_1 + 8,param_2,0);
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
    bVar1 = uVar3 <= uVar2;
    break;
  case 2:
    bVar1 = uVar3 == uVar2;
    break;
  case 3:
    bVar1 = uVar3 != uVar2;
    break;
  case 4:
    bVar1 = uVar2 < uVar3;
    break;
  case 5:
    bVar1 = uVar2 <= uVar3;
    break;
  default:
    bVar1 = uVar3 < uVar2;
  }
  return bVar1;
}




void FUN_00d9a250(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}




ulong FUN_00d9a258(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  
  piVar3 = (int *)FUN_00ceace8();
  iVar1 = *param_1;
  if (iVar1 != 3) {
    if (iVar1 == 2) {
      uVar2 = FUN_00ceaf84(piVar3);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
      if (iVar1 == 1) {
        uVar4 = FUN_00ceaf84(piVar3);
        uVar2 = 0;
        if ((uVar4 & 1) == 0) {
          uVar4 = FUN_00ceae88(piVar3);
          if ((uVar4 & 1) == 0) {
            uVar2 = 1;
          }
          else {
            uVar2 = (uint)(*piVar3 == 7);
          }
        }
      }
    }
    return (ulong)(uVar2 & 1);
  }
  uVar4 = FUN_00ceaf44(piVar3);
  return uVar4;
}




void FUN_00d9a2f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281f320;
  FUN_00cf2d1c(param_1 + 0x15);
  FUN_00cf2d1c(param_1 + 0x18);
  FUN_00cfc44c(param_1);
  return;
}




void FUN_00d9a334(void *param_1)

{
  FUN_00d9a2f0();
  operator_delete(param_1);
  return;
}




void FUN_00d9a358(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d9a41c();
  uVar2 = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  *(undefined4 *)(param_2 + 0xd8) = uVar2;
  if ((uVar1 & 1) == 0) {
    param_2 = param_2 + 0xc0;
  }
  else {
    param_2 = param_2 + 0xa8;
  }
  FUN_00cf29e0(param_1,param_2,param_3);
  return;
}




uint FUN_00d9a3b0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d9a41c();
  uVar2 = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  return uVar1 & 1;
}




void FUN_00d9a3e4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = FUN_00d9a41c();
  lVar1 = param_1 + 0xa8;
  if ((uVar2 & 1) == 0) {
    lVar1 = param_1 + 0xc0;
  }
  FUN_00cf2b40(lVar1,param_2);
  return;
}




undefined8 FUN_00d9a41c(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  
  iVar1 = *(int *)(param_1 + 0xd8);
  if (iVar1 == 2) {
LAB_00d9a484:
    uVar4 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) goto LAB_00d9a484;
      uVar5 = 0;
      plVar6 = (long *)(param_1 + 0x18);
      do {
        plVar2 = (long *)*plVar6;
        if (plVar2 == (long *)0x0) break;
        uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
        if ((uVar3 & 1) == 0) goto LAB_00d9a484;
        uVar5 = uVar5 + 1;
        plVar6 = plVar6 + 9;
      } while (uVar5 < 2);
    }
    uVar4 = 1;
  }
  return uVar4;
}




void FUN_00d9a498(long param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0xd8) = 0;
  FUN_00cf2af0(param_1 + 0xa8);
  FUN_00cf2af0(param_1 + 0xc0,param_2);
  return;
}




undefined8 FUN_00d9a4cc(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0xd8) == 2) {
    uVar1 = FUN_00cf2cbc(param_1 + 0xc0);
    return uVar1;
  }
  if (*(int *)(param_1 + 0xd8) == 1) {
    uVar1 = FUN_00cf2cbc(param_1 + 0xa8);
    return uVar1;
  }
  return 0;
}




void FUN_00d9a4f8(long param_1,undefined8 param_2)

{
  FUN_00cf2ba4(param_1 + 0xa8);
  FUN_00cf2ba4(param_1 + 0xc0,param_2);
  return;
}




ulong FUN_00d9a528(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xd8);
  uVar2 = (ulong)uVar1;
  if (uVar1 != 0) {
    if (uVar1 == 2) {
      uVar2 = FUN_00cf2c08(param_1 + 0xc0);
      return uVar2;
    }
    if (uVar1 == 1) {
      uVar2 = FUN_00cf2c08(param_1 + 0xa8);
      return uVar2;
    }
    uVar2 = 0x400;
  }
  return uVar2;
}




void FUN_00d9a55c(long param_1)

{
  if (*(int *)(param_1 + 0xd8) == 2) {
    FUN_00cf2c6c(param_1 + 0xc0);
    return;
  }
  if (*(int *)(param_1 + 0xd8) == 1) {
    FUN_00cf2c6c(param_1 + 0xa8);
    return;
  }
  return;
}




void FUN_00d9a584(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281f380;
  FUN_00e4613c(param_1 + 0x11);
  FUN_00e4613c(param_1 + 0x14);
  return;
}




void FUN_00d9a5bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281f380;
  FUN_00e4613c(param_1 + 0x11);
  FUN_00e4613c(param_1 + 0x14);
  operator_delete(param_1);
  return;
}




void FUN_00d9a600(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar3 = 0;
  plVar4 = (long *)(param_1 + 0x18);
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) break;
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    if ((uVar2 & 1) == 0) {
      param_1 = param_1 + 0xa0;
      goto LAB_00d9a658;
    }
    uVar3 = uVar3 + 1;
    plVar4 = plVar4 + 7;
  } while (uVar3 < 2);
  param_1 = param_1 + 0x88;
LAB_00d9a658:
  FUN_00e45fec(param_1,param_2);
  return;
}




bool FUN_00d9a66c(float param_1,float param_2,undefined8 param_3,undefined4 param_4)

{
  switch(param_4) {
  case 0:
    return param_2 < param_1;
  case 1:
    return param_1 < param_2;
  case 2:
    return param_1 == param_2;
  case 3:
    return param_2 <= param_1;
  case 4:
    return param_1 <= param_2;
  default:
    return false;
  }
}




bool FUN_00d9a6d0(undefined8 param_1,int param_2,int param_3,undefined4 param_4)

{
  switch(param_4) {
  case 0:
    return param_3 < param_2;
  case 1:
    return param_2 < param_3;
  case 2:
    return param_2 == param_3;
  case 3:
    return param_3 <= param_2;
  case 4:
    return param_2 <= param_3;
  default:
    return false;
  }
}




void FUN_00d9a734(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_00d9a740(undefined4 *param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 4) == '\x01') {
    uVar1 = FUN_00da0288(*param_1);
    return uVar1;
  }
  return 0;
}




ulong FUN_00d9a75c(uint *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  switch((char)param_1[4]) {
  case '\x02':
    uVar8 = FUN_00d44008(*(undefined4 *)(param_2 + 0x260),*(undefined8 *)param_1);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return (ulong)((uint)uVar8 & 1);
    }
    goto LAB_00d9a9e0;
  case '\x03':
    lVar7 = *(long *)(param_2 + 0x18);
    while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar7 = *(long *)(lVar7 + 0x20);
    }
    thunk_FUN_00d9ff34(local_48,*(undefined8 *)param_1);
    FUN_00d9ff84(local_40,local_48[0]);
    uVar8 = FUN_00d6bbac(lVar7,local_40[0],0);
    uVar6 = 0;
    if ((uVar8 & 1) != 0) {
      thunk_FUN_00d9ff34(local_48,*(undefined8 *)param_1);
      FUN_00d9ff84(local_50,local_48[0]);
      uVar6 = FUN_00d6bb44(lVar7,local_50[0]);
    }
    if (4 < param_1[3]) goto switchD_00d9a7a4_default;
    uVar9 = param_1[2];
    switch(param_1[3]) {
    case 0:
switchD_00d9a954_caseD_0:
      bVar3 = SBORROW4(uVar6,uVar9);
      bVar2 = (int)(uVar6 - uVar9) < 0;
      bVar4 = uVar6 == uVar9;
LAB_00d9a95c:
      uVar8 = (ulong)(!bVar4 && bVar2 == bVar3);
      break;
    case 1:
switchD_00d9a954_caseD_1:
      uVar8 = (ulong)((int)uVar6 < (int)uVar9);
      break;
    case 2:
switchD_00d9a954_caseD_2:
      bVar3 = uVar6 == uVar9;
      goto LAB_00d9a7d4;
    case 3:
switchD_00d9a954_caseD_3:
      bVar2 = SBORROW4(uVar6,uVar9);
      bVar3 = (int)(uVar6 - uVar9) < 0;
LAB_00d9a9b8:
      uVar8 = (ulong)(bVar3 == bVar2);
      break;
    case 4:
switchD_00d9a954_caseD_4:
      uVar8 = (ulong)((int)uVar6 <= (int)uVar9);
    }
    break;
  case '\x04':
    if (4 < param_1[2]) goto switchD_00d9a7a4_default;
    fVar10 = *(float *)(*(long *)(param_2 + 0x40) + (ulong)*param_1 * 4 + 0x308);
    fVar11 = (float)param_1[1];
    switch(param_1[2]) {
    case 0:
      bVar3 = NAN(fVar10) || NAN(fVar11);
      bVar4 = fVar10 == fVar11;
      bVar2 = fVar10 < fVar11;
      goto LAB_00d9a95c;
    case 1:
      uVar8 = (ulong)(fVar10 < fVar11);
      break;
    case 2:
      bVar3 = fVar10 == fVar11;
      goto LAB_00d9a7d4;
    case 3:
      bVar3 = false;
      bVar2 = true;
      if (!NAN(fVar10) && !NAN(fVar11)) {
        bVar3 = fVar10 < fVar11;
        bVar2 = false;
      }
      goto LAB_00d9a9b8;
    case 4:
      uVar8 = (ulong)(fVar10 <= fVar11);
    }
    break;
  case '\x05':
    uVar6 = *(ushort *)(param_2 + 0x88) & 0x1f;
    if (uVar6 == 0x1f) {
      uVar8 = 1;
    }
    else {
      uVar8 = (ulong)(1 < *(ushort *)(param_2 + (ulong)uVar6 * 0x38 + 0x90) - 3);
    }
    break;
  case '\x06':
    bVar3 = (*(byte *)(param_2 + 0x2f9) & 1) == 0;
LAB_00d9a7d4:
    uVar8 = (ulong)bVar3;
    break;
  case '\a':
    lVar7 = *(long *)(param_2 + 0x18);
    uVar8 = 0;
    if (lVar7 != 0) {
      do {
        if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == DAT_02e3ef78) {
          uVar5 = FUN_00d5401c(lVar7,*(undefined8 *)param_1);
          uVar6 = FUN_00d5c238(param_2,uVar5);
          if (4 < param_1[3]) goto switchD_00d9a7a4_default;
          uVar9 = param_1[2];
          switch(param_1[3]) {
          case 0:
            goto switchD_00d9a954_caseD_0;
          case 1:
            goto switchD_00d9a954_caseD_1;
          case 2:
            goto switchD_00d9a954_caseD_2;
          case 3:
            goto switchD_00d9a954_caseD_3;
          }
          goto switchD_00d9a954_caseD_4;
        }
        lVar7 = *(long *)(lVar7 + 0x20);
      } while (lVar7 != 0);
      uVar8 = 0;
    }
    break;
  default:
switchD_00d9a7a4_default:
    uVar8 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar8;
  }
LAB_00d9a9e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}




bool FUN_00d9a9e4(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (*(char *)(param_1 + 0x10) == '\b') {
    iVar2 = FUN_00d5ef64(param_2);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}




void FUN_00d9aa14(undefined4 param_1,undefined4 *param_2)

{
  *(undefined1 *)(param_2 + 4) = 1;
  *param_2 = param_1;
  return;
}




void FUN_00d9aa24(undefined8 *param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 2) = 2;
  *param_1 = param_2;
  return;
}




void FUN_00d9aa34(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 2) = 3;
  *(undefined4 *)(param_1 + 1) = param_4;
  *(undefined4 *)((long)param_1 + 0xc) = param_3;
  return;
}




void FUN_00d9aa48(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  *param_2 = param_3;
  param_2[2] = param_4;
  *(undefined1 *)(param_2 + 4) = 4;
  param_2[1] = param_1;
  return;
}




void FUN_00d9aa60(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 5;
  return;
}




void FUN_00d9aa6c(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 6;
  return;
}




void FUN_00d9aa78(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 7;
  return;
}




void FUN_00d9aa88(undefined8 *param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 2) = 7;
  *param_1 = param_2;
  param_1[1] = 4;
  return;
}




void FUN_00d9aaa4(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 2) = 7;
  *(undefined4 *)(param_1 + 1) = param_4;
  *(undefined4 *)((long)param_1 + 0xc) = param_3;
  return;
}




void FUN_00d9aab8(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 8;
  return;
}




void FUN_00d9aac4(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0281f3c0;
  FUN_00cf29d8(param_1 + 2);
  FUN_00cf29d8(param_1 + 5);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  *(ushort *)(param_1 + 0xb) = *(ushort *)(param_1 + 0xb) & 0xc000 | 0xb1;
  return;
}




void FUN_00d9ab20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281f3c0;
  FUN_00cf2d1c(param_1 + 2);
  FUN_00cf2d1c(param_1 + 5);
  FUN_00cfc44c(param_1);
  return;
}




void FUN_00d9ab64(void *param_1)

{
  FUN_00d9ab20();
  operator_delete(param_1);
  return;
}




void FUN_00d9ab88(void)

{
  return;
}




void FUN_00d9ab8c(long param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x58);
  uVar1 = *(ushort *)(param_2 + 0x58) & 0xf;
  *(ushort *)(param_1 + 0x58) = uVar2 & 0xfff0 | uVar1;
  *(ushort *)(param_1 + 0x58) = uVar2 & 0xf000 | uVar1 | *(ushort *)(param_2 + 0x58) & 0xff0;
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  return;
}




void FUN_00d9abc4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) | 0x1000;
  uVar3 = FUN_00d9ace0();
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xdfff | (uVar3 & 1) << 0xd;
  uVar6 = FUN_00ceab48();
  if ((((uVar6 & 1) != 0) && ((*(ushort *)(param_1 + 0x58) & 0xf) == 2)) &&
     (iVar4 = FUN_00d50ac8(param_2), iVar4 != 2)) {
    lVar7 = FUN_00d5048c(param_2);
    uVar1 = *(undefined4 *)(lVar7 + 0x260);
    uVar8 = FUN_00d5048c(param_2);
    uVar9 = FUN_00d50460(param_2);
    uVar5 = FUN_00d588cc(uVar8,uVar9);
    FUN_00d078b4(auStack_78,uVar1,uVar5,*(ushort *)(param_1 + 0x58) >> 0xd & 1 ^ 3,0);
    FUN_00ce20fc(auStack_78);
  }
  uVar6 = FUN_00ceab48();
  if (((uVar6 & 1) == 0) && ((*(ushort *)(param_1 + 0x58) & 0xf) == 2)) {
    FUN_00d51dc0(param_2,0);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00d9ace0(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = FUN_00ceab48();
  if (((uVar3 & 1) == 0) && ((*(ushort *)(param_1 + 0x58) & 0xf) == 2)) {
    uVar1 = FUN_00d527a4(param_2);
    if ((uVar1 | 1) == 3) {
      return (ulong)(uVar1 == 2);
    }
  }
  switch(*(ushort *)(param_1 + 0x58) >> 4 & 0xff) {
  case 0:
    uVar3 = 0;
    if (*(char *)(param_1 + 0x50) == '\x01') {
      uVar3 = FUN_00da0288(*(undefined4 *)(param_1 + 0x40),0);
      return uVar3;
    }
    break;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x00d9adac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_1 + 0x40))(param_2);
    return uVar3;
  case 2:
  case 3:
  case 5:
  case 9:
    uVar5 = FUN_00d5048c(param_2);
    goto LAB_00d9adc4;
  case 4:
    iVar2 = FUN_00d51964(param_2);
    uVar3 = (ulong)(iVar2 != 0);
    break;
  case 6:
  case 7:
  case 8:
    lVar4 = FUN_00d51778(param_2);
    uVar3 = 0;
    if (lVar4 != 0) {
      uVar5 = FUN_00d51778(param_2);
      goto LAB_00d9adc4;
    }
    break;
  case 10:
    FUN_00d5048c(param_2);
    FUN_00d5cf60();
    uVar5 = FUN_00d9e390();
LAB_00d9adc4:
    uVar3 = FUN_00d9a75c(param_1 + 0x40,uVar5);
    return uVar3;
  default:
    uVar3 = 0;
  }
  return uVar3;
}




void FUN_00d9adfc(undefined8 param_1,long param_2,undefined8 param_3)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00d9ae70();
  if ((uVar2 & 1) != 0) {
    uVar1 = *(ushort *)(param_2 + 0x58);
    if ((uVar1 >> 0xc & 1) == 0) {
      FUN_00d9abc4(param_2,param_3);
      uVar1 = *(ushort *)(param_2 + 0x58);
    }
    if ((uVar1 >> 0xd & 1) == 0) {
      param_2 = param_2 + 0x28;
    }
    else {
      param_2 = param_2 + 0x10;
    }
    FUN_00cf29e0(param_1,param_2,param_3);
    return;
  }
  return;
}




bool FUN_00d9ae70(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) == 0) {
    if ((*(ushort *)(param_1 + 0x58) & 0xf) == 2) {
      iVar1 = FUN_00d527a4(param_2);
      return iVar1 != 0;
    }
    if ((*(ushort *)(param_1 + 0x58) & 0xf) != 0) {
      return false;
    }
  }
  return true;
}




float FUN_00d9aec8(long param_1,undefined8 param_2)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = FUN_00d9ae70();
  uVar1 = *(ushort *)(param_1 + 0x58);
  if ((uVar2 & 1) == 0) {
    fVar6 = 100.0;
    if ((uVar1 & 0xf) != 2) {
      fVar6 = 0.0;
    }
  }
  else {
    if ((uVar1 >> 0xc & 1) == 0) {
      uVar1 = FUN_00d9ace0(param_1,param_2);
    }
    else {
      uVar1 = uVar1 >> 0xd & 1;
    }
    lVar3 = 0x18;
    if ((uVar1 & 1) == 0) {
      lVar3 = 0x30;
    }
    plVar4 = *(long **)(param_1 + lVar3);
    if (plVar4 == (long *)0x0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = 0.0;
      do {
        fVar5 = (float)(**(code **)(*plVar4 + 0x48))(plVar4,param_2);
        fVar6 = fVar6 + fVar5;
        plVar4 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      } while (plVar4 != (long *)0x0);
    }
  }
  return fVar6;
}




void FUN_00d9af88(long param_1,undefined8 param_2)

{
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xefff;
  FUN_00cf2af0(param_1 + 0x10);
  FUN_00cf2af0(param_1 + 0x28,param_2);
  return;
}




ulong FUN_00d9afc4(long param_1,undefined8 param_2)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00d9ae70();
  uVar1 = *(ushort *)(param_1 + 0x58);
  if ((uVar2 & 1) == 0) {
    uVar2 = (ulong)((uVar1 & 0xf) != 2);
  }
  else {
    uVar2 = 0;
    if ((uVar1 >> 0xc & 1) != 0) {
      if ((uVar1 >> 0xd & 1) == 0) {
        param_1 = param_1 + 0x28;
      }
      else {
        param_1 = param_1 + 0x10;
      }
      uVar2 = FUN_00cf2cbc(param_1,param_2);
      return uVar2;
    }
  }
  return uVar2;
}

