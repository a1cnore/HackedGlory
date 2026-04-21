// functions/00a1a — 36 functions
#include "libGameKindred.h"




void FUN_00a1a014(void)

{
  uint uVar1;
  
  uVar1 = FUN_009c1050();
  if ((uVar1 & 1) != 0) {
    FUN_009c1044();
    FUN_009c54ec();
    return;
  }
  return;
}




void FUN_00a1a038(void)

{
  FUN_009c1044();
  FUN_009c5624();
  return;
}




void FUN_00a1a04c(void)

{
  FUN_009c1044();
  FUN_009c5694();
  return;
}




void FUN_00a1a060(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009c1044();
  FUN_009c5578(uVar1,*(undefined4 *)(param_1 + 0xc));
  return;
}




void FUN_00a1a084(void)

{
  FUN_009c1044();
  FUN_009c55c8();
  return;
}




void FUN_00a1a098(long param_1)

{
  long lVar1;
  
  FUN_00cedce4();
  lVar1 = FUN_00d9e390();
  if (lVar1 != 0) {
    FUN_00d5df74(lVar1,*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}




void FUN_00a1a0d0(void)

{
  long lVar1;
  
  FUN_00cedce4();
  lVar1 = FUN_00d9e390();
  if (lVar1 != 0) {
    FUN_00d5e050();
    return;
  }
  return;
}




ulong FUN_00a1a0f4(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  char *pcVar8;
  byte *pbVar9;
  ulong uVar10;
  
  uVar4 = 0;
  do {
    uVar3 = (uint)uVar4;
    pcVar8 = (char *)(param_1 + (uVar4 & 0xffff) + 0x98);
    if (*pcVar8 == '\0') {
      uVar5 = 1;
      *pcVar8 = '\x01';
      lVar1 = param_1 + (uVar4 & 0xffff) * 2;
      uVar7 = (uint)*(ushort *)(lVar1 + 0x78);
      if (((uVar7 ^ 0xffffffff) & 0xffff) != 0) {
        uVar5 = uVar7 + 1;
      }
      *(short *)(lVar1 + 0x78) = (short)uVar5;
      if ((uVar5 & 0xffff) != 0) {
        uVar6 = 0;
        pbVar9 = (byte *)(param_1 + (ulong)(uVar3 >> 3));
        do {
          uVar10 = uVar6 >> 3 & 0x1fffffff;
          uVar7 = 1 << (ulong)((uint)uVar6 & 7);
          bVar2 = (byte)(1 << (ulong)(uVar3 & 7));
          if ((uVar7 & *(byte *)(param_2 + uVar10)) != 0) {
            *pbVar9 = *pbVar9 | bVar2;
          }
          if ((uVar7 & *(byte *)(param_2 + uVar10 + 4)) != 0) {
            pbVar9[0x3c] = pbVar9[0x3c] | bVar2;
          }
          uVar6 = uVar6 + 1;
          pbVar9 = pbVar9 + 2;
        } while (uVar6 != 0x1e);
        uVar6 = ((ulong)uVar5 & 0xffff) << 0x10;
        goto LAB_00a1a1bc;
      }
      goto LAB_00a1a1b8;
    }
    uVar4 = (ulong)(uVar3 + 1);
  } while ((uVar3 + 1 & 0xffff) < 0x10);
  uVar4 = 0;
LAB_00a1a1b8:
  uVar6 = 0;
LAB_00a1a1bc:
  return uVar6 | uVar4 & 0xffff;
}




void FUN_00a1a1c8(long param_1,ushort *param_2,long param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (((param_2[1] != 0) && (*(char *)(param_1 + (ulong)*param_2 + 0x98) != '\0')) &&
     (*(ushort *)(param_1 + (ulong)*param_2 * 2 + 0x78) == param_2[1])) {
    uVar3 = 0;
    do {
      uVar4 = uVar3 >> 3 & 0x1fffffff;
      uVar2 = 1 << (ulong)((uint)uVar3 & 7);
      if ((uVar2 & *(byte *)(param_3 + uVar4)) != 0) {
        uVar5 = (ulong)(*param_2 >> 3);
        *(byte *)(param_1 + uVar5) = *(byte *)(param_1 + uVar5) | (byte)(1 << (ulong)(*param_2 & 7))
        ;
      }
      if ((uVar2 & *(byte *)(param_4 + uVar4)) != 0) {
        uVar5 = (ulong)(*param_2 >> 3);
        *(byte *)(param_1 + uVar5) =
             *(byte *)(param_1 + uVar5) & ((byte)(1 << (ulong)(*param_2 & 7)) ^ 0xff);
      }
      if ((uVar2 & *(byte *)(param_3 + uVar4 + 4)) != 0) {
        lVar1 = param_1 + (ulong)(*param_2 >> 3);
        *(byte *)(lVar1 + 0x3c) = *(byte *)(lVar1 + 0x3c) | (byte)(1 << (ulong)(*param_2 & 7));
      }
      if ((uVar2 & *(byte *)(param_4 + uVar4 + 4)) != 0) {
        lVar1 = param_1 + (ulong)(*param_2 >> 3);
        *(byte *)(lVar1 + 0x3c) =
             *(byte *)(lVar1 + 0x3c) & ((byte)(1 << (ulong)(*param_2 & 7)) ^ 0xff);
      }
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 2;
    } while (uVar3 != 0x1e);
  }
  return;
}




void FUN_00a1a2c0(long param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  long lVar4;
  
  if (((param_2 != 0) &&
      (pcVar3 = (char *)(param_1 + (ulong)(ushort)param_2 + 0x98), *pcVar3 != '\0')) &&
     ((uint)*(ushort *)(param_1 + ((ulong)param_2 & 0xffff) * 2 + 0x78) == param_2 >> 0x10)) {
    lVar4 = 0;
    bVar2 = ~(byte)(1 << (ulong)(param_2 & 7));
    do {
      pbVar1 = (byte *)(param_1 + (((ulong)param_2 & 0xfff8) >> 3) + lVar4);
      lVar4 = lVar4 + 2;
      *pbVar1 = *pbVar1 & bVar2;
      pbVar1[0x3c] = pbVar1[0x3c] & bVar2;
    } while (lVar4 != 0x3c);
    *pcVar3 = '\0';
  }
  return;
}




undefined8 FUN_00a1a334(long param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + (ulong)*(uint *)(param_2 + 1) * 2) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + (ulong)*(uint *)(param_2 + 1) * 2 + 0x3c) != '\0') {
    return 0;
  }
  (**(code **)*param_2)(param_2);
  return 1;
}




