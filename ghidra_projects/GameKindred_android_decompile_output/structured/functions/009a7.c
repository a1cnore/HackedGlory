// functions/009a7 — 6 functions
#include "libGameKindred.h"




float FUN_009a71a4(float param_1,float param_2,float param_3,float param_4)

{
  param_1 = param_1 / param_4;
  return param_1 * param_1 * param_1 * param_3 + param_2;
}




void FUN_009a71bc(undefined4 param_1,float param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  long lVar10;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *(long *)(param_3 + 0x440) = param_4 + 0x28;
  uVar2 = *(undefined4 *)(param_4 + 0x30);
  *(undefined4 *)(param_3 + 0x460) = param_1;
  *(undefined4 *)(param_3 + 0x448) = uVar2;
  FUN_009a64cc();
  plVar1 = (long *)(param_3 + 0x1e0);
  if (3.0 <= param_2) {
    plVar1 = (long *)(param_3 + 0x310);
  }
  FUN_00f0d7fc(plVar1,param_6);
  (**(code **)(*plVar1 + 0x138))(plVar1,param_5);
  if ((*(float *)(plVar1 + 8) != 0.0) || (*(float *)((long)plVar1 + 0x44) != 0.0)) {
    plVar1[8] = 0;
    FUN_0091ada4(plVar1);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_70);
  (**(code **)(*plVar1 + 0x80))(plVar1,param_3 + 0x28,0);
  if ((*(float *)(plVar1 + 9) != 0.25) || (*(float *)((long)plVar1 + 0x4c) != 0.25)) {
    lVar10 = NEON_fmov(0x3e800000,4);
    plVar1[9] = lVar10;
    FUN_0091ada4(plVar1);
  }
  lVar10 = DAT_03210d00;
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
    *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
    FUN_00efe530(puVar6);
    *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
  }
  local_70 = NEON_fmov(0x3f800000,4);
  FUN_00efe58c(puVar6,&local_70);
  FUN_00efcac4(0x3eb33333,puVar6);
  FUN_00efcb24(puVar6,FUN_009a7608);
  uVar4 = FUN_00efed6c(0x3f000000);
  lVar10 = DAT_03210d00;
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
    *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
    FUN_00efe530(puVar7);
    *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
  }
  local_70 = 0x3f8ccccd3f8ccccd;
  FUN_00efe58c(puVar7,&local_70);
  FUN_00efcac4(0x3f99999a,puVar7);
  FUN_00efcb24(puVar7,FUN_009a7624);
  lVar10 = DAT_03210d00;
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
    *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
    FUN_00efcad4(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_02825268;
    *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f800000,puVar8);
  lVar10 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
    FUN_00efcd98(puVar9);
    *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar9,puVar7,puVar8,0);
  FUN_00f01980(plVar1);
  FUN_00f02308(plVar1,puVar6,uVar4,puVar9,0);
  uVar4 = FUN_00f00438("ingame-actor-effects");
  FUN_00f02408(param_3 + 0x28,uVar4,0);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_009a7608(float param_1,float param_2,float param_3,float param_4)

{
  return param_2 - (param_1 / param_4) * param_3 * (param_1 / param_4 + -2.0);
}




float FUN_009a7624(float param_1,float param_2,float param_3,float param_4)

{
  return (param_1 / param_4) * (param_1 / param_4) * param_3 + param_2;
}




