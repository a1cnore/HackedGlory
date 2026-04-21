// functions/009f7 — 31 functions
#include "libGameKindred.h"




undefined4 * FUN_009f7054(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  ulong uVar13;
  
  if (param_3 != param_4) {
    uVar1 = *param_1;
    uVar6 = (ulong)uVar1;
    uVar4 = param_1[1];
    puVar10 = *(undefined4 **)(param_1 + 2);
    uVar13 = (ulong)((long)param_4 - (long)param_3) >> 2;
    uVar12 = (uint)uVar13;
    if (uVar4 - uVar1 < uVar12) {
      uVar1 = uVar1 + uVar12;
      if (uVar4 < 0x20) {
        uVar4 = uVar4 << 1;
      }
      else if (uVar4 == 0xffffffff) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uVar4 + 0x10) - (uVar4 & 0xf);
      }
      uVar12 = uVar1;
      if (uVar1 <= uVar4) {
        uVar12 = uVar4;
      }
      puVar3 = operator_new__((ulong)uVar12 << 2);
      puVar5 = puVar3;
      for (puVar9 = puVar10; puVar9 != param_2; puVar9 = puVar9 + 1) {
        *puVar5 = *puVar9;
        puVar5 = puVar5 + 1;
      }
      puVar9 = puVar3 + ((ulong)((long)param_2 - (long)puVar10) >> 2 & 0xffffffff);
      puVar5 = puVar9;
      do {
        puVar11 = param_3 + 1;
        *puVar5 = *param_3;
        puVar5 = puVar5 + 1;
        param_3 = puVar11;
      } while (param_4 != puVar11);
      if (puVar10 + uVar6 != param_2) {
        puVar5 = puVar9 + (uVar13 & 0xffffffff);
        do {
          puVar11 = param_2 + 1;
          *puVar5 = *param_2;
          puVar5 = puVar5 + 1;
          param_2 = puVar11;
        } while (puVar10 + uVar6 != puVar11);
      }
      if (puVar10 != (undefined4 *)0x0) {
        operator_delete__(puVar10);
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      *(undefined4 **)(param_1 + 2) = puVar3;
      *param_1 = uVar1;
      param_1[1] = uVar12;
      param_2 = puVar9;
    }
    else {
      puVar9 = puVar10 + uVar6;
      uVar7 = (ulong)((long)puVar9 - (long)param_2) >> 2;
      uVar13 = (ulong)((long)param_4 - (long)param_3) >> 2 & 0xffffffff;
      puVar5 = param_2;
      if (uVar12 < (uint)uVar7) {
        if (uVar13 != 0) {
          lVar8 = 0;
          do {
            *(undefined4 *)((long)puVar9 + lVar8) =
                 *(undefined4 *)((long)puVar9 + lVar8 + uVar13 * -4);
            lVar8 = lVar8 + 4;
          } while (lVar8 != uVar13 * 4);
        }
        lVar8 = (long)puVar9 + (uVar13 * -4 - (long)param_2);
        puVar9 = param_2;
        if (lVar8 != 0) {
          puVar5 = puVar10 + ((uVar6 - 1) - uVar13);
          do {
            lVar2 = lVar8 + uVar13 * 4;
            lVar8 = lVar8 + -4;
            *(undefined4 *)((long)param_2 + lVar2 + -4) = *puVar5;
            puVar5 = puVar5 + -1;
          } while (lVar8 != 0);
        }
        do {
          puVar5 = param_3 + 1;
          *puVar9 = *param_3;
          puVar9 = puVar9 + 1;
          param_3 = puVar5;
        } while (param_4 != puVar5);
      }
      else {
        for (; puVar9 != puVar5; puVar5 = puVar5 + 1) {
          puVar5[uVar13] = *puVar5;
        }
        uVar6 = (ulong)((long)puVar9 - (long)param_2) >> 2 & 0xffffffff;
        for (puVar5 = param_3 + (uVar7 & 0xffffffff); puVar5 != param_4; puVar5 = puVar5 + 1) {
          *puVar9 = *puVar5;
          puVar9 = puVar9 + 1;
        }
        if (uVar6 != 0) {
          lVar8 = uVar6 << 2;
          puVar9 = param_2;
          do {
            lVar8 = lVar8 + -4;
            *puVar9 = *param_3;
            puVar9 = puVar9 + 1;
            param_3 = param_3 + 1;
          } while (lVar8 != 0);
        }
      }
      param_2 = puVar10 + ((ulong)((long)param_2 - (long)puVar10) >> 2 & 0xffffffff);
      *param_1 = uVar1 + uVar12;
    }
  }
  return param_2;
}




