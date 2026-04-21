// functions/00acc — 7 functions
#include "libGameKindred.h"




void FUN_00acc5b0(long param_1,undefined8 param_2,undefined8 *param_3,byte param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fce60(param_1 + 0x808);
  uVar2 = *(undefined8 *)((long)param_3 + 0x2f);
  *(undefined8 *)(param_1 + 0x717) = *(undefined8 *)((long)param_3 + 0x37);
  *(undefined8 *)(param_1 + 0x70f) = uVar2;
  uVar2 = param_3[4];
  *(undefined8 *)(param_1 + 0x708) = param_3[5];
  *(undefined8 *)(param_1 + 0x700) = uVar2;
  uVar2 = param_3[2];
  *(undefined8 *)(param_1 + 0x6f8) = param_3[3];
  *(undefined8 *)(param_1 + 0x6f0) = uVar2;
  uVar3 = param_3[1];
  uVar2 = *param_3;
  *(byte *)(param_1 + 0x824) = *(byte *)(param_1 + 0x824) & 0xfe | param_4 & 1;
  *(undefined8 *)(param_1 + 0x6e8) = uVar3;
  *(undefined8 *)(param_1 + 0x6e0) = uVar2;
  if (*(long *)(param_1 + 0x710) != 0) {
    *(long *)(*(long *)(param_1 + 0x710) + 0x30) = param_1;
    FUN_008fa54c(local_50,"wub_wub_tooltip");
    FUN_00b28094(param_1 + 0x720,local_50,*(undefined8 *)(param_1 + 0x710));
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  FUN_00acc698(param_1);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
  FUN_00acc8b4(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00acc698(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_c8 [2];
  undefined8 local_b8 [2];
  float local_a8 [4];
  float local_98 [4];
  undefined8 local_88;
  float local_80;
  float local_7c;
  undefined1 local_78 [16];
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x824) & 1) == 0) {
    if (*(long *)(param_1 + 0x700) != 0) {
      FUN_00d55794(*(long *)(param_1 + 0x700),&local_68,0);
      goto LAB_00acc6f4;
    }
    if (*(long *)(param_1 + 0x6f8) != 0) {
      FUN_00f07940(*(undefined4 *)(param_1 + 0x6ec),*(undefined4 *)(param_1 + 0x6f0),param_1,8,
                   *(long *)(param_1 + 0x6f8),8);
      lVar2 = *(long *)(param_1 + 0x708);
      if (lVar2 == 0) goto LAB_00acc808;
      local_58 = _DAT_03218ef8;
      local_48 = *(undefined8 *)(param_1 + 0x6f8);
      local_3c = *(undefined1 *)(param_1 + 0x71e);
      local_50 = local_58;
      goto LAB_00acc7ec;
    }
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
    FUN_00f01980(param_1);
    lVar2 = *(long *)(param_1 + 0x708);
    if (lVar2 == 0) goto LAB_00acc808;
    uVar3 = *(uint *)(lVar2 + 0x84) & 0xfffffffb;
  }
  else {
    local_60 = *(float *)(param_1 + 0x6e8);
    local_68 = *(undefined8 *)(param_1 + 0x6e0);
LAB_00acc6f4:
    FUN_0091ef94(local_78,&local_68,0);
    fVar4 = (float)(int)(float)local_78._0_8_ + (float)*(undefined8 *)(param_1 + 0x6ec);
    fVar5 = (float)(int)SUB84(local_78._0_8_,4) +
            (float)((ulong)*(undefined8 *)(param_1 + 0x6ec) >> 0x20);
    if ((*(float *)(param_1 + 0x40) != fVar4) || (*(float *)(param_1 + 0x44) != fVar5)) {
      *(ulong *)(param_1 + 0x40) = CONCAT44(fVar5,fVar4);
      FUN_0091ada4(param_1);
    }
    if (*(long *)(param_1 + 0x708) == 0) goto LAB_00acc808;
    if (*(long *)(param_1 + 0x700) == 0) {
      local_80 = local_60;
      local_7c = 1.5;
      local_88 = local_68;
    }
    else {
      FUN_00d5b404(*(long *)(param_1 + 0x700),&local_88);
    }
    local_98[0] = (float)local_68 - local_7c;
    local_98[2] = local_60 - local_7c;
    local_a8[0] = (float)local_68 + local_7c;
    local_a8[2] = local_7c + local_60;
    local_98[1] = 0.0;
    local_a8[1] = 0.0;
    FUN_0091ef94(local_b8,local_98,0);
    FUN_0091ef94(local_c8,local_a8,0);
    local_3c = 1;
    local_50 = local_c8[0];
    local_48 = 0;
    local_58 = local_b8[0];
    lVar2 = *(long *)(param_1 + 0x708);
LAB_00acc7ec:
    local_40 = 1;
    FUN_00addc0c(lVar2,param_1 + 0x808,&local_58);
    lVar2 = *(long *)(param_1 + 0x708);
    uVar3 = *(uint *)(lVar2 + 0x84) | 4;
  }
  *(uint *)(lVar2 + 0x84) = uVar3;
LAB_00acc808:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00acc8b4(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  undefined8 local_78;
  undefined4 local_70 [2];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_70[0] = 0xffffff00;
  lVar1 = param_1 + 0x500;
  if ((*(float *)(param_1 + 0x548) != 1.2) || (*(float *)(param_1 + 0x54c) != 1.2)) {
    *(undefined8 *)(param_1 + 0x548) = 0x3f99999a3f99999a;
    FUN_0091ada4(lVar1);
  }
  uVar2 = *(uint *)(param_1 + 0x584);
  if ((uVar2 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0x584) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x6600;
    FUN_0091ada4(lVar1);
  }
  FUN_00f0e670(lVar1,local_70,2);
  uVar5 = FUN_00a26784();
  local_78 = NEON_fmov(0x40a00000,4);
  FUN_00efe58c(uVar5,&local_78);
  FUN_00efcac4(0x3f800000,uVar5);
  FUN_00efcb24(uVar5,FUN_009a7608);
  uVar6 = FUN_00a250a8();
  FUN_00efddc4(0);
  FUN_00efcac4(0x3f800000,uVar6);
  FUN_00efcb24(uVar6,FUN_009a7608);
  lVar4 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efe00c(puVar10);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efe060(puVar10,lVar1,&DAT_01bee7fa,2);
  FUN_00efcac4(0x3e4ccccd,puVar10);
  uVar7 = FUN_00acb4f8();
  FUN_00efcea4(uVar7,uVar5,uVar6,puVar10,0);
  FUN_00f01980(lVar1);
  FUN_00f022a0(lVar1,uVar7);
  lVar1 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar8 * 0x40);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar10);
    *(undefined ***)puVar10 = &PTR_FUN_027c27b8;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = 0;
    puVar10[0x12] = 0;
    puVar10[0x13] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(code **)(puVar10 + 8) = FUN_00acbf74;
  *(long *)(puVar10 + 0x10) = param_1;
  uVar5 = FUN_00acb440();
  FUN_00efcac4(*(undefined4 *)(param_1 + 0x820));
  lVar1 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efd208(puVar9);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efd3bc(puVar9);
  FUN_00efd2dc(puVar9,puVar10,uVar5,0);
  *(uint *)(param_1 + 0x674) = *(uint *)(param_1 + 0x674) & 0xfffffffb;
  lVar1 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar8 * 0x40);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar10);
    *(undefined ***)puVar10 = &PTR_FUN_027c27b8;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = 0;
    puVar10[0x12] = 0;
    puVar10[0x13] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(code **)(puVar10 + 8) = FUN_00acbfb0;
  *(long *)(puVar10 + 0x10) = param_1;
  uVar5 = FUN_00acb440();
  FUN_00efcac4(*(undefined4 *)(param_1 + 0x820));
  lVar1 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efd208(puVar11);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efd3bc(puVar11);
  FUN_00efd2dc(puVar11,puVar10,uVar5,0);
  uVar5 = FUN_00acb4f8();
  FUN_00efcea4(uVar5,puVar9,puVar11,0);
  FUN_00f01980(param_1 + 0xb8);
  FUN_00f022a0(param_1 + 0xb8,uVar5);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00accdd4(long param_1)

