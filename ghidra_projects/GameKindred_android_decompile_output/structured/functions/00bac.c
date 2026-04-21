// functions/00bac — 9 functions
#include "libGameKindred.h"




void thunk_FUN_00bacbb0(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uStack_110;
  void *pvStack_108;
  void *pvStack_100;
  void *pvStack_f8;
  byte bStack_e8;
  void *pvStack_d8;
  byte bStack_d0;
  void *pvStack_c0;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  byte bStack_a8;
  void *pvStack_98;
  undefined8 uStack_88;
  void *pvStack_80;
  undefined8 uStack_78;
  void *pvStack_70;
  undefined8 uStack_68;
  void *pvStack_60;
  undefined8 uStack_58;
  void *pvStack_50;
  long lStack_48;
  
  lVar3 = tpidr_el0;
  lStack_48 = *(long *)(lVar3 + 0x28);
  lVar4 = FUN_009580b8();
  if ((*(char *)(lVar4 + 0x568c) == '\0') ||
     ((uVar5 = FUN_00969254(), (uVar5 & 1) != 0 &&
      (lVar4 = FUN_00969248(), 0 < *(int *)(lVar4 + 0x38))))) {
    plVar1 = (long *)(param_1 + 0x1ffd8);
    uVar2 = *(uint *)(*(long *)(*plVar1 + 0x28f50) + 0x78);
    lVar4 = FUN_009580b8();
    if (*(uint *)(lVar4 + 0x5454) < uVar2) {
      FUN_00aff894(&uStack_110);
      uVar6 = FUN_00e6ce7c("MENU_MARKET_ICE_PURCHASE_POPUP_TITLE",0);
      thunk_FUN_00e7051c(&uStack_58,uVar6);
      FUN_00910394(&pvStack_100,&uStack_58);
      uStack_110 = 0x447a000044c80000;
      uStack_ac = 1;
      FUN_00aff91c(&uStack_110,PTR_s_build___MenuPartsCommon_tga_02be3530,"popup_fill",&DAT_01bb8b00
                  );
      uStack_b4 = 0xffa3781effa4781e;
      lVar4 = FUN_00aa2040(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_02be9d38,&uStack_110);
      uVar5 = FUN_00969254();
      if (((uVar5 & 1) != 0) && (lVar7 = FUN_00969248(), 0 < *(int *)(lVar7 + 0x38))) {
        *(undefined1 *)(lVar4 + 0x1874) = 0;
      }
      FUN_00cbd980(lVar4,0);
      if (pvStack_50 != (void *)0x0) {
        operator_delete__(pvStack_50);
        uStack_58 = 0;
        pvStack_50 = (void *)0x0;
      }
      if ((bStack_a8 & 1) != 0) {
        operator_delete(pvStack_98);
      }
      if ((bStack_d0 & 1) != 0) {
        operator_delete(pvStack_c0);
      }
      if ((bStack_e8 & 1) != 0) {
        operator_delete(pvStack_d8);
      }
      if (pvStack_f8 != (void *)0x0) {
        operator_delete__(pvStack_f8);
        pvStack_100 = (void *)0x0;
        pvStack_f8 = (void *)0x0;
      }
    }
    else {
      uVar6 = FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_TITLE",0);
      thunk_FUN_00e7051c(&uStack_58,uVar6);
      uVar6 = FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_MSG",0);
      thunk_FUN_00e7051c(&uStack_68,uVar6);
      FUN_00cb418c(&uStack_110,*(undefined4 *)(*(long *)(*plVar1 + 0x28f50) + 0x78));
      FUN_00e70570(&uStack_78,&uStack_110);
      if ((uStack_110 & 1) != 0) {
        operator_delete(pvStack_100);
      }
      FUN_00cb418c(&uStack_110,*(undefined4 *)(param_1 + 0x1ffc4));
      FUN_00e70570(&uStack_88,&uStack_110);
      if ((uStack_110 & 1) != 0) {
        operator_delete(pvStack_100);
      }
      FUN_00e705c8(&uStack_110,"[HERO_NAME]");
      FUN_00e71248(&uStack_58,0,&uStack_110,*(long *)(*plVar1 + 0x28f50) + 0x28);
      if (pvStack_108 != (void *)0x0) {
        operator_delete__(pvStack_108);
        uStack_110 = 0;
        pvStack_108 = (void *)0x0;
      }
      FUN_00e705c8(&uStack_110,"[HERO_NAME]");
      FUN_00e71248(&uStack_68,0,&uStack_110,*(long *)(*plVar1 + 0x28f50) + 0x28);
      if (pvStack_108 != (void *)0x0) {
        operator_delete__(pvStack_108);
        uStack_110 = 0;
        pvStack_108 = (void *)0x0;
      }
      FUN_00e705c8(&uStack_110,"[UNLOCK_AMOUNT]");
      FUN_00e71248(&uStack_68,0,&uStack_110,&uStack_78);
      if (pvStack_108 != (void *)0x0) {
        operator_delete__(pvStack_108);
        uStack_110 = 0;
        pvStack_108 = (void *)0x0;
      }
      FUN_00e705c8(&uStack_110,"[BALANCE_AMOUNT]");
      FUN_00e71248(&uStack_68,0,&uStack_110,&uStack_88);
      if (pvStack_108 != (void *)0x0) {
        operator_delete__(pvStack_108);
        uStack_110 = 0;
        pvStack_108 = (void *)0x0;
      }
      lVar4 = FUN_00969248();
      if (*(int *)(lVar4 + 0x38) < 1) {
        uVar6 = FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_ACCEPT",0);
        puVar10 = (undefined8 *)FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_REJECT",0);
      }
      else {
        uVar6 = FUN_009b8d90();
        FUN_009baadc(uVar6,&DAT_0320ffa8);
        uVar6 = FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_ACCEPT",0);
        puVar10 = &DAT_03210450;
      }
      FUN_00a9b9f8(&uStack_58,&uStack_68,uVar6,puVar10,&DAT_03210450,param_1,thunk_FUN_00babe98,0,0)
      ;
      if (pvStack_80 != (void *)0x0) {
        operator_delete__(pvStack_80);
        uStack_88 = 0;
        pvStack_80 = (void *)0x0;
      }
      if (pvStack_70 != (void *)0x0) {
        operator_delete__(pvStack_70);
        uStack_78 = 0;
        pvStack_70 = (void *)0x0;
      }
      if (pvStack_60 != (void *)0x0) {
        operator_delete__(pvStack_60);
        uStack_68 = 0;
        pvStack_60 = (void *)0x0;
      }
      if (pvStack_50 != (void *)0x0) {
        operator_delete__(pvStack_50);
        uStack_58 = 0;
        pvStack_50 = (void *)0x0;
      }
    }
  }
  else {
    uVar6 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TITLE",0);
    uVar8 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TEXT",0);
    uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar6,uVar8,uVar9,0,0);
  }
  if (*(long *)(lVar3 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bac068(long *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  
  if (*(int *)(param_2 + 0x240) != 0) {
    return;
  }
  *(undefined4 *)((long)param_1 + 0x1ffc4) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x3ff9) = *(undefined4 *)(param_2 + 0x68);
  if (*(long *)(param_1[0x3ffb] + 0x28f50) != 0) {
    uVar2 = FUN_009580b8();
    pbVar3 = *(byte **)(param_1[0x3ffb] + 0x28f50);
    if ((*pbVar3 & 1) == 0) {
      pbVar3 = pbVar3 + 1;
    }
    else {
      pbVar3 = *(byte **)(pbVar3 + 0x10);
    }
    uVar1 = FUN_00961804(uVar2,pbVar3,1);
    FUN_00bab988(param_1,uVar1 & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00bac11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_00bac120(long param_1)

{
  FUN_00bac068(param_1 + -0x368);
  return;
}




void FUN_00bac128(long param_1,uint param_2,int param_3)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort *puVar8;
  undefined4 local_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  param_2 = *(int *)(param_1 + 0x1ffc0) != param_3 & param_2;
  if (param_2 == 1) {
    if (param_3 == 0) {
      FUN_00bac4b4(param_1,1);
      FUN_00bac674(param_1,0,0xffffffff);
    }
    else if (param_3 - 1U < 3) {
      FUN_00bac674(param_1,1);
      FUN_00bac4b4(param_1,0);
    }
    if (*(float *)(param_1 + 0x1462c) != 0.0) {
      *(float *)(param_1 + 0x1462c) = 0.0;
      FUN_0091ada4(param_1 + 0x145e8);
    }
  }
  else {
    FUN_00bac4b4(param_1,0);
    param_3 = -1;
    FUN_00bac674(param_1,0,0xffffffff);
    FUN_00ad67fc(param_1 + 0xea98,0);
  }
  *(int *)(param_1 + 0x1ffc0) = param_3;
  pbVar2 = (byte *)(param_1 + 0x1ffbc);
  bVar3 = *pbVar2;
  if (bVar3 != param_2) {
    lVar1 = param_1 + 0x520;
    if (param_2 == 0) {
      local_5c = 0xffffffff;
    }
    else {
      local_5c = 0xff282828;
    }
    uVar6 = FUN_00eff108(0x3f000000,lVar1,&local_5c,FUN_0091aa80,2);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,uVar6);
    lVar1 = param_1 + 0x7f0;
    FUN_00f01980(lVar1);
    lVar5 = DAT_03210d00;
    if (param_2 == 0) {
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
        *(undefined ***)puVar8 = &PTR_FUN_02825100;
        *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
      }
      FUN_00f022a0(lVar1,puVar8);
      puVar8 = (ushort *)FUN_00efee28(0x3f800000,0x3f000000,FUN_0091aa80);
    }
    else {
      uVar6 = FUN_00efee28(0,0x3f000000,FUN_0091aa80);
      FUN_00f022a0(lVar1,uVar6);
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
      }
    }
    FUN_00f022a0(lVar1,puVar8);
    FUN_00bac99c(param_1,param_2);
    *pbVar2 = (byte)param_2;
    *(uint *)(param_1 + 0x1466c) =
         *(uint *)(param_1 + 0x1466c) & 0xffffffe0 |
         *(uint *)(param_1 + 0x1466c) & 0xf | param_2 << 4;
    FUN_00ed06a4(param_1 + 0x145e8,param_2);
    bVar3 = *pbVar2;
  }
  if (bVar3 != 0) {
    FUN_00ed1918(param_1 + 0x145e8);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bac4b4(long param_1,ulong param_2)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ushort uVar6;
  ushort *puVar7;
  undefined4 uVar8;
  
  if ((param_2 & 1) != 0) {
    puVar1 = (uint *)(param_1 + 0x1cc64);
    uVar5 = *puVar1;
    lVar2 = param_1 + 0x1cbe0;
    if ((uVar5 & 0x7f80) != 0) {
      *puVar1 = uVar5 & 0xffff807f;
      FUN_0091ada4(lVar2);
      uVar5 = *puVar1;
    }
    *puVar1 = uVar5 | 4;
    uVar8 = 0;
    if (*(char *)(param_1 + 0x1ffbc) != '\0') {
      uVar8 = 0x3dcccccd;
    }
    uVar3 = FUN_00efed6c(uVar8);
    uVar4 = FUN_00efee28(0x3f800000,0x3dcccccd,FUN_0091aa80);
    FUN_00f01980(lVar2);
    FUN_00f02308(lVar2,uVar3,uVar4,0);
    FUN_00babbe0(param_1);
    return;
  }
  uVar3 = FUN_00efee28(0,0x3dcccccd,FUN_0091aa80);
  lVar2 = DAT_03210d00;
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
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_02825148;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00f01980(param_1 + 0x1cbe0);
  FUN_00f02308(param_1 + 0x1cbe0,uVar3,puVar7,0);
  return;
}




void FUN_00bac674(long param_1,ulong param_2,int param_3)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ushort uVar7;
  ushort *puVar8;
  
  if ((param_2 & 1) == 0) {
    uVar4 = FUN_00efee28(0,0x3dcccccd,FUN_0091aa80);
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
      FUN_00efc8e8(puVar8);
      *(undefined ***)puVar8 = &PTR_FUN_02825148;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00f01980(param_1 + 0x15118);
    FUN_00f02308(param_1 + 0x15118,uVar4,puVar8,0);
    return;
  }
  lVar1 = param_1 + 0x15118;
  if (*(char *)(param_1 + 0x1ffbc) != '\0') {
    puVar2 = (uint *)(param_1 + 0x1519c);
    uVar6 = *puVar2;
    *puVar2 = uVar6 | 4;
    if ((uVar6 & 0x7f80) != 0) {
      *puVar2 = uVar6 & 0xffff807f | 4;
      FUN_0091ada4(lVar1);
    }
    uVar4 = FUN_00efee28(0,0x3dcccccd,FUN_0091aa80);
    lVar3 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar7 * 0x40);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efc8e8(puVar8);
      *(undefined ***)puVar8 = &PTR_FUN_027c27b8;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      puVar8[0x12] = 0;
      puVar8[0x13] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    *(code **)(puVar8 + 8) = FUN_00bacb40;
    *(long *)(puVar8 + 0x10) = param_1;
    uVar5 = FUN_00efee28(0x3f800000,0x3dcccccd,FUN_0091aa80);
    FUN_00f01980(lVar1);
    FUN_00f02308(lVar1,uVar4,puVar8,uVar5,0);
    return;
  }
  FUN_00b4c404(lVar1,*(undefined8 *)
                      (*(long *)(*(long *)(param_1 + 0x1ffd8) + 0x28f50) + (long)param_3 * 8 + 0x38)
              );
  puVar2 = (uint *)(param_1 + 0x1519c);
  uVar6 = *puVar2;
  if ((uVar6 & 0x7f80) != 0) {
    *puVar2 = uVar6 & 0xffff807f;
    FUN_0091ada4(lVar1);
    uVar6 = *puVar2;
  }
  *puVar2 = uVar6 | 4;
  uVar4 = FUN_00efee28(0x3f800000,0x3dcccccd,FUN_0091aa80);
  FUN_00f01980(lVar1);
  FUN_00f022a0(lVar1,uVar4);
  FUN_00babbe0(param_1);
  return;
}




