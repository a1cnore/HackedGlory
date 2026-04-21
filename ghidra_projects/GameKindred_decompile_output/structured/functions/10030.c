// functions/10030 — 391 functions
#include "GameKindred.h"




void FUN_100300440(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  long local_60;
  code *pcStack_58;
  
  FUN_1002fd0ec();
  FUN_1002fd1bc(param_1);
  pcStack_58 = FUN_100300bf0;
  local_60 = param_1;
  FUN_100643618(0xbf800000,&local_60,0,1);
  uVar1 = FUN_10001f55c();
  FUN_10063f0e8(0x3f000000);
  FUN_100642b14(param_1,uVar1);
  fVar4 = (float)*(int *)(param_1 + 0x165c);
  if ((*(float *)(param_1 + 0x16a0) <= fVar4) || (fVar4 <= *(float *)(param_1 + 0x1578))) {
    uVar3 = FUN_1000d0538();
    FUN_100640684(*(undefined4 *)(param_1 + 0x16a0),uVar3,param_1 + 0x1578);
    FUN_10063f130(uVar3,FUN_1002fe6fc);
    FUN_10063f0e8(0x3fc00000,uVar3);
  }
  else {
    uVar1 = FUN_1000d0538();
    FUN_100640684(fVar4,uVar1,param_1 + 0x1578);
    FUN_10063f130(uVar1,FUN_1002fe6fc);
    FUN_10063f0e8(0x3f400000,uVar1);
    lVar2 = FUN_10008e900();
    *(code **)(lVar2 + 0x10) = FUN_1003005fc;
    *(long *)(lVar2 + 0x20) = param_1;
    uVar3 = FUN_1000d0538();
    FUN_100640684(*(undefined4 *)(param_1 + 0x16a0),uVar3,param_1 + 0x1578);
    FUN_10063f130(uVar3,FUN_1002fe6fc);
    FUN_10063f0e8(0x3f400000,uVar3);
    uVar3 = FUN_10008cac4();
    FUN_10063f614(uVar3,uVar1);
  }
  FUN_100642b14(param_1,uVar3);
  lVar2 = FUN_10008e900();
  *(code **)(lVar2 + 0x10) = FUN_1002fd208;
  *(long *)(lVar2 + 0x20) = param_1;
  FUN_100642b14(param_1,lVar2);
  uVar1 = FUN_10001f55c();
  FUN_10063f0e8(0x3f400000);
  FUN_100642b14(param_1,uVar1);
  return;
}




void FUN_1003005fc(long param_1)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long *plVar12;
  long *plVar13;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [32];
  
  lVar1 = param_1 + 0x520;
  FUN_1002fb710((float)*(int *)(param_1 + 0x1668),(float)*(int *)(param_1 + 0x166c),lVar1);
  FUN_1002fb85c((float)*(int *)(param_1 + 0x1668),lVar1);
  FUN_100300940(param_1);
  FUN_1002fb864(lVar1,*(undefined4 *)(param_1 + 0x1674));
  uVar8 = FUN_100644a94("SPOILSOFWAR::PULSE_RING");
  FUN_100644aec(auStack_40,uVar8,0);
  FUN_100644c34(param_1,auStack_40,1);
  plVar13 = (long *)(param_1 + 0x1610);
  bVar6 = *(byte *)(param_1 + 0x1627);
  uVar9 = (ulong)bVar6;
  sVar2 = *(size_t *)(param_1 + 0x1618);
  if (-1 < (char)bVar6) {
    sVar2 = uVar9;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    plVar12 = (long *)*plVar13;
    plVar4 = plVar12;
    if (-1 < (char)bVar6) {
      plVar4 = plVar13;
    }
    pbVar11 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar11 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar2 == 0) || (iVar7 = _memcmp(plVar4,pbVar11,sVar2), plVar13 = plVar12, iVar7 == 0))
      goto LAB_10030074c;
    }
    else {
      if (sVar2 == 0) goto LAB_10030074c;
      if ((uint)*pbVar11 == ((uint)plVar12 & 0xff)) {
        pbVar10 = (byte *)(param_1 + 0x1611);
        do {
          uVar9 = uVar9 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar9 == 0) goto LAB_10030074c;
          bVar5 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar5 == *pbVar11);
        goto LAB_100300718;
      }
    }
  }
  else {
LAB_100300718:
    if ((char)bVar6 < '\0') {
      plVar13 = (long *)*plVar13;
    }
  }
  FUN_1001e79b8(0x3f800000,plVar13,0,1);
LAB_10030074c:
  FUN_1004e313c(auStack_50);
  FUN_1004e38ac(auStack_50,"%d");
  FUN_1006513c0(param_1 + 0x2c0,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




void FUN_100300794(long param_1)

{
  float fVar1;
  float fVar2;
  long local_30;
  code *pcStack_28;
  
  FUN_1002fd214();
  pcStack_28 = FUN_100300bf0;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  fVar1 = (float)*(int *)(param_1 + 0x1668);
  if ((*(float *)(param_1 + 0x16a0) < fVar1) ||
     (fVar2 = (float)*(int *)(param_1 + 0x166c), fVar2 < *(float *)(param_1 + 0x16a0))) {
    fVar1 = (float)*(int *)(param_1 + 0x1658);
    fVar2 = (float)*(int *)(param_1 + 0x165c);
  }
  FUN_1002fb710(fVar1,fVar2,param_1 + 0x520);
  FUN_1002fb85c(*(undefined4 *)(param_1 + 0x16a0),param_1 + 0x520);
  FUN_1002fb8c4(param_1 + 0x520);
  return;
}




void FUN_10030082c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x520;
  FUN_10064e47c(*(undefined4 *)(param_1 + 0x1698),*(undefined4 *)(param_1 + 0x169c),lVar1);
  FUN_10064e5ec(0,0x42820000,param_1 + 0xd8,4,param_1,4);
  FUN_10064e5ec(0,0xc2200000,param_1 + 0x208,8,param_1,8);
  FUN_10064e5ec(0,0xc2aa0000,lVar1,6,param_1,6);
  FUN_10064e72c(0xc2480000,param_1 + 0x3f0,2,lVar1,0);
  FUN_10064e72c(0,param_1 + 0x3f0,4,lVar1,4);
  return;
}




void FUN_1003008f0(long param_1)

{
  FUN_1002fd2bc();
  *(uint *)(param_1 + 0x5a4) = *(uint *)(param_1 + 0x5a4) & 0xfffffffb;
  *(uint *)(param_1 + 0x474) = *(uint *)(param_1 + 0x474) & 0xfffffffb;
  return;
}




void FUN_100300928(float param_1,long *param_2)

