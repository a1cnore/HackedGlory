// functions/00b8d — 25 functions
#include "libGameKindred.h"




void thunk_FUN_00b8d34c(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  *(uint *)(*(long *)(param_1 + 0x1d0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x1d0) + 0x84) & 0xfffffffb;
  FUN_00b8d1ec();
  FUN_00f01980(param_1);
  FUN_00f01980(param_1 + 0xd8);
  plVar2 = *(long **)(param_1 + 0x360);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x368) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x360);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x368) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x360) = 0;
            uVar4 = 0;
            *(undefined4 *)(param_1 + 0x368) = DAT_03214ce8;
          }
        }
        FUN_009dbf64(0x3f000000,uVar4);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x360) = 0;
      *(undefined4 *)(param_1 + 0x368) = DAT_03214ce8;
    }
  }
  uVar1 = FUN_00f048a4("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  FUN_00f04694(param_1,uVar1);
  uVar1 = FUN_00f048a4("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  FUN_00f04694(param_1,uVar1);
  return;
}




void thunk_FUN_00b8d440(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x350) != 0) &&
     ((float)(*(uint *)(*(long *)(*(long *)(param_1 + 0x358) +
                                 (ulong)(*(int *)(param_1 + 0x350) - 1) * 8) + 0x84) >> 7 & 0xff) /
      255.0 < 1.0)) {
    FUN_00c3af64(*(undefined8 *)(param_1 + 0x1d0));
    FUN_00b8d508(0x3f800000,0x3f800000,param_1);
    FUN_00b8d5d4(param_1);
    return;
  }
  uVar2 = FUN_009b8d90();
  FUN_009ba2b4(uVar2,PTR_s_screen_main_hub_02be3690,1);
  FUN_00f01980(*(undefined8 *)(param_1 + 0x1d0));
  uVar1 = FUN_00f048a4("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  FUN_00f04694(param_1,uVar1);
  uVar1 = FUN_00f048a4("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  FUN_00f04694(param_1,uVar1);
  return;
}




void FUN_00b8d1ec(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x350) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      FUN_00f01980(*(undefined8 *)(*(long *)(param_1 + 0x358) + lVar3));
      plVar1 = *(long **)(*(long *)(param_1 + 0x358) + lVar3);
      if (plVar1 == (long *)0x0) {
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x358) + uVar4 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x358) + lVar3);
      }
      *puVar2 = 0;
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar4 < *(uint *)(param_1 + 0x350));
  }
  if (*(long *)(param_1 + 0x358) != 0) {
    *(undefined4 *)(param_1 + 0x350) = 0;
  }
  FUN_00f019d4(param_1 + 0x298,1);
  return;
}




