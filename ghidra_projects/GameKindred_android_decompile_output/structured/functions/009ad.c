// functions/009ad — 44 functions
#include "libGameKindred.h"




void FUN_009ad05c(long param_1)

{
  FUN_009acfd8(param_1 + -0x28);
  return;
}




void FUN_009ad064(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  lVar1 = FUN_01988738(DAT_0312e88c,0);
  if (lVar1 != 0) {
    uVar3 = FUN_009a8678(uVar2);
    FUN_009a6ecc(uVar3,param_1,lVar1,uVar2,param_3,*(uint *)(param_2 + 0x9c) >> 8 & 1);
    *(uint *)(param_2 + 0x9c) = *(uint *)(param_2 + 0x9c) ^ 0x100;
  }
  return;
}




void FUN_009ad0e4(long param_1)

{
  FUN_009ad064(param_1 + -0x28);
  return;
}




void FUN_009ad0ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  lVar1 = FUN_01988738(DAT_0312e88c,0);
  if ((lVar1 != 0) && ((param_5 == -1 || (uVar2 = FUN_00ced270(param_5), (uVar2 & 1) != 0)))) {
    uVar4 = FUN_009a8678(uVar3);
    FUN_009a6ee4(uVar4,param_1,lVar1,uVar3,param_3,param_4);
    return;
  }
  return;
}




void FUN_009ad19c(long param_1)

{
  FUN_009ad0ec(param_1 + -0x28);
  return;
}




void FUN_009ad1a4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  lVar1 = FUN_01988738(DAT_0312e88c,0);
  if ((lVar1 != 0) && ((param_5 == -1 || (uVar2 = FUN_00ced270(param_5), (uVar2 & 1) != 0)))) {
    uVar4 = FUN_009a8678(uVar3);
    FUN_009a71bc(uVar4,param_1,lVar1,uVar3,param_3,param_4);
    return;
  }
  return;
}




void FUN_009ad254(long param_1)

{
  FUN_009ad1a4(param_1 + -0x28);
  return;
}




void FUN_009ad25c(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x9c);
  iVar3 = 0x200;
  if ((param_2 & 1) == 0) {
    iVar3 = 0x3e00;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x9c) = uVar1 & 0xffffc1ff | iVar3 + uVar1 & 0x3e00;
  if ((lVar2 != 0) && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c09220)) {
    lVar2 = 0;
  }
  FUN_009ad2bc(param_1,lVar2 + 0x2fc);
  return;
}




void FUN_009ad2bc(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  byte local_4c;
  undefined3 uStack_4b;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = *param_2;
  uVar1 = *(uint *)(param_1 + 0x9c);
  _local_4c = CONCAT31((int3)(uVar5 >> 8),
                       (byte)uVar5 & 0x1f | ((uVar1 & 0x3e00) != 0) << 5 |
                       ((uVar1 & 0x7c000) != 0) << 6 | ((uVar1 & 0xf80000) != 0) << 7);
  if (*(long *)(param_1 + 0x48) != 0) {
    if (((uVar1 & 0x3e00) == 0) && ((uVar5 & 0x1f) != 0)) {
      FUN_00e7cdd8();
    }
    else {
      FUN_00e7ce38();
    }
  }
  uVar5 = 0x10000;
  lVar3 = param_1;
LAB_009ad394:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_1) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x36de0632), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4,&local_4c);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_009ad394;
      }
      if ((uVar5 & 0xffff) == 0) goto LAB_009ad3f0;
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((lVar4 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) {
LAB_009ad3f0:
      if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) goto LAB_009ad3f0;
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) goto LAB_009ad3f0;
    }
  } while( true );
}




void FUN_009ad41c(long param_1,uint param_2)

{
  FUN_009ad25c(param_1 + -0x28,param_2 & 1);
  return;
}




void FUN_009ad428(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x9c);
  iVar3 = 0x4000;
  if ((param_2 & 1) == 0) {
    iVar3 = 0x7c000;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x9c) = uVar1 & 0xfff83fff | iVar3 + uVar1 & 0x7c000;
  if ((lVar2 != 0) && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c09220)) {
    lVar2 = 0;
  }
  FUN_009ad2bc(param_1,lVar2 + 0x2fc);
  return;
}




void FUN_009ad488(long param_1,uint param_2)

{
  FUN_009ad428(param_1 + -0x28,param_2 & 1);
  return;
}




void FUN_009ad494(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x9c);
  iVar3 = 0x80000;
  if ((param_2 & 1) == 0) {
    iVar3 = 0xf80000;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x9c) = uVar1 & 0xff07ffff | iVar3 + uVar1 & 0xf80000;
  if ((lVar2 != 0) && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c09220)) {
    lVar2 = 0;
  }
  FUN_009ad2bc(param_1,lVar2 + 0x2fc);
  return;
}




