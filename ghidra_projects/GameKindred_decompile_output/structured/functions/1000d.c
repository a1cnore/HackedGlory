// functions/1000d — 314 functions
#include "GameKindred.h"




void FUN_1000d0280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000d0954(param_1,param_4);
  return;
}




void FUN_1000d0288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000d0a4c(param_1,param_4);
  return;
}




void FUN_1000d0290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000d0d78(param_1,param_4);
  return;
}




void thunk_FUN_1000d0f10(long param_1)

{
  undefined1 auStack_40 [32];
  
  if (*(char *)(param_1 + 0x509) != '\0') {
    FUN_1000d0eb8(param_1);
  }
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined2 *)(param_1 + 0x509) = 0;
  FUN_1000d0380(param_1);
  FUN_100644aec(auStack_40,DAT_101d23030,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1000d02a0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000d02a0_101455f08;
  param_1[0x7c] = &PTR_FUN_1014a7108;
  param_1[0x93] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x96);
  FUN_10064e2bc(param_1 + 0x7c);
  param_1[0x5e] = &PTR_FUN_1014a7108;
  param_1[0x75] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x78);
  FUN_10064e2bc(param_1 + 0x5e);
  param_1[0x40] = &PTR_FUN_1014a7108;
  param_1[0x57] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5a);
  FUN_10064e2bc(param_1 + 0x40);
  FUN_10064230c(param_1 + 0x2f);
  thunk_FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000d02a0(void)

{
  FUN_1000d02a0();
  return;
}




void FUN_1000d034c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000d02a0();
  operator_delete(pvVar1);
  return;
}




long FUN_1000d0360(long param_1)

{
  return param_1 + 0xc0;
}




long FUN_1000d0368(long param_1)

{
  return param_1 + 0x178;
}




long FUN_1000d0370(long param_1)

{
  return param_1 + 0x200;
}




long FUN_1000d0378(long param_1)

{
  return param_1 + 0x2f0;
}




void FUN_1000d0380(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  float fVar9;
  float fVar10;
  
  if (*(char *)(param_1 + 0x50d) == '\0') {
    if (*(char *)(param_1 + 0x50a) == '\0') {
      if (*(char *)(param_1 + 0x510) == '\0') {
        uVar4 = *(uint *)(param_1 + 0x374) & 0xfffffffb;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x374) | 4;
      }
      *(uint *)(param_1 + 0x374) = uVar4;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x374) | 4;
      *(uint *)(param_1 + 0x374) = uVar4;
      if (*(char *)(param_1 + 0x50a) != '\0') goto LAB_1000d03ac;
    }
    uVar6 = *(uint *)(param_1 + 0x464);
    if (*(char *)(param_1 + 0x510) == '\0') {
      uVar5 = 0;
      goto LAB_1000d03b8;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x374) | 4;
    *(uint *)(param_1 + 0x374) = uVar4;
LAB_1000d03ac:
    uVar6 = *(uint *)(param_1 + 0x464);
  }
  uVar5 = 4;
LAB_1000d03b8:
  puVar8 = (uint *)(param_1 + 0x464);
  lVar7 = param_1 + 0x3e0;
  lVar1 = param_1 + 0x2f0;
  *puVar8 = uVar5 | uVar6 & 0xfffffffb;
  cVar2 = *(char *)(param_1 + 0x50a);
  uVar6 = 0xd8;
  if ((cVar2 == '\0') && (uVar6 = 0x4c, *(char *)(param_1 + 0x510) != '\0')) {
    uVar6 = 0xd8;
  }
  if (uVar6 != (uVar4 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x374) = uVar4 & 0xffff8000 | uVar4 & 0x7f | uVar6 << 7;
    FUN_1000200a0(lVar1);
    cVar2 = *(char *)(param_1 + 0x50a);
  }
  uVar4 = 0xd8;
  if ((cVar2 == '\0') && (uVar4 = 0x4c, *(char *)(param_1 + 0x510) != '\0')) {
    uVar4 = 0xd8;
  }
  uVar6 = *puVar8;
  if (uVar4 != (uVar6 >> 7 & 0xff)) {
    *puVar8 = uVar6 & 0xffff8000 | uVar6 & 0x7f | uVar4 << 7;
    FUN_1000200a0(lVar7);
  }
  fVar10 = *(float *)(param_1 + 0x1b8);
  fVar9 = *(float *)(param_1 + 0x1bc);
  bVar3 = false;
  if ((*(float *)(param_1 + 0x330) == fVar10) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x334)) && !NAN(fVar9))) {
    bVar3 = *(float *)(param_1 + 0x334) == fVar9;
  }
  if (!bVar3) {
    *(float *)(param_1 + 0x330) = fVar10;
    *(float *)(param_1 + 0x334) = fVar9;
    FUN_1000200a0(lVar1);
    fVar10 = *(float *)(param_1 + 0x1b8);
    fVar9 = *(float *)(param_1 + 0x1bc);
  }
  bVar3 = false;
  if ((*(float *)(param_1 + 0x420) == fVar10) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x424)) && !NAN(fVar9))) {
    bVar3 = *(float *)(param_1 + 0x424) == fVar9;
  }
  if (!bVar3) {
    *(float *)(param_1 + 0x420) = fVar10;
    *(float *)(param_1 + 0x424) = fVar9;
    FUN_1000200a0(lVar7);
  }
  if (*(char *)(param_1 + 0x50f) != '\0') {
    *(uint *)(param_1 + 0x284) =
         *(uint *)(param_1 + 0x284) & 0xfffffffb | (uint)*(byte *)(param_1 + 0x509) << 2;
  }
  FUN_10064e47c(0x44162666,0x44162666,lVar1);
  FUN_10064e47c(0x432f0000,0x432f0000,lVar7);
  return;
}




undefined8 FUN_1000d0538(void)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    uVar2 = 0;
  }
  else {
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    uVar2 = FUN_100640620();
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  return uVar2;
}




float FUN_1000d05c0(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  param_1 = param_1 / (param_4 * 0.5);
  fVar1 = -(((param_1 + -3.0) - (param_1 + -3.0) * param_1) * param_3 * -0.5) - param_3 * -0.5;
  if (param_1 < 1.0) {
    fVar1 = param_1 * param_1 * param_3 * 0.5;
  }
  return fVar1 + param_2;
}




void FUN_1000d0604(long param_1)

{
  long local_30;
  code *pcStack_28;
  
  pcStack_28 = thunk_FUN_1000d0f7c;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  FUN_100652dd4(param_1 + 0x3e0,&DAT_10115a168,2);
  FUN_100652dd4(param_1 + 0x2f0,&DAT_10115a168,2);
  *(undefined1 *)(param_1 + 0x510) = 0;
  FUN_1000d0380(param_1);
  return;
}




void FUN_1000d0670(undefined1 param_1 [16],float param_2,long param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_2;
  fVar2 = (float)___sincosf_stret();
  fVar2 = *(float *)(param_3 + 0x330) + *(float *)(param_3 + 0x4f8) * param_2 * 0.75 * fVar2;
  fVar3 = *(float *)(param_3 + 0x334) + *(float *)(param_3 + 0x4f8) * param_2 * 0.75 * fVar3;
  bVar1 = false;
  if ((*(float *)(param_3 + 0x420) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)(param_3 + 0x424)) && !NAN(fVar3))) {
    bVar1 = *(float *)(param_3 + 0x424) == fVar3;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x420) = fVar2;
    *(float *)(param_3 + 0x424) = fVar3;
    FUN_1000200a0(param_3 + 0x3e0);
    return;
  }
  return;
}




void FUN_1000d06f0(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  FUN_100641584(param_4,param_3 + 0xc0);
  *(undefined8 *)(param_3 + 0x4d0) = param_4;
  *(undefined1 *)(param_3 + 0x509) = 1;
  uVar3 = FUN_10064efd0(param_5,param_3);
  *(undefined4 *)(param_3 + 0x4e0) = uVar3;
  *(undefined4 *)(param_3 + 0x4e4) = param_2;
  FUN_1000d0380(param_3);
  if (*(char *)(param_3 + 0x50c) != '\0') {
    uVar2 = *(undefined8 *)(param_3 + 0x4e0);
    *(undefined8 *)(param_3 + 0x4e8) = uVar2;
    fVar4 = (float)uVar2;
    fVar5 = (float)((ulong)uVar2 >> 0x20);
    bVar1 = false;
    if ((*(float *)(param_3 + 0x330) == fVar4) &&
       (bVar1 = false, !NAN(*(float *)(param_3 + 0x334)) && !NAN(fVar5))) {
      bVar1 = *(float *)(param_3 + 0x334) == fVar5;
    }
    if (!bVar1) {
      *(undefined8 *)(param_3 + 0x330) = uVar2;
      FUN_1000200a0(param_3 + 0x2f0);
      fVar4 = *(float *)(param_3 + 0x4e8);
      fVar5 = *(float *)(param_3 + 0x4ec);
    }
    bVar1 = false;
    if ((*(float *)(param_3 + 0x420) == fVar4) &&
       (bVar1 = false, !NAN(*(float *)(param_3 + 0x424)) && !NAN(fVar5))) {
      bVar1 = *(float *)(param_3 + 0x424) == fVar5;
    }
    if (!bVar1) {
      *(undefined8 *)(param_3 + 0x420) = *(undefined8 *)(param_3 + 0x4e8);
      FUN_1000200a0(param_3 + 0x3e0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001000d07c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_3 + 0xb8))();
  return;
}




void FUN_1000d07c4(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x50a);
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined1 *)(param_1 + 0x509) = 0;
  *(undefined1 *)(param_1 + 0x50a) = 0;
  FUN_1006415a8(param_1 + 0xc0);
  if (*(char *)(param_1 + 0x509) != '\0') {
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))(*(long **)(param_1 + 0xb8),cVar1 != '\0');
  }
  FUN_1000d0380(param_1);
  return;
}




void FUN_1000d081c(long param_1,int param_2)

{
  uint uVar1;
  
  *(char *)(param_1 + 0x508) = (char)param_2;
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb | uVar1;
  uVar1 = 0x10;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  FUN_1000d0380();
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xffffffef | uVar1;
  return;
}




void FUN_1000d0874(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x50d) = param_2;
  FUN_1000d0380();
  return;
}




void FUN_1000d087c(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x50b) = param_2;
  return;
}




void FUN_1000d0884(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x50c) = param_2;
  return;
}




void FUN_1000d088c(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x50e) = param_2;
  return;
}




void FUN_1000d0894(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x50f) = param_2;
  return;
}




void FUN_1000d089c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x4f8) = param_1;
  FUN_1000d0380();
  return;
}




void FUN_1000d08a4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x4fc) = param_1;
  return;
}




void FUN_1000d08ac(long param_1)

{
  *(undefined4 *)(param_1 + 0x4fc) = 0x42480000;
  return;
}




void FUN_1000d08b8(long param_1)

{
  if ((*(char *)(param_1 + 0x508) != '\0') && (*(char *)(param_1 + 0x509) != '\0')) {
    FUN_1000d08d0();
    return;
  }
  return;
}




void FUN_1000d08d0(long param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_1000d0604();
  *(undefined1 *)(param_1 + 0x50a) = 1;
  if (*(char *)(param_1 + 0x50c) == '\0') {
    *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(param_1 + 0x1b8);
  }
  else {
    *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(param_1 + 0x4e0);
  }
  FUN_100641584(*(undefined8 *)(param_1 + 0x4d0),param_1 + 0xc0);
  FUN_1000d0380(param_1);
  FUN_100644aec(auStack_40,DAT_101d23028,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1000d0954(undefined1 param_1 [16],undefined4 param_2,long param_3,long *param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined1 auStack_50 [32];
  
  if (*(char *)(param_3 + 0x508) != '\0') {
    uVar1 = (**(code **)(*param_4 + 0x10))(param_4,DAT_101dbd4d8);
    if ((((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) &&
       (*(long *)(param_3 + 0x4d0) == 0)) {
      *(long *)(param_3 + 0x4d0) = param_4[4];
      *(ulong *)(param_3 + 0x4e0) =
           CONCAT44((int)(float)((ulong)param_4[5] >> 0x20),(int)(float)param_4[5]);
      uVar2 = FUN_10064efd0(param_3 + 0x4e0,param_3);
      *(undefined4 *)(param_3 + 0x4e0) = uVar2;
      *(undefined4 *)(param_3 + 0x4e4) = param_2;
      *(undefined1 *)(param_3 + 0x509) = 1;
      FUN_1000d0380(param_3);
      (**(code **)**(undefined8 **)(param_3 + 0xb8))();
      FUN_100644aec(auStack_50,DAT_101d23020,0);
      FUN_100644c34(param_3,auStack_50,1);
    }
    if (*(char *)(param_3 + 0x50e) != '\0') {
      FUN_100644b14(param_4);
    }
  }
  return;
}




void FUN_1000d0a4c(undefined1 param_1 [16],float param_2,long param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  undefined1 auStack_50 [32];
  
  if ((*(char *)(param_3 + 0x508) != '\0') &&
     (((uVar2 = (**(code **)(*param_4 + 0x10))(param_4,DAT_101dbd4d8), (uVar2 & 1) != 0 ||
       (DAT_101dbd4d8 == DAT_101dbd450)) && (param_4[4] == *(long *)(param_3 + 0x4d0))))) {
    *(ulong *)(param_3 + 0x4d8) =
         CONCAT44((int)(float)((ulong)param_4[5] >> 0x20),(int)(float)param_4[5]);
    fVar5 = (float)FUN_10064efd0(param_3 + 0x4d8,param_3);
    *(float *)(param_3 + 0x4d8) = fVar5;
    *(float *)(param_3 + 0x4dc) = param_2;
    if ((*(char *)(param_3 + 0x50a) != '\0') ||
       ((fVar5 = fVar5 - *(float *)(param_3 + 0x4e0),
        param_2 = param_2 - *(float *)(param_3 + 0x4e4),
        *(float *)(param_3 + 0x4fc) < SQRT(fVar5 * fVar5 + param_2 * param_2) &&
        (FUN_1000d08d0(param_3), *(char *)(param_3 + 0x50a) != '\0')))) {
      FUN_1000d0bdc(param_3);
    }
    else {
      (**(code **)(**(long **)(param_3 + 0xb8) + 8))
                (0,*(long **)(param_3 + 0xb8),0,&DAT_101dc1cb8,&DAT_101dc1cb8);
      FUN_100644aec(auStack_50,DAT_101d23024,0);
      FUN_100644c34(param_3,auStack_50,1);
    }
    if (*(char *)(param_3 + 0x50f) != '\0') {
      lVar3 = FUN_100642ed4((int)*(float *)(param_4 + 5),(int)*(float *)((long)param_4 + 0x2c),
                            param_3 + 0x200,1);
      uVar1 = *(uint *)(param_3 + 0x284);
      uVar4 = 0x99;
      if (lVar3 != 0) {
        uVar4 = 0xff;
      }
      if (uVar4 != (uVar1 >> 7 & 0xff)) {
        *(uint *)(param_3 + 0x284) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar4 << 7;
        FUN_1000200a0(param_3 + 0x200);
      }
    }
  }
  return;
}




void FUN_1000d0bdc(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_48;
  float fStack_44;
  
  uVar1 = *(undefined8 *)(param_1 + 0x4d8);
  *(undefined8 *)(param_1 + 0x4f0) = uVar1;
  fVar4 = *(float *)(param_1 + 0x4e8);
  fVar5 = (float)uVar1 - fVar4;
  fVar3 = (float)((ulong)uVar1 >> 0x20);
  fVar2 = *(float *)(param_1 + 0x4ec);
  fVar8 = fVar3 - fVar2;
  fVar7 = SQRT(fVar5 * fVar5 + fVar8 * fVar8);
  fVar5 = fVar5 / fVar7;
  fVar8 = fVar8 / fVar7;
  fVar6 = *(float *)(param_1 + 0x4f8);
  if ((*(char *)(param_1 + 0x50b) == '\0') || (fVar7 - fVar6 <= 1.0)) {
    if (*(char *)(param_1 + 0x50b) == '\0') goto LAB_1000d0cc8;
  }
  else {
    *(float *)(param_1 + 0x4e8) = (float)uVar1 - fVar6 * fVar5;
    *(float *)(param_1 + 0x4ec) = fVar3 - fVar6 * fVar8;
  }
  FUN_100641464(&fStack_44,&local_48);
  fVar6 = *(float *)(param_1 + 0x4f8);
  fVar2 = fVar6 + 100.0;
  fVar3 = (float)NEON_fminnm(*(undefined4 *)(param_1 + 0x4e8),fStack_44 - fVar2);
  fVar4 = fVar2;
  if (fVar2 <= fVar3) {
    fVar4 = fVar3;
  }
  NEON_fminnm(*(undefined4 *)(param_1 + 0x4ec),local_48 - fVar2);
  *(float *)(param_1 + 0x4e8) = fVar4;
  *(float *)(param_1 + 0x4ec) = fVar2;
  fVar3 = *(float *)(param_1 + 0x4f4);
  fVar7 = *(float *)(param_1 + 0x4f0) - fVar4;
  fVar7 = SQRT(fVar7 * fVar7 + (fVar3 - fVar2) * (fVar3 - fVar2));
LAB_1000d0cc8:
  if (fVar6 < fVar7) {
    fVar3 = fVar2 + fVar8 * fVar6;
    *(float *)(param_1 + 0x4f0) = fVar4 + fVar5 * fVar6;
    *(float *)(param_1 + 0x4f4) = fVar3;
  }
  if ((*(float *)(param_1 + 0x330) != fVar4) || (*(float *)(param_1 + 0x334) != fVar2)) {
    *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x4e8);
    FUN_1000200a0(param_1 + 0x2f0);
    fVar3 = *(float *)(param_1 + 0x4f4);
  }
  if ((*(float *)(param_1 + 0x420) != *(float *)(param_1 + 0x4f0)) ||
     (*(float *)(param_1 + 0x424) != fVar3)) {
    *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(param_1 + 0x4f0);
    FUN_1000200a0(param_1 + 0x3e0);
  }
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))
            (*(undefined4 *)(param_1 + 0x4f8),*(long **)(param_1 + 0xb8),1,param_1 + 0x4e8,
             param_1 + 0x4f0);
  return;
}




void FUN_1000d0d78(long param_1,long *param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_50 [32];
  
  if ((*(char *)(param_1 + 0x508) != '\0') &&
     ((uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8), (uVar2 & 1) != 0 ||
      (DAT_101dbd4d8 == DAT_101dbd450)))) {
    if (param_2[4] == *(long *)(param_1 + 0x4d0)) {
      cVar1 = *(char *)(param_1 + 0x50a);
      *(undefined8 *)(param_1 + 0x4d0) = 0;
      *(undefined1 *)(param_1 + 0x509) = 0;
      *(undefined1 *)(param_1 + 0x50a) = 0;
      if ((*(char *)(param_1 + 0x50f) == '\0') ||
         (lVar3 = FUN_100642ed4((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),
                                param_1 + 0x200,1), lVar3 == 0)) {
        (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))(*(long **)(param_1 + 0xb8),cVar1 != '\0');
        FUN_100644aec(auStack_50,DAT_101d2302c,0);
        FUN_100644c34(param_1,auStack_50,1);
      }
      else {
        FUN_1000d0eb8(param_1);
      }
      FUN_1006415a8(param_1 + 0xc0);
      if ((*(char *)(param_1 + 0x50e) != '\0') && (cVar1 == '\0')) {
        FUN_100644b14(param_2);
      }
      FUN_1000d0380(param_1);
    }
    else if (*(char *)(param_1 + 0x50e) != '\0') {
      FUN_100644b14(param_2);
      return;
    }
  }
  return;
}




void FUN_1000d0eb8(long param_1)

{
  undefined1 auStack_40 [32];
  
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  FUN_100644aec(auStack_40,DAT_101d23030,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1000d0f10(long param_1)

{
  undefined1 auStack_40 [32];
  
  if (*(char *)(param_1 + 0x509) != '\0') {
    FUN_1000d0eb8(param_1);
  }
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined2 *)(param_1 + 0x509) = 0;
  FUN_1000d0380(param_1);
  FUN_100644aec(auStack_40,DAT_101d23030,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1000d0f7c(long param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = 6.2831855;
  fVar2 = (float)___sincosf_stret(2.3561945 - *(float *)(param_1 + 0x500));
  fVar4 = *(float *)(param_1 + 0x504) * 0.75;
  fVar2 = *(float *)(param_1 + 0x330) + *(float *)(param_1 + 0x4f8) * fVar4 * fVar2;
  fVar3 = *(float *)(param_1 + 0x334) + *(float *)(param_1 + 0x4f8) * fVar4 * fVar3;
  bVar1 = false;
  if ((*(float *)(param_1 + 0x420) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x424)) && !NAN(fVar3))) {
    bVar1 = *(float *)(param_1 + 0x424) == fVar3;
  }
  if (!bVar1) {
    *(float *)(param_1 + 0x420) = fVar2;
    *(float *)(param_1 + 0x424) = fVar3;
    FUN_1000200a0(param_1 + 0x3e0);
    return;
  }
  return;
}




void thunk_FUN_1000d0f7c(long param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = 6.2831855;
  fVar2 = (float)___sincosf_stret(2.3561945 - *(float *)(param_1 + 0x500));
  fVar4 = *(float *)(param_1 + 0x504) * 0.75;
  fVar2 = *(float *)(param_1 + 0x330) + *(float *)(param_1 + 0x4f8) * fVar4 * fVar2;
  fVar3 = *(float *)(param_1 + 0x334) + *(float *)(param_1 + 0x4f8) * fVar4 * fVar3;
  bVar1 = false;
  if ((*(float *)(param_1 + 0x420) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x424)) && !NAN(fVar3))) {
    bVar1 = *(float *)(param_1 + 0x424) == fVar3;
  }
  if (!bVar1) {
    *(float *)(param_1 + 0x420) = fVar2;
    *(float *)(param_1 + 0x424) = fVar3;
    FUN_1000200a0(param_1 + 0x3e0);
    return;
  }
  return;
}




void FUN_1000d100c(void)

{
  DAT_101dc63f4 = 0xff;
  DAT_101dc63f6 = 0xffff;
  DAT_101dc63f8 = 0xffff;
  DAT_101d23020 = FUN_100644a94("UI::EVENT_VIRTURAL_JOYSTICK_TRIGGERED");
  DAT_101d23024 = FUN_100644a94("UI::EVENT_VIRTURAL_JOYSTICK_HELD");
  DAT_101d23028 = FUN_100644a94("UI::EVENT_VIRTUAL_JOYSTICK_BEGIN_DRAGGING");
  DAT_101d2302c = FUN_100644a94("UI::EVENT_VIRTURAL_JOYSTICK_RELEASED");
  DAT_101d23030 = FUN_100644a94("UI::EVENT_VIRTUAL_JOYSTICK_CANCELLED");
  return;
}




long * FUN_1000d10a0(long *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long local_78;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  puVar3[0x17] = 0;
  *puVar3 = &PTR_thunk_FUN_1000d12ac_101456050;
  lVar6 = 0xc0;
  do {
    FUN_10065346c((long)param_1 + lVar6);
    lVar6 = lVar6 + 0x120;
  } while (lVar6 != 0x540);
  thunk_FUN_100652c08(param_1 + 0xaa);
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[0xcb] = 0x2ffffffff;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  param_1[0xa9] = 0x200000005;
  param_1[0xa8] = 0x300000004;
  plVar7 = param_1 + 0x18;
  lVar6 = 0x540;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
    FUN_100652cac(plVar7,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
    FUN_100652dd4(plVar7,&DAT_10115a164,2);
    uVar2 = *(uint *)((long)plVar7 + 0x84);
    if ((uVar2 & 0x7f80) != 0x7900) {
      *(uint *)((long)plVar7 + 0x84) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x7900;
      FUN_1000200a0(plVar7);
    }
    pvVar4 = operator_new(0x830);
    local_78 = thunk_FUN_100183e58(pvVar4,1);
    FUN_100087dbc(param_1 + 200,&local_78);
    (**(code **)(*param_1 + 0x78))(param_1,local_78,1);
    lVar1 = local_78 + 0x4d0;
    uVar5 = FUN_10011bc4c(*(undefined4 *)((long)param_1 + lVar6),0);
    FUN_100652cdc(lVar1,uVar5);
    FUN_100183c50(0x3ee66666,local_78,&DAT_10115a164);
    FUN_1001b495c(0,local_78);
    FUN_100183ca8(local_78,1);
    *(uint *)(local_78 + 0x464) = *(uint *)(local_78 + 0x464) & 0xfffffffb;
    plVar7 = plVar7 + 0x24;
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0x550);
  FUN_10064e47c(0x447a0000,0x447a0000,param_1);
  (**(code **)(*param_1 + 0x90))(param_1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  return param_1;
}




long * thunk_FUN_1000d10a0(long *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lStack_78;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  puVar3[0x17] = 0;
  *puVar3 = &PTR_thunk_FUN_1000d12ac_101456050;
  lVar6 = 0xc0;
  do {
    FUN_10065346c((long)param_1 + lVar6);
    lVar6 = lVar6 + 0x120;
  } while (lVar6 != 0x540);
  thunk_FUN_100652c08(param_1 + 0xaa);
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[0xcb] = 0x2ffffffff;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  param_1[0xa9] = 0x200000005;
  param_1[0xa8] = 0x300000004;
  plVar7 = param_1 + 0x18;
  lVar6 = 0x540;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
    FUN_100652cac(plVar7,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
    FUN_100652dd4(plVar7,&DAT_10115a164,2);
    uVar2 = *(uint *)((long)plVar7 + 0x84);
    if ((uVar2 & 0x7f80) != 0x7900) {
      *(uint *)((long)plVar7 + 0x84) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x7900;
      FUN_1000200a0(plVar7);
    }
    pvVar4 = operator_new(0x830);
    lStack_78 = thunk_FUN_100183e58(pvVar4,1);
    FUN_100087dbc(param_1 + 200,&lStack_78);
    (**(code **)(*param_1 + 0x78))(param_1,lStack_78,1);
    lVar1 = lStack_78 + 0x4d0;
    uVar5 = FUN_10011bc4c(*(undefined4 *)((long)param_1 + lVar6),0);
    FUN_100652cdc(lVar1,uVar5);
    FUN_100183c50(0x3ee66666,lStack_78,&DAT_10115a164);
    FUN_1001b495c(0,lStack_78);
    FUN_100183ca8(lStack_78,1);
    *(uint *)(lStack_78 + 0x464) = *(uint *)(lStack_78 + 0x464) & 0xfffffffb;
    plVar7 = plVar7 + 0x24;
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0x550);
  FUN_10064e47c(0x447a0000,0x447a0000,param_1);
  (**(code **)(*param_1 + 0x90))(param_1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  return param_1;
}




void FUN_1000d12ac(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_thunk_FUN_1000d12ac_101456050;
  plVar1 = (long *)param_1[0xc9];
  uVar3 = *(uint *)(param_1 + 200);
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
  param_1[0xaa] = &PTR_FUN_1014a7108;
  param_1[0xc1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc4);
  FUN_10064e2bc(param_1 + 0xaa);
  lVar5 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar5 + 0x420) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar5 + 0x4d8) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar5 + 0x4f0);
    FUN_10064e2bc((long)param_1 + lVar5 + 0x420);
    lVar5 = lVar5 + -0x120;
  } while (lVar5 != -0x480);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000d12ac(void)

{
  FUN_1000d12ac();
  return;
}




void FUN_1000d1398(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000d12ac();
  operator_delete(pvVar1);
  return;
}




void FUN_1000d13ac(long *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *local_30;
  code *pcStack_28;
  
  FUN_10109c550(param_1 + 0xca,(long)param_1 + 0x654,0,0);
  *(undefined4 *)((long)param_1 + 0x65c) = param_2;
  uVar1 = FUN_100641574("root-layer");
  lVar2 = FUN_10003d5bc(param_1[4]);
  FUN_10064e5ec(*(float *)(param_1 + 0xca) / *(float *)(lVar2 + 0x10),
                *(float *)((long)param_1 + 0x654) / *(float *)(lVar2 + 0x14),param_1,8,uVar1,0);
  (**(code **)(*param_1 + 0x90))(param_1);
  pcStack_28 = thunk_FUN_1000d178c;
  local_30 = param_1;
  FUN_100643618(0xbf800000,&local_30,0,1);
  return;
}




void FUN_1000d145c(long param_1)

{
  long lVar1;
  long local_40;
  code *pcStack_38;
  
  pcStack_38 = thunk_FUN_1000d178c;
  local_40 = param_1;
  FUN_100643a8c(&local_40);
  if (*(char *)(param_1 + 0x660) == '\0') {
    (**(code **)**(undefined8 **)(param_1 + 0xb8))
              (*(undefined8 **)(param_1 + 0xb8),param_1 + 0x650,*(undefined4 *)(param_1 + 0x65c));
  }
  else {
    if (*(int *)(param_1 + 0x658) != -1) {
      (**(code **)**(undefined8 **)(param_1 + 0xb8))
                (*(undefined8 **)(param_1 + 0xb8),param_1 + 0x650,
                 *(undefined4 *)(param_1 + (long)*(int *)(param_1 + 0x658) * 4 + 0x540));
    }
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
    *(undefined1 *)(param_1 + 0x660) = 0;
  }
  lVar1 = 0xc0;
  do {
    local_40 = CONCAT44(local_40._4_4_,0xff000000);
    FUN_100652dd4(param_1 + lVar1,&local_40,2);
    lVar1 = lVar1 + 0x120;
  } while (lVar1 != 0x540);
  *(undefined4 *)(param_1 + 0x658) = 0xffffffff;
  return;
}




void FUN_1000d1530(undefined1 param_1 [16],float param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 local_60;
  undefined1 *local_58;
  
  fVar6 = (float)(**(code **)(*param_3 + 0x48))();
  uVar9 = NEON_fmov(0x3e800000,4);
  fVar8 = fVar6 * (float)uVar9;
  local_60 = CONCAT44(param_2 * (float)((ulong)uVar9 >> 0x20) * 1.4142135,fVar8 * 1.4142135);
  lVar3 = 0xc0;
  do {
    plVar2 = (long *)((long)param_3 + lVar3);
    FUN_1006534d0(0x3f490fdb,plVar2);
    FUN_100653508(0x3f000000,0x3f000000,plVar2);
    FUN_10064e48c(plVar2,&local_60);
    local_58 = &DAT_3f0000003f000000;
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_58);
    lVar3 = lVar3 + 0x120;
  } while (lVar3 != 0x540);
  fVar8 = fVar8 + 4.0;
  fVar6 = fVar6 * 0.5;
  param_2 = param_2 * 0.5;
  fVar7 = param_2 - fVar8;
  bVar1 = false;
  if ((*(float *)(param_3 + 0x20) == fVar6) &&
     (bVar1 = false, !NAN(*(float *)((long)param_3 + 0x104)) && !NAN(fVar7))) {
    bVar1 = *(float *)((long)param_3 + 0x104) == fVar7;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x20) = fVar6;
    *(float *)((long)param_3 + 0x104) = fVar7;
    FUN_1000200a0(param_3 + 0x18);
  }
  bVar1 = false;
  if ((*(float *)(param_3 + 0x44) == fVar8 + fVar6) &&
     (bVar1 = false, !NAN(*(float *)((long)param_3 + 0x224)) && !NAN(param_2))) {
    bVar1 = *(float *)((long)param_3 + 0x224) == param_2;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x44) = fVar8 + fVar6;
    *(float *)((long)param_3 + 0x224) = param_2;
    FUN_1000200a0(param_3 + 0x3c);
  }
  fVar7 = fVar8 + param_2;
  bVar1 = false;
  if ((*(float *)(param_3 + 0x68) == fVar6) &&
     (bVar1 = false, !NAN(*(float *)((long)param_3 + 0x344)) && !NAN(fVar7))) {
    bVar1 = *(float *)((long)param_3 + 0x344) == fVar7;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x68) = fVar6;
    *(float *)((long)param_3 + 0x344) = fVar7;
    FUN_1000200a0(param_3 + 0x60);
  }
  bVar1 = false;
  if ((*(float *)(param_3 + 0x8c) == fVar6 - fVar8) &&
     (bVar1 = false, !NAN(*(float *)((long)param_3 + 0x464)) && !NAN(param_2))) {
    bVar1 = *(float *)((long)param_3 + 0x464) == param_2;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x8c) = fVar6 - fVar8;
    *(float *)((long)param_3 + 0x464) = param_2;
    FUN_1000200a0(param_3 + 0x84);
  }
  fVar6 = (float)(**(code **)(**(long **)param_3[0xc9] + 0x48))();
  if ((int)param_3[200] != 0) {
    plVar2 = (long *)param_3[0xc9];
    uVar9 = NEON_fmov(0x3fc00000,4);
    plVar4 = plVar2;
    do {
      lVar3 = *plVar4;
      bVar1 = false;
      if ((*(float *)(lVar3 + 0x518) == 1.5) && (bVar1 = false, !NAN(*(float *)(lVar3 + 0x51c)))) {
        bVar1 = *(float *)(lVar3 + 0x51c) == 1.5;
      }
      if (!bVar1) {
        *(undefined8 *)(lVar3 + 0x518) = uVar9;
        FUN_1000200a0(lVar3 + 0x4d0);
        lVar3 = *plVar4;
      }
      FUN_100183c78(180.0 / fVar6,(180.0 / fVar6) * 1.25,lVar3);
      plVar5 = plVar4 + 1;
      FUN_10064e5ec(0,0,*plVar4,8,
                    param_3 + ((ulong)((long)plVar2 - param_3[0xc9]) >> 3 & 0xffffffff) * 0x24 +
                              0x18,8);
      plVar2 = plVar2 + 1;
      plVar4 = plVar5;
    } while (plVar5 != (long *)(param_3[0xc9] + (ulong)*(uint *)(param_3 + 200) * 8));
  }
  return;
}




void FUN_1000d178c(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar6;
  undefined1 auStack_40 [12];
  undefined4 local_34;
  undefined8 *puVar5;
  
  FUN_10109c550(auStack_40,(ulong)auStack_40 | 4,0,0);
  uVar2 = FUN_1000d18ac(param_1,auStack_40);
  uVar1 = *(uint *)(param_1 + 0x658);
  if (uVar2 != uVar1) {
    if (uVar1 < 4) {
      local_34 = 0xff000000;
      FUN_100652dd4(param_1 + (ulong)uVar1 * 0x120 + 0xc0,&local_34,2);
    }
    if (uVar2 != 0xffffffff) {
      local_34 = 0xff808080;
      FUN_100652dd4(param_1 + (ulong)uVar2 * 0x120 + 0xc0,&local_34,2);
      if (*(char *)(param_1 + 0x660) == '\0') {
        *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
        *(undefined1 *)(param_1 + 0x660) = 1;
      }
    }
    *(uint *)(param_1 + 0x658) = uVar2;
  }
  lVar3 = FUN_10005fe04();
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_100060518();
  }
  if (*(int *)(param_1 + 0x640) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x648);
    do {
      puVar5 = puVar4 + 1;
      FUN_100183fcc(uVar6,*puVar4);
      puVar4 = puVar5;
    } while (puVar5 != (undefined8 *)
                       (*(long *)(param_1 + 0x648) + (ulong)*(uint *)(param_1 + 0x640) * 8));
  }
  return;
}




undefined4 FUN_1000d18ac(long param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *param_2 - *(float *)(param_1 + 0x650);
  fVar6 = param_2[1] - *(float *)(param_1 + 0x654);
  if (SQRT(fVar5 * fVar5 + fVar6 * fVar6) <= 50.0) {
    uVar4 = 0xffffffff;
  }
  else {
    fVar5 = (float)_atan2f();
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (-2.3561945 < fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 2.3561945;
        bVar2 = fVar5 == 2.3561945;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (fVar5 <= 2.3561945) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar5)) {
          bVar1 = fVar5 < 0.7853982;
          bVar2 = fVar5 == 0.7853982;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = false;
        if (-0.7853982 < fVar5) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar5)) {
            bVar1 = fVar5 < 0.7853982;
            bVar2 = fVar5 == 0.7853982;
            bVar3 = false;
          }
        }
        uVar4 = 2;
        if (!bVar2 && bVar1 == bVar3) {
          uVar4 = 3;
        }
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}




void thunk_FUN_1000d178c(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar6;
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  undefined8 *puVar5;
  
  FUN_10109c550(auStack_40,(ulong)auStack_40 | 4,0,0);
  uVar2 = FUN_1000d18ac(param_1,auStack_40);
  uVar1 = *(uint *)(param_1 + 0x658);
  if (uVar2 != uVar1) {
    if (uVar1 < 4) {
      uStack_34 = 0xff000000;
      FUN_100652dd4(param_1 + (ulong)uVar1 * 0x120 + 0xc0,&uStack_34,2);
    }
    if (uVar2 != 0xffffffff) {
      uStack_34 = 0xff808080;
      FUN_100652dd4(param_1 + (ulong)uVar2 * 0x120 + 0xc0,&uStack_34,2);
      if (*(char *)(param_1 + 0x660) == '\0') {
        *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
        *(undefined1 *)(param_1 + 0x660) = 1;
      }
    }
    *(uint *)(param_1 + 0x658) = uVar2;
  }
  lVar3 = FUN_10005fe04();
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_100060518();
  }
  if (*(int *)(param_1 + 0x640) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x648);
    do {
      puVar5 = puVar4 + 1;
      FUN_100183fcc(uVar6,*puVar4);
      puVar4 = puVar5;
    } while (puVar5 != (undefined8 *)
                       (*(long *)(param_1 + 0x648) + (ulong)*(uint *)(param_1 + 0x640) * 8));
  }
  return;
}




long * FUN_1000d1960(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  float fVar4;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined4 local_38;
  
  puVar3 = (undefined8 *)FUN_100181304(param_1,1);
  *puVar3 = &PTR_FUN_101456198;
  thunk_FUN_100652c08(puVar3 + 0x2b7);
  plVar1 = param_1 + 0x2d5;
  thunk_FUN_100652c08(plVar1);
  thunk_FUN_100650e64(param_1 + 0x2f3);
  *(undefined4 *)(param_1 + 0x319) = param_3;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  fVar4 = 32.0;
  FUN_1001816d4(0,0x42000000,0x44480000,param_1,0,param_2,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100181b28(param_1,0);
  FUN_100181b80(param_1,1);
  FUN_100181bd0(0x3f800000,param_1,&DAT_10115a164);
  FUN_100181bf8(0x3f4ccccd,param_1,&DAT_10115a168);
  FUN_1001b495c(0,param_1);
  local_40 = (ulong)*(uint *)(param_1 + 0x319);
  local_38 = DAT_101d91884;
  local_60 = FUN_1000d1b68;
  local_50 = 0;
  uStack_48 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&local_60);
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  local_60 = (code *)CONCAT44(local_60._4_4_,0xffa6a6a6);
  FUN_100652dd4(plVar1,&local_60,2);
  uVar2 = *(uint *)((long)param_1 + 0x172c);
  if ((uVar2 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x172c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x3300;
    FUN_1000200a0(plVar1);
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  if ((*(float *)(param_1 + 0x2dd) != 0.0) || (*(float *)((long)param_1 + 0x16ec) != fVar4 * -0.5))
  {
    *(undefined4 *)(param_1 + 0x2dd) = 0;
    *(float *)((long)param_1 + 0x16ec) = fVar4 * -0.5;
    FUN_1000200a0(plVar1);
  }
  local_60 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0x2d5] + 0x28))(plVar1,&local_60);
  return param_1;
}




void FUN_1000d1b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1000d1c14(param_1,param_2,param_5);
  return;
}




void FUN_1000d1b70(float param_1,undefined1 param_2 [16],long *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2._0_4_;
  fVar2 = (param_1 - fVar1) + -8.0;
  FUN_100181c18(0,fVar2,fVar2);
  fVar2 = (float)(**(code **)(*param_3 + 0x50))(param_3);
  fVar2 = 2.0 - (fVar1 + fVar2 * -0.5);
  if (*(float *)(param_3 + 8) != fVar2) {
    *(float *)(param_3 + 8) = fVar2;
    FUN_1000200a0(param_3);
  }
  FUN_100181b5c(param_2._0_8_,0,param_3);
  FUN_10064e47c(param_1 - fVar1 * 2.0,0x40000000,param_3 + 0x2d5);
  return;
}




void FUN_1000d1c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("EVENT_SELECT_NEGATIVE_REPORT_ITEM");
  FUN_100644aec(auStack_40,uVar1,param_3);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




long * FUN_1000d1c68(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  char *pcVar33;
  uint uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  int iVar37;
  undefined8 *puVar38;
  undefined8 uVar39;
  uint uVar40;
  long lVar41;
  code *local_a8;
  long *local_a0;
  long *local_98;
  code *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  plVar11 = param_1 + 0x1179;
  plVar12 = param_1 + 0x114a;
  puVar38 = (undefined8 *)FUN_10064e20c();
  puVar38[0x17] = 0;
  puVar38[0x18] = 0;
  *puVar38 = &PTR_thunk_FUN_1000d313c_101456330;
  puVar38[0x19] = 0;
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x56;
  thunk_FUN_100655644(plVar1);
  plVar2 = param_1 + 0x81;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 0x9f;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0xbd;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0xdb;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08();
  FUN_10064e264();
  plVar6 = param_1 + 0x136;
  FUN_10064e264(plVar6);
  thunk_FUN_100652c08();
  plVar7 = param_1 + 0x16b;
  thunk_FUN_100650e64();
  plVar8 = param_1 + 0x191;
  thunk_FUN_100650e64();
  plVar9 = param_1 + 0x1b7;
  thunk_FUN_100650e64();
  plVar10 = param_1 + 0x1dd;
  thunk_FUN_1000e518c();
  plVar13 = param_1 + 0x273;
  thunk_FUN_1000e518c();
  plVar14 = param_1 + 0x309;
  thunk_FUN_1000e518c();
  plVar15 = param_1 + 0x39f;
  FUN_10064e264();
  thunk_FUN_100655644();
  lVar41 = 0;
  do {
    thunk_FUN_10064f204((long)param_1 + lVar41 + 0x1f08);
    lVar41 = lVar41 + 0x148;
  } while (lVar41 != 0xcd0);
  lVar41 = 0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar41 + 0x2bd8);
    lVar41 = lVar41 + 0xf0;
  } while (lVar41 != 0x960);
  lVar41 = 0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar41 + 0x3538);
    lVar41 = lVar41 + 0xf0;
  } while (lVar41 != 0x960);
  lVar41 = 0;
  do {
    FUN_1006533a4((long)param_1 + lVar41 + 0x3e98);
    lVar41 = lVar41 + 0x100;
  } while (lVar41 != 0xa00);
  lVar41 = 0;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar41 + 0x4898);
    lVar41 = lVar41 + 0x130;
  } while (lVar41 != 0xbe0);
  lVar41 = 0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar41 + 0x5478);
    lVar41 = lVar41 + 0xf0;
  } while (lVar41 != 0x960);
  plVar16 = param_1 + 0xbbb;
  thunk_FUN_10064f204(plVar16);
  plVar17 = param_1 + 0xbe4;
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar18 = param_1 + 0xc20;
  thunk_FUN_100652c08();
  plVar19 = param_1 + 0xc3e;
  FUN_1006533a4();
  thunk_FUN_100650e64();
  thunk_FUN_100652c08();
  plVar20 = param_1 + 0xca2;
  thunk_FUN_10064f204(plVar20);
  thunk_FUN_1002f84e4(param_1 + 0xccb,1);
  plVar21 = param_1 + 0xd8d;
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  plVar22 = param_1 + 0xdd1;
  FUN_1006421a8();
  param_1[0xdd1] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar23 = param_1 + 0xde2;
  thunk_FUN_100655644(plVar23);
  plVar24 = param_1 + 0xe0d;
  thunk_FUN_100183990(plVar24,1);
  plVar25 = param_1 + 0xecb;
  thunk_FUN_100183990(plVar25,1);
  plVar26 = param_1 + 0xf89;
  thunk_FUN_100183990(plVar26,1);
  plVar27 = param_1 + 0x1047;
  thunk_FUN_100183990(plVar27,1);
  plVar28 = param_1 + 0x1105;
  thunk_FUN_100652c08();
  param_1[0x1123] = 0;
  plVar29 = param_1 + 0x1124;
  thunk_FUN_100650e64();
  FUN_1006421a8(plVar12);
  *plVar12 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar30 = param_1 + 0x115b;
  thunk_FUN_100652c08();
  FUN_1006421a8(plVar11);
  *plVar11 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar31 = param_1 + 0x118a;
  thunk_FUN_100652c08();
  plVar32 = param_1 + 0x11a8;
  thunk_FUN_1001bd4e0(plVar32,1);
  param_1[0x123f] = 0;
  param_1[0x123e] = 0;
  FUN_1004e313c(param_1 + 0x1240);
  *(undefined1 *)(param_1 + 0x1242) = 0;
  *(undefined8 *)((long)param_1 + 0x921c) = 0;
  *(undefined8 *)((long)param_1 + 0x9224) = 0;
  *(undefined8 *)((long)param_1 + 0x9214) = 0;
  *(undefined4 *)((long)param_1 + 0x922b) = 0;
  *(undefined4 *)(param_1 + 0x1246) = 0;
  *(undefined1 *)((long)param_1 + 0x9234) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar38 + 0x1a,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x38,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100655930(plVar1,plVar2,1);
  FUN_100655930(plVar1,plVar3,1);
  FUN_100655930(plVar1,plVar4,1);
  FUN_100655930(plVar1,plVar5,1);
  FUN_100655930(plVar1,plVar8,1);
  FUN_100655930(plVar1,param_1 + 0x101,1);
  FUN_100655930(plVar1,param_1 + 0x11f,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  FUN_100642bd8(plVar6,plVar7,1);
  FUN_100642bd8(plVar6,param_1 + 0x14d,1);
  FUN_100642bd8(plVar6,plVar9,1);
  FUN_100642bd8(plVar6,plVar10,1);
  FUN_100642bd8(plVar6,plVar14,1);
  FUN_100642bd8(plVar6,plVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar15,1);
  FUN_100642bd8(plVar15,param_1 + 0x3b6,1);
  FUN_100642bd8(plVar15,plVar16,1);
  FUN_10064f31c(plVar16,plVar17,1);
  FUN_10064f31c(plVar16,param_1 + 0xc02,1);
  FUN_10064f31c(plVar16,plVar18,1);
  FUN_10064f31c(plVar16,plVar19,1);
  FUN_10064f31c(plVar16,param_1 + 0xc5e,1);
  FUN_100642bd8(plVar15,param_1 + 0xc84,1);
  FUN_100642bd8(plVar15,plVar20,1);
  FUN_10064f31c(plVar20,param_1 + 0xccb,1);
  FUN_10064f31c(plVar20,plVar21,1);
  FUN_100642bd8(plVar21,param_1 + 0xdab,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar22,1);
  FUN_100642bd8(plVar22,plVar23,1);
  FUN_100655930(plVar23,plVar24,1);
  FUN_100655930(plVar23,plVar25,1);
  FUN_100655930(plVar23,plVar26,1);
  FUN_100655930(plVar23,plVar27,1);
  FUN_100642bd8(plVar27,plVar28,1);
  FUN_100655930(plVar23,plVar30,1);
  FUN_100655930(plVar23,plVar12,1);
  FUN_100642bd8(plVar12,plVar11,1);
  FUN_100642bd8(plVar11,plVar32,1);
  FUN_100642bd8(plVar11,plVar31,1);
  FUN_100642bd8(plVar22,plVar29,1);
  FUN_100652cac(puVar38 + 0x1a,PTR_s_build___HUDPartsCommon_atlas_10184e098,
                "circle_button_fill_lefthalf");
  FUN_100652cac(param_1 + 0x38,PTR_s_build___HUDPartsCommon_atlas_10184e098,
                "generic_gradient_horizontal");
  *(uint *)((long)param_1 + 0x244) = *(uint *)((long)param_1 + 0x244) & 0xffffffbf;
  FUN_1000d301c(param_1,0);
  FUN_100652ca4(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  if ((*(float *)(param_1 + 0xa9) != 0.5) || (*(float *)((long)param_1 + 0x54c) != 0.5)) {
    param_1[0xa9] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  *(uint *)((long)param_1 + 0x57c) = *(uint *)((long)param_1 + 0x57c) & 0xfffffffb;
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  uVar40 = *(uint *)((long)param_1 + 0x48c);
  if ((uVar40 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x48c) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x2600;
    FUN_1000200a0(plVar2);
    uVar40 = *(uint *)((long)param_1 + 0x48c);
  }
  *(uint *)((long)param_1 + 0x48c) = uVar40 & 0xfffffffb;
  FUN_100652cac(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  uVar40 = *(uint *)((long)param_1 + 0x66c);
  if ((uVar40 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x66c) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x5900;
    FUN_1000200a0(plVar4);
  }
  if ((*(float *)(param_1 + 199) != 0.5) || (*(float *)((long)param_1 + 0x63c) != 0.5)) {
    param_1[199] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar4);
  }
  *(uint *)((long)param_1 + 0x66c) = *(uint *)((long)param_1 + 0x66c) & 0xfffffffb;
  FUN_100651038(plVar8,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_10065165c(plVar8,1);
  FUN_1004e3120(&local_a8,"1");
  FUN_1006513c0(plVar8,&local_a8);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  *(uint *)((long)param_1 + 0xd0c) = *(uint *)((long)param_1 + 0xd0c) & 0xffffffbf;
  FUN_100651038(plVar7,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  if ((*(float *)(param_1 + 0x175) != 0.0) || (*(float *)((long)param_1 + 0xbac) != 0.5)) {
    param_1[0x175] = 0x3f00000000000000;
    FUN_1000200a0(plVar7);
  }
  FUN_1004e3120(&local_a8,"ASuperLongNameForThePurposesOfLayout");
  FUN_1006513c0(plVar7,&local_a8);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  FUN_100652cac(param_1 + 0x14d,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  *(uint *)((long)param_1 + 0xaec) = *(uint *)((long)param_1 + 0xaec) & 0xfffffffb;
  FUN_100651038(plVar9,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1004e3120(&local_a8,"00/00/00");
  FUN_1006513c0(plVar9,&local_a8);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  uVar40 = *(uint *)((long)param_1 + 0x75c);
  if ((uVar40 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x75c) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar5);
  }
  if ((*(float *)(param_1 + 0xe5) != 0.5) || (*(float *)((long)param_1 + 0x72c) != 0.5)) {
    param_1[0xe5] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar5);
  }
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100651460(plVar5,&DAT_10115a168);
  FUN_1000e53fc(plVar10,&DAT_10115a168,&DAT_10114bf80);
  FUN_1000e53d0(0x3f266666,plVar10);
  FUN_1000e5368(plVar10,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1004e3120(&local_a8,"19");
  FUN_1000e543c(plVar10,&local_a8);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  iVar37 = FUN_10031615c(0x1d);
  pcVar33 = "hud_stats_bounty";
  if (iVar37 == 0) {
    pcVar33 = "hud_pingicon_action_minion";
  }
  FUN_1000e53c8(plVar13,pcVar33);
  FUN_1000e53d0(0x3f000000,plVar13);
  FUN_1000e5368(plVar13,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1004e3120(&local_a8,"000");
  FUN_1000e543c(plVar13,&local_a8);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  FUN_1000e53c8(plVar14,"hud_store_gold_icon_large");
  FUN_1000e53d0(0x3f000000,plVar14);
  FUN_1000e5368(plVar14,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1004e3120(&local_a8,"00.0k");
  FUN_1000e543c(plVar14,&local_a8);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  FUN_100652cac(param_1 + 0x101,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0,
                "icon_item_weapon_infusion");
  *(uint *)((long)param_1 + 0x88c) = *(uint *)((long)param_1 + 0x88c) & 0xfffffffb;
  FUN_100652cac(plVar17,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  uVar40 = *(uint *)((long)param_1 + 0x5fa4);
  if ((uVar40 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x5fa4) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x2600;
    FUN_1000200a0(plVar17);
  }
  FUN_100652cac(plVar19,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0,"icon_item_empty");
  FUN_100652dd4(plVar19,&DAT_10115a164,2);
  if ((*(uint *)((long)param_1 + 0x6274) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x6274) = *(uint *)((long)param_1 + 0x6274) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar19);
  }
  FUN_100652cac(plVar18,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar18,&DAT_10115a164,2);
  if ((*(uint *)((long)param_1 + 0x6184) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x6184) = *(uint *)((long)param_1 + 0x6184) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar18);
  }
  FUN_100652ca4(param_1 + 0xc84,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  uVar36 = DAT_101dbd484;
  local_80 = DAT_101dbd484;
  local_a8 = FUN_1000d3090;
  plVar1 = param_1 + 0xca3;
  local_90 = (code *)0x0;
  uStack_88 = 0;
  local_98 = (long *)0x0;
  local_a0 = param_1;
  FUN_10001554c(plVar1,&local_a8);
  local_80 = DAT_101dbd494;
  local_a8 = FUN_1000d30a8;
  local_90 = (code *)0x0;
  uStack_88 = 0;
  local_98 = (long *)0x0;
  local_a0 = param_1;
  FUN_10001554c(plVar1,&local_a8);
  local_80 = DAT_101dbd498;
  local_a8 = FUN_1000d30c0;
  local_90 = (code *)0x0;
  uStack_88 = 0;
  local_98 = (long *)0x0;
  local_a0 = param_1;
  FUN_10001554c(plVar1,&local_a8);
  *(uint *)((long)param_1 + 0x6594) = *(uint *)((long)param_1 + 0x6594) & 0xfffffffb | 0x10;
  FUN_100651038(param_1 + 0xdab,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  *(uint *)((long)param_1 + 0x6ddc) = *(uint *)((long)param_1 + 0x6ddc) & 0xfffffffb;
  FUN_100652cac(plVar21,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  *(uint *)((long)param_1 + 0x6cec) = *(uint *)((long)param_1 + 0x6cec) & 0xfffffffb;
  FUN_100655990(plVar23,0);
  plVar1 = param_1 + 0xea7;
  FUN_100652cdc(plVar1,"hud_pingicon_action_thumbsup");
  FUN_100652e14(0,plVar1);
  uVar40 = *(uint *)((long)param_1 + 0x75bc);
  if ((uVar40 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x75bc) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x5900;
    FUN_1000200a0(plVar1);
  }
  uVar40 = *(uint *)((long)param_1 + 0x73dc);
  if ((uVar40 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x73dc) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x1980;
    FUN_1000200a0(param_1 + 0xe6b);
  }
  FUN_1001b495c(0,plVar24);
  FUN_100183c68(0x3f666666,plVar24,&DAT_10115a168);
  lVar41 = NEON_fmov(0xc1200000,4);
  param_1[0xe18] = lVar41;
  uVar35 = DAT_101d91884;
  local_80 = DAT_101d91884;
  local_a8 = FUN_1000d30d8;
  local_90 = (code *)0x0;
  uStack_88 = 0;
  local_98 = (long *)0x0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0xe0e,&local_a8);
  plVar1 = param_1 + 0xf65;
  FUN_100652cdc(plVar1,"hud_pingicon_action_thumbsup");
  FUN_100652e14(0,plVar1);
  uVar40 = *(uint *)((long)param_1 + 0x7bac);
  if ((uVar40 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x7bac) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x5900;
    FUN_1000200a0(plVar1);
  }
  *(byte *)(param_1 + 0xf80) = *(byte *)(param_1 + 0xf80) | 2;
  uVar40 = *(uint *)((long)param_1 + 0x79cc);
  if ((uVar40 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x79cc) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x1980;
    FUN_1000200a0(param_1 + 0xf29);
  }
  FUN_1001b495c(0,plVar25);
  FUN_100183c68(0x3f666666,plVar25,&DAT_10115a168);
  param_1[0xed6] = lVar41;
  local_80 = uVar35;
  local_a8 = thunk_FUN_1000d72ec;
  local_90 = (code *)0x0;
  uStack_88 = 0;
  local_98 = (long *)0x0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0xecc,&local_a8);
  FUN_100652cdc(param_1 + 0x1023,"hud_eom_add");
  uVar40 = *(uint *)((long)param_1 + 0x819c);
  if ((uVar40 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x819c) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x5900;
    FUN_1000200a0(param_1 + 0x1023);
  }
  uVar40 = *(uint *)((long)param_1 + 0x7fbc);
  if ((uVar40 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x7fbc) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x1980;
    FUN_1000200a0(param_1 + 0xfe7);
  }
  FUN_100183c68(0x3f19999a,plVar26,&DAT_10115a168);
  FUN_1001b495c(0,plVar26);
  FUN_100183c68(0x3f666666,plVar26,&DAT_10115a168);
  param_1[0xf94] = lVar41;
  local_80 = uVar35;
  local_a8 = FUN_1000d310c;
  local_90 = (code *)0x0;
  uStack_88 = 0;
  local_98 = (long *)0x0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0xf8a,&local_a8);
  FUN_100652cdc(param_1 + 0x10e1,"generic_chat_bubble_outline");
  uVar40 = *(uint *)((long)param_1 + 0x878c);
  if ((uVar40 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x878c) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x5900;
    FUN_1000200a0(param_1 + 0x10e1);
  }
  uVar40 = *(uint *)((long)param_1 + 0x85ac);
  if ((uVar40 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x85ac) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x1980;
    FUN_1000200a0(param_1 + 0x10a5);
  }
  FUN_1001b495c(0,plVar27);
  FUN_100183c68(0x3f666666,plVar27,&DAT_10115a168);
  param_1[0x1052] = lVar41;
  local_80 = uVar35;
  local_a8 = thunk_FUN_1000d73a8;
  local_90 = (code *)0x0;
  uStack_88 = 0;
  local_98 = (long *)0x0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x1048,&local_a8);
  *(uint *)((long)param_1 + 0x82bc) = *(uint *)((long)param_1 + 0x82bc) & 0xfffffffb;
  FUN_100652cac(plVar28,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_slash_line");
  if ((*(float *)(param_1 + 0x110f) != 0.5) || (*(float *)((long)param_1 + 0x887c) != 0.5)) {
    param_1[0x110f] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar28);
  }
  *(uint *)((long)param_1 + 0x88ac) = *(uint *)((long)param_1 + 0x88ac) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x110e) != 1.25) || (*(float *)((long)param_1 + 0x8874) != 1.25)) {
    lVar41 = NEON_fmov(0x3fa00000,4);
    param_1[0x110e] = lVar41;
    FUN_1000200a0(plVar28);
  }
  FUN_100652dd4(plVar28,&DAT_10115a170,2);
  uVar40 = *(uint *)((long)param_1 + 0x88ac);
  uVar34 = *(uint *)((long)param_1 + 0x85ac) >> 7 & 0xff;
  if (uVar34 != (uVar40 >> 7 & 0xff)) {
    *(uint *)((long)param_1 + 0x88ac) = uVar40 & 0xffff8000 | uVar40 & 0x7f | uVar34 << 7;
    FUN_1000200a0(plVar28);
  }
  *(uint *)((long)param_1 + 0x8ad4) = *(uint *)((long)param_1 + 0x8ad4) & 0xffffffbb;
  FUN_1001bdb78(0x3f666666,plVar32,&DAT_10115a164);
  FUN_1001bdb04(0x3f800000,plVar32,&DAT_10115a168);
  FUN_100652cac(plVar31,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_bubble_side_arrow");
  if ((*(float *)(param_1 + 0x1193) != 1.1) || (*(float *)((long)param_1 + 0x8c9c) != 1.1)) {
    param_1[0x1193] = 0x3f8ccccd3f8ccccd;
    FUN_1000200a0(plVar31);
  }
  FUN_100652cac(plVar30,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar30,&DAT_10115a164,2);
  uVar40 = *(uint *)((long)param_1 + 0x8b5c);
  if ((uVar40 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x8b5c) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x3300;
    FUN_1000200a0(plVar30);
  }
  uVar35 = DAT_101dbd458;
  local_80 = DAT_101dbd458;
  local_a8 = FUN_1000d3124;
  local_90 = (code *)0x0;
  uStack_88 = 0;
  local_98 = (long *)0x0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x115c,&local_a8);
  local_80 = uVar36;
  local_a8 = FUN_1000d3124;
  local_90 = (code *)0x0;
  uStack_88 = 0;
  local_98 = (long *)0x0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x115c,&local_a8);
  *(uint *)((long)param_1 + 0x8b5c) = *(uint *)((long)param_1 + 0x8b5c) & 0xffffffab | 0x10;
  uVar39 = FUN_1004e0150("GAME_OVER_BLOCKLIST_NOTICE",0);
  FUN_1006513c0(plVar29,uVar39);
  FUN_100651038(plVar29,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  *(uint *)((long)param_1 + 0x89a4) = *(uint *)((long)param_1 + 0x89a4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x6f0c) = *(uint *)((long)param_1 + 0x6f0c) & 0xfffffffb;
  local_80 = FUN_100644a94("EVENT_SELECT_NEGATIVE_REPORT_ITEM");
  local_a8 = FUN_1000d312c;
  local_90 = (code *)0x0;
  uStack_88 = 0;
  local_98 = (long *)0x0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 1,&local_a8);
  local_80 = uVar35;
  local_a8 = thunk_FUN_1000d7268;
  local_90 = (code *)0x0;
  uStack_88 = 0;
  local_98 = (long *)0x0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x1125,&local_a8);
  local_80 = uVar36;
  local_a8 = thunk_FUN_1000d7268;
  local_90 = (code *)0x0;
  uStack_88 = 0;
  local_98 = (long *)0x0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x1125,&local_a8);
  if ((*(uint *)((long)param_1 + 0x84) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffff807f | 0x1f80;
    FUN_1000200a0(param_1);
  }
  uVar39 = FUN_100316150();
  local_a8 = (code *)0x0;
  local_90 = thunk_FUN_1000d6b74;
  local_a0 = param_1;
  local_98 = param_1;
  FUN_10003c508(uVar39,&local_a8);
  return param_1;
}




void FUN_1000d301c(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x154);
  uVar2 = 0x99;
  if (param_2 == 0) {
    uVar2 = 0x4c;
  }
  if (uVar2 != (uVar1 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x154) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
    FUN_1000200a0(param_1 + 0xd0);
  }
  uVar1 = *(uint *)(param_1 + 0x244);
  if (uVar2 == (uVar1 >> 7 & 0xff)) {
    return;
  }
  *(uint *)(param_1 + 0x244) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
  FUN_1000200a0(param_1 + 0x1c0);
  return;
}




void FUN_1000d3090(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000d30a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x28))();
    return;
  }
  return;
}




void FUN_1000d30a8(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000d30b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
    return;
  }
  return;
}




void FUN_1000d30c0(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000d30d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
    return;
  }
  return;
}




void FUN_1000d30d8(long param_1)

{
  *(uint *)(param_1 + 0x8ad4) = *(uint *)(param_1 + 0x8ad4) & 0xfffffffb;
  *(uint *)(param_1 + 0x8b5c) = *(uint *)(param_1 + 0x8b5c) & 0xfffffffb;
  FUN_1000d6d14(param_1,*(char *)(param_1 + 0x9230) == '\0');
  return;
}




void thunk_FUN_1000d72ec(long param_1)

{
  long *plVar1;
  bool bVar2;
  float fVar3;
  undefined1 *puStack_28;
  
  plVar1 = (long *)(param_1 + 0x8d40);
  FUN_1000d3bbc();
  fVar3 = 0.0;
  FUN_10064e47c(0,plVar1);
  FUN_1006425d0(plVar1,0,0,1,1);
  fVar3 = fVar3 * 0.5;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x8d80) == 0.0) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x8d84)) && !NAN(fVar3))) {
    bVar2 = *(float *)(param_1 + 0x8d84) == fVar3;
  }
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x8d80) = 0;
    *(float *)(param_1 + 0x8d84) = fVar3;
    FUN_1000200a0(plVar1);
  }
  puStack_28 = &DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&puStack_28);
  FUN_1000d6e9c(param_1,*(char *)(param_1 + 0x9231) == '\0');
  return;
}




void FUN_1000d310c(long param_1)

{
  FUN_1000d6bdc(param_1,*(char *)(param_1 + 0x9232) == '\0');
  return;
}




void thunk_FUN_1000d73a8(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  long *plVar3;
  byte bVar4;
  
  bVar4 = *(byte *)(param_1 + 0x9233) ^ 1;
  *(byte *)(param_1 + 0x9233) = bVar4;
  plVar3 = *(long **)(param_1 + 0xb8);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x48))(plVar3,bVar4 != 0);
    bVar4 = *(byte *)(param_1 + 0x9233);
  }
  uVar2 = *(uint *)(param_1 + 0x88ac);
  *(uint *)(param_1 + 0x88ac) = uVar2 & 0xfffffff8 | uVar2 & 3 | (uint)(bVar4 != 0) << 2;
  puVar1 = &DAT_10115a168;
  if (bVar4 != 0) {
    puVar1 = &DAT_10115a170;
  }
  FUN_100652dd4(param_1 + 0x8528,puVar1,2);
  puVar1 = &DAT_10115a168;
  if (*(char *)(param_1 + 0x9233) != '\0') {
    puVar1 = &DAT_10115a170;
  }
  FUN_100652dd4(param_1 + 0x8708,puVar1,2);
  return;
}




void FUN_1000d3124(undefined8 param_1)

{
  FUN_1000d6e9c(param_1,0);
  return;
}




void FUN_1000d312c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000d7188(param_1,param_4);
  return;
}




void thunk_FUN_1000d7268(long param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  puVar1 = (uint *)(param_1 + 0x6f94);
  *(uint *)(param_1 + 0x89a4) = *(uint *)(param_1 + 0x89a4) & 0xffffffeb;
  param_1 = param_1 + 0x6f10;
  uVar2 = *puVar1;
  *puVar1 = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *puVar1 = uVar2 & 0xffff807f | 4;
    FUN_1000200a0(param_1);
  }
  uVar3 = FUN_100640840(0x3f800000,0x3f000000,FUN_10001f160);
  FUN_100642324(param_1);
  FUN_100642b14(param_1,uVar3);
  return;
}




long * thunk_FUN_1000d1c68(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  char *pcVar33;
  uint uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  int iVar37;
  undefined8 *puVar38;
  undefined8 uVar39;
  uint uVar40;
  long lVar41;
  code *pcStack_a8;
  long *plStack_a0;
  long *plStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  plVar11 = param_1 + 0x1179;
  plVar12 = param_1 + 0x114a;
  puVar38 = (undefined8 *)FUN_10064e20c();
  puVar38[0x17] = 0;
  puVar38[0x18] = 0;
  *puVar38 = &PTR_thunk_FUN_1000d313c_101456330;
  puVar38[0x19] = 0;
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x56;
  thunk_FUN_100655644(plVar1);
  plVar2 = param_1 + 0x81;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 0x9f;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0xbd;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0xdb;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08();
  FUN_10064e264();
  plVar6 = param_1 + 0x136;
  FUN_10064e264(plVar6);
  thunk_FUN_100652c08();
  plVar7 = param_1 + 0x16b;
  thunk_FUN_100650e64();
  plVar8 = param_1 + 0x191;
  thunk_FUN_100650e64();
  plVar9 = param_1 + 0x1b7;
  thunk_FUN_100650e64();
  plVar10 = param_1 + 0x1dd;
  thunk_FUN_1000e518c();
  plVar13 = param_1 + 0x273;
  thunk_FUN_1000e518c();
  plVar14 = param_1 + 0x309;
  thunk_FUN_1000e518c();
  plVar15 = param_1 + 0x39f;
  FUN_10064e264();
  thunk_FUN_100655644();
  lVar41 = 0;
  do {
    thunk_FUN_10064f204((long)param_1 + lVar41 + 0x1f08);
    lVar41 = lVar41 + 0x148;
  } while (lVar41 != 0xcd0);
  lVar41 = 0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar41 + 0x2bd8);
    lVar41 = lVar41 + 0xf0;
  } while (lVar41 != 0x960);
  lVar41 = 0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar41 + 0x3538);
    lVar41 = lVar41 + 0xf0;
  } while (lVar41 != 0x960);
  lVar41 = 0;
  do {
    FUN_1006533a4((long)param_1 + lVar41 + 0x3e98);
    lVar41 = lVar41 + 0x100;
  } while (lVar41 != 0xa00);
  lVar41 = 0;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar41 + 0x4898);
    lVar41 = lVar41 + 0x130;
  } while (lVar41 != 0xbe0);
  lVar41 = 0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar41 + 0x5478);
    lVar41 = lVar41 + 0xf0;
  } while (lVar41 != 0x960);
  plVar16 = param_1 + 0xbbb;
  thunk_FUN_10064f204(plVar16);
  plVar17 = param_1 + 0xbe4;
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar18 = param_1 + 0xc20;
  thunk_FUN_100652c08();
  plVar19 = param_1 + 0xc3e;
  FUN_1006533a4();
  thunk_FUN_100650e64();
  thunk_FUN_100652c08();
  plVar20 = param_1 + 0xca2;
  thunk_FUN_10064f204(plVar20);
  thunk_FUN_1002f84e4(param_1 + 0xccb,1);
  plVar21 = param_1 + 0xd8d;
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  plVar22 = param_1 + 0xdd1;
  FUN_1006421a8();
  param_1[0xdd1] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar23 = param_1 + 0xde2;
  thunk_FUN_100655644(plVar23);
  plVar24 = param_1 + 0xe0d;
  thunk_FUN_100183990(plVar24,1);
  plVar25 = param_1 + 0xecb;
  thunk_FUN_100183990(plVar25,1);
  plVar26 = param_1 + 0xf89;
  thunk_FUN_100183990(plVar26,1);
  plVar27 = param_1 + 0x1047;
  thunk_FUN_100183990(plVar27,1);
  plVar28 = param_1 + 0x1105;
  thunk_FUN_100652c08();
  param_1[0x1123] = 0;
  plVar29 = param_1 + 0x1124;
  thunk_FUN_100650e64();
  FUN_1006421a8(plVar12);
  *plVar12 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar30 = param_1 + 0x115b;
  thunk_FUN_100652c08();
  FUN_1006421a8(plVar11);
  *plVar11 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar31 = param_1 + 0x118a;
  thunk_FUN_100652c08();
  plVar32 = param_1 + 0x11a8;
  thunk_FUN_1001bd4e0(plVar32,1);
  param_1[0x123f] = 0;
  param_1[0x123e] = 0;
  FUN_1004e313c(param_1 + 0x1240);
  *(undefined1 *)(param_1 + 0x1242) = 0;
  *(undefined8 *)((long)param_1 + 0x921c) = 0;
  *(undefined8 *)((long)param_1 + 0x9224) = 0;
  *(undefined8 *)((long)param_1 + 0x9214) = 0;
  *(undefined4 *)((long)param_1 + 0x922b) = 0;
  *(undefined4 *)(param_1 + 0x1246) = 0;
  *(undefined1 *)((long)param_1 + 0x9234) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar38 + 0x1a,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x38,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100655930(plVar1,plVar2,1);
  FUN_100655930(plVar1,plVar3,1);
  FUN_100655930(plVar1,plVar4,1);
  FUN_100655930(plVar1,plVar5,1);
  FUN_100655930(plVar1,plVar8,1);
  FUN_100655930(plVar1,param_1 + 0x101,1);
  FUN_100655930(plVar1,param_1 + 0x11f,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  FUN_100642bd8(plVar6,plVar7,1);
  FUN_100642bd8(plVar6,param_1 + 0x14d,1);
  FUN_100642bd8(plVar6,plVar9,1);
  FUN_100642bd8(plVar6,plVar10,1);
  FUN_100642bd8(plVar6,plVar14,1);
  FUN_100642bd8(plVar6,plVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar15,1);
  FUN_100642bd8(plVar15,param_1 + 0x3b6,1);
  FUN_100642bd8(plVar15,plVar16,1);
  FUN_10064f31c(plVar16,plVar17,1);
  FUN_10064f31c(plVar16,param_1 + 0xc02,1);
  FUN_10064f31c(plVar16,plVar18,1);
  FUN_10064f31c(plVar16,plVar19,1);
  FUN_10064f31c(plVar16,param_1 + 0xc5e,1);
  FUN_100642bd8(plVar15,param_1 + 0xc84,1);
  FUN_100642bd8(plVar15,plVar20,1);
  FUN_10064f31c(plVar20,param_1 + 0xccb,1);
  FUN_10064f31c(plVar20,plVar21,1);
  FUN_100642bd8(plVar21,param_1 + 0xdab,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar22,1);
  FUN_100642bd8(plVar22,plVar23,1);
  FUN_100655930(plVar23,plVar24,1);
  FUN_100655930(plVar23,plVar25,1);
  FUN_100655930(plVar23,plVar26,1);
  FUN_100655930(plVar23,plVar27,1);
  FUN_100642bd8(plVar27,plVar28,1);
  FUN_100655930(plVar23,plVar30,1);
  FUN_100655930(plVar23,plVar12,1);
  FUN_100642bd8(plVar12,plVar11,1);
  FUN_100642bd8(plVar11,plVar32,1);
  FUN_100642bd8(plVar11,plVar31,1);
  FUN_100642bd8(plVar22,plVar29,1);
  FUN_100652cac(puVar38 + 0x1a,PTR_s_build___HUDPartsCommon_atlas_10184e098,
                "circle_button_fill_lefthalf");
  FUN_100652cac(param_1 + 0x38,PTR_s_build___HUDPartsCommon_atlas_10184e098,
                "generic_gradient_horizontal");
  *(uint *)((long)param_1 + 0x244) = *(uint *)((long)param_1 + 0x244) & 0xffffffbf;
  FUN_1000d301c(param_1,0);
  FUN_100652ca4(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  if ((*(float *)(param_1 + 0xa9) != 0.5) || (*(float *)((long)param_1 + 0x54c) != 0.5)) {
    param_1[0xa9] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  *(uint *)((long)param_1 + 0x57c) = *(uint *)((long)param_1 + 0x57c) & 0xfffffffb;
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  uVar40 = *(uint *)((long)param_1 + 0x48c);
  if ((uVar40 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x48c) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x2600;
    FUN_1000200a0(plVar2);
    uVar40 = *(uint *)((long)param_1 + 0x48c);
  }
  *(uint *)((long)param_1 + 0x48c) = uVar40 & 0xfffffffb;
  FUN_100652cac(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  uVar40 = *(uint *)((long)param_1 + 0x66c);
  if ((uVar40 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x66c) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x5900;
    FUN_1000200a0(plVar4);
  }
  if ((*(float *)(param_1 + 199) != 0.5) || (*(float *)((long)param_1 + 0x63c) != 0.5)) {
    param_1[199] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar4);
  }
  *(uint *)((long)param_1 + 0x66c) = *(uint *)((long)param_1 + 0x66c) & 0xfffffffb;
  FUN_100651038(plVar8,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_10065165c(plVar8,1);
  FUN_1004e3120(&pcStack_a8,"1");
  FUN_1006513c0(plVar8,&pcStack_a8);
  if (plStack_a0 != (void *)0x0) {
    operator_delete__(plStack_a0);
  }
  *(uint *)((long)param_1 + 0xd0c) = *(uint *)((long)param_1 + 0xd0c) & 0xffffffbf;
  FUN_100651038(plVar7,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  if ((*(float *)(param_1 + 0x175) != 0.0) || (*(float *)((long)param_1 + 0xbac) != 0.5)) {
    param_1[0x175] = 0x3f00000000000000;
    FUN_1000200a0(plVar7);
  }
  FUN_1004e3120(&pcStack_a8,"ASuperLongNameForThePurposesOfLayout");
  FUN_1006513c0(plVar7,&pcStack_a8);
  if (plStack_a0 != (void *)0x0) {
    operator_delete__(plStack_a0);
  }
  FUN_100652cac(param_1 + 0x14d,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  *(uint *)((long)param_1 + 0xaec) = *(uint *)((long)param_1 + 0xaec) & 0xfffffffb;
  FUN_100651038(plVar9,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1004e3120(&pcStack_a8,"00/00/00");
  FUN_1006513c0(plVar9,&pcStack_a8);
  if (plStack_a0 != (void *)0x0) {
    operator_delete__(plStack_a0);
  }
  uVar40 = *(uint *)((long)param_1 + 0x75c);
  if ((uVar40 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x75c) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar5);
  }
  if ((*(float *)(param_1 + 0xe5) != 0.5) || (*(float *)((long)param_1 + 0x72c) != 0.5)) {
    param_1[0xe5] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar5);
  }
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100651460(plVar5,&DAT_10115a168);
  FUN_1000e53fc(plVar10,&DAT_10115a168,&DAT_10114bf80);
  FUN_1000e53d0(0x3f266666,plVar10);
  FUN_1000e5368(plVar10,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1004e3120(&pcStack_a8,"19");
  FUN_1000e543c(plVar10,&pcStack_a8);
  if (plStack_a0 != (void *)0x0) {
    operator_delete__(plStack_a0);
  }
  iVar37 = FUN_10031615c(0x1d);
  pcVar33 = "hud_stats_bounty";
  if (iVar37 == 0) {
    pcVar33 = "hud_pingicon_action_minion";
  }
  FUN_1000e53c8(plVar13,pcVar33);
  FUN_1000e53d0(0x3f000000,plVar13);
  FUN_1000e5368(plVar13,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1004e3120(&pcStack_a8,"000");
  FUN_1000e543c(plVar13,&pcStack_a8);
  if (plStack_a0 != (void *)0x0) {
    operator_delete__(plStack_a0);
  }
  FUN_1000e53c8(plVar14,"hud_store_gold_icon_large");
  FUN_1000e53d0(0x3f000000,plVar14);
  FUN_1000e5368(plVar14,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1004e3120(&pcStack_a8,"00.0k");
  FUN_1000e543c(plVar14,&pcStack_a8);
  if (plStack_a0 != (void *)0x0) {
    operator_delete__(plStack_a0);
  }
  FUN_100652cac(param_1 + 0x101,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0,
                "icon_item_weapon_infusion");
  *(uint *)((long)param_1 + 0x88c) = *(uint *)((long)param_1 + 0x88c) & 0xfffffffb;
  FUN_100652cac(plVar17,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  uVar40 = *(uint *)((long)param_1 + 0x5fa4);
  if ((uVar40 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x5fa4) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x2600;
    FUN_1000200a0(plVar17);
  }
  FUN_100652cac(plVar19,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0,"icon_item_empty");
  FUN_100652dd4(plVar19,&DAT_10115a164,2);
  if ((*(uint *)((long)param_1 + 0x6274) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x6274) = *(uint *)((long)param_1 + 0x6274) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar19);
  }
  FUN_100652cac(plVar18,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar18,&DAT_10115a164,2);
  if ((*(uint *)((long)param_1 + 0x6184) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x6184) = *(uint *)((long)param_1 + 0x6184) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar18);
  }
  FUN_100652ca4(param_1 + 0xc84,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  uVar36 = DAT_101dbd484;
  uStack_80 = DAT_101dbd484;
  pcStack_a8 = FUN_1000d3090;
  plVar1 = param_1 + 0xca3;
  pcStack_90 = (code *)0x0;
  uStack_88 = 0;
  plStack_98 = (long *)0x0;
  plStack_a0 = param_1;
  FUN_10001554c(plVar1,&pcStack_a8);
  uStack_80 = DAT_101dbd494;
  pcStack_a8 = FUN_1000d30a8;
  pcStack_90 = (code *)0x0;
  uStack_88 = 0;
  plStack_98 = (long *)0x0;
  plStack_a0 = param_1;
  FUN_10001554c(plVar1,&pcStack_a8);
  uStack_80 = DAT_101dbd498;
  pcStack_a8 = FUN_1000d30c0;
  pcStack_90 = (code *)0x0;
  uStack_88 = 0;
  plStack_98 = (long *)0x0;
  plStack_a0 = param_1;
  FUN_10001554c(plVar1,&pcStack_a8);
  *(uint *)((long)param_1 + 0x6594) = *(uint *)((long)param_1 + 0x6594) & 0xfffffffb | 0x10;
  FUN_100651038(param_1 + 0xdab,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  *(uint *)((long)param_1 + 0x6ddc) = *(uint *)((long)param_1 + 0x6ddc) & 0xfffffffb;
  FUN_100652cac(plVar21,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  *(uint *)((long)param_1 + 0x6cec) = *(uint *)((long)param_1 + 0x6cec) & 0xfffffffb;
  FUN_100655990(plVar23,0);
  plVar1 = param_1 + 0xea7;
  FUN_100652cdc(plVar1,"hud_pingicon_action_thumbsup");
  FUN_100652e14(0,plVar1);
  uVar40 = *(uint *)((long)param_1 + 0x75bc);
  if ((uVar40 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x75bc) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x5900;
    FUN_1000200a0(plVar1);
  }
  uVar40 = *(uint *)((long)param_1 + 0x73dc);
  if ((uVar40 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x73dc) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x1980;
    FUN_1000200a0(param_1 + 0xe6b);
  }
  FUN_1001b495c(0,plVar24);
  FUN_100183c68(0x3f666666,plVar24,&DAT_10115a168);
  lVar41 = NEON_fmov(0xc1200000,4);
  param_1[0xe18] = lVar41;
  uVar35 = DAT_101d91884;
  uStack_80 = DAT_101d91884;
  pcStack_a8 = FUN_1000d30d8;
  pcStack_90 = (code *)0x0;
  uStack_88 = 0;
  plStack_98 = (long *)0x0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xe0e,&pcStack_a8);
  plVar1 = param_1 + 0xf65;
  FUN_100652cdc(plVar1,"hud_pingicon_action_thumbsup");
  FUN_100652e14(0,plVar1);
  uVar40 = *(uint *)((long)param_1 + 0x7bac);
  if ((uVar40 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x7bac) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x5900;
    FUN_1000200a0(plVar1);
  }
  *(byte *)(param_1 + 0xf80) = *(byte *)(param_1 + 0xf80) | 2;
  uVar40 = *(uint *)((long)param_1 + 0x79cc);
  if ((uVar40 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x79cc) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x1980;
    FUN_1000200a0(param_1 + 0xf29);
  }
  FUN_1001b495c(0,plVar25);
  FUN_100183c68(0x3f666666,plVar25,&DAT_10115a168);
  param_1[0xed6] = lVar41;
  uStack_80 = uVar35;
  pcStack_a8 = thunk_FUN_1000d72ec;
  pcStack_90 = (code *)0x0;
  uStack_88 = 0;
  plStack_98 = (long *)0x0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xecc,&pcStack_a8);
  FUN_100652cdc(param_1 + 0x1023,"hud_eom_add");
  uVar40 = *(uint *)((long)param_1 + 0x819c);
  if ((uVar40 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x819c) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x5900;
    FUN_1000200a0(param_1 + 0x1023);
  }
  uVar40 = *(uint *)((long)param_1 + 0x7fbc);
  if ((uVar40 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x7fbc) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x1980;
    FUN_1000200a0(param_1 + 0xfe7);
  }
  FUN_100183c68(0x3f19999a,plVar26,&DAT_10115a168);
  FUN_1001b495c(0,plVar26);
  FUN_100183c68(0x3f666666,plVar26,&DAT_10115a168);
  param_1[0xf94] = lVar41;
  uStack_80 = uVar35;
  pcStack_a8 = FUN_1000d310c;
  pcStack_90 = (code *)0x0;
  uStack_88 = 0;
  plStack_98 = (long *)0x0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xf8a,&pcStack_a8);
  FUN_100652cdc(param_1 + 0x10e1,"generic_chat_bubble_outline");
  uVar40 = *(uint *)((long)param_1 + 0x878c);
  if ((uVar40 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x878c) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x5900;
    FUN_1000200a0(param_1 + 0x10e1);
  }
  uVar40 = *(uint *)((long)param_1 + 0x85ac);
  if ((uVar40 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x85ac) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x1980;
    FUN_1000200a0(param_1 + 0x10a5);
  }
  FUN_1001b495c(0,plVar27);
  FUN_100183c68(0x3f666666,plVar27,&DAT_10115a168);
  param_1[0x1052] = lVar41;
  uStack_80 = uVar35;
  pcStack_a8 = thunk_FUN_1000d73a8;
  pcStack_90 = (code *)0x0;
  uStack_88 = 0;
  plStack_98 = (long *)0x0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x1048,&pcStack_a8);
  *(uint *)((long)param_1 + 0x82bc) = *(uint *)((long)param_1 + 0x82bc) & 0xfffffffb;
  FUN_100652cac(plVar28,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_slash_line");
  if ((*(float *)(param_1 + 0x110f) != 0.5) || (*(float *)((long)param_1 + 0x887c) != 0.5)) {
    param_1[0x110f] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar28);
  }
  *(uint *)((long)param_1 + 0x88ac) = *(uint *)((long)param_1 + 0x88ac) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x110e) != 1.25) || (*(float *)((long)param_1 + 0x8874) != 1.25)) {
    lVar41 = NEON_fmov(0x3fa00000,4);
    param_1[0x110e] = lVar41;
    FUN_1000200a0(plVar28);
  }
  FUN_100652dd4(plVar28,&DAT_10115a170,2);
  uVar40 = *(uint *)((long)param_1 + 0x88ac);
  uVar34 = *(uint *)((long)param_1 + 0x85ac) >> 7 & 0xff;
  if (uVar34 != (uVar40 >> 7 & 0xff)) {
    *(uint *)((long)param_1 + 0x88ac) = uVar40 & 0xffff8000 | uVar40 & 0x7f | uVar34 << 7;
    FUN_1000200a0(plVar28);
  }
  *(uint *)((long)param_1 + 0x8ad4) = *(uint *)((long)param_1 + 0x8ad4) & 0xffffffbb;
  FUN_1001bdb78(0x3f666666,plVar32,&DAT_10115a164);
  FUN_1001bdb04(0x3f800000,plVar32,&DAT_10115a168);
  FUN_100652cac(plVar31,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_bubble_side_arrow");
  if ((*(float *)(param_1 + 0x1193) != 1.1) || (*(float *)((long)param_1 + 0x8c9c) != 1.1)) {
    param_1[0x1193] = 0x3f8ccccd3f8ccccd;
    FUN_1000200a0(plVar31);
  }
  FUN_100652cac(plVar30,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar30,&DAT_10115a164,2);
  uVar40 = *(uint *)((long)param_1 + 0x8b5c);
  if ((uVar40 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x8b5c) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x3300;
    FUN_1000200a0(plVar30);
  }
  uVar35 = DAT_101dbd458;
  uStack_80 = DAT_101dbd458;
  pcStack_a8 = FUN_1000d3124;
  pcStack_90 = (code *)0x0;
  uStack_88 = 0;
  plStack_98 = (long *)0x0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x115c,&pcStack_a8);
  uStack_80 = uVar36;
  pcStack_a8 = FUN_1000d3124;
  pcStack_90 = (code *)0x0;
  uStack_88 = 0;
  plStack_98 = (long *)0x0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x115c,&pcStack_a8);
  *(uint *)((long)param_1 + 0x8b5c) = *(uint *)((long)param_1 + 0x8b5c) & 0xffffffab | 0x10;
  uVar39 = FUN_1004e0150("GAME_OVER_BLOCKLIST_NOTICE",0);
  FUN_1006513c0(plVar29,uVar39);
  FUN_100651038(plVar29,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  *(uint *)((long)param_1 + 0x89a4) = *(uint *)((long)param_1 + 0x89a4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x6f0c) = *(uint *)((long)param_1 + 0x6f0c) & 0xfffffffb;
  uStack_80 = FUN_100644a94("EVENT_SELECT_NEGATIVE_REPORT_ITEM");
  pcStack_a8 = FUN_1000d312c;
  pcStack_90 = (code *)0x0;
  uStack_88 = 0;
  plStack_98 = (long *)0x0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_a8);
  uStack_80 = uVar35;
  pcStack_a8 = thunk_FUN_1000d7268;
  pcStack_90 = (code *)0x0;
  uStack_88 = 0;
  plStack_98 = (long *)0x0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x1125,&pcStack_a8);
  uStack_80 = uVar36;
  pcStack_a8 = thunk_FUN_1000d7268;
  pcStack_90 = (code *)0x0;
  uStack_88 = 0;
  plStack_98 = (long *)0x0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x1125,&pcStack_a8);
  if ((*(uint *)((long)param_1 + 0x84) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffff807f | 0x1f80;
    FUN_1000200a0(param_1);
  }
  uVar39 = FUN_100316150();
  pcStack_a8 = (code *)0x0;
  pcStack_90 = thunk_FUN_1000d6b74;
  plStack_a0 = param_1;
  plStack_98 = param_1;
  FUN_10003c508(uVar39,&pcStack_a8);
  return param_1;
}




void FUN_1000d313c(undefined8 *param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_thunk_FUN_1000d313c_101456330;
  FUN_1000d3bbc();
  puVar1 = (uint *)FUN_100316150();
  if (*puVar1 != 0) {
    lVar2 = *(long *)(puVar1 + 2);
    lVar3 = (ulong)*puVar1 << 5;
    do {
      puVar4 = (undefined8 *)(lVar2 + 8);
      lVar2 = lVar2 + 0x20;
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_10003c608();
        break;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if ((void *)param_1[0x1241] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1241]);
    param_1[0x1241] = 0;
    param_1[0x1240] = 0;
  }
  if ((void *)param_1[0x123f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x123f]);
    param_1[0x123f] = 0;
    param_1[0x123e] = 0;
  }
  param_1[0x11a8] = &PTR_FUN_101464e50;
  param_1[0x1213] = &PTR_FUN_1014a6db0;
  param_1[0x122a] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x122d);
  FUN_10064e2bc(param_1 + 0x1213);
  param_1[0x11e9] = &PTR_FUN_1014a6db0;
  param_1[0x1200] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x1203);
  FUN_10064e2bc(param_1 + 0x11e9);
  param_1[0x11bf] = &PTR_FUN_1014a6db0;
  param_1[0x11d6] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x11d9);
  FUN_10064e2bc(param_1 + 0x11bf);
  FUN_10064e2bc(param_1 + 0x11a8);
  param_1[0x118a] = &PTR_FUN_1014a7108;
  param_1[0x11a1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x11a4);
  FUN_10064e2bc(param_1 + 0x118a);
  FUN_10064221c(param_1 + 0x1179);
  param_1[0x115b] = &PTR_FUN_1014a7108;
  param_1[0x1172] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1175);
  FUN_10064e2bc(param_1 + 0x115b);
  FUN_10064221c(param_1 + 0x114a);
  thunk_FUN_100651068(param_1 + 0x1124);
  param_1[0x1105] = &PTR_FUN_1014a7108;
  param_1[0x111c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x111f);
  FUN_10064e2bc(param_1 + 0x1105);
  param_1[0x1047] = &PTR_FUN_10145f300;
  param_1[0x10e1] = &PTR_FUN_1014a7108;
  param_1[0x10f8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x10fb);
  FUN_10064e2bc(param_1 + 0x10e1);
  param_1[0x10c3] = &PTR_FUN_1014a7108;
  param_1[0x10da] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x10dd);
  FUN_10064e2bc(param_1 + 0x10c3);
  param_1[0x10a5] = &PTR_FUN_1014a7108;
  param_1[0x10bc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x10bf);
  FUN_10064e2bc(param_1 + 0x10a5);
  FUN_10064221c(param_1 + 0x1094);
  FUN_10003bec8(param_1 + 0x1047);
  param_1[0xf89] = &PTR_FUN_10145f300;
  param_1[0x1023] = &PTR_FUN_1014a7108;
  param_1[0x103a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x103d);
  FUN_10064e2bc(param_1 + 0x1023);
  param_1[0x1005] = &PTR_FUN_1014a7108;
  param_1[0x101c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x101f);
  FUN_10064e2bc(param_1 + 0x1005);
  param_1[0xfe7] = &PTR_FUN_1014a7108;
  param_1[0xffe] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1001);
  FUN_10064e2bc(param_1 + 0xfe7);
  FUN_10064221c(param_1 + 0xfd6);
  FUN_10003bec8(param_1 + 0xf89);
  param_1[0xecb] = &PTR_FUN_10145f300;
  param_1[0xf65] = &PTR_FUN_1014a7108;
  param_1[0xf7c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf7f);
  FUN_10064e2bc(param_1 + 0xf65);
  param_1[0xf47] = &PTR_FUN_1014a7108;
  param_1[0xf5e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf61);
  FUN_10064e2bc(param_1 + 0xf47);
  param_1[0xf29] = &PTR_FUN_1014a7108;
  param_1[0xf40] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf43);
  FUN_10064e2bc(param_1 + 0xf29);
  FUN_10064221c(param_1 + 0xf18);
  FUN_10003bec8(param_1 + 0xecb);
  param_1[0xe0d] = &PTR_FUN_10145f300;
  param_1[0xea7] = &PTR_FUN_1014a7108;
  param_1[0xebe] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xec1);
  FUN_10064e2bc(param_1 + 0xea7);
  param_1[0xe89] = &PTR_FUN_1014a7108;
  param_1[0xea0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xea3);
  FUN_10064e2bc(param_1 + 0xe89);
  param_1[0xe6b] = &PTR_FUN_1014a7108;
  param_1[0xe82] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe85);
  FUN_10064e2bc(param_1 + 0xe6b);
  FUN_10064221c(param_1 + 0xe5a);
  FUN_10003bec8(param_1 + 0xe0d);
  param_1[0xde2] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0xdf9);
  FUN_10064e2bc(param_1 + 0xde2);
  FUN_10064221c(param_1 + 0xdd1);
  thunk_FUN_100651068(param_1 + 0xdab);
  param_1[0xd8d] = &PTR_FUN_1014a7108;
  param_1[0xda4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xda7);
  FUN_10064e2bc(param_1 + 0xd8d);
  param_1[0xccb] = &PTR_FUN_10148c628;
  param_1[0xd6e] = &PTR_FUN_1014a7108;
  param_1[0xd85] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd88);
  FUN_10064e2bc(param_1 + 0xd6e);
  param_1[0xd50] = &PTR_FUN_1014a7108;
  param_1[0xd67] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd6a);
  FUN_10064e2bc(param_1 + 0xd50);
  param_1[0xd32] = &PTR_FUN_1014a7108;
  param_1[0xd49] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd4c);
  FUN_10064e2bc(param_1 + 0xd32);
  param_1[0xd11] = &PTR_FUN_1014a77a8;
  param_1[0xd28] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0xd2f);
  param_1[0xd11] = &PTR_FUN_1014a7108;
  param_1[0xd28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd2b);
  FUN_10064e2bc(param_1 + 0xd11);
  param_1[0xcf3] = &PTR_FUN_1014a7108;
  param_1[0xd0a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd0d);
  FUN_10064e2bc(param_1 + 0xcf3);
  FUN_10064221c(param_1 + 0xce2);
  FUN_10064e2bc(param_1 + 0xccb);
  param_1[0xca2] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0xcb9);
  FUN_10064e2bc(param_1 + 0xca2);
  param_1[0xc84] = &PTR_FUN_1014a7108;
  param_1[0xc9b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc9e);
  FUN_10064e2bc(param_1 + 0xc84);
  thunk_FUN_100651068(param_1 + 0xc5e);
  param_1[0xc3e] = &PTR_FUN_1014a7108;
  param_1[0xc55] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc58);
  FUN_10064e2bc(param_1 + 0xc3e);
  param_1[0xc20] = &PTR_FUN_1014a7108;
  param_1[0xc37] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc3a);
  FUN_10064e2bc(param_1 + 0xc20);
  param_1[0xc02] = &PTR_FUN_1014a7108;
  param_1[0xc19] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc1c);
  FUN_10064e2bc(param_1 + 0xc02);
  param_1[0xbe4] = &PTR_FUN_1014a7108;
  param_1[0xbfb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xbfe);
  FUN_10064e2bc(param_1 + 0xbe4);
  param_1[0xbbb] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0xbd2);
  FUN_10064e2bc(param_1 + 0xbbb);
  lVar2 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar2 + 0x5ce8) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar2 + 0x5da0) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar2 + 0x5db8);
    FUN_10064e2bc((long)param_1 + lVar2 + 0x5ce8);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != -0x960);
  lVar2 = 0;
  do {
    thunk_FUN_100651068((long)param_1 + lVar2 + 0x5348);
    lVar2 = lVar2 + -0x130;
  } while (lVar2 != -0xbe0);
  lVar2 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar2 + 0x4798) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar2 + 0x4850) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar2 + 0x4868);
    FUN_10064e2bc((long)param_1 + lVar2 + 0x4798);
    lVar2 = lVar2 + -0x100;
  } while (lVar2 != -0xa00);
  lVar2 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar2 + 0x3da8) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar2 + 0x3e60) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar2 + 0x3e78);
    FUN_10064e2bc((long)param_1 + lVar2 + 0x3da8);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != -0x960);
  lVar2 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar2 + 0x3448) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar2 + 0x3500) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar2 + 0x3518);
    FUN_10064e2bc((long)param_1 + lVar2 + 0x3448);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != -0x960);
  puVar4 = param_1 + 0x552;
  lVar2 = -0xcd0;
  do {
    *puVar4 = &PTR_FUN_1014a5de8;
    FUN_10064221c(puVar4 + 0x17);
    FUN_10064e2bc(puVar4);
    puVar4 = puVar4 + -0x29;
    lVar2 = lVar2 + 0x148;
  } while (lVar2 != 0);
  param_1[0x3b6] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x3cd);
  FUN_10064e2bc(param_1 + 0x3b6);
  thunk_FUN_10064e2bc(param_1 + 0x39f);
  param_1[0x309] = &PTR_FUN_1014584a0;
  thunk_FUN_100651068(param_1 + 0x378);
  thunk_FUN_100651068(param_1 + 0x352);
  param_1[0x334] = &PTR_FUN_1014a7108;
  param_1[0x34b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x34e);
  FUN_10064e2bc(param_1 + 0x334);
  param_1[0x309] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 800);
  FUN_10064e2bc(param_1 + 0x309);
  param_1[0x273] = &PTR_FUN_1014584a0;
  thunk_FUN_100651068(param_1 + 0x2e2);
  thunk_FUN_100651068(param_1 + 700);
  param_1[0x29e] = &PTR_FUN_1014a7108;
  param_1[0x2b5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b8);
  FUN_10064e2bc(param_1 + 0x29e);
  param_1[0x273] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x28a);
  FUN_10064e2bc(param_1 + 0x273);
  param_1[0x1dd] = &PTR_FUN_1014584a0;
  thunk_FUN_100651068(param_1 + 0x24c);
  thunk_FUN_100651068(param_1 + 0x226);
  param_1[0x208] = &PTR_FUN_1014a7108;
  param_1[0x21f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x222);
  FUN_10064e2bc(param_1 + 0x208);
  param_1[0x1dd] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 500);
  FUN_10064e2bc(param_1 + 0x1dd);
  thunk_FUN_100651068(param_1 + 0x1b7);
  thunk_FUN_100651068(param_1 + 0x191);
  thunk_FUN_100651068(param_1 + 0x16b);
  param_1[0x14d] = &PTR_FUN_1014a7108;
  param_1[0x164] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x167);
  FUN_10064e2bc(param_1 + 0x14d);
  thunk_FUN_10064e2bc(param_1 + 0x136);
  thunk_FUN_10064e2bc(param_1 + 0x11f);
  param_1[0x101] = &PTR_FUN_1014a7108;
  param_1[0x118] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x11b);
  FUN_10064e2bc(param_1 + 0x101);
  thunk_FUN_100651068(param_1 + 0xdb);
  param_1[0xbd] = &PTR_FUN_1014a7108;
  param_1[0xd4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd7);
  FUN_10064e2bc(param_1 + 0xbd);
  param_1[0x9f] = &PTR_FUN_1014a7108;
  param_1[0xb6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb9);
  FUN_10064e2bc(param_1 + 0x9f);
  param_1[0x81] = &PTR_FUN_1014a7108;
  param_1[0x98] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9b);
  FUN_10064e2bc(param_1 + 0x81);
  param_1[0x56] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x6d);
  FUN_10064e2bc(param_1 + 0x56);
  param_1[0x38] = &PTR_FUN_1014a7108;
  param_1[0x4f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x52);
  FUN_10064e2bc(param_1 + 0x38);
  param_1[0x1a] = &PTR_FUN_1014a7108;
  param_1[0x31] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x34);
  FUN_10064e2bc(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000d3bbc(long param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  
  puVar1 = (uint *)(param_1 + 0x91f0);
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 0x91f8) + uVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        *(undefined8 *)(*(long *)(param_1 + 0x91f8) + uVar4 * 8) = 0;
        uVar3 = *puVar1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (*(long *)(param_1 + 0x91f8) != 0) {
    *puVar1 = 0;
  }
  return;
}




void thunk_FUN_1000d313c(void)

{
  FUN_1000d313c();
  return;
}




void FUN_1000d3c28(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000d313c();
  operator_delete(pvVar1);
  return;
}




void FUN_1000d3c3c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float local_88;
  float fStack_84;
  void *local_80;
  float local_78;
  float fStack_74;
  
  iVar9 = *(int *)((long)param_3 + 0x9214);
  (**(code **)(*param_3 + 0x48))();
  local_88 = param_2 + -24.0;
  param_2 = param_2 + -24.1054;
  plVar1 = param_3 + 0x81;
  fStack_84 = local_88;
  FUN_10064e48c(plVar1,&local_88);
  plVar2 = param_3 + 0x9f;
  local_88 = param_2;
  fStack_84 = param_2;
  FUN_10064e48c(plVar2,&local_88);
  plVar3 = param_3 + 0xbd;
  local_88 = param_2;
  fStack_84 = param_2;
  FUN_10064e48c(plVar3,&local_88);
  FUN_10064e5ec(0,0,plVar2,8,plVar1,8);
  FUN_10064e5ec(0,0,plVar3,8,plVar1,8);
  FUN_10064e5ec(0,0,param_3 + 0xdb,8,plVar3,8);
  fVar16 = 0.0;
  FUN_10064e5ec(0,0,plVar2,0,param_3 + 0x11f,0);
  if (((0.0 < param_2) && (0 < *(int *)((long)param_3 + 0x921c))) &&
     (*(char *)((long)param_3 + 0x9234) == '\0')) {
    FUN_1000d453c(param_3);
  }
  fVar15 = (float)FUN_100652e60(plVar2);
  fVar15 = fVar15 * 0.1;
  fVar16 = fVar16 * 0.1;
  if (iVar9 == 0) {
    FUN_10064e5ec(fVar15,-fVar16,param_3 + 0x191,8,plVar2,3);
    FUN_10064e47c(0x42800000,0x42800000,param_3 + 0x101);
    FUN_10064e5ec(fVar15,fVar16,param_3 + 0x101,8,plVar2,0);
    FUN_1006557ec(param_3 + 0x56);
    uVar14 = 0xc1c80000;
    uVar11 = 5;
    uVar13 = 5;
  }
  else {
    FUN_10064e5ec(-fVar15,-fVar16,param_3 + 0x191,8,plVar2,2);
    FUN_10064e47c(0x42800000,0x42800000,param_3 + 0x101);
    FUN_10064e5ec(-fVar15,fVar16,param_3 + 0x101,8,plVar2,1);
    FUN_1006557ec(param_3 + 0x56);
    uVar14 = 0x41c80000;
    uVar11 = 7;
    uVar13 = 7;
  }
  FUN_10064e5ec(uVar14,0,param_3 + 0x56,uVar11,param_3,uVar13);
  FUN_1000d47d0(param_3);
  FUN_1000d4dd4(param_3);
  fVar16 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar15 = (float)FUN_10064e3cc(param_3 + 0x56);
  fStack_74 = fVar16 + -86.0;
  fVar15 = fStack_74 - fVar15;
  plVar3 = param_3 + 0x16b;
  FUN_100651184(plVar3);
  plVar4 = param_3 + 0x136;
  local_78 = fVar15;
  FUN_10064e48c(plVar4,&local_78);
  if (((DAT_101dc6410 & 1) == 0) && (iVar10 = ___cxa_guard_acquire(&DAT_101dc6410), iVar10 != 0)) {
    FUN_1004e313c(&DAT_101dc6400);
    ___cxa_atexit(FUN_100046198,&DAT_101dc6400,0x100000000);
    ___cxa_guard_release(&DAT_101dc6410);
  }
  plVar7 = param_3 + 0x309;
  uVar11 = FUN_100655b6c(param_3 + 0x36c);
  FUN_1000153b4(&DAT_101dc6400,uVar11);
  FUN_1004e3120(&local_88,"99.9K");
  FUN_1000e543c(plVar7,&local_88);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  if (((DAT_101dc6428 & 1) == 0) && (iVar10 = ___cxa_guard_acquire(&DAT_101dc6428), iVar10 != 0)) {
    FUN_1004e313c(&DAT_101dc6418);
    ___cxa_atexit(FUN_100046198,&DAT_101dc6418,0x100000000);
    ___cxa_guard_release(&DAT_101dc6428);
  }
  iVar10 = FUN_10031615c(0x1d);
  if (iVar10 == 0) {
    pcVar12 = "%d";
  }
  else {
    pcVar12 = "%.0f";
  }
  FUN_1004e38ac(param_3 + 0x1240,pcVar12);
  FUN_1000153b4(&DAT_101dc6418,param_3 + 0x1240);
  plVar8 = param_3 + 0x273;
  FUN_1004e3120(&local_88,"999");
  FUN_1000e543c(plVar8,&local_88);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  if (((DAT_101dc6440 & 1) == 0) && (iVar10 = ___cxa_guard_acquire(&DAT_101dc6440), iVar10 != 0)) {
    FUN_1004e313c(&DAT_101dc6430);
    ___cxa_atexit(FUN_100046198,&DAT_101dc6430,0x100000000);
    ___cxa_guard_release(&DAT_101dc6440);
  }
  plVar5 = param_3 + 0x1b7;
  uVar11 = FUN_100655b6c(param_3 + 0x1d1);
  FUN_1000153b4(&DAT_101dc6430,uVar11);
  FUN_1004e3120(&local_88,"99/99/99");
  FUN_1006513c0(plVar5,&local_88);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  if (((DAT_101dc6458 & 1) == 0) && (iVar10 = ___cxa_guard_acquire(&DAT_101dc6458), iVar10 != 0)) {
    FUN_1004e313c(&DAT_101dc6448);
    ___cxa_atexit(FUN_100046198,&DAT_101dc6448,0x100000000);
    ___cxa_guard_release(&DAT_101dc6458);
  }
  plVar6 = param_3 + 0x1dd;
  uVar11 = FUN_100655b6c(param_3 + 0x240);
  FUN_1000153b4(&DAT_101dc6448,uVar11);
  FUN_1004e3120(&local_88,"19");
  FUN_1000e543c(plVar6,&local_88);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  *(undefined4 *)(param_3 + 0x272) = 0x40c00000;
  *(undefined4 *)(param_3 + 0x39e) = 0x40c00000;
  *(undefined4 *)(param_3 + 0x308) = 0x40c00000;
  FUN_1000e52ec(plVar6);
  FUN_1000e52ec(plVar7);
  FUN_1000e52ec(plVar8);
  FUN_10064e5ec(0,0,plVar8,5,plVar4,5);
  FUN_10064e5ec(0xc3808000,0,plVar7,7,plVar8,7);
  FUN_10064e5ec(0xc3808000,0,plVar5,7,plVar7,7);
  FUN_10064e5ec(0,0,plVar6,7,plVar5,5);
  FUN_10064e5ec(0x41a00000,0,plVar3,7,plVar4,7);
  FUN_10064e5ec(0,0,param_3 + 0x14d,8,plVar3,8);
  fVar16 = (float)FUN_10064eb7c(plVar3,7,plVar5,7);
  FUN_10065179c(fVar16 + -20.0,0,0x3f800000,plVar3);
  fVar16 = (float)FUN_10064259c(plVar3);
  FUN_10064e47c(fVar16 + 8.0,0x40800000,param_3 + 0x14d);
  FUN_1000e543c(plVar7,&DAT_101dc6400);
  FUN_1000e543c(plVar8,&DAT_101dc6418);
  FUN_1006513c0(plVar5,&DAT_101dc6430);
  FUN_1000e543c(plVar6,&DAT_101dc6448);
  plVar3 = param_3 + 0x56;
  if (iVar9 == 0) {
    FUN_10064e72c(0xc1800000,plVar4,1,plVar3,3);
    FUN_10064e72c(0xc1200000,plVar4,0,plVar3,0);
    FUN_10064e72c(0xc1800000,param_3 + 0x39f,1,plVar3,3);
    FUN_10064e72c(0,param_3 + 0x39f,2,plVar3,2);
    FUN_10064e72c(0xc1800000,param_3 + 0xde2,1,plVar3,3);
    uVar13 = 5;
    uVar14 = 0x41400000;
    uVar11 = 7;
  }
  else {
    FUN_10064e72c(0x41800000,plVar4,3,plVar3,1);
    FUN_10064e72c(0xc1200000,plVar4,0,plVar3,0);
    FUN_10064e72c(0x41800000,param_3 + 0x39f,3,plVar3,1);
    FUN_10064e72c(0,param_3 + 0x39f,2,plVar3,2);
    FUN_10064e72c(0x41800000,param_3 + 0xde2,3,plVar3,1);
    uVar13 = 7;
    uVar14 = 0xc1400000;
    uVar11 = 5;
  }
  FUN_10064e72c(0,param_3 + 0xde2,2,plVar3,2);
  plVar3 = param_3 + 0x1a;
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10064e47c(0x42f30000,plVar3);
  FUN_10064e5ec(uVar14,0,plVar3,uVar13,plVar1,uVar13);
  fVar16 = (float)FUN_10064eb7c(plVar2,8,param_3,uVar11);
  plVar1 = param_3 + 0x38;
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10064e47c(ABS(fVar16) + 180.0,plVar1);
  if (iVar9 == 0) {
    uVar14 = 0x80000000;
    uVar11 = 1;
    uVar13 = 3;
  }
  else {
    uVar14 = 0;
    uVar11 = 3;
    uVar13 = 1;
  }
  FUN_10064e72c(uVar14,plVar1,uVar11,plVar3,uVar13);
  FUN_10064e72c(0,plVar1,5,plVar3,5);
  return;
}




void FUN_1000d453c(long param_1,uint param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_98;
  undefined8 local_90;
  void *local_88;
  
  fVar6 = (float)FUN_100652e60(param_1 + 0x4f8);
  fVar6 = fVar6 * 0.5;
  local_90 = 0;
  local_88 = (void *)0x0;
  if ((param_2 & 1) == 0) {
    fVar8 = fVar6 - SQRT(fVar6 * fVar6 + -2025.0);
    local_98 = CONCAT44(fVar8,fVar6 + -60.0);
    FUN_1000d60cc(&local_90,&local_98);
    fVar7 = fVar6 - SQRT(fVar6 * fVar6 + -225.0);
    local_98 = CONCAT44(fVar7,fVar6 + -30.0);
    FUN_1000d60cc(&local_90,&local_98);
    local_98 = CONCAT44(fVar7,fVar6);
    FUN_1000d60cc(&local_90,&local_98);
    local_98 = CONCAT44(fVar8,fVar6 + 30.0);
  }
  else {
    fVar8 = (fVar6 - SQRT(fVar6 * fVar6 + -3600.0)) + -15.0;
    local_98 = CONCAT44(fVar8,fVar6 + -75.0);
    FUN_1000d60cc(&local_90,&local_98);
    fVar7 = (fVar6 - SQRT(fVar6 * fVar6 + -900.0)) + -15.0;
    local_98 = CONCAT44(fVar7,fVar6 + -45.0);
    FUN_1000d60cc(&local_90,&local_98);
    local_98 = CONCAT44(0xc1700000,fVar6 + -15.0);
    FUN_1000d60cc(&local_90,&local_98);
    local_98 = CONCAT44(fVar7,fVar6 + 15.0);
    FUN_1000d60cc(&local_90,&local_98);
    local_98 = CONCAT44(fVar8,fVar6 + 45.0);
  }
  FUN_1000d60cc(&local_90,&local_98);
  if (param_2 - 1 < 3) {
    uVar3 = *(uint *)(&DAT_10114bf90 + (long)(int)(param_2 - 1) * 4);
  }
  else {
    if ((int)param_2 < 1) goto LAB_1000d4790;
    uVar3 = 0;
  }
  lVar4 = (ulong)uVar3 << 3;
  lVar5 = (ulong)(uVar3 + param_2) - (ulong)uVar3;
  do {
    lVar2 = FUN_100088a94(param_1 + 0x8f8,1);
    FUN_100652cac(lVar2,PTR_s_build___InventoryCommon_atlas_10184e108,"16x16_hero_mastery_star");
    FUN_10064e47c(0x41f00000,0x41f00000,lVar2);
    fVar6 = ((float *)((long)local_88 + lVar4))[1];
    bVar1 = false;
    if ((*(float *)(lVar2 + 0x40) == *(float *)((long)local_88 + lVar4)) &&
       (bVar1 = false, !NAN(*(float *)(lVar2 + 0x44)) && !NAN(fVar6))) {
      bVar1 = *(float *)(lVar2 + 0x44) == fVar6;
    }
    if (!bVar1) {
      *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)((long)local_88 + lVar4);
      FUN_1000200a0(lVar2);
    }
    local_98 = lVar2;
    FUN_100047df4(param_1 + 0xc0,&local_98);
    lVar4 = lVar4 + 8;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
LAB_1000d4790:
  *(undefined1 *)(param_1 + 0x9234) = 1;
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  return;
}




void FUN_1000d47d0(long param_1)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  long *plVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 *local_88;
  
  iVar6 = *(int *)(param_1 + 0x9214);
  if (*(int *)(param_1 + 0x9218) != 0) {
    uVar20 = 0;
    lVar11 = 0x1f08;
    lVar14 = 0x2bd8;
    lVar16 = 0x3538;
    lVar17 = 0x5478;
    lVar12 = 0x3e98;
    lVar19 = 0x4898;
    lVar18 = 0x3ee4;
    lVar13 = 0x54fc;
    lVar15 = 0x1dc0;
    do {
      lVar1 = param_1 + lVar11;
      FUN_10064e47c(0x42f39ce7,0x42f39ce7,lVar1);
      FUN_10064e47c(0x42f39ce7,0x42f39ce7);
      lVar2 = param_1 + lVar16;
      FUN_10064e47c(0x42f39ce7,0x42f39ce7,lVar2);
      FUN_10064e47c(0x42fb642c,0x42fb642c);
      fVar21 = (float)FUN_1006531b0(lVar2);
      fVar21 = 121.80645 / fVar21;
      pfVar3 = (float *)(param_1 + lVar18);
      bVar7 = false;
      if ((pfVar3[-1] == fVar21) && (bVar7 = false, !NAN(*pfVar3) && !NAN(fVar21))) {
        bVar7 = *pfVar3 == fVar21;
      }
      if (!bVar7) {
        pfVar3[-1] = fVar21;
        *(float *)(param_1 + lVar18) = fVar21;
        FUN_1000200a0(param_1 + lVar12);
      }
      plVar4 = (long *)(param_1 + lVar19);
      local_88 = &DAT_3f0000003f000000;
      (**(code **)(*plVar4 + 0x28))(plVar4,&local_88);
      FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
      FUN_10064e5ec(0,0,param_1 + lVar12,8,lVar1,8);
      FUN_10064e5ec(0,0,lVar2,8,lVar1,8);
      FUN_10064e5ec(0,0,plVar4,8,lVar1,8);
      FUN_10064e5ec(0,0,param_1 + lVar14,8,lVar1,8);
      FUN_10064e5ec(0,0,param_1 + lVar17,8,lVar1,8);
      *(uint *)(param_1 + lVar13) = *(uint *)(param_1 + lVar13) & 0xffffffbf;
      if (uVar20 != 0) {
        FUN_10064e5ec(0x43000000,0,lVar1,8,param_1 + lVar15,8);
      }
      uVar20 = uVar20 + 1;
      lVar11 = lVar11 + 0x148;
      lVar14 = lVar14 + 0xf0;
      lVar16 = lVar16 + 0xf0;
      lVar17 = lVar17 + 0xf0;
      lVar12 = lVar12 + 0x100;
      lVar19 = lVar19 + 0x130;
      lVar18 = lVar18 + 0x100;
      lVar13 = lVar13 + 0xf0;
      lVar15 = lVar15 + 0x148;
    } while (uVar20 < *(uint *)(param_1 + 0x9218));
  }
  lVar11 = param_1 + 0x1db0;
  FUN_1006557ec(lVar11);
  lVar14 = param_1 + 0x5dd8;
  FUN_10064e47c(0x42b20000,0x42b20000,lVar14);
  lVar16 = param_1 + 0x5f20;
  FUN_10064e47c(0x42b20000,0x42b20000,lVar16);
  FUN_10064e47c(0x42a20000,0x42a20000,param_1 + 0x6010);
  FUN_10064e47c(0x42a20000,0x42a20000,param_1 + 0x6100);
  lVar17 = param_1 + 0x61f0;
  fVar21 = (float)FUN_1006531b0(lVar17);
  fVar21 = 81.0 / fVar21;
  bVar7 = false;
  if ((*(float *)(param_1 + 0x6238) == fVar21) &&
     (bVar7 = false, !NAN(*(float *)(param_1 + 0x623c)) && !NAN(fVar21))) {
    bVar7 = *(float *)(param_1 + 0x623c) == fVar21;
  }
  if (!bVar7) {
    *(float *)(param_1 + 0x6238) = fVar21;
    *(float *)(param_1 + 0x623c) = fVar21;
    FUN_1000200a0(lVar17);
  }
  lVar12 = param_1 + 0x62f0;
  local_88 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x62f0) + 0x28))(lVar12,&local_88);
  FUN_100651038(lVar12,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_10064e5ec(0,0,lVar16,8,lVar14,8);
  FUN_10064e5ec(0,0,param_1 + 0x6010,8,lVar14,8);
  FUN_10064e5ec(0,0,param_1 + 0x6100,8,lVar14,8);
  FUN_10064e5ec(0,0,lVar17,8,lVar14,8);
  FUN_10064e5ec(0,0,lVar12,8,lVar14,8);
  if (*(char *)(param_1 + 0x922f) != '\0') {
    lVar17 = param_1 + 0x6510;
    FUN_10064e47c(0x42fa0000,0x42fa0000,lVar17);
    FUN_10064f308(0x3f000000,0x3f000000,lVar17);
    FUN_1002f8928(0x432a745d,0x432a745d,param_1 + 0x6658);
    lVar12 = param_1 + 0x6c68;
    FUN_10064e47c(0x422c0000,0x422c0000,lVar12);
    fVar21 = (float)FUN_10064e3cc(lVar17);
    FUN_10064e5ec(0,0,param_1 + 0x6658,8,lVar17,8);
    uVar10 = 2;
    if (iVar6 == 0) {
      uVar10 = 3;
    }
    fVar22 = fVar21 * 0.12;
    if (iVar6 != 0) {
      fVar22 = -(fVar21 * 0.12);
    }
    FUN_10064e5ec(fVar22,lVar12,8,lVar17,uVar10);
    FUN_10064e5ec(0,0,param_1 + 0x6d58,8,lVar12,8);
  }
  fVar21 = (float)FUN_10064e3cc(lVar11);
  fVar22 = (float)FUN_10064e3cc(lVar14);
  fVar23 = (float)FUN_10064e3cc(param_1 + 0x6510);
  fVar24 = (float)FUN_100652e60(param_1 + 0x6420);
  FUN_10064e3cc(lVar11);
  FUN_10064e47c(fVar21 + 66.0 + fVar22 + fVar23 + fVar24,param_1 + 0x1cf8);
  pcVar5 = FUN_1000d50d8;
  if (iVar6 == 0) {
    uVar8 = 5;
    uVar9 = 5;
  }
  else {
    pcVar5 = FUN_1000d5154;
    uVar8 = 7;
    uVar9 = 7;
  }
  FUN_10064e5ec(0,0,lVar11,uVar8,param_1 + 0x1cf8,uVar9);
  (*pcVar5)(0x41b00000,0,lVar14,lVar11,5);
  (*pcVar5)(0x41b00000,0,param_1 + 0x6510,lVar16,5);
  (*pcVar5)(0x41b00000,0,param_1 + 0x6420,lVar16,5);
  return;
}




void FUN_1000d4dd4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_78;
  
  lVar4 = param_1 + 0x7068;
  fVar6 = (float)FUN_100652e60(param_1 + 0x7358);
  FUN_100183c78(120.0 / fVar6,(120.0 / fVar6) * 1.5,lVar4);
  local_78 = 0x4240000042400000;
  FUN_10064e48c(param_1 + 0x7538,&local_78);
  lVar1 = param_1 + 0x7658;
  fVar6 = (float)FUN_100652e60(param_1 + 0x7948);
  FUN_100183c78(120.0 / fVar6,(120.0 / fVar6) * 1.5,lVar1);
  local_78 = 0x4240000042400000;
  FUN_10064e48c(param_1 + 0x7b28,&local_78);
  if (*(float *)(param_1 + 0x7b6c) != 10.0) {
    *(undefined4 *)(param_1 + 0x7b6c) = 0x41200000;
    FUN_1000200a0(param_1 + 0x7b28);
  }
  lVar2 = param_1 + 0x7c48;
  fVar6 = (float)FUN_100652e60(param_1 + 0x7f38);
  FUN_100183c78(120.0 / fVar6,(120.0 / fVar6) * 1.5,lVar2);
  fVar6 = (float)FUN_100652e60(param_1 + 0x8118);
  fVar6 = 56.0 / fVar6;
  if ((*(float *)(param_1 + 0x8160) != fVar6) || (*(float *)(param_1 + 0x8164) != fVar6)) {
    *(float *)(param_1 + 0x8160) = fVar6;
    *(float *)(param_1 + 0x8164) = fVar6;
    FUN_1000200a0(param_1 + 0x8118);
  }
  lVar3 = param_1 + 0x8238;
  fVar6 = (float)FUN_100652e60(param_1 + 0x8528);
  fVar6 = (120.0 / fVar6) * 1.5;
  FUN_100183c78(lVar3);
  FUN_10064e72c(0x41700000,lVar1,3,lVar4,1);
  FUN_10064e72c(0,lVar1,5,lVar4,5);
  FUN_10064e72c(0x41700000,lVar2,3,lVar1,1);
  FUN_10064e72c(0,lVar2,5,lVar1,5);
  FUN_10064e72c(0x41700000,lVar3,3,lVar2,1);
  FUN_10064e72c(0,lVar3,5,lVar2,5);
  lVar4 = *(long *)(param_1 + 0x8918);
  if (lVar4 != 0) {
    uVar7 = FUN_10064e3cc(lVar3);
    local_78 = CONCAT44(fVar6,uVar7);
    FUN_10064e48c(lVar4,&local_78);
    plVar5 = *(long **)(param_1 + 0x8918);
    if (*(int *)(param_1 + 0x9214) == 0) {
      fVar9 = *(float *)(param_1 + 0x8278);
      fVar10 = *(float *)(param_1 + 0x827c);
    }
    else {
      fVar9 = *(float *)(param_1 + 0x70a8);
      fVar10 = *(float *)(param_1 + 0x70ac);
    }
    fVar8 = (float)(**(code **)(*plVar5 + 0x48))(plVar5);
    fVar9 = fVar9 - fVar8 * 0.5;
    fVar10 = fVar10 - fVar6 * 0.5;
    if ((*(float *)(plVar5 + 8) != fVar9) || (*(float *)((long)plVar5 + 0x44) != fVar10)) {
      *(float *)(plVar5 + 8) = fVar9;
      *(float *)((long)plVar5 + 0x44) = fVar10;
      FUN_1000200a0(plVar5);
    }
  }
  FUN_1006557ec(param_1 + 0x6f10);
  FUN_10064e3cc(param_1 + 0x9b0);
  FUN_100651708(param_1 + 0x8920,1);
  uVar7 = 5;
  if (*(int *)(param_1 + 0x9214) != 0) {
    uVar7 = 7;
  }
  FUN_10064e5ec(0,0,param_1 + 0x8920,uVar7,param_1 + 0x6f10,uVar7);
  return;
}




void FUN_1000d50d8(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10064e72c(-param_1,param_3,1,param_4,3);
  if ((int)param_5 == 6) {
    return;
  }
  FUN_10064e72c(param_2,param_3,param_5,param_4,param_5);
  return;
}




void FUN_1000d5154(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10064e72c(param_3,3,param_4,1);
  if ((int)param_5 == 6) {
    return;
  }
  FUN_10064e72c(param_2,param_3,param_5,param_4,param_5);
  return;
}




void FUN_1000d51cc(undefined1 param_1 [16],float param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 local_78;
  float fStack_74;
  float local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  plVar1 = (long *)(param_3 + 0x8d40);
  lVar2 = param_3 + 0x8a50;
  fVar7 = (float)FUN_1006425d0(lVar2,0,0,1,1);
  fVar10 = fVar7 + 40.0;
  FUN_10064e47c(fVar10,plVar1);
  fVar8 = fVar10 * 0.5 + -20.0;
  param_2 = param_2 * 0.5;
  bVar3 = false;
  if ((*(float *)(param_3 + 0x8d80) == fVar8) &&
     (bVar3 = false, !NAN(*(float *)(param_3 + 0x8d84)) && !NAN(param_2))) {
    bVar3 = *(float *)(param_3 + 0x8d84) == param_2;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0x8d80) = fVar8;
    *(float *)(param_3 + 0x8d84) = param_2;
    FUN_1000200a0(plVar1);
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_68);
  uVar4 = (ulong)*(uint *)(param_3 + 0x91f0);
  if (*(uint *)(param_3 + 0x91f0) != 0) {
    uVar6 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_3 + 0x91f8) + uVar6 * 8);
      if (lVar5 != 0) {
        FUN_10064e3cc(plVar1);
        param_2 = 20.0;
        FUN_1000d1b70(lVar5);
        uVar4 = (ulong)*(uint *)(param_3 + 0x91f0);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  if (*(char *)(param_3 + 0x9210) == '\x01') {
    fVar7 = (float)FUN_10065317c(param_3 + 0x8c50);
    fVar7 = fVar7 + 15.0;
    *(byte *)(param_3 + 0x8d28) = *(byte *)(param_3 + 0x8d28) | 1;
    fVar8 = (float)FUN_10065317c(param_3 + 0x8c50);
    param_2 = fVar10 * -0.5 + 5.0;
    fVar8 = param_2 - fVar8;
  }
  else {
    fVar7 = -35.0 - fVar7;
    *(byte *)(param_3 + 0x8d28) = *(byte *)(param_3 + 0x8d28) & 0xfe;
    fVar8 = fVar10 * 0.5 + -5.0;
  }
  FUN_100641464(&uStack_6c,&local_70);
  fVar10 = (float)FUN_1000d5468(param_3);
  bVar3 = false;
  if ((*(float *)(param_3 + 0x8a90) == fVar10 + fVar7) &&
     (bVar3 = false, !NAN(*(float *)(param_3 + 0x8a94)) && !NAN(param_2))) {
    bVar3 = *(float *)(param_3 + 0x8a94) == param_2;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0x8a90) = fVar10 + fVar7;
    *(float *)(param_3 + 0x8a94) = param_2;
    FUN_1000200a0(lVar2);
  }
  local_78 = FUN_10064e3cc(plVar1);
  fStack_74 = param_2;
  uVar9 = FUN_10064ef9c(&local_78,plVar1);
  local_68 = (undefined1 *)CONCAT44(param_2,uVar9);
  FUN_10064f05c(&local_68);
  if (local_70 < param_2) {
    fVar7 = *(float *)(param_3 + 0x8a94);
    FUN_10064e3cc(plVar1);
    fVar7 = fVar7 + param_2 * -0.8;
    if (*(float *)(param_3 + 0x8a94) != fVar7) {
      *(float *)(param_3 + 0x8a94) = fVar7;
      FUN_1000200a0(lVar2);
    }
  }
  fVar8 = *(float *)(param_3 + 0x8d80) + fVar8;
  if (*(float *)(param_3 + 0x8c90) != fVar8) {
    *(float *)(param_3 + 0x8c90) = fVar8;
    FUN_1000200a0(param_3 + 0x8c50);
  }
  FUN_10064e72c(0,param_3 + 0x8c50,5,param_3 + 0x7658,5);
  FUN_10064e47c(uStack_6c,local_70,param_3 + 0x8ad8);
  FUN_10064e5ec(0,0,param_3 + 0x8ad8,8,*(undefined8 *)(param_3 + 0x20),8);
  return;
}




float FUN_1000d5468(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x7698);
  fVar2 = (float)FUN_10064e3cc(param_1 + 0x7658);
  fVar1 = fVar2 * 0.5;
  if (*(char *)(param_1 + 0x9210) != '\x01') {
    fVar1 = -(fVar2 * 0.5);
  }
  FUN_10064e3cc(param_1 + 0x7658);
  return fVar1 + fVar3;
}




void FUN_1000d54e0(long param_1,int param_2,undefined1 param_3,int param_4)

{
  bool bVar1;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  *(int *)(param_1 + 0x9214) = param_2;
  *(undefined1 *)(param_1 + 0x9210) = param_3;
  *(byte *)(param_1 + 0x1a8) = *(byte *)(param_1 + 0x1a8) & 0xfe | param_2 == 0;
  *(byte *)(param_1 + 0x298) = *(byte *)(param_1 + 0x298) & 0xfe | param_2 == 0;
  bVar1 = param_4 == 0;
  uStack_34 = 0xff90b3ef;
  if (bVar1) {
    uStack_34 = 0xffbc9c44;
  }
  local_38 = 0xff728ebe;
  if (bVar1) {
    local_38 = 0xffbbae56;
  }
  local_3c = 0xff19459d;
  if (bVar1) {
    local_3c = 0xff8b7b01;
  }
  FUN_100651460(param_1 + 0xc88,&uStack_34);
  FUN_100651460(param_1 + 0xb58,&uStack_34);
  *(uint *)(param_1 + 0x48c) = *(uint *)(param_1 + 0x48c) | 4;
  FUN_100652dd4(param_1 + 0x408,&local_38,2);
  FUN_1000e53fc(param_1 + 0x1848,&local_38,&local_38);
  FUN_100651460(param_1 + 0xdb8,&local_38);
  FUN_1000e53fc(param_1 + 0x1398,&local_38,&local_38);
  FUN_100652dd4(param_1 + 0x5f20,&local_38,2);
  FUN_100652dd4(param_1 + 0xd0,&local_3c,2);
  FUN_100652dd4(param_1 + 0x1c0,&local_3c,2);
  FUN_100652d8c(param_1 + 0x6010);
  return;
}




void FUN_1000d563c(float param_1,long param_2,uint param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint *puVar17;
  code *local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined4 local_78;
  
  plVar1 = (long *)(param_2 + (long)(int)param_3 * 0x148 + 0x1f08);
  uVar11 = FUN_100642d08(plVar1);
  if ((uVar11 & 1) == 0) {
    lVar16 = (long)(int)param_3;
    FUN_100655930(param_2 + 0x1db0,plVar1,1);
    lVar14 = param_2 + lVar16 * 0xf0;
    lVar2 = lVar14 + 0x2bd8;
    (**(code **)(*plVar1 + 0x78))(plVar1,lVar2,1);
    plVar3 = (long *)(lVar14 + 0x3538);
    (**(code **)(*plVar1 + 0x78))(plVar1,plVar3,1);
    lVar4 = param_2 + lVar16 * 0x100;
    lVar5 = lVar4 + 0x3e98;
    (**(code **)(*plVar1 + 0x78))(plVar1,lVar5,1);
    lVar13 = param_2 + lVar16 * 0x130;
    plVar6 = (long *)(lVar13 + 0x4898);
    (**(code **)(*plVar1 + 0x78))(plVar1,plVar6,1);
    plVar7 = (long *)(lVar14 + 0x5478);
    (**(code **)(*plVar1 + 0x78))(plVar1,plVar7,1);
    local_a0 = (code *)&DAT_3f0000003f000000;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_a0);
    FUN_10064e47c(param_1 * 98.0,param_1 * 98.0,plVar1);
    uVar11 = (ulong)param_3;
    local_78 = DAT_101dbd484;
    local_a0 = FUN_1000d5ab8;
    local_90 = 0;
    uStack_88 = 0;
    lVar15 = param_2 + lVar16 * 0x148;
    lVar8 = lVar15 + 0x1f10;
    lStack_98 = param_2;
    local_80 = uVar11;
    FUN_10001554c(lVar8,&local_a0);
    local_78 = DAT_101dbd494;
    local_a0 = FUN_1000d5b00;
    local_90 = 0;
    uStack_88 = 0;
    lStack_98 = param_2;
    local_80 = uVar11;
    FUN_10001554c(lVar8,&local_a0);
    local_78 = DAT_101dbd498;
    local_a0 = FUN_1000d5b48;
    local_90 = 0;
    uStack_88 = 0;
    lStack_98 = param_2;
    local_80 = uVar11;
    FUN_10001554c(lVar8,&local_a0);
    *(uint *)(lVar15 + 0x1f8c) = *(uint *)(lVar15 + 0x1f8c) | 0x10;
    *(uint *)(lVar14 + 0x2c5c) = *(uint *)(lVar14 + 0x2c5c) & 0xffffffbf;
    puVar9 = (uint *)(lVar13 + 0x491c);
    *puVar9 = *puVar9 & 0xffffffbf;
    puVar17 = (uint *)(lVar4 + 0x3f1c);
    *puVar17 = *puVar17 & 0xffffffbf;
    puVar10 = (uint *)(lVar14 + 0x35bc);
    *(uint *)(lVar14 + 0x35bc) = *(uint *)(lVar14 + 0x35bc) & 0xffffffbf;
    FUN_100652ca4(lVar2,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
    local_a0 = (code *)&DAT_3f0000003f000000;
    (**(code **)(*(long *)(lVar14 + 0x2bd8) + 0x28))(lVar2,&local_a0);
    FUN_100652ca4(lVar5,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
    FUN_100653464(lVar5,FUN_1000d5b90,param_4);
    FUN_100652cdc(lVar5,"icon_item_empty");
    local_a0 = (code *)&DAT_3f0000003f000000;
    (**(code **)(*(long *)(lVar4 + 0x3e98) + 0x28))(lVar5,&local_a0);
    uVar12 = *puVar17;
    if ((uVar12 & 0x7f80) != 0x3f80) {
      *puVar17 = uVar12 & 0xffff807f | 0x3f80;
      FUN_1000200a0(lVar5);
      uVar12 = *puVar17;
    }
    *puVar17 = uVar12 & 0xfffffffb;
    FUN_100652ca4(plVar3,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
    FUN_100652cdc(plVar3,"icon_item_empty");
    local_a0 = (code *)&DAT_3f0000003f000000;
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_a0);
    uVar12 = *puVar10;
    if ((uVar12 & 0x7f80) != 0x3f80) {
      *puVar10 = uVar12 & 0xffff807f | 0x3f80;
      FUN_1000200a0(plVar3);
      uVar12 = *puVar10;
    }
    *puVar10 = uVar12 & 0xfffffffb;
    local_a0 = (code *)&DAT_3f0000003f000000;
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_a0);
    *puVar9 = *puVar9 | 4;
    FUN_100651700(plVar6,0);
    local_a0 = (code *)&DAT_3f0000003f000000;
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_a0);
    uVar12 = *puVar9;
    if ((uVar12 & 0x7f80) != 0x7280) {
      *puVar9 = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x7280;
      FUN_1000200a0(plVar6);
    }
    FUN_100652ca4(plVar7,PTR_s_build___HUDPartsCommon_atlas_10184e098);
    FUN_100652cdc(plVar7,"hud_store_inventory_tray");
    local_a0 = (code *)&DAT_3f0000003f000000;
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_a0);
    puVar9 = (uint *)(param_2 + lVar16 * 0xf0 + 0x54fc);
    uVar12 = *puVar9;
    if ((uVar12 & 0x7f80) != 0x3300) {
      *puVar9 = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x3300;
      FUN_1000200a0(plVar7);
    }
  }
  return;
}




void FUN_1000d5ab8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(param_1 + 0xb8);
  if ((plVar1 != (long *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_5), (uVar2 & 1) == 0)) {
    FUN_100644b14(param_4);
    return;
  }
  return;
}




void FUN_1000d5b00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb8);
  if ((puVar1 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*puVar1)(puVar1,param_5), (uVar2 & 1) == 0)) {
    FUN_100644b14(param_4);
    return;
  }
  return;
}




void FUN_1000d5b48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(param_1 + 0xb8);
  if ((plVar1 != (long *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_5), (uVar2 & 1) == 0)) {
    FUN_100644b14(param_4);
    return;
  }
  return;
}




void FUN_1000d5b90(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(*param_5,0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_1006575c4(param_3,"icon_item_empty");
  FUN_100063164(*param_2,param_2[1],fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2,uVar1
                ,param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void FUN_1000d5c38(long param_1)

{
  *(undefined1 *)(param_1 + 0x922e) = 1;
  *(uint *)(param_1 + 0x1d7c) = *(uint *)(param_1 + 0x1d7c) & 0xfffffffb;
  *(uint *)(param_1 + 0x6f0c) = *(uint *)(param_1 + 0x6f0c) | 4;
  if (*(long *)(param_1 + 0x8918) != 0) {
    FUN_1002eaaec();
    return;
  }
  return;
}




void FUN_1000d5c74(long param_1)

{
  *(undefined1 *)(param_1 + 0x922e) = 0;
  *(uint *)(param_1 + 0x1d7c) = *(uint *)(param_1 + 0x1d7c) | 4;
  *(uint *)(param_1 + 0x6f0c) = *(uint *)(param_1 + 0x6f0c) & 0xfffffffb;
  return;
}




void FUN_1000d5c9c(long param_1)

{
  FUN_1006513c0(param_1 + 0x6d8,&DAT_101d91650);
  FUN_100652e14(0x3f800000,param_1 + 0x4f8);
  if ((~*(uint *)(param_1 + 0x57c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x57c) = *(uint *)(param_1 + 0x57c) | 0x7f80;
    FUN_1000200a0(param_1 + 0x4f8);
  }
  *(uint *)(param_1 + 0x66c) = *(uint *)(param_1 + 0x66c) & 0xfffffffb;
  return;
}




void FUN_1000d5d04(long param_1)

{
  uint uVar1;
  
  FUN_1004e38ac(param_1 + 0x9200,"%d");
  FUN_1006513c0(param_1 + 0x6d8,param_1 + 0x9200);
  FUN_100652e14(0,param_1 + 0x4f8);
  uVar1 = *(uint *)(param_1 + 0x57c);
  if ((uVar1 & 0x7f80) != 0x2c80) {
    *(uint *)(param_1 + 0x57c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x2c80;
    FUN_1000200a0(param_1 + 0x4f8);
  }
  *(uint *)(param_1 + 0x66c) = *(uint *)(param_1 + 0x66c) | 4;
  return;
}




void FUN_1000d5d94(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0xf6c) = *(uint *)(param_1 + 0xf6c) & 0xfffffffb | uVar1;
  return;
}




void FUN_1000d5db4(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x141c) = *(uint *)(param_1 + 0x141c) & 0xfffffffb | uVar1;
  return;
}




void FUN_1000d5dd4(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x18cc) = *(uint *)(param_1 + 0x18cc) & 0xfffffffb | uVar1;
  return;
}




void FUN_1000d5df4(long param_1)

{
  FUN_100061e08(param_1 + 0x4f8);
  *(uint *)(param_1 + 0x57c) = *(uint *)(param_1 + 0x57c) | 4;
  return;
}




void FUN_1000d5e24(long param_1)

{
  FUN_1004e38ac(param_1 + 0x9200,"%d");
  FUN_1006513c0(param_1 + 0xc88,param_1 + 0x9200);
  return;
}




void FUN_1000d5e6c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x9224) = param_1;
  FUN_1000d3c3c();
  return;
}




void FUN_1000d5e78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(long *)(param_1 + 0x60e0) != 0) {
    FUN_100652d8c(param_1 + 0x6010);
  }
  FUN_1004d2698(auStack_c8,PTR_s_build___HUDPartsHero__s_png_10184e0b8);
  FUN_1004d2698(auStack_e8,"ability_icon_%d");
  FUN_100652cac(param_1 + 0x6010,auStack_c8,auStack_e8);
  FUN_100653464(param_1 + 0x61f0,FUN_1000d5f50,param_4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000d5f50(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(*param_5,0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_1006575c4(param_3,"icon_item_empty");
  FUN_100063164(*param_2,param_2[1],fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2,uVar1
                ,param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void FUN_1000d5ff8(long param_1)

{
  FUN_1004e38ac(param_1 + 0x9200,"%d");
  FUN_1006513c0(param_1 + 0x62f0,param_1 + 0x9200);
  return;
}




void FUN_1000d6044(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x5e5c) = *(uint *)(param_1 + 0x5e5c) & 0xfffffffb | uVar1;
  return;
}




void FUN_1000d6068(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 4;
  uVar1 = uVar2;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x6374) = *(uint *)(param_1 + 0x6374) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0x6274) = *(uint *)(param_1 + 0x6274) & 0xfffffffb | uVar1;
  if (param_2 == 0 && param_3 == 1) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x6184) = *(uint *)(param_1 + 0x6184) & 0xfffffffb | uVar2;
  return;
}




void FUN_1000d60c0(long param_1)

{
  FUN_100652e14(param_1 + 0x6010);
  return;
}




void FUN_1000d60cc(uint *param_1,undefined8 *param_2)

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
    FUN_1000d7590(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1000d614c(long param_1,int param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    pcVar1 = "icon_item_weapon_infusion";
    if (param_3 == 0) {
      pcVar1 = "icon_item_crystal_infusion";
    }
    FUN_100652cdc(param_1 + 0x808,pcVar1);
    uVar2 = 4;
  }
  *(uint *)(param_1 + 0x88c) = *(uint *)(param_1 + 0x88c) & 0xfffffffb | uVar2;
  return;
}




void FUN_1000d61a8(long param_1,int param_2)

{
  long lVar1;
  
  FUN_1004e38ac(param_1 + 0x9200,"%d");
  lVar1 = param_1 + (long)param_2 * 0x130;
                    /* WARNING: Could not recover jumptable at 0x0001000d620c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x4898) + 0x138))(lVar1 + 0x4898,param_1 + 0x9200);
  return;
}




void FUN_1000d6210(long param_1,int param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = param_1 + (long)param_2 * 0x130;
  uVar2 = 4;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  *(uint *)(lVar1 + 0x491c) = *(uint *)(lVar1 + 0x491c) & 0xfffffffb | uVar2;
  lVar1 = param_1 + (long)param_2 * 0x100;
  *(uint *)(lVar1 + 0x3f1c) = *(uint *)(lVar1 + 0x3f1c) & 0xfffffffb | uVar2;
  param_1 = param_1 + (long)param_2 * 0xf0;
  *(uint *)(param_1 + 0x35bc) = *(uint *)(param_1 + 0x35bc) & 0xfffffffb | uVar2;
  return;
}




void FUN_1000d626c(long param_1,int param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = "icon_item_empty";
  if (param_3 != (char *)0x0) {
    pcVar1 = param_3;
  }
  FUN_100652cdc(param_1 + (long)param_2 * 0xf0 + 0x2bd8,pcVar1);
  return;
}




void FUN_1000d6290(long param_1,int param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  lVar1 = (long)param_2;
  if ((param_3 & 1) == 0) {
    uVar2 = *(uint *)(param_1 + lVar1 * 0xf0 + 0x54fc);
    uVar3 = 0x66;
  }
  else {
    lVar4 = param_1 + lVar1 * 0xf0;
    *(uint *)(lVar4 + 0x2c5c) = *(uint *)(lVar4 + 0x2c5c) | 4;
    uVar2 = *(uint *)(lVar4 + 0x54fc) | 4;
    *(uint *)(lVar4 + 0x54fc) = uVar2;
    uVar3 = 0xff;
  }
  if (uVar3 == (uVar2 >> 7 & 0xff)) {
    return;
  }
  param_1 = param_1 + lVar1 * 0xf0;
  *(uint *)(param_1 + 0x54fc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar3 << 7;
  FUN_1000200a0(param_1 + 0x5478);
  return;
}




void FUN_1000d6304(long param_1,uint param_2,int param_3)

{
  undefined4 local_24;
  
  if (param_2 < 6) {
    FUN_100652cdc(param_1 + 0x6420,(&PTR_s_role_captain_101456468)[(int)param_2]);
  }
  local_24 = 0xffc8c8c8;
  if (param_3 == 2) {
    local_24 = 0xff3ac8f6;
  }
  else if (param_3 == 1) {
    local_24 = 0xfffae076;
  }
  else if (param_3 == 0) {
    local_24 = 0xff5271eb;
  }
  FUN_100652dd4(param_1 + 0x6420,&local_24,2);
  FUN_1000d3c3c(param_1);
  return;
}




void FUN_1000d63ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004d2698(auStack_b8,PTR_s_build___HUDPartsHero__s_png_10184e0b8);
  lVar1 = param_1 + 0x6658;
  FUN_1002f8c30(lVar1,auStack_b8,param_4,param_5);
  FUN_1002f8ad4(lVar1,1);
  FUN_1002f8be0(lVar1,0);
  FUN_1000d47d0(param_1);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000d6464(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x6594) = *(uint *)(param_1 + 0x6594) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0x6ddc) = *(uint *)(param_1 + 0x6ddc) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0x6cec) = *(uint *)(param_1 + 0x6cec) & 0xfffffffb | uVar1;
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = 4;
  }
  *(uint *)(param_1 + 0x64a4) = *(uint *)(param_1 + 0x64a4) & 0xfffffffb | uVar1;
  return;
}




void FUN_1000d64c0(long param_1)

{
  FUN_1004e38ac(param_1 + 0x9200,"%d");
  FUN_1006513c0(param_1 + 0x6d58,param_1 + 0x9200);
  FUN_100651460(param_1 + 0x6d58,&DAT_10115a168);
  FUN_1000d47d0(param_1);
  return;
}




void FUN_1000d6530(long param_1,int param_2)

{
  if (param_2 - 1U < 3) {
    FUN_100652dd4(param_1 + 0x6c68,(&PTR_DAT_101456498)[(int)(param_2 - 1U)],2);
    return;
  }
  return;
}




void FUN_1000d655c(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x7ccc) = *(uint *)(param_1 + 0x7ccc) & 0xfffffffb | uVar1;
  return;
}




void FUN_1000d6580(undefined4 param_1,long param_2)

{
  FUN_1004e38ac(param_2 + 0x9200,"%.1fk");
  FUN_1000e543c(param_2 + 0x1848,param_2 + 0x9200);
  *(undefined4 *)(param_2 + 0x9220) = param_1;
  FUN_1000d3c3c(param_2);
  return;
}




void FUN_1000d65f8(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(char *)(param_1 + 0x922c) == '\0') || (*(char *)(param_1 + 0x922d) != '\0')) {
    uVar2 = *(uint *)(param_1 + 0xa34);
    uVar3 = 0x3f;
    if (param_2 == 0) {
      uVar3 = 0xff;
    }
    uVar1 = 0x26;
    if (param_3 == 0) {
      uVar1 = uVar3;
    }
    if (uVar1 != (uVar2 >> 7 & 0xff)) {
      *(uint *)(param_1 + 0xa34) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar1 << 7;
      FUN_1000200a0(param_1 + 0x9b0);
    }
    uVar3 = *(uint *)(param_1 + 0x334);
    if (uVar1 != (uVar3 >> 7 & 0xff)) {
      *(uint *)(param_1 + 0x334) = uVar3 & 0xffff8000 | uVar3 & 0x7f | uVar1 << 7;
      FUN_1000200a0(param_1 + 0x2b0);
    }
  }
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*(byte *)(param_1 + 0x922d) << 2;
  }
  *(uint *)(param_1 + 0xaec) = *(uint *)(param_1 + 0xaec) & 0xfffffffb | uVar3;
  return;
}




void FUN_1000d66b8(long param_1)

{
  FUN_1004e38ac(param_1 + 0x9200,"%d/%d/%d");
  FUN_1006513c0(param_1 + 0xdb8,param_1 + 0x9200);
  FUN_1000d3c3c(param_1);
  return;
}




void FUN_1000d670c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x9228) = param_2;
  FUN_1000d3c3c();
  return;
}




void FUN_1000d6718(long param_1,int param_2)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  
  FUN_1004e38ac(param_1 + 0x9200,"%d");
  lVar1 = param_1 + 0xee8;
  FUN_1000e543c(lVar1,param_1 + 0x9200);
  pcVar2 = "hud_blitz_coin_friendly";
  if (param_2 == 0) {
    pcVar2 = "hud_blitz_coin_enemy";
  }
  puVar3 = &UNK_10114bf7c;
  if (param_2 == 0) {
    puVar3 = &DAT_10114bf80;
  }
  FUN_1000e53c8(lVar1,pcVar2);
  FUN_1000e53fc(lVar1,&DAT_10115a168,puVar3);
  FUN_1000d3c3c(param_1);
  return;
}




void FUN_1000d67c0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x9218) = param_2;
  return;
}




void FUN_1000d67cc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  void *local_48;
  
  iVar1 = FUN_1004e36c0(param_3,&DAT_101d91650);
  if (iVar1 == 0) {
    iVar1 = FUN_1004e36c0(param_4,&DAT_101d91650);
    if (iVar1 == 0) goto LAB_1000d6898;
    FUN_1000153b4(param_1 + 0x9200,param_4);
    pcVar2 = "_";
  }
  else {
    FUN_1000153b4(param_1 + 0x9200,param_3);
    pcVar2 = "-";
  }
  lVar3 = param_1 + 0x9200;
  FUN_1004e3120(auStack_50,pcVar2);
  FUN_1004e372c(lVar3,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  FUN_1004e372c(lVar3,param_2);
  param_2 = lVar3;
LAB_1000d6898:
  FUN_1006513c0(param_1 + 0xb58,param_2);
  FUN_1000d3c3c(param_1);
  return;
}




void FUN_1000d68bc(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x70ec) = *(uint *)(param_1 + 0x70ec) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0x76dc) = *(uint *)(param_1 + 0x76dc) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0x7ccc) = *(uint *)(param_1 + 0x7ccc) & 0xfffffffb | uVar1;
  return;
}




void FUN_1000d6904(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x82bc) = *(uint *)(param_1 + 0x82bc) & 0xfffffffb | uVar1;
  return;
}




void FUN_1000d6928(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x8918) = param_2;
  FUN_100655930(param_1 + 0x6f10,param_2,1);
  FUN_1000d4dd4(param_1);
  return;
}




void FUN_1000d6960(long param_1)

{
  *(undefined8 *)(param_1 + 0x8918) = 0;
  FUN_1000d4dd4();
  return;
}




void FUN_1000d696c(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  undefined8 local_68;
  
  plVar4 = operator_new(0x18d0);
  local_68 = FUN_1000d1960(plVar4,param_4,param_5);
  iVar1 = *(int *)(param_3 + 0x91f0);
  if (iVar1 == 0) {
    FUN_100642bd8(param_3 + 0x8a50,plVar4,1);
  }
  else {
    plVar5 = *(long **)(*(long *)(param_3 + 0x91f8) + (ulong)(iVar1 - 1) * 8);
    FUN_100642bd8(param_3 + 0x8a50,plVar4,1);
    if (plVar5 != (long *)0x0) {
      fVar6 = (float)(**(code **)(*plVar4 + 0x50))(plVar4);
      fVar7 = *(float *)((long)plVar5 + 0x44);
      (**(code **)(*plVar5 + 0x50))(plVar5);
      fVar7 = fVar7 + 40.0 + param_2 * 0.5;
      if ((*(float *)(plVar4 + 8) != fVar6 * 0.5) || (*(float *)((long)plVar4 + 0x44) != fVar7)) {
        *(float *)(plVar4 + 8) = fVar6 * 0.5;
        *(float *)((long)plVar4 + 0x44) = fVar7;
        FUN_1000200a0(plVar4);
      }
      uVar2 = *(uint *)((long)plVar4 + 0x172c) | 4;
      goto LAB_1000d6ac4;
    }
  }
  fVar6 = (float)(**(code **)(*plVar4 + 0x50))(plVar4);
  fVar7 = 0.5;
  (**(code **)(*plVar4 + 0x50))(plVar4);
  fVar7 = fVar7 * 0.7;
  bVar3 = false;
  if ((*(float *)(plVar4 + 8) == fVar6 * 0.5) &&
     (bVar3 = false, !NAN(*(float *)((long)plVar4 + 0x44)) && !NAN(fVar7))) {
    bVar3 = *(float *)((long)plVar4 + 0x44) == fVar7;
  }
  if (!bVar3) {
    *(float *)(plVar4 + 8) = fVar6 * 0.5;
    *(float *)((long)plVar4 + 0x44) = fVar7;
    FUN_1000200a0(plVar4);
  }
  uVar2 = *(uint *)((long)plVar4 + 0x172c) & 0xfffffffb;
LAB_1000d6ac4:
  *(uint *)((long)plVar4 + 0x172c) = uVar2;
  FUN_1000d6af4((int *)(param_3 + 0x91f0),&local_68);
  return;
}




void FUN_1000d6af4(uint *param_1,undefined8 *param_2)

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
    FUN_1000d760c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1000d6b74(long param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  
  if (*param_2 == 0x1d) {
    iVar2 = FUN_10031615c(0x1d);
    pcVar1 = "hud_stats_bounty";
    if (iVar2 == 0) {
      pcVar1 = "hud_pingicon_action_minion";
    }
    FUN_1000e53c8(param_1 + 0x1398,pcVar1);
    FUN_1000d3c3c(param_1);
    return;
  }
  return;
}




void FUN_1000d6bdc(long param_1,int param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  
  puVar1 = (uint *)(param_1 + 0x819c);
  *(undefined1 *)(param_1 + 0x9232) = (char)param_2;
  lVar2 = param_1 + 0x8118;
  if (param_2 == 0) {
    FUN_100652dd4(lVar2,&DAT_10115a168,2);
    FUN_100652e14(0,lVar2);
    uVar3 = *puVar1;
    if ((uVar3 & 0x7f80) != 0x5900) {
      *puVar1 = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5900;
      FUN_1000200a0(lVar2);
    }
    FUN_100183c50(0,param_1 + 0x7c48,&DAT_10115a164);
  }
  else {
    uVar3 = *puVar1;
    if ((uVar3 & 0x7f80) != 0x7280) {
      *puVar1 = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x7280;
      FUN_1000200a0(lVar2);
    }
    FUN_100652dd4(lVar2,&DAT_10115a164,2);
    FUN_100183c50(0x3f800000,param_1 + 0x7c48,&DAT_10115a168);
    FUN_1000d6d14(param_1,1);
  }
  plVar4 = *(long **)(param_1 + 0xb8);
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000d6cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x30))(plVar4,*(undefined1 *)(param_1 + 0x9232));
    return;
  }
  return;
}




void FUN_1000d6d14(long param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  
  puVar5 = (uint *)(param_1 + 0x75bc);
  *(undefined1 *)(param_1 + 0x9230) = (char)param_2;
  if (param_2 == 0) {
    lVar3 = param_1 + 0x7068;
    lVar4 = param_1 + 0x7538;
    FUN_100652dd4(lVar4,&DAT_10115a168,2);
    FUN_100652e14(0,lVar4);
    uVar2 = *puVar5;
    if ((uVar2 & 0x7f80) == 0x5900) goto LAB_1000d6e4c;
  }
  else {
    FUN_1000d6e9c(param_1,0);
    lVar3 = param_1 + 0x7538;
    FUN_100652e14(0x3f800000,lVar3);
    uVar2 = *puVar5;
    if ((uVar2 & 0x7f80) != 0x7280) {
      *puVar5 = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x7280;
      FUN_1000200a0(lVar3);
    }
    FUN_100652dd4(lVar3,&DAT_10115a164,2);
    FUN_100183c50(0x3f800000,param_1 + 0x7068,&DAT_10115a168);
    lVar3 = param_1 + 0x7658;
    lVar4 = param_1 + 0x7b28;
    FUN_100652e14(0,lVar4);
    uVar2 = *(uint *)(param_1 + 0x7bac);
    if ((uVar2 & 0x7f80) == 0x5900) goto LAB_1000d6e4c;
    puVar5 = (uint *)(param_1 + 0x7bac);
  }
  *puVar5 = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5900;
  FUN_1000200a0(lVar4);
LAB_1000d6e4c:
  FUN_100183c50(0,lVar3,&DAT_10115a164);
  plVar1 = *(long **)(param_1 + 0xb8);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000d6e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined1 *)(param_1 + 0x9230));
    return;
  }
  return;
}




void FUN_1000d6e9c(long param_1,int param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long *plVar8;
  undefined8 uVar9;
  
  puVar1 = (uint *)(param_1 + 0x7bac);
  *(char *)(param_1 + 0x9231) = (char)param_2;
  if (param_2 == 0) {
    lVar2 = param_1 + 0x7b28;
    FUN_100652dd4(lVar2,&DAT_10115a168,2);
    FUN_100652e14(0,lVar2);
    uVar3 = *puVar1;
    if ((uVar3 & 0x7f80) != 0x5900) {
      *puVar1 = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5900;
      FUN_1000200a0(lVar2);
    }
    FUN_100183c50(0,param_1 + 0x7658,&DAT_10115a164);
    *(uint *)(param_1 + 0x8ad4) = *(uint *)(param_1 + 0x8ad4) & 0xfffffffb;
    *(uint *)(param_1 + 0x8b5c) = *(uint *)(param_1 + 0x8b5c) & 0xfffffffb;
    goto LAB_1000d714c;
  }
  FUN_1000d6d14(param_1,0);
  FUN_1000d6bdc(param_1,0);
  lVar2 = param_1 + 0x7b28;
  FUN_100652e14(0x3f800000,lVar2);
  uVar3 = *puVar1;
  if ((uVar3 & 0x7f80) != 0x7280) {
    *puVar1 = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x7280;
    FUN_1000200a0(lVar2);
  }
  FUN_100652dd4(lVar2,&DAT_10115a164,2);
  FUN_100183c50(0x3f800000,param_1 + 0x7658,&DAT_10115a168);
  if (*(char *)(param_1 + 0x922c) == '\0') {
    uVar6 = FUN_1004e0150("GAME_OVER_THUMBS_DOWN_AFK",0);
    FUN_1000d696c(param_1,uVar6,1);
    uVar6 = 3;
    pcVar7 = "GAME_OVER_THUMBS_DOWN_RUDE_CHAT_PINGS";
    uVar9 = 2;
    pcVar4 = "GAME_OVER_THUMBS_DOWN_TROLL_INTENTIONAL_LOSING";
LAB_1000d7040:
    uVar5 = FUN_1004e0150(pcVar4,0);
    FUN_1000d696c(param_1,uVar5,uVar9);
    uVar9 = FUN_1004e0150(pcVar7,0);
    FUN_1000d696c(param_1,uVar9,uVar6);
  }
  else if (*(char *)(param_1 + 0x922d) != '\0') {
    uVar6 = 2;
    pcVar7 = "GAME_OVER_THUMBS_DOWN_TROLL_INTENTIONAL_LOSING";
    uVar9 = 1;
    pcVar4 = "GAME_OVER_THUMBS_DOWN_AFK";
    goto LAB_1000d7040;
  }
  uVar6 = FUN_1004e0150("GAME_OVER_THUMBS_DOWN_NOOB",0);
  FUN_1000d696c(param_1,uVar6,4);
  uVar6 = FUN_1004e0150("GAME_OVER_THUMBS_DOWN_OFFENSIVE_NAME",0);
  FUN_1000d696c(param_1,uVar6,5);
  FUN_1000d51cc(param_1);
  *(uint *)(param_1 + 0x8ad4) = *(uint *)(param_1 + 0x8ad4) | 4;
  *(uint *)(param_1 + 0x8b5c) = *(uint *)(param_1 + 0x8b5c) | 4;
  FUN_1006423ec(param_1 + 0x8ad8,1);
  FUN_100655930(param_1 + 0x6f10,param_1 + 0x8ad8,1);
  plVar8 = *(long **)(param_1 + 0x20);
  FUN_1006423ec(param_1,1);
  (**(code **)(*plVar8 + 0x78))(plVar8,param_1,1);
  FUN_1006423ec(param_1 + 0x8a50,1);
  FUN_100655930(param_1 + 0x6f10,param_1 + 0x8a50,1);
LAB_1000d714c:
  plVar8 = *(long **)(param_1 + 0xb8);
  if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000d7170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x40))(plVar8,*(undefined1 *)(param_1 + 0x9231));
    return;
  }
  return;
}




void FUN_1000d7188(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  *(uint *)(param_1 + 0x8ad4) = *(uint *)(param_1 + 0x8ad4) & 0xfffffffb;
  *(uint *)(param_1 + 0x8b5c) = *(uint *)(param_1 + 0x8b5c) & 0xfffffffb;
  *(uint *)(param_1 + 0x6f94) = *(uint *)(param_1 + 0x6f94) & 0xfffffffb;
  lVar1 = param_1 + 0x8920;
  uVar2 = *(uint *)(param_1 + 0x89a4);
  *(uint *)(param_1 + 0x89a4) = uVar2 | 0x14;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x89a4) = uVar2 & 0xffff807f | 0x14;
    FUN_1000200a0(lVar1);
  }
  uVar3 = FUN_100640840(0x3f800000,0x3f000000,FUN_10001f160);
  FUN_100642324(lVar1);
  FUN_100642b14(lVar1,uVar3);
  plVar4 = *(long **)(param_1 + 0xb8);
  if (plVar4 != (long *)0x0) {
    uVar3 = FUN_100644b2c(param_2);
                    /* WARNING: Could not recover jumptable at 0x0001000d7254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x50))(plVar4,uVar3);
    return;
  }
  return;
}




void FUN_1000d7268(long param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  puVar1 = (uint *)(param_1 + 0x6f94);
  *(uint *)(param_1 + 0x89a4) = *(uint *)(param_1 + 0x89a4) & 0xffffffeb;
  param_1 = param_1 + 0x6f10;
  uVar2 = *puVar1;
  *puVar1 = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *puVar1 = uVar2 & 0xffff807f | 4;
    FUN_1000200a0(param_1);
  }
  uVar3 = FUN_100640840(0x3f800000,0x3f000000,FUN_10001f160);
  FUN_100642324(param_1);
  FUN_100642b14(param_1,uVar3);
  return;
}




void FUN_1000d72ec(long param_1)

{
  long *plVar1;
  bool bVar2;
  float fVar3;
  undefined1 *local_28;
  
  plVar1 = (long *)(param_1 + 0x8d40);
  FUN_1000d3bbc();
  fVar3 = 0.0;
  FUN_10064e47c(0,plVar1);
  FUN_1006425d0(plVar1,0,0,1,1);
  fVar3 = fVar3 * 0.5;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x8d80) == 0.0) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x8d84)) && !NAN(fVar3))) {
    bVar2 = *(float *)(param_1 + 0x8d84) == fVar3;
  }
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x8d80) = 0;
    *(float *)(param_1 + 0x8d84) = fVar3;
    FUN_1000200a0(plVar1);
  }
  local_28 = &DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_28);
  FUN_1000d6e9c(param_1,*(char *)(param_1 + 0x9231) == '\0');
  return;
}




void FUN_1000d73a8(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  long *plVar3;
  byte bVar4;
  
  bVar4 = *(byte *)(param_1 + 0x9233) ^ 1;
  *(byte *)(param_1 + 0x9233) = bVar4;
  plVar3 = *(long **)(param_1 + 0xb8);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x48))(plVar3,bVar4 != 0);
    bVar4 = *(byte *)(param_1 + 0x9233);
  }
  uVar2 = *(uint *)(param_1 + 0x88ac);
  *(uint *)(param_1 + 0x88ac) = uVar2 & 0xfffffff8 | uVar2 & 3 | (uint)(bVar4 != 0) << 2;
  puVar1 = &DAT_10115a168;
  if (bVar4 != 0) {
    puVar1 = &DAT_10115a170;
  }
  FUN_100652dd4(param_1 + 0x8528,puVar1,2);
  puVar1 = &DAT_10115a168;
  if (*(char *)(param_1 + 0x9233) != '\0') {
    puVar1 = &DAT_10115a170;
  }
  FUN_100652dd4(param_1 + 0x8708,puVar1,2);
  return;
}




void FUN_1000d7454(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101456198;
  thunk_FUN_100651068(param_1 + 0x2f3);
  param_1[0x2d5] = &PTR_FUN_1014a7108;
  param_1[0x2ec] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2ef);
  FUN_10064e2bc(param_1 + 0x2d5);
  param_1[0x2b7] = &PTR_FUN_1014a7108;
  param_1[0x2ce] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2d1);
  FUN_10064e2bc(param_1 + 0x2b7);
  FUN_10003bd40(param_1);
  return;
}




void FUN_1000d74ec(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101456198;
  thunk_FUN_100651068(param_1 + 0x2f3);
  param_1[0x2d5] = &PTR_FUN_1014a7108;
  param_1[0x2ec] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2ef);
  FUN_10064e2bc(param_1 + 0x2d5);
  param_1[0x2b7] = &PTR_FUN_1014a7108;
  param_1[0x2ce] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2d1);
  FUN_10064e2bc(param_1 + 0x2b7);
  pvVar1 = (void *)FUN_10003bd40(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1000d7588(void)

{
  return;
}




void thunk_FUN_1000d6b74(long param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  
  if (*param_2 == 0x1d) {
    iVar2 = FUN_10031615c(0x1d);
    pcVar1 = "hud_stats_bounty";
    if (iVar2 == 0) {
      pcVar1 = "hud_pingicon_action_minion";
    }
    FUN_1000e53c8(param_1 + 0x1398,pcVar1);
    FUN_1000d3c3c(param_1);
    return;
  }
  return;
}




void FUN_1000d7590(uint *param_1,uint param_2)

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




void FUN_1000d760c(uint *param_1,uint param_2)

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




long FUN_1000d7688(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100269da8();
  puVar1[0x19] = 0;
  *puVar1 = &PTR_thunk_FUN_1000d78d8_1014564c0;
  thunk_FUN_100652c08(puVar1 + 0x1a);
  thunk_FUN_100652c08(param_1 + 0x1c0);
  thunk_FUN_10064f204(param_1 + 0x2b0);
  thunk_FUN_10064f204(param_1 + 0x3f8);
  FUN_10064e264(param_1 + 0x540);
  thunk_FUN_10064f204(param_1 + 0x5f8);
  thunk_FUN_10064f204(param_1 + 0x740);
  thunk_FUN_100652c08(param_1 + 0x888);
  thunk_FUN_100652c08(param_1 + 0x978);
  thunk_FUN_100652c08(param_1 + 0xa68);
  thunk_FUN_1000e518c(param_1 + 0xb58);
  thunk_FUN_1000e518c(param_1 + 0x1008);
  thunk_FUN_100650e64(param_1 + 0x14b8);
  thunk_FUN_100650e64(param_1 + 0x15e8);
  thunk_FUN_1000e518c(param_1 + 0x1718);
  thunk_FUN_1000e518c(param_1 + 0x1bc8);
  thunk_FUN_1000e518c(param_1 + 0x2078);
  thunk_FUN_1000e518c(param_1 + 0x2528);
  thunk_FUN_100181304(param_1 + 0x29d8,1);
  FUN_10064e264(param_1 + 0x3f90);
  *(undefined8 *)(param_1 + 0x40b0) = 0;
  *(undefined8 *)(param_1 + 0x40a8) = 0;
  *(undefined8 *)(param_1 + 0x40c0) = 0;
  *(undefined8 *)(param_1 + 0x40b8) = 0;
  *(undefined8 *)(param_1 + 0x40a0) = 0;
  *(undefined8 *)(param_1 + 0x4098) = 0;
  thunk_FUN_100181304(param_1 + 0x40c8,1);
  thunk_FUN_100181304(param_1 + 0x5680,1);
  thunk_FUN_100181304(param_1 + 0x6c38,1);
  thunk_FUN_100181304(param_1 + 0x81f0,1);
  thunk_FUN_100181304(param_1 + 0x97a8,1);
  thunk_FUN_100652c08(param_1 + 0xad60);
  thunk_FUN_100650e64(param_1 + 0xae50);
  thunk_FUN_1000e3fe4(param_1 + 0xaf80);
  FUN_1006421a8((undefined8 *)(param_1 + 0x127a0));
  *(undefined8 *)(param_1 + 0x127a0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100181304(param_1 + 0x12828,1);
  thunk_FUN_100181304(param_1 + 0x13de0,1);
  thunk_FUN_1000847c8(param_1 + 0x15398);
  thunk_FUN_1000e4a84(param_1 + 0x17230);
  *(undefined8 *)(param_1 + 0x18b68) = 0;
  FUN_1004e313c(param_1 + 0x18b70);
  FUN_1004e313c(param_1 + 0x18b80);
  *(byte *)(param_1 + 0x18b90) = *(byte *)(param_1 + 0x18b90) & 0xe0 | 1;
  *(undefined8 *)(param_1 + 0x4050) = 0;
  *(undefined8 *)(param_1 + 0x4048) = 0;
  *(undefined8 *)(param_1 + 0x4060) = 0;
  *(undefined8 *)(param_1 + 0x4058) = 0;
  *(undefined8 *)(param_1 + 0x4070) = 0;
  *(undefined8 *)(param_1 + 0x4068) = 0;
  *(undefined8 *)(param_1 + 0x4080) = 0;
  *(undefined8 *)(param_1 + 0x4078) = 0;
  *(undefined8 *)(param_1 + 0x4090) = 0;
  *(undefined8 *)(param_1 + 0x4088) = 0;
  return param_1;
}




long thunk_FUN_1000d7688(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100269da8();
  puVar1[0x19] = 0;
  *puVar1 = &PTR_thunk_FUN_1000d78d8_1014564c0;
  thunk_FUN_100652c08(puVar1 + 0x1a);
  thunk_FUN_100652c08(param_1 + 0x1c0);
  thunk_FUN_10064f204(param_1 + 0x2b0);
  thunk_FUN_10064f204(param_1 + 0x3f8);
  FUN_10064e264(param_1 + 0x540);
  thunk_FUN_10064f204(param_1 + 0x5f8);
  thunk_FUN_10064f204(param_1 + 0x740);
  thunk_FUN_100652c08(param_1 + 0x888);
  thunk_FUN_100652c08(param_1 + 0x978);
  thunk_FUN_100652c08(param_1 + 0xa68);
  thunk_FUN_1000e518c(param_1 + 0xb58);
  thunk_FUN_1000e518c(param_1 + 0x1008);
  thunk_FUN_100650e64(param_1 + 0x14b8);
  thunk_FUN_100650e64(param_1 + 0x15e8);
  thunk_FUN_1000e518c(param_1 + 0x1718);
  thunk_FUN_1000e518c(param_1 + 0x1bc8);
  thunk_FUN_1000e518c(param_1 + 0x2078);
  thunk_FUN_1000e518c(param_1 + 0x2528);
  thunk_FUN_100181304(param_1 + 0x29d8,1);
  FUN_10064e264(param_1 + 0x3f90);
  *(undefined8 *)(param_1 + 0x40b0) = 0;
  *(undefined8 *)(param_1 + 0x40a8) = 0;
  *(undefined8 *)(param_1 + 0x40c0) = 0;
  *(undefined8 *)(param_1 + 0x40b8) = 0;
  *(undefined8 *)(param_1 + 0x40a0) = 0;
  *(undefined8 *)(param_1 + 0x4098) = 0;
  thunk_FUN_100181304(param_1 + 0x40c8,1);
  thunk_FUN_100181304(param_1 + 0x5680,1);
  thunk_FUN_100181304(param_1 + 0x6c38,1);
  thunk_FUN_100181304(param_1 + 0x81f0,1);
  thunk_FUN_100181304(param_1 + 0x97a8,1);
  thunk_FUN_100652c08(param_1 + 0xad60);
  thunk_FUN_100650e64(param_1 + 0xae50);
  thunk_FUN_1000e3fe4(param_1 + 0xaf80);
  FUN_1006421a8((undefined8 *)(param_1 + 0x127a0));
  *(undefined8 *)(param_1 + 0x127a0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100181304(param_1 + 0x12828,1);
  thunk_FUN_100181304(param_1 + 0x13de0,1);
  thunk_FUN_1000847c8(param_1 + 0x15398);
  thunk_FUN_1000e4a84(param_1 + 0x17230);
  *(undefined8 *)(param_1 + 0x18b68) = 0;
  FUN_1004e313c(param_1 + 0x18b70);
  FUN_1004e313c(param_1 + 0x18b80);
  *(byte *)(param_1 + 0x18b90) = *(byte *)(param_1 + 0x18b90) & 0xe0 | 1;
  *(undefined8 *)(param_1 + 0x4050) = 0;
  *(undefined8 *)(param_1 + 0x4048) = 0;
  *(undefined8 *)(param_1 + 0x4060) = 0;
  *(undefined8 *)(param_1 + 0x4058) = 0;
  *(undefined8 *)(param_1 + 0x4070) = 0;
  *(undefined8 *)(param_1 + 0x4068) = 0;
  *(undefined8 *)(param_1 + 0x4080) = 0;
  *(undefined8 *)(param_1 + 0x4078) = 0;
  *(undefined8 *)(param_1 + 0x4090) = 0;
  *(undefined8 *)(param_1 + 0x4088) = 0;
  return param_1;
}




void FUN_1000d78d8(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = &PTR_thunk_FUN_1000d78d8_1014564c0;
  if ((void *)param_1[0x3171] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3171]);
    param_1[0x3171] = 0;
    param_1[0x3170] = 0;
  }
  if ((void *)param_1[0x316f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x316f]);
    param_1[0x316f] = 0;
    param_1[0x316e] = 0;
  }
  thunk_FUN_1000e4e18(param_1 + 0x2e46);
  FUN_10007c8a4(param_1 + 0x2a73);
  FUN_10003bd40(param_1 + 0x27bc);
  FUN_10003bd40(param_1 + 0x2505);
  FUN_10064221c(param_1 + 0x24f4);
  param_1[0x15f0] = &PTR_FUN_101456628;
  FUN_10003bd40(param_1 + 0x223d);
  thunk_FUN_100651068(param_1 + 0x2217);
  thunk_FUN_10064e2bc(param_1 + 0x2200);
  puVar2 = param_1 + 0x1f11;
  puVar3 = param_1 + 0x21d9;
  lVar4 = -0x5de0;
  do {
    *puVar2 = &PTR_FUN_101456770;
    thunk_FUN_100651068(puVar3);
    FUN_10003bd40(puVar2 + 0x11);
    FUN_10064221c(puVar2);
    puVar2 = puVar2 + -0x2ef;
    puVar3 = puVar3 + -0x2ef;
    lVar4 = lVar4 + 0x1778;
  } while (lVar4 != 0);
  thunk_FUN_100651068(param_1 + 0x161e);
  thunk_FUN_10064e2bc(param_1 + 0x1607);
  FUN_10064e2bc(param_1 + 0x15f0);
  thunk_FUN_100651068(param_1 + 0x15ca);
  param_1[0x15ac] = &PTR_FUN_1014a7108;
  param_1[0x15c3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15c6);
  FUN_10064e2bc(param_1 + 0x15ac);
  FUN_10003bd40(param_1 + 0x12f5);
  FUN_10003bd40(param_1 + 0x103e);
  FUN_10003bd40(param_1 + 0xd87);
  FUN_10003bd40(param_1 + 0xad0);
  FUN_10003bd40(param_1 + 0x819);
  pvVar1 = (void *)param_1[0x816];
  if (pvVar1 != (void *)0x0) {
    param_1[0x817] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x813];
  if (pvVar1 != (void *)0x0) {
    param_1[0x814] = pvVar1;
    operator_delete(pvVar1);
  }
  thunk_FUN_10064e2bc(param_1 + 0x7f2);
  FUN_10003bd40(param_1 + 0x53b);
  param_1[0x4a5] = &PTR_FUN_1014584a0;
  thunk_FUN_100651068(param_1 + 0x514);
  thunk_FUN_100651068(param_1 + 0x4ee);
  param_1[0x4d0] = &PTR_FUN_1014a7108;
  param_1[0x4e7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4ea);
  FUN_10064e2bc(param_1 + 0x4d0);
  param_1[0x4a5] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x4bc);
  FUN_10064e2bc(param_1 + 0x4a5);
  param_1[0x40f] = &PTR_FUN_1014584a0;
  thunk_FUN_100651068(param_1 + 0x47e);
  thunk_FUN_100651068(param_1 + 0x458);
  param_1[0x43a] = &PTR_FUN_1014a7108;
  param_1[0x451] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x454);
  FUN_10064e2bc(param_1 + 0x43a);
  param_1[0x40f] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x426);
  FUN_10064e2bc(param_1 + 0x40f);
  param_1[0x379] = &PTR_FUN_1014584a0;
  thunk_FUN_100651068(param_1 + 1000);
  thunk_FUN_100651068(param_1 + 0x3c2);
  param_1[0x3a4] = &PTR_FUN_1014a7108;
  param_1[0x3bb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3be);
  FUN_10064e2bc(param_1 + 0x3a4);
  param_1[0x379] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x390);
  FUN_10064e2bc(param_1 + 0x379);
  param_1[0x2e3] = &PTR_FUN_1014584a0;
  thunk_FUN_100651068(param_1 + 0x352);
  thunk_FUN_100651068(param_1 + 0x32c);
  param_1[0x30e] = &PTR_FUN_1014a7108;
  param_1[0x325] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x328);
  FUN_10064e2bc(param_1 + 0x30e);
  param_1[0x2e3] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x2fa);
  FUN_10064e2bc(param_1 + 0x2e3);
  thunk_FUN_100651068(param_1 + 0x2bd);
  thunk_FUN_100651068(param_1 + 0x297);
  param_1[0x201] = &PTR_FUN_1014584a0;
  thunk_FUN_100651068(param_1 + 0x270);
  thunk_FUN_100651068(param_1 + 0x24a);
  param_1[0x22c] = &PTR_FUN_1014a7108;
  param_1[0x243] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x246);
  FUN_10064e2bc(param_1 + 0x22c);
  param_1[0x201] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x218);
  FUN_10064e2bc(param_1 + 0x201);
  param_1[0x16b] = &PTR_FUN_1014584a0;
  thunk_FUN_100651068(param_1 + 0x1da);
  thunk_FUN_100651068(param_1 + 0x1b4);
  param_1[0x196] = &PTR_FUN_1014a7108;
  param_1[0x1ad] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1b0);
  FUN_10064e2bc(param_1 + 0x196);
  param_1[0x16b] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x182);
  FUN_10064e2bc(param_1 + 0x16b);
  param_1[0x14d] = &PTR_FUN_1014a7108;
  param_1[0x164] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x167);
  FUN_10064e2bc(param_1 + 0x14d);
  param_1[0x12f] = &PTR_FUN_1014a7108;
  param_1[0x146] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x149);
  FUN_10064e2bc(param_1 + 0x12f);
  param_1[0x111] = &PTR_FUN_1014a7108;
  param_1[0x128] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 299);
  FUN_10064e2bc(param_1 + 0x111);
  param_1[0xe8] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0xff);
  FUN_10064e2bc(param_1 + 0xe8);
  param_1[0xbf] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0xd6);
  FUN_10064e2bc(param_1 + 0xbf);
  thunk_FUN_10064e2bc(param_1 + 0xa8);
  param_1[0x7f] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x96);
  FUN_10064e2bc(param_1 + 0x7f);
  param_1[0x56] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x6d);
  FUN_10064e2bc(param_1 + 0x56);
  param_1[0x38] = &PTR_FUN_1014a7108;
  param_1[0x4f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x52);
  FUN_10064e2bc(param_1 + 0x38);
  param_1[0x1a] = &PTR_FUN_1014a7108;
  param_1[0x31] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x34);
  FUN_10064e2bc(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000d7e88(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_101456628;
  FUN_10003bd40(param_1 + 0xc4d);
  thunk_FUN_100651068(param_1 + 0xc27);
  thunk_FUN_10064e2bc(param_1 + 0xc10);
  lVar2 = 0;
  puVar1 = param_1 + 0x921;
  do {
    *puVar1 = &PTR_FUN_101456770;
    thunk_FUN_100651068((long)param_1 + lVar2 + 0x5f48);
    FUN_10003bd40(puVar1 + 0x11);
    FUN_10064221c(puVar1);
    puVar1 = puVar1 + -0x2ef;
    lVar2 = lVar2 + -0x1778;
  } while (lVar2 != -0x5de0);
  thunk_FUN_100651068(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000d78d8(void)

{
  FUN_1000d78d8();
  return;
}




void FUN_1000d7f58(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000d78d8();
  operator_delete(pvVar1);
  return;
}




void FUN_1000d7f6c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  byte *pbVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined8 uVar22;
  char *pcVar23;
  undefined4 uVar24;
  undefined4 local_c0;
  undefined4 uStack_bc;
  code *local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  
  pbVar7 = (byte *)(param_1 + 0x3172);
  plVar1 = param_1 + 0x1a;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x56;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  plVar8 = param_1 + 0x2bd;
  FUN_10064f31c(plVar2,plVar8,1);
  plVar3 = param_1 + 0x14d;
  FUN_10064f31c(plVar2,plVar3,1);
  plVar4 = param_1 + 0x16b;
  FUN_10064f31c(plVar2,plVar4,1);
  plVar9 = param_1 + 0x201;
  FUN_10064f31c(plVar2,plVar9,1);
  plVar10 = param_1 + 0x297;
  FUN_10064f31c(plVar2,plVar10,1);
  plVar11 = param_1 + 0x2505;
  FUN_10064f31c(plVar2,plVar11,1);
  if ((*pbVar7 >> 3 & 1) != 0) {
    FUN_10064f31c(plVar2,param_1 + 0x27bc,1);
  }
  plVar2 = param_1 + 0x7f;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  plVar12 = param_1 + 0x819;
  FUN_10064f31c(plVar2,plVar12,1);
  plVar13 = param_1 + 0xad0;
  FUN_10064f31c(plVar2,plVar13,1);
  plVar14 = param_1 + 0xd87;
  FUN_10064f31c(plVar2,plVar14,1);
  plVar15 = param_1 + 0x103e;
  FUN_10064f31c(plVar2,plVar15,1);
  if ((*pbVar7 >> 3 & 1) != 0) {
    plVar2 = param_1 + 0xa8;
    (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
    FUN_100642bd8(plVar2,param_1 + 0x15ac,1);
    FUN_100642bd8(plVar2,param_1 + 0x15ca,1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xbf,1);
  plVar2 = param_1 + 0x111;
  FUN_10064f31c(param_1 + 0xbf,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xe8,1);
  plVar5 = param_1 + 0x12f;
  FUN_10064f31c(param_1 + 0xe8,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x7f2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x24f4,1);
  FUN_100642bd8(param_1 + 0x24f4,param_1 + 0x2a73,1);
  plVar6 = param_1 + 0x38;
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2e46,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x15f0,1);
  FUN_100641464(&uStack_bc,&local_c0);
  uVar19 = FUN_100126c88();
  uVar20 = FUN_100126cb8(uStack_bc,local_c0);
  uVar24 = 0x449b0000;
  if ((uVar19 & uVar20) == 0) {
    uVar24 = 0x44870000;
  }
  *(undefined4 *)(param_1 + 0x316d) = uVar24;
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_store_bkgmiddle");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  if ((~*(uint *)((long)param_1 + 0x154) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x154) = *(uint *)((long)param_1 + 0x154) | 0x7f80;
    FUN_1000200a0(plVar1);
  }
  uVar24 = DAT_101dbd458;
  local_90 = DAT_101dbd458;
  local_b8 = FUN_1000d90ec;
  plVar1 = param_1 + 0x1b;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  uVar18 = DAT_101dbd484;
  local_90 = DAT_101dbd484;
  local_b8 = FUN_1000d90ec;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = DAT_101dbd45c;
  local_b8 = FUN_1000d90ec;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = DAT_101dbd488;
  local_b8 = FUN_1000d90ec;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = DAT_101dbd460;
  local_b8 = FUN_1000d90ec;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = DAT_101dbd48c;
  local_b8 = FUN_1000d90ec;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  *(uint *)((long)param_1 + 0x154) = *(uint *)((long)param_1 + 0x154) | 0x10;
  local_90 = uVar24;
  local_b8 = FUN_1000d910c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0xc0,&local_b8);
  local_90 = uVar18;
  local_b8 = FUN_1000d910c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0xc0,&local_b8);
  *(uint *)((long)param_1 + 0x67c) = *(uint *)((long)param_1 + 0x67c) | 0x10;
  local_90 = uVar24;
  local_b8 = FUN_1000d910c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0xe9,&local_b8);
  local_90 = uVar18;
  local_b8 = FUN_1000d910c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0xe9,&local_b8);
  *(uint *)((long)param_1 + 0x7c4) = *(uint *)((long)param_1 + 0x7c4) | 0x10;
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"vert_glass_shadow");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  uVar19 = *(uint *)((long)param_1 + 0x90c);
  if ((uVar19 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x90c) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x2600;
    FUN_1000200a0(plVar2);
  }
  *(byte *)(param_1 + 300) = *(byte *)(param_1 + 300) | 2;
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"vert_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar19 = *(uint *)((long)param_1 + 0x9fc);
  if ((uVar19 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x9fc) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x2600;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_pingicon_action_swords");
  uVar19 = *(uint *)((long)param_1 + 0xaec);
  if ((uVar19 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0xaec) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar3);
  }
  FUN_1000e53fc(plVar4,&DAT_10115a168,&DAT_10114bfb8);
  FUN_1000e5368(plVar4,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  if ((*(float *)(param_1 + 0x174) != 1.4) || (*(float *)((long)param_1 + 0xba4) != 1.4)) {
    param_1[0x174] = 0x3fb333333fb33333;
    FUN_1000200a0(plVar4);
  }
  FUN_1004e3120(&local_b8,"19");
  FUN_1000e543c(plVar4,&local_b8);
  if (local_b0 != (long *)0x0) {
    operator_delete__(local_b0);
  }
  FUN_1000e53fc(plVar9,&DAT_10115a168,&DAT_10114bfc4);
  FUN_1000e5368(plVar9,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  if ((*(float *)(param_1 + 0x20a) != 1.4) || (*(float *)((long)param_1 + 0x1054) != 1.4)) {
    param_1[0x20a] = 0x3fb333333fb33333;
    FUN_1000200a0(plVar9);
  }
  FUN_1004e3120(&local_b8,"19");
  FUN_1000e543c(plVar9,&local_b8);
  if (local_b0 != (long *)0x0) {
    operator_delete__(local_b0);
  }
  *(undefined1 *)((long)param_1 + 0x14b4) = 1;
  FUN_100651038(plVar10,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_100651460(plVar10,&DAT_10114bfb4);
  FUN_1004e3120(&local_b8,"00:00");
  FUN_1006513c0(plVar10,&local_b8);
  if (local_b0 != (long *)0x0) {
    operator_delete__(local_b0);
  }
  FUN_100651038(plVar8,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100651460(plVar8,&DAT_10114bfb8);
  FUN_1004e3120(&local_b8,"Game Over");
  FUN_1006513c0(plVar8,&local_b8);
  if (local_b0 != (long *)0x0) {
    operator_delete__(local_b0);
  }
  *(uint *)((long)param_1 + 0x166c) = *(uint *)((long)param_1 + 0x166c) & 0xfffffffb;
  FUN_1000e53c8(param_1 + 0x2e3,"hud_pingicon_action_turret");
  FUN_1000e53fc(param_1 + 0x2e3,&DAT_10114bfc0,&DAT_10114bfbc);
  plVar1 = param_1 + 0x379;
  FUN_1000e53c8(plVar1,"hud_store_gold_icon_large");
  FUN_1000e53d0(0x3f400000,plVar1);
  FUN_1000e53fc(plVar1,&DAT_10114bfc0,&DAT_10114bfbc);
  FUN_1000e53c8(param_1 + 0x40f,"hud_pingicon_action_turret");
  FUN_1000e53fc(param_1 + 0x40f,&DAT_10114bfcc,&DAT_10114bfc8);
  *(undefined1 *)((long)param_1 + 0x2524) = 1;
  plVar1 = param_1 + 0x4a5;
  FUN_1000e53c8(plVar1,"hud_store_gold_icon_large");
  FUN_1000e53d0(0x3f400000,plVar1);
  FUN_1000e53fc(plVar1,&DAT_10114bfcc,&DAT_10114bfc8);
  *(undefined1 *)((long)param_1 + 0x29d4) = 1;
  uVar22 = FUN_1004e0150("HUD_SCOREBOARD_FIXED_ORDER_BUTTON",0);
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xff969696);
  FUN_1001816d4(0x42000000,0,0x44160000,param_1 + 0x53b,0,uVar22,&local_b8,&DAT_101dc1cb8,0);
  uVar17 = DAT_101d91884;
  local_90 = DAT_101d91884;
  local_b8 = FUN_1000d9124;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0x53c,&local_b8);
  FUN_1001b495c(0x3d4ccccd,param_1 + 0x53b);
  uVar22 = FUN_1004e0150("HUD_SURRENDER_BUTTON",0);
  FUN_1000153b4(param_1 + 0x316e,uVar22);
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42000000,0,0x44160000,plVar12,0,param_1 + 0x316e,&local_b8,&DAT_101dc1cb8,0);
  local_90 = uVar17;
  local_b8 = FUN_1000d913c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0x81a,&local_b8);
  FUN_1001b495c(0x3d4ccccd,plVar12);
  uVar22 = FUN_1004e0150("HUD_RATING_BUTTON",0);
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42000000,0,0x44160000,plVar13,0,uVar22,&local_b8,&DAT_101dc1cb8,0);
  local_90 = uVar17;
  local_b8 = FUN_1000d9154;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0xad1,&local_b8);
  FUN_1001b495c(0x3d4ccccd,plVar13);
  *(uint *)((long)param_1 + 0x5704) = *(uint *)((long)param_1 + 0x5704) & 0xfffffffb;
  uVar22 = FUN_1004e0150("HUD_SCOREBOARD_SOCIAL_TOGLE_BUTTON",0);
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42000000,0,0x44160000,plVar14,0,uVar22,&local_b8,&DAT_101dc1cb8,0);
  local_90 = uVar17;
  local_b8 = thunk_FUN_1000dac60;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0xd88,&local_b8);
  FUN_1001b495c(0x3d4ccccd,plVar14);
  uVar22 = FUN_1004e0150("MENU_INTERSTITIAL_GENERIC_CLOSE",0);
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42000000,0,0x44160000,plVar15,0,uVar22,&local_b8,&DAT_101dc1cb8,0);
  local_90 = uVar17;
  local_b8 = FUN_1000d9190;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0x103f,&local_b8);
  FUN_1001b495c(0x3d4ccccd,plVar15);
  if ((*pbVar7 >> 3 & 1) == 0) goto LAB_1000d8be4;
  FUN_100652cac(param_1 + 0x15ac,PTR_s_build___HUDPartsFor35_atlas_10184e0a8,"vainglory_logo_small")
  ;
  uVar19 = *(uint *)((long)param_1 + 0xade4);
  if ((uVar19 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0xade4) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x4c80;
    FUN_1000200a0(param_1 + 0x15ac);
  }
  plVar1 = param_1 + 0x15ca;
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_100651460(plVar1,&DAT_10114bfb4);
  iVar21 = FUN_100126d70();
  if (iVar21 == 0xf) {
    iVar21 = FUN_10012ced4();
    if (iVar21 == 0) goto LAB_1000d8bb0;
    pcVar23 = "vg.163.com/download";
  }
  else if (iVar21 == 0xe) {
    pcVar23 = "vainglory.vn";
  }
  else {
LAB_1000d8bb0:
    pcVar23 = "5v5.vainglorygame.com";
  }
  FUN_1004e3120(&local_b8,pcVar23);
  FUN_1006513c0(plVar1,&local_b8);
  if (local_b0 != (long *)0x0) {
    operator_delete__(local_b0);
  }
  *(uint *)((long)param_1 + 0x5c4) = *(uint *)((long)param_1 + 0x5c4) & 0xfffffffb;
LAB_1000d8be4:
  FUN_10064e47c(0x44898000,0x43fa0000,param_1 + 0x2e46);
  *(uint *)((long)param_1 + 0x172b4) = *(uint *)((long)param_1 + 0x172b4) & 0xfffffffb;
  FUN_100652cac(plVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar6,&DAT_10115a164,2);
  uVar19 = *(uint *)((long)param_1 + 0x244);
  if ((uVar19 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x244) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x3300;
    FUN_1000200a0(plVar6);
  }
  local_90 = uVar24;
  local_b8 = FUN_1000d91a8;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0x39,&local_b8);
  local_90 = uVar18;
  local_b8 = FUN_1000d91a8;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0x39,&local_b8);
  *(uint *)((long)param_1 + 0x244) = *(uint *)((long)param_1 + 0x244) & 0xfffffffb | 0x10;
  FUN_100181a38(0xc1600000,0x42500000,0x42a00000,plVar11,"hud_popup_close_x",&DAT_10115a168);
  FUN_100181c68(0x42a00000,plVar11);
  uVar19 = *(uint *)((long)param_1 + 0x128ac);
  if ((uVar19 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x128ac) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x3300;
    FUN_1000200a0(plVar11);
  }
  puVar16 = (uint *)((long)param_1 + 0x6cbc);
  FUN_100181be0(0x3f400000,plVar11,&DAT_10115a164);
  local_90 = uVar17;
  local_b8 = FUN_1000d9190;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0x2506,&local_b8);
  if ((*pbVar7 >> 3 & 1) != 0) {
    uVar22 = FUN_1004e0150("HUD_SCOREBOARD_SHARE_BUTTON",0);
    local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffc0c0c0);
    FUN_1001816d4(0x42000000,0,0x44160000,param_1 + 0x27bc,0,uVar22,&local_b8,&DAT_101dc1cb8,0);
    FUN_1001b495c(0x3d4ccccd,param_1 + 0x27bc);
    local_90 = uVar17;
    local_b8 = FUN_1000d91cc;
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = 0;
    local_b0 = param_1;
    FUN_10001554c(param_1 + 0x27bd,&local_b8);
    *(uint *)((long)param_1 + 0x13e64) = *(uint *)((long)param_1 + 0x13e64) & 0xfffffffb;
  }
  local_90 = FUN_100644a94("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP_FROM_TAP");
  local_b8 = FUN_1000d91e4;
  plVar1 = param_1 + 1;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = FUN_100644a94("UI::EVENT_HUD_SHOW_TALENT_TOOLTIP_FROM_TAP");
  local_b8 = FUN_1000d9214;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = FUN_100644a94("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP_FROM_HOVER");
  local_b8 = FUN_1000d9244;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = FUN_100644a94("UI::EVENT_HUD_SHOW_TALENT_TOOLTIP_FROM_HOVER");
  local_b8 = FUN_1000d9274;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = FUN_100644a94("UI::EVENT_HUD_HIDE_ITEM_TOOLTIP");
  local_b8 = FUN_1000d92a4;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = FUN_100644a94("UI::EVENT_HUD_HIDE_TALENT_TOOLTIP");
  local_b8 = FUN_1000d92c4;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = FUN_100644a94("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP_SIDE");
  local_b8 = FUN_1000d92e4;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = FUN_100644a94("EVENT_SELECT_THUMBS_UP");
  local_b8 = FUN_1000d92ec;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = FUN_100644a94("EVENT_CLEAR_REPORT");
  local_b8 = FUN_1000d9330;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = FUN_100644a94("EVENT_SELECT_NEGATIVE_REPORT");
  local_b8 = FUN_1000d9374;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = FUN_100644a94("EVENT_SELECT_MATCH_RATING");
  local_b8 = FUN_1000d937c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = FUN_100644a94("EVENT_SELECT_MATCH_QUALITY");
  local_b8 = FUN_1000d93c0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = FUN_100644a94("EVENT_SELECT_THANK_YOU");
  local_b8 = FUN_1000d93dc;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  FUN_1001148bc();
  iVar21 = FUN_10011630c();
  if (iVar21 != 0) {
    *puVar16 = *puVar16 & 0xfffffff3;
    *(uint *)((long)param_1 + 0x414c) = *(uint *)((long)param_1 + 0x414c) & 0xfffffff3;
  }
  iVar21 = FUN_10034cb58();
  uVar19 = 0;
  if (iVar21 == 0) {
    uVar19 = 4;
  }
  *puVar16 = *puVar16 & 0xfffffffb | uVar19;
  return;
}




void FUN_1000d90ec(long param_1)

{
  FUN_100269e20(0x3e800000,param_1 + 0x15398,0,4,1);
  return;
}




void FUN_1000d910c(long param_1)

{
  if (*(long **)(param_1 + 200) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000d911c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 200) + 0x10))();
    return;
  }
  return;
}




void FUN_1000d9124(long param_1)

{
  FUN_1000daff4(param_1,(*(byte *)(param_1 + 0x18b90) & 1) == 0);
  return;
}




void FUN_1000d913c(long param_1)

{
  if (*(undefined8 **)(param_1 + 200) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000d914c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 200))();
    return;
  }
  return;
}




void FUN_1000d9154(long param_1)

{
  FUN_1000e50cc(param_1 + 0x17230);
  *(uint *)(param_1 + 0x244) = *(uint *)(param_1 + 0x244) ^ 4;
  return;
}




void thunk_FUN_1000dac60(void)

{
  FUN_1000dac60();
  return;
}




void FUN_1000d9190(long param_1)

{
  if (*(long **)(param_1 + 200) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000d91a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 200) + 8))();
    return;
  }
  return;
}




void FUN_1000d91a8(long param_1)

{
  *(uint *)(param_1 + 0x172b4) = *(uint *)(param_1 + 0x172b4) & 0xfffffffb;
  *(uint *)(param_1 + 0x244) = *(uint *)(param_1 + 0x244) & 0xfffffffb;
  return;
}




void FUN_1000d91cc(long param_1)

{
  if (*(long **)(param_1 + 200) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000d91dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 200) + 0x50))();
    return;
  }
  return;
}




void FUN_1000d91e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100644b2c(param_4);
  FUN_1000db1b0(param_1,1,uVar1);
  return;
}




void FUN_1000d9214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100644b2c(param_4);
  FUN_1000db228(param_1,1,uVar1);
  return;
}




void FUN_1000d9244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100644b2c(param_4);
  FUN_1000db1b0(param_1,0,uVar1);
  return;
}




void FUN_1000d9274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100644b2c(param_4);
  FUN_1000db228(param_1,0,uVar1);
  return;
}




void FUN_1000d92a4(long param_1)

{
  FUN_100269e20(0x3e800000,param_1 + 0x15398,0,4,1);
  return;
}




void FUN_1000d92c4(long param_1)

{
  FUN_100269e20(0x3e800000,param_1 + 0x15398,0,4,1);
  return;
}




void FUN_1000d92e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000db2a0(param_1,param_4);
  return;
}




void FUN_1000d92ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 200);
  if (plVar2 != (long *)0x0) {
    uVar1 = FUN_100644b2c(param_4);
                    /* WARNING: Could not recover jumptable at 0x0001000d9320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar1);
    return;
  }
  return;
}




void FUN_1000d9330(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = FUN_100644b2c(param_4);
  plVar2 = *(long **)(param_1 + 200);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000d9364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))(plVar2,uVar1);
    return;
  }
  return;
}




void FUN_1000d9374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000db380(param_1,param_4);
  return;
}




void FUN_1000d937c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 200);
  if (plVar2 != (long *)0x0) {
    uVar1 = FUN_100644b2c(param_4);
                    /* WARNING: Could not recover jumptable at 0x0001000d93b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x30))(plVar2,uVar1);
    return;
  }
  return;
}




void FUN_1000d93c0(long param_1)

{
  long *plVar1;
  undefined8 in_x4;
  
  plVar1 = *(long **)(param_1 + 200);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000d93d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1,in_x4);
    return;
  }
  return;
}




void FUN_1000d93dc(long param_1)

{
  if (*(long **)(param_1 + 200) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000d93ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 200) + 0x40))();
    return;
  }
  return;
}




void FUN_1000d93f4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auStack_28 [4];
  float local_24;
  
  *(undefined8 *)(param_1 + (param_3 & 0xffffffff) * 8 + 0x4048) = param_2;
  uVar1 = FUN_100642d08(param_2);
  if ((uVar1 & 1) == 0) {
    FUN_100642bd8(param_1 + 0x3f90,param_2,1);
  }
  FUN_100641464(&local_24,auStack_28);
  FUN_10064e47c(local_24 * 0.5,0x43670000,param_2);
  FUN_1000d9474(param_1);
  return;
}




void FUN_1000d9474(long *param_1)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  size_t sVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  param_1[0x814] = param_1[0x813];
  param_1[0x817] = param_1[0x816];
  lVar6 = 0x809;
  do {
    lVar7 = param_1[lVar6];
    if (lVar7 == 0) break;
    plVar3 = (long *)param_1[0x814];
    if (plVar3 == (long *)param_1[0x815]) {
      pvVar4 = (void *)param_1[0x813];
      sVar5 = (long)plVar3 - (long)pvVar4;
      uVar8 = (long)sVar5 >> 3;
      uVar1 = uVar8 + 1;
      if (uVar1 >> 0x3d != 0) goto LAB_1000d9654;
      if (uVar1 <= (ulong)((long)sVar5 >> 2)) {
        uVar1 = (long)sVar5 >> 2;
      }
      if (0xffffffffffffffe < uVar8) {
        uVar1 = 0x1fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3d != 0) goto LAB_1000d9658;
        pvVar2 = operator_new(uVar1 << 3);
      }
      plVar3 = (long *)((long)pvVar2 + uVar8 * 8);
      *plVar3 = lVar7;
      if (0 < (long)sVar5) {
        _memcpy(pvVar2,pvVar4,sVar5);
      }
      param_1[0x813] = (long)pvVar2;
      param_1[0x814] = (long)(plVar3 + 1);
      param_1[0x815] = (long)((long)pvVar2 + uVar1 * 8);
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
    }
    else {
      *plVar3 = lVar7;
      param_1[0x814] = (long)(plVar3 + 1);
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x80e);
  lVar6 = 0x80e;
  do {
    lVar7 = param_1[lVar6];
    if (lVar7 == 0) break;
    plVar3 = (long *)param_1[0x817];
    if (plVar3 == (long *)param_1[0x818]) {
      pvVar4 = (void *)param_1[0x816];
      sVar5 = (long)plVar3 - (long)pvVar4;
      uVar8 = (long)sVar5 >> 3;
      uVar1 = uVar8 + 1;
      if (uVar1 >> 0x3d != 0) {
LAB_1000d9654:
        FUN_1000db534();
LAB_1000d9658:
                    /* WARNING: Subroutine does not return */
        FUN_1000db528();
      }
      if (uVar1 <= (ulong)((long)sVar5 >> 2)) {
        uVar1 = (long)sVar5 >> 2;
      }
      if (0xffffffffffffffe < uVar8) {
        uVar1 = 0x1fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3d != 0) goto LAB_1000d9658;
        pvVar2 = operator_new(uVar1 << 3);
      }
      plVar3 = (long *)((long)pvVar2 + uVar8 * 8);
      *plVar3 = lVar7;
      if (0 < (long)sVar5) {
        _memcpy(pvVar2,pvVar4,sVar5);
      }
      param_1[0x816] = (long)pvVar2;
      param_1[0x817] = (long)(plVar3 + 1);
      param_1[0x818] = (long)((long)pvVar2 + uVar1 * 8);
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
    }
    else {
      *plVar3 = lVar7;
      param_1[0x817] = (long)(plVar3 + 1);
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x813);
                    /* WARNING: Could not recover jumptable at 0x0001000d9650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_1000d965c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auStack_28 [4];
  float local_24;
  
  *(undefined8 *)(param_1 + (param_3 & 0xffffffff) * 8 + 0x4070) = param_2;
  uVar1 = FUN_100642d08(param_2);
  if ((uVar1 & 1) == 0) {
    FUN_100642bd8(param_1 + 0x3f90,param_2,1);
  }
  FUN_100641464(&local_24,auStack_28);
  FUN_10064e47c(local_24 * 0.5,0x43670000,param_2);
  FUN_1000d9474(param_1);
  return;
}




void FUN_1000d96dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  float fVar18;
  undefined4 uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float local_88;
  float local_84;
  
  iVar10 = FUN_100126c88();
  FUN_100641464(&local_84,&local_88);
  uVar20 = (ulong)(uint)local_88;
  FUN_10064e47c(local_84,param_1);
  lVar17 = 0;
  fVar21 = 0.0;
  do {
    plVar15 = *(long **)(param_1 + 0x4048 + lVar17);
    if (plVar15 == (long *)0x0) break;
    FUN_1000d3c3c(plVar15);
    (**(code **)(*plVar15 + 0x48))(plVar15);
    fVar21 = fVar21 + 8.0 + (float)uVar20;
    lVar17 = lVar17 + 8;
  } while (lVar17 != 0x28);
  lVar17 = 0;
  fVar22 = 0.0;
  do {
    plVar15 = *(long **)(param_1 + 0x4070 + lVar17);
    if (plVar15 == (long *)0x0) break;
    FUN_1000d3c3c(plVar15);
    (**(code **)(*plVar15 + 0x48))(plVar15);
    fVar22 = fVar22 + 8.0 + (float)uVar20;
    lVar17 = lVar17 + 8;
  } while (lVar17 != 0x28);
  lVar17 = param_1 + 0x3f90;
  if (fVar21 <= fVar22) {
    fVar21 = fVar22;
  }
  FUN_10064e47c(local_84,fVar21,lVar17);
  FUN_10064e5ec(0,0,lVar17,8,param_1,8);
  puVar14 = *(undefined8 **)(param_1 + 0x4098);
  puVar16 = puVar14;
  if (puVar14 != *(undefined8 **)(param_1 + 0x40a0)) {
    while( true ) {
      if (puVar16 == puVar14) {
        uVar19 = 0x41000000;
        uVar11 = 1;
        uVar13 = 4;
        lVar12 = lVar17;
      }
      else {
        uVar19 = 0x40c00000;
        uVar11 = 4;
        uVar13 = 6;
        lVar12 = puVar16[-1];
      }
      FUN_10064e5ec(0,uVar19,*puVar16,uVar11,lVar12,uVar13);
      if (puVar16 + 1 == *(undefined8 **)(param_1 + 0x40a0)) break;
      puVar14 = *(undefined8 **)(param_1 + 0x4098);
      puVar16 = puVar16 + 1;
    }
  }
  puVar14 = *(undefined8 **)(param_1 + 0x40b0);
  puVar16 = puVar14;
  if (puVar14 != *(undefined8 **)(param_1 + 0x40b8)) {
    while( true ) {
      if (puVar16 == puVar14) {
        uVar19 = 0x41000000;
        uVar11 = 4;
        lVar12 = lVar17;
      }
      else {
        uVar19 = 0x40c00000;
        uVar11 = 3;
        lVar12 = puVar16[-1];
      }
      FUN_10064e5ec(0,uVar19,*puVar16,0,lVar12,uVar11);
      if (puVar16 + 1 == *(undefined8 **)(param_1 + 0x40b8)) break;
      puVar14 = *(undefined8 **)(param_1 + 0x40b0);
      puVar16 = puVar16 + 1;
    }
  }
  fVar21 = (local_88 - *(float *)(param_1 + 0x18b68)) * 0.5 + 3.0;
  *(float *)(param_1 + 0x18b6c) = fVar21;
  if ((*(float *)(param_1 + 0x127f0) != 0.5) || (*(float *)(param_1 + 0x127f4) != 0.0)) {
    *(undefined8 *)(param_1 + 0x127f0) = 0x3f000000;
    FUN_1000200a0(param_1 + 0x127a0);
    fVar21 = *(float *)(param_1 + 0x18b6c);
  }
  bVar9 = false;
  if ((*(float *)(param_1 + 0x127e0) == local_84 * 0.5) &&
     (bVar9 = false, !NAN(*(float *)(param_1 + 0x127e4)) && !NAN(fVar21))) {
    bVar9 = *(float *)(param_1 + 0x127e4) == fVar21;
  }
  if (!bVar9) {
    *(float *)(param_1 + 0x127e0) = local_84 * 0.5;
    *(float *)(param_1 + 0x127e4) = fVar21;
    FUN_1000200a0(param_1 + 0x127a0);
  }
  lVar12 = param_1 + 0x2b0;
  FUN_10064e47c(local_84,0x432b0000,lVar12);
  lVar1 = param_1 + 0x3f8;
  FUN_10064e47c(local_84,0x432b0000,lVar1);
  if ((*(byte *)(param_1 + 0x18b90) >> 3 & 1) != 0) {
    FUN_10064e47c(local_84,0x432b0000,param_1 + 0x540);
  }
  FUN_10064e5ec(0,0,lVar12,6,lVar17,4);
  uVar20 = 0;
  FUN_10064e5ec(0,0,lVar1,4,lVar17,6);
  if ((*(byte *)(param_1 + 0x18b90) >> 3 & 1) != 0) {
    uVar20 = 0;
    FUN_10064e5ec(0,0,param_1 + 0x540,4,lVar17,6);
  }
  FUN_10064eb7c(lVar12,4,lVar1,6);
  fVar21 = (float)FUN_100641440();
  fVar22 = fVar21 - local_84;
  if ((*(byte *)(param_1 + 0x18b90) >> 4 & 1) != 0) {
    fVar18 = (float)FUN_1000e49b0(param_1 + 0xaf80);
    uVar20 = (ulong)(uint)(fVar18 + 300.0);
  }
  FUN_10064e47c(fVar22 + fVar21,uVar20,param_1 + 0xd0);
  lVar17 = param_1 + 0xd0;
  uVar13 = 0;
  FUN_10064e5ec(0,0,lVar17,8,param_1,8);
  FUN_10064eb7c(param_1,4,lVar12,4);
  uVar11 = uVar13;
  FUN_10064eb7c(lVar1,6,param_1,6);
  lVar2 = param_1 + 0x5f8;
  FUN_10064e47c(local_84,uVar13,lVar2);
  lVar3 = param_1 + 0x740;
  FUN_10064e47c(local_84,uVar11,lVar3);
  FUN_10064e47c(local_84,0x41a80000,param_1 + 0x888);
  FUN_10064e47c(local_84,0x41a80000,param_1 + 0x978);
  FUN_10064e5ec(0,0,param_1 + 0x888,6,lVar2,6);
  FUN_10064e5ec(0,0,param_1 + 0x978,4,lVar3,4);
  FUN_10064e5ec(0,0,lVar2,6,lVar17,4);
  FUN_10064e5ec(0,0,lVar3,4,lVar17,6);
  lVar2 = param_1 + 0xa68;
  FUN_10064e47c(0x42940000,0x42940000,lVar2);
  lVar3 = param_1 + 0xb58;
  FUN_1000e52ec(lVar3);
  lVar4 = param_1 + 0x1008;
  FUN_1000e52ec(lVar4);
  FUN_1000e52ec(param_1 + 0x1718);
  lVar5 = param_1 + 0x1bc8;
  FUN_1000e52ec(lVar5);
  FUN_1000e52ec(param_1 + 0x2078);
  lVar6 = param_1 + 0x2528;
  FUN_1000e52ec(lVar6);
  lVar7 = param_1 + 0x15e8;
  FUN_10064e5ec(0x42ce0000,0,lVar7,7,lVar12,7);
  FUN_10064e5ec(0,0,lVar2,8,lVar12,8);
  FUN_10064e5ec(0,0,lVar7,8,lVar2,8);
  FUN_10064e5ec(0,0x41500000,param_1 + 0x14b8,4,lVar2,6);
  if ((*(uint *)(param_1 + 0x166c) & 4) != 0) {
    lVar2 = lVar7;
  }
  FUN_10064e5ec(0xc22c0000,0xc0000000,lVar3,5,lVar2,7);
  FUN_10064e5ec(0x422c0000,0xbf800000,lVar4,7,lVar2,5);
  FUN_10064e5ec(0xc2880000,0,lVar5,5,lVar3,7);
  FUN_10064e5ec(0x42880000,0,lVar6,7,lVar4,5);
  FUN_10064e5ec(0xc3000000,0,param_1 + 0x1718,5,lVar5,7);
  FUN_10064e5ec(0x43000000,0,param_1 + 0x2078,7,lVar6,5);
  lVar2 = param_1 + 0x12828;
  FUN_10064e5ec(0xc1f00000,0xc0000000,lVar2,5,lVar12,5);
  if ((iVar10 != 0) &&
     ((*(float *)(param_1 + 0x12870) != 1.5 || (*(float *)(param_1 + 0x12874) != 1.5)))) {
    uVar11 = NEON_fmov(0x3fc00000,4);
    *(undefined8 *)(param_1 + 0x12870) = uVar11;
    FUN_1000200a0(lVar2);
  }
  if ((*(byte *)(param_1 + 0x18b90) >> 3 & 1) != 0) {
    FUN_100181c68(0x42f60000,param_1 + 0x13de0);
    FUN_10064e5ec(0,0,param_1 + 0x13de0,5,lVar2,5);
  }
  lVar12 = param_1 + 0x29d8;
  FUN_100181c68(0x42dc0000,lVar12);
  FUN_100181c18(0x42000000,0x43be0000,0x44160000,lVar12);
  uVar8 = *(uint *)(param_1 + 0x2a5c);
  if ((uVar8 & 0x7f80) != 0x4980) {
    *(uint *)(param_1 + 0x2a5c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x4980;
    FUN_1000200a0(lVar12);
  }
  FUN_10064e72c(0xc1c00000,lVar12,1,lVar2,3);
  FUN_10064e72c(0,lVar12,5,lVar2,5);
  lVar12 = param_1 + 0x40c8;
  FUN_100181c68(0x42f60000,lVar12);
  lVar2 = param_1 + 0x5680;
  FUN_100181c68(0x42f60000,lVar2);
  lVar3 = param_1 + 0x81f0;
  FUN_100181c68(0x42f60000,lVar3);
  lVar4 = param_1 + 0x6c38;
  FUN_100181c68(0x42f60000,lVar4);
  FUN_100181c18(0x42000000,0x43f78000,0x44394000,lVar12);
  FUN_100181c18(0x42000000,0x43f78000,0x44394000,lVar2);
  FUN_100181c18(0x42000000,0x43f78000,0x44394000,lVar3);
  FUN_100181c18(0x42000000,0x43f78000,0x44394000,lVar4);
  FUN_10064e5ec(0x42000000,0,lVar12,7,lVar1,7);
  FUN_10064e5ec(0x42000000,0,lVar2,7,lVar12,5);
  FUN_10064e5ec(0xc2000000,0,lVar3,5,lVar1,5);
  if ((*(byte *)(param_1 + 0x18b90) >> 3 & 1) != 0) {
    lVar12 = param_1 + 0x540;
    FUN_10064e5ec(0,0,param_1 + 0xad60,8,lVar12,8);
    FUN_10064e72c(0,param_1 + 0xae50,5,lVar12,5);
    fVar21 = (float)FUN_10064e3cc(lVar12);
    FUN_10064e5ec(fVar21 * 0.25,0,param_1 + 0xae50,8,param_1 + 0xad60,5);
  }
  FUN_10064e72c(0xc2000000,lVar4,1,lVar3,3);
  FUN_10064e72c(0,lVar4,5,lVar3,5);
  FUN_10064e5ec(0,0xc2200000,param_1 + 0x17230,6,lVar2,4);
  FUN_10064e47c(local_84,local_88,param_1 + 0x1c0);
  param_1 = param_1 + 0xaf80;
  FUN_10064e47c(local_84,local_88,param_1);
  FUN_10064e5ec(0,0,param_1,8,lVar17,8);
  FUN_1000e463c(param_1);
  return;
}




void FUN_1000da0d4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000da0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_1000da0e0(long *param_1,int param_2)

{
  FUN_100269e20();
  if (param_2 == 0) {
    FUN_100269e20(0x3e800000,param_1 + 0x2a73,0,4,1);
    return;
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  if ((*(byte *)(param_1 + 0x3172) & 1) == 0) {
    return;
  }
  FUN_1000da160(param_1);
  return;
}




void FUN_1000da160(long *param_1)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    return;
  }
  plVar1 = param_1;
  if (param_1[0x809] != 0) {
    plVar1 = (long *)FUN_1000db06c(param_1,param_1 + 0x809,param_1 + 0x813);
  }
  if (param_1[0x80e] != 0) {
    FUN_1000db06c(plVar1,param_1 + 0x80e,param_1 + 0x816);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000da1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_1000da1d4(long *param_1,int param_2,int param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 local_54;
  undefined1 auStack_50 [8];
  void *local_48;
  
  uVar2 = FUN_1004e0150("HUD_SCOREBOARD_GAMEOVER_FINISH",0);
  uVar2 = FUN_100181af8(param_1 + 0x103e,uVar2);
  uVar2 = FUN_1000da3c8(uVar2,param_1 + 0x103e);
  plVar1 = param_1 + 0x819;
  uVar2 = FUN_1000da3c8(uVar2,plVar1);
  uVar2 = FUN_1000da3c8(uVar2,param_1 + 0xad0);
  FUN_1000da3c8(uVar2,param_1 + 0xd87);
  uVar2 = FUN_1004e0150("HUD_SCOREBOARD_GAMEOVER_REPLAY",0);
  FUN_100181af8(plVar1,uVar2);
  FUN_1001b4c0c(plVar1,1);
  *(uint *)((long)param_1 + 0x5704) = *(uint *)((long)param_1 + 0x5704) | 4;
  *(uint *)((long)param_1 + 0x128ac) = *(uint *)((long)param_1 + 0x128ac) & 0xfffffffb;
  plVar1 = param_1 + 0x2bd;
  *(uint *)((long)param_1 + 0x166c) = *(uint *)((long)param_1 + 0x166c) | 4;
  *(uint *)((long)param_1 + 0xaec) = *(uint *)((long)param_1 + 0xaec) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x6cbc) = *(uint *)((long)param_1 + 0x6cbc) | 4;
  *(uint *)((long)param_1 + 0x13e64) = *(uint *)((long)param_1 + 0x13e64) | 4;
  FUN_1004e313c(auStack_50);
  if (param_3 == 0) {
    if (param_2 != 0) {
      uVar2 = FUN_1004e0150("HUD_GAMEOVER_BANNER_VICTORY",0);
      FUN_1000153b4(auStack_50,uVar2);
      FUN_1006513c0(plVar1,auStack_50);
      goto LAB_1000da348;
    }
    uVar2 = FUN_1004e0150("HUD_GAMEOVER_BANNER_DEFEAT",0);
    FUN_1000153b4(auStack_50,uVar2);
    FUN_1006513c0(plVar1,auStack_50);
  }
  else {
    if (param_3 == 2) {
      uVar2 = FUN_1004e0150("HUD_GAMEOVER_BANNER_SURRENDER",0);
      FUN_1000153b4(auStack_50,uVar2);
    }
    FUN_1006513c0(plVar1,auStack_50);
    if (param_2 != 0) {
LAB_1000da348:
      local_54 = 0xffbc9c44;
      goto LAB_1000da384;
    }
  }
  local_54 = 0xff2424b3;
LAB_1000da384:
  FUN_100651460(plVar1,&local_54);
  (**(code **)(*param_1 + 0x150))(param_1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




void FUN_1000da3c8(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  
  uVar1 = *(uint *)(param_2 + 0x84);
  *(uint *)(param_2 + 0x84) = uVar1 & 0xffffffef;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x84) = uVar1 & 0xffff806f;
    FUN_1000200a0(param_2);
  }
  uVar3 = FUN_100640840(0x3f800000,0x3f800000,0);
  FUN_100640840(0x3f800000,0x3e4ccccd,0);
  lVar2 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063f098(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_10063f0d8(puVar5,1);
  FUN_100642b7c(param_2,uVar3);
  return;
}




void FUN_1000da4e4(long param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if ((*(byte *)(param_1 + 0x18b90) >> 1 & 1) != 0) {
    pcVar1 = "hud_blitz_coin_enemy";
    pcVar2 = "hud_blitz_coin_friendly";
    if (param_2 == 0) {
      pcVar1 = "hud_blitz_coin_friendly";
      pcVar2 = "hud_blitz_coin_enemy";
    }
    FUN_1000e53c8(param_1 + 0xb58,pcVar2);
    FUN_1000e53c8(param_1 + 0x1008,pcVar1);
  }
  if (param_2 == 0) {
    FUN_1000e53fc(param_1 + 0xb58,&DAT_10115a168,&DAT_10114bfc4);
    FUN_1000e53fc(param_1 + 0x1008,&DAT_10115a168,&DAT_10114bfb8);
    FUN_1000e53fc(param_1 + 0x1718,&DAT_10114bfcc,&DAT_10114bfc8);
    FUN_1000e53fc(param_1 + 0x1bc8,&DAT_10114bfcc,&DAT_10114bfc8);
    puVar3 = &DAT_10114bfc0;
    puVar4 = &DAT_10114bfbc;
  }
  else {
    FUN_1000e53fc(param_1 + 0xb58,&DAT_10115a168,&DAT_10114bfb8);
    FUN_1000e53fc(param_1 + 0x1008,&DAT_10115a168,&DAT_10114bfc4);
    FUN_1000e53fc(param_1 + 0x1718,&DAT_10114bfc0,&DAT_10114bfbc);
    FUN_1000e53fc(param_1 + 0x1bc8,&DAT_10114bfc0,&DAT_10114bfbc);
    puVar3 = &DAT_10114bfcc;
    puVar4 = &DAT_10114bfc8;
  }
  FUN_1000e53fc(param_1 + 0x2078,puVar3,puVar4);
  FUN_1000e53fc(param_1 + 0x2528,puVar3,puVar4);
  return;
}




void FUN_1000da67c(long param_1)

{
  FUN_1004e38ac(param_1 + 0x18b80,"%d");
  FUN_1000e543c(param_1 + 0xb58,param_1 + 0x18b80);
  return;
}




void FUN_1000da6c8(long param_1)

{
  FUN_1004e38ac(param_1 + 0x18b80,"%d");
  FUN_1000e543c(param_1 + 0x1008,param_1 + 0x18b80);
  return;
}




void FUN_1000da718(float param_1,long param_2)

{
  void *local_60 [2];
  char local_49;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  if (param_1 <= 1e+06) {
    if (1000.0 < param_1) {
      FUN_10001549c(local_60,"k");
      std::string::operator=((string *)&local_48,(string *)local_60);
      if (local_49 < '\0') {
        operator_delete(local_60[0]);
      }
    }
  }
  else {
    FUN_10001549c(local_60,"M");
    std::string::operator=((string *)&local_48,(string *)local_60);
    if (local_49 < '\0') {
      operator_delete(local_60[0]);
    }
  }
  FUN_1004e38ac(param_2 + 0x18b80,"%.1f%s");
  FUN_1000e543c(param_2 + 0x1bc8,param_2 + 0x18b80);
  if (local_38 < 0) {
    operator_delete(local_48);
  }
  return;
}




void FUN_1000da83c(float param_1,long param_2)

{
  void *local_60 [2];
  char local_49;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  if (param_1 <= 1e+06) {
    if (1000.0 < param_1) {
      FUN_10001549c(local_60,"k");
      std::string::operator=((string *)&local_48,(string *)local_60);
      if (local_49 < '\0') {
        operator_delete(local_60[0]);
      }
    }
  }
  else {
    FUN_10001549c(local_60,"M");
    std::string::operator=((string *)&local_48,(string *)local_60);
    if (local_49 < '\0') {
      operator_delete(local_60[0]);
    }
  }
  FUN_1004e38ac(param_2 + 0x18b80,"%.1f%s");
  FUN_1000e543c(param_2 + 0x2528,param_2 + 0x18b80);
  if (local_38 < 0) {
    operator_delete(local_48);
  }
  return;
}




void FUN_1000da960(long param_1)

{
  FUN_1004e38ac(param_1 + 0x18b80,"%d");
  FUN_1000e543c(param_1 + 0x1718,param_1 + 0x18b80);
  return;
}




void FUN_1000da9b0(long param_1)

{
  FUN_1004e38ac(param_1 + 0x18b80,"%d");
  FUN_1000e543c(param_1 + 0x2078,param_1 + 0x18b80);
  return;
}




void FUN_1000daa00(long param_1)

{
  FUN_1004e38ac(param_1 + 0x18b80,"%d:%02d");
  FUN_1006513c0(param_1 + 0x14b8,param_1 + 0x18b80);
  return;
}




void FUN_1000daa6c(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x414c) = *(uint *)(param_1 + 0x414c) & 0xfffffffb | uVar1;
  return;
}




void FUN_1000daa90(long param_1,int param_2)

{
  undefined1 auStack_40 [8];
  void *local_38;
  
  if (0 < param_2) {
    thunk_FUN_1004e439c(auStack_40,param_1 + 0x18b70);
    FUN_1004e38ac(param_1 + 0x18b80,"  %d:%02d");
    FUN_1004e372c(auStack_40,param_1 + 0x18b80);
    FUN_100181af8(param_1 + 0x40c8,auStack_40);
    FUN_1001b4c0c(param_1 + 0x40c8,0);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    return;
  }
  FUN_100181af8(param_1 + 0x40c8,param_1 + 0x18b70);
  FUN_1001b4c0c(param_1 + 0x40c8,1);
  return;
}




void FUN_1000dab94(long param_1,int param_2)

{
  long lVar1;
  byte bVar2;
  
  bVar2 = 2;
  if (param_2 == 0) {
    bVar2 = 0;
  }
  *(byte *)(param_1 + 0x18b90) = *(byte *)(param_1 + 0x18b90) & 0xfd | bVar2;
  if (param_2 != 0) {
    FUN_1000e53c8(param_1 + 0xb58,"hud_blitz_coin_friendly");
    FUN_1000e53c8(param_1 + 0x1008,"hud_blitz_coin_enemy");
    return;
  }
  lVar1 = param_1 + 0x2b0;
  FUN_10064f31c(lVar1,param_1 + 0x1718,1);
  FUN_10064f31c(lVar1,param_1 + 0x1bc8,1);
  FUN_10064f31c(lVar1,param_1 + 0x2078,1);
  FUN_10064f31c(lVar1,param_1 + 0x2528,1);
  return;
}




void FUN_1000dac54(long param_1)

{
  FUN_100181af8(param_1 + 0x40c8);
  return;
}




void FUN_1000dac60(long param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  
  pbVar1 = (byte *)(param_1 + 0x18b90);
  bVar3 = *pbVar1;
  *pbVar1 = bVar3 ^ 4;
  pcVar2 = "HUD_SCOREBOARD_SOCIAL_TOGLE_BUTTON";
  if (((bVar3 ^ 4) & 4) != 0) {
    pcVar2 = "HUD_SCOREBOARD_GAMEPLAY_TOGGLE_BUTTON";
  }
  uVar4 = FUN_1004e0150(pcVar2,0);
  FUN_100181af8(param_1 + 0x6c38,uVar4);
  lVar5 = 0;
  do {
    if (*(long *)(param_1 + 0x4048 + lVar5) == 0) break;
    if ((*pbVar1 >> 2 & 1) == 0) {
      FUN_1000d5c74();
    }
    else {
      FUN_1000d5c38();
    }
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x28);
  lVar5 = 0;
  do {
    if (*(long *)(param_1 + 0x4070 + lVar5) == 0) {
      return;
    }
    if ((*pbVar1 >> 2 & 1) == 0) {
      FUN_1000d5c74();
    }
    else {
      FUN_1000d5c38();
    }
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x28);
  return;
}




void FUN_1000dad38(long param_1)

{
  *(byte *)(param_1 + 0x18b90) = *(byte *)(param_1 + 0x18b90) & 0xfb;
  FUN_1000dac60();
  return;
}




void FUN_1000dad50(long param_1)

{
  *(byte *)(param_1 + 0x18b90) = *(byte *)(param_1 + 0x18b90) | 4;
  FUN_1000dac60();
  return;
}




void FUN_1000dad68(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100641574("root-layer");
  if (lVar1 != 0) {
    uVar2 = FUN_100640840(0,param_1,FUN_10001f160);
    FUN_100642b14(lVar1,uVar2);
    return;
  }
  return;
}




void FUN_1000dadcc(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 8;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x18b90) = *(byte *)(param_1 + 0x18b90) & 0xf7 | bVar1;
  return;
}




undefined4 FUN_1000dadf4(long param_1)

{
  undefined1 auStack_20 [8];
  undefined4 auStack_18 [2];
  
  FUN_1006428bc(param_1 + 0x13de0,auStack_18,auStack_20);
  return auStack_18[0];
}




void FUN_1000dae38(long param_1)

{
  if ((*(byte *)(param_1 + 0x18b90) >> 3 & 1) != 0) {
    *(uint *)(param_1 + 0x13e64) = *(uint *)(param_1 + 0x13e64) & 0xfffffffb;
    *(uint *)(param_1 + 0x47c) = *(uint *)(param_1 + 0x47c) & 0xfffffffb;
    *(uint *)(param_1 + 0x5c4) = *(uint *)(param_1 + 0x5c4) | 4;
  }
  return;
}




void FUN_1000dae7c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18b90) >> 3 & 1) != 0) {
    *(uint *)(param_1 + 0x13e64) = *(uint *)(param_1 + 0x13e64) | 4;
    *(uint *)(param_1 + 0x47c) = *(uint *)(param_1 + 0x47c) | 4;
    *(uint *)(param_1 + 0x5c4) = *(uint *)(param_1 + 0x5c4) & 0xfffffffb;
  }
  return;
}




void FUN_1000daec0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x809;
  do {
    if (param_1[lVar1] != 0) {
      FUN_100642324();
      *(uint *)(param_1[lVar1] + 0x84) = *(uint *)(param_1[lVar1] + 0x84) & 0xfffffffb;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x80e);
  do {
    if (param_1[lVar1] != 0) {
      FUN_100642324();
      *(uint *)(param_1[lVar1] + 0x84) = *(uint *)(param_1[lVar1] + 0x84) & 0xfffffffb;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x813);
  *(uint *)((long)param_1 + 0x166c) = *(uint *)((long)param_1 + 0x166c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x128ac) = *(uint *)((long)param_1 + 0x128ac) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x172b4) = *(uint *)((long)param_1 + 0x172b4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x334) = *(uint *)((long)param_1 + 0x334) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x47c) = *(uint *)((long)param_1 + 0x47c) & 0xfffffffb;
  FUN_1000e47f0(param_1 + 0x15f0);
  *(byte *)(param_1 + 0x3172) = *(byte *)(param_1 + 0x3172) | 0x10;
                    /* WARNING: Could not recover jumptable at 0x0001000dafc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_1000dafc4(long param_1)

{
  FUN_1000e4870(param_1 + 0xaf80);
  return;
}




void FUN_1000dafd0(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x414c) = *(uint *)(param_1 + 0x414c) & 0xfffffffb | uVar1;
  return;
}




void FUN_1000daff4(long param_1,int param_2)

{
  byte *pbVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pbVar1 = (byte *)(param_1 + 0x18b90);
  *pbVar1 = *pbVar1 & 0xfe | (byte)param_2;
  if (param_2 == 0) {
    FUN_1000d9474();
  }
  else {
    FUN_1000da160();
  }
  pcVar2 = "HUD_SCOREBOARD_FIXED_ORDER_BUTTON";
  if ((*pbVar1 & 1) != 0) {
    pcVar2 = "HUD_SCOREBOARD_SORT_BY_GOLD_BUTTON";
  }
  uVar3 = FUN_1004e0150(pcVar2,0);
  FUN_100181af8(param_1 + 0x29d8,uVar3);
  return;
}




void FUN_1000db06c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  size_t sVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  code *local_68;
  
  lVar6 = 0;
  param_3[1] = *param_3;
  do {
    lVar8 = *(long *)(param_2 + lVar6);
    if (lVar8 == 0) break;
    plVar2 = (long *)param_3[1];
    if (plVar2 == (long *)param_3[2]) {
      pvVar4 = (void *)*param_3;
      sVar5 = (long)plVar2 - (long)pvVar4;
      uVar7 = (long)sVar5 >> 3;
      uVar1 = uVar7 + 1;
      if (uVar1 >> 0x3d != 0) {
        FUN_1000db534();
LAB_1000db194:
                    /* WARNING: Subroutine does not return */
        FUN_1000db528();
      }
      if (uVar1 <= (ulong)((long)sVar5 >> 2)) {
        uVar1 = (long)sVar5 >> 2;
      }
      if (0xffffffffffffffe < uVar7) {
        uVar1 = 0x1fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar3 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3d != 0) goto LAB_1000db194;
        pvVar3 = operator_new(uVar1 << 3);
      }
      plVar2 = (long *)((long)pvVar3 + uVar7 * 8);
      *plVar2 = lVar8;
      if (0 < (long)sVar5) {
        _memcpy(pvVar3,pvVar4,sVar5);
      }
      *param_3 = pvVar3;
      param_3[1] = plVar2 + 1;
      param_3[2] = (void *)((long)pvVar3 + uVar1 * 8);
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
    }
    else {
      *plVar2 = lVar8;
      param_3[1] = plVar2 + 1;
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x28);
  local_68 = FUN_1000db198;
  FUN_1000db540(*param_3,param_3[1],&local_68);
  return;
}




bool FUN_1000db198(long param_1,long param_2)

{
  return *(float *)(param_2 + 0x9220) < *(float *)(param_1 + 0x9220);
}




void FUN_1000db1b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  float *pfVar1;
  long lVar2;
  bool bVar3;
  
  pfVar1 = (float *)(param_1 + 87000);
  lVar2 = param_1 + 0x15398;
  FUN_1000853c4(lVar2,param_3,param_2);
  bVar3 = false;
  if ((*(float *)(param_1 + 0x153dc) == 0.0) && (bVar3 = false, !NAN(*pfVar1))) {
    bVar3 = *pfVar1 == 0.0;
  }
  if (!bVar3) {
    pfVar1[0] = 0.0;
    pfVar1[1] = 0.0;
    FUN_1000200a0(lVar2);
  }
  FUN_100269e20(0x3e800000,lVar2,1,4,1);
  return;
}




void FUN_1000db228(long param_1,undefined8 param_2,undefined8 param_3)

{
  float *pfVar1;
  long lVar2;
  bool bVar3;
  
  pfVar1 = (float *)(param_1 + 87000);
  lVar2 = param_1 + 0x15398;
  FUN_100085684(lVar2,param_3,param_2);
  bVar3 = false;
  if ((*(float *)(param_1 + 0x153dc) == 0.0) && (bVar3 = false, !NAN(*pfVar1))) {
    bVar3 = *pfVar1 == 0.0;
  }
  if (!bVar3) {
    pfVar1[0] = 0.0;
    pfVar1[1] = 0.0;
    FUN_1000200a0(lVar2);
  }
  FUN_100269e20(0x3e800000,lVar2,1,4,1);
  return;
}




void FUN_1000db2a0(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float local_40;
  undefined1 auStack_3c [4];
  undefined1 *local_38;
  
  plVar1 = (long *)(param_1 + 0x15398);
  FUN_100641464(auStack_3c,&local_40);
  iVar2 = FUN_100644b2c(param_2);
  fVar3 = 452.0;
  if (iVar2 != 1) {
    fVar3 = -452.0;
  }
  fVar4 = ((-18.0 - *(float *)(param_1 + 0x18b6c)) + local_40 * 0.5) / *(float *)(param_1 + 0x4c);
  if ((*(float *)(param_1 + 87000) != fVar3) || (*(float *)(param_1 + 0x153dc) != fVar4)) {
    *(float *)(param_1 + 87000) = fVar3;
    *(float *)(param_1 + 0x153dc) = fVar4;
    FUN_1000200a0(plVar1);
  }
  local_38 = &DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_38);
  return;
}




void FUN_1000db380(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_100644b2c(param_2);
  plVar2 = *(long **)(param_1 + 200);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000db3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))
              (plVar2,lVar1,*(undefined4 *)(lVar1 + 0x10),*(undefined1 *)(lVar1 + 0x14));
    return;
  }
  return;
}




void FUN_1000db3cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101456770;
  thunk_FUN_100651068(param_1 + 0x2c8);
  FUN_10003bd40(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_1000db410(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_101456628;
  FUN_10003bd40(param_1 + 0xc4d);
  thunk_FUN_100651068(param_1 + 0xc27);
  thunk_FUN_10064e2bc(param_1 + 0xc10);
  puVar2 = param_1 + 0x921;
  puVar3 = param_1 + 0xbe9;
  lVar4 = -0x5de0;
  do {
    *puVar2 = &PTR_FUN_101456770;
    thunk_FUN_100651068(puVar3);
    FUN_10003bd40(puVar2 + 0x11);
    FUN_10064221c(puVar2);
    puVar2 = puVar2 + -0x2ef;
    puVar3 = puVar3 + -0x2ef;
    lVar4 = lVar4 + 0x1778;
  } while (lVar4 != 0);
  thunk_FUN_100651068(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1000db4e0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101456770;
  thunk_FUN_100651068(param_1 + 0x2c8);
  FUN_10003bd40(param_1 + 0x11);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1000db528(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_1000db534(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_1000db540(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
LAB_1000db56c:
  puVar8 = param_2 + -1;
  puVar9 = param_1;
LAB_1000db574:
  param_1 = puVar9;
  lVar7 = (long)param_2 - (long)param_1;
  uVar5 = lVar7 >> 3;
  switch(uVar5) {
  case 0:
  case 1:
    goto switchD_1000db814_caseD_0;
  case 2:
    iVar3 = (*(code *)*param_3)(*puVar8,*param_1);
    if (iVar3 == 0) {
      return;
    }
    uVar6 = *param_1;
    *param_1 = *puVar8;
    *puVar8 = uVar6;
    return;
  case 3:
    FUN_1000db914(param_1,param_1 + 1,puVar8,param_3);
    return;
  case 4:
    FUN_1000dba00(param_1,param_1 + 1,param_1 + 2,puVar8,param_3);
    return;
  case 5:
    FUN_1000dbacc(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar8,param_3);
    return;
  default:
    if (lVar7 < 0xf8) {
      FUN_1000dbbd0(param_1,param_2,param_3);
      return;
    }
    uVar1 = uVar5;
    if ((long)uVar5 < 0) {
      uVar1 = uVar5 + 1;
    }
    puVar9 = (undefined8 *)((long)param_1 + (uVar1 & 0x3ffffffffffffffe) * 4);
    if (lVar7 < 0x1f39) {
      iVar3 = FUN_1000db914(param_1,puVar9,puVar8,param_3);
    }
    else {
      uVar1 = uVar5 + 3;
      if (-1 < (long)uVar5) {
        uVar1 = uVar5;
      }
      lVar7 = (uVar1 & 0x7ffffffffffffffc) * 2;
      iVar3 = FUN_1000dbacc(param_1,(long)param_1 + lVar7,puVar9,(long)puVar9 + lVar7,puVar8,param_3
                           );
    }
    uVar5 = (*(code *)*param_3)(*param_1,*puVar9);
    puVar10 = puVar8;
    if ((uVar5 & 1) == 0) break;
    goto LAB_1000db644;
  }
  while (puVar10 = puVar10 + -1, puVar10 != param_1) {
    iVar4 = (*(code *)*param_3)(*puVar10,*puVar9);
    if (iVar4 != 0) goto code_r0x0001000db630;
  }
  puVar10 = param_1 + 1;
  uVar5 = (*(code *)*param_3)(*param_1,*puVar8);
  puVar9 = puVar10;
  if ((uVar5 & 1) == 0) {
    while( true ) {
      if (puVar9 == puVar8) {
        return;
      }
      iVar3 = (*(code *)*param_3)(*param_1,*puVar9);
      if (iVar3 != 0) break;
      puVar9 = puVar9 + 1;
    }
    uVar6 = *puVar9;
    puVar10 = puVar9 + 1;
    *puVar9 = *puVar8;
    *puVar8 = uVar6;
  }
  puVar12 = puVar8;
  if (puVar10 == puVar8) {
    return;
  }
  while( true ) {
    puVar9 = puVar10 + -1;
    do {
      puVar10 = puVar9;
      puVar9 = puVar10 + 1;
      iVar3 = (*(code *)*param_3)(*param_1,*puVar9);
    } while (iVar3 == 0);
    puVar10 = puVar10 + 2;
    do {
      puVar12 = puVar12 + -1;
      uVar5 = (*(code *)*param_3)(*param_1,*puVar12);
    } while ((uVar5 & 1) != 0);
    if (puVar12 <= puVar9) break;
    uVar6 = *puVar9;
    *puVar9 = *puVar12;
    *puVar12 = uVar6;
  }
  goto LAB_1000db574;
code_r0x0001000db630:
  uVar6 = *param_1;
  *param_1 = *puVar10;
  *puVar10 = uVar6;
  iVar3 = iVar3 + 1;
LAB_1000db644:
  puVar12 = param_1 + 1;
  puVar2 = puVar9;
  puVar11 = puVar12;
  if (puVar12 < puVar10) {
    while( true ) {
      puVar9 = puVar2;
      puVar12 = puVar11 + -1;
      do {
        puVar11 = puVar12;
        puVar12 = puVar11 + 1;
        uVar5 = (*(code *)*param_3)(*puVar12,*puVar9);
      } while ((uVar5 & 1) != 0);
      puVar11 = puVar11 + 2;
      do {
        puVar10 = puVar10 + -1;
        iVar4 = (*(code *)*param_3)(*puVar10,*puVar9);
      } while (iVar4 == 0);
      if (puVar10 < puVar12) break;
      uVar6 = *puVar12;
      *puVar12 = *puVar10;
      *puVar10 = uVar6;
      iVar3 = iVar3 + 1;
      puVar2 = puVar10;
      if (puVar12 != puVar9) {
        puVar2 = puVar9;
      }
    }
  }
  if ((puVar12 != puVar9) && (iVar4 = (*(code *)*param_3)(*puVar9,*puVar12), iVar4 != 0)) {
    uVar6 = *puVar12;
    *puVar12 = *puVar9;
    *puVar9 = uVar6;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 0) {
    uVar5 = FUN_1000dbca0(param_1,puVar12,param_3);
    iVar3 = FUN_1000dbca0(puVar12 + 1,param_2,param_3);
    if (iVar3 != 0) goto LAB_1000db7f4;
    puVar9 = puVar12 + 1;
    if ((uVar5 & 1) != 0) goto LAB_1000db574;
  }
  if ((long)param_2 - (long)puVar12 <= (long)puVar12 - (long)param_1) {
    FUN_1000db540(puVar12 + 1,param_2,param_3);
    param_2 = puVar12;
    goto LAB_1000db56c;
  }
  FUN_1000db540(param_1,puVar12,param_3);
  puVar9 = puVar12 + 1;
  goto LAB_1000db574;
LAB_1000db7f4:
  param_2 = puVar12;
  if ((uVar5 & 1) != 0) {
switchD_1000db814_caseD_0:
    return;
  }
  goto LAB_1000db56c;
}




undefined8
FUN_1000db914(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = (*(code *)*param_4)(*param_2,*param_1);
  uVar3 = (*(code *)*param_4)(*param_3,*param_2);
  if ((uVar2 & 1) == 0) {
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    iVar1 = (*(code *)*param_4)(*param_2,*param_1);
    if (iVar1 != 0) {
      uVar3 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar3;
      return 2;
    }
  }
  else {
    uVar4 = *param_1;
    if ((int)uVar3 == 0) {
      *param_1 = *param_2;
      *param_2 = uVar4;
      iVar1 = (*(code *)*param_4)(*param_3);
      if (iVar1 != 0) {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        return 2;
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar4;
    }
  }
  return 1;
}




ulong FUN_1000dba00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = FUN_1000db914();
  iVar1 = (*(code *)*param_5)(*param_4,*param_3);
  if (iVar1 != 0) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    iVar1 = (*(code *)*param_5)(*param_3,*param_2);
    iVar4 = (int)uVar2;
    if (iVar1 == 0) {
      uVar2 = (ulong)(iVar4 + 1);
    }
    else {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      iVar1 = (*(code *)*param_5)(*param_2,*param_1);
      if (iVar1 == 0) {
        uVar2 = (ulong)(iVar4 + 2);
      }
      else {
        uVar3 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar3;
        uVar2 = (ulong)(iVar4 + 3);
      }
    }
  }
  return uVar2;
}




ulong FUN_1000dbacc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = FUN_1000dba00();
  iVar1 = (*(code *)*param_6)(*param_5,*param_4);
  if (iVar1 != 0) {
    uVar3 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar3;
    iVar1 = (*(code *)*param_6)(*param_4,*param_3);
    iVar4 = (int)uVar2;
    if (iVar1 == 0) {
      uVar2 = (ulong)(iVar4 + 1);
    }
    else {
      uVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar3;
      iVar1 = (*(code *)*param_6)(*param_3,*param_2);
      if (iVar1 == 0) {
        uVar2 = (ulong)(iVar4 + 2);
      }
      else {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        iVar1 = (*(code *)*param_6)(*param_2,*param_1);
        if (iVar1 == 0) {
          uVar2 = (ulong)(iVar4 + 3);
        }
        else {
          uVar3 = *param_1;
          *param_1 = *param_2;
          *param_2 = uVar3;
          uVar2 = (ulong)(iVar4 + 4);
        }
      }
    }
  }
  return uVar2;
}




void FUN_1000dbbd0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  FUN_1000db914(param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar8 = 0;
    puVar5 = param_1 + 3;
    puVar6 = param_1 + 2;
    do {
      puVar4 = puVar5;
      iVar2 = (*(code *)*param_3)(*puVar4,*puVar6);
      if (iVar2 != 0) {
        uVar7 = *puVar4;
        lVar1 = lVar8;
        do {
          lVar9 = lVar1;
          *(undefined8 *)((long)param_1 + lVar9 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x10);
          puVar5 = param_1;
          if (lVar9 == -0x10) goto LAB_1000dbc74;
          uVar3 = (*(code *)*param_3)(uVar7,*(undefined8 *)((long)param_1 + lVar9 + 8));
          lVar1 = lVar9 + -8;
        } while ((uVar3 & 1) != 0);
        puVar5 = (undefined8 *)((long)param_1 + lVar9 + 0x10);
LAB_1000dbc74:
        *puVar5 = uVar7;
      }
      lVar8 = lVar8 + 8;
      puVar5 = puVar4 + 1;
      puVar6 = puVar4;
    } while (puVar4 + 1 != param_2);
  }
  return;
}




bool FUN_1000dbca0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    iVar2 = (*(code *)*param_3)(param_2[-1],*param_1);
    if (iVar2 != 0) {
      uVar8 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar8;
    }
    break;
  case 3:
    FUN_1000db914(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_1000dba00(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_1000dbacc(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_1000db914(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar9 = 0;
      iVar2 = 0;
      puVar6 = param_1 + 3;
      puVar7 = param_1 + 2;
      do {
        puVar5 = puVar6;
        iVar3 = (*(code *)*param_3)(*puVar5,*puVar7);
        if (iVar3 != 0) {
          uVar8 = *puVar5;
          lVar1 = lVar9;
          do {
            lVar10 = lVar1;
            *(undefined8 *)((long)param_1 + lVar10 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x10);
            puVar6 = param_1;
            if (lVar10 == -0x10) goto LAB_1000dbda0;
            uVar4 = (*(code *)*param_3)(uVar8,*(undefined8 *)((long)param_1 + lVar10 + 8));
            lVar1 = lVar10 + -8;
          } while ((uVar4 & 1) != 0);
          puVar6 = (undefined8 *)((long)param_1 + lVar10 + 0x10);
LAB_1000dbda0:
          *puVar6 = uVar8;
          iVar2 = iVar2 + 1;
          if (iVar2 == 8) {
            return puVar5 + 1 == param_2;
          }
        }
        lVar9 = lVar9 + 8;
        puVar6 = puVar5 + 1;
        puVar7 = puVar5;
      } while (puVar5 + 1 != param_2);
    }
  }
  return true;
}




long * FUN_1000dbe40(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)FUN_10064e20c();
  *puVar7 = &PTR_FUN_101456870;
  puVar7[0x18] = 0;
  puVar7[0x19] = 0;
  thunk_FUN_100652c08(puVar7 + 0x1a);
  plVar1 = param_1 + 0x38;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x5e;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x84;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0xa2;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0xc0;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0xde;
  thunk_FUN_100652c08(plVar6);
  param_1[0xfc] = 0;
  *(undefined4 *)(param_1 + 0xfd) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0xfe) = 0;
  *(undefined2 *)((long)param_1 + 0x7f4) = 0;
  *(undefined4 *)((long)param_1 + 0x7fc) = 0xbf800000;
  *(undefined2 *)(param_1 + 0x100) = 0;
  *(undefined1 *)((long)param_1 + 0x802) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar7 + 0x1a,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsTutorialDialog_t_10184e0e0,"dialog_bg_small");
  FUN_100652cac(plVar4,PTR_s_build___HUDPartsTutorialDialog_t_10184e0e0,"speech_bubble_top");
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsTutorialDialog_t_10184e0e0,"speech_bubble_mid");
  FUN_100652cac(plVar6,PTR_s_build___HUDPartsTutorialDialog_t_10184e0e0,"speech_bubble_bot");
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_24_fo_10184e218);
  FUN_100651460(plVar1,&DAT_10114bfda);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_24_fo_10184e218);
  FUN_100651460(plVar2,&DAT_10114bfd6);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  return param_1;
}




void FUN_1000dc058(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float local_a0;
  undefined1 auStack_9c [4];
  undefined4 local_98;
  undefined4 uStack_94;
  float local_90;
  float fStack_8c;
  undefined4 local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined1 auStack_78 [4];
  float local_74;
  
  FUN_100641464(&local_74,auStack_78);
  fVar12 = 0.4;
  fVar15 = local_74 * 0.4;
  plVar9 = param_1 + 0x1a;
  local_74 = fVar15;
  FUN_100652e60(plVar9);
  FUN_10064e47c(fVar15,param_1);
  FUN_10065317c(plVar9);
  plVar1 = param_1 + 0x84;
  FUN_10064e47c(local_74,fVar12 * 0.9,plVar1);
  plVar2 = param_1 + 0xc0;
  fVar12 = (float)FUN_10065317c(plVar2);
  fVar14 = *(float *)(param_1 + 0xc9);
  plVar3 = param_1 + 0x5e;
  FUN_100651708(fVar12 + fVar14 * -80.0,plVar3,1);
  plVar4 = param_1 + 0x38;
  FUN_100651708(0x43960000,plVar4,1);
  uVar13 = FUN_100652e60(plVar2);
  FUN_1006511d0(plVar3);
  plVar5 = param_1 + 0xde;
  fVar15 = fVar14;
  FUN_100652e60(plVar5);
  plVar6 = param_1 + 0xa2;
  fVar12 = fVar15;
  FUN_100652e60(plVar6);
  FUN_10064e47c(uVar13,(fVar14 - fVar15) + fVar12 * -0.25,plVar2);
  if ((int)param_1[0xfe] == 2) {
    *(byte *)(param_1 + 0xbd) = *(byte *)(param_1 + 0xbd) | 1;
    *(byte *)(param_1 + 0xdb) = *(byte *)(param_1 + 0xdb) | 1;
    *(byte *)(param_1 + 0xf9) = *(byte *)(param_1 + 0xf9) | 1;
    *(byte *)(param_1 + 0x9f) = *(byte *)(param_1 + 0x9f) | 1;
    FUN_10064e68c(0,0,param_1,1);
    FUN_10064e68c(0x42a00000,0,plVar9,1);
    FUN_10064e5ec(0xc2a00000,0x41000000,plVar1,2,plVar9,2);
    fVar12 = (float)FUN_10065317c(plVar9);
    FUN_10064e5ec(100.0 - fVar12,0x42a00000,plVar6,1,plVar1,1);
    FUN_10064e5ec(0,0,plVar2,0,plVar6,3);
    FUN_10064e5ec(0,0,plVar5,0,plVar2,3);
    uVar13 = 0x42080000;
  }
  else {
    *(byte *)(param_1 + 0xbd) = *(byte *)(param_1 + 0xbd) & 0xfe;
    *(byte *)(param_1 + 0xdb) = *(byte *)(param_1 + 0xdb) & 0xfe;
    *(byte *)(param_1 + 0xf9) = *(byte *)(param_1 + 0xf9) & 0xfe;
    *(byte *)(param_1 + 0x9f) = *(byte *)(param_1 + 0x9f) & 0xfe;
    FUN_10064e68c(0,0,param_1,0);
    FUN_10064e68c(0xc2a00000,0,plVar9,0);
    FUN_10064e5ec(0x42a00000,0x41000000,plVar1,3,plVar9,3);
    fVar12 = (float)FUN_10065317c(plVar9);
    FUN_10064e5ec(fVar12 + -190.0,0x42a00000,plVar6,0,plVar1,0);
    FUN_10064e5ec(0,0,plVar2,0,plVar6,3);
    FUN_10064e5ec(0,0,plVar5,0,plVar2,3);
    uVar13 = 0x428c0000;
  }
  FUN_10064e5ec(uVar13,0x428c0000,plVar4,3,plVar6,0);
  FUN_10064e5ec(0,0,plVar3,0,plVar4,3);
  plVar9 = (long *)FUN_100641564((long)*(short *)((long)param_1 + 0x7f4));
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x68))(plVar9,&local_80,&local_88);
    (**(code **)(*param_1 + 0x68))(param_1,&local_90,&local_98);
    if (local_80 <= local_90) {
      local_80 = local_90;
    }
    fVar12 = local_7c;
    if (local_7c <= fStack_8c) {
      fVar12 = fStack_8c;
    }
    fVar15 = (float)NEON_fminnm(local_88,local_98);
    fVar14 = (float)NEON_fminnm(local_84,uStack_94);
    bVar7 = false;
    bVar8 = false;
    if (fVar12 < fVar14) {
      bVar7 = false;
      bVar8 = true;
      if (!NAN(local_80) && !NAN(fVar15)) {
        bVar7 = local_80 < fVar15;
        bVar8 = false;
      }
    }
    fVar12 = (fVar14 - fVar12) * (fVar15 - local_80);
    if (bVar7 == bVar8) {
      fVar12 = 0.0;
    }
    if (0.0 < fVar12) {
      FUN_10064140c(auStack_9c,&local_a0);
      if (local_a0 - local_84 <= local_7c) {
        uVar11 = 0x80000000;
        uVar13 = 2;
        uVar10 = 0;
      }
      else {
        uVar11 = 0;
        uVar13 = 0;
        uVar10 = 2;
      }
      FUN_10064e72c(uVar11,param_1,uVar13,plVar9,uVar10);
    }
  }
  return;
}




long * FUN_1000dc498(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  *puVar2 = &PTR_thunk_FUN_1000dc560_1014569b8;
  puVar1 = puVar2 + 0x1a;
  puVar2[0x19] = 0;
  FUN_10064e264(puVar1);
  lVar3 = 0;
  do {
    FUN_1000dbe40((long)param_1 + lVar3 + 0x188);
    lVar3 = lVar3 + 0x808;
  } while (lVar3 != 0x1010);
  *(undefined4 *)(param_1 + 0x233) = 0;
  param_1[0x49] = (long)param_1;
  param_1[0x14a] = (long)param_1;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,param_1 + 0x31,1);
  FUN_100642bd8(puVar1,param_1 + 0x132,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  return param_1;
}




long * thunk_FUN_1000dc498(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  *puVar2 = &PTR_thunk_FUN_1000dc560_1014569b8;
  puVar1 = puVar2 + 0x1a;
  puVar2[0x19] = 0;
  FUN_10064e264(puVar1);
  lVar3 = 0;
  do {
    FUN_1000dbe40((long)param_1 + lVar3 + 0x188);
    lVar3 = lVar3 + 0x808;
  } while (lVar3 != 0x1010);
  *(undefined4 *)(param_1 + 0x233) = 0;
  param_1[0x49] = (long)param_1;
  param_1[0x14a] = (long)param_1;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,param_1 + 0x31,1);
  FUN_100642bd8(puVar1,param_1 + 0x132,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  return param_1;
}




void FUN_1000dc560(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = 0;
  *param_1 = &PTR_thunk_FUN_1000dc560_1014569b8;
  lVar2 = 0x1080;
  lVar3 = 0x1060;
  lVar4 = 0x1150;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x990) = &PTR_FUN_101456870;
    *(undefined ***)((long)param_1 + lVar1 + 0x1080) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x1138) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar4);
    FUN_10064e2bc((long)param_1 + lVar2);
    *(undefined ***)((long)param_1 + lVar1 + 0xf90) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x1048) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar3);
    FUN_10064e2bc((long)param_1 + lVar1 + 0xf90);
    *(undefined ***)((long)param_1 + lVar1 + 0xea0) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0xf58) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0xf70);
    FUN_10064e2bc((long)param_1 + lVar1 + 0xea0);
    *(undefined ***)((long)param_1 + lVar1 + 0xdb0) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0xe68) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0xe80);
    FUN_10064e2bc((long)param_1 + lVar1 + 0xdb0);
    thunk_FUN_100651068((long)param_1 + lVar1 + 0xc80);
    thunk_FUN_100651068((long)param_1 + lVar1 + 0xb50);
    *(undefined ***)((long)param_1 + lVar1 + 0xa60) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0xb18) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0xb30);
    FUN_10064e2bc((long)param_1 + lVar1 + 0xa60);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x990);
    lVar1 = lVar1 + -0x808;
    lVar2 = lVar2 + -0x808;
    lVar3 = lVar3 + -0x808;
    lVar4 = lVar4 + -0x808;
  } while (lVar1 != -0x1010);
  thunk_FUN_10064e2bc(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000dc6a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101456870;
  param_1[0xde] = &PTR_FUN_1014a7108;
  param_1[0xf5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf8);
  FUN_10064e2bc(param_1 + 0xde);
  param_1[0xc0] = &PTR_FUN_1014a7108;
  param_1[0xd7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xda);
  FUN_10064e2bc(param_1 + 0xc0);
  param_1[0xa2] = &PTR_FUN_1014a7108;
  param_1[0xb9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xbc);
  FUN_10064e2bc(param_1 + 0xa2);
  param_1[0x84] = &PTR_FUN_1014a7108;
  param_1[0x9b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9e);
  FUN_10064e2bc(param_1 + 0x84);
  thunk_FUN_100651068(param_1 + 0x5e);
  thunk_FUN_100651068(param_1 + 0x38);
  param_1[0x1a] = &PTR_FUN_1014a7108;
  param_1[0x31] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x34);
  FUN_10064e2bc(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000dc560(void)

{
  FUN_1000dc560();
  return;
}




void FUN_1000dc788(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000dc560();
  operator_delete(pvVar1);
  return;
}




void FUN_1000dc79c(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long local_50;
  code *pcStack_48;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x1198);
  if (((*(char *)(param_1 + uVar2 * 0x808 + 0x988) != '\0') &&
      (*(char *)(param_1 + uVar2 * 0x808 + 0x989) == '\0')) &&
     (*(long *)(param_1 + uVar2 * 0x808 + 0x250) != 0)) {
    lVar3 = param_1 + uVar2 * 0x808;
    plVar1 = *(long **)(lVar3 + 0x968);
    if (plVar1 != (long *)0x0) {
      lVar4 = param_1 + uVar2 * 0x808;
      if (*(int *)(lVar4 + 0x970) == (int)plVar1[1]) {
        lVar3 = (**(code **)(*plVar1 + 0x10))();
        if (lVar3 != 0) {
          return;
        }
        uVar2 = (ulong)*(uint *)(param_1 + 0x1198);
      }
      else {
        *(undefined8 *)(lVar3 + 0x968) = 0;
        *(undefined4 *)(lVar4 + 0x970) = DAT_101dc0b88;
      }
    }
    local_50 = param_1 + 0x188 + uVar2 * 0x808;
    *(undefined1 *)(local_50 + 0x801) = 1;
    pcStack_48 = FUN_1000dd400;
    FUN_100643618(0x3e99999a,&local_50,0,1);
    if (*(char *)(param_1 + 0x188 + (ulong)*(uint *)(param_1 + 0x1198) * 0x808 + 0x802) == '\0') {
      param_1 = param_1 + ((ulong)~*(uint *)(param_1 + 0x1198) & 1) * 0x808;
      local_50 = param_1 + 0x188;
      pcStack_48 = FUN_1000dd444;
      FUN_100643618(*(float *)(*(long *)(param_1 + 0x240) + 0x28) + 0.3,&local_50,0,1);
    }
  }
  return;
}




void FUN_1000dc8ec(long param_1)

{
  undefined4 local_28;
  undefined4 uStack_24;
  
  FUN_100641464(&uStack_24,&local_28);
  FUN_10064e47c(uStack_24,local_28,param_1);
  FUN_10064e47c(uStack_24,local_28,param_1 + 0xd0);
  FUN_10064e68c(0,0,param_1,0);
  FUN_10064e68c(0,0,param_1 + 0xd0,0);
  FUN_1000dc058(param_1 + 0x188);
  FUN_1000dc058(param_1 + 0x990);
  return;
}




void thunk_FUN_1000dc8ec(void)

{
  FUN_1000dc8ec();
  return;
}




void FUN_1000dc974(long param_1,long param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x1198) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_1000dd1ac(param_1 + 0x188);
  FUN_1000dd1ac(param_1 + 0x990);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(long *)(param_1 + 0xc0) = param_2;
  *(undefined8 *)(param_1 + 200) = uVar1;
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
  FUN_1000dc8ec(param_1);
  FUN_1000dc9d0(param_1,1);
  return;
}




void FUN_1000dc9d0(long param_1,int param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x1198) = ~*(uint *)(param_1 + 0x1198) & 1;
  }
  else {
    FUN_1000dcafc(param_1 + (ulong)*(uint *)(param_1 + 0x1198) * 0x808 + 0x188,
                  **(undefined8 **)(param_1 + 200));
  }
  plVar3 = (long *)(*(long *)(param_1 + 200) + 8);
  uVar2 = (ulong)*(uint *)(param_1 + 0x1198);
  if (*plVar3 == 0) {
    *(undefined1 *)(param_1 + uVar2 * 0x808 + 0x98a) = 1;
  }
  else {
    uVar1 = FUN_1000dcafc(param_1 + 0x188 + ((ulong)~*(uint *)(param_1 + 0x1198) & 1) * 0x808);
    uVar2 = (ulong)*(uint *)(param_1 + 0x1198);
    if (*(long *)(param_1 + 0x188 + uVar2 * 0x808 + 200) == 0) {
      FUN_1000dd2cc(uVar1,param_1 + (ulong)(~*(uint *)(param_1 + 0x1198) & 1) * 0x808 + 0x188,plVar3
                   );
      uVar2 = (ulong)*(uint *)(param_1 + 0x1198);
    }
  }
  FUN_1000dccac(param_1 + uVar2 * 0x808 + 0x188);
  FUN_1000dc8ec(param_1);
  *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 8;
  return;
}




void FUN_1000dcab0(long param_1)

{
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  *(undefined4 *)(param_1 + 0x1198) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_1000dd1ac(param_1 + 0x188);
  FUN_1000dd1ac(param_1 + 0x990);
  return;
}




void FUN_1000dcafc(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  *(long *)(param_1 + 0xb8) = param_2;
  FUN_1004d2698(auStack_b8,DAT_10184e0e8);
  lVar1 = param_1 + 0xd0;
  FUN_100652d8c(lVar1);
  FUN_100652ca4(lVar1,auStack_b8);
  FUN_100652cdc(lVar1,"Cutscene_Avatar");
  bVar2 = false;
  if ((*(float *)(param_1 + 0x118) == 0.5) && (bVar2 = false, !NAN(*(float *)(param_1 + 0x11c)))) {
    bVar2 = *(float *)(param_1 + 0x11c) == 0.5;
  }
  if (!bVar2) {
    *(undefined1 **)(param_1 + 0x118) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar1);
  }
  lVar1 = param_1 + 0x1c0;
  FUN_100651038(lVar1,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220);
  FUN_100651460(lVar1,&DAT_10114bfda);
  uVar5 = FUN_1004e0150(*(undefined8 *)(param_2 + 0x18),0);
  FUN_1006513c0(lVar1,uVar5);
  FUN_10065165c(lVar1,1);
  FUN_1006516bc(lVar1,&DAT_101d22fe8);
  lVar1 = param_1 + 0x2f0;
  FUN_100651038(lVar1,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651460(lVar1,&DAT_10114bfd6);
  uVar5 = FUN_1004e0150(*(undefined8 *)(param_2 + 0x10),0);
  FUN_1006513c0(lVar1,uVar5);
  *(undefined4 *)(param_1 + 0x7f8) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x7f0) = *(undefined4 *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = FUN_1004d2524(uVar5);
  uVar3 = FUN_100015208(uVar5,uVar4,0x1234);
  *(undefined2 *)(param_1 + 0x7f4) = uVar3;
  uVar5 = 0;
  if (*(long *)(*(long *)(param_1 + 0xb8) + 0x38) != 0) {
    uVar5 = FUN_100094c08();
  }
  *(undefined8 *)(param_1 + 200) = uVar5;
  *(undefined2 *)(param_1 + 0x800) = 0;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000dccac(long param_1)

{
  long local_30;
  code *pcStack_28;
  
  if (*(long *)(param_1 + 200) == 0) {
    pcStack_28 = FUN_1000dd400;
    local_30 = param_1;
    FUN_100643618(*(undefined4 *)(param_1 + 0x7f8),&local_30,0,1);
  }
  FUN_1000dcd04(param_1,1);
  return;
}




void FUN_1000dcd04(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                  long param_5,int param_6)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  ushort uVar5;
  ushort *puVar6;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  FUN_100642324();
  FUN_1000dc058(param_5);
  lVar4 = DAT_101dbd2f8;
  local_48 = *(float *)(param_5 + 0x40);
  fStack_44 = *(float *)(param_5 + 0x44);
  switch(*(undefined4 *)(param_5 + 0x7f0)) {
  case 0:
  case 3:
    local_50 = -220.0;
    param_3 = local_50;
    param_4 = fStack_44;
    fStack_4c = fStack_44;
    goto joined_r0x0001000dcd8c;
  case 1:
    param_4 = -220.0;
    param_3 = local_48;
    local_50 = local_48;
    fStack_4c = param_4;
    break;
  case 2:
  case 5:
    param_3 = local_48 + 220.0;
    param_4 = fStack_44;
    local_50 = param_3;
    fStack_4c = fStack_44;
    goto joined_r0x0001000dcd8c;
  case 4:
    param_4 = 220.0;
    param_3 = local_48;
    local_50 = local_48;
    fStack_4c = param_4;
  }
joined_r0x0001000dcd8c:
  if (param_6 == 0) {
    uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar6;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_10063f0f0(puVar6);
      *(undefined ***)puVar6 = &PTR_thunk_FUN_10063eeb4_1014a5410;
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_10063f0e8(0x3e19999a,puVar6);
    uVar3 = FUN_1000b50a8();
    FUN_10063fb90(uVar3,&local_50);
    FUN_10063f0e8(0x3e99999a,uVar3);
    FUN_10063f130(uVar3,FUN_10001f160);
    uVar3 = FUN_10001f4d4();
    FUN_10063f2a4(uVar3,puVar6);
    lVar4 = DAT_101dbd2f8;
    uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar6;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_10063f050(puVar6);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_10063f090(puVar6,0);
    lVar4 = FUN_10008e900();
    *(code **)(lVar4 + 0x10) = FUN_1000dd0e4;
    *(long *)(lVar4 + 0x20) = param_5;
    FUN_100642b7c(param_5,uVar3);
  }
  else {
    bVar2 = false;
    if ((local_48 == param_3) && (bVar2 = false, !NAN(fStack_44) && !NAN(param_4))) {
      bVar2 = fStack_44 == param_4;
    }
    if (!bVar2) {
      *(ulong *)(param_5 + 0x40) = CONCAT44(fStack_4c,local_50);
      FUN_1000200a0(param_5);
    }
    uVar1 = *(uint *)(param_5 + 0x84);
    *(uint *)(param_5 + 0x84) = uVar1 | 4;
    if ((uVar1 & 0x7f80) != 0) {
      *(uint *)(param_5 + 0x84) = uVar1 & 0xffff807f | 4;
      FUN_1000200a0(param_5);
    }
    lVar4 = DAT_101dbd2f8;
    uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar6;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_10063f0f0(puVar6);
      *(undefined ***)puVar6 = &PTR_thunk_FUN_10063eeb4_1014a53c8;
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_10063f0e8(0x3e4ccccd,puVar6);
    uVar3 = FUN_1000b50a8();
    FUN_10063fb90(uVar3,&local_48);
    FUN_10063f0e8(0x3ecccccd,uVar3);
    FUN_10063f130(uVar3,FUN_10001f160);
    lVar4 = FUN_10008e900();
    *(code **)(lVar4 + 0x10) = FUN_1000dd088;
    *(long *)(lVar4 + 0x20) = param_5;
    uVar3 = FUN_10001f4d4();
    FUN_10063f2a4(uVar3,puVar6);
    FUN_100642b14(param_5,uVar3);
  }
  return;
}




void FUN_1000dd088(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 200) != 0) {
    lVar4 = FUN_100094b5c(0x3f800000);
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = lVar4 + 0x28;
    }
    puVar2 = &DAT_101dc0b88;
    if (lVar4 != 0) {
      puVar2 = (undefined4 *)(lVar1 + 8);
    }
    uVar3 = *puVar2;
    *(long *)(param_1 + 0x7e0) = lVar1;
    *(undefined4 *)(param_1 + 0x7e8) = uVar3;
  }
  *(undefined1 *)(param_1 + 0x800) = 1;
  return;
}




void FUN_1000dd0e4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  plVar1 = *(long **)(param_1 + 0x7e0);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x7e8) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x7e0);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x7e8) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x7e0) = 0;
            *(undefined4 *)(param_1 + 0x7e8) = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0,uVar3);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x7e0) = 0;
      *(undefined4 *)(param_1 + 0x7e8) = DAT_101dc0b88;
    }
  }
  if (*(char *)(param_1 + 0x802) != '\0') {
    FUN_1000dcab0(*(undefined8 *)(param_1 + 0xc0));
    return;
  }
  return;
}




void FUN_1000dd1ac(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long local_30;
  code *pcStack_28;
  
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  plVar1 = *(long **)(param_1 + 0x7e0);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x7e8) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) goto LAB_1000dd264;
      plVar1 = *(long **)(param_1 + 0x7e0);
      uVar3 = 0;
      if (plVar1 != (long *)0x0) {
        if (*(int *)(param_1 + 0x7e8) == (int)plVar1[1]) {
          uVar3 = (**(code **)(*plVar1 + 0x10))();
        }
        else {
          uVar3 = 0;
          *(undefined8 *)(param_1 + 0x7e0) = 0;
          *(undefined4 *)(param_1 + 0x7e8) = DAT_101dc0b88;
        }
      }
      FUN_10004b1f8(0,uVar3);
      uVar4 = DAT_101dc0b88;
      *(undefined8 *)(param_1 + 0x7e0) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x7e0) = 0;
      uVar4 = DAT_101dc0b88;
    }
    *(undefined4 *)(param_1 + 0x7e8) = uVar4;
  }
LAB_1000dd264:
  *(undefined2 *)(param_1 + 0x800) = 0;
  *(undefined1 *)(param_1 + 0x802) = 0;
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  *(undefined2 *)(param_1 + 0x7f4) = 0;
  *(undefined4 *)(param_1 + 0x7fc) = 0xbf800000;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  pcStack_28 = FUN_1000dd400;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  pcStack_28 = FUN_1000dd444;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  FUN_100652d8c(param_1 + 0xd0);
  FUN_100642324(param_1);
  return;
}




void FUN_1000dd2cc(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 local_20;
  code *pcStack_18;
  
  if ((param_3 != (long *)0x0) && (*param_3 != 0)) {
    pcStack_18 = FUN_1000dd444;
    local_20 = param_2;
    FUN_100643618(*(float *)(*param_3 + 0x28) + *(float *)(param_3[-1] + 0x2c),&local_20,0,1);
  }
  return;
}




void FUN_1000dd31c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101456870;
  param_1[0xde] = &PTR_FUN_1014a7108;
  param_1[0xf5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf8);
  FUN_10064e2bc(param_1 + 0xde);
  param_1[0xc0] = &PTR_FUN_1014a7108;
  param_1[0xd7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xda);
  FUN_10064e2bc(param_1 + 0xc0);
  param_1[0xa2] = &PTR_FUN_1014a7108;
  param_1[0xb9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xbc);
  FUN_10064e2bc(param_1 + 0xa2);
  param_1[0x84] = &PTR_FUN_1014a7108;
  param_1[0x9b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9e);
  FUN_10064e2bc(param_1 + 0x84);
  thunk_FUN_100651068(param_1 + 0x5e);
  thunk_FUN_100651068(param_1 + 0x38);
  param_1[0x1a] = &PTR_FUN_1014a7108;
  param_1[0x31] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x34);
  FUN_10064e2bc(param_1 + 0x1a);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1000dd400(undefined8 param_1)

{
  undefined8 local_30;
  code *pcStack_28;
  
  pcStack_28 = FUN_1000dd400;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  FUN_1000dcd04(param_1,0);
  return;
}




void FUN_1000dd444(long param_1)

{
  long local_30;
  code *pcStack_28;
  
  pcStack_28 = FUN_1000dd444;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  FUN_1000dc9d0(*(undefined8 *)(param_1 + 0xc0),0);
  return;
}




long * FUN_1000dd488(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_100269da8();
  puVar4[0x19] = 0;
  *puVar4 = &PTR_thunk_FUN_1000dd734_101456b00;
  puVar4 = puVar4 + 0x1a;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x38;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x56;
  thunk_FUN_100651ebc(plVar2);
  plVar3 = param_1 + 0x80;
  thunk_FUN_100650e64(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(puVar4,PTR_s_build___HUDPartsTutorialDialog_t_10184e0e0,"speech_frame_mid");
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsTutorialDialog_t_10184e0e0,"speech_frame_bot");
  if ((*(float *)(param_1 + 0x23) != 2.0) || (*(float *)((long)param_1 + 0x11c) != 1.0)) {
    param_1[0x23] = 0x3f80000040000000;
    FUN_1000200a0(puVar4);
  }
  if ((*(float *)(param_1 + 0x41) != 2.0) || (*(float *)((long)param_1 + 0x20c) != 1.0)) {
    param_1[0x41] = 0x3f80000040000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100651f8c(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  if ((*(uint *)((long)param_1 + 0x334) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x334) = *(uint *)((long)param_1 + 0x334) & 0xffff807f;
    FUN_1000200a0(plVar2);
  }
  FUN_100652590(plVar2,&DAT_10115a168,2);
  FUN_100651f94(plVar2,"square_button_fill_top_left",0,0,0,"square_button_fill_top_middle",0,0,0,
                "square_button_fill_top_left",1,"square_button_fill_middle_left",0,
                "white_background",0,"square_button_fill_middle_right",0,
                "square_button_fill_bottom_left",0,"square_button_fill_bottom_middle",0,
                "square_button_fill_bottom_right",0);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_100651460(plVar3,&DAT_10114bfe8);
  FUN_100651700(plVar3,3);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  return param_1;
}




long * thunk_FUN_1000dd488(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_100269da8();
  puVar4[0x19] = 0;
  *puVar4 = &PTR_thunk_FUN_1000dd734_101456b00;
  puVar4 = puVar4 + 0x1a;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x38;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x56;
  thunk_FUN_100651ebc(plVar2);
  plVar3 = param_1 + 0x80;
  thunk_FUN_100650e64(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(puVar4,PTR_s_build___HUDPartsTutorialDialog_t_10184e0e0,"speech_frame_mid");
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsTutorialDialog_t_10184e0e0,"speech_frame_bot");
  if ((*(float *)(param_1 + 0x23) != 2.0) || (*(float *)((long)param_1 + 0x11c) != 1.0)) {
    param_1[0x23] = 0x3f80000040000000;
    FUN_1000200a0(puVar4);
  }
  if ((*(float *)(param_1 + 0x41) != 2.0) || (*(float *)((long)param_1 + 0x20c) != 1.0)) {
    param_1[0x41] = 0x3f80000040000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100651f8c(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  if ((*(uint *)((long)param_1 + 0x334) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x334) = *(uint *)((long)param_1 + 0x334) & 0xffff807f;
    FUN_1000200a0(plVar2);
  }
  FUN_100652590(plVar2,&DAT_10115a168,2);
  FUN_100651f94(plVar2,"square_button_fill_top_left",0,0,0,"square_button_fill_top_middle",0,0,0,
                "square_button_fill_top_left",1,"square_button_fill_middle_left",0,
                "white_background",0,"square_button_fill_middle_right",0,
                "square_button_fill_bottom_left",0,"square_button_fill_bottom_middle",0,
                "square_button_fill_bottom_right",0);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_100651460(plVar3,&DAT_10114bfe8);
  FUN_100651700(plVar3,3);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  return param_1;
}




void FUN_1000dd734(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000dd734_101456b00;
  thunk_FUN_100651068(param_1 + 0x80);
  param_1[0x56] = &PTR_FUN_1014a6db0;
  param_1[0x6d] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x70);
  FUN_10064e2bc(param_1 + 0x56);
  param_1[0x38] = &PTR_FUN_1014a7108;
  param_1[0x4f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x52);
  FUN_10064e2bc(param_1 + 0x38);
  param_1[0x1a] = &PTR_FUN_1014a7108;
  param_1[0x31] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x34);
  FUN_10064e2bc(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000dd734(void)

{
  FUN_1000dd734();
  return;
}




void FUN_1000dd7e8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000dd734();
  operator_delete(pvVar1);
  return;
}




void FUN_1000dd7fc(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  
  FUN_100641464(&uStack_54,&local_58);
  FUN_10064e47c(uStack_54,local_58,param_1);
  lVar1 = param_1 + 0xd0;
  fVar3 = (float)FUN_10065317c(lVar1);
  fVar5 = -100.0;
  lVar2 = param_1 + 0x400;
  FUN_100651708(fVar3 + -100.0,lVar2,1);
  FUN_1006511d0(lVar2);
  uVar4 = FUN_100652e60(lVar1);
  fVar5 = fVar5 + 80.0;
  FUN_10064e47c(uVar4,fVar5,lVar1);
  uVar4 = FUN_10065317c(lVar1);
  FUN_10065317c(lVar1);
  fVar3 = fVar5;
  FUN_10065317c(param_1 + 0x1c0);
  FUN_10064e47c(uVar4,fVar3 + fVar5,param_1 + 0x2b0);
  FUN_10064e68c(0,0,param_1,0);
  FUN_10064e68c(0,0,lVar1,4);
  FUN_10064e5ec(0,0,param_1 + 0x1c0,0,lVar1,3);
  FUN_10064e5ec(0,0x42200000,lVar2,4,lVar1,4);
  FUN_10064e5ec(0,0,param_1 + 0x2b0,4,lVar1,4);
  return;
}




void FUN_1000dd958(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000dd960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_1000dd964(long *param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  FUN_1006513c0(param_1 + 0x80);
  if ((~*(uint *)((long)param_1 + 0x334) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x334) = *(uint *)((long)param_1 + 0x334) | 0x7f80;
    FUN_1000200a0(param_1 + 0x56);
  }
  lVar1 = DAT_101dbd2f8;
  uVar2 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063fcac(puVar3);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f0e8(0x3ecccccd,puVar3);
  FUN_10063fce0(0,puVar3);
  FUN_100642b14(param_1 + 0x56,puVar3);
                    /* WARNING: Could not recover jumptable at 0x0001000dda58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_1000dda5c(void)

{
  return;
}




long FUN_1000dda60(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_100655644();
  *puVar1 = &PTR_thunk_FUN_1000ddb00_101456c68;
  puVar1[0x2b] = 0;
  *(undefined2 *)(puVar1 + 0x30) = 0x101;
  uVar2 = FUN_1000bdb98();
  FUN_1004e18bc(uVar2,param_1,0x8a579c5c,FUN_1000ddacc,0);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffffffe7 | 0x10;
  return param_1;
}




void FUN_1000ddacc(undefined8 param_1)

{
  undefined4 in_stack_00000000;
  
  FUN_1000ddde8(param_1,in_stack_00000000,*(undefined4 *)((ulong)&stack0x00000000 | 8));
  return;
}




long thunk_FUN_1000dda60(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_100655644();
  *puVar1 = &PTR_thunk_FUN_1000ddb00_101456c68;
  puVar1[0x2b] = 0;
  *(undefined2 *)(puVar1 + 0x30) = 0x101;
  uVar2 = FUN_1000bdb98();
  FUN_1004e18bc(uVar2,param_1,0x8a579c5c,FUN_1000ddacc,0);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffffffe7 | 0x10;
  return param_1;
}




void FUN_1000ddb00(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_1000ddb00_101456c68;
  if ((long *)param_1[0x2e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2e] + 0x48))();
  }
  if ((long *)param_1[0x2f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2f] + 0x48))();
  }
  if (param_1[0x2c] != 0) {
    pvVar1 = (void *)thunk_FUN_1000c5f68();
    operator_delete(pvVar1);
  }
  if (param_1[0x2d] != 0) {
    pvVar1 = (void *)thunk_FUN_1000c5f68();
    operator_delete(pvVar1);
  }
  uVar2 = FUN_1000bdb98();
  FUN_1004e1b58(uVar2,param_1);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000ddb00(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_1000ddb00_101456c68;
  if ((long *)param_1[0x2e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2e] + 0x48))();
  }
  if ((long *)param_1[0x2f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2f] + 0x48))();
  }
  if (param_1[0x2c] != 0) {
    pvVar1 = (void *)thunk_FUN_1000c5f68();
    operator_delete(pvVar1);
  }
  if (param_1[0x2d] != 0) {
    pvVar1 = (void *)thunk_FUN_1000c5f68();
    operator_delete(pvVar1);
  }
  uVar2 = FUN_1000bdb98();
  FUN_1004e1b58(uVar2,param_1);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000ddb9c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000ddb00();
  operator_delete(pvVar1);
  return;
}




void FUN_1000ddbb0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x158) = param_2;
  return;
}




void FUN_1000ddbb8(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0xc;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x84) = uVar1 | *(uint *)(param_1 + 0x84) & 0xfffffff3;
  return;
}




undefined8 FUN_1000ddbd8(long param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((*(long *)(param_1 + 0x160) == 0) || (iVar1 = FUN_1000c6100(), iVar1 != param_2)) {
    if (*(long *)(param_1 + 0x168) == 0) {
      return 0;
    }
    iVar1 = FUN_1000c6100();
    if (iVar1 != param_2) {
      return 0;
    }
    puVar2 = (undefined8 *)(param_1 + 0x178);
  }
  else {
    puVar2 = (undefined8 *)(param_1 + 0x170);
  }
  FUN_1000bf92c(*puVar2);
  return 1;
}




void FUN_1000ddc40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x170) != 0) {
    FUN_10064e47c(0x433e0000,0x433e0000,*(undefined8 *)(*(long *)(param_1 + 0x170) + 8));
    (**(code **)(**(long **)(*(long *)(param_1 + 0x170) + 8) + 0x158))(0x433e0000,0x433e0000);
    (**(code **)(**(long **)(*(long *)(param_1 + 0x170) + 8) + 0x1e0))();
  }
  if (*(long *)(param_1 + 0x178) != 0) {
    FUN_10064e47c(0x433e0000,0x433e0000,*(undefined8 *)(*(long *)(param_1 + 0x178) + 8));
    (**(code **)(**(long **)(*(long *)(param_1 + 0x178) + 8) + 0x158))(0x433e0000,0x433e0000);
    (**(code **)(**(long **)(*(long *)(param_1 + 0x178) + 8) + 0x1e0))();
    if ((*(long *)(param_1 + 0x178) != 0) && (*(long *)(param_1 + 0x170) != 0)) {
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x178) + 8);
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x170) + 8);
      FUN_10064e72c(0xc1400000,uVar1,2,uVar2,0);
      FUN_10064e72c(0,uVar1,4,uVar2,4);
    }
  }
  FUN_1006557ec(param_1);
  return;
}




bool FUN_1000ddd58(long param_1)

{
  return *(long *)(param_1 + 0x170) != 0;
}




bool FUN_1000ddd68(long param_1)

{
  return *(long *)(param_1 + 0x178) != 0;
}




void FUN_1000ddd78(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
  *(char *)(param_1 + 0x180) = (char)param_2;
  if (*(long *)(param_1 + 0x170) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x170) + 8);
    uVar2 = 4;
    if (param_2 == 0) {
      uVar2 = 0;
    }
    *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) & 0xfffffffb | uVar2;
  }
  return;
}




void FUN_1000ddda8(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
  *(char *)(param_1 + 0x181) = (char)param_2;
  if (*(long *)(param_1 + 0x178) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x178) + 8);
    uVar2 = 4;
    if (param_2 == 0) {
      uVar2 = 0;
    }
    *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) & 0xfffffffb | uVar2;
  }
  return;
}




void FUN_1000dddd8(long param_1)

{
  FUN_1000bff14(*(undefined8 *)(param_1 + 0x170));
  return;
}




void FUN_1000ddde0(long param_1)

{
  FUN_1000bff14(*(undefined8 *)(param_1 + 0x178));
  return;
}




void FUN_1000ddde8(long *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  byte *pbVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  if (param_2 == 1) {
    if (param_1[0x2f] != 0) {
      return;
    }
    plVar7 = param_1 + 0x2f;
    FUN_1000ddf80(param_1,1,param_3,param_1 + 0x2d,plVar7,"hud_ability_visionTotem_rounded");
    lVar9 = *(long *)(param_1[0x2f] + 8);
    uVar2 = FUN_1004d2524("joystick_scout_cam_button");
    uVar3 = FUN_100015208("joystick_scout_cam_button",uVar2,0x1234);
    uVar1 = *(uint *)(lVar9 + 0x84);
    *(uint *)(lVar9 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
    pbVar5 = (byte *)((long)param_1 + 0x181);
  }
  else {
    if (param_2 != 0) {
      return;
    }
    if (param_1[0x2e] != 0) {
      return;
    }
    plVar7 = param_1 + 0x2e;
    FUN_1000ddf80(param_1,0,param_3,param_1 + 0x2c,plVar7,"hud_ability_healFlask_rounded");
    lVar9 = *(long *)(param_1[0x2e] + 8);
    uVar2 = FUN_1004d2524("joystick_flask_button");
    uVar3 = FUN_100015208("joystick_flask_button",uVar2,0x1234);
    uVar1 = *(uint *)(lVar9 + 0x84);
    *(uint *)(lVar9 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
    pbVar5 = (byte *)(param_1 + 0x30);
  }
  *(uint *)(*(long *)(*plVar7 + 8) + 0x84) =
       *(uint *)(*(long *)(*plVar7 + 8) + 0x84) & 0xfffffffb | (uint)*pbVar5 << 2;
  (**(code **)(*param_1 + 0x138))(param_1);
  lVar9 = FUN_1000bdb98();
  plVar4 = (long *)(lVar9 + 0x10);
  plVar6 = (long *)*plVar4;
  plVar7 = plVar4;
  if (plVar6 != (long *)0x0) {
    do {
      if (*(uint *)(plVar6 + 4) >= 0xf1ccade8) {
        plVar7 = plVar6;
      }
      plVar6 = (long *)plVar6[*(uint *)(plVar6 + 4) < 0xf1ccade8];
    } while (plVar6 != (long *)0x0);
    if (((plVar7 != plVar4) && (*(uint *)(plVar7 + 4) < 0xf1ccade9)) && ((int)plVar7[5] != 0)) {
      lVar9 = 0;
      uVar8 = 0;
      do {
        (*(code *)((undefined8 *)(plVar7[6] + lVar9))[1])(*(undefined8 *)(plVar7[6] + lVar9));
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x10;
      } while (uVar8 < *(uint *)(plVar7 + 5));
    }
  }
  return;
}




void FUN_1000ddf80(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  
  operator_new(0x68);
  uVar1 = thunk_FUN_1000c5ee0();
  *param_4 = uVar1;
  plVar2 = operator_new(0x13a8);
  thunk_FUN_1000cdc34();
  pvVar3 = operator_new(0x30);
  lVar4 = thunk_FUN_1000bf560(pvVar3,plVar2);
  *param_5 = lVar4;
  uVar5 = *param_4;
  lVar4 = param_1[0x2b];
  uVar1 = FUN_100061d60();
  FUN_1000c6058(uVar5,param_2,param_3,lVar4,uVar1);
  FUN_1000bf800(*param_5,*param_4);
  (**(code **)(*plVar2 + 0x148))(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,param_6);
  *(undefined2 *)((long)plVar2 + 0x13a4) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(*param_5 + 8),1);
  uVar1 = FUN_1000cd87c(*(undefined8 *)(*param_5 + 8));
  (**(code **)(*param_1 + 0x78))(param_1,uVar1,1);
  FUN_1000cd87c(*(undefined8 *)(*param_5 + 8));
  uVar1 = FUN_1000d0360();
  (**(code **)(*param_1 + 0x78))(param_1,uVar1,1);
  FUN_1000cd87c(*(undefined8 *)(*param_5 + 8));
  uVar1 = FUN_1000d0368();
  (**(code **)(*param_1 + 0x78))(param_1,uVar1,1);
  uVar1 = FUN_1000bff14(*param_5);
  (**(code **)(*param_1 + 0x78))(param_1,uVar1,1);
  lVar4 = FUN_1000bff14(*param_5);
  *(uint *)(lVar4 + 0x84) = *(uint *)(lVar4 + 0x84) & 0xffffffbf;
  return;
}




long * FUN_1000de11c(long *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_50;
  long *plStack_48;
  long *local_40;
  code *pcStack_38;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  uVar2 = DAT_101dbd2f0;
  *(undefined4 *)(puVar1 + 0x12) = 0x7000000;
  puVar1[0x13] = uVar2;
  *puVar1 = &PTR_thunk_FUN_1000de314_101456db8;
  puVar1[0x11] = &PTR_FUN_101456ed0;
  *(undefined4 *)(puVar1 + 0x14) = param_2;
  puVar1 = puVar1 + 0x15;
  thunk_FUN_100650e64(puVar1);
  FUN_100657568(param_1 + 0x3b);
  param_1[0x3d] = 0x4210000042100000;
  param_1[0x3e] = 0x3f400000ffaaaaaa;
  *(undefined1 *)(param_1 + 0x3f) = 1;
  uVar2 = FUN_1003166d0();
  local_50 = 0;
  pcStack_38 = FUN_1000dec2c;
  plStack_48 = param_1;
  local_40 = param_1;
  FUN_1000debac(uVar2,&local_50);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_1006575f4(param_1 + 0x3b,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  local_50 = CONCAT44(local_50._4_4_,0xff202020);
  FUN_100651594(puVar1,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&local_50);
  FUN_1000de234(param_1);
  return param_1;
}




void FUN_1000de234(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  undefined8 local_40;
  void *local_38;
  undefined8 uStack_30;
  void *local_28;
  
  puVar3 = &local_40;
  if (*(int *)(param_1 + 0xa0) == 0x1b) {
    uVar6 = *(uint *)(param_1 + 0x84) & 0xfffffffb;
    goto LAB_1000de2fc;
  }
  uVar4 = FUN_1003166d0();
  lVar5 = FUN_1003166dc(uVar4,*(undefined4 *)(param_1 + 0xa0));
  iVar1 = *(int *)(lVar5 + 0x2c);
  if (*(int *)(lVar5 + 0x20) != 0x69) {
    iVar1 = *(int *)(lVar5 + 0x20);
  }
  iVar2 = *(int *)(lVar5 + 0x30);
  if (*(int *)(lVar5 + 0x24) != 3) {
    iVar2 = *(int *)(lVar5 + 0x24);
  }
  if (iVar1 == 0x69) {
    if (iVar2 != 3) {
      uVar4 = FUN_10109db58();
      FUN_1004e3120(&local_40,uVar4);
      FUN_1000de3c8(param_1,&local_40);
      local_28 = local_38;
      goto joined_r0x0001000de2e8;
    }
  }
  else {
    uVar4 = FUN_10109c85c(iVar1);
    puVar3 = &uStack_30;
    FUN_1004e3120(&uStack_30,uVar4);
    FUN_1000de3c8(param_1,&uStack_30);
joined_r0x0001000de2e8:
    if (local_28 != (void *)0x0) {
      operator_delete__(local_28);
      *puVar3 = 0;
      puVar3[1] = 0;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x84) | 4;
LAB_1000de2fc:
  *(uint *)(param_1 + 0x84) = uVar6;
  return;
}




long * thunk_FUN_1000de11c(long *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  code *pcStack_38;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  uVar2 = DAT_101dbd2f0;
  *(undefined4 *)(puVar1 + 0x12) = 0x7000000;
  puVar1[0x13] = uVar2;
  *puVar1 = &PTR_thunk_FUN_1000de314_101456db8;
  puVar1[0x11] = &PTR_FUN_101456ed0;
  *(undefined4 *)(puVar1 + 0x14) = param_2;
  puVar1 = puVar1 + 0x15;
  thunk_FUN_100650e64(puVar1);
  FUN_100657568(param_1 + 0x3b);
  param_1[0x3d] = 0x4210000042100000;
  param_1[0x3e] = 0x3f400000ffaaaaaa;
  *(undefined1 *)(param_1 + 0x3f) = 1;
  uVar2 = FUN_1003166d0();
  uStack_50 = 0;
  pcStack_38 = FUN_1000dec2c;
  plStack_48 = param_1;
  plStack_40 = param_1;
  FUN_1000debac(uVar2,&uStack_50);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_1006575f4(param_1 + 0x3b,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  uStack_50 = CONCAT44(uStack_50._4_4_,0xff202020);
  FUN_100651594(puVar1,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&uStack_50);
  FUN_1000de234(param_1);
  return param_1;
}




void FUN_1000de314(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_thunk_FUN_1000de314_101456db8;
  param_1[0x11] = &PTR_FUN_101456ed0;
  puVar2 = (uint *)FUN_1003166d0();
  if (*puVar2 != 0) {
    lVar3 = *(long *)(puVar2 + 2);
    lVar4 = (ulong)*puVar2 << 5;
    do {
      puVar1 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_1000decc0();
        break;
      }
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  thunk_FUN_100657580(param_1 + 0x3b);
  thunk_FUN_100651068(param_1 + 0x15);
  FUN_10064221c(param_1);
  return;
}




void thunk_FUN_1000de314(void)

{
  FUN_1000de314();
  return;
}




void FUN_1000de394(long param_1)

{
  FUN_1000de314(param_1 + -0x88);
  return;
}




void FUN_1000de39c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000de314();
  operator_delete(pvVar1);
  return;
}




void FUN_1000de3b0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000de314(param_1 + -0x88);
  operator_delete(pvVar1);
  return;
}




void FUN_1000de3c8(long param_1)

{
  FUN_1006513c0(param_1 + 0xa8);
  if (*(char *)(param_1 + 0x1f8) != '\0') {
    FUN_1000de400(param_1);
  }
  FUN_1000de460(param_1);
  return;
}




void FUN_1000de400(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  
  fVar2 = (float)FUN_100651184(param_1 + 0xa8);
  lVar1 = FUN_100655b94(param_1 + 0x178);
  fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 0x918));
  uVar4 = NEON_fmov(0x41200000,4);
  uVar4 = NEON_fmaxnm(CONCAT44(fVar3 + (float)((ulong)uVar4 >> 0x20),fVar2 + (float)uVar4),
                      0x4200000042000000,4);
  *(undefined8 *)(param_1 + 0x1e8) = uVar4;
  FUN_1000de460(param_1);
  return;
}




void FUN_1000de460(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = param_3 + 0xa8;
  lVar3 = FUN_100655b94(param_3 + 0x178);
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 0x918));
  FUN_100651184(lVar1);
  bVar2 = false;
  if ((*(float *)(param_3 + 0xf8) == 0.5) && (bVar2 = false, !NAN(*(float *)(param_3 + 0xfc)))) {
    bVar2 = *(float *)(param_3 + 0xfc) == 0.5;
  }
  if (!bVar2) {
    *(undefined1 **)(param_3 + 0xf8) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar1);
  }
  fVar4 = *(float *)(param_3 + 0x1e8) * (0.5 - *(float *)(param_3 + 0x50)) + -1.0;
  fVar5 = (0.5 - *(float *)(param_3 + 0x54)) * *(float *)(param_3 + 0x1ec) +
          (param_2 - fVar5) * -0.2;
  bVar2 = false;
  if ((*(float *)(param_3 + 0xe8) == fVar4) &&
     (bVar2 = false, !NAN(*(float *)(param_3 + 0xec)) && !NAN(fVar5))) {
    bVar2 = *(float *)(param_3 + 0xec) == fVar5;
  }
  if (!bVar2) {
    *(float *)(param_3 + 0xe8) = fVar4;
    *(float *)(param_3 + 0xec) = fVar5;
    FUN_1000200a0(lVar1);
    return;
  }
  return;
}




undefined4 FUN_1000de528(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1e8);
}




void FUN_1000de534(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_95;
  
  pfVar5 = (float *)FUN_10003d5bc();
  DAT_101dc6460 = (uint)*pfVar5;
  fVar13 = (float)(int)*pfVar5;
  fVar10 = pfVar5[4] * 9.0;
  fVar11 = fVar10 + fVar13;
  fVar9 = (float)(int)fVar11 + pfVar5[4] * (*(float *)(param_1 + 0x1e8) + -18.0);
  DAT_101dc6464 = (uint)fVar11;
  local_98 = *(undefined2 *)(param_1 + 0x1f0);
  local_96 = *(undefined1 *)(param_1 + 0x1f2);
  local_95 = (undefined1)(int)(*(float *)(param_1 + 500) * 255.0 * pfVar5[6]);
  DAT_101dc6468 = (uint)fVar9;
  DAT_101dc646c = (int)(fVar10 + (float)(int)fVar9);
  DAT_101dc6470 = (uint)pfVar5[1];
  fVar14 = (float)(int)pfVar5[1];
  fVar9 = pfVar5[5] * 9.0;
  fVar10 = fVar9 + fVar14;
  DAT_101dc6474 = (uint)fVar10;
  fVar10 = (float)(int)fVar10 + pfVar5[5] * (*(float *)(param_1 + 0x1ec) + -18.0);
  DAT_101dc6478 = (uint)fVar10;
  DAT_101dc647c = (int)(fVar9 + (float)(int)fVar10);
  uVar1 = DAT_101dc6464 - DAT_101dc6460;
  uVar2 = DAT_101dc6474 - DAT_101dc6470;
  lVar7 = param_1 + 0x1d8;
  lVar6 = FUN_1006575c4(lVar7,"rounded_corner");
  lVar8 = *(long *)(*(long *)(param_1 + 0x1d8) + 8);
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
  NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
  fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
  fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
  fVar12 = 1.0 / (float)*(int *)(lVar8 + 0x48);
  FUN_100043664(fVar13,fVar14,SUB42((float)uVar1 + fVar13,0),(float)uVar2 + fVar14,0,fVar12 * fVar10
                ,1.0 - fVar11 * (1.0 / (float)*(int *)(lVar8 + 0x4c)),fVar12 * (fVar9 + fVar10),
                param_2,&local_98,0);
  uVar3 = (ulong)DAT_101dc6468;
  uVar4 = (ulong)DAT_101dc6470;
  uVar1 = DAT_101dc646c - DAT_101dc6468;
  uVar2 = DAT_101dc6474 - DAT_101dc6470;
  lVar6 = FUN_1006575c4(lVar7,"rounded_corner");
  lVar8 = *(long *)(*(long *)(param_1 + 0x1d8) + 8);
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
  NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
  fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
  fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
  fVar12 = 1.0 / (float)*(int *)(lVar8 + 0x48);
  FUN_100043664((float)uVar3,(float)uVar4,SUB42((float)uVar1 + (float)uVar3,0),
                (float)uVar2 + (float)uVar4,0,fVar12 * (fVar9 + fVar10),
                1.0 - fVar11 * (1.0 / (float)*(int *)(lVar8 + 0x4c)),fVar12 * fVar10,param_2,
                &local_98,0);
  uVar3 = (ulong)DAT_101dc6460;
  uVar4 = (ulong)DAT_101dc6478;
  uVar1 = DAT_101dc6464 - DAT_101dc6460;
  uVar2 = DAT_101dc647c - DAT_101dc6478;
  lVar6 = FUN_1006575c4(lVar7,"rounded_corner");
  lVar8 = *(long *)(*(long *)(param_1 + 0x1d8) + 8);
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
  fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
  fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
  fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
  fVar12 = 1.0 / (float)*(int *)(lVar8 + 0x48);
  FUN_100043664((float)uVar3,(float)uVar4,SUB42((float)uVar1 + (float)uVar3,0),
                (float)uVar2 + (float)uVar4,0,fVar12 * fVar11,
                1.0 - (fVar10 + fVar13) * (1.0 / (float)*(int *)(lVar8 + 0x4c)),
                fVar12 * (fVar9 + fVar11),param_2,&local_98,0);
  uVar3 = (ulong)DAT_101dc6468;
  uVar4 = (ulong)DAT_101dc6478;
  uVar1 = DAT_101dc646c - DAT_101dc6468;
  uVar2 = DAT_101dc647c - DAT_101dc6478;
  lVar6 = FUN_1006575c4(lVar7,"rounded_corner");
  lVar8 = *(long *)(*(long *)(param_1 + 0x1d8) + 8);
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
  fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
  fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
  fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
  fVar12 = 1.0 / (float)*(int *)(lVar8 + 0x48);
  FUN_100043664((float)uVar3,(float)uVar4,SUB42((float)uVar1 + (float)uVar3,0),
                (float)uVar2 + (float)uVar4,0,fVar12 * (fVar9 + fVar11),
                1.0 - (fVar10 + fVar13) * (1.0 / (float)*(int *)(lVar8 + 0x4c)),fVar12 * fVar11,
                param_2,&local_98,0);
  uVar3 = (ulong)DAT_101dc6464;
  uVar4 = (ulong)DAT_101dc6470;
  uVar1 = DAT_101dc6468 - DAT_101dc6464;
  uVar2 = DAT_101dc6474 - DAT_101dc6470;
  lVar6 = FUN_1006575c4(lVar7,"white_background");
  lVar8 = *(long *)(*(long *)(param_1 + 0x1d8) + 8);
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
  NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
  fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
  fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
  fVar12 = 1.0 / (float)*(int *)(lVar8 + 0x48);
  FUN_100043664((float)uVar3,(float)uVar4,SUB42((float)uVar1 + (float)uVar3,0),
                (float)uVar2 + (float)uVar4,0,fVar12 * fVar10,
                1.0 - fVar11 * (1.0 / (float)*(int *)(lVar8 + 0x4c)),fVar12 * (fVar9 + fVar10),
                param_2,&local_98,0);
  uVar3 = (ulong)DAT_101dc6464;
  uVar4 = (ulong)DAT_101dc6478;
  uVar1 = DAT_101dc6468 - DAT_101dc6464;
  uVar2 = DAT_101dc647c - DAT_101dc6478;
  lVar6 = FUN_1006575c4(lVar7,"white_background");
  lVar8 = *(long *)(*(long *)(param_1 + 0x1d8) + 8);
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
  NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
  fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
  fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
  fVar12 = 1.0 / (float)*(int *)(lVar8 + 0x48);
  FUN_100043664((float)uVar3,(float)uVar4,SUB42((float)uVar1 + (float)uVar3,0),
                (float)uVar2 + (float)uVar4,0,fVar12 * fVar10,
                1.0 - fVar11 * (1.0 / (float)*(int *)(lVar8 + 0x4c)),fVar12 * (fVar9 + fVar10),
                param_2,&local_98,0);
  uVar3 = (ulong)DAT_101dc6460;
  uVar4 = (ulong)DAT_101dc6474;
  uVar1 = DAT_101dc646c - DAT_101dc6460;
  uVar2 = DAT_101dc6478 - DAT_101dc6474;
  lVar7 = FUN_1006575c4(lVar7,"white_background");
  lVar6 = *(long *)(*(long *)(param_1 + 0x1d8) + 8);
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 8));
  NEON_ucvtf((uint)*(ushort *)(lVar7 + 10));
  fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 4));
  fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 6));
  fVar12 = 1.0 / (float)*(int *)(lVar6 + 0x48);
  FUN_100043664((float)uVar3,(float)uVar4,SUB42((float)uVar1 + (float)uVar3,0),
                (float)uVar2 + (float)uVar4,0,fVar12 * fVar10,
                1.0 - fVar11 * (1.0 / (float)*(int *)(lVar6 + 0x4c)),fVar12 * (fVar9 + fVar10),
                param_2,&local_98,0);
  return;
}




void FUN_1000deb64(long param_1)

{
  FUN_1000de534(param_1 + -0x88);
  return;
}




undefined8 FUN_1000deb6c(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x1d8) + 8) + 0x30;
  return 1;
}




undefined8 FUN_1000deb84(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x150) + 8) + 0x30;
  return 1;
}




void FUN_1000deb9c(void)

{
  FUN_1010b3fec(2);
  return;
}




void FUN_1000deba4(void)

{
  FUN_1010b3fec(2);
  return;
}




void FUN_1000debac(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
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
    FUN_1000dec44(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  *(undefined8 *)(lVar1 + -8) = uVar7;
  *(undefined8 *)(lVar1 + -0x10) = uVar6;
  return;
}




void FUN_1000dec2c(long param_1,int *param_2)

{
  if (*param_2 == *(int *)(param_1 + 0xa0)) {
    FUN_1000de234();
    return;
  }
  return;
}




void FUN_1000dec44(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        uVar8 = puVar5[3];
        uVar7 = puVar5[2];
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        puVar4[3] = uVar8;
        puVar4[2] = uVar7;
        lVar3 = lVar3 + -0x20;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
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




void FUN_1000decc0(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
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
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        uVar7 = param_3[3];
        uVar6 = param_3[2];
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2[3] = uVar7;
        param_2[2] = uVar6;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar2 != puVar1);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




long * FUN_1000ded30(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_FUN_101456f18;
  thunk_FUN_1000c04d8(puVar1 + 0x17);
  *(undefined1 *)(param_1 + 0x20) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x18],1);
  return param_1;
}




long * thunk_FUN_1000ded30(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_FUN_101456f18;
  thunk_FUN_1000c04d8(puVar1 + 0x17);
  *(undefined1 *)(param_1 + 0x20) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x18],1);
  return param_1;
}




void FUN_1000ded84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101456f18;
  thunk_FUN_1000c0548(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000dedb4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101456f18;
  thunk_FUN_1000c0548(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1000dede8(long param_1)

{
  FUN_1000c05f0(param_1 + 0xb8);
  return;
}




void FUN_1000dedf0(long param_1)

{
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (*(char *)(param_1 + 0x100) == '\0') {
    FUN_1000c05b4(param_1 + 0xb8);
    *(undefined1 *)(param_1 + 0x100) = 1;
    FUN_100641464(&uStack_24,&local_28);
    FUN_10064e47c(uStack_24,local_28,param_1);
  }
  return;
}




void FUN_1000dee44(long param_1)

{
  if (*(char *)(param_1 + 0x100) != '\0') {
    FUN_10064e47c(*(undefined8 *)(param_1 + 0xc0));
    return;
  }
  return;
}




long * FUN_1000dee58(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_FUN_101457060;
  puVar4 = puVar4 + 0x17;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_100652c08(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x31c) = *(uint *)((long)param_1 + 0x31c) & 0xffffffbf;
  FUN_100652cac(puVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_store_bkgmiddle");
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_gradient_vertical");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar3 = *(uint *)((long)param_1 + 0x22c);
  if ((uVar3 & 0x7f80) != 0x4600) {
    *(uint *)((long)param_1 + 0x22c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x4600;
    FUN_1000200a0(plVar1);
  }
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 2;
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_gradient_vertical");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  uVar3 = *(uint *)((long)param_1 + 0x31c);
  if ((uVar3 & 0x7f80) != 0x4600) {
    *(uint *)((long)param_1 + 0x31c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x4600;
    FUN_1000200a0(plVar2);
  }
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0x10;
  return param_1;
}




long * thunk_FUN_1000dee58(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_FUN_101457060;
  puVar4 = puVar4 + 0x17;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_100652c08(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x31c) = *(uint *)((long)param_1 + 0x31c) & 0xffffffbf;
  FUN_100652cac(puVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_store_bkgmiddle");
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_gradient_vertical");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar3 = *(uint *)((long)param_1 + 0x22c);
  if ((uVar3 & 0x7f80) != 0x4600) {
    *(uint *)((long)param_1 + 0x22c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x4600;
    FUN_1000200a0(plVar1);
  }
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 2;
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_gradient_vertical");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  uVar3 = *(uint *)((long)param_1 + 0x31c);
  if ((uVar3 & 0x7f80) != 0x4600) {
    *(uint *)((long)param_1 + 0x31c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x4600;
    FUN_1000200a0(plVar2);
  }
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0x10;
  return param_1;
}




void FUN_1000deff0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2 + 0xb8;
  FUN_10064e47c(lVar1);
  FUN_10064e47c(param_1,0x42fa0000,param_2 + 0x1a8);
  FUN_10064e47c(param_1,0x42fa0000,param_2 + 0x298);
  FUN_10064e72c(0x80000000,param_2 + 0x1a8,2,lVar1,0);
  FUN_10064e72c(0,param_2 + 0x298,0,lVar1,2);
  return;
}




void FUN_1000df08c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101457060;
  param_1[0x53] = &PTR_FUN_1014a7108;
  param_1[0x6a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6d);
  FUN_10064e2bc(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_1014a7108;
  param_1[0x4c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000df124(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101457060;
  param_1[0x53] = &PTR_FUN_1014a7108;
  param_1[0x6a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6d);
  FUN_10064e2bc(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_1014a7108;
  param_1[0x4c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_1000df1c0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  *puVar8 = &PTR_thunk_FUN_1000df8c8_1014571a8;
  puVar8 = puVar8 + 0x17;
  FUN_100269de4(puVar8);
  thunk_FUN_1000dee58(param_1 + 0x30);
  plVar1 = param_1 + 0xa1;
  thunk_FUN_10064f848(plVar1);
  plVar2 = param_1 + 0xbc;
  thunk_FUN_10064f848(plVar2);
  plVar3 = param_1 + 0xd7;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xfd;
  thunk_FUN_100183990(plVar4,1);
  plVar5 = param_1 + 0x1bb;
  FUN_100269de4(plVar5);
  FUN_10064e264(param_1 + 0x1d4);
  param_1[0x1eb] = 0;
  param_1[0x1ed] = 0;
  param_1[0x1ec] = 0x43340000430c0000;
  param_1[0x1ee] = 0x4240000041800000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  FUN_100642bd8(puVar8,param_1 + 0x30,1);
  FUN_100642bd8(puVar8,plVar3,1);
  FUN_100642bd8(puVar8,plVar4,1);
  FUN_100642bd8(puVar8,plVar5,1);
  FUN_100642bd8(plVar5,param_1 + 0x1d4,1);
  FUN_100652cdc(param_1 + 0x197,"circle_button_x");
  FUN_100183c50(0x3f400000,plVar4,&DAT_10115a164);
  uVar6 = DAT_101dbd458;
  local_68 = DAT_101dbd458;
  local_90 = FUN_1000df464;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xfe,&local_90);
  uVar7 = DAT_101dbd484;
  local_68 = DAT_101dbd484;
  local_90 = FUN_1000df464;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xfe,&local_90);
  local_68 = uVar6;
  local_90 = FUN_1000df464;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xa2,&local_90);
  local_68 = uVar7;
  local_90 = FUN_1000df464;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xa2,&local_90);
  FUN_10064f8a8(plVar1,1);
  local_68 = uVar6;
  local_90 = FUN_1000df464;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xbd,&local_90);
  local_68 = uVar7;
  local_90 = FUN_1000df464;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xbd,&local_90);
  FUN_10064f8a8(plVar2,1);
  FUN_100651038(plVar3,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e290);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return param_1;
}




void FUN_1000df464(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d23034,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1000df4ac(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xf58) = param_2;
  FUN_100642bd8(param_1 + 0xea0,param_2,1);
  return;
}




void FUN_1000df4bc(long *param_1,undefined8 param_2)

{
  uint uVar1;
  
  if ((int)param_2 == 0) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*param_1 + 0xe8))(param_1);
    uVar1 = 8;
  }
  FUN_100269e20(0x3e19999a,param_1 + 0x17,param_2,1,1);
  FUN_100269e20(0x3e4ccccd,param_1 + 0x1bb,param_2,4,1);
  *(uint *)((long)param_1 + 0x58c) = *(uint *)((long)param_1 + 0x58c) & 0xfffffff7 | uVar1;
  *(uint *)((long)param_1 + 0x664) = *(uint *)((long)param_1 + 0x664) & 0xfffffff7 | uVar1;
  return;
}




void FUN_1000df55c(long param_1)

{
  FUN_1006513c0(param_1 + 0x6b8);
  return;
}




void FUN_1000df564(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_88;
  float fStack_84;
  undefined1 auStack_80 [4];
  int local_7c;
  int local_78;
  int local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  uVar6 = FUN_100641574("root-layer");
  FUN_10064142c(&local_64,&local_68);
  FUN_100641464(&local_6c,&local_70);
  FUN_10016ae00(&local_74,&local_78,&local_7c,auStack_80);
  fVar8 = local_70 - (*(float *)(param_1 + 0xf60) + *(float *)(param_1 + 0xf64));
  lVar1 = param_1 + 0xb8;
  fVar9 = *(float *)(param_1 + 0xf8);
  fVar10 = *(float *)(param_1 + 0xfc);
  bVar5 = false;
  if ((fVar9 == (float)DAT_101dc1cb8) && (bVar5 = false, !NAN(fVar10) && !NAN(DAT_101dc1cb8._4_4_)))
  {
    bVar5 = fVar10 == DAT_101dc1cb8._4_4_;
  }
  if (!bVar5) {
    *(ulong *)(param_1 + 0xf8) = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(lVar1);
  }
  FUN_10064e47c(local_64,local_68,param_1);
  FUN_10064e47c(local_64,local_68,lVar1);
  FUN_10064e5ec(0,0,lVar1,0,uVar6,0);
  lVar2 = param_1 + 0x180;
  FUN_10064e47c(local_64,fVar8,lVar2);
  lVar3 = param_1 + 0x508;
  FUN_10064e47c(local_64,*(undefined4 *)(param_1 + 0xf60),lVar3);
  lVar4 = param_1 + 0x5e0;
  FUN_10064e47c(local_64,*(undefined4 *)(param_1 + 0xf64),lVar4);
  FUN_10064e72c(0,lVar2,3,uVar6,3);
  FUN_10064e72c(*(undefined4 *)(param_1 + 0xf60),lVar2,0,param_1,0);
  fVar7 = *(float *)(param_1 + 0xf60) + (float)local_78;
  bVar5 = false;
  if ((*(float *)(param_1 + 0x1c0) == (float)-local_74) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x1c4)) && !NAN(fVar7))) {
    bVar5 = *(float *)(param_1 + 0x1c4) == fVar7;
  }
  if (!bVar5) {
    *(float *)(param_1 + 0x1c0) = (float)-local_74;
    *(float *)(param_1 + 0x1c4) = fVar7;
    FUN_1000200a0(lVar2);
  }
  FUN_10064e72c(0x80000000,lVar3,2,lVar2,0);
  FUN_10064e72c(0,lVar3,3,lVar2,3);
  FUN_10064e72c(0,lVar4,0,lVar2,2);
  FUN_10064e72c(0,lVar4,3,lVar2,3);
  lVar3 = param_1 + 0x7e8;
  if ((*(float *)(param_1 + 0x830) != 1.5) || (*(float *)(param_1 + 0x834) != 1.5)) {
    uVar6 = NEON_fmov(0x3fc00000,4);
    *(undefined8 *)(param_1 + 0x830) = uVar6;
    FUN_1000200a0(lVar3);
  }
  FUN_10064e72c(0x42100000,lVar3,2,lVar2,0);
  FUN_10064e72c(-(*(float *)(param_1 + 0xf70) + (float)local_7c),lVar3,1,lVar2,1);
  FUN_10064e72c(*(undefined4 *)(param_1 + 0xf74),param_1 + 0x6b8,3,param_1,3);
  FUN_10064e72c(0xc2480000,param_1 + 0x6b8,0,lVar2,0);
  local_88 = local_6c + *(float *)(param_1 + 0xf74) * -2.0;
  fStack_84 = fVar8 - (*(float *)(param_1 + 0xf68) + *(float *)(param_1 + 0xf6c));
  lVar3 = param_1 + 0xea0;
  FUN_10064e48c(lVar3,&local_88);
  FUN_10064e72c(*(undefined4 *)(param_1 + 0xf74),lVar3,3,param_1,3);
  FUN_10064e72c(*(undefined4 *)(param_1 + 0xf68),lVar3,0,lVar2,0);
  if (*(long *)(param_1 + 0xf58) != 0) {
    FUN_10064e48c(*(long *)(param_1 + 0xf58),&local_88);
  }
  if ((*(float *)(param_1 + 0xf8) != fVar9) || (*(float *)(param_1 + 0xfc) != fVar10)) {
    *(float *)(param_1 + 0xf8) = fVar9;
    *(float *)(param_1 + 0xfc) = fVar10;
    FUN_1000200a0(lVar1);
  }
  return;
}




void thunk_FUN_1000df8c8(void)

{
  FUN_1000df8c8();
  return;
}




void FUN_1000df8b4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000df8c8();
  operator_delete(pvVar1);
  return;
}




void FUN_1000df8c8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000df8c8_1014571a8;
  thunk_FUN_10064e2bc(param_1 + 0x1d4);
  FUN_10064e2bc(param_1 + 0x1bb);
  param_1[0xfd] = &PTR_FUN_10145f300;
  param_1[0x197] = &PTR_FUN_1014a7108;
  param_1[0x1ae] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1b1);
  FUN_10064e2bc(param_1 + 0x197);
  param_1[0x179] = &PTR_FUN_1014a7108;
  param_1[400] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x193);
  FUN_10064e2bc(param_1 + 0x179);
  param_1[0x15b] = &PTR_FUN_1014a7108;
  param_1[0x172] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x175);
  FUN_10064e2bc(param_1 + 0x15b);
  FUN_10064221c(param_1 + 0x14a);
  FUN_10003bec8(param_1 + 0xfd);
  thunk_FUN_100651068(param_1 + 0xd7);
  FUN_10064e2bc(param_1 + 0xbc);
  FUN_10064e2bc(param_1 + 0xa1);
  param_1[0x30] = &PTR_FUN_101457060;
  param_1[0x83] = &PTR_FUN_1014a7108;
  param_1[0x9a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9d);
  FUN_10064e2bc(param_1 + 0x83);
  param_1[0x65] = &PTR_FUN_1014a7108;
  param_1[0x7c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x7f);
  FUN_10064e2bc(param_1 + 0x65);
  param_1[0x47] = &PTR_FUN_1014a7108;
  param_1[0x5e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x61);
  FUN_10064e2bc(param_1 + 0x47);
  FUN_10064e2bc(param_1 + 0x30);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000dfa2c(void)

{
  DAT_101dc6480 = 0xff;
  DAT_101dc6482 = 0xffff;
  DAT_101dc6484 = 0xffff;
  DAT_101dc6486 = 0xffbc9c44;
  DAT_101dc648a = 0xff1166f2;
  DAT_101dc648e = 0xffe0e0e0;
  DAT_101dc6492 = 0xffa0a0a0;
  DAT_101dc6496 = 0xff8c8c8c;
  DAT_101dc649a = 0xff322213;
  DAT_101dc649e = 0xff091911;
  DAT_101dc64a2 = 0xff170c19;
  DAT_101dc64a6 = 0xff241a14;
  DAT_101dc64aa = 0xff14171c;
  DAT_101dc64ae = 0xff221911;
  DAT_101dc64b2 = 0xff1a1416;
  DAT_101dc64b6 = 0xff121414;
  DAT_101dc64ba = 0xff1a1809;
  DAT_101dc64be = 0xff141414;
  DAT_101dc64c2 = 0xff141414;
  DAT_101dc64c6 = 0xff2929c0;
  DAT_101dc64ca = 0xff283082;
  DAT_101dc64ce = 0xff5262cc;
  DAT_101dc64d2 = 0xff283082;
  DAT_101dc64d6 = 0xff5262cc;
  DAT_101dc64da = 0xff745c42;
  DAT_101dc64de = 0xff184155;
  DAT_101dc64e2 = 0xff92665e;
  DAT_101dc64e6 = 0xffbc9c44;
  DAT_101dc64ea = 0xffbbae56;
  DAT_101dc64ee = 0xff8b7b01;
  DAT_101dc64f2 = 0xff90b3ef;
  DAT_101dc64f6 = 0xff728ebe;
  DAT_101dc64fa = 0xff19459d;
  DAT_101dc64fe = 0xff9d877b;
  DAT_101dc6502 = 0xffcbb1a3;
  DAT_101dc6506 = 0xff3f6fb5;
  DAT_101dc650a = 0xffc5c5c5;
  DAT_101dc650e = 0xff4fc1f1;
  DAT_101dc6512 = 0xff606060;
  DAT_101dc6516 = 0xffc5ff7b;
  DAT_101dc651a = 0xff5271eb;
  DAT_101dc651e = 0xfffae076;
  DAT_101dc6522 = 0xff3ac8f6;
  DAT_101dc6526 = 0xffaaaaaa;
  DAT_101dc652a = 0xffe19400;
  DAT_101dc652e = 0xffe19400;
  DAT_101dc6532 = 0xffe550b2;
  DAT_101dc6536 = 0xfff22ae8;
  DAT_101dc653a = 0xff005ae1;
  DAT_101dc653e = 0xff1addfa;
  DAT_101dc6542 = 0xff2424b3;
  DAT_101dc6546 = 0xff2424b3;
  DAT_101dc654a = 0xff646464;
  DAT_101dc654e = 0xff92665e;
  DAT_101dc6552 = 0xff646037;
  DAT_101dc655c = 0xff1111a1;
  DAT_101dc6560 = 0xff321ee1;
  DAT_101dc6564 = 0xffc8c8c8;
  DAT_101dc6568 = 0xff321ee1;
  DAT_101dc6574 = 0xff6259b3;
  DAT_101dc6578 = 0xff506e73;
  DAT_101dc657c = 0xff9dbf86;
  DAT_101dc6558 = 0xffffffff;
  DAT_101dc6580 = 0xffa35244;
  DAT_101dc656c = 0xff7fe801;
  DAT_101dc6584 = 0xffca828e;
  DAT_101dc6570 = 0xffffffff;
  DAT_101dc6588 = 0xffa6a6a6;
  DAT_101dc658c = 0xffa6a6a6;
  DAT_101dc6590 = 0xffffffff;
  DAT_101dc6594 = 0xff88ea2f;
  DAT_101dc6598 = 0xff8c8c8c;
  DAT_101dc659c = 0xffffb400;
  DAT_101dc65a0 = 0xffff00ff;
  DAT_101dc65a4 = 0xff00aded;
  DAT_101dc65a8 = 0xff33d3ff;
  DAT_101dc65ac = 0xff7fe801;
  DAT_101dc65b0 = 0xff282828;
  DAT_101dc65b4 = 0xfff0f0f0;
  DAT_101dc65b8 = 0xffa4781e;
  DAT_101dc65bc = 0xffa6654b;
  DAT_101dc65c0 = 0xff93435b;
  DAT_101dc65c4 = 0xff387f9c;
  DAT_101dc65c8 = 0xffa3781e;
  DAT_101dc65cc = 0xffffd18a;
  DAT_101dc65d0 = 0xffff61f7;
  DAT_101dc65d4 = 0xff5de1f2;
  DAT_101dc65d8 = 0xff80eaff;
  DAT_101dc65dc = 0xff32e00e;
  DAT_101dc65e0 = 0xff5a3c10;
  DAT_101dc65e4 = 0xff330b03;
  DAT_101dc65e8 = 0xff33031d;
  DAT_101dc65ec = 0xff032433;
  DAT_101dc65f0 = 0xff9e8e8d;
  DAT_101d23034 = FUN_100644a94("UI::EVENT_CLOSE_IN_GAME_OVERLAY");
  return;
}




void thunk_FUN_1000df4bc(long *param_1,undefined8 param_2)

{
  uint uVar1;
  
  if ((int)param_2 == 0) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*param_1 + 0xe8))(param_1);
    uVar1 = 8;
  }
  FUN_100269e20(0x3e19999a,param_1 + 0x17,param_2,1,1);
  FUN_100269e20(0x3e4ccccd,param_1 + 0x1bb,param_2,4,1);
  *(uint *)((long)param_1 + 0x58c) = *(uint *)((long)param_1 + 0x58c) & 0xfffffff7 | uVar1;
  *(uint *)((long)param_1 + 0x664) = *(uint *)((long)param_1 + 0x664) & 0xfffffff7 | uVar1;
  return;
}

