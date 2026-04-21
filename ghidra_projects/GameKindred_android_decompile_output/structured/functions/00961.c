// functions/00961 — 31 functions
#include "libGameKindred.h"




void FUN_00961014(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  byte abStack_4b0 [16];
  undefined8 uStack_4a0;
  byte abStack_498 [16];
  undefined8 auStack_488 [3];
  undefined8 local_470 [3];
  undefined8 auStack_458 [125];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00e80f6c();
  if ((uVar4 & 1) != 0) {
    uVar4 = FUN_00e84e4c(param_1 + 0x2e00);
    if ((uVar4 & 1) == 0) {
      lVar5 = 0;
      do {
        lVar1 = lVar5 + 0x40;
        *(undefined8 *)((long)auStack_458 + lVar5) = 0;
        *(undefined8 *)((long)local_470 + lVar5 + 0x10) = 0;
        *(undefined8 *)((long)auStack_458 + lVar5 + 0x10) = 0;
        *(undefined8 *)((long)auStack_458 + lVar5 + 8) = 0;
        *(undefined8 *)((long)local_470 + lVar5 + 8) = 0;
        *(undefined8 *)((long)local_470 + lVar5) = 0;
        lVar5 = lVar1;
      } while (lVar1 != 0x400);
      FUN_00943b58(local_470);
      lVar5 = 0;
      do {
        FUN_008fce60(param_1 + 0x2e60 + lVar5,(long)local_470 + lVar5);
        FUN_008fce60(param_1 + 0x2e78 + lVar5,(long)auStack_458 + lVar5);
        lVar3 = lVar5 + 0x20;
        uVar6 = *(undefined8 *)((long)auStack_458 + lVar5 + 0x18);
        lVar1 = param_1 + lVar5;
        lVar5 = lVar5 + 0x40;
        *(undefined8 *)(lVar1 + 0x2e98) = *(undefined8 *)((long)auStack_458 + lVar3);
        *(undefined8 *)(lVar1 + 0x2e90) = uVar6;
      } while (lVar5 != 0x400);
      FUN_008fce60(param_1 + 0x2e30,param_2);
      FUN_008fce60(param_1 + 0x2e48,param_3);
      FUN_008fce60(param_1 + 0x54a8,param_2);
      FUN_00e81b20(param_1 + 0x2e00);
      lVar5 = 0x400;
      do {
        if ((abStack_498[lVar5] & 1) != 0) {
          operator_delete(*(void **)((long)auStack_488 + lVar5));
        }
        if ((abStack_4b0[lVar5] & 1) != 0) {
          operator_delete(*(void **)((long)&uStack_4a0 + lVar5));
        }
        lVar5 = lVar5 + -0x40;
      } while (lVar5 != 0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00961184(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  byte abStack_4b0 [16];
  undefined8 uStack_4a0;
  byte abStack_498 [16];
  long local_488 [3];
  undefined8 local_470 [3];
  undefined8 auStack_458 [125];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00e80f6c();
  if ((uVar4 & 1) != 0) {
    uVar4 = FUN_00e84e4c(param_1 + 0x1e60);
    if ((uVar4 & 1) == 0) {
      lVar5 = 0;
      do {
        lVar1 = lVar5 + 0x40;
        *(undefined8 *)((long)auStack_458 + lVar5) = 0;
        *(undefined8 *)((long)local_470 + lVar5 + 0x10) = 0;
        *(undefined8 *)((long)auStack_458 + lVar5 + 0x10) = 0;
        *(undefined8 *)((long)auStack_458 + lVar5 + 8) = 0;
        *(undefined8 *)((long)local_470 + lVar5 + 8) = 0;
        *(undefined8 *)((long)local_470 + lVar5) = 0;
        lVar5 = lVar1;
      } while (lVar1 != 0x400);
      local_488[0] = param_1 + 0x1e60;
      local_488[1] = param_5;
      local_488[2] = param_4;
      FUN_00943b58(local_470);
      lVar5 = 0;
      do {
        FUN_008fce60(param_1 + 0x1ee8 + lVar5,(long)local_470 + lVar5);
        FUN_008fce60(param_1 + 0x1f00 + lVar5,(long)auStack_458 + lVar5);
        uVar6 = *(undefined8 *)((long)auStack_458 + lVar5 + 0x18);
        puVar2 = (undefined8 *)(param_1 + 0x1f18 + lVar5);
        puVar2[1] = *(undefined8 *)((long)auStack_458 + lVar5 + 0x20);
        *puVar2 = uVar6;
        lVar5 = lVar5 + 0x40;
      } while (lVar5 != 0x400);
      FUN_008fce60(param_1 + 0x1e98,param_3);
      FUN_009653b0(param_1 + 0x1e88,param_2);
      lVar5 = local_488[2];
      FUN_008fce60(param_1 + 0x1eb8,local_488[2]);
      FUN_008fce60(param_1 + 0x1ed0,local_488[1]);
      FUN_008fce60(param_1 + 0x54a8,lVar5);
      FUN_00e81b54(local_488[0]);
      lVar5 = 0x400;
      do {
        if ((abStack_498[lVar5] & 1) != 0) {
          operator_delete(*(void **)((long)local_488 + lVar5));
        }
        if ((abStack_4b0[lVar5] & 1) != 0) {
          operator_delete(*(void **)((long)&uStack_4a0 + lVar5));
        }
        lVar5 = lVar5 + -0x40;
      } while (lVar5 != 0);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0096132c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e80f6c();
  uVar2 = 0;
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_00e84e4c(param_1 + 0x3650);
    uVar2 = 0;
    if ((uVar1 & 1) == 0) {
      FUN_00e8270c(param_1 + 0x3650);
      uVar2 = 1;
    }
  }
  return uVar2;
}




undefined8 FUN_00961380(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e80f6c();
  uVar2 = 0;
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_00e84e4c(param_1 + 14000);
    uVar2 = 0;
    if ((uVar1 & 1) == 0) {
      FUN_00e82740(param_2,param_1 + 14000);
      uVar2 = 1;
    }
  }
  return uVar2;
}




void FUN_009613dc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    FUN_00e82778(param_2,param_1 + 0x3710);
    return;
  }
  return;
}




void FUN_0096141c(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    FUN_00e81774(param_2 & 1,param_1 + 0x34e0);
    return;
  }
  return;
}




void FUN_0096145c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    FUN_00e82210(param_1 + 0x3800);
    return;
  }
  return;
}




