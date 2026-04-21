// functions/00a53 — 19 functions
#include "libGameKindred.h"




void FUN_00a5311c(void)

{
  return;
}




void FUN_00a53120(void)

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




void FUN_00a53184(undefined8 param_1)

{
  FUN_00a51cc0(param_1,0);
  return;
}




void FUN_00a5318c(long param_1)

{
  FUN_00b89d24(0x3e800000,param_1 + 0x6c8,0,4,1);
  return;
}




void FUN_00a531a4(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  byte local_118 [16];
  void *local_108;
  undefined8 local_100;
  undefined8 local_f8 [2];
  undefined8 local_e8;
  undefined4 local_e0;
  void *local_d8;
  undefined1 auStack_d0 [48];
  undefined8 local_a0;
  undefined4 local_98;
  long local_90;
  
  lVar1 = tpidr_el0;
  local_90 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0xb8);
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_1 + 0xc0) == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        pvVar6 = operator_new(0x568);
        FUN_00a4ffa8();
        local_d8 = pvVar6;
        uVar17 = FUN_00f0e700(param_1 + 0x218);
        uVar18 = FUN_00f0e700(param_1 + 0x218);
        FUN_00f13f08(uVar17,uVar18,pvVar6);
        FUN_00a50370(pvVar6,*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd4));
        (**(code **)(**(long **)(param_1 + 0x20) + 0x78))(*(long **)(param_1 + 0x20),pvVar6,1);
        fVar14 = *(float *)(param_1 + 0x44);
        if ((*(float *)((long)pvVar6 + 0x40) != *(float *)(param_1 + 0x40)) ||
           (*(float *)((long)pvVar6 + 0x44) != fVar14)) {
          *(float *)((long)pvVar6 + 0x40) = *(float *)(param_1 + 0x40);
          *(float *)((long)pvVar6 + 0x44) = fVar14;
          FUN_0091ada4(pvVar6);
        }
        *(uint *)((long)pvVar6 + 0x84) = *(uint *)((long)pvVar6 + 0x84) & 0xfffffffb;
        iVar3 = FUN_009f1f94(0x1a);
        uVar15 = 0x3dcccccd;
        fVar14 = 0.0;
        if (iVar3 == 0) {
          fVar14 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x27c8));
          fVar14 = fVar14 * 0.1 + 0.05;
        }
        else {
          uVar15 = 0;
        }
        uVar19 = 0x3f800000;
        uVar2 = 0x3f800000;
        if (iVar3 != 0) {
          uVar2 = 0x3f266666;
        }
        if (((DAT_031328d0 & 1) == 0) &&
           (uVar19 = 0x3f800000, iVar3 = __cxa_guard_acquire(&DAT_031328d0), iVar3 != 0)) {
          DAT_031328c8 = 0x3e3270a0;
          __cxa_guard_release(&DAT_031328d0);
        }
        FUN_00d58298(lVar5,&DAT_031328c8,auStack_d0);
        local_e8 = local_a0;
        local_e0 = local_98;
        FUN_0091ef94(local_f8,&local_e8,1);
        local_100 = local_f8[0];
        uVar16 = FUN_00f08664(&local_100,*(undefined8 *)(param_1 + 0x20));
        lVar5 = DAT_03210d00;
        local_100 = CONCAT44(uVar19,uVar16);
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
          *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
          FUN_00efcad4(puVar8);
          *(undefined ***)puVar8 = &PTR_FUN_027c1a60;
          *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
        }
        FUN_00efcac4(fVar14,puVar8);
        lVar5 = DAT_03210d00;
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
          *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
          FUN_00efc9c0(puVar9);
          *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
        }
        FUN_00efca10(puVar9,1);
        lVar5 = DAT_03210d00;
        uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
        if ((ulong)uVar7 == 0xffff) {
          puVar10 = (ushort *)0x0;
        }
        else {
          puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
          if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
            uVar7 = 0xffff;
          }
          else {
            uVar7 = *puVar10;
          }
          *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
          *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
          FUN_00efcad4(puVar10);
          *(undefined ***)puVar10 = &PTR_FUN_027c1a60;
          *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
        }
        FUN_00efcac4(uVar15,puVar10);
        lVar5 = DAT_03210d00;
        uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
        if ((ulong)uVar7 == 0xffff) {
          puVar11 = (ushort *)0x0;
        }
        else {
          puVar11 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar7 * 0x40);
          if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
            uVar7 = 0xffff;
          }
          else {
            uVar7 = *puVar11;
          }
          *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
          *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
          FUN_00efc8e8(puVar11);
          puVar11[8] = 0;
          puVar11[9] = 0;
          puVar11[10] = 0;
          puVar11[0xb] = 0;
          puVar11[0xc] = 0;
          puVar11[0xd] = 0;
          puVar11[0xe] = 0;
          puVar11[0xf] = 0;
          puVar11[0x14] = 0;
          puVar11[0x10] = 0;
          puVar11[0x11] = 0;
          puVar11[0x12] = 0;
          puVar11[0x13] = 0;
          *(undefined ***)puVar11 = &PTR_FUN_027d0db0;
          *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
        }
        FUN_008fa54c(local_118,"build://Sounds/ActorFx.assetbundle/sfx__gold_coins.mp3");
        FUN_00a99c48(puVar11,local_118,1,0);
        if ((local_118[0] & 1) != 0) {
          operator_delete(local_108);
        }
        lVar5 = DAT_03210d00;
        uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
        if ((ulong)uVar7 == 0xffff) {
          puVar12 = (ushort *)0x0;
        }
        else {
          puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
          if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
            uVar7 = 0xffff;
          }
          else {
            uVar7 = *puVar12;
          }
          *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
          *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
          FUN_00efdc08(puVar12);
          *(undefined ***)puVar12 = &PTR_FUN_027d0e88;
          *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
        }
        FUN_00efcac4(uVar2,puVar12);
        FUN_00efdc50(puVar12,&local_100);
        FUN_00a99fd8(puVar12,FUN_00a2b6d4);
        FUN_00a99fe0(puVar12,FUN_00a53a7c);
        uVar17 = FUN_00eff63c(0,0,uVar2,0);
        uVar18 = FUN_00efee28(0,uVar2,FUN_00a2b6d4);
        lVar5 = DAT_03210d00;
        uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
        if ((ulong)uVar7 == 0xffff) {
          puVar13 = (ushort *)0x0;
        }
        else {
          puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
          if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
            uVar7 = 0xffff;
          }
          else {
            uVar7 = *puVar13;
          }
          *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
          *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
          FUN_00efcd98(puVar13);
          *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
        }
        FUN_00efcea4(puVar13,puVar11,puVar12,uVar17,uVar18,0);
        pvVar6 = local_d8;
        FUN_00f02308(local_d8,puVar8,puVar9,puVar10,puVar13,0);
        lVar5 = DAT_03210d00;
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
          *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
          FUN_00efc8e8(puVar8);
          *(undefined ***)puVar8 = &PTR_FUN_02825148;
          *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
          pvVar6 = local_d8;
        }
        FUN_00f022a0(pvVar6,puVar8);
        FUN_00a53ac8(param_1 + 0x27c8,&local_d8);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc0) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a538f4(long param_1,undefined4 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00ced270(param_2);
  if ((uVar1 & 1) != 0) {
    *(byte *)(param_1 + 0x27f5) = *(byte *)(param_1 + 0x27f5) & 0x7f | 2;
    FUN_00e70314(param_1 + 0x27d8);
    return;
  }
  return;
}