void FUN_009ad4f4(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00e7ca50();
    return;
  }
  return;
}




void FUN_009ad504(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00e7ca50();
    return;
  }
  return;
}




void FUN_009ad514(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00e7cce0();
    return;
  }
  return;
}




void FUN_009ad524(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00e7cce0();
    return;
  }
  return;
}




void FUN_009ad534(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfdffffff | (param_2 & 1) << 0x19;
  return;
}




void FUN_009ad554(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xfdffffff | (param_2 & 1) << 0x19;
  return;
}




undefined8 FUN_009ad574(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}




undefined8 FUN_009ad57c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}




void FUN_009ad584(undefined8 param_1,undefined4 param_2,int param_3,float *param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  float local_60;
  float fStack_5c;
  float local_58;
  undefined4 local_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_009ad710(param_1,param_5);
  if ((param_3 == -1) && (param_5 - 1U < 6)) {
    lVar2 = FUN_01985d44(param_1,DAT_02e3ef98);
    if (lVar2 != 0) {
      uStack_88 = 0;
      local_90 = 0x3f800000;
      uStack_78 = 0;
      uStack_80 = 0x3f80000000000000;
      local_54 = 0x3f800000;
      uStack_68 = 0x3f800000;
      local_70 = 0;
      local_60 = *param_4 + 0.0;
      fStack_5c = param_4[1] + 0.0;
      local_58 = param_4[2] + 0.0;
      FUN_009d31b4(lVar2,(&PTR_s_Effect_Ping_Danger_027c1e50)[(int)(param_5 - 1U)],1);
      FUN_009d3440(0x40800000,lVar2);
      FUN_009d34d4(lVar2,&local_90);
      FUN_009d33ec(lVar2);
    }
    if (((param_5 == 3) && (lVar2 = FUN_00d9e390(param_2), lVar2 != 0)) &&
       (lVar3 = FUN_01988738(DAT_0312e88c,0), lVar3 != 0)) {
      local_90 = CONCAT44(local_90._4_4_,0xffffff00);
      uVar4 = FUN_00e6ce7c(*(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x28),0);
      FUN_009a8188(0x40900000,lVar3,param_4,&local_90,uVar4);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009ad710(long param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  switch(param_2) {
  default:
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = "build://Sounds/UI.assetbundle/sfx__minimap_ping.mp3";
    break;
  case 3:
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = "build://Sounds/UI.assetbundle/sfx__minimap_omw.mp3";
    break;
  case 4:
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = "build://Sounds/UI.assetbundle/sfx__minimap_avoid.mp3";
    break;
  case 5:
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = "build://Sounds/UI.assetbundle/sfx__minimap_meetup.mp3";
    break;
  case 6:
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = "build://Sounds/UI.assetbundle/sfx__minimap_mia.mp3";
    break;
  case 7:
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = "build://Sounds/UI.assetbundle/sfx__social_thanks.mp3";
    break;
  case 8:
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = "build://Sounds/UI.assetbundle/sfx__social_happy.mp3";
    break;
  case 9:
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = "build://Sounds/UI.assetbundle/sfx__social_sad.mp3";
    break;
  case 10:
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = "build://Sounds/UI.assetbundle/sfx__social_cheers.mp3";
    break;
  case 0xb:
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = "build://Sounds/UI.assetbundle/sfx__social_okay.mp3";
  }
  FUN_009ac620(0x3f800000,param_1,pcVar1,0,uVar2);
  return;
}




undefined * FUN_009ad7d8(int param_1)

{
  if (param_1 - 1U < 6) {
    return (&PTR_s_Effect_Ping_Danger_027c1e50)[(int)(param_1 - 1U)];
  }
  return (undefined *)0x0;
}




void FUN_009ad7fc(long param_1)

{
  FUN_009ad584(param_1 + -0x28);
  return;
}




void FUN_009ad804(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long local_158 [32];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x50) != 0) {
    thunk_FUN_00d9ff34(local_158,param_2);
    uVar3 = FUN_019970a8(*(undefined8 *)(param_1 + 0x50),(undefined4)local_158[0]);
    if ((uVar3 & 1) != 0) {
      switch(param_4) {
      case 1:
        FUN_0199712c(*param_3,*(undefined8 *)(param_1 + 0x50),(undefined4)local_158[0]);
        break;
      case 2:
        FUN_019971b0(*(undefined8 *)(param_1 + 0x50),(undefined4)local_158[0],param_3);
        break;
      case 3:
        FUN_01997200(*(undefined8 *)(param_1 + 0x50),(undefined4)local_158[0],param_3);
        break;
      case 4:
        FUN_01997250(*(undefined8 *)(param_1 + 0x50),(undefined4)local_158[0],param_3);
      }
    }
    uVar2 = FUN_01985cbc(param_1,local_158,0x20,DAT_0312eb20);
    if (uVar2 != 0) {
      uVar3 = (ulong)uVar2;
      plVar5 = local_158;
      do {
        lVar4 = *plVar5;
        if ((lVar4 != 0) && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_0312eb20)) {
          FUN_009cb3b4(lVar4,param_2,param_4,param_3);
        }
        uVar3 = uVar3 - 1;
        plVar5 = plVar5 + 1;
      } while (uVar3 != 0);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009ad95c(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if ((*(byte *)(*(long *)(param_1 + 0x10) + 0x2f4) & 1) == 0) {
    return;
  }
  FUN_00d5bc6c();
  lVar1 = FUN_00d9e390();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = FUN_00d5bae0();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + -0x28;
  }
  if (((*(uint *)(lVar1 + 0x9c) & 0xe0) != 0) && (*(float *)(lVar1 + 0x98) <= 0.0)) {
    return;
  }
  FUN_009ada44(lVar1);
  switch(*(uint *)(lVar1 + 0x9c) >> 5 & 7) {
  default:
    fVar3 = (float)NEON_fminnm(*(float *)(lVar1 + 0x98) + 10.0,0x41200000);
    goto LAB_009ada18;
  case 2:
    fVar3 = *(float *)(lVar1 + 0x98);
    fVar4 = 12.5;
    break;
  case 3:
    fVar3 = *(float *)(lVar1 + 0x98);
    fVar4 = 15.0;
    break;
  case 4:
    fVar3 = *(float *)(lVar1 + 0x98);
    fVar4 = 20.0;
  }
  fVar3 = (float)NEON_fminnm(fVar3 + fVar4,0x41200000);
LAB_009ada18:
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(float *)(lVar1 + 0x98) = fVar3;
  return;
}




uint FUN_009ada30(long param_1)

{
  return *(uint *)(param_1 + 0x9c) >> 5 & 7;
}




undefined4 FUN_009ada3c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x98);
}