void FUN_00a1a384(long param_1,undefined8 param_2)

{
  FUN_008ff080();
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_008ff0a0(param_1);
  return;
}




void FUN_00a1a3b0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00a1a3b8(undefined8 param_1)

{
  FUN_008ff0a0();
  FUN_008ff0b8(param_1,0);
  return;
}




void FUN_00a1a3e0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [56];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_008ff0d4();
  if (iVar2 == 1) {
    uVar3 = FUN_008ff0e4(param_1);
    FUN_00984c90(auStack_60,uVar3);
  }
  else {
    uVar3 = FUN_008ff0dc(param_1);
    FUN_00cfdfa8(auStack_60,uVar3);
  }
  FUN_00ce20fc(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a1a464(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_008ff0d4(param_2);
  if (iVar2 == 1) {
    uVar3 = FUN_008ff0e4(param_2);
    FUN_00984cdc(auStack_70,param_1,uVar3);
  }
  else {
    uVar3 = FUN_008ff0dc(param_2);
    FUN_00cfdfe8(auStack_70,param_1,uVar3);
  }
  FUN_00ce20fc(auStack_70);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8
FUN_00a1a500(long param_1,undefined4 param_2,undefined4 param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar5 = FUN_00a15720(*(undefined8 *)(param_1 + 0x10));
  FUN_008ff0a0(param_1);
  if ((param_4 & 1) == 0) {
    uVar6 = FUN_00d9eae0(uVar5);
    uVar3 = FUN_00d73500(uVar6,param_2);
    uVar4 = FUN_00d73d84(uVar6,param_2);
    FUN_008ff0c0(param_1,param_2);
  }
  else {
    uVar6 = FUN_00d9eb38();
    uVar3 = FUN_00d53ba4(uVar6,param_2);
    uVar4 = FUN_00d54580(uVar6,param_2);
    FUN_008ff0b8(param_1,param_2);
    FUN_008ff0cc(param_1,param_3);
  }
  bVar2 = FUN_00a1bcec();
  uVar1 = 2;
  if ((bVar2 & uVar3 < 2) == 0) {
    uVar1 = uVar3;
  }
  switch(uVar1) {
  case 0:
    lVar8 = FUN_00a13ecc(*(undefined8 *)(param_1 + 0x10));
    if ((lVar8 == 0) || ((*(uint *)(lVar8 + 0x2f4) & uVar4) == 0)) {
      FUN_00a1fdd4("HUD_NOTICE_CANTACTIVATE_PRESELECT");
      return 0;
    }
    break;
  case 1:
    lVar8 = FUN_00a13ecc(*(undefined8 *)(param_1 + 0x10));
    if ((lVar8 == 0) || ((*(uint *)(lVar8 + 0x2f4) & uVar4) == 0)) {
      uVar7 = FUN_0092e8b4();
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      goto switchD_00a1a5e8_caseD_2;
    }
    break;
  case 2:
  case 3:
switchD_00a1a5e8_caseD_2:
    uVar7 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 0x10) + 0x218))
                      (*(long *)(param_1 + 0x10) + 0x218,uVar5,param_1,param_5 & 1);
    if ((uVar7 & 1) != 0) {
      FUN_00a1a6b4(param_1,param_5 & 1);
      return 1;
    }
    return 0;
  case 4:
    FUN_00a1a3e0(param_1);
  default:
    goto LAB_00a1a688;
  }
  FUN_00a1a464(*(undefined4 *)(lVar8 + 0x260),param_1);
