// functions/009f3 — 20 functions
#include "libGameKindred.h"




void FUN_009f3190(undefined8 param_1)

{
  FUN_01980bd0(&DAT_01b9c0a8);
  FUN_01980bd0(&DAT_01b9c0ac);
  FUN_01980bd0(&DAT_01b9c0b0);
  FUN_01980bd0(&DAT_01b9c0b4);
  FUN_009f2ff0(param_1);
  return;
}




char * FUN_009f31e0(undefined8 param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "%s_Secondary_Key_Mod";
  pcVar2 = "%s_Primary_Key_Mod";
  if ((param_3 & 1) == 0) {
    pcVar1 = "%s_Secondary_Key";
    pcVar2 = "%s_Primary_Key";
  }
  if ((param_2 & 1) == 0) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}




void FUN_009f3218(long param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_01980b80(0x5bb9d395);
  if (lVar2 == 0) {
    lVar2 = FUN_01980b5c(0x5bb9d395);
  }
  uVar7 = 0;
  puVar8 = (undefined1 *)(param_1 + 0x44);
  do {
    if (0x17 < (uint)uVar7) goto LAB_009f3ae0;
    puVar6 = puVar8 + -0x34;
    switch(uVar7 & 0xffffffff) {
    case 0:
      FUN_009f2c20(param_1,lVar2,"activate_ability_A",0,puVar6,0,FUN_009f3d2c);
      uVar4 = 2;
      pcVar3 = "release_cast_ability_A";
      pcVar5 = FUN_009f3da8;
      break;
    case 1:
      FUN_009f2c20(param_1,lVar2,"activate_ability_B",0,puVar6,0,FUN_009f3e34);
      uVar4 = 2;
      pcVar3 = "release_cast_ability_B";
      pcVar5 = FUN_009f3eb0;
      break;
    case 2:
      FUN_009f2c20(param_1,lVar2,"activate_ability_C",0,puVar6,0,FUN_009f3f34);
      uVar4 = 2;
      pcVar3 = "release_cast_ability_C";
      pcVar5 = FUN_009f3fb0;
      break;
    case 3:
      if (*(int *)(puVar8 + -0x10) == 3) {
        FUN_01981618(auStack_80,0x6ad27ae6,0,*(undefined4 *)(param_1 + 0x30),puVar8[-0xc],0);
      }
      else {
        FUN_0198163c(auStack_80,0x6ad27ae6,0,*(undefined4 *)(param_1 + 0x34),puVar8[-0xc],0);
      }
      FUN_019818cc(lVar2,auStack_80);
      if (*(int *)(puVar8 + -4) == 3) {
        FUN_01981618(auStack_80,0x6ad27ae6,0,*(undefined4 *)(param_1 + 0x3c),*puVar8,0);
      }
      else {
        FUN_0198163c(auStack_80,0x6ad27ae6,0,*(undefined4 *)(param_1 + 0x40),*puVar8,0);
      }
      FUN_019818cc(lVar2,auStack_80);
      if (*(int *)(puVar8 + -0x10) == 3) {
        FUN_01981618(auStack_80,0x69d27953,0,*(undefined4 *)(param_1 + 0x68),puVar8[-0xc],0);
      }
      else {
        FUN_0198163c(auStack_80,0x69d27953,0,*(undefined4 *)(param_1 + 0x6c),puVar8[-0xc],0);
      }
      FUN_019818cc(lVar2,auStack_80);
      if (*(int *)(puVar8 + -4) == 3) {
        FUN_01981618(auStack_80,0x69d27953,0,*(undefined4 *)(param_1 + 0x74),*puVar8,0);
      }
      else {
        FUN_0198163c(auStack_80,0x69d27953,0,*(undefined4 *)(param_1 + 0x78),*puVar8,0);
      }
      FUN_019818cc(lVar2,auStack_80);
      if (*(int *)(puVar8 + -0x10) == 3) {
        FUN_01981618(auStack_80,0x68d277c0,0,*(undefined4 *)(param_1 + 0xa0),puVar8[-0xc],0);
      }
      else {
        FUN_0198163c(auStack_80,0x68d277c0,0,*(undefined4 *)(param_1 + 0xa4),puVar8[-0xc],0);
      }
      FUN_019818cc(lVar2,auStack_80);
      if (*(int *)(puVar8 + -4) == 3) {
        FUN_01981618(auStack_80,0x68d277c0,0,*(undefined4 *)(param_1 + 0xac),*puVar8,0);
      }
      else {
        FUN_0198163c(auStack_80,0x68d277c0,0,*(undefined4 *)(param_1 + 0xb0),*puVar8,0);
      }
      FUN_019818cc(lVar2,auStack_80);
      FUN_01981988(lVar2,0x6ad27ae6,0,FUN_009f401c);
      FUN_01981988(lVar2,0x69d27953,0,FUN_009f4088);
      FUN_01981988(lVar2,0x68d277c0,0,FUN_009f40f4);
      goto LAB_009f3ae0;
    case 4:
      FUN_009f2c20(param_1,lVar2,"activate_ability_shoulder_A",0,puVar6,0,FUN_009f4178);
      uVar4 = 2;
      pcVar3 = "release_cast_ability_shoulder_A";
      pcVar5 = FUN_009f41f4;
      break;
    case 5:
      FUN_009f2c20(param_1,lVar2,"activate_ability_shoulder_B",0,puVar6,0,FUN_009f4280);
      uVar4 = 2;
      pcVar3 = "release_cast_ability_shoulder_B";
      pcVar5 = FUN_009f42fc;
      break;
    case 6:
      FUN_009f2c20(param_1,lVar2,"activate_ability_item_1",0,puVar6,0,FUN_009f44ac);
      uVar4 = 2;
      pcVar3 = "release_cast_ability_item_1";
      pcVar5 = FUN_009f4528;
      break;
    case 7:
      FUN_009f2c20(param_1,lVar2,"activate_ability_item_2",0,puVar6,0,FUN_009f45b4);
      uVar4 = 2;
      pcVar3 = "release_cast_ability_item_2";
      pcVar5 = FUN_009f4630;
      break;
    case 8:
      FUN_009f2c20(param_1,lVar2,"activate_ability_item_3",0,puVar6,0,FUN_009f46b4);
      uVar4 = 2;
      pcVar3 = "release_cast_ability_item_3";
      pcVar5 = FUN_009f4730;
      break;
    case 9:
      FUN_009f2c20(param_1,lVar2,"activate_ability_item_4",0,puVar6,0,FUN_009f47b4);
      uVar4 = 2;
      pcVar3 = "release_cast_ability_item_4";
      pcVar5 = FUN_009f4830;
      break;
    case 10:
      FUN_009f2c20(param_1,lVar2,"activate_ability_item_5",0,puVar6,0,FUN_009f48b4);
      uVar4 = 2;
      pcVar3 = "release_cast_ability_item_5";
      pcVar5 = FUN_009f4930;
      break;
    case 0xb:
      FUN_009f2c20(param_1,lVar2,"activate_ability_item_6",0,puVar6,0,FUN_009f49b4);
      uVar4 = 2;
      pcVar3 = "release_cast_ability_item_6";
      pcVar5 = FUN_009f4a30;
      break;
    case 0xc:
      pcVar3 = "open_scoreboard";
      uVar4 = 0;
      pcVar5 = FUN_009f4a3c;
      break;
    case 0xd:
      pcVar3 = "teleport_home";
      uVar4 = 0;
      pcVar5 = FUN_009f4b00;
      break;
    case 0xe:
      pcVar3 = "open_shop";
      uVar4 = 0;
      pcVar5 = FUN_009f4b64;
      break;
    case 0xf:
      pcVar3 = "quick_buy";
      uVar4 = 0;
      pcVar5 = FUN_009f4bc8;
      break;
    case 0x10:
      FUN_009f2c20(param_1,lVar2,"activate_lazy_attack",0,puVar6,0,FUN_009f4308);
      uVar4 = 2;
      pcVar3 = "release_lazy_attack";
      pcVar5 = FUN_009f436c;
      break;
    case 0x11:
      pcVar3 = "activate_lazy_attack_instant";
      uVar4 = 0;
      pcVar5 = FUN_009f43d0;
      break;
    case 0x12:
      pcVar3 = "recenter_camera";
      uVar4 = 0;
      pcVar5 = FUN_009f4c2c;
      break;
    case 0x13:
      pcVar3 = "stop_move";
      uVar4 = 0;
      pcVar5 = FUN_009f4aa0;
      break;
    case 0x14:
      pcVar3 = "toggle_lock_camera";
      uVar4 = 0;
      pcVar5 = FUN_009f4c90;
      break;
    case 0x15:
      pcVar3 = "show_chat_box";
      uVar4 = 0;
      pcVar5 = FUN_009f4cf4;
      break;
    case 0x16:
      FUN_009f2c20(param_1,lVar2,"start_target_ping",0,puVar6,0,FUN_009f4d58);
      pcVar3 = "release_target_ping";
      goto LAB_009f3ad0;
    case 0x17:
      FUN_009f2c20(param_1,lVar2,"start_attention_ping",0,puVar6,0,FUN_009f4e24);
      pcVar3 = "release_attention_ping";
LAB_009f3ad0:
      uVar4 = 2;
      pcVar5 = FUN_009f4dc0;
    }
    FUN_009f2c20(param_1,lVar2,pcVar3,uVar4,puVar6,0,pcVar5);
LAB_009f3ae0:
    uVar7 = uVar7 + 1;
    puVar8 = puVar8 + 0x38;
    if (uVar7 == 0x1a) {
      if (*(long *)(lVar1 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}




void FUN_009f3b24(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 0x17;
  local_38 = &PTR_FUN_027c8560;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f3b88(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 0x19;
  local_38 = &PTR_FUN_027c8590;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f3bec(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 0x1a;
  local_38 = &PTR_FUN_027c85c0;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f3c50(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 0x1a;
  local_38 = &PTR_FUN_027c85d8;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f3cb4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_40 [2];
  undefined1 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19cdc(local_40,0);
  local_40[0] = &PTR_FUN_027c84b8;
  local_2c = 1;
  FUN_00a1a334(uVar2,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f3d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f3cb4(param_2,param_3);
  return;
}




void FUN_009f3d38(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_40 [3];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19cdc(local_40,0);
  local_40[0] = &PTR_FUN_027c84d0;
  FUN_00a1a334(uVar2,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f3da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f3d38(param_2,param_3);
  return;
}




void FUN_009f3db4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_50 [2];
  undefined1 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19cdc(local_50,1);
  local_3c = 1;
  local_50[0] = &PTR_FUN_027c84b8;
  FUN_00a1a334(uVar2,local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f3e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f3db4(param_2,param_3);
  return;
}




void FUN_009f3e40(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_40 [3];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19cdc(local_40,1);
  local_40[0] = &PTR_FUN_027c84d0;
  FUN_00a1a334(uVar2,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f3eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f3e40(param_2,param_3);
  return;
}




void FUN_009f3ebc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_40 [2];
  undefined1 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19cdc(local_40,2);
  local_40[0] = &PTR_FUN_027c84b8;
  local_2c = 1;
  FUN_00a1a334(uVar2,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f3f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f3ebc(param_2,param_3);
  return;
}




void FUN_009f3f40(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_40 [3];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19cdc(local_40,2);
  local_40[0] = &PTR_FUN_027c84d0;
  FUN_00a1a334(uVar2,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f3fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f3f40(param_2,param_3);
  return;
}




void FUN_009f3fbc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19ee4(auStack_38,0);
  FUN_00a1a334(uVar2,auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

