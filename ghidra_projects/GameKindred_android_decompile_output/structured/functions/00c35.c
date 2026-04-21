// functions/00c35 — 15 functions
#include "libGameKindred.h"




void FUN_00c3506c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  FUN_00f1306c();
  plVar1 = param_1 + 0x2c;
  param_1[0x2b] = 0;
  *param_1 = (long)&PTR_FUN_027fa428;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x4a;
  FUN_00f1306c(plVar2);
  plVar3 = param_1 + 0x75;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x93;
  FUN_00ecfd6c(plVar4,0);
  plVar5 = param_1 + 0x13a;
  FUN_00f11234(plVar5);
  param_1[0x16f] = 0;
  param_1[0x16e] = 0;
  *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f133a4(plVar2,plVar3,1);
  FUN_00f133a4(plVar2,plVar5,1);
  FUN_00f023ec(plVar5,plVar4,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  local_60 = DAT_03210f60;
  *(uint *)((long)param_1 + 0x1e4) = *(uint *)((long)param_1 + 0x1e4) & 0xffffffbf | 0x10;
  local_88 = FUN_00c35258;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 0x2d,&local_88);
  local_88 = FUN_00c35258;
  local_60 = DAT_03210f8c;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 0x2d,&local_88);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  FUN_00ed04d8(plVar4,0,1);
  *(uint *)((long)param_1 + 0x51c) = *(uint *)((long)param_1 + 0x51c) & 0xffffffbf;
  (**(code **)(*param_1 + 0x90))(param_1);
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c35258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c35264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x158) + 8))();
  return;
}




void FUN_00c35268(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fa428;
  FUN_00c35348();
  if ((void *)param_1[0x16f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x16f]);
    param_1[0x16f] = 0;
    param_1[0x16e] = 0;
  }
  FUN_00f13d08(param_1 + 0x13a);
  FUN_00ed00e0(param_1 + 0x93);
  param_1[0x75] = &PTR_FUN_028266f0;
  param_1[0x8c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8f);
  FUN_00f13d08(param_1 + 0x75);
  param_1[0x4a] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x61);
  FUN_00f13d08(param_1 + 0x4a);
  param_1[0x2c] = &PTR_FUN_028266f0;
  param_1[0x43] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x46);
  FUN_00f13d08(param_1 + 0x2c);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c35348(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0xb70);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0xb78) + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0xb78) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0xb70);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0xb78) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0xb78) != 0) {
    *(undefined4 *)(param_1 + 0xb70) = 0;
  }
  return;
}




void FUN_00c353c8(void *param_1)

{
  FUN_00c35268();
  operator_delete(param_1);
  return;
}




