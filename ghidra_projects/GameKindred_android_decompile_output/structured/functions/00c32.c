// functions/00c32 — 40 functions
#include "libGameKindred.h"




void FUN_00c3208c(void *param_1)

{
  FUN_00c31e98();
  operator_delete(param_1);
  return;
}




void FUN_00c320b0(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_3 + 0x48))();
  FUN_00f13f08(uVar2,param_2 * 0.6,param_3 + 0x55);
  FUN_00f07b18(0,param_3 + 0x55,2,param_3,2);
  FUN_00967388(0,0,0,&local_3c);
  FUN_00f13f08(uVar2,(float)(local_3c + 0xfa),param_3 + 0x1152);
  FUN_00f07940(0,0,param_3 + 0x1152,3,param_3,3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00c32198(void)

{
  long lVar1;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00967388(0,0,0,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return (float)(local_2c + 0xfa);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c321f8(void)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f0025c(&uStack_2c,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uStack_2c,local_30);
}




void FUN_00c32248(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00967388(0,0,0,&local_4c);
  uVar2 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  param_2 = param_2 - (float)(local_4c + 0xfa);
  FUN_00f13f08(uVar2,param_2,param_3 + 0x1c);
  uVar2 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f13f08(uVar2,param_2 * 0.6,param_3 + 0x55);
  FUN_00f07a78(0,0,param_3,0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c32348(long param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  byte local_b0 [16];
  void *local_a0;
  uint local_94;
  undefined1 auStack_90 [8];
  code *local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00d6eb50();
  local_94 = FUN_00d6e9d4(uVar4,*param_2);
  uVar7 = (ulong)local_94;
  FUN_00cae2c8(local_b0);
  uVar4 = FUN_00e6ce7c(param_2[3],0);
  uVar3 = FUN_00cea0fc(param_2);
  pvVar1 = (void *)((ulong)local_b0 | 1);
  if ((local_b0[0] & 1) != 0) {
    pvVar1 = local_a0;
  }
  lVar5 = FUN_00aaccf4(param_1 + 0x1598,*param_2,pvVar1,uVar4,uVar3,param_3 & 1,param_4 & 1);
  local_60 = DAT_03210c64;
  local_88 = FUN_00c32490;
  local_78 = 0;
  uStack_70 = 0;
  lStack_80 = param_1;
  local_68 = uVar7;
  FUN_009693a0(lVar5 + 8,&local_88);
  local_88 = (code *)&local_94;
  lVar6 = FUN_00c24ef0(param_1 + 0x2e60,&local_94,&DAT_01bbcad2,&local_88,auStack_90);
  *(long *)(lVar6 + 0x28) = lVar5;
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c32490(long param_1)

{
  undefined4 in_w4;
  
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_character_lobby_tap_hero.mp3",0,0);
                    /* WARNING: Could not recover jumptable at 0x00c324d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xd8))(*(undefined8 **)(param_1 + 0xd8),in_w4);
  return;
}




void FUN_00c324d8(long param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  uint local_5c;
  undefined1 auStack_58 [8];
  uint *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x2e68);
  local_5c = param_2;
  if (lVar4 != 0) {
    lVar3 = param_1 + 0x2e68;
    do {
      bVar2 = *(uint *)(lVar4 + 0x20) < param_2;
      if (!bVar2) {
        lVar3 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + (ulong)bVar2 * 8);
    } while (lVar4 != 0);
    if ((lVar3 != param_1 + 0x2e68) && (*(uint *)(lVar3 + 0x20) <= param_2)) {
      lVar4 = param_1 + 0x2e60;
      local_50 = &local_5c;
      lVar3 = FUN_00c24ef0(lVar4,&local_5c,&DAT_01bbcad2,&local_50,auStack_58);
      FUN_00aace28(param_1 + 0x1598,*(undefined8 *)(lVar3 + 0x28));
      local_50 = &local_5c;
      lVar3 = FUN_00c24ef0(lVar4,&local_5c,&DAT_01bbcad2,&local_50,auStack_58);
      if (*(long **)(lVar3 + 0x28) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x28) + 8))();
      }
      FUN_00c32fb4(lVar4,&local_5c);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c325ec(long param_1,undefined4 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined4 local_4c;
  undefined1 auStack_48 [8];
  undefined4 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = &local_4c;
  local_4c = param_2;
  lVar2 = FUN_00c24ef0(param_1 + 0x2e60,&local_4c,&DAT_01bbcad2,&local_40,auStack_48);
  if (*(long *)(lVar2 + 0x28) != 0) {
    if ((param_3 & 1) == 0) {
      FUN_00c324d8(param_1,param_2);
    }
    else {
      FUN_00aa9ccc(*(long *)(lVar2 + 0x28),1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c32690(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 local_3c;
  undefined1 auStack_38 [8];
  undefined4 *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = &local_3c;
  local_3c = param_2;
  lVar2 = FUN_00c24ef0(param_1 + 0x2e60,&local_3c,&DAT_01bbcad2,&local_30,auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(lVar2 + 0x28));
}




void FUN_00c32700(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_2;
  uVar2 = FUN_00ce9ba0(&local_2c);
  FUN_00aaf2b4(param_1 + 0x2fe8,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c32760(long param_1)

{
  FUN_00aaf494(param_1 + 0x2fe8);
  return;
}




void FUN_00c3276c(long param_1,uint param_2,uint param_3)

{
  if ((param_3 & 1) != 0) {
    FUN_00aac0ec(param_1 + 0x8cf0,param_2 & 1);
    return;
  }
  FUN_00aabfa0(param_1 + 0x8cf0);
  return;
}




void FUN_00c32784(long param_1,undefined4 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined4 local_5c;
  undefined1 auStack_58 [8];
  undefined4 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  param_1 = param_1 + 0x2e60;
  local_50 = &local_5c;
  local_5c = param_2;
  lVar2 = FUN_00c24ef0(param_1,&local_5c,&DAT_01bbcad2,&local_50,auStack_58);
  if (*(long *)(lVar2 + 0x28) != 0) {
    if ((param_4 & 1) == 0) {
      if ((param_3 & 1) != 0) {
        local_50 = &local_5c;
        local_5c = param_2;
        lVar2 = FUN_00c24ef0(param_1,&local_5c,&DAT_01bbcad2,&local_50,auStack_58);
        FUN_00aa9bf8(*(undefined8 *)(lVar2 + 0x28),1);
      }
    }
    else {
      local_50 = &local_5c;
      local_5c = param_2;
      lVar2 = FUN_00c24ef0(param_1,&local_5c,&DAT_01bbcad2,&local_50,auStack_58);
      FUN_00aa9be8(*(undefined8 *)(lVar2 + 0x28));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c32888(long param_1)

{
  FUN_00aab2b8(param_1 + 0xca8);
  return;
}




void FUN_00c32890(long *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(auStack_4c,auStack_50);
  if ((param_4 & 1) != 0) {
    plVar2 = param_1 + 0x1187;
    (**(code **)(*plVar2 + 0x78))(plVar2,param_2,1);
    plVar2 = (long *)FUN_00f14058(plVar2);
    (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
  }
  if ((param_3 & 1) != 0) {
    FUN_00967388(&uStack_54,0,&local_58,&local_5c);
    FUN_00c195bc(param_2,uStack_54,0,local_58,local_5c);
    plVar2 = param_1 + 0x55;
    FUN_00f023ec(plVar2,param_2,1);
    plVar3 = (long *)FUN_00f14058(plVar2);
    (**(code **)(*plVar3 + 0x58))(plVar3,param_2);
    FUN_00f07b18(0,plVar2,2,param_1,2);
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c329b8(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  FUN_00f07940(0,0,param_2,8,param_1,8);
  return;
}




void FUN_00c32a00(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  *(uint *)(param_1 + 0x161c) = *(uint *)(param_1 + 0x161c) & 0xfffffffb;
  *(uint *)(param_1 + 0x2df4) = *(uint *)(param_1 + 0x2df4) | 4;
  FUN_00aae738(param_1 + 0x8a90,1);
  *(uint *)(param_1 + 0x32c) = *(uint *)(param_1 + 0x32c) & 0xfffffffb;
  lVar1 = param_1 + 0x2f30;
  FUN_00aa8f18(param_1 + 0x950,lVar1,1);
  plVar2 = (long *)FUN_00f136e0();
  (**(code **)(*plVar2 + 0x78))(plVar2,0,1);
  (**(code **)(*plVar2 + 0x68))(plVar2,lVar1,1,0x11);
  (**(code **)(*plVar2 + 0x78))(plVar2,0,1);
  FUN_00f13fd8(param_1 + 0x950,plVar2);
  uVar3 = FUN_00f136e0();
  FUN_00f13ba0(uVar3,0x14,0xf,0,0xf);
  FUN_00f13fd8(lVar1,uVar3);
  return;
}




void FUN_00c32af4(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x2fe8;
  FUN_00aa8f18(param_1 + 0x950,lVar1,1);
  plVar2 = (long *)FUN_00f136e0();
  (**(code **)(*plVar2 + 0x60))(plVar2,lVar1,2);
  FUN_00f13fd8(param_1 + 0x950,plVar2);
  uVar3 = FUN_00f136e0();
  FUN_00f13ba0(uVar3,0x14,0xf,0,0xf);
  FUN_00f13fd8(lVar1,uVar3);
  return;
}




void FUN_00c32b7c(long param_1)

{
  FUN_00aab524(param_1 + 0xca8);
  return;
}




void FUN_00c32b84(long param_1,uint param_2)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x161c) = *(uint *)(param_1 + 0x161c) & 0xfffffffb;
  if ((param_2 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0xb8fc) | 4;
  }
  else {
    FUN_00aae780(param_1 + 0x8a90);
    uVar1 = *(uint *)(param_1 + 0xb8fc) & 0xfffffffb;
  }
  *(uint *)(param_1 + 0xb8fc) = uVar1;
  return;
}




void FUN_00c32bdc(long param_1)

{
  FUN_00aab1c4(param_1 + 0xca8);
  return;
}




void FUN_00c32be4(long param_1,undefined4 param_2,int param_3)

{
  FUN_00aac1a8(param_1 + 0x8cf0,param_3 != 0,param_2);
  return;
}




void FUN_00c32c00(long param_1)

{
  FUN_00aab85c(param_1 + 0xb878);
  return;
}




void FUN_00c32c0c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulong local_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0x2e78;
  FUN_00f023ec(lVar1,param_2,1);
  FUN_00f13f68(param_2,0xbe00000000);
  local_68 = (code *)CONCAT62(local_68._2_6_,5);
  FUN_00f14070(param_2,&local_68);
  plVar4 = (long *)FUN_00f14058(lVar1);
  (**(code **)(*plVar4 + 0x68))(plVar4,param_2,0,2);
  plVar4 = (long *)FUN_00f14058(lVar1);
  (**(code **)(*plVar4 + 0x70))(plVar4,0xf);
  iVar3 = FUN_00f025e0(lVar1);
  local_48 = (ulong)(iVar3 - 1);
  local_40 = DAT_03210c64;
  local_68 = FUN_00c32d04;
  local_58 = 0;
  uStack_50 = 0;
  lStack_60 = param_1;
  FUN_009693a0(param_2 + 8,&local_68);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c32d04(long param_1)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00c32d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x18))(*(long **)(param_1 + 0xd8),in_x4);
  return;
}




void FUN_00c32d18(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined2 local_40 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1 = param_1 + 0x2f30;
  FUN_00f023ec(param_1,param_2,1);
  FUN_00f13f68(param_2,0xbe00000000);
  local_40[0] = 5;
  FUN_00f14070(param_2,local_40);
  plVar2 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar2 + 0x68))(plVar2,param_2,0,2);
  plVar2 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar2 + 0x70))(plVar2,0xf);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c32dd0(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x2e60);
  while ((long *)(param_1 + 0x2e68) != plVar4) {
    if (plVar4[5] != 0) {
      FUN_00aa9984();
    }
    plVar2 = (long *)plVar4[1];
    if ((long *)plVar4[1] == (long *)0x0) {
      plVar2 = plVar4 + 2;
      bVar1 = *(long **)*plVar2 != plVar4;
      plVar4 = (long *)*plVar2;
      if (bVar1) {
        do {
          lVar3 = *plVar2;
          plVar2 = (long *)(lVar3 + 0x10);
          plVar4 = (long *)*plVar2;
        } while (*plVar4 != lVar3);
      }
    }
    else {
      do {
        plVar4 = plVar2;
        plVar2 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}




void FUN_00c32e58(long param_1)

{
  FUN_00aacb8c(param_1 + 0x1598);
  return;
}




void FUN_00c32e64(long param_1)

{
  FUN_00f13db4(param_1 + 0xe0);
  return;
}




void FUN_00c32e6c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00c32e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x18))(*(long **)(param_1 + 0xd8),param_3);
  return;
}




void FUN_00c32e80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  uVar1 = FUN_00f04924(param_2);
                    /* WARNING: Could not recover jumptable at 0x00c32eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,uVar1);
  return;
}




void FUN_00c32eb4(long param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_character_lobby_tap_hero.mp3",0,0);
                    /* WARNING: Could not recover jumptable at 0x00c32ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xd8))(*(undefined8 **)(param_1 + 0xd8),param_3);
  return;
}




void FUN_00c32efc(long param_1)

{
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_lock_in_confirm.mp3",0,0);
                    /* WARNING: Could not recover jumptable at 0x00c32f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 8))();
  return;
}




void FUN_00c32f3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c32f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x20))();
  return;
}




void FUN_00c32f4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c32f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x28))();
  return;
}




void FUN_00c32f5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c32f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x30))();
  return;
}




void FUN_00c32f6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c32f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x38))();
  return;
}




void FUN_00c32f7c(long param_1)

{
  FUN_00aac240(param_1 + 0x8cf0,0);
                    /* WARNING: Could not recover jumptable at 0x00c32fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x40))();
  return;
}




undefined8 FUN_00c32fb4(long param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar3;
  if (plVar4 != (long *)0x0) {
    uVar1 = *param_2;
    plVar2 = plVar3;
    do {
      if (*(uint *)(plVar4 + 4) >= uVar1) {
        plVar2 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < uVar1];
    } while (plVar4 != (long *)0x0);
    if (plVar2 != plVar3) {
      if (uVar1 < *(uint *)(plVar2 + 4)) {
        return 0;
      }
      FUN_00c3301c();
      return 1;
    }
  }
  return 0;
}