void FUN_009ada44(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x9c) >> 5 & 7;
  uVar4 = FUN_00ceace8();
  uVar2 = FUN_00d55870(uVar5);
  uVar3 = FUN_00ceb12c(uVar4,uVar2);
  if ((int)(uVar1 + 1) < (int)uVar3) {
    uVar3 = uVar1 + 1;
  }
  *(uint *)(param_1 + 0x9c) =
       *(uint *)(param_1 + 0x9c) & 0xffffff1f |
       (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU) & 7) << 5;
  return;
}




void FUN_009adac4(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm(*(float *)(param_2 + 0x98) + param_1,0x41200000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_2 + 0x98) = fVar1;
  return;
}




void FUN_009adae4(long param_1)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm(*(float *)(param_1 + 0x98) + 0.0,0x41200000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x98) = fVar1;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffffff1f;
  return;
}




void FUN_009adb18(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009b2f18(*(undefined8 *)(param_1 + 0x58),"DanceIntro");
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_009b2f18(uVar5,"Dance");
    if ((uVar2 & 1) == 0) goto LAB_009adbc8;
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    thunk_FUN_00d9ff34(auStack_40,"Dance");
    pcVar4 = "";
    uVar3 = 1;
  }
  else {
    thunk_FUN_00d9ff34(auStack_40,"DanceIntro");
    pcVar4 = "IntroToDance";
    uVar3 = 0;
  }
  FUN_009b28f0(0x3f800000,uVar5,auStack_40,uVar3,0,pcVar4);
LAB_009adbc8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009adbf0(long param_1)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009b2f18(*(undefined8 *)(param_1 + 0x58),"TauntIntro");
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_009b2f18(uVar4,"Taunt");
    if ((uVar2 & 1) == 0) goto LAB_009adc9c;
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    thunk_FUN_00d9ff34(auStack_40,"Taunt");
    pcVar3 = "AttackToIdle";
  }
  else {
    thunk_FUN_00d9ff34(auStack_40,"TauntIntro");
    pcVar3 = "IntroToTaunt";
  }
  FUN_009b28f0(0x3f800000,uVar4,auStack_40,0,0,pcVar3);