void FUN_00961494(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_00e84e4c(param_1 + 0x3580);
    if ((uVar1 & 1) == 0) {
      FUN_00e822e0(param_2,param_3,param_1 + 0x3580);
      return;
    }
  }
  return;
}




void FUN_009614f8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e80f6c();
  if ((uVar2 & 1) != 0) {
    FUN_00ec52d8(local_50);
    FUN_00e82378(param_2,local_50,param_1 + 0x35f8);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0096157c(long param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    FUN_00e8249c(param_2,param_3,param_1 + 0x4e90);
    return;
  }
  return;
}




void FUN_009615d0(long param_1)

{
  long lVar1;
  ulong uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0093dbe8();
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_00e80f6c(), (uVar2 & 1) != 0)) {
    FUN_008fa54c(local_40,PTR_s_Achievement_Tutorial_Initiation__02be3100);
    FUN_00e824d8(local_40,param_1 + 0x4ef0);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
    FUN_008fa54c(local_40,PTR_s_Achievement_Tutorial_GoldRush_St_02be3108);
    FUN_00e824d8(local_40,param_1 + 0x4f20);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00961684(ulong param_1)

{
  long lVar1;
  uint uVar2;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  timespec local_48;
  long local_38;
  ulong uVar3;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  dVar6 = 0.0;
  dVar7 = *(double *)(param_1 + 0x55d0);
  uVar3 = param_1;
  if (0.0 < dVar7) {
    uVar2 = clock_gettime(1,&local_48);
    uVar3 = (ulong)uVar2;
    lVar5 = local_48.tv_nsec - *(long *)(param_1 + 0x5558);
    lVar4 = local_48.tv_sec - *(long *)(param_1 + 0x5550);
    if (lVar5 < 0) {
      lVar4 = lVar4 + -1;
      lVar5 = (local_48.tv_nsec + 1000000000) - *(long *)(param_1 + 0x5558);
    }
    dVar6 = dVar7 + (double)(lVar5 + lVar4 * 1000000000) * -1e-09;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar6,uVar3);
}




void FUN_0096173c(undefined8 param_1,undefined8 param_2)

{
  FUN_00cc8184(param_2);
  return;
}




void FUN_00961744(undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  FUN_00961758(param_1,pbVar1);
  return;
}




undefined4 FUN_00961758(long param_1,char *param_2)

{
  int iVar1;
  char *__s1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_2 != (char *)0x0) {
    iVar1 = strcmp(param_2,"");
    if (iVar1 == 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x53a8) != 0) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        lVar2 = *(long *)(param_1 + 0x53b0);
        if ((*(byte *)(lVar2 + lVar3) & 1) == 0) {
          __s1 = (char *)(lVar2 + lVar3 + 1);
        }
        else {
          __s1 = *(char **)(lVar2 + lVar3 + 0x10);
        }
        iVar1 = strcmp(__s1,param_2);
        if (iVar1 == 0) {
          return 1;
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x18;
      } while (uVar4 < *(uint *)(param_1 + 0x53a8));
    }
  }
  return 0;
}




