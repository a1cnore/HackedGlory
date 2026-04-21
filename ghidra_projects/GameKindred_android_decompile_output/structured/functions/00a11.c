// functions/00a11 — 38 functions
#include "libGameKindred.h"




void FUN_00a11020(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_44 = 0x7f7fffff;
  local_40 = 0x3e800000;
  local_48 = 0x3e800000;
  local_58 = *param_2;
  local_50 = param_2[1];
  uStack_54 = 0;
  FUN_00ef00a0(*(undefined4 *)(param_1 + 0x844),&local_58,&local_68,&local_48);
  local_48 = *param_3;
  local_40 = param_3[1];
  uStack_44 = 0;
  FUN_00a10a60(param_1);
  FUN_00d7eab4(param_1 + 0x28,&local_68,&local_48);
  *(undefined4 *)(param_1 + 0x820) = local_60;
  *(undefined8 *)(param_1 + 0x818) = local_68;
  *(ulong *)(param_1 + 0x824) = CONCAT44(uStack_44,local_48);
  *(undefined4 *)(param_1 + 0x82c) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00a110f0(long param_1,undefined4 *param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_34 = 0x7f7fffff;
  local_38 = 0x3e800000;
  local_30 = 0x3e800000;
  local_48 = *param_2;
  local_40 = param_2[1];
  uStack_44 = 0;
  uVar2 = FUN_00ef00a0(*(undefined4 *)(param_1 + 0x844),&local_48,param_3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a11168(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x844) = param_2;
  return;
}




undefined4 FUN_00a11170(long param_1)

{
  return *(undefined4 *)(param_1 + 0x844);
}




long FUN_00a11178(long param_1)

{
  return param_1 + 0x818;
}




long FUN_00a11180(long param_1)

{
  return param_1 + 0x824;
}




void FUN_00a11188(void)

{
  FUN_00a111a0();
  FUN_00d7efa4();
  return;
}




long FUN_00a111a0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x808);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x810) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x808);
        lVar2 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x810) == (int)plVar1[1]) {
            lVar2 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x808) = 0;
            lVar2 = 0;
            *(undefined4 *)(param_1 + 0x810) = DAT_03214ce8;
          }
        }
        return lVar2 + 0x38;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x808) = 0;
      *(undefined4 *)(param_1 + 0x810) = DAT_03214ce8;
    }
  }
  return param_1 + 0x28;
}




void FUN_00a11244(void)

{
  FUN_00a111a0();
  FUN_00d7efe4();
  return;
}




void FUN_00a11258(void)

{
  FUN_00a111a0();
  FUN_00d7eff0();
  return;
}




void FUN_00a1126c(void)

{
  FUN_00a111a0();
  FUN_00d7effc();
  return;
}




void FUN_00a11280(void)

{
  FUN_00a111a0();
  FUN_00d7f008();
  return;
}




void FUN_00a11294(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0xc);
  fVar1 = (float)FUN_01988c78();
  fVar2 = fVar2 - fVar1;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0xc) = fVar2;
  return;
}




void FUN_00a112d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = DAT_03218f30;
  fVar2 = DAT_03218f38;
  if (0.0 < *(float *)(param_1 + 2)) {
    fVar2 = *(float *)((long)param_1 + 0xc) / *(float *)(param_1 + 2);
    uVar1 = CONCAT44((float)((ulong)*param_1 >> 0x20) * fVar2,(float)*param_1 * fVar2);
    fVar2 = fVar2 * *(float *)(param_1 + 1);
  }
  *param_2 = uVar1;
  *(float *)(param_2 + 1) = fVar2;
  return;
}




uint FUN_00a11310(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_34 = 0x7f7fffff;
  local_30 = 0x3e800000;
  local_38 = 0x3e800000;
  local_48 = *param_1;
  local_40 = param_1[1];
  uStack_44 = 0;
  uVar2 = FUN_00ef00a0(param_3,&local_48,param_2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a11390(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = DAT_03218f38;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  uVar1 = DAT_03218f30;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = uVar1;
  return;
}




void FUN_00a113b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = DAT_03218f38;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  uVar1 = DAT_03218f30;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = uVar1;
  return;
}




void FUN_00a113d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c82c8;
  if ((undefined8 *)param_1[0xfc] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0xfc])();
  }
  FUN_01985bd0(param_1);
  return;
}




void FUN_00a11414(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c82c8;
  if ((undefined8 *)param_1[0xfc] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0xfc])();
  }
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




