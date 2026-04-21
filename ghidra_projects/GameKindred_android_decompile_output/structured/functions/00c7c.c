// functions/00c7c — 26 functions
#include "libGameKindred.h"




void FUN_00c7c030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c7c03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  return;
}




void FUN_00c7c040(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c7c04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  return;
}




void FUN_00c7c050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c7c05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  return;
}




void thunk_FUN_00c7cd40(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_00f08be8(param_1 + 0x3bc0);
  uVar2 = FUN_00e70b34(uVar1,param_1 + 0x3ec0);
  if ((uVar2 & 1) != 0) {
    FUN_00ed84c8(param_1 + 0x3928);
    return;
  }
  return;
}




void FUN_00c7c064(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00ed84c8(param_1 + 0x3928);
  FUN_00ed7eb0(param_1 + 0x3928);
  FUN_00f0490c(param_4);
  return;
}




void FUN_00c7c09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c7cdc4(param_1,param_4);
  return;
}




void FUN_00c7c0a4(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  float fVar12;
  float local_90;
  float fStack_8c;
  long local_88;
  
  lVar7 = tpidr_el0;
  local_88 = *(long *)(lVar7 + 0x28);
  FUN_00f13db4();
  local_90 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fStack_8c = (float)param_2;
  FUN_00f13f18(param_3 + 0x18,&local_90);
  plVar1 = param_3 + 0x36;
  (**(code **)(*param_3 + 0x48))(param_3);
  uVar11 = 0x42f00000;
  FUN_00f13f08(plVar1);
  local_90 = (float)FUN_00f13e54(plVar1);
  fStack_8c = (float)uVar11;
  FUN_00f13f18(param_3 + 0x4d,&local_90);
  plVar2 = param_3 + 0x6b;
  local_90 = (float)FUN_00f13e54(plVar1);
  fStack_8c = (float)uVar11;
  FUN_00f13f18(plVar2,&local_90);
  plVar3 = param_3 + 0x9f;
  fVar9 = (float)FUN_00f13e54(plVar1);
  FUN_00f0e74c(plVar3,(int)(fVar9 * 0.45));
  uVar10 = FUN_00f13e54(plVar1);
  FUN_00f13f08(uVar10,0x40800000,param_3 + 0xbd);
  plVar4 = param_3 + 0x6d2;
  fVar9 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar12 = 100.0;
  FUN_00f13f08(fVar9 + -96.0,plVar4);
  local_90 = (float)FUN_00f13e54(plVar4);
  fStack_8c = fVar12;
  FUN_00f13f18(param_3 + 0x707,&local_90);
  local_90 = (float)FUN_00f13e54(plVar4);
  local_90 = local_90 + -6.0;
  fVar12 = fVar12 + -6.0;
  fStack_8c = fVar12;
  FUN_00f13f18(param_3 + 0x6e9,&local_90);
  FUN_00f13e54(plVar4);
  FUN_00ed7fc8(param_3 + 0x725);
  plVar5 = param_3 + 0x56f;
  uVar10 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar9 = fVar12;
  FUN_00f13e54(plVar1);
  fVar12 = fVar12 - fVar9;
  FUN_00f13e54(plVar4);
  fVar9 = (fVar12 - fVar9) + -96.0;
  FUN_00f13f08(uVar10,plVar5);
  local_90 = (float)FUN_00f13e54(plVar5);
  fStack_8c = fVar9;
  FUN_00f13f18(param_3 + 0x6b4,&local_90);
  FUN_00f07940(0,0,param_3 + 0x18,8,param_3,8);
  FUN_00f07b18(0,plVar1,0,param_3,0);
  FUN_00f07940(0,0,param_3 + 0x4d,8,plVar1,8);
  FUN_00f07940(0,0,plVar2,8,plVar1,8);
  FUN_00f07b18(0xc3200000,plVar3,3,plVar2,3);
  FUN_00f07b18(0,plVar3,5,plVar2,5);
  FUN_00f07b18(0,param_3 + 0xbd,2,plVar1,2);
  FUN_00f07b18(0x42400000,param_3 + 0xdb,3,plVar1,3);
  FUN_00f07b18(0,param_3 + 0xdb,5,plVar1,5);
  plVar2 = param_3 + 0x27b;
  if (((*(byte *)((long)param_3 + 0x145c) >> 2 & 1) != 0) &&
     ((*(byte *)((long)param_3 + 0x202c) >> 2 & 1) == 0)) {
    FUN_00f07b18(0xc2c00000,plVar2,1,plVar1,1);
  }
  plVar3 = param_3 + 0x101;
  if (((*(byte *)((long)param_3 + 0x88c) >> 2 & 1) != 0) &&
     ((*(byte *)((long)param_3 + 0x202c) >> 2 & 1) == 0)) {
    FUN_00f07b18(0xc2c00000,plVar3,1,plVar1,1);
  }
  plVar6 = param_3 + 0x3f5;
  if ((*(byte *)((long)param_3 + 0x202c) >> 2 & 1) != 0) {
    FUN_00f07b18(0xc2c00000,plVar6,1,plVar1,1);
    if ((*(byte *)((long)param_3 + 0x145c) >> 2 & 1) == 0) {
      plVar8 = plVar6;
      if ((*(byte *)((long)param_3 + 0x88c) >> 2 & 1) == 0) goto LAB_00c7c498;
    }
    else {
      FUN_00f07b18(0xc2c00000,plVar2,1,plVar6,3);
      plVar8 = plVar2;
    }
    FUN_00f07b18(0xc2c00000,plVar3,1,plVar8,3);
  }
LAB_00c7c498:
  FUN_00f07b18(0,plVar6,5,plVar1,5);
  FUN_00f07b18(0,plVar3,5,plVar1,5);
  FUN_00f07b18(0,plVar2,5,plVar1,5);
  FUN_00f07940(0,0,plVar5,4,plVar1,6);
  FUN_00f07b18(0,plVar5,4,param_3,4);
  FUN_00f07940(0,0,param_3 + 0x6b4,8,plVar5,8);
  FUN_00f07940(0,0xc2400000,plVar4,6,param_3,6);
  FUN_00f07b18(0,plVar4,4,param_3,4);
  FUN_00f07940(0,0,param_3 + 0x6e9,8,plVar4,8);
  FUN_00f07940(0,0,param_3 + 0x707,8,plVar4,8);
  FUN_00f07940(0,0,param_3 + 0x725,8,plVar4,8);
  FUN_00c7c610(param_3);
  FUN_00ed89c8(param_3 + 0x73c);
  if (*(long *)(lVar7 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c7c610(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  plVar1 = param_3 + 0x56f;
  lVar3 = FUN_00ed5aa8(plVar1);
  if (*(long **)(lVar3 + 0x28) != (long *)0x0) {
    iVar9 = 0;
    plVar4 = *(long **)(lVar3 + 0x28);
    plVar6 = (long *)0x0;
    do {
      plVar8 = plVar4;
      lVar3 = plVar8[0x17];
      fVar10 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      fVar11 = -96.0;
      if ((int)lVar3 == 1) {
        fVar11 = -384.0;
      }
      FUN_00f13f08(fVar10 + fVar11,0,plVar8);
      fVar11 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      fVar10 = (float)(**(code **)(*plVar8 + 0x48))(plVar8);
      fVar11 = (fVar11 - fVar10) + -48.0;
      if (iVar9 == 0) {
        if ((int)plVar8[0x17] == 1) {
          plVar6 = (long *)plVar8[4];
          fVar10 = 48.0;
          if ((char)plVar8[0xb5] != '\0') {
            fVar10 = fVar11;
          }
          uVar5 = 0;
          uVar7 = 0;
          param_2 = 0.0;
        }
        else {
          plVar6 = (long *)plVar8[4];
          uVar5 = 4;
          uVar7 = 4;
          fVar10 = 0.0;
          param_2 = 0.0;
        }
      }
      else {
        param_2 = 72.0;
        if ((int)plVar8[0x17] == 1) {
          cVar2 = (char)plVar8[0xb5];
          if ((int)plVar6[0x17] == 0) goto joined_r0x00c7c74c;
          if (cVar2 == '\0') {
            if ((char)plVar6[0xb5] == '\0') goto LAB_00c7c7a0;
            fVar10 = 48.0 - fVar11;
            goto LAB_00c7c794;
          }
          if ((char)plVar6[0xb5] == '\0') {
            fVar10 = fVar11 + -48.0;
            goto LAB_00c7c794;
          }
LAB_00c7c7a0:
          uVar5 = 4;
          uVar7 = 6;
        }
        else {
          if ((int)plVar6[0x17] != 1) goto LAB_00c7c7a0;
          cVar2 = (char)plVar6[0xb5];
joined_r0x00c7c74c:
          if (cVar2 == '\0') {
            fVar10 = 0.0;
LAB_00c7c794:
            uVar7 = 3;
            uVar5 = 0;
            goto LAB_00c7c7b8;
          }
          uVar5 = 1;
          uVar7 = 2;
        }
        fVar10 = 0.0;
      }
LAB_00c7c7b8:
      FUN_00f07940(fVar10,plVar8,uVar5,plVar6,uVar7);
      iVar9 = iVar9 + -1;
      plVar4 = (long *)plVar8[6];
      plVar6 = plVar8;
    } while ((long *)plVar8[6] != (long *)0x0);
  }
  lVar3 = FUN_00ed5aa8(plVar1);
  plVar4 = (long *)FUN_00ed5aa8(plVar1);
  (**(code **)(*plVar4 + 0x48))();
  fVar11 = param_2;
  FUN_00f13e54(plVar1);
  if (*(float *)(lVar3 + 0x44) != -(param_2 - fVar11)) {
    *(float *)(lVar3 + 0x44) = -(param_2 - fVar11);
    FUN_0091ada4(lVar3);
    return;
  }
  return;
}




void FUN_00c7c850(long param_1)

{
  FUN_00ed84c8(param_1 + 0x3928);
  FUN_00ed7eb0(param_1 + 0x3928);
  return;
}




void FUN_00c7c87c(long param_1)

{
  FUN_00ed84c8(param_1 + 0x3928);
  FUN_00ed7eb0(param_1 + 0x3928);
  return;
}




void FUN_00c7c8a8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  long *plVar1;
  float fVar2;
  
  plVar1 = operator_new(0x5b0);
  FUN_00c7b48c();
  *(uint *)((long)plVar1 + 0x84) = *(uint *)((long)plVar1 + 0x84) | 0x20;
  *(undefined4 *)(plVar1 + 0x17) = 1;
  FUN_00c7b784(plVar1,param_2,param_3,param_4,param_5 & 1);
  fVar2 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(fVar2 + -384.0,0,plVar1);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  FUN_00ed5664(param_1 + 0x56f,plVar1,1);
  FUN_00c7c610(param_1);
  return;
}




void FUN_00c7c970(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  float fVar2;
  
  plVar1 = operator_new(0x500);
  FUN_00c7b100();
  *(uint *)((long)plVar1 + 0x84) = *(uint *)((long)plVar1 + 0x84) | 0x20;
  *(undefined4 *)(plVar1 + 0x17) = 0;
  FUN_00c7b3d8(plVar1,param_2,param_3);
  fVar2 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(fVar2 + -96.0,0,plVar1);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  FUN_00ed5664(param_1 + 0x56f,plVar1,1);
  FUN_00c7c610(param_1);
  return;
}




void FUN_00c7ca1c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00ed5aa8(param_1 + 0x2b78);
  lVar1 = *(long *)(lVar1 + 0x28);
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x30);
    FUN_00f01a4c(lVar1,1);
    lVar1 = lVar2;
  }
  return;
}




