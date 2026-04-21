// functions/00a35 — 16 functions
#include "libGameKindred.h"




void FUN_00a351dc(void *param_1)

{
  FUN_00a34fb8();
  operator_delete(param_1);
  return;
}




void FUN_00a35200(uint *param_1,uint param_2)

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




void FUN_00a35280(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ushort uVar9;
  long lVar10;
  char cVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined8 uVar14;
  ulong uVar15;
  char *pcVar16;
  long *plVar17;
  long *plVar18;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  FUN_00f0ac5c();
  *param_1 = (long)&PTR_FUN_027c95e0;
  param_1[0x38] = (long)param_1;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(ushort *)(param_1 + 0x29) = *(ushort *)(param_1 + 0x29) & 0x8000 | 0x3ff;
  FUN_00b89cd8();
  plVar1 = param_1 + 0x52;
  FUN_00f017e8(plVar1);
  param_1[0x52] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  plVar17 = param_1 + 0x9f;
  FUN_00f0e4a8(plVar17);
  plVar18 = param_1 + 0xbd;
  FUN_00f1306c(plVar18);
  plVar2 = param_1 + 0xe8;
  FUN_00c88494();
  plVar3 = param_1 + 0x17e;
  FUN_00c88494();
  plVar4 = param_1 + 0x214;
  FUN_00f1306c(plVar4);
  plVar5 = param_1 + 0x23f;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0x265;
  FUN_00f0d160(plVar6);
  FUN_00e70510(param_1 + 0x28b);
  FUN_00e70510(param_1 + 0x28d);
  plVar7 = param_1 + 0x28f;
  FUN_00f017e8(plVar7);
  param_1[0x28f] = (long)&PTR_FUN_027c1f80;
  plVar8 = param_1 + 0x2a0;
  FUN_00f0d160(plVar8);
  param_1[0x2c6] = -0xffffff01000000;
  *(undefined8 *)((long)param_1 + 0x163f) = 0;
  param_1[0x2c7] = 0;
  *(ushort *)((long)param_1 + 0x1647) = *(ushort *)((long)param_1 + 0x1647) & 0xe000 | 0x1800;
  uVar12 = FUN_00e6a474("HUD_ScoreDisplay");
  uVar13 = FUN_0091ed5c("HUD_ScoreDisplay",uVar12,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar13 & 0xffff) << 0xf;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x39,1);
  FUN_00f023ec(param_1 + 0x39,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 99,1);
  FUN_00f023ec(plVar1,param_1 + 0x81,1);
  FUN_00f023ec(plVar1,plVar17,1);
  FUN_00f023ec(plVar1,plVar18,1);
  FUN_00f133a4(plVar18,plVar2,1);
  FUN_00f133a4(plVar18,plVar3,1);
  FUN_00f133a4(plVar18,plVar4,1);
  FUN_00f133a4(plVar4,plVar5,1);
  FUN_00f133a4(plVar4,plVar6,1);
  FUN_00f133a4(plVar18,plVar7,1);
  FUN_00f023ec(plVar7,plVar8,1);
  uVar13 = *(uint *)((long)param_1 + 0x314);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 4;
  if ((uVar13 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x314) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6600;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e548(param_1 + 99,PTR_s_build___HUDPartsBlitz_tga_02be3460,"blitz_scoreboard_stretch");
  FUN_00f0e548(param_1 + 0x81,PTR_s_build___HUDPartsBlitz_tga_02be3460,"blitz_scoreboard_end");
  FUN_00f0e548(plVar17,PTR_s_build___HUDPartsBlitz_tga_02be3460,"blitz_scoreboard_end");
  *(undefined1 *)((long)param_1 + 0xbec) = 1;
  *(byte *)(param_1 + 0xba) = *(byte *)(param_1 + 0xba) | 1;
  FUN_00c88698(plVar2,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  FUN_00c886c8(plVar2,PTR_s_build___HUDPartsBlitz_tga_02be3460);
  FUN_00c88730(plVar2,&DAT_01bee7fa,&DAT_01b9fbc8);
  FUN_00c887f0(plVar2,&DAT_03131298);
  FUN_00c88820(plVar2,1);
  FUN_00e705c8(&local_78,"0");
  FUN_00c88770(plVar2,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  plVar1 = param_1 + 0x29;
  FUN_00c88698(plVar3,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  FUN_00c886c8(plVar3,PTR_s_build___HUDPartsBlitz_tga_02be3460);
  FUN_00c88730(plVar3,&DAT_01bee7fa,&DAT_01b9fbcc);
  FUN_00c887f0(plVar3,&DAT_03131298);
  FUN_00c88820(plVar3,1);
  FUN_00e705c8(&local_78,"0");
  FUN_00c88770(plVar3,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  FUN_00f0d378(plVar5,PTR_s_build___Fonts_Futura_Medium_64_S_02be9d18);
  FUN_00f0d378(plVar6,PTR_s_build___Fonts_Futura_Medium_40_S_02be9d10);
  FUN_00f0dac8(plVar8,3);
  FUN_00f0d92c(plVar8,PTR_s_build___Fonts_Futura_Medium_40_S_02be9d10,&DAT_01b9fbd4);
  *(uint *)((long)param_1 + 0x1584) = *(uint *)((long)param_1 + 0x1584) & 0xfffffffb;
  uVar14 = FUN_00e6ce7c("HUD_BLITZ_OVERTIME",0);
  FUN_00f0d75c(plVar8,uVar14);
  FUN_00cedce4();
  cVar11 = FUN_00cecb68();
  FUN_00ceace8();
  uVar15 = FUN_00ceb0a4();
  if ((uVar15 & 1) == 0) {
    uVar15 = FUN_00ceab64();
    if ((cVar11 != '\x01') && ((uVar15 & 1) == 0)) {
      FUN_00c886f8(plVar2,"blitz_enemy_score");
      pcVar16 = "blitz_ally_score";
      goto LAB_00a35760;
    }
  }
  FUN_00c886f8(plVar2,"blitz_ally_score");
  pcVar16 = "blitz_enemy_score";
LAB_00a35760:
  FUN_00c886f8(plVar3,pcVar16);
  uVar9 = *(ushort *)(param_1 + 0x29);
  plVar18 = param_1 + (ulong)(uVar9 >> 10 & 0x1f) * 7 + 0x2a;
  plVar17 = param_1 + (ulong)(uVar9 + 0x400 >> 10 & 0x1f) * 7 + 0x2a;
  plVar18[2] = 0;
  plVar18[1] = (long)FUN_00a358a0;
  plVar18[4] = 0;
  plVar18[3] = (long)FUN_00a358ec;
  plVar18[6] = 0;
  plVar18[5] = (long)FUN_00a3591c;
  *(undefined4 *)plVar18 = 0;
  plVar17[2] = 0;
  plVar17[1] = (long)FUN_00a35954;
  *(undefined4 *)plVar17 = 1;
  plVar17[4] = 0;
  plVar17[3] = (long)FUN_00a359a8;
  plVar17[6] = 0;
  plVar17[5] = (long)FUN_00a359ac;
  *(ushort *)(param_1 + 0x29) =
       ((ushort)(uVar9 + 0x400) & 0x7c00 | uVar9 & 0x83ff) + 0x400 & 0x7c00 | uVar9 & 0x83ff;
  FUN_00a359b0(plVar1,0,1);
  FUN_00a359b0(plVar1,1,0);
  FUN_00a35a38(plVar1,0,0,0);
  *(uint *)((long)param_1 + 0x24c) = *(uint *)((long)param_1 + 0x24c) & 0xfffffffb;
  if (*(long *)(lVar10 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a358a0(long param_1)

{
  float fVar1;
  
  FUN_009bbfb0();
  fVar1 = (float)FUN_009bc268();
  if (fVar1 < *(float *)(param_1 + 0x1638)) {
    return;
  }
  FUN_00a35a38(param_1 + 0x148,1,0,0);
  return;
}




void FUN_00a358ec(long param_1)

{
  *(ushort *)(param_1 + 0x1647) = *(ushort *)(param_1 + 0x1647) & 0xefff;
  FUN_00b89d24(0x3e4ccccd,param_1 + 0x1c8,0,2,1);
  return;
}




void FUN_00a3591c(long param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x1647) | 0x1000;
  *(ushort *)(param_1 + 0x1647) = uVar1;
  FUN_00b89d24(0x3e4ccccd,param_1 + 0x1c8,((uVar1 ^ 0xffff) & 0x800) == 0,2,1);
  return;
}




void FUN_00a35954(long param_1)

{
  if (*(char *)(param_1 + 0x1644) == '\0') {
    FUN_00a363fc(param_1);
    if ((*(byte *)(param_1 + 0x1648) >> 2 & 1) == 0) {
      FUN_00a367e8(param_1);
      FUN_00a36b4c(param_1);
      return;
    }
  }
  return;
}




void FUN_00a359a8(void)

{
  return;
}




void FUN_00a359ac(void)

{
  return;
}




void FUN_00a359b0(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar1 = *param_1 >> 10;
  if ((uVar1 & 0x1f) != 0) {
    uVar2 = 0;
    puVar4 = param_1 + 4;
    do {
      if (*puVar4 == param_2) goto LAB_00a359e4;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x1c;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_00a359e4:
    if ((uVar1 & 0x1f) != 0) {
      uVar3 = 0;
      puVar4 = param_1 + 4;
      do {
        if (*puVar4 == param_3) {
          if (uVar2 == 0xffffffff) {
            return;
          }
          param_1[(long)(int)uVar2 * 0x1c + 5] =
               param_1[(long)(int)uVar2 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar3 & 0x1f));
          return;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 0x1c;
      } while (uVar3 < (uVar1 & 0x1f));
    }
  }
  return;
}




void FUN_00a35a38(ushort *param_1,uint param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort *puVar6;
  ulong uVar7;
  
  uVar2 = *param_1;
  if ((uVar2 & 0x7c00) != 0) {
    uVar3 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_00a35a80;
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 < (uVar2 >> 10 & 0x1f));
  }
  uVar3 = 0x1f;
LAB_00a35a80:
  uVar1 = uVar2 & 0x1f;
  uVar4 = (ulong)uVar1;
  if (uVar1 == 0x1f) {
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
  }
  else {
    if (uVar3 == uVar1) {
      return;
    }
    if ((1 << (ulong)(uVar3 & 0x1f) & (uint)param_1[uVar4 * 0x1c + 5]) == 0) {
      return;
    }
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar4 * 0x1c + 0x18);
    uVar5 = *(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) & 1;
    if (uVar5 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar5 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x3c) +
                                ((long)*(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) >> 1)));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar2 = *param_1;
    }
  }
  *param_1 = (ushort)uVar7 | uVar2 & 0xfc00 | 0x3e0;
  if ((int)uVar7 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar7 * 0x1c + 0x10);
    uVar4 = *(ulong *)(param_1 + uVar7 * 0x1c + 0x14) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x3c) +
                                ((long)*(ulong *)(param_1 + uVar7 * 0x1c + 0x14) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00a35aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_00a35b70(long param_1)

{
  if (*(char *)(param_1 + 0x1647) != '\0') {
    FUN_00a35bb8(param_1);
    FUN_00a35d20(param_1);
    FUN_00a35eec(param_1 + 0x148);
    return;
  }
  return;
}




void FUN_00a35bb8(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  int *piVar5;
  long *plVar6;
  undefined4 uVar7;
  ulong local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = 0;
  FUN_019889cc(&local_50,1,DAT_0312edf0,0);
  uVar3 = local_50;
  thunk_FUN_00d9ff34(&local_50,"__GAME_MODE_COUNTDOWN_START__");
  plVar6 = (long *)(uVar3 + 0x28);
  puVar4 = (undefined4 *)(**(code **)(*plVar6 + 0x10))(plVar6,local_50 & 0xffffffff);
  uVar7 = NEON_ucvtf(*puVar4);
  *(undefined4 *)(param_1 + 0x163c) = uVar7;
  thunk_FUN_00d9ff34(&local_50,"__GAME_MODE_COUNTDOWN_DURATION__");
  puVar4 = (undefined4 *)(**(code **)(*plVar6 + 0x10))(plVar6,local_50 & 0xffffffff);
  uVar7 = NEON_ucvtf(*puVar4);
  *(undefined4 *)(param_1 + 0x1640) = uVar7;
  thunk_FUN_00d9ff34(&local_50,"__GAME_MODE_COUNTDOWN_PAUSED__");
  piVar5 = (int *)(**(code **)(*plVar6 + 0x10))(plVar6,local_50 & 0xffffffff);
  iVar1 = *piVar5;
  thunk_FUN_00d9ff34(&local_50,"__GAME_MODE_COUNTDOWN_DO_ROUNDING__");
  piVar5 = (int *)(**(code **)(*plVar6 + 0x10))(plVar6,local_50 & 0xffffffff);
  if (((*piVar5 == 1) && (*(char *)(param_1 + 0x1644) == '\0')) && (iVar1 == 1)) {
    FUN_00a36298(param_1);
  }
  *(char *)(param_1 + 0x1644) = iVar1 == 1;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a35d20(long *param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  long *plVar9;
  long local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_60 = 0;
  FUN_019889cc(&local_60,1,DAT_0312edf0,0);
  lVar5 = local_60;
  uVar6 = FUN_00d704ac(1);
  plVar9 = (long *)(lVar5 + 0x28);
  pbVar8 = (byte *)(**(code **)(*plVar9 + 0x18))(plVar9,uVar6);
  bVar2 = *pbVar8;
  uVar6 = FUN_00d704ac(2);
  pbVar8 = (byte *)(**(code **)(*plVar9 + 0x18))(plVar9,uVar6);
  bVar3 = *pbVar8;
  if (((DAT_03132218 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_03132218), iVar7 != 0)) {
    FUN_00e70510(&DAT_03132208);
    __cxa_atexit(FUN_0090e338,&DAT_03132208,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03132218);
  }
  bVar1 = *(byte *)((long)param_1 + 0x1645) < bVar2;
  if (bVar1) {
    FUN_00e70e18(&DAT_03132208,&DAT_01bb6d43,bVar2);
    FUN_00c88770(param_1 + 0xe8,&DAT_03132208);
    FUN_00c88854(param_1 + 0xe8);
    *(byte *)((long)param_1 + 0x1645) = bVar2;
  }
  if (*(byte *)((long)param_1 + 0x1646) < bVar3) {
    FUN_00e70e18(&DAT_03132208,&DAT_01bb6d43,bVar3);
    FUN_00c88770(param_1 + 0x17e,&DAT_03132208);
    FUN_00c88854(param_1 + 0x17e);
    *(byte *)((long)param_1 + 0x1646) = bVar3;
  }
  else if (!bVar1) goto LAB_00a35e74;
  (**(code **)(*param_1 + 0x138))(param_1);
LAB_00a35e74:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a35eec(ushort *param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x3c) +
                                ((long)*(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00a35f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_00a35f34(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  
  uVar8 = FUN_00f02540();
  if ((uVar8 & 1) != 0) {
    uVar5 = *(uint *)((long)param_3 + 0x84) & 0xfffffffb;
    if (*(char *)((long)param_3 + 0x1647) != '\0') {
      uVar5 = *(uint *)((long)param_3 + 0x84) | 4;
    }
    *(uint *)((long)param_3 + 0x84) = uVar5;
    fVar9 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    plVar1 = param_3 + 99;
    FUN_00f13f08(fVar9 - ((float)param_2 + (float)param_2),plVar1);
    FUN_00f13f08(param_2,param_2,param_3 + 0x81);
    FUN_00f13f08(param_2,param_2,param_3 + 0x9f);
    FUN_00f07b18(0,param_3 + 0x52,4,param_3,4);
    FUN_00f07940(0,0,plVar1,4,param_3 + 0x52,4);
    FUN_00f07940(0,0,param_3 + 0x81,5,plVar1,7);
    FUN_00f07940(0,0,param_3 + 0x9f,7,plVar1,5);
    uVar6 = 0xffbc9c44;
    if (*(char *)((long)param_3 + 0x1647) != '\x01') {
      uVar6 = 0xff90b3ef;
    }
    plVar2 = param_3 + 0xe8;
    uVar7 = 0xffbc9c44;
    if (*(char *)((long)param_3 + 0x1647) != '\x02') {
      uVar7 = 0xff90b3ef;
    }
    *(undefined4 *)(param_3 + 0x2c6) = uVar6;
    *(undefined4 *)((long)param_3 + 0x1634) = uVar7;
    FUN_00c88730(plVar2,param_3 + 0x2c6,param_3 + 0x2c6);
    plVar3 = param_3 + 0x17e;
    FUN_00c88730(plVar3,(long)param_3 + 0x1634,(long)param_3 + 0x1634);
    fVar10 = (float)FUN_00c88690(plVar2);
    FUN_00c88700(104.0 / fVar10,plVar2);
    fVar10 = (float)FUN_00c88690(plVar3);
    FUN_00c88700(104.0 / fVar10,plVar3);
    FUN_00c8861c(plVar2);
    FUN_00c8861c(plVar3);
    plVar4 = param_3 + 0xbd;
    FUN_00f07940(0,0,plVar4,8,plVar1,8);
    FUN_00f07940(fVar9 * -0.25,0,plVar2,8,plVar4,8);
    FUN_00f07940(fVar9 * 0.25,0,plVar3,8,plVar4,8);
    if ((*(byte *)(param_3 + 0x2c9) >> 1 & 1) != 0) {
      FUN_00f07940(0x428c0000,0,param_3 + 0x265,8,param_3 + 0x23f,8);
    }
    plVar2 = param_3 + 0x214;
    FUN_00f13238(plVar2);
    fVar9 = 0.0;
    FUN_00f07940(0,0,plVar2,8,plVar1,8);
    FUN_00f080a0(plVar1,4,plVar1,6);
    FUN_00f0dc4c(fVar9 * 0.9,0,0x3f800000,param_3 + 0x2a0);
    FUN_00f07940(0,0,param_3 + 0x28f,8,plVar2,8);
    FUN_00f07940(0,0,param_3 + 0x2a0,7,param_3 + 0x28f,8);
    return;
  }
  return;
}

