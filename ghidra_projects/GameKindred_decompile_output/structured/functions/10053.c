// functions/10053 — 459 functions
#include "GameKindred.h"




void thunk_FUN_100536b78(void)

{
  FUN_100536b78();
  return;
}




void FUN_10053000c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10052ffb4();
  operator_delete(pvVar1);
  return;
}




undefined4 FUN_100530020(long param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(ushort *)(param_1 + 0x230) & 0x1f;
  if ((int)uVar1 == 0x1f) {
    return 0x1f;
  }
  return *(undefined4 *)(param_1 + uVar1 * 0x58 + 200);
}




void FUN_100530048(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 2;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x23c) = *(byte *)(param_1 + 0x23c) & 0xfd | bVar1;
  return;
}




void FUN_100530068(long param_1,int param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    uVar1 = 3;
  }
  else {
    uVar2 = (ulong)*(ushort *)(param_1 + 0x230) & 0x1f;
    if (((int)uVar2 == 0x1f) || (*(int *)(param_1 + uVar2 * 0x58 + 200) != 3)) {
      return;
    }
    uVar1 = 0;
  }
  FUN_10052fe74(param_1 + 0xb8,uVar1);
  return;
}




void FUN_1005300a8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x238) = param_1;
  return;
}




void FUN_1005300b0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(ushort *)(param_1 + 0x230) & 0x1f;
  if (((int)uVar1 != 0x1f) && (*(int *)(param_1 + uVar1 * 0x58 + 200) == 0)) {
    *(byte *)(param_1 + 0x23c) = *(byte *)(param_1 + 0x23c) | 1;
    FUN_10052fe74(param_1 + 0xb8,1);
  }
  if ((*(byte *)(param_1 + 0x23c) >> 1 & 1) == 0) {
    return;
  }
  FUN_100644b14(param_2);
  return;
}




void FUN_100530120(long *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined **local_50 [4];
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((((int)((ulong)*(ushort *)(param_1 + 0x46) & 0x1f) == 0x1f) ||
      ((int)param_1[((ulong)*(ushort *)(param_1 + 0x46) & 0x1f) * 0xb + 0x19] != 1)) ||
     ((*(byte *)((long)param_1 + 0x23c) & 1) == 0)) {
    bVar1 = *(byte *)((long)param_1 + 0x23c);
    *(byte *)((long)param_1 + 0x23c) = bVar1 & 0xfe;
  }
  else {
    *(byte *)((long)param_1 + 0x23c) = *(byte *)((long)param_1 + 0x23c) & 0xfe;
    FUN_10052fe74(param_1 + 0x17,(ulong)(0.0 < *(float *)(param_1 + 0x47)) << 1);
    (**(code **)(*param_1 + 0x138))(param_1);
    FUN_100644ad0(local_50,DAT_101d91884,0);
    local_50[0] = &PTR_FUN_1014a0bb0;
    local_30 = 0;
    uStack_28 = 0xffffffff;
    FUN_100644c34(param_1,local_50,1);
    bVar1 = *(byte *)((long)param_1 + 0x23c);
  }
  if ((bVar1 >> 1 & 1) != 0) {
    FUN_100644b14(param_2);
  }
  return;
}




void FUN_100530200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100644ad0(param_1,param_2,0);
  *puVar1 = &PTR_FUN_1014a0bb0;
  puVar1[4] = param_4;
  puVar1[5] = param_3;
  return;
}




void FUN_100530238(void)

{
  return;
}




void FUN_10053023c(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(byte *)(param_1 + 0x23c) & 0xfffffffe;
  *(char *)(param_1 + 0x23c) = (char)uVar1;
  uVar2 = (ulong)*(ushort *)(param_1 + 0x230) & 0x1f;
  if (((int)uVar2 != 0x1f) && (*(int *)(param_1 + uVar2 * 0x58 + 200) == 1)) {
    FUN_10052fe74(param_1 + 0xb8,0);
    uVar1 = (uint)*(byte *)(param_1 + 0x23c);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    return;
  }
  FUN_100644b14(param_2);
  return;
}




void FUN_1005302b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149f690;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}




void FUN_1005302d0(long *param_1)

{
  if ((char)param_1[5] == '\0') {
    (**(code **)(*param_1 + 0x20))();
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}




void FUN_100530308(long *param_1,int param_2)

{
  if ((char)param_1[5] != '\0') {
    (**(code **)(*param_1 + 0x28))(param_1);
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (param_2 != 0) {
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}




undefined1 FUN_100530354(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}




void FUN_10053035c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 0x18) = param_5;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_100530368(long *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if ((char)param_1[5] != '\0') {
    (**(code **)(*param_1 + 0x28))(param_1);
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (param_2 == 2) {
    (**(code **)(*param_1 + 0x40))(param_1);
    pcVar3 = (code *)param_1[3];
    if (pcVar3 == (code *)0x0) goto LAB_100530418;
    lVar1 = param_1[4];
    uVar2 = 2;
  }
  else if (param_2 == 1) {
    (**(code **)(*param_1 + 0x38))(param_1);
    pcVar3 = (code *)param_1[2];
    if (pcVar3 == (code *)0x0) goto LAB_100530418;
    lVar1 = param_1[4];
    uVar2 = 1;
  }
  else {
    if (param_2 != 0) goto LAB_100530418;
    (**(code **)(*param_1 + 0x30))(param_1);
    pcVar3 = (code *)param_1[1];
    if (pcVar3 == (code *)0x0) goto LAB_100530418;
    lVar1 = param_1[4];
    uVar2 = 0;
  }
  (*pcVar3)(lVar1,uVar2);
LAB_100530418:
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}




long * FUN_100530430(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  *puVar3 = &PTR_thunk_FUN_100530784_10149f6e8;
  FUN_10064e264(puVar3 + 0x17);
  plVar1 = param_1 + 0x2e;
  FUN_100531d18(plVar1);
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0x4448000044480000;
  param_1[0xa1] = 0x3d4ccccd460ca000;
  *(undefined4 *)(param_1 + 0xa2) = 0x41700000;
  param_1[0xa3] = 0;
  param_1[0xa5] = 0x42a00000439d8000;
  param_1[0xa4] = 0x4120000043160000;
  *(ushort *)(param_1 + 0xa6) = *(ushort *)(param_1 + 0xa6) & 0xfc00 | 0x110;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  local_58 = DAT_101dbd458;
  local_80 = FUN_100530718;
  plVar2 = param_1 + 1;
  local_70 = 0;
  uStack_60 = 0;
  local_68 = 0;
  plStack_78 = param_1;
  FUN_10001554c(plVar2,&local_80);
  local_58 = DAT_101dbd45c;
  local_80 = FUN_10053072c;
  local_70 = 0;
  uStack_60 = 0;
  local_68 = 0;
  plStack_78 = param_1;
  FUN_10001554c(plVar2,&local_80);
  local_58 = DAT_101dbd460;
  local_80 = FUN_100530740;
  local_70 = 0;
  uStack_60 = 0;
  local_68 = 0;
  plStack_78 = param_1;
  FUN_10001554c(plVar2,&local_80);
  local_58 = DAT_101dbd47c;
  local_80 = FUN_100530754;
  local_70 = 0;
  uStack_60 = 0;
  local_68 = 0;
  plStack_78 = param_1;
  FUN_10001554c(plVar2,&local_80);
  local_58 = DAT_101dbd484;
  local_80 = FUN_100530718;
  local_70 = 0;
  uStack_60 = 0;
  local_68 = 0;
  plStack_78 = param_1;
  FUN_10001554c(plVar2,&local_80);
  local_58 = DAT_101dbd488;
  local_80 = FUN_10053072c;
  local_70 = 0;
  uStack_60 = 0;
  local_68 = 0;
  plStack_78 = param_1;
  FUN_10001554c(plVar2,&local_80);
  local_58 = DAT_101dbd48c;
  local_80 = FUN_100530740;
  local_70 = 0;
  uStack_60 = 0;
  local_68 = 0;
  plStack_78 = param_1;
  FUN_10001554c(plVar2,&local_80);
  local_58 = DAT_101dbd4a4;
  local_80 = FUN_100530768;
  local_70 = 0;
  uStack_60 = 0;
  local_68 = 0;
  plStack_78 = param_1;
  FUN_10001554c(plVar2,&local_80);
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  if ((*(uint *)((long)param_1 + 500) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 500) = *(uint *)((long)param_1 + 500) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0x37) != 0.4) || (*(float *)((long)param_1 + 0x1bc) != 1.0)) {
    param_1[0x37] = 0x3f8000003ecccccd;
    FUN_1000200a0(plVar1);
  }
  return param_1;
}




void FUN_100530718(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100530728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1,param_4,param_5);
  return;
}




void FUN_10053072c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010053073c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))(param_1,param_4,param_5);
  return;
}




void FUN_100530740(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100530750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))(param_1,param_4,param_5);
  return;
}




void FUN_100530754(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100530764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1,param_4,param_5);
  return;
}




void FUN_100530768(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100530778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x170))(param_1,param_4,param_5);
  return;
}




void FUN_10053077c(undefined8 param_1)

{
  FUN_100530430(param_1,0);
  return;
}




void FUN_100530784(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100530784_10149f6e8;
  FUN_1006415a8();
  param_1[0x2e] = &PTR_FUN_10149f870;
  param_1[0x7b] = &PTR_FUN_1014a7108;
  param_1[0x92] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x95);
  FUN_10064e2bc(param_1 + 0x7b);
  param_1[0x5d] = &PTR_FUN_1014a7108;
  param_1[0x74] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x77);
  FUN_10064e2bc(param_1 + 0x5d);
  param_1[0x3f] = &PTR_FUN_1014a7108;
  param_1[0x56] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x59);
  FUN_10064e2bc(param_1 + 0x3f);
  FUN_10064221c(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100530848(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149f870;
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_1014a7108;
  param_1[0x46] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49);
  FUN_10064e2bc(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void thunk_FUN_100530784(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100530784_10149f6e8;
  FUN_1006415a8();
  param_1[0x2e] = &PTR_FUN_10149f870;
  param_1[0x7b] = &PTR_FUN_1014a7108;
  param_1[0x92] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x95);
  FUN_10064e2bc(param_1 + 0x7b);
  param_1[0x5d] = &PTR_FUN_1014a7108;
  param_1[0x74] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x77);
  FUN_10064e2bc(param_1 + 0x5d);
  param_1[0x3f] = &PTR_FUN_1014a7108;
  param_1[0x56] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x59);
  FUN_10064e2bc(param_1 + 0x3f);
  FUN_10064221c(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1005308e4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100530784();
  operator_delete(pvVar1);
  return;
}




void FUN_1005308f8(long param_1)

{
  FUN_100642bd8(param_1 + 0xb8);
  return;
}




undefined8 FUN_100530900(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}




undefined8 FUN_100530908(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}




void FUN_100530910(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_101dc1cb8;
  *(undefined8 *)(param_1 + 0x4d8) = DAT_101dc1cb8;
  *(undefined8 *)(param_1 + 0x4e0) = uVar1;
  *(undefined8 *)(param_1 + 0x500) = uVar1;
  *(ushort *)(param_1 + 0x530) = *(ushort *)(param_1 + 0x530) & 0xffb0;
  return;
}




void FUN_10053093c(float param_1,float param_2,long param_3)

{
  *(ulong *)(param_3 + 0x4f8) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x4e8) >> 0x20) + param_2,
                (float)*(undefined8 *)(param_3 + 0x4e8) + param_1);
  FUN_100530954();
  return;
}




void FUN_100530954(float param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 *local_38;
  
  plVar1 = param_2 + 0x2e;
  fVar4 = (float)FUN_10064258c(plVar1);
  fVar4 = param_1 + -10.0 + *(float *)(param_2 + 0x9e) + fVar4 * -0.5;
  fVar6 = *(float *)((long)param_2 + 0x4f4) + 10.0;
  bVar2 = false;
  if ((*(float *)(param_2 + 0x36) == fVar4) &&
     (bVar2 = false, !NAN(*(float *)((long)param_2 + 0x1b4)) && !NAN(fVar6))) {
    bVar2 = *(float *)((long)param_2 + 0x1b4) == fVar6;
  }
  if (!bVar2) {
    *(float *)(param_2 + 0x36) = fVar4;
    *(float *)((long)param_2 + 0x1b4) = fVar6;
    FUN_1000200a0(plVar1);
  }
  local_38 = &DAT_3f0000003f000000;
  (**(code **)(param_2[0x2e] + 0x28))(plVar1,&local_38);
  iVar3 = FUN_100642d08(param_2);
  if (iVar3 != 0) {
    (**(code **)(*(long *)param_2[4] + 0x48))();
    fVar4 = fVar6;
    (**(code **)(*param_2 + 0x48))(param_2);
    fVar4 = *(float *)((long)param_2 + 0x4c) * fVar4;
    uVar5 = NEON_fminnm(fVar4,(fVar6 * fVar6) / fVar4 - *(float *)((long)param_2 + 0x4f4));
    FUN_100531bd8(uVar5,plVar1);
  }
  return;
}




void FUN_100530a48(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4)

{
  float fVar1;
  
  fVar1 = (float)FUN_1006425d0(param_3 + 0xb8,1,1,0,param_4);
  *(ulong *)(param_3 + 0x4f8) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x4e8) >> 0x20) + param_2,
                (float)*(undefined8 *)(param_3 + 0x4e8) + fVar1);
  FUN_100530954(param_3);
  return;
}




undefined4 FUN_100530a94(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4f8);
}




void FUN_100530aa0(long param_1)

{
  FUN_1006425d0(param_1 + 0xb8);
  return;
}




undefined8 FUN_100530aa8(long param_1)

{
  return CONCAT44((int)*(float *)(param_1 + 0x4fc),(int)*(float *)(param_1 + 0x4f8));
}




undefined4 FUN_100530ac4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4f8);
}




void FUN_100530ad0(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x4e8) = param_1;
  *(undefined4 *)(param_3 + 0x4ec) = param_2;
  return;
}




void FUN_100530adc(long param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = 0x10;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x20;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  *(ushort *)(param_1 + 0x530) = uVar2 | uVar1 | *(ushort *)(param_1 + 0x530) & 0xffcf;
  return;
}




void FUN_100530b0c(undefined4 param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  undefined1 *local_38;
  
  *(undefined4 *)(param_3 + 0x4f0) = param_1;
  *(undefined4 *)(param_3 + 0x4f4) = param_2;
  plVar1 = (long *)(param_3 + 0x170);
  fVar4 = *(float *)(param_3 + 0x4f8);
  fVar3 = (float)FUN_10064258c(plVar1);
  fVar3 = fVar4 + -20.0 + *(float *)(param_3 + 0x4f0) + fVar3 * -0.5;
  fVar4 = *(float *)(param_3 + 0x4f4) + 10.0;
  bVar2 = false;
  if ((*(float *)(param_3 + 0x1b0) == fVar3) &&
     (bVar2 = false, !NAN(*(float *)(param_3 + 0x1b4)) && !NAN(fVar4))) {
    bVar2 = *(float *)(param_3 + 0x1b4) == fVar4;
  }
  if (!bVar2) {
    *(float *)(param_3 + 0x1b0) = fVar3;
    *(float *)(param_3 + 0x1b4) = fVar4;
    FUN_1000200a0(plVar1);
  }
  local_38 = &DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_38);
  return;
}




void FUN_100530bb4(float param_1,float param_2,long param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(float *)(param_3 + 0x1b8) == param_1) &&
     (bVar1 = false, !NAN(*(float *)(param_3 + 0x1bc)) && !NAN(param_2))) {
    bVar1 = *(float *)(param_3 + 0x1bc) == param_2;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x1b8) = param_1;
    *(float *)(param_3 + 0x1bc) = param_2;
    FUN_1000200a0(param_3 + 0x170);
    return;
  }
  return;
}




void FUN_100530be0(long param_1)

{
  *(ushort *)(param_1 + 0x530) = *(ushort *)(param_1 + 0x530) | 0x200;
  *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) | 4;
  FUN_100530c3c(param_1 + 0x170);
  return;
}




void FUN_100530c04(long param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = 0x200;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(ushort *)(param_1 + 0x530) = *(ushort *)(param_1 + 0x530) & 0xfdff | uVar1;
  uVar2 = 4;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) & 0xfffffffb | uVar2;
  return;
}




void FUN_100530c3c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  undefined8 local_58;
  
  lVar1 = param_1 + 0x88;
  FUN_100652cac(lVar1,param_2,"scrollbar_button_fill_top");
  lVar2 = param_1 + 0x178;
  FUN_100652cac(lVar2,param_2,"scrollbar_button_fill_middle");
  plVar3 = (long *)(param_1 + 0x268);
  FUN_100652cac(plVar3,param_2,"scrollbar_button_fill_bottom");
  fVar5 = 0.0;
  bVar4 = false;
  if ((*(float *)(param_1 + 0xcc) == 0.0) && (bVar4 = false, !NAN(*(float *)(param_1 + 200)))) {
    bVar4 = *(float *)(param_1 + 200) == 0.0;
  }
  if (!bVar4) {
    *(undefined8 *)(param_1 + 200) = 0;
    FUN_1000200a0(lVar1);
  }
  local_58 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x88) + 0x28))(lVar1,&local_58);
  FUN_100652e60(lVar1);
  bVar4 = false;
  if ((*(float *)(param_1 + 0x1b8) == 0.0) &&
     (bVar4 = false, !NAN(*(float *)(param_1 + 0x1bc)) && !NAN(fVar5))) {
    bVar4 = *(float *)(param_1 + 0x1bc) == fVar5;
  }
  if (!bVar4) {
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(float *)(param_1 + 0x1bc) = fVar5;
    FUN_1000200a0(lVar2);
  }
  local_58 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x178) + 0x28))(lVar2,&local_58);
  fVar6 = *(float *)(param_1 + 0x1bc);
  FUN_100652e60(lVar2);
  fVar5 = fVar5 + fVar6;
  if ((*(float *)(param_1 + 0x2a8) != 0.0) || (*(float *)(param_1 + 0x2ac) != fVar5)) {
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    *(float *)(param_1 + 0x2ac) = fVar5;
    FUN_1000200a0(plVar3);
  }
  local_58 = 0x3f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_58);
  return;
}




byte FUN_100530d94(long param_1)

{
  return *(byte *)(param_1 + 0x530) >> 6 & 1;
}




undefined8 FUN_100530da0(long param_1)

{
  if (((*(byte *)(param_1 + 0x530) >> 6 & 1) == 0) &&
     (0.0 < SQRT(*(float *)(param_1 + 0x500) * *(float *)(param_1 + 0x500) +
                 *(float *)(param_1 + 0x504) * *(float *)(param_1 + 0x504)))) {
    return 1;
  }
  return 0;
}




byte FUN_100530dd4(long param_1)

{
  return *(byte *)(param_1 + 0x530) >> 7;
}




void FUN_100530de0(undefined8 param_1,long *param_2)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_68;
  float fStack_64;
  
  fVar19 = *(float *)(param_2 + 8);
  fVar20 = *(float *)((long)param_2 + 0x44);
  uVar1 = *(ushort *)(param_2 + 0xa6);
  fVar13 = (float)param_1;
  if ((uVar1 >> 6 & 1) != 0) {
    fVar6 = *(float *)(param_2 + 0x9b);
    lVar4 = FUN_10003d5bc(param_2);
    fVar8 = 1.0;
    fVar12 = 1.0;
    if (0.0 < *(float *)(lVar4 + 0x10)) {
      lVar4 = FUN_10003d5bc(param_2);
      fVar12 = *(float *)(lVar4 + 0x10);
    }
    fVar18 = *(float *)((long)param_2 + 0x4dc);
    lVar4 = FUN_10003d5bc(param_2);
    if (0.0 < *(float *)(lVar4 + 0x14)) {
      lVar4 = FUN_10003d5bc(param_2);
      fVar8 = *(float *)(lVar4 + 0x14);
    }
    fVar15 = (float)DAT_101dc1cb8;
    fVar17 = DAT_101dc1cb8._4_4_;
    if (0.0 < fVar13) {
      fVar15 = fVar6 / (fVar12 * fVar13);
      fVar17 = fVar18 / (fVar8 * fVar13);
    }
    *(float *)(param_2 + 0xa0) = fVar15;
    *(float *)((long)param_2 + 0x504) = fVar17;
    uVar5 = (uint)*(ushort *)(param_2 + 0xa6);
    if ((*(ushort *)(param_2 + 0xa6) >> 8 & 1) == 0) {
      bVar2 = false;
    }
    else {
      fVar6 = fVar20;
      fVar8 = (float)FUN_1005311e8(fVar19,param_2);
      bVar2 = false;
      uVar14 = NEON_fmov(0x3f800000,4);
      uVar16 = NEON_fmov(0xbf800000,4);
      uVar9 = uVar14 ^ (uVar14 ^ uVar16) & CONCAT44(-(uint)(fVar6 < 0.0),-(uint)(fVar8 < 0.0));
      fVar12 = (float)param_2[0xa0];
      fVar18 = (float)((ulong)param_2[0xa0] >> 0x20);
      uVar14 = uVar14 ^ (uVar14 ^ uVar16) & CONCAT44(-(uint)(fVar18 < 0.0),-(uint)(fVar12 < 0.0));
      uVar9 = CONCAT44(ABS(fVar6) / *(float *)(param_2 + 0xa4),
                       ABS(fVar8) / *(float *)(param_2 + 0xa4)) &
              CONCAT44(-(uint)((float)(uVar9 >> 0x20) == (float)(uVar14 >> 0x20)),
                       -(uint)((float)uVar9 == (float)uVar14));
      uVar10 = NEON_fminnm(CONCAT44((float)((ulong)DAT_101873a38 >> 0x20) - (float)(uVar9 >> 0x20),
                                    (float)DAT_101873a38 - (float)uVar9),DAT_101873a38,4);
      uVar10 = NEON_fmaxnm(CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8),uVar10,4);
      param_2[0xa0] = CONCAT44((float)((ulong)uVar10 >> 0x20) * fVar18,(float)uVar10 * fVar12);
      uVar5 = (uint)*(ushort *)(param_2 + 0xa6);
    }
    goto LAB_10053109c;
  }
  fVar6 = (float)_powf(*(undefined4 *)((long)param_2 + 0x50c),param_1);
  param_2[0xa0] =
       CONCAT44((float)((ulong)param_2[0xa0] >> 0x20) * fVar6,(float)param_2[0xa0] * fVar6);
  if ((uVar1 >> 8 & 1) == 0) {
    bVar2 = false;
  }
  else {
    fVar6 = fVar20;
    fVar8 = (float)FUN_1005311e8(fVar19,param_2);
    fVar18 = ABS(fVar8);
    fVar12 = ABS(fVar6);
    bVar2 = false;
    bVar3 = false;
    if (fVar18 < 1.0) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar12)) {
        bVar2 = fVar12 < 1.0;
        bVar3 = false;
      }
    }
    if (bVar2 == bVar3) {
      fVar15 = *(float *)((long)param_2 + 0x524);
      fVar17 = *(float *)(param_2 + 0xa5);
      if (fVar8 <= 0.0) {
        if (fVar8 < 0.0) {
          bVar2 = 0.0 <= *(float *)(param_2 + 0xa0);
          fVar8 = *(float *)(param_2 + 0xa0) + fVar18 * fVar17 * fVar13;
          if (bVar2) {
            fVar8 = fVar15 * fVar18;
          }
          goto LAB_100530fd4;
        }
        bVar2 = false;
      }
      else {
        fVar7 = *(float *)(param_2 + 0xa0);
        fVar8 = fVar7 - fVar18 * fVar17 * fVar13;
        if (fVar7 <= 0.0) {
          fVar8 = fVar15 * -fVar18;
        }
        bVar2 = fVar7 <= 0.0;
LAB_100530fd4:
        *(float *)(param_2 + 0xa0) = fVar8;
      }
      if (fVar6 <= 0.0) {
        if (0.0 <= fVar6) goto LAB_100531040;
        fVar6 = *(float *)((long)param_2 + 0x504) + fVar12 * fVar17 * fVar13;
        if (0.0 <= *(float *)((long)param_2 + 0x504)) {
          bVar2 = true;
          fVar6 = fVar15 * fVar12;
        }
      }
      else {
        fVar6 = *(float *)((long)param_2 + 0x504) - fVar12 * fVar17 * fVar13;
        if (*(float *)((long)param_2 + 0x504) <= 0.0) {
          bVar2 = true;
          fVar6 = fVar15 * -fVar12;
        }
      }
      *(float *)((long)param_2 + 0x504) = fVar6;
    }
    else {
      bVar2 = false;
    }
  }
LAB_100531040:
  fVar6 = fVar20;
  fVar8 = (float)FUN_1005311e8(fVar19,param_2);
  uVar1 = *(ushort *)(param_2 + 0xa6);
  uVar5 = (uint)uVar1;
  if ((((uVar1 >> 4 & 1) != 0) && (fVar8 == 0.0)) && (ABS(*(float *)(param_2 + 0xa0)) < 10.0)) {
    *(undefined4 *)(param_2 + 0xa0) = 0;
  }
  if ((((uVar1 >> 5 & 1) != 0) && (fVar6 == 0.0)) && (ABS(*(float *)((long)param_2 + 0x504)) < 10.0)
     ) {
    *(undefined4 *)((long)param_2 + 0x504) = 0;
  }
LAB_10053109c:
  if ((uVar5 >> 4 & 1) == 0) {
    *(undefined4 *)(param_2 + 0xa0) = 0;
  }
  uVar11 = 0;
  if ((uVar5 >> 5 & 1) != 0) {
    uVar11 = *(undefined4 *)((long)param_2 + 0x504);
  }
  fVar6 = *(float *)(param_2 + 0xa1);
  fVar8 = -fVar6;
  NEON_fminnm((int)param_2[0xa0],fVar6);
  NEON_fminnm(uVar11,fVar6);
  *(float *)(param_2 + 0xa0) = fVar8;
  *(float *)((long)param_2 + 0x504) = fVar8;
  fVar13 = (float)NEON_fminnm(fVar13,0x3dcccccd);
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  local_68 = fVar19 + fVar13 * fVar8;
  fStack_64 = fVar20 + fVar13 * fVar8;
  if ((uVar5 >> 8 & 1) == 0) {
    (**(code **)(*param_2 + 0x148))(param_2,&local_68);
  }
  FUN_1005312d0(local_68,fStack_64,param_2);
  if (bVar2) {
    fVar19 = fStack_64;
    fVar20 = (float)FUN_1005311e8(local_68,param_2);
    if (((0.0 < fVar20) && (fVar20 < 1.0)) || ((fVar20 < 0.0 && (-1.0 < fVar20)))) {
      *(undefined4 *)(param_2 + 0xa0) = 0;
    }
    if (((0.0 < fVar19) && (fVar19 < 1.0)) || ((fVar19 < 0.0 && (-1.0 < fVar19)))) {
      *(undefined4 *)((long)param_2 + 0x504) = 0;
    }
  }
  if (((*(byte *)((long)param_2 + 0x531) >> 1 & 1) != 0) &&
     (FUN_10053143c(0x3f000000,param_2 + 0x2e,*(float *)((long)param_2 + 0x504) != 0.0),
     0.0 < (float)(*(uint *)((long)param_2 + 500) >> 7 & 0xff) * 0.003921569)) {
    FUN_100531584(param_2);
  }
  return;
}




undefined1  [16] FUN_1005311e8(undefined1 param_1 [16],long *param_2)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  undefined8 uVar6;
  undefined1 auVar5 [16];
  float fVar7;
  
  uVar6 = param_1._8_8_;
  uVar4 = param_1._0_8_;
  uVar1 = FUN_100642d08();
  if ((uVar1 & 1) == 0) {
    uVar4 = (ulong)(uint)DAT_101dc1cb8;
    uVar6 = 0;
  }
  else {
    fVar2 = (float)(**(code **)(*(long *)param_2[4] + 0x48))();
    fVar3 = (float)(**(code **)(*param_2 + 0x48))(param_2);
    fVar7 = param_1._0_4_;
    if ((fVar7 <= 0.0) && (fVar3 = *(float *)(param_2 + 9) * fVar3, fVar2 < fVar3)) {
      uVar4 = 0;
      uVar6 = 0;
      if (fVar7 < fVar2 - fVar3) {
        uVar4 = (ulong)(uint)((fVar7 - fVar2) + fVar3);
        uVar6 = 0;
      }
    }
  }
  auVar5._8_8_ = uVar6;
  auVar5._0_8_ = uVar4;
  return auVar5;
}




void FUN_1005312d0(undefined8 param_1,float param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_60 [32];
  
  fVar5 = *(float *)(param_3 + 0x44);
  fVar6 = (float)param_1;
  fVar7 = fVar6 - *(float *)(param_3 + 0x40);
  fVar8 = param_2 - fVar5;
  bVar1 = false;
  if ((fVar7 == (float)DAT_101dc1cb8) && (bVar1 = false, !NAN(fVar8) && !NAN(DAT_101dc1cb8._4_4_)))
  {
    bVar1 = fVar8 == DAT_101dc1cb8._4_4_;
  }
  if (bVar1) {
    return;
  }
  bVar1 = false;
  if ((*(float *)(param_3 + 0x40) == fVar6) && (bVar1 = false, !NAN(fVar5) && !NAN(param_2))) {
    bVar1 = fVar5 == param_2;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x40) = fVar6;
    *(float *)(param_3 + 0x44) = param_2;
    FUN_1000200a0(param_3);
  }
  fVar5 = (float)FUN_1005311e8(param_1,param_3);
  bVar1 = false;
  bVar2 = false;
  if (ABS(fVar5) < 1.1920929e-07) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(ABS(param_2))) {
      bVar1 = ABS(param_2) < 1.1920929e-07;
      bVar2 = false;
    }
  }
  if (bVar1 == bVar2) {
    *(ushort *)(param_3 + 0x530) = *(ushort *)(param_3 + 0x530) & 0xfff0;
    return;
  }
  if (fVar8 <= 0.0) {
    if (0.0 <= fVar8) goto LAB_1005313c4;
    iVar3 = -1;
  }
  else {
    iVar3 = 1;
  }
  if (iVar3 != (int)((uint)*(ushort *)(param_3 + 0x530) << 0x1e) >> 0x1e) {
    *(ushort *)(param_3 + 0x530) = *(ushort *)(param_3 + 0x530) & 0xfffc | (ushort)iVar3 & 3;
    FUN_100644aec(auStack_60,DAT_101d9188c,iVar3);
    FUN_100644c34(param_3,auStack_60,0);
  }
LAB_1005313c4:
  if (fVar7 <= 0.0) {
    if (0.0 <= fVar7) {
      return;
    }
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 1;
  }
  if (uVar4 != (int)(short)(*(ushort *)(param_3 + 0x530) << 0xc) >> 0xe) {
    *(ushort *)(param_3 + 0x530) =
         (ushort)((uVar4 & 3) << 2) | *(ushort *)(param_3 + 0x530) & 0xfff3;
    FUN_100644aec(auStack_60,DAT_101d91888,uVar4);
    FUN_100644c34(param_3,auStack_60,0);
  }
  return;
}




void FUN_10053143c(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  
  if (param_3 == 0) {
    if ((*(char *)(param_2 + 0x359) == '\0') &&
       ((float)(*(uint *)(param_2 + 0x84) >> 7 & 0xff) * 0.003921569 < 0.4)) {
      return;
    }
    FUN_100642324(param_2);
    uVar1 = *(uint *)(param_2 + 0x84);
    if ((uVar1 & 0x7f80) != 0x3280) {
      *(uint *)(param_2 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x3280;
      FUN_1000200a0(param_2);
    }
    uVar2 = FUN_10001f55c();
    FUN_10063f0e8(param_1);
    uVar3 = FUN_100047714();
    FUN_10063f0e8(0x3f400000);
    FUN_10063fce0(0,uVar3);
    FUN_100642b7c(param_2,uVar2);
    uVar4 = 1;
  }
  else {
    if ((*(char *)(param_2 + 0x358) == '\0') &&
       ((float)(*(uint *)(param_2 + 0x84) >> 7 & 0xff) * 0.003921569 != 0.0)) {
      return;
    }
    FUN_100642324(param_2);
    uVar2 = FUN_100047714();
    FUN_10063f0e8(0x3e19999a);
    FUN_10063fce0(0x3ecccccd,uVar2);
    FUN_100642b14(param_2,uVar2);
    uVar4 = 0x100;
  }
  *(undefined2 *)(param_2 + 0x358) = uVar4;
  return;
}




void FUN_100531584(undefined1 param_1 [16],float param_2,long *param_3)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_100642d08();
  if (iVar1 != 0) {
    (**(code **)(*(long *)param_3[4] + 0x48))();
    fVar2 = param_2;
    (**(code **)(*param_3 + 0x48))(param_3);
    fVar2 = ((*(float *)((long)param_3 + 0x44) * -param_2) /
             (*(float *)((long)param_3 + 0x4c) * fVar2) - *(float *)((long)param_3 + 0x44)) +
            *(float *)((long)param_3 + 0x4f4);
    if (*(float *)((long)param_3 + 0x1b4) != fVar2) {
      *(float *)((long)param_3 + 0x1b4) = fVar2;
      FUN_1000200a0(param_3 + 0x2e);
      return;
    }
  }
  return;
}




void FUN_10053161c(undefined1 param_1 [16],float param_2,long *param_3,float *param_4)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = FUN_100642d08();
  if (iVar1 != 0) {
    fVar3 = (float)(**(code **)(*(long *)param_3[4] + 0x48))();
    fVar5 = param_2;
    fVar4 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    uVar2 = (uint)*(ushort *)(param_3 + 0xa6);
    if ((*(ushort *)(param_3 + 0xa6) >> 4 & 1) != 0) {
      fVar6 = *param_4;
      fVar3 = fVar3 - fVar4;
      fVar4 = fVar6;
      if (fVar6 <= fVar3) {
        fVar4 = fVar3;
      }
      if ((fVar6 < fVar3) || (0.0 < fVar4)) {
        if (0.0 < fVar4) {
          fVar4 = 0.0;
        }
        *param_4 = fVar4;
        uVar2 = (uint)*(ushort *)(param_3 + 0xa6);
      }
    }
    if ((uVar2 >> 5 & 1) != 0) {
      fVar3 = param_4[1];
      param_2 = param_2 - fVar5;
      fVar5 = fVar3;
      if (fVar3 <= param_2) {
        fVar5 = param_2;
      }
      if ((fVar3 < param_2) || (0.0 < fVar5)) {
        if (0.0 < fVar5) {
          fVar5 = 0.0;
        }
        param_4[1] = fVar5;
      }
    }
  }
  return;
}




void FUN_1005316d4(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  FUN_100644b14(param_2);
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) {
    param_1[0xa3] = param_2[4];
    lVar2 = CONCAT44((int)(float)((ulong)param_2[5] >> 0x20),(int)(float)param_2[5]);
    if (((*(byte *)(param_1 + 0xa6) >> 6 & 1) == 0) &&
       (0.0 < SQRT(*(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0xa0) +
                   *(float *)((long)param_1 + 0x504) * *(float *)((long)param_1 + 0x504)))) {
      (**(code **)(*param_1 + 0x138))(param_1);
      param_1[0x9b] = DAT_101dc1cb8;
      param_1[0x9c] = lVar2;
      *(ushort *)(param_1 + 0xa6) = *(ushort *)(param_1 + 0xa6) | 0xc0;
    }
    param_1[0x9a] = lVar2;
  }
  return;
}




void FUN_1005317ac(long param_1,long *param_2)

{
  ulong uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((*(byte *)(param_1 + 0x530) & 0x30) == 0) {
    FUN_100644b14(param_2);
    return;
  }
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar1 & 1) == 0) && (DAT_101dbd4d8 != DAT_101dbd450)) {
    return;
  }
  if (param_2[4] != *(long *)(param_1 + 0x518)) {
    return;
  }
  fVar5 = (float)(int)(float)param_2[5];
  fVar6 = (float)(int)(float)((ulong)param_2[5] >> 0x20);
  fVar3 = *(float *)(param_1 + 0x4d0) - fVar5;
  fVar4 = *(float *)(param_1 + 0x4d4) - fVar6;
  if ((*(ushort *)(param_1 + 0x530) >> 4 & 1) == 0) {
    pfVar2 = (float *)&DAT_101873a58;
  }
  else {
    if ((*(ushort *)(param_1 + 0x530) >> 5 & 1) != 0) goto LAB_100531888;
    pfVar2 = (float *)&DAT_101873a50;
  }
  fVar4 = *pfVar2 * fVar3 + fVar4 * pfVar2[1];
  fVar3 = fVar4 * *pfVar2;
  fVar4 = fVar4 * pfVar2[1];
LAB_100531888:
  if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) <= *(float *)(param_1 + 0x510)) {
    FUN_100644b14(param_2);
  }
  else {
    FUN_100641584(param_2[4],param_1);
    if ((*(ushort *)(param_1 + 0x530) >> 6 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x4d8) = DAT_101dc1cb8;
      *(ulong *)(param_1 + 0x4e0) = CONCAT44(fVar6,fVar5);
      *(ushort *)(param_1 + 0x530) = *(ushort *)(param_1 + 0x530) | 0x40;
      FUN_100641584(param_2[4],param_1);
      return;
    }
  }
  *(ulong *)(param_1 + 0x4d8) =
       CONCAT44(fVar6 - (float)((ulong)*(undefined8 *)(param_1 + 0x4e0) >> 0x20),
                fVar5 - (float)*(undefined8 *)(param_1 + 0x4e0));
  *(ulong *)(param_1 + 0x4e0) = CONCAT44(fVar6,fVar5);
  return;
}




void FUN_10053191c(long param_1,long *param_2)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  if ((*(byte *)(param_1 + 0x530) & 0x30) != 0) {
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
    if ((((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) &&
       (param_2[4] == *(long *)(param_1 + 0x518))) {
      fVar2 = (float)(int)(float)param_2[5];
      fVar3 = (float)(int)(float)((ulong)param_2[5] >> 0x20);
      *(ulong *)(param_1 + 0x4d8) =
           CONCAT44(fVar3 - (float)((ulong)*(undefined8 *)(param_1 + 0x4e0) >> 0x20),
                    fVar2 - (float)*(undefined8 *)(param_1 + 0x4e0));
      *(ulong *)(param_1 + 0x4e0) = CONCAT44(fVar3,fVar2);
      *(ushort *)(param_1 + 0x530) = *(ushort *)(param_1 + 0x530) & 0xff3f;
      FUN_100641598(param_2[4]);
      *(undefined8 *)(param_1 + 0x518) = 0;
    }
    return;
  }
  FUN_100644b14(param_2);
  return;
}




void FUN_1005319dc(long *param_1,long *param_2)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) &&
      ((*(byte *)(param_1 + 0xa6) & 0x30) != 0)) &&
     ((0.001 <= ABS(*(float *)(param_2 + 6)) || (0.001 <= ABS(*(float *)((long)param_2 + 0x34))))))
  {
    (**(code **)(*param_1 + 0x138))(param_1);
    fVar2 = 0.0;
    if ((*(ushort *)(param_1 + 0xa6) >> 4 & 1) != 0) {
      fVar2 = *(float *)((long)param_1 + 0x52c) * *(float *)(param_2 + 6);
    }
    fVar4 = *(float *)((long)param_2 + 0x34);
    if ((*(ushort *)(param_1 + 0xa6) >> 5 & 1) == 0) {
      fVar6 = 0.0;
      if (0.001 <= ABS(fVar4)) {
        fVar2 = *(float *)((long)param_1 + 0x52c) * fVar4;
        fVar6 = 0.0;
      }
    }
    else {
      fVar6 = *(float *)((long)param_1 + 0x52c) * fVar4;
    }
    fVar5 = *(float *)(param_1 + 8);
    fVar6 = *(float *)((long)param_1 + 0x44) + fVar6;
    fVar4 = fVar6;
    fVar3 = (float)FUN_1005311e8(fVar5 + fVar2,fVar6,param_1);
    FUN_1005312d0((fVar5 + fVar2) - fVar3,fVar6 - fVar4,param_1);
    return;
  }
  return;
}




void FUN_100531b08(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if ((((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) &&
     (param_2[4] == *(long *)(param_1 + 0x518))) {
    *(ushort *)(param_1 + 0x530) = *(ushort *)(param_1 + 0x530) & 0xff3f;
    *(undefined8 *)(param_1 + 0x518) = 0;
  }
  return;
}




void FUN_100531b88(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 500);
  if ((uVar1 & 0x7f80) != 0x3300) {
    *(uint *)(param_1 + 500) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x3300;
    FUN_1000200a0(param_1 + 0x170);
  }
  FUN_10053143c(0x3f400000,param_1 + 0x170,0);
  return;
}




void FUN_100531bd8(float param_1,float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_48;
  
  lVar1 = param_3 + 0x88;
  FUN_100652e60(lVar1);
  param_1 = param_1 + param_2 * -2.0;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  lVar2 = param_3 + 0x178;
  uVar5 = FUN_100652e60(lVar2);
  FUN_10064e47c(uVar5,param_1,lVar2);
  fVar6 = *(float *)(param_3 + 0xcc);
  bVar4 = false;
  if ((fVar6 == 0.0) && (bVar4 = false, !NAN(*(float *)(param_3 + 200)))) {
    bVar4 = *(float *)(param_3 + 200) == 0.0;
  }
  if (!bVar4) {
    *(undefined8 *)(param_3 + 200) = 0;
    FUN_1000200a0(lVar1);
  }
  local_48 = 0x3f000000;
  (**(code **)(*(long *)(param_3 + 0x88) + 0x28))(lVar1,&local_48);
  FUN_100652e60(lVar1);
  bVar4 = false;
  if ((*(float *)(param_3 + 0x1b8) == 0.0) &&
     (bVar4 = false, !NAN(*(float *)(param_3 + 0x1bc)) && !NAN(fVar6))) {
    bVar4 = *(float *)(param_3 + 0x1bc) == fVar6;
  }
  if (!bVar4) {
    *(undefined4 *)(param_3 + 0x1b8) = 0;
    *(float *)(param_3 + 0x1bc) = fVar6;
    FUN_1000200a0(lVar2);
  }
  local_48 = 0x3f000000;
  (**(code **)(*(long *)(param_3 + 0x178) + 0x28))(lVar2,&local_48);
  plVar3 = (long *)(param_3 + 0x268);
  fVar7 = *(float *)(param_3 + 0x1bc);
  FUN_100652e60(lVar2);
  fVar6 = fVar6 + fVar7;
  if ((*(float *)(param_3 + 0x2a8) != 0.0) || (*(float *)(param_3 + 0x2ac) != fVar6)) {
    *(undefined4 *)(param_3 + 0x2a8) = 0;
    *(float *)(param_3 + 0x2ac) = fVar6;
    FUN_1000200a0(plVar3);
  }
  local_48 = 0x3f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_48);
  return;
}




long * FUN_100531d18(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_FUN_10149f870;
  thunk_FUN_100652c08(puVar1 + 0x11);
  thunk_FUN_100652c08(param_1 + 0x2f);
  thunk_FUN_100652c08(param_1 + 0x4d);
  *(undefined2 *)(param_1 + 0x6b) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x11,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2f,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4d,1);
  return param_1;
}




long FUN_100531dc0(long param_1)

{
  undefined8 *puVar1;
  code *local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puStack_58 = (undefined8 *)FUN_10064f204();
  *puStack_58 = &PTR_thunk_FUN_100531f9c_10149f970;
  puStack_58[0x2a] = 0;
  puStack_58[0x2b] = 0;
  puStack_58[0x29] = 0;
  *(undefined4 *)(puStack_58 + 0x2c) = 0xffffffff;
  puStack_58[0x2d] = 0;
  local_38 = DAT_101dbd458;
  local_60 = FUN_100531f5c;
  puVar1 = puStack_58 + 1;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  FUN_10001554c(puVar1,&local_60);
  local_38 = DAT_101dbd484;
  local_60 = FUN_100531f5c;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  puStack_58 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&local_60);
  local_38 = DAT_101dbd45c;
  local_60 = FUN_100531f64;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  puStack_58 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&local_60);
  local_38 = DAT_101dbd488;
  local_60 = FUN_100531f64;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  puStack_58 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&local_60);
  local_38 = DAT_101dbd460;
  local_60 = FUN_100531f6c;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  puStack_58 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&local_60);
  local_38 = DAT_101dbd48c;
  local_60 = FUN_100531f6c;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  puStack_58 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&local_60);
  local_38 = DAT_101dbd4a4;
  local_60 = FUN_100531f74;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  puStack_58 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&local_60);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x10;
  return param_1;
}




void FUN_100531f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100532238(param_1,param_4);
  return;
}




void FUN_100531f64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1005322b4(param_1,param_4);
  return;
}




void FUN_100531f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100532450(param_1,param_4);
  return;
}




void FUN_100531f74(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
  lVar1 = *(long *)(param_1 + 0x158);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) & 0xfffffffb;
  }
  return;
}




long thunk_FUN_100531dc0(long param_1)

{
  undefined8 *puVar1;
  code *pcStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puStack_58 = (undefined8 *)FUN_10064f204();
  *puStack_58 = &PTR_thunk_FUN_100531f9c_10149f970;
  puStack_58[0x2a] = 0;
  puStack_58[0x2b] = 0;
  puStack_58[0x29] = 0;
  *(undefined4 *)(puStack_58 + 0x2c) = 0xffffffff;
  puStack_58[0x2d] = 0;
  uStack_38 = DAT_101dbd458;
  pcStack_60 = FUN_100531f5c;
  puVar1 = puStack_58 + 1;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  FUN_10001554c(puVar1,&pcStack_60);
  uStack_38 = DAT_101dbd484;
  pcStack_60 = FUN_100531f5c;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  puStack_58 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&pcStack_60);
  uStack_38 = DAT_101dbd45c;
  pcStack_60 = FUN_100531f64;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  puStack_58 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&pcStack_60);
  uStack_38 = DAT_101dbd488;
  pcStack_60 = FUN_100531f64;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  puStack_58 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&pcStack_60);
  uStack_38 = DAT_101dbd460;
  pcStack_60 = FUN_100531f6c;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  puStack_58 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&pcStack_60);
  uStack_38 = DAT_101dbd48c;
  pcStack_60 = FUN_100531f6c;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  puStack_58 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&pcStack_60);
  uStack_38 = DAT_101dbd4a4;
  pcStack_60 = FUN_100531f74;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  puStack_58 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&pcStack_60);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x10;
  return param_1;
}




void FUN_100531f9c(undefined8 *param_1)

{
  void *pvVar1;
  long *plVar2;
  uint uVar3;
  void *pvVar4;
  
  *param_1 = &PTR_thunk_FUN_100531f9c_10149f970;
  pvVar1 = (void *)param_1[0x2a];
  uVar3 = *(uint *)(param_1 + 0x29);
  pvVar4 = pvVar1;
  if (uVar3 != 0) {
    do {
      plVar2 = *(long **)((long)pvVar4 + 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        uVar3 = *(uint *)(param_1 + 0x29);
        pvVar1 = (void *)param_1[0x2a];
      }
      pvVar4 = (void *)((long)pvVar4 + 0x10);
    } while (pvVar4 != (void *)((long)pvVar1 + (ulong)uVar3 * 0x10));
  }
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x29) = 0;
    operator_delete__(pvVar1);
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
  }
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100531f9c(undefined8 *param_1)

{
  void *pvVar1;
  long *plVar2;
  uint uVar3;
  void *pvVar4;
  
  *param_1 = &PTR_thunk_FUN_100531f9c_10149f970;
  pvVar1 = (void *)param_1[0x2a];
  uVar3 = *(uint *)(param_1 + 0x29);
  pvVar4 = pvVar1;
  if (uVar3 != 0) {
    do {
      plVar2 = *(long **)((long)pvVar4 + 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        uVar3 = *(uint *)(param_1 + 0x29);
        pvVar1 = (void *)param_1[0x2a];
      }
      pvVar4 = (void *)((long)pvVar4 + 0x10);
    } while (pvVar4 != (void *)((long)pvVar1 + (ulong)uVar3 * 0x10));
  }
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x29) = 0;
    operator_delete__(pvVar1);
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
  }
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100532038(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100531f9c();
  operator_delete(pvVar1);
  return;
}




void FUN_10053204c(long *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 local_30 [2];
  undefined8 local_28;
  
  local_30[0] = param_2;
  local_28 = param_3;
  FUN_1005320b0(param_1 + 0x29,local_30);
  (**(code **)(*param_1 + 0x78))(param_1,param_3,1);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1005320b0(uint *param_1,undefined8 *param_2)

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
    FUN_100538320(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_100532130(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x158) = param_2;
  return;
}




void FUN_100532138(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined1 *local_68;
  
  if ((int)param_3[0x29] != 0) {
    lVar2 = param_3[0x2a];
    lVar3 = lVar2;
    lVar4 = lVar2;
    do {
      plVar1 = *(long **)(lVar4 + 8);
      fVar5 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      (**(code **)(*param_3 + 0x48))(param_3);
      fVar6 = (float)NEON_ucvtf((int)param_3[0x29]);
      fVar6 = (param_2 * ((float)((ulong)(lVar3 - lVar2) >> 4 & 0xffffffff) + 0.5)) / fVar6;
      param_2 = *(float *)(plVar1 + 8);
      if ((param_2 != fVar5 * 0.5) || (param_2 = *(float *)((long)plVar1 + 0x44), param_2 != fVar6))
      {
        *(float *)(plVar1 + 8) = fVar5 * 0.5;
        *(float *)((long)plVar1 + 0x44) = fVar6;
        FUN_1000200a0(plVar1);
      }
      local_68 = &DAT_3f0000003f000000;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_68);
      lVar4 = lVar4 + 0x10;
      lVar2 = param_3[0x2a];
      lVar3 = lVar3 + 0x10;
    } while (lVar4 != lVar2 + (ulong)*(uint *)(param_3 + 0x29) * 0x10);
  }
  return;
}




void FUN_100532238(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar1 & 1) == 0) && (DAT_101dbd4d8 != DAT_101dbd450)) {
    return;
  }
  lVar2 = param_2[4];
  *(long *)(param_1 + 0x168) = lVar2;
  FUN_100641584(lVar2,param_1);
  return;
}




void FUN_1005322b4(undefined1 param_1 [16],float param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_70 [32];
  
  fVar8 = (float)(**(code **)(*param_3 + 0x48))();
  bVar3 = false;
  bVar4 = false;
  if (fVar8 < 10.0) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(param_2)) {
      bVar3 = param_2 < 10.0;
      bVar4 = false;
    }
  }
  if ((bVar3 == bVar4) &&
     (((uVar5 = (**(code **)(*param_4 + 0x10))(param_4,DAT_101dbd4d8), (uVar5 & 1) != 0 ||
       (DAT_101dbd4d8 == DAT_101dbd450)) && (param_4[4] == param_3[0x2d])))) {
    fVar8 = *(float *)((long)param_4 + 0x2c);
    lVar6 = FUN_10003d5bc(param_3);
    fVar9 = *(float *)(lVar6 + 0xc);
    fVar10 = *(float *)(lVar6 + 0x14);
    (**(code **)(*param_3 + 0x48))(param_3);
    uVar2 = *(uint *)(param_3 + 0x29);
    if (uVar2 != 0) {
      fVar8 = (float)NEON_fminnm(((float)(int)fVar8 - fVar9) / (param_2 * fVar10),0x3f800000);
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      uVar1 = (int)(fVar8 * (float)uVar2);
      if (uVar2 - 1 <= (uint)(int)(fVar8 * (float)uVar2)) {
        uVar1 = uVar2 - 1;
      }
      if (uVar1 != *(uint *)(param_3 + 0x2c)) {
        uVar7 = FUN_100644a94("UI::EVENT_JUMPLIST_JUMP_TO_INDEX");
        FUN_100644aec(auStack_70,uVar7,(ulong)uVar1);
        FUN_100644c34(param_3,auStack_70,0);
        *(uint *)(param_3 + 0x2c) = uVar1;
        if ((param_3[0x2b] != 0) &&
           (lVar6 = *(long *)(param_3[0x2a] + (ulong)uVar1 * 0x10 + 8), lVar6 != 0)) {
          FUN_10064e72c(0,param_3[0x2b],5,lVar6,5);
          FUN_10064e72c(0,param_3[0x2b],1,param_3,1);
          *(uint *)(param_3[0x2b] + 0x84) = *(uint *)(param_3[0x2b] + 0x84) | 4;
        }
      }
    }
  }
  return;
}




void FUN_100532450(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if ((((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) && (*(long *)(param_1 + 0x168) != 0))
  {
    FUN_100641598();
    return;
  }
  return;
}




long FUN_1005324bc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_100532514_10149fac0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  uVar2 = FUN_1006505b8(puVar1 + 0x19);
  FUN_100650608(uVar2,&DAT_10115a160);
  *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | 0x10;
  return param_1;
}




long thunk_FUN_1005324bc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_100532514_10149fac0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  uVar2 = FUN_1006505b8(puVar1 + 0x19);
  FUN_100650608(uVar2,&DAT_10115a160);
  *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | 0x10;
  return param_1;
}




void FUN_100532514(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100532514_10149fac0;
  FUN_10053255c();
  FUN_10064e2bc(param_1 + 0x19);
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10053255c(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_60 [32];
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0xc0);
      FUN_100644aec(auStack_60,DAT_101d91894,param_1);
      FUN_100644c34(*(undefined8 *)(lVar5 + lVar3),auStack_60,1);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar4 < *(uint *)(param_1 + 0xb8));
    if (*(uint *)(param_1 + 0xb8) != 0) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        lVar5 = *(long *)(param_1 + 0xc0);
        iVar1 = FUN_100642d08(*(undefined8 *)(lVar5 + lVar3));
        if (iVar1 != 0) {
          FUN_1006423ec(*(undefined8 *)(lVar5 + lVar3),1);
        }
        if ((*(char *)(lVar5 + lVar3 + 0xe) != '\0') &&
           (plVar2 = *(long **)(*(long *)(param_1 + 0xc0) + lVar3), plVar2 != (long *)0x0)) {
          (**(code **)(*plVar2 + 8))();
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (uVar4 < *(uint *)(param_1 + 0xb8));
    }
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  uVar4 = FUN_100642d08(param_1 + 200);
  if ((uVar4 & 1) != 0) {
    FUN_1006423ec(param_1 + 200,1);
  }
  FUN_100644aec(auStack_60,DAT_101d918a0,0);
  FUN_100644c34(param_1,auStack_60,1);
  return;
}




void thunk_FUN_100532514(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100532514_10149fac0;
  FUN_10053255c();
  FUN_10064e2bc(param_1 + 0x19);
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10053268c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100532514();
  operator_delete(pvVar1);
  return;
}




void FUN_1005326a0(long param_1,undefined8 param_2,char *param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined1 auStack_b0 [32];
  undefined8 local_90;
  uint local_88;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 auStack_80 [32];
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0xc0);
    FUN_100644aec(auStack_80,DAT_101d9189c,param_1);
    FUN_100644c34(*(undefined8 *)(lVar3 + (ulong)(iVar1 - 1) * 0x10),auStack_80,1);
  }
  if (param_3 == (char *)0x0) {
    local_88 = 0;
  }
  else {
    local_88 = 0x811c9dc5;
    cVar2 = *param_3;
    while (cVar2 != '\0') {
      param_3 = param_3 + 1;
      local_88 = (local_88 ^ (int)cVar2) * 0x1000193;
      cVar2 = *param_3;
    }
  }
  local_90 = param_2;
  local_84 = param_4;
  local_83 = param_5;
  local_82 = param_6;
  FUN_1005327e8((int *)(param_1 + 0xb8),&local_90);
  FUN_100644aec(auStack_80,DAT_101d91890,param_1);
  FUN_100644c34(param_2,auStack_80,1);
  FUN_100532868(param_1,&local_90);
  if (iVar1 == 0) {
    FUN_100644aec(auStack_b0,DAT_101d918a4,0);
    FUN_100644c34(param_1,auStack_b0,1);
  }
  return;
}




void FUN_1005327e8(uint *param_1,undefined8 *param_2)

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
    FUN_10053839c(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_100532868(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [32];
  
  plVar1 = param_1 + 0x19;
  iVar2 = FUN_100642d08(plVar1);
  if (iVar2 != 0) {
    FUN_1006423ec(plVar1,1);
  }
  iVar2 = FUN_100642d08(*param_2);
  if (iVar2 != 0) {
    FUN_1006423ec(*param_2,1);
  }
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,*param_2,1);
  if (*(char *)((long)param_2 + 0xd) != '\0') {
    FUN_10064e6d8(0,0,*param_2,8);
  }
  FUN_100644aec(auStack_50,DAT_101d91898,param_1);
  FUN_100644c34(*param_2,auStack_50,1);
  FUN_10064142c(&uStack_54,&local_58);
  FUN_10064e47c(uStack_54,local_58,plVar1);
  FUN_10064e6d8(0,0,plVar1,0);
  return;
}




void FUN_100532970(long *param_1,undefined8 param_2,char *param_3,undefined1 param_4,char param_5,
                  undefined1 param_6)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_70 [32];
  undefined8 local_50;
  uint local_48;
  undefined1 local_44;
  char local_43;
  undefined1 local_42;
  undefined1 auStack_40 [32];
  
  if ((int)param_1[0x17] != 0) {
    if (param_3 == (char *)0x0) {
      local_48 = 0;
    }
    else {
      local_48 = 0x811c9dc5;
      cVar1 = *param_3;
      while (cVar1 != '\0') {
        param_3 = param_3 + 1;
        local_48 = (local_48 ^ (int)cVar1) * 0x1000193;
        cVar1 = *param_3;
      }
    }
    local_50 = param_2;
    local_44 = param_4;
    local_43 = param_5;
    local_42 = param_6;
    FUN_100538418(param_1 + 0x17,param_1[0x18],&local_50,auStack_40);
    FUN_100644aec(auStack_70,DAT_101d91890,param_1);
    FUN_100644c34(param_2,auStack_70,1);
    iVar2 = FUN_100642d08(local_50);
    if (iVar2 != 0) {
      FUN_1006423ec(local_50,1);
    }
    (**(code **)(*param_1 + 0x78))(param_1,local_50,1);
    if (local_43 != '\0') {
      FUN_10064e6d8(0,0,local_50,8);
    }
    puVar3 = (undefined8 *)param_1[0x18];
    FUN_100644aec(auStack_40,DAT_101d9189c,param_1);
    FUN_100644c34(*puVar3,auStack_40,1);
    return;
  }
  FUN_1005326a0(param_1,param_2);
  return;
}




void FUN_100532ab4(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  if (*(uint *)(param_1 + 0xb8) != 0) {
    lVar1 = 0;
    plVar2 = *(long **)(param_1 + 0xc0);
    do {
      if (*plVar2 == param_2) {
        if ((int)lVar1 != 1) {
          FUN_100532b3c();
          return;
        }
        break;
      }
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 2;
    } while (-lVar1 != (ulong)*(uint *)(param_1 + 0xb8));
  }
  FUN_1005326a0();
  return;
}




bool FUN_100532af8(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  if (*(uint *)(param_1 + 0xb8) != 0) {
    lVar1 = 0;
    plVar2 = *(long **)(param_1 + 0xc0);
    do {
      if (*plVar2 == param_2) {
        return (int)lVar1 != 1;
      }
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 2;
    } while (-lVar1 != (ulong)*(uint *)(param_1 + 0xb8));
  }
  return false;
}




void FUN_100532b3c(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  if (uVar1 == 0) {
    return;
  }
  lVar7 = 0;
  lVar6 = 0;
  plVar8 = *(long **)(param_1 + 0xc0);
  iVar4 = -1;
  while (*(long *)((long)plVar8 + lVar7) != param_2) {
    lVar6 = lVar6 + 0x100000000;
    lVar7 = lVar7 + 0x10;
    iVar4 = iVar4 + -1;
    if ((ulong)uVar1 * 0x10 - lVar7 == 0) {
      return;
    }
  }
  if (iVar4 == 0) {
    return;
  }
  lVar3 = 0;
  plVar5 = plVar8;
  do {
    if (*plVar5 == param_2) {
      if (((int)lVar3 != 1) && (uVar1 + (int)lVar3 == 1)) {
        return;
      }
      break;
    }
    lVar3 = lVar3 + -1;
    plVar5 = plVar5 + 2;
  } while ((ulong)uVar1 + lVar3 != 0);
  FUN_100644aec(&local_60,DAT_101d9189c,param_1);
  FUN_100644c34(plVar8[(ulong)(uVar1 - 1) * 2],&local_60,1);
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0xc0) + lVar7);
  uStack_58 = puVar2[1];
  local_60 = *puVar2;
  lVar7 = *(long *)(param_1 + 0xc0) + (lVar6 >> 0x1c);
  FUN_10053866c(param_1 + 0xb8,lVar7,lVar7 + 0x10);
  FUN_1005327e8(param_1 + 0xb8,&local_60);
  FUN_100532868(param_1,&local_60);
  return;
}




bool FUN_100532c58(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  if (uVar1 != 0) {
    lVar2 = 0;
    plVar3 = *(long **)(param_1 + 0xc0);
    do {
      if (*plVar3 == param_2) {
        return (int)lVar2 != 1 && uVar1 + (int)lVar2 == 1;
      }
      lVar2 = lVar2 + -1;
      plVar3 = plVar3 + 2;
    } while ((ulong)uVar1 + lVar2 != 0);
  }
  return false;
}




undefined8 FUN_100532ca4(long param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  
  if (param_2 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      uVar2 = (uVar2 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0xb8);
  if (*(uint *)(param_1 + 0xb8) != 0) {
    puVar4 = (uint *)(*(long *)(param_1 + 0xc0) + 8);
    do {
      if (*puVar4 == uVar2) {
        return *(undefined8 *)(puVar4 + -2);
      }
      puVar4 = puVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}




void FUN_100532d18(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (*(uint *)(param_1 + 0xb8) != 0) {
    lVar2 = 0;
    lVar1 = 0;
    plVar3 = *(long **)(param_1 + 0xc0);
    do {
      if (*plVar3 == param_2) {
        if ((int)lVar2 == 1) {
          return;
        }
        lVar1 = (long)*(long **)(param_1 + 0xc0) + (lVar1 >> 0x1c);
        FUN_10053866c(param_1 + 0xb8,lVar1,lVar1 + 0x10);
        return;
      }
      lVar1 = lVar1 + 0x100000000;
      lVar2 = lVar2 + -1;
      plVar3 = plVar3 + 2;
    } while (-lVar2 != (ulong)*(uint *)(param_1 + 0xb8));
  }
  return;
}




void FUN_100532d78(long param_1,long param_2)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  
  if (*(uint *)(param_1 + 0xb8) != 0) {
    lVar4 = 0;
    lVar5 = 0;
    plVar6 = *(long **)(param_1 + 0xc0);
    do {
      if (*plVar6 == param_2) {
        if ((int)lVar4 == 1) {
          return;
        }
        FUN_100644aec(auStack_60,DAT_101d91894,param_1);
        FUN_100644c34(*plVar6,auStack_60,1);
        lVar4 = DAT_101dbd2f8;
        if (*(char *)((long)plVar6 + 0xe) == '\0') {
          FUN_1006423ec(*plVar6,1);
        }
        else {
          uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
          puVar1 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
          if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
            uVar3 = 0xffff;
          }
          else {
            uVar3 = *puVar1;
          }
          *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
          *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
          FUN_10063ee9c(puVar1);
          *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5380;
          *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
          FUN_100642b14(*plVar6,puVar1);
        }
        lVar5 = *(long *)(param_1 + 0xc0) + (lVar5 >> 0x1c);
        FUN_10053866c(param_1 + 0xb8,lVar5,lVar5 + 0x10);
        if (*(int *)(param_1 + 0xb8) != 0) {
          FUN_100532868(param_1,*(long *)(param_1 + 0xc0) +
                                (ulong)(*(int *)(param_1 + 0xb8) - 1) * 0x10);
          return;
        }
        iVar2 = FUN_100642d08(param_1 + 200);
        if (iVar2 != 0) {
          FUN_1006423ec(param_1 + 200,1);
        }
        FUN_100644aec(auStack_80,DAT_101d918a0,0);
        FUN_100644c34(param_1,auStack_80,1);
        return;
      }
      lVar5 = lVar5 + 0x100000000;
      plVar6 = plVar6 + 2;
      lVar4 = lVar4 + -1;
    } while (-lVar4 != (ulong)*(uint *)(param_1 + 0xb8));
  }
  return;
}




undefined4 FUN_100532f24(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb8);
}




void FUN_100532f2c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_100532ca4();
  if (lVar1 != 0) {
    FUN_100532d78(param_1,lVar1);
    return;
  }
  return;
}




undefined8 FUN_100532f64(long param_1)

{
  if (*(int *)(param_1 + 0xb8) != 0) {
    return **(undefined8 **)(param_1 + 0xc0);
  }
  return 0;
}




void FUN_100532f80(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  FUN_10064e47c(param_1 + 200);
  uVar1 = (ulong)*(uint *)(param_1 + 0xb8);
  if (*(uint *)(param_1 + 0xb8) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0xc0) + lVar2 + 0xd) != '\0') {
        FUN_10064e6d8(0,0,*(undefined8 *)(*(long *)(param_1 + 0xc0) + lVar2),8);
        uVar1 = (ulong)*(uint *)(param_1 + 0xb8);
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar3 < uVar1);
  }
  return;
}




undefined8 FUN_100532ff4(undefined8 param_1)

{
  undefined8 *puVar1;
  code *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  puStack_48 = (undefined8 *)FUN_1006421a8();
  *puStack_48 = &PTR_thunk_FUN_100533140_10149fc08;
  puStack_48[0x11] = 0;
  local_28 = DAT_101d91890;
  local_50 = FUN_1005330e4;
  puVar1 = puStack_48 + 1;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  FUN_10001554c(puVar1,&local_50);
  local_28 = DAT_101d91894;
  local_50 = FUN_100533118;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  puStack_48 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&local_50);
  local_28 = DAT_101d91898;
  local_50 = FUN_100533128;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  puStack_48 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&local_50);
  local_28 = DAT_101d9189c;
  local_50 = FUN_100533134;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  puStack_48 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&local_50);
  return param_1;
}




void FUN_1005330e4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_100644b2c(param_4);
  param_1[0x11] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x000100533114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1);
  return;
}




void FUN_100533118(long *param_1)

{
  param_1[0x11] = 0;
                    /* WARNING: Could not recover jumptable at 0x000100533124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))();
  return;
}




void FUN_100533128(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100533130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x100))();
  return;
}




void FUN_100533134(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010053313c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))();
  return;
}




void FUN_100533140(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100533140_10149fc08;
  if (param_1[0x11] != 0) {
    FUN_100532d18(param_1[0x11],param_1);
  }
  FUN_10064221c(param_1);
  return;
}




void thunk_FUN_100533140(void)

{
  FUN_100533140();
  return;
}




void FUN_100533180(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100533140();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100533194(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}




void FUN_10053319c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100530430(param_1,0);
  *puVar1 = &PTR_thunk_FUN_100530784_10149fd28;
  *(undefined8 *)(param_1 + 0x534) = DAT_101dc1cb8;
  *(undefined8 *)(param_1 + 0x544) = 0x43fa0000;
  *(undefined8 *)(param_1 + 0x54c) = 0xffffffff00000000;
  *(undefined4 *)((long)puVar1 + 0x554) = 0;
  return;
}




void thunk_FUN_100530784(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100530784_10149f6e8;
  FUN_1006415a8();
  param_1[0x2e] = &PTR_FUN_10149f870;
  param_1[0x7b] = &PTR_FUN_1014a7108;
  param_1[0x92] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x95);
  FUN_10064e2bc(param_1 + 0x7b);
  param_1[0x5d] = &PTR_FUN_1014a7108;
  param_1[0x74] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x77);
  FUN_10064e2bc(param_1 + 0x5d);
  param_1[0x3f] = &PTR_FUN_1014a7108;
  param_1[0x56] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x59);
  FUN_10064e2bc(param_1 + 0x3f);
  FUN_10064221c(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1005331f8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100530784();
  operator_delete(pvVar1);
  return;
}




void FUN_10053320c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_101dc1cb8;
  *(undefined8 *)(param_1 + 0x4d8) = DAT_101dc1cb8;
  *(undefined8 *)(param_1 + 0x4e0) = uVar1;
  *(undefined8 *)(param_1 + 0x500) = uVar1;
  *(ushort *)(param_1 + 0x530) = *(ushort *)(param_1 + 0x530) & 0xffb0;
  *(undefined8 *)(param_1 + 0x53c) = uVar1;
  *(undefined4 *)(param_1 + 0x548) = 0;
  return;
}




void FUN_100533244(long *param_1)

{
  (**(code **)(*param_1 + 0x138))();
  param_1[0x9f] = param_1[0x9d];
  FUN_100530954(0,param_1);
  *(undefined8 *)((long)param_1 + 0x534) = DAT_101dc1cb8;
  if (*(float *)((long)param_1 + 0x44) != 0.0) {
    *(undefined4 *)((long)param_1 + 0x44) = 0;
    FUN_1000200a0(param_1);
  }
  *(undefined8 *)((long)param_1 + 0x54c) = 0xffffffff;
  return;
}




void FUN_1005332b4(undefined8 param_1,long *param_2)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  undefined4 uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float local_80;
  float fStack_7c;
  
  fVar20 = (float)param_1;
  if ((*(byte *)(param_2 + 0xa6) >> 6 & 1) != 0) {
    fVar10 = *(float *)(param_2 + 0x9b);
    lVar7 = FUN_10003d5bc(param_2);
    fVar14 = 1.0;
    fVar21 = 1.0;
    if (0.0 < *(float *)(lVar7 + 0x10)) {
      lVar7 = FUN_10003d5bc(param_2);
      fVar21 = *(float *)(lVar7 + 0x10);
    }
    fVar12 = *(float *)((long)param_2 + 0x4dc);
    lVar7 = FUN_10003d5bc(param_2);
    if (0.0 < *(float *)(lVar7 + 0x14)) {
      lVar7 = FUN_10003d5bc(param_2);
      fVar14 = *(float *)(lVar7 + 0x14);
    }
    fVar18 = (float)DAT_101dc1cb8;
    fVar17 = DAT_101dc1cb8._4_4_;
    if (0.0 < fVar20) {
      fVar18 = fVar10 / (fVar21 * fVar20);
      fVar17 = fVar12 / (fVar14 * fVar20);
    }
    *(float *)(param_2 + 0xa0) = fVar18;
    *(float *)((long)param_2 + 0x504) = fVar17;
    if ((*(byte *)((long)param_2 + 0x531) & 1) == 0) {
      bVar2 = false;
    }
    else {
      fVar14 = *(float *)((long)param_2 + 0x44);
      fVar10 = (float)FUN_1005311e8((int)param_2[8],param_2);
      bVar2 = false;
      uVar16 = NEON_fmov(0x3f800000,4);
      uVar19 = NEON_fmov(0xbf800000,4);
      uVar13 = uVar16 ^ (uVar16 ^ uVar19) & CONCAT44(-(uint)(fVar14 < 0.0),-(uint)(fVar10 < 0.0));
      fVar21 = (float)param_2[0xa0];
      fVar12 = (float)((ulong)param_2[0xa0] >> 0x20);
      uVar16 = uVar16 ^ (uVar16 ^ uVar19) & CONCAT44(-(uint)(fVar12 < 0.0),-(uint)(fVar21 < 0.0));
      uVar13 = CONCAT44(ABS(fVar14) / *(float *)(param_2 + 0xa4),
                        ABS(fVar10) / *(float *)(param_2 + 0xa4)) &
               CONCAT44(-(uint)((float)(uVar13 >> 0x20) == (float)(uVar16 >> 0x20)),
                        -(uint)((float)uVar13 == (float)uVar16));
      uVar8 = NEON_fminnm(CONCAT44((float)((ulong)DAT_101873a38 >> 0x20) - (float)(uVar13 >> 0x20),
                                   (float)DAT_101873a38 - (float)uVar13),DAT_101873a38,4);
      uVar8 = NEON_fmaxnm(CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8),uVar8,4);
      param_2[0xa0] = CONCAT44((float)((ulong)uVar8 >> 0x20) * fVar12,(float)uVar8 * fVar21);
    }
    goto LAB_100533750;
  }
  fVar10 = (float)_powf(*(undefined4 *)((long)param_2 + 0x50c),param_1);
  param_2[0xa0] =
       CONCAT44((float)((ulong)param_2[0xa0] >> 0x20) * fVar10,(float)param_2[0xa0] * fVar10);
  fVar14 = *(float *)((long)param_2 + 0x44);
  fVar10 = (float)FUN_1005311e8((int)param_2[8],param_2);
  fVar21 = ABS(fVar10);
  if ((*(byte *)((long)param_2 + 0x531) & 1) == 0) {
    bVar2 = false;
  }
  else {
    fVar12 = ABS(fVar14);
    bVar2 = false;
    bVar4 = false;
    if (fVar21 < 1.0) {
      bVar2 = false;
      bVar4 = true;
      if (!NAN(fVar12)) {
        bVar2 = fVar12 < 1.0;
        bVar4 = false;
      }
    }
    if (bVar2 == bVar4) {
      fVar18 = *(float *)((long)param_2 + 0x524);
      fVar17 = *(float *)(param_2 + 0xa5);
      if (fVar10 <= 0.0) {
        if (fVar10 < 0.0) {
          bVar2 = 0.0 <= *(float *)(param_2 + 0xa0);
          fVar10 = *(float *)(param_2 + 0xa0) + fVar21 * fVar17 * fVar20;
          if (bVar2) {
            fVar10 = fVar18 * fVar21;
          }
          goto LAB_1005334a0;
        }
        bVar2 = false;
      }
      else {
        fVar11 = *(float *)(param_2 + 0xa0);
        fVar10 = fVar11 - fVar21 * fVar17 * fVar20;
        if (fVar11 <= 0.0) {
          fVar10 = fVar18 * -fVar21;
        }
        bVar2 = fVar11 <= 0.0;
LAB_1005334a0:
        *(float *)(param_2 + 0xa0) = fVar10;
      }
      if (fVar14 <= 0.0) {
        if (0.0 <= fVar14) goto LAB_10053350c;
        fVar10 = *(float *)((long)param_2 + 0x504) + fVar12 * fVar17 * fVar20;
        if (0.0 <= *(float *)((long)param_2 + 0x504)) {
          bVar2 = true;
          fVar10 = fVar18 * fVar12;
        }
      }
      else {
        fVar10 = *(float *)((long)param_2 + 0x504) - fVar12 * fVar17 * fVar20;
        if (*(float *)((long)param_2 + 0x504) <= 0.0) {
          bVar2 = true;
          fVar10 = fVar18 * -fVar12;
        }
      }
      *(float *)((long)param_2 + 0x504) = fVar10;
    }
    else {
      bVar2 = false;
    }
  }
LAB_10053350c:
  fVar14 = ABS(fVar14);
  fVar10 = *(float *)(param_2 + 0xa7);
  bVar4 = false;
  if ((fVar10 == DAT_101dc1cb8._4_4_) &&
     (bVar4 = false, !NAN(*(float *)((long)param_2 + 0x534)) && !NAN((float)DAT_101dc1cb8))) {
    bVar4 = *(float *)((long)param_2 + 0x534) == (float)DAT_101dc1cb8;
  }
  bVar3 = false;
  bVar5 = false;
  if (!bVar4) {
    bVar3 = false;
    bVar5 = true;
    if (!NAN(fVar21)) {
      bVar3 = fVar21 < 1.0;
      bVar5 = false;
    }
  }
  bVar4 = false;
  bVar6 = false;
  if (bVar3 != bVar5) {
    bVar4 = false;
    bVar6 = true;
    if (!NAN(fVar14)) {
      bVar4 = fVar14 < 1.0;
      bVar6 = false;
    }
  }
  if (bVar4 != bVar6) {
    fVar12 = (float)FUN_1005338a4(param_2);
    bVar4 = false;
    if ((fVar12 == (float)DAT_101dc1cb8) &&
       (bVar4 = false, !NAN(fVar10) && !NAN(DAT_101dc1cb8._4_4_))) {
      bVar4 = fVar10 == DAT_101dc1cb8._4_4_;
    }
    if (!bVar4) {
      fVar18 = *(float *)(param_2 + 0xa5);
      if (fVar12 <= 0.0) {
        if (fVar12 < 0.0) {
          fVar12 = ABS(fVar12);
          if (0.0 <= *(float *)(param_2 + 0xa0)) goto LAB_1005335a0;
          fVar12 = *(float *)(param_2 + 0xa0) + fVar12 * fVar18 * fVar20;
          goto LAB_1005335a8;
        }
      }
      else {
        if (*(float *)(param_2 + 0xa0) <= 0.0) {
          fVar12 = -ABS(fVar12);
LAB_1005335a0:
          fVar12 = *(float *)((long)param_2 + 0x524) * fVar12;
          bVar2 = true;
        }
        else {
          fVar12 = *(float *)(param_2 + 0xa0) - ABS(fVar12) * fVar18 * fVar20;
        }
LAB_1005335a8:
        *(float *)(param_2 + 0xa0) = fVar12;
      }
      if (fVar10 <= 0.0) {
        if (0.0 <= fVar10) goto LAB_100533600;
        fVar10 = ABS(fVar10);
        if (0.0 <= *(float *)((long)param_2 + 0x504)) goto LAB_1005335f4;
        fVar10 = *(float *)((long)param_2 + 0x504) + fVar10 * fVar18 * fVar20;
      }
      else if (*(float *)((long)param_2 + 0x504) <= 0.0) {
        fVar10 = -ABS(fVar10);
LAB_1005335f4:
        fVar10 = *(float *)((long)param_2 + 0x524) * fVar10;
        bVar2 = true;
      }
      else {
        fVar10 = *(float *)((long)param_2 + 0x504) - ABS(fVar10) * fVar18 * fVar20;
      }
      *(float *)((long)param_2 + 0x504) = fVar10;
    }
  }
LAB_100533600:
  if ((((*(byte *)(param_2 + 0xa6) >> 4 & 1) != 0) && (fVar21 < 10.0)) &&
     (ABS(*(float *)(param_2 + 0xa0)) < 10.0)) {
    *(undefined4 *)(param_2 + 0xa0) = 0;
    *(undefined4 *)((long)param_2 + 0x53c) = 0;
    iVar9 = *(int *)((long)param_2 + 0x54c);
    if (iVar9 != (int)param_2[0xaa]) {
      uVar8 = FUN_100644a94("EVENT_SCROLLING_FINISHED");
      FUN_100644aec(&local_80,uVar8,(int)param_2[0xaa]);
      FUN_100644c34(param_2,&local_80,1);
      iVar9 = (int)param_2[0xaa];
      *(int *)((long)param_2 + 0x54c) = iVar9;
      *(undefined4 *)(param_2 + 0xaa) = 0xffffffff;
    }
    if ((iVar9 != -1) &&
       (fVar10 = *(float *)((long)param_2 + 0x534) * -(float)iVar9,
       *(float *)(param_2 + 8) != fVar10)) {
      *(float *)(param_2 + 8) = fVar10;
      FUN_1000200a0(param_2);
    }
  }
  if ((((*(byte *)(param_2 + 0xa6) >> 5 & 1) != 0) && (fVar14 < 10.0)) &&
     (ABS(*(float *)((long)param_2 + 0x504)) < 10.0)) {
    *(undefined4 *)((long)param_2 + 0x504) = 0;
    *(undefined4 *)(param_2 + 0xa8) = 0;
    iVar9 = *(int *)((long)param_2 + 0x54c);
    if (iVar9 != (int)param_2[0xaa]) {
      uVar8 = FUN_100644a94("EVENT_SCROLLING_FINISHED");
      FUN_100644aec(&local_80,uVar8,(int)param_2[0xaa]);
      FUN_100644c34(param_2,&local_80,1);
      iVar9 = (int)param_2[0xaa];
      *(int *)((long)param_2 + 0x54c) = iVar9;
      *(undefined4 *)(param_2 + 0xaa) = 0xffffffff;
    }
    if ((iVar9 != -1) &&
       (*(float *)((long)param_2 + 0x44) != *(float *)(param_2 + 0xa7) * -(float)iVar9)) {
      *(float *)((long)param_2 + 0x44) = *(float *)(param_2 + 0xa7) * -(float)iVar9;
      FUN_1000200a0(param_2);
    }
  }
LAB_100533750:
  uVar1 = *(ushort *)(param_2 + 0xa6);
  if ((uVar1 >> 4 & 1) == 0) {
    *(undefined4 *)(param_2 + 0xa0) = 0;
  }
  uVar15 = 0;
  if ((uVar1 >> 5 & 1) != 0) {
    uVar15 = *(undefined4 *)((long)param_2 + 0x504);
  }
  fVar10 = *(float *)(param_2 + 0xa1);
  fVar14 = -fVar10;
  NEON_fminnm((int)param_2[0xa0],fVar10);
  NEON_fminnm(uVar15,fVar10);
  *(float *)(param_2 + 0xa0) = fVar14;
  *(float *)((long)param_2 + 0x504) = fVar14;
  fVar20 = (float)NEON_fminnm(fVar20,0x3dcccccd);
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  local_80 = *(float *)(param_2 + 8) + fVar20 * fVar14;
  fStack_7c = *(float *)((long)param_2 + 0x44) + fVar20 * fVar14;
  if ((uVar1 >> 8 & 1) == 0) {
    (**(code **)(*param_2 + 0x148))(param_2,&local_80);
  }
  FUN_1005312d0(local_80,fStack_7c,param_2);
  if (bVar2) {
    fVar20 = fStack_7c;
    fVar10 = (float)FUN_1005311e8(local_80,param_2);
    if (((0.0 < fVar10) && (fVar10 < 1.0)) || ((fVar10 < 0.0 && (-1.0 < fVar10)))) {
      *(undefined4 *)(param_2 + 0xa0) = 0;
    }
    if (((0.0 < fVar20) && (fVar20 < 1.0)) || ((fVar20 < 0.0 && (-1.0 < fVar20)))) {
      *(undefined4 *)((long)param_2 + 0x504) = 0;
    }
  }
  if (((*(byte *)((long)param_2 + 0x531) >> 1 & 1) != 0) &&
     (FUN_10053143c(0x3f000000,param_2 + 0x2e,*(float *)((long)param_2 + 0x504) != 0.0),
     0.0 < (float)(*(uint *)((long)param_2 + 500) >> 7 & 0xff) * 0.003921569)) {
    FUN_100531584(param_2);
  }
  return;
}




float FUN_1005338a4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_60 [32];
  
  uVar2 = FUN_100642d08();
  fVar5 = (float)DAT_101dc1cb8;
  if ((uVar2 & 1) != 0) {
    fVar5 = *(float *)(param_1 + 0x40);
    if ((*(ushort *)(param_1 + 0x530) >> 4 & 1) == 0) {
      fVar6 = 0.0;
      if (((*(ushort *)(param_1 + 0x530) >> 5 & 1) != 0) && (*(int *)(param_1 + 0x550) == -1)) {
        uVar4 = (uint)(-*(float *)(param_1 + 0x44) / *(float *)(param_1 + 0x538));
        if ((int)*(uint *)(param_1 + 0x554) <= (int)uVar4) {
          uVar4 = *(uint *)(param_1 + 0x554);
        }
        uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
        if (uVar4 != *(uint *)(param_1 + 0x54c)) {
          uVar3 = FUN_100644a94("EVENT_SCROLLING_TO_PAGE");
          FUN_100644aec(auStack_60,uVar3,uVar4);
          FUN_100644c34(param_1,auStack_60,1);
        }
        *(uint *)(param_1 + 0x550) = uVar4;
      }
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x550);
      if (uVar4 == 0xffffffff) {
        uVar4 = (uint)(-fVar5 / *(float *)(param_1 + 0x534));
        uVar1 = *(int *)(param_1 + 0x554) - 1;
        if ((int)uVar1 <= (int)uVar4) {
          uVar4 = uVar1;
        }
        uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
        if (uVar4 != *(uint *)(param_1 + 0x54c)) {
          uVar3 = FUN_100644a94("EVENT_SCROLLING_TO_PAGE");
          FUN_100644aec(auStack_60,uVar3,uVar4);
          FUN_100644c34(param_1,auStack_60,1);
        }
        *(uint *)(param_1 + 0x550) = uVar4;
      }
      fVar6 = -*(float *)(param_1 + 0x534) * (float)(int)uVar4;
    }
    fVar5 = fVar5 - fVar6;
  }
  return fVar5;
}




void FUN_100533a08(long *param_1,long *param_2)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar5 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if ((((uVar5 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) &&
     (uVar2 = *(ushort *)(param_1 + 0xa6), (uVar2 & 0x30) != 0)) {
    fVar6 = *(float *)((long)param_2 + 0x34);
    fVar7 = ABS(*(float *)(param_2 + 6));
    if ((0.001 <= fVar7) || (0.001 <= ABS(fVar6))) {
      fVar8 = *(float *)(param_1 + 0xa9);
      bVar3 = true;
      bVar4 = false;
      if (fVar8 <= 2.0) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar8)) {
          bVar3 = fVar8 < -2.0;
          bVar4 = false;
        }
      }
      if (bVar3 != bVar4) {
        (**(code **)(*param_1 + 0x138))(param_1);
        if (-0.001 <= fVar8) {
          if (fVar8 <= 0.001) {
            return;
          }
          iVar1 = (int)param_1[0xaa];
          if (iVar1 == -1) {
            iVar1 = *(int *)((long)param_1 + 0x54c);
          }
          else {
            *(int *)((long)param_1 + 0x54c) = iVar1;
          }
          iVar1 = iVar1 + -1;
        }
        else {
          iVar1 = (int)param_1[0xaa];
          if (iVar1 == -1) {
            iVar1 = *(int *)((long)param_1 + 0x54c);
          }
          else {
            *(int *)((long)param_1 + 0x54c) = iVar1;
          }
          iVar1 = iVar1 + 1;
        }
        FUN_100533bac(param_1,iVar1,0);
        return;
      }
      if (((uVar2 >> 4 & 1) != 0) &&
         ((0.001 <= fVar7 || (ABS(fVar6) < 0.001 || (uVar2 & 0x20) != 0)))) {
        fVar6 = *(float *)(param_2 + 6);
      }
      *(float *)(param_1 + 0xa9) = fVar8 + fVar6;
    }
  }
  return;
}




void FUN_100533b64(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x550);
  if (iVar1 == -1) {
    iVar1 = *(int *)(param_1 + 0x54c);
  }
  else {
    *(int *)(param_1 + 0x54c) = iVar1;
  }
  FUN_100533bac(param_1,iVar1 + 1,0);
  return;
}




void FUN_100533b88(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x550);
  if (iVar1 == -1) {
    iVar1 = *(int *)(param_1 + 0x54c);
  }
  else {
    *(int *)(param_1 + 0x54c) = iVar1;
  }
  FUN_100533bac(param_1,iVar1 + -1,0);
  return;
}




void FUN_100533bac(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_40 [32];
  
  uVar1 = *(int *)(param_1 + 0x554) - 1;
  if (*(int *)(param_1 + 0x554) < 1) {
    return;
  }
  if ((int)uVar1 <= (int)param_2) {
    param_2 = uVar1;
  }
  param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x550) = param_2;
  if (param_3 == 0) {
    uVar3 = FUN_100644a94("EVENT_SCROLLING_TO_PAGE");
    FUN_100644aec(auStack_40,uVar3,*(undefined4 *)(param_1 + 0x550));
    FUN_100644c34(param_1,auStack_40,1);
    return;
  }
  if ((*(ushort *)(param_1 + 0x530) >> 4 & 1) == 0) {
    fVar4 = 0.0;
    if ((*(ushort *)(param_1 + 0x530) >> 5 & 1) != 0) {
      fVar5 = *(float *)(param_1 + 0x538) * -(float)(int)param_2;
      goto LAB_100533c48;
    }
  }
  else {
    fVar4 = *(float *)(param_1 + 0x534) * -(float)(int)param_2;
  }
  fVar5 = 0.0;
LAB_100533c48:
  bVar2 = false;
  if ((*(float *)(param_1 + 0x40) == fVar4) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x44)) && !NAN(fVar5))) {
    bVar2 = *(float *)(param_1 + 0x44) == fVar5;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x40) = fVar4;
    *(float *)(param_1 + 0x44) = fVar5;
    FUN_1000200a0(param_1);
  }
  uVar3 = FUN_100644a94("EVENT_SCROLLING_FINISHED");
  FUN_100644aec(auStack_40,uVar3,*(undefined4 *)(param_1 + 0x550));
  FUN_100644c34(param_1,auStack_40,1);
  *(undefined4 *)(param_1 + 0x550) = 0xffffffff;
  return;
}




void FUN_100533ca8(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  FUN_10053191c();
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar3 & 1) == 0) && (DAT_101dbd4d8 != DAT_101dbd450)) {
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x500);
  *(undefined8 *)(param_1 + 0x53c) = uVar5;
  if ((*(ushort *)(param_1 + 0x530) >> 4 & 1) == 0) {
    if ((*(ushort *)(param_1 + 0x530) >> 5 & 1) == 0) {
      return;
    }
    fVar6 = (float)((ulong)uVar5 >> 0x20);
    if (fVar6 < -*(float *)(param_1 + 0x544)) {
      iVar1 = *(int *)(param_1 + 0x550);
      if (iVar1 == -1) {
        iVar1 = *(int *)(param_1 + 0x54c);
      }
      else {
        *(int *)(param_1 + 0x54c) = iVar1;
      }
      uVar4 = iVar1 + 1;
    }
    else {
      if (fVar6 <= *(float *)(param_1 + 0x544)) goto LAB_100533db8;
      iVar1 = *(int *)(param_1 + 0x550);
      if (iVar1 == -1) {
        iVar1 = *(int *)(param_1 + 0x54c);
      }
      else {
        *(int *)(param_1 + 0x54c) = iVar1;
      }
      uVar4 = iVar1 - 1;
    }
  }
  else {
    if (-*(float *)(param_1 + 0x544) <= (float)uVar5) {
      if ((float)uVar5 <= *(float *)(param_1 + 0x544)) {
LAB_100533db8:
        *(undefined4 *)(param_1 + 0x550) = 0xffffffff;
        return;
      }
      fVar6 = *(float *)(param_1 + 0x40);
      fVar7 = *(float *)(param_1 + 0x534);
      fVar8 = 0.5;
    }
    else {
      fVar6 = *(float *)(param_1 + 0x40);
      fVar7 = *(float *)(param_1 + 0x534);
      fVar8 = -0.5;
    }
    uVar4 = (uint)((-(fVar7 * fVar8) - fVar6) / fVar7);
    uVar2 = *(int *)(param_1 + 0x554) - 1;
    if ((int)uVar2 <= (int)uVar4) {
      uVar4 = uVar2;
    }
    uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  }
  FUN_100533bac(param_1,uVar4,0);
  return;
}




long FUN_100533dfc(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *(uint *)((long)puVar2 + 0x84) = *(uint *)((long)puVar2 + 0x84) | 0x10;
  *puVar2 = &PTR_thunk_FUN_10064e2bc_10149feb8;
  *(undefined4 *)(puVar2 + 0x19) = 0;
  puVar2[0x1a] = 0;
  bVar1 = false;
  if ((*(float *)((long)puVar2 + 0x54) == 0.0) && (bVar1 = false, !NAN(*(float *)(puVar2 + 10)))) {
    bVar1 = *(float *)(puVar2 + 10) == 0.0;
  }
  if (!bVar1) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    FUN_1000200a0(param_1);
  }
  return param_1;
}




void FUN_100533e68(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




void FUN_100533e7c(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1004d2524();
  FUN_100015208(param_1,uVar1,0x12345678);
  return;
}




undefined4 FUN_100533eac(void)

{
  undefined1 local_18 [4];
  undefined4 local_14;
  
  FUN_100641464(&local_14,local_18);
  return local_14;
}




void FUN_100533ed8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined **local_68 [4];
  long local_48;
  
  lVar2 = FUN_100534258();
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 200);
    if (*(int *)(param_1 + 0x270) != iVar1) {
      for (lVar3 = *(long *)(param_1 + 600); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0xb8)) {
        if (*(int *)(lVar3 + 200) == *(int *)(param_1 + 0x270)) {
          FUN_100644ad0(local_68,DAT_101d918a8,0);
          local_68[0] = &PTR_FUN_1014a0bd8;
          local_48 = lVar3;
          FUN_100644c34(lVar3,local_68,0);
          FUN_10053446c(0x3e800000,lVar3,0);
          FUN_1005343bc(0x3e800000,param_1);
          break;
        }
      }
      *(int *)(param_1 + 0x270) = iVar1;
      FUN_100644ad0(local_68,DAT_101d918ac,0);
      local_68[0] = &PTR_FUN_1014a0bd8;
      local_48 = lVar2;
      FUN_100644c34(lVar2,local_68,0);
      FUN_100534364(lVar2,1,param_3);
    }
  }
  return;
}




undefined4 FUN_100533fdc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x270);
}




bool FUN_100533fe4(long param_1)

{
  if (*(long *)(param_1 + 0xd0) != 0) {
    return *(int *)(*(long *)(param_1 + 0xd0) + 0x270) == *(int *)(param_1 + 200);
  }
  return false;
}




long * FUN_100534008(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_thunk_FUN_100534090_1014a0000;
  FUN_1006421a8(puVar1 + 0x11);
  param_1[0x11] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_10064f204(param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4e) = DAT_101867618;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x11,1);
  return param_1;
}




long * thunk_FUN_100534008(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_thunk_FUN_100534090_1014a0000;
  FUN_1006421a8(puVar1 + 0x11);
  param_1[0x11] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_10064f204(param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4e) = DAT_101867618;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x11,1);
  return param_1;
}




void FUN_100534090(undefined8 *param_1)

{
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_thunk_FUN_100534090_1014a0000;
  pcStack_28 = FUN_1005386e8;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x22] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x39);
  FUN_10064e2bc(param_1 + 0x22);
  FUN_10064221c(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void thunk_FUN_100534090(undefined8 *param_1)

{
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR_thunk_FUN_100534090_1014a0000;
  pcStack_28 = FUN_1005386e8;
  puStack_30 = param_1;
  FUN_100643a8c(&puStack_30);
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x22] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x39);
  FUN_10064e2bc(param_1 + 0x22);
  FUN_10064221c(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_10053411c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100534090();
  operator_delete(pvVar1);
  return;
}




void FUN_100534130(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x260);
  *(undefined8 *)(param_3 + 0xb8) = 0;
  *(long *)(param_3 + 0xc0) = lVar4;
  plVar1 = (long *)(param_1 + 600);
  if (*(long *)(param_1 + 600) != 0) {
    plVar1 = (long *)(lVar4 + 0xb8);
  }
  *plVar1 = param_3;
  *(long *)(param_1 + 0x260) = param_3;
  *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x268) + 1;
  FUN_100642bd8(param_1 + 0x88,param_3,1);
  uVar2 = FUN_1004d2524(param_2);
  uVar2 = FUN_100015208(param_2,uVar2,0x12345678);
  *(undefined4 *)(param_3 + 200) = uVar2;
  *(long *)(param_3 + 0xd0) = param_1;
  uVar3 = *(uint *)(param_3 + 0x84);
  if ((uVar3 & 0x7f80) == 0) {
    uVar3 = uVar3 & 0xfffffffb;
  }
  else {
    *(uint *)(param_3 + 0x84) = uVar3 & 0xffff807b;
    FUN_1000200a0(param_3);
    uVar3 = *(uint *)(param_3 + 0x84);
  }
  *(uint *)(param_3 + 0x84) = uVar3 & 0xfffffff7;
  return;
}




void FUN_1005341f4(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100534258();
  if (lVar1 != 0) {
    FUN_1006423ec(lVar1,1);
    *(undefined8 *)(lVar1 + 0xd0) = 0;
    FUN_1005342b4(param_1 + 600,lVar1);
    FUN_1006415a8(param_1);
    if (*(int *)(param_1 + 0x270) == *(int *)(lVar1 + 200)) {
      *(undefined4 *)(param_1 + 0x270) = DAT_101867618;
    }
  }
  return;
}




void FUN_100534258(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  uVar1 = FUN_1004d2524(param_2);
  iVar2 = FUN_100015208(param_2,uVar1,0x12345678);
  for (lVar3 = *(long *)(param_1 + 600); (lVar3 != 0 && (*(int *)(lVar3 + 200) != iVar2));
      lVar3 = *(long *)(lVar3 + 0xb8)) {
  }
  return;
}




void FUN_1005342b4(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0xb8);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0xc0);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0xb8) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0xc0);
    *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
    *(long *)(*(long *)(param_2 + 0xb8) + 0xc0) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_100534314(long param_1)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 600); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0xb8)) {
    *(undefined8 *)(lVar1 + 0xd0) = 0;
  }
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  FUN_1006415a8(param_1);
  *(undefined4 *)(param_1 + 0x270) = DAT_101867618;
  return;
}




void FUN_100534364(long param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_2 == 0) {
    if (param_3 != 0) {
      FUN_10053446c(0x3e800000,param_1,0);
      return;
    }
    FUN_1005347fc(param_1,0);
    return;
  }
  if (param_3 != 0) {
    FUN_10053446c(0x3e800000,param_1,1);
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x84);
  *(uint *)(param_1 + 0x84) = uVar1 | 0xc;
  if ((~uVar1 & 0x7f80) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x84) = uVar1 | 0x7f8c;
  FUN_1000200a0();
  return;
}




void FUN_1005343bc(undefined8 param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *local_40;
  code *pcStack_38;
  
  plVar1 = param_2 + 0x22;
  iVar2 = FUN_100642d08(plVar1);
  if (iVar2 != 0) {
    FUN_1006423ec(plVar1,1);
  }
  (**(code **)(*param_2 + 0x78))(param_2,plVar1,1);
  uVar3 = FUN_100641440();
  uVar4 = FUN_10064144c();
  FUN_10064e47c(uVar3,uVar4,plVar1);
  *(uint *)((long)param_2 + 0x194) = *(uint *)((long)param_2 + 0x194) | 0x10;
  pcStack_38 = FUN_1005386e8;
  local_40 = param_2;
  FUN_100643618(param_1,&local_40,0,0);
  return;
}




void FUN_100534468(void)

{
  return;
}




void FUN_10053446c(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  FUN_100642324();
  lVar1 = DAT_101dbd2f8;
  if (param_3 == 0) {
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
      FUN_10063f0f0(puVar3);
      *(undefined ***)puVar3 = &PTR_thunk_FUN_10063eeb4_1014a5410;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_10063f0e8(param_1,puVar3);
    lVar1 = DAT_101dbd2f8;
    uVar2 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar2 == 0xffff) {
LAB_100534784:
      puVar4 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar4;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_10063ee9c(puVar4);
      *(undefined ***)puVar4 = &PTR_thunk_FUN_10063eeb4_1014a5338;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      lVar1 = DAT_101dbd2f8;
      uVar2 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
      if ((ulong)uVar2 == 0xffff) goto LAB_100534784;
      puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar4;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_10063ee9c(puVar4);
      *(undefined ***)puVar4 = &PTR_thunk_FUN_10063eeb4_1014a52a8;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      lVar1 = DAT_101dbd2f8;
      uVar2 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
      if ((ulong)uVar2 == 0xffff) goto LAB_100534784;
      puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar4;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_100640770(puVar4);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_1006407cc(puVar4,DAT_101d918b0,0);
    goto LAB_1005347d0;
  }
  *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 8;
  lVar1 = DAT_101dbd2f8;
  uVar2 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
LAB_1005345b4:
    puVar4 = (ushort *)0x0;
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
    FUN_10063ee9c(puVar3);
    *(undefined ***)puVar3 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    lVar1 = DAT_101dbd2f8;
    uVar2 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar2 == 0xffff) goto LAB_1005345b4;
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f0f0(puVar4);
    *(undefined ***)puVar4 = &PTR_thunk_FUN_10063eeb4_1014a53c8;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f0e8(param_1,puVar4);
LAB_1005347d0:
  FUN_100642b7c(param_2,puVar3);
  return;
}




void FUN_1005347fc(long param_1,int param_2)

{
  uint uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = *(uint *)(param_1 + 0x84);
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x84) = uVar1 & 0xfffffff3;
    if ((uVar1 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x84) = uVar1 & 0xffff8073;
      FUN_1000200a0(param_1);
    }
    FUN_100644aec(auStack_40,DAT_101d918b0,0);
    FUN_100644c34(param_1,auStack_40,0);
  }
  else {
    *(uint *)(param_1 + 0x84) = uVar1 | 0xc;
    if ((~uVar1 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x84) = uVar1 | 0x7f8c;
      FUN_1000200a0(param_1);
      return;
    }
  }
  return;
}




long * FUN_1005348a4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  *puVar3 = &PTR_FUN_1014a0100;
  puVar3 = puVar3 + 0x17;
  thunk_FUN_1006543ec(puVar3);
  FUN_10064e264(param_1 + 0x4b);
  plVar1 = param_1 + 0x62;
  FUN_100535668(plVar1,1);
  param_1[0x62] = (long)&PTR_thunk_FUN_100535744_1014a0d18;
  plVar2 = param_1 + 0xce;
  FUN_100535668(plVar2,0);
  param_1[0xce] = (long)&PTR_thunk_FUN_100535744_1014a0e18;
  *(byte *)(param_1 + 0x13a) = *(byte *)(param_1 + 0x13a) & 0xf0;
  *(byte *)((long)param_1 + 0x9d4) = *(byte *)((long)param_1 + 0x9d4) & 0xfc;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  FUN_100642bd8(puVar3,param_1 + 0x4b,1);
  FUN_100642bd8(puVar3,plVar1,1);
  FUN_100642bd8(puVar3,plVar2,1);
  FUN_100654488(puVar3,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  *(uint *)((long)param_1 + 0x394) = *(uint *)((long)param_1 + 0x394) & 0xfffffff7;
  *(uint *)((long)param_1 + 0x6f4) = *(uint *)((long)param_1 + 0x6f4) & 0xfffffff7;
  if ((*(float *)(param_1 + 0x6b) != (float)DAT_101e947d0) ||
     (*(float *)((long)param_1 + 0x35c) != DAT_101e947d0._4_4_)) {
    param_1[0x6b] = CONCAT44(DAT_101e947d0._4_4_,(float)DAT_101e947d0);
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0xd7) != (float)DAT_101e947d8) ||
     (*(float *)((long)param_1 + 0x6bc) != DAT_101e947d8._4_4_)) {
    param_1[0xd7] = CONCAT44(DAT_101e947d8._4_4_,(float)DAT_101e947d8);
    FUN_1000200a0(plVar2);
  }
  return param_1;
}




void FUN_100534a3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a0100;
  FUN_100535744(param_1 + 0xce);
  FUN_100535744(param_1 + 0x62);
  thunk_FUN_10064e2bc(param_1 + 0x4b);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100535744(void)

{
  FUN_100535744();
  return;
}




void thunk_FUN_100535744(void)

{
  FUN_100535744();
  return;
}




void FUN_100534a94(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100534a98);
  (*pcVar1)();
}




void FUN_100534a98(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100534a9c);
  (*pcVar1)();
}




void FUN_100534a9c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100534aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_100534aa8(long *param_1)

{
  FUN_10064e47c(param_1 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x000100534ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_100534ad8(long param_1)

{
  FUN_100642bd8(param_1 + 600);
  return;
}




void FUN_100534ae0(long param_1)

{
  FUN_100642378(param_1 + 600,1);
  return;
}




void FUN_100534aec(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100534af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_100534af8(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_70 [4];
  int local_6c;
  undefined1 auStack_68 [4];
  int local_64;
  
  fVar10 = (float)(**(code **)(*param_3 + 0x48))();
  uVar9 = (uint)fVar10;
  (**(code **)(*param_3 + 0x48))(param_3);
  uVar8 = (uint)param_2;
  fVar11 = (float)FUN_10064e3cc(param_3 + 0x17);
  fVar10 = param_2;
  FUN_100534d08(param_3);
  plVar1 = param_3 + 0x4b;
  iVar3 = FUN_10064e5a8(plVar1);
  if (iVar3 == 0) {
    fVar12 = (float)FUN_1006425d0(plVar1,0,0,0,1);
    uVar6 = (int)fVar12;
    if ((uint)(int)fVar12 <= uVar9) {
      uVar6 = uVar9;
    }
    if ((*(byte *)(param_3 + 0x13a) & 3) != 1) {
      uVar9 = uVar6;
    }
    uVar6 = (int)fVar10;
    if ((uint)(int)fVar10 <= uVar8) {
      uVar6 = uVar8;
    }
    if ((*(byte *)(param_3 + 0x13a) & 0xc) != 4) {
      uVar8 = uVar6;
    }
    fVar10 = (float)uVar8;
    FUN_10064e47c((float)uVar9,plVar1);
  }
  else {
    plVar4 = (long *)FUN_10064e5a0(plVar1);
    (**(code **)(*plVar4 + 0x30))();
    uVar5 = FUN_10064e5a0(plVar1);
    FUN_10064a8c4(uVar5,&local_64,auStack_68,&local_6c,auStack_70);
    uVar5 = (**(code **)(*plVar4 + 0x90))(plVar4,uVar9 - (local_64 + local_6c));
    uVar6 = (uint)uVar5;
    if ((uint)uVar5 <= uVar9) {
      uVar6 = uVar9;
    }
    if ((*(byte *)(param_3 + 0x13a) & 3) != 1) {
      uVar9 = uVar6;
    }
    uVar6 = (uint)((ulong)uVar5 >> 0x20);
    if (uVar6 <= uVar8) {
      uVar6 = uVar8;
    }
    if ((*(byte *)(param_3 + 0x13a) & 0xc) != 4) {
      uVar8 = uVar6;
    }
    FUN_10064e47c((float)uVar9,(float)uVar8,plVar1);
    fVar10 = 0.0;
    (**(code **)(*plVar4 + 0x28))(0,0,(float)uVar9,(float)uVar8,plVar4);
  }
  fVar12 = (float)FUN_10064e3cc(plVar1);
  bVar2 = *(byte *)(param_3 + 0x13a);
  if (((bVar2 & 3) == 2) || (((bVar2 & 3) == 0 && (fVar11 < fVar12)))) {
    bVar7 = *(byte *)((long)param_3 + 0x9d4) | 1;
  }
  else {
    bVar7 = *(byte *)((long)param_3 + 0x9d4) & 0xfe;
  }
  bVar2 = bVar2 >> 2 & 3;
  if ((bVar2 == 2) || ((bVar2 == 0 && (param_2 < fVar10)))) {
    bVar7 = bVar7 | 2;
  }
  else {
    bVar7 = bVar7 & 0xfd;
  }
  *(byte *)((long)param_3 + 0x9d4) = bVar7;
  return;
}




void FUN_100534d08(float param_1,float param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = param_2;
  iVar3 = FUN_100642d08();
  if (iVar3 != 0) {
    fVar4 = (float)FUN_10064e3cc(param_3 + 0xb8);
    fVar8 = fVar7;
    fVar5 = (float)FUN_10064259c(param_3 + 600);
    lVar1 = param_3 + 0x310;
    fVar6 = (float)FUN_10064258c(lVar1);
    fVar6 = param_1 + fVar6 * -0.5 + -10.0;
    bVar2 = false;
    if ((*(float *)(param_3 + 0x350) == fVar6) && (bVar2 = false, !NAN(*(float *)(param_3 + 0x354)))
       ) {
      bVar2 = *(float *)(param_3 + 0x354) == 10.0;
    }
    if (!bVar2) {
      *(float *)(param_3 + 0x350) = fVar6;
      *(undefined4 *)(param_3 + 0x354) = 0x41200000;
      FUN_1000200a0(lVar1);
    }
    FUN_1005352e0((fVar7 * fVar7) / fVar8 + -10.0,lVar1);
    if ((*(float *)(param_3 + 0x6b0) != 10.0) || (*(float *)(param_3 + 0x6b4) != param_2 + -10.0)) {
      *(undefined4 *)(param_3 + 0x6b0) = 0x41200000;
      *(float *)(param_3 + 0x6b4) = param_2 + -10.0;
      FUN_1000200a0(param_3 + 0x670);
    }
    FUN_1005352e0((fVar4 * fVar4) / fVar5 + -10.0,param_3 + 0x670);
    return;
  }
  return;
}




void FUN_100534e34(long param_1)

{
  FUN_10064e524(param_1 + 600);
  return;
}




void FUN_100534e3c(long param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(float *)(param_1 + 0x298) == *param_2) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x29c)) && !NAN(param_2[1]))) {
    bVar1 = *(float *)(param_1 + 0x29c) == param_2[1];
  }
  if (!bVar1) {
    *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)param_2;
    FUN_1000200a0(param_1 + 600);
    return;
  }
  return;
}




void FUN_100534e6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10064e47c(param_3 + 600);
  FUN_100534d08(param_1,param_2,param_3);
  return;
}




void FUN_100534eac(long param_1)

{
  FUN_10064e3cc(param_1 + 600);
  return;
}




long FUN_100534eb4(long param_1)

{
  return param_1 + 600;
}




void FUN_100534ebc(long param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = *param_2;
  *(byte *)(param_1 + 0x9d0) = bVar1;
  *(byte *)(param_1 + 0x9d4) =
       *(byte *)(param_1 + 0x9d4) & 0xfc | (bVar1 & 3) != 1 | ((bVar1 & 0xc) != 4) << 1;
  return;
}




void FUN_100534ef4(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_100534f14(param_1 + 0x670);
    return;
  }
  if (param_3 == 1) {
    FUN_100534f14(param_1 + 0x310);
    return;
  }
  return;
}




void FUN_100534f14(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 local_58;
  
  if (*(int *)(param_1 + 0x358) == 0) {
    lVar1 = param_1 + 0x88;
    FUN_100652cac(lVar1,param_2,"scrollbar_horiz_button_fill_top");
    lVar2 = param_1 + 0x178;
    FUN_100652cac(lVar2,param_2,"scrollbar_horiz_button_fill_middle");
    FUN_100652cac(param_1 + 0x268,param_2,"scrollbar_horiz_button_fill_bottom");
    bVar3 = false;
    if ((*(float *)(param_1 + 0xcc) == 0.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 200)))) {
      bVar3 = *(float *)(param_1 + 200) == 0.0;
    }
    if (!bVar3) {
      *(undefined8 *)(param_1 + 200) = 0;
      FUN_1000200a0(lVar1);
    }
    uVar5 = 0x3f00000000000000;
    local_58 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x88) + 0x28))(lVar1,&local_58);
    fVar4 = (float)FUN_100652e60(lVar1);
    if ((*(float *)(param_1 + 0x1b8) != fVar4) || (*(float *)(param_1 + 0x1bc) != 0.0)) {
      *(float *)(param_1 + 0x1b8) = fVar4;
      *(undefined4 *)(param_1 + 0x1bc) = 0;
      FUN_1000200a0(lVar2);
    }
    local_58 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x178) + 0x28))(lVar2,&local_58);
    fVar6 = *(float *)(param_1 + 0x1b8);
    fVar4 = (float)FUN_100652e60(lVar2);
    fVar4 = fVar4 + fVar6;
    if ((*(float *)(param_1 + 0x2a8) != fVar4) || (*(float *)(param_1 + 0x2ac) != 0.0)) {
      *(float *)(param_1 + 0x2a8) = fVar4;
      *(undefined4 *)(param_1 + 0x2ac) = 0;
LAB_100535148:
      FUN_1000200a0(param_1 + 0x268);
    }
  }
  else {
    if (*(int *)(param_1 + 0x358) != 1) goto LAB_100535168;
    lVar1 = param_1 + 0x88;
    FUN_100652cac(lVar1,param_2,"scrollbar_button_fill_top");
    lVar2 = param_1 + 0x178;
    FUN_100652cac(lVar2,param_2,"scrollbar_button_fill_middle");
    FUN_100652cac(param_1 + 0x268,param_2,"scrollbar_button_fill_bottom");
    fVar4 = 0.0;
    bVar3 = false;
    if ((*(float *)(param_1 + 0xcc) == 0.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 200)))) {
      bVar3 = *(float *)(param_1 + 200) == 0.0;
    }
    if (!bVar3) {
      *(undefined8 *)(param_1 + 200) = 0;
      FUN_1000200a0(lVar1);
    }
    uVar5 = 0x3f000000;
    local_58 = 0x3f000000;
    (**(code **)(*(long *)(param_1 + 0x88) + 0x28))(lVar1,&local_58);
    FUN_100652e60(lVar1);
    bVar3 = false;
    if ((*(float *)(param_1 + 0x1b8) == 0.0) &&
       (bVar3 = false, !NAN(*(float *)(param_1 + 0x1bc)) && !NAN(fVar4))) {
      bVar3 = *(float *)(param_1 + 0x1bc) == fVar4;
    }
    if (!bVar3) {
      *(undefined4 *)(param_1 + 0x1b8) = 0;
      *(float *)(param_1 + 0x1bc) = fVar4;
      FUN_1000200a0(lVar2);
    }
    local_58 = 0x3f000000;
    (**(code **)(*(long *)(param_1 + 0x178) + 0x28))(lVar2,&local_58);
    fVar6 = *(float *)(param_1 + 0x1bc);
    FUN_100652e60(lVar2);
    fVar4 = fVar4 + fVar6;
    if ((*(float *)(param_1 + 0x2a8) != 0.0) || (*(float *)(param_1 + 0x2ac) != fVar4)) {
      *(undefined4 *)(param_1 + 0x2a8) = 0;
      *(float *)(param_1 + 0x2ac) = fVar4;
      goto LAB_100535148;
    }
  }
  local_58 = uVar5;
  (**(code **)(*(long *)(param_1 + 0x268) + 0x28))((long *)(param_1 + 0x268),&local_58);
LAB_100535168:
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 8;
  return;
}




void FUN_100535190(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  
  if (param_3 == 0) {
    if (((*(byte *)(param_2 + 0x35c) >> 1 & 1) == 0) &&
       ((float)(*(uint *)(param_2 + 0x84) >> 7 & 0xff) * 0.003921569 < 0.4)) {
      return;
    }
    FUN_100642324(param_2);
    uVar1 = *(uint *)(param_2 + 0x84);
    if ((uVar1 & 0x7f80) != 0x3280) {
      *(uint *)(param_2 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x3280;
      FUN_1000200a0(param_2);
    }
    uVar2 = FUN_10001f55c();
    FUN_10063f0e8(param_1);
    uVar3 = FUN_100047714();
    FUN_10063f0e8(0x3f400000);
    FUN_10063fce0(0,uVar3);
    FUN_100642b7c(param_2,uVar2);
    bVar4 = 1;
  }
  else {
    if (((*(byte *)(param_2 + 0x35c) & 1) == 0) &&
       ((float)(*(uint *)(param_2 + 0x84) >> 7 & 0xff) * 0.003921569 != 0.0)) {
      return;
    }
    FUN_100642324(param_2);
    uVar2 = FUN_100047714();
    FUN_10063f0e8(0x3e19999a);
    FUN_10063fce0(0x3ecccccd,uVar2);
    FUN_100642b14(param_2,uVar2);
    bVar4 = 2;
  }
  *(byte *)(param_2 + 0x35c) = *(byte *)(param_2 + 0x35c) & 0xfc | bVar4;
  return;
}




void FUN_1005352e0(float param_1,float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_48;
  
  if (*(int *)(param_3 + 0x358) == 0) {
    lVar1 = param_3 + 0x88;
    fVar5 = (float)FUN_100652e60(lVar1);
    param_1 = param_1 + fVar5 * -2.0;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    lVar2 = param_3 + 0x178;
    FUN_100652e60(lVar2);
    FUN_10064e47c(param_1,lVar2);
    bVar3 = false;
    if ((*(float *)(param_3 + 0xcc) == 0.0) && (bVar3 = false, !NAN(*(float *)(param_3 + 200)))) {
      bVar3 = *(float *)(param_3 + 200) == 0.0;
    }
    if (!bVar3) {
      *(undefined8 *)(param_3 + 200) = 0;
      FUN_1000200a0(lVar1);
    }
    uVar4 = 0x3f00000000000000;
    local_48 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_3 + 0x88) + 0x28))(lVar1,&local_48);
    fVar5 = (float)FUN_100652e60(lVar1);
    if ((*(float *)(param_3 + 0x1b8) != fVar5) || (*(float *)(param_3 + 0x1bc) != 0.0)) {
      *(float *)(param_3 + 0x1b8) = fVar5;
      *(undefined4 *)(param_3 + 0x1bc) = 0;
      FUN_1000200a0(lVar2);
    }
    local_48 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_3 + 0x178) + 0x28))(lVar2,&local_48);
    fVar6 = *(float *)(param_3 + 0x1b8);
    fVar5 = (float)FUN_100652e60(lVar2);
    fVar5 = fVar5 + fVar6;
    if ((*(float *)(param_3 + 0x2a8) == fVar5) && (*(float *)(param_3 + 0x2ac) == 0.0))
    goto LAB_1005354f0;
    *(float *)(param_3 + 0x2a8) = fVar5;
    *(undefined4 *)(param_3 + 0x2ac) = 0;
  }
  else {
    if (*(int *)(param_3 + 0x358) != 1) {
      return;
    }
    lVar1 = param_3 + 0x88;
    FUN_100652e60(lVar1);
    param_1 = param_1 + param_2 * -2.0;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    lVar2 = param_3 + 0x178;
    uVar4 = FUN_100652e60(lVar2);
    FUN_10064e47c(uVar4,param_1,lVar2);
    fVar5 = *(float *)(param_3 + 0xcc);
    bVar3 = false;
    if ((fVar5 == 0.0) && (bVar3 = false, !NAN(*(float *)(param_3 + 200)))) {
      bVar3 = *(float *)(param_3 + 200) == 0.0;
    }
    if (!bVar3) {
      *(undefined8 *)(param_3 + 200) = 0;
      FUN_1000200a0(lVar1);
    }
    uVar4 = 0x3f000000;
    local_48 = 0x3f000000;
    (**(code **)(*(long *)(param_3 + 0x88) + 0x28))(lVar1,&local_48);
    FUN_100652e60(lVar1);
    bVar3 = false;
    if ((*(float *)(param_3 + 0x1b8) == 0.0) &&
       (bVar3 = false, !NAN(*(float *)(param_3 + 0x1bc)) && !NAN(fVar5))) {
      bVar3 = *(float *)(param_3 + 0x1bc) == fVar5;
    }
    if (!bVar3) {
      *(undefined4 *)(param_3 + 0x1b8) = 0;
      *(float *)(param_3 + 0x1bc) = fVar5;
      FUN_1000200a0(lVar2);
    }
    local_48 = 0x3f000000;
    (**(code **)(*(long *)(param_3 + 0x178) + 0x28))(lVar2,&local_48);
    fVar6 = *(float *)(param_3 + 0x1bc);
    FUN_100652e60(lVar2);
    fVar5 = fVar5 + fVar6;
    if ((*(float *)(param_3 + 0x2a8) == 0.0) && (*(float *)(param_3 + 0x2ac) == fVar5))
    goto LAB_1005354f0;
    *(undefined4 *)(param_3 + 0x2a8) = 0;
    *(float *)(param_3 + 0x2ac) = fVar5;
  }
  FUN_1000200a0(param_3 + 0x268);
LAB_1005354f0:
  local_48 = uVar4;
  (**(code **)(*(long *)(param_3 + 0x268) + 0x28))((long *)(param_3 + 0x268),&local_48);
  return;
}




void FUN_100535520(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = FUN_100642d08();
  if (iVar1 != 0) {
    fVar2 = (float)FUN_10064e3cc(param_3 + 0xb8);
    fVar4 = param_2;
    fVar3 = (float)FUN_10064259c(param_3 + 600);
    fVar5 = *(float *)(param_3 + 0x298);
    fVar6 = *(float *)(param_3 + 0x29c);
    FUN_100535190(0x3f000000,param_3 + 0x310,param_5);
    if ((0.0 < (float)(*(uint *)(param_3 + 0x394) >> 7 & 0xff) * 0.003921569) &&
       (fVar4 = 10.0 - (fVar6 * param_2) / fVar4, *(float *)(param_3 + 0x354) != fVar4)) {
      *(float *)(param_3 + 0x354) = fVar4;
      FUN_1000200a0(param_3 + 0x310);
    }
    FUN_100535190(0x3f000000,param_3 + 0x670,param_4);
    if ((0.0 < (float)(*(uint *)(param_3 + 0x6f4) >> 7 & 0xff) * 0.003921569) &&
       (fVar4 = 10.0 - (fVar5 * fVar2) / fVar3, *(float *)(param_3 + 0x6b0) != fVar4)) {
      *(float *)(param_3 + 0x6b0) = fVar4;
      FUN_1000200a0(param_3 + 0x670);
      return;
    }
  }
  return;
}




long * FUN_100535668(long *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_thunk_FUN_100535744_1014a0270;
  thunk_FUN_100652c08(puVar1 + 0x11);
  thunk_FUN_100652c08(param_1 + 0x2f);
  thunk_FUN_100652c08(param_1 + 0x4d);
  *(undefined4 *)(param_1 + 0x6b) = param_2;
  *(byte *)((long)param_1 + 0x35c) = *(byte *)((long)param_1 + 0x35c) & 0xfc;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x11,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2f,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4d,1);
  if ((*(uint *)((long)param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffff807f;
    FUN_1000200a0(param_1);
  }
  return param_1;
}




void FUN_100535744(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100535744_1014a0270;
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_1014a7108;
  param_1[0x46] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49);
  FUN_10064e2bc(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void thunk_FUN_100535744(void)

{
  FUN_100535744();
  return;
}




void FUN_1005357e0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100535744();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_1005357f4(undefined8 param_1)

{
  undefined8 *puVar1;
  code *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puStack_68 = (undefined8 *)FUN_1005348a4();
  *puStack_68 = &PTR_thunk_FUN_100534a3c_1014a0370;
  puStack_68[0x13c] = 0;
  puStack_68[0x13b] = 0;
  puStack_68[0x13e] = 0;
  puStack_68[0x13d] = 0;
  puStack_68[0x140] = 0x4316000041700000;
  puStack_68[0x13f] = 0x3d4ccccd460ca000;
  puStack_68[0x141] = 0x439d800041200000;
  *(undefined4 *)(puStack_68 + 0x142) = 0x42a00000;
  puStack_68[0x143] = 0;
  *(byte *)(puStack_68 + 0x144) = *(byte *)(puStack_68 + 0x144) & 0xf8 | 4;
  local_48 = DAT_101dbd458;
  local_70 = FUN_1005359ec;
  puVar1 = puStack_68 + 1;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  FUN_10001554c(puVar1,&local_70);
  local_48 = DAT_101dbd45c;
  local_70 = FUN_100535a00;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&local_70);
  local_48 = DAT_101dbd460;
  local_70 = FUN_100535a14;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&local_70);
  local_48 = DAT_101dbd47c;
  local_70 = FUN_100535a28;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&local_70);
  local_48 = DAT_101dbd484;
  local_70 = FUN_1005359ec;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&local_70);
  local_48 = DAT_101dbd488;
  local_70 = FUN_100535a00;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&local_70);
  local_48 = DAT_101dbd48c;
  local_70 = FUN_100535a14;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&local_70);
  local_48 = DAT_101dbd4a4;
  local_70 = FUN_100535a3c;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&local_70);
  return param_1;
}




void FUN_1005359ec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001005359fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))(param_1,param_4,param_5);
  return;
}




void FUN_100535a00(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100535a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1,param_4,param_5);
  return;
}




void FUN_100535a14(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100535a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x170))(param_1,param_4,param_5);
  return;
}




void FUN_100535a28(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100535a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1,param_4,param_5);
  return;
}




void FUN_100535a3c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100535a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))(param_1,param_4,param_5);
  return;
}




undefined8 thunk_FUN_1005357f4(undefined8 param_1)

{
  undefined8 *puVar1;
  code *pcStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puStack_68 = (undefined8 *)FUN_1005348a4();
  *puStack_68 = &PTR_thunk_FUN_100534a3c_1014a0370;
  puStack_68[0x13c] = 0;
  puStack_68[0x13b] = 0;
  puStack_68[0x13e] = 0;
  puStack_68[0x13d] = 0;
  puStack_68[0x140] = 0x4316000041700000;
  puStack_68[0x13f] = 0x3d4ccccd460ca000;
  puStack_68[0x141] = 0x439d800041200000;
  *(undefined4 *)(puStack_68 + 0x142) = 0x42a00000;
  puStack_68[0x143] = 0;
  *(byte *)(puStack_68 + 0x144) = *(byte *)(puStack_68 + 0x144) & 0xf8 | 4;
  uStack_48 = DAT_101dbd458;
  pcStack_70 = FUN_1005359ec;
  puVar1 = puStack_68 + 1;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  FUN_10001554c(puVar1,&pcStack_70);
  uStack_48 = DAT_101dbd45c;
  pcStack_70 = FUN_100535a00;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&pcStack_70);
  uStack_48 = DAT_101dbd460;
  pcStack_70 = FUN_100535a14;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&pcStack_70);
  uStack_48 = DAT_101dbd47c;
  pcStack_70 = FUN_100535a28;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&pcStack_70);
  uStack_48 = DAT_101dbd484;
  pcStack_70 = FUN_1005359ec;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&pcStack_70);
  uStack_48 = DAT_101dbd488;
  pcStack_70 = FUN_100535a00;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&pcStack_70);
  uStack_48 = DAT_101dbd48c;
  pcStack_70 = FUN_100535a14;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&pcStack_70);
  uStack_48 = DAT_101dbd4a4;
  pcStack_70 = FUN_100535a3c;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = (undefined8 *)param_1;
  FUN_10001554c(puVar1,&pcStack_70);
  return param_1;
}




void thunk_FUN_100534a3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a0100;
  FUN_100535744(param_1 + 0xce);
  FUN_100535744(param_1 + 0x62);
  thunk_FUN_10064e2bc(param_1 + 0x4b);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100534a3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a0100;
  FUN_100535744(param_1 + 0xce);
  FUN_100535744(param_1 + 0x62);
  thunk_FUN_10064e2bc(param_1 + 0x4b);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100535a5c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100534a3c();
  operator_delete(pvVar1);
  return;
}




void FUN_100535a70(undefined8 param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float local_38;
  float fStack_34;
  
  if ((*(byte *)(param_2 + 0x9d4) & 3) == 0) {
    return;
  }
  bVar1 = *(byte *)(param_2 + 0xa20);
  fVar16 = (float)param_1;
  if ((bVar1 & 1) != 0) {
    lVar4 = FUN_10003d5bc(param_2);
    uVar8 = DAT_101dc1cb8;
    if (0.0 < fVar16) {
      uVar10 = *(ulong *)(lVar4 + 0x10);
      param_1 = *(undefined8 *)(param_2 + 0x9e0);
      uVar13 = NEON_fmov(0x3f800000,4);
      uVar10 = uVar10 ^ (uVar10 ^ uVar13) &
                        ~CONCAT44(-(uint)(0.0 < (float)(uVar10 >> 0x20)),
                                  -(uint)(0.0 < (float)uVar10));
      uVar8 = CONCAT44((float)((ulong)param_1 >> 0x20) / ((float)(uVar10 >> 0x20) * fVar16),
                       (float)param_1 / ((float)uVar10 * fVar16));
    }
    fVar5 = (float)param_1;
    *(undefined8 *)(param_2 + 0x9f0) = uVar8;
    if ((*(byte *)(param_2 + 0xa20) >> 2 & 1) == 0) {
      bVar2 = false;
    }
    else {
      fVar7 = (float)FUN_100535e30(param_2);
      bVar2 = false;
      uVar13 = NEON_fmov(0x3f800000,4);
      uVar14 = NEON_fmov(0xbf800000,4);
      uVar10 = uVar13 ^ (uVar13 ^ uVar14) & CONCAT44(-(uint)(fVar5 < 0.0),-(uint)(fVar7 < 0.0));
      fVar12 = (float)*(undefined8 *)(param_2 + 0x9f0);
      fVar9 = (float)((ulong)*(undefined8 *)(param_2 + 0x9f0) >> 0x20);
      uVar13 = uVar13 ^ (uVar13 ^ uVar14) & CONCAT44(-(uint)(fVar9 < 0.0),-(uint)(fVar12 < 0.0));
      uVar10 = CONCAT44(ABS(fVar5) / *(float *)(param_2 + 0xa04),
                        ABS(fVar7) / *(float *)(param_2 + 0xa04)) &
               CONCAT44(-(uint)((float)(uVar10 >> 0x20) == (float)(uVar13 >> 0x20)),
                        -(uint)((float)uVar10 == (float)uVar13));
      uVar8 = NEON_fminnm(CONCAT44((float)((ulong)DAT_101873a38 >> 0x20) - (float)(uVar10 >> 0x20),
                                   (float)DAT_101873a38 - (float)uVar10),DAT_101873a38,4);
      uVar8 = NEON_fmaxnm(DAT_101dc1cb8,uVar8,4);
      *(ulong *)(param_2 + 0x9f0) =
           CONCAT44((float)((ulong)uVar8 >> 0x20) * fVar9,(float)uVar8 * fVar12);
    }
    goto LAB_100535ce0;
  }
  fVar5 = (float)_powf(*(undefined4 *)(param_2 + 0x9fc));
  uVar10 = *(ulong *)(param_2 + 0x9f0);
  *(ulong *)(param_2 + 0x9f0) = CONCAT44((float)(uVar10 >> 0x20) * fVar5,(float)uVar10 * fVar5);
  if ((bVar1 >> 2 & 1) == 0) {
    bVar2 = false;
  }
  else {
    fVar7 = (float)FUN_100535e30(param_2);
    fVar12 = ABS(fVar7);
    fVar9 = (float)uVar10;
    fVar5 = ABS(fVar9);
    bVar2 = false;
    bVar3 = false;
    if (fVar12 < 1.0) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar2 = fVar5 < 1.0;
        bVar3 = false;
      }
    }
    if (bVar2 == bVar3) {
      fVar11 = *(float *)(param_2 + 0xa08);
      fVar15 = *(float *)(param_2 + 0xa0c);
      if (fVar7 <= 0.0) {
        if (fVar7 < 0.0) {
          if (0.0 <= *(float *)(param_2 + 0x9f0)) {
            fVar12 = fVar11 * fVar12;
            bVar2 = true;
          }
          else {
            bVar2 = false;
            fVar12 = *(float *)(param_2 + 0x9f0) + fVar12 * fVar15 * fVar16;
          }
          goto LAB_100535c34;
        }
        bVar2 = false;
      }
      else {
        if (*(float *)(param_2 + 0x9f0) <= 0.0) {
          fVar12 = fVar11 * -fVar12;
          bVar2 = true;
        }
        else {
          bVar2 = false;
          fVar12 = *(float *)(param_2 + 0x9f0) - fVar12 * fVar15 * fVar16;
        }
LAB_100535c34:
        *(float *)(param_2 + 0x9f0) = fVar12;
      }
      if (fVar9 <= 0.0) {
        if (0.0 <= fVar9) goto LAB_100535c94;
        if (0.0 <= *(float *)(param_2 + 0x9f4)) goto LAB_100535c84;
        uVar10 = (ulong)(uint)(fVar15 * fVar16);
        fVar11 = *(float *)(param_2 + 0x9f4) + fVar5 * fVar15 * fVar16;
      }
      else if (*(float *)(param_2 + 0x9f4) <= 0.0) {
        fVar5 = -fVar5;
LAB_100535c84:
        fVar11 = fVar11 * fVar5;
        bVar2 = true;
      }
      else {
        uVar10 = (ulong)(uint)(fVar15 * fVar16);
        fVar11 = *(float *)(param_2 + 0x9f4) - fVar5 * fVar15 * fVar16;
      }
      *(float *)(param_2 + 0x9f4) = fVar11;
    }
    else {
      bVar2 = false;
    }
  }
LAB_100535c94:
  fVar7 = (float)uVar10;
  fVar5 = (float)FUN_100535e30(param_2);
  if ((fVar5 == 0.0) && (ABS(*(float *)(param_2 + 0x9f0)) < 10.0)) {
    *(undefined4 *)(param_2 + 0x9f0) = 0;
  }
  if ((fVar7 == 0.0) && (ABS(*(float *)(param_2 + 0x9f4)) < 10.0)) {
    *(undefined4 *)(param_2 + 0x9f4) = 0;
  }
LAB_100535ce0:
  if ((*(byte *)(param_2 + 0x9d4) & 1) == 0) {
    *(undefined4 *)(param_2 + 0x9f0) = 0;
  }
  uVar6 = 0;
  if ((*(byte *)(param_2 + 0x9d4) >> 1 & 1) != 0) {
    uVar6 = *(undefined4 *)(param_2 + 0x9f4);
  }
  fVar5 = *(float *)(param_2 + 0x9f8);
  fVar12 = -fVar5;
  NEON_fminnm(*(undefined4 *)(param_2 + 0x9f0),fVar5);
  fVar7 = (float)NEON_fminnm(uVar6,fVar5);
  fVar5 = fVar12;
  if (fVar12 <= fVar7) {
    fVar5 = fVar7;
  }
  *(float *)(param_2 + 0x9f0) = fVar12;
  *(float *)(param_2 + 0x9f4) = fVar5;
  fVar7 = *(float *)(param_2 + 0x298);
  fVar9 = *(float *)(param_2 + 0x29c);
  fVar16 = (float)NEON_fminnm(fVar16,0x3dcccccd);
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  local_38 = fVar7 + fVar16 * fVar12;
  fStack_34 = fVar9 + fVar16 * fVar5;
  if ((*(byte *)(param_2 + 0xa20) >> 2 & 1) == 0) {
    FUN_100535ef4(param_2,&local_38);
    fVar7 = *(float *)(param_2 + 0x298);
    fVar9 = *(float *)(param_2 + 0x29c);
  }
  bVar3 = false;
  if ((fVar7 == local_38) && (bVar3 = false, !NAN(fVar9) && !NAN(fStack_34))) {
    bVar3 = fVar9 == fStack_34;
  }
  if (!bVar3) {
    *(ulong *)(param_2 + 0x298) = CONCAT44(fStack_34,local_38);
    FUN_1000200a0(param_2 + 600);
  }
  fVar5 = *(float *)(param_2 + 0x9f4) * fVar16;
  FUN_100535f9c(*(float *)(param_2 + 0x9f0) * fVar16,param_2);
  if (bVar2) {
    fVar16 = (float)FUN_100535e30(param_2);
    if (((0.0 < fVar16) && (fVar16 < 1.0)) || ((fVar16 < 0.0 && (-1.0 < fVar16)))) {
      *(undefined4 *)(param_2 + 0x9f0) = 0;
    }
    if (((0.0 < fVar5) && (fVar5 < 1.0)) || ((fVar5 < 0.0 && (-1.0 < fVar5)))) {
      *(undefined4 *)(param_2 + 0x9f4) = 0;
    }
  }
  FUN_100535520(param_2,*(float *)(param_2 + 0x9f0) != 0.0,*(float *)(param_2 + 0x9f4) != 0.0);
  return;
}




float FUN_100535e30(long param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar3 = FUN_100642d08();
  fVar6 = (float)DAT_101dc1cb8;
  if ((uVar3 & 1) != 0) {
    fVar4 = (float)FUN_10064e3cc(param_1 + 0xb8);
    fVar5 = (float)(**(code **)(*(long *)(param_1 + 600) + 0x50))(param_1 + 600);
    fVar7 = *(float *)(param_1 + 0x298);
    bVar1 = false;
    bVar2 = false;
    if (fVar7 <= 0.0) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar4) && !NAN(fVar5)) {
        bVar1 = fVar4 < fVar5;
        bVar2 = false;
      }
    }
    fVar6 = fVar7;
    if ((bVar1 != bVar2) && (fVar6 = 0.0, fVar7 < fVar4 - fVar5)) {
      fVar6 = (fVar5 - fVar4) + fVar7;
    }
  }
  return fVar6;
}




void FUN_100535ef4(undefined1 param_1 [16],float param_2,long param_3,float *param_4)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = FUN_100642d08();
  if (iVar1 != 0) {
    fVar3 = (float)FUN_10064e3cc(param_3 + 0xb8);
    fVar5 = param_2;
    fVar4 = (float)FUN_10064e3cc(param_3 + 600);
    uVar2 = (uint)*(byte *)(param_3 + 0x9d4);
    if ((*(byte *)(param_3 + 0x9d4) & 1) != 0) {
      fVar6 = *param_4;
      fVar3 = fVar3 - fVar4;
      fVar4 = fVar6;
      if (fVar6 <= fVar3) {
        fVar4 = fVar3;
      }
      if ((fVar6 < fVar3) || (0.0 < fVar4)) {
        if (0.0 < fVar4) {
          fVar4 = 0.0;
        }
        *param_4 = fVar4;
        uVar2 = (uint)*(byte *)(param_3 + 0x9d4);
      }
    }
    if ((uVar2 >> 1 & 1) != 0) {
      fVar3 = param_4[1];
      param_2 = param_2 - fVar5;
      fVar5 = fVar3;
      if (fVar3 <= param_2) {
        fVar5 = param_2;
      }
      if ((fVar3 < param_2) || (0.0 < fVar5)) {
        if (0.0 < fVar5) {
          fVar5 = 0.0;
        }
        param_4[1] = fVar5;
      }
    }
  }
  return;
}




void FUN_100535f9c(float param_1,float param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [32];
  
  bVar1 = false;
  if ((param_1 == (float)DAT_101dc1cb8) &&
     (bVar1 = false, !NAN(param_2) && !NAN(DAT_101dc1cb8._4_4_))) {
    bVar1 = param_2 == DAT_101dc1cb8._4_4_;
  }
  if (bVar1) {
    return;
  }
  if (param_2 <= 0.0) {
    if (0.0 <= param_2) goto LAB_10053601c;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  if ((*(byte *)(param_3 + 0x9d4) >> 1 & 1) != 0) {
    FUN_100644aec(auStack_50,DAT_101d918b8,uVar2);
    FUN_100644c34(param_3,auStack_50,0);
  }
LAB_10053601c:
  if (param_1 <= 0.0) {
    if (0.0 <= param_1) {
      return;
    }
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  if ((*(byte *)(param_3 + 0x9d4) & 1) != 0) {
    FUN_100644aec(auStack_50,DAT_101d918b4,uVar2);
    FUN_100644c34(param_3,auStack_50,0);
  }
  return;
}




void FUN_100536070(long param_1)

{
  undefined8 uVar1;
  
  *(byte *)(param_1 + 0xa20) = *(byte *)(param_1 + 0xa20) & 0xfe;
  uVar1 = DAT_101dc1cb8;
  *(undefined8 *)(param_1 + 0x9e0) = DAT_101dc1cb8;
  *(undefined8 *)(param_1 + 0x9e8) = uVar1;
  *(undefined8 *)(param_1 + 0x9f0) = uVar1;
  return;
}




byte FUN_100536098(long param_1)

{
  return *(byte *)(param_1 + 0xa20) & 1;
}




undefined8 FUN_1005360a4(long param_1)

{
  if (((*(byte *)(param_1 + 0xa20) & 1) == 0) &&
     (0.0 < SQRT(*(float *)(param_1 + 0x9f0) * *(float *)(param_1 + 0x9f0) +
                 *(float *)(param_1 + 0x9f4) * *(float *)(param_1 + 0x9f4)))) {
    return 1;
  }
  return 0;
}




byte FUN_1005360d8(long param_1)

{
  return *(byte *)(param_1 + 0xa20) >> 1 & 1;
}




void FUN_1005360e4(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 4;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0xa20) = *(byte *)(param_1 + 0xa20) & 0xfb | bVar1;
  return;
}




void FUN_100536104(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xa10) = param_1;
  return;
}




void FUN_10053610c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x9f8) = param_1;
  return;
}




void FUN_100536114(long param_1)

{
  *(undefined4 *)(param_1 + 0x9f8) = 0x460ca000;
  *(undefined4 *)(param_1 + 0xa10) = 0x42a00000;
  return;
}




void FUN_10053612c(long *param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_100644b14(param_2);
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar2 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) {
    param_1[0x143] = param_2[4];
    lVar3 = CONCAT44((int)(float)((ulong)param_2[5] >> 0x20),(int)(float)param_2[5]);
    iVar1 = (**(code **)(*param_1 + 0x150))(param_1);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x140))(param_1);
      param_1[0x13c] = DAT_101dc1cb8;
      param_1[0x13d] = lVar3;
      *(byte *)(param_1 + 0x144) = *(byte *)(param_1 + 0x144) | 3;
    }
    param_1[0x13b] = lVar3;
  }
  return;
}




void FUN_1005361f4(long param_1,long *param_2)

{
  ulong uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((*(byte *)(param_1 + 0x9d4) & 3) == 0) {
    FUN_100644b14(param_2);
    return;
  }
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar1 & 1) == 0) && (DAT_101dbd4d8 != DAT_101dbd450)) {
    return;
  }
  if (param_2[4] != *(long *)(param_1 + 0xa18)) {
    return;
  }
  fVar5 = (float)(int)(float)param_2[5];
  fVar6 = (float)(int)(float)((ulong)param_2[5] >> 0x20);
  fVar3 = *(float *)(param_1 + 0x9d8) - fVar5;
  fVar4 = *(float *)(param_1 + 0x9dc) - fVar6;
  if ((*(byte *)(param_1 + 0x9d4) & 1) == 0) {
    pfVar2 = (float *)&DAT_101873a58;
  }
  else {
    if ((*(byte *)(param_1 + 0x9d4) >> 1 & 1) != 0) goto LAB_1005362d0;
    pfVar2 = (float *)&DAT_101873a50;
  }
  fVar4 = *pfVar2 * fVar3 + fVar4 * pfVar2[1];
  fVar3 = fVar4 * *pfVar2;
  fVar4 = fVar4 * pfVar2[1];
LAB_1005362d0:
  if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) <= *(float *)(param_1 + 0xa00)) {
    FUN_100644b14(param_2);
  }
  else {
    FUN_100641584(param_2[4],param_1);
    if ((*(byte *)(param_1 + 0xa20) & 1) == 0) {
      *(undefined8 *)(param_1 + 0x9e0) = DAT_101dc1cb8;
      *(ulong *)(param_1 + 0x9e8) = CONCAT44(fVar6,fVar5);
      *(byte *)(param_1 + 0xa20) = *(byte *)(param_1 + 0xa20) | 1;
      FUN_100641584(param_2[4],param_1);
      return;
    }
  }
  *(ulong *)(param_1 + 0x9e0) =
       CONCAT44(fVar6 - (float)((ulong)*(undefined8 *)(param_1 + 0x9e8) >> 0x20),
                fVar5 - (float)*(undefined8 *)(param_1 + 0x9e8));
  *(ulong *)(param_1 + 0x9e8) = CONCAT44(fVar6,fVar5);
  return;
}




void FUN_100536364(long param_1,long *param_2)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  if ((*(byte *)(param_1 + 0x9d4) & 3) != 0) {
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
    if ((((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) &&
       (param_2[4] == *(long *)(param_1 + 0xa18))) {
      fVar2 = (float)(int)(float)param_2[5];
      fVar3 = (float)(int)(float)((ulong)param_2[5] >> 0x20);
      *(ulong *)(param_1 + 0x9e0) =
           CONCAT44(fVar3 - (float)((ulong)*(undefined8 *)(param_1 + 0x9e8) >> 0x20),
                    fVar2 - (float)*(undefined8 *)(param_1 + 0x9e8));
      *(ulong *)(param_1 + 0x9e8) = CONCAT44(fVar3,fVar2);
      *(byte *)(param_1 + 0xa20) = *(byte *)(param_1 + 0xa20) & 0xfc;
      FUN_100641598(param_2[4]);
      *(undefined8 *)(param_1 + 0xa18) = 0;
    }
    return;
  }
  FUN_100644b14(param_2);
  return;
}




void FUN_100536424(long *param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar3 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) {
    bVar1 = *(byte *)((long)param_1 + 0x9d4);
    if ((((bVar1 & 1) != 0) &&
        ((0.001 <= ABS(*(float *)(param_2 + 6)) ||
         (0.001 <= ABS(*(float *)((long)param_2 + 0x34)) && (bVar1 & 2) == 0)))) ||
       (((bVar1 >> 1 & 1) != 0 && (0.001 <= ABS(*(float *)((long)param_2 + 0x34)))))) {
      (**(code **)(*param_1 + 0x140))(param_1);
      fVar4 = *(float *)((long)param_2 + 0x34) * *(float *)(param_1 + 0x142);
      fVar5 = 0.0;
      if ((bVar1 & 1) != 0) {
        fVar5 = *(float *)(param_1 + 0x142) * *(float *)(param_2 + 6);
      }
      fVar6 = fVar4;
      if ((bVar1 & 2) == 0) {
        fVar6 = 0.0;
      }
      if (fVar5 != 0.0 || (*(byte *)((long)param_1 + 0x9d4) & 3) != 1) {
        fVar4 = fVar5;
      }
      fVar5 = *(float *)((long)param_1 + 0x29c);
      fVar7 = fVar4 + *(float *)(param_1 + 0x53);
      fVar8 = fVar5 + fVar6;
      bVar2 = false;
      if ((*(float *)(param_1 + 0x53) == fVar7) && (bVar2 = false, !NAN(fVar5) && !NAN(fVar8))) {
        bVar2 = fVar5 == fVar8;
      }
      if (!bVar2) {
        *(float *)(param_1 + 0x53) = fVar7;
        *(float *)((long)param_1 + 0x29c) = fVar8;
        FUN_1000200a0(param_1 + 0x4b);
      }
      FUN_100535f9c(fVar4,param_1);
      fVar4 = (float)FUN_100535e30(param_1);
      fVar8 = fVar8 - fVar6;
      bVar2 = false;
      if ((*(float *)(param_1 + 0x53) == fVar7 - fVar4) &&
         (bVar2 = false, !NAN(*(float *)((long)param_1 + 0x29c)) && !NAN(fVar8))) {
        bVar2 = *(float *)((long)param_1 + 0x29c) == fVar8;
      }
      if (!bVar2) {
        *(float *)(param_1 + 0x53) = fVar7 - fVar4;
        *(float *)((long)param_1 + 0x29c) = fVar8;
        FUN_1000200a0(param_1 + 0x4b);
        return;
      }
    }
  }
  return;
}




void FUN_1005365ac(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if ((((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) &&
     (param_2[4] == *(long *)(param_1 + 0xa18))) {
    *(byte *)(param_1 + 0xa20) = *(byte *)(param_1 + 0xa20) & 0xfc;
    *(undefined8 *)(param_1 + 0xa18) = 0;
  }
  return;
}




void FUN_10053662c(long param_1)

{
  long lVar1;
  code *local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffff3;
  local_38 = DAT_101dbd4b4;
  local_60 = FUN_1005368a0;
  lVar1 = param_1 + 8;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(lVar1,&local_60);
  local_38 = DAT_101dbd4ac;
  local_60 = FUN_1005368a0;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(lVar1,&local_60);
  local_38 = DAT_101dbd4b8;
  local_60 = FUN_1005368a0;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(lVar1,&local_60);
  local_38 = DAT_101dbd4b0;
  local_60 = FUN_1005368a0;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(lVar1,&local_60);
  local_38 = DAT_101dbd4bc;
  local_60 = FUN_1005368a0;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(lVar1,&local_60);
  return;
}




undefined8 FUN_100536738(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *(undefined4 *)(puVar2 + 0x18) = 0x7000000;
  *(uint *)((long)puVar2 + 0x84) = *(uint *)((long)puVar2 + 0x84) | 0x10;
  *puVar2 = &PTR_thunk_FUN_1005367d4_1014a0508;
  puVar2[0x17] = &PTR_FUN_1014a0668;
  uVar1 = DAT_101dc1cb8;
  puVar2[0x19] = DAT_101dbd2f0;
  puVar2[0x1a] = uVar1;
  *(undefined4 *)(puVar2 + 0x1b) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xdc) = param_2;
  *(undefined4 *)(puVar2 + 0x1c) = param_1;
  *(undefined4 *)((long)puVar2 + 0xe4) = 0;
  *(undefined1 *)(puVar2 + 0x1d) = 0;
  FUN_10053662c();
  return param_3;
}




void FUN_1005367d4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1005367d4_1014a0508;
  param_1[0x17] = &PTR_FUN_1014a0668;
  FUN_100644bb0(param_1,DAT_101dbd4b4);
  FUN_100644bb0(param_1,DAT_101dbd4ac);
  FUN_100644bb0(param_1,DAT_101dbd4b8);
  FUN_100644bb0(param_1,DAT_101dbd4b0);
  FUN_100644bb0(param_1,DAT_101dbd4bc);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1005367d4(void)

{
  FUN_1005367d4();
  return;
}




void FUN_10053686c(long param_1)

{
  FUN_1005367d4(param_1 + -0xb8);
  return;
}




void FUN_100536874(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1005367d4();
  operator_delete(pvVar1);
  return;
}




void FUN_100536888(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1005367d4(param_1 + -0xb8);
  operator_delete(pvVar1);
  return;
}




void FUN_1005368a0(long param_1)

{
  *(undefined4 *)(param_1 + 0xe4) = 0;
  return;
}




void FUN_1005368a8(float param_1,long param_2)

{
  param_1 = *(float *)(param_2 + 0xe4) + param_1;
  *(float *)(param_2 + 0xe4) = param_1;
  if (0.33 <= param_1) {
    *(byte *)(param_2 + 0xe8) = *(byte *)(param_2 + 0xe8) ^ 1;
    *(float *)(param_2 + 0xe4) = param_1 + -0.33;
  }
  return;
}




undefined8 FUN_1005368e4(void)

{
  return 0;
}




undefined8 FUN_1005368ec(void)

{
  return 0;
}




void FUN_1005368f4(void)

{
  FUN_1010b3fec(0);
  return;
}




void FUN_1005368fc(void)

{
  FUN_1010b3fec(0);
  return;
}




void FUN_100536904(long param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (*(char *)(param_1 + 0xe8) != '\0') {
    puVar5 = (undefined8 *)FUN_10003d5bc();
    fVar10 = (float)*(undefined8 *)(param_1 + 0xd0) + (float)*puVar5;
    fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0xd0) >> 0x20) +
             (float)((ulong)*puVar5 >> 0x20);
    uVar8 = NEON_rev64(*(undefined8 *)(param_1 + 0xdc),4);
    fVar7 = (float)uVar8 + fVar10;
    fVar9 = (float)((ulong)uVar8 >> 0x20) + fVar11;
    uVar1 = *(undefined1 *)(param_1 + 0xd8);
    uVar2 = *(undefined1 *)(param_1 + 0xd9);
    uVar3 = *(undefined1 *)(param_1 + 0xda);
    uVar4 = *(undefined1 *)(param_1 + 0xdb);
    puVar5 = (undefined8 *)*param_2;
    *puVar5 = CONCAT44(fVar11,fVar10);
    *(undefined4 *)(puVar5 + 1) = 0;
    *(undefined1 *)((long)puVar5 + 0xc) = uVar1;
    *(undefined1 *)((long)puVar5 + 0xd) = uVar2;
    *(undefined1 *)((long)puVar5 + 0xe) = uVar3;
    *(undefined1 *)((long)puVar5 + 0xf) = uVar4;
    puVar5[2] = 0x3f80000000000000;
    uVar12 = CONCAT44(fVar11,fVar7);
    lVar6 = *param_2;
    uVar8 = CONCAT44(fVar9,fVar10);
    *(undefined8 *)(lVar6 + 0x18) = uVar8;
    *param_2 = lVar6 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(undefined4 *)(lVar6 + 0x20) = 0;
    *(undefined1 *)(lVar6 + 0x24) = uVar1;
    *(undefined1 *)(lVar6 + 0x25) = uVar2;
    *(undefined1 *)(lVar6 + 0x26) = uVar3;
    *(undefined1 *)(lVar6 + 0x27) = uVar4;
    *(undefined8 *)(lVar6 + 0x28) = 0;
    lVar6 = *param_2;
    *(undefined8 *)(lVar6 + 0x18) = uVar12;
    *param_2 = lVar6 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(undefined4 *)(lVar6 + 0x20) = 0;
    *(undefined1 *)(lVar6 + 0x24) = uVar1;
    *(undefined1 *)(lVar6 + 0x25) = uVar2;
    *(undefined1 *)(lVar6 + 0x26) = uVar3;
    *(undefined1 *)(lVar6 + 0x27) = uVar4;
    uVar13 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(lVar6 + 0x28) = uVar13;
    lVar6 = *param_2;
    *(undefined8 *)(lVar6 + 0x18) = uVar8;
    *param_2 = lVar6 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(undefined4 *)(lVar6 + 0x20) = 0;
    *(undefined1 *)(lVar6 + 0x24) = uVar1;
    *(undefined1 *)(lVar6 + 0x25) = uVar2;
    *(undefined1 *)(lVar6 + 0x26) = uVar3;
    *(undefined1 *)(lVar6 + 0x27) = uVar4;
    *(undefined8 *)(lVar6 + 0x28) = 0;
    lVar6 = *param_2;
    *(undefined8 *)(lVar6 + 0x18) = CONCAT44(fVar9,fVar7);
    *param_2 = lVar6 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(undefined4 *)(lVar6 + 0x20) = 0;
    *(undefined1 *)(lVar6 + 0x24) = uVar1;
    *(undefined1 *)(lVar6 + 0x25) = uVar2;
    *(undefined1 *)(lVar6 + 0x26) = uVar3;
    *(undefined1 *)(lVar6 + 0x27) = uVar4;
    *(undefined8 *)(lVar6 + 0x28) = 0x3f800000;
    lVar6 = *param_2;
    *(undefined8 *)(lVar6 + 0x18) = uVar12;
    *param_2 = lVar6 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(undefined4 *)(lVar6 + 0x20) = 0;
    *(undefined1 *)(lVar6 + 0x24) = uVar1;
    *(undefined1 *)(lVar6 + 0x25) = uVar2;
    *(undefined1 *)(lVar6 + 0x26) = uVar3;
    *(undefined1 *)(lVar6 + 0x27) = uVar4;
    *(undefined8 *)(lVar6 + 0x28) = uVar13;
    *param_2 = *param_2 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  }
  return;
}




void FUN_100536aa4(long param_1)

{
  FUN_100536904(param_1 + -0xb8);
  return;
}




void FUN_100536aac(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  uVar1 = DAT_101dbd2f0;
  *(undefined4 *)(puVar2 + 0x18) = 0x7000000;
  *(uint *)((long)puVar2 + 0x84) = *(uint *)((long)puVar2 + 0x84) | 0x10;
  *puVar2 = &PTR_FUN_1014a06b0;
  puVar2[0x17] = &PTR_FUN_1014a0838;
  puVar2[0x19] = uVar1;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  *(undefined1 *)(puVar2 + 0x1d) = 0;
  return;
}




void FUN_100536b00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a06b0;
  param_1[0x17] = &PTR_FUN_1014a0838;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  FUN_10064e2bc();
  return;
}




void FUN_100536b20(long param_1)

{
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}




void FUN_100536b2c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100536b30);
  (*pcVar1)();
}




void FUN_100536b30(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100536b34);
  (*pcVar1)();
}




void FUN_100536b34(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100536b38);
  (*pcVar1)();
}




void FUN_100536b38(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100536b3c);
  (*pcVar1)();
}




void FUN_100536b3c(void)

{
  return;
}




void FUN_100536b40(long *param_1)

{
  if ((char)param_1[0x1d] == '\0') {
    (**(code **)(*param_1 + 0x158))();
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return;
}




void FUN_100536b78(long *param_1)

{
  if ((char)param_1[0x1d] != '\0') {
    (**(code **)(*param_1 + 0x160))();
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *(undefined1 *)(param_1 + 0x1d) = 0;
    param_1[0x1c] = 0;
  }
  return;
}




undefined1 FUN_100536bb4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe8);
}




void FUN_100536bbc(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x168))();
  if ((code *)param_1[0x1a] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100536bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[0x1a])(param_1[0x1c],0,param_2);
    return;
  }
  return;
}




void FUN_100536c08(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x170))();
  if ((code *)param_1[0x1b] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100536c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[0x1b])(param_1[0x1c],1,param_2);
    return;
  }
  return;
}




void FUN_100536c54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  *(undefined8 *)(param_1 + 0xd8) = param_4;
  *(undefined8 *)(param_1 + 0xe0) = param_2;
  return;
}




undefined8 * FUN_100536c60(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_10064e20c();
  puVar1 = operator_new(0x10);
  param_1[0x17] = &PTR_FUN_1014a0a98;
  *puVar1 = &PTR_FUN_1014a0f40;
  puVar1[1] = param_1 + 0x17;
  param_1[0x18] = puVar1;
  *param_1 = &PTR_thunk_FUN_100536ddc_1014a0880;
  FUN_100536738(0x40a00000,0x42c80000,param_1 + 0x19);
  FUN_1004e313c(param_1 + 0x37);
  thunk_FUN_100650e64(param_1 + 0x39);
  thunk_FUN_1006543ec(param_1 + 0x5f);
  param_1[0x93] = 0x3f80000041a00000;
  *(undefined1 *)(param_1 + 0x94) = 0x20;
  *(undefined4 *)((long)param_1 + 0x4a4) = 0;
  *(byte *)(param_1 + 0x95) = *(byte *)(param_1 + 0x95) & 0xfc;
  FUN_100536d0c(param_1);
  return param_1;
}




void FUN_100536d0c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined2 local_38 [4];
  
  FUN_10064e4dc(param_1,0x32000000c8);
  local_38[0] = 1;
  FUN_10064e5b8(param_1,local_38);
  FUN_100536e94(param_1,1);
  plVar1 = param_1 + 0x5f;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x39;
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,param_1 + 0x19,1);
  FUN_1006515e0(plVar2,0);
  FUN_1006513c0(plVar2,&DAT_101d91650);
  FUN_1006515d8(plVar2,0);
  *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) & 0xdf;
  return;
}




undefined8 * thunk_FUN_100536c60(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_10064e20c();
  puVar1 = operator_new(0x10);
  param_1[0x17] = &PTR_FUN_1014a0a98;
  *puVar1 = &PTR_FUN_1014a0f40;
  puVar1[1] = param_1 + 0x17;
  param_1[0x18] = puVar1;
  *param_1 = &PTR_thunk_FUN_100536ddc_1014a0880;
  FUN_100536738(0x40a00000,0x42c80000,param_1 + 0x19);
  FUN_1004e313c(param_1 + 0x37);
  thunk_FUN_100650e64(param_1 + 0x39);
  thunk_FUN_1006543ec(param_1 + 0x5f);
  param_1[0x93] = 0x3f80000041a00000;
  *(undefined1 *)(param_1 + 0x94) = 0x20;
  *(undefined4 *)((long)param_1 + 0x4a4) = 0;
  *(byte *)(param_1 + 0x95) = *(byte *)(param_1 + 0x95) & 0xfc;
  FUN_100536d0c(param_1);
  return param_1;
}




void FUN_100536ddc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100536ddc_1014a0880;
  param_1[0x17] = &PTR_FUN_1014a0a98;
  FUN_10064e2bc(param_1 + 0x5f);
  thunk_FUN_100651068(param_1 + 0x39);
  if ((void *)param_1[0x38] != (void *)0x0) {
    operator_delete__((void *)param_1[0x38]);
    param_1[0x37] = 0;
    param_1[0x38] = 0;
  }
  FUN_1005367d4(param_1 + 0x19);
  param_1[0x17] = &PTR_FUN_1014a0c00;
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 8))();
  }
  param_1[0x18] = 0;
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100536ddc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100536ddc_1014a0880;
  param_1[0x17] = &PTR_FUN_1014a0a98;
  FUN_10064e2bc(param_1 + 0x5f);
  thunk_FUN_100651068(param_1 + 0x39);
  if ((void *)param_1[0x38] != (void *)0x0) {
    operator_delete__((void *)param_1[0x38]);
    param_1[0x37] = 0;
    param_1[0x38] = 0;
  }
  FUN_1005367d4(param_1 + 0x19);
  param_1[0x17] = &PTR_FUN_1014a0c00;
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 8))();
  }
  param_1[0x18] = 0;
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100536e60(long param_1)

{
  FUN_100536ddc(param_1 + -0xb8);
  return;
}




void FUN_100536e68(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100536ddc();
  operator_delete(pvVar1);
  return;
}




void FUN_100536e7c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100536ddc(param_1 + -0xb8);
  operator_delete(pvVar1);
  return;
}




void FUN_100536e94(long param_1,uint param_2)

{
  byte bVar1;
  code *local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  if ((((*(byte *)(param_1 + 0x4a0) & 8) == 0 ^ param_2) & 1) == 0) {
    if (param_2 == 0) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffffffef;
      FUN_100644bb0(param_1,DAT_101dbd4a0);
      FUN_100644bb0(param_1,DAT_101dbd4a4);
      bVar1 = 0;
    }
    else {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x10;
      local_38 = DAT_101dbd4a0;
      local_60 = FUN_100536fb0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 1;
      lStack_58 = param_1;
      FUN_10001554c(param_1 + 8,&local_60);
      local_38 = DAT_101dbd4a4;
      local_60 = FUN_100536fb0;
      local_48 = 0;
      local_40 = 0;
      local_50 = 0;
      lStack_58 = param_1;
      FUN_10001554c(param_1 + 8,&local_60);
      bVar1 = 8;
    }
    *(byte *)(param_1 + 0x4a0) = *(byte *)(param_1 + 0x4a0) & 0xf7 | bVar1;
  }
  return;
}




void FUN_100536f90(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 0x20;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x4a0) = *(byte *)(param_1 + 0x4a0) & 0xdf | bVar1;
  return;
}




void FUN_100536fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10053757c(param_1,param_2,param_5);
  return;
}




byte FUN_100536fb8(long param_1)

{
  return *(byte *)(param_1 + 0x4a0) >> 3 & 1;
}




byte FUN_100536fc4(long param_1)

{
  return *(byte *)(param_1 + 1000) >> 3 & 1;
}




void FUN_100536fd0(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x4a0) = *(byte *)(param_1 + 0x4a0) & 0xf8 | param_2 & 7;
  return;
}




void FUN_100536fe0(long param_1)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x4a0) >> 4 & 1) == 0) {
    *(byte *)(param_1 + 0x4a0) = *(byte *)(param_1 + 0x4a0) | 0x10;
    FUN_100537048();
    plVar1 = (long *)(param_1 + 0xb8);
    (**(code **)(*plVar1 + 0x100))(plVar1,1);
    *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | 0xc;
                    /* WARNING: Could not recover jumptable at 0x000100537038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb8))(plVar1);
    return;
  }
  return;
}




void FUN_100537048(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar3 = (**(code **)(*param_1 + 0x1d0))();
  uVar4 = FUN_1004e3654(uVar3,&DAT_101d91650);
  if ((uVar4 & 1) == 0) {
    uVar3 = FUN_100655b6c(param_1 + 0x53);
    iVar2 = FUN_1004e3654(param_1 + 0x37,uVar3);
    if (iVar2 == 0) goto LAB_1005370c0;
  }
  FUN_1004e3120(auStack_30,"");
  FUN_1006513c0(param_1 + 0x39,auStack_30);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
LAB_1005370c0:
  uVar1 = *(uint *)((long)param_1 + 0x84) >> 7 & 0xff;
  *(float *)((long)param_1 + 0x49c) = (float)uVar1 * 0.003921569;
  if (uVar1 != 0) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffff807f;
    FUN_1000200a0(param_1);
  }
  return;
}




void FUN_100537100(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x4a0);
  if ((bVar1 >> 4 & 1) == 0) {
    return;
  }
  *(byte *)(param_1 + 0x4a0) = bVar1 & 0xef;
  if ((bVar1 >> 5 & 1) != 0) {
    FUN_100537164(param_1);
  }
  *(undefined4 *)(param_1 + 0x4a4) = 0;
  *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) & 0xfffffff3;
                    /* WARNING: Could not recover jumptable at 0x000100537160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0xb8) + 0x100))((long *)(param_1 + 0xb8),0);
  return;
}




void FUN_100537164(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_48 [40];
  
  FUN_100644f6c(auStack_48,DAT_101dbd4ac,param_1);
  FUN_100644c34(param_1,auStack_48,1);
  uVar2 = (uint)(*(float *)(param_1 + 0x49c) * 255.0);
  uVar1 = *(uint *)(param_1 + 0x84);
  if (uVar2 != (uVar1 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_1000200a0(param_1);
  }
  return;
}




byte FUN_1005371e4(long param_1)

{
  return *(byte *)(param_1 + 0x4a0) >> 4 & 1;
}




void FUN_1005371f0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x498) = param_1;
  return;
}




void FUN_1005371f8(undefined8 param_1,long *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_100655b94(param_2 + 0x53);
  fVar3 = *(float *)(lVar1 + 0x924);
  FUN_10064e47c(param_1,fVar3,param_2);
  fVar2 = (float)(**(code **)(*param_2 + 0x48))(param_2);
  (**(code **)(*param_2 + 0x48))(param_2);
  FUN_10064e4dc(param_2,CONCAT44((int)fVar3,(int)fVar2));
  return;
}




void FUN_10053726c(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [8];
  void *local_28;
  
  plVar1 = param_1 + 0x37;
  FUN_1000153b4(plVar1);
  uVar3 = (**(code **)(*param_1 + 0x1d0))(param_1);
  iVar2 = FUN_1004e3654(uVar3,&DAT_101d91650);
  if (iVar2 != 0) {
    iVar2 = FUN_1004e36c0(plVar1,&DAT_101d91650);
    if (iVar2 == 0) {
      FUN_1004e3120(auStack_30,"");
    }
    else {
      thunk_FUN_1004e439c(auStack_30,plVar1);
    }
    FUN_1006513c0(param_1 + 0x39,auStack_30);
    if (local_28 != (void *)0x0) {
      operator_delete__(local_28);
    }
  }
  return;
}




void FUN_10053730c(float param_1,long param_2)

{
  FUN_10064e47c(param_1 + 5.0,param_2 + 0x2f8);
                    /* WARNING: Could not recover jumptable at 0x000100537340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0xb8) + 0xb8))((long *)(param_2 + 0xb8));
  return;
}




void FUN_100537344(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0xb8) + 0xb8))((long *)(param_1 + 0xb8));
  if ((*(byte *)(param_1 + 0x14c) >> 3 & 1) == 0) {
    return;
  }
  FUN_100537390(param_1,1);
  return;
}




void FUN_100537390(long *param_1,undefined1 param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 local_58;
  
  local_58 = 0;
  FUN_100641518((long)&local_58 + 4,&local_58);
  plVar1 = param_1 + 0x39;
  fVar4 = (float)FUN_1006511d0(plVar1);
  fVar5 = (float)FUN_10064e3cc(param_1 + 0x5f);
  iVar3 = *(int *)((long)param_1 + 0x4a4);
  (**(code **)(*param_1 + 0x1d0))(param_1);
  iVar2 = FUN_1004e3634();
  if (iVar3 == iVar2) {
    if (fVar4 < fVar5) goto LAB_100537490;
    if (*(float *)(param_1 + 0x41) != fVar5 - fVar4) {
      *(float *)(param_1 + 0x41) = fVar5 - fVar4;
      goto LAB_1005374a0;
    }
  }
  else {
    if (*(int *)((long)param_1 + 0x4a4) == 0) {
      uVar7 = 0;
    }
    else {
      (**(code **)(*param_1 + 0x1d0))(param_1);
      iVar3 = FUN_1004e3634();
      if (iVar3 != 0) {
        fVar6 = (float)FUN_100656a78(param_1 + 0x53,*(undefined4 *)((long)param_1 + 0x4a4));
        if ((fVar4 < fVar5) || (fVar6 <= fVar5)) {
          if (*(float *)(param_1 + 0x41) != 0.0) {
            *(undefined4 *)(param_1 + 0x41) = 0;
            goto LAB_1005374f8;
          }
        }
        else if (*(float *)(param_1 + 0x41) != fVar5 - fVar6) {
          *(float *)(param_1 + 0x41) = fVar5 - fVar6;
LAB_1005374f8:
          FUN_1000200a0(plVar1);
        }
        fVar4 = local_58._4_4_ * fVar6;
        goto LAB_1005374b0;
      }
      uVar7 = *(undefined4 *)((long)param_1 + 0x4a4);
    }
    fVar4 = (float)FUN_100656a78(param_1 + 0x53,uVar7);
LAB_100537490:
    if (*(float *)(param_1 + 0x41) != 0.0) {
      *(undefined4 *)(param_1 + 0x41) = 0;
LAB_1005374a0:
      FUN_1000200a0(plVar1);
    }
  }
  fVar4 = local_58._4_4_ * fVar4;
LAB_1005374b0:
  uVar7 = NEON_fminnm(fVar4,local_58._4_4_ * (fVar5 + -5.0));
  *(undefined4 *)(param_1 + 0x33) = uVar7;
  *(undefined4 *)((long)param_1 + 0x19c) = 0;
  *(undefined1 *)(param_1 + 0x36) = param_2;
  return;
}




long FUN_10053750c(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = FUN_100642ed4();
  if ((((*(byte *)(param_1 + 0x4a0) >> 4 & 1) != 0) && (lVar2 != param_1)) &&
     ((uVar3 = FUN_10109c508(0), (uVar3 & 1) != 0 ||
      ((uVar3 = FUN_10109c508(2), (uVar3 & 1) != 0 || (iVar1 = FUN_10109c508(1), iVar1 != 0)))))) {
    FUN_100537100(param_1);
    *(byte *)(param_1 + 0x4a8) = *(byte *)(param_1 + 0x4a8) & 0xfd;
  }
  return lVar2;
}




void FUN_10053757c(long param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x4a8);
  if ((param_3 & 1) == 0) {
    if ((bVar1 >> 1 & 1) == 0) {
      FUN_100537100(param_1);
      bVar1 = *(byte *)(param_1 + 0x4a8);
    }
    *(byte *)(param_1 + 0x4a8) = bVar1 & 0xfd;
    return;
  }
  *(byte *)(param_1 + 0x4a8) = bVar1 | 2;
  FUN_100536fe0(param_1);
  return;
}




void FUN_1005375d0(long param_1)

{
  if (*(long **)(param_1 + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x58))();
  }
  FUN_10065146c(param_1 + 0x1c8);
  if ((*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffff807f;
    FUN_1000200a0(param_1);
    return;
  }
  return;
}




void FUN_10053762c(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010053763c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x58))();
    return;
  }
  return;
}




void FUN_100537644(long param_1)

{
  FUN_1005375d0(param_1 + -0xb8);
  return;
}




void FUN_10053764c(long param_1)

{
  if ((*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffff807f;
    FUN_1000200a0();
    return;
  }
  return;
}




void FUN_100537668(long param_1)

{
  if ((*(uint *)(param_1 + -0x34) & 0x7f80) != 0) {
    *(uint *)(param_1 + -0x34) = *(uint *)(param_1 + -0x34) & 0xffff807f;
    FUN_1000200a0(param_1 + -0xb8);
    return;
  }
  return;
}




void FUN_10053768c(undefined8 param_1)

{
  FUN_1006415a8();
  FUN_100537164(param_1);
  FUN_100537390(param_1,0);
  return;
}




void FUN_1005376bc(long param_1)

{
  param_1 = param_1 + -0xb8;
  FUN_1006415a8(param_1);
  FUN_100537164(param_1);
  FUN_100537390(param_1,0);
  return;
}




void FUN_1005376f0(undefined8 param_1)

{
  FUN_1006415a8();
  FUN_100537164(param_1);
  FUN_100537390(param_1,0);
  return;
}




void FUN_100537720(long param_1)

{
  param_1 = param_1 + -0xb8;
  FUN_1006415a8(param_1);
  FUN_100537164(param_1);
  FUN_100537390(param_1,0);
  return;
}




void FUN_100537754(void)

{
  return;
}




void FUN_100537758(void)

{
  return;
}




void FUN_10053775c(void)

{
  return;
}




void FUN_100537760(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100537764);
  (*pcVar1)();
}




void FUN_100537764(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100537768);
  (*pcVar1)();
}




void FUN_100537768(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100537778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x48))();
    return;
  }
  return;
}




void FUN_100537780(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100537790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x50))();
    return;
  }
  return;
}




void FUN_100537798(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001005377a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x60))();
    return;
  }
  return;
}




void FUN_1005377b0(void)

{
  return;
}




void FUN_1005377b4(void)

{
  return;
}




void FUN_1005377b8(void)

{
  return;
}




void FUN_1005377bc(void)

{
  return;
}




void FUN_1005377c0(void)

{
  return;
}




void FUN_1005377c4(void)

{
  return;
}




void FUN_1005377c8(void)

{
  return;
}




void FUN_1005377cc(void)

{
  return;
}




void FUN_1005377d0(void)

{
  return;
}




void FUN_1005377d4(void)

{
  return;
}




void FUN_1005377d8(void)

{
  return;
}




void FUN_1005377dc(long param_1)

{
  FUN_100651904(param_1 + 0x1c8);
  return;
}




undefined8 FUN_1005377e4(void)

{
  return 0;
}




byte FUN_1005377ec(long param_1)

{
  return *(byte *)(param_1 + 0x4a8) & 1;
}




byte FUN_1005377f8(long param_1)

{
  return *(byte *)(param_1 + 0x4a0) >> 6 & 1;
}




byte FUN_100537804(long param_1)

{
  return *(byte *)(param_1 + 0x4a0) >> 7;
}




undefined8 FUN_100537810(void)

{
  return 1;
}




undefined8 FUN_100537818(void)

{
  return 0;
}




undefined8 FUN_100537820(void)

{
  return 1;
}




undefined8 FUN_100537828(void)

{
  return 0;
}




undefined8 FUN_100537830(void)

{
  return 0;
}




undefined8 FUN_100537838(void)

{
  return 1;
}




undefined8 FUN_100537840(void)

{
  return 0;
}




byte FUN_100537848(long param_1)

{
  return *(byte *)(param_1 + 0x4a0) & 7;
}




long FUN_100537854(long param_1)

{
  return param_1 + 0x298;
}




long FUN_10053785c(long param_1)

{
  return param_1 + 0x298;
}




void FUN_100537864(void)

{
  return;
}




void FUN_100537868(void)

{
  return;
}




undefined4 FUN_10053786c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x498);
}




void FUN_100537874(long param_1)

{
  FUN_100655b6c(param_1 + 0x298);
  return;
}




long FUN_10053787c(long param_1)

{
  return param_1 + 0x1b8;
}




void FUN_100537884(long param_1)

{
  FUN_100651904(param_1 + 0x110);
  return;
}




undefined8 FUN_10053788c(void)

{
  return 0;
}




byte FUN_100537894(long param_1)

{
  return *(byte *)(param_1 + 0x3f0) & 1;
}




byte FUN_1005378a0(long param_1)

{
  return *(byte *)(param_1 + 1000) >> 6 & 1;
}




byte FUN_1005378ac(long param_1)

{
  return *(byte *)(param_1 + 1000) >> 7;
}




undefined8 FUN_1005378b8(void)

{
  return 1;
}




undefined8 FUN_1005378c0(void)

{
  return 0;
}




undefined8 FUN_1005378c8(void)

{
  return 1;
}




undefined8 FUN_1005378d0(void)

{
  return 0;
}




undefined8 FUN_1005378d8(void)

{
  return 0;
}




undefined8 FUN_1005378e0(void)

{
  return 1;
}




undefined8 FUN_1005378e8(void)

{
  return 0;
}




byte FUN_1005378f0(long param_1)

{
  return *(byte *)(param_1 + 1000) & 7;
}




long FUN_1005378fc(long param_1)

{
  return param_1 + 0x1e0;
}




long FUN_100537904(long param_1)

{
  return param_1 + 0x1e0;
}




long FUN_10053790c(long param_1)

{
  return param_1 + -0xb8;
}




long FUN_100537914(long param_1)

{
  return param_1 + -0xb8;
}




undefined4 FUN_10053791c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3e0);
}




void FUN_100537924(long param_1)

{
  FUN_100655b6c(param_1 + 0x1e0);
  return;
}




long FUN_10053792c(long param_1)

{
  return param_1 + 0x100;
}




void FUN_100537934(void)

{
  return;
}




void FUN_100537938(void)

{
  return;
}




undefined8 * FUN_10053793c(void)

{
  return &DAT_101d91650;
}




void FUN_100537948(void)

{
  return;
}




void FUN_10053794c(void)

{
  return;
}




void FUN_100537950(void)

{
  return;
}




void FUN_100537954(void)

{
  return;
}




undefined8 * FUN_100537958(undefined8 *param_1)

{
  FUN_100538294(param_1 + 2,1);
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




undefined8 * FUN_100537994(undefined8 *param_1)

{
  FUN_100538724(param_1 + 2,1);
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




undefined8 * FUN_1005379d0(undefined8 *param_1)

{
  FUN_1005387b0(param_1 + 2,1);
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




undefined8 * FUN_100537a0c(undefined8 *param_1)

{
  FUN_10053883c(param_1 + 2,1);
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




undefined8 * FUN_100537a48(undefined8 *param_1)

{
  FUN_1005388c8(param_1 + 2,1);
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




undefined8 * FUN_100537a84(undefined8 *param_1)

{
  FUN_100538954(param_1 + 2,1);
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




undefined8 * FUN_100537ac0(undefined8 *param_1)

{
  FUN_1005389e0(param_1 + 2,1);
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




undefined8 * FUN_100537afc(undefined8 *param_1)

{
  FUN_100538a6c(param_1 + 2,1);
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




undefined8 * FUN_100537b38(undefined8 *param_1)

{
  FUN_100538af8(param_1 + 2,1);
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




void FUN_100537b74(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10149f870;
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_1014a7108;
  param_1[0x46] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49);
  FUN_10064e2bc(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




bool FUN_100537c14(undefined8 param_1,int param_2)

{
  return DAT_101d918ec == param_2;
}




bool FUN_100537c2c(undefined8 param_1,int param_2)

{
  return DAT_101d918f0 == param_2;
}




void FUN_100537c40(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100535744();
  operator_delete(pvVar1);
  return;
}




void FUN_100537c54(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100535744();
  operator_delete(pvVar1);
  return;
}




bool FUN_100537c6c(undefined8 param_1,int param_2)

{
  return DAT_101dbd4e0 == param_2;
}




void FUN_100537c84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a0f40;
  FUN_10109c65c(0);
  FUN_10109ffb8(param_1);
  return;
}




void FUN_100537cb8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014a0f40;
  FUN_10109c65c(0);
  pvVar1 = (void *)FUN_10109ffb8(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100537cf0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  
  (**(code **)(**(long **)(param_1 + 8) + 0xd0))();
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  FUN_100644f6c(auStack_48,DAT_101dbd4b4,uVar1);
  FUN_100644c34(uVar1,auStack_48,1);
  return;
}




void FUN_100537d60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  
  (**(code **)(**(long **)(param_1 + 8) + 0xd8))();
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  FUN_100644f6c(auStack_48,DAT_101dbd4bc,uVar1);
  FUN_100644b24(auStack_48,param_2);
  FUN_100644c34(uVar1,auStack_48,1);
  return;
}




void FUN_100537de0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  
  (**(code **)(**(long **)(param_1 + 8) + 0xe0))();
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  FUN_100644f6c(auStack_48,DAT_101dbd4b8,uVar1);
  FUN_100644b24(auStack_48,param_2);
  FUN_100644c34(uVar1,auStack_48,1);
  return;
}




void FUN_100537e60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  
  (**(code **)(**(long **)(param_1 + 8) + 0xe8))();
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  FUN_100644f6c(auStack_48,DAT_101dbd4ac,uVar1);
  FUN_100644b24(auStack_48,param_2);
  FUN_100644c34(uVar1,auStack_48,1);
  return;
}




void FUN_100537ee0(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  
  (**(code **)(**(long **)(param_1 + 8) + 0xf0))();
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  FUN_100644f6c(auStack_48,DAT_101dbd4c4,uVar1);
  FUN_100644b24(auStack_48,param_3);
  FUN_100644c34(uVar1,auStack_48,1);
  return;
}




void FUN_100537f60(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  
  (**(code **)(**(long **)(param_1 + 8) + 0xf8))();
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  FUN_100644f6c(auStack_48,DAT_101dbd4c8,uVar1);
  FUN_100644b24(auStack_48,param_3);
  FUN_100644c34(uVar1,auStack_48,1);
  return;
}




void FUN_100537fe0(undefined4 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined4 uStack_5c;
  undefined1 auStack_58 [40];
  
  uVar1 = (**(code **)(*(long *)param_2[1] + 0x90))();
  FUN_100644f6c(auStack_58,DAT_101dbd4c0,uVar1);
  FUN_100644b24(auStack_58,CONCAT44(uStack_5c,param_1));
  FUN_100644c34(uVar1,auStack_58,1);
  (**(code **)(*param_2 + 0x50))(param_2);
  return;
}




void FUN_10053806c(long param_1,int param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined1 auStack_58 [8];
  
  if (param_2 != 0) {
    plVar2 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x90))();
    (**(code **)(*plVar2 + 0x68))(plVar2,auStack_58,local_60);
    local_68 = CONCAT44(local_60._4_4_ - auStack_58._4_4_,local_60._0_4_ - auStack_58._0_4_);
    uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0xb0))();
    uVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x78))();
    uVar7 = (**(code **)(**(long **)(param_1 + 8) + 0xa0))();
    uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    uVar6 = (**(code **)(**(long **)(param_1 + 8) + 0xa8))();
    uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x30))();
    (**(code **)(**(long **)(param_1 + 8) + 0x38))();
    FUN_10109c5f8(uVar7,param_1,uVar3,auStack_58,&local_68,uVar4,uVar5,0,uVar6,uVar1);
    return;
  }
  FUN_10109c65c(0);
  return;
}




void FUN_10053819c(long param_1)

{
  long *plVar1;
  undefined8 local_28;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  
  plVar1 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x90))();
  (**(code **)(*plVar1 + 0x68))(plVar1,local_18,local_20);
  local_28 = CONCAT44(local_20._4_4_ - local_18._4_4_,local_20._0_4_ - local_18._0_4_);
  FUN_10109c69c(local_18,&local_28,0);
  return;
}




void FUN_1005381fc(void)

{
  return;
}




int * FUN_100538200(int *param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ushort *)(param_1 + 0x5e);
  *(ushort *)(param_1 + 0x5e) = uVar2 | 0x3e0;
  uVar1 = uVar2 & 0x1f;
  if (uVar1 != 0x1f) {
    if (*param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 2);
    }
    (**(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x16))
              (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0xe),
               *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0x10),uVar3);
  }
  return param_1;
}




void FUN_100538264(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(*(long *)(param_1 + ((long)param_3 >> 1)) +
                     ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x000100538280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}




void FUN_100538288(long param_1)

{
  FUN_10052fe74(param_1 + 0xb8,0);
  return;
}




void FUN_100538294(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x28;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((void *)puVar2[1] != (void *)0x0) {
          operator_delete__((void *)puVar2[1]);
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        if ((void *)puVar2[-1] != (void *)0x0) {
          operator_delete__((void *)puVar2[-1]);
          puVar2[-2] = 0;
          puVar2[-1] = 0;
        }
        puVar2 = puVar2 + 5;
        lVar1 = lVar1 + -0x28;
      } while (lVar1 != 0);
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




void FUN_100538320(uint *param_1,uint param_2)

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




void FUN_10053839c(uint *param_1,uint param_2)

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




undefined8 *
FUN_100538418(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (param_3 != param_4) {
    uVar13 = (long)param_4 - (long)param_3;
    puVar9 = *(undefined8 **)(param_1 + 2);
    uVar10 = (long)param_2 - (long)puVar9;
    uVar1 = *param_1;
    uVar12 = (ulong)uVar1;
    uVar2 = param_1[1];
    uVar5 = (uint)(uVar13 >> 4);
    if (uVar2 - uVar1 < uVar5) {
      uVar1 = uVar1 + uVar5;
      uVar5 = 0;
      if (uVar2 != 0xffffffff) {
        uVar5 = uVar2 + (~uVar2 | 0xfffffff0) + 0x11;
      }
      if (uVar2 < 0x20) {
        uVar5 = uVar2 << 1;
      }
      uVar2 = uVar1;
      if (uVar1 <= uVar5) {
        uVar2 = uVar5;
      }
      puVar4 = operator_new__((ulong)uVar2 << 4);
      puVar3 = puVar4;
      for (puVar6 = puVar9; puVar6 != param_2; puVar6 = puVar6 + 2) {
        uVar8 = *puVar6;
        puVar3[1] = puVar6[1];
        *puVar3 = uVar8;
        puVar3 = puVar3 + 2;
      }
      uVar11 = uVar10 >> 4 & 0xffffffff;
      _memcpy(puVar4 + (uVar10 >> 4 & 0xffffffff) * 2,param_3,uVar13 & 0xfffffffffffffff0);
      uVar12 = (long)puVar9 + (uVar12 * 0x10 - (long)param_2);
      if (uVar12 != 0) {
        _memcpy((void *)((long)puVar4 + (uVar13 & 0xffffffff0) + uVar11 * 0x10),param_2,
                uVar12 & 0xfffffffffffffff0);
      }
      if (puVar9 != (undefined8 *)0x0) {
        operator_delete__(puVar9);
      }
      *(undefined8 **)(param_1 + 2) = puVar4;
      *param_1 = uVar1;
      param_1[1] = uVar2;
    }
    else {
      puVar4 = puVar9 + uVar12 * 2;
      uVar11 = (ulong)((long)puVar4 - (long)param_2) >> 4;
      if (uVar5 < (uint)uVar11) {
        uVar13 = uVar13 >> 4 & 0xffffffff;
        if (uVar13 != 0) {
          lVar7 = 0;
          do {
            puVar9 = (undefined8 *)((long)puVar4 + lVar7 + uVar13 * -0x10);
            uVar8 = *puVar9;
            ((undefined8 *)((long)puVar4 + lVar7))[1] = puVar9[1];
            *(undefined8 *)((long)puVar4 + lVar7) = uVar8;
            lVar7 = lVar7 + 0x10;
          } while (lVar7 != uVar13 * 0x10);
          uVar12 = (ulong)*param_1;
          puVar9 = *(undefined8 **)(param_1 + 2);
        }
        lVar7 = (long)(puVar9 + (uVar12 - uVar13) * 2) - (long)param_2;
        if (lVar7 != 0) {
          puVar9 = puVar9 + (uVar12 - uVar13) * 2;
          do {
            puVar4 = (undefined8 *)((long)param_2 + lVar7 + uVar13 * 0x10 + -0x10);
            uVar8 = puVar9[-2];
            *(undefined8 *)((long)puVar4 + 7) = *(undefined8 *)((long)puVar9 + -9);
            *puVar4 = uVar8;
            lVar7 = lVar7 + -0x10;
            puVar9 = puVar9 + -2;
          } while (lVar7 != 0);
        }
        do {
          uVar8 = *param_3;
          *(undefined8 *)((long)param_2 + 7) = *(undefined8 *)((long)param_3 + 7);
          *param_2 = uVar8;
          param_3 = param_3 + 2;
          param_2 = param_2 + 2;
        } while (param_3 != param_4);
      }
      else {
        if (puVar4 != param_2) {
          puVar9 = param_2;
          do {
            uVar8 = *puVar9;
            (puVar9 + (uVar13 >> 4 & 0xffffffff) * 2)[1] = puVar9[1];
            puVar9[(uVar13 >> 4 & 0xffffffff) * 2] = uVar8;
            puVar9 = puVar9 + 2;
          } while (puVar9 != puVar4);
          uVar12 = (ulong)*param_1;
          puVar9 = *(undefined8 **)(param_1 + 2);
        }
        uVar13 = (ulong)((long)puVar4 - (long)param_2) >> 4 & 0xffffffff;
        if (param_3 + (uVar11 & 0xffffffff) * 2 != param_4) {
          puVar4 = param_3 + (uVar11 & 0xffffffff) * 2;
          puVar9 = puVar9 + uVar12 * 2;
          do {
            puVar6 = puVar4 + 2;
            uVar8 = *puVar4;
            puVar9[1] = puVar4[1];
            *puVar9 = uVar8;
            puVar4 = puVar6;
            puVar9 = puVar9 + 2;
          } while (puVar6 != param_4);
        }
        if (uVar13 != 0) {
          lVar7 = uVar13 << 4;
          do {
            uVar8 = *param_3;
            *(undefined8 *)((long)param_2 + 7) = *(undefined8 *)((long)param_3 + 7);
            *param_2 = uVar8;
            param_3 = param_3 + 2;
            lVar7 = lVar7 + -0x10;
            param_2 = param_2 + 2;
          } while (lVar7 != 0);
        }
      }
      *param_1 = *param_1 + uVar5;
      puVar4 = *(undefined8 **)(param_1 + 2);
      uVar11 = uVar10 >> 4 & 0xffffffff;
    }
    param_2 = puVar4 + uVar11 * 2;
  }
  return param_2;
}




void FUN_10053866c(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 4);
  if (uVar3 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar3 * 0x10);
    if (puVar1 != param_3) {
      do {
        uVar4 = *param_3;
        *(undefined8 *)((long)param_2 + 7) = *(undefined8 *)((long)param_3 + 7);
        *param_2 = uVar4;
        param_3 = param_3 + 2;
        param_2 = param_2 + 2;
      } while (param_3 != puVar1);
      uVar3 = *param_1;
    }
    *param_1 = uVar3 - uVar2;
  }
  return;
}




void FUN_1005386e8(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100642d08(param_1 + 0x110);
  if (iVar1 != 0) {
    FUN_1006423ec(param_1 + 0x110,1);
    return;
  }
  return;
}




void FUN_100538724(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x28;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((void *)puVar2[1] != (void *)0x0) {
          operator_delete__((void *)puVar2[1]);
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        if ((void *)puVar2[-1] != (void *)0x0) {
          operator_delete__((void *)puVar2[-1]);
          puVar2[-2] = 0;
          puVar2[-1] = 0;
        }
        puVar2 = puVar2 + 5;
        lVar1 = lVar1 + -0x28;
      } while (lVar1 != 0);
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




void FUN_1005387b0(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x28;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((void *)puVar2[1] != (void *)0x0) {
          operator_delete__((void *)puVar2[1]);
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        if ((void *)puVar2[-1] != (void *)0x0) {
          operator_delete__((void *)puVar2[-1]);
          puVar2[-2] = 0;
          puVar2[-1] = 0;
        }
        puVar2 = puVar2 + 5;
        lVar1 = lVar1 + -0x28;
      } while (lVar1 != 0);
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




void FUN_10053883c(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x28;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((void *)puVar2[1] != (void *)0x0) {
          operator_delete__((void *)puVar2[1]);
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        if ((void *)puVar2[-1] != (void *)0x0) {
          operator_delete__((void *)puVar2[-1]);
          puVar2[-2] = 0;
          puVar2[-1] = 0;
        }
        puVar2 = puVar2 + 5;
        lVar1 = lVar1 + -0x28;
      } while (lVar1 != 0);
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




void FUN_1005388c8(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x28;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((void *)puVar2[1] != (void *)0x0) {
          operator_delete__((void *)puVar2[1]);
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        if ((void *)puVar2[-1] != (void *)0x0) {
          operator_delete__((void *)puVar2[-1]);
          puVar2[-2] = 0;
          puVar2[-1] = 0;
        }
        puVar2 = puVar2 + 5;
        lVar1 = lVar1 + -0x28;
      } while (lVar1 != 0);
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




void FUN_100538954(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x28;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((void *)puVar2[1] != (void *)0x0) {
          operator_delete__((void *)puVar2[1]);
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        if ((void *)puVar2[-1] != (void *)0x0) {
          operator_delete__((void *)puVar2[-1]);
          puVar2[-2] = 0;
          puVar2[-1] = 0;
        }
        puVar2 = puVar2 + 5;
        lVar1 = lVar1 + -0x28;
      } while (lVar1 != 0);
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




void FUN_1005389e0(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x28;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((void *)puVar2[1] != (void *)0x0) {
          operator_delete__((void *)puVar2[1]);
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        if ((void *)puVar2[-1] != (void *)0x0) {
          operator_delete__((void *)puVar2[-1]);
          puVar2[-2] = 0;
          puVar2[-1] = 0;
        }
        puVar2 = puVar2 + 5;
        lVar1 = lVar1 + -0x28;
      } while (lVar1 != 0);
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




void FUN_100538a6c(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x28;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((void *)puVar2[1] != (void *)0x0) {
          operator_delete__((void *)puVar2[1]);
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        if ((void *)puVar2[-1] != (void *)0x0) {
          operator_delete__((void *)puVar2[-1]);
          puVar2[-2] = 0;
          puVar2[-1] = 0;
        }
        puVar2 = puVar2 + 5;
        lVar1 = lVar1 + -0x28;
      } while (lVar1 != 0);
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




void FUN_100538af8(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x28;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((void *)puVar2[1] != (void *)0x0) {
          operator_delete__((void *)puVar2[1]);
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        if ((void *)puVar2[-1] != (void *)0x0) {
          operator_delete__((void *)puVar2[-1]);
          puVar2[-2] = 0;
          puVar2[-1] = 0;
        }
        puVar2 = puVar2 + 5;
        lVar1 = lVar1 + -0x28;
      } while (lVar1 != 0);
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




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100538b84(void)

{
  if ((DAT_101867640 & 1) == 0) {
    uRam0000000101867628 = 0;
    _DAT_101867620 = 0;
    uRam0000000101867638 = 0;
    _DAT_101867630 = 0;
    ___cxa_atexit(FUN_100537958,&DAT_101867620,0x100000000);
    DAT_101867640 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100538bd4(void)

{
  if ((DAT_101867668 & 1) == 0) {
    uRam0000000101867650 = 0;
    _DAT_101867648 = 0;
    uRam0000000101867660 = 0;
    _DAT_101867658 = 0;
    ___cxa_atexit(FUN_100537994,&DAT_101867648,0x100000000);
    DAT_101867668 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100538c24(void)

{
  if ((DAT_101867690 & 1) == 0) {
    uRam0000000101867678 = 0;
    _DAT_101867670 = 0;
    uRam0000000101867688 = 0;
    _DAT_101867680 = 0;
    ___cxa_atexit(FUN_1005379d0,&DAT_101867670,0x100000000);
    DAT_101867690 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100538c74(void)

{
  if ((DAT_1018676b8 & 1) == 0) {
    uRam00000001018676a0 = 0;
    _DAT_101867698 = 0;
    uRam00000001018676b0 = 0;
    _DAT_1018676a8 = 0;
    ___cxa_atexit(FUN_100537a0c,&DAT_101867698,0x100000000);
    DAT_1018676b8 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100538cc4(void)

{
  if ((DAT_1018676e0 & 1) == 0) {
    uRam00000001018676c8 = 0;
    _DAT_1018676c0 = 0;
    uRam00000001018676d8 = 0;
    _DAT_1018676d0 = 0;
    ___cxa_atexit(FUN_100537a48,&DAT_1018676c0,0x100000000);
    DAT_1018676e0 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100538d14(void)

{
  if ((DAT_101867708 & 1) == 0) {
    uRam00000001018676f0 = 0;
    _DAT_1018676e8 = 0;
    uRam0000000101867700 = 0;
    _DAT_1018676f8 = 0;
    ___cxa_atexit(FUN_100537a84,&DAT_1018676e8,0x100000000);
    DAT_101867708 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100538d64(void)

{
  if ((DAT_101867730 & 1) == 0) {
    uRam0000000101867718 = 0;
    _DAT_101867710 = 0;
    uRam0000000101867728 = 0;
    _DAT_101867720 = 0;
    ___cxa_atexit(FUN_100537ac0,&DAT_101867710,0x100000000);
    DAT_101867730 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100538db4(void)

{
  if ((DAT_101867758 & 1) == 0) {
    uRam0000000101867740 = 0;
    _DAT_101867738 = 0;
    uRam0000000101867750 = 0;
    _DAT_101867748 = 0;
    ___cxa_atexit(FUN_100537afc,&DAT_101867738,0x100000000);
    DAT_101867758 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100538e04(void)

{
  if ((DAT_101867780 & 1) == 0) {
    uRam0000000101867768 = 0;
    _DAT_101867760 = 0;
    uRam0000000101867778 = 0;
    _DAT_101867770 = 0;
    ___cxa_atexit(FUN_100537b38,&DAT_101867760,0x100000000);
    DAT_101867780 = 1;
  }
  return;
}




void FUN_100538e54(void)

{
  DAT_101e947b8 = 0xff;
  DAT_101e947ba = 0xffff;
  DAT_101e947bc = 0xffff;
  DAT_101d91888 = FUN_100644a94("UI::EVENT_FLICKABLE_LAYER_HORIZONTAL_MOVE");
  DAT_101d9188c = FUN_100644a94("UI::EVENT_FLICKABLE_LAYER_VERTICAL_MOVE");
  DAT_101d91890 = FUN_100644a94("UI::EVENT_POPUP_OPEN");
  DAT_101d91894 = FUN_100644a94("UI::EVENT_POPUP_CLOSE");
  DAT_101d91898 = FUN_100644a94("UI::EVENT_POPUP_FOREGROUND");
  DAT_101d9189c = FUN_100644a94("UI::EVENT_POPUP_BACKGROUND");
  DAT_101d918a0 = FUN_100644a94("UI::EVENT_POPUP_STACK_EMPTY");
  DAT_101d918a4 = FUN_100644a94("UI::EVENT_POPUP_STACK_ACTIVE");
  DAT_101e947c0 = 0x4326000041900000;
  DAT_101e947c8 = 0x4326000041c00000;
  DAT_101e947d0 = 0x3f8000003ecccccd;
  DAT_101e947d8 = 0x3ecccccd3f800000;
  DAT_101d918b4 = FUN_100644a94("UI::EVENT_SCROLLVIEW_HORIZONTAL_MOVE");
  DAT_101d918b8 = FUN_100644a94("UI::EVENT_SCROLLVIEW_VERTICAL_MOVE");
  DAT_101d918c0 = FUN_100644a94("UI::EVENT_DIALOG");
  DAT_101d918c4 = FUN_100644a94("UI::EVENT_DIALOG_ACCEPT");
  DAT_101d918c8 = FUN_100644a94("UI::EVENT_DIALOG_REJECT");
  DAT_101d918cc = FUN_100644a94("UI::EVENT_SELECT");
  DAT_101d91884 = FUN_100644a94("UI::EVENT_SELECT_ITEM");
  DAT_101d918bc = FUN_100644a94("UI::EVENT_DESELECT_ITEM");
  DAT_101d918d0 = FUN_100644a94("UI::EVENT_DOUBLE_CLICK");
  DAT_101d918d4 = FUN_100644a94("UI::EVENT_FOREGROUND");
  DAT_101d918d8 = FUN_100644a94("UI::EVENT_BACKGROUND");
  DAT_101d918dc = FUN_100644a94("UI::EVENT_SCREEN");
  DAT_101d918ac = FUN_100644a94("UI::EVENT_SCREEN_SHOW");
  DAT_101d918a8 = FUN_100644a94("UI::EVENT_SCREEN_HIDE");
  DAT_101d918b0 = FUN_100644a94("UI::EVENT_SCREEN_HIDDEN");
  DAT_101d918e0 = FUN_100644a94("UI::EVENT_TAP_AND_HOLD_STARTED");
  DAT_101d918e4 = FUN_100644a94("UI::EVENT_TAP_AND_HOLD_CANCELED");
  DAT_101d918e8 = FUN_100644a94("UI::EVENT_TAP_AND_HOLD_COMPLETED");
  DAT_101d918ec = DAT_101d918cc;
  DAT_101d918f0 = DAT_101d918dc;
  return;
}




void FUN_1005390ec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Subroutine does not return */
  _longjmp((int *)(lVar1 + 0xa8),1);
}




void FUN_100539110(undefined8 param_1,undefined4 param_2,undefined8 *param_3,int *param_4,
                  uint *param_5)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  long local_478;
  code *local_470 [21];
  int aiStack_3c8 [48];
  undefined8 local_308 [17];
  int local_280;
  uint local_27c;
  int local_274;
  uint local_260;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  local_308[0] = FUN_1005437d4(local_470);
  local_470[0] = FUN_1005390ec;
  iVar2 = _setjmp(aiStack_3c8);
  if (iVar2 == 0) {
    FUN_100539384(local_308,0x5a,0x298);
    FUN_10053ad7c(local_308,param_1,param_2);
    iVar2 = FUN_100539480(local_308,1);
    if (iVar2 == 1) {
      FUN_100539834(local_308);
      uVar1 = local_27c;
      pvVar3 = operator_new__((ulong)(local_274 * local_280 * local_27c));
      if (local_260 < uVar1) {
        do {
          local_478 = (long)pvVar3 + (ulong)(local_274 * local_280 * local_260);
          FUN_100539a4c(local_308,&local_478,1);
        } while (local_260 < local_27c);
      }
      FUN_100539754(local_308);
      thunk_FUN_1005392fc(local_308);
      if (param_4 != (int *)0x0) {
        *param_4 = local_280;
      }
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar1;
      }
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = pvVar3;
      }
      uVar4 = 1;
      goto LAB_100539270;
    }
  }
  else {
    thunk_FUN_1005392fc(local_308);
  }
  uVar4 = 0;
LAB_100539270:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}




void FUN_1005392ac(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x48))(param_1,1);
    if (*(int *)(param_1 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x24) = 100;
    }
    else {
      *(undefined4 *)(param_1 + 0x24) = 200;
      *(undefined8 *)(param_1 + 0x198) = 0;
    }
  }
  return;
}




void FUN_1005392fc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x50))(param_1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}




void FUN_100539334(long param_1)

{
  long lVar1;
  
  lVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x84);
  *(undefined4 *)(lVar1 + 0x80) = 0;
  return;
}




void FUN_10053935c(long param_1)

{
  long lVar1;
  
  lVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x118);
  *(undefined4 *)(lVar1 + 0x114) = 0;
  return;
}




void FUN_100539384(long *param_1,int param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  param_1[1] = 0;
  if (param_2 != 0x5a) {
    *(undefined8 *)(*param_1 + 0x28) = 0x5a0000000d;
    *(int *)(*param_1 + 0x30) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_3 != 0x298) {
    *(undefined8 *)(*param_1 + 0x28) = 0x29800000016;
    *(int *)(*param_1 + 0x30) = (int)param_3;
    (**(code **)*param_1)(param_1);
  }
  lVar1 = *param_1;
  lVar2 = param_1[3];
  _bzero(param_1,0x298);
  *param_1 = lVar1;
  param_1[3] = lVar2;
  *(undefined4 *)(param_1 + 4) = 1;
  FUN_10054a2bc(param_1);
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[0x33] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  FUN_1005400a4(param_1);
  FUN_10053ee88(param_1);
  *(undefined4 *)((long)param_1 + 0x24) = 200;
  return;
}




void thunk_FUN_1005392fc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x50))(param_1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}




undefined8 FUN_100539480(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar1 = *(uint *)((long)param_1 + 0x24);
  if ((uVar1 & 0xfffffffe) != 200) {
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x28) = 0x15;
    *(uint *)(lVar4 + 0x2c) = uVar1;
    (**(code **)*param_1)(param_1);
  }
  uVar2 = FUN_100539510(param_1);
  if ((int)uVar2 == 2) {
    if (param_2 != 0) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x35;
      (*(code *)*puVar3)(param_1);
    }
    FUN_1005392ac(param_1);
  }
  return uVar2;
}




undefined8 FUN_100539510(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 uVar8;
  long lVar9;
  int *piVar10;
  
  uVar6 = *(undefined4 *)((long)param_1 + 0x24);
  uVar5 = 1;
  switch(uVar6) {
  case 200:
    break;
  case 0xc9:
    goto switchD_100539548_caseD_c9;
  case 0xca:
    goto switchD_100539548_caseD_ca;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
                    /* WARNING: Could not recover jumptable at 0x000100539560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)param_1[0x4c])(param_1);
    return uVar5;
  default:
    lVar9 = *param_1;
    *(undefined4 *)(lVar9 + 0x28) = 0x15;
    *(undefined4 *)(lVar9 + 0x2c) = uVar6;
    (**(code **)*param_1)(param_1);
    uVar5 = 0;
    goto switchD_100539548_caseD_ca;
  }
  (**(code **)(param_1[0x4c] + 8))(param_1);
  (**(code **)(param_1[5] + 0x10))(param_1);
  *(undefined4 *)((long)param_1 + 0x24) = 0xc9;
switchD_100539548_caseD_c9:
  uVar5 = (**(code **)param_1[0x4c])(param_1);
  if ((int)uVar5 != 1) {
    return uVar5;
  }
  iVar1 = (int)param_1[7];
  if (iVar1 == 1) {
    uVar6 = 1;
    uVar8 = 1;
  }
  else if (iVar1 == 4) {
    if ((*(int *)((long)param_1 + 0x184) == 0) || (bVar4 = *(byte *)(param_1 + 0x31), bVar4 == 0)) {
      uVar6 = 4;
      uVar8 = 4;
    }
    else {
      if (bVar4 != 2) {
        lVar9 = *param_1;
        *(undefined4 *)(lVar9 + 0x28) = 0x74;
        *(uint *)(lVar9 + 0x2c) = (uint)bVar4;
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
      }
      uVar8 = 4;
      uVar6 = 5;
    }
  }
  else if (iVar1 == 3) {
    if ((int)param_1[0x2f] == 0) {
      if (*(int *)((long)param_1 + 0x184) == 0) {
        piVar10 = (int *)param_1[0x26];
        iVar1 = *piVar10;
        iVar2 = piVar10[0x18];
        iVar3 = piVar10[0x30];
        if (((iVar1 != 1) || (iVar2 != 2)) || (iVar3 != 3)) {
          if (((iVar1 != 0x52) || (iVar2 != 0x47)) || (iVar3 != 0x42)) {
            lVar9 = *param_1;
            *(int *)(lVar9 + 0x30) = iVar2;
            *(int *)(lVar9 + 0x34) = iVar3;
            *(undefined4 *)(lVar9 + 0x28) = 0x71;
            *(int *)(lVar9 + 0x2c) = iVar1;
            pcVar7 = *(code **)(lVar9 + 8);
            uVar5 = 1;
            goto LAB_10053974c;
          }
          goto LAB_100539724;
        }
      }
      else {
        bVar4 = *(byte *)(param_1 + 0x31);
        if (bVar4 == 0) {
LAB_100539724:
          uVar6 = 2;
          uVar8 = 2;
          goto LAB_100539658;
        }
        if (bVar4 != 1) {
          lVar9 = *param_1;
          *(undefined4 *)(lVar9 + 0x28) = 0x74;
          *(uint *)(lVar9 + 0x2c) = (uint)bVar4;
          pcVar7 = *(code **)(*param_1 + 8);
          uVar5 = 0xffffffff;
LAB_10053974c:
          (*pcVar7)(param_1,uVar5);
        }
      }
    }
    uVar8 = 2;
    uVar6 = 3;
  }
  else {
    uVar6 = 0;
    uVar8 = 0;
  }
LAB_100539658:
  *(undefined4 *)((long)param_1 + 0x3c) = uVar6;
  *(undefined4 *)(param_1 + 8) = uVar8;
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)((long)param_1 + 0x22c);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)((long)param_1 + 0x22c);
  param_1[10] = 0x3ff0000000000000;
  param_1[0xc] = 0x100000000;
  param_1[0xb] = 0;
  param_1[0xe] = 0x100000002;
  param_1[0xd] = 1;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x100;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  param_1[0x10] = 0;
  uVar5 = 1;
  *(undefined4 *)((long)param_1 + 0x24) = 0xca;
switchD_100539548_caseD_ca:
  return uVar5;
}




undefined8 FUN_100539754(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if ((iVar1 - 0xcdU < 2) && ((int)param_1[0xb] == 0)) {
    if (*(uint *)(param_1 + 0x15) < *(uint *)((long)param_1 + 0x8c)) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x45;
      (*(code *)*puVar3)(param_1);
    }
    (**(code **)(param_1[0x48] + 8))(param_1);
  }
  else {
    if (iVar1 == 0xd2) goto LAB_1005397ec;
    if (iVar1 != 0xcf) {
      lVar4 = *param_1;
      *(undefined4 *)(lVar4 + 0x28) = 0x15;
      *(int *)(lVar4 + 0x2c) = iVar1;
      (**(code **)*param_1)(param_1);
      goto LAB_1005397ec;
    }
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0xd2;
LAB_1005397ec:
  do {
    if (*(int *)(param_1[0x4c] + 0x24) != 0) {
      (**(code **)(param_1[5] + 0x30))(param_1);
      FUN_1005392ac(param_1);
      return 1;
    }
    uVar2 = (**(code **)param_1[0x4c])(param_1);
  } while ((int)uVar2 != 0);
  return uVar2;
}




undefined8 FUN_100539834(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 != 0xcc) {
    if (iVar1 != 0xcb) {
      if (iVar1 != 0xca) {
        lVar5 = *param_1;
        *(undefined4 *)(lVar5 + 0x28) = 0x15;
        *(int *)(lVar5 + 0x2c) = iVar1;
        (**(code **)*param_1)(param_1);
        goto LAB_10053992c;
      }
      FUN_100542280(param_1);
      if ((int)param_1[0xb] != 0) {
        *(undefined4 *)((long)param_1 + 0x24) = 0xcf;
        return 1;
      }
      *(undefined4 *)((long)param_1 + 0x24) = 0xcb;
    }
    if (*(int *)(param_1[0x4c] + 0x20) != 0) {
      puVar4 = (undefined8 *)param_1[2];
      while( true ) {
        if (puVar4 != (undefined8 *)0x0) {
          (*(code *)*puVar4)(param_1);
        }
        uVar3 = (**(code **)param_1[0x4c])(param_1);
        uVar2 = (uint)uVar3;
        if (uVar2 == 0) {
          return uVar3;
        }
        if (uVar2 == 2) break;
        puVar4 = (undefined8 *)param_1[2];
        if ((puVar4 != (undefined8 *)0x0) && ((uVar2 & 0xfffffffd) == 1)) {
          lVar5 = puVar4[1];
          puVar4[1] = lVar5 + 1;
          if ((long)puVar4[2] <= lVar5 + 1) {
            puVar4[2] = puVar4[2] + (ulong)*(uint *)(param_1 + 0x36);
          }
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)((long)param_1 + 0xac);
  }
LAB_10053992c:
  uVar3 = FUN_10053993c(param_1);
  return uVar3;
}




undefined8 FUN_10053993c(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x24) != 0xcc) {
    (*(code *)**(undefined8 **)(param_1 + 0x240))(param_1);
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0xcc;
  }
  if (*(int *)(*(long *)(param_1 + 0x240) + 0x10) != 0) {
    uVar4 = *(uint *)(param_1 + 0xa8);
    do {
      while (uVar1 = *(uint *)(param_1 + 0x8c), uVar4 < uVar1) {
        puVar3 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = uVar4;
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[1] = (ulong)uVar4;
          puVar3[2] = (ulong)uVar1;
          (*(code *)*puVar3)(param_1);
          uVar5 = *(uint *)(param_1 + 0xa8);
        }
        (**(code **)(*(long *)(param_1 + 0x248) + 8))(param_1,0,(uint *)(param_1 + 0xa8),0);
        uVar4 = *(uint *)(param_1 + 0xa8);
        if (uVar4 == uVar5) {
          return 0;
        }
      }
      (**(code **)(*(long *)(param_1 + 0x240) + 8))(param_1);
      (*(code *)**(undefined8 **)(param_1 + 0x240))(param_1);
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0xa8) = 0;
    } while (*(int *)(*(long *)(param_1 + 0x240) + 0x10) != 0);
  }
  uVar2 = 0xcd;
  if (*(int *)(param_1 + 0x5c) != 0) {
    uVar2 = 0xce;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  return 1;
}




int FUN_100539a4c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  int local_34;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 != 0xcd) {
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0x15;
    *(int *)(lVar3 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  uVar2 = *(uint *)((long)param_1 + 0x8c);
  if (*(uint *)(param_1 + 0x15) < uVar2) {
    puVar4 = (undefined8 *)param_1[2];
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = (ulong)*(uint *)(param_1 + 0x15);
      puVar4[2] = (ulong)uVar2;
      (*(code *)*puVar4)(param_1);
    }
    local_34 = 0;
    (**(code **)(param_1[0x49] + 8))(param_1,param_2,&local_34,param_3);
    *(int *)(param_1 + 0x15) = (int)param_1[0x15] + local_34;
  }
  else {
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0x7e;
    (**(code **)(lVar3 + 8))(param_1,0xffffffff);
    local_34 = 0;
  }
  return local_34;
}




void FUN_100539b24(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x150);
  *(undefined8 **)(param_1 + 0x270) = puVar1;
  *puVar1 = FUN_100539c18;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  *(undefined1 *)(puVar1 + 0x29) = 0x71;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0x26] = 0;
  puVar1[0x25] = 0;
  puVar1[0x28] = 0;
  puVar1[0x27] = 0;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  puVar1[0x24] = 0;
  puVar1[0x23] = 0;
  if (*(int *)(param_1 + 0x13c) != 0) {
    puVar1 = (undefined8 *)
             (*(code *)**(undefined8 **)(param_1 + 8))
                       (param_1,1,(long)*(int *)(param_1 + 0x38) << 8);
    *(undefined8 **)(param_1 + 0xc0) = puVar1;
    if (0 < *(int *)(param_1 + 0x38)) {
      iVar2 = 0;
      do {
        puVar1[0x1d] = 0xffffffffffffffff;
        puVar1[0x1c] = 0xffffffffffffffff;
        puVar1[0x1f] = 0xffffffffffffffff;
        puVar1[0x1e] = 0xffffffffffffffff;
        puVar1[0x19] = 0xffffffffffffffff;
        puVar1[0x18] = 0xffffffffffffffff;
        puVar1[0x1b] = 0xffffffffffffffff;
        puVar1[0x1a] = 0xffffffffffffffff;
        puVar1[0x15] = 0xffffffffffffffff;
        puVar1[0x14] = 0xffffffffffffffff;
        puVar1[0x17] = 0xffffffffffffffff;
        puVar1[0x16] = 0xffffffffffffffff;
        puVar1[0x11] = 0xffffffffffffffff;
        puVar1[0x10] = 0xffffffffffffffff;
        puVar1[0x13] = 0xffffffffffffffff;
        puVar1[0x12] = 0xffffffffffffffff;
        puVar1[0xd] = 0xffffffffffffffff;
        puVar1[0xc] = 0xffffffffffffffff;
        puVar1[0xf] = 0xffffffffffffffff;
        puVar1[0xe] = 0xffffffffffffffff;
        puVar1[9] = 0xffffffffffffffff;
        puVar1[8] = 0xffffffffffffffff;
        puVar1[0xb] = 0xffffffffffffffff;
        puVar1[10] = 0xffffffffffffffff;
        puVar1[5] = 0xffffffffffffffff;
        puVar1[4] = 0xffffffffffffffff;
        puVar1[7] = 0xffffffffffffffff;
        puVar1[6] = 0xffffffffffffffff;
        puVar1[1] = 0xffffffffffffffff;
        *puVar1 = 0xffffffffffffffff;
        puVar1[3] = 0xffffffffffffffff;
        puVar1[2] = 0xffffffffffffffff;
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 0x20;
      } while (iVar2 < *(int *)(param_1 + 0x38));
    }
  }
  return;
}




void FUN_100539c18(long *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  
  lVar10 = param_1[0x4e];
  iVar4 = *(int *)((long)param_1 + 0x21c);
  if (*(int *)((long)param_1 + 0x13c) == 0) {
    if ((((iVar4 != 0) || (*(int *)((long)param_1 + 0x224) != 0)) || ((int)param_1[0x45] != 0)) ||
       (((int)param_1[0x44] < 0x40 && ((int)param_1[0x44] != (int)param_1[0x47])))) {
      lVar8 = *param_1;
      *(undefined4 *)(lVar8 + 0x28) = 0x7d;
      (**(code **)(lVar8 + 8))(param_1,0xffffffff);
    }
    *(code **)(lVar10 + 8) = FUN_10053a690;
    iVar4 = (int)param_1[0x38];
    goto LAB_100539e40;
  }
  iVar7 = (int)param_1[0x44];
  if (iVar4 == 0) {
    if (iVar7 == 0) goto LAB_100539cb8;
LAB_100539ce0:
    lVar8 = *param_1;
    *(undefined4 *)(lVar8 + 0x28) = 0x11;
    *(int *)(lVar8 + 0x2c) = iVar4;
    *(int *)(*param_1 + 0x30) = (int)param_1[0x44];
    *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)((long)param_1 + 0x224);
    *(int *)(*param_1 + 0x38) = (int)param_1[0x45];
    (**(code **)*param_1)(param_1);
  }
  else {
    if (((iVar7 < iVar4) || ((int)param_1[0x47] < iVar7)) || ((int)param_1[0x38] != 1))
    goto LAB_100539ce0;
LAB_100539cb8:
    if (*(int *)((long)param_1 + 0x224) == 0) {
      iVar7 = (int)param_1[0x45];
    }
    else {
      iVar7 = *(int *)((long)param_1 + 0x224) + -1;
      if (iVar7 != (int)param_1[0x45]) goto LAB_100539ce0;
    }
    if (0xd < iVar7) goto LAB_100539ce0;
  }
  iVar4 = (int)param_1[0x38];
  if (0 < iVar4) {
    lVar8 = 0;
    do {
      iVar4 = *(int *)(param_1[lVar8 + 0x39] + 4);
      lVar11 = param_1[0x18];
      iVar7 = *(int *)((long)param_1 + 0x21c);
      if ((iVar7 != 0) && (*(int *)(lVar11 + (long)iVar4 * 0x100) < 0)) {
        lVar5 = *param_1;
        *(undefined4 *)(lVar5 + 0x28) = 0x76;
        *(int *)(lVar5 + 0x2c) = iVar4;
        *(undefined4 *)(*param_1 + 0x30) = 0;
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        iVar7 = *(int *)((long)param_1 + 0x21c);
      }
      if (iVar7 <= (int)param_1[0x44]) {
        lVar11 = lVar11 + (long)iVar4 * 0x100;
        lVar5 = (long)iVar7;
        do {
          uVar2 = *(uint *)(lVar11 + lVar5 * 4);
          if (*(uint *)((long)param_1 + 0x224) != (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU))) {
            lVar6 = *param_1;
            *(undefined4 *)(lVar6 + 0x28) = 0x76;
            *(int *)(lVar6 + 0x2c) = iVar4;
            *(int *)(*param_1 + 0x30) = (int)lVar5;
            (**(code **)(*param_1 + 8))(param_1,0xffffffff);
          }
          *(int *)(lVar11 + lVar5 * 4) = (int)param_1[0x45];
          bVar1 = lVar5 < (int)param_1[0x44];
          lVar5 = lVar5 + 1;
        } while (bVar1);
      }
      lVar8 = lVar8 + 1;
      iVar4 = (int)param_1[0x38];
    } while (lVar8 < iVar4);
  }
  if (*(int *)((long)param_1 + 0x224) == 0) {
    if (*(int *)((long)param_1 + 0x21c) == 0) {
      pcVar9 = FUN_100539fc0;
    }
    else {
      pcVar9 = FUN_10053a1e8;
    }
  }
  else if (*(int *)((long)param_1 + 0x21c) == 0) {
    pcVar9 = FUN_10053a410;
  }
  else {
    pcVar9 = FUN_10053a4bc;
  }
  *(code **)(lVar10 + 8) = pcVar9;
LAB_100539e40:
  if (0 < iVar4) {
    lVar8 = 0;
    do {
      lVar11 = param_1[lVar8 + 0x39];
      if (*(int *)((long)param_1 + 0x13c) == 0) {
LAB_100539e70:
        uVar2 = *(uint *)(lVar11 + 0x14);
        if (0xf < uVar2) {
          lVar5 = *param_1;
          *(undefined4 *)(lVar5 + 0x28) = 0x32;
          *(uint *)(lVar5 + 0x2c) = uVar2;
          (**(code **)*param_1)(param_1);
        }
        puVar12 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x48);
        puVar3 = (undefined8 *)*puVar12;
        if (puVar3 == (undefined8 *)0x0) {
          puVar3 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x40);
          *puVar12 = puVar3;
        }
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[7] = 0;
        puVar3[6] = 0;
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        lVar5 = lVar10 + lVar8 * 4;
        *(undefined4 *)(lVar5 + 0x24) = 0;
        *(undefined4 *)(lVar5 + 0x34) = 0;
        if (*(int *)((long)param_1 + 0x13c) == 0) {
          iVar4 = (int)param_1[0x47];
        }
        else {
          iVar4 = *(int *)((long)param_1 + 0x21c);
        }
        if (iVar4 != 0) {
LAB_100539ef4:
          uVar2 = *(uint *)(lVar11 + 0x18);
          if (0xf < uVar2) {
            lVar11 = *param_1;
            *(undefined4 *)(lVar11 + 0x28) = 0x32;
            *(uint *)(lVar11 + 0x2c) = uVar2;
            (**(code **)*param_1)(param_1);
          }
          puVar12 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 200);
          puVar3 = (undefined8 *)*puVar12;
          if (puVar3 == (undefined8 *)0x0) {
            puVar3 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x100);
            *puVar12 = puVar3;
          }
          puVar3[0x1d] = 0;
          puVar3[0x1c] = 0;
          puVar3[0x1f] = 0;
          puVar3[0x1e] = 0;
          puVar3[0x19] = 0;
          puVar3[0x18] = 0;
          puVar3[0x1b] = 0;
          puVar3[0x1a] = 0;
          puVar3[0x15] = 0;
          puVar3[0x14] = 0;
          puVar3[0x17] = 0;
          puVar3[0x16] = 0;
          puVar3[0x11] = 0;
          puVar3[0x10] = 0;
          puVar3[0x13] = 0;
          puVar3[0x12] = 0;
          puVar3[0xd] = 0;
          puVar3[0xc] = 0;
          puVar3[0xf] = 0;
          puVar3[0xe] = 0;
          puVar3[9] = 0;
          puVar3[8] = 0;
          puVar3[0xb] = 0;
          puVar3[10] = 0;
          puVar3[5] = 0;
          puVar3[4] = 0;
          puVar3[7] = 0;
          puVar3[6] = 0;
          puVar3[1] = 0;
          *puVar3 = 0;
          puVar3[3] = 0;
          puVar3[2] = 0;
        }
      }
      else {
        if (*(int *)((long)param_1 + 0x21c) != 0) goto LAB_100539ef4;
        if (*(int *)((long)param_1 + 0x224) == 0) goto LAB_100539e70;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_1[0x38]);
  }
  *(undefined8 *)(lVar10 + 0x10) = 0;
  *(undefined8 *)(lVar10 + 0x18) = 0;
  *(undefined4 *)(lVar10 + 0x20) = 0xfffffff0;
  *(undefined4 *)(lVar10 + 0x44) = *(undefined4 *)((long)param_1 + 0x174);
  return;
}




undefined8 FUN_100539fc0(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  
  lVar10 = param_1[0x4e];
  if (*(int *)((long)param_1 + 0x174) != 0) {
    iVar3 = *(int *)(lVar10 + 0x44);
    if (iVar3 == 0) {
      FUN_10053aa44(param_1);
      iVar3 = *(int *)(lVar10 + 0x44);
    }
    *(int *)(lVar10 + 0x44) = iVar3 + -1;
  }
  if ((*(int *)(lVar10 + 0x20) != -1) && (0 < (int)param_1[0x3e])) {
    lVar11 = 0;
    do {
      puVar6 = *(undefined2 **)(param_2 + lVar11 * 8);
      lVar14 = (long)*(int *)((long)param_1 + lVar11 * 4 + 500);
      lVar7 = (long)*(int *)(param_1[lVar14 + 0x39] + 0x14);
      plVar13 = (long *)(lVar10 + lVar7 * 8 + 0x48);
      lVar9 = lVar10 + lVar14 * 4;
      piVar12 = (int *)(lVar9 + 0x34);
      lVar1 = *plVar13 + (long)*piVar12;
      iVar3 = FUN_10053ab50(param_1,lVar1);
      if (iVar3 == 0) {
        *piVar12 = 0;
        iVar3 = *(int *)(lVar9 + 0x24);
      }
      else {
        iVar3 = FUN_10053ab50(param_1,lVar1 + 1);
        lVar9 = lVar1 + iVar3 + 2;
        uVar4 = FUN_10053ab50(param_1,lVar9);
        if (uVar4 != 0) {
          lVar9 = *plVar13 + 0x14;
          while (iVar5 = FUN_10053ab50(param_1,lVar9), iVar5 != 0) {
            uVar4 = uVar4 << 1;
            if (uVar4 == 0x8000) {
              lVar11 = *param_1;
              *(undefined4 *)(lVar11 + 0x28) = 0x75;
              (**(code **)(lVar11 + 8))(param_1,0xffffffff);
              *(undefined4 *)(lVar10 + 0x20) = 0xffffffff;
              return 1;
            }
            lVar9 = lVar9 + 1;
          }
        }
        if ((int)uVar4 <
            (int)((ulong)(1L << ((ulong)*(byte *)((long)param_1 + lVar7 + 0x144) & 0x3f)) >> 1)) {
          iVar5 = 0;
        }
        else {
          iVar5 = iVar3 * 4 + 4;
          if ((int)((ulong)(1L << ((ulong)*(byte *)((long)param_1 + lVar7 + 0x154) & 0x3f)) >> 1) <
              (int)uVar4) {
            iVar5 = iVar3 * 4 + 0xc;
          }
        }
        *piVar12 = iVar5;
        if (1 < uVar4) {
          uVar8 = uVar4;
          do {
            uVar8 = (int)uVar8 >> 1;
            iVar5 = FUN_10053ab50(param_1,lVar9 + 0xe);
            uVar2 = 0;
            if (iVar5 != 0) {
              uVar2 = uVar8;
            }
            uVar4 = uVar2 | uVar4;
          } while (1 < uVar8);
        }
        uVar8 = ~uVar4;
        if (iVar3 == 0) {
          uVar8 = uVar4 + 1;
        }
        lVar9 = lVar10 + lVar14 * 4;
        iVar3 = *(int *)(lVar9 + 0x24) + uVar8;
        *(int *)(lVar9 + 0x24) = iVar3;
      }
      *puVar6 = (short)(iVar3 << (ulong)(*(uint *)(param_1 + 0x45) & 0x1f));
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[0x3e]);
  }
  return 1;
}




undefined8 FUN_10053a1e8(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  
  lVar12 = param_1[0x4e];
  if (*(int *)((long)param_1 + 0x174) != 0) {
    iVar8 = *(int *)(lVar12 + 0x44);
    if (iVar8 == 0) {
      FUN_10053aa44(param_1);
      iVar8 = *(int *)(lVar12 + 0x44);
    }
    *(int *)(lVar12 + 0x44) = iVar8 + -1;
  }
  if (*(int *)(lVar12 + 0x20) != -1) {
    lVar13 = param_1[0x46];
    lVar9 = *param_2;
    iVar3 = *(int *)(param_1[0x39] + 0x18);
    iVar8 = *(int *)((long)param_1 + 0x21c) + -1;
    plVar1 = (long *)(lVar12 + (long)iVar3 * 8 + 200);
    do {
      lVar10 = *plVar1;
      iVar4 = FUN_10053ab50(param_1,lVar10 + iVar8 * 3);
      if (iVar4 != 0) {
        return 1;
      }
      lVar10 = lVar10 + iVar8 * 3 + 2;
      piVar14 = (int *)(lVar13 + (long)(iVar8 + 1) * 4);
      iVar4 = iVar8;
      while( true ) {
        iVar8 = iVar4 + 1;
        iVar5 = FUN_10053ab50(param_1,lVar10 + -1);
        if (iVar5 != 0) break;
        lVar10 = lVar10 + 3;
        piVar14 = piVar14 + 1;
        iVar4 = iVar8;
        if ((int)param_1[0x44] <= iVar8) goto LAB_10053a3c8;
      }
      iVar5 = FUN_10053ab50(param_1,lVar12 + 0x148);
      uVar6 = FUN_10053ab50(param_1,lVar10);
      if (uVar6 == 0) {
        uVar6 = 0;
      }
      else {
        iVar7 = FUN_10053ab50(param_1,lVar10);
        if (iVar7 != 0) {
          uVar6 = uVar6 << 1;
          lVar10 = 0xbd;
          if ((int)(uint)*(byte *)((long)param_1 + (long)iVar3 + 0x164) <= iVar4) {
            lVar10 = 0xd9;
          }
          lVar10 = *plVar1 + lVar10;
          while (iVar4 = FUN_10053ab50(param_1,lVar10), iVar4 != 0) {
            uVar6 = uVar6 << 1;
            if (uVar6 == 0x8000) {
LAB_10053a3c8:
              lVar9 = *param_1;
              *(undefined4 *)(lVar9 + 0x28) = 0x75;
              (**(code **)(lVar9 + 8))(param_1,0xffffffff);
              *(undefined4 *)(lVar12 + 0x20) = 0xffffffff;
              return 1;
            }
            lVar10 = lVar10 + 1;
          }
        }
        if (1 < uVar6) {
          uVar11 = uVar6;
          do {
            uVar11 = (int)uVar11 >> 1;
            iVar4 = FUN_10053ab50(param_1,lVar10 + 0xe);
            uVar2 = 0;
            if (iVar4 != 0) {
              uVar2 = uVar11;
            }
            uVar6 = uVar2 | uVar6;
          } while (1 < uVar11);
        }
      }
      uVar11 = ~uVar6;
      if (iVar5 == 0) {
        uVar11 = uVar6 + 1;
      }
      *(short *)(lVar9 + (long)*piVar14 * 2) =
           (short)(uVar11 << (ulong)(*(uint *)(param_1 + 0x45) & 0x1f));
    } while (iVar8 < (int)param_1[0x44]);
  }
  return 1;
}




undefined8 FUN_10053a410(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x270);
  if (*(int *)(param_1 + 0x174) != 0) {
    iVar2 = *(int *)(lVar4 + 0x44);
    if (iVar2 == 0) {
      FUN_10053aa44(param_1);
      iVar2 = *(int *)(lVar4 + 0x44);
    }
    *(int *)(lVar4 + 0x44) = iVar2 + -1;
  }
  if (0 < *(int *)(param_1 + 0x1f0)) {
    lVar5 = 0;
    uVar1 = *(uint *)(param_1 + 0x228);
    do {
      iVar2 = FUN_10053ab50(param_1,lVar4 + 0x148);
      if (iVar2 != 0) {
        puVar3 = *(ushort **)(param_2 + lVar5 * 8);
        *puVar3 = *puVar3 | (ushort)(1 << (ulong)(uVar1 & 0x1f));
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x1f0));
  }
  return 1;
}




undefined8 FUN_10053a4bc(long *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  short *psVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  int local_68;
  int iStack_64;
  
  lVar9 = param_1[0x4e];
  if (*(int *)((long)param_1 + 0x174) != 0) {
    iVar4 = *(int *)(lVar9 + 0x44);
    if (iVar4 == 0) {
      FUN_10053aa44(param_1);
      iVar4 = *(int *)(lVar9 + 0x44);
    }
    *(int *)(lVar9 + 0x44) = iVar4 + -1;
  }
  if (*(int *)(lVar9 + 0x20) != -1) {
    lVar5 = param_1[0x46];
    lVar10 = *param_2;
    iVar4 = *(int *)(param_1[0x39] + 0x18);
    iStack_64 = 1 << (ulong)(*(uint *)(param_1 + 0x45) & 0x1f);
    local_68 = -1 << (ulong)(*(uint *)(param_1 + 0x45) & 0x1f);
    uVar14 = (ulong)(int)param_1[0x44];
    piVar6 = (int *)(lVar5 + uVar14 * 4);
    do {
      iVar13 = (int)uVar14;
      if (*(short *)(lVar10 + (long)*piVar6 * 2) != 0) break;
      piVar6 = piVar6 + -1;
      uVar1 = iVar13 - 1;
      uVar14 = (ulong)uVar1;
      iVar13 = 0;
    } while (uVar1 != 0);
    iVar15 = *(int *)((long)param_1 + 0x21c) + -1;
    do {
      lVar7 = *(long *)(lVar9 + (long)iVar4 * 8 + 200);
      if ((iVar13 <= iVar15) && (iVar2 = FUN_10053ab50(param_1,lVar7 + iVar15 * 3), iVar2 != 0)) {
        return 1;
      }
      lVar11 = (long)iVar15;
      lVar7 = lVar7 + iVar15 * 3 + 2;
      while( true ) {
        iVar15 = iVar15 + 1;
        lVar12 = (long)*(int *)(lVar5 + 4 + lVar11 * 4);
        if (*(short *)(lVar10 + lVar12 * 2) != 0) break;
        iVar2 = FUN_10053ab50(param_1,lVar7 + -1);
        if (iVar2 != 0) {
          psVar8 = (short *)(lVar10 + lVar12 * 2);
          iVar2 = FUN_10053ab50(param_1,lVar9 + 0x148);
          piVar6 = &iStack_64;
          if (iVar2 != 0) {
            piVar6 = &local_68;
          }
          sVar3 = (short)*piVar6;
          goto LAB_10053a634;
        }
        lVar11 = lVar11 + 1;
        lVar7 = lVar7 + 3;
        if ((int)param_1[0x44] <= lVar11) {
          lVar5 = *param_1;
          *(undefined4 *)(lVar5 + 0x28) = 0x75;
          (**(code **)(lVar5 + 8))(param_1,0xffffffff);
          *(undefined4 *)(lVar9 + 0x20) = 0xffffffff;
          return 1;
        }
      }
      iVar2 = FUN_10053ab50(param_1,lVar7);
      if (iVar2 != 0) {
        psVar8 = (short *)(lVar10 + lVar12 * 2);
        piVar6 = &iStack_64;
        if (((long)*psVar8 & 0x80000000U) != 0) {
          piVar6 = &local_68;
        }
        sVar3 = *psVar8 + (short)*piVar6;
LAB_10053a634:
        *psVar8 = sVar3;
      }
    } while (iVar15 < (int)param_1[0x44]);
  }
  return 1;
}




undefined8 FUN_10053a690(long *param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined2 *puVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  int *piVar19;
  
  lVar16 = param_1[0x4e];
  if (*(int *)((long)param_1 + 0x174) != 0) {
    iVar3 = *(int *)(lVar16 + 0x44);
    if (iVar3 == 0) {
      FUN_10053aa44(param_1);
      iVar3 = *(int *)(lVar16 + 0x44);
    }
    *(int *)(lVar16 + 0x44) = iVar3 + -1;
  }
  if ((*(int *)(lVar16 + 0x20) != -1) && (0 < (int)param_1[0x3e])) {
    lVar11 = 0;
    lVar8 = param_1[0x46];
    do {
      puVar13 = *(undefined2 **)(param_2 + lVar11 * 8);
      lVar18 = (long)*(int *)((long)param_1 + lVar11 * 4 + 500);
      lVar9 = param_1[lVar18 + 0x39];
      lVar12 = (long)*(int *)(lVar9 + 0x14);
      plVar17 = (long *)(lVar16 + lVar12 * 8 + 0x48);
      lVar10 = lVar16 + lVar18 * 4;
      piVar19 = (int *)(lVar10 + 0x34);
      lVar14 = *plVar17 + (long)*piVar19;
      iVar3 = FUN_10053ab50(param_1,lVar14);
      if (iVar3 == 0) {
        *piVar19 = 0;
        iVar3 = *(int *)(lVar10 + 0x24);
      }
      else {
        iVar3 = FUN_10053ab50(param_1,lVar14 + 1);
        lVar10 = lVar14 + iVar3 + 2;
        uVar4 = FUN_10053ab50(param_1,lVar10);
        if (uVar4 != 0) {
          lVar10 = *plVar17 + 0x14;
          iVar5 = FUN_10053ab50(param_1,lVar10);
          while (iVar5 != 0) {
            uVar4 = uVar4 << 1;
            if (uVar4 == 0x8000) {
LAB_10053a9fc:
              lVar11 = *param_1;
              *(undefined4 *)(lVar11 + 0x28) = 0x75;
              (**(code **)(lVar11 + 8))(param_1,0xffffffff);
              *(undefined4 *)(lVar16 + 0x20) = 0xffffffff;
              return 1;
            }
            lVar10 = lVar10 + 1;
            iVar5 = FUN_10053ab50(param_1,lVar10);
          }
        }
        if ((int)uVar4 <
            (int)((ulong)(1L << ((ulong)*(byte *)((long)param_1 + lVar12 + 0x144) & 0x3f)) >> 1)) {
          iVar5 = 0;
        }
        else {
          iVar5 = iVar3 * 4 + 4;
          if ((int)((ulong)(1L << ((ulong)*(byte *)((long)param_1 + lVar12 + 0x154) & 0x3f)) >> 1) <
              (int)uVar4) {
            iVar5 = iVar3 * 4 + 0xc;
          }
        }
        *piVar19 = iVar5;
        if (1 < uVar4) {
          uVar15 = uVar4;
          do {
            uVar15 = (int)uVar15 >> 1;
            iVar5 = FUN_10053ab50(param_1,lVar10 + 0xe);
            uVar1 = 0;
            if (iVar5 != 0) {
              uVar1 = uVar15;
            }
            uVar4 = uVar1 | uVar4;
          } while (1 < uVar15);
        }
        uVar15 = ~uVar4;
        if (iVar3 == 0) {
          uVar15 = uVar4 + 1;
        }
        lVar10 = lVar16 + lVar18 * 4;
        iVar3 = uVar15 + *(int *)(lVar10 + 0x24);
        *(int *)(lVar10 + 0x24) = iVar3;
      }
      *puVar13 = (short)iVar3;
      if ((int)param_1[0x47] != 0) {
        iVar3 = 0;
        lVar10 = (long)*(int *)(lVar9 + 0x18);
        plVar17 = (long *)(lVar16 + lVar10 * 8 + 200);
        do {
          lVar14 = *plVar17;
          iVar5 = FUN_10053ab50(param_1,lVar14 + iVar3 * 3);
          if (iVar5 != 0) break;
          lVar14 = lVar14 + iVar3 * 3 + 2;
          piVar19 = (int *)(lVar8 + (long)(iVar3 + 1) * 4);
          iVar5 = iVar3;
          while( true ) {
            iVar3 = iVar5 + 1;
            iVar6 = FUN_10053ab50(param_1,lVar14 + -1);
            if (iVar6 != 0) break;
            lVar14 = lVar14 + 3;
            piVar19 = piVar19 + 1;
            iVar5 = iVar3;
            if ((int)param_1[0x47] <= iVar3) goto LAB_10053a9fc;
          }
          iVar6 = FUN_10053ab50(param_1,lVar16 + 0x148);
          uVar4 = FUN_10053ab50(param_1,lVar14);
          if (uVar4 == 0) {
            uVar4 = 0;
          }
          else {
            iVar7 = FUN_10053ab50(param_1,lVar14);
            if (iVar7 != 0) {
              uVar4 = uVar4 << 1;
              lVar14 = 0xbd;
              if ((int)(uint)*(byte *)((long)param_1 + lVar10 + 0x164) <= iVar5) {
                lVar14 = 0xd9;
              }
              lVar14 = *plVar17 + lVar14;
              while (iVar5 = FUN_10053ab50(param_1,lVar14), iVar5 != 0) {
                uVar4 = uVar4 << 1;
                if (uVar4 == 0x8000) goto LAB_10053a9fc;
                lVar14 = lVar14 + 1;
              }
            }
            if (1 < uVar4) {
              uVar15 = uVar4;
              do {
                uVar15 = (int)uVar15 >> 1;
                iVar5 = FUN_10053ab50(param_1,lVar14 + 0xe);
                uVar1 = 0;
                if (iVar5 != 0) {
                  uVar1 = uVar15;
                }
                uVar4 = uVar1 | uVar4;
              } while (1 < uVar15);
            }
          }
          uVar2 = ~(ushort)uVar4;
          if (iVar6 == 0) {
            uVar2 = (ushort)uVar4 + 1;
          }
          puVar13[*piVar19] = uVar2;
        } while (iVar3 < (int)param_1[0x47]);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[0x3e]);
  }
  return 1;
}




void FUN_10053aa44(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = param_1[0x4e];
  iVar2 = (**(code **)(param_1[0x4d] + 0x10))();
  if (iVar2 == 0) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
  if (0 < (int)param_1[0x38]) {
    lVar4 = 0;
    do {
      lVar5 = param_1[lVar4 + 0x39];
      if (*(int *)((long)param_1 + 0x13c) == 0) {
LAB_10053aab4:
        puVar3 = *(undefined8 **)(lVar6 + (long)*(int *)(lVar5 + 0x14) * 8 + 0x48);
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[7] = 0;
        puVar3[6] = 0;
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        lVar1 = lVar6 + lVar4 * 4;
        *(undefined4 *)(lVar1 + 0x24) = 0;
        *(undefined4 *)(lVar1 + 0x34) = 0;
        if (*(int *)((long)param_1 + 0x13c) == 0) {
          iVar2 = (int)param_1[0x47];
        }
        else {
          iVar2 = *(int *)((long)param_1 + 0x21c);
        }
        if (iVar2 != 0) {
LAB_10053aae4:
          puVar3 = *(undefined8 **)(lVar6 + (long)*(int *)(lVar5 + 0x18) * 8 + 200);
          puVar3[0x1d] = 0;
          puVar3[0x1c] = 0;
          puVar3[0x1f] = 0;
          puVar3[0x1e] = 0;
          puVar3[0x19] = 0;
          puVar3[0x18] = 0;
          puVar3[0x1b] = 0;
          puVar3[0x1a] = 0;
          puVar3[0x15] = 0;
          puVar3[0x14] = 0;
          puVar3[0x17] = 0;
          puVar3[0x16] = 0;
          puVar3[0x11] = 0;
          puVar3[0x10] = 0;
          puVar3[0x13] = 0;
          puVar3[0x12] = 0;
          puVar3[0xd] = 0;
          puVar3[0xc] = 0;
          puVar3[0xf] = 0;
          puVar3[0xe] = 0;
          puVar3[9] = 0;
          puVar3[8] = 0;
          puVar3[0xb] = 0;
          puVar3[10] = 0;
          puVar3[5] = 0;
          puVar3[4] = 0;
          puVar3[7] = 0;
          puVar3[6] = 0;
          puVar3[1] = 0;
          *puVar3 = 0;
          puVar3[3] = 0;
          puVar3[2] = 0;
        }
      }
      else {
        if (*(int *)((long)param_1 + 0x21c) != 0) goto LAB_10053aae4;
        if (*(int *)((long)param_1 + 0x224) == 0) goto LAB_10053aab4;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)param_1[0x38]);
  }
  *(undefined8 *)(lVar6 + 0x10) = 0;
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined4 *)(lVar6 + 0x20) = 0xfffffff0;
  *(undefined4 *)(lVar6 + 0x44) = *(undefined4 *)((long)param_1 + 0x174);
  return;
}




ulong FUN_10053ab50(long param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar12 = *(long *)(param_1 + 0x270);
  lVar10 = *(long *)(lVar12 + 0x18);
  uVar6 = (ulong)*(uint *)(lVar12 + 0x20);
  while (lVar10 < 0x8000) {
    iVar3 = (int)uVar6;
    uVar5 = iVar3 - 1;
    *(uint *)(lVar12 + 0x20) = uVar5;
    uVar6 = (ulong)uVar5;
    if (iVar3 < 1) {
      if (*(int *)(param_1 + 0x23c) == 0) {
        iVar3 = FUN_10053acac(param_1);
        if (iVar3 == 0xff) {
          do {
            iVar4 = FUN_10053acac(param_1);
          } while (iVar4 == 0xff);
          if (iVar4 == 0) {
            iVar3 = 0xff;
          }
          else {
            iVar3 = 0;
            *(int *)(param_1 + 0x23c) = iVar4;
          }
        }
        uVar5 = *(uint *)(lVar12 + 0x20);
      }
      else {
        iVar3 = 0;
      }
      *(long *)(lVar12 + 0x10) = (long)iVar3 | *(long *)(lVar12 + 0x10) << 8;
      *(uint *)(lVar12 + 0x20) = uVar5 + 8;
      uVar1 = uVar5 + 9;
      uVar6 = (ulong)(uVar5 + 8);
      if ((uVar1 == 0 || (int)uVar5 < -9) &&
         (*(uint *)(lVar12 + 0x20) = uVar1, uVar6 = (ulong)uVar1, uVar1 == 0)) {
        uVar6 = 0;
        *(undefined8 *)(lVar12 + 0x18) = 0x8000;
      }
    }
    lVar10 = *(long *)(lVar12 + 0x18) * 2;
    *(long *)(lVar12 + 0x18) = lVar10;
  }
  bVar2 = *param_2;
  uVar8 = (ulong)bVar2;
  lVar9 = *(long *)(&DAT_10115c378 + (uVar8 & 0x7f) * 8);
  lVar11 = lVar9 >> 0x10;
  lVar10 = lVar10 - lVar11;
  *(long *)(lVar12 + 0x18) = lVar10;
  lVar7 = lVar10 << (uVar6 & 0x3f);
  if (*(long *)(lVar12 + 0x10) < lVar7) {
    if (0x7fff < lVar10) goto LAB_10053ac98;
    if (lVar10 < lVar11) goto LAB_10053ac8c;
  }
  else {
    *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) - lVar7;
    *(long *)(lVar12 + 0x18) = lVar11;
    if (lVar11 <= lVar10) {
LAB_10053ac8c:
      *param_2 = bVar2 & 0x80 ^ (byte)lVar9;
      uVar8 = (ulong)(bVar2 ^ 0x80);
      goto LAB_10053ac98;
    }
  }
  *param_2 = bVar2 & 0x80 ^ (byte)((ulong)lVar9 >> 8);
LAB_10053ac98:
  return uVar8 >> 7;
}




undefined1 FUN_10053acac(long *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  plVar4 = (long *)param_1[5];
  if ((plVar4[1] == 0) && (iVar2 = (*(code *)plVar4[3])(), iVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
  puVar1 = (undefined1 *)*plVar4;
  *plVar4 = (long)(puVar1 + 1);
  plVar4[1] = plVar4[1] + -1;
  return *puVar1;
}




void FUN_10053ad0c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  if (0 < param_2) {
    plVar2 = *(long **)(param_1 + 0x28);
    lVar1 = plVar2[1];
    if (lVar1 < param_2) {
      do {
        param_2 = param_2 - lVar1;
        (*(code *)plVar2[3])(param_1);
        lVar1 = plVar2[1];
      } while (lVar1 < param_2);
    }
    *plVar2 = *plVar2 + param_2;
    plVar2[1] = lVar1 - param_2;
  }
  return;
}




void FUN_10053ad78(void)

{
  return;
}




void FUN_10053ad7c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x2b;
    (*(code *)*puVar2)(param_1);
  }
  plVar1 = (long *)param_1[5];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)(**(code **)param_1[1])(param_1,0,0x38);
    param_1[5] = (long)plVar1;
  }
  plVar1[2] = (long)FUN_10053ae24;
  plVar1[3] = (long)FUN_10053ae28;
  plVar1[4] = (long)FUN_10053ad0c;
  plVar1[5] = (long)FUN_10053fe48;
  plVar1[6] = (long)FUN_10053ad78;
  *plVar1 = param_2;
  plVar1[1] = param_3;
  return;
}




void FUN_10053ae24(void)

{
  return;
}




undefined8 FUN_10053ae28(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x28) = 0x7b;
  (**(code **)(lVar1 + 8))(param_1,0xffffffff);
  puVar2 = (undefined8 *)param_1[5];
  *puVar2 = &DAT_10115c73b;
  puVar2[1] = 2;
  return 1;
}




void FUN_10053ae74(long param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  undefined4 *puVar7;
  code *pcVar8;
  
  puVar2 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0xe0);
  *(undefined8 **)(param_1 + 0x250) = puVar2;
  *puVar2 = FUN_10053b020;
  puVar2[2] = FUN_10053b064;
  puVar2[0x1b] = 0;
  if (param_2 == 0) {
    pvVar5 = (void *)(**(code **)(*(long *)(param_1 + 8) + 8))(param_1,1,0x500);
    puVar2[8] = (long)pvVar5 + 0x80;
    puVar2[7] = pvVar5;
    puVar2[10] = (long)pvVar5 + 0x180;
    puVar2[9] = (long)pvVar5 + 0x100;
    puVar2[0xc] = (long)pvVar5 + 0x280;
    puVar2[0xb] = (long)pvVar5 + 0x200;
    puVar2[0xe] = (long)pvVar5 + 0x380;
    puVar2[0xd] = (long)pvVar5 + 0x300;
    puVar2[0x10] = (long)pvVar5 + 0x480;
    puVar2[0xf] = (long)pvVar5 + 0x400;
    if (*(int *)(param_1 + 0x238) == 0) {
      _bzero(pvVar5,0x500);
    }
    puVar2[1] = FUN_10053b580;
    puVar2[3] = FUN_10053b588;
    puVar2[4] = 0;
  }
  else {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar6 = 0;
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x130) + 0x1c);
      do {
        iVar1 = puVar7[-4];
        if (*(int *)(param_1 + 0x13c) != 0) {
          iVar1 = puVar7[-4] * 3;
        }
        pcVar8 = *(code **)(*(long *)(param_1 + 8) + 0x28);
        uVar3 = FUN_10054d2fc(*puVar7,(long)(int)puVar7[-5]);
        uVar4 = FUN_10054d2fc(puVar7[1],(long)(int)puVar7[-4]);
        uVar3 = (*pcVar8)(param_1,1,1,uVar3,uVar4,iVar1);
        (puVar2 + 0x11)[lVar6] = uVar3;
        lVar6 = lVar6 + 1;
        puVar7 = puVar7 + 0x18;
      } while (lVar6 < *(int *)(param_1 + 0x38));
    }
    puVar2[1] = FUN_10053b190;
    puVar2[3] = FUN_10053b3b0;
    puVar2[4] = puVar2 + 0x11;
  }
  return;
}




void FUN_10053b020(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0xb0) = 0;
  lVar2 = *(long *)(param_1 + 0x250);
  if (*(int *)(param_1 + 0x1c0) < 2) {
    lVar1 = 0x4c;
    if (*(int *)(param_1 + 0x1b0) != 1) {
      lVar1 = 0xc;
    }
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x1c8) + lVar1);
  }
  else {
    uVar3 = 1;
  }
  *(undefined4 *)(lVar2 + 0x30) = uVar3;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  return;
}




void FUN_10053b064(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  short *psVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x250);
  if (*(long *)(lVar9 + 0x20) == 0) goto LAB_10053b180;
  if (((*(int *)(param_1 + 0x68) == 0) || (*(int *)(param_1 + 0x13c) == 0)) ||
     (*(long *)(param_1 + 0xc0) == 0)) {
LAB_10053b174:
    pcVar4 = FUN_10053b3b0;
  }
  else {
    lVar3 = *(long *)(lVar9 + 0xd8);
    if (lVar3 == 0) {
      lVar3 = (*(code *)**(undefined8 **)(param_1 + 8))
                        (param_1,1,(long)*(int *)(param_1 + 0x38) * 0x18);
      *(long *)(lVar9 + 0xd8) = lVar3;
    }
    if (*(int *)(param_1 + 0x38) < 1) goto LAB_10053b174;
    lVar5 = 0;
    bVar2 = false;
    lVar6 = *(long *)(param_1 + 0x130);
    do {
      psVar7 = *(short **)(lVar6 + 0x50);
      if (((((psVar7 == (short *)0x0) || (*psVar7 == 0)) ||
           ((psVar7[1] == 0 || ((psVar7[8] == 0 || (psVar7[0x10] == 0)))))) || (psVar7[9] == 0)) ||
         ((psVar7[2] == 0 || (*(int *)(*(long *)(param_1 + 0xc0) + lVar5 * 0x100) < 0))))
      goto LAB_10053b174;
      lVar1 = *(long *)(param_1 + 0xc0) + lVar5 * 0x100;
      lVar8 = 4;
      do {
        *(undefined4 *)(lVar3 + lVar8) = *(undefined4 *)(lVar1 + lVar8);
        if (*(int *)(lVar1 + lVar8) != 0) {
          bVar2 = true;
        }
        lVar8 = lVar8 + 4;
      } while (lVar8 != 0x18);
      lVar3 = lVar3 + 0x18;
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x60;
    } while (lVar5 < *(int *)(param_1 + 0x38));
    if (!bVar2) goto LAB_10053b174;
    pcVar4 = FUN_10053b860;
  }
  *(code **)(lVar9 + 0x18) = pcVar4;
LAB_10053b180:
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}




void FUN_10053b190(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long local_68 [4];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  lVar14 = *(long *)(param_1 + 0x250);
  if (0 < *(int *)(param_1 + 0x1c0)) {
    lVar13 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x1c8 + lVar13 * 8);
      iVar5 = *(int *)(lVar6 + 0xc);
      lVar6 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                        (param_1,*(undefined8 *)(lVar14 + (long)*(int *)(lVar6 + 4) * 8 + 0x88),
                         iVar5 * *(int *)(param_1 + 0xb0),iVar5,1);
      local_68[lVar13] = lVar6;
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x1c0));
  }
  iVar5 = *(int *)(lVar14 + 0x30);
  lVar13 = (long)*(int *)(lVar14 + 0x2c);
  if (*(int *)(lVar14 + 0x2c) < iVar5) {
    uVar15 = *(uint *)(lVar14 + 0x28);
    uVar7 = *(uint *)(param_1 + 0x1e8);
    do {
      if (uVar15 < uVar7) {
        do {
          uVar7 = *(uint *)(param_1 + 0x1c0);
          if (0 < (int)uVar7) {
            uVar9 = 0;
            iVar5 = 0;
            do {
              lVar6 = *(long *)(param_1 + uVar9 * 8 + 0x1c8);
              uVar1 = *(uint *)(lVar6 + 0x3c);
              if (0 < (int)uVar1) {
                uVar10 = 0;
                iVar2 = *(int *)(lVar6 + 0x38);
                lVar6 = local_68[uVar9];
                do {
                  if (0 < iVar2) {
                    lVar3 = *(long *)(lVar6 + (uVar10 + lVar13) * 8) +
                            (ulong)(iVar2 * uVar15) * 0x80;
                    plVar11 = (long *)(lVar14 + 0x38 + (long)iVar5 * 8);
                    iVar12 = iVar2;
                    do {
                      *plVar11 = lVar3;
                      lVar3 = lVar3 + 0x80;
                      iVar5 = iVar5 + 1;
                      iVar12 = iVar12 + -1;
                      plVar11 = plVar11 + 1;
                    } while (iVar12 != 0);
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar10 != uVar1);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 != uVar7);
          }
          uVar4 = (**(code **)(*(long *)(param_1 + 0x270) + 8))(param_1,lVar14 + 0x38);
          if ((int)uVar4 == 0) {
            *(uint *)(lVar14 + 0x28) = uVar15;
            *(int *)(lVar14 + 0x2c) = (int)lVar13;
            goto LAB_10053b37c;
          }
          uVar15 = uVar15 + 1;
          uVar7 = *(uint *)(param_1 + 0x1e8);
        } while (uVar15 < uVar7);
        iVar5 = *(int *)(lVar14 + 0x30);
      }
      uVar15 = 0;
      *(undefined4 *)(lVar14 + 0x28) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar5);
  }
  uVar15 = *(int *)(param_1 + 0xb0) + 1;
  *(uint *)(param_1 + 0xb0) = uVar15;
  if (uVar15 < *(uint *)(param_1 + 0x1b0)) {
    lVar14 = *(long *)(param_1 + 0x250);
    if (*(int *)(param_1 + 0x1c0) < 2) {
      lVar13 = 0xc;
      if (*(uint *)(param_1 + 0x1b0) - 1 <= uVar15) {
        lVar13 = 0x4c;
      }
      uVar8 = *(undefined4 *)(*(long *)(param_1 + 0x1c8) + lVar13);
    }
    else {
      uVar8 = 1;
    }
    *(undefined4 *)(lVar14 + 0x30) = uVar8;
    uVar4 = 3;
    *(undefined8 *)(lVar14 + 0x28) = 0;
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x260) + 0x18))(param_1);
    uVar4 = 4;
  }
LAB_10053b37c:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}




ulong FUN_10053b3b0(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  code *pcVar11;
  uint uVar12;
  long local_68;
  
  lVar6 = *(long *)(param_1 + 0x250);
  iVar1 = *(int *)(param_1 + 0x1b0);
  while ((*(int *)(param_1 + 0xac) < *(int *)(param_1 + 0xb4) ||
         ((*(int *)(param_1 + 0xac) == *(int *)(param_1 + 0xb4) &&
          (*(uint *)(param_1 + 0xb0) <= *(uint *)(param_1 + 0xb8)))))) {
    uVar2 = (*(code *)**(undefined8 **)(param_1 + 0x260))(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    local_68 = 0;
    lVar7 = *(long *)(param_1 + 0x130);
    do {
      if (*(int *)(lVar7 + 0x34) != 0) {
        lVar3 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                          (param_1,*(undefined8 *)(lVar6 + local_68 * 8 + 0x88),
                           *(int *)(lVar7 + 0xc) * *(int *)(param_1 + 0xb8),*(int *)(lVar7 + 0xc),0)
        ;
        if (*(uint *)(param_1 + 0xb8) < iVar1 - 1U) {
          uVar4 = *(uint *)(lVar7 + 0xc);
        }
        else {
          uVar4 = *(uint *)(lVar7 + 0xc);
          uVar5 = 0;
          if (uVar4 != 0) {
            uVar5 = *(uint *)(lVar7 + 0x20) / uVar4;
          }
          uVar5 = *(uint *)(lVar7 + 0x20) - uVar5 * uVar4;
          if (uVar5 != 0) {
            uVar4 = uVar5;
          }
        }
        if (0 < (int)uVar4) {
          uVar2 = 0;
          pcVar11 = *(code **)(*(long *)(param_1 + 0x278) + local_68 * 8 + 8);
          lVar8 = *(long *)(param_2 + local_68 * 8);
          uVar5 = *(uint *)(lVar7 + 0x1c);
          do {
            if (uVar5 != 0) {
              iVar9 = 0;
              uVar12 = 0;
              lVar10 = *(long *)(lVar3 + uVar2 * 8);
              do {
                (*pcVar11)(param_1,lVar7,lVar10,lVar8,iVar9);
                lVar10 = lVar10 + 0x80;
                iVar9 = *(int *)(lVar7 + 0x24) + iVar9;
                uVar12 = uVar12 + 1;
                uVar5 = *(uint *)(lVar7 + 0x1c);
              } while (uVar12 < uVar5);
            }
            lVar8 = lVar8 + (long)*(int *)(lVar7 + 0x28) * 8;
            uVar2 = uVar2 + 1;
          } while (uVar2 != uVar4);
        }
      }
      local_68 = local_68 + 1;
      lVar7 = lVar7 + 0x60;
    } while (local_68 < *(int *)(param_1 + 0x38));
  }
  uVar4 = *(int *)(param_1 + 0xb8) + 1;
  *(uint *)(param_1 + 0xb8) = uVar4;
  uVar5 = 3;
  if (*(uint *)(param_1 + 0x1b0) <= uVar4) {
    uVar5 = 4;
  }
  return (ulong)uVar5;
}




undefined8 FUN_10053b580(void)

{
  return 0;
}




undefined8 FUN_10053b588(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  int iVar19;
  ulong uVar20;
  int local_74;
  
  lVar12 = *(long *)(param_1 + 0x250);
  uVar10 = *(uint *)(param_1 + 0x1b0);
  local_74 = *(int *)(lVar12 + 0x2c);
  iVar7 = *(int *)(lVar12 + 0x30);
  if (local_74 < iVar7) {
    uVar5 = *(int *)(param_1 + 0x1e8) - 1;
    puVar1 = (undefined8 *)(lVar12 + 0x38);
    uVar14 = *(uint *)(lVar12 + 0x28);
    do {
      if (uVar14 <= uVar5) {
        do {
          if (*(int *)(param_1 + 0x238) != 0) {
            _bzero((void *)*puVar1,(long)*(int *)(param_1 + 0x1f0) << 7);
          }
          uVar6 = (**(code **)(*(long *)(param_1 + 0x270) + 8))(param_1,puVar1);
          if ((int)uVar6 == 0) {
            *(uint *)(lVar12 + 0x28) = uVar14;
            *(int *)(lVar12 + 0x2c) = local_74;
            return uVar6;
          }
          iVar7 = *(int *)(param_1 + 0x1c0);
          if (0 < iVar7) {
            lVar13 = 0;
            iVar19 = 0;
            do {
              lVar16 = *(long *)(param_1 + lVar13 * 8 + 0x1c8);
              if (*(int *)(lVar16 + 0x34) == 0) {
                iVar19 = *(int *)(lVar16 + 0x40) + iVar19;
              }
              else {
                lVar17 = 0x38;
                if (uVar5 <= uVar14) {
                  lVar17 = 0x48;
                }
                iVar8 = *(int *)(lVar16 + 0x3c);
                if (0 < iVar8) {
                  iVar7 = 0;
                  pcVar18 = *(code **)(*(long *)(param_1 + 0x278) + (long)*(int *)(lVar16 + 4) * 8 +
                                      8);
                  uVar4 = *(uint *)(lVar16 + lVar17);
                  iVar9 = *(int *)(lVar16 + 0x28);
                  iVar3 = *(int *)(lVar16 + 0x44);
                  lVar17 = *(long *)(param_2 + (long)*(int *)(lVar16 + 4) * 8) +
                           (long)(iVar9 * local_74) * 8;
                  uVar2 = uVar4;
                  if ((int)uVar4 < 2) {
                    uVar2 = 1;
                  }
                  do {
                    if (*(uint *)(param_1 + 0xb0) < uVar10 - 1) {
                      if (0 < (int)uVar4) {
LAB_10053b700:
                        puVar15 = puVar1 + iVar19;
                        uVar20 = (ulong)uVar2;
                        iVar8 = iVar3 * uVar14;
                        do {
                          (*pcVar18)(param_1,lVar16,*puVar15,lVar17,iVar8);
                          iVar8 = *(int *)(lVar16 + 0x24) + iVar8;
                          uVar20 = uVar20 - 1;
                          puVar15 = puVar15 + 1;
                        } while (uVar20 != 0);
                        iVar9 = *(int *)(lVar16 + 0x28);
                        iVar8 = *(int *)(lVar16 + 0x3c);
                      }
                    }
                    else if (iVar7 + local_74 < *(int *)(lVar16 + 0x4c) && 0 < (int)uVar4)
                    goto LAB_10053b700;
                    iVar19 = *(int *)(lVar16 + 0x38) + iVar19;
                    lVar17 = lVar17 + (long)iVar9 * 8;
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < iVar8);
                  iVar7 = *(int *)(param_1 + 0x1c0);
                }
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < iVar7);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 <= uVar5);
        iVar7 = *(int *)(lVar12 + 0x30);
      }
      uVar14 = 0;
      *(undefined4 *)(lVar12 + 0x28) = 0;
      local_74 = local_74 + 1;
    } while (local_74 < iVar7);
    uVar10 = *(uint *)(param_1 + 0x1b0);
  }
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
  uVar14 = *(int *)(param_1 + 0xb0) + 1;
  *(uint *)(param_1 + 0xb0) = uVar14;
  if (uVar14 < uVar10) {
    lVar12 = *(long *)(param_1 + 0x250);
    if (*(int *)(param_1 + 0x1c0) < 2) {
      lVar13 = 0xc;
      if (uVar10 - 1 <= uVar14) {
        lVar13 = 0x4c;
      }
      uVar11 = *(undefined4 *)(*(long *)(param_1 + 0x1c8) + lVar13);
    }
    else {
      uVar11 = 1;
    }
    *(undefined4 *)(lVar12 + 0x30) = uVar11;
    uVar6 = 3;
    *(undefined8 *)(lVar12 + 0x28) = 0;
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x260) + 0x18))(param_1);
    uVar6 = 4;
  }
  return uVar6;
}




void FUN_10053b860(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ushort *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  code *pcVar23;
  ulong uVar24;
  uint uVar25;
  short *psVar26;
  short *psVar27;
  long lVar28;
  int iVar29;
  int iVar30;
  short *psVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  long local_1d0;
  long local_110;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  undefined1 auStack_f0 [2];
  short local_ee;
  short local_ec;
  short local_e0;
  short local_de;
  short local_d0;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar15 = *(long *)(param_1 + 0x250);
  uVar9 = *(int *)(param_1 + 0x1b0) - 1;
  do {
    if ((*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0xac)) ||
       (*(int *)((long)*(undefined8 **)(param_1 + 0x260) + 0x24) != 0)) {
LAB_10053b8fc:
      if (*(int *)(param_1 + 0x38) < 1) goto LAB_10053bdf4;
      local_1d0 = 0;
      lVar28 = *(long *)(param_1 + 0x130);
      goto LAB_10053b918;
    }
    if (*(int *)(param_1 + 0xac) == *(int *)(param_1 + 0xb4)) {
      uVar14 = *(uint *)(param_1 + 0xb8);
      if (*(int *)(param_1 + 0x21c) == 0) {
        uVar14 = uVar14 + 1;
      }
      if (uVar14 < *(uint *)(param_1 + 0xb0)) goto LAB_10053b8fc;
    }
    uVar11 = (*(code *)**(undefined8 **)(param_1 + 0x260))(param_1);
  } while ((int)uVar11 != 0);
  goto LAB_10053be10;
LAB_10053b918:
  do {
    if (*(int *)(lVar28 + 0x34) != 0) {
      uVar14 = *(uint *)(param_1 + 0xb8);
      if (uVar14 < uVar9) {
        uVar34 = *(uint *)(lVar28 + 0xc);
        uVar13 = uVar34 << 1;
        uVar25 = uVar34;
        if (uVar14 != 0) goto LAB_10053b940;
LAB_10053b998:
        lVar12 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                           (param_1,*(undefined8 *)(lVar15 + local_1d0 * 8 + 0x88),0,uVar13,0);
      }
      else {
        uVar34 = *(uint *)(lVar28 + 0xc);
        uVar13 = 0;
        if (uVar34 != 0) {
          uVar13 = *(uint *)(lVar28 + 0x20) / uVar34;
        }
        uVar25 = *(uint *)(lVar28 + 0x20) - uVar13 * uVar34;
        uVar13 = uVar34;
        if (uVar25 != 0) {
          uVar13 = uVar25;
        }
        uVar25 = uVar13;
        if (uVar14 == 0) goto LAB_10053b998;
LAB_10053b940:
        lVar12 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                           (param_1,*(undefined8 *)(lVar15 + local_1d0 * 8 + 0x88),
                            uVar34 * (uVar14 - 1),uVar34 + uVar13,0);
        lVar12 = lVar12 + (long)*(int *)(lVar28 + 0xc) * 8;
      }
      if (0 < (int)uVar25) {
        uVar11 = 0;
        lVar1 = *(long *)(lVar15 + 0xd8) + (ulong)(uint)((int)local_1d0 * 6) * 4;
        puVar16 = *(ushort **)(lVar28 + 0x50);
        uVar18 = (ulong)*puVar16;
        uVar20 = (ulong)puVar16[1];
        uVar21 = (ulong)puVar16[8];
        uVar22 = (ulong)puVar16[0x10];
        uVar24 = (ulong)puVar16[9];
        uVar17 = (ulong)puVar16[2];
        pcVar23 = *(code **)(*(long *)(param_1 + 0x278) + local_1d0 * 8 + 8);
        local_110 = *(long *)(param_2 + local_1d0 * 8);
        do {
          psVar31 = *(short **)(lVar12 + uVar11 * 8);
          if ((uVar14 != 0) || (psVar26 = psVar31, uVar11 != 0)) {
            psVar26 = *(short **)(lVar12 + uVar11 * 8 + -8);
          }
          psVar27 = psVar31;
          if (uVar14 < uVar9 || uVar11 != uVar25 - 1) {
            psVar27 = *(short **)(lVar12 + uVar11 * 8 + 8);
          }
          uVar34 = 0;
          iVar32 = 0;
          uVar13 = *(int *)(lVar28 + 0x1c) - 1;
          local_fc = (int)*psVar31;
          local_100 = (int)*psVar26;
          iVar33 = (int)*psVar27;
          iVar29 = (int)*psVar27;
          local_f8 = local_100;
          local_f4 = local_fc;
          do {
            iVar10 = local_f4;
            iVar3 = local_f8;
            iVar4 = local_fc;
            iVar8 = local_100;
            psVar27 = psVar27 + 0x40;
            psVar26 = psVar26 + 0x40;
            local_f8 = local_100;
            local_f4 = local_fc;
            FUN_10054d364(psVar31,auStack_f0,1);
            iVar30 = iVar29;
            if (uVar34 < uVar13) {
              local_100 = (int)*psVar26;
              local_fc = (int)psVar31[0x40];
              iVar30 = (int)*psVar27;
            }
            uVar5 = *(uint *)(lVar1 + 4);
            if (uVar5 != 0 && local_ee == 0) {
              uVar19 = uVar18 * 0x24 * (long)(iVar10 - local_fc);
              iVar7 = 0;
              if (uVar20 != 0) {
                iVar7 = (int)((long)(uVar20 * 0x80 - uVar19) / (long)(uVar20 << 8));
              }
              iVar6 = 1 << (ulong)(uVar5 & 0x1f);
              if (iVar6 <= iVar7 && 0 < (int)uVar5) {
                iVar7 = iVar6 + -1;
              }
              iVar2 = 0;
              if (uVar20 != 0) {
                iVar2 = (int)((long)(uVar19 + uVar20 * 0x80) / (long)(uVar20 << 8));
              }
              if (iVar6 <= iVar2 && 0 < (int)uVar5) {
                iVar2 = iVar6 + -1;
              }
              local_ee = (short)iVar2;
              if ((uVar19 & 0x8000000000000000) != 0) {
                local_ee = -(short)iVar7;
              }
            }
            uVar5 = *(uint *)(lVar1 + 8);
            if ((uVar5 != 0) && (local_e0 == 0)) {
              uVar19 = uVar18 * 0x24 * (long)(iVar8 - iVar29);
              iVar7 = 0;
              if (uVar21 != 0) {
                iVar7 = (int)((long)(uVar21 * 0x80 - uVar19) / (long)(uVar21 << 8));
              }
              iVar6 = 1 << (ulong)(uVar5 & 0x1f);
              if (iVar6 <= iVar7 && 0 < (int)uVar5) {
                iVar7 = iVar6 + -1;
              }
              iVar2 = 0;
              if (uVar21 != 0) {
                iVar2 = (int)((long)(uVar19 + uVar21 * 0x80) / (long)(uVar21 << 8));
              }
              if (iVar6 <= iVar2 && 0 < (int)uVar5) {
                iVar2 = iVar6 + -1;
              }
              local_e0 = (short)iVar2;
              if ((uVar19 & 0x8000000000000000) != 0) {
                local_e0 = -(short)iVar7;
              }
            }
            uVar5 = *(uint *)(lVar1 + 0xc);
            if ((uVar5 != 0) && (local_d0 == 0)) {
              uVar19 = uVar18 * 9 * (long)(iVar8 + iVar4 * -2 + iVar29);
              iVar8 = 0;
              if (uVar22 != 0) {
                iVar8 = (int)((long)(uVar22 * 0x80 - uVar19) / (long)(uVar22 << 8));
              }
              iVar7 = 1 << (ulong)(uVar5 & 0x1f);
              if (iVar7 <= iVar8 && 0 < (int)uVar5) {
                iVar8 = iVar7 + -1;
              }
              iVar6 = 0;
              if (uVar22 != 0) {
                iVar6 = (int)((long)(uVar19 + uVar22 * 0x80) / (long)(uVar22 << 8));
              }
              if (iVar7 <= iVar6 && 0 < (int)uVar5) {
                iVar6 = iVar7 + -1;
              }
              local_d0 = (short)iVar6;
              if ((uVar19 & 0x8000000000000000) != 0) {
                local_d0 = -(short)iVar8;
              }
            }
            uVar5 = *(uint *)(lVar1 + 0x10);
            if ((uVar5 != 0) && (local_de == 0)) {
              uVar19 = uVar18 * 5 * (long)((iVar3 - (iVar33 + local_100)) + iVar30);
              iVar33 = 0;
              if (uVar24 != 0) {
                iVar33 = (int)((long)(uVar24 * 0x80 - uVar19) / (long)(uVar24 << 8));
              }
              iVar8 = 1 << (ulong)(uVar5 & 0x1f);
              if (iVar8 <= iVar33 && 0 < (int)uVar5) {
                iVar33 = iVar8 + -1;
              }
              iVar3 = 0;
              if (uVar24 != 0) {
                iVar3 = (int)((long)(uVar19 + uVar24 * 0x80) / (long)(uVar24 << 8));
              }
              if (iVar8 <= iVar3 && 0 < (int)uVar5) {
                iVar3 = iVar8 + -1;
              }
              local_de = (short)iVar3;
              if ((uVar19 & 0x8000000000000000) != 0) {
                local_de = -(short)iVar33;
              }
            }
            uVar5 = *(uint *)(lVar1 + 0x14);
            if ((uVar5 != 0) && (local_ec == 0)) {
              uVar19 = uVar18 * 9 * (long)(iVar10 + iVar4 * -2 + local_fc);
              iVar33 = 0;
              if (uVar17 != 0) {
                iVar33 = (int)((long)(uVar17 * 0x80 - uVar19) / (long)(uVar17 << 8));
              }
              iVar8 = 1 << (ulong)(uVar5 & 0x1f);
              if (iVar8 <= iVar33 && 0 < (int)uVar5) {
                iVar33 = iVar8 + -1;
              }
              iVar4 = 0;
              if (uVar17 != 0) {
                iVar4 = (int)((long)(uVar19 + uVar17 * 0x80) / (long)(uVar17 << 8));
              }
              if (iVar8 <= iVar4 && 0 < (int)uVar5) {
                iVar4 = iVar8 + -1;
              }
              local_ec = (short)iVar4;
              if ((uVar19 & 0x8000000000000000) != 0) {
                local_ec = -(short)iVar33;
              }
            }
            (*pcVar23)(param_1,lVar28,auStack_f0,local_110,iVar32);
            psVar31 = psVar31 + 0x40;
            iVar32 = *(int *)(lVar28 + 0x24) + iVar32;
            uVar34 = uVar34 + 1;
            iVar33 = iVar29;
            iVar29 = iVar30;
          } while (uVar34 <= uVar13);
          local_110 = local_110 + (long)*(int *)(lVar28 + 0x28) * 8;
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar25);
      }
    }
    local_1d0 = local_1d0 + 1;
    lVar28 = lVar28 + 0x60;
  } while (local_1d0 < *(int *)(param_1 + 0x38));
LAB_10053bdf4:
  uVar9 = *(int *)(param_1 + 0xb8) + 1;
  *(uint *)(param_1 + 0xb8) = uVar9;
  uVar14 = 3;
  if (*(uint *)(param_1 + 0x1b0) <= uVar9) {
    uVar14 = 4;
  }
  uVar11 = (ulong)uVar14;
LAB_10053be10:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar11);
}




void FUN_10053be4c(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar3 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x38);
  param_1[0x51] = (long)puVar3;
  *puVar3 = FUN_10053c138;
  iVar2 = *(int *)((long)param_1 + 0x3c);
  if (iVar2 - 2U < 2) {
    if ((int)param_1[7] != 3) goto LAB_10053beac;
  }
  else if (iVar2 - 4U < 2) {
    if ((int)param_1[7] != 4) goto LAB_10053beac;
  }
  else if (iVar2 == 1) {
    if ((int)param_1[7] != 1) {
LAB_10053beac:
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0xb;
      (*(code *)*puVar6)(param_1);
    }
  }
  else if ((int)param_1[7] < 1) goto LAB_10053beac;
  if ((*(int *)((long)param_1 + 0x18c) != 0) && (*(int *)((long)param_1 + 0x3c) != 2)) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x1c;
    (*(code *)*puVar6)(param_1);
  }
  iVar2 = (int)param_1[8];
  if (iVar2 == 4) {
    *(undefined4 *)(param_1 + 0x12) = 4;
    if (*(int *)((long)param_1 + 0x3c) != 4) {
      if (*(int *)((long)param_1 + 0x3c) == 5) {
        pcVar8 = FUN_10053c56c;
LAB_10053bfd8:
        puVar3[1] = pcVar8;
        FUN_10053c324(param_1);
        goto LAB_10053c114;
      }
      goto LAB_10053c05c;
    }
LAB_10053bffc:
    pcVar8 = FUN_10053c638;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 1) {
        if (iVar2 == *(int *)((long)param_1 + 0x3c)) {
          *(int *)(param_1 + 0x12) = (int)param_1[7];
          goto LAB_10053bffc;
        }
        goto LAB_10053c05c;
      }
      *(undefined4 *)(param_1 + 0x12) = 1;
      iVar2 = *(int *)((long)param_1 + 0x3c);
      if (iVar2 != 3) {
        if (iVar2 == 2) {
          if (*(int *)((long)param_1 + 0x18c) == 1) {
            pcVar8 = FUN_10053c1dc;
LAB_10053c080:
            puVar3[1] = pcVar8;
          }
          else {
            if (*(int *)((long)param_1 + 0x18c) == 0) {
              pcVar8 = FUN_10053c158;
              goto LAB_10053c080;
            }
            puVar3 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar3 + 5) = 0x1c;
            (*(code *)*puVar3)(param_1);
          }
          lVar12 = param_1[0x51];
          lVar4 = (**(code **)param_1[1])(param_1,1,0x1800);
          lVar9 = 0;
          lVar11 = 0;
          lVar10 = 0;
          *(long *)(lVar12 + 0x30) = lVar4;
          lVar12 = 0x8000;
          do {
            plVar1 = (long *)(lVar4 + lVar10);
            *plVar1 = lVar9;
            lVar10 = lVar10 + 8;
            plVar1[0x100] = lVar11;
            plVar1[0x200] = lVar12;
            lVar12 = lVar12 + 0x1d2f;
            lVar11 = lVar11 + 0x9646;
            lVar9 = lVar9 + 0x4c8b;
          } while (lVar10 != 0x800);
          goto LAB_10053c114;
        }
        if (iVar2 != 1) goto LAB_10053c05c;
      }
      puVar3[1] = FUN_10053c13c;
      if (1 < (int)*(uint *)(param_1 + 7)) {
        lVar10 = (ulong)*(uint *)(param_1 + 7) - 1;
        puVar7 = (undefined4 *)(param_1[0x26] + 0x94);
        do {
          *puVar7 = 0;
          lVar10 = lVar10 + -1;
          puVar7 = puVar7 + 0x18;
        } while (lVar10 != 0);
      }
      goto LAB_10053c114;
    }
    *(undefined4 *)(param_1 + 0x12) = 3;
    iVar2 = *(int *)((long)param_1 + 0x3c);
    if (iVar2 == 1) {
      pcVar8 = FUN_10053c428;
    }
    else {
      if (iVar2 != 2) {
        if (iVar2 == 3) {
          pcVar8 = FUN_10053c270;
          goto LAB_10053bfd8;
        }
LAB_10053c05c:
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 0x1c;
        (*(code *)*puVar3)(param_1);
        goto LAB_10053c114;
      }
      if (*(int *)((long)param_1 + 0x18c) == 1) {
        pcVar8 = FUN_10053c4f0;
      }
      else {
        if (*(int *)((long)param_1 + 0x18c) != 0) goto LAB_10053c05c;
        pcVar8 = FUN_10053c484;
      }
    }
  }
  puVar3[1] = pcVar8;
LAB_10053c114:
  if (*(int *)((long)param_1 + 0x6c) == 0) {
    uVar5 = (undefined4)param_1[0x12];
  }
  else {
    uVar5 = 1;
  }
  *(undefined4 *)((long)param_1 + 0x94) = uVar5;
  return;
}




void FUN_10053c138(void)

{
  return;
}




void FUN_10053c13c(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10054d310(*param_2,param_3,param_4,0,param_5,*(undefined4 *)(param_1 + 0x88));
  return;
}




void FUN_10053c158(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  
  if (0 < param_5) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x288) + 0x30);
    uVar2 = *(uint *)(param_1 + 0x88);
    do {
      if (uVar2 != 0) {
        puVar4 = (undefined1 *)*param_4;
        pbVar5 = *(byte **)(*param_2 + (ulong)param_3 * 8);
        pbVar6 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
        pbVar7 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
        uVar8 = (ulong)uVar2;
        do {
          *puVar4 = (char)((uint)(*(int *)(lVar3 + (ulong)*pbVar6 * 8 + 0x800) +
                                  (int)*(undefined8 *)(lVar3 + (ulong)*pbVar5 * 8) +
                                 *(int *)(lVar3 + (ulong)*pbVar7 * 8 + 0x1000)) >> 0x10);
          uVar8 = uVar8 - 1;
          puVar4 = puVar4 + 1;
          pbVar5 = pbVar5 + 1;
          pbVar6 = pbVar6 + 1;
          pbVar7 = pbVar7 + 1;
        } while (uVar8 != 0);
      }
      param_3 = param_3 + 1;
      bVar1 = 1 < param_5;
      param_4 = param_4 + 1;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}




void FUN_10053c1dc(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  ulong uVar9;
  
  if (0 < param_5) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x288) + 0x30);
    uVar3 = *(uint *)(param_1 + 0x88);
    do {
      if (uVar3 != 0) {
        puVar5 = (undefined1 *)*param_4;
        pcVar6 = *(char **)(*param_2 + (ulong)param_3 * 8);
        pbVar7 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
        pcVar8 = *(char **)(param_2[2] + (ulong)param_3 * 8);
        uVar9 = (ulong)uVar3;
        do {
          cVar2 = *pbVar7 + 0x80;
          *puVar5 = (char)((uint)(*(int *)(lVar4 + (ulong)*pbVar7 * 8 + 0x800) +
                                  (int)*(undefined8 *)(lVar4 + (ulong)(byte)(cVar2 + *pcVar6) * 8) +
                                 *(int *)(lVar4 + (ulong)(byte)(cVar2 + *pcVar8) * 8 + 0x1000)) >>
                          0x10);
          uVar9 = uVar9 - 1;
          puVar5 = puVar5 + 1;
          pcVar6 = pcVar6 + 1;
          pbVar7 = pbVar7 + 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar9 != 0);
      }
      param_3 = param_3 + 1;
      bVar1 = 1 < param_5;
      param_4 = param_4 + 1;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}




void FUN_10053c270(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  
  if (0 < param_5) {
    lVar12 = *(long *)(param_1 + 0x288);
    uVar5 = *(uint *)(param_1 + 0x88);
    lVar11 = *(long *)(param_1 + 0x1b8);
    lVar2 = *(long *)(lVar12 + 0x10);
    lVar4 = *(long *)(lVar12 + 0x18);
    lVar3 = *(long *)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    do {
      if (uVar5 != 0) {
        puVar8 = (undefined1 *)*param_4;
        uVar9 = (ulong)uVar5;
        pbVar13 = *(byte **)(*param_2 + (ulong)param_3 * 8);
        pbVar14 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
        pbVar15 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
        do {
          uVar10 = (ulong)*pbVar13;
          bVar6 = *pbVar14;
          bVar7 = *pbVar15;
          *puVar8 = *(undefined1 *)(lVar11 + (long)*(int *)(lVar2 + (ulong)bVar7 * 4) + uVar10);
          puVar8[1] = *(undefined1 *)
                       (lVar11 + uVar10 + (long)(int)((ulong)(*(long *)(lVar3 + (ulong)bVar7 * 8) +
                                                             *(long *)(lVar12 + (ulong)bVar6 * 8))
                                                     >> 0x10));
          puVar8[2] = *(undefined1 *)(lVar11 + (long)*(int *)(lVar4 + (ulong)bVar6 * 4) + uVar10);
          puVar8 = puVar8 + 3;
          uVar9 = uVar9 - 1;
          pbVar13 = pbVar13 + 1;
          pbVar14 = pbVar14 + 1;
          pbVar15 = pbVar15 + 1;
        } while (uVar9 != 0);
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}




void FUN_10053c324(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0x288);
  uVar3 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x400);
  *(undefined8 *)(lVar10 + 0x10) = uVar3;
  uVar3 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x400);
  *(undefined8 *)(lVar10 + 0x18) = uVar3;
  uVar3 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x800);
  *(undefined8 *)(lVar10 + 0x20) = uVar3;
  lVar4 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x800);
  lVar5 = 0;
  *(long *)(lVar10 + 0x28) = lVar4;
  lVar1 = *(long *)(lVar10 + 0x10);
  lVar2 = *(long *)(lVar10 + 0x18);
  lVar6 = -0xb2f480;
  lVar7 = -0xe25100;
  lVar8 = 0x5b6900;
  lVar9 = 0x2c8d00;
  lVar10 = *(long *)(lVar10 + 0x20);
  do {
    *(int *)(lVar1 + lVar5 * 4) = (int)((ulong)lVar6 >> 0x10);
    *(int *)(lVar2 + lVar5 * 4) = (int)((ulong)lVar7 >> 0x10);
    *(long *)(lVar10 + lVar5 * 8) = lVar8;
    *(long *)(lVar4 + lVar5 * 8) = lVar9;
    lVar5 = lVar5 + 1;
    lVar6 = lVar6 + 0x166e9;
    lVar7 = lVar7 + 0x1c5a2;
    lVar8 = lVar8 + -0xb6d2;
    lVar9 = lVar9 + -0x581a;
  } while (lVar5 != 0x100);
  return;
}




void FUN_10053c428(long param_1,long *param_2,uint param_3,long *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  
  if (0 < param_5) {
    uVar2 = *(uint *)(param_1 + 0x88);
    do {
      if (uVar2 != 0) {
        puVar5 = (undefined1 *)(*param_4 + 2);
        puVar4 = *(undefined1 **)(*param_2 + (ulong)param_3 * 8);
        uVar6 = (ulong)uVar2;
        do {
          uVar3 = *puVar4;
          *puVar5 = uVar3;
          puVar5[-1] = uVar3;
          puVar5[-2] = uVar3;
          puVar5 = puVar5 + 3;
          uVar6 = uVar6 - 1;
          puVar4 = puVar4 + 1;
        } while (uVar6 != 0);
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}




void FUN_10053c484(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  
  if (0 < param_5) {
    uVar2 = *(uint *)(param_1 + 0x88);
    do {
      if (uVar2 != 0) {
        puVar6 = (undefined1 *)*param_4;
        puVar3 = *(undefined1 **)(*param_2 + (ulong)param_3 * 8);
        puVar4 = *(undefined1 **)(param_2[1] + (ulong)param_3 * 8);
        puVar5 = *(undefined1 **)(param_2[2] + (ulong)param_3 * 8);
        uVar7 = (ulong)uVar2;
        do {
          *puVar6 = *puVar3;
          puVar6[1] = *puVar4;
          puVar6[2] = *puVar5;
          puVar6 = puVar6 + 3;
          uVar7 = uVar7 - 1;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar7 != 0);
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}




void FUN_10053c4f0(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  ulong uVar9;
  
  if (0 < param_5) {
    uVar2 = *(uint *)(param_1 + 0x88);
    do {
      if (uVar2 != 0) {
        pbVar8 = (byte *)*param_4;
        pcVar5 = *(char **)(*param_2 + (ulong)param_3 * 8);
        pbVar6 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
        pcVar7 = *(char **)(param_2[2] + (ulong)param_3 * 8);
        uVar9 = (ulong)uVar2;
        do {
          bVar3 = *pbVar6;
          cVar4 = *pcVar7;
          *pbVar8 = bVar3 + *pcVar5 ^ 0x80;
          pbVar8[1] = bVar3;
          pbVar8[2] = cVar4 + bVar3 ^ 0x80;
          pbVar8 = pbVar8 + 3;
          uVar9 = uVar9 - 1;
          pcVar5 = pcVar5 + 1;
          pbVar6 = pbVar6 + 1;
          pcVar7 = pcVar7 + 1;
        } while (uVar9 != 0);
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}




void FUN_10053c56c(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  
  if (0 < param_5) {
    lVar13 = *(long *)(param_1 + 0x288);
    uVar6 = *(uint *)(param_1 + 0x88);
    lVar12 = *(long *)(param_1 + 0x1b8);
    lVar3 = *(long *)(lVar13 + 0x10);
    lVar5 = *(long *)(lVar13 + 0x18);
    lVar4 = *(long *)(lVar13 + 0x20);
    lVar13 = *(long *)(lVar13 + 0x28);
    do {
      if (uVar6 != 0) {
        puVar11 = (undefined1 *)*param_4;
        puVar9 = *(undefined1 **)(param_2[3] + (ulong)param_3 * 8);
        uVar10 = (ulong)uVar6;
        pbVar14 = *(byte **)(*param_2 + (ulong)param_3 * 8);
        pbVar15 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
        pbVar16 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
        do {
          bVar7 = *pbVar15;
          bVar8 = *pbVar16;
          uVar2 = *pbVar14 ^ 0xff;
          *puVar11 = *(undefined1 *)(lVar12 + (int)(uVar2 - *(int *)(lVar3 + (ulong)bVar8 * 4)));
          puVar11[1] = *(undefined1 *)
                        (lVar12 + (int)(uVar2 - (int)((ulong)(*(long *)(lVar4 + (ulong)bVar8 * 8) +
                                                             *(long *)(lVar13 + (ulong)bVar7 * 8))
                                                     >> 0x10)));
          puVar11[2] = *(undefined1 *)(lVar12 + (int)(uVar2 - *(int *)(lVar5 + (ulong)bVar7 * 4)));
          puVar11[3] = *puVar9;
          puVar11 = puVar11 + 4;
          uVar10 = uVar10 - 1;
          puVar9 = puVar9 + 1;
          pbVar14 = pbVar14 + 1;
          pbVar15 = pbVar15 + 1;
          pbVar16 = pbVar16 + 1;
        } while (uVar10 != 0);
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}




void FUN_10053c638(long param_1,long param_2,uint param_3,long *param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  int iVar7;
  
  if (0 < param_5) {
    uVar3 = *(uint *)(param_1 + 0x38);
    iVar2 = *(int *)(param_1 + 0x88);
    do {
      if (0 < (int)uVar3) {
        uVar4 = 0;
        do {
          if (iVar2 != 0) {
            lVar5 = *param_4;
            puVar6 = *(undefined1 **)(*(long *)(param_2 + uVar4 * 8) + (ulong)param_3 * 8);
            iVar7 = iVar2;
            do {
              *(undefined1 *)(lVar5 + uVar4) = *puVar6;
              lVar5 = lVar5 + (int)uVar3;
              iVar7 = iVar7 + -1;
              puVar6 = puVar6 + 1;
            } while (iVar7 != 0);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar3);
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}




void FUN_10053c6ac(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x80);
  *(undefined8 **)(param_1 + 0x278) = puVar1;
  *puVar1 = FUN_10053c770;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar3 = 0;
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x130) + 0x58);
    do {
      puVar2 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x100);
      *puVar4 = puVar2;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[9] = 0;
      puVar2[8] = 0;
      puVar2[0xb] = 0;
      puVar2[10] = 0;
      puVar2[0xd] = 0;
      puVar2[0xc] = 0;
      puVar2[0xf] = 0;
      puVar2[0xe] = 0;
      puVar2[0x11] = 0;
      puVar2[0x10] = 0;
      puVar2[0x13] = 0;
      puVar2[0x12] = 0;
      puVar2[0x15] = 0;
      puVar2[0x14] = 0;
      puVar2[0x17] = 0;
      puVar2[0x16] = 0;
      puVar2[0x19] = 0;
      puVar2[0x18] = 0;
      puVar2[0x1b] = 0;
      puVar2[0x1a] = 0;
      puVar2[0x1d] = 0;
      puVar2[0x1c] = 0;
      puVar2[0x1f] = 0;
      puVar2[0x1e] = 0;
      *(undefined4 *)((long)puVar1 + lVar3 * 4 + 0x58) = 0xffffffff;
      lVar3 = lVar3 + 1;
      puVar4 = puVar4 + 0xc;
    } while (lVar3 < *(int *)(param_1 + 0x38));
  }
  return;
}




void FUN_10053c770(long *param_1)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  double *pdVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  code *pcVar18;
  ushort uVar19;
  ushort uVar20;
  undefined8 uVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined1 auVar25 [16];
  
  if (0 < (int)param_1[7]) {
    lVar13 = 0;
    pcVar18 = (code *)0x0;
    lVar14 = param_1[0x4f];
    lVar15 = param_1[0x26];
    auVar25 = NEON_fmov(0x3fc0000000000000,8);
    uVar16 = 0;
    do {
      iVar3 = *(int *)(lVar15 + 0x24);
      iVar1 = *(int *)(lVar15 + 0x28) + iVar3 * 0x100;
      if (iVar1 < 0x70e) {
        if (iVar1 < 0x404) {
          if (iVar1 < 0x204) {
            if (iVar1 < 0x201) {
              if (iVar1 == 0x101) {
                uVar17 = 0;
                pcVar18 = FUN_10054509c;
              }
              else if (iVar1 == 0x102) {
                pcVar18 = FUN_10054a268;
                uVar17 = 0;
              }
              else {
LAB_10053cb74:
                lVar5 = *param_1;
                *(undefined4 *)(lVar5 + 0x28) = 7;
                *(int *)(lVar5 + 0x2c) = iVar3;
                *(undefined4 *)(*param_1 + 0x30) = *(undefined4 *)(lVar15 + 0x28);
                puVar6 = (undefined8 *)*param_1;
LAB_10053cba0:
                (*(code *)*puVar6)(param_1);
                uVar17 = uVar16;
              }
            }
            else if (iVar1 == 0x201) {
              uVar17 = 0;
              pcVar18 = FUN_100548ca8;
            }
            else {
              if (iVar1 != 0x202) goto LAB_10053cb74;
              uVar17 = 0;
              pcVar18 = FUN_100545000;
            }
          }
          else if (iVar1 < 0x306) {
            if (iVar1 == 0x204) {
              uVar17 = 0;
              pcVar18 = FUN_10054a12c;
            }
            else {
              if (iVar1 != 0x303) goto LAB_10053cb74;
              uVar17 = 0;
              pcVar18 = FUN_100544eb0;
            }
          }
          else if (iVar1 == 0x306) {
            uVar17 = 0;
            pcVar18 = FUN_100549f58;
          }
          else {
            if (iVar1 != 0x402) goto LAB_10053cb74;
            uVar17 = 0;
            pcVar18 = FUN_100548b48;
          }
        }
        else if (iVar1 < 0x603) {
          if (iVar1 < 0x505) {
            if (iVar1 == 0x404) {
              uVar17 = 0;
              pcVar18 = FUN_100544d1c;
            }
            else {
              if (iVar1 != 0x408) goto LAB_10053cb74;
              uVar17 = 0;
              pcVar18 = FUN_100549c30;
            }
          }
          else if (iVar1 == 0x505) {
            uVar17 = 0;
            pcVar18 = FUN_100544b10;
          }
          else {
            if (iVar1 != 0x50a) goto LAB_10053cb74;
            uVar17 = 0;
            pcVar18 = FUN_100549928;
          }
        }
        else if (iVar1 < 0x60c) {
          if (iVar1 == 0x603) {
            uVar17 = 0;
            pcVar18 = FUN_10054898c;
          }
          else {
            if (iVar1 != 0x606) goto LAB_10053cb74;
            uVar17 = 0;
            pcVar18 = FUN_1005448d8;
          }
        }
        else if (iVar1 == 0x60c) {
          uVar17 = 0;
          pcVar18 = FUN_1005495c8;
        }
        else {
          if (iVar1 != 0x707) goto LAB_10053cb74;
          uVar17 = 0;
          pcVar18 = FUN_100544590;
        }
      }
      else if (iVar1 < 0xc06) {
        if (iVar1 < 0x909) {
          if (iVar1 < 0x808) {
            if (iVar1 == 0x70e) {
              uVar17 = 0;
              pcVar18 = FUN_1005491b4;
            }
            else {
              if (iVar1 != 0x804) goto LAB_10053cb74;
              uVar17 = 0;
              pcVar18 = FUN_100548704;
            }
          }
          else if (iVar1 == 0x808) {
            uVar17 = *(uint *)(param_1 + 0xc);
            if (2 < uVar17) {
              puVar6 = (undefined8 *)*param_1;
              *(undefined4 *)(puVar6 + 5) = 0x31;
              goto LAB_10053cba0;
            }
            pcVar18 = (code *)(&PTR_FUN_1014a0fa8)[(int)uVar17];
          }
          else {
            if (iVar1 != 0x810) goto LAB_10053cb74;
            uVar17 = 0;
            pcVar18 = FUN_100548cf8;
          }
        }
        else if (iVar1 < 0xa0a) {
          if (iVar1 == 0x909) {
            uVar17 = 0;
            pcVar18 = FUN_1005450cc;
          }
          else {
            if (iVar1 != 0xa05) goto LAB_10053cb74;
            uVar17 = 0;
            pcVar18 = FUN_100548404;
          }
        }
        else if (iVar1 == 0xa0a) {
          uVar17 = 0;
          pcVar18 = FUN_10054545c;
        }
        else {
          if (iVar1 != 0xb0b) goto LAB_10053cb74;
          uVar17 = 0;
          pcVar18 = FUN_100545844;
        }
      }
      else if (iVar1 < 0xe0e) {
        if (iVar1 < 0xd0d) {
          if (iVar1 == 0xc06) {
            uVar17 = 0;
            pcVar18 = FUN_1005480a8;
          }
          else {
            if (iVar1 != 0xc0c) goto LAB_10053cb74;
            uVar17 = 0;
            pcVar18 = FUN_100545cf4;
          }
        }
        else if (iVar1 == 0xd0d) {
          uVar17 = 0;
          pcVar18 = FUN_100546168;
        }
        else {
          if (iVar1 != 0xe07) goto LAB_10053cb74;
          uVar17 = 0;
          pcVar18 = FUN_100547c88;
        }
      }
      else if (iVar1 < 0x1008) {
        if (iVar1 == 0xe0e) {
          uVar17 = 0;
          pcVar18 = FUN_1005466c8;
        }
        else {
          if (iVar1 != 0xf0f) goto LAB_10053cb74;
          uVar17 = 0;
          pcVar18 = FUN_100546bbc;
        }
      }
      else if (iVar1 == 0x1008) {
        uVar17 = 0;
        pcVar18 = FUN_10054772c;
      }
      else {
        if (iVar1 != 0x1010) goto LAB_10053cb74;
        uVar17 = 0;
        pcVar18 = FUN_10054711c;
      }
      *(code **)(lVar14 + lVar13 * 8 + 8) = pcVar18;
      if (((*(int *)(lVar15 + 0x34) != 0) &&
          (puVar7 = (uint *)(lVar14 + lVar13 * 4 + 0x58), *puVar7 != uVar17)) &&
         (lVar5 = *(long *)(lVar15 + 0x50), lVar5 != 0)) {
        *puVar7 = uVar17;
        if (uVar17 == 2) {
          lVar8 = 0;
          uVar16 = 0;
          lVar10 = *(long *)(lVar15 + 0x58);
          do {
            lVar11 = 0;
            uVar4 = (ulong)uVar16;
            uVar16 = uVar16 + 8;
            dVar22 = (double)(&DAT_10115c810)[lVar8] * auVar25._0_8_;
            puVar6 = (undefined8 *)(lVar10 + ((long)(uVar4 << 0x20) >> 0x1e));
            pdVar12 = (double *)&DAT_10115c810;
            do {
              puVar2 = (ushort *)(lVar5 + ((long)(uVar4 << 0x20) >> 0x1f) + lVar11);
              uVar19 = puVar2[1];
              auVar23._0_8_ = (ulong)CONCAT24(uVar19,(uint)*puVar2) & 0xffffffff;
              auVar23._8_2_ = uVar19;
              auVar23._10_6_ = 0;
              auVar23 = NEON_ucvtf(auVar23,8);
              *puVar6 = CONCAT44((float)(dVar22 * auVar23._8_8_ * pdVar12[1]),
                                 (float)(dVar22 * auVar23._0_8_ * *pdVar12));
              lVar11 = lVar11 + 4;
              puVar6 = puVar6 + 1;
              pdVar12 = pdVar12 + 2;
            } while (lVar11 != 0x10);
            lVar8 = lVar8 + 1;
          } while (lVar8 != 8);
        }
        else if (uVar17 == 1) {
          lVar8 = 0;
          puVar6 = *(undefined8 **)(lVar15 + 0x58);
          do {
            uVar21 = *(undefined8 *)(lVar5 + lVar8);
            uVar19 = (ushort)((ulong)uVar21 >> 0x10);
            uVar20 = (ushort)((ulong)uVar21 >> 0x30);
            uVar24 = *(undefined8 *)((long)&DAT_10115c790 + lVar8);
            puVar6[1] = CONCAT44((int)((long)(int)(short)((ulong)uVar24 >> 0x30) * (ulong)uVar20 +
                                       0x800 >> 0xc),
                                 (int)((long)(int)(short)((ulong)uVar24 >> 0x20) *
                                       ((ulong)CONCAT24(uVar20,(uint)(ushort)((ulong)uVar21 >> 0x20)
                                                       ) & 0xffffffff) + 0x800 >> 0xc));
            *puVar6 = CONCAT44((int)((long)(int)(short)((ulong)uVar24 >> 0x10) * (ulong)uVar19 +
                                     0x800 >> 0xc),
                               (int)((long)(int)(short)uVar24 *
                                     ((ulong)(CONCAT24(uVar19,(int)uVar21) & 0xffff0000ffff) &
                                     0xffffffff) + 0x800 >> 0xc));
            lVar8 = lVar8 + 8;
            puVar6 = puVar6 + 2;
          } while (lVar8 != 0x80);
        }
        else if (uVar17 == 0) {
          lVar8 = 0;
          puVar9 = *(ulong **)(lVar15 + 0x58);
          do {
            uVar21 = *(undefined8 *)(lVar5 + lVar8);
            puVar9[1] = (ulong)CONCAT24((short)((ulong)uVar21 >> 0x30),
                                        (uint)(ushort)((ulong)uVar21 >> 0x20));
            *puVar9 = (ulong)(CONCAT24((short)((ulong)uVar21 >> 0x10),(int)uVar21) & 0xffff0000ffff)
            ;
            lVar8 = lVar8 + 8;
            puVar9 = puVar9 + 2;
          } while (lVar8 != 0x80);
        }
        else {
          puVar6 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar6 + 5) = 0x31;
          (*(code *)*puVar6)(param_1);
        }
      }
      lVar13 = lVar13 + 1;
      lVar15 = lVar15 + 0x60;
      uVar16 = uVar17;
    } while (lVar13 < (int)param_1[7]);
  }
  return;
}




void FUN_10053cd70(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x170);
  *(undefined8 **)(param_1 + 0x270) = puVar1;
  *puVar1 = FUN_10053ce40;
  if (*(int *)(param_1 + 0x13c) == 0) {
    puVar1[0x14] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0xd] = 0;
  }
  else {
    puVar2 = (undefined8 *)
             (*(code *)**(undefined8 **)(param_1 + 8))
                       (param_1,1,(long)*(int *)(param_1 + 0x38) << 8);
    *(undefined8 **)(param_1 + 0xc0) = puVar2;
    if (0 < *(int *)(param_1 + 0x38)) {
      iVar3 = 0;
      do {
        puVar2[0x1d] = 0xffffffffffffffff;
        puVar2[0x1c] = 0xffffffffffffffff;
        puVar2[0x1f] = 0xffffffffffffffff;
        puVar2[0x1e] = 0xffffffffffffffff;
        puVar2[0x19] = 0xffffffffffffffff;
        puVar2[0x18] = 0xffffffffffffffff;
        puVar2[0x1b] = 0xffffffffffffffff;
        puVar2[0x1a] = 0xffffffffffffffff;
        puVar2[0x15] = 0xffffffffffffffff;
        puVar2[0x14] = 0xffffffffffffffff;
        puVar2[0x17] = 0xffffffffffffffff;
        puVar2[0x16] = 0xffffffffffffffff;
        puVar2[0x11] = 0xffffffffffffffff;
        puVar2[0x10] = 0xffffffffffffffff;
        puVar2[0x13] = 0xffffffffffffffff;
        puVar2[0x12] = 0xffffffffffffffff;
        puVar2[0xd] = 0xffffffffffffffff;
        puVar2[0xc] = 0xffffffffffffffff;
        puVar2[0xf] = 0xffffffffffffffff;
        puVar2[0xe] = 0xffffffffffffffff;
        puVar2[9] = 0xffffffffffffffff;
        puVar2[8] = 0xffffffffffffffff;
        puVar2[0xb] = 0xffffffffffffffff;
        puVar2[10] = 0xffffffffffffffff;
        puVar2[5] = 0xffffffffffffffff;
        puVar2[4] = 0xffffffffffffffff;
        puVar2[7] = 0xffffffffffffffff;
        puVar2[6] = 0xffffffffffffffff;
        puVar2[1] = 0xffffffffffffffff;
        *puVar2 = 0xffffffffffffffff;
        puVar2[3] = 0xffffffffffffffff;
        puVar2[2] = 0xffffffffffffffff;
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 0x20;
      } while (iVar3 < *(int *)(param_1 + 0x38));
    }
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
  }
  return;
}




void FUN_10053ce40(long *param_1)

{
  bool bVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  undefined **ppuVar14;
  long lVar15;
  
  lVar11 = param_1[0x4e];
  iVar13 = *(int *)((long)param_1 + 0x21c);
  if (*(int *)((long)param_1 + 0x13c) == 0) {
    if ((((iVar13 != 0) || (*(int *)((long)param_1 + 0x224) != 0)) || ((int)param_1[0x45] != 0)) ||
       ((((int)param_1[0x27] != 0 || ((int)param_1[0x44] < 0x40)) &&
        ((int)param_1[0x44] != (int)param_1[0x47])))) {
      lVar10 = *param_1;
      *(undefined4 *)(lVar10 + 0x28) = 0x7d;
      (**(code **)(lVar10 + 8))(param_1,0xffffffff);
    }
    pcVar2 = FUN_10053e454;
    if ((int)param_1[0x47] != 0x3f) {
      pcVar2 = FUN_10053e038;
    }
    *(code **)(lVar11 + 8) = pcVar2;
    if (0 < (int)param_1[0x38]) {
      lVar10 = 0;
      do {
        lVar7 = param_1[lVar10 + 0x39];
        lVar15 = (long)*(int *)(lVar7 + 0x14);
        FUN_10053dd0c(param_1,1,lVar15,lVar11 + lVar15 * 8 + 0x68);
        if ((int)param_1[0x47] != 0) {
          lVar15 = (long)*(int *)(lVar7 + 0x18);
          FUN_10053dd0c(param_1,0,lVar15,lVar11 + lVar15 * 8 + 0x88);
        }
        *(undefined4 *)(lVar11 + 0x24 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)param_1[0x38]);
    }
    if (0 < (int)param_1[0x3e]) {
      lVar10 = 0;
      do {
        lVar7 = param_1[(long)*(int *)((long)param_1 + lVar10 * 4 + 500) + 0x39];
        iVar13 = *(int *)(lVar7 + 0x18);
        lVar15 = lVar11 + 0x148 + lVar10 * 8;
        *(undefined8 *)(lVar15 + -0xa0) =
             *(undefined8 *)(lVar11 + (long)*(int *)(lVar7 + 0x14) * 8 + 0x68);
        *(undefined8 *)(lVar15 + -0x50) = *(undefined8 *)(lVar11 + (long)iVar13 * 8 + 0x88);
        if (*(int *)(lVar7 + 0x34) == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = *(int *)(lVar7 + 0x24);
          iVar9 = *(int *)(lVar7 + 0x28);
          iVar4 = (int)param_1[0x47];
          if (iVar4 < 0xf) {
            if (iVar4 == 0) {
              iVar13 = 1;
              goto LAB_10053d138;
            }
            if (iVar4 == 3) {
              uVar12 = (uint)(iVar13 != 1);
              ppuVar14 = (undefined **)(&UNK_10115c850 + (ulong)(iVar9 != 1) * 8);
            }
            else {
              if (iVar4 != 8) goto LAB_10053d110;
              uVar6 = iVar9 - 1;
              uVar12 = iVar13 - 1;
              if (1 < uVar6) {
                uVar6 = 2;
              }
              if (1 < uVar12) {
                uVar12 = 2;
              }
              ppuVar14 = (undefined **)(&UNK_10115c860 + (ulong)uVar6 * 0xc);
            }
          }
          else if (iVar4 < 0x23) {
            if (iVar4 == 0xf) {
              uVar6 = iVar9 - 1;
              uVar12 = iVar13 - 1;
              if (2 < uVar6) {
                uVar6 = 3;
              }
              if (2 < uVar12) {
                uVar12 = 3;
              }
              ppuVar14 = &PTR___mh_execute_header_10115c884 + (ulong)uVar6 * 2;
            }
            else if (iVar4 == 0x18) {
              uVar6 = iVar9 - 1;
              uVar12 = iVar13 - 1;
              if (3 < uVar6) {
                uVar6 = 4;
              }
              if (3 < uVar12) {
                uVar12 = 4;
              }
              ppuVar14 = (undefined **)(&UNK_10115c8c4 + (ulong)uVar6 * 0x14);
            }
            else {
LAB_10053d110:
              uVar6 = iVar9 - 1;
              uVar12 = iVar13 - 1;
              if (6 < uVar6) {
                uVar6 = 7;
              }
              if (6 < uVar12) {
                uVar12 = 7;
              }
              ppuVar14 = (undefined **)(&UNK_10115ca7c + (ulong)uVar6 * 0x20);
            }
          }
          else if (iVar4 == 0x23) {
            uVar6 = iVar9 - 1;
            uVar12 = iVar13 - 1;
            if (4 < uVar6) {
              uVar6 = 5;
            }
            if (4 < uVar12) {
              uVar12 = 5;
            }
            ppuVar14 = (undefined **)(&UNK_10115c928 + (ulong)uVar6 * 0x18);
          }
          else {
            if (iVar4 != 0x30) goto LAB_10053d110;
            uVar6 = iVar9 - 1;
            uVar12 = iVar13 - 1;
            if (5 < uVar6) {
              uVar6 = 6;
            }
            if (5 < uVar12) {
              uVar12 = 6;
            }
            ppuVar14 = (undefined **)(&UNK_10115c9b8 + (ulong)uVar6 * 0x1c);
          }
          iVar13 = *(int *)((long)ppuVar14 + (ulong)uVar12 * 4) + 1;
        }
LAB_10053d138:
        *(int *)(lVar11 + 0x148 + lVar10 * 4) = iVar13;
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)param_1[0x3e]);
    }
    goto LAB_10053d358;
  }
  iVar9 = (int)param_1[0x44];
  if (iVar13 == 0) {
    if (iVar9 == 0) goto LAB_10053d154;
LAB_10053d17c:
    lVar10 = *param_1;
    *(undefined4 *)(lVar10 + 0x28) = 0x11;
    *(int *)(lVar10 + 0x2c) = iVar13;
    *(int *)(*param_1 + 0x30) = (int)param_1[0x44];
    *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)((long)param_1 + 0x224);
    *(int *)(*param_1 + 0x38) = (int)param_1[0x45];
    (**(code **)*param_1)(param_1);
  }
  else {
    if (((iVar9 < iVar13) || ((int)param_1[0x47] < iVar9)) || ((int)param_1[0x38] != 1))
    goto LAB_10053d17c;
LAB_10053d154:
    if (*(int *)((long)param_1 + 0x224) == 0) {
      iVar9 = (int)param_1[0x45];
    }
    else {
      iVar9 = *(int *)((long)param_1 + 0x224) + -1;
      if (iVar9 != (int)param_1[0x45]) goto LAB_10053d17c;
    }
    if (0xd < iVar9) goto LAB_10053d17c;
  }
  iVar13 = (int)param_1[0x38];
  if (0 < iVar13) {
    lVar10 = 0;
    do {
      iVar13 = *(int *)(param_1[lVar10 + 0x39] + 4);
      lVar15 = param_1[0x18];
      iVar9 = *(int *)((long)param_1 + 0x21c);
      if ((iVar9 != 0) && (*(int *)(lVar15 + (long)iVar13 * 0x100) < 0)) {
        lVar7 = *param_1;
        *(undefined4 *)(lVar7 + 0x28) = 0x76;
        *(int *)(lVar7 + 0x2c) = iVar13;
        *(undefined4 *)(*param_1 + 0x30) = 0;
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        iVar9 = *(int *)((long)param_1 + 0x21c);
      }
      if (iVar9 <= (int)param_1[0x44]) {
        lVar15 = lVar15 + (long)iVar13 * 0x100;
        lVar7 = (long)iVar9;
        do {
          uVar12 = *(uint *)(lVar15 + lVar7 * 4);
          if (*(uint *)((long)param_1 + 0x224) != (uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU))) {
            lVar8 = *param_1;
            *(undefined4 *)(lVar8 + 0x28) = 0x76;
            *(int *)(lVar8 + 0x2c) = iVar13;
            *(int *)(*param_1 + 0x30) = (int)lVar7;
            (**(code **)(*param_1 + 8))(param_1,0xffffffff);
          }
          *(int *)(lVar15 + lVar7 * 4) = (int)param_1[0x45];
          bVar1 = lVar7 < (int)param_1[0x44];
          lVar7 = lVar7 + 1;
        } while (bVar1);
      }
      lVar10 = lVar10 + 1;
      iVar13 = (int)param_1[0x38];
    } while (lVar10 < iVar13);
  }
  iVar9 = *(int *)((long)param_1 + 0x21c);
  pcVar2 = FUN_10053d3a4;
  if (iVar9 != 0) {
    pcVar2 = FUN_10053d5ac;
  }
  pcVar3 = FUN_10053d7e4;
  if (iVar9 != 0) {
    pcVar3 = FUN_10053d8e0;
  }
  if (*(int *)((long)param_1 + 0x224) != 0) {
    pcVar2 = pcVar3;
  }
  *(code **)(lVar11 + 8) = pcVar2;
  if (0 < iVar13) {
    lVar10 = 0;
    while( true ) {
      if (iVar9 == 0) {
        if (*(int *)((long)param_1 + 0x224) == 0) {
          lVar15 = (long)*(int *)(param_1[lVar10 + 0x39] + 0x14);
          FUN_10053dd0c(param_1,1,lVar15,lVar11 + lVar15 * 8 + 0x40);
        }
      }
      else {
        lVar7 = (long)*(int *)(param_1[lVar10 + 0x39] + 0x18);
        lVar15 = lVar11 + lVar7 * 8;
        FUN_10053dd0c(param_1,0,lVar7,lVar15 + 0x40);
        *(undefined8 *)(lVar11 + 0x60) = *(undefined8 *)(lVar15 + 0x40);
      }
      *(undefined4 *)(lVar11 + 0x24 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
      if ((int)param_1[0x38] <= lVar10) break;
      iVar9 = *(int *)((long)param_1 + 0x21c);
    }
  }
  *(undefined4 *)(lVar11 + 0x20) = 0;
LAB_10053d358:
  *(undefined4 *)(lVar11 + 0x18) = 0;
  *(undefined8 *)(lVar11 + 0x10) = 0;
  uVar5 = *(undefined4 *)((long)param_1 + 0x174);
  *(undefined4 *)(lVar11 + 0x34) = 0;
  *(undefined4 *)(lVar11 + 0x38) = uVar5;
  return;
}




undefined8 FUN_10053d3a4(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined2 *puVar16;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  uint local_70;
  long local_68;
  
  lVar13 = *(long *)(param_1 + 0x270);
  uVar2 = *(uint *)(param_1 + 0x228);
  if (((*(int *)(param_1 + 0x174) == 0) || (*(int *)(lVar13 + 0x38) != 0)) ||
     (uVar5 = FUN_10053e864(param_1), (int)uVar5 != 0)) {
    if (*(int *)(lVar13 + 0x34) == 0) {
      local_68 = param_1;
      puVar10 = *(undefined8 **)(param_1 + 0x28);
      local_88 = *puVar10;
      uStack_80 = puVar10[1];
      lVar7 = *(long *)(lVar13 + 0x10);
      uVar8 = *(uint *)(lVar13 + 0x18);
      uVar9 = (ulong)uVar8;
      local_a0 = *(undefined8 *)(lVar13 + 0x20);
      uStack_98 = *(undefined8 *)(lVar13 + 0x28);
      local_90 = *(undefined4 *)(lVar13 + 0x30);
      if (0 < *(int *)(param_1 + 0x1f0)) {
        lVar14 = 0;
        do {
          puVar16 = *(undefined2 **)(param_2 + lVar14 * 8);
          lVar15 = (long)*(int *)(param_1 + 500 + lVar14 * 4);
          lVar12 = *(long *)(lVar13 + (long)*(int *)(*(long *)(param_1 + lVar15 * 8 + 0x1c8) + 0x14)
                                      * 8 + 0x40);
          if ((int)uVar9 < 8) {
            uVar5 = FUN_10053e8f8(&local_88,lVar7,uVar9,0);
            if ((int)uVar5 == 0) {
              return uVar5;
            }
            uVar9 = (ulong)local_70;
            lVar7 = local_78;
            if (7 < (int)local_70) goto LAB_10053d488;
            uVar5 = 1;
LAB_10053d4bc:
            uVar6 = FUN_10053ea40(&local_88,lVar7,uVar9,lVar12,uVar5);
            if ((int)uVar6 < 0) {
              return 0;
            }
            uVar9 = (ulong)local_70;
            lVar7 = local_78;
            if ((int)uVar6 != 0) goto LAB_10053d4dc;
LAB_10053d4b0:
            iVar11 = 0;
          }
          else {
LAB_10053d488:
            uVar6 = lVar7 >> ((ulong)((int)uVar9 - 8) & 0x3f);
            iVar11 = *(int *)(lVar12 + (uVar6 & 0xff) * 4 + 0x120);
            if (iVar11 == 0) {
              uVar5 = 9;
              goto LAB_10053d4bc;
            }
            uVar9 = (ulong)(uint)((int)uVar9 - iVar11);
            bVar4 = *(byte *)(lVar12 + (uVar6 & 0xff) + 0x520);
            uVar6 = (ulong)bVar4;
            if (bVar4 == 0) goto LAB_10053d4b0;
LAB_10053d4dc:
            iVar11 = (int)uVar6;
            uVar8 = (uint)uVar9;
            if (((int)(uint)uVar9 < iVar11) &&
               (uVar5 = FUN_10053e8f8(&local_88,lVar7,uVar9,uVar6), lVar7 = local_78,
               uVar8 = local_70, (int)uVar5 == 0)) {
              return uVar5;
            }
            uVar9 = (ulong)(uVar8 - iVar11);
            uVar3 = *(uint *)((long)&PTR___mh_execute_header_10115cb7c + (uVar6 & 0xffffffff) * 4);
            uVar8 = uVar3 & (uint)(lVar7 >> (uVar9 & 0x3f));
            uVar1 = 0;
            if ((int)uVar8 <=
                *(int *)((long)&PTR___mh_execute_header_10115cb7c + (ulong)(iVar11 - 1) * 4)) {
              uVar1 = uVar3;
            }
            iVar11 = uVar8 - uVar1;
          }
          uVar8 = (uint)uVar9;
          lVar15 = lVar15 * 4;
          iVar11 = *(int *)((long)&local_a0 + lVar15 + 4) + iVar11;
          *(int *)((long)&local_a0 + lVar15 + 4) = iVar11;
          *puVar16 = (short)(iVar11 << (ulong)(uVar2 & 0x1f));
          lVar14 = lVar14 + 1;
        } while (lVar14 < *(int *)(param_1 + 0x1f0));
        puVar10 = *(undefined8 **)(param_1 + 0x28);
      }
      *puVar10 = local_88;
      puVar10[1] = uStack_80;
      *(long *)(lVar13 + 0x10) = lVar7;
      *(uint *)(lVar13 + 0x18) = uVar8;
      *(undefined8 *)(lVar13 + 0x28) = uStack_98;
      *(undefined8 *)(lVar13 + 0x20) = local_a0;
      *(undefined4 *)(lVar13 + 0x30) = local_90;
    }
    *(int *)(lVar13 + 0x38) = *(int *)(lVar13 + 0x38) + -1;
    uVar5 = 1;
  }
  return uVar5;
}




undefined8 FUN_10053d5ac(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  uint local_70;
  long local_68;
  
  lVar16 = *(long *)(param_1 + 0x270);
  if (((*(int *)(param_1 + 0x174) == 0) || (*(int *)(lVar16 + 0x38) != 0)) ||
     (uVar6 = FUN_10053e864(param_1), (int)uVar6 != 0)) {
    if (*(int *)(lVar16 + 0x34) == 0) {
      if (*(int *)(lVar16 + 0x20) == 0) {
        iVar3 = *(int *)(param_1 + 0x220);
        uVar4 = *(uint *)(param_1 + 0x228);
        lVar17 = *(long *)(param_1 + 0x230);
        local_88 = **(undefined8 **)(param_1 + 0x28);
        uStack_80 = (*(undefined8 **)(param_1 + 0x28))[1];
        lVar8 = *(long *)(lVar16 + 0x10);
        uVar9 = *(uint *)(lVar16 + 0x18);
        uVar10 = (ulong)uVar9;
        iVar11 = *(int *)(param_1 + 0x21c);
        if (iVar11 <= iVar3) {
          lVar18 = *param_2;
          lVar13 = *(long *)(lVar16 + 0x60);
          local_68 = param_1;
          do {
            if ((int)uVar10 < 8) {
              uVar6 = FUN_10053e8f8(&local_88,lVar8,uVar10,0);
              if ((int)uVar6 == 0) {
                return uVar6;
              }
              uVar10 = (ulong)local_70;
              lVar8 = local_78;
              if (7 < (int)local_70) goto LAB_10053d674;
              uVar6 = 1;
LAB_10053d6a0:
              uVar7 = FUN_10053ea40(&local_88,lVar8,uVar10,lVar13,uVar6);
              lVar8 = local_78;
              uVar9 = local_70;
              if ((int)uVar7 < 0) {
                return 0;
              }
            }
            else {
LAB_10053d674:
              uVar7 = lVar8 >> ((ulong)((int)uVar10 - 8) & 0x3f);
              iVar1 = *(int *)(lVar13 + (uVar7 & 0xff) * 4 + 0x120);
              if (iVar1 == 0) {
                uVar6 = 9;
                goto LAB_10053d6a0;
              }
              uVar7 = (ulong)*(byte *)(lVar13 + (uVar7 & 0xff) + 0x520);
              uVar9 = (int)uVar10 - iVar1;
            }
            uVar10 = (ulong)uVar9;
            uVar15 = uVar7 >> 4 & 0xfffffff;
            uVar2 = (uint)uVar7 & 0xf;
            uVar14 = (uint)uVar15;
            if ((uVar7 & 0xf) == 0) {
              if (uVar14 != 0xf) {
                if (0xf < (uint)uVar7) {
                  if (((int)uVar9 < (int)uVar14) &&
                     (uVar6 = FUN_10053e8f8(&local_88,lVar8,uVar10,uVar15), lVar8 = local_78,
                     uVar9 = local_70, (int)uVar6 == 0)) {
                    return uVar6;
                  }
                  uVar9 = uVar9 - uVar14;
                  iVar11 = (*(uint *)((long)&PTR___mh_execute_header_10115cb7c + uVar15 * 4) &
                           (uint)(lVar8 >> ((ulong)uVar9 & 0x3f))) + ~(-1 << (ulong)(uVar14 & 0x1f))
                  ;
                  goto LAB_10053d740;
                }
                break;
              }
              iVar1 = iVar11 + 0xf;
            }
            else {
              if (((int)uVar9 < (int)uVar2) &&
                 (uVar6 = FUN_10053e8f8(&local_88,lVar8,uVar10,uVar2), lVar8 = local_78,
                 uVar9 = local_70, (int)uVar6 == 0)) {
                return uVar6;
              }
              iVar1 = uVar14 + iVar11;
              uVar10 = (ulong)(uVar9 - uVar2);
              uVar5 = *(uint *)((long)&PTR___mh_execute_header_10115cb7c + (ulong)uVar2 * 4);
              uVar9 = uVar5 & (uint)(lVar8 >> (uVar10 & 0x3f));
              uVar14 = 0;
              if ((int)uVar9 <=
                  *(int *)((long)&PTR___mh_execute_header_10115cb7c + (ulong)(uVar2 - 1) * 4)) {
                uVar14 = uVar5;
              }
              *(short *)(lVar18 + (long)*(int *)(lVar17 + (long)iVar1 * 4) * 2) =
                   (short)(uVar9 - uVar14 << (ulong)(uVar4 & 0x1f));
            }
            uVar9 = (uint)uVar10;
            iVar11 = iVar1 + 1;
          } while (iVar1 < iVar3);
        }
        iVar11 = 0;
LAB_10053d740:
        puVar12 = *(undefined8 **)(param_1 + 0x28);
        *puVar12 = local_88;
        puVar12[1] = uStack_80;
        *(long *)(lVar16 + 0x10) = lVar8;
        *(uint *)(lVar16 + 0x18) = uVar9;
      }
      else {
        iVar11 = *(int *)(lVar16 + 0x20) + -1;
      }
      *(int *)(lVar16 + 0x20) = iVar11;
    }
    *(int *)(lVar16 + 0x38) = *(int *)(lVar16 + 0x38) + -1;
    uVar6 = 1;
  }
  return uVar6;
}




undefined8 FUN_10053d7e4(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ushort *puVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  int local_50;
  long local_48;
  
  lVar8 = *(long *)(param_1 + 0x270);
  uVar1 = *(uint *)(param_1 + 0x228);
  if (((*(int *)(param_1 + 0x174) == 0) || (*(int *)(lVar8 + 0x38) != 0)) ||
     (uVar2 = FUN_10053e864(param_1), (int)uVar2 != 0)) {
    puVar7 = *(undefined8 **)(param_1 + 0x28);
    local_68 = *puVar7;
    uStack_60 = puVar7[1];
    uVar3 = *(ulong *)(lVar8 + 0x10);
    uVar5 = *(uint *)(lVar8 + 0x18);
    uVar6 = (ulong)uVar5;
    if (0 < *(int *)(param_1 + 0x1f0)) {
      lVar9 = 0;
      local_48 = param_1;
      do {
        puVar10 = *(ushort **)(param_2 + lVar9 * 8);
        iVar4 = (int)uVar6;
        if (((int)uVar6 < 1) &&
           (uVar2 = FUN_10053e8f8(&local_68,uVar3,uVar6,1), uVar3 = local_58, iVar4 = local_50,
           (int)uVar2 == 0)) {
          return uVar2;
        }
        uVar5 = iVar4 - 1;
        uVar6 = (ulong)uVar5;
        if ((uVar3 >> (uVar6 & 0x3f) & 1) != 0) {
          *puVar10 = *puVar10 | (ushort)(1 << (ulong)(uVar1 & 0x1f));
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(param_1 + 0x1f0));
      puVar7 = *(undefined8 **)(param_1 + 0x28);
    }
    *puVar7 = local_68;
    puVar7[1] = uStack_60;
    *(ulong *)(lVar8 + 0x10) = uVar3;
    *(uint *)(lVar8 + 0x18) = uVar5;
    *(int *)(lVar8 + 0x38) = *(int *)(lVar8 + 0x38) + -1;
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_10053d8e0(long *param_1,long *param_2)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  uint local_1ac;
  undefined8 local_198;
  undefined8 local_190;
  ulong local_188;
  uint local_180;
  long *local_178;
  int aiStack_170 [64];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar22 = param_1[0x4e];
  if (((*(int *)((long)param_1 + 0x174) == 0) || (*(int *)(lVar22 + 0x38) != 0)) ||
     (uVar8 = FUN_10053e864(param_1), (int)uVar8 != 0)) {
    if (*(int *)(lVar22 + 0x34) == 0) {
      iVar5 = (int)param_1[0x44];
      uVar3 = 1 << (ulong)(*(uint *)(param_1 + 0x45) & 0x1f);
      uVar4 = -1 << (ulong)(*(uint *)(param_1 + 0x45) & 0x1f);
      lVar24 = param_1[0x46];
      local_198 = *(undefined8 *)param_1[5];
      local_190 = ((undefined8 *)param_1[5])[1];
      uVar13 = *(ulong *)(lVar22 + 0x10);
      uVar10 = (ulong)*(uint *)(lVar22 + 0x18);
      local_1ac = *(int *)(lVar22 + 0x20);
      lVar23 = *param_2;
      iVar14 = *(int *)((long)param_1 + 0x21c);
      local_178 = param_1;
      if (local_1ac == 0) {
        iVar1 = 0;
        lVar18 = *(long *)(lVar22 + 0x60);
        do {
          if ((int)uVar10 < 8) {
            iVar6 = FUN_10053e8f8(&local_198,uVar13,uVar10,0);
            if (iVar6 == 0) goto LAB_10053dcdc;
            uVar10 = (ulong)local_180;
            uVar13 = local_188;
            if (7 < (int)local_180) goto LAB_10053dac0;
            uVar8 = 1;
LAB_10053daec:
            uVar9 = FUN_10053ea40(&local_198,uVar13,uVar10,lVar18,uVar8);
            uVar13 = local_188;
            uVar20 = local_180;
            if ((int)uVar9 < 0) goto LAB_10053dcdc;
          }
          else {
LAB_10053dac0:
            uVar9 = (long)uVar13 >> ((ulong)((int)uVar10 - 8) & 0x3f);
            iVar6 = *(int *)(lVar18 + (uVar9 & 0xff) * 4 + 0x120);
            if (iVar6 == 0) {
              uVar8 = 9;
              goto LAB_10053daec;
            }
            uVar9 = (ulong)*(byte *)(lVar18 + (uVar9 & 0xff) + 0x520);
            uVar20 = (int)uVar10 - iVar6;
          }
          uVar10 = (ulong)uVar20;
          uVar19 = uVar9 >> 4 & 0xfffffff;
          if ((uVar9 & 0xf) == 0) {
            uVar15 = (uint)uVar19;
            if (uVar15 != 0xf) {
              local_1ac = 1 << (ulong)(uVar15 & 0x1f);
              if ((uint)uVar9 < 0x10) goto LAB_10053d990;
              if (((int)uVar20 < (int)uVar15) &&
                 (iVar6 = FUN_10053e8f8(&local_198,uVar13,uVar10,uVar19), uVar13 = local_188,
                 uVar20 = local_180, iVar6 == 0)) goto LAB_10053dcdc;
              uVar20 = uVar20 - uVar15;
              uVar10 = (ulong)uVar20;
              local_1ac = (*(uint *)((long)&PTR___mh_execute_header_10115cb7c + uVar19 * 4) &
                          (uint)((long)uVar13 >> (uVar10 & 0x3f))) + local_1ac;
              iVar6 = 0;
              if (local_1ac != 0) goto LAB_10053d990;
              goto LAB_10053da14;
            }
            local_1ac = 0;
          }
          else {
            if (((uint)uVar9 & 0xf) != 1) {
              lVar11 = *param_1;
              *(undefined4 *)(lVar11 + 0x28) = 0x79;
              (**(code **)(lVar11 + 8))(param_1,0xffffffff);
            }
            if (((int)uVar20 < 1) &&
               (iVar6 = FUN_10053e8f8(&local_198,uVar13,uVar10,1), uVar13 = local_188,
               uVar20 = local_180, iVar6 == 0)) goto LAB_10053dcdc;
            uVar10 = (ulong)(uVar20 - 1);
            local_1ac = uVar4;
            if ((uVar13 >> (uVar10 & 0x3f) & 1) != 0) {
              local_1ac = uVar3;
            }
          }
          iVar6 = iVar14;
          if (iVar14 <= iVar5) {
            iVar6 = iVar5;
          }
          lVar11 = ((long)iVar6 - (long)iVar14) + 1;
          piVar17 = (int *)(lVar24 + (long)iVar14 * 4);
          do {
            lVar21 = (long)*piVar17;
            if (*(short *)(lVar23 + lVar21 * 2) == 0) {
              iVar16 = (int)uVar19;
              uVar19 = (ulong)(iVar16 - 1);
              iVar7 = iVar14;
              if (iVar16 < 1) break;
            }
            else {
              uVar20 = (uint)uVar10;
              if (((int)(uint)uVar10 < 1) &&
                 (iVar7 = FUN_10053e8f8(&local_198,uVar13,uVar10,1), uVar13 = local_188,
                 uVar20 = local_180, iVar7 == 0)) goto LAB_10053dcdc;
              uVar10 = (ulong)(uVar20 - 1);
              if (((uVar13 >> (uVar10 & 0x3f) & 1) != 0) &&
                 (sVar2 = *(short *)(lVar23 + lVar21 * 2), (uVar3 & (int)sVar2) == 0)) {
                uVar20 = uVar3;
                if (sVar2 < 0) {
                  uVar20 = uVar4;
                }
                *(short *)(lVar23 + lVar21 * 2) = sVar2 + (short)uVar20;
              }
            }
            iVar14 = iVar14 + 1;
            piVar17 = piVar17 + 1;
            lVar11 = lVar11 + -1;
            iVar7 = iVar6 + 1;
          } while (lVar11 != 0);
          uVar20 = (uint)uVar10;
          if (local_1ac != 0) {
            iVar14 = *(int *)(lVar24 + (long)iVar7 * 4);
            *(short *)(lVar23 + (long)iVar14 * 2) = (short)local_1ac;
            aiStack_170[iVar1] = iVar14;
            iVar1 = iVar1 + 1;
          }
          iVar14 = iVar7 + 1;
        } while (iVar7 < iVar5);
        iVar6 = 0;
      }
      else {
        iVar1 = 0;
LAB_10053d990:
        iVar6 = iVar14;
        if (iVar14 <= iVar5) {
          iVar6 = iVar5;
        }
        piVar17 = (int *)(lVar24 + (long)iVar14 * 4);
        iVar14 = (iVar6 - iVar14) + 1;
        do {
          lVar24 = (long)*piVar17;
          if (*(short *)(lVar23 + lVar24 * 2) != 0) {
            uVar20 = (uint)uVar10;
            if (((int)(uint)uVar10 < 1) &&
               (iVar5 = FUN_10053e8f8(&local_198,uVar13,uVar10,1), uVar13 = local_188,
               uVar20 = local_180, iVar5 == 0)) goto LAB_10053dcdc;
            uVar10 = (ulong)(uVar20 - 1);
            if (((uVar13 >> (uVar10 & 0x3f) & 1) != 0) &&
               (sVar2 = *(short *)(lVar23 + lVar24 * 2), (uVar3 & (int)sVar2) == 0)) {
              uVar20 = uVar3;
              if (sVar2 < 0) {
                uVar20 = uVar4;
              }
              *(short *)(lVar23 + lVar24 * 2) = sVar2 + (short)uVar20;
            }
          }
          uVar20 = (uint)uVar10;
          piVar17 = piVar17 + 1;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        iVar6 = local_1ac + -1;
      }
LAB_10053da14:
      puVar12 = (undefined8 *)param_1[5];
      *puVar12 = local_198;
      puVar12[1] = local_190;
      *(ulong *)(lVar22 + 0x10) = uVar13;
      *(uint *)(lVar22 + 0x18) = uVar20;
      *(int *)(lVar22 + 0x20) = iVar6;
    }
    *(int *)(lVar22 + 0x38) = *(int *)(lVar22 + 0x38) + -1;
    uVar8 = 1;
  }
LAB_10053da44:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar8);
  }
  return;
LAB_10053dcdc:
  if (iVar1 != 0) {
    lVar22 = (long)iVar1;
    do {
      *(undefined2 *)(lVar23 + (long)aiStack_170[lVar22 + -1] * 2) = 0;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  uVar8 = 0;
  goto LAB_10053da44;
}




void FUN_10053dd0c(long *param_1,uint param_2,uint param_3,long *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  uint *puVar9;
  long lVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  uint local_57c [258];
  char local_171 [257];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  if (3 < param_3) {
    lVar6 = *param_1;
    *(undefined4 *)(lVar6 + 0x28) = 0x34;
    *(uint *)(lVar6 + 0x2c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  lVar6 = (long)(int)param_3 + 0x21;
  if (param_2 != 0) {
    lVar6 = (long)(int)param_3 + 0x1d;
  }
  lVar6 = param_1[lVar6];
  if (lVar6 == 0) {
    lVar7 = *param_1;
    *(undefined4 *)(lVar7 + 0x28) = 0x34;
    *(uint *)(lVar7 + 0x2c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  local_57c[0] = param_2;
  lVar7 = *param_4;
  if (lVar7 == 0) {
    lVar7 = (**(code **)param_1[1])(param_1,1,0x620);
    *param_4 = lVar7;
  }
  uVar18 = 0;
  *(long *)(lVar7 + 0x118) = lVar6;
  lVar15 = 1;
  do {
    bVar1 = *(byte *)(lVar6 + lVar15);
    uVar19 = uVar18 + bVar1;
    if (0x100 < (int)uVar19) {
      puVar8 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar8 + 5) = 9;
      (*(code *)*puVar8)(param_1);
    }
    if (bVar1 != 0) {
      _memset(local_171 + (int)uVar18,(int)lVar15,(ulong)bVar1);
      uVar18 = uVar19;
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 != 0x11);
  local_171[(int)uVar18] = '\0';
  uVar17 = (ulong)local_171[0];
  if (local_171[0] != '\0') {
    iVar12 = 0;
    uVar19 = 0;
    do {
      iVar16 = (int)uVar17;
      if (iVar16 == local_171[0]) {
        puVar9 = local_57c + (long)iVar12 + 1;
        pcVar11 = local_171 + (long)iVar12 + 1;
        do {
          *puVar9 = uVar19;
          uVar19 = uVar19 + 1;
          cVar2 = *pcVar11;
          iVar12 = iVar12 + 1;
          puVar9 = puVar9 + 1;
          pcVar11 = pcVar11 + 1;
        } while (iVar16 == cVar2);
      }
      if (1L << (uVar17 & 0x3f) <= (long)(ulong)uVar19) {
        puVar8 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar8 + 5) = 9;
        (*(code *)*puVar8)(param_1);
      }
      uVar19 = uVar19 << 1;
      uVar17 = (ulong)(iVar16 + 1);
      local_171[0] = local_171[iVar12];
    } while (local_171[0] != '\0');
  }
  uVar19 = local_57c[0];
  lVar10 = 0;
  lVar15 = 0;
  do {
    if (*(char *)(lVar6 + 1 + lVar10) == '\0') {
      uVar17 = 0xffffffffffffffff;
    }
    else {
      iVar12 = (int)lVar15;
      *(ulong *)(lVar7 + lVar10 * 8 + 0x98) = (long)iVar12 - (ulong)local_57c[(long)iVar12 + 1];
      lVar15 = (ulong)*(byte *)(lVar6 + 1 + lVar10) + (long)iVar12;
      uVar17 = (ulong)local_57c[lVar15];
    }
    *(ulong *)(lVar7 + lVar10 * 8 + 8) = uVar17;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 0x10);
  *(undefined8 *)(lVar7 + 0x88) = 0xfffff;
  _bzero((void *)(lVar7 + 0x120),0x400);
  lVar15 = 0;
  lVar10 = 1;
  do {
    if (*(char *)(lVar6 + lVar10) != '\0') {
      uVar3 = 8 - (int)lVar10;
      lVar15 = (long)(int)lVar15;
      uVar13 = 1;
      do {
        lVar5 = (long)(int)(local_57c[lVar15 + 1] << (ulong)(uVar3 & 0x1f));
        iVar12 = (1 << (ulong)(uVar3 & 0x1f)) + 1;
        do {
          *(int *)(lVar7 + 0x520 + lVar5 * 4 + -0x400) = (int)lVar10;
          *(undefined1 *)(lVar7 + 0x520 + lVar5) = *(undefined1 *)(lVar6 + lVar15 + 0x11);
          lVar5 = lVar5 + 1;
          iVar12 = iVar12 + -1;
        } while (1 < iVar12);
        lVar15 = lVar15 + 1;
        bVar4 = uVar13 < *(byte *)(lVar6 + lVar10);
        uVar13 = uVar13 + 1;
      } while (bVar4);
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 9);
  if ((uVar19 != 0) && (0 < (int)uVar18)) {
    uVar17 = (ulong)uVar18;
    pbVar14 = (byte *)(lVar6 + 0x11);
    do {
      if (0xf < *pbVar14) {
        puVar8 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar8 + 5) = 9;
        (*(code *)*puVar8)(param_1);
      }
      pbVar14 = pbVar14 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10053e038(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  undefined2 *puVar18;
  uint uVar19;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  uint local_70;
  long local_68;
  
  lVar16 = *(long *)(param_1 + 0x270);
  if (((*(int *)(param_1 + 0x174) == 0) || (*(int *)(lVar16 + 0x38) != 0)) ||
     (uVar7 = FUN_10053e864(param_1), (int)uVar7 != 0)) {
    if (*(int *)(lVar16 + 0x34) == 0) {
      lVar12 = *(long *)(param_1 + 0x230);
      iVar3 = *(int *)(param_1 + 0x238);
      local_68 = param_1;
      puVar13 = *(undefined8 **)(param_1 + 0x28);
      local_88 = *puVar13;
      uStack_80 = puVar13[1];
      lVar9 = *(long *)(lVar16 + 0x10);
      uVar10 = *(uint *)(lVar16 + 0x18);
      uVar11 = (ulong)uVar10;
      local_a0 = *(undefined8 *)(lVar16 + 0x20);
      uStack_98 = *(undefined8 *)(lVar16 + 0x28);
      local_90 = *(undefined4 *)(lVar16 + 0x30);
      if (0 < *(int *)(param_1 + 0x1f0)) {
        lVar17 = 0;
        do {
          puVar18 = *(undefined2 **)(param_2 + lVar17 * 8);
          lVar14 = *(long *)(lVar16 + lVar17 * 8 + 0xa8);
          if ((int)uVar11 < 8) {
            uVar7 = FUN_10053e8f8(&local_88,lVar9,uVar11,0);
            if ((int)uVar7 == 0) {
              return uVar7;
            }
            uVar11 = (ulong)local_70;
            lVar9 = local_78;
            if (7 < (int)local_70) goto LAB_10053e13c;
            uVar7 = 1;
LAB_10053e168:
            uVar8 = FUN_10053ea40(&local_88,lVar9,uVar11,lVar14,uVar7);
            lVar9 = local_78;
            uVar10 = local_70;
            if ((int)uVar8 < 0) {
              return 0;
            }
          }
          else {
LAB_10053e13c:
            uVar8 = lVar9 >> ((ulong)((int)uVar11 - 8) & 0x3f);
            iVar4 = *(int *)(lVar14 + (uVar8 & 0xff) * 4 + 0x120);
            if (iVar4 == 0) {
              uVar7 = 9;
              goto LAB_10053e168;
            }
            uVar8 = (ulong)*(byte *)(lVar14 + (uVar8 & 0xff) + 0x520);
            uVar10 = (int)uVar11 - iVar4;
          }
          uVar11 = (ulong)uVar10;
          lVar14 = *(long *)(lVar16 + lVar17 * 8 + 0xf8);
          iVar4 = *(int *)(lVar16 + lVar17 * 4 + 0x148);
          iVar15 = (int)uVar8;
          if (iVar4 == 0) {
            if (iVar15 != 0) {
              if (((int)uVar10 < iVar15) &&
                 (uVar7 = FUN_10053e8f8(&local_88,lVar9,uVar11,uVar8), lVar9 = local_78,
                 uVar10 = local_70, (int)uVar7 == 0)) {
                return uVar7;
              }
              uVar11 = (ulong)(uVar10 - iVar15);
            }
LAB_10053e344:
            iVar15 = 1;
          }
          else {
            if (iVar15 == 0) {
              iVar15 = 0;
            }
            else {
              if (((int)uVar10 < iVar15) &&
                 (uVar7 = FUN_10053e8f8(&local_88,lVar9,uVar11,uVar8), lVar9 = local_78,
                 uVar10 = local_70, (int)uVar7 == 0)) {
                return uVar7;
              }
              uVar11 = (ulong)(uVar10 - iVar15);
              uVar19 = *(uint *)((long)&PTR___mh_execute_header_10115cb7c + (uVar8 & 0xffffffff) * 4
                                );
              uVar10 = uVar19 & (uint)(lVar9 >> (uVar11 & 0x3f));
              uVar2 = 0;
              if ((int)uVar10 <=
                  *(int *)((long)&PTR___mh_execute_header_10115cb7c + (ulong)(iVar15 - 1) * 4)) {
                uVar2 = uVar19;
              }
              iVar15 = uVar10 - uVar2;
            }
            lVar1 = (long)*(int *)(param_1 + lVar17 * 4 + 500) * 4;
            iVar15 = *(int *)((long)&local_a0 + lVar1 + 4) + iVar15;
            *(int *)((long)&local_a0 + lVar1 + 4) = iVar15;
            *puVar18 = (short)iVar15;
            if (iVar4 < 2) goto LAB_10053e344;
            iVar15 = 1;
            do {
              if ((int)uVar11 < 8) {
                uVar7 = FUN_10053e8f8(&local_88,lVar9,uVar11,0);
                if ((int)uVar7 == 0) {
                  return uVar7;
                }
                uVar11 = (ulong)local_70;
                lVar9 = local_78;
                if (7 < (int)local_70) goto LAB_10053e278;
                uVar7 = 1;
LAB_10053e2a4:
                uVar8 = FUN_10053ea40(&local_88,lVar9,uVar11,lVar14,uVar7);
                lVar9 = local_78;
                uVar10 = local_70;
                if ((int)uVar8 < 0) {
                  return 0;
                }
              }
              else {
LAB_10053e278:
                uVar8 = lVar9 >> ((ulong)((int)uVar11 - 8) & 0x3f);
                iVar5 = *(int *)(lVar14 + (uVar8 & 0xff) * 4 + 0x120);
                if (iVar5 == 0) {
                  uVar7 = 9;
                  goto LAB_10053e2a4;
                }
                uVar8 = (ulong)*(byte *)(lVar14 + (uVar8 & 0xff) + 0x520);
                uVar10 = (int)uVar11 - iVar5;
              }
              uVar11 = (ulong)uVar10;
              uVar19 = (uint)(uVar8 >> 4) & 0xfffffff;
              uVar2 = (uint)uVar8 & 0xf;
              if ((uVar8 & 0xf) == 0) {
                if (uVar19 != 0xf) goto LAB_10053e40c;
                iVar15 = iVar15 + 0xf;
              }
              else {
                if (((int)uVar10 < (int)uVar2) &&
                   (uVar7 = FUN_10053e8f8(&local_88,lVar9,uVar11,uVar2), lVar9 = local_78,
                   uVar10 = local_70, (int)uVar7 == 0)) {
                  return uVar7;
                }
                iVar15 = uVar19 + iVar15;
                uVar11 = (ulong)(uVar10 - uVar2);
                uVar6 = *(uint *)((long)&PTR___mh_execute_header_10115cb7c + (ulong)uVar2 * 4);
                uVar10 = uVar6 & (uint)(lVar9 >> (uVar11 & 0x3f));
                uVar19 = 0;
                if ((int)uVar10 <=
                    *(int *)((long)&PTR___mh_execute_header_10115cb7c + (ulong)(uVar2 - 1) * 4)) {
                  uVar19 = uVar6;
                }
                puVar18[*(int *)(lVar12 + (long)iVar15 * 4)] = (short)uVar10 - (short)uVar19;
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 < iVar4);
          }
          for (; iVar15 <= iVar3; iVar15 = iVar15 + uVar19 + 1) {
            if ((int)uVar11 < 8) {
              uVar7 = FUN_10053e8f8(&local_88,lVar9,uVar11,0);
              if ((int)uVar7 == 0) {
                return uVar7;
              }
              uVar11 = (ulong)local_70;
              lVar9 = local_78;
              if (7 < (int)local_70) goto LAB_10053e380;
              uVar7 = 1;
LAB_10053e3ac:
              uVar8 = FUN_10053ea40(&local_88,lVar9,uVar11,lVar14,uVar7);
              lVar9 = local_78;
              uVar10 = local_70;
              if ((int)uVar8 < 0) {
                return 0;
              }
            }
            else {
LAB_10053e380:
              uVar8 = lVar9 >> ((ulong)((int)uVar11 - 8) & 0x3f);
              iVar4 = *(int *)(lVar14 + (uVar8 & 0xff) * 4 + 0x120);
              if (iVar4 == 0) {
                uVar7 = 9;
                goto LAB_10053e3ac;
              }
              uVar8 = (ulong)*(byte *)(lVar14 + (uVar8 & 0xff) + 0x520);
              uVar10 = (int)uVar11 - iVar4;
            }
            uVar11 = (ulong)uVar10;
            uVar19 = (uint)(uVar8 >> 4) & 0xfffffff;
            uVar2 = (uint)uVar8 & 0xf;
            if ((uVar8 & 0xf) == 0) {
              if (uVar19 != 0xf) break;
            }
            else {
              if (((int)uVar10 < (int)uVar2) &&
                 (uVar7 = FUN_10053e8f8(&local_88,lVar9,uVar11,uVar2), lVar9 = local_78,
                 uVar10 = local_70, (int)uVar7 == 0)) {
                return uVar7;
              }
              uVar11 = (ulong)(uVar10 - uVar2);
            }
          }
LAB_10053e40c:
          uVar10 = (uint)uVar11;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *(int *)(param_1 + 0x1f0));
        puVar13 = *(undefined8 **)(param_1 + 0x28);
      }
      *puVar13 = local_88;
      puVar13[1] = uStack_80;
      *(long *)(lVar16 + 0x10) = lVar9;
      *(uint *)(lVar16 + 0x18) = uVar10;
      *(undefined8 *)(lVar16 + 0x28) = uStack_98;
      *(undefined8 *)(lVar16 + 0x20) = local_a0;
      *(undefined4 *)(lVar16 + 0x30) = local_90;
    }
    *(int *)(lVar16 + 0x38) = *(int *)(lVar16 + 0x38) + -1;
    uVar7 = 1;
  }
  return uVar7;
}




undefined8 FUN_10053e454(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  undefined2 *puVar17;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  uint local_70;
  long local_68;
  
  lVar14 = *(long *)(param_1 + 0x270);
  if (((*(int *)(param_1 + 0x174) == 0) || (*(int *)(lVar14 + 0x38) != 0)) ||
     (uVar6 = FUN_10053e864(param_1), (int)uVar6 != 0)) {
    if (*(int *)(lVar14 + 0x34) == 0) {
      local_68 = param_1;
      puVar11 = *(undefined8 **)(param_1 + 0x28);
      local_88 = *puVar11;
      uStack_80 = puVar11[1];
      lVar8 = *(long *)(lVar14 + 0x10);
      uVar9 = *(uint *)(lVar14 + 0x18);
      uVar10 = (ulong)uVar9;
      local_a0 = *(undefined8 *)(lVar14 + 0x20);
      uStack_98 = *(undefined8 *)(lVar14 + 0x28);
      local_90 = *(undefined4 *)(lVar14 + 0x30);
      if (0 < *(int *)(param_1 + 0x1f0)) {
        lVar15 = 0;
        do {
          puVar17 = *(undefined2 **)(param_2 + lVar15 * 8);
          lVar12 = *(long *)(lVar14 + lVar15 * 8 + 0xa8);
          if ((int)uVar10 < 8) {
            uVar6 = FUN_10053e8f8(&local_88,lVar8,uVar10,0);
            if ((int)uVar6 == 0) {
              return uVar6;
            }
            uVar10 = (ulong)local_70;
            lVar8 = local_78;
            if (7 < (int)local_70) goto LAB_10053e548;
            uVar6 = 1;
LAB_10053e574:
            uVar7 = FUN_10053ea40(&local_88,lVar8,uVar10,lVar12,uVar6);
            lVar8 = local_78;
            uVar9 = local_70;
            if ((int)uVar7 < 0) {
              return 0;
            }
          }
          else {
LAB_10053e548:
            uVar7 = lVar8 >> ((ulong)((int)uVar10 - 8) & 0x3f);
            iVar4 = *(int *)(lVar12 + (uVar7 & 0xff) * 4 + 0x120);
            if (iVar4 == 0) {
              uVar6 = 9;
              goto LAB_10053e574;
            }
            uVar7 = (ulong)*(byte *)(lVar12 + (uVar7 & 0xff) + 0x520);
            uVar9 = (int)uVar10 - iVar4;
          }
          uVar10 = (ulong)uVar9;
          lVar12 = *(long *)(lVar14 + lVar15 * 8 + 0xf8);
          iVar4 = *(int *)(lVar14 + lVar15 * 4 + 0x148);
          iVar13 = (int)uVar7;
          if (iVar4 == 0) {
            if (iVar13 != 0) {
              if (((int)uVar9 < iVar13) &&
                 (uVar6 = FUN_10053e8f8(&local_88,lVar8,uVar10,uVar7), lVar8 = local_78,
                 uVar9 = local_70, (int)uVar6 == 0)) {
                return uVar6;
              }
              uVar10 = (ulong)(uVar9 - iVar13);
            }
LAB_10053e75c:
            iVar13 = 1;
LAB_10053e760:
            do {
              if ((int)uVar10 < 8) {
                uVar6 = FUN_10053e8f8(&local_88,lVar8,uVar10,0);
                if ((int)uVar6 == 0) {
                  return uVar6;
                }
                uVar10 = (ulong)local_70;
                lVar8 = local_78;
                if (7 < (int)local_70) goto LAB_10053e790;
                uVar6 = 1;
LAB_10053e7bc:
                uVar7 = FUN_10053ea40(&local_88,lVar8,uVar10,lVar12,uVar6);
                lVar8 = local_78;
                uVar9 = local_70;
                if ((int)uVar7 < 0) {
                  return 0;
                }
              }
              else {
LAB_10053e790:
                uVar7 = lVar8 >> ((ulong)((int)uVar10 - 8) & 0x3f);
                iVar4 = *(int *)(lVar12 + (uVar7 & 0xff) * 4 + 0x120);
                if (iVar4 == 0) {
                  uVar6 = 9;
                  goto LAB_10053e7bc;
                }
                uVar7 = (ulong)*(byte *)(lVar12 + (uVar7 & 0xff) + 0x520);
                uVar9 = (int)uVar10 - iVar4;
              }
              uVar10 = (ulong)uVar9;
              uVar16 = (uint)(uVar7 >> 4) & 0xfffffff;
              uVar3 = (uint)uVar7 & 0xf;
              if ((uVar7 & 0xf) == 0) {
                if (uVar16 != 0xf) break;
              }
              else {
                if (((int)uVar9 < (int)uVar3) &&
                   (uVar6 = FUN_10053e8f8(&local_88,lVar8,uVar10,uVar3), lVar8 = local_78,
                   uVar9 = local_70, (int)uVar6 == 0)) {
                  return uVar6;
                }
                uVar10 = (ulong)(uVar9 - uVar3);
              }
              iVar13 = iVar13 + uVar16 + 1;
            } while (iVar13 < 0x40);
          }
          else {
            if (iVar13 == 0) {
              iVar13 = 0;
            }
            else {
              if (((int)uVar9 < iVar13) &&
                 (uVar6 = FUN_10053e8f8(&local_88,lVar8,uVar10,uVar7), lVar8 = local_78,
                 uVar9 = local_70, (int)uVar6 == 0)) {
                return uVar6;
              }
              uVar10 = (ulong)(uVar9 - iVar13);
              uVar16 = *(uint *)((long)&PTR___mh_execute_header_10115cb7c + (uVar7 & 0xffffffff) * 4
                                );
              uVar9 = uVar16 & (uint)(lVar8 >> (uVar10 & 0x3f));
              uVar3 = 0;
              if ((int)uVar9 <=
                  *(int *)((long)&PTR___mh_execute_header_10115cb7c + (ulong)(iVar13 - 1) * 4)) {
                uVar3 = uVar16;
              }
              iVar13 = uVar9 - uVar3;
            }
            lVar1 = (long)*(int *)(param_1 + lVar15 * 4 + 500) * 4;
            iVar13 = *(int *)((long)&local_a0 + lVar1 + 4) + iVar13;
            *(int *)((long)&local_a0 + lVar1 + 4) = iVar13;
            *puVar17 = (short)iVar13;
            if (iVar4 < 2) goto LAB_10053e75c;
            iVar13 = 1;
            do {
              if ((int)uVar10 < 8) {
                uVar6 = FUN_10053e8f8(&local_88,lVar8,uVar10,0);
                if ((int)uVar6 == 0) {
                  return uVar6;
                }
                uVar10 = (ulong)local_70;
                lVar8 = local_78;
                if (7 < (int)local_70) goto LAB_10053e684;
                uVar6 = 1;
LAB_10053e6b0:
                uVar7 = FUN_10053ea40(&local_88,lVar8,uVar10,lVar12,uVar6);
                lVar8 = local_78;
                uVar9 = local_70;
                if ((int)uVar7 < 0) {
                  return 0;
                }
              }
              else {
LAB_10053e684:
                uVar7 = lVar8 >> ((ulong)((int)uVar10 - 8) & 0x3f);
                iVar2 = *(int *)(lVar12 + (uVar7 & 0xff) * 4 + 0x120);
                if (iVar2 == 0) {
                  uVar6 = 9;
                  goto LAB_10053e6b0;
                }
                uVar7 = (ulong)*(byte *)(lVar12 + (uVar7 & 0xff) + 0x520);
                uVar9 = (int)uVar10 - iVar2;
              }
              uVar10 = (ulong)uVar9;
              uVar16 = (uint)(uVar7 >> 4) & 0xfffffff;
              uVar3 = (uint)uVar7 & 0xf;
              if ((uVar7 & 0xf) == 0) {
                if (uVar16 != 0xf) goto LAB_10053e820;
                iVar2 = iVar13 + 0xf;
              }
              else {
                if (((int)uVar9 < (int)uVar3) &&
                   (uVar6 = FUN_10053e8f8(&local_88,lVar8,uVar10,uVar3), lVar8 = local_78,
                   uVar9 = local_70, (int)uVar6 == 0)) {
                  return uVar6;
                }
                iVar2 = uVar16 + iVar13;
                uVar10 = (ulong)(uVar9 - uVar3);
                uVar5 = *(uint *)((long)&PTR___mh_execute_header_10115cb7c + (ulong)uVar3 * 4);
                uVar9 = uVar5 & (uint)(lVar8 >> (uVar10 & 0x3f));
                uVar16 = 0;
                if ((int)uVar9 <=
                    *(int *)((long)&PTR___mh_execute_header_10115cb7c + (ulong)(uVar3 - 1) * 4)) {
                  uVar16 = uVar5;
                }
                puVar17[*(int *)((long)&PTR___mh_execute_header_10115cee0 + (long)iVar2 * 4)] =
                     (short)uVar9 - (short)uVar16;
              }
              iVar13 = iVar2 + 1;
            } while (iVar13 < iVar4);
            if (iVar2 < 0x3f) goto LAB_10053e760;
          }
LAB_10053e820:
          uVar9 = (uint)uVar10;
          lVar15 = lVar15 + 1;
        } while (lVar15 < *(int *)(param_1 + 0x1f0));
        puVar11 = *(undefined8 **)(param_1 + 0x28);
      }
      *puVar11 = local_88;
      puVar11[1] = uStack_80;
      *(long *)(lVar14 + 0x10) = lVar8;
      *(uint *)(lVar14 + 0x18) = uVar9;
      *(undefined8 *)(lVar14 + 0x28) = uStack_98;
      *(undefined8 *)(lVar14 + 0x20) = local_a0;
      *(undefined4 *)(lVar14 + 0x30) = local_90;
    }
    *(int *)(lVar14 + 0x38) = *(int *)(lVar14 + 0x38) + -1;
    uVar6 = 1;
  }
  return uVar6;
}




undefined8 FUN_10053e864(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x270);
  iVar2 = *(int *)(lVar5 + 0x18);
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  lVar4 = *(long *)(param_1 + 0x268);
  *(int *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + (iVar1 >> 3);
  *(undefined4 *)(lVar5 + 0x18) = 0;
  uVar3 = (**(code **)(lVar4 + 0x10))();
  if ((int)uVar3 != 0) {
    if (0 < *(int *)(param_1 + 0x1c0)) {
      lVar4 = 0;
      do {
        *(undefined4 *)(lVar5 + 0x24 + lVar4 * 4) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_1 + 0x1c0));
    }
    *(undefined4 *)(lVar5 + 0x20) = 0;
    *(undefined4 *)(lVar5 + 0x38) = *(undefined4 *)(param_1 + 0x174);
    if (*(int *)(param_1 + 0x23c) == 0) {
      *(undefined4 *)(lVar5 + 0x34) = 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}




undefined8 FUN_10053e8f8(undefined8 *param_1,ulong param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  
  pbVar8 = (byte *)*param_1;
  lVar10 = param_1[1];
  plVar7 = (long *)param_1[4];
  if (*(int *)((long)plVar7 + 0x23c) == 0) {
    if (param_3 < 0x19) {
      do {
        pbVar9 = pbVar8;
        if (lVar10 == 0) {
          uVar4 = (**(code **)(plVar7[5] + 0x18))(plVar7);
          if ((int)uVar4 == 0) {
            return uVar4;
          }
          pbVar9 = *(byte **)plVar7[5];
          lVar10 = ((undefined8 *)plVar7[5])[1];
        }
        lVar10 = lVar10 + -1;
        pbVar8 = pbVar9 + 1;
        uVar6 = (ulong)*pbVar9;
        pbVar9 = pbVar8;
        if (uVar6 == 0xff) {
          do {
            if (lVar10 == 0) {
              uVar4 = (**(code **)(plVar7[5] + 0x18))(plVar7);
              if ((int)uVar4 == 0) {
                return uVar4;
              }
              pbVar9 = *(byte **)plVar7[5];
              lVar10 = ((undefined8 *)plVar7[5])[1];
            }
            lVar10 = lVar10 + -1;
            pbVar8 = pbVar9 + 1;
            bVar3 = *pbVar9;
            pbVar9 = pbVar8;
          } while (bVar3 == 0xff);
          if (bVar3 != 0) {
            *(uint *)((long)plVar7 + 0x23c) = (uint)bVar3;
            goto LAB_10053e930;
          }
          uVar6 = 0xff;
        }
        param_2 = uVar6 | param_2 << 8;
        iVar2 = param_3 + 8;
        bVar1 = param_3 < 0x11;
        param_3 = iVar2;
      } while (bVar1);
    }
  }
  else {
LAB_10053e930:
    if (param_3 < param_4) {
      if (*(int *)(plVar7[0x4e] + 0x34) == 0) {
        lVar5 = *plVar7;
        *(undefined4 *)(lVar5 + 0x28) = 0x78;
        (**(code **)(lVar5 + 8))(plVar7,0xffffffff);
        *(undefined4 *)(plVar7[0x4e] + 0x34) = 1;
      }
      param_2 = param_2 << ((ulong)(0x19 - param_3) & 0x3f);
      param_3 = 0x19;
    }
  }
  *param_1 = pbVar8;
  param_1[1] = lVar10;
  param_1[2] = param_2;
  *(int *)(param_1 + 3) = param_3;
  return 1;
}




ulong FUN_10053ea40(long param_1,ulong param_2,ulong param_3,long param_4,ulong param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  iVar3 = (int)param_5;
  if ((int)param_3 < iVar3) {
    iVar2 = FUN_10053e8f8(param_1,param_2,param_3,param_5);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    param_2 = *(ulong *)(param_1 + 0x10);
    param_3 = (ulong)*(uint *)(param_1 + 0x18);
  }
  uVar5 = (int)param_3 - iVar3;
  uVar6 = (ulong)uVar5;
  uVar1 = *(uint *)((long)&PTR___mh_execute_header_10115cb7c + (param_5 & 0xffffffff) * 4) &
          (uint)((long)param_2 >> (uVar6 & 0x3f));
  uVar8 = (ulong)(int)uVar1;
  uVar9 = (ulong)iVar3;
  if (*(long *)(param_4 + (long)iVar3 * 8) < (long)(int)uVar1) {
    uVar10 = uVar9;
    do {
      iVar3 = (int)uVar6;
      if (iVar3 < 1) {
        iVar3 = FUN_10053e8f8(param_1,param_2,uVar6,1);
        if (iVar3 == 0) {
          return 0xffffffff;
        }
        param_2 = *(ulong *)(param_1 + 0x10);
        iVar3 = *(int *)(param_1 + 0x18);
      }
      uVar5 = iVar3 - 1;
      uVar6 = (ulong)uVar5;
      uVar8 = param_2 >> (uVar6 & 0x3f) & 1 | uVar8 << 1;
      uVar9 = uVar10 + 1;
      lVar7 = uVar10 * 8;
      param_5 = uVar9;
      uVar10 = uVar9;
    } while (*(long *)(param_4 + 8 + lVar7) < (long)uVar8);
  }
  *(ulong *)(param_1 + 0x10) = param_2;
  *(uint *)(param_1 + 0x18) = uVar5;
  if ((int)param_5 < 0x11) {
    uVar9 = (ulong)*(byte *)(*(long *)(param_4 + 0x118) +
                             (long)(*(int *)(param_4 + uVar9 * 8 + 0x90) + (int)uVar8) + 0x11);
  }
  else {
    plVar4 = *(long **)(param_1 + 0x20);
    lVar7 = *plVar4;
    *(undefined4 *)(lVar7 + 0x28) = 0x79;
    (**(code **)(lVar7 + 8))(plVar4,0xffffffff);
    uVar9 = 0;
  }
  return uVar9;
}




void FUN_10053eb6c(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  uVar2 = *(int *)(param_1 + 0x22c) * *(int *)(param_1 + 0x44);
  if (uVar1 < uVar2) {
    if (uVar1 * 2 < uVar2) {
      if (uVar2 < uVar1 * 3 || uVar2 + uVar1 * -3 == 0) {
        uVar3 = FUN_10054d2ec((ulong)*(uint *)(param_1 + 0x30) * 3);
        *(undefined4 *)(param_1 + 0x88) = uVar3;
        uVar4 = (ulong)*(uint *)(param_1 + 0x34) * 3;
        lVar7 = 3;
      }
      else if (uVar1 * 4 < uVar2) {
        if (uVar2 < uVar1 * 5 || uVar2 + uVar1 * -5 == 0) {
          uVar3 = FUN_10054d2ec((ulong)*(uint *)(param_1 + 0x30) * 5);
          *(undefined4 *)(param_1 + 0x88) = uVar3;
          uVar4 = (ulong)*(uint *)(param_1 + 0x34) * 5;
          lVar7 = 5;
        }
        else if (uVar2 < uVar1 * 6 || uVar2 + uVar1 * -6 == 0) {
          uVar3 = FUN_10054d2ec((ulong)*(uint *)(param_1 + 0x30) * 6);
          *(undefined4 *)(param_1 + 0x88) = uVar3;
          uVar4 = (ulong)*(uint *)(param_1 + 0x34) * 6;
          lVar7 = 6;
        }
        else if (uVar2 < uVar1 * 7 || uVar2 + uVar1 * -7 == 0) {
          uVar3 = FUN_10054d2ec((ulong)*(uint *)(param_1 + 0x30) * 7);
          *(undefined4 *)(param_1 + 0x88) = uVar3;
          uVar4 = (ulong)*(uint *)(param_1 + 0x34) * 7;
          lVar7 = 7;
        }
        else if (uVar1 * 8 < uVar2) {
          if (uVar2 < uVar1 * 9 || uVar2 + uVar1 * -9 == 0) {
            uVar3 = FUN_10054d2ec((ulong)*(uint *)(param_1 + 0x30) * 9);
            *(undefined4 *)(param_1 + 0x88) = uVar3;
            uVar4 = (ulong)*(uint *)(param_1 + 0x34) * 9;
            lVar7 = 9;
          }
          else if (uVar2 < uVar1 * 10 || uVar2 + uVar1 * -10 == 0) {
            uVar3 = FUN_10054d2ec((ulong)*(uint *)(param_1 + 0x30) * 10);
            *(undefined4 *)(param_1 + 0x88) = uVar3;
            uVar4 = (ulong)*(uint *)(param_1 + 0x34) * 10;
            lVar7 = 10;
          }
          else if (uVar2 < uVar1 * 0xb || uVar2 + uVar1 * -0xb == 0) {
            lVar7 = 0xb;
            uVar3 = FUN_10054d2ec((ulong)*(uint *)(param_1 + 0x30) * 0xb);
            *(undefined4 *)(param_1 + 0x88) = uVar3;
            uVar4 = (ulong)*(uint *)(param_1 + 0x34) * 0xb;
          }
          else if (uVar2 < uVar1 * 0xc || uVar2 + uVar1 * -0xc == 0) {
            uVar3 = FUN_10054d2ec((ulong)*(uint *)(param_1 + 0x30) * 0xc);
            *(undefined4 *)(param_1 + 0x88) = uVar3;
            uVar4 = (ulong)*(uint *)(param_1 + 0x34) * 0xc;
            lVar7 = 0xc;
          }
          else {
            if (uVar2 < uVar1 * 0xd || uVar2 + uVar1 * -0xd == 0) {
              uVar1 = *(uint *)(param_1 + 0x30);
              lVar7 = 0xd;
            }
            else {
              if (uVar1 * 0xe <= uVar2 && uVar2 + uVar1 * -0xe != 0) {
                if (uVar2 < uVar1 * 0xf || uVar2 + uVar1 * -0xf == 0) {
                  uVar3 = FUN_10054d2ec((ulong)*(uint *)(param_1 + 0x30) * 0xf);
                  *(undefined4 *)(param_1 + 0x88) = uVar3;
                  uVar4 = (ulong)*(uint *)(param_1 + 0x34) * 0xf;
                  lVar7 = 0xf;
                }
                else {
                  uVar3 = FUN_10054d2ec((ulong)*(uint *)(param_1 + 0x30) << 4);
                  *(undefined4 *)(param_1 + 0x88) = uVar3;
                  uVar4 = (ulong)*(uint *)(param_1 + 0x34) << 4;
                  lVar7 = 0x10;
                }
                goto LAB_10053ee20;
              }
              uVar1 = *(uint *)(param_1 + 0x30);
              lVar7 = 0xe;
            }
            uVar3 = FUN_10054d2ec((ulong)uVar1 * lVar7);
            *(undefined4 *)(param_1 + 0x88) = uVar3;
            uVar4 = (ulong)*(uint *)(param_1 + 0x34) * lVar7;
          }
        }
        else {
          uVar3 = FUN_10054d2ec((ulong)*(uint *)(param_1 + 0x30) << 3);
          *(undefined4 *)(param_1 + 0x88) = uVar3;
          uVar4 = (ulong)*(uint *)(param_1 + 0x34) << 3;
          lVar7 = 8;
        }
      }
      else {
        uVar3 = FUN_10054d2ec((ulong)*(uint *)(param_1 + 0x30) << 2);
        *(undefined4 *)(param_1 + 0x88) = uVar3;
        uVar4 = (ulong)*(uint *)(param_1 + 0x34) << 2;
        lVar7 = 4;
      }
    }
    else {
      uVar3 = FUN_10054d2ec((ulong)*(uint *)(param_1 + 0x30) << 1);
      *(undefined4 *)(param_1 + 0x88) = uVar3;
      uVar4 = (ulong)*(uint *)(param_1 + 0x34) << 1;
      lVar7 = 2;
    }
  }
  else {
    uVar3 = FUN_10054d2ec(*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x88) = uVar3;
    uVar4 = (ulong)*(uint *)(param_1 + 0x34);
    lVar7 = 1;
  }
LAB_10053ee20:
  uVar3 = FUN_10054d2ec(uVar4,(long)*(int *)(param_1 + 0x22c));
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  uVar3 = (undefined4)lVar7;
  *(undefined4 *)(param_1 + 0x1a8) = uVar3;
  *(undefined4 *)(param_1 + 0x1ac) = uVar3;
  iVar5 = *(int *)(param_1 + 0x38);
  if (0 < iVar5) {
    puVar6 = (undefined4 *)(*(long *)(param_1 + 0x130) + 0x28);
    do {
      puVar6[-1] = uVar3;
      *puVar6 = uVar3;
      puVar6 = puVar6 + 0x18;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}




void FUN_10053ee88(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x30);
  *(undefined8 **)(param_1 + 0x260) = puVar1;
  *puVar1 = FUN_10053eef0;
  puVar1[1] = FUN_10053f494;
  puVar1[2] = FUN_10053f4ec;
  puVar1[3] = FUN_10053f78c;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 1;
  return;
}




undefined8 FUN_10053eef0(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  
  lVar9 = param_1[0x4c];
  uVar8 = 2;
  if (*(int *)(lVar9 + 0x24) == 0) {
    do {
      while( true ) {
        uVar8 = (**(code **)(param_1[0x4d] + 8))(param_1);
        if ((int)uVar8 != 1) {
          if ((int)uVar8 != 2) {
            return uVar8;
          }
          *(undefined4 *)(lVar9 + 0x24) = 1;
          if (*(int *)(lVar9 + 0x28) == 0) {
            if (*(int *)((long)param_1 + 0xac) < *(int *)((long)param_1 + 0xb4)) {
              *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xac);
            }
          }
          else if (*(int *)(param_1[0x4d] + 0x1c) != 0) {
            puVar4 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar4 + 5) = 0x3e;
            (*(code *)*puVar4)(param_1);
          }
          return 2;
        }
        if (*(int *)(lVar9 + 0x28) == 0) break;
        if (*(int *)(lVar9 + 0x28) == 1) {
          if ((0xffdc < *(uint *)((long)param_1 + 0x34)) || (0xffdc < *(uint *)(param_1 + 6))) {
            *(undefined8 *)(*param_1 + 0x28) = 0xffdc0000002a;
            (**(code **)*param_1)(param_1);
          }
          lVar7 = param_1[0x25];
          if ((int)lVar7 != 8) {
            lVar6 = *param_1;
            *(undefined4 *)(lVar6 + 0x28) = 0x10;
            *(int *)(lVar6 + 0x2c) = (int)lVar7;
            (**(code **)*param_1)(param_1);
          }
          iVar3 = (int)param_1[7];
          if (10 < iVar3) {
            lVar7 = *param_1;
            *(undefined4 *)(lVar7 + 0x28) = 0x1b;
            *(int *)(lVar7 + 0x2c) = iVar3;
            *(undefined4 *)(*param_1 + 0x30) = 10;
            (**(code **)*param_1)(param_1);
            iVar3 = (int)param_1[7];
          }
          param_1[0x34] = 0x100000001;
          if (0 < iVar3) {
            iVar1 = 0;
            piVar10 = (int *)(param_1[0x26] + 8);
            lVar7 = 0x100000001;
            do {
              if ((*piVar10 - 1U < 4) && (piVar10[1] - 1U < 4)) {
                uVar8 = CONCAT44(piVar10[1],*piVar10);
              }
              else {
                puVar4 = (undefined8 *)*param_1;
                *(undefined4 *)(puVar4 + 5) = 0x13;
                (*(code *)*puVar4)(param_1);
                lVar7 = param_1[0x34];
                uVar8 = *(undefined8 *)piVar10;
                iVar3 = (int)param_1[7];
              }
              lVar7 = NEON_smax(lVar7,uVar8,4);
              param_1[0x34] = lVar7;
              iVar1 = iVar1 + 1;
              piVar10 = piVar10 + 0x18;
            } while (iVar1 < iVar3);
          }
          if (((int)param_1[0x27] == 0) &&
             ((*(int *)((long)param_1 + 0x13c) == 0 || ((int)param_1[0x38] == 0)))) {
            iVar1 = (int)param_1[0x44];
            if (0x4f < iVar1) {
              if (iVar1 < 0xa8) {
                if (iVar1 < 0x78) {
                  if (iVar1 == 0x50) {
                    iVar1 = 9;
                  }
                  else {
                    if (iVar1 != 99) goto LAB_10053f3c8;
                    iVar1 = 10;
                  }
                }
                else if (iVar1 == 0x78) {
                  iVar1 = 0xb;
                }
                else {
                  if (iVar1 != 0x8f) goto LAB_10053f3c8;
                  iVar1 = 0xc;
                }
              }
              else if (iVar1 < 0xe0) {
                if (iVar1 == 0xa8) {
                  iVar1 = 0xd;
                }
                else {
                  if (iVar1 != 0xc3) goto LAB_10053f3c8;
                  iVar1 = 0xe;
                }
              }
              else if (iVar1 == 0xe0) {
                iVar1 = 0xf;
              }
              else {
                if (iVar1 != 0xff) goto LAB_10053f3c8;
                iVar1 = 0x10;
              }
              goto LAB_10053f0b4;
            }
            if (iVar1 < 0x18) {
              if (7 < iVar1) {
                if (iVar1 == 8) {
                  iVar1 = 3;
                  *(undefined4 *)((long)param_1 + 0x22c) = 3;
                  param_1[0x46] = (long)&PTR___mh_execute_header_10115d318;
                  uVar2 = 8;
                }
                else {
                  if (iVar1 != 0xf) goto LAB_10053f3c8;
                  iVar1 = 4;
                  *(undefined4 *)((long)param_1 + 0x22c) = 4;
                  param_1[0x46] = (long)&DAT_10115d298;
                  uVar2 = 0xf;
                }
                goto LAB_10053f3b8;
              }
              if (iVar1 != 0) {
                if (iVar1 != 3) goto LAB_10053f3c8;
                iVar1 = 2;
                *(undefined4 *)((long)param_1 + 0x22c) = 2;
                param_1[0x46] = (long)&PTR___mh_execute_header_10115d37c;
                uVar2 = 3;
                goto LAB_10053f3b8;
              }
              iVar1 = 1;
              *(undefined4 *)((long)param_1 + 0x22c) = 1;
              param_1[0x46] = (long)&PTR___mh_execute_header_10115cee0;
              *(undefined4 *)(param_1 + 0x47) = 0;
            }
            else {
              if (iVar1 < 0x30) {
                if (iVar1 == 0x18) {
                  iVar1 = 5;
                  *(undefined4 *)((long)param_1 + 0x22c) = 5;
                  param_1[0x46] = (long)&PTR___mh_execute_header_10115d1f4;
                  uVar2 = 0x18;
                }
                else {
                  if (iVar1 != 0x23) goto LAB_10053f3c8;
                  iVar1 = 6;
                  *(undefined4 *)((long)param_1 + 0x22c) = 6;
                  param_1[0x46] = (long)&PTR___mh_execute_header_10115d124;
                  uVar2 = 0x23;
                }
              }
              else {
                if (iVar1 != 0x30) {
                  if (iVar1 == 0x3f) goto LAB_10053f0b0;
LAB_10053f3c8:
                  lVar7 = *param_1;
                  uVar2 = *(undefined4 *)((long)param_1 + 0x21c);
                  *(undefined4 *)(lVar7 + 0x28) = 0x11;
                  *(undefined4 *)(lVar7 + 0x2c) = uVar2;
                  *(int *)(*param_1 + 0x30) = (int)param_1[0x44];
                  *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)((long)param_1 + 0x224);
                  *(int *)(*param_1 + 0x38) = (int)param_1[0x45];
                  (**(code **)*param_1)(param_1);
                  iVar1 = *(int *)((long)param_1 + 0x22c);
                  iVar3 = (int)param_1[7];
                  goto LAB_10053f0c0;
                }
                iVar1 = 7;
                *(undefined4 *)((long)param_1 + 0x22c) = 7;
                param_1[0x46] = (long)&PTR___mh_execute_header_10115d020;
                uVar2 = 0x30;
              }
LAB_10053f3b8:
              *(undefined4 *)(param_1 + 0x47) = uVar2;
            }
          }
          else {
LAB_10053f0b0:
            iVar1 = 8;
LAB_10053f0b4:
            *(int *)((long)param_1 + 0x22c) = iVar1;
            param_1[0x46] = (long)&PTR___mh_execute_header_10115cee0;
            *(undefined4 *)(param_1 + 0x47) = 0x3f;
          }
LAB_10053f0c0:
          *(int *)(param_1 + 0x35) = iVar1;
          *(int *)((long)param_1 + 0x1ac) = iVar1;
          if (0 < iVar3) {
            piVar10 = (int *)(param_1[0x26] + 0x28);
            iVar3 = 1;
            while( true ) {
              piVar10[-1] = iVar1;
              *piVar10 = iVar1;
              iVar1 = FUN_10054d2ec((long)piVar10[-8] * (ulong)*(uint *)(param_1 + 6),
                                    (long)(int)param_1[0x34] * (long)iVar1);
              piVar10[-3] = iVar1;
              iVar1 = FUN_10054d2ec((long)piVar10[-7] * (ulong)*(uint *)((long)param_1 + 0x34),
                                    (long)*(int *)((long)param_1 + 0x22c) *
                                    (long)*(int *)((long)param_1 + 0x1a4));
              piVar10[-2] = iVar1;
              iVar1 = FUN_10054d2ec((long)piVar10[-8] * (ulong)*(uint *)(param_1 + 6),
                                    (long)(int)param_1[0x34]);
              piVar10[1] = iVar1;
              iVar1 = FUN_10054d2ec((long)piVar10[-7] * (ulong)*(uint *)((long)param_1 + 0x34),
                                    (long)*(int *)((long)param_1 + 0x1a4));
              piVar10[2] = iVar1;
              piVar10[3] = 1;
              piVar10[10] = 0;
              piVar10[0xb] = 0;
              if ((int)param_1[7] <= iVar3) break;
              iVar1 = *(int *)((long)param_1 + 0x22c);
              piVar10 = piVar10 + 0x18;
              iVar3 = iVar3 + 1;
            }
            iVar1 = *(int *)((long)param_1 + 0x22c);
          }
          uVar2 = FUN_10054d2ec(*(undefined4 *)((long)param_1 + 0x34),
                                (long)iVar1 * (long)*(int *)((long)param_1 + 0x1a4));
          *(undefined4 *)(param_1 + 0x36) = uVar2;
          iVar3 = (int)param_1[0x38];
          if (iVar3 < (int)param_1[7]) {
            uVar5 = 1;
          }
          else {
            uVar5 = (uint)(*(int *)((long)param_1 + 0x13c) != 0);
          }
          *(uint *)(param_1[0x4c] + 0x20) = uVar5;
        }
        else {
          iVar3 = (int)param_1[0x38];
        }
        if (iVar3 != 0) {
          *(undefined4 *)(lVar9 + 0x28) = 0;
          goto LAB_10053f48c;
        }
        *(undefined4 *)(lVar9 + 0x28) = 2;
      }
      if (*(int *)(lVar9 + 0x20) == 0) {
        puVar4 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar4 + 5) = 0x24;
        (*(code *)*puVar4)(param_1);
      }
    } while ((int)param_1[0x38] == 0);
    FUN_10053f4ec(param_1);
LAB_10053f48c:
    uVar8 = 1;
  }
  return uVar8;
}




void FUN_10053f494(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0x4c];
  *puVar1 = FUN_10053eef0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 1;
  (**(code **)(*param_1 + 0x20))();
  (**(code **)param_1[0x4d])(param_1);
  param_1[0x18] = 0;
  return;
}




void FUN_10053f4ec(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  iVar9 = (int)param_1[0x38];
  if (iVar9 == 1) {
    lVar13 = param_1[0x39];
    uVar1 = *(uint *)(lVar13 + 0x20);
    *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(lVar13 + 0x1c);
    *(uint *)((long)param_1 + 0x1ec) = uVar1;
    *(undefined8 *)(lVar13 + 0x38) = 0x100000001;
    uVar10 = 1;
    *(undefined4 *)(lVar13 + 0x40) = 1;
    *(undefined4 *)(lVar13 + 0x44) = *(undefined4 *)(lVar13 + 0x24);
    uVar2 = *(uint *)(lVar13 + 0xc);
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = uVar1 / uVar2;
    }
    uVar1 = uVar1 - uVar5 * uVar2;
    if (uVar1 != 0) {
      uVar2 = uVar1;
    }
    *(undefined4 *)(lVar13 + 0x48) = 1;
    *(uint *)(lVar13 + 0x4c) = uVar2;
    param_1[0x3e] = 1;
  }
  else {
    if (3 < iVar9 - 1U) {
      lVar13 = *param_1;
      *(undefined4 *)(lVar13 + 0x28) = 0x1b;
      *(int *)(lVar13 + 0x2c) = iVar9;
      *(undefined4 *)(*param_1 + 0x30) = 4;
      (**(code **)*param_1)(param_1);
    }
    uVar7 = FUN_10054d2ec((int)param_1[6],
                          (long)*(int *)((long)param_1 + 0x22c) * (long)(int)param_1[0x34]);
    *(undefined4 *)(param_1 + 0x3d) = uVar7;
    uVar7 = FUN_10054d2ec(*(undefined4 *)((long)param_1 + 0x34),
                          (long)*(int *)((long)param_1 + 0x22c) *
                          (long)*(int *)((long)param_1 + 0x1a4));
    *(undefined4 *)((long)param_1 + 0x1ec) = uVar7;
    *(undefined4 *)(param_1 + 0x3e) = 0;
    if ((int)param_1[0x38] < 1) goto LAB_10053f744;
    iVar9 = 0;
    lVar13 = 0;
    while( true ) {
      lVar14 = param_1[lVar13 + 0x39];
      uVar2 = *(uint *)(lVar14 + 8);
      uVar1 = *(uint *)(lVar14 + 0xc);
      iVar4 = uVar1 * uVar2;
      *(int *)(lVar14 + 0x40) = iVar4;
      *(uint *)(lVar14 + 0x44) = *(int *)(lVar14 + 0x24) * uVar2;
      uVar5 = 0;
      if (uVar2 != 0) {
        uVar5 = *(uint *)(lVar14 + 0x1c) / uVar2;
      }
      uVar5 = *(uint *)(lVar14 + 0x1c) - uVar5 * uVar2;
      uVar6 = 0;
      if (uVar1 != 0) {
        uVar6 = *(uint *)(lVar14 + 0x20) / uVar1;
      }
      uVar3 = *(uint *)(lVar14 + 0x20) - uVar6 * uVar1;
      *(uint *)(lVar14 + 0x38) = uVar2;
      *(uint *)(lVar14 + 0x3c) = uVar1;
      uVar6 = uVar2;
      if (uVar5 != 0) {
        uVar6 = uVar5;
      }
      uVar5 = uVar1;
      if (uVar3 != 0) {
        uVar5 = uVar3;
      }
      *(uint *)(lVar14 + 0x48) = uVar6;
      *(uint *)(lVar14 + 0x4c) = uVar5;
      if (10 < iVar4 + iVar9) {
        puVar8 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar8 + 5) = 0xe;
        (*(code *)*puVar8)(param_1);
      }
      if (0 < iVar4) {
        iVar9 = uVar1 * uVar2 + 1;
        do {
          lVar14 = param_1[0x3e];
          *(int *)(param_1 + 0x3e) = (int)lVar14 + 1;
          *(int *)((long)param_1 + (long)(int)lVar14 * 4 + 500) = (int)lVar13;
          iVar9 = iVar9 + -1;
        } while (1 < iVar9);
      }
      lVar13 = lVar13 + 1;
      uVar10 = (ulong)(int)param_1[0x38];
      if ((long)uVar10 <= lVar13) break;
      iVar9 = (int)param_1[0x3e];
    }
    if ((int)param_1[0x38] < 1) goto LAB_10053f744;
  }
  lVar13 = 0;
  do {
    lVar14 = param_1[lVar13 + 0x39];
    if (*(long *)(lVar14 + 0x50) == 0) {
      uVar2 = *(uint *)(lVar14 + 0x10);
      if ((3 < uVar2) || (param_1[(ulong)uVar2 + 0x19] == 0)) {
        lVar11 = *param_1;
        *(undefined4 *)(lVar11 + 0x28) = 0x36;
        *(uint *)(lVar11 + 0x2c) = uVar2;
        (**(code **)*param_1)(param_1);
      }
      puVar8 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x84);
      puVar12 = (undefined8 *)param_1[(long)(int)uVar2 + 0x19];
      uVar15 = *puVar12;
      puVar8[1] = puVar12[1];
      *puVar8 = uVar15;
      uVar16 = puVar12[3];
      uVar15 = puVar12[2];
      uVar18 = puVar12[5];
      uVar17 = puVar12[4];
      uVar19 = puVar12[6];
      uVar21 = puVar12[9];
      uVar20 = puVar12[8];
      puVar8[7] = puVar12[7];
      puVar8[6] = uVar19;
      puVar8[9] = uVar21;
      puVar8[8] = uVar20;
      puVar8[3] = uVar16;
      puVar8[2] = uVar15;
      puVar8[5] = uVar18;
      puVar8[4] = uVar17;
      uVar16 = puVar12[0xb];
      uVar15 = puVar12[10];
      uVar18 = puVar12[0xd];
      uVar17 = puVar12[0xc];
      uVar20 = puVar12[0xf];
      uVar19 = puVar12[0xe];
      *(undefined4 *)(puVar8 + 0x10) = *(undefined4 *)(puVar12 + 0x10);
      puVar8[0xd] = uVar18;
      puVar8[0xc] = uVar17;
      puVar8[0xf] = uVar20;
      puVar8[0xe] = uVar19;
      puVar8[0xb] = uVar16;
      puVar8[10] = uVar15;
      *(undefined8 **)(lVar14 + 0x50) = puVar8;
      uVar10 = (ulong)*(uint *)(param_1 + 0x38);
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 < (int)uVar10);
LAB_10053f744:
  (**(code **)param_1[0x4e])(param_1);
  (**(code **)param_1[0x4a])(param_1);
  *(undefined8 *)param_1[0x4c] = *(undefined8 *)(param_1[0x4a] + 8);
  return;
}




void FUN_10053f78c(long param_1)

{
  **(undefined8 **)(param_1 + 0x260) = FUN_10053eef0;
  return;
}




void FUN_10053f7a0(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  
  puVar2 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x88);
  param_1[0x49] = (long)puVar2;
  *puVar2 = FUN_10053f96c;
  if (param_2 != 0) {
    puVar7 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar7 + 5) = 3;
    (*(code *)*puVar7)(param_1);
  }
  iVar8 = *(int *)((long)param_1 + 0x1ac);
  if (*(int *)(param_1[0x50] + 0x10) == 0) {
    iVar6 = (int)param_1[7];
    iVar9 = iVar8;
  }
  else {
    if (iVar8 < 2) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x30;
      (*(code *)*puVar7)(param_1);
      iVar8 = *(int *)((long)param_1 + 0x1ac);
    }
    lVar10 = param_1[0x49];
    lVar3 = (**(code **)param_1[1])(param_1,1,(long)(int)param_1[7] << 4);
    iVar6 = (int)param_1[7];
    *(long *)(lVar10 + 0x68) = lVar3;
    *(long *)(lVar10 + 0x70) = lVar3 + (long)iVar6 * 8;
    if (0 < iVar6) {
      lVar3 = 0;
      piVar11 = (int *)(param_1[0x26] + 0x28);
      do {
        iVar6 = 0;
        if (*(int *)((long)param_1 + 0x1ac) != 0) {
          iVar6 = (*piVar11 * piVar11[-7]) / *(int *)((long)param_1 + 0x1ac);
        }
        iVar9 = iVar6 * (iVar8 + 4);
        uVar1 = iVar9 * 2;
        lVar4 = (**(code **)param_1[1])
                          (param_1,1,
                           -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
        lVar4 = lVar4 + (long)iVar6 * 8;
        *(long *)(*(long *)(lVar10 + 0x68) + lVar3 * 8) = lVar4;
        *(long *)(*(long *)(lVar10 + 0x70) + lVar3 * 8) = lVar4 + (long)iVar9 * 8;
        lVar3 = lVar3 + 1;
        iVar6 = (int)param_1[7];
        piVar11 = piVar11 + 0x18;
      } while (lVar3 < iVar6);
    }
    iVar8 = *(int *)((long)param_1 + 0x1ac);
    iVar9 = iVar8 + 2;
  }
  if (0 < iVar6) {
    piVar11 = (int *)(param_1[0x26] + 0x28);
    lVar3 = 2;
    while( true ) {
      iVar6 = 0;
      if (iVar8 != 0) {
        iVar6 = (*piVar11 * piVar11[-7]) / iVar8;
      }
      uVar5 = (**(code **)(param_1[1] + 0x10))(param_1,1,piVar11[-1] * piVar11[-3],iVar6 * iVar9);
      puVar2[lVar3] = uVar5;
      if ((long)(int)param_1[7] <= lVar3 + -1) break;
      iVar8 = *(int *)((long)param_1 + 0x1ac);
      lVar3 = lVar3 + 1;
      piVar11 = piVar11 + 0x18;
    }
  }
  return;
}




void FUN_10053f96c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  
  lVar13 = param_1[0x49];
  if (param_2 == 2) {
    *(code **)(lVar13 + 8) = FUN_10053fe24;
    return;
  }
  if (param_2 == 0) {
    if (*(int *)(param_1[0x50] + 0x10) == 0) {
      *(code **)(lVar13 + 8) = FUN_10053fd84;
    }
    else {
      *(code **)(lVar13 + 8) = FUN_10053fab8;
      uVar1 = *(uint *)(param_1 + 7);
      if (0 < (int)uVar1) {
        uVar14 = 0;
        iVar2 = *(int *)((long)param_1 + 0x1ac);
        lVar15 = param_1[0x26];
        do {
          uVar5 = 0;
          if (iVar2 != 0) {
            uVar5 = (*(int *)(lVar15 + 0x28) * *(int *)(lVar15 + 0xc)) / iVar2;
          }
          puVar16 = *(undefined8 **)(*(long *)(lVar13 + 0x68) + uVar14 * 8);
          puVar18 = *(undefined8 **)(*(long *)(lVar13 + 0x70) + uVar14 * 8);
          puVar7 = *(undefined8 **)(lVar13 + uVar14 * 8 + 0x10);
          uVar3 = uVar5 * (iVar2 + 2);
          if (0 < (int)uVar3) {
            uVar11 = (ulong)uVar3;
            puVar8 = puVar7;
            puVar9 = puVar18;
            puVar10 = puVar16;
            do {
              uVar12 = *puVar8;
              *puVar9 = uVar12;
              *puVar10 = uVar12;
              uVar11 = uVar11 - 1;
              puVar8 = puVar8 + 1;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar11 != 0);
          }
          if (0 < (int)uVar5) {
            iVar4 = uVar5 * (iVar2 + -2);
            uVar3 = uVar5 * 2;
            if ((int)uVar3 < 2) {
              uVar3 = 1;
            }
            uVar11 = (ulong)uVar3;
            do {
              puVar18[iVar4] = puVar7[(int)(uVar5 * iVar2)];
              puVar18[(int)(uVar5 * iVar2)] = puVar7[iVar4];
              puVar7 = puVar7 + 1;
              puVar18 = puVar18 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
            lVar17 = -(ulong)uVar5;
            do {
              puVar16[lVar17] = *puVar16;
              bVar6 = lVar17 != -1;
              lVar17 = lVar17 + 1;
            } while (bVar6);
          }
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 0x60;
        } while (uVar14 != uVar1);
      }
      *(undefined8 *)(lVar13 + 0x78) = 0;
      *(undefined4 *)(lVar13 + 0x84) = 0;
    }
    *(undefined8 *)(lVar13 + 0x60) = 0;
    return;
  }
  param_1 = (undefined8 *)*param_1;
  *(undefined4 *)(param_1 + 5) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010053faa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)();
  return;
}




void FUN_10053fab8(long param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  
  lVar16 = *(long *)(param_1 + 0x248);
  if (*(int *)(lVar16 + 0x60) == 0) {
    iVar6 = (**(code **)(*(long *)(param_1 + 0x250) + 0x18))
                      (param_1,*(undefined8 *)(lVar16 + (long)*(int *)(lVar16 + 0x78) * 8 + 0x68));
    if (iVar6 == 0) {
      return;
    }
    *(undefined4 *)(lVar16 + 0x60) = 1;
    *(int *)(lVar16 + 0x84) = *(int *)(lVar16 + 0x84) + 1;
  }
  iVar6 = *(int *)(lVar16 + 0x7c);
  if (iVar6 != 0) {
    if (iVar6 == 1) goto LAB_10053fc4c;
    if (iVar6 != 2) {
      return;
    }
    (**(code **)(*(long *)(param_1 + 600) + 8))
              (param_1,*(undefined8 *)(lVar16 + (long)*(int *)(lVar16 + 0x78) * 8 + 0x68),
               lVar16 + 100,*(undefined4 *)(lVar16 + 0x80),param_2,param_3,param_4);
    if (*(uint *)(lVar16 + 100) < *(uint *)(lVar16 + 0x80)) {
      return;
    }
    *(undefined4 *)(lVar16 + 0x7c) = 0;
    if ((uint)param_4 <= *param_3) {
      return;
    }
  }
  *(undefined4 *)(lVar16 + 100) = 0;
  iVar6 = *(int *)(param_1 + 0x1ac);
  *(int *)(lVar16 + 0x80) = iVar6 + -1;
  if ((*(int *)(lVar16 + 0x84) == *(int *)(param_1 + 0x1b0)) &&
     (uVar1 = *(uint *)(param_1 + 0x38), 0 < (int)uVar1)) {
    uVar8 = 0;
    lVar9 = *(long *)(param_1 + 0x248);
    lVar10 = *(long *)(param_1 + 0x130);
    iVar7 = *(int *)(lVar9 + 0x78);
    do {
      uVar2 = *(int *)(lVar10 + 0x28) * *(int *)(lVar10 + 0xc);
      iVar3 = 0;
      if (iVar6 != 0) {
        iVar3 = (int)uVar2 / iVar6;
      }
      uVar5 = 0;
      if (uVar2 != 0) {
        uVar5 = *(uint *)(lVar10 + 0x30) / uVar2;
      }
      uVar5 = *(uint *)(lVar10 + 0x30) - uVar5 * uVar2;
      if (uVar5 != 0) {
        uVar2 = uVar5;
      }
      lVar11 = (long)(int)uVar2 + -1;
      if (uVar8 == 0) {
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = (int)lVar11 / iVar3;
        }
        *(int *)(lVar9 + 0x80) = iVar4 + 1;
      }
      if (0 < iVar3) {
        lVar13 = *(long *)(*(long *)(lVar9 + (long)iVar7 * 8 + 0x68) + uVar8 * 8);
        uVar5 = iVar3 * 2;
        if ((int)uVar5 < 2) {
          uVar5 = 1;
        }
        uVar12 = (ulong)uVar5;
        puVar14 = (undefined8 *)(lVar13 + (long)(int)uVar2 * 8);
        do {
          *puVar14 = *(undefined8 *)(lVar13 + lVar11 * 8);
          uVar12 = uVar12 - 1;
          puVar14 = puVar14 + 1;
        } while (uVar12 != 0);
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x60;
    } while (uVar8 != uVar1);
  }
  *(undefined4 *)(lVar16 + 0x7c) = 1;
LAB_10053fc4c:
  (**(code **)(*(long *)(param_1 + 600) + 8))
            (param_1,*(undefined8 *)(lVar16 + (long)*(int *)(lVar16 + 0x78) * 8 + 0x68),lVar16 + 100
             ,*(undefined4 *)(lVar16 + 0x80),param_2,param_3,param_4);
  if (*(uint *)(lVar16 + 0x80) <= *(uint *)(lVar16 + 100)) {
    if (*(int *)(lVar16 + 0x84) == 1) {
      iVar3 = *(int *)(param_1 + 0x1ac);
      uVar1 = *(uint *)(param_1 + 0x38);
      iVar6 = iVar3 + 1;
      iVar7 = iVar3 + 2;
      if (0 < (int)uVar1) {
        uVar8 = 0;
        lVar9 = *(long *)(param_1 + 0x248);
        lVar10 = *(long *)(param_1 + 0x130);
        do {
          uVar2 = 0;
          if (iVar3 != 0) {
            uVar2 = (*(int *)(lVar10 + 0x28) * *(int *)(lVar10 + 0xc)) / iVar3;
          }
          if (0 < (int)uVar2) {
            lVar11 = 0;
            lVar13 = *(long *)(*(long *)(lVar9 + 0x68) + uVar8 * 8);
            lVar15 = *(long *)(*(long *)(lVar9 + 0x70) + uVar8 * 8);
            do {
              *(undefined8 *)(lVar13 + (ulong)uVar2 * -8 + lVar11) =
                   *(undefined8 *)(lVar13 + (long)(int)(uVar2 * iVar6) * 8 + lVar11);
              *(undefined8 *)(lVar15 + (ulong)uVar2 * -8 + lVar11) =
                   *(undefined8 *)(lVar15 + (long)(int)(uVar2 * iVar6) * 8 + lVar11);
              *(undefined8 *)(lVar13 + (long)(int)(uVar2 * iVar7) * 8 + lVar11) =
                   *(undefined8 *)(lVar13 + lVar11);
              *(undefined8 *)(lVar15 + (long)(int)(uVar2 * iVar7) * 8 + lVar11) =
                   *(undefined8 *)(lVar15 + lVar11);
              lVar11 = lVar11 + 8;
            } while ((ulong)uVar2 * 8 - lVar11 != 0);
          }
          uVar8 = uVar8 + 1;
          lVar10 = lVar10 + 0x60;
        } while (uVar8 != uVar1);
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x1ac) + 1;
      iVar7 = *(int *)(param_1 + 0x1ac) + 2;
    }
    *(undefined4 *)(lVar16 + 0x60) = 0;
    *(int *)(lVar16 + 100) = iVar6;
    *(uint *)(lVar16 + 0x78) = *(uint *)(lVar16 + 0x78) ^ 1;
    *(undefined4 *)(lVar16 + 0x7c) = 2;
    *(int *)(lVar16 + 0x80) = iVar7;
  }
  return;
}




void FUN_10053fd84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x248);
  if (*(int *)(lVar3 + 0x60) == 0) {
    iVar2 = (**(code **)(*(long *)(param_1 + 0x250) + 0x18))(param_1,lVar3 + 0x10);
    if (iVar2 == 0) {
      return;
    }
    *(undefined4 *)(lVar3 + 0x60) = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x1ac);
  (**(code **)(*(long *)(param_1 + 600) + 8))
            (param_1,lVar3 + 0x10,lVar3 + 100,uVar1,param_2,param_3,param_4);
  if (uVar1 <= *(uint *)(lVar3 + 100)) {
    *(undefined8 *)(lVar3 + 0x60) = 0;
  }
  return;
}




void FUN_10053fe24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010053fe44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 600) + 8))(param_1,0,0,0,param_2,param_3,param_4);
  return;
}




undefined8 FUN_10053fe48(long *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)((long)param_1 + 0x23c);
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 0x28) = 0x7c;
  *(uint *)(lVar3 + 0x2c) = uVar5;
  *(int *)(*param_1 + 0x30) = param_2;
  (**(code **)(*param_1 + 8))(param_1,0xffffffff);
  do {
    iVar4 = 1;
    if (uVar5 == (param_2 + 6U & 7 | 0xd0)) {
      iVar4 = 2;
    }
    while( true ) {
      iVar6 = 2;
      if (0xbf < (int)uVar5) {
        iVar6 = 3;
      }
      iVar1 = 2;
      if (uVar5 != (param_2 - 1U & 7 | 0xd0)) {
        iVar1 = iVar4;
      }
      if (0xbf < (int)uVar5 &&
          (((uVar5 & 0xfffffff8) == 0xd0 && uVar5 != (param_2 + 1U & 7 | 0xd0)) &&
          uVar5 != (param_2 + 2U & 7 | 0xd0))) {
        iVar6 = iVar1;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar3 + 0x28) = 99;
      *(uint *)(lVar3 + 0x2c) = uVar5;
      *(int *)(*param_1 + 0x30) = iVar6;
      (**(code **)(*param_1 + 8))(param_1,4);
      if (iVar6 == 3) {
        return 1;
      }
      if (iVar6 == 2) break;
      if (iVar6 == 1) {
        *(undefined4 *)((long)param_1 + 0x23c) = 0;
        return 1;
      }
    }
    uVar2 = FUN_10053ffa8(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar5 = *(uint *)((long)param_1 + 0x23c);
  } while( true );
}




undefined8 FUN_10053ffa8(long *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  byte *pbVar8;
  long lVar9;
  byte *pbVar7;
  
  puVar5 = (undefined8 *)param_1[5];
  lVar9 = puVar5[1];
  pbVar7 = (byte *)*puVar5;
  do {
    if (lVar9 == 0) {
      uVar2 = (*(code *)puVar5[3])(param_1);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      pbVar7 = (byte *)*puVar5;
      lVar9 = puVar5[1];
    }
    pbVar6 = pbVar7 + 1;
    lVar9 = lVar9 + -1;
    pbVar8 = pbVar6;
    if (*pbVar7 == 0xff) {
      do {
        if (lVar9 == 0) {
          uVar2 = (*(code *)puVar5[3])(param_1);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          pbVar8 = (byte *)*puVar5;
          lVar9 = puVar5[1];
        }
        lVar9 = lVar9 + -1;
        pbVar6 = pbVar8 + 1;
        bVar1 = *pbVar8;
        pbVar8 = pbVar6;
      } while (bVar1 == 0xff);
      if (bVar1 != 0) {
        iVar4 = *(int *)(param_1[0x4d] + 0x24);
        if (iVar4 != 0) {
          lVar3 = *param_1;
          *(undefined4 *)(lVar3 + 0x28) = 0x77;
          *(int *)(lVar3 + 0x2c) = iVar4;
          *(uint *)(*param_1 + 0x30) = (uint)bVar1;
          (**(code **)(*param_1 + 8))(param_1,0xffffffff);
          *(undefined4 *)(param_1[0x4d] + 0x24) = 0;
        }
        *(uint *)((long)param_1 + 0x23c) = (uint)bVar1;
        *puVar5 = pbVar6;
        puVar5[1] = lVar9;
        return 1;
      }
      lVar3 = param_1[0x4d];
      iVar4 = *(int *)(lVar3 + 0x24) + 2;
    }
    else {
      lVar3 = param_1[0x4d];
      iVar4 = *(int *)(lVar3 + 0x24) + 1;
    }
    *(int *)(lVar3 + 0x24) = iVar4;
    *puVar5 = pbVar6;
    puVar5[1] = lVar9;
    pbVar7 = pbVar6;
  } while( true );
}