void FUN_00b8d280(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00b8dbd0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00b8d308(long *param_1)

{
  FUN_00affa84();
  FUN_00aa1814(0);
  *(uint *)(param_1[0x3a] + 0x84) = *(uint *)(param_1[0x3a] + 0x84) | 4;
                    /* WARNING: Could not recover jumptable at 0x00b8d348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00b8d34c(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  *(uint *)(*(long *)(param_1 + 0x1d0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x1d0) + 0x84) & 0xfffffffb;
  FUN_00b8d1ec();
  FUN_00f01980(param_1);
  FUN_00f01980(param_1 + 0xd8);
  plVar2 = *(long **)(param_1 + 0x360);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x368) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x360);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x368) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x360) = 0;
            uVar4 = 0;
            *(undefined4 *)(param_1 + 0x368) = DAT_03214ce8;
          }
        }
        FUN_009dbf64(0x3f000000,uVar4);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x360) = 0;
      *(undefined4 *)(param_1 + 0x368) = DAT_03214ce8;
    }
  }
  uVar1 = FUN_00f048a4("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  FUN_00f04694(param_1,uVar1);
  uVar1 = FUN_00f048a4("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  FUN_00f04694(param_1,uVar1);
  return;
}




void FUN_00b8d440(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x350) != 0) &&
     ((float)(*(uint *)(*(long *)(*(long *)(param_1 + 0x358) +
                                 (ulong)(*(int *)(param_1 + 0x350) - 1) * 8) + 0x84) >> 7 & 0xff) /
      255.0 < 1.0)) {
    FUN_00c3af64(*(undefined8 *)(param_1 + 0x1d0));
    FUN_00b8d508(0x3f800000,0x3f800000,param_1);
    FUN_00b8d5d4(param_1);
    return;
  }
  uVar2 = FUN_009b8d90();
  FUN_009ba2b4(uVar2,PTR_s_screen_main_hub_02be3690,1);
  FUN_00f01980(*(undefined8 *)(param_1 + 0x1d0));
  uVar1 = FUN_00f048a4("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  FUN_00f04694(param_1,uVar1);
  uVar1 = FUN_00f048a4("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  FUN_00f04694(param_1,uVar1);
  return;
}




void FUN_00b8d508(float param_1,float param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(int *)(param_3 + 0x350) != 0) {
    uVar3 = 0;
    do {
      FUN_00f01980(*(undefined8 *)(*(long *)(param_3 + 0x358) + uVar3 * 8));
      lVar1 = *(long *)(*(long *)(param_3 + 0x358) + uVar3 * 8);
      if ((*(uint *)(lVar1 + 0x84) >> 7 & 0xff) != (int)(param_1 * 255.0)) {
        *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) & 0xffff807f | (int)(param_1 * 255.0) << 7
        ;
        FUN_0091ada4();
        lVar1 = *(long *)(*(long *)(param_3 + 0x358) + uVar3 * 8);
      }
      if ((*(float *)(lVar1 + 0x48) != param_2) || (*(float *)(lVar1 + 0x4c) != param_2)) {
        *(float *)(lVar1 + 0x48) = param_2;
        *(float *)(lVar1 + 0x4c) = param_2;
        FUN_0091ada4();
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_3 + 0x350));
  }
  plVar2 = (long *)FUN_00f14058(param_3 + 0x298);
                    /* WARNING: Could not recover jumptable at 0x00b8d5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))();
  return;
}




void FUN_00b8d5d4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  uVar2 = FUN_00efed6c(0x40a00000);
  FUN_00f022a0(param_1,uVar2);
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c27b8;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(code **)(puVar4 + 8) = FUN_00b8dbac;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  FUN_00f022a0(param_1,puVar4);
  return;
}




void thunk_FUN_00b8d740(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  code *pcStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  FUN_00f04694(param_1,uVar2);
  FUN_00b8d6cc(param_1);
  lVar3 = *(long *)(param_1 + 0x1d0);
  uStack_40 = FUN_00f048a4("UI::EVENT_SCREEN_PROGRESS_BAR_ANIMATION_BEGIN");
  pcStack_68 = thunk_FUN_00b8d81c;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  lStack_60 = param_1;
  FUN_009693a0(lVar3 + 8,&pcStack_68);
  lVar3 = *(long *)(param_1 + 0x1d0);
  uStack_40 = FUN_00f048a4("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  pcStack_68 = thunk_FUN_00b8d864;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  lStack_60 = param_1;
  FUN_009693a0(lVar3 + 8,&pcStack_68);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b8d6cc(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x210;
  FUN_00f01980(param_1);
  uVar1 = FUN_00eff63c(0x3f666666,0x3f666666,0x3d800000,0);
  FUN_00f022a0(param_1,uVar1);
  uVar1 = FUN_00eff63c(0x3f800000,0x3f800000,0x3d800000,0);
  FUN_00f022a0(param_1,uVar1);
  return;
}




void FUN_00b8d740(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  FUN_00f04694(param_1,uVar2);
  FUN_00b8d6cc(param_1);
  lVar3 = *(long *)(param_1 + 0x1d0);
  local_40 = FUN_00f048a4("UI::EVENT_SCREEN_PROGRESS_BAR_ANIMATION_BEGIN");
  local_68 = thunk_FUN_00b8d81c;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lStack_60 = param_1;
  FUN_009693a0(lVar3 + 8,&local_68);
  lVar3 = *(long *)(param_1 + 0x1d0);
  local_40 = FUN_00f048a4("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  local_68 = thunk_FUN_00b8d864;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lStack_60 = param_1;
  FUN_009693a0(lVar3 + 8,&local_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b8d81c(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = FUN_00f048a4("UI::EVENT_SCREEN_PROGRESS_BAR_ANIMATION_BEGIN");
  FUN_00f04694(uVar2,uVar1);
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_upgrade_level_bar.mp3",0,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00b8d864(long param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  undefined8 uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ulong uVar10;
  
  uVar7 = *(undefined8 *)(param_1 + 0x1d0);
  uVar2 = FUN_00f048a4("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  FUN_00f04694(uVar7,uVar2);
  FUN_00c3b844(*(undefined8 *)(param_1 + 0x1d0));
  if (*(int *)(param_1 + 0x350) != 0) {
    uVar10 = 0;
    uVar7 = NEON_fmov(0x40400000,4);
    do {
      FUN_00f01980(*(undefined8 *)(*(long *)(param_1 + 0x358) + uVar10 * 8));
      lVar3 = *(long *)(*(long *)(param_1 + 0x358) + uVar10 * 8);
      if ((*(uint *)(lVar3 + 0x84) & 0x7f80) != 0) {
        *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xffff807f;
        FUN_0091ada4();
        lVar3 = *(long *)(*(long *)(param_1 + 0x358) + uVar10 * 8);
      }
      if ((*(float *)(lVar3 + 0x48) != 3.0) || (*(float *)(lVar3 + 0x4c) != 3.0)) {
        *(undefined8 *)(lVar3 + 0x48) = uVar7;
        FUN_0091ada4();
      }
      uVar4 = FUN_00efed6c((float)(uVar10 & 0xffffffff) * 0.6);
      FUN_00f022a0(*(undefined8 *)(*(long *)(param_1 + 0x358) + uVar10 * 8),uVar4);
      uVar4 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e000000,FUN_00a269a4);
      uVar5 = FUN_00efee28(0x3f800000,0x3e000000,FUN_009a7608);
      lVar3 = DAT_03210d00;
      uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar6 == 0xffff) {
        _DAT_00000010 = FUN_00b8db34;
        puVar8 = (ushort *)0x0;
        puVar9 = (ushort *)0x0;
        _DAT_00000020 = param_1;
      }
      else {
        puVar8 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar6 * 0x40);
        if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = *puVar8;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
        *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
        FUN_00efc8e8(puVar8);
        puVar8[0xc] = 0;
        puVar8[0xd] = 0;
        puVar8[0xe] = 0;
        puVar8[0xf] = 0;
        puVar8[0x10] = 0;
        puVar8[0x11] = 0;
        puVar8[0x12] = 0;
        puVar8[0x13] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        *(undefined ***)puVar8 = &PTR_FUN_027c27b8;
        *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
        lVar3 = DAT_03210d00;
        puVar1 = (ushort *)(DAT_03210d00 + 0x20010);
        uVar6 = *puVar1;
        *(code **)(puVar8 + 8) = FUN_00b8db34;
        *(long *)(puVar8 + 0x10) = param_1;
        if ((ulong)uVar6 == 0xffff) {
          puVar9 = (ushort *)0x0;
        }
        else {
          puVar9 = (ushort *)(lVar3 + (ulong)uVar6 * 0x40 + 0x10);
          if (uVar6 == *(ushort *)(lVar3 + 0x20012)) {
            uVar6 = 0xffff;
          }
          else {
            uVar6 = *puVar9;
          }
          *puVar1 = uVar6;
          *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
          FUN_00efcd98(puVar9);
          *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
        }
      }
      FUN_00efcea4(puVar9,uVar4,uVar5,puVar8,0);
      FUN_00f022a0(*(undefined8 *)(*(long *)(param_1 + 0x358) + uVar10 * 8),puVar9);
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(param_1 + 0x350));
  }
  return;
}




void FUN_00b8d81c(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = FUN_00f048a4("UI::EVENT_SCREEN_PROGRESS_BAR_ANIMATION_BEGIN");
  FUN_00f04694(uVar2,uVar1);
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_upgrade_level_bar.mp3",0,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8d864(long param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  undefined8 uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ulong uVar10;
  
  uVar7 = *(undefined8 *)(param_1 + 0x1d0);
  uVar2 = FUN_00f048a4("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  FUN_00f04694(uVar7,uVar2);
  FUN_00c3b844(*(undefined8 *)(param_1 + 0x1d0));
  if (*(int *)(param_1 + 0x350) != 0) {
    uVar10 = 0;
    uVar7 = NEON_fmov(0x40400000,4);
    do {
      FUN_00f01980(*(undefined8 *)(*(long *)(param_1 + 0x358) + uVar10 * 8));
      lVar3 = *(long *)(*(long *)(param_1 + 0x358) + uVar10 * 8);
      if ((*(uint *)(lVar3 + 0x84) & 0x7f80) != 0) {
        *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xffff807f;
        FUN_0091ada4();
        lVar3 = *(long *)(*(long *)(param_1 + 0x358) + uVar10 * 8);
      }
      if ((*(float *)(lVar3 + 0x48) != 3.0) || (*(float *)(lVar3 + 0x4c) != 3.0)) {
        *(undefined8 *)(lVar3 + 0x48) = uVar7;
        FUN_0091ada4();
      }
      uVar4 = FUN_00efed6c((float)(uVar10 & 0xffffffff) * 0.6);
      FUN_00f022a0(*(undefined8 *)(*(long *)(param_1 + 0x358) + uVar10 * 8),uVar4);
      uVar4 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e000000,FUN_00a269a4);
      uVar5 = FUN_00efee28(0x3f800000,0x3e000000,FUN_009a7608);
      lVar3 = DAT_03210d00;
      uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar6 == 0xffff) {
        _DAT_00000010 = FUN_00b8db34;
        puVar8 = (ushort *)0x0;
        puVar9 = (ushort *)0x0;
        _DAT_00000020 = param_1;
      }
      else {
        puVar8 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar6 * 0x40);
        if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = *puVar8;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
        *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
        FUN_00efc8e8(puVar8);
        puVar8[0xc] = 0;
        puVar8[0xd] = 0;
        puVar8[0xe] = 0;
        puVar8[0xf] = 0;
        puVar8[0x10] = 0;
        puVar8[0x11] = 0;
        puVar8[0x12] = 0;
        puVar8[0x13] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        *(undefined ***)puVar8 = &PTR_FUN_027c27b8;
        *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
        lVar3 = DAT_03210d00;
        puVar1 = (ushort *)(DAT_03210d00 + 0x20010);
        uVar6 = *puVar1;
        *(code **)(puVar8 + 8) = FUN_00b8db34;
        *(long *)(puVar8 + 0x10) = param_1;
        if ((ulong)uVar6 == 0xffff) {
          puVar9 = (ushort *)0x0;
        }
        else {
          puVar9 = (ushort *)(lVar3 + (ulong)uVar6 * 0x40 + 0x10);
          if (uVar6 == *(ushort *)(lVar3 + 0x20012)) {
            uVar6 = 0xffff;
          }
          else {
            uVar6 = *puVar9;
          }
          *puVar1 = uVar6;
          *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
          FUN_00efcd98(puVar9);
          *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
        }
      }
      FUN_00efcea4(puVar9,uVar4,uVar5,puVar8,0);
      FUN_00f022a0(*(undefined8 *)(*(long *)(param_1 + 0x358) + uVar10 * 8),puVar9);
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(param_1 + 0x350));
  }
  return;
}




void FUN_00b8db34(long param_1,long param_2)

{
  if (param_1 != 0) {
    FUN_00b8d6cc(param_1);
    FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_stats_slam_in2.mp3",0,0);
    if (((*(uint *)(param_2 + 0x84) ^
         *(uint *)(*(long *)(*(long *)(param_1 + 0x358) + (ulong)(*(int *)(param_1 + 0x350) - 1) * 8
                            ) + 0x84)) >> 0xf & 0xffff) == 0) {
      FUN_00b8d5d4(param_1);
      return;
    }
  }
  return;
}




void FUN_00b8dbac(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009b8d90();
  FUN_009ba2b4(uVar1,PTR_s_screen_main_hub_02be3690,1);
  return;
}




void FUN_00b8dbd0(uint *param_1,uint param_2)

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




void FUN_00b8dc50(undefined8 *param_1)

{
  FUN_00f017e8();
  *param_1 = &PTR_FUN_027e8420;
  param_1[0x11] = 0;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfc;
  return;
}




void FUN_00b8dc90(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  
  *(uint *)(param_2 + 0x84) =
       *(uint *)(param_2 + 0x84) & 0x80000000 |
       *(uint *)(param_2 + 0x84) & 0x7fff | (param_3 & 0xffff) << 0xf;
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  uVar1 = *(uint *)(param_2 + 0x84);
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x84) = uVar1 & 0xffff807f;
    FUN_0091ada4(param_2);
    uVar1 = *(uint *)(param_2 + 0x84);
  }
  *(uint *)(param_2 + 0x84) = uVar1 & 0xfffffff3;
  return;
}




void FUN_00b8dcf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e6a474(param_3);
  uVar1 = FUN_0091ed5c(param_3,uVar1,0x1234);
  FUN_00b8dc90(param_1,param_2,uVar1);
  return;
}




void FUN_00b8dd44(undefined8 param_1,long *param_2,short param_3,int param_4,uint param_5)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auStack_78 [32];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)param_2[5];
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5;
    plVar7 = (long *)0x0;
    do {
      plVar1 = plVar6;
      if ((*(int *)((long)plVar6 + 0x84) << 1) >> 0x10 != (int)param_3) {
        plVar1 = plVar7;
      }
      plVar6 = (long *)plVar6[6];
      plVar7 = plVar1;
    } while (plVar6 != (long *)0x0);
    if (plVar1 != (long *)0x0) {
      do {
        plVar6 = plVar5;
        plVar5 = (long *)plVar6[6];
      } while ((long *)plVar6[6] != (long *)0x0);
      plVar5 = (long *)0x0;
      if ((*(byte *)((long)plVar6 + 0x84) & 8) != 0) {
        plVar5 = plVar6;
      }
      if (plVar1 != plVar5) {
        FUN_00f01a4c(plVar1,1);
        uVar4 = (**(code **)(*param_2 + 0x78))(param_2,plVar1,1);
        param_2[0x11] = (long)plVar1;
        if (param_4 == 1) {
          FUN_00b8df94(param_1,param_2,plVar1,plVar5,param_5 & 1);
        }
        else if (param_4 == 0) {
          FUN_00b8dec4(uVar4,plVar1,plVar5,0);
        }
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x140))(plVar5,0);
        }
        (**(code **)(*plVar1 + 0x140))(plVar1,1);
        uVar3 = FUN_00f048a4("EVENT_TAB_SELECTED");
        FUN_00f048e0(auStack_78,uVar3,0);
        FUN_00f04760(plVar1,auStack_78,0);
        *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 1;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b8dec4(undefined8 param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00f01980(param_2);
  uVar2 = *(uint *)((long)param_2 + 0x84);
  uVar1 = uVar2 | 8;
  *(uint *)((long)param_2 + 0x84) = uVar1;
  if ((~uVar2 & 0x7f80) != 0) {
    *(uint *)((long)param_2 + 0x84) = uVar2 | 0x7f88;
    FUN_0091ada4(param_2);
    uVar1 = *(uint *)((long)param_2 + 0x84);
  }
  *(uint *)((long)param_2 + 0x84) = uVar1 | 4;
  (**(code **)(*param_2 + 0x148))(param_2,1);
  if (param_3 != (long *)0x0) {
    FUN_00f01980(param_3);
    uVar1 = *(uint *)((long)param_3 + 0x84);
    uVar2 = uVar1 & 0xfffffff7;
    *(uint *)((long)param_3 + 0x84) = uVar2;
    if ((uVar1 & 0x7f80) != 0) {
      *(uint *)((long)param_3 + 0x84) = uVar1 & 0xffff8077;
      FUN_0091ada4(param_3);
      uVar2 = *(uint *)((long)param_3 + 0x84);
    }
    *(uint *)((long)param_3 + 0x84) = uVar2 & 0xfffffffb;
                    /* WARNING: Could not recover jumptable at 0x00b8df84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x148))(param_3,0);
    return;
  }
  return;
}




void FUN_00b8df94(undefined8 param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  FUN_00f01980(param_3);
  uVar1 = *(uint *)(param_3 + 0x84);
  *(uint *)(param_3 + 0x84) = uVar1 | 8;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)(param_3 + 0x84) = uVar1 & 0xffff807f | 8;
    FUN_0091ada4(param_3);
  }
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_02825100;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    lVar2 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 != 0xffff) {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efcad4(puVar5);
      *(undefined ***)puVar5 = &PTR_FUN_02825220;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      goto LAB_00b8e120;
    }
  }
  puVar5 = (ushort *)0x0;
LAB_00b8e120:
  FUN_00efcac4(param_1,puVar5);
  FUN_00f02308(param_3,puVar4,puVar5,0);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c27b8;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  *(code **)(puVar4 + 8) = FUN_00b8e5e4;
  *(long *)(puVar4 + 0x10) = param_2;
  FUN_00f022a0(param_3,puVar4);
  lVar2 = DAT_03210d00;
  if (param_4 != 0) {
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar4 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar4;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efcad4(puVar4);
      *(undefined ***)puVar4 = &PTR_FUN_027c1a60;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efcac4(param_1,puVar4);
    lVar2 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efc8e8(puVar5);
      *(undefined ***)puVar5 = &PTR_FUN_02825148;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00f02308(param_4,puVar4,puVar5,0);
    lVar2 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar4 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar4;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efc8e8(puVar4);
      *(undefined ***)puVar4 = &PTR_FUN_027c27b8;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      puVar4[0x10] = 0;
      puVar4[0x11] = 0;
      puVar4[0x12] = 0;
      puVar4[0x13] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    *(code **)(puVar4 + 8) = FUN_00b8e5f8;
    *(long *)(puVar4 + 0x10) = param_2;
    FUN_00f022a0(param_4,puVar4);
    lVar2 = DAT_03210d00;
    if (((param_5 & 1) != 0) && ((*(byte *)(param_2 + 0x90) >> 1 & 1) == 0)) {
      uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar3 == 0xffff) {
        puVar4 = (ushort *)0x0;
      }
      else {
        puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
        if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar3 = 0xffff;
        }
        else {
          uVar3 = *puVar4;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efc8e8(puVar4);
        *(undefined ***)puVar4 = &PTR_FUN_028250b8;
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00f022a0(param_4,puVar4);
      return;
    }
  }
  return;
}

