// functions/00efe — 52 functions
#include "libGameKindred.h"




void FUN_00efe000(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}




void FUN_00efe00c(undefined8 *param_1)

{
  FUN_00efc8e8();
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_02824da0;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  return;
}




void FUN_00efe060(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined8 *)(param_1 + 0x20) = param_2;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}




undefined4 FUN_00efe074(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




void FUN_00efe07c(float param_1,long param_2)

{
  long lVar1;
  uint *puVar2;
  code *pcVar3;
  code *pcVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  byte bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar8 = *(float *)(param_2 + 0xc);
  param_1 = *(float *)(param_2 + 0x18) + param_1;
  if (fVar8 <= param_1) {
    param_1 = fVar8;
  }
  *(float *)(param_2 + 0x18) = param_1;
  if (*(char *)(param_2 + 0x34) == '\0') {
    puVar2 = (uint *)FUN_00f0e690(*(undefined8 *)(param_2 + 0x20));
    uVar5 = *puVar2;
    fVar8 = *(float *)(param_2 + 0xc);
    *(undefined1 *)(param_2 + 0x34) = 1;
    *(uint *)(param_2 + 0x2c) = uVar5;
  }
  else {
    uVar5 = (uint)*(byte *)(param_2 + 0x2c);
  }
  bVar10 = *(byte *)(param_2 + 0x28);
  if (fVar8 == 0.0) {
    fVar6 = 1.0;
  }
  else {
    fVar6 = *(float *)(param_2 + 0x18) / fVar8;
  }
  pcVar3 = (code *)0x0;
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    fVar6 = (float)(**(code **)(param_2 + 0x10))(fVar6,0,0x3f800000,0x3f800000);
    pcVar3 = *(code **)(param_2 + 0x10);
    fVar8 = *(float *)(param_2 + 0xc);
  }
  fVar9 = 1.0;
  if (fVar8 != 0.0) {
    fVar9 = *(float *)(param_2 + 0x18) / fVar8;
  }
  fVar14 = (float)NEON_ucvtf((uint)bVar10);
  fVar12 = (float)NEON_ucvtf((uint)*(byte *)(param_2 + 0x2d));
  fVar11 = (float)NEON_ucvtf((uint)*(byte *)(param_2 + 0x29));
  pcVar4 = (code *)0x0;
  if (pcVar3 != (code *)0x0) {
    fVar9 = (float)(*pcVar3)(fVar9,0,0x3f800000);
    pcVar4 = *(code **)(param_2 + 0x10);
    fVar8 = *(float *)(param_2 + 0xc);
  }
  fVar7 = 1.0;
  if (fVar8 != 0.0) {
    fVar7 = *(float *)(param_2 + 0x18) / fVar8;
  }
  fVar8 = (float)NEON_ucvtf((uint)*(byte *)(param_2 + 0x2e));
  fVar13 = (float)NEON_ucvtf((uint)*(byte *)(param_2 + 0x2a));
  if (pcVar4 != (code *)0x0) {
    fVar7 = (float)(*pcVar4)(fVar7,0,0x3f800000,0x3f800000);
  }
  local_70 = (undefined1)(int)(fVar6 * fVar14 + (1.0 - fVar6) * (float)(uVar5 & 0xff));
  local_6f = (undefined1)(int)(fVar9 * fVar11 + (1.0 - fVar9) * fVar12);
  local_6e = (undefined1)(int)(fVar7 * fVar13 + (1.0 - fVar7) * fVar8);
  local_6d = 0xff;
  FUN_00f0e670(*(undefined8 *)(param_2 + 0x20),&local_70,*(undefined4 *)(param_2 + 0x30));
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00efe260(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  return;
}




void FUN_00efe26c(undefined8 *param_1)

{
  FUN_00efc8e8();
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_02824de8;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  return;
}




void FUN_00efe2c0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = *param_3;
  return;
}




undefined4 FUN_00efe2d0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




void FUN_00efe2d8(float param_1,long param_2)

