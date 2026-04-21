// functions/00c76 — 8 functions
#include "libGameKindred.h"




void FUN_00c76330(long param_1)

{
  *(uint *)(param_1 + 0x2ba4) = *(uint *)(param_1 + 0x2ba4) | 4;
  return;
}




void FUN_00c76344(long param_1)

{
  *(uint *)(param_1 + 0x2ba4) = *(uint *)(param_1 + 0x2ba4) & 0xfffffffb;
  return;
}




void FUN_00c76354(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  
  *param_1 = &PTR_FUN_02802378;
  param_1[0x1b] = 0;
  puVar7 = (uint *)(param_1 + 0x17);
  uVar3 = *puVar7;
  plVar2 = (long *)param_1[0x18];
  plVar1 = plVar2;
  if (uVar3 != 0) {
    do {
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 8))();
        uVar3 = *(uint *)(param_1 + 0x17);
        plVar2 = (long *)param_1[0x18];
      }
      plVar1 = plVar1 + 1;
    } while (plVar1 != plVar2 + uVar3);
  }
  if (plVar2 != (long *)0x0) {
    *puVar7 = 0;
  }
  puVar8 = (uint *)(param_1 + 0x19);
  uVar3 = *puVar8;
  if (uVar3 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      plVar1 = *(long **)(param_1[0x1a] + lVar5);
      if (plVar1 == (long *)0x0) {
        puVar4 = (undefined8 *)(param_1[0x1a] + uVar6 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar3 = *(uint *)(param_1 + 0x19);
        puVar4 = (undefined8 *)(param_1[0x1a] + lVar5);
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
      *puVar4 = 0;
    } while (uVar6 < uVar3);
  }
  if (param_1[0x1a] != 0) {
    *puVar8 = 0;
  }
  FUN_00f0d3a4(param_1 + 0x78f);
  thunk_FUN_00ed5534(param_1 + 0x64a);
  param_1[0x5b4] = &PTR_FUN_027dc928;
  param_1[0x61f] = &PTR_FUN_02826f38;
  param_1[0x636] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x639);
  FUN_00f13d08(param_1 + 0x61f);
  param_1[0x5f5] = &PTR_FUN_02826f38;
  param_1[0x60c] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x60f);
  FUN_00f13d08(param_1 + 0x5f5);
  param_1[0x5cb] = &PTR_FUN_02826f38;
  param_1[0x5e2] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x5e5);
  FUN_00f13d08(param_1 + 0x5cb);
  FUN_00f13d08(param_1 + 0x5b4);
  param_1[0x596] = &PTR_FUN_028266f0;
  param_1[0x5ad] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5b0);
  FUN_00f13d08(param_1 + 0x596);
  FUN_00f13d08(param_1 + 0x57b);
  FUN_00f13d08(param_1 + 0x564);
  param_1[0x540] = &PTR_FUN_028266f0;
  param_1[0x557] = &PTR_FUN_02826850;
  param_1[0x4a5] = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0x55a);
  FUN_00f13d08(param_1 + 0x540);
  param_1[0x522] = &PTR_FUN_028266f0;
  param_1[0x539] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x53c);
  FUN_00f13d08(param_1 + 0x522);
  param_1[0x504] = &PTR_FUN_028266f0;
  param_1[0x51b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x51e);
  FUN_00f13d08(param_1 + 0x504);
  FUN_00f01868(param_1 + 0x4f3);
  FUN_009c825c(param_1 + 0x4a5);
  FUN_00f0d3a4(param_1 + 0x47f);
  FUN_00f0d3a4(param_1 + 0x459);
  FUN_00f0d3a4(param_1 + 0x433);
  FUN_00af8c0c(param_1 + 0x3bd);
  param_1[0x39f] = &PTR_FUN_028266f0;
  param_1[0x3b6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3b9);
  FUN_00f13d08(param_1 + 0x39f);
  param_1[0x381] = &PTR_FUN_028266f0;
  param_1[0x398] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x39b);
  FUN_00f13d08(param_1 + 0x381);
  param_1[0x363] = &PTR_FUN_028266f0;
  param_1[0x37a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x37d);
  FUN_00f13d08(param_1 + 0x363);
  param_1[0x345] = &PTR_FUN_028266f0;
  param_1[0x35c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x35f);
  FUN_00f13d08(param_1 + 0x345);
  FUN_00f13d08(param_1 + 0x32e);
  param_1[0x305] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x31c);
  FUN_00f13d08(param_1 + 0x305);
  FUN_00f13d08(param_1 + 0x2ee);
  FUN_00f13d08(param_1 + 0x2d7);
  if ((*(byte *)(param_1 + 0x2d4) & 1) != 0) {
    operator_delete((void *)param_1[0x2d6]);
  }
  FUN_009c7fa8(param_1 + 0x1c);
  if ((void *)param_1[0x1a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1a]);
    puVar8[0] = 0;
    puVar8[1] = 0;
    param_1[0x1a] = 0;
  }
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    puVar7[0] = 0;
    puVar7[1] = 0;
    param_1[0x18] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c7672c(void *param_1)