void FUN_00bac99c(long param_1,ulong param_2)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ushort uVar5;
  ushort *puVar6;
  
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x1ffbc) != '\0') {
      uVar3 = FUN_00efee28(0,0x3dcccccd,FUN_0091aa80);
      lVar2 = DAT_03210d00;
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
        FUN_00efc8e8(puVar6);
        *(undefined ***)puVar6 = &PTR_FUN_02825148;
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00f01980(param_1 + 0x14b20);
      FUN_00f02308(param_1 + 0x14b20,uVar3,puVar6,0);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x1ffbc) == '\0') {
    puVar1 = (uint *)(param_1 + 0x14ba4);
    uVar4 = *puVar1;
    param_1 = param_1 + 0x14b20;
    if ((uVar4 & 0x7f80) != 0) {
      *puVar1 = uVar4 & 0xffff807f;
      FUN_0091ada4(param_1);
      uVar4 = *puVar1;
    }
    *puVar1 = uVar4 | 4;
    uVar3 = FUN_00efee28(0x3f800000,0x3dcccccd,FUN_0091aa80);
    FUN_00f01980(param_1);
    FUN_00f022a0(param_1,uVar3);
    return;
  }
  return;
}




void FUN_00bacb40(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x1ffc0) - 1;
  if (uVar1 < 4) {
    FUN_00b4c404(param_1 + 0x15118,
                 *(undefined8 *)
                  (*(long *)(*(long *)(param_1 + 0x1ffd8) + 0x28f50) + (long)(int)uVar1 * 8 + 0x38))
    ;
    FUN_00babbe0(param_1);
    return;
  }
  return;
}




