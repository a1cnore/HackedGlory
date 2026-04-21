// functions/00c07 — 29 functions
#include "libGameKindred.h"




void thunk_FUN_00c07b7c(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x509) != '\0') {
    FUN_00c07b04(param_1);
  }
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined2 *)(param_1 + 0x509) = 0;
  FUN_00c06e84(param_1);
  FUN_00f048e0(auStack_48,DAT_0313abfc,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c0704c(long param_1)

{
  long lVar1;
  long local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcStack_40 = thunk_FUN_00c07c08;
  local_48 = param_1;
  FUN_00f03390(&local_48);
  FUN_00f0e670(param_1 + 0x3e0,&DAT_01bee7fa,2);
  FUN_00f0e670(param_1 + 0x2f0,&DAT_01bee7fa,2);
  *(undefined1 *)(param_1 + 0x510) = 0;
  FUN_00c06e84(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c070e0(float param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  fVar1 = sinf(param_1);
  fVar2 = cosf(param_1);
  uVar3 = NEON_fmov(0x3f400000,4);
  fVar1 = (float)*(undefined8 *)(param_3 + 0x330) +
          fVar1 * param_2 * *(float *)(param_3 + 0x4f8) * (float)uVar3;
  fVar2 = (float)((ulong)*(undefined8 *)(param_3 + 0x330) >> 0x20) +
          fVar2 * param_2 * *(float *)(param_3 + 0x4f8) * (float)((ulong)uVar3 >> 0x20);
  if ((*(float *)(param_3 + 0x420) == fVar1) && (*(float *)(param_3 + 0x424) == fVar2)) {
    return;
  }
  *(ulong *)(param_3 + 0x420) = CONCAT44(fVar2,fVar1);
  FUN_0091ada4(param_3 + 0x3e0);
  return;
}




void FUN_00c07184(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  FUN_00f0044c(param_4,param_3 + 0xc0);
  *(undefined8 *)(param_3 + 0x4d0) = param_4;
  *(undefined1 *)(param_3 + 0x509) = 1;
  uVar2 = FUN_00f08664(param_5,param_3);
  *(undefined4 *)(param_3 + 0x4e0) = uVar2;
  *(undefined4 *)(param_3 + 0x4e4) = param_2;
  FUN_00c06e84(param_3);
  if (*(char *)(param_3 + 0x50c) != '\0') {
    uVar1 = *(undefined8 *)(param_3 + 0x4e0);
    fVar3 = (float)uVar1;
    *(undefined8 *)(param_3 + 0x4e8) = uVar1;
    if ((*(float *)(param_3 + 0x330) != fVar3) ||
       (*(float *)(param_3 + 0x334) != (float)((ulong)uVar1 >> 0x20))) {
      *(undefined8 *)(param_3 + 0x330) = uVar1;
      FUN_0091ada4(param_3 + 0x2f0);
      fVar3 = *(float *)(param_3 + 0x4e8);
    }
    if ((*(float *)(param_3 + 0x420) != fVar3) ||
       (*(float *)(param_3 + 0x424) != *(float *)(param_3 + 0x4ec))) {
      *(undefined8 *)(param_3 + 0x420) = *(undefined8 *)(param_3 + 0x4e8);
      FUN_0091ada4(param_3 + 0x3e0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00c0725c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_3 + 0xb8))();
  return;
}




void FUN_00c07260(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x50a);
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined1 *)(param_1 + 0x509) = 0;
  *(undefined1 *)(param_1 + 0x50a) = 0;
  FUN_00f00478(param_1 + 0xc0);
  if (*(char *)(param_1 + 0x509) != '\0') {
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))(*(long **)(param_1 + 0xb8),cVar1 != '\0');
  }
  FUN_00c06e84(param_1);
  return;
}




void FUN_00c072b8(long param_1,uint param_2)

{
  param_2 = param_2 & 1;
  *(char *)(param_1 + 0x508) = (char)param_2;
  *(uint *)(param_1 + 0x84) =
       *(uint *)(param_1 + 0x84) & 0xfffffff8 | *(uint *)(param_1 + 0x84) & 3 | param_2 << 2;
  FUN_00c06e84();
  *(uint *)(param_1 + 0x144) =
       *(uint *)(param_1 + 0x144) & 0xffffffe0 | *(uint *)(param_1 + 0x144) & 0xf | param_2 << 4;
  return;
}




