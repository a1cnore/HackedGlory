// functions/00c9c — 18 functions
#include "libGameKindred.h"




void FUN_00c9c168(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313ca18,0);
  FUN_00f04760(param_1,auStack_48,1);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
  FUN_00af97f4(param_1,0);
  FUN_00f01980(param_1);
  FUN_00af9aa0(param_1,*(undefined8 *)(&DAT_02807260 + (long)*(int *)(param_1 + 0x6760) * 8));
  FUN_00c9c220(0,0,param_1,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c9c220(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  
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
  FUN_00efcac4(param_2,puVar3);
  FUN_00f022a0(param_3 + 0x4528,puVar3);
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
    FUN_00efdd74(puVar3);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar4 = 0x3f800000;
  if ((param_4 & 1) == 0) {
    uVar4 = 0;
  }
  FUN_00efddc4(uVar4,puVar3);
  FUN_00efcac4(param_1,puVar3);
  FUN_00f022a0(param_3 + 0x4528,puVar3);
  return;
}




void FUN_00c9c3cc(long param_1)

{
  FUN_00c9c220(0,0,param_1,1);
  FUN_00c9c408(param_1,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + 0x20));
  return;
}




void FUN_00c9c408(undefined8 param_1,undefined8 *param_2)

{
  FUN_00af97f4(param_1,0);
  FUN_00afa094(*(undefined4 *)(param_2 + 2),param_1,*param_2,*(undefined1 *)((long)param_2 + 0x14),0
              );
  return;
}




void FUN_00c9c444(long param_1)

{
  char *pcVar1;
  
  FUN_00c9c220(0,0,param_1,0);
  FUN_00c9c408(param_1,**(undefined8 **)(*(long *)(param_1 + 0x1a0) + 8));
  pcVar1 = "Effect_Back_Idle_Basic";
  if (*(char *)(param_1 + 0x6764) != '\0') {
    pcVar1 = "Effect_Back_Idle_Basic_LQ";
  }
  FUN_00afa5e4(param_1,pcVar1);
  return;
}




void FUN_00c9c4a8(undefined8 param_1,undefined8 param_2)

{
  FUN_00c9c408(param_2,param_1);
  return;
}




void FUN_00c9c4b8(undefined8 param_1,undefined8 param_2)

{
  FUN_00c9c220(0x3e99999a,0,param_2,1);
  return;
}