void FUN_00bacbb0(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong local_110;
  void *local_108;
  void *local_100;
  void *local_f8;
  byte local_e8;
  void *local_d8;
  byte local_d0;
  void *local_c0;
  undefined8 local_b4;
  undefined4 local_ac;
  byte local_a8;
  void *local_98;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar4 = FUN_009580b8();
  if ((*(char *)(lVar4 + 0x568c) == '\0') ||
     ((uVar5 = FUN_00969254(), (uVar5 & 1) != 0 &&
      (lVar4 = FUN_00969248(), 0 < *(int *)(lVar4 + 0x38))))) {
    plVar1 = (long *)(param_1 + 0x1ffd8);
    uVar2 = *(uint *)(*(long *)(*plVar1 + 0x28f50) + 0x78);
    lVar4 = FUN_009580b8();
    if (*(uint *)(lVar4 + 0x5454) < uVar2) {
      FUN_00aff894(&local_110);
      uVar6 = FUN_00e6ce7c("MENU_MARKET_ICE_PURCHASE_POPUP_TITLE",0);
      thunk_FUN_00e7051c(&local_58,uVar6);
      FUN_00910394(&local_100,&local_58);
      local_110 = 0x447a000044c80000;
      local_ac = 1;
      FUN_00aff91c(&local_110,PTR_s_build___MenuPartsCommon_tga_02be3530,"popup_fill",&DAT_01bb8b00)
      ;
      local_b4 = 0xffa3781effa4781e;
      lVar4 = FUN_00aa2040(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_02be9d38,&local_110);
      uVar5 = FUN_00969254();
      if (((uVar5 & 1) != 0) && (lVar7 = FUN_00969248(), 0 < *(int *)(lVar7 + 0x38))) {
        *(undefined1 *)(lVar4 + 0x1874) = 0;
      }
      FUN_00cbd980(lVar4,0);
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
      if ((local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
      if ((local_e8 & 1) != 0) {
        operator_delete(local_d8);
      }
      if (local_f8 != (void *)0x0) {
        operator_delete__(local_f8);
        local_100 = (void *)0x0;
        local_f8 = (void *)0x0;
      }
    }
    else {
      uVar6 = FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_TITLE",0);
      thunk_FUN_00e7051c(&local_58,uVar6);
      uVar6 = FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_MSG",0);
      thunk_FUN_00e7051c(&local_68,uVar6);
      FUN_00cb418c(&local_110,*(undefined4 *)(*(long *)(*plVar1 + 0x28f50) + 0x78));
      FUN_00e70570(&local_78,&local_110);
      if ((local_110 & 1) != 0) {
        operator_delete(local_100);
      }
      FUN_00cb418c(&local_110,*(undefined4 *)(param_1 + 0x1ffc4));
      FUN_00e70570(&local_88,&local_110);
      if ((local_110 & 1) != 0) {
        operator_delete(local_100);
      }
      FUN_00e705c8(&local_110,"[HERO_NAME]");
      FUN_00e71248(&local_58,0,&local_110,*(long *)(*plVar1 + 0x28f50) + 0x28);
      if (local_108 != (void *)0x0) {
        operator_delete__(local_108);
        local_110 = 0;
        local_108 = (void *)0x0;
      }
      FUN_00e705c8(&local_110,"[HERO_NAME]");
      FUN_00e71248(&local_68,0,&local_110,*(long *)(*plVar1 + 0x28f50) + 0x28);
      if (local_108 != (void *)0x0) {
        operator_delete__(local_108);
        local_110 = 0;
        local_108 = (void *)0x0;
      }
      FUN_00e705c8(&local_110,"[UNLOCK_AMOUNT]");
      FUN_00e71248(&local_68,0,&local_110,&local_78);
      if (local_108 != (void *)0x0) {
        operator_delete__(local_108);
        local_110 = 0;
        local_108 = (void *)0x0;
      }
      FUN_00e705c8(&local_110,"[BALANCE_AMOUNT]");
      FUN_00e71248(&local_68,0,&local_110,&local_88);
      if (local_108 != (void *)0x0) {
        operator_delete__(local_108);
        local_110 = 0;
        local_108 = (void *)0x0;
      }
      lVar4 = FUN_00969248();
      if (*(int *)(lVar4 + 0x38) < 1) {
        uVar6 = FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_ACCEPT",0);
        puVar10 = (undefined8 *)FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_REJECT",0);
      }
      else {
        uVar6 = FUN_009b8d90();
        FUN_009baadc(uVar6,&DAT_0320ffa8);
        uVar6 = FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_ACCEPT",0);
        puVar10 = &DAT_03210450;
      }
      FUN_00a9b9f8(&local_58,&local_68,uVar6,puVar10,&DAT_03210450,param_1,thunk_FUN_00babe98,0,0);
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
        local_88 = 0;
        local_80 = (void *)0x0;
      }
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
        local_78 = 0;
        local_70 = (void *)0x0;
      }
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
        local_68 = 0;
        local_60 = (void *)0x0;
      }
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
    }
  }
  else {
    uVar6 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TITLE",0);
    uVar8 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TEXT",0);
    uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar6,uVar8,uVar9,0,0);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

