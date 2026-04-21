// functions/00c15 — 26 functions
#include "libGameKindred.h"




void FUN_00c1505c(undefined8 param_1)

{
  FUN_00c14394(param_1,0);
  return;
}




undefined4 FUN_00c15064(long param_1)

{
  return *(undefined4 *)(param_1 + 0x7fc);
}




void FUN_00c1506c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x7e0);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x7e8) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 == 0) goto LAB_00c15130;
      plVar2 = *(long **)(param_1 + 0x7e0);
      uVar4 = 0;
      if (plVar2 != (long *)0x0) {
        if (*(int *)(param_1 + 0x7e8) == (int)plVar2[1]) {
          uVar4 = (**(code **)(*plVar2 + 0x10))();
        }
        else {
          *(undefined8 *)(param_1 + 0x7e0) = 0;
          uVar4 = 0;
          *(undefined4 *)(param_1 + 0x7e8) = DAT_03214ce8;
        }
      }
      FUN_009dbf64(0,uVar4);
      uVar5 = DAT_03214ce8;
      *(undefined8 *)(param_1 + 0x7e0) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x7e0) = 0;
      uVar5 = DAT_03214ce8;
    }
    *(undefined4 *)(param_1 + 0x7e8) = uVar5;
  }
LAB_00c15130:
  *(undefined2 *)(param_1 + 0x800) = 0;
  *(undefined1 *)(param_1 + 0x802) = 0;
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  *(undefined2 *)(param_1 + 0x7f4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0x7fc) = 0xbf800000;
  pcStack_30 = FUN_00c15358;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  pcStack_30 = FUN_00c153bc;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  FUN_00f0e628(param_1 + 0xd0);
  FUN_00f01980(param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00c151ac(long param_1)

{
  return ~*(uint *)(param_1 + 0x1198) & 1;
}




long FUN_00c151bc(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  param_1 = param_1 + 0x188;
  do {
    if (*(long *)(param_1 + 0xb8) == param_2) {
      return param_1;
    }
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 0x808;
  } while (uVar1 < 2);
  return 0;
}




void FUN_00c151e8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_3 != (long *)0x0) && (*param_3 != 0)) {
    pcStack_30 = FUN_00c153bc;
    local_38 = param_2;
    FUN_00f02e98(*(float *)(param_3[-1] + 0x2c) + *(float *)(*param_3 + 0x28),&local_38,0,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c15260(undefined8 param_1)

{
  FUN_00c14394(param_1,0);
  return;
}




void FUN_00c1526c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f6390;
  param_1[0xde] = &PTR_FUN_028266f0;
  param_1[0xf5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf8);
  FUN_00f13d08(param_1 + 0xde);
  param_1[0xc0] = &PTR_FUN_028266f0;
  param_1[0xd7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xda);
  FUN_00f13d08(param_1 + 0xc0);
  param_1[0xa2] = &PTR_FUN_028266f0;
  param_1[0xb9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xbc);
  FUN_00f13d08(param_1 + 0xa2);
  param_1[0x84] = &PTR_FUN_028266f0;
  param_1[0x9b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9e);
  FUN_00f13d08(param_1 + 0x84);
  FUN_00f0d3a4(param_1 + 0x5e);
  FUN_00f0d3a4(param_1 + 0x38);
  param_1[0x1a] = &PTR_FUN_028266f0;
  param_1[0x31] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x34);
  FUN_00f13d08(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c15358(undefined8 param_1)

{
  long lVar1;
  undefined8 local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = FUN_00c15358;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  FUN_00c146fc(param_1,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c153bc(long param_1)

{
  long lVar1;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = FUN_00c153bc;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  FUN_00c14394(*(undefined8 *)(param_1 + 0xc0),0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c15420(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  FUN_00b89cd8();
  plVar1 = param_1 + 0x1a;
  param_1[0x19] = 0;
  *param_1 = (long)&PTR_FUN_027f6620;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x38;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x56;
  FUN_00f0fe84(plVar3);
  plVar4 = param_1 + 0x80;
  FUN_00f0d160(plVar4);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsTutorialDialog_t_02be34a8,"speech_frame_mid");
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsTutorialDialog_t_02be34a8,"speech_frame_bot");
  if ((*(float *)(param_1 + 0x23) != 2.0) || (*(float *)((long)param_1 + 0x11c) != 1.0)) {
    param_1[0x23] = 0x3f80000040000000;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x41) != 2.0) || (*(float *)((long)param_1 + 0x20c) != 1.0)) {
    param_1[0x41] = 0x3f80000040000000;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0ff6c(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  if ((*(uint *)((long)param_1 + 0x334) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x334) = *(uint *)((long)param_1 + 0x334) & 0xffff807f;
    FUN_0091ada4(plVar3);
  }
  FUN_00f105ec(plVar3,&DAT_01bee7fa,2);
  FUN_00f0ff74(plVar3,"square_button_fill_top_left",0,0,0,"square_button_fill_top_middle",0,0,0,
               "square_button_fill_top_left",1,0,0,"square_button_fill_middle_left",0,0,0,
               "white_background",0,0,0,"square_button_fill_middle_right",0,0,0,
               "square_button_fill_bottom_left",0,0,0,"square_button_fill_bottom_middle",0,0,0,
               "square_button_fill_bottom_right",0,0,0);
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00f0d7fc(plVar4,&DAT_01bbbdf0);
  FUN_00f0dac8(plVar4,3);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  return;
}




void FUN_00c156f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f6620;
  FUN_00f0d3a4(param_1 + 0x80);
  param_1[0x56] = &PTR_FUN_02826f38;
  param_1[0x6d] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x70);
  FUN_00f13d08(param_1 + 0x56);
  param_1[0x38] = &PTR_FUN_028266f0;
  param_1[0x4f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x52);
  FUN_00f13d08(param_1 + 0x38);
  param_1[0x1a] = &PTR_FUN_028266f0;
  param_1[0x31] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x34);
  FUN_00f13d08(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c157a8(void *param_1)

{
  FUN_00c156f4();
  operator_delete(param_1);
  return;
}




void FUN_00c157cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  FUN_00f00298(&uStack_6c,&local_70);
  FUN_00f13f08(uStack_6c,local_70,param_1);
  lVar1 = param_1 + 0xd0;
  fVar4 = (float)FUN_00f0eac0(lVar1);
  fVar6 = -50.0;
  lVar2 = param_1 + 0x400;
  FUN_00f0dad0(fVar4 + -50.0 + -50.0,lVar2,1);
  FUN_00f0d548(lVar2);
  uVar5 = FUN_00f0e700(lVar1);
  fVar6 = fVar6 + 40.0 + 40.0;
  FUN_00f13f08(uVar5,fVar6,lVar1);
  uVar5 = FUN_00f0eac0(lVar1);
  FUN_00f0eac0(lVar1);
  fVar4 = fVar6;
  FUN_00f0eac0(param_1 + 0x1c0);
  FUN_00f13f08(uVar5,fVar6 + fVar4,param_1 + 0x2b0);
  FUN_00f07a18(0,0,param_1,0);
  FUN_00f07a18(0,0,lVar1,4);
  FUN_00f07940(0,0,param_1 + 0x1c0,0,lVar1,3);
  FUN_00f07940(0,0x42200000,lVar2,4,lVar1,4);
  FUN_00f07940(0,0,param_1 + 0x2b0,4,lVar1,4);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c15954(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c1595c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00c15960(long *param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  FUN_00f0d75c(param_1 + 0x80);
  if ((~*(uint *)((long)param_1 + 0x334) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x334) = *(uint *)((long)param_1 + 0x334) | 0x7f80;
    FUN_0091ada4(param_1 + 0x56);
  }
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efdd74(puVar3);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3ecccccd,puVar3);
  FUN_00efddc4(0,puVar3);
  FUN_00f022a0(param_1 + 0x56,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00c15a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_00c15a70(long *param_1)

{
  long *plVar1;
  
  FUN_00f13ca4();
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x42480000;
  *param_1 = (long)&PTR_FUN_027f6788;
  FUN_00f13ca4(param_1 + 0x1b);
  plVar1 = param_1 + 0x32;
  FUN_00f0e4a8(plVar1);
  param_1[0x51] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1b,1);
  FUN_00f0e548(plVar1,PTR_s_build___SpoilsOfWarPartsCommon_t_02be3638,"iconbg");
  if ((~*(uint *)((long)param_1 + 0x214) & 0x7f80) == 0) {
    return;
  }
  *(uint *)((long)param_1 + 0x214) = *(uint *)((long)param_1 + 0x214) | 0x7f80;
  FUN_0091ada4(plVar1);
  return;
}




void FUN_00c15b4c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  
  *param_1 = &PTR_FUN_027f6788;
  puVar5 = (uint *)(param_1 + 0x19);
  if (*puVar5 != 0) {
    lVar4 = 0;
    uVar6 = 0;
    do {
      lVar2 = param_1[0x1a];
      if (*(long *)(lVar2 + lVar4) == 0) {
LAB_00c15bcc:
        puVar3 = (undefined8 *)(lVar2 + uVar6 * 8);
      }
      else {
        uVar1 = FUN_00f02540();
        if ((uVar1 & 1) != 0) {
          FUN_00f01a4c(*(undefined8 *)(param_1[0x1a] + lVar4),1);
        }
        lVar2 = param_1[0x1a];
        if (*(long **)(lVar2 + lVar4) == (long *)0x0) goto LAB_00c15bcc;
        (**(code **)(**(long **)(lVar2 + lVar4) + 8))();
        puVar3 = (undefined8 *)(param_1[0x1a] + lVar4);
      }
      *puVar3 = 0;
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (uVar6 < *puVar5);
  }
  param_1[0x32] = &PTR_FUN_028266f0;
  param_1[0x49] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4c);
  FUN_00f13d08(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x1b);
  if ((void *)param_1[0x1a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1a]);
    puVar5[0] = 0;
    puVar5[1] = 0;
    param_1[0x1a] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c15c40(void *param_1)

{
  FUN_00c15b4c();
  operator_delete(param_1);
  return;
}




void thunk_FUN_00c15c68(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined4 uStack_70;
  float fStack_6c;
  long lStack_68;
  
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  fVar7 = (float)(**(code **)(*param_3 + 0x48))();
  if ((fVar7 != 0.0) && ((**(code **)(*param_3 + 0x48))(param_3), param_2 != 0.0)) {
    uStack_70 = (**(code **)(*param_3 + 0x48))(param_3);
    fStack_6c = param_2;
    FUN_00f13f18(param_3 + 0x32,&uStack_70);
    fVar7 = (float)(int)param_3[0x51];
    if (fVar7 <= 1.0) {
      fVar7 = 1.0;
    }
    uVar2 = *(uint *)(param_3 + 0x19);
    fVar7 = fVar7 * 300.0;
    plVar1 = param_3 + 0x1b;
    fVar8 = fVar7 + *(float *)(param_3 + 0x18) * (float)((int)param_3[0x51] + -1);
    (**(code **)(*param_3 + 0x48))(param_3);
    fVar7 = fVar7 - *(float *)((long)param_3 + 0x28c);
    if (fVar7 <= 1.0) {
      fVar7 = 1.0;
    }
    FUN_00f13f08(fVar8,fVar7,plVar1);
    if (uVar2 != 0) {
      uVar6 = 0;
      do {
        uVar4 = *(undefined8 *)(param_3[0x1a] + uVar6 * 8);
        if (uVar6 == 0) {
          FUN_00f07940(0,*(float *)((long)param_3 + 0x28c) * -0.5,uVar4,7,plVar1,7);
        }
        else {
          uVar5 = *(undefined8 *)(param_3[0x1a] + (ulong)((int)uVar6 - 1) * 8);
          FUN_00f07b18((int)param_3[0x18],uVar4,3,uVar5,1);
          FUN_00f07b18(0,uVar4,5,uVar5,5);
        }
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
    }
    FUN_00f07940(0,0,plVar1,8,param_3,8);
  }
  if (*(long *)(lVar3 + 0x28) != lStack_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c15c68(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined4 local_70;
  float fStack_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  fVar7 = (float)(**(code **)(*param_3 + 0x48))();
  if ((fVar7 != 0.0) && ((**(code **)(*param_3 + 0x48))(param_3), param_2 != 0.0)) {
    local_70 = (**(code **)(*param_3 + 0x48))(param_3);
    fStack_6c = param_2;
    FUN_00f13f18(param_3 + 0x32,&local_70);
    fVar7 = (float)(int)param_3[0x51];
    if (fVar7 <= 1.0) {
      fVar7 = 1.0;
    }
    uVar2 = *(uint *)(param_3 + 0x19);
    fVar7 = fVar7 * 300.0;
    plVar1 = param_3 + 0x1b;
    fVar8 = fVar7 + *(float *)(param_3 + 0x18) * (float)((int)param_3[0x51] + -1);
    (**(code **)(*param_3 + 0x48))(param_3);
    fVar7 = fVar7 - *(float *)((long)param_3 + 0x28c);
    if (fVar7 <= 1.0) {
      fVar7 = 1.0;
    }
    FUN_00f13f08(fVar8,fVar7,plVar1);
    if (uVar2 != 0) {
      uVar6 = 0;
      do {
        uVar4 = *(undefined8 *)(param_3[0x1a] + uVar6 * 8);
        if (uVar6 == 0) {
          FUN_00f07940(0,*(float *)((long)param_3 + 0x28c) * -0.5,uVar4,7,plVar1,7);
        }
        else {
          uVar5 = *(undefined8 *)(param_3[0x1a] + (ulong)((int)uVar6 - 1) * 8);
          FUN_00f07b18((int)param_3[0x18],uVar4,3,uVar5,1);
          FUN_00f07b18(0,uVar4,5,uVar5,5);
        }
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
    }
    FUN_00f07940(0,0,plVar1,8,param_3,8);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c15e20(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x280) = param_1;
  *(undefined4 *)(param_3 + 0x284) = param_2;
  return;
}




void FUN_00c15e2c(long param_1,int param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar2 = ((float)param_2 + 0.5) * 300.0;
  fVar3 = fVar2 + *(float *)(param_1 + 0xc0) * (float)param_2;
  FUN_00f13e54(param_1 + 0xd8);
  fStack_3c = fVar2 * 0.5;
  local_40 = fVar3;
  FUN_00f0862c(&local_40,param_1 + 0xd8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c15eb8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_3;
  FUN_00f023ec(param_2 + 0x1b,param_3,1);
  FUN_00c15f74(param_2 + 0x19,&local_40);
  plVar2 = local_40;
  (**(code **)(*param_2 + 0x48))(param_2);
  FUN_00f13f08(0x43960000,plVar2);
  FUN_00c15c68(param_2);
  (**(code **)(*local_40 + 0x148))
            ((int)param_2[0x50],*(undefined4 *)((long)param_2 + 0x284),param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c15f74(uint *param_1,undefined8 *param_2)

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
    FUN_00c1654c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined8 FUN_00c15ffc(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)*(uint *)(param_1 + 200);
  if (*(uint *)(param_1 + 200) != 0) {
    uVar3 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0xd0) + uVar3 * 8) != 0) {
        uVar2 = FUN_00f023dc();
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        uVar2 = (ulong)*(uint *)(param_1 + 200);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  uVar2 = FUN_00f023dc(param_1);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar1 = FUN_00f023dc(param_1 + 0xd8);
  return uVar1;
}

