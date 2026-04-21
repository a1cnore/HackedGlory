// functions/00baa — 9 functions
#include "libGameKindred.h"




void FUN_00baa9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00bad2c4(param_1,param_4);
  return;
}




void FUN_00baa9d0(long param_1)

{
  FUN_00bac128(param_1,0,0xffffffff);
  FUN_00ad6848(param_1 + 0xea98);
  return;
}




void FUN_00baaa04(long *param_1)

{
  FUN_00b8e854();
                    /* WARNING: Could not recover jumptable at 0x00baaa2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_00baaa30(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x360) = *(byte *)(param_1 + 0x360) & 0xfd | (param_2 & 1) << 1;
  if ((param_2 & 1) != 0) {
    FUN_00ad67fc(param_1 + 0xea98,1);
    FUN_00baaa84(param_1);
    return;
  }
  return;
}




void FUN_00baaa84(long param_1)

{
  uint uVar1;
  
  *(undefined1 *)(param_1 + 0x1ffbc) = 0;
  *(undefined4 *)(param_1 + 0x1ffc0) = 0xffffffff;
  *(uint *)(param_1 + 0x1519c) = *(uint *)(param_1 + 0x1519c) & 0xfffffffb;
  *(uint *)(param_1 + 0x1cc64) = *(uint *)(param_1 + 0x1cc64) & 0xfffffffb;
  FUN_00f01980(param_1 + 0x14b20);
  *(uint *)(param_1 + 0x14ba4) = *(uint *)(param_1 + 0x14ba4) & 0xfffffffb;
  FUN_00f01980(param_1 + 0x7f0);
  uVar1 = *(uint *)(param_1 + 0x874);
  if ((~uVar1 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x874) = uVar1 | 0x7f80;
    FUN_0091ada4(param_1 + 0x7f0);
    uVar1 = *(uint *)(param_1 + 0x874);
  }
  *(uint *)(param_1 + 0x874) = uVar1 | 4;
  if (*(float *)(param_1 + 0x1462c) != 0.0) {
    *(float *)(param_1 + 0x1462c) = 0.0;
    FUN_0091ada4(param_1 + 0x145e8);
  }
  FUN_00ed06a4(param_1 + 0x145e8,0);
  if (*(float *)(param_1 + 0x3c4) != 0.0) {
    *(undefined4 *)(param_1 + 0x3c4) = 0;
    FUN_0091ada4(param_1 + 0x380);
  }
  FUN_00f01980(param_1 + 0x520);
  FUN_00f0e670(param_1 + 0x520,&DAT_01bee7fa,2);
  if ((~*(uint *)(param_1 + 0x8fc) & 0x7f80) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x8fc) = *(uint *)(param_1 + 0x8fc) | 0x7f80;
  FUN_0091ada4(param_1 + 0x878);
  return;
}




void FUN_00baabd8(long *param_1,uint param_2)

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
  FUN_00b8e83c(param_1,param_2 & 1);
  FUN_00ad67fc(param_1 + 0x1d53,param_2 & 1);
  if ((param_2 & 1) == 0) {
    uVar3 = FUN_009b8d90();
    FUN_008fa54c(local_50,"hero_gold_purchase");
    FUN_009badcc(uVar3,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    uVar3 = FUN_009b8d90();
    FUN_008fa54c(local_50,"hero_gold_purchase");
    FUN_009baadc(uVar3,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    uVar3 = FUN_009b8d90();
    FUN_008fa54c(local_50,"hero_silver_purchase");
    FUN_009badcc(uVar3,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    uVar3 = FUN_009b8d90();
    FUN_008fa54c(local_50,"hero_silver_purchase");
    FUN_009baadc(uVar3,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    FUN_00baaa84(param_1);
    FUN_00969248();
    FUN_00968c34();
    lVar2 = FUN_00969248();
    uVar4 = (uint)(*(int *)(lVar2 + 0x38) < 1);
    *(uint *)((long)param_1 + 0x144cc) =
         *(uint *)((long)param_1 + 0x144cc) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0x144cc) & 3 | uVar4 << 2;
    *(uint *)((long)param_1 + 0xea94) =
         *(uint *)((long)param_1 + 0xea94) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0xea94) & 3 | uVar4 << 2;
    (**(code **)(*param_1 + 0x150))(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00baad70(long *param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = FUN_00969248();
  uVar2 = (uint)(*(int *)(lVar1 + 0x38) < 1);
  *(uint *)((long)param_1 + 0x144cc) =
       *(uint *)((long)param_1 + 0x144cc) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x144cc) & 3 | uVar2 << 2;
  *(uint *)((long)param_1 + 0xea94) =
       *(uint *)((long)param_1 + 0xea94) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0xea94) & 3 | uVar2 << 2;
                    /* WARNING: Could not recover jumptable at 0x00baadc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_00baadcc(long *param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00baae0c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00baadfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x150))(param_1);
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00baae0c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  byte local_160 [16];
  void *local_150;
  undefined **local_148;
  undefined1 auStack_140 [8];
  void *local_138;
  long local_118;
  undefined8 local_f8;
  void *local_f0;
  byte local_e8;
  void *local_d8;
  undefined8 local_b8;
  undefined4 local_a0;
  undefined1 local_9b;
  ulong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  long local_80;
  void *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009b8d90();
  uVar3 = FUN_009ba920(uVar2,&DAT_0320ffa8);
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_00969248();
    if (*(int *)(lVar4 + 0x38) == 4) {
      uVar2 = FUN_009b8d90();
      FUN_008fa54c(&local_148,"hero_silver_purchase");
      FUN_009badcc(uVar2,&local_148);
      if (((byte)local_148 & 1) != 0) {
        operator_delete(local_138);
      }
      FUN_00b26098(&local_148);
      uVar3 = FUN_0096bc2c();
      lVar4 = param_1 + 0xa130;
      if ((uVar3 & 1) == 0) {
        lVar4 = param_1 + 0x8b70;
      }
      uVar2 = FUN_00e6ce7c("MENU_HERO_HUB_TUTORIAL_GLORY_TOOLTIP_MSG",0);
      thunk_FUN_00e7051c(&local_98,uVar2);
      FUN_008fcdb8(&local_88,&DAT_0320ffa8);
      local_70 = 1;
      uStack_6c = 0x41a00000;
      uStack_68 = 0;
      FUN_009c82b4(auStack_140,&local_98);
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if ((void *)CONCAT44(uStack_8c,local_90) != (void *)0x0) {
        operator_delete__((void *)CONCAT44(uStack_8c,local_90));
        local_98 = 0;
        local_90 = 0;
        uStack_8c = 0;
      }
      local_a0 = 0;
      local_b8 = 0x43fa00003f000000;
      local_9b = 1;
      local_118 = lVar4;
      uVar2 = FUN_009b8d90();
      FUN_008fa54c(&local_98,"hero_silver_purchase");
      FUN_009badc0(uVar2,&local_98,&local_148);
      if ((local_98 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_84,local_88));
      }
      local_90 = DAT_03218f38;
      local_98 = DAT_03218f30;
      uStack_8c = (undefined4)_DAT_03218ef8;
      local_88 = (uint)((ulong)_DAT_03218ef8 >> 0x20);
      local_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      local_78 = (void *)0x0;
      local_60 = 0x3f800000;
      local_5c = 0x100;
      local_5a = 1;
      local_80 = lVar4;
      uVar2 = FUN_009b8d90();
      pcVar5 = "hero_silver_purchase";
    }
    else {
      if (*(int *)(lVar4 + 0x38) != 2) goto LAB_00bab1d0;
      uVar2 = FUN_009b8d90();
      FUN_008fa54c(&local_148,"hero_gold_purchase");
      FUN_009badcc(uVar2,&local_148);
      if (((byte)local_148 & 1) != 0) {
        operator_delete(local_138);
      }
      FUN_00b26098(&local_148);
      uVar3 = FUN_0096bc2c();
      lVar4 = param_1 + 0xc5a0;
      if ((uVar3 & 1) == 0) {
        lVar4 = param_1 + 0x8b70;
      }
      uVar2 = FUN_00e6ce7c("MENU_HERO_HUB_TUTORIAL_ICE_TOOLTIP_MSG",0);
      thunk_FUN_00e7051c(&local_98,uVar2);
      FUN_008fcdb8(&local_88,&DAT_0320ffa8);
      local_70 = 1;
      uStack_6c = 0x41a00000;
      uStack_68 = 0;
      FUN_009c82b4(auStack_140,&local_98);
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if ((void *)CONCAT44(uStack_8c,local_90) != (void *)0x0) {
        operator_delete__((void *)CONCAT44(uStack_8c,local_90));
        local_98 = 0;
        local_90 = 0;
        uStack_8c = 0;
      }
      local_a0 = 0;
      local_b8 = 0x43fa00003f333333;
      local_9b = 1;
      local_118 = lVar4;
      uVar2 = FUN_009b8d90();
      FUN_008fa54c(&local_98,"hero_gold_purchase");
      FUN_009badc0(uVar2,&local_98,&local_148);
      if ((local_98 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_84,local_88));
      }
      local_90 = DAT_03218f38;
      local_98 = DAT_03218f30;
      uStack_8c = (undefined4)_DAT_03218ef8;
      local_88 = (uint)((ulong)_DAT_03218ef8 >> 0x20);
      local_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      local_78 = (void *)0x0;
      local_60 = 0x3f800000;
      local_5c = 0x100;
      local_5a = 1;
      local_80 = lVar4;
      uVar2 = FUN_009b8d90();
      pcVar5 = "hero_gold_purchase";
    }
    FUN_008fa54c(local_160,pcVar5);
    FUN_009baa78(uVar2,local_160,&local_98);
    if ((local_160[0] & 1) != 0) {
      operator_delete(local_150);
    }
    uVar2 = FUN_009b8d90();
    FUN_009ba61c(uVar2,&DAT_0320ffa8);
    local_148 = &PTR_FUN_027de7f0;
    if ((local_e8 & 1) != 0) {
      operator_delete(local_d8);
    }
    if (local_f0 != (void *)0x0) {
      operator_delete__(local_f0);
      local_f8 = 0;
      local_f0 = (void *)0x0;
    }
    FUN_009c8464(auStack_140,1);
  }
LAB_00bab1d0:
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