{
  long lVar1;
  uint *puVar2;
  code *pcVar3;
  code *pcVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  byte bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar8 = *(float *)(param_2 + 0xc);
  param_1 = *(float *)(param_2 + 0x18) + param_1;
  if (fVar8 <= param_1) {
    param_1 = fVar8;
  }
  *(float *)(param_2 + 0x18) = param_1;
  if (*(char *)(param_2 + 0x30) == '\0') {
    puVar2 = (uint *)FUN_00f0d81c(*(undefined8 *)(param_2 + 0x20));
    uVar5 = *puVar2;
    fVar8 = *(float *)(param_2 + 0xc);
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(uint *)(param_2 + 0x2c) = uVar5;
  }
  else {
    uVar5 = (uint)*(byte *)(param_2 + 0x2c);
  }
  bVar10 = *(byte *)(param_2 + 0x28);
  if (fVar8 == 0.0) {
    fVar6 = 1.0;
  }
  else {
    fVar6 = *(float *)(param_2 + 0x18) / fVar8;
  }
  pcVar3 = (code *)0x0;
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    fVar6 = (float)(**(code **)(param_2 + 0x10))(fVar6,0,0x3f800000,0x3f800000);
    pcVar3 = *(code **)(param_2 + 0x10);
    fVar8 = *(float *)(param_2 + 0xc);
  }
  fVar9 = 1.0;
  if (fVar8 != 0.0) {
    fVar9 = *(float *)(param_2 + 0x18) / fVar8;
  }
  fVar14 = (float)NEON_ucvtf((uint)bVar10);
  fVar12 = (float)NEON_ucvtf((uint)*(byte *)(param_2 + 0x2d));
  fVar11 = (float)NEON_ucvtf((uint)*(byte *)(param_2 + 0x29));
  pcVar4 = (code *)0x0;
  if (pcVar3 != (code *)0x0) {
    fVar9 = (float)(*pcVar3)(fVar9,0,0x3f800000);
    pcVar4 = *(code **)(param_2 + 0x10);
    fVar8 = *(float *)(param_2 + 0xc);
  }
  fVar7 = 1.0;
  if (fVar8 != 0.0) {
    fVar7 = *(float *)(param_2 + 0x18) / fVar8;
  }
  fVar8 = (float)NEON_ucvtf((uint)*(byte *)(param_2 + 0x2e));
  fVar13 = (float)NEON_ucvtf((uint)*(byte *)(param_2 + 0x2a));
  if (pcVar4 != (code *)0x0) {
    fVar7 = (float)(*pcVar4)(fVar7,0,0x3f800000,0x3f800000);
  }
  local_70 = (undefined1)(int)(fVar6 * fVar14 + (1.0 - fVar6) * (float)(uVar5 & 0xff));
  local_6f = (undefined1)(int)(fVar9 * fVar11 + (1.0 - fVar9) * fVar12);
  local_6e = (undefined1)(int)(fVar7 * fVar13 + (1.0 - fVar7) * fVar8);
  local_6d = 0xff;
  FUN_00f0d7fc(*(undefined8 *)(param_2 + 0x20),&local_70);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00efe4b8(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}




void FUN_00efe4c4(undefined8 *param_1)

{
  FUN_00efc8e8();
  *param_1 = &PTR_FUN_02824e30;
  param_1[2] = 0;
  FUN_00e70510(param_1 + 3);
  return;
}




void FUN_00efe4fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_00910394(param_1 + 0x18,param_3);
  return;
}




long FUN_00efe510(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00efe518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00efe52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x138))(*(long **)(param_1 + 0x10),param_1 + 0x18);
  return;
}




void FUN_00efe530(undefined8 *param_1)

{
  FUN_00efc8e8();
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  *param_1 = &PTR_FUN_02824e78;
  param_1[4] = 0x3f8000003f800000;
  param_1[3] = 0x3f80000000000000;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  return;
}




void FUN_00efe580(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}




void FUN_00efe58c(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x1c) = *param_2;
  return;
}




undefined4 FUN_00efe598(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}