void FUN_00a53944(long param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_00ced270(param_2);
  if (((uVar2 & 1) != 0) &&
     ((iVar1 = strcmp(param_3,PTR_s_Buff_Item_WeaponInfusion_02beb748), iVar1 == 0 ||
      (iVar1 = strcmp(param_3,PTR_s_Buff_Item_CrystalInfusion_02beb750), iVar1 == 0)))) {
    *(byte *)(param_1 + 0x27f5) = *(byte *)(param_1 + 0x27f5) & 0x7f | 2;
    FUN_00e70314(param_1 + 0x27d8);
    return;
  }
  return;
}




void FUN_00a539c8(long param_1)

{
  *(byte *)(param_1 + 0x27f5) = *(byte *)(param_1 + 0x27f5) | 2;
  FUN_00e70314(param_1 + 0x27d8);
  return;
}




void FUN_00a539e8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x27ec) = param_2;
  *(byte *)(param_1 + 0x27f5) = *(byte *)(param_1 + 0x27f5) | 2;
  FUN_00e70314(param_1 + 0x27d8);
  return;
}




void FUN_00a53a0c(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x27ec) == param_2) {
    *(undefined4 *)(param_1 + 0x27ec) = 0xffff;
    *(byte *)(param_1 + 0x27f5) = *(byte *)(param_1 + 0x27f5) | 2;
    FUN_00e70314(param_1 + 0x27d8);
    return;
  }
  return;
}




void FUN_00a53a4c(undefined8 param_1,int *param_2)

{
  if ((*param_2 != 0x22) && (*param_2 != 0x1a)) {
    return;
  }
  FUN_00a511a8();
  return;
}




