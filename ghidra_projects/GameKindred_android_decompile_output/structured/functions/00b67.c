// functions/00b67 — 15 functions
#include "libGameKindred.h"




void FUN_00b670bc(void)

{
  return;
}




void FUN_00b670c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_4);
  FUN_00b67f8c(param_1,uVar1);
  return;
}




void FUN_00b670f4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b670fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00b67100(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  byte local_90 [16];
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  fVar11 = (float)(**(code **)(*param_1 + 0x48))();
  uVar7 = FUN_0092ead0();
  fVar12 = 4.0;
  if ((uVar7 & 1) == 0) {
    fVar12 = 3.0;
  }
  fVar11 = fVar11 / fVar12;
  lVar8 = FUN_009580b8();
  uVar2 = *(uint *)(lVar8 + 0x55e0);
  lVar8 = FUN_009580b8();
  iVar3 = *(int *)(lVar8 + 0x55e4);
  lVar8 = FUN_009580b8();
  iVar4 = *(int *)(lVar8 + 0x55e8);
  lVar8 = FUN_009580b8();
  iVar5 = *(int *)(lVar8 + 0x55ec);
  if (uVar2 != *(uint *)(param_1 + 0x1cc1)) {
    *(uint *)(param_1 + 0x1cc1) = uVar2;
    uVar7 = FUN_009580c4();
    if ((uVar7 & 1) != 0) {
      FUN_00a01758();
    }
  }
  FUN_00b0a930(fVar11 * (float)uVar2,0x41f80000,param_1 + 0x6d6,0,(int)(fVar11 * (float)uVar2),
               (int)(fVar11 * (float)(uVar2 - 1) +
                    fVar11 * ((float)(uint)(iVar3 - iVar4) / (float)(uint)(iVar5 - iVar4))),0);
  FUN_00e6ce7c("MENU_LEVEL_UP_REWARD_GAME_MODE_UNLOCKED_BOTS",0);
  FUN_00e6ce7c("MENU_LEVEL_UP_REWARD_GAME_MODE_UNLOCKED_CASUAL",0);
  FUN_00e70510(&local_68);
  FUN_00e70e18(&local_68,&DAT_01bb6d43,*(undefined4 *)(param_2 + 0x124));
  FUN_00f0d75c(param_1 + 0x9a,&local_68);
  FUN_00cb418c(local_90,*(undefined4 *)(param_2 + 0x6c));
  FUN_00e70570(&local_78,local_90);
  FUN_00f0d75c(param_1 + 0x271,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  fVar11 = *(float *)(param_1 + 0x189);
  plVar1 = param_1 + 0x242;
  fVar12 = (float)FUN_00f01c54(plVar1,0,0,1,1);
  fVar11 = fVar11 + fVar12 * -0.5;
  if (*(float *)(param_1 + 0x24a) != fVar11) {
    *(float *)(param_1 + 0x24a) = fVar11;
    FUN_0091ada4(plVar1);
  }
  FUN_00b1ad28(param_1 + 0xe6,*(undefined4 *)(param_2 + 0x68));
  FUN_00b1ad28(param_1 + 0x1a7,*(undefined4 *)(param_2 + 0x6c));
  FUN_00b1ad28(param_1 + 0x2bd,*(undefined4 *)(param_2 + 0x74));
  fVar11 = *(float *)(param_1 + 0x189);
  fVar12 = (float)FUN_00f01c54(plVar1,0,0,1,1);
  fVar12 = fVar11 + fVar12 * -0.5 + -10.0;
  if (*(float *)(param_1 + 0x24a) != fVar12) {
    *(float *)(param_1 + 0x24a) = fVar12;
    FUN_0091ada4(plVar1);
  }
  plVar1 = param_1 + 899;
  if ((~*(uint *)((long)param_1 + 0x1c9c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1c9c) = *(uint *)((long)param_1 + 0x1c9c) | 0x7f80;
    FUN_0091ada4(plVar1);
  }
  lVar8 = FUN_009580b8();
  iVar3 = *(int *)(lVar8 + 0x5618);
  *(int *)(param_1 + 0x1cc0) = iVar3;
  *(uint *)((long)param_1 + 0x21fc) = *(uint *)((long)param_1 + 0x21fc) & 0xfffffffb;
  if (iVar3 == 2) {
    FUN_00f0e578(plVar1,"icon_karma_L2");
    uVar10 = FUN_00e6ce7c("MAIN_PROFILE_KARMA_GREAT",0);
    FUN_00f0d75c(param_1 + 0x3bf,uVar10);
    *(uint *)((long)param_1 + 0x21fc) = *(uint *)((long)param_1 + 0x21fc) | 4;
  }
  else {
    if (iVar3 == 1) {
      FUN_00f0e578(plVar1,"icon_karma_L1");
      pcVar9 = "MAIN_PROFILE_KARMA_GOOD";
    }
    else {
      if (iVar3 != 0) {
        FUN_00f0e578(plVar1,"icon_karma_L1");
        FUN_00f0d75c(param_1 + 0x3bf,&DAT_03210450);
        uVar2 = *(uint *)((long)param_1 + 0x1c9c);
        if ((uVar2 & 0x7f80) != 0x2600) {
          *(uint *)((long)param_1 + 0x1c9c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x2600;
          FUN_0091ada4(plVar1);
        }
        goto LAB_00b67490;
      }
      FUN_00f0e578(plVar1,"icon_karma_L0");
      pcVar9 = "MAIN_PROFILE_KARMA_BAD";
    }
    uVar10 = FUN_00e6ce7c(pcVar9,0);
    FUN_00f0d75c(param_1 + 0x3bf,uVar10);
  }
LAB_00b67490:
  param_1[0x1cbf] = (long)*(double *)(param_2 + 0x110);
  FUN_00b25438(param_1 + 0x403);
  FUN_00b67f08(param_1);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b674f8(undefined8 *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_027e4d70;
  param_1[0x19] = &PTR_FUN_027e4ee0;
  FUN_00b679fc();
  puVar1 = (uint *)FUN_00a012b4();
  lVar4 = (ulong)*puVar1 << 5;
  puVar6 = *(undefined8 **)(puVar1 + 2);
  do {
    puVar2 = puVar6;
    if (lVar4 == 0) goto LAB_00b67560;
    lVar4 = lVar4 + -0x20;
    puVar6 = puVar2 + 4;
  } while ((undefined8 *)*puVar2 != param_1);
  FUN_00910480(puVar1,puVar2);
LAB_00b67560:
  puVar1 = (uint *)FUN_00a016d4();
  lVar5 = (ulong)*puVar1 << 5;
  lVar4 = *(long *)(puVar1 + 2);
  do {
    lVar3 = lVar4;
    if (lVar5 == 0) goto LAB_00b67590;
    lVar5 = lVar5 + -0x20;
    lVar4 = lVar3 + 0x20;
  } while (*(undefined8 **)(lVar3 + 8) != param_1);
  FUN_009e48d4(puVar1,lVar3);
LAB_00b67590:
  if ((*(byte *)(param_1 + 0x1cbc) & 1) != 0) {
    operator_delete((void *)param_1[0x1cbe]);
  }
  FUN_00b0608c(param_1 + 0x156b);
  FUN_00adbab8(param_1 + 0xb75);
  FUN_00b029f4(param_1 + 0xa35);
  FUN_00f01868(param_1 + 0xa24);
  param_1[0x975] = &PTR_FUN_027d47d0;
  lVar4 = -0x4b0;
  puVar6 = param_1 + 0xa04;
  do {
    *puVar6 = &PTR_FUN_028266f0;
    puVar6[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar6 + 0x1a);
    FUN_00f13d08(puVar6);
    lVar4 = lVar4 + 0xf0;
    puVar6 = puVar6 + -0x1e;
  } while (lVar4 != 0);
  FUN_00f13d08(param_1 + 0x975);
  param_1[0x957] = &PTR_FUN_028266f0;
  param_1[0x96e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x971);
  FUN_00f13d08(param_1 + 0x957);
  param_1[0x939] = &PTR_FUN_028266f0;
  param_1[0x950] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x953);
  FUN_00f13d08(param_1 + 0x939);
  FUN_00ab0d88(param_1 + 0x6d6);
  FUN_00f01868(param_1 + 0x6c5);
  FUN_00b029f4(param_1 + 0x585);
  param_1[0x567] = &PTR_FUN_028266f0;
  param_1[0x57e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x581);
  FUN_00f13d08(param_1 + 0x567);
  param_1[0x549] = &PTR_FUN_028266f0;
  param_1[0x560] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x563);
  FUN_00f13d08(param_1 + 0x549);
  if ((void *)param_1[0x548] != (void *)0x0) {
    operator_delete__((void *)param_1[0x548]);
    param_1[0x548] = 0;
    param_1[0x547] = 0;
  }
  if ((void *)param_1[0x546] != (void *)0x0) {
    operator_delete__((void *)param_1[0x546]);
    param_1[0x546] = 0;
    param_1[0x545] = 0;
  }
  FUN_00f01868(param_1 + 0x534);
  thunk_FUN_00ed00e0(param_1 + 0x489);
  FUN_00f13d08(param_1 + 0x455);
  FUN_00f0d3a4(param_1 + 0x42f);
  param_1[0x403] = &PTR_FUN_027d3cc8;
  param_1[0x41a] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x42c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x42c]);
    param_1[0x42c] = 0;
    param_1[0x42b] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x403);
  param_1[0x3e5] = &PTR_FUN_028266f0;
  param_1[0x3fc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3ff);
  FUN_00f13d08(param_1 + 0x3e5);
  FUN_00f0d3a4(param_1 + 0x3bf);
  param_1[0x3a1] = &PTR_FUN_028266f0;
  param_1[0x3b8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3bb);
  FUN_00f13d08(param_1 + 0x3a1);
  param_1[899] = &PTR_FUN_028266f0;
  param_1[0x39a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x39d);
  FUN_00f13d08(param_1 + 899);
  param_1[0x358] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x36f);
  FUN_00f13d08(param_1 + 0x358);
  param_1[0x2bd] = &PTR_FUN_027dd280;
  FUN_00f0d3a4(param_1 + 0x331);
  FUN_00f0d3a4(param_1 + 0x30b);
  FUN_00f13d08(param_1 + 0x2f2);
  param_1[0x2d4] = &PTR_FUN_028266f0;
  param_1[0x2eb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2ee);
  FUN_00f13d08(param_1 + 0x2d4);
  FUN_00f13d08(param_1 + 0x2bd);
  FUN_00f0d3a4(param_1 + 0x297);
  FUN_00f0d3a4(param_1 + 0x271);
  param_1[0x253] = &PTR_FUN_028266f0;
  param_1[0x26a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x26d);
  FUN_00f13d08(param_1 + 0x253);
  FUN_00f01868(param_1 + 0x242);
  param_1[0x1a7] = &PTR_FUN_027dd280;
  FUN_00f0d3a4(param_1 + 0x21b);
  FUN_00f0d3a4(param_1 + 0x1f5);
  FUN_00f13d08(param_1 + 0x1dc);
  param_1[0x1be] = &PTR_FUN_028266f0;
  param_1[0x1d5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1d8);
  FUN_00f13d08(param_1 + 0x1be);
  FUN_00f13d08(param_1 + 0x1a7);
  FUN_00f0d3a4(param_1 + 0x181);
  param_1[0xe6] = &PTR_FUN_027dd280;
  FUN_00f0d3a4(param_1 + 0x15a);
  FUN_00f0d3a4(param_1 + 0x134);
  FUN_00f13d08(param_1 + 0x11b);
  param_1[0xfd] = &PTR_FUN_028266f0;
  param_1[0x114] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x117);
  FUN_00f13d08(param_1 + 0xfd);
  FUN_00f13d08(param_1 + 0xe6);
  FUN_00f0d3a4(param_1 + 0xc0);
  FUN_00f0d3a4(param_1 + 0x9a);
  FUN_00f0d3a4(param_1 + 0x74);
  param_1[0x4b] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x62);
  FUN_00f13d08(param_1 + 0x4b);
  param_1[0x2d] = &PTR_FUN_028266f0;
  param_1[0x44] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x47);
  FUN_00f13d08(param_1 + 0x2d);
  FUN_00f01868(param_1 + 0x1c);
  FUN_00a997e0(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b679fc(long param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x2a28) != 0) {
    uVar3 = 0;
    do {
      uVar1 = FUN_00f02540(*(undefined8 *)(*(long *)(param_1 + 0x2a30) + uVar3 * 8));
      if ((uVar1 & 1) != 0) {
        FUN_00f01a4c(*(undefined8 *)(*(long *)(param_1 + 0x2a30) + uVar3 * 8),1);
      }
      plVar2 = *(long **)(*(long *)(param_1 + 0x2a30) + uVar3 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x2a28));
  }
  if (*(long *)(param_1 + 0x2a30) != 0) {
    *(undefined4 *)(param_1 + 0x2a28) = 0;
  }
  if (*(int *)(param_1 + 0x2a38) != 0) {
    uVar3 = 0;
    do {
      uVar1 = FUN_00f02540(*(undefined8 *)(*(long *)(param_1 + 0x2a40) + uVar3 * 8));
      if ((uVar1 & 1) != 0) {
        FUN_00f01a4c(*(undefined8 *)(*(long *)(param_1 + 0x2a40) + uVar3 * 8),1);
      }
      plVar2 = *(long **)(*(long *)(param_1 + 0x2a40) + uVar3 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x2a38));
  }
  if (*(long *)(param_1 + 0x2a40) != 0) {
    *(undefined4 *)(param_1 + 0x2a38) = 0;
  }
  *(undefined4 *)(param_1 + 0x299c) = 0;
  FUN_00ed3878(param_1 + 0x2448);
  return;
}




