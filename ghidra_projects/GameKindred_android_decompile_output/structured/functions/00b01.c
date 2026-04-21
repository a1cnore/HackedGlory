// functions/00b01 — 14 functions
#include "libGameKindred.h"




void FUN_00b0108c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  code *local_88;
  long *plStack_80;
  void *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027db428;
  FUN_00af8b20(plVar1);
  plVar2 = param_1 + 0x87;
  FUN_00b08d84(plVar2);
  FUN_00f017e8(param_1 + 0xd5);
  plVar3 = param_1 + 0xe6;
  param_1[0xd5] = (long)&PTR_FUN_027c1f80;
  FUN_00afbfb0(plVar3);
  memset(param_1 + 0x122,0,0x93);
  param_1[0x13a] = 0;
  param_1[0x139] = 0;
  param_1[0x138] = 0;
  param_1[0x137] = 0;
  *(undefined1 *)((long)param_1 + 0x9a3) = 0xff;
  param_1[0x136] = 0;
  param_1[0x135] = 0;
  FUN_008fa54c(param_1 + 0x13b,"IDLE_CLOSED");
  *(undefined1 *)(param_1 + 0x13f) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xd5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xffffffef;
  if ((*(float *)(param_1 + 0x1b) != 0.478) || (*(float *)((long)param_1 + 0xdc) != 0.4275)) {
    param_1[0x1b] = 0x3edae1483ef4bc6a;
    FUN_0091ada4(plVar1);
  }
  local_60 = DAT_03210c64;
  local_88 = thunk_FUN_00b01c64;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = (void *)0x0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 0x88,&local_88);
  FUN_00b09454(plVar2,0);
  FUN_00f13f08(0x44548000,0x44520000,plVar2);
  if ((*(float *)(param_1 + 0x91) != 0.5) || (*(float *)((long)param_1 + 0x48c) != 0.5)) {
    param_1[0x91] = 0x3f0000003f000000;
    FUN_0091ada4(plVar2);
  }
  FUN_00b0914c(plVar2,1);
  uVar5 = FUN_00d6eb50();
  uVar5 = FUN_00d6eb5c(uVar5,"*KindredMenuChestEffects*");
  FUN_00afc274(plVar3,uVar5);
  FUN_008fa54c(&local_88,"*KindredMenuRewardsChestBattered*");
  FUN_00b01318(param_1,&local_88);
  if (((ulong)local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  FUN_00b013a0(0xbf800000,param_1,param_1 + 0x13b);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b01c64(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_MENU_OPEN_CHEST");
  FUN_00f048e0(auStack_48,uVar2,param_1);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b01318(long param_1,byte *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  uVar2 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
  }
  if (uVar2 != 0) {
    uVar3 = FUN_00d6eb50();
    pbVar4 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar4 = param_2 + 1;
    }
    uVar3 = FUN_00d6eb5c(uVar3,pbVar4);
    lVar1 = param_1 + 0x88;
    *(undefined8 *)(param_1 + 0x9f0) = uVar3;
    FUN_00af8c84(lVar1);
    if (*(long *)(param_1 + 0x9f0) != 0) {
      FUN_00af9124(lVar1);
      FUN_00af9aa0(lVar1,"REWARD_CHEST");
      return;
    }
  }
  return;
}




void FUN_00b013a0(float param_1,long param_2,byte *param_3)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  size_t sVar3;
  byte *__s1;
  byte bVar4;
  int iVar5;
  long lVar6;
  char *__s2;
  undefined1 uVar7;
  byte *pbVar8;
  char *pcVar9;
  
  lVar6 = param_2 + 0x9d8;
  FUN_008fce60(lVar6);
  if (*(long *)(param_2 + 0x9f0) == 0) {
    return;
  }
  lVar1 = param_2 + 0x88;
  FUN_00af97f4(lVar1,1);
  FUN_00afa680(lVar1);
  uVar2 = (ulong)(*(byte *)(param_2 + 0x9d8) >> 1);
  if ((*(byte *)(param_2 + 0x9d8) & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 0x9e0);
  }
  if ((uVar2 == 6) && (iVar5 = FUN_0090d610(lVar6,0,0xffffffffffffffff,"RUMBLE",6), iVar5 == 0)) {
    FUN_00aa12a8(0x3f800000,
                 "build://Sounds/UI.assetbundle/ui_tutorial_frontend_chest_rumble_loop.mp3",0,0);
  }
  uVar2 = (ulong)(*(byte *)(param_2 + 0x9d8) >> 1);
  if ((*(byte *)(param_2 + 0x9d8) & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 0x9e0);
  }
  if ((uVar2 == 10) &&
     (iVar5 = FUN_0090d610(lVar6,0,0xffffffffffffffff,"IDLE_READY",10), iVar5 == 0)) {
    bVar4 = *(byte *)(param_2 + 0x958);
    __n = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      __n = *(size_t *)(param_2 + 0x960);
    }
    sVar3 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar3 = DAT_0320ffb0;
    }
    if (__n == sVar3) {
      pbVar8 = *(byte **)(param_2 + 0x968);
      __s1 = pbVar8;
      if ((bVar4 & 1) == 0) {
        __s1 = (byte *)(param_2 + 0x959);
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar4 & 1) == 0) {
        if (__n != 0) {
          pcVar9 = (char *)(param_2 + 0x959);
          lVar6 = -(ulong)(bVar4 >> 1);
          do {
            if (*pcVar9 != *__s2) goto LAB_00b0153c;
            pcVar9 = pcVar9 + 1;
            lVar6 = lVar6 + 1;
            __s2 = __s2 + 1;
          } while (lVar6 != 0);
        }
        return;
      }
      if (__n == 0) {
        return;
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 == 0) {
        return;
      }
    }
    else {
LAB_00b0153c:
      if ((bVar4 & 1) == 0) {
        pbVar8 = (byte *)(param_2 + 0x959);
      }
      else {
        pbVar8 = *(byte **)(param_2 + 0x968);
      }
    }
    if (param_1 <= 0.0) {
      param_1 = 1.0;
    }
    uVar7 = 1;
  }
  else {
    lVar6 = FUN_00b0272c(param_2,param_3);
    if (lVar6 == 0) {
      return;
    }
    pbVar8 = *(byte **)(param_3 + 0x10);
    uVar7 = *(undefined1 *)(lVar6 + 0x14);
    if ((*param_3 & 1) == 0) {
      pbVar8 = param_3 + 1;
    }
    if (param_1 <= 0.0) {
      param_1 = 1.0;
    }
  }
  FUN_00afa094(param_1,lVar1,pbVar8,uVar7,0);
  return;
}




