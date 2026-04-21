// functions/1004a — 300 functions
#include "GameKindred.h"




void FUN_1004a0004(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001004a000c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(param_2);
  return;
}




undefined8 * FUN_1004a0010(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  lVar2 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    lVar2 = param_1 + lVar2 * 0x20;
    if (*(long *)(lVar2 + 8) == 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x10);
      *puVar3 = &PTR_FUN_10149dbf0;
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(undefined4 *)(lVar2 + 0x20) = 0;
      *(long *)(lVar2 + 8) = (long)puVar3;
      return puVar3;
    }
    lVar2 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_1004a0074(void)

{
  return;
}




bool FUN_1004a007c(long param_1,undefined8 *param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = FUN_1004743d4(*param_2);
  bVar1 = false;
  if (lVar3 != 0) {
    uVar2 = FUN_10048c910(lVar3,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    bVar1 = *(byte *)(param_1 + 0x14) != uVar2;
  }
  return bVar1;
}




undefined8 * FUN_1004a00bc(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  lVar2 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    lVar2 = param_1 + lVar2 * 0x20;
    if (*(long *)(lVar2 + 8) == 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x10);
      *puVar3 = &PTR_FUN_10149ad08;
      *(undefined8 *)(lVar2 + 0x18) = 0xffffffff00000000;
      *(undefined4 *)(lVar2 + 0x20) = 0;
      *(long *)(lVar2 + 8) = (long)puVar3;
      return puVar3;
    }
    lVar2 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_1004a0128(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033e25c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1004a0178(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033e454();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




undefined8 * FUN_1004a01c8(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  lVar2 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    lVar2 = param_1 + lVar2 * 0x20;
    if (*(long *)(lVar2 + 8) == 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x10);
      *puVar3 = &PTR_FUN_10149dc18;
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(long *)(lVar2 + 8) = (long)puVar3;
      return puVar3;
    }
    lVar2 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_1004a0228(void)

{
  return;
}




void FUN_1004a0230(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_1004743d4(*param_2);
  if (lVar1 != 0) {
    FUN_10048c6cc(lVar1,param_1 + 8,*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}




void FUN_1004a026c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033e070();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1004a02bc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033e3a8();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1004a030c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033dfc8();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1004a035c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033e304();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




ulong FUN_1004a03ac(uint *param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  uint *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  long lVar5;
  
  uVar2 = (ulong)param_1[2];
  switch(uVar2) {
  case 0:
    break;
  case 1:
    uVar2 = (ulong)*param_1;
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x0001004a0404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)();
    return uVar2;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    lVar5 = *param_2;
    param_2 = *(long **)(*(long *)(lVar5 + 0x10) + 0x10);
    if ((int)param_2[0x4c] != *(int *)(lVar5 + 0x308)) {
      param_2 = (long *)FUN_100345d90();
    }
    goto LAB_1004a0448;
  case 4:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
LAB_1004a0448:
                    /* WARNING: Could not recover jumptable at 0x0001004a0458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(param_2);
    return uVar2;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x0001004a0488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)(param_2,param_3);
    return uVar2;
  case 6:
    lVar5 = *param_2;
    uVar4 = *(undefined8 *)param_1;
    uVar1 = FUN_1004d2524(uVar4);
    uVar4 = FUN_100015208(uVar4,uVar1,0x12345678);
    puVar3 = (uint *)(**(code **)(*(long *)(lVar5 + 0x168) + 0x18))(lVar5 + 0x168,uVar4);
    uVar2 = (ulong)*puVar3;
    break;
  default:
    FUN_1004d22dc(0);
    uVar2 = 0;
  }
  return uVar2;
}




uint * FUN_1004a04e0(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 4) = param_1[10];
        param_1[10] = uVar1;
        uVar4 = *param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




void FUN_1004a0564(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_1004a05c8(param_1 + 0x18,auStack_28);
    uVar1 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar1 * 4);
  }
  *(undefined4 *)(lVar2 + uVar1 * 4) = *param_2;
  return;
}




void FUN_1004a05c8(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1004a0648(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_1004a0648(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1004a06c4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




uint * FUN_1004a0740(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
        param_1[10] = uVar1;
        uVar4 = *param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




long * FUN_1004a07c8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1 + -8;
  if (*param_1 != 0 && lVar1 != 0) {
    do {
      lVar2 = *(long *)(lVar1 + 8);
      FUN_10033d884();
      lVar1 = 0;
      if (lVar2 != 0) {
        lVar1 = lVar2 + -8;
      }
    } while (lVar1 != 0);
  }
  return param_1;
}




void FUN_1004a081c(void)

{
  DAT_101d392a0 = PTR_s_Buff_Talent_BonusMovementSpeed_10185bcd8;
  DAT_101d392a8 = FUN_1003e5314;
  DAT_101d392b0 = PTR_s_Buff_Talent_BonusAttackRange_10185bce0;
  DAT_101d392b8 = FUN_1003e5358;
  DAT_101d392c0 = PTR_s_Buff_Talent_BonusDefense_10185bce8;
  DAT_101d392c8 = FUN_1003e5398;
  DAT_101d392d0 = PTR_s_Buff_Talent_BonusCooldown_10185bcf0;
  DAT_101d392d8 = FUN_1003e53f8;
  DAT_101d392e0 = PTR_s_Buff_Talent_BonusAttackSpeed_10185bcf8;
  DAT_101d392e8 = FUN_1003e5438;
  DAT_101d392f0 = PTR_s_Buff_Talent_BonusDamageAttackSpe_10185bd00;
  DAT_101d392f8 = FUN_1003e5478;
  DAT_101d39300 = PTR_s_Buff_Talent_BonusWeapon_10185bd08;
  DAT_101d39308 = FUN_1003e54d8;
  DAT_101d39310 = PTR_s_Buff_Talent_BonusCrystal_10185bd10;
  DAT_101d39318 = FUN_1003e5518;
  DAT_101d39320 = PTR_s_Buff_Talent_BonusCrystalPierce_10185bd18;
  DAT_101d39328 = FUN_1003e5558;
  DAT_101d39330 = PTR_s_Buff_Talent_BonusWeaponPierce_10185bd20;
  DAT_101d39338 = FUN_1003e5598;
  DAT_101d39340 = PTR_s_Buff_Talent_BonusCrystalPierce_10185bd18;
  DAT_101d39348 = FUN_1003e5558;
  DAT_101d39350 = PTR_s_Buff_Talent_BonusWeaponPierce_10185bd20;
  DAT_101d39358 = FUN_1003e5598;
  DAT_101d39360 = PTR_s_Buff_Talent_BonusCritChance_10185bd28;
  DAT_101d39368 = FUN_1003e55d8;
  DAT_101d39370 = PTR_s_Buff_Talent_BonusCritDamage_10185bd30;
  DAT_101d39378 = FUN_1003e5618;
  DAT_101d39380 = PTR_s_Buff_Talent_BonusCritChanceDamag_10185bd38;
  DAT_101d39388 = FUN_1003e5658;
  DAT_101d39390 = PTR_s_Buff_Talent_BonusWeaponVamp_10185bd40;
  DAT_101d39398 = FUN_1003e54d8;
  DAT_101d393a0 = PTR_s_Buff_Talent_BonusCrystalVamp_10185bd48;
  DAT_101d393a8 = FUN_1003e5518;
  DAT_101d393b0 = PTR_s_Buff_Talent_BonusRegen_10185bd50;
  DAT_101d393b8 = FUN_1003e56bc;
  DAT_101d393c0 = PTR_s_Buff_Talent_BonusAttackSpeedCool_10185bd58;
  DAT_101d393c8 = FUN_1003e56f8;
  DAT_101d393d0 = PTR_s_Buff_AttachCamera_10185bd60;
  DAT_101d393d8 = FUN_1003e5758;
  DAT_101d393e0 = PTR_s_Buff_Stunned_10185a208;
  DAT_101d393e8 = FUN_1003e5888;
  DAT_101d393f0 = PTR_s_Buff_DelayedStun_10185bd68;
  DAT_101d393f8 = FUN_1003e5964;
  DAT_101d39400 = PTR_s_Buff_DelayedKill_10185bd70;
  DAT_101d39408 = FUN_1003e59f0;
  DAT_101d39410 = PTR_s_Buff_DelayedDestroy_10185bd78;
  DAT_101d39418 = FUN_1003e5a88;
  DAT_101d39420 = PTR_s_Buff_BlockDebuffs_10185a528;
  DAT_101d39428 = FUN_1003e5b20;
  DAT_101d39430 = PTR_s_Buff_DashInterrupted_10185bd80;
  DAT_101d39438 = FUN_1003e5b78;
  DAT_101d39440 = PTR_s_Buff_Dodge_10185b120;
  DAT_101d39448 = FUN_1003e5bf4;
  DAT_101d39450 = PTR_s_Buff_FlatSpeedBoost_10185bd88;
  DAT_101d39458 = FUN_1003e5c80;
  DAT_101d39460 = PTR_s_Buff_Withdraw_10185a458;
  DAT_101d39468 = FUN_1003e5cd0;
  DAT_101d39470 = PTR_s_Buff_Withdraw_Ping_10185bd90;
  DAT_101d39478 = FUN_1003e5cd8;
  DAT_101d39480 = DAT_10185a468;
  DAT_101d39488 = FUN_1003e5cdc;
  DAT_101d39490 = PTR_s_Buff_Ace_10185bd98;
  DAT_101d39498 = FUN_1003e5de4;
  DAT_101d394a0 = PTR_s_Buff_ItemSilence_10185a5a8;
  DAT_101d394a8 = FUN_1003e5f9c;
  DAT_101d394b0 = PTR_s_Buff_Silence_10185a560;
  DAT_101d394b8 = FUN_1003e5fec;
  DAT_101d394c0 = PTR_s_Buff_LockActor_10185bda0;
  DAT_101d394c8 = FUN_1003e6004;
  DAT_101d394d0 = PTR_s_Buff_DisplacementLock_10185a678;
  DAT_101d394d8 = FUN_1003e6050;
  DAT_101d394e0 = PTR_s_Buff_Invulnerable_10185a588;
  DAT_101d394e8 = FUN_1003e60bc;
  DAT_101d394f0 = PTR_s_Buff_Untargetable_10185bda8;
  DAT_101d394f8 = FUN_1003e6114;
  DAT_101d39500 = PTR_s_Buff_Slow_10185a5a0;
  DAT_101d39508 = FUN_1003e6148;
  DAT_101d39510 = PTR_s_Buff_Fear_10185a5b8;
  DAT_101d39518 = FUN_1003e6178;
  DAT_101d39520 = PTR_s_Buff_FearDirection_10185bdb0;
  DAT_101d39528 = FUN_1003e6378;
  DAT_101d39530 = PTR_s_Buff_Emote_Dance_10185a570;
  DAT_101d39538 = FUN_1003e64cc;
  DAT_101d39540 = PTR_s_Buff_Emote_Taunt_10185a578;
  DAT_101d39548 = FUN_1003e658c;
  DAT_101d39550 = PTR_s_Buff_Emote_Taunt_VO_Cooldown_10185bdb8;
  DAT_101d39558 = FUN_1003e6704;
  DAT_101d39560 = PTR_s_Buff_Stasis_10185a590;
  DAT_101d39568 = FUN_1003e6708;
  DAT_101d39570 = PTR_s_Buff_AmbientGold_Payout_10185bdc0;
  DAT_101d39578 = FUN_1003e6880;
  DAT_101d39580 = PTR_s_Buff_AmbientGold_Stacks_10185bdc8;
  DAT_101d39588 = FUN_1003e68d8;
  DAT_101d39590 = PTR_s_Buff_Taunt_10185a978;
  DAT_101d39598 = FUN_1003e68dc;
  DAT_101d395a0 = PTR_s_Buff_TalentSuiteStandard_10185bdd0;
  DAT_101d395a8 = thunk_FUN_1004362bc;
  DAT_101d395b0 = PTR_s_Buff_TalentSuiteStrong_10185a510;
  DAT_101d395b8 = thunk_FUN_1004362bc;
  DAT_101d395c0 = PTR_s_Buff_HealPercentUsingBuffVar_10185bdd8;
  DAT_101d395c8 = FUN_1003e69f4;
  DAT_101d395d0 = PTR_s_Buff_SelfProjectile_10185a530;
  DAT_101d395d8 = FUN_1003e6aa8;
  DAT_101d395e0 = PTR_s_Buff_SlowUsingBuffVar_10185bde0;
  DAT_101d395e8 = FUN_1003e6afc;
  DAT_101d395f0 = PTR_s_Buff_SlowDecayingUsingBuffVar_10185a460;
  DAT_101d395f8 = FUN_1003e6b3c;
  DAT_101d39600 = PTR_s_Buff_SpeedDecayingUsingBuffVar_10185a9f8;
  DAT_101d39608 = FUN_1003e6b78;
  DAT_101d39610 = PTR_s_Buff_Cleanse_10185bde8;
  DAT_101d39618 = FUN_1003e6bb4;
  DAT_101d39620 = PTR_s_Buff_LockedFromMissing_10185bdf0;
  DAT_101d39628 = FUN_1003e6c68;
  DAT_101d39630 = PTR_s_Buff_Shell_10185bdf8;
  DAT_101d39638 = FUN_1003e6cd0;
  DAT_101d39640 = PTR_s_Buff_Generic_WarningRingUsingBuf_10185be00;
  DAT_101d39648 = FUN_1003e6e48;
  DAT_101d39650 = PTR_s_Buff_RiverHero_10185be08;
  DAT_101d39658 = FUN_1003e6f34;
  DAT_101d39660 = PTR_s_Buff_Stealth_10185aba0;
  DAT_101d39668 = FUN_1003e6f38;
  DAT_101d39670 = PTR_s_Buff_Revealed_10185a448;
  DAT_101d39678 = FUN_1003e6f50;
  DAT_101d39680 = PTR_s_Buff_RevealToBestowersTeam_10185be10;
  DAT_101d39688 = FUN_1003e6f98;
  DAT_101d39690 = PTR_s_Buff_RevealToBestowersTeamTrueSi_10185b3a0;
  DAT_101d39698 = FUN_1003e7000;
  DAT_101d396a0 = PTR_s_Buff_RevealToBestowersEnemiesTea_10185be18;
  DAT_101d396a8 = FUN_1003e7068;
  DAT_101d396b0 = PTR_s_Buff_RevealedThroughBrushAndWall_10185be20;
  DAT_101d396b8 = FUN_1003e70d4;
  DAT_101d396c0 = PTR_s_Buff_GloballyVisible_10185a1f0;
  DAT_101d396c8 = FUN_1003e711c;
  DAT_101d396d0 = PTR_s_Buff_GloballyVisibleTrueSight_10185a878;
  DAT_101d396d8 = FUN_1003e7164;
  DAT_101d396e0 = PTR_s_Buff_GloballyVisibleTrueSight_5v_10185a4a8;
  DAT_101d396e8 = FUN_1003e71ac;
  DAT_101d396f0 = PTR_s_Buff_ShowGloballyVisible_10185a880;
  DAT_101d396f8 = FUN_1003e71f4;
  DAT_101d39700 = PTR_s_Buff_TrueSight_10185be28;
  DAT_101d39708 = FUN_1003e7250;
  DAT_101d39710 = PTR_s_Buff_UnobstructedVision_10185be30;
  DAT_101d39718 = FUN_1003e7268;
  DAT_101d39720 = PTR_s_Buff_Blind_10185a5b0;
  DAT_101d39728 = FUN_1003e7350;
  DAT_101d39730 = PTR_s_Buff_Debug_Camera_10185a580;
  DAT_101d39738 = FUN_1003e73e4;
  DAT_101d39740 = PTR_s_Buff_Debug_CrowdControl_10185a598;
  DAT_101d39748 = FUN_1003e743c;
  DAT_101d39750 = PTR_s_Buff_Debug_TakeNonLethalDamage_10185be38;
  DAT_101d39758 = FUN_1003e746c;
  DAT_101d39760 = PTR_s_Buff_Debug_PrintfOnInterval_10185be40;
  DAT_101d39768 = FUN_1003e74d4;
  DAT_101d39770 = PTR_s_Buff_Debug_Untargetable_10185be48;
  DAT_101d39778 = FUN_1003e753c;
  DAT_101d39780 = PTR_s_Buff_Debug_FortifiedHealth_10185a5c8;
  DAT_101d39788 = FUN_1003e7554;
  DAT_101d39790 = DAT_10185a5d0;
  DAT_101d39798 = FUN_1003e758c;
  DAT_101d397a0 = PTR_s_Buff_Debug_NoCooldowns_10185be50;
  DAT_101d397a8 = FUN_1003e75b8;
  DAT_101d397b0 = PTR_s_Buff_Debug_InfiniteVisionRange_10185be58;
  DAT_101d397b8 = FUN_1003e761c;
  DAT_101d397c0 = PTR_s_Buff_Debug_WussyKraken_10185be60;
  DAT_101d397c8 = FUN_1003e7668;
  DAT_101d397d0 = PTR_s_Buff_Debug_MightyKraken_10185be68;
  DAT_101d397d8 = FUN_1003e76b8;
  DAT_101d397e0 = PTR_s_Buff_Debug_VisualChaos_10185be70;
  DAT_101d397e8 = FUN_1003e77a4;
  DAT_101d397f0 = PTR_s_Buff_Debug_VisualChaosVainCrysta_10185be78;
  DAT_101d397f8 = FUN_1003e7918;
  DAT_101d39800 = PTR_s_Buff_Debug_VisualChaosKraken_10185be80;
  DAT_101d39808 = FUN_1003e7a78;
  DAT_101d39810 = PTR_s_Buff_Debug_DisableAndKillOnEnd_10185be88;
  DAT_101d39818 = FUN_1003e7a90;
  DAT_101d39820 = "Buff_Demo_KillOnEnd";
  DAT_101d39828 = FUN_1003e7ab4;
  DAT_101d39830 = "Buff_Demo_Glaive_Dance";
  DAT_101d39838 = FUN_1003e7b14;
  DAT_101d39840 = PTR_s_Buff_TutorialDirectionIndicator_10185be90;
  DAT_101d39848 = FUN_1003e7b80;
  DAT_101d39850 = PTR_s_Buff_TutorialDirectionIndicator2_10185be98;
  DAT_101d39858 = FUN_1003e7bd0;
  DAT_101d39860 = PTR_s_Buff_TutorialOnly_InvulnerableTo_10185bea0;
  DAT_101d39868 = FUN_1003e7c20;
  DAT_101d39870 = PTR_s_Buff_Tutorial_RecallUncancellabl_10185bea8;
  DAT_101d39878 = FUN_1003e7c88;
  DAT_101d39880 = PTR_s_Buff_Tutorial_Statue_10185beb0;
  DAT_101d39888 = FUN_1003e7c8c;
  DAT_101d39890 = PTR_s_Buff_Tutorial_Locked_10185beb8;
  DAT_101d39898 = FUN_1003e7cb0;
  DAT_101d398a0 = PTR_s_Buff_Tutorial_Rooted_10185bec0;
  DAT_101d398a8 = FUN_1003e7ce8;
  DAT_101d398b0 = PTR_s_Buff_Tutorial_CantAttack_10185bec8;
  DAT_101d398b8 = FUN_1003e7cf8;
  DAT_101d398c0 = PTR_s_Buff_Tutorial_CantUseAbilities_10185bed0;
  DAT_101d398c8 = FUN_1003e7d08;
  DAT_101d398d0 = PTR_s_Buff_Tutorial_NoCooldown_10185bed8;
  DAT_101d398d8 = FUN_1003e7d18;
  DAT_101d398e0 = PTR_s_Buff_Tutorial_PlayerDamageScalin_10185bee0;
  DAT_101d398e8 = FUN_1003e7dbc;
  DAT_101d398f0 = PTR_s_Buff_Tutorial1_RangedMinion_10185bee8;
  DAT_101d398f8 = FUN_1003e7eb8;
  DAT_101d39900 = PTR_s_Buff_Tutorial1_TankMinion_10185bef0;
  DAT_101d39908 = FUN_1003e7f50;
  DAT_101d39910 = PTR_s_Buff_Tutorial1_JungleMinion_10185bef8;
  DAT_101d39918 = FUN_1003e7fc4;
  DAT_101d39920 = PTR_s_Buff_Tutorial1_SuppressFindTarge_10185bf00;
  DAT_101d39928 = FUN_1003e809c;
  DAT_101d39930 = PTR_s_Buff_Tutorial1_PlayerStatTweaks_10185bf08;
  DAT_101d39938 = FUN_1003e818c;
  DAT_101d39940 = PTR_s_Buff_Tutorial1_Disappear_10185bf10;
  DAT_101d39948 = FUN_1003e8274;
  DAT_101d39950 = PTR_s_Buff_Tutorial1_KillThisOneFirst_10185bf18;
  DAT_101d39958 = FUN_1003e830c;
  DAT_101d39960 = PTR_s_Buff_Tutorial1_KillThisOneSecond_10185bf20;
  DAT_101d39968 = FUN_1003e8344;
  DAT_101d39970 = PTR_s_Buff_Tutorial2_YouAreAwesome_10185bf28;
  DAT_101d39978 = FUN_1003e8368;
  DAT_101d39980 = PTR_s_Buff_Tutorial2_AllyBots_10185bf30;
  DAT_101d39988 = FUN_1003e8404;
  DAT_101d39990 = PTR_s_Buff_Tutorial2_Turret_Stats_10185bf38;
  DAT_101d39998 = FUN_1003e84c0;
  DAT_101d399a0 = PTR_s_Buff_Tutorial3_5v5_Turret_Stats_10185bf40;
  DAT_101d399a8 = FUN_1003e850c;
  DAT_101d399b0 = PTR_s_Buff_Tutorial3and5_5v5_VainCryst_10185bf48;
  DAT_101d399b8 = FUN_1003e85f4;
  DAT_101d399c0 = PTR_s_Buff_Tutorial5_5v5_Turret_Stats_10185bf50;
  DAT_101d399c8 = FUN_1003e8644;
  DAT_101d399d0 = PTR_s_Buff_PlayerPerk_Tutorial_NeverDi_10185bf58;
  DAT_101d399d8 = FUN_1003e86fc;
  DAT_101d399e0 = PTR_s_Buff_Tutorial05_GloballyVisible_10185bf60;
  DAT_101d399e8 = FUN_1003e87a8;
  DAT_101d399f0 = PTR_s_Buff_Tutorial1_Joystick_Catherin_10185bf68;
  DAT_101d399f8 = FUN_1003e87f0;
  DAT_101d39a00 = PTR_s_Buff_Tutorial2_Joystick_PlayerSt_10185bf70;
  DAT_101d39a08 = FUN_1003e8948;
  DAT_101d39a10 = PTR_s_Buff_Bots_DifficultyScalingBuff_10185bf78;
  DAT_101d39a18 = FUN_1003e89b0;
  DAT_101d39a20 = PTR_s_Buff_ARAL_OnSpawnPlatform_10185bf80;
  DAT_101d39a28 = FUN_1003e8aac;
  DAT_101d39a30 = PTR_s_Buff_ARAL_Hero_Stats_10185bf88;
  DAT_101d39a38 = FUN_1003e8b60;
  DAT_101d39a40 = PTR_s_Buff_ARAL_Hero_Regen_10185bf90;
  DAT_101d39a48 = FUN_1003e8bec;
  DAT_101d39a50 = PTR_s_Buff_ARAL_Minions_Stats_10185bf98;
  DAT_101d39a58 = FUN_1003e8d18;
  DAT_101d39a60 = PTR_s_Buff_ARAL_Turret_Stats_10185bfa0;
  DAT_101d39a68 = FUN_1003e8e10;
  DAT_101d39a70 = PTR_s_Buff_ARAM_Minions_Stats_10185bfa8;
  DAT_101d39a78 = FUN_1003e8e84;
  DAT_101d39a80 = PTR_s_Buff_ARAM_Turret_Stats_10185bfb0;
  DAT_101d39a88 = FUN_1003e8ed0;
  DAT_101d3a650 = PTR_s_Buff_Item_Bonesaw_Pen_10185c490;
  DAT_101d3a658 = FUN_1003f3b00;
  DAT_101d3a640 = PTR_s_Buff_Item_TensionBow_Pen_10185c488;
  DAT_101d3a648 = FUN_1003f3ab0;
  DAT_101d3a630 = PTR_s_Buff_Item_PiercingSpear_Pen_10185c480;
  DAT_101d3a638 = FUN_1003f3a60;
  DAT_101d3a620 = PTR_s_Buff_Item_UnifiedVamp_Control_10185c478;
  DAT_101d3a628 = FUN_1003f3a1c;
  DAT_101d3a610 = PTR_s_Buff_Item_High_Vamp_10185c470;
  DAT_101d3a618 = FUN_1003f3a18;
  DAT_101d3a600 = PTR_s_Buff_Item_Mid_Vamp_10185c468;
  DAT_101d3a608 = FUN_1003f3a14;
  DAT_101d3a5f0 = PTR_s_Buff_Item_Low_Vamp_10185c460;
  DAT_101d3a5f8 = FUN_1003f3a10;
  DAT_101d3a5e0 = PTR_s_Buff_Item_BookOfEulogies_Control_10185c458;
  DAT_101d3a5e8 = FUN_1003f3948;
  DAT_101d3a5d0 = PTR_s_Buff_Item_Spellfire_Damage_10185c450;
  DAT_101d3a5d8 = FUN_1003f3850;
  DAT_101d3a5c0 = PTR_s_Buff_Item_Spellfire_Control_10185c448;
  DAT_101d3a5c8 = FUN_1003f3778;
  DAT_101d3a5b0 = PTR_s_Buff_Item_Frostburn_Slow_10185c440;
  DAT_101d3a5b8 = FUN_1003f3700;
  DAT_101d3a5a0 = PTR_s_Buff_Item_Frostburn_Control_10185c438;
  DAT_101d3a5a8 = FUN_1003f3664;
  DAT_101d3a590 = PTR_s_Buff_Item_BrokenMyth_Pen_10185c430;
  DAT_101d3a598 = FUN_1003f3614;
  DAT_101d3a580 = PTR_s_Buff_Item_PiercingShard_Pen_10185c428;
  DAT_101d3a588 = FUN_1003f35c4;
  DAT_101d3a570 = PTR_s_Buff_Item_HealingFlask_10185aaf8;
  DAT_101d3a578 = FUN_1003f33d8;
  DAT_101d3a560 = PTR_s_Buff_Item_Spellsword_RechargeOnN_10185c420;
  DAT_101d3a568 = FUN_1003f3320;
  DAT_101d3a550 = PTR_s_Buff_Item_Spellsword_Recharge_10185c418;
  DAT_101d3a558 = FUN_1003f327c;
  DAT_101d3a540 = PTR_s_Buff_Item_Spellsword_Control_10185c410;
  DAT_101d3a548 = FUN_1003f3214;
  DAT_101d3a530 = PTR_s_Buff_Item_SlumberingHuskFortifie_10185c408;
  DAT_101d3a538 = FUN_1003f31b8;
  DAT_101d3a520 = PTR_s_Buff_Item_SlumberingHuskControl_10185c400;
  DAT_101d3a528 = FUN_1003f2fb8;
  DAT_101d3a510 = PTR_s_Buff_Item_EMP_ItemSilence_10185c3f8;
  DAT_101d3a518 = FUN_1003f2f38;
  DAT_101d3a500 = PTR_s_Buff_Item_EMP_Countdown_10185c3f0;
  DAT_101d3a508 = FUN_1003f2e2c;
  DAT_101d3a4f0 = PTR_s_Buff_Item_PoisonedShiv_Payload_10185c3e8;
  DAT_101d3a4f8 = FUN_1003f2e28;
  DAT_101d3a4e0 = PTR_s_Buff_Item_PoisonedShiv_10185c3e0;
  DAT_101d3a4e8 = FUN_1003f2d88;
  DAT_101d3a4d0 = PTR_s_Buff_Item_Travel_10185c3d8;
  DAT_101d3a4d8 = FUN_1003f2b8c;
  DAT_101d3a4c0 = PTR_s_Buff_Item_BreakingPoint_10185c3d0;
  DAT_101d3a4c8 = FUN_1003f29b4;
  DAT_101d3a4b0 = PTR_s_Buff_Item_BreakingPoint_Control_10185c3c8;
  DAT_101d3a4b8 = FUN_1003f2918;
  DAT_101d3a4a0 = PTR_s_Buff_Item_HitByScoutTrap_10185ab98;
  DAT_101d3a4a8 = FUN_1003f28ec;
  DAT_101d3a490 = PTR_s_Buff_Item_ShowTensionBowHitEffec_10185c3c0;
  DAT_101d3a498 = FUN_1003f289c;
  DAT_101d3a480 = PTR_s_Buff_Item_TensionBow_10185c3b8;
  DAT_101d3a488 = FUN_1003f26dc;
  DAT_101d3a470 = PTR_s_Buff_Item_BonesawDebuff_10185c3b0;
  DAT_101d3a478 = FUN_1003f25ec;
  DAT_101d3a460 = PTR_s_Buff_Item_Aftershock_attackBuff_10185c3a8;
  DAT_101d3a468 = FUN_1003f23dc;
  DAT_101d3a450 = PTR_s_Buff_Item_Aftershock_10185c3a0;
  DAT_101d3a458 = FUN_1003f2358;
  DAT_101d3a440 = PTR_s_Buff_Item_Bonesaw_10185c398;
  DAT_101d3a448 = FUN_1003f22f0;
  DAT_101d3a430 = PTR_s_Buff_Item_ShiversteelRangedSlow_10185c390;
  DAT_101d3a438 = FUN_1003f2264;
  DAT_101d3a420 = PTR_s_Buff_Item_ShiversteelMeleeSlow_10185c388;
  DAT_101d3a428 = FUN_1003f21f0;
  DAT_101d3a410 = PTR_s_Buff_Item_Shiversteel_10185abd0;
  DAT_101d3a418 = FUN_1003f20ac;
  DAT_101d3a400 = PTR_s_Buff_Item_MinionCandy_10185ab48;
  DAT_101d3a408 = FUN_1003f1e74;
  DAT_101d3a3f0 = PTR_s_Buff_Item_EveOfHarvest_Control_10185c380;
  DAT_101d3a3f8 = FUN_1003f1d78;
  DAT_101d3a3e0 = PTR_s_Buff_Item_EveOfHarvest_10185c378;
  DAT_101d3a3e8 = FUN_1003f1cac;
  DAT_101d3a3d0 = PTR_s_Buff_Item_SerpentMask_Control_10185c370;
  DAT_101d3a3d8 = FUN_1003f1bb0;
  DAT_101d3a3c0 = PTR_s_Buff_Item_SerpentMask_10185c368;
  DAT_101d3a3c8 = FUN_1003f1ae4;
  DAT_101d39bc0 = PTR_s_Buff_Blitz_Turrets_Stats_10185c050;
  DAT_101d39bc8 = FUN_1003ea4a4;
  DAT_101d39bb0 = PTR_s_Buff_Blitz_Monsters_Stats_10185c048;
  DAT_101d39bb8 = FUN_1003ea31c;
  DAT_101d39ba0 = PTR_s_Buff_Blitz_Minions_Stats_10185c040;
  DAT_101d39ba8 = FUN_1003ea23c;
  DAT_101d39b90 = PTR_s_Buff_Blitz_SentryDefense_Cooldow_10185c038;
  DAT_101d39b98 = FUN_1003ea238;
  DAT_101d39b80 = PTR_s_Buff_Blitz_SentryDefense_10185c030;
  DAT_101d39b88 = FUN_1003ea02c;
  DAT_101d39b70 = PTR_s_Buff_Blitz_Revamp_HealthDecay_10185c028;
  DAT_101d39b78 = FUN_1003e9d48;
  DAT_101d39b60 = PTR_s_Buff_Blitz_Revamp_HealthDecayCon_10185c020;
  DAT_101d39b68 = FUN_1003e9cd4;
  DAT_101d39b50 = PTR_s_Buff_Blitz_Revamp_HeroEngage_10185c018;
  DAT_101d39b58 = FUN_1003e9cbc;
  DAT_101d39b40 = PTR_s_Buff_Blitz_Revamp_RegenCooldown_10185c010;
  DAT_101d39b48 = FUN_1003e9c54;
  DAT_101d39b30 = PTR_s_Buff_Blitz_Revamp_OtherPerksCont_10185c008;
  DAT_101d39b38 = FUN_1003e98cc;
  DAT_101d39b20 = PTR_s_Buff_Blitz_Revamp_EnemyHeroHitMe_10185c000;
  DAT_101d39b28 = FUN_1003e984c;
  DAT_101d39b10 = PTR_s_Buff_Blitz_Revamp_HitEnemyHero_10185bff8;
  DAT_101d39b18 = FUN_1003e97cc;
  DAT_101d39b00 = PTR_s_Buff_Blitz_Revamp_RegenControl_10185bff0;
  DAT_101d39b08 = FUN_1003e9618;
  DAT_101d39af0 = PTR_s_Buff_Blitz_Revamp_Regeneration_10185bfe8;
  DAT_101d39af8 = FUN_1003e94c8;
  DAT_101d39ae0 = PTR_s_Buff_Blitz_Revamp_SpawnSpeedBoos_10185bfe0;
  DAT_101d39ae8 = FUN_1003e9454;
  DAT_101d39ad0 = PTR_s_Buff_Blitz_Regeneration_10185bfd8;
  DAT_101d39ad8 = FUN_1003e93d0;
  DAT_101d39ac0 = PTR_s_Buff_Kraken_RumbleEnrage_10185bfd0;
  DAT_101d39ac8 = FUN_1003e92fc;
  DAT_101d39ab0 = PTR_s_Buff_Kraken_StatChanges_10185bfc8;
  DAT_101d39ab8 = FUN_1003e921c;
  DAT_101d39aa0 = PTR_s_Buff_ARAM_BountyMultiplier_10185bfc0;
  DAT_101d39aa8 = FUN_1003e91d0;
  DAT_101d39a90 = PTR_s_Buff_ARAM_AscendedPower_10185bfb8;
  DAT_101d39a98 = FUN_1003e8f1c;
  DAT_101d39bd0 = PTR_s_Buff_Blitz_Revamp_Minions_Stats_10185c058;
  DAT_101d39bd8 = FUN_1003ea4a8;
  DAT_101d39be0 = PTR_s_Buff_Blitz_Revamp_Monsters_Stats_10185c060;
  DAT_101d39be8 = FUN_1003ea5c4;
  DAT_101d39bf0 = PTR_s_Buff_Blitz_Revamp_Turrets_Stats_10185c068;
  DAT_101d39bf8 = FUN_1003ea7a8;
  DAT_101d39c00 = PTR_s_Buff_Blitz_GloballyVisible_10185c070;
  DAT_101d39c08 = FUN_1003ea868;
  DAT_101d39c10 = PTR_s_Buff_Blitz_BlackfeatherBalance_10185c078;
  DAT_101d39c18 = FUN_1003ea8b0;
  DAT_101d39c20 = PTR_s_Buff_Blitz_KestrelBalance_10185c080;
  DAT_101d39c28 = FUN_1003ea928;
  DAT_101d39c30 = PTR_s_Buff_Blitz_KrulBalance_10185c088;
  DAT_101d39c38 = FUN_1003ea984;
  DAT_101d39c40 = PTR_s_Buff_Blitz_SkaarfBalance_10185c090;
  DAT_101d39c48 = FUN_1003ea9fc;
  DAT_101d39c50 = PTR_s_Buff_Blitz_TakaBalance_10185c098;
  DAT_101d39c58 = FUN_1003eaa74;
  DAT_101d39c60 = PTR_s_Buff_GameModes_Standard5v5_HeroT_10185c0a0;
  DAT_101d39c68 = FUN_1003eaad0;
  DAT_101d39c70 = PTR_s_Buff_GameModes_Standard3v3_Scout_10185c0a8;
  DAT_101d39c78 = FUN_1003eab1c;
  DAT_101d39c80 = PTR_s_Buff_GameObjectives_River5v5Aura_10185c0b0;
  DAT_101d39c88 = FUN_1003eac08;
  DAT_101d39c90 = PTR_s_Buff_GameObjectives_River5v5Aura_10185c0b8;
  DAT_101d39c98 = FUN_1003eac50;
  DAT_101d39ca0 = PTR_s_Buff_GameObjectives_River5v5Bonu_10185c0c0;
  DAT_101d39ca8 = FUN_1003eacc4;
  DAT_101d39cb0 = PTR_s_Buff_GameObjectives_NodeCurrentl_10185c0c8;
  DAT_101d39cb8 = FUN_1003ead6c;
  DAT_101d39cc0 = PTR_s_Buff_Horde_WaveSetStrength_10185c0d0;
  DAT_101d39cc8 = FUN_1003eae54;
  DAT_101d39cd0 = PTR_s_Buff_Horde_WitchDoctorHeal_10185c0d8;
  DAT_101d39cd8 = FUN_1003eaf0c;
  DAT_101d39ce0 = PTR_s_Buff_Horde_ColorAura_Player1_10185c0e0;
  DAT_101d39ce8 = FUN_1003eafdc;
  DAT_101d39cf0 = PTR_s_Buff_Horde_ColorAura_Player2_10185c0e8;
  DAT_101d39cf8 = FUN_1003eb02c;
  DAT_101d39d00 = PTR_s_Buff_Horde_ColorAura_Player3_10185c0f0;
  DAT_101d39d08 = FUN_1003eb07c;
  DAT_101d39d10 = PTR_s_Buff_SpawnStage_Recharge_10185c0f8;
  DAT_101d39d18 = FUN_1003eb0cc;
  DAT_101d39d20 = PTR_s_Buff_SpawnStage_Murder_10185c100;
  DAT_101d39d28 = FUN_1003eb2ac;
  DAT_101d39d30 = PTR_s_Buff_SpawnStage_MidMatch_SpeedBo_10185c108;
  DAT_101d39d38 = FUN_1003eb3c0;
  DAT_101d39d40 = PTR_s_Buff_SpawnStage_MatchStart_Speed_10185c110;
  DAT_101d39d48 = FUN_1003eb444;
  DAT_101d39d50 = PTR_s_Buff_SpawnStage_MatchStart_Shopp_10185c118;
  DAT_101d39d58 = FUN_1003eb47c;
  DAT_101d39d60 = PTR_s_Buff_SpawnStage_RechargeAndAlway_10185c120;
  DAT_101d39d68 = FUN_1003eb590;
  DAT_101d39d70 = PTR_s_Buff_Shop_CanShopIcon_10185c128;
  DAT_101d39d78 = FUN_1003eb778;
  DAT_101d39d80 = PTR_s_Buff_Shop_GrantStoreAccess_10185c130;
  DAT_101d39d88 = FUN_1003eb77c;
  DAT_101d39d90 = PTR_s_Buff_Shop_GrantStoreAccess_Level_10185c138;
  DAT_101d39d98 = FUN_1003eb7d0;
  DAT_101d39da0 = PTR_s_Buff_Shop_GrantStoreAccess_5v5Ba_10185c140;
  DAT_101d39da8 = FUN_1003eb820;
  DAT_101d39db0 = PTR_s_Buff_Shop_AllowStorePurchase_10185c148;
  DAT_101d39db8 = FUN_1003eb870;
  DAT_101d39dc0 = "Buff_Kraken_Jungle_InvulnerableDuringSpawn";
  DAT_101d39dc8 = FUN_1003ebafc;
  DAT_101d39dd0 = PTR_s_Buff_Kraken_ToughSkin_10185c150;
  DAT_101d39dd8 = FUN_1003ebb60;
  DAT_101d39de0 = "Buff_Kraken_LifeTime_Pfx";
  DAT_101d39de8 = FUN_1003ebf54;
  DAT_101d39df0 = PTR_s_Buff_Kraken5v5_AceOnDeath_10185c158;
  DAT_101d39df8 = FUN_1003ebfd0;
  DAT_101d39e00 = PTR_s_Buff_Kraken5v5_Goldshell_10185c160;
  DAT_101d39e08 = FUN_1003ec048;
  DAT_101d39e10 = PTR_s_Buff_Kraken5v5_Ghostwing_Bonus_10185c168;
  DAT_101d39e18 = FUN_1003ec0a0;
  DAT_101d39e20 = PTR_s_Buff_Kraken5v5_Ghostwing_Lockout_10185c170;
  DAT_101d39e28 = FUN_1003ec38c;
  DAT_101d39e30 = PTR_s_Buff_Kraken5v5_Ghostwing_Barrier_10185c178;
  DAT_101d39e38 = FUN_1003ec3e8;
  DAT_101d39e40 = PTR_s_Buff_Kraken5v5_Ghostwing_Regen_10185c180;
  DAT_101d39e48 = FUN_1003ec5ac;
  DAT_101d39e50 = PTR_s_Buff_Kraken5v5_BlackclawUncaptur_10185a4a0;
  DAT_101d39e58 = FUN_1003ec5dc;
  DAT_101d39e60 = PTR_s_Buff_Kraken5v5_CapturedColor_10185c188;
  DAT_101d39e68 = FUN_1003ec630;
  DAT_101d39e70 = PTR_s_Buff_Kraken5v5_UncapturedColor_10185a4b0;
  DAT_101d39e78 = FUN_1003ec754;
  DAT_101d39e80 = PTR_s_Buff_Kraken5v5_BlackclawUncaptur_10185c190;
  DAT_101d39e88 = FUN_1003ec894;
  DAT_101d39e90 = PTR_s_Buff_Kraken5v5_Blackclaw_Defensi_10185c198;
  DAT_101d39e98 = FUN_1003ec9e8;
  DAT_101d39ea0 = PTR_s_Buff_Kraken5v5_Blackclaw_EnrageB_10185c1a0;
  DAT_101d39ea8 = FUN_1003eca9c;
  DAT_101d39eb0 = PTR_s_Buff_JungleMinion_Perk_NWScaling_10185c1a8;
  DAT_101d39eb8 = FUN_1003ecc14;
  DAT_101d39ec0 = PTR_s_Buff_JungleMinion_TreeEnt_Restor_10185c1b0;
  DAT_101d39ec8 = FUN_1003ecc7c;
  DAT_101d39ed0 = PTR_s_Buff_JungleMinion_TreeEnt_Barrie_10185c1b8;
  DAT_101d39ed8 = FUN_1003ecd54;
  DAT_101d39ee0 = PTR_s_Buff_JungleMinion_TreeEnt_Immobi_10185c1c0;
  DAT_101d39ee8 = FUN_1003ecdb4;
  DAT_101d39ef0 = PTR_s_Buff_JungleMinion_TreeEnt_RootFi_10185c1c8;
  DAT_101d39ef8 = FUN_1003ece18;
  DAT_101d39f00 = PTR_s_Buff_JungleMinion_TreeEnt_Cancel_10185c1d0;
  DAT_101d39f08 = FUN_1003ed070;
  DAT_101d39f10 = PTR_s_Buff_JungleMinion_CrystalMiner_C_10185c1d8;
  DAT_101d39f18 = FUN_1003ed0e4;
  DAT_101d39f20 = PTR_s_Buff_JungleMinion_CrystalMiner_D_10185c1e0;
  DAT_101d39f28 = FUN_1003ed394;
  DAT_101d39f30 = PTR_s_Buff_JungleMinion_CrystalMiner_E_10185c1e8;
  DAT_101d39f38 = FUN_1003ed408;
  DAT_101d39f40 = PTR_s_Buff_JungleMinion_LeashRegen_Lar_10185c1f0;
  DAT_101d39f48 = FUN_1003ed5e8;
  DAT_101d39f50 = PTR_s_Buff_JungleMinion_LeashRegen_Sma_10185c1f8;
  DAT_101d39f58 = FUN_1003ed6c0;
  DAT_101d39f60 = PTR_s_Buff_JungleMinion_LevelUp_10185c200;
  DAT_101d39f68 = FUN_1003ed764;
  DAT_101d39f70 = PTR_s_Buff_JungleMinion_5v5_CrystalOrb_10185ac28;
  DAT_101d39f78 = FUN_1003ed7d4;
  DAT_101d39f80 = PTR_s_Buff_JungleMinion_5v5_CrystalOrb_10185c208;
  DAT_101d39f88 = FUN_1003ed9f4;
  DAT_101d39f90 = PTR_s_Buff_JungleMinion_5v5_CrystalOrb_10185c210;
  DAT_101d39f98 = FUN_1003ed9f8;
  DAT_101d39fa0 = PTR_s_Buff_JungleMinion_5v5_WeaponOrb_10185ac30;
  DAT_101d39fa8 = FUN_1003edaa8;
  DAT_101d39fb0 = PTR_s_Buff_JungleMinion_5v5_WeaponOrb__10185c218;
  DAT_101d39fb8 = FUN_1003edd2c;
  DAT_101d39fc0 = PTR_s_Buff_Minion_ArmoryVictoryAura_10185c220;
  DAT_101d39fc8 = FUN_1003edddc;
  DAT_101d39fd0 = PTR_s_Buff_Minion_ArmoryVictoryBoost_10185c228;
  DAT_101d39fd8 = FUN_1003ede3c;
  DAT_101d39fe0 = PTR_s_Buff_Minion_Captain_10185c230;
  DAT_101d39fe8 = FUN_1003edfe0;
  DAT_101d39ff0 = PTR_s_Buff_Minion_CaptainBuff_10185c238;
  DAT_101d39ff8 = FUN_1003ee098;
  DAT_101d3a000 = PTR_s_Buff_Minion_Ace_10185a5c0;
  DAT_101d3a008 = FUN_1003ee168;
  DAT_101d3a010 = PTR_s_Buff_Minion_HordeSpeedBoost_10185c240;
  DAT_101d3a018 = FUN_1003ee2b8;
  DAT_101d3a020 = PTR_s_Buff_Minion_TutorialSpeedBoost_10185ada0;
  DAT_101d3a028 = FUN_1003ee384;
  DAT_101d3a030 = "Buff_Nexus_HitReactKraken";
  DAT_101d3a038 = FUN_1003ee448;
  DAT_101d3a040 = "Buff_Nexus_LifeTimePFX";
  DAT_101d3a048 = FUN_1003ee4a4;
  DAT_101d3a050 = "Buff_Nexus_VainNodeSupport";
  DAT_101d3a058 = FUN_1003ee5e0;
  DAT_101d3a060 = PTR_s_Buff_Nexus_VainCrystalDamage_10185c248;
  DAT_101d3a068 = FUN_1003ee5e4;
  DAT_101d3a070 = PTR_s_Buff_Nexus_5v5_AbilityB_10185c250;
  DAT_101d3a078 = FUN_1003ee680;
  DAT_101d3a080 = PTR_s_Buff_Nexus_5v5_AbilityB_Impact_10185c258;
  DAT_101d3a088 = FUN_1003ee8a0;
  DAT_101d3a090 = PTR_s_Buff_Nexus_5v5_Target_Laser_10185b148;
  DAT_101d3a098 = FUN_1003ee950;
  DAT_101d3a0a0 = PTR_s_Buff_Nexus_5v5_Target_Warning_10185b150;
  DAT_101d3a0a8 = FUN_1003ee9e4;
  DAT_101d3a0b0 = PTR_s_Buff_VainNode_BackdoorBarrier_10185c260;
  DAT_101d3a0b8 = FUN_1003ee9e8;
  DAT_101d3a0c0 = PTR_s_Buff_VainNode_HitReactPusher_10185c268;
  DAT_101d3a0c8 = FUN_1003eeacc;
  DAT_101d3a0d0 = PTR_s_Buff_VainNode_Regeneration_10185c270;
  DAT_101d3a0d8 = FUN_1003eeb28;
  DAT_101d3a0e0 = "Buff_Turret_HitReactKraken";
  DAT_101d3a0e8 = FUN_1003eec14;
  DAT_101d3a0f0 = PTR_s_Buff_Turret_TurretDamageAmp_10185c278;
  DAT_101d3a0f8 = FUN_1003eec7c;
  DAT_101d3a100 = "Buff_TurretShredsMinions";
  DAT_101d3a108 = FUN_1003eed6c;
  DAT_101d3a110 = PTR_s_Buff_Turret_BackdoorBarrier_10185c280;
  DAT_101d3a118 = FUN_1003eedd4;
  DAT_101d3a120 = PTR_s_Buff_Turret_BackdoorBarrier_5v5_10185c288;
  DAT_101d3a128 = FUN_1003eeeb8;
  DAT_101d3a130 = PTR_s_Buff_Turret_DamageReduction_5v5_10185c290;
  DAT_101d3a138 = FUN_1003eef9c;
  DAT_101d3a140 = PTR_s_Buff_Turret_DamageReduction_5v5__10185c298;
  DAT_101d3a148 = FUN_1003ef0c8;
  DAT_101d3a150 = PTR_s_Buff_Turret_GainPowerOverTime_5v_10185c2a0;
  DAT_101d3a158 = FUN_1003ef118;
  DAT_101d3a160 = PTR_s_Buff_Turret_GainPowerOverTime_Pa_10185c2a8;
  DAT_101d3a168 = FUN_1003ef158;
  DAT_101d3a170 = "Buff_MinionShreddedByTurret";
  DAT_101d3a178 = FUN_1003ef1b0;
  DAT_101d3a180 = PTR_s_Buff_Turret_AttackableTarget_10185c2b0;
  DAT_101d3a188 = FUN_1003ef25c;
  DAT_101d3a190 = PTR_s_Buff_Turret_Invulnerable_10185c2b8;
  DAT_101d3a198 = FUN_1003ef288;
  DAT_101d3a1a0 = PTR_s_Buff_Turret_Invulnerable_FlyoutT_10185c2c0;
  DAT_101d3a1a8 = FUN_1003ef324;
  DAT_101d3a1b0 = PTR_s_Buff_Item_ReflexBlock_10185ab58;
  DAT_101d3a1b8 = FUN_1003ef34c;
  DAT_101d3a1c0 = PTR_s_Buff_Item_CrystalInfusion_10185ab80;
  DAT_101d3a1c8 = FUN_1003ef49c;
  DAT_101d3a1d0 = PTR_s_Buff_Item_WeaponInfusion_10185ab78;
  DAT_101d3a1d8 = FUN_1003efa60;
  DAT_101d3a1e0 = PTR_s_Buff_Item_CanAlternatingCurrent_10185c2c8;
  DAT_101d3a1e8 = FUN_1003f0024;
  DAT_101d3a1f0 = PTR_s_Buff_Item_AlternatingCurrent_10185c2d0;
  DAT_101d3a1f8 = FUN_1003f013c;
  DAT_101d3a200 = PTR_s_Buff_Item_ShowAltCurrentHitEffec_10185c2d8;
  DAT_101d3a208 = FUN_1003f0234;
  DAT_101d3a210 = PTR_s_Buff_Item_ShowAftershockHitEffec_10185c2e0;
  DAT_101d3a218 = FUN_1003f02d8;
  DAT_101d3a220 = PTR_s_Buff_Item_ScoutTrapAura_10185c2e8;
  DAT_101d3a228 = FUN_1003f037c;
  DAT_101d3a230 = PTR_s_Buff_Item_VisionTotemAura_10185c2f0;
  DAT_101d3a238 = FUN_1003f05e8;
  DAT_101d3a240 = PTR_s_Buff_Item_SuperScout2000_Control_10185c2f8;
  DAT_101d3a248 = FUN_1003f0908;
  DAT_101d3a250 = PTR_s_Buff_Item_ScoutTuff_Control_10185c300;
  DAT_101d3a258 = FUN_1003f09fc;
  DAT_101d3a260 = PTR_s_Buff_Item_ScoutPak_Control_10185c308;
  DAT_101d3a268 = FUN_1003f0a00;
  DAT_101d3a270 = PTR_s_Buff_Item_TeleportBoots_Control_10185c310;
  DAT_101d3a278 = FUN_1003f0af4;
  DAT_101d3a280 = PTR_s_Buff_Item_TeleportBoots_Channeli_10185abe8;
  DAT_101d3a288 = FUN_1003f0b28;
  DAT_101d3a290 = PTR_s_Buff_Item_TeleportBoots_EndPoint_10185abe0;
  DAT_101d3a298 = FUN_1003f0c58;
  DAT_101d3a2a0 = PTR_s_Buff_Item_TeleportBoots_Structur_10185abf0;
  DAT_101d3a2a8 = FUN_1003f0da8;
  DAT_101d3a2b0 = PTR_s_Buff_Item_WarTreads_Speed_10185abb0;
  DAT_101d3a2b8 = FUN_1003f0e60;
  DAT_101d3a2c0 = PTR_s_Buff_Item_AtlasPauldronSlow_10185abc0;
  DAT_101d3a2c8 = FUN_1003f0ec8;
  DAT_101d3a2d0 = PTR_s_Buff_Item_SprintBoots_10185c318;
  DAT_101d3a2d8 = FUN_1003f0fd0;
  DAT_101d3a2e0 = PTR_s_Buff_Item_TravelBoots_10185c320;
  DAT_101d3a2e8 = FUN_1003f104c;
  DAT_101d3a2f0 = PTR_s_Buff_Item_JourneyBoots_10185c328;
  DAT_101d3a2f8 = FUN_1003f10c8;
  DAT_101d3a300 = PTR_s_Buff_Item_HalcyonChargers_10185c330;
  DAT_101d3a308 = FUN_1003f1190;
  DAT_101d3a310 = PTR_s_Buff_Item_SprintBootsSprint_10185ab08;
  DAT_101d3a318 = FUN_1003f120c;
  DAT_101d3a320 = PTR_s_Buff_Item_TravelBootsSprint_10185ab18;
  DAT_101d3a328 = FUN_1003f1218;
  DAT_101d3a330 = PTR_s_Buff_Item_JourneyBootsSprint_10185ab28;
  DAT_101d3a338 = FUN_1003f1224;
  DAT_101d3a340 = PTR_s_Buff_Item_HalcyonChargersSprint_10185ab38;
  DAT_101d3a348 = FUN_1003f1230;
  DAT_101d3a350 = PTR_s_Buff_Item_FountainOfRenewal_10185ab60;
  DAT_101d3a358 = FUN_1003f123c;
  DAT_101d3a360 = PTR_s_Buff_Item_MarkedByReflexBlock_10185c338;
  DAT_101d3a368 = FUN_1003f12f8;
  DAT_101d3a370 = PTR_s_Buff_Item_Lifespring_10185c340;
  DAT_101d3a378 = FUN_1003f1330;
  DAT_101d3a380 = PTR_s_Buff_Item_FlareGun_10185c348;
  DAT_101d3a388 = FUN_1003f145c;
  DAT_101d3a390 = PTR_s_Buff_Item_FlareLoader_10185c350;
  DAT_101d3a398 = FUN_1003f1844;
  DAT_101d3a3a0 = PTR_s_Buff_Item_FlareLoader_Control_10185c358;
  DAT_101d3a3a8 = FUN_1003f1a78;
  DAT_101d3a3b0 = PTR_s_Buff_Item_MinionsFoot_10185c360;
  DAT_101d3a3b8 = FUN_1003f1a7c;
  DAT_101d3a660 = PTR_s_Buff_Item_StormguardBanner_10185c498;
  DAT_101d3a668 = FUN_1003f3b50;
  DAT_101d3a670 = PTR_s_Buff_Item_StormguardBannerHitPfx_10185c4a0;
  DAT_101d3a678 = FUN_1003f3ccc;
  DAT_101d3a680 = PTR_s_Buff_Item_Stormcrown_10185c4a8;
  DAT_101d3a688 = FUN_1003f3d1c;
  DAT_101d3a690 = PTR_s_Buff_Item_DragonsEye_Control_10185c4b0;
  DAT_101d3a698 = FUN_1003f3e78;
  DAT_101d3a6a0 = PTR_s_Buff_Item_DragonsEye_CrystalBonu_10185c4b8;
  DAT_101d3a6a8 = FUN_1003f3ea4;
  DAT_101d3a6b0 = PTR_s_Buff_Item_Clockwork_10185c4c0;
  DAT_101d3a6b8 = FUN_1003f3fc8;
  DAT_101d3a6c0 = PTR_s_Buff_Item_Clockwork_ShowPfx_10185c4c8;
  DAT_101d3a6c8 = FUN_1003f4124;
  DAT_101d3a6d0 = PTR_s_Buff_Item_Pulseweave_Control_10185c4d0;
  DAT_101d3a6d8 = FUN_1003f4174;
  DAT_101d3a6e0 = PTR_s_Buff_Item_Pulseweave_Active_10185c4d8;
  DAT_101d3a6e8 = FUN_1003f4420;
  DAT_101d3a6f0 = PTR_s_Buff_Item_Pulseweave_Slow_10185c4e0;
  DAT_101d3a6f8 = FUN_1003f4634;
  DAT_101d3a700 = PTR_s_Buff_Item_CapacitorPlate_Control_10185c4e8;
  DAT_101d3a708 = FUN_1003f46c4;
  DAT_101d3a710 = PTR_s_Buff_Item_CapacitorPlate_SpeedBo_10185c4f0;
  DAT_101d3a718 = FUN_1003f47d8;
  DAT_101d3a720 = PTR_s_Buff_Item_CapacitorPlate_Lockout_10185c4f8;
  DAT_101d3a728 = FUN_1003f4810;
  DAT_101d3a730 = PTR_s_Buff_Item_TornadoTrigger_Control_10185c500;
  DAT_101d3a738 = FUN_1003f486c;
  DAT_101d3a740 = PTR_s_Buff_Item_TornadoTrigger_Movespe_10185c508;
  DAT_101d3a748 = FUN_1003f48f0;
  DAT_101d3a750 = PTR_s_Buff_Item_RooksDecree_10185c510;
  DAT_101d3a758 = FUN_1003f495c;
  DAT_101d3a760 = PTR_s_Buff_Item_RooksDecree_AttackBuff_10185c518;
  DAT_101d3a768 = FUN_1003f49e0;
  DAT_101d3a770 = PTR_s_Buff_Item_RooksDecree_Barrier_10185c520;
  DAT_101d3a778 = FUN_1003f4b8c;
  DAT_101d3a780 = PTR_s_Buff_Item_MetalJacket_Control_10185c528;
  DAT_101d3a788 = FUN_1003f4bbc;
  DAT_101d3a790 = PTR_s_Buff_Item_SeraphicShell_10185c530;
  DAT_101d3a798 = FUN_1003f4c2c;
  DAT_101d3a7a0 = PTR_s_Buff_Item_SeraphicShell_IsActive_10185c538;
  DAT_101d3a7a8 = FUN_1003f4e7c;
  DAT_101d3a7b0 = PTR_s_Buff_Item_ProtectorContract_10185c540;
  DAT_101d3a7b8 = FUN_1003f4fc0;
  DAT_101d3a7c0 = PTR_s_Buff_Item_ProtectorContract_Atta_10185c548;
  DAT_101d3a7c8 = FUN_1003f5064;
  DAT_101d3a7d0 = PTR_s_Buff_Item_ProtectorContract_Barr_10185c550;
  DAT_101d3a7d8 = FUN_1003f5210;
  DAT_101d3a7e0 = PTR_s_Buff_Item_DragonbloodContract_10185c558;
  DAT_101d3a7e8 = FUN_1003f5240;
  DAT_101d3a7f0 = PTR_s_Buff_Item_DragonbloodContract_Ra_10185c560;
  DAT_101d3a7f8 = FUN_1003f5460;
  DAT_101d3a800 = PTR_s_Buff_Item_DragonbloodContract_Me_10185c568;
  DAT_101d3a808 = FUN_1003f54ec;
  DAT_101d3a810 = PTR_s_Buff_Item_IronguardContract_Gran_10185c570;
  DAT_101d3a818 = FUN_1003f5560;
  DAT_101d3a820 = PTR_s_Buff_Item_IronguardContract_Heal_10185c578;
  DAT_101d3a828 = FUN_1003f55d4;
  DAT_101d3a830 = PTR_s_Buff_Item_TreasureChestAura_10185c580;
  DAT_101d3a838 = FUN_1003f5634;
  DAT_101d3a840 = PTR_s_Buff_Item_Boombox_Dance_10185c588;
  DAT_101d3a848 = FUN_1003f5730;
  DAT_101d3a850 = PTR_s_Buff_Item_Boombox_Taunt_10185c590;
  DAT_101d3a858 = FUN_1003f57e8;
  DAT_101d3a860 = PTR_s_Buff_Hero000_LongMeleeAttacks_10185c598;
  DAT_101d3a868 = FUN_1003f58a0;
  DAT_101d3a870 = PTR_s_Buff_Lorelai_WaterSourceEmpowere_10185b1b0;
  DAT_101d3a878 = FUN_1003f5968;
  DAT_101d3a880 = PTR_s_Buff_Lorelai_EmpoweredNoBonus_10185b1b8;
  DAT_101d3a888 = FUN_1003f5af8;
  DAT_101d3a890 = PTR_s_Buff_Lorelai_FishFoodDelay_10185b1c0;
  DAT_101d3a898 = FUN_1003f5afc;
  DAT_101d3a8a0 = PTR_s_Buff_Lorelai_FishFoodDamagePerSe_10185c5a0;
  DAT_101d3a8a8 = FUN_1003f5cf0;
  DAT_101d3a8b0 = PTR_s_Buff_Lorelai_SplashdownSlow_10185c5a8;
  DAT_101d3a8b8 = FUN_1003f5f2c;
  DAT_101d3a8c0 = PTR_s_Buff_Lorelai_SplashdownSpeedBoos_10185c5b0;
  DAT_101d3a8c8 = FUN_1003f5fdc;
  DAT_101d3a8d0 = PTR_s_Buff_Lorelai_Splashdown_10185c5b8;
  DAT_101d3a8d8 = FUN_1003f602c;
  DAT_101d3a8e0 = PTR_s_Buff_Lorelai_WaterShield_10185b1d8;
  DAT_101d3a8e8 = FUN_1003f6290;
  DAT_101d3a8f0 = PTR_s_Buff_Lorelai_Invulnerable_10185b1d0;
  DAT_101d3a8f8 = FUN_1003f658c;
  DAT_101d3a900 = PTR_s_Buff_Lorelai_Talent_TalentA_10185c5c0;
  DAT_101d3a908 = FUN_1003f6808;
  DAT_101d3a910 = PTR_s_Buff_Lorelai_Talent_TalentB_10185c5c8;
  DAT_101d3a918 = FUN_1003f69a4;
  DAT_101d3a920 = PTR_s_Buff_Lorelai_Talent_TalentC_10185b1c8;
  DAT_101d3a928 = FUN_1003f69a8;
  DAT_101d3a930 = PTR_s_Buff_Varya_PassiveBehaviors_10185c5d0;
  DAT_101d3a938 = FUN_1003f6a88;
  DAT_101d3a940 = PTR_s_Buff_Varya_Passive_C_Aspd_10185c5d8;
  DAT_101d3a948 = FUN_1003f6afc;
  DAT_101d3a950 = PTR_s_Buff_Varya_AA_BeamDamage_10185b1f0;
  DAT_101d3a958 = FUN_1003f6b4c;
  DAT_101d3a960 = PTR_s_Buff_Varya_AA_BeamFx_10185b1f8;
  DAT_101d3a968 = FUN_1003f6c84;
  DAT_101d3a970 = PTR_s_Buff_Varya_AA_ChainBeamPrimary_10185b1e0;
  DAT_101d3a978 = FUN_1003f6d34;
  DAT_101d3a980 = PTR_s_Buff_Varya_AA_ChainBeamSecondary_10185b1e8;
  DAT_101d3a988 = FUN_1003f6f14;
  DAT_101d3a990 = PTR_s_Buff_Varya_A_WatchForStun_10185b218;
  DAT_101d3a998 = FUN_1003f7038;
  DAT_101d3a9a0 = PTR_s_Buff_Varya_A_Impact_10185c5e0;
  DAT_101d3a9a8 = FUN_1003f70e8;
  DAT_101d3a9b0 = PTR_s_Buff_Varya_A_Beam_10185c5e8;
  DAT_101d3a9b8 = FUN_1003f7194;
  DAT_101d3a9c0 = PTR_s_Buff_Varya_A_QuickSpearAvailable_10185b210;
  DAT_101d3a9c8 = FUN_1003f72a0;
  DAT_101d3a9d0 = PTR_s_Buff_Varya_B_Control_10185b208;
  DAT_101d3a9d8 = FUN_1003f72b8;
  DAT_101d3a9e0 = PTR_s_Buff_Varya_B_Combo_A_SwapInIcon_10185c5f0;
  DAT_101d3a9e8 = FUN_1003f7b6c;
  DAT_101d3a9f0 = PTR_s_Buff_Varya_B_Combo_A_Pressable_10185b230;
  DAT_101d3a9f8 = FUN_1003f7b9c;
  DAT_101d3aa00 = PTR_s_Buff_Varya_B_Combo_A_Activate_10185b258;
  DAT_101d3aa08 = FUN_1003f7ba0;
  DAT_101d3aa10 = PTR_s_Buff_Varya_B_DoubleDash_10185b248;
  DAT_101d3aa18 = FUN_1003f7bd4;
  DAT_101d3aa20 = PTR_s_Buff_Varya_B_Barrier_10185c5f8;
  DAT_101d3aa28 = FUN_1003f7bf8;
  DAT_101d3aa30 = PTR_s_Buff_Varya_B_ChargingFx_10185b240;
  DAT_101d3aa38 = FUN_1003f7c44;
  DAT_101d3aa40 = PTR_s_Buff_Varya_B_DamageBeam_10185b250;
  DAT_101d3aa48 = FUN_1003f7dc0;
  DAT_101d3aa50 = PTR_s_Buff_Varya_B_MoveAvailable_10185b228;
  DAT_101d3aa58 = FUN_1003f7fe8;
  DAT_101d3aa60 = PTR_s_Buff_Varya_B_MoveDefaultAvailabl_10185b220;
  DAT_101d3aa68 = FUN_1003f80fc;
  DAT_101d3aa70 = PTR_s_Buff_Varya_C_Control_10185b268;
  DAT_101d3aa78 = FUN_1003f8210;
  DAT_101d3aa80 = PTR_s_Buff_Varya_C_Casting_10185b270;
  DAT_101d3aa88 = FUN_1003f83ac;
  DAT_101d3aa90 = PTR_s_Buff_Varya_C_ComboWindow_10185b200;
  DAT_101d3aa98 = FUN_1003f846c;
  DAT_101d3aaa0 = PTR_s_Buff_Varya_C_Marked_10185c600;
  DAT_101d3aaa8 = FUN_1003f8470;
  DAT_101d3aab0 = PTR_s_Buff_Varya_C_StrikeA_10185c608;
  DAT_101d3aab8 = FUN_1003f8710;
  DAT_101d3aac0 = PTR_s_Buff_Varya_C_StrikeB_10185c610;
  DAT_101d3aac8 = FUN_1003f871c;
  DAT_101d3aad0 = PTR_s_Buff_Varya_C_StrikeC_10185c618;
  DAT_101d3aad8 = FUN_1003f8728;
  DAT_101d3aae0 = PTR_s_Buff_Varya_C_StrikeTalent_10185c620;
  DAT_101d3aae8 = FUN_1003f8734;
  DAT_101d3aaf0 = PTR_s_Buff_Varya_C_StrikeADamage_10185c628;
  DAT_101d3aaf8 = FUN_1003f8740;
  DAT_101d3ab00 = PTR_s_Buff_Varya_C_StrikeBDamage_10185c630;
  DAT_101d3ab08 = FUN_1003f8748;
  DAT_101d3ab10 = PTR_s_Buff_Varya_C_StrikeCDamage_10185c638;
  DAT_101d3ab18 = FUN_1003f8750;
  DAT_101d3ab20 = PTR_s_Buff_Varya_C_StrikeTalentDamage_10185c640;
  DAT_101d3ab28 = FUN_1003f8758;
  DAT_101d3ab30 = PTR_s_Buff_Varya_Talent_TalentA_10185c648;
  DAT_101d3ab38 = FUN_1003f8760;
  DAT_101d3ab40 = PTR_s_Buff_Varya_Talent_TalentB_10185b238;
  DAT_101d3ab48 = FUN_1003f88ec;
  DAT_101d3ab50 = PTR_s_Buff_Varya_Talent_TalentC_10185c650;
  DAT_101d3ab58 = FUN_1003f88f0;
  DAT_101d3ab60 = PTR_s_Buff_Catherine_HeroicPerk_Captai_10185c658;
  DAT_101d3ab68 = FUN_1003f88f4;
  DAT_101d3ab70 = PTR_s_Buff_Catherine_HeroicPerk_Captai_10185c660;
  DAT_101d3ab78 = FUN_1003f89f8;
  DAT_101d3ab80 = PTR_s_Buff_Catherine_MercilessPursuit__10185a548;
  DAT_101d3ab88 = FUN_1003f8a9c;
  DAT_101d3ab90 = PTR_s_Buff_Catherine_MercilessPursuit__10185a540;
  DAT_101d3ab98 = FUN_1003f8b7c;
  DAT_101d3aba0 = PTR_s_Buff_Catherine_Stormguard_10185a550;
  DAT_101d3aba8 = FUN_1003f8c54;
  DAT_101d3abb0 = PTR_s_Buff_Catherine_Talent_CaptainOfT_10185c668;
  DAT_101d3abb8 = FUN_1003f8e1c;
  DAT_101d3abc0 = PTR_s_Buff_Catherine_Talent_AdvancingG_10185c670;
  DAT_101d3abc8 = FUN_1003f8edc;
  DAT_101d3abd0 = PTR_s_Buff_Catherine_Talent_QuickPursu_10185c678;
  DAT_101d3abd8 = FUN_1003f8f80;
  DAT_101d3abe0 = PTR_s_Buff_Catherine_Talent_Shockwave_10185a558;
  DAT_101d3abe8 = FUN_1003f906c;
  DAT_101d3abf0 = PTR_s_Buff_Ringo_HeroicPerk_DoubleDown_10185c680;
  DAT_101d3abf8 = FUN_1003f91a0;
  DAT_101d3ac00 = PTR_s_Buff_Ringo_DoubleDown_CritNext_10185af88;
  DAT_101d3ac08 = FUN_1003f91d8;
  DAT_101d3ac10 = PTR_s_Buff_Ringo_AchillesShot_Slow_10185c688;
  DAT_101d3ac18 = FUN_1003f927c;
  DAT_101d3ac20 = PTR_s_Buff_Ringo_TwirlingSilver_10185af80;
  DAT_101d3ac28 = FUN_1003f92b0;
  DAT_101d3ac30 = PTR_s_Buff_Ringo_HellfireBrew_Burn_10185c690;
  DAT_101d3ac38 = FUN_1003f95ec;
  DAT_101d3ac40 = PTR_s_Buff_Ringo_Talent_BulletSplit_10185af78;
  DAT_101d3ac48 = FUN_1003f9730;
  DAT_101d3ac50 = PTR_s_Buff_Ringo_Talent_SpikedBrew_10185c698;
  DAT_101d3ac58 = FUN_1003f98e4;
  DAT_101d3ac60 = PTR_s_Buff_Ringo_Talent_AnotherRound_10185c6a0;
  DAT_101d3ac68 = FUN_1003f99d0;
  DAT_101d3ac70 = PTR_s_Buff_Ringo_Talent_LongShot_10185c6a8;
  DAT_101d3ac78 = FUN_1003f9a7c;
  DAT_101d3ac80 = PTR_s_Buff_Adagio_ArcaneFire_10185a200;
  DAT_101d3ac88 = FUN_1003f9be0;
  DAT_101d3ac90 = PTR_s_Buff_Adagio_ArcaneFire_Heal_10185c6b0;
  DAT_101d3ac98 = FUN_1003f9e44;
  DAT_101d3aca0 = PTR_s_Buff_Adagio_ArcaneFire_Slow_10185c6b8;
  DAT_101d3aca8 = FUN_1003f9fb4;
  DAT_101d3acb0 = PTR_s_Buff_Adagio_AgentOfWrath_10185c6c0;
  DAT_101d3acb8 = FUN_1003fa00c;
  DAT_101d3acc0 = PTR_s_Buff_Adagio_VerseOfJudgement_For_10185a1e8;
  DAT_101d3acc8 = FUN_1003fa120;
  DAT_101d3acd0 = DAT_10185a210;
  DAT_101d3acd8 = FUN_1003fa150;
  DAT_101d3ace0 = PTR_s_Buff_Adagio_Talent_AvengingWrath_10185c6c8;
  DAT_101d3ace8 = FUN_1003fa1b0;
  DAT_101d3acf0 = PTR_s_Buff_Adagio_Talent_GiftOfLife_10185c6d0;
  DAT_101d3acf8 = FUN_1003fa31c;
  DAT_101d3ad00 = PTR_s_Buff_Adagio_Talent_HealingVerse_10185a1f8;
  DAT_101d3ad08 = FUN_1003fa39c;
  DAT_101d3ad10 = PTR_s_Buff_Koshka_TwirlEmpoweredAttack_10185ac98;
  DAT_101d3ad18 = FUN_1003fa4d0;
  DAT_101d3ad20 = PTR_s_Buff_Koshka_HeroicPerk_BloodRush_10185c6d8;
  DAT_101d3ad28 = FUN_1003fa570;
  DAT_101d3ad30 = PTR_s_Buff_Koshka_HeroicPerk_BloodRush_10185c6e0;
  DAT_101d3ad38 = FUN_1003fa5d8;
  DAT_101d3ad40 = PTR_s_Buff_Koshka_Claws_10185aca0;
  DAT_101d3ad48 = FUN_1003fa640;
  DAT_101d3ad50 = PTR_s_Buff_Koshka_Talent_TwirlyLife_10185acb0;
  DAT_101d3ad58 = FUN_1003fa6c0;
  DAT_101d3ad60 = PTR_s_Buff_Koshka_B_Barrier_10185aca8;
  DAT_101d3ad68 = FUN_1003fa730;
  DAT_101d3ad70 = PTR_s_Buff_Koshka_FortifiedHealthTwirl_10185acb8;
  DAT_101d3ad78 = FUN_1003fa76c;
  DAT_101d3ad80 = PTR_s_Buff_Koshka_Talent_Frenzied_10185ac90;
  DAT_101d3ad88 = FUN_1003fa7b8;
  DAT_101d3ad90 = DAT_10185acc0;
  DAT_101d3ad98 = FUN_1003fa824;
  DAT_101d3ada0 = PTR_s_Buff_Glaive_Crit_PFX_10185a718;
  DAT_101d3ada8 = FUN_1003fa958;
  DAT_101d3adb0 = PTR_s_Buff_Glaive_Afterburn_KnockbackW_10185a720;
  DAT_101d3adb8 = FUN_1003fa998;
  DAT_101d3adc0 = PTR_s_Buff_Glaive_Afterburn_PostStun_10185c6e8;
  DAT_101d3adc8 = FUN_1003fabd8;
  DAT_101d3add0 = PTR_s_Buff_Glaive_AbilityPerk_GrantTwi_10185c6f0;
  DAT_101d3add8 = FUN_1003fac90;
  DAT_101d3ade0 = PTR_s_Buff_Glaive_AbilityPerk_GrantBlo_10185c6f8;
  DAT_101d3ade8 = FUN_1003fae74;
  DAT_101d3adf0 = PTR_s_Buff_Glaive_AbilityPerk_Bloodson_10185c700;
  DAT_101d3adf8 = FUN_1003faf28;
  DAT_101d3ae00 = PTR_s_Buff_Glaive_ViolentAfterburnTarg_10185a730;
  DAT_101d3ae08 = FUN_1003fafec;
  DAT_101d3ae10 = PTR_s_Buff_Glaive_Withdraw_10185a748;
  DAT_101d3ae18 = FUN_1003fb014;
  DAT_101d3ae20 = PTR_s_Buff_Glaive_Talent_StunningBlood_10185a740;
  DAT_101d3ae28 = FUN_1003fb080;
  DAT_101d3ae30 = PTR_s_Buff_Glaive_Talent_TwistedPursui_10185a738;
  DAT_101d3ae38 = FUN_1003fb100;
  DAT_101d3ae40 = PTR_s_Buff_Glaive_Talent_ViolentAfterb_10185a728;
  DAT_101d3ae48 = FUN_1003fb268;
  DAT_101d3ae50 = PTR_s_Buff_Petal_Perk_YummyAttacks_10185c708;
  DAT_101d3ae58 = FUN_1003fb354;
  DAT_101d3b0d8 = FUN_1003fcabc;
  DAT_101d3bb28 = FUN_1004088ac;
  DAT_101d3bb18 = FUN_10040885c;
  DAT_101d3bb20 = PTR_s_Buff_Reim_Talent_Revenant_10185cab8;
  DAT_101d3bb08 = FUN_1004087ec;
  DAT_101d3bb10 = PTR_s_Buff_Reim_Talent_LongWinter_10185cab0;
  DAT_101d3baf8 = FUN_1004087b0;
  DAT_101d3bb00 = PTR_s_Buff_Reim_Talent_CreepingCold_10185caa8;
  DAT_101d3bae8 = FUN_1004086d4;
  DAT_101d3baf0 = PTR_s_Buff_Reim_C_Slow_10185caa0;
  DAT_101d3bad8 = FUN_100408678;
  DAT_101d3bae0 = PTR_s_Buff_Reim_FrostDoT_10185ca98;
  DAT_101d3bac8 = FUN_100408390;
  DAT_101d3bad0 = PTR_s_Buff_Reim_FrostSlow_10185ca90;
  DAT_101d3bab8 = FUN_10040837c;
  DAT_101d3bac0 = PTR_s_Buff_ReimSpawn_C_10185ca88;
  DAT_101d3baa8 = FUN_10040819c;
  DAT_101d3bab0 = PTR_s_Buff_Reim_Immobilize_10185af70;
  DAT_101d3ba98 = FUN_100407f78;
  DAT_101d3baa0 = PTR_s_Buff_ReimSpawn_A_10185ca80;
  DAT_101d3ba88 = FUN_100407f40;
  DAT_101d3ba90 = PTR_s_Buff_Reim_Perk_Frost_10185ca78;
  DAT_101d3ba78 = FUN_100407ee8;
  DAT_101d3ba80 = PTR_s_Buff_Skye_EnhancedThrustersSpeed_10185b0f8;
  DAT_101d3ba68 = FUN_100407e38;
  DAT_101d3ba70 = PTR_s_Buff_Skye_EnhancedThrustersRecha_10185ca70;
  DAT_101d3ba58 = FUN_100407d94;
  DAT_101d3ba60 = PTR_s_Buff_Skye_Talent_EnhancedThruste_10185b0f0;
  DAT_101d3ba48 = FUN_100407d0c;
  DAT_101d3ba50 = PTR_s_Buff_Skye_PiercingBarrageImpact_10185ca68;
  DAT_101d3ba38 = FUN_100407af8;
  DAT_101d3ba40 = PTR_s_Buff_Skye_Talent_PiercingBarrage_10185ca60;
  DAT_101d3ba28 = FUN_1004079f0;
  DAT_101d3ba30 = PTR_s_Buff_Skye_Talent_RainingDeath_10185ca58;
  DAT_101d3ba18 = FUN_100407964;
  DAT_101d3ba20 = PTR_s_Buff_Skye_Withdraw_10185b100;
  DAT_101d3ba08 = FUN_10040790c;
  DAT_101d3ba10 = PTR_s_Buff_Skye_PlaySpawnOrRespawnAnim_10185ca50;
  DAT_101d3b9f8 = FUN_100407810;
  DAT_101d3ba00 = PTR_s_Buff_Skye_HitByMissileVolley_10185ca48;
  DAT_101d3b9e8 = FUN_10040770c;
  DAT_101d3b9f0 = PTR_s_Buff_Skye_MissileVolley_PlayMiss_10185ca40;
  DAT_101d3b9d8 = FUN_1004075ac;
  DAT_101d3b9e0 = PTR_s_Buff_Skye_MissileVolley_MissileP_10185ca38;
  DAT_101d3b9c8 = FUN_1004075a0;
  DAT_101d3b9d0 = PTR_s_Buff_Skye_LineMissileVolley_Expl_10185ca30;
  DAT_101d3b9b8 = FUN_100407450;
  DAT_101d3b9c0 = PTR_s_Buff_Skye_LineMissileVolley_Dela_10185ca28;
  DAT_101d3b9a8 = FUN_100407444;
  DAT_101d3b9b0 = PTR_s_Buff_Skye_ClusterMissileVolley_E_10185ca20;
  DAT_101d3b998 = FUN_1004073ac;
  DAT_101d3b9a0 = PTR_s_Buff_Skye_ClusterMissileVolley_D_10185ca18;
  DAT_101d3b988 = FUN_1004070e0;
  DAT_101d3b990 = PTR_s_Buff_Skye_HitBy_B_Missiles_10185ca10;
  DAT_101d3b978 = FUN_100406f1c;
  DAT_101d3b980 = PTR_s_Buff_Skye_Firing_B_Missiles_10185b0e8;
  DAT_101d3b968 = FUN_100406e54;
  DAT_101d3b970 = PTR_s_Buff_Skye_Executing_B_Dash_10185b0d0;
  DAT_101d3b958 = FUN_100406b10;
  DAT_101d3b960 = PTR_s_Buff_Skye_BarrageSlow_10185ca08;
  DAT_101d3b948 = FUN_1004067f8;
  DAT_101d3b950 = PTR_s_Buff_Skye_Barrage_10185b0c8;
  DAT_101d3b938 = FUN_100406760;
  DAT_101d3b940 = PTR_s_Buff_Skye_JumpJets_10185ca00;
  DAT_101d3b928 = FUN_100406674;
  DAT_101d3b930 = PTR_s_Buff_Skye_JumpJets_Pending_10185b0c0;
  DAT_101d3b918 = FUN_1004065b0;
  DAT_101d3b920 = PTR_s_Buff_Skye_CircleStrafing_10185b0e0;
  DAT_101d3b908 = FUN_100406440;
  DAT_101d3b910 = PTR_s_Buff_Skye_LockedOn_HardLockIndic_10185c9f8;
  DAT_101d3b8f8 = FUN_100406268;
  DAT_101d3b900 = PTR_s_Buff_Skye_LockedOn_Target_10185b0d8;
  DAT_101d3b8e8 = FUN_1004061b4;
  DAT_101d3b8f0 = PTR_s_Buff_Skye_LockedOn_Skye_10185c9f0;
  DAT_101d3b8d8 = FUN_1004060c8;
  DAT_101d3b8e0 = PTR_s_Buff_Skye_Perk_LockOn_Control_10185c9e8;
  DAT_101d3b0c8 = FUN_1003fca10;
  DAT_101d3b0d0 = PTR_s_Buff_Joule_C_Strafe_10185c780;
  DAT_101d3b0b8 = FUN_1003fc9b8;
  DAT_101d3b0c0 = PTR_s_Buff_Joule_Thunderstrike_10185ac08;
  DAT_101d3b0a8 = FUN_1003fc940;
  DAT_101d3b0b0 = PTR_s_Buff_Joule_RocketLeap_Knockback__10185abf8;
  DAT_101d3b098 = FUN_1003fc8cc;
  DAT_101d3b0a0 = PTR_s_Buff_Joule_RocketLeap_PreTarget__10185c778;
  DAT_101d3b088 = FUN_1003fc8c8;
  DAT_101d3b090 = PTR_s_Buff_Joule_HeroicPerk_HeavyPlati_10185c770;
  DAT_101d3b078 = FUN_1003fc824;
  DAT_101d3b080 = PTR_s_Buff_SAW_Talent_RoadRage_10185b058;
  DAT_101d3b068 = FUN_1003fc750;
  DAT_101d3b070 = PTR_s_Buff_SAW_PiercingBullets_ImpactP_10185c768;
  DAT_101d3b058 = FUN_1003fc74c;
  DAT_101d3b060 = PTR_s_Buff_SAW_Talent_PiercingBullets_10185b048;
  DAT_101d3b048 = FUN_1003fc6e8;
  DAT_101d3b050 = PTR_s_Buff_SAW_Talent_SpeedySpinUp_10185c760;
  DAT_101d3b038 = FUN_1003fc5e0;
  DAT_101d3b040 = PTR_s_Buff_SAW_Withdraw_10185b088;
  DAT_101d3b028 = FUN_1003fc550;
  DAT_101d3b030 = PTR_s_Buff_SAW_Strafe_10185b050;
  DAT_101d3b018 = FUN_1003fc4c8;
  DAT_101d3b020 = PTR_s_Buff_SAW_SuppressingFire_BuildSp_10185b078;
  DAT_101d3b008 = FUN_1003fc470;
  DAT_101d3b010 = PTR_s_Buff_SAW_SuppressingFire_SoundFx_10185b070;
  DAT_101d3aff8 = FUN_1003fc220;
  DAT_101d3b000 = PTR_s_Buff_SAW_SuppressingFire_Slow_10185b080;
  DAT_101d3afe8 = FUN_1003fc0dc;
  DAT_101d3aff0 = PTR_s_Buff_SAW_RoadieRun_10185b060;
  DAT_101d3afd8 = FUN_1003fc09c;
  DAT_101d3afe0 = PTR_s_Buff_SAW_HeroicPerk_SpinUp_10185b040;
  DAT_101d3afc8 = FUN_1003fc098;
  DAT_101d3afd0 = PTR_s_Buff_SAW_RotateGunBarrel_10185c758;
  DAT_101d3afb8 = FUN_1003fbff0;
  DAT_101d3afc0 = DAT_10185af08;
  DAT_101d3afa8 = FUN_1003fbf1c;
  DAT_101d3afb0 = PTR_s_Buff_Petal_Talent_Bouncer_Energy_10185aed8;
  DAT_101d3af98 = FUN_1003fbf18;
  DAT_101d3afa0 = PTR_s_Buff_Petal_Talent_Bouncer_10185aed0;
  DAT_101d3af88 = FUN_1003fbf14;
  DAT_101d3af90 = PTR_s_Buff_Petal_Talent_KaboomSeeds_10185aea0;
  DAT_101d3af78 = FUN_1003fbd30;
  DAT_101d3af80 = PTR_s_Buff_PetalMinion_ThornstormLitOn_10185aef0;
  DAT_101d3af68 = FUN_1003fbcd4;
  DAT_101d3af70 = PTR_s_Buff_PetalMinion_ThornstormLitFu_10185aee8;
  DAT_101d3af58 = FUN_1003fbc7c;
  DAT_101d3af60 = PTR_s_Buff_PetalMinion_Frenzy_10185aec8;
  DAT_101d3af48 = FUN_1003fbc38;
  DAT_101d3af50 = PTR_s_Buff_PetalMinion_Explosion_Slow_10185af00;
  DAT_101d3af38 = FUN_1003fbc0c;
  DAT_101d3af40 = PTR_s_Buff_Petal_Talent_Root_10185c750;
  DAT_101d3af28 = FUN_1003fbad0;
  DAT_101d3af30 = PTR_s_Buff_PetalMinion_DontReturnToMas_10185c748;
  DAT_101d3af18 = FUN_1003fba50;
  DAT_101d3af20 = PTR_s_Buff_PetalMinion_Perk_Stats_10185c740;
  DAT_101d3af08 = FUN_1003fba24;
  DAT_101d3af10 = PTR_s_Buff_PetalSeed_LandMine_10185c738;
  DAT_101d3aef8 = FUN_1003fb9f8;
  DAT_101d3af00 = PTR_s_Buff_PetalSeed_LandMine_ReduceDa_10185aea8;
  DAT_101d3aee8 = FUN_1003fb8bc;
  DAT_101d3aef0 = PTR_s_Buff_PetalSeed_LandMine_Expiry_10185aeb0;
  DAT_101d3aed8 = FUN_1003fb7fc;
  DAT_101d3aee0 = PTR_s_Buff_PetalSeed_Perk_Stats_10185c730;
  DAT_101d3aec8 = FUN_1003fb790;
  DAT_101d3aed0 = PTR_s_Buff_PetalSeed_Perk_LandMine_Pri_10185c728;
  DAT_101d3aeb8 = FUN_1003fb708;
  DAT_101d3aec0 = PTR_s_Buff_PetalSeed_Perk_MinionSpawnD_10185c720;
  DAT_101d3aea8 = FUN_1003fb5f8;
  DAT_101d3aeb0 = PTR_s_Buff_PetalSeed_Perk_Rot_10185c718;
  DAT_101d3ae98 = FUN_1003fb5cc;
  DAT_101d3aea0 = PTR_s_Buff_Petal_B_Amp_10185aee0;
  DAT_101d3ae88 = FUN_1003fb4bc;
  DAT_101d3ae90 = PTR_s_Buff_Petal_Yummy_10185aeb8;
  DAT_101d3ae78 = FUN_1003fb448;
  DAT_101d3ae80 = PTR_s_Buff_Petal_YummyFrenzy_10185aec0;
  DAT_101d3ae68 = FUN_1003fb3bc;
  DAT_101d3ae70 = PTR_s_Buff_Petal_Perk_Summons_10185c710;
  DAT_101d3ae60 = PTR_s_Buff_Petal_Perk_SpawnMunion_10185aef8;
  DAT_101d3b0e0 = PTR_s_Buff_Joule_Withdraw_10185ac18;
  DAT_101d3b0e8 = FUN_1003fcaec;
  DAT_101d3b0f0 = PTR_s_Buff_Joule_Talent_ThunderingStep_10185c788;
  DAT_101d3b0f8 = FUN_1003fcbe4;
  DAT_101d3b100 = PTR_s_Buff_Joule_Talent_RocketLeapfrog_10185ac00;
  DAT_101d3b108 = FUN_1003fcd0c;
  DAT_101d3b110 = PTR_s_Buff_Joule_JumpReset_10185c790;
  DAT_101d3b118 = FUN_1003fcee8;
  DAT_101d3b120 = PTR_s_Buff_Joule_ThunderingStepsBonuse_10185c798;
  DAT_101d3b128 = FUN_1003fd01c;
  DAT_101d3b130 = PTR_s_Buff_Joule_Talent_BackupButton_10185ac10;
  DAT_101d3b138 = FUN_1003fd078;
  DAT_101d3b140 = PTR_s_Buff_Krul_HeroicPerk_GrantShadow_10185c7a0;
  DAT_101d3b148 = FUN_1003fd1e4;
  DAT_101d3b150 = PTR_s_Buff_Krul_HeroicPerk_ShadowsEmpo_10185c7a8;
  DAT_101d3b158 = FUN_1003fd348;
  DAT_101d3b160 = PTR_s_Buff_Krul_HeroicPerk_ShadowsEmpo_10185c7b0;
  DAT_101d3b168 = FUN_1003fd388;
  DAT_101d3b170 = PTR_s_Buff_Krul_HeroicPerk_ShadowsEmpo_10185c7b8;
  DAT_101d3b178 = FUN_1003fd50c;
  DAT_101d3b180 = PTR_s_Buff_Krul_DeadMansRush_Barrier_10185ace0;
  DAT_101d3b188 = FUN_1003fd55c;
  DAT_101d3b190 = PTR_s_Buff_Krul_Spectral_Smite_Debuf_10185acf0;
  DAT_101d3b198 = FUN_1003fd628;
  DAT_101d3b1a0 = PTR_s_Buff_Krul_AbilityPerk_Spectral_S_10185c7c0;
  DAT_101d3b1a8 = FUN_1003fd754;
  DAT_101d3b1b0 = PTR_s_Buff_Krul_Hellrazor_Slow_10185c7c8;
  DAT_101d3b1b8 = FUN_1003fd81c;
  DAT_101d3b1c0 = PTR_s_Buff_Krul_Hellrazor_SkillShotDam_10185c7d0;
  DAT_101d3b1c8 = FUN_1003fd874;
  DAT_101d3b1d0 = PTR_s_Buff_Krul_Withdraw_10185acf8;
  DAT_101d3b1d8 = FUN_1003fdb28;
  DAT_101d3b1e0 = PTR_s_Buff_Krul_Talent_HealingSmite_10185ace8;
  DAT_101d3b1e8 = FUN_1003fdbc0;
  DAT_101d3b1f0 = PTR_s_Buff_Krul_Talent_DeadMansBarrier_10185c7d8;
  DAT_101d3b1f8 = FUN_1003fdc30;
  DAT_101d3b200 = PTR_s_Buff_Krul_Talent_CursedBlade_10185c7e0;
  DAT_101d3b208 = FUN_1003fdcb8;
  DAT_101d3b210 = PTR_s_Buff_Skaarf_Burn_10185c7e8;
  DAT_101d3b218 = FUN_1003fdd38;
  DAT_101d3b220 = PTR_s_Buff_Skaarf_ShowReigniteHitEffec_10185c7f0;
  DAT_101d3b228 = FUN_1003fdee4;
  DAT_101d3b230 = PTR_s_Buff_Skaarf_Goop_10185c7f8;
  DAT_101d3b238 = FUN_1003fdf90;
  DAT_101d3b240 = PTR_s_Buff_Skaarf_GoopPool_10185c800;
  DAT_101d3b248 = FUN_1003fdfbc;
  DAT_101d3b250 = PTR_s_Buff_Skaarf_GoopPoolMark_10185c808;
  DAT_101d3b258 = FUN_1003fe0e8;
  DAT_101d3b260 = PTR_s_Buff_Skaarf_GoopPoolSlow_10185c810;
  DAT_101d3b268 = FUN_1003fe0ec;
  DAT_101d3b270 = PTR_s_Buff_Skaarf_GoopPoolOnFire_10185c818;
  DAT_101d3b278 = FUN_1003fe1c0;
  DAT_101d3b280 = PTR_s_Buff_Skaarf_GoopPoolBurningSlow_10185c820;
  DAT_101d3b288 = FUN_1003fe490;
  DAT_101d3b290 = PTR_s_Buff_Skaarf_Suck_10185b0a8;
  DAT_101d3b298 = FUN_1003fe518;
  DAT_101d3b2a0 = PTR_s_Buff_Skaarf_Blow_10185b0b0;
  DAT_101d3b2a8 = FUN_1003fe724;
  DAT_101d3b2b0 = PTR_s_Buff_Skaarf_Ult_FortifiedHealth_10185b0a0;
  DAT_101d3b2b8 = FUN_1003fe9cc;
  DAT_101d3b2c0 = PTR_s_Buff_Skaarf_Ult_SpeedBoost_10185c828;
  DAT_101d3b2c8 = FUN_1003fea7c;
  DAT_101d3b2d0 = PTR_s_Buff_Skaarf_Ult_Slow_10185c830;
  DAT_101d3b2d8 = FUN_1003feb04;
  DAT_101d3b2e0 = PTR_s_Buff_Skaarf_Blow_SpeedBoost_10185b0b8;
  DAT_101d3b2e8 = FUN_1003feb5c;
  DAT_101d3b2f0 = PTR_s_Buff_Skaarf_Talent_Splitfire_10185b090;
  DAT_101d3b2f8 = FUN_1003febc8;
  DAT_101d3b300 = PTR_s_Buff_Skaarf_Talent_Splitfire_Hit_10185c838;
  DAT_101d3b308 = FUN_1003febcc;
  DAT_101d3b310 = PTR_s_Buff_Skaarf_Talent_FlashFire_10185c840;
  DAT_101d3b318 = FUN_1003fec90;
  DAT_101d3b320 = PTR_s_Buff_Skaarf_Talent_FlamingSludge_10185c848;
  DAT_101d3b328 = FUN_1003fed34;
  DAT_101d3b330 = PTR_s_Buff_Taka_HeroicPerk_Ki_10185b108;
  DAT_101d3b338 = FUN_1003fedc0;
  DAT_101d3b340 = PTR_s_Buff_Taka_HeroicPerk_ShowMaxKiSt_10185c850;
  DAT_101d3b348 = FUN_1003ff004;
  DAT_101d3b350 = PTR_s_Buff_Taka_HeroicPerk_Ki_Control_10185c858;
  DAT_101d3b358 = FUN_1003ff124;
  DAT_101d3b360 = PTR_s_Buff_Taka_AssassinsAcceleration_10185b110;
  DAT_101d3b368 = FUN_1003ff210;
  DAT_101d3b370 = PTR_s_Buff_Taka_MortalWound_10185b130;
  DAT_101d3b378 = FUN_1003ff36c;
  DAT_101d3b380 = PTR_s_Buff_Taka_SpeedBoost_10185b118;
  DAT_101d3b388 = FUN_1003ff55c;
  DAT_101d3b390 = PTR_s_Buff_Taka_SmokeBombInvisibility_10185b128;
  DAT_101d3b398 = FUN_1003ff620;
  DAT_101d3b3a0 = PTR_s_Buff_Taka_Withdraw_10185b140;
  DAT_101d3b3a8 = FUN_1003ffb8c;
  DAT_101d3b3b0 = PTR_s_Buff_Taka_Talent_XXXRetsu_10185b138;
  DAT_101d3b3b8 = FUN_1003ffc50;
  DAT_101d3b3c0 = PTR_s_Buff_Taka_Talent_ProtectiveDecoy_10185c860;
  DAT_101d3b3c8 = FUN_1003ffcc0;
  DAT_101d3b3d0 = PTR_s_Buff_Taka_Talent_ProtectiveDecoy_10185c868;
  DAT_101d3b3d8 = FUN_1003ffe3c;
  DAT_101d3b3e0 = PTR_s_Buff_Taka_Talent_RangedKaiten_10185c870;
  DAT_101d3b3e8 = FUN_1003ffe60;
  DAT_101d3b3f0 = PTR_s_Buff_Ardan_HeroicPerk_StimArmor_10185c878;
  DAT_101d3b3f8 = FUN_1003fff94;
  DAT_101d3b400 = PTR_s_Buff_Ardan_HeroicPerk_ShowEffect_10185c880;
  DAT_101d3b408 = FUN_100400170;
  DAT_101d3b410 = PTR_s_Buff_Ardan_Arena_10185a370;
  DAT_101d3b418 = FUN_100400238;
  DAT_101d3b420 = PTR_s_Buff_Ardan_Arena_Stunned_10185a378;
  DAT_101d3b428 = FUN_1004008e0;
  DAT_101d3b430 = PTR_s_Buff_Ardan_Arena_StunImmune_10185a380;
  DAT_101d3b438 = FUN_100400948;
  DAT_101d3b440 = PTR_s_Buff_Ardan_Barrier_10185a350;
  DAT_101d3b448 = FUN_100400998;
  DAT_101d3b450 = PTR_s_Buff_Ardan_SpeedBoost_10185a348;
  DAT_101d3b458 = FUN_100400c50;
  DAT_101d3b460 = PTR_s_Buff_Ardan_A_Slow_10185a358;
  DAT_101d3b468 = FUN_100400cf0;
  DAT_101d3b470 = PTR_s_Buff_Ardan_Arena_WarningIndicato_10185a368;
  DAT_101d3b478 = FUN_100400d48;
  DAT_101d3b480 = PTR_s_Buff_Ardan_Talent_KnockoutPunch_10185a360;
  DAT_101d3b488 = FUN_100400e30;
  DAT_101d3b490 = PTR_s_Buff_Ardan_Talent_Vanguardian_10185c888;
  DAT_101d3b498 = FUN_100400f70;
  DAT_101d3b4a0 = PTR_s_Buff_Ardan_Talent_HeavyHitter_10185c890;
  DAT_101d3b4a8 = FUN_1004010b0;
  DAT_101d3b4b0 = PTR_s_Buff_CelesteStar_HeroicPerk_10185c898;
  DAT_101d3b4b8 = FUN_100401218;
  DAT_101d3b4c0 = PTR_s_Buff_Celeste_Star_10185c8a0;
  DAT_101d3b4c8 = FUN_100401274;
  DAT_101d3b4d0 = PTR_s_Buff_CelesteStar_RegularDamage_10185c8a8;
  DAT_101d3b4d8 = FUN_1004015b8;
  DAT_101d3b4e0 = PTR_s_Buff_CelesteStar_Supernova_10185c8b0;
  DAT_101d3b4e8 = FUN_100401670;
  DAT_101d3b4f0 = PTR_s_Buff_Celeste_HitByStar_10185c8b8;
  DAT_101d3b4f8 = FUN_1004017d0;
  DAT_101d3b500 = PTR_s_Buff_CelesteCore_Collapse_10185c8c0;
  DAT_101d3b508 = FUN_1004018c8;
  DAT_101d3b510 = PTR_s_Buff_Celeste_HitByCoreCollapse_10185c8c8;
  DAT_101d3b518 = FUN_100401ac0;
  DAT_101d3b520 = PTR_s_Buff_Celeste_DeathVFX_Control_10185c8d0;
  DAT_101d3b528 = FUN_100401ba8;
  DAT_101d3b530 = PTR_s_Buff_Celeste_DeathVFX_10185c8d8;
  DAT_101d3b538 = FUN_100401be0;
  DAT_101d3b540 = PTR_s_Buff_Celeste_Talent_CoreLeafClov_10185a568;
  DAT_101d3b548 = FUN_100401cc4;
  DAT_101d3b550 = PTR_s_Buff_Celeste_Talent_CoreLeafClov_10185c8e0;
  DAT_101d3b558 = FUN_100401d98;
  DAT_101d3b560 = PTR_s_Buff_Celeste_Talent_YoungStar_10185c8e8;
  DAT_101d3b568 = FUN_100401d9c;
  DAT_101d3b570 = PTR_s_Buff_Celeste_Talent_GalaxyCollap_10185c8f0;
  DAT_101d3b578 = FUN_100401da0;
  DAT_101d3b580 = PTR_s_Buff_Vox_HeroicPerk_10185c8f8;
  DAT_101d3b588 = FUN_100401e50;
  DAT_101d3b590 = PTR_s_Buff_Vox_SoundwaveSlow_10185c900;
  DAT_101d3b598 = FUN_100401f7c;
  DAT_101d3b5a0 = PTR_s_Buff_Vox_Resonance_10185b168;
  DAT_101d3b5a8 = FUN_100401fcc;
  DAT_101d3b5b0 = PTR_s_Buff_Vox_Resonance_Proc_10185c908;
  DAT_101d3b5b8 = FUN_1004020c8;
  DAT_101d3b5c0 = PTR_s_Buff_Vox_C_WaitForIt_10185b188;
  DAT_101d3b5c8 = FUN_10040226c;
  DAT_101d3b5d0 = PTR_s_Buff_Vox_Soundwave_10185b180;
  DAT_101d3b5d8 = FUN_1004022d4;
  DAT_101d3b5e0 = PTR_s_Buff_Vox_HitBySoundwave_10185c910;
  DAT_101d3b5e8 = FUN_1004024a4;
  DAT_101d3b5f0 = PTR_s_Buff_Vox_Talent_SoundBarrier_10185c918;
  DAT_101d3b5f8 = FUN_100402508;
  DAT_101d3b600 = PTR_s_Buff_Vox_SoundBarrier_Barrier_10185c920;
  DAT_101d3b608 = FUN_10040258c;
  DAT_101d3b610 = PTR_s_Buff_Vox_Talent_DeepDash_10185b160;
  DAT_101d3b618 = FUN_1004025dc;
  DAT_101d3b620 = PTR_s_Buff_Vox_Talent_EchoChamber_10185c928;
  DAT_101d3b628 = FUN_1004026f8;
  DAT_101d3b630 = PTR_s_Buff_Vox_EchoChamber_Bounce_10185c930;
  DAT_101d3b638 = FUN_1004026fc;
  DAT_101d3b640 = PTR_s_Buff_Fortress_Perk_NearbyPackmat_10185c938;
  DAT_101d3b648 = FUN_1004027bc;
  DAT_101d3b650 = PTR_s_Buff_Fortress_Prey_10185a6c0;
  DAT_101d3b658 = FUN_100402a38;
  DAT_101d3b660 = PTR_s_Buff_Fortress_C_Steroid_10185a6d0;
  DAT_101d3b668 = FUN_100402b64;
  DAT_101d3b670 = PTR_s_Buff_Fortress_Bleeding_10185a6c8;
  DAT_101d3b678 = FUN_100402f48;
  DAT_101d3b680 = PTR_s_Buff_Fortress_Rally_10185c940;
  DAT_101d3b688 = FUN_1004031ec;
  DAT_101d3b690 = PTR_s_Buff_Fortress_Slow_10185c948;
  DAT_101d3b698 = FUN_1004032f0;
  DAT_101d3b6a0 = DAT_10185a6f8;
  DAT_101d3b6a8 = FUN_100403360;
  DAT_101d3b6b0 = PTR_s_Buff_FortressMinion_Lifetime_10185a6e8;
  DAT_101d3b6b8 = FUN_1004033c4;
  DAT_101d3b6c0 = PTR_s_Buff_FortressMinion_SemiTickHeal_10185c950;
  DAT_101d3b6c8 = FUN_100403508;
  DAT_101d3b6d0 = PTR_s_Buff_FortressMinion_Stats_10185c958;
  DAT_101d3b6d8 = FUN_1004035bc;
  DAT_101d3b6e0 = PTR_s_Buff_Fortress_Talent_FlankAttack_10185c960;
  DAT_101d3b6e8 = FUN_1004037e0;
  DAT_101d3b6f0 = PTR_s_Buff_Fortress_Talent_CriticalWou_10185a6d8;
  DAT_101d3b6f8 = FUN_1004039ec;
  DAT_101d3b700 = PTR_s_Buff_Fortress_CriticalWoundsStac_10185a6e0;
  DAT_101d3b708 = FUN_100403ab0;
  DAT_101d3b710 = PTR_s_Buff_Fortress_CriticalWoundsWolf_10185a6f0;
  DAT_101d3b718 = FUN_100403b0c;
  DAT_101d3b720 = PTR_s_Buff_Fortress_Talent_Longtooth_10185a6b8;
  DAT_101d3b728 = FUN_100403b78;
  DAT_101d3b730 = PTR_s_Buff_Rona_UseRageInsteadOfEnergy_10185c968;
  DAT_101d3b738 = FUN_100403c28;
  DAT_101d3b740 = PTR_s_Buff_Rona_RupturedGroundDelay_10185c970;
  DAT_101d3b748 = FUN_100403dc8;
  DAT_101d3b750 = PTR_s_Buff_Rona_RupturedGround_10185c978;
  DAT_101d3b758 = FUN_100403f2c;
  DAT_101d3b760 = PTR_s_Buff_Rona_RupturedGround_Fortifi_10185c980;
  DAT_101d3b768 = FUN_100404238;
  DAT_101d3b770 = PTR_s_Buff_Rona_StandingOnRupturedGrou_10185c988;
  DAT_101d3b778 = FUN_1004042bc;
  DAT_101d3b780 = PTR_s_Buff_Rona_SecondHitAvailable_10185b008;
  DAT_101d3b788 = FUN_100404344;
  DAT_101d3b790 = PTR_s_Buff_Rona_Whirlwind_10185aff8;
  DAT_101d3b798 = FUN_100404500;
  DAT_101d3b7a0 = PTR_s_Buff_Rona_AttackFasterAfterSecon_10185b010;
  DAT_101d3b7a8 = FUN_100404c24;
  DAT_101d3b7b0 = PTR_s_Buff_Rona_Whirlwind_FortifiedHea_10185c990;
  DAT_101d3b7b8 = FUN_100404ca0;
  DAT_101d3b7c0 = PTR_s_Buff_Rona_Withdraw_10185b000;
  DAT_101d3b7c8 = FUN_100404d64;
  DAT_101d3b7d0 = PTR_s_Buff_Rona_Talent_FastWhirlwind_10185c998;
  DAT_101d3b7d8 = FUN_100404e30;
  DAT_101d3b7e0 = PTR_s_Buff_Rona_Talent_MOARRage_10185c9a0;
  DAT_101d3b7e8 = FUN_100404f70;
  DAT_101d3b7f0 = DAT_10185af90;
  DAT_101d3b7f8 = FUN_100405020;
  DAT_101d3b800 = PTR_s_Buff_Baron_Perk_RangeBonusContro_10185c9a8;
  DAT_101d3b808 = FUN_100405134;
  DAT_101d3b810 = PTR_s_Buff_Baron_Perk_A_AlternateTubes_10185a438;
  DAT_101d3b818 = FUN_1004051d4;
  DAT_101d3b820 = PTR_s_Buff_Baron_A_Warning_10185c9b0;
  DAT_101d3b828 = FUN_100405264;
  DAT_101d3b830 = PTR_s_Buff_Baron_A_Warning_Talent_10185c9b8;
  DAT_101d3b838 = FUN_100405324;
  DAT_101d3b840 = PTR_s_Buff_Baron_A_Slow_10185c9c0;
  DAT_101d3b848 = FUN_100405420;
  DAT_101d3b850 = PTR_s_Buff_Baron_B_Charging_10185a420;
  DAT_101d3b858 = FUN_100405518;
  DAT_101d3b860 = PTR_s_Buff_Baron_B_QuickAttackAvailabl_10185a428;
  DAT_101d3b868 = FUN_100405658;
  DAT_101d3b870 = PTR_s_Buff_Baron_B_OverdriveBlock_10185a450;
  DAT_101d3b878 = FUN_100405828;
  DAT_101d3b880 = PTR_s_Buff_Baron_C_Warning_AlliesOnly_10185c9c8;
  DAT_101d3b888 = FUN_10040584c;
  DAT_101d3b890 = PTR_s_Buff_Baron_C_Warning_Everybody_10185c9d0;
  DAT_101d3b898 = FUN_100405988;
  DAT_101d3b8a0 = PTR_s_Buff_Baron_PlaySpawnOrRespawnAni_10185c9d8;
  DAT_101d3b8a8 = FUN_100405cc0;
  DAT_101d3b8b0 = PTR_s_Buff_Baron_Talent_EndlessMortars_10185a440;
  DAT_101d3b8b8 = FUN_100405d4c;
  DAT_101d3b8c0 = PTR_s_Buff_Baron_Talent_TrionCannon_10185c9e0;
  DAT_101d3b8c8 = FUN_100405eb8;
  DAT_101d3b8d0 = PTR_s_Buff_Baron_Talent_TurboJets_10185a430;
  DAT_101d3bb30 = PTR_s_Buff_Reim_Talent_Revenant_Barrie_10185cac0;
  DAT_101d3bb40 = PTR_s_Buff_Kestrel_PerkShowHalcyonArro_10185cac8;
  DAT_101d3bb38 = FUN_10040895c;
  DAT_101d3bb48 = FUN_1004089ac;
  DAT_101d3bb50 = PTR_s_Buff_Kestrel_PerkAdrenalineContr_10185cad0;
  DAT_101d3bb58 = FUN_100408b04;
  DAT_101d3bb60 = PTR_s_Buff_Kestrel_Adrenaline_10185cad8;
  DAT_101d3bb68 = FUN_100408c58;
  DAT_101d3bb70 = PTR_s_Buff_Kestrel_PlayHalcyonArrowImp_10185cae0;
  DAT_101d3bb78 = FUN_100408d20;
  DAT_101d3bb80 = PTR_s_Buff_Kestrel_Reloading_10185ac38;
  DAT_101d3bb88 = FUN_100408dc4;
  DAT_101d3bb90 = PTR_s_Buff_Kestrel_PerkStealthDisableC_10185cae8;
  DAT_101d3bb98 = FUN_100408ee8;
  DAT_101d3bba0 = PTR_s_Buff_Kestrel_TrapPerk_Stealth_10185ac58;
  DAT_101d3bba8 = FUN_100408f5c;
  DAT_101d3bbb0 = PTR_s_Buff_Kestrel_TrapPerk_Arming_10185caf0;
  DAT_101d3bbb8 = FUN_100408f74;
  DAT_101d3bbc0 = PTR_s_Buff_Kestrel_Trap_Ready_10185ac60;
  DAT_101d3bbc8 = FUN_1004090d4;
  DAT_101d3bbd0 = PTR_s_Buff_Kestrel_Trap_Exploding_10185ac68;
  DAT_101d3bbd8 = FUN_10040914c;
  DAT_101d3bbe0 = PTR_s_Buff_Kestrel_Trap_Damage_10185ac70;
  DAT_101d3bbe8 = FUN_100409214;
  DAT_101d3bbf0 = PTR_s_Buff_Kestrel_CanTriggerTrap_10185caf8;
  DAT_101d3bbf8 = FUN_100409264;
  DAT_101d3bc00 = PTR_s_Buff_Kestrel_Stealth_10185ac40;
  DAT_101d3bc08 = FUN_1004092e4;
  DAT_101d3bc10 = PTR_s_Buff_Kestrel_C_ClientImpact_10185ac78;
  DAT_101d3bc18 = FUN_10040986c;
  DAT_101d3bc20 = PTR_s_Buff_Kestrel_C_ClientImpactTarge_10185ac80;
  DAT_101d3bc28 = FUN_100409918;
  DAT_101d3bc30 = PTR_s_Buff_Kestrel_Talent_PiercingShot_10185ac88;
  DAT_101d3bc38 = FUN_100409a48;
  DAT_101d3bc40 = PTR_s_Buff_Kestrel_Talent_GlimmerVolle_10185ac48;
  DAT_101d3bc48 = FUN_100409b1c;
  DAT_101d3bc50 = PTR_s_Buff_Kestrel_Talent_ActiveReload_10185ac50;
  DAT_101d3bc58 = FUN_100409c54;
  DAT_101d3bc60 = PTR_s_Buff_Alpha_Perk_Reboot_10185cb00;
  DAT_101d3bc68 = FUN_100409fac;
  DAT_101d3bc70 = PTR_s_Buff_Alpha_Rebooting_10185cb08;
  DAT_101d3bc78 = FUN_10040a1c4;
  DAT_101d3bc80 = PTR_s_Buff_Alpha_Reboot_Cooldown_10185cb10;
  DAT_101d3bc88 = FUN_10040a480;
  DAT_101d3bc90 = PTR_s_Buff_Alpha_Perk_AbilityCDROnDefA_10185cb18;
  DAT_101d3bc98 = FUN_10040a68c;
  DAT_101d3bca0 = PTR_s_Buff_Alpha_SelfDestruct_10185a290;
  DAT_101d3bca8 = FUN_10040a6f4;
  DAT_101d3bcb0 = PTR_s_Buff_Alpha_A_Slow_10185cb20;
  DAT_101d3bcb8 = FUN_10040a9f0;
  DAT_101d3bcc0 = PTR_s_Buff_Alpha_SelfDestruct_SelfSpee_10185cb28;
  DAT_101d3bcc8 = FUN_10040aa2c;
  DAT_101d3bcd0 = PTR_s_Buff_Alpha_SelfDestruct_SelfSlow_10185cb30;
  DAT_101d3bcd8 = FUN_10040abb0;
  DAT_101d3bce0 = PTR_s_Buff_Alpha_B_Stacks_Buff_10185a288;
  DAT_101d3bce8 = FUN_10040abec;
  DAT_101d3bcf0 = PTR_s_Buff_Alpha_B_Stacks_Debuff_10185a280;
  DAT_101d3bcf8 = FUN_10040ae2c;
  DAT_101d3bd00 = PTR_s_Buff_Alpha_Dash_Shot_Lock_10185a260;
  DAT_101d3bd08 = FUN_10040b030;
  DAT_101d3bd10 = PTR_s_Buff_Alpha_ThrusterPfx_10185a268;
  DAT_101d3bd18 = FUN_10040b048;
  DAT_101d3bd20 = DAT_10185a298;
  DAT_101d3bd28 = FUN_10040b15c;
  DAT_101d3bd30 = PTR_s_Buff_Alpha_Talent_Acceleration_10185cb38;
  DAT_101d3bd38 = FUN_10040b2cc;
  DAT_101d3bd40 = PTR_s_Buff_Alpha_Talent_PrimeTime_10185a270;
  DAT_101d3bd48 = FUN_10040b3a0;
  DAT_101d3bd50 = PTR_s_Buff_Alpha_Talent_PrimeTimeForti_10185a278;
  DAT_101d3bd58 = FUN_10040b420;
  DAT_101d3bd60 = PTR_s_Buff_Alpha_Talent_CoreOverclock_10185cb40;
  DAT_101d3bd68 = FUN_10040b46c;
  DAT_101d3bd70 = PTR_s_Buff_Lyra_Perk_RangeBonusControl_10185cb48;
  DAT_101d3bd78 = FUN_10040b4bc;
  DAT_101d3bd80 = PTR_s_Buff_Lyra_HeavyAttackSlow_10185cb50;
  DAT_101d3bd88 = FUN_10040b55c;
  DAT_101d3bd90 = PTR_s_Buff_Lyra_PortalForming_10185cb58;
  DAT_101d3bd98 = FUN_10040b598;
  DAT_101d3bda0 = PTR_s_Buff_Lyra_Portal_10185cb60;
  DAT_101d3bda8 = FUN_10040b6c4;
  DAT_101d3bdb0 = PTR_s_Buff_Lyra_PortalRecentlyUsed_10185adc8;
  DAT_101d3bdb8 = FUN_10040bd24;
  DAT_101d3bdc0 = PTR_s_Buff_Lyra_PortalAntiSnipe_10185cb68;
  DAT_101d3bdc8 = FUN_10040bd50;
  DAT_101d3bdd0 = PTR_s_Buff_Lyra_PortalSpeedBoost_10185add0;
  DAT_101d3bdd8 = FUN_10040bdd0;
  DAT_101d3bde0 = PTR_s_Buff_Lyra_PortalExitAnimOverride_10185add8;
  DAT_101d3bde8 = FUN_10040be0c;
  DAT_101d3bdf0 = PTR_s_Buff_Lyra_Snare_10185cb70;
  DAT_101d3bdf8 = FUN_10040be94;
  DAT_101d3be00 = PTR_s_Buff_Lyra_Bulwark_10185cb78;
  DAT_101d3be08 = FUN_10040c004;
  DAT_101d3be10 = PTR_s_Buff_Lyra_WallSlow_10185adb8;
  DAT_101d3be18 = FUN_10040c710;
  DAT_101d3be20 = PTR_s_Buff_Lyra_ImmuneToWall_10185adc0;
  DAT_101d3be28 = FUN_10040c7c4;
  DAT_101d3be30 = PTR_s_Buff_Lyra_SpiritFlame_10185adb0;
  DAT_101d3be38 = FUN_10040c814;
  DAT_101d3be40 = PTR_s_Buff_Lyra_SpiritFlame_SpeedBoost_10185cb80;
  DAT_101d3be48 = FUN_10040cd84;
  DAT_101d3be50 = PTR_s_Buff_Lyra_SpiritFlame_Heal_10185cb88;
  DAT_101d3be58 = FUN_10040cdf0;
  DAT_101d3be60 = PTR_s_Buff_Lyra_SpiritFlame_Harm_10185cb90;
  DAT_101d3be68 = FUN_10040cefc;
  DAT_101d3be70 = PTR_s_Buff_Lyra_SpiritFlame_DetonateAv_10185cb98;
  DAT_101d3be78 = FUN_10040d008;
  DAT_101d3be80 = PTR_s_Buff_Lyra_Talent_MobileBulwark_10185cba0;
  DAT_101d3be88 = FUN_10040d060;
  DAT_101d3be90 = PTR_s_Buff_Lyra_Talent_TwinMissiles_10185ada8;
  DAT_101d3be98 = FUN_10040d0d0;
  DAT_101d3bea0 = PTR_s_Buff_Lyra_Talent_GythianWard_10185cba8;
  DAT_101d3bea8 = FUN_10040d140;
  DAT_101d3beb0 = PTR_s_Buff_Lyra_Talent_WardBarrier_10185cbb0;
  DAT_101d3beb8 = FUN_10040d144;
  DAT_101d3bec0 = PTR_s_Buff_Samuel_EmpoweredAttackCharg_10185cbb8;
  DAT_101d3bec8 = FUN_10040d234;
  DAT_101d3bed0 = PTR_s_Buff_Samuel_EmpoweredAttackAvail_10185b020;
  DAT_101d3bed8 = FUN_10040d2a4;
  DAT_101d3bee0 = PTR_s_Buff_Samuel_PlayHitByEmpoweredAt_10185b018;
  DAT_101d3bee8 = FUN_10040d53c;
  DAT_101d3bef0 = PTR_s_Buff_Samuel_A_SpeedBoost_10185b030;
  DAT_101d3bef8 = FUN_10040d62c;
  DAT_101d3bf00 = PTR_s_Buff_Samuel_A_Strafing_10185b028;
  DAT_101d3bf08 = FUN_10040d664;
  DAT_101d3bf10 = PTR_s_Buff_Samuel_B_DarkFieldForming_10185b038;
  DAT_101d3bf18 = FUN_10040d6c0;
  DAT_101d3bf20 = PTR_s_Buff_Samuel_B_DarkField_10185cbc0;
  DAT_101d3bf28 = FUN_10040d8ac;
  DAT_101d3bf30 = PTR_s_Buff_Samuel_B_StandingInDarkFiel_10185cbc8;
  DAT_101d3bf38 = FUN_10040dcdc;
  DAT_101d3bf40 = PTR_s_Buff_Samuel_B_PlayDamageSfx_10185cbd0;
  DAT_101d3bf48 = FUN_10040dd78;
  DAT_101d3bf50 = PTR_s_Buff_Samuel_C_NightmareShotWarni_10185cbd8;
  DAT_101d3bf58 = FUN_10040ddf4;
  DAT_101d3bf60 = PTR_s_Buff_Samuel_C_Nightmare_10185cbe0;
  DAT_101d3bf68 = FUN_10040deec;
  DAT_101d3bf70 = PTR_s_Buff_Samuel_Talent_UnwakingNight_10185cbe8;
  DAT_101d3bf78 = FUN_10040e0e4;
  DAT_101d3bf80 = PTR_s_Buff_Samuel_Talent_PowerSiphon_10185cbf0;
  DAT_101d3bf88 = FUN_10040e164;
  DAT_101d3bf90 = PTR_s_Buff_Samuel_Talent_ViscousDarkne_10185cbf8;
  DAT_101d3bf98 = FUN_10040e168;
  DAT_101d3bfa0 = PTR_s_Buff_Ozo_PerkGrantHealAmp_10185cc00;
  DAT_101d3bfa8 = FUN_10040e16c;
  DAT_101d3bfb0 = PTR_s_Buff_Ozo_HealAmp_10185cc08;
  DAT_101d3bfb8 = FUN_10040e234;
  DAT_101d3bfc0 = PTR_s_Buff_Ozo_A2_Available_10185ae38;
  DAT_101d3bfc8 = FUN_10040e368;
  DAT_101d3bfd0 = PTR_s_Buff_Ozo_A3_Available_10185ae40;
  DAT_101d3bfd8 = FUN_10040e3c0;
  DAT_101d3bfe0 = PTR_s_Buff_Ozo_BounceTarget_10185ae80;
  DAT_101d3bfe8 = FUN_10040e418;
  DAT_101d3bff0 = PTR_s_Buff_Ozo_BounceAvailable_10185ae78;
  DAT_101d3bff8 = FUN_10040e41c;
  DAT_101d3c000 = PTR_s_Buff_Ozo_BounceQueued_10185ae60;
  DAT_101d3c008 = FUN_10040e56c;
  DAT_101d3c010 = PTR_s_Buff_Ozo_AcrobounceFortifiedHeal_10185ae58;
  DAT_101d3c018 = FUN_10040e598;
  DAT_101d3c020 = PTR_s_Buff_Ozo_NextBounceTarget_10185ae68;
  DAT_101d3c028 = FUN_10040e654;
  DAT_101d3c030 = PTR_s_Buff_Ozo_FinalBounceTarget_10185ae88;
  DAT_101d3c038 = FUN_10040e78c;
  DAT_101d3c040 = PTR_s_Buff_Ozo_PriorBounces_10185ae48;
  DAT_101d3c048 = FUN_10040e790;
  DAT_101d3c050 = PTR_s_Buff_Ozo_BounceSlow_10185ae70;
  DAT_101d3c058 = FUN_10040e7bc;
  DAT_101d3c060 = PTR_s_Buff_Ozo_BounceSpeed_10185ae90;
  DAT_101d3c068 = FUN_10040e7f8;
  DAT_101d3c070 = PTR_s_Buff_Ozo_Rolling_10185ae30;
  DAT_101d3c078 = FUN_10040e834;
  DAT_101d3c080 = PTR_s_Buff_Ozo_RollPrimaryTarget_10185ae98;
  DAT_101d3c088 = FUN_10040e91c;
  DAT_101d3c090 = PTR_s_Buff_Ozo_Talent_RingLeader_10185ae28;
  DAT_101d3c098 = FUN_10040e994;
  DAT_101d3c0a0 = PTR_s_Buff_Ozo_Talent_SecondWind_10185ae50;
  DAT_101d3c0a8 = FUN_10040e998;
  DAT_101d3c0b0 = PTR_s_Buff_Ozo_Talent_Bangarangarang_10185cc10;
  DAT_101d3c0b8 = FUN_10040e99c;
  DAT_101d3c0c0 = PTR_s_Buff_Lance_Perk_Stamina_10185cc18;
  DAT_101d3c0c8 = FUN_10040ebb0;
  DAT_101d3c0d0 = PTR_s_Buff_Lance_PauseStaminaRegen_10185ad58;
  DAT_101d3c0d8 = FUN_10040ecd0;
  DAT_101d3c0e0 = PTR_s_Buff_Lance_EmpoweredAutoattackAv_10185ad08;
  DAT_101d3c0e8 = FUN_10040ecfc;
  DAT_101d3c0f0 = PTR_s_Buff_Lance_Recovery_10185ad68;
  DAT_101d3c0f8 = FUN_10040ed8c;
  DAT_101d3c100 = PTR_s_Buff_Lance_Guard_10185ad80;
  DAT_101d3c108 = FUN_10040ee38;
  DAT_101d3c110 = PTR_s_Buff_Lance_GuardOverdrive_10185cc20;
  DAT_101d3c118 = FUN_10040f208;
  DAT_101d3c120 = PTR_s_Buff_Lance_PlayGuardImpactPfx_10185cc28;
  DAT_101d3c128 = FUN_10040f22c;
  DAT_101d3c130 = PTR_s_Buff_Lance_PlayAutoAttackImpactP_10185ad30;
  DAT_101d3c138 = FUN_10040f2e4;
  DAT_101d3c140 = PTR_s_Buff_Lance_PlayCritAttackImpactP_10185ad38;
  DAT_101d3c148 = FUN_10040f338;
  DAT_101d3c150 = PTR_s_Buff_Lance_PlayEmpoweredAutoAtta_10185ad48;
  DAT_101d3c158 = FUN_10040f38c;
  DAT_101d3c160 = PTR_s_Buff_Lance_CircleStrafing_10185ad00;
  DAT_101d3c168 = FUN_10040f3e0;
  DAT_101d3c170 = PTR_s_Buff_Lance_Immobilize_10185ad60;
  DAT_101d3c178 = FUN_10040f5ac;
  DAT_101d3c180 = PTR_s_Buff_Lance_PlayBImpactPfx_10185ad70;
  DAT_101d3c188 = FUN_10040f5c0;
  DAT_101d3c190 = PTR_s_Buff_Lance_B_StunPending_10185ad78;
  DAT_101d3c198 = FUN_10040f610;
  DAT_101d3c1a0 = PTR_s_Buff_Lance_A_LandingIndicator_10185cc30;
  DAT_101d3c1a8 = FUN_10040f6ec;
  DAT_101d3c1b0 = PTR_s_Buff_Lance_Withdraw_10185ad98;
  DAT_101d3c1b8 = FUN_10040f734;
  DAT_101d3c1c0 = DAT_10185ad10;
  DAT_101d3c1c8 = FUN_10040f848;
  DAT_101d3c1d0 = PTR_s_Buff_Lance_Talent_ReinforcedWall_10185cc38;
  DAT_101d3c1d8 = FUN_10040f8f4;
  DAT_101d3c1e0 = PTR_s_Buff_Lance_ReinforcedWalls_Barri_10185cc40;
  DAT_101d3c1e8 = FUN_10040f974;
  DAT_101d3c1f0 = PTR_s_Buff_Lance_Talent_Rollout_10185ad88;
  DAT_101d3c1f8 = FUN_10040fa2c;
  DAT_101d3c200 = PTR_s_Buff_Lance_Rollout_Projectile_10185ad90;
  DAT_101d3c208 = FUN_10040fb2c;
  DAT_101d3c210 = PTR_s_Buff_Phinn_Perk_ResistCC_10185cc48;
  DAT_101d3c218 = FUN_10040fb60;
  DAT_101d3c220 = PTR_s_Buff_Phinn_ResistCC_SlowedInstea_10185cc50;
  DAT_101d3c228 = FUN_10040fbfc;
  DAT_101d3c230 = PTR_s_Buff_Phinn_GroundSlamSlow_10185a668;
  DAT_101d3c238 = FUN_10040fc5c;
  DAT_101d3c240 = PTR_s_Buff_Phinn_Perk_DefenseBonus_Bas_10185cc58;
  DAT_101d3c248 = FUN_10040fc90;
  DAT_101d3c250 = PTR_s_Buff_Phinn_Perk_DefenseBonus_Per_10185cc60;
  DAT_101d3c258 = FUN_10040fe14;
  DAT_101d3c260 = PTR_s_Buff_Phinn_PoliteCompany_Fortifi_10185a690;
  DAT_101d3c268 = FUN_10040ff00;
  DAT_101d3c270 = PTR_s_Buff_Phinn_WhiffedWithPull_10185a6a0;
  DAT_101d3c278 = FUN_10041013c;
  DAT_101d3c280 = PTR_s_Buff_Phinn_Talent_Phaster_10185a680;
  DAT_101d3c288 = FUN_100410198;
  DAT_101d3c290 = PTR_s_Buff_Phinn_Talent_Phaster_AllyBu_10185a688;
  DAT_101d3c298 = FUN_10041019c;
  DAT_101d3c2a0 = PTR_s_Buff_Phinn_Talent_RaidBoss_10185cc68;
  DAT_101d3c2a8 = FUN_1004101a0;
  DAT_101d3c2b0 = PTR_s_Buff_Phinn_Talent_FriendlyCavil_10185a698;
  DAT_101d3c2b8 = FUN_100410238;
  DAT_101d3c2c0 = PTR_s_Buff_Blackfeather_Perk_UseFocus_10185cc70;
  DAT_101d3c2c8 = FUN_10041043c;
  DAT_101d3c2d0 = PTR_s_Buff_Blackfeather_A_ImpactEffect_10185a4f8;
  DAT_101d3c2d8 = FUN_100410568;
  DAT_101d3c2e0 = DAT_10185a4b8;
  DAT_101d3c2e8 = FUN_1004105c4;
  DAT_101d3c2f0 = PTR_s_Buff_Blackfeather_SlashBarrier_10185a518;
  DAT_101d3c2f8 = FUN_100410764;
  DAT_101d3c300 = PTR_s_Buff_Blackfeather_GrantLungeRese_10185a4f0;
  DAT_101d3c308 = FUN_1004108a0;
  DAT_101d3c310 = PTR_s_Buff_Blackfeather_LungeReset_10185cc78;
  DAT_101d3c318 = FUN_100410a10;
  DAT_101d3c320 = PTR_s_Buff_Blackfeather_HitByRoseOffen_10185cc80;
  DAT_101d3c328 = FUN_100410b44;
  DAT_101d3d000 = PTR_s_Buff_Kensei_DefaultAttack_Effect_10185b2e0;
  DAT_101d3cff0 = PTR_s_Buff_Kensei_PassiveBehaviors_Bar_10185cf90;
  DAT_101d3cff8 = FUN_10041cb44;
  DAT_101d3cfe0 = PTR_s_Buff_Kensei_PassiveBehaviors_Pay_10185cf88;
  DAT_101d3cfe8 = FUN_10041c9a8;
  DAT_101d3cfd0 = PTR_s_Buff_Kensei_PassiveBehaviors_Con_10185cf80;
  DAT_101d3cfd8 = FUN_10041c7f0;
  DAT_101d3cfc0 = PTR_s_Buff_Ylva_Talent_TalentC_10185cf78;
  DAT_101d3cfc8 = FUN_10041c688;
  DAT_101d3cfb0 = PTR_s_Buff_Ylva_Talent_TalentB_10185b338;
  DAT_101d3cfb8 = FUN_10041c468;
  DAT_101d3cfa0 = PTR_s_Buff_Ylva_Talent_TalentA_10185cf70;
  DAT_101d3cfa8 = FUN_10041c320;
  DAT_101d3cf90 = PTR_s_Buff_Ylva_C_Trap_CaughtSomeoneRe_10185cf68;
  DAT_101d3cf98 = FUN_10041c2f4;
  DAT_101d3cf80 = PTR_s_Buff_Ylva_C_Trap_Damage_10185b348;
  DAT_101d3cf88 = FUN_10041c298;
  DAT_101d3cf70 = PTR_s_Buff_Ylva_C_Trap_Root_10185b340;
  DAT_101d3cf78 = FUN_10041c1c8;
  DAT_101d3cf60 = PTR_s_Buff_Ylva_C_Trap_Disarmed_10185b350;
  DAT_101d3cf68 = FUN_10041c158;
  DAT_101d3cf50 = PTR_s_Buff_Ylva_C_Trap_Armed_10185cf60;
  DAT_101d3cf58 = FUN_10041bf8c;
  DAT_101d3cf40 = PTR_s_Buff_Ylva_C_Trap_Arming_10185cf58;
  DAT_101d3cf48 = FUN_10041bf14;
  DAT_101d3cf30 = PTR_s_Buff_Ylva_C_Trap_10185cf50;
  DAT_101d3cf38 = FUN_10041bce8;
  DAT_101d3cf20 = PTR_s_Buff_Ylva_B_Adrenaline_10185b330;
  DAT_101d3cf28 = FUN_10041bc20;
  DAT_101d3cf10 = PTR_s_Buff_Ylva_A_Charged_10185cf48;
  DAT_101d3cf18 = FUN_10041bb14;
  DAT_101d3cf00 = PTR_s_Buff_Ylva_A_Charging_10185cf40;
  DAT_101d3cf08 = FUN_10041ba14;
  DAT_101d3cef0 = PTR_s_Buff_Ylva_A_Charge_Control_10185b328;
  DAT_101d3cef8 = FUN_10041b688;
  DAT_101d3cee0 = PTR_s_Buff_Ylva_Perk_Detected_10185cf38;
  DAT_101d3cee8 = FUN_10041b614;
  DAT_101d3ced0 = PTR_s_Buff_Ylva_Perk_10185cf30;
  DAT_101d3ced8 = FUN_10041b548;
  DAT_101d3cec0 = PTR_s_Buff_HeroPLU_SmokeCloud_10185cf28;
  DAT_101d3cec8 = FUN_10041b3b0;
  DAT_101d3ceb0 = PTR_s_Buff_HeroPLU_HelicopterSpinPerk_10185cf20;
  DAT_101d3ceb8 = FUN_10041b3ac;
  DAT_101d3cea0 = PTR_s_Buff_HeroPLU_RecoveryDebrisSwap_10185cf18;
  DAT_101d3cea8 = FUN_10041b35c;
  DAT_101d3ce90 = PTR_s_Buff_HeroPLU_EngineOverheatRegul_10185b1a8;
  DAT_101d3ce98 = FUN_10041b1d8;
  DAT_101d3ce80 = PTR_s_Buff_HeroPLU_A_Empowered_10185cf10;
  DAT_101d3ce88 = FUN_10041b1ac;
  DAT_101d3ce70 = PTR_s_Buff_HeroPLU_EngineRecovery_10185b1a0;
  DAT_101d3ce78 = FUN_10041b060;
  DAT_101d3ce60 = PTR_s_Buff_HeroPLU_EngineSelfExplosion_10185cf08;
  DAT_101d3ce68 = FUN_10041b034;
  DAT_101d3ce50 = PTR_s_Buff_HeroPLU_EngineOverheat_10185b198;
  DAT_101d3ce58 = FUN_10041ad8c;
  DAT_101d3ce40 = PTR_s_Buff_HeroPLU_SmokeCloudEnemyDebu_10185cf00;
  DAT_101d3ce48 = FUN_10041ad44;
  DAT_101d3ce30 = PTR_s_Buff_HeroPLU_SmokeCloudSelfBuff_10185cef8;
  DAT_101d3ce38 = FUN_10041ac94;
  DAT_101d3ce20 = PTR_s_Buff_HeroPLU_EngineStacks_10185b190;
  DAT_101d3ce28 = FUN_10041a9fc;
  DAT_101d3ce10 = PTR_s_Buff_HeroPLU_TempNonRecoveryHeli_10185cef0;
  DAT_101d3ce18 = FUN_10041a848;
  DAT_101d3ce00 = PTR_s_Buff_HeroPLU_HeroicPerk_BrokenEn_10185cee8;
  DAT_101d3ce08 = FUN_10041a600;
  DAT_101d3cdf0 = PTR_s_Buff_Malene_Talent_TalentC_10185cee0;
  DAT_101d3cdf8 = FUN_10041a530;
  DAT_101d3cde0 = PTR_s_Buff_Malene_Talent_TalentB_10185ced8;
  DAT_101d3cde8 = FUN_10041a4c0;
  DAT_101d3cdd0 = PTR_s_Buff_Malene_Talent_TalentA_10185ae00;
  DAT_101d3cdd8 = FUN_10041a334;
  DAT_101d3cdc0 = PTR_s_Buff_Malene_B2_ShadowBurstSelf_10185ae08;
  DAT_101d3cdc8 = FUN_10041a278;
  DAT_101d3cdb0 = PTR_s_Buff_Malene_B2_ShadowBurst_10185ced0;
  DAT_101d3cdb8 = FUN_10041a14c;
  DAT_101d3cda0 = PTR_s_Buff_Malene_B2_ShadowSlow_10185cec8;
  DAT_101d3cda8 = FUN_10041a118;
  DAT_101d3c5a0 = PTR_s_Buff_Idris_PostAbilityBonuses_10185aab0;
  DAT_101d3c5a8 = FUN_1004137a0;
  DAT_101d3c590 = PTR_s_Buff_Idris_Perk_HybridPath_10185cd38;
  DAT_101d3c598 = FUN_10041364c;
  DAT_101d3c580 = PTR_s_Buff_Idris_Perk_CrystalPath_10185cd30;
  DAT_101d3c588 = FUN_100413574;
  DAT_101d3c570 = PTR_s_Buff_Idris_Perk_WeaponPath_10185cd28;
  DAT_101d3c578 = FUN_1004134dc;
  DAT_101d3c560 = PTR_s_Buff_Idris_Perk_PathHandler_10185cd20;
  DAT_101d3c568 = FUN_10041342c;
  DAT_101d3c550 = PTR_s_Buff_Idris_StaminaPaused_10185aaa8;
  DAT_101d3c558 = FUN_100413400;
  DAT_101d3c540 = PTR_s_Buff_Idris_Stamina_10185cd18;
  DAT_101d3c548 = FUN_1004132e0;
  DAT_101d3c530 = PTR_s_Buff_Idris_DontCatch_10185aaa0;
  DAT_101d3c538 = FUN_1004132c8;
  DAT_101d3c520 = PTR_s_Buff_Idris_PassiveBehaviors_10185cd10;
  DAT_101d3c528 = FUN_1004131e8;
  DAT_101d3c510 = PTR_s_Buff_Gwen_Talent_ThreeOfAKind_10185a8a8;
  DAT_101d3c518 = FUN_1004130a8;
  DAT_101d3c500 = PTR_s_Buff_Gwen_Talent_SpeedLoader_10185a8a0;
  DAT_101d3c508 = FUN_100412f64;
  DAT_101d3c4f0 = PTR_s_Buff_Gwen_Talent_Skedaddling_10185a888;
  DAT_101d3c4f8 = FUN_100412e44;
  DAT_101d3c4e0 = PTR_s_Buff_Gwen_B_ActiveSpeed_10185a898;
  DAT_101d3c4e8 = FUN_100412dc4;
  DAT_101d3c4d0 = PTR_s_Buff_Gwen_B_Travel_10185cd08;
  DAT_101d3c4d8 = FUN_100412d5c;
  DAT_101d3c4c0 = PTR_s_Buff_Gwen_Travel_10185cd00;
  DAT_101d3c4c8 = FUN_100412b60;
  DAT_101d3c4b0 = PTR_s_Buff_Gwen_SelfCleanse_10185a890;
  DAT_101d3c4b8 = FUN_100412a78;
  DAT_101d3c4a0 = PTR_s_Buff_Gwen_Slow_10185a870;
  DAT_101d3c4a8 = FUN_100412a3c;
  DAT_101d3c490 = PTR_s_Buff_Gwen_PerkReady_10185a868;
  DAT_101d3c498 = FUN_100412968;
  DAT_101d3c480 = PTR_s_Buff_Gwen_PerkTimer_10185a860;
  DAT_101d3c488 = FUN_1004128e4;
  DAT_101d3c470 = PTR_s_Buff_Gwen_PerkPassive_10185ccf8;
  DAT_101d3c478 = FUN_100412880;
  DAT_101d3c460 = PTR_s_Buff_Flicker_Talent_FairyHealing_10185ccf0;
  DAT_101d3c468 = FUN_100412810;
  DAT_101d3c450 = PTR_s_Buff_Flicker_Talent_SwarmingLigh_10185cce8;
  DAT_101d3c458 = FUN_1004125fc;
  DAT_101d3c440 = PTR_s_Buff_Flicker_Talent_BindingDust_10185cce0;
  DAT_101d3c448 = FUN_10041258c;
  DAT_101d3c430 = PTR_s_Buff_Flicker_C_Stealth_10185ccd8;
  DAT_101d3c438 = FUN_1004121a4;
  DAT_101d3c420 = PTR_s_Buff_Flicker_C_Warning_10185ccd0;
  DAT_101d3c428 = FUN_100411f4c;
  DAT_101d3c410 = PTR_s_Buff_Flicker_C_Control_10185a6b0;
  DAT_101d3c418 = FUN_100411ec4;
  DAT_101d3c400 = PTR_s_Buff_Flicker_B_Slow_10185ccc8;
  DAT_101d3c408 = FUN_100411e6c;
  DAT_101d3c3f0 = PTR_s_Buff_Flicker_B_Field_10185a6a8;
  DAT_101d3c3f8 = FUN_100411b08;
  DAT_101d3c3e0 = PTR_s_Buff_Flicker_A_Immobilize_10185ccc0;
  DAT_101d3c3e8 = FUN_100411a84;
  DAT_101d3c3d0 = PTR_s_Buff_Flicker_A_FairyTrap_10185ccb8;
  DAT_101d3c3d8 = FUN_1004117a0;
  DAT_101d3c3c0 = PTR_s_Buff_Flicker_BrushStealth_10185ccb0;
  DAT_101d3c3c8 = FUN_1004112e8;
  DAT_101d3c3b0 = PTR_s_Buff_Flicker_BrushStealth_Chargi_10185cca8;
  DAT_101d3c3b8 = FUN_1004112e4;
  DAT_101d3c3a0 = PTR_s_Buff_Flicker_BrushStealth_Chargi_10185cca0;
  DAT_101d3c3a8 = FUN_1004110e8;
  DAT_101d3c390 = PTR_s_Buff_Flicker_Perk_BrushStealth_C_10185cc98;
  DAT_101d3c398 = FUN_100411040;
  DAT_101d3c380 = PTR_s_Buff_Blackfeather_Talent_Elusive_10185cc90;
  DAT_101d3c388 = FUN_100410e94;
  DAT_101d3c370 = PTR_s_Buff_Blackfeather_Talent_Humming_10185cc88;
  DAT_101d3c378 = FUN_100410d4c;
  DAT_101d3c360 = PTR_s_Buff_Blackfeather_Talent_PointGu_10185a508;
  DAT_101d3c368 = FUN_100410d48;
  DAT_101d3c350 = PTR_s_Buff_Blackfeather_MoveSpeedAfter_10185a538;
  DAT_101d3c358 = FUN_100410d0c;
  DAT_101d3c340 = PTR_s_Buff_Blackfeather_SpeedBoost_10185a500;
  DAT_101d3c348 = FUN_100410cd0;
  DAT_101d3c330 = PTR_s_Buff_Blackfeather_UltBonusDefens_10185a520;
  DAT_101d3c338 = FUN_100410c6c;
  DAT_101d3c5b0 = PTR_s_Buff_Idris_A_BarrierLockout_10185cd40;
  DAT_101d3c5b8 = FUN_100413820;
  DAT_101d3c5c0 = PTR_s_Buff_Idris_A_Barrier_10185aa98;
  DAT_101d3c5c8 = FUN_100413870;
  DAT_101d3c5d0 = PTR_s_Buff_Idris_A_EmpoweredAttackAvai_10185aa88;
  DAT_101d3c5d8 = FUN_1004138e8;
  DAT_101d3c5e0 = PTR_s_Buff_Idris_A_EmpoweredChakramAva_10185aa90;
  DAT_101d3c5e8 = FUN_100413974;
  DAT_101d3c5f0 = PTR_s_Buff_Idris_B_ChakramImpact_10185cd48;
  DAT_101d3c5f8 = FUN_100413978;
  DAT_101d3c600 = PTR_s_Buff_Idris_C_AttachmentHandler_10185aad0;
  DAT_101d3c608 = FUN_100413a28;
  DAT_101d3c610 = PTR_s_Buff_Idris_C_AttachedEnemy_10185aac8;
  DAT_101d3c618 = FUN_100413b98;
  DAT_101d3c620 = PTR_s_Buff_Idris_C_AttachedAlly_10185aac0;
  DAT_101d3c628 = FUN_100413cec;
  DAT_101d3c630 = PTR_s_Buff_Idris_C_Attached_10185aad8;
  DAT_101d3c638 = FUN_100413e30;
  DAT_101d3c640 = PTR_s_Buff_Idris_C_AttachedLeapModal_10185aae0;
  DAT_101d3c648 = FUN_100413fe0;
  DAT_101d3c650 = PTR_s_Buff_Idris_Withdraw_10185aae8;
  DAT_101d3c658 = FUN_100414034;
  DAT_101d3c660 = PTR_s_Buff_Idris_Talent_ChaChaChakram_10185aab8;
  DAT_101d3c668 = FUN_100414094;
  DAT_101d3c670 = PTR_s_Buff_Idris_Talent_ShimmerHeal_10185cd50;
  DAT_101d3c678 = FUN_1004141d4;
  DAT_101d3c680 = PTR_s_Buff_Idris_Talent_PathOfTheSeeke_10185cd58;
  DAT_101d3c688 = FUN_1004142a8;
  DAT_101d3c690 = PTR_s_Buff_Churnwalker_ChainTether_10185a8d0;
  DAT_101d3c698 = FUN_100414358;
  DAT_101d3c6a0 = PTR_s_Buff_Churnwalker_ChainTetherSelf_10185a8b8;
  DAT_101d3c6a8 = FUN_10041487c;
  DAT_101d3c6b0 = PTR_s_Buff_Churnwalker_ChainTetherPull_10185a8d8;
  DAT_101d3c6b8 = FUN_10041493c;
  DAT_101d3c6c0 = PTR_s_Buff_Churnwalker_MonsterStub_10185cd60;
  DAT_101d3c6c8 = FUN_100414954;
  DAT_101d3c6d0 = PTR_s_Buff_Churnwalker_ChainTetherDama_10185cd68;
  DAT_101d3c6d8 = FUN_1004149ac;
  DAT_101d3c6e0 = PTR_s_Buff_Churnwalker_B_Cloud_10185a8c8;
  DAT_101d3c6e8 = FUN_100414a40;
  DAT_101d3c6f0 = PTR_s_Buff_Churnwalker_A_Casting_10185a8b0;
  DAT_101d3c6f8 = FUN_100414b88;
  DAT_101d3c700 = PTR_s_Buff_Churnwalker_A_CD_Reset_10185cd70;
  DAT_101d3c708 = FUN_100414b8c;
  DAT_101d3c710 = PTR_s_Buff_Churnwalker_ChainRemovalL1_10185cd78;
  DAT_101d3c718 = FUN_100414be8;
  DAT_101d3c720 = PTR_s_Buff_Churnwalker_ChainRemovalL2_10185cd80;
  DAT_101d3c728 = FUN_100414c24;
  DAT_101d3c730 = PTR_s_Buff_Churnwalker_ChainRemovalR1_10185cd88;
  DAT_101d3c738 = FUN_100414c60;
  DAT_101d3c740 = PTR_s_Buff_Churnwalker_ChainRemovalR2_10185cd90;
  DAT_101d3c748 = FUN_100414c9c;
  DAT_101d3c750 = PTR_s_Buff_Churnwalker_Talent_TalentA_10185cd98;
  DAT_101d3c758 = FUN_100414cd8;
  DAT_101d3c760 = PTR_s_Buff_Churnwalker_Talent_TalentB_10185a8c0;
  DAT_101d3c768 = FUN_100414cdc;
  DAT_101d3c770 = PTR_s_Buff_Churnwalker_Talent_TalentC_10185cda0;
  DAT_101d3c778 = FUN_100414dac;
  DAT_101d3c780 = PTR_s_Buff_Hero034_Aura_Cyan_10185cda8;
  DAT_101d3c788 = FUN_100414e34;
  DAT_101d3c790 = PTR_s_Buff_Hero034_Aura_Magenta_10185cdb0;
  DAT_101d3c798 = FUN_100414edc;
  DAT_101d3c7a0 = PTR_s_Buff_Hero034_Aura_Yellow_10185cdb8;
  DAT_101d3c7a8 = FUN_100414f88;
  DAT_101d3c7b0 = PTR_s_Buff_Hero034_Perk_VitalityBootst_10185cdc0;
  DAT_101d3c7b8 = FUN_100415034;
  DAT_101d3c7c0 = PTR_s_Buff_Hero034_VitalityControl_10185cdc8;
  DAT_101d3c7c8 = FUN_10041517c;
  DAT_101d3c7d0 = PTR_s_Buff_Hero034_Vitality_10185cdd0;
  DAT_101d3c7d8 = FUN_100415224;
  DAT_101d3c7e0 = PTR_s_Buff_Hero034_VitalityDrained_10185cdd8;
  DAT_101d3c7e8 = FUN_100415280;
  DAT_101d3c7f0 = PTR_s_Buff_Hero034_A_Dashing_10185cde0;
  DAT_101d3c7f8 = FUN_1004152dc;
  DAT_101d3c800 = PTR_s_Buff_Hero034_A_Seducing_10185cde8;
  DAT_101d3c808 = FUN_100415310;
  DAT_101d3c810 = PTR_s_Buff_Hero034_A_Seduced_10185cdf0;
  DAT_101d3c818 = FUN_100415498;
  DAT_101d3c820 = PTR_s_Buff_Hero034_B_Locked_10185cdf8;
  DAT_101d3c828 = FUN_1004154dc;
  DAT_101d3c830 = PTR_s_Buff_Grumpjaw_Perk_Armor_10185ce00;
  DAT_101d3c838 = FUN_1004155fc;
  DAT_101d3c840 = PTR_s_Buff_Grumpjaw_Perk_CooldownCheck_10185ce08;
  DAT_101d3c848 = FUN_10041580c;
  DAT_101d3c850 = PTR_s_Buff_Grumpjaw_A_BiteSlow_10185a818;
  DAT_101d3c858 = FUN_100415810;
  DAT_101d3c860 = PTR_s_Buff_Grumpjaw_A_Damage_10185a820;
  DAT_101d3c868 = FUN_100415868;
  DAT_101d3c870 = DAT_10185a7b0;
  DAT_101d3c878 = FUN_1004158d8;
  DAT_101d3c880 = PTR_s_Buff_Grumpjaw_Eating_10185a800;
  DAT_101d3c888 = FUN_1004159c0;
  DAT_101d3c890 = PTR_s_Buff_Grumpjaw_Eaten_10185a858;
  DAT_101d3c898 = FUN_100415ce8;
  DAT_101d3c8a0 = PTR_s_Buff_Grumpjaw_C_SelfProjectile_10185a838;
  DAT_101d3c8a8 = FUN_100415e98;
  DAT_101d3c8b0 = PTR_s_Buff_Grumpjaw_C_Grabbed_10185a840;
  DAT_101d3c8b8 = FUN_100415f30;
  DAT_101d3c8c0 = PTR_s_Buff_Grumpjaw_C_BeingTossed_10185a850;
  DAT_101d3c8c8 = FUN_100416024;
  DAT_101d3c8d0 = PTR_s_Buff_Grumpjaw_Talent_Reconstitut_10185a828;
  DAT_101d3c8d8 = FUN_1004160b4;
  DAT_101d3c8e0 = PTR_s_Buff_Grumpjaw_Reconstitution_Lif_10185a830;
  DAT_101d3c8e8 = FUN_100416188;
  DAT_101d3c8f0 = PTR_s_Buff_Grumpjaw_Talent_Rampage_10185a808;
  DAT_101d3c8f8 = FUN_10041624c;
  DAT_101d3c900 = PTR_s_Buff_Grumpjaw_Rampage_SelfProjec_10185a810;
  DAT_101d3c908 = FUN_100416250;
  DAT_101d3c910 = PTR_s_Buff_Grumpjaw_Talent_BigAppetite_10185a848;
  DAT_101d3c918 = FUN_100416284;
  DAT_101d3c920 = PTR_s_Buff_Reza_Perk_VolatileSparkCont_10185ce10;
  DAT_101d3c928 = FUN_100416358;
  DAT_101d3c930 = PTR_s_Buff_Reza_VolatileSpark_10185aa40;
  DAT_101d3c938 = FUN_1004164b8;
  DAT_101d3c940 = DAT_10185aa48;
  DAT_101d3c948 = FUN_100416580;
  DAT_101d3c950 = PTR_s_Buff_Reza_C_Netherform_10185aa28;
  DAT_101d3c958 = FUN_100416610;
  DAT_101d3c960 = PTR_s_Buff_Reza_B_EmpoweredAttack_10185a9e0;
  DAT_101d3c968 = FUN_100416ac0;
  DAT_101d3c970 = PTR_s_Buff_Reza_C_Teleporting_10185aa18;
  DAT_101d3c978 = FUN_100416ca4;
  DAT_101d3c980 = PTR_s_Buff_Reza_C_PostTeleport_No_Coll_10185aa30;
  DAT_101d3c988 = FUN_100416e74;
  DAT_101d3c990 = PTR_s_Buff_Reza_C_Teleport_Destination_10185ce18;
  DAT_101d3c998 = FUN_100416e98;
  DAT_101d3c9a0 = PTR_s_Buff_Reza_C_DamagePostTeleport_10185aa20;
  DAT_101d3c9a8 = FUN_100416f18;
  DAT_101d3c9b0 = PTR_s_Buff_Reza_C_PostCastSpeedBonus_10185aa38;
  DAT_101d3c9b8 = FUN_100416f98;
  DAT_101d3c9c0 = PTR_s_Buff_Reza_Talent_BurningBarrier_10185aa00;
  DAT_101d3c9c8 = FUN_100416fd4;
  DAT_101d3c9d0 = PTR_s_Buff_Reza_Talent_Firemaker_10185ce20;
  DAT_101d3c9d8 = FUN_100416fd8;
  DAT_101d3c9e0 = PTR_s_Buff_Reza_BurningBarrier_Barrier_10185aa08;
  DAT_101d3c9e8 = FUN_100416fdc;
  DAT_101d3c9f0 = PTR_s_Buff_Reza_Talent_NetherRage_10185aa10;
  DAT_101d3c9f8 = FUN_10041700c;
  DAT_101d3ca00 = PTR_s_Buff_Reza_NetherRage_BonusAttack_10185ce28;
  DAT_101d3ca08 = FUN_100417010;
  DAT_101d3ca10 = PTR_s_Buff_Reza_EmpoweredAttackPfx_10185a9f0;
  DAT_101d3ca18 = FUN_100417080;
  DAT_101d3ca20 = PTR_s_Buff_Reza_EmpoweredAttackPfx_OnR_10185a9e8;
  DAT_101d3ca28 = FUN_1004170fc;
  DAT_101d3ca30 = PTR_s_Buff_Tony_Perk_BarrierControl_10185ce30;
  DAT_101d3ca38 = FUN_100417238;
  DAT_101d3ca40 = PTR_s_Buff_Tony_Perk_Barrier_10185ce38;
  DAT_101d3ca48 = FUN_10041726c;
  DAT_101d3ca50 = PTR_s_Buff_Tony_Perk_Durability_10185ce40;
  DAT_101d3ca58 = FUN_10041729c;
  DAT_101d3ca60 = PTR_s_Buff_Tony_A_ChargedAttack1_10185a940;
  DAT_101d3ca68 = FUN_10041739c;
  DAT_101d3ca70 = PTR_s_Buff_Tony_A_ChargedAttack2_10185a948;
  DAT_101d3ca78 = FUN_100417498;
  DAT_101d3ca80 = PTR_s_Buff_Tony_A_ChargedAttack3_10185a950;
  DAT_101d3ca88 = FUN_100417594;
  DAT_101d3ca90 = PTR_s_Buff_Tony_A_SpeedBoostAndDamage_10185a958;
  DAT_101d3ca98 = FUN_100417690;
  DAT_101d3caa0 = PTR_s_Buff_Tony_B_DamageReduction_10185a970;
  DAT_101d3caa8 = FUN_1004177e0;
  DAT_101d3cab0 = PTR_s_Buff_Tony_B_TauntSFX_10185a980;
  DAT_101d3cab8 = FUN_100417884;
  DAT_101d3cac0 = PTR_s_Buff_Tony_C_SnapCamera_10185a990;
  DAT_101d3cac8 = FUN_1004179b8;
  DAT_101d3cad0 = PTR_s_Buff_Tony_C_Warning_10185ce48;
  DAT_101d3cad8 = FUN_1004179ec;
  DAT_101d3cae0 = PTR_s_Buff_Tony_Talent_TalentA_10185ce50;
  DAT_101d3cae8 = FUN_100417a7c;
  DAT_101d3caf0 = PTR_s_Buff_Tony_Talent_TauntDebuff_10185a988;
  DAT_101d3caf8 = FUN_100417acc;
  DAT_101d3cb00 = PTR_s_Buff_Tony_Talent_TalentB_10185a960;
  DAT_101d3cb08 = FUN_100417b28;
  DAT_101d3cb10 = PTR_s_Buff_Tony_Talent_TalentC_10185a968;
  DAT_101d3cb18 = FUN_100417b2c;
  DAT_101d3cb20 = DAT_10185a998;
  DAT_101d3cb28 = FUN_100417b30;
  DAT_101d3cb30 = PTR_s_Buff_Grace_PlayRetributionImpact_10185a758;
  DAT_101d3cb38 = FUN_100417ca8;
  DAT_101d3cb40 = PTR_s_Buff_Grace_PassiveBehaviors_10185ce58;
  DAT_101d3cb48 = FUN_100417d38;
  DAT_101d3cb50 = PTR_s_Buff_Grace_PostAbilityBonuses_10185a788;
  DAT_101d3cb58 = FUN_100417dac;
  DAT_101d3cb60 = PTR_s_Buff_Grace_Passive_A_10185ce60;
  DAT_101d3cb68 = FUN_100417de8;
  DAT_101d3cb70 = PTR_s_Buff_Grace_A_Lockout_10185a760;
  DAT_101d3cb78 = FUN_100417e4c;
  DAT_101d3cb80 = PTR_s_Buff_Grace_A_LockoutOnUltimate_10185a768;
  DAT_101d3cb88 = FUN_100417e94;
  DAT_101d3cb90 = PTR_s_Buff_Grace_A_LockoutOnUltimateUs_10185a770;
  DAT_101d3cb98 = FUN_100417e98;
  DAT_101d3cba0 = PTR_s_Buff_Grace_A_GuardOmni_10185a778;
  DAT_101d3cba8 = FUN_100417f40;
  DAT_101d3cbb0 = PTR_s_Buff_Grace_A_GuardOmniVisuals_10185ce68;
  DAT_101d3cbb8 = FUN_10041813c;
  DAT_101d3cbc0 = PTR_s_Buff_Grace_A_GuardDirectional_10185a780;
  DAT_101d3cbc8 = FUN_1004181f0;
  DAT_101d3cbd0 = PTR_s_Buff_Grace_A_GuardDirectionalVis_10185ce70;
  DAT_101d3cbd8 = FUN_1004184a4;
  DAT_101d3cbe0 = PTR_s_Buff_Grace_A_GuardHitImpact_10185ce78;
  DAT_101d3cbe8 = FUN_1004185cc;
  DAT_101d3cbf0 = PTR_s_Buff_Grace_C_TargetWarmup_10185a798;
  DAT_101d3cbf8 = FUN_100418648;
  DAT_101d3cc00 = PTR_s_Buff_Grace_C_TargetImpact_10185a7a8;
  DAT_101d3cc08 = FUN_100418758;
  DAT_101d3cc10 = PTR_s_Buff_Grace_C_SelfDuringChannel_10185a7a0;
  DAT_101d3cc18 = FUN_10041887c;
  DAT_101d3cc20 = PTR_s_Buff_Grace_Talent_SealOfRetribut_10185a750;
  DAT_101d3cc28 = FUN_100418a30;
  DAT_101d3cc30 = PTR_s_Buff_Grace_Talent_DoubleBenedict_10185ce80;
  DAT_101d3cc38 = FUN_100418aa0;
  DAT_101d3cc40 = PTR_s_Buff_Grace_Talent_UnitedFront_10185a790;
  DAT_101d3cc48 = FUN_100418c0c;
  DAT_101d3cc50 = DAT_10185a390;
  DAT_101d3cc58 = FUN_100418ce0;
  DAT_101d3cc60 = PTR_s_Buff_Baptiste_PerkEmpowered_10185a3f8;
  DAT_101d3cc68 = FUN_100418e4c;
  DAT_101d3cc70 = PTR_s_Buff_Baptiste_PerkSoulSender_10185ce88;
  DAT_101d3cc78 = FUN_100418f30;
  DAT_101d3cc80 = PTR_s_Buff_Baptiste_A_CC_10185ce90;
  DAT_101d3cc88 = FUN_100418f84;
  DAT_101d3cc90 = PTR_s_Buff_Baptiste_B_TetherTarget_10185a400;
  DAT_101d3cc98 = FUN_100418fc0;
  DAT_101d3cca0 = PTR_s_Buff_Baptiste_B_Tether_CC_10185ce98;
  DAT_101d3cca8 = FUN_1004192cc;
  DAT_101d3ccb0 = PTR_s_Buff_Baptiste_Ultimate_DOT_10185cea0;
  DAT_101d3ccb8 = FUN_100419334;
  DAT_101d3ccc0 = PTR_s_Buff_Baptiste_Ultimate_CC_10185cea8;
  DAT_101d3ccc8 = FUN_10041945c;
  DAT_101d3ccd0 = PTR_s_Buff_Baptiste_Zombie_10185a410;
  DAT_101d3ccd8 = FUN_10041957c;
  DAT_101d3cce0 = PTR_s_Buff_Baptiste_Talent_BadBadMojo_10185ceb0;
  DAT_101d3cce8 = FUN_10041966c;
  DAT_101d3ccf0 = PTR_s_Buff_Baptiste_Talent_TheReaper_10185a388;
  DAT_101d3ccf8 = FUN_10041976c;
  DAT_101d3cd00 = PTR_s_Buff_Baptiste_Talent_ArmyOfSouls_10185a418;
  DAT_101d3cd08 = FUN_1004197dc;
  DAT_101d3cd10 = PTR_s_Buff_Malene_LightFormPFX_10185ae18;
  DAT_101d3cd18 = FUN_100419988;
  DAT_101d3cd20 = PTR_s_Buff_Malene_DarkForm_10185ae20;
  DAT_101d3cd28 = FUN_1004199c0;
  DAT_101d3cd30 = PTR_s_Buff_Malene_DarkFormAnimOverride_10185ae10;
  DAT_101d3cd38 = FUN_100419b18;
  DAT_101d3cd40 = PTR_s_Buff_Malene_LightEmpoweredAuto_10185ade0;
  DAT_101d3cd48 = FUN_100419ce4;
  DAT_101d3cd50 = PTR_s_Buff_Malene_DarkEmpoweredAuto_10185ade8;
  DAT_101d3cd58 = FUN_100419d50;
  DAT_101d3cd60 = PTR_s_Buff_Malene_LightEmpAutoSlow_10185ceb8;
  DAT_101d3cd68 = FUN_100419dbc;
  DAT_101d3cd70 = PTR_s_Buff_Malene_A1_Immobilize_10185cec0;
  DAT_101d3cd78 = FUN_100419df0;
  DAT_101d3cd80 = PTR_s_Buff_Malene_B1_MirrorsBlessing_10185adf8;
  DAT_101d3cd88 = FUN_100419e04;
  DAT_101d3cd90 = PTR_s_Buff_Malene_B2_ShadowWalk_10185adf0;
  DAT_101d3cd98 = FUN_10041a038;
  DAT_101d3d008 = FUN_10041cb74;
  DAT_101d3d010 = PTR_s_Buff_Kensei_AltAttack_EffectOnHi_10185b2e8;
  DAT_101d3d018 = FUN_10041cbd0;
  DAT_101d3d020 = PTR_s_Buff_Kensei_CritAttack_EffectOnH_10185b2f0;
  DAT_101d3d028 = FUN_10041cc2c;
  DAT_101d3d030 = PTR_s_Buff_Kensei_A_StepCounter_10185b300;
  DAT_101d3d038 = FUN_10041cc80;
  DAT_101d3d040 = PTR_s_Buff_Kensei_A_DealDamage_10185b308;
  DAT_101d3d048 = FUN_10041cd68;
  DAT_101d3d050 = PTR_s_Buff_Kensei_A_Slow_10185b310;
  DAT_101d3d058 = FUN_10041ce80;
  DAT_101d3d060 = PTR_s_Buff_Kensei_B_EmpoweredByB_10185b2f8;
  DAT_101d3d068 = FUN_10041ceb4;
  DAT_101d3d070 = PTR_s_Buff_Kensei_B_FortifiedHealth_Co_10185b320;
  DAT_101d3d078 = FUN_10041cfb8;
  DAT_101d3d080 = PTR_s_Buff_Kensei_B_FortifiedHealth_10185cf98;
  DAT_101d3d088 = FUN_10041d198;
  DAT_101d3d090 = PTR_s_Buff_Kensei_B_BonusMovespeed_10185cfa0;
  DAT_101d3d098 = FUN_10041d244;
  DAT_101d3d0a0 = PTR_s_Buff_Kensei_C_EffectOnHit_10185cfa8;
  DAT_101d3d0a8 = FUN_10041d280;
  DAT_101d3d0b0 = PTR_s_Buff_Kensei_Talent_TalentA_10185cfb0;
  DAT_101d3d0b8 = FUN_10041d40c;
  DAT_101d3d0c0 = PTR_s_Buff_Kensei_Talent_TalentB_10185b318;
  DAT_101d3d0c8 = FUN_10041d500;
  DAT_101d3d0d0 = PTR_s_Buff_Kensei_Talent_TalentC_10185cfb8;
  DAT_101d3d0d8 = FUN_10041d620;
  DAT_101d3d0e0 = PTR_s_Buff_Kensei_Talent_TalentC_UltRe_10185cfc0;
  DAT_101d3d0e8 = FUN_10041d794;
  DAT_101d3d0f0 = PTR_s_Buff_Magnus_PassiveBehaviors_10185cfc8;
  DAT_101d3d0f8 = FUN_10041d884;
  DAT_101d3d100 = PTR_s_Buff_Magnus_Perk_SpellMark_10185b368;
  DAT_101d3d108 = FUN_10041d888;
  DAT_101d3d110 = PTR_s_Buff_Magnus_PerkProc_DamagePFX_10185b358;
  DAT_101d3d118 = FUN_10041d998;
  DAT_101d3d120 = PTR_s_Buff_Magnus_A_MarkCheck_10185cfd0;
  DAT_101d3d128 = FUN_10041da48;
  DAT_101d3d130 = PTR_s_Buff_Magnus_B_MarkCheck_10185cfd8;
  DAT_101d3d138 = FUN_10041dc90;
  DAT_101d3d140 = PTR_s_Buff_Magnus_C_DamagePFX_10185b370;
  DAT_101d3d148 = FUN_10041de64;
  DAT_101d3d150 = PTR_s_Buff_Magnus_C_DeathChecker_10185b378;
  DAT_101d3d158 = FUN_10041df44;
  DAT_101d3d160 = PTR_s_Buff_Magnus_Talent_TalentA_10185cfe0;
  DAT_101d3d168 = FUN_10041e0c8;
  DAT_101d3d170 = PTR_s_Buff_Magnus_Talent_TalentB_10185b360;
  DAT_101d3d178 = FUN_10041e178;
  DAT_101d3d180 = PTR_s_Buff_Magnus_Talent_TalentC_10185cfe8;
  DAT_101d3d188 = FUN_10041e1c8;
  DAT_101d3d190 = PTR_s_Buff_Kinetic_BasicAttack_Mini_Co_10185b380;
  DAT_101d3d198 = FUN_10041e254;
  DAT_101d3d1a0 = PTR_s_Buff_Kinetic_A2_Slow_10185cff0;
  DAT_101d3d1a8 = FUN_10041e2e4;
  DAT_101d3d1b0 = PTR_s_Buff_Kinetic_B_SwapAbilityA_10185b388;
  DAT_101d3d1b8 = FUN_10041e318;
  DAT_101d3d1c0 = PTR_s_Buff_Kinetic_C_Target_Laser_10185b398;
  DAT_101d3d1c8 = FUN_10041e480;
  DAT_101d3d1d0 = PTR_s_Buff_Kinetic_Talent_TalentA_10185cff8;
  DAT_101d3d1d8 = FUN_10041e500;
  DAT_101d3d1e0 = PTR_s_Buff_Kinetic_Talent_TalentB_10185b390;
  DAT_101d3d1e8 = FUN_10041e5b4;
  DAT_101d3d1f0 = PTR_s_Buff_Kinetic_Talent_TalentC_10185d000;
  DAT_101d3d1f8 = FUN_10041e6a0;
  DAT_101d3d200 = PTR_s_Buff_Hero049_SpawnPet_10185d008;
  DAT_101d3d208 = FUN_10041e7e0;
  DAT_101d3d210 = PTR_s_Buff_Hero049_PetDistanceCheck_10185b3b8;
  DAT_101d3d218 = FUN_10041e810;
  DAT_101d3d220 = PTR_s_Buff_Hero049_AttachToHero_10185b3c0;
  DAT_101d3d228 = FUN_10041e8ec;
  DAT_101d3d230 = PTR_s_Buff_Hero049_DashToHero_10185d010;
  DAT_101d3d238 = FUN_10041e97c;
  DAT_101d3d240 = PTR_s_Buff_Hero049_C_DashToHero_10185d018;
  DAT_101d3d248 = FUN_10041ea74;
  DAT_101d3d250 = PTR_s_Buff_Hero049_PetLocator_10185b3a8;
  DAT_101d3d258 = FUN_10041eaa0;
  DAT_101d3d260 = PTR_s_Buff_Hero049_PetIsAttached_10185b3b0;
  DAT_101d3d268 = FUN_10041ebc4;
  DAT_101d3d270 = PTR_s_Buff_Hero049_PetSlow_10185b3d8;
  DAT_101d3d278 = FUN_10041ebc8;
  DAT_101d3d280 = PTR_s_Buff_Hero049_RingPFXForPetRange_10185b3d0;
  DAT_101d3d288 = FUN_10041ec04;
  DAT_101d3d290 = PTR_s_Buff_Hero049_PetIsDetatched_10185b3c8;
  DAT_101d3d298 = FUN_10041ecd8;
  DAT_101d3d2a0 = PTR_s_Buff_Hero050_PassiveBehaviors_10185d020;
  DAT_101d3d2a8 = FUN_10041ecdc;
  DAT_101d3d2b0 = PTR_s_Buff_Hero050_GamblersRush_10185d028;
  DAT_101d3d2b8 = FUN_10041ed50;
  DAT_101d3d2c0 = PTR_s_Buff_Hero050_StackedDeck_10185b3e0;
  DAT_101d3d2c8 = FUN_10041edbc;
  DAT_101d3d2d0 = PTR_s_Buff_Hero050_B_10185b3e8;
  DAT_101d3d2d8 = FUN_10041ee60;
  DAT_101d3d2e0 = PTR_s_Buff_Hero050_B_Segment_10185d030;
  DAT_101d3d2e8 = FUN_10041ef9c;
  DAT_101d3d2f0 = PTR_s_Buff_Hero050_C_Slow_10185d038;
  DAT_101d3d2f8 = FUN_10041f054;
  DAT_101d3d300 = PTR_s_Buff_Hero051_GunA2_10185b3f0;
  DAT_101d3d308 = FUN_10041f0c4;
  DAT_101d3d310 = PTR_s_Buff_Hero051_BulletA2_10185d040;
  DAT_101d3d318 = FUN_10041f0c8;
  DAT_101d3d320 = PTR_s_Buff_Hero051_Perk_10185d048;
  DAT_101d3d328 = FUN_10041f0cc;
  DAT_101d3d330 = PTR_s_Buff_Hero051_CDamage_10185d050;
  DAT_101d3d338 = FUN_10041f11c;
  DAT_101d3d340 = PTR_s_Buff_Hero052_SuperOP_10185b400;
  DAT_101d3d348 = FUN_10041f1e4;
  DAT_101d3d350 = PTR_s_Buff_Hero052_BallLocator_10185b3f8;
  DAT_101d3d358 = FUN_10041f278;
  DAT_101d3d360 = PTR_s_Buff_Hero052_BallStats_10185d058;
  DAT_101d3d368 = FUN_10041f30c;
  DAT_101d3d370 = PTR_s_Buff_Hero052_SpawnBall_10185d060;
  DAT_101d3d378 = FUN_10041f310;
  DAT_101d3d380 = PTR_s_Buff_Hero052_HeroAndBallLocator_10185d068;
  DAT_101d3d388 = FUN_10041f314;
  DAT_101d3d390 = PTR_s_Buff_Anka_PassiveBehaviors_10185d070;
  DAT_101d3d398 = FUN_10041f318;
  DAT_101d3d3a0 = PTR_s_Buff_Anka_Perk_Ready_10185b408;
  DAT_101d3d3a8 = FUN_10041f3fc;
  DAT_101d3d3b0 = PTR_s_Buff_Anka_Perk_Cooldown_10185d078;
  DAT_101d3d3b8 = FUN_10041f518;
  DAT_101d3d3c0 = PTR_s_Buff_Anka_A_DaggerMark_10185b410;
  DAT_101d3d3c8 = FUN_10041f570;
  DAT_101d3d3d0 = PTR_s_Buff_Anka_A_CanBlink_10185b428;
  DAT_101d3d3d8 = FUN_10041f6c8;
  DAT_101d3d3e0 = PTR_s_Buff_Anka_A_BlinkedSpeedBoost_10185b420;
  DAT_101d3d3e8 = FUN_10041f710;
  DAT_101d3d3f0 = PTR_s_Buff_Anka_A_BlinkStrikePfx_10185b418;
  DAT_101d3d3f8 = FUN_10041f784;
  DAT_101d3d400 = PTR_s_Buff_Anka_B_KnifeHit_10185d080;
  DAT_101d3d408 = FUN_10041f7c8;
  DAT_101d3d410 = PTR_s_Buff_Anka_C_IAmDashing_10185b430;
  DAT_101d3d418 = FUN_10041f934;
  DAT_101d3d420 = PTR_s_Buff_Anka_C_CloneDash_10185b438;
  DAT_101d3d428 = FUN_10041f9a4;
  DAT_101d3d430 = PTR_s_Buff_Anka_C_InitialDashHit_10185d088;
  DAT_101d3d438 = FUN_10041fa48;
  DAT_101d3d440 = PTR_s_Buff_Anka_C_SecondaryDashHit_10185d090;
  DAT_101d3d448 = FUN_10041fbb0;
  DAT_101d3d450 = PTR_s_Buff_Anka_Talent_TalentA_10185d098;
  DAT_101d3d458 = FUN_10041fd18;
  DAT_101d3d460 = PTR_s_Buff_Anka_Talent_TalentB_10185d0a0;
  DAT_101d3d468 = FUN_10041fe74;
  DAT_101d3d470 = PTR_s_Buff_Anka_Talent_TalentC_10185d0a8;
  DAT_101d3d478 = FUN_10041ff58;
  DAT_101d3d480 = PTR_s_Buff_Silvernail_AmmoCharge_Contr_10185d0b0;
  DAT_101d3d488 = FUN_100420140;
  DAT_101d3d490 = PTR_s_Buff_Silvernail_AmmoCharge_Loadi_10185d0b8;
  DAT_101d3d498 = FUN_10042019c;
  DAT_101d3d4a0 = PTR_s_Buff_Silvernail_AmmoCharge_Loade_10185b440;
  DAT_101d3d4a8 = FUN_100420210;
  DAT_101d3d4b0 = PTR_s_Buff_Silvernail_A_Tower_LimitChe_10185b458;
  DAT_101d3d4b8 = FUN_1004202a4;
  DAT_101d3d4c0 = PTR_s_Buff_Silvernail_A_Tower_AttachPo_10185b450;
  DAT_101d3d4c8 = FUN_1004202cc;
  DAT_101d3d4d0 = PTR_s_Buff_Silvernail_A_Tower_Hide_Mes_10185d0c0;
  DAT_101d3d4d8 = FUN_100420608;
  DAT_101d3d4e0 = PTR_s_Buff_Silvernail_A_ActiveTripwire_10185d0c8;
  DAT_101d3d4e8 = FUN_100420620;
  DAT_101d3d4f0 = PTR_s_Buff_Silvernail_A_ActiveTripwire_10185d0d0;
  DAT_101d3d4f8 = FUN_1004206bc;
  DAT_101d3d500 = PTR_s_Buff_Silvernail_A_ActiveTripwire_10185d0d8;
  DAT_101d3d508 = FUN_100420794;
  DAT_101d3d510 = PTR_s_Buff_Silvernail_A_ActiveTripwire_10185d0e0;
  DAT_101d3d518 = FUN_10042084c;
  DAT_101d3d520 = PTR_s_Buff_Silvernail_A_ActiveTripwire_10185d0e8;
  DAT_101d3d528 = FUN_1004209b8;
  DAT_101d3d530 = PTR_s_Buff_Silvernail_A_ActiveTripwire_10185d0f0;
  DAT_101d3d538 = FUN_100420a3c;
  DAT_101d3d540 = PTR_s_Buff_Silvernail_A_ActiveTripwire_10185d0f8;
  DAT_101d3d548 = FUN_100420bb4;
  DAT_101d3d550 = PTR_s_Buff_Silvernail_A_ActiveTripwire_10185d100;
  DAT_101d3d558 = FUN_100420cd4;
  DAT_101d3d560 = PTR_s_Buff_Silvernail_B_DamageOverTime_10185d108;
  DAT_101d3d568 = FUN_100420da0;
  DAT_101d3d570 = PTR_s_Buff_Silvernail_B_MovespeedBoost_10185b470;
  DAT_101d3d578 = FUN_100420f10;
  DAT_101d3d580 = PTR_s_Buff_Silvernail_C_HitEffect_10185d110;
  DAT_101d3d588 = FUN_100420f4c;
  DAT_101d3d590 = PTR_s_Buff_Silvernail_C_BeingKnockedBa_10185d118;
  DAT_101d3d598 = FUN_10042104c;
  DAT_101d3d5a0 = PTR_s_Buff_Silvernail_C_KnockedIntoWal_10185d120;
  DAT_101d3d5a8 = FUN_100421050;
  DAT_101d3d5b0 = PTR_s_Buff_Silvernail_Talent_TalentA_10185b448;
  DAT_101d3d5b8 = FUN_10042111c;
  DAT_101d3d5c0 = PTR_s_Buff_Silvernail_Talent_TalentB_10185b468;
  DAT_101d3d5c8 = FUN_1004212c8;
  DAT_101d3d5d0 = PTR_s_Buff_Silvernail_Talent_TalentC_10185b460;
  DAT_101d3d5d8 = FUN_100421408;
  DAT_101d3d5e0 = PTR_s_Buff_Hero057_Perk_Barrier_10185b480;
  DAT_101d3d5e8 = FUN_100421544;
  DAT_101d3d5f0 = PTR_s_Buff_Hero057_B_Attached_10185b488;
  DAT_101d3d5f8 = FUN_100421574;
  DAT_101d3d600 = PTR_s_Buff_Hero057_B_Attachment_Target_10185b478;
  DAT_101d3d608 = FUN_100421654;
  DAT_101d3d610 = PTR_s_Buff_Hero057_C_Steroid_10185b498;
  DAT_101d3d618 = FUN_100421658;
  DAT_101d3d620 = PTR_s_Buff_Hero057_C_Cloud_10185b490;
  DAT_101d3d628 = FUN_1004216f0;
  DAT_101d3d630 = PTR_s_Buff_Yates_DefaultAttack_B_Ready_10185d128;
  DAT_101d3d638 = FUN_100421888;
  DAT_101d3d640 = PTR_s_Buff_Yates_DefaultAttack_C_Ready_10185d130;
  DAT_101d3d648 = FUN_1004219ac;
  DAT_101d3d650 = PTR_s_Buff_Yates_DefaultAttack_B_Speed_10185d138;
  DAT_101d3d658 = FUN_100421ad0;
  DAT_101d3d660 = PTR_s_Buff_Yates_DefaultAttack_C_Speed_10185d140;
  DAT_101d3d668 = FUN_100421b0c;
  DAT_101d3d670 = PTR_s_Buff_Yates_DefaultAttack_A_HitIm_10185d148;
  DAT_101d3d678 = FUN_100421b48;
  DAT_101d3d680 = PTR_s_Buff_Yates_DefaultAttack_B_HitIm_10185d150;
  DAT_101d3d688 = FUN_100421b98;
  DAT_101d3d690 = PTR_s_Buff_Yates_DefaultAttack_C_HitIm_10185d158;
  DAT_101d3d698 = FUN_100421be8;
  DAT_101d3d6a0 = PTR_s_Buff_Yates_A_ReturnShot_10185d160;
  DAT_101d3d6a8 = FUN_100421c38;
  DAT_101d3d6b0 = PTR_s_Buff_Yates_B_IsCasting_10185b4a0;
  DAT_101d3d6b8 = FUN_100421d04;
  DAT_101d3d6c0 = PTR_s_Buff_Yates_C_IsCasting_10185b4b8;
  DAT_101d3d6c8 = FUN_10042205c;
  DAT_101d3d6d0 = PTR_s_Buff_Yates_C_PlayTeleportEffect_10185b4b0;
  DAT_101d3d6d8 = FUN_1004220c4;
  DAT_101d3d6e0 = PTR_s_Buff_Yates_C_LandingIndicator_10185b4d0;
  DAT_101d3d6e8 = FUN_10042211c;
  DAT_101d3d6f0 = PTR_s_Buff_Yates_C_PostTeleport_HideSe_10185b4c8;
  DAT_101d3d6f8 = FUN_1004221cc;
  DAT_101d3d700 = PTR_s_Buff_Yates_C_Untouchable_10185b4c0;
  DAT_101d3d708 = FUN_1004221e4;
  DAT_101d3d710 = PTR_s_Buff_Yates_C_LandingEffect_10185b4d8;
  DAT_101d3d718 = FUN_10042222c;
  DAT_101d3d720 = PTR_s_Buff_Yates_C_Slow_10185d168;
  DAT_101d3d728 = FUN_100422374;
  DAT_101d3d730 = PTR_s_Buff_Yates_C_Barrier_10185d170;
  DAT_101d3d738 = FUN_1004223b4;
  DAT_101d3d740 = PTR_s_Buff_Yates_Withdraw_10185b4e0;
  DAT_101d3d748 = FUN_100422400;
  DAT_101d3d750 = PTR_s_Buff_Yates_Talent_TalentA_10185d178;
  DAT_101d3d758 = FUN_10042245c;
  DAT_101d3d760 = PTR_s_Buff_Yates_Talent_TalentB_10185d180;
  DAT_101d3d768 = FUN_100422608;
  DAT_101d3d770 = PTR_s_Buff_Yates_Talent_TalentC_10185b4a8;
  DAT_101d3d778 = FUN_1004226bc;
  DAT_101d3d780 = PTR_s_Buff_Inara_P_10185d188;
  DAT_101d3d788 = FUN_1004227fc;
  DAT_101d3d790 = PTR_s_Buff_Inara_P_TreantObserver_10185d190;
  DAT_101d3d798 = FUN_100422a0c;
  DAT_101d3d7a0 = PTR_s_Buff_Inara_P_ObserverBonusVision_10185d198;
  DAT_101d3d7a8 = FUN_100422a38;
  DAT_101d3d7b0 = PTR_s_Buff_Inara_P_MarkedTreant_10185d1a0;
  DAT_101d3d7b8 = FUN_100422b84;
  DAT_101d3d7c0 = PTR_s_Buff_Inara_P_EmpoweredByTreant_10185d1a8;
  DAT_101d3d7c8 = FUN_100422b88;
  DAT_101d3d7d0 = PTR_s_Buff_Inara_A_Slow_10185b540;
  DAT_101d3d7d8 = FUN_100422bd8;
  DAT_101d3d7e0 = PTR_s_Buff_Inara_B_IsMarkedHero_10185b558;
  DAT_101d3d7e8 = FUN_100422c14;
  DAT_101d3d7f0 = PTR_s_Buff_Inara_B_CancelMarkOnHero_10185b538;
  DAT_101d3d7f8 = FUN_100422c4c;
  DAT_101d3d800 = PTR_s_Buff_Inara_C_IsMarkedHero_10185d1b0;
  DAT_101d3d808 = FUN_100422c78;
  DAT_101d3da80 = PTR_s_Buff_Caine_AmmoControl_10185b6b8;
  DAT_101d3dce0 = PTR_s_Buff_Miho_Perk_ExposeCooldown_10185d2d8;
  DAT_101d3dcd0 = PTR_s_Buff_Miho_Perk_MaxStacks_10185d2d0;
  DAT_101d3dcd8 = FUN_1004261f0;
  DAT_101d3dcc0 = PTR_s_Buff_Miho_Perk_Expose_10185d2c8;
  DAT_101d3dcc8 = FUN_100426104;
  DAT_101d3dcb0 = PTR_s_Buff_Miho_Perk_UseFocus_10185d2c0;
  DAT_101d3dcb8 = FUN_100425e3c;
  DAT_101d3dca0 = PTR_s_Buff_Warhawk_C_TargetsTalent_10185b718;
  DAT_101d3dca8 = FUN_100425d84;
  DAT_101d3dc90 = PTR_s_Buff_Warhawk_TalentA_Heal_10185b700;
  DAT_101d3dc98 = FUN_100425d28;
  DAT_101d3dc80 = PTR_s_Buff_Warhawk_Talent_TalentC_10185b708;
  DAT_101d3dc88 = FUN_100425c54;
  DAT_101d3dc70 = PTR_s_Buff_Warhawk_Talent_TalentB_10185b6e0;
  DAT_101d3dc78 = FUN_100425b14;
  DAT_101d3dc60 = PTR_s_Buff_Warhawk_Talent_TalentA_10185b6f0;
  DAT_101d3dc68 = FUN_100425a40;
  DAT_101d3dc50 = PTR_s_Buff_Warhawk_C_BurnDamage_10185d2b8;
  DAT_101d3dc58 = FUN_1004259c8;
  DAT_101d3dc40 = PTR_s_Buff_Warhawk_C_Burn_10185d2b0;
  DAT_101d3dc48 = FUN_100425818;
  DAT_101d3dc30 = PTR_s_Buff_Warhawk_C_Damage_10185d2a8;
  DAT_101d3dc38 = FUN_100425748;
  DAT_101d3dc20 = PTR_s_Buff_Warhawk_C_Slow_10185d2a0;
  DAT_101d3dc28 = FUN_100425714;
  DAT_101d3dc10 = PTR_s_Buff_Warhawk_C_LockedOn_10185d298;
  DAT_101d3dc18 = FUN_100425668;
  DAT_101d3dc00 = PTR_s_Buff_Warhawk_C_Targets_10185b710;
  DAT_101d3dc08 = FUN_1004255b0;
  DAT_101d3dbf0 = PTR_s_Buff_Warhawk_C_Control_10185b720;
  DAT_101d3dbf8 = FUN_10042557c;
  DAT_101d3dbe0 = PTR_s_Buff_Warhawk_B_Stun_10185d290;
  DAT_101d3dbe8 = FUN_100425568;
  DAT_101d3dbd0 = PTR_s_Buff_Warhawk_B_Damage_10185b6f8;
  DAT_101d3dbd8 = FUN_1004254c0;
  DAT_101d3dbc0 = PTR_s_Buff_Warhawk_B_DetonateAvailable_10185d288;
  DAT_101d3dbc8 = FUN_100425440;
  DAT_101d3dbb0 = PTR_s_Buff_Warhawk_B_Grenade_10185b6e8;
  DAT_101d3dbb8 = FUN_10042536c;
  DAT_101d3dba0 = PTR_s_Buff_Warhawk_B_Grenade_Control_10185d280;
  DAT_101d3dba8 = FUN_100425310;
  DAT_101d3db90 = PTR_s_Buff_Warhawk_Enhanced_BasicAttac_10185b6d8;
  DAT_101d3db98 = FUN_100425284;
  DAT_101d3db80 = PTR_s_Buff_Caine_Talent_TalentC_10185b6a0;
  DAT_101d3db88 = FUN_100425110;
  DAT_101d3db70 = PTR_s_Buff_Caine_Talent_TalentB_10185b6d0;
  DAT_101d3db78 = FUN_10042510c;
  DAT_101d3db60 = PTR_s_Buff_Caine_Talent_TalentA_10185d278;
  DAT_101d3db68 = FUN_100424f90;
  DAT_101d3db50 = PTR_s_Buff_Caine_Reloading_Reaction_10185d270;
  DAT_101d3db58 = FUN_100424f8c;
  DAT_101d3db40 = PTR_s_Buff_Caine_C_Execute_Reaction_10185d268;
  DAT_101d3db48 = FUN_100424f4c;
  DAT_101d3db30 = PTR_s_Buff_Caine_AmmoPerkTalent_10185b6a8;
  DAT_101d3db38 = thunk_FUN_100455d80;
  DAT_101d3db20 = PTR_s_Buff_Caine_C_KillMarker_Controll_10185d260;
  DAT_101d3db28 = FUN_100424db0;
  DAT_101d3db10 = PTR_s_Buff_Caine_C_Damage_10185d258;
  DAT_101d3db18 = FUN_100424c9c;
  DAT_101d3db00 = PTR_s_Buff_Caine_C_KillMarker_PFX_10185d250;
  DAT_101d3db08 = FUN_100424c34;
  DAT_101d3daf0 = PTR_s_Buff_Caine_C_KillMarker_10185d248;
  DAT_101d3daf8 = FUN_100424b8c;
  DAT_101d3dae0 = PTR_s_Buff_Caine_C_Passthrough_PFX_10185d240;
  DAT_101d3dae8 = FUN_100424ae4;
  DAT_101d3dad0 = PTR_s_Buff_Caine_B_FastCast_10185b6c8;
  DAT_101d3dad8 = FUN_100424ae0;
  DAT_101d3dac0 = PTR_s_Buff_Caine_SpeedBoost_10185d238;
  DAT_101d3dac8 = FUN_100424a78;
  DAT_101d3dab0 = PTR_s_Buff_Caine_OutOfAmmo_10185d230;
  DAT_101d3dab8 = FUN_1004249d0;
  DAT_101d3daa0 = PTR_s_Buff_Caine_A_Slow_10185d228;
  DAT_101d3daa8 = FUN_100424994;
  DAT_101d3da90 = PTR_s_Buff_Caine_DryFire_10185b6c0;
  DAT_101d3da98 = FUN_100424910;
  DAT_101d3da78 = thunk_FUN_100455d80;
  DAT_101d3da88 = FUN_100424818;
  DAT_101d3da68 = FUN_100424718;
  DAT_101d3da70 = PTR_s_Buff_Caine_AmmoPerk_10185b6b0;
  DAT_101d3da58 = FUN_100424644;
  DAT_101d3da60 = PTR_s_Buff_Leo_Talent_SpeedBoost_10185d220;
  DAT_101d3da48 = FUN_1004245b8;
  DAT_101d3da50 = PTR_s_Buff_Leo_Talent_TalentC_10185b670;
  DAT_101d3da38 = FUN_100424550;
  DAT_101d3da40 = PTR_s_Buff_Leo_Talent_TalentB_10185b678;
  DAT_101d3da28 = FUN_1004244c0;
  DAT_101d3da30 = PTR_s_Buff_Leo_Talent_TalentA_10185d218;
  DAT_101d3da18 = FUN_100424438;
  DAT_101d3da20 = PTR_s_Buff_Leo_C_CycloneDash_10185b690;
  DAT_101d3da08 = FUN_100424240;
  DAT_101d3da10 = PTR_s_Buff_Leo_C_CycloneDamage_10185d210;
  DAT_101d3d9f8 = FUN_100424184;
  DAT_101d3da00 = PTR_s_Buff_Leo_C_DashAndEmpower_10185b660;
  DAT_101d3d9e8 = FUN_100424170;
  DAT_101d3d9f0 = PTR_s_Buff_Leo_C_ShovedHero_10185b698;
  DAT_101d3d9d8 = FUN_10042413c;
  DAT_101d3d9e0 = PTR_s_Buff_Leo_B_Root_10185b680;
  DAT_101d3d9c8 = FUN_100424094;
  DAT_101d3d9d0 = PTR_s_Buff_Leo_B_Slow_10185b688;
  DAT_101d3d9b8 = FUN_100423fd4;
  DAT_101d3d9c0 = PTR_s_Buff_Leo_A_BleedDoT_10185b668;
  DAT_101d3d9a8 = FUN_100423f6c;
  DAT_101d3d9b0 = PTR_s_Buff_Leo_Perk_SpeedBoost_10185d208;
  DAT_101d3d998 = FUN_100423e2c;
  DAT_101d3d9a0 = PTR_s_Buff_Leo_PassiveBehaviors_10185d200;
  DAT_101d3d988 = FUN_100423c90;
  DAT_101d3d990 = PTR_s_Buff_Sanfeng_Talent_TalentC_10185d1f8;
  DAT_101d3d978 = FUN_100423b50;
  DAT_101d3d980 = PTR_s_Buff_Sanfeng_Talent_TalentB_10185d1f0;
  DAT_101d3d968 = FUN_100423b18;
  DAT_101d3d970 = PTR_s_Buff_Sanfeng_Talent_TalentA_10185b620;
  DAT_101d3d958 = FUN_100423a74;
  DAT_101d3d960 = PTR_s_Buff_Sanfeng_C_Charging_10185b628;
  DAT_101d3d948 = FUN_1004239e0;
  DAT_101d3d950 = PTR_s_Buff_Sanfeng_B_Charging_10185b618;
  DAT_101d3d938 = FUN_100423858;
  DAT_101d3d940 = PTR_s_Buff_Sanfeng_A_PostStanceAttack_10185b608;
  DAT_101d3d928 = FUN_100423708;
  DAT_101d3d930 = PTR_s_Buff_Sanfeng_A_SuccessfulCounter_10185b610;
  DAT_101d3d918 = FUN_100423688;
  DAT_101d3d920 = PTR_s_Buff_Sanfeng_A_InCounterStance_10185b600;
  DAT_101d3d908 = FUN_10042363c;
  DAT_101d3d910 = PTR_s_Buff_Sanfeng_AbilityOverdrive_De_10185b5f0;
  DAT_101d3d8f8 = FUN_1004235a4;
  DAT_101d3d900 = PTR_s_Buff_Sanfeng_PerkDamageReduction_10185b5f8;
  DAT_101d3d8e8 = FUN_1004234e0;
  DAT_101d3d8f0 = PTR_s_Buff_LanceBall_ReturnBallToCente_10185d1e8;
  DAT_101d3d8d8 = FUN_100423434;
  DAT_101d3d8e0 = PTR_s_Buff_LanceBall_Center_10185d1e0;
  DAT_101d3d8c8 = FUN_100423348;
  DAT_101d3d8d0 = PTR_s_Buff_LanceBall_ScoringBuff_10185d1d8;
  DAT_101d3d8b8 = FUN_1004231f0;
  DAT_101d3d8c0 = PTR_s_Buff_LanceBall_ScoringBuff_Aura_10185d1d0;
  DAT_101d3d8a8 = FUN_100423194;
  DAT_101d3d8b0 = DAT_10185b588;
  DAT_101d3d898 = FUN_10042314c;
  DAT_101d3d8a0 = PTR_s_Buff_LanceBall_Lance_B_ImpactPFX_10185d1c8;
  DAT_101d3d888 = FUN_1004230a0;
  DAT_101d3d890 = PTR_s_Buff_LanceBall_Lance_A_LandingIn_10185d1c0;
  DAT_101d3d878 = FUN_100422fc0;
  DAT_101d3d880 = PTR_s_Buff_LanceBall_Lance_A_Recovery_10185b580;
  DAT_101d3d868 = FUN_100422fbc;
  DAT_101d3d870 = PTR_s_Buff_LanceBall_Lance_PlayAAPfx_10185b570;
  DAT_101d3d858 = FUN_100422ee8;
  DAT_101d3d860 = PTR_s_Buff_Inara_Talent_TalentC_10185b530;
  DAT_101d3d848 = FUN_100422e3c;
  DAT_101d3d850 = PTR_s_Buff_Inara_Talent_TalentB_10185b550;
  DAT_101d3d838 = FUN_100422da8;
  DAT_101d3d840 = PTR_s_Buff_Inara_Talent_TalentA_10185b548;
  DAT_101d3d828 = FUN_100422cd8;
  DAT_101d3d830 = PTR_s_Buff_Inara_C_SpeedBoost_Control_10185b560;
  DAT_101d3d818 = FUN_100422c7c;
  DAT_101d3d820 = PTR_s_Buff_Inara_C_HasDashAvailable_10185b568;
  DAT_101d3d810 = PTR_s_Buff_Inara_C_SpeedBoost_10185d1b8;
  DAT_101d3dce8 = FUN_100426328;
  DAT_101d3dcf0 = PTR_s_Buff_Miho_Perk_RefreshAndRestore_10185d2e0;
  DAT_101d3dcf8 = FUN_10042657c;
  DAT_101d3dd00 = PTR_s_Buff_Miho_Perk_Barrier_10185d2e8;
  DAT_101d3dd08 = FUN_100426680;
  DAT_101d3dd10 = PTR_s_Buff_Miho_Wave_10185b7b0;
  DAT_101d3dd18 = FUN_1004266cc;
  DAT_101d3dd20 = PTR_s_Buff_Miho_Wave_ProjectileKillPFX_10185d2f0;
  DAT_101d3dd28 = FUN_1004267bc;
  DAT_101d3dd30 = PTR_s_Buff_Miho_Wave_PassiveBehaviors_10185d2f8;
  DAT_101d3dd38 = FUN_100426848;
  DAT_101d3dd40 = PTR_s_Buff_Miho_A_ApplyDamage_10185b788;
  DAT_101d3dd48 = FUN_100426900;
  DAT_101d3dd50 = PTR_s_Buff_Miho_A_Vanish_10185d300;
  DAT_101d3dd58 = FUN_1004269cc;
  DAT_101d3dd60 = PTR_s_Buff_Miho_B_ApplyDamage_10185b798;
  DAT_101d3dd68 = FUN_100426a0c;
  DAT_101d3dd70 = PTR_s_Buff_Miho_B_FinalSlash_10185b7a0;
  DAT_101d3dd78 = FUN_100426ac8;
  DAT_101d3dd80 = PTR_s_Buff_Miho_C_SlashCounter_10185b790;
  DAT_101d3dd88 = FUN_100426acc;
  DAT_101d3dd90 = PTR_s_Buff_Miho_C_ApplyDamage_10185d308;
  DAT_101d3dd98 = FUN_100426d1c;
  DAT_101d3dda0 = PTR_s_Buff_Miho_C_PFX_10185d310;
  DAT_101d3dda8 = FUN_100426df4;
  DAT_101d3ddb0 = PTR_s_Buff_Miho_KillSelf_10185b7a8;
  DAT_101d3ddb8 = FUN_100426e9c;
  DAT_101d3ddc0 = PTR_s_Buff_Miho_Talent_TalentA_10185d318;
  DAT_101d3ddc8 = FUN_100426ed0;
  DAT_101d3ddd0 = PTR_s_Buff_Miho_Talent_TalentB_10185d320;
  DAT_101d3ddd8 = FUN_100426fc0;
  DAT_101d3dde0 = PTR_s_Buff_Miho_Talent_TalentC_10185d328;
  DAT_101d3dde8 = FUN_1004270fc;
  DAT_101d3ddf0 = PTR_s_Buff_Miho_TalentA_Marker_10185d330;
  DAT_101d3ddf8 = FUN_100427238;
  DAT_101d3de00 = PTR_s_Buff_Miho_TalentB_Heal_10185d338;
  DAT_101d3de08 = FUN_10042723c;
  DAT_101d3de10 = PTR_s_Buff_Ishtar_PassiveBehaviors_10185d340;
  DAT_101d3de18 = FUN_1004272a4;
  DAT_101d3de20 = PTR_s_Buff_Ishtar_OnDeath_10185d348;
  DAT_101d3de28 = FUN_100427388;
  DAT_101d3de30 = PTR_s_Buff_Ishtar_Passive_B_AttackSpee_10185d350;
  DAT_101d3de38 = FUN_1004273d4;
  DAT_101d3de40 = PTR_s_Buff_Ishtar_Minion_Stats_10185d358;
  DAT_101d3de48 = FUN_100427424;
  DAT_101d3de50 = PTR_s_Buff_Ishtar_Minion_SemiTickHealt_10185d360;
  DAT_101d3de58 = FUN_10042762c;
  DAT_101d3de60 = PTR_s_Buff_Ishtar_Minion_PFX_10185b7b8;
  DAT_101d3de68 = FUN_1004276e0;
  DAT_101d3de70 = PTR_s_Buff_Ishtar_Minion_KillMyself_10185d368;
  DAT_101d3de78 = FUN_100427874;
  DAT_101d3de80 = PTR_s_Buff_Ishtar_Minion_WarningPFX_10185b7c0;
  DAT_101d3de88 = FUN_10042788c;
  DAT_101d3de90 = PTR_s_Buff_Ishtar_Minion_BasicAttackDa_10185d370;
  DAT_101d3de98 = FUN_1004279cc;
  DAT_101d3dea0 = PTR_s_Buff_Ishtar_Minion_Invulnerable_10185b820;
  DAT_101d3dea8 = FUN_100427ac8;
  DAT_101d3deb0 = PTR_s_Buff_Ishtar_Minion_A_DashDamage_10185d378;
  DAT_101d3deb8 = FUN_100427aec;
  DAT_101d3dec0 = PTR_s_Buff_Ishtar_Minion_UseSelfShot_10185b808;
  DAT_101d3dec8 = FUN_100427c00;
  DAT_101d3ded0 = PTR_s_Buff_Ishtar_Minion_UseB_10185b810;
  DAT_101d3ded8 = FUN_100427c40;
  DAT_101d3dee0 = PTR_s_Buff_Ishtar_Minion_B_Damage_10185b7c8;
  DAT_101d3dee8 = FUN_100427c6c;
  DAT_101d3def0 = PTR_s_Buff_Ishtar_Minion_B_Slow_10185d380;
  DAT_101d3def8 = FUN_100427dbc;
  DAT_101d3df00 = PTR_s_Buff_Ishtar_Attack_Halt_10185d388;
  DAT_101d3df08 = FUN_100427df8;
  DAT_101d3df10 = PTR_s_Buff_Ishtar_A_Strafing_10185b7e8;
  DAT_101d3df18 = FUN_100427dfc;
  DAT_101d3df20 = PTR_s_Buff_Ishtar_B_Strafing_10185b818;
  DAT_101d3df28 = FUN_100427e50;
  DAT_101d3df30 = PTR_s_Buff_Ishtar_B_MovementSpeed_10185d390;
  DAT_101d3df38 = FUN_100427e90;
  DAT_101d3df40 = PTR_s_Buff_Ishtar_MinionTracker_10185b7f0;
  DAT_101d3df48 = FUN_100427ecc;
  DAT_101d3df50 = PTR_s_Buff_Ishtar_C_Empowerment_10185b7e0;
  DAT_101d3df58 = FUN_100427ed0;
  DAT_101d3df60 = PTR_s_Buff_Ishtar_Talent_TalentA_10185d398;
  DAT_101d3df68 = FUN_100428598;
  DAT_101d3df70 = PTR_s_Buff_Ishtar_Talent_TalentB_10185b7d0;
  DAT_101d3df78 = FUN_100428640;
  DAT_101d3df80 = PTR_s_Buff_Ishtar_Talent_TalentC_10185b7f8;
  DAT_101d3df88 = FUN_1004286b0;
  DAT_101d3df90 = PTR_s_Buff_Ishtar_TalentA_Indomitable_10185d3a0;
  DAT_101d3df98 = FUN_1004286b4;
  DAT_101d3dfa0 = PTR_s_Buff_Ishtar_TalentA_IndomitableM_10185d3a8;
  DAT_101d3dfa8 = FUN_100428804;
  DAT_101d3dfb0 = PTR_s_Buff_Ishtar_TalentB_Immobilize_10185b7d8;
  DAT_101d3dfb8 = FUN_10042885c;
  DAT_101d3dfc0 = PTR_s_Buff_Ishtar_TalentC_AtkSpeed_10185b800;
  DAT_101d3dfc8 = FUN_100428870;
  DAT_101d3dfd0 = PTR_s_Buff_Viola_PassiveBehaviors_10185d3b0;
  DAT_101d3dfd8 = FUN_1004288e8;
  DAT_101d3dfe0 = PTR_s_Buff_Viola_Perk_Cooldown_10185d3b8;
  DAT_101d3dfe8 = FUN_10042894c;
  DAT_101d3dff0 = PTR_s_Buff_Viola_MusicNoteA_1_10185b868;
  DAT_101d3dff8 = FUN_1004289c4;
  DAT_101d3e000 = PTR_s_Buff_Viola_MusicNoteA_2_10185b850;
  DAT_101d3e008 = FUN_100428bc4;
  DAT_101d3e010 = PTR_s_Buff_Viola_MusicNoteA_3_10185b838;
  DAT_101d3e018 = FUN_100428db4;
  DAT_101d3e020 = PTR_s_Buff_Viola_MusicNoteB_1_10185b860;
  DAT_101d3e028 = FUN_100428fa4;
  DAT_101d3e030 = PTR_s_Buff_Viola_MusicNoteB_2_10185b848;
  DAT_101d3e038 = FUN_100429194;
  DAT_101d3e040 = PTR_s_Buff_Viola_MusicNoteB_3_10185b830;
  DAT_101d3e048 = FUN_100429384;
  DAT_101d3e050 = PTR_s_Buff_Viola_MusicNoteA_Tracker_10185d3c0;
  DAT_101d3e058 = FUN_100429574;
  DAT_101d3e060 = PTR_s_Buff_Viola_MusicNoteB_Tracker_10185d3c8;
  DAT_101d3e068 = FUN_100429578;
  DAT_101d3e070 = PTR_s_Buff_Viola_MusicNote_Placement_T_10185b8b8;
  DAT_101d3e078 = FUN_10042957c;
  DAT_101d3e080 = PTR_s_Buff_Viola_MusicNote_Placement_1_10185b858;
  DAT_101d3e088 = FUN_100429964;
  DAT_101d3e090 = PTR_s_Buff_Viola_MusicNote_Placement_2_10185b840;
  DAT_101d3e098 = FUN_1004299b8;
  DAT_101d3e0a0 = PTR_s_Buff_Viola_MusicNote_Placement_3_10185b828;
  DAT_101d3e0a8 = FUN_100429a0c;
  DAT_101d3e0b0 = PTR_s_Buff_Viola_MusicNote_Placement_L_10185b890;
  DAT_101d3e0b8 = FUN_100429a60;
  DAT_101d3e0c0 = PTR_s_Buff_Viola_MusicNote_Placement_1_10185b878;
  DAT_101d3e0c8 = FUN_100429a64;
  DAT_101d3e0d0 = PTR_s_Buff_Viola_MusicNote_Placement_2_10185b880;
  DAT_101d3e0d8 = FUN_100429b14;
  DAT_101d3e0e0 = PTR_s_Buff_Viola_MusicNote_Placement_3_10185b888;
  DAT_101d3e0e8 = FUN_100429bc4;
  DAT_101d3e0f0 = PTR_s_Buff_Viola_Grant_C1_10185b898;
  DAT_101d3e0f8 = FUN_100429c74;
  DAT_101d3e100 = PTR_s_Buff_Viola_Grant_C2_10185b8a0;
  DAT_101d3e108 = FUN_100429d3c;
  DAT_101d3e110 = PTR_s_Buff_Viola_Grant_C3_10185b8a8;
  DAT_101d3e118 = FUN_100429e04;
  DAT_101d3e120 = PTR_s_Buff_Viola_Grant_C4_10185b8b0;
  DAT_101d3e128 = FUN_100429ecc;
  DAT_101d3e130 = PTR_s_Buff_Viola_C1_Aura_10185b870;
  DAT_101d3e138 = FUN_100429f94;
  DAT_101d3e140 = PTR_s_Buff_Viola_C2_Aura_10185b8c0;
  DAT_101d3e148 = FUN_10042a2bc;
  DAT_101d3e150 = PTR_s_Buff_Viola_C3_Aura_10185b8c8;
  DAT_101d3e158 = FUN_10042a5e4;
  DAT_101d3e160 = DAT_10185b8d0;
  DAT_101d3e168 = FUN_10042a90c;
  DAT_101d3e170 = PTR_s_Buff_Viola_A_Shield_10185d3d0;
  DAT_101d3e178 = FUN_10042ac34;
  DAT_101d3e180 = PTR_s_Buff_Viola_B_Slow_10185d3d8;
  DAT_101d3e188 = FUN_10042ad1c;
  DAT_101d3e190 = PTR_s_Buff_Viola_Song_1_Control_10185d3e0;
  DAT_101d3e198 = FUN_10042ad50;
  DAT_101d3e1a0 = PTR_s_Buff_Viola_Song_2_Control_10185d3e8;
  DAT_101d3e1a8 = FUN_10042adf4;
  DAT_101d3e1b0 = PTR_s_Buff_Viola_Song_3_Control_10185d3f0;
  DAT_101d3e1b8 = FUN_10042ae50;
  DAT_101d3e1c0 = PTR_s_Buff_Viola_Song_4_Control_10185d3f8;
  DAT_101d3e1c8 = FUN_10042aef0;
  DAT_101d3e1d0 = PTR_s_Buff_Viola_Drowsy_10185d400;
  DAT_101d3e1d8 = FUN_10042b00c;
  DAT_101d3e1e0 = PTR_s_Buff_Viola_Sleep_10185d408;
  DAT_101d3e1e8 = FUN_10042b13c;
  DAT_101d3e1f0 = PTR_s_Buff_Viola_C_DoT_10185d410;
  DAT_101d3e1f8 = FUN_10042b240;
  DAT_101d3e200 = PTR_s_Buff_Viola_C_Slow_10185d418;
  DAT_101d3e208 = FUN_10042b3a8;
  DAT_101d3e210 = PTR_s_Buff_Viola_ATK_CDR_10185d420;
  DAT_101d3e218 = FUN_10042b3b0;
  DAT_101d3e220 = PTR_s_Buff_Viola_Cleanse_SPD_10185d428;
  DAT_101d3e228 = FUN_10042b4d4;
  DAT_101d3e230 = PTR_s_Buff_Viola_SpeedBoost_10185d430;
  DAT_101d3e238 = FUN_10042b594;
  DAT_101d3e240 = PTR_s_Buff_Viola_Talent_TalentA_10185d438;
  DAT_101d3e248 = FUN_10042b5d0;
  DAT_101d3e250 = PTR_s_Buff_Viola_Talent_TalentB_10185d440;
  DAT_101d3e258 = FUN_10042b5d4;
  DAT_101d3e260 = PTR_s_Buff_Viola_Talent_TalentC_10185d448;
  DAT_101d3e268 = FUN_10042b924;
  DAT_101d3e270 = PTR_s_Buff_Viola_TalentB_Enemy_DamageI_10185d450;
  DAT_101d3e278 = FUN_10042bec8;
  DAT_101d3e280 = PTR_s_Buff_Viola_TalentB_Ally_DamageDe_10185d458;
  DAT_101d3e288 = FUN_10042bf48;
  DAT_101d3e290 = PTR_s_Buff_Viola_TalentB_Control_Enemy_10185d460;
  DAT_101d3e298 = FUN_10042bfc8;
  DAT_101d3e2a0 = PTR_s_Buff_Viola_TalentB_Control_Ally_10185d468;
  DAT_101d3e2a8 = FUN_10042c070;
  DAT_101d3e2b0 = PTR_s_Buff_Karas_PerkApply_10185d470;
  DAT_101d3e2b8 = FUN_10042c118;
  DAT_101d3e2c0 = PTR_s_Buff_Karas_PerkBuff_10185d478;
  DAT_101d3e2c8 = FUN_10042c170;
  DAT_101d3e2d0 = DAT_10185b968;
  DAT_101d3e2d8 = FUN_10042c1d8;
  DAT_101d3e2e0 = PTR_s_Buff_Karas_LockFlurryBlade_10185b958;
  DAT_101d3e2e8 = FUN_10042c228;
  DAT_101d3e2f0 = PTR_s_Buff_Karas_Talent_TalentA_10185d480;
  DAT_101d3e2f8 = FUN_10042c3d8;
  DAT_101d3e300 = PTR_s_Buff_Karas_Talent_TalentB_10185b950;
  DAT_101d3e308 = FUN_10042c4a8;
  DAT_101d3e310 = PTR_s_Buff_Karas_Talent_TalentC_10185b960;
  DAT_101d3e318 = FUN_10042c55c;
  DAT_101d3e320 = PTR_s_Buff_Karas_A_Slow_10185d488;
  DAT_101d3e328 = FUN_10042c5cc;
  DAT_101d3e330 = PTR_s_Buff_Karas_C_Slow_10185d490;
  DAT_101d3e338 = FUN_10042c600;
  DAT_101d3e340 = PTR_s_Buff_Shin_SetFlameMeter_10185b9b8;
  DAT_101d3e348 = FUN_10042c634;
  DAT_101d3e350 = PTR_s_Buff_Shin_GainFlames_10185d498;
  DAT_101d3e358 = FUN_10042c74c;
  DAT_101d3e360 = PTR_s_Buff_Shin_ActivateFlames_10185d4a0;
  DAT_101d3e368 = FUN_10042c8c8;
  DAT_101d3e370 = PTR_s_Buff_Shin_B_Slow_10185d4a8;
  DAT_101d3e378 = FUN_10042cacc;
  DAT_101d3e380 = PTR_s_Buff_Shin_B_Root_10185d4b0;
  DAT_101d3e388 = FUN_10042cb00;
  DAT_101d3e390 = PTR_s_Buff_Shin_FlamePfx_10185d4b8;
  DAT_101d3e398 = FUN_10042cb14;
  DAT_101d3e3a0 = PTR_s_Buff_Shin_Talent_TalentA_10185d4c0;
  DAT_101d3e3a8 = FUN_10042cc64;
  DAT_101d3e3b0 = PTR_s_Buff_Shin_Talent_TalentB_10185d4c8;
  DAT_101d3e3b8 = FUN_10042cd5c;
  DAT_101d3e3c0 = PTR_s_Buff_Shin_Talent_TalentC_10185d4d0;
  DAT_101d3e3c8 = FUN_10042cefc;
  DAT_101d3e3d0 = PTR_s_Buff_Amael_A_Charge_Control_10185b940;
  DAT_101d3e3d8 = FUN_10042cff0;
  DAT_101d3e3e0 = PTR_s_Buff_Amael_A_Charging_10185b920;
  DAT_101d3e3e8 = FUN_10042d324;
  DAT_101d3e3f0 = PTR_s_Buff_Amael_A_Charged_10185b930;
  DAT_101d3e3f8 = FUN_10042d484;
  DAT_101d3e400 = PTR_s_Buff_Amael_PowerPoseDmg_10185d4d8;
  DAT_101d3e408 = FUN_10042d598;
  DAT_101d3e410 = PTR_s_Buff_Amael_PowerStun_10185d4e0;
  DAT_101d3e418 = FUN_10042d604;
  DAT_101d3e420 = PTR_s_Buff_Amael_Talent_TalentA_10185b928;
  DAT_101d3e428 = FUN_10042d654;
  DAT_101d3e430 = PTR_s_Buff_Amael_Talent_TalentB_10185b938;
  DAT_101d3e438 = FUN_10042d6c4;
  DAT_101d3e440 = PTR_s_Buff_Amael_Talent_TalentC_10185d4e8;
  DAT_101d3e448 = FUN_10042d790;
  DAT_101d3e450 = PTR_s_Buff_Amael_EmpowerMeter_10185b918;
  DAT_101d3e458 = FUN_10042d8a8;
  DAT_101d3e460 = PTR_s_Buff_Amael_PowerReady_10185b948;
  DAT_101d3e468 = FUN_10042da28;
  DAT_101d3e470 = PTR_s_Buff_Maaya_A_Debuff_10185d4f0;
  DAT_101d3e478 = FUN_10042da2c;
  DAT_101d3e480 = PTR_s_Buff_Maaya_C_Attachment_Target_10185b9c0;
  DAT_101d3e488 = FUN_10042da60;
  DAT_101d3e490 = PTR_s_Buff_Maaya_C_Selected_10185b9c8;
  DAT_101d3e498 = FUN_10042dab0;
  DAT_101d3e4a0 = PTR_s_Buff_Maaya_Cloud_10185d4f8;
  DAT_101d3e4a8 = FUN_10042db50;
  DAT_101d3e4b0 = PTR_s_Buff_Maaya_Gravitywave_10185d500;
  DAT_101d3e4b8 = FUN_10042db54;
  DAT_101d3e4c0 = PTR_s_Buff_Maaya_A_Control_10185d508;
  DAT_101d3e4c8 = FUN_10042dd60;
  DAT_101d3e4d0 = PTR_s_Buff_Maaya_A_Selected_10185d510;
  DAT_101d3e4d8 = FUN_10042de58;
  DAT_101d3e4e0 = PTR_s_Buff_Maaya_GravityDisc_10185d518;
  DAT_101d3e4e8 = FUN_10042de5c;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a82f0(void)

{
  if ((DAT_10185e5c0 & 1) == 0) {
    uRam000000010185e598 = 0x100000000;
    _DAT_10185e590 = 0;
    uRam000000010185e5a8 = 0x300000000;
    _DAT_10185e5a0 = 0x200000000;
    DAT_10185e5c8 = DAT_10185e5c8 + 6;
    uRam000000010185e5b8 = 0x500000000;
    _DAT_10185e5b0 = 0x400000000;
    DAT_10185e5c0 = 1;
  }
  return;
}




void FUN_1004a8340(void)

{
  long lVar1;
  
  if ((DAT_10185e5d0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854cb0,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185e590;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185e5c8;
    DAT_10185e5d0 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a83a0(void)

{
  if ((DAT_10185e748 & 1) == 0) {
    uRam000000010185e5e0 = 0x100000000;
    _DAT_10185e5d8 = 0;
    uRam000000010185e5f0 = 0x300000000;
    _DAT_10185e5e8 = 0x200000000;
    uRam000000010185e600 = 0x500000000;
    _DAT_10185e5f8 = 0x400000000;
    uRam000000010185e610 = 0x700000000;
    _DAT_10185e608 = 0x600000000;
    uRam000000010185e620 = 0x900000000;
    _DAT_10185e618 = 0x800000000;
    uRam000000010185e630 = 0xb00000000;
    _DAT_10185e628 = 0xa00000000;
    uRam000000010185e640 = 0xd00000000;
    _DAT_10185e638 = 0xc00000000;
    uRam000000010185e650 = 0xf00000000;
    _DAT_10185e648 = 0xe00000000;
    uRam000000010185e660 = 0x1100000000;
    _DAT_10185e658 = 0x1000000000;
    uRam000000010185e670 = 0x1300000000;
    _DAT_10185e668 = 0x1200000000;
    uRam000000010185e680 = 0x1500000000;
    _DAT_10185e678 = 0x1400000000;
    uRam000000010185e690 = 0x1700000000;
    _DAT_10185e688 = 0x1600000000;
    uRam000000010185e6a0 = 0x1900000000;
    _DAT_10185e698 = 0x1800000000;
    uRam000000010185e6b0 = 0x1b00000000;
    _DAT_10185e6a8 = 0x1a00000000;
    uRam000000010185e6c0 = 0x1d00000000;
    _DAT_10185e6b8 = 0x1c00000000;
    uRam000000010185e6d0 = 0x1f00000000;
    _DAT_10185e6c8 = 0x1e00000000;
    uRam000000010185e6e0 = 0x2100000000;
    _DAT_10185e6d8 = 0x2000000000;
    uRam000000010185e6f0 = 0x2300000000;
    _DAT_10185e6e8 = 0x2200000000;
    uRam000000010185e700 = 0x2500000000;
    _DAT_10185e6f8 = 0x2400000000;
    uRam000000010185e710 = 0x2700000000;
    _DAT_10185e708 = 0x2600000000;
    uRam000000010185e720 = 0x2900000000;
    _DAT_10185e718 = 0x2800000000;
    uRam000000010185e730 = 0x2b00000000;
    _DAT_10185e728 = 0x2a00000000;
    DAT_10185e750 = DAT_10185e750 + 0x2e;
    uRam000000010185e740 = 0x2d00000000;
    _DAT_10185e738 = 0x2c00000000;
    DAT_10185e748 = 1;
  }
  return;
}




void FUN_1004a84b8(void)

{
  long lVar1;
  
  if ((DAT_10185e758 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854cd8,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185e5d8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185e750;
    DAT_10185e758 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a8518(void)

{
  if ((DAT_10185e7b8 & 1) == 0) {
    uRam000000010185e768 = 0x100000000;
    _DAT_10185e760 = 0;
    uRam000000010185e778 = 0x300000000;
    _DAT_10185e770 = 0x200000000;
    uRam000000010185e788 = 0x500000000;
    _DAT_10185e780 = 0x400000000;
    uRam000000010185e798 = 0x700000000;
    _DAT_10185e790 = 0x600000000;
    uRam000000010185e7a8 = 0x900000000;
    _DAT_10185e7a0 = 0x800000000;
    DAT_10185e7c0 = DAT_10185e7c0 + 0xb;
    DAT_10185e7b0 = 0xa00000000;
    DAT_10185e7b8 = 1;
  }
  return;
}




void FUN_1004a8588(void)

{
  long lVar1;
  
  if ((DAT_10185e7c8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854d00,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185e760;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185e7c0;
    DAT_10185e7c8 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a85e8(void)

{
  if ((DAT_10185e808 & 1) == 0) {
    uRam000000010185e7d8 = 0x100000000;
    _DAT_10185e7d0 = 0;
    uRam000000010185e7e8 = 0x300000000;
    _DAT_10185e7e0 = 0x200000000;
    uRam000000010185e7f8 = 0x500000000;
    _DAT_10185e7f0 = 0x400000000;
    DAT_10185e810 = DAT_10185e810 + 7;
    DAT_10185e800 = 0x600000000;
    DAT_10185e808 = 1;
  }
  return;
}




void FUN_1004a8644(void)

{
  long lVar1;
  
  if ((DAT_10185e818 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854d28,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185e7d0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185e810;
    DAT_10185e818 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a86a4(void)

{
  if ((DAT_10185e840 & 1) == 0) {
    DAT_10185e848 = DAT_10185e848 + 4;
    uRam000000010185e828 = 0x100000000;
    _DAT_10185e820 = 0;
    uRam000000010185e838 = 0x300000000;
    _DAT_10185e830 = 0x200000000;
    DAT_10185e840 = 1;
  }
  return;
}




void FUN_1004a86e8(void)

{
  long lVar1;
  
  if ((DAT_10185e850 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854d50,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185e820;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185e848;
    DAT_10185e850 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a8748(void)

{
  if ((DAT_10185e878 & 1) == 0) {
    DAT_10185e880 = DAT_10185e880 + 4;
    uRam000000010185e860 = 0x100000000;
    _DAT_10185e858 = 0;
    uRam000000010185e870 = 0x300000000;
    _DAT_10185e868 = 0x200000000;
    DAT_10185e878 = 1;
  }
  return;
}




void FUN_1004a878c(void)

{
  long lVar1;
  
  if ((DAT_10185e888 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854d78,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185e858;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185e880;
    DAT_10185e888 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a87ec(void)

{
  if ((DAT_10185e8b0 & 1) == 0) {
    DAT_10185e8b8 = DAT_10185e8b8 + 4;
    uRam000000010185e898 = 0x100000000;
    _DAT_10185e890 = 0;
    uRam000000010185e8a8 = 0x300000000;
    _DAT_10185e8a0 = 0x200000000;
    DAT_10185e8b0 = 1;
  }
  return;
}




void FUN_1004a8830(void)

{
  long lVar1;
  
  if ((DAT_10185e8c0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854da0,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185e890;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185e8b8;
    DAT_10185e8c0 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a8890(void)

{
  if ((DAT_10185e8e0 & 1) == 0) {
    uRam000000010185e8d0 = 0x100000000;
    _DAT_10185e8c8 = 0;
    DAT_10185e8e8 = DAT_10185e8e8 + 3;
    DAT_10185e8d8 = 0x200000000;
    DAT_10185e8e0 = 1;
  }
  return;
}




void FUN_1004a88d8(void)

{
  long lVar1;
  
  if ((DAT_10185e8f0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854dc8,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185e8c8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185e8e8;
    DAT_10185e8f0 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a8938(void)

{
  if ((DAT_10185e920 & 1) == 0) {
    uRam000000010185e900 = 0x100000000;
    _DAT_10185e8f8 = 0;
    uRam000000010185e910 = 0x300000000;
    _DAT_10185e908 = 0x200000000;
    DAT_10185e928 = DAT_10185e928 + 5;
    DAT_10185e918 = 0x400000000;
    DAT_10185e920 = 1;
  }
  return;
}




void FUN_1004a8988(void)

{
  long lVar1;
  
  if ((DAT_10185e930 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854df0,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185e8f8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185e928;
    DAT_10185e930 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a89e8(void)

{
  if ((DAT_10185e950 & 1) == 0) {
    uRam000000010185e940 = 0x100000000;
    _DAT_10185e938 = 0;
    DAT_10185e958 = DAT_10185e958 + 3;
    DAT_10185e948 = 0x200000000;
    DAT_10185e950 = 1;
  }
  return;
}




void FUN_1004a8a30(void)

{
  long lVar1;
  
  if ((DAT_10185e960 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854e18,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185e938;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185e958;
    DAT_10185e960 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a8a90(void)

{
  if ((DAT_10185e978 & 1) == 0) {
    DAT_10185e980 = DAT_10185e980 + 2;
    uRam000000010185e970 = 0x100000000;
    _DAT_10185e968 = 0;
    DAT_10185e978 = 1;
  }
  return;
}




void FUN_1004a8acc(void)

{
  long lVar1;
  
  if ((DAT_10185e988 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854e40,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185e968;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185e980;
    DAT_10185e988 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a8b2c(void)

{
  if ((DAT_10185e9a8 & 1) == 0) {
    uRam000000010185e998 = 0x100000000;
    _DAT_10185e990 = 0;
    DAT_10185e9b0 = DAT_10185e9b0 + 3;
    DAT_10185e9a0 = 0x200000000;
    DAT_10185e9a8 = 1;
  }
  return;
}




void FUN_1004a8b74(void)

{
  long lVar1;
  
  if ((DAT_10185e9b8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854e68,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185e990;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185e9b0;
    DAT_10185e9b8 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a8bd4(void)

{
  if ((DAT_10185ebd0 & 1) == 0) {
    uRam000000010185e9c8 = 0x100000000;
    _DAT_10185e9c0 = 0;
    uRam000000010185e9d8 = 0x300000000;
    _DAT_10185e9d0 = 0x200000000;
    uRam000000010185e9e8 = 0x500000000;
    _DAT_10185e9e0 = 0x400000000;
    uRam000000010185e9f8 = 0x700000000;
    _DAT_10185e9f0 = 0x600000000;
    uRam000000010185ea08 = 0x900000000;
    _DAT_10185ea00 = 0x800000000;
    uRam000000010185ea18 = 0xb00000000;
    _DAT_10185ea10 = 0xa00000000;
    uRam000000010185ea28 = 0xd00000000;
    _DAT_10185ea20 = 0xc00000000;
    uRam000000010185ea38 = 0xf00000000;
    _DAT_10185ea30 = 0xe00000000;
    uRam000000010185ea48 = 0x1100000000;
    _DAT_10185ea40 = 0x1000000000;
    uRam000000010185ea58 = 0x1300000000;
    _DAT_10185ea50 = 0x1200000000;
    uRam000000010185ea68 = 0x1500000000;
    _DAT_10185ea60 = 0x1400000000;
    uRam000000010185ea78 = 0x1700000000;
    _DAT_10185ea70 = 0x1600000000;
    uRam000000010185ea88 = 0x1900000000;
    _DAT_10185ea80 = 0x1800000000;
    uRam000000010185ea98 = 0x1b00000000;
    _DAT_10185ea90 = 0x1a00000000;
    uRam000000010185eaa8 = 0x1d00000000;
    _DAT_10185eaa0 = 0x1c00000000;
    uRam000000010185eab8 = 0x1f00000000;
    _DAT_10185eab0 = 0x1e00000000;
    uRam000000010185eac8 = 0x2100000000;
    _DAT_10185eac0 = 0x2000000000;
    uRam000000010185ead8 = 0x2300000000;
    _DAT_10185ead0 = 0x2200000000;
    uRam000000010185eae8 = 0x2500000000;
    _DAT_10185eae0 = 0x2400000000;
    uRam000000010185eaf8 = 0x2700000000;
    _DAT_10185eaf0 = 0x2600000000;
    uRam000000010185eb08 = 0x2900000000;
    _DAT_10185eb00 = 0x2800000000;
    uRam000000010185eb18 = 0x2b00000000;
    _DAT_10185eb10 = 0x2a00000000;
    uRam000000010185eb28 = 0x2d00000000;
    _DAT_10185eb20 = 0x2c00000000;
    uRam000000010185eb38 = 0x2f00000000;
    _DAT_10185eb30 = 0x2e00000000;
    uRam000000010185eb48 = 0x3100000000;
    _DAT_10185eb40 = 0x3000000000;
    uRam000000010185eb58 = 0x3300000000;
    _DAT_10185eb50 = 0x3200000000;
    uRam000000010185eb68 = 0x3500000000;
    _DAT_10185eb60 = 0x3400000000;
    uRam000000010185eb78 = 0x3700000000;
    _DAT_10185eb70 = 0x3600000000;
    uRam000000010185eb88 = 0x3900000000;
    _DAT_10185eb80 = 0x3800000000;
    uRam000000010185eb98 = 0x3b00000000;
    _DAT_10185eb90 = 0x3a00000000;
    uRam000000010185eba8 = 0x3d00000000;
    _DAT_10185eba0 = 0x3c00000000;
    uRam000000010185ebb8 = 0x3f00000000;
    _DAT_10185ebb0 = 0x3e00000000;
    DAT_10185ebd8 = DAT_10185ebd8 + 0x42;
    uRam000000010185ebc8 = 0x4100000000;
    _DAT_10185ebc0 = 0x4000000000;
    DAT_10185ebd0 = 1;
  }
  return;
}




void FUN_1004a8d50(void)

{
  long lVar1;
  
  if ((DAT_10185ebe0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854e90,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185e9c0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185ebd8;
    DAT_10185ebe0 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a8db0(void)

{
  if ((DAT_10185ec00 & 1) == 0) {
    uRam000000010185ebf0 = 0x100000000;
    _DAT_10185ebe8 = 0;
    DAT_10185ec08 = DAT_10185ec08 + 3;
    DAT_10185ebf8 = 0x200000000;
    DAT_10185ec00 = 1;
  }
  return;
}




void FUN_1004a8df8(void)

{
  long lVar1;
  
  if ((DAT_10185ec10 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854eb8,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185ebe8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185ec08;
    DAT_10185ec10 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a8e58(void)

{
  if ((DAT_10185ec68 & 1) == 0) {
    uRam000000010185ec20 = 0x100000000;
    _DAT_10185ec18 = 0;
    uRam000000010185ec30 = 0x300000000;
    _DAT_10185ec28 = 0x200000000;
    uRam000000010185ec40 = 0x500000000;
    _DAT_10185ec38 = 0x400000000;
    uRam000000010185ec50 = 0x700000000;
    _DAT_10185ec48 = 0x600000000;
    DAT_10185ec70 = DAT_10185ec70 + 10;
    uRam000000010185ec60 = 0x900000000;
    _DAT_10185ec58 = 0x800000000;
    DAT_10185ec68 = 1;
  }
  return;
}




void FUN_1004a8ebc(void)

{
  long lVar1;
  
  if ((DAT_10185ec78 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854ee0,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185ec18;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185ec70;
    DAT_10185ec78 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a8f1c(void)

{
  if ((DAT_10185eca0 & 1) == 0) {
    DAT_10185eca8 = DAT_10185eca8 + 4;
    uRam000000010185ec88 = 0x100000000;
    _DAT_10185ec80 = 0;
    uRam000000010185ec98 = 0x300000000;
    _DAT_10185ec90 = 0x200000000;
    DAT_10185eca0 = 1;
  }
  return;
}




void FUN_1004a8f60(void)

{
  long lVar1;
  
  if ((DAT_10185ecb0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854f08,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185ec80;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185eca8;
    DAT_10185ecb0 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a8fc0(void)

{
  if ((DAT_10185ece0 & 1) == 0) {
    uRam000000010185ecc0 = 0x100000000;
    _DAT_10185ecb8 = 0;
    uRam000000010185ecd0 = 0x300000000;
    _DAT_10185ecc8 = 0x200000000;
    DAT_10185ece8 = DAT_10185ece8 + 5;
    DAT_10185ecd8 = 0x400000000;
    DAT_10185ece0 = 1;
  }
  return;
}




void FUN_1004a9010(void)

{
  long lVar1;
  
  if ((DAT_10185ecf0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854f30,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185ecb8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185ece8;
    DAT_10185ecf0 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a9070(void)

{
  if ((DAT_10185ed18 & 1) == 0) {
    DAT_10185ed20 = DAT_10185ed20 + 4;
    uRam000000010185ed00 = 0x100000000;
    _DAT_10185ecf8 = 0;
    uRam000000010185ed10 = 0x300000000;
    _DAT_10185ed08 = 0x200000000;
    DAT_10185ed18 = 1;
  }
  return;
}




void FUN_1004a90b4(void)

{
  long lVar1;
  
  if ((DAT_10185ed28 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854f58,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185ecf8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185ed20;
    DAT_10185ed28 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a9114(void)

{
  if ((DAT_10185ed70 & 1) == 0) {
    uRam000000010185ed38 = 0x100000000;
    _DAT_10185ed30 = 0;
    uRam000000010185ed48 = 0x300000000;
    _DAT_10185ed40 = 0x200000000;
    DAT_10185ed78 = DAT_10185ed78 + 8;
    uRam000000010185ed58 = 0x500000000;
    _DAT_10185ed50 = 0x400000000;
    uRam000000010185ed68 = 0x700000000;
    _DAT_10185ed60 = 0x600000000;
    DAT_10185ed70 = 1;
  }
  return;
}




void FUN_1004a916c(void)

{
  long lVar1;
  
  if ((DAT_10185ed80 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854f80,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185ed30;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185ed78;
    DAT_10185ed80 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a91cc(void)

{
  if ((DAT_10185eda8 & 1) == 0) {
    DAT_10185edb0 = DAT_10185edb0 + 4;
    uRam000000010185ed90 = 0x100000000;
    _DAT_10185ed88 = 0;
    uRam000000010185eda0 = 0x300000000;
    _DAT_10185ed98 = 0x200000000;
    DAT_10185eda8 = 1;
  }
  return;
}




void FUN_1004a9210(void)

{
  long lVar1;
  
  if ((DAT_10185edb8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854fa8,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185ed88;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185edb0;
    DAT_10185edb8 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a9270(void)

{
  if ((DAT_10185ede8 & 1) == 0) {
    uRam000000010185edc8 = 0x100000000;
    _DAT_10185edc0 = 0;
    uRam000000010185edd8 = 0x300000000;
    _DAT_10185edd0 = 0x200000000;
    DAT_10185edf0 = DAT_10185edf0 + 5;
    DAT_10185ede0 = 0x400000000;
    DAT_10185ede8 = 1;
  }
  return;
}




void FUN_1004a92c0(void)

{
  long lVar1;
  
  if ((DAT_10185edf8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854fd0,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185edc0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185edf0;
    DAT_10185edf8 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a9320(void)

{
  if ((DAT_10185ee48 & 1) == 0) {
    uRam000000010185ee08 = 0x100000000;
    _DAT_10185ee00 = 0;
    uRam000000010185ee18 = 0x300000000;
    _DAT_10185ee10 = 0x200000000;
    uRam000000010185ee28 = 0x500000000;
    _DAT_10185ee20 = 0x400000000;
    uRam000000010185ee38 = 0x700000000;
    _DAT_10185ee30 = 0x600000000;
    DAT_10185ee50 = DAT_10185ee50 + 9;
    DAT_10185ee40 = 0x800000000;
    DAT_10185ee48 = 1;
  }
  return;
}




void FUN_1004a9384(void)

{
  long lVar1;
  
  if ((DAT_10185ee58 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101854ff8,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185ee00;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185ee50;
    DAT_10185ee58 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a93e4(void)

{
  if ((DAT_10185ee90 & 1) == 0) {
    uRam000000010185ee68 = 0x100000000;
    _DAT_10185ee60 = 0;
    uRam000000010185ee78 = 0x300000000;
    _DAT_10185ee70 = 0x200000000;
    DAT_10185ee98 = DAT_10185ee98 + 6;
    uRam000000010185ee88 = 0x500000000;
    _DAT_10185ee80 = 0x400000000;
    DAT_10185ee90 = 1;
  }
  return;
}




void FUN_1004a9434(void)

{
  long lVar1;
  
  if ((DAT_10185eea0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855020,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185ee60;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185ee98;
    DAT_10185eea0 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a9494(void)

{
  if ((DAT_10185ef28 & 1) == 0) {
    uRam000000010185eeb0 = 0x100000000;
    _DAT_10185eea8 = 0;
    uRam000000010185eec0 = 0x300000000;
    _DAT_10185eeb8 = 0x200000000;
    uRam000000010185eed0 = 0x500000000;
    _DAT_10185eec8 = 0x400000000;
    uRam000000010185eee0 = 0x700000000;
    _DAT_10185eed8 = 0x600000000;
    uRam000000010185eef0 = 0x900000000;
    _DAT_10185eee8 = 0x800000000;
    uRam000000010185ef00 = 0xb00000000;
    _DAT_10185eef8 = 0xa00000000;
    DAT_10185ef30 = DAT_10185ef30 + 0x10;
    uRam000000010185ef10 = 0xd00000000;
    _DAT_10185ef08 = 0xc00000000;
    uRam000000010185ef20 = 0xf00000000;
    _DAT_10185ef18 = 0xe00000000;
    DAT_10185ef28 = 1;
  }
  return;
}




void FUN_1004a9514(void)

{
  long lVar1;
  
  if ((DAT_10185ef38 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855048,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185eea8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185ef30;
    DAT_10185ef38 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a9574(void)

{
  if ((DAT_10185ef70 & 1) == 0) {
    uRam000000010185ef48 = 0x100000000;
    _DAT_10185ef40 = 0;
    uRam000000010185ef58 = 0x300000000;
    _DAT_10185ef50 = 0x200000000;
    DAT_10185ef78 = DAT_10185ef78 + 6;
    uRam000000010185ef68 = 0x500000000;
    _DAT_10185ef60 = 0x400000000;
    DAT_10185ef70 = 1;
  }
  return;
}




void FUN_1004a95c4(void)

{
  long lVar1;
  
  if ((DAT_10185ef80 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855070,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185ef40;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185ef78;
    DAT_10185ef80 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a9624(void)

{
  if ((DAT_10185f5d8 & 1) == 0) {
    uRam000000010185ef90 = 0x100000000;
    _DAT_10185ef88 = 0;
    uRam000000010185efa0 = 0x300000000;
    _DAT_10185ef98 = 0x200000000;
    uRam000000010185efb0 = 0x500000000;
    _DAT_10185efa8 = 0x400000000;
    uRam000000010185efc0 = 0x700000000;
    _DAT_10185efb8 = 0x600000000;
    uRam000000010185efd0 = 0x900000000;
    _DAT_10185efc8 = 0x800000000;
    uRam000000010185efe0 = 0xb00000000;
    _DAT_10185efd8 = 0xa00000000;
    uRam000000010185eff0 = 0xd00000000;
    _DAT_10185efe8 = 0xc00000000;
    uRam000000010185f000 = 0xf00000000;
    _DAT_10185eff8 = 0xe00000000;
    uRam000000010185f010 = 0x1100000000;
    _DAT_10185f008 = 0x1000000000;
    uRam000000010185f020 = 0x1300000000;
    _DAT_10185f018 = 0x1200000000;
    uRam000000010185f030 = 0x1500000000;
    _DAT_10185f028 = 0x1400000000;
    uRam000000010185f040 = 0x1700000000;
    _DAT_10185f038 = 0x1600000000;
    uRam000000010185f050 = 0x1900000000;
    _DAT_10185f048 = 0x1800000000;
    uRam000000010185f060 = 0x1b00000000;
    _DAT_10185f058 = 0x1a00000000;
    uRam000000010185f070 = 0x1d00000000;
    _DAT_10185f068 = 0x1c00000000;
    uRam000000010185f080 = 0x1f00000000;
    _DAT_10185f078 = 0x1e00000000;
    uRam000000010185f090 = 0x2100000000;
    _DAT_10185f088 = 0x2000000000;
    uRam000000010185f0a0 = 0x2300000000;
    _DAT_10185f098 = 0x2200000000;
    uRam000000010185f0b0 = 0x2500000000;
    _DAT_10185f0a8 = 0x2400000000;
    uRam000000010185f0c0 = 0x2700000000;
    _DAT_10185f0b8 = 0x2600000000;
    uRam000000010185f0d0 = 0x2900000000;
    _DAT_10185f0c8 = 0x2800000000;
    uRam000000010185f0e0 = 0x2b00000000;
    _DAT_10185f0d8 = 0x2a00000000;
    uRam000000010185f0f0 = 0x2d00000000;
    _DAT_10185f0e8 = 0x2c00000000;
    uRam000000010185f100 = 0x2f00000000;
    _DAT_10185f0f8 = 0x2e00000000;
    uRam000000010185f110 = 0x3100000000;
    _DAT_10185f108 = 0x3000000000;
    uRam000000010185f120 = 0x3300000000;
    _DAT_10185f118 = 0x3200000000;
    uRam000000010185f130 = 0x3500000000;
    _DAT_10185f128 = 0x3400000000;
    uRam000000010185f140 = 0x3700000000;
    _DAT_10185f138 = 0x3600000000;
    uRam000000010185f150 = 0x3900000000;
    _DAT_10185f148 = 0x3800000000;
    uRam000000010185f160 = 0x3b00000000;
    _DAT_10185f158 = 0x3a00000000;
    uRam000000010185f170 = 0x3d00000000;
    _DAT_10185f168 = 0x3c00000000;
    uRam000000010185f180 = 0x3f00000000;
    _DAT_10185f178 = 0x3e00000000;
    uRam000000010185f190 = 0x4100000000;
    _DAT_10185f188 = 0x4000000000;
    uRam000000010185f1a0 = 0x4300000000;
    _DAT_10185f198 = 0x4200000000;
    uRam000000010185f1b0 = 0x4500000000;
    _DAT_10185f1a8 = 0x4400000000;
    uRam000000010185f1c0 = 0x4700000000;
    _DAT_10185f1b8 = 0x4600000000;
    uRam000000010185f1d0 = 0x4900000000;
    _DAT_10185f1c8 = 0x4800000000;
    uRam000000010185f1e0 = 0x4b00000000;
    _DAT_10185f1d8 = 0x4a00000000;
    uRam000000010185f1f0 = 0x4d00000000;
    _DAT_10185f1e8 = 0x4c00000000;
    uRam000000010185f200 = 0x4f00000000;
    _DAT_10185f1f8 = 0x4e00000000;
    uRam000000010185f210 = 0x5100000000;
    _DAT_10185f208 = 0x5000000000;
    uRam000000010185f220 = 0x5300000000;
    _DAT_10185f218 = 0x5200000000;
    uRam000000010185f230 = 0x5500000000;
    _DAT_10185f228 = 0x5400000000;
    uRam000000010185f240 = 0x5700000000;
    _DAT_10185f238 = 0x5600000000;
    uRam000000010185f250 = 0x5900000000;
    _DAT_10185f248 = 0x5800000000;
    uRam000000010185f260 = 0x5b00000000;
    _DAT_10185f258 = 0x5a00000000;
    uRam000000010185f270 = 0x5d00000000;
    _DAT_10185f268 = 0x5c00000000;
    uRam000000010185f280 = 0x5f00000000;
    _DAT_10185f278 = 0x5e00000000;
    uRam000000010185f290 = 0x6100000000;
    _DAT_10185f288 = 0x6000000000;
    uRam000000010185f2a0 = 0x6300000000;
    _DAT_10185f298 = 0x6200000000;
    uRam000000010185f2b0 = 0x6500000000;
    _DAT_10185f2a8 = 0x6400000000;
    uRam000000010185f2c0 = 0x6700000000;
    _DAT_10185f2b8 = 0x6600000000;
    uRam000000010185f2d0 = 0x6900000000;
    _DAT_10185f2c8 = 0x6800000000;
    uRam000000010185f2e0 = 0x6b00000000;
    _DAT_10185f2d8 = 0x6a00000000;
    uRam000000010185f2f0 = 0x6d00000000;
    _DAT_10185f2e8 = 0x6c00000000;
    uRam000000010185f300 = 0x6f00000000;
    _DAT_10185f2f8 = 0x6e00000000;
    uRam000000010185f310 = 0x7100000000;
    _DAT_10185f308 = 0x7000000000;
    uRam000000010185f320 = 0x7300000000;
    _DAT_10185f318 = 0x7200000000;
    uRam000000010185f330 = 0x7500000000;
    _DAT_10185f328 = 0x7400000000;
    uRam000000010185f340 = 0x7700000000;
    _DAT_10185f338 = 0x7600000000;
    uRam000000010185f350 = 0x7900000000;
    _DAT_10185f348 = 0x7800000000;
    uRam000000010185f360 = 0x7b00000000;
    _DAT_10185f358 = 0x7a00000000;
    uRam000000010185f370 = 0x7d00000000;
    _DAT_10185f368 = 0x7c00000000;
    uRam000000010185f380 = 0x7f00000000;
    _DAT_10185f378 = 0x7e00000000;
    uRam000000010185f390 = 0x8100000000;
    _DAT_10185f388 = 0x8000000000;
    uRam000000010185f3a0 = 0x8300000000;
    _DAT_10185f398 = 0x8200000000;
    uRam000000010185f3b0 = 0x8500000000;
    _DAT_10185f3a8 = 0x8400000000;
    uRam000000010185f3c0 = 0x8700000000;
    _DAT_10185f3b8 = 0x8600000000;
    uRam000000010185f3d0 = 0x8900000000;
    _DAT_10185f3c8 = 0x8800000000;
    uRam000000010185f3e0 = 0x8b00000000;
    _DAT_10185f3d8 = 0x8a00000000;
    uRam000000010185f3f0 = 0x8d00000000;
    _DAT_10185f3e8 = 0x8c00000000;
    uRam000000010185f400 = 0x8f00000000;
    _DAT_10185f3f8 = 0x8e00000000;
    uRam000000010185f410 = 0x9100000000;
    _DAT_10185f408 = 0x9000000000;
    uRam000000010185f420 = 0x9300000000;
    _DAT_10185f418 = 0x9200000000;
    uRam000000010185f430 = 0x9500000000;
    _DAT_10185f428 = 0x9400000000;
    uRam000000010185f440 = 0x9700000000;
    _DAT_10185f438 = 0x9600000000;
    uRam000000010185f450 = 0x9900000000;
    _DAT_10185f448 = 0x9800000000;
    uRam000000010185f460 = 0x9b00000000;
    _DAT_10185f458 = 0x9a00000000;
    uRam000000010185f470 = 0x9d00000000;
    _DAT_10185f468 = 0x9c00000000;
    uRam000000010185f480 = 0x9f00000000;
    _DAT_10185f478 = 0x9e00000000;
    uRam000000010185f490 = 0xa100000000;
    _DAT_10185f488 = 0xa000000000;
    uRam000000010185f4a0 = 0xa300000000;
    _DAT_10185f498 = 0xa200000000;
    uRam000000010185f4b0 = 0xa500000000;
    _DAT_10185f4a8 = 0xa400000000;
    uRam000000010185f4c0 = 0xa700000000;
    _DAT_10185f4b8 = 0xa600000000;
    uRam000000010185f4d0 = 0xa900000000;
    _DAT_10185f4c8 = 0xa800000000;
    uRam000000010185f4e0 = 0xab00000000;
    _DAT_10185f4d8 = 0xaa00000000;
    uRam000000010185f4f0 = 0xad00000000;
    _DAT_10185f4e8 = 0xac00000000;
    uRam000000010185f500 = 0xaf00000000;
    _DAT_10185f4f8 = 0xae00000000;
    uRam000000010185f510 = 0xb100000000;
    _DAT_10185f508 = 0xb000000000;
    uRam000000010185f520 = 0xb300000000;
    _DAT_10185f518 = 0xb200000000;
    uRam000000010185f530 = 0xb500000000;
    _DAT_10185f528 = 0xb400000000;
    uRam000000010185f540 = 0xb700000000;
    _DAT_10185f538 = 0xb600000000;
    uRam000000010185f550 = 0xb900000000;
    _DAT_10185f548 = 0xb800000000;
    uRam000000010185f560 = 0xbb00000000;
    _DAT_10185f558 = 0xba00000000;
    uRam000000010185f570 = 0xbd00000000;
    _DAT_10185f568 = 0xbc00000000;
    uRam000000010185f580 = 0xbf00000000;
    _DAT_10185f578 = 0xbe00000000;
    uRam000000010185f590 = 0xc100000000;
    _DAT_10185f588 = 0xc000000000;
    uRam000000010185f5a0 = 0xc300000000;
    _DAT_10185f598 = 0xc200000000;
    uRam000000010185f5b0 = 0xc500000000;
    _DAT_10185f5a8 = 0xc400000000;
    uRam000000010185f5c0 = 0xc700000000;
    _DAT_10185f5b8 = 0xc600000000;
    DAT_10185f5e0 = DAT_10185f5e0 + 0xca;
    uRam000000010185f5d0 = 0xc900000000;
    _DAT_10185f5c8 = 0xc800000000;
    DAT_10185f5d8 = 1;
  }
  return;
}




void FUN_1004a9a90(void)

{
  long lVar1;
  
  if ((DAT_10185f5e8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855098,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185ef88;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185f5e0;
    DAT_10185f5e8 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a9af0(void)

{
  if ((DAT_10185f600 & 1) == 0) {
    DAT_10185f608 = DAT_10185f608 + 2;
    uRam000000010185f5f8 = 0x100000000;
    _DAT_10185f5f0 = 0;
    DAT_10185f600 = 1;
  }
  return;
}




void FUN_1004a9b2c(void)

{
  long lVar1;
  
  if ((DAT_10185f610 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018550c0,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185f5f0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185f608;
    DAT_10185f610 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a9b8c(void)

{
  if ((DAT_10185f628 & 1) == 0) {
    DAT_10185f630 = DAT_10185f630 + 2;
    uRam000000010185f620 = 0x100000000;
    _DAT_10185f618 = 0;
    DAT_10185f628 = 1;
  }
  return;
}




void FUN_1004a9bc8(void)

{
  long lVar1;
  
  if ((DAT_10185f638 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018550e8,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185f618;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185f630;
    DAT_10185f638 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a9c28(void)

{
  if ((DAT_10185f668 & 1) == 0) {
    uRam000000010185f648 = 0x100000000;
    _DAT_10185f640 = 0;
    uRam000000010185f658 = 0x300000000;
    _DAT_10185f650 = 0x200000000;
    DAT_10185f670 = DAT_10185f670 + 5;
    DAT_10185f660 = 0x400000000;
    DAT_10185f668 = 1;
  }
  return;
}




void FUN_1004a9c78(void)

{
  long lVar1;
  
  if ((DAT_10185f678 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855110,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185f640;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185f670;
    DAT_10185f678 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a9cd8(void)

{
  if ((DAT_10185f6a0 & 1) == 0) {
    DAT_10185f6a8 = DAT_10185f6a8 + 4;
    uRam000000010185f688 = 0x100000000;
    _DAT_10185f680 = 0;
    uRam000000010185f698 = 0x300000000;
    _DAT_10185f690 = 0x200000000;
    DAT_10185f6a0 = 1;
  }
  return;
}




void FUN_1004a9d1c(void)

{
  long lVar1;
  
  if ((DAT_10185f6b0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855138,2,"",4,4);
    *(undefined **)(lVar1 + 0x10) = &DAT_10185f680;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185f6a8;
    DAT_10185f6b0 = 1;
  }
  return;
}




void FUN_1004a9d7c(void)

{
  if ((DAT_10185f738 & 1) == 0) {
    DAT_10185f6b8 = 0;
    DAT_10185f6bc = 0;
    DAT_10185f6c0 = PTR_DAT_1018730f0;
    DAT_10185f6c8 = 0;
    DAT_10185f6cc = 4;
    DAT_10185f6d0 = PTR_DAT_1018730f0;
    DAT_10185f6d8 = 0;
    DAT_10185f6dc = 8;
    DAT_10185f6e0 = PTR_DAT_1018730f0;
    DAT_10185f6e8 = 0;
    DAT_10185f6ec = 0xc;
    DAT_10185f6f0 = PTR_DAT_1018730f0;
    DAT_10185f6f8 = 0;
    DAT_10185f6fc = 0x10;
    DAT_10185f700 = PTR_DAT_1018730f0;
    DAT_10185f708 = 0;
    DAT_10185f70c = 0x14;
    DAT_10185f710 = PTR_DAT_1018730f0;
    DAT_10185f718 = 0;
    DAT_10185f71c = 0x18;
    DAT_10185f720 = PTR_DAT_1018730f0;
    DAT_10185f740 = DAT_10185f740 + 8;
    DAT_10185f728 = 0;
    DAT_10185f72c = 0x1c;
    DAT_10185f730 = PTR_DAT_101873118;
    DAT_10185f738 = 1;
  }
  return;
}




void FUN_1004a9e40(void)

{
  long lVar1;
  
  if ((DAT_10185f748 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855160,1,"ActorNav",0x20,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185f6b8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185f740;
    DAT_10185f748 = 1;
  }
  return;
}




void FUN_1004a9ea0(void)

{
  long lVar1;
  
  if ((DAT_10185f750 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855188,3,"ActorNav*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855160;
    DAT_10185f750 = 1;
  }
  return;
}




void FUN_1004a9ef8(void)

{
  long lVar1;
  
  if ((DAT_10185f758 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018551a0,3,"ActorNav**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855188;
    DAT_10185f758 = 1;
  }
  return;
}




void FUN_1004a9f50(void)

{
  if ((DAT_10185f7a0 & 1) == 0) {
    DAT_10185f760 = 0;
    DAT_10185f764 = 0;
    DAT_10185f768 = PTR_DAT_1018730d8;
    DAT_10185f774 = 8;
    DAT_10185f770 = 0;
    DAT_10185f778 = PTR_DAT_101873138;
    DAT_10185f780 = 0;
    DAT_10185f784 = 0x10;
    DAT_10185f788 = PTR_DAT_101873118;
    DAT_10185f7a8 = DAT_10185f7a8 + 4;
    DAT_10185f790 = 0;
    DAT_10185f794 = 0x11;
    DAT_10185f798 = PTR_DAT_101873118;
    DAT_10185f7a0 = 1;
  }
  return;
}




void FUN_1004a9fe0(void)

{
  long lVar1;
  
  if ((DAT_10185f7b0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018551b8,1,"LifetimePfx",0x18,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185f760;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185f7a8;
    DAT_10185f7b0 = 1;
  }
  return;
}




void FUN_1004aa040(void)

{
  long lVar1;
  
  if ((DAT_10185f7b8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018551d8,3,"LifetimePfx*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018551b8;
    DAT_10185f7b8 = 1;
  }
  return;
}




void FUN_1004aa098(void)

{
  long lVar1;
  
  if ((DAT_10185f7c0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018551f0,3,"LifetimePfx**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018551d8;
    DAT_10185f7c0 = 1;
  }
  return;
}




void FUN_1004aa0f0(void)

{
  if ((DAT_10185f808 & 1) == 0) {
    DAT_10185f7c8 = 0;
    DAT_10185f7cc = 0;
    DAT_10185f7d0 = PTR_DAT_101873138;
    DAT_10185f7d8 = 0;
    DAT_10185f7dc = 8;
    DAT_10185f7e0 = PTR_DAT_1018730f0;
    DAT_10185f7e8 = 0;
    DAT_10185f7ec = 0xc;
    DAT_10185f7f0 = PTR_DAT_1018730f0;
    DAT_10185f810 = DAT_10185f810 + 4;
    DAT_10185f7f8 = 0;
    DAT_10185f7fc = 0x10;
    DAT_10185f800 = PTR_DAT_101872da0;
    DAT_10185f808 = 1;
  }
  return;
}




void FUN_1004aa180(void)

{
  long lVar1;
  
  if ((DAT_10185f818 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855210,1,"SubFlare",0x20,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185f7c8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185f810;
    DAT_10185f818 = 1;
  }
  return;
}




void FUN_1004aa1e0(void)

{
  long lVar1;
  
  if ((DAT_10185f820 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855230,3,"SubFlare*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855210;
    DAT_10185f820 = 1;
  }
  return;
}




void FUN_1004aa238(void)

{
  long lVar1;
  
  if ((DAT_10185f828 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855248,3,"SubFlare**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855230;
    DAT_10185f828 = 1;
  }
  return;
}




void FUN_1004aa290(void)

{
  if ((DAT_10185f870 & 1) == 0) {
    DAT_10185f830 = 0;
    DAT_10185f834 = 0;
    DAT_10185f838 = PTR_DAT_101873138;
    DAT_10185f840 = 0;
    DAT_10185f844 = 8;
    DAT_10185f848 = PTR_DAT_101855260;
    DAT_10185f850 = 0;
    DAT_10185f854 = 0x10;
    DAT_10185f858 = PTR_DAT_1018730f0;
    DAT_10185f878 = DAT_10185f878 + 4;
    DAT_10185f860 = 0;
    DAT_10185f864 = 0x14;
    DAT_10185f868 = PTR_DAT_1018730f0;
    DAT_10185f870 = 1;
  }
  return;
}




void FUN_1004aa31c(void)

{
  long lVar1;
  
  if ((DAT_10185f880 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855268,1,"LensFlare",0x18,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185f830;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185f878;
    DAT_10185f880 = 1;
  }
  return;
}




void FUN_1004aa37c(void)

{
  long lVar1;
  
  if ((DAT_10185f888 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855288,3,"LensFlare*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855268;
    DAT_10185f888 = 1;
  }
  return;
}




void FUN_1004aa3d4(void)

{
  long lVar1;
  
  if ((DAT_10185f890 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018552a0,3,"LensFlare**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855288;
    DAT_10185f890 = 1;
  }
  return;
}




void FUN_1004aa42c(void)

{
  if ((DAT_10185f8a8 & 1) == 0) {
    DAT_10185f8b0 = DAT_10185f8b0 + 1;
    DAT_10185f898 = 0;
    DAT_10185f89c = 0;
    DAT_10185f8a0 = PTR_DAT_1018552b8;
    DAT_10185f8a8 = 1;
  }
  return;
}




void FUN_1004aa470(void)

{
  long lVar1;
  
  if ((DAT_10185f8b8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018552c0,1,"LensFlareSet",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185f898;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185f8b0;
    DAT_10185f8b8 = 1;
  }
  return;
}




void FUN_1004aa4d0(void)

{
  long lVar1;
  
  if ((DAT_10185f8c0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018552e0,3,"LensFlareSet*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018552c0;
    DAT_10185f8c0 = 1;
  }
  return;
}




void FUN_1004aa528(void)

{
  long lVar1;
  
  if ((DAT_10185f8c8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018552f8,3,"LensFlareSet**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018552e0;
    DAT_10185f8c8 = 1;
  }
  return;
}




void FUN_1004aa580(void)

{
  if ((DAT_10185f930 & 1) == 0) {
    DAT_10185f8d0 = 0;
    DAT_10185f8d4 = 0;
    DAT_10185f8d8 = PTR_DAT_101872c38;
    DAT_10185f8e0 = 0;
    DAT_10185f8e4 = 0xc;
    DAT_10185f8e8 = PTR_DAT_101872c38;
    DAT_10185f8f0 = 0;
    DAT_10185f8f4 = 0x18;
    DAT_10185f8f8 = PTR_DAT_101872c38;
    DAT_10185f900 = 0;
    DAT_10185f904 = 0x24;
    DAT_10185f908 = PTR_DAT_1018730f0;
    DAT_10185f910 = 0;
    DAT_10185f914 = 0x28;
    DAT_10185f918 = PTR_DAT_1018730f0;
    DAT_10185f938 = DAT_10185f938 + 6;
    DAT_10185f920 = 0;
    DAT_10185f924 = 0x2c;
    DAT_10185f928 = PTR_DAT_1018730f0;
    DAT_10185f930 = 1;
  }
  return;
}




void FUN_1004aa624(void)

{
  long lVar1;
  
  if ((DAT_10185f940 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855310,1,"MenuMeshCamera",0x30,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185f8d0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185f938;
    DAT_10185f940 = 1;
  }
  return;
}




void FUN_1004aa684(void)

{
  long lVar1;
  
  if ((DAT_10185f948 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855338,3,"MenuMeshCamera*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855310;
    DAT_10185f948 = 1;
  }
  return;
}




void FUN_1004aa6dc(void)

{
  long lVar1;
  
  if ((DAT_10185f950 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855350,3,"MenuMeshCamera**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855338;
    DAT_10185f950 = 1;
  }
  return;
}




void FUN_1004aa734(void)

{
  if ((DAT_10185f978 & 1) == 0) {
    DAT_10185f958 = 0;
    DAT_10185f95c = 0;
    DAT_10185f960 = PTR_DAT_101873138;
    DAT_10185f980 = DAT_10185f980 + 2;
    DAT_10185f968 = 0;
    DAT_10185f96c = 8;
    DAT_10185f970 = PTR_DAT_1018730f0;
    DAT_10185f978 = 1;
  }
  return;
}




void FUN_1004aa798(void)

{
  long lVar1;
  
  if ((DAT_10185f988 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855368,1,"VoiceOverEntry",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185f958;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185f980;
    DAT_10185f988 = 1;
  }
  return;
}




void FUN_1004aa7f8(void)

{
  long lVar1;
  
  if ((DAT_10185f990 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855388,3,"VoiceOverEntry*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855368;
    DAT_10185f990 = 1;
  }
  return;
}




void FUN_1004aa850(void)

{
  long lVar1;
  
  if ((DAT_10185f998 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018553a0,3,"VoiceOverEntry**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855388;
    DAT_10185f998 = 1;
  }
  return;
}




void FUN_1004aa8a8(void)

{
  if ((DAT_10185f9d0 & 1) == 0) {
    DAT_10185f9a0 = 0;
    DAT_10185f9a4 = 0;
    DAT_10185f9a8 = PTR_DAT_101873138;
    DAT_10185f9b0 = 0;
    DAT_10185f9b4 = 8;
    DAT_10185f9b8 = PTR_DAT_101873138;
    DAT_10185f9d8 = DAT_10185f9d8 + 3;
    DAT_10185f9c0 = 0;
    DAT_10185f9c4 = 0x10;
    DAT_10185f9c8 = PTR_DAT_1018553b8;
    DAT_10185f9d0 = 1;
  }
  return;
}




void FUN_1004aa918(void)

{
  long lVar1;
  
  if ((DAT_10185f9e0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018553c0,1,"VoiceOverLocalizedEntries",0x18,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185f9a0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185f9d8;
    DAT_10185f9e0 = 1;
  }
  return;
}




void FUN_1004aa978(void)

{
  long lVar1;
  
  if ((DAT_10185f9e8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018553e0,3,"VoiceOverLocalizedEntries*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018553c0;
    DAT_10185f9e8 = 1;
  }
  return;
}




void FUN_1004aa9d0(void)

{
  long lVar1;
  
  if ((DAT_10185f9f0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018553f8,3,"VoiceOverLocalizedEntries**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018553e0;
    DAT_10185f9f0 = 1;
  }
  return;
}




void FUN_1004aaa28(void)

{
  if ((DAT_10185fa58 & 1) == 0) {
    DAT_10185f9f8 = 0;
    DAT_10185f9fc = 0;
    DAT_10185fa00 = PTR_DAT_101873138;
    DAT_10185fa08 = 0;
    DAT_10185fa0c = 8;
    DAT_10185fa10 = PTR_DAT_1018730f0;
    DAT_10185fa18 = 0;
    DAT_10185fa1c = 0xc;
    DAT_10185fa20 = PTR_DAT_1018730f0;
    DAT_10185fa28 = 0;
    DAT_10185fa2c = 0x10;
    DAT_10185fa30 = PTR_DAT_1018730f0;
    DAT_10185fa38 = 0;
    DAT_10185fa3c = 0x14;
    DAT_10185fa40 = PTR_DAT_101873118;
    DAT_10185fa60 = DAT_10185fa60 + 6;
    DAT_10185fa48 = 0;
    DAT_10185fa4c = 0x18;
    DAT_10185fa50 = PTR_DAT_101855410;
    DAT_10185fa58 = 1;
  }
  return;
}




void FUN_1004aaae0(void)

{
  long lVar1;
  
  if ((DAT_10185fa68 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855418,1,"VoiceOverCategory",0x20,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185f9f8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185fa60;
    DAT_10185fa68 = 1;
  }
  return;
}




void FUN_1004aab40(void)

{
  long lVar1;
  
  if ((DAT_10185fa70 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855438,3,"VoiceOverCategory*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855418;
    DAT_10185fa70 = 1;
  }
  return;
}




void FUN_1004aab98(void)

{
  long lVar1;
  
  if ((DAT_10185fa78 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855450,3,"VoiceOverCategory**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855438;
    DAT_10185fa78 = 1;
  }
  return;
}




void FUN_1004aabf0(void)

{
  if ((DAT_10185faa0 & 1) == 0) {
    DAT_10185fa80 = 0;
    DAT_10185fa84 = 0;
    DAT_10185fa88 = PTR_DAT_1018730d8;
    DAT_10185faa8 = DAT_10185faa8 + 2;
    DAT_10185fa90 = 0;
    DAT_10185fa94 = 8;
    DAT_10185fa98 = PTR_DAT_101855468;
    DAT_10185faa0 = 1;
  }
  return;
}




void FUN_1004aac50(void)

{
  long lVar1;
  
  if ((DAT_10185fab0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855470,1,"VoiceOverSet",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185fa80;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185faa8;
    DAT_10185fab0 = 1;
  }
  return;
}




void FUN_1004aacb0(void)

{
  long lVar1;
  
  if ((DAT_10185fab8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855490,3,"VoiceOverSet*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855470;
    DAT_10185fab8 = 1;
  }
  return;
}




void FUN_1004aad08(void)

{
  long lVar1;
  
  if ((DAT_10185fac0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018554a8,3,"VoiceOverSet**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855490;
    DAT_10185fac0 = 1;
  }
  return;
}




void FUN_1004aad60(void)

{
  if ((DAT_10185fb38 & 1) == 0) {
    DAT_10185fac8 = 0;
    DAT_10185facc = 0;
    DAT_10185fad0 = PTR_DAT_101873118;
    DAT_10185fad8 = 0;
    DAT_10185fadc = 4;
    DAT_10185fae0 = PTR_DAT_1018730f0;
    DAT_10185fae8 = 0;
    DAT_10185faec = 8;
    DAT_10185faf0 = PTR_DAT_1018730f0;
    DAT_10185faf8 = 0;
    DAT_10185fafc = 0xc;
    DAT_10185fb00 = PTR_DAT_1018730f0;
    DAT_10185fb08 = 0;
    DAT_10185fb0c = 0x10;
    DAT_10185fb10 = PTR_DAT_1018730f0;
    DAT_10185fb18 = 0;
    DAT_10185fb1c = 0x14;
    DAT_10185fb20 = PTR_DAT_1018730d8;
    DAT_10185fb40 = DAT_10185fb40 + 7;
    DAT_10185fb28 = 0;
    DAT_10185fb2c = 0x18;
    DAT_10185fb30 = PTR_DAT_1018554c0;
    DAT_10185fb38 = 1;
  }
  return;
}




void FUN_1004aae28(void)

{
  long lVar1;
  
  if ((DAT_10185fb48 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018554c8,1,"VoiceOverAudio",0x20,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185fac8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185fb40;
    DAT_10185fb48 = 1;
  }
  return;
}




void FUN_1004aae88(void)

{
  long lVar1;
  
  if ((DAT_10185fb50 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018554f0,3,"VoiceOverAudio*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018554c8;
    DAT_10185fb50 = 1;
  }
  return;
}




void FUN_1004aaee0(void)

{
  long lVar1;
  
  if ((DAT_10185fb58 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855508,3,"VoiceOverAudio**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018554f0;
    DAT_10185fb58 = 1;
  }
  return;
}




void FUN_1004aaf38(void)

{
  if ((DAT_10185fbb0 & 1) == 0) {
    DAT_10185fb60 = 0;
    DAT_10185fb64 = 0;
    DAT_10185fb68 = PTR_DAT_101873138;
    DAT_10185fb70 = 0;
    DAT_10185fb74 = 8;
    DAT_10185fb78 = PTR_DAT_101873138;
    DAT_10185fb80 = 0;
    DAT_10185fb84 = 0x10;
    DAT_10185fb88 = PTR_DAT_101873138;
    DAT_10185fb90 = 0;
    DAT_10185fb94 = 0x18;
    DAT_10185fb98 = PTR_DAT_101872c38;
    DAT_10185fbb8 = DAT_10185fbb8 + 5;
    DAT_10185fba0 = 0;
    DAT_10185fba4 = 0x24;
    DAT_10185fba8 = PTR_DAT_1018730c0;
    DAT_10185fbb0 = 1;
  }
  return;
}




void FUN_1004aafd8(void)

{
  long lVar1;
  
  if ((DAT_10185fbc0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855520,1,"MenuMeshParticleInfo",0x28,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185fb60;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185fbb8;
    DAT_10185fbc0 = 1;
  }
  return;
}




void FUN_1004ab038(void)

{
  long lVar1;
  
  if ((DAT_10185fbc8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855540,3,"MenuMeshParticleInfo*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855520;
    DAT_10185fbc8 = 1;
  }
  return;
}




void FUN_1004ab090(void)

{
  long lVar1;
  
  if ((DAT_10185fbd0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855558,3,"MenuMeshParticleInfo**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855540;
    DAT_10185fbd0 = 1;
  }
  return;
}




void FUN_1004ab0e8(void)

{
  if ((DAT_10185fc08 & 1) == 0) {
    DAT_10185fbd8 = 0;
    DAT_10185fbdc = 0;
    DAT_10185fbe0 = PTR_DAT_101873118;
    DAT_10185fbe8 = 0;
    DAT_10185fbec = 1;
    DAT_10185fbf0 = PTR_DAT_101873118;
    DAT_10185fc10 = DAT_10185fc10 + 3;
    DAT_10185fbf8 = 0;
    DAT_10185fbfc = 2;
    DAT_10185fc00 = PTR_DAT_101873118;
    DAT_10185fc08 = 1;
  }
  return;
}




void FUN_1004ab14c(void)

{
  long lVar1;
  
  if ((DAT_10185fc18 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855578,1,"AbilityTargetAffiliation",3,1);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185fbd8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185fc10;
    DAT_10185fc18 = 1;
  }
  return;
}




void FUN_1004ab1ac(void)

{
  long lVar1;
  
  if ((DAT_10185fc20 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018555a0,3,"AbilityTargetAffiliation*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855578;
    DAT_10185fc20 = 1;
  }
  return;
}




void FUN_1004ab204(void)

{
  long lVar1;
  
  if ((DAT_10185fc28 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018555b8,3,"AbilityTargetAffiliation**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018555a0;
    DAT_10185fc28 = 1;
  }
  return;
}




void FUN_1004ab25c(void)

{
  if ((DAT_10185fc40 & 1) == 0) {
    DAT_10185fc48 = DAT_10185fc48 + 1;
    DAT_10185fc30 = 0;
    DAT_10185fc34 = 0;
    DAT_10185fc38 = PTR_DAT_101873138;
    DAT_10185fc40 = 1;
  }
  return;
}




void FUN_1004ab2a4(void)

{
  long lVar1;
  
  if ((DAT_10185fc50 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018555d0,1,"PreloadEntry",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185fc30;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185fc48;
    DAT_10185fc50 = 1;
  }
  return;
}




void FUN_1004ab304(void)

{
  long lVar1;
  
  if ((DAT_10185fc58 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018555f0,3,"PreloadEntry*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018555d0;
    DAT_10185fc58 = 1;
  }
  return;
}




void FUN_1004ab35c(void)

{
  long lVar1;
  
  if ((DAT_10185fc60 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855608,3,"PreloadEntry**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018555f0;
    DAT_10185fc60 = 1;
  }
  return;
}




void FUN_1004ab3b4(void)

{
  if ((DAT_10185fc98 & 1) == 0) {
    DAT_10185fc68 = 0;
    DAT_10185fc6c = 0;
    DAT_10185fc70 = PTR_DAT_101873138;
    DAT_10185fc78 = 0;
    DAT_10185fc7c = 8;
    DAT_10185fc80 = PTR_DAT_101855620;
    DAT_10185fca0 = DAT_10185fca0 + 3;
    DAT_10185fc88 = 0;
    DAT_10185fc8c = 0x10;
    DAT_10185fc90 = PTR_DAT_101855620;
    DAT_10185fc98 = 1;
  }
  return;
}




void FUN_1004ab424(void)

{
  long lVar1;
  
  if ((DAT_10185fca8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855628,1,"PreloadChunk",0x18,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185fc68;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185fca0;
    DAT_10185fca8 = 1;
  }
  return;
}




void FUN_1004ab484(void)

{
  long lVar1;
  
  if ((DAT_10185fcb0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855648,3,"PreloadChunk*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855628;
    DAT_10185fcb0 = 1;
  }
  return;
}




void FUN_1004ab4dc(void)

{
  long lVar1;
  
  if ((DAT_10185fcb8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855660,3,"PreloadChunk**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855648;
    DAT_10185fcb8 = 1;
  }
  return;
}




void FUN_1004ab534(void)

{
  if ((DAT_10185fcd0 & 1) == 0) {
    DAT_10185fcd8 = DAT_10185fcd8 + 1;
    DAT_10185fcc0 = 0;
    DAT_10185fcc4 = 0;
    DAT_10185fcc8 = PTR_DAT_101855678;
    DAT_10185fcd0 = 1;
  }
  return;
}




void FUN_1004ab578(void)

{
  long lVar1;
  
  if ((DAT_10185fce0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855680,1,"PreloadChunkSet",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185fcc0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185fcd8;
    DAT_10185fce0 = 1;
  }
  return;
}




void FUN_1004ab5d8(void)

{
  long lVar1;
  
  if ((DAT_10185fce8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018556a0,3,"PreloadChunkSet*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855680;
    DAT_10185fce8 = 1;
  }
  return;
}




void FUN_1004ab630(void)

{
  long lVar1;
  
  if ((DAT_10185fcf0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018556b8,3,"PreloadChunkSet**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018556a0;
    DAT_10185fcf0 = 1;
  }
  return;
}




void FUN_1004ab688(void)

{
  if ((DAT_10185fd18 & 1) == 0) {
    DAT_10185fcf8 = 0;
    DAT_10185fcfc = 0;
    DAT_10185fd00 = PTR_DAT_101873138;
    DAT_10185fd20 = DAT_10185fd20 + 2;
    DAT_10185fd08 = 0;
    DAT_10185fd0c = 8;
    DAT_10185fd10 = PTR_DAT_101873138;
    DAT_10185fd18 = 1;
  }
  return;
}




void FUN_1004ab6e0(void)

{
  long lVar1;
  
  if ((DAT_10185fd28 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018556d0,1,"NamedBone",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185fcf8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185fd20;
    DAT_10185fd28 = 1;
  }
  return;
}




void FUN_1004ab740(void)

{
  long lVar1;
  
  if ((DAT_10185fd30 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018556f0,3,"NamedBone*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018556d0;
    DAT_10185fd30 = 1;
  }
  return;
}




void FUN_1004ab798(void)

{
  long lVar1;
  
  if ((DAT_10185fd38 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855708,3,"NamedBone**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018556f0;
    DAT_10185fd38 = 1;
  }
  return;
}




void FUN_1004ab7f0(void)

{
  if ((DAT_10185fd60 & 1) == 0) {
    DAT_10185fd40 = 0;
    DAT_10185fd44 = 0;
    DAT_10185fd48 = PTR_DAT_1018730f0;
    DAT_10185fd68 = DAT_10185fd68 + 2;
    DAT_10185fd50 = 0;
    DAT_10185fd54 = 4;
    DAT_10185fd58 = PTR_DAT_101872c38;
    DAT_10185fd60 = 1;
  }
  return;
}




void FUN_1004ab854(void)

{
  long lVar1;
  
  if ((DAT_10185fd70 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855728,1,"WayPoint",0x10,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185fd40;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185fd68;
    DAT_10185fd70 = 1;
  }
  return;
}




void FUN_1004ab8b4(void)

{
  long lVar1;
  
  if ((DAT_10185fd78 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855748,3,"WayPoint*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855728;
    DAT_10185fd78 = 1;
  }
  return;
}




void FUN_1004ab90c(void)

{
  long lVar1;
  
  if ((DAT_10185fd80 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855760,3,"WayPoint**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855748;
    DAT_10185fd80 = 1;
  }
  return;
}




void FUN_1004ab964(void)

{
  if ((DAT_10185fda8 & 1) == 0) {
    DAT_10185fd88 = 0;
    DAT_10185fd8c = 0;
    DAT_10185fd90 = PTR_DAT_101873138;
    DAT_10185fdb0 = DAT_10185fdb0 + 2;
    DAT_10185fd98 = 0;
    DAT_10185fd9c = 8;
    DAT_10185fda0 = PTR_DAT_101855778;
    DAT_10185fda8 = 1;
  }
  return;
}




void FUN_1004ab9c4(void)

{
  long lVar1;
  
  if ((DAT_10185fdb8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855780,1,"Path",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185fd88;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185fdb0;
    DAT_10185fdb8 = 1;
  }
  return;
}




void FUN_1004aba24(void)

{
  long lVar1;
  
  if ((DAT_10185fdc0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018557a0,3,"Path*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855780;
    DAT_10185fdc0 = 1;
  }
  return;
}




void FUN_1004aba7c(void)

{
  long lVar1;
  
  if ((DAT_10185fdc8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018557b8,3,"Path**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018557a0;
    DAT_10185fdc8 = 1;
  }
  return;
}




void FUN_1004abad4(void)

{
  if ((DAT_10185fdf0 & 1) == 0) {
    DAT_10185fdd0 = 0;
    DAT_10185fdd4 = 0;
    DAT_10185fdd8 = PTR_DAT_101873138;
    DAT_10185fdf8 = DAT_10185fdf8 + 2;
    DAT_10185fde0 = 0;
    DAT_10185fde4 = 8;
    DAT_10185fde8 = PTR_DAT_101873138;
    DAT_10185fdf0 = 1;
  }
  return;
}




void FUN_1004abb2c(void)

{
  long lVar1;
  
  if ((DAT_10185fe00 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018557d8,1,"MenuMeshMesh",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185fdd0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185fdf8;
    DAT_10185fe00 = 1;
  }
  return;
}




void FUN_1004abb8c(void)

{
  long lVar1;
  
  if ((DAT_10185fe08 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018557f8,3,"MenuMeshMesh*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018557d8;
    DAT_10185fe08 = 1;
  }
  return;
}




void FUN_1004abbe4(void)

{
  long lVar1;
  
  if ((DAT_10185fe10 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855810,3,"MenuMeshMesh**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018557f8;
    DAT_10185fe10 = 1;
  }
  return;
}




void FUN_1004abc3c(void)

{
  if ((DAT_10185fe68 & 1) == 0) {
    DAT_10185fe18 = 0;
    DAT_10185fe1c = 0;
    DAT_10185fe20 = PTR_DAT_1018730d8;
    DAT_10185fe28 = 0;
    DAT_10185fe2c = 8;
    DAT_10185fe30 = PTR_DAT_101873138;
    DAT_10185fe38 = 0;
    DAT_10185fe3c = 0x10;
    DAT_10185fe40 = PTR_DAT_101873138;
    DAT_10185fe48 = 0;
    DAT_10185fe4c = 0x18;
    DAT_10185fe50 = PTR_DAT_101873138;
    DAT_10185fe70 = DAT_10185fe70 + 5;
    DAT_10185fe58 = 0;
    DAT_10185fe5c = 0x20;
    DAT_10185fe60 = PTR_DAT_101873138;
    DAT_10185fe68 = 1;
  }
  return;
}




void FUN_1004abcd0(void)

{
  long lVar1;
  
  if ((DAT_10185fe78 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855830,1,"AnnouncerVOLine",0x28,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185fe18;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185fe70;
    DAT_10185fe78 = 1;
  }
  return;
}




void FUN_1004abd30(void)

{
  long lVar1;
  
  if ((DAT_10185fe80 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855850,3,"AnnouncerVOLine*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855830;
    DAT_10185fe80 = 1;
  }
  return;
}




void FUN_1004abd88(void)

{
  long lVar1;
  
  if ((DAT_10185fe88 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855868,3,"AnnouncerVOLine**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855850;
    DAT_10185fe88 = 1;
  }
  return;
}




void FUN_1004abde0(void)

{
  if ((DAT_10185fed0 & 1) == 0) {
    DAT_10185fe90 = 0;
    DAT_10185fe94 = 0;
    DAT_10185fe98 = PTR_DAT_101873138;
    DAT_10185fea0 = 0;
    DAT_10185fea4 = 8;
    DAT_10185fea8 = PTR_DAT_101873138;
    DAT_10185feb0 = 0;
    DAT_10185feb4 = 0x10;
    DAT_10185feb8 = PTR_DAT_101873118;
    DAT_10185fed8 = DAT_10185fed8 + 4;
    DAT_10185fec0 = 0;
    DAT_10185fec4 = 0x18;
    DAT_10185fec8 = PTR_DAT_101855880;
    DAT_10185fed0 = 1;
  }
  return;
}




void FUN_1004abe6c(void)

{
  long lVar1;
  
  if ((DAT_10185fee0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855888,1,"AnnouncerVOPack",0x20,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185fe90;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185fed8;
    DAT_10185fee0 = 1;
  }
  return;
}




void FUN_1004abecc(void)

{
  long lVar1;
  
  if ((DAT_10185fee8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018558a8,3,"AnnouncerVOPack*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855888;
    DAT_10185fee8 = 1;
  }
  return;
}




void FUN_1004abf24(void)

{
  long lVar1;
  
  if ((DAT_10185fef0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018558c0,3,"AnnouncerVOPack**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018558a8;
    DAT_10185fef0 = 1;
  }
  return;
}




void FUN_1004abf7c(void)

{
  if ((DAT_10185ff08 & 1) == 0) {
    DAT_10185ff10 = DAT_10185ff10 + 1;
    DAT_10185fef8 = 0;
    DAT_10185fefc = 0;
    DAT_10185ff00 = PTR_DAT_1018558d8;
    DAT_10185ff08 = 1;
  }
  return;
}




void FUN_1004abfc0(void)

{
  long lVar1;
  
  if ((DAT_10185ff18 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018558e0,1,"AnnouncerVOPacksManifest",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185fef8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185ff10;
    DAT_10185ff18 = 1;
  }
  return;
}




void FUN_1004ac020(void)

{
  long lVar1;
  
  if ((DAT_10185ff20 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855900,3,"AnnouncerVOPacksManifest*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018558e0;
    DAT_10185ff20 = 1;
  }
  return;
}




void FUN_1004ac078(void)

{
  long lVar1;
  
  if ((DAT_10185ff28 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855918,3,"AnnouncerVOPacksManifest**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855900;
    DAT_10185ff28 = 1;
  }
  return;
}




void FUN_1004ac0d0(void)

{
  if ((DAT_10185ff60 & 1) == 0) {
    DAT_10185ff30 = 0;
    DAT_10185ff34 = 0;
    DAT_10185ff38 = PTR_DAT_101873138;
    DAT_10185ff40 = 0;
    DAT_10185ff44 = 8;
    DAT_10185ff48 = PTR_DAT_101873138;
    DAT_10185ff68 = DAT_10185ff68 + 3;
    DAT_10185ff50 = 0;
    DAT_10185ff54 = 0x10;
    DAT_10185ff58 = PTR_DAT_101873138;
    DAT_10185ff60 = 1;
  }
  return;
}




void FUN_1004ac138(void)

{
  long lVar1;
  
  if ((DAT_10185ff70 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855930,1,"PlayerAvatar",0x18,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185ff30;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185ff68;
    DAT_10185ff70 = 1;
  }
  return;
}




void FUN_1004ac198(void)

{
  long lVar1;
  
  if ((DAT_10185ff78 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855950,3,"PlayerAvatar*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855930;
    DAT_10185ff78 = 1;
  }
  return;
}




void FUN_1004ac1f0(void)

{
  long lVar1;
  
  if ((DAT_10185ff80 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855968,3,"PlayerAvatar**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855950;
    DAT_10185ff80 = 1;
  }
  return;
}




void FUN_1004ac248(void)

{
  if ((DAT_10185ff98 & 1) == 0) {
    DAT_10185ffa0 = DAT_10185ffa0 + 1;
    DAT_10185ff88 = 0;
    DAT_10185ff8c = 0;
    DAT_10185ff90 = PTR_DAT_101855980;
    DAT_10185ff98 = 1;
  }
  return;
}




void FUN_1004ac28c(void)

{
  long lVar1;
  
  if ((DAT_10185ffa8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855988,1,"PlayerAvatarsManifest",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185ff88;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_10185ffa0;
    DAT_10185ffa8 = 1;
  }
  return;
}




void FUN_1004ac2ec(void)

{
  long lVar1;
  
  if ((DAT_10185ffb0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018559a8,3,"PlayerAvatarsManifest*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855988;
    DAT_10185ffb0 = 1;
  }
  return;
}




void FUN_1004ac344(void)

{
  long lVar1;
  
  if ((DAT_10185ffb8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018559c0,3,"PlayerAvatarsManifest**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018559a8;
    DAT_10185ffb8 = 1;
  }
  return;
}




void FUN_1004ac39c(void)

{
  if ((DAT_1018600a0 & 1) == 0) {
    DAT_10185ffc0 = 0;
    DAT_10185ffc4 = 0;
    DAT_10185ffc8 = PTR_DAT_1018730f0;
    DAT_10185ffd0 = 0;
    DAT_10185ffd4 = 4;
    DAT_10185ffd8 = PTR_DAT_1018730f0;
    DAT_10185ffe0 = 0;
    DAT_10185ffe4 = 8;
    DAT_10185ffe8 = PTR_DAT_1018730f0;
    DAT_10185fff0 = 0;
    DAT_10185fff4 = 0xc;
    DAT_10185fff8 = PTR_DAT_1018730f0;
    DAT_101860000 = 0;
    DAT_101860004 = 0x10;
    DAT_101860008 = PTR_DAT_1018730f0;
    DAT_101860010 = 0;
    DAT_101860014 = 0x14;
    DAT_101860018 = PTR_DAT_1018730f0;
    DAT_101860020 = 0;
    DAT_101860024 = 0x18;
    DAT_101860028 = PTR_DAT_1018730f0;
    DAT_101860030 = 0;
    DAT_101860034 = 0x1c;
    DAT_101860038 = PTR_DAT_1018730f0;
    DAT_101860040 = 0;
    DAT_101860044 = 0x20;
    DAT_101860048 = PTR_DAT_1018730f0;
    DAT_101860050 = 0;
    DAT_101860054 = 0x24;
    DAT_101860058 = PTR_DAT_1018730f0;
    DAT_101860060 = 0;
    DAT_101860064 = 0x28;
    DAT_101860068 = PTR_DAT_1018730f0;
    DAT_101860070 = 0;
    DAT_101860074 = 0x2c;
    DAT_101860078 = PTR_DAT_1018730f0;
    DAT_101860080 = 0;
    DAT_101860084 = 0x30;
    DAT_101860088 = PTR_DAT_1018730f0;
    DAT_1018600a8 = DAT_1018600a8 + 0xe;
    DAT_101860090 = 0;
    DAT_101860094 = 0x34;
    DAT_101860098 = PTR_DAT_1018730f0;
    DAT_1018600a0 = 1;
  }
  return;
}




void FUN_1004ac4b4(void)

{
  long lVar1;
  
  if ((DAT_1018600b0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018559d8,1,"KindredBotTuningData",0x38,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_10185ffc0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018600a8;
    DAT_1018600b0 = 1;
  }
  return;
}




void FUN_1004ac514(void)

{
  long lVar1;
  
  if ((DAT_1018600b8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018559f8,3,"KindredBotTuningData*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018559d8;
    DAT_1018600b8 = 1;
  }
  return;
}




void FUN_1004ac56c(void)

{
  long lVar1;
  
  if ((DAT_1018600c0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855a10,3,"KindredBotTuningData**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018559f8;
    DAT_1018600c0 = 1;
  }
  return;
}




void FUN_1004ac5c4(void)

{
  if ((DAT_101860148 & 1) == 0) {
    DAT_1018600c8 = 0;
    DAT_1018600cc = 0;
    DAT_1018600d0 = PTR_DAT_101854f50;
    DAT_1018600d8 = 0;
    DAT_1018600dc = 4;
    DAT_1018600e0 = PTR_DAT_101873118;
    DAT_1018600e8 = 0;
    DAT_1018600ec = 8;
    DAT_1018600f0 = PTR_DAT_101873138;
    DAT_1018600f8 = 0;
    DAT_1018600fc = 0x10;
    DAT_101860100 = PTR_DAT_101873138;
    DAT_101860108 = 0;
    DAT_10186010c = 0x18;
    DAT_101860110 = PTR_DAT_101854f00;
    DAT_101860118 = 0;
    DAT_10186011c = 0x1c;
    DAT_101860120 = PTR_DAT_101873118;
    DAT_101860128 = 0;
    DAT_10186012c = 0x20;
    DAT_101860130 = PTR_DAT_101854ed8;
    DAT_101860150 = DAT_101860150 + 8;
    DAT_101860138 = 0;
    DAT_10186013c = 0x24;
    DAT_101860140 = PTR_DAT_101854f28;
    DAT_101860148 = 1;
  }
  return;
}




void FUN_1004ac6a8(void)

{
  long lVar1;
  
  if ((DAT_101860158 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855a28,1,"HUDQuickMessage",0x28,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018600c8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860150;
    DAT_101860158 = 1;
  }
  return;
}




void FUN_1004ac708(void)

{
  long lVar1;
  
  if ((DAT_101860160 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855a48,3,"HUDQuickMessage*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855a28;
    DAT_101860160 = 1;
  }
  return;
}




void FUN_1004ac760(void)

{
  long lVar1;
  
  if ((DAT_101860168 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855a60,3,"HUDQuickMessage**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855a48;
    DAT_101860168 = 1;
  }
  return;
}




void FUN_1004ac7b8(void)

{
  if ((DAT_101860180 & 1) == 0) {
    DAT_101860188 = DAT_101860188 + 1;
    DAT_101860170 = 0;
    DAT_101860174 = 0;
    DAT_101860178 = PTR_DAT_101855a78;
    DAT_101860180 = 1;
  }
  return;
}




void FUN_1004ac7fc(void)

{
  long lVar1;
  
  if ((DAT_101860190 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855a80,1,"HUDQuickMessageSet",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101860170;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860188;
    DAT_101860190 = 1;
  }
  return;
}




void FUN_1004ac85c(void)

{
  long lVar1;
  
  if ((DAT_101860198 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855aa0,3,"HUDQuickMessageSet*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855a80;
    DAT_101860198 = 1;
  }
  return;
}




void FUN_1004ac8b4(void)

{
  long lVar1;
  
  if ((DAT_1018601a0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855ab8,3,"HUDQuickMessageSet**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855aa0;
    DAT_1018601a0 = 1;
  }
  return;
}




void FUN_1004ac90c(void)

{
  if ((DAT_1018601c8 & 1) == 0) {
    DAT_1018601a8 = 0;
    DAT_1018601ac = 0;
    DAT_1018601b0 = PTR_DAT_101873138;
    DAT_1018601d0 = DAT_1018601d0 + 2;
    DAT_1018601b8 = 0;
    DAT_1018601bc = 8;
    DAT_1018601c0 = PTR_DAT_101873138;
    DAT_1018601c8 = 1;
  }
  return;
}




void FUN_1004ac964(void)

{
  long lVar1;
  
  if ((DAT_1018601d8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855ad0,1,"AttachableEquipment",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018601a8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018601d0;
    DAT_1018601d8 = 1;
  }
  return;
}




void FUN_1004ac9c4(void)

{
  long lVar1;
  
  if ((DAT_1018601e0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855af0,3,"AttachableEquipment*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855ad0;
    DAT_1018601e0 = 1;
  }
  return;
}




void FUN_1004aca1c(void)

{
  long lVar1;
  
  if ((DAT_1018601e8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855b08,3,"AttachableEquipment**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855af0;
    DAT_1018601e8 = 1;
  }
  return;
}




void FUN_1004aca74(void)

{
  if ((DAT_101860200 & 1) == 0) {
    DAT_101860208 = DAT_101860208 + 1;
    DAT_1018601f0 = 0;
    DAT_1018601f4 = 0;
    DAT_1018601f8 = PTR_DAT_101855b20;
    DAT_101860200 = 1;
  }
  return;
}




void FUN_1004acab8(void)

{
  long lVar1;
  
  if ((DAT_101860210 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855b28,1,"AttachableEquipmentManifest",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018601f0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860208;
    DAT_101860210 = 1;
  }
  return;
}




void FUN_1004acb18(void)

{
  long lVar1;
  
  if ((DAT_101860218 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855b48,3,"AttachableEquipmentManifest*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855b28;
    DAT_101860218 = 1;
  }
  return;
}




void FUN_1004acb70(void)

{
  long lVar1;
  
  if ((DAT_101860220 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855b60,3,"AttachableEquipmentManifest**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855b48;
    DAT_101860220 = 1;
  }
  return;
}




void FUN_1004acbc8(void)

{
  if ((DAT_101860278 & 1) == 0) {
    DAT_101860228 = 0;
    DAT_10186022c = 0;
    DAT_101860230 = PTR_DAT_101873138;
    DAT_101860238 = 0;
    DAT_10186023c = 8;
    DAT_101860240 = PTR_DAT_101873118;
    DAT_101860248 = 0;
    DAT_10186024c = 0xc;
    DAT_101860250 = PTR_DAT_101855108;
    DAT_101860258 = 0;
    DAT_10186025c = 0x10;
    DAT_101860260 = PTR_DAT_1018730f0;
    DAT_101860280 = DAT_101860280 + 5;
    DAT_101860268 = 0;
    DAT_10186026c = 0x14;
    DAT_101860270 = PTR_DAT_1018730c0;
    DAT_101860278 = 1;
  }
  return;
}




void FUN_1004acc7c(void)

{
  long lVar1;
  
  if ((DAT_101860288 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855b78,1,"StaticEntityParameterDeclaration",0x18,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101860228;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860280;
    DAT_101860288 = 1;
  }
  return;
}




void FUN_1004accdc(void)

{
  long lVar1;
  
  if ((DAT_101860290 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855b98,3,"StaticEntityParameterDeclaration*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855b78;
    DAT_101860290 = 1;
  }
  return;
}




void FUN_1004acd34(void)

{
  long lVar1;
  
  if ((DAT_101860298 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855bb0,3,"StaticEntityParameterDeclaration**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855b98;
    DAT_101860298 = 1;
  }
  return;
}




void FUN_1004acd8c(void)

{
  if ((DAT_1018602c0 & 1) == 0) {
    DAT_1018602a0 = 0;
    DAT_1018602a4 = 0;
    DAT_1018602a8 = PTR_DAT_101873138;
    DAT_1018602c8 = DAT_1018602c8 + 2;
    DAT_1018602b0 = 0;
    DAT_1018602b4 = 8;
    DAT_1018602b8 = PTR_DAT_101873138;
    DAT_1018602c0 = 1;
  }
  return;
}




void FUN_1004acde4(void)

{
  long lVar1;
  
  if ((DAT_1018602d0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855bd0,1,"PlayerTitle",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018602a0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018602c8;
    DAT_1018602d0 = 1;
  }
  return;
}




void FUN_1004ace44(void)

{
  long lVar1;
  
  if ((DAT_1018602d8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855bf0,3,"PlayerTitle*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855bd0;
    DAT_1018602d8 = 1;
  }
  return;
}




void FUN_1004ace9c(void)

{
  long lVar1;
  
  if ((DAT_1018602e0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855c08,3,"PlayerTitle**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855bf0;
    DAT_1018602e0 = 1;
  }
  return;
}




void FUN_1004acef4(void)

{
  if ((DAT_1018602f8 & 1) == 0) {
    DAT_101860300 = DAT_101860300 + 1;
    DAT_1018602e8 = 0;
    DAT_1018602ec = 0;
    DAT_1018602f0 = PTR_DAT_101855c20;
    DAT_1018602f8 = 1;
  }
  return;
}




void FUN_1004acf38(void)

{
  long lVar1;
  
  if ((DAT_101860308 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855c28,1,"PlayerTitlesManifest",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018602e8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860300;
    DAT_101860308 = 1;
  }
  return;
}




void FUN_1004acf98(void)

{
  long lVar1;
  
  if ((DAT_101860310 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855c48,3,"PlayerTitlesManifest*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855c28;
    DAT_101860310 = 1;
  }
  return;
}




void FUN_1004acff0(void)

{
  long lVar1;
  
  if ((DAT_101860318 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855c60,3,"PlayerTitlesManifest**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855c48;
    DAT_101860318 = 1;
  }
  return;
}




void FUN_1004ad048(void)

{
  if ((DAT_101860330 & 1) == 0) {
    DAT_101860338 = DAT_101860338 + 1;
    DAT_101860320 = 0;
    DAT_101860324 = 0;
    DAT_101860328 = PTR_DAT_1018730f0;
    DAT_101860330 = 1;
  }
  return;
}




void FUN_1004ad090(void)

{
  long lVar1;
  
  if ((DAT_101860340 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855c78,1,"ShaderParam",4,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101860320;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860338;
    DAT_101860340 = 1;
  }
  return;
}




void FUN_1004ad0f0(void)

{
  long lVar1;
  
  if ((DAT_101860348 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855c98,3,"ShaderParam*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855c78;
    DAT_101860348 = 1;
  }
  return;
}




void FUN_1004ad148(void)

{
  long lVar1;
  
  if ((DAT_101860350 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855cb0,3,"ShaderParam**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855c98;
    DAT_101860350 = 1;
  }
  return;
}




void FUN_1004ad1a0(void)

{
  if ((DAT_101860378 & 1) == 0) {
    DAT_101860358 = 0;
    DAT_10186035c = 0;
    DAT_101860360 = PTR_DAT_101873138;
    DAT_101860380 = DAT_101860380 + 2;
    DAT_101860368 = 0;
    DAT_10186036c = 8;
    DAT_101860370 = PTR_DAT_101855cc8;
    DAT_101860378 = 1;
  }
  return;
}




void FUN_1004ad200(void)

{
  long lVar1;
  
  if ((DAT_101860388 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855cd0,1,"ShaderParams",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101860358;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860380;
    DAT_101860388 = 1;
  }
  return;
}




void FUN_1004ad260(void)

{
  long lVar1;
  
  if ((DAT_101860390 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855cf0,3,"ShaderParams*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855cd0;
    DAT_101860390 = 1;
  }
  return;
}




void FUN_1004ad2b8(void)

{
  long lVar1;
  
  if ((DAT_101860398 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855d08,3,"ShaderParams**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855cf0;
    DAT_101860398 = 1;
  }
  return;
}




void FUN_1004ad310(void)

{
  if ((DAT_1018603c0 & 1) == 0) {
    DAT_1018603a0 = 0;
    DAT_1018603a4 = 0;
    DAT_1018603a8 = PTR_DAT_101873138;
    DAT_1018603c8 = DAT_1018603c8 + 2;
    DAT_1018603b0 = 0;
    DAT_1018603b4 = 8;
    DAT_1018603b8 = PTR_DAT_101873138;
    DAT_1018603c0 = 1;
  }
  return;
}




void FUN_1004ad368(void)

{
  long lVar1;
  
  if ((DAT_1018603d0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855d28,1,"LocalizedAsset",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018603a0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018603c8;
    DAT_1018603d0 = 1;
  }
  return;
}




void FUN_1004ad3c8(void)

{
  long lVar1;
  
  if ((DAT_1018603d8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855d48,3,"LocalizedAsset*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855d28;
    DAT_1018603d8 = 1;
  }
  return;
}




void FUN_1004ad420(void)

{
  long lVar1;
  
  if ((DAT_1018603e0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855d60,3,"LocalizedAsset**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855d48;
    DAT_1018603e0 = 1;
  }
  return;
}




void FUN_1004ad478(void)

{
  if ((DAT_101860538 & 1) == 0) {
    DAT_1018603e8 = 0;
    DAT_1018603ec = 0;
    DAT_1018603f0 = PTR_DAT_101873138;
    DAT_1018603f8 = 0;
    DAT_1018603fc = 8;
    DAT_101860400 = PTR_DAT_101855d78;
    DAT_101860408 = 0;
    DAT_10186040c = 0x10;
    DAT_101860410 = PTR_DAT_101873138;
    DAT_101860418 = 0;
    DAT_10186041c = 0x18;
    DAT_101860420 = PTR_DAT_101873138;
    DAT_101860428 = 0;
    DAT_10186042c = 0x20;
    DAT_101860430 = PTR_DAT_1018730f0;
    DAT_101860438 = 0;
    DAT_10186043c = 0x24;
    DAT_101860440 = PTR_DAT_1018730f0;
    DAT_101860448 = 0;
    DAT_10186044c = 0x28;
    DAT_101860450 = PTR_DAT_101855d78;
    DAT_101860458 = 0;
    DAT_10186045c = 0x30;
    DAT_101860460 = PTR_DAT_101873138;
    DAT_101860468 = 0;
    DAT_10186046c = 0x38;
    DAT_101860470 = PTR_DAT_101873138;
    DAT_101860478 = 0;
    DAT_10186047c = 0x40;
    DAT_101860480 = PTR_DAT_1018730f0;
    DAT_101860488 = 0;
    DAT_10186048c = 0x44;
    DAT_101860490 = PTR_DAT_1018730f0;
    DAT_101860498 = 0;
    DAT_10186049c = 0x48;
    DAT_1018604a0 = PTR_DAT_101855d78;
    DAT_1018604a8 = 0;
    DAT_1018604ac = 0x50;
    DAT_1018604b0 = PTR_DAT_101873138;
    DAT_1018604b8 = 0;
    DAT_1018604bc = 0x58;
    DAT_1018604c0 = PTR_DAT_101873138;
    DAT_1018604c8 = 0;
    DAT_1018604cc = 0x60;
    DAT_1018604d0 = PTR_DAT_1018730f0;
    DAT_1018604d8 = 0;
    DAT_1018604dc = 100;
    DAT_1018604e0 = PTR_DAT_1018730f0;
    DAT_1018604e8 = 0;
    DAT_1018604ec = 0x68;
    DAT_1018604f0 = PTR_DAT_101855d78;
    DAT_1018604f8 = 0;
    DAT_1018604fc = 0x70;
    DAT_101860500 = PTR_DAT_101873138;
    DAT_101860508 = 0;
    DAT_10186050c = 0x78;
    DAT_101860510 = PTR_DAT_101873138;
    DAT_101860518 = 0;
    DAT_10186051c = 0x80;
    DAT_101860520 = PTR_DAT_1018730f0;
    DAT_101860540 = DAT_101860540 + 0x15;
    DAT_101860528 = 0;
    DAT_10186052c = 0x84;
    DAT_101860530 = PTR_DAT_1018730f0;
    DAT_101860538 = 1;
  }
  return;
}




void FUN_1004ad614(void)

{
  long lVar1;
  
  if ((DAT_101860548 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855d80,1,"AnnouncerEvent",0x88,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018603e8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860540;
    DAT_101860548 = 1;
  }
  return;
}




void FUN_1004ad674(void)

{
  long lVar1;
  
  if ((DAT_101860550 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855da0,3,"AnnouncerEvent*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855d80;
    DAT_101860550 = 1;
  }
  return;
}




void FUN_1004ad6cc(void)

{
  long lVar1;
  
  if ((DAT_101860558 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855db8,3,"AnnouncerEvent**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855da0;
    DAT_101860558 = 1;
  }
  return;
}




void FUN_1004ad724(void)

{
  if ((DAT_101860570 & 1) == 0) {
    DAT_101860578 = DAT_101860578 + 1;
    DAT_101860560 = 0;
    DAT_101860564 = 0;
    DAT_101860568 = PTR_DAT_101855dd0;
    DAT_101860570 = 1;
  }
  return;
}




void FUN_1004ad768(void)

{
  long lVar1;
  
  if ((DAT_101860580 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855dd8,1,"AnnouncementSet",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101860560;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860578;
    DAT_101860580 = 1;
  }
  return;
}




void FUN_1004ad7c8(void)

{
  long lVar1;
  
  if ((DAT_101860588 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855df8,3,"AnnouncementSet*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855dd8;
    DAT_101860588 = 1;
  }
  return;
}




void FUN_1004ad820(void)

{
  long lVar1;
  
  if ((DAT_101860590 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855e10,3,"AnnouncementSet**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855df8;
    DAT_101860590 = 1;
  }
  return;
}




void FUN_1004ad878(void)

{
  if ((DAT_1018605c8 & 1) == 0) {
    DAT_101860598 = 0;
    DAT_10186059c = 0;
    DAT_1018605a0 = PTR_DAT_101873138;
    DAT_1018605a8 = 0;
    DAT_1018605ac = 8;
    DAT_1018605b0 = PTR_DAT_101855d78;
    DAT_1018605d0 = DAT_1018605d0 + 3;
    DAT_1018605b8 = 0;
    DAT_1018605bc = 0x10;
    DAT_1018605c0 = PTR_DAT_1018730f0;
    DAT_1018605c8 = 1;
  }
  return;
}




void FUN_1004ad8f4(void)

{
  long lVar1;
  
  if ((DAT_1018605d8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855e28,1,"ClientAnnouncerEvent",0x18,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101860598;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018605d0;
    DAT_1018605d8 = 1;
  }
  return;
}




void FUN_1004ad954(void)

{
  long lVar1;
  
  if ((DAT_1018605e0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855e48,3,"ClientAnnouncerEvent*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855e28;
    DAT_1018605e0 = 1;
  }
  return;
}




void FUN_1004ad9ac(void)

{
  long lVar1;
  
  if ((DAT_1018605e8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855e60,3,"ClientAnnouncerEvent**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855e48;
    DAT_1018605e8 = 1;
  }
  return;
}




void FUN_1004ada04(void)

{
  if ((DAT_101860600 & 1) == 0) {
    DAT_101860608 = DAT_101860608 + 1;
    DAT_1018605f0 = 0;
    DAT_1018605f4 = 0;
    DAT_1018605f8 = PTR_DAT_101873138;
    DAT_101860600 = 1;
  }
  return;
}




void FUN_1004ada4c(void)

{
  long lVar1;
  
  if ((DAT_101860610 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855e80,1,"LevelEffectGroup",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018605f0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860608;
    DAT_101860610 = 1;
  }
  return;
}




void FUN_1004adaac(void)

{
  long lVar1;
  
  if ((DAT_101860618 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855ea0,3,"LevelEffectGroup*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855e80;
    DAT_101860618 = 1;
  }
  return;
}




void FUN_1004adb04(void)

{
  long lVar1;
  
  if ((DAT_101860620 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855eb8,3,"LevelEffectGroup**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855ea0;
    DAT_101860620 = 1;
  }
  return;
}




void FUN_1004adb5c(void)

{
  if ((DAT_101860668 & 1) == 0) {
    DAT_101860628 = 0;
    DAT_10186062c = 0;
    DAT_101860630 = PTR_DAT_101873138;
    DAT_101860638 = 0;
    DAT_10186063c = 8;
    DAT_101860640 = PTR_DAT_101873138;
    DAT_101860648 = 0;
    DAT_10186064c = 0x10;
    DAT_101860650 = PTR_DAT_1018730f0;
    DAT_101860670 = DAT_101860670 + 4;
    DAT_101860658 = 0;
    DAT_10186065c = 0x14;
    DAT_101860660 = PTR_DAT_101873118;
    DAT_101860668 = 1;
  }
  return;
}




void FUN_1004adbec(void)

{
  long lVar1;
  
  if ((DAT_101860678 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855ed8,1,"MenuMeshAnimation",0x18,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101860628;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860670;
    DAT_101860678 = 1;
  }
  return;
}




void FUN_1004adc4c(void)

{
  long lVar1;
  
  if ((DAT_101860680 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855ef8,3,"MenuMeshAnimation*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855ed8;
    DAT_101860680 = 1;
  }
  return;
}




void FUN_1004adca4(void)

{
  long lVar1;
  
  if ((DAT_101860688 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855f10,3,"MenuMeshAnimation**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855ef8;
    DAT_101860688 = 1;
  }
  return;
}




void FUN_1004adcfc(void)

{
  if ((DAT_1018606a0 & 1) == 0) {
    DAT_1018606a8 = DAT_1018606a8 + 1;
    DAT_101860690 = 0;
    DAT_101860694 = 0;
    DAT_101860698 = PTR_DAT_1018730c0;
    DAT_1018606a0 = 1;
  }
  return;
}




void FUN_1004add44(void)

{
  long lVar1;
  
  if ((DAT_1018606b0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855f30,1,"Int",4,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101860690;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018606a8;
    DAT_1018606b0 = 1;
  }
  return;
}




void FUN_1004adda4(void)

{
  long lVar1;
  
  if ((DAT_1018606b8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855f50,3,"Int*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855f30;
    DAT_1018606b8 = 1;
  }
  return;
}




void FUN_1004addfc(void)

{
  long lVar1;
  
  if ((DAT_1018606c0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855f68,3,"Int**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855f50;
    DAT_1018606c0 = 1;
  }
  return;
}




void FUN_1004ade54(void)

{
  if ((DAT_101860a78 & 1) == 0) {
    DAT_1018606c8 = 0;
    DAT_1018606cc = 0;
    DAT_1018606d0 = PTR_DAT_101854eb0;
    DAT_1018606d8 = 0;
    DAT_1018606dc = 8;
    DAT_1018606e0 = PTR_DAT_101873138;
    DAT_1018606e8 = 0;
    DAT_1018606ec = 0x10;
    DAT_1018606f0 = PTR_DAT_101873138;
    DAT_1018606f8 = 0;
    DAT_1018606fc = 0x18;
    DAT_101860700 = PTR_DAT_101873138;
    DAT_101860708 = 0;
    DAT_10186070c = 0x20;
    DAT_101860710 = PTR_DAT_101873138;
    DAT_101860718 = 0;
    DAT_10186071c = 0x28;
    DAT_101860720 = PTR_DAT_101855f80;
    DAT_101860728 = 0;
    DAT_10186072c = 0x30;
    DAT_101860730 = PTR_DAT_1018730c0;
    DAT_101860738 = 0;
    DAT_10186073c = 0x34;
    DAT_101860740 = PTR_DAT_1018730c0;
    DAT_101860748 = 0;
    DAT_10186074c = 0x38;
    DAT_101860750 = PTR_DAT_101873118;
    DAT_101860758 = 0;
    DAT_10186075c = 0x39;
    DAT_101860760 = PTR_DAT_101873118;
    DAT_101860768 = 0;
    DAT_10186076c = 0x3a;
    DAT_101860770 = PTR_DAT_101873118;
    DAT_101860778 = 0;
    DAT_10186077c = 0x3b;
    DAT_101860780 = PTR_DAT_101873118;
    DAT_101860788 = 0;
    DAT_10186078c = 0x3c;
    DAT_101860790 = PTR_DAT_101873118;
    DAT_101860798 = 0;
    DAT_10186079c = 0x3d;
    DAT_1018607a0 = PTR_DAT_101873118;
    DAT_1018607a8 = 0;
    DAT_1018607ac = 0x3e;
    DAT_1018607b0 = PTR_DAT_101873118;
    DAT_1018607b8 = 0;
    DAT_1018607bc = 0x3f;
    DAT_1018607c0 = PTR_DAT_101873118;
    DAT_1018607c8 = 0;
    DAT_1018607cc = 0x40;
    DAT_1018607d0 = PTR_DAT_101873118;
    DAT_1018607d8 = 0;
    DAT_1018607dc = 0x41;
    DAT_1018607e0 = PTR_DAT_101873118;
    DAT_1018607e8 = 0;
    DAT_1018607ec = 0x42;
    DAT_1018607f0 = PTR_DAT_101873118;
    DAT_1018607f8 = 0;
    DAT_1018607fc = 0x43;
    DAT_101860800 = PTR_DAT_101873118;
    DAT_101860808 = 0;
    DAT_10186080c = 0x44;
    DAT_101860810 = PTR_DAT_101873118;
    DAT_101860818 = 0;
    DAT_10186081c = 0x45;
    DAT_101860820 = PTR_DAT_101873118;
    DAT_101860828 = 0;
    DAT_10186082c = 0x46;
    DAT_101860830 = PTR_DAT_101873118;
    DAT_101860838 = 0;
    DAT_10186083c = 0x47;
    DAT_101860840 = PTR_DAT_101873118;
    DAT_101860848 = 0;
    DAT_10186084c = 0x48;
    DAT_101860850 = PTR_DAT_101873118;
    DAT_101860858 = 0;
    DAT_10186085c = 0x49;
    DAT_101860860 = PTR_DAT_101873118;
    DAT_101860868 = 0;
    DAT_10186086c = 0x4a;
    DAT_101860870 = PTR_DAT_101873118;
    DAT_101860878 = 0;
    DAT_10186087c = 0x4b;
    DAT_101860880 = PTR_DAT_101873118;
    DAT_101860888 = 0;
    DAT_10186088c = 0x4c;
    DAT_101860890 = PTR_DAT_101873118;
    DAT_101860898 = 0;
    DAT_10186089c = 0x4d;
    DAT_1018608a0 = PTR_DAT_101873118;
    DAT_1018608a8 = 0;
    DAT_1018608ac = 0x4e;
    DAT_1018608b0 = PTR_DAT_101873118;
    DAT_1018608b8 = 0;
    DAT_1018608bc = 0x4f;
    DAT_1018608c0 = PTR_DAT_101873118;
    DAT_1018608c8 = 0;
    DAT_1018608cc = 0x50;
    DAT_1018608d0 = PTR_DAT_101873118;
    DAT_1018608d8 = 0;
    DAT_1018608dc = 0x51;
    DAT_1018608e0 = PTR_DAT_101873118;
    DAT_1018608e8 = 0;
    DAT_1018608ec = 0x52;
    DAT_1018608f0 = PTR_DAT_101873118;
    DAT_1018608f8 = 0;
    DAT_1018608fc = 0x53;
    DAT_101860900 = PTR_DAT_101873118;
    DAT_101860908 = 0;
    DAT_10186090c = 0x54;
    DAT_101860910 = PTR_DAT_101873118;
    DAT_101860918 = 0;
    DAT_10186091c = 0x55;
    DAT_101860920 = PTR_DAT_101873118;
    DAT_101860928 = 0;
    DAT_10186092c = 0x56;
    DAT_101860930 = PTR_DAT_101873118;
    DAT_101860938 = 0;
    DAT_10186093c = 0x57;
    DAT_101860940 = PTR_DAT_101873118;
    DAT_101860948 = 0;
    DAT_10186094c = 0x58;
    DAT_101860950 = PTR_DAT_101873118;
    DAT_101860958 = 0;
    DAT_10186095c = 0x59;
    DAT_101860960 = PTR_DAT_101873118;
    DAT_101860968 = 0;
    DAT_10186096c = 0x5c;
    DAT_101860970 = PTR_DAT_1018730c0;
    DAT_101860978 = 0;
    DAT_10186097c = 0x60;
    DAT_101860980 = PTR_DAT_1018730c0;
    DAT_101860988 = 0;
    DAT_10186098c = 100;
    DAT_101860990 = PTR_DAT_1018730c0;
    DAT_101860998 = 0;
    DAT_10186099c = 0x68;
    DAT_1018609a0 = PTR_DAT_101873138;
    DAT_1018609a8 = 0;
    DAT_1018609ac = 0x70;
    DAT_1018609b0 = PTR_DAT_101873138;
    DAT_1018609b8 = 0;
    DAT_1018609bc = 0x78;
    DAT_1018609c0 = PTR_DAT_101873138;
    DAT_1018609c8 = 0;
    DAT_1018609cc = 0x80;
    DAT_1018609d0 = PTR_DAT_101873118;
    DAT_1018609d8 = 0;
    DAT_1018609dc = 0x84;
    DAT_1018609e0 = PTR_DAT_1018730c0;
    DAT_1018609e8 = 0;
    DAT_1018609ec = 0x88;
    DAT_1018609f0 = PTR_DAT_1018730c0;
    DAT_1018609f8 = 0;
    DAT_1018609fc = 0x8c;
    DAT_101860a00 = PTR_DAT_1018730c0;
    DAT_101860a08 = 0;
    DAT_101860a0c = 0x90;
    DAT_101860a10 = PTR_DAT_1018730c0;
    DAT_101860a18 = 0;
    DAT_101860a1c = 0x94;
    DAT_101860a20 = PTR_DAT_1018730c0;
    DAT_101860a28 = 0;
    DAT_101860a2c = 0x98;
    DAT_101860a30 = PTR_DAT_1018730c0;
    DAT_101860a38 = 0;
    DAT_101860a3c = 0x9c;
    DAT_101860a40 = PTR_DAT_1018730c0;
    DAT_101860a48 = 0;
    DAT_101860a4c = 0xa0;
    DAT_101860a50 = PTR_DAT_1018730c0;
    DAT_101860a58 = 0;
    DAT_101860a5c = 0xa4;
    DAT_101860a60 = PTR_DAT_1018730c0;
    DAT_101860a80 = DAT_101860a80 + 0x3b;
    DAT_101860a68 = 0;
    DAT_101860a6c = 0xa8;
    DAT_101860a70 = PTR_DAT_1018730c0;
    DAT_101860a78 = 1;
  }
  return;
}




void FUN_1004ae26c(void)

{
  long lVar1;
  
  if ((DAT_101860a88 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855f88,1,"GameMode",0xb0,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018606c8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860a80;
    DAT_101860a88 = 1;
  }
  return;
}




void FUN_1004ae2cc(void)

{
  long lVar1;
  
  if ((DAT_101860a90 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855fa8,3,"GameMode*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855f88;
    DAT_101860a90 = 1;
  }
  return;
}




void FUN_1004ae324(void)

{
  long lVar1;
  
  if ((DAT_101860a98 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855fc0,3,"GameMode**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855fa8;
    DAT_101860a98 = 1;
  }
  return;
}




void FUN_1004ae37c(void)

{
  if ((DAT_101860b20 & 1) == 0) {
    DAT_101860aa0 = 0;
    DAT_101860aa4 = 0;
    DAT_101860aa8 = PTR_DAT_101873138;
    DAT_101860ab0 = 0;
    DAT_101860ab4 = 8;
    DAT_101860ab8 = PTR_DAT_1018730f0;
    DAT_101860ac0 = 0;
    DAT_101860ac4 = 0xc;
    DAT_101860ac8 = PTR_DAT_1018730f0;
    DAT_101860ad0 = 0;
    DAT_101860ad4 = 0x10;
    DAT_101860ad8 = PTR_DAT_1018730f0;
    DAT_101860ae0 = 0;
    DAT_101860ae4 = 0x14;
    DAT_101860ae8 = PTR_DAT_1018730f0;
    DAT_101860af0 = 0;
    DAT_101860af4 = 0x18;
    DAT_101860af8 = PTR_DAT_1018730f0;
    DAT_101860b00 = 0;
    DAT_101860b04 = 0x1c;
    DAT_101860b08 = PTR_DAT_1018730f0;
    DAT_101860b28 = DAT_101860b28 + 8;
    DAT_101860b10 = 0;
    DAT_101860b14 = 0x20;
    DAT_101860b18 = PTR_DAT_101854d48;
    DAT_101860b20 = 1;
  }
  return;
}




void FUN_1004ae448(void)

{
  long lVar1;
  
  if ((DAT_101860b30 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855fd8,1,"TuningVariable",0x28,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101860aa0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860b28;
    DAT_101860b30 = 1;
  }
  return;
}




void FUN_1004ae4a8(void)

{
  long lVar1;
  
  if ((DAT_101860b38 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101855ff8,3,"TuningVariable*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855fd8;
    DAT_101860b38 = 1;
  }
  return;
}




void FUN_1004ae500(void)

{
  long lVar1;
  
  if ((DAT_101860b40 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856010,3,"TuningVariable**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101855ff8;
    DAT_101860b40 = 1;
  }
  return;
}




void FUN_1004ae558(void)

{
  if ((DAT_101860b68 & 1) == 0) {
    DAT_101860b48 = 0;
    DAT_101860b4c = 0;
    DAT_101860b50 = PTR_DAT_1018730c0;
    DAT_101860b70 = DAT_101860b70 + 2;
    DAT_101860b58 = 0;
    DAT_101860b5c = 8;
    DAT_101860b60 = PTR_DAT_101873138;
    DAT_101860b68 = 1;
  }
  return;
}




void FUN_1004ae5bc(void)

{
  long lVar1;
  
  if ((DAT_101860b78 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856030,1,"RecommendedAbility",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101860b48;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860b70;
    DAT_101860b78 = 1;
  }
  return;
}




void FUN_1004ae61c(void)

{
  long lVar1;
  
  if ((DAT_101860b80 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856050,3,"RecommendedAbility*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856030;
    DAT_101860b80 = 1;
  }
  return;
}




void FUN_1004ae674(void)

{
  long lVar1;
  
  if ((DAT_101860b88 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856068,3,"RecommendedAbility**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856050;
    DAT_101860b88 = 1;
  }
  return;
}




void FUN_1004ae6cc(void)

{
  if ((DAT_101860c10 & 1) == 0) {
    DAT_101860b90 = 0;
    DAT_101860b94 = 0;
    DAT_101860b98 = PTR_DAT_101873118;
    DAT_101860ba0 = 0;
    DAT_101860ba4 = 1;
    DAT_101860ba8 = PTR_DAT_101873118;
    DAT_101860bb0 = 0;
    DAT_101860bb4 = 2;
    DAT_101860bb8 = PTR_DAT_101873118;
    DAT_101860bc0 = 0;
    DAT_101860bc4 = 3;
    DAT_101860bc8 = PTR_DAT_101873118;
    DAT_101860bd0 = 0;
    DAT_101860bd4 = 4;
    DAT_101860bd8 = PTR_DAT_101873118;
    DAT_101860be0 = 0;
    DAT_101860be4 = 5;
    DAT_101860be8 = PTR_DAT_101873118;
    DAT_101860bf0 = 0;
    DAT_101860bf4 = 6;
    DAT_101860bf8 = PTR_DAT_101873118;
    DAT_101860c18 = DAT_101860c18 + 8;
    DAT_101860c00 = 0;
    DAT_101860c04 = 7;
    DAT_101860c08 = PTR_DAT_101873118;
    DAT_101860c10 = 1;
  }
  return;
}




void FUN_1004ae780(void)

{
  long lVar1;
  
  if ((DAT_101860c20 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856088,1,"AbilityTargetTypes",8,1);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101860b90;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860c18;
    DAT_101860c20 = 1;
  }
  return;
}




void FUN_1004ae7e0(void)

{
  long lVar1;
  
  if ((DAT_101860c28 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018560b0,3,"AbilityTargetTypes*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856088;
    DAT_101860c28 = 1;
  }
  return;
}




void FUN_1004ae838(void)

{
  long lVar1;
  
  if ((DAT_101860c30 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018560c8,3,"AbilityTargetTypes**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018560b0;
    DAT_101860c30 = 1;
  }
  return;
}




void FUN_1004ae890(void)

{
  if ((DAT_101860c78 & 1) == 0) {
    DAT_101860c38 = 0;
    DAT_101860c3c = 0;
    DAT_101860c40 = PTR_DAT_101873138;
    DAT_101860c48 = 0;
    DAT_101860c4c = 8;
    DAT_101860c50 = PTR_DAT_101873138;
    DAT_101860c58 = 0;
    DAT_101860c5c = 0x10;
    DAT_101860c60 = PTR_DAT_1018730f0;
    DAT_101860c80 = DAT_101860c80 + 4;
    DAT_101860c68 = 0;
    DAT_101860c6c = 0x14;
    DAT_101860c70 = PTR_DAT_1018730f0;
    DAT_101860c78 = 1;
  }
  return;
}




void FUN_1004ae914(void)

{
  long lVar1;
  
  if ((DAT_101860c88 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018560e0,1,"RingIndicator",0x18,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101860c38;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860c80;
    DAT_101860c88 = 1;
  }
  return;
}




void FUN_1004ae974(void)

{
  long lVar1;
  
  if ((DAT_101860c90 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856108,3,"RingIndicator*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018560e0;
    DAT_101860c90 = 1;
  }
  return;
}




void FUN_1004ae9cc(void)

{
  long lVar1;
  
  if ((DAT_101860c98 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856120,3,"RingIndicator**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856108;
    DAT_101860c98 = 1;
  }
  return;
}




void FUN_1004aea24(void)

{
  if ((DAT_101860dc0 & 1) == 0) {
    DAT_101860ca0 = 0;
    DAT_101860ca4 = 0;
    DAT_101860ca8 = PTR_DAT_101873118;
    DAT_101860cb0 = 0;
    DAT_101860cb4 = 1;
    DAT_101860cb8 = PTR_DAT_101873118;
    DAT_101860cc0 = 0;
    DAT_101860cc4 = 4;
    DAT_101860cc8 = PTR_DAT_1018730f0;
    DAT_101860cd0 = 0;
    DAT_101860cd4 = 8;
    DAT_101860cd8 = PTR_DAT_101873118;
    DAT_101860ce0 = 0;
    DAT_101860ce4 = 0xc;
    DAT_101860ce8 = PTR_DAT_1018730f0;
    DAT_101860cf0 = 0;
    DAT_101860cf4 = 0x10;
    DAT_101860cf8 = PTR_DAT_101873138;
    DAT_101860d00 = 0;
    DAT_101860d04 = 0x18;
    DAT_101860d08 = PTR_DAT_101873118;
    DAT_101860d10 = 0;
    DAT_101860d14 = 0x19;
    DAT_101860d18 = PTR_DAT_101873118;
    DAT_101860d20 = 0;
    DAT_101860d24 = 0x20;
    DAT_101860d28 = PTR_DAT_101873138;
    DAT_101860d30 = 0;
    DAT_101860d34 = 0x28;
    DAT_101860d38 = PTR_DAT_101873138;
    DAT_101860d40 = 0;
    DAT_101860d44 = 0x30;
    DAT_101860d48 = PTR_DAT_101856100;
    DAT_101860d50 = 0;
    DAT_101860d54 = 0x48;
    DAT_101860d58 = PTR_DAT_101854ff0;
    DAT_101860d60 = 0;
    DAT_101860d64 = 0x4c;
    DAT_101860d68 = PTR_DAT_1018730f0;
    DAT_101860d70 = 0;
    DAT_101860d74 = 0x50;
    DAT_101860d78 = PTR_DAT_1018730f0;
    DAT_101860d80 = 0;
    DAT_101860d84 = 0x54;
    DAT_101860d88 = PTR_DAT_1018730f0;
    DAT_101860d90 = 0;
    DAT_101860d94 = 0x58;
    DAT_101860d98 = PTR_DAT_101873118;
    DAT_101860da0 = 0;
    DAT_101860da4 = 0x59;
    DAT_101860da8 = PTR_DAT_101873118;
    DAT_101860dc8 = DAT_101860dc8 + 0x12;
    DAT_101860db0 = 0;
    DAT_101860db4 = 0x5c;
    DAT_101860db8 = PTR_DAT_1018730f0;
    DAT_101860dc0 = 1;
  }
  return;
}




void FUN_1004aeba0(void)

{
  long lVar1;
  
  if ((DAT_101860dd0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856138,1,"ModalSelector",0x60,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101860ca0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860dc8;
    DAT_101860dd0 = 1;
  }
  return;
}




void FUN_1004aec00(void)

{
  long lVar1;
  
  if ((DAT_101860dd8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856160,3,"ModalSelector*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856138;
    DAT_101860dd8 = 1;
  }
  return;
}




void FUN_1004aec58(void)

{
  long lVar1;
  
  if ((DAT_101860de0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856178,3,"ModalSelector**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856160;
    DAT_101860de0 = 1;
  }
  return;
}




void FUN_1004aecb0(void)

{
  if ((DAT_101860e28 & 1) == 0) {
    DAT_101860de8 = 0;
    DAT_101860dec = 0;
    DAT_101860df0 = PTR_DAT_1018730d8;
    DAT_101860df8 = 0;
    DAT_101860dfc = 8;
    DAT_101860e00 = PTR_DAT_101873138;
    DAT_101860e08 = 0;
    DAT_101860e0c = 0x10;
    DAT_101860e10 = PTR_DAT_101873138;
    DAT_101860e30 = DAT_101860e30 + 4;
    DAT_101860e18 = 0;
    DAT_101860e1c = 0x18;
    DAT_101860e20 = PTR_DAT_101873138;
    DAT_101860e28 = 1;
  }
  return;
}




void FUN_1004aed34(void)

{
  long lVar1;
  
  if ((DAT_101860e38 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856190,1,"SocialPingsIcon",0x20,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101860de8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860e30;
    DAT_101860e38 = 1;
  }
  return;
}




void FUN_1004aed94(void)

{
  long lVar1;
  
  if ((DAT_101860e40 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018561b0,3,"SocialPingsIcon*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856190;
    DAT_101860e40 = 1;
  }
  return;
}




void FUN_1004aedec(void)

{
  long lVar1;
  
  if ((DAT_101860e48 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018561c8,3,"SocialPingsIcon**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018561b0;
    DAT_101860e48 = 1;
  }
  return;
}




void FUN_1004aee44(void)

{
  if ((DAT_101860ea0 & 1) == 0) {
    DAT_101860e50 = 0;
    DAT_101860e54 = 0;
    DAT_101860e58 = PTR_DAT_101873138;
    DAT_101860e60 = 0;
    DAT_101860e64 = 8;
    DAT_101860e68 = PTR_DAT_101873138;
    DAT_101860e70 = 0;
    DAT_101860e74 = 0x10;
    DAT_101860e78 = PTR_DAT_101873118;
    DAT_101860e80 = 0;
    DAT_101860e84 = 0x11;
    DAT_101860e88 = PTR_DAT_101873118;
    DAT_101860ea8 = DAT_101860ea8 + 5;
    DAT_101860e90 = 0;
    DAT_101860e94 = 0x18;
    DAT_101860e98 = PTR_DAT_1018561e0;
    DAT_101860ea0 = 1;
  }
  return;
}




void FUN_1004aeee0(void)

{
  long lVar1;
  
  if ((DAT_101860eb0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018561e8,1,"SocialPingsPack",0x20,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101860e50;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860ea8;
    DAT_101860eb0 = 1;
  }
  return;
}




void FUN_1004aef40(void)

{
  long lVar1;
  
  if ((DAT_101860eb8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856208,3,"SocialPingsPack*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018561e8;
    DAT_101860eb8 = 1;
  }
  return;
}




void FUN_1004aef98(void)

{
  long lVar1;
  
  if ((DAT_101860ec0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856220,3,"SocialPingsPack**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856208;
    DAT_101860ec0 = 1;
  }
  return;
}




void FUN_1004aeff0(void)

{
  if ((DAT_101860ed8 & 1) == 0) {
    DAT_101860ee0 = DAT_101860ee0 + 1;
    DAT_101860ec8 = 0;
    DAT_101860ecc = 0;
    DAT_101860ed0 = PTR_DAT_101856238;
    DAT_101860ed8 = 1;
  }
  return;
}




void FUN_1004af034(void)

{
  long lVar1;
  
  if ((DAT_101860ee8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856240,1,"SocialPingsManifest",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101860ec8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860ee0;
    DAT_101860ee8 = 1;
  }
  return;
}




void FUN_1004af094(void)

{
  long lVar1;
  
  if ((DAT_101860ef0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856260,3,"SocialPingsManifest*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856240;
    DAT_101860ef0 = 1;
  }
  return;
}




void FUN_1004af0ec(void)

{
  long lVar1;
  
  if ((DAT_101860ef8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856278,3,"SocialPingsManifest**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856260;
    DAT_101860ef8 = 1;
  }
  return;
}




void FUN_1004af144(void)

{
  if ((DAT_101860f20 & 1) == 0) {
    DAT_101860f00 = 0;
    DAT_101860f04 = 0;
    DAT_101860f08 = PTR_DAT_101873138;
    DAT_101860f28 = DAT_101860f28 + 2;
    DAT_101860f10 = 0;
    DAT_101860f14 = 8;
    DAT_101860f18 = PTR_DAT_101872c98;
    DAT_101860f20 = 1;
  }
  return;
}




void FUN_1004af1a8(void)

{
  long lVar1;
  
  if ((DAT_101860f30 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856290,1,"StructureAttachPoint",0x30,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101860f00;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101860f28;
    DAT_101860f30 = 1;
  }
  return;
}




void FUN_1004af208(void)

{
  long lVar1;
  
  if ((DAT_101860f38 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018562b0,3,"StructureAttachPoint*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856290;
    DAT_101860f38 = 1;
  }
  return;
}




void FUN_1004af260(void)

{
  long lVar1;
  
  if ((DAT_101860f40 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018562c8,3,"StructureAttachPoint**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018562b0;
    DAT_101860f40 = 1;
  }
  return;
}




void FUN_1004af2b8(void)

{
  if ((DAT_101861038 & 1) == 0) {
    DAT_101860f48 = 0;
    DAT_101860f4c = 0;
    DAT_101860f50 = PTR_DAT_1018730f0;
    DAT_101860f58 = 0;
    DAT_101860f5c = 4;
    DAT_101860f60 = PTR_DAT_1018730f0;
    DAT_101860f68 = 0;
    DAT_101860f6c = 8;
    DAT_101860f70 = PTR_DAT_1018730f0;
    DAT_101860f78 = 0;
    DAT_101860f7c = 0xc;
    DAT_101860f80 = PTR_DAT_1018730f0;
    DAT_101860f88 = 0;
    DAT_101860f8c = 0x10;
    DAT_101860f90 = PTR_DAT_1018730f0;
    DAT_101860f98 = 0;
    DAT_101860f9c = 0x14;
    DAT_101860fa0 = PTR_DAT_1018730f0;
    DAT_101860fa8 = 0;
    DAT_101860fac = 0x18;
    DAT_101860fb0 = PTR_DAT_1018730f0;
    DAT_101860fb8 = 0;
    DAT_101860fbc = 0x1c;
    DAT_101860fc0 = PTR_DAT_1018730f0;
    DAT_101860fc8 = 0;
    DAT_101860fcc = 0x20;
    DAT_101860fd0 = PTR_DAT_1018730f0;
    DAT_101860fd8 = 0;
    DAT_101860fdc = 0x24;
    DAT_101860fe0 = PTR_DAT_1018730f0;
    DAT_101860fe8 = 0;
    DAT_101860fec = 0x28;
    DAT_101860ff0 = PTR_DAT_1018730f0;
    DAT_101860ff8 = 0;
    DAT_101860ffc = 0x2c;
    DAT_101861000 = PTR_DAT_1018730f0;
    DAT_101861008 = 0;
    DAT_10186100c = 0x30;
    DAT_101861010 = PTR_DAT_1018730f0;
    DAT_101861018 = 0;
    DAT_10186101c = 0x34;
    DAT_101861020 = PTR_DAT_1018730f0;
    DAT_101861040 = DAT_101861040 + 0xf;
    DAT_101861028 = 0;
    DAT_10186102c = 0x38;
    DAT_101861030 = PTR_DAT_1018730f0;
    DAT_101861038 = 1;
  }
  return;
}




void FUN_1004af3e0(void)

{
  long lVar1;
  
  if ((DAT_101861048 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018562e8,1,"MinimapIconScales",0x3c,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101860f48;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101861040;
    DAT_101861048 = 1;
  }
  return;
}




void FUN_1004af440(void)

{
  long lVar1;
  
  if ((DAT_101861050 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856310,3,"MinimapIconScales*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018562e8;
    DAT_101861050 = 1;
  }
  return;
}




void FUN_1004af498(void)

{
  long lVar1;
  
  if ((DAT_101861058 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856328,3,"MinimapIconScales**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856310;
    DAT_101861058 = 1;
  }
  return;
}




void FUN_1004af4f0(void)

{
  if ((DAT_1018610c0 & 1) == 0) {
    DAT_101861060 = 0;
    DAT_101861064 = 0;
    DAT_101861068 = PTR_DAT_101873138;
    DAT_101861070 = 0;
    DAT_101861074 = 8;
    DAT_101861078 = PTR_DAT_1018730f0;
    DAT_101861080 = 0;
    DAT_101861084 = 0xc;
    DAT_101861088 = PTR_DAT_1018730f0;
    DAT_101861090 = 0;
    DAT_101861094 = 0x10;
    DAT_101861098 = PTR_DAT_101873138;
    DAT_1018610a0 = 0;
    DAT_1018610a4 = 0x18;
    DAT_1018610a8 = PTR_DAT_101873138;
    DAT_1018610c8 = DAT_1018610c8 + 6;
    DAT_1018610b0 = 0;
    DAT_1018610b4 = 0x20;
    DAT_1018610b8 = PTR_DAT_101872d78;
    DAT_1018610c0 = 1;
  }
  return;
}




void FUN_1004af5a0(void)

{
  long lVar1;
  
  if ((DAT_1018610d0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856340,1,"SoundVolume",0x28,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101861060;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018610c8;
    DAT_1018610d0 = 1;
  }
  return;
}




void FUN_1004af600(void)

{
  long lVar1;
  
  if ((DAT_1018610d8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856360,3,"SoundVolume*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856340;
    DAT_1018610d8 = 1;
  }
  return;
}




void FUN_1004af658(void)

{
  long lVar1;
  
  if ((DAT_1018610e0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856378,3,"SoundVolume**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856360;
    DAT_1018610e0 = 1;
  }
  return;
}




void FUN_1004af6b0(void)

{
  if ((DAT_101862f28 & 1) == 0) {
    DAT_1018610e8 = 0;
    DAT_1018610ec = 0;
    DAT_1018610f0 = PTR_DAT_1018730f0;
    DAT_1018610f8 = 0;
    DAT_1018610fc = 4;
    DAT_101861100 = PTR_DAT_1018730f0;
    DAT_101861108 = 0;
    DAT_10186110c = 8;
    DAT_101861110 = PTR_DAT_1018730f0;
    DAT_101861118 = 0;
    DAT_10186111c = 0xc;
    DAT_101861120 = PTR_DAT_1018730f0;
    DAT_101861128 = 0;
    DAT_10186112c = 0x10;
    DAT_101861130 = PTR_DAT_1018730f0;
    DAT_101861138 = 0;
    DAT_10186113c = 0x14;
    DAT_101861140 = PTR_DAT_1018730f0;
    DAT_101861148 = 0;
    DAT_10186114c = 0x18;
    DAT_101861150 = PTR_DAT_1018730f0;
    DAT_101861158 = 0;
    DAT_10186115c = 0x1c;
    DAT_101861160 = PTR_DAT_1018730f0;
    DAT_101861168 = 0;
    DAT_10186116c = 0x20;
    DAT_101861170 = PTR_DAT_1018730f0;
    DAT_101861178 = 0;
    DAT_10186117c = 0x24;
    DAT_101861180 = PTR_DAT_1018730f0;
    DAT_101861188 = 0;
    DAT_10186118c = 0x28;
    DAT_101861190 = PTR_DAT_1018730f0;
    DAT_101861198 = 0;
    DAT_10186119c = 0x2c;
    DAT_1018611a0 = PTR_DAT_1018730f0;
    DAT_1018611a8 = 0;
    DAT_1018611ac = 0x30;
    DAT_1018611b0 = PTR_DAT_1018730f0;
    DAT_1018611b8 = 0;
    DAT_1018611bc = 0x34;
    DAT_1018611c0 = PTR_DAT_1018730f0;
    DAT_1018611c8 = 0;
    DAT_1018611cc = 0x38;
    DAT_1018611d0 = PTR_DAT_1018730f0;
    DAT_1018611d8 = 0;
    DAT_1018611dc = 0x3c;
    DAT_1018611e0 = PTR_DAT_1018730f0;
    DAT_1018611e8 = 0;
    DAT_1018611ec = 0x40;
    DAT_1018611f0 = PTR_DAT_1018730f0;
    DAT_1018611f8 = 0;
    DAT_1018611fc = 0x44;
    DAT_101861200 = PTR_DAT_1018730f0;
    DAT_101861208 = 0;
    DAT_10186120c = 0x48;
    DAT_101861210 = PTR_DAT_1018730f0;
    DAT_101861218 = 0;
    DAT_10186121c = 0x4c;
    DAT_101861220 = PTR_DAT_1018730f0;
    DAT_101861228 = 0;
    DAT_10186122c = 0x50;
    DAT_101861230 = PTR_DAT_1018730f0;
    DAT_101861238 = 0;
    DAT_10186123c = 0x54;
    DAT_101861240 = PTR_DAT_1018730f0;
    DAT_101861248 = 0;
    DAT_10186124c = 0x58;
    DAT_101861250 = PTR_DAT_1018730f0;
    DAT_101861258 = 0;
    DAT_10186125c = 0x5c;
    DAT_101861260 = PTR_DAT_1018730f0;
    DAT_101861268 = 0;
    DAT_10186126c = 0x60;
    DAT_101861270 = PTR_DAT_1018730f0;
    DAT_101861278 = 0;
    DAT_10186127c = 100;
    DAT_101861280 = PTR_DAT_1018730f0;
    DAT_101861288 = 0;
    DAT_10186128c = 0x68;
    DAT_101861290 = PTR_DAT_1018730f0;
    DAT_101861298 = 0;
    DAT_10186129c = 0x6c;
    DAT_1018612a0 = PTR_DAT_1018730f0;
    DAT_1018612a8 = 0;
    DAT_1018612ac = 0x70;
    DAT_1018612b0 = PTR_DAT_1018730f0;
    DAT_1018612b8 = 0;
    DAT_1018612bc = 0x74;
    DAT_1018612c0 = PTR_DAT_1018730f0;
    DAT_1018612c8 = 0;
    DAT_1018612cc = 0x78;
    DAT_1018612d0 = PTR_DAT_1018730f0;
    DAT_1018612d8 = 0;
    DAT_1018612dc = 0x7c;
    DAT_1018612e0 = PTR_DAT_1018730f0;
    DAT_1018612e8 = 0;
    DAT_1018612ec = 0x80;
    DAT_1018612f0 = PTR_DAT_1018730f0;
    DAT_1018612f8 = 0;
    DAT_1018612fc = 0x84;
    DAT_101861300 = PTR_DAT_1018730f0;
    DAT_101861308 = 0;
    DAT_10186130c = 0x88;
    DAT_101861310 = PTR_DAT_1018730f0;
    DAT_101861318 = 0;
    DAT_10186131c = 0x8c;
    DAT_101861320 = PTR_DAT_1018730f0;
    DAT_101861328 = 0;
    DAT_10186132c = 0x90;
    DAT_101861330 = PTR_DAT_1018730f0;
    DAT_101861338 = 0;
    DAT_10186133c = 0x94;
    DAT_101861340 = PTR_DAT_1018730f0;
    DAT_101861348 = 0;
    DAT_10186134c = 0x98;
    DAT_101861350 = PTR_DAT_1018730f0;
    DAT_101861358 = 0;
    DAT_10186135c = 0x9c;
    DAT_101861360 = PTR_DAT_1018730f0;
    DAT_101861368 = 0;
    DAT_10186136c = 0xa0;
    DAT_101861370 = PTR_DAT_1018730f0;
    DAT_101861378 = 0;
    DAT_10186137c = 0xa4;
    DAT_101861380 = PTR_DAT_1018730f0;
    DAT_101861388 = 0;
    DAT_10186138c = 0xa8;
    DAT_101861390 = PTR_DAT_1018730f0;
    DAT_101861398 = 0;
    DAT_10186139c = 0xac;
    DAT_1018613a0 = PTR_DAT_1018730f0;
    DAT_1018613a8 = 0;
    DAT_1018613ac = 0xb0;
    DAT_1018613b0 = PTR_DAT_1018730f0;
    DAT_1018613b8 = 0;
    DAT_1018613bc = 0xb4;
    DAT_1018613c0 = PTR_DAT_1018730f0;
    DAT_1018613c8 = 0;
    DAT_1018613cc = 0xb8;
    DAT_1018613d0 = PTR_DAT_1018730f0;
    DAT_1018613d8 = 0;
    DAT_1018613dc = 0xbc;
    DAT_1018613e0 = PTR_DAT_1018730f0;
    DAT_1018613e8 = 0;
    DAT_1018613ec = 0xc0;
    DAT_1018613f0 = PTR_DAT_1018730f0;
    DAT_1018613f8 = 0;
    DAT_1018613fc = 0xc4;
    DAT_101861400 = PTR_DAT_1018730f0;
    DAT_101861408 = 0;
    DAT_10186140c = 200;
    DAT_101861410 = PTR_DAT_1018730f0;
    DAT_101861418 = 0;
    DAT_10186141c = 0xcc;
    DAT_101861420 = PTR_DAT_1018730f0;
    DAT_101861428 = 0;
    DAT_10186142c = 0xd0;
    DAT_101861430 = PTR_DAT_1018730f0;
    DAT_101861438 = 0;
    DAT_10186143c = 0xd4;
    DAT_101861440 = PTR_DAT_1018730f0;
    DAT_101861448 = 0;
    DAT_10186144c = 0xd8;
    DAT_101861450 = PTR_DAT_1018730f0;
    DAT_101861458 = 0;
    DAT_10186145c = 0xdc;
    DAT_101861460 = PTR_DAT_1018730f0;
    DAT_101861468 = 0;
    DAT_10186146c = 0xe0;
    DAT_101861470 = PTR_DAT_1018730f0;
    DAT_101861478 = 0;
    DAT_10186147c = 0xe4;
    DAT_101861480 = PTR_DAT_1018730f0;
    DAT_101861488 = 0;
    DAT_10186148c = 0xe8;
    DAT_101861490 = PTR_DAT_1018730f0;
    DAT_101861498 = 0;
    DAT_10186149c = 0xec;
    DAT_1018614a0 = PTR_DAT_1018730f0;
    DAT_1018614a8 = 0;
    DAT_1018614ac = 0xf0;
    DAT_1018614b0 = PTR_DAT_1018730f0;
    DAT_1018614b8 = 0;
    DAT_1018614bc = 0xf4;
    DAT_1018614c0 = PTR_DAT_1018730f0;
    DAT_1018614c8 = 0;
    DAT_1018614cc = 0xf8;
    DAT_1018614d0 = PTR_DAT_1018730f0;
    DAT_1018614d8 = 0;
    DAT_1018614dc = 0xfc;
    DAT_1018614e0 = PTR_DAT_1018730f0;
    DAT_1018614e8 = 0;
    DAT_1018614ec = 0x100;
    DAT_1018614f0 = PTR_DAT_1018730f0;
    DAT_1018614f8 = 0;
    DAT_1018614fc = 0x104;
    DAT_101861500 = PTR_DAT_1018730f0;
    DAT_101861508 = 0;
    DAT_10186150c = 0x108;
    DAT_101861510 = PTR_DAT_1018730f0;
    DAT_101861518 = 0;
    DAT_10186151c = 0x10c;
    DAT_101861520 = PTR_DAT_1018730f0;
    DAT_101861528 = 0;
    DAT_10186152c = 0x110;
    DAT_101861530 = PTR_DAT_1018730f0;
    DAT_101861538 = 0;
    DAT_10186153c = 0x114;
    DAT_101861540 = PTR_DAT_1018730f0;
    DAT_101861548 = 0;
    DAT_10186154c = 0x118;
    DAT_101861550 = PTR_DAT_1018730f0;
    DAT_101861558 = 0;
    DAT_10186155c = 0x11c;
    DAT_101861560 = PTR_DAT_1018730f0;
    DAT_101861568 = 0;
    DAT_10186156c = 0x120;
    DAT_101861570 = PTR_DAT_1018730f0;
    DAT_101861578 = 0;
    DAT_10186157c = 0x124;
    DAT_101861580 = PTR_DAT_1018730f0;
    DAT_101861588 = 0;
    DAT_10186158c = 0x128;
    DAT_101861590 = PTR_DAT_1018730f0;
    DAT_101861598 = 0;
    DAT_10186159c = 300;
    DAT_1018615a0 = PTR_DAT_1018730f0;
    DAT_1018615a8 = 0;
    DAT_1018615ac = 0x130;
    DAT_1018615b0 = PTR_DAT_1018730f0;
    DAT_1018615b8 = 0;
    DAT_1018615bc = 0x134;
    DAT_1018615c0 = PTR_DAT_1018730f0;
    DAT_1018615c8 = 0;
    DAT_1018615cc = 0x138;
    DAT_1018615d0 = PTR_DAT_1018730f0;
    DAT_1018615d8 = 0;
    DAT_1018615dc = 0x13c;
    DAT_1018615e0 = PTR_DAT_1018730f0;
    DAT_1018615e8 = 0;
    DAT_1018615ec = 0x140;
    DAT_1018615f0 = PTR_DAT_1018730f0;
    DAT_1018615f8 = 0;
    DAT_1018615fc = 0x144;
    DAT_101861600 = PTR_DAT_1018730f0;
    DAT_101861608 = 0;
    DAT_10186160c = 0x148;
    DAT_101861610 = PTR_DAT_1018730f0;
    DAT_101861618 = 0;
    DAT_101861a28 = 0;
    DAT_101861a2c = 0x250;
    DAT_101861a30 = PTR_DAT_1018730f0;
    DAT_101861a38 = 0;
    DAT_1018619f8 = 0;
    DAT_101861a10 = PTR_DAT_1018730f0;
    DAT_101861a18 = 0;
    DAT_101861a1c = 0x24c;
    DAT_101861a20 = PTR_DAT_1018730f0;
    DAT_1018619fc = 0x244;
    DAT_101861a00 = PTR_DAT_1018730f0;
    DAT_101861a08 = 0;
    DAT_101861a0c = 0x248;
    DAT_1018619c8 = 0;
    DAT_1018619e0 = PTR_DAT_1018730f0;
    DAT_1018619e8 = 0;
    DAT_1018619ec = 0x240;
    DAT_1018619f0 = PTR_DAT_1018730f0;
    DAT_1018619cc = 0x238;
    DAT_1018619d0 = PTR_DAT_1018730f0;
    DAT_1018619d8 = 0;
    DAT_1018619dc = 0x23c;
    DAT_101861998 = 0;
    DAT_1018619b0 = PTR_DAT_1018730f0;
    DAT_1018619b8 = 0;
    DAT_1018619bc = 0x234;
    DAT_1018619c0 = PTR_DAT_1018730f0;
    DAT_10186199c = 0x22c;
    DAT_1018619a0 = PTR_DAT_1018730f0;
    DAT_1018619a8 = 0;
    DAT_1018619ac = 0x230;
    DAT_101861968 = 0;
    DAT_101861980 = PTR_DAT_1018730f0;
    DAT_101861988 = 0;
    DAT_10186198c = 0x228;
    DAT_101861990 = PTR_DAT_1018730f0;
    DAT_10186196c = 0x220;
    DAT_101861970 = PTR_DAT_1018730f0;
    DAT_101861978 = 0;
    DAT_10186197c = 0x224;
    DAT_101861938 = 0;
    DAT_101861950 = PTR_DAT_1018730f0;
    DAT_101861958 = 0;
    DAT_10186195c = 0x21c;
    DAT_101861960 = PTR_DAT_1018730f0;
    DAT_10186193c = 0x214;
    DAT_101861940 = PTR_DAT_1018730f0;
    DAT_101861948 = 0;
    DAT_10186194c = 0x218;
    DAT_101861908 = 0;
    DAT_101861920 = PTR_DAT_1018730f0;
    DAT_101861928 = 0;
    DAT_10186192c = 0x210;
    DAT_101861930 = PTR_DAT_1018730f0;
    DAT_10186190c = 0x208;
    DAT_101861910 = PTR_DAT_1018730f0;
    DAT_101861918 = 0;
    DAT_10186191c = 0x20c;
    DAT_1018618d8 = 0;
    DAT_1018618f0 = PTR_DAT_1018730f0;
    DAT_1018618f8 = 0;
    DAT_1018618fc = 0x204;
    DAT_101861900 = PTR_DAT_1018730f0;
    DAT_1018618dc = 0x1fc;
    DAT_1018618e0 = PTR_DAT_1018730f0;
    DAT_1018618e8 = 0;
    DAT_1018618ec = 0x200;
    DAT_1018618a8 = 0;
    DAT_1018618c0 = PTR_DAT_1018730f0;
    DAT_1018618c8 = 0;
    DAT_1018618cc = 0x1f8;
    DAT_1018618d0 = PTR_DAT_1018730f0;
    DAT_1018618ac = 0x1f0;
    DAT_1018618b0 = PTR_DAT_1018730f0;
    DAT_1018618b8 = 0;
    DAT_1018618bc = 500;
    DAT_101861878 = 0;
    DAT_101861890 = PTR_DAT_1018730f0;
    DAT_101861898 = 0;
    DAT_10186189c = 0x1ec;
    DAT_1018618a0 = PTR_DAT_1018730f0;
    DAT_10186187c = 0x1e4;
    DAT_101861880 = PTR_DAT_1018730f0;
    DAT_101861888 = 0;
    DAT_10186188c = 0x1e8;
    DAT_101861848 = 0;
    DAT_101861860 = PTR_DAT_1018730f0;
    DAT_101861868 = 0;
    DAT_10186186c = 0x1e0;
    DAT_101861870 = PTR_DAT_1018730f0;
    DAT_10186184c = 0x1d8;
    DAT_101861850 = PTR_DAT_1018730f0;
    DAT_101861858 = 0;
    DAT_10186185c = 0x1dc;
    DAT_101861818 = 0;
    DAT_101861830 = PTR_DAT_1018730f0;
    DAT_101861838 = 0;
    DAT_10186183c = 0x1d4;
    DAT_101861840 = PTR_DAT_1018730f0;
    DAT_10186181c = 0x1cc;
    DAT_101861820 = PTR_DAT_1018730f0;
    DAT_101861828 = 0;
    DAT_10186182c = 0x1d0;
    DAT_1018617e8 = 0;
    DAT_101861800 = PTR_DAT_1018730f0;
    DAT_101861808 = 0;
    DAT_10186180c = 0x1c8;
    DAT_101861810 = PTR_DAT_1018730f0;
    DAT_1018617ec = 0x1c0;
    DAT_1018617f0 = PTR_DAT_1018730f0;
    DAT_1018617f8 = 0;
    DAT_1018617fc = 0x1c4;
    DAT_1018617b8 = 0;
    DAT_1018617d0 = PTR_DAT_1018730f0;
    DAT_1018617d8 = 0;
    DAT_1018617dc = 0x1bc;
    DAT_1018617e0 = PTR_DAT_1018730f0;
    DAT_1018617bc = 0x1b4;
    DAT_1018617c0 = PTR_DAT_1018730f0;
    DAT_1018617c8 = 0;
    DAT_1018617cc = 0x1b8;
    DAT_101861788 = 0;
    DAT_1018617a0 = PTR_DAT_1018730f0;
    DAT_1018617a8 = 0;
    DAT_1018617ac = 0x1b0;
    DAT_1018617b0 = PTR_DAT_1018730f0;
    DAT_10186178c = 0x1a8;
    DAT_101861790 = PTR_DAT_1018730f0;
    DAT_101861798 = 0;
    DAT_10186179c = 0x1ac;
    DAT_101861758 = 0;
    DAT_101861770 = PTR_DAT_1018730f0;
    DAT_101861778 = 0;
    DAT_10186177c = 0x1a4;
    DAT_101861780 = PTR_DAT_1018730f0;
    DAT_10186175c = 0x19c;
    DAT_101861760 = PTR_DAT_1018730f0;
    DAT_101861768 = 0;
    DAT_10186176c = 0x1a0;
    DAT_101861728 = 0;
    DAT_101861740 = PTR_DAT_1018730f0;
    DAT_101861748 = 0;
    DAT_10186174c = 0x198;
    DAT_101861750 = PTR_DAT_1018730f0;
    DAT_10186172c = 400;
    DAT_101861730 = PTR_DAT_1018730f0;
    DAT_101861738 = 0;
    DAT_10186173c = 0x194;
    DAT_1018616f8 = 0;
    DAT_101861710 = PTR_DAT_1018730f0;
    DAT_101861718 = 0;
    DAT_10186171c = 0x18c;
    DAT_101861720 = PTR_DAT_1018730f0;
    DAT_1018616fc = 0x184;
    DAT_101861700 = PTR_DAT_1018730f0;
    DAT_101861708 = 0;
    DAT_10186170c = 0x188;
    DAT_1018616c8 = 0;
    DAT_1018616e0 = PTR_DAT_1018730f0;
    DAT_1018616e8 = 0;
    DAT_1018616ec = 0x180;
    DAT_1018616f0 = PTR_DAT_1018730f0;
    DAT_1018616cc = 0x178;
    DAT_1018616d0 = PTR_DAT_1018730f0;
    DAT_1018616d8 = 0;
    DAT_1018616dc = 0x17c;
    DAT_101861698 = 0;
    DAT_1018616b0 = PTR_DAT_1018730f0;
    DAT_1018616b8 = 0;
    DAT_1018616bc = 0x174;
    DAT_1018616c0 = PTR_DAT_1018730f0;
    DAT_10186169c = 0x16c;
    DAT_1018616a0 = PTR_DAT_1018730f0;
    DAT_1018616a8 = 0;
    DAT_1018616ac = 0x170;
    DAT_101861668 = 0;
    DAT_101861680 = PTR_DAT_1018730f0;
    DAT_101861688 = 0;
    DAT_10186168c = 0x168;
    DAT_101861690 = PTR_DAT_1018730f0;
    DAT_10186166c = 0x160;
    DAT_101861670 = PTR_DAT_1018730f0;
    DAT_101861678 = 0;
    DAT_10186167c = 0x164;
    DAT_101861638 = 0;
    DAT_101861650 = PTR_DAT_1018730f0;
    DAT_101861658 = 0;
    DAT_10186165c = 0x15c;
    DAT_101861660 = PTR_DAT_1018730f0;
    DAT_10186163c = 0x154;
    DAT_101861640 = PTR_DAT_1018730f0;
    DAT_101861648 = 0;
    DAT_10186164c = 0x158;
    DAT_10186162c = 0x150;
    DAT_101861620 = PTR_DAT_1018730f0;
    DAT_101861628 = 0;
    DAT_101861630 = PTR_DAT_1018730f0;
    DAT_10186161c = 0x14c;
    DAT_101861a3c = 0x254;
    DAT_101861a40 = PTR_DAT_1018730f0;
    DAT_101861a48 = 0;
    DAT_101861a4c = 600;
    DAT_101861a50 = PTR_DAT_1018730f0;
    DAT_101861a58 = 0;
    DAT_101861a5c = 0x25c;
    DAT_101861a60 = PTR_DAT_1018730f0;
    DAT_101861a68 = 0;
    DAT_101861a6c = 0x260;
    DAT_101861a70 = PTR_DAT_1018730f0;
    DAT_101861a78 = 0;
    DAT_101861a7c = 0x264;
    DAT_101861a80 = PTR_DAT_1018730f0;
    DAT_101861a88 = 0;
    DAT_101861a8c = 0x268;
    DAT_101861a90 = PTR_DAT_1018730f0;
    DAT_101861a98 = 0;
    DAT_101861a9c = 0x26c;
    DAT_101861aa0 = PTR_DAT_1018730f0;
    DAT_101861aa8 = 0;
    DAT_101861aac = 0x270;
    DAT_101861ab0 = PTR_DAT_1018730f0;
    DAT_101861ab8 = 0;
    DAT_101861abc = 0x274;
    DAT_101861ac0 = PTR_DAT_1018730f0;
    DAT_101861ac8 = 0;
    DAT_101861acc = 0x278;
    DAT_101861ad0 = PTR_DAT_1018730f0;
    DAT_101861ad8 = 0;
    DAT_101861adc = 0x27c;
    DAT_101861ae0 = PTR_DAT_1018730f0;
    DAT_101861ae8 = 0;
    DAT_101861aec = 0x280;
    DAT_101861af0 = PTR_DAT_1018730f0;
    DAT_101861af8 = 0;
    DAT_101861afc = 0x284;
    DAT_101861b00 = PTR_DAT_1018730f0;
    DAT_101861b08 = 0;
    DAT_101861b0c = 0x288;
    DAT_101861b10 = PTR_DAT_1018730f0;
    DAT_101861b18 = 0;
    DAT_101861b1c = 0x28c;
    DAT_101861b20 = PTR_DAT_1018730f0;
    DAT_101861b28 = 0;
    DAT_101861b2c = 0x290;
    DAT_101861b30 = PTR_DAT_1018730f0;
    DAT_101861b38 = 0;
    DAT_101861b3c = 0x294;
    DAT_101861b40 = PTR_DAT_1018730f0;
    DAT_101861b48 = 0;
    DAT_101861b4c = 0x298;
    DAT_101861b50 = PTR_DAT_1018730f0;
    DAT_101861b58 = 0;
    DAT_101861b5c = 0x29c;
    DAT_101861b60 = PTR_DAT_1018730f0;
    DAT_101861b68 = 0;
    DAT_101861b6c = 0x2a0;
    DAT_101861b70 = PTR_DAT_1018730f0;
    DAT_101861b78 = 0;
    DAT_101861b7c = 0x2a4;
    DAT_101861b80 = PTR_DAT_1018730f0;
    DAT_101861b88 = 0;
    DAT_101861b8c = 0x2a8;
    DAT_101861b90 = PTR_DAT_1018730f0;
    DAT_101861b98 = 0;
    DAT_101861b9c = 0x2ac;
    DAT_101861ba0 = PTR_DAT_1018730f0;
    DAT_101861ba8 = 0;
    DAT_101861bac = 0x2b0;
    DAT_101861bb0 = PTR_DAT_1018730f0;
    DAT_101861bb8 = 0;
    DAT_101861bbc = 0x2b4;
    DAT_101861bc0 = PTR_DAT_1018730f0;
    DAT_101861bc8 = 0;
    DAT_101861bcc = 0x2b8;
    DAT_101861bd0 = PTR_DAT_1018730f0;
    DAT_101861bd8 = 0;
    DAT_101861bdc = 700;
    DAT_101861be0 = PTR_DAT_1018730f0;
    DAT_101861be8 = 0;
    DAT_101861bec = 0x2c0;
    DAT_101861bf0 = PTR_DAT_1018730f0;
    DAT_101861bf8 = 0;
    DAT_101861bfc = 0x2c4;
    DAT_101861c00 = PTR_DAT_1018730f0;
    DAT_101861c08 = 0;
    DAT_101861c0c = 0x2c8;
    DAT_101861c10 = PTR_DAT_1018730f0;
    DAT_101861c18 = 0;
    DAT_101861c1c = 0x2cc;
    DAT_101861c20 = PTR_DAT_1018730f0;
    DAT_101861c28 = 0;
    DAT_101861c2c = 0x2d0;
    DAT_101861c30 = PTR_DAT_1018730f0;
    DAT_101861c38 = 0;
    DAT_101861c3c = 0x2d4;
    DAT_101861c40 = PTR_DAT_1018730f0;
    DAT_101861c48 = 0;
    DAT_101861c4c = 0x2d8;
    DAT_101861c50 = PTR_DAT_1018730f0;
    DAT_101861c58 = 0;
    DAT_101861c5c = 0x2dc;
    DAT_101861c60 = PTR_DAT_1018730f0;
    DAT_101861c68 = 0;
    DAT_101861c6c = 0x2e0;
    DAT_101861c70 = PTR_DAT_1018730f0;
    DAT_101861c78 = 0;
    DAT_101861c7c = 0x2e4;
    DAT_101861c80 = PTR_DAT_1018730f0;
    DAT_101861c88 = 0;
    DAT_101861c8c = 0x2e8;
    DAT_101861c90 = PTR_DAT_1018730f0;
    DAT_101861c98 = 0;
    DAT_101861c9c = 0x2ec;
    DAT_101861ca0 = PTR_DAT_1018730f0;
    DAT_101861ca8 = 0;
    DAT_101861cac = 0x2f0;
    DAT_101861cb0 = PTR_DAT_1018730f0;
    DAT_101861cb8 = 0;
    DAT_101861cbc = 0x2f4;
    DAT_101861cc0 = PTR_DAT_1018730f0;
    DAT_101861cc8 = 0;
    DAT_101861ccc = 0x2f8;
    DAT_101861cd0 = PTR_DAT_1018730f0;
    DAT_101861cd8 = 0;
    DAT_101861cdc = 0x2fc;
    DAT_101861ce0 = PTR_DAT_1018730f0;
    DAT_101861ce8 = 0;
    DAT_101861cec = 0x300;
    DAT_101861cf0 = PTR_DAT_1018730f0;
    DAT_101861cf8 = 0;
    DAT_101861cfc = 0x304;
    DAT_101861d00 = PTR_DAT_1018730f0;
    DAT_101861d08 = 0;
    DAT_101861d0c = 0x308;
    DAT_101861d10 = PTR_DAT_1018730f0;
    DAT_101861d18 = 0;
    DAT_101861d1c = 0x30c;
    DAT_101861d20 = PTR_DAT_1018730f0;
    DAT_101861d28 = 0;
    DAT_101861d2c = 0x310;
    DAT_101861d30 = PTR_DAT_1018730f0;
    DAT_101861d38 = 0;
    DAT_101861d3c = 0x314;
    DAT_101861d40 = PTR_DAT_1018730f0;
    DAT_101861d48 = 0;
    DAT_101861d4c = 0x318;
    DAT_101861d50 = PTR_DAT_1018730f0;
    DAT_101861d58 = 0;
    DAT_101861d5c = 0x31c;
    DAT_101861d60 = PTR_DAT_1018730f0;
    DAT_101861d68 = 0;
    DAT_101861d6c = 800;
    DAT_101861d70 = PTR_DAT_1018730f0;
    DAT_101861d78 = 0;
    DAT_101861d7c = 0x324;
    DAT_101861d80 = PTR_DAT_1018730f0;
    DAT_101861d88 = 0;
    DAT_101861d8c = 0x328;
    DAT_101861d90 = PTR_DAT_1018730f0;
    DAT_101861d98 = 0;
    DAT_101861d9c = 0x32c;
    DAT_101861da0 = PTR_DAT_1018730f0;
    DAT_101861da8 = 0;
    DAT_101861dac = 0x330;
    DAT_101861db0 = PTR_DAT_1018730f0;
    DAT_101861db8 = 0;
    DAT_101861dbc = 0x334;
    DAT_101861dc0 = PTR_DAT_1018730f0;
    DAT_101861dc8 = 0;
    DAT_101861dcc = 0x338;
    DAT_101861dd0 = PTR_DAT_1018730f0;
    DAT_101861dd8 = 0;
    DAT_101861ddc = 0x33c;
    DAT_101861de0 = PTR_DAT_1018730f0;
    DAT_101861de8 = 0;
    DAT_101861dec = 0x340;
    DAT_101861df0 = PTR_DAT_1018730f0;
    DAT_101861df8 = 0;
    DAT_101861dfc = 0x344;
    DAT_101861e00 = PTR_DAT_1018730f0;
    DAT_101861e08 = 0;
    DAT_101861e0c = 0x348;
    DAT_101861e10 = PTR_DAT_1018730f0;
    DAT_101861e18 = 0;
    DAT_101861e1c = 0x34c;
    DAT_101861e20 = PTR_DAT_1018730f0;
    DAT_101861e28 = 0;
    DAT_101861e2c = 0x350;
    DAT_101861e30 = PTR_DAT_1018730f0;
    DAT_101861e38 = 0;
    DAT_101861e3c = 0x354;
    DAT_101861e40 = PTR_DAT_1018730f0;
    DAT_101861e48 = 0;
    DAT_101861e4c = 0x358;
    DAT_101861e50 = PTR_DAT_1018730f0;
    DAT_101861e58 = 0;
    DAT_101861e5c = 0x35c;
    DAT_101861e60 = PTR_DAT_1018730f0;
    DAT_101861e68 = 0;
    DAT_101861e6c = 0x360;
    DAT_101861e70 = PTR_DAT_1018730f0;
    DAT_101861e78 = 0;
    DAT_101861e7c = 0x364;
    DAT_101861e80 = PTR_DAT_1018730f0;
    DAT_101861e88 = 0;
    DAT_101861e8c = 0x368;
    DAT_101861e90 = PTR_DAT_1018730f0;
    DAT_101861e98 = 0;
    DAT_101861e9c = 0x36c;
    DAT_101861ea0 = PTR_DAT_1018730f0;
    DAT_101861ea8 = 0;
    DAT_101861eac = 0x370;
    DAT_101861eb0 = PTR_DAT_1018730f0;
    DAT_101861eb8 = 0;
    DAT_101861ebc = 0x374;
    DAT_101861ec0 = PTR_DAT_1018730f0;
    DAT_101861ec8 = 0;
    DAT_101861ecc = 0x378;
    DAT_101861ed0 = PTR_DAT_1018730f0;
    DAT_101861ed8 = 0;
    DAT_101861edc = 0x37c;
    DAT_101861ee0 = PTR_DAT_1018730f0;
    DAT_101861ee8 = 0;
    DAT_101861eec = 0x380;
    DAT_101861ef0 = PTR_DAT_1018730f0;
    DAT_101861ef8 = 0;
    DAT_101861efc = 900;
    DAT_101861f00 = PTR_DAT_1018730f0;
    DAT_101861f08 = 0;
    DAT_101861f0c = 0x388;
    DAT_101861f10 = PTR_DAT_1018730f0;
    DAT_101861f18 = 0;
    DAT_101861f1c = 0x38c;
    DAT_101861f20 = PTR_DAT_1018730f0;
    DAT_101861f28 = 0;
    DAT_101861f2c = 0x390;
    DAT_101861f30 = PTR_DAT_1018730f0;
    DAT_101861f38 = 0;
    DAT_101861f3c = 0x394;
    DAT_101861f40 = PTR_DAT_1018730f0;
    DAT_101861f48 = 0;
    DAT_101861f4c = 0x398;
    DAT_101861f50 = PTR_DAT_1018730f0;
    DAT_101861f58 = 0;
    DAT_101861f5c = 0x39c;
    DAT_101861f60 = PTR_DAT_1018730f0;
    DAT_101861f68 = 0;
    DAT_101861f6c = 0x3a0;
    DAT_101861f70 = PTR_DAT_1018730f0;
    DAT_101861f78 = 0;
    DAT_101861f7c = 0x3a4;
    DAT_101861f80 = PTR_DAT_1018730f0;
    DAT_101861f88 = 0;
    DAT_101861f8c = 0x3a8;
    DAT_101861f90 = PTR_DAT_1018730f0;
    DAT_1018624c8 = 0;
    DAT_1018629dc = 0x63c;
    DAT_1018629e0 = PTR_DAT_1018730f0;
    DAT_1018629cc = 0x638;
    DAT_1018629c8 = 0;
    DAT_1018629d0 = PTR_DAT_1018730f0;
    DAT_1018629d8 = 0;
    DAT_1018629ac = 0x630;
    DAT_1018629b0 = PTR_DAT_1018730f0;
    DAT_1018629b8 = 0;
    DAT_1018629bc = 0x634;
    DAT_1018629c0 = PTR_DAT_1018730f0;
    DAT_10186299c = 0x62c;
    DAT_101862998 = 0;
    DAT_1018629a0 = PTR_DAT_1018730f0;
    DAT_1018629a8 = 0;
    DAT_10186297c = 0x624;
    DAT_101862980 = PTR_DAT_1018730f0;
    DAT_101862988 = 0;
    DAT_10186298c = 0x628;
    DAT_101862990 = PTR_DAT_1018730f0;
    DAT_10186296c = 0x620;
    DAT_101862968 = 0;
    DAT_101862970 = PTR_DAT_1018730f0;
    DAT_101862978 = 0;
    DAT_10186294c = 0x618;
    DAT_101862950 = PTR_DAT_1018730f0;
    DAT_101862958 = 0;
    DAT_10186295c = 0x61c;
    DAT_101862960 = PTR_DAT_1018730f0;
    DAT_10186293c = 0x614;
    DAT_101862938 = 0;
    DAT_101862940 = PTR_DAT_1018730f0;
    DAT_101862948 = 0;
    DAT_10186291c = 0x60c;
    DAT_101862920 = PTR_DAT_1018730f0;
    DAT_101862928 = 0;
    DAT_10186292c = 0x610;
    DAT_101862930 = PTR_DAT_1018730f0;
    DAT_10186290c = 0x608;
    DAT_101862908 = 0;
    DAT_101862910 = PTR_DAT_1018730f0;
    DAT_101862918 = 0;
    DAT_1018628ec = 0x600;
    DAT_1018628f0 = PTR_DAT_1018730f0;
    DAT_1018628f8 = 0;
    DAT_1018628fc = 0x604;
    DAT_101862900 = PTR_DAT_1018730f0;
    DAT_1018628dc = 0x5fc;
    DAT_1018628d8 = 0;
    DAT_1018628e0 = PTR_DAT_1018730f0;
    DAT_1018628e8 = 0;
    DAT_1018628bc = 0x5f4;
    DAT_1018628c0 = PTR_DAT_1018730f0;
    DAT_1018628c8 = 0;
    DAT_1018628cc = 0x5f8;
    DAT_1018628d0 = PTR_DAT_1018730f0;
    DAT_1018628ac = 0x5f0;
    DAT_1018628a8 = 0;
    DAT_1018628b0 = PTR_DAT_1018730f0;
    DAT_1018628b8 = 0;
    DAT_10186288c = 0x5e8;
    DAT_101862890 = PTR_DAT_1018730f0;
    DAT_101862898 = 0;
    DAT_10186289c = 0x5ec;
    DAT_1018628a0 = PTR_DAT_1018730f0;
    DAT_10186287c = 0x5e4;
    DAT_101862878 = 0;
    DAT_101862880 = PTR_DAT_1018730f0;
    DAT_101862888 = 0;
    DAT_10186285c = 0x5dc;
    DAT_101862860 = PTR_DAT_1018730f0;
    DAT_101862868 = 0;
    DAT_10186286c = 0x5e0;
    DAT_101862870 = PTR_DAT_1018730f0;
    DAT_10186284c = 0x5d8;
    DAT_101862848 = 0;
    DAT_101862850 = PTR_DAT_1018730f0;
    DAT_101862858 = 0;
    DAT_10186282c = 0x5d0;
    DAT_101862830 = PTR_DAT_1018730f0;
    DAT_101862838 = 0;
    DAT_10186283c = 0x5d4;
    DAT_101862840 = PTR_DAT_1018730f0;
    DAT_10186281c = 0x5cc;
    DAT_101862818 = 0;
    DAT_101862820 = PTR_DAT_1018730f0;
    DAT_101862828 = 0;
    DAT_1018627fc = 0x5c4;
    DAT_101862800 = PTR_DAT_1018730f0;
    DAT_101862808 = 0;
    DAT_10186280c = 0x5c8;
    DAT_101862810 = PTR_DAT_1018730f0;
    DAT_1018627ec = 0x5c0;
    DAT_1018627e8 = 0;
    DAT_1018627f0 = PTR_DAT_1018730f0;
    DAT_1018627f8 = 0;
    DAT_1018627cc = 0x5b8;
    DAT_1018627d0 = PTR_DAT_1018730f0;
    DAT_1018627d8 = 0;
    DAT_1018627dc = 0x5bc;
    DAT_1018627e0 = PTR_DAT_1018730f0;
    DAT_1018627bc = 0x5b4;
    DAT_1018627b8 = 0;
    DAT_1018627c0 = PTR_DAT_1018730f0;
    DAT_1018627c8 = 0;
    DAT_10186279c = 0x5ac;
    DAT_1018627a0 = PTR_DAT_1018730f0;
    DAT_1018627a8 = 0;
    DAT_1018627ac = 0x5b0;
    DAT_1018627b0 = PTR_DAT_1018730f0;
    DAT_10186278c = 0x5a8;
    DAT_101862788 = 0;
    DAT_101862790 = PTR_DAT_1018730f0;
    DAT_101862798 = 0;
    DAT_10186276c = 0x5a0;
    DAT_101862770 = PTR_DAT_1018730f0;
    DAT_101862778 = 0;
    DAT_10186277c = 0x5a4;
    DAT_101862780 = PTR_DAT_1018730f0;
    DAT_10186275c = 0x59c;
    DAT_101862758 = 0;
    DAT_101862760 = PTR_DAT_1018730f0;
    DAT_101862768 = 0;
    DAT_10186273c = 0x594;
    DAT_101862740 = PTR_DAT_1018730f0;
    DAT_101862748 = 0;
    DAT_10186274c = 0x598;
    DAT_101862750 = PTR_DAT_1018730f0;
    DAT_10186272c = 0x590;
    DAT_101862728 = 0;
    DAT_101862730 = PTR_DAT_1018730f0;
    DAT_101862738 = 0;
    DAT_10186270c = 0x588;
    DAT_101862710 = PTR_DAT_1018730f0;
    DAT_101862718 = 0;
    DAT_10186271c = 0x58c;
    DAT_101862720 = PTR_DAT_1018730f0;
    DAT_1018626fc = 0x584;
    DAT_1018626f8 = 0;
    DAT_101862700 = PTR_DAT_1018730f0;
    DAT_101862708 = 0;
    DAT_1018626dc = 0x57c;
    DAT_1018626e0 = PTR_DAT_1018730f0;
    DAT_1018626e8 = 0;
    DAT_1018626ec = 0x580;
    DAT_1018626f0 = PTR_DAT_1018730f0;
    DAT_1018626cc = 0x578;
    DAT_1018626c8 = 0;
    DAT_1018626d0 = PTR_DAT_1018730f0;
    DAT_1018626d8 = 0;
    DAT_1018626ac = 0x570;
    DAT_1018626b0 = PTR_DAT_1018730f0;
    DAT_1018626b8 = 0;
    DAT_1018626bc = 0x574;
    DAT_1018626c0 = PTR_DAT_1018730f0;
    DAT_10186269c = 0x56c;
    DAT_101862698 = 0;
    DAT_1018626a0 = PTR_DAT_1018730f0;
    DAT_1018626a8 = 0;
    DAT_10186267c = 0x564;
    DAT_101862680 = PTR_DAT_1018730f0;
    DAT_101862688 = 0;
    DAT_10186268c = 0x568;
    DAT_101862690 = PTR_DAT_1018730f0;
    DAT_10186266c = 0x560;
    DAT_101862668 = 0;
    DAT_101862670 = PTR_DAT_1018730f0;
    DAT_101862678 = 0;
    DAT_10186264c = 0x558;
    DAT_101862650 = PTR_DAT_1018730f0;
    DAT_101862658 = 0;
    DAT_10186265c = 0x55c;
    DAT_101862660 = PTR_DAT_1018730f0;
    DAT_10186263c = 0x554;
    DAT_101862638 = 0;
    DAT_101862640 = PTR_DAT_1018730f0;
    DAT_101862648 = 0;
    DAT_10186261c = 0x54c;
    DAT_101862620 = PTR_DAT_1018730f0;
    DAT_101862628 = 0;
    DAT_10186262c = 0x550;
    DAT_101862630 = PTR_DAT_1018730f0;
    DAT_10186260c = 0x548;
    DAT_101862608 = 0;
    DAT_101862610 = PTR_DAT_1018730f0;
    DAT_101862618 = 0;
    DAT_1018625ec = 0x540;
    DAT_1018625f0 = PTR_DAT_1018730f0;
    DAT_1018625f8 = 0;
    DAT_1018625fc = 0x544;
    DAT_101862600 = PTR_DAT_1018730f0;
    DAT_1018625dc = 0x53c;
    DAT_1018625d8 = 0;
    DAT_1018625e0 = PTR_DAT_1018730f0;
    DAT_1018625e8 = 0;
    DAT_1018625ac = 0x530;
    DAT_1018625c0 = PTR_DAT_1018730f0;
    DAT_1018625c8 = 0;
    DAT_1018625cc = 0x538;
    DAT_1018625d0 = PTR_DAT_1018730f0;
    DAT_10186259c = 0x52c;
    DAT_101862598 = 0;
    DAT_1018625a0 = PTR_DAT_1018730f0;
    DAT_1018625a8 = 0;
    DAT_10186257c = 0x524;
    DAT_101862580 = PTR_DAT_1018730f0;
    DAT_101862588 = 0;
    DAT_10186258c = 0x528;
    DAT_101862590 = PTR_DAT_1018730f0;
    DAT_10186256c = 0x520;
    DAT_101862568 = 0;
    DAT_101862570 = PTR_DAT_1018730f0;
    DAT_101862578 = 0;
    DAT_10186254c = 0x518;
    DAT_101862550 = PTR_DAT_1018730f0;
    DAT_101862558 = 0;
    DAT_10186255c = 0x51c;
    DAT_101862560 = PTR_DAT_1018730f0;
    DAT_10186253c = 0x514;
    DAT_101862538 = 0;
    DAT_101862540 = PTR_DAT_1018730f0;
    DAT_101862548 = 0;
    DAT_10186251c = 0x50c;
    DAT_101862520 = PTR_DAT_1018730f0;
    DAT_101862528 = 0;
    DAT_10186252c = 0x510;
    DAT_101862530 = PTR_DAT_1018730f0;
    DAT_10186250c = 0x508;
    DAT_101862508 = 0;
    DAT_101862510 = PTR_DAT_1018730f0;
    DAT_101862518 = 0;
    DAT_1018624ec = 0x500;
    DAT_1018624f0 = PTR_DAT_1018730f0;
    DAT_1018624f8 = 0;
    DAT_1018624fc = 0x504;
    DAT_101862500 = PTR_DAT_1018730f0;
    DAT_1018624b8 = 0;
    DAT_1018624d8 = 0;
    DAT_1018624dc = 0x4fc;
    DAT_1018624e0 = PTR_DAT_1018730f0;
    DAT_1018624e8 = 0;
    DAT_1018624bc = 0x4f4;
    DAT_1018624c0 = PTR_DAT_1018730f0;
    DAT_1018624cc = 0x4f8;
    DAT_1018624d0 = PTR_DAT_1018730f0;
    DAT_101862488 = 0;
    DAT_1018624a0 = PTR_DAT_1018730f0;
    DAT_1018624a8 = 0;
    DAT_1018624ac = 0x4f0;
    DAT_1018624b0 = PTR_DAT_1018730f0;
    DAT_10186248c = 0x4e8;
    DAT_101862490 = PTR_DAT_1018730f0;
    DAT_101862498 = 0;
    DAT_10186249c = 0x4ec;
    DAT_101862458 = 0;
    DAT_101862470 = PTR_DAT_1018730f0;
    DAT_101862478 = 0;
    DAT_10186247c = 0x4e4;
    DAT_101862480 = PTR_DAT_1018730f0;
    DAT_10186245c = 0x4dc;
    DAT_101862460 = PTR_DAT_1018730f0;
    DAT_101862468 = 0;
    DAT_10186246c = 0x4e0;
    DAT_101862428 = 0;
    DAT_101862440 = PTR_DAT_1018730f0;
    DAT_101862448 = 0;
    DAT_10186244c = 0x4d8;
    DAT_101862450 = PTR_DAT_1018730f0;
    DAT_10186242c = 0x4d0;
    DAT_101862430 = PTR_DAT_1018730f0;
    DAT_101862438 = 0;
    DAT_10186243c = 0x4d4;
    DAT_1018623f8 = 0;
    DAT_101862410 = PTR_DAT_1018730f0;
    DAT_101862418 = 0;
    DAT_10186241c = 0x4cc;
    DAT_101862420 = PTR_DAT_1018730f0;
    DAT_1018623fc = 0x4c4;
    DAT_101862400 = PTR_DAT_1018730f0;
    DAT_101862408 = 0;
    DAT_10186240c = 0x4c8;
    DAT_1018623c8 = 0;
    DAT_1018623e0 = PTR_DAT_1018730f0;
    DAT_1018623e8 = 0;
    DAT_1018623ec = 0x4c0;
    DAT_1018623f0 = PTR_DAT_1018730f0;
    DAT_1018623cc = 0x4b8;
    DAT_1018623d0 = PTR_DAT_1018730f0;
    DAT_1018623d8 = 0;
    DAT_1018623dc = 0x4bc;
    DAT_101862398 = 0;
    DAT_1018623b0 = PTR_DAT_1018730f0;
    DAT_1018623b8 = 0;
    DAT_1018623bc = 0x4b4;
    DAT_1018623c0 = PTR_DAT_1018730f0;
    DAT_10186239c = 0x4ac;
    DAT_1018623a0 = PTR_DAT_1018730f0;
    DAT_1018623a8 = 0;
    DAT_1018623ac = 0x4b0;
    DAT_101862368 = 0;
    DAT_101862380 = PTR_DAT_1018730f0;
    DAT_101862388 = 0;
    DAT_10186238c = 0x4a8;
    DAT_101862390 = PTR_DAT_1018730f0;
    DAT_10186236c = 0x4a0;
    DAT_101862370 = PTR_DAT_1018730f0;
    DAT_101862378 = 0;
    DAT_10186237c = 0x4a4;
    DAT_101862338 = 0;
    DAT_101862350 = PTR_DAT_1018730f0;
    DAT_101862358 = 0;
    DAT_10186235c = 0x49c;
    DAT_101862360 = PTR_DAT_1018730f0;
    DAT_10186233c = 0x494;
    DAT_101862340 = PTR_DAT_1018730f0;
    DAT_101862348 = 0;
    DAT_10186234c = 0x498;
    DAT_101862308 = 0;
    DAT_101862320 = PTR_DAT_1018730f0;
    DAT_101862328 = 0;
    DAT_10186232c = 0x490;
    DAT_101862330 = PTR_DAT_1018730f0;
    DAT_10186230c = 0x488;
    DAT_101862310 = PTR_DAT_1018730f0;
    DAT_101862318 = 0;
    DAT_10186231c = 0x48c;
    DAT_1018622d8 = 0;
    DAT_1018622f0 = PTR_DAT_1018730f0;
    DAT_1018622f8 = 0;
    DAT_1018622fc = 0x484;
    DAT_101862300 = PTR_DAT_1018730f0;
    DAT_1018622dc = 0x47c;
    DAT_1018622e0 = PTR_DAT_1018730f0;
    DAT_1018622e8 = 0;
    DAT_1018622ec = 0x480;
    DAT_1018622a8 = 0;
    DAT_1018622c0 = PTR_DAT_1018730f0;
    DAT_1018622c8 = 0;
    DAT_1018622cc = 0x478;
    DAT_1018622d0 = PTR_DAT_1018730f0;
    DAT_1018622ac = 0x470;
    DAT_1018622b0 = PTR_DAT_1018730f0;
    DAT_1018622b8 = 0;
    DAT_1018622bc = 0x474;
    DAT_101862278 = 0;
    DAT_101862290 = PTR_DAT_1018730f0;
    DAT_101862298 = 0;
    DAT_10186229c = 0x46c;
    DAT_1018622a0 = PTR_DAT_1018730f0;
    DAT_10186227c = 0x464;
    DAT_101862280 = PTR_DAT_1018730f0;
    DAT_101862288 = 0;
    DAT_10186228c = 0x468;
    DAT_101862248 = 0;
    DAT_101862260 = PTR_DAT_1018730f0;
    DAT_101862268 = 0;
    DAT_10186226c = 0x460;
    DAT_101862270 = PTR_DAT_1018730f0;
    DAT_10186224c = 0x458;
    DAT_101862250 = PTR_DAT_1018730f0;
    DAT_101862258 = 0;
    DAT_10186225c = 0x45c;
    DAT_101862218 = 0;
    DAT_101862230 = PTR_DAT_1018730f0;
    DAT_101862238 = 0;
    DAT_10186223c = 0x454;
    DAT_101862240 = PTR_DAT_1018730f0;
    DAT_10186221c = 0x44c;
    DAT_101862220 = PTR_DAT_1018730f0;
    DAT_101862228 = 0;
    DAT_10186222c = 0x450;
    DAT_1018621e8 = 0;
    DAT_101862200 = PTR_DAT_1018730f0;
    DAT_101862208 = 0;
    DAT_10186220c = 0x448;
    DAT_101862210 = PTR_DAT_1018730f0;
    DAT_1018621ec = 0x440;
    DAT_1018621f0 = PTR_DAT_1018730f0;
    DAT_1018621f8 = 0;
    DAT_1018621fc = 0x444;
    DAT_1018621b8 = 0;
    DAT_1018621d0 = PTR_DAT_1018730f0;
    DAT_1018621d8 = 0;
    DAT_1018621dc = 0x43c;
    DAT_1018621e0 = PTR_DAT_1018730f0;
    DAT_1018621bc = 0x434;
    DAT_1018621c0 = PTR_DAT_1018730f0;
    DAT_1018621c8 = 0;
    DAT_1018621cc = 0x438;
    DAT_101862188 = 0;
    DAT_1018621a0 = PTR_DAT_1018730f0;
    DAT_1018621a8 = 0;
    DAT_1018621ac = 0x430;
    DAT_1018621b0 = PTR_DAT_1018730f0;
    DAT_10186218c = 0x428;
    DAT_101862190 = PTR_DAT_1018730f0;
    DAT_101862198 = 0;
    DAT_10186219c = 0x42c;
    DAT_101862158 = 0;
    DAT_101862170 = PTR_DAT_1018730f0;
    DAT_101862178 = 0;
    DAT_10186217c = 0x424;
    DAT_101862180 = PTR_DAT_1018730f0;
    DAT_10186215c = 0x41c;
    DAT_101862160 = PTR_DAT_1018730f0;
    DAT_101862168 = 0;
    DAT_10186216c = 0x420;
    DAT_101862128 = 0;
    DAT_101862140 = PTR_DAT_1018730f0;
    DAT_101862148 = 0;
    DAT_10186214c = 0x418;
    DAT_101862150 = PTR_DAT_1018730f0;
    DAT_10186212c = 0x410;
    DAT_101862130 = PTR_DAT_1018730f0;
    DAT_101862138 = 0;
    DAT_10186213c = 0x414;
    DAT_1018620f8 = 0;
    DAT_101862110 = PTR_DAT_1018730f0;
    DAT_101862118 = 0;
    DAT_10186211c = 0x40c;
    DAT_101862120 = PTR_DAT_1018730f0;
    DAT_1018620fc = 0x404;
    DAT_101862100 = PTR_DAT_1018730f0;
    DAT_101862108 = 0;
    DAT_10186210c = 0x408;
    DAT_1018620c8 = 0;
    DAT_1018620e0 = PTR_DAT_1018730f0;
    DAT_1018620e8 = 0;
    DAT_1018620ec = 0x400;
    DAT_1018620f0 = PTR_DAT_1018730f0;
    DAT_1018620cc = 0x3f8;
    DAT_1018620d0 = PTR_DAT_1018730f0;
    DAT_1018620d8 = 0;
    DAT_1018620dc = 0x3fc;
    DAT_101862098 = 0;
    DAT_1018620b0 = PTR_DAT_1018730f0;
    DAT_1018620b8 = 0;
    DAT_1018620bc = 0x3f4;
    DAT_1018620c0 = PTR_DAT_1018730f0;
    DAT_10186209c = 0x3ec;
    DAT_1018620a0 = PTR_DAT_1018730f0;
    DAT_1018620a8 = 0;
    DAT_1018620ac = 0x3f0;
    DAT_101862068 = 0;
    DAT_101862080 = PTR_DAT_1018730f0;
    DAT_101862088 = 0;
    DAT_10186208c = 1000;
    DAT_101862090 = PTR_DAT_1018730f0;
    DAT_10186206c = 0x3e0;
    DAT_101862070 = PTR_DAT_1018730f0;
    DAT_101862078 = 0;
    DAT_10186207c = 0x3e4;
    DAT_101862038 = 0;
    DAT_101862050 = PTR_DAT_1018730f0;
    DAT_101862058 = 0;
    DAT_10186205c = 0x3dc;
    DAT_101862060 = PTR_DAT_1018730f0;
    DAT_10186203c = 0x3d4;
    DAT_101862040 = PTR_DAT_1018730f0;
    DAT_101862048 = 0;
    DAT_10186204c = 0x3d8;
    DAT_101862008 = 0;
    DAT_101862020 = PTR_DAT_1018730f0;
    DAT_101862028 = 0;
    DAT_10186202c = 0x3d0;
    DAT_101862030 = PTR_DAT_1018730f0;
    DAT_10186200c = 0x3c8;
    DAT_101862010 = PTR_DAT_1018730f0;
    DAT_101862018 = 0;
    DAT_10186201c = 0x3cc;
    DAT_101861fd8 = 0;
    DAT_101861ff0 = PTR_DAT_1018730f0;
    DAT_101861ff8 = 0;
    DAT_101861ffc = 0x3c4;
    DAT_101862000 = PTR_DAT_1018730f0;
    DAT_101861fdc = 0x3bc;
    DAT_101861fe0 = PTR_DAT_1018730f0;
    DAT_101861fe8 = 0;
    DAT_101861fec = 0x3c0;
    DAT_101861fa8 = 0;
    DAT_101861fc0 = PTR_DAT_1018730f0;
    DAT_101861fc8 = 0;
    DAT_101861fcc = 0x3b8;
    DAT_101861fd0 = PTR_DAT_1018730f0;
    DAT_101861fac = 0x3b0;
    DAT_101861fb0 = PTR_DAT_1018730f0;
    DAT_101861fb8 = 0;
    DAT_101861fbc = 0x3b4;
    DAT_101861f98 = 0;
    DAT_101861f9c = 0x3ac;
    DAT_101861fa0 = PTR_DAT_1018730f0;
    DAT_1018629e8 = 0;
    DAT_1018629ec = 0x640;
    DAT_1018629f0 = PTR_DAT_1018730f0;
    DAT_1018629f8 = 0;
    DAT_1018629fc = 0x644;
    DAT_101862a00 = PTR_DAT_1018730f0;
    DAT_101862a08 = 0;
    DAT_101862a0c = 0x648;
    DAT_101862a10 = PTR_DAT_1018730f0;
    DAT_101862a18 = 0;
    DAT_101862a1c = 0x64c;
    DAT_101862a20 = PTR_DAT_1018730f0;
    DAT_101862a28 = 0;
    DAT_101862a2c = 0x650;
    DAT_101862a30 = PTR_DAT_1018730f0;
    DAT_101862a38 = 0;
    DAT_101862a3c = 0x654;
    DAT_101862a40 = PTR_DAT_1018730f0;
    DAT_101862a48 = 0;
    DAT_101862a4c = 0x658;
    DAT_101862a50 = PTR_DAT_1018730f0;
    DAT_101862a58 = 0;
    DAT_101862a5c = 0x65c;
    DAT_101862a60 = PTR_DAT_1018730f0;
    DAT_101862a68 = 0;
    DAT_101862a6c = 0x660;
    DAT_101862a70 = PTR_DAT_1018730f0;
    DAT_101862a78 = 0;
    DAT_101862a7c = 0x664;
    DAT_101862a80 = PTR_DAT_1018730f0;
    DAT_101862a88 = 0;
    DAT_101862a8c = 0x668;
    DAT_101862a90 = PTR_DAT_1018730f0;
    DAT_101862a98 = 0;
    DAT_101862a9c = 0x66c;
    DAT_101862aa0 = PTR_DAT_1018730f0;
    DAT_101862aa8 = 0;
    DAT_101862aac = 0x670;
    DAT_101862ab0 = PTR_DAT_1018730f0;
    DAT_101862ab8 = 0;
    DAT_101862abc = 0x674;
    DAT_101862ac0 = PTR_DAT_1018730f0;
    DAT_101862ac8 = 0;
    DAT_101862acc = 0x678;
    DAT_101862ad0 = PTR_DAT_1018730f0;
    DAT_101862ad8 = 0;
    DAT_101862adc = 0x67c;
    DAT_101862ae0 = PTR_DAT_1018730f0;
    DAT_101862ae8 = 0;
    DAT_101862aec = 0x680;
    DAT_101862af0 = PTR_DAT_1018730f0;
    DAT_101862af8 = 0;
    DAT_101862afc = 0x684;
    DAT_101862b00 = PTR_DAT_1018730f0;
    DAT_101862b08 = 0;
    DAT_101862b0c = 0x688;
    DAT_101862b10 = PTR_DAT_1018730f0;
    DAT_101862b18 = 0;
    DAT_101862b1c = 0x68c;
    DAT_101862b20 = PTR_DAT_1018730f0;
    DAT_101862b28 = 0;
    DAT_101862b2c = 0x690;
    DAT_101862b30 = PTR_DAT_1018730f0;
    DAT_101862b38 = 0;
    DAT_101862b3c = 0x694;
    DAT_101862b40 = PTR_DAT_1018730f0;
    DAT_101862b48 = 0;
    DAT_101862b4c = 0x698;
    DAT_101862b50 = PTR_DAT_1018730f0;
    DAT_101862b58 = 0;
    DAT_101862b5c = 0x69c;
    DAT_101862b60 = PTR_DAT_1018730f0;
    DAT_101862b68 = 0;
    DAT_101862b6c = 0x6a0;
    DAT_101862b70 = PTR_DAT_1018730f0;
    DAT_101862b78 = 0;
    DAT_101862b7c = 0x6a4;
    DAT_101862b80 = PTR_DAT_1018730f0;
    DAT_101862b88 = 0;
    DAT_101862b8c = 0x6a8;
    DAT_101862b90 = PTR_DAT_1018730f0;
    DAT_101862b98 = 0;
    DAT_101862b9c = 0x6ac;
    DAT_101862ba0 = PTR_DAT_1018730f0;
    DAT_101862ba8 = 0;
    DAT_101862bac = 0x6b0;
    DAT_101862bb0 = PTR_DAT_1018730f0;
    DAT_101862bb8 = 0;
    DAT_101862bbc = 0x6b4;
    DAT_101862bc0 = PTR_DAT_1018730f0;
    DAT_101862bc8 = 0;
    DAT_101862bcc = 0x6b8;
    DAT_101862bd0 = PTR_DAT_1018730f0;
    DAT_101862bd8 = 0;
    DAT_101862bdc = 0x6bc;
    DAT_101862be0 = PTR_DAT_1018730f0;
    DAT_101862be8 = 0;
    DAT_101862bec = 0x6c0;
    DAT_101862bf0 = PTR_DAT_1018730f0;
    DAT_101862bf8 = 0;
    DAT_101862bfc = 0x6c4;
    DAT_101862c00 = PTR_DAT_1018730f0;
    DAT_101862c08 = 0;
    DAT_101862c0c = 0x6c8;
    DAT_101862c10 = PTR_DAT_1018730f0;
    DAT_101862c18 = 0;
    DAT_101862c1c = 0x6cc;
    DAT_101862c20 = PTR_DAT_1018730f0;
    DAT_101862c28 = 0;
    DAT_101862c2c = 0x6d0;
    DAT_101862c30 = PTR_DAT_1018730f0;
    DAT_101862c38 = 0;
    DAT_101862c3c = 0x6d4;
    DAT_101862c40 = PTR_DAT_1018730f0;
    DAT_101862c48 = 0;
    DAT_101862c4c = 0x6d8;
    DAT_101862c50 = PTR_DAT_1018730f0;
    DAT_101862c58 = 0;
    DAT_101862c5c = 0x6dc;
    DAT_101862c60 = PTR_DAT_1018730f0;
    DAT_101862c68 = 0;
    DAT_101862c6c = 0x6e0;
    DAT_101862c70 = PTR_DAT_1018730f0;
    DAT_101862c78 = 0;
    DAT_101862c7c = 0x6e4;
    DAT_101862c80 = PTR_DAT_1018730f0;
    DAT_101862c88 = 0;
    DAT_101862c8c = 0x6e8;
    DAT_101862c90 = PTR_DAT_1018730f0;
    DAT_101862c98 = 0;
    DAT_101862c9c = 0x6ec;
    DAT_101862ca0 = PTR_DAT_1018730f0;
    DAT_101862ca8 = 0;
    DAT_101862cac = 0x6f0;
    DAT_101862cb0 = PTR_DAT_1018730f0;
    DAT_101862cb8 = 0;
    DAT_101862cbc = 0x6f4;
    DAT_101862cc0 = PTR_DAT_1018730f0;
    DAT_101862cc8 = 0;
    DAT_101862ccc = 0x6f8;
    DAT_101862cd0 = PTR_DAT_1018730f0;
    DAT_101862cd8 = 0;
    DAT_101862cdc = 0x6fc;
    DAT_101862ce0 = PTR_DAT_1018730f0;
    DAT_101862ce8 = 0;
    DAT_101862cec = 0x700;
    DAT_101862cf0 = PTR_DAT_1018730f0;
    DAT_101862cf8 = 0;
    DAT_101862cfc = 0x704;
    DAT_101862d00 = PTR_DAT_1018730f0;
    DAT_101862d08 = 0;
    DAT_101862d0c = 0x708;
    DAT_101862d10 = PTR_DAT_1018730f0;
    DAT_101862d18 = 0;
    DAT_101862d1c = 0x70c;
    DAT_101862d20 = PTR_DAT_1018730f0;
    DAT_101862d28 = 0;
    DAT_101862d2c = 0x710;
    DAT_101862d30 = PTR_DAT_1018730f0;
    DAT_101862d38 = 0;
    DAT_101862d3c = 0x714;
    DAT_101862d40 = PTR_DAT_1018730f0;
    DAT_101862d48 = 0;
    DAT_101862d4c = 0x718;
    DAT_101862d50 = PTR_DAT_1018730f0;
    DAT_101862d58 = 0;
    DAT_101862d5c = 0x71c;
    DAT_101862d60 = PTR_DAT_1018730f0;
    DAT_101862d68 = 0;
    DAT_101862d6c = 0x720;
    DAT_101862d70 = PTR_DAT_1018730f0;
    DAT_101862d78 = 0;
    DAT_101862d7c = 0x724;
    DAT_101862d80 = PTR_DAT_1018730f0;
    DAT_101862d88 = 0;
    DAT_101862d8c = 0x728;
    DAT_101862d90 = PTR_DAT_1018730f0;
    DAT_101862d98 = 0;
    DAT_101862d9c = 0x72c;
    DAT_101862da0 = PTR_DAT_1018730f0;
    DAT_101862da8 = 0;
    DAT_101862dac = 0x730;
    DAT_101862db0 = PTR_DAT_1018730f0;
    DAT_101862db8 = 0;
    DAT_101862dbc = 0x734;
    DAT_101862dc0 = PTR_DAT_1018730f0;
    DAT_101862dc8 = 0;
    DAT_101862dcc = 0x738;
    DAT_101862dd0 = PTR_DAT_1018730f0;
    DAT_101862dd8 = 0;
    DAT_101862ddc = 0x73c;
    DAT_101862de0 = PTR_DAT_1018730f0;
    DAT_101862de8 = 0;
    DAT_101862dec = 0x740;
    DAT_101862df0 = PTR_DAT_1018730f0;
    DAT_101862df8 = 0;
    DAT_101862dfc = 0x744;
    DAT_101862e00 = PTR_DAT_1018730f0;
    DAT_101862e08 = 0;
    DAT_101862e0c = 0x748;
    DAT_101862e10 = PTR_DAT_1018730f0;
    DAT_101862e18 = 0;
    DAT_101862e1c = 0x74c;
    DAT_101862e20 = PTR_DAT_1018730f0;
    DAT_101862e28 = 0;
    DAT_101862e2c = 0x750;
    DAT_101862e30 = PTR_DAT_1018730f0;
    DAT_101862e38 = 0;
    DAT_101862e3c = 0x754;
    DAT_101862e40 = PTR_DAT_1018730f0;
    DAT_101862e48 = 0;
    DAT_101862e4c = 0x758;
    DAT_101862e50 = PTR_DAT_1018730f0;
    DAT_101862e58 = 0;
    DAT_101862e5c = 0x75c;
    DAT_101862e60 = PTR_DAT_1018730f0;
    DAT_101862e68 = 0;
    DAT_101862e6c = 0x760;
    DAT_101862e70 = PTR_DAT_1018730f0;
    DAT_101862e78 = 0;
    DAT_101862e7c = 0x764;
    DAT_101862e80 = PTR_DAT_1018730f0;
    DAT_101862e88 = 0;
    DAT_101862e8c = 0x768;
    DAT_101862e90 = PTR_DAT_1018730f0;
    DAT_101862e98 = 0;
    DAT_101862e9c = 0x76c;
    DAT_101862ea0 = PTR_DAT_1018730f0;
    DAT_101862ea8 = 0;
    DAT_101862eac = 0x770;
    DAT_101862eb0 = PTR_DAT_1018730f0;
    DAT_101862eb8 = 0;
    DAT_101862ebc = 0x774;
    DAT_101862ec0 = PTR_DAT_1018730f0;
    DAT_101862ec8 = 0;
    DAT_101862ecc = 0x778;
    DAT_101862ed0 = PTR_DAT_1018730f0;
    DAT_101862ed8 = 0;
    DAT_101862edc = 0x77c;
    DAT_101862ee0 = PTR_DAT_1018730f0;
    DAT_101862ee8 = 0;
    DAT_101862eec = 0x780;
    DAT_101862ef0 = PTR_DAT_1018730f0;
    DAT_101862ef8 = 0;
    DAT_101862efc = 0x784;
    DAT_101862f00 = PTR_DAT_1018730f0;
    DAT_101862f08 = 0;
    DAT_101862f0c = 0x788;
    DAT_101862f10 = PTR_DAT_1018730f0;
    DAT_1018625b0 = PTR_DAT_1018730f0;
    DAT_1018625b8 = 0;
    DAT_1018625bc = 0x534;
    DAT_101862f30 = DAT_101862f30 + 0x1e4;
    DAT_101862f18 = 0;
    DAT_101862f1c = 0x78c;
    DAT_101862f20 = PTR_DAT_1018730f0;
    DAT_101862f28 = 1;
  }
  return;
}

