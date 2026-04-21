// functions/00c38 — 53 functions
#include "libGameKindred.h"




void FUN_00c38040(long param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_00f023ec(param_1 + 0x170,param_2,1);
    return;
  }
  return;
}




void FUN_00c38054(long param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_00f023ec(param_1 + 0x228,param_2,1);
    return;
  }
  return;
}




void FUN_00c38068(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  timespec local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00f0490c(param_2);
  clock_gettime(1,&local_68);
  lVar8 = local_68.tv_nsec - *(long *)(param_1 + 0x638);
  lVar7 = local_68.tv_sec - *(long *)(param_1 + 0x630);
  if (lVar8 < 0) {
    lVar7 = lVar7 + -1;
    lVar8 = (local_68.tv_nsec + 1000000000) - *(long *)(param_1 + 0x638);
  }
  lVar9 = *(long *)(param_1 + 0x640);
  uVar2 = clock_gettime(1,&local_68);
  uVar3 = (ulong)uVar2;
  lVar6 = local_68.tv_nsec - *(long *)(param_1 + 0x638);
  lVar5 = local_68.tv_sec - *(long *)(param_1 + 0x630);
  if (lVar6 < 0) {
    lVar5 = lVar5 + -1;
    lVar6 = (local_68.tv_nsec + 1000000000) - *(long *)(param_1 + 0x638);
  }
  *(long *)(param_1 + 0x640) = (long)((double)(lVar6 + lVar5 * 1000000000) * 1e-09);
  if ((*(byte *)(param_1 + 0x84) >> 4 & 1) != 0) {
    if (((0 < (long)((double)(lVar8 + lVar7 * 1000000000) * 1e-09 - (double)lVar9)) &&
        (uVar2 = *(ushort *)(param_1 + 0x2f0) & 0x1f, uVar2 != 0x1f)) &&
       (uVar2 = (uint)*(ushort *)(param_1 + (ulong)uVar2 * 0x38 + 0x2f8), uVar2 - 1 < 5)) {
      uVar3 = param_1 + 0x2f0;
      switch(uVar2) {
      case 1:
        if ((*(char *)(param_1 + 0x628) != '\0') || (*(char *)(param_1 + 0x62a) == '\0'))
        goto LAB_00c381d0;
        uVar4 = 2;
        break;
      case 2:
        if (*(char *)(param_1 + 0x628) != '\0') goto LAB_00c381d0;
        uVar4 = 1;
        break;
      case 3:
        uVar4 = 4;
        break;
      default:
        uVar4 = 3;
      }
      uVar3 = FUN_00c37adc(uVar3,uVar4,0,0);
    }
  }
LAB_00c381d0:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c38200(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  FUN_00c3791c(param_1 + 0x458,0,0,0);
  uVar2 = FUN_00f02540(param_1);
  if ((uVar2 & 1) != 0) {
    FUN_00f01a4c(param_1,1);
  }
  *(undefined8 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x510) = 0;
  *(undefined8 *)(param_1 + 0x520) = _DAT_03218ef8;
  uVar1 = DAT_03218f00;
  *(undefined1 *)(param_1 + 0x629) = 0;
  *(undefined8 *)(param_1 + 0x528) = uVar1;
  return;
}




void FUN_00c38274(long param_1)

{
  FUN_00c3791c(param_1 + 0x458,1,0,0);
  return;
}




void FUN_00c38288(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [32];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00f048a4("ZoomIn");
  FUN_00f048e0(auStack_78,uVar3,0);
  FUN_00f04760(*(undefined8 *)(param_1 + 0x2e8),auStack_78,1);
  FUN_00f01980(param_1);
  FUN_00c3791c(param_1 + 0x458,2,0,0);
  *(uint *)(param_1 + 0x5b4) = *(uint *)(param_1 + 0x5b4) | 4;
  (**(code **)(**(long **)(param_1 + 0x2e8) + 0x170))();
  *(undefined8 *)(param_1 + 0x528) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x520) = *(undefined8 *)(param_1 + 0x40);
  FUN_00f00298(&local_88,(ulong)&local_88 | 4);
  fVar9 = (float)local_88 * 0.5;
  fVar10 = (float)((ulong)local_88 >> 0x20) * 0.5;
  local_88 = CONCAT44(fVar10,fVar9);
  FUN_00f0036c(&local_80,(ulong)&local_80 | 4);
  lVar4 = FUN_00965ecc(param_1);
  lVar2 = DAT_03210d00;
  local_80 = CONCAT44((fVar10 - (float)((ulong)*(undefined8 *)(lVar4 + 8) >> 0x20) /
                                (float)((ulong)local_80 >> 0x20)) +
                      (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20),
                      (fVar9 - (float)*(undefined8 *)(lVar4 + 8) / (float)local_80) +
                      (float)*(undefined8 *)(param_1 + 0x40));
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efdc08(puVar6);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efdc50(puVar6,&local_80);
  FUN_00efcac4(0x3ecccccd,puVar6);
  FUN_00efcb24(puVar6,FUN_009a7608);
  lVar2 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efe530(puVar7);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  local_90 = 0x4000000040000000;
  FUN_00efe58c(puVar7,&local_90);
  FUN_00efcac4(0x3ecccccd,puVar7);
  FUN_00efcb24(puVar7,FUN_009a7608);
  lVar2 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcd98(puVar8);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efce98(puVar8,puVar7,puVar6);
  FUN_00f022a0(param_1,puVar8);
  FUN_00aa12a8(0x3f800000,"build://Sounds/Cards/my_cards_flip.mp3",0,0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c385cc(long param_1)

{
  FUN_00c37adc(param_1 + 0x2f0,1,0,0);
  (**(code **)(**(long **)(param_1 + 0x2e8) + 0x178))();
  FUN_00aa12a8(0x3f800000,"build://Sounds/Cards/my_cards_return.mp3",0,0);
  *(undefined1 *)(param_1 + 0x628) = 0;
  return;
}




void FUN_00c38628(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = thunk_FUN_00c385cc;
  local_38 = param_2;
  FUN_00f02e98(0xbf800000,&local_38,0,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c38688(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x628) = 1;
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
    FUN_00efe530(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efe58c(puVar4,param_1 + 0x528);
  *(undefined8 *)(param_1 + 0x528) = _DAT_03218ef8;
  FUN_00efcac4(0x3e99999a,puVar4);
  FUN_00efcb24(puVar4,FUN_009a7608);
  local_60 = *(undefined8 *)(param_1 + 0x520);
  *(undefined8 *)(param_1 + 0x520) = _DAT_03218ef8;
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
    FUN_00efdc08(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efdc50(puVar5,&local_60);
  FUN_00efcac4(0x3e99999a,puVar5);
  FUN_00efcb24(puVar5,FUN_009a7608);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcd98(puVar6);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efce98(puVar6,puVar4,puVar5);
  FUN_00f022a0(param_1,puVar6);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c27b8;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  *(code **)(puVar4 + 8) = FUN_00c38628;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  FUN_00f022a0(param_1,puVar4);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c389d8(long param_1)

{
  long *plVar1;
  float fVar2;
  
  FUN_00c3791c(param_1 + 0x458,2,0,0);
  plVar1 = *(long **)(param_1 + 0x2e8);
  fVar2 = *(float *)(param_1 + 0x450);
  *(uint *)(param_1 + 0x5b4) = *(uint *)(param_1 + 0x5b4) | 4;
  if ((*(float *)(plVar1 + 9) != fVar2) || (*(float *)((long)plVar1 + 0x4c) != fVar2)) {
    *(float *)(plVar1 + 9) = fVar2;
    *(float *)((long)plVar1 + 0x4c) = fVar2;
    FUN_0091ada4();
    plVar1 = *(long **)(param_1 + 0x2e8);
  }
                    /* WARNING: Could not recover jumptable at 0x00c38a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x168))();
  return;
}




void FUN_00c38a48(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x2e8) + 0x158))(0x3e4ccccd,*(long **)(param_1 + 0x2e8),0);
  *(undefined1 *)(param_1 + 0x629) = 1;
  return;
}




void FUN_00c38a88(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)((long)param_1 + 0x629) == '\0') {
    (**(code **)(*(long *)param_1[0x5d] + 0x158))(0x3e4ccccd,(long *)param_1[0x5d],1);
    *(undefined1 *)((long)param_1 + 0x629) = 1;
  }
  *(uint *)((long)param_1 + 0x5b4) = *(uint *)((long)param_1 + 0x5b4) & 0xfffffffb;
  uVar2 = FUN_00f048a4("FinishedInspecting");
  FUN_00f048e0(auStack_58,uVar2,0);
  FUN_00f04760(param_1[0x5d],auStack_58,1);
  FUN_00aa12a8(0x3f800000,"build://Sounds/Cards/my_cards_return.mp3",0,0);
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c38b60(void)

{
  return;
}




void FUN_00c38b64(void)

{
  return;
}




void FUN_00c38b68(void)

{
  return;
}




void FUN_00c38b6c(void)

{
  return;
}




void FUN_00c38b70(void)

{
  return;
}




void FUN_00c38b74(void)

{
  return;
}




void FUN_00c38b78(void)

{
  return;
}




void FUN_00c38b7c(void)

{
  return;
}




void FUN_00c38b80(void)

{
  return;
}




void FUN_00c38b84(void)

{
  return;
}




void FUN_00c38b88(void)

{
  return;
}




void FUN_00c38b8c(void)

{
  return;
}




void FUN_00c38b90(void)

{
  return;
}




void FUN_00c38b94(void)

{
  return;
}




undefined8 FUN_00c38b98(void)

{
  return 0;
}




void FUN_00c38ba0(void)

{
  return;
}




undefined8 FUN_00c38ba4(void)

{
  return 1;
}




void FUN_00c38bac(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x450) = param_1;
  return;
}




void FUN_00c38bb4(void)

{
  return;
}




void FUN_00c38bb8(void)

{
  return;
}




void thunk_FUN_00c385cc(long param_1)

{
  FUN_00c37adc(param_1 + 0x2f0,1,0,0);
  (**(code **)(**(long **)(param_1 + 0x2e8) + 0x178))();
  FUN_00aa12a8(0x3f800000,"build://Sounds/Cards/my_cards_return.mp3",0,0);
  *(undefined1 *)(param_1 + 0x628) = 0;
  return;
}




void FUN_00c38bc0(undefined8 *param_1)

{
  FUN_00c37198();
  *param_1 = &PTR_FUN_027faa58;
  param_1[0xc9] = 0;
  param_1[0xcd] = 0;
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  return;
}




void FUN_00c38c0c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027faa58;
  if ((long *)param_1[0xcb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xcb] + 8))();
  }
  param_1[0xcb] = 0;
  if ((long *)param_1[0xcc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xcc] + 8))();
  }
  param_1[0xcc] = 0;
  lVar1 = FUN_00a07af0();
  if (lVar1 != 0) {
    lVar2 = FUN_00a07af0();
    lVar4 = (ulong)*(uint *)(lVar2 + 0x38) << 5;
    lVar1 = *(long *)(lVar2 + 0x40);
    do {
      lVar3 = lVar1;
      if (lVar4 == 0) goto LAB_00c38c94;
      lVar4 = lVar4 + -0x20;
      lVar1 = lVar3 + 0x20;
    } while (*(undefined8 **)(lVar3 + 8) != param_1);
    FUN_00be15b0((uint *)(lVar2 + 0x38),lVar3);
LAB_00c38c94:
    lVar2 = FUN_00a07af0();
    lVar4 = (ulong)*(uint *)(lVar2 + 0x28) << 5;
    lVar1 = *(long *)(lVar2 + 0x30);
    do {
      lVar3 = lVar1;
      if (lVar4 == 0) goto LAB_00c38cc4;
      lVar4 = lVar4 + -0x20;
      lVar1 = lVar3 + 0x20;
    } while (*(undefined8 **)(lVar3 + 8) != param_1);
    FUN_00be15b0((uint *)(lVar2 + 0x28),lVar3);
  }
LAB_00c38cc4:
  FUN_00c37c28(param_1);
  return;
}




void FUN_00c38cd4(void *param_1)

{
  FUN_00c38c0c();
  operator_delete(param_1);
  return;
}




void FUN_00c38cf8(long param_1,undefined8 param_2,byte param_3,undefined4 param_4)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined8 local_68;
  long lStack_60;
  long local_58;
  code *pcStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x66f) == '\0') {
    param_3 = param_3 & 1;
    *(undefined8 *)(param_1 + 0x650) = param_2;
    *(byte *)(param_1 + 0x66c) = param_3;
    pvVar2 = operator_new(0x498);
    FUN_00c98504(pvVar2,param_2,param_3,param_4);
    *(void **)(param_1 + 0x658) = pvVar2;
    pvVar2 = operator_new(0x6768);
    FUN_00c99cc4(pvVar2,param_2,param_3,param_4);
    *(void **)(param_1 + 0x660) = pvVar2;
    FUN_00c37ee4(param_1,*(undefined8 *)(param_1 + 0x658),pvVar2);
    lVar3 = FUN_00a07af0();
    if (lVar3 != 0) {
      lVar3 = FUN_00a07af0();
      local_68 = 0;
      pcStack_50 = FUN_00c3977c;
      lStack_60 = param_1;
      local_58 = param_1;
      FUN_00be1490(lVar3 + 0x38,&local_68);
      lVar3 = FUN_00a07af0();
      local_68 = 0;
      pcStack_50 = FUN_00c39790;
      lStack_60 = param_1;
      local_58 = param_1;
      FUN_00be1490(lVar3 + 0x28,&local_68);
    }
    *(undefined1 *)(param_1 + 0x66f) = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c38e08(long *param_1)

{
  FUN_00c37de4();
                    /* WARNING: Could not recover jumptable at 0x00c38e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c0))(param_1,1);
  return;
}




void FUN_00c38e38(long *param_1)

{
  FUN_00c37e04();
                    /* WARNING: Could not recover jumptable at 0x00c38e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c0))(param_1,0);
  return;
}




void FUN_00c38e68(long param_1)

{
  FUN_00c37e18();
  FUN_00af9914(*(undefined8 *)(param_1 + 0x660));
  return;
}




void FUN_00c38e8c(long param_1)

{
  FUN_00c9c898(*(undefined8 *)(param_1 + 0x660));
  return;
}




void FUN_00c38e94(long param_1)

{
  FUN_00c9c930(*(undefined8 *)(param_1 + 0x660));
  return;
}




void FUN_00c38e9c(long param_1)

{
  if (*(long *)(param_1 + 0x660) != 0) {
    FUN_00c9cb6c();
    return;
  }
  return;
}




void FUN_00c38eac(long param_1,uint param_2)

{
  FUN_00c98f10(*(undefined8 *)(param_1 + 0x658),param_2 & 1);
  return;
}




void FUN_00c38eb8(long param_1)

{
  FUN_00c9c6f4(*(undefined8 *)(param_1 + 0x660));
  return;
}




void FUN_00c38ec0(long param_1,uint param_2)

{
  FUN_00c9c220(*(undefined8 *)(param_1 + 0x660),param_2 & 1);
  return;
}




void FUN_00c38ecc(long param_1,ulong param_2)

{
  long lVar1;
  
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x66d) == '\0') {
      return;
    }
    FUN_00c98eb8(*(undefined8 *)(param_1 + 0x658));
    *(undefined1 *)(param_1 + 0x66d) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x66d) != '\0') {
    return;
  }
  FUN_00c98c68(*(undefined8 *)(param_1 + 0x658));
  lVar1 = *(long *)(param_1 + 0x658);
  if ((*(byte *)(lVar1 + 0x440) & 1) == 0) {
    if (*(byte *)(lVar1 + 0x440) >> 1 == 0) goto LAB_00c38f54;
  }
  else if (*(long *)(lVar1 + 0x448) == 0) goto LAB_00c38f54;
  if ((*(byte *)(lVar1 + 0x458) & 1) == 0) {
    if (*(byte *)(lVar1 + 0x458) >> 1 == 0) goto LAB_00c38f54;
  }
  else if (*(long *)(lVar1 + 0x460) == 0) goto LAB_00c38f54;
  FUN_00c9bd6c(*(undefined8 *)(param_1 + 0x660),*(undefined8 *)(param_1 + 0x650),lVar1 + 0x440,
               lVar1 + 0x458);
LAB_00c38f54:
  *(undefined1 *)(param_1 + 0x66d) = 1;
  return;
}




void FUN_00c38f68(long param_1,byte param_2)

{
  *(byte *)(*(long *)(param_1 + 0x660) + 0x6764) = param_2 & 1;
  return;
}




bool FUN_00c38f7c(long param_1)

{
  if (*(uint **)(param_1 + 0x650) != (uint *)0x0) {
    return (**(uint **)(param_1 + 0x650) | 1) == 5;
  }
  return false;
}




void FUN_00c38fa0(long param_1)

{
  FUN_00c9bc7c(*(undefined8 *)(param_1 + 0x660));
  return;
}




void FUN_00c38fa8(long *param_1)

{
  (**(code **)(*param_1 + 0x1a8))(param_1,0);
  FUN_00c38200(param_1);
  return;
}




void FUN_00c38fd8(long param_1)

{
  FUN_00c389d8();
  FUN_00c9cc04(*(undefined8 *)(param_1 + 0x660),0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00c38688(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x628) = 1;
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
    FUN_00efe530(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efe58c(puVar4,param_1 + 0x528);
  *(undefined8 *)(param_1 + 0x528) = _DAT_03218ef8;
  FUN_00efcac4(0x3e99999a,puVar4);
  FUN_00efcb24(puVar4,FUN_009a7608);
  uStack_60 = *(undefined8 *)(param_1 + 0x520);
  *(undefined8 *)(param_1 + 0x520) = _DAT_03218ef8;
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
    FUN_00efdc08(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efdc50(puVar5,&uStack_60);
  FUN_00efcac4(0x3e99999a,puVar5);
  FUN_00efcb24(puVar5,FUN_009a7608);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcd98(puVar6);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efce98(puVar6,puVar4,puVar5);
  FUN_00f022a0(param_1,puVar6);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c27b8;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  *(code **)(puVar4 + 8) = FUN_00c38628;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  FUN_00f022a0(param_1,puVar4);
  if (*(long *)(lVar1 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