void FUN_00c7ca5c(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  char *pcVar4;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_4 & 1) == 0) {
    uVar3 = *(uint *)(param_1 + 0x88c);
    if (((param_2 & 1) != 0) || ((param_3 & 1) != 0)) {
      *(uint *)(param_1 + 0x88c) = uVar3 | 4;
      puVar2 = PTR_s_build___MenuPartsCommon_tga_02be3530;
      if ((param_2 & 1) == 0) {
        pcVar4 = "generic_guild_outline";
      }
      else {
        pcVar4 = "generic_guild";
      }
      FUN_008fa54c(local_50,pcVar4);
      FUN_008fa54c(local_68,pcVar4);
      FUN_00c93a88(param_1 + 0x808,puVar2,local_50,local_68);
      if ((local_68[0] & 1) != 0) {
        operator_delete(local_58);
      }
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      goto LAB_00c7ca9c;
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x88c);
  }
  *(uint *)(param_1 + 0x88c) = uVar3 & 0xfffffffb;
LAB_00c7ca9c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7cb44(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  char *pcVar4;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_4 & 1) == 0) {
    uVar3 = *(uint *)(param_1 + 0x145c);
    if (((param_2 & 1) != 0) || ((param_3 & 1) != 0)) {
      *(uint *)(param_1 + 0x145c) = uVar3 | 4;
      puVar2 = PTR_s_build___MenuPartsCommon_tga_02be3530;
      if ((param_2 & 1) == 0) {
        pcVar4 = "generic_team_outline";
      }
      else {
        pcVar4 = "generic_team";
      }
      FUN_008fa54c(local_50,pcVar4);
      FUN_008fa54c(local_68,pcVar4);
      FUN_00c93a88(param_1 + 0x13d8,puVar2,local_50,local_68);
      if ((local_68[0] & 1) != 0) {
        operator_delete(local_58);
      }
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      goto LAB_00c7cb84;
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x145c);
  }
  *(uint *)(param_1 + 0x145c) = uVar3 & 0xfffffffb;
