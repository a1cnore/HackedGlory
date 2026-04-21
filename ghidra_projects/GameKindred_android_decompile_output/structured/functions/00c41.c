// functions/00c41 — 19 functions
#include "libGameKindred.h"




void FUN_00c41024(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_009b8d90();
  lVar2 = FUN_01985d44(uVar1,DAT_0312ebb0);
  if (lVar2 != 0) {
    FUN_009dbd5c(0x3f800000,lVar2,"build://Sounds/UI.assetbundle/sfx__minimap_avoid.mp3",0,1,0);
    FUN_009dbea4(lVar2);
    return;
  }
  return;
}




void FUN_00c41084(undefined1 param_1 [16],undefined4 param_2,long *param_3,int param_4)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((int)param_3[0x75] != param_4) {
    FUN_00c41190(param_3);
    if (param_4 != 0) {
      do {
        pvVar2 = operator_new(0x358);
        FUN_00c41acc();
        local_50 = pvVar2;
        FUN_00c411ec(param_3 + 0x75,&local_50);
        plVar3 = *(long **)(param_3[0x76] + (ulong)((int)param_3[0x75] - 1) * 8);
        uVar4 = (**(code **)(*plVar3 + 0x58))(plVar3,0,0,1,1);
        local_50 = (void *)CONCAT44(param_2,uVar4);
        FUN_00f13f18(plVar3,&local_50);
        FUN_00f023ec(param_3 + 0x5e,
                     *(undefined8 *)(param_3[0x76] + (ulong)((int)param_3[0x75] - 1) * 8),1);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    (**(code **)(*param_3 + 0xe8))(param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c41190(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x3a8);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x3b0) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x3a8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x3b0) != 0) {
    *(undefined4 *)(param_1 + 0x3a8) = 0;
  }
  return;
}




void FUN_00c411ec(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00c42bf4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c41274(long param_1,uint *param_2,ulong param_3)

{
  ulong uVar1;
  
  if (*param_2 != 0) {
    uVar1 = 0;
    do {
      if (*(uint *)(param_1 + 0x3a8) <= uVar1) {
        return;
      }
      FUN_00c412e4(*(undefined8 *)(*(long *)(param_1 + 0x3b0) + uVar1 * 8),
                   *(undefined4 *)(*(long *)(param_2 + 2) + uVar1 * 4),
                   (param_3 & 0xffffffff) == uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *param_2);
  }
  return;
}




void FUN_00c412e4(long param_1,int param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  ushort uVar6;
  long lVar7;
  ushort *puVar8;
  undefined4 local_80 [2];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0x355) != '\0') && (*(int *)(param_1 + 0x350) == param_2))
  goto LAB_00c415d4;
  if (param_2 == 0) {
    FUN_00f01980(param_1 + 0xb8);
    if ((*(float *)(param_1 + 0xf8) != 0.0) || (*(float *)(param_1 + 0xfc) != 0.0)) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      FUN_0091ada4(param_1 + 0xb8);
    }
    *(undefined1 *)(param_1 + 0x354) = 0;
    *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) | 4;
    local_80[0] = 0xff5e4040;
    FUN_00f0e670(param_1 + 0x260,local_80,2);
  }
  else {
    if (param_2 == 1) {
      puVar5 = &DAT_031339e8;
      if ((param_3 & 1) == 0) {
        puVar5 = &DAT_01bee7fa;
      }
    }
    else {
      if (param_2 != 2) goto LAB_00c415c8;
      local_80[0] = 0xff5a5ad2;
      puVar5 = local_80;
    }
    lVar7 = param_1 + 0x260;
    FUN_00f0e670(lVar7,puVar5,2);
    if ((*(float *)(param_1 + 0x2a8) != 2.0) || (*(float *)(param_1 + 0x2ac) != 2.0)) {
      *(undefined8 *)(param_1 + 0x2a8) = 0x4000000040000000;
      FUN_0091ada4(lVar7);
    }
    if ((*(uint *)(param_1 + 0x2e4) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x2e4) = *(uint *)(param_1 + 0x2e4) & 0xffff807f;
      FUN_0091ada4(lVar7);
    }
    uVar3 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e4ccccd,FUN_00a269a4);
    uVar4 = FUN_00efee28(0x3f800000,0x3e19999a,0);
    lVar2 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efcd98(puVar8);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efcea4(puVar8,uVar3,uVar4,0);
    FUN_00f022a0(lVar7,puVar8);
    uVar3 = FUN_00efed6c(0x3e4ccccd);
    lVar7 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar7 + 0x20014) = *(int *)(lVar7 + 0x20014) + 1;
      FUN_00efc9c0(puVar8);
      *(int *)(lVar7 + 0x20020) = *(int *)(lVar7 + 0x20020) + 1;
    }
    FUN_00efca10(puVar8,0);
    FUN_00f02308(param_1 + 0x170,uVar3,puVar8,0);
  }
