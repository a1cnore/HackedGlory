// functions/009c0 — 23 functions
#include "libGameKindred.h"




void FUN_009c01ec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float __x;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_68;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x30) == 0) {
    pfVar4 = (float *)(param_1 + 0x48);
    fVar8 = *pfVar4;
    fVar10 = *(float *)(param_1 + 0x4c);
    fVar9 = *(float *)(param_1 + 0x50);
    fVar5 = fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9;
    if (0.001 <= ABS(fVar5)) {
      fVar7 = SQRT(fVar5);
      if (NAN(fVar7)) {
        fVar7 = sqrtf(fVar5);
      }
      fVar6 = *(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x48) +
              *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x4c) +
              *(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x50);
      fVar5 = SQRT(fVar6);
      if (NAN(fVar5)) {
        fVar5 = sqrtf(fVar6);
      }
      if (150.0 < fVar5) {
        *(float *)(param_1 + 0x48) = (fVar8 / fVar7) * 150.0;
        *(float *)(param_1 + 0x4c) = (fVar10 / fVar7) * 150.0;
        *(float *)(param_1 + 0x50) = (fVar9 / fVar7) * 150.0;
      }
      fVar5 = fVar5 * 10.0;
      if (fVar5 <= 4.0) {
        fVar5 = 4.0;
      }
      fVar6 = (fVar8 / fVar7) * fVar5;
      fVar10 = (fVar10 / fVar7) * fVar5;
      fVar5 = (fVar9 / fVar7) * fVar5;
      fVar8 = fVar5 * fVar5 + fVar6 * fVar6 + fVar10 * fVar10;
      fVar9 = SQRT(fVar8);
      if (NAN(fVar9)) {
        fVar9 = sqrtf(fVar8);
      }
      fVar8 = (float)FUN_01988c84();
      __x = *(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x48) +
            *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x4c) +
            *(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x50);
      fVar7 = SQRT(__x);
      if (NAN(fVar7)) {
        fVar7 = sqrtf(__x);
      }
      if (fVar9 * fVar8 <= fVar7) {
        fVar8 = (float)FUN_01988c84();
        *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) - fVar6 * fVar8;
        *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x4c) - fVar10 * fVar8;
        *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) - fVar5 * fVar8;
        FUN_009bbfb0();
        lVar2 = FUN_009bd5c8();
        fVar5 = (float)FUN_01988c84();
        local_68 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20) * fVar5 +
                            (float)((ulong)*(undefined8 *)(lVar2 + 0x414) >> 0x20),
                            (float)*(undefined8 *)(param_1 + 0x48) * fVar5 +
                            (float)*(undefined8 *)(lVar2 + 0x414));
        local_60 = fVar5 * *(float *)(param_1 + 0x50) + *(float *)(lVar2 + 0x41c);
        FUN_00cac9c4(&local_68);
        FUN_009bbfb0();
        uVar3 = FUN_009bd5c8();
        FUN_009b81fc(uVar3,&local_68,0);
      }
      else {
        *(float *)(param_1 + 0x50) = DAT_03218f38;
        *(ulong *)pfVar4 = CONCAT44(DAT_03218f30._4_4_,(float)DAT_03218f30);
      }
    }
    else {
      if (((fVar8 != (float)DAT_03218f30) || (fVar10 != DAT_03218f30._4_4_)) ||
         (fVar9 != DAT_03218f38)) {
        *(float *)(param_1 + 0x50) = DAT_03218f38;
        *(ulong *)pfVar4 = CONCAT44(DAT_03218f30._4_4_,(float)DAT_03218f30);
      }
      if (*(char *)(param_1 + 0x99) != '\0') {
        FUN_009c0518(param_1);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009c0474(long param_1)

{
  long lVar1;
  long lVar2;
  float local_38;
  undefined4 local_34;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_009bbfb0();
    lVar2 = FUN_009bd5c8();
    FUN_00d55794(*(undefined8 *)(param_1 + 0x28),&local_38,0);
    local_38 = local_38 + *(float *)(lVar2 + 0x70);
    local_30 = local_30 + *(float *)(lVar2 + 0x78);
    local_34 = *(undefined4 *)(lVar2 + 0x418);
    FUN_009b81fc(lVar2,&local_38,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009c0518(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  uint uVar4;
  undefined4 uVar5;
  float local_48;
  undefined4 local_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_4 + 0x99) = 0;
  if ((*(char *)(param_4 + 0x9a) != '\0') && (*(char *)(param_4 + 0x9b) != '\0')) {
    FUN_009bbfb0();
    FUN_009bd5c8();
    uVar4 = FUN_009b83f8();
    if ((uVar4 & 1) != 0) {
      FUN_009bbfb0();
      FUN_009bd5c8();
      lVar2 = FUN_009b86e8();
      if (lVar2 != 0) {
        FUN_009bbfb0();
        FUN_009bd5c8();
        pfVar3 = (float *)FUN_009b812c();
        FUN_009bbfb0();
        FUN_009bd5c8();
        local_48 = (float)FUN_009b8778();
        local_48 = *pfVar3 - local_48;
        local_40 = pfVar3[2] - param_3;
        FUN_009bbfb0();
        lVar2 = FUN_009bd5c8();
        local_44 = *(undefined4 *)(lVar2 + 0x424);
        FUN_009bbfb0();
        uVar5 = FUN_009bd5c8();
        FUN_009b8248(uVar5,&local_48);
        FUN_009bbfb0();
        FUN_009bd5c8();
        FUN_009b850c();
        *(undefined1 *)(param_4 + 0x9b) = 0;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_009c05fc(void)

{
  float fVar1;
  
  fVar1 = (float)FUN_009f1fa8(0xd);
  if (0.5 <= fVar1) {
    if (fVar1 <= 0.5) {
      fVar1 = 50.0;
    }
    else {
      fVar1 = fVar1 + -0.5 + fVar1 + -0.5;
      fVar1 = fVar1 * 100.0 + (1.0 - fVar1) * 50.0;
    }
  }
  else {
    fVar1 = (fVar1 + fVar1) * 50.0 + (1.0 - (fVar1 + fVar1)) * 25.0;
  }
  return fVar1;
}




void FUN_009c0684(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_009c068c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x9a) = param_2 & 1;
  return;
}




void FUN_009c0698(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xa0) = param_2 & 1;
  return;
}




undefined8
FUN_009c06a4(undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((param_3 == 3) || (param_3 == 0)) {
    if (param_2 == 3) {
      uVar1 = FUN_009c0b58(param_1,param_4,param_5,3,param_3);
      return uVar1;
    }
    if (param_2 == 2) {
      uVar1 = FUN_009c07ec(param_1,param_4,param_5,param_4,param_3);
      return uVar1;
    }
    if (param_2 == 1) {
      uVar1 = FUN_009c0710(param_1,param_4,param_5,1,param_3);
      return uVar1;
    }
  }
  return 0;
}




undefined4
FUN_009c0710(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (*(long *)(param_3 + 0x30) != 0) {
    return 0;
  }
  if (param_7 != 0) {
    uVar1 = FUN_009f1f94(4);
    uVar4 = 0;
    if ((uVar1 | 2) != 2) goto LAB_009c07b4;
  }
  *(undefined8 *)(param_3 + 0x30) = param_5;
  *(int *)(param_3 + 0x38) = param_7;
  *(undefined4 *)(param_3 + 0x54) = param_1;
  *(undefined4 *)(param_3 + 0x58) = param_2;
  *(undefined1 *)(param_3 + 0x98) = 0;
  uVar4 = 1;
  *(undefined4 *)(param_3 + 0x50) = DAT_03218f38;
  *(undefined8 *)(param_3 + 0x48) = DAT_03218f30;
  if (param_7 == 0) {
    return 1;
  }
LAB_009c07b4:
  iVar2 = FUN_009f1f94(4);
  if ((iVar2 - 1U < 2) && (uVar3 = FUN_009f1f94(4), ((uint)uVar3 | 2) != 2)) {
    FUN_009c0c54(uVar3,param_4);
    uVar4 = 1;
  }
  return uVar4;
}




void FUN_009c07ec(float param_1,float param_2,long param_3,undefined8 param_4,long param_5,
                 undefined8 param_6,int param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float local_f0 [2];
  float local_e8;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d4;
  float local_cc;
  undefined8 local_c8;
  float local_c0;
  undefined1 local_b8 [8];
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_9c;
  float local_94;
  undefined1 local_90 [8];
  float local_88;
  undefined8 local_80;
  float local_78;
  float local_70;
  float fStack_6c;
  undefined1 local_68 [8];
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  if ((*(long *)(param_3 + 0x30) == param_5) && (uVar2 = 0, *(int *)(param_3 + 0x38) == param_7)) {
    if (*(char *)(param_3 + 0x98) == '\0') {
      lVar3 = 0x90;
      if (param_7 != 0) {
        lVar3 = 0x94;
      }
      param_1 = param_1 - *(float *)(param_3 + 0x54);
      param_2 = param_2 - *(float *)(param_3 + 0x58);
      fVar11 = *(float *)(param_3 + lVar3);
      fVar6 = param_1 * param_1 + param_2 * param_2;
      fVar5 = SQRT(fVar6);
      if (NAN(fVar5)) {
        fVar5 = sqrtf(fVar6);
      }
      uVar2 = 0;
      if (fVar5 < fVar11) goto LAB_009c0b28;
    }
    FUN_009bbfb0(0);
    FUN_009bd5c8();
    lVar3 = FUN_009b812c();
    uVar12 = *(undefined4 *)(lVar3 + 4);
    if (*(char *)(param_3 + 0x98) == '\0') {
      if (*(char *)(param_3 + 0x99) != '\0') {
        FUN_009c0518(param_3);
      }
      *(undefined2 *)(param_3 + 0x98) = 0x101;
      FUN_00cac778(0,param_4,param_3 + 0x3c);
      FUN_009bbfb0();
      lVar3 = FUN_009bd5c8();
      if ((*(byte *)(lVar3 + 0x7c) >> 4 & 1) == 0) {
        *(undefined1 *)(param_3 + 0x9b) = 1;
        FUN_009bbfb0();
        FUN_009bd5c8();
        FUN_009b8570();
      }
      else {
        *(undefined1 *)(param_3 + 0x9b) = 0;
      }
    }
    uVar4 = FUN_00cac778(0,param_4,local_68);
    if ((uVar4 & 1) != 0) {
      FUN_009bbfb0();
      FUN_009bd5c8();
      lVar3 = FUN_009b806c();
      uVar2 = *(undefined8 *)(lVar3 + 4);
      fVar11 = *(float *)(lVar3 + 0xc);
      uVar8 = *(undefined8 *)(param_3 + 0x3c);
      fVar10 = *(float *)(param_3 + 0x44);
      local_70 = -1.0;
      fStack_6c = -1.0;
      FUN_00f00238(&fStack_6c,&local_70);
      local_a8 = CONCAT44(local_70 * 0.5,fStack_6c * 0.5);
      local_a0 = 0.0;
      FUN_0091ef04(&local_80,&local_a8,1);
      local_a8 = CONCAT44(local_70 * 0.5,fStack_6c * 0.5);
      local_a0 = 1.0;
      FUN_0091ef04(local_90,&local_a8,1);
      fVar7 = local_90._0_4_ - (float)local_80;
      fVar9 = local_90._4_4_ - (float)((ulong)local_80 >> 0x20);
      local_88 = local_88 - local_78;
      local_a8 = local_80;
      fVar6 = fVar7 * fVar7 + fVar9 * fVar9 + local_88 * local_88;
      fVar5 = SQRT(fVar6);
      local_a0 = local_78;
      if (NAN(fVar5)) {
        fVar5 = sqrtf(fVar6);
      }
      local_94 = local_88 / fVar5;
      local_9c = CONCAT44(fVar9 / fVar5,fVar7 / fVar5);
      FUN_00cac778(0,&local_a8,local_b8);
      FUN_009bbfb0();
      FUN_009bd5c8();
      lVar3 = FUN_009b806c();
      fVar5 = local_b8._0_4_ - (float)*(undefined8 *)(lVar3 + 4);
      fVar7 = local_b8._4_4_ - (float)((ulong)*(undefined8 *)(lVar3 + 4) >> 0x20);
      fVar9 = local_b0 - *(float *)(lVar3 + 0xc);
      local_c8 = CONCAT44(((float)((ulong)uVar2 >> 0x20) - local_68._4_4_) +
                          (float)((ulong)uVar8 >> 0x20) + fVar7,
                          ((float)uVar2 - local_68._0_4_) + (float)uVar8 + fVar5);
      local_c0 = (fVar11 - local_60) + fVar10 + fVar9;
      FUN_00cac9c4(&local_c8);
      fVar11 = fVar5 * fVar5 + fVar7 * fVar7 + fVar9 * fVar9;
      fVar6 = SQRT(fVar11);
      local_d8 = local_c0;
      local_e0 = local_c8;
      if (NAN(fVar6)) {
        fVar6 = sqrtf(fVar11);
      }
      local_cc = -fVar9 / fVar6;
      local_d4 = CONCAT44(-fVar7 / fVar6,-fVar5 / fVar6);
      FUN_00cac778(uVar12,&local_e0,local_f0);
      FUN_009bbfb0();
      lVar3 = FUN_009bd5c8();
      fVar6 = *(float *)(lVar3 + 0x414);
      fVar11 = *(float *)(lVar3 + 0x41c);
      fVar5 = (float)FUN_01988c84();
      *(float *)(param_3 + 0x48) = (local_f0[0] - fVar6) / fVar5;
      *(float *)(param_3 + 0x50) = (local_e8 - fVar11) / fVar5;
      *(undefined4 *)(param_3 + 0x4c) = 0;
      FUN_009bbfb0();
      uVar2 = FUN_009bd5c8();
      FUN_009b81fc(uVar2,local_f0,0);
    }
    uVar2 = 1;
  }
LAB_009c0b28:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}




bool FUN_009c0b58(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5
                 )

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((param_1[6] == param_3) && (*(int *)(param_1 + 7) == param_5)) {
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 5;
  }
  cVar1 = *(char *)(param_1 + 0x13);
  *(undefined1 *)(param_1 + 0x13) = 0;
  if ((param_1 == &DAT_03218eb0) && (DAT_03218f48._1_1_ != '\0')) {
    FUN_009c0518();
  }
  iVar2 = FUN_009f1f94(4);
  if (((iVar2 - 1U < 2) && (uVar3 = FUN_009f1f94(4), cVar1 == '\0')) && (((uint)uVar3 | 2) == 2)) {
    FUN_009c0c54(uVar3,param_2);
  }
  return cVar1 != '\0';
}




bool FUN_009c0bfc(long param_1,long param_2)

{
  return *(long *)(param_1 + 0x30) == param_2;
}




bool FUN_009c0c0c(void)

{
  uint uVar1;
  
  uVar1 = FUN_009f1f94(4);
  return (uVar1 | 2) == 2;
}




bool FUN_009c0c30(void)

{
  int iVar1;
  
  iVar1 = FUN_009f1f94(4);
  return iVar1 - 1U < 2;
}




void FUN_009c0c54(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float __x;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_78;
  float local_70;
  undefined1 local_68 [8];
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_009bbfb0();
  FUN_009bd5c8();
  lVar2 = FUN_009b812c();
  FUN_00cac778(*(undefined4 *)(lVar2 + 4),param_5,local_68);
  FUN_009bbfb0();
  lVar2 = FUN_009bd5c8();
  uVar8 = *(undefined8 *)(lVar2 + 0x414);
  fVar10 = *(float *)(lVar2 + 0x41c);
  local_78 = 0xc000000000000000;
  fVar3 = (float)FUN_00cac608(&local_78);
  fVar7 = (float)uVar8;
  fVar9 = (float)((ulong)uVar8 >> 0x20);
  fVar3 = local_68._0_4_ - (fVar7 + fVar3);
  fVar6 = local_68._4_4_ - (fVar9 + param_2);
  fVar11 = local_60 - (fVar10 + param_3);
  if (((0.1 <= ABS(fVar3)) || (0.1 <= ABS(fVar6))) || (uVar8 = 0, 0.1 <= ABS(fVar11))) {
    __x = fVar3 * fVar3 + fVar6 * fVar6 + fVar11 * fVar11;
    fVar5 = SQRT(__x);
    fVar4 = fVar5;
    if (NAN(fVar5)) {
      fVar4 = sqrtf(__x);
      fVar5 = sqrtf(__x);
    }
    fVar4 = powf(0.5,fVar4 * 0.3);
    fVar4 = fVar4 / -0.20794417 + 4.8089833;
    local_70 = fVar10 + (fVar11 / fVar5) * fVar4;
    local_78 = CONCAT44(fVar9 + (fVar6 / fVar5) * fVar4,fVar7 + (fVar3 / fVar5) * fVar4);
    FUN_009bbfb0();
    uVar8 = FUN_009bd5c8();
    FUN_009b81fc(uVar8,&local_78,2);
    uVar8 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}




undefined8 FUN_009c0e0c(undefined8 param_1)

{
  FUN_009bfaf8();
  return param_1;
}




void FUN_009c0e30(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009c0e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009c0e3c(void)

{
  return;
}




void FUN_009c0e40(undefined8 *param_1)

{
  FUN_009df040();
  *param_1 = &PTR_thunk_FUN_009df4b8_027c29c0;
  FUN_009df57c(param_1,"sword_bnd");
  return;
}




void FUN_009c0e80(void *param_1)

{
  FUN_009df4b8();
  operator_delete(param_1);
  return;
}




void FUN_009c0ea4(long param_1)

{
  long lVar1;
  
  DAT_0312eb40 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312eb40 + 1;
  lVar1 = param_1 + (ulong)DAT_0312eb40 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009c0ff4;
  *(code **)(lVar1 + 0xb8) = FUN_009c1038;
  *(uint *)(lVar1 + 0xa4) = DAT_0312eb40;
  *(undefined4 *)(lVar1 + 0xa8) = 0xe8;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 2;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,3,FUN_009df500,0);
  return;
}




void FUN_009c0f14(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long local_458 [128];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_009df550();
  iVar2 = FUN_019889cc(local_458,0x80,DAT_0312f140,0);
  if (0 < iVar2) {
    lVar7 = 0;
    do {
      lVar6 = local_458[lVar7];
      if ((((lVar6 != 0) && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_0312f140)) &&
          (iVar3 = FUN_00d80bb0(lVar6), iVar3 == 0x35)) &&
         (lVar6 = FUN_00d80ee4(lVar6), lVar6 == lVar4)) {
        uVar5 = 1;
        goto LAB_009c0fbc;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar2);
  }
  uVar5 = 0;
LAB_009c0fbc:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}




undefined8 * FUN_009c0ff4(undefined8 *param_1)

{
  FUN_009df040();
  *param_1 = &PTR_thunk_FUN_009df4b8_027c29c0;
  FUN_009df57c(param_1,"sword_bnd");
  return param_1;
}