void FUN_00c9c4d0(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined1 auStack_48 [8];
  uint local_40;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(param_1);
  uVar2 = FUN_00e703d4((double)param_3,&local_3c,&local_40,auStack_48);
  FUN_00e6ce7c("MENU_BOOSTS_MARKET_DURATION_TIMED_SINGLE_DAY",0);
  FUN_00e6ce7c("MENU_BOOSTS_MARKET_DURATION_TIMED_PLURAL_DAYS",0);
  FUN_00e6ce7c("MENU_BOOSTS_MARKET_DURATION_TIMED_SINGLE_HOUR",0);
  FUN_00e6ce7c("MENU_BOOSTS_MARKET_DURATION_TIMED_PLURAL_HOURS",0);
  FUN_00e6ce7c("MENU_BOOSTS_MARKET_DURATION_TIMED_SINGLE_MINUTE",0);
  FUN_00e6ce7c("MENU_BOOSTS_MARKET_DURATION_TIMED_PLURAL_MINUTES",0);
  if ((int)uVar2 < 1) {
    if ((int)local_3c < 1) {
      if ((int)local_40 < 1) {
        if (-1 < param_3) goto LAB_00c9c6cc;
        pcVar3 = "MENU_BOOSTS_MARKET_DURATION_PERMANENT";
      }
      else {
        if (local_40 != 1) {
          uVar4 = FUN_00e6ce7c("MENU_BOOSTS_MARKET_DURATION_TIMED_PLURAL_MINUTES",0);
          FUN_00910394(param_1,uVar4);
          FUN_00e70510(&local_58);
          local_3c = local_40;
          goto LAB_00c9c684;
        }
        pcVar3 = "MENU_BOOSTS_MARKET_DURATION_TIMED_SINGLE_MINUTE";
      }
    }
    else {
      if (local_3c != 1) {
        uVar4 = FUN_00e6ce7c("MENU_BOOSTS_MARKET_DURATION_TIMED_PLURAL_HOURS",0);
        FUN_00910394(param_1,uVar4);
        FUN_00e70510(&local_58);
        goto LAB_00c9c684;
      }
      pcVar3 = "MENU_BOOSTS_MARKET_DURATION_TIMED_SINGLE_HOUR";
    }
  }
  else {
    if (uVar2 != 1) {
      uVar4 = FUN_00e6ce7c("MENU_BOOSTS_MARKET_DURATION_TIMED_PLURAL_DAYS",0);
      FUN_00910394(param_1,uVar4);
      FUN_00e70510(&local_58);
      local_3c = uVar2;
LAB_00c9c684:
      FUN_00e70e18(&local_58,&DAT_01bb6d43,local_3c);
      FUN_00e705c8(&local_68,"[DURATION]");
      FUN_00e71248(param_1,0,&local_68,&local_58);
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
      goto LAB_00c9c6cc;
    }
    pcVar3 = "MENU_BOOSTS_MARKET_DURATION_TIMED_SINGLE_DAY";
  }
  uVar4 = FUN_00e6ce7c(pcVar3,0);
  FUN_00910394(param_1,uVar4);
LAB_00c9c6cc:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c9c6f4(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  ulong local_68;
  void *local_60;
  void *local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  uVar2 = FUN_00ccc2c8();
  FUN_008fa54c(&local_68,*(undefined8 *)(*(long *)(param_1 + 0x6740) + 8));
  FUN_00cccc34(uVar2,&local_68,&local_50);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if (local_50 == 0) {
    FUN_00e70510(&local_68);
    FUN_00e70e18(&local_68,&DAT_01bb6d43,param_2);
    FUN_00f0d75c(param_1 + 0x4810,&local_68);
    fVar3 = (float)FUN_00f0eac0(param_1 + 0x55d0);
    fVar4 = (float)FUN_00f01c20(param_1 + 0x4810);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    fVar3 = fVar3 + fVar4 + 15.0;
  }
  else {
    FUN_00c9c4d0(&local_68);
    FUN_00f0d75c(param_1 + 0x4810,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    fVar3 = (float)FUN_00f01c20(param_1 + 0x4810);
  }
  fVar4 = (float)FUN_00f01c20(param_1 + 0x4810);
  fVar4 = fVar3 * 0.5 - fVar4;
  if (*(float *)(param_1 + 0x4850) != fVar4) {
    *(float *)(param_1 + 0x4850) = fVar4;
    FUN_0091ada4(param_1 + 0x4810);
  }
  if (*(float *)(param_1 + 0x5610) != fVar4 + -15.0) {
    *(float *)(param_1 + 0x5610) = fVar4 + -15.0;
    FUN_0091ada4(param_1 + 0x55d0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c9c898(long param_1,int param_2)

{
  long lVar1;
  float fVar2;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  fVar2 = (float)param_2;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  FUN_00e70e18(&local_48,&DAT_01b97cee,(int)fVar2);
  FUN_00f0d75c(param_1 + 0x4cb0,&local_48);
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




void FUN_00c9c930(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  fVar3 = (float)param_2;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  FUN_00e70e18(&local_48,&DAT_01baf1d8,(int)fVar3);
  FUN_00f0d75c(param_1 + 0x4de0,&local_48);
  uVar2 = FUN_00e6ce7c("MENU_SKINS_HUB_CRAFTING_INSTRUCTIONS_OWNED_BLUEPRINT",0);
  thunk_FUN_00e7051c(&local_58,uVar2);
  FUN_00e705c8(&local_68,&DAT_01b9db64);
  FUN_00e705c8(&local_78,"{0,320,340,340}");
  FUN_00e713f0(&local_58,0,&local_68,&local_78);
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
  FUN_00e705c8(&local_68,"[/EM]");
  FUN_00e705c8(&local_78,&DAT_01bd12d3);
  FUN_00e713f0(&local_58,0,&local_68,&local_78);
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
  uVar2 = FUN_00f08be8(param_1 + 0x47b0);
  thunk_FUN_00e7051c(&local_68,uVar2);
  FUN_00e70510(&local_78);
  FUN_00e70e18(&local_78,&DAT_01bb6d43,(int)fVar3);
  FUN_00e705c8(&local_88,"[SKIN_NAME]");
  FUN_00e71248(&local_58,0,&local_88,&local_68);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  FUN_00e705c8(&local_88,"[NUM_ESSENCE]");
  FUN_00e71248(&local_58,0,&local_88,&local_78);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  FUN_00f0d75c(param_1 + 0x43f8,&local_58);
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




void FUN_00c9cb6c(long param_1,int param_2)

{
  long lVar1;
  float fVar2;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  fVar2 = (float)param_2;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  FUN_00e70e18(&local_48,&DAT_01bb6d43,(int)fVar2);
  FUN_00f0d75c(param_1 + 0x4b80,&local_48);
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




void FUN_00c9cc04(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x49c4) =
       *(uint *)(param_1 + 0x49c4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x49c4) & 3 | (param_2 & 1) << 2;
  *(uint *)(param_1 + 0x614) =
       *(uint *)(param_1 + 0x614) & 0xfffffff8 | *(uint *)(param_1 + 0x614) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00c9cc24(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00b09454(param_1 + 0x2480,param_2 & 1);
  uVar1 = *(uint *)(param_1 + 0x2504);
  uVar2 = 0xff;
  if ((param_2 & 1) == 0) {
    uVar2 = 0x99;
  }
  if ((uVar1 >> 7 & 0xff) == uVar2) {
    return;
  }
  *(uint *)(param_1 + 0x2504) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
  FUN_0091ada4(param_1 + 0x2480);
  return;
}




void FUN_00c9cc9c(undefined8 param_1,undefined8 param_2)

{
  FUN_00c9c220(0,0,param_2,1);
  return;
}




void FUN_00c9ccb0(undefined8 param_1,undefined8 param_2)

{
  FUN_00c9c220(0,0,param_2,0);
  return;
}




void FUN_00c9ccc4(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ushort uVar4;
  long lVar5;
  undefined8 uVar6;
  ushort *puVar7;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f01980();
  if (*(long *)(param_2 + 0x6740) == 0) goto LAB_00c9cef4;
  uVar6 = *(undefined8 *)(param_2 + 0x308);
  uVar3 = FUN_00e6a474("saturation");
  uVar3 = FUN_0091ed5c("saturation",uVar3,0x12345678);
  FUN_0199712c(0x3f800000,uVar6,uVar3);
  FUN_00c9cf24(param_2);
  lVar2 = DAT_03210d00;
  if ((*(uint *)(param_2 + 0x6760) | 4) == 4) {
    lVar5 = 5;
    if ((param_3 & 1) != 0) goto LAB_00c9cd60;
LAB_00c9cdc0:
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efe530(puVar7);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    local_50 = 0x4000000040000000;
    FUN_00efe58c(puVar7,&local_50);
    FUN_00efcac4(param_1,puVar7);
  }
  else {
    lVar5 = 6;
    if ((param_3 & 1) == 0) goto LAB_00c9cdc0;
LAB_00c9cd60:
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x1a0) + 8) + lVar5 * 8);
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00a99928(puVar7);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00a99998(puVar7,param_2,uVar6);
  }
  FUN_00f022a0(param_2,puVar7);
  if (*(char *)(param_2 + 0x6765) != '\0') {
    FUN_00c999a0(0x3f000000,param_2 + 0x56c0,1);
  }
LAB_00c9cef4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c9cf24(long param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  switch(*(undefined4 *)(param_1 + 0x6760)) {
  case 0:
    FUN_00afa5e4(param_1,"Effect_Back_TapWave");
    pcVar3 = "Effect_Common_Front";
    goto LAB_00c9d010;
  case 1:
    FUN_00afa5e4(param_1,"Effect_Rare_Front_Gem");
    pcVar3 = "Effect_Rare_Front_Flare_LQ";
    goto LAB_00c9d010;
  case 2:
    cVar1 = *(char *)(param_1 + 0x6764);
    pcVar2 = "Effect_Epic_Front_LQ";
    pcVar3 = "Effect_Epic_Front";
    break;
  case 3:
    cVar1 = *(char *)(param_1 + 0x6764);
    pcVar2 = "Effect_Legendary_Front_LQ";
    pcVar3 = "Effect_Legendary_Front";
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0x6764);
    pcVar2 = "Effect_Currency_Glory_Front_Flare_LQ";
    pcVar3 = "Effect_Currency_Glory_Front_Flare";
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 0x6764);
    pcVar2 = "Effect_Currency_Ice_Front_Flare_LQ";
    pcVar3 = "Effect_Currency_Ice_Front_Flare";
    break;
  default:
    return;
  }
  if (cVar1 != '\0') {
    pcVar3 = pcVar2;
  }
LAB_00c9d010:
  FUN_00afa5e4(param_1,pcVar3);
  return;
}

