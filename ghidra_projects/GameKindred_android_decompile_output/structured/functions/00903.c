// functions/00903 — 10 functions
#include "libGameKindred.h"




void FUN_00903170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 long param_5)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  char **local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = "skin";
  puStack_90 = &local_88;
  local_70 = &local_98;
  lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar4 + 0x28,param_3);
  local_98 = "buyOrWeave";
  local_70 = &local_98;
  lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar4 + 0x28,"buy");
  uVar1 = *(undefined4 *)(param_5 + 0x18);
  local_98 = "ICEspent";
  local_70 = &local_98;
  lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar4 + 0x28,uVar1);
  uVar1 = *(undefined4 *)(param_5 + 0x20);
  local_98 = "OPALspent";
  local_70 = &local_98;
  lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar4 + 0x28,uVar1);
  uVar1 = *(undefined4 *)(param_5 + 0x1c);
  local_98 = "SILVERspent";
  local_70 = &local_98;
  lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar4 + 0x28,uVar1);
  local_98 = "rarity";
  local_70 = &local_98;
  lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar4 + 0x28,param_4);
  local_98 = "skuId";
  local_70 = &local_98;
  lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar4 + 0x28,param_1);
  local_98 = "chestContents";
  local_70 = &local_98;
  lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar4 + 0x28,param_2);
  FUN_00ec506c("Progression_UnlockSkin",&puStack_90);
  FUN_00ec5024("Progression_UnlockSkin",&puStack_90);
  FUN_0090d2e0(&puStack_90,local_88);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = "type1";
  puStack_90 = &local_88;
  local_70 = &local_98;
  lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar4 + 0x28,&DAT_01b9230f);
  local_98 = "type2_skinTier";
  local_70 = &local_98;
  lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar4 + 0x28,param_4);
  local_98 = "type3_skinKey";
  local_70 = &local_98;
  lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar4 + 0x28,param_3);
  iVar2 = *(int *)(param_5 + 0x18);
  if (iVar2 != 0) {
    local_98 = "amount";
    local_70 = &local_98;
    lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3ee0(lVar4 + 0x28,iVar2);
    FUN_00ec506c(PTR_s_Economy_Sink_ICE_02be3098,&puStack_90);
    FUN_00ec5024(PTR_s_Economy_Sink_ICE_02be3098,&puStack_90);
  }
  iVar2 = *(int *)(param_5 + 0x20);
  if (iVar2 != 0) {
    local_70 = &local_98;
    local_98 = "amount";
    lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3ee0(lVar4 + 0x28,iVar2);
    FUN_00ec506c(PTR_s_Economy_Sink_Opal_02be30a8,&puStack_90);
    FUN_00ec5024(PTR_s_Economy_Sink_Opal_02be30a8,&puStack_90);
  }
  iVar2 = *(int *)(param_5 + 0x1c);
  if (iVar2 != 0) {
    local_70 = &local_98;
    local_98 = "amount";
    lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3ee0(lVar4 + 0x28,iVar2);
    FUN_00ec506c(PTR_s_Economy_Sink_Glory_02be30a0,&puStack_90);
    FUN_00ec5024(PTR_s_Economy_Sink_Glory_02be30a0,&puStack_90);
  }
  FUN_0090d2e0(&puStack_90,local_88);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009035a4(undefined8 param_1,undefined4 param_2,ulong param_3)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  char *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puStack_70 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = "skin";
  local_50 = &local_78;
  lVar3 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar3 + 0x28,param_1);
  local_78 = "buyOrWeave";
  local_50 = &local_78;
  lVar3 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar3 + 0x28,"weave");
  local_78 = "ICEspent";
  local_50 = &local_78;
  lVar3 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar3 + 0x28,0);
  local_78 = "rarity";
  local_50 = &local_78;
  lVar3 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar3 + 0x28,param_2);
  pcVar1 = "isFromInventory";
  if ((param_3 & 1) == 0) {
    pcVar1 = "notFromInventory";
  }
  local_78 = "fromInventory";
  local_50 = &local_78;
  lVar3 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar3 + 0x28,pcVar1);
  FUN_00ec506c("Progression_UnlockSkin",&puStack_70);
  FUN_00ec5024("Progression_UnlockSkin",&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00903764(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  char *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puStack_70 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = "skin";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_78 = "buyOrWeave";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,&DAT_01b9220e);
  local_78 = "product_id";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_3);
  local_78 = "rarity";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar2 + 0x28,param_2);
  FUN_00ec506c("Progression_UnlockSkin",&puStack_70);
  FUN_00ec5024("Progression_UnlockSkin",&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009038d8(undefined8 param_1)

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
  local_58 = "productID";
  lVar2 = FUN_0090d33c(&puStack_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  FUN_00ec506c("Monetization_IAP_Try",&puStack_50);
  FUN_00ec5024("Monetization_IAP_Try",&puStack_50);
  FUN_0090d2e0(&puStack_50,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00903990(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  char *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  char **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = &local_68;
  puStack_60 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = "productID";
  lVar2 = FUN_0090d33c(&puStack_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
  FUN_00ec3e60(lVar2 + 0x28,param_2);
  FUN_00ec506c("Monetization_IAP_Complete",&puStack_60);
  FUN_00ec5024("Monetization_IAP_Complete",&puStack_60);
  FUN_00ec5084("isSpender",1);
  FUN_00ec503c("isSpender",1);
  FUN_00ec5098("spendCount",1);
  FUN_00ec5050("spendCount",1);
  FUN_00ec5070(param_1,param_2,1);
  FUN_00ec5028(param_1,param_2,1);
  FUN_00ec50b0(param_1,"isa0ga",1);
  FUN_00ec50c4(param_1,1);
  FUN_0090d2e0(&puStack_60,local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00903adc(undefined8 param_1)

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
  local_58 = "tile_id";
  lVar2 = FUN_0090d33c(&puStack_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  FUN_00ec506c("Monetization_OfferPopup_Shown",&puStack_50);
  FUN_00ec5024("Monetization_OfferPopup_Shown",&puStack_50);
  FUN_0090d2e0(&puStack_50,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00903b94(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  char *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puStack_70 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = "source";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,"crafting");
  local_78 = "card";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_78 = "essence";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar2 + 0x28,param_2);
  FUN_00ec506c("Economy_Convert_CardToEssence",&puStack_70);
  FUN_00ec5024("Economy_Convert_CardToEssence",&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00903cd0(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  char *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puStack_70 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = "source";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,"crafting");
  local_78 = "card";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_78 = "essence";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar2 + 0x28,param_2);
  FUN_00ec506c("Economy_Convert_EssenceToCard",&puStack_70);
  FUN_00ec5024("Economy_Convert_EssenceToCard",&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00903e0c(undefined8 param_1)

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
  local_58 = "productID";
  lVar2 = FUN_0090d33c(&puStack_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  FUN_00ec506c("Monetization_IAP_Fail",&puStack_50);
  FUN_00ec5024("Monetization_IAP_Fail",&puStack_50);
  FUN_0090d2e0(&puStack_50,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00903ec4(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  char *pcVar1;
  undefined **ppuVar2;
  void *pvVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  char *local_f0;
  undefined8 *puStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  byte local_d0 [16];
  void *local_c0;
  byte local_b8 [16];
  void *local_a8;
  byte local_a0 [16];
  void *local_90;
  undefined1 auStack_88 [8];
  undefined1 *local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  uVar4 = *(undefined4 *)(param_4 + 0xd4);
  FUN_008fcdb8(local_a0,&DAT_0320ffa8);
  FUN_008fcdb8(local_b8,&DAT_0320ffa8);
  FUN_008fcdb8(local_d0,&DAT_0320ffa8);
  if (((*(int *)(param_4 + 0xb0) != 0) &&
      (FUN_008fce60(local_a0,*(undefined8 *)(param_4 + 0xb8)), 1 < *(uint *)(param_4 + 0xb0))) &&
     (FUN_008fce60(local_b8,*(long *)(param_4 + 0xb8) + 0x18), 2 < *(uint *)(param_4 + 0xb0))) {
    FUN_008fce60(local_d0,*(long *)(param_4 + 0xb8) + 0x30);
  }
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = "boxSkuID";
  puStack_e8 = &local_e0;
  local_80 = (undefined1 *)&local_f0;
  lVar7 = FUN_0090d33c(&puStack_e8,&local_f0,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3e60(lVar7 + 0x28,param_3);
  local_f0 = "currency";
  local_80 = (undefined1 *)&local_f0;
  lVar7 = FUN_0090d33c(&puStack_e8,&local_f0,&DAT_01b9349b,&local_80,auStack_88);
  bVar6 = (param_2 & 1) == 0;
  pcVar1 = "ICE";
  if (bVar6) {
    pcVar1 = "glory";
  }
  ppuVar2 = &PTR_s_Economy_Sink_ICE_02be3098;
  if (bVar6) {
    ppuVar2 = &PTR_s_Economy_Sink_Glory_02be30a0;
  }
  FUN_00ec3e60(lVar7 + 0x28,pcVar1);
  local_f0 = "boxProgressPercent";
  local_80 = (undefined1 *)&local_f0;
  lVar7 = FUN_0090d33c(&puStack_e8,&local_f0,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ef0(param_1,lVar7 + 0x28);
  local_f0 = "primaryTheme";
  pvVar3 = (void *)((ulong)local_a0 | 1);
  if ((local_a0[0] & 1) != 0) {
    pvVar3 = local_90;
  }
  local_80 = (undefined1 *)&local_f0;
  lVar7 = FUN_0090d33c(&puStack_e8,&local_f0,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3e60(lVar7 + 0x28,pvVar3);
  local_f0 = "secondaryTheme";
  pvVar3 = (void *)((ulong)local_b8 | 1);
  if ((local_b8[0] & 1) != 0) {
    pvVar3 = local_a8;
  }
  local_80 = (undefined1 *)&local_f0;
  lVar7 = FUN_0090d33c(&puStack_e8,&local_f0,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3e60(lVar7 + 0x28,pvVar3);
  local_f0 = "tertiaryTheme";
  pvVar3 = (void *)((ulong)local_d0 | 1);
  if ((local_d0[0] & 1) != 0) {
    pvVar3 = local_c0;
  }
  local_80 = (undefined1 *)&local_f0;
  lVar7 = FUN_0090d33c(&puStack_e8,&local_f0,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3e60(lVar7 + 0x28,pvVar3);
  FUN_00ec506c("Progression_Cardbox_Pull",&puStack_e8);
  FUN_00ec5024("Progression_Cardbox_Pull",&puStack_e8);
  FUN_0090d2e0(&puStack_e8,local_e0);
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = "type1";
  puStack_e8 = &local_e0;
  local_80 = (undefined1 *)&local_f0;
  lVar7 = FUN_0090d33c(&puStack_e8,&local_f0,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3e60(lVar7 + 0x28,"box");
  local_f0 = "type2_boxType";
  local_80 = (undefined1 *)&local_f0;
  lVar7 = FUN_0090d33c(&puStack_e8,&local_f0,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3e60(lVar7 + 0x28,"skinCards");
  local_f0 = "type3_theme1";
  pvVar3 = (void *)((ulong)local_a0 | 1);
  if ((local_a0[0] & 1) != 0) {
    pvVar3 = local_90;
  }
  local_80 = (undefined1 *)&local_f0;
  lVar7 = FUN_0090d33c(&puStack_e8,&local_f0,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3e60(lVar7 + 0x28,pvVar3);
  local_f0 = "type3_theme2";
  pvVar3 = (void *)((ulong)local_b8 | 1);
  if ((local_b8[0] & 1) != 0) {
    pvVar3 = local_a8;
  }
  local_80 = (undefined1 *)&local_f0;
  lVar7 = FUN_0090d33c(&puStack_e8,&local_f0,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3e60(lVar7 + 0x28,pvVar3);
  local_f0 = "type3_theme3";
  pvVar3 = (void *)((ulong)local_d0 | 1);
  if ((local_d0[0] & 1) != 0) {
    pvVar3 = local_c0;
  }
  local_80 = (undefined1 *)&local_f0;
  lVar7 = FUN_0090d33c(&puStack_e8,&local_f0,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3e60(lVar7 + 0x28,pvVar3);
  local_f0 = "amount";
  local_80 = (undefined1 *)&local_f0;
  lVar7 = FUN_0090d33c(&puStack_e8,&local_f0,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar7 + 0x28,uVar4);
  FUN_00ec506c(*ppuVar2,&puStack_e8);
  FUN_00ec5024(*ppuVar2,&puStack_e8);
  FUN_0090d2e0(&puStack_e8,local_e0);
  if ((local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

