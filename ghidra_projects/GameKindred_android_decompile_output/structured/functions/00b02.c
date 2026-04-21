// functions/00b02 — 19 functions
#include "libGameKindred.h"




undefined8 * FUN_00b0272c(long param_1,byte *param_2)

{
  ulong uVar1;
  int iVar2;
  size_t sVar3;
  undefined8 *puVar4;
  char *__s;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x9f0);
  if ((lVar6 != 0) && (puVar4 = (undefined8 *)**(long **)(lVar6 + 8), puVar4 != (undefined8 *)0x0))
  {
    lVar5 = 8;
    do {
      __s = (char *)*puVar4;
      sVar3 = strlen(__s);
      uVar1 = (ulong)(*param_2 >> 1);
      if ((*param_2 & 1) != 0) {
        uVar1 = *(ulong *)(param_2 + 8);
      }
      if (sVar3 == uVar1) {
        iVar2 = FUN_0090d610(param_2,0,0xffffffffffffffff,__s,sVar3);
        if (iVar2 == 0) {
          return puVar4;
        }
        lVar6 = *(long *)(param_1 + 0x9f0);
      }
      puVar4 = *(undefined8 **)(*(long *)(lVar6 + 8) + lVar5);
      lVar5 = lVar5 + 8;
    } while (puVar4 != (undefined8 *)0x0);
  }
  return (undefined8 *)0x0;
}




void FUN_00b027d8(undefined8 param_1,undefined8 param_2,long param_3,float *param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(float *)(param_3 + 0x480) != *param_4) || (*(float *)(param_3 + 0x484) != param_4[1])) {
    *(undefined8 *)(param_3 + 0x480) = *(undefined8 *)param_4;
    FUN_0091ada4(param_3 + 0x438);
  }
  lVar1 = param_3 + 0x88;
  FUN_00f01980(lVar1);
  uVar2 = FUN_00efed6c(param_2);
  FUN_00f022a0(lVar1,uVar2);
  uVar2 = FUN_00eff63c(*param_4,param_4[1],param_1,FUN_00ab3980);
  FUN_00f022a0(lVar1,uVar2);
  if ((*(float *)(param_3 + 0x480) == *param_4) && (*(float *)(param_3 + 0x484) == param_4[1])) {
    return;
  }
  *(undefined8 *)(param_3 + 0x480) = *(undefined8 *)param_4;
  FUN_0091ada4(param_3 + 0x438);
  return;
}




void FUN_00b028dc(long param_1,uint param_2)

{
  FUN_00b09454(param_1 + 0x438,param_2 & 1);
  return;
}




void FUN_00b028e8(long param_1)

{
  FUN_00f13e54(param_1 + 0x438);
  return;
}




void FUN_00b028f0(long param_1)

{
  FUN_00f01c20(param_1 + 0x438);
  return;
}




void FUN_00b028f8(undefined8 param_1,ulong param_2)

{
  char *pcVar1;
  long lVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pcVar1 = "IDLE_OPEN";
  if ((param_2 & 1) == 0) {
    pcVar1 = "IDLE_CLOSED";
  }
  FUN_008fa54c(local_40,pcVar1);
  FUN_00b013a0(0xbf800000,param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b0297c(long param_1)

{
  FUN_00af97f4(param_1 + 0x88,1);
  FUN_00afa680(param_1 + 0x88);
  return;
}




void FUN_00b029ac(long param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  FUN_00afd018(param_1 + 0x730,pbVar1);
  return;
}




void FUN_00b029c4(long param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  FUN_00afd1b0(param_1 + 0x730,pbVar1);
  return;
}




void FUN_00b029dc(long param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  FUN_00afd20c(param_1 + 0x730,pbVar1);
  return;
}




void FUN_00b029f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027db428;
  if ((*(byte *)(param_1 + 0x13b) & 1) != 0) {
    operator_delete((void *)param_1[0x13d]);
  }
  if ((*(byte *)(param_1 + 0x138) & 1) != 0) {
    operator_delete((void *)param_1[0x13a]);
  }
  if ((*(byte *)(param_1 + 0x135) & 1) != 0) {
    operator_delete((void *)param_1[0x137]);
  }
  FUN_00b01800(param_1 + 0x122);
  FUN_00afc0a4(param_1 + 0xe6);
  FUN_00f01868(param_1 + 0xd5);
  FUN_009c825c(param_1 + 0x87);
  FUN_00af8c0c(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00b02a7c(void *param_1)

{
  FUN_00b029f4();
  operator_delete(param_1);
  return;
}




void FUN_00b02aa0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027db530;
  FUN_00f017e8(plVar1);
  lVar2 = 0x110;
  do {
    FUN_00f0d160((long)param_1 + lVar2);
    lVar2 = lVar2 + 0x130;
  } while (lVar2 != 0x370);
  *(byte *)(param_1 + 0x6e) = *(byte *)(param_1 + 0x6e) & 0xf8 | 4;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x22,1);
  FUN_00f023ec(plVar1,param_1 + 0x48,1);
  *(uint *)((long)param_1 + 0x194) = *(uint *)((long)param_1 + 0x194) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x2c4) = *(uint *)((long)param_1 + 0x2c4) & 0xffffffbf;
  return;
}




