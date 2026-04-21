// functions/00ed7 — 59 functions
#include "libGameKindred.h"




void thunk_FUN_00ed77f0(long *param_1)

{
  if ((char)param_1[0x1d] != '\0') {
    (**(code **)(*param_1 + 0x160))(param_1);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *(undefined1 *)(param_1 + 0x1d) = 0;
    param_1[0x1c] = 0;
  }
  return;
}




void thunk_FUN_00ed77f0(long *param_1)

{
  if ((char)param_1[0x1d] != '\0') {
    (**(code **)(*param_1 + 0x160))(param_1);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *(undefined1 *)(param_1 + 0x1d) = 0;
    param_1[0x1c] = 0;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ed70a8(long param_1)

{
  undefined8 uVar1;
  
  *(byte *)(param_1 + 0xa20) = *(byte *)(param_1 + 0xa20) & 0xfe;
  uVar1 = _DAT_03218ef8;
  *(undefined8 *)(param_1 + 0x9e0) = _DAT_03218ef8;
  *(undefined8 *)(param_1 + 0x9e8) = uVar1;
  *(undefined8 *)(param_1 + 0x9f0) = uVar1;
  return;
}




byte FUN_00ed70d0(long param_1)

{
  return *(byte *)(param_1 + 0xa20) & 1;
}




undefined8 FUN_00ed70dc(long param_1)

{
  float fVar1;
  float __x;
  
  if ((*(byte *)(param_1 + 0xa20) & 1) == 0) {
    __x = *(float *)(param_1 + 0x9f0) * *(float *)(param_1 + 0x9f0) +
          *(float *)(param_1 + 0x9f4) * *(float *)(param_1 + 0x9f4);
    fVar1 = SQRT(__x);
    if (NAN(fVar1)) {
      fVar1 = sqrtf(__x);
    }
    if (0.0 < fVar1) {
      return 1;
    }
  }
  return 0;
}




byte FUN_00ed7130(long param_1)

{
  return *(byte *)(param_1 + 0xa20) >> 1 & 1;
}




undefined4 FUN_00ed713c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa00);
}




void FUN_00ed7144(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xa20) = *(byte *)(param_1 + 0xa20) & 0xfb | (param_2 & 1) << 2;
  return;
}




void FUN_00ed715c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xa04) = param_1;
  return;
}




void FUN_00ed7164(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xa08) = param_1;
  return;
}




void FUN_00ed716c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xa0c) = param_1;
  return;
}




void FUN_00ed7174(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xa10) = param_1;
  return;
}




void FUN_00ed717c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x9f8) = param_1;
  return;
}




void FUN_00ed7184(long param_1)

{
  *(undefined4 *)(param_1 + 0x9f8) = 0x460ca000;
  *(undefined4 *)(param_1 + 0xa10) = 0x42a00000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ed719c(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_00f0490c(param_2);
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar2 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    param_1[0x143] = param_2[4];
    lVar3 = NEON_scvtf(CONCAT44((int)(float)((ulong)param_2[5] >> 0x20),(int)(float)param_2[5]),4);
    uVar2 = (**(code **)(*param_1 + 0x150))(param_1);
    if ((uVar2 & 1) != 0) {
      (**(code **)(*param_1 + 0x140))(param_1);
      lVar1 = _DAT_03218ef8;
      param_1[0x13d] = lVar3;
      *(byte *)(param_1 + 0x144) = *(byte *)(param_1 + 0x144) | 3;
      param_1[0x13c] = lVar1;
    }
    param_1[0x13b] = lVar3;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ed7268(long param_1,long *param_2)

{
  ulong uVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar5;
  undefined8 uVar4;
  float fVar6;
  float fVar7;
  
  uVar1 = FUN_00ed5af8();
  if ((uVar1 & 1) == 0) {
    FUN_00f0490c(param_2);
    return;
  }
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar1 & 1) == 0) && (DAT_03210fd8 != DAT_03210f50)) {
    return;
  }
  if (param_2[4] != *(long *)(param_1 + 0xa18)) {
    return;
  }
  uVar3 = NEON_scvtf(CONCAT44((int)(float)((ulong)param_2[5] >> 0x20),(int)(float)param_2[5]),4);
  fVar6 = *(float *)(param_1 + 0x9d8) - (float)uVar3;
  fVar5 = (float)((ulong)uVar3 >> 0x20);
  fVar7 = *(float *)(param_1 + 0x9dc) - fVar5;
  uVar1 = FUN_00ed5b08(param_1);
  if ((uVar1 & 1) == 0) {
    pfVar2 = (float *)&DAT_03218f28;
  }
  else {
    uVar1 = FUN_00ed5b14(param_1);
    if ((uVar1 & 1) != 0) goto LAB_00ed735c;
    pfVar2 = (float *)&DAT_03218f20;
  }
  fVar7 = fVar6 * *pfVar2 + fVar7 * pfVar2[1];
  fVar6 = *pfVar2 * fVar7;
  fVar7 = pfVar2[1] * fVar7;
