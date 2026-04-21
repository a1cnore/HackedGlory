// functions/00c85 — 35 functions
#include "libGameKindred.h"




void FUN_00c850d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c858c0(param_1,param_4,0);
  return;
}




void FUN_00c850dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c858c0(param_1,param_4,1);
  return;
}




void thunk_FUN_00c859f8(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plStack_48;
  code *pcStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f004ac(param_1 + 0x3f);
  if ((uVar2 & 1) == 0) {
    for (plVar4 = (long *)param_1[0x44]; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[6]) {
      uVar2 = FUN_00f004ac(plVar4);
      if ((uVar2 & 1) != 0) goto LAB_00c85a50;
    }
  }
  else {
    plVar4 = param_1 + 0x8f;
LAB_00c85a50:
    lVar3 = FUN_00f00498(plVar4);
    if ((lVar3 != 0) && (lVar3 == param_1[0xa7])) {
      pcStack_40 = thunk_FUN_00c8571c;
      plStack_48 = param_1;
      FUN_00f03390(&plStack_48);
      if ((*(float *)(param_1 + 0x7a) != 1.0) || (*(float *)((long)param_1 + 0x3d4) != 1.0)) {
        lVar3 = NEON_fmov(0x3f800000,4);
        param_1[0x7a] = lVar3;
        FUN_0091ada4(param_1 + 0x71);
      }
      (**(code **)(*param_1 + 0x90))(param_1);
      FUN_00f00464(param_1[0xa7]);
      param_1[0xa7] = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c859f8(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plStack_48;
  code *pcStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f004ac(param_1 + 0x3f);
  if ((uVar2 & 1) == 0) {
    for (plVar4 = (long *)param_1[0x44]; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[6]) {
      uVar2 = FUN_00f004ac(plVar4);
      if ((uVar2 & 1) != 0) goto LAB_00c85a50;
    }
  }
  else {
    plVar4 = param_1 + 0x8f;
LAB_00c85a50:
    lVar3 = FUN_00f00498(plVar4);
    if ((lVar3 != 0) && (lVar3 == param_1[0xa7])) {
      pcStack_40 = thunk_FUN_00c8571c;
      plStack_48 = param_1;
      FUN_00f03390(&plStack_48);
      if ((*(float *)(param_1 + 0x7a) != 1.0) || (*(float *)((long)param_1 + 0x3d4) != 1.0)) {
        lVar3 = NEON_fmov(0x3f800000,4);
        param_1[0x7a] = lVar3;
        FUN_0091ada4(param_1 + 0x71);
      }
      (**(code **)(*param_1 + 0x90))(param_1);
      FUN_00f00464(param_1[0xa7]);
      param_1[0xa7] = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c85af0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plStack_48;
  code *pcStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f004ac(param_1 + 0x3f);
  if ((uVar2 & 1) == 0) {
    for (plVar4 = (long *)param_1[0x44]; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[6]) {
      uVar2 = FUN_00f004ac(plVar4);
      if ((uVar2 & 1) != 0) goto LAB_00c85b48;
    }
  }
  else {
    plVar4 = param_1 + 0x8f;
LAB_00c85b48:
    lVar3 = FUN_00f00498(plVar4);
    if (lVar3 != 0) {
      uVar2 = FUN_00f004ac(param_1);
      if (((uVar2 & 1) != 0) && (param_1[0xa7] != 0)) {
        FUN_00f00464();
      }
      param_1[0xa7] = lVar3;
      FUN_00f0044c(lVar3,param_1 + 0x8f);
      goto LAB_00c85be4;
    }
  }
  pcStack_40 = thunk_FUN_00c8571c;
  plStack_48 = param_1;
  FUN_00f03390(&plStack_48);
  if ((*(float *)(param_1 + 0x7a) != 1.0) || (*(float *)((long)param_1 + 0x3d4) != 1.0)) {
    lVar3 = NEON_fmov(0x3f800000,4);
    param_1[0x7a] = lVar3;
    FUN_0091ada4(param_1 + 0x71);
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  if (param_1[0xa7] != 0) {
    FUN_00f00464();
    param_1[0xa7] = 0;
  }
LAB_00c85be4:
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c850f4(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_02804c48;
  param_1[0x17] = &PTR_FUN_02804db0;
  pcStack_40 = thunk_FUN_00c8571c;
  local_48 = param_1;
  FUN_00f03390(&local_48);
  FUN_00f13d08(param_1 + 0x8f);
  param_1[0x71] = &PTR_FUN_028266f0;
  param_1[0x88] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8b);
  FUN_00f13d08(param_1 + 0x71);
  FUN_00f13d08(param_1 + 0x56);
  FUN_00f13d08(param_1 + 0x3f);
  FUN_00f0d3a4(param_1 + 0x19);
  FUN_00f13d08(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c851c0(long param_1)

{
  FUN_00c850f4(param_1 + -0xb8);
  return;
}




void FUN_00c851c8(void *param_1)

{
  FUN_00c850f4();
  operator_delete(param_1);
  return;
}




void FUN_00c851ec(long param_1)

{
  FUN_00c850f4((void *)(param_1 + -0xb8));
  operator_delete((void *)(param_1 + -0xb8));
  return;
}




void FUN_00c85214(undefined4 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar1 = param_2 + 0x19;
  (**(code **)(*param_2 + 0x78))(param_2,plVar1,1);
  plVar2 = param_2 + 0x3f;
  (**(code **)(*param_2 + 0x78))(param_2,plVar2,1);
  FUN_00f023ec(plVar2,param_2 + 0x56,1);
  plVar3 = param_2 + 0x71;
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,param_2 + 0x8f,1);
  *(undefined4 *)(param_2 + 0xa6) = param_1;
  FUN_00f0d75c(plVar1,param_3);
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98,&DAT_01bee7fa);
  FUN_00f0c774(param_2 + 0x56,&DAT_01bee7fe);
  FUN_00f0e548(plVar3,param_4,param_5);
  local_70 = 0x3f0000003f000000;
  (**(code **)(param_2[0x71] + 0x28))(plVar3,&local_70);
  *(uint *)((long)param_2 + 0x4fc) = *(uint *)((long)param_2 + 0x4fc) | 0x10;
  (**(code **)(*param_2 + 0x90))(param_2);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c85380(undefined8 param_1,float param_2,long *param_3)

{
  long *plVar1;
  float fVar2;
  undefined8 uVar3;
  
  plVar1 = param_3 + 0x71;
  FUN_00f0eac0(plVar1);
  FUN_00f13f08(param_1,param_3 + 0x3f);
  fVar2 = (float)FUN_00f0eac0(plVar1);
  FUN_00f0e700(plVar1);
  FUN_00f13f08((float)param_1 - fVar2,param_2 * *(float *)(param_3 + 0xa6),param_3 + 0x56);
  uVar3 = FUN_00f13e54(param_3 + 0x56);
  FUN_00f0eac0(plVar1);
  FUN_00f13f08(uVar3,param_3 + 0x8f);
                    /* WARNING: Could not recover jumptable at 0x00c85424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x90))(param_3);
  return;
}




void FUN_00c85428(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_00f13db4();
  (**(code **)(*param_3 + 0x48))(param_3);
  plVar1 = param_3 + 0x71;
  fVar4 = param_2;
  FUN_00f0e700(plVar1);
  param_2 = param_2 - fVar4;
  if ((*(float *)(param_3 + 0x47) != 0.0) ||
     (fVar4 = *(float *)((long)param_3 + 0x23c), fVar4 != param_2)) {
    *(undefined4 *)(param_3 + 0x47) = 0;
    *(float *)((long)param_3 + 0x23c) = param_2;
    FUN_0091ada4(param_3 + 0x3f);
  }
  plVar2 = param_3 + 0x56;
  fVar3 = (float)FUN_00f0e700(plVar1);
  FUN_00f01c20(param_3 + 0x3f);
  fVar6 = fVar4 * 0.5;
  FUN_00f13e54(plVar2);
  fVar4 = fVar4 * 0.5;
  fVar6 = fVar6 - fVar4;
  if ((*(float *)(param_3 + 0x5e) != fVar3 * 0.5) ||
     (fVar4 = *(float *)((long)param_3 + 0x2f4), fVar4 != fVar6)) {
    *(float *)(param_3 + 0x5e) = fVar3 * 0.5;
    *(float *)((long)param_3 + 0x2f4) = fVar6;
    FUN_0091ada4(plVar2);
  }
  FUN_00c855a4(param_3);
  fVar3 = (float)FUN_00f13e54(plVar2);
  fVar6 = (float)FUN_00f0e700(plVar1);
  FUN_00f0eac0(plVar1);
  FUN_00f13f08(fVar3 + fVar6,param_3 + 0x8f);
  fVar5 = *(float *)(param_3 + 0x5e);
  fVar3 = (float)FUN_00f0e700(plVar1);
  fVar6 = *(float *)((long)param_3 + 0x3cc);
  fVar5 = fVar5 - fVar3 * 0.5;
  FUN_00f0eac0(plVar1);
  fVar6 = fVar6 - fVar4 * 0.5;
  if ((*(float *)(param_3 + 0x97) == fVar5) && (*(float *)((long)param_3 + 0x4bc) == fVar6)) {
    return;
  }
  *(float *)(param_3 + 0x97) = fVar5;
  *(float *)((long)param_3 + 0x4bc) = fVar6;
  FUN_0091ada4(param_3 + 0x8f);
  return;
}




void FUN_00c855a4(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)FUN_00f01c20(param_1 + 0x2b0);
  fVar3 = *(float *)(param_1 + 0xc4);
  fVar1 = fVar1 * fVar3;
  fVar2 = (float)FUN_00f0e700(param_1 + 0x388);
  fVar4 = *(float *)(param_1 + 0x2f4);
  fVar1 = fVar1 + fVar2 * 0.5;
  FUN_00f13e54(param_1 + 0x2b0);
  fVar4 = fVar4 + fVar3 * 0.5;
  if ((*(float *)(param_1 + 0x3c8) == fVar1) && (*(float *)(param_1 + 0x3cc) == fVar4)) {
    return;
  }
  *(float *)(param_1 + 0x3c8) = fVar1;
  *(float *)(param_1 + 0x3cc) = fVar4;
  FUN_0091ada4(param_1 + 0x388);
  return;
}




undefined8 FUN_00c85654(void)

{
  return 5;
}




void FUN_00c8565c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc4) = param_2;
  FUN_00c855a4();
  FUN_008fa51c();
  return;
}




void FUN_00c85674(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  FUN_00c855a4(param_1 + -0xb8);
  FUN_008fa51c();
  return;
}




void FUN_00c85694(undefined8 param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x48))();
  FUN_00f13f08(param_1,param_2);
  return;
}




void FUN_00c856d0(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_2 + -0xb8);
  (**(code **)(*plVar1 + 0x48))(plVar1);
  FUN_00f13f08(param_1,plVar1);
  return;
}




void FUN_00c85710(void)

{
  return;
}




long FUN_00c85714(long param_1)

{
  return param_1 + -0xb8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c8571c(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  ulong uVar7;
  undefined8 local_78;
  float local_70 [2];
  float local_68 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1[0xa7] == 0) goto LAB_00c8586c;
  iVar2 = FUN_019807b8();
  if (iVar2 == 0) {
LAB_00c85794:
    uVar7 = FUN_019806a4();
    if (((uVar7 & 1) == 0) || (DAT_02bf2598 != param_1[0xa7])) {
      local_78 = CONCAT44(_DAT_03218efc,DAT_03218ef8);
      uVar7 = (ulong)(uint)DAT_03218ef8;
    }
    else {
      FUN_01980738(&local_78,(ulong)&local_78 | 4,0,0);
      uVar7 = local_78 & 0xffffffff;
    }
  }
  else {
    iVar4 = 0;
    lVar5 = 0;
    do {
      lVar3 = FUN_019807cc(iVar4);
      iVar4 = iVar4 + 1;
      if (*(long *)(lVar3 + 0x18) != param_1[0xa7]) {
        lVar3 = lVar5;
      }
      lVar5 = lVar3;
    } while (iVar2 != iVar4);
    if (lVar3 == 0) goto LAB_00c85794;
    uVar7 = *(ulong *)(lVar3 + 4);
    local_78 = uVar7;
  }
  if (((float)uVar7 != DAT_03218ef8) || (local_78._4_4_ != _DAT_03218efc)) {
    FUN_00f02010(param_1 + 0x56,local_68,local_70);
    fVar6 = 0.0;
    if (local_68[0] < (float)local_78) {
      if (local_70[0] <= (float)local_78) {
        fVar6 = 1.0;
      }
      else {
        fVar6 = (local_68[0] - (float)local_78) / (local_68[0] - local_70[0]);
      }
    }
    (**(code **)(*param_1 + 0x140))(param_1,fVar6);
    FUN_00f048e0(local_68,DAT_0313c544,(long)param_1 + 0xc4);
    FUN_00f04760(param_1,local_68,0);
  }
LAB_00c8586c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c858b8(undefined8 param_1,undefined8 param_2)

{
  FUN_00c858c0(param_1,param_2,1);
  return;
}




void FUN_00c858c0(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *local_58;
  code *pcStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar2 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    if (((param_3 & 1) != 0) &&
       ((*(float *)(param_1 + 0x7a) != (float)0x40266666 ||
        (*(float *)((long)param_1 + 0x3d4) != (float)0x40266666)))) {
      param_1[0x7a] = 0x4026666640266666;
      FUN_0091ada4(param_1 + 0x71);
    }
    (**(code **)(*param_1 + 0x90))(param_1);
    pcStack_50 = thunk_FUN_00c8571c;
    local_58 = param_1;
    FUN_00f02e98(0,&local_58,0,1);
    lVar3 = param_2[4];
    if ((lVar3 != 0) && (param_1[0xa7] != lVar3)) {
      if (param_1[0xa7] != 0) {
        FUN_00f00464();
      }
      param_1[0xa7] = lVar3;
      FUN_00f0044c(lVar3,param_1 + 0x8f);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c859ec(undefined8 param_1,undefined8 param_2)

{
  FUN_00c858c0(param_1,param_2,0);
  return;
}




void thunk_FUN_00c859f8(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plStack_48;
  code *pcStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f004ac(param_1 + 0x3f);
  if ((uVar2 & 1) == 0) {
    for (plVar4 = (long *)param_1[0x44]; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[6]) {
      uVar2 = FUN_00f004ac(plVar4);
      if ((uVar2 & 1) != 0) goto LAB_00c85a50;
    }
  }
  else {
    plVar4 = param_1 + 0x8f;
LAB_00c85a50:
    lVar3 = FUN_00f00498(plVar4);
    if ((lVar3 != 0) && (lVar3 == param_1[0xa7])) {
      pcStack_40 = thunk_FUN_00c8571c;
      plStack_48 = param_1;
      FUN_00f03390(&plStack_48);
      if ((*(float *)(param_1 + 0x7a) != 1.0) || (*(float *)((long)param_1 + 0x3d4) != 1.0)) {
        lVar3 = NEON_fmov(0x3f800000,4);
        param_1[0x7a] = lVar3;
        FUN_0091ada4(param_1 + 0x71);
      }
      (**(code **)(*param_1 + 0x90))(param_1);
      FUN_00f00464(param_1[0xa7]);
      param_1[0xa7] = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c859f8(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f004ac(param_1 + 0x3f);
  if ((uVar2 & 1) == 0) {
    for (plVar4 = (long *)param_1[0x44]; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[6]) {
      uVar2 = FUN_00f004ac(plVar4);
      if ((uVar2 & 1) != 0) goto LAB_00c85a50;
    }
  }
  else {
    plVar4 = param_1 + 0x8f;
LAB_00c85a50:
    lVar3 = FUN_00f00498(plVar4);
    if ((lVar3 != 0) && (lVar3 == param_1[0xa7])) {
      pcStack_40 = thunk_FUN_00c8571c;
      local_48 = param_1;
      FUN_00f03390(&local_48);
      if ((*(float *)(param_1 + 0x7a) != 1.0) || (*(float *)((long)param_1 + 0x3d4) != 1.0)) {
        lVar3 = NEON_fmov(0x3f800000,4);
        param_1[0x7a] = lVar3;
        FUN_0091ada4(param_1 + 0x71);
      }
      (**(code **)(*param_1 + 0x90))(param_1);
      FUN_00f00464(param_1[0xa7]);
      param_1[0xa7] = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c859f8(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plStack_48;
  code *pcStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f004ac(param_1 + 0x3f);
  if ((uVar2 & 1) == 0) {
    for (plVar4 = (long *)param_1[0x44]; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[6]) {
      uVar2 = FUN_00f004ac(plVar4);
      if ((uVar2 & 1) != 0) goto LAB_00c85a50;
    }
  }
  else {
    plVar4 = param_1 + 0x8f;
LAB_00c85a50:
    lVar3 = FUN_00f00498(plVar4);
    if ((lVar3 != 0) && (lVar3 == param_1[0xa7])) {
      pcStack_40 = thunk_FUN_00c8571c;
      plStack_48 = param_1;
      FUN_00f03390(&plStack_48);
      if ((*(float *)(param_1 + 0x7a) != 1.0) || (*(float *)((long)param_1 + 0x3d4) != 1.0)) {
        lVar3 = NEON_fmov(0x3f800000,4);
        param_1[0x7a] = lVar3;
        FUN_0091ada4(param_1 + 0x71);
      }
      (**(code **)(*param_1 + 0x90))(param_1);
      FUN_00f00464(param_1[0xa7]);
      param_1[0xa7] = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c85af0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f004ac(param_1 + 0x3f);
  if ((uVar2 & 1) == 0) {
    for (plVar4 = (long *)param_1[0x44]; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[6]) {
      uVar2 = FUN_00f004ac(plVar4);
      if ((uVar2 & 1) != 0) goto LAB_00c85b48;
    }
  }
  else {
    plVar4 = param_1 + 0x8f;
LAB_00c85b48:
    lVar3 = FUN_00f00498(plVar4);
    if (lVar3 != 0) {
      uVar2 = FUN_00f004ac(param_1);
      if (((uVar2 & 1) != 0) && (param_1[0xa7] != 0)) {
        FUN_00f00464();
      }
      param_1[0xa7] = lVar3;
      FUN_00f0044c(lVar3,param_1 + 0x8f);
      goto LAB_00c85be4;
    }
  }
  pcStack_40 = thunk_FUN_00c8571c;
  local_48 = param_1;
  FUN_00f03390(&local_48);
  if ((*(float *)(param_1 + 0x7a) != 1.0) || (*(float *)((long)param_1 + 0x3d4) != 1.0)) {
    lVar3 = NEON_fmov(0x3f800000,4);
    param_1[0x7a] = lVar3;
    FUN_0091ada4(param_1 + 0x71);
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  if (param_1[0xa7] != 0) {
    FUN_00f00464();
    param_1[0xa7] = 0;
  }
LAB_00c85be4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c85c0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02804948;
  param_1[0x48] = &PTR_FUN_02804ab8;
  FUN_00f0d3a4(param_1 + 0x102);
  FUN_00f0d3a4(param_1 + 0xdc);
  param_1[0xb1] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 200);
  FUN_00f13d08(param_1 + 0xb1);
  param_1[0x93] = &PTR_FUN_028266f0;
  param_1[0xaa] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xad);
  FUN_00f13d08(param_1 + 0x93);
  param_1[0x75] = &PTR_FUN_028266f0;
  param_1[0x8c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8f);
  FUN_00f13d08(param_1 + 0x75);
  param_1[0x4a] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x61);
  FUN_00f13d08(param_1 + 0x4a);
  FUN_00ecf74c(param_1);
  return;
}




void FUN_00c85ce8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02804948;
  param_1[0x48] = &PTR_FUN_02804ab8;
  FUN_00f0d3a4(param_1 + 0x102);
  FUN_00f0d3a4(param_1 + 0xdc);
  param_1[0xb1] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 200);
  FUN_00f13d08(param_1 + 0xb1);
  param_1[0x93] = &PTR_FUN_028266f0;
  param_1[0xaa] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xad);
  FUN_00f13d08(param_1 + 0x93);
  param_1[0x75] = &PTR_FUN_028266f0;
  param_1[0x8c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8f);
  FUN_00f13d08(param_1 + 0x75);
  param_1[0x4a] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x61);
  FUN_00f13d08(param_1 + 0x4a);
  FUN_00ecf74c(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c85dcc(undefined8 *param_1)

{
  param_1[-0x48] = &PTR_FUN_02804948;
  *param_1 = &PTR_FUN_02804ab8;
  FUN_00f0d3a4(param_1 + 0xba);
  FUN_00f0d3a4(param_1 + 0x94);
  param_1[0x69] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x80);
  FUN_00f13d08(param_1 + 0x69);
  param_1[0x4b] = &PTR_FUN_028266f0;
  param_1[0x62] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x65);
  FUN_00f13d08(param_1 + 0x4b);
  param_1[0x2d] = &PTR_FUN_028266f0;
  param_1[0x44] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x47);
  FUN_00f13d08(param_1 + 0x2d);
  param_1[2] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x19);
  FUN_00f13d08(param_1 + 2);
  FUN_00ecf74c(param_1 + -0x48);
  return;
}




void FUN_00c85ea8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x48;
  *puVar1 = &PTR_FUN_02804948;
  *param_1 = &PTR_FUN_02804ab8;
  FUN_00f0d3a4(param_1 + 0xba);
  FUN_00f0d3a4(param_1 + 0x94);
  param_1[0x69] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x80);
  FUN_00f13d08(param_1 + 0x69);
  param_1[0x4b] = &PTR_FUN_028266f0;
  param_1[0x62] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x65);
  FUN_00f13d08(param_1 + 0x4b);
  param_1[0x2d] = &PTR_FUN_028266f0;
  param_1[0x44] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x47);
  FUN_00f13d08(param_1 + 0x2d);
  param_1[2] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x19);
  FUN_00f13d08(param_1 + 2);
  FUN_00ecf74c(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00c85f8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02804af0;
  FUN_00f0d3a4(param_1 + 0x48);
  FUN_00ecf74c(param_1);
  return;
}




void FUN_00c85fc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02804af0;
  FUN_00f0d3a4(param_1 + 0x48);
  FUN_00ecf74c(param_1);
  operator_delete(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00c8571c(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  ulong uVar7;
  undefined8 uStack_78;
  float afStack_70 [2];
  float afStack_68 [8];
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  if (param_1[0xa7] == 0) goto LAB_00c8586c;
  iVar2 = FUN_019807b8();
  if (iVar2 == 0) {
LAB_00c85794:
    uVar7 = FUN_019806a4();
    if (((uVar7 & 1) == 0) || (DAT_02bf2598 != param_1[0xa7])) {
      uStack_78 = CONCAT44(_DAT_03218efc,DAT_03218ef8);
      uVar7 = (ulong)(uint)DAT_03218ef8;
    }
    else {
      FUN_01980738(&uStack_78,(ulong)&uStack_78 | 4,0,0);
      uVar7 = uStack_78 & 0xffffffff;
    }
  }
  else {
    iVar4 = 0;
    lVar5 = 0;
    do {
      lVar3 = FUN_019807cc(iVar4);
      iVar4 = iVar4 + 1;
      if (*(long *)(lVar3 + 0x18) != param_1[0xa7]) {
        lVar3 = lVar5;
      }
      lVar5 = lVar3;
    } while (iVar2 != iVar4);
    if (lVar3 == 0) goto LAB_00c85794;
    uVar7 = *(ulong *)(lVar3 + 4);
    uStack_78 = uVar7;
  }
  if (((float)uVar7 != DAT_03218ef8) || (uStack_78._4_4_ != _DAT_03218efc)) {
    FUN_00f02010(param_1 + 0x56,afStack_68,afStack_70);
    fVar6 = 0.0;
    if (afStack_68[0] < (float)uStack_78) {
      if (afStack_70[0] <= (float)uStack_78) {
        fVar6 = 1.0;
      }
      else {
        fVar6 = (afStack_68[0] - (float)uStack_78) / (afStack_68[0] - afStack_70[0]);
      }
    }
    (**(code **)(*param_1 + 0x140))(param_1,fVar6);
    FUN_00f048e0(afStack_68,DAT_0313c544,(long)param_1 + 0xc4);
    FUN_00f04760(param_1,afStack_68,0);
  }
LAB_00c8586c:
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