void FUN_00b015a0(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long lVar8;
  void *__s1;
  byte *__s2;
  byte local_d0 [16];
  void *local_c0;
  byte local_b8;
  void *local_a8;
  byte local_a0;
  void *local_90;
  byte local_88;
  void *local_78;
  byte local_70;
  void *local_60;
  byte local_58;
  void *local_48;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x9a8);
  bVar3 = *param_2;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x9b0);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 8);
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x9b8);
    __s2 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x9a9);
    }
    if ((bVar3 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pbVar7 = (byte *)(param_1 + 0x9a9);
        lVar8 = -(ulong)(bVar2 >> 1);
        do {
          if (*pbVar7 != *__s2) goto LAB_00b01654;
          pbVar7 = pbVar7 + 1;
          lVar8 = lVar8 + 1;
          __s2 = __s2 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_00b016fc;
    }
    if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) goto LAB_00b016fc;
  }
LAB_00b01654:
  FUN_008fce60(param_1 + 0x9a8,param_2);
  FUN_008fce60(param_1 + 0x9c0,&DAT_0320ffa8);
  *(undefined1 *)(param_1 + 0x9f8) = 0;
  lVar8 = FUN_00cce574();
  if (*(char *)(lVar8 + 0x20) != '\0') {
    uVar6 = FUN_00cce574();
    FUN_00cce198(local_d0,uVar6,param_1 + 0x9a8);
    FUN_00b01724(param_1,local_d0);
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if ((local_d0[0] & 1) != 0) {
      operator_delete(local_c0);
    }
  }