void FUN_00c072f8(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x50d) = param_2 & 1;
  FUN_00c06e84();
  return;
}




void FUN_00c07304(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x50b) = param_2 & 1;
  return;
}




void FUN_00c07310(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x50c) = param_2 & 1;
  return;
}




void FUN_00c0731c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x50e) = param_2 & 1;
  return;
}




void FUN_00c07328(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x50f) = param_2 & 1;
  return;
}




void FUN_00c07334(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x4f8) = param_1;
  FUN_00c06e84();
  return;
}




void FUN_00c0733c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x4fc) = param_1;
  return;
}




void FUN_00c07344(long param_1)

{
  *(undefined4 *)(param_1 + 0x4fc) = 0x42480000;
  return;
}




void FUN_00c07350(long param_1)

{
  if ((*(char *)(param_1 + 0x508) != '\0') && (*(char *)(param_1 + 0x509) != '\0')) {
    FUN_00c07368();
    return;
  }
  return;
}




void FUN_00c07368(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00c0704c();
  *(undefined1 *)(param_1 + 0x50a) = 1;
  if (*(char *)(param_1 + 0x50c) == '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x1b8);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x4e0);
  }
  *(undefined8 *)(param_1 + 0x4e8) = uVar2;
  FUN_00f0044c(*(undefined8 *)(param_1 + 0x4d0),param_1 + 0xc0);
  FUN_00c06e84(param_1);
  FUN_00f048e0(auStack_48,DAT_0313abf4,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c07408(undefined1 param_1 [16],undefined4 param_2,long param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_3 + 0x508) != '\0') {
    uVar2 = (**(code **)(*param_4 + 0x10))(param_4,DAT_03210fd8);
    if ((((uVar2 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) && (*(long *)(param_3 + 0x4d0) == 0))
    {
      *(long *)(param_3 + 0x4d0) = param_4[4];
      uVar4 = NEON_scvtf(CONCAT44((int)(float)((ulong)param_4[5] >> 0x20),(int)(float)param_4[5]),4)
      ;
      *(undefined8 *)(param_3 + 0x4e0) = uVar4;
      uVar3 = FUN_00f08664(param_3 + 0x4e0,param_3);
      *(undefined4 *)(param_3 + 0x4e0) = uVar3;
      *(undefined4 *)(param_3 + 0x4e4) = param_2;
      *(undefined1 *)(param_3 + 0x509) = 1;
      FUN_00c06e84(param_3);
      (**(code **)**(undefined8 **)(param_3 + 0xb8))();
      FUN_00f048e0(auStack_58,DAT_0313abec,0);
      FUN_00f04760(param_3,auStack_58,1);
    }
    if (*(char *)(param_3 + 0x50e) != '\0') {
      FUN_00f0490c(param_4);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c07520(undefined1 param_1 [16],float param_2,long param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  undefined8 uVar7;
  float __x;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(char *)(param_3 + 0x508) == '\0') ||
     (((uVar3 = (**(code **)(*param_4 + 0x10))(param_4,DAT_03210fd8), (uVar3 & 1) == 0 &&
       (DAT_03210fd8 != DAT_03210f50)) || (param_4[4] != *(long *)(param_3 + 0x4d0)))))
  goto LAB_00c07598;
  uVar7 = NEON_scvtf(CONCAT44((int)(float)((ulong)param_4[5] >> 0x20),(int)(float)param_4[5]),4);
  *(undefined8 *)(param_3 + 0x4d8) = uVar7;
  fVar6 = (float)FUN_00f08664(param_3 + 0x4d8,param_3);
  *(float *)(param_3 + 0x4d8) = fVar6;
  *(float *)(param_3 + 0x4dc) = param_2;
  if (*(char *)(param_3 + 0x50a) == '\0') {
    fVar6 = fVar6 - *(float *)(param_3 + 0x4e0);
    param_2 = param_2 - *(float *)(param_3 + 0x4e4);
    __x = fVar6 * fVar6 + param_2 * param_2;
    fVar6 = SQRT(__x);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(__x);
    }
    if (*(float *)(param_3 + 0x4fc) < fVar6) {
      FUN_00c07368(param_3);
    }
    if (*(char *)(param_3 + 0x50a) != '\0') goto LAB_00c07634;
    (**(code **)(**(long **)(param_3 + 0xb8) + 8))
              (0,*(long **)(param_3 + 0xb8),0,&DAT_03218ef8,&DAT_03218ef8);
    FUN_00f048e0(auStack_58,DAT_0313abf0,0);
    FUN_00f04760(param_3,auStack_58,1);
  }
  else {
LAB_00c07634:
    FUN_00c076ec(param_3);
  }
  if (*(char *)(param_3 + 0x50f) != '\0') {
    lVar4 = FUN_00f02710((float)(int)*(float *)(param_4 + 5),
                         (float)(int)*(float *)((long)param_4 + 0x2c),param_3 + 0x200,1);
    uVar1 = *(uint *)(param_3 + 0x284);
    uVar5 = 0x99;
    if (lVar4 != 0) {
      uVar5 = 0xff;
    }
    if ((uVar1 >> 7 & 0xff) != uVar5) {
      *(uint *)(param_3 + 0x284) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar5 << 7;
      FUN_0091ada4(param_3 + 0x200);
    }
  }
LAB_00c07598:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c076ec(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_60;
  float local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar6 = (float)*(undefined8 *)(param_1 + 0x4d8) - *(float *)(param_1 + 0x4e8);
  fVar7 = *(float *)(param_1 + 0x4dc) - *(float *)(param_1 + 0x4ec);
  fVar2 = fVar6 * fVar6 + fVar7 * fVar7;
  fVar5 = SQRT(fVar2);
  *(undefined8 *)(param_1 + 0x4f0) = *(undefined8 *)(param_1 + 0x4d8);
  if (NAN(fVar5)) {
    fVar5 = sqrtf(fVar2);
  }
  fVar2 = (float)*(undefined8 *)(param_1 + 0x4d8) - (float)*(undefined8 *)(param_1 + 0x4e8);
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x4d8) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_1 + 0x4e8) >> 0x20);
  fVar3 = fVar2 * fVar2 + fVar3 * fVar3;
  fVar2 = SQRT(fVar3);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(fVar3);
  }
  if ((*(char *)(param_1 + 0x50b) == '\0') ||
     (fVar3 = *(float *)(param_1 + 0x4f8), fVar2 - fVar3 <= 1.0)) {
    if (*(char *)(param_1 + 0x50b) == '\0') {
      fVar2 = *(float *)(param_1 + 0x4e8);
      fVar3 = *(float *)(param_1 + 0x4ec);
      goto LAB_00c07828;
    }
  }
  else {
    *(float *)(param_1 + 0x4e8) = *(float *)(param_1 + 0x4d8) - (fVar6 / fVar5) * fVar3;
    *(float *)(param_1 + 0x4ec) = *(float *)(param_1 + 0x4dc) - (fVar7 / fVar5) * fVar3;
  }
  FUN_00f00298(&local_5c,&local_60);
  fVar3 = *(float *)(param_1 + 0x4f8) + 100.0;
  fVar4 = *(float *)(param_1 + 0x4e8);
  if (local_5c - fVar3 <= *(float *)(param_1 + 0x4e8)) {
    fVar4 = local_5c - fVar3;
  }
  fVar2 = fVar3;
  if (fVar3 <= fVar4) {
    fVar2 = fVar4;
  }
  fVar4 = *(float *)(param_1 + 0x4ec);
  if (local_60 - fVar3 <= *(float *)(param_1 + 0x4ec)) {
    fVar4 = local_60 - fVar3;
  }
  if (fVar3 <= fVar4) {
    fVar3 = fVar4;
  }
  *(float *)(param_1 + 0x4e8) = fVar2;
  *(float *)(param_1 + 0x4ec) = fVar3;
