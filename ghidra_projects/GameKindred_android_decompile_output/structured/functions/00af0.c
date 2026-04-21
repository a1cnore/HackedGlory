// functions/00af0 — 21 functions
#include "libGameKindred.h"




void FUN_00af0084(void *param_1)

{
  FUN_00aefe40();
  operator_delete(param_1);
  return;
}




void FUN_00af00a8(void)

{
  return;
}




void FUN_00af00ac(void)

{
  return;
}




void FUN_00af00b0(long param_1)

{
  FUN_00aefe40(param_1 + -0xb8);
  return;
}




void FUN_00af00b8(long param_1)

{
  FUN_00aefe40((void *)(param_1 + -0xb8));
  operator_delete((void *)(param_1 + -0xb8));
  return;
}




void FUN_00af00e0(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e6a474();
  FUN_0091ed5c(param_1,uVar1,0x12345678);
  return;
}




void FUN_00af0110(undefined8 *param_1)

{
  FUN_00af8b20();
  *param_1 = &PTR_FUN_027d9ad0;
  FUN_00af0144(param_1);
  return;
}




void FUN_00af0144(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,"*KindredMenuAscensionDialMesh*");
  FUN_00af9124(param_1,uVar2);
  FUN_00af9aa0(param_1,&DAT_01bb0a14);
  uVar2 = *(undefined8 *)(param_1 + 0x308);
  uVar1 = FUN_00e6a474("u_pips_level");
  uVar1 = FUN_0091ed5c("u_pips_level",uVar1,0x12345678);
  FUN_0199712c(0,uVar2,uVar1);
  return;
}




void FUN_00af01c0(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float fVar3;
  
  uVar2 = *(undefined8 *)(param_2 + 0x308);
  uVar1 = FUN_00e6a474("u_pips_level");
  uVar1 = FUN_0091ed5c("u_pips_level",uVar1,0x12345678);
  fVar3 = (float)NEON_fminnm(param_1,0x42480000);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  FUN_0199712c(fVar3,uVar2,uVar1);
  return;
}




void FUN_00af0228(undefined8 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  FUN_00af97f4(param_1,1);
  FUN_00afa680(param_1);
  switch(param_2) {
  case 0:
    pcVar1 = "IDLE";
    uVar2 = 1;
    goto LAB_00af02f8;
  case 1:
    pcVar1 = "TAP_MIDDLE";
    break;
  case 2:
    pcVar1 = "TAP_TOP";
    break;
  case 3:
    pcVar1 = "TAP_BOTTOM:";
    break;
  case 4:
    pcVar1 = "TAP_LEFT";
    break;
  case 5:
    pcVar1 = "TAP_RIGHT";
    break;
  case 6:
    pcVar1 = "LEVEL_UP_SMALL";
    break;
  case 7:
    pcVar1 = "LEVEL_UP_LARGE";
    break;
  case 8:
    pcVar1 = "LAST_SEASON";
    break;
  default:
    return;
  }
  uVar2 = 0;
LAB_00af02f8:
  FUN_00afa094(0x3f800000,param_1,pcVar1,uVar2,0);
  return;
}




void FUN_00af0308(void *param_1)