{
  if ((*(char *)(param_1 + 0x71c) != '\0') && ((*(byte *)(param_1 + 0x84) >> 2 & 1) != 0)) {
    FUN_00acc698();
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00accdec(long param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 0x6e8) = DAT_03218f38;
  *(undefined8 *)(param_1 + 0x6e0) = DAT_03218f30;
  *(undefined8 *)(param_1 + 0x6ec) = _DAT_03218ef8;
  *(undefined8 *)(param_1 + 0x710) = 0;
  *(undefined8 *)(param_1 + 0x708) = 0;
  *(undefined8 *)(param_1 + 0x700) = 0;
  *(undefined8 *)(param_1 + 0x6f8) = 0;
  *(undefined4 *)(param_1 + 0x718) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x71c) = 0;
  FUN_00f01980();
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  FUN_008fa54c(local_40,"wub_wub_tooltip");
  FUN_00b27f98(param_1 + 0x720,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00acceb8(void *param_1)

{
  FUN_009b94d8();
  operator_delete(param_1);
  return;
}




void FUN_00accedc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined4 local_80;
  undefined4 uStack_7c;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00ed34fc();
  plVar1 = param_1 + 0x12;
  *param_1 = (long)&PTR_FUN_027d6f80;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x23;
  param_1[0x12] = (long)&PTR_FUN_027c1f80;
  FUN_00f0c714(plVar2);
  FUN_00f017e8(param_1 + 0x3e);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,param_1 + 0x3e,1);
  FUN_00f00298(&uStack_7c,&local_80);
  FUN_00f13f08(uStack_7c,local_80,plVar2);
  FUN_00f0c774(plVar2,&DAT_01bee7f6);
  uVar3 = *(uint *)((long)param_1 + 0x19c);
  *(uint *)((long)param_1 + 0x19c) = uVar3 | 0x10;
  if ((uVar3 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x19c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x6c10;
    FUN_0091ada4(plVar2);
  }
  local_50 = DAT_03210f60;
  local_78 = FUN_00acd088;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 0x24,&local_78);
  local_78 = FUN_00acd088;
  local_50 = DAT_03210f8c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 0x24,&local_78);
  local_78 = FUN_00acd088;
  local_50 = DAT_031341c4;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 1,&local_78);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