LAB_00c07828:
  fVar2 = *(float *)(param_1 + 0x4f0) - fVar2;
  fVar3 = *(float *)(param_1 + 0x4f4) - fVar3;
  fVar3 = fVar2 * fVar2 + fVar3 * fVar3;
  fVar2 = SQRT(fVar3);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(fVar3);
  }
  fVar3 = *(float *)(param_1 + 0x4f8);
  if (fVar2 <= fVar3) {
    fVar2 = *(float *)(param_1 + 0x4e8);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x4e8);
    *(float *)(param_1 + 0x4f0) = (fVar6 / fVar5) * fVar3 + fVar2;
    *(float *)(param_1 + 0x4f4) = (fVar7 / fVar5) * fVar3 + *(float *)(param_1 + 0x4ec);
  }
  if ((*(float *)(param_1 + 0x330) != fVar2) ||
     (*(float *)(param_1 + 0x334) != *(float *)(param_1 + 0x4ec))) {
    *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x4e8);
    FUN_0091ada4(param_1 + 0x2f0);
  }
  if ((*(float *)(param_1 + 0x420) != *(float *)(param_1 + 0x4f0)) ||
     (*(float *)(param_1 + 0x424) != *(float *)(param_1 + 0x4f4))) {
    *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(param_1 + 0x4f0);
    FUN_0091ada4(param_1 + 0x3e0);
  }
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))
            (*(undefined4 *)(param_1 + 0x4f8),*(long **)(param_1 + 0xb8),1,
             (float *)(param_1 + 0x4e8),param_1 + 0x4f0);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c0794c(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x284);
  uVar2 = 0xff;
  if ((param_2 & 1) == 0) {
    uVar2 = 0x99;
  }
  if ((uVar1 >> 7 & 0xff) == uVar2) {
    return;
  }
  *(uint *)(param_1 + 0x284) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
  FUN_0091ada4(param_1 + 0x200);
  return;
}