{
  FUN_00af8c0c();
  operator_delete(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00af032c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027d9c30;
  FUN_00ab6c24(plVar1,0);
  plVar2 = param_1 + 0x2c9;
  FUN_00f13ca4(plVar2);
  plVar3 = param_1 + 0x2e0;
  FUN_00f0e4a8(plVar3);
  FUN_00f13ca4(param_1 + 0x2fe);
  FUN_00f13ca4(param_1 + 0x315);
  FUN_00f13ca4(param_1 + 0x32c);
  memset(param_1 + 0x343,0,0x48);
  FUN_00bd697c(param_1 + 0x34f,0,1);
  lVar6 = _DAT_03218ef8;
  param_1[0x35b] = 0;
  param_1[0x35a] = 0;
  param_1[0x359] = lVar6;
  *(undefined8 *)((long)param_1 + 0x1ae6) = 0;
  param_1[0x35c] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar1,1);
  FUN_00f023ec(plVar2,param_1 + 0x2fe,1);
  FUN_00f023ec(plVar2,param_1 + 0x315,1);
  FUN_00f023ec(plVar2,param_1 + 0x32c,1);
  uVar7 = FUN_0092ea9c();
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar9 = *(uint *)((long)param_1 + 0x1784);
  if ((uVar9 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1784) = uVar9 & 0xffff807f;
    FUN_0091ada4(plVar3);
    uVar9 = *(uint *)((long)param_1 + 0x1784);
  }
  *(uint *)((long)param_1 + 0x1784) = uVar9 & 0xfffffffb | 0x10;
  uVar8 = FUN_00e6ce7c("MENU_MARKET_CARDS_REVEAL_ALL",0);
  FUN_00ab703c(0x42200000,0x42c80000,0x44160000,plVar1,0,uVar8,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_70 = DAT_03210c64;
  local_98 = thunk_FUN_00af1fb4;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x12,&local_98);
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar7 & 1) == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(param_1 + 0xf5,*ppuVar4);
  FUN_00b09144(0x3f800000,plVar1);
  if ((*(float *)(param_1 + 0x1b) != 0.5) || (*(float *)((long)param_1 + 0xdc) != 0.5)) {
    param_1[0x1b] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0db64(*(float *)((long)param_1 + 0x161c) -
               (*(float *)((long)param_1 + 0x1614) + *(float *)((long)param_1 + 0x1614)),0,
               0x3f800000,param_1 + 0xf5);
  FUN_00b0914c(plVar1,1);
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xfffffffb;
  if ((uVar7 & 1) != 0) {
    FUN_00ab7628(0x430a0000,plVar1);
  }
  local_70 = DAT_03210f60;
  local_98 = thunk_FUN_00af1db4;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x316,&local_98);
  local_98 = thunk_FUN_00af1db4;
  local_70 = DAT_03210f8c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x316,&local_98);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af069c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d9c30;
  FUN_00af07b8();
  FUN_00af0850(param_1 + 0x343,0);
  if ((*(byte *)(param_1 + 0x35a) & 1) != 0) {
    operator_delete((void *)param_1[0x35c]);
  }
  FUN_00bd6cac(param_1 + 0x34f);
  if ((*(byte *)(param_1 + 0x349) & 1) != 0) {
    operator_delete((void *)param_1[0x34b]);
  }
  FUN_00af405c(param_1 + 0x347,1);
  if ((void *)param_1[0x346] != (void *)0x0) {
    operator_delete__((void *)param_1[0x346]);
    param_1[0x346] = 0;
    param_1[0x345] = 0;
  }
  FUN_00af0850(param_1 + 0x343,1);
  FUN_00f13d08(param_1 + 0x32c);
  FUN_00f13d08(param_1 + 0x315);
  FUN_00f13d08(param_1 + 0x2fe);
  param_1[0x2e0] = &PTR_FUN_028266f0;
  param_1[0x2f7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2fa);
  FUN_00f13d08(param_1 + 0x2e0);
  FUN_00f13d08(param_1 + 0x2c9);
  FUN_009c7fa8(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00af07b8(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x1a28);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x1a30) + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x1a30) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x1a28);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x1a30) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0x1a30) != 0) {
    *(undefined4 *)(param_1 + 0x1a28) = 0;
  }
  *(uint *)(param_1 + 0x1784) = *(uint *)(param_1 + 0x1784) & 0xfffffffb;
  *(uint *)(param_1 + 0x192c) = *(uint *)(param_1 + 0x192c) & 0xffffffef;
  return;
}




void FUN_00af0850(uint *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x48;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x28);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        FUN_00af405c(puVar2 + -4,1);
        lVar1 = lVar1 + -0x48;
        puVar2 = puVar2 + 9;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_00af08d8(void *param_1)

{
  FUN_00af069c();
  operator_delete(param_1);
  return;
}