LAB_00c415c8:
  *(undefined1 *)(param_1 + 0x355) = 1;
  *(int *)(param_1 + 0x350) = param_2;
LAB_00c415d4:
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4160c(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f0d75c(param_1 + 0x1490);
  FUN_00f0d75c(param_1 + 0x15c0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00c4165c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0xff0) + 0xe8))(param_1 + 0xff0);
  return;
}




void FUN_00c41660(long *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f0d75c(param_1 + 0x94);
  FUN_00f0d75c(param_1 + 0xba,param_3);
                    /* WARNING: Could not recover jumptable at 0x00c4169c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c416a0(float param_1,float param_2,long param_3)

{
  *(float *)(param_3 + 0x16f8) = param_1 / param_2;
  return;
}




void FUN_00c416ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*(uint *)(param_1 + 0x2ec) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x2ec) = *(uint *)(param_1 + 0x2ec) & 0xffff807f;
    FUN_0091ada4(param_1 + 0x268);
  }
  uVar2 = FUN_00efee28(0x3f800000,0x3e800000,0);
  FUN_00f022a0(param_1 + 0x268,uVar2);
  lVar1 = param_1 + 0x10a8;
  FUN_00f01980(lVar1);
  if ((*(uint *)(param_1 + 0x112c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x112c) = *(uint *)(param_1 + 0x112c) & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  uVar2 = FUN_00efed6c(0x3e800000);
  uVar3 = FUN_00efee28(0x3f800000,0x41200000,0);
  FUN_00f02308(lVar1,uVar2,uVar3,0);
  return;
}




void FUN_00c4175c(long param_1)

{
  FUN_00f01980(param_1 + 0x10a8);
  if ((*(uint *)(param_1 + 0x112c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x112c) = *(uint *)(param_1 + 0x112c) & 0xffff807f;
    FUN_0091ada4(param_1 + 0x10a8);
    return;
  }
  return;
}




void FUN_00c417ac(long param_1)

{
  FUN_00c417b4(param_1 + 0xff0);
  return;
}




void FUN_00c417b4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort *puVar7;
  undefined4 local_70 [2];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_70[0] = 0xff0606a4;
  FUN_00f0e670(param_1 + 0x3a0,local_70,2);
  lVar1 = param_1 + 0xb8;
  FUN_00f01980(lVar1);
  FUN_00f0e670(lVar1,&DAT_01bee802,2);
  if ((~*(uint *)(param_1 + 0x13c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 0x7f80;
    FUN_0091ada4(lVar1);
  }
  uVar4 = FUN_00efee28(0x3f800000,0x3f000000,0);
  uVar5 = FUN_00efee28(0x3e800000,0x3f000000,0);
  lVar3 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efd208(puVar7);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efd2dc(puVar7,uVar4,uVar5,0);
  FUN_00efd3bc(puVar7);
  FUN_00f022a0(lVar1,puVar7);
  param_1 = param_1 + 0x2b0;
  local_70[0] = 0xff0606a4;
  FUN_00f0e670(param_1,local_70,2);
  local_70[0] = 0xff0606a4;
  uVar4 = FUN_00eff108(0x3f000000,param_1,local_70,0,2);
  uVar5 = FUN_00eff108(0x3f000000,param_1,&DAT_01bee7fa,0,2);
  lVar1 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efd208(puVar7);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efd2dc(puVar7,uVar4,uVar5,0);
  FUN_00efd3bc(puVar7);
  FUN_00f022a0(param_1,puVar7);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c41a64(long param_1,undefined8 param_2)

{
  if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  }
  FUN_00f04900(param_2);
  return;
}




void FUN_00c41a98(long param_1,undefined8 param_2)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  }
  FUN_00f04900(param_2);
  return;
}




void FUN_00c41acc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027fbaa0;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x2e;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x4c;
  FUN_00f0e4a8(plVar3);
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined2 *)((long)param_1 + 0x354) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f0e548(plVar2,PTR_s_build___VGX_common_atlas_02be3540,"global_playericon_outline");
  local_78 = (code *)CONCAT44(local_78._4_4_,0xffa08c8c);
  FUN_00f0e670(plVar2,&local_78,2);
  FUN_00f0e548(plVar3,PTR_s_build___VGX_common_atlas_02be3540,"global_playericon_solid");
  FUN_00f0e9c0(plVar2,1);
  FUN_00f0e9c0(plVar3,1);
  FUN_00f0e8cc(plVar2,0x30);
  FUN_00f0e8cc(plVar3,0x30);
  if ((*(float *)(param_1 + 0x56) != (float)DAT_03218f08) ||
     (*(float *)((long)param_1 + 0x2b4) != DAT_03218f08._4_4_)) {
    param_1[0x56] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar3);
  }
  uVar6 = 0;
  FUN_00f07940(0,plVar3,8,plVar2,8);
  uVar5 = FUN_00f01c54(plVar1,0,0,1,1);
  local_78 = (code *)CONCAT44(uVar6,uVar5);
  FUN_00f13f18(plVar1,&local_78);
  local_50 = DAT_03210f84;
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0x10;
  local_78 = thunk_FUN_00c41cfc;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 1,&local_78);
  local_78 = thunk_FUN_00c41cfc;
  local_50 = DAT_03210f58;
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




void thunk_FUN_00c41cfc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  
  if ((*(char *)(param_1 + 0x354) == '\0') && (*(int *)(param_1 + 0x350) != 0)) {
    uVar2 = FUN_00eff008(0,0x41400000,0x3f000000,FUN_00aa89f4);
    uVar3 = FUN_00eff008(0,0xc1400000,0x3f000000,FUN_00aa89f4);
    lVar1 = DAT_03210d00;
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
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efd208(puVar5);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efd2dc(puVar5,uVar2,uVar3,0);
    FUN_00efd3bc(puVar5);
    FUN_00f022a0(param_1 + 0xb8,puVar5);
    *(undefined1 *)(param_1 + 0x354) = 1;
  }
  return;
}




void FUN_00c41cfc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  
  if ((*(char *)(param_1 + 0x354) == '\0') && (*(int *)(param_1 + 0x350) != 0)) {
    uVar2 = FUN_00eff008(0,0x41400000,0x3f000000,FUN_00aa89f4);
    uVar3 = FUN_00eff008(0,0xc1400000,0x3f000000,FUN_00aa89f4);
    lVar1 = DAT_03210d00;
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
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efd208(puVar5);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efd2dc(puVar5,uVar2,uVar3,0);
    FUN_00efd3bc(puVar5);
    FUN_00f022a0(param_1 + 0xb8,puVar5);
    *(undefined1 *)(param_1 + 0x354) = 1;
  }
  return;
}




void FUN_00c41e38(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 local_70 [2];
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_3 + 0x17;
  *param_3 = (long)&PTR_FUN_027fb810;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_3 + 0x35;
  FUN_00f10d7c(plVar2);
  plVar3 = param_3 + 0x56;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_3 + 0x74;
  FUN_00f0eda4(plVar4);
  plVar5 = param_3 + 0x94;
  FUN_00f0d160(plVar5);
  plVar6 = param_3 + 0xba;
  FUN_00f0d160(plVar6);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar3,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar4,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar5,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar6,1);
  FUN_00f0e548(plVar1,PTR_s_build___VGX_common_atlas_02be3540,"solid_round_glow");
  FUN_00f0e548(plVar2,PTR_s_build___VGX_common_atlas_02be3540,"match_found_fill_bg");
  FUN_00f10dc8(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_large_circle");
  FUN_00f0e698(plVar2,0xb);
  FUN_00f0e548(plVar3,PTR_s_build___VGX_common_atlas_02be3540,"solid_ring_bar_outline");
  local_70[0] = 0xffc8bebe;
  FUN_00f0e670(plVar3,local_70,2);
  FUN_00f0e548(plVar4,PTR_s_build___VGX_common_atlas_02be3540,"Solid_Ring_Bar_Fill");
  uVar8 = FUN_00f0e700(plVar4);
  *(undefined4 *)(param_3 + 0xe0) = uVar8;
  *(undefined4 *)((long)param_3 + 0x704) = param_2;
  FUN_00f0eea0(plVar4,FUN_00c402c4,param_3);
  local_70[0] = 0xffc8bebe;
  FUN_00f0d92c(plVar5,PTR_s_build___Fonts_Brandon_Bold_130_f_02be9cb0,local_70);
  local_70[0] = 0xffc8bebe;
  FUN_00f0d92c(plVar6,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,local_70);
  FUN_00f13f68(param_3,0x19000000190);
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