bool FUN_00c07984(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00f02710(param_1 + 0x200,1);
  return lVar1 != 0;
}




void FUN_00c079a8(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0x508) != '\0') {
    uVar3 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
    if (((uVar3 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
      if (param_2[4] == *(long *)(param_1 + 0x4d0)) {
        cVar1 = *(char *)(param_1 + 0x50a);
        *(undefined8 *)(param_1 + 0x4d0) = 0;
        *(undefined1 *)(param_1 + 0x509) = 0;
        *(undefined1 *)(param_1 + 0x50a) = 0;
        if ((*(char *)(param_1 + 0x50f) == '\0') ||
           (lVar4 = FUN_00f02710((float)(int)*(float *)(param_2 + 5),
                                 (float)(int)*(float *)((long)param_2 + 0x2c),param_1 + 0x200,1),
           lVar4 == 0)) {
          (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))
                    (*(long **)(param_1 + 0xb8),cVar1 != '\0');
          FUN_00f048e0(auStack_58,DAT_0313abf8,0);
          FUN_00f04760(param_1,auStack_58,1);
        }
        else {
          FUN_00c07b04(param_1);
        }
        FUN_00f00478(param_1 + 0xc0);
        if ((cVar1 == '\0') && (*(char *)(param_1 + 0x50e) != '\0')) {
          FUN_00f0490c(param_2);
        }
        FUN_00c06e84(param_1);
      }
      else if (*(char *)(param_1 + 0x50e) != '\0') {
        FUN_00f0490c(param_2);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c07b04(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  FUN_00f048e0(auStack_48,DAT_0313abfc,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c07b7c(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x509) != '\0') {
    FUN_00c07b04(param_1);
  }
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined2 *)(param_1 + 0x509) = 0;
  FUN_00c06e84(param_1);
  FUN_00f048e0(auStack_48,DAT_0313abfc,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c07c08(long param_1)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  
  fVar3 = 2.3561945 - *(float *)(param_1 + 0x500);
  fVar1 = sinf(fVar3);
  fVar3 = cosf(fVar3);
  uVar2 = NEON_fmov(0x3f400000,4);
  fVar1 = (float)*(undefined8 *)(param_1 + 0x330) +
          fVar1 * *(float *)(param_1 + 0x504) * *(float *)(param_1 + 0x4f8) * (float)uVar2;
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x330) >> 0x20) +
          fVar3 * *(float *)(param_1 + 0x504) * *(float *)(param_1 + 0x4f8) *
          (float)((ulong)uVar2 >> 0x20);
  if ((*(float *)(param_1 + 0x420) == fVar1) && (*(float *)(param_1 + 0x424) == fVar3)) {
    return;
  }
  *(ulong *)(param_1 + 0x420) = CONCAT44(fVar3,fVar1);
  FUN_0091ada4(param_1 + 0x3e0);
  return;
}




void thunk_FUN_00c07c08(long param_1)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  
  fVar3 = 2.3561945 - *(float *)(param_1 + 0x500);
  fVar1 = sinf(fVar3);
  fVar3 = cosf(fVar3);
  uVar2 = NEON_fmov(0x3f400000,4);
  fVar1 = (float)*(undefined8 *)(param_1 + 0x330) +
          fVar1 * *(float *)(param_1 + 0x504) * *(float *)(param_1 + 0x4f8) * (float)uVar2;
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x330) >> 0x20) +
          fVar3 * *(float *)(param_1 + 0x504) * *(float *)(param_1 + 0x4f8) *
          (float)((ulong)uVar2 >> 0x20);
  if ((*(float *)(param_1 + 0x420) == fVar1) && (*(float *)(param_1 + 0x424) == fVar3)) {
    return;
  }
  *(ulong *)(param_1 + 0x420) = CONCAT44(fVar3,fVar1);
  FUN_0091ada4(param_1 + 0x3e0);
  return;
}