void FUN_00af08fc(undefined8 param_1)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&uStack_2c,&local_30);
  FUN_00af0958(uStack_2c,local_30,param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af0958(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00f13f08(param_3 + 0x1700);
  FUN_00f13f08(param_1,param_2,param_3 + 0x18a8);
  FUN_00f13f08(param_1,param_2,param_3 + 0x17f0);
  FUN_00f13f08(param_1,param_2,param_3 + 0x1960);
  fVar4 = 100.0;
  plVar1 = (long *)(param_3 + 0x88);
  fVar5 = DAT_031339d4 + 100.0;
  fVar3 = (float)FUN_00f13e54(plVar1);
  fVar5 = fVar5 + fVar3 * 0.5;
  FUN_00f0e700(param_3 + 0x1700);
  fVar3 = fVar4 + -60.0;
  FUN_00f13e54(plVar1);
  fVar3 = fVar3 - fVar4 * 0.5;
  if ((*(float *)(param_3 + 200) != fVar5) || (*(float *)(param_3 + 0xcc) != fVar3)) {
    *(float *)(param_3 + 200) = fVar5;
    *(float *)(param_3 + 0xcc) = fVar3;
    FUN_0091ada4(plVar1);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_60);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af0a9c(long param_1)

{
  if (*(char *)(param_1 + 0x1aec) != '\0') {
    *(char *)(param_1 + 0x1aec) = '\0';
    FUN_00af07b8();
    return;
  }
  return;
}




void FUN_00af0ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00af0ac0(param_1,param_3);
  return;
}




void FUN_00af0ac0(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  byte local_120 [8];
  ulong local_118;
  void *local_110;
  ulong local_108;
  void *local_100;
  byte local_f8;
  undefined7 uStack_f7;
  void *local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined4 local_90;
  uint local_54;
  byte local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar7 = (**(code **)(*param_2 + 0x18))(param_2);
  if (lVar7 != 0) {
    uVar8 = FUN_0093c06c("talentExplanation");
    if ((uVar8 & 1) == 0) {
      FUN_009c7330(auStack_d0);
      uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00910394(&local_c0,uVar9);
      local_90 = 3;
      local_50 = local_50 | 2;
      uVar8 = FUN_0092ea9c();
      uVar1 = 0x5dc0000;
      if ((uVar8 & 1) == 0) {
        uVar1 = 0x4b00000;
      }
      local_54 = local_54 & 0xffff | uVar1;
      uVar9 = FUN_00e6ce7c("TUTORIAL_TALENT_EXPLANATION_DIALOG_MSG",0);
      thunk_FUN_00e7051c(&local_108,uVar9);
      FUN_008fcdb8(&local_f8,&DAT_0320ffa8);
      local_e0 = 1;
      local_dc = 0x41200000;
      FUN_009c84f0(auStack_d0,&local_108);
      if ((local_f8 & 1) != 0) {
        operator_delete(local_e8);
      }
      if (local_100 != (void *)0x0) {
        operator_delete__(local_100);
        local_108 = 0;
        local_100 = (void *)0x0;
      }
      uVar9 = FUN_009b8d90();
      FUN_008fa54c(&local_108,"talentExplanation");
      FUN_009ba7a8(uVar9,&local_108,auStack_d0);
      if ((local_108 & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_f7,local_f8));
      }
      FUN_0093bf88("talentExplanation",1);
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
        local_a0 = 0;
        local_98 = (void *)0x0;
      }
      if (local_a8 != (void *)0x0) {
        operator_delete__(local_a8);
        local_b0 = 0;
        local_a8 = (void *)0x0;
      }
      if (local_b8 != (void *)0x0) {
        operator_delete__(local_b8);
        local_c0 = 0;
        local_b8 = (void *)0x0;
      }
      FUN_009c86a0(auStack_d0,1);
    }
    goto LAB_00af16dc;
  }
  lVar7 = (**(code **)(*param_2 + 0x10))(param_2);
  if ((lVar7 == 0) || (*(long *)(param_2[-1] + 0x650) == 0)) goto LAB_00af16dc;
  FUN_008fa54c(local_120,*(undefined8 *)(*(long *)(param_2[-1] + 0x650) + 8));
  lVar7 = FUN_009580b8();
  iVar6 = *(int *)(lVar7 + 0x545c);
  lVar7 = FUN_009580b8();
  iVar2 = *(int *)(lVar7 + 0x5460);
  uVar8 = FUN_0093c06c("opalExplanation");
  if ((uVar8 & 1) == 0) {
    uVar8 = (ulong)(local_120[0] >> 1);
    if ((local_120[0] & 1) != 0) {
      uVar8 = local_118;
    }
    if (((uVar8 != 0x12) ||
        (iVar5 = FUN_0090d610(local_120,0,0xffffffffffffffff,"card_currency_opal",0x12), iVar6 == 0)
        ) || (iVar5 != 0)) goto LAB_00af0e30;
    FUN_009c7330(auStack_d0);
    uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00910394(&local_c0,uVar9);
    local_90 = 3;
    local_50 = local_50 | 2;
    uVar8 = FUN_0092ea9c();
    uVar1 = 0x4b00000;
    if ((uVar8 & 1) == 0) {
      uVar1 = 0x3e80000;
    }
    local_54 = local_54 & 0xffff | uVar1;
    uVar9 = FUN_00e6ce7c("MENU_DIALOG_OPAL_EXPLANATION_MESSAGE",0);
    thunk_FUN_00e7051c(&local_108,uVar9);
    FUN_008fcdb8(&local_f8,&DAT_0320ffa8);
    local_e0 = 1;
    local_dc = 0x41200000;
    FUN_009c84f0(auStack_d0,&local_108);
    if ((local_f8 & 1) != 0) {
      operator_delete(local_e8);
    }
    if (local_100 != (void *)0x0) {
      operator_delete__(local_100);
      local_108 = 0;
      local_100 = (void *)0x0;
    }
    uVar9 = FUN_009b8d90();
    FUN_008fa54c(&local_108,"opalExplanation");
    FUN_009ba7a8(uVar9,&local_108,auStack_d0);
    if ((local_108 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_f7,local_f8));
    }
    pcVar10 = "opalExplanation";