void FUN_00efe5a0(float param_1,long param_2,long param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  fVar2 = *(float *)(param_2 + 0xc);
  param_1 = *(float *)(param_2 + 0x18) + param_1;
  if (fVar2 <= param_1) {
    param_1 = fVar2;
  }
  *(float *)(param_2 + 0x18) = param_1;
  if (*(char *)(param_2 + 0x2c) == '\0') {
    uVar3 = *(undefined8 *)(param_3 + 0x48);
    *(undefined1 *)(param_2 + 0x2c) = 1;
    *(ulong *)(param_2 + 0x24) =
         CONCAT44((float)((ulong)uVar3 >> 0x20) -
                  (float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20),
                  (float)uVar3 - (float)*(undefined8 *)(param_2 + 0x1c));
  }
  fVar1 = 1.0;
  if (fVar2 != 0.0) {
    fVar1 = param_1 / fVar2;
  }
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    fVar1 = (float)(**(code **)(param_2 + 0x10))(fVar1,0,0x3f800000,0x3f800000);
  }
  fVar2 = (float)*(undefined8 *)(param_2 + 0x24) * (1.0 - fVar1) +
          (float)*(undefined8 *)(param_2 + 0x1c);
  fVar1 = (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20) * (1.0 - fVar1) +
          (float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
  if ((!(bool)(~((float)*(undefined8 *)(param_3 + 0x48) == fVar2) & 1)) &&
     (!(bool)(~((float)((ulong)*(undefined8 *)(param_3 + 0x48) >> 0x20) == fVar1) & 1))) {
    return;
  }
  *(ulong *)(param_3 + 0x48) = CONCAT44(fVar1,fVar2);
  FUN_0091ada4(param_3);
  return;
}




void FUN_00efe670(undefined8 *param_1)

{
  FUN_00efc8e8();
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  *param_1 = &PTR_FUN_02824ec0;
  param_1[4] = 0x3f80000000000000;
  param_1[3] = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  return;
}




void FUN_00efe6c0(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}




void FUN_00efe6cc(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x1c) = *param_2;
  return;
}




undefined4 FUN_00efe6d8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}




