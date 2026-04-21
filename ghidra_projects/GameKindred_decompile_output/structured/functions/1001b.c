// functions/1001b — 333 functions
#include "GameKindred.h"




long * FUN_1001b0004(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  puVar2 = puVar1 + 0x11;
  *puVar1 = &PTR_FUN_101463a58;
  thunk_FUN_1006421a8(puVar2);
  lVar3 = 0x110;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar3);
    lVar3 = lVar3 + 0x130;
  } while (lVar3 != 0x370);
  *(byte *)(param_1 + 0x6e) = *(byte *)(param_1 + 0x6e) & 0xf8 | 4;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_100642bd8(puVar2,param_1 + 0x22,1);
  FUN_100642bd8(puVar2,param_1 + 0x48,1);
  *(uint *)((long)param_1 + 0x194) = *(uint *)((long)param_1 + 0x194) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x2c4) = *(uint *)((long)param_1 + 0x2c4) & 0xffffffbf;
  return param_1;
}




long * thunk_FUN_1001b0004(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  puVar2 = puVar1 + 0x11;
  *puVar1 = &PTR_FUN_101463a58;
  thunk_FUN_1006421a8(puVar2);
  lVar3 = 0x110;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar3);
    lVar3 = lVar3 + 0x130;
  } while (lVar3 != 0x370);
  *(byte *)(param_1 + 0x6e) = *(byte *)(param_1 + 0x6e) & 0xf8 | 4;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_100642bd8(puVar2,param_1 + 0x22,1);
  FUN_100642bd8(puVar2,param_1 + 0x48,1);
  *(uint *)((long)param_1 + 0x194) = *(uint *)((long)param_1 + 0x194) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x2c4) = *(uint *)((long)param_1 + 0x2c4) & 0xffffffbf;
  return param_1;
}




void FUN_1001b00c8(long param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(float *)(param_1 + 0x50) == *param_2) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x54)) && !NAN(param_2[1]))) {
    bVar1 = *(float *)(param_1 + 0x54) == param_2[1];
  }
  if (!bVar1) {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)param_2;
    FUN_1000200a0(param_1);
  }
  (**(code **)(*(long *)(param_1 + 0x110) + 0x28))(param_1 + 0x110,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001001b012c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x240) + 0x28))(param_1 + 0x240,param_2);
  return;
}




void FUN_1001b0130(long param_1)

{
  param_1 = param_1 + ((ulong)*(byte *)(param_1 + 0x370) & 1) * 0x130;
                    /* WARNING: Could not recover jumptable at 0x0001001b014c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x110) + 0x48))(param_1 + 0x110);
  return;
}




void FUN_1001b0150(undefined8 param_1,long param_2)

{
  (**(code **)(*(long *)(param_2 + 0x110) + 0x40))(param_2 + 0x110);
                    /* WARNING: Could not recover jumptable at 0x0001001b0194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x240) + 0x40))(param_1,param_2 + 0x240);
  return;
}




void FUN_1001b0198(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = (ulong)*(byte *)(param_1 + 0x370) & 1;
  uVar2 = (uint)uVar7 ^ 1;
  *(byte *)(param_1 + 0x370) = (byte)uVar2 | *(byte *)(param_1 + 0x370) & 0xfe;
  lVar5 = param_1 + uVar7 * 0x130;
  lVar1 = lVar5 + 0x110;
  uVar4 = FUN_100655b6c(lVar5 + 0x1e0);
  iVar3 = FUN_1004e3654(uVar4,&DAT_101d91650);
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar4 = FUN_100655b6c(param_1 + (ulong)uVar2 * 0x130 + 0x1e0);
    uVar7 = FUN_1004e3654(uVar4,&DAT_101d91650);
  }
  lVar6 = param_1 + (ulong)uVar2 * 0x130;
  lVar5 = lVar6 + 0x110;
  (**(code **)(*(long *)(lVar6 + 0x110) + 0x138))(lVar5,param_2);
  if ((uVar7 & 1) != 0) {
switchD_1001b026c_caseD_0:
    FUN_1001b02d8(lVar1,lVar5);
    return;
  }
  if (param_3 == 0) {
    param_3 = *(byte *)(param_1 + 0x370) >> 1 & 3;
  }
  switch(param_3) {
  case 0:
  case 1:
    goto switchD_1001b026c_caseD_0;
  case 2:
    FUN_1001b0360(lVar1,lVar5);
    return;
  case 3:
    FUN_1001b042c(lVar1,lVar5);
    return;
  default:
    return;
  }
}




void FUN_1001b02d8(long param_1,long param_2)

{
  uint uVar1;
  
  FUN_100642324();
  uVar1 = *(uint *)(param_1 + 0x84);
  *(uint *)(param_1 + 0x84) = uVar1 & 0xfffffffb;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = uVar1 & 0xffff807b;
    FUN_1000200a0(param_1);
  }
  FUN_100642324(param_2);
  uVar1 = *(uint *)(param_2 + 0x84);
  *(uint *)(param_2 + 0x84) = uVar1 | 4;
  if ((~uVar1 & 0x7f80) == 0) {
    return;
  }
  *(uint *)(param_2 + 0x84) = uVar1 | 0x7f84;
  FUN_1000200a0(param_2);
  return;
}




void FUN_1001b0360(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  FUN_100642324();
  uVar2 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(0x3e19999a,uVar2);
  FUN_100047300();
  FUN_100642b7c(param_1,uVar2);
  FUN_100642324(param_2);
  uVar1 = *(uint *)(param_2 + 0x84);
  *(uint *)(param_2 + 0x84) = uVar1 | 4;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x84) = uVar1 & 0xffff807f | 4;
    FUN_1000200a0(param_2);
  }
  uVar2 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(0x3e19999a,uVar2);
  FUN_100642b7c(param_2,uVar2);
  return;
}




void FUN_1001b042c(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  
  FUN_100642324();
  uVar2 = FUN_10001f0d8();
  local_58 = 0x42c80000;
  FUN_10063f984(uVar2,&local_58);
  FUN_10063f0e8(0x3e800000,uVar2);
  uVar3 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(0x3e800000,uVar3);
  uVar3 = FUN_10001f4d4();
  FUN_10063f2a4(uVar3,uVar2);
  FUN_100047300();
  FUN_100642b7c(param_1,uVar3);
  FUN_100642324(param_2);
  uVar1 = *(uint *)(param_2 + 0x84);
  *(uint *)(param_2 + 0x84) = uVar1 | 4;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x84) = uVar1 & 0xffff807f | 4;
    FUN_1000200a0(param_2);
  }
  if ((*(float *)(param_2 + 0x40) != -100.0) || (*(float *)(param_2 + 0x44) != 0.0)) {
    *(undefined8 *)(param_2 + 0x40) = 0xc2c80000;
    FUN_1000200a0(param_2);
  }
  uVar2 = FUN_10001f0d8();
  local_58 = 0x42c80000;
  FUN_10063f984(uVar2,&local_58);
  FUN_10063f0e8(0x3e800000,uVar2);
  FUN_10063f130(uVar2,FUN_1000657e0);
  uVar3 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(0x3e800000,uVar3);
  uVar3 = FUN_10001f4d4();
  FUN_10063f2a4(uVar3,uVar2);
  FUN_100642b7c(param_2,uVar3);
  return;
}




void FUN_1001b05ac(long param_1,undefined8 param_2)

{
  FUN_100651460(param_1 + 0x110);
  FUN_100651460(param_1 + 0x240,param_2);
  return;
}




void FUN_1001b05dc(long param_1,undefined8 param_2)

{
  FUN_100651038(param_1 + 0x110);
  FUN_100651038(param_1 + 0x240,param_2);
  return;
}




void FUN_1001b060c(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100651594(param_1 + 0x110);
  FUN_100651594(param_1 + 0x240,param_2,param_3);
  return;
}




void FUN_1001b064c(long param_1,undefined8 param_2)

{
  FUN_10065165c(param_1 + 0x110);
  FUN_10065165c(param_1 + 0x240,param_2);
  return;
}




void FUN_1001b067c(long param_1,undefined8 param_2)

{
  FUN_100651700(param_1 + 0x110);
  FUN_100651700(param_1 + 0x240,param_2);
  return;
}




void FUN_1001b06ac(undefined8 param_1,long param_2)

{
  FUN_100651708(param_2 + 0x110,1);
  FUN_100651708(param_1,param_2 + 0x240,1);
  return;
}




void FUN_1001b06ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10065179c(param_1,param_2,0x3f800000,param_3 + 0x110);
  FUN_10065179c(param_1,param_2,0x3f800000,param_3 + 0x240);
  return;
}




void FUN_1001b0734(long param_1,undefined8 param_2)

{
  FUN_1006518fc(param_1 + 0x110);
  FUN_1006518fc(param_1 + 0x240,param_2);
  return;
}




void FUN_1001b0764(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x370) = *(byte *)(param_1 + 0x370) & 0xf9 | (param_2 & 3) << 1;
  return;
}




void FUN_1001b077c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_101463a58;
  lVar1 = 0x240;
  do {
    thunk_FUN_100651068((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != -0x20);
  FUN_10064230c(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_1001b07c8(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_101463a58;
  lVar2 = 0x240;
  do {
    thunk_FUN_100651068((long)param_1 + lVar2);
    lVar2 = lVar2 + -0x130;
  } while (lVar2 != -0x20);
  FUN_10064230c(param_1 + 0x11);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_1001b0818(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  float fVar8;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  
  puVar7 = (undefined8 *)FUN_10064e20c();
  *puVar7 = &PTR_thunk_FUN_1001b0af4_101463b58;
  puVar7 = puVar7 + 0x17;
  FUN_10064fd54(puVar7,0);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064e2bc_10144caa0;
  plVar1 = param_1 + 0x30;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x47;
  thunk_FUN_1001bd4e0(plVar2,0);
  plVar3 = param_1 + 0xdd;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x103;
  thunk_FUN_100181304(plVar4,0);
  plVar5 = param_1 + 0x3ba;
  thunk_FUN_100181304(plVar5,0);
  FUN_1006421a8(param_1 + 0x671);
  param_1[0x671] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x683] = 0;
  param_1[0x682] = 0;
  param_1[0x685] = 0;
  param_1[0x684] = 0;
  *(undefined8 *)((long)param_1 + 0x342d) = 0;
  *(undefined2 *)((long)param_1 + 0x3435) = 0x101;
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  FUN_100642bd8(puVar7,plVar4,1);
  FUN_100642bd8(puVar7,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(puVar7,plVar5,1);
  FUN_100181a38(0x42000000,0x42c80000,0x42c80000,plVar4,"white_background",&DAT_10115a168);
  fVar8 = (float)FUN_10064259c(plVar4);
  FUN_10064e47c(fVar8 * 0.6,0x40800000,param_1 + 0x20c);
  FUN_1001b495c(0x3dcccccd,plVar4);
  FUN_100181bf8(0x3f000000,plVar4,&DAT_10115a168);
  FUN_100181b80(plVar4,1);
  uVar6 = DAT_101d91884;
  local_78 = DAT_101d91884;
  local_a0 = FUN_1001b0ae8;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0xffffffff;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x104,&local_a0);
  FUN_10064e47c(0x43480000,(int)param_1[0x3b8],plVar2);
  *(uint *)((long)param_1 + 0x4c4) = *(uint *)((long)param_1 + 0x4c4) & 0xfffffffb;
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  FUN_100181a38(0x42000000,0x42c80000,0x42c80000,plVar5,"generic_plus",&DAT_10115a168);
  FUN_1001b495c(0x3dcccccd,plVar5);
  FUN_100181bf8(0x3f000000,plVar5,&DAT_10115a168);
  FUN_100181b80(plVar5,1);
  local_78 = uVar6;
  local_a0 = FUN_1001b0ae8;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 1;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x3bb,&local_a0);
  return param_1;
}




void FUN_1001b0ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1001b11ac(param_1,param_2,param_5);
  return;
}




long * thunk_FUN_1001b0818(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  float fVar8;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar7 = (undefined8 *)FUN_10064e20c();
  *puVar7 = &PTR_thunk_FUN_1001b0af4_101463b58;
  puVar7 = puVar7 + 0x17;
  FUN_10064fd54(puVar7,0);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064e2bc_10144caa0;
  plVar1 = param_1 + 0x30;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x47;
  thunk_FUN_1001bd4e0(plVar2,0);
  plVar3 = param_1 + 0xdd;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x103;
  thunk_FUN_100181304(plVar4,0);
  plVar5 = param_1 + 0x3ba;
  thunk_FUN_100181304(plVar5,0);
  FUN_1006421a8(param_1 + 0x671);
  param_1[0x671] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x683] = 0;
  param_1[0x682] = 0;
  param_1[0x685] = 0;
  param_1[0x684] = 0;
  *(undefined8 *)((long)param_1 + 0x342d) = 0;
  *(undefined2 *)((long)param_1 + 0x3435) = 0x101;
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  FUN_100642bd8(puVar7,plVar4,1);
  FUN_100642bd8(puVar7,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(puVar7,plVar5,1);
  FUN_100181a38(0x42000000,0x42c80000,0x42c80000,plVar4,"white_background",&DAT_10115a168);
  fVar8 = (float)FUN_10064259c(plVar4);
  FUN_10064e47c(fVar8 * 0.6,0x40800000,param_1 + 0x20c);
  FUN_1001b495c(0x3dcccccd,plVar4);
  FUN_100181bf8(0x3f000000,plVar4,&DAT_10115a168);
  FUN_100181b80(plVar4,1);
  uVar6 = DAT_101d91884;
  uStack_78 = DAT_101d91884;
  pcStack_a0 = FUN_1001b0ae8;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0xffffffff;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x104,&pcStack_a0);
  FUN_10064e47c(0x43480000,(int)param_1[0x3b8],plVar2);
  *(uint *)((long)param_1 + 0x4c4) = *(uint *)((long)param_1 + 0x4c4) & 0xfffffffb;
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  FUN_100181a38(0x42000000,0x42c80000,0x42c80000,plVar5,"generic_plus",&DAT_10115a168);
  FUN_1001b495c(0x3dcccccd,plVar5);
  FUN_100181bf8(0x3f000000,plVar5,&DAT_10115a168);
  FUN_100181b80(plVar5,1);
  uStack_78 = uVar6;
  pcStack_a0 = FUN_1001b0ae8;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 1;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x3bb,&pcStack_a0);
  return param_1;
}




void FUN_1001b0af4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001b0af4_101463b58;
  FUN_1001b0c0c();
  FUN_10001629c(param_1 + 0x684,1);
  FUN_10010b1a8(param_1 + 0x682,1);
  FUN_10064221c(param_1 + 0x671);
  FUN_10003bd40(param_1 + 0x3ba);
  FUN_10003bd40(param_1 + 0x103);
  thunk_FUN_100651068(param_1 + 0xdd);
  param_1[0x47] = &PTR_FUN_101464e50;
  param_1[0xb2] = &PTR_FUN_1014a6db0;
  param_1[0xc9] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xcc);
  FUN_10064e2bc(param_1 + 0xb2);
  param_1[0x88] = &PTR_FUN_1014a6db0;
  param_1[0x9f] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xa2);
  FUN_10064e2bc(param_1 + 0x88);
  param_1[0x5e] = &PTR_FUN_1014a6db0;
  param_1[0x75] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x78);
  FUN_10064e2bc(param_1 + 0x5e);
  FUN_10064e2bc(param_1 + 0x47);
  thunk_FUN_10064e2bc(param_1 + 0x30);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001b0c0c(long param_1)

{
  FUN_10010b1a8(param_1 + 0x3410,0);
  FUN_10001629c(param_1 + 0x3420,0);
  *(undefined4 *)(param_1 + 0x3430) = 0;
  FUN_1006513c0(param_1 + 0x6e8,&DAT_101d91650);
  return;
}




void thunk_FUN_1001b0af4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001b0af4_101463b58;
  FUN_1001b0c0c();
  FUN_10001629c(param_1 + 0x684,1);
  FUN_10010b1a8(param_1 + 0x682,1);
  FUN_10064221c(param_1 + 0x671);
  FUN_10003bd40(param_1 + 0x3ba);
  FUN_10003bd40(param_1 + 0x103);
  thunk_FUN_100651068(param_1 + 0xdd);
  param_1[0x47] = &PTR_FUN_101464e50;
  param_1[0xb2] = &PTR_FUN_1014a6db0;
  param_1[0xc9] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xcc);
  FUN_10064e2bc(param_1 + 0xb2);
  param_1[0x88] = &PTR_FUN_1014a6db0;
  param_1[0x9f] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xa2);
  FUN_10064e2bc(param_1 + 0x88);
  param_1[0x5e] = &PTR_FUN_1014a6db0;
  param_1[0x75] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x78);
  FUN_10064e2bc(param_1 + 0x5e);
  FUN_10064e2bc(param_1 + 0x47);
  thunk_FUN_10064e2bc(param_1 + 0x30);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001b0c5c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001b0af4();
  operator_delete(pvVar1);
  return;
}




void FUN_1001b0c70(undefined1 param_1 [16],long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  *(undefined1 *)(param_2 + 0x3434) = 1;
  *(undefined1 *)(param_2 + 0x3435) = param_5;
  FUN_10064e47c(param_1,*(undefined4 *)(param_2 + 0x1dc0),param_2 + 0x238);
  FUN_1001b0d90(param_2);
  FUN_1001b0d08(param_2,param_3,param_4,0);
  FUN_1001b0d90(param_2);
  return;
}




void FUN_1001b0cdc(undefined1 param_1 [16],long param_2)

{
  FUN_10064e47c(param_1,*(undefined4 *)(param_2 + 0x1dc0),param_2 + 0x238);
  FUN_1001b0d90(param_2);
  return;
}




void FUN_1001b0d08(long param_1,int *param_2,undefined8 param_3,ulong param_4)

{
  if ((*(char *)(param_1 + 0x3434) != '\0') && (FUN_1001b0c0c(), *param_2 != 0)) {
    FUN_100111b3c(param_1 + 0x3410,param_2);
    FUN_100169740(param_1 + 0x3420,param_3);
    if ((param_4 & 1) == 0) {
      FUN_1001b0eb4(param_1,0,0);
      return;
    }
  }
  return;
}




void FUN_1001b0d90(long param_1)

{
  long lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 local_40;
  
  lVar1 = param_1 + 0x238;
  fVar3 = (float)FUN_10064e3cc(lVar1);
  fVar4 = *(float *)(param_1 + 0x278);
  if ((fVar4 != fVar3 * 0.5) || (fVar6 = *(float *)(param_1 + 0x27c), fVar6 != 0.0)) {
    *(float *)(param_1 + 0x278) = fVar3 * 0.5;
    *(undefined4 *)(param_1 + 0x27c) = 0;
    FUN_1000200a0(lVar1);
    fVar4 = *(float *)(param_1 + 0x278);
    fVar6 = *(float *)(param_1 + 0x27c);
  }
  local_40 = &DAT_3f0000003f000000;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x728) == fVar4) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x72c)) && !NAN(fVar6))) {
    bVar2 = *(float *)(param_1 + 0x72c) == fVar6;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x728) = fVar4;
    *(float *)(param_1 + 0x72c) = fVar6;
    FUN_1000200a0(param_1 + 0x6e8);
  }
  (**(code **)(*(long *)(param_1 + 0x6e8) + 0x28))(param_1 + 0x6e8,&local_40);
  uVar5 = FUN_10064e3cc(lVar1);
  local_40 = (undefined1 *)CONCAT44(fVar6,uVar5);
  FUN_10064e48c(param_1 + 0x180,&local_40);
  FUN_1001b115c(param_1);
  lVar1 = param_1 + 0xb8;
  uVar7 = 0;
  FUN_10064fc74(0,0,0x41200000,&local_40);
  FUN_100650064(lVar1,&local_40);
  (**(code **)(*(long *)(param_1 + 0xb8) + 0x90))(lVar1);
  uVar5 = FUN_10064e3cc(lVar1);
  local_40 = (undefined1 *)CONCAT44(uVar7,uVar5);
  FUN_10064e48c(param_1,&local_40);
  return;
}




bool FUN_1001b0eb4(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [32];
  
  uVar1 = *(uint *)(param_1 + 0x3410);
  if (param_2 < uVar1) {
    *(uint *)(param_1 + 0x3430) = param_2;
    FUN_1006513c0(param_1 + 0x6e8,*(long *)(param_1 + 0x3418) + (ulong)param_2 * 0x10);
    FUN_1001b115c(param_1);
    if ((param_3 & 1) == 0) {
      uVar2 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
      FUN_100644aec(auStack_50,uVar2,*(undefined4 *)(param_1 + 0x3430));
      FUN_100644c34(param_1,auStack_50,1);
    }
  }
  return param_2 < uVar1;
}




undefined8 FUN_1001b0f48(long param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x3430) != param_2 || param_3 != 0) {
    uVar1 = FUN_1001b0eb4(param_1,param_2,param_4);
    return uVar1;
  }
  return 1;
}




undefined8 FUN_1001b0f68(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1001b0fd4();
  if ((-1 < (int)(uint)uVar1) && ((uint)uVar1 < *(uint *)(param_1 + 0x684))) {
                    /* WARNING: Could not recover jumptable at 0x0001001b0fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x140))(param_1,uVar1,param_3,param_4);
    return uVar1;
  }
  return 0;
}




ulong FUN_1001b0fd4(long param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  size_t sVar6;
  size_t sVar7;
  size_t sVar8;
  int iVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  
  uVar3 = *(uint *)(param_1 + 0x3420);
  if (uVar3 != 0) {
    uVar11 = 0;
    bVar4 = param_2[0x17];
    pcVar2 = *(char **)param_2;
    sVar7 = *(size_t *)(param_2 + 8);
    if (-1 < (char)bVar4) {
      pcVar2 = param_2;
      sVar7 = (ulong)bVar4;
    }
    lVar12 = *(long *)(param_1 + 0x3428);
    do {
      pcVar10 = (char *)(lVar12 + uVar11 * 0x18);
      bVar5 = pcVar10[0x17];
      sVar6 = *(size_t *)(pcVar10 + 8);
      if (-1 < (char)bVar5) {
        sVar6 = (ulong)bVar5;
      }
      if (sVar7 == sVar6) {
        pcVar1 = *(char **)pcVar10;
        if (-1 < (char)bVar5) {
          pcVar1 = pcVar10;
        }
        sVar6 = (ulong)bVar4;
        pcVar10 = param_2;
        sVar8 = sVar7;
        if ((char)bVar4 < '\0') {
          if (sVar7 == 0) {
            return uVar11;
          }
          iVar9 = _memcmp(pcVar2,pcVar1,sVar7);
          if (iVar9 == 0) {
            return uVar11;
          }
        }
        else {
          while( true ) {
            if (sVar8 == 0) {
              return uVar11;
            }
            if (*pcVar10 != *pcVar1) break;
            pcVar1 = pcVar1 + 1;
            sVar6 = sVar6 - 1;
            pcVar10 = pcVar10 + 1;
            sVar8 = sVar6;
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar3);
  }
  return 0xffffffff;
}




undefined8 * FUN_1001b10bc(long param_1)

{
  if ((*(uint *)(param_1 + 0x3420) != 0) &&
     (*(uint *)(param_1 + 0x3430) < *(uint *)(param_1 + 0x3420))) {
    return (undefined8 *)(*(long *)(param_1 + 0x3428) + (ulong)*(uint *)(param_1 + 0x3430) * 0x18);
  }
  return &DAT_101d91198;
}




void FUN_1001b10ec(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  FUN_1001bdb78(param_3 + 0x238,&DAT_10115a164);
  FUN_1001bdb04(param_2,param_3 + 0x238,&DAT_10115a168);
  return;
}




void FUN_1001b1134(long param_1)

{
  FUN_100651038(param_1 + 0x6e8);
  FUN_1001b115c(param_1);
  return;
}




void FUN_1001b115c(long param_1)

{
  float fVar1;
  
  if (*(char *)(param_1 + 0x3435) == '\0') {
    fVar1 = -1.0;
  }
  else {
    fVar1 = (float)FUN_10064e3cc(param_1 + 0x238);
    fVar1 = fVar1 + -52.0;
  }
  FUN_10065179c(fVar1,0,0x3f800000,param_1 + 0x6e8);
  return;
}




void FUN_1001b11ac(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x3430) + param_3;
  if (*(char *)(param_1 + 0x3436) == '\0') {
    if ((int)uVar1 < 0) {
      return;
    }
    uVar2 = *(uint *)(param_1 + 0x3410);
    if (uVar2 <= uVar1) {
      return;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x3410);
    if ((int)uVar1 < 0) {
      uVar1 = uVar2 - 1;
      goto LAB_1001b11e8;
    }
  }
  if (uVar2 <= uVar1) {
    uVar1 = 0;
  }
LAB_1001b11e8:
  if (uVar1 == *(uint *)(param_1 + 0x3430)) {
    return;
  }
  FUN_1001b0eb4(param_1,uVar1,0);
  return;
}




void FUN_1001b11fc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_1001b1228_101463cb8;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  *(undefined4 *)(puVar1 + 0x19) = 0xffffffff;
  return;
}




void FUN_1001b1228(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001b1228_101463cb8;
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1001b1228(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001b1228_101463cb8;
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001b1268(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001b1228();
  operator_delete(pvVar1);
  return;
}




int FUN_1001b127c(undefined1 param_1 [16],undefined4 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar1 = (long *)FUN_1001b16e8(param_3,1);
  (**(code **)(*plVar1 + 0x78))(plVar1,param_4,1);
  *(uint *)((long)plVar1 + 0x84) = *(uint *)((long)plVar1 + 0x84) & 0xfffffffb;
  uVar2 = (**(code **)(*param_3 + 0x48))(param_3);
  local_40 = (long *)CONCAT44(param_2,uVar2);
  FUN_10064e48c(param_4,&local_40);
  local_40 = plVar1;
  uStack_38 = param_4;
  FUN_1001b1310(param_3 + 0x17,&local_40);
  return (int)param_3[0x17] + -1;
}




void FUN_1001b1310(uint *param_1,undefined8 *param_2)

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
    FUN_1001b175c(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_1001b1390(long *param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ushort uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 local_60;
  undefined4 uStack_5c;
  
  uVar1 = *(uint *)(param_1 + 0x19);
  if (uVar1 != param_2) {
    uVar7 = 0;
    uVar2 = 0x3dcccccd;
    if (param_3 == 0) {
      uVar2 = 0;
    }
    if (-1 < (int)uVar1) {
      FUN_100642324(*(undefined8 *)(param_1[0x18] + (ulong)uVar1 * 0x10));
      uVar7 = uVar2;
      uVar3 = FUN_100640840(0,FUN_10001f4ac);
      lVar6 = DAT_101dbd2f8;
      uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
      if ((ulong)uVar5 != 0xffff) {
        if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *(ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
        }
        *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
        *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
        puVar4 = (undefined8 *)FUN_10063ee9c();
        *puVar4 = &PTR_thunk_FUN_10063eeb4_1014a5338;
        *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
      }
      FUN_100642b7c(*(undefined8 *)(param_1[0x18] + (ulong)*(uint *)(param_1 + 0x19) * 0x10),uVar3);
      FUN_100644aec(&local_60,DAT_101d918a8,0);
      FUN_100644c34(*(undefined8 *)(param_1[0x18] + (ulong)*(uint *)(param_1 + 0x19) * 0x10 + 8),
                    &local_60,0);
    }
    *(uint *)(param_1 + 0x19) = param_2;
    uVar3 = *(undefined8 *)(param_1[0x18] + (ulong)param_2 * 0x10 + 8);
    local_60 = (**(code **)(*param_1 + 0x48))(param_1);
    uStack_5c = uVar7;
    FUN_10064e48c(uVar3,&local_60);
    FUN_100642324(*(undefined8 *)(param_1[0x18] + (ulong)*(uint *)(param_1 + 0x19) * 0x10));
    lVar6 = *(long *)(param_1[0x18] + (ulong)*(uint *)(param_1 + 0x19) * 0x10);
    *(uint *)(lVar6 + 0x84) = *(uint *)(lVar6 + 0x84) | 4;
    lVar6 = *(long *)(param_1[0x18] + (ulong)*(uint *)(param_1 + 0x19) * 0x10);
    uVar1 = *(uint *)(lVar6 + 0x84);
    if ((uVar1 & 0x7f80) != 0) {
      *(uint *)(lVar6 + 0x84) = uVar1 & 0xffff807f;
      FUN_1000200a0();
    }
    uVar3 = FUN_100640840(0x3f800000,uVar2,FUN_10001f4ac);
    FUN_100642b7c(*(undefined8 *)(param_1[0x18] + (ulong)*(uint *)(param_1 + 0x19) * 0x10),uVar3);
    FUN_100644aec(&local_60,DAT_101d918ac,0);
    FUN_100644c34(*(undefined8 *)(param_1[0x18] + (ulong)*(uint *)(param_1 + 0x19) * 0x10 + 8),
                  &local_60,0);
  }
  return;
}




ulong FUN_1001b15d4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  
  if (*(int *)(param_1 + 0xb8) == 0) {
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
    uVar4 = 0;
    lVar5 = 8;
    do {
      uVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0xc0) + lVar5) + 0x118))();
      fVar6 = (float)uVar4;
      if ((float)uVar4 <= (float)(uVar1 >> 0x20)) {
        fVar6 = (float)(uVar1 >> 0x20);
      }
      uVar4 = (uint)fVar6;
      fVar6 = (float)uVar2;
      if ((float)uVar2 <= (float)(uVar1 & 0xffffffff)) {
        fVar6 = (float)(uVar1 & 0xffffffff);
      }
      uVar2 = (ulong)(uint)(int)fVar6;
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar3 < *(uint *)(param_1 + 0xb8));
    uVar3 = (ulong)uVar4 << 0x20;
  }
  return uVar3 | uVar2;
}




void FUN_1001b167c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_3 + 0xb8) != 0) {
    uVar1 = 0;
    lVar2 = 8;
    do {
      FUN_10064e47c(param_1,param_2,*(undefined8 *)(*(long *)(param_3 + 0xc0) + lVar2));
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar1 < *(uint *)(param_3 + 0xb8));
  }
  return;
}




void * FUN_1001b16e8(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x88);
  lVar2 = thunk_FUN_1006421a8();
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




void FUN_1001b175c(uint *param_1,uint param_2)

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




undefined8 * FUN_1001b17d8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_100655644();
  FUN_10014f4a0(lVar1 + 0x158);
  *param_1 = &PTR_thunk_FUN_1001b1de4_101463e00;
  param_1[0x2b] = &PTR_FUN_101463f68;
  thunk_FUN_100181304(param_1 + 0x2e,0);
  thunk_FUN_100181304(param_1 + 0x2e5,0);
  thunk_FUN_1001afbc0(param_1 + 0x59c);
  thunk_FUN_100183990(param_1 + 0x61c,0);
  thunk_FUN_100655644(param_1 + 0x6da);
  thunk_FUN_100652c08(param_1 + 0x705);
  thunk_FUN_100650e64(param_1 + 0x723);
  FUN_1004e313c(param_1 + 0x749);
  FUN_1004e313c(param_1 + 0x74b);
  *(undefined2 *)(param_1 + 0x74d) = 0;
  FUN_1001b189c(param_1);
  return param_1;
}




void FUN_1001b189c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 auStack_90 [8];
  void *local_88;
  code *local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  plVar1 = param_1 + 0x59c;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x2e5;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  plVar3 = param_1 + 0x61c;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  plVar4 = param_1 + 0x6da;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  plVar5 = param_1 + 0x705;
  FUN_100655930(plVar4,plVar5,1);
  plVar6 = param_1 + 0x723;
  FUN_100655930(plVar4,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2e,1);
  FUN_100126c88();
  FUN_1001b060c(plVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e298,&DAT_1011580f8);
  FUN_1001b0764(plVar1,3);
  FUN_1001b0150(0x41800000,plVar1);
  FUN_1001afc3c(plVar1,0);
  FUN_1001b064c(plVar1,1);
  uVar9 = FUN_1004e0150("MAIN_PROFILE_TEXTENTRY_CHANGE_HANDLE_MESSAGE",0);
  thunk_FUN_1004e439c(auStack_90,uVar9);
  FUN_1004e3120(&local_80,"[MIN]");
  FUN_1004e3120(auStack_a0,"3");
  FUN_1004e3bc4(auStack_90,0,&local_80,auStack_a0);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  FUN_1004e3120(&local_80,"[MAX]");
  FUN_1004e3120(auStack_a0,"16");
  FUN_1004e3bc4(auStack_90,0,&local_80,auStack_a0);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  uVar9 = FUN_1004e0150("MAIN_PROFILE_TEXTENTRY_CHANGE_HANDLE_CAPTION",0);
  FUN_1001afd98(plVar1,uVar9,auStack_90,&DAT_101d91650,0,0,0,0,0,1);
  local_58 = DAT_101dbd4ac;
  local_80 = FUN_1001b2678;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  local_78 = param_1;
  FUN_10001554c(param_1 + 0x59d,&local_80);
  uVar9 = FUN_1004e0150("MAIN_PROFILE_EDIT_NICKNAME_BUTTON",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar2,0,uVar9,&DAT_10115a168,&DAT_101dc1cb8,0);
  *(uint *)((long)param_1 + 0x17ac) = *(uint *)((long)param_1 + 0x17ac) & 0xfffffffb;
  uVar8 = DAT_101d91884;
  local_58 = DAT_101d91884;
  local_80 = FUN_1001b2680;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  local_78 = param_1;
  FUN_10001554c(param_1 + 0x2e6,&local_80);
  FUN_1001b4964(plVar2,1);
  FUN_100652cdc(param_1 + 0x6b6,"edit_handle");
  *(uint *)((long)param_1 + 0x3544) = *(uint *)((long)param_1 + 0x3544) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar3);
  uVar7 = *(uint *)((long)param_1 + 0x3164);
  if ((uVar7 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x3164) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar3);
  }
  lVar10 = NEON_fmov(0x41f00000,4);
  param_1[0x627] = lVar10;
  local_58 = uVar8;
  local_80 = thunk_FUN_1001b26c0;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  local_78 = param_1;
  FUN_10001554c(param_1 + 0x61d,&local_80);
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"account_level_shield_big");
  if ((*(float *)(param_1 + 0x70f) != 0.5) || (*(float *)((long)param_1 + 0x387c) != 0.45)) {
    param_1[0x70f] = 0x3ee666663f000000;
    FUN_1000200a0(plVar5);
  }
  if ((*(float *)(param_1 + 0x70e) != 2.2) || (*(float *)((long)param_1 + 0x3874) != 2.2)) {
    param_1[0x70e] = 0x400ccccd400ccccd;
    FUN_1000200a0(plVar5);
  }
  if ((*(uint *)((long)param_1 + 0x38ac) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x38ac) = *(uint *)((long)param_1 + 0x38ac) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar5);
  }
  FUN_100651594(plVar6,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250,&DAT_10115a168);
  if ((*(float *)(param_1 + 0x72d) != 0.5) || (*(float *)((long)param_1 + 0x396c) != 0.6)) {
    param_1[0x72d] = 0x3f19999a3f000000;
    FUN_1000200a0(plVar6);
  }
  local_58 = uVar8;
  local_80 = thunk_FUN_1001b2710;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  local_78 = param_1;
  FUN_10001554c(param_1 + 0x2f,&local_80);
  uVar9 = FUN_1004e0150("REAL_ID_BUTTON",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x447a0000,param_1 + 0x2e,0,uVar9,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  *(uint *)((long)param_1 + 500) = *(uint *)((long)param_1 + 500) & 0xfffffffb;
  (**(code **)(*param_1 + 0x138))(param_1);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  return;
}




undefined8 * thunk_FUN_1001b17d8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_100655644();
  FUN_10014f4a0(lVar1 + 0x158);
  *param_1 = &PTR_thunk_FUN_1001b1de4_101463e00;
  param_1[0x2b] = &PTR_FUN_101463f68;
  thunk_FUN_100181304(param_1 + 0x2e,0);
  thunk_FUN_100181304(param_1 + 0x2e5,0);
  thunk_FUN_1001afbc0(param_1 + 0x59c);
  thunk_FUN_100183990(param_1 + 0x61c,0);
  thunk_FUN_100655644(param_1 + 0x6da);
  thunk_FUN_100652c08(param_1 + 0x705);
  thunk_FUN_100650e64(param_1 + 0x723);
  FUN_1004e313c(param_1 + 0x749);
  FUN_1004e313c(param_1 + 0x74b);
  *(undefined2 *)(param_1 + 0x74d) = 0;
  FUN_1001b189c(param_1);
  return param_1;
}




void FUN_1001b1de4(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_thunk_FUN_1001b1de4_101463e00;
  param_1[0x2b] = &PTR_FUN_101463f68;
  iVar2 = FUN_10030c68c();
  if (iVar2 != 0) {
    lVar3 = FUN_10030c6a0();
    if (*(uint *)(lVar3 + 0x30) != 0) {
      lVar4 = *(long *)(lVar3 + 0x38);
      lVar3 = (ulong)*(uint *)(lVar3 + 0x30) << 5;
      do {
        puVar1 = (undefined8 *)(lVar4 + 8);
        lVar4 = lVar4 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_1001b2a18();
          break;
        }
        lVar3 = lVar3 + -0x20;
      } while (lVar3 != 0);
    }
  }
  if (*(char *)((long)param_1 + 0x3a69) != '\0') {
    FUN_1001e333c();
    *(char *)((long)param_1 + 0x3a69) = '\0';
  }
  if ((void *)param_1[0x74c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x74c]);
    param_1[0x74c] = 0;
    param_1[0x74b] = 0;
  }
  if ((void *)param_1[0x74a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x74a]);
    param_1[0x74a] = 0;
    param_1[0x749] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x723);
  param_1[0x705] = &PTR_FUN_1014a7108;
  param_1[0x71c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x71f);
  FUN_10064e2bc(param_1 + 0x705);
  param_1[0x6da] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x6f1);
  FUN_10064e2bc(param_1 + 0x6da);
  param_1[0x61c] = &PTR_FUN_10145f300;
  param_1[0x6b6] = &PTR_FUN_1014a7108;
  param_1[0x6cd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6d0);
  FUN_10064e2bc(param_1 + 0x6b6);
  param_1[0x698] = &PTR_FUN_1014a7108;
  param_1[0x6af] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6b2);
  FUN_10064e2bc(param_1 + 0x698);
  param_1[0x67a] = &PTR_FUN_1014a7108;
  param_1[0x691] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x694);
  FUN_10064e2bc(param_1 + 0x67a);
  FUN_10064221c(param_1 + 0x669);
  FUN_10003bec8(param_1 + 0x61c);
  FUN_100186088(param_1 + 0x59c);
  FUN_10003bd40(param_1 + 0x2e5);
  FUN_10003bd40(param_1 + 0x2e);
  FUN_10014f51c(param_1 + 0x2b);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1001b1de4(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_thunk_FUN_1001b1de4_101463e00;
  param_1[0x2b] = &PTR_FUN_101463f68;
  iVar2 = FUN_10030c68c();
  if (iVar2 != 0) {
    lVar3 = FUN_10030c6a0();
    if (*(uint *)(lVar3 + 0x30) != 0) {
      lVar4 = *(long *)(lVar3 + 0x38);
      lVar3 = (ulong)*(uint *)(lVar3 + 0x30) << 5;
      do {
        puVar1 = (undefined8 *)(lVar4 + 8);
        lVar4 = lVar4 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_1001b2a18();
          break;
        }
        lVar3 = lVar3 + -0x20;
      } while (lVar3 != 0);
    }
  }
  if (*(char *)((long)param_1 + 0x3a69) != '\0') {
    FUN_1001e333c();
    *(char *)((long)param_1 + 0x3a69) = '\0';
  }
  if ((void *)param_1[0x74c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x74c]);
    param_1[0x74c] = 0;
    param_1[0x74b] = 0;
  }
  if ((void *)param_1[0x74a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x74a]);
    param_1[0x74a] = 0;
    param_1[0x749] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x723);
  param_1[0x705] = &PTR_FUN_1014a7108;
  param_1[0x71c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x71f);
  FUN_10064e2bc(param_1 + 0x705);
  param_1[0x6da] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x6f1);
  FUN_10064e2bc(param_1 + 0x6da);
  param_1[0x61c] = &PTR_FUN_10145f300;
  param_1[0x6b6] = &PTR_FUN_1014a7108;
  param_1[0x6cd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6d0);
  FUN_10064e2bc(param_1 + 0x6b6);
  param_1[0x698] = &PTR_FUN_1014a7108;
  param_1[0x6af] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6b2);
  FUN_10064e2bc(param_1 + 0x698);
  param_1[0x67a] = &PTR_FUN_1014a7108;
  param_1[0x691] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x694);
  FUN_10064e2bc(param_1 + 0x67a);
  FUN_10064221c(param_1 + 0x669);
  FUN_10003bec8(param_1 + 0x61c);
  FUN_100186088(param_1 + 0x59c);
  FUN_10003bd40(param_1 + 0x2e5);
  FUN_10003bd40(param_1 + 0x2e);
  FUN_10014f51c(param_1 + 0x2b);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001b1ff8(long param_1)

{
  FUN_1001b1de4(param_1 + -0x158);
  return;
}




void FUN_1001b2000(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001b1de4();
  operator_delete(pvVar1);
  return;
}




void FUN_1001b2014(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001b1de4(param_1 + -0x158);
  operator_delete(pvVar1);
  return;
}




void FUN_1001b202c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auStack_50 [32];
  
  plVar1 = param_1 + 0x749;
  FUN_10015d3ec();
  uVar6 = FUN_100164f34();
  iVar5 = FUN_1004e36c0(plVar1,uVar6);
  if (iVar5 != 0) {
    FUN_10015d3ec();
    uVar6 = FUN_100164f34();
    FUN_1000153b4(plVar1,uVar6);
    plVar2 = param_1 + 0x59c;
    FUN_1001b0198(plVar2,plVar1,0);
    FUN_100644aec(auStack_50,DAT_101d23670,plVar1);
    FUN_100644c34(param_1,auStack_50,1);
    uVar3 = *(uint *)((long)param_1 + 0x2d64);
    if ((uVar3 >> 2 & 1) == 0) {
      *(uint *)((long)param_1 + 0x2d64) = uVar3 | 4;
      if ((uVar3 & 0x7f80) != 0) {
        *(uint *)((long)param_1 + 0x2d64) = uVar3 & 0xffff807f | 4;
        FUN_1000200a0(plVar2);
      }
      uVar6 = FUN_100640840(0x3f800000,0x3eb33333,FUN_10001f160);
      FUN_100642324(plVar2);
      FUN_100642b14(plVar2,uVar6);
    }
    FUN_1001b05dc(plVar2,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e298);
    fVar7 = (float)FUN_1001b0130(plVar2);
    fVar7 = (float)NEON_fminnm(1100.0 / fVar7,0x3f800000);
    bVar4 = false;
    if ((*(float *)(param_1 + 0x5a5) == fVar7) &&
       (bVar4 = false, !NAN(*(float *)((long)param_1 + 0x2d2c)) && !NAN(fVar7))) {
      bVar4 = *(float *)((long)param_1 + 0x2d2c) == fVar7;
    }
    if (!bVar4) {
      *(float *)(param_1 + 0x5a5) = fVar7;
      *(float *)((long)param_1 + 0x2d2c) = fVar7;
      FUN_1000200a0(plVar2);
    }
    (**(code **)(*param_1 + 0x138))(param_1);
  }
  return;
}




void FUN_1001b2188(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  
  iVar4 = FUN_100126c88();
  lVar1 = param_1 + 0x1728;
  fVar5 = DAT_101854a78;
  if (iVar4 == 0) {
    fVar5 = 1.0;
  }
  bVar3 = false;
  if ((*(float *)(param_1 + 6000) == fVar5) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x1774)) && !NAN(fVar5))) {
    bVar3 = *(float *)(param_1 + 0x1774) == fVar5;
  }
  if (!bVar3) {
    *(float *)(param_1 + 6000) = fVar5;
    *(float *)(param_1 + 0x1774) = fVar5;
    FUN_1000200a0(lVar1);
  }
  fVar5 = 0.75;
  if (iVar4 == 0) {
    fVar5 = 0.5;
  }
  bVar3 = false;
  if ((*(float *)(param_1 + 0x3128) == fVar5) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x312c)) && !NAN(fVar5))) {
    bVar3 = *(float *)(param_1 + 0x312c) == fVar5;
  }
  if (!bVar3) {
    *(float *)(param_1 + 0x3128) = fVar5;
    *(float *)(param_1 + 0x312c) = fVar5;
    FUN_1000200a0(param_1 + 0x30e0);
  }
  FUN_1006557ec(param_1 + 0x36d0);
  lVar2 = param_1 + 0x2ce0;
  FUN_10064e5ec(0,0,param_1 + 0x36d0,5,lVar2,7);
  FUN_10064e5ec(0,0,lVar1,4,lVar2,6);
  FUN_10064e5ec(0x41f00000,0,param_1 + 0x30e0,7,lVar2,5);
  if ((*(uint *)(param_1 + 0x17ac) & 4) != 0) {
    lVar2 = lVar1;
  }
  FUN_10064e5ec(0x41f00000,0,param_1 + 0x170,4,lVar2,6);
  FUN_1006557ec(param_1);
  return;
}




void thunk_FUN_1001b22d4(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_10030c68c();
  if ((iVar2 != 0) && (iVar2 = FUN_10030c6ac(), iVar2 != 0)) {
    FUN_10030c6a0();
    uVar3 = FUN_10030cef4();
    if (((uVar3 & 1) == 0) && (lVar1 = FUN_10015d3ec(), *(char *)(lVar1 + 0x567c) == '\0')) {
      *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) | 4;
      return;
    }
  }
  *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) & 0xfffffffb;
  FUN_10021a330();
  return;
}




void FUN_1001b22d4(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_10030c68c();
  if ((iVar2 != 0) && (iVar2 = FUN_10030c6ac(), iVar2 != 0)) {
    FUN_10030c6a0();
    uVar3 = FUN_10030cef4();
    if (((uVar3 & 1) == 0) && (lVar1 = FUN_10015d3ec(), *(char *)(lVar1 + 0x567c) == '\0')) {
      *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) | 4;
      return;
    }
  }
  *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) & 0xfffffffb;
  FUN_10021a330();
  return;
}




void FUN_1001b2340(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar3 = FUN_1001b241c();
  FUN_1001afc3c(param_1 + 0x2ce0,uVar3);
  iVar2 = FUN_1001b241c();
  uVar1 = 4;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x17ac) = *(uint *)(param_1 + 0x17ac) & 0xfffffffb | uVar1;
  uVar1 = 0;
  if (iVar2 == 0) {
    uVar1 = 4;
  }
  *(uint *)(param_1 + 0x3164) = *(uint *)(param_1 + 0x3164) & 0xfffffffb | uVar1;
  FUN_10015d3ec();
  FUN_1004e313c(auStack_30);
  FUN_1004e38ac(auStack_30,"%d");
  FUN_1006513c0(param_1 + 0x3918,auStack_30);
  lVar4 = FUN_10015d3ec();
  *(uint *)(param_1 + 0x38ac) =
       *(uint *)(param_1 + 0x38ac) & 0xfffffff8 |
       *(uint *)(param_1 + 0x38ac) & 3 | (uint)(*(char *)(lVar4 + 0x567c) == '\0') << 2;
  FUN_1001b22d4(param_1);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




undefined8 FUN_1001b241c(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar2 = FUN_10015d3ec();
  if (*(char *)(lVar2 + 0x567c) == '\0') {
    uVar3 = FUN_1004eef10();
    if ((int)uVar3 != 0) {
      if (((DAT_101e42d88 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101e42d88), iVar1 != 0))
      {
        FUN_1004e3120(&DAT_101e42d78,"Player_");
        ___cxa_atexit(FUN_100046198,&DAT_101e42d78,0x100000000);
        ___cxa_guard_release(&DAT_101e42d88);
      }
      if (((DAT_101e42da0 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101e42da0), iVar1 != 0))
      {
        FUN_1004e3120(&DAT_101e42d90,"Guest_");
        ___cxa_atexit(FUN_100046198,&DAT_101e42d90,0x100000000);
        ___cxa_guard_release(&DAT_101e42da0);
      }
      FUN_10015d3ec();
      uVar3 = FUN_100164f34();
      uVar4 = FUN_1004e3634(&DAT_101e42d78);
      uVar5 = FUN_1004e3790(uVar3,&DAT_101e42d78,uVar4);
      if ((uVar5 & 1) == 0) {
        FUN_10015d3ec();
        uVar3 = FUN_100164f34();
        uVar4 = FUN_1004e3634(&DAT_101e42d90);
        uVar3 = FUN_1004e3790(uVar3,&DAT_101e42d90,uVar4);
        return uVar3;
      }
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




void FUN_1001b257c(long param_1)

{
  FUN_1001b2340(param_1 + -0x158);
  return;
}




void FUN_1001b2584(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x40) == 0) {
    FUN_1001afc3c(param_1 + 0x2ce0,0);
    *(uint *)(param_1 + 0x17ac) = *(uint *)(param_1 + 0x17ac) & 0xfffffffb;
  }
  else {
    FUN_10015d3ec();
    uVar1 = FUN_100164f34();
    FUN_1001b0198(param_1 + 0x2ce0,uVar1,0);
    *(uint *)(param_1 + 0x2d64) = *(uint *)(param_1 + 0x2d64) | 4;
  }
  return;
}




void FUN_1001b25f0(long param_1)

{
  FUN_1001b2584(param_1 + -0x158);
  return;
}




void FUN_1001b25f8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x40) == 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      FUN_1001afc3c(param_1 + 0x2ce0,0);
      *(uint *)(param_1 + 0x17ac) = *(uint *)(param_1 + 0x17ac) & 0xfffffffb;
    }
  }
  else {
    FUN_10015d3ec();
    uVar1 = FUN_100164f34();
    FUN_1001b0198(param_1 + 0x2ce0,uVar1,0);
    *(uint *)(param_1 + 0x2d64) = *(uint *)(param_1 + 0x2d64) | 4;
  }
  return;
}




void FUN_1001b2670(long param_1)

{
  FUN_1001b25f8(param_1 + -0x158);
  return;
}




void FUN_1001b2678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1001b27a4(param_1,param_4);
  return;
}




void FUN_1001b2680(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_1004eef10();
  if (iVar1 != 0) {
    FUN_1001afe48(param_1 + 0x2ce0);
    return;
  }
  return;
}




void thunk_FUN_1001b26c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_RENAME_PLAYER_HANDLE");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void thunk_FUN_1001b2710(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  code *pcStack_38;
  
  FUN_10021a248();
  uVar1 = FUN_100644a94("UI::EVENT_OPEN_GOVERNMENTID");
  FUN_100644aec(auStack_70,uVar1,0);
  FUN_100644c34(param_1,auStack_70,1);
  if (*(char *)(param_1 + 0x3a68) == '\0') {
    lVar2 = FUN_10030c6a0();
    uStack_50 = 0;
    pcStack_38 = thunk_FUN_1001b22d4;
    lStack_48 = param_1;
    lStack_40 = param_1;
    FUN_1001b2a88(lVar2 + 0x30,&uStack_50);
    *(char *)(param_1 + 0x3a68) = '\x01';
  }
  return;
}




void FUN_1001b26c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_RENAME_PLAYER_HANDLE");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1001b2710(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_70 [32];
  undefined8 local_50;
  long lStack_48;
  long local_40;
  code *pcStack_38;
  
  FUN_10021a248();
  uVar1 = FUN_100644a94("UI::EVENT_OPEN_GOVERNMENTID");
  FUN_100644aec(auStack_70,uVar1,0);
  FUN_100644c34(param_1,auStack_70,1);
  if (*(char *)(param_1 + 0x3a68) == '\0') {
    lVar2 = FUN_10030c6a0();
    local_50 = 0;
    pcStack_38 = thunk_FUN_1001b22d4;
    lStack_48 = param_1;
    local_40 = param_1;
    FUN_1001b2a88(lVar2 + 0x30,&local_50);
    *(char *)(param_1 + 0x3a68) = '\x01';
  }
  return;
}




void FUN_1001b27a4(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  iVar1 = FUN_1004eef10();
  if ((iVar1 != 0) &&
     (((uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4e4), (uVar2 & 1) != 0 ||
       (DAT_101dbd4e4 == DAT_101dbd450)) && (lVar5 = param_2[4], lVar5 != 0)))) {
    uVar3 = FUN_100655b6c(lVar5 + ((ulong)*(byte *)(lVar5 + 0x370) & 1) * 0x130 + 0x1e0);
    iVar1 = FUN_1004e36c0(uVar3,&DAT_101d91650);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x2d64) = *(uint *)(param_1 + 0x2d64) & 0xfffffffb;
      FUN_1000153b4(param_1 + 0x3a58,uVar3);
      uVar4 = FUN_1004e0150("MAIN_PROFILE_CONFIRM_NICKNAME_TITLE",0);
      thunk_FUN_1004e439c(auStack_40,uVar4);
      uVar4 = FUN_1004e0150("MAIN_PROFILE_CONFIRM_NICKNAME_DESCRIPTION",0);
      thunk_FUN_1004e439c(auStack_50,uVar4);
      FUN_1004e3120(auStack_60,"[PLAYER_NAME]");
      FUN_1004e3bc4(auStack_50,0,auStack_60,uVar3);
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
      }
      uVar3 = FUN_1004e0150("MAIN_PROFILE_CONFIRM_NICKNAME_CONFIRM",0);
      uVar4 = FUN_1004e0150("MAIN_PROFILE_CONFIRM_NICKNAME_CANCEL",0);
      FUN_1001e31c8(auStack_40,auStack_50,uVar3,uVar4,&DAT_101d91650,param_1,thunk_FUN_1001b2950,
                    thunk_FUN_1001b29b4,0);
      *(undefined1 *)(param_1 + 0x3a69) = 1;
      if (local_48 != (void *)0x0) {
        operator_delete__(local_48);
      }
      if (local_38 != (void *)0x0) {
        operator_delete__(local_38);
      }
    }
  }
  return;
}




void thunk_FUN_1001b2950(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x3a58;
  iVar2 = FUN_1004e36c0(lVar1,&DAT_101d91650);
  if (iVar2 != 0) {
    uVar3 = FUN_10015d3ec();
    FUN_100164e98(uVar3,lVar1);
    FUN_1000153b4(lVar1,&DAT_101d91650);
  }
  FUN_1001027f8(0);
  *(undefined1 *)(param_1 + 0x3a69) = 0;
  return;
}




void thunk_FUN_1001b29b4(long param_1)

{
  undefined8 uVar1;
  
  FUN_1000153b4(param_1 + 0x3a58,&DAT_101d91650);
  FUN_10015d3ec();
  uVar1 = FUN_100164f34();
  FUN_1001b0198(param_1 + 0x2ce0,uVar1,0);
  *(uint *)(param_1 + 0x2d64) = *(uint *)(param_1 + 0x2d64) | 4;
  *(undefined1 *)(param_1 + 0x3a69) = 0;
  return;
}




void FUN_1001b2950(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x3a58;
  iVar2 = FUN_1004e36c0(lVar1,&DAT_101d91650);
  if (iVar2 != 0) {
    uVar3 = FUN_10015d3ec();
    FUN_100164e98(uVar3,lVar1);
    FUN_1000153b4(lVar1,&DAT_101d91650);
  }
  FUN_1001027f8(0);
  *(undefined1 *)(param_1 + 0x3a69) = 0;
  return;
}




void FUN_1001b29b4(long param_1)

{
  undefined8 uVar1;
  
  FUN_1000153b4(param_1 + 0x3a58,&DAT_101d91650);
  FUN_10015d3ec();
  uVar1 = FUN_100164f34();
  FUN_1001b0198(param_1 + 0x2ce0,uVar1,0);
  *(uint *)(param_1 + 0x2d64) = *(uint *)(param_1 + 0x2d64) | 4;
  *(undefined1 *)(param_1 + 0x3a69) = 0;
  return;
}




void FUN_1001b2a18(uint *param_1,undefined8 *param_2,undefined8 *param_3)

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




void FUN_1001b2a88(uint *param_1,undefined8 *param_2)

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
    FUN_1001b2b0c(param_1,uVar3);
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




void thunk_FUN_1001b22d4(void)

{
  FUN_1001b22d4();
  return;
}




void FUN_1001b2b0c(uint *param_1,uint param_2)

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




void FUN_1001b316c(long param_1,int param_2)

{
  long lVar1;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  local_44 = 0xffffffff;
  switch(param_2) {
  case 0:
    local_44 = 0xff5a3c10;
    break;
  case 2:
    local_44 = 0xffaaaaaa;
    break;
  case 3:
    local_44 = 0xffe19400;
    break;
  case 4:
    local_44 = 0xffe550b2;
    break;
  case 5:
    local_44 = 0xff005ae1;
    break;
  case 6:
  case 7:
    local_44 = 0xff2424b3;
  }
  local_4c = FUN_1001b34fc(0x3f266666,&local_44);
  local_48 = FUN_1001b3470(0x3ecccccd,&local_4c);
  local_50 = FUN_1001b3548(0x3dcccccd,&local_44);
  local_4c = FUN_1001b3470(0x3f400000,&local_50);
  local_54 = FUN_1001b3548(0x3f400000,&local_44);
  local_50 = FUN_1001b3470(0x3f59999a,&local_54);
  lVar1 = param_1 + 0x2b0;
  *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) | 4;
  if (param_2 == 1) {
    *(uint *)(param_1 + 0x424) = *(uint *)(param_1 + 0x424) & 0xfffffffb;
    *(uint *)(param_1 + 0x9bc) = *(uint *)(param_1 + 0x9bc) | 4;
    if (*(long *)(param_1 + 0x380) != 0) {
      FUN_100652d8c(lVar1);
    }
    FUN_100652cac(lVar1,DAT_101854a08,"popup_bg");
    FUN_100652dd4(lVar1,&DAT_10115a168,2);
    if (*(long *)(param_1 + 0xa08) != 0) {
      FUN_100652d8c(param_1 + 0x938);
    }
    FUN_100652cac(param_1 + 0x938,DAT_101854a08,"popup_header_bg");
    local_50 = 0xffffffff;
    local_4c = 0xffffbe9f;
  }
  else {
    *(uint *)(param_1 + 0x424) = *(uint *)(param_1 + 0x424) | 4;
    *(uint *)(param_1 + 0x9bc) = *(uint *)(param_1 + 0x9bc) & 0xfffffffb;
    FUN_100652dd4(lVar1,&local_48,2);
    FUN_100652dd4(param_1 + 0x3a0,&local_48,2);
  }
  FUN_100652590(param_1 + 0x490,&local_50,2);
  FUN_100652590(param_1 + 0x730,&local_4c,2);
  return;
}




void thunk_FUN_1001b43ec(long param_1)

{
  ulong uVar1;
  
  if (((*(char *)(param_1 + 0x1cee) != '\0') &&
      (uVar1 = FUN_100642bc8(param_1 + 0x90), (uVar1 & 1) == 0)) &&
     (uVar1 = FUN_100642bc8(param_1 + 0x168), (uVar1 & 1) == 0)) {
    FUN_1001b3648(param_1);
    return;
  }
  return;
}




void FUN_1001b339c(long param_1,undefined8 param_2)

{
  FUN_100642bd8(param_1 + 0x1c20,param_2,1);
  return;
}




void FUN_1001b33ac(long param_1)

{
  FUN_10064e524(param_1 + 0x1c20);
  return;
}




void FUN_1001b33b8(long param_1,undefined8 param_2)

{
  FUN_100655930(param_1 + 0x1818,param_2,1);
  FUN_1006557ec(param_1 + 0x1818);
  return;
}




void FUN_1001b33e8(long param_1,undefined8 param_2)

{
  FUN_100655930(param_1 + 0x1970,param_2,1);
  FUN_1006557ec(param_1 + 0x1970);
  return;
}




void FUN_1001b3418(long param_1)

{
  FUN_1006513c0(param_1 + 0xa28);
  FUN_10064e5ec(0x42580000,0,param_1 + 0xa28,7,param_1 + 0x880,7);
  return;
}




void FUN_1001b345c(long *param_1,undefined1 param_2)

{
  *(undefined1 *)((long)param_1 + 0x1ced) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001001b346c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))();
  return;
}




uint FUN_1001b3470(float param_1,byte *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = (float)NEON_ucvtf((uint)*param_2);
  fVar3 = (float)NEON_ucvtf((uint)param_2[1]);
  fVar4 = (float)NEON_ucvtf((uint)param_2[2]);
  fVar5 = 0.003921569 - param_1 * 0.003921569;
  param_1 = (fVar2 * 0.0011764707 + fVar3 * 0.0023137254 + fVar4 * 0.00043137258) * param_1;
  uVar1 = (int)((param_1 + fVar3 * fVar5) * 255.0) << 8;
  return uVar1 & 0xff000000 |
         uVar1 & 0xffff | ((int)((param_1 + fVar4 * fVar5) * 255.0) & 0xffU) << 0x10 |
         (int)((param_1 + fVar2 * fVar5) * 255.0) | 0xff000000;
}




uint FUN_1001b34fc(float param_1,byte *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)NEON_ucvtf((uint)*param_2);
  param_1 = 1.0 - param_1;
  fVar3 = (float)NEON_ucvtf((uint)param_2[1]);
  fVar4 = (float)NEON_ucvtf((uint)param_2[2]);
  uVar1 = (int)(param_1 * fVar3) << 8;
  return uVar1 & 0xff000000 | uVar1 & 0xffff | ((int)(param_1 * fVar4) & 0xffU) << 0x10 |
         (int)(param_1 * fVar2) | 0xff000000;
}




uint FUN_1001b3548(float param_1,byte *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  fVar2 = (float)NEON_ucvtf((uint)*param_2);
  fVar1 = 255.0 - param_1 * 255.0;
  uVar3 = NEON_ucvtf((ulong)CONCAT14(param_2[2],(uint)param_2[1]),4);
  uVar5 = NEON_fmov(0xbf800000,4);
  uVar4 = NEON_fmov(0x3f800000,4);
  uVar3 = NEON_ushl(CONCAT44((int)(float)(int)((float)((ulong)uVar4 >> 0x20) +
                                              ((float)((ulong)uVar5 >> 0x20) +
                                              (float)((ulong)uVar3 >> 0x20) * 0.003921569) * fVar1),
                             (int)(float)(int)((float)uVar4 +
                                              ((float)uVar5 + (float)uVar3 * 0.003921569) * fVar1)),
                    0x1000000008,4);
  return CONCAT13((byte)((ulong)uVar3 >> 0x38) | (byte)((ulong)uVar3 >> 0x18),
                  CONCAT12((byte)((ulong)uVar3 >> 0x30) | (byte)((ulong)uVar3 >> 0x10),
                           CONCAT11((byte)((ulong)uVar3 >> 0x28) | (byte)((ulong)uVar3 >> 8),
                                    (byte)((ulong)uVar3 >> 0x20) | (byte)uVar3))) |
         (int)((fVar2 * 0.003921569 + -1.0) * fVar1 + 1.0) | 0xff000000;
}




void FUN_1001b35d4(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x1ce0) = param_1;
  *(undefined4 *)(param_3 + 0x1ce4) = param_2;
  return;
}




void FUN_1001b35e0(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  lVar1 = FUN_100641574(param_4);
  uVar2 = DAT_101873a48;
  uVar3 = DAT_101873a4c;
  if (lVar1 != 0) {
    uVar2 = FUN_10064f0f8();
    uVar3 = param_2;
  }
  *(undefined4 *)(param_3 + 0x1ce0) = uVar2;
  *(undefined4 *)(param_3 + 0x1ce4) = uVar3;
  return;
}




void FUN_1001b3624(long *param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)((long)param_1 + 0x1cec);
  *(char *)((long)param_1 + 0x1cec) = (char)param_2;
  if (bVar1 == param_2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001b3644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_1001b3648(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x110))();
  lVar1 = FUN_100533194(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_100533194(param_1);
    FUN_100532d78(uVar2,param_1);
    return;
  }
  return;
}




float FUN_1001b3694(float param_1,long param_2)

{
  return param_1 + *(float *)(param_2 + 0x1cd8) * 2.0;
}




float FUN_1001b36cc(float param_1,long param_2)

{
  return param_1 + *(float *)(param_2 + 0x1cd8) * -2.0;
}




float FUN_1001b3708(long param_1)

{
  float fVar1;
  float fVar2;
  
  FUN_1001b37f4();
  fVar1 = (float)FUN_100651184(param_1 + 0xa28);
  fVar2 = (float)FUN_10064e3cc(param_1 + 0xb58);
  fVar2 = fVar1 + 64.0 + fVar2;
  if (*(char *)(param_1 + 0x1cec) != '\0') {
    fVar1 = (float)FUN_10064e3cc(param_1 + 0xb58);
    fVar2 = fVar2 + 64.0 + fVar1;
  }
  if ((*(byte *)(param_1 + 0x189c) >> 2 & 1) != 0) {
    fVar1 = (float)FUN_10064e3cc(param_1 + 0x1818);
    fVar2 = fVar2 + 64.0 + fVar1;
  }
  if ((*(byte *)(param_1 + 0x1b4c) >> 2 & 1) != 0) {
    fVar1 = (float)FUN_10064e3cc(param_1 + 0x1ac8);
    fVar2 = fVar2 + 64.0 + fVar1;
  }
  if ((*(byte *)(param_1 + 0x19f4) >> 2 & 1) != 0) {
    fVar1 = (float)FUN_10064e3cc(param_1 + 0x1970);
    fVar2 = fVar2 + 64.0 + fVar1;
  }
  return fVar2;
}




void FUN_1001b37f4(long param_1)

{
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0x4316000043160000;
  FUN_10064e48c(param_1 + 0xb58,&local_28);
  local_30 = CONCAT44((float)((ulong)local_28 >> 0x20) * 1.2,(float)local_28 * 1.2);
  FUN_1002ecef4(param_1 + 0xb58,&local_30);
  return;
}




void FUN_1001b3854(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_58;
  float fStack_54;
  
  fVar6 = (float)param_1;
  fVar5 = (float)param_2;
  lVar1 = param_3 + 0x168;
  uVar3 = param_2;
  local_58 = fVar6;
  fStack_54 = fVar5;
  fVar4 = (float)FUN_10064e3cc(lVar1);
  bVar2 = false;
  if (fVar6 == fVar4) {
    bVar2 = false;
    if (!NAN(fVar5) && !NAN((float)uVar3)) {
      bVar2 = fVar5 == (float)uVar3;
    }
  }
  if (!bVar2) {
    fVar4 = 0.0;
    if (*(char *)(param_3 + 0x1ced) != '\0') {
      fVar4 = 150.0;
    }
    fVar6 = fVar6 + *(float *)(param_3 + 0x1cd8) * -2.0;
    fVar4 = (fVar5 - fVar4) - (*(float *)(param_3 + 0x1cdc) + *(float *)(param_3 + 0x1cdc));
    if (param_4 != 0) {
      uVar3 = FUN_100640e7c(param_1,param_2,0x3e800000,lVar1,FUN_10001f160);
      FUN_100642b14(lVar1,uVar3);
      uVar3 = FUN_100640e7c(fVar6,fVar4,0x3e800000,param_3 + 0x1c20,FUN_10001f160);
      FUN_100642b14(param_3 + 0x1c20,uVar3);
      return;
    }
    FUN_10064e48c(lVar1,&local_58);
    FUN_10064e47c(fVar6,fVar4,param_3 + 0x1c20);
  }
  return;
}




void thunk_FUN_1001b3988(long param_1)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x90;
  FUN_100642324(lVar1);
  uVar2 = *(uint *)(param_1 + 0x114);
  *(uint *)(param_1 + 0x114) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x114) = uVar2 & 0xffff807f | 4;
    FUN_1000200a0(lVar1);
  }
  uVar6 = FUN_100640840(*(undefined4 *)(param_1 + 0x1ce8),0x3e99999a,FUN_10001f160);
  FUN_100642b14(lVar1,uVar6);
  uVar6 = FUN_10001f4d4();
  fVar4 = DAT_101873a4c;
  fVar3 = DAT_101873a48;
  FUN_100642324(param_1 + 0x168);
  *(uint *)(param_1 + 0x1ec) = *(uint *)(param_1 + 0x1ec) | 4;
  bVar5 = false;
  if ((*(float *)(param_1 + 0x1ce0) == fVar3) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x1ce4)) && !NAN(fVar4))) {
    bVar5 = *(float *)(param_1 + 0x1ce4) == fVar4;
  }
  if (bVar5) {
    FUN_1001b4068(param_1,uVar6);
  }
  else {
    FUN_1001b4154();
  }
  FUN_100642b14(param_1 + 0x168,uVar6);
  return;
}




void FUN_1001b3988(long param_1)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x90;
  FUN_100642324(lVar1);
  uVar2 = *(uint *)(param_1 + 0x114);
  *(uint *)(param_1 + 0x114) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x114) = uVar2 & 0xffff807f | 4;
    FUN_1000200a0(lVar1);
  }
  uVar6 = FUN_100640840(*(undefined4 *)(param_1 + 0x1ce8),0x3e99999a,FUN_10001f160);
  FUN_100642b14(lVar1,uVar6);
  uVar6 = FUN_10001f4d4();
  fVar4 = DAT_101873a4c;
  fVar3 = DAT_101873a48;
  FUN_100642324(param_1 + 0x168);
  *(uint *)(param_1 + 0x1ec) = *(uint *)(param_1 + 0x1ec) | 4;
  bVar5 = false;
  if ((*(float *)(param_1 + 0x1ce0) == fVar3) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x1ce4)) && !NAN(fVar4))) {
    bVar5 = *(float *)(param_1 + 0x1ce4) == fVar4;
  }
  if (bVar5) {
    FUN_1001b4068(param_1,uVar6);
  }
  else {
    FUN_1001b4154();
  }
  FUN_100642b14(param_1 + 0x168,uVar6);
  return;
}




void thunk_FUN_1001b3a68(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_10064081c(0x3e99999a);
  FUN_100642b14(param_1,uVar2);
  FUN_100642324(param_1 + 0x90);
  uVar2 = FUN_100640840(0,0x3e99999a,FUN_10001f218);
  FUN_100047300();
  FUN_100642b7c(param_1 + 0x90,uVar2);
  FUN_100642324(param_1 + 0x168);
  uVar2 = FUN_10001f4d4();
  bVar1 = false;
  if ((*(float *)(param_1 + 0x1ce0) == DAT_101873a48) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x1ce4)) && !NAN(DAT_101873a4c))) {
    bVar1 = *(float *)(param_1 + 0x1ce4) == DAT_101873a4c;
  }
  if (bVar1) {
    FUN_1001b42a4(uVar2,uVar2);
  }
  else {
    FUN_1001b4324(param_1,uVar2);
  }
  FUN_100047300();
  FUN_100642b7c(param_1 + 0x168,uVar2);
  return;
}




void FUN_1001b3a68(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_10064081c(0x3e99999a);
  FUN_100642b14(param_1,uVar2);
  FUN_100642324(param_1 + 0x90);
  uVar2 = FUN_100640840(0,0x3e99999a,FUN_10001f218);
  FUN_100047300();
  FUN_100642b7c(param_1 + 0x90,uVar2);
  FUN_100642324(param_1 + 0x168);
  uVar2 = FUN_10001f4d4();
  bVar1 = false;
  if ((*(float *)(param_1 + 0x1ce0) == DAT_101873a48) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x1ce4)) && !NAN(DAT_101873a4c))) {
    bVar1 = *(float *)(param_1 + 0x1ce4) == DAT_101873a4c;
  }
  if (bVar1) {
    FUN_1001b42a4(uVar2,uVar2);
  }
  else {
    FUN_1001b4324(param_1,uVar2);
  }
  FUN_100047300();
  FUN_100642b7c(param_1 + 0x168,uVar2);
  return;
}




void thunk_FUN_1001b3988(long param_1)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x90;
  FUN_100642324(lVar1);
  uVar2 = *(uint *)(param_1 + 0x114);
  *(uint *)(param_1 + 0x114) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x114) = uVar2 & 0xffff807f | 4;
    FUN_1000200a0(lVar1);
  }
  uVar6 = FUN_100640840(*(undefined4 *)(param_1 + 0x1ce8),0x3e99999a,FUN_10001f160);
  FUN_100642b14(lVar1,uVar6);
  uVar6 = FUN_10001f4d4();
  fVar4 = DAT_101873a4c;
  fVar3 = DAT_101873a48;
  FUN_100642324(param_1 + 0x168);
  *(uint *)(param_1 + 0x1ec) = *(uint *)(param_1 + 0x1ec) | 4;
  bVar5 = false;
  if ((*(float *)(param_1 + 0x1ce0) == fVar3) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x1ce4)) && !NAN(fVar4))) {
    bVar5 = *(float *)(param_1 + 0x1ce4) == fVar4;
  }
  if (bVar5) {
    FUN_1001b4068(param_1,uVar6);
  }
  else {
    FUN_1001b4154();
  }
  FUN_100642b14(param_1 + 0x168,uVar6);
  return;
}




void thunk_FUN_1001b3a68(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_10064081c(0x3e99999a);
  FUN_100642b14(param_1,uVar2);
  FUN_100642324(param_1 + 0x90);
  uVar2 = FUN_100640840(0,0x3e99999a,FUN_10001f218);
  FUN_100047300();
  FUN_100642b7c(param_1 + 0x90,uVar2);
  FUN_100642324(param_1 + 0x168);
  uVar2 = FUN_10001f4d4();
  bVar1 = false;
  if ((*(float *)(param_1 + 0x1ce0) == DAT_101873a48) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x1ce4)) && !NAN(DAT_101873a4c))) {
    bVar1 = *(float *)(param_1 + 0x1ce4) == DAT_101873a4c;
  }
  if (bVar1) {
    FUN_1001b42a4(uVar2,uVar2);
  }
  else {
    FUN_1001b4324(param_1,uVar2);
  }
  FUN_100047300();
  FUN_100642b7c(param_1 + 0x168,uVar2);
  return;
}




void FUN_1001b3b58(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 local_80;
  float local_78;
  float fStack_74;
  
  uVar12 = FUN_100641440();
  uVar13 = FUN_10064144c();
  FUN_10064e47c(uVar12,uVar13,param_1 + 0x90);
  fVar8 = 0.0;
  FUN_10064e6d8(0,param_1 + 0x90,0);
  lVar1 = param_1 + 0x168;
  local_78 = (float)FUN_10064e3cc(lVar1);
  fStack_74 = fVar8;
  FUN_10064e48c(param_1 + 0x2b0,&local_78);
  FUN_10064e48c(param_1 + 0x3a0,&local_78);
  if (*(char *)(param_1 + 0x1ced) == '\0') {
    *(uint *)(param_1 + 0x904) = *(uint *)(param_1 + 0x904) & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 0x904) = *(uint *)(param_1 + 0x904) | 4;
    if ((*(float *)(param_1 + 0xa70) != 1.1) || (*(float *)(param_1 + 0xa74) != 1.1)) {
      *(undefined8 *)(param_1 + 0xa70) = 0x3f8ccccd3f8ccccd;
      FUN_1000200a0(param_1 + 0xa28);
    }
    uVar15 = 0x43160000;
    FUN_10064e47c((int)local_78,param_1 + 0x880);
    uVar7 = FUN_10064e3cc(param_1 + 0x880);
    local_80 = (undefined1 *)CONCAT44(uVar15,uVar7);
    FUN_10064e48c(param_1 + 0x938,&local_80);
    FUN_1006557ec(param_1 + 0x1818);
    FUN_1006557ec(param_1 + 0x1ac8);
    FUN_1006557ec(param_1 + 0x1970);
    FUN_10064e47c(local_78,0x40c00000,param_1 + 0x1728);
  }
  FUN_1001b37f4(param_1);
  lVar4 = param_1 + 0x1c20;
  fVar8 = 0.0;
  if (*(char *)(param_1 + 0x1ced) != '\0') {
    fVar8 = 150.0;
  }
  local_80 = (undefined1 *)
             CONCAT44((fStack_74 - fVar8) -
                      (*(float *)(param_1 + 0x1cdc) + *(float *)(param_1 + 0x1cdc)),
                      local_78 + *(float *)(param_1 + 0x1cd8) * -2.0);
  FUN_10064e48c(lVar4,&local_80);
  if (*(char *)(param_1 + 0x1ced) == '\0') {
    FUN_10064e5ec(*(undefined4 *)(param_1 + 0x1cd8),*(undefined4 *)(param_1 + 0x1cdc),lVar4,0,lVar1,
                  0);
    uVar12 = 1;
    uVar13 = 1;
    lVar6 = lVar1;
  }
  else {
    if (*(char *)(param_1 + 0x1cec) == '\0') {
      uVar7 = 0x42580000;
      uVar12 = 7;
      uVar13 = 7;
    }
    else {
      uVar7 = 0;
      uVar12 = 8;
      uVar13 = 8;
    }
    FUN_10064e5ec(uVar7,0,param_1 + 0xa28,uVar12,param_1 + 0x880,uVar13);
    lVar2 = param_1 + 0xa28;
    FUN_10064e72c(0x41c00000,param_1 + 0x1818,3,lVar2,1);
    FUN_10064e72c(0,param_1 + 0x1818,5,lVar2,5);
    lVar6 = param_1 + 0x880;
    fVar8 = (float)FUN_10064e3cc(lVar6);
    fVar9 = (float)FUN_100651184(lVar2);
    lVar3 = param_1 + 0xb58;
    fVar10 = (float)FUN_10064259c(lVar3);
    lVar5 = param_1 + 0x1ac8;
    fVar11 = (float)FUN_10064e3cc(lVar5);
    FUN_10064e72c((fVar8 - (fVar9 + fVar10 + fVar11)) * 0.5,lVar5,3,lVar2,1);
    FUN_10064e72c(0,lVar5,5,lVar2,5);
    FUN_10064e72c(0xc1c00000,param_1 + 0x1970,1,lVar3,3);
    FUN_10064e72c(0,param_1 + 0x1970,5,lVar3,5);
    FUN_10064e5ec(0,0,param_1 + 0x1728,3,lVar6,3);
    FUN_10064e5ec(*(undefined4 *)(param_1 + 0x1cd8),*(undefined4 *)(param_1 + 0x1cdc),lVar4,0,lVar6,
                  3);
    uVar12 = 5;
    uVar13 = 5;
  }
  uVar16 = 0;
  FUN_10064e5ec(0,0,param_1 + 0xb58,uVar12,lVar6,uVar13);
  lVar4 = param_1 + 0x490;
  uVar13 = FUN_100652390(lVar4,0);
  uVar12 = uVar16;
  uVar14 = FUN_100652390(lVar4,8);
  FUN_1006525c4(uVar13,local_78 + -10.0,uVar14,uVar16,fStack_74 + -20.0,uVar12,lVar4);
  uVar14 = 0;
  FUN_10064e5ec(0,0,lVar4,8,lVar1,8);
  param_1 = param_1 + 0x730;
  uVar12 = FUN_100652390(param_1,0);
  uVar13 = FUN_100652390(param_1,2);
  FUN_1006525c4(uVar12,local_78 + -10.0,uVar13,uVar14,fStack_74 + -20.0,0,param_1);
  FUN_10064e72c(0,param_1,4,lVar1,4);
  FUN_10064e72c(10.0 - (float)uVar14,param_1,0,lVar1,0);
  local_80 = &DAT_3f0000003f000000;
  FUN_10064f27c(lVar1,&local_80);
  return;
}




void FUN_1001b3ff0(long *param_1)

{
  FUN_10064e5ec(0,0,param_1 + 0x2d,8,param_1 + 0x12,8);
                    /* WARNING: Could not recover jumptable at 0x0001001b4030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1);
  return;
}




void FUN_1001b4034(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x1cd8) = *param_2;
  return;
}




void FUN_1001b4040(long param_1,int param_2)

{
  uint uVar1;
  
  *(char *)(param_1 + 0x1cee) = (char)param_2;
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0xbdc) = *(uint *)(param_1 + 0xbdc) & 0xfffffffb | uVar1;
  return;
}




void FUN_1001b4068(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x168;
  if ((*(uint *)(param_1 + 0x1ec) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x1ec) = *(uint *)(param_1 + 0x1ec) & 0xffff807f;
    FUN_1000200a0(lVar1);
  }
  if ((*(float *)(param_1 + 0x1b0) != 0.8) || (*(float *)(param_1 + 0x1b4) != 0.8)) {
    *(undefined8 *)(param_1 + 0x1b0) = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(lVar1);
  }
  FUN_10064e6d8(0,0,lVar1,8);
  uVar2 = FUN_100640db8(0x3f800000,0x3f800000,0x3e99999a,FUN_10001f160);
  FUN_100640840(0x3f800000,0x3e99999a,FUN_10001f160);
  FUN_10063f2a4(param_2,uVar2);
  return;
}




void FUN_1001b4154(long param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = param_1 + 0x168;
  if ((*(uint *)(param_1 + 0x1ec) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x1ec) = *(uint *)(param_1 + 0x1ec) & 0xffff807f;
    FUN_1000200a0(lVar1);
  }
  if ((*(float *)(param_1 + 0x1b0) != 0.05) || (*(float *)(param_1 + 0x1b4) != 0.05)) {
    *(undefined8 *)(param_1 + 0x1b0) = 0x3d4ccccd3d4ccccd;
    FUN_1000200a0(lVar1);
  }
  lVar3 = FUN_10003d5bc(*(undefined8 *)(param_1 + 0x188));
  fVar6 = ((float)*(undefined8 *)(param_1 + 0x1ce0) - (float)*(undefined8 *)(lVar3 + 8)) /
          (float)*(undefined8 *)(lVar3 + 0x10);
  fVar7 = ((float)((ulong)*(undefined8 *)(param_1 + 0x1ce0) >> 0x20) -
          (float)((ulong)*(undefined8 *)(lVar3 + 8) >> 0x20)) /
          (float)((ulong)*(undefined8 *)(lVar3 + 0x10) >> 0x20);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x1a8) == fVar6) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x1ac)) && !NAN(fVar7))) {
    bVar2 = *(float *)(param_1 + 0x1ac) == fVar7;
  }
  if (!bVar2) {
    *(ulong *)(param_1 + 0x1a8) = CONCAT44(fVar7,fVar6);
    FUN_1000200a0(lVar1);
  }
  uVar4 = FUN_100640db8(0x3f800000,0x3f800000,0x3e99999a,FUN_10001f160);
  uVar5 = FUN_100641574("root-layer");
  FUN_10064e634(0,0,lVar1,8,uVar5,8);
  FUN_1006408f4(FUN_10001f160);
  FUN_100640840(0x3f800000,0x3e99999a,FUN_10001f160);
  FUN_10063f2a4(param_2,uVar4);
  return;
}




void FUN_1001b42a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100640db8(0x3f4ccccd,0x3f4ccccd,0x3e99999a,FUN_10001f160);
  FUN_100640840(0,0x3e99999a,FUN_10001f160);
  FUN_10063f2a4(param_2,uVar1);
  return;
}




void FUN_1001b4324(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = FUN_100640db8(0x3c23d70a,0x3c23d70a,0x3e99999a,FUN_10001f160);
  fVar3 = *(float *)(param_1 + 0x1ce0);
  fVar4 = *(float *)(param_1 + 0x1ce4);
  lVar2 = FUN_10003d5bc(*(undefined8 *)(param_1 + 0x188));
  FUN_1006408f4((fVar3 - *(float *)(lVar2 + 8)) / *(float *)(lVar2 + 0x10),
                (fVar4 - *(float *)(lVar2 + 0xc)) / *(float *)(lVar2 + 0x14),0x3e99999a,
                FUN_10001f160);
  FUN_100640840(0,0x3e99999a,FUN_10001f160);
  FUN_10063f2a4(param_2,uVar1);
  return;
}




void FUN_1001b43ec(long param_1)

{
  ulong uVar1;
  
  if (((*(char *)(param_1 + 0x1cee) != '\0') &&
      (uVar1 = FUN_100642bc8(param_1 + 0x90), (uVar1 & 1) == 0)) &&
     (uVar1 = FUN_100642bc8(param_1 + 0x168), (uVar1 & 1) == 0)) {
    FUN_1001b3648(param_1);
    return;
  }
  return;
}




void thunk_FUN_1001b4464(void)

{
  FUN_1001b4464();
  return;
}




void FUN_1001b4440(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001b4464();
  operator_delete(pvVar1);
  return;
}




void FUN_1001b4454(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001b445c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))();
  return;
}




void FUN_1001b4460(void)

{
  return;
}




void FUN_1001b4464(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001b4464_101464300;
  thunk_FUN_10064e2bc(param_1 + 900);
  param_1[0x359] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x370);
  FUN_10064e2bc(param_1 + 0x359);
  param_1[0x32e] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x345);
  FUN_10064e2bc(param_1 + 0x32e);
  param_1[0x303] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x31a);
  FUN_10064e2bc(param_1 + 0x303);
  param_1[0x2e5] = &PTR_FUN_1014a7108;
  param_1[0x2fc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2ff);
  FUN_10064e2bc(param_1 + 0x2e5);
  FUN_1001acc08(param_1 + 0x16b);
  thunk_FUN_100651068(param_1 + 0x145);
  param_1[0x127] = &PTR_FUN_1014a7108;
  param_1[0x13e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x141);
  FUN_10064e2bc(param_1 + 0x127);
  thunk_FUN_10064e2bc(param_1 + 0x110);
  param_1[0xe6] = &PTR_FUN_1014a6db0;
  param_1[0xfd] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x100);
  FUN_10064e2bc(param_1 + 0xe6);
  param_1[0xbc] = &PTR_FUN_1014a6db0;
  param_1[0xd3] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xd6);
  FUN_10064e2bc(param_1 + 0xbc);
  param_1[0x92] = &PTR_FUN_1014a6db0;
  param_1[0xa9] = &PTR_FUN_1014a6f10;
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
  param_1[0x2d] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x44);
  FUN_10064e2bc(param_1 + 0x2d);
  FUN_10064e2bc(param_1 + 0x12);
  FUN_100533140(param_1);
  return;
}




long * FUN_1001b4648(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006543ec();
  *puVar1 = &PTR_thunk_FUN_10003bec8_101464430;
  FUN_1006421a8(puVar1 + 0x34);
  param_1[0x34] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1004e3004(param_1 + 0x45);
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f000000;
  *(undefined1 *)((long)param_1 + 0x264) = 0x11;
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x34,1);
  FUN_1001b46f0(param_1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  return param_1;
}




void FUN_1001b46f0(long param_1)

{
  long lVar1;
  code *local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  local_38 = DAT_101dbd458;
  local_60 = FUN_1001b48f4;
  lVar1 = param_1 + 8;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(lVar1,&local_60);
  local_38 = DAT_101dbd484;
  local_60 = FUN_1001b48f4;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(lVar1,&local_60);
  local_38 = DAT_101dbd45c;
  local_60 = FUN_1001b4944;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(lVar1,&local_60);
  local_38 = DAT_101dbd488;
  local_60 = FUN_1001b4944;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(lVar1,&local_60);
  local_38 = DAT_101dbd4a4;
  local_60 = FUN_1001b494c;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(lVar1,&local_60);
  local_38 = DAT_101dbd460;
  local_60 = FUN_1001b4954;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(lVar1,&local_60);
  local_38 = DAT_101dbd48c;
  local_60 = FUN_1001b4954;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(lVar1,&local_60);
  return;
}




long * thunk_FUN_1001b4648(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006543ec();
  *puVar1 = &PTR_thunk_FUN_10003bec8_101464430;
  FUN_1006421a8(puVar1 + 0x34);
  param_1[0x34] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1004e3004(param_1 + 0x45);
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f000000;
  *(undefined1 *)((long)param_1 + 0x264) = 0x11;
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x34,1);
  FUN_1001b46f0(param_1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  return param_1;
}




void FUN_1001b485c(long *param_1)

{
  uint64_t uVar1;
  
  if ((((*(byte *)((long)param_1 + 0x264) >> 3 & 1) != 0) &&
      (uVar1 = _mach_absolute_time(),
      (double)*(float *)(param_1 + 0x4c) <=
      (double)((uVar1 - param_1[0x45]) * DAT_101d91638) * 1e-09)) &&
     ((*(byte *)((long)param_1 + 0x264) >> 4 & 1) != 0)) {
    *(byte *)((long)param_1 + 0x264) = *(byte *)((long)param_1 + 0x264) & 0xf7;
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
                    /* WARNING: Could not recover jumptable at 0x0001001b48f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x150))(param_1,1);
    return;
  }
  return;
}




void FUN_1001b48f4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(byte *)((long)param_1 + 0x264) = *(byte *)((long)param_1 + 0x264) | 2;
  (**(code **)(*param_1 + 0x158))();
  if (-1 < *(char *)((long)param_1 + 0x264)) {
    return;
  }
  FUN_100644b14(param_4);
  return;
}




void FUN_1001b4944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1001b49d0(param_1,param_4);
  return;
}




void FUN_1001b494c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1001b4a78(param_1,param_4);
  return;
}




void FUN_1001b4954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1001b4b1c(param_1,param_4);
  return;
}




void FUN_1001b495c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x260) = param_1;
  return;
}




void FUN_1001b4964(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 0x80;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x264) = bVar1 | *(byte *)(param_1 + 0x264) & 0x7f;
  return;
}




void FUN_1001b4980(long *param_1,undefined8 param_2)

{
  *(byte *)((long)param_1 + 0x264) = *(byte *)((long)param_1 + 0x264) | 2;
  (**(code **)(*param_1 + 0x158))();
  if (-1 < *(char *)((long)param_1 + 0x264)) {
    return;
  }
  FUN_100644b14(param_2);
  return;
}




void FUN_1001b49d0(long *param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  bVar1 = *(byte *)((long)param_1 + 0x264);
  uVar3 = (uint)bVar1;
  if ((bVar1 & 6) != 2) goto LAB_1001b4a58;
  if ((~bVar1 & 0x60) == 0) {
    lVar4 = 0x2d;
  }
  else {
    plVar2 = param_1 + 0x46;
    if (*(char *)((long)param_1 + 0x247) < '\0') {
      if (param_1[0x47] != 0) {
        plVar2 = (long *)*plVar2;
        goto LAB_1001b4a28;
      }
    }
    else if (*(char *)((long)param_1 + 0x247) != '\0') {
LAB_1001b4a28:
      FUN_1001e79b8(0x3f800000,plVar2,0,0);
    }
    lVar4 = 0x2c;
  }
  (**(code **)(*param_1 + lVar4 * 8))(param_1);
  uVar3 = *(byte *)((long)param_1 + 0x264) | 4;
  *(char *)((long)param_1 + 0x264) = (char)uVar3;
LAB_1001b4a58:
  if (uVar3 >> 7 != 0) {
    FUN_100644b14(param_2);
    return;
  }
  return;
}




void FUN_1001b4a78(long *param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  bVar1 = *(byte *)((long)param_1 + 0x264);
  uVar3 = (uint)bVar1;
  if ((bVar1 >> 2 & 1) == 0) goto LAB_1001b4af4;
  if ((bVar1 & 0x60) == 0x20) {
    plVar2 = param_1 + 0x46;
    if (*(char *)((long)param_1 + 0x247) < '\0') {
      if (param_1[0x47] != 0) {
        plVar2 = (long *)*plVar2;
        goto LAB_1001b4ac8;
      }
    }
    else if (*(char *)((long)param_1 + 0x247) != '\0') {
LAB_1001b4ac8:
      FUN_1001e79b8(0x3f800000,plVar2,0,0);
    }
    lVar4 = 0x2c;
  }
  else {
    lVar4 = 0x2d;
  }
  (**(code **)(*param_1 + lVar4 * 8))(param_1);
  uVar3 = *(byte *)((long)param_1 + 0x264) & 0xfffffffb;
LAB_1001b4af4:
  *(byte *)((long)param_1 + 0x264) = (byte)uVar3 & 0xfd;
  if (uVar3 >> 7 != 0) {
    FUN_100644b14(param_2);
    return;
  }
  return;
}




void FUN_1001b4b1c(long *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 auStack_50 [48];
  
  bVar1 = *(byte *)((long)param_1 + 0x264);
  if ((bVar1 & 6) != 0) {
    (**(code **)(*param_1 + 0x168))();
    *(byte *)((long)param_1 + 0x264) = *(byte *)((long)param_1 + 0x264) & 0xfb;
    FUN_1001b4bac(param_1);
    FUN_100530200(auStack_50,DAT_101d91884,0xffffffff,0);
    FUN_100644c34(param_1,auStack_50,1);
    bVar1 = *(byte *)((long)param_1 + 0x264);
  }
  if ((char)bVar1 < '\0') {
    FUN_100644b14(param_2);
  }
  return;
}




void FUN_1001b4bac(long *param_1)

{
  if (0.0 < *(float *)(param_1 + 0x4c)) {
    *(byte *)((long)param_1 + 0x264) = *(byte *)((long)param_1 + 0x264) | 8;
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffef;
    (**(code **)(*param_1 + 0x150))(param_1,0);
    FUN_1004e3004(param_1 + 0x45);
    return;
  }
  return;
}




void FUN_1001b4c0c(long *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  bVar1 = *(byte *)((long)param_1 + 0x264);
  if ((((bVar1 & 0x10) == 0 ^ param_2) & 1) == 0) {
    uVar3 = 0x10;
    bVar2 = 0x10;
    if (param_2 == 0) {
      bVar2 = 0;
    }
    *(byte *)((long)param_1 + 0x264) = bVar1 & 0xef | bVar2;
    if ((param_2 == 0) || ((bVar1 >> 3 & 1) == 0)) {
      if (param_2 == 0) {
        uVar3 = 0;
      }
      *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffef | uVar3;
                    /* WARNING: Could not recover jumptable at 0x0001001b4c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x150))();
      return;
    }
  }
  return;
}




void FUN_1001b4c68(long param_1,string *param_2)

{
  std::string::operator=((string *)(param_1 + 0x248),param_2);
  return;
}




void FUN_1001b4c70(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x160;
  if ((*(byte *)((long)param_1 + 0x264) & 0x40) != 0) {
    lVar1 = 0x168;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001b4c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar1))();
  return;
}




void FUN_1001b4c90(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  *(byte *)((long)param_1 + 0x264) = *(byte *)((long)param_1 + 0x264) & 0xfe | (byte)param_2;
  uVar1 = *(uint *)((long)param_1 + 0x224);
  uVar2 = 0xff;
  if (param_2 == 0) {
    uVar2 = 0x66;
  }
  if (uVar2 != (uVar1 >> 7 & 0xff)) {
    *(uint *)((long)param_1 + 0x224) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
    FUN_1000200a0(param_1 + 0x34);
  }
                    /* WARNING: Could not recover jumptable at 0x0001001b4cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1);
  return;
}




void FUN_1001b4cfc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10003bec8();
  operator_delete(pvVar1);
  return;
}




long * FUN_1001b4d10(long *param_1)

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
  undefined **ppuVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined4 local_78;
  undefined4 uStack_74;
  
  puVar16 = (undefined8 *)FUN_10064e20c();
  *puVar16 = &PTR_thunk_FUN_100196fa4_1014645b0;
  puVar16 = puVar16 + 0x17;
  FUN_1006421a8(puVar16);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x28;
  FUN_1006421a8(plVar1);
  param_1[0x28] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x39;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 0x57;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0x75;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0x93;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0xb1;
  FUN_1006421a8(plVar6);
  param_1[0xb1] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar7 = param_1 + 0xc2;
  thunk_FUN_100652c08();
  plVar8 = param_1 + 0xe0;
  thunk_FUN_100652c08();
  plVar9 = param_1 + 0xfe;
  thunk_FUN_100652c08(plVar9);
  plVar10 = param_1 + 0x11c;
  FUN_1001aa1d4(plVar10);
  thunk_FUN_1001bce98(param_1 + 0x158);
  plVar11 = param_1 + 0x205;
  thunk_FUN_100650e64(plVar11);
  plVar12 = param_1 + 0x22b;
  thunk_FUN_1006543ec(plVar12);
  param_1[0x25f] = 0;
  *(undefined4 *)(param_1 + 0x260) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x130c) = 0x101010100000000;
  *(undefined8 *)((long)param_1 + 0x1304) = 0;
  *(undefined1 *)((long)param_1 + 0x1314) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar16,1);
  FUN_100642bd8(puVar16,param_1 + 0x158,1);
  FUN_100642bd8(puVar16,plVar12,1);
  FUN_100642bd8(plVar12,plVar6,1);
  FUN_100642bd8(plVar6,plVar7,1);
  FUN_100642bd8(plVar12,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar1,plVar5,1);
  FUN_100642bd8(puVar16,plVar8,1);
  FUN_100642bd8(puVar16,plVar9,1);
  FUN_100642bd8(puVar16,plVar10,1);
  FUN_100642bd8(puVar16,plVar11,1);
  FUN_100654488(plVar12,1);
  if ((*(float *)(param_1 + 0x235) != 0.0) || (*(float *)((long)param_1 + 0x11ac) != 0.5)) {
    param_1[0x235] = 0x3f00000000000000;
    FUN_1000200a0(plVar12);
  }
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  *(uint *)((long)param_1 + 0x24c) = *(uint *)((long)param_1 + 0x24c) | 4;
  if ((*(float *)(param_1 + 0x43) != 0.0) || (*(float *)((long)param_1 + 0x21c) != 0.5)) {
    param_1[0x43] = 0x3f00000000000000;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  *(uint *)((long)param_1 + 0x694) = *(uint *)((long)param_1 + 0x694) & 0xfffffffb;
  if ((*(float *)(param_1 + 0xcc) != 0.0) || (*(float *)((long)param_1 + 0x664) != 0.5)) {
    param_1[0xcc] = 0x3f00000000000000;
    FUN_1000200a0(plVar7);
  }
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar14 = *(uint *)((long)param_1 + 0x33c);
  if ((uVar14 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x33c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x2600;
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_1 + 0x61) != 0.0) || (*(float *)((long)param_1 + 0x30c) != 0.5)) {
    param_1[0x61] = 0x3f00000000000000;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  uVar14 = *(uint *)((long)param_1 + 0x42c);
  if ((uVar14 & 0x7f80) != 0x3900) {
    *(uint *)((long)param_1 + 0x42c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x3900;
    FUN_1000200a0(plVar4);
  }
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 1;
  if ((*(float *)(param_1 + 0x7f) != 1.0) || (*(float *)((long)param_1 + 0x3fc) != 0.5)) {
    param_1[0x7f] = 0x3f0000003f800000;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_100652dd4(plVar8,&DAT_10115a164,2);
  if ((*(float *)(param_1 + 0xea) != 0.5) || (*(float *)((long)param_1 + 0x754) != 0.85)) {
    param_1[0xea] = 0x3f59999a3f000000;
    FUN_1000200a0(plVar8);
  }
  if ((*(float *)(param_1 + 0xe9) != 2.7) || (*(float *)((long)param_1 + 0x74c) != 1.0)) {
    param_1[0xe9] = 0x3f800000402ccccd;
    FUN_1000200a0(plVar8);
  }
  *(byte *)(param_1 + 0xfb) = *(byte *)(param_1 + 0xfb) | 2;
  FUN_100652cac(plVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_100652dd4(plVar9,&DAT_10115a164,2);
  if ((*(float *)(param_1 + 0x108) != 0.5) || (*(float *)((long)param_1 + 0x844) != 0.15)) {
    param_1[0x108] = 0x3e19999a3f000000;
    FUN_1000200a0(plVar9);
  }
  if ((*(float *)(param_1 + 0x107) != 2.7) || (*(float *)((long)param_1 + 0x83c) != 1.0)) {
    param_1[0x107] = 0x3f800000402ccccd;
    FUN_1000200a0(plVar9);
  }
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"shadow_bar");
  if ((*(float *)(param_1 + 0x9d) != 0.0) || (*(float *)((long)param_1 + 0x4ec) != 0.5)) {
    param_1[0x9d] = 0x3f00000000000000;
    FUN_1000200a0(plVar5);
  }
  uVar14 = *(uint *)((long)param_1 + 0x51c);
  if ((uVar14 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x51c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x5280;
    FUN_1000200a0(plVar5);
  }
  uVar17 = FUN_100345b94();
  uVar17 = FUN_10034c450(uVar17,"*KindredXPBarEffects*");
  FUN_1001aa350(plVar10,uVar17);
  FUN_100641464(&uStack_74,&local_78);
  FUN_10064e47c(uStack_74,local_78,plVar10);
  if ((*(float *)(param_1 + 0x126) != 0.5) || (*(float *)((long)param_1 + 0x934) != 0.5)) {
    param_1[0x126] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar10);
  }
  iVar15 = FUN_100126c88();
  ppuVar13 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar15 == 0) {
    ppuVar13 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar11,*ppuVar13);
  uVar14 = *(uint *)((long)param_1 + 0x10ac);
  if ((uVar14 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x10ac) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6600;
    FUN_1000200a0(plVar11);
  }
  FUN_10065165c(plVar11,1);
  return param_1;
}




long * thunk_FUN_1001b4d10(long *param_1)

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
  undefined **ppuVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  puVar16 = (undefined8 *)FUN_10064e20c();
  *puVar16 = &PTR_thunk_FUN_100196fa4_1014645b0;
  puVar16 = puVar16 + 0x17;
  FUN_1006421a8(puVar16);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x28;
  FUN_1006421a8(plVar1);
  param_1[0x28] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x39;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 0x57;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0x75;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0x93;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0xb1;
  FUN_1006421a8(plVar6);
  param_1[0xb1] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar7 = param_1 + 0xc2;
  thunk_FUN_100652c08();
  plVar8 = param_1 + 0xe0;
  thunk_FUN_100652c08();
  plVar9 = param_1 + 0xfe;
  thunk_FUN_100652c08(plVar9);
  plVar10 = param_1 + 0x11c;
  FUN_1001aa1d4(plVar10);
  thunk_FUN_1001bce98(param_1 + 0x158);
  plVar11 = param_1 + 0x205;
  thunk_FUN_100650e64(plVar11);
  plVar12 = param_1 + 0x22b;
  thunk_FUN_1006543ec(plVar12);
  param_1[0x25f] = 0;
  *(undefined4 *)(param_1 + 0x260) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x130c) = 0x101010100000000;
  *(undefined8 *)((long)param_1 + 0x1304) = 0;
  *(undefined1 *)((long)param_1 + 0x1314) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar16,1);
  FUN_100642bd8(puVar16,param_1 + 0x158,1);
  FUN_100642bd8(puVar16,plVar12,1);
  FUN_100642bd8(plVar12,plVar6,1);
  FUN_100642bd8(plVar6,plVar7,1);
  FUN_100642bd8(plVar12,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar1,plVar5,1);
  FUN_100642bd8(puVar16,plVar8,1);
  FUN_100642bd8(puVar16,plVar9,1);
  FUN_100642bd8(puVar16,plVar10,1);
  FUN_100642bd8(puVar16,plVar11,1);
  FUN_100654488(plVar12,1);
  if ((*(float *)(param_1 + 0x235) != 0.0) || (*(float *)((long)param_1 + 0x11ac) != 0.5)) {
    param_1[0x235] = 0x3f00000000000000;
    FUN_1000200a0(plVar12);
  }
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  *(uint *)((long)param_1 + 0x24c) = *(uint *)((long)param_1 + 0x24c) | 4;
  if ((*(float *)(param_1 + 0x43) != 0.0) || (*(float *)((long)param_1 + 0x21c) != 0.5)) {
    param_1[0x43] = 0x3f00000000000000;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  *(uint *)((long)param_1 + 0x694) = *(uint *)((long)param_1 + 0x694) & 0xfffffffb;
  if ((*(float *)(param_1 + 0xcc) != 0.0) || (*(float *)((long)param_1 + 0x664) != 0.5)) {
    param_1[0xcc] = 0x3f00000000000000;
    FUN_1000200a0(plVar7);
  }
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar14 = *(uint *)((long)param_1 + 0x33c);
  if ((uVar14 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x33c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x2600;
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_1 + 0x61) != 0.0) || (*(float *)((long)param_1 + 0x30c) != 0.5)) {
    param_1[0x61] = 0x3f00000000000000;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  uVar14 = *(uint *)((long)param_1 + 0x42c);
  if ((uVar14 & 0x7f80) != 0x3900) {
    *(uint *)((long)param_1 + 0x42c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x3900;
    FUN_1000200a0(plVar4);
  }
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 1;
  if ((*(float *)(param_1 + 0x7f) != 1.0) || (*(float *)((long)param_1 + 0x3fc) != 0.5)) {
    param_1[0x7f] = 0x3f0000003f800000;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_100652dd4(plVar8,&DAT_10115a164,2);
  if ((*(float *)(param_1 + 0xea) != 0.5) || (*(float *)((long)param_1 + 0x754) != 0.85)) {
    param_1[0xea] = 0x3f59999a3f000000;
    FUN_1000200a0(plVar8);
  }
  if ((*(float *)(param_1 + 0xe9) != 2.7) || (*(float *)((long)param_1 + 0x74c) != 1.0)) {
    param_1[0xe9] = 0x3f800000402ccccd;
    FUN_1000200a0(plVar8);
  }
  *(byte *)(param_1 + 0xfb) = *(byte *)(param_1 + 0xfb) | 2;
  FUN_100652cac(plVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_100652dd4(plVar9,&DAT_10115a164,2);
  if ((*(float *)(param_1 + 0x108) != 0.5) || (*(float *)((long)param_1 + 0x844) != 0.15)) {
    param_1[0x108] = 0x3e19999a3f000000;
    FUN_1000200a0(plVar9);
  }
  if ((*(float *)(param_1 + 0x107) != 2.7) || (*(float *)((long)param_1 + 0x83c) != 1.0)) {
    param_1[0x107] = 0x3f800000402ccccd;
    FUN_1000200a0(plVar9);
  }
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"shadow_bar");
  if ((*(float *)(param_1 + 0x9d) != 0.0) || (*(float *)((long)param_1 + 0x4ec) != 0.5)) {
    param_1[0x9d] = 0x3f00000000000000;
    FUN_1000200a0(plVar5);
  }
  uVar14 = *(uint *)((long)param_1 + 0x51c);
  if ((uVar14 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x51c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x5280;
    FUN_1000200a0(plVar5);
  }
  uVar17 = FUN_100345b94();
  uVar17 = FUN_10034c450(uVar17,"*KindredXPBarEffects*");
  FUN_1001aa350(plVar10,uVar17);
  FUN_100641464(&uStack_74,&uStack_78);
  FUN_10064e47c(uStack_74,uStack_78,plVar10);
  if ((*(float *)(param_1 + 0x126) != 0.5) || (*(float *)((long)param_1 + 0x934) != 0.5)) {
    param_1[0x126] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar10);
  }
  iVar15 = FUN_100126c88();
  ppuVar13 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar15 == 0) {
    ppuVar13 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar11,*ppuVar13);
  uVar14 = *(uint *)((long)param_1 + 0x10ac);
  if ((uVar14 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x10ac) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6600;
    FUN_1000200a0(plVar11);
  }
  FUN_10065165c(plVar11,1);
  return param_1;
}




void FUN_1001b53a8(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 local_58;
  undefined4 local_54;
  
  uVar3 = *(uint *)((long)param_3 + 0x33c) & 0xfffffffb;
  *(uint *)((long)param_3 + 0x33c) = uVar3 | (uint)*(byte *)((long)param_3 + 0x1312) << 2;
  plVar6 = param_3 + 0x75;
  uVar4 = *(uint *)((long)param_3 + 0x42c);
  *(uint *)((long)param_3 + 0x42c) = uVar4 | 4;
  *(uint *)((long)param_3 + 0x784) = *(uint *)((long)param_3 + 0x784) & 0xfffffffb;
  *(uint *)((long)param_3 + 0x874) = *(uint *)((long)param_3 + 0x874) & 0xfffffffb;
  plVar1 = param_3 + 0x39;
  if ((*(byte *)((long)param_3 + 0x694) >> 2 & 1) == 0) {
    if ((*(uint *)((long)param_3 + 0x24c) >> 2 & 1) == 0) {
      *(uint *)((long)param_3 + 0x33c) = uVar3;
      *(uint *)((long)param_3 + 0x42c) = uVar4 & 0xfffffffb;
      goto LAB_1001b55d8;
    }
    fVar7 = (float)FUN_100652e60(plVar1);
    fVar8 = *(float *)((long)param_3 + 0x20c);
    bVar5 = false;
    if ((*(float *)(param_3 + 0x7d) == fVar7) &&
       (bVar5 = false, !NAN(*(float *)((long)param_3 + 0x3ec)) && !NAN(fVar8))) {
      bVar5 = *(float *)((long)param_3 + 0x3ec) == fVar8;
    }
    if (!bVar5) {
      *(float *)(param_3 + 0x7d) = fVar7;
      *(float *)((long)param_3 + 0x3ec) = fVar8;
      FUN_1000200a0(plVar6);
    }
    fVar7 = (float)FUN_100652e60(plVar1);
    if (*(float *)(param_3 + 0x124) == fVar7) goto LAB_1001b55d8;
    plVar6 = param_3 + 0x11c;
    *(float *)(param_3 + 0x124) = fVar7;
  }
  else {
    plVar2 = param_3 + 0xc2;
    if ((*(uint *)((long)param_3 + 0x24c) >> 2 & 1) == 0) {
      fVar7 = (float)FUN_100652e60(plVar2);
      FUN_100652e60(plVar1);
      local_58 = NEON_fminnm(fVar7 + fVar7,0x428c0000);
    }
    else {
      fVar7 = (float)FUN_100652e60(plVar1);
      param_2 = 0x428c0000;
      uVar10 = NEON_fminnm(fVar7 * 0.2,0x428c0000);
      FUN_100652e60(plVar1);
      local_58 = uVar10;
    }
    local_54 = param_2;
    FUN_10064e48c(param_3 + 0x57,&local_58);
    fVar7 = (float)FUN_100652e60(plVar2);
    FUN_100652e60(plVar1);
    local_58 = NEON_fminnm(fVar7 + fVar7,0x428c0000);
    local_54 = param_2;
    FUN_10064e48c(plVar6,&local_58);
    fVar8 = *(float *)(param_3 + 0xca);
    fVar7 = (float)FUN_100652e60(plVar2);
    fVar7 = fVar7 + fVar8;
    fVar8 = *(float *)((long)param_3 + 0x20c);
    bVar5 = false;
    if ((*(float *)(param_3 + 0x7d) == fVar7) &&
       (bVar5 = false, !NAN(*(float *)((long)param_3 + 0x3ec)) && !NAN(fVar8))) {
      bVar5 = *(float *)((long)param_3 + 0x3ec) == fVar8;
    }
    if (!bVar5) {
      *(float *)(param_3 + 0x7d) = fVar7;
      *(float *)((long)param_3 + 0x3ec) = fVar8;
      FUN_1000200a0(plVar6);
    }
    if (*(float *)(param_3 + 0x124) != fVar7) {
      *(float *)(param_3 + 0x124) = fVar7;
      FUN_1000200a0(param_3 + 0x11c);
    }
    *(uint *)((long)param_3 + 0x784) =
         *(uint *)((long)param_3 + 0x784) & 0xfffffffb |
         (uint)*(byte *)((long)param_3 + 0x1311) << 2;
    *(uint *)((long)param_3 + 0x874) =
         *(uint *)((long)param_3 + 0x874) & 0xfffffffb |
         (uint)*(byte *)((long)param_3 + 0x1311) << 2;
    fVar7 = *(float *)(param_3 + 0xca);
    if (*(float *)(param_3 + 0xe8) != fVar7) {
      *(float *)(param_3 + 0xe8) = fVar7;
      FUN_1000200a0(param_3 + 0xe0);
      fVar7 = *(float *)(param_3 + 0xca);
    }
    if (*(float *)(param_3 + 0x106) == fVar7) goto LAB_1001b55d8;
    plVar6 = param_3 + 0xfe;
    *(float *)(param_3 + 0x106) = fVar7;
  }
  FUN_1000200a0(plVar6);
LAB_1001b55d8:
  if (*(char *)((long)param_3 + 0x1314) != '\0') {
    plVar6 = param_3 + 0x205;
    fVar7 = (float)(**(code **)(*param_3 + 0x50))(param_3);
    fVar8 = (float)FUN_10064259c(plVar6);
    fVar9 = 0.5;
    fVar7 = (fVar7 - fVar8) * 0.5;
    FUN_10064259c(plVar6);
    fVar9 = fVar9 * -0.5;
    bVar5 = false;
    if ((*(float *)(param_3 + 0x20d) == fVar7) &&
       (bVar5 = false, !NAN(*(float *)((long)param_3 + 0x106c)) && !NAN(fVar9))) {
      bVar5 = *(float *)((long)param_3 + 0x106c) == fVar9;
    }
    if (!bVar5) {
      *(float *)(param_3 + 0x20d) = fVar7;
      *(float *)((long)param_3 + 0x106c) = fVar9;
      FUN_1000200a0(plVar6);
    }
    fVar7 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    FUN_10065179c(fVar7 + -8.0,0,0x3f800000,plVar6);
  }
  return;
}




void FUN_1001b5688(long param_1,uint param_2,int param_3,uint param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  if (param_3 <= (int)param_2) {
    param_3 = param_2 + 1;
  }
  if ((int)param_4 <= (int)param_2) {
    param_4 = param_2;
  }
  fVar2 = (float)NEON_fminnm((float)(int)(param_4 - param_2) / (float)(int)(param_3 - param_2),
                             0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  lVar1 = param_1 + 0x1c8;
  fVar3 = *(float *)(param_1 + 0x12f8);
  FUN_100652e60(lVar1);
  FUN_10064e47c(fVar3 * fVar2,lVar1);
  FUN_1001b578c(param_1);
  if ((*(float *)(param_1 + 0x2f8) != *(float *)(param_1 + 0x208)) ||
     (*(float *)(param_1 + 0x2fc) != *(float *)(param_1 + 0x20c))) {
    *(float *)(param_1 + 0x2f8) = *(float *)(param_1 + 0x208);
    *(float *)(param_1 + 0x2fc) = *(float *)(param_1 + 0x20c);
    FUN_1000200a0(param_1 + 0x2b8);
  }
  fVar2 = (float)FUN_100652e60(lVar1);
  if ((*(float *)(param_1 + 1000) != fVar2) ||
     (*(float *)(param_1 + 0x3ec) != *(float *)(param_1 + 0x20c))) {
    *(float *)(param_1 + 1000) = fVar2;
    *(float *)(param_1 + 0x3ec) = *(float *)(param_1 + 0x20c);
    FUN_1000200a0(param_1 + 0x3a8);
  }
  *(uint *)(param_1 + 0x1308) = param_2;
  *(int *)(param_1 + 0x130c) = param_3;
  *(uint *)(param_1 + 0x1304) = param_4;
  return;
}




void FUN_1001b578c(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  
  lVar1 = param_3 + 0x1c8;
  if (*(char *)(param_3 + 0x1313) == '\0') {
    fVar3 = (float)FUN_100652e60(lVar1);
    uVar5 = NEON_fminnm(fVar3 * 0.2,0x428c0000);
    FUN_100652e60(lVar1);
    local_58 = uVar5;
    uStack_54 = param_2;
    FUN_10064e48c(param_3 + 0x2b8,&local_58);
    fVar3 = (float)FUN_100652e60(lVar1);
    uVar5 = NEON_fminnm(fVar3 * 0.2,0x428c0000);
    FUN_100652e60(lVar1);
    local_58 = uVar5;
    uStack_54 = param_2;
    FUN_10064e48c(param_3 + 0x3a8,&local_58);
    *(uint *)(param_3 + 0x51c) = *(uint *)(param_3 + 0x51c) & 0xfffffffb;
  }
  else {
    fVar3 = (float)FUN_100652e60(lVar1);
    FUN_100652e60(lVar1);
    FUN_10064e47c(fVar3 * 0.5,param_3 + 0x2b8);
    fVar3 = (float)FUN_100652e60(lVar1);
    FUN_100652e60(lVar1);
    FUN_10064e47c(fVar3 * 0.5,param_3 + 0x3a8);
    local_58 = FUN_100652e60(lVar1);
    uStack_54 = param_2;
    FUN_10064e48c(param_3 + 0x498,&local_58);
    *(uint *)(param_3 + 0x51c) = *(uint *)(param_3 + 0x51c) | 4;
    if (*(float *)(param_3 + 0x12f8) != 0.0) {
      fVar3 = (float)FUN_100652e60(lVar1);
      fVar4 = *(float *)(param_3 + 0x12f8) * 0.5;
      fVar4 = (fVar3 - fVar4) / fVar4;
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      uVar2 = *(uint *)(param_3 + 0x42c);
      if ((int)(fVar4 * 255.0) != (uVar2 >> 7 & 0xff)) {
        *(uint *)(param_3 + 0x42c) =
             uVar2 & 0xffff8000 | uVar2 & 0x7f | ((int)(fVar4 * 255.0) & 0xffU) << 7;
        FUN_1000200a0(param_3 + 0x3a8);
      }
    }
  }
  return;
}




void FUN_1001b5918(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,int param_6,undefined8 param_7)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  if (0 < param_6) {
    *(int *)((long)param_1 + 0x130c) = param_6;
  }
  if (param_5 == 0) {
    FUN_1001b5688(param_1,(int)param_1[0x261],*(undefined4 *)((long)param_1 + 0x130c));
    FUN_1001b5d78(param_1,param_3,param_3,param_4);
  }
  else {
    FUN_1001b5b04(param_1,param_2,param_3,param_4,param_7);
  }
  if (*(char *)((long)param_1 + 0x1314) != '\0') {
    uVar3 = FUN_1004e0150("MENU_PROGRESS_BAR_VALUE",0);
    thunk_FUN_1004e439c(auStack_50,uVar3);
    FUN_1004e313c(auStack_60);
    FUN_1004e38ac(auStack_60,"%u");
    FUN_1004e3120(auStack_70,"[VALUE]");
    FUN_1004e3bc4(auStack_50,0,auStack_70,auStack_60);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
    FUN_1004e313c(auStack_70);
    FUN_1004e38ac(auStack_70,"%u");
    FUN_1004e3120(auStack_80,"[MAX_VALUE]");
    FUN_1004e3bc4(auStack_50,0,auStack_80,auStack_70);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
    plVar1 = param_1 + 0x205;
    FUN_1006513c0(plVar1,auStack_50);
    fVar4 = (float)(**(code **)(*param_1 + 0x50))(param_1);
    fVar5 = (float)FUN_10064259c(plVar1);
    fVar6 = 0.5;
    fVar4 = (fVar4 - fVar5) * 0.5;
    FUN_10064259c(plVar1);
    fVar6 = fVar6 * -0.5;
    bVar2 = false;
    if ((*(float *)(param_1 + 0x20d) == fVar4) &&
       (bVar2 = false, !NAN(*(float *)((long)param_1 + 0x106c)) && !NAN(fVar6))) {
      bVar2 = *(float *)((long)param_1 + 0x106c) == fVar6;
    }
    if (!bVar2) {
      *(float *)(param_1 + 0x20d) = fVar4;
      *(float *)((long)param_1 + 0x106c) = fVar6;
      FUN_1000200a0(plVar1);
    }
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
  }
  return;
}




void FUN_1001b5b04(undefined8 param_1,long *param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  
  iVar4 = (int)param_2[0x261];
  iVar5 = *(int *)((long)param_2 + 0x130c);
  iVar2 = param_3;
  if (iVar5 <= param_3) {
    iVar2 = iVar5;
  }
  iVar3 = iVar4;
  if (iVar4 <= iVar2) {
    iVar3 = iVar2;
  }
  if (param_6 == 0) {
    iVar3 = param_3;
  }
  fVar9 = (float)NEON_fminnm((float)(iVar3 - iVar4) / (float)(iVar5 - iVar4),0x3f800000);
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  uVar11 = (ulong)(uint)*(float *)(param_2 + 0x25f);
  fVar9 = fVar9 * *(float *)(param_2 + 0x25f);
  plVar1 = param_2 + 0x39;
  FUN_100652e60(plVar1);
  (**(code **)(*param_2 + 0x158))(param_2);
  uVar6 = FUN_100640ce8(fVar9,uVar11,param_1,plVar1,FUN_10001f160);
  FUN_100640a74(param_1,plVar1,param_4,FUN_10001f160,2);
  uVar7 = FUN_10001f4d4();
  FUN_10063f2a4(uVar7,uVar6);
  FUN_100642324(plVar1);
  FUN_100642b14(plVar1,uVar7);
  lVar8 = FUN_10008e900();
  *(code **)(lVar8 + 0x10) = FUN_1001b67a8;
  *(long **)(lVar8 + 0x20) = param_2;
  FUN_100642b14(plVar1,lVar8);
  plVar1 = param_2 + 0x57;
  uVar6 = FUN_100640ce8(fVar9 * 0.5,uVar11,param_1,plVar1,FUN_10001f160);
  FUN_100642324(plVar1);
  FUN_100642b14(plVar1,uVar6);
  plVar1 = param_2 + 0x75;
  uVar6 = FUN_100640ce8(fVar9 * 0.5,uVar11,param_1,plVar1,FUN_10001f160);
  fVar10 = (fVar9 - *(float *)(param_2 + 0x25f) * 0.5) / (*(float *)(param_2 + 0x25f) * 0.5);
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  FUN_100640840(fVar10,param_1,FUN_10001f160);
  FUN_100640a74(param_1,plVar1,param_5,FUN_10001f160,2);
  FUN_1006408f4(fVar9,*(undefined4 *)((long)param_2 + 0x20c),param_1,FUN_10001f160);
  uVar7 = FUN_10001f4d4();
  FUN_10063f2a4(uVar7,uVar6);
  FUN_100642324(plVar1);
  FUN_100642b14(plVar1,uVar7);
  plVar1 = param_2 + 0x93;
  uVar6 = FUN_100640ce8(fVar9,uVar11,param_1,plVar1,FUN_10001f160);
  FUN_100642324(plVar1);
  FUN_100642b14(plVar1,uVar6);
  *(int *)((long)param_2 + 0x1304) = iVar3;
  return;
}




void FUN_1001b5d78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100652dd4(param_1 + 0x1c8,param_2,2);
  FUN_100652dd4(param_1 + 0x610,param_3,2);
  FUN_100652dd4(param_1 + 0x3a8,param_4,2);
  return;
}




void FUN_1001b5dcc(long param_1)

{
  FUN_1006513c0(param_1 + 0x1028);
  *(undefined1 *)(param_1 + 0x1314) = 1;
  return;
}




void FUN_1001b5e00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  
  *(undefined1 *)(param_3 + 0x1313) = param_7;
  uVar8 = param_2;
  FUN_100654488(param_3 + 0x1158,0);
  fVar6 = (float)uVar8;
  uVar4 = *(uint *)(param_3 + 0x33c);
  if (*(char *)(param_3 + 0x1313) == '\0') {
    if ((uVar4 & 0x7f80) != 0x2600) {
      *(uint *)(param_3 + 0x33c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x2600;
      FUN_1000200a0(param_3 + 0x2b8);
    }
    uVar4 = *(uint *)(param_3 + 0x42c);
    uVar5 = 0x3900;
  }
  else {
    uVar5 = 0x4c80;
    if ((uVar4 & 0x7f80) != 0x4c80) {
      *(uint *)(param_3 + 0x33c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x4c80;
      FUN_1000200a0(param_3 + 0x2b8);
    }
    uVar4 = *(uint *)(param_3 + 0x42c);
  }
  if ((uVar4 & 0x7f80) != uVar5) {
    *(uint *)(param_3 + 0x42c) = uVar4 & 0xffff807f | uVar5;
    FUN_1000200a0(param_3 + 0x3a8);
  }
  fVar9 = (float)param_2;
  if (*(float *)(param_3 + 0x12fc) == 0.0) {
    FUN_100652e60(param_3 + 0x1c8);
    fVar6 = ((fVar6 + (fVar9 - fVar6) * 0.5) * 1.5) / fVar6;
    bVar3 = false;
    if ((*(float *)(param_3 + 0x928) == fVar6) &&
       (bVar3 = false, !NAN(*(float *)(param_3 + 0x92c)) && !NAN(fVar6))) {
      bVar3 = *(float *)(param_3 + 0x92c) == fVar6;
    }
    if (!bVar3) {
      *(float *)(param_3 + 0x928) = fVar6;
      *(float *)(param_3 + 0x92c) = fVar6;
      FUN_1000200a0(param_3 + 0x8e0);
    }
  }
  lVar1 = param_3 + 0x1c8;
  FUN_10064e47c(0,param_2,lVar1);
  fVar6 = *(float *)(param_3 + 0x1300) * fVar9;
  FUN_10064e47c(0,fVar6,param_3 + 0x610);
  lVar2 = param_3 + 0xac0;
  FUN_100652e60(lVar1);
  FUN_1001bd128((float)param_1 + 4.0,fVar6 + 4.0,0x40800000,lVar2);
  uVar7 = 0xc0800000;
  if ((*(float *)(param_3 + 0xb00) != -4.0) || (*(float *)(param_3 + 0xb04) != 0.0)) {
    *(undefined8 *)(param_3 + 0xb00) = 0xc0800000;
    uVar7 = 0xc0800000;
    FUN_1000200a0(lVar2);
  }
  FUN_1001bd340(0x3eb33333,lVar2,&DAT_10115a168);
  *(float *)(param_3 + 0x12f8) = (float)param_1;
  FUN_100652e60(lVar1);
  *(undefined4 *)(param_3 + 0x12fc) = uVar7;
  if (*(float *)(param_3 + 0x744) != fVar9 * -0.5) {
    *(float *)(param_3 + 0x744) = fVar9 * -0.5;
    FUN_1000200a0(param_3 + 0x700);
  }
  if (*(float *)(param_3 + 0x834) != fVar9 * 0.5) {
    *(float *)(param_3 + 0x834) = fVar9 * 0.5;
    FUN_1000200a0(param_3 + 0x7f0);
  }
  *(uint *)(param_3 + 0x694) = *(uint *)(param_3 + 0x694) & 0xfffffffb;
  FUN_1001b5688(param_3,param_4,param_5,param_6);
  FUN_10064e47c(param_1,param_2,param_3);
  return;
}




void FUN_1001b6050(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_PROGRESS_BAR_ROLLED_OVER");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1001b60a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1001b6050(param_2);
  return;
}




void FUN_1001b60a8(long param_1)

{
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  return;
}




void FUN_1001b60b8(float param_1,float param_2,long param_3,int param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ushort uVar11;
  code *pcVar12;
  ushort *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_98;
  char local_81;
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  uVar2 = *(uint *)(param_3 + 0x1308) & ((int)*(uint *)(param_3 + 0x1308) >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_3 + 0x1308) = uVar2;
  uVar5 = *(uint *)(param_3 + 0x130c);
  if ((int)uVar5 <= (int)(uVar2 + 1)) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_3 + 0x130c) = uVar5;
  uVar3 = *(uint *)(param_3 + 0x1304);
  if ((int)*(uint *)(param_3 + 0x1304) <= (int)uVar2) {
    uVar3 = uVar2;
  }
  iVar4 = (param_4 - uVar5) + uVar3;
  uVar2 = uVar5;
  if ((int)uVar3 <= (int)uVar5) {
    iVar4 = param_4;
    uVar2 = uVar3;
  }
  *(uint *)(param_3 + 0x1304) = uVar2;
  lVar1 = param_3 + 0x610;
  *(uint *)(param_3 + 0x694) = *(uint *)(param_3 + 0x694) | 4;
  FUN_100642324(lVar1);
  FUN_100652e60(lVar1);
  FUN_10064e47c(0,lVar1);
  *(uint *)(param_3 + 0x24c) = *(uint *)(param_3 + 0x24c) | 4;
  FUN_100642324(param_3);
  fVar14 = (float)FUN_100652e60(param_3 + 0x1c8);
  fVar16 = *(float *)(param_3 + 0x650);
  if ((int)uVar5 < (int)(iVar4 + uVar2) && uVar5 != param_5) {
    if (fVar16 != fVar14) {
      *(float *)(param_3 + 0x650) = fVar14;
      FUN_1000200a0(lVar1);
    }
    iVar6 = *(int *)(param_3 + 0x130c);
    iVar8 = iVar6 - *(int *)(param_3 + 0x1304);
    fVar14 = (float)iVar8;
    iVar7 = *(int *)(param_3 + 0x1308);
    uVar9 = FUN_10001f55c();
    FUN_10063f0e8(param_2);
    FUN_100642b14(lVar1,uVar9);
    FUN_1001b6574(param_3);
    if (*(char *)(param_3 + 0x1310) != '\0') {
      uVar9 = FUN_1001a47a4();
      FUN_10001549c(&local_98,"build://Sounds/UI.assetbundle/ui_level_up_bar_loop_1.mp3");
      FUN_1001e1e48(uVar9,&local_98,0,0);
      if (local_81 < '\0') {
        operator_delete(local_98);
      }
      FUN_100642b14(lVar1,uVar9);
    }
    uVar9 = FUN_1001b6654();
    fVar15 = *(float *)(param_3 + 0x12f8);
    FUN_100652e60(lVar1);
    local_98 = (void *)CONCAT44(fVar16,(fVar15 * fVar14) / (float)(iVar6 - iVar7));
    FUN_100640540(uVar9,lVar1,&local_98);
    FUN_10063f0e8((param_1 * fVar14) / (float)iVar4,uVar9);
    FUN_10063f130(uVar9,FUN_10001f218);
    FUN_100642b14(lVar1,uVar9);
    lVar10 = FUN_10008e900();
    *(code **)(lVar10 + 0x10) = FUN_1001b60a0;
    *(undefined8 *)(lVar10 + 0x20) = 0;
    FUN_100642b14(lVar1,lVar10);
    uVar9 = FUN_10001f55c();
    FUN_10063f0e8(0);
    FUN_100642b14(lVar1,uVar9);
    iVar6 = *(int *)(param_3 + 0x130c);
    *(int *)(param_3 + 0x1308) = iVar6;
    *(uint *)(param_3 + 0x130c) = param_5;
    *(int *)(param_3 + 0x1304) = *(int *)(param_3 + 0x1304) + iVar4;
    fVar14 = (float)(iVar4 - iVar8);
    uVar9 = FUN_1001b6654();
    FUN_100652e60(lVar1);
    local_98 = (void *)((ulong)(uint)fVar16 << 0x20);
    FUN_100640540(uVar9,lVar1,&local_98);
    FUN_10063f0e8(0,uVar9);
    FUN_100642b14(lVar1,uVar9);
    lVar10 = DAT_101dbd2f8;
    uVar11 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar11 == 0xffff) {
      puVar13 = (ushort *)0x0;
    }
    else {
      puVar13 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar11 * 0x40 + 0x10);
      if (uVar11 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar11 = 0xffff;
      }
      else {
        uVar11 = *puVar13;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar11;
      *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
      FUN_10063fb5c(puVar13);
      *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
    }
    FUN_10063f0e8(0,puVar13);
    local_98 = (void *)0x3f80000000000000;
    FUN_10063fb90(puVar13,&local_98);
    FUN_100642b14(lVar1,puVar13);
    lVar10 = FUN_10008e900();
    *(code **)(lVar10 + 0x10) = FUN_1001b60a8;
    *(long *)(lVar10 + 0x20) = param_3 + 0x1c8;
    FUN_100642b14(lVar1,lVar10);
    param_1 = (param_1 * fVar14) / (float)iVar4;
    uVar9 = FUN_1001b6654();
    fVar15 = *(float *)(param_3 + 0x12f8);
    FUN_100652e60(lVar1);
    local_98 = (void *)CONCAT44(fVar16,(fVar15 * fVar14) / (float)(int)(param_5 - iVar6));
    FUN_100640540(uVar9,lVar1,&local_98);
    pcVar12 = FUN_10001f4ac;
  }
  else {
    if (fVar16 != fVar14) {
      *(float *)(param_3 + 0x650) = fVar14;
      FUN_1000200a0(lVar1);
    }
    iVar6 = *(int *)(param_3 + 0x130c);
    iVar7 = *(int *)(param_3 + 0x1308);
    uVar9 = FUN_10001f55c();
    FUN_10063f0e8(param_2);
    FUN_100642b14(lVar1,uVar9);
    FUN_1001b6574(param_3);
    if (*(char *)(param_3 + 0x1310) != '\0') {
      uVar9 = FUN_1001a47a4();
      FUN_10001549c(&local_98,"build://Sounds/UI.assetbundle/ui_level_up_bar_loop_1.mp3");
      FUN_1001e1e48(uVar9,&local_98,0,0);
      if (local_81 < '\0') {
        operator_delete(local_98);
      }
      FUN_100642b14(lVar1,uVar9);
    }
    uVar9 = FUN_1001b6654();
    fVar14 = *(float *)(param_3 + 0x12f8);
    FUN_100652e60(lVar1);
    local_98 = (void *)CONCAT44(fVar16,(fVar14 * (float)iVar4) / (float)(iVar6 - iVar7));
    FUN_100640540(uVar9,lVar1,&local_98);
    pcVar12 = FUN_10001f218;
  }
  FUN_10063f0e8(param_1,uVar9);
  FUN_10063f130(uVar9,pcVar12);
  FUN_100642b14(lVar1,uVar9);
  return;
}




void FUN_1001b6574(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  void *local_48 [2];
  char local_31;
  
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
    FUN_1001e1d58(puVar3);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10001549c(local_48,"LEADING_EDGE");
  FUN_1001e1dcc(puVar3,param_1 + 0x8e0,local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100642b14(param_1 + 0x610,puVar3);
  return;
}




undefined8 FUN_1001b6654(void)

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
    uVar2 = FUN_100640508();
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  return uVar2;
}




void FUN_1001b66dc(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100652cdc(param_2 + 0x1c8);
  FUN_100652cdc(param_2 + 0x610,param_4);
  *(undefined4 *)(param_2 + 0x1300) = param_1;
  return;
}




void FUN_1001b6720(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  FUN_100652e14(param_3 + 0x1c8);
  FUN_100652e14(param_2,param_3 + 0x610);
  return;
}




void FUN_1001b6758(long param_1)

{
  FUN_100651038(param_1 + 0x1028);
  return;
}




void FUN_1001b6764(long param_1)

{
  FUN_1001aa720(param_1 + 0x8e0);
  return;
}




void FUN_1001b676c(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100642d08(param_1 + 0x8e0);
  if (iVar1 != 0) {
    FUN_1006423ec(param_1 + 0x8e0,1);
    return;
  }
  return;
}




void FUN_1001b67a8(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001001b67b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x160))();
    return;
  }
  return;
}




void FUN_1001b67bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_SCREEN_PROGRESS_BAR_ANIMATION_BEGIN");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1001b680c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  FUN_1001b578c();
  uVar1 = FUN_100644a94("UI::EVENT_PROGRESS_BAR_ANIMATION_FINISHED");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1001b6864(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100196fa4();
  operator_delete(pvVar1);
  return;
}




long FUN_1001b6878(long param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100182684(param_1,0);
  puVar1[0x3dd] = 0;
  *puVar1 = &PTR_thunk_FUN_1001b7044_101464728;
  puVar1[0x3dc] = &PTR_FUN_101464900;
  thunk_FUN_100652c08(puVar1 + 0x3de);
  FUN_1006421a8(param_1 + 0x1fe0);
  *(undefined ***)(param_1 + 0x1fe0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x2068);
  thunk_FUN_100650e64(param_1 + 0x2158);
  thunk_FUN_100652c08(param_1 + 0x2288);
  thunk_FUN_100652c08(param_1 + 0x2378);
  *(undefined8 *)(param_1 + 0x2488) = 0;
  *(undefined8 *)(param_1 + 0x2470) = 0;
  *(undefined8 *)(param_1 + 0x2468) = 0;
  *(undefined8 *)(param_1 + 0x2480) = 0;
  *(undefined8 *)(param_1 + 0x2478) = 0;
  FUN_10003330c(param_1 + 0x2490,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x24a8,param_2 + 0x60);
  FUN_1004e313c(param_1 + 0x24c0);
  FUN_1004e313c(param_1 + 0x24d0);
  *(undefined4 *)(param_1 + 0x24e0) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x24e4) = 0;
  *(undefined1 *)(param_1 + 0x24e6) = 0;
  FUN_1001b6988(param_1);
  return param_1;
}




void FUN_1001b6988(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  code *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3de,1);
  plVar2 = param_1 + 0x3fc;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  plVar3 = param_1 + 0x40d;
  FUN_100642bd8(plVar2,plVar3,1);
  plVar4 = param_1 + 0x42b;
  FUN_100642bd8(plVar2,plVar4,1);
  plVar2 = param_1 + 0x451;
  FUN_100642bd8(plVar4,plVar2,1);
  plVar5 = param_1 + 0x46f;
  FUN_100642bd8(plVar4,plVar5,1);
  uVar8 = FUN_1004e0150("MARKET_GOLD_BUNDLE_BUY_UNAVAILABLE",0);
  FUN_1000153b4(param_1 + 0x49a,uVar8);
  iVar7 = FUN_100126c88();
  uVar9 = 0x434c0000;
  if (iVar7 == 0) {
    uVar9 = 0x432e0000;
  }
  FUN_1004e3170(&local_a0,&DAT_101d91198);
  FUN_1001816d4(0,uVar9,uVar9,param_1,0,&local_a0,&DAT_10115a168,&DAT_101dc1cb8,0);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar7 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(param_1 + 0xe3,*ppuVar6);
  FUN_10065165c(param_1 + 0xe3,1);
  FUN_1001b495c(0xbf800000,param_1);
  local_a0 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_a0);
  FUN_100181bd0(0x3f800000,param_1,&DAT_10115a164);
  FUN_1001b4964(param_1,1);
  local_78 = DAT_101d918e0;
  local_a0 = thunk_FUN_1001b875c;
  plVar1 = param_1 + 1;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(plVar1,&local_a0);
  local_78 = DAT_101d918e4;
  local_a0 = thunk_FUN_1001b87b8;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(plVar1,&local_a0);
  local_78 = DAT_101d918e8;
  local_a0 = FUN_1001b8754;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(plVar1,&local_a0);
  FUN_100652ca4(param_1 + 0x3de,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100181c08(0x40a00000,param_1);
  FUN_100652ca4(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970);
  if ((*(float *)(param_1 + 0x417) != 0.0) || (*(float *)((long)param_1 + 0x20bc) != 0.5)) {
    param_1[0x417] = 0x3f00000000000000;
    FUN_1000200a0(plVar3);
  }
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar7 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(plVar4,*ppuVar6);
  if ((*(float *)(param_1 + 0x435) != 0.0) || (*(float *)((long)param_1 + 0x21ac) != 0.5)) {
    param_1[0x435] = 0x3f00000000000000;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_telestration_ban");
  local_a0 = (code *)CONCAT44(local_a0._4_4_,0xff2909cc);
  FUN_100652dd4(plVar2,&local_a0,2);
  if ((*(float *)(param_1 + 0x45b) != 0.0) || (*(float *)((long)param_1 + 0x22dc) != 0.5)) {
    param_1[0x45b] = 0x3f00000000000000;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_telestration_ban");
  local_a0 = (code *)CONCAT44(local_a0._4_4_,0xff2909cc);
  FUN_100652dd4(plVar5,&local_a0,2);
  if ((*(float *)(param_1 + 0x479) != 0.0) || (*(float *)((long)param_1 + 0x23cc) != 0.5)) {
    param_1[0x479] = 0x3f00000000000000;
    FUN_1000200a0(plVar5);
  }
  if (*(float *)(param_1 + 0x477) != 4.0) {
    *(undefined4 *)(param_1 + 0x477) = 0x40800000;
    FUN_1000200a0(plVar5);
  }
  *(uint *)((long)param_1 + 0x2064) = *(uint *)((long)param_1 + 0x2064) & 0xffffffbb;
  FUN_10018187c(param_1,1);
  FUN_1001b72d0(param_1);
  return;
}




long thunk_FUN_1001b6878(long param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100182684(param_1,0);
  puVar1[0x3dd] = 0;
  *puVar1 = &PTR_thunk_FUN_1001b7044_101464728;
  puVar1[0x3dc] = &PTR_FUN_101464900;
  thunk_FUN_100652c08(puVar1 + 0x3de);
  FUN_1006421a8(param_1 + 0x1fe0);
  *(undefined ***)(param_1 + 0x1fe0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x2068);
  thunk_FUN_100650e64(param_1 + 0x2158);
  thunk_FUN_100652c08(param_1 + 0x2288);
  thunk_FUN_100652c08(param_1 + 0x2378);
  *(undefined8 *)(param_1 + 0x2488) = 0;
  *(undefined8 *)(param_1 + 0x2470) = 0;
  *(undefined8 *)(param_1 + 0x2468) = 0;
  *(undefined8 *)(param_1 + 0x2480) = 0;
  *(undefined8 *)(param_1 + 0x2478) = 0;
  FUN_10003330c(param_1 + 0x2490,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x24a8,param_2 + 0x60);
  FUN_1004e313c(param_1 + 0x24c0);
  FUN_1004e313c(param_1 + 0x24d0);
  *(undefined4 *)(param_1 + 0x24e0) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x24e4) = 0;
  *(undefined1 *)(param_1 + 0x24e6) = 0;
  FUN_1001b6988(param_1);
  return param_1;
}




long FUN_1001b6da8(undefined1 param_1,long param_2,undefined8 param_3,char param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  
  puVar1 = (undefined8 *)FUN_100182684(param_2,0);
  puVar1[0x3dd] = 0;
  *puVar1 = &PTR_thunk_FUN_1001b7044_101464728;
  puVar1[0x3dc] = &PTR_FUN_101464900;
  thunk_FUN_100652c08(puVar1 + 0x3de);
  FUN_1006421a8(param_2 + 0x1fe0);
  *(undefined ***)(param_2 + 0x1fe0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_2 + 0x2068);
  thunk_FUN_100650e64(param_2 + 0x2158);
  thunk_FUN_100652c08(param_2 + 0x2288);
  thunk_FUN_100652c08(param_2 + 0x2378);
  *(undefined8 *)(param_2 + 0x2488) = 0;
  *(undefined8 *)(param_2 + 0x2470) = 0;
  *(undefined8 *)(param_2 + 0x2468) = 0;
  *(undefined8 *)(param_2 + 0x2480) = 0;
  *(undefined8 *)(param_2 + 0x2478) = 0;
  FUN_10003330c(param_2 + 0x2490,&DAT_101d91198);
  FUN_10003330c(param_2 + 0x24a8,param_3);
  FUN_1004e313c(param_2 + 0x24c0);
  FUN_1004e313c(param_2 + 0x24d0);
  *(undefined4 *)(param_2 + 0x24e0) = 0xffffffff;
  *(char *)(param_2 + 0x24e4) = param_4;
  *(undefined2 *)(param_2 + 0x24e5) = 0;
  FUN_1001b6988(param_2);
  uVar2 = 0;
  if (*(char *)(param_2 + 0x24e4) != '\0') {
    uVar2 = param_1;
  }
  FUN_1001829b4(uVar2,param_2);
  return param_2;
}




long thunk_FUN_1001b6da8(undefined1 param_1,long param_2,undefined8 param_3,char param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  
  puVar1 = (undefined8 *)FUN_100182684(param_2,0);
  puVar1[0x3dd] = 0;
  *puVar1 = &PTR_thunk_FUN_1001b7044_101464728;
  puVar1[0x3dc] = &PTR_FUN_101464900;
  thunk_FUN_100652c08(puVar1 + 0x3de);
  FUN_1006421a8(param_2 + 0x1fe0);
  *(undefined ***)(param_2 + 0x1fe0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_2 + 0x2068);
  thunk_FUN_100650e64(param_2 + 0x2158);
  thunk_FUN_100652c08(param_2 + 0x2288);
  thunk_FUN_100652c08(param_2 + 0x2378);
  *(undefined8 *)(param_2 + 0x2488) = 0;
  *(undefined8 *)(param_2 + 0x2470) = 0;
  *(undefined8 *)(param_2 + 0x2468) = 0;
  *(undefined8 *)(param_2 + 0x2480) = 0;
  *(undefined8 *)(param_2 + 0x2478) = 0;
  FUN_10003330c(param_2 + 0x2490,&DAT_101d91198);
  FUN_10003330c(param_2 + 0x24a8,param_3);
  FUN_1004e313c(param_2 + 0x24c0);
  FUN_1004e313c(param_2 + 0x24d0);
  *(undefined4 *)(param_2 + 0x24e0) = 0xffffffff;
  *(char *)(param_2 + 0x24e4) = param_4;
  *(undefined2 *)(param_2 + 0x24e5) = 0;
  FUN_1001b6988(param_2);
  uVar2 = 0;
  if (*(char *)(param_2 + 0x24e4) != '\0') {
    uVar2 = param_1;
  }
  FUN_1001829b4(uVar2,param_2);
  return param_2;
}




long FUN_1001b6ee4(undefined1 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  
  puVar1 = (undefined8 *)FUN_100182684(param_2,0);
  puVar1[0x3dd] = 0;
  *puVar1 = &PTR_thunk_FUN_1001b7044_101464728;
  puVar1[0x3dc] = &PTR_FUN_101464900;
  thunk_FUN_100652c08(puVar1 + 0x3de);
  FUN_1006421a8(param_2 + 0x1fe0);
  *(undefined ***)(param_2 + 0x1fe0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_2 + 0x2068);
  thunk_FUN_100650e64(param_2 + 0x2158);
  thunk_FUN_100652c08(param_2 + 0x2288);
  thunk_FUN_100652c08(param_2 + 0x2378);
  *(undefined8 *)(param_2 + 0x2470) = 0;
  *(undefined8 *)(param_2 + 0x2468) = 0;
  FUN_10003330c(param_2 + 0x2478,param_3);
  FUN_10003330c(param_2 + 0x2490,param_4);
  FUN_10003330c(param_2 + 0x24a8,&DAT_101d91198);
  FUN_1004e313c(param_2 + 0x24c0);
  FUN_1004e313c(param_2 + 0x24d0);
  *(undefined4 *)(param_2 + 0x24e0) = 0xffffffff;
  *(char *)(param_2 + 0x24e4) = param_5;
  *(undefined2 *)(param_2 + 0x24e5) = 0;
  FUN_1001b6988(param_2);
  uVar2 = 0;
  if (*(char *)(param_2 + 0x24e4) != '\0') {
    uVar2 = param_1;
  }
  FUN_1001829b4(uVar2,param_2);
  FUN_100128400(puVar1 + 0x3dc);
  return param_2;
}




long thunk_FUN_1001b6ee4(undefined1 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                        char param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  
  puVar1 = (undefined8 *)FUN_100182684(param_2,0);
  puVar1[0x3dd] = 0;
  *puVar1 = &PTR_thunk_FUN_1001b7044_101464728;
  puVar1[0x3dc] = &PTR_FUN_101464900;
  thunk_FUN_100652c08(puVar1 + 0x3de);
  FUN_1006421a8(param_2 + 0x1fe0);
  *(undefined ***)(param_2 + 0x1fe0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_2 + 0x2068);
  thunk_FUN_100650e64(param_2 + 0x2158);
  thunk_FUN_100652c08(param_2 + 0x2288);
  thunk_FUN_100652c08(param_2 + 0x2378);
  *(undefined8 *)(param_2 + 0x2470) = 0;
  *(undefined8 *)(param_2 + 0x2468) = 0;
  FUN_10003330c(param_2 + 0x2478,param_3);
  FUN_10003330c(param_2 + 0x2490,param_4);
  FUN_10003330c(param_2 + 0x24a8,&DAT_101d91198);
  FUN_1004e313c(param_2 + 0x24c0);
  FUN_1004e313c(param_2 + 0x24d0);
  *(undefined4 *)(param_2 + 0x24e0) = 0xffffffff;
  *(char *)(param_2 + 0x24e4) = param_5;
  *(undefined2 *)(param_2 + 0x24e5) = 0;
  FUN_1001b6988(param_2);
  uVar2 = 0;
  if (*(char *)(param_2 + 0x24e4) != '\0') {
    uVar2 = param_1;
  }
  FUN_1001829b4(uVar2,param_2);
  FUN_100128400(puVar1 + 0x3dc);
  return param_2;
}




void FUN_1001b7044(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001b7044_101464728;
  param_1[0x3dc] = &PTR_FUN_101464900;
  FUN_100128188(param_1 + 0x3dc);
  if ((void *)param_1[0x49b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x49b]);
    param_1[0x49b] = 0;
    param_1[0x49a] = 0;
  }
  if ((void *)param_1[0x499] != (void *)0x0) {
    operator_delete__((void *)param_1[0x499]);
    param_1[0x499] = 0;
    param_1[0x498] = 0;
  }
  if (*(char *)((long)param_1 + 0x24bf) < '\0') {
    operator_delete((void *)param_1[0x495]);
  }
  if (*(char *)((long)param_1 + 0x24a7) < '\0') {
    operator_delete((void *)param_1[0x492]);
  }
  if (*(char *)((long)param_1 + 0x248f) < '\0') {
    operator_delete((void *)param_1[0x48f]);
  }
  FUN_10019ce3c(param_1 + 0x48d,1);
  param_1[0x46f] = &PTR_FUN_1014a7108;
  param_1[0x486] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x489);
  FUN_10064e2bc(param_1 + 0x46f);
  param_1[0x451] = &PTR_FUN_1014a7108;
  param_1[0x468] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x46b);
  FUN_10064e2bc(param_1 + 0x451);
  thunk_FUN_100651068(param_1 + 0x42b);
  param_1[0x40d] = &PTR_FUN_1014a7108;
  param_1[0x424] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x427);
  FUN_10064e2bc(param_1 + 0x40d);
  FUN_10064221c(param_1 + 0x3fc);
  param_1[0x3de] = &PTR_FUN_1014a7108;
  param_1[0x3f5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3f8);
  FUN_10064e2bc(param_1 + 0x3de);
  FUN_100128158(param_1 + 0x3dc);
  *param_1 = &PTR_FUN_10145efd0;
  FUN_10064e2bc(param_1 + 0x3a6);
  FUN_10064221c(param_1 + 0x395);
  FUN_10064e2bc(param_1 + 0x361);
  FUN_10064221c(param_1 + 0x350);
  thunk_FUN_100651068(param_1 + 0x32a);
  thunk_FUN_100651068(param_1 + 0x304);
  param_1[0x2e6] = &PTR_FUN_1014a7108;
  param_1[0x2fd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x300);
  FUN_10064e2bc(param_1 + 0x2e6);
  param_1[0x2c8] = &PTR_FUN_1014a7108;
  param_1[0x2df] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2e2);
  FUN_10064e2bc(param_1 + 0x2c8);
  FUN_10064221c(param_1 + 0x2b7);
  FUN_10003bd40(param_1);
  return;
}




void thunk_FUN_1001b7044(void)

{
  FUN_1001b7044();
  return;
}




void FUN_1001b7294(long param_1)

{
  FUN_1001b7044(param_1 + -0x1ee0);
  return;
}




void FUN_1001b72a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001b7044();
  operator_delete(pvVar1);
  return;
}




void FUN_1001b72b4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001b7044(param_1 + -0x1ee0);
  operator_delete(pvVar1);
  return;
}




void FUN_1001b72d0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_100136ad0();
  if (iVar1 != 0) {
    lVar2 = FUN_10032c190();
    if (*(char *)(lVar2 + 0x38) != '\0') {
      FUN_1001b7360(param_1);
      FUN_1001b7780(param_1);
      uVar3 = FUN_1004e3624(param_1 + 0x24c0);
      FUN_1001b7898(param_1,uVar3,&DAT_101d91650);
      FUN_1001b78f0(param_1);
      *(undefined1 *)(param_1 + 0x24e5) = 1;
      return;
    }
  }
  FUN_1001b7898(param_1,1,&DAT_101d91650);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1001b7360(long param_1)

{
  undefined8 *puVar1;
  undefined8 *******pppppppuVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 *******pppppppuVar14;
  size_t sVar15;
  size_t sVar16;
  size_t sVar17;
  byte bVar18;
  size_t sVar19;
  void *local_90 [2];
  char local_79;
  undefined8 *******local_78;
  size_t local_70;
  byte local_61;
  
  FUN_10003330c(&local_78,&DAT_101d91198);
  FUN_10001549c(local_90,"gold");
  iVar7 = FUN_1001b7c84(param_1,local_90);
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
    if (iVar7 != 0) goto LAB_1001b73c4;
LAB_1001b73dc:
    FUN_10001549c(local_90,"silver");
    iVar7 = FUN_1001b7c84(param_1,local_90);
    if (local_79 < '\0') {
      operator_delete(local_90[0]);
    }
    if (iVar7 != 0) {
      pcVar8 = "glory_icon_small";
      goto LAB_1001b74a0;
    }
    FUN_10001549c(local_90,"opal");
    iVar7 = FUN_1001b7c84(param_1,local_90);
    if (local_79 < '\0') {
      operator_delete(local_90[0]);
    }
    if (iVar7 != 0) {
      pcVar8 = "opal_icon_small";
      goto LAB_1001b74a0;
    }
    FUN_10001549c(local_90,"essence");
    iVar7 = FUN_1001b7c84(param_1,local_90);
    if (local_79 < '\0') {
      operator_delete(local_90[0]);
    }
    if (iVar7 != 0) {
      pcVar8 = "essence_icon_small";
      goto LAB_1001b74a0;
    }
  }
  else {
    if (iVar7 == 0) goto LAB_1001b73dc;
LAB_1001b73c4:
    pcVar8 = "ice_icon_small";
LAB_1001b74a0:
    FUN_10001549c(local_90,pcVar8);
    std::string::operator=((string *)&local_78,(string *)local_90);
    if (local_79 < '\0') {
      operator_delete(local_90[0]);
    }
  }
  pppppppuVar2 = local_78;
  bVar18 = DAT_101d911a8._7_1_;
  sVar17 = DAT_101d911a0;
  uVar10 = (ulong)local_61;
  if (-1 < (char)local_61) {
    local_70 = uVar10;
  }
  sVar16 = (size_t)DAT_101d911a8._7_1_;
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = sVar16;
  }
  if (local_70 == sVar3) {
    pppppppuVar14 = local_78;
    if (-1 < (char)local_61) {
      pppppppuVar14 = &local_78;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)local_61 < '\0') {
      if ((local_70 != 0) &&
         (iVar7 = _memcmp(pppppppuVar14,pbVar13,local_70), pppppppuVar14 = pppppppuVar2, iVar7 != 0)
         ) goto LAB_1001b7574;
    }
    else if (local_70 != 0) {
      pppppppuVar14 = &local_78;
      if ((uint)*pbVar13 == ((uint)local_78 & 0xff)) {
        pbVar12 = (byte *)((ulong)&local_78 | 1);
        do {
          uVar10 = uVar10 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar10 == 0) goto LAB_1001b75b0;
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar13);
        goto LAB_1001b7554;
      }
      goto LAB_1001b7574;
    }
  }
  else {
LAB_1001b7554:
    pppppppuVar14 = pppppppuVar2;
    if (-1 < (char)local_61) {
      pppppppuVar14 = &local_78;
    }
LAB_1001b7574:
    FUN_100652cdc(param_1 + 0x1ef0,pppppppuVar14);
    pppppppuVar2 = local_78;
    if (-1 < (char)local_61) {
      pppppppuVar2 = &local_78;
    }
    FUN_100652cdc(param_1 + 0x2068,pppppppuVar2);
    sVar16 = (size_t)DAT_101d911a8._7_1_;
    sVar17 = DAT_101d911a0;
    bVar18 = DAT_101d911a8._7_1_;
  }
LAB_1001b75b0:
  puVar1 = (undefined8 *)(param_1 + 0x2478);
  sVar15 = (size_t)*(byte *)(param_1 + 0x248f);
  uVar11 = (uint)(char)*(byte *)(param_1 + 0x248f);
  sVar19 = *(size_t *)(param_1 + 0x2480);
  sVar3 = sVar19;
  if (-1 < (int)uVar11) {
    sVar3 = sVar15;
  }
  sVar4 = sVar17;
  if (-1 < (char)bVar18) {
    sVar4 = sVar16;
  }
  if (sVar3 == sVar4) {
    puVar5 = (void *)*puVar1;
    if (-1 < (int)uVar11) {
      puVar5 = puVar1;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)bVar18) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((int)uVar11 < 0) {
      if ((sVar3 != 0) && (iVar7 = _memcmp(puVar5,pbVar13,sVar3), iVar7 != 0)) goto LAB_1001b7648;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar13 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar12 = (byte *)(param_1 + 0x2479);
        uVar10 = sVar15;
        do {
          uVar10 = uVar10 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar10 == 0) goto LAB_1001b7650;
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar13);
      }
      goto LAB_1001b7648;
    }
LAB_1001b7650:
    iVar7 = FUN_1001b7dd4(param_1);
    uVar9 = (uint)(0 < iVar7) << 2;
    sVar15 = (size_t)*(byte *)(param_1 + 0x248f);
    sVar19 = *(size_t *)(param_1 + 0x2480);
    sVar16 = (size_t)DAT_101d911a8._7_1_;
    sVar17 = DAT_101d911a0;
    uVar10 = sVar15;
    bVar18 = DAT_101d911a8._7_1_;
  }
  else {
LAB_1001b7648:
    uVar9 = 0;
    uVar10 = (ulong)uVar11;
  }
  *(uint *)(param_1 + 0x1f74) = *(uint *)(param_1 + 0x1f74) & 0xfffffffb | uVar9;
  if (-1 < (char)uVar10) {
    sVar19 = sVar15;
  }
  if (-1 < (char)bVar18) {
    sVar17 = sVar16;
  }
  if (sVar19 != sVar17) {
LAB_1001b7700:
    uVar9 = 0;
    uVar11 = *(uint *)(param_1 + 0x20ec);
    goto LAB_1001b7744;
  }
  puVar5 = (undefined8 *)*puVar1;
  if (-1 < (char)uVar10) {
    puVar5 = puVar1;
  }
  pbVar13 = DAT_101d91198;
  if (-1 < (char)bVar18) {
    pbVar13 = (byte *)&DAT_101d91198;
  }
  if (((uint)uVar10 >> 7 & 1) == 0) {
    if (sVar19 != 0) {
      if ((uint)*pbVar13 == ((uint)(undefined8 *)*puVar1 & 0xff)) {
        pbVar12 = (byte *)(param_1 + 0x2479);
        do {
          sVar15 = sVar15 - 1;
          pbVar13 = pbVar13 + 1;
          if (sVar15 == 0) goto LAB_1001b7734;
          bVar18 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar18 == *pbVar13);
      }
      goto LAB_1001b7700;
    }
LAB_1001b7734:
    uVar11 = *(uint *)(param_1 + 0x20ec);
  }
  else {
    if (sVar19 == 0) goto LAB_1001b7734;
    iVar7 = _memcmp(puVar5,pbVar13,sVar19);
    uVar11 = *(uint *)(param_1 + 0x20ec);
    if (iVar7 != 0) {
      uVar9 = 0;
      goto LAB_1001b7744;
    }
  }
  uVar9 = 4;
LAB_1001b7744:
  *(uint *)(param_1 + 0x20ec) = uVar9 | uVar11 & 0xfffffffb;
  if ((char)local_61 < '\0') {
    operator_delete(local_78);
  }
  return;
}




void FUN_1001b7780(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  void *local_78 [2];
  char local_61;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  
  FUN_100146cb0(local_78);
  iVar1 = FUN_1001283e4(param_1 + 0x2478,local_78);
  if (iVar1 == 0) {
    iVar1 = FUN_1001b7dd4(param_1);
    if (iVar1 != 0) {
      if (iVar1 == -1) {
        FUN_1001b4c0c(param_1,0);
      }
      else {
        FUN_1004e38ac(param_1 + 0x24c0,"%d");
      }
      goto LAB_1001b7828;
    }
    puVar2 = (undefined8 *)FUN_1004e0150("MENU_MARKET_CTA_FREE",0);
  }
  else {
    puVar2 = &local_40;
  }
  FUN_1000153b4(param_1 + 0x24c0,puVar2);
LAB_1001b7828:
  uVar3 = FUN_1004e3624(param_1 + 0x24c0);
  if ((uVar3 & 1) == 0) {
    FUN_100181af8(param_1,param_1 + 0x24c0);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
    local_40 = 0;
    local_38 = (void *)0x0;
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
    local_50 = 0;
    local_48 = (void *)0x0;
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
    local_60 = 0;
    local_58 = (void *)0x0;
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  return;
}




void FUN_1001b7898(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1004e36c0(param_3,&DAT_101d91650);
  if (iVar1 != 0) {
    FUN_1000153b4(param_1 + 0x24d0,param_3);
  }
  FUN_1001b4c0c(param_1,param_2 ^ 1);
  return;
}




void FUN_1001b78f0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  size_t sVar3;
  size_t sVar4;
  long *plVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  byte *pbVar11;
  long *plVar12;
  byte *pbVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 *local_58;
  
  iVar8 = FUN_100126c88();
  fVar17 = 204.0;
  if (iVar8 == 0) {
    fVar17 = 174.0;
  }
  plVar2 = param_1 + 0x3de;
  fVar14 = (float)FUN_10065317c(plVar2);
  plVar1 = param_1 + 0xe3;
  fVar15 = (float)FUN_100651184(plVar1);
  fVar15 = ((fVar17 + -4.0) - (fVar14 + fVar15)) * 0.5;
  fVar14 = (float)FUN_100651184(plVar1);
  if ((*(byte *)((long)param_1 + 0x264) & 1) != 0) {
    bVar6 = *(byte *)((long)param_1 + 0x248f);
    uVar9 = (ulong)bVar6;
    sVar3 = param_1[0x490];
    if (-1 < (char)bVar6) {
      sVar3 = uVar9;
    }
    sVar4 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar4 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar3 == sVar4) {
      plVar12 = (long *)param_1[0x48f];
      plVar5 = plVar12;
      if (-1 < (char)bVar6) {
        plVar5 = param_1 + 0x48f;
      }
      pbVar13 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar13 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar6 < '\0') {
        if ((sVar3 != 0) && (iVar8 = _memcmp(plVar5,pbVar13,sVar3), iVar8 != 0)) goto LAB_1001b7a28;
      }
      else if (sVar3 != 0) {
        if ((uint)*pbVar13 == ((uint)plVar12 & 0xff)) {
          pbVar11 = (byte *)((long)param_1 + 0x2479);
          do {
            uVar9 = uVar9 - 1;
            pbVar13 = pbVar13 + 1;
            if (uVar9 == 0) goto LAB_1001b7c6c;
            uVar10 = 0;
            bVar6 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar6 == *pbVar13);
          goto LAB_1001b7a2c;
        }
        goto LAB_1001b7a28;
      }
LAB_1001b7c6c:
      iVar8 = FUN_1001b7dd4(param_1);
      uVar10 = (uint)(0 < iVar8) << 2;
      goto LAB_1001b7a2c;
    }
  }
LAB_1001b7a28:
  uVar10 = 0;
LAB_1001b7a2c:
  *(uint *)((long)param_1 + 0x1f74) = *(uint *)((long)param_1 + 0x1f74) & 0xfffffffb | uVar10;
  fVar16 = (float)FUN_10065317c(plVar2);
  fVar16 = fVar15 + -6.0 + (fVar16 - fVar17) * 0.5;
  bVar7 = false;
  if ((*(float *)(param_1 + 0x3e6) == fVar16) &&
     (bVar7 = false, !NAN(*(float *)((long)param_1 + 0x1f34)))) {
    bVar7 = *(float *)((long)param_1 + 0x1f34) == 3.0;
  }
  if (!bVar7) {
    *(float *)(param_1 + 0x3e6) = fVar16;
    *(undefined4 *)((long)param_1 + 0x1f34) = 0x40400000;
    FUN_1000200a0(plVar2);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x3de] + 0x28))(plVar2,&local_58);
  fVar17 = (-4.0 - fVar15) + (fVar17 - fVar14) * 0.5;
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  fVar14 = 0.0;
  if ((*(uint *)((long)param_1 + 0x1f74) & 4) != 0) {
    fVar14 = fVar17;
  }
  FUN_100181b5c(fVar14,0,param_1);
  fVar17 = 0.0;
  FUN_10065179c(*(float *)((long)param_1 + 0x158c) + *(float *)((long)param_1 + 0x1584) * -2.0,0,
                0x3f800000,plVar1);
  if ((*(byte *)((long)param_1 + 0x20ec) >> 2 & 1) != 0) {
    fVar17 = *(float *)(param_1 + 0x415);
    fVar14 = (float)FUN_100652e60(param_1 + 0x40d);
    fVar14 = fVar17 + 6.0 + fVar14;
    fVar17 = *(float *)(param_1 + 0x433);
    if (fVar17 != fVar14) {
      *(float *)(param_1 + 0x433) = fVar14;
      FUN_1000200a0(param_1 + 0x42b);
    }
  }
  plVar1 = param_1 + 0x42b;
  fVar14 = (float)FUN_1006511d0(plVar1);
  FUN_1006511d0(plVar1);
  fVar17 = fVar17 + -10.0;
  FUN_10064e47c(fVar14 + -10.0,param_1 + 0x451);
  fVar14 = (float)FUN_1006511d0(plVar1);
  FUN_1006511d0(plVar1);
  fVar17 = fVar17 + -10.0;
  FUN_10064e47c(fVar14 + -10.0,param_1 + 0x46f);
  plVar1 = param_1 + 0x3fc;
  fVar15 = (float)FUN_1006425d0(plVar1,0,0,1,1);
  FUN_10064259c(param_1 + 0x4d);
  fVar14 = fVar17;
  FUN_1006425d0(plVar1,0,0,1,1);
  fVar17 = fVar14 * -0.5 + fVar17 * -0.5;
  if ((*(float *)(param_1 + 0x404) != fVar15 * -0.5) ||
     (*(float *)((long)param_1 + 0x2024) != fVar17)) {
    *(float *)(param_1 + 0x404) = fVar15 * -0.5;
    *(float *)((long)param_1 + 0x2024) = fVar17;
    FUN_1000200a0(plVar1);
  }
  if ((*(byte *)((long)param_1 + 0x264) & 1) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (uint)(0 < (int)param_1[0x49c]) << 2;
  }
  *(uint *)((long)param_1 + 0x2064) = *(uint *)((long)param_1 + 0x2064) & 0xfffffffb | uVar10;
  (**(code **)(*param_1 + 0x170))(param_1);
  return;
}




undefined8 FUN_1001b7c84(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *local_78 [2];
  char local_61;
  undefined1 auStack_60 [48];
  
  FUN_1000fd6fc(local_78);
  iVar1 = FUN_1001b7cfc(param_1,local_78);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1000e7d68(auStack_60,param_2);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  return uVar2;
}




undefined8 FUN_1001b7cfc(long param_1,string *param_2)

{
  undefined8 uVar1;
  undefined **local_d0;
  undefined1 auStack_c8 [16];
  void *local_b8 [2];
  char local_a1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  void *local_70;
  char local_59;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  
  FUN_10014237c(&local_d0);
  uVar1 = FUN_100136d20(param_1 + 0x24a8,&local_d0);
  if ((int)uVar1 != 0) {
    std::string::operator=(param_2,(string *)local_b8);
    *(undefined8 *)(param_2 + 0x20) = uStack_98;
    *(undefined8 *)(param_2 + 0x18) = local_a0;
    *(undefined8 *)(param_2 + 0x30) = uStack_88;
    *(undefined8 *)(param_2 + 0x28) = uStack_90;
    *(undefined8 *)(param_2 + 0x40) = uStack_78;
    *(undefined8 *)(param_2 + 0x38) = local_80;
  }
  local_d0 = &PTR_FUN_10145ac30;
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_59 < '\0') {
    operator_delete(local_70);
  }
  if (local_a1 < '\0') {
    operator_delete(local_b8[0]);
  }
  FUN_1001423e4(auStack_c8,1);
  return uVar1;
}




undefined8 FUN_1001b7dd4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined **local_c0;
  undefined1 auStack_b8 [16];
  void *local_a8;
  char local_91;
  undefined1 auStack_90 [48];
  void *local_60;
  char local_49;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  
  FUN_10014237c(&local_c0);
  iVar1 = FUN_100136d20(param_1 + 0x24a8,&local_c0);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_1000e7cb0(auStack_90);
  }
  local_c0 = &PTR_FUN_10145ac30;
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_49 < '\0') {
    operator_delete(local_60);
  }
  if (local_91 < '\0') {
    operator_delete(local_a8);
  }
  FUN_1001423e4(auStack_b8,1);
  return uVar2;
}




void FUN_1001b7e90(long param_1,undefined8 param_2,undefined8 param_3)

{
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  FUN_10003330c(local_60);
  FUN_10003330c(local_48,param_3);
  FUN_10019cdac(param_1 + 0x2468,local_60);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return;
}




void FUN_1001b7f08(long param_1)

{
  FUN_100182ba4();
  if (*(char *)(param_1 + 0x24e5) != '\0') {
    return;
  }
  FUN_1001b72d0(param_1);
  return;
}




void FUN_1001b7f44(long *param_1,int param_2)

{
  long *plVar1;
  
  FUN_100182128();
  (**(code **)(*param_1 + 0x168))(param_1);
  plVar1 = param_1 + 0x498;
  if (param_2 == 0) {
    plVar1 = param_1 + 0x49a;
  }
  FUN_100181af8(param_1,plVar1);
  FUN_1001b78f0(param_1);
  return;
}




void FUN_1001b7f9c(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 ****ppppuVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  size_t sVar13;
  ulong uVar14;
  byte bVar15;
  size_t sVar16;
  uint uVar17;
  undefined8 ***local_90;
  size_t local_88;
  byte local_79;
  undefined8 ***local_78;
  size_t local_70;
  byte local_61;
  
  if (*(int *)(param_1 + 0x2468) == 0) {
    *(undefined1 *)(param_1 + 0x24e6) = 0;
    uVar17 = 4;
  }
  else {
    uVar14 = 0;
    uVar17 = 1;
    do {
      FUN_10003330c(&local_78,*(long *)(param_1 + 0x2470) + uVar14 * 0x30);
      FUN_10003330c(&local_90,*(long *)(param_1 + 0x2470) + uVar14 * 0x30 + 0x18);
      bVar15 = local_61;
      sVar13 = local_70;
      bVar6 = DAT_101d911a8._7_1_;
      sVar16 = (size_t)local_61;
      sVar1 = local_70;
      if (-1 < (char)local_61) {
        sVar1 = sVar16;
      }
      sVar2 = DAT_101d911a0;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        sVar2 = (ulong)DAT_101d911a8._7_1_;
      }
      if (sVar1 == sVar2) {
        ppppuVar4 = (undefined8 ****)local_78;
        if (-1 < (char)local_61) {
          ppppuVar4 = &local_78;
        }
        pbVar11 = DAT_101d91198;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          pbVar11 = (byte *)&DAT_101d91198;
        }
        if ((char)local_61 < '\0') {
          if ((sVar1 != 0) && (iVar7 = _memcmp(ppppuVar4,pbVar11,sVar1), iVar7 != 0))
          goto LAB_1001b80ac;
        }
        else if (sVar1 != 0) {
          pbVar12 = (byte *)((ulong)&local_78 | 1);
          uVar10 = sVar16;
          if ((uint)*pbVar11 == ((uint)local_78 & 0xff)) {
            do {
              pbVar11 = pbVar11 + 1;
              if (uVar10 - 1 == 0) goto LAB_1001b81f0;
              bVar5 = *pbVar12;
              pbVar12 = pbVar12 + 1;
              uVar10 = uVar10 - 1;
            } while (bVar5 == *pbVar11);
          }
          goto LAB_1001b80ac;
        }
        goto LAB_1001b81f0;
      }
LAB_1001b80ac:
      uVar10 = (ulong)local_79;
      sVar3 = local_88;
      if (-1 < (char)local_79) {
        sVar3 = uVar10;
      }
      if (sVar3 == sVar2) {
        ppppuVar4 = (undefined8 ****)local_90;
        if (-1 < (char)local_79) {
          ppppuVar4 = &local_90;
        }
        pbVar11 = DAT_101d91198;
        if (-1 < (char)bVar6) {
          pbVar11 = (byte *)&DAT_101d91198;
        }
        if ((char)local_79 < '\0') {
          if ((sVar2 != 0) && (iVar7 = _memcmp(ppppuVar4,pbVar11,sVar2), iVar7 != 0))
          goto LAB_1001b8134;
        }
        else if (sVar2 != 0) {
          pbVar12 = (byte *)((ulong)&local_90 | 1);
          if ((uint)*pbVar11 == ((uint)local_90 & 0xff)) {
            do {
              uVar10 = uVar10 - 1;
              pbVar11 = pbVar11 + 1;
              if (uVar10 == 0) goto LAB_1001b81f0;
              bVar6 = *pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (bVar6 == *pbVar11);
          }
          goto LAB_1001b8134;
        }
      }
      else {
LAB_1001b8134:
        if (sVar1 == 4) {
          iVar7 = std::string::compare((ulong)&local_78,0,(char *)0xffffffffffffffff,0x1013d25c4);
          if (iVar7 != 0) {
            sVar16 = (size_t)local_61;
            sVar13 = local_70;
            bVar15 = local_61;
            goto LAB_1001b8168;
          }
          uVar9 = FUN_10015d3ec();
          ppppuVar4 = (undefined8 ****)local_90;
          if (-1 < (char)local_79) {
            ppppuVar4 = &local_90;
          }
          uVar8 = FUN_1001665d4(uVar9,ppppuVar4,1);
        }
        else {
LAB_1001b8168:
          if (-1 < (char)bVar15) {
            sVar13 = sVar16;
          }
          if ((sVar13 == 4) &&
             (iVar7 = std::string::compare
                                ((ulong)&local_78,0,(char *)0xffffffffffffffff,0x1013d25b2),
             iVar7 == 0)) {
            uVar9 = FUN_10015d3ec();
            uVar8 = FUN_100166518(uVar9,&local_90);
          }
          else {
            uVar9 = FUN_10015d3ec();
            ppppuVar4 = (undefined8 ****)local_90;
            if (-1 < (char)local_79) {
              ppppuVar4 = &local_90;
            }
            uVar8 = FUN_10016652c(uVar9,ppppuVar4);
          }
        }
        uVar17 = uVar17 & uVar8;
      }
LAB_1001b81f0:
      if ((char)local_79 < '\0') {
        operator_delete(local_90);
      }
      if ((char)local_61 < '\0') {
        operator_delete(local_78);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(uint *)(param_1 + 0x2468));
    *(char *)(param_1 + 0x24e6) = (char)uVar17;
    uVar17 = uVar17 << 2 ^ 4;
  }
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb | uVar17;
  return;
}




void FUN_1001b8274(long param_1,undefined4 param_2)

{
  undefined1 auStack_30 [8];
  void *local_28;
  
  *(undefined4 *)(param_1 + 0x24e0) = param_2;
  thunk_FUN_1004e439c(auStack_30,&DAT_101d91650);
  FUN_1004e38ac(auStack_30,"%d");
  FUN_1006513c0(param_1 + 0x2158,auStack_30);
  FUN_1001b78f0(param_1);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void thunk_FUN_1001b72d0(void)

{
  FUN_1001b72d0();
  return;
}




void FUN_1001b82ec(long param_1)

{
  FUN_1001b72d0(param_1 + -0x1ee0);
  return;
}




void FUN_1001b82f8(long *param_1,undefined8 param_2,byte *param_3)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 ***pppuVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  undefined8 **local_228 [2];
  char local_211;
  void *local_208;
  ulong local_200;
  byte local_1f1;
  
  FUN_1001b7898(param_1,0,&DAT_101d91650);
  bVar8 = *(byte *)((long)param_1 + 0x248f);
  uVar12 = (ulong)bVar8;
  sVar2 = param_1[0x490];
  if (-1 < (char)bVar8) {
    sVar2 = uVar12;
  }
  bVar7 = param_3[0x17];
  sVar3 = *(size_t *)(param_3 + 8);
  if (-1 < (char)bVar7) {
    sVar3 = (ulong)bVar7;
  }
  if (sVar2 != sVar3) goto LAB_1001b8634;
  plVar1 = param_1 + 0x48f;
  plVar11 = (long *)*plVar1;
  if (-1 < (char)bVar8) {
    plVar11 = plVar1;
  }
  pbVar15 = *(byte **)param_3;
  if (-1 < (char)bVar7) {
    pbVar15 = param_3;
  }
  if ((char)bVar8 < '\0') {
    if ((sVar2 != 0) && (iVar9 = _memcmp(plVar11,pbVar15,sVar2), iVar9 != 0)) goto LAB_1001b8634;
  }
  else if (sVar2 != 0) {
    if ((uint)*pbVar15 == ((uint)(long *)*plVar1 & 0xff)) {
      pbVar14 = (byte *)((long)param_1 + 0x2479);
      do {
        uVar12 = uVar12 - 1;
        pbVar15 = pbVar15 + 1;
        if (uVar12 == 0) goto LAB_1001b83d0;
        bVar8 = *pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (bVar8 == *pbVar15);
    }
    goto LAB_1001b8634;
  }
LAB_1001b83d0:
  plVar11 = param_1 + 0x492;
  bVar8 = *(byte *)((long)param_1 + 0x24a7);
  uVar12 = (ulong)bVar8;
  sVar2 = param_1[0x493];
  if (-1 < (char)bVar8) {
    sVar2 = uVar12;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    plVar4 = (long *)*plVar11;
    if (-1 < (char)bVar8) {
      plVar4 = plVar11;
    }
    pbVar15 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar15 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar8 < '\0') {
      if ((sVar2 != 0) && (iVar9 = _memcmp(plVar4,pbVar15,sVar2), iVar9 != 0)) goto LAB_1001b847c;
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar15 == ((uint)(long *)*plVar11 & 0xff)) {
        pbVar14 = (byte *)((long)param_1 + 0x2491);
        do {
          uVar12 = uVar12 - 1;
          pbVar15 = pbVar15 + 1;
          if (uVar12 == 0) goto LAB_1001b84c0;
          bVar8 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar8 == *pbVar15);
      }
      goto LAB_1001b847c;
    }
  }
  else {
LAB_1001b847c:
    thunk_FUN_100253c74(&local_208);
    FUN_1000eaff0(&local_208,plVar11);
    FUN_100644aec(local_228,DAT_101d2365c,&local_208);
    FUN_100644c34(param_1,local_228,1);
    FUN_10016c310(&local_208);
  }
LAB_1001b84c0:
  if ((int)param_1[0x48d] != 0) {
    lVar16 = 0;
    uVar12 = 0;
    do {
      FUN_10003330c(&local_208,param_1[0x48e] + lVar16);
      FUN_10003330c(local_228,param_1[0x48e] + lVar16 + 0x18);
      uVar13 = (ulong)local_1f1;
      uVar5 = local_200;
      if (-1 < (char)local_1f1) {
        uVar5 = uVar13;
      }
      if (uVar5 == 4) {
        iVar9 = std::string::compare((ulong)&local_208,0,(char *)0xffffffffffffffff,0x1013d25c4);
        if (iVar9 != 0) {
          uVar13 = (ulong)local_1f1;
          goto LAB_1001b854c;
        }
        pppuVar6 = (undefined8 ***)local_228[0];
        if (-1 < local_211) {
          pppuVar6 = local_228;
        }
        plVar11 = plVar1;
        if (*(char *)((long)param_1 + 0x248f) < '\0') {
          plVar11 = (long *)*plVar1;
        }
        FUN_1001035d8(pppuVar6,plVar11);
      }
      else {
LAB_1001b854c:
        uVar5 = local_200;
        if (-1 < (char)local_1f1) {
          uVar5 = uVar13;
        }
        if (((uVar5 == 4) &&
            (iVar9 = std::string::compare
                               ((ulong)&local_208,0,(char *)0xffffffffffffffff,0x1013d25b2),
            iVar9 == 0)) && (lVar10 = FUN_10032c624(local_228), lVar10 != 0)) {
          pppuVar6 = (undefined8 ***)local_228[0];
          if (-1 < local_211) {
            pppuVar6 = local_228;
          }
          plVar11 = plVar1;
          if (*(char *)((long)param_1 + 0x248f) < '\0') {
            plVar11 = (long *)*plVar1;
          }
          FUN_1001042d4(pppuVar6,*(undefined4 *)(lVar10 + 0xa0),plVar11);
        }
      }
      if (local_211 < '\0') {
        operator_delete(local_228[0]);
      }
      if ((char)local_1f1 < '\0') {
        operator_delete(local_208);
      }
      uVar12 = uVar12 + 1;
      lVar16 = lVar16 + 0x30;
    } while (uVar12 < *(uint *)(param_1 + 0x48d));
  }
  FUN_100644aec(&local_208,DAT_101d23568,0);
  FUN_100644c34(param_1,&local_208,1);
LAB_1001b8634:
  (**(code **)(*param_1 + 0x170))(param_1);
  return;
}




void FUN_1001b8660(long param_1)

{
  FUN_1001b82f8(param_1 + -0x1ee0);
  return;
}




void FUN_1001b866c(undefined8 param_1)

{
  FUN_1001b7898(param_1,0,&DAT_101d91650);
  return;
}




void FUN_1001b867c(long param_1)

{
  FUN_1001b7898(param_1 + -0x1ee0,0,&DAT_101d91650);
  return;
}




void FUN_1001b8694(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
  uVar2 = FUN_1004e0150("MARKET_GOLD_STORE_TRANSACTION_ERROR_BODY",0);
  uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar1,uVar2,uVar3,0,0);
  FUN_1001b7898(param_1,0,&DAT_101d91650);
  return;
}




void FUN_1001b8718(long param_1)

{
  FUN_1001b8694(param_1 + -0x1ee0);
  return;
}




void FUN_1001b8724(undefined8 param_1)

{
  FUN_1001b7898(param_1,0,&DAT_101d91650);
  return;
}




void FUN_1001b8734(long param_1)

{
  FUN_1001b7898(param_1 + -0x1ee0,0,&DAT_101d91650);
  return;
}




void thunk_FUN_1001b875c(long *param_1)

{
  (**(code **)(*param_1 + 0x1b0))();
  FUN_100642324(param_1 + 0x3fc);
  if ((*(uint *)((long)param_1 + 0x2064) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x2064) = *(uint *)((long)param_1 + 0x2064) & 0xffff807f;
    FUN_1000200a0(param_1 + 0x3fc);
    return;
  }
  return;
}




void thunk_FUN_1001b87b8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x1b8))();
  uVar1 = FUN_10001f55c();
  FUN_10063f0e8(0x3f800000);
  uVar2 = FUN_100047714();
  FUN_10063f0e8(0x3f000000);
  FUN_10063fce0(0x3f800000,uVar2);
  param_1 = param_1 + 0x3fc;
  FUN_100642324(param_1);
  FUN_100642b14(param_1,uVar1);
  FUN_100642b14(param_1,uVar2);
  return;
}




void FUN_1001b8754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1001b8838(param_1,param_4);
  return;
}




void FUN_1001b875c(long *param_1)

{
  (**(code **)(*param_1 + 0x1b0))();
  FUN_100642324(param_1 + 0x3fc);
  if ((*(uint *)((long)param_1 + 0x2064) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x2064) = *(uint *)((long)param_1 + 0x2064) & 0xffff807f;
    FUN_1000200a0(param_1 + 0x3fc);
    return;
  }
  return;
}




void FUN_1001b87b8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x1b8))();
  uVar1 = FUN_10001f55c();
  FUN_10063f0e8(0x3f800000);
  uVar2 = FUN_100047714();
  FUN_10063f0e8(0x3f000000);
  FUN_10063fce0(0x3f800000,uVar2);
  param_1 = param_1 + 0x3fc;
  FUN_100642324(param_1);
  FUN_100642b14(param_1,uVar1);
  FUN_100642b14(param_1,uVar2);
  return;
}




void FUN_1001b8838(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x1c0))();
  FUN_100644b14(param_2);
  uVar1 = FUN_10001f55c();
  FUN_10063f0e8(0x3f800000);
  uVar2 = FUN_100047714();
  FUN_10063f0e8(0x3f000000);
  FUN_10063fce0(0x3f800000,uVar2);
  param_1 = param_1 + 0x3fc;
  FUN_100642324(param_1);
  FUN_100642b14(param_1,uVar1);
  FUN_100642b14(param_1,uVar2);
  return;
}




void FUN_1001b88c4(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  void *pvVar14;
  undefined **local_1b8;
  undefined1 auStack_1b0 [15];
  char local_1a1;
  void *local_1a0;
  char local_189;
  undefined1 auStack_188 [48];
  void *local_158;
  char local_141;
  undefined8 local_140;
  void *local_138;
  undefined8 local_130;
  void *local_128;
  undefined **local_118;
  undefined1 auStack_110 [16];
  void *local_100 [2];
  char local_e9;
  void *local_b8;
  char local_a1;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined4 local_38;
  
  bVar4 = *(byte *)(param_1 + 0x248f);
  uVar11 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_1 + 0x2480);
  if (-1 < (char)bVar4) {
    sVar1 = uVar11;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pvVar14 = *(void **)(param_1 + 0x2478);
    puVar3 = pvVar14;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(param_1 + 0x2478);
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 != 0) && (iVar5 = _memcmp(puVar3,pbVar13,sVar1), iVar5 != 0)) goto LAB_1001b8988;
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar13 == ((uint)pvVar14 & 0xff)) {
        pbVar12 = (byte *)(param_1 + 0x2479);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) goto LAB_1001b89dc;
          bVar4 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar4 == *pbVar13);
      }
      goto LAB_1001b8988;
    }
LAB_1001b89dc:
    lVar6 = FUN_10015d3ec();
    if ((*(char *)(lVar6 + 0x567c) == '\0') ||
       ((iVar5 = FUN_10016c2fc(), iVar5 != 0 &&
        (lVar6 = FUN_10016c2f0(), 0 < *(int *)(lVar6 + 0x38))))) {
      if ((*(char *)(param_1 + 0x24e4) == '\0') || (0.0 < *(float *)(param_1 + 0x1ed8))) {
        FUN_10014237c(&local_118);
        iVar5 = FUN_100136d20(param_1 + 0x24a8,&local_118);
        if (iVar5 != 0) {
          iVar5 = FUN_1000e7eb0(local_100);
          if (iVar5 == 0) {
            FUN_1000eb8dc(local_100,&local_90);
          }
          else {
            uVar8 = FUN_10015d3ec();
            FUN_10001549c(&local_1b8,"");
            FUN_1001663b8(uVar8,param_1 + 0x24a8,&local_1b8);
            if (local_1a1 < '\0') {
              operator_delete(local_1b8);
            }
          }
        }
        local_118 = &PTR_FUN_10145ac30;
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
          local_90 = 0;
          local_88 = (void *)0x0;
        }
        if (local_98 != (void *)0x0) {
          operator_delete__(local_98);
          local_a0 = 0;
          local_98 = (void *)0x0;
        }
        if (local_a1 < '\0') {
          operator_delete(local_b8);
        }
        if (local_e9 < '\0') {
          operator_delete(local_100[0]);
        }
        FUN_1001423e4(auStack_110,1);
      }
      else {
        FUN_1000eb06c(&local_118);
        lVar6 = param_1 + 0x24a8;
        iVar5 = FUN_100136d68(lVar6,&local_118);
        if (iVar5 != 0) {
          switch(local_38) {
          case 0:
            FUN_1001b8ee8(param_1,&local_118);
            break;
          case 1:
            FUN_1001b94bc(param_1,&local_118);
            break;
          case 2:
            FUN_10014237c(&local_1b8);
            iVar5 = FUN_100136d20(lVar6,&local_1b8);
            if ((iVar5 != 0) && (lVar6 = FUN_10032c71c(lVar6,auStack_188), lVar6 != 0)) {
              FUN_1001ba218(param_1,lVar6);
            }
            local_1b8 = &PTR_FUN_10145ac30;
            if (local_128 != (void *)0x0) {
              operator_delete__(local_128);
              local_130 = 0;
              local_128 = (void *)0x0;
            }
            if (local_138 != (void *)0x0) {
              operator_delete__(local_138);
              local_140 = 0;
              local_138 = (void *)0x0;
            }
            if (local_141 < '\0') {
              operator_delete(local_158);
            }
            if (local_189 < '\0') {
              operator_delete(local_1a0);
            }
            FUN_1001423e4(auStack_1b0,1);
            break;
          case 3:
            FUN_1001b9b48(param_1,&local_118);
          }
        }
        FUN_1000eb120(&local_118);
      }
      return;
    }
  }
  else {
LAB_1001b8988:
    iVar5 = FUN_10030c6ac();
    if (iVar5 != 0) {
      FUN_10030c6a0();
      uVar11 = FUN_10030cef4();
      if ((uVar11 & 1) == 0) {
        uVar7 = FUN_1004e0150("GOVERNMENT_ID_PURCHASE_MUST_REGISTER_TITLE",0);
        uVar8 = FUN_1004e0150("GOVERNMENT_ID_PURCHASE_MUST_REGISTER_TEXT",0);
        uVar9 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        pcVar10 = thunk_FUN_1001ba584;
        goto LAB_1001b8b2c;
      }
    }
    lVar6 = FUN_10015d3ec();
    if ((*(char *)(lVar6 + 0x567c) == '\0') ||
       ((iVar5 = FUN_10016c2fc(), iVar5 != 0 &&
        (lVar6 = FUN_10016c2f0(), 0 < *(int *)(lVar6 + 0x38))))) {
      FUN_1001b8ce0(param_1);
      return;
    }
  }
  uVar7 = FUN_1004e0150("MARKET_MUST_REGISTER_DIALOG_TITLE",0);
  uVar8 = FUN_1004e0150("MARKET_MUST_REGISTER_DIALOG_TEXT",0);
  uVar9 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  param_1 = 0;
  pcVar10 = (code *)0x0;
LAB_1001b8b2c:
  FUN_1001e3090(uVar7,uVar8,uVar9,param_1,pcVar10);
  return;
}




void thunk_FUN_1001ba584(void)

{
  undefined8 uVar1;
  void *apvStack_38 [2];
  char cStack_21;
  
  uVar1 = FUN_10002f320();
  FUN_10001549c(apvStack_38,"vainglory://Profile");
  FUN_1000312cc(uVar1,apvStack_38,&DAT_101d91198,0,0);
  if (cStack_21 < '\0') {
    operator_delete(apvStack_38[0]);
  }
  return;
}




void FUN_1001b8ce0(long param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *****pppppuVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined1 auStack_a8 [32];
  undefined8 ****local_88 [2];
  char local_71;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  
  puVar1 = (undefined8 *)(param_1 + 0x2478);
  bVar6 = *(byte *)(param_1 + 0x248f);
  uVar11 = (ulong)bVar6;
  sVar2 = *(size_t *)(param_1 + 0x2480);
  if (-1 < (char)bVar6) {
    sVar2 = uVar11;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    puVar4 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar4 = puVar1;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if (sVar2 == 0) {
        return;
      }
      iVar7 = _memcmp(puVar4,pbVar13,sVar2);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)*pbVar13 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar12 = (byte *)(param_1 + 0x2479);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) {
            return;
          }
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar13);
      }
    }
  }
  FUN_100146cb0(local_88);
  FUN_1001283e4(puVar1,local_88);
  uVar11 = FUN_1001282c0(local_88);
  pppppuVar5 = (undefined8 *****)local_88[0];
  if (-1 < local_71) {
    pppppuVar5 = local_88;
  }
  FUN_1001043c4(pppppuVar5);
  if ((uVar11 & 1) == 0) {
    uVar8 = FUN_1004e0150("MARKET_GOLD_STORE_UNAVAILABLE_TITLE",0);
    uVar9 = FUN_1004e0150("MARKET_GOLD_STORE_UNAVAILABLE_BODY",0);
    uVar10 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(uVar8,uVar9,uVar10,0,0);
    FUN_1001b7898(param_1,0,&DAT_101d91650);
  }
  else {
    uVar8 = FUN_1004e0150("MARKET_GOLD_BUNDLE_BUY_WAITING",0);
    FUN_1001b7898(param_1,1,uVar8);
    uVar8 = FUN_100644a94("UI::EVENT_IAP_PROCESSING");
    FUN_100644aec(auStack_a8,uVar8,0);
    FUN_100644c34(param_1,auStack_a8,1);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
    local_50 = 0;
    local_48 = (void *)0x0;
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
    local_60 = 0;
    local_58 = (void *)0x0;
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  return;
}




void FUN_1001b8ee8(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 auStack_180 [8];
  void *local_178;
  void *local_170;
  void *local_168;
  char local_159;
  undefined1 auStack_158 [8];
  void *local_150;
  undefined1 auStack_148 [8];
  void *local_140;
  undefined1 auStack_138 [8];
  void *local_130;
  undefined1 auStack_128 [8];
  void *local_120;
  undefined1 auStack_118 [8];
  void *local_110;
  void *local_108;
  ulong local_100;
  byte local_f1;
  undefined **local_f0;
  undefined1 auStack_e8 [16];
  void *local_d8 [2];
  char local_c1;
  undefined1 auStack_c0 [48];
  void *local_90;
  char local_79;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  
  FUN_10014237c(&local_f0);
  iVar2 = FUN_100136d20(param_1 + 0x24a8,&local_f0);
  if (iVar2 == 0) goto LAB_1001b9440;
  uVar3 = FUN_1000e7ce4(auStack_c0);
  FUN_10001549c(&local_108,uVar3);
  uVar3 = FUN_1000e7cb0(auStack_c0);
  thunk_FUN_1004e439c(auStack_118,&DAT_101d91650);
  thunk_FUN_1004e439c(auStack_128,&DAT_101d91650);
  thunk_FUN_1004e439c(auStack_138,&DAT_101d91650);
  thunk_FUN_1004e439c(auStack_148,&DAT_101d91650);
  uVar8 = (ulong)local_f1;
  uVar1 = local_100;
  if (-1 < (char)local_f1) {
    uVar1 = uVar8;
  }
  if (uVar1 == 6) {
    iVar2 = std::string::compare((ulong)&local_108,0,(char *)0xffffffffffffffff,0x1013d247a);
    if (iVar2 != 0) {
      uVar8 = (ulong)local_f1;
      goto LAB_1001b8fd4;
    }
    pcVar9 = "HERO_HUB_DIALOG_LACK_SILVERL_DESC";
    pcVar10 = "HERO_HUB_DIALOG_LACK_SILVERL_TITLE";
    pcVar11 = "HERO_HUB_DIALOG_UNLOCKHERO_SILVER_MSG";
    pcVar4 = "HERO_HUB_DIALOG_UNLOCKHERO_SILVER_TITLE";
LAB_1001b9114:
    uVar5 = FUN_1004e0150(pcVar4,0);
    FUN_1000153b4(auStack_118,uVar5);
    uVar5 = FUN_1004e0150(pcVar11,0);
    FUN_1000153b4(auStack_128,uVar5);
    uVar5 = FUN_1004e0150(pcVar10,0);
    FUN_1000153b4(auStack_138,uVar5);
    uVar5 = FUN_1004e0150(pcVar9,0);
    FUN_1000153b4(auStack_148,uVar5);
  }
  else {
LAB_1001b8fd4:
    uVar1 = local_100;
    if (-1 < (char)local_f1) {
      uVar1 = uVar8;
    }
    if (uVar1 == 4) {
      iVar2 = std::string::compare((ulong)&local_108,0,(char *)0xffffffffffffffff,0x1013d24d0);
      if (iVar2 == 0) {
        pcVar9 = "HERO_HUB_DIALOG_LACK_GOLD_DESC";
        pcVar10 = "HERO_HUB_DIALOG_LACK_GOLD_TITLE";
        pcVar11 = "HERO_HUB_DIALOG_UNLOCKHERO_GOLD_MSG";
        pcVar4 = "HERO_HUB_DIALOG_UNLOCKHERO_GOLD_TITLE";
        goto LAB_1001b9114;
      }
      uVar8 = (ulong)local_f1;
    }
    uVar1 = local_100;
    if (-1 < (char)local_f1) {
      uVar1 = uVar8;
    }
    if (uVar1 == 4) {
      iVar2 = std::string::compare((ulong)&local_108,0,(char *)0xffffffffffffffff,0x1013d253c);
      if (iVar2 == 0) {
        pcVar9 = "MENU_MARKET_DIALOG_LACK_OPALS_DESC";
        pcVar10 = "MENU_MARKET_DIALOG_LACK_OPALS_TITLE";
        pcVar11 = "MENU_MARKET_DIALOG_UNLOCKHERO_OPALS_MSG";
        pcVar4 = "MENU_MARKET_DIALOG_UNLOCKHERO_OPALS_TITLE";
        goto LAB_1001b9114;
      }
      uVar8 = (ulong)local_f1;
    }
    if (-1 < (char)local_f1) {
      local_100 = uVar8;
    }
    if ((local_100 == 7) &&
       (iVar2 = std::string::compare((ulong)&local_108,0,(char *)0xffffffffffffffff,0x1013d251e),
       iVar2 == 0)) {
      pcVar9 = "MENU_MARKET_DIALOG_LACK_ESSENCE_DESC";
      pcVar10 = "MENU_MARKET_DIALOG_LACK_ESSENCE_TITLE";
      pcVar11 = "MENU_MARKET_DIALOG_UNLOCKHERO_ESSENCE_MSG";
      pcVar4 = "MENU_MARKET_DIALOG_UNLOCKHERO_ESSENCE_TITLE";
      goto LAB_1001b9114;
    }
  }
  FUN_1000f0994(&local_170,uVar3);
  FUN_1004e3170(auStack_158,&local_170);
  if (local_159 < '\0') {
    operator_delete(local_170);
  }
  FUN_1000e7e04(local_d8);
  FUN_1000f0994(&local_170);
  FUN_1004e3170(auStack_180,&local_170);
  if (local_159 < '\0') {
    operator_delete(local_170);
  }
  if ((int)uVar3 == 0) {
    FUN_1004e3120(&local_170,"[HERO_NAME]");
    FUN_1004e3bc4(auStack_118,0,&local_170,param_2 + 0x18);
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
    }
    FUN_1004e3120(&local_170,"[HERO_NAME]");
    FUN_1004e3bc4(auStack_128,0,&local_170,param_2 + 0x18);
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
    }
    FUN_1004e3120(&local_170,"[UNLOCK_AMOUNT]");
    FUN_1004e3bc4(auStack_128,0,&local_170,auStack_158);
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
    }
    FUN_1004e3120(&local_170,"[BALANCE_AMOUNT]");
    FUN_1004e3bc4(auStack_128,0,&local_170,auStack_180);
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
    }
    lVar6 = FUN_10016c2f0();
    if (*(int *)(lVar6 + 0x38) < 1) {
      uVar3 = FUN_1004e0150("MENU_MARKET_DIALOG_UNLOCK_ACCEPT",0);
      puVar7 = (undefined8 *)FUN_1004e0150("MENU_MARKET_DIALOG_UNLOCK_REJECT",0);
    }
    else {
      uVar3 = FUN_10002f320();
      FUN_100030cf0(uVar3,&DAT_101d91198);
      uVar3 = FUN_1004e0150("MENU_MARKET_DIALOG_UNLOCK_ACCEPT",0);
      puVar7 = &DAT_101d91650;
    }
    FUN_1001e31c8(auStack_118,auStack_128,uVar3,puVar7,&DAT_101d91650,param_1,thunk_FUN_1001ba5e8,0,
                  0);
  }
  else {
    FUN_1004e3120(&local_170,"[HERO_NAME]");
    FUN_1004e3bc4(auStack_148,0,&local_170,param_2 + 0x18);
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
    }
    FUN_1004e3120(&local_170,"[UNLOCK_AMOUNT]");
    FUN_1004e3bc4(auStack_148,0,&local_170,auStack_158);
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
    }
    FUN_1004e3120(&local_170,"[BALANCE_AMOUNT]");
    FUN_1004e3bc4(auStack_148,0,&local_170,auStack_180);
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
    }
    uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(auStack_138,auStack_148,uVar3,0,0);
  }
  if (local_178 != (void *)0x0) {
    operator_delete__(local_178);
  }
  if (local_150 != (void *)0x0) {
    operator_delete__(local_150);
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
  }
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
  }
  if ((char)local_f1 < '\0') {
    operator_delete(local_108);
  }
LAB_1001b9440:
  local_f0 = &PTR_FUN_10145ac30;
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (local_79 < '\0') {
    operator_delete(local_90);
  }
  if (local_c1 < '\0') {
    operator_delete(local_d8[0]);
  }
  FUN_1001423e4(auStack_e8,1);
  return;
}




void FUN_1001b94bc(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  void *local_88;
  void *local_80;
  char local_71;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar2 = FUN_1004e0150("MENU_DIALOG_BOOSTS_PURCHASE_TITLE",0);
  thunk_FUN_1004e439c(auStack_40,uVar2);
  uVar2 = FUN_1004e0150("MENU_DIALOG_BOOSTS_PURCHASE_BODY",0);
  thunk_FUN_1004e439c(auStack_50,uVar2);
  FUN_1004e313c(auStack_60);
  FUN_1001b7dd4(param_1);
  FUN_1004e38ac(auStack_60,"%d");
  FUN_1004e313c(auStack_70);
  FUN_10001549c(&local_88,"gold");
  iVar1 = FUN_1001b7c84(param_1,&local_88);
  if (local_71 < '\0') {
    operator_delete(local_88);
    if (iVar1 != 0) goto LAB_1001b9568;
LAB_1001b958c:
    FUN_10001549c(&local_88,"silver");
    iVar1 = FUN_1001b7c84(param_1,&local_88);
    if (local_71 < '\0') {
      operator_delete(local_88);
    }
    if (iVar1 == 0) {
      FUN_10001549c(&local_88,"opal");
      iVar1 = FUN_1001b7c84(param_1,&local_88);
      if (local_71 < '\0') {
        operator_delete(local_88);
      }
      if (iVar1 == 0) {
        FUN_10001549c(&local_88,"essence");
        iVar1 = FUN_1001b7c84(param_1,&local_88);
        if (local_71 < '\0') {
          operator_delete(local_88);
        }
        if (iVar1 == 0) goto LAB_1001b9aac;
        iVar1 = FUN_10015d3f8();
        if (iVar1 != 0) {
          FUN_10015d3ec();
        }
        FUN_1004e38ac(auStack_70,"%u");
        FUN_1004e3120(&local_88,"[BOOST_NAME]");
        FUN_1004e3bc4(auStack_50,0,&local_88,param_2 + 0x18);
        if (local_80 != (void *)0x0) {
          operator_delete__(local_80);
        }
        FUN_1004e3120(&local_88,"[UNLOCK_AMOUNT]");
        FUN_1004e3bc4(auStack_50,0,&local_88,auStack_60);
        if (local_80 != (void *)0x0) {
          operator_delete__(local_80);
        }
        FUN_1004e3120(&local_88,"[UNLOCK_CURRENCY]");
        uVar2 = FUN_1004e0150("MENU_GENERIC_ESSENCE_NAME",0);
        FUN_1004e3bc4(auStack_50,0,&local_88,uVar2);
        if (local_80 != (void *)0x0) {
          operator_delete__(local_80);
        }
        FUN_1004e3120(&local_88,"[BALANCE_AMOUNT]");
        FUN_1004e3bc4(auStack_50,0,&local_88,auStack_70);
        if (local_80 != (void *)0x0) {
          operator_delete__(local_80);
        }
        FUN_1004e3120(&local_88,"[BALANCE_CURRENCY]");
        pcVar3 = "MENU_GENERIC_ESSENCE_NAME";
      }
      else {
        iVar1 = FUN_10015d3f8();
        if (iVar1 != 0) {
          FUN_10015d3ec();
        }
        FUN_1004e38ac(auStack_70,"%u");
        FUN_1004e3120(&local_88,"[BOOST_NAME]");
        FUN_1004e3bc4(auStack_50,0,&local_88,param_2 + 0x18);
        if (local_80 != (void *)0x0) {
          operator_delete__(local_80);
        }
        FUN_1004e3120(&local_88,"[UNLOCK_AMOUNT]");
        FUN_1004e3bc4(auStack_50,0,&local_88,auStack_60);
        if (local_80 != (void *)0x0) {
          operator_delete__(local_80);
        }
        FUN_1004e3120(&local_88,"[UNLOCK_CURRENCY]");
        uVar2 = FUN_1004e0150("MENU_GENERIC_OPALS_NAME",0);
        FUN_1004e3bc4(auStack_50,0,&local_88,uVar2);
        if (local_80 != (void *)0x0) {
          operator_delete__(local_80);
        }
        FUN_1004e3120(&local_88,"[BALANCE_AMOUNT]");
        FUN_1004e3bc4(auStack_50,0,&local_88,auStack_70);
        if (local_80 != (void *)0x0) {
          operator_delete__(local_80);
        }
        FUN_1004e3120(&local_88,"[BALANCE_CURRENCY]");
        pcVar3 = "MENU_GENERIC_OPALS_NAME";
      }
    }
    else {
      iVar1 = FUN_10015d3f8();
      if (iVar1 != 0) {
        FUN_10015d3ec();
      }
      FUN_1004e38ac(auStack_70,"%u");
      FUN_1004e3120(&local_88,"[BOOST_NAME]");
      FUN_1004e3bc4(auStack_50,0,&local_88,param_2 + 0x18);
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
      }
      FUN_1004e3120(&local_88,"[UNLOCK_AMOUNT]");
      FUN_1004e3bc4(auStack_50,0,&local_88,auStack_60);
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
      }
      FUN_1004e3120(&local_88,"[UNLOCK_CURRENCY]");
      uVar2 = FUN_1004e0150("MENU_GENERIC_SILVER_NAME",0);
      FUN_1004e3bc4(auStack_50,0,&local_88,uVar2);
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
      }
      FUN_1004e3120(&local_88,"[BALANCE_AMOUNT]");
      FUN_1004e3bc4(auStack_50,0,&local_88,auStack_70);
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
      }
      FUN_1004e3120(&local_88,"[BALANCE_CURRENCY]");
      pcVar3 = "MENU_GENERIC_SILVER_NAME";
    }
  }
  else {
    if (iVar1 == 0) goto LAB_1001b958c;
LAB_1001b9568:
    iVar1 = FUN_10015d3f8();
    if (iVar1 != 0) {
      FUN_10015d3ec();
    }
    FUN_1004e38ac(auStack_70,"%u");
    FUN_1004e3120(&local_88,"[BOOST_NAME]");
    FUN_1004e3bc4(auStack_50,0,&local_88,param_2 + 0x18);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
    }
    FUN_1004e3120(&local_88,"[UNLOCK_AMOUNT]");
    FUN_1004e3bc4(auStack_50,0,&local_88,auStack_60);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
    }
    FUN_1004e3120(&local_88,"[UNLOCK_CURRENCY]");
    uVar2 = FUN_1004e0150("MENU_GENERIC_GOLD_NAME",0);
    FUN_1004e3bc4(auStack_50,0,&local_88,uVar2);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
    }
    FUN_1004e3120(&local_88,"[BALANCE_AMOUNT]");
    FUN_1004e3bc4(auStack_50,0,&local_88,auStack_70);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
    }
    FUN_1004e3120(&local_88,"[BALANCE_CURRENCY]");
    pcVar3 = "MENU_GENERIC_GOLD_NAME";
  }
  uVar2 = FUN_1004e0150(pcVar3,0);
  FUN_1004e3bc4(auStack_50,0,&local_88,uVar2);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
LAB_1001b9aac:
  uVar2 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001e31c8(auStack_40,auStack_50,uVar2,uVar4,&DAT_101d91650,param_1,thunk_FUN_1001ba5e8,
                FUN_1001ba580,0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
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




void FUN_1001b9b48(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  void *local_d0;
  void *local_c8;
  char local_b9;
  undefined1 auStack_b8 [8];
  void *local_b0;
  undefined1 auStack_a8 [8];
  void *local_a0;
  undefined1 auStack_98 [8];
  void *local_90;
  undefined1 auStack_88 [8];
  void *local_80;
  void *local_78 [2];
  char local_61;
  
  FUN_1000fd6fc(local_78);
  iVar1 = FUN_1001b7cfc(param_1,local_78);
  if (iVar1 == 0) goto LAB_1001ba1f4;
  uVar2 = FUN_1004e0150("MENU_DIALOG_BUNDLE_PURCHASE_TITLE",0);
  thunk_FUN_1004e439c(auStack_88,uVar2);
  uVar2 = FUN_1004e0150("MENU_DIALOG_BUNDLE_PURCHASE_BODY",0);
  thunk_FUN_1004e439c(auStack_98,uVar2);
  FUN_1004e313c(auStack_a8);
  FUN_1001b7dd4(param_1);
  FUN_1004e38ac(auStack_a8,"%d");
  FUN_1004e313c(auStack_b8);
  FUN_1000e7e04(local_78);
  FUN_1004e38ac(auStack_b8,"%u");
  FUN_10001549c(&local_d0,"gold");
  iVar1 = FUN_1001b7c84(param_1,&local_d0);
  if (local_b9 < '\0') {
    operator_delete(local_d0);
    if (iVar1 != 0) goto LAB_1001b9c28;
LAB_1001b9c4c:
    FUN_10001549c(&local_d0,"silver");
    iVar1 = FUN_1001b7c84(param_1,&local_d0);
    if (local_b9 < '\0') {
      operator_delete(local_d0);
    }
    if (iVar1 != 0) {
      iVar1 = FUN_10015d3f8();
      if (iVar1 != 0) {
        FUN_10015d3ec();
      }
      FUN_1004e38ac(auStack_b8,"%u");
      FUN_1004e3120(&local_d0,"[BUNDLE_NAME]");
      FUN_1004e3bc4(auStack_98,0,&local_d0,param_2 + 0x18);
      if (local_c8 != (void *)0x0) {
        operator_delete__(local_c8);
      }
      FUN_1004e3120(&local_d0,"[UNLOCK_AMOUNT]");
      FUN_1004e3bc4(auStack_98,0,&local_d0,auStack_a8);
      if (local_c8 != (void *)0x0) {
        operator_delete__(local_c8);
      }
      FUN_1004e3120(&local_d0,"[UNLOCK_CURRENCY]");
      uVar2 = FUN_1004e0150("MENU_GENERIC_SILVER_NAME",0);
      FUN_1004e3bc4(auStack_98,0,&local_d0,uVar2);
      if (local_c8 != (void *)0x0) {
        operator_delete__(local_c8);
      }
      FUN_1004e3120(&local_d0,"[BALANCE_AMOUNT]");
      FUN_1004e3bc4(auStack_98,0,&local_d0,auStack_b8);
      if (local_c8 != (void *)0x0) {
        operator_delete__(local_c8);
      }
      FUN_1004e3120(&local_d0,"[BALANCE_CURRENCY]");
      pcVar3 = "MENU_GENERIC_SILVER_NAME";
      goto LAB_1001ba144;
    }
    FUN_10001549c(&local_d0,"opal");
    iVar1 = FUN_1001b7c84(param_1,&local_d0);
    if (local_b9 < '\0') {
      operator_delete(local_d0);
    }
    if (iVar1 != 0) {
      iVar1 = FUN_10015d3f8();
      if (iVar1 != 0) {
        FUN_10015d3ec();
      }
      FUN_1004e38ac(auStack_b8,"%u");
      FUN_1004e3120(&local_d0,"[BUNDLE_NAME]");
      FUN_1004e3bc4(auStack_98,0,&local_d0,param_2 + 0x18);
      if (local_c8 != (void *)0x0) {
        operator_delete__(local_c8);
      }
      FUN_1004e3120(&local_d0,"[UNLOCK_AMOUNT]");
      FUN_1004e3bc4(auStack_98,0,&local_d0,auStack_a8);
      if (local_c8 != (void *)0x0) {
        operator_delete__(local_c8);
      }
      FUN_1004e3120(&local_d0,"[UNLOCK_CURRENCY]");
      uVar2 = FUN_1004e0150("MENU_GENERIC_OPALS_NAME",0);
      FUN_1004e3bc4(auStack_98,0,&local_d0,uVar2);
      if (local_c8 != (void *)0x0) {
        operator_delete__(local_c8);
      }
      FUN_1004e3120(&local_d0,"[BALANCE_AMOUNT]");
      FUN_1004e3bc4(auStack_98,0,&local_d0,auStack_b8);
      if (local_c8 != (void *)0x0) {
        operator_delete__(local_c8);
      }
      FUN_1004e3120(&local_d0,"[BALANCE_CURRENCY]");
      pcVar3 = "MENU_GENERIC_OPALS_NAME";
      goto LAB_1001ba144;
    }
    FUN_10001549c(&local_d0,"essence");
    iVar1 = FUN_1001b7c84(param_1,&local_d0);
    if (local_b9 < '\0') {
      operator_delete(local_d0);
    }
    if (iVar1 != 0) {
      iVar1 = FUN_10015d3f8();
      if (iVar1 != 0) {
        FUN_10015d3ec();
      }
      FUN_1004e38ac(auStack_b8,"%u");
      FUN_1004e3120(&local_d0,"[BUNDLE_NAME]");
      FUN_1004e3bc4(auStack_98,0,&local_d0,param_2 + 0x18);
      if (local_c8 != (void *)0x0) {
        operator_delete__(local_c8);
      }
      FUN_1004e3120(&local_d0,"[UNLOCK_AMOUNT]");
      FUN_1004e3bc4(auStack_98,0,&local_d0,auStack_a8);
      if (local_c8 != (void *)0x0) {
        operator_delete__(local_c8);
      }
      FUN_1004e3120(&local_d0,"[UNLOCK_CURRENCY]");
      uVar2 = FUN_1004e0150("MENU_GENERIC_ESSENCE_NAME",0);
      FUN_1004e3bc4(auStack_98,0,&local_d0,uVar2);
      if (local_c8 != (void *)0x0) {
        operator_delete__(local_c8);
      }
      FUN_1004e3120(&local_d0,"[BALANCE_AMOUNT]");
      FUN_1004e3bc4(auStack_98,0,&local_d0,auStack_b8);
      if (local_c8 != (void *)0x0) {
        operator_delete__(local_c8);
      }
      FUN_1004e3120(&local_d0,"[BALANCE_CURRENCY]");
      pcVar3 = "MENU_GENERIC_ESSENCE_NAME";
      goto LAB_1001ba144;
    }
  }
  else {
    if (iVar1 == 0) goto LAB_1001b9c4c;
LAB_1001b9c28:
    iVar1 = FUN_10015d3f8();
    if (iVar1 != 0) {
      FUN_10015d3ec();
    }
    FUN_1004e38ac(auStack_b8,"%u");
    FUN_1004e3120(&local_d0,"[BUNDLE_NAME]");
    FUN_1004e3bc4(auStack_98,0,&local_d0,param_2 + 0x18);
    if (local_c8 != (void *)0x0) {
      operator_delete__(local_c8);
    }
    FUN_1004e3120(&local_d0,"[UNLOCK_AMOUNT]");
    FUN_1004e3bc4(auStack_98,0,&local_d0,auStack_a8);
    if (local_c8 != (void *)0x0) {
      operator_delete__(local_c8);
    }
    FUN_1004e3120(&local_d0,"[UNLOCK_CURRENCY]");
    uVar2 = FUN_1004e0150("MENU_GENERIC_GOLD_NAME",0);
    FUN_1004e3bc4(auStack_98,0,&local_d0,uVar2);
    if (local_c8 != (void *)0x0) {
      operator_delete__(local_c8);
    }
    FUN_1004e3120(&local_d0,"[BALANCE_AMOUNT]");
    FUN_1004e3bc4(auStack_98,0,&local_d0,auStack_b8);
    if (local_c8 != (void *)0x0) {
      operator_delete__(local_c8);
    }
    FUN_1004e3120(&local_d0,"[BALANCE_CURRENCY]");
    pcVar3 = "MENU_GENERIC_GOLD_NAME";
LAB_1001ba144:
    uVar2 = FUN_1004e0150(pcVar3,0);
    FUN_1004e3bc4(auStack_98,0,&local_d0,uVar2);
    if (local_c8 != (void *)0x0) {
      operator_delete__(local_c8);
    }
  }
  uVar2 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001e31c8(auStack_88,auStack_98,uVar2,uVar4,&DAT_101d91650,param_1,thunk_FUN_1001ba5e8,
                FUN_1001ba580,0);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
  }
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
LAB_1001ba1f4:
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  return;
}




void FUN_1001ba218(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined1 auStack_138 [8];
  void *local_130;
  undefined1 auStack_128 [8];
  void *local_120;
  void *local_118;
  void *local_110;
  char local_101;
  undefined1 auStack_100 [8];
  void *local_f8;
  undefined1 auStack_f0 [8];
  void *local_e8;
  undefined **local_e0;
  undefined1 auStack_d8 [16];
  void *local_c8 [2];
  char local_b1;
  undefined1 auStack_b0 [48];
  void *local_80;
  char local_69;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined1 auStack_40 [8];
  void *local_38;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  FUN_10032bf84(auStack_40,plVar1,1);
  FUN_10014237c(&local_e0);
  iVar2 = FUN_100136d20(param_1 + 0x24a8,&local_e0);
  if (iVar2 == 0) goto LAB_1001ba4fc;
  iVar2 = FUN_1000e7eb0(local_c8);
  if (iVar2 == 0) {
    FUN_1000eb8dc(local_c8,&local_58);
    goto LAB_1001ba4fc;
  }
  FUN_1004e313c(auStack_f0);
  FUN_1004e313c(auStack_100);
  FUN_10001549c(&local_118,"gold");
  uVar3 = FUN_1001b7c84(param_1,&local_118);
  if (local_101 < '\0') {
    operator_delete(local_118);
    if ((uVar3 & 1) == 0) goto LAB_1001ba2ec;
LAB_1001ba2b8:
    pcVar7 = "SKINS_HUB_DIALOG_UNLOCKSKIN_GOLD_MSG";
    pcVar4 = "SKINS_HUB_DIALOG_UNLOCKSKIN_GOLD_TITLE";
LAB_1001ba330:
    uVar5 = FUN_1004e0150(pcVar4,0);
    FUN_1000153b4(auStack_f0,uVar5);
    uVar5 = FUN_1004e0150(pcVar7,0);
    FUN_1000153b4(auStack_100,uVar5);
  }
  else {
    if ((uVar3 & 1) != 0) goto LAB_1001ba2b8;
LAB_1001ba2ec:
    FUN_10001549c(&local_118,"opal");
    iVar2 = FUN_1001b7c84(param_1,&local_118);
    if (local_101 < '\0') {
      operator_delete(local_118);
    }
    if (iVar2 != 0) {
      pcVar7 = "MENU_MARKET_DIALOG_UNLOCKSKIN_OPALS_MSG";
      pcVar4 = "MENU_MARKET_DIALOG_UNLOCKSKIN_OPALS_TITLE";
      goto LAB_1001ba330;
    }
  }
  FUN_1000e7cb0(auStack_b0);
  FUN_1000f0994(&local_118);
  FUN_1004e3170(auStack_128,&local_118);
  if (local_101 < '\0') {
    operator_delete(local_118);
  }
  FUN_1000e7e04(local_c8);
  FUN_1000f0994(&local_118);
  FUN_1004e3170(auStack_138,&local_118);
  if (local_101 < '\0') {
    operator_delete(local_118);
  }
  FUN_1004e3120(&local_118,"[SKIN_NAME]");
  FUN_1004e3bc4(auStack_f0,0,&local_118,auStack_40);
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
  }
  FUN_1004e3120(&local_118,"[SKIN_NAME]");
  FUN_1004e3bc4(auStack_100,0,&local_118,auStack_40);
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
  }
  FUN_1004e3120(&local_118,"[UNLOCK_AMOUNT]");
  FUN_1004e3bc4(auStack_100,0,&local_118,auStack_128);
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
  }
  FUN_1004e3120(&local_118,"[BALANCE_AMOUNT]");
  FUN_1004e3bc4(auStack_100,0,&local_118,auStack_138);
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
  }
  uVar5 = FUN_1004e0150("MENU_MARKET_DIALOG_UNLOCK_ACCEPT",0);
  uVar6 = FUN_1004e0150("MENU_MARKET_DIALOG_UNLOCK_REJECT",0);
  FUN_1001e31c8(auStack_f0,auStack_100,uVar5,uVar6,&DAT_101d91650,param_1,thunk_FUN_1001ba5e8,0,0);
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
  }
  if (local_f8 != (void *)0x0) {
    operator_delete__(local_f8);
  }
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
  }
LAB_1001ba4fc:
  local_e0 = &PTR_FUN_10145ac30;
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_b1 < '\0') {
    operator_delete(local_c8[0]);
  }
  FUN_1001423e4(auStack_d8,1);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void thunk_FUN_1001ba5e8(long param_1)

{
  undefined8 uVar1;
  void *apvStack_38 [2];
  char cStack_21;
  
  uVar1 = FUN_10015d3ec();
  FUN_10001549c(apvStack_38,"");
  FUN_1001663b8(uVar1,param_1 + 0x24a8,apvStack_38);
  if (cStack_21 < '\0') {
    operator_delete(apvStack_38[0]);
  }
  return;
}




void FUN_1001ba580(void)

{
  return;
}




void FUN_1001ba584(void)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_10002f320();
  FUN_10001549c(local_38,"vainglory://Profile");
  FUN_1000312cc(uVar1,local_38,&DAT_101d91198,0,0);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_1001ba5e8(long param_1)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_10015d3ec();
  FUN_10001549c(local_38,"");
  FUN_1001663b8(uVar1,param_1 + 0x24a8,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_1001ba64c(void)

{
  return;
}




void FUN_1001ba650(void)

{
  return;
}




void FUN_1001ba654(void)

{
  DAT_101e42da8 = 0xff;
  DAT_101e42daa = 0xffff;
  DAT_101e42dac = 0xffff;
  DAT_101e42dae = 0xffbc9c44;
  DAT_101e42db2 = 0xff1166f2;
  DAT_101e42db6 = 0xffe0e0e0;
  DAT_101e42dba = 0xffa0a0a0;
  DAT_101e42dbe = 0xff8c8c8c;
  DAT_101e42dc2 = 0xff322213;
  DAT_101e42dc6 = 0xff091911;
  DAT_101e42dca = 0xff170c19;
  DAT_101e42dce = 0xff241a14;
  DAT_101e42dd2 = 0xff14171c;
  DAT_101e42dd6 = 0xff221911;
  DAT_101e42dda = 0xff1a1416;
  DAT_101e42dde = 0xff121414;
  DAT_101e42de2 = 0xff1a1809;
  DAT_101e42de6 = 0xff141414;
  DAT_101e42dea = 0xff141414;
  DAT_101e42dee = 0xff2929c0;
  DAT_101e42df2 = 0xff283082;
  DAT_101e42df6 = 0xff5262cc;
  DAT_101e42dfa = 0xff283082;
  DAT_101e42dfe = 0xff5262cc;
  DAT_101e42e02 = 0xff745c42;
  DAT_101e42e06 = 0xff184155;
  DAT_101e42e0a = 0xff92665e;
  DAT_101e42e0e = 0xffbc9c44;
  DAT_101e42e12 = 0xffbbae56;
  DAT_101e42e16 = 0xff8b7b01;
  DAT_101e42e1a = 0xff90b3ef;
  DAT_101e42e1e = 0xff728ebe;
  DAT_101e42e22 = 0xff19459d;
  DAT_101e42e26 = 0xff9d877b;
  DAT_101e42e2a = 0xffcbb1a3;
  DAT_101e42e2e = 0xff3f6fb5;
  DAT_101e42e32 = 0xffc5c5c5;
  DAT_101e42e36 = 0xff4fc1f1;
  DAT_101e42e3a = 0xff606060;
  DAT_101e42e3e = 0xffc5ff7b;
  DAT_101e42e42 = 0xff5271eb;
  DAT_101e42e46 = 0xfffae076;
  DAT_101e42e4a = 0xff3ac8f6;
  DAT_101e42e4e = 0xffaaaaaa;
  DAT_101e42e52 = 0xffe19400;
  DAT_101e42e56 = 0xffe19400;
  DAT_101e42e5a = 0xffe550b2;
  DAT_101e42e5e = 0xfff22ae8;
  DAT_101e42e62 = 0xff005ae1;
  DAT_101e42e66 = 0xff1addfa;
  DAT_101e42e6a = 0xff2424b3;
  DAT_101e42e6e = 0xff2424b3;
  DAT_101e42e72 = 0xff646464;
  DAT_101e42e76 = 0xff92665e;
  DAT_101e42e7a = 0xff646037;
  DAT_101e42e84 = 0xff1111a1;
  DAT_101e42e8c = 0xffc8c8c8;
  DAT_101e42e88 = 0xff321ee1;
  DAT_101e42e90 = 0xff321ee1;
  DAT_101e42e9c = 0xff6259b3;
  DAT_101e42ea0 = 0xff506e73;
  DAT_101e42e80 = 0xffffffff;
  DAT_101e42ea4 = 0xff9dbf86;
  DAT_101e42e94 = 0xff7fe801;
  DAT_101e42ea8 = 0xffa35244;
  DAT_101e42e98 = 0xffffffff;
  DAT_101e42eac = 0xffca828e;
  DAT_101e42eb0 = 0xffa6a6a6;
  DAT_101e42eb4 = 0xffa6a6a6;
  DAT_101e42eb8 = 0xffffffff;
  DAT_101e42ebc = 0xff88ea2f;
  DAT_101e42ec0 = 0xff8c8c8c;
  DAT_101e42ec4 = 0xffffb400;
  DAT_101e42ec8 = 0xffff00ff;
  DAT_101e42ecc = 0xff00aded;
  DAT_101e42ed0 = 0xff33d3ff;
  DAT_101e42ed4 = 0xff7fe801;
  DAT_101e42ed8 = 0xff282828;
  DAT_101e42edc = 0xfff0f0f0;
  DAT_101e42ee0 = 0xffa4781e;
  DAT_101e42ee4 = 0xffa6654b;
  DAT_101e42ee8 = 0xff93435b;
  DAT_101e42eec = 0xff387f9c;
  DAT_101e42ef0 = 0xffa3781e;
  DAT_101e42ef4 = 0xffffd18a;
  DAT_101e42ef8 = 0xffff61f7;
  DAT_101e42efc = 0xff5de1f2;
  DAT_101e42f00 = 0xff80eaff;
  DAT_101e42f04 = 0xff32e00e;
  DAT_101e42f08 = 0xff5a3c10;
  DAT_101e42f0c = 0xff330b03;
  DAT_101e42f10 = 0xff33031d;
  DAT_101e42f14 = 0xff032433;
  DAT_101e42f18 = 0xff9e8e8d;
  DAT_101e42f20 = 0x4326000041900000;
  DAT_101e42f28 = 0x4326000041c00000;
  DAT_101d23568 = FUN_100644a94("UI::EVENT_PURCHASE_BUTTON_TRANSACTION_FINISHED");
  return;
}




void FUN_1001bad4c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_1001cd518();
  if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0xb0) != 0) {
      lVar1 = (ulong)*(uint *)(param_1 + 0xb0) * 0xa0;
      puVar2 = *(undefined8 **)(param_1 + 0xb8);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0xa0;
        puVar2 = puVar2 + 0x14;
      } while (lVar1 != 0);
    }
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  std::string::operator=((string *)(param_1 + 200),(string *)&DAT_101d91198);
  return;
}




long * FUN_1001badbc(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)FUN_1001cd5ec(param_1,0);
  *puVar2 = &PTR_thunk_FUN_1001baec8_101464948;
  FUN_1006421a8(puVar2 + 0x470);
  param_1[0x470] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x482] = 0;
  param_1[0x481] = 0;
  plVar1 = param_1 + 0x483;
  thunk_FUN_100652c08(plVar1);
  FUN_10003330c(param_1 + 0x4a1,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x4a4,&DAT_101d91198);
  *(undefined4 *)(param_1 + 0x4a7) = 0xffffffff;
  FUN_100642bd8(param_1 + 0x1a2,puVar2 + 0x470,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652ca4(plVar1,PTR_s_build___BoostBadges_tga_1018549b0);
  if ((*(float *)(param_1 + 0x48c) != 1.0) || (*(float *)((long)param_1 + 0x2464) != 1.0)) {
    lVar3 = NEON_fmov(0x3f800000,4);
    param_1[0x48c] = lVar3;
    FUN_1000200a0(plVar1);
  }
  return param_1;
}




void FUN_1001baec8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001baec8_101464948;
  FUN_1001bba70();
  if (*(char *)((long)param_1 + 0x2537) < '\0') {
    operator_delete((void *)param_1[0x4a4]);
  }
  if (*(char *)((long)param_1 + 0x251f) < '\0') {
    operator_delete((void *)param_1[0x4a1]);
  }
  param_1[0x483] = &PTR_FUN_1014a7108;
  param_1[0x49a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49d);
  FUN_10064e2bc(param_1 + 0x483);
  if ((void *)param_1[0x482] != (void *)0x0) {
    operator_delete__((void *)param_1[0x482]);
    param_1[0x482] = 0;
    param_1[0x481] = 0;
  }
  FUN_10064221c(param_1 + 0x470);
  FUN_1001cd8c0(param_1);
  return;
}




void thunk_FUN_1001baec8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001baec8_101464948;
  FUN_1001bba70();
  if (*(char *)((long)param_1 + 0x2537) < '\0') {
    operator_delete((void *)param_1[0x4a4]);
  }
  if (*(char *)((long)param_1 + 0x251f) < '\0') {
    operator_delete((void *)param_1[0x4a1]);
  }
  param_1[0x483] = &PTR_FUN_1014a7108;
  param_1[0x49a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49d);
  FUN_10064e2bc(param_1 + 0x483);
  if ((void *)param_1[0x482] != (void *)0x0) {
    operator_delete__((void *)param_1[0x482]);
    param_1[0x482] = 0;
    param_1[0x481] = 0;
  }
  FUN_10064221c(param_1 + 0x470);
  FUN_1001cd8c0(param_1);
  return;
}




void FUN_1001baf8c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001baec8();
  operator_delete(pvVar1);
  return;
}




void FUN_1001bafa0(long *param_1,string *param_2,long param_3,undefined1 param_4)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  long *plVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  void *pvVar8;
  ulong uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong unaff_x19;
  long lVar13;
  size_t sVar14;
  long *plVar15;
  long *plVar16;
  size_t sVar17;
  byte bVar18;
  size_t sVar19;
  uint uVar20;
  size_t sVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long local_98;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined4 local_68;
  
  std::string::operator=((string *)(param_1 + 0x1b5),param_2);
  FUN_1001bc9c4(param_1 + 0x18,param_3 + 8);
  lVar22 = *(long *)(param_3 + 0x20);
  lVar13 = *(long *)(param_3 + 0x18);
  lVar24 = *(long *)(param_3 + 0x30);
  lVar23 = *(long *)(param_3 + 0x28);
  lVar26 = *(long *)(param_3 + 0x40);
  lVar25 = *(long *)(param_3 + 0x38);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x48);
  param_1[0x1d] = lVar24;
  param_1[0x1c] = lVar23;
  param_1[0x1f] = lVar26;
  param_1[0x1e] = lVar25;
  param_1[0x1b] = lVar22;
  param_1[0x1a] = lVar13;
  FUN_1000153b4(param_1 + 0x21,param_3 + 0x50);
  std::string::operator=((string *)(param_1 + 0x23),(string *)(param_3 + 0x60));
  lVar22 = *(long *)(param_3 + 0x90);
  lVar13 = *(long *)(param_3 + 0x88);
  lVar24 = *(long *)(param_3 + 0xa0);
  lVar23 = *(long *)(param_3 + 0x98);
  lVar26 = *(long *)(param_3 + 0x80);
  lVar25 = *(long *)(param_3 + 0x78);
  uVar9 = *(ulong *)(param_3 + 0xa8);
  param_1[0x2c] = uVar9;
  param_1[0x29] = lVar22;
  param_1[0x28] = lVar13;
  param_1[0x2b] = lVar24;
  param_1[0x2a] = lVar23;
  param_1[0x27] = lVar26;
  param_1[0x26] = lVar25;
  *(undefined1 *)(param_1 + 0x1b8) = param_4;
  if ((uVar9 & 0xff00000000) != 0) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffef;
    FUN_1001bb398(param_1,DAT_101dbd460,FUN_1001bb3ec,param_1);
    FUN_1001bb398(param_1,DAT_101dbd48c,FUN_1001bb3ec,param_1);
  }
  FUN_100181af8(param_1 + 0x1b9,param_1 + 0x21);
  *(uint *)((long)param_1 + 0xe4c) =
       *(uint *)((long)param_1 + 0xe4c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0xe4c) & 3 | (uint)(param_1[0x1b] != 0) << 2;
  (**(code **)(*param_1 + 0x138))(param_1);
  uVar6 = DAT_101d91884;
  if (0 < *(int *)(param_3 + 0xb0)) {
    lVar13 = 0;
    uVar9 = 0;
    do {
      pvVar8 = operator_new(0x1ce8);
      local_98 = FUN_1001bb480(pvVar8,*(long *)(param_3 + 0xb8) + lVar13);
      FUN_1001bb3f8(param_1 + 0x481,&local_98);
      FUN_100642bd8(param_1 + 0x470,local_98,1);
      unaff_x19 = unaff_x19 & 0xffffffff00000000 | uVar9;
      local_68 = uVar6;
      local_90 = FUN_1001bb478;
      local_80 = 0;
      uStack_78 = 0;
      plStack_88 = param_1;
      local_70 = unaff_x19;
      FUN_10001554c(local_98 + 0xc0,&local_90);
      uVar9 = uVar9 + 1;
      iVar7 = *(int *)(param_3 + 0xb0);
      if (2 < iVar7) {
        iVar7 = 3;
      }
      lVar13 = lVar13 + 0xa0;
    } while ((long)uVar9 < (long)iVar7);
  }
  *(undefined4 *)((long)param_1 + 0x253c) = *(undefined4 *)(param_3 + 0xc0);
  bVar18 = DAT_101d911a8._7_1_;
  sVar14 = DAT_101d911a0;
  plVar1 = (long *)(param_3 + 200);
  sVar19 = (size_t)*(byte *)(param_3 + 0xdf);
  uVar20 = (uint)(char)*(byte *)(param_3 + 0xdf);
  sVar17 = *(size_t *)(param_3 + 0xd0);
  sVar2 = sVar17;
  if (-1 < (int)uVar20) {
    sVar2 = sVar19;
  }
  sVar21 = (size_t)DAT_101d911a8._7_1_;
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = sVar21;
  }
  plVar16 = plVar1;
  if (sVar2 == sVar3) {
    plVar15 = (long *)*plVar1;
    plVar4 = plVar15;
    if (-1 < (int)uVar20) {
      plVar4 = plVar1;
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((int)uVar20 < 0) {
      if ((sVar2 != 0) && (iVar7 = _memcmp(plVar4,pbVar12,sVar2), plVar16 = plVar15, iVar7 != 0))
      goto LAB_1001bb270;
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar12 == ((uint)plVar15 & 0xff)) {
        pbVar11 = (byte *)(param_3 + 0xc9);
        uVar9 = sVar19;
        do {
          uVar9 = uVar9 - 1;
          pbVar12 = pbVar12 + 1;
          if (uVar9 == 0) goto LAB_1001bb298;
          bVar5 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar5 == *pbVar12);
        goto LAB_1001bb218;
      }
      goto LAB_1001bb270;
    }
  }
  else {
LAB_1001bb218:
    if ((int)uVar20 < 0) {
      plVar16 = (long *)*plVar1;
    }
LAB_1001bb270:
    FUN_100652cdc(param_1 + 0x483,plVar16);
    sVar19 = (size_t)*(byte *)(param_3 + 0xdf);
    sVar17 = *(size_t *)(param_3 + 0xd0);
    sVar21 = (size_t)DAT_101d911a8._7_1_;
    uVar20 = (uint)*(byte *)(param_3 + 0xdf);
    sVar14 = DAT_101d911a0;
    bVar18 = DAT_101d911a8._7_1_;
  }
LAB_1001bb298:
  if (-1 < (char)uVar20) {
    sVar17 = sVar19;
  }
  if (-1 < (char)bVar18) {
    sVar14 = sVar21;
  }
  if (sVar17 == sVar14) {
    plVar16 = (void *)*plVar1;
    if (-1 < (char)uVar20) {
      plVar16 = plVar1;
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)bVar18) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((uVar20 >> 7 & 1) == 0) {
      if (sVar17 != 0) {
        if ((uint)*pbVar12 == ((uint)(void *)*plVar1 & 0xff)) {
          pbVar11 = (byte *)(param_3 + 0xc9);
          do {
            sVar19 = sVar19 - 1;
            pbVar12 = pbVar12 + 1;
            if (sVar19 == 0) goto LAB_1001bb334;
            bVar18 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar18 == *pbVar12);
        }
        goto LAB_1001bb308;
      }
    }
    else if (sVar17 != 0) {
      iVar7 = _memcmp(plVar16,pbVar12,sVar17);
      uVar20 = *(uint *)((long)param_1 + 0x249c);
      if (iVar7 == 0) {
        uVar10 = 0;
        goto LAB_1001bb340;
      }
      goto LAB_1001bb310;
    }
LAB_1001bb334:
    uVar10 = 0;
    uVar20 = *(uint *)((long)param_1 + 0x249c);
  }
  else {
LAB_1001bb308:
    uVar20 = *(uint *)((long)param_1 + 0x249c);
LAB_1001bb310:
    uVar10 = 4;
  }
LAB_1001bb340:
  *(uint *)((long)param_1 + 0x249c) = uVar10 | uVar20 & 0xfffffffb;
  std::string::operator=((string *)(param_1 + 0x4a4),(string *)(param_3 + 0xe0));
  FUN_1001cdb24(param_1,param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x2d) = 2;
  FUN_1001cdc4c(param_1);
  return;
}




void FUN_1001bb398(long param_1,int param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    lVar3 = (ulong)uVar1 * 0x30;
    do {
      if ((((int)plVar2[5] == param_2) && (plVar2[1] == param_4)) && (*plVar2 == param_3)) {
        FUN_100015664((uint *)(param_1 + 8),plVar2,plVar2 + 6);
        return;
      }
      plVar2 = plVar2 + 6;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  return;
}




void FUN_1001bb3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1001ceb5c(param_1,param_4,param_5);
  return;
}




void FUN_1001bb3f8(uint *param_1,undefined8 *param_2)

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
    FUN_1001bcaec(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1001bb478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1001bbea0(param_1,param_2,param_5);
  return;
}




long * FUN_1001bb480(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar13;
  char *pcVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_98 [8];
  void *local_90;
  undefined1 *local_88;
  
  puVar11 = (undefined8 *)FUN_10064e20c();
  *puVar11 = &PTR_thunk_FUN_1001bcd78_101464aa0;
  puVar11 = puVar11 + 0x17;
  thunk_FUN_100181304(puVar11,0);
  plVar2 = param_1 + 0x2ce;
  FUN_1006421a8(plVar2);
  param_1[0x2ce] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x2df;
  FUN_1006421a8(plVar3);
  param_1[0x2df] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar4 = param_1 + 0x2f0;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x30e;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x32c;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x352;
  thunk_FUN_100652c08(plVar7);
  thunk_FUN_100650e64(param_1 + 0x370);
  FUN_10003330c(param_1 + 0x396,param_2 + 0x60);
  uVar12 = FUN_1000e7ce4(param_2 + 0x30);
  FUN_10001549c(param_1 + 0x399,uVar12);
  uVar9 = FUN_1000e7cb0(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x39c) = uVar9;
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar2,plVar6,1);
  FUN_1004e313c(auStack_98);
  uVar13 = (ulong)*(uint *)(param_1 + 0x39c);
  FUN_1004e38ac(auStack_98,"%d");
  FUN_1001816d4(0,0x432e0000,0x432e0000,puVar11,0,auStack_98,&DAT_10115a168,&DAT_101dc1cb8,0,in_x6,
                in_x7,uVar13);
  plVar1 = param_1 + 0xfa;
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1001b495c(0x3f000000,puVar11);
  if ((*(float *)(param_1 + 0x21) != 0.5) || (*(float *)((long)param_1 + 0x10c) != 0.5)) {
    param_1[0x21] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar11);
  }
  FUN_1001b4964(puVar11,1);
  puVar8 = PTR_s_build___MenuPartsCommon_tga_101854970;
  uVar13 = param_1[0x39a];
  if (-1 < (char)*(byte *)((long)param_1 + 0x1cdf)) {
    uVar13 = (ulong)*(byte *)((long)param_1 + 0x1cdf);
  }
  pcVar14 = "glory_icon_small";
  if (uVar13 == 4) {
    iVar10 = std::string::compare((ulong)(param_1 + 0x399),0,(char *)0xffffffffffffffff,0x1013d24d0)
    ;
    pcVar14 = "ice_icon_small";
    if (iVar10 != 0) {
      pcVar14 = "glory_icon_small";
    }
  }
  FUN_100652cac(plVar7,puVar8,pcVar14);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_down");
  FUN_10064e47c(0x41d00000,0x41600000,plVar4);
  *(byte *)(param_1 + 0x30b) = *(byte *)(param_1 + 0x30b) | 2;
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_10064e47c(0x41200000,0x41b00000,plVar5);
  fVar15 = (float)FUN_100652e60(plVar4);
  fVar17 = 0.5;
  FUN_100652e60(plVar4);
  if ((*(float *)(param_1 + 0x316) != fVar15 * 0.5) ||
     (*(float *)((long)param_1 + 0x18b4) != fVar17 + -6.0)) {
    *(float *)(param_1 + 0x316) = fVar15 * 0.5;
    *(float *)((long)param_1 + 0x18b4) = fVar17 + -6.0;
    FUN_1000200a0(plVar5);
  }
  local_88 = (undefined1 *)0x3f000000;
  (**(code **)(param_1[0x30e] + 0x28))(plVar5,&local_88);
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  FUN_1006513c0(plVar6,param_2 + 0x88);
  fVar15 = (float)FUN_100652e60(plVar4);
  fVar17 = *(float *)(param_1 + 0x334);
  if ((fVar17 != fVar15 + 4.0) || (fVar17 = *(float *)((long)param_1 + 0x19a4), fVar17 != 0.0)) {
    *(float *)(param_1 + 0x334) = fVar15 + 4.0;
    *(undefined4 *)((long)param_1 + 0x19a4) = 0;
    FUN_1000200a0(plVar6);
  }
  local_88 = (undefined1 *)0x0;
  (**(code **)(param_1[0x32c] + 0x28))(plVar6,&local_88);
  FUN_100651184(plVar6);
  fVar15 = fVar17;
  FUN_1006425d0(plVar3,0,0,1,1);
  fVar15 = (fVar17 - fVar15) * 0.5;
  fVar17 = *(float *)((long)param_1 + 0x173c);
  if (fVar17 != fVar15) {
    *(float *)((long)param_1 + 0x173c) = fVar15;
    FUN_1000200a0(plVar3);
  }
  fVar16 = (float)FUN_1006425d0(plVar2,0,0,1,1);
  FUN_10064e3cc(puVar11);
  fVar15 = fVar17;
  FUN_100651184(plVar6);
  fVar15 = (fVar17 * -0.5 - fVar15) + -4.0;
  if ((*(float *)(param_1 + 0x2d6) != fVar16 * -0.5) ||
     (*(float *)((long)param_1 + 0x16b4) != fVar15)) {
    *(float *)(param_1 + 0x2d6) = fVar16 * -0.5;
    *(float *)((long)param_1 + 0x16b4) = fVar15;
    FUN_1000200a0(plVar2);
  }
  local_88 = (undefined1 *)0x0;
  (**(code **)(param_1[0x2ce] + 0x28))(plVar2,&local_88);
  fVar15 = (float)FUN_10065317c(plVar7);
  fVar17 = (float)FUN_100651184(plVar1);
  fVar16 = 85.0 - (fVar17 + fVar15) * 0.5;
  fVar15 = (float)FUN_100651184(plVar1);
  fVar17 = (float)FUN_10065317c(plVar7);
  fVar17 = fVar17 * 0.5 + -93.0 + fVar16;
  if ((*(float *)(param_1 + 0x35a) != fVar17) || (*(float *)((long)param_1 + 0x1ad4) != 3.0)) {
    *(float *)(param_1 + 0x35a) = fVar17;
    *(undefined4 *)((long)param_1 + 0x1ad4) = 0x40400000;
    FUN_1000200a0(plVar7);
  }
  local_88 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x352] + 0x28))(plVar7,&local_88);
  fVar16 = (fVar15 * -0.5 + 83.0) - fVar16;
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  FUN_100181b5c(fVar16,0,puVar11);
  uVar12 = FUN_10064e3cc(puVar11);
  FUN_10064e3cc(puVar11);
  FUN_10064e47c(uVar12,param_1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  return param_1;
}




void FUN_1001bba70(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  FUN_1001ce334();
  uVar3 = (ulong)*(uint *)(param_1 + 0x2408);
  if (*(uint *)(param_1 + 0x2408) != 0) {
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x2410) + uVar5 * 8) != 0) {
        iVar1 = FUN_100642d08();
        if (iVar1 != 0) {
          FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0x2410) + uVar5 * 8),1);
        }
        lVar4 = *(long *)(param_1 + 0x2410);
        plVar2 = *(long **)(lVar4 + uVar5 * 8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
          lVar4 = *(long *)(param_1 + 0x2410);
        }
        *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
        uVar3 = (ulong)*(uint *)(param_1 + 0x2408);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (*(long *)(param_1 + 0x2410) != 0) {
    *(undefined4 *)(param_1 + 0x2408) = 0;
  }
  return;
}




void FUN_1001bbafc(undefined1 param_1 [16],float param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 unaff_d9;
  undefined4 uVar13;
  float fVar14;
  undefined1 *local_78;
  
  uVar13 = (undefined4)((ulong)unaff_d9 >> 0x20);
  fVar14 = *(float *)((long)param_3 + 0x134);
  if (*(uint *)(param_3 + 0x1b3) != 0) {
    plVar5 = *(long **)(param_3[0x1b4] + (ulong)*(uint *)(param_3 + 0x1b3) * 8 + -8);
    fVar12 = *(float *)((long)plVar5 + 0x44);
    (**(code **)(*plVar5 + 0x50))();
    fVar14 = fVar12 + fVar14 + param_2;
  }
  uVar1 = *(uint *)(param_3 + 0x481);
  if (uVar1 != 0) {
    fVar12 = (float)(**(code **)(**(long **)param_3[0x482] + 0x48))();
    uVar6 = *(uint *)(param_3 + 0x481);
    if (uVar6 != 0) {
      uVar7 = 0;
      fVar12 = ((*(float *)((long)param_3 + 0x14c) - (float)uVar1 * fVar12) +
               (float)(uVar6 - 1) * -14.0) * 0.5;
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      uVar13 = 0;
      iVar8 = -1;
      do {
        plVar5 = *(long **)(param_3[0x482] + (ulong)(uVar6 + iVar8) * 8);
        if (plVar5 != (long *)0x0) {
          fVar9 = (float)(**(code **)(*plVar5 + 0x48))(plVar5);
          fVar10 = (float)(**(code **)(*plVar5 + 0x48))(plVar5);
          fVar9 = fVar12 + (float)(uVar7 & 0xffffffff) * (fVar9 + 14.0);
          fVar10 = fVar9 + fVar10 * 0.5;
          plVar5 = *(long **)(param_3[0x482] + uVar7 * 8);
          (**(code **)(*plVar5 + 0x48))(plVar5);
          fVar9 = fVar14 + 80.0 + fVar9 * 0.5;
          bVar4 = false;
          if ((*(float *)(plVar5 + 8) == fVar10) &&
             (bVar4 = false, !NAN(*(float *)((long)plVar5 + 0x44)) && !NAN(fVar9))) {
            bVar4 = *(float *)((long)plVar5 + 0x44) == fVar9;
          }
          if (!bVar4) {
            *(float *)(plVar5 + 8) = fVar10;
            *(float *)((long)plVar5 + 0x44) = fVar9;
            FUN_1000200a0(plVar5);
          }
          local_78 = &DAT_3f0000003f000000;
          (**(code **)(*plVar5 + 0x28))(plVar5,&local_78);
          uVar6 = *(uint *)(param_3 + 0x481);
        }
        uVar7 = uVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (uVar7 < uVar6);
    }
  }
  plVar5 = param_3 + 0x2e;
  lVar2 = param_3[0x2c];
  lVar3 = param_3[0x29];
  fVar12 = *(float *)((long)param_3 + 0x14c);
  fVar9 = *(float *)(param_3 + 0x26);
  fVar14 = fVar9 * 2.0;
  FUN_1006425d0(param_3 + 0x1a2,0,0,1,1);
  FUN_1001c1270((int)lVar3,CONCAT44(uVar13,fVar12 + fVar14),
                fVar9 + -40.0 + *(float *)((long)param_3 + 0x134) * 2.0,plVar5,(int)lVar2,0);
  FUN_1001c34ac((int)param_3[0x26],*(undefined4 *)((long)param_3 + 0x134),(undefined4)DAT_101dc1cb8,
                DAT_101dc1cb8._4_4_,plVar5,param_3 + 0x1a2);
  uVar11 = FUN_1006425d0(plVar5,0,0,1,1);
  FUN_1006425d0(plVar5,0,0,1,1);
  FUN_10064e47c(uVar11,param_3);
  if (((*(byte *)((long)param_3 + 0x249c) >> 2 & 1) == 0) || (3 < *(uint *)((long)param_3 + 0x253c))
     ) goto LAB_1001bbe74;
  plVar5 = param_3 + 0x483;
  switch(*(uint *)((long)param_3 + 0x253c)) {
  case 0:
    fVar14 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    fVar10 = *(float *)(param_3 + 0x38);
    fVar9 = fVar10 * -fVar14;
    break;
  case 1:
    fVar14 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    fVar12 = *(float *)(param_3 + 0x38);
    fVar10 = 1.0;
    fVar9 = (float)FUN_10065317c(param_3 + 0x164);
    fVar9 = (1.0 - fVar12) * fVar14 - fVar9;
    break;
  case 2:
    fVar14 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    fVar10 = *(float *)(param_3 + 0x38);
    fVar9 = fVar10 * -fVar14;
    goto LAB_1001bbe1c;
  case 3:
    fVar14 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    fVar12 = *(float *)(param_3 + 0x38);
    fVar10 = 1.0;
    fVar9 = (float)FUN_10065317c(param_3 + 0x164);
    fVar9 = (1.0 - fVar12) * fVar14 - fVar9;
LAB_1001bbe1c:
    (**(code **)(*param_3 + 0x48))(param_3);
    fVar10 = fVar10 - fVar10 * *(float *)((long)param_3 + 0x1c4);
    goto LAB_1001bbe34;
  }
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar10 = *(float *)((long)param_3 + 0x1c4) * -fVar10;
LAB_1001bbe34:
  bVar4 = false;
  if ((*(float *)(param_3 + 0x48b) == fVar9) &&
     (bVar4 = false, !NAN(*(float *)((long)param_3 + 0x245c)) && !NAN(fVar10))) {
    bVar4 = *(float *)((long)param_3 + 0x245c) == fVar10;
  }
  if (!bVar4) {
    *(float *)(param_3 + 0x48b) = fVar9;
    *(float *)((long)param_3 + 0x245c) = fVar10;
    FUN_1000200a0(plVar5);
  }
  local_78 = &DAT_3f0000003f000000;
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_78);
LAB_1001bbe74:
  FUN_1001ce5d0(param_3);
  return;
}




void FUN_1001bbea0(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  undefined1 auStack_30 [8];
  void *local_28;
  
  lVar2 = FUN_10016c2f0();
  if (((*(int *)(lVar2 + 0x38) < 1) && (-1 < (int)param_3)) &&
     (param_3 < *(uint *)(param_1 + 0x2408))) {
    std::string::operator=
              ((string *)(param_1 + 0x2508),
               (string *)(*(long *)(*(long *)(param_1 + 0x2410) + (ulong)param_3 * 8) + 0x1cb0));
    *(undefined4 *)(param_1 + 0x2538) =
         *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x2410) + (ulong)param_3 * 8) + 0x1ce0);
    uVar3 = FUN_1004e0150("MENU_DIALOG_BOOSTS_PURCHASE_TITLE",0);
    thunk_FUN_1004e439c(auStack_30,uVar3);
    uVar3 = FUN_1004e0150("MENU_DIALOG_BOOSTS_PURCHASE_BODY",0);
    thunk_FUN_1004e439c(auStack_40,uVar3);
    FUN_1004e313c(auStack_50);
    FUN_1004e38ac(auStack_50,"%d");
    FUN_1004e313c(auStack_60);
    iVar1 = FUN_10015d3f8();
    if (iVar1 != 0) {
      FUN_10015d3ec();
    }
    FUN_1004e38ac(auStack_60,"%u");
    thunk_FUN_1004e439c(auStack_70,&DAT_101d91650);
    if (*(int *)(param_1 + 0xc0) != 0) {
      FUN_1000153b4(auStack_70,*(undefined8 *)(param_1 + 200));
    }
    FUN_1004e3120(auStack_80,"[BOOST_NAME]");
    FUN_1004e3bc4(auStack_40,0,auStack_80,auStack_70);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
    FUN_1004e3120(auStack_80,"[UNLOCK_AMOUNT]");
    FUN_1004e3bc4(auStack_40,0,auStack_80,auStack_50);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
    FUN_1004e3120(auStack_80,"[UNLOCK_CURRENCY]");
    uVar3 = FUN_1004e0150("MENU_GENERIC_GOLD_NAME",0);
    FUN_1004e3bc4(auStack_40,0,auStack_80,uVar3);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
    FUN_1004e3120(auStack_80,"[BALANCE_AMOUNT]");
    FUN_1004e3bc4(auStack_40,0,auStack_80,auStack_60);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
    FUN_1004e3120(auStack_80,"[BALANCE_CURRENCY]");
    uVar3 = FUN_1004e0150("MENU_GENERIC_GOLD_NAME",0);
    FUN_1004e3bc4(auStack_40,0,auStack_80,uVar3);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
    uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    FUN_1001e31c8(auStack_30,auStack_40,uVar3,uVar4,&DAT_101d91650,param_1,thunk_FUN_1001bc178,
                  thunk_FUN_1001bc294,0);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
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
  return;
}




void thunk_FUN_1001bc178(long param_1)

{
  string *this;
  size_t sVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  this = (string *)(param_1 + 0x2508);
  bVar4 = *(byte *)(param_1 + 0x251f);
  uVar7 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_1 + 0x2510);
  if (-1 < (char)bVar4) {
    sVar1 = uVar7;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    psVar3 = *(string **)this;
    if (-1 < (char)bVar4) {
      psVar3 = this;
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if (sVar1 == 0) {
        return;
      }
      iVar5 = _memcmp(psVar3,pbVar9,sVar1);
      if (iVar5 == 0) {
        return;
      }
    }
    else {
      if (sVar1 == 0) {
        return;
      }
      if ((uint)*pbVar9 == ((uint)*(string **)this & 0xff)) {
        pbVar8 = (byte *)(param_1 + 0x2509);
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
    }
  }
  uVar6 = FUN_10015d3ec();
  FUN_1001663b8(uVar6,this,(string *)(param_1 + 0x2520));
  std::string::operator=(this,(string *)&DAT_101d91198);
  *(undefined4 *)(param_1 + 0x2538) = 0xffffffff;
  std::string::operator=((string *)(param_1 + 0x2520),(string *)&DAT_101d91198);
  return;
}




void thunk_FUN_1001bc294(long param_1)

{
  string *this;
  size_t sVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  this = (string *)(param_1 + 0x2508);
  bVar4 = *(byte *)(param_1 + 0x251f);
  uVar6 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_1 + 0x2510);
  if (-1 < (char)bVar4) {
    sVar1 = uVar6;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    psVar3 = *(string **)this;
    if (-1 < (char)bVar4) {
      psVar3 = this;
    }
    pbVar8 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar8 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if (sVar1 == 0) {
        return;
      }
      iVar5 = _memcmp(psVar3,pbVar8,sVar1);
      if (iVar5 == 0) {
        return;
      }
    }
    else {
      if (sVar1 == 0) {
        return;
      }
      if ((uint)*pbVar8 == ((uint)*(string **)this & 0xff)) {
        pbVar7 = (byte *)(param_1 + 0x2509);
        do {
          uVar6 = uVar6 - 1;
          pbVar8 = pbVar8 + 1;
          if (uVar6 == 0) {
            return;
          }
          bVar4 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar4 == *pbVar8);
      }
    }
  }
  std::string::operator=(this,(string *)&DAT_101d91198);
  *(undefined4 *)(param_1 + 0x2538) = 0xffffffff;
  std::string::operator=((string *)(param_1 + 0x2520),(string *)&DAT_101d91198);
  return;
}




void FUN_1001bc178(long param_1)

{
  string *this;
  size_t sVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  this = (string *)(param_1 + 0x2508);
  bVar4 = *(byte *)(param_1 + 0x251f);
  uVar7 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_1 + 0x2510);
  if (-1 < (char)bVar4) {
    sVar1 = uVar7;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    psVar3 = *(string **)this;
    if (-1 < (char)bVar4) {
      psVar3 = this;
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if (sVar1 == 0) {
        return;
      }
      iVar5 = _memcmp(psVar3,pbVar9,sVar1);
      if (iVar5 == 0) {
        return;
      }
    }
    else {
      if (sVar1 == 0) {
        return;
      }
      if ((uint)*pbVar9 == ((uint)*(string **)this & 0xff)) {
        pbVar8 = (byte *)(param_1 + 0x2509);
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
    }
  }
  uVar6 = FUN_10015d3ec();
  FUN_1001663b8(uVar6,this,(string *)(param_1 + 0x2520));
  std::string::operator=(this,(string *)&DAT_101d91198);
  *(undefined4 *)(param_1 + 0x2538) = 0xffffffff;
  std::string::operator=((string *)(param_1 + 0x2520),(string *)&DAT_101d91198);
  return;
}




void FUN_1001bc294(long param_1)

{
  string *this;
  size_t sVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  this = (string *)(param_1 + 0x2508);
  bVar4 = *(byte *)(param_1 + 0x251f);
  uVar6 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_1 + 0x2510);
  if (-1 < (char)bVar4) {
    sVar1 = uVar6;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    psVar3 = *(string **)this;
    if (-1 < (char)bVar4) {
      psVar3 = this;
    }
    pbVar8 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar8 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if (sVar1 == 0) {
        return;
      }
      iVar5 = _memcmp(psVar3,pbVar8,sVar1);
      if (iVar5 == 0) {
        return;
      }
    }
    else {
      if (sVar1 == 0) {
        return;
      }
      if ((uint)*pbVar8 == ((uint)*(string **)this & 0xff)) {
        pbVar7 = (byte *)(param_1 + 0x2509);
        do {
          uVar6 = uVar6 - 1;
          pbVar8 = pbVar8 + 1;
          if (uVar6 == 0) {
            return;
          }
          bVar4 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar4 == *pbVar8);
      }
    }
  }
  std::string::operator=(this,(string *)&DAT_101d91198);
  *(undefined4 *)(param_1 + 0x2538) = 0xffffffff;
  std::string::operator=((string *)(param_1 + 0x2520),(string *)&DAT_101d91198);
  return;
}




long * FUN_1001bc39c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  lVar2 = 0;
  *puVar1 = &PTR_FUN_101464be8;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0xffffffff;
  do {
    FUN_1001badbc((long)param_1 + lVar2 + 0xb8);
    lVar2 = lVar2 + 0x2540;
  } while (lVar2 != 0x6fc0);
  *(undefined4 *)(param_1 + 0xe0f) = 0;
  plVar3 = param_1 + 0x17;
  lVar2 = 3;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
    *(uint *)((long)plVar3 + 0x84) = *(uint *)((long)plVar3 + 0x84) & 0xfffffffb;
    FUN_1001ce0a8(plVar3);
    plVar3 = plVar3 + 0x4a8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}




long * thunk_FUN_1001bc39c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  lVar2 = 0;
  *puVar1 = &PTR_FUN_101464be8;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0xffffffff;
  do {
    FUN_1001badbc((long)param_1 + lVar2 + 0xb8);
    lVar2 = lVar2 + 0x2540;
  } while (lVar2 != 0x6fc0);
  *(undefined4 *)(param_1 + 0xe0f) = 0;
  plVar3 = param_1 + 0x17;
  lVar2 = 3;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
    *(uint *)((long)plVar3 + 0x84) = *(uint *)((long)plVar3 + 0x84) & 0xfffffffb;
    FUN_1001ce0a8(plVar3);
    plVar3 = plVar3 + 0x4a8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}




void FUN_1001bc45c(float param_1,long param_2)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  long lVar4;
  float fVar5;
  
  piVar3 = (int *)(param_2 + 0x220);
  lVar4 = 3;
  do {
    if (*piVar3 == 1) {
      FUN_1001cddf8(piVar3 + -0x5a,0);
    }
    else {
      if ((0.0 < (float)piVar3[-5]) &&
         (fVar5 = (float)piVar3[-5] - param_1, piVar3[-5] = (int)fVar5, fVar5 <= 0.0)) {
        *piVar3 = 1;
        return;
      }
      if (((*piVar3 == 2) && (*(long *)(piVar3 + -0x52) != 0)) &&
         ((*(byte *)(*(long *)(param_2 + 0x20) + 0x84) >> 2 & 1) != 0)) {
        iVar1 = FUN_10109c574();
        if (((iVar1 != 0) && (iVar1 = FUN_10109c588(), iVar1 != 0)) &&
           (((char)piVar3[-1] != '\0' && (pbVar2 = (byte *)FUN_10109c59c(0), (*pbVar2 & 1) == 0))))
        {
          *piVar3 = 1;
        }
        iVar1 = FUN_10109c4dc();
        if (((iVar1 != 0) && ((char)piVar3[-1] != '\0')) && (iVar1 = FUN_10109c520(0), iVar1 != 0))
        {
          *piVar3 = 1;
        }
        if (*(char *)((long)piVar3 + -3) != '\0') {
          FUN_1001ce5d0(piVar3 + -0x5a);
        }
      }
    }
    piVar3 = piVar3 + 0x950;
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) {
      return;
    }
  } while( true );
}




void FUN_1001bc574(long param_1)

{
  int *piVar1;
  long lVar2;
  
  piVar1 = (int *)(param_1 + 0x220);
  lVar2 = 3;
  do {
    if (*piVar1 == 2) {
      FUN_1001cddf8(piVar1 + -0x5a,0);
    }
    piVar1 = piVar1 + 0x950;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}




bool FUN_1001bc5c4(uint *param_1,undefined8 *param_2)

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
LAB_1001bc664:
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
      if ((int)uVar7 == -1) goto LAB_1001bc664;
    }
    bVar3 = *(int *)(lVar6 + uVar7 * 8 + 4) != -1;
  }
  return bVar3;
}




void FUN_1001bc674(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  uint uVar10;
  
  uVar9 = *param_2;
  uVar4 = FUN_1004d2524(uVar9);
  uVar5 = FUN_100015208(uVar9,uVar4,0x12345678);
  uVar10 = *param_1;
  if (uVar10 == 0) {
    lVar7 = *(long *)(param_1 + 2);
    uVar6 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    if (uVar10 != 0) {
      uVar3 = uVar5 / uVar10;
    }
    uVar3 = uVar5 - uVar3 * uVar10;
    lVar7 = *(long *)(param_1 + 2);
    while ((uVar6 = (ulong)uVar3, *(uint *)(lVar7 + uVar6 * 8) != uVar5 &&
           (*(int *)(lVar7 + uVar6 * 8 + 4) != -1))) {
      uVar1 = uVar10;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
  }
  uVar10 = *(uint *)(lVar7 + uVar6 * 8 + 4);
  *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar10 * 4) = param_1[10];
  param_1[10] = uVar10;
  *(undefined4 *)(*(long *)(param_1 + 2) + uVar6 * 8 + 4) = 0xffffffff;
  while( true ) {
    uVar10 = (uint)uVar6;
    if ((int)uVar10 < 1) {
      uVar10 = *param_1;
    }
    uVar6 = (ulong)(uVar10 - 1);
    lVar7 = *(long *)(param_1 + 2);
    piVar8 = (int *)(lVar7 + uVar6 * 8 + 4);
    iVar2 = *piVar8;
    if (iVar2 == -1) break;
    *piVar8 = -1;
    lVar7 = FUN_100034344(param_1,*(undefined4 *)(lVar7 + uVar6 * 8));
    *(int *)(lVar7 + 4) = iVar2;
  }
  param_1[4] = param_1[4] - 1;
  return;
}




void FUN_1001bc78c(long param_1,long *param_2,undefined8 param_3)

{
  uint *puVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  long *local_48;
  
  local_48 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    local_48 = param_2;
  }
  uVar2 = FUN_1001bc5c4(param_1 + 0x88,&local_48);
  if ((uVar2 & 1) == 0) {
    puVar1 = (uint *)(param_1 + 0x7078);
    uVar4 = *puVar1;
    iVar3 = 3;
    do {
      if (*(int *)(param_1 + (long)(int)uVar4 * 0x2540 + 0x220) == 0) {
        FUN_1001bafa0(param_1 + (long)(int)uVar4 * 0x2540 + 0xb8,param_2,param_3,0);
        local_48 = (long *)*param_2;
        if (-1 < *(char *)((long)param_2 + 0x17)) {
          local_48 = param_2;
        }
        FUN_1001bc880(param_1 + 0x88,&local_48,puVar1);
        return;
      }
      uVar4 = (uVar4 + 1) % 3;
      *puVar1 = uVar4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}




void FUN_1001bc880(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = FUN_1004d2524(uVar3);
  uVar3 = FUN_100015208(uVar3,uVar1,0x12345678);
  lVar2 = FUN_100034344(param_1,uVar3);
  uVar1 = FUN_1001bcc18(param_1,param_3);
  *(undefined4 *)(lVar2 + 4) = uVar1;
  return;
}




void FUN_1001bc8e8(undefined8 *param_1)

{
  long lVar1;
  long lVar3;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_101464be8;
  puVar2 = param_1 + 0x967;
  lVar3 = -0x6fc0;
  do {
    lVar1 = FUN_1001baec8(puVar2);
    puVar2 = (undefined8 *)(lVar1 + -0x2540);
    lVar3 = lVar3 + 0x2540;
  } while (lVar3 != 0);
  FUN_1001bca68(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_1001bc948(undefined8 *param_1)

{
  long lVar1;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_101464be8;
  puVar2 = param_1 + 0x967;
  lVar4 = -0x6fc0;
  do {
    lVar1 = FUN_1001baec8(puVar2);
    puVar2 = (undefined8 *)(lVar1 + -0x2540);
    lVar4 = lVar4 + 0x2540;
  } while (lVar4 != 0);
  FUN_1001bca68(param_1 + 0x11);
  pvVar3 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar3);
  return;
}




void thunk_FUN_1001bcd78(void)

{
  FUN_1001bcd78();
  return;
}




void FUN_1001bc9b0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001bcd78();
  operator_delete(pvVar1);
  return;
}




void FUN_1001bc9c4(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    FUN_10003c1ec(param_1,1);
    FUN_10003c0ec(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar4 = *(long *)(param_1 + 2);
      lVar5 = (ulong)*param_2 * 0x38;
      do {
        thunk_FUN_1004e439c(lVar4,lVar3);
        FUN_10003330c(lVar4 + 0x10,lVar3 + 0x10);
        uVar2 = *(undefined8 *)(lVar3 + 0x28);
        *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar3 + 0x30);
        *(undefined8 *)(lVar4 + 0x28) = uVar2;
        lVar3 = lVar3 + 0x38;
        lVar4 = lVar4 + 0x38;
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




uint * FUN_1001bca68(uint *param_1)

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
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 4) = param_1[10];
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




void FUN_1001bcaec(uint *param_1,uint param_2)

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




long FUN_1001bcb68(uint *param_1,undefined8 *param_2)

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
LAB_1001bcc00:
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
      if ((int)uVar6 == -1) goto LAB_1001bcc00;
    }
    uVar6 = (ulong)*(uint *)(lVar5 + uVar6 * 8 + 4);
  }
  return *(long *)(param_1 + 8) + uVar6 * 4;
}




void FUN_1001bcc18(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_1001bcc7c(param_1 + 0x18,auStack_28);
    uVar1 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar1 * 4);
  }
  *(undefined4 *)(lVar2 + uVar1 * 4) = *param_2;
  return;
}




void FUN_1001bcc7c(uint *param_1,undefined4 *param_2)

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
    FUN_1001bccfc(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_1001bccfc(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1001bcd78(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001bcd78_101464aa0;
  if (*(char *)((long)param_1 + 0x1cdf) < '\0') {
    operator_delete((void *)param_1[0x399]);
  }
  if (*(char *)((long)param_1 + 0x1cc7) < '\0') {
    operator_delete((void *)param_1[0x396]);
  }
  thunk_FUN_100651068(param_1 + 0x370);
  param_1[0x352] = &PTR_FUN_1014a7108;
  param_1[0x369] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x36c);
  FUN_10064e2bc(param_1 + 0x352);
  thunk_FUN_100651068(param_1 + 0x32c);
  param_1[0x30e] = &PTR_FUN_1014a7108;
  param_1[0x325] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x328);
  FUN_10064e2bc(param_1 + 0x30e);
  param_1[0x2f0] = &PTR_FUN_1014a7108;
  param_1[0x307] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x30a);
  FUN_10064e2bc(param_1 + 0x2f0);
  FUN_10064221c(param_1 + 0x2df);
  FUN_10064221c(param_1 + 0x2ce);
  FUN_10003bd40(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




long * FUN_1001bce98(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_FUN_101464d00;
  puVar6 = puVar6 + 0x17;
  thunk_FUN_100652c08(puVar6);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x71;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x8f;
  thunk_FUN_100652c08(plVar4);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100652cac(puVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar6,&DAT_10115a168,2);
  uVar5 = *(uint *)((long)param_1 + 0x13c);
  if ((uVar5 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x13c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5280;
    FUN_1000200a0(puVar6);
  }
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a168,2);
  uVar5 = *(uint *)((long)param_1 + 0x22c);
  if ((uVar5 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x22c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5280;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar2,&DAT_10115a168,2);
  uVar5 = *(uint *)((long)param_1 + 0x31c);
  if ((uVar5 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x31c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5280;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a168,2);
  uVar5 = *(uint *)((long)param_1 + 0x40c);
  if ((uVar5 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x40c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5280;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  uVar5 = *(uint *)((long)param_1 + 0x4fc);
  if ((uVar5 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x4fc) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x2600;
    FUN_1000200a0(plVar4);
  }
  return param_1;
}




long * thunk_FUN_1001bce98(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_FUN_101464d00;
  puVar6 = puVar6 + 0x17;
  thunk_FUN_100652c08(puVar6);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x71;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x8f;
  thunk_FUN_100652c08(plVar4);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100652cac(puVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar6,&DAT_10115a168,2);
  uVar5 = *(uint *)((long)param_1 + 0x13c);
  if ((uVar5 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x13c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5280;
    FUN_1000200a0(puVar6);
  }
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a168,2);
  uVar5 = *(uint *)((long)param_1 + 0x22c);
  if ((uVar5 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x22c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5280;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar2,&DAT_10115a168,2);
  uVar5 = *(uint *)((long)param_1 + 0x31c);
  if ((uVar5 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x31c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5280;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a168,2);
  uVar5 = *(uint *)((long)param_1 + 0x40c);
  if ((uVar5 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x40c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5280;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  uVar5 = *(uint *)((long)param_1 + 0x4fc);
  if ((uVar5 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x4fc) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x2600;
    FUN_1000200a0(plVar4);
  }
  return param_1;
}




void FUN_1001bd128(undefined8 param_1,undefined8 param_2,undefined1 param_3 [16],long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_68;
  
  uVar5 = param_3._0_8_;
  fVar8 = (float)param_1;
  fVar10 = fVar8 + param_3._0_4_ * 2.0;
  lVar1 = param_4 + 0xb8;
  FUN_10064e47c(fVar10,uVar5,lVar1);
  lVar2 = param_4 + 0x1a8;
  FUN_10064e47c(fVar10,uVar5,lVar2);
  lVar3 = param_4 + 0x298;
  FUN_10064e47c(uVar5,param_2,lVar3);
  lVar4 = param_4 + 0x388;
  FUN_10064e47c(uVar5,param_2,lVar4);
  fVar9 = -param_3._0_4_;
  fVar7 = (float)param_2;
  fVar11 = fVar7 * 0.5;
  fVar10 = -(fVar7 * 0.5);
  bVar6 = false;
  if ((*(float *)(param_4 + 0xf8) == fVar9) &&
     (bVar6 = false, !NAN(*(float *)(param_4 + 0xfc)) && !NAN(fVar10))) {
    bVar6 = *(float *)(param_4 + 0xfc) == fVar10;
  }
  if (!bVar6) {
    *(float *)(param_4 + 0xf8) = fVar9;
    *(float *)(param_4 + 0xfc) = fVar10;
    FUN_1000200a0(lVar1);
  }
  local_68 = 0x3f80000000000000;
  (**(code **)(*(long *)(param_4 + 0xb8) + 0x28))(lVar1,&local_68);
  bVar6 = false;
  if ((*(float *)(param_4 + 0x1e8) == fVar9) &&
     (bVar6 = false, !NAN(*(float *)(param_4 + 0x1ec)) && !NAN(fVar11))) {
    bVar6 = *(float *)(param_4 + 0x1ec) == fVar11;
  }
  if (!bVar6) {
    *(float *)(param_4 + 0x1e8) = fVar9;
    *(float *)(param_4 + 0x1ec) = fVar11;
    FUN_1000200a0(lVar2);
  }
  local_68 = 0;
  (**(code **)(*(long *)(param_4 + 0x1a8) + 0x28))(lVar2,&local_68);
  bVar6 = false;
  if ((*(float *)(param_4 + 0x2dc) == 0.0) && (bVar6 = false, !NAN(*(float *)(param_4 + 0x2d8)))) {
    bVar6 = *(float *)(param_4 + 0x2d8) == 0.0;
  }
  if (!bVar6) {
    *(undefined8 *)(param_4 + 0x2d8) = 0;
    FUN_1000200a0(lVar3);
  }
  local_68 = 0x3f0000003f800000;
  (**(code **)(*(long *)(param_4 + 0x298) + 0x28))(lVar3,&local_68);
  if ((*(float *)(param_4 + 0x3c8) != fVar8) || (*(float *)(param_4 + 0x3cc) != 0.0)) {
    *(float *)(param_4 + 0x3c8) = fVar8;
    *(undefined4 *)(param_4 + 0x3cc) = 0;
    FUN_1000200a0(lVar4);
  }
  local_68 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_4 + 0x388) + 0x28))(lVar4,&local_68);
  FUN_10064e47c(param_1,param_2,param_4 + 0x478);
  if ((*(float *)(param_4 + 0x4b8) != 0.0) || (*(float *)(param_4 + 0x4bc) != fVar7 * -0.5)) {
    *(undefined4 *)(param_4 + 0x4b8) = 0;
    *(float *)(param_4 + 0x4bc) = fVar7 * -0.5;
    FUN_1000200a0(param_4 + 0x478);
  }
  FUN_10064e47c(param_1,param_2,param_4);
  return;
}




void FUN_1001bd340(float param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  
  FUN_100652dd4(param_2 + 0xb8,param_3,2);
  FUN_100652dd4(param_2 + 0x298,param_3,2);
  FUN_100652dd4(param_2 + 0x1a8,param_3,2);
  FUN_100652dd4(param_2 + 0x388,param_3,2);
  uVar2 = (uint)(param_1 * 255.0);
  uVar1 = *(uint *)(param_2 + 0x13c);
  if (uVar2 != (uVar1 >> 7 & 0xff)) {
    *(uint *)(param_2 + 0x13c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_1000200a0(param_2 + 0xb8);
  }
  uVar1 = *(uint *)(param_2 + 0x31c);
  if (uVar2 != (uVar1 >> 7 & 0xff)) {
    *(uint *)(param_2 + 0x31c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_1000200a0(param_2 + 0x298);
  }
  uVar1 = *(uint *)(param_2 + 0x22c);
  if (uVar2 != (uVar1 >> 7 & 0xff)) {
    *(uint *)(param_2 + 0x22c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_1000200a0(param_2 + 0x1a8);
  }
  uVar1 = *(uint *)(param_2 + 0x40c);
  if (uVar2 == (uVar1 >> 7 & 0xff)) {
    return;
  }
  *(uint *)(param_2 + 0x40c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
  FUN_1000200a0(param_2 + 0x388);
  return;
}




void FUN_1001bd46c(float param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  
  FUN_100652dd4(param_2 + 0x478,param_3,2);
  uVar1 = *(uint *)(param_2 + 0x4fc);
  if ((int)(param_1 * 255.0) == (uVar1 >> 7 & 0xff)) {
    return;
  }
  *(uint *)(param_2 + 0x4fc) =
       uVar1 & 0xffff8000 | uVar1 & 0x7f | ((int)(param_1 * 255.0) & 0xffU) << 7;
  FUN_1000200a0(param_2 + 0x478);
  return;
}




long * FUN_1001bd4e0(long *param_1,undefined1 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined1 *local_58;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_FUN_101464e50;
  puVar4 = puVar4 + 0x17;
  thunk_FUN_100651ebc(puVar4);
  plVar1 = param_1 + 0x41;
  thunk_FUN_100651ebc(plVar1);
  plVar2 = param_1 + 0x6b;
  thunk_FUN_100651ebc(plVar2);
  *(undefined4 *)(param_1 + 0x95) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x4ac) = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x17] + 0x28))(puVar4,&local_58);
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x41] + 0x28))(plVar1,&local_58);
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x6b] + 0x28))(plVar2,&local_58);
  *(uint *)((long)param_1 + 0x3dc) = *(uint *)((long)param_1 + 0x3dc) & 0xffffffbf;
  ppuVar3 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  if (*(char *)((long)param_1 + 0x4ac) != '\0') {
    ppuVar3 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  }
  puVar5 = *ppuVar3;
  FUN_100651f8c(plVar2,puVar5);
  FUN_100651f8c(puVar4,puVar5);
  FUN_100651f8c(plVar1,puVar5);
  FUN_100652444(puVar4,"square_button_fill_top_left",0,0,0,"square_button_fill_top_middle",0,0,0,
                "square_button_fill_middle_left",0,"white_background");
  FUN_100652590(puVar4,&DAT_10115a164,2);
  if (*(char *)((long)param_1 + 0x4ac) == '\0') {
    FUN_100652444(plVar2,"tile_edge_corner",0,0,0,"tile_edge_top_edge",0,0,0,"tile_edge_left_edge",0
                  ,0);
  }
  FUN_100652590(plVar2,&DAT_10115a164,2);
  *(uint *)((long)param_1 + 0x3dc) = *(uint *)((long)param_1 + 0x3dc) & 0xfffffffb;
  FUN_100652444(plVar1,"square_button_top_left",0,0,0,"square_button_top_middle",0,0,0,
                "square_button_middle_left",0,0);
  FUN_100652590(plVar1,&DAT_10115a164,2);
  return param_1;
}




void FUN_1001bd778(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x3dc) = *(uint *)(param_1 + 0x3dc) & 0xfffffffb | uVar1;
  return;
}




void FUN_1001bd798(long param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_100652444(param_1 + 0x208,"square_button_top_left",0,0,0,"square_button_top_middle",0,0,0,
                  "square_button_middle_left",0,0);
  }
  else {
    FUN_100651f94(param_1 + 0x208,"gradient_button_top_left",0,0,0,"gradient_button_top_middle",0,0,
                  0,"gradient_button_top_right",0,"gradient_button_middle_left",0,0,0,
                  "gradient_button_middle_right",0,"gradient_button_bottom_left",0,
                  "gradient_button_bottom_middle",0,"gradient_button_bottom_right",0);
  }
  return;
}




long * thunk_FUN_1001bd4e0(long *param_1,undefined1 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined1 *puStack_58;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_FUN_101464e50;
  puVar4 = puVar4 + 0x17;
  thunk_FUN_100651ebc(puVar4);
  plVar1 = param_1 + 0x41;
  thunk_FUN_100651ebc(plVar1);
  plVar2 = param_1 + 0x6b;
  thunk_FUN_100651ebc(plVar2);
  *(undefined4 *)(param_1 + 0x95) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x4ac) = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  puStack_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x17] + 0x28))(puVar4,&puStack_58);
  puStack_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x41] + 0x28))(plVar1,&puStack_58);
  puStack_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x6b] + 0x28))(plVar2,&puStack_58);
  *(uint *)((long)param_1 + 0x3dc) = *(uint *)((long)param_1 + 0x3dc) & 0xffffffbf;
  ppuVar3 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  if (*(char *)((long)param_1 + 0x4ac) != '\0') {
    ppuVar3 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  }
  puVar5 = *ppuVar3;
  FUN_100651f8c(plVar2,puVar5);
  FUN_100651f8c(puVar4,puVar5);
  FUN_100651f8c(plVar1,puVar5);
  FUN_100652444(puVar4,"square_button_fill_top_left",0,0,0,"square_button_fill_top_middle",0,0,0,
                "square_button_fill_middle_left",0,"white_background");
  FUN_100652590(puVar4,&DAT_10115a164,2);
  if (*(char *)((long)param_1 + 0x4ac) == '\0') {
    FUN_100652444(plVar2,"tile_edge_corner",0,0,0,"tile_edge_top_edge",0,0,0,"tile_edge_left_edge",0
                  ,0);
  }
  FUN_100652590(plVar2,&DAT_10115a164,2);
  *(uint *)((long)param_1 + 0x3dc) = *(uint *)((long)param_1 + 0x3dc) & 0xfffffffb;
  FUN_100652444(plVar1,"square_button_top_left",0,0,0,"square_button_top_middle",0,0,0,
                "square_button_middle_left",0,0);
  FUN_100652590(plVar1,&DAT_10115a164,2);
  return param_1;
}




void FUN_1001bd8b4(long param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *param_2;
  fVar3 = param_2[1];
  bVar1 = false;
  if ((*(float *)(param_1 + 0x50) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x54)) && !NAN(fVar3))) {
    bVar1 = *(float *)(param_1 + 0x54) == fVar3;
  }
  if (!bVar1) {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)param_2;
    FUN_1000200a0(param_1);
    fVar2 = *param_2;
    fVar3 = param_2[1];
  }
  bVar1 = false;
  if ((*(float *)(param_1 + 0x108) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x10c)) && !NAN(fVar3))) {
    bVar1 = *(float *)(param_1 + 0x10c) == fVar3;
  }
  if (!bVar1) {
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)param_2;
    FUN_1000200a0(param_1 + 0xb8);
    fVar2 = *param_2;
    fVar3 = param_2[1];
  }
  bVar1 = false;
  if ((*(float *)(param_1 + 600) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x25c)) && !NAN(fVar3))) {
    bVar1 = *(float *)(param_1 + 0x25c) == fVar3;
  }
  if (!bVar1) {
    *(undefined8 *)(param_1 + 600) = *(undefined8 *)param_2;
    FUN_1000200a0(param_1 + 0x208);
    fVar2 = *param_2;
    fVar3 = param_2[1];
  }
  bVar1 = false;
  if ((*(float *)(param_1 + 0x3a8) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x3ac)) && !NAN(fVar3))) {
    bVar1 = *(float *)(param_1 + 0x3ac) == fVar3;
  }
  if (!bVar1) {
    *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)param_2;
    FUN_1000200a0(param_1 + 0x358);
    return;
  }
  return;
}




void FUN_1001bd978(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  lVar1 = param_3 + 0x208;
  uVar6 = param_2;
  fVar4 = (float)FUN_100652390(lVar1,0);
  fVar4 = fVar4 * *(float *)(param_3 + 0x4a8);
  fVar8 = (float)uVar6;
  fVar7 = fVar8 * *(float *)(param_3 + 0x4a8);
  fVar5 = (float)FUN_100652390(lVar1,8);
  fVar5 = fVar5 * *(float *)(param_3 + 0x4a8);
  fVar8 = fVar8 * *(float *)(param_3 + 0x4a8);
  lVar2 = param_3 + 0x358;
  FUN_1006525c4(fVar4,0,fVar5,fVar7,0,fVar8,lVar2);
  FUN_1006525c4(fVar4,0,fVar5,fVar7,0,fVar8,param_3 + 0xb8);
  FUN_1006525c4(fVar4,0,fVar5,fVar7,0,fVar8,lVar1);
  FUN_10064e47c(param_1,param_2,lVar2);
  FUN_10064e47c(param_1,param_2,param_3 + 0xb8);
  FUN_10064e47c(param_1,param_2,lVar1);
  bVar3 = false;
  if ((*(float *)(param_3 + 0x398) == 10.0) && (bVar3 = false, !NAN(*(float *)(param_3 + 0x39c)))) {
    bVar3 = *(float *)(param_3 + 0x39c) == 12.0;
  }
  if (!bVar3) {
    *(undefined8 *)(param_3 + 0x398) = 0x4140000041200000;
    FUN_1000200a0(lVar2);
    return;
  }
  return;
}




void FUN_1001bdad0(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  FUN_10064e47c();
  *(undefined4 *)(param_4 + 0x4a8) = param_3;
  return;
}




void thunk_FUN_1001bd798(long param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_100652444(param_1 + 0x208,"square_button_top_left",0,0,0,"square_button_top_middle",0,0,0,
                  "square_button_middle_left",0,0);
  }
  else {
    FUN_100651f94(param_1 + 0x208,"gradient_button_top_left",0,0,0,"gradient_button_top_middle",0,0,
                  0,"gradient_button_top_right",0,"gradient_button_middle_left",0,0,0,
                  "gradient_button_middle_right",0,"gradient_button_bottom_left",0,
                  "gradient_button_bottom_middle",0,"gradient_button_bottom_right",0);
  }
  return;
}




void FUN_1001bdb04(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_100652590(param_2 + 0x208,param_3,2);
  FUN_1001bdb40(param_1,param_2);
  return;
}




void FUN_1001bdb40(float param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x28c);
  if ((int)(param_1 * 255.0) == (uVar1 >> 7 & 0xff)) {
    return;
  }
  *(uint *)(param_2 + 0x28c) =
       uVar1 & 0xffff8000 | uVar1 & 0x7f | ((int)(param_1 * 255.0) & 0xffU) << 7;
  FUN_1000200a0(param_2 + 0x208);
  return;
}




void FUN_1001bdb78(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_100652590(param_2 + 0xb8,param_3,2);
  FUN_1001bdbb4(param_1,param_2);
  return;
}




void FUN_1001bdbb4(float param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x13c);
  if ((int)(param_1 * 255.0) == (uVar1 >> 7 & 0xff)) {
    return;
  }
  *(uint *)(param_2 + 0x13c) =
       uVar1 & 0xffff8000 | uVar1 & 0x7f | ((int)(param_1 * 255.0) & 0xffU) << 7;
  FUN_1000200a0(param_2 + 0xb8);
  return;
}




void FUN_1001bdbec(long param_1,undefined8 param_2)

{
  FUN_100652590(param_1 + 0x358,param_2,2);
  return;
}




long * FUN_1001bdbf8(long *param_1,undefined1 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long lVar12;
  
  puVar10 = (undefined8 *)FUN_10064e20c();
  *puVar10 = &PTR_thunk_FUN_10003bf20_101464fb0;
  puVar10 = puVar10 + 0x17;
  thunk_FUN_100652c08(puVar10);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x71;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x8f;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0xad;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0xcb;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0xe9;
  thunk_FUN_100652c08(plVar7);
  *(undefined4 *)(param_1 + 0x10a) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x854) = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  ppuVar8 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  if (*(char *)((long)param_1 + 0x854) != '\0') {
    ppuVar8 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  }
  puVar11 = *ppuVar8;
  FUN_100652ca4(puVar10,puVar11);
  if ((*(float *)(param_1 + 0x21) != 1.0) || (*(float *)((long)param_1 + 0x10c) != 1.0)) {
    lVar12 = NEON_fmov(0x3f800000,4);
    param_1[0x21] = lVar12;
    FUN_1000200a0(puVar10);
  }
  FUN_100652ca4(plVar1,puVar11);
  if ((*(float *)(param_1 + 0x3f) != 0.5) || (*(float *)((long)param_1 + 0x1fc) != 1.0)) {
    param_1[0x3f] = 0x3f8000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100652ca4(plVar2,puVar11);
  if ((*(float *)(param_1 + 0x5d) != 0.0) || (*(float *)((long)param_1 + 0x2ec) != 1.0)) {
    param_1[0x5d] = 0x3f80000000000000;
    FUN_1000200a0(plVar2);
  }
  FUN_100652ca4(plVar3,puVar11);
  if ((*(float *)(param_1 + 0x7b) != 1.0) || (*(float *)((long)param_1 + 0x3dc) != 0.0)) {
    param_1[0x7b] = 0x3f800000;
    FUN_1000200a0(plVar3);
  }
  FUN_100652ca4(plVar4,puVar11);
  if ((*(float *)(param_1 + 0x99) != 0.5) || (*(float *)((long)param_1 + 0x4cc) != 0.0)) {
    param_1[0x99] = 0x3f000000;
    FUN_1000200a0(plVar4);
  }
  FUN_100652ca4(plVar5,puVar11);
  bVar9 = false;
  if ((*(float *)((long)param_1 + 0x5bc) == 0.0) &&
     (bVar9 = false, !NAN(*(float *)(param_1 + 0xb7)))) {
    bVar9 = *(float *)(param_1 + 0xb7) == 0.0;
  }
  if (!bVar9) {
    param_1[0xb7] = 0;
    FUN_1000200a0(plVar5);
  }
  FUN_100652ca4(plVar6,puVar11);
  if ((*(float *)(param_1 + 0xd5) != 1.0) || (*(float *)((long)param_1 + 0x6ac) != 0.5)) {
    param_1[0xd5] = 0x3f0000003f800000;
    FUN_1000200a0(plVar6);
  }
  FUN_100652ca4(plVar7,puVar11);
  if ((*(float *)(param_1 + 0xf3) != 0.0) || (*(float *)((long)param_1 + 0x79c) != 0.5)) {
    param_1[0xf3] = 0x3f00000000000000;
    FUN_1000200a0(plVar7);
  }
  FUN_1001bdf7c(param_1,0);
  return param_1;
}




void FUN_1001bdf7c(undefined1 param_1 [16],undefined4 param_2,long *param_3,undefined1 param_4)

{
  long lVar1;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 local_22;
  undefined1 local_21;
  undefined8 *puVar2;
  
  if (DAT_101d23570 == '\0') {
    FUN_1001be038();
  }
  if (*(char *)((long)param_3 + 0x854) == '\0') {
    puVar2 = &DAT_101d235a8;
    puVar3 = &local_22;
    local_22 = param_4;
  }
  else {
    puVar2 = &DAT_101d23578;
    puVar3 = &local_21;
    local_21 = param_4;
  }
  lVar1 = FUN_1001be06c(puVar2,puVar3);
  if (lVar1 != 0) {
    FUN_1001be118(param_3,lVar1);
  }
  uVar4 = FUN_100652e60(param_3 + 0x17);
  *(undefined4 *)(param_3 + 0x107) = uVar4;
  *(undefined4 *)((long)param_3 + 0x83c) = param_2;
  uVar4 = FUN_100652e60(param_3 + 0x35);
  *(undefined4 *)(param_3 + 0x108) = uVar4;
  *(undefined4 *)((long)param_3 + 0x844) = param_2;
  uVar4 = FUN_100652e60(param_3 + 0xcb);
  *(undefined4 *)(param_3 + 0x109) = uVar4;
  *(undefined4 *)((long)param_3 + 0x84c) = param_2;
  (**(code **)(*param_3 + 0xe8))(param_3);
  return;
}




long * thunk_FUN_1001bdbf8(long *param_1,undefined1 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long lVar12;
  
  puVar10 = (undefined8 *)FUN_10064e20c();
  *puVar10 = &PTR_thunk_FUN_10003bf20_101464fb0;
  puVar10 = puVar10 + 0x17;
  thunk_FUN_100652c08(puVar10);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x71;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x8f;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0xad;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0xcb;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0xe9;
  thunk_FUN_100652c08(plVar7);
  *(undefined4 *)(param_1 + 0x10a) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x854) = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  ppuVar8 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  if (*(char *)((long)param_1 + 0x854) != '\0') {
    ppuVar8 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  }
  puVar11 = *ppuVar8;
  FUN_100652ca4(puVar10,puVar11);
  if ((*(float *)(param_1 + 0x21) != 1.0) || (*(float *)((long)param_1 + 0x10c) != 1.0)) {
    lVar12 = NEON_fmov(0x3f800000,4);
    param_1[0x21] = lVar12;
    FUN_1000200a0(puVar10);
  }
  FUN_100652ca4(plVar1,puVar11);
  if ((*(float *)(param_1 + 0x3f) != 0.5) || (*(float *)((long)param_1 + 0x1fc) != 1.0)) {
    param_1[0x3f] = 0x3f8000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100652ca4(plVar2,puVar11);
  if ((*(float *)(param_1 + 0x5d) != 0.0) || (*(float *)((long)param_1 + 0x2ec) != 1.0)) {
    param_1[0x5d] = 0x3f80000000000000;
    FUN_1000200a0(plVar2);
  }
  FUN_100652ca4(plVar3,puVar11);
  if ((*(float *)(param_1 + 0x7b) != 1.0) || (*(float *)((long)param_1 + 0x3dc) != 0.0)) {
    param_1[0x7b] = 0x3f800000;
    FUN_1000200a0(plVar3);
  }
  FUN_100652ca4(plVar4,puVar11);
  if ((*(float *)(param_1 + 0x99) != 0.5) || (*(float *)((long)param_1 + 0x4cc) != 0.0)) {
    param_1[0x99] = 0x3f000000;
    FUN_1000200a0(plVar4);
  }
  FUN_100652ca4(plVar5,puVar11);
  bVar9 = false;
  if ((*(float *)((long)param_1 + 0x5bc) == 0.0) &&
     (bVar9 = false, !NAN(*(float *)(param_1 + 0xb7)))) {
    bVar9 = *(float *)(param_1 + 0xb7) == 0.0;
  }
  if (!bVar9) {
    param_1[0xb7] = 0;
    FUN_1000200a0(plVar5);
  }
  FUN_100652ca4(plVar6,puVar11);
  if ((*(float *)(param_1 + 0xd5) != 1.0) || (*(float *)((long)param_1 + 0x6ac) != 0.5)) {
    param_1[0xd5] = 0x3f0000003f800000;
    FUN_1000200a0(plVar6);
  }
  FUN_100652ca4(plVar7,puVar11);
  if ((*(float *)(param_1 + 0xf3) != 0.0) || (*(float *)((long)param_1 + 0x79c) != 0.5)) {
    param_1[0xf3] = 0x3f00000000000000;
    FUN_1000200a0(plVar7);
  }
  FUN_1001bdf7c(param_1,0);
  return param_1;
}




void FUN_1001be038(void)

{
  if (DAT_101d23570 == '\0') {
    FUN_1001be5dc();
    FUN_1001beb84();
    DAT_101d23570 = '\x01';
  }
  return;
}




long FUN_1001be06c(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = FUN_100015208(0,0,*param_2);
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar3 / uVar1;
    }
    uVar5 = (ulong)(uVar3 - uVar2 * uVar1);
    lVar4 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar4 + uVar5 * 8) != uVar3) {
      do {
        if (*(int *)(lVar4 + uVar5 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar5) {
          uVar2 = (uint)uVar5;
        }
        uVar5 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar4 + uVar5 * 8) != uVar3);
      if ((int)uVar5 == -1) {
        return 0;
      }
    }
    uVar1 = *(uint *)(lVar4 + uVar5 * 8 + 4);
    if (uVar1 != 0xffffffff) {
      return *(long *)(param_1 + 8) + (ulong)uVar1 * 0xc0;
    }
  }
  return 0;
}




void FUN_1001be118(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  FUN_100652cdc(param_1 + 0xb8,plVar1);
  plVar1 = (long *)param_2[3];
  if (-1 < *(char *)((long)param_2 + 0x2f)) {
    plVar1 = param_2 + 3;
  }
  FUN_100652cdc(param_1 + 0x1a8,plVar1);
  plVar1 = (long *)param_2[6];
  if (-1 < *(char *)((long)param_2 + 0x47)) {
    plVar1 = param_2 + 6;
  }
  FUN_100652cdc(param_1 + 0x298,plVar1);
  plVar1 = (long *)param_2[9];
  if (-1 < *(char *)((long)param_2 + 0x5f)) {
    plVar1 = param_2 + 9;
  }
  FUN_100652cdc(param_1 + 0x388,plVar1);
  plVar1 = (long *)param_2[0xc];
  if (-1 < *(char *)((long)param_2 + 0x77)) {
    plVar1 = param_2 + 0xc;
  }
  FUN_100652cdc(param_1 + 0x478,plVar1);
  plVar1 = (long *)param_2[0xf];
  if (-1 < *(char *)((long)param_2 + 0x8f)) {
    plVar1 = param_2 + 0xf;
  }
  FUN_100652cdc(param_1 + 0x568,plVar1);
  plVar1 = (long *)param_2[0x12];
  if (-1 < *(char *)((long)param_2 + 0xa7)) {
    plVar1 = param_2 + 0x12;
  }
  FUN_100652cdc(param_1 + 0x658,plVar1);
  plVar1 = (long *)param_2[0x15];
  if (-1 < *(char *)((long)param_2 + 0xbf)) {
    plVar1 = param_2 + 0x15;
  }
  FUN_100652cdc(param_1 + 0x748,plVar1);
  return;
}




void FUN_1001be20c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001be214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}




void FUN_1001be218(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  FUN_10064e47c();
  *(undefined4 *)(param_4 + 0x850) = param_3;
  return;
}




void FUN_1001be248(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  bool bVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar3 = (**(code **)(*param_3 + 0x48))();
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar2 = *(float *)(param_3 + 0x10a);
  fVar5 = *(float *)(param_3 + 0x107) * fVar2;
  fVar6 = *(float *)((long)param_3 + 0x83c) * fVar2;
  fVar7 = *(float *)((long)param_3 + 0x844) * fVar2;
  fVar4 = *(float *)(param_3 + 0x109);
  FUN_10064e47c(fVar5,fVar6,param_3 + 0x17);
  FUN_10064e47c(fVar5,fVar6,param_3 + 0x53);
  FUN_10064e47c(fVar5,fVar6,param_3 + 0x71);
  FUN_10064e47c(fVar5,fVar6,param_3 + 0xad);
  FUN_10064e47c(uVar3,fVar7,param_3 + 0x35);
  FUN_10064e47c(uVar3,fVar7,param_3 + 0x8f);
  FUN_10064e47c(fVar4 * fVar2,param_2,param_3 + 0xcb);
  FUN_10064e47c(fVar4 * fVar2,param_2,param_3 + 0xe9);
  fVar2 = (float)uVar3 * -0.5;
  fVar4 = (float)param_2 * -0.5;
  bVar1 = false;
  if ((*(float *)(param_3 + 0x1f) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)((long)param_3 + 0xfc)) && !NAN(fVar4))) {
    bVar1 = *(float *)((long)param_3 + 0xfc) == fVar4;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x1f) = fVar2;
    *(float *)((long)param_3 + 0xfc) = fVar4;
    FUN_1000200a0(param_3 + 0x17);
  }
  fVar5 = (float)uVar3 * 0.5;
  bVar1 = false;
  if ((*(float *)(param_3 + 0x5b) == fVar5) &&
     (bVar1 = false, !NAN(*(float *)((long)param_3 + 0x2dc)) && !NAN(fVar4))) {
    bVar1 = *(float *)((long)param_3 + 0x2dc) == fVar4;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x5b) = fVar5;
    *(float *)((long)param_3 + 0x2dc) = fVar4;
    FUN_1000200a0(param_3 + 0x53);
  }
  if ((*(float *)(param_3 + 0x3d) != 0.0) || (*(float *)((long)param_3 + 0x1ec) != fVar4)) {
    *(undefined4 *)(param_3 + 0x3d) = 0;
    *(float *)((long)param_3 + 0x1ec) = fVar4;
    FUN_1000200a0(param_3 + 0x35);
  }
  fVar4 = (float)param_2 * 0.5;
  bVar1 = false;
  if ((*(float *)(param_3 + 0x79) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)((long)param_3 + 0x3cc)) && !NAN(fVar4))) {
    bVar1 = *(float *)((long)param_3 + 0x3cc) == fVar4;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x79) = fVar2;
    *(float *)((long)param_3 + 0x3cc) = fVar4;
    FUN_1000200a0(param_3 + 0x71);
  }
  bVar1 = false;
  if ((*(float *)(param_3 + 0xb5) == fVar5) &&
     (bVar1 = false, !NAN(*(float *)((long)param_3 + 0x5ac)) && !NAN(fVar4))) {
    bVar1 = *(float *)((long)param_3 + 0x5ac) == fVar4;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0xb5) = fVar5;
    *(float *)((long)param_3 + 0x5ac) = fVar4;
    FUN_1000200a0(param_3 + 0xad);
  }
  if ((*(float *)(param_3 + 0x97) != 0.0) || (*(float *)((long)param_3 + 0x4bc) != fVar4)) {
    *(undefined4 *)(param_3 + 0x97) = 0;
    *(float *)((long)param_3 + 0x4bc) = fVar4;
    FUN_1000200a0(param_3 + 0x8f);
  }
  if ((*(float *)(param_3 + 0xd3) != fVar2) || (*(float *)((long)param_3 + 0x69c) != 0.0)) {
    *(float *)(param_3 + 0xd3) = fVar2;
    *(undefined4 *)((long)param_3 + 0x69c) = 0;
    FUN_1000200a0(param_3 + 0xcb);
  }
  if ((*(float *)(param_3 + 0xf1) == fVar5) && (*(float *)((long)param_3 + 0x78c) == 0.0)) {
    return;
  }
  *(float *)(param_3 + 0xf1) = fVar5;
  *(undefined4 *)((long)param_3 + 0x78c) = 0;
  FUN_1000200a0(param_3 + 0xe9);
  return;
}




void thunk_FUN_1001bdf7c(void)

{
  FUN_1001bdf7c();
  return;
}




void FUN_1001be4f4(float param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  
  FUN_100652dd4(param_2 + 0xb8,param_3,2);
  FUN_100652dd4(param_2 + 0x1a8,param_3,2);
  FUN_100652dd4(param_2 + 0x298,param_3,2);
  FUN_100652dd4(param_2 + 0x388,param_3,2);
  FUN_100652dd4(param_2 + 0x478,param_3,2);
  FUN_100652dd4(param_2 + 0x568,param_3,2);
  FUN_100652dd4(param_2 + 0x658,param_3,2);
  FUN_100652dd4(param_2 + 0x748,param_3,2);
  uVar1 = *(uint *)(param_2 + 0x84);
  if ((int)(param_1 * 255.0) == (uVar1 >> 7 & 0xff)) {
    return;
  }
  *(uint *)(param_2 + 0x84) =
       uVar1 & 0xffff8000 | uVar1 & 0x7f | ((int)(param_1 * 255.0) & 0xffU) << 7;
  FUN_1000200a0(param_2);
  return;
}




uint * thunk_FUN_1001bf868(uint *param_1)

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
        FUN_1001bf8ec(param_1);
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




void FUN_1001be5dc(void)

{
  long lVar1;
  string local_288;
  undefined7 uStack_287;
  char local_271;
  void *local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 auStack_1c8 [2];
  undefined8 uStack_1b8;
  char cStack_1b1;
  void *local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 auStack_108 [2];
  undefined8 uStack_f8;
  char cStack_f1;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 auStack_48 [2];
  undefined8 uStack_38;
  char cStack_31;
  
  if (DAT_101d23570 == '\0') {
    auStack_48[0] = 0;
    local_50 = 0;
    uStack_38 = 0;
    auStack_48[1] = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    FUN_10001549c(&local_1b0,"square_button_top_left");
    std::string::operator=((string *)&local_f0,(string *)&local_1b0);
    if (uStack_1a0 < 0) {
      operator_delete(local_1b0);
    }
    FUN_10001549c(&local_1b0,"square_button_top_middle");
    std::string::operator=((string *)&uStack_d8,(string *)&local_1b0);
    if (uStack_1a0 < 0) {
      operator_delete(local_1b0);
    }
    FUN_10001549c(&local_1b0,"square_button_top_right");
    std::string::operator=((string *)&uStack_c0,(string *)&local_1b0);
    if (uStack_1a0 < 0) {
      operator_delete(local_1b0);
    }
    FUN_10001549c(&local_1b0,"square_button_bottom_left");
    std::string::operator=((string *)&uStack_a8,(string *)&local_1b0);
    if (uStack_1a0 < 0) {
      operator_delete(local_1b0);
    }
    FUN_10001549c(&local_1b0,"square_button_bottom_middle");
    std::string::operator=((string *)&local_90,(string *)&local_1b0);
    if (uStack_1a0 < 0) {
      operator_delete(local_1b0);
    }
    FUN_10001549c(&local_1b0,"square_button_bottom_right");
    std::string::operator=((string *)&uStack_78,(string *)&local_1b0);
    if (uStack_1a0 < 0) {
      operator_delete(local_1b0);
    }
    FUN_10001549c(&local_1b0,"square_button_middle_left");
    std::string::operator=((string *)&uStack_60,(string *)&local_1b0);
    if (uStack_1a0 < 0) {
      operator_delete(local_1b0);
    }
    FUN_10001549c(&local_1b0,"square_button_middle_right");
    std::string::operator=((string *)auStack_48,(string *)&local_1b0);
    if (uStack_1a0._7_1_ < '\0') {
      operator_delete(local_1b0);
    }
    local_1b0 = (void *)((ulong)local_1b0 & 0xffffffffffffff00);
    FUN_1001bed8c(&DAT_101d235a8,&local_1b0,&local_f0);
    auStack_108[0] = 0;
    local_110 = 0;
    uStack_f8 = 0;
    auStack_108[1] = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    local_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    local_1b0 = (void *)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    FUN_10001549c(&local_270,"gradient_button_top_left");
    std::string::operator=((string *)&local_1b0,(string *)&local_270);
    if (local_260 < 0) {
      operator_delete(local_270);
    }
    FUN_10001549c(&local_270,"gradient_button_top_middle");
    std::string::operator=((string *)&uStack_198,(string *)&local_270);
    if (local_260 < 0) {
      operator_delete(local_270);
    }
    FUN_10001549c(&local_270,"gradient_button_top_right");
    std::string::operator=((string *)&uStack_180,(string *)&local_270);
    if (local_260 < 0) {
      operator_delete(local_270);
    }
    FUN_10001549c(&local_270,"gradient_button_bottom_left");
    std::string::operator=((string *)&uStack_168,(string *)&local_270);
    if (local_260 < 0) {
      operator_delete(local_270);
    }
    FUN_10001549c(&local_270,"gradient_button_bottom_middle");
    std::string::operator=((string *)&local_150,(string *)&local_270);
    if (local_260 < 0) {
      operator_delete(local_270);
    }
    FUN_10001549c(&local_270,"gradient_button_bottom_right");
    std::string::operator=((string *)&uStack_138,(string *)&local_270);
    if (local_260 < 0) {
      operator_delete(local_270);
    }
    FUN_10001549c(&local_270,"gradient_button_middle_left");
    std::string::operator=((string *)&uStack_120,(string *)&local_270);
    if (local_260 < 0) {
      operator_delete(local_270);
    }
    FUN_10001549c(&local_270,"gradient_button_middle_right");
    std::string::operator=((string *)auStack_108,(string *)&local_270);
    if (local_260._7_1_ < '\0') {
      operator_delete(local_270);
    }
    local_270 = (void *)CONCAT71(local_270._1_7_,1);
    FUN_1001bed8c(&DAT_101d235a8,&local_270,&local_1b0);
    auStack_1c8[0] = 0;
    local_1d0 = 0;
    uStack_1b8 = 0;
    auStack_1c8[1] = 0;
    uStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    local_200 = 0;
    uStack_218 = 0;
    local_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_238 = 0;
    local_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_258 = 0;
    local_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    local_270 = (void *)0x0;
    FUN_10001549c(&local_288,"upgrade_glow_top_left");
    std::string::operator=((string *)&local_270,&local_288);
    if (local_271 < '\0') {
      operator_delete((void *)CONCAT71(uStack_287,local_288));
    }
    FUN_10001549c(&local_288,"upgrade_glow_top_middle");
    std::string::operator=((string *)&uStack_258,&local_288);
    if (local_271 < '\0') {
      operator_delete((void *)CONCAT71(uStack_287,local_288));
    }
    FUN_10001549c(&local_288,"upgrade_glow_top_right");
    std::string::operator=((string *)&local_240,&local_288);
    if (local_271 < '\0') {
      operator_delete((void *)CONCAT71(uStack_287,local_288));
    }
    FUN_10001549c(&local_288,"upgrade_glow_bottom_left");
    std::string::operator=((string *)&uStack_228,&local_288);
    if (local_271 < '\0') {
      operator_delete((void *)CONCAT71(uStack_287,local_288));
    }
    FUN_10001549c(&local_288,"upgrade_glow_bottom_middle");
    std::string::operator=((string *)&uStack_210,&local_288);
    if (local_271 < '\0') {
      operator_delete((void *)CONCAT71(uStack_287,local_288));
    }
    FUN_10001549c(&local_288,"upgrade_glow_bottom_right");
    std::string::operator=((string *)&uStack_1f8,&local_288);
    if (local_271 < '\0') {
      operator_delete((void *)CONCAT71(uStack_287,local_288));
    }
    FUN_10001549c(&local_288,"upgrade_glow_middle_left");
    std::string::operator=((string *)&uStack_1e0,&local_288);
    if (local_271 < '\0') {
      operator_delete((void *)CONCAT71(uStack_287,local_288));
    }
    FUN_10001549c(&local_288,"upgrade_glow_middle_right");
    std::string::operator=((string *)auStack_1c8,&local_288);
    if (local_271 < '\0') {
      operator_delete((void *)CONCAT71(uStack_287,local_288));
    }
    local_288 = (string)0x2;
    FUN_1001bed8c(&DAT_101d235a8,&local_288,&local_270);
    lVar1 = 0;
    do {
      if ((&cStack_1b1)[lVar1] < '\0') {
        operator_delete(*(void **)((long)auStack_1c8 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0xc0);
    lVar1 = 0;
    do {
      if ((&cStack_f1)[lVar1] < '\0') {
        operator_delete(*(void **)((long)auStack_108 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0xc0);
    lVar1 = 0;
    do {
      if ((&cStack_31)[lVar1] < '\0') {
        operator_delete(*(void **)((long)auStack_48 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0xc0);
  }
  return;
}




void FUN_1001beb84(void)

{
  long lVar1;
  string local_108;
  undefined7 uStack_107;
  char local_f1;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 auStack_48 [2];
  undefined8 uStack_38;
  char cStack_31;
  
  if (DAT_101d23570 == '\0') {
    auStack_48[0] = 0;
    local_50 = 0;
    uStack_38 = 0;
    auStack_48[1] = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    FUN_10001549c(&local_108,"square_button_top_left");
    std::string::operator=((string *)&local_f0,&local_108);
    if (local_f1 < '\0') {
      operator_delete((void *)CONCAT71(uStack_107,local_108));
    }
    FUN_10001549c(&local_108,"square_button_top_middle");
    std::string::operator=((string *)&uStack_d8,&local_108);
    if (local_f1 < '\0') {
      operator_delete((void *)CONCAT71(uStack_107,local_108));
    }
    FUN_10001549c(&local_108,"square_button_top_right");
    std::string::operator=((string *)&local_c0,&local_108);
    if (local_f1 < '\0') {
      operator_delete((void *)CONCAT71(uStack_107,local_108));
    }
    FUN_10001549c(&local_108,"square_button_bottom_left");
    std::string::operator=((string *)&uStack_a8,&local_108);
    if (local_f1 < '\0') {
      operator_delete((void *)CONCAT71(uStack_107,local_108));
    }
    FUN_10001549c(&local_108,"square_button_bottom_middle");
    std::string::operator=((string *)&uStack_90,&local_108);
    if (local_f1 < '\0') {
      operator_delete((void *)CONCAT71(uStack_107,local_108));
    }
    FUN_10001549c(&local_108,"square_button_bottom_right");
    std::string::operator=((string *)&uStack_78,&local_108);
    if (local_f1 < '\0') {
      operator_delete((void *)CONCAT71(uStack_107,local_108));
    }
    FUN_10001549c(&local_108,"square_button_middle_left");
    std::string::operator=((string *)&uStack_60,&local_108);
    if (local_f1 < '\0') {
      operator_delete((void *)CONCAT71(uStack_107,local_108));
    }
    FUN_10001549c(&local_108,"square_button_middle_right");
    std::string::operator=((string *)auStack_48,&local_108);
    if (local_f1 < '\0') {
      operator_delete((void *)CONCAT71(uStack_107,local_108));
    }
    local_108 = (string)0x0;
    FUN_1001bed8c(&DAT_101d23578,&local_108,&local_f0);
    lVar1 = 0;
    do {
      if ((&cStack_31)[lVar1] < '\0') {
        operator_delete(*(void **)((long)auStack_48 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0xc0);
  }
  return;
}




void FUN_1001bed8c(uint *param_1,undefined1 *param_2,undefined8 param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 local_40;
  void *local_38;
  
  uVar5 = FUN_100015208(0,0,*param_2);
  uVar6 = param_1[4];
  param_1[4] = uVar6 + 1;
  uVar8 = *param_1;
  if (uVar8 >> 1 < uVar6 + 1) {
    local_40 = 0;
    local_38 = (void *)0x0;
    FUN_10002690c(&local_40,(uVar8 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar6 = *param_1;
    uVar8 = (uint)local_40;
    uVar10 = uVar6 - 1;
    if ((int)uVar10 < 0) {
      pvVar7 = *(void **)(param_1 + 2);
    }
    else {
      pvVar7 = *(void **)(param_1 + 2);
      do {
        uVar6 = *(uint *)((long)pvVar7 + (ulong)uVar10 * 8 + 4);
        if (uVar6 != 0xffffffff) {
          uVar3 = *(uint *)((long)pvVar7 + (ulong)uVar10 * 8);
          uVar4 = 0;
          if ((uint)local_40 != 0) {
            uVar4 = uVar3 / (uint)local_40;
          }
          uVar11 = (ulong)(uVar3 - uVar4 * (uint)local_40);
          iVar2 = *(int *)((long)local_38 + uVar11 * 8 + 4);
          while (iVar2 != -1) {
            uVar4 = (uint)local_40;
            if (0 < (int)(uint)uVar11) {
              uVar4 = (uint)uVar11;
            }
            uVar11 = (ulong)(uVar4 - 1);
            iVar2 = *(int *)((long)local_38 + uVar11 * 8 + 4);
          }
          puVar1 = (uint *)((long)local_38 + uVar11 * 8);
          *puVar1 = uVar3;
          puVar1[1] = uVar6;
        }
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
      uVar6 = *param_1;
    }
    uVar10 = param_1[1];
    *param_1 = (uint)local_40;
    param_1[1] = local_40._4_4_;
    local_40 = CONCAT44(uVar10,uVar6);
    *(void **)(param_1 + 2) = local_38;
    local_38 = pvVar7;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      uVar8 = *param_1;
    }
  }
  uVar6 = 0;
  if (uVar8 != 0) {
    uVar6 = uVar5 / uVar8;
  }
  uVar11 = (ulong)(uVar5 - uVar6 * uVar8);
  lVar9 = *(long *)(param_1 + 2);
  iVar2 = *(int *)(lVar9 + uVar11 * 8 + 4);
  while (iVar2 != -1) {
    uVar6 = uVar8;
    if (0 < (int)(uint)uVar11) {
      uVar6 = (uint)uVar11;
    }
    uVar11 = (ulong)(uVar6 - 1);
    iVar2 = *(int *)(lVar9 + uVar11 * 8 + 4);
  }
  puVar1 = (uint *)(lVar9 + uVar11 * 8);
  *puVar1 = uVar5;
  uVar6 = FUN_1001bf964(param_1,param_3);
  puVar1[1] = uVar6;
  return;
}




long * FUN_1001bef10(long *param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined1 *local_58;
  
  puVar3 = (undefined8 *)FUN_1001bd4e0();
  *puVar3 = &PTR_FUN_101465108;
  puVar3 = puVar3 + 0x96;
  thunk_FUN_100651ebc(puVar3);
  plVar1 = param_1 + 0xc0;
  thunk_FUN_100651ebc(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x96] + 0x28))(puVar3,&local_58);
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0xc0] + 0x28))(plVar1,&local_58);
  FUN_100651f94(param_1 + 0x41,"gradient_rect_top_left",0,0,0,"gradient_rect_top_middle",0,0,0,
                "gradient_rect_top_right",0,"gradient_rect_middle_left",0,0,0,
                "gradient_rect_middle_right",0,"gradient_rect_bottom_left",0,
                "gradient_rect_bottom_middle",0,"gradient_rect_bottom_right",0);
  ppuVar2 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  if (*(char *)((long)param_1 + 0x4ac) != '\0') {
    ppuVar2 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  }
  puVar4 = *ppuVar2;
  FUN_100651f8c(puVar3,puVar4);
  FUN_100651f8c(plVar1,puVar4);
  FUN_100651f94(puVar3,"gradient_glow_big_top_left",0,0,0,"gradient_glow_big_top_middle",0,0,0,
                "gradient_glow_big_top_left",1,"gradient_glow_big_middle_left",0,0,0,
                "gradient_glow_big_middle_left",1,0,0,0,0,0,0);
  FUN_100651f94(plVar1,"gradient_glow_small_top_left",0,0,0,"gradient_glow_small_top_middle",0,0,0,
                "gradient_glow_small_top_left",1,"gradient_glow_small_middle_left",0,0,0,
                "gradient_glow_small_middle_left",1,0,0,0,0,0,0);
  FUN_100652590(plVar1,&DAT_10115a168,2);
  return param_1;
}




long * thunk_FUN_1001bef10(long *param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined1 *puStack_58;
  
  puVar3 = (undefined8 *)FUN_1001bd4e0();
  *puVar3 = &PTR_FUN_101465108;
  puVar3 = puVar3 + 0x96;
  thunk_FUN_100651ebc(puVar3);
  plVar1 = param_1 + 0xc0;
  thunk_FUN_100651ebc(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  puStack_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x96] + 0x28))(puVar3,&puStack_58);
  puStack_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0xc0] + 0x28))(plVar1,&puStack_58);
  FUN_100651f94(param_1 + 0x41,"gradient_rect_top_left",0,0,0,"gradient_rect_top_middle",0,0,0,
                "gradient_rect_top_right",0,"gradient_rect_middle_left",0,0,0,
                "gradient_rect_middle_right",0,"gradient_rect_bottom_left",0,
                "gradient_rect_bottom_middle",0,"gradient_rect_bottom_right",0);
  ppuVar2 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  if (*(char *)((long)param_1 + 0x4ac) != '\0') {
    ppuVar2 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  }
  puVar4 = *ppuVar2;
  FUN_100651f8c(puVar3,puVar4);
  FUN_100651f8c(plVar1,puVar4);
  FUN_100651f94(puVar3,"gradient_glow_big_top_left",0,0,0,"gradient_glow_big_top_middle",0,0,0,
                "gradient_glow_big_top_left",1,"gradient_glow_big_middle_left",0,0,0,
                "gradient_glow_big_middle_left",1,0,0,0,0,0,0);
  FUN_100651f94(plVar1,"gradient_glow_small_top_left",0,0,0,"gradient_glow_small_top_middle",0,0,0,
                "gradient_glow_small_top_left",1,"gradient_glow_small_middle_left",0,0,0,
                "gradient_glow_small_middle_left",1,0,0,0,0,0,0);
  FUN_100652590(plVar1,&DAT_10115a168,2);
  return param_1;
}




void FUN_1001bf1fc(undefined8 param_1,undefined8 param_2,long *param_3)

{
  FUN_1001bd978();
                    /* WARNING: Could not recover jumptable at 0x0001001bf23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x140))(param_1,param_2,param_3);
  return;
}




void FUN_1001bf240(undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  FUN_10064e47c();
  *(undefined4 *)(param_4 + 0x95) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0001001bf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x140))(param_1,param_2,param_4);
  return;
}




void FUN_1001bf294(long param_1,undefined8 param_2)

{
  FUN_100652590(param_1 + 0x208,param_2,2);
  if ((~*(uint *)(param_1 + 0x28c) & 0x7f80) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x28c) = *(uint *)(param_1 + 0x28c) | 0x7f80;
  FUN_1000200a0(param_1 + 0x208);
  return;
}




void FUN_1001bf2e8(long param_1,undefined8 param_2)

{
  FUN_100652590(param_1 + 0x4b0,param_2,2);
  return;
}




void FUN_1001bf2f4(float param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  
  uVar3 = param_2;
  uVar1 = FUN_100652390(param_3 + 0x4b0,0);
  uVar4 = uVar3;
  uVar2 = FUN_100652390(param_3 + 0x600,0);
  fVar5 = (float)param_2 + -28.0;
  FUN_1006525c4(uVar1,param_1 + -22.0,uVar1,uVar3,fVar5,uVar3,param_3 + 0x4b0);
  FUN_1006525c4(uVar2,param_1 + -22.0,uVar2,uVar4,fVar5,uVar4,param_3 + 0x600);
  return;
}




void FUN_1001bf3ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101464d00;
  param_1[0x8f] = &PTR_FUN_1014a7108;
  param_1[0xa6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa9);
  FUN_10064e2bc(param_1 + 0x8f);
  param_1[0x71] = &PTR_FUN_1014a7108;
  param_1[0x88] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8b);
  FUN_10064e2bc(param_1 + 0x71);
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




void FUN_1001bf47c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101464d00;
  param_1[0x8f] = &PTR_FUN_1014a7108;
  param_1[0xa6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa9);
  FUN_10064e2bc(param_1 + 0x8f);
  param_1[0x71] = &PTR_FUN_1014a7108;
  param_1[0x88] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8b);
  FUN_10064e2bc(param_1 + 0x71);
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




void FUN_1001bf550(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101464e50;
  param_1[0x6b] = &PTR_FUN_1014a6db0;
  param_1[0x82] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x85);
  FUN_10064e2bc(param_1 + 0x6b);
  param_1[0x41] = &PTR_FUN_1014a6db0;
  param_1[0x58] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x5b);
  FUN_10064e2bc(param_1 + 0x41);
  param_1[0x17] = &PTR_FUN_1014a6db0;
  param_1[0x2e] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001bf5e8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101464e50;
  param_1[0x6b] = &PTR_FUN_1014a6db0;
  param_1[0x82] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x85);
  FUN_10064e2bc(param_1 + 0x6b);
  param_1[0x41] = &PTR_FUN_1014a6db0;
  param_1[0x58] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x5b);
  FUN_10064e2bc(param_1 + 0x41);
  param_1[0x17] = &PTR_FUN_1014a6db0;
  param_1[0x2e] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001bf684(void)

{
  return;
}




void FUN_1001bf68c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10003bf20();
  operator_delete(pvVar1);
  return;
}




void FUN_1001bf6a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101465108;
  param_1[0xc0] = &PTR_FUN_1014a6db0;
  param_1[0xd7] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xda);
  FUN_10064e2bc(param_1 + 0xc0);
  param_1[0x96] = &PTR_FUN_1014a6db0;
  param_1[0xad] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xb0);
  FUN_10064e2bc(param_1 + 0x96);
  *param_1 = &PTR_FUN_101464e50;
  param_1[0x6b] = &PTR_FUN_1014a6db0;
  param_1[0x82] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x85);
  FUN_10064e2bc(param_1 + 0x6b);
  param_1[0x41] = &PTR_FUN_1014a6db0;
  param_1[0x58] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x5b);
  FUN_10064e2bc(param_1 + 0x41);
  param_1[0x17] = &PTR_FUN_1014a6db0;
  param_1[0x2e] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001bf77c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101465108;
  param_1[0xc0] = &PTR_FUN_1014a6db0;
  param_1[0xd7] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xda);
  FUN_10064e2bc(param_1 + 0xc0);
  param_1[0x96] = &PTR_FUN_1014a6db0;
  param_1[0xad] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xb0);
  FUN_10064e2bc(param_1 + 0x96);
  *param_1 = &PTR_FUN_101464e50;
  param_1[0x6b] = &PTR_FUN_1014a6db0;
  param_1[0x82] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x85);
  FUN_10064e2bc(param_1 + 0x6b);
  param_1[0x41] = &PTR_FUN_1014a6db0;
  param_1[0x58] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x5b);
  FUN_10064e2bc(param_1 + 0x41);
  param_1[0x17] = &PTR_FUN_1014a6db0;
  param_1[0x2e] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001bf85c(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




uint * FUN_1001bf868(uint *param_1)

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
        FUN_1001bf8ec(param_1);
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




void FUN_1001bf8ec(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  do {
    lVar1 = lVar2 + (ulong)param_2 * 0xc0 + lVar3;
    if (*(char *)(lVar1 + 0xbf) < '\0') {
      operator_delete(*(void **)(lVar1 + 0xa8));
    }
    lVar3 = lVar3 + -0x18;
  } while (lVar3 != -0xc0);
  *(undefined4 *)(lVar2 + (ulong)param_2 * 0xc0) = *(undefined4 *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = param_2;
  return;
}




ulong FUN_1001bf964(long param_1,long param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_128 [192];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  uVar4 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_1001bfaa8(param_1 + 0x18,auStack_128);
    uVar4 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar3 + uVar4 * 0xc0);
  }
  lVar8 = 0;
  lVar3 = lVar3 + uVar4 * 0xc0;
  do {
    puVar6 = (undefined8 *)(param_2 + lVar8);
    if ((char)*(byte *)((long)puVar6 + 0x17) < '\0') {
      uVar5 = puVar6[1];
      if (0xffffffffffffffef < uVar5) {
        FUN_1001bf85c();
        goto LAB_1001bfaa4;
      }
      puVar6 = (undefined8 *)*puVar6;
    }
    else {
      uVar5 = (ulong)*(byte *)((long)puVar6 + 0x17);
    }
    if (uVar5 < 0x17) {
      pvVar2 = (void *)(lVar3 + lVar8);
      *(char *)((long)pvVar2 + 0x17) = (char)uVar5;
      if (uVar5 != 0) goto LAB_1001bfa44;
    }
    else {
      uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar2 = operator_new(uVar7);
      puVar1 = (undefined8 *)(lVar3 + lVar8);
      puVar1[1] = uVar5;
      puVar1[2] = uVar7 | 0x8000000000000000;
      *puVar1 = pvVar2;
LAB_1001bfa44:
      _memcpy(pvVar2,puVar6,uVar5);
    }
    *(undefined1 *)((long)pvVar2 + uVar5) = 0;
    lVar8 = lVar8 + 0x18;
  } while (lVar8 != 0xc0);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return uVar4;
  }
LAB_1001bfaa4:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1001bfaa8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
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
    FUN_1001bfb54(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xc0;
  uVar8 = param_2[1];
  uVar7 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  uVar11 = param_2[4];
  uVar10 = param_2[7];
  uVar9 = param_2[6];
  *(undefined8 *)(lVar4 + -0x98) = param_2[5];
  *(undefined8 *)(lVar4 + -0xa0) = uVar11;
  *(undefined8 *)(lVar4 + -0x88) = uVar10;
  *(undefined8 *)(lVar4 + -0x90) = uVar9;
  uVar12 = param_2[0xd];
  uVar11 = param_2[0xc];
  uVar10 = param_2[0xf];
  uVar9 = param_2[0xe];
  uVar15 = param_2[8];
  uVar14 = param_2[0xb];
  uVar13 = param_2[10];
  *(undefined8 *)(lVar4 + -0x78) = param_2[9];
  *(undefined8 *)(lVar4 + -0x80) = uVar15;
  *(undefined8 *)(lVar4 + -0x68) = uVar14;
  *(undefined8 *)(lVar4 + -0x70) = uVar13;
  *(undefined8 *)(lVar4 + -0x58) = uVar12;
  *(undefined8 *)(lVar4 + -0x60) = uVar11;
  *(undefined8 *)(lVar4 + -0x48) = uVar10;
  *(undefined8 *)(lVar4 + -0x50) = uVar9;
  uVar12 = param_2[0x15];
  uVar11 = param_2[0x14];
  uVar10 = param_2[0x17];
  uVar9 = param_2[0x16];
  uVar15 = param_2[0x10];
  uVar14 = param_2[0x13];
  uVar13 = param_2[0x12];
  *(undefined8 *)(lVar4 + -0x38) = param_2[0x11];
  *(undefined8 *)(lVar4 + -0x40) = uVar15;
  *(undefined8 *)(lVar4 + -0x28) = uVar14;
  *(undefined8 *)(lVar4 + -0x30) = uVar13;
  *(undefined8 *)(lVar4 + -0x18) = uVar12;
  *(undefined8 *)(lVar4 + -0x20) = uVar11;
  *(undefined8 *)(lVar4 + -8) = uVar10;
  *(undefined8 *)(lVar4 + -0x10) = uVar9;
  *(undefined8 *)(lVar4 + -0xb8) = uVar8;
  *(undefined8 *)(lVar4 + -0xc0) = uVar7;
  *(undefined8 *)(lVar4 + -0xa8) = uVar6;
  *(undefined8 *)(lVar4 + -0xb0) = uVar5;
  return;
}




void FUN_1001bfb54(uint *param_1,uint param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0xc0);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0xc0;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar7 = puVar5[1];
        uVar6 = *puVar5;
        uVar9 = puVar5[3];
        uVar8 = puVar5[2];
        uVar10 = puVar5[4];
        uVar12 = puVar5[7];
        uVar11 = puVar5[6];
        puVar4[5] = puVar5[5];
        puVar4[4] = uVar10;
        puVar4[7] = uVar12;
        puVar4[6] = uVar11;
        puVar4[1] = uVar7;
        *puVar4 = uVar6;
        puVar4[3] = uVar9;
        puVar4[2] = uVar8;
        uVar7 = puVar5[9];
        uVar6 = puVar5[8];
        uVar9 = puVar5[0xb];
        uVar8 = puVar5[10];
        uVar10 = puVar5[0xc];
        uVar12 = puVar5[0xf];
        uVar11 = puVar5[0xe];
        puVar4[0xd] = puVar5[0xd];
        puVar4[0xc] = uVar10;
        puVar4[0xf] = uVar12;
        puVar4[0xe] = uVar11;
        puVar4[9] = uVar7;
        puVar4[8] = uVar6;
        puVar4[0xb] = uVar9;
        puVar4[10] = uVar8;
        uVar7 = puVar5[0x11];
        uVar6 = puVar5[0x10];
        uVar9 = puVar5[0x13];
        uVar8 = puVar5[0x12];
        uVar10 = puVar5[0x14];
        uVar12 = puVar5[0x17];
        uVar11 = puVar5[0x16];
        puVar4[0x15] = puVar5[0x15];
        puVar4[0x14] = uVar10;
        puVar4[0x17] = uVar12;
        puVar4[0x16] = uVar11;
        puVar4[0x11] = uVar7;
        puVar4[0x10] = uVar6;
        puVar4[0x13] = uVar9;
        puVar4[0x12] = uVar8;
        puVar5 = puVar5 + 0x18;
        puVar4 = puVar4 + 0x18;
        lVar3 = lVar3 + -0xc0;
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




void FUN_1001bfc04(void)

{
  DAT_101e42f30 = 0xff;
  DAT_101e42f32 = 0xffff;
  DAT_101e42f34 = 0xffff;
  DAT_101e42f38 = 0x4326000041900000;
  DAT_101e42f40 = 0x4326000041c00000;
  DAT_101d235a8 = 0;
  DAT_101d235b0 = 0;
  DAT_101d235b8 = 0;
  DAT_101d235c0 = 0;
  DAT_101d235c8 = 0;
  DAT_101d235d0 = 0xffffffff;
  ___cxa_atexit(thunk_FUN_1001bf868,&DAT_101d235a8,0x100000000);
  DAT_101d23578 = 0;
  DAT_101d23580 = 0;
  DAT_101d23588 = 0;
  DAT_101d23590 = 0;
  DAT_101d23598 = 0;
  DAT_101d235a0 = 0xffffffff;
  ___cxa_atexit(thunk_FUN_1001bf868,&DAT_101d23578,0x100000000);
  return;
}




void FUN_1001bfcbc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1001bce98();
  *puVar1 = &PTR_FUN_101465268;
  return;
}




void FUN_1001bfcdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  float fVar3;
  
  FUN_10064e47c(param_1,param_3,param_4 + 0xb8);
  FUN_10064e47c(param_1,param_3,param_4 + 0x1a8);
  fVar3 = (float)param_2 + (float)param_3 * -2.0;
  FUN_10064e47c(param_3,fVar3,param_4 + 0x298);
  FUN_10064e47c(param_3,fVar3,param_4 + 0x388);
  lVar1 = param_4 + 0x478;
  FUN_10064e47c(param_1,param_2,lVar1);
  bVar2 = false;
  if ((*(float *)(param_4 + 0x4bc) == 0.0) && (bVar2 = false, !NAN(*(float *)(param_4 + 0x4b8)))) {
    bVar2 = *(float *)(param_4 + 0x4b8) == 0.0;
  }
  if (!bVar2) {
    *(undefined8 *)(param_4 + 0x4b8) = 0;
    FUN_1000200a0(lVar1);
  }
  FUN_10064e5ec(0,0,param_4 + 0xb8,4,lVar1,4);
  FUN_10064e5ec(0,0,param_4 + 0x1a8,6,lVar1,6);
  FUN_10064e5ec(0,0,param_4 + 0x298,7,lVar1,7);
  FUN_10064e5ec(0,0,param_4 + 0x388,5,lVar1,5);
  FUN_10064e47c(param_1,param_2,param_4);
  return;
}




void FUN_1001bfe30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101464d00;
  param_1[0x8f] = &PTR_FUN_1014a7108;
  param_1[0xa6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa9);
  FUN_10064e2bc(param_1 + 0x8f);
  param_1[0x71] = &PTR_FUN_1014a7108;
  param_1[0x88] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8b);
  FUN_10064e2bc(param_1 + 0x71);
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




void FUN_1001bff04(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101464d00;
  param_1[0x8f] = &PTR_FUN_1014a7108;
  param_1[0xa6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa9);
  FUN_10064e2bc(param_1 + 0x8f);
  param_1[0x71] = &PTR_FUN_1014a7108;
  param_1[0x88] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8b);
  FUN_10064e2bc(param_1 + 0x71);
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




void FUN_1001bffdc(long param_1,string *param_2,string *param_3)

{
  std::string::operator=((string *)(param_1 + 0x15b8),param_3);
  std::string::operator=((string *)(param_1 + 0x15d0),param_2);
  return;
}




void thunk_FUN_1001b3648(void)

{
  FUN_1001b3648();
  return;
}




void thunk_FUN_1001b3648(void)

{
  FUN_1001b3648();
  return;
}




void thunk_FUN_1001b3648(void)

{
  FUN_1001b3648();
  return;
}




void thunk_FUN_1001b3648(void)

{
  FUN_1001b3648();
  return;
}




void thunk_FUN_1001b4464(void)

{
  FUN_1001b4464();
  return;
}




void thunk_FUN_1001b3648(void)

{
  FUN_1001b3648();
  return;
}




void thunk_FUN_1001b3648(void)

{
  FUN_1001b3648();
  return;
}




void thunk_FUN_1001b3648(void)

{
  FUN_1001b3648();
  return;
}




void thunk_FUN_1001b3648(void)

{
  FUN_1001b3648();
  return;
}




void thunk_FUN_1001b3648(void)

{
  FUN_1001b3648();
  return;
}