void FUN_009a7638(undefined4 param_1,float param_2,long param_3,long param_4,ulong param_5)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  ushort uVar9;
  long *plVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  long lVar15;
  undefined8 local_d0;
  undefined4 local_c8;
  long local_c0;
  void *pvStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (param_2 <= 0.0) goto LAB_009a7bc0;
  *(long *)(param_3 + 0x440) = param_4 + 0x28;
  uVar1 = *(undefined4 *)(param_4 + 0x30);
  *(undefined4 *)(param_3 + 0x460) = param_1;
  *(undefined4 *)(param_3 + 0x448) = uVar1;
  FUN_009a64cc(param_3);
  if ((param_5 & 1) != 0) {
    lVar4 = FUN_01988738(DAT_02e3ef98,0);
    FUN_00d55794(param_4,&local_d0,0);
    if (lVar4 != 0) {
      local_90 = local_d0;
      local_88 = local_c8;
      uStack_84 = 0x3f800000;
      pvStack_b8 = (void *)0x0;
      local_c0 = 0x3f800000;
      uStack_a8 = 0;
      uStack_b0 = 0x3f80000000000000;
      uStack_98 = 0x3f800000;
      local_a0 = 0;
      FUN_009d31b4(lVar4,"Effect_GoldSprinkle",1);
      FUN_009d34d4(lVar4,&local_c0);
      FUN_009d33ec(lVar4);
      FUN_009d3440(0,lVar4);
      FUN_009d3f48(lVar4,param_4 + 0x2fc);
    }
  }
  for (plVar10 = *(long **)(param_4 + 0x18); plVar10 != (long *)0x0; plVar10 = (long *)plVar10[4]) {
    if (*(int *)(plVar10[1] + 0xa4) == DAT_0312e4a8) {
      uVar6 = (**(code **)(*plVar10 + 0x188))(plVar10);
      FUN_009ac6b8(0x3f000000,plVar10,"build://Sounds/ActorFx.assetbundle/sfx__gold_coins.mp3",0,1,
                   0xffffffff,1,uVar6);
      break;
    }
  }
  uVar5 = FUN_00ceab64();
  lVar4 = DAT_03210d00;
  if (((uVar5 & 1) != 0) && ((*(byte *)(param_4 + 0x2f4) & 0x11) != 0)) goto LAB_009a7bc0;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efe530(puVar11);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  local_c0 = NEON_fmov(0x3fa00000,4);
  FUN_00efe58c(puVar11,&local_c0);
  FUN_00efcac4(0x3f000000,puVar11);
  FUN_00efcb24(puVar11,FUN_009a7608);
  lVar4 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar12;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efe530(puVar12);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  lVar15 = NEON_fmov(0x3f400000,4);
  local_c0 = lVar15;
  FUN_00efe58c(puVar12,&local_c0);
  FUN_00efcac4(0x3f800000,puVar12);
  FUN_00efcb24(puVar12,FUN_009a7624);
  lVar4 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar13 = (ushort *)0x0;
  }
  else {
    puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar13;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efcad4(puVar13);
    *(undefined ***)puVar13 = &PTR_FUN_02825268;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f800000,puVar13);
  lVar4 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar14 = (ushort *)0x0;
  }
  else {
    puVar14 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar14;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efcd98(puVar14);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar14,puVar12,puVar13,0);
  plVar10 = (long *)(param_3 + 0x1e0);
  if (120.0 <= param_2) {
    plVar10 = (long *)(param_3 + 0x310);
  }
  FUN_00f018bc(plVar10,1);
  if ((*(float *)(plVar10 + 9) != 0.75) || (*(float *)((long)plVar10 + 0x4c) != 0.75)) {
    plVar10[9] = lVar15;
    FUN_0091ada4(plVar10);
  }
  FUN_00f02308(plVar10,puVar11,puVar14,0);
  local_c0 = 0x3f0000003f000000;
  (**(code **)(*plVar10 + 0x28))(plVar10,&local_c0);
  (**(code **)(*plVar10 + 0x80))(plVar10,param_3 + 0x28,0);
  uVar5 = FUN_00ceab64();
  if ((uVar5 & 1) == 0) {
LAB_009a7b3c:
    puVar7 = &DAT_0312e870;
  }
  else {
    cVar3 = FUN_00d5bc64(param_4);
    if (cVar3 == '\x01') {
      puVar7 = &DAT_0312e874;
    }
    else {
      cVar3 = FUN_00d5bc64(param_4);
      if (cVar3 != '\x01') goto LAB_009a7b3c;
      puVar7 = &DAT_0312e878;
    }
  }
  FUN_00f0d7fc(plVar10,puVar7);
  FUN_00e70510(&local_c0);
  if ((param_5 & 1) == 0) {
    puVar8 = &DAT_01b97cee;
  }
  else {
    puVar8 = &DAT_01bb6d43;
  }
  FUN_00e70e18(&local_c0,puVar8,(int)ABS((float)(int)param_2));
  (**(code **)(*plVar10 + 0x138))(plVar10,&local_c0);
  uVar6 = FUN_00f00438("ingame-actor-effects");
  FUN_00f02408(param_3 + 0x28,uVar6,0);
  if (pvStack_b8 != (void *)0x0) {
    operator_delete__(pvStack_b8);
    local_c0 = 0;
    pvStack_b8 = (void *)0x0;
  }