void FUN_00b02b60(long param_1,float *param_2)

{
  if ((*(float *)(param_1 + 0x50) != *param_2) || (*(float *)(param_1 + 0x54) != param_2[1])) {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)param_2;
    FUN_0091ada4(param_1);
  }
  (**(code **)(*(long *)(param_1 + 0x110) + 0x28))(param_1 + 0x110,param_2);
                    /* WARNING: Could not recover jumptable at 0x00b02bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x240) + 0x28))(param_1 + 0x240,param_2);
  return;
}




void FUN_00b02bd4(long param_1)

{
  param_1 = param_1 + ((ulong)*(byte *)(param_1 + 0x370) & 1) * 0x130;
                    /* WARNING: Could not recover jumptable at 0x00b02bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x110) + 0x48))(param_1 + 0x110);
  return;
}




void FUN_00b02bf4(undefined8 param_1,long param_2)

{
  (**(code **)(*(long *)(param_2 + 0x110) + 0x40))(param_2 + 0x110);
                    /* WARNING: Could not recover jumptable at 0x00b02c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x240) + 0x40))(param_1,param_2 + 0x240);
  return;
}




void FUN_00b02c3c(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = (ulong)*(byte *)(param_1 + 0x370) & 1;
  uVar2 = (uint)uVar7 ^ 1;
  lVar6 = param_1 + uVar7 * 0x130;
  *(byte *)(param_1 + 0x370) = (byte)uVar2 | *(byte *)(param_1 + 0x370) & 0xfe;
  lVar1 = lVar6 + 0x110;
  uVar4 = FUN_00f08be8(lVar6 + 0x1e0);
  uVar7 = FUN_00e70b34(uVar4,&DAT_03210450);
  uVar3 = 0;
  if ((uVar7 & 1) != 0) {
    uVar4 = FUN_00f08be8(param_1 + (ulong)uVar2 * 0x130 + 0x1e0);
    uVar3 = FUN_00e70b34(uVar4,&DAT_03210450);
  }
  lVar5 = param_1 + (ulong)uVar2 * 0x130;
  lVar6 = lVar5 + 0x110;
  (**(code **)(*(long *)(lVar5 + 0x110) + 0x138))(lVar6,param_2);
  if ((uVar3 & 1) != 0) {
switchD_00b02d08_caseD_0:
    FUN_00b02d74(lVar1,lVar6);
    return;
  }
  if (param_3 == 0) {
    param_3 = *(byte *)(param_1 + 0x370) >> 1 & 3;
  }
  switch(param_3) {
  case 0:
  case 1:
    goto switchD_00b02d08_caseD_0;
  case 2:
    FUN_00b02dfc(lVar1,lVar6);
    return;
  case 3:
    FUN_00b03060(lVar1,lVar6);
    return;
  default:
    return;
  }
}




void FUN_00b02d74(long param_1,long param_2)

{
  uint uVar1;
  
  FUN_00f01980();
  uVar1 = *(uint *)(param_1 + 0x84);
  *(uint *)(param_1 + 0x84) = uVar1 & 0xfffffffb;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = uVar1 & 0xffff807b;
    FUN_0091ada4(param_1);
  }
  FUN_00f01980(param_2);
  uVar1 = *(uint *)(param_2 + 0x84);
  *(uint *)(param_2 + 0x84) = uVar1 | 4;
  if ((~uVar1 & 0x7f80) == 0) {
    return;
  }
  *(uint *)(param_2 + 0x84) = uVar1 | 0x7f84;
  FUN_0091ada4(param_2);
  return;
}




void FUN_00b02dfc(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  FUN_00f01980();
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efdd74(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar4);
  FUN_00efcac4(0x3e19999a,puVar4);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_02825148;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00f02308(param_1,puVar4,puVar5,0);
  FUN_00f01980(param_2);
  uVar1 = *(uint *)(param_2 + 0x84);
  *(uint *)(param_2 + 0x84) = uVar1 | 4;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x84) = uVar1 & 0xffff807f | 4;
    FUN_0091ada4(param_2);
  }
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efdd74(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efddc4(0x3f800000,puVar4);
  FUN_00efcac4(0x3e19999a,puVar4);
  FUN_00f02308(param_2,puVar4,0);
  return;
}

