// functions/00c03 — 62 functions
#include "libGameKindred.h"




void thunk_FUN_00c03174(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_00bfe684(*(undefined8 *)(param_1 + 0x2a0),1);
  uVar2 = FUN_00f048a4("UI::EVENT_CLOSE_MOBILECHAT");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c03174(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_00bfe684(*(undefined8 *)(param_1 + 0x2a0),1);
  uVar2 = FUN_00f048a4("UI::EVENT_CLOSE_MOBILECHAT");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c03174(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_00bfe684(*(undefined8 *)(param_1 + 0x2a0),1);
  uVar2 = FUN_00f048a4("UI::EVENT_CLOSE_MOBILECHAT");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c03174(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00bfe684(*(undefined8 *)(param_1 + 0x2a0),1);
  uVar2 = FUN_00f048a4("UI::EVENT_CLOSE_MOBILECHAT");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c031f0(long *param_1,undefined8 param_2)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  float local_40;
  undefined1 auStack_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(auStack_3c,&local_40);
  fVar2 = (float)FUN_00f04924(param_2);
  *(float *)(param_1 + 0xbe) = local_40 * fVar2;
  uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00c02d20(uVar3,param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c03174(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_00bfe684(*(undefined8 *)(param_1 + 0x2a0),1);
  uVar2 = FUN_00f048a4("UI::EVENT_CLOSE_MOBILECHAT");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c032a0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_009f1f94(0x20);
  if (iVar1 == 2) {
    FUN_00c03174(param_1);
    return;
  }
  return;
}




void FUN_00c032dc(long *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == 0x20) {
    uVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    (**(code **)(*param_1 + 0x48))(param_1);
    FUN_00c02d20(uVar1,param_1);
    return;
  }
  return;
}




void thunk_FUN_00c032dc(long *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == 0x20) {
    uVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    (**(code **)(*param_1 + 0x48))(param_1);
    FUN_00c02d20(uVar1,param_1);
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c03350(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *local_68;
  long *plStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f13ca4();
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = (long)&PTR_FUN_027f5470;
  FUN_00f13ca4(param_1 + 0x19);
  lVar3 = _DAT_03218ef8;
  param_1[0x32] = 0;
  param_1[0x30] = lVar3;
  param_1[0x31] = lVar3;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x19,1);
  plVar1 = param_1 + 0x1a;
  local_40 = DAT_03210f84;
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0x10;
  local_68 = FUN_00c034ac;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(plVar1,&local_68);
  local_68 = FUN_00c034ac;
  local_40 = DAT_03210f58;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(plVar1,&local_68);
  local_40 = DAT_03210f8c;
  local_68 = FUN_00c034b4;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(plVar1,&local_68);
  local_68 = FUN_00c034b4;
  local_40 = DAT_03210f60;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(plVar1,&local_68);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c034ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c038c0(param_1,param_4);
  return;
}




void FUN_00c034b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c03a4c(param_1,param_4);
  return;
}




void FUN_00c034bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f5470;
  FUN_00f13d08(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c034f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f5470;
  FUN_00f13d08(param_1 + 0x19);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c0352c(long param_1)

{
  FUN_00f13f08(param_1 + 200);
  return;
}




void FUN_00c03534(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x180) = param_1;
  *(undefined4 *)(param_3 + 0x184) = param_2;
  return;
}




void FUN_00c03540(long param_1)

{
  FUN_00c070e0(*(undefined8 *)(param_1 + 0xc0));
  return;
}




void FUN_00c03548(long *param_1,long param_2)

{
  long lVar1;
  code *local_58;
  long *plStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = DAT_0313abf4;
  param_1[0x18] = param_2;
  local_58 = FUN_00c03638;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  plStack_50 = param_1;
  FUN_009693a0(param_2 + 8,&local_58);
  local_30 = DAT_0313abf8;
  local_58 = FUN_00c036a0;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  plStack_50 = param_1;
  FUN_009693a0(param_1[0x18] + 8,&local_58);
  local_30 = DAT_0313abfc;
  local_58 = FUN_00c0371c;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  plStack_50 = param_1;
  FUN_009693a0(param_1[0x18] + 8,&local_58);
  (**(code **)(*param_1 + 0x1e0))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c03638(long param_1)

{
  long lVar1;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = FUN_00c03da8;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x38))();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c036a0(long param_1)

{
  long lVar1;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  pcStack_30 = FUN_00c03da8;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  *(undefined8 *)(param_1 + 400) = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c0371c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c03728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))();
  return;
}




void FUN_00c0372c(long param_1)

{
  if (*(long *)(param_1 + 400) != 0) {
    FUN_00c07184(*(undefined8 *)(param_1 + 0xc0),*(long *)(param_1 + 400),param_1 + 0x188);
    return;
  }
  return;
}




void FUN_00c03748(long param_1)

{
  FUN_00c07260(*(undefined8 *)(param_1 + 0xc0));
  return;
}




undefined8 FUN_00c03750(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}




void FUN_00c03758(long param_1)

{
  undefined8 uVar1;
  
  FUN_00c06624(*(undefined8 *)(param_1 + 0xc0));
  FUN_00f13f08(0x43a00000,0x43a00000);
  FUN_00f07940(0,0,param_1 + 200,8,param_1,8);
  uVar1 = FUN_00c06624(*(undefined8 *)(param_1 + 0xc0));
  FUN_00f07940(*(undefined4 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x184),uVar1,8,param_1,8);
  uVar1 = FUN_00c0662c(*(undefined8 *)(param_1 + 0xc0));
  FUN_00f07940(*(undefined4 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x184),uVar1,8,param_1,8);
  return;
}




void FUN_00c037e4(long param_1,long param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 0x20);
  uVar1 = NEON_scvtf(CONCAT44((int)(float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20),
                              (int)(float)*(undefined8 *)(param_2 + 0x28)),4);
  *(undefined8 *)(param_1 + 0x188) = uVar1;
  return;
}