LAB_00c7cb84:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7cc30(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  puVar2 = PTR_s_build___VGX_common_atlas_02be3540;
  puVar4 = PTR_s_build___MenuPartsCommon_tga_02be3530;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_2 & 1) == 0) {
    pcVar3 = "generic_invite_friend_hollow";
    FUN_008fa54c(local_50,"generic_invite_friend_hollow");
  }
  else {
    FUN_008fa54c(local_50,"global_checkbox_x_normal");
    pcVar3 = "global_checkbox_x_press_round";
    puVar4 = puVar2;
  }
  FUN_008fa54c(local_68,pcVar3);
  FUN_00c93a88(param_1 + 0x1fa8,puVar4,local_50,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7cd10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c7cd1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  return;
}




void FUN_00c7cd20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c7cd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  return;
}




void FUN_00c7cd30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c7cd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  return;
}




void FUN_00c7cd40(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_00f08be8(param_1 + 0x3bc0);
  uVar2 = FUN_00e70b34(uVar1,param_1 + 0x3ec0);
  if ((uVar2 & 1) != 0) {
    FUN_00ed84c8(param_1 + 0x3928);
    return;
  }
  return;
}




void FUN_00c7cd8c(long param_1,undefined8 param_2)

{
  FUN_00ed84c8(param_1 + 0x3928);
  FUN_00ed7eb0(param_1 + 0x3928);
  FUN_00f0490c(param_2);
  return;
}




