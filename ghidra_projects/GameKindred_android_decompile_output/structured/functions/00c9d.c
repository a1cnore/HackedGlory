// functions/00c9d — 12 functions
#include "libGameKindred.h"




void thunk_FUN_00c9dcdc(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined4 *puStack_58;
  undefined4 uStack_4c;
  ulong uStack_48;
  undefined4 *puStack_40;
  long lStack_38;
  
  lVar3 = tpidr_el0;
  lStack_38 = *(long *)(lVar3 + 0x28);
  *(uint *)(param_1 + 0x65e4) = *(uint *)(param_1 + 0x65e4) | 4;
  FUN_00f01980();
  FUN_00f01980(param_1 + 0x4528);
  uVar1 = *(uint *)(param_1 + 0x45ac);
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x45ac) = uVar1 & 0xffff807f;
    FUN_0091ada4(param_1 + 0x4528);
  }
  uStack_48 = 0;
  puStack_40 = (undefined4 *)0x0;
  uStack_4c = 0x1d;
  FUN_0091f584(&uStack_48,&uStack_4c);
  switch(*(undefined4 *)(param_1 + 0x6760)) {
  case 0:
    uStack_4c = 0x15;
    break;
  case 1:
    uStack_4c = 0x15;
    FUN_0091f584(&uStack_48,&uStack_4c);
    uStack_4c = 0x17;
    break;
  case 2:
    uStack_4c = 0x15;
    FUN_0091f584(&uStack_48,&uStack_4c);
    uStack_4c = 0x17;
    FUN_0091f584(&uStack_48,&uStack_4c);
    uStack_4c = 0x19;
    break;
  case 3:
    uStack_4c = 0x15;
    FUN_0091f584(&uStack_48,&uStack_4c);
    uStack_4c = 0x17;
    FUN_0091f584(&uStack_48,&uStack_4c);
    uStack_4c = 0x19;
    FUN_0091f584(&uStack_48,&uStack_4c);
    uStack_4c = 0x1b;
    break;
  default:
    goto switchD_00c9dd84_default;
  }
  FUN_0091f584(&uStack_48,&uStack_4c);
switchD_00c9dd84_default:
  uStack_60 = 0;
  puStack_58 = (undefined4 *)0x0;
  FUN_0091f484(&uStack_60,uStack_48 & 0xffffffff);
  if ((int)uStack_48 == 0) {
    iVar4 = 0;
  }
  else {
    lVar7 = (uStack_48 & 0xffffffff) << 2;
    puVar5 = puStack_40;
    puVar6 = puStack_58;
    do {
      lVar7 = lVar7 + -4;
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      iVar4 = (int)uStack_48;
    } while (lVar7 != 0);
  }
  uStack_60 = CONCAT44(uStack_60._4_4_,iVar4);
  FUN_00afa458(param_1,&uStack_60,0);
  if (puStack_58 != (undefined4 *)0x0) {
    operator_delete__(puStack_58);
    uStack_60 = 0;
    puStack_58 = (undefined4 *)0x0;
  }
  FUN_00af9914(param_1);
  FUN_00afa5e4(param_1,"Back_Craft_Idle");
  FUN_00aa12a8(0x3f800000,"build://Sounds/Cards/spoils_cards_flip.mp3",0,0);
  lVar7 = FUN_00aa12a8(0x3f800000,"build://Sounds/Cards/progress_rumble_loop.mp3",1,0);
  if (lVar7 != 0) {
    uVar2 = *(undefined4 *)(lVar7 + 0x30);
    *(long *)(param_1 + 0x6750) = lVar7 + 0x28;
    *(undefined4 *)(param_1 + 0x6758) = uVar2;
  }
  if (puStack_40 != (undefined4 *)0x0) {
    operator_delete__(puStack_40);
    uStack_48 = 0;
    puStack_40 = (undefined4 *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00c9df30(long param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  (**(code **)**(undefined8 **)(param_1 + 0x6748))();
  FUN_00aa12a8(0x3f800000,"build://Sounds/Cards/card_destroyed.mp3",0,0);
  plVar2 = *(long **)(param_1 + 0x6750);
  if (plVar2 != (long *)0x0) {
    piVar1 = (int *)(param_1 + 0x6758);
    if (*piVar1 == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x6750);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*piVar1 == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x6750) = 0;
            uVar4 = 0;
            *piVar1 = DAT_03214ce8;
          }
        }
        FUN_009dbf64(0x3e4ccccd,uVar4);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x6750) = 0;
      *piVar1 = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00c9d020(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar2 * 0x40);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_027c27b8;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(code **)(puVar3 + 8) = FUN_00c9ccb0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  FUN_00f022a0(param_2,puVar3);
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
  FUN_00efcac4(param_1,puVar3);
  FUN_00f022a0(param_2,puVar3);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar2 * 0x40);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_027c27b8;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(code **)(puVar3 + 8) = FUN_00c9c4b8;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  FUN_00f022a0(param_2,puVar3);
  return;
}




