// functions/00a50 — 10 functions
#include "libGameKindred.h"




void FUN_00a50260(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00f13f08(param_3 + 0xb8);
  FUN_00f07940(0,0,param_3 + 0xb8,8,param_3,8);
  FUN_00f13f08(param_1,param_2,param_3 + 0x1a8);
  FUN_00f07940(0,0,param_3 + 0x1a8,8,param_3,8);
  FUN_00f13f08(param_1,param_2,param_3 + 0x298);
  FUN_00f07940(0,0,param_3 + 0x298,8,param_3,8);
  FUN_00f13f08(param_1,param_2,param_3 + 0x388);
  FUN_00f07940(0,0,param_3 + 0x388,8,param_3,8);
  FUN_00f13f08(param_1,param_2,param_3 + 0x478);
  FUN_00f07940(0,0,param_3 + 0x478,8,param_3,8);
  return;
}




undefined8 FUN_00a50370(long param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (param_3 != 0xffff) {
    uVar1 = FUN_00d74ad0(param_2,param_3);
    lVar3 = FUN_00d74ab0(param_2,uVar1);
    uVar2 = 0;
    if (lVar3 != 0) {
      FUN_00f0e578(param_1 + 0xb8,*(undefined8 *)(lVar3 + 8));
      uVar2 = 1;
    }
  }
  return uVar2;
}




void FUN_00a503d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  
  FUN_00f01980(param_3);
  uVar2 = FUN_00efed6c(param_1);
  uVar3 = FUN_00eff63c(0x3f800000,0x3f800000,0x3dcccccd,0);
  uVar4 = FUN_00efee28(0x3f800000,0x3dcccccd,0);
  uVar5 = FUN_00efee28(0,0x3f4ccccd,FUN_0091aa80);
  uVar6 = FUN_00eff63c(0x40600000,0x40600000,0x3f4ccccd,FUN_009a7608);
  lVar1 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcd98(puVar8);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar8,uVar5,uVar6,0);
  uVar5 = FUN_00efed6c(0x3fc00000);
  lVar1 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efd208(puVar9);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efd2dc(puVar9,uVar3,uVar4,puVar8,uVar5,0);
  FUN_00efd3bc(puVar9);
  FUN_00f02308(param_3,uVar2,puVar9,0);
  return;
}