void FUN_00b67ae4(long param_1)

{
  FUN_00b674f8(param_1 + -200);
  return;
}




void FUN_00b67aec(void *param_1)

{
  FUN_00b674f8();
  operator_delete(param_1);
  return;
}




void FUN_00b67b10(long param_1)

{
  FUN_00b674f8((void *)(param_1 + -200));
  operator_delete((void *)(param_1 + -200));
  return;
}




void FUN_00b67b38(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_2 & 1) == 0) {
    FUN_00b0b980(param_1 + 14000);
    uVar3 = FUN_009b8d90();
    FUN_008fa54c(local_50,"layer_player_profile_prog");
    FUN_009baadc(uVar3,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    FUN_00b0b730();
    thunk_FUN_00b065c4(param_1 + 0xab58);
    lVar2 = FUN_00969248();
    if (*(int *)(lVar2 + 0x38) < 1) {
      uVar4 = *(uint *)(param_1 + 0x51a4) & 0xfffffffb;
    }
    else {
      FUN_008fa54c(local_50,"tutorial");
      FUN_00b01884(param_1 + 0x51a8,local_50);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      FUN_008fa54c(local_50,"IDLE_CLOSED");
      FUN_00b013a0(0xbf800000,param_1 + 0x51a8,local_50);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      uVar4 = *(uint *)(param_1 + 0x51a4) | 4;
    }
    *(uint *)(param_1 + 0x51a4) = uVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b67c70(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (((param_2 & 1) != 0) &&
     ((uVar1 = FUN_009580c4(), (uVar1 & 1) == 0 ||
      (lVar2 = FUN_009580b8(), *(char *)(lVar2 + 0x568c) == '\0')))) {
    FUN_00b67cb8(param_1);
    return;
  }
  return;
}




void FUN_00b67cb8(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong local_78;
  void *local_70;
  code *local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_009580b8();
  if (*(char *)(lVar2 + 0x568c) == '\0') {
    uVar3 = FUN_00a022b0();
    if ((uVar3 & 1) == 0) {
      FUN_00b68f38(param_1,1);
    }
    else {
      *(uint *)((long)param_1 + 0x4c2c) = *(uint *)((long)param_1 + 0x4c2c) & 0xfffffffb;
      FUN_00b16600(param_1 + 0x975);
      *(uint *)((long)param_1 + 0x4b3c) = *(uint *)((long)param_1 + 0x4b3c) | 4;
      FUN_00a01a90(&local_78,2);
      local_68 = FUN_00b6a468;
      FUN_00b6a7cc(local_70,(void *)((long)local_70 + (local_78 & 0xffffffff) * 8),&local_68);
      uVar3 = local_78 & 0xffffffff;
      if ((int)local_78 != 0) {
        uVar5 = 0;
        do {
          lVar2 = *(long *)((long)local_70 + uVar5 * 8);
          if (lVar2 != 0) {
            local_68 = (code *)0x0;
            uStack_60 = 0;
            local_50 = 0;
            local_58 = (void *)0x0;
            puVar4 = (undefined4 *)FUN_009f6560(lVar2,"level");
            if (puVar4 != (undefined4 *)0x0) {
              local_50 = *puVar4;
              FUN_008fce60(&local_68,lVar2 + 0x48);
              uVar3 = FUN_0093dbe8();
              if ((uVar3 & 1) == 0) {
                FUN_00b69cd8(param_1,&local_68);
              }
            }
            if (((ulong)local_68 & 1) != 0) {
              operator_delete(local_58);
            }
            uVar3 = local_78 & 0xffffffff;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
      }
      FUN_00b6924c(param_1,1);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
        local_78 = 0;
        local_70 = (void *)0x0;
      }
    }
    (**(code **)(*param_1 + 0x150))(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b67e3c(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  
  FUN_00b67f08();
  lVar2 = FUN_009580b8();
  if (*(char *)(lVar2 + 0x568c) == '\0') {
    lVar2 = param_1 + 0x2448;
    uVar3 = FUN_00ed0848(lVar2);
    if (((uVar3 & 1) == 0) && (uVar3 = FUN_00ed0854(lVar2), (uVar3 & 1) == 0)) {
      if ((*(char *)(param_1 + 0xe60c) == '\0') &&
         (((uVar3 = FUN_00ed0848(lVar2), (uVar3 & 1) == 0 &&
           (uVar3 = FUN_00ed0854(lVar2), (uVar3 & 1) == 0)) && (*(int *)(param_1 + 0xe604) == -1))))
      {
        FUN_00b67f8c(param_1,*(undefined4 *)(param_1 + 0x2994));
      }
    }
    else {
      FUN_00b67f8c(param_1,0xffffffff);
      FUN_00b682c4(param_1);
    }
    bVar1 = FUN_00ed0848(lVar2);
    *(byte *)(param_1 + 0xe60c) = bVar1 & 1;
  }
  return;
}




void FUN_00b67f08(long param_1)

{
  if (*(long *)(param_1 + 0xe5f8) < 1) {
    *(uint *)(param_1 + 0x209c) = *(uint *)(param_1 + 0x209c) & 0xfffffffb;
    FUN_00f0d75c(param_1 + 0x2018,&DAT_03210450);
    *(uint *)(param_1 + 0x21fc) =
         *(uint *)(param_1 + 0x21fc) & 0xfffffff8 |
         *(uint *)(param_1 + 0x21fc) & 3 | (uint)(*(int *)(param_1 + 0xe600) == 2) << 2;
  }
  else {
    *(uint *)(param_1 + 0x209c) = *(uint *)(param_1 + 0x209c) | 4;
    FUN_00b252ec();
    *(uint *)(param_1 + 0x21fc) = *(uint *)(param_1 + 0x21fc) & 0xfffffffb;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b67f8c(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  byte local_b8 [16];
  void *local_a8;
  byte local_a0 [16];
  void *local_90;
  ulong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar10 = (ulong)param_2;
  lVar5 = FUN_009580b8();
  if (((*(char *)(lVar5 + 0x568c) != '\0') || (*(int *)(param_1 + 0x2a28) == 0)) ||
     (lVar5 = FUN_00969248(), 0 < *(int *)(lVar5 + 0x38))) goto LAB_00b67fc8;
  puVar1 = (uint *)(param_1 + 0xe604);
  *puVar1 = param_2;
  if (*(int *)(param_1 + 0x2a28) != 0) {
    FUN_00b69b74(**(undefined8 **)(param_1 + 0x2a30),param_2 == 0);
    uVar8 = *(uint *)(param_1 + 0x2a28);
    if (1 < uVar8) {
      uVar10 = 1;
      do {
        FUN_00b69b74(*(undefined8 *)(*(long *)(param_1 + 0x2a30) + uVar10 * 8),uVar10 == *puVar1);
        uVar8 = *(uint *)(param_1 + 0x2a28);
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar8);
    }
    uVar2 = *puVar1;
    uVar10 = (ulong)uVar2;
    if ((-1 < (int)uVar2) && (uVar2 < uVar8)) {
      FUN_008fa54c(local_a0,"IDLE_CLOSED");
      lVar5 = *(long *)(*(long *)(param_1 + 0x2a30) + (ulong)*puVar1 * 8);
      if ((*(byte *)(lVar5 + 0x5d8) & 1) == 0) {
        lVar5 = lVar5 + 0x5d9;
      }
      else {
        lVar5 = *(long *)(lVar5 + 0x5e8);
      }
      piVar6 = (int *)FUN_00a016b4(lVar5);
      iVar9 = 0;
      if (piVar6 != (int *)0x0) {
        if (*piVar6 != 0) {
          FUN_00b01884(param_1 + 0x2c28,*(long *)(piVar6 + 2) + 0x30);
        }
        if ((char)piVar6[0x36] == '\0') {
          if (*(char *)((long)piVar6 + 0xd9) != '\0') goto LAB_00b6811c;
        }
        else {
          if (*(char *)((long)piVar6 + 0xd9) == '\0') {
            FUN_008fa54c(&local_88,"IDLE_READY");
            FUN_008fce60(local_a0,&local_88);
            if ((local_88 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_74,local_78));
            }
            iVar9 = 1;
            goto LAB_00b6814c;
          }
LAB_00b6811c:
          FUN_008fa54c(&local_88,"IDLE_OPEN");
          FUN_008fce60(local_a0,&local_88);
          if ((local_88 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_74,local_78));
          }
        }
        iVar9 = 0;
      }
LAB_00b6814c:
      FUN_00b013a0(0xbf800000,param_1 + 0x2c28,local_a0);
      FUN_00b028dc(param_1 + 0x2c28,iVar9);
      uVar10 = FUN_0092e8e0();
      if ((uVar10 & 1) == 0) {
        FUN_00aa0104();
        iVar4 = FUN_00aa0618();
        if (iVar4 == 8) {
          if (iVar9 == 0) {
            uVar7 = FUN_009b8d90();
            FUN_008fa54c(&local_88,"layer_player_profile_prog");
            FUN_009baadc(uVar7,&local_88);
            if ((local_88 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_74,local_78));
            }
          }
          else {
            local_80 = DAT_03218f38;
            local_88 = DAT_03218f30;
            local_60 = 0;
            uStack_58 = 0;
            local_50 = 0x3f800000;
            local_70 = param_1 + 0x2a48;
            uStack_7c = (undefined4)_DAT_03218ef8;
            local_78 = (undefined4)((ulong)_DAT_03218ef8 >> 0x20);
            local_4a = 1;
            uStack_68 = 0;
            local_4c = 1;
            uVar7 = FUN_009b8d90();
            FUN_008fa54c(local_b8,"layer_player_profile_prog");
            FUN_009baa78(uVar7,local_b8,&local_88);
            if ((local_b8[0] & 1) != 0) {
              operator_delete(local_a8);
            }
            FUN_00b69f98(param_1);
          }
        }
      }
      if ((local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
      uVar10 = (ulong)*puVar1;
    }
  }
  *(uint *)(param_1 + 0x2cac) =
       (*(uint *)(param_1 + 0x2cac) & 0xfffffff8 |
       *(uint *)(param_1 + 0x2cac) & 3 | (int)(uVar10 >> 0x1f) << 2) ^ 4;
  if ((int)uVar10 < 0) {
    uVar7 = FUN_009b8d90();
    FUN_008fa54c(&local_88,"layer_player_profile_prog");
    FUN_009baadc(uVar7,&local_88);
    if ((local_88 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_74,local_78));
    }
  }
  FUN_00b682c4(param_1);
LAB_00b67fc8:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