undefined8 FUN_00961804(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0093dbe8();
  if (((uVar1 & 1) == 0) &&
     (((param_3 & 1) != 0 ||
      ((uVar1 = FUN_0093dbe8(), (uVar1 & 1) == 0 && (*(char *)(param_1 + 0x5680) == '\0')))))) {
    uVar2 = FUN_00961758(param_1,param_2);
    return uVar2;
  }
  return 1;
}




undefined8 FUN_0096186c(long param_1,char *param_2)

{
  int iVar1;
  char *__s1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(uint *)(param_1 + 0x53b8) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x53c0);
      if ((*(byte *)(lVar2 + lVar3) & 1) == 0) {
        __s1 = (char *)(lVar2 + lVar3 + 1);
      }
      else {
        __s1 = *(char **)(lVar2 + lVar3 + 0x10);
      }
      iVar1 = strcmp(__s1,param_2);
      if (iVar1 == 0) {
        return 1;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < *(uint *)(param_1 + 0x53b8));
  }
  return 0;
}




int FUN_00961900(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(uint *)(param_1 + 0x53a8) == 0) {
    iVar3 = 0;
  }
  else {
    lVar4 = 0;
    uVar5 = 0;
    iVar3 = 0;
    do {
      lVar2 = FUN_00cc8184(*(long *)(param_1 + 0x53b0) + lVar4);
      if (lVar2 != 0) {
        uVar1 = FUN_00cc9850(lVar2,1);
        iVar3 = iVar3 + (uVar1 & 1);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar5 < *(uint *)(param_1 + 0x53a8));
  }
  return iVar3;
}




void FUN_00961988(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined **local_a8 [5];
  ulong local_80;
  undefined8 local_78;
  void *local_70;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00961a78(param_1,param_2 & 1);
  if ((uVar2 & 1) != 0) {
    FUN_00e84dac(local_a8);
    local_a8[0] = &PTR_FUN_027b99b0;
    local_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    FUN_00e82548(~param_2 & 1,local_a8);
    uVar3 = FUN_00e6b5e4();
    if ((~param_2 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x55b0) = uVar3;
      FUN_0093b150();
    }
    else {
      *(undefined8 *)(param_1 + 0x55b8) = uVar3;
      FUN_0093b670();
    }
    FUN_00904794(param_2 & 1);
    local_a8[0] = &PTR_FUN_027b99b0;
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    FUN_00e84dd8(local_a8);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00961a78(long param_1,byte param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x55b0) == 0) {
    lVar3 = FUN_0093b280();
    *(long *)(param_1 + 0x55b0) = lVar3;
  }
  if (*(long *)(param_1 + 0x55b8) == 0) {
    lVar3 = FUN_0093b7a0();
    *(long *)(param_1 + 0x55b8) = lVar3;
  }
  plVar2 = (long *)(param_1 + 0x55b0);
  if ((param_2 & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x55b8);
  }
  lVar4 = *plVar2;
  lVar3 = FUN_00e6b5e4();
  bVar1 = (bool)(0xe10 < lVar3 - lVar4 & param_2);
  if ((param_2 & 1) == 0) {
    bVar1 = 0x4b0 < lVar3 - lVar4;
  }
  return bVar1;
}