long FUN_009f7280(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar3 = FUN_00e6a474(uVar7);
  uVar4 = FUN_0091ed5c(uVar7,uVar3,0x12345678);
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar6 = (ulong)uVar1 * (ulong)uVar4 >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)uVar4 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar6 * 4) <= uVar4) break;
        iVar5 = (int)uVar6;
        uVar2 = iVar5 - 1;
        uVar6 = (ulong)uVar2;
      } while (uVar2 != 0 && 0 < iVar5);
    }
    if ((int)uVar1 <= (int)uVar6) {
      return 0;
    }
    do {
      uVar2 = *(uint *)(*(long *)(param_1 + 2) + uVar6 * 4);
      if (uVar4 <= uVar2) {
        if (uVar2 != uVar4) {
          return 0;
        }
        return *(long *)(param_1 + 6) + uVar6 * 4;
      }
      uVar2 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar2;
    } while ((int)uVar2 < (int)uVar1);
  }
  return 0;
}




void FUN_009f7330(void)

{
  void *pvVar1;
  
  if (DAT_031308b0 == (void *)0x0) {
    pvVar1 = operator_new(0x1d0);
    FUN_009f740c();
    DAT_031308b0 = pvVar1;
  }
  return;
}




void FUN_009f7368(void)

{
  if (DAT_031308b0 != (long *)0x0) {
    (**(code **)(*DAT_031308b0 + 8))();
    DAT_031308b0 = (long *)0x0;
  }
  return;
}




undefined8 FUN_009f739c(void)

{
  return DAT_031308b0;
}




void FUN_009f73a8(void)

{
  FUN_009f73b4(DAT_031308b0);
  return;
}




void FUN_009f73b4(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00940c1c();
    if (*(char *)(lVar2 + 8) != '\0') {
      uVar1 = FUN_00e84e4c(param_1 + 0x40);
      if ((uVar1 & 1) == 0) {
        FUN_00e82858(param_1 + 0x40);
        uVar3 = 0;
        goto LAB_009f73ec;
      }
    }
  }
  uVar3 = 1;
LAB_009f73ec:
  *(undefined1 *)(param_1 + 0x1c8) = uVar3;
  return;
}




