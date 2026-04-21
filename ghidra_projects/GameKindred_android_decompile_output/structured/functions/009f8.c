// functions/009f8 — 42 functions
#include "libGameKindred.h"




void FUN_009f80b0(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_009f9308(param_1 + 0x18);
  FUN_008fa54c(local_50,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_SCORE");
  FUN_008fce60(param_1 + 0x38,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_0096204c(param_1 + 0x28,param_1 + 0x38);
  *(ulong *)(param_1 + 0x50) = (ulong)param_3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f814c(long param_1,undefined8 param_2,uint param_3)

{
  FUN_009f9308(param_1 + 0x18);
  *(ulong *)(param_1 + 0x50) = (ulong)param_3;
  return;
}




void FUN_009f817c(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = DAT_031308b0;
  if ((*(int *)(param_1 + 0x70) == -1) && (uVar2 = *(uint *)(param_1 + 0x60), uVar2 != 0)) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      if (lVar3 != 0) {
        lVar1 = FUN_009f7adc(lVar3,*(long *)(param_1 + 0x68) + lVar4);
        if (lVar1 != 0) {
          *(int *)(param_1 + 0x70) = (int)uVar5;
          FUN_008fce60(param_1 + 0x38,*(long *)(param_1 + 0x30) + lVar4);
          break;
        }
        uVar2 = *(uint *)(param_1 + 0x60);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar5 < uVar2);
  }
  if (*(int *)(param_1 + 8) != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    do {
      if (*(code **)(lVar3 + 8) == (code *)0x0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x10));
      }
      else {
        (**(code **)(lVar3 + 8))();
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != *(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 8) * 0x20);
  }
  return;
}




void FUN_009f8248(long param_1)

{
  *(undefined1 *)(param_1 + 0x1c9) = 0;
  FUN_009f73b4();
  *(undefined1 *)(param_1 + 0x1ca) = 0;
  FUN_00955be0(param_1 + 0xa8,0);
  FUN_00955be0(param_1 + 0x108,0);
  return;
}




void FUN_009f8284(long param_1)

{
  FUN_009f8248(param_1 + -0x18);
  return;
}




void FUN_009f828c(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  void *__s1;
  char *__s2;
  long lVar9;
  ulong uVar10;
  undefined8 local_a8;
  void *local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar6 = FUN_009580b8();
  bVar2 = *(byte *)(param_2 + 0x180);
  bVar3 = *(byte *)(lVar6 + 0x5478);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x188);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(lVar6 + 0x5480);
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_2 + 400);
    __s2 = *(char **)(lVar6 + 0x5488);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_2 + 0x181);
    }
    if ((bVar3 & 1) == 0) {
      __s2 = (char *)(lVar6 + 0x5479);
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar8 = (char *)(param_2 + 0x181);
        lVar6 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar8 != *__s2) goto LAB_009f8458;
          pcVar8 = pcVar8 + 1;
          lVar6 = lVar6 + 1;
          __s2 = __s2 + 1;
        } while (lVar6 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_009f8458;
    FUN_00955be0(param_1 + 0x108,0);
    if (*(int *)(param_2 + 0x1d8) != 0) {
      lVar6 = 0;
      uVar10 = 0;
      do {
        lVar9 = *(long *)(param_2 + 0x1e0);
        FUN_00e70510(&local_a8);
        FUN_00e70960(&local_a8);
        lVar9 = lVar9 + lVar6;
        local_98 = 0;
        local_94 = 0;
        local_70 = 0;
        uStack_88 = 0;
        local_90 = 0;
        local_78 = 0;
        local_80 = 0;
        FUN_00910394(&local_a8,lVar9 + 0x18);
        local_98 = 0xffffffff;
        local_94 = 1;
        uStack_88 = CONCAT44(*(undefined4 *)(lVar9 + 0x70),*(undefined4 *)(lVar9 + 0x8c));
        local_80 = CONCAT44(*(undefined4 *)(lVar9 + 0xa0),*(undefined4 *)(lVar9 + 0xbc));
        local_78 = CONCAT44(*(undefined4 *)(lVar9 + 0xd0),*(undefined4 *)(lVar9 + 0xec));
        local_70 = *(undefined4 *)(lVar9 + 0x68);
        local_90 = 0xbf80000000000000;
        FUN_009f7d1c(param_1 + 0xf0,&local_a8);
        if (local_a0 != (void *)0x0) {
          operator_delete__(local_a0);
          local_a8 = 0;
          local_a0 = (void *)0x0;
        }
        uVar10 = uVar10 + 1;
        lVar6 = lVar6 + 0x108;
      } while (uVar10 < *(uint *)(param_2 + 0x1d8));
    }
    FUN_009f7dd0(param_1 + 0xf0);
    uVar7 = FUN_00e85318(0);
    *(undefined8 *)(param_1 + 0x140) = uVar7;
  }
