// functions/00902 — 10 functions
#include "libGameKindred.h"




void FUN_0090219c(undefined8 param_1,undefined8 param_2)

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
  local_78 = "hero";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_78 = "currency";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,&DAT_01b9220e);
  local_78 = "product_id";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_2);
  FUN_00ec506c("Progression_UnlockHero",&puStack_70);
  FUN_00ec5024("Progression_UnlockHero",&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009022d8(undefined8 param_1,int param_2,byte *param_3,undefined8 param_4)

{
  ulong uVar1;
  void *pvVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  char *local_a0;
  char **local_98;
  char *local_90;
  void *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  void *local_70;
  undefined1 auStack_68 [8];
  char *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_78 = 0;
  local_70 = (void *)0x0;
  local_80 = (undefined8 *)0x0;
  bVar3 = *param_3;
  uVar8 = *(ulong *)(param_3 + 8);
  uVar9 = (ulong)(bVar3 >> 1);
  uVar1 = uVar9;
  if ((bVar3 & 1) != 0) {
    uVar1 = uVar8;
  }
  if (uVar1 == 4) {
    iVar5 = FUN_0090d610(param_3,0,0xffffffffffffffff,"gold",4);
    puVar7 = PTR_s_Economy_Sink_ICE_02be3098;
    if (iVar5 != 0) {
      bVar3 = *param_3;
      uVar8 = *(ulong *)(param_3 + 8);
      uVar9 = (ulong)(bVar3 >> 1);
      goto LAB_0090236c;
    }
  }
  else {
LAB_0090236c:
    uVar1 = uVar9;
    if ((bVar3 & 1) != 0) {
      uVar1 = uVar8;
    }
    if (uVar1 == 6) {
      iVar5 = FUN_0090d610(param_3,0,0xffffffffffffffff,"silver",6);
      puVar7 = PTR_s_Economy_Sink_Glory_02be30a0;
      if (iVar5 == 0) goto LAB_00902470;
      bVar3 = *param_3;
      uVar8 = *(ulong *)(param_3 + 8);
      uVar9 = (ulong)(bVar3 >> 1);
    }
    uVar1 = uVar9;
    if ((bVar3 & 1) != 0) {
      uVar1 = uVar8;
    }
    if (uVar1 == 4) {
      iVar5 = FUN_0090d610(param_3,0,0xffffffffffffffff,"opal",4);
      puVar7 = PTR_s_Economy_Sink_Opal_02be30a8;
      if (iVar5 == 0) goto LAB_00902470;
      bVar3 = *param_3;
      uVar8 = *(ulong *)(param_3 + 8);
      uVar9 = (ulong)(bVar3 >> 1);
    }
    if ((bVar3 & 1) != 0) {
      uVar9 = uVar8;
    }
    if ((uVar9 != 7) ||
       (iVar5 = FUN_0090d610(param_3,0,0xffffffffffffffff,"essence",7),
       puVar7 = PTR_s_Economy_Sink_Essence_02be30c0, iVar5 != 0)) {
      if (param_2 != 0) goto LAB_0090262c;
      uVar1 = (ulong)(*param_3 >> 1);
      if ((*param_3 & 1) != 0) {
        uVar1 = *(ulong *)(param_3 + 8);
      }
      puVar7 = PTR_s_Economy_Sink_Free_02be30f0;
      if (uVar1 != 0) goto LAB_0090262c;
    }
  }
LAB_00902470:
  FUN_008fa54c(&local_98,puVar7);
  FUN_008fce60(&local_80,&local_98);
  if (((byte)local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  local_98 = &local_90;
  local_90 = (char *)0x0;
  local_88 = (void *)0x0;
  local_a0 = "type1";
  local_60 = (char *)&local_a0;
  lVar6 = FUN_0090d33c(&local_98,&local_a0,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar6 + 0x28,"bundle");
  local_a0 = "type2_bundleId";
  local_60 = (char *)&local_a0;
  lVar6 = FUN_0090d33c(&local_98,&local_a0,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar6 + 0x28,param_1);
  local_a0 = "amount";
  local_60 = (char *)&local_a0;
  lVar6 = FUN_0090d33c(&local_98,&local_a0,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3ee0(lVar6 + 0x28,param_2);
  pvVar2 = (void *)((ulong)&local_80 | 1);
  if (((ulong)local_80 & 1) != 0) {
    pvVar2 = local_70;
  }
  FUN_00ec506c(pvVar2,&local_98);
  pvVar2 = (void *)((ulong)&local_80 | 1);
  if (((ulong)local_80 & 1) != 0) {
    pvVar2 = local_70;
  }
  FUN_00ec5024(pvVar2,&local_98);
  FUN_0090d2e0(&local_98,local_90);
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  local_80 = &local_78;
  local_78 = 0;
  local_70 = (void *)0x0;
  local_60 = "type1";
  local_98 = &local_60;
  lVar6 = FUN_0090d33c(&local_80,&local_60,&DAT_01b9349b,&local_98,&local_a0);
  FUN_00ec3e60(lVar6 + 0x28,"bundle");
  local_60 = "type2_bundleId";
  local_98 = &local_60;
  lVar6 = FUN_0090d33c(&local_80,&local_60,&DAT_01b9349b,&local_98,&local_a0);
  FUN_00ec3e60(lVar6 + 0x28,param_1);
  FUN_0090265c(param_4,&local_80);
  FUN_0090d2e0(&local_80,local_78);
LAB_0090262c:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0090265c(uint *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte local_b0 [16];
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  char *local_80;
  undefined1 auStack_78 [8];
  char **local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar10 = *(long *)(param_1 + 2);
    lVar9 = 0;
    do {
      lVar1 = lVar10 + lVar9;
      uVar3 = *(undefined4 *)(lVar1 + 0x60);
      local_80 = "amount";
      local_70 = &local_80;
      lVar6 = FUN_0090d33c(param_2,&local_80,&DAT_01b9349b,&local_70,auStack_78);
      FUN_00ec3ee0(lVar6 + 0x28,uVar3);
      uVar5 = FUN_0090cdcc(lVar1);
      local_80 = "isDupe";
      local_70 = &local_80;
      lVar6 = FUN_0090d33c(param_2,&local_80,&DAT_01b9349b,&local_70,auStack_78);
      FUN_00ec3ee0(lVar6 + 0x28,uVar5 & 1);
      uVar7 = FUN_0090cdcc(lVar1);
      if ((uVar7 & 1) != 0) {
        if ((*(byte *)(lVar1 + 0x30) & 1) == 0) {
          lVar6 = lVar10 + lVar9 + 0x31;
        }
        else {
          lVar6 = *(long *)(lVar10 + lVar9 + 0x40);
        }
        local_80 = "originalId";
        local_70 = &local_80;
        lVar8 = FUN_0090d33c(param_2,&local_80,&DAT_01b9349b,&local_70,auStack_78);
        FUN_00ec3e60(lVar8 + 0x28,lVar6);
        lVar6 = lVar10 + lVar9;
        if ((*(byte *)(lVar6 + 0x48) & 1) == 0) {
          lVar6 = lVar6 + 0x49;
        }
        else {
          lVar6 = *(long *)(lVar6 + 0x58);
        }
        local_80 = "originalType";
        local_70 = &local_80;
        lVar8 = FUN_0090d33c(param_2,&local_80,&DAT_01b9349b,&local_70,auStack_78);
        FUN_00ec3e60(lVar8 + 0x28,lVar6);
        uVar3 = *(undefined4 *)(lVar10 + lVar9 + 100);
        local_80 = "originalAmount";
        local_70 = &local_80;
        lVar6 = FUN_0090d33c(param_2,&local_80,&DAT_01b9349b,&local_70,auStack_78);
        FUN_00ec3ee0(lVar6 + 0x28,uVar3);
      }
      FUN_008fcdb8(local_98,lVar1 + 0x18);
      FUN_008fcdb8(local_b0,lVar1);
      FUN_0090a12c(local_98,local_b0,param_2);
      if ((local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
      if ((local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      lVar9 = lVar9 + 0x68;
    } while ((ulong)uVar2 * 0x68 - lVar9 != 0);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009028a0(undefined8 param_1,undefined8 param_2)

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
  local_78 = "campaignId";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_78 = "skuId";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_2);
  FUN_00ec506c("Market_Offers_AdView_Triggered",&puStack_70);
  FUN_00ec5024("Market_Offers_AdView_Triggered",&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009029a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  local_78 = "campaignId";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_78 = "skuId";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_2);
  local_78 = "result";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_3);
  FUN_00ec506c("Market_Offers_AdView_Completed",&puStack_70);
  FUN_00ec5024("Market_Offers_AdView_Completed",&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00902ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  local_78 = "campaignId";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_78 = "skuId";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_2);
  local_78 = "result";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_3);
  FUN_00ec506c("Market_Offers_Redemption",&puStack_70);
  FUN_00ec5024("Market_Offers_Redemption",&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00902c1c(void)

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
  lVar2 = FUN_00940c28();
  if (*(char *)(lVar2 + 8) == '\0') {
    local_30 = &local_58;
    puStack_50 = &local_48;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = "streak";
    lVar2 = FUN_0090d33c(&puStack_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
    FUN_00ec3e60(lVar2 + 0x28,"1stWin");
    FUN_00ec506c("Progression_Quest_WinStreak",&puStack_50);
    FUN_00ec5024("Progression_Quest_WinStreak",&puStack_50);
    FUN_0090d2e0(&puStack_50,local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00902ce0(void)

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
  lVar2 = FUN_00940c28();
  if (*(char *)(lVar2 + 8) == '\0') {
    local_30 = &local_58;
    puStack_50 = &local_48;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = "streak";
    lVar2 = FUN_0090d33c(&puStack_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
    FUN_00ec3e60(lVar2 + 0x28,"3rdWin");
    FUN_00ec506c("Progression_Quest_WinStreak",&puStack_50);
    FUN_00ec5024("Progression_Quest_WinStreak",&puStack_50);
    FUN_0090d2e0(&puStack_50,local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00902da4(void)

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
  lVar2 = FUN_00940c28();
  if (*(char *)(lVar2 + 8) == '\0') {
    local_30 = &local_58;
    puStack_50 = &local_48;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = "streak";
    lVar2 = FUN_0090d33c(&puStack_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
    FUN_00ec3e60(lVar2 + 0x28,"SinisterSeven");
    FUN_00ec506c("Progression_Quest_WinStreak",&puStack_50);
    FUN_00ec5024("Progression_Quest_WinStreak",&puStack_50);
    FUN_0090d2e0(&puStack_50,local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00902e68(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
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
  local_78 = "type1";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,"spoils");
  switch(param_1) {
  case 0:
    local_78 = "type4_skincard_rarity";
    local_50 = &local_78;
    lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3e60(lVar2 + 0x28,"common");
    local_78 = "type4_skincard_essence";
    local_50 = &local_78;
    lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    lVar2 = lVar2 + 0x28;
    uVar3 = 0x3f800000;
    break;
  case 1:
    local_78 = "type4_skincard_rarity";
    local_50 = &local_78;
    lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3e60(lVar2 + 0x28,"rare");
    local_78 = "type4_skincard_essence";
    local_50 = &local_78;
    lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    lVar2 = lVar2 + 0x28;
    uVar3 = 0x40c00000;
    break;
  case 2:
    local_78 = "type4_skincard_rarity";
    local_50 = &local_78;
    lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3e60(lVar2 + 0x28,"epic");
    local_78 = "type4_skincard_essence";
    local_50 = &local_78;
    lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    lVar2 = lVar2 + 0x28;
    uVar3 = 0x41f00000;
    break;
  case 3:
    local_78 = "type4_skincard_rarity";
    local_50 = &local_78;
    lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3e60(lVar2 + 0x28,"legendary");
    local_78 = "type4_skincard_essence";
    local_50 = &local_78;
    lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    uVar3 = 0x42f00000;
    lVar2 = lVar2 + 0x28;
    break;
  default:
    goto switchD_00902efc_default;
  }
  FUN_00ec3ef0(uVar3,lVar2);
switchD_00902efc_default:
  local_78 = "type5_skincard_name";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_2);
  FUN_00ec506c(PTR_s_Economy_Tap_Card_02be3058,&puStack_70);
  FUN_00ec5024(PTR_s_Economy_Tap_Card_02be3058,&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