void FUN_009f740c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *local_88;
  code *pcStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00948cd8();
  FUN_00e83560(param_1 + 3);
  param_1[7] = 0;
  *param_1 = &PTR_FUN_027c5790;
  param_1[3] = &PTR_FUN_027c5b38;
  param_1[6] = &PTR_FUN_027c5b68;
  FUN_00e84dac(param_1 + 8);
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[8] = &PTR_FUN_027bbb68;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = param_1 + 0x10;
  puVar2 = param_1 + 0x12;
  *puVar2 = &PTR_FUN_027c5ba8;
  memset(param_1 + 0x13,0,0x50);
  pcStack_80 = thunk_FUN_009f8694;
  local_88 = puVar2;
  FUN_00f02e98(0x3dcccccd,&local_88,0,1);
  *puVar2 = &PTR_FUN_027c5c58;
  *(undefined4 *)((long)param_1 + 0xec) = 0;
  puVar2 = param_1 + 0x1e;
  *puVar2 = &PTR_FUN_027c5ba8;
  memset(param_1 + 0x1f,0,0x50);
  pcStack_80 = thunk_FUN_009f8694;
  local_88 = puVar2;
  FUN_00f02e98(0x3dcccccd,&local_88,0,1);
  *puVar2 = &PTR_FUN_027c5c58;
  *(undefined4 *)((long)param_1 + 0x14c) = 0;
  param_1[0x2a] = &PTR_FUN_027c5ba8;
  memset(param_1 + 0x2b,0,0x50);
  pcStack_80 = thunk_FUN_009f8694;
  local_88 = param_1 + 0x2a;
  FUN_00f02e98(0x3dcccccd,&local_88,0,1);
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  *(undefined2 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  param_1[0x2a] = &PTR_FUN_027c5c00;
  *(undefined1 *)((long)param_1 + 0x1ca) = 0;
  FUN_00915ec0(param_1 + 6);
  pcStack_80 = thunk_FUN_009f7ed4;
  local_88 = param_1;
  FUN_00f02e98(0x3dcccccd,&local_88,0,1);
  uStack_70 = 0;
  local_78 = 0;
  pcStack_80 = (code *)0x0;
  local_88 = (undefined8 *)0x0;
  FUN_009f7680(&local_88,"5v5_earnedElo_season","MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_5V5");
  FUN_009f7680(&local_88,"3v3_earnedElo_season","MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_3V3");
  FUN_009f7680(&local_88,"blitz_earnedElo_season","MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_BLITZ");
  FUN_009f7680(&local_88,"wins_season","MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_WINS");
  FUN_009f7720(param_1 + 0x2a,&local_88);
  FUN_00951534(&local_78,1);
  FUN_00951534(&local_88,1);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f7680(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50);
  FUN_0096204c(param_1,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa54c(local_50,param_3);
  FUN_0096204c(param_1 + 0x10,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f7720(long param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  FUN_00965324(param_1 + 0x28,param_2 + 0x10);
  FUN_00965324(param_1 + 0x60,param_2);
  FUN_009f817c(param_1);
  return;
}




void FUN_009f7764(undefined8 *param_1)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *local_58;
  code *pcStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027c5790;
  param_1[3] = &PTR_FUN_027c5b38;
  param_1[6] = &PTR_FUN_027c5b68;
  FUN_00915ef0();
  pcStack_50 = thunk_FUN_009f7ed4;
  local_58 = param_1;
  FUN_00f03390(&local_58);
  puVar5 = param_1 + 0xf;
  plVar6 = (long *)*puVar5;
  while (plVar6 != param_1 + 0x10) {
    if ((long *)plVar6[7] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[7] + 8))();
    }
    plVar3 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      plVar3 = plVar6 + 2;
      bVar2 = *(long **)*plVar3 != plVar6;
      plVar6 = (long *)*plVar3;
      if (bVar2) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar6 = (long *)*plVar3;
        } while (*plVar6 != lVar4);
      }
    }
    else {
      do {
        plVar6 = plVar3;
        plVar3 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  FUN_009f8f0c(puVar5,param_1[0x10]);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = param_1 + 0x10;
  param_1[0x2a] = &PTR_FUN_027c5c00;
  FUN_00951534(param_1 + 0x36,1);
  FUN_009f7934(param_1 + 0x2a);
  FUN_009f7934(param_1 + 0x1e);
  FUN_009f7934(param_1 + 0x12);
  FUN_009f8f0c(puVar5,param_1[0x10]);
  param_1[8] = &PTR_FUN_027bbb68;
  FUN_00955c58(param_1 + 0xd,1);
  FUN_00e84dd8(param_1 + 8);
  FUN_00e835e0(param_1 + 3);
  FUN_00948d58(param_1);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009f78fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c5c00;
  FUN_00951534(param_1 + 0xc,1);
  FUN_009f7934(param_1);
  return;
}




void FUN_009f7934(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027c5ba8;
  pcStack_30 = thunk_FUN_009f8694;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[9]);
  }
  FUN_00951534(param_1 + 5,1);
  FUN_00955be0(param_1 + 3,1);
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f79d4(long param_1)