LAB_00af1688:
    FUN_0093bf88(pcVar10,1);
LAB_00af1690:
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
      local_a0 = 0;
      local_98 = (void *)0x0;
    }
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_b0 = 0;
      local_a8 = (void *)0x0;
    }
    if (local_b8 != (void *)0x0) {
      operator_delete__(local_b8);
      local_c0 = 0;
      local_b8 = (void *)0x0;
    }
    FUN_009c86a0(auStack_d0,1);
  }
  else {
LAB_00af0e30:
    uVar8 = FUN_0093c06c("seasonalKeyExplanation");
    if ((uVar8 & 1) == 0) {
      uVar8 = (ulong)(local_120[0] >> 1);
      if ((local_120[0] & 1) != 0) {
        uVar8 = local_118;
      }
      if (((uVar8 == 0x1a) &&
          (iVar6 = FUN_0090d610(local_120,0,0xffffffffffffffff,"card_currency_seasonal_key",0x1a),
          iVar2 != 0)) && (iVar6 == 0)) {
        FUN_009c7330(auStack_d0);
        uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00910394(&local_c0,uVar9);
        local_90 = 3;
        local_50 = local_50 | 2;
        uVar8 = FUN_0092ea9c();
        uVar1 = 0x4b00000;
        if ((uVar8 & 1) == 0) {
          uVar1 = 0x3e80000;
        }
        local_54 = local_54 & 0xffff | uVar1;
        uVar9 = FUN_00e6ce7c("MENU_DIALOG_SEASONAL_KEYS_EXPLANATION_MESSAGE",0);
        thunk_FUN_00e7051c(&local_108,uVar9);
        FUN_008fcdb8(&local_f8,&DAT_0320ffa8);
        local_e0 = 1;
        local_dc = 0x41200000;
        FUN_009c84f0(auStack_d0,&local_108);
        if ((local_f8 & 1) != 0) {
          operator_delete(local_e8);
        }
        if (local_100 != (void *)0x0) {
          operator_delete__(local_100);
          local_108 = 0;
          local_100 = (void *)0x0;
        }
        uVar9 = FUN_009b8d90();
        FUN_008fa54c(&local_108,"seasonalKeyExplanation");
        FUN_009ba7a8(uVar9,&local_108,auStack_d0);
        if ((local_108 & 1) != 0) {
          operator_delete((void *)CONCAT71(uStack_f7,local_f8));
        }
        pcVar10 = "seasonalKeyExplanation";
        goto LAB_00af1688;
      }
    }
    uVar8 = FUN_0093c06c("epicKeyExplanation");
    if ((uVar8 & 1) == 0) {
      uVar8 = (ulong)(local_120[0] >> 1);
      if ((local_120[0] & 1) != 0) {
        uVar8 = local_118;
      }
      if (((uVar8 == 0x16) &&
          (iVar6 = FUN_0090d610(local_120,0,0xffffffffffffffff,"card_currency_epic_key",0x16),
          iVar6 == 0)) && (lVar7 = FUN_009580b8(), *(int *)(lVar7 + 0x5464) != 0)) {
        FUN_009c7330(auStack_d0);
        uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00910394(&local_c0,uVar9);
        local_90 = 3;
        local_50 = local_50 | 2;
        uVar8 = FUN_0092ea9c();
        uVar1 = 0x5dc0000;
        if ((uVar8 & 1) == 0) {
          uVar1 = 0x4b00000;
        }
        local_54 = local_54 & 0xffff | uVar1;
        uVar9 = FUN_00e6ce7c("MENU_DIALOG_EPIC_KEYS_EXPLANATION_MESSAGE",0);
        thunk_FUN_00e7051c(&local_108,uVar9);
        FUN_008fcdb8(&local_f8,&DAT_0320ffa8);
        local_e0 = 1;
        local_dc = 0x41200000;
        FUN_009c84f0(auStack_d0,&local_108);
        if ((local_f8 & 1) != 0) {
          operator_delete(local_e8);
        }
        if (local_100 != (void *)0x0) {
          operator_delete__(local_100);
          local_108 = 0;
          local_100 = (void *)0x0;
        }
        uVar9 = FUN_009b8d90();
        FUN_008fa54c(&local_108,"epicKeyExplanation");
        FUN_009ba7a8(uVar9,&local_108,auStack_d0);
        if ((local_108 & 1) != 0) {
          operator_delete((void *)CONCAT71(uStack_f7,local_f8));
        }
        pcVar10 = "epicKeyExplanation";
        goto LAB_00af1688;
      }
    }
    lVar7 = FUN_00969248();
    if (0 < *(int *)(lVar7 + 0x38)) {
      uVar8 = FUN_0093c06c("iceExplanation");
      if ((uVar8 & 1) == 0) {
        uVar11 = (ulong)(local_120[0] >> 1);
        uVar8 = uVar11;
        if ((local_120[0] & 1) != 0) {
          uVar8 = local_118;
        }
        if (uVar8 == 0x17) {
          iVar6 = FUN_0090d610(local_120,0,0xffffffffffffffff,"card_currency_ice_small",0x17);
          if (iVar6 != 0) {
            uVar11 = (ulong)(local_120[0] >> 1);
            goto LAB_00af11c8;
          }
        }
        else {
LAB_00af11c8:
          uVar8 = uVar11;
          if ((local_120[0] & 1) != 0) {
            uVar8 = local_118;
          }
          if (uVar8 == 0x18) {
            iVar6 = FUN_0090d610(local_120,0,0xffffffffffffffff,"card_currency_ice_medium",0x18);
            if (iVar6 == 0) goto LAB_00af1298;
            uVar11 = (ulong)(local_120[0] >> 1);
          }
          if ((local_120[0] & 1) != 0) {
            uVar11 = local_118;
          }
          if ((uVar11 != 0x17) ||
             (iVar6 = FUN_0090d610(local_120,0,0xffffffffffffffff,"card_currency_ice_large",0x17),
             iVar6 != 0)) goto LAB_00af1238;
        }
LAB_00af1298:
        FUN_009c7330(auStack_d0);
        uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00910394(&local_c0,uVar9);
        local_90 = 3;
        local_50 = local_50 | 2;
        uVar8 = FUN_0092ea9c();
        uVar1 = 0x4b00000;
        if ((uVar8 & 1) == 0) {
          uVar1 = 0x3e80000;
        }
        local_54 = local_54 & 0xffff | uVar1;
        uVar9 = FUN_00e6ce7c("TUTORIAL_ICE_EXPLANATION_DIALOG_MSG",0);
        thunk_FUN_00e7051c(&local_108,uVar9);
        FUN_008fcdb8(&local_f8,&DAT_0320ffa8);
        local_e0 = 1;
        local_dc = 0x41200000;
        FUN_009c84f0(auStack_d0,&local_108);
        if ((local_f8 & 1) != 0) {
          operator_delete(local_e8);
        }
        if (local_100 != (void *)0x0) {
          operator_delete__(local_100);
          local_108 = 0;
          local_100 = (void *)0x0;
        }
        uVar9 = FUN_009b8d90();
        FUN_008fa54c(&local_108,"iceExplanation");
        FUN_009ba7a8(uVar9,&local_108,auStack_d0);
        if ((local_108 & 1) != 0) {
          operator_delete((void *)CONCAT71(uStack_f7,local_f8));
        }
        pcVar10 = "iceExplanation";
        goto LAB_00af1688;
      }
LAB_00af1238:
      uVar8 = FUN_0093c06c("gloryExplanation");
      if ((uVar8 & 1) != 0) goto LAB_00af16cc;
      uVar11 = (ulong)(local_120[0] >> 1);
      uVar8 = uVar11;
      if ((local_120[0] & 1) != 0) {
        uVar8 = local_118;
      }
      if (uVar8 == 0x19) {
        iVar6 = FUN_0090d610(local_120,0,0xffffffffffffffff,"card_currency_glory_small",0x19);
        if (iVar6 != 0) {
          uVar11 = (ulong)(local_120[0] >> 1);
          goto LAB_00af13c4;
        }
      }
      else {
LAB_00af13c4:
        uVar8 = uVar11;
        if ((local_120[0] & 1) != 0) {
          uVar8 = local_118;
        }
        if (uVar8 == 0x1a) {
          iVar6 = FUN_0090d610(local_120,0,0xffffffffffffffff,"card_currency_glory_medium",0x1a);
          if (iVar6 == 0) goto LAB_00af1434;
          uVar11 = (ulong)(local_120[0] >> 1);
        }
        if ((local_120[0] & 1) != 0) {
          uVar11 = local_118;
        }
        if ((uVar11 != 0x19) ||
           (iVar6 = FUN_0090d610(local_120,0,0xffffffffffffffff,"card_currency_glory_large",0x19),
           iVar6 != 0)) goto LAB_00af16cc;
      }
LAB_00af1434:
      FUN_009c7330(auStack_d0);
      uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00910394(&local_c0,uVar9);
      local_90 = 3;
      local_50 = local_50 | 2;
      uVar8 = FUN_0092ea9c();
      uVar1 = 0x4b00000;
      if ((uVar8 & 1) == 0) {
        uVar1 = 0x3e80000;
      }
      local_54 = local_54 & 0xffff | uVar1;
      uVar9 = FUN_00e6ce7c("TUTORIAL_GLORY_EXPLANATION_DIALOG_MSG",0);
      thunk_FUN_00e7051c(&local_108,uVar9);
      FUN_008fcdb8(&local_f8,&DAT_0320ffa8);
      local_e0 = 1;
      local_dc = 0x41200000;
      FUN_009c84f0(auStack_d0,&local_108);
      if ((local_f8 & 1) != 0) {
        operator_delete(local_e8);
      }
      if (local_100 != (void *)0x0) {
        operator_delete__(local_100);
        local_108 = 0;
        local_100 = (void *)0x0;
      }
      uVar9 = FUN_009b8d90();
      FUN_008fa54c(&local_108,"gloryExplanation");
      FUN_009ba7a8(uVar9,&local_108,auStack_d0);
      if ((local_108 & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_f7,local_f8));
      }
      pcVar10 = "gloryExplanation";
      goto LAB_00af1688;
    }
    bVar3 = *(byte *)(param_1 + 0x1ad0);
    uVar8 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar8 = *(ulong *)(param_1 + 0x1ad8);
    }
    if ((uVar8 == 0xe) &&
       (iVar6 = FUN_0090d610((byte *)(param_1 + 0x1ad0),0,0xffffffffffffffff,"joinGuildBonus",0xe),
       iVar6 == 0)) {
      FUN_009c7330(auStack_d0);
      uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00910394(&local_c0,uVar9);
      local_90 = 3;
      local_50 = local_50 | 2;
      uVar8 = FUN_0092ea9c();
      uVar1 = 0x4b00000;
      if ((uVar8 & 1) == 0) {
        uVar1 = 0x3e80000;
      }
      local_54 = local_54 & 0xffff | uVar1;
      uVar9 = FUN_00e6ce7c("MENU_PROFILE_GUILD_JOIN_GUILD_BONUS",0);
      thunk_FUN_00e7051c(&local_108,uVar9);
      FUN_008fcdb8(&local_f8,&DAT_0320ffa8);
      local_e0 = 1;
      local_dc = 0x41200000;
      FUN_009c84f0(auStack_d0,&local_108);
      if ((local_f8 & 1) != 0) {
        operator_delete(local_e8);
      }
      if (local_100 != (void *)0x0) {
        operator_delete__(local_100);
        local_108 = 0;
        local_100 = (void *)0x0;
      }
      uVar9 = FUN_009b8d90();
      FUN_008fa54c(&local_108,"joinGuildBonus");
      FUN_009ba7a8(uVar9,&local_108,auStack_d0);
      if ((local_108 & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_f7,local_f8));
      }
      goto LAB_00af1690;
    }
  }
LAB_00af16cc:
  if ((local_120[0] & 1) != 0) {
    operator_delete(local_110);
  }
LAB_00af16dc:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

