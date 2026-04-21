// functions/00d70 — 35 functions
#include "libGameKindred.h"




void thunk_FUN_00d7050c(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  undefined4 auStack_2a8 [2];
  long alStack_2a0 [70];
  long lStack_70;
  
  lVar2 = tpidr_el0;
  lStack_70 = *(long *)(lVar2 + 0x28);
  if (((*(byte *)(param_1 + 0x218) & 3) == 0) &&
     (fVar9 = (float)FUN_009bc24c(),
     *(float *)(param_1 + 0x210) < fVar9 - *(float *)(param_1 + 0x20c))) {
    *(byte *)(param_1 + 0x218) = *(byte *)(param_1 + 0x218) | 1;
    uVar3 = FUN_019889cc(alStack_2a0,0x46,DAT_02c7eb30,0);
    auStack_2a8[0] = *(undefined4 *)(param_1 + 0x214);
    if (uVar3 != 0) {
      uVar6 = 0;
      do {
        lVar7 = alStack_2a0[uVar6];
        if (lVar7 != 0) {
          uVar8 = 0x10000;
          lVar4 = lVar7;
LAB_00d705e4:
          do {
            do {
              lVar5 = lVar4;
              if ((lVar5 != lVar7) &&
                 (lVar4 = FUN_019865b4(*(undefined8 *)(lVar5 + 8),0x6b5808be), lVar4 != 0)) {
                (**(code **)(lVar4 + 8))(lVar5,auStack_2a8);
              }
              if (((uVar8 & 0xffff) < uVar8 >> 0x10) &&
                 (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0)) {
                uVar8 = uVar8 & 0xffff0000 | uVar8 + 1 & 0xffff;
                goto LAB_00d705e4;
              }
              if ((uVar8 & 0xffff) == 0) goto LAB_00d7064c;
              lVar4 = *(long *)(lVar5 + 0x20);
            } while (*(long *)(lVar5 + 0x20) != 0);
            lVar5 = *(long *)(lVar5 + 0x10);
            if ((lVar5 == 0) || (uVar1 = uVar8 - 1 & 0xffff, uVar1 == 0)) break;
            uVar8 = uVar1 | uVar8 & 0xffff0000;
            while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
              if ((uVar8 - 1 & 0xffff) == 0) goto LAB_00d7064c;
              lVar5 = *(long *)(lVar5 + 0x10);
              uVar8 = uVar8 & 0xffff0000 | uVar8 - 1 & 0xffff;
              if (lVar5 == 0) goto LAB_00d7064c;
            }
          } while( true );
        }
LAB_00d7064c:
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d701b0(undefined8 *param_1)

{
  int *__s;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  char cVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  
  __s = (int *)(param_1 + 6);
  *param_1 = &PTR_FUN_0281e190;
  plVar8 = param_1 + 5;
  *plVar8 = (long)&PTR_FUN_0281e1c0;
  memset(__s,0,0x5c);
  memset(param_1 + 0x12,0,0x171);
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x41] = 0;
  *(byte *)(param_1 + 0x43) = *(byte *)(param_1 + 0x43) & 0xfc;
  *(undefined4 *)((long)param_1 + 0x214) = 0x811c9dc5;
  FUN_00ceace8();
  uVar2 = FUN_00ceb0d0();
  if (uVar2 != 0) {
    uVar9 = 0;
    do {
      uVar9 = uVar9 + 1;
      bVar1 = *(byte *)(param_1 + 0x40);
      piVar5 = __s;
      if ((ulong)bVar1 == 0) {
        cVar6 = '\x01';
      }
      else {
        uVar7 = 0;
        do {
          if (*piVar5 == (&DAT_031a9ce0)[uVar9 & 0xff]) goto LAB_00d702a4;
          uVar7 = uVar7 + 1;
          piVar5 = piVar5 + 1;
        } while (uVar7 < bVar1);
        cVar6 = bVar1 + 1;
      }
      *piVar5 = (&DAT_031a9ce0)[uVar9 & 0xff];
      *(char *)(param_1 + 0x40) = cVar6;
LAB_00d702a4:
      puVar4 = (undefined4 *)(**(code **)(*plVar8 + 0x10))(plVar8);
      *puVar4 = 0;
    } while (uVar9 != uVar2);
  }
  uVar3 = FUN_00e6a474("__GAME_MODE_COUNTDOWN_START__");
  uVar3 = FUN_0091ed5c("__GAME_MODE_COUNTDOWN_START__",uVar3,0x12345678);
  uVar3 = (**(code **)(*plVar8 + 8))(plVar8,uVar3);
  puVar4 = (undefined4 *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar3);
  *puVar4 = 0;
  uVar3 = FUN_00e6a474("__GAME_MODE_COUNTDOWN_DURATION__");
  uVar3 = FUN_0091ed5c("__GAME_MODE_COUNTDOWN_DURATION__",uVar3,0x12345678);
  uVar3 = (**(code **)(*plVar8 + 8))(plVar8,uVar3);
  puVar4 = (undefined4 *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar3);
  *puVar4 = 0;
  uVar3 = FUN_00e6a474("__GAME_MODE_COUNTDOWN_PAUSED__");
  uVar3 = FUN_0091ed5c("__GAME_MODE_COUNTDOWN_PAUSED__",uVar3,0x12345678);
  uVar3 = (**(code **)(*plVar8 + 8))(plVar8,uVar3);
  puVar4 = (undefined4 *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar3);
  *puVar4 = 0;
  uVar3 = FUN_00e6a474("__GAME_MODE_COUNTDOWN_DO_ROUNDING__");
  uVar3 = FUN_0091ed5c("__GAME_MODE_COUNTDOWN_DO_ROUNDING__",uVar3,0x12345678);
  uVar3 = (**(code **)(*plVar8 + 8))(plVar8,uVar3);
  puVar4 = (undefined4 *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar3);
  *puVar4 = 0;
  uVar3 = FUN_00e6a474("__GAME_MODE_BOT_DIFFICULTY__");
  uVar3 = FUN_0091ed5c("__GAME_MODE_BOT_DIFFICULTY__",uVar3,0x12345678);
  uVar3 = (**(code **)(*plVar8 + 8))(plVar8,uVar3);
  puVar4 = (undefined4 *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar3);
  *puVar4 = 0;
  return;
}




int FUN_00d70464(long param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  ulong uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x1d8);
  piVar2 = (int *)(param_1 + 8);
  if ((ulong)bVar1 == 0) {
    cVar3 = '\x01';
  }
  else {
    uVar4 = 0;
    do {
      if (*piVar2 == param_2) {
        return param_2;
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar4 < bVar1);
    cVar3 = bVar1 + 1;
  }
  *piVar2 = param_2;
  *(char *)(param_1 + 0x1d8) = cVar3;
  return param_2;
}




undefined4 FUN_00d704ac(ulong param_1)

{
  return (&DAT_031a9ce0)[param_1 & 0xff];
}




void FUN_00d704c0(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e6a474(param_2);
  uVar1 = FUN_0091ed5c(param_2,uVar1,0x12345678);
                    /* WARNING: Could not recover jumptable at 0x00d70508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,uVar1);
  return;
}




void FUN_00d7050c(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  undefined4 local_2a8 [2];
  long local_2a0 [70];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (((*(byte *)(param_1 + 0x218) & 3) == 0) &&
     (fVar9 = (float)FUN_009bc24c(),
     *(float *)(param_1 + 0x210) < fVar9 - *(float *)(param_1 + 0x20c))) {
    *(byte *)(param_1 + 0x218) = *(byte *)(param_1 + 0x218) | 1;
    uVar3 = FUN_019889cc(local_2a0,0x46,DAT_02c7eb30,0);
    local_2a8[0] = *(undefined4 *)(param_1 + 0x214);
    if (uVar3 != 0) {
      uVar6 = 0;
      do {
        lVar7 = local_2a0[uVar6];
        if (lVar7 != 0) {
          uVar8 = 0x10000;
          lVar4 = lVar7;
LAB_00d705e4:
          do {
            do {
              lVar5 = lVar4;
              if ((lVar5 != lVar7) &&
                 (lVar4 = FUN_019865b4(*(undefined8 *)(lVar5 + 8),0x6b5808be), lVar4 != 0)) {
                (**(code **)(lVar4 + 8))(lVar5,local_2a8);
              }
              if (((uVar8 & 0xffff) < uVar8 >> 0x10) &&
                 (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0)) {
                uVar8 = uVar8 & 0xffff0000 | uVar8 + 1 & 0xffff;
                goto LAB_00d705e4;
              }
              if ((uVar8 & 0xffff) == 0) goto LAB_00d7064c;
              lVar4 = *(long *)(lVar5 + 0x20);
            } while (*(long *)(lVar5 + 0x20) != 0);
            lVar5 = *(long *)(lVar5 + 0x10);
            if ((lVar5 == 0) || (uVar1 = uVar8 - 1 & 0xffff, uVar1 == 0)) break;
            uVar8 = uVar1 | uVar8 & 0xffff0000;
            while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
              if ((uVar8 - 1 & 0xffff) == 0) goto LAB_00d7064c;
              lVar5 = *(long *)(lVar5 + 0x10);
              uVar8 = uVar8 & 0xffff0000 | uVar8 - 1 & 0xffff;
              if (lVar5 == 0) goto LAB_00d7064c;
            }
          } while( true );
        }
LAB_00d7064c:
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d7068c(undefined4 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined4 local_a8 [2];
  undefined4 local_a0 [10];
  undefined4 local_78 [10];
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_3 + 0x210) = param_2;
  *(undefined4 *)(param_3 + 0x20c) = param_1;
  *(byte *)(param_3 + 0x218) = *(byte *)(param_3 + 0x218) & 0xfd;
  thunk_FUN_00d9ff34(local_78,"__GAME_MODE_COUNTDOWN_START__");
  FUN_00d04fa4(auStack_50,local_78[0],(int)*(float *)(param_3 + 0x20c),0);
  FUN_00ce20fc(auStack_50);
  thunk_FUN_00d9ff34(local_a0,"__GAME_MODE_COUNTDOWN_DURATION__");
  FUN_00d04fa4(local_78,local_a0[0],(int)*(float *)(param_3 + 0x210),0);
  FUN_00ce20fc(local_78);
  thunk_FUN_00d9ff34(local_a8,"__GAME_MODE_COUNTDOWN_PAUSED__");
  FUN_00d04fa4(local_a0,local_a8[0],*(byte *)(param_3 + 0x218) >> 1 & 1,0);
  FUN_00ce20fc(local_a0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d70774(undefined8 param_1,long param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_009bc24c();
  FUN_00d7068c(uVar3,param_1,param_2);
  if (param_3 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_3;
    uVar1 = 0x811c9dc5;
    if (*param_3 != 0) {
      do {
        param_3 = param_3 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_3;
      } while (*param_3 != 0);
    }
  }
  *(uint *)(param_2 + 0x214) = uVar1;
  *(byte *)(param_2 + 0x218) = *(byte *)(param_2 + 0x218) & 0xfe;
  return;
}




void FUN_00d707fc(long param_1,byte param_2,ulong param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 local_90 [2];
  undefined4 local_88 [10];
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(byte *)(param_1 + 0x218) = *(byte *)(param_1 + 0x218) & 0xfd | (param_2 & 1) << 1;
  uVar2 = FUN_009bc24c();
  if ((param_2 & 1) == 0) {
    FUN_00d7068c(uVar2,*(float *)(param_1 + 0x210) -
                       (*(float *)(param_1 + 0x208) - *(float *)(param_1 + 0x20c)),param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x208) = uVar2;
    thunk_FUN_00d9ff34(local_88,"__GAME_MODE_COUNTDOWN_PAUSED__");
    FUN_00d04fa4(auStack_60,local_88[0],*(byte *)(param_1 + 0x218) >> 1 & 1,0);
    FUN_00ce20fc(auStack_60);
    if ((param_3 & 1) != 0) {
      thunk_FUN_00d9ff34(local_90,"__GAME_MODE_COUNTDOWN_DO_ROUNDING__");
      FUN_00d04fa4(local_88,local_90[0],1,0);
      FUN_00ce20fc(local_88);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d708f0(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




undefined8 FUN_00d70914(undefined8 param_1)

{
  FUN_00d701b0();
  return param_1;
}




void FUN_00d70938(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d70940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




long FUN_00d70944(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(byte *)(param_1 + 0x1d8) != 0) {
    lVar2 = 0;
    lVar1 = param_1 + 0x68;
    do {
      if (*(int *)(param_1 + 8 + lVar2 * 4) == param_2) {
        return lVar1;
      }
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while ((uint)lVar2 < (uint)*(byte *)(param_1 + 0x1d8));
  }
  return 0;
}




long FUN_00d70984(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(byte *)(param_1 + 0x1d8) != 0) {
    lVar2 = 0;
    lVar1 = param_1 + 0x68;
    do {
      if (*(int *)(param_1 + 8 + lVar2 * 4) == param_2) {
        return lVar1;
      }
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while ((uint)lVar2 < (uint)*(byte *)(param_1 + 0x1d8));
  }
  return 0;
}




void FUN_00d709c4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  DAT_031a9d20 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031a9d20 + 1;
  lVar2 = param_1 + (ulong)DAT_031a9d20 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = FUN_00d70b28;
  *(code **)(lVar2 + 0xb8) = FUN_00d70b40;
  *(uint *)(lVar2 + 0xa4) = DAT_031a9d20;
  *(undefined4 *)(lVar2 + 0xa8) = 0x30;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  uVar1 = FUN_019888d4();
  FUN_01989130(uVar1,PTR_DAT_02bea980,FUN_00d70a48);
  return;
}




void FUN_00d70a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_01988738(DAT_031a9d20,0);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  return;
}




void FUN_00d70a78(void)

{
  long lVar1;
  int iVar2;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  iVar2 = FUN_019889cc(&local_30,1,DAT_031a9d20,0);
  if (iVar2 != 1) {
    FUN_00e6a2fc(0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(local_30 + 0x28));
}




void FUN_00d70aec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e1f0;
  param_1[5] = 0;
  return;
}




void FUN_00d70b04(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_00d70b28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e1f0;
  param_1[5] = 0;
  return;
}




void FUN_00d70b40(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d70b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d70b4c(undefined8 *param_1)

{
  param_1[5] = 0;
  *param_1 = &PTR_FUN_0281e220;
  DAT_031a9d30 = param_1;
  FUN_00e6b798();
  return;
}




void FUN_00d70b6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e220;
  DAT_031a9d30 = 0;
  FUN_01985bd0();
  return;
}




void FUN_00d70b88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e220;
  DAT_031a9d30 = 0;
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_00d70bc4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  DAT_031a9d38 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031a9d38 + 1;
  lVar2 = param_1 + (ulong)DAT_031a9d38 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = FUN_00d70e9c;
  *(code **)(lVar2 + 0xb8) = FUN_00d70edc;
  *(uint *)(lVar2 + 0xa4) = DAT_031a9d38;
  *(undefined4 *)(lVar2 + 0xa8) = 0x30;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  uVar1 = FUN_019888d4();
  FUN_01989130(uVar1,PTR_DAT_02beac08,FUN_00d70c48);
  return;
}




void FUN_00d70c48(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    lVar1 = FUN_01988738(DAT_031a9d38,0);
    *(long *)(lVar1 + 0x28) = param_3;
  }
  return;
}




void FUN_00d70c7c(long param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_3 != 0) {
    uVar4 = (ulong)param_3;
    uVar3 = **(undefined8 **)**(undefined8 **)(param_1 + 0x28);
    do {
      uVar2 = FUN_00d70d2c(param_1,uVar3);
      FUN_008fa54c(local_60,uVar2);
      FUN_008fce60(param_2,local_60);
      if ((local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
      uVar4 = uVar4 - 1;
      param_2 = param_2 + 0x18;
    } while (uVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00d70d2c(long param_1,char *param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  
  do {
    puVar5 = *(undefined8 **)**(long **)(param_1 + 0x28);
    plVar7 = (long *)**(long **)(param_1 + 0x28);
    while (puVar5 != (undefined8 *)0x0) {
      iVar3 = strcmp((char *)*puVar5,param_2);
      if (iVar3 == 0) {
        lVar9 = *plVar7;
        goto LAB_00d70d98;
      }
      puVar5 = (undefined8 *)plVar7[1];
      plVar7 = plVar7 + 1;
    }
    lVar9 = 0;
LAB_00d70d98:
    plVar7 = *(long **)(lVar9 + 8);
    if (*plVar7 == 0) {
      uVar10 = 0;
      fVar12 = 0.0;
      bVar1 = true;
    }
    else {
      uVar10 = 0;
      do {
        uVar6 = uVar10;
        uVar10 = uVar6 + 1;
      } while (plVar7[uVar6 + 1] != 0);
      fVar12 = (float)*(int *)(*plVar7 + 8);
      if ((int)uVar10 != 1) {
        uVar8 = 0;
        do {
          lVar2 = uVar8 + 1;
          uVar8 = uVar8 + 1;
          fVar12 = fVar12 + (float)*(int *)(plVar7[lVar2] + 8);
        } while (uVar6 != uVar8);
      }
      bVar1 = false;
    }
    iVar3 = rand();
    puVar5 = (undefined8 *)0x0;
    if (!bVar1) {
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      uVar6 = 0;
      fVar11 = 0.0;
      do {
        puVar5 = *(undefined8 **)(*(long *)(lVar9 + 8) + uVar6 * 8);
        fVar11 = fVar11 + (float)*(int *)(puVar5 + 1);
        if (fVar12 * (float)iVar3 * 4.656613e-10 + 0.0 <= fVar11) goto LAB_00d70e5c;
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uVar10 & 0xffffffff));
      puVar5 = (undefined8 *)0x0;
    }
LAB_00d70e5c:
    if (*(int *)((long)puVar5 + 0xc) != 1) {
      if (*(int *)((long)puVar5 + 0xc) == 0) {
        uVar4 = *puVar5;
      }
      else {
        uVar4 = 0;
      }
      return uVar4;
    }
    param_2 = (char *)*puVar5;
  } while( true );
}




undefined8 FUN_00d70e90(void)

{
  return DAT_031a9d30;
}




undefined8 * FUN_00d70e9c(undefined8 *param_1)

{
  param_1[5] = 0;
  *param_1 = &PTR_FUN_0281e220;
  DAT_031a9d30 = param_1;
  FUN_00e6b798();
  return param_1;
}




void FUN_00d70edc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d70ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d70ee8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  *param_1 = &PTR_thunk_FUN_01985bd0_0281e250;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 10) = 0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2 + 0x38);
    puVar1[1] = 0xffffffffffffffff;
    *puVar1 = 0xffffffffffffffff;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x10);
  return;
}




void FUN_00d70f40(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_00d70f64(long param_1)

{
  long lVar1;
  
  DAT_031a9d88 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031a9d88 + 1;
  lVar1 = param_1 + (ulong)DAT_031a9d88 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d724f4;
  *(code **)(lVar1 + 0xb8) = FUN_00d72544;
  *(uint *)(lVar1 + 0xa4) = DAT_031a9d88;
  *(undefined4 *)(lVar1 + 0xa8) = 0x58;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 100;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_00d70fc4(long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  uint local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x28) = param_2;
  *(undefined2 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  if (*(char *)(param_2 + 0x60) == '\0') {
    uVar3 = FUN_00e6a488(*(undefined8 *)(param_2 + 400));
    if ((uVar3 & 1) == 0) {
      pbVar5 = *(byte **)(*(long *)(param_1 + 0x28) + 400);
      if (pbVar5 == (byte *)0x0) {
        local_40[0] = 0;
      }
      else {
        uVar6 = (uint)*pbVar5;
        local_40[0] = 0x811c9dc5;
        if (*pbVar5 != 0) {
          do {
            pbVar5 = pbVar5 + 1;
            local_40[0] = (local_40[0] ^ uVar6) * 0x1000193;
            uVar6 = (uint)*pbVar5;
          } while (*pbVar5 != 0);
        }
      }
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
      lVar4 = FUN_00d9f258(uVar2,local_40);
      if (lVar4 == 0) {
        uVar2 = FUN_01985d44(uVar2,DAT_02c7bf1c);
        FUN_00d6d5e0(uVar2,local_40,2,0,0,0);
        FUN_00d6e510(uVar2,1);
      }
    }
  }
  else {
    uVar2 = FUN_01985d44(param_1,DAT_031a94c4);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    uVar2 = FUN_00cea0b0(param_2);
    FUN_00d4fe50(*(undefined8 *)(param_1 + 0x30),uVar2,0,0);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

