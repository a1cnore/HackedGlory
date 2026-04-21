// functions/1001d — 333 functions
#include "GameKindred.h"




void FUN_1001d0010(long *param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = param_1 + 0x14d;
  if ((int)param_2 == 0) {
    FUN_100190f50(plVar1);
  }
  else {
    FUN_100190efc();
    FUN_10019141c(plVar1,*(undefined4 *)((long)param_1 + 0x1364));
    FUN_1001910b4(plVar1,param_1 + 0x26a);
    FUN_100190fb0(plVar1);
  }
  FUN_100190f80(plVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001001d0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_1001d008c(long param_1)

{
  long *plVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  undefined1 *local_28;
  
  FUN_1001cfc0c();
  plVar1 = (long *)(param_1 + 0xa68);
  fVar3 = (float)*(undefined8 *)(param_1 + 0xa58) * 0.5;
  fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 0xa58) >> 0x20) * 0.5;
  local_28 = &DAT_3f0000003f000000;
  bVar2 = false;
  if ((*(float *)(param_1 + 0xaa8) == fVar3) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0xaac)) && !NAN(fVar4))) {
    bVar2 = *(float *)(param_1 + 0xaac) == fVar4;
  }
  if (!bVar2) {
    *(ulong *)(param_1 + 0xaa8) = CONCAT44(fVar4,fVar3);
    FUN_1000200a0(plVar1);
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_28);
  return;
}




long * FUN_1001d0100(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined4 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1001cf81c();
  *puVar1 = &PTR_FUN_101466c20;
  puVar1 = puVar1 + 0x14d;
  thunk_FUN_1001c73d0(puVar1);
  thunk_FUN_1004e439c(param_1 + 699,param_2);
  thunk_FUN_1004e439c(param_1 + 0x2bd,param_3);
  thunk_FUN_1004e439c(param_1 + 0x2bf,param_4);
  *(undefined4 *)(param_1 + 0x2c1) = param_5;
  *(undefined1 *)((long)param_1 + 0x160c) = 1;
  *(undefined4 *)(param_1 + 0x14c) = 2;
  FUN_100642bd8(param_1 + 0xd0,puVar1,1);
  if (*(char *)((long)param_1 + 0x160c) == '\0') {
    FUN_1001c7990(puVar1,(int)param_1[0x2c1]);
    FUN_1001c7dd4(puVar1,param_1 + 0x2bf,&DAT_10115a168);
  }
  (**(code **)(*param_1 + 0x138))(param_1);
  return param_1;
}




long * thunk_FUN_1001d0100(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                          undefined4 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1001cf81c();
  *puVar1 = &PTR_FUN_101466c20;
  puVar1 = puVar1 + 0x14d;
  thunk_FUN_1001c73d0(puVar1);
  thunk_FUN_1004e439c(param_1 + 699,param_2);
  thunk_FUN_1004e439c(param_1 + 0x2bd,param_3);
  thunk_FUN_1004e439c(param_1 + 0x2bf,param_4);
  *(undefined4 *)(param_1 + 0x2c1) = param_5;
  *(undefined1 *)((long)param_1 + 0x160c) = 1;
  *(undefined4 *)(param_1 + 0x14c) = 2;
  FUN_100642bd8(param_1 + 0xd0,puVar1,1);
  if (*(char *)((long)param_1 + 0x160c) == '\0') {
    FUN_1001c7990(puVar1,(int)param_1[0x2c1]);
    FUN_1001c7dd4(puVar1,param_1 + 0x2bf,&DAT_10115a168);
  }
  (**(code **)(*param_1 + 0x138))(param_1);
  return param_1;
}




void FUN_1001d01f4(long *param_1,int param_2)