{
  FUN_00c76354();
  operator_delete(param_1);
  return;
}




void FUN_00c76750(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 local_70;
  float fStack_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  FUN_00f13db4();
  lVar1 = param_1 + 0x22c8;
  FUN_00f0db64(*(float *)(param_1 + 0x3da8) * 0.6,0,0x3f800000,lVar1);
  FUN_00f13f18(param_1 + 0x2bd8,param_1 + 0x3da8);
  FUN_00f13f08(*(undefined4 *)(param_1 + 0x3da8),0x40800000,param_1 + 0x1a28);
  FUN_00f07940(0,0,lVar1,4,param_1,4);
  lVar2 = param_1 + 0x2528;
  FUN_00f07940(0x41200000,0,lVar2,7,lVar1,5);
  FUN_00f07940(0,0,param_1 + 0x2bd8,0,param_1,0);
  FUN_00f07940(0,0,param_1 + 0x1a28,0,param_1,0);
  fVar10 = 0.3;
  fVar12 = *(float *)(param_1 + 0x3da8) * 0.3;
  fVar9 = (float)FUN_00f080a0(lVar2,5,param_1,5);
  lVar1 = param_1 + 0x3250;
  if (fVar9 <= fVar12) {
    fVar12 = fVar9;
  }
  plVar6 = (long *)FUN_00ed5aa8(lVar1);
  (**(code **)(*plVar6 + 0x58))(plVar6,0,0,1,1);
  FUN_00f13f08(fVar12,fVar10 + 40.0,param_1 + 0x2b20);
  lVar3 = param_1 + 0x2cb0;
  lVar4 = param_1 + 0x3c78;
  fVar9 = (float)FUN_00f0e700(lVar3);
  FUN_00f0dad0((fVar12 - fVar9) + -40.0,lVar4,1);
  FUN_00f07940(0,0,param_1 + 0x2b20,0,lVar2,1);
  FUN_00f07940(0,0,lVar3,7,lVar2,5);
  lVar2 = param_1 + 0x2da0;
  FUN_00f07b18(0xc0a00000,lVar2,3,lVar3,1);
  FUN_00f07940(0x41a00000,0x41a00000,lVar4,0,lVar2,0);
  FUN_00f07940(0,0,lVar1,0,lVar2,0);
  if (*(int *)(param_1 + 200) != 0) {
    uVar8 = 0;
    do {
      lVar7 = lVar4;
      uVar11 = 0x41200000;
      if (uVar8 != 0) {
        lVar7 = *(long *)(*(long *)(param_1 + 0xd0) + (ulong)((int)uVar8 - 1) * 8);
        uVar11 = 0;
      }
      FUN_00f07940(0,uVar11,*(undefined8 *)(*(long *)(param_1 + 0xd0) + uVar8 * 8),0,lVar7,3);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 200));
  }
  fVar9 = (float)FUN_00f0e700(lVar3);
  fVar10 = -20.0;
  plVar6 = (long *)FUN_00ed5aa8(lVar1);
  (**(code **)(*plVar6 + 0x58))(plVar6,0,0,1,1);
  fVar10 = fVar10 + 40.0;
  FUN_00f13f08((fVar12 - fVar9) + -20.0,lVar1);
  local_70 = FUN_00f13e54(lVar1);
  fStack_6c = fVar10;
  FUN_00f13f18(lVar2,&local_70);
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_00c76ac4(param_1);
    if (*(int *)(*(long *)(param_1 + 0xd8) + 0x98) - 3U < 2) {
      FUN_00c76cac();
    }
    else {
      FUN_00c76f64(param_1);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c76ac4(long param_1)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  switch(*(undefined4 *)(*(long *)(param_1 + 0xd8) + 0x98)) {
  case 0:
    *(uint *)(param_1 + 0x1c8c) = *(uint *)(param_1 + 0x1c8c) | 4;
    *(uint *)(param_1 + 0x1b9c) = *(uint *)(param_1 + 0x1b9c) | 0x14;
    *(uint *)(param_1 + 0x221c) = *(uint *)(param_1 + 0x221c) | 4;
    pcVar3 = "INVENTORY_HAT_EQUIPPED_TAG";
    break;
  case 1:
    pcVar3 = "INVENTORY_HAT_EQUIPPING_TAG";
    *(uint *)(param_1 + 0x1b9c) = *(uint *)(param_1 + 0x1b9c) & 0xfffffffb;
    *(uint *)(param_1 + 0x221c) = *(uint *)(param_1 + 0x221c) & 0xfffffffb;
    break;
  case 2:
    *(uint *)(param_1 + 0x1b9c) = *(uint *)(param_1 + 0x1b9c) | 0x14;
    *(uint *)(param_1 + 0x1c8c) = *(uint *)(param_1 + 0x1c8c) & 0xfffffffb;
    *(uint *)(param_1 + 0x221c) = *(uint *)(param_1 + 0x221c) & 0xfffffffb;
    pcVar3 = "INVENTORY_HAT_UNEQUIPPED_TAG";
    break;
  case 3:
    uVar4 = FUN_00aa8224();
    uVar2 = FUN_00aa7060(uVar4,*(long *)(param_1 + 0xd8) + 0x20);
    FUN_00b09454(param_1 + 0xe0,uVar2 & 1);
    if ((~*(uint *)(param_1 + 0x884) & 0x7f80) == 0) goto switchD_00c76b10_default;
    uVar2 = *(uint *)(param_1 + 0x884) | 0x7f80;
    goto LAB_00c76bf8;
  case 4:
    uVar4 = FUN_00aa8224();
    uVar2 = FUN_00aa7060(uVar4,*(long *)(param_1 + 0xd8) + 0x20);
    FUN_00b09454(param_1 + 0xe0,uVar2 & 1);
    uVar2 = *(uint *)(param_1 + 0x884);
    if ((uVar2 & 0x7f80) == 0x2b00) goto switchD_00c76b10_default;
    uVar2 = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x2b00;
LAB_00c76bf8:
    *(uint *)(param_1 + 0x884) = uVar2;
    FUN_0091ada4(param_1 + 0x800);
  default:
    goto switchD_00c76b10_default;
  }
  uVar4 = FUN_00e6ce7c(pcVar3,0);
  FUN_00910394(&local_48,uVar4);
switchD_00c76b10_default:
  FUN_00f0d75c(param_1 + 0x23f8,&local_48);
  fVar5 = (float)FUN_00f13e54(param_1 + 0x16b8);
  FUN_00f0db64(fVar5 * 0.7,0,0x3f800000,param_1 + 0x23f8);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c76cac(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  float fVar10;
  undefined8 uVar11;
  ulong uVar12;
  float fVar13;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  *(uint *)(param_1 + 0x19f4) = *(uint *)(param_1 + 0x19f4) & 0xfffffffb;
  *(uint *)(param_1 + 0x17f4) = *(uint *)(param_1 + 0x17f4) | 4;
  FUN_00f13f18(param_1 + 6000,param_1 + 0x3da8);
  fVar10 = *(float *)(param_1 + 0x3dac);
  lVar1 = param_1 + 0x1de8;
  FUN_00f13f08(lVar1);
  if ((*(float *)(param_1 + 0x1e38) != 0.5) || (*(float *)(param_1 + 0x1e3c) != 0.5)) {
    *(undefined8 *)(param_1 + 0x1e38) = 0x3f0000003f000000;
    FUN_0091ada4(lVar1);
  }
  local_80 = (float)FUN_00f13e54(lVar1);
  local_80 = local_80 * 1.5;
  fStack_7c = fVar10 * 1.5;
  FUN_00f13f18(param_1 + 0x1cf8,&local_80);
  FUN_00f07940(0xc2200000,0xc2200000,lVar1,5,param_1,5);
  FUN_00f07940(0,0,param_1 + 0x1cf8,8,lVar1,8);
  FUN_00f07940(0,0xc2a00000,param_1 + 0xe0,4,lVar1,6);
  fVar10 = 0.2;
  iVar3 = *(int *)(param_1 + 0xb8);
  iVar7 = (int)((*(float *)(param_1 + 0x3da8) * 0.8 + -120.0 + -80.0) * 0.2);
  fVar13 = *(float *)(param_1 + 0x3dac);
  lVar1 = param_1 + 0x22c8;
  lVar2 = param_1 + 0x1828;
  FUN_00f0d548(lVar1);
  FUN_00f13f08((float)((iVar7 + 0x14) * iVar3 - 0x14),(fVar13 - fVar10) + -20.0,lVar2);
  uVar12 = 0;
  FUN_00f07940(*(float *)(param_1 + 0x3da8) * -0.1,0,lVar2,6,param_1,6);
  if (*(int *)(param_1 + 0xb8) != 0) {
    uVar9 = 0;
    do {
      fVar10 = (float)uVar12;
      fVar13 = *(float *)(param_1 + 0x3dac);
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + uVar9 * 8);
      FUN_00f0d548(lVar1);
      fVar10 = (fVar13 - fVar10) + -20.0;
      FUN_00f13f08((float)iVar7,fVar10,uVar8);
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + uVar9 * 8);
      if (uVar9 == 0) {
        FUN_00f0d4e0(lVar1);
        fVar10 = fVar10 * 0.5 + 10.0;
        uVar6 = 7;
        uVar11 = 0;
        lVar5 = lVar2;
      }
      else {
        uVar6 = 5;
        fVar10 = 0.0;
        lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + (ulong)((int)uVar9 - 1) * 8);
        uVar11 = 0x41a00000;
      }
      uVar12 = (ulong)(uint)fVar10;
      FUN_00f07940(uVar11,uVar8,7,lVar5,uVar6);
      FUN_00c75738(*(undefined8 *)(*(long *)(param_1 + 0xc0) + uVar9 * 8));
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0xb8));
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c76f64(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *(uint *)(param_1 + 0x19f4) = *(uint *)(param_1 + 0x19f4) | 4;
  *(uint *)(param_1 + 0x17f4) = *(uint *)(param_1 + 0x17f4) & 0xfffffffb;
  FUN_00f13f18(param_1 + 0x1970,param_1 + 0x3da8);
  lVar1 = param_1 + 0x1de8;
  FUN_00f13f08(*(undefined4 *)(param_1 + 0x3dac),*(undefined4 *)(param_1 + 0x3dac),lVar1);
  fVar4 = *(float *)(param_1 + 0x1e38);
  if ((fVar4 != 0.5) || (fVar4 = *(float *)(param_1 + 0x1e3c), fVar4 != 0.5)) {
    *(undefined8 *)(param_1 + 0x1e38) = 0x3f0000003f000000;
    FUN_0091ada4(lVar1);
  }
  local_60 = (float)FUN_00f13e54(lVar1);
  local_60 = local_60 * 1.5;
  fStack_5c = fVar4 * 1.5;
  FUN_00f13f18(param_1 + 0x1cf8,&local_60);
  FUN_00f07940(0,0,lVar1,8,param_1,8);
  FUN_00f07940(0,0,param_1 + 0x1cf8,8,lVar1,8);
  lVar1 = param_1 + 0x1b18;
  fVar4 = 80.0;
  FUN_00f13f08(lVar1);
  local_60 = (float)FUN_00f0e700(lVar1);
  local_60 = local_60 * 0.8;
  fStack_5c = fVar4 * 0.8;
  fVar4 = fStack_5c;
  FUN_00f13f18(param_1 + 0x1c08,&local_60);
  lVar2 = param_1 + 0x16b8;
  local_60 = (float)FUN_00f01c54(lVar2,0,0,1,1);
  fStack_5c = fVar4;
  FUN_00f13f18(lVar2,&local_60);
  FUN_00f07940(0,0,param_1 + 0x23f8,4,lVar2,4);
  FUN_00f07940(0,0x41200000,lVar1,4,param_1 + 0x23f8,6);
  FUN_00f07940(0,0,param_1 + 0x1c08,8,lVar1,8);
  FUN_00f07940(0,0x41200000,param_1 + 0x2198,4,lVar1,6);
  FUN_00f07940(0xc1f00000,0,lVar2,5,param_1,5);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

