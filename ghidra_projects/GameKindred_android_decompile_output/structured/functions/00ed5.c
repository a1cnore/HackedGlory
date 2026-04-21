// functions/00ed5 — 34 functions
#include "libGameKindred.h"




void FUN_00ed5280(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x84);
  if ((param_2 & 1) == 0) {
    *(uint *)(param_1 + 0x84) = uVar1 & 0xfffffff3;
    if ((uVar1 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x84) = uVar1 & 0xffff8073;
      FUN_0091ada4(param_1);
    }
    FUN_00f048e0(auStack_48,DAT_03210c84,0);
    FUN_00f04760(param_1,auStack_48,0);
  }
  else {
    *(uint *)(param_1 + 0x84) = uVar1 | 0xc;
    if ((~uVar1 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x84) = uVar1 | 0x7f8c;
      FUN_0091ada4(param_1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed5344(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00f02540(param_1 + 0x110);
  if ((uVar1 & 1) != 0) {
    FUN_00f01a4c(param_1 + 0x110,1);
    return;
  }
  return;
}




void FUN_00ed5380(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_02823008;
  FUN_00f11234(plVar1);
  FUN_00f13ca4(param_1 + 0x4b);
  plVar2 = param_1 + 0x62;
  FUN_00ed6594(plVar2,1);
  plVar3 = param_1 + 0xce;
  param_1[0x62] = (long)&PTR_FUN_02823278;
  FUN_00ed6594(plVar3,0);
  param_1[0xce] = (long)&PTR_FUN_02823378;
  *(byte *)(param_1 + 0x13a) = *(byte *)(param_1 + 0x13a) & 0xf0;
  *(byte *)((long)param_1 + 0x9d4) = *(byte *)((long)param_1 + 0x9d4) & 0xfc;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x4b,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f112f0(plVar1,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  *(uint *)((long)param_1 + 0x394) = *(uint *)((long)param_1 + 0x394) & 0xfffffff7;
  *(uint *)((long)param_1 + 0x6f4) = *(uint *)((long)param_1 + 0x6f4) & 0xfffffff7;
  if ((*(float *)(param_1 + 0x6b) != 0.4) || (*(float *)((long)param_1 + 0x35c) != 1.0)) {
    param_1[0x6b] = 0x3f8000003ecccccd;
    FUN_0091ada4(plVar2);
  }
  if ((*(float *)(param_1 + 0xd7) == 1.0) && (*(float *)((long)param_1 + 0x6bc) == 0.4)) {
    return;
  }
  param_1[0xd7] = 0x3ecccccd3f800000;
  FUN_0091ada4(plVar3);
  return;
}




void FUN_00ed5534(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02823008;
  FUN_00ed5588(param_1 + 0xce);
  FUN_00ed5588(param_1 + 0x62);
  FUN_00f13d08(param_1 + 0x4b);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ed5588(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02823178;
  param_1[0x4d] = &PTR_FUN_028266f0;
  param_1[100] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x67);
  FUN_00f13d08(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_028266f0;
  param_1[0x46] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00ed5624(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xed5628);
  (*pcVar1)();
}




void FUN_00ed5628(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ed5630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_00ed5634(long *param_1)

{
  FUN_00f13f08(param_1 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x00ed5660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_00ed5664(long param_1,undefined8 param_2,uint param_3)

{
  FUN_00f023ec(param_1 + 600,param_2,param_3 & 1);
  return;
}




void FUN_00ed5670(long param_1)

{
  FUN_00f019d4(param_1 + 600,1);
  return;
}




void FUN_00ed567c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ed5684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00ed5688(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_88 [4];
  int local_84;
  undefined1 auStack_80 [4];
  int local_7c;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  fVar11 = (float)(**(code **)(*param_3 + 0x48))();
  uVar10 = (uint)fVar11;
  (**(code **)(*param_3 + 0x48))(param_3);
  uVar9 = (uint)param_2;
  fVar12 = (float)FUN_00f13e54(param_3 + 0x17);
  fVar11 = param_2;
  FUN_00ed58cc(param_3);
  plVar1 = param_3 + 0x4b;
  uVar4 = FUN_00f14060(plVar1);
  if ((uVar4 & 1) == 0) {
    fVar13 = (float)FUN_00f01c54(plVar1,0,0,0,1);
    uVar7 = uVar10;
    if (((*(byte *)(param_3 + 0x13a) & 3) != 1) &&
       (uVar7 = (int)fVar13, (uint)(int)fVar13 <= uVar10)) {
      uVar7 = uVar10;
    }
    uVar10 = uVar9;
    if (((*(byte *)(param_3 + 0x13a) & 0xc) != 4) &&
       (uVar10 = (int)fVar11, (uint)(int)fVar11 <= uVar9)) {
      uVar10 = uVar9;
    }
    fVar11 = (float)uVar10;
    FUN_00f13f08((float)uVar7,plVar1);
  }
  else {
    plVar5 = (long *)FUN_00f14058(plVar1);
    (**(code **)(*plVar5 + 0x30))();
    uVar6 = FUN_00f14058(plVar1);
    FUN_00f13bb4(uVar6,&local_7c,auStack_80,&local_84,auStack_88);
    uVar6 = (**(code **)(*plVar5 + 0x90))(plVar5,(uVar10 - local_7c) - local_84);
    uVar7 = (uint)uVar6;
    if ((uint)uVar6 <= uVar10) {
      uVar7 = uVar10;
    }
    if ((*(byte *)(param_3 + 0x13a) & 3) != 1) {
      uVar10 = uVar7;
    }
    uVar7 = (uint)((ulong)uVar6 >> 0x20);
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if ((*(byte *)(param_3 + 0x13a) & 0xc) != 4) {
      uVar9 = uVar7;
    }
    FUN_00f13f08((float)uVar10,(float)uVar9,plVar1);
    fVar11 = 0.0;
    (**(code **)(*plVar5 + 0x28))(0,0,(float)uVar10,(float)uVar9,plVar5);
  }
  fVar13 = (float)FUN_00f13e54(plVar1);
  bVar2 = *(byte *)(param_3 + 0x13a);
  if (((bVar2 & 3) == 2) || (((bVar2 & 3) == 0 && (fVar12 < fVar13)))) {
    bVar8 = *(byte *)((long)param_3 + 0x9d4) | 1;
  }
  else {
    bVar8 = *(byte *)((long)param_3 + 0x9d4) & 0xfe;
  }
  bVar2 = bVar2 >> 2 & 3;
  *(byte *)((long)param_3 + 0x9d4) = bVar8;
  if ((bVar2 == 2) || ((bVar2 == 0 && (param_2 < fVar11)))) {
    bVar8 = bVar8 | 2;
  }
  else {
    bVar8 = bVar8 & 0xfd;
  }
  *(byte *)((long)param_3 + 0x9d4) = bVar8;
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed58cc(float param_1,float param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = param_2;
  uVar2 = FUN_00f02540();
  if ((uVar2 & 1) != 0) {
    fVar3 = (float)FUN_00f13e54(param_3 + 0xb8);
    fVar7 = fVar6;
    fVar4 = (float)FUN_00f01c20(param_3 + 600);
    lVar1 = param_3 + 0x310;
    fVar5 = (float)FUN_00f01c10(lVar1);
    fVar5 = param_1 + fVar5 * -0.5 + -10.0;
    if ((*(float *)(param_3 + 0x350) != fVar5) || (*(float *)(param_3 + 0x354) != 10.0)) {
      *(float *)(param_3 + 0x350) = fVar5;
      *(undefined4 *)(param_3 + 0x354) = 0x41200000;
      FUN_0091ada4(lVar1);
    }
    FUN_00ed61d0(fVar6 * (fVar6 / fVar7) + -10.0,lVar1);
    if ((*(float *)(param_3 + 0x6b0) != 10.0) || (*(float *)(param_3 + 0x6b4) != param_2 + -10.0)) {
      *(undefined4 *)(param_3 + 0x6b0) = 0x41200000;
      *(float *)(param_3 + 0x6b4) = param_2 + -10.0;
      FUN_0091ada4(param_3 + 0x670);
    }
    FUN_00ed61d0(fVar3 * (fVar3 / fVar4) + -10.0,param_3 + 0x670);
    return;
  }
  return;
}




void FUN_00ed59f4(long param_1)

{
  FUN_00f13fd8(param_1 + 600);
  return;
}




void FUN_00ed59fc(long param_1)

{
  FUN_00f14058(param_1 + 600);
  return;
}




void FUN_00ed5a04(long param_1)

{
  FUN_00f14060(param_1 + 600);
  return;
}




void FUN_00ed5a0c(long param_1)

{
  FUN_00f13e54(param_1 + 0xb8);
  return;
}




void FUN_00ed5a14(long param_1,float *param_2)

{
  if ((*(float *)(param_1 + 0x298) == *param_2) && (*(float *)(param_1 + 0x29c) == param_2[1])) {
    return;
  }
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)param_2;
  FUN_0091ada4(param_1 + 600);
  return;
}




undefined4 FUN_00ed5a4c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x298);
}




void FUN_00ed5a58(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00f13f08(param_3 + 600);
  FUN_00ed58cc(param_1,param_2,param_3);
  return;
}




void FUN_00ed5a98(long param_1)

{
  FUN_00f13e54(param_1 + 600);
  return;
}




long FUN_00ed5aa0(long param_1)

{
  return param_1 + 600;
}




long FUN_00ed5aa8(long param_1)

{
  return param_1 + 600;
}




void FUN_00ed5ab0(long param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar3 = *param_2;
  *(byte *)(param_1 + 0x9d0) = bVar3;
  bVar1 = *(byte *)(param_1 + 0x9d4) & 0xfe;
  if ((bVar3 & 3) != 1) {
    bVar1 = *(byte *)(param_1 + 0x9d4) | 1;
  }
  bVar2 = bVar1 & 0xfd;
  if ((bVar3 & 0xc) != 4) {
    bVar2 = bVar1 | 2;
  }
  *(byte *)(param_1 + 0x9d4) = bVar2;
  return;
}




undefined4 FUN_00ed5af0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x9d0);
}




bool FUN_00ed5af8(long param_1)

{
  return (*(byte *)(param_1 + 0x9d4) & 3) != 0;
}




byte FUN_00ed5b08(long param_1)

{
  return *(byte *)(param_1 + 0x9d4) & 1;
}




byte FUN_00ed5b14(long param_1)

{
  return *(byte *)(param_1 + 0x9d4) >> 1 & 1;
}




void FUN_00ed5b20(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00ed5b40(param_1 + 0x670);
    return;
  }
  if (param_3 == 1) {
    FUN_00ed5b40(param_1 + 0x310);
    return;
  }
  return;
}




void FUN_00ed5b40(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*(int *)(param_3 + 0x358) == 0) {
    lVar1 = param_3 + 0x88;
    FUN_00f0e548(lVar1,param_4,"scrollbar_horiz_button_fill_top");
    lVar2 = param_3 + 0x178;
    FUN_00f0e548(lVar2,param_4,"scrollbar_horiz_button_fill_middle");
    FUN_00f0e548(param_3 + 0x268,param_4,"scrollbar_horiz_button_fill_bottom");
    if ((*(float *)(param_3 + 200) != 0.0) || (*(float *)(param_3 + 0xcc) != 0.0)) {
      *(undefined8 *)(param_3 + 200) = 0;
      FUN_0091ada4(lVar1);
    }
    uVar4 = 0x3f00000000000000;
    local_60 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_3 + 0x88) + 0x28))(lVar1,&local_60);
    fVar5 = (float)FUN_00f0e700(lVar1);
    if ((*(float *)(param_3 + 0x1b8) != fVar5) || (*(float *)(param_3 + 0x1bc) != 0.0)) {
      *(float *)(param_3 + 0x1b8) = fVar5;
      *(undefined4 *)(param_3 + 0x1bc) = 0;
      FUN_0091ada4(lVar2);
    }
    local_60 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_3 + 0x178) + 0x28))(lVar2,&local_60);
    fVar6 = *(float *)(param_3 + 0x1b8);
    fVar5 = (float)FUN_00f0e700(lVar2);
    fVar6 = fVar6 + fVar5;
    if ((*(float *)(param_3 + 0x2a8) != fVar6) || (*(float *)(param_3 + 0x2ac) != 0.0)) {
      *(float *)(param_3 + 0x2a8) = fVar6;
      *(undefined4 *)(param_3 + 0x2ac) = 0;
LAB_00ed5d8c:
      FUN_0091ada4(param_3 + 0x268);
    }
  }
  else {
    if (*(int *)(param_3 + 0x358) != 1) goto LAB_00ed5dac;
    lVar1 = param_3 + 0x88;
    FUN_00f0e548(lVar1,param_4,"scrollbar_button_fill_top");
    lVar2 = param_3 + 0x178;
    FUN_00f0e548(lVar2,param_4,"scrollbar_button_fill_middle");
    FUN_00f0e548(param_3 + 0x268,param_4,"scrollbar_button_fill_bottom");
    if ((*(float *)(param_3 + 200) != 0.0) || (*(float *)(param_3 + 0xcc) != 0.0)) {
      *(undefined8 *)(param_3 + 200) = 0;
      FUN_0091ada4(lVar1);
    }
    uVar4 = 0x3f000000;
    local_60 = 0x3f000000;
    (**(code **)(*(long *)(param_3 + 0x88) + 0x28))(lVar1,&local_60);
    FUN_00f0e700(lVar1);
    if ((*(float *)(param_3 + 0x1b8) != 0.0) || (*(float *)(param_3 + 0x1bc) != param_2)) {
      *(undefined4 *)(param_3 + 0x1b8) = 0;
      *(float *)(param_3 + 0x1bc) = param_2;
      FUN_0091ada4(lVar2);
    }
    local_60 = 0x3f000000;
    (**(code **)(*(long *)(param_3 + 0x178) + 0x28))(lVar2,&local_60);
    fVar5 = *(float *)(param_3 + 0x1bc);
    FUN_00f0e700(lVar2);
    fVar5 = fVar5 + param_2;
    if ((*(float *)(param_3 + 0x2a8) != 0.0) || (*(float *)(param_3 + 0x2ac) != fVar5)) {
      *(undefined4 *)(param_3 + 0x2a8) = 0;
      *(float *)(param_3 + 0x2ac) = fVar5;
      goto LAB_00ed5d8c;
    }
  }
  local_60 = uVar4;
  (**(code **)(*(long *)(param_3 + 0x268) + 0x28))((long *)(param_3 + 0x268),&local_60);