LAB_009a7bc0:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009a7bf8(undefined4 param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *(long *)(param_2 + 0x440) = param_3 + 0x28;
  uVar1 = *(undefined4 *)(param_3 + 0x30);
  *(undefined4 *)(param_2 + 0x460) = param_1;
  *(undefined4 *)(param_2 + 0x448) = uVar1;
  FUN_009a64cc();
  if ((param_4 & 1) != 0) {
    lVar3 = FUN_01988738(DAT_02e3ef98,0);
    if (lVar3 != 0) {
      FUN_00d55794(param_3,&local_b0,0);
      local_70 = local_b0;
      local_68 = local_a8;
      uStack_64 = 0x3f800000;
      uStack_98 = 0;
      local_a0 = 0x3f800000;
      uStack_88 = 0;
      uStack_90 = 0x3f80000000000000;
      uStack_78 = 0x3f800000;
      local_80 = 0;
      FUN_009d31b4(lVar3,"Effect_LevelUp",1);
      FUN_009d34d4(lVar3,&local_a0);
      FUN_009d33ec(lVar3);
      FUN_009d3440(0,lVar3);
      FUN_009d3f48(lVar3,param_3 + 0x2fc);
      FUN_009d3654(lVar3,param_3,1);
    }
    lVar3 = DAT_03210d00;
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
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efd6a4(puVar6);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3fa66666,puVar6);
    FUN_00efcb24(puVar6,FUN_009a816c);
    local_a0 = 0xc316000000000000;
    FUN_00efd6ec(puVar6,&local_a0);
    lVar3 = DAT_03210d00;
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
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efcad4(puVar7);
      *(undefined ***)puVar7 = &PTR_FUN_02825220;
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3d4ccccd,puVar7);
    lVar3 = DAT_03210d00;
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
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efcad4(puVar8);
      *(undefined ***)puVar8 = &PTR_FUN_027c1a60;
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3e99999a,puVar8);
    lVar3 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efcad4(puVar9);
      *(undefined ***)puVar9 = &PTR_FUN_02825268;
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3f99999a,puVar9);
    FUN_00efcb24(puVar9,FUN_009a7624);
    lVar3 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar10 = (ushort *)0x0;
    }
    else {
      puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar10;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efcd98(puVar10);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00efcea4(puVar10,puVar6,puVar9,0);
    FUN_00efc930(puVar7,puVar8);
    FUN_00efc930(puVar8,puVar10);
    lVar3 = param_2 + 0x310;
    FUN_00f018bc(lVar3,1);
    FUN_00f022a0(lVar3,puVar7);
    uVar4 = FUN_00e6ce7c("HUD_FLY_OUT_LEVEL_UP",0);
    FUN_00f0d75c(lVar3,uVar4);
    FUN_00f0d7fc(lVar3,&DAT_0312e87c);
    if ((*(float *)(param_2 + 0x360) != 0.5) || (*(float *)(param_2 + 0x364) != 0.5)) {
      *(undefined8 *)(param_2 + 0x360) = 0x3f0000003f000000;
      FUN_0091ada4(lVar3);
    }
    if ((*(float *)(param_2 + 0x350) != 0.0) || (*(float *)(param_2 + 0x354) != -135.0)) {
      *(undefined8 *)(param_2 + 0x350) = 0xc307000000000000;
      FUN_0091ada4(lVar3);
    }
    FUN_00f02408(lVar3,param_2 + 0x28,0);
    uVar4 = FUN_00f00438("ingame-actor-effects");
    FUN_00f02408(param_2 + 0x28,uVar4,0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

