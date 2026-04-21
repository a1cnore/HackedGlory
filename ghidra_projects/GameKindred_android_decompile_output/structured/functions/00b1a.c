// functions/00b1a — 20 functions
#include "libGameKindred.h"




void FUN_00b1a060(undefined4 param_1,long param_2)

{
  uint uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(param_1,0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = (uint)(fVar2 != 1.0);
  *(uint *)(param_2 + 0x1c4) =
       *(uint *)(param_2 + 0x1c4) & 0xfffffff8 | *(uint *)(param_2 + 0x1c4) & 3 | uVar1 << 2;
  *(uint *)(param_2 + 0x2b4) =
       *(uint *)(param_2 + 0x2b4) & 0xfffffff8 | *(uint *)(param_2 + 0x2b4) & 3 | uVar1 << 2;
  *(float *)(param_2 + 0x500) = fVar2;
  *(uint *)(param_2 + 0x494) =
       *(uint *)(param_2 + 0x494) & 0xfffffff8 |
       *(uint *)(param_2 + 0x494) & 3 | (uint)(fVar2 == 1.0) << 2;
  *(uint *)(param_2 + 0x3a4) =
       *(uint *)(param_2 + 0x3a4) & 0xfffffff8 |
       *(uint *)(param_2 + 0x3a4) & 3 | (uint)(0.0 < fVar2) << 2;
  if ((0.0 < fVar2) &&
     ((*(float *)(param_2 + 0x368) != fVar2 || (*(float *)(param_2 + 0x36c) != fVar2)))) {
    *(float *)(param_2 + 0x368) = fVar2;
    *(float *)(param_2 + 0x36c) = fVar2;
    FUN_0091ada4(param_2 + 800);
    return;
  }
  return;
}




void FUN_00b1a0ec(undefined4 param_1,undefined8 param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)NEON_fminnm(param_1,0x3f800000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar2 = (float)(int)(fVar1 * (float)param_4);
  if ((float)param_3 < fVar2) {
    FUN_00b1a060(0x3f800000);
    return;
  }
  if ((fVar2 == (float)param_3) && (fVar2 = fVar1 * (float)param_4 - fVar2, 0.0 < fVar2)) {
    fVar1 = (float)NEON_fminnm(fVar2,0x3f4ccccd);
    if (fVar1 <= 0.3) {
      fVar1 = 0.3;
    }
    FUN_00b1a060(fVar1);
    return;
  }
  FUN_00b1a060(0);
  return;
}




void FUN_00b1a150(float param_1,float param_2,long *param_3)

{
  long lVar1;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (float)(**(code **)(*param_3 + 0x48))();
  local_40 = local_40 + param_1;
  fStack_3c = param_2 + param_1;
  FUN_00f13f18(param_3 + 0x82,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1a1c4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027d15d8;
  FUN_00f0fe84(plVar1);
  param_1[0x11] = (long)&PTR_FUN_028270e0;
  param_1[0x28] = (long)&PTR_FUN_02827248;
  FUN_00f0e4a8(param_1 + 0x3b);
  plVar2 = param_1 + 0x59;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x7f;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0xa5;
  FUN_00f0d160(plVar4);
  *(undefined4 *)(param_1 + 0xcb) = 0xffffffff;
  FUN_0099cc90(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0xd2) = 2;
  *(undefined8 *)((long)param_1 + 0x694) = 0xbf80000042180000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3b,1);
  FUN_00f0ff6c(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530);
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) | 4;
  FUN_00f0d92c(plVar2,DAT_03139d58,&DAT_01bee7f6);
  FUN_00f0d92c(plVar3,DAT_03139d58,&DAT_01bee7f6);
  uVar5 = *(uint *)((long)param_1 + 0x47c);
  if ((uVar5 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x47c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5900;
    FUN_0091ada4(plVar3);
    uVar5 = *(uint *)((long)param_1 + 0x47c);
  }
  *(uint *)((long)param_1 + 0x47c) = uVar5 & 0xfffffffb;
  FUN_00f0d92c(plVar4,DAT_03139d58,&DAT_01bee7fa);
  uVar5 = *(uint *)((long)param_1 + 0x5ac);
  if ((uVar5 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x5ac) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x7280;
    FUN_0091ada4(plVar4);
    uVar5 = *(uint *)((long)param_1 + 0x5ac);
  }
  *(uint *)((long)param_1 + 0x5ac) = uVar5 & 0xfffffffb;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  FUN_0099ce80(param_1 + 0xcc,param_1,thunk_FUN_00b1a8f8);
  return;
}




void thunk_FUN_00b1a8f8(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0099ccf4(param_1 + 0x660);
  uVar4 = uVar2 >> 0x20 & 0xff;
  if ((uint)uVar4 == 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  }
  else {
    FUN_00e70510(&uStack_48);
    if ((uint)uVar4 < 10) {
      puVar3 = &DAT_01bb6d43;
    }
    else {
      puVar3 = &DAT_01bb02c9;
      uVar4 = 9;
    }
    FUN_00e70e18(&uStack_48,puVar3,uVar4);
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
    FUN_00b1a6e8(param_1,uVar2 & 0xffffffff);
    FUN_00b1a890(param_1,&uStack_48);
    if (pvStack_40 != (void *)0x0) {
      operator_delete__(pvStack_40);
      uStack_48 = 0;
      pvStack_40 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1a3f4(float param_1,float param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar1 = (long *)(param_3 + 0x88);
  fVar3 = (float)FUN_00f10b80(plVar1,0);
  FUN_00f10b80(plVar1,0);
  fVar6 = (float)(int)(*(float *)(param_3 + 0x694) * (fVar3 / param_2));
  fVar3 = (fVar6 + fVar6) * 0.4;
  if (0.0 <= *(float *)(param_3 + 0x698)) {
    fVar3 = *(float *)(param_3 + 0x698);
  }
  param_1 = param_1 - fVar3;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  fVar3 = 0.0;
  if (8.0 <= (float)(int)param_1) {
    fVar3 = (float)(int)param_1;
  }
  fVar4 = fVar3 * -0.5 + fVar6 * -0.33;
  fVar5 = *(float *)(param_3 + 0x694) * -0.2;
  if ((*(float *)(param_3 + 0x218) != fVar4) || (*(float *)(param_3 + 0x21c) != fVar5)) {
    *(float *)(param_3 + 0x218) = fVar4;
    *(float *)(param_3 + 0x21c) = fVar5;
    FUN_0091ada4(param_3 + 0x1d8);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0x1d8) + 0x28))(param_3 + 0x1d8,&local_60);
  FUN_00f10b64(fVar6,fVar3,fVar6,*(undefined4 *)(param_3 + 0x694),plVar1);
  local_60 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0x88) + 0x28))(plVar1,&local_60);
  if ((*(float *)(param_3 + 0x308) != 0.0) || (*(float *)(param_3 + 0x30c) != 0.0)) {
    *(undefined8 *)(param_3 + 0x308) = 0;
    FUN_0091ada4(param_3 + 0x2c8);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0x2c8) + 0x28))(param_3 + 0x2c8,&local_60);
  if ((*(float *)(param_3 + 0x438) != 2.0) || (*(float *)(param_3 + 0x43c) != 2.0)) {
    *(undefined8 *)(param_3 + 0x438) = 0x4000000040000000;
    FUN_0091ada4(param_3 + 0x3f8);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0x3f8) + 0x28))(param_3 + 0x3f8,&local_60);
  if ((*(float *)(param_3 + 0x568) != -1.0) || (*(float *)(param_3 + 0x56c) != 0.0)) {
    *(undefined8 *)(param_3 + 0x568) = 0xbf800000;
    FUN_0091ada4(param_3 + 0x528);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0x528) + 0x28))(param_3 + 0x528,&local_60);
  if ((*(float *)(param_3 + 200) != 0.0) || (*(float *)(param_3 + 0xcc) != 0.0)) {
    *(undefined8 *)(param_3 + 200) = 0;
    FUN_0091ada4(plVar1);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_60);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1a67c(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_2;
  FUN_00f105ec(param_1 + 0x88,&local_2c,2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1a6d0(long param_1,undefined8 param_2)

{
  FUN_00f0d92c(param_1 + 0x2c8,DAT_03139d58,param_2);
  return;
}




void FUN_00b1a6e8(long param_1,int param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x690) != param_2) {
    *(int *)(param_1 + 0x690) = param_2;
    FUN_00f0e628(param_1 + 0x1d8);
    if (param_2 == 0) {
      FUN_00f10a70(param_1 + 0x88,"capsule_button_fill_left",0,0,0,"capsule_button_fill_middle",0,0,
                   0,"capsule_button_fill_right",0,0,0);
      *(undefined8 *)(param_1 + 0x694) = 0xbf80000042180000;
      local_3c = 0xff0606a4;
      FUN_00f105ec(param_1 + 0x88,&local_3c,2);
      puVar2 = &DAT_01bee7fa;
    }
    else {
      if (param_2 != 1) goto LAB_00b1a868;
      FUN_00f10a70(param_1 + 0x88,"capsule_button_fill_left",0,0,0,"capsule_button_fill_middle",0,0,
                   0,"capsule_button_fill_right",0,0,0);
      *(undefined8 *)(param_1 + 0x694) = 0xbf80000042180000;
      local_3c = 0xffaaaaaa;
      FUN_00f105ec(param_1 + 0x88,&local_3c,2);
      puVar2 = &DAT_01bee7f6;
    }
    FUN_00f0d92c(param_1 + 0x2c8,DAT_03139d58,puVar2);
    *(uint *)(param_1 + 0x47c) = *(uint *)(param_1 + 0x47c) & 0xfffffffb;
    *(uint *)(param_1 + 0x5ac) = *(uint *)(param_1 + 0x5ac) & 0xfffffffb;
  }
LAB_00b1a868:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1a890(long param_1,undefined8 param_2)

{
  FUN_00f0d75c(param_1 + 0x2c8);
  FUN_00f0d75c(param_1 + 0x3f8,param_2);
  FUN_00f0d75c(param_1 + 0x528,param_2);
  FUN_00f0d548(param_1 + 0x2c8);
  FUN_00b1a3f4(param_1);
  return;
}




void FUN_00b1a8e8(long param_1)

{
  FUN_0099cd34(param_1 + 0x660);
  return;
}




void FUN_00b1a8f0(long param_1)

{
  FUN_0099cdd0(param_1 + 0x660);
  return;
}




void FUN_00b1a8f8(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0099ccf4(param_1 + 0x660);
  uVar4 = uVar2 >> 0x20 & 0xff;
  if ((uint)uVar4 == 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  }
  else {
    FUN_00e70510(&local_48);
    if ((uint)uVar4 < 10) {
      puVar3 = &DAT_01bb6d43;
    }
    else {
      puVar3 = &DAT_01bb02c9;
      uVar4 = 9;
    }
    FUN_00e70e18(&local_48,puVar3,uVar4);
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
    FUN_00b1a6e8(param_1,uVar2 & 0xffffffff);
    FUN_00b1a890(param_1,&local_48);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1a9d4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  undefined8 uVar6;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027dd280;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0bdbc(plVar2,0);
  plVar3 = param_1 + 0x4e;
  param_1[0x35] = (long)&PTR_FUN_027c3260;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x74;
  FUN_00f0d160(plVar4);
  *(undefined1 *)((long)param_1 + 0x4d4) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar1,1);
  FUN_00f023ec(plVar2,plVar4,1);
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  uVar6 = FUN_00e6ce7c("MENU_GENERIC_BALANCE_LABEL",0);
  FUN_00f0d75c(plVar3,uVar6);
  uVar5 = *(uint *)((long)param_1 + 0x2f4);
  if ((uVar5 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x2f4) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0da30(plVar3,1);
  if ((*(float *)(param_1 + 0x58) != 0.0) || (*(float *)((long)param_1 + 0x2c4) != 0.5)) {
    param_1[0x58] = 0x3f00000000000000;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e540(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530);
  if ((*(float *)(param_1 + 0x21) != 0.5) || (*(float *)((long)param_1 + 0x10c) != 0.5)) {
    param_1[0x21] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  uVar5 = *(uint *)((long)param_1 + 0x424);
  if ((uVar5 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x424) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6600;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0da30(plVar4,1);
  if ((*(float *)(param_1 + 0x7e) == 0.0) && (*(float *)((long)param_1 + 0x3f4) == 0.5)) {
    return;
  }
  param_1[0x7e] = 0x3f00000000000000;
  FUN_0091ada4(plVar4);
  return;
}




void FUN_00b1ac10(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined4 local_48;
  float fStack_44;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0x1a8;
  fVar3 = 0.0;
  *(uint *)(param_1 + 0x2f4) =
       *(uint *)(param_1 + 0x2f4) & 0xfffffffb | (uint)*(byte *)(param_1 + 0x4d4) << 2;
  FUN_00f0bc10(0,0,0x40a00000,&local_48);
  FUN_00f0c168(lVar1,&local_48);
  (**(code **)(*(long *)(param_1 + 0x1a8) + 0x90))(lVar1);
  FUN_00f13e54(lVar1);
  if (*(float *)(param_1 + 0x1ec) != fVar3 * 0.5) {
    *(float *)(param_1 + 0x1ec) = fVar3 * 0.5;
    FUN_0091ada4(lVar1);
  }
  local_48 = FUN_00f13e54(lVar1);
  fStack_44 = fVar3;
  FUN_00f13f18(param_1,&local_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1ace4(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x4d4) = param_2 & 1;
  FUN_00b1ac10();
  return;
}




void FUN_00b1acf0(long param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  FUN_00f0e578(param_1 + 0xb8,pbVar1);
  FUN_00b1ac10(param_1);
  return;
}




void FUN_00b1ad28(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 0x4d0) = param_2;
  FUN_00e70510(&local_38);
  FUN_00e70e18(&local_38,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0x4d0));
  FUN_00f0d75c(param_1 + 0x3a0,&local_38);
  FUN_00b1ac10(param_1);
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1adb0(long param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  FUN_00f0d378(param_1 + 0x3a0,pbVar1);
  FUN_00b1ac10(param_1);
  return;
}




void FUN_00b1ade8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027d4cc0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x2f;
  FUN_00f017e8(plVar2);
  plVar3 = param_1 + 0x40;
  param_1[0x2f] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x5e;
  FUN_00f0e4a8(plVar4);
  *(undefined4 *)(param_1 + 0x7c) = 0x43480000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar1,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar4,1);
  if ((*(float *)(param_1 + 0x39) != 0.5) || (*(float *)((long)param_1 + 0x1cc) != 0.5)) {
    param_1[0x39] = 0x3f0000003f000000;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_large_circle");
  FUN_00f0e670(plVar1,&DAT_01bee7fa,2);
  uVar5 = *(uint *)((long)param_1 + 0x10c);
  if ((uVar5 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x10c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x1a) != 1.0) || (*(float *)((long)param_1 + 0xd4) != 1.0)) {
    lVar6 = NEON_fmov(0x3f800000,4);
    param_1[0x1a] = lVar6;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x1b) != 0.5) || (*(float *)((long)param_1 + 0xdc) != 0.5)) {
    param_1[0x1b] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xfffffffb;
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"focus_indicator_ring");
  if ((*(float *)(param_1 + 0x4a) != 0.5) || (*(float *)((long)param_1 + 0x254) != 0.5)) {
    param_1[0x4a] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  *(uint *)((long)param_1 + 0x284) = *(uint *)((long)param_1 + 0x284) & 0xfffffffb;
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"focus_indicator_ring");
  if ((*(float *)(param_1 + 0x68) != 0.5) || (*(float *)((long)param_1 + 0x344) != 0.5)) {
    param_1[0x68] = 0x3f0000003f000000;
    FUN_0091ada4(plVar4);
  }
  *(uint *)((long)param_1 + 0x374) = *(uint *)((long)param_1 + 0x374) & 0xfffffffb;
  return;
}