void FUN_00c353ec(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  undefined4 local_58;
  float fStack_54;
  undefined4 local_50;
  undefined1 auStack_4c [4];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00f00298(auStack_4c,&local_50);
  FUN_00f13f08(0x44234000,local_50,param_1 + 0x75);
  plVar4 = param_1 + 0x13a;
  FUN_00f13f08(0x44174000,local_50,plVar4);
  FUN_00f112f0(plVar4,1);
  plVar1 = param_1 + 0x2c;
  FUN_00f07940(0,0,param_1 + 0x75,4,plVar1,4);
  fVar8 = 0.0;
  FUN_00f07940(0,plVar4,4,plVar1,4);
  if ((int)param_1[0x16e] != 0) {
    uVar7 = 0;
    do {
      if (uVar7 == 0) {
        uVar5 = 0;
        uVar6 = 0;
        plVar4 = param_1 + 0x93;
      }
      else {
        uVar5 = 4;
        uVar6 = 6;
        plVar4 = *(long **)(param_1[0x16f] + (ulong)((int)uVar7 - 1) * 8);
      }
      fVar8 = 24.0;
      FUN_00f07940(0,*(undefined8 *)(param_1[0x16f] + uVar7 * 8),uVar5,plVar4,uVar6);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0x16e));
  }
  plVar4 = param_1 + 0x93;
  FUN_00ed0418(plVar4,1);
  uVar5 = FUN_00ed0464(plVar4);
  FUN_00ed0470(plVar4,1,0,1,1);
  fVar8 = fVar8 + 24.0;
  FUN_00ed02d8(uVar5,plVar4);
  FUN_00f13238(param_1 + 0x4a);
  (**(code **)(*param_1 + 0x138))(param_1);
  plVar4 = (long *)FUN_00f00438("root-layer");
  local_58 = (**(code **)(*plVar4 + 0x48))();
  fStack_54 = fVar8;
  FUN_00f13f18(plVar1,&local_58);
  uVar2 = *(uint *)((long)param_1 + 0x1e4);
  if ((uVar2 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x1e4) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar1);
  }
  FUN_00f07940(0,0,plVar1,0,plVar4,0);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c355fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5
                 )

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  void *local_90;
  code *local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0xf90);
  FUN_00c35cc0(pvVar2,param_2,param_3,param_4,param_5 & 1);
  local_90 = pvVar2;
  FUN_00ed026c(param_1 + 0x498,pvVar2,1);
  FUN_00c35724(param_1 + 0xb70,&local_90);
  if ((param_5 & 1) == 0) {
    local_60 = DAT_03210f60;
    uVar3 = (ulong)(*(int *)(param_1 + 0xb70) - 1);
    local_88 = FUN_00c357ac;
    local_78 = 0;
    uStack_70 = 0;
    lStack_80 = param_1;
    local_68 = uVar3;
    FUN_009693a0((long)local_90 + 8,&local_88);
    local_88 = FUN_00c357ac;
    local_60 = DAT_03210f8c;
    local_78 = 0;
    uStack_70 = 0;
    lStack_80 = param_1;
    local_68 = uVar3;
    FUN_009693a0((long)local_90 + 8,&local_88);
    *(uint *)((long)local_90 + 0x84) = *(uint *)((long)local_90 + 0x84) | 0x10;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c35724(uint *param_1,undefined8 *param_2)

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
    FUN_00c362ac(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c357ac(long param_1)

{
  undefined8 in_x4;
  
  FUN_00c35b04(param_1,in_x4);
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_skin_confirm.mp3",0,0);
                    /* WARNING: Could not recover jumptable at 0x00c357f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x158) + 8))();
  return;
}




void FUN_00c357f4(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  FUN_00f01980();
  lVar1 = param_1 + 0x250;
  FUN_00f01980(lVar1);
  *(uint *)(param_1 + 0x1e4) =
       *(uint *)(param_1 + 0x1e4) & 0xfffffff8 | *(uint *)(param_1 + 0x1e4) & 3 | (param_2 & 1) << 2
  ;
  lVar3 = DAT_03210d00;
  if ((param_2 & 1) == 0) {
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
      FUN_00efdd74(puVar5);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3dcccccd,puVar5);
    FUN_00efddc4(0,puVar5);
    lVar1 = DAT_03210d00;
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
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efc8e8(puVar6);
      *(undefined ***)puVar6 = &PTR_FUN_02825148;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00f02308(param_1,puVar5,puVar6,0);
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x84);
  *(uint *)(param_1 + 0x84) = uVar2 | 4;
  if ((~uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = uVar2 | 0x7f84;
    FUN_0091ada4(param_1);
  }
  if ((*(uint *)(param_1 + 0x2d4) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x2d4) = *(uint *)(param_1 + 0x2d4) & 0xffff807f;
    FUN_0091ada4(lVar1);
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
    FUN_00efdd74(puVar5);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3dcccccd,puVar5);
  FUN_00efddc4(0x3f800000,puVar5);
  FUN_00f022a0(lVar1,puVar5);
  if (*(float *)(param_1 + 0x4dc) != 0.0) {
    *(undefined4 *)(param_1 + 0x4dc) = 0;
    FUN_0091ada4(param_1 + 0x498);
    return;
  }
  return;
}




void FUN_00c35abc(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00c35b04(param_1,param_3);
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_skin_confirm.mp3",0,0);
                    /* WARNING: Could not recover jumptable at 0x00c35b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x158) + 8))();
  return;
}




void FUN_00c35b04(undefined1 param_1 [16],float param_2,long param_3,uint param_4)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  
  if ((-1 < (int)param_4) && (param_4 < *(uint *)(param_3 + 0xb70))) {
    uVar3 = 0;
    uVar6 = (ulong)param_4;
    do {
      bVar1 = uVar6 == uVar3;
      lVar4 = *(long *)(*(long *)(param_3 + 0xb78) + uVar3 * 8);
      uVar3 = uVar3 + 1;
      uVar5 = (uint)bVar1;
      *(uint *)(lVar4 + 0x5dc) =
           *(uint *)(lVar4 + 0x5dc) & 0xfffffff8 | *(uint *)(lVar4 + 0x5dc) & 3 | uVar5 << 2;
      *(uint *)(lVar4 + 0xaf4) =
           *(uint *)(lVar4 + 0xaf4) & 0xfffffff8 | *(uint *)(lVar4 + 0xaf4) & 3 | uVar5 << 2;
      *(uint *)(lVar4 + 0x4ec) =
           *(uint *)(lVar4 + 0x4ec) & 0xfffffff8 | *(uint *)(lVar4 + 0x4ec) & 3 | (uint)!bVar1 << 2;
      *(uint *)(param_3 + 0xb80) = param_4;
    } while (uVar3 < *(uint *)(param_3 + 0xb70));
    (**(code **)**(undefined8 **)(param_3 + 0x158))
              (*(undefined8 **)(param_3 + 0x158),
               *(undefined8 *)(*(long *)(*(long *)(param_3 + 0xb78) + uVar6 * 8) + 0xf88));
    fVar7 = *(float *)(param_3 + 0x4dc);
    plVar2 = *(long **)(*(long *)(param_3 + 0xb78) + uVar6 * 8);
    fVar8 = *(float *)((long)plVar2 + 0x44);
    (**(code **)(*plVar2 + 0x48))();
    if (0.0 <= fVar8 + fVar7) {
      fVar8 = fVar8 + param_2;
      fVar7 = *(float *)(param_3 + 0x4dc) + fVar8;
      FUN_00f13e54(param_3 + 0x9d0);
      if (fVar8 < fVar7) {
        fVar7 = *(float *)(*(long *)(*(long *)(param_3 + 0xb78) + uVar6 * 8) + 0x44);
        FUN_00f13e54(param_3 + 0x9d0);
        fVar7 = fVar8 - fVar7;
        (**(code **)(**(long **)(*(long *)(param_3 + 0xb78) + uVar6 * 8) + 0x48))();
        fVar7 = (fVar7 - fVar8) + -24.0;
        if (*(float *)(param_3 + 0x4dc) != fVar7) {
          *(float *)(param_3 + 0x4dc) = fVar7;
          goto LAB_00c35c54;
        }
      }
    }
    else {
      fVar7 = 24.0 - *(float *)(*(long *)(*(long *)(param_3 + 0xb78) + uVar6 * 8) + 0x44);
      if (*(float *)(param_3 + 0x4dc) != fVar7) {
        *(float *)(param_3 + 0x4dc) = fVar7;
LAB_00c35c54:
        FUN_0091ada4(param_3 + 0x498);
        return;
      }
    }
  }
  return;
}




void FUN_00c35c80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c35c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x158) + 8))();
  return;
}




void FUN_00c35c90(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x5dc) =
       *(uint *)(param_1 + 0x5dc) & 0xfffffff8 | *(uint *)(param_1 + 0x5dc) & 3 | (param_2 & 1) << 2
  ;
  *(uint *)(param_1 + 0xaf4) =
       *(uint *)(param_1 + 0xaf4) & 0xfffffff8 | *(uint *)(param_1 + 0xaf4) & 3 | (param_2 & 1) << 2
  ;
  *(uint *)(param_1 + 0x4ec) =
       *(uint *)(param_1 + 0x4ec) & 0xfffffff8 |
       *(uint *)(param_1 + 0x4ec) & 3 | (~param_2 & 1) << 2;
  return;
}




void FUN_00c35cc0(long *param_1,long param_2,undefined *param_3,undefined8 param_4,uint param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar8 = tpidr_el0;
  local_78 = *(long *)(lVar8 + 0x28);
  FUN_00f1306c();
  plVar1 = param_1 + 0x2b;
  *param_1 = (long)&PTR_FUN_027fa578;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x49;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x67;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x8d;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0xab;
  FUN_00b1b66c(plVar5);
  plVar6 = param_1 + 0x14e;
  FUN_00b1b66c(plVar6);
  param_1[0x1f1] = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  iVar9 = FUN_00e6a474(param_3);
  if (iVar9 == 0) {
    pcVar10 = "full_splash_512";
    param_3 = PTR_s_build___ChooseYourHero_png_02be3568;
  }
  else {
    pcVar10 = "full_splash_1k";
  }
  FUN_00f0e548(plVar1,param_3,pcVar10);
  FUN_00f13f08(0x44174000,0x43e2e000,plVar1);
  if ((param_5 & 1) != 0) {
    FUN_00f0e6bc(0,plVar1);
    uVar7 = *(uint *)((long)param_1 + 0x84);
    if ((uVar7 & 0x7f80) != 0x4c80) {
      *(uint *)((long)param_1 + 0x84) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x4c80;
      FUN_0091ada4(param_1);
    }
  }
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  uVar7 = *(uint *)((long)param_1 + 0x2cc);
  *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 2;
  if ((uVar7 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x2cc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x7280;
    FUN_0091ada4(plVar2);
  }
  FUN_00f13f08(0x44174000,0x4362e000,plVar2);
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50);
  FUN_00f0d75c(plVar3,param_4);
  FUN_00f0db64(0x44084000,0,0x3f800000,plVar3);
  FUN_00b1b718(0x44174000,0x43e2e000,0x40800000,plVar6);
  uVar7 = *(uint *)((long)param_1 + 0xaf4);
  if ((uVar7 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xaf4) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6600;
    FUN_0091ada4(plVar6);
  }
  uVar11 = 0x43d6e000;
  FUN_00b1b718(0x44114000,0x43d6e000,0x40400000,plVar5);
  if ((*(uint *)((long)param_1 + 0x5dc) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x5dc) = *(uint *)((long)param_1 + 0x5dc) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  local_80 = FUN_00f0e700(plVar1);
  uStack_7c = uVar11;
  FUN_00f13f18(plVar4,&local_80);
  uVar7 = *(uint *)((long)param_1 + 0x4ec);
  if ((uVar7 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x4ec) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x2600;
    FUN_0091ada4(plVar4);
  }
  FUN_00f07940(0,0,plVar2,6,plVar1,6);
  FUN_00f07940(0,0xc1400000,plVar3,6,plVar1,6);
  FUN_00f07940(0,0,plVar6,8,plVar1,8);
  FUN_00f07940(0,0,plVar5,8,plVar1,8);
  FUN_00f07940(0,0,plVar4,8,plVar1,8);
  *(uint *)((long)param_1 + 0x5dc) = *(uint *)((long)param_1 + 0x5dc) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xaf4) = *(uint *)((long)param_1 + 0xaf4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x4ec) = *(uint *)((long)param_1 + 0x4ec) | 4;
  (**(code **)(*param_1 + 0x138))(param_1);
  if (*(long *)(lVar8 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