undefined8 FUN_00c03800(void)

{
  return 1;
}




void FUN_00c03808(float param_1,float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  fStack_2c = param_2;
  local_30 = (float)FUN_00f08664(&local_30,param_3);
  fVar2 = DAT_03218f08._4_4_;
  local_38 = (float)FUN_00f08758((undefined4)DAT_03218f08,param_3);
  fStack_34 = fVar2;
  local_38 = (float)FUN_00f0869c(&local_38,*(undefined8 *)(param_3 + 0x20),param_3);
  fStack_34 = fVar2;
  fVar2 = (float)FUN_00f13e54(param_3 + 200);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((local_30 - local_38) * (local_30 - local_38) +
                   (fStack_2c - fStack_34) * (fStack_2c - fStack_34) <= fVar2 * 0.5 * fVar2 * 0.5);
}




void FUN_00c038c0(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar2 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    uVar2 = (**(code **)(*param_1 + 0x1e8))
                      ((float)(int)*(float *)(param_2 + 5),
                       (float)(int)*(float *)((long)param_2 + 0x2c),param_1);
    if ((uVar2 & 1) == 0) {
      FUN_00f0490c(param_2);
    }
    else {
      param_1[0x32] = param_2[4];
      lVar3 = NEON_scvtf(CONCAT44((int)(float)((ulong)param_2[5] >> 0x20),(int)(float)param_2[5]),4)
      ;
      param_1[0x31] = lVar3;
      uVar2 = FUN_00f04a94(param_2);
      if (((uVar2 & 1) == 0) ||
         (uVar2 = (**(code **)(*(long *)param_1[0x17] + 0x28))(), (uVar2 & 1) == 0)) {
        (*(code *)**(undefined8 **)param_1[0x17])();
        pcStack_40 = FUN_00c03da8;
        local_48 = param_1;
        FUN_00f02e98(0x3f19999a,&local_48,0,0);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c039e8(undefined8 param_1)

{
  long lVar1;
  undefined8 local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = FUN_00c03da8;
  local_38 = param_1;
  FUN_00f02e98(0x3f19999a,&local_38,0,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c03a4c(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar2 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    uVar2 = (**(code **)(*param_1 + 0x1e8))
                      ((float)(int)*(float *)(param_2 + 5),
                       (float)(int)*(float *)((long)param_2 + 0x2c),param_1);
    if ((uVar2 & 1) == 0) {
      FUN_00f0490c(param_2);
    }
    else {
      (**(code **)(*(long *)param_1[0x17] + 8))();
      pcStack_40 = FUN_00c03da8;
      local_48 = param_1;
      FUN_00f03390(&local_48);
      param_1[0x32] = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c03b30(long param_1)

{
  long lVar1;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  pcStack_30 = FUN_00c03da8;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  *(undefined8 *)(param_1 + 400) = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c03b9c(long param_1)

{
  long lVar1;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = FUN_00c03da8;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x38))();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c03c04(undefined8 param_1)

{
  long lVar1;
  undefined8 local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = FUN_00c03da8;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c03c58(long param_1)

{
  long lVar1;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  pcStack_30 = FUN_00c03da8;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  *(undefined8 *)(param_1 + 400) = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c03cd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c03ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))();
  return;
}




void FUN_00c03ce4(long param_1)

{
  long lVar1;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x30))();
  pcStack_30 = FUN_00c03da8;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c03d4c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c03d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1e0))();
  return;
}




void FUN_00c03d58(void)

{
  return;
}




void FUN_00c03d5c(void)

{
  return;
}




void FUN_00c03d60(void)

{
  return;
}




void FUN_00c03d64(void)

{
  return;
}




void FUN_00c03d68(void)

{
  return;
}




void FUN_00c03d6c(void)

{
  return;
}




void FUN_00c03d70(void)

{
  return;
}




void FUN_00c03d74(void)

{
  return;
}




void FUN_00c03d78(void)

{
  return;
}




void FUN_00c03d7c(void)

{
  return;
}




void FUN_00c03d80(void)

{
  return;
}




void FUN_00c03d84(void)

{
  return;
}




void FUN_00c03d88(void)

{
  return;
}




void FUN_00c03d8c(void)

{
  return;
}




void FUN_00c03d90(void)

{
  return;
}




void FUN_00c03d94(void)

{
  return;
}




void FUN_00c03d98(void)

{
  return;
}




void FUN_00c03d9c(void)

{
  return;
}




void FUN_00c03da0(void)

{
  return;
}




void FUN_00c03da4(void)

{
  return;
}




void FUN_00c03da8(long param_1)

{
  long lVar1;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x30))();
  pcStack_30 = FUN_00c03da8;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c03e10(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  bool bVar11;
  long lVar12;
  code *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar10 = tpidr_el0;
  local_78 = *(long *)(lVar10 + 0x28);
  FUN_00c03350();
  plVar1 = param_1 + 0x33;
  *param_1 = (long)&PTR_FUN_027f5670;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x44;
  param_1[0x33] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x62;
  FUN_00f10d7c(plVar3);
  plVar4 = param_1 + 0x83;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0xa1;
  FUN_00f0eda4(plVar5);
  plVar6 = param_1 + 0xc1;
  FUN_00f0eda4(plVar6);
  plVar7 = param_1 + 0xe1;
  FUN_00f0eda4(plVar7);
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  FUN_00f0d160();
  FUN_00f0e4a8();
  FUN_00f0d160();
  lVar12 = 0xd38;
  do {
    FUN_00f0e4a8((long)param_1 + lVar12);
    bVar11 = lVar12 != 0x10f8;
    lVar12 = lVar12 + 0xf0;
  } while (bVar11);
  FUN_00c80fd0(param_1 + 0x23d);
  lVar12 = NEON_fmov(0x3f800000,4);
  param_1[0x273] = lVar12;
  *(undefined4 *)(param_1 + 0x274) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x13a4) = 0x101;
  param_1[0x272] = 3;
  *(undefined1 *)((long)param_1 + 0x13a6) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f023ec(plVar1,plVar6,1);
  FUN_00f023ec(plVar1,plVar7,1);
  FUN_00f023ec(plVar1,param_1 + 0x101,1);
  FUN_00f023ec(plVar1,param_1 + 0x11f,1);
  FUN_00f023ec(plVar1,param_1 + 0x13d,1);
  FUN_00f023ec(plVar1,param_1 + 0x163,1);
  FUN_00f023ec(plVar1,param_1 + 0x181,1);
  lVar12 = 0;
  do {
    FUN_00f023ec(plVar1,(long)param_1 + lVar12 + 0xd38,1);
    lVar12 = lVar12 + 0xf0;
  } while (lVar12 != 0x4b0);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x23d,1);
  local_80 = DAT_0313c22c;
  local_a8 = FUN_00c04368;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_009693a0(param_1 + 0x23e,&local_a8);
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  FUN_00f10dc8(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  FUN_00f0e698(plVar3,0xb);
  FUN_00f0e548(plVar4,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  FUN_00f0e670(plVar5,&DAT_01bee7f6,2);
  FUN_00f0eea0(plVar5,FUN_00c04378,param_1);
  uVar9 = *(uint *)((long)param_1 + 0x58c);
  if ((uVar9 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x58c) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x5900;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e548(plVar6,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  FUN_00f0e670(plVar6,&DAT_01bee7f6,2);
  FUN_00f0eea0(plVar6,FUN_00c04410,param_1);
  uVar9 = *(uint *)((long)param_1 + 0x68c);
  if ((uVar9 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x68c) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x2600;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0e548(plVar7,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xff847030);
  FUN_00f0e670(plVar7,&local_a8,2);
  FUN_00f0eea0(plVar7,FUN_00c044a8,param_1);
  uVar9 = *(uint *)((long)param_1 + 0x78c);
  if ((uVar9 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x78c) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0e548(param_1 + 0x101,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  *(uint *)((long)param_1 + 0x88c) = *(uint *)((long)param_1 + 0x88c) & 0xfffffffb;
  FUN_00f0e548(param_1 + 0x11f,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_icon_rings");
  *(uint *)((long)param_1 + 0x97c) = *(uint *)((long)param_1 + 0x97c) & 0xfffffffb;
  FUN_00f0d378(param_1 + 0x13d,PTR_s_build___Fonts_Futura_Medium_64_S_02be9d18);
  FUN_00f0e540(param_1 + 0x163,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  (**(code **)(*param_1 + 0x1a8))(param_1,3);
  FUN_00f0d378(param_1 + 0x181,DAT_031312a8);
  *(uint *)((long)param_1 + 0x126c) = *(uint *)((long)param_1 + 0x126c) & 0xfffffffb;
  lVar12 = 0;
  do {
    local_a8 = (code *)0x3f0000003f000000;
    lVar8 = (long)param_1 + lVar12 + 0xd38;
    (**(code **)(*(long *)((long)param_1 + lVar12 + 0xd38) + 0x28))(lVar8,&local_a8);
    FUN_00f0e548(lVar8,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_ability_level_dot_lit");
    lVar8 = lVar12 + 0xf0;
    *(uint *)((long)param_1 + lVar12 + 0xdbc) =
         *(uint *)((long)param_1 + lVar12 + 0xdbc) & 0xfffffffb;
    lVar12 = lVar8;
  } while (lVar8 != 0x4b0);
  if (*(long *)(lVar10 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c03808(float param_1,float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  fStack_30 = param_1;
  fStack_2c = param_2;
  fStack_30 = (float)FUN_00f08664(&fStack_30,param_3);
  fVar2 = DAT_03218f08._4_4_;
  fStack_38 = (float)FUN_00f08758((undefined4)DAT_03218f08,param_3);
  fStack_34 = fVar2;
  fStack_38 = (float)FUN_00f0869c(&fStack_38,*(undefined8 *)(param_3 + 0x20),param_3);
  fStack_34 = fVar2;
  fVar2 = (float)FUN_00f13e54(param_3 + 200);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((fStack_30 - fStack_38) * (fStack_30 - fStack_38) +
                   (fStack_2c - fStack_34) * (fStack_2c - fStack_34) <= fVar2 * 0.5 * fVar2 * 0.5);
}




void thunk_FUN_00c03808(float param_1,float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  fStack_30 = param_1;
  fStack_2c = param_2;
  fStack_30 = (float)FUN_00f08664(&fStack_30,param_3);
  fVar2 = DAT_03218f08._4_4_;
  fStack_38 = (float)FUN_00f08758((undefined4)DAT_03218f08,param_3);
  fStack_34 = fVar2;
  fStack_38 = (float)FUN_00f0869c(&fStack_38,*(undefined8 *)(param_3 + 0x20),param_3);
  fStack_34 = fVar2;
  fVar2 = (float)FUN_00f13e54(param_3 + 200);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((fStack_30 - fStack_38) * (fStack_30 - fStack_38) +
                   (fStack_2c - fStack_34) * (fStack_2c - fStack_34) <= fVar2 * 0.5 * fVar2 * 0.5);
}