{
  FUN_009f7764(param_1 + -0x18);
  return;
}




void FUN_009f79dc(long param_1)

{
  FUN_009f7764(param_1 + -0x30);
  return;
}




void FUN_009f79e4(void *param_1)

{
  FUN_009f7764();
  operator_delete(param_1);
  return;
}




void FUN_009f7a08(long param_1)

{
  FUN_009f7764((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}




void FUN_009f7a30(long param_1)

{
  FUN_009f7764((void *)(param_1 + -0x30));
  operator_delete((void *)(param_1 + -0x30));
  return;
}




undefined1 FUN_009f7a58(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c9);
}




void FUN_009f7a60(long param_1)

{
  if (*(char *)(param_1 + 0x1c9) != '\0') {
    return;
  }
  FUN_009f73b4();
  return;
}




void FUN_009f7a70(long param_1)

{
  *(undefined1 *)(param_1 + 0x1c9) = 0;
  return;
}




void FUN_009f7a78(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x1ca) == '\0') {
    bVar1 = true;
  }
  else {
    lVar2 = FUN_00940c1c();
    bVar1 = *(char *)(lVar2 + 9) != '\0';
  }
  FUN_00915f90(bVar1);
  *(undefined1 *)(param_1 + 0x1ca) = 1;
  return;
}




void FUN_009f7ac0(void)

{
  FUN_00936760(FUN_009f7ad4,FUN_009f7ad8);
  return;
}




void FUN_009f7ad4(void)

{
  return;
}




void FUN_009f7ad8(void)

{
  return;
}




long FUN_009f7adc(long param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 local_78;
  void *local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar2 = *param_2;
  uVar7 = *(ulong *)(param_2 + 8);
  uVar8 = (ulong)(bVar2 >> 1);
  uVar1 = uVar8;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar7;
  }
  if (uVar1 == 0x10) {
    iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"reserved_friends",0x10);
    if (iVar4 == 0) {
      FUN_00e70510(&local_78);
      FUN_00e70960(&local_78);
      local_68 = 0;
      local_64 = 0;
      local_50 = 0;
      local_48 = 0;
      local_60 = 0;
      local_58 = 0;
      local_40 = 0;
      FUN_009580b8();
      uVar6 = FUN_0095fdf0();
      FUN_00910394(&local_78,uVar6);
      local_68 = 0xffffffff;
      local_64 = 1;
      local_60 = local_60 & 0xffffffff00000000;
      uVar6 = FUN_00a07558();
      lVar5 = FUN_00a0766c(uVar6,0);
      local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(lVar5 + 0x1c));
      uVar6 = FUN_00a07558();
      lVar5 = FUN_00a0766c(uVar6,0);
      local_58 = CONCAT44(*(undefined4 *)(lVar5 + 4),(undefined4)local_58);
      uVar6 = FUN_00a07558();
      lVar5 = FUN_00a0766c(uVar6,1);
      local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(lVar5 + 0x1c));
      uVar6 = FUN_00a07558();
      lVar5 = FUN_00a0766c(uVar6,1);
      local_50 = CONCAT44(*(undefined4 *)(lVar5 + 4),(undefined4)local_50);
      uVar6 = FUN_00a07558();
      lVar5 = FUN_00a0766c(uVar6,2);
      local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)(lVar5 + 0x1c));
      lVar5 = FUN_009580b8();
      local_40 = *(undefined4 *)(lVar5 + 0x5614);
      param_1 = param_1 + 0x90;
      local_60 = CONCAT44(0xbf800000,(undefined4)local_60);
      FUN_009f7d1c(param_1,&local_78);
      FUN_009f7dd0(param_1);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
        local_78 = 0;
        local_70 = (void *)0x0;
      }
      goto LAB_009f7cf0;
    }
    bVar2 = *param_2;
    uVar7 = *(ulong *)(param_2 + 8);
    uVar8 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar8;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar7;
  }
  if (uVar1 == 0xe) {
    iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"reserved_guild",0xe);
    if (iVar4 == 0) {
      param_1 = param_1 + 0xf0;
      goto LAB_009f7cf0;
    }
    bVar2 = *param_2;
    uVar7 = *(ulong *)(param_2 + 8);
    uVar8 = (ulong)(bVar2 >> 1);
  }
  if ((bVar2 & 1) != 0) {
    uVar8 = uVar7;
  }
  if ((uVar8 == 0x18) &&
     (iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"reserved_vainglorious100",0x18), iVar4 == 0
     )) {
    param_1 = param_1 + 0x150;
  }
  else {
    lVar5 = FUN_009f8f6c(param_1 + 0x78,param_2);
    if (param_1 + 0x80 == lVar5) {
      param_1 = 0;
    }
    else {
      param_1 = *(long *)(lVar5 + 0x38);
    }
  }