void FUN_00c7cdc4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00f04924(param_2);
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(param_1 + 0xb8))(*(undefined8 **)(param_1 + 0xb8),lVar1);
  }
  FUN_00ed84c8(param_1 + 0x3928);
  FUN_00f0490c(param_2);
  return;
}




void FUN_00c7ce14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02802e00;
  FUN_00f0d3a4(param_1 + 0x7a);
  FUN_00f0d3a4(param_1 + 0x54);
  param_1[0x36] = &PTR_FUN_028266f0;
  param_1[0x4d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x50);
  FUN_00f13d08(param_1 + 0x36);
  param_1[0x18] = &PTR_FUN_028266f0;
  param_1[0x2f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c7cea4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02802e00;
  FUN_00f0d3a4(param_1 + 0x7a);
  FUN_00f0d3a4(param_1 + 0x54);
  param_1[0x36] = &PTR_FUN_028266f0;
  param_1[0x4d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x50);
  FUN_00f13d08(param_1 + 0x36);
  param_1[0x18] = &PTR_FUN_028266f0;
  param_1[0x2f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c7cf3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02802f48;
  FUN_00f0d3a4(param_1 + 0x8f);
  FUN_00f0d3a4(param_1 + 0x69);
  FUN_00f0d3a4(param_1 + 0x43);
  param_1[0x18] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x2f);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c7cfa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02802f48;
  FUN_00f0d3a4(param_1 + 0x8f);
  FUN_00f0d3a4(param_1 + 0x69);
  FUN_00f0d3a4(param_1 + 0x43);
  param_1[0x18] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x2f);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}