{
  long *plVar1;
  
  if (param_2 == 0) {
    if (*(char *)((long)param_1 + 0x160c) != '\0') {
      FUN_1001c7744(param_1 + 0x14d);
    }
  }
  else if (*(char *)((long)param_1 + 0x160c) != '\0') {
    plVar1 = param_1 + 0x14d;
    FUN_1001c7644(plVar1);
    FUN_1001c7990(plVar1,(int)param_1[0x2c1]);
    FUN_1001c7dd4(plVar1,param_1 + 0x2bf,&DAT_10115a168);
  }
                    /* WARNING: Could not recover jumptable at 0x0001001d0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_1001d026c(long param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  FUN_1001cfc0c();
  fVar2 = (float)*(undefined8 *)(param_1 + 0xa58) * 0.5;
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0xa58) >> 0x20) * 0.6;
  bVar1 = false;
  if ((*(float *)(param_1 + 0xaa8) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0xaac)) && !NAN(fVar3))) {
    bVar1 = *(float *)(param_1 + 0xaac) == fVar3;
  }
  if (!bVar1) {
    *(ulong *)(param_1 + 0xaa8) = CONCAT44(fVar3,fVar2);
    FUN_1000200a0(param_1 + 0xa68);
    return;
  }
  return;
}




void FUN_1001d02c8(void)

{
  return;
}




void FUN_1001d02cc(void)

{
  return;
}




void FUN_1001d02d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101466ab8;
  if ((void *)param_1[0x26b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x26b]);
    param_1[0x26b] = 0;
    param_1[0x26a] = 0;
  }
  if ((void *)param_1[0x269] != (void *)0x0) {
    operator_delete__((void *)param_1[0x269]);
    param_1[0x269] = 0;
    param_1[0x268] = 0;
  }
  if ((void *)param_1[0x267] != (void *)0x0) {
    operator_delete__((void *)param_1[0x267]);
    param_1[0x267] = 0;
    param_1[0x266] = 0;
  }
  FUN_10019159c(param_1 + 0x14d);
  FUN_1001d0520(param_1);
  return;
}




void FUN_1001d0340(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101466ab8;
  if ((void *)param_1[0x26b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x26b]);
    param_1[0x26b] = 0;
    param_1[0x26a] = 0;
  }
  if ((void *)param_1[0x269] != (void *)0x0) {
    operator_delete__((void *)param_1[0x269]);
    param_1[0x269] = 0;
    param_1[0x268] = 0;
  }
  if ((void *)param_1[0x267] != (void *)0x0) {
    operator_delete__((void *)param_1[0x267]);
    param_1[0x267] = 0;
    param_1[0x266] = 0;
  }
  param_1[0x14d] = &PTR_FUN_1014609b8;
  thunk_FUN_100651068(param_1 + 0x23e);
  thunk_FUN_100651068(param_1 + 0x218);
  param_1[0x1fa] = &PTR_FUN_1014a7108;
  param_1[0x211] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x214);
  FUN_10064e2bc(param_1 + 0x1fa);
  thunk_FUN_100651068(param_1 + 0x1d4);
  thunk_FUN_1001a7dd8(param_1 + 0x15e);
  FUN_10064221c(param_1 + 0x14d);
  pvVar1 = (void *)FUN_1001d0520(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001d0424(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101466c20;
  if ((void *)param_1[0x2c0] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2c0]);
    param_1[0x2c0] = 0;
    param_1[0x2bf] = 0;
  }
  if ((void *)param_1[0x2be] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2be]);
    param_1[0x2be] = 0;
    param_1[0x2bd] = 0;
  }
  if ((void *)param_1[700] != (void *)0x0) {
    operator_delete__((void *)param_1[700]);
    param_1[700] = 0;
    param_1[699] = 0;
  }
  thunk_FUN_1001c768c(param_1 + 0x14d);
  FUN_1001d0520(param_1);
  return;
}




void FUN_1001d04a0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101466c20;
  if ((void *)param_1[0x2c0] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2c0]);
    param_1[0x2c0] = 0;
    param_1[0x2bf] = 0;
  }
  if ((void *)param_1[0x2be] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2be]);
    param_1[0x2be] = 0;
    param_1[0x2bd] = 0;
  }
  if ((void *)param_1[700] != (void *)0x0) {
    operator_delete__((void *)param_1[700]);
    param_1[700] = 0;
    param_1[699] = 0;
  }
  thunk_FUN_1001c768c(param_1 + 0x14d);
  pvVar1 = (void *)FUN_1001d0520(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001d0520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101466950;
  thunk_FUN_100651068(param_1 + 0x125);
  thunk_FUN_100651068(param_1 + 0xff);
  param_1[0xe1] = &PTR_FUN_1014a7108;
  param_1[0xf8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xfb);
  FUN_10064e2bc(param_1 + 0xe1);
  FUN_10064221c(param_1 + 0xd0);
  param_1[0xb2] = &PTR_FUN_1014a7108;
  param_1[0xc9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xcc);
  FUN_10064e2bc(param_1 + 0xb2);
  param_1[0x94] = &PTR_FUN_1014a7108;
  param_1[0xab] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xae);
  FUN_10064e2bc(param_1 + 0x94);
  param_1[0x76] = &PTR_FUN_1014a7108;
  param_1[0x8d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x90);
  FUN_10064e2bc(param_1 + 0x76);
  param_1[0x58] = &PTR_FUN_1014a7108;
  param_1[0x6f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x72);
  FUN_10064e2bc(param_1 + 0x58);
  param_1[0x3a] = &PTR_FUN_1014a7108;
  param_1[0x51] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x54);
  FUN_10064e2bc(param_1 + 0x3a);
  FUN_10064221c(param_1 + 0x29);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




long * FUN_1001d0644(long *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined4 local_68 [2];
  
  puVar7 = (undefined8 *)FUN_10064e20c();
  *puVar7 = &PTR_FUN_1014623b0;
  puVar7 = puVar7 + 0x17;
  FUN_1006421a8(puVar7);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x28;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x46;
  thunk_FUN_100650e64(plVar2);
  thunk_FUN_1001c0838(param_1 + 0x6c);
  thunk_FUN_1001c0838(param_1 + 0xd7);
  plVar3 = param_1 + 0x142;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x160;
  thunk_FUN_100652c08(plVar4);
  param_1[0x17e] = 0;
  *(undefined4 *)(param_1 + 0x17f) = 0x41000000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  FUN_100642bd8(puVar7,plVar1,1);
  FUN_100642bd8(puVar7,plVar2,1);
  FUN_100642bd8(puVar7,plVar3,1);
  FUN_100642bd8(puVar7,plVar4,1);
  ppuVar5 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar5 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  FUN_100652cac(plVar1,*ppuVar5,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar6 = *(uint *)((long)param_1 + 0x1c4);
  if ((uVar6 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1c4) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x2600;
    FUN_1000200a0(plVar1);
  }
  FUN_1006515d8(plVar2,0);
  local_68[0] = 0xffe0e0e0;
  FUN_100651460(plVar2,local_68);
  if ((*(uint *)((long)param_1 + 0x2b4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2b4) = *(uint *)((long)param_1 + 0x2b4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar2);
  }
  if ((*(uint *)((long)param_1 + 0x3e4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x3e4) = *(uint *)((long)param_1 + 0x3e4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(param_1 + 0x6c);
  }
  if ((*(uint *)((long)param_1 + 0x73c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x73c) = *(uint *)((long)param_1 + 0x73c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(param_1 + 0xd7);
  }
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar6 = *(uint *)((long)param_1 + 0xa94);
  if ((uVar6 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0xa94) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x2600;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar6 = *(uint *)((long)param_1 + 0xb84);
  if ((uVar6 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0xb84) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x2600;
    FUN_1000200a0(plVar4);
  }
  *(uint *)((long)param_1 + 0x3e4) = *(uint *)((long)param_1 + 0x3e4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x73c) = *(uint *)((long)param_1 + 0x73c) & 0xfffffffb;
  return param_1;
}




long * thunk_FUN_1001d0644(long *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined4 auStack_68 [2];
  
  puVar7 = (undefined8 *)FUN_10064e20c();
  *puVar7 = &PTR_FUN_1014623b0;
  puVar7 = puVar7 + 0x17;
  FUN_1006421a8(puVar7);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x28;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x46;
  thunk_FUN_100650e64(plVar2);
  thunk_FUN_1001c0838(param_1 + 0x6c);
  thunk_FUN_1001c0838(param_1 + 0xd7);
  plVar3 = param_1 + 0x142;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x160;
  thunk_FUN_100652c08(plVar4);
  param_1[0x17e] = 0;
  *(undefined4 *)(param_1 + 0x17f) = 0x41000000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  FUN_100642bd8(puVar7,plVar1,1);
  FUN_100642bd8(puVar7,plVar2,1);
  FUN_100642bd8(puVar7,plVar3,1);
  FUN_100642bd8(puVar7,plVar4,1);
  ppuVar5 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar5 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  FUN_100652cac(plVar1,*ppuVar5,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar6 = *(uint *)((long)param_1 + 0x1c4);
  if ((uVar6 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1c4) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x2600;
    FUN_1000200a0(plVar1);
  }
  FUN_1006515d8(plVar2,0);
  auStack_68[0] = 0xffe0e0e0;
  FUN_100651460(plVar2,auStack_68);
  if ((*(uint *)((long)param_1 + 0x2b4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2b4) = *(uint *)((long)param_1 + 0x2b4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar2);
  }
  if ((*(uint *)((long)param_1 + 0x3e4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x3e4) = *(uint *)((long)param_1 + 0x3e4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(param_1 + 0x6c);
  }
  if ((*(uint *)((long)param_1 + 0x73c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x73c) = *(uint *)((long)param_1 + 0x73c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(param_1 + 0xd7);
  }
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar6 = *(uint *)((long)param_1 + 0xa94);
  if ((uVar6 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0xa94) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x2600;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar6 = *(uint *)((long)param_1 + 0xb84);
  if ((uVar6 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0xb84) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x2600;
    FUN_1000200a0(plVar4);
  }
  *(uint *)((long)param_1 + 0x3e4) = *(uint *)((long)param_1 + 0x3e4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x73c) = *(uint *)((long)param_1 + 0x73c) & 0xfffffffb;
  return param_1;
}




void FUN_1001d08f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x230;
  FUN_100651038(lVar1);
  if ((*(byte *)(param_1 + 0x3e4) >> 2 & 1) != 0) {
    FUN_1001c0968(0x41600000,0x40c00000,0x41900000,param_1 + 0x360,lVar1,1);
  }
  if ((*(byte *)(param_1 + 0x73c) >> 2 & 1) != 0) {
    FUN_1001c0968(0x41600000,0x40c00000,0x41900000,param_1 + 0x6b8,lVar1,0);
  }
  FUN_1001d096c(param_1);
  return;
}




void FUN_1001d096c(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 local_48;
  
  lVar1 = param_1 + 0x230;
  fVar3 = (float)FUN_100651184(lVar1);
  fVar4 = 10.0;
  fVar3 = fVar3 + 10.0;
  FUN_100651184(lVar1);
  fVar4 = fVar4 + 2.0 + *(float *)(param_1 + 0xbf8) * 2.0;
  FUN_10064e47c(fVar3,fVar4,param_1 + 0x140);
  lVar2 = param_1 + 0xb8;
  FUN_10064e5ec(0,0,lVar1,8,lVar2,8);
  FUN_10064e5ec(0,0,param_1 + 0x140,8,lVar2,8);
  lVar1 = param_1 + 0xa10;
  FUN_10064e47c(fVar3,*(undefined4 *)(param_1 + 0xbf8),lVar1);
  if ((*(float *)(param_1 + 0xa50) != 0.0) || (*(float *)(param_1 + 0xa54) != fVar4 * -0.5)) {
    *(undefined4 *)(param_1 + 0xa50) = 0;
    *(float *)(param_1 + 0xa54) = fVar4 * -0.5;
    FUN_1000200a0(lVar1);
  }
  local_48 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0xa10) + 0x28))(lVar1,&local_48);
  lVar1 = param_1 + 0xb00;
  FUN_10064e47c(fVar3,*(undefined4 *)(param_1 + 0xbf8),lVar1);
  if ((*(float *)(param_1 + 0xb40) != 0.0) || (*(float *)(param_1 + 0xb44) != fVar4 * 0.5)) {
    *(undefined4 *)(param_1 + 0xb40) = 0;
    *(float *)(param_1 + 0xb44) = fVar4 * 0.5;
    FUN_1000200a0(lVar1);
  }
  local_48 = 0x3f8000003f000000;
  (**(code **)(*(long *)(param_1 + 0xb00) + 0x28))(lVar1,&local_48);
  *(float *)(param_1 + 0xbf0) = fVar3;
  *(float *)(param_1 + 0xbf4) = fVar4;
  FUN_10064e48c(param_1,param_1 + 0xbf0);
  FUN_10064e5ec(0,0,lVar2,8,param_1,8);
  return;
}




void FUN_1001d0b14(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x230;
  FUN_1006513c0(lVar1);
  if ((*(byte *)(param_1 + 0x3e4) >> 2 & 1) != 0) {
    FUN_1001c0968(0x41600000,0x40c00000,0x41900000,param_1 + 0x360,lVar1,1);
  }
  if ((*(byte *)(param_1 + 0x73c) >> 2 & 1) != 0) {
    FUN_1001c0968(0x41600000,0x40c00000,0x41900000,param_1 + 0x6b8,lVar1,0);
  }
  FUN_1001d096c(param_1);
  return;
}




void FUN_1001d0b88(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xbf8) = param_1;
  FUN_1001d096c();
  return;
}




undefined4 FUN_1001d0b90(long param_1)

{
  return *(undefined4 *)(param_1 + 0xbf0);
}




long FUN_1001d0b98(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_101466d88;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100652c08(puVar2);
  lVar1 = param_1 + 0x1a8;
  thunk_FUN_100652c08(lVar1);
  FUN_10064e264(param_1 + 0x298);
  *(undefined1 *)(param_1 + 0x350) = 0;
  FUN_100642bd8(param_1,lVar1,1);
  FUN_100642bd8(param_1,param_1 + 0x298,1);
  FUN_100642bd8(param_1,puVar2,1);
  FUN_100652cac(lVar1,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,"draft_team_turn_bg");
  FUN_100652cac(puVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xfffffffb;
  return param_1;
}




long thunk_FUN_1001d0b98(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_101466d88;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100652c08(puVar2);
  lVar1 = param_1 + 0x1a8;
  thunk_FUN_100652c08(lVar1);
  FUN_10064e264(param_1 + 0x298);
  *(undefined1 *)(param_1 + 0x350) = 0;
  FUN_100642bd8(param_1,lVar1,1);
  FUN_100642bd8(param_1,param_1 + 0x298,1);
  FUN_100642bd8(param_1,puVar2,1);
  FUN_100652cac(lVar1,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,"draft_team_turn_bg");
  FUN_100652cac(puVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xfffffffb;
  return param_1;
}




void FUN_1001d0c70(long param_1)

{
  undefined8 uVar1;
  
  FUN_100642324(param_1 + 0x1a8);
  FUN_100642324(param_1 + 0xb8);
  if ((*(byte *)(param_1 + 0x22c) >> 2 & 1) != 0) {
    uVar1 = FUN_100640840(0,0x3e4ccccd,FUN_1000d05c0);
    FUN_100047300();
    FUN_100642b7c(param_1 + 0x1a8,uVar1);
  }
  if ((*(byte *)(param_1 + 0x13c) >> 2 & 1) != 0) {
    uVar1 = FUN_100640840(0,0x3dcccccd,FUN_1000d05c0);
    FUN_100047300();
    FUN_100642b7c(param_1 + 0xb8,uVar1);
  }
  return;
}




void FUN_1001d0d24(long param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  
  *(byte *)(param_1 + 0x350) = (byte)param_2;
  *(byte *)(param_1 + 0x280) = *(byte *)(param_1 + 0x280) & 0xfe | (byte)param_2;
  puVar1 = &DAT_1011582a8;
  if (param_2 == 0) {
    puVar1 = &DAT_1011582a4;
  }
  FUN_100652dd4(param_1 + 0x1a8,puVar1,2);
  *(byte *)(param_1 + 400) = *(byte *)(param_1 + 400) & 0xfe | *(byte *)(param_1 + 0x350);
  FUN_100652dd4(param_1 + 0xb8,&DAT_10115a164,2);
  uVar3 = 0x33;
  if (*(char *)(param_1 + 0x350) != '\0') {
    uVar3 = 0xbf;
  }
  uVar2 = *(uint *)(param_1 + 0x13c);
  if (uVar3 == (uVar2 >> 7 & 0xff)) {
    return;
  }
  *(uint *)(param_1 + 0x13c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar3 << 7;
  FUN_1000200a0(param_1 + 0xb8);
  return;
}




void FUN_1001d0de0(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if (param_2 == (*(byte *)(param_1 + 0x22c) & 4) >> 2) {
    return;
  }
  lVar5 = param_1 + 0x1a8;
  fVar7 = 0.2;
  if (*(char *)(param_1 + 0x350) != '\0') {
    fVar7 = 0.75;
  }
  FUN_100642324(lVar5);
  lVar1 = param_1 + 0xb8;
  FUN_100642324(lVar1);
  uVar2 = *(uint *)(param_1 + 0x22c);
  if (param_2 == 0) {
    if ((uVar2 & 0x7f80) != 0x7f80) {
      *(uint *)(param_1 + 0x22c) = uVar2 | 0x7f80;
      FUN_1000200a0(lVar5);
    }
    lVar4 = lVar5;
    lVar5 = lVar1;
    if ((*(uint *)(param_1 + 0x13c) & 0x7f80) == 0) goto LAB_1001d0eec;
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xffff807f;
  }
  else {
    if ((uVar2 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x22c) = uVar2 & 0xffff807f;
      FUN_1000200a0(lVar5);
    }
    fVar6 = fVar7 * 255.0;
    uVar2 = *(uint *)(param_1 + 0x13c);
    fVar7 = 1.0;
    lVar4 = lVar1;
    if ((int)fVar6 == (uVar2 >> 7 & 0xff)) goto LAB_1001d0eec;
    *(uint *)(param_1 + 0x13c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | ((int)fVar6 & 0xffU) << 7;
    fVar7 = 1.0;
  }
  FUN_1000200a0(lVar1);
LAB_1001d0eec:
  uVar3 = FUN_10004767c();
  FUN_100640840(fVar7,0x3e4ccccd,FUN_1000d05c0);
  FUN_100642b7c(lVar5,uVar3);
  uVar3 = FUN_100640840(0,0x3dcccccd,FUN_1000d05c0);
  FUN_100047300();
  FUN_100642b7c(lVar4,uVar3);
  return;
}




void FUN_1001d0f60(long param_1)

{
  FUN_100642bd8(param_1 + 0x298);
  return;
}




void FUN_1001d0f68(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10064e328();
  FUN_10064e47c(param_1,param_2,param_3 + 0x1a8);
  FUN_10064e47c(param_1,param_2,param_3 + 0x298);
  FUN_10064e47c(param_1,param_2,param_3 + 0xb8);
  return;
}




long * FUN_1001d0fc4(long *param_1)

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
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  float fVar15;
  undefined1 *local_68;
  
  puVar10 = (undefined8 *)FUN_10052fa40();
  *puVar10 = &PTR_thunk_FUN_1001d78dc_101466ed0;
  puVar10 = puVar10 + 0x48;
  FUN_10064e264(puVar10);
  FUN_10064e264();
  plVar1 = param_1 + 0x76;
  FUN_1006505b8(plVar1);
  plVar12 = param_1 + 0x91;
  thunk_FUN_100652c08(plVar12);
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar13 = param_1 + 0x127;
  FUN_1006505b8();
  plVar2 = param_1 + 0x142;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x160;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x17e;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x1a4;
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  plVar6 = param_1 + 0x1e8;
  thunk_FUN_100655644(plVar6);
  plVar7 = param_1 + 0x213;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0x239;
  thunk_FUN_100652c08(plVar8);
  plVar9 = param_1 + 599;
  thunk_FUN_100652c08();
  FUN_1001f28b0(param_1 + 0x275);
  *(undefined4 *)(param_1 + 0x277) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x13bc) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x5f,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  FUN_100642bd8(puVar10,plVar1,1);
  FUN_100642bd8(puVar10,plVar12,1);
  FUN_100642bd8(plVar12,param_1 + 0xaf,1);
  FUN_100642bd8(plVar12,param_1 + 0xcd,1);
  FUN_100642bd8(plVar12,param_1 + 0xeb,1);
  FUN_100642bd8(plVar12,param_1 + 0x109,1);
  FUN_100642bd8(plVar12,plVar13,1);
  FUN_100642bd8(puVar10,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(puVar10,plVar4,1);
  FUN_100642bd8(puVar10,plVar6,1);
  FUN_100655930(plVar6,plVar7,1);
  FUN_100655930(plVar6,plVar8,1);
  FUN_100655930(plVar6,plVar9,1);
  FUN_100642bd8(puVar10,plVar5,1);
  FUN_100642bd8(puVar10,param_1 + 0x1c2,1);
  FUN_100642bd8(puVar10,param_1[0x276],1);
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  FUN_100652cac(param_1 + 0xaf,DAT_101854a08,"lobby_hero_highlight");
  FUN_100652cac(param_1 + 0xcd,DAT_101854a08,"lobby_hero_selected");
  FUN_100652cac(param_1 + 0xeb,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652cac(param_1 + 0x109,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,"draft_ban_symbol")
  ;
  FUN_100650608(plVar13,&DAT_10115a168);
  if ((*(uint *)((long)param_1 + 0x9bc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x9bc) = *(uint *)((long)param_1 + 0x9bc) & 0xffff807f;
    FUN_1000200a0(plVar13);
  }
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_large_circle");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  uVar14 = *(uint *)((long)param_1 + 0xa94);
  if ((uVar14 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xa94) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6600;
    FUN_1000200a0(plVar2);
    uVar14 = *(uint *)((long)param_1 + 0xa94);
  }
  *(uint *)((long)param_1 + 0xa94) = uVar14 & 0xfffffffb;
  FUN_100652cac(plVar3,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,"draft_ban_symbol");
  FUN_100652dd4(plVar3,&DAT_10115a170,2);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  FUN_100651594(plVar7,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_101158298);
  FUN_10065165c(plVar7,1);
  local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0xbd000000);
  FUN_1006516bc(plVar7,&local_68);
  local_68 = (undefined1 *)0x4000000040000000;
  FUN_1006516c8(plVar7,&local_68);
  uVar11 = FUN_1004e0150("GENERIC_HERO_FEATURED_FREE_ROTATION",0);
  FUN_1006513c0(plVar7,uVar11);
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(plVar8,&DAT_101158298,2);
  *(byte *)(param_1 + 0x254) = *(byte *)(param_1 + 0x254) | 1;
  fVar15 = (float)FUN_1006531b0(plVar8);
  FUN_10064e4a0(plVar8,(ulong)(uint)(int)fVar15 | 0x300000000);
  local_68._0_2_ = 7;
  FUN_10064e5b8(plVar8,&local_68);
  FUN_100652cac(plVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(plVar9,&DAT_101158298,2);
  fVar15 = (float)FUN_1006531b0(plVar9);
  FUN_10064e4a0(plVar9,(ulong)(uint)(int)fVar15 | 0x300000000);
  local_68 = (undefined1 *)CONCAT62(local_68._2_6_,7);
  FUN_10064e5b8(plVar9,&local_68);
  plVar12 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar12 + 0x58))(plVar12,plVar8);
  (**(code **)(*plVar12 + 0x58))(plVar12,plVar9);
  plVar13 = (long *)thunk_FUN_10064de70();
  FUN_10064e524(plVar6,plVar13);
  (**(code **)(*plVar13 + 0x68))(plVar13,plVar7,8,2);
  (**(code **)(*plVar13 + 0x80))(plVar13,plVar12,0);
  *(uint *)((long)param_1 + 0xfc4) = *(uint *)((long)param_1 + 0xfc4) & 0xfffffffb;
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x1bf) = *(byte *)(param_1 + 0x1bf) | 2;
  uVar14 = *(uint *)((long)param_1 + 0xda4);
  if ((uVar14 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xda4) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6600;
    FUN_1000200a0(plVar5);
  }
  FUN_100651038(param_1 + 0x1c2,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  FUN_100530048(param_1,1);
  *(uint *)((long)param_1 + 0x2c4) = *(uint *)((long)param_1 + 0x2c4) & 0xffffffef;
  FUN_100650608(plVar1,&DAT_10115828c);
  *(uint *)(param_1[0x276] + 0x84) = *(uint *)(param_1[0x276] + 0x84) & 0xfffffffb;
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_68);
  return param_1;
}




void FUN_1001d163c(float param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)(param_1 + -18.0);
  uVar1 = CONCAT44((int)(param_1 + -10.0),(int)(param_1 + -10.0));
  FUN_10064e4a0(param_2 + 0x2f8,uVar1);
  FUN_10064e4a0(param_2 + 0x3b0,uVar1);
  uVar1 = CONCAT44(iVar2,iVar2);
  FUN_10064e4a0(param_2 + 0x488,uVar1);
  FUN_10064e4a0(param_2 + 0xd20,CONCAT44((int)((float)(int)(param_1 + -18.0) * 0.4),iVar2));
  if ((*(float *)(param_2 + 0x5c0) != 1.27) || (*(float *)(param_2 + 0x5c4) != 1.27)) {
    *(undefined8 *)(param_2 + 0x5c0) = 0x3fa28f5c3fa28f5c;
    FUN_1000200a0(param_2 + 0x578);
  }
  FUN_10064e4a0(param_2 + 0x578,uVar1);
  FUN_10064e4a0(param_2 + 0x668,uVar1);
  FUN_10064e4a0(param_2 + 0x758,uVar1);
  FUN_10064e4a0(param_2 + 0x848,uVar1);
  FUN_10064e4a0(param_2 + 0x938,uVar1);
  FUN_1001d1750(param_2);
  return;
}




void FUN_1001d1750(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  FUN_10064e68c(0,0,param_1 + 0x2f8,8);
  FUN_10064e68c(0,0,param_1 + 0x3b0,8);
  lVar1 = param_1 + 0x488;
  FUN_10064e68c(0,0,lVar1,8);
  FUN_10064e68c(0,0,param_1 + 0x578,8);
  FUN_10064e68c(0,0,param_1 + 0x668,8);
  FUN_10064e68c(0,0,param_1 + 0x758,8);
  FUN_10064e68c(0,0,param_1 + 0x848,8);
  lVar3 = param_1 + 0xa10;
  FUN_10064e5ec(0x40a00000,0x40a00000,lVar3,0,lVar1,0);
  FUN_10064e68c(0,0,param_1 + 0xb00,8);
  FUN_10064e72c(0x40a00000,param_1 + 0xbf0,3,lVar3,1);
  FUN_10064e72c(0,param_1 + 0xbf0,5,lVar3,5);
  FUN_10064e5ec(0,0,param_1 + 0xd20,6,lVar1,6);
  lVar3 = param_1 + 0xe10;
  fVar4 = (float)FUN_100652e60(lVar1);
  FUN_10065179c(fVar4 * 0.95,0,0x3f800000,lVar3);
  FUN_1006574dc(0,0xc1a00000,lVar3,6,lVar1,6);
  fVar4 = (float)FUN_100652e60(lVar1);
  FUN_10065179c(fVar4 * 0.8,0,0x3f800000,param_1 + 0x1098);
  lVar2 = param_1 + 0xf40;
  FUN_1006557ec(lVar2);
  FUN_10064e32c(lVar2);
  FUN_10064e72c(0xc1200000,*(undefined8 *)(param_1 + 0x13b0),2,lVar1,2);
  FUN_10064e72c(0,*(undefined8 *)(param_1 + 0x13b0),4,lVar1,4);
  if ((*(byte *)(param_1 + 0xe94) >> 2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x13b0);
  }
  FUN_10064e5ec(0,0,lVar2,6,lVar3,4);
  return;
}




void FUN_1001d1974(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  
  FUN_1001e34dc(param_1 + 0x488);
  FUN_1006513c0(param_1 + 0xe10,param_3);
  uVar1 = 4;
  if (param_4 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0xfc4) = *(uint *)(param_1 + 0xfc4) & 0xfffffffb | uVar1;
  FUN_1001d1750(param_1);
  return;
}




void FUN_1001d19d4(long param_1)

{
  *(uint *)(param_1 + 0x5fc) = *(uint *)(param_1 + 0x5fc) & 0xfffffffb;
  *(uint *)(param_1 + 0x6ec) = *(uint *)(param_1 + 0x6ec) & 0xfffffffb;
  *(uint *)(param_1 + 0x8cc) = *(uint *)(param_1 + 0x8cc) & 0xfffffffb;
  *(uint *)(param_1 + 0xc74) = *(uint *)(param_1 + 0xc74) & 0xfffffffb;
  *(uint *)(param_1 + 0xa94) = *(uint *)(param_1 + 0xa94) & 0xfffffffb;
  *(uint *)(param_1 + 0x7dc) =
       *(uint *)(param_1 + 0x7dc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x7dc) & 3 | (uint)(*(char *)(param_1 + 0x13bc) == '\0') << 2;
  return;
}




void FUN_1001d1a30(undefined1 param_1 [16],float param_2,long param_3,int param_4)

{
  long lVar1;
  float fVar2;
  float local_68;
  float fStack_64;
  undefined1 auStack_60 [8];
  void *local_58;
  
  *(uint *)(param_3 + 0xc74) =
       *(uint *)(param_3 + 0xc74) & 0xfffffff8 |
       *(uint *)(param_3 + 0xc74) & 3 | (uint)(param_4 != 0) << 2;
  *(uint *)(param_3 + 0xa94) =
       *(uint *)(param_3 + 0xa94) & 0xfffffff8 |
       *(uint *)(param_3 + 0xa94) & 3 | (uint)(param_4 != 0) << 2;
  if (param_4 != 0) {
    lVar1 = param_3 + 0xbf0;
    FUN_1004e313c(auStack_60);
    FUN_1004e38ac(auStack_60,"x%d");
    FUN_1006513c0(lVar1,auStack_60);
    FUN_100651184(lVar1);
    fVar2 = param_2 + -10.0;
    FUN_100651184(lVar1);
    FUN_10064e4a0(param_3 + 0xb00,CONCAT44((int)(param_2 + -10.0),(int)fVar2));
    local_68 = (float)FUN_100652e60(param_3 + 0xb00);
    local_68 = local_68 * 1.1;
    fStack_64 = param_2 * 1.1;
    FUN_10064e48c(param_3 + 0xa10,&local_68);
    FUN_1001d1750(param_3);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
  }
  return;
}




void FUN_1001d1b38(long param_1)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 0x5fc) = *(uint *)(param_1 + 0x5fc) & 0xfffffffb;
  FUN_100642324(param_1 + 0x240);
  uVar1 = FUN_100640db8(*(undefined4 *)(param_1 + 0x13b8),*(undefined4 *)(param_1 + 0x13b8),
                        0x3dcccccd,0);
  FUN_10063f130(uVar1,FUN_1000d05c0);
  FUN_100642b14(param_1 + 0x240,uVar1);
  return;
}




void FUN_1001d1b9c(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  *(uint *)(param_1 + 0x5fc) = *(uint *)(param_1 + 0x5fc) | 4;
  FUN_100642324(param_1 + 0x240);
  fVar2 = *(float *)(param_1 + 0x13b8) * 1.1;
  uVar1 = FUN_100640db8(fVar2,fVar2,0x3dcccccd,0);
  FUN_10063f130(uVar1,FUN_1000d05c0);
  FUN_100642b14(param_1 + 0x240,uVar1);
  return;
}




void FUN_1001d1c0c(long param_1)

{
  *(uint *)(param_1 + 0x6ec) = *(uint *)(param_1 + 0x6ec) | 4;
  return;
}




void FUN_1001d1c1c(long param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_101158290;
  if (param_2 == 0) {
    puVar1 = &DAT_101158294;
  }
  FUN_100652dd4(param_1 + 0x758,puVar1,2);
  uVar2 = *(uint *)(param_1 + 0x7dc);
  if ((uVar2 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0x7dc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x6600;
    FUN_1000200a0(param_1 + 0x758);
    uVar2 = *(uint *)(param_1 + 0x7dc);
  }
  *(uint *)(param_1 + 0x7dc) = uVar2 | 4;
  return;
}




void FUN_1001d1c94(long param_1)

{
  uint uVar1;
  
  FUN_1001d1c1c();
  uVar1 = *(uint *)(param_1 + 0x8cc);
  *(uint *)(param_1 + 0x8cc) = uVar1 | 4;
  if ((uVar1 & 0x7f80) == 0x1300) {
    return;
  }
  *(uint *)(param_1 + 0x8cc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x1304;
  FUN_1000200a0(param_1 + 0x848);
  return;
}




void FUN_1001d1cec(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_38 [2];
  
  *(char *)(param_1 + 0x13bc) = (char)param_2;
  uVar2 = 0x3f800000;
  if (param_2 == 0) {
    uVar2 = 0x3dcccccd;
  }
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = 4;
  }
  FUN_100652e14(uVar2,param_1 + 0x488);
  *(uint *)(param_1 + 0x7dc) = *(uint *)(param_1 + 0x7dc) & 0xfffffffb | uVar1;
  if ((param_2 & 1) == 0) {
    local_38[0] = 0xff0a0a0a;
    FUN_100652dd4(param_1 + 0x758,local_38,2);
    uVar1 = *(uint *)(param_1 + 0x7dc);
    if ((uVar1 & 0x7f80) != 0x3300) {
      *(uint *)(param_1 + 0x7dc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x3300;
      FUN_1000200a0(param_1 + 0x758);
    }
  }
  return;
}




void FUN_1001d1da4(long param_1)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38);
  FUN_1001f297c(param_1 + 0x13a8,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *(uint *)(param_1 + 0xda4) = *(uint *)(param_1 + 0xda4) & 0xfffffffb;
  *(uint *)(param_1 + 0xe94) = *(uint *)(param_1 + 0xe94) & 0xfffffffb;
  *(uint *)(*(long *)(param_1 + 0x13b0) + 0x84) = *(uint *)(*(long *)(param_1 + 0x13b0) + 0x84) | 4;
  return;
}




void FUN_1001d1e1c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_10064081c();
  uVar2 = FUN_100640db8(0x3f866666,0x3f866666,0x3e4ccccd,0);
  FUN_10063f130(uVar2,FUN_1000d05c0);
  uVar2 = FUN_100640db8(*(undefined4 *)(param_2 + 0x13b8),*(undefined4 *)(param_2 + 0x13b8),
                        0x3e99999a,0);
  FUN_10063f130(uVar2,FUN_1000d05c0);
  FUN_100642324(param_2 + 0x240);
  FUN_100642b7c(param_2 + 0x240,uVar1);
  uVar1 = FUN_10064081c(param_1);
  uVar2 = FUN_100640840(0x3f000000,0x3e4ccccd,0);
  FUN_10063f130(uVar2,FUN_1000d05c0);
  uVar2 = FUN_100640840(0,0x3e99999a,0);
  FUN_10063f130(uVar2,FUN_10001f4ac);
  FUN_100642324(param_2 + 0x938);
  FUN_100642b7c(param_2 + 0x938,uVar1);
  return;
}




void FUN_1001d1f50(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  
  iVar2 = FUN_100530020();
  lVar1 = param_1 + 0x240;
  FUN_100642324(lVar1);
  if (iVar2 == 0) {
    uVar3 = FUN_100640db8(*(undefined4 *)(param_1 + 0x13b8),*(undefined4 *)(param_1 + 0x13b8),
                          0x3dcccccd,0);
    FUN_10063f130(uVar3,FUN_10001f4ac);
    FUN_100642b14(lVar1,uVar3);
    return;
  }
  if (iVar2 == 1) {
    plVar4 = *(long **)(param_1 + 0x20);
    FUN_1006423ec(param_1,1);
    (**(code **)(*plVar4 + 0x78))(plVar4,param_1,1);
    if ((*(float *)(param_1 + 0x288) != 0.8) || (*(float *)(param_1 + 0x28c) != 0.8)) {
      *(undefined8 *)(param_1 + 0x288) = 0x3f4ccccd3f4ccccd;
      FUN_1000200a0(lVar1);
      return;
    }
  }
  return;
}




long * FUN_1001d2040(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_100650568();
  *puVar4 = &PTR_FUN_101467028;
  puVar4[0x17] = &PTR_FUN_101467188;
  puVar4 = puVar4 + 0x1b;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x39;
  FUN_1006505b8(plVar1);
  thunk_FUN_100652c08(param_1 + 0x54);
  plVar2 = param_1 + 0x72;
  FUN_10064f3dc(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x54,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(puVar4,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,"draft_ban_symbol");
  uVar3 = *(uint *)((long)param_1 + 0x15c);
  if ((uVar3 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x15c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x6600;
    FUN_1000200a0(puVar4);
  }
  FUN_100650608(plVar1,&DAT_10115a164);
  uVar3 = *(uint *)((long)param_1 + 0x24c);
  if ((uVar3 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x24c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x6600;
    FUN_1000200a0(plVar1);
  }
  FUN_10064f4ec(plVar2,PTR_DAT_101854950);
  FUN_10064f7ec(0x3d072b02,plVar2);
  FUN_10064f828(plVar2,1);
  FUN_10064f7f4(plVar2,1);
  FUN_10064f7dc(plVar2);
  FUN_1001d21dc(param_1);
  return param_1;
}




void FUN_1001d21dc(long param_1)

{
  FUN_10064e5ec(0,0,param_1 + 0x2a0,8,param_1,8);
  FUN_10064e5ec(0,0,param_1 + 0x1c8,8,param_1,8);
  FUN_10064e5ec(0,0,param_1 + 0xd8,8,param_1,8);
  FUN_10064e5ec(0,0,param_1 + 0x390,8,param_1,8);
  return;
}




void FUN_1001d2264(long param_1,long *param_2,int param_3)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar1 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  uVar3 = *(uint *)(param_1 + 0x15c);
  if (uVar1 == 0) {
    *(uint *)(param_1 + 0x15c) = uVar3 | 4;
    if ((uVar3 & 0x7f80) != 0x1f80) {
      *(uint *)(param_1 + 0x15c) = uVar3 & 0xffff807f | 0x1f84;
      FUN_1000200a0(param_1 + 0xd8);
    }
    *(uint *)(param_1 + 0x324) = *(uint *)(param_1 + 0x324) & 0xfffffffb;
  }
  else {
    uVar4 = 4;
    if (param_3 == 0) {
      uVar4 = 0;
    }
    *(uint *)(param_1 + 0x15c) = uVar3 & 0xfffffffb | uVar4;
    if ((uVar3 & 0x7f80) != 0x6600) {
      *(uint *)(param_1 + 0x15c) = uVar3 & 0xffff8000 | uVar3 & 0x7b | uVar4 | 0x6600;
      FUN_1000200a0(param_1 + 0xd8);
    }
    *(uint *)(param_1 + 0x324) = *(uint *)(param_1 + 0x324) | 4;
    plVar2 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar2 = param_2;
    }
    FUN_1001e34dc(param_1 + 0x2a0,plVar2);
  }
  uVar5 = 0x3f800000;
  if (param_3 == 0) {
    uVar5 = 0;
  }
  FUN_100652e14(uVar5,param_1 + 0x2a0);
  FUN_1001d21dc(param_1);
  return;
}




void FUN_1001d2364(float param_1,float param_2,long param_3)

{
  FUN_10064e47c(param_1 + -8.0,param_2 + -8.0,param_3 + 0x2a0);
  FUN_10064e47c(param_1 + -8.0,param_2 + -8.0,param_3 + 0x1c8);
  FUN_10064e47c(param_1 + -35.0,param_2 + -35.0,param_3 + 0xd8);
  FUN_10064e47c(param_1 + 4.0,param_2 + 4.0,param_3 + 0x390);
  FUN_1001d21dc(param_3);
  return;
}




long * FUN_1001d23f4(long *param_1,undefined1 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_FUN_1014671d0;
  puVar5[0x17] = 0;
  puVar5[0x18] = 0;
  puVar5 = puVar5 + 0x19;
  thunk_FUN_100652c08(puVar5);
  plVar1 = param_1 + 0x37;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x55;
  thunk_FUN_100650e64(plVar2);
  FUN_10064e264(param_1 + 0x7b);
  *(undefined1 *)(param_1 + 0x92) = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x7b,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  uVar6 = FUN_1004e0150("MENU_DRAFT_LOBBY_LABEL_BANS",0);
  FUN_1006513c0(plVar2,uVar6);
  FUN_10064e5b8(plVar2,&DAT_101dbd510);
  puVar3 = &DAT_10115829c;
  if ((char)param_1[0x92] != '\0') {
    puVar3 = &DAT_1011582a0;
  }
  FUN_100651460(plVar2,puVar3);
  FUN_100652cac(puVar5,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,"draft_bans_bg");
  puVar3 = &DAT_101158280;
  if ((char)param_1[0x92] != '\0') {
    puVar3 = &DAT_10115827c;
  }
  FUN_100652dd4(puVar5,puVar3,2);
  FUN_100652dfc(puVar5,4);
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xfe | *(byte *)(param_1 + 0x92);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  uVar4 = *(uint *)((long)param_1 + 0x23c);
  if ((uVar4 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x23c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x3300;
    FUN_1000200a0(plVar1);
  }
  *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x52) & 0xfe | *(byte *)(param_1 + 0x92);
  return param_1;
}




long * thunk_FUN_1001d23f4(long *param_1,undefined1 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_FUN_1014671d0;
  puVar5[0x17] = 0;
  puVar5[0x18] = 0;
  puVar5 = puVar5 + 0x19;
  thunk_FUN_100652c08(puVar5);
  plVar1 = param_1 + 0x37;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x55;
  thunk_FUN_100650e64(plVar2);
  FUN_10064e264(param_1 + 0x7b);
  *(undefined1 *)(param_1 + 0x92) = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x7b,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  uVar6 = FUN_1004e0150("MENU_DRAFT_LOBBY_LABEL_BANS",0);
  FUN_1006513c0(plVar2,uVar6);
  FUN_10064e5b8(plVar2,&DAT_101dbd510);
  puVar3 = &DAT_10115829c;
  if ((char)param_1[0x92] != '\0') {
    puVar3 = &DAT_1011582a0;
  }
  FUN_100651460(plVar2,puVar3);
  FUN_100652cac(puVar5,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,"draft_bans_bg");
  puVar3 = &DAT_101158280;
  if ((char)param_1[0x92] != '\0') {
    puVar3 = &DAT_10115827c;
  }
  FUN_100652dd4(puVar5,puVar3,2);
  FUN_100652dfc(puVar5,4);
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xfe | *(byte *)(param_1 + 0x92);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  uVar4 = *(uint *)((long)param_1 + 0x23c);
  if ((uVar4 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x23c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x3300;
    FUN_1000200a0(plVar1);
  }
  *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x52) & 0xfe | *(byte *)(param_1 + 0x92);
  return param_1;
}




void FUN_1001d25fc(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_58;
  
  FUN_100642378(param_1 + 0x3d8,0);
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (0 < param_2) {
    do {
      uVar2 = FUN_1001d26c0(param_1 + 0x3d8,1);
      FUN_10064e47c(0x43020000,0x43020000);
      puVar1 = &DAT_101158288;
      if (*(char *)(param_1 + 0x490) != '\0') {
        puVar1 = &DAT_101158284;
      }
      FUN_100650608(uVar2,puVar1);
      local_58 = uVar2;
      FUN_1001d2734((undefined4 *)(param_1 + 0xb8),&local_58);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}




void * FUN_1001d26c0(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x4b8);
  lVar2 = FUN_1001d2040();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_1001d2734(uint *param_1,undefined8 *param_2)

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
    FUN_1001d8350(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1001d27b4(long param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  if (uVar1 != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      if (uVar3 < *param_2 && uVar3 < *param_3) {
        FUN_1001d2264(*(undefined8 *)(*(long *)(param_1 + 0xc0) + uVar3 * 8),
                      *(long *)(param_2 + 2) + lVar2,*(undefined1 *)(*(long *)(param_3 + 2) + uVar3)
                     );
        uVar1 = *(uint *)(param_1 + 0xb8);
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar3 < uVar1);
  }
  return;
}




void FUN_1001d283c(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    uVar1 = 0;
    do {
      if (param_2 == uVar1) {
        lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + (ulong)param_2 * 8);
        uVar3 = *(uint *)(lVar2 + 0x414) | 4;
      }
      else {
        lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + uVar1 * 8);
        uVar3 = *(uint *)(lVar2 + 0x414) & 0xfffffffb;
      }
      *(uint *)(lVar2 + 0x414) = uVar3;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xb8));
  }
  return;
}




undefined8 FUN_1001d288c(void)

{
  return 0xe600000000;
}




void FUN_1001d2894(float param_1,float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar1 = param_3 + 0x19;
  FUN_10064e4a0(plVar1,CONCAT44((int)(param_2 + -4.0),(int)param_1));
  plVar2 = param_3 + 0x37;
  FUN_10064e4a0(plVar2,(ulong)(uint)(int)(param_1 + -80.0) | 0x400000000);
  FUN_10064e72c(0,plVar2,0,plVar1,2);
  if ((char)param_3[0x92] == '\0') {
    uVar3 = 3;
    uVar4 = 3;
  }
  else {
    uVar3 = 1;
    uVar4 = 1;
  }
  FUN_10064e72c(0,plVar2,uVar3,plVar1,uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001001d295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x90))(param_3);
  return;
}




void FUN_1001d2960(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int local_48;
  int local_44;
  
  FUN_10016aeec(&local_44,0,&local_48,0);
  lVar1 = param_1 + 0x2a8;
  if (*(char *)(param_1 + 0x490) == '\0') {
    FUN_10064e68c((float)local_44 + 15.0,0x41700000,lVar1,0);
    if (*(int *)(param_1 + 0xb8) != 0) {
      FUN_10064e72c(0,**(undefined8 **)(param_1 + 0xc0),3,lVar1,3);
      if (1 < *(uint *)(param_1 + 0xb8)) {
        lVar6 = 0;
        do {
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0xc0) + lVar6 * 8);
          uVar4 = *puVar3;
          uVar5 = puVar3[1];
          FUN_10064e72c(0x41a00000,uVar5,3,uVar4,1);
          FUN_10064e72c(0,uVar5,5,uVar4,5);
          uVar2 = lVar6 + 2;
          lVar6 = lVar6 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0xb8));
      }
    }
    FUN_10064e32c(param_1 + 0x3d8);
    FUN_10064e72c(0x40a00000,param_1 + 0x3d8,0,lVar1,2);
    uVar4 = 3;
    uVar5 = 3;
  }
  else {
    FUN_10064e68c(-15.0 - (float)local_48,0x41700000,lVar1,1);
    if (*(int *)(param_1 + 0xb8) != 0) {
      FUN_10064e72c(0,**(undefined8 **)(param_1 + 0xc0),1,lVar1,1);
      if (1 < *(uint *)(param_1 + 0xb8)) {
        lVar6 = 0;
        do {
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0xc0) + lVar6 * 8);
          uVar4 = *puVar3;
          uVar5 = puVar3[1];
          FUN_10064e72c(0xc1a00000,uVar5,1,uVar4,3);
          FUN_10064e72c(0,uVar5,5,uVar4,5);
          uVar2 = lVar6 + 2;
          lVar6 = lVar6 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0xb8));
      }
    }
    FUN_10064e32c(param_1 + 0x3d8);
    FUN_10064e72c(0x40a00000,param_1 + 0x3d8,0,lVar1,2);
    uVar4 = 1;
    uVar5 = 1;
  }
  FUN_10064e72c(0,param_1 + 0x3d8,uVar4,lVar1,uVar5);
  return;
}




long * FUN_1001d2b74(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 local_70;
  void *local_68;
  
  puVar7 = (undefined8 *)FUN_100652c08();
  *puVar7 = &PTR_thunk_FUN_1001d7ab4_101467318;
  puVar7[0x17] = &PTR_FUN_101467478;
  puVar7 = puVar7 + 0x1e;
  thunk_FUN_100652c08(puVar7);
  plVar1 = param_1 + 0x3c;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x5a;
  thunk_FUN_100652c08(plVar2);
  FUN_1004e3004(param_1 + 0x79);
  plVar3 = param_1 + 0x7a;
  thunk_FUN_1001cd1dc(plVar3);
  plVar4 = param_1 + 0xa5;
  thunk_FUN_100655644(plVar4);
  plVar5 = param_1 + 0xd0;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0xf6;
  thunk_FUN_100650e64(plVar6);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100655930(plVar4,plVar3,1);
  FUN_100655930(plVar4,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(param_1,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,"draft_header");
  FUN_100652cac(puVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  uVar9 = *(uint *)((long)param_1 + 0x174);
  if ((uVar9 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x174) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x3300;
    FUN_1000200a0(puVar7);
    uVar9 = *(uint *)((long)param_1 + 0x174);
  }
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) | 1;
  *(uint *)((long)param_1 + 0x174) = uVar9 & 0xffffffbf;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  uVar9 = *(uint *)((long)param_1 + 0x264);
  if ((uVar9 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x264) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x3300;
    FUN_1000200a0(plVar1);
    uVar9 = *(uint *)((long)param_1 + 0x264);
  }
  *(uint *)((long)param_1 + 0x264) = uVar9 & 0xffffffbf;
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar9 = *(uint *)((long)param_1 + 0x354);
  if ((uVar9 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x354) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x1980;
    FUN_1000200a0(plVar2);
    uVar9 = *(uint *)((long)param_1 + 0x354);
  }
  *(uint *)((long)param_1 + 0x354) = uVar9 & 0xffffffbf;
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Bold_130_f_10184e260,&DAT_10115a168);
  FUN_1004e3120(&local_70,"[NUMBER_SECONDS]");
  FUN_1001cd23c(plVar3,&local_70,0,1);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  FUN_100651594(plVar6,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250,&DAT_10115a168);
  uVar8 = FUN_1004e0150("MENU_DRAFT_TOOLTIP_WAITING_FOR_PLAYERS",0);
  FUN_1006513c0(plVar6,uVar8);
  local_70 = 0x3f2666663f000000;
  (**(code **)(param_1[0xf6] + 0x28))(plVar6,&local_70);
  if ((*(float *)(param_1 + 0xff) != 0.8) || (*(float *)((long)param_1 + 0x7fc) != 0.8)) {
    param_1[0xff] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar6);
  }
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_24_fo_10184e218);
  uVar8 = FUN_1004e0150("MENU_DRAFT_LOBBY_SECONDS_LABEL_SMALL",0);
  FUN_1006513c0(plVar5,uVar8);
  if ((*(uint *)((long)param_1 + 0x704) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x704) = *(uint *)((long)param_1 + 0x704) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar5);
  }
  return param_1;
}




long * thunk_FUN_1001d2b74(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uStack_70;
  void *pvStack_68;
  
  puVar7 = (undefined8 *)FUN_100652c08();
  *puVar7 = &PTR_thunk_FUN_1001d7ab4_101467318;
  puVar7[0x17] = &PTR_FUN_101467478;
  puVar7 = puVar7 + 0x1e;
  thunk_FUN_100652c08(puVar7);
  plVar1 = param_1 + 0x3c;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x5a;
  thunk_FUN_100652c08(plVar2);
  FUN_1004e3004(param_1 + 0x79);
  plVar3 = param_1 + 0x7a;
  thunk_FUN_1001cd1dc(plVar3);
  plVar4 = param_1 + 0xa5;
  thunk_FUN_100655644(plVar4);
  plVar5 = param_1 + 0xd0;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0xf6;
  thunk_FUN_100650e64(plVar6);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100655930(plVar4,plVar3,1);
  FUN_100655930(plVar4,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(param_1,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,"draft_header");
  FUN_100652cac(puVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  uVar9 = *(uint *)((long)param_1 + 0x174);
  if ((uVar9 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x174) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x3300;
    FUN_1000200a0(puVar7);
    uVar9 = *(uint *)((long)param_1 + 0x174);
  }
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) | 1;
  *(uint *)((long)param_1 + 0x174) = uVar9 & 0xffffffbf;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  uVar9 = *(uint *)((long)param_1 + 0x264);
  if ((uVar9 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x264) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x3300;
    FUN_1000200a0(plVar1);
    uVar9 = *(uint *)((long)param_1 + 0x264);
  }
  *(uint *)((long)param_1 + 0x264) = uVar9 & 0xffffffbf;
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar9 = *(uint *)((long)param_1 + 0x354);
  if ((uVar9 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x354) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x1980;
    FUN_1000200a0(plVar2);
    uVar9 = *(uint *)((long)param_1 + 0x354);
  }
  *(uint *)((long)param_1 + 0x354) = uVar9 & 0xffffffbf;
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Bold_130_f_10184e260,&DAT_10115a168);
  FUN_1004e3120(&uStack_70,"[NUMBER_SECONDS]");
  FUN_1001cd23c(plVar3,&uStack_70,0,1);
  if (pvStack_68 != (void *)0x0) {
    operator_delete__(pvStack_68);
  }
  FUN_100651594(plVar6,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250,&DAT_10115a168);
  uVar8 = FUN_1004e0150("MENU_DRAFT_TOOLTIP_WAITING_FOR_PLAYERS",0);
  FUN_1006513c0(plVar6,uVar8);
  uStack_70 = 0x3f2666663f000000;
  (**(code **)(param_1[0xf6] + 0x28))(plVar6,&uStack_70);
  if ((*(float *)(param_1 + 0xff) != 0.8) || (*(float *)((long)param_1 + 0x7fc) != 0.8)) {
    param_1[0xff] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar6);
  }
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_24_fo_10184e218);
  uVar8 = FUN_1004e0150("MENU_DRAFT_LOBBY_SECONDS_LABEL_SMALL",0);
  FUN_1006513c0(plVar5,uVar8);
  if ((*(uint *)((long)param_1 + 0x704) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x704) = *(uint *)((long)param_1 + 0x704) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar5);
  }
  return param_1;
}




void FUN_1001d2f08(long param_1)

{
  undefined4 *puVar1;
  uint64_t uVar2;
  long lVar3;
  
  FUN_1001cd27c(param_1 + 0x3d0);
  lVar3 = *(long *)(param_1 + 0x518);
  uVar2 = _mach_absolute_time();
  puVar1 = &DAT_10115a170;
  if (5 < (long)((double)lVar3 +
                (double)((uVar2 - *(long *)(param_1 + 0x500)) * DAT_101d91638) * -1e-09)) {
    puVar1 = &DAT_10115a168;
  }
  FUN_100651460(param_1 + 0x3d0,puVar1);
  FUN_1001d2f94(param_1);
  return;
}




void FUN_1001d2f94(long param_1)

{
  long lVar1;
  
  FUN_10064e72c(0x41000000,param_1 + 0x680,3,param_1 + 0x3d0,1);
  FUN_10065745c(0,param_1 + 0x680,param_1 + 0x3d0);
  lVar1 = param_1 + 0x528;
  FUN_1006557ec(lVar1);
  FUN_10064e5ec(0,0x42080000,lVar1,6,param_1 + 0xf0,6);
  FUN_10064e72c(0,lVar1,4,param_1,4);
  return;
}




void FUN_1001d3028(float param_1,long param_2)

{
  uint64_t uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long local_38;
  
  uVar1 = _mach_absolute_time();
  fVar2 = (float)((double)((uVar1 - *(long *)(param_2 + 0x3c8)) * DAT_101d91638) * 1e-09);
  param_1 = fVar2 + param_1;
  fVar3 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x3c0),param_1);
  fVar4 = fVar3 - param_1;
  fVar5 = -fVar4;
  if (0.0 <= fVar4) {
    fVar5 = fVar4;
  }
  if (fVar5 <= 2.0) {
    param_1 = fVar3;
  }
  *(float *)(param_2 + 0x3c0) = param_1;
  local_38 = (long)(param_1 - fVar2);
  FUN_1001cd374(param_2 + 0x3d0,&local_38);
  return;
}




void FUN_1001d30cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort *puVar8;
  
  uVar5 = FUN_100655b6c(param_1 + 0x880);
  iVar4 = FUN_1004e36c0(param_2,uVar5);
  if (iVar4 != 0) {
    lVar1 = param_1 + 0x7b0;
    FUN_1006513c0(lVar1,param_2);
    FUN_100642324(lVar1);
    bVar3 = false;
    if ((*(float *)(param_1 + 0x7f8) == 2.5) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x7fc))))
    {
      bVar3 = *(float *)(param_1 + 0x7fc) == 2.5;
    }
    if (!bVar3) {
      uVar5 = NEON_fmov(0x40200000,4);
      *(undefined8 *)(param_1 + 0x7f8) = uVar5;
      FUN_1000200a0(lVar1);
    }
    if ((*(uint *)(param_1 + 0x834) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x834) = *(uint *)(param_1 + 0x834) & 0xffff807f;
      FUN_1000200a0(lVar1);
    }
    uVar5 = FUN_100640db8(0x3f266666,0x3f266666,0x3eb33333,0);
    FUN_10063f130(uVar5,FUN_10001f4c4);
    uVar6 = FUN_100640db8(0x3f4ccccd,0x3f4ccccd,0x3d23d70a,0);
    FUN_10063f130(uVar6,FUN_10001f4c4);
    lVar2 = DAT_101dbd2f8;
    uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar8;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_10063f564(puVar8);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_10063f614(puVar8,uVar5);
    FUN_100640840(0x3f800000,0x3f19999a,0);
    uVar5 = FUN_10001f4d4();
    FUN_10063f2a4(uVar5,puVar8);
    FUN_100642b14(lVar1,uVar5);
    return;
  }
  return;
}




void FUN_1001d32a0(long param_1)

{
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e3120(auStack_30,"[NUMBER_MINUTES][TIME_UNIT_MINUTES][NUMBER_SECONDS][TIME_UNIT_SECONDS]")
  ;
  FUN_1001cd23c(param_1 + 0x3d0,auStack_30,0,1);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  FUN_1006423ec(param_1 + 0x680,1);
  return;
}




void FUN_1001d3304(undefined8 param_1,long param_2)

{
  float fVar1;
  
  fVar1 = (float)param_1 * 0.4;
  FUN_10064e47c(fVar1,0x40800000,param_2 + 0xf0);
  FUN_10064e784(0,0x3f000000,0,0x3f051eb8,0,0,param_2 + 0xf0,param_2);
  FUN_10064e47c(fVar1,0x40800000,param_2 + 0x1e0);
  FUN_10064e784(0x3f800000,0x3f000000,0x3f800000,0x3f051eb8,0,0,param_2 + 0x1e0,param_2);
  FUN_10064e47c(param_1,0x40800000,param_2 + 0x2d0);
  FUN_10064e5ec(0,0,param_2 + 0x2d0,6,param_2,6);
  FUN_10064e784(0x3f000000,0x3f266666,0x3f000000,0x3f47ae14,0,0,param_2 + 0x7b0,param_2);
  FUN_1001d2f94(param_2);
  return;
}




long * FUN_1001d3418(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined2 local_48 [4];
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_FUN_1014674c0;
  puVar5 = puVar5 + 0x17;
  thunk_FUN_100655644(puVar5);
  plVar1 = param_1 + 0x42;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x68;
  thunk_FUN_100655644(plVar2);
  plVar3 = param_1 + 0x93;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xb9;
  thunk_FUN_100652c08(plVar4);
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100655930(puVar5,plVar1,1);
  FUN_100655930(puVar5,plVar2,1);
  FUN_100655930(plVar2,plVar3,1);
  FUN_100655930(plVar2,plVar4,1);
  local_48[0] = 0x34;
  FUN_10064e5b8(param_1,local_48);
  FUN_100652ca4(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652cdc(plVar4,"ice_icon_small");
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  uVar6 = FUN_1004e0150("MAIN_CHARSELECT_LABEL_OWNEDICE",0);
  FUN_1006513c0(plVar1,uVar6);
  return param_1;
}




void FUN_1001d3578(long *param_1)

{
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e313c(auStack_30);
  FUN_1004e38ac(auStack_30,"%d");
  FUN_1006513c0(param_1 + 0x93,auStack_30);
  (**(code **)(*param_1 + 0x138))(param_1);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1001d35e4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001d35ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_1001d35f0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  
  plVar1 = param_1 + 0x42;
  uVar3 = (**(code **)(*param_1 + 0x48))();
  FUN_10065179c(uVar3,0,0x3f800000,plVar1);
  FUN_10064e72c(0,param_1 + 0x93,3,param_1 + 0xb9,1);
  FUN_10064e72c(0,param_1 + 0x93,5,param_1 + 0xb9,5);
  plVar2 = param_1 + 0x68;
  FUN_1006557ec(plVar2);
  FUN_10064e72c(0,plVar2,0,plVar1,2);
  FUN_10064e72c(0,plVar2,4,plVar1,4);
  FUN_1006557ec(param_1 + 0x17);
  FUN_10064e5ec(0,0,param_1 + 0x17,8,param_1,8);
  return;
}




long * FUN_1001d36d4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined2 local_48 [4];
  
  puVar5 = (undefined8 *)FUN_10052fa40();
  *puVar5 = &PTR_FUN_101467610;
  puVar5 = puVar5 + 0x48;
  FUN_1006421a8(puVar5);
  param_1[0x48] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x59;
  thunk_FUN_100655644(plVar1);
  plVar2 = param_1 + 0x84;
  thunk_FUN_100650e64(plVar2);
  thunk_FUN_100652c08(param_1 + 0xaa);
  thunk_FUN_100652c08(param_1 + 200);
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100642bd8(puVar5,plVar1,1);
  FUN_100655930(plVar1,param_1 + 0xaa,1);
  FUN_100655930(plVar1,param_1 + 200,1);
  FUN_100655930(plVar1,plVar2,1);
  iVar4 = FUN_100126c88();
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  if (iVar4 == 0) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220;
  }
  FUN_100651038(plVar2,*ppuVar3);
  *(uint *)((long)param_1 + 0x6c4) = *(uint *)((long)param_1 + 0x6c4) & 0xfffffffb;
  local_48[0] = 0x34;
  FUN_10064e5b8(param_1,local_48);
  return param_1;
}




void FUN_1001d3804(long param_1)

{
  FUN_10064e5ec(0,0,param_1 + 0x240,8,param_1,8);
  FUN_10064e5ec(0,0,param_1 + 0x240,8,param_1,8);
  FUN_10064e5ec(0,0xc1200000,param_1 + 0x420,6,param_1 + 0x550,6);
  FUN_1006557ec(param_1 + 0x2c8);
  FUN_10064e5ec(0,0,param_1 + 0x2c8,8,param_1,8);
  return;
}




void thunk_FUN_1001d3804(void)

{
  FUN_1001d3804();
  return;
}




void FUN_1001d38a0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 local_28 [2];
  
  iVar1 = FUN_100530020();
  if (iVar1 == 0) {
    uVar2 = FUN_100640db8(0x3f800000,0x3f800000,0x3dcccccd,0);
    FUN_10063f130(uVar2,FUN_10001f4ac);
    FUN_100642b14(param_1 + 0x240,uVar2);
    *(uint *)(param_1 + 0x6c4) = *(uint *)(param_1 + 0x6c4) & 0xfffffffb;
    uVar3 = *(uint *)(param_1 + 0x5d4) | 4;
  }
  else {
    if (iVar1 == 3) {
      local_28[0] = 0xff444444;
      FUN_100651460(param_1 + 0x420,local_28);
      uVar3 = *(uint *)(param_1 + 0x5d4);
      if ((uVar3 & 0x7f80) == 0x3300) {
        return;
      }
      *(uint *)(param_1 + 0x5d4) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x3300;
      FUN_1000200a0(param_1 + 0x550);
      return;
    }
    if (iVar1 != 1) goto LAB_1001d3968;
    if ((*(float *)(param_1 + 0x288) != 0.8) || (*(float *)(param_1 + 0x28c) != 0.8)) {
      *(undefined8 *)(param_1 + 0x288) = 0x3f4ccccd3f4ccccd;
      FUN_1000200a0(param_1 + 0x240);
    }
    *(uint *)(param_1 + 0x6c4) = *(uint *)(param_1 + 0x6c4) | 4;
    uVar3 = *(uint *)(param_1 + 0x5d4) & 0xfffffffb;
  }
  *(uint *)(param_1 + 0x5d4) = uVar3;
LAB_1001d3968:
  FUN_100651460(param_1 + 0x420,&DAT_10115a168);
  if ((~*(uint *)(param_1 + 0x5d4) & 0x7f80) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x5d4) = *(uint *)(param_1 + 0x5d4) | 0x7f80;
  FUN_1000200a0(param_1 + 0x550);
  return;
}




long * FUN_1001d39f4(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 auStack_60 [8];
  void *local_58;
  
  puVar5 = (undefined8 *)FUN_1002eca3c(param_3,0);
  *puVar5 = &PTR_FUN_101467768;
  puVar5 = puVar5 + 0x149;
  thunk_FUN_100652c08(puVar5);
  plVar1 = param_3 + 0x167;
  FUN_10064e264(plVar1);
  plVar2 = param_3 + 0x17e;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_3 + 0x19c;
  thunk_FUN_100650e64(plVar3);
  (**(code **)(*param_3 + 0x78))(param_3,puVar5,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  uVar4 = *(uint *)((long)param_3 + 0xacc);
  *(uint *)((long)param_3 + 0xacc) = uVar4 & 0xfffffffb;
  if ((uVar4 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_3 + 0xacc) = uVar4 & 0xffff807b | 0x6600;
    FUN_1000200a0(puVar5);
  }
  plVar6 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar6 + 0x60))(plVar6,plVar2,0x12);
  (**(code **)(*plVar6 + 0x60))(plVar6,plVar3,10);
  FUN_10064e524(plVar1,plVar6);
  FUN_100652ca4(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652cdc(plVar2,"ice_icon_small");
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  FUN_1004e3120(auStack_60,"0");
  FUN_1006513c0(plVar3,auStack_60);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  FUN_100652e60(plVar2);
  FUN_100651184(plVar3);
  FUN_10064e47c(0x43fa0000,param_2,plVar1);
  *(uint *)((long)param_3 + 0xbbc) = *(uint *)((long)param_3 + 0xbbc) & 0xfffffffb;
  return param_3;
}




undefined8 FUN_1001d3bd0(void)

{
  return 0xe6000001f4;
}




void FUN_1001d3bdc(long *param_1)

{
  undefined8 uVar1;
  
  *(uint *)((long)param_1 + 0xacc) = *(uint *)((long)param_1 + 0xacc) & 0xfffffffb;
  uVar1 = FUN_1004e0150("MENU_DRAFT_LOBBY_BUTTON_HERO_NOT_OWNED",0);
  FUN_1002ecce4(param_1,uVar1);
  FUN_1002eb970(param_1,2);
  FUN_100652dd4(param_1 + 0xc6,&DAT_10115a168,2);
  FUN_100530068(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001001d3c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))(param_1);
  return;
}




void FUN_1001d3c58(long *param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN_100652d8c(param_1 + 0x149);
  FUN_100652cac(param_1 + 0x149,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,"draft_ban_symbol")
  ;
  *(uint *)((long)param_1 + 0xacc) = *(uint *)((long)param_1 + 0xacc) | 4;
  pcVar1 = "MENU_DRAFT_BUTTON_BAN";
  if (param_3 == 0) {
    pcVar1 = "MENU_DRAFT_BUTTON_SUGGEST_BAN";
  }
  uVar3 = FUN_1004e0150(pcVar1,0);
  FUN_1002ecce4(param_1,uVar3);
  FUN_1002eb970(param_1,5);
  FUN_100652dd4(param_1 + 0xc6,&DAT_10115a170,2);
  FUN_100530068(param_1,param_2);
  lVar2 = 0x150;
  if ((int)param_2 == 0) {
    lVar2 = 0x158;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001d3d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar2))(param_1);
  return;
}




void FUN_1001d3d2c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_100652d8c(param_1 + 0x149);
  FUN_100652cac(param_1 + 0x149,DAT_101854a08,"white_checkmark");
  *(uint *)((long)param_1 + 0xacc) = *(uint *)((long)param_1 + 0xacc) | 4;
  uVar2 = FUN_1004e0150("MAIN_CHARSELECT_LABEL_LOCKIN",0);
  FUN_1002ecce4(param_1,uVar2);
  FUN_1002eb970(param_1,5);
  FUN_100652dd4(param_1 + 0xc6,&DAT_10115a174,2);
  FUN_100530068(param_1,param_2);
  lVar1 = 0x150;
  if ((int)param_2 == 0) {
    lVar1 = 0x158;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001d3de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar1))(param_1);
  return;
}




void FUN_1001d3dec(long param_1,undefined8 param_2)

{
  undefined1 auStack_40 [8];
  void *local_38;
  
  FUN_1004e313c(auStack_40);
  FUN_1004e38ac(auStack_40,"%u");
  FUN_1006513c0(param_1 + 0xce0,auStack_40);
  FUN_1001d3e60(param_1,param_2);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1001d3e60(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1004e0150("MAIN_CHARSELECT_LABEL_REROLL",0);
  FUN_1002ecce4(param_1,uVar1);
  FUN_1002eb970(param_1,3);
  FUN_1002eccb4(param_1,&DAT_10115a168);
  *(uint *)((long)param_1 + 0x564) = *(uint *)((long)param_1 + 0x564) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xacc) = *(uint *)((long)param_1 + 0xacc) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xbbc) = *(uint *)((long)param_1 + 0xbbc) | 4;
  FUN_1002ebf0c(param_1);
  FUN_100530068(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001001d3ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))(param_1);
  return;
}




void FUN_1001d3efc(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x414);
  uVar2 = 0x33;
  if (param_2 == 0) {
    uVar2 = 0xff;
  }
  if (uVar2 != (uVar1 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x414) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
    FUN_1000200a0(param_1 + 0x390);
  }
  uVar1 = *(uint *)(param_1 + 0x564);
  if (uVar2 != (uVar1 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x564) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
    FUN_1000200a0(param_1 + 0x4e0);
  }
  uVar1 = *(uint *)(param_1 + 0x6b4);
  if (uVar2 != (uVar1 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x6b4) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
    FUN_1000200a0(param_1 + 0x630);
  }
  uVar1 = *(uint *)(param_1 + 0x98c);
  if (uVar2 != (uVar1 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x98c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
    FUN_1000200a0(param_1 + 0x908);
  }
  uVar1 = *(uint *)(param_1 + 0xacc);
  uVar2 = 0x33;
  if (param_2 == 0) {
    uVar2 = 0xcc;
  }
  if (uVar2 == (uVar1 >> 7 & 0xff)) {
    return;
  }
  *(uint *)(param_1 + 0xacc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
  FUN_1000200a0(param_1 + 0xa48);
  return;
}




void FUN_1001d3ff0(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  float fVar5;
  
  FUN_1002ecaf4();
  if ((*(byte *)((long)param_3 + 0xacc) >> 2 & 1) == 0) {
    if ((*(byte *)((long)param_3 + 0xbbc) >> 2 & 1) == 0) {
      return;
    }
    plVar1 = param_3 + 0x167;
    plVar3 = param_3 + 0x121;
    FUN_10064e5ec(0,0,plVar3,6,param_3,8);
    FUN_10064e72c(0,plVar1,0,plVar3,2);
    uVar2 = 4;
    uVar4 = 4;
  }
  else {
    plVar3 = param_3 + 0x149;
    (**(code **)(*param_3 + 0x48))(param_3);
    fVar5 = param_2 * 0.45454544;
    (**(code **)(*param_3 + 0x48))(param_3);
    FUN_10064e4a0(plVar3,CONCAT44((int)(param_2 * 0.45454544),(int)fVar5));
    plVar1 = param_3 + 0x121;
    FUN_100651184(plVar1);
    FUN_10064e5ec(0,param_2 * -0.5,plVar3,8,param_3,8);
    uVar2 = 0;
    uVar4 = 2;
  }
  FUN_10064e72c(0,plVar1,uVar2,plVar3,uVar4);
  return;
}




long * FUN_1001d4124(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_100655644();
  *puVar2 = &PTR_FUN_101467900;
  puVar2[0x2b] = 0;
  puVar2[0x2c] = 0;
  thunk_FUN_100655644(puVar2 + 0x2d);
  plVar1 = param_1 + 0x58;
  thunk_FUN_100650e64(plVar1);
  *(undefined4 *)(param_1 + 0x7e) = 4;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2 + 0x2d,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  return param_1;
}




void FUN_1001d41c4(uint *param_1,undefined8 *param_2)

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
    FUN_1001d83cc(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined8 FUN_1001d4244(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (*(uint *)(param_1 + 0x158) != 0) {
    plVar3 = *(long **)(param_1 + 0x160);
    lVar2 = (ulong)*(uint *)(param_1 + 0x158) << 3;
    do {
      if (*plVar3 == param_2) {
        iVar1 = FUN_100642d08(param_2);
        if (iVar1 != 0) {
          FUN_1006423ec(*plVar3,1);
        }
        FUN_1001d8448(param_1 + 0x158,plVar3,plVar3 + 1);
        return 1;
      }
      plVar3 = plVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return 0;
}




void FUN_1001d42bc(float param_1,long param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float local_48;
  float fStack_44;
  
  FUN_10064140c(&fStack_44,&local_48);
  iVar4 = FUN_10012709c();
  if (iVar4 == 1) {
    *(undefined4 *)(param_2 + 0x3f0) = 8;
    fVar12 = 8.0;
  }
  else if (fStack_44 / local_48 <= 1.8333334) {
    *(undefined4 *)(param_2 + 0x3f0) = 4;
    fVar12 = 4.0;
  }
  else {
    *(undefined4 *)(param_2 + 0x3f0) = 5;
    fVar12 = 5.0;
  }
  if (*(int *)(param_2 + 0x158) != 0) {
    uVar11 = 0;
    do {
      FUN_10064e47c(param_1 / fVar12,param_1 / fVar12,
                    *(undefined8 *)(*(long *)(param_2 + 0x160) + uVar11 * 8));
      uVar11 = uVar11 + 1;
      uVar9 = *(uint *)(param_2 + 0x158);
    } while (uVar11 < uVar9);
    if (uVar9 != 0) {
      lVar5 = **(long **)(param_2 + 0x160);
      bVar3 = false;
      if ((*(float *)(lVar5 + 0x44) == 0.0) && (bVar3 = false, !NAN(*(float *)(lVar5 + 0x40)))) {
        bVar3 = *(float *)(lVar5 + 0x40) == 0.0;
      }
      if (!bVar3) {
        *(undefined8 *)(lVar5 + 0x40) = 0;
        FUN_1000200a0();
        uVar9 = *(uint *)(param_2 + 0x158);
      }
      if (1 < uVar9) {
        lVar5 = 0;
        do {
          iVar1 = *(int *)(param_2 + 0x3f0);
          iVar4 = (int)lVar5 + 1;
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = iVar4 / iVar1;
          }
          lVar10 = *(long *)(param_2 + 0x160);
          if (iVar4 == iVar2 * iVar1) {
            uVar7 = *(undefined8 *)(lVar10 + (ulong)(((int)lVar5 - iVar1) + 1) * 8);
            uVar6 = 4;
            uVar8 = 6;
          }
          else {
            uVar7 = *(undefined8 *)(lVar10 + lVar5 * 8);
            uVar6 = 7;
            uVar8 = 5;
          }
          FUN_10064e5ec(0,0,*(undefined8 *)(lVar10 + lVar5 * 8 + 8),uVar6,uVar7,uVar8);
          uVar11 = lVar5 + 2;
          lVar5 = lVar5 + 1;
        } while (uVar11 < *(uint *)(param_2 + 0x158));
      }
    }
  }
  FUN_1006557ec(param_2 + 0x168);
  FUN_10064e5ec(0,0,param_2 + 0x2c0,6,param_2 + 0x168,4);
  FUN_1006557ec(param_2);
  return;
}




undefined1  [16] FUN_1001d4458(undefined1 param_1 [16],long param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = param_1._8_8_;
  uVar6 = param_1._0_8_;
  if (*(int *)(param_2 + 0x158) != 0) {
    uVar4 = 0;
    do {
      iVar1 = *(int *)(param_2 + 0x3f0);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = (int)uVar4 / iVar1;
      }
      fVar3 = (float)uVar6 + 0.09;
      if ((int)uVar4 != iVar2 * iVar1) {
        fVar3 = (float)uVar6;
      }
      uVar7 = 0;
      uVar6 = (ulong)(uint)fVar3;
      FUN_1001d1e1c(uVar6,*(undefined8 *)(*(long *)(param_2 + 0x160) + uVar4 * 8));
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_2 + 0x158));
  }
  auVar5._8_8_ = uVar7;
  auVar5._0_8_ = uVar6;
  return auVar5;
}




long * FUN_1001d44d0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar3 = (undefined8 *)FUN_1005357f4();
  *puVar3 = &PTR_thunk_FUN_1001d7bcc_101467a50;
  FUN_1001d4124(puVar3 + 0x145);
  FUN_1001d4124(param_1 + 0x1c4);
  FUN_1001d4124(param_1 + 0x243);
  plVar1 = param_1 + 0x2c2;
  FUN_1006505b8(plVar1);
  plVar2 = param_1 + 0x2dd;
  thunk_FUN_100652c08(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  plVar4 = (long *)FUN_100534eb4(param_1);
  (**(code **)(*plVar4 + 0x78))(plVar4,puVar3 + 0x145,1);
  plVar4 = (long *)FUN_100534eb4(param_1);
  (**(code **)(*plVar4 + 0x78))(plVar4,param_1 + 0x1c4,1);
  plVar4 = (long *)FUN_100534eb4(param_1);
  (**(code **)(*plVar4 + 0x78))(plVar4,param_1 + 0x243,1);
  uVar5 = FUN_1004e0150("MAIN_CHARSELECT_POSITION_CAPTAIN_PLURAL",0);
  FUN_1006513c0(param_1 + 0x19d,uVar5);
  uVar5 = FUN_1004e0150("MAIN_CHARSELECT_POSITION_JUNGLER_PLURAL",0);
  FUN_1006513c0(param_1 + 0x21c,uVar5);
  uVar5 = FUN_1004e0150("MAIN_CHARSELECT_POSITION_LANER_PLURAL",0);
  FUN_1006513c0(param_1 + 0x29b,uVar5);
  FUN_100650608(plVar1,&DAT_1011582ac);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) | 2;
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  uVar6 = *(uint *)((long)param_1 + 0x176c);
  if ((uVar6 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x176c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5900;
    FUN_1000200a0(plVar2);
    uVar6 = *(uint *)((long)param_1 + 0x176c);
  }
  *(uint *)((long)param_1 + 0x176c) = uVar6 & 0xffffffbf;
  local_48 = DAT_101d918b8;
  local_70 = FUN_1001d46f4;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 1,&local_70);
  return param_1;
}




void FUN_1001d46f4(void)

{
  return;
}




long * thunk_FUN_1001d44d0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  code *pcStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar3 = (undefined8 *)FUN_1005357f4();
  *puVar3 = &PTR_thunk_FUN_1001d7bcc_101467a50;
  FUN_1001d4124(puVar3 + 0x145);
  FUN_1001d4124(param_1 + 0x1c4);
  FUN_1001d4124(param_1 + 0x243);
  plVar1 = param_1 + 0x2c2;
  FUN_1006505b8(plVar1);
  plVar2 = param_1 + 0x2dd;
  thunk_FUN_100652c08(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  plVar4 = (long *)FUN_100534eb4(param_1);
  (**(code **)(*plVar4 + 0x78))(plVar4,puVar3 + 0x145,1);
  plVar4 = (long *)FUN_100534eb4(param_1);
  (**(code **)(*plVar4 + 0x78))(plVar4,param_1 + 0x1c4,1);
  plVar4 = (long *)FUN_100534eb4(param_1);
  (**(code **)(*plVar4 + 0x78))(plVar4,param_1 + 0x243,1);
  uVar5 = FUN_1004e0150("MAIN_CHARSELECT_POSITION_CAPTAIN_PLURAL",0);
  FUN_1006513c0(param_1 + 0x19d,uVar5);
  uVar5 = FUN_1004e0150("MAIN_CHARSELECT_POSITION_JUNGLER_PLURAL",0);
  FUN_1006513c0(param_1 + 0x21c,uVar5);
  uVar5 = FUN_1004e0150("MAIN_CHARSELECT_POSITION_LANER_PLURAL",0);
  FUN_1006513c0(param_1 + 0x29b,uVar5);
  FUN_100650608(plVar1,&DAT_1011582ac);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) | 2;
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  uVar6 = *(uint *)((long)param_1 + 0x176c);
  if ((uVar6 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x176c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5900;
    FUN_1000200a0(plVar2);
    uVar6 = *(uint *)((long)param_1 + 0x176c);
  }
  *(uint *)((long)param_1 + 0x176c) = uVar6 & 0xffffffbf;
  uStack_48 = DAT_101d918b8;
  pcStack_70 = FUN_1001d46f4;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_70);
  return param_1;
}




void FUN_1001d46fc(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  uVar3 = (**(code **)(*param_3 + 0x48))();
  (**(code **)(*param_3 + 0x48))(param_3);
  plVar1 = param_3 + 0x145;
  FUN_1001d42bc(uVar3,plVar1);
  plVar2 = param_3 + 0x1c4;
  FUN_1001d42bc(uVar3,plVar2);
  FUN_1001d42bc(uVar3,param_3 + 0x243);
  FUN_10064e47c(uVar3,param_2,param_3 + 0x2c2);
  FUN_10064e47c(uVar3,0x432f0000,param_3 + 0x2dd);
  uVar3 = FUN_100534eb4(param_3);
  FUN_10064e5ec(0,0x41c80000,plVar1,4,uVar3,4);
  FUN_10064e5ec(0,0,plVar2,4,plVar1,6);
  FUN_10064e5ec(0,0,param_3 + 0x243,4,plVar2,6);
  FUN_10064e5ec(0,0,param_3 + 0x2dd,6,param_3,6);
  return;
}




void FUN_1001d482c(long param_1)

{
  FUN_1001d4458(0x3e800000,param_1 + 0xa28);
  FUN_1001d4458(param_1 + 0xe20);
  FUN_1001d4458(param_1 + 0x1218);
  return;
}




void * FUN_1001d4864(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    int param_5,int param_6,undefined8 param_7)

{
  void *pvVar1;
  long lVar2;
  void *local_58;
  
  pvVar1 = operator_new(0x13c0);
  lVar2 = FUN_1001d0fc4();
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 0x20;
  FUN_1001d1974(lVar2,param_3,param_4,param_7);
  if (param_6 != 0) {
    FUN_1001d1da4(pvVar1,param_2);
  }
  local_58 = pvVar1;
  if (param_5 == 5) {
    FUN_1001d41c4(param_1 + 0x1370,&local_58);
    param_1 = param_1 + 0x1380;
  }
  else if (param_5 == 1) {
    FUN_1001d41c4(param_1 + 0xf78,&local_58);
    param_1 = param_1 + 0xf88;
  }
  else {
    if (param_5 != 0) {
      return pvVar1;
    }
    FUN_1001d41c4(param_1 + 0xb80,&local_58);
    param_1 = param_1 + 0xb90;
  }
  FUN_100655930(param_1,local_58,1);
  return pvVar1;
}




void FUN_1001d4964(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_1001d4244(param_1 + 0xa28);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_1001d4244(param_1 + 0xe20,param_2), (uVar1 & 1) == 0)) {
    FUN_1001d4244(param_1 + 0x1218,param_2);
    return;
  }
  return;
}




void FUN_1001d49b8(undefined8 param_1)

{
  FUN_100534aa8();
  FUN_1001d46fc(param_1);
  FUN_100534af8(param_1);
  return;
}




void FUN_1001d49e4(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  
  lVar1 = param_3 + 0xb8;
  fVar2 = (float)FUN_1006531b0(lVar1);
  FUN_10064e47c(fVar2 * 0.66,param_2 * 1.2,lVar1);
  FUN_10064e47c(fVar2 * 0.66,param_2 * 1.2,param_3 + 0x1a8);
  FUN_10064e5ec(0x3fc00000,0x42c80000,lVar1,5,param_3,7);
  FUN_10064e5ec(0xbfc00000,0x42c80000,param_3 + 0x1a8,7,param_3,5);
  return;
}




long * FUN_1001d4a98(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_101467be8;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100652c08(puVar2);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652cac(puVar2,DAT_101854a08,"generic_edge_glow");
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | 1;
  FUN_100652cac(plVar1,DAT_101854a08,"generic_edge_glow");
  return param_1;
}




long * thunk_FUN_1001d4a98(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_101467be8;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100652c08(puVar2);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652cac(puVar2,DAT_101854a08,"generic_edge_glow");
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | 1;
  FUN_100652cac(plVar1,DAT_101854a08,"generic_edge_glow");
  return param_1;
}




long * FUN_1001d4b60(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  void *local_88 [2];
  char local_71;
  
  puVar7 = (undefined8 *)FUN_100655644();
  *puVar7 = &PTR_thunk_FUN_1001d5000_101467d30;
  puVar7 = puVar7 + 0x2b;
  thunk_FUN_100652c08(puVar7);
  plVar1 = param_1 + 0x49;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x67;
  thunk_FUN_1002ecd94(plVar2,0);
  plVar3 = param_1 + 0x1e1;
  FUN_100653ff8(plVar3);
  plVar4 = param_1 + 0x202;
  FUN_100653ff8(plVar4);
  param_1[0x223] = 0;
  plVar5 = param_1 + 0x224;
  thunk_FUN_100655644(plVar5);
  lVar8 = 0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar8 + 0x1278);
    lVar8 = lVar8 + 0xf0;
  } while (lVar8 != 0x4b0);
  *(undefined4 *)((long)param_1 + 0x172c) = 0xff;
  *(undefined2 *)(param_1 + 0x2e6) = 0;
  *(undefined1 *)((long)param_1 + 0x1732) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  lVar8 = 0;
  plVar9 = param_1 + 0x24f;
  do {
    FUN_100652cac(plVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_person_counter");
    FUN_100655930(plVar5,plVar9,1);
    *(uint *)((long)plVar9 + 0x84) = *(uint *)((long)plVar9 + 0x84) & 0xfffffffb;
    if (lVar8 != 0) {
      FUN_10064e72c(0,plVar9,3,param_1 + (ulong)((int)lVar8 - 1) * 0x1e + 0x24f,1);
    }
    lVar8 = lVar8 + 1;
    plVar9 = plVar9 + 0x1e;
  } while (lVar8 != 5);
  FUN_100652cac(plVar1,DAT_101854a08,"shiny_checkbox_off");
  FUN_10064e47c(0x432a0000,0x432a0000,plVar1);
  *(uint *)((long)param_1 + 0x2cc) = *(uint *)((long)param_1 + 0x2cc) & 0xffffffbb;
  FUN_100652cac(puVar7,DAT_101854a08,"shiny_checkbox_off");
  FUN_10064e47c(0x432a0000,0x432a0000,puVar7);
  *(uint *)((long)param_1 + 0x1dc) = *(uint *)((long)param_1 + 0x1dc) & 0xffffffbb;
  *(uint *)((long)param_1 + 0x11a4) = *(uint *)((long)param_1 + 0x11a4) & 0xffffffbf;
  FUN_1002eb970(plVar2,0);
  uVar6 = DAT_101854a08;
  FUN_10001549c(local_88,"shiny_checkbox_off");
  FUN_1002ece5c(plVar2,uVar6,local_88,&DAT_101d91198);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  FUN_1002ecef4(plVar2,&DAT_1011582b0);
  local_88[0] = (void *)0x42f0000042f00000;
  FUN_10064e48c(plVar3,local_88);
  FUN_100652dfc(plVar4,0xb);
  local_88[0] = (void *)0x42f0000042f00000;
  FUN_10064e48c(plVar4,local_88);
  *(uint *)((long)param_1 + 0x1094) = *(uint *)((long)param_1 + 0x1094) & 0xfffffffb;
  FUN_10065403c(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_large_circle");
  FUN_10064e5ec(0,0,puVar7,8,param_1,8);
  FUN_10064e5ec(0,0,plVar2,8,puVar7,8);
  FUN_1006557ec(param_1);
  FUN_1001d4edc(param_1,0);
  return param_1;
}




void FUN_1001d4edc(long param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x1730) == '\0') {
    if (param_2 == 0) {
      if ((~*(uint *)(param_1 + 0xf8c) & 0x7f80) != 0) {
        *(uint *)(param_1 + 0xf8c) = *(uint *)(param_1 + 0xf8c) | 0x7f80;
        FUN_1000200a0(param_1 + 0xf08);
      }
      FUN_100652dd4(param_1 + 0xf08,&DAT_10115a168,2);
      bVar1 = false;
      if ((*(float *)(param_1 + 0x48) == 1.0) && (bVar1 = false, !NAN(*(float *)(param_1 + 0x4c))))
      {
        bVar1 = *(float *)(param_1 + 0x4c) == 1.0;
      }
      if (!bVar1) {
        uVar2 = NEON_fmov(0x3f800000,4);
        *(undefined8 *)(param_1 + 0x48) = uVar2;
        FUN_1000200a0(param_1);
      }
      *(uint *)(param_1 + 0x1dc) = *(uint *)(param_1 + 0x1dc) & 0xfffffffb;
    }
    else {
      if ((~*(uint *)(param_1 + 0xf8c) & 0x7f80) != 0) {
        *(uint *)(param_1 + 0xf8c) = *(uint *)(param_1 + 0xf8c) | 0x7f80;
        FUN_1000200a0(param_1 + 0xf08);
      }
      if ((*(float *)(param_1 + 0x48) != 1.2) || (*(float *)(param_1 + 0x4c) != 1.2)) {
        *(undefined8 *)(param_1 + 0x48) = 0x3f99999a3f99999a;
        FUN_1000200a0(param_1);
      }
      *(uint *)(param_1 + 0x1dc) = *(uint *)(param_1 + 0x1dc) | 4;
      if (*(char *)(param_1 + 0x1731) == '\0') {
        FUN_1001d51a8(param_1);
      }
    }
    *(char *)(param_1 + 0x1731) = (char)param_2;
  }
  return;
}




long * thunk_FUN_1001d4b60(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  void *apvStack_88 [2];
  char cStack_71;
  
  puVar7 = (undefined8 *)FUN_100655644();
  *puVar7 = &PTR_thunk_FUN_1001d5000_101467d30;
  puVar7 = puVar7 + 0x2b;
  thunk_FUN_100652c08(puVar7);
  plVar1 = param_1 + 0x49;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x67;
  thunk_FUN_1002ecd94(plVar2,0);
  plVar3 = param_1 + 0x1e1;
  FUN_100653ff8(plVar3);
  plVar4 = param_1 + 0x202;
  FUN_100653ff8(plVar4);
  param_1[0x223] = 0;
  plVar5 = param_1 + 0x224;
  thunk_FUN_100655644(plVar5);
  lVar8 = 0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar8 + 0x1278);
    lVar8 = lVar8 + 0xf0;
  } while (lVar8 != 0x4b0);
  *(undefined4 *)((long)param_1 + 0x172c) = 0xff;
  *(undefined2 *)(param_1 + 0x2e6) = 0;
  *(undefined1 *)((long)param_1 + 0x1732) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  lVar8 = 0;
  plVar9 = param_1 + 0x24f;
  do {
    FUN_100652cac(plVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_person_counter");
    FUN_100655930(plVar5,plVar9,1);
    *(uint *)((long)plVar9 + 0x84) = *(uint *)((long)plVar9 + 0x84) & 0xfffffffb;
    if (lVar8 != 0) {
      FUN_10064e72c(0,plVar9,3,param_1 + (ulong)((int)lVar8 - 1) * 0x1e + 0x24f,1);
    }
    lVar8 = lVar8 + 1;
    plVar9 = plVar9 + 0x1e;
  } while (lVar8 != 5);
  FUN_100652cac(plVar1,DAT_101854a08,"shiny_checkbox_off");
  FUN_10064e47c(0x432a0000,0x432a0000,plVar1);
  *(uint *)((long)param_1 + 0x2cc) = *(uint *)((long)param_1 + 0x2cc) & 0xffffffbb;
  FUN_100652cac(puVar7,DAT_101854a08,"shiny_checkbox_off");
  FUN_10064e47c(0x432a0000,0x432a0000,puVar7);
  *(uint *)((long)param_1 + 0x1dc) = *(uint *)((long)param_1 + 0x1dc) & 0xffffffbb;
  *(uint *)((long)param_1 + 0x11a4) = *(uint *)((long)param_1 + 0x11a4) & 0xffffffbf;
  FUN_1002eb970(plVar2,0);
  uVar6 = DAT_101854a08;
  FUN_10001549c(apvStack_88,"shiny_checkbox_off");
  FUN_1002ece5c(plVar2,uVar6,apvStack_88,&DAT_101d91198);
  if (cStack_71 < '\0') {
    operator_delete(apvStack_88[0]);
  }
  FUN_1002ecef4(plVar2,&DAT_1011582b0);
  apvStack_88[0] = (void *)0x42f0000042f00000;
  FUN_10064e48c(plVar3,apvStack_88);
  FUN_100652dfc(plVar4,0xb);
  apvStack_88[0] = (void *)0x42f0000042f00000;
  FUN_10064e48c(plVar4,apvStack_88);
  *(uint *)((long)param_1 + 0x1094) = *(uint *)((long)param_1 + 0x1094) & 0xfffffffb;
  FUN_10065403c(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_large_circle");
  FUN_10064e5ec(0,0,puVar7,8,param_1,8);
  FUN_10064e5ec(0,0,plVar2,8,puVar7,8);
  FUN_1006557ec(param_1);
  FUN_1001d4edc(param_1,0);
  return param_1;
}




void FUN_1001d5000(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_1001d5000_101467d30;
  if ((long *)param_1[0x223] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x223] + 8))();
  }
  lVar1 = 0;
  param_1[0x223] = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x1638) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x16f0) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x1708);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x1638);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  param_1[0x224] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x23b);
  FUN_10064e2bc(param_1 + 0x224);
  param_1[0x202] = &PTR_FUN_1014a77a8;
  param_1[0x219] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0x220);
  param_1[0x202] = &PTR_FUN_1014a7108;
  param_1[0x219] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x21c);
  FUN_10064e2bc(param_1 + 0x202);
  param_1[0x1e1] = &PTR_FUN_1014a77a8;
  param_1[0x1f8] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0x1ff);
  param_1[0x1e1] = &PTR_FUN_1014a7108;
  param_1[0x1f8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1fb);
  FUN_10064e2bc(param_1 + 0x1e1);
  FUN_1001acc08(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_1014a7108;
  param_1[0x60] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 99);
  FUN_10064e2bc(param_1 + 0x49);
  param_1[0x2b] = &PTR_FUN_1014a7108;
  param_1[0x42] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x45);
  FUN_10064e2bc(param_1 + 0x2b);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1001d5000(void)

{
  FUN_1001d5000();
  return;
}




void FUN_1001d5194(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001d5000();
  operator_delete(pvVar1);
  return;
}




void FUN_1001d51a8(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  
  plVar1 = param_3 + 0x49;
  uStack_44 = param_2;
  local_48 = (**(code **)(*param_3 + 0x50))();
  FUN_10064e48c(plVar1,&local_48);
  bVar2 = false;
  if ((*(float *)(param_3 + 0x53) == (float)DAT_101873a40) &&
     (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x29c)) && !NAN(DAT_101873a40._4_4_))) {
    bVar2 = *(float *)((long)param_3 + 0x29c) == DAT_101873a40._4_4_;
  }
  if (!bVar2) {
    param_3[0x53] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar1);
  }
  FUN_10064e5ec(0,0,plVar1,8,param_3,8);
  FUN_100642324(plVar1);
  uVar5 = *(uint *)((long)param_3 + 0x2cc) | 4;
  *(uint *)((long)param_3 + 0x2cc) = uVar5;
  bVar2 = false;
  if ((*(float *)(param_3 + 0x52) == 1.0) &&
     (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x294)))) {
    bVar2 = *(float *)((long)param_3 + 0x294) == 1.0;
  }
  if (!bVar2) {
    lVar6 = NEON_fmov(0x3f800000,4);
    param_3[0x52] = lVar6;
    FUN_1000200a0(plVar1);
    uVar5 = *(uint *)((long)param_3 + 0x2cc);
  }
  if ((uVar5 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_3 + 0x2cc) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar1);
  }
  uVar3 = FUN_100640840(0,0x3ecccccd,FUN_10001f160);
  FUN_100640db8(0x3fb9999a,0x3fb9999a,0x3ecccccd,FUN_10001f160);
  uVar4 = FUN_10001f4d4();
  FUN_10063f2a4(uVar4,uVar3);
  FUN_100642b14(plVar1,uVar4);
  uVar3 = FUN_100047300();
  FUN_100642b14(plVar1,uVar3);
  return;
}




void FUN_1001d531c(long *param_1,undefined4 param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  plVar1 = param_1 + 0x202;
  *(uint *)((long)param_1 + 0x1094) = *(uint *)((long)param_1 + 0x1094) | 4;
  *(uint *)((long)param_1 + 0xf8c) = *(uint *)((long)param_1 + 0xf8c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x11a4) = *(uint *)((long)param_1 + 0x11a4) & 0xfffffffb;
  local_a4 = param_2;
  lVar3 = FUN_10034be60(&local_a4);
  if (lVar3 != 0) {
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    FUN_1004d2698(&local_a0,"portrait_%s");
    if (param_1[0x21c] == 0) {
      FUN_1001e34dc(plVar1,&local_a0);
      local_b0 = 0x4308000043080000;
      FUN_10064e48c(plVar1,&local_b0);
      FUN_10065403c(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_large_circle");
    }
    else {
      FUN_100652cdc(plVar1,&local_a0);
    }
    FUN_10064e5ec(0,0,plVar1,8,param_1,8);
  }
  if ((*(float *)(param_1 + 9) != 1.2) || (*(float *)((long)param_1 + 0x4c) != 1.2)) {
    param_1[9] = 0x3f99999a3f99999a;
    FUN_1000200a0(param_1);
  }
  if ((~*(uint *)((long)param_1 + 0x1094) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1094) = *(uint *)((long)param_1 + 0x1094) | 0x7f80;
    FUN_1000200a0(plVar1);
  }
  if (*(char *)((long)param_1 + 0x1732) != '\0') {
    *(undefined1 *)(param_1 + 0x2e6) = 1;
  }
  if ((long *)param_1[0x223] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x223] + 8))();
    param_1[0x223] = 0;
  }
  operator_new(0x1738);
  lVar3 = FUN_1001d4b60();
  param_1[0x223] = lVar3;
  FUN_1001d55e0(lVar3,(int)param_1[0x2e5]);
  if (*(char *)((long)param_1 + 0x1732) == '\0') {
    lVar3 = param_1[0x223];
  }
  else {
    lVar3 = param_1[0x223];
    *(undefined1 *)(lVar3 + 0x1730) = 1;
  }
  fVar6 = *(float *)(lVar3 + 0x4c);
  bVar2 = false;
  if ((*(float *)(lVar3 + 0x48) == 0.5) && (bVar2 = false, !NAN(fVar6))) {
    bVar2 = fVar6 == 0.5;
  }
  if (!bVar2) {
    *(undefined1 **)(lVar3 + 0x48) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar3);
    lVar3 = param_1[0x223];
  }
  if ((~*(uint *)(lVar3 + 0xf8c) & 0x7f80) != 0) {
    *(uint *)(lVar3 + 0xf8c) = *(uint *)(lVar3 + 0xf8c) | 0x7f80;
    FUN_1000200a0(lVar3 + 0xf08);
    lVar3 = param_1[0x223];
  }
  (**(code **)(*param_1 + 0x78))(param_1,lVar3,1);
  fVar4 = (float)FUN_10065317c(plVar1);
  fVar7 = 0.5;
  fVar5 = (float)(**(code **)(*(long *)param_1[0x223] + 0x50))();
  FUN_10064e5ec(fVar4 * 0.35355338 + fVar5 * 0.17677669,-(fVar6 * 0.35355338) - fVar7 * 0.17677669,
                param_1[0x223],8,param_1,8);
  FUN_1001d5644(param_1,*(undefined4 *)((long)param_1 + 0x172c));
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1001d55e0(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x1728) = param_2;
  if (param_2 < 7) {
    FUN_100652cac(param_1 + 0xf08,*(undefined8 *)(&PTR_PTR_101468260)[(int)param_2],
                  (&PTR_s_lobby_position_captain_101468298)[(int)param_2]);
  }
  FUN_10064e5ec(0,0,param_1 + 0xf08,8,param_1 + 0x338,8);
  return;
}




void FUN_1001d5644(long param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  
  *(int *)(param_1 + 0x172c) = param_2;
  puVar3 = &DAT_10115a168;
  if (param_2 == 1) {
    puVar3 = (undefined4 *)&DAT_101158274;
  }
  puVar2 = (undefined4 *)&DAT_101158278;
  if (param_2 != 2) {
    puVar2 = puVar3;
  }
  puVar3 = (undefined4 *)&DAT_101158270;
  if (param_2 != 0) {
    puVar3 = puVar2;
  }
  puVar2 = &DAT_10115a168;
  if (param_2 == 1) {
    puVar2 = (undefined4 *)&DAT_101158274;
  }
  puVar1 = (undefined4 *)&DAT_101158278;
  if (param_2 != 2) {
    puVar1 = puVar2;
  }
  puVar2 = (undefined4 *)&DAT_101158270;
  if (param_2 != 0) {
    puVar2 = puVar1;
  }
  lVar4 = *(long *)(param_1 + 0x1118);
  if (*(long *)(param_1 + 0x1118) == 0) {
    puVar3 = puVar2;
    lVar4 = param_1;
  }
  FUN_100652dd4(lVar4 + 0xf08,puVar3,2);
  return;
}




void FUN_1001d56d4(undefined1 param_1 [16],float param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined4 local_44;
  
  local_44 = 0xffdb963b;
  if (param_4 == 2) {
    local_44 = 0xff00b6d4;
  }
  else if (2 < param_4) {
    local_44 = 0xff3c54db;
  }
  lVar2 = 0;
  lVar1 = param_3 + 0x1278;
  do {
    uVar3 = 0x44;
    if (param_4 <= lVar2) {
      uVar3 = 0;
    }
    *(uint *)(lVar1 + 0x84) = uVar3 | *(uint *)(lVar1 + 0x84) & 0xffffffbb;
    FUN_100652dd4(lVar1,&local_44,2);
    lVar2 = lVar2 + 1;
    lVar1 = lVar1 + 0xf0;
  } while (lVar2 != 5);
  lVar2 = param_3 + 0x1120;
  FUN_1006557ec(lVar2);
  FUN_10064e3cc(lVar2);
  FUN_10064e72c(param_2 * -0.5,lVar2,0,param_3,2);
  FUN_10064e72c(0,lVar2,4,param_3,4);
  return;
}




long * FUN_1001d57d8(long *param_1)

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
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  
  puVar10 = (undefined8 *)FUN_10064e20c();
  *puVar10 = &PTR_thunk_FUN_1001d7d6c_101467e80;
  puVar10 = puVar10 + 0x17;
  thunk_FUN_100652c08(puVar10);
  plVar1 = param_1 + 0x35;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x4c;
  FUN_1001d39f4(plVar2);
  plVar3 = param_1 + 0x20e;
  FUN_10064e20c(plVar3);
  param_1[0x20e] = (long)&PTR_thunk_FUN_10064e2bc_101468128;
  plVar4 = param_1 + 0x225;
  FUN_1001d36d4();
  plVar5 = param_1 + 0x30b;
  FUN_1001d36d4();
  plVar6 = param_1 + 0x3f1;
  FUN_1001d36d4();
  FUN_1001d36d4();
  plVar7 = param_1 + 0x5bd;
  FUN_1001d3418(plVar7);
  plVar11 = param_1 + 0x694;
  FUN_10064e20c(plVar11);
  param_1[0x694] = (long)&PTR_thunk_FUN_10064e2bc_101468128;
  plVar8 = param_1 + 0x6ab;
  thunk_FUN_100652c08(plVar8);
  plVar9 = param_1 + 0x6c9;
  thunk_FUN_100652c08(plVar9);
  *(undefined1 *)(param_1 + 0x6e7) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,plVar7,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100642bd8(plVar3,param_1 + 0x4d7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  FUN_100642bd8(plVar11,plVar8,1);
  FUN_100642bd8(plVar11,plVar9,1);
  plVar11 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar11 + 0x70))(plVar11,0x14);
  (**(code **)(*plVar11 + 0x58))(plVar11,plVar2);
  (**(code **)(*plVar11 + 0x70))(plVar11,0x14);
  plVar11 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar11 + 0x78))(plVar11,0,5);
  (**(code **)(*plVar11 + 0x68))(plVar11,plVar7,2,10);
  (**(code **)(*plVar11 + 0x68))(plVar11,plVar4,2,2);
  (**(code **)(*plVar11 + 0x68))(plVar11,plVar5,2,2);
  (**(code **)(*plVar11 + 0x68))(plVar11,plVar6,2,2);
  (**(code **)(*plVar11 + 0x68))(plVar11,param_1 + 0x4d7,2,2);
  (**(code **)(*plVar11 + 0x78))(plVar11,0,5);
  FUN_10064e524(plVar3,plVar11);
  FUN_100652cac(puVar10,DAT_101854a08,"popup_bg");
  uVar12 = thunk_FUN_10064dde8();
  FUN_10064e524(plVar1,uVar12);
  FUN_100652cac(param_1 + 0x2cf,PTR_s_build___MenuDraftPartsCommon_Ico_101854a40,"draft_info_btn");
  FUN_100652cac(param_1 + 0x2ed,PTR_s_build___MenuDraftPartsCommon_Ico_101854a40,
                "draft_info_btn_press");
  FUN_100652cac(param_1 + 0x3b5,PTR_s_build___MenuDraftPartsCommon_Ico_101854a40,"draft_skins_btn");
  FUN_100652cac(param_1 + 0x3d3,PTR_s_build___MenuDraftPartsCommon_Ico_101854a40,
                "draft_skins_btn_press");
  FUN_100652cac(param_1 + 0x581,PTR_s_build___MenuDraftPartsCommon_Ico_101854a40,"draft_exit_btn");
  FUN_100652cac(param_1 + 0x59f,PTR_s_build___MenuDraftPartsCommon_Ico_101854a40,
                "draft_exit_btn_press");
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  *(byte *)(param_1 + 0x6c6) = *(byte *)(param_1 + 0x6c6) | 1;
  FUN_100652cac(plVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_1002ecc7c(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  uVar12 = FUN_1004e0150("MENU_DRAFT_LOBBY_WANT_HERO",0);
  FUN_1002ecce4(plVar2,uVar12);
  FUN_1002eb970(plVar2,2);
  FUN_10064e5b8(plVar2,&DAT_101dbd510);
  FUN_1002ebee0(0x41f00000,0,plVar2);
  FUN_1002ecd14(plVar2,3);
  FUN_100530068(plVar4,0);
  uVar12 = FUN_1004e0150("MENU_DRAFT_BUTTON_INFO",0);
  FUN_1006513c0(param_1 + 0x2a9,uVar12);
  FUN_1001d3804(plVar4);
  uVar12 = FUN_1004e0150("MENU_DRAFT_BUTTON_SKINS",0);
  FUN_1006513c0(param_1 + 0x38f,uVar12);
  FUN_1001d3804(plVar5);
  uVar12 = FUN_1004e0150("MAIN_CHARSELECT_LABEL_SWITCH_TEAMS",0);
  FUN_1006513c0(param_1 + 0x475,uVar12);
  FUN_1001d3804(plVar6);
  *(uint *)((long)param_1 + 0x200c) = *(uint *)((long)param_1 + 0x200c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x2e6c) = *(uint *)((long)param_1 + 0x2e6c) & 0xfffffffb;
  return param_1;
}




long * thunk_FUN_1001d57d8(long *param_1)

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
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  
  puVar10 = (undefined8 *)FUN_10064e20c();
  *puVar10 = &PTR_thunk_FUN_1001d7d6c_101467e80;
  puVar10 = puVar10 + 0x17;
  thunk_FUN_100652c08(puVar10);
  plVar1 = param_1 + 0x35;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x4c;
  FUN_1001d39f4(plVar2);
  plVar3 = param_1 + 0x20e;
  FUN_10064e20c(plVar3);
  param_1[0x20e] = (long)&PTR_thunk_FUN_10064e2bc_101468128;
  plVar4 = param_1 + 0x225;
  FUN_1001d36d4();
  plVar5 = param_1 + 0x30b;
  FUN_1001d36d4();
  plVar6 = param_1 + 0x3f1;
  FUN_1001d36d4();
  FUN_1001d36d4();
  plVar7 = param_1 + 0x5bd;
  FUN_1001d3418(plVar7);
  plVar11 = param_1 + 0x694;
  FUN_10064e20c(plVar11);
  param_1[0x694] = (long)&PTR_thunk_FUN_10064e2bc_101468128;
  plVar8 = param_1 + 0x6ab;
  thunk_FUN_100652c08(plVar8);
  plVar9 = param_1 + 0x6c9;
  thunk_FUN_100652c08(plVar9);
  *(undefined1 *)(param_1 + 0x6e7) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,plVar7,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100642bd8(plVar3,param_1 + 0x4d7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  FUN_100642bd8(plVar11,plVar8,1);
  FUN_100642bd8(plVar11,plVar9,1);
  plVar11 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar11 + 0x70))(plVar11,0x14);
  (**(code **)(*plVar11 + 0x58))(plVar11,plVar2);
  (**(code **)(*plVar11 + 0x70))(plVar11,0x14);
  plVar11 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar11 + 0x78))(plVar11,0,5);
  (**(code **)(*plVar11 + 0x68))(plVar11,plVar7,2,10);
  (**(code **)(*plVar11 + 0x68))(plVar11,plVar4,2,2);
  (**(code **)(*plVar11 + 0x68))(plVar11,plVar5,2,2);
  (**(code **)(*plVar11 + 0x68))(plVar11,plVar6,2,2);
  (**(code **)(*plVar11 + 0x68))(plVar11,param_1 + 0x4d7,2,2);
  (**(code **)(*plVar11 + 0x78))(plVar11,0,5);
  FUN_10064e524(plVar3,plVar11);
  FUN_100652cac(puVar10,DAT_101854a08,"popup_bg");
  uVar12 = thunk_FUN_10064dde8();
  FUN_10064e524(plVar1,uVar12);
  FUN_100652cac(param_1 + 0x2cf,PTR_s_build___MenuDraftPartsCommon_Ico_101854a40,"draft_info_btn");
  FUN_100652cac(param_1 + 0x2ed,PTR_s_build___MenuDraftPartsCommon_Ico_101854a40,
                "draft_info_btn_press");
  FUN_100652cac(param_1 + 0x3b5,PTR_s_build___MenuDraftPartsCommon_Ico_101854a40,"draft_skins_btn");
  FUN_100652cac(param_1 + 0x3d3,PTR_s_build___MenuDraftPartsCommon_Ico_101854a40,
                "draft_skins_btn_press");
  FUN_100652cac(param_1 + 0x581,PTR_s_build___MenuDraftPartsCommon_Ico_101854a40,"draft_exit_btn");
  FUN_100652cac(param_1 + 0x59f,PTR_s_build___MenuDraftPartsCommon_Ico_101854a40,
                "draft_exit_btn_press");
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  *(byte *)(param_1 + 0x6c6) = *(byte *)(param_1 + 0x6c6) | 1;
  FUN_100652cac(plVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_1002ecc7c(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  uVar12 = FUN_1004e0150("MENU_DRAFT_LOBBY_WANT_HERO",0);
  FUN_1002ecce4(plVar2,uVar12);
  FUN_1002eb970(plVar2,2);
  FUN_10064e5b8(plVar2,&DAT_101dbd510);
  FUN_1002ebee0(0x41f00000,0,plVar2);
  FUN_1002ecd14(plVar2,3);
  FUN_100530068(plVar4,0);
  uVar12 = FUN_1004e0150("MENU_DRAFT_BUTTON_INFO",0);
  FUN_1006513c0(param_1 + 0x2a9,uVar12);
  FUN_1001d3804(plVar4);
  uVar12 = FUN_1004e0150("MENU_DRAFT_BUTTON_SKINS",0);
  FUN_1006513c0(param_1 + 0x38f,uVar12);
  FUN_1001d3804(plVar5);
  uVar12 = FUN_1004e0150("MAIN_CHARSELECT_LABEL_SWITCH_TEAMS",0);
  FUN_1006513c0(param_1 + 0x475,uVar12);
  FUN_1001d3804(plVar6);
  *(uint *)((long)param_1 + 0x200c) = *(uint *)((long)param_1 + 0x200c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x2e6c) = *(uint *)((long)param_1 + 0x2e6c) & 0xfffffffb;
  return param_1;
}




void FUN_1001d5d24(long *param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int local_4c;
  undefined8 local_48;
  
  FUN_10064e32c();
  local_48 = 0;
  local_4c = 0;
  FUN_10016aeec((long)&local_48 + 4,0,&local_48,&local_4c);
  plVar1 = param_1 + 0x4c;
  FUN_10064e4a0(plVar1,0xe6000001f4);
  lVar2 = param_1[0x6e7];
  fVar3 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  if ((char)lVar2 == '\0') {
    fVar4 = (float)FUN_10064e3cc(plVar1);
    fVar5 = (float)(int)local_48;
    fVar3 = -((fVar4 - fVar3) * 0.5) - fVar5;
  }
  else {
    fVar5 = (float)local_48._4_4_;
    fVar3 = fVar3 - ((float)(int)local_48 + fVar5);
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e47c(fVar3,fVar5 - (float)local_4c,param_1 + 0x20e);
  fVar3 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar4 = (float)FUN_10064e3cc(plVar1);
  fVar5 = (float)local_48._4_4_;
  fVar3 = -((fVar4 - fVar3) * 0.5) - fVar5;
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e47c(fVar3,fVar5 - (float)local_4c,param_1 + 0x35);
  FUN_10064e5ec(0,0,plVar1,4,param_1,4);
  FUN_10064e5ec((float)-(int)local_48,0,param_1 + 0x20e,1,param_1,1);
  FUN_10064e5ec((float)local_48._4_4_,0,param_1 + 0x35,0,param_1,0);
  return;
}




void FUN_1001d5ecc(float param_1,long param_2)

{
  FUN_10064e47c(param_2 + 0xb8);
  FUN_10064e47c(param_1 * 0.5,0x40800000,param_2 + 0x3558);
  FUN_10064e47c(param_1 * 0.5,0x40800000,param_2 + 0x3648);
  FUN_1001d5f30(param_2);
  return;
}




void FUN_1001d5f30(long param_1)

{
  FUN_10064e5ec(0,0,param_1 + 0x3558,3,param_1,0);
  FUN_10064e5ec(0,0,param_1 + 0x3648,2,param_1,1);
  return;
}




void FUN_1001d5f88(long param_1,int param_2)

{
  uint uVar1;
  
  *(char *)(param_1 + 0x3738) = (char)param_2;
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = 4;
  }
  *(uint *)(param_1 + 0x22c) = *(uint *)(param_1 + 0x22c) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0x2e4) = *(uint *)(param_1 + 0x2e4) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0x11ac) = *(uint *)(param_1 + 0x11ac) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0x18dc) = *(uint *)(param_1 + 0x18dc) & 0xfffffffb | uVar1;
  return;
}




void FUN_1001d5fe0(long param_1)

{
  *(uint *)(param_1 + 0x2e4) = *(uint *)(param_1 + 0x2e4) & 0xfffffffb;
  return;
}




void FUN_1001d5ff0(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_3 == 0) {
    uVar4 = 4;
  }
  *(uint *)(param_1 + 0x273c) = *(uint *)(param_1 + 0x273c) & 0xfffffffb | uVar4;
  if ((param_3 & 1) == 0) {
    uVar1 = FUN_10034cde8(param_2);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_10034cde0(param_2);
      if ((uVar1 & 1) == 0) {
        uVar1 = FUN_10034cdd0(param_2);
        if ((uVar1 & 1) != 0) {
          return;
        }
        pcVar2 = "HUD_EXIT_PRIVATE_MODE";
      }
      else {
        pcVar2 = "HUD_EXIT_TUTORIAL_MODE";
      }
    }
    else {
      pcVar2 = "HUD_EXIT_PRACTICE_MODE";
    }
    uVar3 = FUN_1004e0150(pcVar2,0);
    FUN_1006513c0(param_1 + 0x2ad8,uVar3);
    FUN_1001d3804(param_1 + 0x26b8);
    return;
  }
  return;
}




long * FUN_1001d60a4(long *param_1)

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
  uint uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  
  puVar16 = (undefined8 *)FUN_1006543ec();
  *puVar16 = &PTR_thunk_FUN_1001d81b8_101467fc8;
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x52;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x70;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x8e;
  thunk_FUN_100655644(plVar3);
  plVar4 = param_1 + 0xb9;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0xdf;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x105;
  thunk_FUN_100652c08();
  plVar7 = param_1 + 0x123;
  thunk_FUN_1001b4d10();
  plVar8 = param_1 + 0x386;
  thunk_FUN_100652c08(plVar8);
  plVar9 = param_1 + 0x3a4;
  thunk_FUN_1001b4d10();
  plVar10 = param_1 + 0x607;
  thunk_FUN_100652c08();
  plVar11 = param_1 + 0x625;
  thunk_FUN_1001b4d10(plVar11);
  plVar12 = param_1 + 0x888;
  thunk_FUN_100652c08();
  plVar13 = param_1 + 0x8a6;
  thunk_FUN_1001b4d10(plVar13);
  plVar14 = param_1 + 0xb09;
  thunk_FUN_100650e64(plVar14);
  thunk_FUN_100650e64();
  FUN_100654488(param_1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar16 + 0x34,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100655930(plVar3,plVar4,1);
  FUN_100655930(plVar3,plVar5,1);
  FUN_100655930(plVar3,plVar6,1);
  FUN_100655930(plVar3,plVar7,1);
  FUN_100655930(plVar3,plVar8,1);
  FUN_100655930(plVar3,plVar9,1);
  FUN_100655930(plVar3,plVar10,1);
  FUN_100655930(plVar3,plVar11,1);
  FUN_100655930(plVar3,plVar12,1);
  FUN_100655930(plVar3,plVar13,1);
  FUN_100655930(plVar3,plVar14,1);
  FUN_100655930(plVar3,param_1 + 0xb2f,1);
  FUN_100652e40(puVar16 + 0x34,0);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar15 = *(uint *)((long)param_1 + 0x314);
  if ((uVar15 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x314) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x8b) = *(byte *)(param_1 + 0x8b) | 2;
  uVar15 = *(uint *)((long)param_1 + 0x404);
  if ((uVar15 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x404) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x7280;
    FUN_1000200a0(plVar2);
  }
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"stat_offense");
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"stat_defense");
  FUN_100652cac(plVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"stat_utility");
  FUN_100652cac(plVar12,PTR_s_build___MenuPartsCommon_tga_101854970,"stat_mobility");
  FUN_10064e47c(0x42480000,0x42480000,plVar6);
  FUN_10064e47c(0x42480000,0x42480000,plVar8);
  FUN_10064e47c(0x42480000,0x42480000,plVar10);
  FUN_10064e47c(0x42480000,0x42480000,plVar12);
  FUN_1001b5e00(0,0x42480000,plVar7,0,100,0,1);
  FUN_1001b66dc(0x3f800000,plVar7,"white_background","white_background");
  if ((*(float *)(param_1 + 0x12d) != 0.0) || (*(float *)((long)param_1 + 0x96c) != 0.5)) {
    param_1[0x12d] = 0x3f00000000000000;
    FUN_1000200a0(plVar7);
  }
  FUN_1001b6720(0x3f800000,0x3f800000,plVar7);
  FUN_1001b5d78(plVar7,&DAT_10115a168,&DAT_10115a168,&DAT_10115a168);
  FUN_1001b676c(plVar7);
  FUN_1001b5e00(0,0x42480000,plVar9,0,100,0,1);
  FUN_1001b66dc(0x3f800000,plVar9,"white_background","white_background");
  if ((*(float *)(param_1 + 0x3ae) != 0.0) || (*(float *)((long)param_1 + 0x1d74) != 0.5)) {
    param_1[0x3ae] = 0x3f00000000000000;
    FUN_1000200a0(plVar9);
  }
  FUN_1001b6720(0x3f800000,0x3f800000,plVar9);
  FUN_1001b5d78(plVar9,&DAT_10115a168,&DAT_10115a168,&DAT_10115a168);
  FUN_1001b676c(plVar9);
  FUN_1001b5e00(0,0x42480000,plVar11,0,100,0,1);
  FUN_1001b66dc(0x3f800000,plVar11,"white_background","white_background");
  if ((*(float *)(param_1 + 0x62f) != 0.0) || (*(float *)((long)param_1 + 0x317c) != 0.5)) {
    param_1[0x62f] = 0x3f00000000000000;
    FUN_1000200a0(plVar11);
  }
  FUN_1001b6720(0x3f800000,0x3f800000,plVar11);
  FUN_1001b5d78(plVar11,&DAT_10115a168,&DAT_10115a168,&DAT_10115a168);
  FUN_1001b676c(plVar11);
  FUN_1001b5e00(0,0x42480000,plVar13,0,100,0,1);
  FUN_1001b66dc(0x3f800000,plVar13,"white_background","white_background");
  if ((*(float *)(param_1 + 0x8b0) != 0.0) || (*(float *)((long)param_1 + 0x4584) != 0.5)) {
    param_1[0x8b0] = 0x3f00000000000000;
    FUN_1000200a0(plVar13);
  }
  FUN_1001b6720(0x3f800000,0x3f800000,plVar13);
  FUN_1001b5d78(plVar13,&DAT_10115a168,&DAT_10115a168,&DAT_10115a168);
  FUN_1001b676c(plVar13);
  FUN_100651038(plVar14,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar17 = FUN_1004e0150("MENU_HERO_ATTRIBUTES_LABEL_DIFFICULTY",0);
  FUN_1006513c0(plVar14,uVar17);
  FUN_100651038(param_1 + 0xb2f,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220);
  return param_1;
}




long * thunk_FUN_1001d60a4(long *param_1)

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
  uint uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  
  puVar16 = (undefined8 *)FUN_1006543ec();
  *puVar16 = &PTR_thunk_FUN_1001d81b8_101467fc8;
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x52;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x70;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x8e;
  thunk_FUN_100655644(plVar3);
  plVar4 = param_1 + 0xb9;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0xdf;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x105;
  thunk_FUN_100652c08();
  plVar7 = param_1 + 0x123;
  thunk_FUN_1001b4d10();
  plVar8 = param_1 + 0x386;
  thunk_FUN_100652c08(plVar8);
  plVar9 = param_1 + 0x3a4;
  thunk_FUN_1001b4d10();
  plVar10 = param_1 + 0x607;
  thunk_FUN_100652c08();
  plVar11 = param_1 + 0x625;
  thunk_FUN_1001b4d10(plVar11);
  plVar12 = param_1 + 0x888;
  thunk_FUN_100652c08();
  plVar13 = param_1 + 0x8a6;
  thunk_FUN_1001b4d10(plVar13);
  plVar14 = param_1 + 0xb09;
  thunk_FUN_100650e64(plVar14);
  thunk_FUN_100650e64();
  FUN_100654488(param_1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar16 + 0x34,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100655930(plVar3,plVar4,1);
  FUN_100655930(plVar3,plVar5,1);
  FUN_100655930(plVar3,plVar6,1);
  FUN_100655930(plVar3,plVar7,1);
  FUN_100655930(plVar3,plVar8,1);
  FUN_100655930(plVar3,plVar9,1);
  FUN_100655930(plVar3,plVar10,1);
  FUN_100655930(plVar3,plVar11,1);
  FUN_100655930(plVar3,plVar12,1);
  FUN_100655930(plVar3,plVar13,1);
  FUN_100655930(plVar3,plVar14,1);
  FUN_100655930(plVar3,param_1 + 0xb2f,1);
  FUN_100652e40(puVar16 + 0x34,0);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar15 = *(uint *)((long)param_1 + 0x314);
  if ((uVar15 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x314) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x8b) = *(byte *)(param_1 + 0x8b) | 2;
  uVar15 = *(uint *)((long)param_1 + 0x404);
  if ((uVar15 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x404) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x7280;
    FUN_1000200a0(plVar2);
  }
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"stat_offense");
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"stat_defense");
  FUN_100652cac(plVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"stat_utility");
  FUN_100652cac(plVar12,PTR_s_build___MenuPartsCommon_tga_101854970,"stat_mobility");
  FUN_10064e47c(0x42480000,0x42480000,plVar6);
  FUN_10064e47c(0x42480000,0x42480000,plVar8);
  FUN_10064e47c(0x42480000,0x42480000,plVar10);
  FUN_10064e47c(0x42480000,0x42480000,plVar12);
  FUN_1001b5e00(0,0x42480000,plVar7,0,100,0,1);
  FUN_1001b66dc(0x3f800000,plVar7,"white_background","white_background");
  if ((*(float *)(param_1 + 0x12d) != 0.0) || (*(float *)((long)param_1 + 0x96c) != 0.5)) {
    param_1[0x12d] = 0x3f00000000000000;
    FUN_1000200a0(plVar7);
  }
  FUN_1001b6720(0x3f800000,0x3f800000,plVar7);
  FUN_1001b5d78(plVar7,&DAT_10115a168,&DAT_10115a168,&DAT_10115a168);
  FUN_1001b676c(plVar7);
  FUN_1001b5e00(0,0x42480000,plVar9,0,100,0,1);
  FUN_1001b66dc(0x3f800000,plVar9,"white_background","white_background");
  if ((*(float *)(param_1 + 0x3ae) != 0.0) || (*(float *)((long)param_1 + 0x1d74) != 0.5)) {
    param_1[0x3ae] = 0x3f00000000000000;
    FUN_1000200a0(plVar9);
  }
  FUN_1001b6720(0x3f800000,0x3f800000,plVar9);
  FUN_1001b5d78(plVar9,&DAT_10115a168,&DAT_10115a168,&DAT_10115a168);
  FUN_1001b676c(plVar9);
  FUN_1001b5e00(0,0x42480000,plVar11,0,100,0,1);
  FUN_1001b66dc(0x3f800000,plVar11,"white_background","white_background");
  if ((*(float *)(param_1 + 0x62f) != 0.0) || (*(float *)((long)param_1 + 0x317c) != 0.5)) {
    param_1[0x62f] = 0x3f00000000000000;
    FUN_1000200a0(plVar11);
  }
  FUN_1001b6720(0x3f800000,0x3f800000,plVar11);
  FUN_1001b5d78(plVar11,&DAT_10115a168,&DAT_10115a168,&DAT_10115a168);
  FUN_1001b676c(plVar11);
  FUN_1001b5e00(0,0x42480000,plVar13,0,100,0,1);
  FUN_1001b66dc(0x3f800000,plVar13,"white_background","white_background");
  if ((*(float *)(param_1 + 0x8b0) != 0.0) || (*(float *)((long)param_1 + 0x4584) != 0.5)) {
    param_1[0x8b0] = 0x3f00000000000000;
    FUN_1000200a0(plVar13);
  }
  FUN_1001b6720(0x3f800000,0x3f800000,plVar13);
  FUN_1001b5d78(plVar13,&DAT_10115a168,&DAT_10115a168,&DAT_10115a168);
  FUN_1001b676c(plVar13);
  FUN_100651038(plVar14,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar17 = FUN_1004e0150("MENU_HERO_ATTRIBUTES_LABEL_DIFFICULTY",0);
  FUN_1006513c0(plVar14,uVar17);
  FUN_100651038(param_1 + 0xb2f,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220);
  return param_1;
}




void FUN_1001d6788(undefined8 param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  float fVar2;
  
  FUN_10064e47c();
  FUN_10064e47c((float)param_1 * 0.3,param_2,param_3 + 0x290);
  fVar2 = (float)param_1 * 0.85;
  fVar1 = 50.0;
  FUN_1001b5e00(fVar2,0x42480000,param_3 + 0x918,0,100,(int)(float)*(int *)(param_3 + 0x1c1c),1);
  FUN_1001b5e00(fVar2,0x42480000,param_3 + 0x1d20,0,100,(int)(float)*(int *)(param_3 + 0x3024),1);
  FUN_1001b5e00(fVar2,0x42480000,param_3 + 0x3128,0,100,(int)(float)*(int *)(param_3 + 0x442c),1);
  FUN_1001b5e00(fVar2,0x42480000,param_3 + 0x4530,0,100,(int)(float)*(int *)(param_3 + 0x5834),1);
  FUN_100651708(fVar2,param_3 + 0x6f8,1);
  FUN_1001d68f0(param_3);
  FUN_10064e3cc(param_3 + 0x470);
  FUN_10064e47c(param_1,fVar1 * 2.5,param_3 + 0x380);
  FUN_10064e5ec(0,0,param_3 + 0x380,3,param_3,3);
  return;
}




void FUN_1001d68f0(undefined1 param_1 [16],undefined1 param_2 [16],long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = param_2._4_4_;
  uVar5 = param_2._0_4_;
  (**(code **)(*param_3 + 0x48))();
  FUN_10064ed30(CONCAT44(uVar6,uVar5),param_3 + 0x34);
  FUN_10064e5ec(0,0,param_3 + 0x34,4,param_3,4);
  FUN_10064e72c(0,param_3 + 0x52,3,param_3,3);
  FUN_10064e5ec(0,0,param_3 + 0xdf,0,param_3 + 0xb9,3);
  plVar1 = param_3 + 0x123;
  FUN_10064e5ec(0,0x41c80000,plVar1,0,param_3 + 0xdf,3);
  plVar2 = param_3 + 0x3a4;
  FUN_10064e5ec(0,0x41c80000,plVar2,0,plVar1,3);
  plVar3 = param_3 + 0x625;
  FUN_10064e5ec(0,0x41c80000,plVar3,0,plVar2,3);
  plVar4 = param_3 + 0x8a6;
  FUN_10064e5ec(0,0x41c80000,plVar4,0,plVar3,3);
  FUN_10064e5ec(0,0x41c80000,param_3 + 0xb09,0,plVar4,3);
  FUN_10064e5ec(0,0,param_3 + 0xb2f,0,param_3 + 0xb09,3);
  FUN_10064e5ec(0xc1700000,0,param_3 + 0x105,5,plVar1,7);
  FUN_10064e5ec(0xc1700000,0,param_3 + 0x386,5,plVar2,7);
  FUN_10064e5ec(0xc1700000,0,param_3 + 0x607,5,plVar3,7);
  FUN_10064e5ec(0xc1700000,0,param_3 + 0x888,5,plVar4,7);
  FUN_1006557ec(param_3 + 0x8e);
  FUN_10064e5ec(0x41200000,0xc1200000,param_3 + 0x8e,3,param_3,3);
  return;
}




void FUN_1001d6afc(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = FUN_1004e0150(param_2[3],0);
    FUN_1006513c0(param_1 + 0x5c8,uVar3);
    uVar3 = FUN_1004e0150(param_2[9],0);
    FUN_1006513c0(param_1 + 0x6f8,uVar3);
    puVar4 = (undefined8 *)FUN_10032bdf8(*param_2);
    FUN_1001d6c84(param_1,*puVar4);
    pcVar1 = "MENU_HERO_ATTRIBUTES_LABEL_DIFFICULTY_MEDIUM";
    if (*(int *)(param_2 + 0xb) != 1) {
      pcVar1 = "MENU_HERO_ATTRIBUTES_LABEL_DIFFICULTY_EASY";
    }
    pcVar2 = "MENU_HERO_ATTRIBUTES_LABEL_DIFFICULTY_HARD";
    if (*(int *)(param_2 + 0xb) != 2) {
      pcVar2 = pcVar1;
    }
    uVar3 = FUN_1004e0150(pcVar2,0);
    FUN_1006513c0(param_1 + 0x5978,uVar3);
    uStack_34 = CONCAT13((char)((ulong)*(undefined8 *)((long)param_2 + 0x74) >> 0x20),
                         CONCAT12((char)*(undefined8 *)((long)param_2 + 0x74),
                                  CONCAT11((char)((ulong)*(undefined8 *)((long)param_2 + 0x6c) >>
                                                 0x20),(char)*(undefined8 *)((long)param_2 + 0x6c)))
                        );
    local_38 = CONCAT13((char)((ulong)*(undefined8 *)((long)param_2 + 0x84) >> 0x20),
                        CONCAT12((char)*(undefined8 *)((long)param_2 + 0x84),
                                 CONCAT11((char)((ulong)*(undefined8 *)((long)param_2 + 0x7c) >>
                                                0x20),(char)*(undefined8 *)((long)param_2 + 0x7c))))
    ;
    FUN_1001b5918(0x3f000000,param_1 + 0x918,*(undefined4 *)((long)param_2 + 0x5c),&uStack_34,
                  &local_38,1,0xffffffff,1);
    FUN_1001b5918(0x3f000000,param_1 + 0x1d20,*(undefined4 *)(param_2 + 0xc),&uStack_34,&local_38,1,
                  0xffffffff,1);
    FUN_1001b5918(0x3f000000,param_1 + 0x3128,*(undefined4 *)(param_2 + 0xd),&uStack_34,&local_38,1,
                  0xffffffff,1);
    FUN_1001b5918(0x3f000000,param_1 + 0x4530,*(undefined4 *)((long)param_2 + 100),&uStack_34,
                  &local_38,1,0xffffffff,1);
    FUN_1001d68f0(param_1);
  }
  return;
}




void FUN_1001d6c84(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [64];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10032bbf4(param_4);
  FUN_1004d2698(auStack_68,"build://Splash_%s.png");
  FUN_100102450(auStack_a8,"loading_vert_%s_5v5");
  lVar1 = param_3 + 0x1a0;
  FUN_100652d8c(lVar1);
  FUN_100652cac(lVar1,auStack_68,auStack_a8);
  local_b0 = FUN_1006531b0(lVar1);
  uStack_ac = param_2;
  FUN_10064e48c(lVar1,&local_b0);
  FUN_1001d68f0(param_3);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1001d6d4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101466d88;
  thunk_FUN_10064e2bc(param_1 + 0x53);
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




void FUN_1001d6dd0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101466d88;
  thunk_FUN_10064e2bc(param_1 + 0x53);
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




undefined8 FUN_1001d6e58(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}




void thunk_FUN_1001d78dc(void)

{
  FUN_1001d78dc();
  return;
}




void FUN_1001d6e64(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001d78dc();
  operator_delete(pvVar1);
  return;
}




void FUN_1001d6e78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101467028;
  param_1[0x17] = &PTR_FUN_101467188;
  FUN_10064f424(param_1 + 0x72);
  param_1[0x54] = &PTR_FUN_1014a7108;
  param_1[0x6b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6e);
  FUN_10064e2bc(param_1 + 0x54);
  FUN_10064e2bc(param_1 + 0x39);
  param_1[0x1b] = &PTR_FUN_1014a7108;
  param_1[0x32] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x35);
  FUN_10064e2bc(param_1 + 0x1b);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001d6f0c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101467028;
  param_1[0x17] = &PTR_FUN_101467188;
  FUN_10064f424(param_1 + 0x72);
  param_1[0x54] = &PTR_FUN_1014a7108;
  param_1[0x6b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6e);
  FUN_10064e2bc(param_1 + 0x54);
  FUN_10064e2bc(param_1 + 0x39);
  param_1[0x1b] = &PTR_FUN_1014a7108;
  param_1[0x32] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x35);
  FUN_10064e2bc(param_1 + 0x1b);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001d6fa4(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_101467028;
  *param_1 = &PTR_FUN_101467188;
  FUN_10064f424(param_1 + 0x5b);
  param_1[0x3d] = &PTR_FUN_1014a7108;
  param_1[0x54] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x57);
  FUN_10064e2bc(param_1 + 0x3d);
  FUN_10064e2bc(param_1 + 0x22);
  param_1[4] = &PTR_FUN_1014a7108;
  param_1[0x1b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1e);
  FUN_10064e2bc(param_1 + 4);
  FUN_10064e2bc(param_1 + -0x17);
  return;
}




void FUN_1001d7040(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-0x17] = &PTR_FUN_101467028;
  *param_1 = &PTR_FUN_101467188;
  FUN_10064f424(param_1 + 0x5b);
  param_1[0x3d] = &PTR_FUN_1014a7108;
  param_1[0x54] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x57);
  FUN_10064e2bc(param_1 + 0x3d);
  FUN_10064e2bc(param_1 + 0x22);
  param_1[4] = &PTR_FUN_1014a7108;
  param_1[0x1b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1e);
  FUN_10064e2bc(param_1 + 4);
  pvVar1 = (void *)FUN_10064e2bc(param_1 + -0x17);
  operator_delete(pvVar1);
  return;
}




void FUN_1001d70e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014671d0;
  thunk_FUN_10064e2bc(param_1 + 0x7b);
  thunk_FUN_100651068(param_1 + 0x55);
  param_1[0x37] = &PTR_FUN_1014a7108;
  param_1[0x4e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x51);
  FUN_10064e2bc(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_1014a7108;
  param_1[0x30] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x33);
  FUN_10064e2bc(param_1 + 0x19);
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001d717c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014671d0;
  thunk_FUN_10064e2bc(param_1 + 0x7b);
  thunk_FUN_100651068(param_1 + 0x55);
  param_1[0x37] = &PTR_FUN_1014a7108;
  param_1[0x4e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x51);
  FUN_10064e2bc(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_1014a7108;
  param_1[0x30] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x33);
  FUN_10064e2bc(param_1 + 0x19);
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_1001d7ab4(void)

{
  FUN_1001d7ab4();
  return;
}




void FUN_1001d7220(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001d7ab4();
  operator_delete(pvVar1);
  return;
}




void FUN_1001d7234(long param_1)

{
  FUN_1001d7ab4(param_1 + -0xb8);
  return;
}




void FUN_1001d723c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001d7ab4(param_1 + -0xb8);
  operator_delete(pvVar1);
  return;
}




void FUN_1001d7254(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014674c0;
  param_1[0xb9] = &PTR_FUN_1014a7108;
  param_1[0xd0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd3);
  FUN_10064e2bc(param_1 + 0xb9);
  thunk_FUN_100651068(param_1 + 0x93);
  param_1[0x68] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x7f);
  FUN_10064e2bc(param_1 + 0x68);
  thunk_FUN_100651068(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x2e);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001d7300(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014674c0;
  param_1[0xb9] = &PTR_FUN_1014a7108;
  param_1[0xd0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd3);
  FUN_10064e2bc(param_1 + 0xb9);
  thunk_FUN_100651068(param_1 + 0x93);
  param_1[0x68] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x7f);
  FUN_10064e2bc(param_1 + 0x68);
  thunk_FUN_100651068(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x2e);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_1001d73b0(void)

{
  return 200;
}




void FUN_1001d73b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101467610;
  param_1[200] = &PTR_FUN_1014a7108;
  param_1[0xdf] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe2);
  FUN_10064e2bc(param_1 + 200);
  param_1[0xaa] = &PTR_FUN_1014a7108;
  param_1[0xc1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc4);
  FUN_10064e2bc(param_1 + 0xaa);
  thunk_FUN_100651068(param_1 + 0x84);
  param_1[0x59] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x70);
  FUN_10064e2bc(param_1 + 0x59);
  FUN_10064221c(param_1 + 0x48);
  FUN_10052ffb4(param_1);
  return;
}




void FUN_1001d7468(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101467610;
  param_1[200] = &PTR_FUN_1014a7108;
  param_1[0xdf] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe2);
  FUN_10064e2bc(param_1 + 200);
  param_1[0xaa] = &PTR_FUN_1014a7108;
  param_1[0xc1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc4);
  FUN_10064e2bc(param_1 + 0xaa);
  thunk_FUN_100651068(param_1 + 0x84);
  param_1[0x59] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x70);
  FUN_10064e2bc(param_1 + 0x59);
  FUN_10064221c(param_1 + 0x48);
  pvVar1 = (void *)FUN_10052ffb4(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_1001d751c(void)

{
  return 200;
}




void FUN_1001d7524(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101467768;
  thunk_FUN_100651068(param_1 + 0x19c);
  param_1[0x17e] = &PTR_FUN_1014a7108;
  param_1[0x195] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x198);
  FUN_10064e2bc(param_1 + 0x17e);
  thunk_FUN_10064e2bc(param_1 + 0x167);
  param_1[0x149] = &PTR_FUN_1014a7108;
  param_1[0x160] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x163);
  FUN_10064e2bc(param_1 + 0x149);
  *param_1 = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x121);
  FUN_1002ebc50(param_1);
  return;
}




void FUN_1001d75c8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101467768;
  thunk_FUN_100651068(param_1 + 0x19c);
  param_1[0x17e] = &PTR_FUN_1014a7108;
  param_1[0x195] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x198);
  FUN_10064e2bc(param_1 + 0x17e);
  thunk_FUN_10064e2bc(param_1 + 0x167);
  param_1[0x149] = &PTR_FUN_1014a7108;
  param_1[0x160] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x163);
  FUN_10064e2bc(param_1 + 0x149);
  *param_1 = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x121);
  pvVar1 = (void *)FUN_1002ebc50(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001d7670(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001d7678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))();
  return;
}




void thunk_FUN_1001d7bcc(void)

{
  FUN_1001d7bcc();
  return;
}




void FUN_1001d7680(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001d7bcc();
  operator_delete(pvVar1);
  return;
}




void FUN_1001d7694(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101467be8;
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




void FUN_1001d7710(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101467be8;
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




void thunk_FUN_1001d7d6c(void)

{
  FUN_1001d7d6c();
  return;
}




void FUN_1001d7794(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001d7d6c();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_1001d77a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}




void thunk_FUN_1001d81b8(void)

{
  FUN_1001d81b8();
  return;
}




void FUN_1001d77b4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001d81b8();
  operator_delete(pvVar1);
  return;
}




void FUN_1001d77c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101467900;
  thunk_FUN_100651068(param_1 + 0x58);
  param_1[0x2d] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x44);
  FUN_10064e2bc(param_1 + 0x2d);
  if ((void *)param_1[0x2c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2c]);
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
  }
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001d7844(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101467900;
  thunk_FUN_100651068(param_1 + 0x58);
  param_1[0x2d] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x44);
  FUN_10064e2bc(param_1 + 0x2d);
  if ((void *)param_1[0x2c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2c]);
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
  }
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001d78c8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




void FUN_1001d78dc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001d78dc_101466ed0;
  FUN_1001f28f8(param_1 + 0x275);
  param_1[599] = &PTR_FUN_1014a7108;
  param_1[0x26e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x271);
  FUN_10064e2bc(param_1 + 599);
  param_1[0x239] = &PTR_FUN_1014a7108;
  param_1[0x250] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x253);
  FUN_10064e2bc(param_1 + 0x239);
  thunk_FUN_100651068(param_1 + 0x213);
  param_1[0x1e8] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x1ff);
  FUN_10064e2bc(param_1 + 0x1e8);
  thunk_FUN_100651068(param_1 + 0x1c2);
  param_1[0x1a4] = &PTR_FUN_1014a7108;
  param_1[0x1bb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1be);
  FUN_10064e2bc(param_1 + 0x1a4);
  thunk_FUN_100651068(param_1 + 0x17e);
  param_1[0x160] = &PTR_FUN_1014a7108;
  param_1[0x177] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x17a);
  FUN_10064e2bc(param_1 + 0x160);
  param_1[0x142] = &PTR_FUN_1014a7108;
  param_1[0x159] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15c);
  FUN_10064e2bc(param_1 + 0x142);
  FUN_10064e2bc(param_1 + 0x127);
  param_1[0x109] = &PTR_FUN_1014a7108;
  param_1[0x120] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x123);
  FUN_10064e2bc(param_1 + 0x109);
  param_1[0xeb] = &PTR_FUN_1014a7108;
  param_1[0x102] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x105);
  FUN_10064e2bc(param_1 + 0xeb);
  param_1[0xcd] = &PTR_FUN_1014a7108;
  param_1[0xe4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe7);
  FUN_10064e2bc(param_1 + 0xcd);
  param_1[0xaf] = &PTR_FUN_1014a7108;
  param_1[0xc6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc9);
  FUN_10064e2bc(param_1 + 0xaf);
  param_1[0x91] = &PTR_FUN_1014a7108;
  param_1[0xa8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xab);
  FUN_10064e2bc(param_1 + 0x91);
  FUN_10064e2bc(param_1 + 0x76);
  thunk_FUN_10064e2bc(param_1 + 0x5f);
  thunk_FUN_10064e2bc(param_1 + 0x48);
  FUN_10052ffb4(param_1);
  return;
}




void FUN_1001d7ab4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001d7ab4_101467318;
  param_1[0x17] = &PTR_FUN_101467478;
  thunk_FUN_100651068(param_1 + 0xf6);
  thunk_FUN_100651068(param_1 + 0xd0);
  param_1[0xa5] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0xbc);
  FUN_10064e2bc(param_1 + 0xa5);
  param_1[0x7a] = &PTR_FUN_10145eb78;
  param_1[0x91] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0xa2] != (void *)0x0) {
    operator_delete__((void *)param_1[0xa2]);
    param_1[0xa2] = 0;
    param_1[0xa1] = 0;
  }
  FUN_100651068(param_1 + 0x7a);
  param_1[0x5a] = &PTR_FUN_1014a7108;
  param_1[0x71] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x74);
  FUN_10064e2bc(param_1 + 0x5a);
  param_1[0x3c] = &PTR_FUN_1014a7108;
  param_1[0x53] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x56);
  FUN_10064e2bc(param_1 + 0x3c);
  param_1[0x1e] = &PTR_FUN_1014a7108;
  param_1[0x35] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x38);
  FUN_10064e2bc(param_1 + 0x1e);
  *param_1 = &PTR_FUN_1014a7108;
  param_1[0x17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001d7bcc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001d7bcc_101467a50;
  param_1[0x2dd] = &PTR_FUN_1014a7108;
  param_1[0x2f4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2f7);
  FUN_10064e2bc(param_1 + 0x2dd);
  FUN_10064e2bc(param_1 + 0x2c2);
  param_1[0x243] = &PTR_FUN_101467900;
  thunk_FUN_100651068(param_1 + 0x29b);
  param_1[0x270] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x287);
  FUN_10064e2bc(param_1 + 0x270);
  if ((void *)param_1[0x26f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x26f]);
    param_1[0x26f] = 0;
    param_1[0x26e] = 0;
  }
  param_1[0x243] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x25a);
  FUN_10064e2bc(param_1 + 0x243);
  param_1[0x1c4] = &PTR_FUN_101467900;
  thunk_FUN_100651068(param_1 + 0x21c);
  param_1[0x1f1] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x208);
  FUN_10064e2bc(param_1 + 0x1f1);
  if ((void *)param_1[0x1f0] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1f0]);
    param_1[0x1f0] = 0;
    param_1[0x1ef] = 0;
  }
  param_1[0x1c4] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x1db);
  FUN_10064e2bc(param_1 + 0x1c4);
  param_1[0x145] = &PTR_FUN_101467900;
  thunk_FUN_100651068(param_1 + 0x19d);
  param_1[0x172] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x189);
  FUN_10064e2bc(param_1 + 0x172);
  if ((void *)param_1[0x171] != (void *)0x0) {
    operator_delete__((void *)param_1[0x171]);
    param_1[0x171] = 0;
    param_1[0x170] = 0;
  }
  param_1[0x145] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x15c);
  FUN_10064e2bc(param_1 + 0x145);
  thunk_FUN_100534a3c(param_1);
  return;
}




void FUN_1001d7d6c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001d7d6c_101467e80;
  param_1[0x6c9] = &PTR_FUN_1014a7108;
  param_1[0x6e0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6e3);
  FUN_10064e2bc(param_1 + 0x6c9);
  param_1[0x6ab] = &PTR_FUN_1014a7108;
  param_1[0x6c2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6c5);
  FUN_10064e2bc(param_1 + 0x6ab);
  FUN_10064e2bc(param_1 + 0x694);
  param_1[0x5bd] = &PTR_FUN_1014674c0;
  param_1[0x676] = &PTR_FUN_1014a7108;
  param_1[0x68d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x690);
  FUN_10064e2bc(param_1 + 0x676);
  thunk_FUN_100651068(param_1 + 0x650);
  param_1[0x625] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x63c);
  FUN_10064e2bc(param_1 + 0x625);
  thunk_FUN_100651068(param_1 + 0x5ff);
  param_1[0x5d4] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x5eb);
  FUN_10064e2bc(param_1 + 0x5d4);
  FUN_10064e2bc(param_1 + 0x5bd);
  param_1[0x4d7] = &PTR_FUN_101467610;
  param_1[0x59f] = &PTR_FUN_1014a7108;
  param_1[0x5b6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5b9);
  FUN_10064e2bc(param_1 + 0x59f);
  param_1[0x581] = &PTR_FUN_1014a7108;
  param_1[0x598] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x59b);
  FUN_10064e2bc(param_1 + 0x581);
  thunk_FUN_100651068(param_1 + 0x55b);
  param_1[0x530] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x547);
  FUN_10064e2bc(param_1 + 0x530);
  FUN_10064221c(param_1 + 0x51f);
  FUN_10052ffb4(param_1 + 0x4d7);
  param_1[0x3f1] = &PTR_FUN_101467610;
  param_1[0x4b9] = &PTR_FUN_1014a7108;
  param_1[0x4d0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4d3);
  FUN_10064e2bc(param_1 + 0x4b9);
  param_1[0x49b] = &PTR_FUN_1014a7108;
  param_1[0x4b2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4b5);
  FUN_10064e2bc(param_1 + 0x49b);
  thunk_FUN_100651068(param_1 + 0x475);
  param_1[0x44a] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x461);
  FUN_10064e2bc(param_1 + 0x44a);
  FUN_10064221c(param_1 + 0x439);
  FUN_10052ffb4(param_1 + 0x3f1);
  param_1[0x30b] = &PTR_FUN_101467610;
  param_1[0x3d3] = &PTR_FUN_1014a7108;
  param_1[0x3ea] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3ed);
  FUN_10064e2bc(param_1 + 0x3d3);
  param_1[0x3b5] = &PTR_FUN_1014a7108;
  param_1[0x3cc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3cf);
  FUN_10064e2bc(param_1 + 0x3b5);
  thunk_FUN_100651068(param_1 + 0x38f);
  param_1[0x364] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x37b);
  FUN_10064e2bc(param_1 + 0x364);
  FUN_10064221c(param_1 + 0x353);
  FUN_10052ffb4(param_1 + 0x30b);
  param_1[0x225] = &PTR_FUN_101467610;
  param_1[0x2ed] = &PTR_FUN_1014a7108;
  param_1[0x304] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x307);
  FUN_10064e2bc(param_1 + 0x2ed);
  param_1[0x2cf] = &PTR_FUN_1014a7108;
  param_1[0x2e6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2e9);
  FUN_10064e2bc(param_1 + 0x2cf);
  thunk_FUN_100651068(param_1 + 0x2a9);
  param_1[0x27e] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x295);
  FUN_10064e2bc(param_1 + 0x27e);
  FUN_10064221c(param_1 + 0x26d);
  FUN_10052ffb4(param_1 + 0x225);
  FUN_10064e2bc(param_1 + 0x20e);
  param_1[0x4c] = &PTR_FUN_101467768;
  thunk_FUN_100651068(param_1 + 0x1e8);
  param_1[0x1ca] = &PTR_FUN_1014a7108;
  param_1[0x1e1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1e4);
  FUN_10064e2bc(param_1 + 0x1ca);
  thunk_FUN_10064e2bc(param_1 + 0x1b3);
  param_1[0x195] = &PTR_FUN_1014a7108;
  param_1[0x1ac] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1af);
  FUN_10064e2bc(param_1 + 0x195);
  param_1[0x4c] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x16d);
  FUN_1002ebc50(param_1 + 0x4c);
  thunk_FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001d81b8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001d81b8_101467fc8;
  thunk_FUN_100651068(param_1 + 0xb2f);
  thunk_FUN_100651068(param_1 + 0xb09);
  FUN_100196fa4(param_1 + 0x8a6);
  param_1[0x888] = &PTR_FUN_1014a7108;
  param_1[0x89f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8a2);
  FUN_10064e2bc(param_1 + 0x888);
  FUN_100196fa4(param_1 + 0x625);
  param_1[0x607] = &PTR_FUN_1014a7108;
  param_1[0x61e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x621);
  FUN_10064e2bc(param_1 + 0x607);
  FUN_100196fa4(param_1 + 0x3a4);
  param_1[0x386] = &PTR_FUN_1014a7108;
  param_1[0x39d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3a0);
  FUN_10064e2bc(param_1 + 0x386);
  FUN_100196fa4(param_1 + 0x123);
  param_1[0x105] = &PTR_FUN_1014a7108;
  param_1[0x11c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x11f);
  FUN_10064e2bc(param_1 + 0x105);
  thunk_FUN_100651068(param_1 + 0xdf);
  thunk_FUN_100651068(param_1 + 0xb9);
  param_1[0x8e] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0xa5);
  FUN_10064e2bc(param_1 + 0x8e);
  param_1[0x70] = &PTR_FUN_1014a7108;
  param_1[0x87] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8a);
  FUN_10064e2bc(param_1 + 0x70);
  param_1[0x52] = &PTR_FUN_1014a7108;
  param_1[0x69] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6c);
  FUN_10064e2bc(param_1 + 0x52);
  param_1[0x34] = &PTR_FUN_1014a7108;
  param_1[0x4b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4e);
  FUN_10064e2bc(param_1 + 0x34);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001d8350(uint *param_1,uint param_2)

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




void FUN_1001d83cc(uint *param_1,uint param_2)

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




void FUN_1001d8448(uint *param_1,undefined8 *param_2,undefined8 *param_3)

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




undefined8 * FUN_1001d84b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148f1e0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10014f4a0(param_1 + 2);
  FUN_1004f0a20(param_1 + 5);
  *param_1 = &PTR_thunk_FUN_1001d8544_1014682e0;
  param_1[2] = &PTR_FUN_101468328;
  param_1[5] = &PTR_FUN_1014686c0;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,thunk_FUN_1001d869c,0);
  return param_1;
}




void thunk_FUN_1001d869c(long param_1)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined8 uVar12;
  long lVar13;
  char *pcVar14;
  void *pvVar15;
  long lVar16;
  long lVar17;
  ulong uStack_40;
  long lStack_38;
  
  if ((*(char *)(param_1 + 0x40) == '\0') || (uVar10 = FUN_100136ad0(), (uVar10 & 1) == 0)) {
    FUN_1003080a4(param_1,0);
    return;
  }
  uStack_40 = 0;
  lStack_38 = 0;
  iVar9 = FUN_100136d8c(&uStack_40);
  if (iVar9 != 0) {
    if ((int)uStack_40 != 0) {
      lVar17 = lStack_38 + (uStack_40 & 0xffffffff) * 0x78;
      lVar16 = lStack_38;
      do {
        pbVar11 = (byte *)FUN_1001d8860();
        bVar6 = *(byte *)(lVar16 + 0x2f);
        sVar2 = *(size_t *)(lVar16 + 0x20);
        if (-1 < (char)bVar6) {
          sVar2 = (ulong)bVar6;
        }
        bVar7 = pbVar11[0x17];
        sVar3 = *(size_t *)(pbVar11 + 8);
        if (-1 < (char)bVar7) {
          sVar3 = (ulong)bVar7;
        }
        if (sVar2 == sVar3) {
          pvVar15 = *(void **)(lVar16 + 0x18);
          puVar4 = pvVar15;
          if (-1 < (char)bVar6) {
            puVar4 = (undefined8 *)(lVar16 + 0x18);
          }
          pbVar5 = *(byte **)pbVar11;
          if (-1 < (char)bVar7) {
            pbVar5 = pbVar11;
          }
          if ((char)bVar6 < '\0') {
            if ((sVar2 == 0) || (iVar9 = _memcmp(puVar4,pbVar5,sVar2), iVar9 == 0))
            goto LAB_1001d87bc;
          }
          else {
            if (sVar2 == 0) {
LAB_1001d87bc:
              if (*(uint *)(lVar16 + 8) != 0) {
                lVar17 = (ulong)*(uint *)(lVar16 + 8) * 0x598;
                pcVar14 = (char *)(*(long *)(lVar16 + 0x10) + 0x591);
                goto LAB_1001d87d4;
              }
              break;
            }
            if ((uint)*pbVar5 == ((uint)pvVar15 & 0xff)) {
              lVar13 = 0;
              do {
                if ((ulong)bVar6 - 1 == lVar13) goto LAB_1001d87bc;
                lVar1 = lVar16 + lVar13;
                lVar8 = lVar13 + 1;
                lVar13 = lVar13 + 1;
              } while (*(byte *)(lVar1 + 0x19) == pbVar5[lVar8]);
            }
          }
        }
        lVar16 = lVar16 + 0x78;
      } while (lVar16 != lVar17);
    }
  }
  goto LAB_1001d87e8;
  while( true ) {
    pcVar14 = pcVar14 + 0x598;
    lVar17 = lVar17 + -0x598;
    if (lVar17 == 0) break;
LAB_1001d87d4:
    if (*pcVar14 != '\0') {
      uVar12 = 2;
      goto LAB_1001d87ec;
    }
  }
LAB_1001d87e8:
  uVar12 = 1;
LAB_1001d87ec:
  FUN_1003080a4(param_1,uVar12);
  FUN_100135c64(&uStack_40,1);
  return;
}




undefined8 * thunk_FUN_1001d84b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148f1e0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10014f4a0(param_1 + 2);
  FUN_1004f0a20(param_1 + 5);
  *param_1 = &PTR_thunk_FUN_1001d8544_1014682e0;
  param_1[2] = &PTR_FUN_101468328;
  param_1[5] = &PTR_FUN_1014686c0;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,thunk_FUN_1001d869c,0);
  return param_1;
}




void FUN_1001d8544(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001d8544_1014682e0;
  param_1[2] = &PTR_FUN_101468328;
  param_1[5] = &PTR_FUN_1014686c0;
  FUN_1004e1acc(&DAT_101d234d8,param_1,0x9d2c9b16);
  FUN_1004f0a9c(param_1 + 5);
  FUN_10014f51c(param_1 + 2);
  FUN_100308098(param_1);
  return;
}




void thunk_FUN_1001d8544(void)

{
  FUN_1001d8544();
  return;
}




void FUN_1001d85bc(long param_1)

{
  FUN_1001d8544(param_1 + -0x10);
  return;
}




void FUN_1001d85c4(long param_1)

{
  FUN_1001d8544(param_1 + -0x28);
  return;
}




void FUN_1001d85cc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001d8544();
  operator_delete(pvVar1);
  return;
}




void FUN_1001d85e0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001d8544(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001d85f8(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001d8544(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_1001d8610(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar1 = operator_new(0x20);
  thunk_FUN_1002066fc();
  pvVar2 = operator_new(0xc0);
  FUN_1001d88e0(pvVar2,pvVar1);
  uVar3 = FUN_1004e0150("MENU_MARKET_FEATURED_RECOMMENDED",0);
                    /* WARNING: Could not recover jumptable at 0x0001001d868c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,uVar3,500,pvVar2,"");
  return;
}




void FUN_1001d8690(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 1;
  FUN_1001d869c();
  return;
}




void FUN_1001d869c(long param_1)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined8 uVar12;
  long lVar13;
  char *pcVar14;
  void *pvVar15;
  long lVar16;
  long lVar17;
  ulong local_40;
  long local_38;
  
  if ((*(char *)(param_1 + 0x40) == '\0') || (uVar10 = FUN_100136ad0(), (uVar10 & 1) == 0)) {
    FUN_1003080a4(param_1,0);
    return;
  }
  local_40 = 0;
  local_38 = 0;
  iVar9 = FUN_100136d8c(&local_40);
  if (iVar9 != 0) {
    if ((int)local_40 != 0) {
      lVar17 = local_38 + (local_40 & 0xffffffff) * 0x78;
      lVar16 = local_38;
      do {
        pbVar11 = (byte *)FUN_1001d8860();
        bVar6 = *(byte *)(lVar16 + 0x2f);
        sVar2 = *(size_t *)(lVar16 + 0x20);
        if (-1 < (char)bVar6) {
          sVar2 = (ulong)bVar6;
        }
        bVar7 = pbVar11[0x17];
        sVar3 = *(size_t *)(pbVar11 + 8);
        if (-1 < (char)bVar7) {
          sVar3 = (ulong)bVar7;
        }
        if (sVar2 == sVar3) {
          pvVar15 = *(void **)(lVar16 + 0x18);
          puVar4 = pvVar15;
          if (-1 < (char)bVar6) {
            puVar4 = (undefined8 *)(lVar16 + 0x18);
          }
          pbVar5 = *(byte **)pbVar11;
          if (-1 < (char)bVar7) {
            pbVar5 = pbVar11;
          }
          if ((char)bVar6 < '\0') {
            if ((sVar2 == 0) || (iVar9 = _memcmp(puVar4,pbVar5,sVar2), iVar9 == 0))
            goto LAB_1001d87bc;
          }
          else {
            if (sVar2 == 0) {
LAB_1001d87bc:
              if (*(uint *)(lVar16 + 8) != 0) {
                lVar17 = (ulong)*(uint *)(lVar16 + 8) * 0x598;
                pcVar14 = (char *)(*(long *)(lVar16 + 0x10) + 0x591);
                goto LAB_1001d87d4;
              }
              break;
            }
            if ((uint)*pbVar5 == ((uint)pvVar15 & 0xff)) {
              lVar13 = 0;
              do {
                if ((ulong)bVar6 - 1 == lVar13) goto LAB_1001d87bc;
                lVar1 = lVar16 + lVar13;
                lVar8 = lVar13 + 1;
                lVar13 = lVar13 + 1;
              } while (*(byte *)(lVar1 + 0x19) == pbVar5[lVar8]);
            }
          }
        }
        lVar16 = lVar16 + 0x78;
      } while (lVar16 != lVar17);
    }
  }
  goto LAB_1001d87e8;
  while( true ) {
    pcVar14 = pcVar14 + 0x598;
    lVar17 = lVar17 + -0x598;
    if (lVar17 == 0) break;
LAB_1001d87d4:
    if (*pcVar14 != '\0') {
      uVar12 = 2;
      goto LAB_1001d87ec;
    }
  }
LAB_1001d87e8:
  uVar12 = 1;
LAB_1001d87ec:
  FUN_1003080a4(param_1,uVar12);
  FUN_100135c64(&local_40,1);
  return;
}




void FUN_1001d881c(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  FUN_1001d869c(param_1 + -0x10);
  return;
}




void FUN_1001d8830(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_1001d869c();
  return;
}




void FUN_1001d8838(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_1001d869c(param_1 + -0x28);
  return;
}




void FUN_1001d8848(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_1001d869c();
  return;
}




void FUN_1001d8850(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_1001d869c(param_1 + -0x28);
  return;
}




char * FUN_1001d8860(void)

{
  int iVar1;
  
  if (((DAT_101854938 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101854938), iVar1 != 0)) {
    FUN_10001549c(s_C0123456789ABCDEF_10185490f + 0x11,"MENU_MARKET_TAB_NAME_POPUPS");
    ___cxa_atexit(FUN_1000e6204,s_C0123456789ABCDEF_10185490f + 0x11,0x100000000);
    ___cxa_guard_release(&DAT_101854938);
  }
  return s_C0123456789ABCDEF_10185490f + 0x11;
}




undefined8 FUN_1001d88e0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_FUN_1014686f0;
  puVar1[0x17] = param_2;
  FUN_100642bd8(puVar1,*(undefined8 *)(param_2 + 8),1);
  plVar2 = (long *)thunk_FUN_10064dd80();
  FUN_10064e524(param_1,plVar2);
  (**(code **)(*plVar2 + 0x58))(plVar2,*(undefined8 *)(param_2 + 8));
  return param_1;
}




void FUN_1001d8954(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014686f0;
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 8))();
  }
  param_1[0x17] = 0;
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001d8998(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014686f0;
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 8))();
  }
  param_1[0x17] = 0;
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long FUN_1001d89e0(long param_1)

{
  undefined8 *puVar1;
  code *local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_FUN_101468838;
  puVar1[0x17] = 0;
  FUN_10064e47c(0x42200000,0x42c80000);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x10;
  local_38 = DAT_101dbd460;
  local_60 = FUN_1001d8aa0;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(param_1 + 8,&local_60);
  local_38 = DAT_101dbd48c;
  local_60 = FUN_1001d8aa0;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(param_1 + 8,&local_60);
  return param_1;
}




void FUN_1001d8aa0(long param_1)

{
  FUN_1001d9670(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x568),param_1);
  return;
}




void FUN_1001d8ab0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101468838;
  param_1[0x17] = 0;
  FUN_10064e2bc();
  return;
}




void FUN_1001d8ac4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101468838;
  param_1[0x17] = 0;
  FUN_10064e2bc();
  return;
}




void FUN_1001d8ad8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101468838;
  param_1[0x17] = 0;
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




long * FUN_1001d8afc(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1001d89e0();
  *puVar3 = &PTR_FUN_101468988;
  puVar3 = puVar3 + 0x18;
  thunk_FUN_100652c08(puVar3);
  FUN_10064e47c(0,0x40800000,param_1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  uVar1 = FUN_1004d2524("TableViewSeparator");
  uVar2 = FUN_100015208("TableViewSeparator",uVar1,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar2 & 0xffff) << 0xf;
  FUN_100652cac(puVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffef;
  FUN_100644c24(param_1);
  return param_1;
}




void FUN_1001d8bc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10064e47c();
  FUN_10064e47c(param_1,param_2,param_3 + 0xc0);
  FUN_10064e5ec(0,0,param_3 + 0xc0,8,param_3,8);
  return;
}




long * FUN_1001d8c20(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_thunk_FUN_1001d8e48_101468ad8;
  puVar1 = puVar5 + 0x17;
  FUN_10064e264(puVar1);
  plVar2 = param_1 + 0x2e;
  thunk_FUN_100652c08(plVar2);
  FUN_10064e264(param_1 + 0x4c);
  plVar3 = param_1 + 99;
  FUN_10065346c(plVar3);
  plVar4 = param_1 + 0x87;
  thunk_FUN_100650e64(plVar4);
  *(undefined8 *)((long)param_1 + 0x58b) = 0;
  *(undefined8 *)((long)param_1 + 0x583) = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)((long)param_1 + 0x593) = 0xff000000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,plVar2,1);
  FUN_100642bd8(puVar1,plVar3,1);
  FUN_100642bd8(puVar1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4c,1);
  uVar6 = 0x42c80000;
  FUN_10064e47c(0x42200000,puVar1);
  local_70 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x17] + 0x28))(puVar1,&local_70);
  *(uint *)((long)puVar5 + 0x13c) = *(uint *)((long)puVar5 + 0x13c) | 0x10;
  local_48 = DAT_101dbd460;
  local_70 = FUN_1001d8e3c;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x18,&local_70);
  local_48 = DAT_101dbd48c;
  local_70 = FUN_1001d8e3c;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x18,&local_70);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_right");
  uVar7 = FUN_1006531b0(plVar3);
  local_70 = (code *)CONCAT44(uVar6,uVar7);
  FUN_10064e48c(plVar3,&local_70);
  FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return param_1;
}




void FUN_1001d8e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1001d9ce4(param_1,param_4);
  return;
}




long * thunk_FUN_1001d8c20(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_thunk_FUN_1001d8e48_101468ad8;
  puVar1 = puVar5 + 0x17;
  FUN_10064e264(puVar1);
  plVar2 = param_1 + 0x2e;
  thunk_FUN_100652c08(plVar2);
  FUN_10064e264(param_1 + 0x4c);
  plVar3 = param_1 + 99;
  FUN_10065346c(plVar3);
  plVar4 = param_1 + 0x87;
  thunk_FUN_100650e64(plVar4);
  *(undefined8 *)((long)param_1 + 0x58b) = 0;
  *(undefined8 *)((long)param_1 + 0x583) = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)((long)param_1 + 0x593) = 0xff000000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,plVar2,1);
  FUN_100642bd8(puVar1,plVar3,1);
  FUN_100642bd8(puVar1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4c,1);
  uVar6 = 0x42c80000;
  FUN_10064e47c(0x42200000,puVar1);
  uStack_70 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x17] + 0x28))(puVar1,&uStack_70);
  *(uint *)((long)puVar5 + 0x13c) = *(uint *)((long)puVar5 + 0x13c) | 0x10;
  uStack_48 = DAT_101dbd460;
  uStack_70 = FUN_1001d8e3c;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x18,&uStack_70);
  uStack_48 = DAT_101dbd48c;
  uStack_70 = FUN_1001d8e3c;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x18,&uStack_70);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_right");
  uVar7 = FUN_1006531b0(plVar3);
  uStack_70 = (code *)CONCAT44(uVar6,uVar7);
  FUN_10064e48c(plVar3,&uStack_70);
  FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return param_1;
}




void FUN_1001d8e48(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001d8e48_101468ad8;
  FUN_1001d8f0c();
  param_1[0xad] = 0;
  if ((void *)param_1[0xb1] != (void *)0x0) {
    operator_delete__((void *)param_1[0xb1]);
    param_1[0xb1] = 0;
    param_1[0xb0] = 0;
  }
  if ((void *)param_1[0xaf] != (void *)0x0) {
    operator_delete__((void *)param_1[0xaf]);
    param_1[0xaf] = 0;
    param_1[0xae] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x87);
  param_1[99] = &PTR_FUN_1014a7108;
  param_1[0x7a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x7d);
  FUN_10064e2bc(param_1 + 99);
  thunk_FUN_10064e2bc(param_1 + 0x4c);
  param_1[0x2e] = &PTR_FUN_1014a7108;
  param_1[0x45] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x48);
  FUN_10064e2bc(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001d8f0c(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x570);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x578);
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *(long *)(param_1 + 0x578);
        uVar2 = *(uint *)(param_1 + 0x570);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 0x578) != 0) {
    *(undefined4 *)(param_1 + 0x570) = 0;
  }
  return;
}




void thunk_FUN_1001d8e48(void)

{
  FUN_1001d8e48();
  return;
}




void FUN_1001d8f74(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001d8e48();
  operator_delete(pvVar1);
  return;
}




void FUN_1001d8f88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1001d8fc0();
  FUN_10064e47c(param_1,uVar1,param_2);
  return;
}




float FUN_1001d8fc0(undefined1 param_1 [16],float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  
  FUN_10064e3cc(param_3 + 0xb8);
  fVar1 = (float)FUN_1001d9bcc(param_3);
  fVar2 = (float)FUN_1001d9c58(param_3);
  return param_2 + fVar1 + fVar2;
}




void FUN_1001d900c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (DAT_101854940 == '\0') {
    lVar3 = *(long *)(param_1 + 0x288);
    if (*(long *)(param_1 + 0x288) == 0) {
      *(undefined1 *)(param_1 + 0x591) = 0;
    }
    else {
      do {
        lVar2 = *(long *)(lVar3 + 0x30);
        if (lVar2 == 0) {
          uVar1 = FUN_100642bc8(lVar3);
          if ((uVar1 & 1) == 0) {
            *(undefined1 *)(param_1 + 0x591) = 0;
          }
          lVar2 = *(long *)(lVar3 + 0x30);
        }
        lVar3 = lVar2;
      } while (lVar2 != 0);
      if (*(char *)(param_1 + 0x591) != '\0') {
        return;
      }
    }
    if (*(char *)(param_1 + 0x592) != '\0') {
      FUN_1001d9098(param_1);
    }
    if (*(int *)(param_1 + 0x580) != 0) {
      FUN_1001d90d8(param_1);
      return;
    }
  }
  return;
}




void FUN_1001d9098(long param_1)

{
  FUN_1001d8f0c();
  *(undefined1 *)(param_1 + 0x592) = 0;
  if (*(int *)(param_1 + 0x580) != 0) {
    return;
  }
  FUN_1001d9ac0(*(undefined8 *)(param_1 + 0x568),0);
  return;
}




void FUN_1001d90d8(long *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long local_58;
  
  if ((int)param_1[0xb0] != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(param_1[0xb1] + uVar3 * 8);
      FUN_100642bd8(param_1 + 0x4c,lVar2,1);
      *(long **)(lVar2 + 0xb8) = param_1;
      if ((char)param_1[0xb2] == '\0') {
        uVar1 = *(uint *)(lVar2 + 0x84);
        *(uint *)(lVar2 + 0x84) = uVar1 & 0xfffffffb;
        if ((uVar1 & 0x7f80) != 0) {
          *(uint *)(lVar2 + 0x84) = uVar1 & 0xffff807b;
          FUN_1000200a0(lVar2);
        }
      }
      local_58 = lVar2;
      FUN_1001d946c(param_1 + 0xae,&local_58);
      uVar1 = *(uint *)(param_1 + 0xb0);
      if (uVar3 != uVar1 - 1) {
        lVar2 = FUN_1001da444(param_1 + 0x4c,1);
        local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)((long)param_1 + 0x593));
        FUN_100652dd4(lVar2 + 0xc0,&local_58,2);
        if ((char)param_1[0xb2] == '\0') {
          uVar1 = *(uint *)(lVar2 + 0x84);
          *(uint *)(lVar2 + 0x84) = uVar1 & 0xfffffffb;
          if ((uVar1 & 0x7f80) != 0) {
            *(uint *)(lVar2 + 0x84) = uVar1 & 0xffff807b;
            FUN_1000200a0(lVar2);
          }
        }
        local_58 = lVar2;
        FUN_1001d946c(param_1 + 0xae,&local_58);
        uVar1 = *(uint *)(param_1 + 0xb0);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_1001d974c(param_1,0);
  FUN_1001d9ac0(param_1[0xad],0);
  if (param_1[0xb1] != 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  return;
}




void FUN_1001d9240(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  
  FUN_10064e32c();
  plVar1 = param_3 + 0x17;
  uVar6 = (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10064e3cc(plVar1);
  FUN_10064e47c(uVar6,plVar1);
  local_58 = FUN_10064e3cc(plVar1);
  uStack_54 = param_2;
  FUN_10064e48c(param_3 + 0x2e,&local_58);
  if ((int)param_3[0xae] != 0) {
    uVar3 = 0;
    do {
      uVar6 = *(undefined8 *)(param_3[0xaf] + uVar3 * 8);
      uVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      (**(code **)(**(long **)(param_3[0xaf] + uVar3 * 8) + 0x48))();
      FUN_10064e47c(uVar7,uVar6);
      (**(code **)(**(long **)(param_3[0xaf] + uVar3 * 8) + 0x90))();
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_3 + 0xae));
  }
  uVar6 = (**(code **)(*param_3 + 0x48))(param_3);
  fVar4 = (float)FUN_1001d9bcc(param_3);
  fVar5 = (float)FUN_1001d9c58(param_3);
  FUN_10064e47c(uVar6,fVar5 + fVar4,param_3 + 0x4c);
  FUN_10064e72c(0,plVar1,0,param_3,0);
  FUN_10064e72c(0,param_3 + 0x4c,0,plVar1,2);
  FUN_10064e5ec(0,0,param_3 + 0x2e,8,plVar1,8);
  plVar2 = param_3 + 99;
  FUN_10064e72c(0,plVar2,5,plVar1,5);
  FUN_10064e72c(0,param_3 + 0x87,5,plVar1,5);
  FUN_10064e72c(0x41a00000,plVar2,3,plVar1,3);
  FUN_10064e72c(0x41a00000,param_3 + 0x87,3,plVar2,1);
  return;
}




void FUN_1001d9424(long param_1,undefined8 param_2)

{
  undefined8 local_28;
  
  local_28 = param_2;
  FUN_1001d946c(param_1 + 0x580,&local_28);
  if (DAT_101854940 != '\0') {
    FUN_1001d90d8(param_1);
  }
  return;
}




void FUN_1001d946c(uint *param_1,undefined8 *param_2)

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
    FUN_1001da3c8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




int FUN_1001d94ec(long param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x288);
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      if ((param_2 & 1) == 0) {
        uVar1 = FUN_1004d2524("TableViewSeparator");
        iVar2 = FUN_100015208("TableViewSeparator",uVar1,0x1234);
        uVar3 = (uint)((uint)(*(int *)(lVar5 + 0x84) << 1 ^ iVar2 << 0x10) >> 0x10 != 0);
      }
      else {
        uVar3 = 1;
      }
      iVar4 = iVar4 + uVar3;
      lVar5 = *(long *)(lVar5 + 0x30);
    } while (lVar5 != 0);
  }
  return iVar4;
}




void FUN_1001d9578(long param_1)

{
  if (DAT_101854940 != '\0') {
    FUN_1001d9098();
    return;
  }
  *(undefined1 *)(param_1 + 0x592) = 1;
  return;
}




void FUN_1001d9594(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x590) = param_2;
  FUN_1001d959c();
  return;
}




void FUN_1001d959c(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x590) != '\0') {
    uVar2 = 0x3fc90fdb;
  }
  uVar1 = FUN_100640c2c(uVar2,0x3dcccccd,param_1 + 0x318,0);
  FUN_100642b14(param_1 + 0x318,uVar1);
  return;
}




void FUN_1001d95f8(long param_1)

{
  FUN_1006513c0(param_1 + 0x438);
  return;
}




void FUN_1001d9600(long param_1,undefined4 param_2)

{
  undefined4 local_24;
  
  local_24 = param_2;
  FUN_100651460(param_1 + 0x438,&local_24);
  FUN_100652dd4(param_1 + 0x318,&local_24,2);
  return;
}




void FUN_1001d9644(long param_1,undefined4 param_2)

{
  undefined4 local_14;
  
  local_14 = param_2;
  FUN_100652dd4(param_1 + 0x170,&local_14,2);
  return;
}




void FUN_1001d9670(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = *(uint *)(param_1 + 0xbd0);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0xbd8) + uVar4 * 8);
      if (*(int *)(lVar5 + 0x570) != 0) {
        uVar6 = 0;
        do {
          plVar2 = *(long **)(*(long *)(lVar5 + 0x578) + uVar6 * 8);
          (**(code **)(*plVar2 + 0x138))(plVar2,0);
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(lVar5 + 0x570));
        uVar3 = *(uint *)(param_1 + 0xbd0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  plVar2 = (long *)(DAT_101d235f0 + -8);
  if (DAT_101d235f0 != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  *(long **)(param_1 + 0xbe0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001001d9748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x138))(param_2,1);
  return;
}




void FUN_1001d974c(long *param_1,byte param_2)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  bool bVar4;
  long lVar5;
  ushort uVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  long local_98;
  
  uVar12 = (**(code **)(*param_1 + 0x48))();
  fVar14 = 0.0;
  (**(code **)(*param_1 + 0xf0))(uVar12,0,param_1);
  param_2 = *(uint *)(param_1 + 0xae) < 0x12d & param_2;
  fVar3 = 0.5;
  if (param_2 == 0) {
    fVar3 = fVar14;
  }
  param_2 = DAT_101854940 == '\0' & param_2;
  *(byte *)((long)param_1 + 0x591) = param_2;
  if (*(uint *)(param_1 + 0xae) != 0) {
    uVar11 = 0;
    fVar15 = 0.0;
    do {
      if (uVar11 == 0) {
        fVar16 = 0.0;
        if (param_2 == 0) goto LAB_1001d9848;
LAB_1001d980c:
        uVar12 = FUN_1000b50a8();
        FUN_10063f130(uVar12,FUN_10001f160);
        if (uVar11 == 0) {
          local_98 = 0;
          FUN_10063fb90(uVar12,&local_98);
          fVar16 = 0.0;
        }
        else {
          local_98 = (ulong)(uint)fVar16 << 0x20;
          FUN_10063fb90(uVar12,&local_98);
          fVar16 = fVar3;
        }
        FUN_10063f0e8(fVar16,uVar12);
        fVar16 = fVar14;
        if ((char)param_1[0xb2] != '\0') {
          fVar16 = 1.0;
        }
        fVar13 = fVar3;
        FUN_100640840(fVar16,0);
        lVar5 = DAT_101dbd2f8;
        uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
        if ((ulong)uVar6 == 0xffff) {
          puVar8 = (ushort *)0x0;
        }
        else {
          puVar8 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
          if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
            uVar6 = 0xffff;
          }
          else {
            uVar6 = *puVar8;
          }
          *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
          *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
          FUN_10063f1bc(puVar8);
          *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
        }
        FUN_10063f2a4(puVar8,uVar12);
        lVar5 = DAT_101dbd2f8;
        uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
        if ((ulong)uVar6 == 0xffff) {
          puVar9 = (ushort *)0x0;
        }
        else {
          puVar9 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
          if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
            uVar6 = 0xffff;
          }
          else {
            uVar6 = *puVar9;
          }
          *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
          *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
          FUN_10063f050(puVar9);
          *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
        }
        FUN_10063f090(puVar9,(char)param_1[0xb2]);
        lVar5 = DAT_101dbd2f8;
        uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
        if ((ulong)uVar6 == 0xffff) {
          puVar10 = (ushort *)0x0;
        }
        else {
          puVar10 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
          if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
            uVar6 = 0xffff;
          }
          else {
            uVar6 = *puVar10;
          }
          *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
          *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
          FUN_10063f564(puVar10);
          *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
        }
        if ((char)param_1[0xb2] != '\0') {
          puVar8 = puVar9;
        }
        FUN_10063f614(puVar10,puVar8);
        FUN_100642b14(*(undefined8 *)(param_1[0xaf] + uVar11 * 8),puVar10);
      }
      else {
        fVar16 = fVar14;
        if ((char)param_1[0xb2] != '\0') {
          fVar16 = fVar15;
        }
        if (param_2 != 0) goto LAB_1001d980c;
LAB_1001d9848:
        lVar5 = *(long *)(param_1[0xaf] + uVar11 * 8);
        bVar2 = *(byte *)(param_1 + 0xb2);
        uVar7 = *(uint *)(lVar5 + 0x84);
        uVar1 = -(bVar2 & 1) & 0xff;
        if (uVar1 != (uVar7 >> 7 & 0xff)) {
          *(uint *)(lVar5 + 0x84) = uVar7 & 0xffff8000 | uVar7 & 0x7f | uVar1 << 7;
          FUN_1000200a0();
          bVar2 = *(byte *)(param_1 + 0xb2);
          lVar5 = *(long *)(param_1[0xaf] + uVar11 * 8);
          uVar7 = *(uint *)(lVar5 + 0x84);
        }
        *(uint *)(lVar5 + 0x84) = uVar7 & 0xfffffff8 | uVar7 & 3 | (uint)(bVar2 != 0) << 2;
        lVar5 = *(long *)(param_1[0xaf] + uVar11 * 8);
        fVar13 = *(float *)(lVar5 + 0x44);
        bVar4 = false;
        if ((*(float *)(lVar5 + 0x40) == 0.0) && (bVar4 = false, !NAN(fVar13) && !NAN(fVar16))) {
          bVar4 = fVar13 == fVar16;
        }
        if (!bVar4) {
          *(undefined4 *)(lVar5 + 0x40) = 0;
          *(float *)(lVar5 + 0x44) = fVar16;
          FUN_1000200a0();
        }
      }
      (**(code **)(**(long **)(param_1[0xaf] + uVar11 * 8) + 0x48))();
      fVar15 = fVar13 + fVar15;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0xae));
  }
  return;
}




void FUN_1001d9ac0(undefined1 param_1 [16],float param_2,long param_3,byte param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  undefined4 local_58;
  float local_54;
  
  bVar2 = DAT_101854940 == '\0';
  if (*(int *)(param_3 + 0xbd0) != 0) {
    uVar5 = 0;
    fVar6 = 0.0;
    do {
      FUN_100642324(*(undefined8 *)(*(long *)(param_3 + 0xbd8) + uVar5 * 8));
      if ((bVar2 & param_4) == 0) {
        lVar4 = *(long *)(*(long *)(param_3 + 0xbd8) + uVar5 * 8);
        param_2 = *(float *)(lVar4 + 0x44);
        bVar1 = false;
        if ((*(float *)(lVar4 + 0x40) == 0.0) && (bVar1 = false, !NAN(param_2) && !NAN(fVar6))) {
          bVar1 = param_2 == fVar6;
        }
        if (!bVar1) {
          *(undefined4 *)(lVar4 + 0x40) = 0;
          *(float *)(lVar4 + 0x44) = fVar6;
          FUN_1000200a0();
        }
      }
      else {
        uVar3 = FUN_1000b50a8();
        local_58 = 0;
        local_54 = fVar6;
        FUN_10063fb90(uVar3,&local_58);
        FUN_10063f0e8(0x3f000000,uVar3);
        FUN_10063f130(uVar3,FUN_10001f160);
        FUN_100642b7c(*(undefined8 *)(*(long *)(param_3 + 0xbd8) + uVar5 * 8),uVar3);
      }
      (**(code **)(**(long **)(*(long *)(param_3 + 0xbd8) + uVar5 * 8) + 0x48))();
      fVar6 = param_2 + fVar6;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_3 + 0xbd0));
  }
  return;
}




float FUN_1001d9bcc(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  float fVar4;
  
  fVar4 = 0.0;
  if ((*(char *)(param_3 + 0x590) != '\0') &&
     (plVar3 = *(long **)(param_3 + 0x288), plVar3 != (long *)0x0)) {
    fVar4 = 0.0;
    do {
      uVar1 = FUN_1004d2524("TableViewSeparator");
      iVar2 = FUN_100015208("TableViewSeparator",uVar1,0x1234);
      if (0xffff < (uint)(*(int *)((long)plVar3 + 0x84) << 1 ^ iVar2 << 0x10)) {
        (**(code **)(*plVar3 + 0x48))(plVar3);
        fVar4 = param_2 + fVar4;
      }
      plVar3 = (long *)plVar3[6];
    } while (plVar3 != (long *)0x0);
  }
  return fVar4;
}




float FUN_1001d9c58(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  float fVar4;
  
  fVar4 = 0.0;
  if ((*(char *)(param_3 + 0x590) != '\0') &&
     (plVar3 = *(long **)(param_3 + 0x288), plVar3 != (long *)0x0)) {
    fVar4 = 0.0;
    do {
      uVar1 = FUN_1004d2524("TableViewSeparator");
      iVar2 = FUN_100015208("TableViewSeparator",uVar1,0x1234);
      if ((uint)(*(int *)((long)plVar3 + 0x84) << 1 ^ iVar2 << 0x10) >> 0x10 == 0) {
        (**(code **)(*plVar3 + 0x48))(plVar3);
        fVar4 = param_2 + fVar4;
      }
      plVar3 = (long *)plVar3[6];
    } while (plVar3 != (long *)0x0);
  }
  return fVar4;
}




void FUN_1001d9ce4(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x591) != '\0') {
    return;
  }
  *(byte *)(param_1 + 0x590) = *(byte *)(param_1 + 0x590) ^ 1;
  FUN_1001d959c();
  FUN_100644b14(param_2);
  FUN_1001d974c(param_1,1);
  FUN_1001d9d44(*(undefined8 *)(param_1 + 0x568),param_1);
  return;
}




void FUN_1001d9d44(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  FUN_1001d9ac0(param_1,1);
  plVar2 = (long *)(DAT_101d235f0 + -8);
  if (DAT_101d235f0 != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




long * FUN_1001d9da8(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 local_38 [8];
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_thunk_FUN_1001d9e70_101468c20;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100652c08(puVar2);
  plVar1 = param_1 + 0x35;
  thunk_FUN_1005357f4(plVar1);
  param_1[0x17c] = 0;
  param_1[0x17b] = 0;
  param_1[0x17a] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652cac(puVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_38[0] = 9;
  FUN_100534ebc(plVar1,local_38);
  return param_1;
}




long * thunk_FUN_1001d9da8(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [8];
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_thunk_FUN_1001d9e70_101468c20;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100652c08(puVar2);
  plVar1 = param_1 + 0x35;
  thunk_FUN_1005357f4(plVar1);
  param_1[0x17c] = 0;
  param_1[0x17b] = 0;
  param_1[0x17a] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652cac(puVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  auStack_38[0] = 9;
  FUN_100534ebc(plVar1,auStack_38);
  return param_1;
}




void FUN_1001d9e70(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001d9e70_101468c20;
  FUN_1001d9ef8();
  DAT_101d235f0 = 0;
  DAT_101d235f8 = 0;
  DAT_101d23600 = 0;
  if ((void *)param_1[0x17b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x17b]);
    param_1[0x17b] = 0;
    param_1[0x17a] = 0;
  }
  thunk_FUN_100534a3c(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001d9ef8(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0xbd0);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0xbd8);
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *(long *)(param_1 + 0xbd8);
        uVar2 = *(uint *)(param_1 + 0xbd0);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 0xbd8) != 0) {
    *(undefined4 *)(param_1 + 0xbd0) = 0;
  }
  *(undefined8 *)(param_1 + 0xbe0) = 0;
  return;
}




void thunk_FUN_1001d9e70(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001d9e70_101468c20;
  FUN_1001d9ef8();
  DAT_101d235f0 = 0;
  DAT_101d235f8 = 0;
  DAT_101d23600 = 0;
  if ((void *)param_1[0x17b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x17b]);
    param_1[0x17b] = 0;
    param_1[0x17a] = 0;
  }
  thunk_FUN_100534a3c(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001d9f64(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001d9e70();
  operator_delete(pvVar1);
  return;
}




void FUN_1001d9f78(long *param_1)

{
  FUN_10064e328();
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_1001d9ac0(param_1,0);
  return;
}




void FUN_1001d9fb0(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  
  FUN_10064e32c();
  local_48 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_44 = param_2;
  FUN_10064e48c(param_3 + 0x17,&local_48);
  local_48 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_44 = param_2;
  FUN_10064e48c(param_3 + 0x35,&local_48);
  fVar5 = 0.0;
  uVar4 = 0;
  FUN_10064e5ec(0,0,param_3 + 0x17,8,param_3,8);
  if ((int)param_3[0x17a] != 0) {
    uVar2 = 0;
    do {
      uVar1 = *(undefined8 *)(param_3[0x17b] + uVar2 * 8);
      uVar3 = (**(code **)(*param_3 + 0x48))(param_3);
      uVar4 = 0;
      FUN_10064e47c(uVar3,0,uVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_3 + 0x17a));
  }
  uVar1 = (**(code **)(*param_3 + 0x48))(param_3);
  if ((int)param_3[0x17a] != 0) {
    uVar2 = 0;
    fVar5 = 0.0;
    do {
      (**(code **)(**(long **)(param_3[0x17b] + uVar2 * 8) + 0x48))();
      fVar5 = (float)uVar4 + fVar5;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_3 + 0x17a));
  }
  FUN_100534e6c(uVar1,fVar5,param_3 + 0x35);
  return;
}




void FUN_1001da0ec(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_2 + 8);
  *puVar2 = 0;
  puVar1 = &DAT_101d235f0;
  if (DAT_101d235f0 != 0) {
    puVar1 = DAT_101d235f8;
  }
  *puVar1 = puVar2;
  DAT_101d235f8 = puVar2;
  DAT_101d23600 = DAT_101d23600 + 1;
  return;
}




void FUN_1001da11c(long *param_1,long param_2)

{
  long local_38;
  
  FUN_100534ad8(param_1 + 0x35,param_2,1);
  *(long **)(param_2 + 0x568) = param_1;
  local_38 = param_2;
  FUN_1001da18c(param_1 + 0x17a,&local_38);
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_1001d9ac0(param_1,0);
  return;
}




void FUN_1001da18c(uint *param_1,undefined8 *param_2)

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
    FUN_1001da4b8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined8 FUN_1001da20c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0xbd0) != 0) {
    uVar3 = 0;
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0xbd8) + uVar3 * 8);
      uVar1 = FUN_1004d2524(param_2);
      iVar2 = FUN_100015208(param_2,uVar1,0x1234);
      if ((uint)(*(int *)(lVar4 + 0x84) << 1 ^ iVar2 << 0x10) >> 0x10 == 0) {
        return *(undefined8 *)(*(long *)(param_1 + 0xbd8) + uVar3 * 8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xbd0));
  }
  return 0;
}




void FUN_1001da294(long param_1,undefined4 param_2)

{
  undefined4 local_14;
  
  local_14 = param_2;
  FUN_100652dd4(param_1 + 0xb8,&local_14,2);
  return;
}




void FUN_1001da2c0(long param_1,undefined4 param_2)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0xbd0) != 0) {
    uVar1 = 0;
    do {
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0xbd8) + uVar1 * 8) + 0x593) = param_2;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xbd0));
  }
  return;
}




void FUN_1001da2f0(void)

{
  return;
}




void FUN_1001da2f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101468988;
  param_1[0x18] = &PTR_FUN_1014a7108;
  param_1[0x2f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x32);
  FUN_10064e2bc(param_1 + 0x18);
  *param_1 = &PTR_FUN_101468838;
  param_1[0x17] = 0;
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001da35c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101468988;
  param_1[0x18] = &PTR_FUN_1014a7108;
  param_1[0x2f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x32);
  FUN_10064e2bc(param_1 + 0x18);
  *param_1 = &PTR_FUN_101468838;
  param_1[0x17] = 0;
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001da3c8(uint *param_1,uint param_2)

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




void * FUN_1001da444(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x1b0);
  lVar2 = FUN_1001d8afc();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_1001da4b8(uint *param_1,uint param_2)

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




void FUN_1001da534(void)

{
  DAT_101e433f8 = 0xff;
  DAT_101e433fa = 0xffff;
  DAT_101e433fc = 0xffff;
  DAT_101e43400 = 0x4326000041900000;
  DAT_101e43408 = 0x4326000041c00000;
  DAT_101e43410 = 0xffbc9c44;
  DAT_101e43414 = 0xff1166f2;
  DAT_101e43418 = 0xffe0e0e0;
  DAT_101e4341c = 0xffa0a0a0;
  DAT_101e43420 = 0xff8c8c8c;
  DAT_101e43424 = 0xff322213;
  DAT_101e43428 = 0xff091911;
  DAT_101e4342c = 0xff170c19;
  DAT_101e43430 = 0xff241a14;
  DAT_101e43434 = 0xff14171c;
  DAT_101e43438 = 0xff221911;
  DAT_101e4343c = 0xff1a1416;
  DAT_101e43440 = 0xff121414;
  DAT_101e43444 = 0xff1a1809;
  DAT_101e43448 = 0xff141414;
  DAT_101e4344c = 0xff141414;
  DAT_101e43450 = 0xff2929c0;
  DAT_101e43454 = 0xff283082;
  DAT_101e43458 = 0xff5262cc;
  DAT_101e4345c = 0xff283082;
  DAT_101e43460 = 0xff5262cc;
  DAT_101e43464 = 0xff745c42;
  DAT_101e43468 = 0xff184155;
  DAT_101e4346c = 0xff92665e;
  DAT_101e43470 = 0xffbc9c44;
  DAT_101e43474 = 0xffbbae56;
  DAT_101e43478 = 0xff8b7b01;
  DAT_101e4347c = 0xff90b3ef;
  DAT_101e43480 = 0xff728ebe;
  DAT_101e43484 = 0xff19459d;
  DAT_101e43488 = 0xff9d877b;
  DAT_101e4348c = 0xffcbb1a3;
  DAT_101e43490 = 0xff3f6fb5;
  DAT_101e43494 = 0xffc5c5c5;
  DAT_101e43498 = 0xff4fc1f1;
  DAT_101e4349c = 0xff606060;
  DAT_101e434a0 = 0xffc5ff7b;
  DAT_101e434a4 = 0xff5271eb;
  DAT_101e434a8 = 0xfffae076;
  DAT_101e434ac = 0xff3ac8f6;
  DAT_101e434b0 = 0xffaaaaaa;
  DAT_101e434b4 = 0xffe19400;
  DAT_101e434b8 = 0xffe19400;
  DAT_101e434bc = 0xffe550b2;
  DAT_101e434c0 = 0xfff22ae8;
  DAT_101e434c4 = 0xff005ae1;
  DAT_101e434c8 = 0xff1addfa;
  DAT_101e434cc = 0xff2424b3;
  DAT_101e434d0 = 0xff2424b3;
  DAT_101e434d4 = 0xff646464;
  DAT_101e434d8 = 0xff92665e;
  DAT_101e434dc = 0xff646037;
  DAT_101e434e0 = 0xffffffff;
  DAT_101e434e4 = 0xff1111a1;
  DAT_101e434e8 = 0xff321ee1;
  DAT_101e434ec = 0xffc8c8c8;
  DAT_101e434f0 = 0xff321ee1;
  DAT_101e434f4 = 0xff7fe801;
  DAT_101e434f8 = 0xffffffff;
  DAT_101e434fc = 0xff6259b3;
  DAT_101e43500 = 0xff506e73;
  DAT_101e43504 = 0xff9dbf86;
  DAT_101e43508 = 0xffa35244;
  DAT_101e4350c = 0xffca828e;
  DAT_101e43510 = 0xffa6a6a6;
  DAT_101e43514 = 0xffa6a6a6;
  DAT_101e43518 = 0xffffffff;
  DAT_101e4351c = 0xff88ea2f;
  DAT_101e43520 = 0xff8c8c8c;
  DAT_101e43524 = 0xffffb400;
  DAT_101e43528 = 0xffff00ff;
  DAT_101e4352c = 0xff00aded;
  DAT_101e43530 = 0xff33d3ff;
  DAT_101e43534 = 0xff7fe801;
  DAT_101e43538 = 0xff282828;
  DAT_101e4353c = 0xfff0f0f0;
  DAT_101e43540 = 0xffa4781e;
  DAT_101e43544 = 0xffa6654b;
  DAT_101e43548 = 0xff93435b;
  DAT_101e4354c = 0xff387f9c;
  DAT_101e43550 = 0xffa3781e;
  DAT_101e43554 = 0xffffd18a;
  DAT_101e43558 = 0xffff61f7;
  DAT_101e4355c = 0xff5de1f2;
  DAT_101e43560 = 0xff80eaff;
  DAT_101e43564 = 0xff32e00e;
  DAT_101e43568 = 0xff5a3c10;
  DAT_101e4356c = 0xff330b03;
  DAT_101e43570 = 0xff33031d;
  DAT_101e43574 = 0xff032433;
  DAT_101e43578 = 0xff9e8e8d;
  DAT_101d235f0 = 0;
  DAT_101d235f8 = 0;
  DAT_101d23600 = 0;
  return;
}




void FUN_1001dac1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *local_78 [2];
  char local_61;
  void *local_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0;
  uStack_58 = 0;
  local_60 = (void *)0x0;
  local_48 = 0;
  lStack_50 = 0;
  FUN_10001549c(local_78);
  std::string::operator=((string *)&local_60,(string *)local_78);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  local_48 = param_3;
  local_40 = param_4;
  FUN_1001daca0(param_1 + 8,&local_60);
  if (lStack_50 < 0) {
    operator_delete(local_60);
  }
  return;
}




void FUN_1001daca0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
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
    FUN_1001daeec(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar10 = *(long *)(param_1 + 2);
  if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
    uVar6 = param_2[1];
    if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_1001daee0();
    }
    puVar7 = (undefined8 *)*param_2;
  }
  else {
    uVar6 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar7 = param_2;
  }
  lVar11 = (ulong)(uVar4 + 1) - 1;
  puVar8 = (undefined8 *)(lVar10 + lVar11 * 0x28);
  if (uVar6 < 0x17) {
    *(char *)((long)puVar8 + 0x17) = (char)uVar6;
    puVar3 = puVar8;
    if (uVar6 == 0) goto LAB_1001dad90;
  }
  else {
    uVar9 = uVar6 + 0x10 & 0xfffffffffffffff0;
    puVar3 = operator_new(uVar9);
    *puVar8 = puVar3;
    lVar5 = lVar10 + lVar11 * 0x28;
    *(ulong *)(lVar5 + 8) = uVar6;
    *(ulong *)(lVar5 + 0x10) = uVar9 | 0x8000000000000000;
  }
  _memcpy(puVar3,puVar7,uVar6);
  puVar8 = puVar3;
LAB_1001dad90:
  *(undefined1 *)((long)puVar8 + uVar6) = 0;
  lVar10 = lVar10 + lVar11 * 0x28;
  uVar12 = param_2[3];
  *(undefined8 *)(lVar10 + 0x20) = param_2[4];
  *(undefined8 *)(lVar10 + 0x18) = uVar12;
  return;
}




undefined8 FUN_1001dadc0(undefined8 *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(int *)(param_1 + 1) != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      pcVar2 = (char *)(*(long *)(param_2 + 2) + (ulong)(*param_2 - 1) * 0x18);
      if (pcVar2[0x17] < '\0') {
        pcVar2 = *(char **)pcVar2;
      }
      pcVar4 = (char *)(param_1[2] + lVar5);
      if (pcVar4[0x17] < '\0') {
        pcVar4 = *(char **)(param_1[2] + lVar5);
      }
      iVar1 = _strcasecmp(pcVar2,pcVar4);
      if (iVar1 == 0) {
        FUN_1001dae94(param_2);
                    /* WARNING: Could not recover jumptable at 0x0001001dae90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(param_1[2] + lVar5 + 0x20))
                          (*(undefined8 *)(param_1[2] + lVar5 + 0x18),param_2);
        return uVar3;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x28;
    } while (uVar6 < *(uint *)(param_1 + 1));
  }
  (**(code **)*param_1)(param_1,param_2);
  return 0;
}




void FUN_1001daee0(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_1001daeec(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 * 0x28);
    puVar5 = *(undefined8 **)(param_1 + 2);
    uVar2 = *param_1;
    if (uVar2 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar9 = 0;
      do {
        puVar7 = (undefined8 *)((long)puVar5 + lVar9);
        if ((char)*(byte *)((long)puVar7 + 0x17) < '\0') {
          uVar6 = puVar7[1];
          if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_1001daee0();
          }
          puVar7 = (undefined8 *)*puVar7;
        }
        else {
          uVar6 = (ulong)*(byte *)((long)puVar7 + 0x17);
        }
        if (uVar6 < 0x17) {
          pvVar4 = (void *)((long)pvVar3 + lVar9);
          *(char *)((long)pvVar4 + 0x17) = (char)uVar6;
          if (uVar6 != 0) goto LAB_1001dafa4;
        }
        else {
          uVar8 = uVar6 + 0x10 & 0xfffffffffffffff0;
          pvVar4 = operator_new(uVar8);
          puVar1 = (undefined8 *)((long)pvVar3 + lVar9);
          puVar1[1] = uVar6;
          puVar1[2] = uVar8 | 0x8000000000000000;
          *puVar1 = pvVar4;
LAB_1001dafa4:
          _memcpy(pvVar4,puVar7,uVar6);
        }
        *(undefined1 *)((long)pvVar4 + uVar6) = 0;
        uVar10 = *(undefined8 *)((long)puVar5 + lVar9 + 0x18);
        *(undefined8 *)((long)pvVar3 + lVar9 + 0x20) = *(undefined8 *)((long)puVar5 + lVar9 + 0x20);
        *(undefined8 *)((long)pvVar3 + lVar9 + 0x18) = uVar10;
        lVar9 = lVar9 + 0x28;
      } while ((ulong)uVar2 * 0x28 - lVar9 != 0);
      puVar5 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar9 = (ulong)*param_1 * 0x28;
        do {
          if (*(char *)((long)puVar5 + 0x17) < '\0') {
            operator_delete((void *)*puVar5);
          }
          puVar5 = puVar5 + 5;
          lVar9 = lVar9 + -0x28;
        } while (lVar9 != 0);
        puVar5 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      operator_delete__(puVar5);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




void FUN_1001db048(undefined8 param_1)

{
  undefined8 local_20;
  code *pcStack_18;
  
  local_20 = 0;
  pcStack_18 = thunk_FUN_1001db9e8;
  DAT_101d23608 = param_1;
  FUN_100643618(0xbf800000,&local_20,0,1);
  return;
}




void FUN_1001db088(void)

{
  undefined8 local_20;
  code *pcStack_18;
  
  DAT_101d23608 = 0;
  local_20 = 0;
  pcStack_18 = thunk_FUN_1001db9e8;
  FUN_100643a8c(&local_20);
  return;
}




ulong FUN_1001db2bc(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_1004d2638(param_1,"vainglory://",0xc);
  if ((int)uVar2 != 0) {
    iVar1 = FUN_1004d2638(param_1,"video://",8);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}




void FUN_1001db308(undefined8 param_1,undefined1 param_2)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,param_1);
  std::string::operator=((string *)&DAT_101d23628,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  DAT_101d23641 = param_2;
  return;
}




void FUN_1001db360(string *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  std::string::operator=((string *)&DAT_101d23610,param_1);
  lVar1 = FUN_10015d3ec();
  if (*(int *)(lVar1 + 0x55cc) == 2) {
    uVar2 = FUN_1004e0150("MENU_DIALOG_OPEN_URL_OUT_OF_APP_TITLE",0);
    uVar3 = FUN_1004e0150("MENU_DIALOG_OPEN_URL_OUT_OF_APP_MSG",0);
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_OPEN",0);
    uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    FUN_1001e3120(uVar2,uVar3,uVar4,uVar5,0,FUN_1001db92c,FUN_1001db9b0);
    return;
  }
  uVar2 = FUN_1004e0150("MENU_NEWS_TILE_LEAVE_APP_BUTTON",0);
  thunk_FUN_1004e439c(auStack_40,uVar2);
  uVar2 = FUN_1004e0150("MENU_EXTERNAL_LINK_CONFIRMATION",0);
  thunk_FUN_1004e439c(auStack_50,uVar2);
  FUN_1004e3120(auStack_60,"[URL]");
  FUN_1004e3170(auStack_70,&DAT_101d23610);
  FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  uVar2 = FUN_1004e0150("GENERIC_DIALOG_YES",0);
  uVar3 = FUN_1004e0150("GENERIC_DIALOG_NO",0);
  FUN_1001e3120(auStack_40,auStack_50,uVar2,uVar3,0,FUN_1001db92c,FUN_1001db9b0);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




bool FUN_1001db518(void)

{
  ulong uVar1;
  
  uVar1 = DAT_101d23630;
  if (-1 < (char)DAT_101d23638._7_1_) {
    uVar1 = (ulong)DAT_101d23638._7_1_;
  }
  return uVar1 != 0;
}




void FUN_1001db540(void)

{
  if (DAT_101d23640 != '\0') {
    return;
  }
  DAT_101d23640 = 1;
  return;
}




void FUN_1001db55c(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_100126bf4();
  if ((iVar1 != 0) && (param_2 != 0)) {
    FUN_1002254bc(param_1,&DAT_101873a48);
    return;
  }
  iVar1 = FUN_10052b408();
  if (iVar1 != 0) {
    FUN_10052b410(param_1);
    return;
  }
  return;
}




void FUN_1001db5b8(long param_1)

{
  undefined8 uVar1;
  void *local_28 [2];
  char local_11;
  
  FUN_10001549c(local_28,param_1 + 8);
  uVar1 = FUN_10002f320();
  FUN_1000307d8(uVar1,local_28,1,1,2);
  if (local_11 < '\0') {
    operator_delete(local_28[0]);
  }
  return;
}




void FUN_1001db604(long param_1)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  void *local_a0;
  undefined8 uStack_98;
  long local_90;
  void *local_88 [2];
  char local_71;
  undefined8 local_70;
  long lStack_68;
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  
  local_50 = 0;
  lStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = (void *)0x0;
  FUN_10001549c(local_88,param_1);
  std::string::operator=((string *)&local_60,(string *)local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  pcVar6 = (char *)(param_1 + 0xc);
  if (*pcVar6 == '\0') {
    iVar8 = -1;
    iVar7 = 1;
  }
  else {
    iVar7 = 1;
    pcVar3 = (char *)(param_1 + 0xd);
    cVar2 = *pcVar6;
    do {
      cVar5 = cVar2;
      if (cVar5 == '/') {
        iVar7 = iVar7 + 1;
      }
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    iVar8 = -(uint)(cVar5 == '/');
  }
  uVar1 = iVar8 + iVar7;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  FUN_1001db7cc(&local_70,(ulong)uVar1,&local_a0);
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  lVar4 = DAT_101d23608;
  if ((*pcVar6 != '\0') && (0 < (int)uVar1)) {
    lVar9 = (ulong)uVar1 * 0x18;
    iVar8 = iVar8 + iVar7;
    do {
      iVar8 = iVar8 + -1;
      lVar9 = lVar9 + -0x18;
      pcVar3 = _strchr(pcVar6,0x2f);
      if (pcVar3 == (char *)0x0) {
        FUN_10001549c(local_88,pcVar6);
        std::string::operator=((string *)(lStack_68 + lVar9),(string *)local_88);
        lVar4 = DAT_101d23608;
        if (local_71 < '\0') {
          operator_delete(local_88[0]);
          lVar4 = DAT_101d23608;
        }
        break;
      }
      FUN_1001dbbb4(local_88,pcVar6,(long)pcVar3 - (long)pcVar6);
      std::string::operator=((string *)(lStack_68 + lVar9),(string *)local_88);
      if (local_71 < '\0') {
        operator_delete(local_88[0]);
      }
      pcVar6 = pcVar3 + 1;
      lVar4 = DAT_101d23608;
    } while ((*pcVar6 != '\0' && iVar8 != 0) && (*pcVar6 == '\0' || -1 < iVar8));
  }
  while ((lVar4 != 0 && ((int)local_70 != 0))) {
    lVar4 = FUN_1001dadc0(lVar4,&local_70);
  }
  if (local_50 < 0) {
    operator_delete(local_60);
  }
  FUN_10001629c(&local_70,1);
  return;
}




void FUN_1001db7cc(uint *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  
  uVar4 = (uint)param_2;
  if (uVar4 == 0) {
    FUN_10001629c(param_1);
    return;
  }
  if (param_1[1] < uVar4) {
    FUN_100016390(param_1,param_2);
  }
  uVar5 = *param_1;
  if (uVar5 < uVar4) {
    lVar9 = (ulong)uVar5 * 0x18;
    iVar10 = uVar4 - uVar5;
    do {
      lVar11 = *(long *)(param_1 + 2);
      if ((char)*(byte *)((long)param_3 + 0x17) < '\0') {
        uVar7 = param_3[1];
        if (0xffffffffffffffef < uVar7) {
          FUN_1001dbba8();
          uVar7 = DAT_101d23618;
          if (-1 < (char)DAT_101d23620._7_1_) {
            uVar7 = (ulong)DAT_101d23620._7_1_;
          }
          if (uVar7 != 0) {
            uVar3 = FUN_10015d3ec();
            FUN_100165784(uVar3,0);
            puVar6 = (undefined8 *)CONCAT71(DAT_101d23610._1_7_,(undefined1)DAT_101d23610);
            if (-1 < (char)DAT_101d23620._7_1_) {
              puVar6 = &DAT_101d23610;
            }
            FUN_1001db308(puVar6,0);
            if ((char)DAT_101d23620._7_1_ < '\0') {
              *(undefined1 *)CONCAT71(DAT_101d23610._1_7_,(undefined1)DAT_101d23610) = 0;
              DAT_101d23618 = 0;
            }
            else {
              DAT_101d23610._0_1_ = 0;
              DAT_101d23620._7_1_ = 0;
            }
          }
          return;
        }
        puVar6 = (undefined8 *)*param_3;
      }
      else {
        uVar7 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar6 = param_3;
      }
      if (uVar7 < 0x17) {
        pvVar2 = (void *)(lVar11 + lVar9);
        *(char *)((long)pvVar2 + 0x17) = (char)uVar7;
        if (uVar7 != 0) goto LAB_1001db88c;
      }
      else {
        uVar8 = uVar7 + 0x10 & 0xfffffffffffffff0;
        pvVar2 = operator_new(uVar8);
        puVar1 = (undefined8 *)(lVar11 + lVar9);
        puVar1[1] = uVar7;
        puVar1[2] = uVar8 | 0x8000000000000000;
        *puVar1 = pvVar2;
LAB_1001db88c:
        _memcpy(pvVar2,puVar6,uVar7);
      }
      *(undefined1 *)((long)pvVar2 + uVar7) = 0;
      lVar9 = lVar9 + 0x18;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    uVar5 = *param_1;
  }
  if (uVar4 < uVar5) {
    puVar6 = (undefined8 *)(*(long *)(param_1 + 2) + (param_2 & 0xffffffff) * 0x18);
    lVar9 = (ulong)uVar5 * 0x18 + (param_2 & 0xffffffff) * -0x18;
    do {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        operator_delete((void *)*puVar6);
      }
      puVar6 = puVar6 + 3;
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != 0);
  }
  *param_1 = uVar4;
  return;
}




void FUN_1001db92c(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar1 = DAT_101d23618;
  if (-1 < (char)DAT_101d23620._7_1_) {
    uVar1 = (ulong)DAT_101d23620._7_1_;
  }
  if (uVar1 != 0) {
    uVar3 = FUN_10015d3ec();
    FUN_100165784(uVar3,0);
    puVar2 = (undefined8 *)CONCAT71(DAT_101d23610._1_7_,(undefined1)DAT_101d23610);
    if (-1 < (char)DAT_101d23620._7_1_) {
      puVar2 = &DAT_101d23610;
    }
    FUN_1001db308(puVar2,0);
    if ((char)DAT_101d23620._7_1_ < '\0') {
      *(undefined1 *)CONCAT71(DAT_101d23610._1_7_,(undefined1)DAT_101d23610) = 0;
      DAT_101d23618 = 0;
    }
    else {
      DAT_101d23610._0_1_ = 0;
      DAT_101d23620._7_1_ = 0;
    }
  }
  return;
}




void FUN_1001db9b0(void)

{
  if (-1 < DAT_101d23620._7_1_) {
    DAT_101d23610._0_1_ = 0;
    DAT_101d23620._7_1_ = 0;
    return;
  }
  *(undefined1 *)CONCAT71(DAT_101d23610._1_7_,(undefined1)DAT_101d23610) = 0;
  DAT_101d23618 = 0;
  return;
}




void FUN_1001db9e8(void)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (DAT_101d23638._7_1_ < '\0') {
    if (DAT_101d23630 == 0 || DAT_101d23640 == '\0') {
      return;
    }
    puVar3 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
  }
  else {
    if (DAT_101d23638._7_1_ == '\0' || DAT_101d23640 == '\0') {
      return;
    }
    puVar3 = &DAT_101d23628;
  }
  iVar2 = FUN_1004d2638(puVar3,"http://",7);
  if (iVar2 != 0) {
    puVar3 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
    if (-1 < DAT_101d23638._7_1_) {
      puVar3 = &DAT_101d23628;
    }
    iVar2 = FUN_1004d2638(puVar3,"https://",8);
    if (iVar2 != 0) {
      puVar3 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
      if (-1 < DAT_101d23638._7_1_) {
        puVar3 = &DAT_101d23628;
      }
      iVar2 = FUN_1004d2638(puVar3,"twitch://",9);
      cVar1 = DAT_101d23638._7_1_;
      if (iVar2 == 0) {
        puVar3 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
        iVar2 = FUN_10052b408();
        if (iVar2 != 0) {
          if (-1 < cVar1) {
            puVar3 = &DAT_101d23628;
          }
          FUN_10052b410(puVar3);
        }
      }
      else {
        puVar3 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
        if (-1 < DAT_101d23638._7_1_) {
          puVar3 = &DAT_101d23628;
        }
        iVar2 = FUN_1004d2638(puVar3,"video://",8);
        puVar3 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
        if (-1 < DAT_101d23638._7_1_) {
          puVar3 = &DAT_101d23628;
        }
        if (iVar2 == 0) {
          FUN_1001db5b8(puVar3);
        }
        else {
          iVar2 = FUN_1004d2638(puVar3,"vainglory://",0xc);
          if (iVar2 == 0) {
            puVar3 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
            if (-1 < DAT_101d23638._7_1_) {
              puVar3 = &DAT_101d23628;
            }
            FUN_1001db604(puVar3);
          }
        }
      }
      goto LAB_1001dbb38;
    }
  }
  puVar3 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
  if (-1 < DAT_101d23638._7_1_) {
    puVar3 = &DAT_101d23628;
  }
  FUN_1001db55c(puVar3,DAT_101d23641);
LAB_1001dbb38:
  if (DAT_101d23638._7_1_ < '\0') {
    *(undefined1 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628) = 0;
    DAT_101d23630 = 0;
  }
  else {
    DAT_101d23628._0_1_ = 0;
    DAT_101d23638._7_1_ = '\0';
  }
  DAT_101d23641 = 0;
  return;
}




void FUN_1001dbba8(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




undefined8 * FUN_1001dbbb4(undefined8 *param_1,char *param_2,ulong param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  pcVar2 = "";
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
  }
  if (param_3 < 0xfffffffffffffff0) {
    if (param_3 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_3;
      puVar5 = param_1;
      if (param_3 == 0) goto LAB_1001dbc30;
    }
    else {
      uVar6 = param_3 + 0x10 & 0xfffffffffffffff0;
      puVar5 = operator_new(uVar6);
      param_1[1] = param_3;
      param_1[2] = uVar6 | 0x8000000000000000;
      *param_1 = puVar5;
    }
    _memcpy(puVar5,pcVar2,param_3);
LAB_1001dbc30:
    *(undefined1 *)((long)puVar5 + param_3) = 0;
    return param_1;
  }
  puVar5 = (undefined8 *)FUN_1001dbba8();
  if (DAT_101d23638._7_1_ < '\0') {
    if (DAT_101d23630 == 0 || DAT_101d23640 == '\0') {
      return puVar5;
    }
    puVar5 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
  }
  else {
    if (DAT_101d23638._7_1_ == '\0' || DAT_101d23640 == '\0') {
      return puVar5;
    }
    puVar5 = &DAT_101d23628;
  }
  iVar4 = FUN_1004d2638(puVar5,"http://",7);
  if (iVar4 != 0) {
    puVar5 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
    if (-1 < DAT_101d23638._7_1_) {
      puVar5 = &DAT_101d23628;
    }
    iVar4 = FUN_1004d2638(puVar5,"https://",8);
    if (iVar4 != 0) {
      puVar5 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
      if (-1 < DAT_101d23638._7_1_) {
        puVar5 = &DAT_101d23628;
      }
      iVar4 = FUN_1004d2638(puVar5,"twitch://",9);
      cVar3 = DAT_101d23638._7_1_;
      if (iVar4 == 0) {
        puVar1 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
        puVar5 = (undefined8 *)FUN_10052b408();
        if ((int)puVar5 != 0) {
          if (-1 < cVar3) {
            puVar1 = &DAT_101d23628;
          }
          puVar5 = (undefined8 *)FUN_10052b410(puVar1);
        }
      }
      else {
        puVar5 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
        if (-1 < DAT_101d23638._7_1_) {
          puVar5 = &DAT_101d23628;
        }
        iVar4 = FUN_1004d2638(puVar5,"video://",8);
        puVar5 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
        if (-1 < DAT_101d23638._7_1_) {
          puVar5 = &DAT_101d23628;
        }
        if (iVar4 == 0) {
          puVar5 = (undefined8 *)FUN_1001db5b8(puVar5);
        }
        else {
          puVar5 = (undefined8 *)FUN_1004d2638(puVar5,"vainglory://",0xc);
          if ((int)puVar5 == 0) {
            puVar5 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
            if (-1 < DAT_101d23638._7_1_) {
              puVar5 = &DAT_101d23628;
            }
            puVar5 = (undefined8 *)FUN_1001db604(puVar5);
          }
        }
      }
      goto LAB_1001dbb38;
    }
  }
  puVar5 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
  if (-1 < DAT_101d23638._7_1_) {
    puVar5 = &DAT_101d23628;
  }
  puVar5 = (undefined8 *)FUN_1001db55c(puVar5,DAT_101d23641);
LAB_1001dbb38:
  if (DAT_101d23638._7_1_ < '\0') {
    *(undefined1 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628) = 0;
    DAT_101d23630 = 0;
  }
  else {
    DAT_101d23628._0_1_ = 0;
    DAT_101d23638._7_1_ = '\0';
  }
  DAT_101d23641 = 0;
  return puVar5;
}




void thunk_FUN_1001db9e8(void)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (DAT_101d23638._7_1_ < '\0') {
    if (DAT_101d23630 == 0 || DAT_101d23640 == '\0') {
      return;
    }
    puVar3 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
  }
  else {
    if (DAT_101d23638._7_1_ == '\0' || DAT_101d23640 == '\0') {
      return;
    }
    puVar3 = &DAT_101d23628;
  }
  iVar2 = FUN_1004d2638(puVar3,"http://",7);
  if (iVar2 != 0) {
    puVar3 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
    if (-1 < DAT_101d23638._7_1_) {
      puVar3 = &DAT_101d23628;
    }
    iVar2 = FUN_1004d2638(puVar3,"https://",8);
    if (iVar2 != 0) {
      puVar3 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
      if (-1 < DAT_101d23638._7_1_) {
        puVar3 = &DAT_101d23628;
      }
      iVar2 = FUN_1004d2638(puVar3,"twitch://",9);
      cVar1 = DAT_101d23638._7_1_;
      if (iVar2 == 0) {
        puVar3 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
        iVar2 = FUN_10052b408();
        if (iVar2 != 0) {
          if (-1 < cVar1) {
            puVar3 = &DAT_101d23628;
          }
          FUN_10052b410(puVar3);
        }
      }
      else {
        puVar3 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
        if (-1 < DAT_101d23638._7_1_) {
          puVar3 = &DAT_101d23628;
        }
        iVar2 = FUN_1004d2638(puVar3,"video://",8);
        puVar3 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
        if (-1 < DAT_101d23638._7_1_) {
          puVar3 = &DAT_101d23628;
        }
        if (iVar2 == 0) {
          FUN_1001db5b8(puVar3);
        }
        else {
          iVar2 = FUN_1004d2638(puVar3,"vainglory://",0xc);
          if (iVar2 == 0) {
            puVar3 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
            if (-1 < DAT_101d23638._7_1_) {
              puVar3 = &DAT_101d23628;
            }
            FUN_1001db604(puVar3);
          }
        }
      }
      goto LAB_1001dbb38;
    }
  }
  puVar3 = (undefined8 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628);
  if (-1 < DAT_101d23638._7_1_) {
    puVar3 = &DAT_101d23628;
  }
  FUN_1001db55c(puVar3,DAT_101d23641);
LAB_1001dbb38:
  if (DAT_101d23638._7_1_ < '\0') {
    *(undefined1 *)CONCAT71(DAT_101d23628._1_7_,(undefined1)DAT_101d23628) = 0;
    DAT_101d23630 = 0;
  }
  else {
    DAT_101d23628._0_1_ = 0;
    DAT_101d23638._7_1_ = '\0';
  }
  DAT_101d23641 = 0;
  return;
}




void FUN_1001dbc54(void)

{
  DAT_101e4357c = 0xff;
  DAT_101e4357e = 0xffff;
  DAT_101e43580 = 0xffff;
  DAT_101e43582 = 0xffbc9c44;
  DAT_101e43586 = 0xff1166f2;
  DAT_101e4358a = 0xffe0e0e0;
  DAT_101e4358e = 0xffa0a0a0;
  DAT_101e43592 = 0xff8c8c8c;
  DAT_101e43596 = 0xff322213;
  DAT_101e4359a = 0xff091911;
  DAT_101e4359e = 0xff170c19;
  DAT_101e435a2 = 0xff241a14;
  DAT_101e435a6 = 0xff14171c;
  DAT_101e435aa = 0xff221911;
  DAT_101e435ae = 0xff1a1416;
  DAT_101e435b2 = 0xff121414;
  DAT_101e435b6 = 0xff1a1809;
  DAT_101e435ba = 0xff141414;
  DAT_101e435be = 0xff141414;
  DAT_101e435c2 = 0xff2929c0;
  DAT_101e435c6 = 0xff283082;
  DAT_101e435ca = 0xff5262cc;
  DAT_101e435ce = 0xff283082;
  DAT_101e435d2 = 0xff5262cc;
  DAT_101e435d6 = 0xff745c42;
  DAT_101e435da = 0xff184155;
  DAT_101e435de = 0xff92665e;
  DAT_101e435e2 = 0xffbc9c44;
  DAT_101e435e6 = 0xffbbae56;
  DAT_101e435ea = 0xff8b7b01;
  DAT_101e435ee = 0xff90b3ef;
  DAT_101e435f2 = 0xff728ebe;
  DAT_101e435f6 = 0xff19459d;
  DAT_101e435fa = 0xff9d877b;
  DAT_101e435fe = 0xffcbb1a3;
  DAT_101e43602 = 0xff3f6fb5;
  DAT_101e43606 = 0xffc5c5c5;
  DAT_101e4360a = 0xff4fc1f1;
  DAT_101e4360e = 0xff606060;
  DAT_101e43612 = 0xffc5ff7b;
  DAT_101e43616 = 0xff5271eb;
  DAT_101e4361a = 0xfffae076;
  DAT_101e4361e = 0xff3ac8f6;
  DAT_101e43622 = 0xffaaaaaa;
  DAT_101e43626 = 0xffe19400;
  DAT_101e4362a = 0xffe19400;
  DAT_101e4362e = 0xffe550b2;
  DAT_101e43632 = 0xfff22ae8;
  DAT_101e43636 = 0xff005ae1;
  DAT_101e4363a = 0xff1addfa;
  DAT_101e4363e = 0xff2424b3;
  DAT_101e43642 = 0xff2424b3;
  DAT_101e43646 = 0xff646464;
  DAT_101e4364a = 0xff92665e;
  DAT_101e4364e = 0xff646037;
  DAT_101e43654 = 0xffffffff;
  DAT_101e43658 = 0xff1111a1;
  DAT_101e4365c = 0xff321ee1;
  DAT_101e43660 = 0xffc8c8c8;
  DAT_101e43664 = 0xff321ee1;
  DAT_101e43668 = 0xff7fe801;
  DAT_101e4366c = 0xffffffff;
  DAT_101e43670 = 0xff6259b3;
  DAT_101e43674 = 0xff506e73;
  DAT_101e43678 = 0xff9dbf86;
  DAT_101e4367c = 0xffa35244;
  DAT_101e43680 = 0xffca828e;
  DAT_101e43684 = 0xffa6a6a6;
  DAT_101e43688 = 0xffa6a6a6;
  DAT_101e4368c = 0xffffffff;
  DAT_101e43690 = 0xff88ea2f;
  DAT_101e43694 = 0xff8c8c8c;
  DAT_101e43698 = 0xffffb400;
  DAT_101e4369c = 0xffff00ff;
  DAT_101e436a0 = 0xff00aded;
  DAT_101e436a4 = 0xff33d3ff;
  DAT_101e436a8 = 0xff7fe801;
  DAT_101e436ac = 0xff282828;
  DAT_101e436b0 = 0xfff0f0f0;
  DAT_101e436b4 = 0xffa4781e;
  DAT_101e436b8 = 0xffa6654b;
  DAT_101e436bc = 0xff93435b;
  DAT_101e436c0 = 0xff387f9c;
  DAT_101e436c4 = 0xffa3781e;
  DAT_101e436c8 = 0xffffd18a;
  DAT_101e436cc = 0xffff61f7;
  DAT_101e436d0 = 0xff5de1f2;
  DAT_101e436d4 = 0xff80eaff;
  DAT_101e436d8 = 0xff32e00e;
  DAT_101e436dc = 0xff5a3c10;
  DAT_101e436e0 = 0xff330b03;
  DAT_101e436e4 = 0xff33031d;
  DAT_101e436e8 = 0xff032433;
  DAT_101e436ec = 0xff9e8e8d;
  DAT_101d23610 = 0;
  DAT_101d23618 = 0;
  DAT_101d23620 = 0;
  ___cxa_atexit(FUN_1000e6204,&DAT_101d23610,0x100000000);
  DAT_101d23630 = 0;
  DAT_101d23638 = 0;
  DAT_101d23628 = 0;
  ___cxa_atexit(FUN_1000e6204,&DAT_101d23628,0x100000000);
  return;
}




void FUN_1001dc364(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101468d68;
  thunk_FUN_1001b0af4(param_1 + 0x5b);
  thunk_FUN_100651068(param_1 + 0x35);
  *param_1 = &PTR_FUN_1014692b8;
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001dc3dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101468eb0;
  thunk_FUN_10018d500(param_1 + 0x5b);
  thunk_FUN_100651068(param_1 + 0x35);
  *param_1 = &PTR_FUN_1014692b8;
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001dc454(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101468d68;
  thunk_FUN_1001b0af4(param_1 + 0x5b);
  thunk_FUN_100651068(param_1 + 0x35);
  *param_1 = &PTR_FUN_1014692b8;
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001dc4d0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101468eb0;
  thunk_FUN_10018d500(param_1 + 0x5b);
  thunk_FUN_100651068(param_1 + 0x35);
  *param_1 = &PTR_FUN_1014692b8;
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long FUN_1001dc54c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong local_d8;
  ulong local_d0;
  long local_b8;
  code *local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  undefined4 local_80;
  
  puVar3 = (undefined8 *)FUN_1001a6400();
  *puVar3 = &PTR_thunk_FUN_1001de800_101468ff8;
  thunk_FUN_1001defe4(puVar3 + 0x13c);
  thunk_FUN_1001ded5c(param_1 + 0x40f0);
  thunk_FUN_1001defe4(param_1 + 0x6cf8);
  thunk_FUN_1001defe4(param_1 + 0xa408);
  thunk_FUN_1001ded5c(param_1 + 0xdb18);
  lVar4 = param_1 + 0x10720;
  lVar7 = 0xb880;
  do {
    lVar4 = thunk_FUN_1001df260(lVar4);
    lVar4 = lVar4 + 0x3d80;
    lVar7 = lVar7 + -0x3d80;
  } while (lVar7 != 0);
  lVar7 = param_1 + 0x1bfa0;
  FUN_10064e264(lVar7);
  lVar1 = param_1 + 0x1c058;
  thunk_FUN_100181304(lVar1,0);
  *(undefined8 *)(param_1 + 0x1d6e8) = 0;
  *(undefined8 *)(param_1 + 0x1d6e0) = 0;
  *(undefined8 *)(param_1 + 0x1d6d8) = 0;
  *(undefined8 *)(param_1 + 0x1d6d0) = 0;
  *(undefined8 *)(param_1 + 0x1d6c8) = 0;
  *(undefined8 *)(param_1 + 0x1d6c0) = 0;
  *(undefined8 *)(param_1 + 0x1d6b8) = 0;
  *(undefined8 *)(param_1 + 0x1d6b0) = 0;
  *(undefined8 *)(param_1 + 0x1d6a8) = 0;
  *(undefined8 *)(param_1 + 0x1d6a0) = 0;
  *(undefined8 *)(param_1 + 0x1d698) = 0;
  *(undefined8 *)(param_1 + 0x1d690) = 0;
  *(undefined8 *)(param_1 + 0x1d688) = 0;
  *(undefined8 *)(param_1 + 0x1d680) = 0;
  *(undefined8 *)(param_1 + 0x1d678) = 0;
  *(undefined8 *)(param_1 + 0x1d670) = 0;
  *(undefined8 *)(param_1 + 0x1d668) = 0;
  *(undefined8 *)(param_1 + 0x1d660) = 0;
  *(undefined8 *)(param_1 + 0x1d658) = 0;
  *(undefined8 *)(param_1 + 0x1d650) = 0;
  *(undefined8 *)(param_1 + 0x1d648) = 0;
  *(undefined8 *)(param_1 + 0x1d640) = 0;
  *(undefined8 *)(param_1 + 0x1d638) = 0;
  *(undefined8 *)(param_1 + 0x1d630) = 0;
  *(undefined8 *)(param_1 + 0x1d628) = 0;
  *(undefined8 *)(param_1 + 0x1d620) = 0;
  *(undefined8 *)(param_1 + 0x1d618) = 0;
  FUN_10015a14c(param_1 + 0x1d610);
  *(undefined8 *)(param_1 + 0x1d7d0) = 0;
  *(undefined8 *)(param_1 + 0x1d7c8) = 0;
  *(undefined8 *)(param_1 + 0x1d7c0) = 0;
  *(undefined8 *)(param_1 + 0x1d7b8) = 0;
  *(undefined8 *)(param_1 + 0x1d7b0) = 0;
  *(undefined8 *)(param_1 + 0x1d7a8) = 0;
  *(undefined8 *)(param_1 + 0x1d7a0) = 0;
  *(undefined8 *)(param_1 + 0x1d798) = 0;
  *(undefined8 *)(param_1 + 0x1d790) = 0;
  *(undefined8 *)(param_1 + 0x1d788) = 0;
  *(undefined8 *)(param_1 + 0x1d780) = 0;
  *(undefined8 *)(param_1 + 0x1d778) = 0;
  *(undefined8 *)(param_1 + 0x1d770) = 0;
  *(undefined8 *)(param_1 + 0x1d768) = 0;
  *(undefined8 *)(param_1 + 0x1d760) = 0;
  *(undefined8 *)(param_1 + 0x1d758) = 0;
  *(undefined8 *)(param_1 + 0x1d750) = 0;
  *(undefined8 *)(param_1 + 0x1d748) = 0;
  *(undefined8 *)(param_1 + 0x1d740) = 0;
  *(undefined8 *)(param_1 + 0x1d738) = 0;
  *(undefined8 *)(param_1 + 0x1d730) = 0;
  *(undefined8 *)(param_1 + 0x1d728) = 0;
  *(undefined8 *)(param_1 + 0x1d720) = 0;
  *(undefined8 *)(param_1 + 0x1d718) = 0;
  *(undefined8 *)(param_1 + 0x1d710) = 0;
  *(undefined8 *)(param_1 + 0x1d708) = 0;
  *(undefined8 *)(param_1 + 0x1d700) = 0;
  FUN_10015a14c(param_1 + 0x1d6f8);
  *(undefined1 *)(param_1 + 0x1d7e0) = 0;
  lVar4 = param_1 + 0x908;
  FUN_100642bd8(lVar4,puVar3 + 0x13c,1);
  FUN_100642bd8(lVar4,param_1 + 0x40f0,1);
  FUN_100642bd8(lVar4,param_1 + 0x6cf8,1);
  FUN_100642bd8(lVar4,param_1 + 0xa408,1);
  FUN_100642bd8(lVar4,param_1 + 0xdb18,1);
  lVar10 = param_1 + 0x10720;
  lVar8 = 3;
  do {
    FUN_100642bd8(lVar4,lVar10,1);
    lVar10 = lVar10 + 0x3d80;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_100642bd8(lVar4,lVar7,1);
  FUN_100642bd8(lVar7,lVar1,1);
  uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_PRIMETIME_DROPDOWN_LABEL",0);
  FUN_1006513c0(param_1 + 0xb88,uVar5);
  FUN_1001dcdb4(0x44480000,param_1);
  local_80 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_a8 = FUN_1001dce54;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xcc0,&local_a8);
  *(uint *)(param_1 + 0x422c) = *(uint *)(param_1 + 0x422c) | 4;
  uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_TYPE_DROPDOWN_LABEL",0);
  FUN_1006513c0(param_1 + 0x4298,uVar5);
  FUN_1001dce94(0x44480000,param_1);
  local_80 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_a8 = FUN_1001dd038;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x43d0,&local_a8);
  local_80 = FUN_100644a94("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
  local_a8 = thunk_FUN_1001de2b8;
  local_98 = 0;
  local_90 = 0;
  lStack_a0 = param_1;
  local_88 = param_1 + 0x43c8;
  FUN_10001554c(param_1 + 0x43d0,&local_a8);
  uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_LANGUAGE_DROPDOWN_LABEL",0);
  FUN_1006513c0(param_1 + 0x6ea0,uVar5);
  FUN_1001dd084(0x44480000,param_1);
  local_80 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_a8 = FUN_1001dd150;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x6fd8,&local_a8);
  *(uint *)(param_1 + 0xa544) = *(uint *)(param_1 + 0xa544) | 4;
  uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_SKILL_TIER_DROPDOWN_LABEL",0);
  FUN_1006513c0(param_1 + 0xa5b0,uVar5);
  FUN_1001dd198(0x44480000,param_1);
  local_80 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_a8 = FUN_1001dd294;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xa6e8,&local_a8);
  uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_ENROLLMENT_DROPDOWN_LABEL",0);
  FUN_1006513c0(param_1 + 0xdcc0,uVar5);
  FUN_1001dd2c8(0x44480000,param_1);
  local_80 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_a8 = thunk_FUN_1001de314;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xddf8,&local_a8);
  local_80 = FUN_100644a94("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
  local_a8 = thunk_FUN_1001de39c;
  local_98 = 0;
  local_90 = 0;
  lStack_a0 = param_1;
  local_88 = param_1 + 0xddf0;
  FUN_10001554c(param_1 + 0xddf8,&local_a8);
  uVar2 = DAT_101dbd4ac;
  uVar6 = 0;
  uVar11 = 0;
  lVar4 = 0x10990;
  lVar7 = 0x10ac0;
  lVar8 = 0x1085c;
  lVar10 = 0x10ac8;
  local_b8 = 0x127b0;
  lVar9 = 0x127b8;
  do {
    *(uint *)(param_1 + lVar8) =
         (*(uint *)(param_1 + lVar8) & 0xfffffff8 |
         *(uint *)(param_1 + lVar8) & 3 | (uVar6 >> 2 & 1) << 2) ^ 4;
    uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_TILE_LABEL",0);
    FUN_1006513c0(param_1 + lVar4,uVar5);
    uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_DISPLAY_LABEL",0);
    FUN_100185730(param_1 + lVar7,uVar5);
    local_80 = uVar2;
    local_d0 = local_d0 & 0xffffffff00000000 | uVar11;
    local_a8 = FUN_1001dd3e4;
    local_98 = 0;
    local_90 = 0;
    lStack_a0 = param_1;
    local_88 = local_d0;
    FUN_10001554c(param_1 + lVar10,&local_a8);
    uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_DISPLAY_LABEL",0);
    FUN_1001afd98(param_1 + lVar7,uVar5,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
    uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_URL_LABEL",0);
    FUN_100185730(param_1 + local_b8,uVar5);
    local_80 = uVar2;
    local_d8 = local_d8 & 0xffffffff00000000 | uVar11;
    local_a8 = FUN_1001dd3ec;
    local_98 = 0;
    local_90 = 0;
    lStack_a0 = param_1;
    local_88 = local_d8;
    FUN_10001554c(param_1 + lVar9,&local_a8);
    uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_URL_LABEL",0);
    FUN_1001afd98(param_1 + local_b8,uVar5,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
    uVar11 = uVar11 + 1;
    uVar6 = uVar6 + 4;
    lVar4 = lVar4 + 0x3d80;
    lVar7 = lVar7 + 0x3d80;
    local_b8 = local_b8 + 0x3d80;
    lVar8 = lVar8 + 0x3d80;
    lVar10 = lVar10 + 0x3d80;
    lVar9 = lVar9 + 0x3d80;
  } while (uVar11 != 3);
  uVar5 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_APPLY_BUTTON_LABEL",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,lVar1,0,uVar5,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_80 = DAT_101d91884;
  local_a8 = thunk_FUN_1001de658;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x1c060,&local_a8);
  return param_1;
}




void FUN_1001dcdb4(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  iVar1 = 0;
  local_40 = 0;
  uStack_38 = 0;
  do {
    FUN_1000f28d0(&local_50,iVar1,1);
    FUN_10010b098(&local_40,&local_50);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x18);
  local_50 = 0;
  local_48 = (void *)0x0;
  FUN_1001b0c70(param_1,param_2 + 0xcb8,&local_40,&local_50,1);
  FUN_10001629c(&local_50,1);
  FUN_10010b1a8(&local_40,1);
  return;
}




void FUN_1001dce54(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1004d29d8(*(undefined4 *)(param_1 + 0x40e8),0);
  *(undefined4 *)(param_1 + 0x1d610) = uVar1;
  *(undefined1 *)(param_1 + 0x1d7e0) = 1;
  return;
}




void FUN_1001dce94(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  void *local_68 [2];
  char local_51;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar1 = FUN_1000f18d4(&DAT_101d91798,1);
  FUN_10010b098(&local_40,uVar1);
  uVar1 = FUN_1000f18d4(&DAT_101d917b0,1);
  FUN_10010b098(&local_40,uVar1);
  uVar1 = FUN_1000f18d4(&DAT_101d917c8,1);
  FUN_10010b098(&local_40,uVar1);
  uVar1 = FUN_1000f18d4(&DAT_101d917e0,1);
  FUN_10010b098(&local_40,uVar1);
  local_50 = 0;
  uStack_48 = 0;
  FUN_10001549c(local_68,"GUILD_TYPE_CASUAL");
  FUN_10001617c(&local_50,local_68);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  FUN_10001549c(local_68,"GUILD_TYPE_MIDCORE");
  FUN_10001617c(&local_50,local_68);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  FUN_10001549c(local_68,"GUILD_TYPE_COMPETITIVE");
  FUN_10001617c(&local_50,local_68);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  FUN_10001549c(local_68,"GUILD_TYPE_UNIVERSITY");
  FUN_10001617c(&local_50,local_68);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  FUN_10018d7d4(param_1,param_1,0,0x3f800000,0x3f800000,param_2 + 0x43c8,&local_40,&local_50,1,1,0);
  FUN_10001629c(&local_50,1);
  FUN_10010b1a8(&local_40,1);
  return;
}




void FUN_1001dd038(long param_1)

{
  string *psVar1;
  
  *(undefined1 *)(param_1 + 0x1d7e0) = 1;
  psVar1 = (string *)FUN_10018e8a8(param_1 + 0x43c8);
  std::string::operator=((string *)(param_1 + 0x1d618),psVar1);
  return;
}




void thunk_FUN_1001de2b8(long param_1)

{
  FUN_1006423ec(param_1 + 0x40f0,1);
  FUN_100642bd8(param_1 + 0x908,param_1 + 0x40f0,1);
  if (*(char *)(param_1 + 0x6cec) != '\0') {
    return;
  }
  FUN_1001de0d4(param_1);
  return;
}




void FUN_1001dd084(undefined8 param_1,long param_2)

{
  int iVar1;
  void *local_68;
  void *local_60;
  char local_51;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  iVar1 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  do {
    FUN_1000f10e4(&local_68,iVar1,1);
    FUN_10010b098(&local_40,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
    FUN_1000f13b4(&local_68,iVar1);
    FUN_10001617c(&local_50,&local_68);
    if (local_51 < '\0') {
      operator_delete(local_68);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  FUN_1001b0c70(param_1,param_2 + 0x6fd0,&local_40,&local_50,1);
  FUN_10001629c(&local_50,1);
  FUN_10010b1a8(&local_40,1);
  return;
}




void FUN_1001dd150(long param_1)

{
  string *psVar1;
  
  *(undefined1 *)(param_1 + 0x1d7e0) = 1;
  psVar1 = (string *)FUN_1001b10bc(param_1 + 0x6fd0);
  std::string::operator=((string *)(param_1 + 0x1d630),psVar1);
  return;
}




void FUN_1001dd198(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  uVar1 = FUN_1000f0a88(0xffffffff,0,0);
  FUN_10010b098(&local_50,uVar1);
  FUN_1004e313c(auStack_60);
  iVar2 = 0;
  do {
    FUN_1004e38ac(auStack_60,"%d ");
    uVar1 = FUN_1000f0a88(iVar2,1,0);
    FUN_1004e372c(auStack_60,uVar1);
    FUN_10010b098(&local_50,auStack_60);
    iVar2 = iVar2 + 3;
  } while (iVar2 != 0x1e);
  local_70 = 0;
  uStack_68 = 0;
  FUN_1001b0c70(param_1,param_2 + 0xa6e0,&local_50,&local_70,1);
  FUN_10001629c(&local_70,1);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  FUN_10010b1a8(&local_50,1);
  return;
}




void FUN_1001dd294(long param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x1d7e0) = 1;
  iVar1 = *(int *)(param_1 + 0xdb10) * 3 + -3;
  if (*(int *)(param_1 + 0xdb10) == 0) {
    iVar1 = -1;
  }
  *(int *)(param_1 + 0x1d614) = iVar1;
  return;
}




void FUN_1001dd2c8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  void *local_68 [2];
  char local_51;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar1 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_OPEN",0);
  FUN_10010b098(&local_40,uVar1);
  uVar1 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_INVITE_ONLY",0);
  FUN_10010b098(&local_40,uVar1);
  local_50 = 0;
  uStack_48 = 0;
  FUN_10001549c(local_68,"open");
  FUN_10001617c(&local_50,local_68);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  FUN_10001549c(local_68,"invite_only");
  FUN_10001617c(&local_50,local_68);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  FUN_10018d7d4(param_1,param_1,0,0x3f800000,0x3f800000,param_2 + 0xddf0,&local_40,&local_50,1,1,0);
  FUN_10001629c(&local_50,1);
  FUN_10010b1a8(&local_40,1);
  return;
}




void thunk_FUN_1001de314(long param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  
  *(undefined1 *)(param_1 + 0x1d7e0) = 1;
  uVar4 = FUN_10018e8a8(param_1 + 0xddf0);
  uVar1 = *(ulong *)(uVar4 + 8);
  if (-1 < (char)*(byte *)(uVar4 + 0x17)) {
    uVar1 = (ulong)*(byte *)(uVar4 + 0x17);
  }
  if (uVar1 == 0xb) {
    iVar3 = std::string::compare(uVar4,0,(char *)0xffffffffffffffff,0x1013e2f74);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = false;
  }
  *(bool *)(param_1 + 0x1d6f0) = bVar2;
  return;
}




void thunk_FUN_1001de39c(long param_1)

{
  FUN_1006423ec(param_1 + 0xdb18,1);
  FUN_100642bd8(param_1 + 0x908,param_1 + 0xdb18,1);
  if (*(char *)(param_1 + 0x10714) != '\0') {
    return;
  }
  FUN_1001de0d4(param_1);
  return;
}




void FUN_1001dd3e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1001de3fc(param_1,param_2,param_5);
  return;
}




void FUN_1001dd3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1001de4b4(param_1,param_2,param_5);
  return;
}




void thunk_FUN_1001de658(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  if (*(char *)(param_1 + 0x1d7e0) != '\0') {
    *(undefined1 *)(param_1 + 0x1d7e0) = 0;
    *(undefined8 *)(param_1 + 0x1d6f8) = *(undefined8 *)(param_1 + 0x1d610);
    std::string::operator=((string *)(param_1 + 0x1d700),(string *)(param_1 + 0x1d618));
    std::string::operator=((string *)(param_1 + 0x1d718),(string *)(param_1 + 0x1d630));
    std::string::operator=((string *)(param_1 + 0x1d730),(string *)(param_1 + 0x1d648));
    std::string::operator=((string *)(param_1 + 0x1d748),(string *)(param_1 + 0x1d660));
    std::string::operator=((string *)(param_1 + 0x1d760),(string *)(param_1 + 0x1d678));
    std::string::operator=((string *)(param_1 + 0x1d778),(string *)(param_1 + 0x1d690));
    std::string::operator=((string *)(param_1 + 0x1d790),(string *)(param_1 + 0x1d6a8));
    std::string::operator=((string *)(param_1 + 0x1d7a8),(string *)(param_1 + 0x1d6c0));
    std::string::operator=((string *)(param_1 + 0x1d7c0),(string *)(param_1 + 0x1d6d8));
    *(undefined1 *)(param_1 + 0x1d7d8) = *(undefined1 *)(param_1 + 0x1d6f0);
    uVar1 = FUN_100644a94("UI::GUILD_SETTINGS_CHANGED");
    FUN_100644aec(auStack_40,uVar1,0);
    FUN_100644c34(param_1,auStack_40,0);
    return;
  }
  FUN_100221380(param_1);
  return;
}




long thunk_FUN_1001dc54c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_b8;
  code *pcStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined4 uStack_80;
  
  puVar3 = (undefined8 *)FUN_1001a6400();
  *puVar3 = &PTR_thunk_FUN_1001de800_101468ff8;
  thunk_FUN_1001defe4(puVar3 + 0x13c);
  thunk_FUN_1001ded5c(param_1 + 0x40f0);
  thunk_FUN_1001defe4(param_1 + 0x6cf8);
  thunk_FUN_1001defe4(param_1 + 0xa408);
  thunk_FUN_1001ded5c(param_1 + 0xdb18);
  lVar4 = param_1 + 0x10720;
  lVar7 = 0xb880;
  do {
    lVar4 = thunk_FUN_1001df260(lVar4);
    lVar4 = lVar4 + 0x3d80;
    lVar7 = lVar7 + -0x3d80;
  } while (lVar7 != 0);
  lVar7 = param_1 + 0x1bfa0;
  FUN_10064e264(lVar7);
  lVar1 = param_1 + 0x1c058;
  thunk_FUN_100181304(lVar1,0);
  *(undefined8 *)(param_1 + 0x1d6e8) = 0;
  *(undefined8 *)(param_1 + 0x1d6e0) = 0;
  *(undefined8 *)(param_1 + 0x1d6d8) = 0;
  *(undefined8 *)(param_1 + 0x1d6d0) = 0;
  *(undefined8 *)(param_1 + 0x1d6c8) = 0;
  *(undefined8 *)(param_1 + 0x1d6c0) = 0;
  *(undefined8 *)(param_1 + 0x1d6b8) = 0;
  *(undefined8 *)(param_1 + 0x1d6b0) = 0;
  *(undefined8 *)(param_1 + 0x1d6a8) = 0;
  *(undefined8 *)(param_1 + 0x1d6a0) = 0;
  *(undefined8 *)(param_1 + 0x1d698) = 0;
  *(undefined8 *)(param_1 + 0x1d690) = 0;
  *(undefined8 *)(param_1 + 0x1d688) = 0;
  *(undefined8 *)(param_1 + 0x1d680) = 0;
  *(undefined8 *)(param_1 + 0x1d678) = 0;
  *(undefined8 *)(param_1 + 0x1d670) = 0;
  *(undefined8 *)(param_1 + 0x1d668) = 0;
  *(undefined8 *)(param_1 + 0x1d660) = 0;
  *(undefined8 *)(param_1 + 0x1d658) = 0;
  *(undefined8 *)(param_1 + 0x1d650) = 0;
  *(undefined8 *)(param_1 + 0x1d648) = 0;
  *(undefined8 *)(param_1 + 0x1d640) = 0;
  *(undefined8 *)(param_1 + 0x1d638) = 0;
  *(undefined8 *)(param_1 + 0x1d630) = 0;
  *(undefined8 *)(param_1 + 0x1d628) = 0;
  *(undefined8 *)(param_1 + 0x1d620) = 0;
  *(undefined8 *)(param_1 + 0x1d618) = 0;
  FUN_10015a14c(param_1 + 0x1d610);
  *(undefined8 *)(param_1 + 0x1d7d0) = 0;
  *(undefined8 *)(param_1 + 0x1d7c8) = 0;
  *(undefined8 *)(param_1 + 0x1d7c0) = 0;
  *(undefined8 *)(param_1 + 0x1d7b8) = 0;
  *(undefined8 *)(param_1 + 0x1d7b0) = 0;
  *(undefined8 *)(param_1 + 0x1d7a8) = 0;
  *(undefined8 *)(param_1 + 0x1d7a0) = 0;
  *(undefined8 *)(param_1 + 0x1d798) = 0;
  *(undefined8 *)(param_1 + 0x1d790) = 0;
  *(undefined8 *)(param_1 + 0x1d788) = 0;
  *(undefined8 *)(param_1 + 0x1d780) = 0;
  *(undefined8 *)(param_1 + 0x1d778) = 0;
  *(undefined8 *)(param_1 + 0x1d770) = 0;
  *(undefined8 *)(param_1 + 0x1d768) = 0;
  *(undefined8 *)(param_1 + 0x1d760) = 0;
  *(undefined8 *)(param_1 + 0x1d758) = 0;
  *(undefined8 *)(param_1 + 0x1d750) = 0;
  *(undefined8 *)(param_1 + 0x1d748) = 0;
  *(undefined8 *)(param_1 + 0x1d740) = 0;
  *(undefined8 *)(param_1 + 0x1d738) = 0;
  *(undefined8 *)(param_1 + 0x1d730) = 0;
  *(undefined8 *)(param_1 + 0x1d728) = 0;
  *(undefined8 *)(param_1 + 0x1d720) = 0;
  *(undefined8 *)(param_1 + 0x1d718) = 0;
  *(undefined8 *)(param_1 + 0x1d710) = 0;
  *(undefined8 *)(param_1 + 0x1d708) = 0;
  *(undefined8 *)(param_1 + 0x1d700) = 0;
  FUN_10015a14c(param_1 + 0x1d6f8);
  *(undefined1 *)(param_1 + 0x1d7e0) = 0;
  lVar4 = param_1 + 0x908;
  FUN_100642bd8(lVar4,puVar3 + 0x13c,1);
  FUN_100642bd8(lVar4,param_1 + 0x40f0,1);
  FUN_100642bd8(lVar4,param_1 + 0x6cf8,1);
  FUN_100642bd8(lVar4,param_1 + 0xa408,1);
  FUN_100642bd8(lVar4,param_1 + 0xdb18,1);
  lVar10 = param_1 + 0x10720;
  lVar8 = 3;
  do {
    FUN_100642bd8(lVar4,lVar10,1);
    lVar10 = lVar10 + 0x3d80;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_100642bd8(lVar4,lVar7,1);
  FUN_100642bd8(lVar7,lVar1,1);
  uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_PRIMETIME_DROPDOWN_LABEL",0);
  FUN_1006513c0(param_1 + 0xb88,uVar5);
  FUN_1001dcdb4(0x44480000,param_1);
  uStack_80 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_a8 = FUN_1001dce54;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xcc0,&pcStack_a8);
  *(uint *)(param_1 + 0x422c) = *(uint *)(param_1 + 0x422c) | 4;
  uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_TYPE_DROPDOWN_LABEL",0);
  FUN_1006513c0(param_1 + 0x4298,uVar5);
  FUN_1001dce94(0x44480000,param_1);
  uStack_80 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_a8 = FUN_1001dd038;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x43d0,&pcStack_a8);
  uStack_80 = FUN_100644a94("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
  pcStack_a8 = thunk_FUN_1001de2b8;
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_a0 = param_1;
  uStack_88 = param_1 + 0x43c8;
  FUN_10001554c(param_1 + 0x43d0,&pcStack_a8);
  uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_LANGUAGE_DROPDOWN_LABEL",0);
  FUN_1006513c0(param_1 + 0x6ea0,uVar5);
  FUN_1001dd084(0x44480000,param_1);
  uStack_80 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_a8 = FUN_1001dd150;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x6fd8,&pcStack_a8);
  *(uint *)(param_1 + 0xa544) = *(uint *)(param_1 + 0xa544) | 4;
  uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_SKILL_TIER_DROPDOWN_LABEL",0);
  FUN_1006513c0(param_1 + 0xa5b0,uVar5);
  FUN_1001dd198(0x44480000,param_1);
  uStack_80 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_a8 = FUN_1001dd294;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xa6e8,&pcStack_a8);
  uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_ENROLLMENT_DROPDOWN_LABEL",0);
  FUN_1006513c0(param_1 + 0xdcc0,uVar5);
  FUN_1001dd2c8(0x44480000,param_1);
  uStack_80 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_a8 = thunk_FUN_1001de314;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xddf8,&pcStack_a8);
  uStack_80 = FUN_100644a94("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
  pcStack_a8 = thunk_FUN_1001de39c;
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_a0 = param_1;
  uStack_88 = param_1 + 0xddf0;
  FUN_10001554c(param_1 + 0xddf8,&pcStack_a8);
  uVar2 = DAT_101dbd4ac;
  uVar6 = 0;
  uVar11 = 0;
  lVar4 = 0x10990;
  lVar7 = 0x10ac0;
  lVar8 = 0x1085c;
  lVar10 = 0x10ac8;
  lStack_b8 = 0x127b0;
  lVar9 = 0x127b8;
  do {
    *(uint *)(param_1 + lVar8) =
         (*(uint *)(param_1 + lVar8) & 0xfffffff8 |
         *(uint *)(param_1 + lVar8) & 3 | (uVar6 >> 2 & 1) << 2) ^ 4;
    uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_TILE_LABEL",0);
    FUN_1006513c0(param_1 + lVar4,uVar5);
    uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_DISPLAY_LABEL",0);
    FUN_100185730(param_1 + lVar7,uVar5);
    uStack_80 = uVar2;
    uStack_d0 = uStack_d0 & 0xffffffff00000000 | uVar11;
    pcStack_a8 = FUN_1001dd3e4;
    uStack_98 = 0;
    uStack_90 = 0;
    lStack_a0 = param_1;
    uStack_88 = uStack_d0;
    FUN_10001554c(param_1 + lVar10,&pcStack_a8);
    uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_DISPLAY_LABEL",0);
    FUN_1001afd98(param_1 + lVar7,uVar5,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
    uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_URL_LABEL",0);
    FUN_100185730(param_1 + lStack_b8,uVar5);
    uStack_80 = uVar2;
    uStack_d8 = uStack_d8 & 0xffffffff00000000 | uVar11;
    pcStack_a8 = FUN_1001dd3ec;
    uStack_98 = 0;
    uStack_90 = 0;
    lStack_a0 = param_1;
    uStack_88 = uStack_d8;
    FUN_10001554c(param_1 + lVar9,&pcStack_a8);
    uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_URL_LABEL",0);
    FUN_1001afd98(param_1 + lStack_b8,uVar5,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
    uVar11 = uVar11 + 1;
    uVar6 = uVar6 + 4;
    lVar4 = lVar4 + 0x3d80;
    lVar7 = lVar7 + 0x3d80;
    lStack_b8 = lStack_b8 + 0x3d80;
    lVar8 = lVar8 + 0x3d80;
    lVar10 = lVar10 + 0x3d80;
    lVar9 = lVar9 + 0x3d80;
  } while (uVar11 != 3);
  uVar5 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_APPLY_BUTTON_LABEL",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,lVar1,0,uVar5,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_80 = DAT_101d91884;
  pcStack_a8 = thunk_FUN_1001de658;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x1c060,&pcStack_a8);
  return param_1;
}




void FUN_1001dd3fc(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 *local_68;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  
  FUN_1001a6550();
  uVar2 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar2,auStack_54,auStack_58,auStack_5c);
  FUN_1001df0d0(*(undefined4 *)(param_1 + 0x9d0),0x42a00000,0x41f00000,0x40c00000,param_1 + 0x9e0);
  FUN_1001dee58(*(undefined4 *)(param_1 + 0x9d0),0x42a00000,0x41f00000,0x40c00000,param_1 + 0x40f0);
  FUN_1001df0d0(*(undefined4 *)(param_1 + 0x9d0),0x42a00000,0x41f00000,0x40c00000,param_1 + 0x6cf8);
  FUN_1001df0d0(*(undefined4 *)(param_1 + 0x9d0),0x42a00000,0x41f00000,0x40c00000,param_1 + 0xa408);
  FUN_1001dee58(*(undefined4 *)(param_1 + 0x9d0),0x42a00000,0x41f00000,0x40c00000,param_1 + 0xdb18);
  lVar3 = param_1 + 0x10720;
  lVar4 = 3;
  do {
    FUN_1001df3bc(*(undefined4 *)(param_1 + 0x9d0),0x42a00000,0x41f00000,0x40c00000,lVar3);
    lVar3 = lVar3 + 0x3d80;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar3 = param_1 + 0x1c058;
  fVar5 = (float)FUN_10064259c(lVar3);
  fVar6 = 80.0;
  fVar7 = fVar5 * 0.5 + 80.0;
  FUN_10064259c(lVar3);
  fVar5 = fVar6 * 0.5 + 60.0;
  fVar6 = *(float *)(param_1 + 0x1c098);
  bVar1 = false;
  if ((fVar6 == fVar7) && (bVar1 = false, !NAN(*(float *)(param_1 + 0x1c09c)) && !NAN(fVar5))) {
    bVar1 = *(float *)(param_1 + 0x1c09c) == fVar5;
  }
  if (!bVar1) {
    *(float *)(param_1 + 0x1c098) = fVar7;
    *(float *)(param_1 + 0x1c09c) = fVar5;
    FUN_1000200a0(lVar3);
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1c058) + 0x28))(lVar3,&local_68);
  uVar8 = *(undefined4 *)(param_1 + 0x9d0);
  fVar5 = *(float *)(param_1 + 0x1c09c);
  FUN_10064259c(lVar3);
  FUN_10064e47c(uVar8,fVar5 + fVar6 + 12.0,param_1 + 0x1bfa0);
  fVar5 = 0.0;
  FUN_10064fc74(0,0,0,&local_68);
  FUN_100650064(param_1 + 0x908,&local_68);
  (**(code **)(*(long *)(param_1 + 0x908) + 0x90))(param_1 + 0x908);
  FUN_100530adc(param_1 + 0x348,0,1);
  uVar8 = *(undefined4 *)(param_1 + 0x9d0);
  fVar6 = *(float *)(param_1 + 0x1bfe4);
  FUN_10064e3cc(param_1 + 0x1bfa0);
  FUN_10053093c(uVar8,fVar5 + fVar6,param_1 + 0x348);
  return;
}




void FUN_1001dd630(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  string *this;
  string *this_00;
  string *psVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  string *psVar9;
  char *pcVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  void *local_78;
  void *local_70;
  char local_61;
  
  *(undefined8 *)(param_1 + 0x1d6f8) = *param_2;
  this = (string *)(param_1 + 0x1d700);
  psVar9 = (string *)(param_2 + 1);
  std::string::operator=(this,psVar9);
  this_00 = (string *)(param_1 + 0x1d718);
  std::string::operator=(this_00,(string *)(param_2 + 4));
  std::string::operator=((string *)(param_1 + 0x1d730),(string *)(param_2 + 7));
  std::string::operator=((string *)(param_1 + 0x1d748),(string *)(param_2 + 10));
  std::string::operator=((string *)(param_1 + 0x1d760),(string *)(param_2 + 0xd));
  std::string::operator=((string *)(param_1 + 0x1d778),(string *)(param_2 + 0x10));
  std::string::operator=((string *)(param_1 + 0x1d790),(string *)(param_2 + 0x13));
  std::string::operator=((string *)(param_1 + 0x1d7a8),(string *)(param_2 + 0x16));
  std::string::operator=((string *)(param_1 + 0x1d7c0),(string *)(param_2 + 0x19));
  *(undefined1 *)(param_1 + 0x1d7d8) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x1d7e0) = 0;
  uVar8 = FUN_1004d2a5c(*(undefined4 *)param_2,0);
  FUN_1001b0f48(param_1 + 0xcb8,uVar8,1,1);
  bVar6 = *(byte *)((long)param_2 + 0x1f);
  uVar11 = (ulong)bVar6;
  sVar3 = param_2[2];
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar3 == sVar4) {
    psVar2 = *(string **)psVar9;
    if (-1 < (char)bVar6) {
      psVar2 = psVar9;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 != 0) && (iVar7 = _memcmp(psVar2,pbVar13,sVar3), iVar7 != 0)) goto LAB_1001dd828;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar13 == ((uint)*(string **)psVar9 & 0xff)) {
        pbVar12 = (byte *)((long)param_2 + 9);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) goto LAB_1001dd844;
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar13);
      }
      goto LAB_1001dd828;
    }
LAB_1001dd844:
    FUN_10018e71c(param_1 + 0x43c8,0,1,1);
    psVar9 = (string *)FUN_10018e8a8(param_1 + 0x43c8);
    std::string::operator=(this,psVar9);
    *(undefined1 *)(param_1 + 0x1d7e0) = 1;
  }
  else {
LAB_1001dd828:
    FUN_10018e754(param_1 + 0x43c8,psVar9,1,1);
  }
  puVar1 = param_2 + 4;
  bVar6 = *(byte *)((long)param_2 + 0x37);
  uVar11 = (ulong)bVar6;
  sVar3 = param_2[5];
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar3 == sVar4) {
    puVar5 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar5 = puVar1;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 != 0) && (iVar7 = _memcmp(puVar5,pbVar13,sVar3), iVar7 != 0)) goto LAB_1001dd914;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar13 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar12 = (byte *)((long)param_2 + 0x21);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) goto LAB_1001dd930;
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar13);
      }
      goto LAB_1001dd914;
    }
LAB_1001dd930:
    FUN_1001b0f48(param_1 + 0x6fd0,0,1,1);
    psVar9 = (string *)FUN_1001b10bc(param_1 + 0x6fd0);
    std::string::operator=(this_00,psVar9);
    *(undefined1 *)(param_1 + 0x1d7e0) = 1;
  }
  else {
LAB_1001dd914:
    FUN_1001b0f68(param_1 + 0x6fd0,puVar1,1,1);
  }
  if (*(int *)((long)param_2 + 4) == -1) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)((long)param_2 + 4) / 3 + 1;
  }
  FUN_1001b0f48(param_1 + 0xa6e0,iVar7,1,1);
  if (*(char *)(param_2 + 0x1c) == '\0') {
    pcVar10 = "open";
  }
  else {
    pcVar10 = "invite_only";
  }
  FUN_10001549c(&local_78,pcVar10);
  FUN_10018e754(param_1 + 0xddf0,&local_78,1,1);
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  puVar1 = param_2 + 10;
  bVar6 = *(byte *)((long)param_2 + 0x67);
  uVar11 = (ulong)bVar6;
  sVar3 = param_2[0xb];
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar3 == sVar4) {
    puVar5 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar5 = puVar1;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 != 0) && (iVar7 = _memcmp(puVar5,pbVar13,sVar3), iVar7 != 0)) goto LAB_1001dda94;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar13 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar12 = (byte *)((long)param_2 + 0x51);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) goto LAB_1001ddac8;
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar13);
      }
      goto LAB_1001dda94;
    }
LAB_1001ddac8:
    uVar8 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_DISPLAY_LABEL",0);
    FUN_100185730(param_1 + 0x10ac0,uVar8);
  }
  else {
LAB_1001dda94:
    FUN_1004e3170(&local_78,puVar1);
    FUN_100185730(param_1 + 0x10ac0,&local_78);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
  }
  puVar1 = param_2 + 0x13;
  bVar6 = *(byte *)((long)param_2 + 0xaf);
  uVar11 = (ulong)bVar6;
  sVar3 = param_2[0x14];
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar3 == sVar4) {
    puVar5 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar5 = puVar1;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 != 0) && (iVar7 = _memcmp(puVar5,pbVar13,sVar3), iVar7 != 0)) goto LAB_1001ddb88;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar13 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar12 = (byte *)((long)param_2 + 0x99);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) goto LAB_1001ddbbc;
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar13);
      }
      goto LAB_1001ddb88;
    }
LAB_1001ddbbc:
    uVar8 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_URL_LABEL",0);
    FUN_100185730(param_1 + 0x127b0,uVar8);
  }
  else {
LAB_1001ddb88:
    FUN_1004e3170(&local_78,puVar1);
    FUN_100185730(param_1 + 0x127b0,&local_78);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
  }
  puVar1 = param_2 + 0xd;
  bVar6 = *(byte *)((long)param_2 + 0x7f);
  uVar11 = (ulong)bVar6;
  sVar3 = param_2[0xe];
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar3 == sVar4) {
    puVar5 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar5 = puVar1;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 != 0) && (iVar7 = _memcmp(puVar5,pbVar13,sVar3), iVar7 != 0)) goto LAB_1001ddc7c;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar13 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar12 = (byte *)((long)param_2 + 0x69);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) goto LAB_1001ddcb0;
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar13);
      }
      goto LAB_1001ddc7c;
    }
LAB_1001ddcb0:
    uVar8 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_DISPLAY_LABEL",0);
    FUN_100185730(param_1 + 0x14840,uVar8);
  }
  else {
LAB_1001ddc7c:
    FUN_1004e3170(&local_78,puVar1);
    FUN_100185730(param_1 + 0x14840,&local_78);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
  }
  puVar1 = param_2 + 0x16;
  bVar6 = *(byte *)((long)param_2 + 199);
  uVar11 = (ulong)bVar6;
  sVar3 = param_2[0x17];
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar3 == sVar4) {
    puVar5 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar5 = puVar1;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 != 0) && (iVar7 = _memcmp(puVar5,pbVar13,sVar3), iVar7 != 0)) goto LAB_1001ddd70;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar13 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar12 = (byte *)((long)param_2 + 0xb1);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) goto LAB_1001ddda4;
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar13);
      }
      goto LAB_1001ddd70;
    }
LAB_1001ddda4:
    uVar8 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_URL_LABEL",0);
    FUN_100185730(param_1 + 0x16530,uVar8);
  }
  else {
LAB_1001ddd70:
    FUN_1004e3170(&local_78,puVar1);
    FUN_100185730(param_1 + 0x16530,&local_78);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
  }
  puVar1 = param_2 + 0x10;
  bVar6 = *(byte *)((long)param_2 + 0x97);
  uVar11 = (ulong)bVar6;
  sVar3 = param_2[0x11];
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar3 == sVar4) {
    puVar5 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar5 = puVar1;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 != 0) && (iVar7 = _memcmp(puVar5,pbVar13,sVar3), iVar7 != 0)) goto LAB_1001dde64;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar13 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar12 = (byte *)((long)param_2 + 0x81);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) goto LAB_1001dde98;
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar13);
      }
      goto LAB_1001dde64;
    }
LAB_1001dde98:
    uVar8 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_DISPLAY_LABEL",0);
    FUN_100185730(param_1 + 0x185c0,uVar8);
  }
  else {
LAB_1001dde64:
    FUN_1004e3170(&local_78,puVar1);
    FUN_100185730(param_1 + 0x185c0,&local_78);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
  }
  puVar1 = param_2 + 0x19;
  bVar6 = *(byte *)((long)param_2 + 0xdf);
  uVar11 = (ulong)bVar6;
  sVar3 = param_2[0x1a];
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar3 == sVar4) {
    puVar5 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar5 = puVar1;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 == 0) || (iVar7 = _memcmp(puVar5,pbVar13,sVar3), iVar7 == 0)) goto LAB_1001ddf8c;
    }
    else {
      if (sVar3 == 0) {
LAB_1001ddf8c:
        uVar8 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_URL_LABEL",0);
        FUN_100185730(param_1 + 0x1a2b0,uVar8);
        goto LAB_1001ddfb4;
      }
      if ((uint)*pbVar13 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar12 = (byte *)((long)param_2 + 0xc9);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) goto LAB_1001ddf8c;
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar13);
      }
    }
  }
  FUN_1004e3170(&local_78,puVar1);
  FUN_100185730(param_1 + 0x1a2b0,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
LAB_1001ddfb4:
  *(undefined8 *)(param_1 + 0x1d610) = *(undefined8 *)(param_1 + 0x1d6f8);
  std::string::operator=((string *)(param_1 + 0x1d618),this);
  std::string::operator=((string *)(param_1 + 0x1d630),this_00);
  std::string::operator=((string *)(param_1 + 0x1d648),(string *)(param_1 + 0x1d730));
  std::string::operator=((string *)(param_1 + 0x1d660),(string *)(param_1 + 0x1d748));
  std::string::operator=((string *)(param_1 + 0x1d678),(string *)(param_1 + 0x1d760));
  std::string::operator=((string *)(param_1 + 0x1d690),(string *)(param_1 + 0x1d778));
  std::string::operator=((string *)(param_1 + 0x1d6a8),(string *)(param_1 + 0x1d790));
  std::string::operator=((string *)(param_1 + 0x1d6c0),(string *)(param_1 + 0x1d7a8));
  std::string::operator=((string *)(param_1 + 0x1d6d8),(string *)(param_1 + 0x1d7c0));
  *(undefined1 *)(param_1 + 0x1d6f0) = *(undefined1 *)(param_1 + 0x1d7d8);
  return;
}




void FUN_1001de098(long param_1)

{
  FUN_1001de0d4();
  FUN_10018e440(param_1 + 0x43c8,0);
  FUN_10018e440(param_1 + 0xddf0,0);
  return;
}




void FUN_1001de0d4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  FUN_1006423ec(param_1 + 0x13c,1);
  FUN_1006423ec(param_1 + 0x81e,1);
  FUN_1006423ec(param_1 + 0xd9f,1);
  FUN_1006423ec(param_1 + 0x1481,1);
  FUN_1006423ec(param_1 + 0x1b63,1);
  plVar2 = param_1 + 0x20e4;
  lVar3 = 3;
  do {
    FUN_1006423ec(plVar2,1);
    plVar2 = plVar2 + 0x7b0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FUN_1006423ec(param_1 + 0x37f4,1);
  plVar2 = param_1 + 0x121;
  FUN_100642bd8(plVar2,param_1 + 0x13c,1);
  FUN_100642bd8(plVar2,param_1 + 0x81e,1);
  FUN_100642bd8(plVar2,param_1 + 0xd9f,1);
  FUN_100642bd8(plVar2,param_1 + 0x1481,1);
  FUN_100642bd8(plVar2,param_1 + 0x1b63,1);
  plVar1 = param_1 + 0x20e4;
  lVar3 = 3;
  do {
    FUN_100642bd8(plVar2,plVar1,1);
    plVar1 = plVar1 + 0x7b0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FUN_100642bd8(plVar2,param_1 + 0x37f4,1);
                    /* WARNING: Could not recover jumptable at 0x0001001de250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_1001de254(long param_1,ulong param_2)

{
  if ((param_2 & 1) == 0) {
    if (*(float *)(param_1 + 0x38c) != 0.0) {
      *(undefined4 *)(param_1 + 0x38c) = 0;
      FUN_1000200a0(param_1 + 0x348);
    }
    if (*(char *)(param_1 + 0x1d7e0) != '\0') {
      FUN_1001dd630(param_1,param_1 + 0x1d6f8);
      return;
    }
  }
  return;
}




void FUN_1001de2b8(long param_1)

{
  FUN_1006423ec(param_1 + 0x40f0,1);
  FUN_100642bd8(param_1 + 0x908,param_1 + 0x40f0,1);
  if (*(char *)(param_1 + 0x6cec) != '\0') {
    return;
  }
  FUN_1001de0d4(param_1);
  return;
}




void FUN_1001de314(long param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  
  *(undefined1 *)(param_1 + 0x1d7e0) = 1;
  uVar4 = FUN_10018e8a8(param_1 + 0xddf0);
  uVar1 = *(ulong *)(uVar4 + 8);
  if (-1 < (char)*(byte *)(uVar4 + 0x17)) {
    uVar1 = (ulong)*(byte *)(uVar4 + 0x17);
  }
  if (uVar1 == 0xb) {
    iVar3 = std::string::compare(uVar4,0,(char *)0xffffffffffffffff,0x1013e2f74);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = false;
  }
  *(bool *)(param_1 + 0x1d6f0) = bVar2;
  return;
}




void FUN_1001de39c(long param_1)

{
  FUN_1006423ec(param_1 + 0xdb18,1);
  FUN_100642bd8(param_1 + 0x908,param_1 + 0xdb18,1);
  if (*(char *)(param_1 + 0x10714) != '\0') {
    return;
  }
  FUN_1001de0d4(param_1);
  return;
}




void FUN_1001de3fc(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined1 auStack_30 [8];
  void *local_28;
  
  lVar3 = param_1 + (long)param_3 * 0x3d80;
  uVar1 = FUN_100655b6c(lVar3 + ((ulong)*(byte *)(lVar3 + 0x10e30) & 1) * 0x130 + 0x10ca0);
  thunk_FUN_1004e439c(auStack_30,uVar1);
  *(undefined1 *)(param_1 + 0x1d7e0) = 1;
  if (param_3 == 2) {
    uVar2 = 0xd690;
  }
  else if (param_3 == 1) {
    uVar2 = 0xd678;
  }
  else {
    if (param_3 != 0) goto LAB_1001de498;
    uVar2 = 0xd660;
  }
  FUN_1004e357c(auStack_30,param_1 + (ulong)(uVar2 | 0x10000));
LAB_1001de498:
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1001de4b4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  lVar6 = param_1 + (long)param_3 * 0x3d80;
  lVar1 = lVar6 + 0x127b0;
  uVar4 = FUN_100655b6c(lVar1 + ((ulong)*(byte *)(lVar6 + 0x12b20) & 1) * 0x130 + 0x1e0);
  thunk_FUN_1004e439c(auStack_40,uVar4);
  *(undefined1 *)(param_1 + 0x1d7e0) = 1;
  FUN_1004e4154(auStack_50,auStack_40,0,7);
  FUN_1004e4154(auStack_60,auStack_40,0,8);
  FUN_1004e3120(auStack_70,"http://");
  iVar2 = FUN_1004e36c0(auStack_50,auStack_70);
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_1004e3120(auStack_80,"https://");
    iVar3 = FUN_1004e36c0(auStack_60,auStack_80);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  if (iVar3 != 0) {
    FUN_1004e3120(auStack_70,"http://");
    FUN_1004e372c(auStack_70,auStack_40);
    FUN_1000153b4(auStack_40,auStack_70);
    FUN_100185730(lVar1,auStack_40);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
  }
  if (param_3 == 2) {
    uVar5 = 55000;
  }
  else if (param_3 == 1) {
    uVar5 = 0xd6c0;
  }
  else {
    if (param_3 != 0) goto LAB_1001de620;
    uVar5 = 0xd6a8;
  }
  FUN_1004e357c(auStack_40,param_1 + (ulong)(uVar5 | 0x10000));
LAB_1001de620:
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1001de658(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  if (*(char *)(param_1 + 0x1d7e0) != '\0') {
    *(undefined1 *)(param_1 + 0x1d7e0) = 0;
    *(undefined8 *)(param_1 + 0x1d6f8) = *(undefined8 *)(param_1 + 0x1d610);
    std::string::operator=((string *)(param_1 + 0x1d700),(string *)(param_1 + 0x1d618));
    std::string::operator=((string *)(param_1 + 0x1d718),(string *)(param_1 + 0x1d630));
    std::string::operator=((string *)(param_1 + 0x1d730),(string *)(param_1 + 0x1d648));
    std::string::operator=((string *)(param_1 + 0x1d748),(string *)(param_1 + 0x1d660));
    std::string::operator=((string *)(param_1 + 0x1d760),(string *)(param_1 + 0x1d678));
    std::string::operator=((string *)(param_1 + 0x1d778),(string *)(param_1 + 0x1d690));
    std::string::operator=((string *)(param_1 + 0x1d790),(string *)(param_1 + 0x1d6a8));
    std::string::operator=((string *)(param_1 + 0x1d7a8),(string *)(param_1 + 0x1d6c0));
    std::string::operator=((string *)(param_1 + 0x1d7c0),(string *)(param_1 + 0x1d6d8));
    *(undefined1 *)(param_1 + 0x1d7d8) = *(undefined1 *)(param_1 + 0x1d6f0);
    uVar1 = FUN_100644a94("UI::GUILD_SETTINGS_CHANGED");
    FUN_100644aec(auStack_40,uVar1,0);
    FUN_100644c34(param_1,auStack_40,0);
    return;
  }
  FUN_100221380(param_1);
  return;
}




void thunk_FUN_1001de800(void)

{
  FUN_1001de800();
  return;
}




void FUN_1001de7ec(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001de800();
  operator_delete(pvVar1);
  return;
}




void FUN_1001de800(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar5;
  undefined8 *puVar4;
  
  puVar1 = param_1 + 0x1b63;
  puVar2 = param_1 + 0x1481;
  *param_1 = &PTR_thunk_FUN_1001de800_101468ff8;
  FUN_100143e0c(param_1 + 0x3adf);
  FUN_100143e0c(param_1 + 0x3ac2);
  FUN_10003bd40(param_1 + 0x380b);
  thunk_FUN_10064e2bc(param_1 + 0x37f4);
  puVar4 = param_1 + 0x3044;
  lVar5 = -0xb880;
  do {
    lVar3 = FUN_1001deab0(puVar4);
    puVar4 = (undefined8 *)(lVar3 + -0x3d80);
    lVar5 = lVar5 + 0x3d80;
  } while (lVar5 != 0);
  *puVar1 = &PTR_FUN_101468eb0;
  thunk_FUN_10018d500(param_1 + 0x1bbe);
  thunk_FUN_100651068(param_1 + 0x1b98);
  *puVar1 = &PTR_FUN_1014692b8;
  param_1[0x1b7a] = &PTR_FUN_1014a7108;
  param_1[0x1b91] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1b94);
  FUN_10064e2bc(param_1 + 0x1b7a);
  FUN_10064e2bc(puVar1);
  *puVar2 = &PTR_FUN_101468d68;
  thunk_FUN_1001b0af4(param_1 + 0x14dc);
  thunk_FUN_100651068(param_1 + 0x14b6);
  *puVar2 = &PTR_FUN_1014692b8;
  param_1[0x1498] = &PTR_FUN_1014a7108;
  param_1[0x14af] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x14b2);
  FUN_10064e2bc(param_1 + 0x1498);
  FUN_10064e2bc(puVar2);
  param_1[0xd9f] = &PTR_FUN_101468d68;
  thunk_FUN_1001b0af4(param_1 + 0xdfa);
  thunk_FUN_100651068(param_1 + 0xdd4);
  param_1[0xd9f] = &PTR_FUN_1014692b8;
  param_1[0xdb6] = &PTR_FUN_1014a7108;
  param_1[0xdcd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xdd0);
  FUN_10064e2bc(param_1 + 0xdb6);
  FUN_10064e2bc(param_1 + 0xd9f);
  param_1[0x81e] = &PTR_FUN_101468eb0;
  thunk_FUN_10018d500(param_1 + 0x879);
  thunk_FUN_100651068(param_1 + 0x853);
  param_1[0x81e] = &PTR_FUN_1014692b8;
  param_1[0x835] = &PTR_FUN_1014a7108;
  param_1[0x84c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x84f);
  FUN_10064e2bc(param_1 + 0x835);
  FUN_10064e2bc(param_1 + 0x81e);
  param_1[0x13c] = &PTR_FUN_101468d68;
  thunk_FUN_1001b0af4(param_1 + 0x197);
  thunk_FUN_100651068(param_1 + 0x171);
  param_1[0x13c] = &PTR_FUN_1014692b8;
  param_1[0x153] = &PTR_FUN_1014a7108;
  param_1[0x16a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x16d);
  FUN_10064e2bc(param_1 + 0x153);
  FUN_10064e2bc(param_1 + 0x13c);
  *param_1 = &PTR_FUN_101462dd8;
  FUN_10064e2bc(param_1 + 0x121);
  FUN_10064221c(param_1 + 0x110);
  thunk_FUN_100530784(param_1 + 0x69);
  thunk_FUN_10064e2bc(param_1 + 0x52);
  param_1[0x34] = &PTR_FUN_1014a7108;
  param_1[0x4b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4e);
  FUN_10064e2bc(param_1 + 0x34);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1001deab0(void)

{
  FUN_1001deab0();
  return;
}




void FUN_1001deab0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001deab0_101469170;
  param_1[0x412] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x7aa] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7aa]);
    param_1[0x7aa] = 0;
    param_1[0x7a9] = 0;
  }
  if ((void *)param_1[0x7a8] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7a8]);
    param_1[0x7a8] = 0;
    param_1[0x7a7] = 0;
  }
  if ((void *)param_1[0x7a6] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7a6]);
    param_1[0x7a6] = 0;
    param_1[0x7a5] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x77f);
  FUN_10064e2bc(param_1 + 0x764);
  FUN_10064e2bc(param_1 + 0x749);
  FUN_10003bd40(param_1 + 0x492);
  FUN_100186088(param_1 + 0x412);
  param_1[0x74] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x40c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x40c]);
    param_1[0x40c] = 0;
    param_1[0x40b] = 0;
  }
  if ((void *)param_1[0x40a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x40a]);
    param_1[0x40a] = 0;
    param_1[0x409] = 0;
  }
  if ((void *)param_1[0x408] != (void *)0x0) {
    operator_delete__((void *)param_1[0x408]);
    param_1[0x408] = 0;
    param_1[0x407] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x3e1);
  FUN_10064e2bc(param_1 + 0x3c6);
  FUN_10064e2bc(param_1 + 0x3ab);
  FUN_10003bd40(param_1 + 0xf4);
  FUN_100186088(param_1 + 0x74);
  thunk_FUN_100651068(param_1 + 0x4e);
  FUN_10064e2bc(param_1 + 0x35);
  *param_1 = &PTR_FUN_1014692b8;
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001dec50(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001deab0();
  operator_delete(pvVar1);
  return;
}




long * FUN_1001dec64(long *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_FUN_1014692b8;
  puVar1 = puVar1 + 0x17;
  thunk_FUN_100652c08(puVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100652cac(puVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar1,&DAT_10115a164,2);
  uVar2 = *(uint *)((long)param_1 + 0x13c);
  if ((uVar2 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x13c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x1980;
    FUN_1000200a0(puVar1);
    uVar2 = *(uint *)((long)param_1 + 0x13c);
  }
  *(uint *)((long)param_1 + 0x13c) = uVar2 & 0xfffffffb;
  return param_1;
}




void FUN_1001ded1c(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = (**(code **)(*param_3 + 0x48))();
  uStack_24 = param_2;
  FUN_10064e48c(param_3 + 0x17,&local_28);
  return;
}




long * FUN_1001ded5c(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1001dec64();
  *puVar2 = &PTR_FUN_101468eb0;
  puVar2 = puVar2 + 0x35;
  thunk_FUN_100650e64(puVar2);
  plVar1 = param_1 + 0x5b;
  thunk_FUN_10018ceb0(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100651038(puVar2,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  if ((*(uint *)((long)param_1 + 0x22c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(puVar2);
  }
  FUN_10018f0e0(plVar1,1,1);
  FUN_10018efcc(plVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_10018ef5c(0x3f666666,0x3f4ccccd,plVar1);
  return param_1;
}




long * thunk_FUN_1001ded5c(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1001dec64();
  *puVar2 = &PTR_FUN_101468eb0;
  puVar2 = puVar2 + 0x35;
  thunk_FUN_100650e64(puVar2);
  plVar1 = param_1 + 0x5b;
  thunk_FUN_10018ceb0(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100651038(puVar2,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  if ((*(uint *)((long)param_1 + 0x22c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(puVar2);
  }
  FUN_10018f0e0(plVar1,1,1);
  FUN_10018efcc(plVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_10018ef5c(0x3f666666,0x3f4ccccd,plVar1);
  return param_1;
}




void FUN_1001dee58(undefined8 param_1,float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  bool bVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_68;
  
  iVar6 = FUN_100126c88();
  lVar1 = param_5 + 0x1a8;
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar6 == 0) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  lVar2 = param_5 + 0x2d8;
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar6 == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(lVar1,*ppuVar3);
  FUN_10018efcc(lVar2,*ppuVar4);
  fVar7 = (float)param_1 * 0.5 - param_2;
  FUN_10018e8d8(0,fVar7,fVar7,lVar2);
  bVar5 = false;
  if ((*(float *)(param_5 + 0x1e8) == param_2) &&
     (bVar5 = false, !NAN(*(float *)(param_5 + 0x1ec)) && !NAN(param_3))) {
    bVar5 = *(float *)(param_5 + 0x1ec) == param_3;
  }
  if (!bVar5) {
    *(float *)(param_5 + 0x1e8) = param_2;
    *(float *)(param_5 + 0x1ec) = param_3;
    FUN_1000200a0(lVar1);
  }
  local_68 = 0;
  (**(code **)(*(long *)(param_5 + 0x1a8) + 0x28))(lVar1,&local_68);
  fVar8 = 0.0;
  FUN_10065179c((float)param_1 + param_2 * -2.0,0,0x3f800000,lVar1);
  fVar7 = (float)FUN_10018ee40(lVar2);
  param_2 = param_2 + fVar7 * 0.5;
  fVar9 = *(float *)(param_5 + 0x1ec);
  fVar7 = fVar8;
  FUN_10064259c(lVar1);
  fVar7 = fVar9 + param_4 + fVar8 * 0.5 + fVar7;
  bVar5 = false;
  if ((*(float *)(param_5 + 0x318) == param_2) &&
     (bVar5 = false, !NAN(*(float *)(param_5 + 0x31c)) && !NAN(fVar7))) {
    bVar5 = *(float *)(param_5 + 0x31c) == fVar7;
  }
  if (!bVar5) {
    *(float *)(param_5 + 0x318) = param_2;
    *(float *)(param_5 + 0x31c) = fVar7;
    FUN_1000200a0(lVar2);
  }
  local_68 = 0;
  (**(code **)(*(long *)(param_5 + 0x2d8) + 0x28))(lVar2,&local_68);
  FUN_10064e47c(param_1,fVar8 + param_4 + *(float *)(param_5 + 0x31c),param_5);
  return;
}




long * FUN_1001defe4(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1001dec64();
  *puVar2 = &PTR_FUN_101468d68;
  puVar2 = puVar2 + 0x35;
  thunk_FUN_100650e64(puVar2);
  plVar1 = param_1 + 0x5b;
  thunk_FUN_1001b0818(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100651038(puVar2,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  if ((*(uint *)((long)param_1 + 0x22c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(puVar2);
  }
  FUN_1001b1134(plVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_1001b10ec(0x3f666666,0x3f4ccccd,plVar1);
  return param_1;
}




long * thunk_FUN_1001defe4(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1001dec64();
  *puVar2 = &PTR_FUN_101468d68;
  puVar2 = puVar2 + 0x35;
  thunk_FUN_100650e64(puVar2);
  plVar1 = param_1 + 0x5b;
  thunk_FUN_1001b0818(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100651038(puVar2,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  if ((*(uint *)((long)param_1 + 0x22c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(puVar2);
  }
  FUN_1001b1134(plVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_1001b10ec(0x3f666666,0x3f4ccccd,plVar1);
  return param_1;
}




void FUN_1001df0d0(undefined8 param_1,float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  bool bVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_68;
  
  iVar6 = FUN_100126c88();
  lVar1 = param_5 + 0x1a8;
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar6 == 0) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  lVar2 = param_5 + 0x2d8;
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar6 == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(lVar1,*ppuVar3);
  FUN_1001b1134(lVar2,*ppuVar4);
  FUN_1001b0cdc((-244.0 - param_2) + (float)param_1 * 0.5,lVar2);
  bVar5 = false;
  if ((*(float *)(param_5 + 0x1e8) == param_2) &&
     (bVar5 = false, !NAN(*(float *)(param_5 + 0x1ec)) && !NAN(param_3))) {
    bVar5 = *(float *)(param_5 + 0x1ec) == param_3;
  }
  if (!bVar5) {
    *(float *)(param_5 + 0x1e8) = param_2;
    *(float *)(param_5 + 0x1ec) = param_3;
    FUN_1000200a0(lVar1);
  }
  local_68 = 0;
  (**(code **)(*(long *)(param_5 + 0x1a8) + 0x28))(lVar1,&local_68);
  fVar8 = 0.0;
  FUN_10065179c((float)param_1 + param_2 * -2.0,0,0x3f800000,lVar1);
  FUN_10064e3cc(lVar2);
  fVar9 = *(float *)(param_5 + 0x1ec);
  fVar7 = fVar8;
  FUN_10064259c(lVar1);
  fVar7 = fVar9 + param_4 + fVar8 * 0.5 + fVar7;
  if ((*(float *)(param_5 + 0x318) != param_2) || (*(float *)(param_5 + 0x31c) != fVar7)) {
    *(float *)(param_5 + 0x318) = param_2;
    *(float *)(param_5 + 0x31c) = fVar7;
    FUN_1000200a0(lVar2);
  }
  local_68 = 0;
  (**(code **)(*(long *)(param_5 + 0x2d8) + 0x28))(lVar2,&local_68);
  FUN_10064e47c(param_1,fVar8 + param_4 + *(float *)(param_5 + 0x31c),param_5);
  return;
}




long * FUN_1001df260(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_1001dec64();
  *puVar4 = &PTR_thunk_FUN_1001deab0_101469170;
  puVar4 = puVar4 + 0x35;
  FUN_10064fd54(puVar4,1);
  param_1[0x35] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar1 = param_1 + 0x4e;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x74;
  thunk_FUN_100184f78(plVar2);
  plVar3 = param_1 + 0x412;
  thunk_FUN_100184f78(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  FUN_100642bd8(puVar4,plVar1,1);
  FUN_100642bd8(puVar4,plVar2,1);
  FUN_100642bd8(puVar4,plVar3,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  if ((*(uint *)((long)param_1 + 0x2f4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar1);
  }
  FUN_100185e2c(plVar2,1);
  FUN_100185e38(plVar2,1,1);
  FUN_100185e70(plVar2,1);
  FUN_100185e2c(plVar3,1);
  FUN_100185e38(plVar3,1,5);
  FUN_100185e70(plVar3,1);
  return param_1;
}




long * thunk_FUN_1001df260(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_1001dec64();
  *puVar4 = &PTR_thunk_FUN_1001deab0_101469170;
  puVar4 = puVar4 + 0x35;
  FUN_10064fd54(puVar4,1);
  param_1[0x35] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar1 = param_1 + 0x4e;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x74;
  thunk_FUN_100184f78(plVar2);
  plVar3 = param_1 + 0x412;
  thunk_FUN_100184f78(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  FUN_100642bd8(puVar4,plVar1,1);
  FUN_100642bd8(puVar4,plVar2,1);
  FUN_100642bd8(puVar4,plVar3,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  if ((*(uint *)((long)param_1 + 0x2f4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar1);
  }
  FUN_100185e2c(plVar2,1);
  FUN_100185e38(plVar2,1,1);
  FUN_100185e70(plVar2,1);
  FUN_100185e2c(plVar3,1);
  FUN_100185e38(plVar3,1,5);
  FUN_100185e70(plVar3,1);
  return param_1;
}




void FUN_1001df3bc(undefined8 param_1,float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  undefined **ppuVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_50 [16];
  
  iVar4 = FUN_100126c88();
  ppuVar2 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar4 == 0) {
    ppuVar2 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(param_5 + 0x270,*ppuVar2);
  FUN_10065179c((float)param_1 + param_2 * -2.0,0,0x3f800000,param_5 + 0x270);
  lVar1 = param_5 + 0x1a8;
  bVar3 = false;
  if ((*(float *)(param_5 + 0x1e8) == param_2) &&
     (bVar3 = false, !NAN(*(float *)(param_5 + 0x1ec)) && !NAN(param_3))) {
    bVar3 = *(float *)(param_5 + 0x1ec) == param_3;
  }
  if (!bVar3) {
    *(float *)(param_5 + 0x1e8) = param_2;
    *(float *)(param_5 + 0x1ec) = param_3;
    FUN_1000200a0(lVar1);
  }
  fVar5 = 0.0;
  FUN_10064fc74(0,0,0x42a00000,auStack_50);
  FUN_100650064(lVar1,auStack_50);
  (**(code **)(*(long *)(param_5 + 0x1a8) + 0x90))(lVar1);
  fVar6 = *(float *)(param_5 + 0x20d4);
  FUN_100185eb4(param_5 + 0x2090);
  FUN_10064e47c(param_1,param_4 + param_3 + fVar6 + fVar5,param_5);
  return;
}




void FUN_1001df4c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014692b8;
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001df520(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014692b8;
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001df57c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 ******ppppppuVar3;
  ulong uVar4;
  undefined8 *****local_68;
  ulong local_60;
  undefined8 uStack_58;
  
  iVar1 = FUN_10052ba28();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = FUN_10052ba68();
  if ((uVar2 & 1) != 0) {
    return;
  }
  FUN_1006415b8();
  if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
    uVar2 = param_2[1];
    if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1001df754();
    }
    param_2 = (undefined8 *)*param_2;
  }
  else {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if (uVar2 < 0x17) {
    ppppppuVar3 = &local_68;
    uStack_58 = CONCAT17((char)uVar2,(undefined7)uStack_58);
    if (uVar2 == 0) goto LAB_1001df628;
  }
  else {
    uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
    ppppppuVar3 = operator_new(uVar4);
    uStack_58 = uVar4 | 0x8000000000000000;
    local_68 = ppppppuVar3;
    local_60 = uVar2;
  }
  _memcpy(ppppppuVar3,param_2,uVar2);
LAB_1001df628:
  *(undefined1 *)((long)ppppppuVar3 + uVar2) = 0;
  FUN_10012e6f0(&local_68);
  ppppppuVar3 = (undefined8 ******)local_68;
  if (-1 < (long)uStack_58) {
    ppppppuVar3 = &local_68;
  }
  FUN_10010a18c(ppppppuVar3);
  ppppppuVar3 = (undefined8 ******)local_68;
  if (-1 < (long)uStack_58) {
    ppppppuVar3 = &local_68;
  }
  FUN_10052ba3c(ppppppuVar3,param_3,param_4,param_1);
  FUN_100101450(param_5 == 1,0);
  FUN_1001014c4(param_5 == 2);
  thunk_FUN_10052f7d0(3);
  if ((long)uStack_58 < 0) {
    operator_delete(local_68);
  }
  return;
}




void FUN_1001df6c0(void)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_10109c330();
  FUN_10002f320();
  FUN_1000307b8();
  thunk_FUN_10052f7d0(1);
  FUN_100101450(0,0);
  FUN_1001014c4(0);
  FUN_100101420();
  lVar1 = FUN_10016c2f0();
  if (*(int *)(lVar1 + 0x38) < 1) {
    return;
  }
  lVar1 = FUN_10016c2f0();
  if ((*(int *)(lVar1 + 0x38) != 7) && (lVar1 = FUN_10016c2f0(), *(int *)(lVar1 + 0x38) != 8)) {
    return;
  }
  uVar2 = FUN_10016c2f0();
  FUN_10016bd88(uVar2,1);
  return;
}




void FUN_1001df740(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10052bac0();
  operator_delete(pvVar1);
  return;
}




void FUN_1001df754(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




long FUN_1001df760(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *local_48 [2];
  char local_31;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar2 = (undefined8 *)FUN_10014f4a0();
  *puVar2 = &PTR_thunk_FUN_1001dfc14_101469428;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_10001549c(puVar2 + 7,"EquipedHat");
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  uVar3 = FUN_100131560();
  if ((uVar3 & 1) == 0) {
    local_30 = 0;
    uStack_28 = 0;
    FUN_10001549c(local_48,"hat");
    FUN_10001617c(&local_30,local_48);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    FUN_10001549c(local_48,"craftingmaterial");
    FUN_10001617c(&local_30,local_48);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    uVar4 = FUN_10015d3ec();
    FUN_10016426c(uVar4,&local_30);
    FUN_10001629c(&local_30,1);
  }
  FUN_1001df854(param_1);
  iVar1 = FUN_100131560();
  if (iVar1 != 0) {
    FUN_1001df9c8(param_1);
  }
  return param_1;
}




void FUN_1001dfc14(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001dfc14_101469428;
  FUN_1001dfca0();
  param_1[0x8e] = 0;
  if ((void *)param_1[0x8d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8d]);
    param_1[0x8d] = 0;
    param_1[0x8c] = 0;
  }
  if ((void *)param_1[0x8b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8b]);
    param_1[0x8b] = 0;
    param_1[0x8a] = 0;
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
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
  FUN_10014f51c(param_1);
  return;
}




void FUN_1001dfca0(long param_1)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x450);
  if (*(uint *)(param_1 + 0x450) != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x458);
      if (*(long *)(lVar3 + uVar4 * 8) != 0) {
        pvVar1 = (void *)thunk_FUN_1001e1884();
        operator_delete(pvVar1);
        lVar3 = *(long *)(param_1 + 0x458);
        uVar2 = (ulong)*(uint *)(param_1 + 0x450);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 0x458) != 0) {
    *(undefined4 *)(param_1 + 0x450) = 0;
  }
  return;
}




void thunk_FUN_1001dfc14(void)

{
  FUN_1001dfc14();
  return;
}




void FUN_1001dfd04(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001dfc14();
  operator_delete(pvVar1);
  return;
}




long FUN_1001dfd18(long param_1,byte *param_2)

{
  long lVar1;
  byte *pbVar2;
  size_t sVar3;
  uint uVar4;
  byte bVar5;
  size_t sVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar4 = *(uint *)(param_1 + 0x450);
  pbVar2 = *(byte **)param_2;
  sVar6 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar2 = param_2;
    sVar6 = (ulong)param_2[0x17];
  }
  if (uVar4 != 0) {
    uVar11 = 0;
    lVar12 = *(long *)(param_1 + 0x458);
    do {
      lVar10 = *(long *)(lVar12 + uVar11 * 8);
      bVar5 = *(byte *)(lVar10 + 0x37);
      sVar3 = *(size_t *)(lVar10 + 0x28);
      if (-1 < (char)bVar5) {
        sVar3 = (ulong)bVar5;
      }
      if (sVar3 == sVar6) {
        if ((char)bVar5 < '\0') {
          if (sVar6 == 0) {
            return lVar10;
          }
          iVar8 = _memcmp(*(void **)(lVar10 + 0x20),pbVar2,sVar6);
          if (iVar8 == 0) {
            return lVar10;
          }
        }
        else {
          if (sVar6 == 0) {
            return lVar10;
          }
          if ((uint)*pbVar2 == ((uint)*(void **)(lVar10 + 0x20) & 0xff)) {
            lVar9 = 0;
            do {
              if ((ulong)bVar5 - 1 == lVar9) {
                return lVar10;
              }
              lVar1 = lVar10 + lVar9;
              lVar7 = lVar9 + 1;
              lVar9 = lVar9 + 1;
            } while (*(byte *)(lVar1 + 0x21) == pbVar2[lVar7]);
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar4);
  }
  return 0;
}




void FUN_1001dfe10(long param_1,ulong *param_2)

{
  size_t sVar1;
  ulong *puVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  long *plVar6;
  
  pcVar4 = (char *)FUN_1001dfeac();
  sVar5 = _strlen(pcVar4);
  sVar1 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    sVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if ((sVar5 == sVar1) &&
     (iVar3 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,(ulong)pcVar4),
     iVar3 == 0)) {
    return;
  }
  plVar6 = (long *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x4f) < '\0') {
    plVar6 = (long *)*plVar6;
  }
  puVar2 = (ulong *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    puVar2 = param_2;
  }
  FUN_10012c750(plVar6,puVar2);
  return;
}




long FUN_1001dfeac(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x4f) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  puVar1 = DAT_101d91198;
  if (-1 < DAT_101d911a8._7_1_) {
    puVar1 = &DAT_101d91198;
  }
  FUN_10012caa0(plVar2,param_1 + 0x50,0x400,puVar1);
  return param_1 + 0x50;
}




undefined8 * FUN_1001dff04(long param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  size_t sVar4;
  uint uVar5;
  byte bVar6;
  size_t sVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  
  uVar5 = *(uint *)(param_1 + 0x460);
  pbVar3 = *(byte **)param_2;
  sVar7 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar3 = param_2;
    sVar7 = (ulong)param_2[0x17];
  }
  if (uVar5 != 0) {
    uVar11 = 0;
    lVar12 = *(long *)(param_1 + 0x468);
    do {
      puVar10 = *(undefined8 **)(lVar12 + uVar11 * 8);
      bVar6 = *(byte *)((long)puVar10 + 0x17);
      sVar4 = puVar10[1];
      if (-1 < (char)bVar6) {
        sVar4 = (ulong)bVar6;
      }
      if (sVar4 == sVar7) {
        if ((char)bVar6 < '\0') {
          if (sVar7 == 0) {
            return puVar10;
          }
          iVar8 = _memcmp((void *)*puVar10,pbVar3,sVar7);
          if (iVar8 == 0) {
            return puVar10;
          }
        }
        else {
          if (sVar7 == 0) {
            return puVar10;
          }
          if ((uint)*pbVar3 == ((uint)(void *)*puVar10 & 0xff)) {
            uVar9 = 1;
            do {
              if (bVar6 == uVar9) {
                return puVar10;
              }
              pbVar1 = (byte *)((long)puVar10 + uVar9);
              pbVar2 = pbVar3 + uVar9;
              uVar9 = uVar9 + 1;
            } while (*pbVar1 == *pbVar2);
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar5);
  }
  return (undefined8 *)0x0;
}




void FUN_1001dffe4(long *param_1,string *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  uint uVar5;
  string sVar6;
  byte bVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  string *psVar12;
  string *psVar13;
  long lVar14;
  string sVar15;
  ulong uVar16;
  size_t sVar17;
  long lVar18;
  ulong uVar19;
  size_t sVar20;
  size_t sVar21;
  undefined8 local_150;
  undefined8 uStack_148;
  void *local_140;
  undefined8 uStack_138;
  long local_130;
  undefined2 local_128;
  undefined **local_118 [5];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar5 = *(uint *)(param_1 + 0x8a);
  if (uVar5 != 0) {
    uVar16 = 0;
    lVar14 = param_1[0x8b];
    do {
      lVar18 = *(long *)(lVar14 + uVar16 * 8);
      if (lVar18 == 0) goto LAB_1001e0174;
      puVar1 = (undefined8 *)(lVar18 + 0x20);
      bVar7 = *(byte *)(lVar18 + 0x37);
      uVar19 = (ulong)bVar7;
      if (1 < *(uint *)(lVar18 + 0x98)) {
        sVar20 = *(size_t *)(lVar18 + 0x28);
        sVar15 = param_2[0x17];
        sVar21 = (size_t)(byte)sVar15;
        sVar17 = *(size_t *)(param_2 + 8);
        goto LAB_1001e00d0;
      }
      sVar20 = *(size_t *)(lVar18 + 0x28);
      sVar2 = sVar20;
      if (-1 < (char)bVar7) {
        sVar2 = uVar19;
      }
      sVar15 = param_2[0x17];
      sVar21 = (size_t)(byte)sVar15;
      sVar17 = *(size_t *)(param_2 + 8);
      sVar3 = sVar17;
      if (-1 < (char)sVar15) {
        sVar3 = sVar21;
      }
      if (sVar2 == sVar3) {
        puVar4 = (void *)*puVar1;
        if (-1 < (char)bVar7) {
          puVar4 = puVar1;
        }
        psVar13 = *(string **)param_2;
        if (-1 < (char)sVar15) {
          psVar13 = param_2;
        }
        if ((char)bVar7 < '\0') {
          if ((sVar2 == 0) || (iVar8 = _memcmp(puVar4,psVar13,sVar2), iVar8 == 0))
          goto LAB_1001e00d0;
          goto LAB_1001e016c;
        }
        if (sVar2 != 0) {
          if ((uint)(byte)*psVar13 == ((uint)(void *)*puVar1 & 0xff)) {
            psVar12 = (string *)(lVar18 + 0x21);
            uVar11 = uVar19;
            do {
              uVar11 = uVar11 - 1;
              psVar13 = psVar13 + 1;
              if (uVar11 == 0) goto LAB_1001e00d0;
              sVar6 = *psVar12;
              psVar12 = psVar12 + 1;
            } while (sVar6 == *psVar13);
          }
          goto LAB_1001e016c;
        }
LAB_1001e00d0:
        if (-1 < (char)bVar7) {
          sVar20 = uVar19;
        }
        if (-1 < (char)sVar15) {
          sVar17 = sVar21;
        }
        if (sVar20 == sVar17) {
          puVar4 = (undefined8 *)*puVar1;
          if (-1 < (char)bVar7) {
            puVar4 = puVar1;
          }
          psVar13 = *(string **)param_2;
          if (-1 < (char)sVar15) {
            psVar13 = param_2;
          }
          if ((char)bVar7 < '\0') {
            if ((sVar20 == 0) || (iVar8 = _memcmp(puVar4,psVar13,sVar20), iVar8 == 0))
            goto LAB_1001e0154;
            goto LAB_1001e0174;
          }
          if (sVar20 != 0) {
            if ((uint)(byte)*psVar13 == ((uint)(undefined8 *)*puVar1 & 0xff)) {
              psVar12 = (string *)(lVar18 + 0x21);
              do {
                uVar19 = uVar19 - 1;
                psVar13 = psVar13 + 1;
                if (uVar19 == 0) goto LAB_1001e0154;
                sVar15 = *psVar12;
                psVar12 = psVar12 + 1;
              } while (sVar15 == *psVar13);
            }
            goto LAB_1001e0174;
          }
LAB_1001e0154:
          uVar10 = 1;
          goto LAB_1001e0170;
        }
      }
      else {
LAB_1001e016c:
        uVar10 = 2;
LAB_1001e0170:
        *(undefined4 *)(lVar18 + 0x98) = uVar10;
      }
LAB_1001e0174:
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar5);
  }
  if ((int)param_1[3] != 0) {
    lVar14 = param_1[4];
    do {
      if (*(code **)(lVar14 + 8) == (code *)0x0) {
        (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x10));
      }
      else {
        (**(code **)(lVar14 + 8))();
      }
      lVar14 = lVar14 + 0x20;
    } while (lVar14 != param_1[4] + (ulong)*(uint *)(param_1 + 3) * 0x20);
  }
  uVar16 = FUN_100131560();
  if ((uVar16 & 1) == 0) {
    uVar9 = FUN_10015d3ec();
    FUN_100166c40(uVar9,param_2);
    return;
  }
  FUN_1004f1580(local_118);
  local_118[0] = &PTR_FUN_10145c040;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_130 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  local_128 = 0x101;
  std::string::operator=((string *)&local_140,param_2);
  FUN_1001e0318(&uStack_e0,&local_150);
  (**(code **)(*param_1 + 0x50))(param_1,local_118);
  if (local_130 < 0) {
    operator_delete(local_140);
  }
  FUN_10015c800(&local_150,1);
  local_118[0] = &PTR_FUN_10145c040;
  FUN_10015cb3c(&local_80,1);
  FUN_10015cbc0(&local_90,1);
  FUN_10015cbc0(&local_a0,1);
  FUN_10015cbc0(&local_b0,1);
  FUN_10015cbc0(&local_c0,1);
  FUN_10015cbc0(&local_d0,1);
  FUN_10015cc34(&uStack_e0,1);
  FUN_10015ccb8(&local_f0,1);
  FUN_1004f15a8(local_118);
  return;
}