LAB_00ed735c:
  fVar6 = fVar7 * fVar7 + fVar6 * fVar6;
  fVar7 = SQRT(fVar6);
  if (NAN(fVar7)) {
    fVar7 = sqrtf(fVar6);
  }
  if (fVar7 <= *(float *)(param_1 + 0xa00)) {
    FUN_00f0490c(param_2);
  }
  else {
    FUN_00f0044c(param_2[4],param_1);
    uVar4 = _DAT_03218ef8;
    if ((*(byte *)(param_1 + 0xa20) & 1) == 0) {
      *(undefined8 *)(param_1 + 0x9e8) = uVar3;
      *(byte *)(param_1 + 0xa20) = *(byte *)(param_1 + 0xa20) | 1;
      *(undefined8 *)(param_1 + 0x9e0) = uVar4;
      FUN_00f0044c(param_2[4],param_1);
      return;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x9e8);
  *(undefined8 *)(param_1 + 0x9e8) = uVar3;
  *(ulong *)(param_1 + 0x9e0) =
       CONCAT44(fVar5 - (float)((ulong)uVar4 >> 0x20),(float)uVar3 - (float)uVar4);
  return;
}




void FUN_00ed7410(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00ed5af8();
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
    if ((((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) &&
       (param_2[4] == *(long *)(param_1 + 0xa18))) {
      uVar3 = *(undefined8 *)(param_1 + 0x9e8);
      uVar2 = NEON_scvtf(CONCAT44((int)(float)((ulong)param_2[5] >> 0x20),(int)(float)param_2[5]),4)
      ;
      *(undefined8 *)(param_1 + 0x9e8) = uVar2;
      *(ulong *)(param_1 + 0x9e0) =
           CONCAT44((float)((ulong)uVar2 >> 0x20) - (float)((ulong)uVar3 >> 0x20),
                    (float)uVar2 - (float)uVar3);
      *(byte *)(param_1 + 0xa20) = *(byte *)(param_1 + 0xa20) & 0xfc;
      FUN_00f00464(param_2[4]);
      *(undefined8 *)(param_1 + 0xa18) = 0;
    }
    return;
  }
  FUN_00f0490c(param_2);
  return;
}




void FUN_00ed74d0(long *param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar4 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    uVar4 = FUN_00ed5b08(param_1);
    uVar3 = FUN_00ed5b14(param_1);
    fVar5 = ABS(*(float *)((long)param_2 + 0x34));
    if ((uVar4 & 1) == 0) {
      if ((fVar5 < 0.001) || (((uVar3 ^ 1) & 1) != 0)) goto LAB_00ed7654;
    }
    else if ((fVar5 < 0.001 || ((uVar3 ^ 0xffffffff) & 1) != 0) &&
            (((uVar3 & 1) != 0 || fVar5 < 0.001 && (ABS(*(float *)(param_2 + 6)) < 0.001))))
    goto LAB_00ed7654;
    (**(code **)(*param_1 + 0x140))(param_1);
    fVar6 = *(float *)(param_2 + 6) * *(float *)(param_1 + 0x142);
    fVar9 = *(float *)(param_1 + 0x142) * *(float *)((long)param_2 + 0x34);
    fVar5 = fVar6;
    if ((uVar4 & 1) == 0) {
      fVar5 = 0.0;
    }
    fVar8 = fVar9;
    if ((uVar3 & 1) == 0) {
      fVar8 = 0.0;
    }
    uVar4 = FUN_00ed5b08(param_1);
    fVar7 = fVar5;
    if (((uVar4 & 1) != 0) &&
       (bVar2 = FUN_00ed5b14(param_1), fVar7 = fVar9, (fVar5 == 0.0 & (bVar2 ^ 1)) == 0)) {
      fVar7 = fVar5;
    }
    local_60._0_4_ = (float)FUN_00ed5a4c(param_1);
    local_60._0_4_ = fVar7 + (float)local_60;
    local_60._4_4_ = fVar8 + fVar6;
    FUN_00ed5a14(param_1,&local_60);
    FUN_00ed6f88(fVar7,param_1);
    fVar5 = (float)FUN_00ed6dd4(param_1);
    local_60 = CONCAT44(local_60._4_4_ - fVar8,(float)local_60 - fVar5);
    FUN_00ed5a14(param_1,&local_60);
  }
LAB_00ed7654:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed7688(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if ((((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) &&
     (param_2[4] == *(long *)(param_1 + 0xa18))) {
    *(undefined8 *)(param_1 + 0xa18) = 0;
    *(byte *)(param_1 + 0xa20) = *(byte *)(param_1 + 0xa20) & 0xfc;
  }
  return;
}




void FUN_00ed7708(undefined8 *param_1)

{
  FUN_00ed87f8();
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_02823610;
  param_1[0x17] = &PTR_FUN_02823798;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  return;
}




void FUN_00ed774c(undefined8 *param_1)

{
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *param_1 = &PTR_FUN_02823610;
  param_1[0x17] = &PTR_FUN_02823798;
  param_1[0x1a] = 0;
  FUN_00f13d08();
  return;
}




void FUN_00ed7770(long param_1)

{
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}




void FUN_00ed777c(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_02823610;
  *param_1 = &PTR_FUN_02823798;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  FUN_00f13d08(param_1 + -0x17);
  return;
}




void FUN_00ed77a8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xed77ac);
  (*pcVar1)();
}




void FUN_00ed77ac(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xed77b0);
  (*pcVar1)();
}