LAB_009f8458:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009f848c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}




void FUN_009f8494(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 local_a8;
  void *local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00915ff4();
  if (iVar2 != 0) {
    uVar6 = 0;
    do {
      lVar4 = FUN_00916004(uVar6);
      FUN_00e70510(&local_a8);
      FUN_00e70960(&local_a8);
      local_98 = 0;
      local_94 = 0;
      local_70 = 0;
      uStack_88 = 0;
      local_90 = 0;
      local_78 = 0;
      local_80 = 0;
      FUN_00910394(&local_a8,lVar4 + 0x20);
      local_98 = 0xffffffff;
      local_94 = 1;
      local_90 = 0xbf80000000000000;
      uStack_88 = CONCAT44(*(undefined4 *)(lVar4 + 0xb8),*(undefined4 *)(lVar4 + 0xd4));
      local_80 = CONCAT44(*(undefined4 *)(lVar4 + 0xe8),*(undefined4 *)(lVar4 + 0x104));
      local_78 = CONCAT44(*(undefined4 *)(lVar4 + 0x118),*(undefined4 *)(lVar4 + 0x134));
      local_70 = *(undefined4 *)(lVar4 + 0xb0);
      FUN_009f7d1c(param_1 + 0x90,&local_a8);
      if (local_a0 != (void *)0x0) {
        operator_delete__(local_a0);
        local_a8 = 0;
        local_a0 = (void *)0x0;
      }
      uVar6 = uVar6 + 1;
      uVar3 = FUN_00915ff4();
    } while (uVar6 < uVar3);
  }
  FUN_009f7dd0(param_1 + 0x90);
  uVar5 = FUN_00e85318(0);
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009f85e4(long param_1)

{
  FUN_009f8494(param_1 + -0x30);
  return;
}




void FUN_009f85ec(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027c5ba8;
  memset(param_1 + 1,0,0x50);
  pcStack_30 = thunk_FUN_009f8694;
  local_38 = param_1;
  FUN_00f02e98(0x3dcccccd,&local_38,0,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f8670(void *param_1)

{
  FUN_009f7934();
  operator_delete(param_1);
  return;
}




void FUN_009f8694(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    if (*(int *)(param_1 + 8) != 0) {
      lVar1 = *(long *)(param_1 + 0x10);
      do {
        if (*(code **)(lVar1 + 8) == (code *)0x0) {
          (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
        }
        else {
          (**(code **)(lVar1 + 8))();
        }
        lVar1 = lVar1 + 0x20;
      } while (lVar1 != *(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 8) * 0x20);
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}




void FUN_009f86f8(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00955af8(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x40;
  thunk_FUN_00e7051c(lVar1 + -0x40,param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(lVar1 + -0xc) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(lVar1 + -0x14) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar1 + -0x18) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(lVar1 + -0x28) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar1 + -0x30) = uVar5;
  return;
}




void FUN_009f879c(undefined8 *param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_008fa54c(local_40,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_5V5");
  FUN_0096204c(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_3V3");
  FUN_0096204c(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_BLITZ");
  FUN_0096204c(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_WINS");
  FUN_0096204c(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009f8894(long param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  bVar2 = *param_2;
  uVar5 = *(ulong *)(param_2 + 8);
  uVar6 = (ulong)(bVar2 >> 1);
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 0x2c) {
    iVar3 = FUN_0090d610(param_2,0,0xffffffffffffffff,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_5V5"
                         ,0x2c);
    if (iVar3 == 0) {
      uVar4 = 0;
      goto LAB_009f89d4;
    }
    bVar2 = *param_2;
    uVar5 = *(ulong *)(param_2 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 0x2c) {
    iVar3 = FUN_0090d610(param_2,0,0xffffffffffffffff,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_3V3"
                         ,0x2c);
    if (iVar3 == 0) {
      uVar4 = 1;
      goto LAB_009f89d4;
    }
    bVar2 = *param_2;
    uVar5 = *(ulong *)(param_2 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 0x2e) {
    iVar3 = FUN_0090d610(param_2,0,0xffffffffffffffff,
                         "MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_BLITZ",0x2e);
    if (iVar3 == 0) {
      uVar4 = 2;
      goto LAB_009f89d4;
    }
    bVar2 = *param_2;
    uVar5 = *(ulong *)(param_2 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  if ((bVar2 & 1) != 0) {
    uVar6 = uVar5;
  }
  if (uVar6 != 0x2d) {
    return 0;
  }
  iVar3 = FUN_0090d610(param_2,0,0xffffffffffffffff,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_WINS",
                       0x2d);
  if (iVar3 != 0) {
    return 0;
  }
  uVar4 = 3;
LAB_009f89d4:
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  FUN_008fce60(param_1 + 0x38,param_2);
  return 1;
}




void FUN_009f89f4(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined1 auStack_48 [8];
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x18))(auStack_48);
  FUN_008fcdb8(param_1,local_40 + (ulong)*(uint *)((long)param_2 + 0x5c) * 0x18);
  FUN_00951534(auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_009f8a78(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e70d10(param_1,param_2,1,0xffffffff);
  return uVar1 >> 0x1f & 1;
}




bool FUN_009f8a98(long param_1,long param_2)

{
  return *(float *)(param_2 + 0x20) < *(float *)(param_1 + 0x20);
}




bool FUN_009f8aac(long param_1,long param_2)

{
  return *(float *)(param_2 + 0x28) < *(float *)(param_1 + 0x28);
}




bool FUN_009f8ac0(long param_1,long param_2)

{
  return *(float *)(param_2 + 0x30) < *(float *)(param_1 + 0x30);
}




bool FUN_009f8ad4(long param_1,long param_2)

{
  return *(int *)(param_2 + 0x38) < *(int *)(param_1 + 0x38);
}




void FUN_009f8ae8(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027c5ba8;
  memset(param_1 + 1,0,0x50);
  pcStack_30 = thunk_FUN_009f8694;
  local_38 = param_1;
  FUN_00f02e98(0x3dcccccd,&local_38,0,1);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *param_1 = &PTR_FUN_027c5c00;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_009f8b88(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = DAT_031308b0;
  if (((DAT_031308b0 == 0) || ((int)*(uint *)(param_1 + 0x70) < 0)) ||
     (lVar2 = FUN_009f7adc(DAT_031308b0,
                           *(long *)(param_1 + 0x68) + (ulong)*(uint *)(param_1 + 0x70) * 0x18),
     lVar2 == 0)) {
    param_1 = param_1 + 0x18;
  }
  else {
    plVar3 = (long *)FUN_009f7adc(lVar1,*(long *)(param_1 + 0x68) +
                                        (ulong)*(uint *)(param_1 + 0x70) * 0x18);
    param_1 = (**(code **)(*plVar3 + 0x10))();
  }
  return param_1;
}




void FUN_009f8bfc(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      if ((DAT_031308b0 != 0) &&
         (lVar1 = FUN_009f7adc(DAT_031308b0,*(long *)(param_1 + 0x68) + lVar3), lVar1 != 0)) {
        plVar2 = (long *)FUN_009f7adc(DAT_031308b0,*(long *)(param_1 + 0x68) + lVar3);
        (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < *(uint *)(param_1 + 0x60));
  }
  return;
}




void FUN_009f8c8c(undefined8 param_1,long param_2)

{
  FUN_00951160(param_1,param_2 + 0x28);
  return;
}




undefined8 FUN_009f8c98(long param_1,byte *param_2)

{
  size_t sVar1;
  ulong uVar2;
  size_t __n;
  byte *__s1;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  size_t sVar7;
  int iVar8;
  byte *__s2;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  
  uVar3 = *(uint *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  if (uVar3 != 0) {
    bVar4 = *param_2;
    __n = *(size_t *)(param_2 + 8);
    __s1 = *(byte **)(param_2 + 0x10);
    lVar11 = *(long *)(param_1 + 0x30);
    uVar10 = 0;
    if ((bVar4 & 1) == 0) {
      __s1 = param_2 + 1;
      __n = (ulong)(bVar4 >> 1);
    }
    do {
      pbVar9 = (byte *)(lVar11 + uVar10 * 0x18);
      bVar5 = *pbVar9;
      uVar2 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar2 = *(ulong *)(pbVar9 + 8);
      }
      if (__n == uVar2) {
        __s2 = *(byte **)(lVar11 + uVar10 * 0x18 + 0x10);
        if ((bVar5 & 1) == 0) {
          __s2 = pbVar9 + 1;
        }
        sVar1 = -(ulong)(bVar4 >> 1);
        pbVar6 = param_2;
        sVar7 = __n;
        if ((bVar4 & 1) == 0) {
          while( true ) {
            if (sVar7 == 0) goto LAB_009f8d88;
            if (pbVar6[1] != *__s2) break;
            sVar1 = sVar1 + 1;
            __s2 = __s2 + 1;
            pbVar6 = pbVar6 + 1;
            sVar7 = sVar1;
          }
        }
        else if ((__n == 0) || (iVar8 = memcmp(__s1,__s2,__n), iVar8 == 0)) {
LAB_009f8d88:
          *(int *)(param_1 + 0x70) = (int)uVar10;
          FUN_008fce60(param_1 + 0x38,pbVar9);
          return 1;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar3);
  }
  return 0;
}




undefined8 FUN_009f8dbc(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  lVar1 = DAT_031308b0;
  if (((DAT_031308b0 != 0) && (-1 < (int)*(uint *)(param_1 + 0x70))) &&
     (lVar2 = FUN_009f7adc(DAT_031308b0,
                           *(long *)(param_1 + 0x68) + (ulong)*(uint *)(param_1 + 0x70) * 0x18),
     lVar2 != 0)) {
    plVar3 = (long *)FUN_009f7adc(lVar1,*(long *)(param_1 + 0x68) +
                                        (ulong)*(uint *)(param_1 + 0x70) * 0x18);
                    /* WARNING: Could not recover jumptable at 0x009f8e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*plVar3 + 0x38))();
    return uVar4;
  }
  return 0;
}




void FUN_009f8e34(void *param_1)

{
  FUN_009f7934();
  operator_delete(param_1);
  return;
}




long FUN_009f8e58(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_009f8e60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}




void FUN_009f8e68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c5c00;
  FUN_00951534(param_1 + 0xc,1);
  FUN_009f7934(param_1);
  operator_delete(param_1);
  return;
}




void FUN_009f8ea8(undefined8 param_1,long param_2)

{
  if (-1 < (int)*(uint *)(param_2 + 0x70)) {
    FUN_008fcdb8(param_1,*(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x70) * 0x18);
    return;
  }
  FUN_008fa54c(param_1,&DAT_01e277f2);
  return;
}




void FUN_009f8ed4(long param_1)

{
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}




void FUN_009f8ee0(void)

{
  return;
}




void FUN_009f8ee4(void)

{
  return;
}




void FUN_009f8ee8(void)

{
  return;
}




void FUN_009f8eec(undefined8 param_1,long param_2)

{
  FUN_00951160(param_1,param_2 + 0x28);
  return;
}




void FUN_009f8ef8(undefined8 param_1,long param_2)

{
  FUN_008fcdb8(param_1,param_2 + 0x38);
  return;
}




undefined8 FUN_009f8f04(void)

{
  return 0;
}




void FUN_009f8f0c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_009f8f0c(param_1,*param_2);
    FUN_009f8f0c(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      operator_delete((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




undefined8 * FUN_009f8f6c(long param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  byte *__s1;
  void *__s2;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(param_1 + 8);
  puVar6 = (undefined8 *)FUN_009f9024(param_1,param_2,*puVar7,puVar7);
  if (puVar7 != puVar6) {
    bVar3 = *(byte *)(puVar6 + 4);
    bVar4 = *param_2;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = puVar6[5];
    }
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 8);
    }
    __n = uVar1;
    if (uVar2 <= uVar1) {
      __n = uVar2;
    }
    if (__n != 0) {
      __s1 = *(byte **)(param_2 + 0x10);
      __s2 = (void *)puVar6[6];
      if ((bVar4 & 1) == 0) {
        __s1 = param_2 + 1;
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (void *)((long)puVar6 + 0x21);
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 != 0) {
        if (iVar5 < 0) {
          return puVar7;
        }
        return puVar6;
      }
    }
    if (uVar1 <= uVar2) {
      return puVar6;
    }
  }
  return puVar7;
}




void thunk_FUN_009f8694(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    if (*(int *)(param_1 + 8) != 0) {
      lVar1 = *(long *)(param_1 + 0x10);
      do {
        if (*(code **)(lVar1 + 8) == (code *)0x0) {
          (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
        }
        else {
          (**(code **)(lVar1 + 8))();
        }
        lVar1 = lVar1 + 0x20;
      } while (lVar1 != *(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 8) * 0x20);
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}