undefined8 * FUN_00a11460(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c82c8;
  FUN_00d7ea98(param_1 + 5);
  param_1[0x101] = 0;
  *(undefined4 *)(param_1 + 0x102) = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x107) = DAT_03218f38;
  param_1[0x106] = DAT_03218f30;
  *(undefined8 *)((long)param_1 + 0x83c) = 0;
  *(undefined4 *)((long)param_1 + 0x844) = 0;
  return param_1;
}




void FUN_00a114d0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a114d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 FUN_00a114dc(void)

{
  return DAT_03130c48;
}




bool FUN_00a114e8(void)

{
  return DAT_03130c48 != 0;
}




void FUN_00a114fc(void)

{
  FUN_009f1f70(0x14);
  return;
}




void FUN_00a11504(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  float fVar9;
  float __x;
  
  *param_1 = &PTR_FUN_027c82f8;
  puVar8 = (ushort *)(param_1 + 5);
  *puVar8 = *puVar8 & 0x8000 | 0x3ff;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = param_1;
  param_1[0x2a] = 0;
  FUN_00a1c26c(param_1 + 0x2d);
  FUN_00a1bda4(param_1 + 0x31);
  FUN_00a1a7d0(param_1 + 0x37);
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = DAT_03214ce8;
  FUN_00a1a384(param_1 + 0x3f,param_1);
  FUN_00a1f46c(param_1 + 0x43,param_1);
  memset(param_1 + 0x4c,0,0x78);
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  puVar6 = (undefined8 *)((long)param_1 + 0x32c);
  *(undefined4 *)(param_1 + 0x65) = DAT_03218f38;
  param_1[100] = DAT_03218f30;
  *puVar6 = DAT_03218f68;
  *(undefined4 *)((long)param_1 + 0x334) = DAT_03218f70;
  __x = *(float *)((long)param_1 + 0x32c) * *(float *)((long)param_1 + 0x32c) +
        *(float *)(param_1 + 0x66) * *(float *)(param_1 + 0x66) +
        *(float *)((long)param_1 + 0x334) * *(float *)((long)param_1 + 0x334);
  fVar9 = SQRT(__x);
  if (NAN(fVar9)) {
    fVar9 = sqrtf(__x);
  }
  *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) / fVar9,(float)*puVar6 / fVar9);
  param_1[0x6e] = 0;
  uVar3 = *(ushort *)(param_1 + 5);
  *(float *)((long)param_1 + 0x334) = *(float *)((long)param_1 + 0x334) / fVar9;
  puVar7 = param_1 + (ulong)(uVar3 >> 10 & 0x1f) * 7 + 6;
  *(undefined1 *)(param_1 + 0x67) = 1;
  *(undefined4 *)((long)param_1 + 0x36c) = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  *(undefined1 *)((long)param_1 + 0x36a) = 0;
  *(undefined2 *)(param_1 + 0x6d) = 0;
  *(undefined4 *)((long)param_1 + 0x364) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined4 *)((long)param_1 + 0x37c) = 0;
  puVar7[1] = FUN_00a11998;
  puVar7[2] = 0;
  puVar6 = param_1 + (ulong)(uVar3 + 0x400 >> 10 & 0x1f) * 7 + 6;
  *(undefined4 *)puVar7 = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar6[2] = 0;
  puVar6[1] = FUN_00a11a40;
  uVar2 = uVar3 & 0xffff83ff;
  uVar1 = (uVar3 + 0x400 & 0x7c00 | uVar2) + 0x400;
  *(undefined4 *)puVar6 = 1;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[3] = FUN_00a11b18;
  puVar6[4] = 0;
  puVar6 = param_1 + (ulong)(uVar1 >> 10 & 0x1f) * 7 + 6;
  puVar6[2] = 0;
  puVar6[1] = FUN_00a11b2c;
  *(undefined4 *)puVar6 = 2;
  puVar6[4] = 0;
  puVar6[3] = FUN_00a11bd4;
  puVar6[6] = 0;
  puVar6[5] = FUN_00a11c84;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar7 = param_1 + (ulong)(uVar1 >> 10 & 0x1f) * 7 + 6;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar7[3] = FUN_00a11cf4;
  puVar7[4] = 0;
  *(undefined4 *)puVar7 = 3;
  puVar6 = param_1 + (ulong)(uVar1 >> 10 & 0x1f) * 7 + 6;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  *(undefined4 *)puVar6 = 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[4] = 0;
  puVar6[3] = FUN_00a11d08;
  puVar6[6] = 0;
  puVar6[5] = FUN_00a11d0c;
  *(ushort *)(param_1 + 5) =
       ((ushort)uVar1 & 0x7c00 | (ushort)uVar2) + 0x400 & 0x7c00 | (ushort)uVar2;
  FUN_00a11d10(puVar8,0,1);
  FUN_00a11d10(puVar8,0,2);
  FUN_00a11d10(puVar8,0,3);
  FUN_00a11d10(puVar8,1,0);
  FUN_00a11d10(puVar8,1,2);
  FUN_00a11d10(puVar8,1,3);
  FUN_00a11d10(puVar8,2,0);
  FUN_00a11d10(puVar8,2,3);
  FUN_00a11d10(puVar8,0,4);
  FUN_00a11d10(puVar8,1,4);
  FUN_00a11d10(puVar8,2,4);
  FUN_00a11d10(puVar8,3,4);
  FUN_00a11d10(puVar8,4,4);
  FUN_00a11d10(puVar8,4,0);
  FUN_00a11d10(puVar8,4,1);
  FUN_00a11d10(puVar8,4,2);
  FUN_00a11d10(puVar8,4,3);
  FUN_00a11d98(puVar8,0,0,0);
  uVar4 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar4,param_1,0x461d39a,FUN_00a11ed0,0);
  uVar4 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar4,param_1,0xc8e15bb6,FUN_00a11efc,0);
  uVar4 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar4,param_1,0xf0abc88a,FUN_00a11f28,0);
  lVar5 = 0x350;
  do {
    *(undefined4 *)((long)param_1 + lVar5) = 0xffffffff;
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x35c);
  lVar5 = 0x35c;
  do {
    *(undefined8 *)((long)param_1 + lVar5) = 0xffffffffffffffff;
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x364);
  uVar4 = FUN_00d6eb50();
  uVar4 = FUN_00d6eb5c(uVar4,"*JoystickBasicAttackRingIndicator*");
  param_1[99] = uVar4;
  DAT_03130c48 = param_1;
  return;
}