LAB_009f7cf0:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_009f7d1c(long param_1,long param_2)

{
  ulong uVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = (uint *)(param_1 + 0x18);
  if (*puVar2 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar1 = FUN_00e70b34(*(long *)(param_1 + 0x20) + lVar3,param_2);
      if ((uVar1 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 0x20) + lVar3;
        FUN_00910394(lVar3,param_2);
        uVar5 = *(undefined8 *)(param_2 + 0x2c);
        *(undefined8 *)(lVar3 + 0x34) = *(undefined8 *)(param_2 + 0x34);
        *(undefined8 *)(lVar3 + 0x2c) = uVar5;
        uVar5 = *(undefined8 *)(param_2 + 0x20);
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(lVar3 + 0x20) = uVar5;
        uVar5 = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(lVar3 + 0x10) = uVar5;
        return;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x40;
    } while (uVar4 < *puVar2);
  }
  FUN_009f86f8(puVar2,param_2);
  return;
}




void FUN_009f7dd0(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  code *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0:
    uVar3 = (ulong)*(uint *)(param_1 + 0x18);
    local_40 = FUN_009f8a98;
    break;
  case 1:
    uVar3 = (ulong)*(uint *)(param_1 + 0x18);
    local_40 = FUN_009f8aac;
    break;
  case 2:
    uVar3 = (ulong)*(uint *)(param_1 + 0x18);
    local_40 = FUN_009f8ac0;
    break;
  case 3:
    uVar3 = (ulong)*(uint *)(param_1 + 0x18);
    local_40 = FUN_009f8ad4;
    break;
  default:
    goto switchD_009f7e10_default;
  }
  FUN_009f93a8(*(long *)(param_1 + 0x20),*(long *)(param_1 + 0x20) + uVar3 * 0x40,&local_40);