LAB_00b016fc:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b01724(long param_1,long param_2)

{
  undefined4 uVar1;
  
  FUN_008fce60(param_1 + 0x910);
  FUN_008fce60(param_1 + 0x928,param_2 + 0x18);
  FUN_008fce60(param_1 + 0x940,param_2 + 0x30);
  FUN_008fce60(param_1 + 0x958,param_2 + 0x48);
  FUN_008fce60(param_1 + 0x970,param_2 + 0x60);
  FUN_008fce60(param_1 + 0x988,param_2 + 0x78);
  uVar1 = *(undefined4 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x9f8) = 1;
  *(undefined4 *)(param_1 + 0x9a0) = uVar1;
  if ((*(byte *)(param_1 + 0x940) & 1) == 0) {
    if (*(byte *)(param_1 + 0x940) >> 1 == 0) goto LAB_00b017bc;
  }
  else if (*(long *)(param_1 + 0x948) == 0) goto LAB_00b017bc;
  FUN_00b01318(param_1,param_1 + 0x940);
LAB_00b017bc:
  if ((*(byte *)(param_1 + 0x9d8) & 1) == 0) {
    if (*(byte *)(param_1 + 0x9d8) >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 0x9e0) == 0) {
    return;
  }
  FUN_00b013a0(0xbf800000,param_1,param_1 + 0x9d8);
  return;
}




void FUN_00b01800(byte *param_1)

{
  if ((param_1[0x78] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x88));
  }
  if ((param_1[0x60] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x70));
  }
  if ((param_1[0x48] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x58));
  }
  if ((param_1[0x30] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x40));
  }
  if ((param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}




void FUN_00b01884(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long lVar8;
  void *__s1;
  byte *__s2;
  byte local_d0 [16];
  void *local_c0;
  byte local_b8;
  void *local_a8;
  byte local_a0;
  void *local_90;
  byte local_88;
  void *local_78;
  byte local_70;
  void *local_60;
  byte local_58;
  void *local_48;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x9c0);
  bVar3 = *param_2;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x9c8);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 8);
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x9d0);
    __s2 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x9c1);
    }
    if ((bVar3 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pbVar7 = (byte *)(param_1 + 0x9c1);
        lVar8 = -(ulong)(bVar2 >> 1);
        do {
          if (*pbVar7 != *__s2) goto LAB_00b01938;
          pbVar7 = pbVar7 + 1;
          lVar8 = lVar8 + 1;
          __s2 = __s2 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_00b019e0;
    }
    if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) goto LAB_00b019e0;
  }
LAB_00b01938:
  FUN_008fce60(param_1 + 0x9c0,param_2);
  FUN_008fce60(param_1 + 0x9a8,&DAT_0320ffa8);
  *(undefined1 *)(param_1 + 0x9f8) = 0;
  lVar8 = FUN_00cce574();
  if (*(char *)(lVar8 + 0x20) != '\0') {
    uVar6 = FUN_00cce574();
    FUN_00cce224(local_d0,uVar6,param_1 + 0x9c0);
    FUN_00b01724(param_1,local_d0);
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if ((local_d0[0] & 1) != 0) {
      operator_delete(local_c0);
    }
  }
