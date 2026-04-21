// functions/00aba — 14 functions
#include "libGameKindred.h"




void FUN_00aba364(long param_1)

{
  if (0.0 < *(float *)(param_1 + 0x1ee8)) {
    return;
  }
  FUN_00ab9cf4();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00aba378(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  code *local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  FUN_00ab9298(param_1,param_2 & 1);
  puVar1 = param_1 + 0x3de;
  *param_1 = &PTR_FUN_027d51f0;
  FUN_00f0e4a8(puVar1);
  puVar2 = param_1 + 0x3fc;
  FUN_00f017e8(puVar2);
  puVar3 = param_1 + 0x40d;
  param_1[0x3fc] = &PTR_FUN_027c1f80;
  FUN_00f0e4a8(puVar3);
  puVar4 = param_1 + 0x42b;
  FUN_00f0d160(puVar4);
  puVar5 = param_1 + 0x451;
  FUN_00f0e4a8(puVar5);
  puVar6 = param_1 + 0x46f;
  FUN_00f0e4a8(puVar6);
  param_1[0x48d] = _DAT_03218ef8;
  FUN_00f023ec(param_1 + 0x34,puVar1,1);
  FUN_00f023ec(param_1 + 0x34,puVar2,1);
  FUN_00f023ec(puVar2,puVar3,1);
  FUN_00f023ec(puVar2,puVar4,1);
  FUN_00f023ec(puVar4,puVar5,1);
  FUN_00f023ec(puVar4,puVar6,1);
  *(uint *)((long)param_1 + 0x1f74) = *(uint *)((long)param_1 + 0x1f74) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x2064) = *(uint *)((long)param_1 + 0x2064) & 0xffffffbf;
  uVar9 = FUN_0092ea9c();
  ppuVar7 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  if ((param_2 & 1) == 0) {
    ppuVar7 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  }
  puVar10 = *ppuVar7;
  FUN_00f0e540(puVar1,puVar10);
  FUN_00f0e540(puVar3,puVar10);
  if ((*(float *)(param_1 + 0x417) != 0.0) || (*(float *)((long)param_1 + 0x20bc) != 0.5)) {
    param_1[0x417] = 0x3f00000000000000;
    FUN_0091ada4(puVar3);
  }
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar9 & 1) == 0) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  }
  FUN_00f0d378(puVar4,*ppuVar7);
  if ((*(float *)(param_1 + 0x435) != 0.0) || (*(float *)((long)param_1 + 0x21ac) != 0.5)) {
    param_1[0x435] = 0x3f00000000000000;
    FUN_0091ada4(puVar4);
  }
  FUN_00f0e548(puVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_telestration_ban");
  local_98 = (code *)CONCAT44(local_98._4_4_,0xff2909cc);
  FUN_00f0e670(puVar5,&local_98,2);
  if ((*(float *)(param_1 + 0x45b) != 0.0) || (*(float *)((long)param_1 + 0x22dc) != 0.5)) {
    param_1[0x45b] = 0x3f00000000000000;
    FUN_0091ada4(puVar5);
  }
  FUN_00f0e548(puVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_telestration_ban");
  local_98 = (code *)CONCAT44(local_98._4_4_,0xff2909cc);
  FUN_00f0e670(puVar6,&local_98,2);
  if ((*(float *)(param_1 + 0x479) != 0.0) || (*(float *)((long)param_1 + 0x23cc) != 0.5)) {
    param_1[0x479] = 0x3f00000000000000;
    FUN_0091ada4(puVar6);
  }
  if (*(float *)(param_1 + 0x477) != 4.0) {
    *(undefined4 *)(param_1 + 0x477) = 0x40800000;
    FUN_0091ada4(puVar6);
  }
  puVar1 = param_1 + 1;
  local_70 = DAT_03210c88;
  *(uint *)((long)param_1 + 0x2064) = *(uint *)((long)param_1 + 0x2064) & 0xffffffbb;
  local_98 = thunk_FUN_00abab28;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  puStack_90 = param_1;
  FUN_009693a0(puVar1,&local_98);
  local_70 = DAT_03210c8c;
  local_98 = thunk_FUN_00abab78;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  puStack_90 = param_1;
  FUN_009693a0(puVar1,&local_98);
  local_70 = DAT_03210c90;
  local_98 = FUN_00aba740;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  puStack_90 = param_1;
  FUN_009693a0(puVar1,&local_98);
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00abab28(long param_1)

{
  FUN_00f01980(param_1 + 0x1fe0);
  if ((*(uint *)(param_1 + 0x2064) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x2064) = *(uint *)(param_1 + 0x2064) & 0xffff807f;
    FUN_0091ada4(param_1 + 0x1fe0);
    return;
  }
  return;
}




void thunk_FUN_00abab78(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f800000,puVar3);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efdd74(puVar4);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f000000,puVar4);
  FUN_00efddc4(0x3f800000,puVar4);
  param_1 = param_1 + 0x1fe0;
  FUN_00f01980(param_1);
  FUN_00f022a0(param_1,puVar3);
  FUN_00f022a0(param_1,puVar4);
  return;
}