void FUN_00c9d270(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  ushort uVar6;
  ushort *puVar7;
  undefined8 uVar8;
  byte local_78 [16];
  void *local_68;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar8 = *(undefined8 *)(param_2 + 0x308);
  uVar3 = FUN_00e6a474("saturation");
  uVar4 = FUN_0091ed5c("saturation",uVar3,0x12345678);
  uVar3 = 0x3f800000;
  if (*(char *)(param_2 + 0x6766) != '\0') {
    uVar3 = 0;
  }
  FUN_0199712c(uVar3,uVar8,uVar4);
  local_60[1] = 0;
  local_50 = (void *)0x0;
  local_60[0] = 0;
  if (*(char *)(param_2 + 0x6766) == '\0') {
    switch(*(undefined4 *)(param_2 + 0x6760)) {
    case 0:
      pcVar5 = "Effect_Common_Front_NoDelay";
      break;
    case 1:
      pcVar5 = "Effect_Rare_Front_NoDelay";
      break;
    case 2:
      pcVar5 = "Effect_Epic_Front_NoDelay";
      break;
    case 3:
      pcVar5 = "Effect_Legendary_Front_NoDelay";
      break;
    case 4:
      pcVar5 = "Effect_Currency_Glory_Front_NoDelay";
      break;
    case 5:
      pcVar5 = "Effect_Currency_Ice_Front_NoDelay";
      break;
    default:
      goto switchD_00c9d324_default;
    }
  }
  else {
    switch(*(undefined4 *)(param_2 + 0x6760)) {
    case 0:
      pcVar5 = "Ghost_Common";
      break;
    case 1:
      pcVar5 = "Ghost_Rare";
      break;
    case 2:
      pcVar5 = "Ghost_Epic";
      break;
    case 3:
      pcVar5 = "Ghost_Legendary";
      break;
    default:
      goto switchD_00c9d324_default;
    }
  }
  FUN_008fa54c(local_78,pcVar5);
  FUN_008fce60(local_60,local_78);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
switchD_00c9d324_default:
  if ((param_3 & 1) != 0) {
    FUN_00f01980(param_2);
  }
  lVar2 = DAT_03210d00;
  if (0.0 < (float)param_1) {
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
      FUN_00efcad4(puVar7);
      *(undefined ***)puVar7 = &PTR_FUN_027c1a60;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efcac4(param_1,puVar7);
    FUN_00f022a0(param_2,puVar7);
  }
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
    FUN_00a99abc(puVar7);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00a99b60(puVar7,param_2,local_60);
  FUN_00f022a0(param_2,puVar7);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c9d590(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  FUN_00f01980();
  FUN_00c9d270(0,param_1,1);
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c27b8;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + 0x48);
  *(code **)(puVar4 + 8) = FUN_00c9c4a8;
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  FUN_00f022a0(param_1,puVar4);
  return;
}




void FUN_00c9d690(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00af9914();
  FUN_00f048e0(auStack_48,DAT_0313ca1c,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c9d6fc(undefined8 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00f01980();
  lVar2 = DAT_03210d00;
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
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efe530(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  local_60 = param_2;
  uStack_5c = param_2;
  FUN_00efe58c(puVar5,&local_60);
  FUN_00efcac4(param_1,puVar5);
  FUN_00f022a0(param_3,puVar5);
  lVar2 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar4 * 0x40);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_027c27b8;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  *(code **)(puVar5 + 8) = FUN_00c9cc9c;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  FUN_00f022a0(param_3,puVar5);
  lVar2 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar4 * 0x40);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_027c27b8;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x1a0) + 8) + 0x20);
  *(code **)(puVar5 + 8) = FUN_00c9c4a8;
  *(undefined8 *)(puVar5 + 0x10) = uVar3;
  FUN_00f022a0(param_3,puVar5);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c9d994(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  FUN_00f01980();
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c27b8;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(code **)(puVar4 + 8) = FUN_00c9ccb0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  FUN_00f022a0(param_1,puVar4);
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c27b8;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + (param_2 & 0xffffffff) * 8);
  *(code **)(puVar4 + 8) = FUN_00c9c4a8;
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  FUN_00f022a0(param_1,puVar4);
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f800000,puVar4);
  FUN_00f022a0(param_1,puVar4);
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c27b8;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + (ulong)param_3 * 8);
  *(code **)(puVar4 + 8) = FUN_00c9c4a8;
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  FUN_00f022a0(param_1,puVar4);
  return;
}