LAB_00b019e0:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b01a08(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  byte local_168 [16];
  void *local_158;
  byte local_150;
  void *local_140;
  byte local_138;
  void *local_128;
  byte local_120;
  void *local_110;
  byte local_108;
  void *local_f8;
  byte local_f0;
  void *local_e0;
  byte local_d0 [16];
  void *local_c0;
  byte local_b8;
  void *local_a8;
  byte local_a0;
  void *local_90;
  byte local_88;
  void *local_78;
  byte local_70;
  void *local_60;
  byte local_58;
  void *local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00cce574();
  if (*(char *)(lVar3 + 0x20) == '\0') goto LAB_00b01ba8;
  bVar1 = *(byte *)(param_1 + 0x9c0);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
LAB_00b01a54:
      if ((*(byte *)(param_1 + 0x9a8) & 1) == 0) {
        if (*(byte *)(param_1 + 0x9a8) >> 1 == 0) goto LAB_00b01ba8;
      }
      else if (*(long *)(param_1 + 0x9b0) == 0) goto LAB_00b01ba8;
    }
  }
  else if (*(long *)(param_1 + 0x9c8) == 0) goto LAB_00b01a54;
  if (*(char *)(param_1 + 0x9f8) != '\0') goto LAB_00b01ba8;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_00b01b0c;