void FUN_00ed77b0(void)

{
  return;
}




void FUN_00ed77b4(long *param_1)

{
  if ((char)param_1[0x1d] == '\0') {
    (**(code **)(*param_1 + 0x158))(param_1);
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return;
}




void FUN_00ed77f0(long *param_1)

{
  if ((char)param_1[0x1d] != '\0') {
    (**(code **)(*param_1 + 0x160))(param_1);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *(undefined1 *)(param_1 + 0x1d) = 0;
    param_1[0x1c] = 0;
  }
  return;
}




undefined1 FUN_00ed7830(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe8);
}




void FUN_00ed7838(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x168))();
  if ((code *)param_1[0x1a] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ed7874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[0x1a])(param_1[0x1c],0,param_2);
    return;
  }
  return;
}




void FUN_00ed7884(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x170))();
  if ((code *)param_1[0x1b] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ed78c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[0x1b])(param_1[0x1c],1,param_2);
    return;
  }
  return;
}




void FUN_00ed78d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  *(undefined8 *)(param_1 + 0xd8) = param_4;
  *(undefined8 *)(param_1 + 0xe0) = param_2;
  return;
}




void FUN_00ed78dc(void)

{
  return;
}




void FUN_00ed78e0(void)

{
  return;
}




void FUN_00ed78e4(void)

{
  return;
}




void FUN_00ed78e8(void)

{
  return;
}




void FUN_00ed78ec(void)

{
  return;
}




void FUN_00ed78f0(void)

{
  return;
}




void FUN_00ed78f4(undefined8 *param_1)