switchD_009f7e10_default:
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    uVar3 = 0;
    puVar4 = (undefined4 *)(*(long *)(param_1 + 0x20) + 0x10);
    do {
      uVar3 = uVar3 + 1;
      *puVar4 = (int)uVar3;
      puVar4 = puVar4 + 0x10;
    } while (uVar3 < uVar1);
  }
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_009f7ed4(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  
  lVar2 = tpidr_el0;
  lStack_78 = *(long *)(lVar2 + 0x28);
  lVar4 = param_1;
  if (*(char *)(param_1 + 0x1c8) == '\0') {
    uVar3 = FUN_00e84e74(param_1 + 0x40);
    if ((uVar3 & 1) == 0) goto LAB_009f806c;
    uVar3 = FUN_00e84e5c(param_1 + 0x40);
    lVar4 = DAT_031308b0;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(param_1 + 0x68) != 0) {
        puVar6 = *(undefined8 **)(param_1 + 0x70);
        do {
          lVar4 = FUN_009f8f6c(param_1 + 0x78,puVar6);
          if (param_1 + 0x80 == lVar4) {
            puVar5 = operator_new(0x60);
            *puVar5 = &PTR_FUN_027c5ba8;
            memset(puVar5 + 1,0,0x50);
            pcStack_88 = thunk_FUN_009f8694;
            puStack_90 = puVar5;
            FUN_00f02e98(0x3dcccccd,&puStack_90,0,1);
            FUN_009f80b0(puVar5,puVar6 + 3,*(undefined4 *)(puVar6 + 5));
            puStack_90 = puVar6;
            lVar4 = FUN_009f90d4(param_1 + 0x78,puVar6,&DAT_01b9dabc,&puStack_90,auStack_80);
            *(undefined8 **)(lVar4 + 0x38) = puVar5;
          }
          else {
            lVar4 = *(long *)(lVar4 + 0x38);
            uVar1 = *(uint *)(puVar6 + 5);
            FUN_009f9308(lVar4 + 0x18,puVar6 + 3);
            *(ulong *)(lVar4 + 0x50) = (ulong)uVar1;
            if (*(int *)(lVar4 + 8) != 0) {
              lVar7 = *(long *)(lVar4 + 0x10);
              do {
                if (*(code **)(lVar7 + 8) == (code *)0x0) {
                  (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x10));
                }
                else {
                  (**(code **)(lVar7 + 8))();
                }
                lVar7 = lVar7 + 0x20;
              } while (lVar7 != *(long *)(lVar4 + 0x10) + (ulong)*(uint *)(lVar4 + 8) * 0x20);
            }
          }
          puVar6 = puVar6 + 6;
        } while (puVar6 != (undefined8 *)
                           (*(long *)(param_1 + 0x70) + (ulong)*(uint *)(param_1 + 0x68) * 0x30));
      }
      FUN_009f817c(param_1 + 0x150);
      *(undefined1 *)(param_1 + 0x1c9) = 1;
      goto LAB_009f806c;
    }
  }
  FUN_009f73b4(lVar4);
LAB_009f806c:
  if (*(long *)(lVar2 + 0x28) != lStack_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009f7ed4(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *local_90;
  code *pcStack_88;
  undefined1 auStack_80 [8];
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar4 = param_1;
  if (*(char *)(param_1 + 0x1c8) == '\0') {
    uVar3 = FUN_00e84e74(param_1 + 0x40);
    if ((uVar3 & 1) == 0) goto LAB_009f806c;
    uVar3 = FUN_00e84e5c(param_1 + 0x40);
    lVar4 = DAT_031308b0;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(param_1 + 0x68) != 0) {
        puVar6 = *(undefined8 **)(param_1 + 0x70);
        do {
          lVar4 = FUN_009f8f6c(param_1 + 0x78,puVar6);
          if (param_1 + 0x80 == lVar4) {
            puVar5 = operator_new(0x60);
            *puVar5 = &PTR_FUN_027c5ba8;
            memset(puVar5 + 1,0,0x50);
            pcStack_88 = thunk_FUN_009f8694;
            local_90 = puVar5;
            FUN_00f02e98(0x3dcccccd,&local_90,0,1);
            FUN_009f80b0(puVar5,puVar6 + 3,*(undefined4 *)(puVar6 + 5));
            local_90 = puVar6;
            lVar4 = FUN_009f90d4(param_1 + 0x78,puVar6,&DAT_01b9dabc,&local_90,auStack_80);
            *(undefined8 **)(lVar4 + 0x38) = puVar5;
          }
          else {
            lVar4 = *(long *)(lVar4 + 0x38);
            uVar1 = *(uint *)(puVar6 + 5);
            FUN_009f9308(lVar4 + 0x18,puVar6 + 3);
            *(ulong *)(lVar4 + 0x50) = (ulong)uVar1;
            if (*(int *)(lVar4 + 8) != 0) {
              lVar7 = *(long *)(lVar4 + 0x10);
              do {
                if (*(code **)(lVar7 + 8) == (code *)0x0) {
                  (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x10));
                }
                else {
                  (**(code **)(lVar7 + 8))();
                }
                lVar7 = lVar7 + 0x20;
              } while (lVar7 != *(long *)(lVar4 + 0x10) + (ulong)*(uint *)(lVar4 + 8) * 0x20);
            }
          }
          puVar6 = puVar6 + 6;
        } while (puVar6 != (undefined8 *)
                           (*(long *)(param_1 + 0x70) + (ulong)*(uint *)(param_1 + 0x68) * 0x30));
      }
      FUN_009f817c(param_1 + 0x150);
      *(undefined1 *)(param_1 + 0x1c9) = 1;
      goto LAB_009f806c;
    }
  }
  FUN_009f73b4(lVar4);
