// functions/00cb3 — 6 functions
#include "libGameKindred.h"




void FUN_00cb3124(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined8 local_408;
  undefined5 uStack_400;
  undefined3 local_3fb;
  undefined5 uStack_3f8;
  undefined4 local_3f0;
  undefined8 local_3e8;
  void *local_3e0;
  undefined8 local_3d8;
  void *local_3d0;
  undefined8 local_3c8;
  void *local_3c0;
  undefined4 local_3b4;
  undefined1 auStack_3b0 [32];
  undefined1 auStack_390 [16];
  undefined1 auStack_380 [768];
  long local_80 [4];
  
  lVar1 = tpidr_el0;
  local_80[2] = *(long *)(lVar1 + 0x28);
  lVar6 = 0;
  do {
    FUN_00e70510(auStack_390 + lVar6);
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 800);
  local_3b4 = 0;
  uVar3 = FUN_00e710d0(param_1,0,0x5b,0x5d,1,auStack_390,0,&local_3b4);
  uVar8 = 0;
  if ((uVar3 & 1) != 0) {
    puVar7 = auStack_380;
    uVar3 = 0;
    do {
      uVar8 = uVar3 + 1;
      if (0x31 < uVar8) {
        uVar8 = (ulong)((int)uVar3 + 1);
        break;
      }
      uVar4 = FUN_00e710d0(param_1,local_3b4,0x5b,0x5d,1,puVar7,0,&local_3b4);
      puVar7 = puVar7 + 0x10;
      uVar3 = uVar8;
    } while ((uVar4 & 1) != 0);
  }
  FUN_00e70510(&local_3c8);
  FUN_00e70510(&local_3d8);
  if ((int)uVar8 != 0) {
    puVar7 = auStack_390;
    uVar3 = 1;
    do {
      FUN_00e70978(puVar7,auStack_3b0,0x20);
      lVar6 = FUN_00ce9fd0(auStack_3b0,param_2,0);
      if (lVar6 != 0) {
        FUN_00e705c8(&local_3e8,"[");
        FUN_00910394(&local_3c8,&local_3e8);
        if (local_3e0 != (void *)0x0) {
          operator_delete__(local_3e0);
          local_3e8 = 0;
          local_3e0 = (void *)0x0;
        }
        FUN_00e70c34(&local_3c8,puVar7);
        FUN_00e705c8(&local_3e8,&DAT_01e21cb0);
        FUN_00e70c34(&local_3c8,&local_3e8);
        if (local_3e0 != (void *)0x0) {
          operator_delete__(local_3e0);
          local_3e8 = 0;
          local_3e0 = (void *)0x0;
        }
        local_410 = *(undefined4 *)(lVar6 + 8);
        uStack_40c = *(undefined4 *)(lVar6 + 0x20);
        local_408 = *(undefined8 *)(lVar6 + 0x14);
        uStack_3f8 = 0;
        uStack_400 = 0;
        local_3fb = 0;
        local_3f0 = 0;
        FUN_00cb0740(*(undefined4 *)(lVar6 + 0x2c),&local_410,&local_3d8);
        FUN_00e71248(param_1,0,&local_3c8,&local_3d8);
      }
      if ((uVar8 & 0xffffffff) <= uVar3) break;
      bVar2 = uVar3 < 0x32;
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 0x10;
    } while (bVar2);
  }
  if (local_3d0 != (void *)0x0) {
    operator_delete__(local_3d0);
    local_3d8 = 0;
    local_3d0 = (void *)0x0;
  }
  if (local_3c0 != (void *)0x0) {
    operator_delete__(local_3c0);
    local_3c8 = 0;
    local_3c0 = (void *)0x0;
  }
  lVar6 = 0;
  do {
    pvVar5 = *(void **)((long)local_80 + lVar6 + 8);
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
      *(undefined8 *)((long)local_80 + lVar6) = 0;
      *(undefined8 *)((long)local_80 + lVar6 + 8) = 0;
    }
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != -800);
  if (*(long *)(lVar1 + 0x28) != local_80[2]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cb338c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_4 == 1) {
    FUN_00e70900(param_1,param_3);
  }
  else {
    FUN_00e70510(&local_48);
    FUN_00e70e18(&local_48,&DAT_01bb6d43,param_4);
    FUN_00e70900(param_1,param_2);
    FUN_00e705c8(&local_58,"[AMOUNT]");
    FUN_00e71248(param_1,0,&local_58,&local_48);
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
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cb3464(float param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  
  switch(param_3) {
  case 1:
    puVar3 = &DAT_01bb6d43;
LAB_00cb35d4:
    FUN_00e70e18(param_2,puVar3,(int)param_1);
    return;
  case 2:
    fVar7 = param_1 * 100.0;
    if (param_1 < 0.1) {
LAB_00cb359c:
      dVar5 = (double)(param_1 * 100.0);
      pcVar2 = "%.2g%%";
      goto LAB_00cb36b8;
    }
    if (ABS(fVar7 - (float)(int)fVar7) < 0.01) {
      puVar3 = &DAT_01bc2552;
      param_1 = fVar7;
      goto LAB_00cb35d4;
    }
    break;
  case 3:
    dVar5 = (double)param_1;
    pcVar2 = "%.3g";
    goto LAB_00cb36b8;
  case 4:
    FUN_00e70e18((double)param_1,param_2,&DAT_01bc2526);
    uVar1 = FUN_00e6ce7c("LABEL_UNITS_SECONDS_ACRONYM",0);
    FUN_00e70c34(param_2,uVar1);
    return;
  case 5:
    fVar6 = param_1 + -1.0;
    if ((0.1 <= fVar6) || (fVar6 <= -0.1)) {
      puVar3 = &DAT_01b9f8c3;
      if (fVar6 < 0.0) {
        puVar3 = &DAT_01e277f2;
      }
      fVar7 = fVar6 * 100.0;
      if (ABS(param_1 * 100.0 - (float)(int)(param_1 * 100.0)) < 0.01) {
LAB_00cb3670:
        FUN_00e70e18(param_2,&DAT_01bc2550,puVar3,(int)fVar7);
        return;
      }
      puVar4 = &DAT_01bc2547;
    }
    else {
      puVar3 = &DAT_01b9f8c3;
      if (fVar6 < 0.0) {
        puVar3 = &DAT_01e277f2;
      }
      puVar4 = &DAT_01bc2557;
    }
    FUN_00e70e18((double)(fVar6 * 100.0),param_2,puVar4,puVar3);
    return;
  case 6:
    fVar7 = param_1 * 100.0;
    if ((param_1 < 0.1) && (-1.0 < param_1)) goto LAB_00cb359c;
    if (ABS(fVar7 - (float)(int)fVar7) < 0.01) {
      puVar3 = &DAT_01b9f8c3;
      if (param_1 < 0.0) {
        puVar3 = &DAT_01e277f2;
      }
      goto LAB_00cb3670;
    }
    break;
  default:
    return;
  }
  dVar5 = (double)(param_1 * 100.0);
  pcVar2 = "%.3g%%";
LAB_00cb36b8:
  FUN_00e70e18(dVar5,param_2,pcVar2);
  return;
}




undefined8 * FUN_00cb36c8(uint param_1)

{
  undefined8 *puVar1;
  
  if (param_1 < 0x2d) {
    puVar1 = (undefined8 *)
             FUN_00e6ce7c((&PTR_s_STORE_ITEM_ATTR_HEALTH_MAX_02809480)[(int)param_1],0);
    return puVar1;
  }
  return &DAT_03210450;
}




undefined8 * FUN_00cb3700(long param_1)

{
  undefined8 *puVar1;
  
  if (*(uint *)(param_1 + 0x28) < 0xc9) {
    puVar1 = (undefined8 *)FUN_00cb372c();
    return puVar1;
  }
  return &DAT_03210450;
}




undefined8 * FUN_00cb372c(undefined4 param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = &DAT_03210450;
  pcVar1 = "STAT_LABEL_ACTIVE_DAMAGE_REDUCTION";
  switch(param_1) {
  case 0:
    pcVar1 = "STAT_LABEL_ATTACK_SPEED";
    break;
  case 1:
    pcVar1 = "STAT_LABEL_ATTACK_SPEED_PER_STACK";
    break;
  case 2:
    pcVar1 = "STAT_LABEL_BONUS_ATTACK_SPEED";
    break;
  case 3:
    pcVar1 = "STAT_LABEL_BONUS_MOVESPEED_DURATION";
    break;
  case 4:
    pcVar1 = "STAT_LABEL_BONUS_MOVESPEED_STRENGTH";
    break;
  case 5:
    pcVar1 = "STAT_LABEL_BONUS_SPEED_DURATION";
    break;
  case 6:
    pcVar1 = "STAT_LABEL_BONUS_ALT_ENERGY";
    break;
  case 7:
  case 0xe:
    pcVar1 = "STAT_LABEL_CRYSTAL_POWER";
    break;
  case 8:
    pcVar1 = "STAT_LABEL_BONUS_WEAPON_POWER";
    break;
  case 9:
    pcVar1 = "STAT_LABEL_BONUS_WEAPON_STRENGTH";
    break;
  case 10:
    pcVar1 = "STAT_LABEL_CRYSTAL_AMP";
    break;
  case 0xb:
    pcVar1 = "STAT_LABEL_WEAPON_AMP";
    break;
  case 0xc:
    pcVar1 = "STAT_LABEL_SPEED";
    break;
  case 0xd:
    pcVar1 = "STAT_LABEL_SPEED_BOOST_PER_STACK";
    break;
  case 0xf:
    pcVar1 = "STAT_LABEL_CRYSTAL_POWER_PER_STACK";
    break;
  case 0x10:
    pcVar1 = "STAT_LABEL_WEAPON_POWER";
    break;
  case 0x11:
    pcVar1 = "STAT_LABEL_WEAPON_POWER_PER_STACK";
    break;
  case 0x12:
    pcVar1 = "STAT_LABEL_CRIT_CHANCE";
    break;
  case 0x13:
    pcVar1 = "STAT_LABEL_LIFESTEAL";
    break;
  case 0x14:
    pcVar1 = "STAT_LABEL_BONUS_LIFESTEAL";
    break;
  case 0x15:
    pcVar1 = "STAT_LABEL_LIFESTEAL_PER_STACK";
    break;
  case 0x16:
    pcVar1 = "STAT_LABEL_ARMOR";
    break;
  case 0x17:
    pcVar1 = "STAT_LABEL_ARMOR_PER_STACK";
    break;
  case 0x18:
    pcVar1 = "STAT_LABEL_SHIELD";
    break;
  case 0x19:
    pcVar1 = "STAT_LABEL_SHIELD_PER_STACK";
    break;
  case 0x1a:
    pcVar1 = "STAT_LABEL_PASSIVE_ARMOR";
    break;
  case 0x1b:
    pcVar1 = "STAT_LABEL_PASSIVE_ATTACK_SPEED";
    break;
  case 0x1c:
    pcVar1 = "STAT_LABEL_PASSIVE_PASSIVE_BONUS_ATTACK_RANGE";
    break;
  case 0x1d:
    pcVar1 = "STAT_LABEL_PASSIVE_COOLDOWN_SPEED";
    break;
  case 0x1e:
    pcVar1 = "STAT_LABEL_PASSIVE_CRITICAL_DAMAGE";
    break;
  case 0x1f:
    pcVar1 = "STAT_LABEL_PASSIVE_CRYSTAL_POWER";
    break;
  case 0x20:
    pcVar1 = "STAT_LABEL_PASSIVE_MOVEMENT_SPEED";
    break;
  case 0x21:
    pcVar1 = "STAT_LABEL_PASSIVE_SHIELD";
    break;
  case 0x22:
    pcVar1 = "STAT_LABEL_PASSIVE_WEAPON_POWER";
    break;
  case 0x23:
    pcVar1 = "STAT_LABEL_PERCENT_MAX_HEALTH_PER_SECOND";
    break;
  case 0x24:
    pcVar1 = "STAT_LABEL_PERCENT_HEALTH_COST";
    break;
  case 0x25:
    pcVar1 = "STAT_LABEL_BONUS_CHARGES";
    break;
  case 0x26:
    pcVar1 = "STAT_LABEL_BONUS_DISTANCE";
    break;
  case 0x27:
    pcVar1 = "STAT_LABEL_BONUS_DURATION";
    break;
  case 0x28:
    pcVar1 = "STAT_LABEL_BONUS_PIERCE";
    break;
  case 0x29:
    pcVar1 = "STAT_LABEL_BONUS_RADIUS";
    break;
  case 0x2a:
    pcVar1 = "STAT_LABEL_BONUS_RANGE";
    break;
  case 0x2b:
    pcVar1 = "STAT_LABEL_BONUS_STACKS";
    break;
  case 0x2c:
    pcVar1 = "STAT_LABEL_COOLDOWN";
    break;
  case 0x2d:
    pcVar1 = "STAT_LABEL_COOLDOWN_MODIFIER";
    break;
  case 0x2e:
    pcVar1 = "STAT_LABEL_COOLDOWN_OVERRIDE";
    break;
  case 0x2f:
    pcVar1 = "STAT_LABEL_COOLDOWN_REDUCTION";
    break;
  case 0x30:
    pcVar1 = "STAT_LABEL_CHARGE_TIME";
    break;
  case 0x31:
    pcVar1 = "STAT_LABEL_CHARGES";
    break;
  case 0x32:
    pcVar1 = "STAT_LABEL_DISTANCE";
    break;
  case 0x33:
    pcVar1 = "STAT_LABEL_DISTANCE_MODIFIER";
    break;
  case 0x34:
    pcVar1 = "STAT_LABEL_DURATION";
    break;
  case 0x35:
    pcVar1 = "STAT_LABEL_DURATION_MODIFIER";
    break;
  case 0x36:
    pcVar1 = "STAT_LABEL_ENERGY_COST";
    break;
  case 0x37:
    pcVar1 = "STAT_LABEL_ENERGY_MODIFIER";
    break;
  case 0x38:
    pcVar1 = "STAT_LABEL_RANGE";
    break;
  case 0x39:
    pcVar1 = "STAT_LABEL_RANGE_MODIFIER";
    break;
  case 0x3a:
    pcVar1 = "STAT_LABEL_ANGLE_MODIFIER";
    break;
  case 0x3b:
    pcVar1 = "STAT_LABEL_RADIUS";
    break;
  case 0x3c:
    pcVar1 = "STAT_LABEL_STACKS";
    break;
  case 0x3d:
    pcVar1 = "STAT_LABEL_STACKS_GRANTED";
    break;
  case 0x3e:
    pcVar1 = "STAT_LABEL_FOCUS_COST";
    break;
  case 0x3f:
    pcVar1 = "STAT_LABEL_STAMINA_COST";
    break;
  case 0x40:
    pcVar1 = "STAT_LABEL_BLOODRAGE_GAIN";
    break;
  case 0x41:
    pcVar1 = "STAT_LABEL_BLOODRAGE_COST_PER_SECOND";
    break;
  case 0x42:
    pcVar1 = "STAT_LABEL_TRAP_DURATION";
    break;
  case 0x43:
    pcVar1 = "STAT_LABEL_TRAP_LIMIT";
    break;
  case 0x44:
    pcVar1 = "STAT_LABEL_DURATION_ALLY";
    break;
  case 0x45:
    pcVar1 = "STAT_LABEL_DURATION_SELF";
    break;
  case 0x46:
    pcVar1 = "STAT_LABEL_MAX_STACKS";
    break;
  case 0x47:
    pcVar1 = "STAT_LABEL_SELF_CAST_BONUS";
    break;
  case 0x48:
    pcVar1 = "STAT_LABEL_REVEAL_DURATION";
    break;
  case 0x49:
    pcVar1 = "STAT_LABEL_STEALTH_DURATION";
    break;
  case 0x4a:
    pcVar1 = "STAT_LABEL_TICKS_PER_SECOND";
    break;
  case 0x4b:
    pcVar1 = "STAT_LABEL_SLOW_DURATION";
    break;
  case 0x4c:
    pcVar1 = "STAT_LABEL_SLOW_STRENGTH";
    break;
  case 0x4d:
    pcVar1 = "STAT_LABEL_STUN_DURATION";
    break;
  case 0x4e:
    pcVar1 = "STAT_LABEL_SILENCE_DURATION";
    break;
  case 0x4f:
    pcVar1 = "STAT_LABEL_ROOT_DURATION";
    break;
  case 0x50:
    pcVar1 = "STAT_LABEL_SLEEP_DURATION";
    break;
  case 0x51:
    pcVar1 = "STAT_LABEL_FEAR_DURATION";
    break;
  case 0x52:
    pcVar1 = "STAT_LABEL_SLOW_CENTER";
    break;
  case 0x53:
    pcVar1 = "STAT_LABEL_SLOW_EDGE";
    break;
  case 0x54:
    pcVar1 = "STAT_LABEL_SLOW_DURATION_CENTER";
    break;
  case 0x55:
    pcVar1 = "STAT_LABEL_SLOW_DURATION_EDGE";
    break;
  case 0x56:
    pcVar1 = "STAT_LABEL_BONUS_STUN_DURATION";
    break;
  case 0x57:
    break;
  case 0x58:
    pcVar1 = "STAT_LABEL_PASSIVE_DAMAGE_REDUCTION";
    break;
  case 0x59:
    pcVar1 = "STAT_LABEL_BARRIER";
    break;
  case 0x5a:
    pcVar1 = "STAT_LABEL_BARRIER_DURATION";
    break;
  case 0x5b:
    pcVar1 = "STAT_LABEL_BARRIER_MODIFIER";
    break;
  case 0x5c:
    pcVar1 = "STAT_LABEL_BARRIER_STRENGTH";
    break;
  case 0x5d:
    pcVar1 = "STAT_LABEL_FORTIFIED_HEALTH";
    break;
  case 0x5e:
    pcVar1 = "STAT_LABEL_FORTIFIED_HEALTH_DURATION";
    break;
  case 0x5f:
    pcVar1 = "STAT_LABEL_FORTIFIED_HEALTH_MODIFIER";
    break;
  case 0x60:
    pcVar1 = "STAT_LABEL_FORTIFIED_HEALTH_PER_SECOND";
    break;
  case 0x61:
    pcVar1 = "STAT_LABEL_FORTIFIED_HEALTH_PER_STACK";
    break;
  case 0x62:
    pcVar1 = "STAT_LABEL_HEAL";
    break;
  case 99:
    pcVar1 = "STAT_LABEL_HEAL_DURATION";
    break;
  case 100:
    pcVar1 = "STAT_LABEL_HEAL_MODIFIER";
    break;
  case 0x65:
    pcVar1 = "STAT_LABEL_HEAL_PER_SECOND";
    break;
  case 0x66:
    pcVar1 = "STAT_LABEL_HEAL_PER_STACK";
    break;
  case 0x67:
    pcVar1 = "STAT_LABEL_HEALING_MODIFIER";
    break;
  case 0x68:
    pcVar1 = "STAT_LABEL_HEALING_STRENGTH";
    break;
  case 0x69:
    pcVar1 = "STAT_LABEL_HEAL_PERCENT_MAX_HEALTH";
    break;
  case 0x6a:
    pcVar1 = "STAT_LABEL_HEALTH_REGEN";
    break;
  case 0x6b:
    pcVar1 = "STAT_LABEL_HEAL_PER_HIT_HERO";
    break;
  case 0x6c:
    pcVar1 = "STAT_LABEL_HEAL_PER_SECOND_HIT_NONMINION";
    break;
  case 0x6d:
    pcVar1 = "STAT_LABEL_HEAL_PER_SECOND_HIT_MINION";
    break;
  case 0x6e:
    pcVar1 = "STAT_LABEL_DAMAGE";
    break;
  case 0x6f:
    pcVar1 = "STAT_LABEL_AREA_DAMAGE";
    break;
  case 0x70:
    pcVar1 = "STAT_LABEL_DAMAGE_PER_STACK";
    break;
  case 0x71:
    pcVar1 = "STAT_LABEL_IMPACT_DAMAGE";
    break;
  case 0x72:
    pcVar1 = "STAT_LABEL_FINAL_DAMAGE";
    break;
  case 0x73:
    pcVar1 = "STAT_LABEL_MISSING_HEALTH_PERCENT_DAMAGE";
    break;
  case 0x74:
    pcVar1 = "STAT_LABEL_BURST_DAMAGE";
    break;
  case 0x75:
    pcVar1 = "STAT_LABEL_DAMAGE_CENTER";
    break;
  case 0x76:
    pcVar1 = "STAT_LABEL_DAMAGE_EDGE";
    break;
  case 0x77:
    pcVar1 = "STAT_LABEL_MAX_HEALTH_PERCENT_DAMAGE";
    break;
  case 0x78:
    pcVar1 = "STAT_LABEL_EMPOWERED_DAMAGE";
    break;
  case 0x79:
    pcVar1 = "STAT_LABEL_FIRST_HIT_DAMAGE";
    break;
  case 0x7a:
    pcVar1 = "STAT_LABEL_SECOND_HIT_DAMAGE";
    break;
  case 0x7b:
    pcVar1 = "STAT_LABEL_THIRD_HIT_DAMAGE";
    break;
  case 0x7c:
    pcVar1 = "STAT_LABEL_TOTAL_DAMAGE";
    break;
  case 0x7d:
    pcVar1 = "STAT_LABEL_DAMAGE_DURATION";
    break;
  case 0x7e:
    pcVar1 = "STAT_LABEL_DAMAGE_PER_SECOND";
    break;
  case 0x7f:
  case 0x83:
    pcVar1 = "STAT_LABEL_CRYSTAL_DAMAGE";
    break;
  case 0x80:
    pcVar1 = "STAT_LABEL_WEAPON_DAMAGE";
    break;
  case 0x81:
    pcVar1 = "STAT_LABEL_BASIC_ATTACK_DAMAGE";
    break;
  default:
    goto switchD_00cb3758_caseD_82;
  case 0x84:
    pcVar1 = "STAT_LABEL_BONUS_DAMAGE";
    break;
  case 0x85:
    pcVar1 = "STAT_LABEL_BONUS_DAMAGE_PER_STACK";
    break;
  case 0x86:
    pcVar1 = "STAT_LABEL_DAMAGE_AMP";
    break;
  case 0x87:
    pcVar1 = "STAT_LABEL_DAMAGE_MODIFIER";
    break;
  case 0x88:
    pcVar1 = "STAT_LABEL_DAMAGE_RADIUS";
    break;
  case 0x89:
    pcVar1 = "STAT_LABEL_DAMAGE_REDUCTION_MODIFIER";
    break;
  case 0x8a:
    pcVar1 = "STAT_LABEL_BONUS_REFLECT_DAMAGE";
    break;
  case 0x8b:
    pcVar1 = "STAT_LABEL_CLEAVE_DAMAGE";
    break;
  case 0x8c:
    pcVar1 = "STAT_LABEL_SHIELD_PIERCING";
    break;
  case 0x8d:
    pcVar1 = "STAT_LABEL_ARMOR_PIERCING";
    break;
  case 0x8e:
    pcVar1 = "STAT_LABEL_CAP_NONHEROES";
    break;
  case 0x8f:
    pcVar1 = "STAT_LABEL_DAMAGE_PER_HIT";
    break;
  case 0x90:
    pcVar1 = "STAT_LABEL_PET_DAMAGE";
    break;
  case 0x91:
    pcVar1 = "STAT_LABEL_PET_HEALTH";
    break;
  case 0x92:
    pcVar1 = "STAT_LABEL_PET_DEFENSE";
    break;
  case 0x93:
    pcVar1 = "STAT_LABEL_ADAGIO_B_BURN_BONUS";
    break;
  case 0x94:
    pcVar1 = "STAT_LABEL_ANKA_A_BLINK_DAMAGE";
    break;
  case 0x95:
    pcVar1 = "STAT_LABEL_ANKA_C_INITIAL_DASH_DAMAGE";
    break;
  case 0x96:
    pcVar1 = "STAT_LABEL_ANKA_C_SECONDARY_DASH_DAMAGE";
    break;
  case 0x97:
    pcVar1 = "STAT_LABEL_CELESTE_A_NOVA_DAMAGE";
    break;
  case 0x98:
    pcVar1 = "STAT_LABEL_CELESTE_C_DAMAGE_LEAD";
    break;
  case 0x99:
    pcVar1 = "STAT_LABEL_CELESTE_C_DAMAGE_TAIL";
    break;
  case 0x9a:
    pcVar1 = "STAT_LABEL_CELESTE_C_TAIL_NUMBER";
    break;
  case 0x9b:
    pcVar1 = "STAT_LABEL_KENSEI_A_KENSHO_SLOW_STRENGTH";
    break;
  case 0x9c:
    pcVar1 = "STAT_LABEL_KENSEI_B_KENSHO_STUN_DURATION";
    break;
  case 0x9d:
    pcVar1 = "STAT_LABEL_MAGNUS_SPLIT_DAMAGE";
    break;
  case 0x9e:
    pcVar1 = "STAT_LABEL_MALENE_SHADOWFORM_COOLDOWN";
    break;
  case 0x9f:
    pcVar1 = "STAT_LABEL_MALENE_SHADOWFORM_DAMAGE";
    break;
  case 0xa0:
    pcVar1 = "STAT_LABEL_MALENE_SHADOWFORM_ENERGY_COST";
    break;
  case 0xa1:
    pcVar1 = "STAT_LABEL_MALENE_SHADOWFORM_SLOW_STRENGTH";
    break;
  case 0xa2:
    pcVar1 = "STAT_LABEL_OZO_B_BONUS_DAMAGE_PER_BOUNCE";
    break;
  case 0xa3:
    pcVar1 = "STAT_LABEL_PETAL_A_SEED_HEALTH";
    break;
  case 0xa4:
    pcVar1 = "STAT_LABEL_SILVERNAIL_A_TRIPWIRE_DURATION";
    break;
  case 0xa5:
    pcVar1 = "STAT_LABEL_SILVERNAIL_C_PERK_DAMAGE_BONUS";
    break;
  case 0xa6:
    pcVar1 = "STAT_LABEL_SKAARF_B_BURN_DURATION";
    break;
  case 0xa7:
    pcVar1 = "STAT_LABEL_VARYA_A_CHAIN_LIGHTNING_DAMAGE";
    break;
  case 0xa8:
    pcVar1 = "STAT_LABEL_VARYA_C_LIGHTNING_STRIKE_RADIUS";
    break;
  case 0xa9:
    pcVar1 = "STAT_LABEL_VARYA_C_BONUS_CHAIN_LIGHTNING";
    break;
  case 0xaa:
    pcVar1 = "STAT_LABEL_YLVA_A_FULL_CHARGE_TIME";
    break;
  case 0xab:
    pcVar1 = "STAT_LABEL_CAINE_BULLETS_RELOADED";
    break;
  case 0xac:
    pcVar1 = "STAT_LABEL_CAINE_BULLET_COST";
    break;
  case 0xad:
    pcVar1 = "STAT_LABEL_CAINE_EXPLOSION_DAMAGE";
    break;
  case 0xae:
    pcVar1 = "STAT_LABEL_CAINE_EXECUTE_THRESHOLD";
    break;
  case 0xaf:
    pcVar1 = "STAT_LABEL_MAX_HEALTH_TO_BARRIER";
    break;
  case 0xb0:
    pcVar1 = "STAT_LABEL_TALENT_ADAGIO_BONUS_BURN_DAMAGE";
    break;
  case 0xb1:
    pcVar1 = "STAT_LABEL_TALENT_ADAGIO_HEAL_TO_FORTIFIED_RATIO";
    break;
  case 0xb2:
    pcVar1 = "STAT_LABEL_TALENT_ADAGIO_HEAL_HEALTH_RATIO";
    break;
  case 0xb3:
    pcVar1 = "STAT_LABEL_TALENT_ALPHA_HEALTH_FORT_PER_STACK";
    break;
  case 0xb4:
    pcVar1 = "STAT_LABEL_TALENT_BARON_TRIPLE_SHOT_DAMAGE";
    break;
  case 0xb5:
    pcVar1 = "STAT_LABEL_TALENT_CATHERINE_MERCILESS_PURSUIT_REDUCTION";
    break;
  case 0xb6:
    pcVar1 = "STAT_LABEL_TALENT_CATHERINE_BLAST_TREMOR_REDUCTION";
    break;
  case 0xb7:
    pcVar1 = "STAT_LABEL_TALENT_FLICKER_HEALTH_TO_HEALING_RATIO";
    break;
  case 0xb8:
    pcVar1 = "STAT_LABEL_TALENT_FORTRESS_CRIT_CHANCE_PER_WOLF";
    break;
  case 0xb9:
    pcVar1 = "STAT_LABEL_TALENT_FORTRESS_BLEED_DAMAGE";
    break;
  case 0xba:
    pcVar1 = "STAT_LABEL_TALENT_GRUMPJAW_SWIPE_TO_CHARGE_DAMAGE";
    break;
  case 0xbb:
    pcVar1 = "STAT_LABEL_TALENT_KOSHKA_ABILITY_DAMAGE_MODIFIER";
    break;
  case 0xbc:
    pcVar1 = "STAT_LABEL_TALENT_KOSHKA_POUNCY_FUN_REDUCTION";
    break;
  case 0xbd:
    pcVar1 = "STAT_LABEL_TALENT_KOSHKA_TWIRLY_DEATH_REDUCTION";
    break;
  case 0xbe:
    pcVar1 = "STAT_LABEL_TALENT_KOSHKA_YUMMY_CATNIP_FRENZY_REDUCTION";
    break;
  case 0xbf:
    pcVar1 = "STAT_LABEL_TALENT_LANCE_LONG_ROLL_BASIC_ATTACK_TO_ROLL_DAMAGE";
    break;
  case 0xc0:
    pcVar1 = "STAT_LABEL_TALENT_LANCE_IMPALE_DAMAGE_MODIFIER";
    break;
  case 0xc1:
    pcVar1 = "STAT_LABEL_TALENT_LANCE_IMPALE_REDUCTION";
    break;
  case 0xc2:
    pcVar1 = "STAT_LABEL_TALENT_LANCE_COMBAT_ROLL_REDUCTION";
    break;
  case 0xc3:
    pcVar1 = "STAT_LABEL_TALENT_PHINN_CURRENT_HEALTH_REGEN";
    break;
  case 0xc4:
    pcVar1 = "STAT_LABEL_TALENT_REIM_IMPACT_TO_TRAVEL_DAMAGE";
    break;
  case 0xc5:
    pcVar1 = "STAT_LABEL_TALENT_RINGO_BOUNCE_RANGE";
    break;
  case 0xc6:
    pcVar1 = "STAT_LABEL_TALENT_RONA_INTO_THE_FRAY_REDUCTION";
    break;
  case 199:
    pcVar1 = "STAT_LABEL_TALENT_SKAARF_SPITFIRE_DAMAGE_MODIFIER";
    break;
  case 200:
    pcVar1 = "STAT_LABEL_TALENT_SKAARF_GOOP_DAMAGE_MODIFIER";
  }
  puVar2 = (undefined8 *)FUN_00e6ce7c(pcVar1,0);
switchD_00cb3758_caseD_82:
  return puVar2;
}

