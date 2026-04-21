// functions/00a82 — 44 functions
#include "libGameKindred.h"




void FUN_00a821a0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (param_4 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_00d9e99c(param_4);
    uVar2 = ~uVar2 & 1;
  }
  uVar4 = FUN_00a82290(param_1 + 0x90,param_2,param_5);
  *(undefined4 *)(param_3 + 0x24) = uVar4;
  *(byte *)(param_3 + 100) = *(byte *)(param_1 + 0xb0) >> 3 & 1;
  *(byte *)(param_3 + 0x65) = *(byte *)(param_1 + 0xb0) >> 4 & 1;
  *(uint *)(param_3 + 0x5c) = *(ushort *)(param_1 + 0xb0) >> 5 & 3;
  bVar1 = *(byte *)(param_1 + 0xb0);
  *(uint *)(param_3 + 0x60) = uVar2;
  *(byte *)(param_3 + 0x66) = bVar1 >> 7;
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_1 + 0xa8);
  if (param_4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00d5babc(param_4);
  }
  *(undefined8 *)(param_3 + 0x18) = uVar3;
  *(byte *)(param_3 + 0x68) = *(byte *)(param_1 + 0xb1) & 1;
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_1 + 0xac);
  *(undefined8 *)(param_3 + 0x3c) = *(undefined8 *)(param_1 + 0xa0);
  uVar4 = FUN_00a82290(param_1 + 0x80,param_2,param_5);
  *(undefined4 *)(param_3 + 0x38) = uVar4;
  return;
}




