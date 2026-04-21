// functions/10064 — 570 functions
#include "GameKindred.h"




void thunk_FUN_10064221c(void)

{
  FUN_10064221c();
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void thunk_FUN_10064221c(void)

{
  FUN_10064221c();
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void thunk_FUN_100642324(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x38);
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    FUN_10063eec0(plVar1);
    plVar1 = plVar2;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void thunk_FUN_100644cf4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void thunk_FUN_10064221c(void)

{
  FUN_10064221c();
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void thunk_FUN_1006428bc(void)

{
  FUN_1006428bc();
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void thunk_FUN_10064221c(void)

{
  FUN_10064221c();
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void thunk_FUN_100642bc8(void)

{
  FUN_100642bc8();
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void thunk_FUN_10064e2bc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10064e2bc_1014a5ca0;
  if (param_1[0x11] != 0) {
    FUN_10064e04c();
    param_1[0x11] = 0;
  }
  FUN_10064221c(param_1);
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void FUN_100640028(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  return;
}




void FUN_100640034(float param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  
  fVar10 = *(float *)(param_2 + 0xc);
  uVar6 = NEON_fminnm(*(float *)(param_2 + 0x18) + param_1,fVar10);
  *(undefined4 *)(param_2 + 0x18) = uVar6;
  if (*(char *)(param_2 + 0x30) == '\0') {
    puVar3 = (uint *)FUN_100651480(*(undefined8 *)(param_2 + 0x20));
    uVar5 = *puVar3;
    *(uint *)(param_2 + 0x2c) = uVar5;
    *(undefined1 *)(param_2 + 0x30) = 1;
    fVar10 = *(float *)(param_2 + 0xc);
  }
  else {
    uVar5 = (uint)*(byte *)(param_2 + 0x2c);
  }
  bVar1 = *(byte *)(param_2 + 0x28);
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    pcVar4 = (code *)0x0;
    if (fVar10 == 0.0) {
      fVar7 = 1.0;
    }
    else {
      fVar7 = *(float *)(param_2 + 0x18) / fVar10;
    }
  }
  else {
    fVar7 = 1.0;
    if (fVar10 != 0.0) {
      fVar7 = *(float *)(param_2 + 0x18) / fVar10;
    }
    fVar7 = (float)(**(code **)(param_2 + 0x10))(fVar7,0,0x3f800000,0x3f800000);
    pcVar4 = *(code **)(param_2 + 0x10);
    fVar10 = *(float *)(param_2 + 0xc);
  }
  bVar11 = *(byte *)(param_2 + 0x2d);
  bVar2 = *(byte *)(param_2 + 0x29);
  if (pcVar4 == (code *)0x0) {
    pcVar4 = (code *)0x0;
    if (fVar10 == 0.0) {
      fVar8 = 1.0;
    }
    else {
      fVar8 = *(float *)(param_2 + 0x18) / fVar10;
    }
  }
  else {
    fVar8 = 1.0;
    if (fVar10 != 0.0) {
      fVar8 = *(float *)(param_2 + 0x18) / fVar10;
    }
    fVar8 = (float)(*pcVar4)(fVar8,0,0x3f800000,0x3f800000);
    pcVar4 = *(code **)(param_2 + 0x10);
    fVar10 = *(float *)(param_2 + 0xc);
  }
  fVar13 = (float)NEON_ucvtf((uint)bVar11);
  fVar12 = (float)NEON_ucvtf((uint)*(byte *)(param_2 + 0x2e));
  bVar11 = *(byte *)(param_2 + 0x2a);
  fVar9 = 1.0;
  if (pcVar4 == (code *)0x0) {
    if (fVar10 != 0.0) {
      fVar9 = *(float *)(param_2 + 0x18) / fVar10;
    }
  }
  else {
    if (fVar10 != 0.0) {
      fVar9 = *(float *)(param_2 + 0x18) / fVar10;
    }
    fVar9 = (float)(*pcVar4)(fVar9,0,0x3f800000,0x3f800000);
  }
  local_68 = (undefined1)
             (int)((float)(uVar5 & 0xff) + ((float)bVar1 - (float)(uVar5 & 0xff)) * fVar7);
  local_67 = (undefined1)(int)(fVar13 + ((float)bVar2 - fVar13) * fVar8);
  local_66 = (undefined1)(int)(fVar12 + ((float)bVar11 - fVar12) * fVar9);
  local_65 = 0xff;
  FUN_100651460(*(undefined8 *)(param_2 + 0x20),&local_68);
  return;
}




void FUN_100640210(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}




void FUN_10064021c(void)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = (undefined8 *)FUN_10063ee9c();
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined8 *)((long)puVar1 + 0xc) = 0;
  *puVar1 = &PTR_thunk_FUN_10063eeb4_1014a50f8;
  auVar2 = NEON_fmov(0x3f800000,4);
  *(long *)((long)puVar1 + 0x24) = auVar2._8_8_;
  *(long *)((long)puVar1 + 0x1c) = auVar2._0_8_;
  *(undefined1 *)((long)puVar1 + 0x2c) = 0;
  return;
}




void FUN_100640250(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}




void FUN_10064025c(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x1c) = *param_2;
  return;
}




void FUN_100640268(float param_1,long param_2,long param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_2 + 0xc);
  fVar4 = (float)NEON_fminnm(*(float *)(param_2 + 0x18) + param_1,fVar2);
  *(float *)(param_2 + 0x18) = fVar4;
  if (*(char *)(param_2 + 0x2c) == '\0') {
    *(ulong *)(param_2 + 0x24) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x48) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20),
                  (float)*(undefined8 *)(param_3 + 0x48) - (float)*(undefined8 *)(param_2 + 0x1c));
    *(undefined1 *)(param_2 + 0x2c) = 1;
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    fVar3 = 1.0;
    if (fVar2 != 0.0) {
      fVar3 = fVar4 / fVar2;
    }
  }
  else {
    fVar3 = 1.0;
    if (fVar2 != 0.0) {
      fVar3 = fVar4 / fVar2;
    }
    fVar3 = (float)(**(code **)(param_2 + 0x10))(fVar3,0,0x3f800000,0x3f800000);
  }
  fVar2 = (float)*(undefined8 *)(param_2 + 0x1c) +
          (float)*(undefined8 *)(param_2 + 0x24) * (1.0 - fVar3);
  fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20) +
          (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20) * (1.0 - fVar3);
  bVar1 = false;
  if ((*(float *)(param_3 + 0x48) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)(param_3 + 0x4c)) && !NAN(fVar4))) {
    bVar1 = *(float *)(param_3 + 0x4c) == fVar4;
  }
  if (!bVar1) {
    *(ulong *)(param_3 + 0x48) = CONCAT44(fVar4,fVar2);
    FUN_1000200a0(param_3);
    return;
  }
  return;
}




void FUN_100640334(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}




void FUN_100640340(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_2 + 0xc);
  fVar3 = (float)NEON_fminnm(*(float *)(param_2 + 0x18) + param_1,fVar1);
  *(float *)(param_2 + 0x18) = fVar3;
  if (*(char *)(param_2 + 0x30) == '\0') {
    fVar4 = *(float *)(param_2 + 0x28);
    fVar5 = *(float *)(*(long *)(param_2 + 0x20) + 0x118) - fVar4;
    *(float *)(param_2 + 0x2c) = fVar5;
    *(undefined1 *)(param_2 + 0x30) = 1;
  }
  else {
    fVar4 = *(float *)(param_2 + 0x28);
    fVar5 = *(float *)(param_2 + 0x2c);
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    fVar2 = 1.0;
    if (fVar1 != 0.0) {
      fVar2 = fVar3 / fVar1;
    }
  }
  else {
    fVar2 = 1.0;
    if (fVar1 != 0.0) {
      fVar2 = fVar3 / fVar1;
    }
    fVar2 = (float)(**(code **)(param_2 + 0x10))(fVar2,0,0x3f800000,0x3f800000);
  }
  FUN_1006534d0(fVar4 + fVar5 * (1.0 - fVar2),*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_1006403f0(void)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = (undefined8 *)FUN_10063ee9c();
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined8 *)((long)puVar1 + 0xc) = 0;
  *puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5188;
  puVar1[4] = 0;
  auVar2 = NEON_fmov(0x3f800000,4);
  puVar1[6] = auVar2._8_8_;
  puVar1[5] = auVar2._0_8_;
  *(undefined1 *)(puVar1 + 7) = 0;
  return;
}




void FUN_100640428(long param_1,undefined8 param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = *param_3;
  return;
}




void FUN_100640438(float param_1,long param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_2 + 0xc);
  uVar1 = NEON_fminnm(*(float *)(param_2 + 0x18) + param_1,fVar3);
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  if (*(char *)(param_2 + 0x38) == '\0') {
    fVar2 = (float)(**(code **)(**(long **)(param_2 + 0x20) + 0x48))();
    *(ulong *)(param_2 + 0x30) =
         CONCAT44(fVar3 - (float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20),
                  fVar2 - (float)*(undefined8 *)(param_2 + 0x28));
    *(undefined1 *)(param_2 + 0x38) = 1;
    fVar3 = *(float *)(param_2 + 0xc);
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    fVar2 = 1.0;
    if (fVar3 != 0.0) {
      fVar2 = *(float *)(param_2 + 0x18) / fVar3;
    }
  }
  else {
    fVar2 = 1.0;
    if (fVar3 != 0.0) {
      fVar2 = *(float *)(param_2 + 0x18) / fVar3;
    }
    fVar2 = (float)(**(code **)(param_2 + 0x10))(fVar2,0,0x3f800000,0x3f800000);
  }
  FUN_10064e47c(*(float *)(param_2 + 0x28) + (1.0 - fVar2) * *(float *)(param_2 + 0x30),
                *(float *)(param_2 + 0x2c) + (1.0 - fVar2) * *(float *)(param_2 + 0x34),
                *(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_1006404fc(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_100640508(void)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = (undefined8 *)FUN_10063ee9c();
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined8 *)((long)puVar1 + 0xc) = 0;
  *puVar1 = &PTR_thunk_FUN_10063eeb4_1014a51d0;
  puVar1[4] = 0;
  auVar2 = NEON_fmov(0x3f800000,4);
  puVar1[6] = auVar2._8_8_;
  puVar1[5] = auVar2._0_8_;
  *(undefined1 *)(puVar1 + 7) = 0;
  return;
}




void FUN_100640540(long param_1,undefined8 param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = *param_3;
  return;
}




void FUN_100640550(float param_1,long param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_2 + 0xc);
  uVar1 = NEON_fminnm(*(float *)(param_2 + 0x18) + param_1,fVar3);
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  if (*(char *)(param_2 + 0x38) == '\0') {
    fVar2 = (float)(**(code **)(**(long **)(param_2 + 0x20) + 0x48))();
    *(ulong *)(param_2 + 0x30) =
         CONCAT44(fVar3 - (float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20),
                  fVar2 - (float)*(undefined8 *)(param_2 + 0x28));
    *(undefined1 *)(param_2 + 0x38) = 1;
    fVar3 = *(float *)(param_2 + 0xc);
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    fVar2 = 1.0;
    if (fVar3 != 0.0) {
      fVar2 = *(float *)(param_2 + 0x18) / fVar3;
    }
  }
  else {
    fVar2 = 1.0;
    if (fVar3 != 0.0) {
      fVar2 = *(float *)(param_2 + 0x18) / fVar3;
    }
    fVar2 = (float)(**(code **)(param_2 + 0x10))(fVar2,0,0x3f800000,0x3f800000);
  }
  FUN_10064e47c(*(float *)(param_2 + 0x28) + (1.0 - fVar2) * *(float *)(param_2 + 0x30),
                *(float *)(param_2 + 0x2c) + (1.0 - fVar2) * *(float *)(param_2 + 0x34),
                *(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_100640614(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_100640620(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10063ee9c();
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined8 *)((long)puVar1 + 0xc) = 0;
  *puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5218;
  puVar1[4] = 0;
  puVar1[5] = 0x3f80000000000000;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xfc;
  return;
}




void FUN_100640664(float param_1,float param_2,long param_3,undefined8 param_4)

{
  *(undefined8 *)(param_3 + 0x20) = param_4;
  *(float *)(param_3 + 0x28) = param_2;
  *(float *)(param_3 + 0x2c) = param_1 - param_2;
  *(byte *)(param_3 + 0x30) = *(byte *)(param_3 + 0x30) & 0xfc | 2;
  return;
}




void FUN_100640684(undefined4 param_1,long param_2,undefined8 param_3)

{
  *(undefined8 *)(param_2 + 0x20) = param_3;
  *(undefined4 *)(param_2 + 0x28) = param_1;
  *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) & 0xfc | 1;
  return;
}




void FUN_1006406a0(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_2 + 0xc);
  fVar3 = (float)NEON_fminnm(*(float *)(param_2 + 0x18) + param_1,fVar1);
  *(float *)(param_2 + 0x18) = fVar3;
  if ((*(byte *)(param_2 + 0x30) & 3) == 1) {
    fVar4 = *(float *)(param_2 + 0x28);
    fVar5 = **(float **)(param_2 + 0x20) - fVar4;
    *(float *)(param_2 + 0x2c) = fVar5;
    *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) | 2;
  }
  else {
    fVar4 = *(float *)(param_2 + 0x28);
    fVar5 = *(float *)(param_2 + 0x2c);
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    fVar2 = 1.0;
    if (fVar1 != 0.0) {
      fVar2 = fVar3 / fVar1;
    }
  }
  else {
    fVar2 = 1.0;
    if (fVar1 != 0.0) {
      fVar2 = fVar3 / fVar1;
    }
    fVar2 = (float)(**(code **)(param_2 + 0x10))(fVar2,0,0x3f800000,0x3f800000);
  }
  **(float **)(param_2 + 0x20) = fVar4 + fVar5 * (1.0 - fVar2);
  return;
}




void FUN_10064075c(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfd;
  return;
}




void FUN_100640770(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10063ee9c();
  *puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5260;
  *(undefined4 *)((long)puVar1 + 0xc) = 0x80;
  puVar1[2] = 0;
  return;
}




void FUN_1006407a4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100644a94(param_2);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}




void FUN_1006407cc(long param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}




void FUN_1006407d8(long param_1,undefined8 param_2)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,*(undefined4 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0x10));
  FUN_100644c34(param_2,auStack_40,1);
  return;
}




void FUN_10064081c(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10001f55c();
  *(undefined4 *)(lVar1 + 0xc) = param_1;
  return;
}




void FUN_100640840(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar3 * 0x40);
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
  *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
  puVar2 = (undefined8 *)FUN_10063ee9c();
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined8 *)((long)puVar2 + 0xc) = 0;
  *puVar2 = &PTR_thunk_FUN_10063eeb4_1014a5020;
  *(undefined4 *)(puVar2 + 4) = 0x3f800000;
  *(undefined1 *)((long)puVar2 + 0x24) = 0;
  *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  *(undefined4 *)((long)puVar2 + 0x1c) = param_1;
  *(undefined4 *)((long)puVar2 + 0xc) = param_2;
  puVar2[2] = param_3;
  return;
}




void FUN_1006408f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar3 * 0x40);
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
  *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
  puVar2 = (undefined8 *)FUN_10063ee9c();
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined8 *)((long)puVar2 + 0xc) = 0;
  *puVar2 = &PTR_thunk_FUN_10063eeb4_1014a4fd8;
  puVar2[4] = 0;
  *(undefined8 *)((long)puVar2 + 0x25) = 0;
  *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  *(undefined4 *)((long)puVar2 + 0x1c) = param_1;
  *(undefined4 *)(puVar2 + 4) = param_2;
  *(undefined4 *)((long)puVar2 + 0xc) = param_3;
  puVar2[2] = param_4;
  return;
}




void FUN_1006409b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar3 * 0x40);
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
  *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
  puVar2 = (undefined8 *)FUN_10063ee9c();
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined8 *)((long)puVar2 + 0xc) = 0;
  *puVar2 = &PTR_thunk_FUN_10063eeb4_1014a4f48;
  *(undefined8 *)((long)puVar2 + 0x24) = 0;
  *(undefined8 *)((long)puVar2 + 0x1c) = 0;
  *(undefined1 *)((long)puVar2 + 0x2c) = 0;
  *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  *(undefined4 *)((long)puVar2 + 0x24) = param_1;
  *(undefined4 *)(puVar2 + 5) = param_2;
  *(undefined4 *)((long)puVar2 + 0xc) = param_3;
  puVar2[2] = param_4;
  return;
}




void FUN_100640a74(undefined4 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar3 * 0x40);
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
  *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
  puVar2 = (undefined8 *)FUN_10063ee9c();
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined8 *)((long)puVar2 + 0xc) = 0;
  *puVar2 = &PTR_thunk_FUN_10063eeb4_1014a5068;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0x2c) = 0xffffffff;
  *(undefined1 *)((long)puVar2 + 0x34) = 0;
  *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  puVar2[4] = param_2;
  *(undefined4 *)(puVar2 + 5) = *param_3;
  *(undefined4 *)(puVar2 + 6) = param_5;
  *(undefined4 *)((long)puVar2 + 0xc) = param_1;
  puVar2[2] = param_4;
  return;
}




void FUN_100640b58(undefined4 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar3 * 0x40);
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
  *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
  puVar2 = (undefined8 *)FUN_10063ee9c();
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined8 *)((long)puVar2 + 0xc) = 0;
  *puVar2 = &PTR_thunk_FUN_10063eeb4_1014a50b0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0x2c) = 0xffffffff;
  *(undefined1 *)(puVar2 + 6) = 0;
  *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  puVar2[4] = param_2;
  *(undefined4 *)(puVar2 + 5) = *param_3;
  *(undefined4 *)((long)puVar2 + 0xc) = param_1;
  puVar2[2] = param_4;
  return;
}




void FUN_100640c2c(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar3 * 0x40);
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
  *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
  puVar2 = (undefined8 *)FUN_10063ee9c();
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined8 *)((long)puVar2 + 0xc) = 0;
  *puVar2 = &PTR_thunk_FUN_10063eeb4_1014a5140;
  *(undefined1 *)(puVar2 + 6) = 0;
  *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  puVar2[4] = param_3;
  puVar2[5] = 0;
  *(undefined4 *)(puVar2 + 5) = param_1;
  *(undefined4 *)((long)puVar2 + 0xc) = param_2;
  puVar2[2] = param_4;
  return;
}




void FUN_100640ce8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar3 * 0x40);
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
  *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
  puVar2 = (undefined8 *)FUN_10063ee9c();
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined8 *)((long)puVar2 + 0xc) = 0;
  *puVar2 = &PTR_thunk_FUN_10063eeb4_1014a51d0;
  uVar4 = NEON_fmov(0x3f800000,4);
  puVar2[6] = uVar4;
  *(undefined1 *)(puVar2 + 7) = 0;
  *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  puVar2[4] = param_4;
  *(undefined4 *)(puVar2 + 5) = param_1;
  *(undefined4 *)((long)puVar2 + 0x2c) = param_2;
  *(undefined4 *)((long)puVar2 + 0xc) = param_3;
  puVar2[2] = param_5;
  return;
}




void FUN_100640db8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar3 * 0x40);
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
  *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
  puVar2 = (undefined8 *)FUN_10063ee9c();
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined8 *)((long)puVar2 + 0xc) = 0;
  *puVar2 = &PTR_thunk_FUN_10063eeb4_1014a50f8;
  uVar4 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)((long)puVar2 + 0x24) = uVar4;
  *(undefined1 *)((long)puVar2 + 0x2c) = 0;
  *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  *(undefined4 *)((long)puVar2 + 0x1c) = param_1;
  *(undefined4 *)(puVar2 + 4) = param_2;
  *(undefined4 *)((long)puVar2 + 0xc) = param_3;
  puVar2[2] = param_4;
  return;
}




void FUN_100640e7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar3 * 0x40);
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
  *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
  puVar2 = (undefined8 *)FUN_10063ee9c();
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined8 *)((long)puVar2 + 0xc) = 0;
  *puVar2 = &PTR_thunk_FUN_10063eeb4_1014a5188;
  uVar4 = NEON_fmov(0x3f800000,4);
  puVar2[6] = uVar4;
  *(undefined1 *)(puVar2 + 7) = 0;
  *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  puVar2[4] = param_4;
  *(undefined4 *)(puVar2 + 5) = param_1;
  *(undefined4 *)((long)puVar2 + 0x2c) = param_2;
  *(undefined4 *)((long)puVar2 + 0xc) = param_3;
  puVar2[2] = param_5;
  return;
}




ushort * FUN_100640f4c(undefined4 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar2 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar2 * 0x40);
    if (uVar2 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063ee9c(puVar3);
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    *(undefined ***)puVar3 = &PTR_thunk_FUN_10063eeb4_1014a5458;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(undefined4 *)(puVar3 + 6) = param_1;
  if (param_2 == 0) {
    FUN_1004d22dc("Inconsistency");
  }
  *(long *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  return puVar3;
}




void FUN_100641030(void)

{
  return;
}




void FUN_100641038(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_100641050(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_100641068(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_100641080(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_100641098(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_1006410b0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_1006410c8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_1006410e0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_1006410f8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_100641110(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_100641128(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_100641140(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_100641158(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_100641170(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_100641188(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_1006411a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_1006411b8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_1006411d0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_1006411e8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_100641200(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_100641218(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_100641230(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_100641244(long param_1)

{
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100641250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}




void FUN_100641258(undefined8 param_1)

{
  void *pvVar1;
  
  FUN_10064dcf0();
  operator_new(0x20030);
  DAT_101dbd2f8 = FUN_10063ef34();
  operator_new(0x4c0);
  DAT_101dbd2e0 = thunk_FUN_100643b2c();
  operator_new(0x15b08);
  DAT_101dbd2e8 = thunk_FUN_1006480a0();
  pvVar1 = operator_new(0x130);
  DAT_101dbd2f0 = thunk_FUN_100641b84(pvVar1,param_1);
  FUN_10064a0c4(0x400);
  FUN_100643a24();
  FUN_1006416e0();
  return;
}




void FUN_1006412e0(void)

{
  void *pvVar1;
  
  FUN_100642524();
  FUN_10064172c();
  FUN_100643a48();
  FUN_10064a0f8();
  if (DAT_101dbd2e8 != (long *)0x0) {
    (**(code **)(*DAT_101dbd2e8 + 8))();
  }
  DAT_101dbd2e8 = (long *)0x0;
  if (DAT_101dbd2f0 != (long *)0x0) {
    (**(code **)(*DAT_101dbd2f0 + 8))();
  }
  DAT_101dbd2f0 = (long *)0x0;
  if (DAT_101dbd2e0 != 0) {
    pvVar1 = (void *)thunk_FUN_10064e2bc();
    operator_delete(pvVar1);
  }
  DAT_101dbd2e0 = 0;
  if (DAT_101dbd2f8 != (long *)0x0) {
    (**(code **)(*DAT_101dbd2f8 + 8))();
  }
  DAT_101dbd2f8 = (long *)0x0;
  FUN_10064dd48();
  return;
}




void FUN_100641374(undefined8 param_1)

{
  FUN_100642524();
  FUN_100644014(param_1,DAT_101dbd2e0);
  FUN_100642524();
  return;
}




void FUN_1006413a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  FUN_100643bb4(DAT_101dbd2e0);
  lVar1 = 0;
  do {
    if (*(code **)((long)&DAT_101ea57b0 + lVar1) != (code *)0x0) {
      (**(code **)((long)&DAT_101ea57b0 + lVar1))
                (param_1,param_2,*(undefined8 *)((long)&DAT_101ea57b8 + lVar1));
    }
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x100);
  return;
}




void FUN_10064140c(undefined8 param_1,undefined8 param_2)

{
  FUN_100643bc0(DAT_101dbd2e0,param_1,param_2);
  return;
}




void FUN_100641420(void)

{
  FUN_100643bd4(DAT_101dbd2e0);
  return;
}




void FUN_10064142c(undefined8 param_1,undefined8 param_2)

{
  FUN_100643be0(DAT_101dbd2e0,param_1,param_2);
  return;
}




void FUN_100641440(void)

{
  FUN_100643bf4(DAT_101dbd2e0);
  return;
}




void FUN_10064144c(void)

{
  FUN_100643bfc(DAT_101dbd2e0);
  return;
}




void FUN_100641458(void)

{
  FUN_100643c04(DAT_101dbd2e0);
  return;
}




void FUN_100641464(undefined8 param_1,undefined8 param_2)

{
  FUN_100643c10(DAT_101dbd2e0,param_1,param_2);
  return;
}




void FUN_100641478(void)

{
  FUN_100643c24(DAT_101dbd2e0);
  return;
}




void FUN_100641484(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = FUN_100643c2c(DAT_101dbd2e0);
  fVar4 = (float)param_1;
  bVar1 = false;
  fVar3 = (float)param_2;
  if ((*(float *)(lVar2 + 0x48) == fVar4) &&
     (bVar1 = false, !NAN(*(float *)(lVar2 + 0x4c)) && !NAN(fVar3))) {
    bVar1 = *(float *)(lVar2 + 0x4c) == fVar3;
  }
  if (!bVar1) {
    lVar2 = FUN_100643c2c(DAT_101dbd2e0);
    bVar1 = false;
    if ((*(float *)(lVar2 + 0x48) == fVar4) &&
       (bVar1 = false, !NAN(*(float *)(lVar2 + 0x4c)) && !NAN(fVar3))) {
      bVar1 = *(float *)(lVar2 + 0x4c) == fVar3;
    }
    if (!bVar1) {
      *(float *)(lVar2 + 0x48) = fVar4;
      *(float *)(lVar2 + 0x4c) = fVar3;
      FUN_1000200a0();
    }
    FUN_10064a12c(param_1,param_2);
    FUN_10064a19c();
    FUN_100648a60(param_1,param_2,DAT_101dbd2e8);
    return;
  }
  return;
}




void FUN_100641518(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_100643c2c(DAT_101dbd2e0);
  uVar2 = *(undefined4 *)(lVar1 + 0x4c);
  *param_1 = *(undefined4 *)(lVar1 + 0x48);
  *param_2 = uVar2;
  return;
}




void FUN_100641550(undefined8 param_1,undefined8 param_2)

{
  FUN_100643c30(DAT_101dbd2e0,param_1,param_2);
  return;
}




void FUN_100641564(undefined8 param_1)

{
  FUN_100643c98(DAT_101dbd2e0,param_1);
  return;
}




void FUN_100641574(undefined8 param_1)

{
  FUN_100643d44(DAT_101dbd2e0,param_1);
  return;
}




void FUN_100641584(undefined8 param_1,undefined8 param_2)

{
  FUN_100643d84(DAT_101dbd2e0,param_1,param_2);
  return;
}




void FUN_100641598(undefined8 param_1)

{
  FUN_100643ea8(DAT_101dbd2e0,param_1);
  return;
}




void FUN_1006415a8(undefined8 param_1)

{
  FUN_100643edc(DAT_101dbd2e0,param_1);
  return;
}




void FUN_1006415b8(void)

{
  FUN_100643f38(DAT_101dbd2e0);
  return;
}




void FUN_1006415c4(undefined8 param_1)

{
  FUN_100643f78(DAT_101dbd2e0,param_1);
  return;
}




void FUN_1006415d4(undefined8 param_1)

{
  if (DAT_101dbd2e0 != 0) {
    FUN_100643fa8(DAT_101dbd2e0,param_1);
    return;
  }
  return;
}




void FUN_1006415ec(undefined8 param_1)

{
  if (DAT_101dbd2e0 != 0) {
    FUN_100643fec(DAT_101dbd2e0,param_1);
    return;
  }
  return;
}




void FUN_100641604(undefined8 param_1)

{
  FUN_100643ffc(DAT_101dbd2e0,param_1);
  return;
}




void FUN_100641614(undefined8 param_1)

{
  FUN_1010b3404(param_1,0);
  FUN_10064162c();
  return;
}




void FUN_10064162c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_10064175c();
  if (iVar1 == 0) {
    FUN_100644a84(DAT_101dbd2e0,param_1);
    FUN_10064a218();
    iVar1 = FUN_10064a188();
    if (iVar1 != 0) {
      FUN_10064a224(param_1);
      return;
    }
  }
  else {
    FUN_100641768(param_1);
    iVar1 = FUN_10064a188();
    if (iVar1 != 0) {
      FUN_10064181c(param_1);
      return;
    }
  }
  return;
}




void FUN_10064169c(undefined8 param_1)

{
  FUN_10064844c(DAT_101dbd2e8,param_1);
  return;
}




void FUN_1006416ac(undefined1 param_1)

{
  FUN_100648844(DAT_101dbd2e8,param_1);
  return;
}




void FUN_1006416c0(undefined1 param_1)

{
  FUN_100648268(DAT_101dbd2e8,param_1);
  return;
}




undefined8 FUN_1006416d4(void)

{
  return DAT_101dbd2e0;
}




void FUN_1006416e0(void)

{
  int iVar1;
  
  iVar1 = FUN_1004e4bc0();
  if (iVar1 != 0) {
    FUN_1004e4e60(&DAT_101dbd300,1,"DispatchQueue_Composite");
    FUN_1004e55c8(&DAT_101dbd300);
    return;
  }
  return;
}




void FUN_10064172c(void)

{
  int iVar1;
  
  iVar1 = FUN_1004e4ecc(&DAT_101dbd300);
  if (iVar1 != 0) {
    FUN_1004e4edc(&DAT_101dbd300);
    return;
  }
  return;
}




void FUN_10064175c(void)

{
  FUN_1004e4ecc(&DAT_101dbd300);
  return;
}




void FUN_100641768(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1004e4ecc(&DAT_101dbd300);
  if ((uVar1 & 1) != 0) {
    FUN_1006417c0();
    FUN_1004e57e0(&DAT_101dbd300,FUN_1006417f8,param_1);
    return;
  }
  uVar2 = FUN_1006416d4();
  FUN_100644a84(uVar2,param_1);
  return;
}




void FUN_1006417c0(void)

{
  int iVar1;
  
  iVar1 = FUN_1004e4ecc(&DAT_101dbd300);
  if (iVar1 != 0) {
    FUN_1004e586c(&DAT_101dbd300,0,0);
    return;
  }
  return;
}




void FUN_1006417f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1006416d4();
  FUN_100644a84(uVar1,param_1);
  return;
}




void FUN_10064181c(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_1004e4ecc(&DAT_101dbd300);
  if ((uVar2 & 1) != 0) {
    FUN_1006417c0();
    FUN_1004e57e0(&DAT_101dbd300,FUN_100641888,param_1);
    return;
  }
  FUN_10064a218();
  iVar1 = FUN_10064a188();
  if (iVar1 != 0) {
    FUN_10064a224(param_1);
    return;
  }
  return;
}




void FUN_100641888(undefined8 param_1)

{
  FUN_10064a218();
  FUN_10064a224(param_1);
  return;
}




void FUN_1006418ac(void)

{
  int iVar1;
  
  iVar1 = FUN_1004e4ecc(&DAT_101dbd300);
  if (iVar1 != 0) {
    FUN_1004e51fc(&DAT_101dbd300);
    return;
  }
  return;
}




void FUN_1006418dc(void)

{
  DAT_101ea58b0 = 0xff;
  DAT_101ea58b2 = 0xffff;
  DAT_101ea58b4 = 0xffff;
  thunk_FUN_1004e4dcc(&DAT_101dbd300);
  ___cxa_atexit(thunk_FUN_1004e4e84,&DAT_101dbd300,0x100000000);
  return;
}




void FUN_100641938(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = (ulong)*(char *)(*(long *)(param_1 + 0x20) + 8);
  if (uVar1 < 3) {
    FUN_1010b4b00(*(undefined8 *)(&PTR_DAT_1014a5508)[uVar1]);
  }
  plVar2 = *(long **)(param_1 + 0x20);
  if (*plVar2 != 0) {
    FUN_1010b7024();
    plVar2 = *(long **)(param_1 + 0x20);
  }
  if (*(char *)((long)plVar2 + 9) != '\0') {
    uVar1 = 0;
    do {
      if (plVar2[uVar1 + 2] != 0) {
        FUN_1010b7d6c(uVar1);
        plVar2 = *(long **)(param_1 + 0x20);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(byte *)((long)plVar2 + 9));
  }
  if (*(char *)((long)plVar2 + 10) != '\0') {
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uVar1 = (ulong)*(byte *)((long)plVar2 + 10);
    if (uVar1 != 0) {
      plVar2 = plVar2 + (ulong)*(byte *)((long)plVar2 + 9) + 2;
      puVar3 = &local_70;
      do {
        *(int *)puVar3 = (int)*plVar2;
        uVar1 = uVar1 - 1;
        plVar2 = (long *)((long)plVar2 + 4);
        puVar3 = (undefined8 *)((long)puVar3 + 4);
      } while (uVar1 != 0);
    }
    DAT_101dc0d28 = 1;
    DAT_101dc0d20 = &local_70;
  }
  FUN_1010b53c4(0,&DAT_1013cd78c);
  FUN_1010b53c4(1,&DAT_1013cd78c);
  FUN_1010b519c(3,*(undefined8 *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x30),
                *(undefined2 *)(param_1 + 0x32),0xffff,0);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100641a8c(int *param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  int *piVar9;
  
  do {
    while (*param_1 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar1 = param_1[10];
  piVar9 = param_1 + (ulong)uVar1 * 4 + 2;
  pvVar8 = *(void **)piVar9;
  if ((pvVar8 == (void *)0x0) ||
     (uVar5 = (ulong)*(uint *)((long)pvVar8 + 0x20000), pvVar7 = pvVar8,
     *(uint *)((long)pvVar8 + 0x20000) < 0x3f)) {
    pvVar7 = *(void **)(param_1 + (ulong)uVar1 * 4 + 4);
    if (pvVar7 == (void *)0x0) {
      pvVar7 = operator_new(0x20010);
      uVar5 = 0x20000;
      *(undefined4 *)((long)pvVar7 + 0x20000) = 0x20000;
      *(void **)((long)pvVar7 + 0x20008) = pvVar8;
      *(void **)piVar9 = pvVar7;
    }
    else {
      uVar6 = *(undefined8 *)((long)pvVar7 + 0x20008);
      *(void **)((long)pvVar7 + 0x20008) = pvVar8;
      *(void **)piVar9 = pvVar7;
      *(undefined8 *)(param_1 + (ulong)uVar1 * 4 + 4) = uVar6;
      uVar5 = 0x20000;
      *(undefined4 *)((long)pvVar7 + 0x20000) = 0x20000;
    }
  }
  *(int *)((long)pvVar7 + 0x20000) = (int)uVar5 + -0x3f;
  puVar4 = (undefined8 *)((long)pvVar7 + 0x20000 + (7 - uVar5) & 0xfffffffffffffff8);
  *param_1 = 0;
  puVar4[2] = 0;
  puVar4[1] = 0;
  puVar4[4] = 0;
  puVar4[3] = 0;
  *puVar4 = &PTR_FUN_1014a54e8;
  puVar4[5] = param_2;
  *(undefined4 *)(puVar4 + 6) = 0;
  return;
}




long FUN_100641b84(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  puVar2 = (undefined8 *)FUN_1010b23f0();
  *puVar2 = &PTR_thunk_FUN_100641cdc_1014a54a0;
  puVar2[2] = param_2;
  lVar5 = 0x18;
  do {
    FUN_1010b7de4(param_1 + lVar5);
    lVar5 = lVar5 + 0x50;
  } while (lVar5 != 0x108);
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  uVar4 = DAT_101ea58b8 & 0xffffffff0000fc3c;
  DAT_101ea58b8 = uVar4 | 0x1010380;
  DAT_101ea58c0 = uVar4 | 0x31310380;
  DAT_101ea58c8 = uVar4 | 0x11110380;
  lVar5 = 0x18;
  do {
    lVar1 = param_1 + lVar5;
    FUN_1010b7eac(lVar1,0x7800);
    uVar3 = FUN_1010b7ebc(lVar1,0,0xb4000,6,0);
    FUN_1010b7f64(lVar1,0,uVar3,4,3,0,1);
    FUN_1010b7f64(lVar1,4,uVar3,5,4,0xc,1);
    FUN_1010b7f64(lVar1,5,uVar3,4,2,0x10,1);
    lVar5 = lVar5 + 0x50;
  } while (lVar5 != 0x108);
  return param_1;
}




long thunk_FUN_100641b84(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  puVar2 = (undefined8 *)FUN_1010b23f0();
  *puVar2 = &PTR_thunk_FUN_100641cdc_1014a54a0;
  puVar2[2] = param_2;
  lVar5 = 0x18;
  do {
    FUN_1010b7de4(param_1 + lVar5);
    lVar5 = lVar5 + 0x50;
  } while (lVar5 != 0x108);
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  uVar4 = DAT_101ea58b8 & 0xffffffff0000fc3c;
  DAT_101ea58b8 = uVar4 | 0x1010380;
  DAT_101ea58c0 = uVar4 | 0x31310380;
  DAT_101ea58c8 = uVar4 | 0x11110380;
  lVar5 = 0x18;
  do {
    lVar1 = param_1 + lVar5;
    FUN_1010b7eac(lVar1,0x7800);
    uVar3 = FUN_1010b7ebc(lVar1,0,0xb4000,6,0);
    FUN_1010b7f64(lVar1,0,uVar3,4,3,0,1);
    FUN_1010b7f64(lVar1,4,uVar3,5,4,0xc,1);
    FUN_1010b7f64(lVar1,5,uVar3,4,2,0x10,1);
    lVar5 = lVar5 + 0x50;
  } while (lVar5 != 0x108);
  return param_1;
}




void FUN_100641cdc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_100641cdc_1014a54a0;
  lVar1 = 0x18;
  do {
    FUN_1010b7e24((long)param_1 + lVar1);
    lVar1 = lVar1 + 0x50;
  } while (lVar1 != 0x108);
  lVar1 = 0xb8;
  do {
    FUN_1010b7e7c((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x50;
  } while (lVar1 != -0x38);
  FUN_1010b240c(param_1);
  return;
}




void thunk_FUN_100641cdc(void)

{
  FUN_100641cdc();
  return;
}




void FUN_100641d3c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100641cdc();
  operator_delete(pvVar1);
  return;
}




void FUN_100641d50(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  void *pvVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined4 *puVar16;
  ulong uVar17;
  long *plVar18;
  int *piVar19;
  void *pvVar20;
  int *piVar21;
  long local_148;
  int local_140;
  int iStack_13c;
  undefined7 local_138;
  undefined1 uStack_131;
  undefined1 uStack_130;
  byte bStack_12f;
  byte bStack_12e;
  undefined5 uStack_12d;
  undefined8 auStack_128 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  iVar6 = 0x7800 - *(int *)(param_1 + 0x108);
  if (iVar6 < 1) goto LAB_10064202c;
  plVar18 = (long *)(param_5 + -8);
  local_148 = *(long *)(param_1 + 0x120) + (ulong)(uint)(*(int *)(param_1 + 0x108) * 0x18);
  local_140 = 0;
  iStack_13c = iVar6;
  (**(code **)(*plVar18 + 0x10))(plVar18,&local_148);
  iVar6 = local_140;
  if (local_140 == 0) goto LAB_10064202c;
  uStack_130 = 0;
  bStack_12f = 0;
  bStack_12e = 0;
  uStack_12d = 0;
  uVar8 = (**(code **)(*plVar18 + 0x20))(plVar18);
  local_138 = (undefined7)uVar8;
  uStack_131 = (undefined1)((ulong)uVar8 >> 0x38);
  uStack_130 = (**(code **)(*plVar18 + 0x28))(plVar18);
  bStack_12f = (**(code **)(*plVar18 + 0x18))(plVar18,auStack_128);
  bStack_12e = (**(code **)(*plVar18 + 0x30))(plVar18,auStack_128 + bStack_12f);
  sVar5 = (short)iVar6;
  if (*(long *)(param_1 + 0x110) == param_4) {
    if (*(long *)(param_1 + 0x118) == 0) goto LAB_100641e50;
    lVar9 = *(long *)(*(long *)(param_1 + 0x118) + 0x20);
    iVar7 = (uint)*(byte *)(lVar9 + 9) * 8 + (uint)*(byte *)(lVar9 + 10) * 4;
    if ((iVar7 != (uint)bStack_12e * 4 + (uint)bStack_12f * 8) ||
       (iVar7 = FUN_1004d2898(lVar9,&local_138,iVar7 + 0x10), iVar7 != 0)) goto LAB_100641e50;
    *(short *)(*(long *)(param_1 + 0x118) + 0x32) =
         *(short *)(*(long *)(param_1 + 0x118) + 0x32) + sVar5;
  }
  else {
    *(long *)(param_1 + 0x110) = param_4;
    *(undefined8 *)(param_1 + 0x118) = 0;
LAB_100641e50:
    lVar9 = FUN_100641a8c(*(undefined8 *)(param_1 + 0x10),
                          param_1 + (ulong)*(uint *)(param_1 + 0x128) * 0x50 + 0x18);
    piVar19 = *(int **)(param_1 + 0x10);
    do {
      while (*piVar19 != 0) {
        ClearExclusiveLocal();
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar4) {
        *piVar19 = 100;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar2 = piVar19[10];
    piVar21 = piVar19 + (ulong)uVar2 * 4 + 2;
    pvVar20 = *(void **)piVar21;
    uVar1 = (uint)bStack_12f * 8 + (uint)bStack_12e * 4 + 0x17;
    if ((pvVar20 == (void *)0x0) ||
       (uVar10 = (ulong)*(uint *)((long)pvVar20 + 0x20000), pvVar13 = pvVar20,
       *(uint *)((long)pvVar20 + 0x20000) < uVar1)) {
      pvVar13 = *(void **)(piVar19 + (ulong)uVar2 * 4 + 4);
      if (pvVar13 == (void *)0x0) {
        pvVar13 = operator_new(0x20010);
        uVar10 = 0x20000;
        *(undefined4 *)((long)pvVar13 + 0x20000) = 0x20000;
        *(void **)((long)pvVar13 + 0x20008) = pvVar20;
        *(void **)piVar21 = pvVar13;
      }
      else {
        uVar8 = *(undefined8 *)((long)pvVar13 + 0x20008);
        *(void **)((long)pvVar13 + 0x20008) = pvVar20;
        *(void **)piVar21 = pvVar13;
        *(undefined8 *)(piVar19 + (ulong)uVar2 * 4 + 4) = uVar8;
        uVar10 = 0x20000;
        *(undefined4 *)((long)pvVar13 + 0x20000) = 0x20000;
      }
    }
    *(int *)((long)pvVar13 + 0x20000) = (int)uVar10 - uVar1;
    puVar11 = (undefined8 *)((long)pvVar13 + 0x20000 + (7 - uVar10) & 0xfffffffffffffff8);
    *piVar19 = 0;
    *(uint *)((long)puVar11 + 7) =
         CONCAT13(bStack_12e,CONCAT12(bStack_12f,CONCAT11(uStack_130,uStack_131)));
    *puVar11 = CONCAT17(uStack_131,local_138);
    uVar10 = (ulong)bStack_12f;
    if (uVar10 == 0) {
      lVar15 = 0;
    }
    else {
      puVar12 = puVar11 + 2;
      puVar14 = auStack_128;
      uVar17 = uVar10;
      do {
        *puVar12 = *puVar14;
        uVar17 = uVar17 - 1;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      } while (uVar17 != 0);
      lVar15 = uVar10 << 3;
    }
    uVar10 = (ulong)bStack_12e;
    if (uVar10 != 0) {
      puVar12 = puVar11 + (ulong)*(byte *)((long)puVar11 + 9) + 2;
      puVar16 = (undefined4 *)((long)auStack_128 + lVar15);
      do {
        *(undefined4 *)puVar12 = *puVar16;
        uVar10 = uVar10 - 1;
        puVar12 = (undefined8 *)((long)puVar12 + 4);
        puVar16 = puVar16 + 1;
      } while (uVar10 != 0);
    }
    *(undefined8 **)(lVar9 + 0x20) = puVar11;
    *(short *)(lVar9 + 0x30) = (short)*(undefined4 *)(param_1 + 0x108);
    *(short *)(lVar9 + 0x32) = sVar5;
    *(long *)(param_1 + 0x118) = lVar9;
    FUN_1010b2aa4(param_6,lVar9);
  }
  *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + iVar6;
LAB_10064202c:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100642068(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  uVar1 = (*(int *)(param_1 + 0x128) + 1U) % 3;
  *(uint *)(param_1 + 0x128) = uVar1;
  FUN_1010b7ff8(param_1 + 0x18 + (ulong)uVar1 * 0x50,0x31,6);
  uVar2 = FUN_1010b8000(param_1 + 0x18 + (ulong)*(uint *)(param_1 + 0x128) * 0x50,0);
  *(undefined8 *)(param_1 + 0x120) = uVar2;
  FUN_1006418ac();
  return;
}




void FUN_1006420e4(long param_1)

{
  *(undefined8 *)(param_1 + 0x120) = 0;
  FUN_1010b7ffc(param_1 + (ulong)*(uint *)(param_1 + 0x128) * 0x50 + 0x18,0x31,
                *(int *)(param_1 + 0x108) * 0x18);
  return;
}




void FUN_100642110(void)

{
  return;
}




void FUN_100642118(void)

{
  DAT_101ea58b8 = 0x7010100ff;
  DAT_101ea58c0 = 0x7010100ff;
  DAT_101ea58c8 = 0x7010100ff;
  return;
}




undefined8 * FUN_100642140(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




void FUN_100642170(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = DAT_101dc1cb8;
  uVar1 = DAT_101873a38;
  param_1[1] = DAT_101dc1cb8;
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0xffffffffffffffff;
  return;
}




void FUN_1006421a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_100644b9c();
  *puVar3 = &PTR_FUN_1014a5530;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  uVar2 = DAT_101dc1cb8;
  uVar1 = DAT_101873a38;
  puVar3[8] = DAT_101dc1cb8;
  puVar3[9] = uVar1;
  puVar3[10] = uVar2;
  puVar3[0xb] = uVar2;
  puVar3[0xc] = uVar2;
  puVar3[0xd] = uVar2;
  puVar3[0xe] = uVar1;
  *(undefined4 *)(puVar3 + 0xf) = 0x3f800000;
  *(undefined8 *)((long)puVar3 + 0x7c) = 0xffffffffffffffff;
  *(uint *)((long)puVar3 + 0x84) = *(uint *)((long)puVar3 + 0x84) & 0x80000000 | 0x7fcd;
  return;
}




void thunk_FUN_1006421a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_100644b9c();
  *puVar3 = &PTR_FUN_1014a5530;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  uVar2 = DAT_101dc1cb8;
  uVar1 = DAT_101873a38;
  puVar3[8] = DAT_101dc1cb8;
  puVar3[9] = uVar1;
  puVar3[10] = uVar2;
  puVar3[0xb] = uVar2;
  puVar3[0xc] = uVar2;
  puVar3[0xd] = uVar2;
  puVar3[0xe] = uVar1;
  *(undefined4 *)(puVar3 + 0xf) = 0x3f800000;
  *(undefined8 *)((long)puVar3 + 0x7c) = 0xffffffffffffffff;
  *(uint *)((long)puVar3 + 0x84) = *(uint *)((long)puVar3 + 0x84) & 0x80000000 | 0x7fcd;
  return;
}




undefined8 * FUN_10064221c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a5530;
  FUN_100642270(param_1,0);
  *param_1 = &PTR_FUN_1014a5658;
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}




void FUN_100642270(long *param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((int)param_2 != 0) {
    (**(code **)(*param_1 + 0x98))(param_1);
  }
  FUN_100644c24(param_1);
  FUN_100642324(param_1);
  FUN_100643aa4(param_1);
  FUN_100642378(param_1,param_2);
  if (param_1[4] != 0) {
    FUN_1006423ec(param_1,param_2);
  }
  iVar1 = FUN_1006415d4(param_1);
  if (iVar1 != 0) {
    FUN_1006415a8(param_1);
  }
  iVar1 = FUN_1006415ec(param_1);
  if (iVar1 != 0) {
    FUN_100641604(param_1);
    return;
  }
  return;
}




undefined8 * FUN_10064230c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a5530;
  FUN_100642270(param_1,0);
  *param_1 = &PTR_FUN_1014a5658;
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}




void FUN_100642310(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064221c();
  operator_delete(pvVar1);
  return;
}




void FUN_100642324(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x38);
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    FUN_10063eec0(plVar1);
    plVar1 = plVar2;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_100642378(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if ((int)param_2 != 0) {
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  plVar2 = (long *)param_1[5];
  while (plVar1 = plVar2, plVar1 != (long *)0x0) {
    plVar2 = (long *)plVar1[6];
    FUN_100642270(plVar1,param_2);
    if ((*(byte *)((long)plVar1 + 0x84) >> 5 & 1) != 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
  }
  return;
}




void FUN_1006423ec(long *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)param_1[4];
  plVar2 = (long *)plVar1[5];
  if (plVar2 != (long *)0x0) {
    if (plVar2 == param_1) {
      plVar3 = (long *)0x0;
    }
    else {
      do {
        plVar3 = plVar2;
        plVar2 = (long *)plVar3[6];
        if (plVar2 == (long *)0x0) {
          return;
        }
      } while (plVar2 != param_1);
    }
    if (param_2 != 0) {
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0xc0))(plVar1,param_1);
      }
      (**(code **)(*param_1 + 0xb0))(param_1);
    }
    FUN_100644cf4(param_1,0);
    if (*(long **)(param_1[4] + 0x28) == param_1) {
      *(long *)(param_1[4] + 0x28) = param_1[6];
    }
    if (plVar3 != (long *)0x0) {
      plVar3[6] = param_1[6];
    }
    param_1[6] = 0;
    param_1[4] = 0;
  }
  return;
}




void FUN_10064249c(long param_1)

{
  long local_28;
  
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffff7;
  FUN_100642270(param_1,0);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffd;
  local_28 = param_1;
  FUN_10019bafc(&DAT_101dbd440,&local_28);
  return;
}




void FUN_1006424f4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x30);
    FUN_10064249c();
  }
  return;
}




void FUN_100642524(void)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  if ((uint)DAT_101dbd440 != 0) {
    uVar3 = 0;
    uVar2 = (uint)DAT_101dbd440;
    do {
      plVar1 = *(long **)(DAT_101dbd448 + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = (uint)DAT_101dbd440;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (DAT_101dbd448 != 0) {
    DAT_101dbd440._0_4_ = 0;
  }
  return;
}




undefined4 FUN_10064258c(void)

{
  return (undefined4)DAT_101dc1cb8;
}




float FUN_10064259c(long *param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x48))();
  return *(float *)(param_1 + 9) * fVar1;
}




void FUN_1006425d0(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = DAT_101dc1cb8;
  local_38 = DAT_101dc1cb8;
  uVar1 = FUN_1006426a0(param_1,&local_38,&local_40,param_2,param_3,param_4,param_5);
  if (((((uVar1 & 1) != 0) || ((param_3 & 1) != 0)) && ((int)param_3 != 0)) &&
     (((int)param_2 == 0 || ((~*(uint *)((long)param_1 + 0x84) & 0xc) == 0)))) {
    local_50 = 0;
    local_48 = 0;
    (**(code **)(*param_1 + 0x70))(param_1,&local_48,&local_50);
    NEON_fminnm(local_38,local_48,4);
    NEON_fmaxnm(local_40,local_50,4);
  }
  return;
}




bool FUN_1006426a0(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  uint param_5,undefined8 param_6,int param_7)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_70;
  undefined8 local_68;
  
  *param_2 = DAT_101dc1cb8;
  *param_3 = DAT_101dc1cb8;
  plVar3 = (long *)param_1[5];
  if (plVar3 == (long *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = false;
    do {
      if ((((*(uint *)((long)plVar3 + 0x84) >> 6 & 1) != 0) || ((int)param_6 != 0)) &&
         (((uint)param_4 ^ 1 | (uint)(((*(uint *)((long)plVar3 + 0x84) ^ 0xffffffff) & 0xc) == 0))
          == 1)) {
        (**(code **)(*plVar3 + 0x70))(plVar3,&local_68,&local_70);
        fVar6 = (float)plVar3[9];
        fVar8 = (float)((ulong)plVar3[9] >> 0x20);
        fVar4 = (float)plVar3[8];
        fVar5 = (float)((ulong)plVar3[8] >> 0x20);
        local_68 = CONCAT44(fVar5 + fVar8 * (float)((ulong)local_68 >> 0x20),
                            fVar4 + fVar6 * (float)local_68);
        local_70 = CONCAT44(fVar5 + fVar8 * (float)((ulong)local_70 >> 0x20),
                            fVar4 + fVar6 * (float)local_70);
        if (bVar2) {
          uVar7 = NEON_fminnm(*param_2,local_68,4);
          *param_2 = uVar7;
          uVar7 = NEON_fmaxnm(*param_3,local_70,4);
          *param_3 = uVar7;
        }
        else {
          *param_2 = local_68;
          *param_3 = local_70;
        }
        if ((param_7 != 0) &&
           (iVar1 = FUN_1006426a0(plVar3,&local_68,&local_70,param_4,0,param_6,1), iVar1 != 0)) {
          fVar5 = (float)plVar3[9];
          fVar8 = (float)((ulong)plVar3[9] >> 0x20);
          fVar4 = (float)((ulong)local_68 >> 0x20) * fVar8;
          fVar6 = (float)local_70 * fVar5;
          fVar8 = (float)((ulong)local_70 >> 0x20) * fVar8;
          local_70 = CONCAT44(fVar8,fVar6);
          fVar9 = (float)plVar3[8];
          fVar10 = fVar9 + (float)local_68 * fVar5;
          fVar5 = (float)((ulong)plVar3[8] >> 0x20);
          uVar7 = NEON_fminnm(*param_2,CONCAT44(fVar5 + fVar4,fVar10),4);
          local_68 = CONCAT44(fVar4,fVar10);
          *param_2 = uVar7;
          uVar7 = NEON_fmaxnm(*param_3,CONCAT44(fVar5 + fVar8,fVar9 + fVar6),4);
          *param_3 = uVar7;
        }
        bVar2 = true;
      }
      plVar3 = (long *)plVar3[6];
    } while (plVar3 != (long *)0x0);
  }
  if (((param_5 & 1) != 0) &&
     (((uint)param_4 == 0 || ((*(byte *)((long)param_1 + 0x84) >> 2 & 1) != 0)))) {
    (**(code **)(*param_1 + 0x70))(param_1,&local_68,&local_70);
    if (bVar2 == false) {
      *param_2 = local_68;
      *param_3 = local_70;
    }
    else {
      uVar7 = NEON_fminnm(*param_2,local_68,4);
      *param_2 = uVar7;
      uVar7 = NEON_fmaxnm(*param_3,local_70,4);
      *param_3 = uVar7;
    }
  }
  return bVar2;
}




float FUN_100642888(long *param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x58))();
  return *(float *)(param_1 + 9) * fVar1;
}




void FUN_1006428bc(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = FUN_10003d5bc();
  (**(code **)(*param_1 + 0x70))(param_1,param_2,param_3);
  *param_2 = CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20) *
                      (float)((ulong)*param_2 >> 0x20),
                      (float)*(undefined8 *)(lVar1 + 0x10) * (float)*param_2);
  *param_3 = CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20) *
                      (float)((ulong)*param_3 >> 0x20),
                      (float)*(undefined8 *)(lVar1 + 0x10) * (float)*param_3);
  *param_2 = CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 8) >> 0x20) +
                      (float)((ulong)*param_2 >> 0x20),
                      (float)*(undefined8 *)(lVar1 + 8) + (float)*param_2);
  *param_3 = CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 8) >> 0x20) +
                      (float)((ulong)*param_3 >> 0x20),
                      (float)*(undefined8 *)(lVar1 + 8) + (float)*param_3);
  *param_2 = CONCAT44((int)(float)((ulong)*param_2 >> 0x20),(int)(float)*param_2);
  *param_3 = CONCAT44((int)(float)((ulong)*param_3 >> 0x20),(int)(float)*param_3);
  return;
}




void FUN_100642960(undefined1 param_1 [16],float param_2,long *param_3,float *param_4,float *param_5
                  )

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x48))();
  fVar2 = *(float *)(param_3 + 10);
  fVar3 = *(float *)((long)param_3 + 0x54) * -param_2;
  *param_4 = fVar1 * -fVar2;
  param_4[1] = fVar3;
  *param_5 = fVar1 * -fVar2 + fVar1;
  param_5[1] = fVar3 + param_2;
  return;
}




void FUN_1006429c4(long *param_1)

{
  undefined1 local_20 [8];
  undefined1 auStack_18 [8];
  
  (**(code **)(*param_1 + 0x68))(param_1,auStack_18,local_20);
  return;
}




undefined8 FUN_1006429fc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1006426a0();
  lVar2 = FUN_10003d5bc(param_1);
  *param_2 = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20) *
                      (float)((ulong)*param_2 >> 0x20),
                      (float)*(undefined8 *)(lVar2 + 0x10) * (float)*param_2);
  *param_3 = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20) *
                      (float)((ulong)*param_3 >> 0x20),
                      (float)*(undefined8 *)(lVar2 + 0x10) * (float)*param_3);
  *param_2 = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 8) >> 0x20) +
                      (float)((ulong)*param_2 >> 0x20),
                      (float)*(undefined8 *)(lVar2 + 8) + (float)*param_2);
  *param_3 = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 8) >> 0x20) +
                      (float)((ulong)*param_3 >> 0x20),
                      (float)*(undefined8 *)(lVar2 + 8) + (float)*param_3);
  *param_2 = CONCAT44((int)(float)((ulong)*param_2 >> 0x20),(int)(float)*param_2);
  *param_3 = CONCAT44((int)(float)((ulong)*param_3 >> 0x20),(int)(float)*param_3);
  return uVar1;
}




void FUN_100642a94(long *param_1,double *param_2,undefined8 *param_3)

{
  long lVar1;
  
  (**(code **)(*param_1 + 0x68))();
  if ((*(float *)(param_1 + 0xb) != 0.0) || (*(float *)((long)param_1 + 0x5c) != 0.0)) {
    lVar1 = FUN_10003d5bc(param_1);
    *param_2 = *param_2 -
               (double)CONCAT44((float)((ulong)param_1[0xb] >> 0x20) *
                                (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20),
                                (float)param_1[0xb] * (float)*(undefined8 *)(lVar1 + 0x10));
    *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) +
                        (float)((ulong)param_1[0xb] >> 0x20) *
                        (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20),
                        (float)*param_3 + (float)param_1[0xb] * (float)*(undefined8 *)(lVar1 + 0x10)
                       );
  }
  return;
}




void FUN_100642b14(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = param_2;
    return;
  }
  do {
    lVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (lVar1 == 0) break;
    plVar2 = (long *)(**(code **)(*plVar2 + 0x28))(plVar2);
  } while (plVar2 != (long *)0x0);
  FUN_10063eee4(plVar2,param_2);
  return;
}




void FUN_100642b7c(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)register0x00000008;
  while (param_2 != 0) {
    FUN_100642b14(param_1);
    param_2 = *plVar1;
    plVar1 = plVar1 + 1;
  }
  return;
}




bool FUN_100642bc8(long param_1)

{
  return *(long *)(param_1 + 0x38) != 0;
}




void FUN_100642bd8(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100642bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x80))(param_2,param_1);
  return;
}




void FUN_100642bf0(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  
  param_1[4] = param_2;
  lVar2 = *(long *)(param_2 + 0x28);
  if (lVar2 == 0) {
    *(long **)(param_2 + 0x28) = param_1;
  }
  else if (param_3 == 0) {
    *(long **)(param_2 + 0x28) = param_1;
    param_1[6] = lVar2;
  }
  else {
    do {
      lVar3 = lVar2;
      lVar2 = *(long *)(lVar3 + 0x30);
    } while (lVar2 != 0);
    *(long **)(lVar3 + 0x30) = param_1;
  }
  FUN_100644cf4(param_1);
  FUN_10064140c(&uStack_24,&local_28);
  FUN_100642c98(uStack_24,local_28,param_1);
  (**(code **)(*param_1 + 0xa8))(param_1);
  plVar1 = (long *)param_1[4];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xb8))(plVar1,param_1);
  }
  FUN_1000200a0(param_1);
  return;
}




void FUN_100642c98(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  
  (**(code **)(*param_3 + 200))();
  for (plVar1 = (long *)param_3[5]; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[6]) {
    (**(code **)(*plVar1 + 200))(param_1,param_2,plVar1);
    FUN_100642c98(param_1,param_2,plVar1);
  }
  return;
}




bool FUN_100642d08(long param_1)

{
  return *(long *)(param_1 + 0x20) != 0;
}




void FUN_100642d18(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = param_1[4];
  if (lVar1 == 0) {
    return;
  }
  plVar2 = *(long **)(lVar1 + 0x28);
  if (plVar2 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar3 = (long *)0x0;
    do {
      plVar4 = plVar2;
      if (plVar2 == param_1) {
        if (*(long **)(lVar1 + 0x28) == param_1) {
          *(long *)(lVar1 + 0x28) = param_1[6];
        }
        if (plVar3 == (long *)0x0) {
          plVar4 = (long *)0x0;
        }
        else {
          plVar3[6] = param_1[6];
          plVar4 = plVar3;
        }
      }
      plVar2 = (long *)plVar2[6];
      plVar3 = plVar4;
    } while (plVar2 != (long *)0x0);
    if (*(long *)(lVar1 + 0x28) != 0) goto joined_r0x000100642da0;
  }
  *(long **)(lVar1 + 0x28) = param_1;
joined_r0x000100642da0:
  if (plVar4 != (long *)0x0) {
    plVar4[6] = (long)param_1;
  }
  param_1[6] = 0;
                    /* WARNING: Could not recover jumptable at 0x000100642d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




int FUN_100642da8(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      lVar2 = *(long *)(lVar2 + 0x30);
    } while (lVar2 != 0);
    return iVar1;
  }
  return 0;
}




void FUN_100642dcc(undefined8 param_1,long *param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  uVar6 = *(uint *)((long)param_2 + 0x84);
  if ((uVar6 >> 3 & 1) != 0) {
    plVar4 = (long *)param_2[7];
    if (plVar4 != (long *)0x0) {
      do {
        iVar2 = (**(code **)(*plVar4 + 0x10))();
        (**(code **)(*(long *)param_2[7] + 0x18))(param_1,(long *)param_2[7],param_2);
        if (((long *)param_2[7] != (long *)0x0) &&
           (iVar3 = (**(code **)(*(long *)param_2[7] + 0x10))(), iVar3 != 0)) {
          plVar4 = (long *)param_2[7];
          lVar5 = (**(code **)(*plVar4 + 0x28))(plVar4);
          param_2[7] = lVar5;
          FUN_10063eec0(plVar4);
        }
      } while ((iVar2 != 0) && (plVar4 = (long *)param_2[7], plVar4 != (long *)0x0));
      uVar6 = *(uint *)((long)param_2 + 0x84);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      (**(code **)(*param_2 + 0x90))(param_2);
      *(uint *)((long)param_2 + 0x84) = *(uint *)((long)param_2 + 0x84) & 0xfffffffd;
    }
    (**(code **)(*param_2 + 0x88))(param_1,param_2);
    lVar5 = param_2[5];
    while (lVar5 != 0) {
      lVar7 = *(long *)(lVar5 + 0x30);
      pbVar1 = (byte *)(lVar5 + 0x84);
      lVar5 = lVar7;
      if ((*pbVar1 >> 3 & 1) != 0) {
        FUN_100642dcc(param_1);
      }
    }
  }
  return;
}




long FUN_100642ed4(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_60;
  float local_5c;
  float fStack_58;
  float local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  if ((~*(uint *)(param_3 + 0x84) & 0xc) == 0) {
    plVar8 = *(long **)(param_3 + 0x28);
    if (plVar8 != (long *)0x0) {
      lVar7 = 0;
      do {
        if (((~*(uint *)((long)plVar8 + 0x84) & 0xc) == 0) &&
           (lVar6 = (**(code **)(*plVar8 + 0xd0))(param_1,param_2,plVar8,1), lVar6 != 0)) {
          lVar7 = lVar6;
        }
        plVar8 = (long *)plVar8[6];
      } while (plVar8 != (long *)0x0);
      if (lVar7 != 0) {
        return lVar7;
      }
    }
    if ((*(byte *)(param_3 + 0x84) >> 4 & 1) != 0) {
      FUN_100642a94(param_3,&local_48,&local_50);
      if (param_4 != 0) {
        FUN_10064142c(&local_54,&fStack_58);
        FUN_100641518(&local_5c,&local_60);
        NEON_fminnm(local_48,local_54 * local_5c);
        NEON_fminnm(uStack_44,fStack_58 * local_60);
        local_48 = (undefined4)DAT_101dc1cb8;
        uStack_44 = DAT_101dc1cb8._4_4_;
        NEON_fminnm(local_50,local_54 * local_5c);
        NEON_fminnm(uStack_4c,fStack_58 * local_60);
        local_50 = (undefined4)DAT_101dc1cb8;
        uStack_4c = DAT_101dc1cb8._4_4_;
      }
      lVar7 = FUN_10003d5bc(param_3);
      fVar9 = (float)(int)*(short *)(lVar7 + 0x1c);
      fVar11 = (float)(int)*(short *)(lVar7 + 0x1e);
      NEON_fminnm(local_48,(float)(int)*(short *)(lVar7 + 0x20));
      fVar12 = (float)NEON_fminnm(local_50,(float)(int)*(short *)(lVar7 + 0x20));
      NEON_fminnm(uStack_44,(float)(int)*(short *)(lVar7 + 0x22));
      fVar10 = fVar9;
      if (fVar9 <= fVar12) {
        fVar10 = fVar12;
      }
      fVar13 = (float)NEON_fminnm(uStack_4c,(float)(int)*(short *)(lVar7 + 0x22));
      fVar12 = fVar11;
      if (fVar11 <= fVar13) {
        fVar12 = fVar13;
      }
      fVar13 = (float)param_2;
      bVar1 = true;
      bVar4 = false;
      if (fVar13 <= fVar12) {
        bVar1 = false;
        bVar4 = true;
        if (!NAN(fVar13) && !NAN(fVar11)) {
          bVar1 = fVar13 < fVar11;
          bVar4 = false;
        }
      }
      bVar2 = false;
      bVar3 = false;
      bVar5 = false;
      fVar11 = (float)param_1;
      if (bVar1 == bVar4) {
        bVar2 = false;
        bVar3 = false;
        bVar5 = true;
        if (!NAN(fVar11) && !NAN(fVar10)) {
          bVar2 = fVar11 < fVar10;
          bVar3 = fVar11 == fVar10;
          bVar5 = false;
        }
      }
      bVar1 = true;
      bVar4 = false;
      if (bVar3 || bVar2 != bVar5) {
        bVar1 = false;
        bVar4 = true;
        if (!NAN(fVar11) && !NAN(fVar9)) {
          bVar1 = fVar11 < fVar9;
          bVar4 = false;
        }
      }
      if (bVar1 != bVar4) {
        return 0;
      }
      return param_3;
    }
  }
  return 0;
}




void FUN_100643064(long *param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  float fVar5;
  
  if ((*(byte *)((long)param_1 + 0x84) & 1) != 0) {
    lVar4 = param_1[8];
    fVar2 = (float)*(undefined8 *)(param_2 + 0x10);
    fVar1 = fVar2 * (float)param_1[9];
    fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    fVar3 = fVar5 * (float)((ulong)param_1[9] >> 0x20);
    param_1[0xd] = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) +
                            fVar5 * (float)((ulong)lVar4 >> 0x20),
                            (float)*(undefined8 *)(param_2 + 8) + fVar2 * (float)lVar4);
    param_1[0xe] = CONCAT44(fVar3,fVar1);
    fVar2 = (float)(**(code **)(*param_1 + 0x48))();
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xd) - fVar2 * *(float *)(param_1 + 10) * fVar1
    ;
    *(float *)((long)param_1 + 100) =
         *(float *)((long)param_1 + 0x6c) - *(float *)((long)param_1 + 0x54) * (float)lVar4 * fVar3;
    fVar1 = (float)NEON_fminnm((float)(*(uint *)((long)param_1 + 0x84) >> 7 & 0xff) * 0.003921569,
                               0x3f800000);
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    *(float *)(param_1 + 0xf) = fVar1 * *(float *)(param_2 + 0x18);
    *(undefined2 *)((long)param_1 + 0x7c) = *(undefined2 *)(param_2 + 0x1c);
    *(undefined2 *)((long)param_1 + 0x7e) = *(undefined2 *)(param_2 + 0x1e);
    *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x20);
    *(undefined2 *)((long)param_1 + 0x82) = *(undefined2 *)(param_2 + 0x22);
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffe;
  }
  return;
}




void FUN_100643134(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0x28); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[6]) {
    if ((~*(uint *)((long)plVar1 + 0x84) & 0xc) == 0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}




void FUN_1006431ac(long param_1)

{
  if ((*(uint *)(param_1 + 0x84) >> 1 & 1) == 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 2;
  }
  return;
}




void FUN_1006431c0(void)

{
  DAT_101ea58d0 = 0xff;
  DAT_101ea58d2 = 0xffff;
  DAT_101ea58d4 = 0xffff;
  DAT_101dbd440 = 0;
  DAT_101dbd448 = 0;
  ___cxa_atexit(FUN_100642140,&DAT_101dbd440,0x100000000);
  return;
}




void FUN_100643200(void)

{
  FUN_1010b3fec(2);
  return;
}




undefined8 * FUN_100643208(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  lVar1 = 0x20;
  lVar2 = 1;
  do {
    *(short *)((long)param_1 + lVar1) = (short)lVar2;
    lVar1 = lVar1 + 0x28;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x400);
  param_1[0x1404] = 0x3ff0000;
  *(undefined4 *)(param_1 + 0x1406) = 0;
  FUN_10064326c(param_1,0x40);
  return param_1;
}




void FUN_10064326c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        lVar3 = lVar3 + -0x10;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




undefined8 * FUN_1006432e8(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)param_1 = 0;
  }
  lVar2 = 0x20;
  lVar3 = 1;
  do {
    *(short *)((long)param_1 + lVar2) = (short)lVar3;
    lVar2 = lVar2 + 0x28;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x400);
  param_1[0x1404] = 0x3ff0000;
  *(undefined4 *)(param_1 + 0x1406) = 0;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
    pvVar1 = (void *)param_1[1];
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




void FUN_100643368(float param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  double *pdVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  double dVar12;
  
  fVar11 = (float)param_2[0x280c];
  param_2[0x280c] = (uint)(fVar11 + param_1);
  uVar2 = *param_2;
  if (uVar2 != 0) {
    uVar8 = 0;
    pdVar5 = *(double **)(param_2 + 2);
    do {
      uVar10 = uVar8;
      if ((double)(fVar11 + param_1) < *pdVar5) break;
      uVar8 = uVar8 + 1;
      pdVar5 = pdVar5 + 2;
      uVar10 = (ulong)uVar2;
    } while (uVar2 != uVar8);
    uVar6 = (uint)uVar10;
    if (uVar6 != 0) {
      iVar7 = uVar2 - uVar6;
      FUN_100643588(param_2 + 4,uVar10,0,0);
      _memmove(*(void **)(param_2 + 6),*(void **)(param_2 + 2),(ulong)(uVar6 << 4));
      if (iVar7 == 0) {
        if (*(long *)(param_2 + 2) != 0) {
          *param_2 = 0;
        }
      }
      else {
        _memmove(*(void **)(param_2 + 2),
                 (void *)((long)*(void **)(param_2 + 2) + (uVar10 & 0xffffffff) * 0x10),
                 (ulong)(uint)(iVar7 * 0x10));
        FUN_100643588(param_2,iVar7,0,0);
      }
      puVar1 = param_2 + 8;
      lVar9 = 8;
      uVar10 = uVar10 & 0xffffffff;
      do {
        uVar8 = (ulong)*(ushort *)(*(long *)(param_2 + 6) + lVar9);
        if (*(code **)(puVar1 + uVar8 * 10 + 2) != (code *)0x0) {
          dVar12 = (double)param_1;
          if (0.0 < (float)param_2[0x280c] - (float)puVar1[uVar8 * 10 + 8]) {
            dVar12 = (double)(float)param_2[0x280c] - *(double *)(puVar1 + uVar8 * 10 + 6);
          }
          (**(code **)(puVar1 + uVar8 * 10 + 2))((float)dVar12,*(undefined8 *)(puVar1 + uVar8 * 10))
          ;
        }
        lVar9 = lVar9 + 0x10;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      lVar9 = 0;
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      do {
        uVar2 = *(uint *)(*(long *)(param_2 + 6) + lVar9 + 8);
        uVar8 = (ulong)uVar2 & 0xffff;
        if (((int)uVar2 < 0) && (DAT_101ea58d8 != 0)) {
          FUN_100643638(puVar1[uVar8 * 10 + 8],DAT_101ea58d8,puVar1 + uVar8 * 10,
                        *(undefined8 *)(puVar1 + uVar8 * 10 + 4),1);
        }
        iVar7 = (int)(puVar1 + uVar8 * 10);
        if ((short)param_2[0x2808] == -1) {
          sVar4 = (short)((uint)(iVar7 - (int)puVar1) >> 3) * -0x3333;
          *(short *)((long)param_2 + 0xa022) = sVar4;
          *(short *)(param_2 + 0x2808) = sVar4;
        }
        else {
          uVar3 = *(ushort *)((long)param_2 + 0xa022);
          sVar4 = (short)((uint)(iVar7 - (int)puVar1) >> 3) * -0x3333;
          *(short *)((long)param_2 + 0xa022) = sVar4;
          *(short *)(puVar1 + (ulong)uVar3 * 10) = sVar4;
        }
        param_2[0x2809] = param_2[0x2809] - 1;
        lVar9 = lVar9 + 0x10;
      } while ((ulong)uVar6 * 0x10 - lVar9 != 0);
      if (*(long *)(param_2 + 6) != 0) {
        param_2[4] = 0;
      }
    }
  }
  return;
}




void FUN_100643588(uint *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = (uint)param_2;
  if (uVar2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < uVar2) {
      FUN_10064326c(param_1,param_2);
    }
    uVar1 = *param_1;
    if (uVar1 < uVar2) {
      lVar3 = (ulong)uVar1 << 4;
      lVar4 = (param_2 & 0xffffffff) - (ulong)uVar1;
      do {
        lVar5 = *(long *)(param_1 + 2);
        *(undefined8 *)(lVar5 + lVar3) = param_3;
        ((undefined8 *)(lVar5 + lVar3))[1] = param_4;
        lVar3 = lVar3 + 0x10;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_100643618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_101ea58d8 != 0) {
    FUN_100643638(DAT_101ea58d8,param_1,param_2,param_3);
    return;
  }
  return;
}




void FUN_100643638(float param_1,uint *param_2,undefined8 *param_3,undefined8 param_4,int param_5)

{
  uint *puVar1;
  double *pdVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined2 uVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  double dVar11;
  float fVar12;
  undefined8 uVar13;
  
  uVar3 = (ushort)param_2[0x2808];
  uVar4 = (ulong)uVar3;
  if (uVar4 != 0xffff) {
    puVar1 = param_2 + 8;
    puVar10 = puVar1 + uVar4 * 10;
    if (uVar3 == *(ushort *)((long)param_2 + 0xa022)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = (undefined2)*puVar10;
    }
    *(undefined2 *)(param_2 + 0x2808) = uVar7;
    puVar10[0] = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    param_2[0x2809] = param_2[0x2809] + 1;
    fVar12 = (float)param_2[0x280c];
    *(double *)(puVar1 + uVar4 * 10 + 6) = (double)fVar12;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    puVar1[uVar4 * 10 + 8] = (uint)param_1;
    uVar13 = *param_3;
    *(undefined8 *)(puVar10 + 2) = param_3[1];
    *(undefined8 *)puVar10 = uVar13;
    *(undefined8 *)(puVar1 + uVar4 * 10 + 4) = param_4;
    uVar8 = *param_2;
    uVar4 = (ulong)uVar8;
    FUN_100643588(param_2,uVar8 + 1,0,0);
    dVar11 = (double)(fVar12 + param_1);
    if (uVar8 != 0) {
      lVar5 = (ulong)(uVar8 - 1) << 4;
      lVar6 = uVar4 << 4;
      do {
        lVar9 = *(long *)(param_2 + 2);
        if (*(double *)(lVar9 + lVar5) <= dVar11) goto LAB_100643730;
        uVar13 = *(undefined8 *)(lVar9 + lVar5);
        ((undefined8 *)(lVar9 + lVar6))[1] = ((undefined8 *)(lVar9 + lVar5))[1];
        *(undefined8 *)(lVar9 + lVar6) = uVar13;
        lVar5 = lVar5 + -0x10;
        lVar6 = lVar6 + -0x10;
        uVar4 = uVar4 - 1;
      } while ((int)uVar4 != 0);
    }
    uVar4 = 0;
LAB_100643730:
    lVar5 = (uVar4 & 0xffffffff) * 0x10;
    pdVar2 = (double *)(*(long *)(param_2 + 2) + lVar5);
    *pdVar2 = dVar11;
    *(uint *)(pdVar2 + 1) =
         *(uint *)(pdVar2 + 1) & 0x80000000 |
         ((uint)((int)puVar10 - (int)puVar1) >> 3) * -0x33333333 & 0xffff;
    lVar5 = *(long *)(param_2 + 2) + lVar5;
    uVar8 = 0x80000000;
    if (param_5 == 0) {
      uVar8 = 0;
    }
    *(uint *)(lVar5 + 8) = uVar8 | *(uint *)(lVar5 + 8) & 0x7fffffff;
  }
  return;
}




void FUN_10064379c(int *param_1,long *param_2)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  
  piVar9 = param_1 + 8;
  uVar4 = *param_1 - 1;
  if (-1 < (int)uVar4) {
    do {
      uVar5 = (ulong)*(ushort *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x10 + 8);
      if ((*(long *)(piVar9 + uVar5 * 10) == *param_2) &&
         (*(long *)(piVar9 + uVar5 * 10 + 2) == param_2[1])) {
        lVar6 = *(long *)(param_1 + 2) + (ulong)uVar4 * 0x10;
        FUN_100643abc(param_1,lVar6,lVar6 + 0x10);
        iVar10 = (int)(piVar9 + uVar5 * 10);
        if ((short)param_1[0x2808] == -1) {
          sVar3 = (short)((uint)(iVar10 - (int)piVar9) >> 3) * -0x3333;
          *(short *)((long)param_1 + 0xa022) = sVar3;
          *(short *)(param_1 + 0x2808) = sVar3;
        }
        else {
          uVar2 = *(ushort *)((long)param_1 + 0xa022);
          sVar3 = (short)((uint)(iVar10 - (int)piVar9) >> 3) * -0x3333;
          *(short *)((long)param_1 + 0xa022) = sVar3;
          *(short *)(piVar9 + (ulong)uVar2 * 10) = sVar3;
        }
        param_1[0x2809] = param_1[0x2809] + -1;
      }
      uVar4 = uVar4 - 1;
    } while (-1 < (int)uVar4);
  }
  uVar4 = param_1[4];
  if (uVar4 != 0) {
    uVar5 = 0;
    lVar6 = 8;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 6) + lVar6);
      uVar8 = (ulong)uVar1 & 0xffff;
      plVar7 = (long *)(piVar9 + uVar8 * 10);
      if ((*plVar7 == *param_2) && (*(long *)(piVar9 + uVar8 * 10 + 2) == param_2[1])) {
        *(uint *)(*(long *)(param_1 + 6) + lVar6) = uVar1 & 0x7fffffff;
        *plVar7 = 0;
        plVar7[1] = 0;
        uVar4 = param_1[4];
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (uVar5 < uVar4);
  }
  return;
}




void FUN_1006438f8(int *param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  int iVar9;
  
  piVar8 = param_1 + 8;
  uVar4 = *param_1 - 1;
  if (-1 < (int)uVar4) {
    do {
      uVar2 = *(ushort *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x10 + 8);
      if (*(long *)(piVar8 + (ulong)uVar2 * 10) == param_2) {
        lVar6 = *(long *)(param_1 + 2) + (ulong)uVar4 * 0x10;
        FUN_100643abc(param_1,lVar6,lVar6 + 0x10);
        iVar9 = (int)(piVar8 + (ulong)uVar2 * 10);
        if ((short)param_1[0x2808] == -1) {
          sVar3 = (short)((uint)(iVar9 - (int)piVar8) >> 3) * -0x3333;
          *(short *)((long)param_1 + 0xa022) = sVar3;
          *(short *)(param_1 + 0x2808) = sVar3;
        }
        else {
          uVar2 = *(ushort *)((long)param_1 + 0xa022);
          sVar3 = (short)((uint)(iVar9 - (int)piVar8) >> 3) * -0x3333;
          *(short *)((long)param_1 + 0xa022) = sVar3;
          *(short *)(piVar8 + (ulong)uVar2 * 10) = sVar3;
        }
        param_1[0x2809] = param_1[0x2809] + -1;
      }
      uVar4 = uVar4 - 1;
    } while (-1 < (int)uVar4);
  }
  uVar4 = param_1[4];
  if (uVar4 != 0) {
    uVar5 = 0;
    lVar6 = 8;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 6) + lVar6);
      plVar7 = (long *)(piVar8 + ((ulong)uVar1 & 0xffff) * 10);
      if (*plVar7 == param_2) {
        *(uint *)(*(long *)(param_1 + 6) + lVar6) = uVar1 & 0x7fffffff;
        *plVar7 = 0;
        plVar7[1] = 0;
        uVar4 = param_1[4];
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (uVar5 < uVar4);
  }
  return;
}




void FUN_100643a24(void)

{
  operator_new(0xa040);
  DAT_101ea58d8 = FUN_100643208();
  return;
}




void FUN_100643a48(void)

{
  void *pvVar1;
  
  if (DAT_101ea58d8 != 0) {
    pvVar1 = (void *)FUN_1006432e8();
    operator_delete(pvVar1);
  }
  DAT_101ea58d8 = 0;
  return;
}




void FUN_100643a78(void)

{
  if (DAT_101ea58d8 != 0) {
    FUN_100643368();
    return;
  }
  return;
}




void FUN_100643a8c(undefined8 param_1)

{
  if (DAT_101ea58d8 != 0) {
    FUN_10064379c(DAT_101ea58d8,param_1);
    return;
  }
  return;
}




void FUN_100643aa4(undefined8 param_1)

{
  if (DAT_101ea58d8 != 0) {
    FUN_1006438f8(DAT_101ea58d8,param_1);
    return;
  }
  return;
}




void FUN_100643abc(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 4);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x10);
    if (puVar1 != param_3) {
      do {
        puVar2 = param_3 + 2;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2 = param_2 + 2;
        param_3 = puVar2;
      } while (puVar2 != puVar1);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




long FUN_100643b2c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  lVar2 = FUN_100650864();
  auVar4 = NEON_fmov(0xbf800000,4);
  *(long *)(lVar2 + 0x1a8) = auVar4._8_8_;
  *(long *)(lVar2 + 0x1a0) = auVar4._0_8_;
  uVar3 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(lVar2 + 0x1b0) = uVar3;
  lVar2 = 0x1b8;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x4b8);
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  if (DAT_101dbd2d8 != '\0') {
    uVar3 = thunk_FUN_10064dde8();
    FUN_10064e524(param_1,uVar3);
    FUN_100654488(param_1,1);
  }
  return param_1;
}




long thunk_FUN_100643b2c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  lVar2 = FUN_100650864();
  auVar4 = NEON_fmov(0xbf800000,4);
  *(long *)(lVar2 + 0x1a8) = auVar4._8_8_;
  *(long *)(lVar2 + 0x1a0) = auVar4._0_8_;
  uVar3 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(lVar2 + 0x1b0) = uVar3;
  lVar2 = 0x1b8;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x4b8);
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  if (DAT_101dbd2d8 != '\0') {
    uVar3 = thunk_FUN_10064dde8();
    FUN_10064e524(param_1,uVar3);
    FUN_100654488(param_1,1);
  }
  return param_1;
}




void thunk_FUN_10064e2bc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10064e2bc_1014a5ca0;
  if (param_1[0x11] != 0) {
    FUN_10064e04c();
    param_1[0x11] = 0;
  }
  FUN_10064221c(param_1);
  return;
}




void FUN_100643bb4(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x1b0) = param_1;
  *(undefined4 *)(param_3 + 0x1b4) = param_2;
  return;
}




void FUN_100643bc0(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1b0);
  *param_3 = *(undefined4 *)(param_1 + 0x1b4);
  return;
}




void FUN_100643bd4(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x1a0) = param_1;
  *(undefined4 *)(param_3 + 0x1a4) = param_2;
  return;
}




void FUN_100643be0(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1a0);
  *param_3 = *(undefined4 *)(param_1 + 0x1a4);
  return;
}




undefined4 FUN_100643bf4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1a0);
}




undefined4 FUN_100643bfc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1a4);
}




void FUN_100643c04(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x1a8) = param_1;
  *(undefined4 *)(param_3 + 0x1ac) = param_2;
  return;
}




void FUN_100643c10(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1a8);
  *param_3 = *(undefined4 *)(param_1 + 0x1ac);
  return;
}




undefined4 FUN_100643c24(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1ac);
}




void FUN_100643c2c(void)

{
  return;
}




void FUN_100643c30(undefined8 param_1,long *param_2)

{
  long *plVar1;
  
  (**(code **)(*param_2 + 0x80))(param_2,param_1,1);
  if (DAT_101dbd2d8 != '\0') {
    plVar1 = (long *)FUN_10064e5a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100643c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1,param_2);
    return;
  }
  return;
}




long FUN_100643c98(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if ((param_1 != 0) && (0xffff < (uint)(param_2 << 0x10 ^ *(int *)(param_1 + 0x84) << 1))) {
    uVar2 = 0xffff0000;
    lVar3 = param_1;
    do {
      if (((uVar2 & 0xffff) < uVar2 >> 0x10) && (param_1 = *(long *)(lVar3 + 0x28), param_1 != 0)) {
        uVar2 = uVar2 & 0xffff0000 | uVar2 + 1 & 0xffff;
      }
      else {
        if ((uVar2 & 0xffff) == 0) {
          return 0;
        }
        param_1 = *(long *)(lVar3 + 0x30);
        if (param_1 == 0) {
          lVar3 = *(long *)(lVar3 + 0x20);
          if (lVar3 == 0) {
            return 0;
          }
          uVar1 = uVar2 - 1 & 0xffff;
          if (uVar1 == 0) {
            return 0;
          }
          uVar2 = uVar1 | uVar2 & 0xffff0000;
          while (param_1 = *(long *)(lVar3 + 0x30), param_1 == 0) {
            if ((uVar2 - 1 & 0xffff) == 0) {
              return 0;
            }
            lVar3 = *(long *)(lVar3 + 0x20);
            uVar2 = uVar2 & 0xffff0000 | uVar2 - 1 & 0xffff;
            if (lVar3 == 0) {
              return 0;
            }
          }
        }
      }
      lVar3 = param_1;
    } while ((uint)(param_2 << 0x10 ^ *(int *)(param_1 + 0x84) << 1) >> 0x10 != 0);
  }
  return param_1;
}




void FUN_100643d44(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_1004d2524(param_2);
  sVar1 = FUN_100015208(param_2,uVar2,0x1234);
  FUN_100643c98(param_1,(int)sVar1);
  return;
}




void FUN_100643d84(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = 0;
  plVar4 = (long *)(param_1 + 0x1b8);
  iVar2 = -1;
  do {
    if (*plVar4 == param_2) goto LAB_100643ddc;
    iVar1 = (int)lVar3;
    if (iVar2 != -1 || *plVar4 != 0) {
      iVar1 = iVar2;
    }
    lVar3 = lVar3 + 1;
    plVar4 = plVar4 + 3;
    iVar2 = iVar1;
  } while (lVar3 != 0x20);
  if (iVar1 != -1) {
    lVar3 = param_1 + (long)iVar1 * 0x18;
    plVar4 = (long *)(lVar3 + 0x1b8);
    *(long *)(lVar3 + 0x1b8) = param_2;
LAB_100643ddc:
    FUN_100643df8(param_1,plVar4);
    *(undefined1 *)(plVar4 + 2) = 1;
  }
  return;
}




void FUN_100643df8(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [48];
  
  lVar1 = param_2[1];
  if (lVar1 != param_3) {
    uVar2 = *param_2;
    if (param_3 != 0) {
      FUN_100644f34(auStack_60,DAT_101dbd4a0,param_3,uVar2);
      FUN_100644c34(param_3,auStack_60,1);
      param_2[1] = param_3;
    }
    if (lVar1 != 0) {
      FUN_100644f34(auStack_60,DAT_101dbd4a4,lVar1,uVar2);
      FUN_100644c34(lVar1,auStack_60,1);
    }
    if (param_3 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined1 *)(param_2 + 2) = 0;
    }
  }
  return;
}




void FUN_100643ea8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(long *)(param_1 + 0x1b8 + lVar1) == param_2) {
      FUN_100643df8(param_1,param_1 + lVar1 + 0x1b8,0);
      return;
    }
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x300);
  return;
}




void FUN_100643edc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  lVar2 = param_1;
  do {
    lVar1 = param_1 + lVar3;
    if ((*(long *)(lVar1 + 0x1b8) != 0) && (*(long *)(lVar1 + 0x1c0) == param_2)) {
      lVar2 = FUN_100643df8(lVar2,lVar1 + 0x1b8,0);
    }
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0x300);
  return;
}




void FUN_100643f38(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = 0;
  lVar1 = param_1 + 0x1b8;
  do {
    plVar2 = (long *)(lVar1 + lVar3);
    if (*plVar2 != 0) {
      param_1 = FUN_100643df8(param_1,plVar2,0);
    }
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0x300);
  return;
}




undefined8 FUN_100643f78(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(long *)(param_1 + lVar1 + 0x1c0) == param_2) {
      return *(undefined8 *)(param_1 + lVar1 + 0x1b8);
    }
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x300);
  return 0;
}




bool FUN_100643fa8(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x1c0) == param_2) {
    return true;
  }
  plVar2 = (long *)(param_1 + 0x1d8);
  uVar1 = 0;
  do {
    uVar3 = uVar1;
    if (uVar3 == 0x1f) break;
    lVar4 = *plVar2;
    plVar2 = plVar2 + 3;
    uVar1 = uVar3 + 1;
  } while (lVar4 != param_2);
  return uVar3 < 0x1f;
}




bool FUN_100643fec(long param_1,long param_2)

{
  return *(long *)(param_1 + 0x4b8) == param_2;
}




void FUN_100643ffc(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x4b8) != param_2) {
    return;
  }
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  return;
}




void FUN_100644014(undefined8 param_1,float param_2,long param_3)

{
  int iVar1;
  float fVar2;
  undefined1 auStack_58 [40];
  
  fVar2 = (float)FUN_10064e3cc();
  if (*(float *)(param_3 + 0x1b0) == fVar2) {
    fVar2 = *(float *)(param_3 + 0x1b4);
    if (fVar2 == param_2) goto LAB_100644064;
  }
  else {
    fVar2 = *(float *)(param_3 + 0x1b4);
  }
  FUN_100642c98(*(float *)(param_3 + 0x1b0),fVar2,param_3);
LAB_100644064:
  FUN_100643a78(param_1);
  FUN_100642170(auStack_58);
  FUN_100642dcc(param_1,param_3,auStack_58);
  iVar1 = FUN_10109c4dc();
  if (iVar1 != 0) {
    FUN_1006440b8(param_3);
  }
  iVar1 = FUN_10109c574();
  if (iVar1 != 0) {
    FUN_1006447a0(param_3);
  }
  return;
}




void FUN_1006447a0(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_b0 [64];
  
  iVar6 = FUN_10109c588();
  if ((iVar6 != 0) &&
     (iVar6 = FUN_10109c588(), uVar5 = DAT_101dbd48c, uVar4 = DAT_101dbd488, uVar3 = DAT_101dbd484,
     iVar6 != 0)) {
    uVar13 = 0;
    do {
      puVar7 = (uint *)FUN_10109c59c(uVar13);
      lVar12 = 0;
      uVar17 = puVar7[1];
      uVar18 = puVar7[2];
      lVar14 = *(long *)(puVar7 + 6);
      do {
        lVar1 = param_1 + lVar12;
        lVar16 = *(long *)(lVar1 + 0x1b8);
        if (lVar16 == lVar14) {
          puVar15 = (undefined8 *)(lVar1 + 0x1b8);
          if (*(char *)(lVar1 + 0x1c8) == '\0') goto LAB_10064485c;
          puVar8 = *(uint **)(param_1 + lVar12 + 0x1c0);
          puVar9 = puVar7;
          goto LAB_100644874;
        }
        lVar12 = lVar12 + 0x18;
      } while (lVar12 != 0x300);
      puVar15 = (undefined8 *)0x0;
LAB_10064485c:
      puVar8 = (uint *)FUN_100654490(uVar17,uVar18,param_1,1);
      puVar9 = puVar8;
LAB_100644874:
      iVar6 = (int)*puVar7 >> 3;
      if (iVar6 == 1) {
        uVar10 = 1;
LAB_100644898:
        if (((uVar10 == 0) || (puVar8 == (uint *)0x0)) || (lVar16 == lVar14)) goto LAB_1006448d8;
        lVar12 = 0;
        while (*(long *)(param_1 + 0x1b8 + lVar12) != 0) {
          lVar12 = lVar12 + 0x18;
          if (lVar12 == 0x300) {
            return;
          }
        }
        puVar15 = (undefined8 *)(param_1 + 0x1b8 + lVar12);
        *puVar15 = *(undefined8 *)(puVar7 + 6);
        puVar9 = (uint *)FUN_100643df8(puVar9,puVar15,puVar8);
joined_r0x00010064491c:
        bVar2 = true;
        if (puVar8 != (uint *)0x0) {
LAB_100644920:
          uVar10 = *puVar7;
          if (((int)uVar10 >> 3 == 1) ||
             ((uVar11 = uVar10, (int)uVar10 >> 3 == -1 && ((uVar10 & 1) != 0)))) {
            FUN_100644d70(uVar17,uVar18,0,0,auStack_b0,uVar3,0,0,0,*(undefined8 *)(puVar7 + 6),
                          uVar10 >> 1 & 1,0,0);
            puVar9 = (uint *)FUN_100644c34(puVar8,auStack_b0,1);
            uVar11 = *puVar7;
          }
          if ((0xf < (int)uVar11) && ((uVar11 & 1) != 0)) {
            FUN_100644d70(uVar17,uVar18,0,0,auStack_b0,uVar4,0,0,0,*(undefined8 *)(puVar7 + 6),
                          uVar10 >> 1 & 1,0,0);
            puVar9 = (uint *)FUN_100644c34(puVar8,auStack_b0,1);
            uVar11 = *puVar7;
          }
          if ((uVar11 & 1) == 0) {
            FUN_100644d70(uVar17,uVar18,0,0,auStack_b0,uVar5,0,0,0,*(undefined8 *)(puVar7 + 6),
                          uVar10 >> 1 & 1,0,0);
            puVar9 = (uint *)FUN_100644c34(puVar8,auStack_b0,1);
          }
        }
        if ((bVar2) && ((*puVar7 & 1) == 0)) {
          FUN_100643df8(puVar9,puVar15,0);
        }
      }
      else {
        if (iVar6 == -1) {
          uVar10 = *puVar7 & 1;
          goto LAB_100644898;
        }
LAB_1006448d8:
        if (puVar15 != (undefined8 *)0x0) {
          puVar9 = (uint *)FUN_100643df8(puVar9,puVar15,puVar8);
          goto joined_r0x00010064491c;
        }
        if (puVar8 != (uint *)0x0) {
          puVar15 = (undefined8 *)0x0;
          bVar2 = false;
          goto LAB_100644920;
        }
      }
      uVar13 = uVar13 + 1;
      uVar17 = FUN_10109c588();
    } while (uVar13 < uVar17);
  }
  return;
}




void FUN_100644a84(long param_1)

{
  if ((*(byte *)(param_1 + 0x84) >> 2 & 1) == 0) {
    return;
  }
  FUN_100650884();
  return;
}




int FUN_100644a94(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_1004d2524();
  uVar2 = FUN_100015208(param_1,uVar1,0x12345678);
  return (uVar2 & 0xffffff) + 0x80;
}




void FUN_100644ad0(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_1014a5630;
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}




void FUN_100644aec(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_1014a5630;
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}




void FUN_100644b08(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}




void FUN_100644b14(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}




undefined1 FUN_100644b1c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}




void FUN_100644b24(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




undefined8 FUN_100644b2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_100644b34(void)

{
  return;
}




bool FUN_100644b3c(undefined8 param_1,int param_2)

{
  return DAT_101dbd450 == param_2;
}




void FUN_100644b50(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_1004d2524("Composite::EVENT");
  uVar2 = FUN_100015208("Composite::EVENT",uVar1,0x12345678);
  DAT_101dbd450 = (uVar2 & 0xffffff) + 0x80;
  return;
}




void FUN_100644b9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a5658;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}




void FUN_100644bb0(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    if (*(int *)(*(long *)(param_1 + 0x10) + (ulong)uVar1 * 0x30 + 0x28) == param_2) {
      lVar2 = *(long *)(param_1 + 0x10) + (ulong)uVar1 * 0x30;
      FUN_100015664((uint *)(param_1 + 8),lVar2,lVar2 + 0x30);
    }
  }
  return;
}




void FUN_100644c24(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}




void FUN_100644c34(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  do {
    uVar2 = (ulong)*(uint *)(param_1 + 8);
    if (*(uint *)(param_1 + 8) != 0) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar3);
        if (*(int *)(puVar1 + 5) == *(int *)(param_2 + 8)) {
          FUN_100644b08(param_2);
          (*(code *)*puVar1)(puVar1[1],puVar1[2],puVar1[3],param_2,puVar1[4]);
          uVar2 = (ulong)*(uint *)(param_1 + 8);
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x30;
      } while (uVar4 < uVar2);
    }
    if ((param_3 & 1) == 0) {
      return;
    }
    uVar2 = FUN_100644b1c(param_2);
    if ((uVar2 & 1) != 0) {
      return;
    }
    param_1 = *(long *)(param_1 + 0x18);
    param_3 = 1;
  } while (param_1 != 0);
  return;
}




undefined8 FUN_100644cdc(void)

{
  return 0;
}




undefined8 FUN_100644ce4(void)

{
  return 1;
}




undefined8 FUN_100644cec(void)

{
  return 1;
}




void FUN_100644cf4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




undefined8 * FUN_100644cfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a5658;
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}




void FUN_100644d38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a5658;
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}




void FUN_100644d70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,ushort param_7,int param_8,int param_9,
                  undefined8 param_10,int param_11,int param_12,char param_13)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  
  puVar1 = (undefined8 *)FUN_100644ad0(param_5,param_6,0);
  *puVar1 = &PTR_FUN_10144eb78;
  puVar1[4] = param_10;
  *(undefined4 *)(puVar1 + 5) = param_1;
  *(undefined4 *)((long)puVar1 + 0x2c) = param_2;
  *(undefined4 *)(puVar1 + 6) = param_3;
  *(undefined4 *)((long)puVar1 + 0x34) = param_4;
  uVar2 = 2;
  if (param_8 == 0) {
    uVar2 = 0;
  }
  uVar3 = 4;
  if (param_9 == 0) {
    uVar3 = 0;
  }
  uVar4 = 8;
  if (param_11 == 0) {
    uVar4 = 0;
  }
  uVar5 = 0x10;
  if (param_12 == 0) {
    uVar5 = 0;
  }
  uVar6 = 0x20;
  if (param_13 == '\0') {
    uVar6 = 0;
  }
  *(ushort *)(puVar1 + 7) =
       uVar2 | param_7 | uVar3 | uVar4 | uVar5 | uVar6 | *(ushort *)(puVar1 + 7) & 0xf000;
  return;
}




void FUN_100644e5c(long param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  
  uVar1 = 0x40;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x80;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  uVar3 = 0x100;
  if (param_4 == 0) {
    uVar3 = 0;
  }
  uVar4 = 0x200;
  if (param_5 == 0) {
    uVar4 = 0;
  }
  uVar5 = 0x400;
  if (param_6 == 0) {
    uVar5 = 0;
  }
  uVar6 = 0x800;
  if (param_7 == 0) {
    uVar6 = 0;
  }
  *(ushort *)(param_1 + 0x38) =
       uVar2 | uVar1 | uVar3 | uVar4 | uVar5 | uVar6 | *(ushort *)(param_1 + 0x38) & 0xf03f;
  return;
}




byte FUN_100644ecc(long param_1)

{
  return *(byte *)(param_1 + 0x38) >> 3 & 1;
}




bool FUN_100644ed8(long param_1)

{
  return (*(byte *)(param_1 + 0x38) & 0xc0) != 0;
}




void FUN_100644ee8(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100644ad0(param_3,param_4,0);
  *puVar1 = &PTR_FUN_1014a5690;
  puVar1[4] = param_5;
  *(undefined4 *)(puVar1 + 5) = param_1;
  *(undefined4 *)((long)puVar1 + 0x2c) = param_2;
  return;
}




void FUN_100644f34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100644ad0(param_1,param_2,0);
  *puVar1 = &PTR_FUN_1014a0f18;
  puVar1[4] = param_3;
  puVar1[5] = param_4;
  return;
}




void FUN_100644f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100644ad0(param_1,param_2,0);
  *puVar1 = &PTR_FUN_1014a56b8;
  puVar1[4] = param_3;
  return;
}




void FUN_100644fa0(void)

{
  return;
}




bool FUN_100644fa8(undefined8 param_1,int param_2)

{
  return DAT_101dbd4dc == param_2;
}




void FUN_100644fbc(void)

{
  return;
}




bool FUN_100644fc4(undefined8 param_1,int param_2)

{
  return DAT_101dbd4e4 == param_2;
}




void FUN_100644fd8(void)

{
  DAT_101dbd454 = FUN_100644a94("UI::EVENT_MOUSE");
  DAT_101dbd458 = FUN_100644a94("UI::EVENT_MOUSE_LEFT_TRIGGERED");
  DAT_101dbd45c = FUN_100644a94("UI::EVENT_MOUSE_LEFT_DOWN");
  DAT_101dbd460 = FUN_100644a94("UI::EVENT_MOUSE_LEFT_RELEASED");
  DAT_101dbd464 = FUN_100644a94("UI::EVENT_MOUSE_MIDDLE_TRIGGERED");
  DAT_101dbd468 = FUN_100644a94("UI::EVENT_MOUSE_MIDDLE_DOWN");
  DAT_101dbd46c = FUN_100644a94("UI::EVENT_MOUSE_MIDDLE_RELEASED");
  DAT_101dbd470 = FUN_100644a94("UI::EVENT_MOUSE_RIGHT_TRIGGERED");
  DAT_101dbd474 = FUN_100644a94("UI::EVENT_MOUSE_RIGHT_DOWN");
  DAT_101dbd478 = FUN_100644a94("UI::EVENT_MOUSE_RIGHT_RELEASED");
  DAT_101dbd47c = FUN_100644a94("UI::EVENT_MOUSE_WHEEL");
  DAT_101dbd480 = FUN_100644a94("UI::EVENT_TOUCH");
  DAT_101dbd484 = FUN_100644a94("UI::EVENT_TOUCH_TRIGGERED");
  DAT_101dbd488 = FUN_100644a94("UI::EVENT_TOUCH_DOWN");
  DAT_101dbd48c = FUN_100644a94("UI::EVENT_TOUCH_RELEASED");
  DAT_101dbd490 = FUN_100644a94("UI::EVENT_HOVER");
  DAT_101dbd494 = FUN_100644a94("UI::EVENT_HOVER_ENTER");
  DAT_101dbd498 = FUN_100644a94("UI::EVENT_HOVER_LEAVE");
  DAT_101dbd49c = FUN_100644a94("UI::EVENT_FOCUS");
  DAT_101dbd4a0 = FUN_100644a94("UI::EVENT_FOCUS_SET");
  DAT_101dbd4a4 = FUN_100644a94("UI::EVENT_FOCUS_KILL");
  DAT_101dbd4a8 = FUN_100644a94("UI::EVENT_TEXT");
  DAT_101dbd4ac = FUN_100644a94("UI::EVENT_TEXT_UPDATED");
  DAT_101dbd4b0 = FUN_100644a94("UI::EVENT_TEXT_CANCELLED");
  DAT_101dbd4b4 = FUN_100644a94("UI::EVENT_TEXT_BEGIN");
  DAT_101dbd4b8 = FUN_100644a94("UI::EVENT_TEXT_RETURN");
  DAT_101dbd4bc = FUN_100644a94("UI::EVENT_TEXT_ENDED");
  DAT_101dbd4c0 = FUN_100644a94("UI::EVENT_TEXT_KEYBOARD_SHOW");
  DAT_101dbd4c4 = FUN_100644a94("UI::EVENT_TEXT_LEFT");
  DAT_101dbd4c8 = FUN_100644a94("UI::EVENT_TEXT_RIGHT");
  DAT_101dbd4cc = FUN_100644a94("UI::EVENT_COMMAND");
  DAT_101dbd4d0 = FUN_100644a94("UI::EVENT_COMMAND_CLICK");
  DAT_101dbd4d4 = FUN_100644a94("UI::EVENT_SCROLL");
  DAT_101dbd4d8 = DAT_101dbd454;
  DAT_101dbd4dc = DAT_101dbd490;
  DAT_101dbd4e0 = DAT_101dbd49c;
  DAT_101dbd4e4 = DAT_101dbd4a8;
  DAT_101dbd4e8 = DAT_101dbd4cc;
  DAT_101dbd4ec = DAT_101dbd4d4;
  return;
}




void FUN_1006452d8(int *param_1,undefined8 param_2)

{
  if (*param_1 - 1U < 2) {
    if (*(long *)(param_1 + 2) != 0) {
      FUN_100658ce8();
    }
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(long *)(param_1 + 2) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  if (*(long *)(param_1 + 0x14) != 0) {
    FUN_100648428(param_2);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  *param_1 = 3;
  param_1[0x16] = 0;
  return;
}




uint FUN_100645350(long param_1)

{
  uint uVar1;
  
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (uVar1 = *(int *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x40) - 1, uVar1 < 0x14)) {
    return 0x55cf2U >> (ulong)(uVar1 & 0x1f) & 1;
  }
  return 1;
}




ulong FUN_100645388(long *param_1,int param_2)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  float fVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  int *piVar13;
  long lVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  float local_74;
  float fStack_70;
  float local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar12 = *(uint *)(param_1 + 5);
  if (uVar12 != 0) {
    uVar10 = 0;
    piVar13 = (int *)param_1[6];
    do {
      if (*piVar13 == param_2) {
        return uVar10;
      }
      uVar10 = uVar10 + 1;
      piVar13 = piVar13 + 10;
    } while (uVar12 != uVar10);
  }
  lVar14 = *param_1;
  if ((lVar14 == 0) || (1 < *(int *)((long)param_1 + 0x24) - 1U)) {
    uVar10 = 0xffff;
  }
  else {
    iVar3 = param_2 + -0x1d7c6;
    if (9 < param_2 - 0x1d7f6U) {
      iVar3 = param_2;
    }
    lVar1 = lVar14 + 0x18;
    iVar9 = FUN_100646efc(lVar1,iVar3);
    uVar12 = (uint)*(ushort *)((long)*(int *)(lVar14 + 0x3c) + *(long *)(lVar14 + 0x20) + 0x22);
    uVar12 = (((uVar12 & 0xff00) << 0x10) >> 8 | uVar12 << 0x18) >> 0x10;
    iVar4 = iVar9 << 2;
    if ((int)uVar12 <= iVar9) {
      iVar4 = uVar12 * 4 + -4;
    }
    pbVar2 = (byte *)(*(long *)(lVar14 + 0x20) + (long)*(int *)(lVar14 + 0x40) + (long)iVar4);
    bVar5 = *pbVar2;
    bVar6 = pbVar2[1];
    uVar11 = FUN_100646efc(lVar1,iVar3);
    FUN_100647180(0,0x3f800000,lVar1,uVar11,&local_7c,&local_80,&local_84,&local_88);
    if (param_2 - 0x1d7f6U < 10) {
      local_7c = (int)((float)local_7c + (*(float *)((long)param_1 + 0x1c) - (float)local_84) * 0.5)
      ;
      local_84 = (int)*(float *)((long)param_1 + 0x1c);
      uVar12 = (uint)*(float *)(param_1 + 4);
    }
    else {
      uVar12 = (int)(short)((ushort)bVar5 << 8) | (uint)bVar6;
    }
    fVar8 = (float)NEON_ucvtf((uint)*(ushort *)((long)param_1 + 0xc));
    uVar7 = *(ushort *)((long)*(int *)(*param_1 + 0x34) + *(long *)(*param_1 + 0x20) + 0x12);
    fVar8 = fVar8 / (float)(ushort)(uVar7 >> 8 | uVar7 << 8);
    uVar11 = NEON_scvtf(CONCAT44(local_80,local_7c),4);
    uVar16 = NEON_scvtf(CONCAT44(local_88,local_84),4);
    fVar17 = (float)param_1[7];
    fVar18 = (float)((ulong)param_1[7] >> 0x20);
    fStack_70 = (float)(int)(fVar17 * fVar8 * (float)uVar11) / fVar17;
    fVar15 = (float)(int)(fVar18 * fVar8 * (float)((ulong)uVar11 >> 0x20)) / fVar18;
    uVar11 = NEON_fmov(0x3f800000,4);
    local_74 = fVar8 * (float)(int)uVar12;
    local_6c = -fVar15;
    local_68 = CONCAT44(((float)(int)(fVar18 * fVar8 * (float)((ulong)uVar16 >> 0x20)) +
                        (float)((ulong)uVar11 >> 0x20)) / fVar18 - fVar15,
                        ((float)(int)(fVar17 * fVar8 * (float)uVar16) + (float)uVar11) / fVar17 -
                        fStack_70);
    local_60 = 0;
    uStack_58 = 0;
    local_78 = iVar3;
    FUN_1006455ac(param_1 + 5,&local_78);
    uVar10 = (ulong)(*(ushort *)(param_1 + 5) - 1);
  }
  return uVar10;
}




void FUN_1006455ac(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100647f84(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  uVar6 = param_2[1];
  uVar5 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  *(undefined8 *)(lVar4 + -8) = param_2[4];
  *(undefined8 *)(lVar4 + -0x10) = uVar8;
  *(undefined8 *)(lVar4 + -0x18) = uVar7;
  *(undefined8 *)(lVar4 + -0x20) = uVar6;
  *(undefined8 *)(lVar4 + -0x28) = uVar5;
  return;
}




void FUN_10064563c(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  *(undefined4 *)(param_3 + 7) = param_1;
  *(undefined4 *)((long)param_3 + 0x3c) = param_2;
  if ((((int *)*param_3 != (int *)0x0) && (*(int *)*param_3 != 0)) && (param_3[6] != 0)) {
    *(undefined4 *)(param_3 + 5) = 0;
  }
  return;
}




void FUN_100645660(long *param_1,undefined8 param_2)

{
  if (*param_1 != 0) {
    FUN_1006488fc(param_2,*param_1);
  }
  *param_1 = 0;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return;
}




undefined8 FUN_1006456a4(long param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  uint *puVar7;
  
  if (*(uint *)(param_1 + 0x10) != 0) {
    uVar4 = 0;
    puVar5 = (uint *)(param_1 + 0x24);
    do {
      uVar1 = *(uint *)(param_1 + 0x18 + uVar4 * 0x90);
      if (uVar1 != 0) {
        uVar6 = 0;
        bVar2 = true;
        puVar7 = puVar5;
        do {
          if ((puVar7[-1] <= param_2) && (param_2 <= *puVar7)) break;
          uVar6 = uVar6 + 1;
          bVar2 = uVar6 < uVar1;
          puVar7 = puVar7 + 2;
        } while (uVar1 != uVar6);
        if (bVar2) {
          uVar3 = FUN_100648a2c(*(undefined8 *)(param_1 + 0x938),
                                *(undefined8 *)(param_1 + 0x18 + (uVar4 & 0xffffffff) * 0x90 + 0x88)
                               );
          return uVar3;
        }
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0x24;
    } while (uVar4 != *(uint *)(param_1 + 0x10));
  }
  return 0xffff;
}




void FUN_100645738(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (*(byte *)(param_3 + 0x12) < 2) {
    FUN_100645754();
    return;
  }
  if (*(byte *)(param_3 + 0x12) == 2) {
    FUN_1006459a0();
    return;
  }
  return;
}




void FUN_100645754(uint *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  ushort *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined1 auStack_190 [256];
  ushort local_90;
  short sStack_8e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined6 uStack_88;
  undefined2 uStack_82;
  undefined2 uStack_80;
  byte local_7e;
  undefined5 uStack_7d;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  puVar10 = param_1 + 4;
  uVar2 = *puVar10;
  *(undefined8 *)(param_1 + 0x24e) = param_2;
  (puVar10 + (ulong)uVar2 * 0x24 + 4)[0] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 4)[1] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 2)[0] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 2)[1] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 8)[0] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 8)[1] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 6)[0] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 6)[1] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0xc)[0] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0xc)[1] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 10)[0] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 10)[1] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x10)[0] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x10)[1] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0xe)[0] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0xe)[1] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x14)[0] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x14)[1] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x12)[0] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x12)[1] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x18)[0] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x18)[1] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x16)[0] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x16)[1] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x1c)[0] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x1c)[1] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x1a)[0] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x1a)[1] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x20)[0] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x20)[1] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x1e)[0] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x1e)[1] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x24)[0] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x24)[1] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x22)[0] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 0x22)[1] = 0;
  *puVar10 = uVar2 + 1;
  (puVar10 + (ulong)uVar2 * 0x24 + 4)[0] = 0;
  (puVar10 + (ulong)uVar2 * 0x24 + 4)[1] = 0xffff;
  puVar10[(ulong)uVar2 * 0x24 + 2] = 1;
  uVar12 = *param_3;
  uStack_78 = param_3[3];
  uVar13 = param_3[2];
  uStack_88 = (undefined6)param_3[1];
  uStack_82 = (undefined2)((ulong)param_3[1] >> 0x30);
  local_90 = (ushort)uVar12;
  sStack_8e = (short)((ulong)uVar12 >> 0x10);
  uStack_8c = (undefined2)((ulong)uVar12 >> 0x20);
  uStack_8a = (undefined2)((ulong)uVar12 >> 0x30);
  uStack_80 = (undefined2)uVar13;
  local_7e = (byte)((ulong)uVar13 >> 0x10);
  uStack_7d = (undefined5)((ulong)uVar13 >> 0x18);
  uStack_68 = param_3[5];
  local_70 = param_3[4];
  local_60 = *(undefined4 *)(param_3 + 6);
  *(undefined2 *)(param_1 + 0x246) = uStack_8c;
  *(ulong *)(param_1 + 0x247) = CONCAT62(uStack_88,uStack_8a);
  param_1[0x249] = CONCAT22(uStack_80,uStack_82);
  param_1[0x24c] = (uint)local_7e;
  FUN_1004e2b98(auStack_190,"%s://%.2s/%s");
  uVar5 = FUN_100648768(param_2,param_1[0x24c],auStack_190);
  local_1b0 = *(undefined8 *)(param_1 + 0x246);
  uStack_1a8 = (undefined4)*(undefined8 *)(param_1 + 0x248);
  uStack_19c = *(undefined8 *)(param_1 + 0x24b);
  uStack_1a4 = (undefined4)*(undefined8 *)(param_1 + 0x249);
  uStack_1a0 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x249) >> 0x20);
  uVar6 = FUN_100648684(param_2,uVar5,&local_1b0);
  lVar7 = FUN_1006489f4(param_2,uVar6);
  *(long *)(puVar10 + (ulong)uVar2 * 0x24 + 0x24) = lVar7;
  if ((local_90 != 0) || (sStack_8e != 0)) {
    puVar11 = (ushort *)((long)param_3 + 0x34);
    local_1c0 = 0;
    uStack_1d8 = 0;
    local_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    FUN_100645b6c(lVar7 + 0x28,local_90,&local_1e0);
    FUN_100645c08(param_1,sStack_8e,0xffff0000ffff,0);
    if (local_90 != 0) {
      uVar8 = 0;
      puVar9 = (undefined8 *)(*(long *)(lVar7 + 0x30) + 0x18);
      do {
        uVar15 = *(undefined8 *)(puVar11 + 5);
        uVar14 = *(undefined8 *)(puVar11 + 1);
        uVar16 = *(undefined4 *)(puVar11 + 9);
        uVar13 = *(undefined8 *)(puVar11 + 0xf);
        uVar12 = *(undefined8 *)(puVar11 + 0xb);
        *(uint *)(puVar9 + -3) = (uint)*puVar11;
        *(undefined8 *)((long)puVar9 + -0xc) = uVar15;
        *(undefined8 *)((long)puVar9 + -0x14) = uVar14;
        *(undefined4 *)((long)puVar9 + -4) = uVar16;
        if (local_7e == 0) {
          puVar9[1] = uVar13;
          *puVar9 = uVar12;
        }
        puVar11 = puVar11 + 0x13;
        uVar8 = uVar8 + 1;
        puVar9 = puVar9 + 5;
      } while (uVar8 < local_90);
    }
    if (*param_1 != 0) {
      lVar7 = 0;
      uVar8 = 0;
      do {
        uVar3 = *puVar11;
        uVar4 = puVar11[1];
        uVar16 = *(undefined4 *)(puVar11 + 2);
        puVar1 = (undefined2 *)(*(long *)(param_1 + 2) + lVar7);
        *puVar1 = uVar6;
        puVar1[1] = uVar3;
        puVar1[2] = uVar6;
        puVar1[3] = uVar4;
        *(undefined4 *)(puVar1 + 4) = uVar16;
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0xc;
        puVar11 = puVar11 + 4;
      } while (uVar8 < *param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1006459a0(long param_1,undefined8 param_2,ushort *param_3)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  long lVar9;
  uint uVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined2 local_220 [2];
  undefined8 local_21c;
  undefined4 local_214;
  undefined4 local_208;
  undefined1 auStack_200 [256];
  undefined2 local_100;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined4 uStack_f6;
  undefined2 uStack_f2;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [7];
  undefined1 auStack_d1 [2];
  ushort local_cf [3];
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined7 uStack_a8;
  undefined1 local_a1;
  undefined7 uStack_a0;
  undefined8 uStack_99;
  long local_88;
  
  local_88 = *(long *)PTR____stack_chk_guard_101444218;
  *(undefined8 *)(param_1 + 0x938) = param_2;
  uVar3 = *param_3;
  uVar12 = *(undefined8 *)(param_3 + 3);
  uVar13 = *(undefined4 *)(param_3 + 7);
  uVar5 = param_3[9];
  *(ushort *)(param_1 + 0x918) = param_3[2];
  *(undefined8 *)(param_1 + 0x91c) = uVar12;
  *(undefined4 *)(param_1 + 0x924) = uVar13;
  *(uint *)(param_1 + 0x930) = (uint)(byte)uVar5;
  if (uVar3 != 0) {
    uVar10 = 0;
    param_3 = param_3 + 0x1a;
    do {
      uVar2 = *(uint *)(param_1 + 0x10);
      puVar11 = (uint *)(param_1 + 0x18 + (ulong)uVar2 * 0x90);
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[10] = 0;
      puVar11[0xb] = 0;
      puVar11[8] = 0;
      puVar11[9] = 0;
      puVar11[0xe] = 0;
      puVar11[0xf] = 0;
      puVar11[0xc] = 0;
      puVar11[0xd] = 0;
      puVar11[0x12] = 0;
      puVar11[0x13] = 0;
      puVar11[0x10] = 0;
      puVar11[0x11] = 0;
      puVar11[0x16] = 0;
      puVar11[0x17] = 0;
      puVar11[0x14] = 0;
      puVar11[0x15] = 0;
      puVar11[0x1a] = 0;
      puVar11[0x1b] = 0;
      puVar11[0x18] = 0;
      puVar11[0x19] = 0;
      puVar11[0x1e] = 0;
      puVar11[0x1f] = 0;
      puVar11[0x1c] = 0;
      puVar11[0x1d] = 0;
      puVar11[0x22] = 0;
      puVar11[0x23] = 0;
      puVar11[0x20] = 0;
      puVar11[0x21] = 0;
      *(uint *)(param_1 + 0x10) = uVar2 + 1;
      uStack_b8 = *(undefined8 *)(param_3 + 0x24);
      local_c0 = *(undefined8 *)(param_3 + 0x20);
      uStack_b0 = *(undefined8 *)(param_3 + 0x28);
      uStack_a8 = (undefined7)*(undefined8 *)(param_3 + 0x2c);
      uStack_99 = *(undefined8 *)((long)param_3 + 0x67);
      local_a1 = (undefined1)*(undefined8 *)((long)param_3 + 0x5f);
      uStack_a0 = (undefined7)((ulong)*(undefined8 *)((long)param_3 + 0x5f) >> 8);
      uVar12 = *(undefined8 *)(param_3 + 4);
      uStack_e8 = *(undefined8 *)(param_3 + 0xc);
      uStack_f0 = *(undefined8 *)(param_3 + 8);
      uStack_f8 = (undefined2)uVar12;
      uStack_f6 = (undefined4)((ulong)uVar12 >> 0x10);
      uVar6 = uStack_f6;
      uStack_f2 = (undefined2)((ulong)uVar12 >> 0x30);
      local_100 = (undefined2)*(undefined8 *)param_3;
      uVar8 = local_100;
      uStack_fe = (undefined6)((ulong)*(undefined8 *)param_3 >> 0x10);
      _auStack_d8 = *(undefined8 *)(param_3 + 0x14);
      local_e0 = *(undefined8 *)(param_3 + 0x10);
      uStack_c8 = *(undefined8 *)(param_3 + 0x1c);
      register0x00005000 = *(undefined8 *)(param_3 + 0x18);
      uVar12 = CONCAT26(uStack_f8,uStack_fe);
      uVar13 = *(undefined4 *)(param_1 + 0x930);
      FUN_1004e2b98(auStack_200,"%s://%.2s/%s");
      uVar7 = FUN_100648768(*(undefined8 *)(param_1 + 0x938),*(undefined4 *)(param_1 + 0x930),
                            auStack_200);
      local_220[0] = uVar8;
      local_214 = uVar6;
      local_21c = uVar12;
      local_208 = uVar13;
      uVar8 = FUN_100648684(*(undefined8 *)(param_1 + 0x938),uVar7,local_220);
      uVar12 = FUN_1006489f4(*(undefined8 *)(param_1 + 0x938),uVar8);
      lVar9 = 0;
      *(undefined8 *)(puVar11 + 0x22) = uVar12;
      do {
        uVar5 = *(ushort *)((long)local_cf + lVar9);
        if (uVar5 != 0) {
          uVar4 = *(ushort *)(auStack_d8 + lVar9 + 7);
          uVar2 = *puVar11;
          puVar1 = puVar11 + (ulong)uVar2 * 2 + 2;
          puVar1[0] = 0;
          puVar1[1] = 0;
          *puVar11 = uVar2 + 1;
          *puVar1 = (uint)uVar4;
          puVar1[1] = (uint)uVar5;
        }
        lVar9 = lVar9 + 4;
      } while (lVar9 != 0x40);
      param_3 = (ushort *)((long)param_3 + 0x6f);
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar3);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100645b6c(uint *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = (uint)param_2;
  if (uVar3 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < uVar3) {
      FUN_100647f84(param_1,param_2);
    }
    uVar2 = *param_1;
    if (uVar2 < uVar3) {
      lVar4 = (ulong)uVar2 * 0x28;
      lVar5 = (param_2 & 0xffffffff) - (ulong)uVar2;
      do {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + lVar4);
        uVar7 = param_3[1];
        uVar6 = *param_3;
        uVar9 = param_3[3];
        uVar8 = param_3[2];
        puVar1[4] = param_3[4];
        puVar1[1] = uVar7;
        *puVar1 = uVar6;
        puVar1[3] = uVar9;
        puVar1[2] = uVar8;
        lVar4 = lVar4 + 0x28;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    *param_1 = uVar3;
  }
  return;
}




void FUN_100645c08(uint *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = (uint)param_2;
  if (uVar2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < uVar2) {
      FUN_100648014(param_1,param_2);
    }
    uVar1 = *param_1;
    if (uVar1 < uVar2) {
      lVar3 = (ulong)uVar1 * 0xc;
      lVar4 = (param_2 & 0xffffffff) - (ulong)uVar1;
      do {
        lVar5 = *(long *)(param_1 + 2);
        *(undefined8 *)(lVar5 + lVar3) = param_3;
        *(undefined4 *)((undefined8 *)(lVar5 + lVar3) + 1) = param_4;
        lVar3 = lVar3 + 0xc;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_100645ca0(undefined4 *param_1)

{
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  return;
}




void FUN_100645cb8(int *param_1,undefined8 param_2,int param_3,char *param_4)

{
  ushort *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  undefined8 local_70;
  void *local_68;
  undefined8 uStack_60;
  long local_58;
  
  *param_1 = param_3;
  if (param_4 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar2 = *param_4;
    pcVar15 = param_4;
    while (cVar2 != '\0') {
      pcVar15 = pcVar15 + 1;
      uVar4 = (uVar4 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar15;
    }
  }
  param_1[0x16] = uVar4;
  if (param_3 - 1U < 2) {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_100658d0c(param_4,&local_68);
    uVar12 = FUN_100658c88(param_4,1);
    if ((int)uVar12 != -1) {
      uVar13 = FUN_100658cc4(uVar12,&local_70);
      *(undefined8 *)(param_1 + 2) = local_70;
      *(ulong *)(param_1 + 4) = uVar13 & 0xffffffff;
      FUN_100658c9c(uVar12);
      if (*(long *)(param_1 + 4) == 0) {
        FUN_1006452d8(param_1,param_2);
      }
      else {
        lVar16 = *(long *)(param_1 + 2);
        *(long *)(param_1 + 8) = lVar16;
        param_1[10] = 0;
        uVar4 = FUN_100647328(lVar16,"cmap");
        iVar5 = FUN_100647328(lVar16,"loca");
        param_1[0xc] = iVar5;
        iVar6 = FUN_100647328(lVar16,"head");
        param_1[0xd] = iVar6;
        iVar7 = FUN_100647328(lVar16,"glyf");
        param_1[0xe] = iVar7;
        iVar8 = FUN_100647328(lVar16,"hhea");
        param_1[0xf] = iVar8;
        iVar9 = FUN_100647328(lVar16,"hmtx");
        param_1[0x10] = iVar9;
        iVar10 = FUN_100647328(lVar16,"kern");
        param_1[0x11] = iVar10;
        if (((((uVar4 != 0) && (iVar5 != 0)) && (iVar6 != 0)) && ((iVar7 != 0 && (iVar8 != 0)))) &&
           (iVar9 != 0)) {
          uVar11 = FUN_100647328(lVar16,"maxp");
          if (uVar11 == 0) {
            uVar11 = 0xffff;
          }
          else {
            uVar11 = (uint)*(ushort *)(lVar16 + (ulong)uVar11 + 4);
            uVar11 = (((uVar11 & 0xff00) << 0x10) >> 8 | uVar11 << 0x18) >> 0x10;
          }
          param_1[0xb] = uVar11;
          uVar13 = (ulong)*(ushort *)(lVar16 + (ulong)uVar4 + 2);
          uVar13 = ((uVar13 & 0xff00) << 0x30) >> 8 | uVar13 << 0x38;
          uVar14 = uVar13 >> 0x30;
          param_1[0x12] = 0;
          if ((short)(uVar13 >> 0x30) != 0) {
            iVar5 = 0;
            uVar11 = uVar4 + 4;
            do {
              puVar1 = (ushort *)(lVar16 + (ulong)uVar11);
              uVar3 = (((*puVar1 & 0xff00) << 0x10) >> 8 | (uint)*puVar1 << 0x18) >> 0x10;
              if ((uVar3 == 0) ||
                 ((uVar3 == 3 &&
                  (uVar3 = (((puVar1[1] & 0xff00) << 0x10) >> 8 | (uint)puVar1[1] << 0x18) >> 0x10,
                  uVar3 == 10 || uVar3 == 1)))) {
                uVar3 = (*(uint *)(puVar1 + 2) & 0xff00ff00) >> 8 |
                        (*(uint *)(puVar1 + 2) & 0xff00ff) << 8;
                iVar5 = (uVar3 >> 0x10 | uVar3 << 0x10) + uVar4;
                param_1[0x12] = iVar5;
              }
              uVar11 = uVar11 + 8;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
            if (iVar5 != 0) {
              uVar4 = (uint)*(ushort *)(lVar16 + iVar6 + 0x32);
              param_1[0x13] = (((uVar4 & 0xff00) << 0x10) >> 8 | uVar4 << 0x18) >> 0x10;
            }
          }
        }
      }
    }
    if (local_58 < 0) {
      operator_delete(local_68);
    }
  }
  else if (param_3 == 0) {
    uVar12 = FUN_100648388(param_2,param_4);
    *(undefined8 *)(param_1 + 0x14) = uVar12;
  }
  return;
}




void FUN_100645f50(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_100648a10(param_2,param_3);
  *param_1 = uVar1;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)param_4;
  uVar2 = *(undefined8 *)((long)param_4 + 0x14);
  uVar1 = *(undefined8 *)((long)param_4 + 0xc);
  uVar3 = *param_4;
  *(undefined8 *)((long)param_1 + 0x14) = param_4[1];
  *(undefined8 *)((long)param_1 + 0xc) = uVar3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  FUN_100641518(param_1 + 7,(long)param_1 + 0x3c);
  return;
}




undefined4 FUN_100645fa4(long param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  
  if (*(uint *)(param_1 + 0x10) != 0) {
    uVar5 = 0;
    puVar6 = (uint *)(param_1 + 0x24);
    do {
      uVar1 = *(uint *)(param_1 + 0x18 + uVar5 * 0x90);
      if (uVar1 != 0) {
        uVar7 = 0;
        bVar2 = true;
        puVar8 = puVar6;
        do {
          if ((puVar8[-1] <= param_2) && (param_2 <= *puVar8)) break;
          uVar7 = uVar7 + 1;
          bVar2 = uVar7 < uVar1;
          puVar8 = puVar8 + 2;
        } while (uVar1 != uVar7);
        if (bVar2) {
          lVar9 = param_1 + 0x18 + (uVar5 & 0xffffffff) * 0x90;
          sVar3 = FUN_100648a2c(*(undefined8 *)(param_1 + 0x938),*(undefined8 *)(lVar9 + 0x88));
          sVar4 = FUN_100645388(*(undefined8 *)(lVar9 + 0x88),param_2);
          if (sVar3 == -1) {
            return 0xffffffff;
          }
          if (sVar4 == -1) {
            return 0xffffffff;
          }
          return CONCAT22(sVar4,sVar3);
        }
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x24;
    } while (uVar5 != *(uint *)(param_1 + 0x10));
  }
  return 0xffffffff;
}




void FUN_100646088(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  param_1[0x127] = 0;
  if (*(int *)(param_1 + 2) != 0) {
    uVar3 = 0;
    puVar4 = param_1 + 0x14;
    do {
      FUN_100648860(param_2,*puVar4);
      uVar3 = uVar3 + 1;
      uVar1 = *(uint *)(param_1 + 2);
      puVar4 = puVar4 + 0x12;
    } while (uVar3 < uVar1);
    if (uVar1 != 0) {
      lVar2 = (ulong)uVar1 * 0x90;
      do {
        if (*(int *)((long)param_1 + lVar2 + -0x78) != 0) {
          *(undefined4 *)((long)param_1 + lVar2 + -0x78) = 0;
        }
        lVar2 = lVar2 + -0x90;
      } while (lVar2 != 0);
      *(undefined4 *)(param_1 + 2) = 0;
    }
  }
  return;
}




float FUN_100646118(uint *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  float fVar15;
  uint local_70;
  uint uStack_6c;
  float local_68;
  
  uVar9 = (ulong)*param_1;
  uVar13 = (uint)param_2;
  uVar12 = (uint)param_3;
  if (*param_1 != 0) {
    puVar10 = (ushort *)(*(long *)(param_1 + 2) + 4);
    do {
      if (((((uint)puVar10[-2] == (uVar13 & 0xffff)) && ((uint)puVar10[-1] == uVar13 >> 0x10)) &&
          ((uint)*puVar10 == (uVar12 & 0xffff))) && ((uint)puVar10[1] == uVar12 >> 0x10)) {
        return *(float *)(puVar10 + 2);
      }
      puVar10 = puVar10 + 6;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  local_68 = 0.0;
  if ((param_1[0x24c] - 1 < 2) && ((uVar13 & 0xffff) == (uVar12 & 0xffff))) {
    plVar8 = (long *)FUN_1006489f4(0,*(undefined8 *)(param_1 + 0x24e),param_2 & 0xffff);
    lVar14 = *plVar8;
    iVar11 = *(int *)(lVar14 + 0x44);
    fVar15 = 0.0;
    local_68 = 0.0;
    if (iVar11 != 0) {
      uVar2 = *(undefined4 *)(plVar8[6] + (param_3 >> 0x10 & 0xffff) * 0x28);
      iVar6 = FUN_100646efc(lVar14 + 0x18,
                            *(undefined4 *)(plVar8[6] + (param_2 >> 0x10 & 0xffff) * 0x28));
      uVar7 = FUN_100646efc(lVar14 + 0x18,uVar2);
      lVar14 = *(long *)(lVar14 + 0x20) + (long)iVar11;
      local_68 = fVar15;
      if (((*(char *)(lVar14 + 3) != '\0' || *(char *)(lVar14 + 2) != '\0') &&
          ((ushort)(*(ushort *)(lVar14 + 8) >> 8 | *(ushort *)(lVar14 + 8) << 8) == 1)) &&
         (uVar5 = (((*(ushort *)(lVar14 + 10) & 0xff00) << 0x10) >> 8 |
                  (uint)*(ushort *)(lVar14 + 10) << 0x18) >> 0x10, uVar5 != 0)) {
        iVar11 = 0;
        uVar7 = uVar7 | iVar6 << 0x10;
        iVar6 = uVar5 - 1;
        do {
          iVar1 = iVar11 + iVar6 >> 1;
          iVar4 = ((iVar11 + iVar6 & 0xfffffffeU) + iVar1) * 2;
          uVar5 = *(uint *)(lVar14 + iVar4 + 0x12);
          uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
          uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
          if (uVar7 < uVar5) {
            iVar6 = iVar1 + -1;
          }
          else {
            if (uVar7 == uVar5) {
              uVar3 = *(ushort *)(iVar4 + lVar14 + 0x16);
              local_68 = (float)(int)(short)(uVar3 >> 8 | uVar3 << 8);
              break;
            }
            iVar11 = iVar1 + 1;
          }
        } while (iVar11 <= iVar6);
      }
    }
    local_70 = uVar13;
    uStack_6c = uVar12;
    FUN_1006462f0(param_1,&local_70);
  }
  return local_68;
}




void FUN_1006462f0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100648014(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xc;
  uVar5 = *param_2;
  *(undefined4 *)(lVar4 + -4) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar4 + -0xc) = uVar5;
  return;
}




long FUN_10064637c(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = FUN_1006489f4(*(undefined8 *)(param_1 + 0x938),param_2 & 0xffff);
  return *(long *)(lVar1 + 0x30) + (param_2 >> 0x10 & 0xffff) * 0x28;
}




void FUN_1006463b4(float param_1,float param_2,long *param_3,long param_4,int param_5,int param_6,
                  int param_7,ulong param_8,undefined8 param_9)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  float fVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  undefined8 uVar12;
  int *piVar13;
  float *pfVar14;
  float *pfVar15;
  undefined8 *puVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *****pppppuVar20;
  undefined8 *****pppppuVar21;
  float *pfVar22;
  undefined8 **ppuVar23;
  uint uVar24;
  int iVar25;
  long lVar26;
  short *psVar27;
  int *piVar28;
  int iVar29;
  int iVar30;
  ulong uVar31;
  float *pfVar32;
  int iVar33;
  ulong uVar35;
  int iVar36;
  undefined8 *****pppppuVar37;
  undefined8 *****pppppuVar38;
  long lVar39;
  undefined8 *puVar40;
  ulong uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  short *local_2d8;
  int local_2d0;
  int local_2cc;
  undefined8 ****local_2c8;
  undefined8 *local_2c0;
  undefined8 local_2b8;
  float local_2b0;
  long local_b0;
  ulong uVar34;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  lVar39 = *param_3;
  if (*(long *)(lVar39 + 0x10) != 0) {
    lVar26 = param_3[6];
    uVar2 = *(ushort *)((long)*(int *)(lVar39 + 0x34) + *(long *)(lVar39 + 0x20) + 0x12);
    puVar40 = (undefined8 *)(lVar39 + 0x18);
    *puVar40 = param_9;
    fVar51 = (float)NEON_ucvtf((uint)*(ushort *)((long)param_3 + 0xc));
    fVar51 = fVar51 / (float)(ushort)(uVar2 >> 8 | uVar2 << 8);
    param_1 = fVar51 * param_1;
    fVar51 = fVar51 * param_2;
    uVar12 = FUN_100646efc(puVar40,*(undefined4 *)(lVar26 + (param_8 & 0xffff) * 0x28));
    uVar11 = FUN_10064739c(puVar40,uVar12,&local_2d8);
    FUN_100647180(param_1,fVar51,puVar40,uVar12,&local_2cc,&local_2d0,0,0);
    if ((param_5 != 0) && (param_6 != 0)) {
      uVar12 = *puVar40;
      local_2b8 = local_2b8 & 0xffffffff00000000;
      if (0 < (int)uVar11) {
        uVar24 = 0;
        fVar42 = (float)NEON_fminnm(param_1,fVar51);
        psVar27 = local_2d8 + 4;
        uVar18 = (ulong)uVar11;
        do {
          if ((char)*psVar27 == '\x01') {
            uVar24 = uVar24 + 1;
          }
          uVar18 = uVar18 - 1;
          psVar27 = psVar27 + 5;
        } while (uVar18 != 0);
        if (uVar24 != 0) {
          uVar18 = (ulong)uVar24;
          piVar13 = (int *)FUN_100647a48(uVar18 << 2,uVar12);
          if (piVar13 != (int *)0x0) {
            bVar9 = false;
            fVar47 = 0.0;
            lVar39 = 0;
            bVar7 = true;
            do {
              bVar8 = bVar7;
              if (bVar9) {
                lVar39 = FUN_100647a48((long)(int)(float)local_2b8 << 3,uVar12);
                if (lVar39 == 0) goto LAB_100646848;
              }
              local_2b8 = local_2b8 & 0xffffffff00000000;
              uVar24 = 0xffffffff;
              fVar43 = 0.0;
              fVar48 = 0.0;
              uVar19 = (ulong)uVar11;
              psVar27 = local_2d8;
              do {
                cVar1 = (char)psVar27[4];
                if (cVar1 == '\x03') {
                  FUN_100647b80(fVar48,fVar43,(float)(int)psVar27[2],(float)(int)psVar27[3],
                                (float)(int)*psVar27,(float)(int)psVar27[1],
                                (0.35 / fVar42) * (0.35 / fVar42),lVar39,&local_2b8,0);
                  fVar48 = (float)(int)*psVar27;
                  fVar43 = (float)(int)psVar27[1];
                  uVar41 = local_2b8;
                }
                else {
                  if (cVar1 == '\x02') {
                    sVar3 = *psVar27;
                    sVar4 = psVar27[1];
                  }
                  else {
                    uVar41 = local_2b8;
                    if (cVar1 != '\x01') goto LAB_10064664c;
                    if (-1 < (int)uVar24) {
                      piVar13[uVar24] = (int)(float)local_2b8 - (int)fVar47;
                    }
                    uVar24 = uVar24 + 1;
                    sVar3 = *psVar27;
                    sVar4 = psVar27[1];
                    fVar47 = (float)local_2b8;
                  }
                  uVar41 = CONCAT44(local_2b8._4_4_,(int)(float)local_2b8 + 1);
                  fVar43 = (float)(int)sVar4;
                  fVar48 = (float)(int)sVar3;
                  if (lVar39 != 0) {
                    pfVar14 = (float *)(lVar39 + (long)(int)(float)local_2b8 * 8);
                    *pfVar14 = fVar48;
                    pfVar14[1] = fVar43;
                  }
                }
LAB_10064664c:
                local_2b8 = uVar41;
                psVar27 = psVar27 + 5;
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
              piVar13[(int)uVar24] = (int)(float)local_2b8 - (int)fVar47;
              bVar9 = true;
              bVar7 = false;
            } while (bVar8);
            if (lVar39 != 0) {
              iVar17 = 0;
              piVar28 = piVar13;
              uVar19 = uVar18;
              do {
                iVar17 = *piVar28 + iVar17;
                uVar19 = uVar19 - 1;
                piVar28 = piVar28 + 1;
              } while (uVar19 != 0);
              pfVar14 = (float *)FUN_100647a48((long)(iVar17 + 1) * 0x14,uVar12);
              if (pfVar14 != (float *)0x0) {
                uVar19 = 0;
                uVar41 = 0;
                iVar17 = 0;
                do {
                  iVar29 = piVar13[uVar19];
                  if (0 < iVar29) {
                    lVar26 = lVar39 + (long)iVar17 * 8;
                    pfVar15 = (float *)(lVar39 + 4 + (long)iVar17 * 8);
                    uVar35 = 0;
                    uVar34 = (ulong)(iVar29 - 1);
                    iVar36 = iVar29;
                    do {
                      uVar31 = uVar35;
                      iVar33 = (int)uVar34;
                      fVar42 = *(float *)(lVar26 + (long)iVar33 * 8 + 4);
                      fVar47 = *pfVar15;
                      if (fVar42 != fVar47) {
                        pfVar32 = pfVar14 + (long)(int)uVar41 * 5;
                        iVar36 = (int)uVar31;
                        if (fVar47 > fVar42) {
                          iVar36 = iVar33;
                          iVar33 = (int)uVar31;
                        }
                        pfVar32[4] = (float)(uint)(fVar47 <= fVar42);
                        uVar46 = *(undefined8 *)(lVar26 + (long)iVar33 * 8);
                        *(ulong *)pfVar32 =
                             CONCAT44((float)((ulong)uVar46 >> 0x20) * -fVar51,
                                      (float)uVar46 * param_1);
                        uVar46 = *(undefined8 *)(lVar26 + (long)iVar36 * 8);
                        *(ulong *)(pfVar32 + 2) =
                             CONCAT44((float)((ulong)uVar46 >> 0x20) * -fVar51,
                                      (float)uVar46 * param_1);
                        uVar41 = (ulong)((int)uVar41 + 1);
                        iVar36 = piVar13[uVar19];
                      }
                      pfVar15 = pfVar15 + 2;
                      uVar35 = uVar31 + 1;
                      uVar34 = uVar31;
                    } while ((long)(uVar31 + 1) < (long)iVar36);
                  }
                  iVar17 = iVar29 + iVar17;
                  uVar19 = uVar19 + 1;
                } while (uVar19 != uVar18);
                FUN_100647cd0(pfVar14,uVar41);
                if (1 < (int)uVar41) {
                  uVar19 = 0;
                  uVar18 = 1;
                  pfVar15 = pfVar14;
                  do {
                    pfVar15 = pfVar15 + 5;
                    pfVar32 = pfVar14 + uVar18 * 5;
                    fVar51 = *pfVar32;
                    fVar42 = pfVar32[1];
                    local_2b8 = *(ulong *)(pfVar32 + 2);
                    local_2b0 = pfVar32[4];
                    pfVar32 = pfVar15;
                    uVar35 = uVar19;
                    do {
                      if (pfVar14[(uVar35 & 0xffffffff) * 5 + 1] <= fVar42) {
                        uVar11 = (int)uVar35 + 1;
                        goto LAB_1006467e8;
                      }
                      pfVar22 = pfVar14 + (uVar35 & 0xffffffff) * 5;
                      uVar52 = *(undefined8 *)(pfVar22 + 2);
                      uVar46 = *(undefined8 *)pfVar22;
                      pfVar32[4] = pfVar22[4];
                      *(undefined8 *)(pfVar32 + 2) = uVar52;
                      *(undefined8 *)pfVar32 = uVar46;
                      lVar39 = uVar35 + 1;
                      uVar35 = uVar35 - 1;
                      pfVar32 = pfVar32 + -5;
                    } while (1 < lVar39);
                    uVar11 = 0;
LAB_1006467e8:
                    if (uVar18 != uVar11) {
                      pfVar32 = pfVar14 + (long)(int)uVar11 * 5;
                      *pfVar32 = fVar51;
                      pfVar32[1] = fVar42;
                      *(ulong *)(pfVar32 + 2) = local_2b8;
                      pfVar32[4] = local_2b0;
                    }
                    uVar18 = uVar18 + 1;
                    uVar19 = uVar19 + 1;
                  } while (uVar18 != uVar41);
                }
                local_2c8 = (undefined8 *****)0x0;
                local_2c0 = (undefined8 *)0x0;
                if (param_5 < 0x41) {
                  pfVar15 = (float *)&local_2b8;
                }
                else {
                  pfVar15 = (float *)FUN_100647a48(-(ulong)((uint)(param_5 << 1) >> 0x1f) &
                                                   0xfffffffc00000000 |
                                                   (ulong)(param_5 << 1 | 1) << 2,uVar12);
                }
                pfVar14[(long)(int)uVar41 * 5 + 1] = (float)(local_2d0 + param_6) + 1.0;
                if (0 < param_6) {
                  iVar36 = 0;
                  iVar29 = 0;
                  pppppuVar37 = (undefined8 *****)0x0;
                  iVar33 = 0;
                  lVar39 = (long)param_5;
                  pfVar32 = pfVar15 + param_5;
                  fVar51 = (float)param_5;
                  pppppuVar38 = (undefined8 *****)0x0;
                  iVar17 = local_2d0;
                  do {
                    fVar42 = (float)iVar17;
                    _bzero(pfVar15,lVar39 << 2);
                    _bzero(pfVar32,-(ulong)(param_5 + 1U >> 0x1f) & 0xfffffffc00000000 |
                                   (ulong)(param_5 + 1U) << 2);
                    if (pppppuVar38 != (undefined8 *****)0x0) {
                      pppppuVar20 = &local_2c8;
                      do {
                        pppppuVar21 = pppppuVar38;
                        if (*(float *)((long)pppppuVar38 + 0x1c) <= fVar42) {
                          *pppppuVar20 = *pppppuVar38;
                          *(undefined4 *)((long)pppppuVar38 + 0x14) = 0;
                          *pppppuVar38 = pppppuVar37;
                          pppppuVar21 = pppppuVar20;
                          pppppuVar37 = pppppuVar38;
                        }
                        pppppuVar38 = (undefined8 *****)*pppppuVar21;
                        pppppuVar20 = pppppuVar21;
                      } while (pppppuVar38 != (undefined8 *****)0x0);
                    }
                    fVar48 = fVar42 + 1.0;
                    fVar47 = pfVar14[1];
                    pppppuVar38 = (undefined8 *****)local_2c8;
                    while (local_2c8 = pppppuVar38, fVar47 <= fVar48) {
                      if (fVar47 != pfVar14[3]) {
                        if (pppppuVar37 == (undefined8 *****)0x0) {
                          if (iVar33 == 0) {
                            puVar16 = (undefined8 *)FUN_100647a48(0x6408,uVar12);
                            if (puVar16 == (undefined8 *)0x0) {
                              iVar33 = 0;
                              pppppuVar37 = (undefined8 *****)0x0;
                              goto LAB_100646eb8;
                            }
                            *puVar16 = local_2c0;
                            local_2c0 = puVar16;
                            iVar33 = 799;
                          }
                          else {
                            iVar33 = iVar33 + -1;
                          }
                          pppppuVar21 = (undefined8 *****)0x0;
                          pppppuVar20 = (undefined8 *****)(local_2c0 + (long)iVar33 * 4);
                          pppppuVar38 = (undefined8 *****)local_2c8;
                        }
                        else {
                          pppppuVar21 = (undefined8 *****)*pppppuVar37;
                          pppppuVar20 = pppppuVar37;
                        }
                        pppppuVar37 = pppppuVar21;
                        local_2c8 = pppppuVar38;
                        if (pppppuVar20 != (undefined8 *****)0x0) {
                          fVar54 = pfVar14[3];
                          fVar49 = *pfVar14;
                          fVar53 = pfVar14[1];
                          fVar43 = (pfVar14[2] - fVar49) / (fVar54 - fVar53);
                          fVar47 = 1.0 / fVar43;
                          if (fVar43 == 0.0) {
                            fVar47 = fVar43;
                          }
                          *(float *)((long)pppppuVar20 + 0xc) = fVar43;
                          *(float *)(pppppuVar20 + 2) = fVar47;
                          *(float *)(pppppuVar20 + 1) =
                               (fVar49 - (float)local_2cc) + (fVar42 - fVar53) * fVar43;
                          uVar45 = 0xbf800000;
                          if (pfVar14[4] != 0.0) {
                            uVar45 = 0x3f800000;
                          }
                          *(undefined4 *)((long)pppppuVar20 + 0x14) = uVar45;
                          *(float *)(pppppuVar20 + 3) = fVar53;
                          *(float *)((long)pppppuVar20 + 0x1c) = fVar54;
                          *pppppuVar20 = (undefined8 ****)0x0;
                          *pppppuVar20 = pppppuVar38;
                          local_2c8 = pppppuVar20;
                        }
                      }
LAB_100646eb8:
                      pfVar22 = pfVar14 + 6;
                      pfVar14 = pfVar14 + 5;
                      pppppuVar38 = (undefined8 *****)local_2c8;
                      fVar47 = *pfVar22;
                    }
                    if (pppppuVar38 != (undefined8 *****)0x0) {
                      do {
                        fVar47 = *(float *)(pppppuVar38 + 1);
                        fVar43 = *(float *)((long)pppppuVar38 + 0xc);
                        if (fVar43 == 0.0) {
                          if (fVar47 < fVar51) {
                            if (0.0 <= fVar47) {
                              FUN_100647e9c(fVar47,fVar42,fVar47,fVar48,pfVar15,(int)fVar47,
                                            pppppuVar38);
                              iVar25 = (int)fVar47 + 1;
                            }
                            else {
                              iVar25 = 0;
                            }
                            FUN_100647e9c(fVar47,fVar42,fVar47,fVar48,pfVar32,iVar25,pppppuVar38);
                          }
                        }
                        else {
                          fVar55 = fVar47 + fVar43;
                          fVar49 = *(float *)(pppppuVar38 + 3);
                          fVar53 = *(float *)((long)pppppuVar38 + 0x1c);
                          fVar54 = fVar47 + fVar43 * (fVar49 - fVar42);
                          if (fVar49 <= fVar42) {
                            fVar54 = fVar47;
                          }
                          fVar56 = fVar47 + fVar43 * (fVar53 - fVar42);
                          if (fVar48 <= fVar53) {
                            fVar56 = fVar55;
                          }
                          if (0.0 <= fVar54) {
                            bVar7 = false;
                            bVar9 = false;
                            if (0.0 <= fVar56) {
                              bVar7 = false;
                              bVar9 = true;
                              if (!NAN(fVar54) && !NAN(fVar51)) {
                                bVar7 = fVar54 < fVar51;
                                bVar9 = false;
                              }
                            }
                            bVar8 = false;
                            bVar10 = false;
                            if (bVar7 != bVar9) {
                              bVar8 = false;
                              bVar10 = true;
                              if (!NAN(fVar56) && !NAN(fVar51)) {
                                bVar8 = fVar56 < fVar51;
                                bVar10 = false;
                              }
                            }
                            if (bVar8 != bVar10) {
                              if (fVar49 <= fVar42) {
                                fVar49 = fVar42;
                              }
                              fVar43 = (float)NEON_fminnm(fVar53,fVar48);
                              uVar24 = (uint)fVar54;
                              uVar11 = (uint)fVar56;
                              if (uVar24 == uVar11) {
                                fVar43 = fVar43 - fVar49;
                                pfVar15[(int)uVar24] =
                                     pfVar15[(int)uVar24] +
                                     *(float *)((long)pppppuVar38 + 0x14) *
                                     (fVar43 + fVar43 * (((float)(int)uVar24 + (float)(int)uVar24) -
                                                        (fVar56 + fVar54)) * 0.5);
                                pfVar32[(long)(int)uVar24 + 1] =
                                     pfVar32[(long)(int)uVar24 + 1] +
                                     fVar43 * *(float *)((long)pppppuVar38 + 0x14);
                              }
                              else {
                                fVar44 = *(float *)((long)pppppuVar38 + 0x14);
                                fVar53 = *(float *)(pppppuVar38 + 2);
                                if (fVar56 < fVar54) {
                                  fVar53 = -*(float *)(pppppuVar38 + 2);
                                }
                                fVar50 = fVar54;
                                fVar5 = fVar49;
                                uVar6 = uVar24;
                                if (fVar56 < fVar54) {
                                  fVar47 = fVar55;
                                  fVar50 = fVar56;
                                  fVar56 = fVar54;
                                  fVar5 = (fVar48 + fVar42) - fVar43;
                                  fVar43 = (fVar48 + fVar42) - fVar49;
                                  uVar6 = uVar11;
                                  uVar11 = uVar24;
                                }
                                iVar25 = uVar6 + 1;
                                fVar54 = fVar42 + fVar53 * ((float)iVar25 - fVar47);
                                fVar47 = (fVar54 - fVar5) * fVar44;
                                pfVar15[(int)uVar6] =
                                     pfVar15[(int)uVar6] +
                                     (((float)(int)uVar6 - fVar50) * 0.5 + 0.5) * fVar47;
                                if (uVar11 - iVar25 != 0 && iVar25 <= (int)uVar11) {
                                  iVar30 = ~uVar6 + uVar11;
                                  pfVar22 = pfVar15 + iVar25;
                                  do {
                                    *pfVar22 = fVar47 + fVar44 * fVar53 * 0.5 + *pfVar22;
                                    fVar47 = fVar47 + fVar44 * fVar53;
                                    iVar30 = iVar30 + -1;
                                    pfVar22 = pfVar22 + 1;
                                  } while (iVar30 != 0);
                                }
                                pfVar15[(int)uVar11] =
                                     fVar47 + (fVar43 - (fVar54 + (float)(int)(uVar11 - iVar25) *
                                                                  fVar53)) *
                                              (fVar44 + fVar44 * ((float)(int)uVar11 - fVar56) * 0.5
                                              ) + pfVar15[(int)uVar11];
                                pfVar32[(long)(int)uVar11 + 1] =
                                     pfVar32[(long)(int)uVar11 + 1] + (fVar43 - fVar5) * fVar44;
                              }
                              goto LAB_100646d40;
                            }
                          }
                          if (0 < param_5) {
                            iVar25 = 0;
                            do {
                              fVar54 = (float)iVar25;
                              iVar30 = iVar25 + 1;
                              fVar53 = (float)iVar30;
                              fVar49 = fVar42 + (1.0 / fVar43) * (fVar54 - fVar47);
                              fVar56 = fVar42 + (1.0 / fVar43) * (fVar53 - fVar47);
                              bVar7 = false;
                              bVar9 = true;
                              bVar8 = false;
                              if (fVar47 < fVar54) {
                                bVar7 = false;
                                bVar9 = false;
                                bVar8 = true;
                                if (!NAN(fVar55) && !NAN(fVar53)) {
                                  bVar7 = fVar55 < fVar53;
                                  bVar9 = fVar55 == fVar53;
                                  bVar8 = false;
                                }
                              }
                              if (!bVar9 && bVar7 == bVar8) {
                                FUN_100647e9c(fVar47,fVar42,fVar54,fVar49,pfVar15,iVar25,pppppuVar38
                                             );
                                goto LAB_100646b4c;
                              }
                              bVar7 = false;
                              bVar9 = true;
                              bVar8 = false;
                              if (fVar55 < fVar54) {
                                bVar7 = false;
                                bVar9 = false;
                                bVar8 = true;
                                if (!NAN(fVar47) && !NAN(fVar53)) {
                                  bVar7 = fVar47 < fVar53;
                                  bVar9 = fVar47 == fVar53;
                                  bVar8 = false;
                                }
                              }
                              if (bVar9 || bVar7 != bVar8) {
                                bVar7 = false;
                                bVar9 = true;
                                bVar8 = false;
                                if (fVar47 < fVar54) {
                                  bVar7 = false;
                                  bVar9 = false;
                                  bVar8 = true;
                                  if (!NAN(fVar55) && !NAN(fVar54)) {
                                    bVar7 = fVar55 < fVar54;
                                    bVar9 = fVar55 == fVar54;
                                    bVar8 = false;
                                  }
                                }
                                fVar44 = fVar47;
                                fVar50 = fVar42;
                                if (!bVar9 && bVar7 == bVar8) goto LAB_100646bbc;
                                bVar7 = false;
                                bVar9 = true;
                                bVar8 = false;
                                if (fVar55 < fVar54) {
                                  bVar7 = false;
                                  bVar9 = false;
                                  bVar8 = true;
                                  if (!NAN(fVar47) && !NAN(fVar54)) {
                                    bVar7 = fVar47 < fVar54;
                                    bVar9 = fVar47 == fVar54;
                                    bVar8 = false;
                                  }
                                }
                                if (!bVar9 && bVar7 == bVar8) goto LAB_100646bbc;
                                bVar7 = false;
                                bVar9 = true;
                                bVar8 = false;
                                if (fVar47 < fVar53) {
                                  bVar7 = false;
                                  bVar9 = false;
                                  bVar8 = true;
                                  if (!NAN(fVar55) && !NAN(fVar53)) {
                                    bVar7 = fVar55 < fVar53;
                                    bVar9 = fVar55 == fVar53;
                                    bVar8 = false;
                                  }
                                }
                                fVar54 = fVar47;
                                fVar49 = fVar42;
                                if (bVar9 || bVar7 != bVar8) {
                                  bVar7 = false;
                                  bVar9 = true;
                                  bVar8 = false;
                                  if (fVar55 < fVar53) {
                                    bVar7 = false;
                                    bVar9 = false;
                                    bVar8 = true;
                                    if (!NAN(fVar47) && !NAN(fVar53)) {
                                      bVar7 = fVar47 < fVar53;
                                      bVar9 = fVar47 == fVar53;
                                      bVar8 = false;
                                    }
                                  }
                                  if (!bVar9 && bVar7 == bVar8) goto LAB_100646b4c;
                                }
                                else {
LAB_100646b4c:
                                  FUN_100647e9c(fVar54,fVar49,fVar53,fVar56,pfVar15,iVar25,
                                                pppppuVar38);
                                  fVar54 = fVar53;
                                  fVar49 = fVar56;
                                }
                              }
                              else {
                                FUN_100647e9c(fVar47,fVar42,fVar53,fVar56,pfVar15,iVar25,pppppuVar38
                                             );
                                fVar44 = fVar53;
                                fVar50 = fVar56;
LAB_100646bbc:
                                FUN_100647e9c(fVar44,fVar50,fVar54,fVar49,pfVar15,iVar25,pppppuVar38
                                             );
                              }
                              FUN_100647e9c(fVar54,fVar49,fVar55,fVar48,pfVar15,iVar25,pppppuVar38);
                              iVar25 = iVar30;
                            } while (param_5 != iVar30);
                          }
                        }
LAB_100646d40:
                        pppppuVar38 = (undefined8 *****)*pppppuVar38;
                      } while (pppppuVar38 != (undefined8 *****)0x0);
                    }
                    pppppuVar38 = (undefined8 *****)local_2c8;
                    if (0 < param_5) {
                      fVar42 = 0.0;
                      pfVar22 = pfVar15;
                      lVar26 = lVar39;
                      iVar25 = iVar36;
                      do {
                        fVar42 = pfVar22[lVar39] + fVar42;
                        iVar30 = (int)(ABS(*pfVar22 + fVar42) * 255.0 + 0.5);
                        if (0xfe < iVar30) {
                          iVar30 = 0xff;
                        }
                        *(char *)(param_4 + iVar25) = (char)iVar30;
                        iVar25 = iVar25 + 1;
                        lVar26 = lVar26 + -1;
                        pfVar22 = pfVar22 + 1;
                      } while (lVar26 != 0);
                    }
                    for (; pppppuVar38 != (undefined8 *****)0x0;
                        pppppuVar38 = (undefined8 *****)*pppppuVar38) {
                      *(float *)(pppppuVar38 + 1) =
                           *(float *)(pppppuVar38 + 1) + *(float *)((long)pppppuVar38 + 0xc);
                    }
                    iVar17 = iVar17 + 1;
                    iVar29 = iVar29 + 1;
                    iVar36 = iVar36 + param_7;
                    pppppuVar38 = (undefined8 *****)local_2c8;
                  } while (iVar29 != param_6);
                }
                ppuVar23 = &local_2c0;
                do {
                  ppuVar23 = (undefined8 **)*ppuVar23;
                } while (ppuVar23 != (undefined8 **)0x0);
              }
            }
          }
        }
      }
    }
LAB_100646848:
    *puVar40 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




uint FUN_100646efc(long param_1,uint param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ushort uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  
  lVar4 = *(long *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0x30);
  puVar1 = (ushort *)(lVar4 + (ulong)uVar3);
  uVar7 = ((*puVar1 & 0xff00) << 0x10) >> 8;
  uVar8 = (uint)*puVar1 << 0x18;
  uVar2 = (uVar7 | uVar8) >> 0x10;
  switch(uVar2) {
  case 0:
    if ((int)param_2 <
        (int)(((((puVar1[1] & 0xff00) << 0x10) >> 8 | (uint)puVar1[1] << 0x18) >> 0x10) - 6)) {
      return (uint)*(byte *)((long)puVar1 + (long)(int)param_2 + 6);
    }
    break;
  default:
    if (((uVar7 & 0xfffe0000 | uVar8) == 0xc0000) &&
       (uVar3 = (*(uint *)(puVar1 + 6) & 0xff00ff00) >> 8 | (*(uint *)(puVar1 + 6) & 0xff00ff) << 8,
       uVar3 = uVar3 >> 0x10 | uVar3 << 0x10, 0 < (int)uVar3)) {
      iVar10 = 0;
      do {
        uVar7 = iVar10 + ((int)(uVar3 - iVar10) >> 1);
        uVar8 = *(uint *)((long)puVar1 + (long)(int)(uVar7 * 0xc) + 0x10);
        uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
        if (uVar8 <= param_2) {
          uVar12 = *(uint *)((long)puVar1 + (long)(int)(uVar7 * 0xc) + 0x14);
          uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
          if (param_2 <= (uVar12 >> 0x10 | uVar12 << 0x10)) {
            uVar3 = *(uint *)((long)puVar1 + (long)(int)(uVar7 * 0xc) + 0x18);
            uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
            iVar10 = param_2 - uVar8;
            if (uVar2 != 0xc) {
              iVar10 = 0;
            }
            return (uVar3 >> 0x10 | uVar3 << 0x10) + iVar10;
          }
          iVar10 = uVar7 + 1;
          uVar7 = uVar3;
        }
        uVar3 = uVar7;
      } while (iVar10 < (int)uVar3);
    }
    break;
  case 2:
    break;
  case 4:
    if ((int)param_2 < 0x10000) {
      uVar11 = ((ulong)puVar1[3] & 0xff00) << 0x30;
      uVar9 = (ulong)puVar1[3] << 0x38;
      uVar5 = puVar1[5] >> 8 | puVar1[5] << 8;
      uVar6 = (ulong)*(byte *)((long)puVar1 + 0xd) & 0xfe | (ulong)(byte)puVar1[6] << 8;
      uVar7 = (uint)*(ushort *)(lVar4 + uVar6 + (uVar3 + 0xe));
      iVar10 = 0;
      if ((int)((((uVar7 & 0xff00) << 0x10) >> 8 | uVar7 << 0x18) >> 0x10) <= (int)param_2) {
        iVar10 = (int)uVar6;
      }
      uVar7 = uVar3 + iVar10 + 0xc;
      if (uVar5 != 0) {
        uVar8 = (uint)(puVar1[4] >> 8) | (puVar1[4] & 0xff00ff) << 8;
        do {
          uVar2 = uVar8 >> 1;
          uVar8 = uVar8 >> 1;
          uVar2 = uVar2 & 0x7ffe;
          uVar12 = (uint)*(ushort *)(lVar4 + (ulong)uVar2 + (ulong)uVar7);
          if ((int)param_2 <= (int)((((uVar12 & 0xff00) << 0x10) >> 8 | uVar12 << 0x18) >> 0x10)) {
            uVar2 = 0;
          }
          uVar7 = uVar2 + uVar7;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      uVar6 = (ulong)((uVar7 - uVar3) + 0x1fff4) & 0x1fffe;
      uVar7 = (uint)*(ushort *)
                     ((long)puVar1 +
                     ((uVar11 >> 8 & 0xfffe000000000000 | uVar9) >> 0x30) + uVar6 + 0x10);
      uVar7 = (((uVar7 & 0xff00) << 0x10) >> 8 | uVar7 << 0x18) >> 0x10;
      if ((int)param_2 < (int)uVar7) {
        param_2 = 0;
      }
      else {
        uVar8 = ((uint)(uVar11 >> 0x28) | (uint)(uVar9 >> 0x20)) >> 0x11;
        uVar9 = (ulong)(uVar8 * 6);
        uVar11 = (ulong)*(ushort *)((long)puVar1 + uVar9 + uVar6 + 0x10);
        uVar11 = ((uVar11 & 0xff00) << 0x30) >> 8 | uVar11 << 0x38;
        if ((short)(uVar11 >> 0x30) == 0) {
          uVar3 = (uint)*(ushort *)((long)puVar1 + (uVar8 << 2 | 2) + uVar6 + 0xe);
          param_2 = ((((uVar3 & 0xff00) << 0x10) >> 8 | uVar3 << 0x18) >> 0x10) + param_2;
        }
        else {
          uVar3 = (uint)*(ushort *)
                         (uVar6 + uVar9 + (ulong)uVar3 + (long)(int)((param_2 - uVar7) * 2) +
                          (uVar11 >> 0x30) + lVar4 + 0x10);
          param_2 = (((uVar3 & 0xff00) << 0x10) >> 8 | uVar3 << 0x18) >> 0x10;
        }
      }
      return param_2 & 0xffff;
    }
    break;
  case 6:
    uVar3 = (((puVar1[3] & 0xff00) << 0x10) >> 8 | (uint)puVar1[3] << 0x18) >> 0x10;
    if ((uVar3 <= param_2) &&
       (param_2 < ((((puVar1[4] & 0xff00) << 0x10) >> 8 | (uint)puVar1[4] << 0x18) >> 0x10) + uVar3)
       ) {
      uVar3 = (uint)*(ushort *)((long)puVar1 + (ulong)((param_2 - uVar3) * 2) + 10);
      return (((uVar3 & 0xff00) << 0x10) >> 8 | uVar3 << 0x18) >> 0x10;
    }
  }
  return 0;
}




void FUN_100647180(float param_1,float param_2,long param_3,undefined8 param_4,int *param_5,
                  int *param_6,int *param_7,int *param_8)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = FUN_1006472a0();
  if ((int)uVar7 < 0) {
    if (param_5 != (int *)0x0) {
      *param_5 = 0;
    }
    if (param_6 != (int *)0x0) {
      *param_6 = 0;
    }
    if (param_7 != (int *)0x0) {
      *param_7 = 0;
    }
    if (param_8 == (int *)0x0) {
      return;
    }
    iVar8 = 0;
  }
  else {
    lVar1 = *(long *)(param_3 + 8) + (ulong)uVar7;
    bVar2 = *(byte *)(lVar1 + 4);
    bVar3 = *(byte *)(lVar1 + 5);
    uVar6 = *(ushort *)(lVar1 + 6);
    bVar4 = *(byte *)(lVar1 + 8);
    bVar5 = *(byte *)(lVar1 + 9);
    if (param_5 != (int *)0x0) {
      *param_5 = (int)((float)(int)(short)(*(ushort *)(lVar1 + 2) >> 8 | *(ushort *)(lVar1 + 2) << 8
                                          ) * param_1);
    }
    if (param_6 != (int *)0x0) {
      *param_6 = (int)((float)(int)-((int)(short)((ushort)bVar4 << 8) | (uint)bVar5) * param_2);
    }
    if (param_7 != (int *)0x0) {
      *param_7 = (int)((float)(int)(short)(uVar6 >> 8 | uVar6 << 8) * param_1);
    }
    if (param_8 == (int *)0x0) {
      return;
    }
    iVar8 = (int)((float)(int)-((int)(short)((ushort)bVar2 << 8) | (uint)bVar3) * param_2);
  }
  *param_8 = iVar8;
  return;
}




int FUN_1006472a0(long param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_2 < *(int *)(param_1 + 0x14)) && (*(int *)(param_1 + 0x34) < 2)) {
    if (*(int *)(param_1 + 0x34) == 0) {
      pbVar3 = (byte *)(*(long *)(param_1 + 8) +
                       (long)*(int *)(param_1 + 0x18) + (long)(param_2 << 1));
      uVar4 = (uint)*pbVar3 << 9 | (uint)pbVar3[1] << 1;
      uVar5 = (uint)pbVar3[2] << 9 | (uint)pbVar3[3] << 1;
    }
    else {
      puVar2 = (uint *)(*(long *)(param_1 + 8) +
                       (long)*(int *)(param_1 + 0x18) + (long)(param_2 << 2));
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    }
    iVar1 = uVar4 + *(int *)(param_1 + 0x20);
    if (uVar4 == uVar5) {
      iVar1 = -1;
    }
    return iVar1;
  }
  return -1;
}




uint FUN_100647328(long param_1,char *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (((ulong)*(ushort *)(param_1 + 4) & 0xff00) << 0x30) >> 8 |
          (ulong)*(ushort *)(param_1 + 4) << 0x38;
  uVar3 = uVar2 >> 0x30;
  if ((short)(uVar2 >> 0x30) != 0) {
    param_1 = param_1 + 0x17;
    do {
      if (((((uint)*(byte *)(param_1 + -0xb) == (int)*param_2) &&
           ((uint)*(byte *)(param_1 + -10) == (int)param_2[1])) &&
          ((uint)*(byte *)(param_1 + -9) == (int)param_2[2])) &&
         ((uint)*(byte *)(param_1 + -8) == (int)param_2[3])) {
        uVar1 = (*(uint *)(param_1 + -3) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + -3) & 0xff00ff) << 8;
        return uVar1 >> 0x10 | uVar1 << 0x10;
      }
      param_1 = param_1 + 0x10;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}




ulong FUN_10064739c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  void *pvVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  undefined2 *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  short *psVar19;
  byte bVar20;
  byte bVar21;
  byte *pbVar22;
  long lVar23;
  ulong uVar24;
  void *pvVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  ushort *puVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  int local_a0;
  int iStack_9c;
  void *local_98;
  
  lVar23 = param_1[1];
  uVar9 = FUN_1006472a0();
  *param_3 = 0;
  if ((int)uVar9 < 0) {
LAB_100647a14:
    uVar24 = 0;
  }
  else {
    puVar33 = (ushort *)(lVar23 + (ulong)uVar9);
    uVar13 = (((ulong)*puVar33 & 0xff00) << 0x30) >> 8 | (ulong)*puVar33 << 0x38;
    uVar6 = (ushort)(uVar13 >> 0x30);
    uVar9 = (uint)(short)uVar6;
    uVar24 = (ulong)uVar9;
    if ((int)uVar9 < 1) {
      if (uVar9 == 0xffffffff) {
        puVar33 = puVar33 + 5;
        uVar13 = 0;
        pvVar25 = (void *)0x0;
        do {
          local_98 = (void *)0x0;
          bVar20 = *(byte *)((long)puVar33 + 1);
          puVar17 = puVar33 + 2;
          fVar37 = 0.0;
          if ((bVar20 >> 1 & 1) == 0) {
            fVar36 = 0.0;
          }
          else if ((bVar20 & 1) == 0) {
            fVar36 = (float)(int)(char)*puVar17;
            fVar37 = (float)(int)*(char *)((long)puVar33 + 5);
            puVar17 = puVar33 + 3;
          }
          else {
            fVar36 = (float)(int)CONCAT11((char)*puVar17,*(char *)((long)puVar33 + 5));
            fVar37 = (float)(int)(short)(puVar33[3] >> 8 | puVar33[3] << 8);
            puVar17 = puVar33 + 4;
          }
          puVar18 = puVar33 + 1;
          if ((bVar20 >> 3 & 1) == 0) {
            if ((bVar20 >> 6 & 1) == 0) {
              if ((char)bVar20 < '\0') {
                fVar41 = (float)(int)(short)(puVar17[1] >> 8 | puVar17[1] << 8) * 6.1035156e-05;
                fVar39 = (float)(int)(short)(puVar17[2] >> 8 | puVar17[2] << 8) * 6.1035156e-05;
                fVar40 = (float)(int)(short)(puVar17[3] >> 8 | puVar17[3] << 8) * 6.1035156e-05;
                puVar33 = puVar17 + 4;
                fVar38 = (float)(int)(short)(*puVar17 >> 8 | *puVar17 << 8) * 6.1035156e-05;
              }
              else {
                fVar39 = 0.0;
                fVar40 = 1.0;
                fVar41 = 0.0;
                puVar33 = puVar17;
                fVar38 = 1.0;
              }
            }
            else {
              fVar40 = (float)(int)(short)(puVar17[1] >> 8 | puVar17[1] << 8) * 6.1035156e-05;
              puVar33 = puVar17 + 2;
              fVar39 = 0.0;
              fVar41 = 0.0;
              fVar38 = (float)(int)(short)(*puVar17 >> 8 | *puVar17 << 8) * 6.1035156e-05;
            }
          }
          else {
            puVar33 = puVar17 + 1;
            fVar40 = (float)(int)(short)(*puVar17 >> 8 | *puVar17 << 8) * 6.1035156e-05;
            fVar39 = 0.0;
            fVar41 = 0.0;
            fVar38 = fVar40;
          }
          uVar9 = FUN_10064739c(param_1,(((*puVar18 & 0xff00) << 0x10) >> 8 | (uint)*puVar18 << 0x18
                                        ) >> 0x10,&local_98);
          pvVar8 = local_98;
          uVar24 = uVar13;
          pvVar11 = pvVar25;
          if (0 < (int)uVar9) {
            fVar34 = SQRT(fVar41 * fVar41 + fVar38 * fVar38);
            uVar24 = (ulong)uVar9;
            psVar19 = (short *)((long)local_98 + 4);
            fVar35 = SQRT(fVar40 * fVar40 + fVar39 * fVar39);
            do {
              sVar3 = psVar19[-2];
              psVar19[-2] = (short)(int)((fVar36 + (float)(int)sVar3 * fVar38 +
                                         (float)(int)psVar19[-1] * fVar39) * fVar34);
              psVar19[-1] = (short)(int)((fVar37 + (float)(int)sVar3 * fVar41 +
                                         (float)(int)psVar19[-1] * fVar40) * fVar35);
              sVar3 = *psVar19;
              *psVar19 = (short)(int)((fVar36 + (float)(int)sVar3 * fVar38 +
                                      (float)(int)psVar19[1] * fVar39) * fVar34);
              psVar19[1] = (short)(int)((fVar37 + (float)(int)sVar3 * fVar41 +
                                        (float)(int)psVar19[1] * fVar40) * fVar35);
              psVar19 = psVar19 + 5;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
            iVar10 = (int)uVar13;
            uVar24 = (ulong)(uVar9 + iVar10);
            pvVar11 = (void *)FUN_100647a48((long)(int)(uVar9 + iVar10) * 10,*param_1);
            if (pvVar11 == (void *)0x0) goto LAB_100647a14;
            if (0 < iVar10) {
              _memcpy(pvVar11,pvVar25,uVar13 * 10);
            }
            _memcpy((void *)((long)pvVar11 + (long)iVar10 * 10),pvVar8,(long)(int)uVar9 * 10);
          }
          uVar13 = uVar24;
          pvVar25 = pvVar11;
        } while ((bVar20 >> 5 & 1) != 0);
      }
      else {
        uVar24 = 0;
        pvVar11 = (void *)0x0;
      }
    }
    else {
      puVar17 = puVar33 + (ulong)uVar6 + 5;
      uVar7 = *puVar17;
      uVar2 = *(undefined1 *)((long)puVar17 + 1);
      uVar15 = (((ulong)puVar17[-1] & 0xff00) << 0x30) >> 8 | (ulong)puVar17[-1] << 0x38;
      pvVar11 = (void *)FUN_100647a48(((uVar15 >> 0x30) + (ulong)uVar6 * 2) * 10 + 10,*param_1);
      if (pvVar11 == (void *)0x0) goto LAB_100647a14;
      bVar20 = 0;
      bVar21 = 0;
      uVar6 = (ushort)(uVar15 >> 0x30);
      uVar15 = (ulong)(uVar6 + 1);
      puVar17 = (ushort *)((long)puVar17 + (ulong)CONCAT11((char)uVar7,uVar2) + 2);
      pbVar22 = (byte *)((long)pvVar11 + (uVar13 >> 0x30) * 0x14 + 8);
      uVar13 = uVar15;
      do {
        if (bVar21 == 0) {
          puVar18 = (ushort *)((long)puVar17 + 1);
          bVar20 = (byte)*puVar17;
          if ((bVar20 >> 3 & 1) == 0) {
            bVar21 = 0;
          }
          else {
            bVar21 = *(byte *)((long)puVar17 + 1);
            puVar18 = puVar17 + 1;
          }
        }
        else {
          bVar21 = bVar21 - 1;
          puVar18 = puVar17;
        }
        *pbVar22 = bVar20;
        uVar13 = uVar13 - 1;
        puVar17 = puVar18;
        pbVar22 = pbVar22 + 10;
      } while (uVar13 != 0);
      iVar10 = 0;
      pbVar22 = (byte *)((long)pvVar11 + (uVar24 & 0xffff) * 0x14 + 8);
      uVar13 = uVar15;
      do {
        bVar20 = *pbVar22;
        if ((bVar20 >> 1 & 1) == 0) {
          puVar17 = puVar18;
          if ((bVar20 >> 4 & 1) == 0) {
            puVar17 = puVar18 + 1;
            iVar10 = iVar10 + ((((*puVar18 & 0xff00) << 0x10) >> 8 | (uint)*puVar18 << 0x18) >> 0x10
                              );
          }
        }
        else {
          puVar17 = (ushort *)((long)puVar18 + 1);
          uVar9 = -(uint)(byte)*puVar18;
          if ((bVar20 & 0x10) != 0) {
            uVar9 = (uint)(byte)*puVar18;
          }
          iVar10 = uVar9 + iVar10;
        }
        *(short *)(pbVar22 + -8) = (short)iVar10;
        pbVar22 = pbVar22 + 10;
        uVar13 = uVar13 - 1;
        puVar18 = puVar17;
      } while (uVar13 != 0);
      iVar10 = 0;
      pbVar22 = (byte *)((long)pvVar11 + (uVar24 & 0xffff) * 0x14 + 8);
      do {
        bVar20 = *pbVar22;
        if ((bVar20 >> 2 & 1) == 0) {
          puVar18 = puVar17;
          if ((bVar20 >> 5 & 1) == 0) {
            puVar18 = puVar17 + 1;
            iVar10 = iVar10 + ((((*puVar17 & 0xff00) << 0x10) >> 8 | (uint)*puVar17 << 0x18) >> 0x10
                              );
          }
        }
        else {
          puVar18 = (ushort *)((long)puVar17 + 1);
          uVar9 = -(uint)(byte)*puVar17;
          if ((bVar20 & 0x20) != 0) {
            uVar9 = (uint)(byte)*puVar17;
          }
          iVar10 = uVar9 + iVar10;
        }
        *(short *)(pbVar22 + -6) = (short)iVar10;
        pbVar22 = pbVar22 + 10;
        uVar15 = uVar15 - 1;
        puVar17 = puVar18;
      } while (uVar15 != 0);
      iVar10 = 0;
      iVar31 = 0;
      iVar30 = 0;
      uVar29 = 0;
      uVar28 = 0;
      uVar15 = 0;
      uVar13 = 0;
      local_a0 = 0;
      iStack_9c = 0;
      bVar20 = 0;
      iVar12 = 0;
      iVar14 = 0;
      do {
        iVar32 = iVar31 + (int)((uVar24 & 0xffff) << 1);
        psVar19 = (short *)((long)pvVar11 + (long)iVar32 * 10);
        bVar21 = *(byte *)(psVar19 + 4);
        sVar3 = *psVar19;
        uVar27 = (ulong)sVar3;
        sVar4 = psVar19[1];
        uVar26 = (ulong)sVar4;
        if (iVar14 == iVar31) {
          if (iVar31 != 0) {
            iVar10 = FUN_100647aa8(pvVar11,iVar10,iVar12,bVar20,uVar13,uVar15,uVar28,uVar29,
                                   iStack_9c);
          }
          uVar13 = uVar27;
          uVar15 = uVar26;
          if ((bVar21 & 1) == 0) {
            lVar23 = (long)iVar32 + 1;
            psVar19 = (short *)((long)pvVar11 + lVar23 * 10);
            sVar5 = *psVar19;
            uVar29 = uVar26;
            uVar28 = uVar27;
            if ((*(byte *)(psVar19 + 4) & 1) == 0) {
              uVar13 = (ulong)(uint)((int)sVar5 + (int)sVar3 >> 1);
              uVar15 = (ulong)(uint)((int)*(short *)((long)pvVar11 + lVar23 * 10 + 2) + (int)sVar4
                                    >> 1);
            }
            else {
              iVar31 = iVar31 + 1;
              uVar13 = (long)sVar5;
              uVar15 = (long)*(short *)((long)pvVar11 + lVar23 * 10 + 2);
            }
          }
          iVar12 = 0;
          bVar20 = ~bVar21 & 1;
          puVar16 = (undefined2 *)((long)pvVar11 + (long)iVar10 * 10);
          iVar10 = iVar10 + 1;
          *(undefined1 *)(puVar16 + 4) = 1;
          *puVar16 = (short)uVar13;
          puVar16[1] = (short)uVar15;
          *(undefined4 *)(puVar16 + 2) = 0;
          iVar14 = ((((puVar33[(long)iVar30 + 5] & 0xff00) << 0x10) >> 8 |
                    (uint)puVar33[(long)iVar30 + 5] << 0x18) >> 0x10) + 1;
          iVar30 = iVar30 + 1;
          iVar32 = iVar31;
        }
        else {
          iVar32 = iVar31;
          if ((bVar21 & 1) == 0) {
            if (iVar12 == 0) {
              iVar12 = 1;
              local_a0 = (int)sVar4;
              iStack_9c = (int)sVar3;
            }
            else {
              puVar16 = (undefined2 *)((long)pvVar11 + (long)iVar10 * 10);
              iVar10 = iVar10 + 1;
              *(undefined1 *)(puVar16 + 4) = 3;
              *puVar16 = (short)((uint)(iStack_9c + sVar3) >> 1);
              puVar16[1] = (short)((uint)(local_a0 + sVar4) >> 1);
              puVar16[2] = (short)iStack_9c;
              puVar16[3] = (short)local_a0;
              iVar12 = 1;
              local_a0 = (int)sVar4;
              iStack_9c = (int)sVar3;
            }
          }
          else {
            lVar23 = (long)iVar10;
            puVar1 = (undefined1 *)((long)pvVar11 + (long)iVar10 * 10 + 8);
            if (iVar12 == 0) {
              iVar31 = 0;
              *puVar1 = 2;
              psVar19 = (short *)((long)pvVar11 + lVar23 * 10);
              *psVar19 = sVar3;
              psVar19[1] = sVar4;
              psVar19[2] = 0;
            }
            else {
              *puVar1 = 3;
              psVar19 = (short *)((long)pvVar11 + lVar23 * 10);
              *psVar19 = sVar3;
              psVar19[1] = sVar4;
              psVar19[2] = (short)iStack_9c;
              iVar31 = local_a0;
            }
            iVar12 = 0;
            *(short *)((long)pvVar11 + lVar23 * 10 + 6) = (short)iVar31;
            iVar10 = iVar10 + 1;
          }
        }
        iVar31 = iVar32 + 1;
      } while (iVar32 < (int)(uint)uVar6);
      uVar24 = FUN_100647aa8(pvVar11,iVar10,iVar12,bVar20,uVar13,uVar15,uVar28,uVar29,iStack_9c);
    }
    *param_3 = (long)pvVar11;
  }
  return uVar24;
}




ulong FUN_100647a48(int param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(long *)(param_2 + 2) + (ulong)*param_2;
  uVar1 = *param_2 + param_1;
  if ((uVar2 & 0xf) == 0) {
    if (uVar1 < (param_2[4] & 0x7fffffff)) {
      *param_2 = uVar1;
      return uVar2;
    }
  }
  else if (uVar1 + 0xf < (param_2[4] & 0x7fffffff)) {
    *param_2 = uVar1 + 0xf;
    return uVar2 + 0xf & 0xfffffffffffffff0;
  }
  return 0;
}




int FUN_100647aa8(long param_1,int param_2,int param_3,int param_4,undefined2 param_5,
                 undefined2 param_6,int param_7,int param_8,undefined8 param_9)

{
  undefined1 *puVar1;
  long lVar2;
  undefined2 *puVar3;
  
  if (param_4 == 0) {
    lVar2 = (long)param_2;
    puVar1 = (undefined1 *)(param_1 + (long)param_2 * 10 + 8);
    if (param_3 == 0) {
      param_8 = 0;
      *puVar1 = 2;
      puVar3 = (undefined2 *)(param_1 + lVar2 * 10);
      *puVar3 = param_5;
      puVar3[1] = param_6;
      puVar3[2] = 0;
    }
    else {
      *puVar1 = 3;
      puVar3 = (undefined2 *)(param_1 + lVar2 * 10);
      *puVar3 = param_5;
      puVar3[1] = param_6;
      puVar3[2] = (short)param_9;
      param_8 = param_9._4_4_;
    }
  }
  else {
    if (param_3 != 0) {
      puVar3 = (undefined2 *)(param_1 + (long)param_2 * 10);
      *(undefined1 *)(puVar3 + 4) = 3;
      *puVar3 = (short)((uint)((int)param_9 + param_7) >> 1);
      puVar3[1] = (short)((uint)(param_9._4_4_ + param_8) >> 1);
      param_2 = param_2 + 1;
      puVar3[2] = (short)param_9;
      puVar3[3] = (short)((ulong)param_9 >> 0x20);
    }
    puVar3 = (undefined2 *)(param_1 + (long)param_2 * 10);
    *(undefined1 *)(puVar3 + 4) = 3;
    *puVar3 = param_5;
    lVar2 = (long)param_2;
    puVar3[1] = param_6;
    puVar3[2] = (short)param_7;
  }
  *(short *)(param_1 + lVar2 * 10 + 6) = (short)param_8;
  return param_2 + 1;
}




void FUN_100647b80(ulong param_1,ulong param_2,float param_3,float param_4,float param_5,
                  float param_6,undefined8 param_7,long param_8,int *param_9,int param_10)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  ulong uVar8;
  undefined8 uVar10;
  float fVar11;
  
  if (param_10 < 0x11) {
    fVar3 = (float)param_2 + param_6;
    fVar4 = (float)param_1 + param_5;
    uVar10 = NEON_fmov(0x3e800000,4);
    fVar7 = (fVar3 + param_4 * 2.0) * (float)uVar10;
    fVar11 = (float)((ulong)uVar10 >> 0x20);
    fVar9 = (fVar4 + param_3 * 2.0) * fVar11;
    fVar3 = -(fVar7 + fVar3 * -0.5);
    fVar4 = -(fVar9 + fVar4 * -0.5);
    param_10 = param_10 + 1;
    uVar8 = CONCAT44(fVar9,fVar7);
    do {
      if (fVar3 * fVar3 + fVar4 * fVar4 <= (float)param_7) {
        iVar2 = *param_9;
        if (param_8 != 0) {
          pfVar1 = (float *)(param_8 + (long)iVar2 * 8);
          *pfVar1 = param_5;
          pfVar1[1] = param_6;
        }
        *param_9 = iVar2 + 1;
        return;
      }
      FUN_100647b80(param_1,param_2,(param_3 + (float)param_1) * 0.5,
                    (param_4 + (float)param_2) * 0.5,uVar8 >> 0x20,uVar8,param_7,param_8,param_9,
                    param_10);
      fVar3 = param_4 + param_6;
      fVar4 = param_3 + param_5;
      param_4 = fVar3 * 0.5;
      param_3 = fVar4 * 0.5;
      fVar7 = (float)uVar8 + param_6;
      fVar9 = (float)(uVar8 >> 0x20) + param_5;
      fVar5 = (fVar7 + fVar3) * (float)uVar10;
      fVar6 = (fVar9 + fVar4) * fVar11;
      fVar3 = -fVar5 + fVar7 * 0.5;
      fVar4 = -fVar6 + fVar9 * 0.5;
      param_10 = param_10 + 1;
      param_1 = uVar8 >> 0x20;
      param_2 = uVar8;
      uVar8 = CONCAT44(fVar6,fVar5);
    } while (param_10 != 0x12);
  }
  return;
}




void FUN_100647cd0(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  
  iVar5 = (int)param_2;
  while (0xc < iVar5) {
    puVar8 = (undefined8 *)((long)param_1 + (param_2 >> 1 & 0x7fffffff) * 0x14);
    fVar18 = *(float *)((long)puVar8 + 4);
    iVar5 = (int)param_2;
    uVar7 = (ulong)(iVar5 - 1);
    fVar17 = *(float *)((long)param_1 + uVar7 * 0x14 + 4);
    if (fVar18 <= *(float *)((long)param_1 + 4) == fVar18 < fVar17) {
      uVar1 = 0;
      if (fVar17 <= *(float *)((long)param_1 + 4) == fVar18 < fVar17) {
        uVar1 = uVar7;
      }
      puVar9 = (undefined8 *)((long)param_1 + uVar1 * 0x14);
      uVar15 = puVar9[1];
      uVar13 = *puVar9;
      uVar2 = *(undefined4 *)(puVar9 + 2);
      uVar16 = puVar8[1];
      uVar14 = *puVar8;
      *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar8 + 2);
      puVar9[1] = uVar16;
      *puVar9 = uVar14;
      *(undefined4 *)(puVar8 + 2) = uVar2;
      puVar8[1] = uVar15;
      *puVar8 = uVar13;
    }
    uVar15 = param_1[1];
    uVar13 = *param_1;
    uVar2 = *(undefined4 *)(param_1 + 2);
    uVar16 = puVar8[1];
    uVar14 = *puVar8;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar8 + 2);
    param_1[1] = uVar16;
    *param_1 = uVar14;
    *(undefined4 *)(puVar8 + 2) = uVar2;
    puVar8[1] = uVar15;
    *puVar8 = uVar13;
    lVar10 = 1;
    while( true ) {
      iVar6 = (int)lVar10;
      lVar10 = (long)iVar6;
      iVar11 = iVar6 + -1;
      lVar4 = (lVar10 * 4 + (long)iVar6) * 4;
      do {
        lVar12 = lVar4;
        lVar10 = lVar10 + 1;
        iVar11 = iVar11 + 1;
        lVar4 = lVar12 + 0x14;
      } while (*(float *)((long)param_1 + lVar12 + 4) < *(float *)((long)param_1 + 4));
      puVar8 = (undefined8 *)((long)param_1 + (long)(int)uVar7 * 0x14 + 0x14);
      do {
        puVar9 = puVar8;
        param_2 = uVar7;
        iVar6 = (int)param_2;
        uVar7 = (ulong)(iVar6 - 1);
        puVar8 = (undefined8 *)((long)puVar9 + -0x14);
      } while (*(float *)((long)param_1 + 4) < *(float *)(puVar9 + -2));
      if (iVar6 <= iVar11) break;
      uVar15 = *(undefined8 *)((long)param_1 + lVar12 + 8);
      uVar13 = *(undefined8 *)((long)param_1 + lVar12);
      uVar2 = *(undefined4 *)((long)param_1 + lVar12 + 0x10);
      uVar16 = *(undefined8 *)((long)puVar9 + -0xc);
      uVar14 = *puVar8;
      *(undefined4 *)((long)param_1 + lVar12 + 0x10) = *(undefined4 *)((long)puVar9 + -4);
      *(undefined8 *)((long)param_1 + lVar12 + 8) = uVar16;
      *(undefined8 *)((long)param_1 + lVar12) = uVar14;
      *(undefined4 *)((long)puVar9 + -4) = uVar2;
      *(undefined8 *)((long)puVar9 + -0xc) = uVar15;
      *puVar8 = uVar13;
    }
    uVar3 = iVar5 - iVar11;
    if (iVar6 < (int)uVar3) {
      FUN_100647cd0(param_1,param_2);
      param_2 = (ulong)uVar3;
      param_1 = (undefined8 *)((long)param_1 + lVar12);
    }
    else {
      FUN_100647cd0((undefined8 *)((long)param_1 + lVar12),(ulong)uVar3);
    }
    iVar5 = (int)param_2;
  }
  return;
}




void FUN_100647e9c(float param_1,float param_2,float param_3,float param_4,long param_5,int param_6,
                  long param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  if (((param_2 == param_4) || (fVar5 = *(float *)(param_7 + 0x1c), fVar5 < param_2)) ||
     (fVar6 = *(float *)(param_7 + 0x18), param_4 < fVar6)) {
    return;
  }
  if (param_2 < fVar6) {
    param_1 = ((fVar6 - param_2) * (param_3 - param_1)) / (param_4 - param_2) + param_1;
    param_2 = fVar6;
  }
  if (fVar5 < param_4) {
    param_3 = ((param_3 - param_1) * (fVar5 - param_4)) / (param_4 - param_2) + param_3;
    param_4 = fVar5;
  }
  fVar5 = (float)param_6;
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (param_1 <= fVar5) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_3) && !NAN(fVar5)) {
      bVar1 = param_3 < fVar5;
      bVar2 = param_3 == fVar5;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    fVar5 = *(float *)(param_7 + 0x14) * (param_4 - param_2);
    pfVar4 = (float *)(param_5 + (long)param_6 * 4);
    fVar6 = *pfVar4;
  }
  else {
    fVar6 = (float)(param_6 + 1);
    bVar1 = true;
    bVar2 = false;
    if (fVar6 <= param_1) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(param_3) && !NAN(fVar6)) {
        bVar1 = param_3 < fVar6;
        bVar2 = false;
      }
    }
    if (bVar1 == bVar2) {
      return;
    }
    fVar6 = ((param_4 - param_2) +
            (param_4 - param_2) * ((-(fVar5 * -2.0) - param_1) - param_3) * 0.5) *
            *(float *)(param_7 + 0x14);
    pfVar4 = (float *)(param_5 + (long)param_6 * 4);
    fVar5 = *pfVar4;
  }
  *pfVar4 = fVar6 + fVar5;
  return;
}




void FUN_100647f84(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x28);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0x28;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar7 = puVar5[1];
        uVar6 = *puVar5;
        uVar9 = puVar5[3];
        uVar8 = puVar5[2];
        puVar4[4] = puVar5[4];
        puVar4[1] = uVar7;
        *puVar4 = uVar6;
        puVar4[3] = uVar9;
        puVar4[2] = uVar8;
        puVar5 = puVar5 + 5;
        puVar4 = puVar4 + 5;
        lVar3 = lVar3 + -0x28;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_100648014(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0xc);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0xc;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
        *puVar4 = uVar6;
        puVar5 = (undefined8 *)((long)puVar5 + 0xc);
        lVar3 = lVar3 + -0xc;
        puVar4 = (undefined8 *)((long)puVar4 + 0xc);
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




undefined8 * FUN_1006480a0(undefined8 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar4;
  undefined8 *puVar3;
  
  *param_1 = &PTR_thunk_FUN_100648148_1014a56e0;
  lVar4 = 8;
  do {
    puVar1 = (undefined4 *)((long)param_1 + lVar4);
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    puVar1[6] = 0;
    puVar1[0x252] = 0;
    lVar4 = lVar4 + 0x950;
  } while ((undefined8 *)(puVar1 + 0x254) != param_1 + 0x2541);
  lVar4 = 0x2400;
  puVar3 = param_1 + 0x2549;
  do {
    puVar3[-3] = 0;
    puVar3[-2] = 0;
    *(undefined2 *)puVar3 = 0;
    lVar4 = lVar4 + -0x48;
    puVar3 = puVar3 + 9;
  } while (lVar4 != 0);
  puVar3 = param_1 + 0x29c1;
  lVar4 = 0xd00;
  do {
    lVar2 = FUN_100645ca0(puVar3);
    *(undefined2 *)(lVar2 + 0x60) = 0;
    puVar3 = (undefined8 *)(lVar2 + 0x68);
    lVar4 = lVar4 + -0x68;
  } while (lVar4 != 0);
  return param_1;
}




undefined8 * thunk_FUN_1006480a0(undefined8 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar4;
  undefined8 *puVar3;
  
  *param_1 = &PTR_thunk_FUN_100648148_1014a56e0;
  lVar4 = 8;
  do {
    puVar1 = (undefined4 *)((long)param_1 + lVar4);
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    puVar1[6] = 0;
    puVar1[0x252] = 0;
    lVar4 = lVar4 + 0x950;
  } while ((undefined8 *)(puVar1 + 0x254) != param_1 + 0x2541);
  lVar4 = 0x2400;
  puVar3 = param_1 + 0x2549;
  do {
    puVar3[-3] = 0;
    puVar3[-2] = 0;
    *(undefined2 *)puVar3 = 0;
    lVar4 = lVar4 + -0x48;
    puVar3 = puVar3 + 9;
  } while (lVar4 != 0);
  puVar3 = param_1 + 0x29c1;
  lVar4 = 0xd00;
  do {
    lVar2 = FUN_100645ca0(puVar3);
    *(undefined2 *)(lVar2 + 0x60) = 0;
    puVar3 = (undefined8 *)(lVar2 + 0x68);
    lVar4 = lVar4 + -0x68;
  } while (lVar4 != 0);
  return param_1;
}




undefined8 * FUN_100648148(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar3 = 0;
  *param_1 = &PTR_thunk_FUN_100648148_1014a56e0;
  do {
    if ((*(int *)(param_1 + lVar3 * 0x12a + 1) != 0) &&
       (*(short *)(param_1 + lVar3 * 0x12a + 0x12a) != 0)) {
      do {
        FUN_100648268(param_1,lVar3);
      } while (*(short *)(param_1 + lVar3 * 0x12a + 0x12a) != 0);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x20);
  puVar4 = param_1 + 0x29be;
  lVar3 = -0x2400;
  do {
    if ((void *)*puVar4 != (void *)0x0) {
      operator_delete__((void *)*puVar4);
      puVar4[-1] = 0;
      *puVar4 = 0;
    }
    puVar4 = puVar4 + -9;
    lVar3 = lVar3 + 0x48;
  } while (lVar3 != 0);
  puVar4 = param_1 + 0x2409;
  puVar2 = param_1 + 0x2541;
  do {
    uVar1 = *(uint *)(puVar2 + -0x127);
    if (uVar1 != 0) {
      lVar3 = (ulong)uVar1 * 0x90;
      do {
        if (*(int *)((long)puVar4 + lVar3) != 0) {
          *(undefined4 *)((long)puVar4 + lVar3) = 0;
        }
        lVar3 = lVar3 + -0x90;
      } while (lVar3 != 0);
      *(uint *)(puVar2 + -0x127) = 0;
    }
    puVar5 = puVar2 + -0x12a;
    if ((void *)puVar2[-0x128] != (void *)0x0) {
      operator_delete__((void *)puVar2[-0x128]);
      puVar2[-0x129] = 0;
      puVar2[-0x128] = 0;
    }
    puVar4 = puVar4 + -0x12a;
    puVar2 = puVar5;
  } while (puVar5 != param_1 + 1);
  return param_1;
}




void FUN_100648268(long param_1,ulong param_2)

{
  short sVar1;
  long lVar2;
  
  lVar2 = param_1 + (param_2 & 0xff) * 0x950;
  sVar1 = *(short *)(lVar2 + 0x950) + -1;
  *(short *)(lVar2 + 0x950) = sVar1;
  if (sVar1 == 0) {
    lVar2 = param_1 + (param_2 & 0xff) * 0x950;
    FUN_100646088(lVar2 + 0x10,param_1);
    *(undefined4 *)(lVar2 + 8) = 0;
  }
  return;
}




void thunk_FUN_100648148(void)

{
  FUN_100648148();
  return;
}




void FUN_1006482c0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100648148();
  operator_delete(pvVar1);
  return;
}




bool FUN_1006482d4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  
  uVar3 = FUN_1004d2524(param_2);
  iVar4 = FUN_100015208(param_2,uVar3,0x12345678);
  if (*(int *)(param_1 + 8) == iVar4) {
    uVar5 = 0;
    bVar2 = true;
  }
  else {
    piVar7 = (int *)(param_1 + 0x958);
    uVar5 = 0;
    do {
      uVar6 = uVar5;
      if (uVar6 == 0x1f) {
        if (param_3 == (undefined1 *)0x0) {
          return false;
        }
        *param_3 = DAT_101872b90;
        return false;
      }
      iVar1 = *piVar7;
      piVar7 = piVar7 + 0x254;
      uVar5 = uVar6 + 1;
    } while (iVar1 != iVar4);
    bVar2 = uVar6 < 0x1f;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = (char)uVar5;
  }
  return bVar2;
}




void FUN_100648388(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_1004e2fec(&DAT_101d911b0);
  FUN_1006483d8(param_2,uVar1 ^ 1 | (uint)(DAT_101d911c8 < 0x20000001),0);
  return;
}




void FUN_1006483d8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1010af6e0();
  FUN_1010aef94(uVar1,param_1,param_2);
  uVar1 = FUN_1010af6e0();
  FUN_1010af2cc(uVar1,param_1,0,0,param_3 ^ 1);
  return;
}




void FUN_100648428(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1010af6e0();
  FUN_1010af6ec(uVar1,param_2);
  return;
}




ulong FUN_10064844c(long param_1,undefined8 param_2)

{
  undefined8 ****ppppuVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_80;
  undefined8 ***local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 ***local_60 [2];
  char local_49;
  byte local_48 [8];
  
  local_48[0] = 0;
  iVar2 = FUN_1006482d4(param_1,param_2,local_48);
  if (iVar2 == 0) {
    uVar3 = FUN_1004d2524(param_2);
    uVar3 = FUN_100015208(param_2,uVar3,0x12345678);
    uVar6 = 0;
    lVar7 = param_1;
    do {
      if (*(int *)(lVar7 + 8) == 0) {
        FUN_1006485bc(local_60,param_2);
        ppppuVar1 = (undefined8 ****)local_60[0];
        if (-1 < local_49) {
          ppppuVar1 = local_60;
        }
        uVar4 = FUN_100658c88(ppppuVar1,1);
        if ((int)uVar4 != -1) {
          *(undefined4 *)(lVar7 + 8) = uVar3;
          *(undefined4 *)(lVar7 + 0x950) = 0x10000;
          local_78 = (undefined8 ****)0x0;
          uStack_70 = 0;
          local_68 = 0;
          FUN_100658d20(param_2,&local_78);
          local_80 = 0;
          uVar5 = FUN_100658cc4(uVar4,&local_80);
          ppppuVar1 = (undefined8 ****)local_78;
          if (-1 < local_68) {
            ppppuVar1 = &local_78;
          }
          FUN_100645738(lVar7 + 0x10,param_1,local_80,uVar5,ppppuVar1);
          FUN_100658cd8(uVar4,local_80);
          FUN_100658c9c(uVar4);
          if (local_68 < 0) {
            operator_delete(local_78);
          }
        }
        if (-1 < local_49) {
          return uVar6;
        }
        operator_delete(local_60[0]);
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x950;
    } while (uVar6 != 0x20);
    uVar6 = (ulong)DAT_101872b90;
  }
  else {
    uVar6 = (ulong)local_48[0];
    param_1 = param_1 + uVar6 * 0x950;
    *(short *)(param_1 + 0x952) = *(short *)(param_1 + 0x952) + 1;
  }
  return uVar6;
}




void FUN_1006485bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 **local_48 [2];
  char local_31;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar3 = FUN_1004e0124();
  FUN_100648abc(local_48,param_2,uVar3);
  pppuVar2 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar2 = local_48;
  }
  FUN_1006581d8(pppuVar2,param_1);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  puVar1 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    puVar1 = param_1;
  }
  uVar4 = FUN_100658cfc(puVar1);
  if ((uVar4 & 1) == 0) {
    FUN_10001549c(local_48,param_2);
    pppuVar2 = (undefined8 ***)local_48[0];
    if (-1 < local_31) {
      pppuVar2 = local_48;
    }
    FUN_1006581d8(pppuVar2,param_1);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  return;
}




long FUN_100648684(long param_1,ulong param_2,short *param_3)

{
  short sVar1;
  long lVar2;
  short *psVar3;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  
  lVar2 = 0;
  psVar3 = (short *)(param_1 + 0x12a48);
  do {
    sVar1 = *psVar3;
    if (((sVar1 != 0) && (*(long *)(psVar3 + -0x20) == param_1 + (param_2 & 0xff) * 0x68 + 0x14e08))
       && (psVar3[-0x1a] == *param_3)) goto LAB_10064874c;
    lVar2 = lVar2 + 1;
    psVar3 = psVar3 + 0x24;
  } while (lVar2 != 0x80);
  lVar2 = 0;
  psVar3 = (short *)(param_1 + 0x12a48);
  while (*psVar3 != 0) {
    lVar2 = lVar2 + 1;
    psVar3 = psVar3 + 0x24;
    if (lVar2 == 0x80) {
      return 0xffff;
    }
  }
  local_40 = *(undefined8 *)param_3;
  uStack_38 = (undefined4)*(undefined8 *)(param_3 + 4);
  uStack_2c = *(undefined8 *)(param_3 + 10);
  uStack_34 = (undefined4)*(undefined8 *)(param_3 + 6);
  uStack_30 = (undefined4)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20);
  FUN_100645f50(psVar3 + -0x20,param_1,param_2 & 0xff,&local_40);
  sVar1 = *psVar3;
LAB_10064874c:
  *psVar3 = sVar1 + 1;
  return lVar2;
}




long FUN_100648768(long param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  long lVar4;
  short *psVar5;
  
  if (param_3 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x811c9dc5;
    cVar1 = *param_3;
    while (cVar1 != '\0') {
      param_3 = param_3 + 1;
      uVar3 = (uVar3 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_3;
    }
  }
  lVar4 = 0;
  psVar5 = (short *)(param_1 + 0x14e68);
  do {
    sVar2 = *psVar5;
    if ((sVar2 != 0) && (*(uint *)(psVar5 + -4) == uVar3)) goto LAB_10064882c;
    lVar4 = lVar4 + 1;
    psVar5 = psVar5 + 0x34;
  } while (lVar4 != 0x20);
  lVar4 = 0;
  psVar5 = (short *)(param_1 + 0x14e68);
  while (*psVar5 != 0) {
    lVar4 = lVar4 + 1;
    psVar5 = psVar5 + 0x34;
    if (lVar4 == 0x20) {
      return 0xff;
    }
  }
  FUN_100645cb8(psVar5 + -0x30,param_1,param_2);
  sVar2 = *psVar5;
LAB_10064882c:
  *psVar5 = sVar2 + 1;
  return lVar4;
}




void FUN_100648844(long param_1,ulong param_2)

{
  param_1 = param_1 + (param_2 & 0xff) * 0x950;
  *(short *)(param_1 + 0x950) = *(short *)(param_1 + 0x950) + 1;
  return;
}




void FUN_100648860(long param_1,long param_2)

{
  short sVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  lVar3 = param_1 + 0x129c0;
  do {
    lVar3 = lVar3 + 0x48;
    if (lVar3 == param_2) goto LAB_10064889c;
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x80);
  uVar2 = 0xffffffff;
LAB_10064889c:
  lVar3 = param_1 + (uVar2 & 0xffffffff) * 0x48;
  sVar1 = *(short *)(lVar3 + 0x12a48) + -1;
  *(short *)(lVar3 + 0x12a48) = sVar1;
  if (sVar1 != 0) {
    return;
  }
  FUN_10064a1b8((uint)uVar2 & 0xffff);
  FUN_100645660(param_1 + (uVar2 & 0xffffffff) * 0x48 + 0x12a08,param_1);
  return;
}




void FUN_1006488fc(long param_1,long param_2)

{
  short sVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  lVar3 = param_1 + 0x14da0;
  do {
    lVar3 = lVar3 + 0x68;
    if (lVar3 == param_2) goto LAB_10064892c;
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x20);
  uVar2 = 0xffffffff;
LAB_10064892c:
  lVar3 = param_1 + (uVar2 & 0xffffffff) * 0x68;
  sVar1 = *(short *)(lVar3 + 0x14e68) + -1;
  *(short *)(lVar3 + 0x14e68) = sVar1;
  if (sVar1 != 0) {
    return;
  }
  FUN_1006452d8(param_1 + (uVar2 & 0xffffffff) * 0x68 + 0x14e08,param_1);
  return;
}




long FUN_100648974(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_1006456a4(param_1 + (param_2 & 0xff) * 0x950 + 0x10,0x61);
  lVar2 = *(long *)(*(long *)(param_1 + (uVar1 & 0xffff) * 0x48 + 0x12a08) + 0x50);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar3 = *(long *)(lVar2 + 8);
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = lVar3 + 0x30;
    }
  }
  return lVar2;
}




long FUN_1006489e0(long param_1,ulong param_2)

{
  return param_1 + (param_2 & 0xff) * 0x950 + 0x10;
}




long FUN_1006489f4(long param_1,ulong param_2)

{
  return param_1 + (param_2 & 0xffff) * 0x48 + 0x12a08;
}




long FUN_100648a10(long param_1,ulong param_2)

{
  return param_1 + (param_2 & 0xff) * 0x68 + 0x14e08;
}




long FUN_100648a2c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  param_1 = param_1 + 0x129c0;
  do {
    param_1 = param_1 + 0x48;
    if (param_1 == param_2) {
      return lVar1;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x80);
  return 0xffff;
}




void FUN_100648a60(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_3 = param_3 + 0x12a08;
  lVar1 = 0x80;
  do {
    if (*(short *)(param_3 + 0x40) != 0) {
      FUN_10064563c(param_1,param_2,param_3);
    }
    param_3 = param_3 + 0x48;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}




void FUN_100648abc(char *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  FUN_10001549c(param_1,param_2);
  if ((param_3 != 0) && (uVar1 = FUN_1004d2538(param_3), (uVar1 & 1) == 0)) {
    std::string::append(param_1);
    std::string::append(param_1);
    return;
  }
  return;
}




undefined8 * FUN_100648b1c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar1 = param_1 + 0x1b;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  puVar3 = param_1 + 0x19;
  param_1[0x1a] = 0;
  *puVar3 = 0;
  FUN_1010b73bc(puVar1);
  param_1[0x21] = 0;
  *(float *)(param_1 + 0x22) = (float)(param_2 & 0xffffffff);
  *(undefined4 *)((long)param_1 + 0x114) = 0x3f800000;
  param_1[0x23] = DAT_101873a38;
  *(undefined1 *)(param_1 + 0x24) = 1;
  FUN_1004e4464(param_1 + 0x25,0);
  FUN_100648c80(puVar3,param_2,0,0);
  FUN_100648d10(param_1 + 0xe,param_2,param_2,param_1[0x1a],*(undefined4 *)puVar3);
  FUN_1010b7478(puVar1,1);
  FUN_1010b75c4(puVar1,0,param_2,param_2,1,0xb,0);
  FUN_1010b7a18(puVar1,0,0,0);
  FUN_1010b7a3c(puVar1,1,1,0);
  uVar4 = (ulong)(uint)((int)param_2 * (int)param_2);
  pvVar2 = (void *)FUN_1004d288c(uVar4);
  param_1[0x21] = pvVar2;
  if (pvVar2 != (void *)0x0) {
    _bzero(pvVar2,uVar4);
    FUN_1010b75c4(puVar1,param_1[0x21],param_2,param_2,1,0xb,0);
  }
  return param_1;
}




void FUN_100648c80(uint *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = (uint)param_2;
  if (uVar2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < uVar2) {
      FUN_10064a3cc(param_1,param_2);
    }
    uVar1 = *param_1;
    if (uVar1 < uVar2) {
      lVar3 = (ulong)uVar1 << 4;
      lVar4 = (param_2 & 0xffffffff) - (ulong)uVar1;
      do {
        lVar5 = *(long *)(param_1 + 2);
        *(undefined8 *)(lVar5 + lVar3) = param_3;
        ((undefined8 *)(lVar5 + lVar3))[1] = param_4;
        lVar3 = lVar3 + 0x10;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_100648d10(int *param_1,int param_2,int param_3,long param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_5 < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)(param_5 - 1U);
    uVar3 = uVar2 + 1 & 0x1fffffffe;
    plVar4 = (long *)(param_4 + 0x18);
    uVar6 = 1;
    uVar5 = 0;
    do {
      if (uVar5 <= uVar2 - 1) {
        plVar4[-2] = param_4 + (uVar5 + 1) * 0x10;
      }
      if (uVar6 <= uVar2 - 1) {
        *plVar4 = param_4 + (uVar6 + 1) * 0x10;
      }
      uVar5 = uVar5 + 2;
      uVar6 = uVar6 + 2;
      plVar4 = plVar4 + 4;
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  *(undefined8 *)(param_4 + uVar2 * 0x10 + 8) = 0;
  param_1[3] = 1;
  param_1[4] = 0;
  param_1[10] = 0;
  *(int **)(param_1 + 6) = param_1 + 10;
  *(long *)(param_1 + 8) = param_4;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[5] = param_5;
  iVar1 = 0;
  if (param_5 != 0) {
    iVar1 = (int)((param_5 - 1U) + param_2) / param_5;
  }
  param_1[2] = iVar1;
  *(short *)(param_1 + 0xe) = (short)param_2;
  *(int **)(param_1 + 0xc) = param_1 + 0xe;
  *(undefined2 *)((long)param_1 + 0x3a) = 0xffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}




void FUN_100648de8(long param_1)

{
  _free(*(void **)(param_1 + 0x108));
  *(undefined8 *)(param_1 + 0x108) = 0;
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x128));
  FUN_1010b7434(param_1 + 0xd8);
  if (*(void **)(param_1 + 0xd0) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0xd0));
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(void **)(param_1 + 0xc0) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(void **)(param_1 + 0x68) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  FUN_10064a340(param_1 + 0x30);
  FUN_10064a340(param_1);
  return;
}




void FUN_100648e5c(uint *param_1,short *param_2,ulong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long alStack_40 [2];
  
  alStack_40[1] = *(long *)PTR____stack_chk_guard_101444218;
  if ((param_3 & 1) == 0) {
    _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x4a));
  }
  if (param_2 == (short *)0x0) {
    FUN_100648d10(param_1 + 0x1c,(int)(float)param_1[0x44],(int)(float)param_1[0x44],
                  *(undefined8 *)(param_1 + 0x34),param_1[0x32]);
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  else {
    sVar3 = *param_2;
    lVar12 = (long)alStack_40 - ((long)(int)param_1[4] * 9 + 0xfU & 0xfffffffffffffff0);
    uVar5 = *param_1;
    lVar7 = *(long *)(param_1 + 2);
    uVar2 = 0;
    do {
      uVar8 = uVar2;
      if (uVar5 == uVar8) goto LAB_100648fc8;
      uVar2 = uVar8 + 1;
    } while (*(int *)(lVar7 + (ulong)uVar8 * 8 + 4) == -1);
    if (uVar5 + 1 != uVar8 + 1) {
      uVar13 = 0;
      lVar9 = *(long *)(param_1 + 8);
      do {
        puVar10 = (undefined8 *)(lVar9 + (ulong)*(uint *)(lVar7 + (ulong)uVar8 * 8 + 4) * 0xc);
        if (*(short *)((long)puVar10 + 1) != sVar3) {
          uVar11 = *puVar10;
          puVar1 = (undefined8 *)(lVar12 + uVar13 * 9);
          *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar10 + 1);
          *puVar1 = uVar11;
          uVar13 = (ulong)((int)uVar13 + 1);
        }
        uVar2 = uVar5;
        if (uVar5 <= uVar8 + 1) {
          uVar2 = uVar8 + 1;
        }
        do {
          uVar8 = uVar8 + 1;
          uVar4 = uVar2;
          if (uVar5 <= uVar8) break;
          uVar4 = uVar8;
        } while (*(int *)(lVar7 + (ulong)uVar8 * 8 + 4) == -1);
        uVar8 = uVar4;
      } while (uVar5 != uVar8);
      uVar6 = FUN_10064900c(param_1);
      if ((int)uVar13 != 0) {
        do {
          uVar6 = FUN_100649080(param_1,lVar12,lVar12);
          lVar12 = lVar12 + 9;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      goto LAB_100648fd0;
    }
  }
LAB_100648fc8:
  uVar6 = FUN_10064900c(param_1);
LAB_100648fd0:
  if ((param_3 & 1) == 0) {
    uVar5 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x4a));
    uVar6 = (ulong)uVar5;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != alStack_40[1]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar6);
  }
  return;
}




void FUN_10064900c(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 0xc) = param_1[10];
        param_1[10] = uVar1;
        uVar4 = *param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  param_1[4] = 0;
  if (*(long *)(param_1 + 8) != 0) {
    param_1[6] = 0;
  }
  param_1[10] = 0xffffffff;
  return;
}




void FUN_100649080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_100015208(param_2,9,0xfacefeed);
  lVar3 = FUN_100034344(param_1,uVar2);
  uVar1 = FUN_10064a448(param_1,param_3);
  *(undefined4 *)(lVar3 + 4) = uVar1;
  return;
}




void FUN_1006490dc(long param_1,undefined1 param_2,uint *param_3,int param_4,ulong param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_70;
  uint local_6f;
  float local_6b;
  
  uVar2 = FUN_1006489e0(DAT_101dbd2e8,param_2);
  if (param_4 != 0) {
    uVar4 = param_5 & 0xffffffff;
    do {
      uVar1 = *param_3;
      if ((uVar1 & 0xffff) != 0xffff || uVar1 >> 0x10 != 0xffff) {
        param_5 = param_5 & 0xffffffff00000000 | (ulong)uVar1;
        lVar3 = FUN_10064637c(uVar2,param_5);
        if ((*(float *)(lVar3 + 0x10) != 0.0) && (*(float *)(lVar3 + 0x14) != 0.0)) {
          local_70 = param_2;
          local_6f = uVar1;
          local_6b = *(float *)(lVar3 + 0x14);
          FUN_1006491cc(param_1 + 0x30,&local_70,&local_70);
        }
      }
      param_3 = (uint *)((long)param_3 + uVar4);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}




undefined8 FUN_1006491cc(uint *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar3 = FUN_100015208(param_2,9,0xfacefeed);
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar3 / uVar1;
    }
    uVar7 = (ulong)(uVar3 - uVar2 * uVar1);
    lVar5 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar5 + uVar7 * 8) != uVar3) {
      do {
        if (*(int *)(lVar5 + uVar7 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar7) {
          uVar2 = (uint)uVar7;
        }
        uVar7 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar5 + uVar7 * 8) != uVar3);
      if ((int)uVar7 == -1) goto LAB_10064928c;
    }
    uVar1 = *(uint *)(lVar5 + uVar7 * 8 + 4);
    if (uVar1 != 0xffffffff) {
      puVar6 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 0xc);
      uVar8 = *param_3;
      *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(param_3 + 1);
      *puVar6 = uVar8;
      return 0;
    }
  }
LAB_10064928c:
  lVar5 = FUN_100034344(param_1);
  uVar4 = FUN_10064a448(param_1,param_3);
  *(undefined4 *)(lVar5 + 4) = uVar4;
  return 1;
}




ulong FUN_1006492bc(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar4 = _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x4a));
  puVar1 = param_1 + 0x18;
  if (*(long *)(param_1 + 0x1a) != 0) {
    *puVar1 = 0;
  }
  if (param_1[0x10] == 0) {
    return (ulong)uVar4;
  }
  puVar2 = param_1 + 0xc;
  lVar6 = *(long *)(param_1 + 0xe);
  uVar4 = 0;
  do {
    uVar8 = uVar4;
    if (param_1[0xc] == uVar8) goto LAB_10064944c;
    uVar4 = uVar8 + 1;
  } while (*(int *)(lVar6 + (ulong)uVar8 * 8 + 4) == -1);
  if (param_1[0xc] + 1 != uVar8 + 1) {
    do {
      uVar5 = FUN_100015208(*(long *)(param_1 + 0x14) +
                            (ulong)*(uint *)(lVar6 + (ulong)uVar8 * 8 + 4) * 0xc,9,0xfacefeed);
      uVar4 = *param_1;
      if (uVar4 == 0) {
LAB_1006493c8:
        FUN_1006495dc(puVar1,*(long *)(param_1 + 0x14) +
                             (ulong)*(uint *)(*(long *)(param_1 + 0xe) + (ulong)uVar8 * 8 + 4) * 0xc
                     );
      }
      else {
        uVar3 = 0;
        if (uVar4 != 0) {
          uVar3 = uVar5 / uVar4;
        }
        uVar7 = (ulong)(uVar5 - uVar3 * uVar4);
        lVar6 = *(long *)(param_1 + 2);
        if (*(uint *)(lVar6 + uVar7 * 8) != uVar5) {
          do {
            if (*(int *)(lVar6 + uVar7 * 8 + 4) == -1) break;
            uVar3 = uVar4;
            if (0 < (int)(uint)uVar7) {
              uVar3 = (uint)uVar7;
            }
            uVar7 = (ulong)(uVar3 - 1);
          } while (*(uint *)(lVar6 + uVar7 * 8) != uVar5);
          if ((int)uVar7 == -1) goto LAB_1006493c8;
        }
        if (*(int *)(lVar6 + uVar7 * 8 + 4) == -1) goto LAB_1006493c8;
      }
      uVar5 = *puVar2;
      uVar4 = uVar5;
      if (uVar5 <= uVar8 + 1) {
        uVar4 = uVar8 + 1;
      }
      do {
        uVar8 = uVar8 + 1;
        uVar3 = uVar4;
        if (uVar5 <= uVar8) break;
        uVar3 = uVar8;
      } while (*(int *)(*(long *)(param_1 + 0xe) + (ulong)uVar8 * 8 + 4) == -1);
      uVar8 = uVar3;
      if (uVar5 == uVar8) break;
      lVar6 = *(long *)(param_1 + 0xe);
    } while( true );
  }
LAB_10064944c:
  if (*puVar1 != 0) {
    param_1[0x45] = 0x3f800000;
    uVar7 = FUN_100649668(param_1);
    if ((uVar7 & 1) == 0) {
      FUN_100648d10(param_1 + 0x1c,(int)(float)param_1[0x44],(int)(float)param_1[0x44],
                    *(undefined8 *)(param_1 + 0x34),param_1[0x32]);
      *(undefined1 *)(param_1 + 0x48) = 1;
      FUN_10064900c(param_1);
      if (*(long *)(param_1 + 0x1a) != 0) {
        *puVar1 = 0;
      }
      FUN_100649c50(puVar1,param_1[0x10]);
      lVar6 = *(long *)(param_1 + 0xe);
      uVar4 = 0;
      do {
        uVar8 = uVar4;
        if (param_1[0xc] == uVar8) goto LAB_1006494e4;
        uVar4 = uVar8 + 1;
      } while (*(int *)(lVar6 + (ulong)uVar8 * 8 + 4) == -1);
      if (param_1[0xc] + 1 != uVar8 + 1) {
        do {
          FUN_1006495dc(puVar1,*(long *)(param_1 + 0x14) +
                               (ulong)*(uint *)(lVar6 + (ulong)uVar8 * 8 + 4) * 0xc);
          uVar5 = *puVar2;
          uVar4 = uVar5;
          if (uVar5 <= uVar8 + 1) {
            uVar4 = uVar8 + 1;
          }
          do {
            uVar8 = uVar8 + 1;
            uVar3 = uVar4;
            if (uVar5 <= uVar8) break;
            uVar3 = uVar8;
          } while (*(int *)(*(long *)(param_1 + 0xe) + (ulong)uVar8 * 8 + 4) == -1);
          uVar8 = uVar3;
          if (uVar5 == uVar8) break;
          lVar6 = *(long *)(param_1 + 0xe);
        } while( true );
      }
LAB_1006494e4:
      uVar7 = FUN_100649668(param_1);
      if ((uVar7 & 1) == 0) {
        uVar7 = 0;
        do {
          FUN_100648d10(param_1 + 0x1c,(int)(float)param_1[0x44],(int)(float)param_1[0x44],
                        *(undefined8 *)(param_1 + 0x34),param_1[0x32]);
          *(undefined1 *)(param_1 + 0x48) = 1;
          FUN_10064900c(param_1);
          param_1[0x45] = (&DAT_10117d974)[uVar7];
          uVar4 = FUN_100649668(param_1);
          if (1 < uVar7) break;
          uVar7 = uVar7 + 1;
        } while (uVar4 == 0);
        if (((uVar4 & 1) == 0) && (*(long *)(param_1 + 0x1a) != 0)) {
          *puVar1 = 0;
        }
      }
    }
  }
  uVar7 = FUN_10064900c(puVar2);
  return uVar7;
}




void FUN_1006495dc(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_100649c50(param_1,uVar3);
    uVar4 = *param_1;
  }
  uVar4 = uVar4 + 1;
  *param_1 = uVar4;
  lVar1 = (ulong)uVar4 + (ulong)uVar4 * 8 + *(long *)(param_1 + 2);
  uVar5 = *param_2;
  *(undefined1 *)(lVar1 + -1) = *(undefined1 *)(param_2 + 1);
  *(undefined8 *)(lVar1 + -9) = uVar5;
  return;
}




undefined8 FUN_100649668(long param_1)

{
  ushort *puVar1;
  undefined1 *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ushort *puVar13;
  undefined2 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  ushort *puVar18;
  int *piVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  size_t sVar23;
  ulong unaff_x22;
  long lVar24;
  ushort *puVar25;
  ushort *puVar26;
  ulong uVar27;
  int iVar28;
  ushort *puVar29;
  void *pvVar30;
  ushort *puVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  uint local_8c;
  int local_88;
  int local_84;
  
  FUN_100649cdc((uint *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x60),0,0);
  if (*(int *)(param_1 + 0x60) == 0) {
    pvVar30 = *(void **)(param_1 + 0xc0);
  }
  else {
    lVar21 = 0;
    lVar24 = 0;
    uVar27 = 0;
    fVar32 = *(float *)(param_1 + 0x114);
    fVar34 = *(float *)(param_1 + 0x118);
    fVar35 = *(float *)(param_1 + 0x11c);
    do {
      puVar2 = (undefined1 *)(*(long *)(param_1 + 0x68) + lVar24);
      uVar9 = FUN_1006489e0(DAT_101dbd2e8,*puVar2);
      unaff_x22 = unaff_x22 & 0xffffffff00000000 | (ulong)*(uint *)(puVar2 + 1);
      lVar10 = FUN_10064637c(uVar9,unaff_x22);
      fVar33 = *(float *)(lVar10 + 0x10);
      fVar36 = *(float *)(lVar10 + 0x14);
      pvVar30 = *(void **)(param_1 + 0xc0);
      puVar17 = (undefined4 *)((long)pvVar30 + lVar21);
      *puVar17 = (int)uVar27;
      *(short *)(puVar17 + 1) = (short)(int)((float)(int)(fVar34 * fVar32 * fVar33) + 1.0);
      *(short *)((long)puVar17 + 6) = (short)(int)((float)(int)(fVar35 * fVar32 * fVar36) + 1.0);
      uVar27 = uVar27 + 1;
      lVar24 = lVar24 + 9;
      lVar21 = lVar21 + 0x10;
    } while (uVar27 < *(uint *)(param_1 + 0x60));
  }
  uVar16 = *(uint *)(param_1 + 0xb8);
  sVar23 = (size_t)(int)uVar16;
  if (0 < (int)uVar16) {
    uVar27 = 0;
    puVar17 = (undefined4 *)((long)pvVar30 + 0xc);
    do {
      *puVar17 = (int)uVar27;
      uVar27 = uVar27 + 1;
      puVar17 = puVar17 + 4;
    } while (uVar16 != uVar27);
  }
  _qsort(pvVar30,sVar23,0x10,(int *)FUN_10064a24c);
  if ((int)uVar16 < 1) {
    _qsort(pvVar30,sVar23,0x10,(int *)FUN_10064a288);
  }
  else {
    uVar27 = 0;
    puVar1 = (ushort *)(param_1 + 0x88);
    uVar22 = (ulong)uVar16;
    do {
      uVar3 = *(ushort *)((long)pvVar30 + uVar27 * 0x10 + 4);
      if (uVar3 == 0) {
LAB_10064981c:
        *(undefined4 *)((long)pvVar30 + uVar27 * 0x10 + 8) = 0;
      }
      else {
        uVar4 = *(ushort *)((long)pvVar30 + uVar27 * 0x10 + 6);
        if (uVar4 == 0) goto LAB_10064981c;
        iVar20 = *(int *)(param_1 + 0x78);
        iVar6 = 0;
        if (iVar20 != 0) {
          iVar6 = (int)((uint)uVar3 + iVar20 + -1) / iVar20;
        }
        iVar6 = iVar6 * iVar20;
        puVar25 = *(ushort **)(param_1 + 0x88);
        uVar5 = *puVar25;
        puVar31 = (ushort *)0x0;
        if (*(int *)(param_1 + 0x70) < (int)(iVar6 + (uint)uVar5)) {
          local_8c = 0;
          iVar12 = *(int *)(param_1 + 0x80);
          iVar20 = 0x40000000;
          iVar28 = 0x40000000;
        }
        else {
          iVar20 = 0x40000000;
          puVar29 = puVar1;
          puVar26 = puVar31;
          iVar8 = 0x40000000;
          do {
            iVar7 = FUN_10064a2a0(puVar25,uVar5,iVar6,&local_84);
            iVar12 = *(int *)(param_1 + 0x80);
            puVar31 = puVar26;
            iVar28 = iVar8;
            if (iVar12 == 0) {
              puVar31 = puVar29;
              iVar28 = iVar7;
              if (iVar8 <= iVar7) {
                puVar31 = puVar26;
                iVar28 = iVar8;
              }
            }
            else if (((int)(iVar7 + (uint)uVar4) <= *(int *)(param_1 + 0x74)) &&
                    ((iVar7 < iVar8 || ((iVar7 == iVar8 && (local_84 < iVar20)))))) {
              puVar31 = puVar29;
              iVar20 = local_84;
              iVar28 = iVar7;
            }
            puVar29 = puVar25 + 4;
            puVar25 = *(ushort **)puVar29;
            uVar5 = *puVar25;
            puVar26 = puVar31;
            iVar8 = iVar28;
          } while ((int)(iVar6 + (uint)uVar5) <= *(int *)(param_1 + 0x70));
          if (puVar31 == (ushort *)0x0) {
            local_8c = 0;
          }
          else {
            local_8c = (uint)**(ushort **)puVar31;
          }
        }
        if (iVar12 == 1) {
          puVar26 = *(ushort **)puVar1;
          puVar25 = puVar1;
          puVar29 = puVar26;
          if ((int)(uint)*puVar26 < iVar6) {
            do {
              puVar29 = *(ushort **)(puVar29 + 4);
            } while (iVar6 - (uint)*puVar29 != 0 && (int)(uint)*puVar29 <= iVar6);
          }
          do {
            uVar16 = (uint)*puVar29 - iVar6;
            puVar18 = puVar26;
            do {
              puVar26 = puVar18;
              puVar13 = puVar25;
              puVar18 = *(ushort **)(puVar26 + 4);
              puVar25 = puVar26 + 4;
            } while ((int)(uint)*puVar18 <= (int)uVar16);
            iVar8 = FUN_10064a2a0(puVar26,uVar16,iVar6,&local_88);
            if (((int)(iVar8 + (uint)uVar4) < *(int *)(param_1 + 0x74) && iVar8 <= iVar28) &&
               (((iVar8 < iVar28 || (local_88 < iVar20)) ||
                ((local_88 == iVar20 && ((int)uVar16 < (int)local_8c)))))) {
              puVar31 = puVar13;
              iVar20 = local_88;
              local_8c = uVar16;
              iVar28 = iVar8;
            }
            puVar18 = puVar29 + 4;
            puVar25 = puVar13;
            puVar29 = *(ushort **)puVar18;
          } while (*(ushort **)puVar18 != (ushort *)0x0);
        }
        if (((puVar31 == (ushort *)0x0) ||
            (iVar20 = iVar28 + (uint)uVar4, *(int *)(param_1 + 0x74) < iVar20)) ||
           (puVar14 = *(undefined2 **)(param_1 + 0x90), puVar14 == (undefined2 *)0x0)) {
          *(undefined4 *)((long)pvVar30 + uVar27 * 0x10 + 8) = 0xffffffff;
        }
        else {
          *puVar14 = (short)local_8c;
          puVar14[1] = (short)iVar20;
          *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(puVar14 + 4);
          puVar25 = *(ushort **)puVar31;
          if ((int)(uint)*puVar25 < (int)local_8c) {
            puVar31 = puVar25 + 4;
            puVar25 = *(ushort **)puVar31;
          }
          *(undefined2 **)puVar31 = puVar14;
          iVar20 = local_8c + uVar3;
          puVar31 = puVar25 + 4;
          puVar29 = *(ushort **)puVar31;
          while ((puVar26 = puVar29, puVar26 != (ushort *)0x0 && ((int)(uint)*puVar26 <= iVar20))) {
            *(undefined8 *)puVar31 = *(undefined8 *)(param_1 + 0x90);
            *(ushort **)(param_1 + 0x90) = puVar25;
            puVar31 = puVar26 + 4;
            puVar25 = puVar26;
            puVar29 = *(ushort **)puVar31;
          }
          *(ushort **)(puVar14 + 4) = puVar25;
          if ((int)(uint)*puVar25 < iVar20) {
            *puVar25 = (ushort)iVar20;
          }
          *(short *)((long)pvVar30 + uVar27 * 0x10 + 8) = (short)local_8c;
          *(short *)((long)pvVar30 + uVar27 * 0x10 + 10) = (short)iVar28;
        }
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar22);
    _qsort(pvVar30,sVar23,0x10,(int *)FUN_10064a288);
    puVar15 = (uint *)((long)pvVar30 + 0xc);
    do {
      if ((short)puVar15[-1] == -1) {
        uVar16 = (uint)(*(short *)((long)puVar15 + -2) == -1);
      }
      else {
        uVar16 = 0;
      }
      *puVar15 = uVar16 ^ 1;
      uVar22 = uVar22 - 1;
      puVar15 = puVar15 + 4;
    } while (uVar22 != 0);
  }
  uVar16 = *(uint *)(param_1 + 0xb8);
  if (uVar16 == 0) {
LAB_100649b58:
    if (*(int *)(param_1 + 0x60) != 0) {
      lVar21 = 0;
      lVar24 = 0;
      uVar27 = 0;
      do {
        puVar2 = (undefined1 *)(*(long *)(param_1 + 0x68) + lVar24);
        uVar9 = FUN_1006489e0(DAT_101dbd2e8,*puVar2);
        lVar11 = FUN_10064637c(uVar9,*(undefined4 *)(puVar2 + 1));
        lVar10 = *(long *)(param_1 + 0xc0) + lVar21;
        uVar3 = *(ushort *)(lVar10 + 8);
        *(float *)(lVar11 + 0x18) = (float)uVar3 / *(float *)(param_1 + 0x110);
        uVar4 = *(ushort *)(lVar10 + 10);
        uVar5 = *(ushort *)(lVar10 + 4);
        *(float *)(lVar11 + 0x1c) = (float)uVar4 / *(float *)(param_1 + 0x110);
        *(float *)(lVar11 + 0x20) =
             (float)(((uint)uVar3 + (uint)uVar5) - 1) / *(float *)(param_1 + 0x110);
        *(float *)(lVar11 + 0x24) =
             (float)(((uint)uVar4 + (uint)*(ushort *)(lVar10 + 6)) - 1) /
             *(float *)(param_1 + 0x110);
        FUN_100649080(param_1,puVar2,puVar2);
        uVar27 = uVar27 + 1;
        lVar24 = lVar24 + 9;
        lVar21 = lVar21 + 0x10;
      } while (uVar27 < *(uint *)(param_1 + 0x60));
    }
    uVar9 = 1;
  }
  else {
    if (*(int *)(*(long *)(param_1 + 0xc0) + 0xc) != 0) {
      piVar19 = (int *)(*(long *)(param_1 + 0xc0) + 0x1c);
      uVar27 = 1;
      do {
        uVar22 = uVar27;
        if (uVar16 == uVar22) break;
        iVar20 = *piVar19;
        piVar19 = piVar19 + 4;
        uVar27 = uVar22 + 1;
      } while (iVar20 != 0);
      if (uVar16 <= uVar22) goto LAB_100649b58;
    }
    uVar9 = 0;
  }
  return uVar9;
}




void FUN_100649c50(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 8 + (ulong)param_2);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 9;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar5 + 1);
        *puVar4 = uVar6;
        puVar5 = (undefined8 *)((long)puVar5 + 9);
        lVar3 = lVar3 + -9;
        puVar4 = (undefined8 *)((long)puVar4 + 9);
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_100649cdc(uint *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = (uint)param_2;
  if (uVar2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < uVar2) {
      FUN_10064a608(param_1,param_2);
    }
    uVar1 = *param_1;
    if (uVar1 < uVar2) {
      lVar3 = (ulong)uVar1 << 4;
      lVar4 = (param_2 & 0xffffffff) - (ulong)uVar1;
      do {
        lVar5 = *(long *)(param_1 + 2);
        *(undefined8 *)(lVar5 + lVar3) = param_3;
        ((undefined8 *)(lVar5 + lVar3))[1] = param_4;
        lVar3 = lVar3 + 0x10;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar2;
  }
  return;
}




int FUN_100649d6c(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined2 *puVar10;
  void *pvVar11;
  ulong uVar12;
  int *piVar13;
  void *pvVar14;
  int *piVar15;
  undefined8 local_78 [5];
  
  uVar2 = *(uint *)(param_1 + 0x60);
  uVar12 = (ulong)uVar2;
  if (uVar2 != 0) {
    piVar13 = *(int **)(param_2 + 0x30);
    do {
      while (*piVar13 != 0) {
        ClearExclusiveLocal();
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar5) {
        *piVar13 = 100;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar3 = piVar13[10];
    piVar15 = piVar13 + (ulong)uVar3 * 4 + 2;
    pvVar14 = *(void **)piVar15;
    uVar1 = uVar2 << 2 | 1;
    if ((pvVar14 == (void *)0x0) ||
       (uVar7 = (ulong)*(uint *)((long)pvVar14 + 0x20000), pvVar11 = pvVar14,
       *(uint *)((long)pvVar14 + 0x20000) < uVar1)) {
      pvVar11 = *(void **)(piVar13 + (ulong)uVar3 * 4 + 4);
      if (pvVar11 == (void *)0x0) {
        pvVar11 = operator_new(0x20010);
        uVar7 = 0x20000;
        *(undefined4 *)((long)pvVar11 + 0x20000) = 0x20000;
        *(void **)((long)pvVar11 + 0x20008) = pvVar14;
        *(void **)piVar15 = pvVar11;
      }
      else {
        uVar8 = *(undefined8 *)((long)pvVar11 + 0x20008);
        *(void **)((long)pvVar11 + 0x20008) = pvVar14;
        *(void **)piVar15 = pvVar11;
        *(undefined8 *)(piVar13 + (ulong)uVar3 * 4 + 4) = uVar8;
        uVar7 = 0x20000;
        *(undefined4 *)((long)pvVar11 + 0x20000) = 0x20000;
      }
    }
    *(int *)((long)pvVar11 + 0x20000) = (int)uVar7 - uVar1;
    *piVar13 = 0;
    pvVar14 = (void *)((long)pvVar11 + 0x20000 + (1 - uVar7) & 0xfffffffffffffffe);
    if (pvVar14 != (void *)0x0) {
      lVar9 = 0;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      puVar10 = (undefined2 *)(*(long *)(param_1 + 0x68) + 3);
      do {
        *(undefined2 *)((long)pvVar14 + lVar9) = puVar10[-1];
        ((undefined2 *)((long)pvVar14 + lVar9))[1] = *puVar10;
        lVar9 = lVar9 + 4;
        puVar10 = (undefined2 *)((long)puVar10 + 9);
      } while ((ulong)uVar2 * 4 - lVar9 != 0);
      _qsort(pvVar14,uVar12,4,(int *)FUN_100649f20);
      local_78[0] = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x118) >> 0x20) *
                             *(float *)(param_1 + 0x114),
                             (float)*(undefined8 *)(param_1 + 0x118) * *(float *)(param_1 + 0x114));
      FUN_100649f40(*(undefined8 *)(param_1 + 0x108),(int)*(float *)(param_1 + 0x110),pvVar14,uVar12
                    ,local_78,*(undefined1 *)(param_1 + 0x120));
      FUN_10064a684(local_78,param_1 + 0xd8,*(undefined8 *)(param_1 + 0x108));
      FUN_1010b36cc(param_2,local_78,1);
      *(undefined1 *)(param_1 + 0x120) = 0;
    }
  }
  iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x128));
  return iVar6;
}




uint FUN_100649f20(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar2 != uVar3) {
    uVar4 = (uint)(uVar3 < uVar2);
  }
  uVar1 = 0xffffffff;
  if (uVar3 <= uVar2) {
    uVar1 = uVar4;
  }
  return uVar1;
}




void FUN_100649f40(void *param_1,ulong param_2,short *param_3,uint param_4,undefined4 *param_5,
                  int param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  short sVar7;
  float fVar8;
  undefined1 auStack_20090 [131072];
  undefined4 local_90 [2];
  undefined1 *local_88;
  int local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  iVar4 = (int)param_2;
  if (param_6 != 0) {
    _bzero(param_1,(ulong)(uint)(iVar4 * iVar4));
  }
  local_88 = auStack_20090;
  local_90[0] = 0;
  local_80 = 0x20000;
  if (param_4 != 0) {
    plVar5 = (long *)0x0;
    fVar8 = (float)(param_2 & 0xffffffff);
    sVar7 = -1;
    uVar6 = (ulong)param_4;
    do {
      if ((plVar5 == (long *)0x0) || (*param_3 != sVar7)) {
        plVar5 = (long *)FUN_1006489f4(DAT_101dbd2e8);
        if ((*(int *)((long)plVar5 + 0x24) - 1U < 2) && (*plVar5 != 0)) {
          sVar7 = *param_3;
          goto LAB_10064a008;
        }
      }
      else {
LAB_10064a008:
        lVar1 = plVar5[6] + (ulong)(ushort)param_3[1] * 0x28;
        iVar2 = (int)(*(float *)(lVar1 + 0x18) * fVar8);
        iVar3 = (int)(*(float *)(lVar1 + 0x1c) * fVar8);
        FUN_1006463b4(*param_5,param_5[1],plVar5,(long)param_1 + (long)(iVar2 + iVar3 * iVar4),
                      (int)(*(float *)(lVar1 + 0x20) * fVar8) - iVar2,
                      (int)(*(float *)(lVar1 + 0x24) * fVar8) - iVar3,param_2,
                      (ulong)(ushort)param_3[1],local_90);
        local_90[0] = 0;
      }
      param_3 = param_3 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    if ((local_80 < 0) && (local_88 != (undefined1 *)0x0)) {
      operator_delete__(local_88);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10064a0c4(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x168);
  DAT_101ea58e0 = FUN_100648b1c(pvVar1,param_1);
  return;
}




void FUN_10064a0f8(void)

{
  void *pvVar1;
  
  FUN_1006418ac();
  if (DAT_101ea58e0 != 0) {
    pvVar1 = (void *)FUN_100648de8();
    operator_delete(pvVar1);
  }
  DAT_101ea58e0 = 0;
  return;
}




ulong FUN_10064a12c(undefined4 param_1,undefined4 param_2,ulong param_3)

{
  pthread_mutex_t *ppVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = DAT_101ea58e0;
  if (DAT_101ea58e0 != 0) {
    ppVar1 = (pthread_mutex_t *)(DAT_101ea58e0 + 0x128);
    _pthread_mutex_lock(ppVar1);
    *(undefined4 *)(lVar2 + 0x118) = param_1;
    *(undefined4 *)(lVar2 + 0x11c) = param_2;
    uVar3 = _pthread_mutex_unlock(ppVar1);
    return (ulong)uVar3;
  }
  return param_3;
}




bool FUN_10064a188(void)

{
  return DAT_101ea58e0 != 0;
}




void FUN_10064a19c(void)

{
  if (DAT_101ea58e0 != 0) {
    FUN_100648e5c(DAT_101ea58e0,0,0);
    return;
  }
  return;
}




void FUN_10064a1b8(undefined2 param_1)

{
  undefined2 local_18 [4];
  
  if (DAT_101ea58e0 != 0) {
    local_18[0] = param_1;
    FUN_100648e5c(DAT_101ea58e0,local_18,0);
  }
  return;
}




void FUN_10064a1ec(undefined1 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if ((param_2 != 0) && ((int)param_3 != 0)) {
    FUN_1006490dc(DAT_101ea58e0,param_1,param_2,param_3,param_4);
    return;
  }
  return;
}




void FUN_10064a218(void)

{
  FUN_1006492bc(DAT_101ea58e0);
  return;
}




void FUN_10064a224(undefined8 param_1)

{
  FUN_100649d6c(DAT_101ea58e0,param_1);
  return;
}




long FUN_10064a234(void)

{
  long lVar1;
  
  lVar1 = 0;
  if (DAT_101ea58e0 != 0) {
    lVar1 = DAT_101ea58e0 + 0xd8;
  }
  return lVar1;
}




uint FUN_10064a24c(long param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_1 + 6);
  uVar2 = *(ushort *)(param_2 + 6);
  if (uVar1 >= uVar2 && uVar1 != uVar2) {
    return 0xffffffff;
  }
  if (uVar1 < uVar2) {
    return 1;
  }
  uVar3 = (uint)(*(ushort *)(param_1 + 4) < *(ushort *)(param_2 + 4));
  if (*(ushort *)(param_2 + 4) < *(ushort *)(param_1 + 4)) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}




uint FUN_10064a288(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(param_2 + 0xc) < *(int *)(param_1 + 0xc));
  if (*(int *)(param_1 + 0xc) < *(int *)(param_2 + 0xc)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}




uint FUN_10064a2a0(ushort *param_1,uint param_2,int param_3,int *param_4)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  uVar6 = (uint)*param_1;
  if ((int)(uint)*param_1 < (int)(param_3 + param_2)) {
    iVar4 = 0;
    iVar5 = 0;
    uVar3 = 0;
    do {
      puVar1 = param_1 + 1;
      uVar9 = (uint)*puVar1;
      if (uVar3 < uVar9) {
        iVar7 = (uVar9 - uVar3) * iVar5;
        param_1 = *(ushort **)(param_1 + 4);
        uVar2 = *param_1;
        if ((int)uVar6 < (int)param_2) {
          uVar6 = param_2;
        }
        iVar8 = uVar2 - uVar6;
        uVar3 = (uint)*puVar1;
      }
      else {
        param_1 = *(ushort **)(param_1 + 4);
        uVar2 = *param_1;
        iVar8 = param_3 - iVar5;
        if ((int)((uVar2 - uVar6) + iVar5) <= param_3) {
          iVar8 = uVar2 - uVar6;
        }
        iVar7 = iVar8 * (uVar3 - uVar9);
      }
      uVar6 = (uint)uVar2;
      iVar4 = iVar7 + iVar4;
      iVar5 = iVar8 + iVar5;
    } while ((int)uVar6 < (int)(param_3 + param_2));
  }
  else {
    uVar3 = 0;
    iVar4 = 0;
  }
  *param_4 = iVar4;
  return uVar3;
}




uint * FUN_10064a340(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 0xc) = param_1[10];
        param_1[10] = uVar1;
        uVar4 = *param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




void FUN_10064a3cc(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        lVar3 = lVar3 + -0x10;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10064a448(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_10064a4f0(param_1 + 0x18,auStack_38);
    uVar1 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar1 * 0xc);
  }
  puVar3 = (undefined8 *)(lVar2 + uVar1 * 0xc);
  uVar4 = *param_2;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(param_2 + 1);
  *puVar3 = uVar4;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10064a4f0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10064a57c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xc;
  uVar5 = *param_2;
  *(undefined4 *)(lVar4 + -4) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar4 + -0xc) = uVar5;
  return;
}




void FUN_10064a57c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0xc);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0xc;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
        *puVar4 = uVar6;
        puVar5 = (undefined8 *)((long)puVar5 + 0xc);
        lVar3 = lVar3 + -0xc;
        puVar4 = (undefined8 *)((long)puVar4 + 0xc);
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10064a608(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        lVar3 = lVar3 + -0x10;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10064a684(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_1014a5700;
  param_1[3] = param_2;
  param_1[4] = param_3;
  return;
}




void FUN_10064a698(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1010b79d0(*(undefined8 *)(param_1 + 0x18));
  uVar2 = FUN_1010b79f4(*(undefined8 *)(param_1 + 0x18));
  FUN_1010b75c4(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),uVar1,uVar2,1,0xb,0)
  ;
  return;
}




void FUN_10064a6e0(long param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  int *piVar9;
  
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar3) {
      *param_2 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar1 = param_2[10];
  piVar9 = param_2 + (ulong)uVar1 * 4 + 2;
  pvVar8 = *(void **)piVar9;
  if ((pvVar8 == (void *)0x0) ||
     (uVar5 = (ulong)*(uint *)((long)pvVar8 + 0x20000), pvVar7 = pvVar8,
     *(uint *)((long)pvVar8 + 0x20000) < 0x2f)) {
    pvVar7 = *(void **)(param_2 + (ulong)uVar1 * 4 + 4);
    if (pvVar7 == (void *)0x0) {
      pvVar7 = operator_new(0x20010);
      uVar5 = 0x20000;
      *(undefined4 *)((long)pvVar7 + 0x20000) = 0x20000;
      *(void **)((long)pvVar7 + 0x20008) = pvVar8;
      *(void **)piVar9 = pvVar7;
    }
    else {
      uVar6 = *(undefined8 *)((long)pvVar7 + 0x20008);
      *(void **)((long)pvVar7 + 0x20008) = pvVar8;
      *(void **)piVar9 = pvVar7;
      *(undefined8 *)(param_2 + (ulong)uVar1 * 4 + 4) = uVar6;
      uVar5 = 0x20000;
      *(undefined4 *)((long)pvVar7 + 0x20000) = 0x20000;
    }
  }
  *(int *)((long)pvVar7 + 0x20000) = (int)uVar5 + -0x2f;
  puVar4 = (undefined8 *)((long)pvVar7 + 0x20000 + (7 - uVar5) & 0xfffffffffffffff8);
  *param_2 = 0;
  *puVar4 = &PTR____cxa_pure_virtual_10182e8c0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar6;
  *puVar4 = &PTR_FUN_1014a5700;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = uVar6;
  return;
}




void FUN_10064a7e0(void)

{
  return;
}




void FUN_10064a7e8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064daec(param_1,0,2);
  *puVar1 = &PTR_FUN_1014a5760;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined2 *)(puVar1 + 4) = 0;
  *(byte *)((long)puVar1 + 0x22) = *(byte *)((long)puVar1 + 0x22) | 1;
  return;
}




void FUN_10064a82c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_1 + 0x20);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 1;
  return;
}




void FUN_10064a850(long param_1)

{
  byte *pbVar1;
  
  do {
    if (*(long *)(param_1 + 0x10) == 0) {
      return;
    }
    pbVar1 = (byte *)(param_1 + 0x22);
    param_1 = *(long *)(param_1 + 0x10);
  } while ((*pbVar1 & 1) == 0);
  return;
}




void FUN_10064a870(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_1 + 0x20);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xfe;
  return;
}




void FUN_10064a894(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)(param_2 & 0xffff);
  *(ulong *)(param_1 + 0x18) = uVar1 | uVar1 << 0x10 | uVar1 << 0x20 | uVar1 << 0x30;
  return;
}




void FUN_10064a8b0(long param_1,uint param_2,ulong param_3,int param_4,long param_5)

{
  *(ulong *)(param_1 + 0x18) =
       (ulong)(param_2 & 0xffff | param_4 << 0x10) | (param_3 & 0xffff) << 0x20 | param_5 << 0x30;
  return;
}




void FUN_10064a8c4(long param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  if (param_2 != (uint *)0x0) {
    *param_2 = (uint)*(ushort *)(param_1 + 0x18);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = (uint)*(ushort *)(param_1 + 0x1a);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = (uint)*(ushort *)(param_1 + 0x1c);
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = (uint)*(ushort *)(param_1 + 0x1e);
  }
  return;
}




void FUN_10064a8f8(long param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x20) = param_2;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_1 + 0x22);
  return;
}




void FUN_10064a914(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0xfc00 | 0x55;
  *(undefined2 *)((long)param_1 + 0x24) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc;
  return;
}




void FUN_10064a94c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = param_1;
  param_3[1] = param_2;
  *(undefined8 *)(param_3 + 2) = 0;
  param_3[4] = param_1;
  param_3[5] = param_2;
  *(undefined8 *)(param_3 + 6) = 0;
  *(ushort *)(param_3 + 8) = *(ushort *)(param_3 + 8) & 0xfc00 | 0x55;
  *(undefined2 *)(param_3 + 9) = 0;
  *(undefined8 *)(param_3 + 0xc) = 0;
  *(undefined8 *)(param_3 + 0xe) = 0;
  *(undefined8 *)(param_3 + 10) = 0;
  *(byte *)(param_3 + 0x10) = *(byte *)(param_3 + 0x10) & 0xfc;
  return;
}




bool FUN_10064a998(long param_1)

{
  return (*(byte *)(param_1 + 0x20) & 10) != 0;
}




bool FUN_10064a9ac(long param_1)

{
  return (*(byte *)(param_1 + 0x20) & 0xa0) != 0;
}




void FUN_10064a9c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064a7e8();
  *puVar1 = &PTR_thunk_FUN_10064aa2c_1014a5818;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(byte *)(puVar1 + 7) = *(byte *)(puVar1 + 7) & 0xfe;
  return;
}




void FUN_10064a9f0(undefined8 param_1,byte param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064a7e8();
  *puVar1 = &PTR_thunk_FUN_10064aa2c_1014a5818;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(byte *)(puVar1 + 7) = *(byte *)(puVar1 + 7) & 0xfe | param_2 & 1;
  return;
}




undefined8 * FUN_10064aa2c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10064aa2c_1014a5818;
  FUN_10064aa84();
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return param_1;
}




void thunk_FUN_10064aa2c(void)

{
  FUN_10064aa2c();
  return;
}




void FUN_10064aa70(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064aa2c();
  operator_delete(pvVar1);
  return;
}




void FUN_10064aa84(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar1 = 0;
    do {
      FUN_10064e04c(*(undefined8 *)(*(long *)(param_1 + 0x30) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x28));
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}




void FUN_10064aad4(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  ushort *puVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  long lVar31;
  float fVar32;
  undefined4 uVar33;
  undefined8 local_2310;
  undefined8 uStack_2308;
  undefined8 local_2300;
  undefined1 local_22f8 [8];
  undefined1 auStack_22f0 [8];
  undefined1 auStack_22e8 [8];
  undefined1 auStack_22e0 [8];
  undefined1 auStack_22d8 [8];
  undefined4 uStack_22d0;
  undefined1 auStack_22cc [8];
  uint uStack_22c4;
  int iStack_22c0;
  undefined8 uStack_22bc;
  float local_22b4;
  undefined8 local_22b0;
  float local_22a8 [6];
  ushort local_2290 [4];
  undefined8 local_2288;
  undefined4 local_2278 [2];
  byte local_2270 [8640];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  if ((*(byte *)(param_5 + 0xd) >> 1 & 1) == 0) goto LAB_10064b510;
  if (((*(byte *)(param_5 + 0x22) & 1) != 0) && (*(long *)(param_5 + 0x10) != 0)) {
    param_4 = param_2;
    plVar5 = (long *)FUN_10064a850(param_5);
    param_3 = (float)(**(code **)(*plVar5 + 0x50))();
    param_1 = 0.0;
    param_2 = 0.0;
  }
  stack0xffffffffffffdd38 = 0;
  _iStack_22c0 = 0;
  FUN_10064a8c4(param_5,&uStack_22bc,&uStack_22c4,&iStack_22c0,auStack_22cc + 4);
  uVar12 = (uint)uStack_22bc;
  param_3 = param_3 - (float)(iStack_22c0 + (uint)uStack_22bc);
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  uVar8 = uStack_22c4;
  param_4 = param_4 - (float)(auStack_22cc._4_4_ + uStack_22c4);
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  if ((0.0 < param_3) || (0.0 < param_4)) {
    uStack_22bc._4_4_ = 0;
    FUN_10064b560(param_5,(long)&uStack_22bc + 4);
    if (uStack_22bc._4_4_ == 0) {
      uVar16 = 0;
      iVar18 = 0;
      uVar19 = 0;
      iVar4 = 0;
      fVar30 = 0.0;
      fVar29 = 0.0;
LAB_10064ae50:
      uVar6 = 0;
      fVar29 = param_3 - fVar29;
      fVar30 = param_4 - fVar30;
LAB_10064ae5c:
      fVar22 = 0.0;
      bVar2 = true;
      fVar23 = 0.0;
    }
    else {
      uVar14 = 0;
      uVar16 = 0;
      iVar18 = 0;
      uVar19 = 0;
      iVar4 = 0;
      fVar29 = 0.0;
      fVar30 = 0.0;
      puVar15 = local_2290 + 2;
      do {
        if (((byte)puVar15[0xe] & 1) == 0) {
          fVar29 = *(float *)(puVar15 + -0xe) + fVar29;
          fVar30 = *(float *)(puVar15 + -0xc) + fVar30;
          if (((byte)puVar15[0xe] >> 1 & 1) == 0) {
            if (*puVar15 == 0) {
              uVar16 = uVar16 + 1;
            }
            else {
              iVar18 = iVar18 + 1;
            }
            uVar19 = uVar19 + *puVar15;
            uVar6 = FUN_10064a9ac(puVar15 + -0x12);
            if (((uVar6 & 1) != 0) || (iVar3 = FUN_10064a998(puVar15 + -0x12), iVar3 != 0)) {
              iVar4 = iVar4 + 1;
            }
          }
        }
        uVar14 = uVar14 + 1;
        uVar6 = (ulong)uStack_22bc._4_4_;
        puVar15 = puVar15 + 0x22;
      } while (uVar14 < uVar6);
      if ((*(byte *)(param_5 + 0x38) & 1) != 0) {
        if (uStack_22bc._4_4_ == 0) goto LAB_10064ae50;
        uVar14 = 0;
        bVar2 = false;
        puVar10 = &local_2288;
        do {
          plVar5 = (long *)(**(code **)(**(long **)(*(long *)(param_5 + 0x30) + uVar14 * 8) + 0x40))
                                     ();
          if (((*(byte *)(puVar10 + 3) & 1) == 0) && (plVar5 != (long *)0x0)) {
            uVar33 = NEON_ucvtf(*(undefined4 *)puVar10);
            fVar22 = (float)NEON_fminnm(param_3,uVar33);
            iVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5,(int)fVar22);
            if (-1 < iVar3) {
              uVar7 = (**(code **)(*plVar5 + 0x118))(plVar5);
              *puVar10 = uVar7;
              uVar7 = (**(code **)(*plVar5 + 0x120))(plVar5);
              puVar10[1] = uVar7;
              uVar7 = (**(code **)(*plVar5 + 0x128))(plVar5);
              puVar10[2] = uVar7;
              *(float *)((long)puVar10 + -0x1c) = (float)iVar3;
              bVar2 = true;
            }
          }
          uVar14 = uVar14 + 1;
          uVar6 = (ulong)uStack_22bc._4_4_;
          puVar10 = (undefined8 *)((long)puVar10 + 0x44);
        } while (uVar14 < uVar6);
        if (bVar2) {
          if (uStack_22bc._4_4_ == 0) {
            fVar30 = 0.0;
            fVar29 = 0.0;
            goto LAB_10064ae50;
          }
          pbVar9 = local_2270;
          fVar29 = 0.0;
          fVar30 = 0.0;
          uVar14 = uVar6;
          do {
            if ((*pbVar9 & 3) == 0) {
              fVar29 = *(float *)(pbVar9 + -0x38) + fVar29;
              fVar30 = *(float *)(pbVar9 + -0x34) + fVar30;
            }
            pbVar9 = pbVar9 + 0x44;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
      }
      fVar29 = param_3 - fVar29;
      fVar30 = param_4 - fVar30;
      if ((int)uVar6 == 0) goto LAB_10064ae5c;
      puVar10 = &local_2288;
      fVar23 = 0.0;
      fVar22 = 0.0;
      uVar14 = uVar6;
      do {
        if ((*(byte *)(puVar10 + 3) & 1) == 0) {
          fVar24 = 0.0;
          fVar25 = 0.0;
          if (fVar29 != 0.0) {
            fVar25 = (float)NEON_ucvtf(*(undefined4 *)puVar10);
            fVar25 = (fVar25 - *(float *)(puVar10 + -4)) * (1.0 / fVar29);
          }
          if (fVar30 != 0.0) {
            fVar24 = (float)NEON_ucvtf(*(undefined4 *)((long)puVar10 + 4));
            fVar24 = (fVar24 - *(float *)((long)puVar10 + -0x1c)) * (1.0 / fVar30);
          }
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          fVar23 = fVar25 + fVar23;
          if (fVar24 <= 0.0) {
            fVar24 = 0.0;
          }
          fVar22 = fVar24 + fVar22;
        }
        puVar10 = (undefined8 *)((long)puVar10 + 0x44);
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
      bVar2 = false;
    }
    pbVar9 = (byte *)(param_5 + 0x38);
    if (((0.0 < fVar29) || (0.0 < fVar30)) && ((0.0 < fVar23 || (0.0 < fVar22)))) {
      fVar25 = 0.0;
      fVar24 = 0.0;
      if (!bVar2) {
        puVar10 = &local_2288;
        fVar24 = 0.0;
        fVar25 = 0.0;
        uVar14 = uVar6;
        do {
          if ((*(byte *)(puVar10 + 3) & 3) == 0) {
            fVar26 = *(float *)(puVar10 + -4);
            fVar28 = (float)NEON_ucvtf(*(undefined4 *)puVar10);
            if (fVar26 < fVar28 && (0.0 < fVar29 && 0.0 < fVar23)) {
              fVar32 = (float)(int)((fVar28 - fVar26) * fVar29 * (1.0 / (fVar23 * fVar29)));
              fVar27 = fVar32 + fVar26;
              uVar33 = NEON_fminnm(fVar27,fVar28);
              fVar26 = fVar28 - fVar26;
              if (fVar27 <= fVar28) {
                fVar26 = fVar32;
              }
              fVar24 = fVar26 + fVar24;
              *(undefined4 *)(puVar10 + -4) = uVar33;
            }
            fVar26 = *(float *)((long)puVar10 + -0x1c);
            fVar28 = (float)NEON_ucvtf(*(undefined4 *)((long)puVar10 + 4));
            if (fVar26 < fVar28 && (0.0 < fVar30 && 0.0 < fVar22)) {
              fVar32 = (float)(int)((fVar28 - fVar26) * fVar30 * (1.0 / (fVar22 * fVar30)));
              fVar27 = fVar32 + fVar26;
              uVar33 = NEON_fminnm(fVar27,fVar28);
              fVar26 = fVar28 - fVar26;
              if (fVar27 <= fVar28) {
                fVar26 = fVar32;
              }
              fVar25 = fVar26 + fVar25;
              *(undefined4 *)((long)puVar10 + -0x1c) = uVar33;
            }
          }
          puVar10 = (undefined8 *)((long)puVar10 + 0x44);
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      fVar29 = fVar29 - fVar24;
      fVar30 = fVar30 - fVar25;
    }
    param_1 = param_1 + (float)uVar12;
    param_2 = param_2 + (float)uVar8;
    uVar12 = (uint)(iVar4 == 0);
    uVar14 = uVar6;
    uVar11 = uVar6;
    do {
      if (iVar18 != 0) {
        if ((int)uVar11 == 0) {
          fVar22 = 0.0;
          fVar23 = 0.0;
        }
        else {
          uVar20 = 0;
          fVar23 = 0.0;
          fVar22 = 0.0;
          pbVar21 = local_2270;
          do {
            if (((*pbVar21 & 3) == 0) && (*(short *)(pbVar21 + -0x1c) != 0)) {
              if ((*pbVar9 & 1) == 0) {
                if ((uVar12 != 0) || (iVar4 = FUN_10064a998(), iVar4 != 0)) {
                  if (0.0 < fVar29) {
                    fVar24 = (float)NEON_ucvtf((uint)*(ushort *)(pbVar21 + -0x1c));
                    fVar24 = fVar29 * fVar24 * (1.0 / (float)uVar19);
                    fVar23 = fVar24 + fVar23;
                    *(float *)(pbVar21 + -0x38) = fVar24 + *(float *)(pbVar21 + -0x38);
                  }
                  NEON_ucvtf(*(undefined4 *)(pbVar21 + -0xc));
                  *(float *)(pbVar21 + -0x34) = param_4;
                }
              }
              else if ((uVar12 != 0) || (iVar4 = FUN_10064a9ac(pbVar21 + -0x40), iVar4 != 0)) {
                if (0.0 < fVar30) {
                  fVar24 = (float)NEON_ucvtf((uint)*(ushort *)(pbVar21 + -0x1c));
                  fVar24 = fVar30 * fVar24 * (1.0 / (float)uVar19);
                  fVar22 = fVar24 + fVar22;
                  *(float *)(pbVar21 + -0x34) = fVar24 + *(float *)(pbVar21 + -0x34);
                }
                NEON_ucvtf(*(undefined4 *)(pbVar21 + -0x10));
                *(float *)(pbVar21 + -0x38) = param_3;
              }
            }
            uVar20 = uVar20 + 1;
            uVar6 = (ulong)uStack_22bc._4_4_;
            pbVar21 = pbVar21 + 0x44;
            uVar14 = uVar6;
            uVar11 = uVar6;
          } while (uVar20 < uVar6);
        }
        fVar29 = fVar29 - fVar23;
        fVar30 = fVar30 - fVar22;
      }
      if (uVar16 != 0) {
        if ((int)uVar14 == 0) {
          uVar11 = 0;
        }
        else {
          uVar20 = 0;
          fVar22 = fVar29 * (1.0 / (float)uVar16);
          fVar23 = fVar30 * (1.0 / (float)uVar16);
          pbVar21 = local_2270;
          do {
            if (((*pbVar21 & 3) == 0) && (*(short *)(pbVar21 + -0x1c) == 0)) {
              if ((*pbVar9 & 1) == 0) {
                if ((uVar12 != 0) || (iVar4 = FUN_10064a998(), iVar4 != 0)) {
                  if (0.0 < fVar29) {
                    fVar29 = fVar29 - fVar22;
                    *(float *)(pbVar21 + -0x38) = *(float *)(pbVar21 + -0x38) + fVar22;
                  }
                  NEON_ucvtf(*(undefined4 *)(pbVar21 + -0xc));
                  *(float *)(pbVar21 + -0x34) = param_4;
                }
              }
              else if ((uVar12 != 0) || (iVar4 = FUN_10064a9ac(pbVar21 + -0x40), iVar4 != 0)) {
                if (0.0 < fVar30) {
                  fVar30 = fVar30 - fVar23;
                  *(float *)(pbVar21 + -0x34) = *(float *)(pbVar21 + -0x34) + fVar23;
                }
                NEON_ucvtf(*(undefined4 *)(pbVar21 + -0x10));
                *(float *)(pbVar21 + -0x38) = param_3;
              }
            }
            uVar20 = uVar20 + 1;
            uVar6 = (ulong)uStack_22bc._4_4_;
            pbVar21 = pbVar21 + 0x44;
            uVar14 = uVar6;
            uVar11 = uVar6;
          } while (uVar20 < uVar6);
        }
      }
      uVar8 = (uint)uVar6;
      uVar12 = uVar12 + 1;
    } while (uVar12 != 2);
    if (((*pbVar9 & 1) == 0) && (uVar8 != 0)) {
      uVar14 = 0;
      puVar10 = &local_2288;
      do {
        plVar5 = (long *)(**(code **)(**(long **)(*(long *)(param_5 + 0x30) + uVar14 * 8) + 0x40))()
        ;
        if ((((*(byte *)(puVar10 + 3) & 1) == 0) && ((*(byte *)(puVar10 + 3) >> 1 & 1) == 0)) &&
           (plVar5 != (long *)0x0)) {
          uVar33 = NEON_ucvtf(*(undefined4 *)puVar10);
          fVar29 = (float)NEON_fminnm(*(undefined4 *)(puVar10 + -4),uVar33);
          iVar4 = (**(code **)(*plVar5 + 0xf8))(plVar5,(int)fVar29);
          if (-1 < iVar4) {
            uVar7 = (**(code **)(*plVar5 + 0x118))(plVar5);
            *puVar10 = uVar7;
            uVar7 = (**(code **)(*plVar5 + 0x120))(plVar5);
            puVar10[1] = uVar7;
            uVar7 = (**(code **)(*plVar5 + 0x128))(plVar5);
            puVar10[2] = uVar7;
          }
        }
        uVar14 = uVar14 + 1;
        puVar10 = (undefined8 *)((long)puVar10 + 0x44);
        uVar8 = uStack_22bc._4_4_;
      } while (uVar14 < uStack_22bc._4_4_);
    }
    if (uVar8 != 0) {
      lVar17 = 0;
      uVar14 = 0;
      do {
        plVar13 = *(long **)(*(long *)(param_5 + 0x30) + uVar14 * 8);
        plVar5 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
        if (lVar17 == 0) {
          FUN_10064a94c(param_1,param_2,&local_2310);
        }
        else {
          local_22f8 = *(undefined1 (*) [8])(auStack_22e0 + lVar17 + 4);
          local_2300 = *(undefined8 *)(auStack_22e8 + lVar17 + 4);
          auStack_22e8 = (undefined1  [8])*(undefined8 *)(auStack_22cc + lVar17);
          auStack_22f0 = (undefined1  [8])*(undefined8 *)(auStack_22d8 + lVar17 + 4);
          auStack_22d8 = (undefined1  [8])*(undefined8 *)((long)&uStack_22bc + lVar17);
          auStack_22e0 = (undefined1  [8])*(undefined8 *)((long)&uStack_22c4 + lVar17);
          uStack_22d0 = *(undefined4 *)((long)&local_22b4 + lVar17);
          uStack_2308 = *(undefined8 *)(auStack_22f0 + lVar17 + 4);
          local_2310 = *(undefined8 *)(local_22f8 + lVar17 + 4);
        }
        fVar30 = 0.0;
        fVar29 = 0.0;
        if ((local_2270[lVar17] & 1) == 0) {
          fVar29 = *(float *)((long)local_22a8 + lVar17);
          fVar30 = *(float *)((long)local_22a8 + lVar17 + 4);
        }
        *(float *)((long)local_22a8 + lVar17 + 0x10) = fVar29;
        *(float *)((long)local_22a8 + lVar17 + 0x14) = fVar30;
        if ((*(ushort *)((long)local_2290 + lVar17) & 0xf) == 0) {
          fVar22 = (float)NEON_ucvtf(*(undefined4 *)((long)&local_2288 + lVar17));
        }
        else {
          uVar33 = NEON_ucvtf(*(undefined4 *)((long)local_2278 + lVar17));
          fVar22 = (float)NEON_fminnm(fVar29,uVar33);
        }
        *(float *)((long)local_22a8 + lVar17) = fVar22;
        if ((*(ushort *)((long)local_2290 + lVar17) & 0xf0) == 0) {
          fVar23 = (float)NEON_ucvtf(*(undefined4 *)((long)&local_2288 + lVar17 + 4));
        }
        else {
          uVar33 = NEON_ucvtf(*(undefined4 *)((long)local_2278 + lVar17 + 4));
          fVar23 = (float)NEON_fminnm(fVar30,uVar33);
        }
        *(float *)((long)local_22a8 + lVar17 + 4) = fVar23;
        bVar1 = *pbVar9;
        if (((bVar1 & 1) == 0) && (uVar14 < uVar8 - 1)) {
          fVar22 = fVar22 - (float)*(ushort *)(param_5 + 0x20);
        }
        else if (((bVar1 & 1) != 0) && (uVar14 < uVar8 - 1)) {
          fVar23 = fVar23 - (float)*(ushort *)(param_5 + 0x20);
        }
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        if (fVar23 <= 0.0) {
          fVar23 = 0.0;
        }
        *(float *)((long)local_22a8 + lVar17) = fVar22;
        *(float *)((long)local_22a8 + lVar17 + 4) = fVar23;
        if ((bVar1 & 1) == 0) {
          fVar24 = (float)local_22f8._0_4_ + (float)local_2300;
          fVar25 = param_2;
        }
        else {
          fVar25 = (float)local_22f8._4_4_ + local_2300._4_4_;
          fVar24 = param_1;
        }
        *(float *)((long)local_22a8 + lVar17 + 8) = fVar24;
        *(float *)((long)local_22a8 + lVar17 + 0xc) = fVar25;
        uVar12 = *(ushort *)((long)plVar13 + 0xc) & 0x1f;
        if ((*(ushort *)((long)plVar13 + 0xc) & 1) == 0) {
          if ((uVar12 >> 2 & 1) != 0) {
            fVar25 = (fVar30 - fVar23) + fVar25;
            goto LAB_10064b400;
          }
          if ((uVar12 >> 1 & 1) != 0) {
            fVar25 = fVar25 + (fVar30 - fVar23) * 0.5;
            goto LAB_10064b400;
          }
        }
        else {
LAB_10064b400:
          *(float *)((long)local_22a8 + lVar17 + -4) = fVar25;
        }
        if ((uVar12 >> 3 & 1) == 0) {
          if (uVar12 >> 4 == 0) {
            if ((uVar12 >> 1 & 1) == 0) {
              fVar24 = *(float *)((long)&local_22b0 + lVar17);
            }
            else {
              fVar24 = fVar24 + (fVar29 - fVar22) * 0.5;
            }
          }
          else {
            fVar24 = (fVar29 - fVar22) + fVar24;
          }
        }
        fVar29 = param_1;
        if (param_1 <= fVar24) {
          fVar29 = fVar24;
        }
        *(float *)((long)&local_22b0 + lVar17) = fVar29;
        *(float *)((long)local_22a8 + lVar17 + -4) = param_2;
        fVar30 = param_2;
        if (plVar5 != (long *)0x0) {
          lVar31 = plVar5[10];
          fVar22 = (float)(**(code **)(*plVar5 + 0x50))(plVar5);
          fVar29 = 1.0;
          if (1.1920929e-07 <= ABS(*(float *)(plVar5 + 9))) {
            fVar29 = *(float *)(plVar5 + 9);
          }
          fVar23 = 1.0;
          if (1.1920929e-07 <= ABS(*(float *)((long)plVar5 + 0x4c))) {
            fVar23 = *(float *)((long)plVar5 + 0x4c);
          }
          fVar22 = (float)*(undefined8 *)((long)&local_22b0 + lVar17) + (float)lVar31 * fVar22;
          fVar30 = (float)((ulong)*(undefined8 *)((long)&local_22b0 + lVar17) >> 0x20) +
                   (float)((ulong)lVar31 >> 0x20) * fVar30;
          bVar2 = false;
          if ((*(float *)(plVar5 + 8) == fVar22) &&
             (bVar2 = false, !NAN(*(float *)((long)plVar5 + 0x44)) && !NAN(fVar30))) {
            bVar2 = *(float *)((long)plVar5 + 0x44) == fVar30;
          }
          if (!bVar2) {
            plVar5[8] = CONCAT44(fVar30,fVar22);
            FUN_1000200a0(plVar5);
          }
          (**(code **)(*plVar5 + 0x130))
                    (*(float *)((long)local_22a8 + lVar17) / fVar29,
                     *(float *)((long)local_22a8 + lVar17 + 4) / fVar23,plVar5,0);
          fVar29 = *(float *)((long)&local_22b0 + lVar17);
          fVar30 = *(float *)((long)local_22a8 + lVar17 + -4);
          fVar22 = *(float *)((long)local_22a8 + lVar17);
          fVar23 = *(float *)((long)local_22a8 + lVar17 + 4);
        }
        (**(code **)(*plVar13 + 0x28))(fVar29,fVar30,fVar22,fVar23,plVar13);
        *(ushort *)((long)plVar13 + 0xc) = *(ushort *)((long)plVar13 + 0xc) & 0xfdff;
        uVar14 = uVar14 + 1;
        lVar17 = lVar17 + 0x44;
      } while (uVar14 < uStack_22bc._4_4_);
    }
  }
  *(ushort *)(param_5 + 0xc) = *(ushort *)(param_5 + 0xc) & 0xfdff;
LAB_10064b510:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10064b560(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  float *pfVar11;
  float *pfVar12;
  uint *puVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined8 local_98;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  undefined2 uStack_76;
  ushort uStack_74;
  undefined2 uStack_72;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  uint local_58;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar15 = 0;
    uVar16 = (ulong)(*(int *)(param_1 + 0x28) - 1);
    do {
      plVar14 = *(long **)(*(long *)(param_1 + 0x30) + uVar15 * 8);
      lVar9 = (**(code **)(*plVar14 + 0x40))(plVar14);
      if (lVar9 == 0) {
        pfVar12 = (float *)((long)&DAT_101873a38 + 4);
        pfVar11 = (float *)&DAT_101873a38;
      }
      else {
        lVar9 = (**(code **)(*plVar14 + 0x40))(plVar14);
        pfVar12 = (float *)(lVar9 + 0x4c);
        pfVar11 = (float *)(lVar9 + 0x48);
      }
      fVar19 = *pfVar12;
      fVar17 = *pfVar11;
      FUN_10064a914(&local_98);
      lVar9 = (**(code **)(*plVar14 + 0x40))(plVar14);
      if (lVar9 == 0) {
LAB_10064b628:
        bVar7 = 1;
      }
      else if ((*(uint *)(lVar9 + 0x84) >> 3 & 1) == 0) {
        bVar7 = 0;
      }
      else {
        if ((*(uint *)(lVar9 + 0x84) >> 2 & 1) != 0) goto LAB_10064b628;
        bVar7 = FUN_10064e5e0();
      }
      local_58 = CONCAT31((int3)(local_58 >> 8),
                          (byte)((ushort)*(undefined2 *)((long)plVar14 + 0xc) >> 9) & 2 |
                          ((byte)local_58 & 0xfe | bVar7 ^ 1) & 0xfd);
      uVar10 = (**(code **)(*plVar14 + 0x10))(plVar14);
      uStack_70 = (uint)uVar10;
      uStack_6c = (uint)((ulong)uVar10 >> 0x20);
      uVar10 = (**(code **)(*plVar14 + 0x18))(plVar14);
      uStack_68 = (uint)uVar10;
      uStack_64 = (uint)((ulong)uVar10 >> 0x20);
      uVar10 = (**(code **)(*plVar14 + 0x20))(plVar14);
      iStack_60 = (int)uVar10;
      uStack_5c = (uint)((ulong)uVar10 >> 0x20);
      uVar8 = (**(code **)(*plVar14 + 0x38))(plVar14);
      local_78 = (undefined2)uVar8;
      uVar5 = *(ushort *)((long)plVar14 + 0xc) >> 5;
      uStack_74 = uVar5 & 0xf;
      uVar1 = uVar8 & 0xf;
      if (uVar1 == 0xd) {
        uStack_70 = 0;
      }
      uVar2 = uVar8 & 0xf0;
      if (uVar2 == 0xd0) {
        uStack_6c = 0;
      }
      if ((uVar8 & 0xf | 2) == 3) {
        uStack_68 = uStack_70;
      }
      if ((uVar8 >> 4 & 0xf | 2) == 3) {
        uStack_64 = uStack_6c;
      }
      if (uVar1 == 4) {
        iStack_60 = uStack_70;
      }
      auVar20._4_4_ = uStack_68;
      auVar20._0_4_ = uStack_6c;
      auVar20._8_4_ = uStack_64;
      auVar20._12_4_ = iStack_60;
      auVar20 = NEON_ucvtf(auVar20,4);
      if (uVar2 != 0x40) {
        uStack_6c = uStack_5c;
      }
      fVar18 = (float)NEON_ucvtf(uStack_70);
      uStack_70 = (uint)(fVar17 * fVar18);
      uVar8 = (uint)(fVar19 * auVar20._0_4_);
      uStack_68 = (uint)(fVar17 * auVar20._4_4_);
      uStack_64 = (uint)(fVar19 * auVar20._8_4_);
      iStack_60 = (int)(fVar17 * auVar20._12_4_);
      uStack_5c = (uint)(fVar19 * (float)uStack_6c);
      uStack_6c = uVar8;
      if (((*(byte *)(param_1 + 0x38) & 1) == 0) && (uVar15 < uVar16)) {
        uVar4 = *(ushort *)(param_1 + 0x20);
        uStack_70 = uVar4 + uStack_70;
        uStack_68 = uVar4 + uStack_68;
        iStack_60 = (uint)uVar4 + iStack_60;
      }
      else if (((*(byte *)(param_1 + 0x38) & 1) != 0) && (uVar15 < uVar16)) {
        uVar4 = *(ushort *)(param_1 + 0x20);
        uStack_6c = uVar4 + uVar8;
        uStack_64 = uVar4 + uStack_64;
        uStack_5c = uVar4 + uStack_5c;
      }
      uVar8 = uStack_68;
      if (uStack_68 <= uStack_70) {
        uVar8 = uStack_70;
      }
      uVar3 = uStack_64;
      if (uStack_64 <= uStack_6c) {
        uVar3 = uStack_6c;
      }
      if (uVar1 != 0) {
        uVar8 = uStack_68;
      }
      fStack_90 = (float)uVar8;
      if (uVar2 != 0) {
        uVar3 = uStack_64;
      }
      fStack_8c = (float)uVar3;
      uVar1 = *param_2;
      puVar13 = param_2 + (ulong)uVar1 * 0x11 + 2;
      *(ulong *)(puVar13 + 10) = CONCAT44(uStack_6c,uStack_70);
      *(ulong *)(puVar13 + 8) =
           CONCAT26(uStack_72,CONCAT24(uVar5,CONCAT22(uStack_76,local_78))) & 0xffff000fffffffff;
      *(ulong *)(puVar13 + 0xe) = CONCAT44(uStack_5c,iStack_60);
      *(ulong *)(puVar13 + 0xc) = CONCAT44(uStack_64,uStack_68);
      puVar13[0x10] = local_58;
      auVar6._8_4_ = fStack_90;
      auVar6._0_8_ = local_98;
      auVar6._12_4_ = fStack_8c;
      *(long *)(puVar13 + 2) = auVar6._8_8_;
      *(undefined8 *)puVar13 = local_98;
      *(undefined8 *)(puVar13 + 6) = uStack_80;
      *(undefined8 *)(puVar13 + 4) = local_88;
      *param_2 = uVar1 + 1;
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(param_1 + 0x28));
  }
  return;
}




void FUN_10064b86c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar4 = 0;
    do {
      lVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar4 * 8) + 0x40))();
      if ((lVar1 != 0) && (lVar2 = FUN_10064e5a0(), lVar2 != 0)) {
        plVar3 = (long *)FUN_10064e5a0(lVar1);
        (**(code **)(*plVar3 + 0x30))();
      }
      (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar4 * 8) + 0x30))();
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x28));
  }
  *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 0x200;
  return;
}




void FUN_10064b904(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010064b914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_2,0,2);
  return;
}




void FUN_10064b918(long *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010064b928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_2,0,param_3);
  return;
}




void FUN_10064b92c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10064df5c(param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010064b964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1,uVar1);
  return;
}




void FUN_10064b968(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    uVar1 = param_2;
    param_2 = 0;
  }
  else {
    uVar1 = 0;
  }
  uVar1 = FUN_10064dfcc(uVar1,param_2,0,0,0,2,1);
                    /* WARNING: Could not recover jumptable at 0x00010064b9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1,uVar1);
  return;
}




void FUN_10064b9c4(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010064b9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,0,param_2);
  return;
}




void FUN_10064b9d8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    uVar1 = param_2;
    param_2 = 0;
  }
  else {
    uVar1 = 0;
  }
  uVar1 = FUN_10064dfcc(uVar1,param_2,param_3,1,1,2,0);
                    /* WARNING: Could not recover jumptable at 0x00010064ba2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1,uVar1);
  return;
}




void FUN_10064ba30(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    uVar1 = param_2;
    param_2 = 0;
  }
  else {
    uVar1 = 0;
  }
  local_28 = FUN_10064dfcc(uVar1,param_2,0,0,0,2,0);
  FUN_10064c8f8(param_1 + 5,param_1[6] + (param_3 & 0xffffffff) * 8,&local_28,
                &stack0xffffffffffffffe0);
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}




void FUN_10064babc(long *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010064bad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc0))(param_1,0,param_2,param_3);
  return;
}




void FUN_10064bad4(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    uVar1 = param_2;
    param_2 = 0;
  }
  else {
    uVar1 = 0;
  }
  local_28 = FUN_10064dfcc(uVar1,param_2,param_3,1,1,2,0);
  FUN_10064c8f8(param_1 + 5,param_1[6] + (param_4 & 0xffffffff) * 8,&local_28,
                &stack0xffffffffffffffe0);
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}




void FUN_10064bb5c(long *param_1,long param_2,ushort param_3)

{
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xfe1f | (param_3 & 0xf) << 5;
  FUN_10064a870(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010064bba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1,param_2);
  return;
}




void FUN_10064bbac(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *local_38;
  
  if (((DAT_101dbd2d8 != '\0') &&
      (plVar1 = (long *)(**(code **)(*param_2 + 0x40))(param_2), plVar1 != (long *)0x0)) &&
     (lVar3 = plVar1[4], lVar2 = FUN_10064a850(param_1), lVar3 == 0 && lVar2 != 0)) {
    (**(code **)(*plVar1 + 0x80))(plVar1,lVar2,1);
  }
  local_38 = param_2;
  FUN_10064bc54(param_1 + 5,&local_38);
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}




void FUN_10064bc54(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10064c87c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined8 FUN_10064bcd4(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  float fVar11;
  
  iVar7 = DAT_101dbd4fc;
  iVar9 = DAT_101dbd4f8;
  uVar6 = DAT_101dbd4f0;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    fVar11 = (float)((uint)*(ushort *)(param_1 + 0x20) * (*(int *)(param_1 + 0x28) + -1));
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      uVar10 = 0;
      uVar8 = 0;
      iVar7 = (int)((float)(((uint)((ulong)uVar6 >> 0x10) & 0xffff) + ((uint)uVar6 & 0xffff)) +
                   fVar11);
      do {
        lVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8) + 0x40))();
        if ((lVar3 == 0) ||
           (((*(uint *)(lVar3 + 0x84) >> 3 & 1) != 0 &&
            (((*(uint *)(lVar3 + 0x84) >> 2 & 1) != 0 || (iVar2 = FUN_10064e5e0(), iVar2 != 0))))))
        {
          uVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8) + 0x10))();
          uVar1 = iVar9 - iVar7;
          iVar7 = iVar7 + (uint)uVar4;
          if (uVar1 <= (uint)uVar4) {
            iVar7 = iVar9;
          }
          fVar11 = (float)uVar8;
          if ((float)uVar8 <= (float)(uVar4 >> 0x20)) {
            fVar11 = (float)(uVar4 >> 0x20);
          }
          uVar8 = (uint)fVar11;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_1 + 0x28));
      iVar9 = (ushort)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x30) + uVar8 +
              ((uint)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) & 0xffff);
    }
    else {
      uVar10 = 0;
      uVar8 = 0;
      iVar9 = (int)((float)((uint)(ushort)((ulong)uVar6 >> 0x30) +
                           ((uint)((ulong)uVar6 >> 0x20) & 0xffff)) + fVar11);
      do {
        lVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8) + 0x40))();
        if ((lVar3 == 0) ||
           (((*(uint *)(lVar3 + 0x84) >> 3 & 1) != 0 &&
            (((*(uint *)(lVar3 + 0x84) >> 2 & 1) != 0 || (iVar2 = FUN_10064e5e0(), iVar2 != 0))))))
        {
          uVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8) + 0x10))();
          uVar1 = iVar7 - iVar9;
          uVar5 = (uint)(uVar4 >> 0x20);
          iVar9 = iVar9 + uVar5;
          if (uVar1 <= uVar5) {
            iVar9 = iVar7;
          }
          fVar11 = (float)uVar8;
          if ((float)uVar8 <= (float)(uVar4 & 0xffffffff)) {
            fVar11 = (float)(uVar4 & 0xffffffff);
          }
          uVar8 = (uint)fVar11;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_1 + 0x28));
      iVar7 = uVar8 + (*(uint *)(param_1 + 0x18) & 0xffff) + (*(uint *)(param_1 + 0x18) >> 0x10);
    }
    uVar6 = CONCAT44(iVar9,iVar7);
  }
  return uVar6;
}




undefined8 FUN_10064be94(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  iVar7 = DAT_101dbd4fc;
  iVar8 = DAT_101dbd4f8;
  uVar6 = DAT_101dbd4f0;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    fVar12 = (float)((uint)*(ushort *)(param_1 + 0x20) * (*(int *)(param_1 + 0x28) + -1));
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      uVar9 = 0;
      uVar10 = 0;
      iVar7 = (int)((float)(((uint)((ulong)uVar6 >> 0x10) & 0xffff) + ((uint)uVar6 & 0xffff)) +
                   fVar12);
      do {
        uVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8) + 0x10))();
        lVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8) + 0x40))();
        if (lVar4 == 0) {
LAB_10064bf98:
          fVar12 = (float)(uVar3 >> 0x20);
LAB_10064bf9c:
          fVar13 = (float)uVar10;
          if ((float)uVar10 <= fVar12) {
            fVar13 = fVar12;
          }
          uVar10 = (uint)fVar13;
          uVar11 = iVar8 - iVar7;
          iVar7 = iVar7 + (uint)uVar3;
          if (uVar11 <= (uint)uVar3) {
            iVar7 = iVar8;
          }
        }
        else {
          lVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8) + 0x40))();
          if ((lVar4 == 0) ||
             (((*(uint *)(lVar4 + 0x84) >> 3 & 1) != 0 &&
              (((*(uint *)(lVar4 + 0x84) >> 2 & 1) != 0 || (iVar1 = FUN_10064e5e0(), iVar1 != 0)))))
             ) {
            plVar5 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8) + 0x40)
                             )();
            iVar1 = (**(code **)(*plVar5 + 0x100))(plVar5,param_2);
            if (iVar1 < 0) goto LAB_10064bf98;
            fVar12 = (float)iVar1;
            goto LAB_10064bf9c;
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_1 + 0x28));
      iVar8 = (ushort)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x30) + uVar10 +
              ((uint)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) & 0xffff);
    }
    else {
      uVar9 = 0;
      uVar10 = 0;
      iVar8 = (int)((float)((uint)(ushort)((ulong)uVar6 >> 0x30) +
                           ((uint)((ulong)uVar6 >> 0x20) & 0xffff)) + fVar12);
      do {
        uVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8) + 0x10))();
        lVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8) + 0x40))();
        uVar11 = (uint)(uVar3 >> 0x20);
        if (lVar4 == 0) {
          uVar2 = iVar7 - iVar8;
          iVar8 = iVar8 + uVar11;
          if (uVar2 <= uVar11) {
            iVar8 = iVar7;
          }
LAB_10064c0c0:
          fVar12 = (float)uVar10;
          if ((float)uVar10 <= (float)(uVar3 & 0xffffffff)) {
            fVar12 = (float)(uVar3 & 0xffffffff);
          }
          uVar10 = (uint)fVar12;
        }
        else {
          lVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8) + 0x40))();
          if ((lVar4 == 0) ||
             (((*(uint *)(lVar4 + 0x84) >> 3 & 1) != 0 &&
              (((*(uint *)(lVar4 + 0x84) >> 2 & 1) != 0 || (iVar1 = FUN_10064e5e0(), iVar1 != 0)))))
             ) {
            plVar5 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8) + 0x40)
                             )();
            uVar2 = (**(code **)(*plVar5 + 0x100))(plVar5,param_2);
            if (uVar2 != 0xffffffff) {
              uVar11 = uVar2;
            }
            uVar2 = iVar7 - iVar8;
            iVar8 = uVar11 + iVar8;
            if (uVar2 <= uVar11) {
              iVar8 = iVar7;
            }
            goto LAB_10064c0c0;
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_1 + 0x28));
      iVar7 = uVar10 + (*(uint *)(param_1 + 0x18) & 0xffff) + (*(uint *)(param_1 + 0x18) >> 0x10);
    }
    uVar6 = CONCAT44(iVar8,iVar7);
  }
  return uVar6;
}




undefined8 FUN_10064c10c(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  
  iVar10 = DAT_101dbd4fc;
  iVar9 = DAT_101dbd4f8;
  uVar6 = DAT_101dbd4f0;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    fVar12 = (float)((uint)*(ushort *)(param_1 + 0x20) * (*(int *)(param_1 + 0x28) + -1));
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      uVar11 = 0;
      uVar8 = 0;
      iVar10 = (int)((float)(((uint)((ulong)uVar6 >> 0x10) & 0xffff) + ((uint)uVar6 & 0xffff)) +
                    fVar12);
      do {
        uVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar11 * 8) + 0x10))();
        lVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar11 * 8) + 0x40))();
        uVar7 = (uint)uVar3;
        if (lVar4 == 0) {
          uVar2 = iVar9 - iVar10;
          iVar10 = iVar10 + uVar7;
          if (uVar2 <= uVar7) {
            iVar10 = iVar9;
          }
LAB_10064c224:
          fVar12 = (float)uVar8;
          if ((float)uVar8 <= (float)(uVar3 >> 0x20)) {
            fVar12 = (float)(uVar3 >> 0x20);
          }
          uVar8 = (uint)fVar12;
        }
        else {
          lVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar11 * 8) + 0x40))();
          if ((lVar4 == 0) ||
             (((*(uint *)(lVar4 + 0x84) >> 3 & 1) != 0 &&
              (((*(uint *)(lVar4 + 0x84) >> 2 & 1) != 0 || (iVar1 = FUN_10064e5e0(), iVar1 != 0)))))
             ) {
            plVar5 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar11 * 8) + 0x40
                                         ))();
            uVar2 = (**(code **)(*plVar5 + 0x110))(plVar5,param_2);
            if (uVar2 != 0xffffffff) {
              uVar7 = uVar2;
            }
            uVar2 = iVar9 - iVar10;
            iVar10 = uVar7 + iVar10;
            if (uVar2 <= uVar7) {
              iVar10 = iVar9;
            }
            goto LAB_10064c224;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_1 + 0x28));
      iVar9 = (ushort)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x30) + uVar8 +
              ((uint)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) & 0xffff);
    }
    else {
      uVar11 = 0;
      uVar8 = 0;
      iVar9 = (int)((float)((uint)(ushort)((ulong)uVar6 >> 0x30) +
                           ((uint)((ulong)uVar6 >> 0x20) & 0xffff)) + fVar12);
      do {
        uVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar11 * 8) + 0x10))();
        lVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar11 * 8) + 0x40))();
        if (lVar4 == 0) {
LAB_10064c328:
          fVar12 = (float)(uVar3 & 0xffffffff);
LAB_10064c32c:
          fVar13 = (float)uVar8;
          if ((float)uVar8 <= fVar12) {
            fVar13 = fVar12;
          }
          uVar8 = (uint)fVar13;
          uVar7 = iVar10 - iVar9;
          uVar2 = (uint)(uVar3 >> 0x20);
          iVar9 = iVar9 + uVar2;
          if (uVar7 <= uVar2) {
            iVar9 = iVar10;
          }
        }
        else {
          lVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar11 * 8) + 0x40))();
          if ((lVar4 == 0) ||
             (((*(uint *)(lVar4 + 0x84) >> 3 & 1) != 0 &&
              (((*(uint *)(lVar4 + 0x84) >> 2 & 1) != 0 || (iVar1 = FUN_10064e5e0(), iVar1 != 0)))))
             ) {
            plVar5 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar11 * 8) + 0x40
                                         ))();
            iVar1 = (**(code **)(*plVar5 + 0x110))(plVar5,param_2);
            if (iVar1 < 0) goto LAB_10064c328;
            fVar12 = (float)iVar1;
            goto LAB_10064c32c;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_1 + 0x28));
      iVar10 = uVar8 + (*(uint *)(param_1 + 0x18) & 0xffff) + (*(uint *)(param_1 + 0x18) >> 0x10);
    }
    uVar6 = CONCAT44(iVar9,iVar10);
  }
  return uVar6;
}




undefined8 FUN_10064c384(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  float fVar11;
  
  iVar7 = DAT_101dbd4fc;
  iVar9 = DAT_101dbd4f8;
  uVar6 = DAT_101dbd4f0;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    fVar11 = (float)((uint)*(ushort *)(param_1 + 0x20) * (*(int *)(param_1 + 0x28) + -1));
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      uVar10 = 0;
      uVar8 = 0;
      iVar7 = (int)((float)(((uint)((ulong)uVar6 >> 0x10) & 0xffff) + ((uint)uVar6 & 0xffff)) +
                   fVar11);
      do {
        lVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8) + 0x40))();
        if ((lVar3 == 0) ||
           (((*(uint *)(lVar3 + 0x84) >> 3 & 1) != 0 &&
            (((*(uint *)(lVar3 + 0x84) >> 2 & 1) != 0 || (iVar2 = FUN_10064e5e0(), iVar2 != 0))))))
        {
          uVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8) + 0x18))();
          uVar1 = iVar9 - iVar7;
          iVar7 = iVar7 + (uint)uVar4;
          if (uVar1 <= (uint)uVar4) {
            iVar7 = iVar9;
          }
          fVar11 = (float)uVar8;
          if ((float)uVar8 <= (float)(uVar4 >> 0x20)) {
            fVar11 = (float)(uVar4 >> 0x20);
          }
          uVar8 = (uint)fVar11;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_1 + 0x28));
      iVar9 = (ushort)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x30) + uVar8 +
              ((uint)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) & 0xffff);
    }
    else {
      uVar10 = 0;
      uVar8 = 0;
      iVar9 = (int)((float)((uint)(ushort)((ulong)uVar6 >> 0x30) +
                           ((uint)((ulong)uVar6 >> 0x20) & 0xffff)) + fVar11);
      do {
        lVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8) + 0x40))();
        if ((lVar3 == 0) ||
           (((*(uint *)(lVar3 + 0x84) >> 3 & 1) != 0 &&
            (((*(uint *)(lVar3 + 0x84) >> 2 & 1) != 0 || (iVar2 = FUN_10064e5e0(), iVar2 != 0))))))
        {
          uVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8) + 0x18))();
          uVar1 = iVar7 - iVar9;
          uVar5 = (uint)(uVar4 >> 0x20);
          iVar9 = iVar9 + uVar5;
          if (uVar1 <= uVar5) {
            iVar9 = iVar7;
          }
          fVar11 = (float)uVar8;
          if ((float)uVar8 <= (float)(uVar4 & 0xffffffff)) {
            fVar11 = (float)(uVar4 & 0xffffffff);
          }
          uVar8 = (uint)fVar11;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_1 + 0x28));
      iVar7 = uVar8 + (*(uint *)(param_1 + 0x18) & 0xffff) + (*(uint *)(param_1 + 0x18) >> 0x10);
    }
    uVar6 = CONCAT44(iVar9,iVar7);
  }
  return uVar6;
}




undefined8 FUN_10064c544(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  float fVar11;
  
  iVar7 = DAT_101dbd4fc;
  iVar9 = DAT_101dbd4f8;
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar6 = CONCAT44(DAT_101dbd4fc,DAT_101dbd4f8);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    fVar11 = (float)((uint)*(ushort *)(param_1 + 0x20) * (*(int *)(param_1 + 0x28) + -1));
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      uVar10 = 0;
      uVar8 = 0;
      iVar7 = (int)((float)(((uint)((ulong)uVar6 >> 0x10) & 0xffff) + ((uint)uVar6 & 0xffff)) +
                   fVar11);
      do {
        lVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8) + 0x40))();
        if (lVar3 == 0) {
LAB_10064c5d4:
          uVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8) + 0x20))();
          uVar1 = iVar9 - iVar7;
          iVar7 = iVar7 + (uint)uVar4;
          if (uVar1 <= (uint)uVar4) {
            iVar7 = iVar9;
          }
          fVar11 = (float)uVar8;
          if ((float)uVar8 <= (float)(uVar4 >> 0x20)) {
            fVar11 = (float)(uVar4 >> 0x20);
          }
          uVar8 = (uint)fVar11;
        }
        else if (((*(uint *)(lVar3 + 0x84) >> 3 & 1) != 0) &&
                (((*(uint *)(lVar3 + 0x84) >> 2 & 1) != 0 || (iVar2 = FUN_10064e5e0(), iVar2 != 0)))
                ) goto LAB_10064c5d4;
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_1 + 0x28));
      iVar9 = (ushort)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x30) + uVar8 +
              ((uint)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) & 0xffff);
    }
    else {
      uVar10 = 0;
      uVar8 = 0;
      iVar9 = (int)((float)((uint)(ushort)((ulong)uVar6 >> 0x30) +
                           ((uint)((ulong)uVar6 >> 0x20) & 0xffff)) + fVar11);
      do {
        lVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8) + 0x40))();
        if (lVar3 == 0) {
LAB_10064c694:
          uVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8) + 0x20))();
          uVar1 = iVar7 - iVar9;
          uVar5 = (uint)(uVar4 >> 0x20);
          iVar9 = iVar9 + uVar5;
          if (uVar1 <= uVar5) {
            iVar9 = iVar7;
          }
          fVar11 = (float)uVar8;
          if ((float)uVar8 <= (float)(uVar4 & 0xffffffff)) {
            fVar11 = (float)(uVar4 & 0xffffffff);
          }
          uVar8 = (uint)fVar11;
        }
        else if (((*(uint *)(lVar3 + 0x84) >> 3 & 1) != 0) &&
                (((*(uint *)(lVar3 + 0x84) >> 2 & 1) != 0 || (iVar2 = FUN_10064e5e0(), iVar2 != 0)))
                ) goto LAB_10064c694;
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_1 + 0x28));
      iVar7 = uVar8 + (*(uint *)(param_1 + 0x18) & 0xffff) + (*(uint *)(param_1 + 0x18) >> 0x10);
    }
    uVar6 = CONCAT44(iVar9,iVar7);
  }
  return uVar6;
}




undefined8 FUN_10064c704(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if ((int)param_1[5] != 0) {
    puVar2 = (undefined8 *)param_1[6];
    do {
      lVar1 = (**(code **)(*(long *)*puVar2 + 0x40))();
      if (lVar1 == param_2) {
        FUN_10064e04c(*puVar2);
        FUN_10064cb14(param_1 + 5,puVar2,puVar2 + 1);
        (**(code **)(*param_1 + 0x30))(param_1);
        return 1;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined8 *)(param_1[6] + (ulong)*(uint *)(param_1 + 5) * 8));
  }
  return 0;
}




undefined8 FUN_10064c7a4(long param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 0x28)) {
    return *(undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)param_2 * 8);
  }
  return 0;
}




void FUN_10064c7c4(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar3 = 0;
    do {
      plVar1 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar3 * 8) + 0x40))();
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar3 * 8) + 0x48))();
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0xa0))(plVar1,param_2);
        }
      }
      else {
        uVar2 = FUN_100642d08();
        if (((uVar2 & 1) == 0) && (plVar1[4] != param_2)) {
          (**(code **)(*plVar1 + 0x80))(plVar1,param_2,1);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x28));
  }
  return;
}




void FUN_10064c87c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




undefined8 *
FUN_10064c8f8(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_3 != param_4) {
    uVar12 = (long)param_4 - (long)param_3;
    puVar9 = *(undefined8 **)(param_1 + 2);
    uVar10 = (long)param_2 - (long)puVar9;
    uVar1 = *param_1;
    uVar2 = (ulong)uVar1;
    uVar3 = param_1[1];
    uVar6 = (uint)(uVar12 >> 3);
    if (uVar3 - uVar1 < uVar6) {
      uVar1 = uVar1 + uVar6;
      uVar6 = 0;
      if (uVar3 != 0xffffffff) {
        uVar6 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
      }
      if (uVar3 < 0x20) {
        uVar6 = uVar3 << 1;
      }
      uVar3 = uVar1;
      if (uVar1 <= uVar6) {
        uVar3 = uVar6;
      }
      puVar5 = operator_new__((ulong)uVar3 << 3);
      puVar4 = puVar5;
      for (puVar7 = puVar9; puVar7 != param_2; puVar7 = puVar7 + 1) {
        *puVar4 = *puVar7;
        puVar4 = puVar4 + 1;
      }
      uVar11 = uVar10 >> 3 & 0xffffffff;
      _memcpy(puVar5 + (uVar10 >> 3 & 0xffffffff),param_3,uVar12 & 0xfffffffffffffff8);
      uVar2 = (long)puVar9 + (uVar2 * 8 - (long)param_2);
      if (uVar2 != 0) {
        _memcpy((void *)((long)puVar5 + (uVar12 & 0x7fffffff8) + uVar11 * 8),param_2,
                uVar2 & 0xfffffffffffffff8);
      }
      if (puVar9 != (undefined8 *)0x0) {
        operator_delete__(puVar9);
      }
      *(undefined8 **)(param_1 + 2) = puVar5;
      *param_1 = uVar1;
      param_1[1] = uVar3;
    }
    else {
      puVar5 = puVar9 + uVar2;
      uVar11 = (ulong)((long)puVar5 - (long)param_2) >> 3;
      if (uVar6 < (uint)uVar11) {
        uVar12 = uVar12 >> 3 & 0xffffffff;
        if (uVar12 != 0) {
          lVar8 = 0;
          do {
            *(undefined8 *)((long)puVar5 + lVar8) =
                 *(undefined8 *)((long)puVar5 + lVar8 + uVar12 * -8);
            lVar8 = lVar8 + 8;
          } while (lVar8 != uVar12 * 8);
          puVar9 = *(undefined8 **)(param_1 + 2);
        }
        puVar9 = puVar9 + (uVar2 - uVar12);
        lVar8 = (long)puVar9 - (long)param_2;
        if (lVar8 != 0) {
          do {
            puVar9 = puVar9 + -1;
            *(undefined8 *)((long)param_2 + lVar8 + uVar12 * 8 + -8) = *puVar9;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
        do {
          puVar9 = param_3 + 1;
          *param_2 = *param_3;
          param_2 = param_2 + 1;
          param_3 = puVar9;
        } while (puVar9 != param_4);
      }
      else {
        if (puVar5 != param_2) {
          puVar9 = param_2;
          do {
            puVar9[uVar12 >> 3 & 0xffffffff] = *puVar9;
            puVar9 = puVar9 + 1;
          } while (puVar9 != puVar5);
          puVar9 = *(undefined8 **)(param_1 + 2);
        }
        uVar12 = (ulong)((long)puVar5 - (long)param_2) >> 3 & 0xffffffff;
        if (param_3 + (uVar11 & 0xffffffff) != param_4) {
          puVar5 = param_3 + (uVar11 & 0xffffffff);
          puVar9 = puVar9 + uVar2;
          do {
            puVar7 = puVar5 + 1;
            *puVar9 = *puVar5;
            puVar5 = puVar7;
            puVar9 = puVar9 + 1;
          } while (puVar7 != param_4);
        }
        if (uVar12 != 0) {
          lVar8 = uVar12 << 3;
          do {
            *param_2 = *param_3;
            lVar8 = lVar8 + -8;
            param_2 = param_2 + 1;
            param_3 = param_3 + 1;
          } while (lVar8 != 0);
        }
      }
      *param_1 = uVar1 + uVar6;
      puVar5 = *(undefined8 **)(param_1 + 2);
      uVar11 = uVar10 >> 3 & 0xffffffff;
    }
    param_2 = puVar5 + uVar11;
  }
  return param_2;
}




void FUN_10064cb14(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_10064cb80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064a7e8();
  *puVar1 = &PTR_thunk_FUN_10064cba4_1014a58f0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}




undefined8 * FUN_10064cba4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10064cba4_1014a58f0;
  FUN_10064cbfc();
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return param_1;
}




void thunk_FUN_10064cba4(void)

{
  FUN_10064cba4();
  return;
}




void FUN_10064cbe8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064cba4();
  operator_delete(pvVar1);
  return;
}




void FUN_10064cbfc(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar1 = 0;
    do {
      FUN_10064e04c(*(undefined8 *)(*(long *)(param_1 + 0x30) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x28));
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}




void FUN_10064cc4c(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_22c0;
  undefined8 local_22b8;
  uint local_22b0 [2];
  float local_22a8 [8];
  ushort local_2288 [4];
  undefined8 local_2280;
  undefined8 local_2278;
  undefined8 local_2270;
  byte local_2268 [8640];
  long local_a8;
  
  local_a8 = *(long *)PTR____stack_chk_guard_101444218;
  if ((*(byte *)(param_5 + 0xd) >> 1 & 1) != 0) {
    if (((*(byte *)(param_5 + 0x22) & 1) != 0) && (*(long **)(param_5 + 0x10) != (long *)0x0)) {
      param_4 = param_2;
      param_3 = (float)(**(code **)(**(long **)(param_5 + 0x10) + 0x50))();
      param_2 = 0.0;
      param_1 = 0.0;
    }
    local_22c0 = 0;
    local_22b8 = 0;
    FUN_10064a8c4(param_5,(long)&local_22b8 + 4,(long)&local_22c0 + 4,&local_22b8,&local_22c0);
    uVar2 = local_22b8._4_4_;
    param_3 = param_3 - (float)((int)local_22b8 + local_22b8._4_4_);
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    uVar1 = local_22c0._4_4_;
    param_4 = param_4 - (float)((int)local_22c0 + local_22c0._4_4_);
    if (param_4 <= 0.0) {
      param_4 = 0.0;
    }
    if ((0.0 < param_3) || (0.0 < param_4)) {
      local_22b0[0] = 0;
      FUN_10064d0b8(param_5,local_22b0);
      uVar8 = (ulong)local_22b0[0];
      if (local_22b0[0] != 0) {
        lVar10 = 0;
        lVar11 = 0;
        param_1 = param_1 + (float)uVar2;
        param_2 = param_2 + (float)uVar1;
        do {
          if ((local_2268[lVar10] & 1) == 0) {
            plVar9 = *(long **)(*(long *)(param_5 + 0x30) + lVar11);
            lVar5 = (**(code **)(*plVar9 + 0x40))(plVar9);
            if (lVar5 != 0) {
              *(float *)((long)local_22a8 + lVar10 + 8) = param_3;
              *(float *)((long)local_22a8 + lVar10 + 0xc) = param_4;
              uVar12 = NEON_ucvtf(*(undefined4 *)((long)&local_2280 + lVar10));
              fVar13 = (float)NEON_fminnm(param_3,uVar12);
              plVar6 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
              iVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6,(int)fVar13);
              if (-1 < iVar4) {
                plVar6 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
                uVar7 = (**(code **)(*plVar6 + 0x118))();
                *(undefined8 *)((long)&local_2280 + lVar10) = uVar7;
                plVar6 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
                uVar7 = (**(code **)(*plVar6 + 0x120))();
                *(undefined8 *)((long)&local_2278 + lVar10) = uVar7;
                plVar9 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
                uVar7 = (**(code **)(*plVar9 + 0x128))();
                *(undefined8 *)((long)&local_2270 + lVar10) = uVar7;
                fVar13 = (float)iVar4;
                if ((float)iVar4 <= param_4) {
                  fVar13 = param_4;
                }
                *(float *)((long)local_22a8 + lVar10 + 0xc) = fVar13;
              }
            }
          }
          lVar11 = lVar11 + 8;
          lVar10 = lVar10 + 0x44;
        } while (uVar8 * 0x44 - lVar10 != 0);
        lVar10 = 0;
        lVar11 = 0;
        uVar2 = local_22b0[0];
        if (local_22b0[0] < 2) {
          uVar2 = 1;
        }
        do {
          plVar6 = *(long **)(*(long *)(param_5 + 0x30) + lVar10);
          plVar9 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
          fVar14 = 0.0;
          fVar13 = 0.0;
          if ((local_2268[lVar11] & 1) == 0) {
            fVar13 = *(float *)((long)local_22a8 + lVar11 + 8);
            fVar14 = *(float *)((long)local_22a8 + lVar11 + 0xc);
          }
          *(float *)((long)local_22a8 + lVar11 + 0x18) = fVar13;
          *(float *)((long)local_22a8 + lVar11 + 0x1c) = fVar14;
          if ((*(ushort *)((long)local_2288 + lVar11) & 0xf) == 0) {
            fVar15 = (float)NEON_ucvtf(*(undefined4 *)((long)&local_2280 + lVar11));
          }
          else {
            uVar12 = NEON_ucvtf(*(undefined4 *)((long)&local_2270 + lVar11));
            fVar15 = (float)NEON_fminnm(fVar13,uVar12);
          }
          if ((*(ushort *)((long)local_2288 + lVar11) & 0xf0) == 0) {
            fVar16 = (float)NEON_ucvtf(*(undefined4 *)((long)&local_2280 + lVar11 + 4));
          }
          else {
            uVar12 = NEON_ucvtf(*(undefined4 *)(local_2268 + lVar11 + -4));
            fVar16 = (float)NEON_fminnm(fVar14,uVar12);
          }
          if (fVar15 <= 0.0) {
            fVar15 = 0.0;
          }
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
          *(float *)((long)local_22a8 + lVar11 + 8) = fVar15;
          *(float *)((long)local_22a8 + lVar11 + 0xc) = fVar16;
          *(float *)((long)local_22a8 + lVar11 + 0x10) = param_1;
          *(float *)((long)local_22a8 + lVar11 + 0x14) = param_2;
          uVar1 = *(ushort *)((long)plVar6 + 0xc) & 0x1f;
          fVar17 = param_2;
          if ((*(ushort *)((long)plVar6 + 0xc) & 1) == 0) {
            if ((uVar1 >> 2 & 1) != 0) {
              fVar17 = (fVar14 + param_2) - fVar16;
              goto LAB_10064cf5c;
            }
            if ((uVar1 >> 1 & 1) != 0) {
              fVar17 = param_2 + (fVar14 - fVar16) * 0.5;
              goto LAB_10064cf5c;
            }
          }
          else {
LAB_10064cf5c:
            *(float *)((long)local_22a8 + lVar11 + 4) = fVar17;
          }
          fVar14 = param_1;
          if ((uVar1 >> 3 & 1) == 0) {
            if (uVar1 >> 4 == 0) {
              if ((uVar1 >> 1 & 1) == 0) {
                fVar14 = *(float *)((long)local_22a8 + lVar11);
              }
              else {
                fVar14 = param_1 + (fVar13 - fVar15) * 0.5;
              }
            }
            else {
              fVar14 = (fVar13 + param_1) - fVar15;
            }
          }
          fVar13 = param_1;
          if (param_1 <= fVar14) {
            fVar13 = fVar14;
          }
          *(float *)((long)local_22a8 + lVar11) = fVar13;
          *(float *)((long)local_22a8 + lVar11 + 4) = param_2;
          fVar14 = param_2;
          if (plVar9 != (long *)0x0) {
            lVar5 = plVar9[10];
            fVar15 = (float)(**(code **)(*plVar9 + 0x50))(plVar9);
            fVar13 = 1.0;
            if (1.1920929e-07 <= ABS(*(float *)(plVar9 + 9))) {
              fVar13 = *(float *)(plVar9 + 9);
            }
            fVar16 = 1.0;
            if (1.1920929e-07 <= ABS(*(float *)((long)plVar9 + 0x4c))) {
              fVar16 = *(float *)((long)plVar9 + 0x4c);
            }
            fVar15 = (float)*(undefined8 *)((long)local_22a8 + lVar11) + (float)lVar5 * fVar15;
            fVar14 = (float)((ulong)*(undefined8 *)((long)local_22a8 + lVar11) >> 0x20) +
                     (float)((ulong)lVar5 >> 0x20) * fVar14;
            bVar3 = false;
            if ((*(float *)(plVar9 + 8) == fVar15) &&
               (bVar3 = false, !NAN(*(float *)((long)plVar9 + 0x44)) && !NAN(fVar14))) {
              bVar3 = *(float *)((long)plVar9 + 0x44) == fVar14;
            }
            if (!bVar3) {
              plVar9[8] = CONCAT44(fVar14,fVar15);
              FUN_1000200a0(plVar9);
            }
            (**(code **)(*plVar9 + 0x130))
                      (*(float *)((long)local_22a8 + lVar11 + 8) / fVar13,
                       *(float *)((long)local_22a8 + lVar11 + 0xc) / fVar16,plVar9,0);
            fVar13 = *(float *)((long)local_22a8 + lVar11);
            fVar14 = *(float *)((long)local_22a8 + lVar11 + 4);
            fVar15 = *(float *)((long)local_22a8 + lVar11 + 8);
            fVar16 = *(float *)((long)local_22a8 + lVar11 + 0xc);
          }
          (**(code **)(*plVar6 + 0x28))(fVar13,fVar14,fVar15,fVar16,plVar6);
          *(ushort *)((long)plVar6 + 0xc) = *(ushort *)((long)plVar6 + 0xc) & 0xfdff;
          lVar11 = lVar11 + 0x44;
          lVar10 = lVar10 + 8;
        } while ((ulong)uVar2 * 0x44 - lVar11 != 0);
      }
    }
    *(ushort *)(param_5 + 0xc) = *(ushort *)(param_5 + 0xc) & 0xfdff;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_a8) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10064d0b8(long param_1,uint *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  float *pfVar8;
  float *pfVar9;
  uint *puVar10;
  long *plVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined8 local_98;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  ushort local_78;
  undefined2 uStack_76;
  ushort uStack_74;
  undefined2 uStack_72;
  int iStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  uint local_58;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar12 = 0;
    do {
      plVar11 = *(long **)(*(long *)(param_1 + 0x30) + uVar12 * 8);
      lVar6 = (**(code **)(*plVar11 + 0x40))(plVar11);
      if (lVar6 == 0) {
        pfVar9 = (float *)((long)&DAT_101873a38 + 4);
        pfVar8 = (float *)&DAT_101873a38;
      }
      else {
        lVar6 = (**(code **)(*plVar11 + 0x40))(plVar11);
        pfVar9 = (float *)(lVar6 + 0x4c);
        pfVar8 = (float *)(lVar6 + 0x48);
      }
      fVar16 = *pfVar9;
      fVar13 = *pfVar8;
      FUN_10064a914(&local_98);
      uVar7 = (**(code **)(*plVar11 + 0x10))(plVar11);
      iStack_70 = (int)uVar7;
      uStack_6c = (uint)((ulong)uVar7 >> 0x20);
      uVar7 = (**(code **)(*plVar11 + 0x18))(plVar11);
      uStack_68 = (uint)uVar7;
      uStack_64 = (uint)((ulong)uVar7 >> 0x20);
      uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11);
      iStack_60 = (int)uVar7;
      uStack_5c = (uint)((ulong)uVar7 >> 0x20);
      local_78 = (**(code **)(*plVar11 + 0x38))(plVar11);
      uStack_74 = *(ushort *)((long)plVar11 + 0xc) >> 5 & 0xf;
      lVar6 = (**(code **)(*plVar11 + 0x40))(plVar11);
      if (lVar6 == 0) {
LAB_10064d1d8:
        bVar5 = 1;
      }
      else if ((*(uint *)(lVar6 + 0x84) >> 3 & 1) == 0) {
        bVar5 = 0;
      }
      else {
        if ((*(uint *)(lVar6 + 0x84) >> 2 & 1) != 0) goto LAB_10064d1d8;
        bVar5 = FUN_10064e5e0();
      }
      local_58 = CONCAT31((int3)(local_58 >> 8),
                          (byte)((ushort)*(undefined2 *)((long)plVar11 + 0xc) >> 9) & 2 |
                          ((byte)local_58 & 0xfe | bVar5 ^ 1) & 0xfd);
      if ((local_78 & 0xf) == 0xd) {
        iStack_70 = 0;
      }
      if ((local_78 & 0xf0) == 0xd0) {
        uStack_6c = 0;
      }
      if ((local_78 & 0xf | 2) == 3) {
        uStack_68 = iStack_70;
      }
      if ((local_78 >> 4 & 0xf | 2) == 3) {
        uStack_64 = uStack_6c;
      }
      if ((local_78 & 0xf) == 4) {
        iStack_60 = iStack_70;
      }
      auVar17._4_4_ = uStack_68;
      auVar17._0_4_ = uStack_6c;
      auVar17._8_4_ = uStack_64;
      auVar17._12_4_ = iStack_60;
      auVar17 = NEON_ucvtf(auVar17,4);
      if ((local_78 & 0xf0) != 0x40) {
        uStack_6c = uStack_5c;
      }
      fVar14 = (float)NEON_ucvtf(iStack_70);
      iStack_70 = (int)(fVar13 * fVar14);
      iVar15 = (int)(fVar16 * auVar17._0_4_);
      uStack_68 = (uint)(fVar13 * auVar17._4_4_);
      uStack_64 = (uint)(fVar16 * auVar17._8_4_);
      iStack_60 = (int)(fVar13 * auVar17._12_4_);
      uStack_5c = (uint)(fVar16 * (float)uStack_6c);
      auVar2._4_4_ = uStack_68;
      auVar2._0_4_ = iVar15;
      auVar2._8_4_ = uStack_64;
      auVar2._12_4_ = iStack_60;
      auVar3._4_4_ = uStack_68;
      auVar3._0_4_ = iVar15;
      auVar3._8_4_ = uStack_64;
      auVar3._12_4_ = iStack_60;
      auVar17 = NEON_ext(auVar2,auVar3,4,1);
      uVar7 = NEON_umax(auVar17._0_8_,CONCAT44(iVar15,iStack_70),4);
      uVar7 = NEON_ucvtf(uVar7,4);
      fStack_90 = (float)uVar7;
      fStack_8c = (float)((ulong)uVar7 >> 0x20);
      if ((local_78 & 0xf) != 0) {
        fStack_90 = (float)uStack_68;
      }
      if ((local_78 & 0xf0) != 0) {
        fStack_8c = (float)uStack_64;
      }
      uVar1 = *param_2;
      puVar10 = param_2 + (ulong)uVar1 * 0x11 + 2;
      *(ulong *)(puVar10 + 10) = CONCAT44(iVar15,iStack_70);
      *(ulong *)(puVar10 + 8) = CONCAT26(uStack_72,CONCAT24(uStack_74,CONCAT22(uStack_76,local_78)))
      ;
      *(ulong *)(puVar10 + 0xe) = CONCAT44(uStack_5c,iStack_60);
      *(ulong *)(puVar10 + 0xc) = CONCAT44(uStack_64,uStack_68);
      puVar10[0x10] = local_58;
      auVar4._8_4_ = fStack_90;
      auVar4._0_8_ = local_98;
      auVar4._12_4_ = fStack_8c;
      *(long *)(puVar10 + 2) = auVar4._8_8_;
      *(undefined8 *)puVar10 = local_98;
      *(undefined8 *)(puVar10 + 6) = uStack_80;
      *(undefined8 *)(puVar10 + 4) = local_88;
      *param_2 = uVar1 + 1;
      uVar12 = uVar12 + 1;
      uStack_6c = iVar15;
    } while (uVar12 < *(uint *)(param_1 + 0x28));
  }
  return;
}




void FUN_10064d35c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar4 = 0;
    do {
      lVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar4 * 8) + 0x40))();
      if ((lVar1 != 0) && (lVar2 = FUN_10064e5a0(), lVar2 != 0)) {
        plVar3 = (long *)FUN_10064e5a0(lVar1);
        (**(code **)(*plVar3 + 0x30))();
      }
      (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar4 * 8) + 0x30))();
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x28));
  }
  *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 0x200;
  return;
}




void FUN_10064d3f4(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010064d404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_2,0,2);
  return;
}




void FUN_10064d408(long *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010064d418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_2,0,param_3);
  return;
}




void FUN_10064d41c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10064df5c(param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010064d454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1,uVar1);
  return;
}




void FUN_10064d458(void)

{
  return;
}




void FUN_10064d45c(void)

{
  return;
}




void FUN_10064d460(long *param_1,long param_2,ushort param_3)

{
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xfe1f | (param_3 & 0xf) << 5;
                    /* WARNING: Could not recover jumptable at 0x00010064d47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))();
  return;
}




void FUN_10064d480(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *local_38;
  
  local_38 = param_2;
  FUN_10064bc54(param_1 + 5,&local_38);
  if (((DAT_101dbd2d8 != '\0') &&
      (plVar1 = (long *)(**(code **)(*param_2 + 0x40))(param_2), plVar1 != (long *)0x0)) &&
     (lVar3 = plVar1[4], lVar2 = FUN_10064a850(param_1), lVar3 == 0 && lVar2 != 0)) {
    (**(code **)(*plVar1 + 0x80))(plVar1,lVar2,1);
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}




undefined8 FUN_10064d528(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  float fVar8;
  
  uVar4 = DAT_101dbd4f0;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar6 = 0;
    uVar7 = 0;
    uVar5 = 0;
    do {
      lVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar6 * 8) + 0x40))();
      if ((lVar2 == 0) ||
         (((*(uint *)(lVar2 + 0x84) >> 3 & 1) != 0 &&
          (((*(uint *)(lVar2 + 0x84) >> 2 & 1) != 0 || (iVar1 = FUN_10064e5e0(), iVar1 != 0)))))) {
        uVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar6 * 8) + 0x10))();
        fVar8 = (float)uVar7;
        if ((float)uVar7 <= (float)(uVar3 & 0xffffffff)) {
          fVar8 = (float)(uVar3 & 0xffffffff);
        }
        uVar7 = (uint)fVar8;
        fVar8 = (float)uVar5;
        if ((float)uVar5 <= (float)(uVar3 >> 0x20)) {
          fVar8 = (float)(uVar3 >> 0x20);
        }
        uVar5 = (uint)fVar8;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x28));
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = CONCAT44((ushort)((ulong)uVar4 >> 0x30) + uVar5 +
                     ((uint)((ulong)uVar4 >> 0x20) & 0xffff),
                     uVar7 + ((uint)uVar4 & 0xffff) + ((uint)uVar4 >> 0x10));
  }
  return uVar4;
}




undefined8 FUN_10064d604(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  uVar5 = DAT_101dbd4f0;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    do {
      uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar6 * 8) + 0x10))();
      lVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar6 * 8) + 0x40))();
      if (lVar3 == 0) {
        fVar9 = (float)uVar8;
        if ((float)uVar8 <= (float)(uVar2 >> 0x20)) {
          fVar9 = (float)(uVar2 >> 0x20);
        }
LAB_10064d6cc:
        uVar8 = (uint)fVar9;
        fVar10 = (float)NEON_fminnm((float)(uVar2 & 0xffffffff),(float)(param_2 & 0xffffffff));
        fVar9 = (float)uVar7;
        if ((float)uVar7 <= fVar10) {
          fVar9 = fVar10;
        }
        uVar7 = (uint)fVar9;
      }
      else {
        plVar4 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar6 * 8) + 0x40))();
        if ((*(byte *)((long)plVar4 + 0x84) >> 2 & 1) != 0) {
          uVar1 = (**(code **)(*plVar4 + 0x100))(plVar4,param_2);
          fVar9 = (float)uVar8;
          fVar10 = fVar9;
          if (fVar9 <= (float)(int)uVar1) {
            fVar10 = (float)(int)uVar1;
          }
          if ((uVar1 & 0x80000000) == 0) {
            fVar9 = fVar10;
          }
          goto LAB_10064d6cc;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x28));
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = CONCAT44((ushort)((ulong)uVar5 >> 0x30) + uVar8 +
                     ((uint)((ulong)uVar5 >> 0x20) & 0xffff),
                     uVar7 + ((uint)uVar5 & 0xffff) + ((uint)uVar5 >> 0x10));
  }
  return uVar5;
}




undefined8 FUN_10064d740(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  uVar5 = DAT_101dbd4f0;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar7 = 0;
    uVar8 = 0;
    uVar6 = 0;
    do {
      uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar7 * 8) + 0x10))();
      lVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar7 * 8) + 0x40))();
      if (lVar3 == 0) {
LAB_10064d7e0:
        fVar10 = (float)(uVar2 & 0xffffffff);
LAB_10064d7e4:
        fVar9 = (float)uVar8;
        if ((float)uVar8 <= fVar10) {
          fVar9 = fVar10;
        }
        uVar8 = (uint)fVar9;
        fVar10 = (float)uVar6;
        if ((float)uVar6 <= (float)(uVar2 >> 0x20)) {
          fVar10 = (float)(uVar2 >> 0x20);
        }
        uVar6 = (uint)fVar10;
      }
      else {
        plVar4 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar7 * 8) + 0x40))();
        if ((*(byte *)((long)plVar4 + 0x84) >> 2 & 1) != 0) {
          iVar1 = (**(code **)(*plVar4 + 0x110))(plVar4,param_2);
          if (iVar1 < 0) goto LAB_10064d7e0;
          fVar10 = (float)iVar1;
          goto LAB_10064d7e4;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0x28));
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = CONCAT44((ushort)((ulong)uVar5 >> 0x30) + uVar6 +
                     ((uint)((ulong)uVar5 >> 0x20) & 0xffff),
                     uVar8 + ((uint)uVar5 & 0xffff) + ((uint)uVar5 >> 0x10));
  }
  return uVar5;
}




undefined8 FUN_10064d854(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  float fVar8;
  
  uVar4 = DAT_101dbd4f0;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar6 = 0;
    uVar7 = 0;
    uVar5 = 0;
    do {
      lVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar6 * 8) + 0x40))();
      if ((lVar2 == 0) ||
         (((*(uint *)(lVar2 + 0x84) >> 3 & 1) != 0 &&
          (((*(uint *)(lVar2 + 0x84) >> 2 & 1) != 0 || (iVar1 = FUN_10064e5e0(), iVar1 != 0)))))) {
        uVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar6 * 8) + 0x18))();
        fVar8 = (float)uVar7;
        if ((float)uVar7 <= (float)(uVar3 & 0xffffffff)) {
          fVar8 = (float)(uVar3 & 0xffffffff);
        }
        uVar7 = (uint)fVar8;
        fVar8 = (float)uVar5;
        if ((float)uVar5 <= (float)(uVar3 >> 0x20)) {
          fVar8 = (float)(uVar3 >> 0x20);
        }
        uVar5 = (uint)fVar8;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x28));
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = CONCAT44((ushort)((ulong)uVar4 >> 0x30) + uVar5 +
                     ((uint)((ulong)uVar4 >> 0x20) & 0xffff),
                     uVar7 + ((uint)uVar4 & 0xffff) + ((uint)uVar4 >> 0x10));
  }
  return uVar4;
}




ulong FUN_10064d930(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar3 = (ulong)DAT_101dbd4f8;
    uVar5 = (ulong)DAT_101dbd4fc;
  }
  else {
    uVar8 = 0;
    uVar9 = 0;
    uVar7 = 0;
    do {
      lVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar8 * 8) + 0x40))();
      if ((lVar2 == 0) ||
         (((*(uint *)(lVar2 + 0x84) >> 3 & 1) != 0 &&
          (((*(uint *)(lVar2 + 0x84) >> 2 & 1) != 0 || (iVar1 = FUN_10064e5e0(), iVar1 != 0)))))) {
        uVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar8 * 8) + 0x20))();
        uVar5 = uVar3 >> 0x20;
        uVar4 = (uint)(uVar3 >> 0x20);
        if (DAT_101dbd4f8 == (uint)uVar3 && DAT_101dbd4fc == uVar4) goto LAB_10064da18;
        fVar10 = (float)uVar9;
        if ((float)uVar9 <= (float)(uVar3 & 0xffffffff)) {
          fVar10 = (float)(uVar3 & 0xffffffff);
        }
        uVar9 = (uint)fVar10;
        fVar11 = (float)uVar4;
        fVar10 = (float)uVar7;
        if ((float)uVar7 <= fVar11) {
          fVar10 = fVar11;
        }
        uVar7 = (uint)fVar10;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x28));
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = (ulong)(uVar9 + ((uint)uVar6 & 0xffff) + ((uint)uVar6 >> 0x10));
    uVar5 = (ulong)((ushort)((ulong)uVar6 >> 0x30) + uVar7 + ((uint)((ulong)uVar6 >> 0x20) & 0xffff)
                   );
  }
LAB_10064da18:
  return uVar3 & 0xffffffff | uVar5 << 0x20;
}




void FUN_10064da34(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar3 = 0;
    do {
      plVar1 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar3 * 8) + 0x40))();
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar3 * 8) + 0x48))();
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0xa0))(plVar1,param_2);
        }
      }
      else {
        uVar2 = FUN_100642d08();
        if (((uVar2 & 1) == 0) && (plVar1[4] != param_2)) {
          (**(code **)(*plVar1 + 0x80))(plVar1,param_2,1);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x28));
  }
  return;
}




void FUN_10064daec(undefined8 *param_1,ushort param_2,ushort param_3)

{
  *param_1 = &PTR_FUN_1014a59a8;
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfc00 | 0x55;
  *(ushort *)((long)param_1 + 0xc) =
       param_3 & 0x1f | (param_2 & 0xf) << 5 | *(ushort *)((long)param_1 + 0xc) & 0xf800;
  return;
}




void FUN_10064db28(void)

{
  return;
}




void FUN_10064db2c(long param_1)

{
  *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 0x200;
  return;
}




undefined4 FUN_10064db3c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




undefined8 FUN_10064db44(void)

{
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10064db4c(void)

{
  DAT_101ea58e8 = 0xff;
  DAT_101ea58ea = 0xffff;
  DAT_101ea58ec = 0xffff;
  DAT_101dbd4f0 = 0;
  _DAT_101dbd4f8 = 0xffff0000ffff;
  DAT_101dbd500 = 0;
  return;
}




void FUN_10064db90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064daec(param_1,param_3,param_4);
  *puVar1 = &PTR_FUN_1014a5a08;
  puVar1[2] = param_2;
  return;
}




void FUN_10064dbc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  
  if ((*(long *)(param_5 + 0x10) != 0) && (plVar1 = (long *)FUN_10064e5a0(), plVar1 != (long *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x00010064dc1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}




undefined8 FUN_10064dc30(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010064dc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x118))();
    return uVar1;
  }
  return DAT_101dbd500;
}




undefined8 FUN_10064dc54(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010064dc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x120))();
    return uVar1;
  }
  return DAT_101dbd500;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10064dc78(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010064dc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x128))();
    return uVar1;
  }
  return _DAT_101dbd4f8;
}




uint FUN_10064dc9c(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
    uVar1 = 0x55;
  }
  else {
    uVar1 = FUN_10064e5c4();
    uVar2 = uVar1 & 0xffff0000;
    uVar1 = uVar1 & 0xffff;
  }
  return uVar1 | uVar2;
}




void FUN_10064dcd0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10064e5b8();
    return;
  }
  return;
}




void FUN_10064dce0(void)

{
  return;
}




undefined8 FUN_10064dce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_10064dcf0(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  DAT_101dbd508 = operator_new(0x80020);
  *DAT_101dbd508 = &PTR_FUN_1014a5a70;
  lVar2 = 1;
  puVar1 = DAT_101dbd508 + 2;
  do {
    *(short *)puVar1 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar1 = puVar1 + 8;
  } while (lVar2 != 0x2000);
  DAT_101dbd508[0x10002] = 0x1fff0000;
  return;
}




void FUN_10064dd48(void)

{
  if (DAT_101dbd508 != (long *)0x0) {
    (**(code **)(*DAT_101dbd508 + 8))();
  }
  DAT_101dbd508 = (long *)0x0;
  return;
}




void thunk_FUN_10064dd80(void)

{
  long lVar1;
  ushort uVar2;
  
  lVar1 = DAT_101dbd508;
  if (DAT_101dbd508 != 0) {
    uVar2 = *(ushort *)(DAT_101dbd508 + 0x80010);
    if ((ulong)uVar2 != 0xffff) {
      if (uVar2 == *(ushort *)(DAT_101dbd508 + 0x80012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *(ushort *)(DAT_101dbd508 + (ulong)uVar2 * 0x40 + 0x10);
      }
      *(ushort *)(DAT_101dbd508 + 0x80010) = uVar2;
      *(int *)(lVar1 + 0x80014) = *(int *)(lVar1 + 0x80014) + 1;
      FUN_10064a9c0();
      return;
    }
  }
  FUN_10064a9c0(0);
  return;
}




void FUN_10064dd80(void)

{
  long lVar1;
  ushort uVar2;
  
  lVar1 = DAT_101dbd508;
  if (DAT_101dbd508 != 0) {
    uVar2 = *(ushort *)(DAT_101dbd508 + 0x80010);
    if ((ulong)uVar2 != 0xffff) {
      if (uVar2 == *(ushort *)(DAT_101dbd508 + 0x80012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *(ushort *)(DAT_101dbd508 + (ulong)uVar2 * 0x40 + 0x10);
      }
      *(ushort *)(DAT_101dbd508 + 0x80010) = uVar2;
      *(int *)(lVar1 + 0x80014) = *(int *)(lVar1 + 0x80014) + 1;
      FUN_10064a9c0();
      return;
    }
  }
  FUN_10064a9c0(0);
  return;
}




void thunk_FUN_10064dde8(void)

{
  long lVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  
  lVar1 = DAT_101dbd508;
  if (DAT_101dbd508 != 0) {
    uVar4 = *(ushort *)(DAT_101dbd508 + 0x80010);
    if ((ulong)uVar4 != 0xffff) {
      puVar2 = (ushort *)(DAT_101dbd508 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_101dbd508 + 0x80012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar2;
      }
      *(ushort *)(DAT_101dbd508 + 0x80010) = uVar4;
      *(int *)(lVar1 + 0x80014) = *(int *)(lVar1 + 0x80014) + 1;
      goto LAB_10064de50;
    }
  }
  puVar2 = (ushort *)0x0;
LAB_10064de50:
  puVar3 = (undefined8 *)FUN_10064a9f0(puVar2,0);
  *puVar3 = &PTR_thunk_FUN_10064aa2c_1014a5a90;
  return;
}




void FUN_10064dde8(void)

{
  long lVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  
  lVar1 = DAT_101dbd508;
  if (DAT_101dbd508 != 0) {
    uVar4 = *(ushort *)(DAT_101dbd508 + 0x80010);
    if ((ulong)uVar4 != 0xffff) {
      puVar2 = (ushort *)(DAT_101dbd508 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_101dbd508 + 0x80012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar2;
      }
      *(ushort *)(DAT_101dbd508 + 0x80010) = uVar4;
      *(int *)(lVar1 + 0x80014) = *(int *)(lVar1 + 0x80014) + 1;
      goto LAB_10064de50;
    }
  }
  puVar2 = (ushort *)0x0;
LAB_10064de50:
  puVar3 = (undefined8 *)FUN_10064a9f0(puVar2,0);
  *puVar3 = &PTR_thunk_FUN_10064aa2c_1014a5a90;
  return;
}




void thunk_FUN_10064de70(void)

{
  long lVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  
  lVar1 = DAT_101dbd508;
  if (DAT_101dbd508 != 0) {
    uVar4 = *(ushort *)(DAT_101dbd508 + 0x80010);
    if ((ulong)uVar4 != 0xffff) {
      puVar2 = (ushort *)(DAT_101dbd508 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_101dbd508 + 0x80012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar2;
      }
      *(ushort *)(DAT_101dbd508 + 0x80010) = uVar4;
      *(int *)(lVar1 + 0x80014) = *(int *)(lVar1 + 0x80014) + 1;
      goto LAB_10064ded8;
    }
  }
  puVar2 = (ushort *)0x0;
LAB_10064ded8:
  puVar3 = (undefined8 *)FUN_10064a9f0(puVar2,1);
  *puVar3 = &PTR_thunk_FUN_10064aa2c_1014a5b68;
  return;
}




void FUN_10064de70(void)

{
  long lVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  
  lVar1 = DAT_101dbd508;
  if (DAT_101dbd508 != 0) {
    uVar4 = *(ushort *)(DAT_101dbd508 + 0x80010);
    if ((ulong)uVar4 != 0xffff) {
      puVar2 = (ushort *)(DAT_101dbd508 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_101dbd508 + 0x80012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar2;
      }
      *(ushort *)(DAT_101dbd508 + 0x80010) = uVar4;
      *(int *)(lVar1 + 0x80014) = *(int *)(lVar1 + 0x80014) + 1;
      goto LAB_10064ded8;
    }
  }
  puVar2 = (ushort *)0x0;
LAB_10064ded8:
  puVar3 = (undefined8 *)FUN_10064a9f0(puVar2,1);
  *puVar3 = &PTR_thunk_FUN_10064aa2c_1014a5b68;
  return;
}




void thunk_FUN_10064def8(void)

{
  long lVar1;
  ushort uVar2;
  
  lVar1 = DAT_101dbd508;
  if (DAT_101dbd508 != 0) {
    uVar2 = *(ushort *)(DAT_101dbd508 + 0x80010);
    if ((ulong)uVar2 != 0xffff) {
      if (uVar2 == *(ushort *)(DAT_101dbd508 + 0x80012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *(ushort *)(DAT_101dbd508 + (ulong)uVar2 * 0x40 + 0x10);
      }
      *(ushort *)(DAT_101dbd508 + 0x80010) = uVar2;
      *(int *)(lVar1 + 0x80014) = *(int *)(lVar1 + 0x80014) + 1;
      FUN_10064cb80();
      return;
    }
  }
  FUN_10064cb80(0);
  return;
}




void FUN_10064def8(void)

{
  long lVar1;
  ushort uVar2;
  
  lVar1 = DAT_101dbd508;
  if (DAT_101dbd508 != 0) {
    uVar2 = *(ushort *)(DAT_101dbd508 + 0x80010);
    if ((ulong)uVar2 != 0xffff) {
      if (uVar2 == *(ushort *)(DAT_101dbd508 + 0x80012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *(ushort *)(DAT_101dbd508 + (ulong)uVar2 * 0x40 + 0x10);
      }
      *(ushort *)(DAT_101dbd508 + 0x80010) = uVar2;
      *(int *)(lVar1 + 0x80014) = *(int *)(lVar1 + 0x80014) + 1;
      FUN_10064cb80();
      return;
    }
  }
  FUN_10064cb80(0);
  return;
}




void FUN_10064df5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  
  lVar2 = DAT_101dbd508;
  if (DAT_101dbd508 != 0) {
    uVar3 = *(ushort *)(DAT_101dbd508 + 0x80010);
    if ((ulong)uVar3 != 0xffff) {
      puVar1 = (ushort *)(DAT_101dbd508 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_101dbd508 + 0x80012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar1;
      }
      *(ushort *)(DAT_101dbd508 + 0x80010) = uVar3;
      *(int *)(lVar2 + 0x80014) = *(int *)(lVar2 + 0x80014) + 1;
      FUN_10064db90(puVar1,param_1,param_2,param_3);
      return;
    }
  }
  FUN_10064db90(0,param_1,param_2,param_3);
  return;
}




void FUN_10064dfcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  
  lVar2 = DAT_101dbd508;
  if (DAT_101dbd508 != 0) {
    uVar3 = *(ushort *)(DAT_101dbd508 + 0x80010);
    if ((ulong)uVar3 != 0xffff) {
      puVar1 = (ushort *)(DAT_101dbd508 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_101dbd508 + 0x80012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar1;
      }
      *(ushort *)(DAT_101dbd508 + 0x80010) = uVar3;
      *(int *)(lVar2 + 0x80014) = *(int *)(lVar2 + 0x80014) + 1;
      FUN_10064e134(puVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      return;
    }
  }
  FUN_10064e134(0,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}




void FUN_10064e04c(undefined8 param_1)

{
  if (DAT_101dbd508 != 0) {
    FUN_10064e064(DAT_101dbd508,param_1);
    return;
  }
  return;
}




void FUN_10064e064(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  
  (**(code **)*param_2)(param_2);
  iVar4 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x80010) == -1) {
    sVar3 = (short)((uint)((int)param_2 - iVar4) >> 6);
    *(short *)(param_1 + 0x80012) = sVar3;
    *(short *)(param_1 + 0x80010) = sVar3;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x80012);
    uVar2 = (undefined2)((uint)((int)param_2 - iVar4) >> 6);
    *(undefined2 *)(param_1 + 0x80012) = uVar2;
    *(undefined2 *)(param_1 + 0x10 + (ulong)uVar1 * 0x40) = uVar2;
  }
  *(int *)(param_1 + 0x80014) = *(int *)(param_1 + 0x80014) + -1;
  return;
}




void FUN_10064e0f0(void)

{
  return;
}




void thunk_FUN_10064aa2c(void)

{
  FUN_10064aa2c();
  return;
}




void FUN_10064e0fc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064aa2c();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10064e110(void)

{
  return 0;
}




void FUN_10064e118(void)

{
  return;
}




void thunk_FUN_10064aa2c(void)

{
  FUN_10064aa2c();
  return;
}




void FUN_10064e120(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064aa2c();
  operator_delete(pvVar1);
  return;
}




void FUN_10064e134(undefined8 param_1,uint param_2,int param_3,undefined8 param_4,byte param_5,
                  char param_6,undefined8 param_7,int param_8)

{
  undefined8 *puVar1;
  ushort uVar2;
  
  puVar1 = (undefined8 *)FUN_10064daec(param_1,param_4,param_7);
  *puVar1 = &PTR_FUN_1014a5c40;
  *(uint *)((long)puVar1 + 0xe) = param_2 & 0xffff | param_3 << 0x10;
  *(byte *)(puVar1 + 1) = param_5 & 0xf | param_6 << 4;
  uVar2 = 0x400;
  if (param_8 == 0) {
    uVar2 = 0;
  }
  *(ushort *)((long)puVar1 + 0xc) = *(ushort *)((long)puVar1 + 0xc) & 0xfbff | uVar2;
  return;
}




ulong FUN_10064e1b4(long param_1)

{
  return ((ulong)*(uint *)(param_1 + 0xe) | (ulong)*(uint *)(param_1 + 0xe) << 0x10) &
         0xffff0000ffff;
}




ulong FUN_10064e1c4(long param_1)

{
  return ((ulong)*(uint *)(param_1 + 0xe) | (ulong)*(uint *)(param_1 + 0xe) << 0x10) &
         0xffff0000ffff;
}




undefined8 FUN_10064e1d4(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_101dbd4f8;
  uVar1 = DAT_101dbd4fc;
  if (*(char *)(param_1 + 8) == '\0') {
    uVar2 = *(uint *)(param_1 + 0xe) & 0xffff;
    uVar1 = *(uint *)(param_1 + 0xe) >> 0x10;
  }
  return CONCAT44(uVar1,uVar2);
}




void FUN_10064e204(void)

{
  return;
}




void FUN_10064e20c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_thunk_FUN_10064e2bc_1014a5ca0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x15] = 0;
  *(ushort *)(puVar1 + 0x16) = *(ushort *)(puVar1 + 0x16) & 0xfc00 | 0x55;
  *(byte *)((long)puVar1 + 0xb4) = *(byte *)((long)puVar1 + 0xb4) & 0xfe;
  puVar1[0x14] = 0xffff0000ffff;
  return;
}




void FUN_10064e264(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_thunk_FUN_10064e2bc_1014a5ca0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x15] = 0;
  *(ushort *)(puVar1 + 0x16) = *(ushort *)(puVar1 + 0x16) & 0xfc00 | 0x55;
  *(byte *)((long)puVar1 + 0xb4) = *(byte *)((long)puVar1 + 0xb4) & 0xfe;
  puVar1[0x14] = 0xffff0000ffff;
  return;
}




void FUN_10064e2bc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10064e2bc_1014a5ca0;
  if (param_1[0x11] != 0) {
    FUN_10064e04c();
    param_1[0x11] = 0;
  }
  FUN_10064221c(param_1);
  return;
}




void thunk_FUN_10064e2bc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10064e2bc_1014a5ca0;
  if (param_1[0x11] != 0) {
    FUN_10064e04c();
    param_1[0x11] = 0;
  }
  FUN_10064221c(param_1);
  return;
}




void FUN_10064e2fc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




void FUN_10064e310(long param_1)

{
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010064e320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x88) + 0x50))();
    return;
  }
  return;
}




void FUN_10064e328(void)

{
  return;
}




void FUN_10064e32c(long param_1)

{
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x88) + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x00010064e378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x88) + 0x28))(0,0,0x42c80000,0x42c80000);
    return;
  }
  return;
}




void FUN_10064e388(long param_1)

{
  FUN_1006431ac();
  if ((*(long **)(param_1 + 0x20) != (long *)0x0) && ((*(byte *)(param_1 + 0x84) >> 6 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010064e3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0xe8))();
    return;
  }
  return;
}




undefined4 FUN_10064e3cc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}




void FUN_10064e3d4(undefined8 param_1,undefined8 param_2,long *param_3,int param_4)

{
  if ((ABS(*(float *)(param_3 + 0x12) - (float)param_1) < 0.1) &&
     (ABS(*(float *)((long)param_3 + 0x94) - (float)param_2) < 0.1)) {
    return;
  }
  *(float *)(param_3 + 0x12) = (float)param_1;
  *(float *)((long)param_3 + 0x94) = (float)param_2;
  if ((long *)param_3[0x11] != (long *)0x0 && param_4 != 0) {
    (**(code **)(*(long *)param_3[0x11] + 0x30))();
  }
  (**(code **)(*param_3 + 0xe8))(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010064e478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0xf0))(param_1,param_2,param_3);
  return;
}




void FUN_10064e47c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010064e488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))(param_1,1);
  return;
}




void FUN_10064e48c(long *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010064e49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))(*param_2,param_2[1],param_1,1);
  return;
}




void FUN_10064e4a0(long *param_1,ulong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010064e4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))((float)(param_2 & 0xffffffff),(float)(param_2 >> 0x20),param_1,1);
  return;
}




undefined8 FUN_10064e4bc(void)

{
  return 0xffffffff;
}




undefined8 FUN_10064e4c4(void)

{
  return 0xffffffff;
}




undefined8 FUN_10064e4cc(void)

{
  return 0xffffffff;
}




undefined8 FUN_10064e4d4(void)

{
  return 0xffffffff;
}




void FUN_10064e4dc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  return;
}




undefined8 FUN_10064e4e4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010064e4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x88) + 0x10))();
    return uVar1;
  }
  return *(undefined8 *)(param_1 + 0xa8);
}




void FUN_10064e504(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x98) = param_2;
  return;
}




undefined8 FUN_10064e50c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}




void FUN_10064e514(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xa0) = param_2;
  return;
}




undefined8 FUN_10064e51c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}




void FUN_10064e524(long *param_1,long param_2)

{
  if (param_1[0x11] != 0) {
    FUN_10064e04c();
  }
  param_1[0x11] = param_2;
  FUN_10064a82c(param_2,param_1);
  if (DAT_101dbd2d8 != '\0') {
    (**(code **)(*(long *)param_1[0x11] + 0xa0))((long *)param_1[0x11],param_1);
  }
  (**(code **)(*(long *)param_1[0x11] + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x00010064e59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




undefined8 FUN_10064e5a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}




bool FUN_10064e5a8(long param_1)

{
  return *(long *)(param_1 + 0x88) != 0;
}




void FUN_10064e5b8(long param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0xb0) = *param_2;
  return;
}




undefined4 FUN_10064e5c4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}




void FUN_10064e5cc(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & 0xfe | param_2;
  return;
}




byte FUN_10064e5e0(long param_1)

{
  return *(byte *)(param_1 + 0xb4) & 1;
}




void FUN_10064e5ec(undefined1 param_1 [16],float param_2,long param_3)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = (float)FUN_10064e634();
  bVar1 = false;
  if ((*(float *)(param_3 + 0x40) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)(param_3 + 0x44)) && !NAN(param_2))) {
    bVar1 = *(float *)(param_3 + 0x44) == param_2;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x40) = fVar2;
    *(float *)(param_3 + 0x44) = param_2;
    FUN_1000200a0(param_3);
    return;
  }
  return;
}




void FUN_10064e634(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,int param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = param_4 - 1;
  uVar4 = 0;
  uVar2 = 0;
  uVar3 = 0;
  if (uVar1 < 8) {
    uVar2 = *(undefined4 *)(&DAT_10117d9b4 + (long)(int)uVar1 * 4);
    uVar3 = *(undefined4 *)(&DAT_10117d994 + (long)(int)uVar1 * 4);
  }
  uVar1 = param_6 - 1;
  uVar5 = 0;
  if (uVar1 < 8) {
    uVar4 = *(undefined4 *)(&DAT_10117d9b4 + (long)(int)uVar1 * 4);
    uVar5 = *(undefined4 *)(&DAT_10117d994 + (long)(int)uVar1 * 4);
  }
  FUN_10064e7cc(uVar2,uVar3,uVar4,uVar5,param_1,param_2,param_3,param_5);
  return;
}




void FUN_10064e68c(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = (float)FUN_10064e634(param_3,param_4,*(undefined8 *)(param_3 + 0x20),param_4);
  bVar1 = false;
  if ((*(float *)(param_3 + 0x40) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)(param_3 + 0x44)) && !NAN(param_2))) {
    bVar1 = *(float *)(param_3 + 0x44) == param_2;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x40) = fVar2;
    *(float *)(param_3 + 0x44) = param_2;
    FUN_1000200a0(param_3);
    return;
  }
  return;
}




void FUN_10064e6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100641574("root-layer");
  FUN_10064e5ec(param_1,param_2,param_3,param_4,uVar1,param_4);
  return;
}




void FUN_10064e72c(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3 - 1;
  uVar3 = 0;
  uVar2 = 0;
  if (uVar1 < 5) {
    uVar2 = *(undefined4 *)(&DAT_10117d980 + (long)(int)uVar1 * 4);
  }
  if (param_5 - 1U < 5) {
    uVar3 = *(undefined4 *)(&DAT_10117d980 + (long)(int)(param_5 - 1U) * 4);
  }
  FUN_10064e9b4(uVar2,uVar3,param_1,param_2,param_4,3 < uVar1 || (uVar1 & 0xf) == 1);
  return;
}




void FUN_10064e784(undefined1 param_1 [16],float param_2,long param_3)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = (float)FUN_10064e7cc();
  bVar1 = false;
  if ((*(float *)(param_3 + 0x40) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)(param_3 + 0x44)) && !NAN(param_2))) {
    bVar1 = *(float *)(param_3 + 0x44) == param_2;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x40) = fVar2;
    *(float *)(param_3 + 0x44) = param_2;
    FUN_1000200a0(param_3);
    return;
  }
  return;
}




void FUN_10064e7cc(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                  undefined4 param_5,long *param_6,long *param_7)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  
  if (param_6[4] == 0) {
    FUN_100642170(&local_80);
  }
  else {
    puVar1 = (undefined8 *)FUN_10003d5bc();
    local_60 = *(undefined4 *)(puVar1 + 4);
    uStack_78 = puVar1[1];
    local_80 = *puVar1;
    uStack_68 = puVar1[3];
    local_70 = puVar1[2];
  }
  if (param_7[4] == 0) {
    FUN_100642170(&local_b0);
  }
  else {
    puVar1 = (undefined8 *)FUN_10003d5bc();
    local_90 = *(undefined4 *)(puVar1 + 4);
    uStack_a8 = puVar1[1];
    local_b0 = *puVar1;
    uStack_98 = puVar1[3];
    uStack_a0 = puVar1[2];
  }
  uVar2 = (**(code **)(*param_7 + 0x50))(param_7);
  (**(code **)(*param_6 + 0x50))
            (CONCAT44(param_5,uVar2),
             CONCAT44(param_4 - (float)((ulong)param_7[10] >> 0x20),param_3 - (float)param_7[10]),
             param_6);
  return;
}




void FUN_10064e91c(undefined1 param_1 [16],float param_2,long *param_3,long *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_100655b94(param_3 + 0x1a);
  fVar2 = *(float *)(lVar1 + 0x920);
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar2 = ABS(fVar2) / param_2;
  lVar1 = FUN_100655b94(param_4 + 0x1a);
  fVar3 = *(float *)(lVar1 + 0x920);
  (**(code **)(*param_4 + 0x48))(param_4);
  FUN_10064e9b4(1.0 - fVar2,1.0 - ABS(fVar3) / param_2,0,param_3,param_4,1);
  return;
}




void FUN_10064e9b4(float param_1,undefined8 param_2,float param_3,long *param_4,long *param_5,
                  ulong param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  
  if (param_4[4] == 0) {
    uVar10 = param_2;
    FUN_100642170(&local_b0);
  }
  else {
    puVar1 = (undefined8 *)FUN_10003d5bc();
    local_90 = *(undefined4 *)(puVar1 + 4);
    uStack_a8 = puVar1[1];
    uVar10 = *puVar1;
    uStack_98 = puVar1[3];
    uStack_a0 = puVar1[2];
    local_b0 = uVar10;
  }
  if (param_5[4] == 0) {
    FUN_100642170(&local_e0);
  }
  else {
    puVar1 = (undefined8 *)FUN_10003d5bc();
    local_c0 = *(undefined4 *)(puVar1 + 4);
    uStack_d8 = puVar1[1];
    uVar10 = *puVar1;
    uStack_c8 = puVar1[3];
    uStack_d0 = puVar1[2];
    local_e0 = uVar10;
  }
  uVar8 = (undefined4)uVar10;
  uVar3 = (ulong)&local_b0 | (param_6 & 1) << 2;
  fVar11 = *(float *)(uVar3 + 0x10);
  local_e8 = param_5[8];
  pfVar4 = (float *)((ulong)&local_e8 | (param_6 & 1) << 2);
  fVar12 = *pfVar4;
  uVar6 = (**(code **)(*param_5 + 0x50))(param_5);
  local_f0 = CONCAT44(uVar8,uVar6);
  pfVar5 = (float *)((ulong)&local_f0 | (param_6 & 1) << 2);
  local_f8 = param_5[10];
  fVar9 = (float)param_2 - *(float *)((ulong)&local_f8 | (param_6 & 1) << 2);
  fVar7 = *pfVar5 * fVar9;
  uVar2 = (ulong)&local_e0 | (param_6 & 1) << 2;
  fVar13 = *(float *)(uVar2 + 0x10);
  fVar14 = *(float *)(uVar2 + 8);
  uVar6 = (**(code **)(*param_4 + 0x50))(param_4);
  local_e8 = CONCAT44(fVar9,uVar6);
  local_f0 = param_4[10];
  fVar7 = ((fVar14 + param_3 * fVar11 + (fVar12 + fVar7) * fVar13 +
           *(float *)(uVar3 + 0x10) * (*pfVar5 - param_1) * *pfVar4) - *(float *)(uVar3 + 8)) /
          *(float *)(uVar3 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(float *)(param_4 + 8) == fVar7) {
      return;
    }
    *(float *)(param_4 + 8) = fVar7;
  }
  else {
    if (*(float *)((long)param_4 + 0x44) == fVar7) {
      return;
    }
    *(float *)((long)param_4 + 0x44) = fVar7;
  }
  FUN_1000200a0(param_4);
  return;
}




void FUN_10064eb54(uint param_1,undefined1 *param_2)

{
  if (param_1 < 6) {
    *param_2 = (char)(0x10000010001 >> (((ulong)param_1 & 7) << 3));
  }
  return;
}




void FUN_10064eb7c(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = param_2 - 1;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  if (uVar1 < 8) {
    uVar3 = *(undefined4 *)(&DAT_10117d994 + (long)(int)uVar1 * 4);
    uVar2 = *(undefined4 *)(&DAT_10117d9b4 + (long)(int)uVar1 * 4);
  }
  uVar1 = param_4 - 1;
  uVar4 = 0;
  if (uVar1 < 8) {
    uVar5 = *(undefined4 *)(&DAT_10117d994 + (long)(int)uVar1 * 4);
    uVar4 = *(undefined4 *)(&DAT_10117d9b4 + (long)(int)uVar1 * 4);
  }
  FUN_10064ebcc(uVar2,uVar3,uVar4,uVar5,param_1,param_3);
  return;
}




void FUN_10064ebcc(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  if (param_1[4] == 0) {
    FUN_100642170(&local_70);
  }
  else {
    puVar1 = (undefined8 *)FUN_10003d5bc();
    local_50 = *(undefined4 *)(puVar1 + 4);
    uStack_68 = puVar1[1];
    local_70 = *puVar1;
    uStack_58 = puVar1[3];
    local_60 = puVar1[2];
  }
  if (param_2[4] == 0) {
    FUN_100642170(&local_a0);
  }
  else {
    puVar1 = (undefined8 *)FUN_10003d5bc();
    local_80 = *(undefined4 *)(puVar1 + 4);
    uStack_98 = puVar1[1];
    local_a0 = *puVar1;
    uStack_88 = puVar1[3];
    uStack_90 = puVar1[2];
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_2 + 0x50))(param_2);
  return;
}




void FUN_10064ecdc(undefined8 param_1,float param_2,long *param_3)

{
  float fVar1;
  
  (**(code **)(*param_3 + 0x48))();
  fVar1 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  FUN_10064e47c(param_1,(param_2 * (float)param_1) / fVar1,param_3);
  return;
}




void FUN_10064ed30(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x48))();
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10064e47c((fVar1 * param_1._0_4_) / param_2,param_1._0_8_,param_3);
  return;
}




float FUN_10064ed84(long *param_1,long *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x48))();
  fVar2 = (float)(**(code **)(*param_2 + 0x48))(param_2);
  fVar2 = fVar2 / fVar1;
  if (fVar1 <= 1.1920929e-07) {
    fVar2 = 1.0;
  }
  return fVar2;
}




void FUN_10064edf4(long *param_1)

{
  undefined1 local_30 [8];
  undefined1 auStack_28 [8];
  undefined1 local_20 [8];
  undefined8 local_18;
  
  (**(code **)(*param_1 + 0x68))(param_1,&local_18,local_20);
  FUN_10064142c(auStack_28,(ulong)auStack_28 | 4);
  FUN_100641518(local_30,(ulong)local_30 | 4);
  NEON_fmaxnm(local_18,0,4);
  return;
}




bool FUN_10064ee6c(long *param_1)

{
  bool bVar1;
  bool bVar2;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  
  (**(code **)(*param_1 + 0x68))(param_1,&local_18,&local_20);
  FUN_10064142c(&local_28,(ulong)&local_28 | 4);
  FUN_100641518(&local_30,(ulong)&local_30 | 4);
  bVar1 = true;
  bVar2 = false;
  if ((float)DAT_101dc1cb8 <= local_20) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fStack_1c) && !NAN(DAT_101dc1cb8._4_4_)) {
      bVar1 = fStack_1c < DAT_101dc1cb8._4_4_;
      bVar2 = false;
    }
  }
  if (bVar1 == bVar2) {
    bVar1 = local_18 <= local_30 * local_28 && fStack_14 <= fStack_2c * fStack_24;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}




bool FUN_10064ef04(long *param_1)

{
  bool bVar1;
  bool bVar2;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  
  (**(code **)(*param_1 + 0x68))(param_1,&local_18,&local_20);
  FUN_10064142c(&local_28,(ulong)&local_28 | 4);
  FUN_100641518(&local_30,(ulong)&local_30 | 4);
  bVar1 = true;
  bVar2 = false;
  if ((float)DAT_101dc1cb8 <= local_18) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fStack_14) && !NAN(DAT_101dc1cb8._4_4_)) {
      bVar1 = fStack_14 < DAT_101dc1cb8._4_4_;
      bVar2 = false;
    }
  }
  if (bVar1 == bVar2) {
    bVar1 = local_20 <= local_30 * local_28 && fStack_1c <= fStack_2c * fStack_24;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}




void FUN_10064ef9c(undefined8 param_1,undefined8 param_2)

{
  FUN_10003d5bc(param_2);
  return;
}




void FUN_10064efd0(undefined8 param_1,undefined8 param_2)

{
  FUN_10003d5bc(param_2);
  return;
}




void FUN_10064f008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10003d5bc(param_2);
  FUN_10003d5bc(param_3);
  return;
}




void FUN_10064f05c(void)

{
  undefined1 local_28 [8];
  
  FUN_100641518(local_28,(ulong)local_28 | 4);
  return;
}




float FUN_10064f0a0(float param_1,long *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_2 + 8);
  fVar1 = (float)(**(code **)(*param_2 + 0x50))();
  return fVar2 + fVar1 * (param_1 - *(float *)(param_2 + 10));
}




void FUN_10064f0f8(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  FUN_10003d5bc(param_1[4]);
  return;
}




void FUN_10064f15c(undefined1 param_1 [16],float param_2,long *param_3,long *param_4,int param_5,
                  int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_48;
  float fStack_44;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x48))();
  fVar3 = param_2;
  fVar2 = (float)(**(code **)(*param_4 + 0x48))(param_4);
  fStack_44 = (float)NEON_fminnm(fVar2 / fVar1,fVar3 / param_2);
  if (((param_5 != 0) && (1.0 < fStack_44)) || ((param_6 != 0 && (fStack_44 < 1.0)))) {
    local_48 = fStack_44 * fVar1;
    fStack_44 = fStack_44 * param_2;
    FUN_10064e48c(param_3,&local_48);
  }
  return;
}




long FUN_10064f204(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_FUN_1014a5de8;
  FUN_1006421a8(puVar1 + 0x17);
  *(undefined ***)(param_1 + 0xb8) = &PTR_thunk_FUN_10064221c_1014a5f38;
  *(undefined8 *)(param_1 + 0x140) = DAT_101dc1cb8;
  FUN_100642bd8(param_1,puVar1 + 0x17,1);
  *(uint *)((long)puVar1 + 0x13c) = *(uint *)((long)puVar1 + 0x13c) & 0xffffffbf;
  return param_1;
}




long thunk_FUN_10064f204(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_FUN_1014a5de8;
  FUN_1006421a8(puVar1 + 0x17);
  *(undefined ***)(param_1 + 0xb8) = &PTR_thunk_FUN_10064221c_1014a5f38;
  *(undefined8 *)(param_1 + 0x140) = DAT_101dc1cb8;
  FUN_100642bd8(param_1,puVar1 + 0x17,1);
  *(uint *)((long)puVar1 + 0x13c) = *(uint *)((long)puVar1 + 0x13c) & 0xffffffbf;
  return param_1;
}




void FUN_10064f27c(long *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(float *)(param_1 + 10) == *param_2) &&
     (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x54)) && !NAN(param_2[1]))) {
    bVar1 = *(float *)((long)param_1 + 0x54) == param_2[1];
  }
  if (!bVar1) {
    param_1[10] = *(long *)param_2;
    FUN_1000200a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010064f2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void thunk_FUN_10064f2cc(void)

{
  FUN_10064f2cc();
  return;
}




void FUN_10064f2cc(long param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)*(undefined8 *)(param_1 + 0x90) *
          ((float)*(undefined8 *)(param_1 + 0x140) - (float)*(undefined8 *)(param_1 + 0x50));
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) *
          ((float)((ulong)*(undefined8 *)(param_1 + 0x140) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20));
  bVar1 = false;
  if ((*(float *)(param_1 + 0xf8) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0xfc)) && !NAN(fVar3))) {
    bVar1 = *(float *)(param_1 + 0xfc) == fVar3;
  }
  if (!bVar1) {
    *(ulong *)(param_1 + 0xf8) = CONCAT44(fVar3,fVar2);
    FUN_1000200a0(param_1 + 0xb8);
    return;
  }
  return;
}




void FUN_10064f308(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)(param_3 + 0x28) = param_1;
  *(undefined4 *)((long)param_3 + 0x144) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010064f318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0xe8))();
  return;
}




void FUN_10064f31c(long param_1)

{
  FUN_100642bd8(param_1 + 0xb8);
  return;
}




void FUN_10064f324(long param_1)

{
  FUN_100642bd8(param_1 + 0xb8);
  return;
}




undefined1  [16] FUN_10064f32c(long param_1)

{
  undefined4 extraout_s0;
  undefined4 uVar1;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined8 extraout_var_00;
  undefined8 uVar4;
  undefined1 auVar2 [16];
  
  if (*(long **)(param_1 + 0x20) == (long *)0x0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar1 = (undefined4)DAT_101dc1cb8;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x48))();
    uVar1 = extraout_s0;
    uVar3 = extraout_var;
    uVar4 = extraout_var_00;
  }
  auVar2._4_4_ = uVar3;
  auVar2._0_4_ = uVar1;
  auVar2._8_8_ = uVar4;
  return auVar2;
}




void FUN_10064f360(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10064f390(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_10064221c(void)

{
  FUN_10064221c();
  return;
}




void FUN_10064f3c8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064221c();
  operator_delete(pvVar1);
  return;
}




void FUN_10064f3dc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100652c08();
  *puVar1 = &PTR_FUN_1014a6038;
  puVar1[0x17] = &PTR_FUN_1014a61a0;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  puVar1[0x23] = 0;
  *(byte *)(puVar1 + 0x24) = *(byte *)(puVar1 + 0x24) & 0xf8;
  return;
}




void FUN_10064f424(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a7108;
  param_1[0x17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10064f464(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_1014a7108;
  *param_1 = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 3);
  FUN_10064e2bc(param_1 + -0x17);
  return;
}




void FUN_10064f4a0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014a7108;
  param_1[0x17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10064f4e4(long param_1)

{
  FUN_10064f4a0(param_1 + -0xb8);
  return;
}




void FUN_10064f4ec(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined8 **)(param_1 + 0xf0) = param_2;
  FUN_100652cac(param_1,*param_2,param_2[1]);
  uVar1 = NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0xf0) + 0x1c));
  uVar2 = NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0xf0) + 0x20));
  FUN_10064e47c(uVar1,uVar2,param_1);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_10064f538(param_1);
  return;
}




void FUN_10064f538(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar14 = FUN_100652db4();
  bVar5 = *(byte *)(param_1 + 0xd8);
  lVar15 = FUN_1006575b8(param_1 + 0xd0,uVar14);
  fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(lVar15 + 4));
  fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar15 + 6));
  fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar15 + 8));
  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar15 + 10));
  lVar15 = *(long *)(*(long *)(param_1 + 0xd0) + 8);
  fVar16 = (float)NEON_ucvtf(*(undefined4 *)(lVar15 + 0x48));
  fVar17 = (float)NEON_ucvtf(*(undefined4 *)(lVar15 + 0x4c));
  fVar11 = fVar18 + fVar19;
  if ((bVar5 & 1) != 0) {
    fVar11 = fVar19;
    fVar19 = fVar18 + fVar19;
  }
  fVar18 = fVar10;
  fVar13 = fVar12 + fVar10;
  if ((bVar5 & 2) != 0) {
    fVar18 = fVar12 + fVar10;
    fVar13 = fVar10;
  }
  fVar19 = (1.0 / fVar16) * fVar19;
  fVar18 = 1.0 - fVar18 * (1.0 / fVar17);
  lVar15 = *(long *)(param_1 + 0xf0);
  uVar2 = *(uint *)(lVar15 + 0x1c);
  uVar3 = *(uint *)(lVar15 + 0x20);
  uVar6 = *(ushort *)(*(long *)(param_1 + 0xe0) + 8);
  fVar10 = (float)uVar2 / (float)uVar6;
  uVar7 = *(ushort *)(*(long *)(param_1 + 0xe0) + 10);
  uVar4 = *(uint *)(lVar15 + 0x10);
  uVar1 = uVar4 + (int)*(float *)(param_1 + 0xf8);
  uVar8 = 0;
  if (uVar2 != 0) {
    uVar8 = uVar6 / uVar2;
  }
  uVar2 = 0;
  if (uVar8 != 0) {
    uVar2 = uVar1 / uVar8;
  }
  fVar12 = (float)uVar3 / (float)uVar7;
  uVar9 = 0;
  if (uVar3 != 0) {
    uVar9 = uVar7 / uVar3;
  }
  uVar3 = 0;
  if (uVar9 != 0) {
    uVar3 = uVar1 / uVar9;
  }
  fVar16 = fVar10 * ((1.0 / fVar16) * fVar11 - fVar19);
  fVar11 = fVar12 - fVar12 * (fVar18 + fVar13 * (1.0 / fVar17));
  *(float *)(param_1 + 0x100) = fVar10;
  *(float *)(param_1 + 0x104) = fVar12;
  fVar19 = fVar19 - fVar10 * fVar19;
  *(float *)(param_1 + 0x108) = fVar19 + (float)(uVar1 - uVar2 * uVar8) * fVar16;
  fVar18 = fVar18 - fVar12 * fVar18;
  *(float *)(param_1 + 0x10c) = fVar18 + (float)uVar3 * fVar11;
  if ((*(byte *)(param_1 + 0x120) >> 2 & 1) != 0) {
    if (uVar1 + 1 <= *(uint *)(lVar15 + 0x14)) {
      uVar4 = uVar1 + 1;
    }
    uVar1 = 0;
    if (uVar8 != 0) {
      uVar1 = uVar4 / uVar8;
    }
    uVar2 = 0;
    if (uVar9 != 0) {
      uVar2 = uVar4 / uVar9;
    }
    *(float *)(param_1 + 0x110) = fVar10;
    *(float *)(param_1 + 0x114) = fVar12;
    *(float *)(param_1 + 0x118) = fVar19 + (float)(uVar4 - uVar1 * uVar8) * fVar16;
    *(float *)(param_1 + 0x11c) = fVar18 + (float)uVar2 * fVar11;
  }
  return;
}




void FUN_10064f69c(float param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  bVar2 = *(byte *)(param_2 + 0x120);
  if ((bVar2 & 1) != 0) {
    fVar5 = (float)(int)*(float *)(param_2 + 0xf8);
    fVar3 = (*(float *)(param_2 + 0xf8) - fVar5) + param_1 / *(float *)(param_2 + 0xfc);
    fVar5 = fVar3 + fVar5;
    *(float *)(param_2 + 0xf8) = fVar5;
    if (1.0 < fVar3) {
      uVar1 = *(uint *)(*(long *)(param_2 + 0xf0) + 0x18);
      fVar4 = (float)uVar1;
      fVar3 = fVar5;
      if (fVar4 <= fVar5) {
        do {
          fVar3 = fVar3 - fVar4;
        } while (fVar4 <= fVar3);
        *(float *)(param_2 + 0xf8) = fVar3;
        if (((bVar2 >> 1 & 1) == 0) && (fVar4 <= fVar5)) {
          *(float *)(param_2 + 0xf8) = (float)(uVar1 - 1);
          *(byte *)(param_2 + 0x120) = bVar2 & 0xfe;
        }
      }
      FUN_10064f538();
      return;
    }
  }
  return;
}




void FUN_10064f71c(void)

{
  FUN_1010b3fec(0xc);
  return;
}




void FUN_10064f724(void)

{
  FUN_1010b3fec(0xc);
  return;
}




undefined8 FUN_10064f72c(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0xd0) + 8) + 0x30;
  return 1;
}




undefined8 FUN_10064f744(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x18) + 8) + 0x30;
  return 1;
}




undefined8 FUN_10064f75c(long param_1,undefined4 *param_2)

{
  float fVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 0x108);
  param_2[1] = *(undefined4 *)(param_1 + 0x10c);
  param_2[2] = *(undefined4 *)(param_1 + 0x100);
  param_2[3] = *(undefined4 *)(param_1 + 0x104);
  param_2[4] = *(undefined4 *)(param_1 + 0x118);
  param_2[5] = *(undefined4 *)(param_1 + 0x11c);
  param_2[6] = *(undefined4 *)(param_1 + 0x110);
  param_2[7] = *(undefined4 *)(param_1 + 0x114);
  fVar1 = 0.0;
  if ((*(byte *)(param_1 + 0x120) >> 2 & 1) != 0) {
    fVar1 = *(float *)(param_1 + 0xf8) - (float)(int)*(float *)(param_1 + 0xf8);
  }
  param_2[8] = fVar1;
  return 9;
}




undefined8 FUN_10064f7c0(long param_1)

{
  FUN_10064f75c(param_1 + -0xb8);
  return 9;
}




void FUN_10064f7dc(long param_1)

{
  *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) | 1;
  return;
}




void FUN_10064f7ec(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xfc) = param_1;
  return;
}




void FUN_10064f7f4(long param_1,uint param_2)

{
  byte bVar1;
  
  if ((((*(byte *)(param_1 + 0x120) & 4) == 0 ^ param_2) & 1) != 0) {
    return;
  }
  bVar1 = 4;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) & 0xfb | bVar1;
  FUN_10064f538();
  return;
}




void FUN_10064f828(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 2;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) & 0xfd | bVar1;
  return;
}




long FUN_10064f848(long param_1)

{
  undefined8 *puVar1;
  undefined4 local_28 [2];
  
  puVar1 = (undefined8 *)FUN_100650568();
  *puVar1 = &PTR_thunk_FUN_10064e2bc_1014a61e8;
  puVar1[0x17] = &PTR_FUN_1014a6348;
  local_28[0] = 0xffffff;
  FUN_100650608(puVar1,local_28);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x10;
  return param_1;
}




long thunk_FUN_10064f848(long param_1)

{
  undefined8 *puVar1;
  undefined4 auStack_28 [2];
  
  puVar1 = (undefined8 *)FUN_100650568();
  *puVar1 = &PTR_thunk_FUN_10064e2bc_1014a61e8;
  puVar1[0x17] = &PTR_FUN_1014a6348;
  auStack_28[0] = 0xffffff;
  FUN_100650608(puVar1,auStack_28);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x10;
  return param_1;
}




void FUN_10064f8a8(undefined8 param_1,undefined8 param_2)

{
  FUN_10064f8d4();
  FUN_10064f9cc(param_1,param_2);
  return;
}




void FUN_10064f8d4(long param_1,int param_2)

{
  long lVar1;
  code *local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  if (param_2 != 0) {
    local_38 = DAT_101dbd484;
    local_60 = FUN_10064fc2c;
    lVar1 = param_1 + 8;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    lStack_58 = param_1;
    FUN_10001554c(lVar1,&local_60);
    local_38 = DAT_101dbd488;
    local_60 = FUN_10064fc2c;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    lStack_58 = param_1;
    FUN_10001554c(lVar1,&local_60);
    local_38 = DAT_101dbd48c;
    local_60 = FUN_10064fc2c;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    lStack_58 = param_1;
    FUN_10001554c(lVar1,&local_60);
    return;
  }
  FUN_100644bb0(param_1,DAT_101dbd484);
  FUN_100644bb0(param_1,DAT_101dbd488);
  FUN_100644bb0(param_1,DAT_101dbd48c);
  return;
}




void FUN_10064f9cc(long param_1,int param_2)

{
  long lVar1;
  code *local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  if (param_2 != 0) {
    local_38 = DAT_101dbd458;
    local_60 = FUN_10064fc2c;
    lVar1 = param_1 + 8;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    lStack_58 = param_1;
    FUN_10001554c(lVar1,&local_60);
    local_38 = DAT_101dbd45c;
    local_60 = FUN_10064fc2c;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    lStack_58 = param_1;
    FUN_10001554c(lVar1,&local_60);
    local_38 = DAT_101dbd460;
    local_60 = FUN_10064fc2c;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    lStack_58 = param_1;
    FUN_10001554c(lVar1,&local_60);
    local_38 = DAT_101dbd470;
    local_60 = FUN_10064fc2c;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    lStack_58 = param_1;
    FUN_10001554c(lVar1,&local_60);
    local_38 = DAT_101dbd474;
    local_60 = FUN_10064fc2c;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    lStack_58 = param_1;
    FUN_10001554c(lVar1,&local_60);
    local_38 = DAT_101dbd478;
    local_60 = FUN_10064fc2c;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    lStack_58 = param_1;
    FUN_10001554c(lVar1,&local_60);
    local_38 = DAT_101dbd464;
    local_60 = FUN_10064fc2c;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    lStack_58 = param_1;
    FUN_10001554c(lVar1,&local_60);
    local_38 = DAT_101dbd468;
    local_60 = FUN_10064fc2c;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    lStack_58 = param_1;
    FUN_10001554c(lVar1,&local_60);
    local_38 = DAT_101dbd46c;
    local_60 = FUN_10064fc2c;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    lStack_58 = param_1;
    FUN_10001554c(lVar1,&local_60);
    return;
  }
  FUN_100644bb0(param_1,DAT_101dbd458);
  FUN_100644bb0(param_1,DAT_101dbd45c);
  FUN_100644bb0(param_1,DAT_101dbd460);
  FUN_100644bb0(param_1,DAT_101dbd470);
  FUN_100644bb0(param_1,DAT_101dbd474);
  FUN_100644bb0(param_1,DAT_101dbd478);
  FUN_100644bb0(param_1,DAT_101dbd464);
  FUN_100644bb0(param_1,DAT_101dbd468);
  FUN_100644bb0(param_1,DAT_101dbd46c);
  return;
}




void FUN_10064fc2c(void)

{
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void FUN_10064fc34(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




void FUN_10064fc48(long param_1)

{
  FUN_10064e2bc(param_1 + -0xb8);
  return;
}




void FUN_10064fc50(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc(param_1 + -0xb8);
  operator_delete(pvVar1);
  return;
}




void FUN_10064fc68(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}




void FUN_10064fc74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = param_3;
  return;
}




void FUN_10064fc80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = DAT_101dc1cb8;
  uVar1 = DAT_101dc1cb8;
  param_1[1] = DAT_101dc1cb8;
  param_1[2] = uVar1;
  param_1[3] = 0xffffffffffffffff;
  return;
}




bool FUN_10064fca4(float *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*param_1 == *param_2) && (bVar1 = false, !NAN(param_1[1]) && !NAN(param_2[1]))) {
    bVar1 = param_1[1] == param_2[1];
  }
  if (bVar1) {
    bVar1 = false;
    if ((param_1[2] == param_2[2]) && (bVar1 = false, !NAN(param_1[3]) && !NAN(param_2[3]))) {
      bVar1 = param_1[3] == param_2[3];
    }
    if (bVar1) {
      bVar1 = false;
      if ((param_1[4] == param_2[4]) && (bVar1 = false, !NAN(param_1[5]) && !NAN(param_2[5]))) {
        bVar1 = param_1[5] == param_2[5];
      }
      if ((bVar1) && (param_1[6] == param_2[6])) {
        return param_1[7] == param_2[7];
      }
    }
  }
  return false;
}




void FUN_10064fd0c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_10064e2bc_1014a6390;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  return;
}




void FUN_10064fd30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_10064e2bc_1014a6390;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  return;
}




void FUN_10064fd54(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_10064e2bc_1014a6390;
  puVar1[0x17] = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  *(undefined4 *)((long)puVar1 + 0xc4) = param_2;
  return;
}




void FUN_10064ff6c(float param_1,ulong param_2,long *param_3,int param_4)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  long local_68;
  undefined4 local_60;
  float fStack_5c;
  undefined8 local_58;
  
  uVar2 = (ulong)(*(int *)((long)param_3 + 0xc4) == 0);
  plVar3 = (long *)param_3[5];
  if (plVar3 != (long *)0x0) {
    pfVar4 = (float *)((ulong)&local_60 | uVar2 << 2);
    pfVar5 = (float *)((ulong)&local_58 | uVar2 << 2);
    do {
      fVar6 = (float)param_2;
      local_58 = plVar3[8];
      local_60 = (**(code **)(*plVar3 + 0x50))(plVar3);
      local_68 = plVar3[10];
      fVar7 = *(float *)((ulong)&local_68 | uVar2 << 2) - param_1;
      fVar8 = fVar7 * *pfVar4;
      *pfVar5 = fVar8;
      fStack_5c = fVar6;
      if (param_4 != 0) {
        local_60 = (**(code **)(*param_3 + 0x48))(param_3);
        fStack_5c = fVar7;
        *pfVar5 = fVar8 + param_1 * *pfVar4;
      }
      fVar7 = *(float *)((long)plVar3 + 0x44);
      param_2 = (ulong)(uint)fVar7;
      bVar1 = false;
      if ((*(float *)(plVar3 + 8) == (float)local_58) &&
         (bVar1 = false, !NAN(fVar7) && !NAN(local_58._4_4_))) {
        bVar1 = fVar7 == local_58._4_4_;
      }
      if (!bVar1) {
        plVar3[8] = local_58;
        FUN_1000200a0(plVar3);
      }
      plVar3 = (long *)plVar3[6];
    } while (plVar3 != (long *)0x0);
  }
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void thunk_FUN_10064e47c(void)

{
  FUN_10064e47c();
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void thunk_FUN_10064e2bc(void)

{
  FUN_10064e2bc();
  return;
}




void thunk_FUN_10064221c(void)

{
  FUN_10064221c();
  return;
}