void FUN_00aba740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00abad04(param_1,param_4);
  return;
}




void FUN_00aba748(long *param_1,undefined8 param_2)

{
  FUN_00f0e578(param_1 + 0x3de);
  FUN_00f0e578(param_1 + 0x40d,param_2);
                    /* WARNING: Could not recover jumptable at 0x00aba78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}




void FUN_00aba790(long *param_1,undefined8 param_2)

{
  FUN_00f13f18(param_1 + 0x3de);
  FUN_00f13f18(param_1 + 0x40d,param_2);
                    /* WARNING: Could not recover jumptable at 0x00aba7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}




void FUN_00aba7d8(long *param_1,int param_2)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,param_2);
  FUN_00f0d75c(param_1 + 0x42b,&local_48);
  *(uint *)((long)param_1 + 0x2064) =
       *(uint *)((long)param_1 + 0x2064) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x2064) & 3 | (uint)(param_2 != 0) << 2;
  (**(code **)(*param_1 + 0x180))(param_1);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aba888(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  fVar4 = (float)(**(code **)(*param_1 + 0x48))();
  plVar2 = param_1 + 0x3de;
  fVar5 = (float)FUN_00f0eac0(plVar2);
  plVar1 = param_1 + 0xe4;
  fVar6 = (float)FUN_00f0d4e0(plVar1);
  fVar7 = (fVar4 - (fVar5 + fVar6 + 4.0)) * 0.5;
  fVar5 = (float)FUN_00f0d4e0(plVar1);
  fVar6 = 0.0;
  if ((*(byte *)((long)param_1 + 0x1f74) >> 2 & 1) != 0) {
    fVar6 = ((fVar4 - fVar5) * 0.5 - fVar7) + -4.0;
  }
  *(float *)(param_1 + 0x128) = fVar6;
  fVar5 = (float)FUN_00f0eac0(plVar2);
  fVar4 = *(float *)(param_1 + 0x48d) + fVar7 + (fVar5 * 0.5 - fVar4 * 0.5) + -6.0;
  fVar5 = *(float *)((long)param_1 + 0x246c) + *(float *)((long)param_1 + 0x944);
  if ((*(float *)(param_1 + 0x3e6) != fVar4) || (*(float *)((long)param_1 + 0x1f34) != fVar5)) {
    *(float *)(param_1 + 0x3e6) = fVar4;
    *(float *)((long)param_1 + 0x1f34) = fVar5;
    FUN_0091ada4(plVar2);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(param_1[0x3de] + 0x28))(plVar2,&local_60);
  FUN_00f0db64(*(float *)((long)param_1 + 0x1594) -
               (*(float *)((long)param_1 + 0x158c) + *(float *)((long)param_1 + 0x158c)),0,
               0x3f800000,plVar1);
  fVar6 = *(float *)(param_1 + 0x415);
  plVar1 = param_1 + 0x42b;
  *(uint *)((long)param_1 + 0x20ec) = *(uint *)((long)param_1 + 0x20ec) | 0x10;
  *(uint *)((long)param_1 + 0x21dc) = *(uint *)((long)param_1 + 0x21dc) | 0x10;
  fVar4 = (float)FUN_00f0e700(param_1 + 0x40d);
  fVar5 = *(float *)(param_1 + 0x433);
  if (fVar5 != fVar6 + fVar4) {
    *(float *)(param_1 + 0x433) = fVar6 + fVar4;
    FUN_0091ada4(plVar1);
  }
  fVar4 = (float)FUN_00f0d548(plVar1);
  FUN_00f0d548(plVar1);
  fVar5 = fVar5 + -10.0;
  FUN_00f13f08(fVar4 + -10.0,param_1 + 0x451);
  fVar4 = (float)FUN_00f0d548(plVar1);
  FUN_00f0d548(plVar1);
  fVar5 = fVar5 + -10.0;
  FUN_00f13f08(fVar4 + -10.0,param_1 + 0x46f);
  plVar1 = param_1 + 0x3fc;
  fVar4 = (float)FUN_00f01c54(plVar1,0,0,1,1);
  FUN_00f01c20(param_1 + 0x4e);
  fVar6 = fVar5 * -0.5;
  FUN_00f01c54(plVar1,0,0,1,1);
  fVar6 = fVar6 + fVar5 * -0.5;
  if ((*(float *)(param_1 + 0x404) != fVar4 * -0.5) || (*(float *)((long)param_1 + 0x2024) != fVar6)
     ) {
    *(float *)(param_1 + 0x404) = fVar4 * -0.5;
    *(float *)((long)param_1 + 0x2024) = fVar6;
    FUN_0091ada4(plVar1);
  }
  FUN_00ab96c4(param_1);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00abab28(long param_1)

{
  FUN_00f01980(param_1 + 0x1fe0);
  if ((*(uint *)(param_1 + 0x2064) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x2064) = *(uint *)(param_1 + 0x2064) & 0xffff807f;
    FUN_0091ada4(param_1 + 0x1fe0);
    return;
  }
  return;
}




void FUN_00abab78(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f800000,puVar3);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efdd74(puVar4);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f000000,puVar4);
  FUN_00efddc4(0x3f800000,puVar4);
  param_1 = param_1 + 0x1fe0;
  FUN_00f01980(param_1);
  FUN_00f022a0(param_1,puVar3);
  FUN_00f022a0(param_1,puVar4);
  return;
}




void FUN_00abad04(long param_1,undefined8 param_2)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  FUN_00f0490c(param_2);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f800000,puVar3);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efdd74(puVar4);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f000000,puVar4);
  FUN_00efddc4(0x3f800000,puVar4);
  param_1 = param_1 + 0x1fe0;
  FUN_00f01980(param_1);
  FUN_00f022a0(param_1,puVar3);
  FUN_00f022a0(param_1,puVar4);
  return;
}




void FUN_00abae98(long *param_1,byte param_2)

{
  undefined4 uVar1;
  
  *(byte *)((long)param_1 + 0x26c) = *(byte *)((long)param_1 + 0x26c) & 0xfe | param_2 & 1;
  (**(code **)(*param_1 + 0x180))();
  uVar1 = 0x3f800000;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  FUN_00f0e6bc(uVar1,param_1 + 0x3de);
  return;
}




void FUN_00abaee8(long *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  FUN_00b08d84();
  plVar1 = param_1 + 0x4e;
  *param_1 = (long)&PTR_FUN_027d5388;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x5f;
  param_1[0x4e] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x7d;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x9b;
  FUN_00f0e4a8(plVar4);
  *(undefined4 *)(param_1 + 0xb9) = 0xff000000;
  *(undefined4 *)((long)param_1 + 0x5cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xba) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5d4) = 0xffffffff;
  param_1[0xbc] = -0x407fffff40800000;
  param_1[0xbb] = 0x3eb333333e4ccccd;
  param_1[0xbd] = 0x3f8000003f800000;
  *(undefined1 *)(param_1 + 0xbe) = 0;
  FUN_00f023ec(param_1 + 0x34,plVar1,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar4,1);
  *(uint *)((long)param_1 + 0x46c) = *(uint *)((long)param_1 + 0x46c) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x55c) = *(uint *)((long)param_1 + 0x55c) & 0xffffffbf;
  local_70 = 0x3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_70);
  FUN_00abb12c(param_1,param_2 & 1);
  if ((*(float *)(param_1 + 0x58) != 0.5) || (*(float *)((long)param_1 + 0x2c4) != 0.5)) {
    param_1[0x58] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x87) != 0.5) || (*(float *)((long)param_1 + 0x43c) != 0.5)) {
    param_1[0x87] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  if ((*(float *)(param_1 + 0x69) != 0.5) || (*(float *)((long)param_1 + 0x34c) != 0.5)) {
    param_1[0x69] = 0x3f0000003f000000;
    FUN_0091ada4(plVar2);
  }
  if ((*(float *)(param_1 + 0xa5) != 0.5) || (*(float *)((long)param_1 + 0x52c) != 0.5)) {
    param_1[0xa5] = 0x3f0000003f000000;
    FUN_0091ada4(plVar4);
  }
  (**(code **)(*param_1 + 0x40))(0x41400000,param_1);
  (**(code **)(*param_1 + 0x168))(param_1);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