{
  FUN_00f13ca4();
  FUN_00ed891c(param_1 + 0x17);
  param_1[0x17] = &PTR_FUN_028239f8;
  *param_1 = &PTR_FUN_028237e0;
  FUN_00ed92bc(0x40a00000,0x42c80000,param_1 + 0x19);
  FUN_00e70510(param_1 + 0x37);
  FUN_00f0d160(param_1 + 0x39);
  FUN_00f11234(param_1 + 0x5f);
  *(undefined4 *)((long)param_1 + 0x4a4) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0x20;
  param_1[0x93] = 0x3f80000041a00000;
  *(byte *)(param_1 + 0x95) = *(byte *)(param_1 + 0x95) & 0xfc;
  FUN_00ed7988(param_1);
  return;
}




void FUN_00ed7988(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined2 local_40 [4];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00f13f68(param_1,0x32000000c8);
  local_40[0] = 1;
  FUN_00f14070(param_1,local_40);
  FUN_00ed7be4(param_1,1);
  plVar1 = param_1 + 0x5f;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x39;
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,param_1 + 0x19,1);
  FUN_00f0d9b0(plVar2,0);
  FUN_00f0d75c(plVar2,&DAT_03210450);
  FUN_00f0d9a4(plVar2,0);
  *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) & 0xdf;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed7a74(undefined8 *param_1,undefined8 param_2)

{
  FUN_00f13ca4();
  FUN_00ed891c(param_1 + 0x17);
  param_1[0x17] = &PTR_FUN_028239f8;
  *param_1 = &PTR_FUN_028237e0;
  FUN_00ed92bc(0x40a00000,0x42c80000,param_1 + 0x19);
  FUN_00e70510(param_1 + 0x37);
  FUN_00f0d160(param_1 + 0x39);
  FUN_00f11234(param_1 + 0x5f);
  *(undefined4 *)((long)param_1 + 0x4a4) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0x20;
  param_1[0x93] = 0x3f80000041a00000;
  *(byte *)(param_1 + 0x95) = *(byte *)(param_1 + 0x95) & 0xfc;
  FUN_00f0d378(param_1 + 0x39,param_2);
  FUN_00ed7988(param_1);
  return;
}




void FUN_00ed7b24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028237e0;
  param_1[0x17] = &PTR_FUN_028239f8;
  FUN_00f13d08(param_1 + 0x5f);
  FUN_00f0d3a4(param_1 + 0x39);
  if ((void *)param_1[0x38] != (void *)0x0) {
    operator_delete__((void *)param_1[0x38]);
    param_1[0x37] = 0;
    param_1[0x38] = 0;
  }
  FUN_00ed9334(param_1 + 0x19);
  FUN_00ed8964(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ed7b90(long param_1)

{
  FUN_00ed7b24(param_1 + -0xb8);
  return;
}




void FUN_00ed7b98(void *param_1)

{
  FUN_00ed7b24();
  operator_delete(param_1);
  return;
}




void FUN_00ed7bbc(long param_1)

{
  FUN_00ed7b24((void *)(param_1 + -0xb8));
  operator_delete((void *)(param_1 + -0xb8));
  return;
}




void FUN_00ed7be4(long param_1,byte param_2)

{
  long lVar1;
  undefined4 uVar2;
  code *local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  uVar2 = DAT_03210fa0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x4a0) >> 3 & 1) != (param_2 & 1)) {
    if ((param_2 & 1) == 0) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffffffef;
      FUN_00f04694(param_1,uVar2);
      FUN_00f04694(param_1,DAT_03210fa4);
    }
    else {
      local_50 = DAT_03210fa0;
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x10;
      local_78 = FUN_00ed7d20;
      local_68 = 0;
      local_60 = 0;
      local_58 = 1;
      lStack_70 = param_1;
      FUN_009693a0(param_1 + 8,&local_78);
      local_78 = FUN_00ed7d20;
      local_50 = DAT_03210fa4;
      local_60 = 0;
      local_58 = 0;
      local_68 = 0;
      lStack_70 = param_1;
      FUN_009693a0(param_1 + 8,&local_78);
    }
    *(byte *)(param_1 + 0x4a0) = *(byte *)(param_1 + 0x4a0) & 0xf7 | (param_2 & 1) << 3;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed7d08(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x4a0) = *(byte *)(param_1 + 0x4a0) & 0xdf | (param_2 & 1) << 5;
  return;
}




