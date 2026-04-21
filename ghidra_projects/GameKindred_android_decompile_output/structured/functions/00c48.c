// functions/00c48 — 19 functions
#include "libGameKindred.h"




void FUN_00c4823c(undefined8 param_1)

{
  long lVar1;
  undefined8 local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = thunk_FUN_00c4829c;
  local_38 = param_1;
  FUN_00f02e98(0xbf800000,&local_38,0,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4829c(long param_1)

{
  FUN_00f13420(param_1 + 0x18f0);
  FUN_00f01b6c();
  if (*(long *)(param_1 + 0x250) != 0) {
    *(undefined4 *)(param_1 + 0x248) = 0;
  }
  return;
}




void FUN_00c482d4(long *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  code *pcVar3;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pcVar3 = (code *)FUN_00c49010(param_1 + 0x31e,1);
  pcVar1 = pcVar3 + 0x140;
  FUN_00c938d4(pcVar1,param_2);
  FUN_00c93864(pcVar1,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  local_68 = (ulong)param_3;
  local_60 = DAT_03210c64;
  local_88 = FUN_00c483e0;
  local_78 = 0;
  uStack_70 = 0;
  plStack_80 = param_1;
  FUN_009693a0(pcVar3 + 0x148,&local_88);
  *(uint *)(pcVar3 + 0x1c4) = *(uint *)(pcVar3 + 0x1c4) | 0x10;
  FUN_00ecf888(pcVar1,param_4 & 1);
  local_88 = pcVar3;
  FUN_00c48448(param_1 + 0x49,&local_88);
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c483e0(undefined8 param_1)

{
  long lVar1;
  undefined4 in_w4;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313b7d4,in_w4);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c48448(uint *param_1,undefined8 *param_2)

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
    FUN_00c491d8(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




int FUN_00c484d0(undefined8 param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)NEON_ucvtf(DAT_0313b7e0._4_4_);
  fVar2 = (float)NEON_ucvtf((undefined4)DAT_0313b7e0);
  return (int)(((float)param_2 * fVar1) / fVar2);
}




int FUN_00c484f8(undefined8 param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)NEON_ucvtf((undefined4)DAT_0313b7e0);
  fVar2 = (float)NEON_ucvtf(DAT_0313b7e0._4_4_);
  return (int)(((float)param_2 * fVar1) / fVar2);
}




void FUN_00c48520(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c48528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}




void thunk_FUN_00c4829c(long param_1)

{
  FUN_00f13420(param_1 + 0x18f0);
  FUN_00f01b6c();
  if (*(long *)(param_1 + 0x250) != 0) {
    *(undefined4 *)(param_1 + 0x248) = 0;
  }
  return;
}




void FUN_00c48530(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313b7d4,param_3);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c48598(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313b7d8,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c48600(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x1a70);
  if (lVar2 != 0) {
    FUN_00f048e0(auStack_58,DAT_0313b7dc,0);
    FUN_00f04760(lVar2,auStack_58,0);
  }
  FUN_00f0490c(param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c48680(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313b7d8,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c486e8(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  plVar1 = param_3 + 0x4c;
  fVar10 = *(float *)(param_3 + 0x55);
  fVar11 = *(float *)((long)param_3 + 0x2ac);
  if ((fVar10 != 1.0) || (fVar11 != 1.0)) {
    lVar8 = NEON_fmov(0x3f800000,4);
    param_3[0x55] = lVar8;
    FUN_0091ada4(plVar1);
  }
  local_70 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar9 = local_70 + -96.0;
  fStack_6c = param_2;
  FUN_00f13f18(plVar1,&local_70);
  if ((*(float *)(param_3 + 0x56) != (float)DAT_03218f08) ||
     (*(float *)((long)param_3 + 0x2b4) != DAT_03218f08._4_4_)) {
    param_3[0x56] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar1);
  }
  FUN_00f07940(0,0,plVar1,8,param_3,8);
  FUN_00c48a40(0x3df5c28f,0x3c23d70a,param_3,&local_70);
  FUN_00c48b8c(fVar9,param_3);
  FUN_00c48d88(fVar9,param_3);
  FUN_00c48eac(0x42400000,local_70,fStack_6c,param_3);
  if ((*(byte *)((long)param_3 + 0xe74) >> 2 & 1) != 0) {
    plVar2 = param_3 + 0x1be;
    fVar9 = fStack_6c * 0.12;
    FUN_00f13f08(local_70,plVar2);
    local_78 = FUN_00f13e54(plVar2);
    fStack_74 = fVar9;
    FUN_00f13f18(param_3 + 0x1d5,&local_78);
    FUN_00f07940(0,0,plVar2,6,plVar1,6);
  }
  uVar6 = FUN_00f08be8(param_3 + 0x1b2);
  uVar7 = FUN_00e70b88(uVar6,&DAT_03210450);
  if ((uVar7 & 1) == 0) {
    *(uint *)((long)param_3 + 0xc54) = *(uint *)((long)param_3 + 0xc54) & 0xfffffffb;
    *(uint *)((long)param_3 + 0xd44) = *(uint *)((long)param_3 + 0xd44) & 0xfffffffb;
  }
  else {
    plVar2 = param_3 + 0x198;
    *(uint *)((long)param_3 + 0xd44) = *(uint *)((long)param_3 + 0xd44) | 4;
    FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
    uVar4 = *(uint *)((long)param_3 + 0xd44);
    if ((uVar4 & 0x7f80) != 0x6c00) {
      *(uint *)((long)param_3 + 0xd44) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6c00;
      FUN_0091ada4(plVar2);
    }
    FUN_00f0da30(plVar2,0);
    uVar4 = *(uint *)((long)param_3 + 0xc54);
    plVar3 = param_3 + 0x17a;
    *(uint *)((long)param_3 + 0xc54) = uVar4 | 4;
    if ((uVar4 & 0x7f80) != 0x3900) {
      *(uint *)((long)param_3 + 0xc54) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x3904;
      FUN_0091ada4(plVar3);
    }
    fVar9 = (float)FUN_00f0d4e0(plVar2);
    FUN_00f13f08(fVar9 + 320.0,0x42340000,plVar3);
    FUN_00f07940(0,0,plVar3,4,param_3 + 0x7e,4);
    FUN_00f07b18(0xc0800000,plVar2,2,param_3 + 0x110,0);
    FUN_00f07b18(0,plVar2,4,param_3 + 0x110,4);
  }
  if ((*(byte *)((long)param_3 + 0xb64) >> 2 & 1) != 0) {
    FUN_00f13f08(0x43140000,0x43140000,param_3 + 0x15c);
    FUN_00f07b78(0x3f000000,0x3f000000,0x3f000000,0x3f08f5c3,0xc0c00000,0,param_3 + 0x15c,plVar1);
  }
  if ((*(float *)(param_3 + 0x55) != fVar10) || (*(float *)((long)param_3 + 0x2ac) != fVar11)) {
    *(float *)(param_3 + 0x55) = fVar10;
    *(float *)((long)param_3 + 0x2ac) = fVar11;
    FUN_0091ada4(plVar1);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c48a40(float param_1,float param_2,long param_3,float *param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  fVar3 = param_4[1];
  if ((*(byte *)(param_3 + 0xe74) >> 2 & 1) != 0) {
    fVar3 = fVar3 - (param_1 + param_2) * fVar3;
  }
  lVar1 = param_3 + 0x318;
  FUN_00f13f08(*param_4,fVar3,lVar1);
  lVar2 = param_3 + 0x3f0;
  FUN_00f13f08(*param_4 + -10.0,fVar3 + -10.0,lVar2);
  FUN_00f0d060(lVar2,2);
  FUN_00f0d084(0x3f000000,0,lVar2);
  FUN_00f0d07c(lVar2,2);
  FUN_00f112f0(lVar2,1);
  FUN_00f0cd00(lVar2);
  FUN_00f07940(0,0,lVar2,8,lVar1,8);
  FUN_00f13f08(*param_4,fVar3,param_3 + 0x720);
  FUN_00f07940(0,0,param_3 + 0x720,0,lVar1,0);
  FUN_00f13f08(*param_4,fVar3,param_3 + 0x1b00);
  FUN_00f07940(0,0,param_3 + 0x1b00,0,lVar1,0);
  FUN_00f07940(0,0,lVar1,0,param_3 + 0x260,0);
  return;
}




void FUN_00c48b8c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = *(undefined4 *)(&DAT_01bbd500 + (ulong)(*(char *)(param_2 + 0x1bd8) == '\0') * 4);
  lVar2 = param_2 + 0x880;
  if (*(char *)(param_2 + 0x1bd9) == '\0') {
    FUN_00f0d378(lVar2,PTR_s_build___Fonts_Brandon_Regular_12_02be9c60);
    fVar4 = 0.0;
    FUN_00f0db64(param_1,0,uVar6,lVar2);
    lVar1 = param_2 + 0x9b0;
    FUN_00f0d378(lVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
    FUN_00f0dad0(param_1,lVar1,1);
    FUN_00f0dac8(lVar1,3);
    lVar1 = FUN_00f08c10(param_2 + 0x950);
    fVar3 = *(float *)(lVar1 + 0x920);
    FUN_00f0d4e0(lVar2);
    fVar3 = 1.0 - ABS(fVar3) / fVar4;
    FUN_00f07b78(0x3f000000,fVar3,0x3f000000,0x3f051eb8,0,0,lVar2,param_2 + 0x260);
    uVar5 = 0;
  }
  else {
    FUN_00f0d378(lVar2,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
    fVar4 = 0.0;
    FUN_00f0db64(param_1,0,uVar6,lVar2);
    lVar1 = param_2 + 0x9b0;
    FUN_00f0d378(lVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
    FUN_00f0dad0(param_1,lVar1,1);
    FUN_00f0dac8(lVar1,3);
    lVar1 = FUN_00f08c10(param_2 + 0x950);
    fVar3 = *(float *)(lVar1 + 0x920);
    FUN_00f0d4e0(lVar2);
    uVar5 = 0x3f000000;
    FUN_00f07b78(0x3f000000,1.0 - ABS(fVar3) / fVar4,0x3f000000,0x3f333333,0,0,lVar2,param_2 + 0x260
                );
    fVar3 = 0.845;
    lVar2 = param_2 + 0x260;
  }
  FUN_00f07b78(0x3f000000,uVar5,0x3f000000,fVar3,0,0x41c00000,param_2 + 0x9b0,lVar2);
  return;
}




void FUN_00c48d88(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (*(int *)(param_2 + 0x248) != 0) {
    plVar3 = *(long **)(param_2 + 0x250);
    lVar2 = 0;
    do {
      lVar1 = *plVar3;
      FUN_00f13f08(param_1,0x43020000,lVar1);
      FUN_00f13f08(param_1,0x43020000,lVar1 + 0x140);
      FUN_00f07940(0,0,lVar1 + 0xb8,8,lVar1,8);
      FUN_00f07940(0,0,lVar1 + 0x140,8,lVar1 + 0xb8,8);
      if (lVar2 != 0) {
        FUN_00f07b18(0x42100000,lVar1,0,lVar2,2);
      }
      plVar3 = plVar3 + 1;
      lVar2 = lVar1;
    } while (plVar3 != (long *)(*(long *)(param_2 + 0x250) + (ulong)*(uint *)(param_2 + 0x248) * 8))
    ;
  }
  FUN_00f13238(param_2 + 0x18f0);
  FUN_00f07940(0,0,param_2 + 0x18f0,8,param_2 + 0x630,8);
  return;
}




void FUN_00c48eac(float param_1,undefined1 param_2 [16],long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined8 local_50;
  long local_48;
  
  fVar4 = param_2._0_4_;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_3 + 0x1bd9) == '\0') {
    FUN_00f080a0(param_3 + 0x9b0,6,param_3 + 0x318,6);
    lVar2 = param_3 + 0x1a48;
    FUN_00f13f08(param_2._0_8_,fVar4 - (param_1 + 20.0),lVar2);
    if (*(long **)(param_3 + 0x1a70) != (long *)0x0) {
      (**(code **)(**(long **)(param_3 + 0x1a70) + 0x90))();
    }
    FUN_00f07b18(0x41a00000,lVar2,0,param_3 + 0x880,2);
    FUN_00f07b18(0,lVar2,4,param_3 + 0x880,4);
  }
  else {
    FUN_00f13e54(param_3 + 0x318);
    plVar1 = (long *)(param_3 + 0x1a48);
    FUN_00f13f08(param_2._0_8_,fVar4 * 0.605,plVar1);
    if (*(long **)(param_3 + 0x1a70) != (long *)0x0) {
      (**(code **)(**(long **)(param_3 + 0x1a70) + 0x90))();
    }
    local_50 = 0x3f8000003f000000;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_50);
    FUN_00f07940(0,0,plVar1,4,param_3 + 0x318,4);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c4829c(long param_1)

{
  FUN_00f13420(param_1 + 0x18f0);
  FUN_00f01b6c();
  if (*(long *)(param_1 + 0x250) != 0) {
    *(undefined4 *)(param_1 + 0x248) = 0;
  }
  return;
}