void FUN_00efe6e0(float param_1,long param_2,long *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar3 = *(float *)(param_2 + 0xc);
  param_1 = *(float *)(param_2 + 0x18) + param_1;
  if (fVar3 <= param_1) {
    param_1 = fVar3;
  }
  *(float *)(param_2 + 0x18) = param_1;
  if (*(char *)(param_2 + 0x2c) == '\0') {
    lVar4 = param_3[10];
    *(undefined1 *)(param_2 + 0x2c) = 1;
    *(ulong *)(param_2 + 0x24) =
         CONCAT44((float)((ulong)lVar4 >> 0x20) -
                  (float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20),
                  (float)lVar4 - (float)*(undefined8 *)(param_2 + 0x1c));
  }
  fVar2 = 1.0;
  if (fVar3 != 0.0) {
    fVar2 = param_1 / fVar3;
  }
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    fVar2 = (float)(**(code **)(param_2 + 0x10))(fVar2,0,0x3f800000,0x3f800000);
  }
  local_40 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20) * (1.0 - fVar2) +
                      (float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20),
                      (float)*(undefined8 *)(param_2 + 0x24) * (1.0 - fVar2) +
                      (float)*(undefined8 *)(param_2 + 0x1c));
  (**(code **)(*param_3 + 0x28))(param_3,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00efe7c4(undefined8 *param_1)

{
  FUN_00efc8e8();
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_02824f08;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}




void FUN_00efe808(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}




void FUN_00efe814(undefined4 param_1,long param_2,undefined8 param_3)

{
  *(undefined8 *)(param_2 + 0x20) = param_3;
  *(undefined4 *)(param_2 + 0x28) = param_1;
  return;
}




undefined4 FUN_00efe820(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




void FUN_00efe828(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_2 + 0xc);
  param_1 = *(float *)(param_2 + 0x18) + param_1;
  if (fVar2 <= param_1) {
    param_1 = fVar2;
  }
  *(float *)(param_2 + 0x18) = param_1;
  if (*(char *)(param_2 + 0x30) == '\0') {
    fVar3 = *(float *)(param_2 + 0x28);
    fVar4 = *(float *)(*(long *)(param_2 + 0x20) + 0x118);
    *(undefined1 *)(param_2 + 0x30) = 1;
    fVar4 = fVar4 - fVar3;
    *(float *)(param_2 + 0x2c) = fVar4;
  }
  else {
    fVar3 = *(float *)(param_2 + 0x28);
    fVar4 = *(float *)(param_2 + 0x2c);
  }
  fVar1 = 1.0;
  if (fVar2 != 0.0) {
    fVar1 = param_1 / fVar2;
  }
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    fVar1 = (float)(**(code **)(param_2 + 0x10))(fVar1,0,0x3f800000,0x3f800000);
  }
  FUN_00f0ef20(fVar3 + fVar4 * (1.0 - fVar1),*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_00efe8d0(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  FUN_00efc8e8();
  auVar1 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[6] = auVar1._8_8_;
  param_1[5] = auVar1._0_8_;
  *param_1 = &PTR_FUN_02824f50;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}




void FUN_00efe91c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = *param_3;
  return;
}




undefined4 FUN_00efe92c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




void FUN_00efe934(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_2 + 0x18);
  fVar3 = *(float *)(param_2 + 0xc);
  fVar1 = fVar2 + param_1;
  if (fVar3 <= fVar2 + param_1) {
    fVar1 = fVar3;
  }
  *(float *)(param_2 + 0x18) = fVar1;
  if (*(char *)(param_2 + 0x38) == '\0') {
    fVar1 = (float)(**(code **)(**(long **)(param_2 + 0x20) + 0x48))();
    fVar3 = *(float *)(param_2 + 0xc);
    *(ulong *)(param_2 + 0x30) =
         CONCAT44(fVar2 - (float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20),
                  fVar1 - (float)*(undefined8 *)(param_2 + 0x28));
    *(undefined1 *)(param_2 + 0x38) = 1;
  }
  if (fVar3 == 0.0) {
    fVar3 = 1.0;
  }
  else {
    fVar3 = *(float *)(param_2 + 0x18) / fVar3;
  }
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    fVar3 = (float)(**(code **)(param_2 + 0x10))(fVar3,0,0x3f800000,0x3f800000);
  }
  FUN_00f13f08(*(float *)(param_2 + 0x30) * (1.0 - fVar3) + *(float *)(param_2 + 0x28),
               (1.0 - fVar3) * *(float *)(param_2 + 0x34) + *(float *)(param_2 + 0x2c),
               *(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_00efe9f4(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_00efea00(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  FUN_00efc8e8();
  auVar1 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[6] = auVar1._8_8_;
  param_1[5] = auVar1._0_8_;
  *param_1 = &PTR_FUN_02824f98;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}




void FUN_00efea4c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = *param_3;
  return;
}




undefined4 FUN_00efea5c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




void FUN_00efea64(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_2 + 0x18);
  fVar3 = *(float *)(param_2 + 0xc);
  fVar1 = fVar2 + param_1;
  if (fVar3 <= fVar2 + param_1) {
    fVar1 = fVar3;
  }
  *(float *)(param_2 + 0x18) = fVar1;
  if (*(char *)(param_2 + 0x38) == '\0') {
    fVar1 = (float)(**(code **)(**(long **)(param_2 + 0x20) + 0x48))();
    fVar3 = *(float *)(param_2 + 0xc);
    *(ulong *)(param_2 + 0x30) =
         CONCAT44(fVar2 - (float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20),
                  fVar1 - (float)*(undefined8 *)(param_2 + 0x28));
    *(undefined1 *)(param_2 + 0x38) = 1;
  }
  if (fVar3 == 0.0) {
    fVar3 = 1.0;
  }
  else {
    fVar3 = *(float *)(param_2 + 0x18) / fVar3;
  }
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    fVar3 = (float)(**(code **)(param_2 + 0x10))(fVar3,0,0x3f800000,0x3f800000);
  }
  FUN_00f13f08(*(float *)(param_2 + 0x30) * (1.0 - fVar3) + *(float *)(param_2 + 0x28),
               (1.0 - fVar3) * *(float *)(param_2 + 0x34) + *(float *)(param_2 + 0x2c),
               *(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_00efeb24(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_00efeb30(undefined8 *param_1)

{
  FUN_00efc8e8();
  *param_1 = &PTR_FUN_02824fe0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0x3f80000000000000;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfc;
  return;
}




void FUN_00efeb88(float param_1,float param_2,long param_3,undefined8 param_4)

{
  *(undefined8 *)(param_3 + 0x20) = param_4;
  *(float *)(param_3 + 0x28) = param_2;
  *(float *)(param_3 + 0x2c) = param_1 - param_2;
  *(byte *)(param_3 + 0x30) = *(byte *)(param_3 + 0x30) & 0xfc | 2;
  return;
}




void FUN_00efeba8(undefined4 param_1,long param_2,undefined8 param_3)

{
  *(undefined8 *)(param_2 + 0x20) = param_3;
  *(undefined4 *)(param_2 + 0x28) = param_1;
  *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) & 0xfc | 1;
  return;
}




void FUN_00efebc4(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_2 + 0xc);
  param_1 = *(float *)(param_2 + 0x18) + param_1;
  if (fVar2 <= param_1) {
    param_1 = fVar2;
  }
  *(float *)(param_2 + 0x18) = param_1;
  if ((*(byte *)(param_2 + 0x30) & 3) == 1) {
    fVar4 = *(float *)(param_2 + 0x28);
    fVar3 = **(float **)(param_2 + 0x20);
    *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) | 2;
    fVar3 = fVar3 - fVar4;
    *(float *)(param_2 + 0x2c) = fVar3;
  }
  else {
    fVar4 = *(float *)(param_2 + 0x28);
    fVar3 = *(float *)(param_2 + 0x2c);
  }
  fVar1 = 1.0;
  if (fVar2 != 0.0) {
    fVar1 = param_1 / fVar2;
  }
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    fVar1 = (float)(**(code **)(param_2 + 0x10))(fVar1,0,0x3f800000,0x3f800000);
  }
  **(float **)(param_2 + 0x20) = fVar4 + fVar3 * (1.0 - fVar1);
  return;
}