LAB_00ed5dac:
  *(uint *)(param_3 + 0x84) = *(uint *)(param_3 + 0x84) | 8;
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed5de8(float param_1,float param_2,long param_3,int param_4)

{
  if (param_4 == 0) {
    if ((*(float *)(param_3 + 0x6b8) != param_1) || (*(float *)(param_3 + 0x6bc) != param_2)) {
      *(float *)(param_3 + 0x6b8) = param_1;
      *(float *)(param_3 + 0x6bc) = param_2;
      FUN_0091ada4(param_3 + 0x670);
      return;
    }
  }
  else if ((param_4 == 1) &&
          ((*(float *)(param_3 + 0x358) != param_1 || (*(float *)(param_3 + 0x35c) != param_2)))) {
    *(float *)(param_3 + 0x358) = param_1;
    *(float *)(param_3 + 0x35c) = param_2;
    FUN_0091ada4(param_3 + 0x310);
    return;
  }
  return;
}




void FUN_00ed5e50(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x6f4);
    lVar2 = param_1 + 0x670;
    if ((uVar1 & 0x7f80) == 0x3300) goto LAB_00ed5ebc;
    *(uint *)(param_1 + 0x6f4) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x3300;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x394);
    lVar2 = param_1 + 0x310;
    if ((uVar1 & 0x7f80) == 0x3300) goto LAB_00ed5ebc;
    *(uint *)(param_1 + 0x394) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x3300;
  }
  FUN_0091ada4(lVar2);