LAB_00b01a84:
    uVar4 = FUN_00cce574();
    FUN_00cce224(local_d0,uVar4,param_1 + 0x9c0);
    FUN_00b01724(param_1,local_d0);
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    local_158 = local_c0;
    local_168[0] = local_d0[0];
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
      local_158 = local_c0;
      local_168[0] = local_d0[0];
    }
  }
  else {
    if (*(long *)(param_1 + 0x9c8) != 0) goto LAB_00b01a84;
LAB_00b01b0c:
    if ((*(byte *)(param_1 + 0x9a8) & 1) == 0) {
      if (*(byte *)(param_1 + 0x9a8) >> 1 == 0) goto LAB_00b01ba8;
    }
    else if (*(long *)(param_1 + 0x9b0) == 0) goto LAB_00b01ba8;
    uVar4 = FUN_00cce574();
    FUN_00cce198(local_168,uVar4,param_1 + 0x9a8);
    FUN_00b01724(param_1,local_168);
    if ((local_f0 & 1) != 0) {
      operator_delete(local_e0);
    }
    if ((local_108 & 1) != 0) {
      operator_delete(local_f8);
    }
    if ((local_120 & 1) != 0) {
      operator_delete(local_110);
    }
    if ((local_138 & 1) != 0) {
      operator_delete(local_128);
    }
    if ((local_150 & 1) != 0) {
      operator_delete(local_140);
    }
  }
  if ((local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
LAB_00b01ba8:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00b01c64(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_MENU_OPEN_CHEST");
  FUN_00f048e0(auStack_48,uVar2,param_1);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b01c64(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_MENU_OPEN_CHEST");
  FUN_00f048e0(auStack_48,uVar2,param_1);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b01cd8(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  byte abStack_60 [16];
  void *pvStack_50;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_MENU_OPEN_CHEST_COMPLETE");
  FUN_00f048e0(auStack_48,uVar2,param_1);
  FUN_00f04760(param_1,auStack_48,1);
  FUN_008fa54c(abStack_60,"IDLE_OPEN");
  FUN_008fce60(param_1 + 0x9d8,abStack_60);
  if ((abStack_60[0] & 1) != 0) {
    operator_delete(pvStack_50);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b01cd8(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  byte local_60 [16];
  void *local_50;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_MENU_OPEN_CHEST_COMPLETE");
  FUN_00f048e0(auStack_48,uVar2,param_1);
  FUN_00f04760(param_1,auStack_48,1);
  FUN_008fa54c(local_60,"IDLE_OPEN");
  FUN_008fce60(param_1 + 0x9d8,local_60);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00b01d74(long param_1,uint param_2,ulong param_3,int param_4)

{
  long lVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  char *__s2;
  char *pcVar8;
  ushort uVar9;
  long lVar10;
  void *__s1;
  ushort *puVar11;
  float fVar12;
  byte local_90 [16];
  void *local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  FUN_008fa54c(local_90,"REVEAL");
  FUN_008fce60(param_1 + 0x9d8,local_90);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  lVar1 = param_1 + 0x6a8;
  FUN_00f01980();
  lVar10 = DAT_03210d00;
  if ((param_3 & 1) == 0) {
    FUN_008fa54c(local_90,"REVEAL");
    uVar7 = FUN_00b0272c(param_1,local_90);
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    lVar10 = DAT_03210d00;
    uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar9 == 0xffff) {
      puVar11 = (ushort *)0x0;
    }
    else {
      puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
      if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar9 = 0xffff;
      }
      else {
        uVar9 = *puVar11;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
      *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
      FUN_00a99928(puVar11);
      *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
    }
    lVar10 = param_1 + 0x88;
    FUN_00a99998(puVar11,lVar10,uVar7);
    FUN_00f022a0(lVar1,puVar11);
    lVar5 = DAT_03210d00;
    uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar9 == 0xffff) {
      puVar11 = (ushort *)0x0;
    }
    else {
      puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
      if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar9 = 0xffff;
      }
      else {
        uVar9 = *puVar11;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
      *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
      FUN_00a99abc(puVar11);
      *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
    }
    FUN_008fa54c(local_90,"CHEST_OPENING_PFX");
    FUN_00a99b60(puVar11,lVar10,local_90);
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    FUN_00f022a0(lVar1,puVar11);
    lVar5 = DAT_03210d00;
    uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar9 == 0xffff) {
      puVar11 = (ushort *)0x0;
    }
    else {
      puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
      if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar9 = 0xffff;
      }
      else {
        uVar9 = *puVar11;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
      *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
      FUN_00a99abc(puVar11);
      *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
    }
    FUN_008fa54c(local_90,"CHEST_OPEN_IDLE_PFX");
    FUN_00a99b60(puVar11,lVar10,local_90);
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    FUN_00f022a0(lVar1,puVar11);
    lVar10 = DAT_03210d00;
    uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar9 == 0xffff) {
      puVar11 = (ushort *)0x0;
    }
    else {
      puVar11 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar9 * 0x40);
      if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar9 = 0xffff;
      }
      else {
        uVar9 = *puVar11;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
      *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
      FUN_00efc8e8(puVar11);
      *(undefined ***)puVar11 = &PTR_FUN_027c27b8;
      puVar11[0xc] = 0;
      puVar11[0xd] = 0;
      puVar11[0xe] = 0;
      puVar11[0xf] = 0;
      puVar11[0x10] = 0;
      puVar11[0x11] = 0;
      puVar11[0x12] = 0;
      puVar11[0x13] = 0;
      puVar11[8] = 0;
      puVar11[9] = 0;
      puVar11[10] = 0;
      puVar11[0xb] = 0;
      *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
    }
    *(code **)(puVar11 + 8) = thunk_FUN_00b01cd8;
    *(long *)(puVar11 + 0x10) = param_1;
    FUN_00f022a0(lVar1,puVar11);
    fVar12 = 1.0;
    uVar7 = FUN_00efed6c(0x3f800000);
    FUN_00f022a0(lVar1,uVar7);
  }
  else {
    uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar9 == 0xffff) {
      puVar11 = (ushort *)0x0;
    }
    else {
      puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
      if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar9 = 0xffff;
      }
      else {
        uVar9 = *puVar11;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
      *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
      FUN_00a99abc(puVar11);
      *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
    }
    lVar10 = param_1 + 0x88;
    FUN_008fa54c(local_90,"CHEST_OPENING_PFX");
    FUN_00a99b60(puVar11,lVar10,local_90);
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    FUN_00f022a0(lVar1,puVar11);
    lVar5 = DAT_03210d00;
    uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar9 == 0xffff) {
      puVar11 = (ushort *)0x0;
    }
    else {
      puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
      if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar9 = 0xffff;
      }
      else {
        uVar9 = *puVar11;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
      *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
      FUN_00a99abc(puVar11);
      *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
    }
    FUN_008fa54c(local_90,"CHEST_OPEN_IDLE_PFX");
    FUN_00a99b60(puVar11,lVar10,local_90);
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    FUN_00f022a0(lVar1,puVar11);
    lVar5 = DAT_03210d00;
    uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar9 == 0xffff) {
      puVar11 = (ushort *)0x0;
    }
    else {
      puVar11 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar9 * 0x40);
      if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar9 = 0xffff;
      }
      else {
        uVar9 = *puVar11;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
      *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
      FUN_00efc8e8(puVar11);
      *(undefined ***)puVar11 = &PTR_FUN_027c27b8;
      puVar11[0xc] = 0;
      puVar11[0xd] = 0;
      puVar11[0xe] = 0;
      puVar11[0xf] = 0;
      puVar11[0x10] = 0;
      puVar11[0x11] = 0;
      puVar11[0x12] = 0;
      puVar11[0x13] = 0;
      puVar11[8] = 0;
      puVar11[9] = 0;
      puVar11[10] = 0;
      puVar11[0xb] = 0;
      *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
    }
    *(code **)(puVar11 + 8) = thunk_FUN_00b01cd8;
    *(long *)(puVar11 + 0x10) = param_1;
    FUN_00f022a0(lVar1,puVar11);
    fVar12 = 0.0;
    for (; param_4 != 0; param_4 = param_4 + -1) {
      FUN_008fa54c(local_90,"REVEAL_QUICK");
      uVar7 = FUN_00b0272c(param_1,local_90);
      if ((local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
      lVar5 = DAT_03210d00;
      uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar9 == 0xffff) {
        puVar11 = (ushort *)0x0;
      }
      else {
        puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
        if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar9 = 0xffff;
        }
        else {
          uVar9 = *puVar11;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
        *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
        FUN_00a99928(puVar11);
        *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
      }
      FUN_00a99998(puVar11,lVar10,uVar7);
      FUN_00f022a0(lVar1,puVar11);
      uVar7 = FUN_00efed6c(0x3e4ccccd);
      FUN_00f022a0(lVar1,uVar7);
      fVar12 = fVar12 + 0.2;
    }
  }
  if ((param_2 & 1) == 0) goto LAB_00b025fc;
  bVar3 = *(byte *)(param_1 + 0x928);
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x930);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    __s1 = *(void **)(param_1 + 0x938);
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x929);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar8 = (char *)(param_1 + 0x929);
        lVar10 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar8 != *__s2) goto LAB_00b02534;
          pcVar8 = pcVar8 + 1;
          lVar10 = lVar10 + 1;
          __s2 = __s2 + 1;
        } while (lVar10 != 0);
      }
      goto LAB_00b025fc;
    }
    if ((__n == 0) || (iVar6 = memcmp(__s1,__s2,__n), iVar6 == 0)) goto LAB_00b025fc;
  }
LAB_00b02534:
  lVar10 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar9 * 0x40);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
    FUN_00efc8e8(puVar11);
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    puVar11[0x14] = 0;
    puVar11[0x10] = 0;
    puVar11[0x11] = 0;
    puVar11[0x12] = 0;
    puVar11[0x13] = 0;
    *(undefined ***)puVar11 = &PTR_FUN_027d0db0;
    *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
  }
  FUN_00a99c48(puVar11,param_1 + 0x928,0,0);
  FUN_00f022a0(lVar1,puVar11);
LAB_00b025fc:
  uVar7 = FUN_00efed6c(0x3fcccccd);
  FUN_00f022a0(lVar1,uVar7);
  FUN_008fa54c(local_90,"IDLE_OPEN_STILL");
  uVar7 = FUN_00b0272c(param_1,local_90);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  lVar10 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
    FUN_00a99928(puVar11);
    *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
  }
  FUN_00a99998(puVar11,param_1 + 0x88,uVar7);
  FUN_00f022a0(lVar1,puVar11);
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return fVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