LAB_009adc9c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009adcc4(long param_1,int *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  long lVar8;
  
  if (*param_2 == -0x7ee3623b) {
    return 0;
  }
  if (*param_2 != 0) {
    lVar8 = *(long *)(param_1 + 0x10);
    lVar2 = FUN_00ccecc4(param_2);
    if (lVar2 != 0) {
      uVar3 = FUN_00d6eb50();
      lVar2 = FUN_00d6eb5c(uVar3,*(undefined8 *)(lVar2 + 8));
      if (lVar2 != 0) {
        lVar2 = FUN_009ade60(param_1,lVar2);
        if (lVar2 == 0) {
          return 0;
        }
        lVar4 = FUN_01985d44(param_1,DAT_0312ebd0);
        if (lVar4 != 0) {
          FUN_009b627c(lVar4,*(undefined8 *)(lVar2 + 0x40));
          FUN_009b62dc(lVar4,*(undefined8 *)(lVar2 + 0x48),lVar2 + 0x50);
          FUN_009b6320(lVar4,lVar8 + 0x2fc);
          lVar8 = FUN_01985d44(param_1,DAT_0312ebe0);
          if (lVar8 != 0) {
            uVar5 = FUN_00e6a488(*(undefined8 *)(lVar2 + 8));
            if ((uVar5 & 1) == 0) {
              uVar1 = FUN_01995208(*(undefined8 *)(lVar2 + 8));
              uVar3 = 3;
            }
            else {
              uVar5 = FUN_00e6a488(*(undefined8 *)(lVar2 + 0x10));
              if ((uVar5 & 1) != 0) {
                FUN_009b5b60(lVar8,lVar4 + 0x28,param_1 + 0x30,1,0);
                return 1;
              }
              pbVar6 = *(byte **)(lVar2 + 0x10);
              uVar1 = 0x811c9dc5;
              uVar7 = (uint)*pbVar6;
              if (*pbVar6 != 0) {
                do {
                  pbVar6 = pbVar6 + 1;
                  uVar1 = (uVar1 ^ uVar7) * 0x1000193;
                  uVar7 = (uint)*pbVar6;
                } while (*pbVar6 != 0);
              }
              uVar3 = 2;
            }
            FUN_009b5b60(lVar8,lVar4 + 0x28,param_1 + 0x30,uVar3,uVar1);
            return 1;
          }
        }
      }
    }
    return 0;
  }
  return 0;
}




long FUN_009ade60(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c09220) {
    lVar4 = 0;
  }
  puVar2 = (undefined8 *)FUN_00d5cdac(lVar4);
  if ((puVar2 != (undefined8 *)0x0) && (plVar6 = *(long **)(param_2 + 0x78), plVar6 != (long *)0x0))
  {
    puVar5 = (undefined8 *)*plVar6;
    while (puVar5 != (undefined8 *)0x0) {
      iVar1 = strcmp((char *)*puVar5,(char *)*puVar2);
      if (iVar1 == 0) {
        if (*plVar6 != 0) {
          return *plVar6;
        }
        break;
      }
      puVar5 = (undefined8 *)plVar6[1];
      plVar6 = plVar6 + 1;
    }
  }
  uVar3 = FUN_00e6a488(*(undefined8 *)(param_2 + 0x40));
  lVar4 = 0;
  if ((uVar3 & 1) == 0) {
    lVar4 = param_2;
  }
  return lVar4;
}




void FUN_009adf00(long param_1)

{
  FUN_009adcc4(param_1 + -0x28);
  return;
}




void FUN_009adf08(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x009adf14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x1a8))(param_2,param_1);
  return;
}




void FUN_009adf18(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x009adf24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + -0x30) + 0x1a8))((long *)(param_2 + -0x30),param_1);
  return;
}




void FUN_009adf28(long param_1)

{
  FUN_00d58198(*(undefined8 *)(param_1 + 0x10));
  return;
}




void FUN_009adf30(long param_1)

{
  FUN_00d58198(*(undefined8 *)(param_1 + -0x20));
  return;
}




void FUN_009adf38(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(lVar3 + 0x18);
  do {
    if (lVar1 == 0) {
LAB_009adf94:
      FUN_00d58198(lVar3,param_2);
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312eae0) {
      uVar2 = FUN_009b3484(lVar1,param_2,param_3,param_4 & 1);
      if ((uVar2 & 1) != 0) {
        return;
      }
      goto LAB_009adf94;
    }
    lVar1 = *(long *)(lVar1 + 0x20);
  } while( true );
}




void FUN_009adfa8(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  FUN_009adf38(param_1 + -0x30,param_2,param_3,param_4 & 1);
  return;
}




void FUN_009adfb4(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = param_2;
  FUN_00d58298(*(undefined8 *)(param_1 + 0x10),local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