LAB_00ed5ebc:
  FUN_00ed5ee0(0x3f400000,lVar2,0);
  return;
}




void FUN_00ed5ee0(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  if ((param_3 & 1) == 0) {
    if (((*(byte *)(param_2 + 0x35c) >> 1 & 1) == 0) &&
       ((float)(*(uint *)(param_2 + 0x84) >> 7 & 0xff) / 255.0 < 0.4)) {
      return;
    }
    FUN_00f01980(param_2);
    uVar1 = *(uint *)(param_2 + 0x84);
    if ((uVar1 & 0x7f80) != 0x3280) {
      *(uint *)(param_2 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x3280;
      FUN_0091ada4(param_2);
    }
    lVar2 = DAT_03210d00;
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efcad4(puVar5);
      *(undefined ***)puVar5 = &PTR_FUN_027c1a60;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efcac4(param_1,puVar5);
    lVar2 = DAT_03210d00;
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efdd74(puVar6);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3f400000,puVar6);
    FUN_00efddc4(0,puVar6);
    FUN_00f02308(param_2,puVar5,puVar6,0);
    bVar3 = *(byte *)(param_2 + 0x35c) & 0xfc | 1;
  }
  else {
    if (((*(byte *)(param_2 + 0x35c) & 1) == 0) &&
       ((float)(*(uint *)(param_2 + 0x84) >> 7 & 0xff) / 255.0 != 0.0)) {
      return;
    }
    FUN_00f01980(param_2);
    lVar2 = DAT_03210d00;
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efdd74(puVar5);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3e19999a,puVar5);
    FUN_00efddc4(0x3ecccccd,puVar5);
    FUN_00f022a0(param_2,puVar5);
    bVar3 = *(byte *)(param_2 + 0x35c) & 0xfc | 2;
  }
  *(byte *)(param_2 + 0x35c) = bVar3;
  return;
}




void thunk_FUN_00ed5534(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02823008;
  FUN_00ed5588(param_1 + 0xce);
  FUN_00ed5588(param_1 + 0x62);
  FUN_00f13d08(param_1 + 0x4b);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}