void FUN_00efec78(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfd;
  return;
}




void FUN_00efec8c(undefined8 *param_1)

{
  FUN_00efc8e8();
  *param_1 = &PTR_FUN_02825028;
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80;
  return;
}




void FUN_00efecd0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00f048a4(param_2);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}




void FUN_00efecf8(long param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}




void FUN_00efed04(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,*(undefined4 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0x10));
  FUN_00f04760(param_2,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ushort * FUN_00efed6c(undefined4 param_1)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  puVar1 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
  if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = *puVar1;
  }
  *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
  *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
  FUN_00efc8e8(puVar1);
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined ***)puVar1 = &PTR_FUN_027c1a60;
  *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  *(undefined4 *)(puVar1 + 6) = param_1;
  return puVar1;
}




ushort * FUN_00efee28(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  puVar1 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
  if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = *puVar1;
  }
  *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
  *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
  FUN_00efc8e8(puVar1);
  puVar1[0x10] = 0;
  puVar1[0x11] = 0x3f80;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined ***)puVar1 = &PTR_FUN_02824d10;
  *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  *(undefined4 *)(puVar1 + 0xe) = param_1;
  *(undefined4 *)(puVar1 + 6) = param_2;
  *(undefined8 *)(puVar1 + 8) = param_3;
  return puVar1;
}




ushort * FUN_00efef08(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar2 * 0x40);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_02824cc8;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    *(undefined1 *)(puVar3 + 0x16) = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(undefined4 *)(puVar3 + 0xe) = param_1;
  *(undefined4 *)(puVar3 + 0x10) = param_2;
  *(undefined4 *)(puVar3 + 6) = param_3;
  *(undefined8 *)(puVar3 + 8) = param_4;
  return puVar3;
}

