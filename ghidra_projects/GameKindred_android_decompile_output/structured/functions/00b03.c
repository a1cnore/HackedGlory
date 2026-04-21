// functions/00b03 — 26 functions
#include "libGameKindred.h"




void FUN_00b03060(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00f01980();
  lVar3 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efd6a4(puVar5);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  local_70 = 0x42c80000;
  FUN_00efd6ec(puVar5,&local_70);
  FUN_00efcac4(0x3e800000,puVar5);
  lVar3 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efdd74(puVar6);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar6);
  FUN_00efcac4(0x3e800000,puVar6);
  lVar3 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efcd98(puVar7);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar7,puVar5,puVar6,0);
  lVar3 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_02825148;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00f02308(param_1,puVar7,puVar5,0);
  FUN_00f01980(param_2);
  uVar1 = *(uint *)(param_2 + 0x84);
  *(uint *)(param_2 + 0x84) = uVar1 | 4;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x84) = uVar1 & 0xffff807f | 4;
    FUN_0091ada4(param_2);
  }
  if ((*(float *)(param_2 + 0x40) != -100.0) || (*(float *)(param_2 + 0x44) != 0.0)) {
    *(undefined8 *)(param_2 + 0x40) = 0xc2c80000;
    FUN_0091ada4(param_2);
  }
  lVar3 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efd6a4(puVar5);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  local_70 = 0x42c80000;
  FUN_00efd6ec(puVar5,&local_70);
  FUN_00efcac4(0x3e800000,puVar5);
  FUN_00efcb24(puVar5,FUN_00a2b6d4);
  lVar3 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efdd74(puVar6);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efddc4(0x3f800000,puVar6);
  FUN_00efcac4(0x3e800000,puVar6);
  lVar3 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efcd98(puVar7);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar7,puVar5,puVar6,0);
  FUN_00f02308(param_2,puVar7,0);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b035ac(long param_1,undefined8 param_2)

{
  FUN_00f0d7fc(param_1 + 0x110);
  FUN_00f0d7fc(param_1 + 0x240,param_2);
  return;
}




void FUN_00b035dc(long param_1,undefined8 param_2)

{
  FUN_00f0d378(param_1 + 0x110);
  FUN_00f0d378(param_1 + 0x240,param_2);
  return;
}




void FUN_00b0360c(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f0d92c(param_1 + 0x110);
  FUN_00f0d92c(param_1 + 0x240,param_2,param_3);
  return;
}




void FUN_00b0364c(long param_1,uint param_2)

{
  FUN_00f0da30(param_1 + 0x110,param_2 & 1);
  FUN_00f0da30(param_1 + 0x240,param_2 & 1);
  return;
}




void FUN_00b03680(long param_1,undefined8 param_2)

{
  FUN_00f0da80(param_1 + 0x110);
  FUN_00f0da80(param_1 + 0x240,param_2);
  return;
}




void FUN_00b036b0(long param_1,undefined8 param_2)

{
  FUN_00f0da8c(param_1 + 0x110);
  FUN_00f0da8c(param_1 + 0x240,param_2);
  return;
}




void FUN_00b036e0(long param_1,undefined4 param_2)

{
  FUN_00f0dac8(param_1 + 0x110);
  FUN_00f0dac8(param_1 + 0x240,param_2);
  return;
}




void FUN_00b03710(undefined8 param_1,long param_2)

{
  FUN_00f0dad0(param_2 + 0x110,1);
  FUN_00f0dad0(param_1,param_2 + 0x240,1);
  return;
}




void FUN_00b03750(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00f0db64(param_1,param_2,0x3f800000,param_3 + 0x110);
  FUN_00f0db64(param_1,param_2,0x3f800000,param_3 + 0x240);
  return;
}




void FUN_00b037a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00f0dc4c(param_1,param_2,0x3f800000,param_3 + 0x110);
  FUN_00f0dc4c(param_1,param_2,0x3f800000,param_3 + 0x240);
  return;
}




void FUN_00b037f8(long param_1,uint param_2)

{
  FUN_00f0de5c(param_1 + 0x110,param_2 & 1);
  FUN_00f0de5c(param_1 + 0x240,param_2 & 1);
  return;
}




void FUN_00b0382c(long param_1)

{
  FUN_00f0de68(param_1 + 0x110);
  return;
}