void FUN_00c9dcb4(long param_1)

{
  *(uint *)(param_1 + 0x65e4) = *(uint *)(param_1 + 0x65e4) & 0xfffffffb;
  return;
}




void FUN_00c9dcc8(long param_1)

{
  *(uint *)(param_1 + 0x65e4) = *(uint *)(param_1 + 0x65e4) & 0xfffffffb;
  return;
}




void FUN_00c9dcdc(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 local_60;
  undefined4 *local_58;
  undefined4 local_4c;
  ulong local_48;
  undefined4 *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  *(uint *)(param_1 + 0x65e4) = *(uint *)(param_1 + 0x65e4) | 4;
  FUN_00f01980();
  FUN_00f01980(param_1 + 0x4528);
  uVar1 = *(uint *)(param_1 + 0x45ac);
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x45ac) = uVar1 & 0xffff807f;
    FUN_0091ada4(param_1 + 0x4528);
  }
  local_48 = 0;
  local_40 = (undefined4 *)0x0;
  local_4c = 0x1d;
  FUN_0091f584(&local_48,&local_4c);
  switch(*(undefined4 *)(param_1 + 0x6760)) {
  case 0:
    local_4c = 0x15;
    break;
  case 1:
    local_4c = 0x15;
    FUN_0091f584(&local_48,&local_4c);
    local_4c = 0x17;
    break;
  case 2:
    local_4c = 0x15;
    FUN_0091f584(&local_48,&local_4c);
    local_4c = 0x17;
    FUN_0091f584(&local_48,&local_4c);
    local_4c = 0x19;
    break;
  case 3:
    local_4c = 0x15;
    FUN_0091f584(&local_48,&local_4c);
    local_4c = 0x17;
    FUN_0091f584(&local_48,&local_4c);
    local_4c = 0x19;
    FUN_0091f584(&local_48,&local_4c);
    local_4c = 0x1b;
    break;
  default:
    goto switchD_00c9dd84_default;
  }
  FUN_0091f584(&local_48,&local_4c);
switchD_00c9dd84_default:
  local_60 = 0;
  local_58 = (undefined4 *)0x0;
  FUN_0091f484(&local_60,local_48 & 0xffffffff);
  if ((int)local_48 == 0) {
    iVar4 = 0;
  }
  else {
    lVar7 = (local_48 & 0xffffffff) << 2;
    puVar5 = local_40;
    puVar6 = local_58;
    do {
      lVar7 = lVar7 + -4;
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      iVar4 = (int)local_48;
    } while (lVar7 != 0);
  }
  local_60 = CONCAT44(local_60._4_4_,iVar4);
  FUN_00afa458(param_1,&local_60,0);
  if (local_58 != (undefined4 *)0x0) {
    operator_delete__(local_58);
    local_60 = 0;
    local_58 = (undefined4 *)0x0;
  }
  FUN_00af9914(param_1);
  FUN_00afa5e4(param_1,"Back_Craft_Idle");
  FUN_00aa12a8(0x3f800000,"build://Sounds/Cards/spoils_cards_flip.mp3",0,0);
  lVar7 = FUN_00aa12a8(0x3f800000,"build://Sounds/Cards/progress_rumble_loop.mp3",1,0);
  if (lVar7 != 0) {
    uVar2 = *(undefined4 *)(lVar7 + 0x30);
    *(long *)(param_1 + 0x6750) = lVar7 + 0x28;
    *(undefined4 *)(param_1 + 0x6758) = uVar2;
  }
  if (local_40 != (undefined4 *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (undefined4 *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c9df30(long param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  (**(code **)**(undefined8 **)(param_1 + 0x6748))();
  FUN_00aa12a8(0x3f800000,"build://Sounds/Cards/card_destroyed.mp3",0,0);
  plVar2 = *(long **)(param_1 + 0x6750);
  if (plVar2 != (long *)0x0) {
    piVar1 = (int *)(param_1 + 0x6758);
    if (*piVar1 == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x6750);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*piVar1 == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x6750) = 0;
            uVar4 = 0;
            *piVar1 = DAT_03214ce8;
          }
        }
        FUN_009dbf64(0x3e4ccccd,uVar4);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x6750) = 0;
      *piVar1 = DAT_03214ce8;
    }
  }
  return;
}