void FUN_00a11998(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 0x37c) == '\0') {
    lVar3 = FUN_00ceb7b0(param_1 + 0x1e8);
    if (((lVar3 != 0) && (uVar4 = FUN_00d9e968(lVar3), (uVar4 & 1) != 0)) &&
       (((uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 != 0x1f &&
         (*(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)) ||
        ((*(byte *)(lVar3 + 0x2f9) & 1) != 0)))) {
      FUN_00965940(param_1 + 0x1e8);
      uVar2 = DAT_03214ce8;
      lVar3 = *(long *)(param_1 + 0x340);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x2b0) = 0;
        *(undefined4 *)(lVar3 + 0x2b8) = uVar2;
      }
    }
  }
  return;
}




void FUN_00a11a40(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if ((*(char *)(param_1 + 0x369) != '\0') &&
     (uVar3 = FUN_00d9f00c(*(undefined8 *)(param_1 + 0x340)), (uVar3 & 1) != 0)) {
    local_30 = 0x18;
    local_38 = &PTR_FUN_027c8578;
    FUN_00a1a334(param_1 + 0x260,&local_38);
    *(undefined1 *)(param_1 + 0x369) = 0;
    FUN_00a146bc(param_1,0);
  }
  if (*(float *)(param_1 + 0x364) == 0.0) {
    uVar1 = *(ushort *)(*(long *)(param_1 + 0x340) + 0x88) & 0x1f;
    if ((uVar1 == 0x1f) ||
       (*(short *)(*(long *)(param_1 + 0x340) + (ulong)uVar1 * 0x38 + 0x90) != 2)) {
      FUN_00a11d98(param_1 + 0x28,0,0,0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a11b18(long param_1)

{
  *(undefined4 *)(param_1 + 0x364) = 0x3e800000;
  FUN_00a1a3b8(param_1 + 0x1f8);
  return;
}




void FUN_00a11b2c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  
  if (*(float *)(param_1 + 0x374) <= 0.0) {
    uVar2 = FUN_00a1bd10();
    if ((uVar2 & 1) == 0) {
      FUN_009bbfb0();
      FUN_009bd5c8();
      FUN_009b8570();
      FUN_00a15728(param_1,1);
    }
  }
  else {
    fVar3 = (float)FUN_01988c78();
    *(float *)(param_1 + 0x374) = *(float *)(param_1 + 0x374) - fVar3;
  }
  uVar1 = *(ushort *)(*(long *)(param_1 + 0x340) + 0x88) & 0x1f;
  if ((uVar1 != 0x1f) &&
     (*(ushort *)(*(long *)(param_1 + 0x340) + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)) {
    return;
  }
  FUN_00a11d98(param_1 + 0x28,0,0,0);
  return;
}




void FUN_00a11bd4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  FUN_00965940(param_1 + 0x1e8);
  uVar3 = DAT_03214ce8;
  lVar4 = *(long *)(param_1 + 0x340);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x2b0) = 0;
    *(undefined4 *)(lVar4 + 0x2b8) = uVar3;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  do {
    if (lVar4 == 0) {
LAB_00a11c40:
      FUN_009bbfb0();
      uVar2 = FUN_009bd5c8();
      iVar1 = FUN_009b81d4();
      uVar3 = 3;
      if (iVar1 == 2) {
        uVar3 = 4;
      }
      FUN_009b6ed8(0x44480000,uVar2,uVar3);
      *(undefined4 *)(param_1 + 0x374) = 0x3f000000;
      FUN_00a13d48(param_1);
      return;
    }
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_02e8b430) {
      FUN_019888f4();
      FUN_009c61b8(*(undefined8 *)(param_1 + 0x348));
      goto LAB_00a11c40;
    }
    lVar4 = *(long *)(lVar4 + 0x20);
  } while( true );
}




void FUN_00a11c84(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_00a1bd10();
  if ((uVar2 & 1) == 0) {
    FUN_00a15728(param_1,0);
  }
  else {
    FUN_00a14b98();
  }
  FUN_009bbfb0();
  uVar3 = FUN_009bd5c8();
  iVar1 = FUN_009b81d4();
  uVar4 = 1;
  if (iVar1 == 4) {
    uVar4 = 2;
  }
  FUN_009b6ed8(0x42c80000,uVar3,uVar4);
  *(undefined4 *)(param_1 + 0x374) = 0;
  FUN_00a13dd4(param_1,1);
  return;
}




void FUN_00a11cf4(long param_1)

{
  FUN_009c383c(*(undefined8 *)(param_1 + 0x348),*(undefined1 *)(param_1 + 0x368),
               *(undefined4 *)(param_1 + 0x378));
  return;
}




void FUN_00a11d08(void)

{
  return;
}




void FUN_00a11d0c(void)

{
  return;
}




void FUN_00a11d10(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar1 = *param_1 >> 10;
  if ((uVar1 & 0x1f) != 0) {
    uVar2 = 0;
    puVar4 = param_1 + 4;
    do {
      if (*puVar4 == param_2) goto LAB_00a11d44;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x1c;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_00a11d44:
    if ((uVar1 & 0x1f) != 0) {
      uVar3 = 0;
      puVar4 = param_1 + 4;
      do {
        if (*puVar4 == param_3) {
          if (uVar2 == 0xffffffff) {
            return;
          }
          param_1[(long)(int)uVar2 * 0x1c + 5] =
               param_1[(long)(int)uVar2 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar3 & 0x1f));
          return;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 0x1c;
      } while (uVar3 < (uVar1 & 0x1f));
    }
  }
  return;
}




void FUN_00a11d98(ushort *param_1,uint param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort *puVar6;
  ulong uVar7;
  
  uVar2 = *param_1;
  if ((uVar2 & 0x7c00) != 0) {
    uVar3 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_00a11de0;
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 < (uVar2 >> 10 & 0x1f));
  }
  uVar3 = 0x1f;
LAB_00a11de0:
  uVar1 = uVar2 & 0x1f;
  uVar4 = (ulong)uVar1;
  if (uVar1 == 0x1f) {
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
  }
  else {
    if (uVar3 == uVar1) {
      return;
    }
    if ((1 << (ulong)(uVar3 & 0x1f) & (uint)param_1[uVar4 * 0x1c + 5]) == 0) {
      return;
    }
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar4 * 0x1c + 0x18);
    uVar5 = *(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) & 1;
    if (uVar5 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar5 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x90) +
                                ((long)*(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) >> 1)));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar2 = *param_1;
    }
  }
  *param_1 = (ushort)uVar7 | uVar2 & 0xfc00 | 0x3e0;
  if ((int)uVar7 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar7 * 0x1c + 0x10);
    uVar4 = *(ulong *)(param_1 + uVar7 * 0x1c + 0x14) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x90) +
                                ((long)*(ulong *)(param_1 + uVar7 * 0x1c + 0x14) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00a11e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_00a11ed0(void)

{
  FUN_00a141b4();
  return;
}




void FUN_00a11efc(void)

{
  FUN_00a142b0();
  return;
}