void FUN_00b03834(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x370) = *(byte *)(param_1 + 0x370) & 0xf9 | (param_2 & 3) << 1;
  return;
}




void FUN_00b0384c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0x240;
  *param_1 = &PTR_FUN_027db530;
  do {
    FUN_00f0d3a4((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != -0x20);
  FUN_00f01868(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00b0389c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0x240;
  *param_1 = &PTR_FUN_027db530;
  do {
    FUN_00f0d3a4((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != -0x20);
  FUN_00f01868(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b038f4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  float fVar9;
  code *local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  long local_88;
  
  lVar8 = tpidr_el0;
  local_88 = *(long *)(lVar8 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027db630;
  FUN_00f0bdbc(plVar1,0);
  plVar2 = param_1 + 0x30;
  param_1[0x17] = (long)&PTR_FUN_027c3260;
  FUN_00f13ca4(plVar2);
  plVar3 = param_1 + 0x47;
  FUN_00b12bd8(plVar3,0);
  plVar4 = param_1 + 0xdd;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0x103;
  FUN_00ab6c24(plVar5,0);
  plVar6 = param_1 + 0x3bb;
  FUN_00ab6c24(plVar6,0);
  FUN_00f017e8(param_1 + 0x673);
  param_1[0x686] = 0;
  param_1[0x685] = 0;
  param_1[0x684] = 0;
  param_1[0x673] = (long)&PTR_FUN_027c1f80;
  *(undefined8 *)((long)param_1 + 0x343d) = 0;
  param_1[0x687] = 0;
  *(undefined2 *)((long)param_1 + 0x3445) = 0x101;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar4,1);
  FUN_00f023ec(plVar1,plVar6,1);
  FUN_00ab73d8(0x42000000,0x42c80000,0x42c80000,plVar5,"white_background",&DAT_01bee7fa);
  fVar9 = (float)FUN_00f01c20(plVar5);
  FUN_00f13f08(fVar9 * 0.6,0x40800000,param_1 + 0x20d);
  FUN_00b09144(0x3dcccccd,plVar5);
  FUN_00ab75b0(0x3f000000,plVar5,&DAT_01bee7fa);
  FUN_00ab7520(plVar5,1);
  uVar7 = DAT_03210c64;
  local_b8 = FUN_00b03bf8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0xffffffff;
  plStack_b0 = param_1;
  local_90 = uVar7;
  FUN_009693a0(param_1 + 0x104,&local_b8);
  FUN_00f13f08(0x43480000,(int)param_1[0x3b9],plVar3);
  *(uint *)((long)param_1 + 0x4c4) = *(uint *)((long)param_1 + 0x4c4) & 0xfffffffb;
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  FUN_00ab73d8(0x42000000,0x42c80000,0x42c80000,plVar6,"generic_plus",&DAT_01bee7fa);
  FUN_00b09144(0x3dcccccd,plVar6);
  FUN_00ab75b0(0x3f000000,plVar6,&DAT_01bee7fa);
  FUN_00ab7520(plVar6,1);
  local_b8 = FUN_00b03bf8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 1;
  plStack_b0 = param_1;
  local_90 = uVar7;
  FUN_009693a0(param_1 + 0x3bc,&local_b8);
  if (*(long *)(lVar8 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b03bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00b04378(param_1,param_2,param_5);
  return;
}




void FUN_00b03c00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027db630;
  FUN_00b03d1c();
  FUN_00951534(param_1 + 0x686,1);
  FUN_0090eb54(param_1 + 0x684,1);
  FUN_00f01868(param_1 + 0x673);
  FUN_009c7fa8(param_1 + 0x3bb);
  FUN_009c7fa8(param_1 + 0x103);
  FUN_00f0d3a4(param_1 + 0xdd);
  param_1[0x47] = &PTR_FUN_027dc928;
  param_1[0xb2] = &PTR_FUN_02826f38;
  param_1[0xc9] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0xcc);
  FUN_00f13d08(param_1 + 0xb2);
  param_1[0x88] = &PTR_FUN_02826f38;
  param_1[0x9f] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0xa2);
  FUN_00f13d08(param_1 + 0x88);
  param_1[0x5e] = &PTR_FUN_02826f38;
  param_1[0x75] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x78);
  FUN_00f13d08(param_1 + 0x5e);
  FUN_00f13d08(param_1 + 0x47);
  FUN_00f13d08(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b03d1c(long param_1)

{
  FUN_0090eb54(param_1 + 0x3420,0);
  FUN_00951534(param_1 + 0x3430,0);
  *(undefined4 *)(param_1 + 0x3440) = 0;
  FUN_00f0d75c(param_1 + 0x6e8,&DAT_03210450);
  return;
}




void FUN_00b03d68(void *param_1)

{
  FUN_00b03c00();
  operator_delete(param_1);
  return;
}




void FUN_00b03d8c(undefined1 param_1 [16],long param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  *(undefined1 *)(param_2 + 0x3444) = 1;
  *(byte *)(param_2 + 0x3445) = param_5 & 1;
  FUN_00f13f08(param_1,*(undefined4 *)(param_2 + 0x1dc8),param_2 + 0x238);
  FUN_00b03eb4(param_2);
  FUN_00b03e28(param_2,param_3,param_4,0);
  FUN_00b03eb4(param_2);
  return;
}




void FUN_00b03dfc(undefined1 param_1 [16],long param_2)

{
  FUN_00f13f08(param_1,*(undefined4 *)(param_2 + 0x1dc8),param_2 + 0x238);
  FUN_00b03eb4(param_2);
  return;
}




void FUN_00b03e28(long param_1,int *param_2,undefined8 param_3,uint param_4)

{
  if ((*(char *)(param_1 + 0x3444) != '\0') && (FUN_00b03d1c(param_1), *param_2 != 0)) {
    FUN_0091630c(param_1 + 0x3420,param_2);
    FUN_00965324(param_1 + 0x3430,param_3);
    if ((param_4 & 1) == 0) {
      FUN_00b03ffc(param_1,0,0);
      return;
    }
  }
  return;
}




void FUN_00b03eb4(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0x238;
  fVar3 = (float)FUN_00f13e54(lVar1);
  fVar6 = *(float *)(param_1 + 0x278);
  if ((fVar6 != fVar3 * 0.5) || (fVar4 = *(float *)(param_1 + 0x27c), fVar4 != 0.0)) {
    *(float *)(param_1 + 0x278) = fVar3 * 0.5;
    *(undefined4 *)(param_1 + 0x27c) = 0;
    FUN_0091ada4(lVar1);
    fVar6 = *(float *)(param_1 + 0x278);
    fVar4 = *(float *)(param_1 + 0x27c);
  }
  local_48 = 0x3f0000003f000000;
  if ((*(float *)(param_1 + 0x728) != fVar6) || (*(float *)(param_1 + 0x72c) != fVar4)) {
    *(float *)(param_1 + 0x728) = fVar6;
    *(float *)(param_1 + 0x72c) = fVar4;
    FUN_0091ada4(param_1 + 0x6e8);
  }
  (**(code **)(*(long *)(param_1 + 0x6e8) + 0x28))(param_1 + 0x6e8,&local_48);
  uVar5 = FUN_00f13e54(lVar1);
  local_48 = CONCAT44(fVar6,uVar5);
  FUN_00f13f18(param_1 + 0x180,&local_48);
  FUN_00b042dc(param_1);
  uVar7 = 0;
  lVar1 = param_1 + 0xb8;
  FUN_00f0bc10(0,0,0x41200000,&local_48);
  FUN_00f0c168(lVar1,&local_48);
  (**(code **)(*(long *)(param_1 + 0xb8) + 0x90))(lVar1);
  uVar5 = FUN_00f13e54(lVar1);
  local_48 = CONCAT44(uVar7,uVar5);
  FUN_00f13f18(param_1,&local_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00b03ffc(long param_1,uint param_2,ulong param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  if (param_2 < *(uint *)(param_1 + 0x3420)) {
    *(uint *)(param_1 + 0x3440) = param_2;
    FUN_00f0d75c(param_1 + 0x6e8,*(long *)(param_1 + 0x3428) + (ulong)param_2 * 0x10);
    FUN_00b042dc(param_1);
    if ((param_3 & 1) == 0) {
      uVar2 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
      FUN_00f048e0(auStack_58,uVar2,*(undefined4 *)(param_1 + 0x3440));
      uVar2 = 1;
      FUN_00f04760(param_1,auStack_58,1);
    }
    else {
      uVar2 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