bool FUN_00961b00(long param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (*(char *)(param_1 + 0x5681) == '\0') {
    bVar2 = *param_2;
    uVar5 = *(ulong *)(param_2 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
    uVar1 = uVar6;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar5;
    }
    if (uVar1 == 0x16) {
      iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"practice_solo_practice",0x16);
      if (iVar4 == 0) goto LAB_00961b1c;
      bVar2 = *param_2;
      uVar5 = *(ulong *)(param_2 + 8);
      uVar6 = (ulong)(bVar2 >> 1);
    }
    uVar1 = uVar6;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar5;
    }
    if (uVar1 == 0x16) {
      iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"single_player_practice",0x16);
      if (iVar4 == 0) goto LAB_00961b1c;
      bVar2 = *param_2;
      uVar5 = *(ulong *)(param_2 + 8);
      uVar6 = (ulong)(bVar2 >> 1);
    }
    uVar1 = uVar6;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar5;
    }
    if (uVar1 == 0x12) {
      iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"standard_bots_solo",0x12);
      if (iVar4 == 0) goto LAB_00961b1c;
      bVar2 = *param_2;
      uVar5 = *(ulong *)(param_2 + 8);
      uVar6 = (ulong)(bVar2 >> 1);
    }
    uVar1 = uVar6;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar5;
    }
    if (uVar1 == 9) {
      iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"solo_bots",9);
      if (iVar4 == 0) goto LAB_00961b1c;
      bVar2 = *param_2;
      uVar5 = *(ulong *)(param_2 + 8);
      uVar6 = (ulong)(bVar2 >> 1);
    }
    if ((bVar2 & 1) != 0) {
      uVar6 = uVar5;
    }
    bVar3 = false;
    if (uVar6 == 0x17) {
      iVar4 = FUN_0090d610(param_2,0,0xffffffffffffffff,"battle_royale_bots_solo",0x17);
      bVar3 = iVar4 == 0;
    }
  }
  else {
LAB_00961b1c:
    bVar3 = true;
  }
  return bVar3;
}




int FUN_00961c7c(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00940b98();
  lVar2 = *(long *)(lVar1 + 8);
  lVar1 = FUN_00e85318(0);
  return (int)((float)(long)(float)(lVar2 - lVar1) / 86400.0);
}




long FUN_00961ccc(void)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  lVar1 = FUN_00940b98();
  lVar2 = *(long *)(lVar1 + 8);
  lVar1 = FUN_00e85318(0);
  fVar3 = (float)(lVar2 - lVar1);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  return (long)fVar3;
}




void FUN_00961d08(undefined8 param_1,uint param_2)

{
  long lVar1;
  undefined **local_98 [5];
  ulong local_70;
  undefined8 local_68;
  void *local_60;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e84dac(local_98);
  local_98[0] = &PTR_FUN_027b99b0;
  local_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0;
  local_48 = 0;
  local_40 = (void *)0x0;
  local_50 = 0;
  FUN_00e82580(param_2 & 1,local_98);
  local_98[0] = &PTR_FUN_027b99b0;
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  FUN_00e84dd8(local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00961db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined **local_a8 [5];
  ulong local_80;
  undefined8 local_78;
  void *local_70;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00e84dac(local_a8);
  local_a8[0] = &PTR_FUN_027b99b0;
  local_78 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  FUN_00e82a9c(param_2,param_3,param_4,local_a8);
  local_a8[0] = &PTR_FUN_027b99b0;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  FUN_00e84dd8(local_a8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00961e78(undefined8 param_1,undefined8 param_2)

{
  FUN_00e8294c(param_2);
  return;
}




void FUN_00961e80(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    FUN_009653b0(param_1 + 0x2348,param_3);
    FUN_00e81848(param_2,param_1 + 0x2320);
    return;
  }
  return;
}




undefined8 FUN_00961ee4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x4f90);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_00e827e4(param_1 + 0x4f90);
  return uVar2;
}




undefined8 FUN_00961f24(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x4fd0);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_00e82818(param_2,param_3 & 1,param_1 + 0x4fd0);
  return uVar2;
}




undefined8 FUN_00961f80(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x5010);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_00e82858(param_1 + 0x5010);
  return uVar2;
}




undefined8 FUN_00961fc0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x5048);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_00e8288c(param_1 + 0x5048);
  return uVar2;
}