void FUN_00a50608(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 local_98;
  void *local_90;
  code *local_88;
  long *plStack_80;
  long *local_78;
  code *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_00f13ca4();
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027cb398;
  uVar6 = DAT_03214ce8;
  plVar1 = param_1 + 0x1b;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xffff;
  *(undefined4 *)((long)param_1 + 0xd4) = 0xffff;
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  FUN_00f017e8(plVar1);
  param_1[0x1b] = (long)&PTR_FUN_027c1f80;
  FUN_00a4ffa8(param_1 + 0x2c);
  FUN_00a47988(param_1 + 0xd9);
  plVar2 = param_1 + 0x4ad;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x4d3;
  FUN_00f0d160(plVar3);
  param_1[0x4fa] = 0;
  param_1[0x4f9] = 0;
  FUN_00e70314(param_1 + 0x4fb);
  *(undefined4 *)(param_1 + 0x4fd) = 0;
  *(undefined4 *)((long)param_1 + 0x27ec) = 0xffff;
  *(undefined4 *)(param_1 + 0x4fe) = 0x442f0000;
  *(undefined2 *)((long)param_1 + 0x27f4) = 0x5f01;
  uVar7 = FUN_00d7e3d0();
  FUN_00e6ea58(uVar7,param_1,0xe4cbad13,FUN_00a50a20,0);
  uVar7 = FUN_00d7e3d0();
  FUN_00e6ea58(uVar7,param_1,0x97bcfebd,FUN_00a50b4c,0);
  uVar7 = FUN_00d7e3d0();
  FUN_00e6ea58(uVar7,param_1,0xb924e89d,FUN_00a50c34,0);
  uVar7 = FUN_00d7e3d0();
  FUN_00e6ea58(uVar7,param_1,&DAT_02a9a0b2,FUN_00a50d1c,0);
  uVar7 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar7,param_1,0xfb4b760d,FUN_00a50d58,0);
  uVar7 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar7,param_1,0x6658bb67,FUN_00a50e30,0);
  uVar7 = FUN_009f1f64();
  local_88 = (code *)0x0;
  local_70 = FUN_00a53c2c;
  plStack_80 = param_1;
  local_78 = param_1;
  FUN_009104f8(uVar7,&local_88);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,param_1 + 0xd9,1);
  FUN_00f023ec(plVar1,param_1 + 0x2c,1);
  uVar7 = FUN_00e6ce7c("HUD_QUICKBUY_LABEL",0);
  thunk_FUN_00e7051c(&local_98,uVar7);
  FUN_00f0d75c(plVar2,&local_98);
  FUN_00f0da30(plVar2,1);
  FUN_00f0da80(plVar2,&DAT_01bee7f6);
  uVar4 = *(uint *)((long)param_1 + 0x271c);
  if ((uVar4 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x271c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x7280;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0da30(plVar3,1);
  FUN_00f0da80(plVar3,&DAT_01bee7f6);
  plVar1 = param_1 + 0x2d;
  local_60 = DAT_03210f84;
  local_88 = FUN_00a50f20;
  local_70 = (code *)0x0;
  uStack_68 = 0;
  local_78 = (long *)0x0;
  plStack_80 = param_1;
  FUN_009693a0(plVar1,&local_88);
  local_88 = FUN_00a50f20;
  local_60 = DAT_03210f58;
  local_70 = (code *)0x0;
  uStack_68 = 0;
  local_78 = (long *)0x0;
  plStack_80 = param_1;
  FUN_009693a0(plVar1,&local_88);
  local_60 = DAT_03210f94;
  local_88 = FUN_00a50f24;
  local_70 = (code *)0x0;
  uStack_68 = 0;
  local_78 = (long *)0x0;
  plStack_80 = param_1;
  FUN_009693a0(plVar1,&local_88);
  local_60 = DAT_03210f98;
  local_88 = FUN_00a50f2c;
  local_70 = (code *)0x0;
  uStack_68 = 0;
  local_78 = (long *)0x0;
  plStack_80 = param_1;
  FUN_009693a0(plVar1,&local_88);
  local_60 = DAT_03210f8c;
  local_88 = FUN_00a50f44;
  local_70 = (code *)0x0;
  uStack_68 = 0;
  local_78 = (long *)0x0;
  plStack_80 = param_1;
  FUN_009693a0(plVar1,&local_88);
  local_88 = FUN_00a50f44;
  local_60 = DAT_03210f60;
  local_70 = (code *)0x0;
  uStack_68 = 0;
  local_78 = (long *)0x0;
  plStack_80 = param_1;
  FUN_009693a0(plVar1,&local_88);
  FUN_00a50fa8(param_1,0,0);
  FUN_00a511a8(param_1);
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a50d1c(long param_1)

{
  *(byte *)(param_1 + 0x27f5) = *(byte *)(param_1 + 0x27f5) & 0x7f;
  return;
}




void FUN_00a50f20(void)

{
  return;
}




void FUN_00a50f24(undefined8 param_1)

{
  FUN_00a51cc0(param_1,0);
  return;
}




void FUN_00a50f2c(long param_1)

{
  FUN_00b89d24(0x3e800000,param_1 + 0x6c8,0,4,1);
  return;
}




void FUN_00a50f44(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 0x14;
  local_38 = &PTR_FUN_027c8518;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a50fa8(long param_1,byte param_2,ulong param_3)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  uint uVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pbVar1 = (byte *)(param_1 + 0x27f5);
  if ((param_2 & 1) != (*pbVar1 & 1)) {
    fVar9 = (float)FUN_00f00274();
    fVar10 = (float)FUN_00f0eac0(param_1 + 0x218);
    fVar11 = fVar9 + fVar10;
    if ((*pbVar1 & 0x20) != 0) {
      fVar11 = -(fVar9 + fVar10);
    }
    if ((param_3 & 1) == 0) {
      uVar2 = *(uint *)(param_1 + 0x15c);
      uVar7 = 0xff;
      if ((param_2 & 1) == 0) {
        uVar7 = 0;
      }
      if ((uVar2 >> 7 & 0xff) != uVar7) {
        *(uint *)(param_1 + 0x15c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar7 << 7;
        FUN_0091ada4(param_1 + 0xd8);
      }
      fVar9 = 0.0;
      if ((param_2 & 1) == 0) {
        fVar9 = fVar11;
      }
      if ((*(float *)(param_1 + 0x118) != fVar9) || (*(float *)(param_1 + 0x11c) != 0.0)) {
        *(float *)(param_1 + 0x118) = fVar9;
        *(undefined4 *)(param_1 + 0x11c) = 0;
        FUN_0091ada4(param_1 + 0xd8);
      }
    }
    else {
      fVar9 = 0.0;
      fVar10 = 1.0;
      if ((param_2 & 1) == 0) {
        fVar9 = fVar11;
        fVar10 = 0.0;
      }
      uVar4 = FUN_00efee28(fVar10,0x3e800000,FUN_0091aa80);
      uVar5 = FUN_00efef08(fVar9,0,0x3e800000,FUN_0091aa80);
      lVar3 = DAT_03210d00;
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
        *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
        FUN_00efcd98(puVar8);
        *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
      }
      FUN_00efcea4(puVar8,uVar4,uVar5,0);
      FUN_00f01980(param_1 + 0xd8);
      FUN_00f022a0(param_1 + 0xd8,puVar8);
    }
    *pbVar1 = *pbVar1 & 0xfe | param_2 & 1;
  }
  return;
}