{
  *(float *)(param_2 + 0x2d4) = *(float *)(param_2 + 0x2d4) + param_1;
                    /* WARNING: Could not recover jumptable at 0x00010030093c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x148))();
  return;
}




void FUN_100300940(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined8 uVar7;
  undefined4 local_58 [2];
  
  lVar1 = param_1 + 0xd8;
  *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 4;
  FUN_100642324(lVar1);
  bVar3 = false;
  if ((*(float *)(param_1 + 0x120) == 4.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x124)))) {
    bVar3 = *(float *)(param_1 + 0x124) == 4.0;
  }
  if (!bVar3) {
    uVar7 = NEON_fmov(0x40800000,4);
    *(undefined8 *)(param_1 + 0x120) = uVar7;
    FUN_1000200a0(lVar1);
  }
  if ((*(uint *)(param_1 + 0x15c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) & 0xffff807f;
    FUN_1000200a0(lVar1);
  }
  local_58[0] = 0xfff6b43b;
  FUN_100651460(lVar1,local_58);
  uVar7 = FUN_100640db8(0x3fa00000,0x3fa00000,0x3e800000,0);
  FUN_10063f130(uVar7,FUN_10001f4c4);
  uVar4 = FUN_100640db8(0x3fc00000,0x3fc00000,0x3d23d70a,0);
  FUN_10063f130(uVar4,FUN_10001f4c4);
  uVar4 = FUN_10008cac4();
  FUN_10063f614(uVar4,uVar7);
  FUN_100640840(0x3f800000,0x3ee66666,FUN_10001f4c4);
  FUN_100640b58(0x3ee66666,lVar1,&DAT_10115a168,FUN_10001f4c4);
  lVar2 = DAT_101dbd2f8;
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
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063f1bc(puVar6);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_10063f2a4(puVar6,uVar4);
  uVar7 = FUN_100640840(0,0x3f800000,FUN_10001f4c4);
  FUN_100642b14(lVar1,puVar6);
  FUN_100642b14(lVar1,uVar7);
  return;
}




void thunk_FUN_100300b58(void)

{
  FUN_100300b58();
  return;
}




void FUN_100300b44(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100300b58();
  operator_delete(pvVar1);
  return;
}




void FUN_100300b58(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100300b58_10148dc28;
  param_1[0x2b0] = &PTR_FUN_101471ff8;
  if ((void *)param_1[0x2d2] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2d2]);
    param_1[0x2d2] = 0;
    param_1[0x2d1] = 0;
  }
  if ((void *)param_1[0x2d0] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2d0]);
    param_1[0x2d0] = 0;
    param_1[0x2cf] = 0;
  }
  FUN_100214410(param_1 + 0x2b0);
  FUN_1002ceae0(param_1 + 0xa4);
  thunk_FUN_100651068(param_1 + 0x7e);
  thunk_FUN_100651068(param_1 + 0x58);
  thunk_FUN_10064e2bc(param_1 + 0x41);
  thunk_FUN_100651068(param_1 + 0x1b);
  FUN_1002fd02c(param_1);
  return;
}




void FUN_100300bf0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100300bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}




long * FUN_100300bfc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1002fcff0();
  *puVar3 = &PTR_FUN_10148ddb0;
  puVar3 = puVar3 + 0x1b;
  FUN_10064e264(puVar3);
  plVar1 = param_1 + 0x32;
  FUN_10064e264(plVar1);
  thunk_FUN_1001c73d0(param_1 + 0x49);
  plVar2 = param_1 + 0x1b7;
  thunk_FUN_1001c6070(plVar2);
  param_1[0x5a9] = 0;
  param_1[0x5a8] = 0;
  param_1[0x5aa] = 0;
  *(undefined8 *)((long)param_1 + 0x2d64) = 0;
  *(undefined8 *)((long)param_1 + 0x2d5c) = 0;
  *(undefined8 *)((long)param_1 + 0x2d74) = 0;
  *(undefined8 *)((long)param_1 + 0x2d6c) = 0;
  *(undefined8 *)((long)param_1 + 0x2d84) = 0;
  *(undefined8 *)((long)param_1 + 0x2d7c) = 0;
  *(undefined8 *)((long)param_1 + 0x2d8c) = 0x3f80000000000000;
  param_1[0x5b4] = 0;
  param_1[0x5b3] = 0;
  param_1[0x5b6] = 0;
  param_1[0x5b5] = 0;
  param_1[0x5b8] = 0;
  param_1[0x5b7] = 0;
  param_1[0x5ba] = 0;
  param_1[0x5b9] = 0;
  param_1[0x5bc] = 0;
  param_1[0x5bb] = 0;
  param_1[0x5be] = 0;
  param_1[0x5bd] = 0;
  param_1[0x5c0] = 0;
  param_1[0x5bf] = 0;
  param_1[0x5c1] = 0;
  param_1[0x5a7] = (long)&PTR_thunk_FUN_100214410_1014720e0;
  FUN_100327e78(param_1 + 0x5c2);
  FUN_100327e78(param_1 + 0x5c8);
  *(undefined4 *)(param_1 + 0x5ab) = 2;
  param_1[0x5cf] = 0;
  param_1[0x5ce] = 0x4258000044960000;
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  FUN_100642bd8(puVar3,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x49,1);
  FUN_100642bd8(puVar3,plVar2,1);
  FUN_1001c6454(plVar2,1);
  return param_1;
}




long * thunk_FUN_100300bfc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1002fcff0();
  *puVar3 = &PTR_FUN_10148ddb0;
  puVar3 = puVar3 + 0x1b;
  FUN_10064e264(puVar3);
  plVar1 = param_1 + 0x32;
  FUN_10064e264(plVar1);
  thunk_FUN_1001c73d0(param_1 + 0x49);
  plVar2 = param_1 + 0x1b7;
  thunk_FUN_1001c6070(plVar2);
  param_1[0x5a9] = 0;
  param_1[0x5a8] = 0;
  param_1[0x5aa] = 0;
  *(undefined8 *)((long)param_1 + 0x2d64) = 0;
  *(undefined8 *)((long)param_1 + 0x2d5c) = 0;
  *(undefined8 *)((long)param_1 + 0x2d74) = 0;
  *(undefined8 *)((long)param_1 + 0x2d6c) = 0;
  *(undefined8 *)((long)param_1 + 0x2d84) = 0;
  *(undefined8 *)((long)param_1 + 0x2d7c) = 0;
  *(undefined8 *)((long)param_1 + 0x2d8c) = 0x3f80000000000000;
  param_1[0x5b4] = 0;
  param_1[0x5b3] = 0;
  param_1[0x5b6] = 0;
  param_1[0x5b5] = 0;
  param_1[0x5b8] = 0;
  param_1[0x5b7] = 0;
  param_1[0x5ba] = 0;
  param_1[0x5b9] = 0;
  param_1[0x5bc] = 0;
  param_1[0x5bb] = 0;
  param_1[0x5be] = 0;
  param_1[0x5bd] = 0;
  param_1[0x5c0] = 0;
  param_1[0x5bf] = 0;
  param_1[0x5c1] = 0;
  param_1[0x5a7] = (long)&PTR_thunk_FUN_100214410_1014720e0;
  FUN_100327e78(param_1 + 0x5c2);
  FUN_100327e78(param_1 + 0x5c8);
  *(undefined4 *)(param_1 + 0x5ab) = 2;
  param_1[0x5cf] = 0;
  param_1[0x5ce] = 0x4258000044960000;
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  FUN_100642bd8(puVar3,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x49,1);
  FUN_100642bd8(puVar3,plVar2,1);
  FUN_1001c6454(plVar2,1);
  return param_1;
}




void FUN_100300d68(long param_1)

{
  long lVar1;
  int iVar2;
  float fVar3;
  
  lVar1 = param_1 + 0xdb8;
  fVar3 = *(float *)(param_1 + 0x2e7c);
  iVar2 = 1000;
  if ((0.0 < *(float *)(param_1 + 0x2e78)) && (0.0 < fVar3)) {
    iVar2 = (int)(fVar3 / *(float *)(param_1 + 0x2e78));
  }
  FUN_1001c6480(*(undefined4 *)(param_1 + 0x2e70),*(undefined4 *)(param_1 + 0x2e74),lVar1,0,iVar2,
                (int)fVar3,(int)fVar3,(int)*(float *)(param_1 + 0x2e80),0);
  fVar3 = (float)NEON_fminnm((float)*(int *)(param_1 + 0x2e14),0x41e80000);
  if (fVar3 <= -1.0) {
    fVar3 = -1.0;
  }
  FUN_1001c6b50(*(undefined4 *)(param_1 + 0x2e78),*(undefined4 *)(param_1 + 0x2e20),
                *(undefined4 *)(param_1 + 0x2e24),*(undefined4 *)(param_1 + 0x2e28),lVar1,(int)fVar3
               );
  FUN_1001c64e4(lVar1);
  return;
}




void FUN_100300e0c(long *param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  string *psVar10;
  string *this;
  float fVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  std::string::operator=((string *)(param_1 + 0x5a8),(string *)(param_2 + 8));
  param_1[0x5ab] = *(long *)(param_2 + 0x20);
  this = (string *)(param_1 + 0x5ac);
  std::string::operator=(this,(string *)(param_2 + 0x28));
  std::string::operator=((string *)(param_1 + 0x5af),(string *)(param_2 + 0x40));
  *(undefined4 *)(param_1 + 0x5b2) = *(undefined4 *)(param_2 + 0x58);
  std::string::operator=((string *)(param_1 + 0x5b3),(string *)(param_2 + 0x60));
  std::string::operator=((string *)(param_1 + 0x5b6),(string *)(param_2 + 0x78));
  std::string::operator=((string *)(param_1 + 0x5b9),(string *)(param_2 + 0x90));
  std::string::operator=((string *)(param_1 + 0x5bc),(string *)(param_2 + 0xa8));
  std::string::operator=((string *)(param_1 + 0x5bf),(string *)(param_2 + 0xc0));
  lVar13 = *(long *)(param_2 + 0xf0);
  lVar12 = *(long *)(param_2 + 0xe8);
  lVar14 = *(long *)(param_2 + 0xd8);
  param_1[0x5c3] = *(long *)(param_2 + 0xe0);
  param_1[0x5c2] = lVar14;
  param_1[0x5c5] = lVar13;
  param_1[0x5c4] = lVar12;
  lVar13 = *(long *)(param_2 + 0x100);
  lVar12 = *(long *)(param_2 + 0xf8);
  lVar15 = *(long *)(param_2 + 0x110);
  lVar14 = *(long *)(param_2 + 0x108);
  lVar17 = *(long *)(param_2 + 0x120);
  lVar16 = *(long *)(param_2 + 0x118);
  lVar18 = *(long *)(param_2 + 0x128);
  param_1[0x5cd] = *(long *)(param_2 + 0x130);
  param_1[0x5cc] = lVar18;
  param_1[0x5cb] = lVar17;
  param_1[0x5ca] = lVar16;
  param_1[0x5c9] = lVar15;
  param_1[0x5c8] = lVar14;
  param_1[0x5c7] = lVar13;
  param_1[0x5c6] = lVar12;
  iVar6 = *(int *)((long)param_1 + 0x2e14);
  fVar11 = (float)NEON_fminnm((float)iVar6,0x41e80000);
  if (fVar11 <= -1.0) {
    fVar11 = -1.0;
  }
  *(float *)(param_1 + 0x5cf) = *(float *)((long)param_1 + 0x2e1c);
  *(undefined4 *)((long)param_1 + 0x2e7c) = *(undefined4 *)((long)param_1 + 0x2e2c);
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  if (*(float *)((long)param_1 + 0x2e1c) == 0.0 && (int)fVar11 == 0) {
    iVar6 = -1;
  }
  FUN_1001c7990(param_1 + 0x49,iVar6);
  FUN_10030107c(param_1,param_1 + 0x5c2);
  (**(code **)(*param_1 + 0x160))(param_1);
  (**(code **)(*param_1 + 0x148))(param_1);
  FUN_100301d28(0x438c0000,0x41700000,0x3f333333,0x3e800000,param_1 + 0x49,
                (string *)(param_1 + 0x5bc));
  bVar5 = *(byte *)((long)param_1 + 0x2d77);
  uVar7 = (ulong)bVar5;
  sVar1 = param_1[0x5ad];
  if (-1 < (char)bVar5) {
    sVar1 = uVar7;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    psVar10 = *(string **)this;
    psVar3 = psVar10;
    if (-1 < (char)bVar5) {
      psVar3 = this;
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if (sVar1 == 0) {
        return;
      }
      iVar6 = _memcmp(psVar3,pbVar9,sVar1);
      this = psVar10;
      if (iVar6 == 0) {
        return;
      }
      goto LAB_100301044;
    }
    if (sVar1 == 0) {
      return;
    }
    if ((uint)*pbVar9 != ((uint)psVar10 & 0xff)) goto LAB_100301044;
    pbVar8 = (byte *)((long)param_1 + 0x2d61);
    do {
      uVar7 = uVar7 - 1;
      pbVar9 = pbVar9 + 1;
      if (uVar7 == 0) {
        return;
      }
      bVar4 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar4 == *pbVar9);
  }
  if ((char)bVar5 < '\0') {
    this = *(string **)this;
  }
LAB_100301044:
  FUN_1001e79b8(0x3f800000,this,0,1);
  return;
}




void FUN_10030107c(long param_1,long param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_2 + 0x1c);
  fVar3 = *(float *)(param_2 + 0xc);
  iVar1 = 1000;
  if ((0.0 < fVar3) && (0.0 < fVar2)) {
    iVar1 = (int)(fVar2 / fVar3);
  }
  FUN_1001c6480(*(undefined4 *)(param_1 + 0x2e70),*(undefined4 *)(param_1 + 0x2e74),param_1 + 0xdb8,
                0,iVar1,(int)fVar2,(int)fVar2,(int)*(float *)(param_2 + 0x20),0);
  fVar2 = (float)NEON_fminnm((float)*(int *)(param_2 + 4),0x41e80000);
  if (fVar2 <= -1.0) {
    fVar2 = -1.0;
  }
  FUN_1001c6b50(fVar3,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                *(undefined4 *)(param_2 + 0x18),param_1 + 0xdb8,(int)fVar2);
  return;
}




void FUN_10030111c(void *param_1)

{
  size_t sVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  ushort *puVar9;
  undefined8 uVar10;
  long lVar11;
  size_t sVar12;
  ushort uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  long *plVar17;
  undefined4 uVar18;
  void *local_68;
  code *pcStack_60;
  char local_51;
  
  FUN_1002fd0ec();
  pcStack_60 = FUN_100301ac4;
  local_68 = param_1;
  FUN_100643618(0xbf800000,&local_68,0,1);
  uVar7 = FUN_10001f55c();
  FUN_10063f0e8(0x3fc00000);
  FUN_100642b14(param_1,uVar7);
  uVar4 = FUN_1000f0a34(*(undefined4 *)((long)param_1 + 0x2e14));
  uVar5 = FUN_1000f0a34(*(undefined4 *)((long)param_1 + 0x2e44));
  uVar7 = FUN_1000d0538();
  FUN_100640684(*(undefined4 *)((long)param_1 + 0x2e5c),uVar7,(long)param_1 + 0x2e7c);
  FUN_10063f130(uVar7,FUN_1002fe6fc);
  FUN_10063f0e8(0x3f800000,uVar7);
  uVar7 = FUN_1000d0538();
  FUN_100640684(*(undefined4 *)((long)param_1 + 0x2e60),uVar7,(long)param_1 + 0x2e80);
  FUN_10063f130(uVar7,FUN_1002fe6fc);
  FUN_10063f0e8(0x3f800000,uVar7);
  pbVar16 = DAT_101d91198;
  if (*(float *)((long)param_1 + 0x2e5c) <= *(float *)((long)param_1 + 0x2e2c)) {
    plVar17 = (long *)((long)param_1 + 0x2d98);
    bVar3 = *(byte *)((long)param_1 + 0x2daf);
    uVar14 = (ulong)bVar3;
    sVar12 = *(size_t *)((long)param_1 + 0x2da0);
    if (-1 < (char)bVar3) {
      sVar12 = uVar14;
    }
    sVar1 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar1 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar12 == sVar1) {
      plVar8 = (long *)*plVar17;
      if (-1 < (char)bVar3) {
        plVar8 = plVar17;
      }
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar16 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar3 < '\0') goto LAB_10030134c;
      if (sVar12 == 0) goto LAB_1003013a8;
      if ((uint)*pbVar16 == ((uint)(long *)*plVar17 & 0xff)) {
        pbVar15 = (byte *)((long)param_1 + 0x2d99);
        do {
          uVar14 = uVar14 - 1;
          pbVar16 = pbVar16 + 1;
          if (uVar14 == 0) goto LAB_1003013a8;
          bVar3 = *pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (bVar3 == *pbVar16);
      }
    }
  }
  else {
    plVar17 = (long *)((long)param_1 + 0x2db0);
    bVar3 = *(byte *)((long)param_1 + 0x2dc7);
    uVar14 = (ulong)bVar3;
    sVar12 = *(size_t *)((long)param_1 + 0x2db8);
    if (-1 < (char)bVar3) {
      sVar12 = uVar14;
    }
    sVar1 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar1 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar12 == sVar1) {
      plVar8 = (long *)*plVar17;
      if (-1 < (char)bVar3) {
        plVar8 = plVar17;
      }
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar16 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar3 < '\0') {
LAB_10030134c:
        if ((sVar12 == 0) || (iVar6 = _memcmp(plVar8,pbVar16,sVar12), iVar6 == 0))
        goto LAB_1003013a8;
      }
      else {
        if (sVar12 == 0) goto LAB_1003013a8;
        if ((uint)*pbVar16 == ((uint)(long *)*plVar17 & 0xff)) {
          pbVar15 = (byte *)((long)param_1 + 0x2db1);
          do {
            uVar14 = uVar14 - 1;
            pbVar16 = pbVar16 + 1;
            if (uVar14 == 0) goto LAB_1003013a8;
            bVar3 = *pbVar15;
            pbVar15 = pbVar15 + 1;
          } while (bVar3 == *pbVar16);
        }
      }
    }
  }
  uVar7 = FUN_1001a47a4();
  if (*(char *)((long)plVar17 + 0x17) < '\0') {
    plVar17 = (long *)*plVar17;
  }
  FUN_10001549c(&local_68,plVar17);
  FUN_1001e1e48(uVar7,&local_68,0,0);
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  FUN_100642b14(param_1,uVar7);
LAB_1003013a8:
  if (uVar4 == uVar5) {
    puVar9 = (ushort *)FUN_1000d0538();
    FUN_100640684(*(undefined4 *)((long)param_1 + 0x2e4c),puVar9,(long)param_1 + 0x2e78);
    FUN_10063f130(puVar9,FUN_1002fe6fc);
    FUN_10063f0e8(0x3f800000,puVar9);
    uVar7 = FUN_10001f4d4();
  }
  else {
    uVar7 = FUN_1000d0538();
    uVar18 = 0x3f800000;
    if (uVar5 <= uVar4) {
      uVar18 = 0;
    }
    pcVar2 = FUN_100301598;
    if (uVar5 <= uVar4) {
      pcVar2 = FUN_10030168c;
    }
    FUN_100640684(uVar18,uVar7,(long)param_1 + 0x2e78);
    FUN_10063f130(uVar7,FUN_1002fe6fc);
    FUN_10063f0e8(0x3f000000,uVar7);
    lVar11 = FUN_10008e900();
    *(code **)(lVar11 + 0x10) = pcVar2;
    *(void **)(lVar11 + 0x20) = param_1;
    uVar10 = FUN_1000d0538();
    FUN_100640684(*(undefined4 *)((long)param_1 + 0x2e4c),uVar10,(long)param_1 + 0x2e78);
    FUN_10063f130(uVar10,FUN_1002fe6fc);
    FUN_10063f0e8(0x3f000000,uVar10);
    lVar11 = DAT_101dbd2f8;
    uVar13 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar13 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar13 * 0x40 + 0x10);
      if (uVar13 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar13 = 0xffff;
      }
      else {
        uVar13 = *puVar9;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar13;
      *(int *)(lVar11 + 0x20014) = *(int *)(lVar11 + 0x20014) + 1;
      FUN_10063f564(puVar9);
      *(int *)(lVar11 + 0x20020) = *(int *)(lVar11 + 0x20020) + 1;
    }
    FUN_10063f614(puVar9,uVar7);
    uVar7 = FUN_10001f4d4();
  }
  FUN_10063f2a4(uVar7,puVar9);
  FUN_100642b14(param_1,uVar7);
  lVar11 = FUN_10008e900();
  *(code **)(lVar11 + 0x10) = FUN_1002fd208;
  *(void **)(lVar11 + 0x20) = param_1;
  FUN_100642b14(param_1,lVar11);
  uVar7 = FUN_10001f55c();
  FUN_10063f0e8(0x3fc00000);
  FUN_100642b14(param_1,uVar7);
  return;
}




void FUN_100301598(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long *plVar10;
  long *plVar11;
  
  plVar11 = (long *)(param_1 + 0x2dc8);
  bVar5 = *(byte *)(param_1 + 0x2ddf);
  uVar7 = (ulong)bVar5;
  sVar1 = *(size_t *)(param_1 + 0x2dd0);
  if (-1 < (char)bVar5) {
    sVar1 = uVar7;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    plVar10 = (long *)*plVar11;
    plVar3 = plVar10;
    if (-1 < (char)bVar5) {
      plVar3 = plVar11;
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar1 == 0) || (iVar6 = _memcmp(plVar3,pbVar9,sVar1), plVar11 = plVar10, iVar6 == 0))
      goto LAB_100301678;
    }
    else {
      if (sVar1 == 0) goto LAB_100301678;
      if ((uint)*pbVar9 == ((uint)plVar10 & 0xff)) {
        pbVar8 = (byte *)(param_1 + 0x2dc9);
        do {
          uVar7 = uVar7 - 1;
          pbVar9 = pbVar9 + 1;
          if (uVar7 == 0) goto LAB_100301678;
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar4 == *pbVar9);
        goto LAB_100301644;
      }
    }
  }
  else {
LAB_100301644:
    if ((char)bVar5 < '\0') {
      plVar11 = (long *)*plVar11;
    }
  }
  FUN_1001e79b8(0x3f800000,plVar11,0,1);
LAB_100301678:
  FUN_1003018f0(0,param_1);
  return;
}




void FUN_10030168c(void)

{
  FUN_1003018f0(0x3f800000);
  return;
}




void FUN_100301694(long *param_1)

{
  long *local_30;
  code *pcStack_28;
  
  FUN_1002fd214();
  pcStack_28 = FUN_100301ac4;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  FUN_10030107c(param_1,param_1 + 0x5c8);
  (**(code **)(*param_1 + 0x160))(param_1);
  return;
}




void FUN_1003016f0(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  ulong uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 local_58;
  
  (**(code **)(*param_3 + 0x48))();
  if ((param_2 != 0.0) && (fVar6 = (float)(**(code **)(*param_3 + 0x48))(param_3), fVar6 != 0.0)) {
    plVar1 = param_3 + 0x1b;
    uVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    local_58 = (undefined1 *)CONCAT44(param_2,uVar7);
    FUN_10064e48c(plVar1,&local_58);
    plVar2 = param_3 + 0x49;
    FUN_1001c77a8(plVar2);
    FUN_1001c64e4(param_3 + 0x1b7);
    local_58 = &DAT_3f0000003f000000;
    (**(code **)(param_3[0x49] + 0x28))(plVar2,&local_58);
    plVar3 = param_3 + 0x32;
    uVar8 = FUN_10064e3cc(plVar1);
    FUN_10064e3cc(plVar1);
    param_2 = param_2 + *(float *)((long)param_3 + 0x2e74) * -2.0;
    FUN_10064e47c(uVar8,plVar3);
    uVar5 = FUN_100642bc8(plVar2);
    if ((uVar5 & 1) == 0) {
      FUN_10064e3cc(plVar3);
      fVar6 = param_2;
      FUN_1001c7e04(plVar2);
      param_2 = param_2 / fVar6;
      bVar4 = false;
      if ((*(float *)(param_3 + 0x52) == param_2) &&
         (bVar4 = false, !NAN(*(float *)((long)param_3 + 0x294)) && !NAN(param_2))) {
        bVar4 = *(float *)((long)param_3 + 0x294) == param_2;
      }
      if (!bVar4) {
        *(float *)(param_3 + 0x52) = param_2;
        *(float *)((long)param_3 + 0x294) = param_2;
        FUN_1000200a0(plVar2);
      }
    }
    FUN_10064e5ec(0,0,plVar3,4,plVar1,4);
    fVar9 = *(float *)((long)param_3 + 0x2e74) * -0.5;
    FUN_10064e5ec(*(float *)(param_3 + 0x5ce) * -0.5,fVar9,param_3 + 0x1b7,6,plVar3,6);
    fVar6 = (float)FUN_10064e3cc(plVar3);
    FUN_10064e3cc(plVar3);
    FUN_10064e5ec(fVar6 * 0.5,fVar9 * 0.5,plVar3,4,plVar1,4);
    FUN_10064e5ec(0,0,plVar1,4,param_3,4);
  }
  return;
}




void FUN_1003018bc(long param_1)

{
  FUN_1002fd2bc();
  *(uint *)(param_1 + 0xe3c) = *(uint *)(param_1 + 0xe3c) & 0xfffffffb;
  FUN_1001c7970(param_1 + 0x248,0);
  return;
}




void FUN_1003018f0(undefined8 param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  undefined1 auStack_50 [32];
  
  uVar3 = FUN_100644a94("SPOILSOFWAR::PULSE_RING");
  FUN_100644aec(auStack_50,uVar3,0);
  FUN_100644c34(param_2,auStack_50,1);
  *(int *)(param_2 + 0x2e78) = (int)param_1;
  fVar5 = (float)NEON_fminnm((float)*(int *)(param_2 + 0x2e44),0x41e80000);
  if (fVar5 <= -1.0) {
    fVar5 = -1.0;
  }
  FUN_1001c6b50(param_1,*(undefined4 *)(param_2 + 0x2e50),*(undefined4 *)(param_2 + 0x2e54),
                *(undefined4 *)(param_2 + 0x2e58),param_2 + 0xdb8,(int)fVar5);
  lVar1 = param_2 + 0x248;
  FUN_100642324(lVar1);
  iVar4 = *(int *)(param_2 + 0x2e44);
  if ((iVar4 == 0) && (*(float *)(param_2 + 0x2e4c) == 0.0)) {
    iVar4 = -1;
  }
  FUN_1001c7990(lVar1,iVar4);
  FUN_100642324(lVar1);
  bVar2 = false;
  if ((*(float *)(param_2 + 0x28c) == 0.0) && (bVar2 = false, !NAN(*(float *)(param_2 + 0x288)))) {
    bVar2 = *(float *)(param_2 + 0x288) == 0.0;
  }
  if (!bVar2) {
    *(undefined8 *)(param_2 + 0x288) = 0;
    FUN_1000200a0(lVar1);
  }
  FUN_100301d28(0x438c0000,0x41700000,0x3f333333,0x3e800000,lVar1,&DAT_101d91198);
  return;
}




void FUN_100301a08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148ddb0;
  FUN_100214410(param_1 + 0x5a7);
  FUN_1001c80b4(param_1 + 0x1b7);
  thunk_FUN_1001c768c(param_1 + 0x49);
  thunk_FUN_10064e2bc(param_1 + 0x32);
  thunk_FUN_10064e2bc(param_1 + 0x1b);
  FUN_1002fd02c(param_1);
  return;
}




void FUN_100301a64(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148ddb0;
  FUN_100214410(param_1 + 0x5a7);
  FUN_1001c80b4(param_1 + 0x1b7);
  thunk_FUN_1001c768c(param_1 + 0x49);
  thunk_FUN_10064e2bc(param_1 + 0x32);
  thunk_FUN_10064e2bc(param_1 + 0x1b);
  pvVar1 = (void *)FUN_1002fd02c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100301ac4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100301acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}




void FUN_100301ad0(long param_1,long param_2)

{
  void *local_38 [2];
  char local_21;
  
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x60);
  FUN_10001549c(local_38,*(undefined8 *)(param_2 + 0x30));
  std::string::operator=((string *)(param_1 + 0x40),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,*(undefined8 *)(param_2 + 0x18));
  std::string::operator=((string *)(param_1 + 0xa8),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,*(undefined8 *)(param_2 + 0x40));
  std::string::operator=((string *)(param_1 + 0x60),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,*(undefined8 *)(param_2 + 0x48));
  std::string::operator=((string *)(param_1 + 0x78),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,*(undefined8 *)(param_2 + 0x50));
  std::string::operator=((string *)(param_1 + 0x90),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 100);
  FUN_10001549c(local_38,*(undefined8 *)(param_2 + 0x38));
  std::string::operator=((string *)(param_1 + 0x28),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,*(undefined8 *)(param_2 + 0x20));
  std::string::operator=((string *)(param_1 + 0xc0),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_100301c20(long param_1,long param_2)

{
  void *local_38 [2];
  char local_21;
  
  FUN_100301ad0();
  FUN_10001549c(local_38,*(undefined8 *)(param_2 + 8));
  std::string::operator=((string *)(param_1 + 0xf8),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_100301c78(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100214410();
  operator_delete(pvVar1);
  return;
}




void FUN_100301c8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148df60;
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    operator_delete((void *)param_1[0x1f]);
  }
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    operator_delete((void *)param_1[0x1c]);
  }
  FUN_100214410(param_1);
  return;
}




void FUN_100301cd8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148df60;
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    operator_delete((void *)param_1[0x1f]);
  }
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    operator_delete((void *)param_1[0x1c]);
  }
  pvVar1 = (void *)FUN_100214410(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100301d28(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,byte *param_6)

{
  size_t sVar1;
  size_t sVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ushort uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte bVar11;
  ushort *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  void *local_98 [2];
  char local_81;
  
  FUN_100642324();
  if ((*(uint *)(param_5 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_5 + 0x84) = *(uint *)(param_5 + 0x84) & 0xffff807f;
    FUN_1000200a0(param_5);
  }
  fVar14 = *(float *)(param_5 + 0x48);
  fVar15 = *(float *)(param_5 + 0x4c);
  fVar13 = fVar15 * 0.85;
  bVar4 = false;
  if ((fVar14 == fVar14 * 0.85) && (bVar4 = false, !NAN(fVar15) && !NAN(fVar13))) {
    bVar4 = fVar15 == fVar13;
  }
  if (!bVar4) {
    *(float *)(param_5 + 0x48) = fVar14 * 0.85;
    *(float *)(param_5 + 0x4c) = fVar13;
    FUN_1000200a0(param_5);
  }
  fVar13 = *(float *)(param_5 + 0x44) + param_1;
  if (*(float *)(param_5 + 0x44) != fVar13) {
    *(float *)(param_5 + 0x44) = fVar13;
    FUN_1000200a0(param_5);
  }
  lVar3 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar12;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_10063f0f0(puVar12);
    *(undefined ***)puVar12 = &PTR_thunk_FUN_10063eeb4_10144b270;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_10063f0e8(0x3dcccccd,puVar12);
  FUN_100642b14(param_5,puVar12);
  uVar6 = FUN_100640840(0x3f800000,param_4,FUN_1002dc12c);
  FUN_1006409b4(0,-param_1,param_4,FUN_10006bf9c);
  FUN_100640db8(fVar14,fVar15,param_4,FUN_10006bf9c);
  lVar3 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar12;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_10063f1bc(puVar12);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_10063f2a4(puVar12,uVar6);
  FUN_100642b14(param_5,puVar12);
  bVar11 = param_6[0x17];
  uVar8 = (ulong)bVar11;
  sVar1 = *(size_t *)(param_6 + 8);
  if (-1 < (char)bVar11) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pbVar9 = *(byte **)param_6;
    if (-1 < (char)bVar11) {
      pbVar9 = param_6;
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar11 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar9,pbVar10,sVar1), iVar5 == 0)) goto LAB_1003020b8;
    }
    else {
      if (sVar1 == 0) goto LAB_1003020b8;
      pbVar9 = param_6;
      if ((uint)*pbVar10 == ((uint)*(byte **)param_6 & 0xff)) {
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          pbVar9 = pbVar9 + 1;
          if (uVar8 == 0) goto LAB_1003020b8;
        } while (*pbVar9 == *pbVar10);
      }
    }
  }
  lVar3 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar7 * 0x40);
    if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar12;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_10063ee9c(puVar12);
    *(undefined ***)puVar12 = &PTR_FUN_101469878;
    puVar12[0xc] = 0;
    puVar12[0xd] = 0;
    puVar12[0xe] = 0;
    puVar12[0xf] = 0;
    puVar12[0x10] = 0;
    puVar12[0x11] = 0;
    puVar12[0x12] = 0;
    puVar12[0x13] = 0;
    puVar12[0x14] = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    bVar11 = param_6[0x17];
  }
  pbVar9 = *(byte **)param_6;
  if (-1 < (char)bVar11) {
    pbVar9 = param_6;
  }
  FUN_10001549c(local_98,pbVar9);
  FUN_1001e1e48(puVar12,local_98,0,0);
  if (local_81 < '\0') {
    operator_delete(local_98[0]);
  }
  FUN_100642b14(param_5,puVar12);
LAB_1003020b8:
  uVar6 = FUN_1006409b4(0,param_2,param_3,FUN_1000d05c0);
  FUN_1006409b4(0,-(float)param_2,param_3,FUN_1000d05c0);
  lVar3 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar12;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_10063f564(puVar12);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_10063f614(puVar12,uVar6);
  FUN_10063f664(puVar12);
  FUN_100642b14(param_5,puVar12);
  return;
}




void * FUN_1003021a8(undefined8 param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = operator_new(0x540);
  uVar2 = FUN_1003022c4();
  FUN_1003021e0(uVar2,param_1);
  return pvVar1;
}




void FUN_1003021e0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  puVar1 = (undefined8 *)(param_1 + 0x518);
  if (puVar1 != param_2) {
    FUN_10014ebf8(puVar1,*(undefined8 *)(param_1 + 0x520));
    *(long *)(param_1 + 0x518) = param_1 + 0x520;
    *(undefined8 *)(param_1 + 0x528) = 0;
    *(undefined8 *)(param_1 + 0x520) = 0;
    plVar5 = (long *)*param_2;
    while (plVar5 != param_2 + 1) {
      FUN_100214b8c(puVar1,param_1 + 0x520,plVar5 + 4,plVar5 + 4);
      plVar3 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        plVar3 = plVar5 + 2;
        bVar2 = *(long **)*plVar3 != plVar5;
        plVar5 = (long *)*plVar3;
        if (bVar2) {
          do {
            lVar4 = *plVar3;
            plVar3 = (long *)(lVar4 + 0x10);
            plVar5 = (long *)*plVar3;
          } while (*plVar5 != lVar4);
        }
      }
      else {
        do {
          plVar5 = plVar3;
          plVar3 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    }
  }
  FUN_1000153b4(param_1 + 0x530,param_2 + 3);
  FUN_1006513c0(param_1 + 1000,param_1 + 0x530);
  return;
}




long * FUN_1003022c4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 local_48 [2];
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_thunk_FUN_100302904_10148df88;
  puVar5 = puVar5 + 0x17;
  thunk_FUN_100651ebc(puVar5);
  plVar1 = param_1 + 0x41;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x5f;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x7d;
  thunk_FUN_100650e64(plVar3);
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = (long)(param_1 + 0xa4);
  FUN_1004e313c(param_1 + 0xa6);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xffffffbf;
  FUN_100651f8c(puVar5,PTR_s_build___SpoilsOfWarPartsCommon_t_101854a50);
  FUN_100651f94(puVar5,"itembg_highlight_top_left",0,0,0,"itembg_highlight_top_center",0,0,0,
                "itembg_highlight_top_right",0,"itembg_highlight_mid_left",0,
                "itembg_highlight_mid_center",0,"itembg_highlight_mid_right",0,
                "itembg_highlight_bot_left",0,"itembg_highlight_bot_center",0,
                "itembg_highlight_bot_right",0);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xfffffffb;
  FUN_100652cac(plVar1,PTR_s_build___SpoilsOfWarPartsCommon_t_101854a50,"itembg_faded");
  FUN_100652cac(plVar2,PTR_s_build___SpoilsOfWarPartsCommon_t_101854a50,"itembg_container");
  *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) | 1;
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar4 = *(uint *)((long)param_1 + 0x46c);
  if ((uVar4 & 0x7f80) != 0x5e00) {
    *(uint *)((long)param_1 + 0x46c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x5e00;
    FUN_1000200a0(plVar3);
  }
  local_48[0] = 0xfffee3b8;
  FUN_100651460(plVar3,local_48);
  return param_1;
}




void FUN_100302524(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  undefined4 local_48;
  float fStack_44;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x48))();
  fVar1 = fVar1 + -120.0;
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_1006525c4(0x42700000,fVar1,0x42700000,0x42700000,param_2 + -120.0,0x42700000,param_3 + 0x17);
  local_48 = (**(code **)(*param_3 + 0x48))(param_3);
  fStack_44 = fVar1;
  FUN_10064e48c(param_3 + 0x41,&local_48);
  local_48 = (**(code **)(*param_3 + 0x48))(param_3);
  fStack_44 = fVar1;
  FUN_10064e48c(param_3 + 0x5f,&local_48);
  fVar1 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  FUN_10065179c(fVar1 + -120.0,0,0x3f800000,param_3 + 0x7d);
  FUN_10064e5ec(0,0,param_3 + 0x7d,8,param_3,8);
  FUN_10064e5ec(0,0,param_3 + 0x17,8,param_3,8);
  return;
}




void FUN_100302650(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  lVar1 = param_4 + 0x2f8;
  uVar3 = *(uint *)(param_4 + 0x37c);
  if ((uVar3 & 0x7f80) != 0x1e80) {
    *(uint *)(param_4 + 0x37c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x1e80;
    FUN_1000200a0(lVar1);
  }
  lVar2 = param_4 + 0x208;
  uVar3 = *(uint *)(param_4 + 0x28c);
  if ((uVar3 & 0x7f80) != 0x1e80) {
    *(uint *)(param_4 + 0x28c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x1e80;
    FUN_1000200a0(lVar2);
  }
  uVar4 = FUN_10001f55c();
  FUN_10063f0e8(param_1);
  FUN_100642b14(lVar2,uVar4);
  uVar4 = FUN_10001f55c();
  FUN_10063f0e8(param_1);
  FUN_100642b14(lVar1,uVar4);
  uVar4 = FUN_100640840(0x3f800000,param_2,FUN_10001f4c4);
  FUN_100642b14(lVar2,uVar4);
  uVar4 = FUN_100640840(0x3f800000,param_2,FUN_10001f4c4);
  FUN_100642b14(lVar1,uVar4);
  uVar4 = FUN_100640840(0x3ee66666,param_3,FUN_10001f4ac);
  FUN_100642b14(lVar2,uVar4);
  uVar4 = FUN_100640840(0,param_3,FUN_10001f4ac);
  FUN_100642b14(lVar1,uVar4);
  return;
}




void FUN_10030279c(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  
  lVar1 = param_2 + 0xb8;
  FUN_100642324(lVar1);
  uVar5 = *(uint *)(param_2 + 0x13c);
  if ((uVar5 & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x13c) = uVar5 & 0xffff807f;
    FUN_1000200a0(lVar1);
    uVar5 = *(uint *)(param_2 + 0x13c);
  }
  *(uint *)(param_2 + 0x13c) = uVar5 | 4;
  uVar3 = FUN_100640840(0x3f800000,param_1 * 0.5,FUN_10001f4ac);
  FUN_100642b14(lVar1,uVar3);
  uVar3 = FUN_100640840(0,param_1 * 0.5,FUN_10001f4ac);
  FUN_100642b14(lVar1,uVar3);
  lVar2 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063f050(puVar6);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_10063f090(puVar6,0);
  FUN_100642b14(lVar1,puVar6);
  FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_ice_rewarded.mp3",0,1);
  return;
}




void thunk_FUN_100302904(void)

{
  FUN_100302904();
  return;
}




void FUN_1003028ec(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100302904();
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_100302524(void)

{
  FUN_100302524();
  return;
}




void FUN_100302904(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100302904_10148df88;
  if ((void *)param_1[0xa7] != (void *)0x0) {
    operator_delete__((void *)param_1[0xa7]);
    param_1[0xa7] = 0;
    param_1[0xa6] = 0;
  }
  FUN_10014ebf8(param_1 + 0xa3,param_1[0xa4]);
  thunk_FUN_100651068(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_1014a7108;
  param_1[0x76] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x79);
  FUN_10064e2bc(param_1 + 0x5f);
  param_1[0x41] = &PTR_FUN_1014a7108;
  param_1[0x58] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5b);
  FUN_10064e2bc(param_1 + 0x41);
  param_1[0x17] = &PTR_FUN_1014a6db0;
  param_1[0x2e] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1003029d4(long param_1,long param_2)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_1004e0150(*(undefined8 *)(param_2 + 0x10),0);
  FUN_1000153b4(param_1 + 0x70,uVar1);
  FUN_10001549c(local_38,*(undefined8 *)(param_2 + 8));
  std::string::operator=((string *)(param_1 + 0x38),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x60);
  FUN_10001549c(local_38,*(undefined8 *)(param_2 + 0x28));
  std::string::operator=((string *)(param_1 + 0x88),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0x5c);
  return;
}




long * FUN_100302a74(int *param_1)

{
  long *plVar1;
  
  if (*param_1 == 1) {
    plVar1 = operator_new(0xd08);
    FUN_10030362c();
  }
  else {
    if (*param_1 != 0) {
      return (long *)0x0;
    }
    plVar1 = operator_new(0x6b0);
    FUN_100302ae4();
  }
  (**(code **)(*plVar1 + 0x138))(plVar1,param_1);
  return plVar1;
}




long * FUN_100302ae4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 local_48 [2];
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_thunk_FUN_100303c10_10148e0d0;
  puVar5[0x17] = &PTR_FUN_10148e240;
  FUN_1002151a8(puVar5 + 0x18);
  FUN_100653ff8(param_1 + 0x2e);
  thunk_FUN_1001a66f4(param_1 + 0x4f);
  plVar1 = param_1 + 0x6f;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x86;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0xac;
  thunk_FUN_100650e64(plVar3);
  *(undefined4 *)(param_1 + 0xd2) = 0x437a0000;
  *(undefined1 *)((long)param_1 + 0x694) = 0;
  FUN_10001549c(param_1 + 0xd3,"+");
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2e,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4f,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar4 = *(uint *)((long)param_1 + 0x5e4);
  if ((uVar4 & 0x7f80) != 0x5e00) {
    *(uint *)((long)param_1 + 0x5e4) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x5e00;
    FUN_1000200a0(plVar3);
  }
  local_48[0] = 0xffb0917e;
  FUN_100651460(plVar3,local_48);
  return param_1;
}




void FUN_100302c6c(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  long *plVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  string *this;
  string *this_00;
  undefined1 auStack_50 [8];
  void *local_48;
  
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  std::string::operator=((string *)(param_1 + 0x19),(string *)(param_2 + 2));
  this = (string *)(param_1 + 0x1c);
  std::string::operator=(this,(string *)(param_2 + 8));
  this_00 = (string *)(param_1 + 0x1f);
  std::string::operator=(this_00,(string *)(param_2 + 0xe));
  std::string::operator=((string *)(param_1 + 0x22),(string *)(param_2 + 0x14));
  *(undefined4 *)(param_1 + 0x25) = param_2[0x1a];
  FUN_1000153b4(param_1 + 0x26,param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x28) = param_2[0x20];
  std::string::operator=((string *)(param_1 + 0x29),(string *)(param_2 + 0x22));
  lVar8 = *(long *)(param_2 + 0x28);
  *(undefined8 *)((long)param_1 + 0x165) = *(undefined8 *)((long)param_2 + 0xa5);
  param_1[0x2c] = lVar8;
  if (*(char *)((long)param_1 + 0x16c) != '\0') {
    FUN_100302ed4(param_1);
  }
  FUN_1004e313c(auStack_50);
  if ((int)param_1[0x25] < 0) {
    pcVar7 = "%d";
  }
  else {
    pcVar7 = "%s%d";
  }
  FUN_1004e38ac(auStack_50,pcVar7);
  FUN_1006513c0(param_1 + 0x86,auStack_50);
  FUN_1006513c0(param_1 + 0xac,param_1 + 0x26);
  plVar1 = param_1 + 0x22;
  bVar5 = *(byte *)((long)param_1 + 0x127);
  uVar9 = (ulong)bVar5;
  sVar2 = param_1[0x23];
  if (-1 < (char)bVar5) {
    sVar2 = uVar9;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    plVar4 = (long *)*plVar1;
    if (-1 < (char)bVar5) {
      plVar4 = plVar1;
    }
    pbVar11 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar11 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar2 == 0) || (iVar6 = _memcmp(plVar4,pbVar11,sVar2), iVar6 == 0)) goto LAB_100302e4c;
    }
    else {
      if (sVar2 == 0) {
LAB_100302e4c:
        *(undefined1 *)((long)param_1 + 0x694) = 0;
        if (*(char *)((long)param_1 + 0xf7) < '\0') {
          this = *(string **)this;
        }
        if (*(char *)((long)param_1 + 0x10f) < '\0') {
          this_00 = *(string **)this_00;
        }
        FUN_100652cac(param_1 + 0x2e,this,this_00);
        *(uint *)((long)param_1 + 0x2fc) = *(uint *)((long)param_1 + 0x2fc) & 0xfffffffb;
        *(uint *)((long)param_1 + 500) = *(uint *)((long)param_1 + 500) | 4;
        (**(code **)(*param_1 + 0x140))(param_1);
        goto LAB_100302ea0;
      }
      if ((uint)*pbVar11 == ((uint)(long *)*plVar1 & 0xff)) {
        pbVar10 = (byte *)((long)param_1 + 0x111);
        do {
          uVar9 = uVar9 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar9 == 0) goto LAB_100302e4c;
          bVar5 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar5 == *pbVar11);
      }
    }
  }
  *(undefined1 *)((long)param_1 + 0x694) = 1;
  FUN_10012e6f0(plVar1);
  FUN_100136b6c(plVar1,param_1 + 0x17,param_1 + 0x4f);
  *(uint *)((long)param_1 + 0x2fc) = *(uint *)((long)param_1 + 0x2fc) | 4;
  *(uint *)((long)param_1 + 500) = *(uint *)((long)param_1 + 500) & 0xfffffffb;
LAB_100302ea0:
  (**(code **)(*param_1 + 0x158))(param_1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




void FUN_100302ed4(long param_1)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,"x");
  std::string::operator=((string *)(param_1 + 0x698),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_100302f24(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  ulong uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  
  plVar1 = param_1 + 0xac;
  uVar7 = (**(code **)(*param_1 + 0x48))();
  FUN_10065179c(uVar7,0,0x3f800000,plVar1);
  plVar2 = param_1 + 0x2e;
  FUN_10064e47c((int)param_1[0xd2],(int)param_1[0xd2],plVar2);
  plVar3 = param_1 + 0x4f;
  fVar8 = *(float *)(param_1 + 0xd2);
  FUN_1001a6880(plVar3);
  fVar9 = (float)FUN_1001a688c(plVar3);
  FUN_1001a688c(plVar3);
  if (fVar9 <= fVar8) {
    fVar9 = fVar8;
  }
  fVar9 = *(float *)(param_1 + 0xd2) / (float)(int)fVar9;
  bVar5 = false;
  if ((*(float *)(param_1 + 0x58) == fVar9) &&
     (bVar5 = false, !NAN(*(float *)((long)param_1 + 0x2c4)) && !NAN(fVar9))) {
    bVar5 = *(float *)((long)param_1 + 0x2c4) == fVar9;
  }
  if (!bVar5) {
    *(float *)(param_1 + 0x58) = fVar9;
    *(float *)((long)param_1 + 0x2c4) = fVar9;
    FUN_1000200a0(plVar3);
  }
  uVar6 = FUN_100642bc8(plVar1);
  if ((uVar6 & 1) == 0) {
    plVar4 = param_1 + 0x6f;
    uVar6 = FUN_100642bc8(plVar4);
    if ((uVar6 & 1) == 0) {
      uVar7 = 0x3f000000;
      FUN_10064e784(0x3f000000,0x3f000000,0x3f000000,0x3f666666,0,0,plVar1,param_1);
      local_58 = FUN_1006425d0(plVar4,1,0,1,1);
      uStack_54 = uVar7;
      FUN_10064e48c(plVar4,&local_58);
      FUN_10064e72c(0x80000000,plVar4,2,plVar1,0);
      FUN_10064e72c(0,plVar4,4,plVar1,4);
    }
  }
  uVar6 = FUN_100642bc8(plVar2);
  if ((uVar6 & 1) == 0) {
    FUN_10064e72c(0xc2c80000,plVar2,2,plVar1,0);
    FUN_10064e72c(0,plVar2,4,plVar1,4);
  }
  uVar6 = FUN_100642bc8(plVar3);
  if ((uVar6 & 1) == 0) {
    FUN_10064e72c(0xc2c80000,plVar3,2,plVar1,0);
    FUN_10064e72c(0,plVar3,4,plVar1,4);
  }
  return;
}




void FUN_100303110(undefined4 param_1,float param_2,undefined8 param_3,long *param_4)

{
  size_t sVar1;
  size_t sVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort uVar11;
  uint uVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  ushort *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 local_88;
  float fStack_84;
  
  fVar20 = *(float *)(param_4 + 8);
  fVar21 = *(float *)((long)param_4 + 0x44);
  local_88 = param_1;
  fStack_84 = param_2;
  fVar17 = (float)FUN_10064efd0(&local_88,param_4[4]);
  fVar19 = param_2;
  fVar18 = (float)(**(code **)(*param_4 + 0x48))(param_4);
  fVar17 = fVar17 - fVar18 * 0.5;
  param_2 = param_2 - fVar19 * 0.5;
  bVar7 = false;
  if ((*(float *)(param_4 + 8) == fVar17) &&
     (bVar7 = false, !NAN(*(float *)((long)param_4 + 0x44)) && !NAN(param_2))) {
    bVar7 = *(float *)((long)param_4 + 0x44) == param_2;
  }
  if (!bVar7) {
    *(float *)(param_4 + 8) = fVar17;
    *(float *)((long)param_4 + 0x44) = param_2;
    FUN_1000200a0(param_4);
  }
  uVar12 = *(uint *)((long)param_4 + 0x84);
  if ((uVar12 & 0x7f80) != 0) {
    *(uint *)((long)param_4 + 0x84) = uVar12 & 0xffff807f;
    FUN_1000200a0(param_4);
    uVar12 = *(uint *)((long)param_4 + 0x84);
  }
  *(uint *)((long)param_4 + 0x84) = uVar12 | 4;
  uVar9 = FUN_10001f55c();
  fVar19 = (float)param_3;
  FUN_10063f0e8(fVar19 * 0.5);
  FUN_100642b14(param_4,uVar9);
  uVar9 = FUN_100640840(0x3f800000,param_3,FUN_10001f4c4);
  FUN_1006409b4(fVar20 - fVar17,fVar21 - param_2,param_3,FUN_10001f4ac);
  uVar10 = FUN_10001f4d4();
  FUN_10063f2a4(uVar10,uVar9);
  FUN_100642b14(param_4,uVar10);
  plVar4 = param_4 + 0x29;
  bVar5 = *(byte *)((long)param_4 + 0x15f);
  uVar13 = (ulong)bVar5;
  sVar1 = param_4[0x2a];
  if (-1 < (char)bVar5) {
    sVar1 = uVar13;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    plVar3 = (long *)*plVar4;
    if (-1 < (char)bVar5) {
      plVar3 = plVar4;
    }
    pbVar15 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar15 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar1 == 0) || (iVar8 = _memcmp(plVar3,pbVar15,sVar1), iVar8 == 0)) goto LAB_100303388;
    }
    else {
      if (sVar1 == 0) goto LAB_100303388;
      if ((uint)*pbVar15 == ((uint)(long *)*plVar4 & 0xff)) {
        pbVar14 = (byte *)((long)param_4 + 0x149);
        do {
          uVar13 = uVar13 - 1;
          pbVar15 = pbVar15 + 1;
          if (uVar13 == 0) goto LAB_100303388;
          bVar5 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar5 == *pbVar15);
      }
    }
  }
  lVar6 = DAT_101dbd2f8;
  uVar11 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar16 = (ushort *)0x0;
  }
  else {
    puVar16 = (ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar11 * 0x40);
    if (uVar11 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar16;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar11;
    *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
    FUN_10063ee9c(puVar16);
    *(undefined ***)puVar16 = &PTR_FUN_101469878;
    puVar16[0xc] = 0;
    puVar16[0xd] = 0;
    puVar16[0xe] = 0;
    puVar16[0xf] = 0;
    puVar16[0x10] = 0;
    puVar16[0x11] = 0;
    puVar16[0x12] = 0;
    puVar16[0x13] = 0;
    puVar16[0x14] = 0;
    puVar16[8] = 0;
    puVar16[9] = 0;
    puVar16[10] = 0;
    puVar16[0xb] = 0;
    *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
  }
  FUN_1001e1e48(puVar16,plVar4,0,0);
  FUN_100642b14(param_4,puVar16);
LAB_100303388:
  plVar4 = param_4 + 0xac;
  if ((*(uint *)((long)param_4 + 0x5e4) & 0x7f80) != 0) {
    *(uint *)((long)param_4 + 0x5e4) = *(uint *)((long)param_4 + 0x5e4) & 0xffff807f;
    FUN_1000200a0(plVar4);
  }
  plVar3 = param_4 + 0x6f;
  if ((*(uint *)((long)param_4 + 0x3fc) & 0x7f80) != 0) {
    *(uint *)((long)param_4 + 0x3fc) = *(uint *)((long)param_4 + 0x3fc) & 0xffff807f;
    FUN_1000200a0(plVar3);
  }
  fVar17 = *(float *)((long)param_4 + 0x5a4) + 55.0;
  if (*(float *)((long)param_4 + 0x5a4) != fVar17) {
    *(float *)((long)param_4 + 0x5a4) = fVar17;
    FUN_1000200a0(plVar4);
  }
  fVar17 = *(float *)((long)param_4 + 0x3bc) + 55.0;
  if (*(float *)((long)param_4 + 0x3bc) != fVar17) {
    *(float *)((long)param_4 + 0x3bc) = fVar17;
    FUN_1000200a0(plVar3);
  }
  uVar9 = FUN_10001f55c();
  FUN_10063f0e8(fVar19 * 1.75);
  FUN_100642b14(plVar4,uVar9);
  uVar9 = FUN_100640840(0x3f3d70a4,0x3e99999a,FUN_10001f4ac);
  FUN_1006409b4(0,0xc25c0000,0x3e99999a,FUN_10001f4ac);
  uVar10 = FUN_10001f4d4();
  FUN_10063f2a4(uVar10,uVar9);
  FUN_100642b14(plVar4,uVar10);
  uVar9 = FUN_10001f55c();
  FUN_10063f0e8(fVar19 * 1.6);
  FUN_100642b14(plVar3,uVar9);
  uVar9 = FUN_100640840(0x3f800000,0x3e99999a,FUN_10001f4ac);
  FUN_1006409b4(0,0xc25c0000,0x3e99999a,FUN_10001f4ac);
  uVar10 = FUN_10001f4d4();
  FUN_10063f2a4(uVar10,uVar9);
  FUN_100642b14(plVar3,uVar10);
  plVar4 = param_4 + 0x2e;
  if (*(char *)((long)param_4 + 0x694) != '\0') {
    plVar4 = param_4 + 0x4f;
  }
  FUN_100301d28(0x425c0000,0x40e00000,0x3f333333,0,plVar4,&DAT_101d91198);
  return;
}




void FUN_100303568(long *param_1)

{
  FUN_1001a679c(param_1 + 0x4f);
                    /* WARNING: Could not recover jumptable at 0x000100303598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))(param_1);
  return;
}




void FUN_10030359c(long param_1)

{
  FUN_1001a679c(param_1 + 0x1c0);
                    /* WARNING: Could not recover jumptable at 0x0001003035cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -0xb8) + 0x140))((long *)(param_1 + -0xb8));
  return;
}




void FUN_1003035d0(long param_1)

{
  *(uint *)(param_1 + 0x5e4) = *(uint *)(param_1 + 0x5e4) & 0xfffffffb;
  *(uint *)(param_1 + 0x3fc) = *(uint *)(param_1 + 0x3fc) & 0xfffffffb;
  return;
}




void FUN_1003035ec(long param_1)

{
  FUN_10065403c(param_1 + 0x170,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dfc(param_1 + 0x170,0xb);
  return;
}




long FUN_10030362c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *local_48;
  
  puVar1 = (undefined8 *)FUN_100302ae4();
  *puVar1 = &PTR_FUN_10148e268;
  puVar1[0x17] = &PTR_FUN_10148e3d8;
  puVar1 = puVar1 + 0xd6;
  thunk_FUN_100652c08(puVar1);
  FUN_10064e264(param_1 + 0x7a0);
  lVar2 = 0x858;
  do {
    thunk_FUN_100652c08(param_1 + lVar2);
    lVar2 = lVar2 + 0xf0;
  } while (lVar2 != 0xd08);
  FUN_100642bd8(param_1 + 0x378,puVar1,1);
  FUN_100642bd8(param_1 + 0x378,param_1 + 0x7a0,1);
  FUN_100652cac(puVar1,PTR_s_build___InventoryCommon_atlas_10184e108,"inventory_hero_mastery_accent"
               );
  FUN_100653080(puVar1,1);
  FUN_100652eac(puVar1,300);
  lVar2 = 0x858;
  do {
    FUN_100652cac(param_1 + lVar2,PTR_s_build___InventoryCommon_atlas_10184e108,
                  "64x64_hero_mastery_star");
    FUN_10064e47c(0x42340000,0x42340000,param_1 + lVar2);
    lVar2 = lVar2 + 0xf0;
  } while (lVar2 != 0xd08);
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x170) + 0x28))(param_1 + 0x170,&local_48);
  return param_1;
}




void FUN_100303760(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  FUN_100302c6c();
  *(uint *)(param_1 + 0x734) = *(uint *)(param_1 + 0x734) & 0xfffffffb;
  *(uint *)(param_1 + 0x824) = *(uint *)(param_1 + 0x824) & 0xfffffffb;
  if (0 < *(int *)(param_2 + 0x68)) {
    lVar2 = 0;
    uVar3 = 0;
    uVar4 = 0xffffffff;
    do {
      lVar1 = param_1 + 0x858 + lVar2;
      FUN_100642bd8(param_1 + 0x7a0,lVar1,1);
      if (lVar2 != 0) {
        FUN_10064e72c(0x41200000,lVar1,3,param_1 + (uVar4 & 0xffffffff) * 0xf0 + 0x858,1);
      }
      if (3 < uVar3) {
        return;
      }
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 + 1;
      lVar2 = lVar2 + 0xf0;
    } while ((long)uVar3 < (long)*(int *)(param_2 + 0x68));
  }
  return;
}




void FUN_100303838(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  
  lVar1 = param_3 + 0x7a0;
  local_38 = FUN_1006425d0(lVar1,1,0,1,1);
  uStack_34 = param_2;
  FUN_10064e48c(lVar1,&local_38);
  FUN_10064e72c(0x41200000,lVar1,0,param_3 + 0x6b0,2);
  FUN_10064e72c(0,lVar1,4,param_3 + 0x6b0,4);
  FUN_100302f24(param_3);
  return;
}




void FUN_1003038cc(long param_1)

{
  FUN_10065403c(param_1 + 0x170,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_large_circle");
  FUN_100652dfc(param_1 + 0x170,0xb);
  return;
}




void thunk_FUN_100303c10(void)

{
  FUN_100303c10();
  return;
}




void FUN_100303910(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100303c10();
  operator_delete(pvVar1);
  return;
}




void FUN_100303924(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010030392c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}




void FUN_100303930(long param_1)

{
  FUN_100303c10(param_1 + -0xb8);
  return;
}




void FUN_100303938(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100303c10(param_1 + -0xb8);
  operator_delete(pvVar1);
  return;
}




void FUN_100303950(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_FUN_10148e268;
  param_1[0x17] = &PTR_FUN_10148e3d8;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0xc18) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0xcd0) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0xce8);
    FUN_10064e2bc((long)param_1 + lVar1 + 0xc18);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  thunk_FUN_10064e2bc(param_1 + 0xf4);
  param_1[0xd6] = &PTR_FUN_1014a7108;
  param_1[0xed] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf0);
  FUN_10064e2bc(param_1 + 0xd6);
  FUN_100303c10(param_1);
  return;
}




void FUN_1003039f8(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  lVar2 = 0;
  *param_1 = &PTR_FUN_10148e268;
  param_1[0x17] = &PTR_FUN_10148e3d8;
  do {
    *(undefined ***)((long)param_1 + lVar2 + 0xc18) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar2 + 0xcd0) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar2 + 0xce8);
    FUN_10064e2bc((long)param_1 + lVar2 + 0xc18);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != -0x4b0);
  thunk_FUN_10064e2bc(param_1 + 0xf4);
  param_1[0xd6] = &PTR_FUN_1014a7108;
  param_1[0xed] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf0);
  FUN_10064e2bc(param_1 + 0xd6);
  pvVar1 = (void *)FUN_100303c10(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100303aa4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  param_1[-0x17] = &PTR_FUN_10148e268;
  *param_1 = &PTR_FUN_10148e3d8;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0xb60) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0xc18) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0xc30);
    FUN_10064e2bc((long)param_1 + lVar1 + 0xb60);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  thunk_FUN_10064e2bc(param_1 + 0xdd);
  param_1[0xbf] = &PTR_FUN_1014a7108;
  param_1[0xd6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd9);
  FUN_10064e2bc(param_1 + 0xbf);
  FUN_100303c10(param_1 + -0x17);
  return;
}




void FUN_100303b58(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  lVar2 = 0;
  param_1[-0x17] = &PTR_FUN_10148e268;
  *param_1 = &PTR_FUN_10148e3d8;
  do {
    *(undefined ***)((long)param_1 + lVar2 + 0xb60) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar2 + 0xc18) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar2 + 0xc30);
    FUN_10064e2bc((long)param_1 + lVar2 + 0xb60);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != -0x4b0);
  thunk_FUN_10064e2bc(param_1 + 0xdd);
  param_1[0xbf] = &PTR_FUN_1014a7108;
  param_1[0xd6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd9);
  FUN_10064e2bc(param_1 + 0xbf);
  pvVar1 = (void *)FUN_100303c10(param_1 + -0x17);
  operator_delete(pvVar1);
  return;
}




void FUN_100303c10(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100303c10_10148e0d0;
  param_1[0x17] = &PTR_FUN_10148e240;
  if (*(char *)((long)param_1 + 0x6af) < '\0') {
    operator_delete((void *)param_1[0xd3]);
  }
  thunk_FUN_100651068(param_1 + 0xac);
  thunk_FUN_100651068(param_1 + 0x86);
  thunk_FUN_10064e2bc(param_1 + 0x6f);
  param_1[0x4f] = &PTR_FUN_101462f50;
  param_1[0x60] = &PTR_FUN_101463068;
  if (*(char *)((long)param_1 + 0x35f) < '\0') {
    operator_delete((void *)param_1[0x69]);
  }
  FUN_1010b7434(param_1 + 99);
  FUN_10064221c(param_1 + 0x4f);
  param_1[0x2e] = &PTR_FUN_1014a77a8;
  param_1[0x45] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0x4c);
  param_1[0x2e] = &PTR_FUN_1014a7108;
  param_1[0x45] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x48);
  FUN_10064e2bc(param_1 + 0x2e);
  if (*(char *)((long)param_1 + 0x15f) < '\0') {
    operator_delete((void *)param_1[0x29]);
  }
  if ((void *)param_1[0x27] != (void *)0x0) {
    operator_delete__((void *)param_1[0x27]);
    param_1[0x26] = 0;
    param_1[0x27] = 0;
  }
  if (*(char *)((long)param_1 + 0x127) < '\0') {
    operator_delete((void *)param_1[0x22]);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    operator_delete((void *)param_1[0x1f]);
  }
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    operator_delete((void *)param_1[0x1c]);
  }
  if (*(char *)((long)param_1 + 0xdf) < '\0') {
    operator_delete((void *)param_1[0x19]);
  }
  param_1[0x17] = &PTR_FUN_10146b508;
  FUN_100136bd8(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




long * FUN_100303d74(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_FUN_10148e400;
  puVar6 = puVar6 + 0x17;
  thunk_FUN_100652c08(puVar6);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x5b;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x81;
  thunk_FUN_100650e64(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  plVar7 = (long *)thunk_FUN_10064dde8();
  FUN_10064a8f8(plVar7,10);
  (**(code **)(*plVar7 + 0x68))(plVar7,puVar6,0,10);
  (**(code **)(*plVar7 + 0x68))(plVar7,plVar1,0,10);
  (**(code **)(*plVar7 + 0x68))(plVar7,plVar2,0,10);
  (**(code **)(*plVar7 + 0x68))(plVar7,plVar3,1,10);
  FUN_10064e524(param_1,plVar7);
  iVar5 = FUN_100126c88();
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar5 == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651594(plVar1,*ppuVar4,&DAT_10115a168);
  FUN_100651594(plVar2,*ppuVar4,&DAT_10115a168);
  FUN_100651594(plVar3,*ppuVar4,&DAT_10115a168);
  FUN_100651460(plVar3,&DAT_101158cb0);
  return param_1;
}




long * thunk_FUN_100303d74(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_FUN_10148e400;
  puVar6 = puVar6 + 0x17;
  thunk_FUN_100652c08(puVar6);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x5b;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x81;
  thunk_FUN_100650e64(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  plVar7 = (long *)thunk_FUN_10064dde8();
  FUN_10064a8f8(plVar7,10);
  (**(code **)(*plVar7 + 0x68))(plVar7,puVar6,0,10);
  (**(code **)(*plVar7 + 0x68))(plVar7,plVar1,0,10);
  (**(code **)(*plVar7 + 0x68))(plVar7,plVar2,0,10);
  (**(code **)(*plVar7 + 0x68))(plVar7,plVar3,1,10);
  FUN_10064e524(param_1,plVar7);
  iVar5 = FUN_100126c88();
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar5 == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651594(plVar1,*ppuVar4,&DAT_10115a168);
  FUN_100651594(plVar2,*ppuVar4,&DAT_10115a168);
  FUN_100651594(plVar3,*ppuVar4,&DAT_10115a168);
  FUN_100651460(plVar3,&DAT_101158cb0);
  return param_1;
}




void FUN_100303f38(undefined8 param_1,undefined8 param_2,long param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  char *pcVar2;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  if (param_4 < 4) {
    pcVar2 = (&PTR_s_stat_offense_10148e538)[(int)param_4];
  }
  else {
    pcVar2 = "";
  }
  FUN_100652cac(param_3 + 0xb8,PTR_s_build___MenuPartsCommon_tga_101854970,pcVar2);
  FUN_1004e313c(auStack_50);
  FUN_1000ee590(param_1,param_5,auStack_50,0);
  FUN_1006513c0(param_3 + 0x2d8,auStack_50);
  FUN_1006513c0(param_3 + 0x1a8,param_6);
  if ((float)param_2 == 0.0) {
    iVar1 = FUN_100642d08(param_3 + 0x408);
    if (iVar1 != 0) {
      FUN_1006423ec(param_3 + 0x408,1);
    }
  }
  else {
    FUN_1004e313c(auStack_60);
    pcVar2 = "(+[MODIFIER_VALUE])";
    if ((float)param_2 <= 0.0) {
      pcVar2 = "([MODIFIER_VALUE])";
    }
    FUN_1004e3120(auStack_70,pcVar2);
    iVar1 = 2;
    if (1 < (int)param_5 - 5U) {
      iVar1 = (int)param_5;
    }
    FUN_1000ee590(param_2,iVar1,auStack_60,0);
    FUN_1004e3120(auStack_80,"[MODIFIER_VALUE]");
    FUN_1004e3bc4(auStack_70,0,auStack_80,auStack_60);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
    FUN_1006513c0(param_3 + 0x408,auStack_70);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




void FUN_1003040b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148e400;
  thunk_FUN_100651068(param_1 + 0x81);
  thunk_FUN_100651068(param_1 + 0x5b);
  thunk_FUN_100651068(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100304124(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148e400;
  thunk_FUN_100651068(param_1 + 0x81);
  thunk_FUN_100651068(param_1 + 0x5b);
  thunk_FUN_100651068(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_100304198(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 *local_68;
  
  puVar9 = (undefined8 *)FUN_1001b4648();
  *puVar9 = &PTR_thunk_FUN_100304844_10148e568;
  puVar9 = puVar9 + 0x4d;
  thunk_FUN_1001c397c(puVar9);
  plVar1 = param_1 + 0x121;
  thunk_FUN_1001bd4e0(plVar1,0);
  thunk_FUN_1001fc310(param_1 + 0x1b7,param_2,1,0);
  plVar2 = param_1 + 0x1c0;
  thunk_FUN_100655644(plVar2);
  plVar3 = param_1 + 0x1eb;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x209;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x22f;
  thunk_FUN_100650e64(plVar5);
  *(undefined2 *)(param_1 + 0x255) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x1b8],1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100655930(plVar2,plVar3,1);
  FUN_100655930(plVar2,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar9,1);
  iVar8 = FUN_100126c88();
  local_68 = &DAT_3f0000003f000000;
  FUN_1001bd8b4(plVar1,&local_68);
  FUN_1001bdbb4(0x3ecccccd,plVar1);
  thunk_FUN_1001bd798(plVar1,1);
  (**(code **)(*(long *)param_1[0x1b8] + 0x138))();
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)param_1[0x1b8] + 0x28))((long *)param_1[0x1b8],&local_68);
  *(uint *)(param_1[0x1b8] + 0xeb4) = *(uint *)(param_1[0x1b8] + 0xeb4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xe84) = *(uint *)((long)param_1 + 0xe84) & 0xfffffffb;
  FUN_100652ca4(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970);
  if ((*(float *)(param_1 + 0x1f5) != 0.5) || (*(float *)((long)param_1 + 0xfac) != 0.5)) {
    param_1[0x1f5] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar8 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651038(plVar4,*ppuVar6);
  uVar7 = *(uint *)((long)param_1 + 0x10cc);
  if ((uVar7 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x10cc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x7280;
    FUN_1000200a0(plVar4);
  }
  FUN_10065165c(plVar4,1);
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar8 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651038(plVar5,*ppuVar6);
  uVar7 = *(uint *)((long)param_1 + 0x11fc);
  if ((uVar7 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x11fc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x7280;
    FUN_1000200a0(plVar5);
  }
  FUN_10065165c(plVar5,1);
  uVar10 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_SOLD_OUT",0);
  FUN_1006513c0(plVar5,uVar10);
  *(uint *)((long)param_1 + 0x11fc) = *(uint *)((long)param_1 + 0x11fc) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x56) != 1.35) || (*(float *)((long)param_1 + 0x2b4) != 1.35)) {
    param_1[0x56] = 0x3faccccd3faccccd;
    FUN_1000200a0(puVar9);
  }
  FUN_1001b4964(param_1,1);
  return param_1;
}




long * thunk_FUN_100304198(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 *puStack_68;
  
  puVar9 = (undefined8 *)FUN_1001b4648();
  *puVar9 = &PTR_thunk_FUN_100304844_10148e568;
  puVar9 = puVar9 + 0x4d;
  thunk_FUN_1001c397c(puVar9);
  plVar1 = param_1 + 0x121;
  thunk_FUN_1001bd4e0(plVar1,0);
  thunk_FUN_1001fc310(param_1 + 0x1b7,param_2,1,0);
  plVar2 = param_1 + 0x1c0;
  thunk_FUN_100655644(plVar2);
  plVar3 = param_1 + 0x1eb;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x209;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x22f;
  thunk_FUN_100650e64(plVar5);
  *(undefined2 *)(param_1 + 0x255) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x1b8],1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100655930(plVar2,plVar3,1);
  FUN_100655930(plVar2,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar9,1);
  iVar8 = FUN_100126c88();
  puStack_68 = &DAT_3f0000003f000000;
  FUN_1001bd8b4(plVar1,&puStack_68);
  FUN_1001bdbb4(0x3ecccccd,plVar1);
  thunk_FUN_1001bd798(plVar1,1);
  (**(code **)(*(long *)param_1[0x1b8] + 0x138))();
  puStack_68 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)param_1[0x1b8] + 0x28))((long *)param_1[0x1b8],&puStack_68);
  *(uint *)(param_1[0x1b8] + 0xeb4) = *(uint *)(param_1[0x1b8] + 0xeb4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xe84) = *(uint *)((long)param_1 + 0xe84) & 0xfffffffb;
  FUN_100652ca4(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970);
  if ((*(float *)(param_1 + 0x1f5) != 0.5) || (*(float *)((long)param_1 + 0xfac) != 0.5)) {
    param_1[0x1f5] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar8 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651038(plVar4,*ppuVar6);
  uVar7 = *(uint *)((long)param_1 + 0x10cc);
  if ((uVar7 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x10cc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x7280;
    FUN_1000200a0(plVar4);
  }
  FUN_10065165c(plVar4,1);
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar8 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651038(plVar5,*ppuVar6);
  uVar7 = *(uint *)((long)param_1 + 0x11fc);
  if ((uVar7 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x11fc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x7280;
    FUN_1000200a0(plVar5);
  }
  FUN_10065165c(plVar5,1);
  uVar10 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_SOLD_OUT",0);
  FUN_1006513c0(plVar5,uVar10);
  *(uint *)((long)param_1 + 0x11fc) = *(uint *)((long)param_1 + 0x11fc) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x56) != 1.35) || (*(float *)((long)param_1 + 0x2b4) != 1.35)) {
    param_1[0x56] = 0x3faccccd3faccccd;
    FUN_1000200a0(puVar9);
  }
  FUN_1001b4964(param_1,1);
  return param_1;
}




void FUN_1003044bc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001003044c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_1003044c8(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  undefined4 local_4c;
  undefined8 local_48;
  
  plVar1 = param_3 + 0x1c0;
  if (*(char *)((long)param_3 + 0x12a9) == '\0') {
    *(uint *)((long)param_3 + 0xe84) =
         *(uint *)((long)param_3 + 0xe84) & 0xfffffffb | (uint)*(byte *)(param_3 + 0x255) << 2;
    uVar3 = 0xff;
    uVar4 = 0;
  }
  else {
    *(uint *)((long)param_3 + 0xe84) = *(uint *)((long)param_3 + 0xe84) & 0xfffffffb;
    uVar4 = (uint)*(byte *)(param_3 + 0x255) << 2;
    uVar3 = 0x99;
  }
  *(uint *)((long)param_3 + 0x11fc) = *(uint *)((long)param_3 + 0x11fc) & 0xfffffffb | uVar4;
  uVar4 = *(uint *)((long)param_3 + 0x84);
  if (uVar3 != (uVar4 >> 7 & 0xff)) {
    *(uint *)((long)param_3 + 0x84) = uVar4 & 0xffff8000 | uVar4 & 0x7f | uVar3 << 7;
    FUN_1000200a0(param_3);
  }
  fVar6 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  plVar5 = param_3 + 0x121;
  FUN_10064e47c(plVar5);
  FUN_10065179c(fVar6 + -40.0,0,0x3f800000,param_3 + 0x22f);
  FUN_10064e5ec(0,0,param_3 + 0x1eb,5,param_3 + 0x209,7);
  FUN_1006557ec(plVar1);
  FUN_10064e5ec(0,0xc0a00000,plVar1,6,param_3,6);
  FUN_10064e5ec(0,0,param_3 + 0x22f,8,plVar1,8);
  local_4c = 0xff000000;
  iVar2 = *(int *)(param_3[0x1b8] + 0x45e8);
  if (iVar2 == 3) {
    local_4c = 0xff1addfa;
  }
  else if (iVar2 == 2) {
    local_4c = 0xfff22ae8;
  }
  else if (iVar2 == 1) {
    local_4c = 0xffe19400;
  }
  FUN_1001bdb04(0x3f800000,plVar5,&local_4c);
  fVar7 = 0.0;
  FUN_10064e5ec(0,plVar5,4,param_3,4);
  plVar5 = (long *)param_3[0x1b8];
  local_48 = (undefined1 *)CONCAT44(local_48._4_4_,fVar6);
  FUN_10064e3cc(plVar1);
  local_48 = (undefined1 *)CONCAT44((param_2 + -10.0) - fVar7,(undefined4)local_48);
  FUN_10064e48c(plVar5,&local_48);
  (**(code **)(*plVar5 + 0x90))(plVar5);
  FUN_10064e5ec(0,0x40a00000,param_3[0x1b8],4,param_3,4);
  plVar1 = param_3 + 0x4d;
  if ((*(float *)(param_3 + 0x55) != 26.0) || (*(float *)((long)param_3 + 0x2ac) != 10.0)) {
    param_3[0x55] = 0x4120000041d00000;
    FUN_1000200a0(plVar1);
  }
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_48);
  return;
}




void FUN_100304750(undefined1 param_1 [16],undefined4 param_2,long *param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [8];
  void *local_38;
  
  *(undefined1 *)(param_3 + 0x255) = 1;
  plVar1 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar1 = param_4;
  }
  FUN_100652cdc(param_3 + 0x1eb,plVar1);
  FUN_1004e313c(auStack_40);
  FUN_1004e38ac(auStack_40,"%d");
  FUN_1006513c0(param_3 + 0x209,auStack_40);
  FUN_100651460(param_3 + 0x209,param_6);
  local_48 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_44 = param_2;
  FUN_10064e48c(param_3,&local_48);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_100304810(long *param_1,undefined1 param_2)

{
  *(undefined1 *)((long)param_1 + 0x12a9) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000100304820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_100304824(long param_1)

{
  FUN_1001fc794(param_1 + 0xdb8);
  return;
}




void thunk_FUN_100304844(void)

{
  FUN_100304844();
  return;
}




void FUN_100304830(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100304844();
  operator_delete(pvVar1);
  return;
}




void FUN_100304844(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100304844_10148e568;
  thunk_FUN_100651068(param_1 + 0x22f);
  thunk_FUN_100651068(param_1 + 0x209);
  param_1[0x1eb] = &PTR_FUN_1014a7108;
  param_1[0x202] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x205);
  FUN_10064e2bc(param_1 + 0x1eb);
  param_1[0x1c0] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x1d7);
  FUN_10064e2bc(param_1 + 0x1c0);
  thunk_FUN_1001fc594(param_1 + 0x1b7);
  param_1[0x121] = &PTR_FUN_101464e50;
  param_1[0x18c] = &PTR_FUN_1014a6db0;
  param_1[0x1a3] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x1a6);
  FUN_10064e2bc(param_1 + 0x18c);
  param_1[0x162] = &PTR_FUN_1014a6db0;
  param_1[0x179] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x17c);
  FUN_10064e2bc(param_1 + 0x162);
  param_1[0x138] = &PTR_FUN_1014a6db0;
  param_1[0x14f] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x152);
  FUN_10064e2bc(param_1 + 0x138);
  FUN_10064e2bc(param_1 + 0x121);
  param_1[0x4d] = &PTR_FUN_101461c58;
  thunk_FUN_1000160a0(param_1 + 0x119);
  thunk_FUN_100651068(param_1 + 0xf2);
  thunk_FUN_100651068(param_1 + 0xcc);
  thunk_FUN_100651068(param_1 + 0xa6);
  param_1[0x88] = &PTR_FUN_1014a7108;
  param_1[0x9f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa2);
  FUN_10064e2bc(param_1 + 0x88);
  param_1[0x5e] = &PTR_FUN_1014a6db0;
  param_1[0x75] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x78);
  FUN_10064e2bc(param_1 + 0x5e);
  FUN_10064221c(param_1 + 0x4d);
  FUN_10003bec8(param_1);
  return;
}




long * FUN_1003049ec(long *param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_FUN_101466398;
  puVar4 = puVar4 + 0x17;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_100650e64(plVar2);
  *(undefined4 *)(param_1 + 0x79) = 0x3fc00000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(puVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"upgrade_arrow");
  bVar3 = false;
  if ((*(float *)(param_1 + 0x21) == 0.5) &&
     (bVar3 = false, !NAN(*(float *)((long)param_1 + 0x10c)))) {
    bVar3 = *(float *)((long)param_1 + 0x10c) == 1.0;
  }
  if (!bVar3) {
    param_1[0x21] = 0x3f8000003f000000;
    FUN_1000200a0(puVar4);
  }
  fVar5 = *(float *)(param_1 + 0x79);
  if ((*(float *)(param_1 + 0x20) != fVar5) || (*(float *)((long)param_1 + 0x104) != fVar5)) {
    *(float *)(param_1 + 0x20) = fVar5;
    *(float *)((long)param_1 + 0x104) = fVar5;
    FUN_1000200a0(puVar4);
  }
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"upgrade_arrow");
  if ((*(float *)(param_1 + 0x3f) != 0.5) || (*(float *)((long)param_1 + 0x1fc) != 1.0)) {
    param_1[0x3f] = 0x3f8000003f000000;
    FUN_1000200a0(plVar1);
  }
  fVar5 = *(float *)(param_1 + 0x79);
  if ((*(float *)(param_1 + 0x3e) != fVar5) || (*(float *)((long)param_1 + 500) != fVar5)) {
    *(float *)(param_1 + 0x3e) = fVar5;
    *(float *)((long)param_1 + 500) = fVar5;
    FUN_1000200a0(plVar1);
  }
  *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xfffffffb;
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651460(plVar2,&DAT_101158cd0);
  *(uint *)((long)param_1 + 0x31c) = *(uint *)((long)param_1 + 0x31c) & 0xfffffffb;
  uVar6 = 0x3f000000;
  if ((*(float *)(param_1 + 0x5d) != 0.5) ||
     (uVar6 = 0x3f800000, *(float *)((long)param_1 + 0x2ec) != 1.0)) {
    param_1[0x5d] = 0x3f8000003f000000;
    FUN_1000200a0(plVar2);
  }
  local_48 = FUN_10065317c(puVar4);
  uStack_44 = uVar6;
  FUN_10064e48c(param_1,&local_48);
  return param_1;
}




long * thunk_FUN_1003049ec(long *param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_FUN_101466398;
  puVar4 = puVar4 + 0x17;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_100650e64(plVar2);
  *(undefined4 *)(param_1 + 0x79) = 0x3fc00000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(puVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"upgrade_arrow");
  bVar3 = false;
  if ((*(float *)(param_1 + 0x21) == 0.5) &&
     (bVar3 = false, !NAN(*(float *)((long)param_1 + 0x10c)))) {
    bVar3 = *(float *)((long)param_1 + 0x10c) == 1.0;
  }
  if (!bVar3) {
    param_1[0x21] = 0x3f8000003f000000;
    FUN_1000200a0(puVar4);
  }
  fVar5 = *(float *)(param_1 + 0x79);
  if ((*(float *)(param_1 + 0x20) != fVar5) || (*(float *)((long)param_1 + 0x104) != fVar5)) {
    *(float *)(param_1 + 0x20) = fVar5;
    *(float *)((long)param_1 + 0x104) = fVar5;
    FUN_1000200a0(puVar4);
  }
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"upgrade_arrow");
  if ((*(float *)(param_1 + 0x3f) != 0.5) || (*(float *)((long)param_1 + 0x1fc) != 1.0)) {
    param_1[0x3f] = 0x3f8000003f000000;
    FUN_1000200a0(plVar1);
  }
  fVar5 = *(float *)(param_1 + 0x79);
  if ((*(float *)(param_1 + 0x3e) != fVar5) || (*(float *)((long)param_1 + 500) != fVar5)) {
    *(float *)(param_1 + 0x3e) = fVar5;
    *(float *)((long)param_1 + 500) = fVar5;
    FUN_1000200a0(plVar1);
  }
  *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xfffffffb;
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651460(plVar2,&DAT_101158cd0);
  *(uint *)((long)param_1 + 0x31c) = *(uint *)((long)param_1 + 0x31c) & 0xfffffffb;
  uVar6 = 0x3f000000;
  if ((*(float *)(param_1 + 0x5d) != 0.5) ||
     (uVar6 = 0x3f800000, *(float *)((long)param_1 + 0x2ec) != 1.0)) {
    param_1[0x5d] = 0x3f8000003f000000;
    FUN_1000200a0(plVar2);
  }
  uStack_48 = FUN_10065317c(puVar4);
  uStack_44 = uVar6;
  FUN_10064e48c(param_1,&uStack_48);
  return param_1;
}




void FUN_100304c18(long param_1,int param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined8 local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  
  FUN_100642324(param_1 + 0xb8);
  lVar1 = FUN_10008e900();
  *(code **)(lVar1 + 0x10) = thunk_FUN_100304f5c;
  *(long *)(lVar1 + 0x20) = param_1;
  FUN_100640db8(*(float *)(param_1 + 0x3c8),*(float *)(param_1 + 0x3c8) * 1.1875,0x3e2a7efa,0);
  FUN_100640db8(*(undefined4 *)(param_1 + 0x3c8),*(undefined4 *)(param_1 + 0x3c8),0x3e2a7efa,0);
  FUN_10064081c(0x40000000);
  uVar2 = FUN_10008cac4();
  if (param_2 == 1) {
    FUN_10063f664(uVar2);
  }
  FUN_10063f614(uVar2,lVar1);
  FUN_100642b14(param_1 + 0xb8,uVar2);
  if ((param_2 == 0) && (param_3 != 0)) {
    FUN_1004e313c(auStack_80);
    FUN_1004e38ac(auStack_80,"+%d");
    lVar1 = param_1 + 0x298;
    FUN_1006513c0(lVar1,auStack_80);
    if ((~*(uint *)(param_1 + 0x31c) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x31c) = *(uint *)(param_1 + 0x31c) | 0x7f80;
      FUN_1000200a0(lVar1);
    }
    if (*(float *)(param_1 + 0x2dc) != -60.0) {
      *(undefined4 *)(param_1 + 0x2dc) = 0xc2700000;
      FUN_1000200a0(lVar1);
    }
    FUN_100642324(lVar1);
    uVar2 = FUN_10064081c(0x3e2a7efa);
    FUN_100642b14(lVar1,uVar2);
    lVar3 = DAT_101dbd2f8;
    uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    puVar5 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_10063ee9c(puVar5);
    *(undefined ***)puVar5 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    FUN_100642b14(lVar1,puVar5);
    lVar3 = DAT_101dbd2f8;
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
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_10063f950(puVar5);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    local_88 = 0xc270000000000000;
    FUN_10063f984(puVar5,&local_88);
    FUN_10063f0e8(0x3f2a7efa,puVar5);
    FUN_100640840(0,0x3f2a7efa,0);
    uVar2 = FUN_10001f4d4();
    FUN_10063f2a4(uVar2,puVar5);
    FUN_100642b14(lVar1,uVar2);
    uVar2 = FUN_100047300();
    FUN_100642b14(lVar1,uVar2);
    lVar3 = FUN_10008e900();
    *(code **)(lVar3 + 0x10) = thunk_FUN_1003050b8;
    *(long *)(lVar3 + 0x20) = param_1;
    FUN_100642b14(lVar1,lVar3);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
  }
  return;
}




void thunk_FUN_100304f5c(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = param_1 + 0x1a8;
  FUN_100642324(lVar1);
  fVar6 = *(float *)(param_1 + 0x3c8);
  fVar7 = fVar6 * 0.7;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x1f0) == fVar6) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 500)) && !NAN(fVar7))) {
    bVar2 = *(float *)(param_1 + 500) == fVar7;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x1f0) = fVar6;
    *(float *)(param_1 + 500) = fVar7;
    FUN_1000200a0(lVar1);
  }
  uVar5 = *(uint *)(param_1 + 0x22c);
  if ((~uVar5 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x22c) = uVar5 | 0x7f80;
    FUN_1000200a0(lVar1);
    uVar5 = *(uint *)(param_1 + 0x22c);
  }
  *(uint *)(param_1 + 0x22c) = uVar5 | 4;
  if (*(float *)(param_1 + 0x1ec) != 0.0) {
    *(undefined4 *)(param_1 + 0x1ec) = 0;
    FUN_1000200a0(lVar1);
  }
  fVar6 = *(float *)(param_1 + 0x3c8) * 0.9;
  uVar3 = FUN_100640db8(*(float *)(param_1 + 0x3c8),fVar6,0x3eaa7efa,0);
  FUN_100652e60(lVar1);
  FUN_1006408f4(0,fVar6 * -0.5,0x3eaa7efa,0);
  FUN_100640840(0,0x3eaa7efa,0);
  uVar4 = FUN_10001f4d4();
  FUN_10063f2a4(uVar4,uVar3);
  FUN_100047300();
  uVar3 = FUN_10008cac4();
  FUN_10063f614(uVar3,uVar4);
  FUN_100642b14(lVar1,uVar3);
  return;
}




void thunk_FUN_1003050b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_ANIM_COMPLETE");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_100304f2c(long param_1)

{
  FUN_100642324(param_1 + 0x1a8);
  *(uint *)(param_1 + 0x22c) = *(uint *)(param_1 + 0x22c) & 0xfffffffb;
  return;
}




void FUN_100304f5c(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = param_1 + 0x1a8;
  FUN_100642324(lVar1);
  fVar6 = *(float *)(param_1 + 0x3c8);
  fVar7 = fVar6 * 0.7;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x1f0) == fVar6) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 500)) && !NAN(fVar7))) {
    bVar2 = *(float *)(param_1 + 500) == fVar7;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x1f0) = fVar6;
    *(float *)(param_1 + 500) = fVar7;
    FUN_1000200a0(lVar1);
  }
  uVar5 = *(uint *)(param_1 + 0x22c);
  if ((~uVar5 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x22c) = uVar5 | 0x7f80;
    FUN_1000200a0(lVar1);
    uVar5 = *(uint *)(param_1 + 0x22c);
  }
  *(uint *)(param_1 + 0x22c) = uVar5 | 4;
  if (*(float *)(param_1 + 0x1ec) != 0.0) {
    *(undefined4 *)(param_1 + 0x1ec) = 0;
    FUN_1000200a0(lVar1);
  }
  fVar6 = *(float *)(param_1 + 0x3c8) * 0.9;
  uVar3 = FUN_100640db8(*(float *)(param_1 + 0x3c8),fVar6,0x3eaa7efa,0);
  FUN_100652e60(lVar1);
  FUN_1006408f4(0,fVar6 * -0.5,0x3eaa7efa,0);
  FUN_100640840(0,0x3eaa7efa,0);
  uVar4 = FUN_10001f4d4();
  FUN_10063f2a4(uVar4,uVar3);
  FUN_100047300();
  uVar3 = FUN_10008cac4();
  FUN_10063f614(uVar3,uVar4);
  FUN_100642b14(lVar1,uVar3);
  return;
}




void FUN_1003050b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_ANIM_COMPLETE");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




long * FUN_100305108(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar7 = (undefined8 *)FUN_10064e20c();
  *puVar7 = &PTR_FUN_10148e6e8;
  puVar7 = puVar7 + 0x17;
  thunk_FUN_100652c08(puVar7);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x5b;
  thunk_FUN_1002eca3c(plVar2,param_2);
  plVar3 = param_1 + 0x1a4;
  thunk_FUN_100181304(plVar3,param_2);
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100653080(puVar7,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  uVar8 = FUN_1004e0150("GENERIC_BUTTON_CONTINUE",0);
  FUN_1002ecce4(plVar2,uVar8);
  uVar5 = DAT_101d91884;
  local_68 = DAT_101d91884;
  local_90 = FUN_100305370;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x5c,&local_90);
  FUN_10064e47c(0x44480000,0x43250000,plVar2);
  FUN_1002ecc7c(plVar2,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  uVar8 = FUN_1004e0150("GENERIC_BUTTON_CONTINUE",0);
  FUN_1001816d4(0x42000000,0x44160000,0x447a0000,plVar3,0,uVar8,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_10064e47c(0x44480000,0x43250000,plVar3);
  FUN_100651038(param_1 + 0x287,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  local_68 = uVar5;
  local_90 = FUN_100305370;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1a5,&local_90);
  FUN_1001b495c(0x3dcccccd,plVar3);
  FUN_100181bd0(0x3f800000,plVar3,&DAT_10115a164);
  bVar6 = (int)param_2 == 0;
  uVar9 = 4;
  uVar4 = 0;
  if (bVar6) {
    uVar4 = uVar9;
  }
  *(uint *)((long)param_1 + 0x35c) = *(uint *)((long)param_1 + 0x35c) & 0xfffffffb | uVar4;
  if (bVar6) {
    uVar9 = 0;
  }
  *(uint *)((long)param_1 + 0xda4) = *(uint *)((long)param_1 + 0xda4) & 0xfffffffb | uVar9;
  return param_1;
}




void FUN_100305370(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d23840,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




long * thunk_FUN_100305108(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar7 = (undefined8 *)FUN_10064e20c();
  *puVar7 = &PTR_FUN_10148e6e8;
  puVar7 = puVar7 + 0x17;
  thunk_FUN_100652c08(puVar7);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x5b;
  thunk_FUN_1002eca3c(plVar2,param_2);
  plVar3 = param_1 + 0x1a4;
  thunk_FUN_100181304(plVar3,param_2);
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100653080(puVar7,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  uVar8 = FUN_1004e0150("GENERIC_BUTTON_CONTINUE",0);
  FUN_1002ecce4(plVar2,uVar8);
  uVar5 = DAT_101d91884;
  uStack_68 = DAT_101d91884;
  pcStack_90 = FUN_100305370;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x5c,&pcStack_90);
  FUN_10064e47c(0x44480000,0x43250000,plVar2);
  FUN_1002ecc7c(plVar2,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  uVar8 = FUN_1004e0150("GENERIC_BUTTON_CONTINUE",0);
  FUN_1001816d4(0x42000000,0x44160000,0x447a0000,plVar3,0,uVar8,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_10064e47c(0x44480000,0x43250000,plVar3);
  FUN_100651038(param_1 + 0x287,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  uStack_68 = uVar5;
  pcStack_90 = FUN_100305370;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1a5,&pcStack_90);
  FUN_1001b495c(0x3dcccccd,plVar3);
  FUN_100181bd0(0x3f800000,plVar3,&DAT_10115a164);
  bVar6 = (int)param_2 == 0;
  uVar9 = 4;
  uVar4 = 0;
  if (bVar6) {
    uVar4 = uVar9;
  }
  *(uint *)((long)param_1 + 0x35c) = *(uint *)((long)param_1 + 0x35c) & 0xfffffffb | uVar4;
  if (bVar6) {
    uVar9 = 0;
  }
  *(uint *)((long)param_1 + 0xda4) = *(uint *)((long)param_1 + 0xda4) & 0xfffffffb | uVar9;
  return param_1;
}




void FUN_1003053bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100652cac(param_1 + 0xb8);
  FUN_1006513c0(param_1 + 0x1a8,param_4);
  return;
}




void FUN_1003053ec(undefined1 param_1 [16],float param_2,long *param_3)

{
  FUN_10064e47c(param_1,param_2 + 35.0,param_3 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x000100305424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x138))(param_3);
  return;
}




void FUN_100305428(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  lVar1 = param_1 + 0xb8;
  FUN_10064e784(0x3e2e147b,0x3f800000,0,0x3f800000,0,0,lVar1,param_1);
  fVar3 = (float)FUN_10064eb7c(lVar1,5,param_1,5);
  lVar2 = param_1 + 0x1a8;
  FUN_100651708(fVar3 + -160.0,lVar2,1);
  FUN_10064e5ec(0x42a00000,0x43c80000,lVar2,0,lVar1,1);
  lVar1 = param_1 + 0xd20;
  if ((*(uint *)(param_1 + 0x35c) & 4) != 0) {
    lVar1 = param_1 + 0x2d8;
  }
  FUN_10064e5ec(0,0xc2a00000,lVar1,6,param_1,6);
  FUN_10064e72c(0,lVar1,4,lVar2,4);
  return;
}




void FUN_100305514(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148e6e8;
  FUN_10003bd40(param_1 + 0x1a4);
  param_1[0x5b] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x17c);
  FUN_1002ebc50(param_1 + 0x5b);
  thunk_FUN_100651068(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1003055a0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148e6e8;
  FUN_10003bd40(param_1 + 0x1a4);
  param_1[0x5b] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x17c);
  FUN_1002ebc50(param_1 + 0x5b);
  thunk_FUN_100651068(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100305630(void)

{
  DAT_101e45b98 = 0xff;
  DAT_101e45b9a = 0xffff;
  DAT_101e45b9c = 0xffff;
  DAT_101e45b9e = 0xffbc9c44;
  DAT_101e45ba2 = 0xff1166f2;
  DAT_101e45ba6 = 0xffe0e0e0;
  DAT_101e45baa = 0xffa0a0a0;
  DAT_101e45bae = 0xff8c8c8c;
  DAT_101e45bb2 = 0xff322213;
  DAT_101e45bb6 = 0xff091911;
  DAT_101e45bba = 0xff170c19;
  DAT_101e45bbe = 0xff241a14;
  DAT_101e45bc2 = 0xff14171c;
  DAT_101e45bc6 = 0xff221911;
  DAT_101e45bca = 0xff1a1416;
  DAT_101e45bce = 0xff121414;
  DAT_101e45bd2 = 0xff1a1809;
  DAT_101e45bd6 = 0xff141414;
  DAT_101e45bda = 0xff141414;
  DAT_101e45bde = 0xff2929c0;
  DAT_101e45be2 = 0xff283082;
  DAT_101e45be6 = 0xff5262cc;
  DAT_101e45bea = 0xff283082;
  DAT_101e45bee = 0xff5262cc;
  DAT_101e45bf2 = 0xff745c42;
  DAT_101e45bf6 = 0xff184155;
  DAT_101e45bfa = 0xff92665e;
  DAT_101e45bfe = 0xffbc9c44;
  DAT_101e45c02 = 0xffbbae56;
  DAT_101e45c06 = 0xff8b7b01;
  DAT_101e45c0a = 0xff90b3ef;
  DAT_101e45c0e = 0xff728ebe;
  DAT_101e45c12 = 0xff19459d;
  DAT_101e45c16 = 0xff9d877b;
  DAT_101e45c1a = 0xffcbb1a3;
  DAT_101e45c1e = 0xff3f6fb5;
  DAT_101e45c22 = 0xffc5c5c5;
  DAT_101e45c26 = 0xff4fc1f1;
  DAT_101e45c2a = 0xff606060;
  DAT_101e45c2e = 0xffc5ff7b;
  DAT_101e45c32 = 0xff5271eb;
  DAT_101e45c36 = 0xfffae076;
  DAT_101e45c3a = 0xff3ac8f6;
  DAT_101e45c3e = 0xffaaaaaa;
  DAT_101e45c42 = 0xffe19400;
  DAT_101e45c46 = 0xffe19400;
  DAT_101e45c4a = 0xffe550b2;
  DAT_101e45c4e = 0xfff22ae8;
  DAT_101e45c52 = 0xff005ae1;
  DAT_101e45c56 = 0xff1addfa;
  DAT_101e45c5a = 0xff2424b3;
  DAT_101e45c5e = 0xff2424b3;
  DAT_101e45c62 = 0xff646464;
  DAT_101e45c66 = 0xff92665e;
  DAT_101e45c6a = 0xff646037;
  DAT_101e45c74 = 0xff1111a1;
  DAT_101e45c78 = 0xff321ee1;
  DAT_101e45c7c = 0xffc8c8c8;
  DAT_101e45c80 = 0xff321ee1;
  DAT_101e45c8c = 0xff6259b3;
  DAT_101e45c90 = 0xff506e73;
  DAT_101e45c94 = 0xff9dbf86;
  DAT_101e45c70 = 0xffffffff;
  DAT_101e45c98 = 0xffa35244;
  DAT_101e45c84 = 0xff7fe801;
  DAT_101e45c9c = 0xffca828e;
  DAT_101e45c88 = 0xffffffff;
  DAT_101e45ca0 = 0xffa6a6a6;
  DAT_101e45ca4 = 0xffa6a6a6;
  DAT_101e45ca8 = 0xffffffff;
  DAT_101e45cac = 0xff88ea2f;
  DAT_101e45cb0 = 0xff8c8c8c;
  DAT_101e45cb4 = 0xffffb400;
  DAT_101e45cb8 = 0xffff00ff;
  DAT_101e45cbc = 0xff00aded;
  DAT_101e45cc0 = 0xff33d3ff;
  DAT_101e45cc4 = 0xff7fe801;
  DAT_101e45cc8 = 0xff282828;
  DAT_101e45ccc = 0xfff0f0f0;
  DAT_101e45cd0 = 0xffa4781e;
  DAT_101e45cd4 = 0xffa6654b;
  DAT_101e45cd8 = 0xff93435b;
  DAT_101e45cdc = 0xff387f9c;
  DAT_101e45ce0 = 0xffa3781e;
  DAT_101e45ce4 = 0xffffd18a;
  DAT_101e45ce8 = 0xffff61f7;
  DAT_101e45cec = 0xff5de1f2;
  DAT_101e45cf0 = 0xff80eaff;
  DAT_101e45cf4 = 0xff32e00e;
  DAT_101e45cf8 = 0xff5a3c10;
  DAT_101e45cfc = 0xff330b03;
  DAT_101e45d00 = 0xff33031d;
  DAT_101e45d04 = 0xff032433;
  DAT_101e45d08 = 0xff9e8e8d;
  DAT_101d23840 = FUN_100644a94("UI::EVENT_CONTINUE_TUTORIAL_COMPLETE_POPUP");
  return;
}




void FUN_100305d08(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = param_1 + 0x48;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100651038(plVar1,param_2);
  FUN_1006513c0(plVar1,param_3);
  FUN_1006515e0(plVar1,1);
  plVar2 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar2 + 0x70))(plVar2,0x1e);
  (**(code **)(*plVar2 + 0x58))(plVar2,plVar1);
  (**(code **)(*plVar2 + 0x70))(plVar2,0x1e);
  FUN_10064e524(param_1,plVar2);
  return;
}




void FUN_100305db8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_38;
  
  lVar1 = param_1 + 0xb8;
  FUN_100651038(lVar1);
  FUN_1006513c0(lVar1,param_3);
  FUN_1006515e0(lVar1,0);
  local_38 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0xb8) + 0x28))(lVar1,&local_38);
  return;
}




void FUN_100305e2c(float param_1,float param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  float fVar3;
  undefined8 uVar4;
  
  lVar1 = param_3 + 0xb8;
  fVar3 = (float)FUN_1006511d0(lVar1);
  if (fVar3 <= param_1) {
    bVar2 = false;
    if ((*(float *)(param_3 + 0x100) == 1.0) && (bVar2 = false, !NAN(*(float *)(param_3 + 0x104))))
    {
      bVar2 = *(float *)(param_3 + 0x104) == 1.0;
    }
    if (bVar2) goto LAB_100305eb0;
    uVar4 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_3 + 0x100) = uVar4;
  }
  else {
    fVar3 = (float)FUN_1006511d0(lVar1);
    param_1 = param_1 / fVar3;
    bVar2 = false;
    if ((*(float *)(param_3 + 0x100) == param_1) &&
       (bVar2 = false, !NAN(*(float *)(param_3 + 0x104)) && !NAN(param_1))) {
      bVar2 = *(float *)(param_3 + 0x104) == param_1;
    }
    if (bVar2) goto LAB_100305eb0;
    *(float *)(param_3 + 0x100) = param_1;
    *(float *)(param_3 + 0x104) = param_1;
  }
  FUN_1000200a0(lVar1);
LAB_100305eb0:
  if (*(float *)(param_3 + 0xfc) != param_2 * 0.5) {
    *(float *)(param_3 + 0xfc) = param_2 * 0.5;
    FUN_1000200a0(lVar1);
    return;
  }
  return;
}




long FUN_100305eec(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10052fa40();
  *puVar1 = &PTR_FUN_10148eae0;
  FUN_10064e264(puVar1 + 0x48);
  thunk_FUN_100652c08(param_1 + 0x2f8);
  FUN_10064e20c(param_1 + 1000);
  *(undefined ***)(param_1 + 1000) = &PTR_FUN_10148e998;
  thunk_FUN_100650e64(param_1 + 0x4a0);
  (**(code **)(*(long *)(param_1 + 1000) + 0x78))(param_1 + 1000,param_1 + 0x4a0,1);
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  return param_1;
}




void FUN_100305f80(long param_1)

{
  FUN_10064e47c(param_1 + 0x240);
  return;
}




void FUN_100305f88(long param_1)

{
  FUN_10064e32c();
  FUN_10064e32c(param_1 + 0x240);
  return;
}




void FUN_100305fac(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  undefined *puVar7;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  plVar1 = param_1 + 0x48;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x5f;
  FUN_100642bd8(plVar1,plVar2,1);
  plVar3 = param_1 + 0x7d;
  FUN_100642bd8(plVar1,plVar3,1);
  plVar6 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar6 + 0x70))(plVar6,0xf);
  (**(code **)(*plVar6 + 0x68))(plVar6,plVar2,0,10);
  (**(code **)(*plVar6 + 0x70))(plVar6,0xf);
  (**(code **)(*plVar6 + 0x68))(plVar6,plVar3,1,10);
  (**(code **)(*plVar6 + 0x70))(plVar6,0x14);
  *(undefined1 *)(plVar6 + 1) = DAT_101872b98;
  FUN_10064e524(plVar1,plVar6);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x1c;
  iVar5 = FUN_100036694();
  puVar7 = PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if ((iVar5 == 0) &&
     (iVar5 = FUN_10002f32c(), puVar7 = PTR_s_build___MenuPartsCommon_tga_101854970, iVar5 == 0)) {
    puVar7 = (undefined *)0x0;
  }
  FUN_100652cac(plVar2,puVar7,param_2);
  FUN_100305db8(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,param_3);
  uVar4 = DAT_101d91884;
  local_58 = DAT_101d91884;
  local_80 = FUN_100306174;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 1,&local_80);
  local_58 = uVar4;
  local_80 = FUN_100306174;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 1,&local_80);
  return;
}




void FUN_100306174(void)

{
  undefined8 in_x3;
  
  FUN_100644b14(in_x3);
  return;
}




long FUN_10030617c(long param_1)

{
  return param_1 + 0x240;
}




void FUN_100306184(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0x10;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffffffef | uVar1;
  return;
}




long FUN_1003061a4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10052fa40();
  *puVar1 = &PTR_FUN_10148ec40;
  FUN_100305eec(puVar1 + 0x48);
  FUN_100305eec(param_1 + 0x810);
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  return param_1;
}




void FUN_1003061f4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x48,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x102,1);
  FUN_100305fac(param_1 + 0x48,param_2,param_3);
  FUN_100305fac(param_1 + 0x102,param_4,param_5);
  uVar2 = 0xc;
  uVar1 = 0;
  if (param_6 == 0) {
    uVar1 = uVar2;
  }
  *(uint *)((long)param_1 + 0x2c4) = *(uint *)((long)param_1 + 0x2c4) & 0xfffffff3 | uVar1;
  if (param_6 == 0) {
    uVar2 = 0;
  }
  *(uint *)((long)param_1 + 0x894) = *(uint *)((long)param_1 + 0x894) & 0xfffffff3 | uVar2;
                    /* WARNING: Could not recover jumptable at 0x0001003062c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_1003062cc(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0xc;
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = uVar2;
  }
  *(uint *)((long)param_1 + 0x2c4) = uVar1 | *(uint *)((long)param_1 + 0x2c4) & 0xfffffff3;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  *(uint *)((long)param_1 + 0x894) = uVar2 | *(uint *)((long)param_1 + 0x894) & 0xfffffff3;
                    /* WARNING: Could not recover jumptable at 0x000100306304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}




void FUN_100306308(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0x10;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x2c4) = *(uint *)(param_1 + 0x2c4) & 0xffffffef | uVar1;
  *(uint *)(param_1 + 0x894) = *(uint *)(param_1 + 0x894) & 0xffffffef | uVar1;
  return;
}




void FUN_100306338(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10064e47c(param_3 + 0x240);
  FUN_10064e47c(param_1,param_2,param_3 + 0x810);
  return;
}




void FUN_100306378(long param_1)

{
  FUN_10064e32c();
  FUN_10064e32c(param_1 + 0x240);
  FUN_10064e32c(param_1 + 0x480);
  FUN_10064e32c(param_1 + 0x810);
  FUN_10064e32c(param_1 + 0xa50);
  return;
}




long FUN_1003063b4(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_100650568();
  *puVar2 = &PTR_thunk_FUN_10064e2bc_10148eda0;
  puVar2[0x17] = &PTR_FUN_10148ef00;
  FUN_100650608(puVar2,&DAT_10115a168);
  uVar1 = *(uint *)(param_1 + 0x84);
  if ((uVar1 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x2600;
    FUN_1000200a0(param_1);
  }
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  return param_1;
}




long * FUN_100306430(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_thunk_FUN_1003064f4_10148ef48;
  puVar2 = puVar2 + 0x17;
  uVar1 = FUN_10002f32c();
  thunk_FUN_1001bd4e0(puVar2,uVar1 ^ 1);
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = (long)(param_1 + 0xae);
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = (long)(param_1 + 0xb1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_1001bdb04(0x3f800000,puVar2,&DAT_10115a168);
  FUN_1001bdb78(0x3f800000,puVar2,&DAT_10115a164);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  uVar3 = thunk_FUN_10064de70();
  FUN_10064e524(param_1,uVar3);
  return param_1;
}




long * thunk_FUN_100306430(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_thunk_FUN_1003064f4_10148ef48;
  puVar2 = puVar2 + 0x17;
  uVar1 = FUN_10002f32c();
  thunk_FUN_1001bd4e0(puVar2,uVar1 ^ 1);
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = (long)(param_1 + 0xae);
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = (long)(param_1 + 0xb1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_1001bdb04(0x3f800000,puVar2,&DAT_10115a168);
  FUN_1001bdb78(0x3f800000,puVar2,&DAT_10115a164);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  uVar3 = thunk_FUN_10064de70();
  FUN_10064e524(param_1,uVar3);
  return param_1;
}




void FUN_1003064f4(undefined8 *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_thunk_FUN_1003064f4_10148ef48;
  plVar5 = (long *)param_1[0xad];
  while (plVar5 != param_1 + 0xae) {
    if ((long *)plVar5[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[5] + 8))();
      plVar5[5] = 0;
    }
    plVar2 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar2 = plVar5 + 2;
      bVar1 = *(long **)*plVar2 != plVar5;
      plVar5 = (long *)*plVar2;
      if (bVar1) {
        do {
          lVar4 = *plVar2;
          plVar2 = (long *)(lVar4 + 0x10);
          plVar5 = (long *)*plVar2;
        } while (*plVar5 != lVar4);
      }
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  FUN_1003071dc(param_1 + 0xad,param_1[0xae]);
  param_1[0xad] = param_1 + 0xae;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  plVar5 = param_1 + 0xb1;
  plVar2 = (long *)param_1[0xb0];
  while (plVar2 != plVar5) {
    if ((long *)plVar2[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar2[5] + 8))();
      plVar2[5] = 0;
    }
    plVar3 = (long *)plVar2[1];
    if ((long *)plVar2[1] == (long *)0x0) {
      plVar3 = plVar2 + 2;
      bVar1 = *(long **)*plVar3 != plVar2;
      plVar2 = (long *)*plVar3;
      if (bVar1) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar2 = (long *)*plVar3;
        } while (*plVar2 != lVar4);
      }
    }
    else {
      do {
        plVar2 = plVar3;
        plVar3 = (long *)*plVar2;
      } while ((long *)*plVar2 != (long *)0x0);
    }
  }
  FUN_10030719c(param_1 + 0xb0,param_1[0xb1]);
  param_1[0xb0] = plVar5;
  param_1[0xb2] = 0;
  *plVar5 = 0;
  FUN_10030719c(param_1 + 0xb0,0);
  FUN_1003071dc(param_1 + 0xad,param_1[0xae]);
  param_1[0x17] = &PTR_FUN_101464e50;
  param_1[0x82] = &PTR_FUN_1014a6db0;
  param_1[0x99] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x9c);
  FUN_10064e2bc(param_1 + 0x82);
  param_1[0x58] = &PTR_FUN_1014a6db0;
  param_1[0x6f] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x72);
  FUN_10064e2bc(param_1 + 0x58);
  param_1[0x2e] = &PTR_FUN_1014a6db0;
  param_1[0x45] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x48);
  FUN_10064e2bc(param_1 + 0x2e);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1003064f4(undefined8 *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_thunk_FUN_1003064f4_10148ef48;
  plVar5 = (long *)param_1[0xad];
  while (plVar5 != param_1 + 0xae) {
    if ((long *)plVar5[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[5] + 8))();
      plVar5[5] = 0;
    }
    plVar2 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar2 = plVar5 + 2;
      bVar1 = *(long **)*plVar2 != plVar5;
      plVar5 = (long *)*plVar2;
      if (bVar1) {
        do {
          lVar4 = *plVar2;
          plVar2 = (long *)(lVar4 + 0x10);
          plVar5 = (long *)*plVar2;
        } while (*plVar5 != lVar4);
      }
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  FUN_1003071dc(param_1 + 0xad,param_1[0xae]);
  param_1[0xad] = param_1 + 0xae;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  plVar5 = param_1 + 0xb1;
  plVar2 = (long *)param_1[0xb0];
  while (plVar2 != plVar5) {
    if ((long *)plVar2[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar2[5] + 8))();
      plVar2[5] = 0;
    }
    plVar3 = (long *)plVar2[1];
    if ((long *)plVar2[1] == (long *)0x0) {
      plVar3 = plVar2 + 2;
      bVar1 = *(long **)*plVar3 != plVar2;
      plVar2 = (long *)*plVar3;
      if (bVar1) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar2 = (long *)*plVar3;
        } while (*plVar2 != lVar4);
      }
    }
    else {
      do {
        plVar2 = plVar3;
        plVar3 = (long *)*plVar2;
      } while ((long *)*plVar2 != (long *)0x0);
    }
  }
  FUN_10030719c(param_1 + 0xb0,param_1[0xb1]);
  param_1[0xb0] = plVar5;
  param_1[0xb2] = 0;
  *plVar5 = 0;
  FUN_10030719c(param_1 + 0xb0,0);
  FUN_1003071dc(param_1 + 0xad,param_1[0xae]);
  param_1[0x17] = &PTR_FUN_101464e50;
  param_1[0x82] = &PTR_FUN_1014a6db0;
  param_1[0x99] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x9c);
  FUN_10064e2bc(param_1 + 0x82);
  param_1[0x58] = &PTR_FUN_1014a6db0;
  param_1[0x6f] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x72);
  FUN_10064e2bc(param_1 + 0x58);
  param_1[0x2e] = &PTR_FUN_1014a6db0;
  param_1[0x45] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x48);
  FUN_10064e2bc(param_1 + 0x2e);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1003066f4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1003064f4();
  operator_delete(pvVar1);
  return;
}




void FUN_100306708(float param_1,float param_2,long param_3)

{
  bool bVar1;
  
  FUN_10064e4a0(param_3 + 0xb8,CONCAT44((int)param_2,(int)param_1));
  param_2 = param_2 * 0.5;
  bVar1 = false;
  if ((*(float *)(param_3 + 0xf8) == param_1 * 0.5) &&
     (bVar1 = false, !NAN(*(float *)(param_3 + 0xfc)) && !NAN(param_2))) {
    bVar1 = *(float *)(param_3 + 0xfc) == param_2;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0xf8) = param_1 * 0.5;
    *(float *)(param_3 + 0xfc) = param_2;
    FUN_1000200a0(param_3 + 0xb8);
    return;
  }
  return;
}




void FUN_100306784(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  FUN_10064e32c();
  plVar4 = *(long **)(param_1 + 0x568);
  while (plVar4 != (long *)(param_1 + 0x570)) {
    if ((long *)plVar4[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar4[5] + 0x90))();
    }
    plVar2 = (long *)plVar4[1];
    if ((long *)plVar4[1] == (long *)0x0) {
      plVar2 = plVar4 + 2;
      bVar1 = *(long **)*plVar2 != plVar4;
      plVar4 = (long *)*plVar2;
      if (bVar1) {
        do {
          lVar3 = *plVar2;
          plVar2 = (long *)(lVar3 + 0x10);
          plVar4 = (long *)*plVar2;
        } while (*plVar4 != lVar3);
      }
    }
    else {
      do {
        plVar4 = plVar2;
        plVar2 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}




void * FUN_100306818(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  long *plVar2;
  undefined4 local_50 [2];
  void *local_48;
  
  pvVar1 = operator_new(0x5d0);
  FUN_100305eec();
  local_50[0] = param_2;
  local_48 = pvVar1;
  FUN_10030721c(param_1 + 0xad,param_1[0xad],local_50,local_50);
  (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  plVar2 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar2 + 0x68))(plVar2,pvVar1,1,2);
  FUN_100305fac(pvVar1,param_3,param_4);
  return pvVar1;
}




void * FUN_1003068d0(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  void *pvVar1;
  long *plVar2;
  undefined4 local_60 [2];
  void *local_58;
  
  pvVar1 = operator_new(0xde0);
  FUN_1003061a4();
  local_60[0] = param_2;
  local_58 = pvVar1;
  FUN_10030721c(param_1 + 0xad,param_1[0xad],local_60,local_60);
  (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  plVar2 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar2 + 0x68))(plVar2,pvVar1,1,2);
  FUN_1003061f4(pvVar1,param_3,param_4,param_5,param_6,param_7);
  return pvVar1;
}




void * FUN_1003069a8(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 local_50 [2];
  void *local_48;
  
  pvVar1 = operator_new(0x370);
  puVar2 = (undefined8 *)FUN_10052fa40();
  *puVar2 = &PTR_FUN_10148e838;
  thunk_FUN_100650e64(puVar2 + 0x48);
  *(uint *)((long)pvVar1 + 0x84) = *(uint *)((long)pvVar1 + 0x84) & 0xffffffef;
  local_50[0] = param_2;
  local_48 = pvVar1;
  FUN_10030721c(param_1 + 0xad,param_1[0xad],local_50,local_50);
  (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  plVar3 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar3 + 0x68))(plVar3,pvVar1,1,2);
  FUN_100305d08(pvVar1,param_3,param_4);
  (**(code **)(*param_1 + 0x90))(param_1);
  return pvVar1;
}




void * FUN_100306a90(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
  void *pvVar1;
  long *plVar2;
  undefined4 local_50 [2];
  void *local_48;
  
  pvVar1 = operator_new(0xd8);
  FUN_1003063b4();
  FUN_10064e47c(param_1,param_2);
  FUN_10064e4dc(pvVar1,CONCAT44((int)(float)param_2,(int)(float)param_1));
  local_50[0] = param_4;
  local_48 = pvVar1;
  FUN_10030749c(param_3 + 0xb0,param_3[0xb0],local_50,local_50);
  (**(code **)(*param_3 + 0x78))(param_3,pvVar1,1);
  plVar2 = (long *)FUN_10064e5a0(param_3);
  (**(code **)(*plVar2 + 0x58))(plVar2,pvVar1);
  return pvVar1;
}




undefined8 FUN_100306b50(long param_1,uint param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x570);
  if (lVar3 != 0) {
    lVar2 = param_1 + 0x570;
    do {
      bVar1 = *(uint *)(lVar3 + 0x20) < param_2;
      if (!bVar1) {
        lVar2 = lVar3;
      }
      lVar3 = *(long *)(lVar3 + (ulong)bVar1 * 8);
    } while (lVar3 != 0);
    if ((lVar2 != param_1 + 0x570) && (*(uint *)(lVar2 + 0x20) <= param_2)) {
      return *(undefined8 *)(lVar2 + 0x28);
    }
  }
  return 0;
}




ulong FUN_100306b9c(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long **)(param_1 + 0x568) == (long *)(param_1 + 0x570) || param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    plVar2 = *(long **)(param_1 + 0x568);
    do {
      *(int *)(param_2 + uVar1 * 4) = (int)plVar2[4];
      plVar3 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        plVar3 = plVar2 + 2;
        plVar4 = (long *)*plVar3;
        if ((long *)*plVar4 != plVar2) {
          do {
            lVar5 = *plVar3;
            plVar3 = (long *)(lVar5 + 0x10);
            plVar4 = (long *)*plVar3;
          } while (*plVar4 != lVar5);
        }
      }
      else {
        do {
          plVar4 = plVar3;
          plVar3 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      uVar1 = uVar1 + 1;
      plVar2 = plVar4;
    } while (plVar4 != (long *)(param_1 + 0x570) && uVar1 < param_3);
  }
  return uVar1;
}




void FUN_100306c28(long param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = param_1 + 0x570;
  lVar5 = *(long *)(param_1 + 0x570);
  lVar6 = lVar3;
  if (lVar5 != 0) {
    do {
      bVar1 = *(uint *)(lVar5 + 0x20) < param_2;
      if (!bVar1) {
        lVar6 = lVar5;
      }
      lVar5 = *(long *)(lVar5 + (ulong)bVar1 * 8);
    } while (lVar5 != 0);
    if ((lVar6 != lVar3) && (*(uint *)(lVar6 + 0x20) <= param_2)) goto LAB_100306c78;
  }
  lVar6 = lVar3;
LAB_100306c78:
  lVar3 = FUN_10064e5a0(param_1);
  if (lVar3 != 0) {
    uVar4 = FUN_10064e5a0(param_1);
    FUN_10064c704(uVar4,*(undefined8 *)(lVar6 + 0x28));
  }
  iVar2 = FUN_100642d08(*(undefined8 *)(lVar6 + 0x28));
  if (iVar2 != 0) {
    FUN_1006423ec(*(undefined8 *)(lVar6 + 0x28),1);
  }
  if (*(long **)(lVar6 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(lVar6 + 0x28) + 8))();
  }
  *(undefined8 *)(lVar6 + 0x28) = 0;
  FUN_10030771c(param_1 + 0x568,lVar6);
  return;
}




void FUN_100306cd8(long param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x588);
  if (lVar4 != 0) {
    lVar5 = param_1 + 0x588;
    do {
      bVar1 = *(uint *)(lVar4 + 0x20) < param_2;
      if (!bVar1) {
        lVar5 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + (ulong)bVar1 * 8);
    } while (lVar4 != 0);
    if ((lVar5 != param_1 + 0x588) && (*(uint *)(lVar5 + 0x20) <= param_2)) {
      lVar4 = FUN_10064e5a0(param_1);
      if (lVar4 != 0) {
        uVar3 = FUN_10064e5a0(param_1);
        FUN_10064c704(uVar3,*(undefined8 *)(lVar5 + 0x28));
      }
      iVar2 = FUN_100642d08(*(undefined8 *)(lVar5 + 0x28));
      if (iVar2 != 0) {
        FUN_1006423ec(*(undefined8 *)(lVar5 + 0x28),1);
      }
      if (*(long **)(lVar5 + 0x28) != (long *)0x0) {
        (**(code **)(**(long **)(lVar5 + 0x28) + 8))();
      }
      *(undefined8 *)(lVar5 + 0x28) = 0;
      FUN_1003077b0(param_1 + 0x580,lVar5);
      return;
    }
  }
  return;
}




void FUN_100306d90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148e998;
  thunk_FUN_100651068(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100306dc0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148e998;
  thunk_FUN_100651068(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100306df4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148eae0;
  param_1[0x7d] = &PTR_FUN_10148e998;
  thunk_FUN_100651068(param_1 + 0x94);
  FUN_10064e2bc(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_1014a7108;
  param_1[0x76] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x79);
  FUN_10064e2bc(param_1 + 0x5f);
  thunk_FUN_10064e2bc(param_1 + 0x48);
  FUN_10052ffb4(param_1);
  return;
}




void FUN_100306e74(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148eae0;
  param_1[0x7d] = &PTR_FUN_10148e998;
  thunk_FUN_100651068(param_1 + 0x94);
  FUN_10064e2bc(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_1014a7108;
  param_1[0x76] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x79);
  FUN_10064e2bc(param_1 + 0x5f);
  thunk_FUN_10064e2bc(param_1 + 0x48);
  pvVar1 = (void *)FUN_10052ffb4(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100306ef8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148ec40;
  param_1[0x102] = &PTR_FUN_10148eae0;
  param_1[0x17f] = &PTR_FUN_10148e998;
  thunk_FUN_100651068(param_1 + 0x196);
  FUN_10064e2bc(param_1 + 0x17f);
  param_1[0x161] = &PTR_FUN_1014a7108;
  param_1[0x178] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x17b);
  FUN_10064e2bc(param_1 + 0x161);
  thunk_FUN_10064e2bc(param_1 + 0x14a);
  FUN_10052ffb4(param_1 + 0x102);
  param_1[0x48] = &PTR_FUN_10148eae0;
  param_1[0xc5] = &PTR_FUN_10148e998;
  thunk_FUN_100651068(param_1 + 0xdc);
  FUN_10064e2bc(param_1 + 0xc5);
  param_1[0xa7] = &PTR_FUN_1014a7108;
  param_1[0xbe] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc1);
  FUN_10064e2bc(param_1 + 0xa7);
  thunk_FUN_10064e2bc(param_1 + 0x90);
  FUN_10052ffb4(param_1 + 0x48);
  FUN_10052ffb4(param_1);
  return;
}




void FUN_100306ff4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148ec40;
  param_1[0x102] = &PTR_FUN_10148eae0;
  param_1[0x17f] = &PTR_FUN_10148e998;
  thunk_FUN_100651068(param_1 + 0x196);
  FUN_10064e2bc(param_1 + 0x17f);
  param_1[0x161] = &PTR_FUN_1014a7108;
  param_1[0x178] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x17b);
  FUN_10064e2bc(param_1 + 0x161);
  thunk_FUN_10064e2bc(param_1 + 0x14a);
  FUN_10052ffb4(param_1 + 0x102);
  param_1[0x48] = &PTR_FUN_10148eae0;
  param_1[0xc5] = &PTR_FUN_10148e998;
  thunk_FUN_100651068(param_1 + 0xdc);
  FUN_10064e2bc(param_1 + 0xc5);
  param_1[0xa7] = &PTR_FUN_1014a7108;
  param_1[0xbe] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc1);
  FUN_10064e2bc(param_1 + 0xa7);
  thunk_FUN_10064e2bc(param_1 + 0x90);
  FUN_10052ffb4(param_1 + 0x48);
  pvVar1 = (void *)FUN_10052ffb4(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1003070f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148e838;
  thunk_FUN_100651068(param_1 + 0x48);
  FUN_10052ffb4(param_1);
  return;
}




void FUN_100307128(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148e838;
  thunk_FUN_100651068(param_1 + 0x48);
  pvVar1 = (void *)FUN_10052ffb4(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100307160(void)

{
  return;
}




void FUN_100307168(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




void FUN_10030717c(long param_1)

{
  FUN_10064e2bc(param_1 + -0xb8);
  return;
}




void FUN_100307184(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc(param_1 + -0xb8);
  operator_delete(pvVar1);
  return;
}




void FUN_10030719c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10030719c(param_1,*param_2);
    FUN_10030719c(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_1003071dc(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1003071dc(param_1,*param_2);
    FUN_1003071dc(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




undefined1  [16]
FUN_10030721c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  puVar2 = (undefined8 *)FUN_1003072a0(param_1,param_2,&local_38,auStack_40,param_3);
  pvVar3 = (void *)*puVar2;
  bVar1 = pvVar3 == (void *)0x0;
  if (bVar1) {
    pvVar3 = operator_new(0x30);
    uVar4 = *param_4;
    *(undefined8 *)((long)pvVar3 + 0x28) = param_4[1];
    *(undefined8 *)((long)pvVar3 + 0x20) = uVar4;
    FUN_1003073e0(param_1,local_38,puVar2,pvVar3);
  }
  auVar5[8] = bVar1;
  auVar5._0_8_ = pvVar3;
  auVar5._9_7_ = 0;
  return auVar5;
}




long * FUN_1003072a0(undefined8 *param_1,long *param_2,long *param_3,long *param_4,uint *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1 + 1 != param_2) {
    uVar1 = *param_5;
    if (*(uint *)(param_2 + 4) <= uVar1) {
      if (uVar1 <= *(uint *)(param_2 + 4)) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar3 = (long *)param_2[1];
      if ((long *)param_2[1] == (long *)0x0) {
        plVar3 = param_2 + 2;
        plVar4 = (long *)*plVar3;
        if ((long *)*plVar4 != param_2) {
          do {
            lVar5 = *plVar3;
            plVar3 = (long *)(lVar5 + 0x10);
            plVar4 = (long *)*plVar3;
          } while (*plVar4 != lVar5);
        }
      }
      else {
        do {
          plVar4 = plVar3;
          plVar3 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if ((plVar4 == param_1 + 1) || (uVar1 < *(uint *)(plVar4 + 4))) {
        if (param_2[1] != 0) {
          *param_3 = (long)plVar4;
          return plVar4;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      goto LAB_1003073c4;
    }
  }
  plVar4 = (long *)*param_2;
  plVar3 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar2 = plVar4;
    if (plVar4 == (long *)0x0) {
      plVar3 = param_2 + 2;
      if (*(long **)*plVar3 == param_2) {
        do {
          lVar5 = *plVar3;
          plVar3 = (long *)(lVar5 + 0x10);
        } while (*(long *)*plVar3 == lVar5);
      }
      plVar3 = (long *)*plVar3;
    }
    else {
      do {
        plVar3 = plVar2;
        plVar2 = (long *)plVar3[1];
      } while ((long *)plVar3[1] != (long *)0x0);
    }
    if (*param_5 <= *(uint *)(plVar3 + 4)) {
LAB_1003073c4:
      plVar3 = (long *)FUN_100307434(param_1,param_3,param_5);
      return plVar3;
    }
  }
  if (plVar4 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar3;
    param_2 = plVar3 + 1;
  }
  return param_2;
}




void FUN_1003073e0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




long * FUN_100307434(long param_1,long *param_2,uint *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 8);
  if ((long *)*plVar1 == (long *)0x0) {
    *param_2 = (long)plVar1;
    return plVar1;
  }
  plVar2 = (long *)(param_1 + 8);
  plVar1 = (long *)*plVar1;
  do {
    while (plVar3 = plVar1, *param_3 < *(uint *)(plVar3 + 4)) {
      plVar2 = plVar3;
      plVar1 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) {
        *param_2 = (long)plVar3;
        return plVar3;
      }
    }
    if (*param_3 <= *(uint *)(plVar3 + 4)) break;
    plVar2 = plVar3 + 1;
    plVar1 = (long *)*plVar2;
  } while ((long *)*plVar2 != (long *)0x0);
  *param_2 = (long)plVar3;
  return plVar2;
}




undefined1  [16]
FUN_10030749c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  puVar2 = (undefined8 *)FUN_100307520(param_1,param_2,&local_38,auStack_40,param_3);
  pvVar3 = (void *)*puVar2;
  bVar1 = pvVar3 == (void *)0x0;
  if (bVar1) {
    pvVar3 = operator_new(0x30);
    uVar4 = *param_4;
    *(undefined8 *)((long)pvVar3 + 0x28) = param_4[1];
    *(undefined8 *)((long)pvVar3 + 0x20) = uVar4;
    FUN_100307660(param_1,local_38,puVar2,pvVar3);
  }
  auVar5[8] = bVar1;
  auVar5._0_8_ = pvVar3;
  auVar5._9_7_ = 0;
  return auVar5;
}




long * FUN_100307520(undefined8 *param_1,long *param_2,long *param_3,long *param_4,uint *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1 + 1 != param_2) {
    uVar1 = *param_5;
    if (*(uint *)(param_2 + 4) <= uVar1) {
      if (uVar1 <= *(uint *)(param_2 + 4)) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar3 = (long *)param_2[1];
      if ((long *)param_2[1] == (long *)0x0) {
        plVar3 = param_2 + 2;
        plVar4 = (long *)*plVar3;
        if ((long *)*plVar4 != param_2) {
          do {
            lVar5 = *plVar3;
            plVar3 = (long *)(lVar5 + 0x10);
            plVar4 = (long *)*plVar3;
          } while (*plVar4 != lVar5);
        }
      }
      else {
        do {
          plVar4 = plVar3;
          plVar3 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if ((plVar4 == param_1 + 1) || (uVar1 < *(uint *)(plVar4 + 4))) {
        if (param_2[1] != 0) {
          *param_3 = (long)plVar4;
          return plVar4;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      goto LAB_100307644;
    }
  }
  plVar4 = (long *)*param_2;
  plVar3 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar2 = plVar4;
    if (plVar4 == (long *)0x0) {
      plVar3 = param_2 + 2;
      if (*(long **)*plVar3 == param_2) {
        do {
          lVar5 = *plVar3;
          plVar3 = (long *)(lVar5 + 0x10);
        } while (*(long *)*plVar3 == lVar5);
      }
      plVar3 = (long *)*plVar3;
    }
    else {
      do {
        plVar3 = plVar2;
        plVar2 = (long *)plVar3[1];
      } while ((long *)plVar3[1] != (long *)0x0);
    }
    if (*param_5 <= *(uint *)(plVar3 + 4)) {
LAB_100307644:
      plVar3 = (long *)FUN_1003076b4(param_1,param_3,param_5);
      return plVar3;
    }
  }
  if (plVar4 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar3;
    param_2 = plVar3 + 1;
  }
  return param_2;
}




void FUN_100307660(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




long * FUN_1003076b4(long param_1,long *param_2,uint *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 8);
  if ((long *)*plVar1 == (long *)0x0) {
    *param_2 = (long)plVar1;
    return plVar1;
  }
  plVar2 = (long *)(param_1 + 8);
  plVar1 = (long *)*plVar1;
  do {
    while (plVar3 = plVar1, *param_3 < *(uint *)(plVar3 + 4)) {
      plVar2 = plVar3;
      plVar1 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) {
        *param_2 = (long)plVar3;
        return plVar3;
      }
    }
    if (*param_3 <= *(uint *)(plVar3 + 4)) break;
    plVar2 = plVar3 + 1;
    plVar1 = (long *)*plVar2;
  } while ((long *)*plVar2 != (long *)0x0);
  *param_2 = (long)plVar3;
  return plVar2;
}




long * FUN_10030771c(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_10012bc9c(param_1[1],param_2);
  operator_delete(param_2);
  return plVar3;
}




long * FUN_1003077b0(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_10012bc9c(param_1[1],param_2);
  operator_delete(param_2);
  return plVar3;
}




long * FUN_100307844(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *local_50;
  code *pcStack_48;
  
  puVar5 = (undefined8 *)FUN_100655644();
  *puVar5 = &PTR_thunk_FUN_100307cd4_10148f090;
  puVar5 = puVar5 + 0x2b;
  thunk_FUN_100655644(puVar5);
  plVar1 = param_1 + 0x56;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x74;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x92;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0xb0;
  thunk_FUN_100650e64(plVar4);
  pcStack_48 = thunk_FUN_1003079ac;
  local_50 = param_1;
  FUN_100643618(0x3e4ccccd,&local_50,0,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100655930(puVar5,plVar1,1);
  FUN_100655930(puVar5,plVar2,1);
  FUN_100655930(puVar5,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_ping_3bar");
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_ping_2bar");
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_ping_1bar");
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_1003079ac(param_1);
  return param_1;
}




void FUN_1003079ac(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 local_84;
  undefined1 auStack_80 [8];
  void *local_78;
  
  iVar5 = FUN_1001491e0();
  if (iVar5 == 0) {
    uVar3 = *(uint *)(param_1 + 0x334);
    *(uint *)(param_1 + 0x334) = uVar3 & 0xfffffffb;
    uVar6 = *(uint *)(param_1 + 0x424) & 0xfffffffb;
    *(uint *)(param_1 + 0x424) = uVar6;
    *(uint *)(param_1 + 0x514) = *(uint *)(param_1 + 0x514) & 0xfffffffb;
    *(uint *)(param_1 + 0x604) = *(uint *)(param_1 + 0x604) & 0xfffffffb;
    if ((uVar3 & 0x7f80) != 0x3f80) {
      *(uint *)(param_1 + 0x334) = uVar3 & 0xffff807b | 0x3f80;
      FUN_1000200a0(param_1 + 0x2b0);
      uVar6 = *(uint *)(param_1 + 0x424);
    }
    if ((uVar6 & 0x7f80) != 0x3f80) {
      *(uint *)(param_1 + 0x424) = uVar6 & 0xffff807f | 0x3f80;
      FUN_1000200a0(param_1 + 0x3a0);
    }
    if ((*(uint *)(param_1 + 0x514) & 0x7f80) != 0x3f80) {
      *(uint *)(param_1 + 0x514) = *(uint *)(param_1 + 0x514) & 0xffff807f | 0x3f80;
      FUN_1000200a0(param_1 + 0x490);
      return;
    }
  }
  else {
    uVar8 = FUN_1001491f4(0x41200000);
    fVar9 = (float)NEON_fminnm(uVar8,0x44fa0000);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    FUN_1004e313c(auStack_80);
    FUN_1004e38ac(auStack_80,"%d ms");
    lVar1 = param_1 + 0x580;
    FUN_1006513c0(lVar1,auStack_80);
    *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) | 4;
    *(uint *)(param_1 + 0x424) = *(uint *)(param_1 + 0x424) | 4;
    *(uint *)(param_1 + 0x514) = *(uint *)(param_1 + 0x514) | 4;
    *(uint *)(param_1 + 0x604) = *(uint *)(param_1 + 0x604) | 4;
    if (250.0 <= fVar9) {
      if (500.0 <= fVar9) {
        local_84 = 0xff0000ff;
        uVar6 = 1;
      }
      else {
        local_84 = 0xff00ffff;
        uVar6 = 2;
      }
    }
    else {
      local_84 = 0xffffffff;
      uVar6 = 3;
    }
    if (2000.0 <= fVar9) {
      FUN_1006513c0(lVar1,&DAT_101d91650);
      uVar6 = 0;
      local_84 = 0xffffffff;
    }
    FUN_100652dd4(param_1 + 0x2b0,&DAT_10115a168,2);
    if ((*(uint *)(param_1 + 0x334) & 0x7f80) != 0x3f80) {
      *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) & 0xffff807f | 0x3f80;
      FUN_1000200a0(param_1 + 0x2b0);
    }
    puVar2 = &DAT_10115a168;
    if (uVar6 < 2) {
      puVar2 = &local_84;
    }
    uVar7 = 0xe5;
    uVar3 = 0x7f;
    if (uVar6 < 2) {
      uVar3 = uVar7;
    }
    FUN_100652dd4(param_1 + 0x3a0,puVar2,2);
    uVar4 = *(uint *)(param_1 + 0x424);
    if (uVar3 != (uVar4 >> 7 & 0xff)) {
      *(uint *)(param_1 + 0x424) = uVar4 & 0xffff8000 | uVar4 & 0x7f | uVar3 << 7;
      FUN_1000200a0(param_1 + 0x3a0);
    }
    puVar2 = &local_84;
    if (uVar6 != 0) {
      uVar7 = 0x7f;
      puVar2 = &DAT_10115a168;
    }
    FUN_100652dd4(param_1 + 0x490,puVar2,2);
    uVar6 = *(uint *)(param_1 + 0x514);
    if (uVar7 != (uVar6 >> 7 & 0xff)) {
      *(uint *)(param_1 + 0x514) = uVar6 & 0xffff8000 | uVar6 & 0x7f | uVar7 << 7;
      FUN_1000200a0(param_1 + 0x490);
    }
    FUN_100651460(lVar1,&local_84);
    uVar6 = *(uint *)(param_1 + 0x604);
    if (uVar3 != (uVar6 >> 7 & 0xff)) {
      *(uint *)(param_1 + 0x604) = uVar6 & 0xffff8000 | uVar6 & 0x7f | uVar3 << 7;
      FUN_1000200a0(lVar1);
    }
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
  }
  return;
}




long * thunk_FUN_100307844(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plStack_50;
  code *pcStack_48;
  
  puVar5 = (undefined8 *)FUN_100655644();
  *puVar5 = &PTR_thunk_FUN_100307cd4_10148f090;
  puVar5 = puVar5 + 0x2b;
  thunk_FUN_100655644(puVar5);
  plVar1 = param_1 + 0x56;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x74;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x92;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0xb0;
  thunk_FUN_100650e64(plVar4);
  pcStack_48 = thunk_FUN_1003079ac;
  plStack_50 = param_1;
  FUN_100643618(0x3e4ccccd,&plStack_50,0,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100655930(puVar5,plVar1,1);
  FUN_100655930(puVar5,plVar2,1);
  FUN_100655930(puVar5,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_ping_3bar");
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_ping_2bar");
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_ping_1bar");
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_1003079ac(param_1);
  return param_1;
}




void FUN_100307cd4(undefined8 *param_1)

{
  undefined8 *local_40;
  code *pcStack_38;
  
  *param_1 = &PTR_thunk_FUN_100307cd4_10148f090;
  pcStack_38 = thunk_FUN_1003079ac;
  local_40 = param_1;
  FUN_100643a8c(&local_40);
  thunk_FUN_100651068(param_1 + 0xb0);
  param_1[0x92] = &PTR_FUN_1014a7108;
  param_1[0xa9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xac);
  FUN_10064e2bc(param_1 + 0x92);
  param_1[0x74] = &PTR_FUN_1014a7108;
  param_1[0x8b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8e);
  FUN_10064e2bc(param_1 + 0x74);
  param_1[0x56] = &PTR_FUN_1014a7108;
  param_1[0x6d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x70);
  FUN_10064e2bc(param_1 + 0x56);
  param_1[0x2b] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x2b);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100307cd4(undefined8 *param_1)

{
  undefined8 *puStack_40;
  code *pcStack_38;
  
  *param_1 = &PTR_thunk_FUN_100307cd4_10148f090;
  pcStack_38 = thunk_FUN_1003079ac;
  puStack_40 = param_1;
  FUN_100643a8c(&puStack_40);
  thunk_FUN_100651068(param_1 + 0xb0);
  param_1[0x92] = &PTR_FUN_1014a7108;
  param_1[0xa9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xac);
  FUN_10064e2bc(param_1 + 0x92);
  param_1[0x74] = &PTR_FUN_1014a7108;
  param_1[0x8b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8e);
  FUN_10064e2bc(param_1 + 0x74);
  param_1[0x56] = &PTR_FUN_1014a7108;
  param_1[0x6d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x70);
  FUN_10064e2bc(param_1 + 0x56);
  param_1[0x2b] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x2b);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100307dc8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100307cd4();
  operator_delete(pvVar1);
  return;
}




void FUN_100307ddc(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  void *local_38;
  
  FUN_10064e5ec(0,0x41700000,param_1 + 0x3a0,4,param_1 + 0x2b0,4);
  FUN_10064e5ec(0,0x41800000,param_1 + 0x490,4,param_1 + 0x3a0,4);
  lVar1 = param_1 + 0x158;
  FUN_1006557ec(lVar1);
  if (((DAT_101e45d20 & 1) == 0) && (iVar3 = ___cxa_guard_acquire(&DAT_101e45d20), iVar3 != 0)) {
    uVar4 = FUN_100655b6c(param_1 + 0x650);
    thunk_FUN_1004e439c(&DAT_101e45d10,uVar4);
    ___cxa_atexit(FUN_100046198,&DAT_101e45d10,0x100000000);
    ___cxa_guard_release(&DAT_101e45d20);
  }
  lVar2 = param_1 + 0x580;
  FUN_1004e3120(auStack_40,"9999 ms");
  FUN_1006513c0(lVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_10064e72c(0x41200000,lVar2,3,lVar1,1);
  FUN_10064e72c(0,lVar2,5,lVar1,5);
  FUN_1006557ec(param_1);
  FUN_1006513c0(lVar2,&DAT_101e45d10);
  return;
}




void thunk_FUN_1003079ac(void)

{
  FUN_1003079ac();
  return;
}




void FUN_100307f2c(uint *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_100307f8c();
  if ((iVar1 != 0) && (*param_1 != 0)) {
    lVar2 = *(long *)(param_1 + 2);
    do {
      if (*(code **)(lVar2 + 8) == (code *)0x0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
      }
      else {
        (**(code **)(lVar2 + 8))();
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
  }
  return;
}




byte FUN_100307f8c(void)

{
  uint *puVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  
  puVar1 = (uint *)FUN_100308268();
  if (*puVar1 == 0) {
LAB_100307fd4:
    bVar2 = 0;
  }
  else {
    bVar2 = 0;
    plVar3 = *(long **)(puVar1 + 2);
    lVar4 = (ulong)*puVar1 << 3;
    do {
      if (*(int *)(*plVar3 + 8) == 0) goto LAB_100307fd4;
      bVar2 = *(int *)(*plVar3 + 8) == 2 | bVar2;
      plVar3 = plVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return bVar2;
}




undefined8 * thunk_FUN_100308268(void)

{
  return &DAT_101e45d30;
}




undefined8 FUN_100307fe8(void)

{
  return DAT_101d23850;
}




void FUN_100307ff4(void)

{
  undefined8 *puVar1;
  
  FUN_1003080d0();
  puVar1 = operator_new(0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_100307f2c();
  DAT_101d23850 = puVar1;
  return;
}




void FUN_10030802c(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_101d23850;
  if (DAT_101d23850 != (void *)0x0) {
    if (*(void **)((long)DAT_101d23850 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)DAT_101d23850 + 8));
    }
    operator_delete(pvVar1);
  }
  DAT_101d23850 = (void *)0x0;
  FUN_100308200();
  return;
}




undefined8 * FUN_100308068(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




void FUN_100308098(void)

{
  return;
}




void FUN_10030809c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003080a0);
  (*pcVar1)();
}




void FUN_1003080a0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003080a4);
  (*pcVar1)();
}




void FUN_1003080a4(long param_1,int param_2)

{
  long lVar1;
  
  *(int *)(param_1 + 8) = param_2;
  if ((param_2 != 0) && (lVar1 = FUN_100307fe8(), lVar1 != 0)) {
    FUN_100307fe8();
    FUN_100307f2c();
    return;
  }
  return;
}




void FUN_1003080d0(void)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_38;
  
  if ((uint)DAT_101e45d30 != 0) {
    uVar3 = 0;
    uVar2 = (uint)DAT_101e45d30;
    do {
      plVar1 = *(long **)(DAT_101e45d38 + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = (uint)DAT_101e45d30;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (DAT_101e45d38 != 0) {
    DAT_101e45d30._0_4_ = 0;
  }
  operator_new(0x48);
  local_38 = thunk_FUN_1001d84b4();
  FUN_100308180(&DAT_101e45d30,&local_38);
  operator_new(0x48);
  local_38 = thunk_FUN_10017b46c();
  FUN_100308180(&DAT_101e45d30,&local_38);
  return;
}




void FUN_100308180(uint *param_1,undefined8 *param_2)

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
    FUN_100308274(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100308200(void)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  if ((uint)DAT_101e45d30 != 0) {
    uVar3 = 0;
    uVar2 = (uint)DAT_101e45d30;
    do {
      plVar1 = *(long **)(DAT_101e45d38 + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = (uint)DAT_101e45d30;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (DAT_101e45d38 != 0) {
    DAT_101e45d30._0_4_ = 0;
  }
  return;
}




undefined8 * FUN_100308268(void)

{
  return &DAT_101e45d30;
}




void FUN_100308274(uint *param_1,uint param_2)

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




void FUN_1003082f0(void)

{
  DAT_101e45d28 = 0xff;
  DAT_101e45d2a = 0xffff;
  DAT_101e45d2c = 0xffff;
  DAT_101e45d30 = 0;
  DAT_101e45d38 = 0;
  ___cxa_atexit(FUN_100308068,&DAT_101e45d30,0x100000000);
  return;
}




void FUN_100308330(undefined8 param_1)

{
  if (DAT_101e45d40 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100308348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101e45d40 + 0x10))(DAT_101e45d40,param_1);
    return;
  }
  return;
}




void FUN_100308350(undefined8 param_1)

{
  if (DAT_101e45d40 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100308368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101e45d40 + 0x18))(DAT_101e45d40,param_1);
    return;
  }
  return;
}




void FUN_100308370(undefined8 param_1)

{
  if (DAT_101e45d40 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100308388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101e45d40 + 0x20))(DAT_101e45d40,param_1);
    return;
  }
  return;
}




void FUN_100308390(undefined8 param_1)

{
  if (DAT_101e45d40 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003083a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101e45d40 + 0x28))(DAT_101e45d40,param_1);
    return;
  }
  return;
}




void FUN_1003083b0(undefined8 param_1)

{
  if (DAT_101e45d40 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003083c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101e45d40 + 0x30))(DAT_101e45d40,param_1);
    return;
  }
  return;
}




void FUN_1003083d0(undefined8 param_1)

{
  if (DAT_101e45d40 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003083e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101e45d40 + 0x40))(DAT_101e45d40,param_1);
    return;
  }
  return;
}




void FUN_1003083f0(undefined8 param_1)

{
  if (DAT_101e45d40 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100308408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101e45d40 + 0x38))(DAT_101e45d40,param_1);
    return;
  }
  return;
}




void FUN_100308410(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148f210;
  return;
}




void FUN_100308420(void)

{
  return;
}




void FUN_100308424(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100308428);
  (*pcVar1)();
}




void FUN_100308428(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10030842c);
  (*pcVar1)();
}




void FUN_10030842c(undefined8 param_1)

{
  DAT_101e45d40 = param_1;
  return;
}




void FUN_100308438(void)

{
  DAT_101e45d40 = 0;
  return;
}




undefined8 * FUN_100308444(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1003084c0_10148f268;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x11) = 0xff01;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0xffff;
  *(undefined4 *)(param_1 + 0x12) = 0xffff;
  DAT_101e45d40 = param_1;
  FUN_10012123c();
  return param_1;
}




undefined8 * FUN_1003084c0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1003084c0_10148f268;
  DAT_101e45d40 = 0;
  FUN_100308d80(param_1 + 0xb);
  if ((void *)param_1[10] != (void *)0x0) {
    operator_delete__((void *)param_1[10]);
    param_1[9] = 0;
    param_1[10] = 0;
  }
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    param_1[7] = 0;
    param_1[8] = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}




void thunk_FUN_1003084c0(void)

{
  FUN_1003084c0();
  return;
}




void FUN_10030854c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1003084c0();
  operator_delete(pvVar1);
  return;
}




void FUN_100308560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100121024(param_2,param_3);
  return;
}




void FUN_10030856c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100121130(param_2,param_3);
  return;
}




void FUN_100308578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100121024(param_2,param_3);
  return;
}




void FUN_100308584(long param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  FUN_1003085ac(param_1 + 0x58,&local_18);
  return;
}




bool FUN_1003085ac(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  uVar4 = FUN_1004d2524(uVar8);
  uVar5 = FUN_100015208(uVar8,uVar4,0x12345678);
  uVar1 = *param_1;
  if (uVar1 == 0) {
LAB_10030864c:
    bVar3 = false;
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar5 / uVar1;
    }
    uVar7 = (ulong)(uVar5 - uVar2 * uVar1);
    lVar6 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar6 + uVar7 * 8) != uVar5) {
      do {
        if (*(int *)(lVar6 + uVar7 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar7) {
          uVar2 = (uint)uVar7;
        }
        uVar7 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar6 + uVar7 * 8) != uVar5);
      if ((int)uVar7 == -1) goto LAB_10030864c;
    }
    bVar3 = *(int *)(lVar6 + uVar7 * 8 + 4) != -1;
  }
  return bVar3;
}




uint FUN_10030865c(long *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if ((int)param_2 == 0xffff) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_1004eef10();
    if (iVar1 != 0) {
      uVar3 = FUN_100345b94();
      uVar3 = FUN_100345ba0(uVar3,param_2);
      uVar4 = (**(code **)(*param_1 + 0x48))(param_1,uVar3);
      if ((uVar4 & 1) == 0) {
        uVar2 = FUN_1004eef10();
        return uVar2 ^ 1;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_1003086d8(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 local_34;
  
  *(undefined4 *)(param_1 + 0x8c) = param_2;
  if ((*(int *)(param_1 + 0x90) == 0xffff) &&
     (local_34 = param_2, puVar2 = (undefined8 *)FUN_10034be60(&local_34),
     puVar2 != (undefined8 *)0x0)) {
    plVar3 = (long *)FUN_10032bb84();
    plVar3 = (long *)*plVar3;
    puVar4 = (undefined8 *)*plVar3;
    while (puVar4 != (undefined8 *)0x0) {
      plVar3 = plVar3 + 1;
      iVar1 = _strcmp((char *)puVar4[2],(char *)*puVar2);
      if (iVar1 == 0) {
        FUN_1001207a4(local_34,*puVar4);
        return;
      }
      puVar4 = (undefined8 *)*plVar3;
    }
  }
  return;
}




void FUN_10030876c(undefined8 param_1,undefined8 param_2)

{
  FUN_100120d10(param_2);
  return;
}




void FUN_100308778(undefined8 param_1,undefined8 param_2)

{
  FUN_100120f20(param_2);
  return;
}




void FUN_100308780(undefined8 param_1,undefined8 param_2)

{
  FUN_1001208e0(param_2);
  return;
}




void FUN_100308788(undefined8 param_1,undefined8 param_2)

{
  FUN_1001209f8(param_2);
  return;
}




void FUN_100308790(undefined8 param_1,undefined8 param_2)

{
  FUN_100120b00(param_2);
  return;
}




void FUN_100308798(undefined8 param_1,undefined8 param_2)

{
  FUN_10012069c(param_2);
  return;
}




void FUN_1003087a4(long param_1)

{
  FUN_100120384();
  FUN_1003087c8(param_1 + 0x58);
  return;
}




void FUN_1003087c8(uint *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      if (*(int *)(*(long *)(param_1 + 2) + lVar3) != -1) {
        FUN_100308e04(param_1);
        uVar1 = (ulong)*param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar1);
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




undefined1 FUN_10030884c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x88);
}




undefined1 FUN_100308854(long param_1)

{
  return *(undefined1 *)(param_1 + 0x89);
}




undefined4 FUN_10030885c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x8c);
}




undefined4 FUN_100308864(long param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}




void FUN_10030886c(long param_1,void *param_2)

{
  int iVar1;
  void *local_40 [2];
  char local_29;
  void *local_28;
  
  param_1 = param_1 + 0x58;
  local_40[0] = param_2;
  iVar1 = FUN_1003085ac(param_1,local_40);
  if (iVar1 == 0) {
    local_28 = param_2;
    FUN_10001549c(local_40,param_2);
    FUN_1003088ec(param_1,&local_28,local_40);
    if (local_29 < '\0') {
      operator_delete(local_40[0]);
    }
  }
  else {
    local_40[0] = param_2;
    FUN_100308e68(param_1,local_40);
  }
  return;
}




void FUN_1003088ec(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 local_40;
  void *local_38;
  
  uVar13 = *param_2;
  uVar5 = FUN_1004d2524(uVar13);
  uVar6 = FUN_100015208(uVar13,uVar5,0x12345678);
  uVar7 = param_1[4];
  param_1[4] = uVar7 + 1;
  uVar9 = *param_1;
  if (uVar9 >> 1 < uVar7 + 1) {
    local_40 = 0;
    local_38 = (void *)0x0;
    FUN_10002690c(&local_40,(uVar9 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar7 = *param_1;
    uVar9 = (uint)local_40;
    uVar11 = uVar7 - 1;
    if ((int)uVar11 < 0) {
      pvVar8 = *(void **)(param_1 + 2);
    }
    else {
      pvVar8 = *(void **)(param_1 + 2);
      do {
        uVar7 = *(uint *)((long)pvVar8 + (ulong)uVar11 * 8 + 4);
        if (uVar7 != 0xffffffff) {
          uVar3 = *(uint *)((long)pvVar8 + (ulong)uVar11 * 8);
          uVar4 = 0;
          if ((uint)local_40 != 0) {
            uVar4 = uVar3 / (uint)local_40;
          }
          uVar12 = (ulong)(uVar3 - uVar4 * (uint)local_40);
          iVar2 = *(int *)((long)local_38 + uVar12 * 8 + 4);
          while (iVar2 != -1) {
            uVar4 = (uint)local_40;
            if (0 < (int)(uint)uVar12) {
              uVar4 = (uint)uVar12;
            }
            uVar12 = (ulong)(uVar4 - 1);
            iVar2 = *(int *)((long)local_38 + uVar12 * 8 + 4);
          }
          puVar1 = (uint *)((long)local_38 + uVar12 * 8);
          *puVar1 = uVar3;
          puVar1[1] = uVar7;
        }
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
      uVar7 = *param_1;
    }
    uVar11 = param_1[1];
    *param_1 = (uint)local_40;
    param_1[1] = local_40._4_4_;
    local_40 = CONCAT44(uVar11,uVar7);
    *(void **)(param_1 + 2) = local_38;
    local_38 = pvVar8;
    if (pvVar8 != (void *)0x0) {
      operator_delete__(pvVar8);
      uVar9 = *param_1;
    }
  }
  uVar7 = 0;
  if (uVar9 != 0) {
    uVar7 = uVar6 / uVar9;
  }
  uVar12 = (ulong)(uVar6 - uVar7 * uVar9);
  lVar10 = *(long *)(param_1 + 2);
  iVar2 = *(int *)(lVar10 + uVar12 * 8 + 4);
  while (iVar2 != -1) {
    uVar7 = uVar9;
    if (0 < (int)(uint)uVar12) {
      uVar7 = (uint)uVar12;
    }
    uVar12 = (ulong)(uVar7 - 1);
    iVar2 = *(int *)(lVar10 + uVar12 * 8 + 4);
  }
  puVar1 = (uint *)(lVar10 + uVar12 * 8);
  *puVar1 = uVar6;
  uVar7 = FUN_100308f1c(param_1,param_3);
  puVar1[1] = uVar7;
  return;
}




void FUN_100308a80(long param_1)

{
  FUN_1003087c8(param_1 + 0x58);
  return;
}




void FUN_100308a88(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = 0;
  while ((*(char *)(param_2 + lVar2 + 8) == '\0' ||
         (iVar1 = FUN_10034ea2c(*(undefined2 *)(param_2 + lVar2 + 0x13)), iVar1 == 0))) {
    lVar2 = lVar2 + 0xa1;
    if (lVar2 == 0xa10) {
LAB_100308af0:
      if (*(int *)(param_1 + 8) != 0) {
        puVar3 = *(undefined8 **)(param_1 + 0x10);
        do {
          if ((code *)*puVar3 == (code *)0x0) {
            (*(code *)puVar3[3])(puVar3[2],param_2);
          }
          else {
            (*(code *)*puVar3)(param_2);
          }
          puVar3 = puVar3 + 4;
        } while (puVar3 != (undefined8 *)
                           (*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 8) * 0x20));
      }
      return;
    }
  }
  lVar2 = param_2 + lVar2;
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(lVar2 + 0x10);
  *(undefined1 *)(param_1 + 0x89) = *(undefined1 *)(lVar2 + 9);
  if (*(char *)(lVar2 + 0xb) != '\0') {
    *(uint *)(param_1 + 0x90) = (uint)*(ushort *)(lVar2 + 0x11);
  }
  goto LAB_100308af0;
}




void FUN_100308b44(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = 0;
  while ((*(char *)(param_2 + lVar2 + 8) == '\0' ||
         (iVar1 = FUN_10034ea2c(*(undefined2 *)(param_2 + lVar2 + 0x13)), iVar1 == 0))) {
    lVar2 = lVar2 + 0xa1;
    if (lVar2 == 0xa10) {
LAB_100308bac:
      if (*(int *)(param_1 + 0x28) != 0) {
        puVar3 = *(undefined8 **)(param_1 + 0x30);
        do {
          if ((code *)*puVar3 == (code *)0x0) {
            (*(code *)puVar3[3])(puVar3[2],param_2);
          }
          else {
            (*(code *)*puVar3)(param_2);
          }
          puVar3 = puVar3 + 4;
        } while (puVar3 != (undefined8 *)
                           (*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x28) * 0x20));
      }
      return;
    }
  }
  lVar2 = param_2 + lVar2;
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(lVar2 + 0x10);
  *(undefined1 *)(param_1 + 0x89) = *(undefined1 *)(lVar2 + 9);
  if (*(char *)(lVar2 + 0xb) != '\0') {
    *(uint *)(param_1 + 0x90) = (uint)*(ushort *)(lVar2 + 0x11);
  }
  goto LAB_100308bac;
}




void FUN_100308c00(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = 0;
  while ((*(char *)(param_2 + lVar2 + 0x108) == '\0' ||
         (iVar1 = FUN_10034ea2c(*(undefined2 *)(param_2 + lVar2 + 0x113)), iVar1 == 0))) {
    lVar2 = lVar2 + 0xa6;
    if (lVar2 == 0x67c) {
LAB_100308c5c:
      if (*(int *)(param_1 + 0x18) != 0) {
        puVar3 = *(undefined8 **)(param_1 + 0x20);
        do {
          if ((code *)*puVar3 == (code *)0x0) {
            (*(code *)puVar3[3])(puVar3[2],param_2);
          }
          else {
            (*(code *)*puVar3)(param_2);
          }
          puVar3 = puVar3 + 4;
        } while (puVar3 != (undefined8 *)
                           (*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20));
      }
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + lVar2 + 0x110);
  *(undefined1 *)(param_1 + 0x89) = *(undefined1 *)(param_2 + lVar2 + 0x109);
  goto LAB_100308c5c;
}




void FUN_100308cb0(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x50) + (ulong)*(uint *)(param_1 + 0x48) * 0x20);
  }
  return;
}




void FUN_100308d08(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x40);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)
                       (*(long *)(param_1 + 0x40) + (ulong)*(uint *)(param_1 + 0x38) * 0x20));
  }
  return;
}




void FUN_100308d74(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




uint * FUN_100308d80(uint *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      if (*(int *)(*(long *)(param_1 + 2) + lVar3) != -1) {
        FUN_100308e04(param_1);
        uVar1 = (ulong)*param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar1);
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




void FUN_100308e04(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + (ulong)param_2 * 0x18 + 0x17) < '\0') {
    operator_delete(*(void **)(lVar1 + (ulong)param_2 * 0x18));
  }
  *(undefined4 *)(lVar1 + (ulong)param_2 * 0x18) = *(undefined4 *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = param_2;
  return;
}




long FUN_100308e68(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar3 = FUN_1004d2524(uVar7);
  uVar4 = FUN_100015208(uVar7,uVar3,0x12345678);
  uVar1 = *param_1;
  if (uVar1 == 0) {
LAB_100308f00:
    uVar6 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar4 / uVar1;
    }
    uVar6 = (ulong)(uVar4 - uVar2 * uVar1);
    lVar5 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar5 + uVar6 * 8) != uVar4) {
      do {
        if (*(int *)(lVar5 + uVar6 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar6) {
          uVar2 = (uint)uVar6;
        }
        uVar6 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar5 + uVar6 * 8) != uVar4);
      if ((int)uVar6 == -1) goto LAB_100308f00;
    }
    uVar6 = (ulong)*(uint *)(lVar5 + uVar6 * 8 + 4);
  }
  return *(long *)(param_1 + 8) + uVar6 * 0x18;
}




ulong FUN_100308f1c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_60 [24];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_100309044(param_1 + 0x18,auStack_60);
    uVar2 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar6 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar6 + uVar2 * 0x18);
  }
  if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
    uVar3 = param_2[1];
    if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_100308d74();
    }
    param_2 = (undefined8 *)*param_2;
  }
  else {
    uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  puVar4 = (undefined8 *)(lVar6 + uVar2 * 0x18);
  if (uVar3 < 0x17) {
    *(char *)(lVar6 + uVar2 * 0x18 + 0x17) = (char)uVar3;
    puVar1 = puVar4;
    if (uVar3 == 0) goto LAB_100309004;
  }
  else {
    uVar5 = uVar3 + 0x10 & 0xfffffffffffffff0;
    puVar1 = operator_new(uVar5);
    *puVar4 = puVar1;
    lVar6 = lVar6 + uVar2 * 0x18;
    *(ulong *)(lVar6 + 8) = uVar3;
    *(ulong *)(lVar6 + 0x10) = uVar5 | 0x8000000000000000;
  }
  _memcpy(puVar1,param_2,uVar3);
  puVar4 = puVar1;
LAB_100309004:
  *(undefined1 *)((long)puVar4 + uVar3) = 0;
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}




void FUN_100309044(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
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
    FUN_1003090d0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x18;
  uVar6 = param_2[1];
  uVar5 = *param_2;
  *(undefined8 *)(lVar4 + -8) = param_2[2];
  *(undefined8 *)(lVar4 + -0x10) = uVar6;
  *(undefined8 *)(lVar4 + -0x18) = uVar5;
  return;
}




void FUN_1003090d0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x18);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0x18;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar7 = puVar5[1];
        uVar6 = *puVar5;
        puVar4[2] = puVar5[2];
        puVar4[1] = uVar7;
        *puVar4 = uVar6;
        puVar5 = puVar5 + 3;
        lVar3 = lVar3 + -0x18;
        puVar4 = puVar4 + 3;
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




void FUN_10030915c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148f2c8;
  param_1[1] = &PTR_FUN_10148f308;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 200;
  return;
}




undefined8 * FUN_10030918c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148f2c8;
  param_1[1] = &PTR_FUN_10148f308;
  FUN_100309218(param_1 + 0xb,0);
  FUN_100309218(param_1 + 0xb,1);
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




void FUN_100309218(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 2);
  if (lVar4 != 0) {
    uVar3 = *param_1;
    if (uVar3 != 0) {
      lVar5 = 0;
      do {
        lVar1 = lVar4 + lVar5;
        FUN_10010c800(lVar1 + 0x68,*(undefined8 *)(lVar1 + 0x70));
        if (*(char *)(lVar1 + 0x67) < '\0') {
          operator_delete(*(void **)(lVar1 + 0x50));
        }
        if (*(char *)(lVar1 + 0x4f) < '\0') {
          operator_delete(*(void **)(lVar4 + lVar5 + 0x38));
        }
        lVar1 = lVar4 + lVar5;
        if (*(char *)(lVar1 + 0x37) < '\0') {
          operator_delete(*(void **)(lVar1 + 0x20));
        }
        if (*(void **)(lVar1 + 0x18) != (void *)0x0) {
          operator_delete__(*(void **)(lVar1 + 0x18));
          *(undefined8 *)(lVar4 + lVar5 + 0x10) = 0;
          *(undefined8 *)(lVar4 + lVar5 + 0x18) = 0;
        }
        puVar2 = (undefined8 *)(lVar4 + lVar5);
        if ((void *)puVar2[1] != (void *)0x0) {
          operator_delete__((void *)puVar2[1]);
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        lVar5 = lVar5 + 0x88;
      } while ((ulong)uVar3 * 0x88 - lVar5 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




undefined8 * thunk_FUN_10030918c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148f2c8;
  param_1[1] = &PTR_FUN_10148f308;
  FUN_100309218(param_1 + 0xb,0);
  FUN_100309218(param_1 + 0xb,1);
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




void FUN_100309300(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10030918c();
  operator_delete(pvVar1);
  return;
}




void FUN_1003095f0(long param_1)

{
  uint uVar1;
  
  FUN_100309e54(param_1 + 0x58);
  uVar1 = *(uint *)(param_1 + 0x58) - *(uint *)(param_1 + 0x68);
  if (*(uint *)(param_1 + 0x58) < *(uint *)(param_1 + 0x68) || (int)uVar1 < 1) {
    return;
  }
  FUN_100309f3c(param_1 + 0x58,*(long *)(param_1 + 0x60),
                *(long *)(param_1 + 0x60) + (ulong)uVar1 * 0x88);
  return;
}




void FUN_100309648(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  size_t sVar1;
  string sVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  void *pvVar10;
  string *psVar11;
  string *psVar12;
  undefined8 *puVar13;
  void *local_1a8 [2];
  char local_191;
  void *local_190;
  undefined8 uStack_188;
  long local_180;
  void *pvStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined1 local_160;
  string local_158;
  undefined7 uStack_157;
  size_t local_150;
  byte local_141;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  lVar7 = FUN_10015d3ec();
  FUN_10001549c(&local_158,param_3);
  bVar4 = local_141;
  bVar3 = *(byte *)(lVar7 + 0x551f);
  uVar9 = (ulong)bVar3;
  sVar1 = *(size_t *)(lVar7 + 0x5510);
  if (-1 < (char)bVar3) {
    sVar1 = uVar9;
  }
  if (-1 < (char)local_141) {
    local_150 = (ulong)local_141;
  }
  if (sVar1 == local_150) {
    pvVar10 = *(void **)(lVar7 + 0x5508);
    puVar13 = pvVar10;
    if (-1 < (char)bVar3) {
      puVar13 = (undefined8 *)(lVar7 + 0x5508);
    }
    psVar12 = (string *)CONCAT71(uStack_157,local_158);
    if (-1 < (char)local_141) {
      psVar12 = &local_158;
    }
    if ((char)bVar3 < '\0') {
      if (sVar1 != 0) {
        iVar6 = _memcmp(puVar13,psVar12,sVar1);
        bVar5 = iVar6 == 0;
        goto joined_r0x000100309740;
      }
    }
    else if (sVar1 != 0) {
      if ((uint)(byte)*psVar12 == ((uint)pvVar10 & 0xff)) {
        psVar11 = (string *)(lVar7 + 0x5509);
        do {
          uVar9 = uVar9 - 1;
          psVar12 = psVar12 + 1;
          bVar5 = uVar9 == 0;
          if (uVar9 == 0) break;
          sVar2 = *psVar11;
          psVar11 = psVar11 + 1;
        } while (sVar2 == *psVar12);
        goto joined_r0x000100309740;
      }
      goto LAB_10030973c;
    }
    bVar5 = true;
  }
  else {
LAB_10030973c:
    bVar5 = false;
  }
joined_r0x000100309740:
  if ((char)bVar4 < '\0') {
    operator_delete((void *)CONCAT71(uStack_157,local_158));
  }
  if (bVar5) {
    puVar13 = *(undefined8 **)(param_2 + 8);
    if (-1 < *(char *)(param_2 + 0x1f)) {
      puVar13 = (undefined8 *)(param_2 + 8);
    }
    FUN_10010a52c(puVar13,200);
  }
  uVar8 = thunk_FUN_100528b64();
  FUN_10001549c(&local_158,uVar8);
  lVar7 = FUN_1000be6e4(param_5,&local_158);
  if ((char)local_141 < '\0') {
    operator_delete((void *)CONCAT71(uStack_157,local_158));
  }
  if (param_5 + 8 != lVar7) {
    pvStack_178 = (void *)0x0;
    local_180 = 0;
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    local_190 = (void *)0x0;
    uVar8 = FUN_10052b19c(lVar7 + 0x38);
    FUN_10001549c(&local_158,uVar8);
    std::string::operator=((string *)&local_190,&local_158);
    if ((char)local_141 < '\0') {
      operator_delete((void *)CONCAT71(uStack_157,local_158));
    }
    local_158 = (string)0x0;
    lVar7 = FUN_1004f1a74(0);
    FUN_1004d3350((double)lVar7,&local_158,0x100);
    FUN_10001549c(local_1a8,&local_158);
    std::string::operator=((string *)&pvStack_178,(string *)local_1a8);
    if (local_191 < '\0') {
      operator_delete(local_1a8[0]);
    }
    local_160 = 1;
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar13 = *(undefined8 **)(param_1 + 0x28);
      do {
        if ((code *)*puVar13 == (code *)0x0) {
          (*(code *)puVar13[3])(puVar13[2],&local_190);
        }
        else {
          (*(code *)*puVar13)(&local_190);
        }
        puVar13 = puVar13 + 4;
      } while (puVar13 !=
               (undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x20) * 0x20));
    }
    if (lStack_168 < 0) {
      operator_delete(pvStack_178);
    }
    if (local_180 < 0) {
      operator_delete(local_190);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1003098f4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long in_x5;
  undefined8 *puVar3;
  void *local_188 [2];
  char local_171;
  void *local_170;
  undefined8 uStack_168;
  long local_160;
  void *pvStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 local_13f;
  string local_138;
  undefined7 uStack_137;
  char local_121;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = thunk_FUN_100528b64();
  FUN_10001549c(&local_138,uVar1);
  lVar2 = FUN_1000be6e4(in_x5,&local_138);
  if (local_121 < '\0') {
    operator_delete((void *)CONCAT71(uStack_137,local_138));
  }
  if (in_x5 + 8 != lVar2) {
    pvStack_158 = (void *)0x0;
    local_160 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    local_170 = (void *)0x0;
    uVar1 = FUN_10052b19c(lVar2 + 0x38);
    FUN_10001549c(&local_138,uVar1);
    std::string::operator=((string *)&local_170,&local_138);
    if (local_121 < '\0') {
      operator_delete((void *)CONCAT71(uStack_137,local_138));
    }
    local_138 = (string)0x0;
    lVar2 = FUN_1004f1a74(0);
    FUN_1004d3350((double)lVar2,&local_138,0x100);
    FUN_10001549c(local_188,&local_138);
    std::string::operator=((string *)&pvStack_158,(string *)local_188);
    if (local_171 < '\0') {
      operator_delete(local_188[0]);
    }
    local_13f = 1;
    if (*(int *)(param_1 + 0x30) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x38);
      do {
        if ((code *)*puVar3 == (code *)0x0) {
          (*(code *)puVar3[3])(puVar3[2],&local_170);
        }
        else {
          (*(code *)*puVar3)(&local_170);
        }
        puVar3 = puVar3 + 4;
      } while (puVar3 != (undefined8 *)
                         (*(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x30) * 0x20));
    }
    if (lStack_148 < 0) {
      operator_delete(pvStack_158);
    }
    if (local_160 < 0) {
      operator_delete(local_170);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100309e4c(long param_1)

{
  FUN_100309c64(param_1 + -8);
  return;
}




void FUN_100309e54(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar1 = 0;
    if (uVar4 != 0xffffffff) {
      uVar1 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar1 = uVar4 << 1;
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10030a2bc(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x88;
  thunk_FUN_1004e439c(lVar5 + -0x88,param_2);
  thunk_FUN_1004e439c(lVar5 + -0x78,param_2 + 0x10);
  FUN_10003330c(lVar5 + -0x68,param_2 + 0x20);
  FUN_10003330c(lVar5 + -0x50,param_2 + 0x38);
  FUN_10003330c(lVar5 + -0x38,param_2 + 0x50);
  *(undefined8 *)(lVar5 + -0x18) = 0;
  *(undefined8 *)(lVar5 + -0x20) = (undefined8 *)(lVar5 + -0x18);
  *(undefined8 *)(lVar5 + -0x10) = 0;
  FUN_10030a21c((undefined8 *)(lVar5 + -0x20),*(undefined8 *)(param_2 + 0x68),param_2 + 0x70);
  uVar3 = *(undefined2 *)(param_2 + 0x80);
  *(undefined1 *)(lVar5 + -6) = *(undefined1 *)(param_2 + 0x82);
  *(undefined2 *)(lVar5 + -8) = uVar3;
  return;
}




void FUN_100309f3c(uint *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined2 uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  iVar5 = (int)((ulong)(param_3 - param_2) >> 3);
  uVar6 = (ulong)*param_1;
  if (*param_1 == iVar5 * -0xf0f0f0f) {
    FUN_100309218(param_1,1);
    return;
  }
  lVar7 = *(long *)(param_1 + 2);
  lVar10 = lVar7 + uVar6 * 0x88;
  lVar4 = lVar10 - param_3;
  if (lVar4 != 0) {
    lVar7 = 0;
    do {
      lVar1 = param_2 + lVar7;
      lVar2 = param_3 + lVar7;
      FUN_1000153b4(lVar1,lVar2);
      FUN_1000153b4(lVar1 + 0x10,lVar2 + 0x10);
      std::string::operator=((string *)(lVar1 + 0x20),(string *)(lVar2 + 0x20));
      std::string::operator=((string *)(lVar1 + 0x38),(string *)(lVar2 + 0x38));
      std::string::operator=((string *)(lVar1 + 0x50),(string *)(lVar2 + 0x50));
      if (param_2 != param_3) {
        FUN_10010c800(lVar1 + 0x68,*(undefined8 *)(lVar1 + 0x70));
        *(undefined8 **)(lVar1 + 0x68) = (undefined8 *)(lVar1 + 0x70);
        *(undefined8 *)(lVar1 + 0x70) = 0;
        *(undefined8 *)(lVar1 + 0x78) = 0;
        FUN_10030a21c(lVar1 + 0x68,*(undefined8 *)(lVar2 + 0x68),param_3 + 0x70 + lVar7);
      }
      uVar3 = *(undefined2 *)(lVar2 + 0x80);
      *(undefined1 *)(lVar1 + 0x82) = *(undefined1 *)(lVar2 + 0x82);
      *(undefined2 *)(lVar1 + 0x80) = uVar3;
      lVar7 = lVar7 + 0x88;
    } while (lVar2 + 0x88 != lVar10);
    uVar6 = (ulong)*param_1;
    lVar7 = *(long *)(param_1 + 2);
  }
  puVar8 = (undefined8 *)(param_2 + ((lVar4 >> 3) * -0xf0f0f0f0f0f0f0f & 0xffffffffU) * 0x88);
  puVar9 = (undefined8 *)(lVar7 + uVar6 * 0x88);
  if (puVar8 != puVar9) {
    do {
      FUN_10010c800(puVar8 + 0xd,puVar8[0xe]);
      if (*(char *)((long)puVar8 + 0x67) < '\0') {
        operator_delete((void *)puVar8[10]);
      }
      if (*(char *)((long)puVar8 + 0x4f) < '\0') {
        operator_delete((void *)puVar8[7]);
      }
      if (*(char *)((long)puVar8 + 0x37) < '\0') {
        operator_delete((void *)puVar8[4]);
      }
      if ((void *)puVar8[3] != (void *)0x0) {
        operator_delete__((void *)puVar8[3]);
        puVar8[2] = 0;
        puVar8[3] = 0;
      }
      if ((void *)puVar8[1] != (void *)0x0) {
        operator_delete__((void *)puVar8[1]);
        *puVar8 = 0;
        puVar8[1] = 0;
      }
      puVar8 = puVar8 + 0x11;
    } while (puVar8 != puVar9);
    uVar6 = (ulong)*param_1;
  }
  *param_1 = (int)uVar6 + iVar5 * 0xf0f0f0f;
  return;
}




long FUN_10030a138(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined1 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = thunk_FUN_1004e439c();
  thunk_FUN_1004e439c(lVar1 + 0x10,param_3);
  FUN_10003330c(param_1 + 0x20,param_4);
  FUN_10003330c(param_1 + 0x38,param_5);
  FUN_10003330c(param_1 + 0x50,param_6);
  puVar3 = (undefined8 *)(param_1 + 0x70);
  *puVar3 = 0;
  puVar2 = (undefined8 *)(param_1 + 0x68);
  *puVar2 = puVar3;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x80) = param_8;
  *(undefined1 *)(param_1 + 0x81) = (undefined1)param_9;
  *(undefined1 *)(param_1 + 0x82) = param_9._1_1_;
  if ((param_7 != (undefined8 *)0x0) && (puVar2 != param_7)) {
    FUN_10010c800(puVar2,0);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 **)(param_1 + 0x68) = puVar3;
    FUN_10030a21c(puVar2,*param_7,param_7 + 1);
  }
  return param_1;
}




void FUN_10030a21c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 != param_3) {
    do {
      FUN_10020cabc(param_1,param_1 + 8,param_2 + 4,param_2 + 4);
      plVar1 = (long *)param_2[1];
      if ((long *)param_2[1] == (long *)0x0) {
        plVar1 = param_2 + 2;
        plVar2 = (long *)*plVar1;
        if ((long *)*plVar2 != param_2) {
          do {
            lVar3 = *plVar1;
            plVar1 = (long *)(lVar3 + 0x10);
            plVar2 = (long *)*plVar1;
          } while (*plVar2 != lVar3);
        }
      }
      else {
        do {
          plVar2 = plVar1;
          plVar1 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
      param_2 = plVar2;
    } while (plVar2 != param_3);
  }
  return;
}




void FUN_10030a2bc(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined2 uVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  
  if (param_1[1] < param_2) {
    pvVar6 = operator_new__((ulong)param_2 * 0x88);
    pvVar8 = *(void **)(param_1 + 2);
    uVar4 = *param_1;
    if (uVar4 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar9 = 0;
      do {
        lVar1 = (long)pvVar6 + lVar9;
        lVar2 = (long)pvVar8 + lVar9;
        thunk_FUN_1004e439c(lVar1,lVar2);
        thunk_FUN_1004e439c(lVar1 + 0x10,lVar2 + 0x10);
        FUN_10003330c(lVar1 + 0x20,lVar2 + 0x20);
        FUN_10003330c(lVar1 + 0x38,lVar2 + 0x38);
        FUN_10003330c(lVar1 + 0x50,lVar2 + 0x50);
        *(undefined8 *)(lVar1 + 0x70) = 0;
        *(undefined8 *)(lVar1 + 0x68) = (undefined8 *)(lVar1 + 0x70);
        *(undefined8 *)(lVar1 + 0x78) = 0;
        FUN_10030a21c((undefined8 *)(lVar1 + 0x68),*(undefined8 *)(lVar2 + 0x68),
                      (long)pvVar8 + lVar9 + 0x70);
        uVar5 = *(undefined2 *)(lVar2 + 0x80);
        *(undefined1 *)(lVar1 + 0x82) = *(undefined1 *)(lVar2 + 0x82);
        *(undefined2 *)(lVar1 + 0x80) = uVar5;
        lVar9 = lVar9 + 0x88;
      } while ((ulong)uVar4 * 0x88 - lVar9 != 0);
      pvVar8 = *(void **)(param_1 + 2);
      uVar4 = *param_1;
      param_1[1] = param_2;
      if (uVar4 != 0) {
        lVar9 = 0;
        do {
          FUN_10010c800((long)pvVar8 + lVar9 + 0x68,*(undefined8 *)((long)pvVar8 + lVar9 + 0x70));
          if (*(char *)((long)pvVar8 + lVar9 + 0x67) < '\0') {
            operator_delete(*(void **)((long)pvVar8 + lVar9 + 0x50));
          }
          if (*(char *)((long)pvVar8 + lVar9 + 0x4f) < '\0') {
            operator_delete(*(void **)((long)pvVar8 + lVar9 + 0x38));
          }
          if (*(char *)((long)pvVar8 + lVar9 + 0x37) < '\0') {
            operator_delete(*(void **)((long)pvVar8 + lVar9 + 0x20));
          }
          pvVar7 = *(void **)((long)pvVar8 + lVar9 + 0x18);
          if (pvVar7 != (void *)0x0) {
            operator_delete__(pvVar7);
            *(undefined8 *)((long)pvVar8 + lVar9 + 0x10) = 0;
            *(undefined8 *)((long)pvVar8 + lVar9 + 0x18) = 0;
          }
          puVar3 = (undefined8 *)((long)pvVar8 + lVar9);
          if ((void *)puVar3[1] != (void *)0x0) {
            operator_delete__((void *)puVar3[1]);
            *puVar3 = 0;
            puVar3[1] = 0;
          }
          lVar9 = lVar9 + 0x88;
        } while ((ulong)uVar4 * 0x88 - lVar9 != 0);
        pvVar8 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar8 != (void *)0x0) {
      operator_delete__(pvVar8);
    }
    *(void **)(param_1 + 2) = pvVar6;
  }
  return;
}




undefined8 * FUN_10030a46c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *local_40;
  undefined8 *puStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  lVar1 = FUN_10014f4a0();
  FUN_10011cc24(lVar1 + 0x18);
  *param_1 = &PTR_thunk_FUN_10030a674_10148f320;
  param_1[3] = &PTR_FUN_10148f6c0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xffffffffffffffff;
  param_1[0xc] = 0;
  *(undefined8 *)((long)param_1 + 0x65) = 0;
  uVar2 = FUN_10032697c();
  puStack_38 = (undefined8 *)0x0;
  pcStack_28 = thunk_FUN_10030a53c;
  local_40 = param_1;
  local_30 = param_1;
  FUN_1000be5e4(uVar2,&local_40);
  uVar2 = FUN_100326d90();
  local_40 = (undefined8 *)0x0;
  pcStack_28 = thunk_FUN_10030b608;
  puStack_38 = param_1;
  local_30 = param_1;
  FUN_1002059f4(uVar2,&local_40);
  FUN_1004e18bc(&DAT_101d91160,param_1,0x1346de83,FUN_10030a534,0);
  FUN_10030a53c(param_1);
  return param_1;
}




void FUN_10030a534(long param_1)

{
  *(undefined1 *)(param_1 + 0x6c) = 0;
  return;
}




void FUN_10030a53c(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int local_40 [2];
  undefined8 *local_38;
  
  cVar1 = *(char *)(param_1 + 0x68);
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = *(long *)(param_1 + 0x60) != 0;
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  FUN_10030af8c(param_1 + 0x30,0);
  if ((*(char *)(param_1 + 0x6a) == '\0') && (*(char *)(param_1 + 0x6b) == '\0')) {
    iVar3 = FUN_100327554();
    if (iVar3 != 0) {
      FUN_1003270b0(local_40,7);
      if (local_40[0] == 0) {
        *(undefined1 *)(param_1 + 0x68) = 1;
      }
      else {
        *(undefined8 *)(param_1 + 0x60) = *local_38;
        FUN_10015d3ec();
        FUN_100166eb8();
        *(undefined1 *)(param_1 + 0x6a) = 1;
      }
      if (local_38 != (undefined8 *)0x0) {
        operator_delete__(local_38);
      }
    }
    if (*(char *)(param_1 + 0x68) == '\0') {
      if ((bVar2 == false) && (cVar1 == '\0')) {
        return;
      }
    }
    else if ((bVar2 != (*(long *)(param_1 + 0x60) == 0)) && (cVar1 == *(char *)(param_1 + 0x68))) {
      return;
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      lVar4 = *(long *)(param_1 + 0x28);
      do {
        if (*(code **)(lVar4 + 8) == (code *)0x0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x10));
        }
        else {
          (**(code **)(lVar4 + 8))();
        }
        lVar4 = lVar4 + 0x20;
      } while (lVar4 != *(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x20) * 0x20);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x6a) = 0x100;
  }
  return;
}




undefined8 * thunk_FUN_10030a46c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  lVar1 = FUN_10014f4a0();
  FUN_10011cc24(lVar1 + 0x18);
  *param_1 = &PTR_thunk_FUN_10030a674_10148f320;
  param_1[3] = &PTR_FUN_10148f6c0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xffffffffffffffff;
  param_1[0xc] = 0;
  *(undefined8 *)((long)param_1 + 0x65) = 0;
  uVar2 = FUN_10032697c();
  puStack_38 = (undefined8 *)0x0;
  pcStack_28 = thunk_FUN_10030a53c;
  puStack_40 = param_1;
  puStack_30 = param_1;
  FUN_1000be5e4(uVar2,&puStack_40);
  uVar2 = FUN_100326d90();
  puStack_40 = (undefined8 *)0x0;
  pcStack_28 = thunk_FUN_10030b608;
  puStack_38 = param_1;
  puStack_30 = param_1;
  FUN_1002059f4(uVar2,&puStack_40);
  FUN_1004e18bc(&DAT_101d91160,param_1,0x1346de83,FUN_10030a534,0);
  FUN_10030a53c(param_1);
  return param_1;
}




void FUN_10030a674(undefined8 *param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_thunk_FUN_10030a674_10148f320;
  param_1[3] = &PTR_FUN_10148f6c0;
  puVar1 = (uint *)FUN_10032697c();
  if (*puVar1 != 0) {
    lVar2 = (ulong)*puVar1 << 5;
    puVar4 = *(undefined8 **)(puVar1 + 2);
    do {
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_1000c044c(puVar1,puVar4,puVar4 + 4);
        break;
      }
      lVar2 = lVar2 + -0x20;
      puVar4 = puVar4 + 4;
    } while (lVar2 != 0);
  }
  puVar1 = (uint *)FUN_100326d90();
  if (*puVar1 != 0) {
    lVar2 = *(long *)(puVar1 + 2);
    lVar3 = (ulong)*puVar1 << 5;
    do {
      puVar4 = (undefined8 *)(lVar2 + 8);
      lVar2 = lVar2 + 0x20;
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_100205984();
        break;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  FUN_1004e1b58(&DAT_101d91160,param_1);
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  FUN_10030af8c(param_1 + 6,1);
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  FUN_10011ccec(param_1 + 3);
  FUN_10014f51c(param_1);
  return;
}




void thunk_FUN_10030a674(void)

{
  FUN_10030a674();
  return;
}




void FUN_10030a768(long param_1)

{
  FUN_10030a674(param_1 + -0x18);
  return;
}




void FUN_10030a770(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10030a674();
  operator_delete(pvVar1);
  return;
}




void FUN_10030a784(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10030a674(param_1 + -0x18);
  operator_delete(pvVar1);
  return;
}




bool FUN_10030a79c(long param_1)

{
  return *(long *)(param_1 + 0x60) != 0;
}




undefined4 FUN_10030a7ac(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    if (*(char *)(param_1 + 0x68) == '\0') {
      uVar1 = 0;
    }
    else {
      puVar2 = (undefined4 *)FUN_100319d48(*(long *)(param_1 + 0x60),"chainCount");
      uVar1 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        uVar1 = *puVar2;
      }
    }
  }
  return uVar1;
}




undefined1 FUN_10030a7ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x68);
}




undefined4 FUN_10030a7f4(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (puVar2 = (undefined4 *)FUN_100319d48(*(long *)(param_1 + 0x60),"chainIndex"), uVar1 = 0,
     puVar2 != (undefined4 *)0x0)) {
    uVar1 = *puVar2;
  }
  return uVar1;
}




int FUN_10030a820(void)

{
  long lVar1;
  
  lVar1 = FUN_1004f1a74(0);
  return (((int)(SUB168(SEXT816(lVar1) * SEXT816(0x1845c8a0ce512957),8) >> 0xd) -
          (SUB164(SEXT816(lVar1) * SEXT816(0x1845c8a0ce512957),0xc) >> 0x1f)) * 0x15180 - (int)lVar1
         ) + 0x15180;
}




undefined8 FUN_10030a86c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0xd8) != '\0')) && (*(char *)(lVar1 + 0xd9) == '\0')) {
    return 1;
  }
  return 0;
}




void FUN_10030a894(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x60) != 0) && (iVar1 = FUN_100319e28(), iVar1 != 0)) {
    uVar2 = FUN_10002f320();
    FUN_1000315c4(uVar2,*(long *)(param_1 + 0x60) + 0x48,
                  *(long *)(*(long *)(param_1 + 0x60) + 8) + 0x30);
    return;
  }
  return;
}




char * FUN_10030a8e0(long param_1,uint param_2)

{
  char *pcVar1;
  long lVar2;
  
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x30))) {
    lVar2 = *(long *)(param_1 + 0x38) + (ulong)param_2 * 0x78;
    pcVar1 = (char *)(lVar2 + 0x30);
    if (-1 < *(char *)(lVar2 + 0x47)) {
      return pcVar1;
    }
    return *(char **)pcVar1;
  }
  return "";
}




char * FUN_10030a920(long param_1,uint param_2)

{
  char *pcVar1;
  long lVar2;
  
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x30))) {
    lVar2 = *(long *)(param_1 + 0x38) + (ulong)param_2 * 0x78;
    pcVar1 = (char *)(lVar2 + 0x48);
    if (-1 < *(char *)(lVar2 + 0x5f)) {
      return pcVar1;
    }
    return *(char **)pcVar1;
  }
  return "";
}




undefined8 * FUN_10030a960(long param_1,uint param_2)

{
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x30))) {
    return (undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)param_2 * 0x78 + 0x60);
  }
  return &DAT_101d91650;
}




long FUN_10030acc4(long param_1,byte *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  
  uVar3 = *(uint *)(param_1 + 0x30);
  pbVar1 = *(byte **)param_2;
  sVar5 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar1 = param_2;
    sVar5 = (ulong)param_2[0x17];
  }
  if (uVar3 != 0) {
    uVar12 = 0;
    lVar11 = *(long *)(param_1 + 0x38);
    pbVar13 = (byte *)(lVar11 + 0x19);
    do {
      lVar9 = lVar11 + uVar12 * 0x78;
      bVar4 = *(byte *)(lVar9 + 0x2f);
      uVar7 = (ulong)bVar4;
      sVar2 = *(size_t *)(lVar9 + 0x20);
      if (-1 < (char)bVar4) {
        sVar2 = uVar7;
      }
      if (sVar2 == sVar5) {
        if ((char)bVar4 < '\0') {
          if ((sVar5 == 0) || (iVar6 = _memcmp(*(void **)(lVar9 + 0x18),pbVar1,sVar5), iVar6 == 0))
          {
LAB_10030adac:
            return lVar11 + (uVar12 & 0xffffffff) * 0x78;
          }
        }
        else {
          if (sVar5 == 0) goto LAB_10030adac;
          pbVar10 = pbVar13;
          pbVar8 = pbVar1;
          if ((uint)*pbVar1 == ((uint)*(void **)(lVar9 + 0x18) & 0xff)) {
            do {
              uVar7 = uVar7 - 1;
              pbVar8 = pbVar8 + 1;
              if (uVar7 == 0) goto LAB_10030adac;
              bVar4 = *pbVar10;
              pbVar10 = pbVar10 + 1;
            } while (bVar4 == *pbVar8);
          }
        }
      }
      uVar12 = uVar12 + 1;
      pbVar13 = pbVar13 + 0x78;
    } while (uVar12 != uVar3);
  }
  return 0;
}




void FUN_10030add0(long param_1,long param_2)

{
  uint *puVar1;
  long lVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  void *local_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  void *local_b8;
  undefined8 local_b0;
  long lStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  long local_90;
  void *pvStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 local_70;
  void *local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(char *)(param_1 + 0x6a) == '\0') {
    if (*(char *)(param_1 + 0x6b) != '\0') {
      *(undefined1 *)(param_1 + 0x6b) = 0;
      FUN_10030a53c(param_1);
      return;
    }
  }
  else {
    local_50 = 0;
    uStack_48 = 0;
    FUN_100016390(&local_50,*(undefined4 *)(param_2 + 0x28));
    puVar1 = (uint *)(param_1 + 0x30);
    FUN_10030af8c(puVar1,0);
    uVar3 = *(undefined4 *)(param_2 + 0x28);
    uStack_c8 = 0;
    local_d0 = (void *)0x0;
    local_b8 = (void *)0x0;
    lStack_c0 = 0;
    lStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    local_a0 = (void *)0x0;
    pvStack_88 = (void *)0x0;
    local_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
    FUN_1004e313c(&local_70);
    local_60 = 0;
    local_5e = 0;
    FUN_10030b04c(puVar1,uVar3,&local_d0);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
      local_70 = 0;
      local_68 = (void *)0x0;
    }
    if (lStack_78 < 0) {
      operator_delete(pvStack_88);
    }
    if (local_90 < 0) {
      operator_delete(local_a0);
    }
    if (lStack_a8 < 0) {
      operator_delete(local_b8);
    }
    if (lStack_c0 < 0) {
      operator_delete(local_d0);
    }
    if (*(int *)(param_2 + 0x28) != 0) {
      lVar6 = 0;
      uVar8 = 0;
      do {
        FUN_10030b1f4(param_1,*(long *)(param_2 + 0x30) + lVar6);
        uVar8 = uVar8 + 1;
        lVar6 = lVar6 + 0x110;
      } while (uVar8 < *(uint *)(param_2 + 0x28));
    }
    uVar8 = (ulong)*(uint *)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x30) != 0) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        lVar2 = *(long *)(param_1 + 0x38) + lVar6;
        cVar4 = *(char *)(lVar2 + 0x2f);
        if (cVar4 < '\0') {
          if (*(long *)(lVar2 + 0x20) != 0) goto LAB_10030af00;
        }
        else if (cVar4 != '\0') {
LAB_10030af00:
          FUN_10001617c(&local_50,*(long *)(param_1 + 0x38) + lVar6 + 0x18);
          uVar8 = (ulong)*puVar1;
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x78;
      } while (uVar7 < uVar8);
    }
    uVar5 = FUN_10015d3ec();
    FUN_100166bc0(uVar5,&local_50);
    FUN_10001629c(&local_50,1);
  }
  return;
}




void FUN_10030b1f4(long param_1,string *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  string *this;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  
  if (*(int *)(param_2 + 0xe8) == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    lVar9 = 0;
    uVar10 = 0;
    uVar8 = 0xffffffff;
    do {
      lVar4 = *(long *)(param_2 + 0xf0);
      uVar1 = lVar4 + lVar9;
      bVar7 = *(byte *)(uVar1 + 0x17);
      uVar5 = (ulong)bVar7;
      uVar6 = *(ulong *)(uVar1 + 8);
      uVar2 = uVar6;
      if (-1 < (char)bVar7) {
        uVar2 = uVar5;
      }
      if (uVar2 == 10) {
        iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013ef33c);
        lVar4 = *(long *)(param_2 + 0xf0);
        if (iVar3 != 0) {
          bVar7 = *(byte *)(lVar4 + lVar9 + 0x17);
          uVar5 = (ulong)bVar7;
          uVar6 = *(ulong *)(lVar4 + lVar9 + 8);
          goto LAB_10030b288;
        }
        uVar8 = *(uint *)(lVar4 + lVar9 + 0x18);
      }
      else {
LAB_10030b288:
        if (-1 < (char)bVar7) {
          uVar6 = uVar5;
        }
        if (uVar6 == 10) {
          std::string::compare(lVar4 + lVar9,0,(char *)0xffffffffffffffff,0x1013ef331);
        }
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x20;
    } while (uVar10 < *(uint *)(param_2 + 0xe8));
  }
  lVar9 = *(long *)(param_1 + 0x38);
  this = (string *)(lVar9 + (ulong)uVar8 * 0x78);
  std::string::operator=(this,param_2);
  this[0x71] = param_2[0x10c];
  if (*(int *)(param_2 + 0xd8) != 0) {
    std::string::operator=
              ((string *)(lVar9 + (ulong)uVar8 * 0x78 + 0x18),*(string **)(param_2 + 0xe0));
  }
  *(undefined1 *)(lVar9 + (ulong)uVar8 * 0x78 + 0x72) = 1;
  return;
}




void FUN_10030b344(long param_1)

{
  string *this;
  size_t sVar1;
  size_t sVar2;
  undefined8 ***pppuVar3;
  string sVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  string *psVar8;
  string *psVar9;
  undefined8 **local_38;
  size_t local_30;
  ulong local_28;
  
  local_38 = (undefined8 ***)0x0;
  local_30 = 0;
  local_28 = 0;
  iVar6 = FUN_1004ef16c(&local_38);
  if (iVar6 == 0) goto LAB_10030b424;
  this = (string *)(param_1 + 0x40);
  uVar7 = local_28 >> 0x38;
  sVar1 = local_30;
  if (-1 < (long)local_28) {
    sVar1 = uVar7;
  }
  bVar5 = *(byte *)(param_1 + 0x57);
  sVar2 = *(size_t *)(param_1 + 0x48);
  if (-1 < (char)bVar5) {
    sVar2 = (ulong)bVar5;
  }
  if (sVar1 == sVar2) {
    pppuVar3 = (undefined8 ***)local_38;
    if (-1 < (long)local_28) {
      pppuVar3 = &local_38;
    }
    psVar9 = *(string **)this;
    if (-1 < (char)bVar5) {
      psVar9 = this;
    }
    if ((long)local_28 < 0) {
      if ((sVar1 == 0) || (iVar6 = _memcmp(pppuVar3,psVar9,sVar1), iVar6 == 0)) goto LAB_10030b424;
    }
    else {
      if (sVar1 == 0) goto LAB_10030b424;
      if ((uint)(byte)*psVar9 == ((uint)local_38 & 0xff)) {
        psVar8 = (string *)((ulong)&local_38 | 1);
        do {
          uVar7 = uVar7 - 1;
          psVar9 = psVar9 + 1;
          if (uVar7 == 0) goto LAB_10030b424;
          sVar4 = *psVar8;
          psVar8 = psVar8 + 1;
        } while (sVar4 == *psVar9);
      }
    }
  }
  std::string::operator=(this,(string *)&local_38);
  *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x6c) = 0;
LAB_10030b424:
  if ((long)local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}




void FUN_10030b444(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_68 [8];
  void *local_60;
  int local_58;
  undefined4 uStack_54;
  undefined1 local_50;
  char acStack_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  if (((*(char *)(param_1 + 0x68) != '\0') && (*(long *)(param_1 + 0x60) != 0)) &&
     (lVar2 = FUN_1001340d4(), *(char *)(lVar2 + 8) != '\0')) {
    FUN_1004d32ec(0,acStack_48,0x10,"%z");
    iVar1 = _atoi(acStack_48);
    iVar4 = 0xa8c0;
    if ((iVar1 * 0x3c + (iVar1 / 100) * -0x960 + 0x17bb0) % 0x15180 - 36000U < 0xa8c1) {
      iVar4 = 0;
    }
    lVar2 = FUN_1004f1a74(0);
    iVar4 = (((int)(SUB168(SEXT816(lVar2) * SEXT816(0x1845c8a0ce512957),8) >> 0xd) -
             (SUB164(SEXT816(lVar2) * SEXT816(0x1845c8a0ce512957),0xc) >> 0x1f)) * 0x15180 -
            (int)lVar2) + iVar4;
    iVar1 = iVar4 + 0x17bb0;
    local_58 = iVar1;
    if (((0x15180 < iVar1) && (lVar2 = *(long *)(param_1 + 0x60), lVar2 != 0)) &&
       ((*(char *)(lVar2 + 0xd8) != '\0' &&
        (local_58 = iVar4 + 0x2a30, *(char *)(lVar2 + 0xd9) != '\0')))) {
      local_58 = iVar1;
    }
    thunk_FUN_10052b358(auStack_68);
    uVar3 = FUN_1004e0150("DAILY_LOGIN_NOTIFICATION",0);
    FUN_1000153b4(auStack_68,uVar3);
    uStack_54 = 1;
    local_50 = 0;
    FUN_10011cd50(param_1 + 0x18,auStack_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10030b600(long param_1)

{
  FUN_10030b444(param_1 + -0x18);
  return;
}




void FUN_10030b608(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((((char)param_2[1] != '\0') && (lVar2 = *param_2, lVar2 != 0)) &&
     (*(int *)(lVar2 + 0x40) == 7)) {
    local_30 = 0;
    uStack_28 = 0;
    iVar1 = FUN_1000e6ae0(lVar2,&local_30);
    uVar3 = FUN_10002f320();
    if (iVar1 == 0) {
      FUN_100031740(uVar3,*param_2 + 0x48);
    }
    else {
      FUN_100031670(uVar3,*param_2 + 0x48,&local_30);
    }
    FUN_1000ec1cc(&local_30,1);
  }
  return;
}




void thunk_FUN_10030a53c(void)

{
  FUN_10030a53c();
  return;
}




void thunk_FUN_10030b608(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((((char)param_2[1] != '\0') && (lVar2 = *param_2, lVar2 != 0)) &&
     (*(int *)(lVar2 + 0x40) == 7)) {
    uStack_30 = 0;
    uStack_28 = 0;
    iVar1 = FUN_1000e6ae0(lVar2,&uStack_30);
    uVar3 = FUN_10002f320();
    if (iVar1 == 0) {
      FUN_100031740(uVar3,*param_2 + 0x48);
    }
    else {
      FUN_100031670(uVar3,*param_2 + 0x48,&uStack_30);
    }
    FUN_1000ec1cc(&uStack_30,1);
  }
  return;
}




void FUN_10030b7f4(void)

{
  if (DAT_101e45d48 == 0) {
    operator_new(0xb0);
    DAT_101e45d48 = FUN_10030b894();
  }
  return;
}




void FUN_10030b828(void)

{
  if (DAT_101e45d48 != (long *)0x0) {
    (**(code **)(*DAT_101e45d48 + 8))();
    DAT_101e45d48 = (long *)0x0;
  }
  return;
}




undefined8 FUN_10030b85c(void)

{
  return DAT_101e45d48;
}




undefined * FUN_10030b868(ulong param_1)

{
  return (&PTR_s_cloud9_10148f6e0)[(param_1 & 0xffffffff) * 2];
}




undefined * FUN_10030b880(ulong param_1)

{
  return (&PTR_s_com_superevilmegacorp_vg_esports_10148f6e8)[(param_1 & 0xffffffff) * 2];
}




void * FUN_10030b894(void *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  void *local_68 [2];
  char local_51;
  void *local_50;
  code *pcStack_48;
  long local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  puVar1 = (undefined8 *)FUN_1004f0a20();
  *puVar1 = &PTR_thunk_FUN_10030bab4_10148f7e0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_1004f1580(puVar1 + 5);
  lVar2 = 0;
  *(undefined ***)((long)param_1 + 0x28) = &PTR_FUN_10148f810;
  *(undefined8 *)((long)param_1 + 0x88) = 0;
  *(undefined8 *)((long)param_1 + 0x80) = 0;
  *(undefined8 *)((long)param_1 + 0x58) = 0;
  *(undefined8 *)((long)param_1 + 0x50) = 0;
  *(undefined8 *)((long)param_1 + 0x68) = 0;
  *(undefined8 *)((long)param_1 + 0x60) = 0;
  *(undefined8 *)((long)param_1 + 0x70) = 0;
  *(undefined8 *)((long)param_1 + 0x98) = 0;
  *(undefined8 *)((long)param_1 + 0x90) = 0;
  *(undefined8 *)((long)param_1 + 0xa3) = 0;
  *(undefined8 *)((long)param_1 + 0x9b) = 0;
  do {
    local_50 = (void *)0x0;
    pcStack_48 = (code *)0x0;
    local_40 = 0;
    FUN_10001549c(local_68,*(undefined8 *)((long)&PTR_s_cloud9_10148f6e0 + lVar2));
    std::string::operator=((string *)&local_50,(string *)local_68);
    if (local_51 < '\0') {
      operator_delete(local_68[0]);
    }
    local_38 = 0;
    local_34 = 0;
    FUN_10030b998((undefined8 *)((long)param_1 + 0x80),&local_50);
    if (local_40 < 0) {
      operator_delete(local_50);
    }
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0xf0);
  pcStack_48 = thunk_FUN_10030bc7c;
  local_50 = param_1;
  FUN_100643618(0xcd,&local_50,0,1);
  return param_1;
}




void FUN_10030b998(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  uVar6 = *param_1;
  if (uVar6 == param_1[1]) {
    uVar2 = 0;
    if (uVar6 != 0xffffffff) {
      uVar2 = uVar6 + (~uVar6 | 0xfffffff0) + 0x11;
    }
    if (uVar6 < 0x20) {
      uVar2 = uVar6 << 1;
    }
    uVar3 = uVar6 + 1;
    if (uVar6 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_10030bf58(param_1,uVar3);
    uVar6 = *param_1;
  }
  *param_1 = uVar6 + 1;
  lVar11 = *(long *)(param_1 + 2);
  if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
    uVar7 = param_2[1];
    if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_10030be64();
    }
    puVar8 = (undefined8 *)*param_2;
  }
  else {
    uVar7 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar8 = param_2;
  }
  lVar12 = (ulong)(uVar6 + 1) - 1;
  puVar9 = (undefined8 *)(lVar11 + lVar12 * 0x20);
  if (uVar7 < 0x17) {
    *(char *)((long)puVar9 + 0x17) = (char)uVar7;
    puVar5 = puVar9;
    if (uVar7 == 0) goto LAB_10030ba80;
  }
  else {
    uVar10 = uVar7 + 0x10 & 0xfffffffffffffff0;
    puVar5 = operator_new(uVar10);
    *puVar9 = puVar5;
    lVar1 = lVar11 + lVar12 * 0x20;
    *(ulong *)(lVar1 + 8) = uVar7;
    *(ulong *)(lVar1 + 0x10) = uVar10 | 0x8000000000000000;
  }
  _memcpy(puVar5,puVar8,uVar7);
  puVar9 = puVar5;
LAB_10030ba80:
  *(undefined1 *)((long)puVar9 + uVar7) = 0;
  uVar4 = *(undefined4 *)(param_2 + 3);
  lVar11 = lVar11 + lVar12 * 0x20;
  *(undefined1 *)(lVar11 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
  *(undefined4 *)(lVar11 + 0x18) = uVar4;
  return;
}




void FUN_10030bab4(undefined8 *param_1)

{
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_thunk_FUN_10030bab4_10148f7e0;
  pcStack_28 = thunk_FUN_10030bc7c;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    operator_delete((void *)param_1[0x12]);
  }
  FUN_10030bee4(param_1 + 0x10,1);
  param_1[5] = &PTR_FUN_10148f810;
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  FUN_10030be70(param_1 + 10,1);
  FUN_1004f15a8(param_1 + 5);
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_1004f0a9c(param_1);
  return;
}




void FUN_10030bb60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148f810;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  FUN_10030be70(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




void thunk_FUN_10030bab4(void)

{
  FUN_10030bab4();
  return;
}




void FUN_10030bbac(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10030bab4();
  operator_delete(pvVar1);
  return;
}




undefined1 FUN_10030bbc0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xaa);
}




void FUN_10030bbc8(long param_1)

{
  if (*(char *)(param_1 + 0xaa) != '\0') {
    return;
  }
  FUN_1004f0230(param_1 + 0x28);
  return;
}




void FUN_10030bbdc(long param_1)

{
  *(undefined1 *)(param_1 + 0xaa) = 0;
  return;
}




undefined1 FUN_10030bbe4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa8);
}




undefined8 * FUN_10030bbec(long param_1)

{
  if (-1 < *(char *)(param_1 + 0xa7)) {
    return (undefined8 *)(param_1 + 0x90);
  }
  return *(undefined8 **)(param_1 + 0x90);
}




undefined4 FUN_10030bc08(long param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    pcVar3 = *(char **)(param_1 + 0x88);
    do {
      pcVar2 = pcVar3;
      if (pcVar3[0x17] < '\0') {
        pcVar2 = *(char **)pcVar3;
      }
      iVar1 = _strcmp(pcVar2,param_2);
      if (iVar1 == 0) {
        return *(undefined4 *)(pcVar3 + 0x18);
      }
      pcVar3 = pcVar3 + 0x20;
    } while (pcVar3 != (char *)(*(long *)(param_1 + 0x88) + (ulong)*(uint *)(param_1 + 0x80) * 0x20)
            );
  }
  return 0;
}




void FUN_10030bc7c(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  iVar11 = FUN_1004f1698(param_1 + 0x28);
  if ((iVar11 != 0) && (iVar11 = FUN_1004f1680(param_1 + 0x28), iVar11 != 0)) {
    std::string::operator=((string *)(param_1 + 0x90),(string *)(param_1 + 0x60));
    *(undefined2 *)(param_1 + 0xa8) = *(undefined2 *)(param_1 + 0x78);
    if (*(uint *)(param_1 + 0x50) != 0) {
      pbVar13 = *(byte **)(param_1 + 0x58);
      pbVar3 = pbVar13 + (ulong)*(uint *)(param_1 + 0x50) * 0x20;
      puVar14 = *(undefined8 **)(param_1 + 0x88);
      uVar8 = *(uint *)(param_1 + 0x80);
      do {
        puVar15 = puVar14;
        if (uVar8 != 0) {
          do {
            bVar9 = *(byte *)((long)puVar15 + 0x17);
            sVar4 = puVar15[1];
            if (-1 < (char)bVar9) {
              sVar4 = (ulong)bVar9;
            }
            bVar10 = pbVar13[0x17];
            sVar5 = *(size_t *)(pbVar13 + 8);
            if (-1 < (char)bVar10) {
              sVar5 = (ulong)bVar10;
            }
            if (sVar4 == sVar5) {
              puVar6 = (void *)*puVar15;
              if (-1 < (char)bVar9) {
                puVar6 = puVar15;
              }
              pbVar7 = *(byte **)pbVar13;
              if (-1 < (char)bVar10) {
                pbVar7 = pbVar13;
              }
              if ((char)bVar9 < '\0') {
                if ((sVar4 == 0) || (iVar11 = _memcmp(puVar6,pbVar7,sVar4), iVar11 == 0))
                goto LAB_10030bd7c;
              }
              else if (sVar4 == 0) {
LAB_10030bd7c:
                *(undefined4 *)(puVar15 + 3) = *(undefined4 *)(pbVar13 + 0x18);
                *(byte *)((long)puVar15 + 0x1c) = pbVar13[0x1c];
              }
              else if ((uint)*pbVar7 == ((uint)(void *)*puVar15 & 0xff)) {
                uVar12 = 1;
                do {
                  if (bVar9 == uVar12) goto LAB_10030bd7c;
                  pbVar1 = (byte *)((long)puVar15 + uVar12);
                  pbVar2 = pbVar7 + uVar12;
                  uVar12 = uVar12 + 1;
                } while (*pbVar1 == *pbVar2);
              }
            }
            puVar15 = puVar15 + 4;
          } while (puVar15 != puVar14 + (ulong)uVar8 * 4);
        }
        pbVar13 = pbVar13 + 0x20;
      } while (pbVar13 != pbVar3);
    }
    *(undefined1 *)(param_1 + 0xaa) = 1;
    if (*(int *)(param_1 + 0x18) != 0) {
      puVar14 = *(undefined8 **)(param_1 + 0x20);
      do {
        if ((code *)*puVar14 == (code *)0x0) {
          (*(code *)puVar14[3])(puVar14[2],param_1);
        }
        else {
          (*(code *)*puVar14)(param_1);
        }
        puVar14 = puVar14 + 4;
      } while (puVar14 !=
               (undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20));
    }
  }
  return;
}




void FUN_10030be08(long param_1)

{
  *(undefined1 *)(param_1 + 0xaa) = 0;
  return;
}




void FUN_10030be10(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148f810;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  FUN_10030be70(param_1 + 5,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10030be5c(void)

{
  return 0x39;
}




void FUN_10030be64(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_10030be70(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 << 5;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10030bee4(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 << 5;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10030bf58(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 << 5);
    puVar6 = *(undefined8 **)(param_1 + 2);
    uVar2 = *param_1;
    if (uVar2 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar10 = 0;
      do {
        puVar8 = (undefined8 *)((long)puVar6 + lVar10);
        if ((char)*(byte *)((long)puVar8 + 0x17) < '\0') {
          uVar7 = puVar8[1];
          if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_10030be64();
          }
          puVar8 = (undefined8 *)*puVar8;
        }
        else {
          uVar7 = (ulong)*(byte *)((long)puVar8 + 0x17);
        }
        if (uVar7 < 0x17) {
          pvVar5 = (void *)((long)pvVar4 + lVar10);
          *(char *)((long)pvVar5 + 0x17) = (char)uVar7;
          if (uVar7 != 0) goto LAB_10030c00c;
        }
        else {
          uVar9 = uVar7 + 0x10 & 0xfffffffffffffff0;
          pvVar5 = operator_new(uVar9);
          puVar1 = (undefined8 *)((long)pvVar4 + lVar10);
          puVar1[1] = uVar7;
          puVar1[2] = uVar9 | 0x8000000000000000;
          *puVar1 = pvVar5;
LAB_10030c00c:
          _memcpy(pvVar5,puVar8,uVar7);
        }
        *(undefined1 *)((long)pvVar5 + uVar7) = 0;
        uVar3 = *(undefined4 *)((long)puVar6 + lVar10 + 0x18);
        *(undefined1 *)((long)pvVar4 + lVar10 + 0x1c) =
             *(undefined1 *)((long)puVar6 + lVar10 + 0x1c);
        *(undefined4 *)((long)pvVar4 + lVar10 + 0x18) = uVar3;
        lVar10 = lVar10 + 0x20;
      } while ((ulong)uVar2 * 0x20 - lVar10 != 0);
      puVar6 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar10 = (ulong)*param_1 << 5;
        do {
          if (*(char *)((long)puVar6 + 0x17) < '\0') {
            operator_delete((void *)*puVar6);
          }
          puVar6 = puVar6 + 4;
          lVar10 = lVar10 + -0x20;
        } while (lVar10 != 0);
        puVar6 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar6 != (undefined8 *)0x0) {
      operator_delete__(puVar6);
    }
    *(void **)(param_1 + 2) = pvVar4;
  }
  return;
}




void thunk_FUN_10030bc7c(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  iVar11 = FUN_1004f1698(param_1 + 0x28);
  if ((iVar11 != 0) && (iVar11 = FUN_1004f1680(param_1 + 0x28), iVar11 != 0)) {
    std::string::operator=((string *)(param_1 + 0x90),(string *)(param_1 + 0x60));
    *(undefined2 *)(param_1 + 0xa8) = *(undefined2 *)(param_1 + 0x78);
    if (*(uint *)(param_1 + 0x50) != 0) {
      pbVar13 = *(byte **)(param_1 + 0x58);
      pbVar3 = pbVar13 + (ulong)*(uint *)(param_1 + 0x50) * 0x20;
      puVar14 = *(undefined8 **)(param_1 + 0x88);
      uVar8 = *(uint *)(param_1 + 0x80);
      do {
        puVar15 = puVar14;
        if (uVar8 != 0) {
          do {
            bVar9 = *(byte *)((long)puVar15 + 0x17);
            sVar4 = puVar15[1];
            if (-1 < (char)bVar9) {
              sVar4 = (ulong)bVar9;
            }
            bVar10 = pbVar13[0x17];
            sVar5 = *(size_t *)(pbVar13 + 8);
            if (-1 < (char)bVar10) {
              sVar5 = (ulong)bVar10;
            }
            if (sVar4 == sVar5) {
              puVar6 = (void *)*puVar15;
              if (-1 < (char)bVar9) {
                puVar6 = puVar15;
              }
              pbVar7 = *(byte **)pbVar13;
              if (-1 < (char)bVar10) {
                pbVar7 = pbVar13;
              }
              if ((char)bVar9 < '\0') {
                if ((sVar4 == 0) || (iVar11 = _memcmp(puVar6,pbVar7,sVar4), iVar11 == 0))
                goto LAB_10030bd7c;
              }
              else if (sVar4 == 0) {
LAB_10030bd7c:
                *(undefined4 *)(puVar15 + 3) = *(undefined4 *)(pbVar13 + 0x18);
                *(byte *)((long)puVar15 + 0x1c) = pbVar13[0x1c];
              }
              else if ((uint)*pbVar7 == ((uint)(void *)*puVar15 & 0xff)) {
                uVar12 = 1;
                do {
                  if (bVar9 == uVar12) goto LAB_10030bd7c;
                  pbVar1 = (byte *)((long)puVar15 + uVar12);
                  pbVar2 = pbVar7 + uVar12;
                  uVar12 = uVar12 + 1;
                } while (*pbVar1 == *pbVar2);
              }
            }
            puVar15 = puVar15 + 4;
          } while (puVar15 != puVar14 + (ulong)uVar8 * 4);
        }
        pbVar13 = pbVar13 + 0x20;
      } while (pbVar13 != pbVar3);
    }
    *(undefined1 *)(param_1 + 0xaa) = 1;
    if (*(int *)(param_1 + 0x18) != 0) {
      puVar14 = *(undefined8 **)(param_1 + 0x20);
      do {
        if ((code *)*puVar14 == (code *)0x0) {
          (*(code *)puVar14[3])(puVar14[2],param_1);
        }
        else {
          (*(code *)*puVar14)(param_1);
        }
        puVar14 = puVar14 + 4;
      } while (puVar14 !=
               (undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20));
    }
  }
  return;
}




void FUN_10030c0b8(void)

{
  long lVar1;
  
  if (DAT_101d23858 == 0) {
    operator_new(0x20);
    lVar1 = FUN_10030c170();
    DAT_101d23858 = lVar1;
    *(undefined2 *)(lVar1 + 0x18) = 0;
    *(undefined1 *)(lVar1 + 0x1a) = 0;
  }
  return;
}




void FUN_10030c0f4(void)

{
  if (DAT_101d23858 != (long *)0x0) {
    if (((char)DAT_101d23858[3] != '\0') && (FUN_100130ca8(), DAT_101d23858 == (long *)0x0)) {
      DAT_101d23858 = (long *)0x0;
      return;
    }
    (**(code **)(*DAT_101d23858 + 8))();
  }
  DAT_101d23858 = (long *)0x0;
  return;
}




void FUN_10030c13c(void)

{
  if ((DAT_101d23858 != 0) && (*(char *)(DAT_101d23858 + 0x18) != '\0')) {
    FUN_100130ca8();
    return;
  }
  return;
}




void FUN_10030c158(void)

{
  long lVar1;
  
  lVar1 = DAT_101d23858;
  if (DAT_101d23858 != 0) {
    *(undefined2 *)(DAT_101d23858 + 0x18) = 0;
    *(undefined1 *)(lVar1 + 0x1a) = 0;
  }
  return;
}




undefined8 FUN_10030c170(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10014f4a0();
  *puVar1 = &PTR_FUN_10148f840;
  *(undefined2 *)(puVar1 + 3) = 0;
  *(undefined1 *)((long)puVar1 + 0x1a) = 0;
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,FUN_10030c1cc,0);
  return param_1;
}




void FUN_10030c1cc(long param_1)

{
  *(undefined1 *)(param_1 + 0x19) = 1;
  FUN_10030c254();
  return;
}




void FUN_10030c1d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148f840;
  FUN_1004e1b58(&DAT_101d234d8,param_1);
  FUN_10014f51c(param_1);
  return;
}




void FUN_10030c214(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148f840;
  FUN_1004e1b58(&DAT_101d234d8,param_1);
  pvVar1 = (void *)FUN_10014f51c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10030c254(long param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  void *local_58 [2];
  char local_41;
  undefined8 local_40;
  long local_38;
  
  uVar3 = FUN_100126b4c();
  if (((((uVar3 & 1) == 0) && (*(char *)(param_1 + 0x18) == '\0')) &&
      (*(char *)(param_1 + 0x19) != '\0')) && (*(char *)(param_1 + 0x1a) != '\0')) {
    lVar4 = FUN_1004f0338();
    if (*(int *)(lVar4 + 0x98) == 1) {
      lVar4 = FUN_100130dd4();
      lVar5 = FUN_1004d29d0();
      if (lVar4 <= lVar5 + -0x3840) {
        lVar4 = FUN_10016c2f0();
        if (*(int *)(lVar4 + 0x38) < 1) {
          local_40 = 0;
          local_38 = 0;
          FUN_100136d8c(&local_40);
          if ((uint)local_40 != 0) {
            uVar3 = local_38 + 0x18;
            lVar4 = local_38;
            uVar6 = (uint)local_40;
            do {
              uVar1 = *(ulong *)(uVar3 + 8);
              if (-1 < (char)*(byte *)(uVar3 + 0x17)) {
                uVar1 = (ulong)*(byte *)(uVar3 + 0x17);
              }
              if (uVar1 == 0x1b) {
                iVar2 = std::string::compare(uVar3,0,(char *)0xffffffffffffffff,0x1013e2c78);
                if (iVar2 == 0) {
                  plVar7 = operator_new(0xc10);
                  FUN_10030c424();
                  FUN_10001549c(local_58,"EARLY_OFFER_POPUP");
                  FUN_10022b4d4(plVar7,uVar3 - 0x18,uVar3,local_58);
                  if (local_41 < '\0') {
                    operator_delete(local_58[0]);
                  }
                  (**(code **)(*plVar7 + 0x170))(plVar7);
                  goto LAB_10030c3b4;
                }
                lVar4 = local_38;
                uVar6 = (uint)local_40;
              }
              lVar5 = uVar3 + 0x60;
              uVar3 = uVar3 + 0x78;
            } while (lVar5 != lVar4 + (ulong)uVar6 * 0x78);
          }
          plVar7 = (long *)0x0;
LAB_10030c3b4:
          iVar2 = FUN_100219ddc(plVar7);
          if (iVar2 == 0) {
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 8))(plVar7);
            }
          }
          else {
            FUN_100219df4(plVar7);
            FUN_100130ca8();
            *(undefined1 *)(param_1 + 0x18) = 1;
            lVar4 = plVar7[0x181];
            if (lVar4 != 0) {
              plVar7 = (long *)(lVar4 + 0x68);
              if (*(char *)(lVar4 + 0x7f) < '\0') {
                plVar7 = (long *)*plVar7;
              }
              FUN_100104548(plVar7);
            }
          }
          FUN_100135c64(&local_40,1);
        }
      }
    }
  }
  return;
}




void FUN_10030c418(long param_1)

{
  *(undefined1 *)(param_1 + 0x1a) = 1;
  FUN_10030c254();
  return;
}




long FUN_10030c424(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1002479cc();
  *puVar1 = &PTR_thunk_FUN_100247a5c_10148fbd8;
  puVar1[0x6d] = &PTR_FUN_10148fdc0;
  puVar1[0x17e] = &PTR_FUN_10148fde8;
  puVar1[0x181] = 0;
  FUN_1006423ec(puVar1 + 0x7c,1);
  FUN_1006423ec(param_1 + 0x4d0,1);
  FUN_1006423ec(param_1 + 0x588,1);
  FUN_1006423ec(param_1 + 0xac0,1);
  FUN_1006423ec(param_1 + 200,1);
  FUN_1006423ec(param_1 + 0x180,1);
  FUN_1006423ec(param_1 + 0x270,1);
  return param_1;
}




undefined1  [16] FUN_10030c4bc(long param_1)

{
  long *plVar1;
  undefined4 extraout_s0;
  undefined4 uVar2;
  undefined4 extraout_var;
  undefined4 uVar4;
  undefined8 extraout_var_00;
  undefined8 uVar5;
  undefined1 auVar3 [16];
  
  if (*(int *)(param_1 + 0x378) == 0) {
    uVar4 = 0;
    uVar5 = 0;
    uVar2 = (undefined4)DAT_101dc1cb8;
  }
  else {
    plVar1 = (long *)(**(code **)(*(long *)**(undefined8 **)(param_1 + 0x380) + 0x10))();
    (**(code **)(*plVar1 + 0x48))();
    uVar2 = extraout_s0;
    uVar4 = extraout_var;
    uVar5 = extraout_var_00;
  }
  auVar3._4_4_ = uVar4;
  auVar3._0_4_ = uVar2;
  auVar3._8_8_ = uVar5;
  return auVar3;
}




bool FUN_10030c504(undefined8 param_1,long param_2,int param_3)

{
  return *(char *)(param_2 + 0x591) != '\0' && param_3 == 0;
}




void FUN_10030c520(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1,uVar1,1);
  param_1[0x181] = (long)param_2;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  if (*(float *)(lVar2 + 0x44) != 0.0) {
    *(undefined4 *)(lVar2 + 0x44) = 0;
    FUN_1000200a0();
    return;
  }
  return;
}




void FUN_10030c59c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100247a5c();
  operator_delete(pvVar1);
  return;
}




void FUN_10030c5b0(long param_1)

{
  FUN_100247a5c(param_1 + -0x368);
  return;
}




void FUN_10030c5b8(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100247a5c(param_1 + -0x368);
  operator_delete(pvVar1);
  return;
}




void FUN_10030c5d0(long param_1)

{
  FUN_100247a5c(param_1 + -0xbf0);
  return;
}




void FUN_10030c5d8(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100247a5c(param_1 + -0xbf0);
  operator_delete(pvVar1);
  return;
}




void FUN_10030c5f0(void)

{
  void *pvVar1;
  
  operator_new(0x108);
  DAT_101d23860 = FUN_10030c918();
  pvVar1 = operator_new(0x40);
  FUN_1004e4464(pvVar1,0);
  DAT_101e45d50 = pvVar1;
  return;
}




void FUN_10030c638(void)

{
  pthread_mutex_t *ppVar1;
  
  if (DAT_101d23860 != (long *)0x0) {
    (**(code **)(*DAT_101d23860 + 8))();
  }
  ppVar1 = DAT_101e45d50;
  DAT_101d23860 = (long *)0x0;
  if (DAT_101e45d50 != (pthread_mutex_t *)0x0) {
    _pthread_mutex_destroy(DAT_101e45d50);
    operator_delete(ppVar1);
  }
  DAT_101e45d50 = (pthread_mutex_t *)0x0;
  return;
}




bool FUN_10030c68c(void)

{
  return DAT_101d23860 != 0;
}




undefined8 FUN_10030c6a0(void)

{
  return DAT_101d23860;
}




bool FUN_10030c6ac(void)

{
  bool bVar1;
  int iVar2;
  void *local_50;
  ulong local_48;
  byte local_39;
  void *local_38;
  ulong local_30;
  byte local_21;
  
  FUN_10052b2d4(&local_38);
  if (-1 < (char)local_21) {
    local_30 = (ulong)local_21;
  }
  if ((local_30 == 7) &&
     (iVar2 = std::string::compare((ulong)&local_38,0,(char *)0xffffffffffffffff,0x1013dfa31),
     iVar2 == 0)) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_10016a9c8();
    if (iVar2 == 7) {
      bVar1 = true;
    }
    else {
      FUN_10052b2d4(&local_50);
      if (-1 < (char)local_39) {
        local_48 = (ulong)local_39;
      }
      if (local_48 == 5) {
        iVar2 = std::string::compare((ulong)&local_50,0,(char *)0xffffffffffffffff,0x1013ef74f);
        bVar1 = iVar2 == 0;
        if (-1 < (char)local_39) goto LAB_10030c780;
      }
      else {
        bVar1 = false;
        if (((uint)(int)(char)local_39 >> 7 & 1) == 0) goto LAB_10030c780;
      }
      operator_delete(local_50);
    }
  }
LAB_10030c780:
  if ((char)local_21 < '\0') {
    operator_delete(local_38);
  }
  return bVar1;
}




bool FUN_10030c7a4(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_1004e3634();
  if (iVar1 == 0x12) {
    iVar1 = FUN_1004e3634(param_1);
    if (iVar1 != 1) {
      uVar2 = 0;
      do {
        iVar1 = FUN_1004e363c(param_1,uVar2);
        if (9 < iVar1 - 0x30U) {
          return false;
        }
        uVar2 = uVar2 + 1;
        iVar1 = FUN_1004e3634(param_1);
      } while (uVar2 < iVar1 - 1U);
    }
    iVar1 = FUN_1004e3634(param_1);
    uVar2 = FUN_1004e363c(param_1,iVar1 + -1);
    if ((uVar2 - 0x30 < 10) || ((uVar2 & 0xffdf) == 0x58)) {
      iVar1 = FUN_1004e363c(param_1,6);
      iVar3 = FUN_1004e363c(param_1,7);
      iVar4 = FUN_1004e363c(param_1,8);
      iVar5 = FUN_1004e363c(param_1,9);
      if ((iVar3 * 100 + iVar1 * 1000 + iVar4 * 10 + iVar5) - 0xd7bcU < 0x7e) {
        iVar1 = FUN_1004e363c(param_1,10);
        iVar3 = FUN_1004e363c(param_1,0xb);
        if ((iVar3 + iVar1 * 10) - 0x210U < 0xd) {
          iVar1 = FUN_1004e363c(param_1,0xc);
          iVar3 = FUN_1004e363c(param_1,0xd);
          return (iVar3 + iVar1 * 10) - 0x210U < 0x20;
        }
      }
    }
  }
  return false;
}




undefined8 * FUN_10030c918(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_30;
  code *pcStack_28;
  
  lVar1 = FUN_1004f0a20();
  FUN_10014f4a0(lVar1 + 0x18);
  *param_1 = &PTR_thunk_FUN_10030c9d4_101490180;
  param_1[3] = &PTR_FUN_1014901b8;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_1004f1580(param_1 + 8);
  param_1[8] = &PTR_FUN_101454740;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  FUN_1004f1580(param_1 + 0x14);
  param_1[0x14] = &PTR_FUN_101454740;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xf0;
  pcStack_28 = FUN_10030d0ac;
  local_30 = param_1;
  FUN_100643618(0x3dcccccd,&local_30,0,1);
  return param_1;
}




void FUN_10030c9d4(undefined8 *param_1)

{
  undefined8 *local_40;
  code *pcStack_38;
  
  *param_1 = &PTR_thunk_FUN_10030c9d4_101490180;
  param_1[3] = &PTR_FUN_1014901b8;
  pcStack_38 = FUN_10030d0ac;
  local_40 = param_1;
  FUN_100643a8c(&local_40);
  param_1[0x14] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0xff) < '\0') {
    operator_delete((void *)param_1[0x1d]);
  }
  if (*(char *)((long)param_1 + 0xdf) < '\0') {
    operator_delete((void *)param_1[0x19]);
  }
  FUN_1004f15a8(param_1 + 0x14);
  param_1[8] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    operator_delete((void *)param_1[0x11]);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    operator_delete((void *)param_1[0xd]);
  }
  FUN_1004f15a8(param_1 + 8);
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_10014f51c(param_1 + 3);
  FUN_1004f0a9c(param_1);
  return;
}




void thunk_FUN_10030c9d4(void)

{
  FUN_10030c9d4();
  return;
}




void FUN_10030cab8(long param_1)

{
  FUN_10030c9d4(param_1 + -0x18);
  return;
}




void FUN_10030cac0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10030c9d4();
  operator_delete(pvVar1);
  return;
}




void FUN_10030cad4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10030c9d4(param_1 + -0x18);
  operator_delete(pvVar1);
  return;
}




void FUN_10030caec(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined **local_90;
  undefined8 local_88;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined5 local_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  void *local_68 [2];
  char local_51;
  undefined4 local_50;
  char local_4c;
  void *local_48;
  ulong local_40;
  byte local_31;
  
  iVar2 = FUN_1004f1698(param_1 + 0x40);
  if (iVar2 == 0) {
    return;
  }
  _pthread_mutex_lock(DAT_101e45d50);
  local_88 = *(undefined8 *)(param_1 + 0x48);
  uStack_80 = (undefined5)*(undefined8 *)(param_1 + 0x50);
  uStack_73 = (undefined3)*(undefined8 *)(param_1 + 0x5d);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x5d) >> 0x18);
  uStack_7b = (undefined3)*(undefined8 *)(param_1 + 0x55);
  local_78 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x55) >> 0x18);
  local_90 = &PTR_FUN_101454740;
  FUN_10003330c(local_68,param_1 + 0x68);
  local_50 = *(undefined4 *)(param_1 + 0x80);
  local_4c = *(char *)(param_1 + 0x84);
  FUN_10003330c(&local_48,param_1 + 0x88);
  local_88 = 0;
  uStack_80 = 0;
  uStack_7b = 0;
  local_78 = 0;
  uStack_73 = 0;
  _pthread_mutex_unlock(DAT_101e45d50);
  iVar2 = FUN_1004f1680(&local_90);
  if (iVar2 == 0) goto LAB_10030cd50;
  if (local_4c != '\0') {
    uVar3 = FUN_1004e0150("MAIN_PROFILE_REG_STATUS_SUCCESS",0);
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(uVar3,&DAT_101d91650,uVar4,0,0);
    *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) & 0xfc | 2;
    if (*(int *)(param_1 + 0x30) != 0) {
      puVar8 = *(undefined8 **)(param_1 + 0x38);
      do {
        if ((code *)*puVar8 == (code *)0x0) {
          (*(code *)puVar8[3])(puVar8[2],param_1);
        }
        else {
          (*(code *)*puVar8)(param_1);
        }
        puVar8 = puVar8 + 4;
      } while (puVar8 != (undefined8 *)
                         (*(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x30) * 0x20));
    }
    goto LAB_10030cd50;
  }
  uVar6 = (ulong)local_31;
  uVar1 = local_40;
  if (-1 < (char)local_31) {
    uVar1 = uVar6;
  }
  if (uVar1 == 0x16) {
    iVar2 = std::string::compare((ulong)&local_48,0,(char *)0xffffffffffffffff,0x1013ef7db);
    if (iVar2 != 0) {
      uVar6 = (ulong)local_31;
      goto LAB_10030cc70;
    }
    pcVar7 = "GOVERNMENTID_DIALOG_TEXT_DUPE_PHONE_NUMBER";
  }
  else {
LAB_10030cc70:
    uVar1 = local_40;
    if (-1 < (char)local_31) {
      uVar1 = uVar6;
    }
    if (uVar1 == 0x10) {
      iVar2 = std::string::compare((ulong)&local_48,0,(char *)0xffffffffffffffff,0x1013ef84b);
      if (iVar2 == 0) {
        pcVar7 = "GOVERNMENTID_DIALOG_TEXT_TOO_YOUNG";
        goto LAB_10030cd04;
      }
      uVar6 = (ulong)local_31;
    }
    if (-1 < (char)local_31) {
      local_40 = uVar6;
    }
    if ((local_40 != 10) ||
       (iVar2 = std::string::compare((ulong)&local_48,0,(char *)0xffffffffffffffff,0x1013ef87f),
       iVar2 != 0)) goto LAB_10030cd50;
    pcVar7 = "GOVERNMENTID_DIALOG_TEXT_INVALID_ID";
  }
LAB_10030cd04:
  uVar3 = FUN_1004e0150("GOVERNMENTID_DIALOG_TITLE_REGISTRATION_FAILED",0);
  uVar4 = FUN_1004e0150(pcVar7,0);
  uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar3,uVar4,uVar5,0,0);
LAB_10030cd50:
  local_90 = &PTR_FUN_101454740;
  if ((char)local_31 < '\0') {
    operator_delete(local_48);
  }
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  FUN_1004f15a8(&local_90);
  return;
}




void FUN_10030cd90(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined **local_90;
  undefined8 local_88;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined5 local_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  void *local_68 [2];
  char local_51;
  undefined4 local_50;
  char local_4c;
  void *local_48 [2];
  char local_31;
  
  iVar2 = FUN_1004f1698(param_1 + 0xa0);
  if (iVar2 != 0) {
    _pthread_mutex_lock(DAT_101e45d50);
    local_88 = *(undefined8 *)(param_1 + 0xa8);
    uStack_80 = (undefined5)*(undefined8 *)(param_1 + 0xb0);
    uStack_73 = (undefined3)*(undefined8 *)(param_1 + 0xbd);
    uStack_70 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0xbd) >> 0x18);
    uStack_7b = (undefined3)*(undefined8 *)(param_1 + 0xb5);
    local_78 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0xb5) >> 0x18);
    local_90 = &PTR_FUN_101454740;
    FUN_10003330c(local_68,param_1 + 200);
    local_50 = *(undefined4 *)(param_1 + 0xe0);
    local_4c = *(char *)(param_1 + 0xe4);
    FUN_10003330c(local_48,param_1 + 0xe8);
    local_88 = 0;
    uStack_80 = 0;
    uStack_7b = 0;
    local_78 = 0;
    uStack_73 = 0;
    _pthread_mutex_unlock(DAT_101e45d50);
    iVar2 = FUN_1004f1680(&local_90);
    if (iVar2 != 0) {
      bVar1 = *(byte *)(param_1 + 0x100) & 0xfc;
      if (local_4c == '\0') {
        *(byte *)(param_1 + 0x100) = bVar1 | 1;
        FUN_10030cf24(param_1);
      }
      else {
        *(byte *)(param_1 + 0x100) = bVar1 | 2;
      }
      if (*(int *)(param_1 + 0x30) != 0) {
        puVar3 = *(undefined8 **)(param_1 + 0x38);
        do {
          if ((code *)*puVar3 == (code *)0x0) {
            (*(code *)puVar3[3])(puVar3[2],param_1);
          }
          else {
            (*(code *)*puVar3)(param_1);
          }
          puVar3 = puVar3 + 4;
        } while (puVar3 != (undefined8 *)
                           (*(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x30) * 0x20));
      }
    }
    local_90 = &PTR_FUN_101454740;
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    if (local_51 < '\0') {
      operator_delete(local_68[0]);
    }
    FUN_1004f15a8(&local_90);
  }
  return;
}




void FUN_10030ced4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1004f057c(param_2,param_3,param_4,param_5,param_6,param_1 + 0x40);
  return;
}




bool FUN_10030cef4(long param_1)

{
  return (*(byte *)(param_1 + 0x100) & 3) == 2;
}




undefined8 FUN_10030cf08(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x100) & 3) == 1) {
    uVar1 = FUN_10030c6ac();
    return uVar1;
  }
  return 0;
}




void FUN_10030cf24(long param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  if ((~*(byte *)(param_1 + 0x100) & 0xc) == 0) {
    lVar3 = FUN_10015d3ec();
    if (*(char *)(lVar3 + 0x567c) == '\0') {
      lVar3 = FUN_10016c2f0();
      bVar1 = 0 < *(int *)(lVar3 + 0x38);
      goto LAB_10030cf5c;
    }
  }
  bVar1 = true;
LAB_10030cf5c:
  if ((*(byte *)(param_1 + 0x100) & 3) == 1) {
    uVar2 = FUN_10030c6ac();
    if (((uVar2 ^ 1) & 1) == 0 && !bVar1) {
      uVar4 = FUN_1004e0150("GOVERNMENT_ID_REGISTER_REMINDER_DIALOG_TITLE",0);
      thunk_FUN_1004e439c(auStack_30,uVar4);
      uVar4 = FUN_1004e0150("GOVERNMENT_ID_REGISTER_REMINDER_DIALOG_MSG",0);
      thunk_FUN_1004e439c(auStack_40,uVar4);
      uVar4 = FUN_1004e0150("GOVERNMENT_ID_REGISTER_REMINDER_DIALOG_BUTTON",0);
      thunk_FUN_1004e439c(auStack_50,uVar4);
      FUN_1001e3090(auStack_30,auStack_40,auStack_50,param_1,thunk_FUN_10021a248);
      *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) & 0xfb;
      if (local_48 != (void *)0x0) {
        operator_delete__(local_48);
      }
      if (local_38 != (void *)0x0) {
        operator_delete__(local_38);
      }
      if (local_28 != (void *)0x0) {
        operator_delete__(local_28);
      }
    }
  }
  return;
}




void FUN_10030d044(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10030c6ac();
  if (iVar1 != 0) {
    *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) | 4;
    FUN_1004f05c0(param_1 + 0xa0);
    return;
  }
  return;
}




void FUN_10030d084(long param_1)

{
  *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) | 8;
  FUN_10030cf24();
  return;
}




void FUN_10030d094(long param_1)

{
  *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) | 8;
  FUN_10030cf24(param_1 + -0x18);
  return;
}




void FUN_10030d0ac(undefined8 param_1)

{
  FUN_10030caec();
  FUN_10030cd90(param_1);
  return;
}




void FUN_10030d0d0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38);
  puVar1 = (undefined4 *)FUN_10030d120(param_1,local_38);
  *puVar1 = param_3;
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




long FUN_10030d120(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_10030dc28(param_1,&local_38,param_2);
  pvVar2 = (void *)*puVar1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = operator_new(0x40);
    FUN_10003330c((long)pvVar2 + 0x20,param_2);
    *(undefined4 *)((long)pvVar2 + 0x38) = 0;
    FUN_10030dbd4(param_1,local_38,puVar1,pvVar2);
  }
  return (long)pvVar2 + 0x38;
}




undefined4 FUN_10030d19c(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38);
  puVar2 = (undefined4 *)FUN_10030d120(param_1,local_38);
  uVar1 = *puVar2;
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return uVar1;
}




void FUN_10030d1ec(void)

{
  int iVar1;
  int iVar2;
  
  FUN_10030d19c();
  iVar1 = FUN_100331d3c();
  iVar2 = FUN_100331e08(iVar1 + 1);
  if (iVar2 != 0) {
    iVar1 = iVar1 + 1;
  }
  FUN_100331da8(iVar1);
  return;
}




void FUN_10030d220(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10030d220_101490550;
  FUN_10030d850(param_1 + 5,param_1[6]);
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_10014f51c(param_1);
  return;
}




void thunk_FUN_10030d220(void)

{
  FUN_10030d220();
  return;
}




void FUN_10030d268(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10030d220();
  operator_delete(pvVar1);
  return;
}




long FUN_10030d27c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_10030dd4c(param_1,&local_38,param_2);
  pvVar2 = (void *)*puVar1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = operator_new(0x50);
    FUN_10003330c((long)pvVar2 + 0x20,param_2);
    *(undefined8 *)((long)pvVar2 + 0x48) = 0;
    *(undefined8 *)((long)pvVar2 + 0x40) = 0;
    *(undefined8 **)((long)pvVar2 + 0x38) = (undefined8 *)((long)pvVar2 + 0x40);
    FUN_10030ddf0(param_1,local_38,puVar1,pvVar2);
  }
  return (long)pvVar2 + 0x38;
}




void FUN_10030d304(long param_1,long param_2)

{
  undefined8 **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 **ppuVar7;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar5 = 0;
    do {
      local_70 = 0;
      uStack_68 = 0;
      lVar2 = *(long *)(param_2 + 0x30);
      local_78 = &local_70;
      if (*(int *)(lVar2 + uVar5 * 0x28) != 0) {
        lVar4 = 0;
        uVar6 = 0;
        do {
          lVar3 = *(long *)(lVar2 + uVar5 * 0x28 + 8);
          lVar2 = lVar3 + lVar4;
          if (*(char *)(lVar2 + 0x17) < '\0') {
            lVar2 = *(long *)(lVar3 + lVar4);
          }
          FUN_10030d0d0(&local_78,lVar2,*(undefined4 *)(lVar3 + lVar4 + 0x18));
          uVar6 = uVar6 + 1;
          lVar2 = *(long *)(param_2 + 0x30);
          lVar4 = lVar4 + 0x20;
        } while (uVar6 < *(uint *)(lVar2 + uVar5 * 0x28));
      }
      ppuVar1 = (undefined8 **)FUN_10030d27c(param_1 + 0x28,lVar2 + uVar5 * 0x28 + 0x10);
      if (ppuVar1 != &local_78) {
        ppuVar7 = ppuVar1 + 1;
        FUN_10030d94c(ppuVar1,*ppuVar7);
        *ppuVar1 = ppuVar7;
        ppuVar1[2] = (undefined8 *)0x0;
        *ppuVar7 = (undefined8 *)0x0;
        FUN_10030d8ac(ppuVar1,local_78,&local_70);
      }
      FUN_10030d94c(&local_78,local_70);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_2 + 0x28));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    do {
      if (*(code **)(lVar2 + 8) == (code *)0x0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
      }
      else {
        (**(code **)(lVar2 + 8))();
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != *(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20);
  }
  return;
}




void FUN_10030d468(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20);
  }
  return;
}




void FUN_10030d4c0(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *local_38 [2];
  char local_21;
  undefined8 local_20;
  undefined8 uStack_18;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    lVar2 = FUN_10015d3ec();
    if (*(int *)(lVar2 + 0x55cc) == 8) {
      local_20 = 0;
      uStack_18 = 0;
      lVar2 = FUN_10015d3ec();
      FUN_10003330c(local_38,lVar2 + 0x5508);
      FUN_10001617c(&local_20,local_38);
      uVar3 = FUN_10015d3ec();
      FUN_100166b08(uVar3,&local_20);
      if (local_21 < '\0') {
        operator_delete(local_38[0]);
      }
      FUN_10001629c(&local_20,1);
    }
  }
  return;
}




undefined8 FUN_10030d540(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = FUN_10030de44(param_1 + 0x28);
  if (param_1 + 0x30 == lVar1) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_10030d27c(param_1 + 0x28,param_2);
    local_48 = &local_40;
    local_40 = 0;
    uStack_38 = 0;
    FUN_10030d8ac(&local_48,*puVar2,puVar2 + 1);
    FUN_10030d19c(&local_48,param_3);
    uVar3 = FUN_100331d3c();
    FUN_10030d94c(&local_48,local_40);
  }
  return uVar3;
}




undefined8 FUN_10030d5e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = FUN_10030de44(param_1 + 0x28);
  if (param_1 + 0x30 == lVar1) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_10030d27c(param_1 + 0x28,param_2);
    local_48 = &local_40;
    local_40 = 0;
    uStack_38 = 0;
    FUN_10030d8ac(&local_48,*puVar2,puVar2 + 1);
    uVar3 = FUN_10030d19c(&local_48,param_3);
    FUN_10030d94c(&local_48,local_40);
  }
  return uVar3;
}




undefined8 FUN_10030d684(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = FUN_10030de44(param_1 + 0x28);
  if (param_1 + 0x30 == lVar1) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_10030d27c(param_1 + 0x28,param_2);
    local_48 = &local_40;
    local_40 = 0;
    uStack_38 = 0;
    FUN_10030d8ac(&local_48,*puVar2,puVar2 + 1);
    uVar3 = FUN_10030d1ec(&local_48,param_3);
    FUN_10030d94c(&local_48,local_40);
  }
  return uVar3;
}




undefined8 FUN_10030d724(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = FUN_10030de44(param_1 + 0x28);
  if (param_1 + 0x30 == lVar1) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_10030d27c(param_1 + 0x28,param_2);
    local_48 = &local_40;
    local_40 = 0;
    uStack_38 = 0;
    FUN_10030d8ac(&local_48,*puVar2,puVar2 + 1);
    FUN_10030d19c(&local_48,param_3);
    FUN_100331d3c();
    uVar3 = FUN_100331da8();
    FUN_10030d94c(&local_48,local_40);
  }
  return uVar3;
}




void FUN_10030d7cc(void)

{
  operator_new(0x40);
  DAT_101d23868 = (undefined8 *)FUN_10014f4a0();
  *DAT_101d23868 = &PTR_thunk_FUN_10030d220_101490550;
  DAT_101d23868[3] = 0;
  DAT_101d23868[4] = 0;
  DAT_101d23868[7] = 0;
  DAT_101d23868[6] = 0;
  DAT_101d23868[5] = DAT_101d23868 + 6;
  return;
}




void FUN_10030d810(void)

{
  if (DAT_101d23868 != (long *)0x0) {
    (**(code **)(*DAT_101d23868 + 8))();
  }
  DAT_101d23868 = (long *)0x0;
  return;
}




undefined8 FUN_10030d844(void)

{
  return DAT_101d23868;
}




void FUN_10030d850(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10030d850(param_1,*param_2);
    FUN_10030d850(param_1,param_2[1]);
    FUN_10030d94c(param_2 + 7,param_2[8]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      operator_delete((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_10030d8ac(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 != param_3) {
    do {
      FUN_10030d99c(param_1,param_1 + 8,param_2 + 4,param_2 + 4);
      plVar1 = (long *)param_2[1];
      if ((long *)param_2[1] == (long *)0x0) {
        plVar1 = param_2 + 2;
        plVar2 = (long *)*plVar1;
        if ((long *)*plVar2 != param_2) {
          do {
            lVar3 = *plVar1;
            plVar1 = (long *)(lVar3 + 0x10);
            plVar2 = (long *)*plVar1;
          } while (*plVar2 != lVar3);
        }
      }
      else {
        do {
          plVar2 = plVar1;
          plVar1 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
      param_2 = plVar2;
    } while (plVar2 != param_3);
  }
  return;
}




void FUN_10030d94c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10030d94c(param_1,*param_2);
    FUN_10030d94c(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      operator_delete((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




undefined1  [16]
FUN_10030d99c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  puVar2 = (undefined8 *)FUN_10030da2c(param_1,param_2,&local_38,auStack_40,param_3);
  pvVar3 = (void *)*puVar2;
  bVar1 = pvVar3 == (void *)0x0;
  if (bVar1) {
    pvVar3 = operator_new(0x40);
    FUN_10003330c((long)pvVar3 + 0x20,param_4);
    *(undefined4 *)((long)pvVar3 + 0x38) = *(undefined4 *)(param_4 + 0x18);
    FUN_10030dbd4(param_1,local_38,puVar2,pvVar3);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = pvVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}




long * FUN_10030da2c(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (param_1 + 1 != param_2) {
    iVar2 = FUN_10030dccc(param_5,param_2 + 4);
    if (iVar2 == 0) {
      iVar2 = FUN_10030dccc(param_2 + 4,param_5);
      if (iVar2 == 0) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar3 = (long *)param_2[1];
      if ((long *)param_2[1] == (long *)0x0) {
        plVar3 = param_2 + 2;
        plVar5 = (long *)*plVar3;
        if ((long *)*plVar5 != param_2) {
          do {
            lVar4 = *plVar3;
            plVar3 = (long *)(lVar4 + 0x10);
            plVar5 = (long *)*plVar3;
          } while (*plVar5 != lVar4);
        }
      }
      else {
        do {
          plVar5 = plVar3;
          plVar3 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      if ((plVar5 == param_1 + 1) || (iVar2 = FUN_10030dccc(param_5,plVar5 + 4), iVar2 != 0)) {
        if (param_2[1] != 0) {
          *param_3 = (long)plVar5;
          return plVar5;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      goto LAB_10030db8c;
    }
  }
  plVar5 = (long *)*param_2;
  plVar3 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar1 = plVar5;
    if (plVar5 == (long *)0x0) {
      plVar3 = param_2 + 2;
      if (*(long **)*plVar3 == param_2) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
        } while (*(long *)*plVar3 == lVar4);
      }
      plVar3 = (long *)*plVar3;
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)plVar3[1];
      } while ((long *)plVar3[1] != (long *)0x0);
    }
    iVar2 = FUN_10030dccc(plVar3 + 4,param_5);
    if (iVar2 == 0) {
LAB_10030db8c:
      plVar3 = (long *)FUN_10030dc28(param_1,param_3,param_5);
      return plVar3;
    }
  }
  if (plVar5 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar3;
    param_2 = plVar3 + 1;
  }
  return param_2;
}




void FUN_10030dbd4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




long * FUN_10030dc28(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    *param_2 = plVar2;
  }
  else {
    plVar2 = (long *)(param_1 + 8);
    do {
      while( true ) {
        plVar4 = plVar3;
        iVar1 = FUN_10030dccc(param_3,plVar4 + 4);
        if (iVar1 == 0) break;
        plVar2 = plVar4;
        plVar3 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) {
          *param_2 = plVar4;
          return plVar4;
        }
      }
      iVar1 = FUN_10030dccc(plVar4 + 4,param_3);
      if (iVar1 == 0) break;
      plVar2 = plVar4 + 1;
      plVar3 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    *param_2 = plVar4;
  }
  return plVar2;
}




uint FUN_10030dccc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar1 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar7) {
    uVar2 = (ulong)bVar7;
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    puVar4 = (void *)*param_1;
    if (-1 < (char)bVar7) {
      puVar4 = param_1;
    }
    puVar5 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar5 = param_2;
    }
    uVar8 = _memcmp(puVar4,puVar5,sVar3);
    if (uVar8 != 0) goto LAB_10030dd3c;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_10030dd3c:
  return uVar8 >> 0x1f;
}




long * FUN_10030dd4c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    *param_2 = plVar2;
  }
  else {
    plVar2 = (long *)(param_1 + 8);
    do {
      while( true ) {
        plVar4 = plVar3;
        iVar1 = FUN_10030dccc(param_3,plVar4 + 4);
        if (iVar1 == 0) break;
        plVar2 = plVar4;
        plVar3 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) {
          *param_2 = plVar4;
          return plVar4;
        }
      }
      iVar1 = FUN_10030dccc(plVar4 + 4,param_3);
      if (iVar1 == 0) break;
      plVar2 = plVar4 + 1;
      plVar3 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    *param_2 = plVar4;
  }
  return plVar2;
}




void FUN_10030ddf0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




long * FUN_10030de44(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      iVar2 = FUN_10030dccc(plVar5 + 4,param_2);
      lVar1 = 8;
      if (iVar2 == 0) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (iVar2 = FUN_10030dccc(param_2,plVar4 + 4), iVar2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}




void FUN_10030dec4(void)

{
  undefined8 *puVar1;
  
  if (DAT_101e45d58 == (undefined8 *)0x0) {
    puVar1 = operator_new(0x50);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    DAT_101e45d58 = (undefined8 *)FUN_10014f4a0();
    *DAT_101e45d58 = &PTR_FUN_1014908e8;
    DAT_101e45d58[4] = 0;
    DAT_101e45d58[3] = 0;
    DAT_101e45d58[6] = 0;
    DAT_101e45d58[5] = 0;
    DAT_101e45d58[7] = DAT_101e45d58 + 7;
    DAT_101e45d58[8] = DAT_101e45d58 + 7;
    DAT_101e45d58[9] = 0;
  }
  return;
}




void FUN_10030df2c(void)

{
  if (DAT_101e45d58 != (long *)0x0) {
    (**(code **)(*DAT_101e45d58 + 8))();
    DAT_101e45d58 = (long *)0x0;
  }
  return;
}




undefined8 FUN_10030df60(void)

{
  return DAT_101e45d58;
}




undefined8 FUN_10030df6c(undefined8 param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  void *local_48 [2];
  char local_31;
  
  FUN_10001549c(local_48,param_3);
  lVar3 = FUN_10022d41c(param_2 + 0x68,local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  if (param_2 + 0x70 != lVar3) {
    FUN_10001549c(local_48,param_3);
    pcVar4 = (char *)FUN_10030e02c(param_2 + 0x68,local_48);
    pcVar1 = *(char **)pcVar4;
    if (-1 < pcVar4[0x17]) {
      pcVar1 = pcVar4;
    }
    iVar2 = _atoi(pcVar1);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}




long FUN_10030e02c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 auStack_18 [8];
  
  plVar1 = (long *)FUN_100134860(param_1,auStack_18,param_2);
  if (*plVar1 != 0) {
    return *plVar1 + 0x38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100311a08();
}




int FUN_10030e060(undefined8 param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  void *local_48 [2];
  char local_31;
  
  FUN_10001549c(local_48,param_3);
  lVar3 = FUN_10022d41c(param_2 + 0x68,local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  if (param_2 + 0x70 == lVar3) {
    iVar2 = 0;
  }
  else {
    FUN_10001549c(local_48,param_3);
    pcVar4 = (char *)FUN_10030e02c(param_2 + 0x68,local_48);
    pcVar1 = *(char **)pcVar4;
    if (-1 < pcVar4[0x17]) {
      pcVar1 = pcVar4;
    }
    iVar2 = _atoi(pcVar1);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  return iVar2;
}




undefined1  [16] FUN_10030e118(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  void *local_58 [2];
  char local_41;
  undefined8 uVar4;
  
  FUN_10001549c(local_58,param_3);
  lVar2 = FUN_10022d41c(param_2 + 0x68,local_58);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (param_2 + 0x70 == lVar2) {
    auVar5 = ZEXT816(0);
  }
  else {
    FUN_10001549c(local_58,param_3);
    plVar3 = (long *)FUN_10030e02c(param_2 + 0x68,local_58);
    plVar1 = (long *)*plVar3;
    if (-1 < *(char *)((long)plVar3 + 0x17)) {
      plVar1 = plVar3;
    }
    auVar5 = FUN_1004d284c(plVar1);
    uVar6 = auVar5._8_8_;
    uVar4 = auVar5._0_8_;
    if (local_41 < '\0') {
      operator_delete(local_58[0]);
      auVar5._8_8_ = uVar6;
      auVar5._0_8_ = uVar4;
    }
  }
  return auVar5;
}




char * FUN_10030e1d8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  void *local_48 [2];
  char local_31;
  
  FUN_10001549c(local_48,param_3);
  lVar1 = FUN_10022d41c(param_2 + 0x68,local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  if (param_2 + 0x70 == lVar1) {
    pcVar3 = "";
  }
  else {
    FUN_10001549c(local_48,param_3);
    plVar2 = (long *)FUN_10030e02c(param_2 + 0x68,local_48);
    pcVar3 = (char *)*plVar2;
    if (-1 < *(char *)((long)plVar2 + 0x17)) {
      pcVar3 = (char *)plVar2;
    }
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  return pcVar3;
}




int FUN_10030e28c(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 local_30;
  
  lVar5 = 0;
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  do {
    pcVar1 = (char *)(param_3 + lVar5);
    lVar5 = lVar5 + 1;
  } while (*pcVar1 != '\0');
  FUN_100311a14(&local_60,param_3,(int)lVar5 + -1);
  piVar4 = (int *)FUN_100312068(&local_60,param_2);
  if (piVar4 != (int *)0x0) {
    uVar2 = piVar4[4];
    if ((uVar2 >> 10 & 1) != 0) {
      iVar3 = *piVar4;
      goto LAB_10030e310;
    }
    if ((uVar2 >> 0x14 & 1) != 0) {
      if ((uVar2 >> 0x16 & 1) == 0) {
        piVar4 = *(int **)piVar4;
      }
      iVar3 = _atoi((char *)piVar4);
      goto LAB_10030e310;
    }
  }
  iVar3 = 0;
LAB_10030e310:
  FUN_10031202c(&local_60);
  return iVar3;
}




bool FUN_10030e32c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 local_30;
  
  lVar5 = 0;
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  do {
    pcVar4 = (char *)(param_3 + lVar5);
    lVar5 = lVar5 + 1;
  } while (*pcVar4 != '\0');
  FUN_100311a14(&local_60,param_3,(int)lVar5 + -1);
  pcVar4 = (char *)FUN_100312068(&local_60,param_2);
  if (pcVar4 != (char *)0x0) {
    uVar1 = *(uint *)(pcVar4 + 0x10);
    if ((uVar1 >> 8 & 1) != 0) {
      bVar2 = uVar1 == 0x102;
      goto LAB_10030e3b8;
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      if ((uVar1 >> 0x16 & 1) == 0) {
        pcVar4 = *(char **)pcVar4;
      }
      iVar3 = _atoi(pcVar4);
      bVar2 = iVar3 != 0;
      goto LAB_10030e3b8;
    }
  }
  bVar2 = false;
LAB_10030e3b8:
  FUN_10031202c(&local_60);
  return bVar2;
}




undefined1  [16] FUN_10030e3d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  lVar4 = 0;
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  do {
    pcVar1 = (char *)(param_3 + lVar4);
    lVar4 = lVar4 + 1;
  } while (*pcVar1 != '\0');
  FUN_100311a14(&local_70,param_3,(int)lVar4 + -1);
  plVar3 = (long *)FUN_100312068(&local_70,param_2);
  auVar6 = ZEXT816(0);
  if (plVar3 != (long *)0x0) {
    uVar2 = *(uint *)(plVar3 + 2);
    if ((uVar2 >> 0xe & 1) == 0) {
      auVar6 = ZEXT816(0);
      if ((uVar2 >> 0x14 & 1) != 0) {
        if ((uVar2 >> 0x16 & 1) == 0) {
          plVar3 = (long *)*plVar3;
        }
        auVar6 = FUN_1004d284c(plVar3);
      }
    }
    else {
      dVar5 = (double)FUN_1000fceec();
      auVar6 = ZEXT416((uint)(float)dVar5);
    }
  }
  uVar8 = auVar6._8_8_;
  FUN_10031202c(&local_70);
  auVar7._8_8_ = uVar8;
  auVar7._0_8_ = auVar6._0_8_;
  return auVar7;
}




char * FUN_10030e47c(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  long lVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 local_30;
  
  lVar2 = 0;
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  do {
    pcVar1 = (char *)(param_3 + lVar2);
    lVar2 = lVar2 + 1;
  } while (*pcVar1 != '\0');
  FUN_100311a14(&local_60,param_3,(int)lVar2 + -1);
  pcVar1 = (char *)FUN_100312068(&local_60,param_2);
  if ((pcVar1 == (char *)0x0) || ((*(uint *)(pcVar1 + 0x10) >> 0x14 & 1) == 0)) {
    pcVar1 = "";
  }
  else if ((*(uint *)(pcVar1 + 0x10) >> 0x16 & 1) == 0) {
    pcVar1 = *(char **)pcVar1;
  }
  FUN_10031202c(&local_60);
  return pcVar1;
}




long FUN_10030e510(long param_1)

{
  return *(long *)(param_1 + 0x40) + 0x10;
}




void FUN_10030e51c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x40);
  if (*(char *)(lVar2 + 0x357) < '\0') {
    if (*(long *)(lVar2 + 0x348) == 0) goto LAB_10030e550;
  }
  else if (*(char *)(lVar2 + 0x357) == '\0') goto LAB_10030e550;
  uVar1 = FUN_10015d3ec();
  FUN_1001669b0(uVar1,lVar2 + 0x340);
LAB_10030e550:
  FUN_10030e590(param_1 + 0x38);
  return;
}




void FUN_10030e56c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10015d3ec();
  FUN_1001669b0(uVar1,param_2);
  return;
}




void FUN_10030e590(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  lVar2 = *plVar1;
  *(long *)(lVar2 + 8) = plVar1[1];
  *(long *)plVar1[1] = lVar2;
  *(long *)(param_1 + 0x10) = lVar3 + -1;
  FUN_100311898(plVar1 + 2);
  operator_delete(plVar1);
  return;
}




void FUN_10030e5d0(long param_1)

{
  FUN_10030e590(param_1 + 0x38);
  return;
}




undefined4 FUN_10030e5d8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}




void FUN_10030e5e0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x28) != 0) {
    lVar2 = *(long *)(param_2 + 0x30);
    do {
      FUN_10030e680(param_1,lVar2);
      lVar2 = lVar2 + 0x80;
    } while (lVar2 != *(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x28) * 0x80);
    if ((*(uint *)(param_2 + 0x28) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
      puVar1 = *(undefined8 **)(param_1 + 0x20);
      do {
        if ((code *)*puVar1 == (code *)0x0) {
          (*(code *)puVar1[3])(puVar1[2],param_1);
        }
        else {
          (*(code *)*puVar1)(param_1);
        }
        puVar1 = puVar1 + 4;
      } while (puVar1 != (undefined8 *)
                         (*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20));
    }
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10030e680(long param_1,long *param_2)

{
  byte *******pppppppbVar1;
  size_t sVar2;
  size_t sVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 extraout_x0;
  char *pcVar12;
  undefined8 extraout_x0_00;
  undefined4 uVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong uVar17;
  byte bVar18;
  byte *******pppppppbVar19;
  bool bVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  ulong *puVar26;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 auStack_440 [8];
  void *local_438;
  undefined1 auStack_430 [8];
  void *local_428;
  byte *******local_420;
  size_t local_418;
  byte local_409;
  char *local_408;
  void *local_400;
  int local_3f8;
  char local_3f1;
  undefined8 *local_3f0;
  undefined8 *local_3e8;
  undefined8 local_3e0;
  void *pvStack_3d8;
  void *local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined4 local_3b0;
  undefined8 local_3a8;
  void *local_80;
  void *local_78;
  
  FUN_10001549c(&local_408,"type");
  plVar7 = (long *)FUN_10022d41c(param_2 + 0xd,&local_408);
  if (local_3f1 < '\0') {
    operator_delete(local_408);
  }
  if (param_2 + 0xe == plVar7) {
    return;
  }
  lVar9 = param_1 + 0x38;
  FUN_100311830(&local_408);
  FUN_10030f810(lVar9,&local_408);
  uVar8 = FUN_100311898(&local_408);
  lVar24 = *(long *)(param_1 + 0x38);
  *(undefined4 *)(lVar24 + 0x388) = 0;
  uVar8 = FUN_10030e1d8(uVar8,param_2,"uuid");
  FUN_10001549c(&local_420,uVar8);
  if (-1 < (char)local_409) {
    local_418 = (ulong)local_409;
  }
  if (local_418 != 0) {
    pppppppbVar1 = local_420;
    if (-1 < (char)local_409) {
      pppppppbVar1 = (byte *******)&local_420;
    }
    for (lVar25 = *(long *)(param_1 + 0x40); lVar25 != lVar9; lVar25 = *(long *)(lVar25 + 8)) {
      bVar18 = *(byte *)(lVar25 + 0x357);
      uVar14 = (ulong)bVar18;
      sVar2 = *(size_t *)(lVar25 + 0x348);
      if (-1 < (char)bVar18) {
        sVar2 = uVar14;
      }
      if (sVar2 == local_418) {
        if ((char)bVar18 < '\0') {
          iVar6 = _memcmp(*(void **)(lVar25 + 0x340),pppppppbVar1,local_418);
          if (iVar6 == 0) {
LAB_10030ee6c:
            FUN_10030f940(lVar9);
            goto LAB_10030f5f0;
          }
        }
        else if ((uint)*(byte *)pppppppbVar1 == ((uint)*(void **)(lVar25 + 0x340) & 0xff)) {
          pbVar22 = (byte *)(lVar25 + 0x341);
          pppppppbVar19 = pppppppbVar1;
          do {
            uVar14 = uVar14 - 1;
            pppppppbVar19 = (byte *******)((long)pppppppbVar19 + 1);
            if (uVar14 == 0) goto LAB_10030ee6c;
            bVar18 = *pbVar22;
            pbVar22 = pbVar22 + 1;
          } while (bVar18 == *(byte *)pppppppbVar19);
        }
      }
    }
  }
  std::string::operator=((string *)(lVar24 + 0x340),(string *)&local_420);
  pbVar22 = (byte *)((long)plVar7 + 0x4f);
  bVar18 = *pbVar22;
  uVar15 = (ulong)bVar18;
  plVar23 = plVar7 + 7;
  puVar26 = (ulong *)(plVar7 + 8);
  uVar17 = *puVar26;
  uVar14 = uVar17;
  if (-1 < (char)bVar18) {
    uVar14 = uVar15;
  }
  if (uVar14 == 6) {
    iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013da0bf);
    if (iVar6 != 0) {
      bVar18 = *pbVar22;
      uVar15 = (ulong)bVar18;
      uVar17 = *puVar26;
      goto LAB_10030e838;
    }
    *(undefined4 *)(lVar24 + 0x388) = 1;
    FUN_10030f984(param_1,param_2,lVar24 + 0x10);
    FUN_100108ae0(lVar24 + 0x10);
    goto LAB_10030f4d8;
  }
LAB_10030e838:
  uVar14 = uVar17;
  if (-1 < (char)bVar18) {
    uVar14 = uVar15;
  }
  if (uVar14 == 8) {
    iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013ef8bf);
    if (iVar6 != 0) {
      bVar18 = *pbVar22;
      uVar15 = (ulong)bVar18;
      uVar17 = *puVar26;
      goto LAB_10030e878;
    }
    uVar13 = 2;
LAB_10030eeac:
    bVar4 = false;
    bVar20 = false;
    *(undefined4 *)(lVar24 + 0x388) = uVar13;
  }
  else {
LAB_10030e878:
    uVar14 = uVar17;
    if (-1 < (char)bVar18) {
      uVar14 = uVar15;
    }
    if (uVar14 == 5) {
      uVar8 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013ef8c8);
      if ((int)uVar8 == 0) {
        uVar8 = FUN_10030df6c(uVar8,param_2,"didDodge");
        if ((int)uVar8 == 0) {
          *(undefined4 *)(lVar24 + 0x388) = 4;
          uVar8 = FUN_1004e0150("MENU_DIALOG_OTHER_PLAYER_DODGED_TITLE",0);
          FUN_1000153b4(lVar24 + 0x358,uVar8);
          pcVar12 = "MENU_DIALOG_OTHER_PLAYER_DODGED_BODY";
        }
        else {
          uVar14 = FUN_10030df6c(uVar8,param_2,"punished");
          if ((uVar14 & 1) != 0) {
            uVar13 = 3;
            goto LAB_10030eeac;
          }
          *(undefined4 *)(lVar24 + 0x388) = 4;
          uVar8 = FUN_1004e0150("MENU_DIALOG_OTHER_PLAYER_DODGED_TITLE",0);
          FUN_1000153b4(lVar24 + 0x358,uVar8);
          pcVar12 = "MENU_DIALOG_DODGE_PENALTY_UNRANKED_BODY";
        }
        uVar8 = FUN_1004e0150(pcVar12,0);
        FUN_1000153b4(lVar24 + 0x368,uVar8);
        uVar8 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1000153b4(lVar24 + 0x378,uVar8);
        goto LAB_10030f4d8;
      }
      bVar18 = *pbVar22;
      uVar15 = (ulong)bVar18;
      uVar17 = *puVar26;
    }
    uVar14 = uVar17;
    if (-1 < (char)bVar18) {
      uVar14 = uVar15;
    }
    if (uVar14 == 0xc) {
      uVar8 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013ef953);
      if ((int)uVar8 == 0) {
        *(undefined4 *)(lVar24 + 0x388) = 5;
        FUN_100310fd4(uVar8,param_2,lVar24 + 0x188);
        goto LAB_10030f4d8;
      }
      bVar18 = *pbVar22;
      uVar15 = (ulong)bVar18;
      uVar17 = *puVar26;
    }
    uVar14 = uVar17;
    if (-1 < (char)bVar18) {
      uVar14 = uVar15;
    }
    if (uVar14 == 0x11) {
      iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013ef960);
      if (iVar6 == 0) {
        *(undefined4 *)(lVar24 + 0x388) = 4;
        uVar8 = FUN_1004e0150("MAIN_KARMA_BAN_WARNING_TITLE",0);
        FUN_1000153b4(lVar24 + 0x358,uVar8);
        uVar8 = FUN_1004e0150("MAIN_KARMA_BAN_WARNING",0);
        FUN_1000153b4(lVar24 + 0x368,uVar8);
        uVar8 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1000153b4(lVar24 + 0x378,uVar8);
        FUN_100105e80();
        goto LAB_10030f4d8;
      }
      bVar18 = *pbVar22;
      uVar15 = (ulong)bVar18;
      uVar17 = *puVar26;
    }
    uVar14 = uVar17;
    if (-1 < (char)bVar18) {
      uVar14 = uVar15;
    }
    if (uVar14 == 0xe) {
      iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013ef9a6);
      if (iVar6 == 0) {
        *(undefined4 *)(lVar24 + 0x388) = 6;
        uVar8 = FUN_1004e0150("MAIN_KARMA_JUSTICE_SERVED",0);
        FUN_1000153b4(lVar24 + 0x368,uVar8);
        FUN_100106760();
        goto LAB_10030f4d8;
      }
      bVar18 = *pbVar22;
      uVar15 = (ulong)bVar18;
      uVar17 = *puVar26;
    }
    uVar14 = uVar17;
    if (-1 < (char)bVar18) {
      uVar14 = uVar15;
    }
    if (uVar14 == 0xc) {
      iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013ef9cf);
      if (iVar6 == 0) {
        *(undefined4 *)(lVar24 + 0x388) = 4;
        uVar8 = FUN_1004e0150("MENU_MAIN_HUB_INBOX_MESSAGE_ELO_FORGIVEN_TITLE",0);
        FUN_1000153b4(lVar24 + 0x358,uVar8);
        uVar8 = FUN_1004e0150("MENU_MAIN_HUB_INBOX_MESSAGE_ELO_FORGIVEN",0);
        FUN_1000153b4(lVar24 + 0x368,uVar8);
        uVar8 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1000153b4(lVar24 + 0x378,uVar8);
        FUN_100105eac();
        goto LAB_10030f4d8;
      }
      bVar18 = *pbVar22;
      uVar15 = (ulong)bVar18;
      uVar17 = *puVar26;
    }
    uVar14 = uVar17;
    if (-1 < (char)bVar18) {
      uVar14 = uVar15;
    }
    if (uVar14 == 9) {
      iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013efa34);
      if (iVar6 != 0) {
        bVar18 = *pbVar22;
        uVar15 = (ulong)bVar18;
        uVar17 = *puVar26;
        goto LAB_10030e9f8;
      }
      *(undefined4 *)(lVar24 + 0x388) = 4;
      uVar8 = FUN_1004e0150("MAIN_KARMA_BAN",0);
      uVar8 = thunk_FUN_1004e439c(&local_408,uVar8);
      FUN_10030e118(uVar8,param_2,"ttl");
      uVar8 = FUN_1004e0150("MAIN_KARMA_BAN_TITLE",0);
      FUN_1000153b4(lVar24 + 0x358,uVar8);
      FUN_1000f1e20(&local_80,&local_408,
                    (long)(float)CONCAT13(extraout_var_03,
                                          CONCAT12(extraout_var_01,
                                                   CONCAT11(extraout_var,extraout_b0))),0);
      FUN_1000153b4(lVar24 + 0x368,&local_80);
      if (local_78 != (void *)0x0) {
        operator_delete__(local_78);
      }
      uVar8 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1000153b4(lVar24 + 0x378,uVar8);
      FUN_100105e54();
      pvVar10 = local_400;
joined_r0x00010030f38c:
      if (pvVar10 != (void *)0x0) {
        operator_delete__(pvVar10);
      }
    }
    else {
LAB_10030e9f8:
      uVar14 = uVar17;
      if (-1 < (char)bVar18) {
        uVar14 = uVar15;
      }
      if (uVar14 != 9) {
LAB_10030ea38:
        uVar14 = uVar17;
        if (-1 < (char)bVar18) {
          uVar14 = uVar15;
        }
        if (uVar14 == 0x11) {
          iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013efa70);
          if (iVar6 != 0) {
            bVar18 = *pbVar22;
            uVar15 = (ulong)bVar18;
            uVar17 = *puVar26;
            goto LAB_10030ea78;
          }
          *(undefined4 *)(lVar24 + 0x388) = 4;
          uVar8 = FUN_1004e0150("MENU_MAIN_HUB_QBAN_ACTION_BODY",0);
          uVar8 = thunk_FUN_1004e439c(&local_80,uVar8);
          uVar8 = FUN_10030e1d8(uVar8,param_2,"reason");
          FUN_1004e3120(&local_408,"[QBAN_REASON]");
          uVar11 = FUN_1004e0150(uVar8,0);
          FUN_1004e3bc4(&local_80,0,&local_408,uVar11);
          if (local_400 != (void *)0x0) {
            operator_delete__(local_400);
          }
          uVar11 = FUN_1004e0150("MENU_MAIN_HUB_QBAN_ACTION_TITLE",0);
          FUN_1000153b4(lVar24 + 0x358,uVar11);
          FUN_1000153b4(lVar24 + 0x368,&local_80);
          uVar11 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1000153b4(lVar24 + 0x378,uVar11);
          FUN_10001549c(&local_408,uVar8);
          FUN_1001067a4(&local_408);
LAB_10030f21c:
          if (local_3f1 < '\0') {
            operator_delete(local_408);
          }
          pvVar10 = local_78;
          if (local_78 != (void *)0x0) {
LAB_10030f4d4:
            operator_delete__(pvVar10);
          }
        }
        else {
LAB_10030ea78:
          uVar14 = uVar17;
          if (-1 < (char)bVar18) {
            uVar14 = uVar15;
          }
          if (uVar14 == 7) {
            uVar8 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013efacf);
            if ((int)uVar8 != 0) {
              bVar18 = *pbVar22;
              uVar15 = (ulong)bVar18;
              uVar17 = *puVar26;
              goto LAB_10030eab8;
            }
            uVar8 = FUN_10030e1d8(uVar8,param_2,"message");
            FUN_1003115fc(&local_408,uVar8,uVar8);
            FUN_1000153b4(lVar24 + 0x368,&local_408);
            uVar8 = 0;
            if (local_400 != (void *)0x0) {
              operator_delete__(local_400);
              uVar8 = extraout_x0;
            }
            pcVar12 = (char *)FUN_10030e1d8(uVar8,param_2,"displayMode");
            iVar6 = _strcmp(pcVar12,"dialog");
            if (iVar6 != 0) {
              *(undefined4 *)(lVar24 + 0x388) = 6;
              uVar8 = FUN_10030e118(iVar6,param_2,"expires");
              uVar8 = FUN_10030df6c(uVar8,param_2,"warn");
              uVar5 = FUN_10030df6c(uVar8,param_2,"sound");
              bVar4 = false;
              bVar20 = false;
              *(uint *)(lVar24 + 0x38c) =
                   CONCAT13(extraout_var_04,
                            CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00)));
              *(char *)(lVar24 + 0x390) = (char)uVar8;
              *(undefined1 *)(lVar24 + 0x391) = uVar5;
              goto LAB_10030f4e0;
            }
            *(undefined4 *)(lVar24 + 0x388) = 4;
            uVar8 = FUN_10030e1d8(0,param_2,"dialogTitle");
            FUN_1003115fc(&local_408,uVar8,uVar8);
            FUN_1000153b4(lVar24 + 0x358,&local_408);
            uVar8 = 0;
            if (local_400 != (void *)0x0) {
              operator_delete__(local_400);
              uVar8 = extraout_x0_00;
            }
            uVar8 = FUN_10030e1d8(uVar8,param_2,"confirmText");
            FUN_1003115fc(&local_408,uVar8,uVar8);
            FUN_1000153b4(lVar24 + 0x378,&local_408);
            pvVar10 = local_400;
            if (local_400 == (void *)0x0) goto LAB_10030f4d8;
            goto LAB_10030f4d4;
          }
LAB_10030eab8:
          uVar14 = uVar17;
          if (-1 < (char)bVar18) {
            uVar14 = uVar15;
          }
          if (uVar14 == 0xc) {
            iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013efb07);
            if (iVar6 != 0) {
              bVar18 = *pbVar22;
              uVar15 = (ulong)bVar18;
              uVar17 = *puVar26;
              goto LAB_10030eaf8;
            }
            uVar8 = FUN_1004e0150("MENU_TOASTIE_KICKED_FROM_GUILD",0);
            uVar8 = thunk_FUN_1004e439c(&local_80,uVar8);
            uVar8 = FUN_10030e1d8(uVar8,param_2,"guildName");
            FUN_10001549c(&local_408,uVar8);
            FUN_1004e3170(auStack_430,&local_408);
            FUN_1004e3120(auStack_440,"[GUILD_NAME]");
            FUN_1004e3bc4(&local_80,0,auStack_440,auStack_430);
            if (local_438 != (void *)0x0) {
              operator_delete__(local_438);
            }
            *(undefined4 *)(lVar24 + 0x388) = 6;
LAB_10030f360:
            FUN_1000153b4(lVar24 + 0x368,&local_80);
            if (local_428 != (void *)0x0) {
              operator_delete__(local_428);
            }
            pvVar10 = local_78;
            if (local_3f1 < '\0') {
              operator_delete(local_408);
              pvVar10 = local_78;
            }
            goto joined_r0x00010030f38c;
          }
LAB_10030eaf8:
          uVar14 = uVar17;
          if (-1 < (char)bVar18) {
            uVar14 = uVar15;
          }
          if (uVar14 == 0xe) {
            iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013efb33);
            if (iVar6 != 0) {
              bVar18 = *pbVar22;
              uVar15 = (ulong)bVar18;
              uVar17 = *puVar26;
              goto LAB_10030eb38;
            }
            pcVar12 = "MENU_TOASTIE_PROMOTED_IN_GUILD";
LAB_10030f3b4:
            uVar8 = FUN_1004e0150(pcVar12,0);
            uVar8 = thunk_FUN_1004e439c(&local_80,uVar8);
            uVar8 = FUN_10030e1d8(uVar8,param_2,"guildName");
            FUN_10001549c(&local_408,uVar8);
            FUN_1004e3170(auStack_430,&local_408);
            FUN_1004e3120(auStack_440,"[GUILD_NAME]");
            FUN_1004e3bc4(&local_80,0,auStack_440,auStack_430);
            if (local_438 != (void *)0x0) {
              operator_delete__(local_438);
            }
            *(undefined4 *)(lVar24 + 0x388) = 6;
            FUN_1000153b4(lVar24 + 0x368,&local_80);
            if (local_428 != (void *)0x0) {
              operator_delete__(local_428);
            }
            if (local_3f1 < '\0') {
              operator_delete(local_408);
            }
            if (local_78 != (void *)0x0) {
              operator_delete__(local_78);
            }
            bVar4 = false;
            bVar20 = true;
            goto LAB_10030f4e0;
          }
LAB_10030eb38:
          uVar14 = uVar17;
          if (-1 < (char)bVar18) {
            uVar14 = uVar15;
          }
          if (uVar14 == 0xd) {
            iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013efb61);
            if (iVar6 == 0) {
              pcVar12 = "MENU_TOASTIE_DEMOTED_IN_GUILD";
              goto LAB_10030f3b4;
            }
            bVar18 = *pbVar22;
            uVar15 = (ulong)bVar18;
            uVar17 = *puVar26;
          }
          uVar14 = uVar17;
          if (-1 < (char)bVar18) {
            uVar14 = uVar15;
          }
          if (uVar14 == 0x12) {
            iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013efb8d);
            if (iVar6 == 0) {
              pcVar12 = "MENU_TOASTIE_MADE_CAPTAIN_OF_GUILD";
              goto LAB_10030f3b4;
            }
            bVar18 = *pbVar22;
            uVar15 = (ulong)bVar18;
            uVar17 = *puVar26;
          }
          uVar14 = uVar17;
          if (-1 < (char)bVar18) {
            uVar14 = uVar15;
          }
          if (uVar14 == 0xe) {
            iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013efbc3);
            if (iVar6 == 0) {
              uVar13 = 8;
              goto LAB_10030eeac;
            }
            bVar18 = *pbVar22;
            uVar15 = (ulong)bVar18;
            uVar17 = *puVar26;
          }
          uVar14 = uVar17;
          if (-1 < (char)bVar18) {
            uVar14 = uVar15;
          }
          if (uVar14 == 0x10) {
            iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013efbd2);
            if (iVar6 == 0) {
              *(undefined4 *)(lVar24 + 0x388) = 6;
              uVar8 = FUN_1004e0150("MENU_TOASTIE_KICKED_FROM_USER_TEAM",0);
              uVar8 = thunk_FUN_1004e439c(&local_80,uVar8);
              uVar8 = FUN_10030e1d8(uVar8,param_2,"userTeamName");
              FUN_10001549c(&local_408,uVar8);
              FUN_1004e3170(auStack_430,&local_408);
              FUN_1004e3120(auStack_440,"[USER_TEAM_NAME]");
              FUN_1004e3bc4(&local_80,0,auStack_440,auStack_430);
              if (local_438 != (void *)0x0) {
                operator_delete__(local_438);
              }
              goto LAB_10030f360;
            }
            bVar18 = *pbVar22;
            uVar15 = (ulong)bVar18;
            uVar17 = *puVar26;
          }
          uVar14 = uVar17;
          if (-1 < (char)bVar18) {
            uVar14 = uVar15;
          }
          if (uVar14 == 0x13) {
            uVar8 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013efc24);
            if ((int)uVar8 == 0) {
              *(undefined4 *)(lVar24 + 0x388) = 6;
              iVar6 = FUN_10030e060(uVar8,param_2,"answer");
              FUN_1004e313c(&local_80);
              pcVar12 = "MENU_TOASTIE_REPLY_TO_WANNA_PLAY_YES";
              if (iVar6 != 1) {
                pcVar12 = "MENU_TOASTIE_REPLY_TO_WANNA_PLAY_NO";
              }
              uVar8 = FUN_1004e0150(pcVar12,0);
              uVar8 = FUN_1000153b4(&local_80,uVar8);
              uVar8 = FUN_10030e1d8(uVar8,param_2,"fromHandle");
              FUN_10001549c(&local_408,uVar8);
              FUN_1004e3170(auStack_430,&local_408);
              FUN_1004e3120(auStack_440,"[FRIEND]");
              FUN_1004e3bc4(&local_80,0,auStack_440,auStack_430);
              if (local_438 != (void *)0x0) {
                operator_delete__(local_438);
              }
              FUN_1000153b4(lVar24 + 0x368,&local_80);
              if (local_428 != (void *)0x0) {
                operator_delete__(local_428);
              }
              goto LAB_10030f21c;
            }
            bVar18 = *pbVar22;
            uVar15 = (ulong)bVar18;
            uVar17 = *puVar26;
          }
          uVar14 = uVar17;
          if (-1 < (char)bVar18) {
            uVar14 = uVar15;
          }
          if (uVar14 == 0xd) {
            iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013efc9c);
            if (iVar6 == 0) {
              uVar13 = 7;
              goto LAB_10030eeac;
            }
            bVar18 = *pbVar22;
            uVar15 = (ulong)bVar18;
            uVar17 = *puVar26;
          }
          uVar14 = uVar17;
          if (-1 < (char)bVar18) {
            uVar14 = uVar15;
          }
          if (uVar14 == 0xd) {
            uVar8 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013efcaa);
            if ((int)uVar8 == 0) {
              uVar8 = FUN_10030e060(uVar8,param_2,"amount");
              FUN_100329c28(&local_408,(string *)(lVar24 + 0x340),uVar8);
              if (*(int *)(param_1 + 0x28) != 0) {
                puVar21 = *(undefined8 **)(param_1 + 0x30);
                do {
                  if ((code *)*puVar21 == (code *)0x0) {
                    (*(code *)puVar21[3])(puVar21[2],&local_408);
                  }
                  else {
                    (*(code *)*puVar21)(&local_408);
                  }
                  puVar21 = puVar21 + 4;
                } while (puVar21 !=
                         (undefined8 *)
                         (*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x28) * 0x20));
              }
              *(undefined4 *)(lVar24 + 0x388) = 9;
              if (local_3f1 < '\0') {
                operator_delete(local_408);
              }
              FUN_10030f940(lVar9);
              goto LAB_10030f4d8;
            }
            bVar18 = *pbVar22;
            uVar15 = (ulong)bVar18;
            uVar17 = *puVar26;
          }
          if (-1 < (char)bVar18) {
            uVar17 = uVar15;
          }
          if ((uVar17 == 0xc) &&
             (iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013efcb8),
             iVar6 == 0)) {
            lVar9 = FUN_1000e86c0(param_2,"chest_awards");
            if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar9) {
              local_3f8 = 0x100005;
              local_408 = "chest_awards";
              local_400 = (void *)0xc;
              lVar9 = FUN_1000e87dc(param_2,&local_408);
              if (*(int *)(lVar9 + 0x10) == 4) {
                local_3f8 = 0x100005;
                local_408 = "chest_awards";
                local_400 = (void *)0xc;
                uVar8 = FUN_1000e87dc(param_2,&local_408);
                FUN_1000ebc54(uVar8,lVar24 + 0x178);
              }
              local_3f8 = 0x100005;
              local_408 = "chest_awards";
              local_400 = (void *)0xc;
              lVar9 = FUN_1000e87dc(param_2,&local_408);
              if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                local_408 = (char *)0x0;
                local_400 = (void *)0x0;
                local_3f8 = 0;
                pvStack_3d8 = (void *)0x0;
                local_3e0 = 0;
                uStack_3c8 = 0;
                local_3d0 = (void *)0x0;
                local_3c0 = 0;
                uStack_3b8 = 0x400;
                local_3b0 = 0;
                local_3a8 = 0;
                local_3f0 = operator_new(0x28);
                *local_3f0 = 0;
                local_3f0[1] = 0x10000;
                local_3f0[3] = 0;
                local_3f0[4] = 0;
                local_3f0[2] = 0;
                local_3e8 = local_3f0;
                local_80 = (void *)FUN_10030e47c(local_3f0,param_2,"/chest_awards");
                local_78 = local_80;
                FUN_1000f7bd0(&local_408,&local_80);
                if (local_3f8 == 4) {
                  FUN_1000ebc54(&local_408,lVar24 + 0x178);
                }
                if (local_3e8 != (undefined8 *)0x0) {
                  pvVar10 = (void *)FUN_1000f7b54();
                  operator_delete(pvVar10);
                }
                _free(local_3d0);
                if (pvStack_3d8 != (void *)0x0) {
                  operator_delete(pvStack_3d8);
                }
              }
            }
            uVar13 = 10;
            goto LAB_10030eeac;
          }
        }
LAB_10030f4d8:
        bVar4 = false;
        bVar20 = false;
        goto LAB_10030f4e0;
      }
      iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013efa66);
      if (iVar6 != 0) {
        bVar18 = *pbVar22;
        uVar15 = (ulong)bVar18;
        uVar17 = *puVar26;
        goto LAB_10030ea38;
      }
      *(undefined4 *)(lVar24 + 0x388) = 8;
    }
    bVar20 = false;
    bVar4 = true;
  }
LAB_10030f4e0:
  iVar6 = FUN_10015d3f8();
  if ((iVar6 == 0) || (!bVar4 && !bVar20)) goto LAB_10030f5f0;
  lVar9 = FUN_10015d3ec();
  FUN_100169cec(lVar9 + 0x18);
  lVar9 = FUN_10015d3ec();
  bVar18 = *(byte *)(lVar9 + 0x548f);
  uVar14 = (ulong)bVar18;
  sVar2 = *(size_t *)(lVar9 + 0x5480);
  if (-1 < (char)bVar18) {
    sVar2 = uVar14;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    pvVar10 = *(void **)(lVar9 + 0x5478);
    puVar21 = pvVar10;
    if (-1 < (char)bVar18) {
      puVar21 = (undefined8 *)(lVar9 + 0x5478);
    }
    pbVar22 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar22 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar18 < '\0') {
      if (sVar2 == 0) goto LAB_10030f5f0;
      iVar6 = _memcmp(puVar21,pbVar22,sVar2);
      bVar4 = iVar6 == 0;
    }
    else {
      if (sVar2 == 0) goto LAB_10030f5f0;
      if ((uint)*pbVar22 != ((uint)pvVar10 & 0xff)) goto LAB_10030f5a8;
      pbVar16 = (byte *)(lVar9 + 0x5479);
      do {
        uVar14 = uVar14 - 1;
        pbVar22 = pbVar22 + 1;
        if (uVar14 == 0) break;
        bVar18 = *pbVar16;
        pbVar16 = pbVar16 + 1;
      } while (bVar18 == *pbVar22);
      bVar4 = uVar14 == 0;
    }
    bVar4 = !bVar4;
  }
  else {
LAB_10030f5a8:
    bVar4 = true;
  }
  if ((bool)(bVar20 & bVar4)) {
    uVar8 = FUN_10015d3ec();
    lVar9 = FUN_10015d3ec();
    FUN_1001634c4(uVar8,lVar9 + 0x5478,0);
  }
LAB_10030f5f0:
  if ((char)local_409 < '\0') {
    operator_delete(local_420);
  }
  return;
}




void FUN_10030f810(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = operator_new(0x398);
  *plVar1 = 0;
  FUN_100312190(plVar1 + 2,param_2);
  FUN_100312218(plVar1 + 4,param_2 + 0x10);
  FUN_100312320(plVar1 + 6,param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x50);
  lVar4 = *(long *)(param_2 + 0x68);
  lVar3 = *(long *)(param_2 + 0x60);
  plVar1[0xd] = *(long *)(param_2 + 0x58);
  plVar1[0xc] = lVar2;
  plVar1[0xf] = lVar4;
  plVar1[0xe] = lVar3;
  lVar2 = *(long *)(param_2 + 0x70);
  plVar1[0x11] = *(long *)(param_2 + 0x78);
  plVar1[0x10] = lVar2;
  plVar1[0x12] = *(long *)(param_2 + 0x80);
  lVar2 = *(long *)(param_2 + 0x30);
  lVar4 = *(long *)(param_2 + 0x48);
  lVar3 = *(long *)(param_2 + 0x40);
  plVar1[9] = *(long *)(param_2 + 0x38);
  plVar1[8] = lVar2;
  plVar1[0xb] = lVar4;
  plVar1[10] = lVar3;
  FUN_10003330c(plVar1 + 0x13,param_2 + 0x88);
  lVar2 = *(long *)(param_2 + 0x140);
  lVar4 = *(long *)(param_2 + 0x158);
  lVar3 = *(long *)(param_2 + 0x150);
  plVar1[0x2b] = *(long *)(param_2 + 0x148);
  plVar1[0x2a] = lVar2;
  plVar1[0x2d] = lVar4;
  plVar1[0x2c] = lVar3;
  plVar1[0x2e] = *(long *)(param_2 + 0x160);
  lVar2 = *(long *)(param_2 + 0x100);
  lVar4 = *(long *)(param_2 + 0x118);
  lVar3 = *(long *)(param_2 + 0x110);
  plVar1[0x23] = *(long *)(param_2 + 0x108);
  plVar1[0x22] = lVar2;
  plVar1[0x25] = lVar4;
  plVar1[0x24] = lVar3;
  lVar4 = *(long *)(param_2 + 0x120);
  lVar3 = *(long *)(param_2 + 0x138);
  lVar2 = *(long *)(param_2 + 0x130);
  plVar1[0x27] = *(long *)(param_2 + 0x128);
  plVar1[0x26] = lVar4;
  plVar1[0x29] = lVar3;
  plVar1[0x28] = lVar2;
  lVar2 = *(long *)(param_2 + 0xc0);
  lVar4 = *(long *)(param_2 + 0xd8);
  lVar3 = *(long *)(param_2 + 0xd0);
  plVar1[0x1b] = *(long *)(param_2 + 200);
  plVar1[0x1a] = lVar2;
  plVar1[0x1d] = lVar4;
  plVar1[0x1c] = lVar3;
  lVar4 = *(long *)(param_2 + 0xe0);
  lVar3 = *(long *)(param_2 + 0xf8);
  lVar2 = *(long *)(param_2 + 0xf0);
  plVar1[0x1f] = *(long *)(param_2 + 0xe8);
  plVar1[0x1e] = lVar4;
  plVar1[0x21] = lVar3;
  plVar1[0x20] = lVar2;
  lVar4 = *(long *)(param_2 + 0xa0);
  lVar3 = *(long *)(param_2 + 0xb8);
  lVar2 = *(long *)(param_2 + 0xb0);
  plVar1[0x17] = *(long *)(param_2 + 0xa8);
  plVar1[0x16] = lVar4;
  plVar1[0x19] = lVar3;
  plVar1[0x18] = lVar2;
  FUN_100143d54(plVar1 + 0x2f,param_2 + 0x168);
  FUN_1003123f0(plVar1 + 0x31,param_2 + 0x178);
  FUN_10003330c(plVar1 + 0x68,param_2 + 0x330);
  thunk_FUN_1004e439c(plVar1 + 0x6b,param_2 + 0x348);
  thunk_FUN_1004e439c(plVar1 + 0x6d,param_2 + 0x358);
  thunk_FUN_1004e439c(plVar1 + 0x6f,param_2 + 0x368);
  plVar1[0x71] = *(long *)(param_2 + 0x378);
  *(undefined2 *)(plVar1 + 0x72) = *(undefined2 *)(param_2 + 0x380);
  lVar2 = *param_1;
  *plVar1 = lVar2;
  plVar1[1] = (long)param_1;
  *(long **)(lVar2 + 8) = plVar1;
  *param_1 = (long)plVar1;
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_10030f940(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  lVar1 = *plVar2;
  *(long *)(lVar1 + 8) = plVar2[1];
  *(long *)plVar2[1] = lVar1;
  param_1[2] = param_1[2] + -1;
  FUN_100311898(plVar2 + 2);
  operator_delete(plVar2);
  return;
}