void FUN_00ed7d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00ed8388(param_1,param_2,param_5);
  return;
}




void FUN_00ed7d28(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x4a8) = *(byte *)(param_1 + 0x4a8) & 0xfe | param_2 & 1;
  return;
}




byte FUN_00ed7d38(long param_1)

{
  return *(byte *)(param_1 + 0x4a0) >> 3 & 1;
}




byte FUN_00ed7d44(long param_1)

{
  return *(byte *)(param_1 + 1000) >> 3 & 1;
}




void FUN_00ed7d50(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x4a0) = *(byte *)(param_1 + 0x4a0) & 0xf8 | param_2 & 7;
  return;
}




void FUN_00ed7d60(long param_1)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x4a0) >> 4 & 1) == 0) {
    *(byte *)(param_1 + 0x4a0) = *(byte *)(param_1 + 0x4a0) | 0x10;
    FUN_00ed7dcc(param_1);
    plVar1 = (long *)(param_1 + 0xb8);
    (**(code **)(*plVar1 + 0x100))(plVar1,1);
    FUN_00ed9688(param_1 + 200,1);
                    /* WARNING: Could not recover jumptable at 0x00ed7dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb8))(plVar1);
    return;
  }
  return;
}




void FUN_00ed7dcc(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*param_1 + 0x1d0))();
  uVar4 = FUN_00e70b34(uVar3,&DAT_03210450);
  if ((uVar4 & 1) == 0) {
    uVar3 = FUN_00f08be8(param_1 + 0x53);
    uVar4 = FUN_00e70b34(param_1 + 0x37,uVar3);
    if ((uVar4 & 1) == 0) goto LAB_00ed7e58;
  }
  FUN_00e705c8(&local_48,&DAT_01e277f2);
  FUN_00f0d75c(param_1 + 0x39,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
LAB_00ed7e58:
  uVar1 = *(uint *)((long)param_1 + 0x84) >> 7 & 0xff;
  *(float *)((long)param_1 + 0x49c) = (float)uVar1 / 255.0;
  if (uVar1 != 0) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffff807f;
    FUN_0091ada4(param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed7eb0(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x4a0);
  if ((bVar1 >> 4 & 1) == 0) {
    return;
  }
  *(byte *)(param_1 + 0x4a0) = bVar1 & 0xef;
  if ((bVar1 >> 5 & 1) != 0) {
    FUN_00ed7f14(param_1);
  }
  *(undefined4 *)(param_1 + 0x4a4) = 0;
  FUN_00ed9688(param_1 + 200,0);
                    /* WARNING: Could not recover jumptable at 0x00ed7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0xb8) + 0x100))((long *)(param_1 + 0xb8),0);
  return;
}




void FUN_00ed7f14(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  FUN_00f04c40(auStack_50,DAT_03210fac,param_1);
  FUN_00f04760(param_1,auStack_50,1);
  uVar1 = *(uint *)(param_1 + 0x84);
  uVar3 = (uint)(*(float *)(param_1 + 0x49c) * 255.0);
  if ((uVar1 >> 7 & 0xff) != uVar3) {
    *(uint *)(param_1 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar3 & 0xff) << 7;
    FUN_0091ada4(param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




byte FUN_00ed7fb4(long param_1)

{
  return *(byte *)(param_1 + 0x4a0) >> 4 & 1;
}




void FUN_00ed7fc0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x498) = param_1;
  return;
}




void FUN_00ed7fc8(undefined8 param_1,long *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00f08c10(param_2 + 0x53);
  fVar3 = *(float *)(lVar1 + 0x924);
  FUN_00f13f08(param_1,fVar3,param_2);
  fVar2 = (float)(**(code **)(*param_2 + 0x48))(param_2);
  (**(code **)(*param_2 + 0x48))(param_2);
  FUN_00f13f68(param_2,CONCAT44((int)fVar3,(int)fVar2));
  return;
}