void FUN_00a53a68(long param_1)

{
  *(byte *)(param_1 + 0x27f5) = *(byte *)(param_1 + 0x27f5) & 0x7f;
  return;
}




float FUN_00a53a7c(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = cosf((param_1 / param_4) * 1.5707964);
  return (param_3 - fVar1 * param_3) + param_2;
}




void FUN_00a53ac8(uint *param_1,undefined8 *param_2)

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
    FUN_00a53c48(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00a53b50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cb250;
  param_1[0x8f] = &PTR_FUN_028266f0;
  param_1[0xa6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa9);
  FUN_00f13d08(param_1 + 0x8f);
  param_1[0x71] = &PTR_FUN_028266f0;
  param_1[0x88] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8b);
  FUN_00f13d08(param_1 + 0x71);
  param_1[0x53] = &PTR_FUN_028266f0;
  param_1[0x6a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6d);
  FUN_00f13d08(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a53c2c(undefined8 param_1,int *param_2)

{
  if ((*param_2 != 0x22) && (*param_2 != 0x1a)) {
    return;
  }
  FUN_00a511a8();
  return;
}




void FUN_00a53c48(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a53cc8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  FUN_00f13ca4();
  plVar5 = param_1 + 0x19;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xfe;
  *param_1 = (long)&PTR_FUN_027cb4e0;
  FUN_00f017e8(plVar5);
  plVar1 = param_1 + 0x2a;
  param_1[0x19] = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8(plVar1);
  param_1[0x2a] = (long)&PTR_FUN_027c1f80;
  FUN_00b12bd8(param_1 + 0x3b,1);
  plVar2 = param_1 + 0xd1;
  FUN_00f017e8(plVar2);
  plVar3 = param_1 + 0xe2;
  param_1[0xd1] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  FUN_00f0d160(param_1 + 0x100);
  FUN_00f0d160(param_1 + 0x126);
  plVar4 = param_1 + 0x14c;
  FUN_00f017e8(plVar4);
  lVar6 = 0;
  param_1[0x14c] = (long)&PTR_FUN_027c1f80;
  do {
    FUN_00f0e4a8((long)param_1 + lVar6 + 0xae8);
    lVar6 = lVar6 + 0xf0;
  } while (lVar6 != 0x5a0);
  lVar6 = 0;
  do {
    FUN_00f0e4a8((long)param_1 + lVar6 + 0x1088);
    lVar6 = lVar6 + 0xf0;
  } while (lVar6 != 0x5a0);
  param_1[0x2c5] = _DAT_03218ef8;
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_00f023ec(plVar5,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x3b,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,param_1 + 0x100,1);
  FUN_00f023ec(plVar2,param_1 + 0x126,1);
  FUN_00f023ec(plVar2,plVar4,1);
  plVar5 = param_1 + 0x15d;
  lVar6 = 6;
  do {
    FUN_00f023ec(plVar4,plVar5,1);
    FUN_00f023ec(plVar4,plVar5 + 0xb4,1);
    lVar6 = lVar6 + -1;
    plVar5 = plVar5 + 0x1e;
  } while (lVar6 != 0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  FUN_00f10428(param_1 + 0x52,0,0,0,0,0,0,0,0,0,0,0,0,"white_background");
  FUN_00f0e540(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  if ((*(float *)(param_1 + 0xeb) != 1.6) || (*(float *)((long)param_1 + 0x75c) != 1.6)) {
    param_1[0xeb] = 0x3fcccccd3fcccccd;
    FUN_0091ada4(plVar3);
  }
  param_1 = param_1 + 0x15d;
  lVar6 = 6;
  do {
    FUN_00f0e540(param_1,PTR_s_build___HUDItemsAndBuffs_atlas_02be3448);
    FUN_00f0e578(param_1,"icon_item_empty");
    FUN_00f0e540(param_1 + 0xb4,PTR_s_build___HUDPartsCommon_atlas_02be3440);
    FUN_00f0e578(param_1 + 0xb4,"hud_store_inventory_tray");
    lVar6 = lVar6 + -1;
    param_1 = param_1 + 0x1e;
  } while (lVar6 != 0);
  return;
}




void FUN_00a53fb4(long param_1,long param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  long *plVar9;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined4 local_dc;
  undefined1 auStack_d8 [128];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00969b40(auStack_d8,"recommended_path_tile_%u");
  uVar3 = FUN_00e6a474(auStack_d8);
  uVar4 = FUN_0091ed5c(auStack_d8,uVar3,0x1234);
  *(int *)(param_1 + 0xc0) = param_3;
  *(uint *)(param_1 + 0x84) =
       *(uint *)(param_1 + 0x84) & 0x80000000 |
       *(uint *)(param_1 + 0x84) & 0x7fff | (uVar4 & 0xffff) << 0xf;
  if (param_3 == 0xfe) {
    *(uint *)(param_1 + 0x794) = *(uint *)(param_1 + 0x794) & 0xfffffffb;
    uVar6 = FUN_00e6ce7c("RECOMMENDED_BUILD_MANUAL",0);
    FUN_00f0d75c(param_1 + 0x800,uVar6);
    uVar6 = FUN_00e6ce7c("RECOMMENDED_BUILD_MANUAL_SUMMARY",0);
    FUN_00f0d75c(param_1 + 0x930,uVar6);
    *(uint *)(param_1 + 0xae4) = *(uint *)(param_1 + 0xae4) & 0xfffffffb;
    local_f0 = CONCAT44(local_f0._4_4_,0xffc8c8c8);
    FUN_00b1326c(0x3f666666,param_1 + 0x1d8,&local_f0);
    goto LAB_00a542bc;
  }
  *(long *)(param_1 + 0xb8) = param_2;
  iVar5 = strcmp(*(char **)(param_2 + 0x28),"lane");
  if (iVar5 == 0) {
    pcVar8 = "role_carry";
LAB_00a54110:
    FUN_00f0e578(param_1 + 0x710,pcVar8);
  }
  else {
    iVar5 = strcmp(*(char **)(param_2 + 0x28),"jungle");
    if (iVar5 == 0) {
      pcVar8 = "role_jungler";
      goto LAB_00a54110;
    }
    iVar5 = strcmp(*(char **)(param_2 + 0x28),"captain");
    if (iVar5 == 0) {
      pcVar8 = "role_captain";
      goto LAB_00a54110;
    }
  }
  local_dc = 0xffc8c8c8;
  iVar5 = strcmp(*(char **)(param_2 + 0x30),"red");
  if (iVar5 == 0) {
    local_dc = 0xff5271eb;
  }
  else {
    iVar5 = strcmp(*(char **)(param_2 + 0x30),"blue");
    if (iVar5 == 0) {
      local_dc = 0xfffae076;
    }
    else {
      iVar5 = strcmp(*(char **)(param_2 + 0x30),"yellow");
      if (iVar5 == 0) {
        local_dc = 0xff3ac8f6;
      }
    }
  }
  FUN_00f0e670(param_1 + 0x710,&local_dc,2);
  FUN_00b1326c(0x3f666666,param_1 + 0x1d8,&local_dc);
  uVar6 = FUN_00e6ce7c(*(undefined8 *)(param_2 + 8),0);
  FUN_00f0d75c(param_1 + 0x800,uVar6);
  FUN_00e70510(&local_f0);
  uVar6 = FUN_00e6ce7c(*(undefined8 *)(param_2 + 0x10),0);
  FUN_00e70c34(&local_f0,uVar6);
  FUN_00e705c8(&local_100,"\n");
  FUN_00e70c34(&local_f0,&local_100);
  if (local_f8 != (void *)0x0) {
    operator_delete__(local_f8);
    local_100 = 0;
    local_f8 = (void *)0x0;
  }
  uVar6 = FUN_00e6ce7c(*(undefined8 *)(param_2 + 0x18),0);
  FUN_00e70c34(&local_f0,uVar6);
  FUN_00f0d75c(param_1 + 0x930,&local_f0);
  if (**(long **)(param_2 + 0x38) != 0) {
    uVar4 = 0;
    plVar2 = *(long **)(param_2 + 0x38);
    do {
      plVar9 = plVar2 + 1;
      uVar6 = FUN_00d6eb50();
      uVar3 = FUN_00d6e9d4(uVar6,*(undefined8 *)*plVar2);
      uVar6 = FUN_00d6eb50();
      lVar7 = FUN_00d6ebc0(uVar6,uVar3,PTR_DAT_02bea890);
      if ((lVar7 != 0) && (*(int *)(lVar7 + 0x30) == 3)) {
        FUN_00f0e578(param_1 + (ulong)uVar4 * 0xf0 + 0xae8,*(undefined8 *)(lVar7 + 8));
        uVar4 = uVar4 + 1;
      }
    } while ((uVar4 < 6) && (plVar2 = plVar9, *plVar9 != 0));
  }
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
    local_f0 = 0;
    local_e8 = (void *)0x0;
  }
LAB_00a542bc:
  FUN_00a542f8(param_1,0);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