undefined1  [16] FUN_00a82290(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  uint *puVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  uVar6 = 0;
  switch(param_1[2]) {
  case 0:
    break;
  case 1:
    uVar5 = (ulong)*param_1;
    uVar6 = 0;
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x00a822ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (**(code **)param_1)();
    return auVar4;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    FUN_00cfb5cc(param_2);
                    /* WARNING: Could not recover jumptable at 0x00a82310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (*UNRECOVERED_JUMPTABLE)();
    return auVar4;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00a82328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (**(code **)param_1)(param_2);
    return auVar4;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00a82344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (**(code **)param_1)(param_2,param_3);
    return auVar4;
  case 6:
    plVar2 = (long *)FUN_00cfb6c8(param_2);
    if (plVar2 != (long *)0x0) {
      uVar6 = *(undefined8 *)param_1;
      uVar1 = FUN_00e6a474(uVar6);
      uVar1 = FUN_0091ed5c(uVar6,uVar1,0x12345678);
      puVar3 = (uint *)(**(code **)(*plVar2 + 0x18))(plVar2,uVar1);
      uVar5 = (ulong)*puVar3;
      uVar6 = 0;
    }
    break;
  default:
    FUN_00e6a2fc(0);
  }
  auVar4._8_8_ = uVar6;
  auVar4._0_8_ = uVar5;
  return auVar4;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a823a4(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_027ceef0;
  param_1[1] = 0;
  uVar1 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  memset(param_1 + 3,0,0x5c);
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  *(undefined4 *)(param_1 + 0x13) = 1;
  param_1[0x14] = _DAT_03218ef8;
  *(ushort *)(param_1 + 0x16) = *(ushort *)(param_1 + 0x16) & 0xfe00 | 0x30;
  *(undefined1 *)((long)param_1 + 0xb2) = 0;
  *(int *)(param_1 + 0x15) = (int)param_1;
  *(undefined4 *)((long)param_1 + 0xac) = 0xff000000;
  return;
}




void FUN_00a82438(long param_1)

{
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xff98 | 0x21;
  return;
}




void FUN_00a82454(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xff98 | 0x22;
  return;
}




void FUN_00a82474(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xff98 | 0x23;
  return;
}




void FUN_00a82494(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xff98 | 0x44;
  return;
}




void FUN_00a824b4(long param_1)

{
  *(char **)(param_1 + 0x28) = "CenterBody";
  *(char **)(param_1 + 0x18) = "Effect_TalentStandard";
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xfff0 | 10;
  return;
}




void FUN_00a824e4(long param_1)

{
  *(char **)(param_1 + 0x28) = "CenterBody";
  *(char **)(param_1 + 0x18) = "Effect_TalentStrong";
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xfff0 | 10;
  return;
}




void FUN_00a82514(long param_1,undefined4 param_2)

{
  int *piVar1;
  long lVar2;
  char *pcVar3;
  
  *(char **)(param_1 + 0x28) = "OverHead";
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xfff0 | 10;
  piVar1 = (int *)FUN_00cecdb0(param_2);
  if (*piVar1 == -0x7ee3623b) {
    pcVar3 = "Effect_Nothing";
  }
  else {
    lVar2 = FUN_00cceab4();
    if (lVar2 == 0) {
      return;
    }
    pcVar3 = *(char **)(lVar2 + 0x18);
  }
  *(char **)(param_1 + 0x18) = pcVar3;
  return;
}




void FUN_00a8258c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00a82594(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_00a8259c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00a825a4(long param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x90) = *param_2;
  return;
}




void FUN_00a825b8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  return;
}




void FUN_00a825c0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_00a825c8(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xfff7 | (param_2 & 1) << 3;
  return;
}




void FUN_00a825e0(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xffef | (param_2 & 1) << 4;
  return;
}




void FUN_00a825f8(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xff7f | (param_2 & 1) << 7;
  return;
}




void FUN_00a82610(long param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined1 *)(param_1 + 0xb2) = 1;
  return;
}




void FUN_00a82624(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 1);
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0xb2) = 1;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  return;
}




void FUN_00a82640(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}




void FUN_00a82648(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}




void FUN_00a82650(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xfeff | (param_2 & 1) << 8;
  return;
}




void FUN_00a82668(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xff9f | (param_2 & 3) << 5;
  return;
}




void FUN_00a82680(float param_1,float param_2,float param_3,long param_4)

{
  *(char *)(param_4 + 0xac) = (char)(int)(param_1 * 255.0);
  *(char *)(param_4 + 0xad) = (char)(int)(param_2 * 255.0);
  *(char *)(param_4 + 0xae) = (char)(int)(param_3 * 255.0);
  return;
}




void FUN_00a826b0(long param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x80) = *param_2;
  return;
}




void FUN_00a826c4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}




void FUN_00a826cc(float param_1,long param_2)

{
  *(char *)(param_2 + 0xaf) = (char)(int)(param_1 * 255.0);
  return;
}




void FUN_00a826e4(undefined4 param_1,undefined4 param_2,long *param_3)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  uStack_2c = param_2;
  (**(code **)(*param_3 + 0xe8))(param_3,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a82738(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0xa0) = *param_2;
  return;
}




void FUN_00a82744(long param_1)

{
  *(code **)(param_1 + 0x80) = FUN_00a8275c;
  *(undefined4 *)(param_1 + 0x88) = 5;
  return;
}




undefined4 FUN_00a8275c(undefined8 param_1,long param_2)

{
  return *(undefined4 *)(*(long *)(param_2 + 0x38) + 0x1d0);
}




void FUN_00a82768(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}




void FUN_00a82770(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}




void FUN_00a82778(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return;
}




undefined4 FUN_00a82780(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa8);
}




undefined8 FUN_00a82788(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 8);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x10) != (int)plVar1[1]) {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
      return 0;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))();
  }
  return uVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a827dc(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  uint local_d8 [2];
  uint local_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  int local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined1 local_54;
  undefined4 local_53;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = *(ushort *)(param_2 + 0x88) & 0x1f;
  if (((uVar3 != 0x1f) && (*(ushort *)(param_2 + (ulong)uVar3 * 0x38 + 0x90) - 3 < 2)) &&
     (-1 < *(char *)(param_1 + 0xb0))) goto LAB_00a82aa0;
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(param_4,param_1 + 0xa8);
  }
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_00d5cf60(param_3);
    if (iVar2 != -1) {
      FUN_00d5cf60(param_3);
      lVar4 = FUN_00d9e390();
      if (lVar4 != 0) {
        param_3 = lVar4;
      }
    }
    uVar3 = FUN_00d9e99c(param_3);
  }
  iVar2 = FUN_00a82acc(param_1,uVar3 & 1,param_4);
  if (iVar2 == 0) goto LAB_00a82aa0;
  uStack_a0 = 0;
  local_a8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  local_94 = 0xffffffff00000000;
  local_84 = 0xff000000;
  local_74 = DAT_03218f40;
  local_7c = _DAT_03218ef8;
  local_6c = DAT_03218f48;
  local_8c = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 2;
  local_54 = 1;
  local_53 = 1;
  local_98 = iVar2;
  uVar5 = FUN_00a82b84(param_1,param_4,&local_b8,param_3,param_2,auStack_c8);
  if ((uVar5 & 1) == 0) goto LAB_00a82aa0;
  switch(*(ushort *)(param_1 + 0xb0) & 7) {
  case 1:
    lVar4 = FUN_00ca9fc8(param_2,&local_b8);
    break;
  case 2:
    pbVar10 = *(byte **)(param_1 + 0x28);
    if (pbVar10 == (byte *)0x0) {
      local_d0 = 0;
    }
    else {
      uVar3 = (uint)*pbVar10;
      local_d0 = 0x811c9dc5;
      if (*pbVar10 != 0) {
        do {
          pbVar10 = pbVar10 + 1;
          local_d0 = (local_d0 ^ uVar3) * 0x1000193;
          uVar3 = (uint)*pbVar10;
        } while (*pbVar10 != 0);
      }
    }
    puVar6 = &local_d0;
    goto LAB_00a82a64;
  case 3:
    (**(code **)(param_1 + 0x28))(param_4,&local_d0);
    pbVar10 = (byte *)CONCAT44(uStack_cc,local_d0);
    if (pbVar10 == (byte *)0x0) {
      local_d8[0] = 0;
    }
    else {
      uVar3 = (uint)*pbVar10;
      local_d8[0] = 0x811c9dc5;
      if (*pbVar10 != 0) {
        do {
          pbVar10 = pbVar10 + 1;
          local_d8[0] = (local_d8[0] ^ uVar3) * 0x1000193;
          uVar3 = (uint)*pbVar10;
        } while (*pbVar10 != 0);
      }
    }
    puVar6 = local_d8;
LAB_00a82a64:
    lVar4 = FUN_00caa284(param_2,&local_b8,puVar6);
    lVar7 = 0;
    if (lVar4 != 0) {
      lVar7 = lVar4 + 0x40;
    }
    puVar9 = &DAT_03214ce8;
    if (lVar4 != 0) {
      puVar9 = (undefined4 *)(lVar7 + 8);
    }
    goto LAB_00a82a88;
  case 4:
    lVar4 = FUN_00caa28c(param_2,&local_b8,*(undefined8 *)(param_1 + 0x28));
    break;
  default:
    goto switchD_00a82960_default;
  }
  lVar7 = 0;
  if (lVar4 == 0) {
    puVar9 = &DAT_03214ce8;
LAB_00a82a88:
    uVar8 = *puVar9;
  }
  else {
    uVar8 = *(undefined4 *)(lVar4 + 0x48);
    lVar7 = lVar4 + 0x40;
  }
  *(long *)(param_1 + 8) = lVar7;
  *(undefined4 *)(param_1 + 0x10) = uVar8;
switchD_00a82960_default:
  FUN_00a82d04(param_1,param_4);
LAB_00a82aa0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a82acc(long param_1,ulong param_2,undefined8 param_3)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte local_4c [36];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pbVar5 = *(byte **)(param_1 + 0x18);
  if (pbVar5 == (byte *)0x0) {
    if (*(code **)(param_1 + 0x30) != (code *)0x0) {
      (**(code **)(param_1 + 0x30))(param_3,local_4c,0x24);
      pbVar5 = local_4c;
      goto LAB_00a82b28;
    }
  }
  else {
    pbVar1 = *(byte **)(param_1 + 0x20);
    if ((param_2 & 1) == 0) {
      pbVar1 = pbVar5;
    }
    if (*(byte **)(param_1 + 0x20) != (byte *)0x0) {
      pbVar5 = pbVar1;
    }
LAB_00a82b28:
    if (*pbVar5 != 0) {
      uVar3 = 0x811c9dc5;
      uVar4 = (uint)*pbVar5;
      do {
        pbVar5 = pbVar5 + 1;
        uVar3 = (uVar3 ^ uVar4) * 0x1000193;
        uVar4 = (uint)*pbVar5;
      } while (*pbVar5 != 0);
      goto LAB_00a82b60;
    }
  }
  uVar3 = 0;
LAB_00a82b60:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}




void FUN_00a82b84(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  byte *local_58;
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_50 = 0;
  FUN_00a83388();
  cVar2 = *(char *)(param_1 + 0xb2);
  *(char *)((long)param_3 + 0x67) = cVar2;
  if (cVar2 != '\0') {
    uVar10 = FUN_00a83478(param_1 + 0x70,param_2,param_5);
    *(undefined4 *)((long)param_3 + 0x2c) = uVar10;
  }
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    (**(code **)(param_1 + 0x50))
              (param_2,(long)param_3 + 0x44,param_3 + 10,(long)param_3 + 0x54,param_3 + 0xb);
  }
  if (*(code **)(param_1 + 0x58) != (code *)0x0) {
    (**(code **)(param_1 + 0x58))(param_2,(long)param_3 + 0x34);
  }
  local_58 = (byte *)0x0;
  if (*(code **)(param_1 + 0x40) == (code *)0x0) {
    if (*(code **)(param_1 + 0x48) != (code *)0x0) {
      (**(code **)(param_1 + 0x48))(param_2,param_6);
    }
    lVar4 = 0;
  }
  else {
    plVar1 = param_3 + 1;
    (**(code **)(param_1 + 0x40))(param_2,&local_50,&local_58,plVar1);
    uVar5 = 0;
    if (local_50 == 0) goto LAB_00a82cd8;
    lVar4 = local_50;
    if (*plVar1 != 0) {
      lVar4 = FUN_00d5a5c4();
      *plVar1 = lVar4;
      lVar4 = local_50;
    }
  }
  *param_3 = lVar4;
  if (local_58 == (byte *)0x0) {
    uVar6 = 0x811c9dc5;
  }
  else {
    uVar8 = (uint)*local_58;
    uVar6 = 0x811c9dc5;
    pbVar7 = local_58;
    if (*local_58 != 0) {
      do {
        uVar9 = (uint)pbVar7[1];
        uVar6 = (uVar6 ^ uVar8) * 0x1000193;
        uVar8 = uVar9;
        pbVar7 = pbVar7 + 1;
      } while (uVar9 != 0);
    }
  }
  *(uint *)(param_3 + 6) = uVar6;
  uVar5 = 1;
  lVar4 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar4 = param_6;
  }
  param_3[2] = lVar4;
LAB_00a82cd8:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}




void FUN_00a82d04(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x10) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        if (*(code **)(param_1 + 0x60) != (code *)0x0) {
          (**(code **)(param_1 + 0x60))(param_2,auStack_48);
          plVar2 = *(long **)(param_1 + 8);
          uVar4 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x10) == (int)plVar2[1]) {
              uVar4 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 8) = 0;
              uVar4 = 0;
              *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
            }
          }
          FUN_009d3edc(uVar4,"Percent",1,auStack_48);
        }
        if (*(code **)(param_1 + 0x68) != (code *)0x0) {
          local_50 = 0;
          local_54 = 0;
          (**(code **)(param_1 + 0x68))(param_2,&local_50,&local_54,auStack_48);
          plVar2 = *(long **)(param_1 + 8);
          uVar4 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x10) == (int)plVar2[1]) {
              uVar4 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 8) = 0;
              uVar4 = 0;
              *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
            }
          }
          FUN_009d3edc(uVar4,local_50,local_54,auStack_48);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a82e70(long param_1)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x10) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 8);
        uVar1 = *(ushort *)(param_1 + 0xb0);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x10) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 8) = 0;
            uVar4 = 0;
            *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
          }
        }
        if ((uVar1 >> 8 & 1) != 0) {
          FUN_009d3430(uVar4);
          return;
        }
        FUN_009d340c();
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a82f28(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auStack_c8 [16];
  long local_b8;
  long lStack_b0;
  long local_a8;
  undefined8 uStack_a0;
  int local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined1 local_54;
  undefined4 local_53;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar7 = *(long **)(param_1 + 8);
  if (plVar7 == (long *)0x0) goto LAB_00a8335c;
  if (*(int *)(param_1 + 0x10) != (int)plVar7[1]) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
    goto LAB_00a8335c;
  }
  lVar8 = (**(code **)(*plVar7 + 0x10))();
  if (lVar8 == 0) goto LAB_00a8335c;
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00d9e99c(param_3);
  }
  iVar5 = FUN_00a82acc(param_1,uVar4 & 1,param_4);
  if (iVar5 == 0) goto LAB_00a8335c;
  uStack_a0 = 0;
  local_a8 = 0;
  lStack_b0 = 0;
  local_b8 = 0;
  local_94 = 0xffffffff00000000;
  local_84 = 0xff000000;
  local_74 = DAT_03218f40;
  local_7c = _DAT_03218ef8;
  local_6c = DAT_03218f48;
  local_8c = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 2;
  local_54 = 1;
  local_53 = 1;
  local_98 = iVar5;
  FUN_00a82b84(param_1,param_4,&local_b8,param_3,param_2,auStack_c8);
  if (local_53._2_1_ != '\0') {
    plVar7 = *(long **)(param_1 + 8);
    uVar9 = 0;
    if (plVar7 != (long *)0x0) {
      if (*(int *)(param_1 + 0x10) == (int)plVar7[1]) {
        uVar9 = (**(code **)(*plVar7 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 8) = 0;
        uVar9 = 0;
        *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
      }
    }
    FUN_009d3950(local_8c & 0xffffffff,uVar9);
  }
  if (local_b8 == 0) {
    if (local_a8 != 0) {
      plVar7 = *(long **)(param_1 + 8);
      uVar9 = 0;
      if (plVar7 != (long *)0x0) {
        if (*(int *)(param_1 + 0x10) == (int)plVar7[1]) {
          uVar9 = (**(code **)(*plVar7 + 0x10))();
        }
        else {
          *(undefined8 *)(param_1 + 8) = 0;
          uVar9 = 0;
          *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
        }
      }
      FUN_009d3db8(uVar9,local_a8);
    }
  }
  else if (lStack_b0 == 0) {
    plVar7 = *(long **)(param_1 + 8);
    bVar2 = local_8c._4_4_ == -0x7ee3623b;
    bVar3 = local_8c._4_4_ == 0;
    if (plVar7 == (long *)0x0) {
LAB_00a831e8:
      uVar9 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x10) != (int)plVar7[1]) {
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
        goto LAB_00a831e8;
      }
      uVar9 = (**(code **)(*plVar7 + 0x10))();
    }
    if (bVar2 || bVar3) {
      FUN_009d3b70(uVar9,local_b8);
    }
    else {
      FUN_009d3d8c(uVar9,local_b8,(long)&local_8c + 4);
    }
  }
  else {
    plVar7 = *(long **)(param_1 + 8);
    if (plVar7 == (long *)0x0) {
      uVar9 = 0;
    }
    else if (*(int *)(param_1 + 0x10) == (int)plVar7[1]) {
      uVar9 = (**(code **)(*plVar7 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
    }
    lVar8 = local_b8;
    uVar6 = FUN_01995208(lStack_b0);
    FUN_009d3d6c(uVar9,lVar8,uVar6);
  }
  uVar10 = local_68 & 0xffffffff;
  if (((float)local_68 != 0.0) || (local_68._4_4_ != 0.0)) {
    plVar7 = *(long **)(param_1 + 8);
    uVar9 = 0;
    if (plVar7 != (long *)0x0) {
      if (*(int *)(param_1 + 0x10) == (int)plVar7[1]) {
        uVar9 = (**(code **)(*plVar7 + 0x10))();
        uVar10 = local_68 & 0xffffffff;
      }
      else {
        *(undefined8 *)(param_1 + 8) = 0;
        uVar9 = 0;
        *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
      }
    }
    FUN_009d3e40(uVar10,local_68._4_4_,local_60,uVar9,&local_74);
  }
  plVar7 = *(long **)(param_1 + 8);
  uVar9 = 0;
  if (plVar7 != (long *)0x0) {
    if (*(int *)(param_1 + 0x10) == (int)plVar7[1]) {
      uVar9 = (**(code **)(*plVar7 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
    }
  }
  FUN_009d3ebc(uVar9,&local_84);
  plVar7 = *(long **)(param_1 + 8);
  uVar9 = 0;
  if (plVar7 != (long *)0x0) {
    if (*(int *)(param_1 + 0x10) == (int)plVar7[1]) {
      uVar9 = (**(code **)(*plVar7 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
    }
  }
  FUN_009d3ec8(local_84._4_4_,uVar9);
  plVar7 = *(long **)(param_1 + 8);
  uVar9 = 0;
  if (plVar7 != (long *)0x0) {
    if (*(int *)(param_1 + 0x10) == (int)plVar7[1]) {
      uVar9 = (**(code **)(*plVar7 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
    }
  }
  FUN_009d3ed0(uVar9,&local_7c);
  FUN_00a82d04(param_1,param_4);
LAB_00a8335c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