void FUN_00c07cc8(long *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  void *local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  FUN_00f13ca4();
  lVar6 = 0xc0;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027f5bb8;
  do {
    FUN_00f0eea8((long)param_1 + lVar6);
    lVar6 = lVar6 + 0x120;
  } while (lVar6 != 0x540);
  FUN_00f0e4a8(param_1 + 0xaa);
  param_1[0xc9] = 0;
  param_1[200] = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  param_1[0xcb] = 0x2ffffffff;
  param_1[0xa9] = 0x200000005;
  param_1[0xa8] = 0x300000004;
  plVar7 = param_1 + 0x18;
  lVar6 = 0x540;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
    FUN_00f0e548(plVar7,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
    FUN_00f0e670(plVar7,&DAT_01bee7f6,2);
    uVar2 = *(uint *)((long)plVar7 + 0x84);
    if ((uVar2 & 0x7f80) != 0x7900) {
      *(uint *)((long)plVar7 + 0x84) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x7900;
      FUN_0091ada4(plVar7);
    }
    pvVar4 = operator_new(0x838);
    FUN_00abb534(pvVar4,1);
    local_80 = pvVar4;
    FUN_00a4b918(param_1 + 200,&local_80);
    (**(code **)(*param_1 + 0x78))(param_1,local_80,1);
    lVar1 = (long)local_80 + 0x4d8;
    uVar5 = FUN_00920bec(*(undefined4 *)((long)param_1 + lVar6),0);
    FUN_00f0e578(lVar1,uVar5);
    FUN_00abb1c8(0x3ee66666,local_80,&DAT_01bee7f6);
    FUN_00b09144(0,local_80);
    FUN_00abb250(local_80,1);
    lVar6 = lVar6 + 4;
    plVar7 = plVar7 + 0x24;
    *(uint *)((long)local_80 + 0x46c) = *(uint *)((long)local_80 + 0x46c) & 0xfffffffb;
  } while (lVar6 != 0x550);
  FUN_00f13f08(0x447a0000,0x447a0000,param_1);
  (**(code **)(*param_1 + 0x90))(param_1);
  *(undefined1 *)(param_1 + 0xcc) = 0;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c07efc(long param_1,uint param_2)

{
  *(char *)(param_1 + 0x660) = (char)(param_2 & 1);
  *(uint *)(param_1 + 0x84) =
       *(uint *)(param_1 + 0x84) & 0xfffffff8 | *(uint *)(param_1 + 0x84) & 3 | (param_2 & 1) << 2;
  return;
}




void FUN_00c07f14(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  
  uVar3 = *(uint *)(param_1 + 200);
  plVar1 = (long *)param_1[0xc9];
  *param_1 = &PTR_FUN_027f5bb8;
  plVar4 = plVar1;
  if (uVar3 != 0) {
    do {
      plVar2 = (long *)*plVar4;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        uVar3 = *(uint *)(param_1 + 200);
        plVar1 = (long *)param_1[0xc9];
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1 + uVar3);
  }
  if (plVar1 != (long *)0x0) {
    operator_delete__(plVar1);
    param_1[200] = 0;
    param_1[0xc9] = 0;
  }
  param_1[0xaa] = &PTR_FUN_028266f0;
  param_1[0xc1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc4);
  FUN_00f13d08(param_1 + 0xaa);
  lVar5 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar5 + 0x420) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar5 + 0x4d8) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar5 + 0x4f0);
    FUN_00f13d08((long)param_1 + lVar5 + 0x420);
    lVar5 = lVar5 + -0x120;
  } while (lVar5 != -0x480);
  FUN_00f13d08(param_1);
  return;
}