LAB_00a1a688:
  return 0;
}




void FUN_00a1a6b4(long param_1,ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_00a1bcec();
  if (((uVar3 & 1) != 0) && ((param_2 & 1) == 0)) {
    iVar1 = FUN_008ff0d4(param_1);
    if (iVar1 == 1) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      uVar2 = FUN_008ff0e4(param_1);
      FUN_009c752c(uVar4,uVar2);
      return;
    }
    if (iVar1 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      uVar2 = FUN_008ff0ec(param_1);
      FUN_009c751c(uVar4,uVar2);
      return;
    }
  }
  return;
}




void FUN_00a1a734(long param_1)

{
  FUN_00a1fac8(*(long *)(param_1 + 0x10) + 0x218,0);
  return;
}




undefined8 FUN_00a1a744(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_00a15720(*(undefined8 *)(param_1 + 0x10));
  iVar1 = FUN_008ff0d4(param_1);
  if (iVar1 == 0) {
    uVar3 = FUN_00d9eb38(uVar3);
    uVar2 = FUN_008ff0dc(param_1);
    uVar4 = FUN_00d53914(uVar3,uVar2);
  }
  else {
    iVar1 = FUN_008ff0d4(param_1);
    uVar4 = 0;
    if (iVar1 == 1) {
      uVar3 = FUN_00d9eae0(uVar3);
      uVar2 = FUN_008ff0e4(param_1);
      uVar4 = FUN_00d73560(uVar3,uVar2);
    }
  }
  return uVar4;
}




void FUN_00a1a7d0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = DAT_03214ce8;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar1;
  return;
}




void FUN_00a1a7f8(void)

{
  return;
}




void FUN_00a1a7fc(long *param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = FUN_00d5bae0(param_2);
  if (lVar3 != 0) {
    plVar4 = (long *)*param_1;
    if (plVar4 != (long *)0x0) {
      if ((int)param_1[1] == (int)plVar4[1]) {
        (**(code **)(*plVar4 + 0x10))();
        plVar4 = (long *)FUN_00d5bae0();
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x40))();
        }
      }
      else {
        *param_1 = 0;
        *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
      }
    }
    plVar4 = (long *)FUN_00d5bae0(param_2);
    (**(code **)(*plVar4 + 0x38))();
    uVar2 = DAT_03214ce8;
    iVar1 = *(int *)(param_2 + 0x30);
    lVar3 = param_1[2];
    *param_1 = param_2 + 0x28;
    *(int *)(param_1 + 1) = iVar1;
    if (lVar3 != 0) {
      if ((int)param_1[3] == *(int *)(lVar3 + 8)) {
        if ((lVar3 != param_2 + 0x28) || (iVar1 != (int)param_1[3])) {
          FUN_00a1a8ec(param_1,0);
          return;
        }
      }
      else {
        param_1[2] = 0;
        *(undefined4 *)(param_1 + 3) = uVar2;
      }
    }
  }
  return;
}




void FUN_00a1a8ec(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 == 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    if (plVar2 == (long *)0x0) goto LAB_00a1a980;
  }
  else {
    plVar2 = (long *)(param_2 + 0x28);
    if (*(long **)(param_1 + 0x10) != plVar2) {
      return;
    }
    if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x30)) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x18) == (int)plVar2[1]) {
    (**(code **)(*plVar2 + 0x10))();
    plVar2 = (long *)FUN_00d5bae0();
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x50))();
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 0x18) = DAT_03214ce8;
  }
LAB_00a1a980:
  iVar1 = DAT_03214ce8;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}




void FUN_00a1a9a0(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_00d5bae0(param_2);
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0x10);
    if (plVar3 != (long *)0x0) {
      if (*(int *)(param_1 + 0x18) == (int)plVar3[1]) {
        (**(code **)(*plVar3 + 0x10))();
        plVar3 = (long *)FUN_00d5bae0();
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x50))();
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
      }
    }
    plVar3 = (long *)FUN_00d5bae0(param_2);
    (**(code **)(*plVar3 + 0x48))();
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    *(long *)(param_1 + 0x10) = param_2 + 0x28;
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  return;
}




