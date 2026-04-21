// functions/0090b — 7 functions
#include "libGameKindred.h"




void FUN_0090b3c8(byte *param_1,byte *param_2,byte *param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  char *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_70 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  pbVar3 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar3 = param_1 + 1;
  }
  local_78 = "key";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,pbVar3);
  pbVar3 = *(byte **)(param_2 + 0x10);
  local_78 = "tags";
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
  }
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,pbVar3);
  pbVar3 = *(byte **)(param_3 + 0x10);
  local_78 = "productId";
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
  }
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,pbVar3);
  FUN_00ec506c("Landing_Page_IAP_Tile_Seen",&local_70);
  FUN_00ec5024("Landing_Page_IAP_Tile_Seen",&local_70);
  FUN_0090d2e0(&local_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090b534(undefined4 param_1)

{
  long lVar1;
  long lVar2;
  char *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  char **local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = &local_58;
  puStack_50 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = "new_ascension_rank";
  lVar2 = FUN_0090d33c(&puStack_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
  FUN_00ec3ee0(lVar2 + 0x28,param_1);
  FUN_00ec506c("Progression_AscensionRankUp",&puStack_50);
  FUN_00ec5024("Progression_AscensionRankUp",&puStack_50);
  FUN_0090d2e0(&puStack_50,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090b5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  char *local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  char **local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00940c28();
  if (*(char *)(lVar2 + 8) == '\0') {
    puStack_80 = &local_78;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = "ascension_season_id";
    local_60 = &local_88;
    lVar2 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3e60(lVar2 + 0x28,param_3);
    local_88 = "ascension_rank";
    local_60 = &local_88;
    lVar2 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3ee0(lVar2 + 0x28,param_4);
    FUN_00ec506c(param_1,&puStack_80);
    FUN_00ec5024(param_1,&puStack_80);
    FUN_0090d2e0(&puStack_80,local_78);
  }
  FUN_0090b71c(param_2,param_5,param_3,param_4);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090b71c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  char *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  char **local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_80 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = "type1";
  local_60 = &local_88;
  lVar2 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_88 = "type2_seasonId";
  local_60 = &local_88;
  lVar2 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar2 + 0x28,param_3);
  local_88 = "type2_ascensionRank";
  local_60 = &local_88;
  lVar2 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3ee0(lVar2 + 0x28,param_4);
  FUN_0090265c(param_2,&local_80);
  FUN_0090d2e0(&local_80,local_78);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090b854(undefined8 param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  byte *pbVar14;
  char *pcVar15;
  long lVar16;
  char *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  char **local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*param_2 != 0) {
    lVar13 = (ulong)*param_2 * 0x68;
    plVar12 = (long *)(*(long *)(param_2 + 2) + 0x10);
    do {
      pbVar14 = (byte *)(plVar12 + 1);
      bVar3 = *pbVar14;
      uVar10 = plVar12[2];
      uVar11 = (ulong)(bVar3 >> 1);
      uVar1 = uVar11;
      if ((bVar3 & 1) != 0) {
        uVar1 = uVar10;
      }
      if (uVar1 == 4) {
        iVar7 = FUN_0090d610(pbVar14,0,0xffffffffffffffff,&DAT_01b9230f,4);
        bVar3 = *(byte *)(plVar12 + 1);
        uVar10 = plVar12[2];
        bVar5 = iVar7 == 0;
        uVar11 = (ulong)(bVar3 >> 1);
      }
      else {
        bVar5 = false;
      }
      if ((bVar3 & 1) != 0) {
        uVar11 = uVar10;
      }
      bVar6 = false;
      if (uVar11 == 4) {
        iVar7 = FUN_0090d610(pbVar14,0,0xffffffffffffffff,"hero",4);
        bVar6 = iVar7 == 0;
      }
      if (bVar5) {
        if ((*(byte *)(plVar12 + -2) & 1) == 0) {
          lVar8 = (long)plVar12 + -0xf;
        }
        else {
          lVar8 = *plVar12;
        }
        lVar8 = FUN_00cc7618(lVar8);
        if (lVar8 != 0) {
          local_88 = 0;
          uStack_80 = 0;
          if ((*(byte *)(plVar12 + -2) & 1) == 0) {
            lVar16 = (long)plVar12 + -0xf;
          }
          else {
            lVar16 = *plVar12;
          }
          local_98 = "skin";
          local_90 = &local_88;
          local_70 = &local_98;
          lVar9 = FUN_0090d33c(&local_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
          FUN_00ec3e60(lVar9 + 0x28,lVar16);
          local_98 = "buyOrWeave";
          local_70 = &local_98;
          lVar16 = FUN_0090d33c(&local_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
          FUN_00ec3e60(lVar16 + 0x28,param_1);
          uVar2 = *(undefined4 *)(param_3 + 0x18);
          local_98 = "ICEspent";
          local_70 = &local_98;
          lVar16 = FUN_0090d33c(&local_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
          FUN_00ec3ee0(lVar16 + 0x28,uVar2);
          uVar2 = *(undefined4 *)(param_3 + 0x20);
          local_98 = "OPALspent";
          local_70 = &local_98;
          lVar16 = FUN_0090d33c(&local_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
          FUN_00ec3ee0(lVar16 + 0x28,uVar2);
          uVar2 = *(undefined4 *)(param_3 + 0x1c);
          local_98 = "SILVERspent";
          local_70 = &local_98;
          lVar16 = FUN_0090d33c(&local_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
          FUN_00ec3ee0(lVar16 + 0x28,uVar2);
          uVar2 = *(undefined4 *)(lVar8 + 0x20);
          local_98 = "rarity";
          local_70 = &local_98;
          lVar8 = FUN_0090d33c(&local_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
          FUN_00ec3ee0(lVar8 + 0x28,uVar2);
          pcVar15 = "Progression_UnlockSkin";
LAB_0090bbe4:
          FUN_00ec506c(pcVar15,&local_90);
          FUN_00ec5024(pcVar15,&local_90);
          FUN_0090d2e0(&local_90,local_88);
        }
      }
      else if (bVar6) {
        local_88 = 0;
        uStack_80 = 0;
        local_98 = "chest";
        local_90 = &local_88;
        local_70 = &local_98;
        lVar8 = FUN_0090d33c(&local_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
        FUN_00ec3e60(lVar8 + 0x28,param_1);
        if ((*(byte *)(plVar12 + -2) & 1) == 0) {
          lVar8 = (long)plVar12 + -0xf;
        }
        else {
          lVar8 = *plVar12;
        }
        local_98 = "hero";
        local_70 = &local_98;
        lVar16 = FUN_0090d33c(&local_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
        FUN_00ec3e60(lVar16 + 0x28,lVar8);
        local_98 = "currency";
        local_70 = &local_98;
        lVar8 = FUN_0090d33c(&local_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
        FUN_00ec3e60(lVar8 + 0x28,"ICE");
        uVar2 = *(undefined4 *)(param_3 + 0x18);
        local_98 = "price";
        local_70 = &local_98;
        lVar8 = FUN_0090d33c(&local_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
        FUN_00ec3ee0(lVar8 + 0x28,uVar2);
        pcVar15 = "Progression_UnlockHero";
        goto LAB_0090bbe4;
      }
      lVar13 = lVar13 + -0x68;
      plVar12 = plVar12 + 0xd;
    } while (lVar13 != 0);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090bc48(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  char *local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  char **local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_78 = 0;
  uStack_70 = 0;
  local_88 = "type1";
  puStack_80 = &local_78;
  local_60 = &local_88;
  lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar3 + 0x28,"purchase");
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  local_88 = "amount";
  local_60 = &local_88;
  lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3ee0(lVar3 + 0x28,uVar1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  local_88 = "ICEspent";
  local_60 = &local_88;
  lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3ee0(lVar3 + 0x28,uVar1);
  FUN_00ec506c(PTR_s_Economy_Tap_Seasonal_Key_02be3028,&puStack_80);
  FUN_00ec5024(PTR_s_Economy_Tap_Seasonal_Key_02be3028,&puStack_80);
  FUN_0090d2e0(&puStack_80,local_78);
  local_78 = 0;
  uStack_70 = 0;
  local_88 = "type1";
  puStack_80 = &local_78;
  local_60 = &local_88;
  lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar3 + 0x28,"seasonKey");
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  local_88 = "amount";
  local_60 = &local_88;
  lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3ee0(lVar3 + 0x28,uVar1);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  local_88 = "type2_keys";
  local_60 = &local_88;
  lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3ee0(lVar3 + 0x28,uVar1);
  FUN_00ec506c(PTR_s_Economy_Sink_ICE_02be3098,&puStack_80);
  FUN_00ec5024(PTR_s_Economy_Sink_ICE_02be3098,&puStack_80);
  FUN_0090d2e0(&puStack_80,local_78);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090be50(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  char *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_2 + 0x28) < 1) {
    if (*(int *)(param_2 + 0x2c) < 1) {
      puStack_70 = &local_68;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = "type1";
      local_50 = &local_78;
      lVar3 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
      FUN_00ec3e60(lVar3 + 0x28,param_1);
      uVar1 = *(undefined4 *)(param_2 + 0x18);
      local_78 = "amount";
      local_50 = &local_78;
      lVar3 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
      FUN_00ec3ee0(lVar3 + 0x28,uVar1);
      FUN_00ec506c(PTR_s_Economy_Sink_ICE_02be3098,&puStack_70);
      puVar4 = PTR_s_Economy_Sink_ICE_02be3098;
    }
    else {
      puStack_70 = &local_68;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = "type1";
      local_50 = &local_78;
      lVar3 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
      FUN_00ec3e60(lVar3 + 0x28,param_1);
      uVar1 = *(undefined4 *)(param_2 + 0x44);
      local_78 = "amount";
      local_50 = &local_78;
      lVar3 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
      FUN_00ec3ee0(lVar3 + 0x28,uVar1);
      FUN_00ec506c(PTR_s_Economy_Sink_Seasonal_Key_02be30b8,&puStack_70);
      puVar4 = PTR_s_Economy_Sink_Seasonal_Key_02be30b8;
    }
  }
  else {
    puStack_70 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = "type1";
    local_50 = &local_78;
    lVar3 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3e60(lVar3 + 0x28,param_1);
    uVar1 = *(undefined4 *)(param_2 + 0x40);
    local_78 = "amount";
    local_50 = &local_78;
    lVar3 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3ee0(lVar3 + 0x28,uVar1);
    FUN_00ec506c(PTR_s_Economy_Sink_Seasonal_Key_02be30b0,&puStack_70);
    puVar4 = PTR_s_Economy_Sink_Seasonal_Key_02be30b0;
  }
  FUN_00ec5024(puVar4,&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

