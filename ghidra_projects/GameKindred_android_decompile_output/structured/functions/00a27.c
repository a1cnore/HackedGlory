// functions/00a27 — 15 functions
#include "libGameKindred.h"




void FUN_00a270b0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *(undefined8 *)(param_1 + 0x1a8);
  local_30 = *(undefined4 *)(param_1 + 0x1b0);
  uVar2 = FUN_00a21d58(&local_38,*(undefined4 *)(param_1 + 0x1ce8));
  if ((uVar2 & 1) != 0) {
    FUN_00a2516c(param_1,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a27120(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_02825100;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar2 = FUN_00a250a8();
  FUN_00efddc4(0x3ecccccd);
  FUN_00efcac4(0x3c23d70a,uVar2);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_02825268;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3e19999a,puVar5);
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  lVar1 = param_1 + 0x550;
  FUN_00f01980(lVar1);
  if ((*(uint *)(param_1 + 0x5d4) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x5d4) = *(uint *)(param_1 + 0x5d4) & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  FUN_00f02308(lVar1,puVar4,uVar2,puVar5,puVar6,0);
  return;
}




void FUN_00a27384(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f02550();
  uVar3 = FUN_00a26784();
  local_40 = 0x3fcccccd3fcccccd;
  FUN_00efe58c(uVar3,&local_40);
  FUN_00efcac4(0x3d4ccccd,uVar3);
  lVar1 = param_1 + 0xea8;
  FUN_00f01980(lVar1);
  if ((*(float *)(param_1 + 0xef0) != 1.0) || (*(float *)(param_1 + 0xef4) != 1.0)) {
    uVar4 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0xef0) = uVar4;
    FUN_0091ada4(lVar1);
  }
  FUN_00f02308(lVar1,uVar3,0);
  uVar3 = FUN_00a250a8();
  FUN_00efddc4(0);
  FUN_00efcac4(0x3d8f5c29,uVar3);
  lVar1 = param_1 + 0xf60;
  FUN_00f01980(lVar1);
  if ((~*(uint *)(param_1 + 0xfe4) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0xfe4) = *(uint *)(param_1 + 0xfe4) | 0x7f80;
    FUN_0091ada4(lVar1);
  }
  FUN_00f02308(lVar1,uVar3,0);
  FUN_00a239fc(param_1 + 0xb8,2,0,0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a274bc(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1ce8) == param_2) {
    FUN_00a274d4(param_1,3);
    return;
  }
  return;
}




void FUN_00a274d4(long param_1,undefined4 param_2)

{
  long lVar1;
  char *pcVar2;
  
  FUN_00f02550();
  lVar1 = param_1 + 0x1ae0;
  FUN_00afc73c(lVar1);
  if ((*(byte *)(param_1 + 0x1cf2) & 0x60) != 0) {
switchD_00a27540_default:
    return;
  }
  switch(param_2) {
  case 0:
    pcVar2 = "Effect_HUD_AbilityButton_Ready";
    break;
  case 1:
    FUN_00afd018(lVar1,"Effect_HUD_AbilityButton_Ready");
  case 2:
    pcVar2 = "Effect_HUD_AbilityButton_CDReduce";
    break;
  case 3:
    pcVar2 = "Effect_HUD_AbilityButton_Activated";
    break;
  case 4:
    pcVar2 = "Effect_HUD_AbilityButton_LevelUp";
    break;
  default:
    goto switchD_00a27540_default;
  }
  FUN_00afd018(lVar1,pcVar2);
  return;
}




void FUN_00a27594(float param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if ((param_1 < 0.0) && (uVar1 = FUN_00a275d8(param_2), (uVar1 & 1) != 0)) {
    FUN_00a274d4(param_2,2);
    return;
  }
  return;
}




bool FUN_00a275d8(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
  lVar2 = *(long *)(lVar2 + 0x18);
  while( true ) {
    if (lVar2 == 0) {
      return false;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_02e3ef78) break;
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  piVar3 = (int *)FUN_00d539a4(lVar2,*(undefined4 *)(param_1 + 0x1ce8));
  if (*(int *)(param_2 + 0x50) != *piVar3) {
    return false;
  }
  uVar1 = FUN_00d53978(lVar2,*(undefined4 *)(param_1 + 0x1ce8));
  return (uVar1 & 0xc) == 4;
}




void FUN_00a27678(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  float fVar2;
  
  uVar1 = FUN_00a275d8();
  if ((uVar1 & 1) != 0) {
    fVar2 = (float)FUN_00d6d9f4(param_2);
    FUN_00a274d4(param_1,0.0 < fVar2);
    return;
  }
  return;
}




void FUN_00a276d0(float param_1,long param_2)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  FUN_00e70e18((double)(param_1 + 0.49),&local_48,&DAT_01b9f3eb);
  FUN_00f0d75c(param_2 + 0x830,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a27764(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,"%u",param_2);
  FUN_00f0d75c(param_1 + 0xa50,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a277ec(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  code *local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  long local_80;
  
  lVar10 = tpidr_el0;
  local_80 = *(long *)(lVar10 + 0x28);
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_027c89f8;
  FUN_00f13ca4();
  plVar1 = param_1 + 0x2e;
  FUN_00f1306c(plVar1);
  plVar2 = param_1 + 0x59;
  FUN_00f0fe84(plVar2);
  plVar3 = param_1 + 0x83;
  FUN_00f0fe84(plVar3);
  plVar4 = param_1 + 0xad;
  FUN_00f017e8(plVar4);
  plVar5 = param_1 + 0xbe;
  param_1[0xad] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0xdc;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0xfa;
  FUN_00f0e4a8(plVar7);
  plVar8 = param_1 + 0x118;
  FUN_00f0d160(plVar8);
  plVar9 = param_1 + 0x13e;
  FUN_00afbfb0(plVar9);
  param_1[0x17a] = 0;
  *(undefined4 *)(param_1 + 0x17b) = DAT_03214ce8;
  *(uint *)(param_1 + 0x17c) = *(uint *)(param_1 + 0x17c) & 0xfc000000 | 0x2000000;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f133a4(plVar1,plVar2,1);
  FUN_00f133a4(plVar1,plVar3,1);
  FUN_00f133a4(plVar1,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar4,plVar6,1);
  FUN_00f023ec(plVar4,plVar7,1);
  FUN_00f023ec(plVar4,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  FUN_00f0ff6c(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  if ((*(uint *)((long)param_1 + 0x49c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x49c) = *(uint *)((long)param_1 + 0x49c) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar3);
  }
  FUN_00f105ec(plVar3,&DAT_01bee7f6,2);
  FUN_00f0ff74(plVar3,"square_button_fill_top_left",0,0,0,"square_button_fill_top_middle",0,0,0,
               "square_button_fill_top_left",1,0,0,"square_button_fill_middle_left",0,0,0,
               "white_background",0,0,0,"square_button_fill_middle_left",1,0,0,0,0,0,0,0,0,0,0,0,0,0
               ,0);
  FUN_00f0ff6c(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f105ec(plVar2,&DAT_03131448,2);
  FUN_00f0ff74(plVar2,"square_button_top_left",0,0,0,"square_button_top_middle",0,0,0,
               "square_button_top_left",1,0,0,"square_button_middle_left",0,0,0,0,0,0,0,
               "square_button_middle_left",1,0,0,0,0,0,0,0,0,0,0,0,1,0,0);
  local_b0 = (code *)0x3f8000003f000000;
  FUN_00f130f0(plVar1,&local_b0);
  local_88 = DAT_03210f58;
  *(uint *)((long)param_1 + 500) = *(uint *)((long)param_1 + 500) & 0xfffffffb;
  local_b0 = thunk_FUN_00a287e4;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(param_1 + 0x18,&local_b0);
  local_b0 = thunk_FUN_00a287e4;
  local_88 = DAT_03210f84;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(param_1 + 0x18,&local_b0);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xffffffef;
  FUN_00f0e548(plVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e548(plVar6,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e670(plVar5,&DAT_03131448,2);
  FUN_00f0e670(plVar6,&DAT_03131448,2);
  FUN_00f0e548(plVar7,PTR_s_build___HUDPartsCommon_atlas_02be3440,"ability_upgrade_badge_glow");
  *(uint *)((long)param_1 + 0x854) = *(uint *)((long)param_1 + 0x854) & 0xffffffbf;
  FUN_00f0d378(plVar8,PTR_s_build___Fonts_Futura_Medium_30_S_02be9d08);
  uVar11 = FUN_00e6ce7c("HUD_ABILITY_UPGRADED",0);
  FUN_00f0d75c(plVar8,uVar11);
  if ((*(float *)(param_1 + 0x122) != 0.5) || (*(float *)((long)param_1 + 0x914) != 0.5)) {
    param_1[0x122] = 0x3f0000003f000000;
    FUN_0091ada4(plVar8);
  }
  *(uint *)((long)param_1 + 0x944) = *(uint *)((long)param_1 + 0x944) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x148) != 0.5) || (*(float *)((long)param_1 + 0xa44) != 0.5)) {
    param_1[0x148] = 0x3f0000003f000000;
    FUN_0091ada4(plVar9);
  }
  uVar11 = FUN_00d6eb50();
  uVar11 = FUN_00d6eb5c(uVar11,"*KindredHUDEffects*");
  FUN_00966a10();
  FUN_00afc274(plVar9,uVar11);
  *(uint *)((long)param_1 + 0xa74) = *(uint *)((long)param_1 + 0xa74) & 0xffffffbf;
  if (*(long *)(lVar10 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a27d6c(long param_1,long param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0xbd0) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xbd8) = uVar1;
  *(uint *)(param_1 + 0xbe0) =
       param_3 & 0xffff | (param_4 & 0xff) << 0x10 | *(uint *)(param_1 + 0xbe0) & 0xff000000;
  return;
}




void FUN_00a27d98(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00f13f08(0x42200000,0x41200000,param_1 + 0x5f0);
  FUN_00f13f08(0x41200000,0x42200000,param_1 + 0x6e0);
  lVar1 = param_1 + 0x568;
  FUN_00f07940(0,0,param_1 + 0x5f0,8,lVar1,8);
  FUN_00f07940(0,0,param_1 + 0x6e0,8,lVar1,8);
  FUN_00f07940(0,0,param_1 + 2000,8,lVar1,8);
  FUN_00f07940(0,0x40a00000,lVar1,8,param_1 + 0x418,8);
  lVar1 = param_1 + 0x170;
  FUN_00f13238(lVar1);
  fVar3 = 0.0;
  FUN_00f07940(0,lVar1,6,param_1,6);
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xffffffbf;
  local_60 = (float)FUN_00f13e54(lVar1);
  local_60 = local_60 + 0.0;
  fStack_5c = fVar3 + 60.0;
  FUN_00f13f18(param_1 + 0xb8,&local_60);
  FUN_00f07940(0,0x420c0000,param_1 + 0xb8,6,lVar1,6);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a27f24(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  plVar2 = *(long **)(param_1 + 0xbd0);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0xbd8) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        for (lVar6 = *(long *)(lVar3 + 0x18); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x20)) {
          if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_02e3ef78) {
            uVar4 = FUN_00d535b8(lVar6,*(undefined2 *)(param_1 + 0xbe0));
            if ((uVar4 & 1) == 0) {
              return;
            }
            lVar5 = *(long *)(lVar3 + 0x40);
            fVar7 = (*(float *)(lVar5 + 0x214) + 1.0) *
                    (*(float *)(lVar5 + 0xac) +
                    *(float *)(lVar5 + 0x160) * (*(float *)(lVar5 + 0x2c8) + 1.0));
            if (DAT_03131584 <= fVar7) {
              fVar7 = DAT_03131584;
            }
            fVar8 = DAT_031314c4;
            if (DAT_031314c4 <= fVar7) {
              fVar8 = fVar7;
            }
            if (0.0 < fVar8) {
              fVar7 = (*(float *)(lVar5 + 0x240) + 1.0) *
                      (*(float *)(lVar5 + 0xd8) +
                      *(float *)(lVar5 + 0x18c) * (*(float *)(lVar5 + 0x2f4) + 1.0));
              if (DAT_031315b0 <= fVar7) {
                fVar7 = DAT_031315b0;
              }
              fVar8 = DAT_031314f0;
              if (DAT_031314f0 <= fVar7) {
                fVar8 = fVar7;
              }
              uVar1 = FUN_00d54944(lVar6,*(undefined2 *)(param_1 + 0xbe0));
              if (((float)uVar1 <= fVar8) && ((*(byte *)(param_1 + 0xbe3) >> 1 & 1) != 0)) {
                uVar1 = FUN_00a2876c(param_1);
                FUN_00a28fbc(param_1,uVar1 & 1);
                if ((*(byte *)(param_1 + 0xbe3) & 1) != 0) {
                  return;
                }
                FUN_00afd018(param_1 + 0x9f0,"Effect_HUD_AbilityTab_PointReady");
                lVar3 = FUN_00d9ebe8(lVar3);
                if ((((lVar3 == 0) || (*(int *)(lVar3 + 0x28) == 0xfe)) ||
                    (uVar4 = FUN_009f1f70(0x1b), (uVar4 & 1) == 0)) || ((uVar1 & 1) != 0)) {
                  FUN_00a288c4(param_1,1);
                }
                *(uint *)(param_1 + 0xbe0) = *(uint *)(param_1 + 0xbe0) | 0x1000000;
                return;
              }
            }
            if ((*(byte *)(param_1 + 0xbe3) & 1) == 0) {
              return;
            }
            FUN_00a288c4(param_1,0);
            *(uint *)(param_1 + 0xbe0) = *(uint *)(param_1 + 0xbe0) & 0xfeffffff;
            FUN_00afd20c(param_1 + 0x9f0,"Effect_HUD_AbilityTab_PointReady");
            return;
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xbd0) = 0;
      *(undefined4 *)(param_1 + 0xbd8) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00a27f24(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  plVar2 = *(long **)(param_1 + 0xbd0);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0xbd8) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        for (lVar6 = *(long *)(lVar3 + 0x18); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x20)) {
          if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_02e3ef78) {
            uVar4 = FUN_00d535b8(lVar6,*(undefined2 *)(param_1 + 0xbe0));
            if ((uVar4 & 1) == 0) {
              return;
            }
            lVar5 = *(long *)(lVar3 + 0x40);
            fVar7 = (*(float *)(lVar5 + 0x214) + 1.0) *
                    (*(float *)(lVar5 + 0xac) +
                    *(float *)(lVar5 + 0x160) * (*(float *)(lVar5 + 0x2c8) + 1.0));
            if (DAT_03131584 <= fVar7) {
              fVar7 = DAT_03131584;
            }
            fVar8 = DAT_031314c4;
            if (DAT_031314c4 <= fVar7) {
              fVar8 = fVar7;
            }
            if (0.0 < fVar8) {
              fVar7 = (*(float *)(lVar5 + 0x240) + 1.0) *
                      (*(float *)(lVar5 + 0xd8) +
                      *(float *)(lVar5 + 0x18c) * (*(float *)(lVar5 + 0x2f4) + 1.0));
              if (DAT_031315b0 <= fVar7) {
                fVar7 = DAT_031315b0;
              }
              fVar8 = DAT_031314f0;
              if (DAT_031314f0 <= fVar7) {
                fVar8 = fVar7;
              }
              uVar1 = FUN_00d54944(lVar6,*(undefined2 *)(param_1 + 0xbe0));
              if (((float)uVar1 <= fVar8) && ((*(byte *)(param_1 + 0xbe3) >> 1 & 1) != 0)) {
                uVar1 = FUN_00a2876c(param_1);
                FUN_00a28fbc(param_1,uVar1 & 1);
                if ((*(byte *)(param_1 + 0xbe3) & 1) != 0) {
                  return;
                }
                FUN_00afd018(param_1 + 0x9f0,"Effect_HUD_AbilityTab_PointReady");
                lVar3 = FUN_00d9ebe8(lVar3);
                if ((((lVar3 == 0) || (*(int *)(lVar3 + 0x28) == 0xfe)) ||
                    (uVar4 = FUN_009f1f70(0x1b), (uVar4 & 1) == 0)) || ((uVar1 & 1) != 0)) {
                  FUN_00a288c4(param_1,1);
                }
                *(uint *)(param_1 + 0xbe0) = *(uint *)(param_1 + 0xbe0) | 0x1000000;
                return;
              }
            }
            if ((*(byte *)(param_1 + 0xbe3) & 1) == 0) {
              return;
            }
            FUN_00a288c4(param_1,0);
            *(uint *)(param_1 + 0xbe0) = *(uint *)(param_1 + 0xbe0) & 0xfeffffff;
            FUN_00afd20c(param_1 + 0x9f0,"Effect_HUD_AbilityTab_PointReady");
            return;
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xbd0) = 0;
      *(undefined4 *)(param_1 + 0xbd8) = DAT_03214ce8;
    }
  }
  return;
}