LAB_009f806c:
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_009f7ed4(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  
  lVar2 = tpidr_el0;
  lStack_78 = *(long *)(lVar2 + 0x28);
  lVar4 = param_1;
  if (*(char *)(param_1 + 0x1c8) == '\0') {
    uVar3 = FUN_00e84e74(param_1 + 0x40);
    if ((uVar3 & 1) == 0) goto LAB_009f806c;
    uVar3 = FUN_00e84e5c(param_1 + 0x40);
    lVar4 = DAT_031308b0;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(param_1 + 0x68) != 0) {
        puVar6 = *(undefined8 **)(param_1 + 0x70);
        do {
          lVar4 = FUN_009f8f6c(param_1 + 0x78,puVar6);
          if (param_1 + 0x80 == lVar4) {
            puVar5 = operator_new(0x60);
            *puVar5 = &PTR_FUN_027c5ba8;
            memset(puVar5 + 1,0,0x50);
            pcStack_88 = thunk_FUN_009f8694;
            puStack_90 = puVar5;
            FUN_00f02e98(0x3dcccccd,&puStack_90,0,1);
            FUN_009f80b0(puVar5,puVar6 + 3,*(undefined4 *)(puVar6 + 5));
            puStack_90 = puVar6;
            lVar4 = FUN_009f90d4(param_1 + 0x78,puVar6,&DAT_01b9dabc,&puStack_90,auStack_80);
            *(undefined8 **)(lVar4 + 0x38) = puVar5;
          }
          else {
            lVar4 = *(long *)(lVar4 + 0x38);
            uVar1 = *(uint *)(puVar6 + 5);
            FUN_009f9308(lVar4 + 0x18,puVar6 + 3);
            *(ulong *)(lVar4 + 0x50) = (ulong)uVar1;
            if (*(int *)(lVar4 + 8) != 0) {
              lVar7 = *(long *)(lVar4 + 0x10);
              do {
                if (*(code **)(lVar7 + 8) == (code *)0x0) {
                  (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x10));
                }
                else {
                  (**(code **)(lVar7 + 8))();
                }
                lVar7 = lVar7 + 0x20;
              } while (lVar7 != *(long *)(lVar4 + 0x10) + (ulong)*(uint *)(lVar4 + 8) * 0x20);
            }
          }
          puVar6 = puVar6 + 6;
        } while (puVar6 != (undefined8 *)
                           (*(long *)(param_1 + 0x70) + (ulong)*(uint *)(param_1 + 0x68) * 0x30));
      }
      FUN_009f817c(param_1 + 0x150);
      *(undefined1 *)(param_1 + 0x1c9) = 1;
      goto LAB_009f806c;
    }
  }
  FUN_009f73b4(lVar4);
LAB_009f806c:
  if (*(long *)(lVar2 + 0x28) != lStack_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