void FUN_00a1aa40(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_00d5bae0(param_2);
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0x20);
    if (plVar3 != (long *)0x0) {
      if (*(int *)(param_1 + 0x28) == (int)plVar3[1]) {
        (**(code **)(*plVar3 + 0x10))();
        plVar3 = (long *)FUN_00d5bae0();
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x60))();
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x28) = DAT_03214ce8;
      }
    }
    plVar3 = (long *)FUN_00d5bae0(param_2);
    (**(code **)(*plVar3 + 0x58))();
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    *(long *)(param_1 + 0x20) = param_2 + 0x28;
    *(undefined4 *)(param_1 + 0x28) = uVar1;
  }
  return;
}




void FUN_00a1aae0(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 == 0) {
    plVar2 = (long *)*param_1;
    if (plVar2 == (long *)0x0) goto LAB_00a1ab7c;
  }
  else {
    plVar2 = (long *)(param_2 + 0x28);
    if ((long *)*param_1 != plVar2) {
      return;
    }
    if ((int)param_1[1] != *(int *)(param_2 + 0x30)) {
      return;
    }
  }
  if ((int)param_1[1] == (int)plVar2[1]) {
    (**(code **)(*plVar2 + 0x10))();
    plVar2 = (long *)FUN_00d5bae0();
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x40))();
    }
  }
  else {
    *param_1 = 0;
    *(int *)(param_1 + 1) = DAT_03214ce8;
  }
LAB_00a1ab7c:
  iVar1 = DAT_03214ce8;
  *param_1 = 0;
  *(int *)(param_1 + 1) = iVar1;
  return;
}




void FUN_00a1ab9c(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 == 0) {
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 == (long *)0x0) goto LAB_00a1ac30;
  }
  else {
    plVar2 = (long *)(param_2 + 0x28);
    if (*(long **)(param_1 + 0x20) != plVar2) {
      return;
    }
    if (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x30)) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x28) == (int)plVar2[1]) {
    (**(code **)(*plVar2 + 0x10))();
    plVar2 = (long *)FUN_00d5bae0();
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x60))();
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(int *)(param_1 + 0x28) = DAT_03214ce8;
  }
LAB_00a1ac30:
  iVar1 = DAT_03214ce8;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(int *)(param_1 + 0x28) = iVar1;
  return;
}




void FUN_00a1ac50(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar1[1]) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)FUN_00d5bae0();
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x40))();
      }
    }
    else {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
    }
  }
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    if ((int)param_1[3] == (int)plVar1[1]) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)FUN_00d5bae0();
      if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a1acec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x50))();
        return;
      }
    }
    else {
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 3) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00a1ad10(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar1[1]) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)FUN_00d5bae0();
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
    }
    else {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
    }
  }
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    if ((int)param_1[3] == (int)plVar1[1]) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)FUN_00d5bae0();
      if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a1adac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x48))();
        return;
      }
    }
    else {
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 3) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00a1add0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x30);
  FUN_00a1ae44();
  DAT_03130e00 = pvVar1;
  return;
}




void FUN_00a1ae00(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_03130e00;
  if (DAT_03130e00 != (void *)0x0) {
    FUN_00a1af64(DAT_03130e00);
    operator_delete(pvVar1);
  }
  DAT_03130e00 = (void *)0x0;
  return;
}




undefined8 FUN_00a1ae38(void)

{
  return DAT_03130e00;
}




void FUN_00a1ae44(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00e70314(param_1 + 3);
  param_1[5] = 0x4100000000000000;
  uVar1 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar1,param_1,0x2e4f13dd,FUN_00a1ae94,0);
  return;
}




void FUN_00a1af64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00a1ffc0();
  FUN_00e6ec98(uVar1,param_1);
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}




void FUN_00a1af9c(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  timespec local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = clock_gettime(1,&local_48);
  lVar4 = local_48.tv_nsec - *(long *)(param_1 + 0x20);
  lVar3 = local_48.tv_sec - *(long *)(param_1 + 0x18);
  if (lVar4 < 0) {
    lVar3 = lVar3 + -1;
    lVar4 = (local_48.tv_nsec + 1000000000) - *(long *)(param_1 + 0x20);
  }
  fVar6 = *(float *)(param_1 + 0x2c);
  if ((double)fVar6 < (double)(lVar4 + lVar3 * 1000000000) * 1e-09) {
    if (*(uint *)(param_1 + 0x28) < 4) {
      fVar5 = (float)FUN_01988c78(iVar2);
      fVar6 = fVar6 + fVar5 * -0.2;
      if (fVar6 <= 8.0) {
        fVar6 = 8.0;
      }
    }
    else {
      fVar6 = (float)NEON_fminnm(fVar6 + 6.0,0x42200000);
    }
    *(float *)(param_1 + 0x2c) = fVar6;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

