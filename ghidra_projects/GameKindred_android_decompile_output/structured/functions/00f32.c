// functions/00f32 — 25 functions
#include "libGameKindred.h"




long FUN_00f32000(int *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
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
  if ((short)param_1[0x2b820] == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_00f3209c(param_1 + 0x21020);
    puVar5 = (undefined8 *)(lVar4 + 0x98);
    *puVar5 = 0;
    plVar6 = *(long **)(param_1 + 4);
    *(long **)(lVar4 + 0xa0) = plVar6;
    plVar1 = (long *)(param_1 + 2);
    if (*(long *)(param_1 + 2) != 0) {
      plVar1 = plVar6;
    }
    *plVar1 = (long)puVar5;
    *(undefined8 **)(param_1 + 4) = puVar5;
    param_1[6] = param_1[6] + 1;
  }
  *param_1 = 0;
  return lVar4;
}




ushort * FUN_00f3209c(long param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x2a000);
  if ((ulong)uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = (ushort *)(param_1 + (ulong)uVar1 * 0xa8);
    if (uVar1 == *(ushort *)(param_1 + 0x2a002)) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = *puVar2;
    }
    *(ushort *)(param_1 + 0x2a000) = uVar1;
    FUN_00f30914(puVar2);
    *(int *)(param_1 + 0x2a004) = *(int *)(param_1 + 0x2a004) + 1;
  }
  return puVar2;
}




void FUN_00f32120(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)(param_2 + 0x98);
  if ((long *)*param_1 == plVar1) {
    if (plVar1 == (long *)param_1[1]) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *plVar1;
    }
  }
  else if ((long *)param_1[1] == plVar1) {
    puVar2 = *(undefined8 **)(param_2 + 0xa0);
    param_1[1] = (long)puVar2;
    *puVar2 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(param_2 + 0xa0);
    *puVar2 = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 **)(*(long *)(param_2 + 0x98) + 8) = puVar2;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_00f32184(long param_1,undefined8 param_2)

{
  ushort uVar1;
  short sVar2;
  
  FUN_00f399a0(param_2);
  if (*(short *)(param_1 + 0x64000) == -1) {
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 3) * 0x5c29;
    *(short *)(param_1 + 0x64002) = sVar2;
    *(short *)(param_1 + 0x64000) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x64002);
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 3) * 0x5c29;
    *(short *)(param_1 + 0x64002) = sVar2;
    *(short *)(param_1 + (ulong)uVar1 * 200) = sVar2;
  }
  *(int *)(param_1 + 0x64004) = *(int *)(param_1 + 0x64004) + -1;
  return;
}




void FUN_00f32228(long param_1,undefined8 param_2)

{
  ushort uVar1;
  short sVar2;
  
  FUN_00f34c14(param_2);
  if (*(short *)(param_1 + 0xb2000) == -1) {
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 3) * 0x47e9;
    *(short *)(param_1 + 0xb2002) = sVar2;
    *(short *)(param_1 + 0xb2000) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0xb2002);
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 3) * 0x47e9;
    *(short *)(param_1 + 0xb2002) = sVar2;
    *(short *)(param_1 + (ulong)uVar1 * 0x2c8) = sVar2;
  }
  *(int *)(param_1 + 0xb2004) = *(int *)(param_1 + 0xb2004) + -1;
  return;
}




void FUN_00f322cc(long param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  
  FUN_00f36068(param_2);
  if (*(short *)(param_1 + 0x2000) == -1) {
    sVar3 = (short)((uint)((int)param_2 - (int)param_1) >> 5);
    *(short *)(param_1 + 0x2002) = sVar3;
    *(short *)(param_1 + 0x2000) = sVar3;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x2002);
    uVar2 = (undefined2)((uint)((int)param_2 - (int)param_1) >> 5);
    *(undefined2 *)(param_1 + 0x2002) = uVar2;
    *(undefined2 *)(param_1 + (ulong)uVar1 * 0x20) = uVar2;
  }
  *(int *)(param_1 + 0x2004) = *(int *)(param_1 + 0x2004) + -1;
  return;
}




void FUN_00f32344(long param_1,undefined8 param_2)

{
  ushort uVar1;
  short sVar2;
  
  FUN_00f3098c(param_2);
  if (*(short *)(param_1 + 0x2a000) == -1) {
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 3) * -0x30c3;
    *(short *)(param_1 + 0x2a002) = sVar2;
    *(short *)(param_1 + 0x2a000) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x2a002);
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 3) * -0x30c3;
    *(short *)(param_1 + 0x2a002) = sVar2;
    *(short *)(param_1 + (ulong)uVar1 * 0xa8) = sVar2;
  }
  *(int *)(param_1 + 0x2a004) = *(int *)(param_1 + 0x2a004) + -1;
  return;
}




undefined8 FUN_00f323e8(int *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    while (*param_1 != 0) {
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = 100;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((short)param_1[0x7182c] == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00f32470(param_1 + 0x7102c);
    FUN_00f309c4(param_2,uVar3);
  }
  *param_1 = 0;
  return uVar3;
}




ushort * FUN_00f32470(long param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x2000);
  if ((ulong)uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = (ushort *)(param_1 + (ulong)uVar1 * 0x20);
    if (uVar1 == *(ushort *)(param_1 + 0x2002)) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = *puVar2;
    }
    *(ushort *)(param_1 + 0x2000) = uVar1;
    FUN_00f36048(puVar2);
    *(int *)(param_1 + 0x2004) = *(int *)(param_1 + 0x2004) + 1;
  }
  return puVar2;
}




undefined8 FUN_00f324e4(int *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    while (*param_1 != 0) {
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = 100;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((short)param_1[0x58024] == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00f3256c(param_1 + 0x2b824);
    FUN_00f30990(param_2,uVar3);
  }
  *param_1 = 0;
  return uVar3;
}




ushort * FUN_00f3256c(long param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = *(ushort *)(param_1 + 0xb2000);
  if ((ulong)uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = (ushort *)(param_1 + (ulong)uVar1 * 0x2c8);
    if (uVar1 == *(ushort *)(param_1 + 0xb2002)) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = *puVar2;
    }
    *(ushort *)(param_1 + 0xb2000) = uVar1;
    FUN_00f34b58(puVar2);
    *(int *)(param_1 + 0xb2004) = *(int *)(param_1 + 0xb2004) + 1;
  }
  return puVar2;
}




undefined8 FUN_00f325f0(int *param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  do {
    while (*param_1 != 0) {
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = 100;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((short)param_1[0x71028] == -1) {
    uVar4 = 0;
  }
  else {
    lVar3 = FUN_00f326a8(param_1 + 0x58028);
    uVar4 = FUN_00f399ac(lVar3,param_3);
    puVar5 = (undefined8 *)(lVar3 + 0xc0);
    *puVar5 = 0;
    if (*(long *)(param_2 + 0x288) == 0) {
      *(undefined8 **)(param_2 + 0x288) = puVar5;
    }
    else {
      **(undefined8 **)(param_2 + 0x290) = puVar5;
    }
    *(undefined8 **)(param_2 + 0x290) = puVar5;
    *(int *)(param_2 + 0x298) = *(int *)(param_2 + 0x298) + 1;
  }
  *param_1 = 0;
  return uVar4;
}




ushort * FUN_00f326a8(long param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x64000);
  if ((ulong)uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = (ushort *)(param_1 + (ulong)uVar1 * 200);
    if (uVar1 == *(ushort *)(param_1 + 0x64002)) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = *puVar2;
    }
    *(ushort *)(param_1 + 0x64000) = uVar1;
    FUN_00f39990(puVar2);
    *(int *)(param_1 + 0x64004) = *(int *)(param_1 + 0x64004) + 1;
  }
  return puVar2;
}




void FUN_00f3272c(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  FUN_00f33d9c();
  uVar9 = param_3[6];
  lVar6 = *(long *)(param_2 + 8);
  *(undefined8 *)(param_2 + 0x70) = param_3[7];
  *(undefined8 *)(param_2 + 0x68) = uVar9;
  uVar9 = param_3[4];
  *(undefined8 *)(param_2 + 0x60) = param_3[5];
  *(undefined8 *)(param_2 + 0x58) = uVar9;
  uVar9 = param_3[2];
  *(undefined8 *)(param_2 + 0x50) = param_3[3];
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  uVar9 = *param_3;
  *(undefined8 *)(param_2 + 0x40) = param_3[1];
  *(undefined8 *)(param_2 + 0x38) = uVar9;
  if ((lVar6 != 0) && (lVar6 = lVar6 + -0x98, lVar6 != 0)) {
    do {
      lVar3 = 0;
      if (*(long *)(lVar6 + 0x98) != 0) {
        lVar3 = *(long *)(lVar6 + 0x98) + -0x98;
      }
      if ((*(byte *)(lVar6 + 0x65) & 1) != 0) {
        FUN_00f32120((long *)(param_2 + 8),lVar6);
        puVar8 = (undefined8 *)(lVar6 + 0x98);
        *puVar8 = 0;
        puVar7 = *(undefined8 **)(param_2 + 0x28);
        *(undefined8 **)(lVar6 + 0xa0) = puVar7;
        puVar4 = (undefined8 *)(param_2 + 0x20);
        if (*(long *)(param_2 + 0x20) != 0) {
          puVar4 = puVar7;
        }
        *puVar4 = puVar8;
        *(undefined8 **)(param_2 + 0x28) = puVar8;
        *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
      }
      lVar6 = lVar3;
    } while (lVar3 != 0);
  }
  lVar6 = *(long *)(param_2 + 0x20);
  if (lVar6 != 0) {
    lVar6 = lVar6 + -0x98;
    while (lVar6 != 0) {
      plVar2 = (long *)(lVar6 + 0x98);
      pbVar1 = (byte *)(lVar6 + 0x65);
      lVar6 = 0;
      if (*plVar2 != 0) {
        lVar6 = *plVar2 + -0x98;
      }
      if ((*pbVar1 >> 1 & 1) != 0) {
        FUN_00f31d34(param_2);
      }
    }
  }
  if ((*(char *)((long)&__DT_RELA[0x4155].r_addend + param_2) != '\0') &&
     (uVar5 = FUN_00f33d90(), (uVar5 & 1) != 0)) {
    lVar6 = *(long *)(param_2 + 0x20);
    if ((lVar6 != 0) && (lVar6 != 0x98)) {
      FUN_00f33e4c(param_1,param_2,param_4);
      return;
    }
    return;
  }
  FUN_00f328c4(param_1,param_2,param_4);
  return;
}




undefined1 FUN_00f328b0(long param_1)

{
  return *(undefined1 *)((long)&__DT_RELA[0x4155].r_addend + param_1);
}




void FUN_00f328c0(void)

{
  return;
}




void FUN_00f328c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_2 + 0x20) != 0) {
    lVar2 = *(long *)(param_2 + 0x20) + -0x98;
    while (lVar2 != 0) {
      FUN_00f32930(param_1,param_2,param_3,lVar2);
      plVar1 = (long *)(lVar2 + 0x98);
      lVar2 = 0;
      if (*plVar1 != 0) {
        lVar2 = *plVar1 + -0x98;
      }
    }
  }
  return;
}




void FUN_00f32930(long param_1,long param_2,long param_3)

{
  int iVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  
  if (param_3 != 0) {
    if ((*(byte *)(param_3 + 0x65) >> 1 & 1) == 0) {
      FUN_00f30dd0(param_3,param_1 + 0x78);
    }
    if (param_2 != 0) {
      if (((((*(byte *)(param_3 + 0x65) >> 4 & 1) != 0) ||
           (fVar4 = (float)FUN_00f319c0(param_3), 0.5 < fVar4)) ||
          (pfVar2 = (float *)FUN_00f31994(param_3), pfVar2[3] < *pfVar2)) ||
         (((pfVar2[4] < pfVar2[1] || (pfVar2[5] < pfVar2[2])) ||
          (iVar1 = FUN_019ba5c8(param_2 + 0x44,6,pfVar2,pfVar2 + 3), iVar1 != 1)))) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      FUN_00f3199c(param_3,uVar3);
      return;
    }
  }
  return;
}




long FUN_00f329fc(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  lVar3 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar3 = *(long *)(param_1 + 0x20) + -0x98;
  }
  if ((param_3 != 0) && (lVar3 != 0)) {
    lVar2 = 0;
    do {
      *(long *)(param_2 + lVar2 * 8) = lVar3;
      plVar1 = (long *)(lVar3 + 0x98);
      lVar2 = lVar2 + 1;
      lVar3 = 0;
      if (*plVar1 != 0) {
        lVar3 = *plVar1 + -0x98;
      }
    } while (((uint)lVar2 < param_3) && (lVar3 != 0));
  }
  return lVar2;
}




void FUN_00f32a48(long param_1,byte param_2)

{
  *(byte *)((long)&__DT_RELA[0x4155].r_addend + param_1) = param_2 & 1;
  return;
}




long FUN_00f32a5c(long param_1)

{
  return param_1 + 0x78;
}




long FUN_00f32a64(long param_1)

{
  return param_1 + 0x38;
}




long FUN_00f32a6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  uVar3 = FUN_00e6a474(param_2);
  uVar4 = FUN_0091ed5c(param_2,uVar3,0x12345678);
  plVar1 = (long *)((long)&__DT_RELA[0x4156].r_info + param_1);
  plVar8 = (long *)*plVar1;
  plVar7 = plVar1;
  if (plVar8 != (long *)0x0) {
    do {
      if (*(uint *)(plVar8 + 4) >= uVar4) {
        plVar7 = plVar8;
      }
      plVar8 = (long *)plVar8[*(uint *)(plVar8 + 4) < uVar4];
    } while (plVar8 != (long *)0x0);
    if ((plVar7 != plVar1) && (*(uint *)(plVar7 + 4) <= uVar4)) {
      puVar5 = (undefined8 *)plVar7[5];
      bVar2 = false;
      goto LAB_00f32b18;
    }
  }
  puVar5 = operator_new(0x18);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = param_3;
  FUN_00f337e0(param_1,puVar5);
  bVar2 = true;
LAB_00f32b18:
  lVar6 = FUN_00f32000(param_1);
  if (lVar6 != 0) {
    FUN_00f32bc4(param_1,lVar6,puVar5);
  }
  if ((bVar2) &&
     (FUN_00f31a10(puVar5,*(undefined8 *)((long)&__DT_RELA[0x4155].r_info + param_1)),
     puVar5 != (undefined8 *)0x0)) {
    FUN_00f319d4(puVar5);
    operator_delete(puVar5);
  }
  return lVar6;
}




undefined8 * FUN_00f32b78(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x18);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = param_2;
  FUN_00f337e0(param_1,puVar1);
  return puVar1;
}




void FUN_00f32bc4(long param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  undefined1 uVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  int iVar21;
  uint uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  float local_138;
  float local_134;
  float local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 local_11c;
  undefined8 uStack_114;
  float local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 auStack_f8 [88];
  
  lVar11 = tpidr_el0;
  lVar18 = *(long *)(lVar11 + 0x28);
  puVar19 = (undefined8 *)*param_3;
  local_108 = *puVar19;
  local_100 = *(undefined4 *)(puVar19 + 1);
  uStack_124 = 0x3f800000;
  local_12c = 0;
  uStack_114 = 0x3f80000000000000;
  local_11c = 0;
  local_10c = 0.0;
  local_fc = 0x3f800000;
  fVar32 = *(float *)((long)puVar19 + 0xc) * 0.017453292;
  fVar25 = sinf(fVar32);
  fVar32 = cosf(fVar32);
  fVar26 = fVar32 * 0.0;
  fVar27 = fVar25 * 0.0;
  fVar33 = fVar26 + fVar27;
  fVar30 = fVar32 + fVar27;
  fVar29 = fVar26 + fVar25;
  fVar35 = fVar26 - fVar27;
  fVar26 = fVar26 - fVar25;
  fVar32 = fVar32 - fVar27;
  local_12c = CONCAT44(fVar33,(undefined4)local_12c);
  uStack_124 = CONCAT44(fVar29,fVar30);
  local_11c = CONCAT44(fVar35,fVar33);
  uStack_114 = CONCAT44(fVar32,fVar26);
  fVar25 = *(float *)(puVar19 + 2);
  local_10c = fVar35;
  fVar27 = sinf(fVar25 * 0.017453292);
  fVar25 = cosf(fVar25 * 0.017453292);
  fVar28 = fVar25 * 0.0;
  fVar31 = fVar27 * 0.0;
  fVar34 = fVar25 - fVar27 * fVar35;
  fVar36 = fVar28 - fVar27 * fVar26;
  local_10c = fVar31 + fVar25 * fVar35;
  uStack_114 = CONCAT44(fVar31 + fVar25 * fVar32,fVar31 + fVar25 * fVar26);
  fVar26 = fVar28 - fVar27 * fVar32;
  fVar28 = fVar28 - fVar27 * fVar35;
  fVar32 = *(float *)((long)puVar19 + 0x14) * 0.017453292;
  local_11c._4_4_ = fVar27 + fVar25 * fVar35;
  fVar25 = sinf(fVar32);
  fVar32 = cosf(fVar32);
  local_134 = fVar32 * fVar36 + fVar25 * fVar30;
  local_130 = fVar32 * fVar26 + fVar25 * fVar29;
  local_138 = fVar32 * fVar34 + fVar25 * fVar33;
  local_12c = CONCAT44(fVar32 * fVar33 - fVar25 * fVar34,fVar32 * fVar28 + fVar25 * fVar33);
  uStack_124 = CONCAT44(fVar32 * fVar29 - fVar25 * fVar26,fVar32 * fVar30 - fVar25 * fVar36);
  local_11c = CONCAT44(local_11c._4_4_,fVar32 * fVar33 - fVar25 * fVar28);
  if (*(char *)(puVar19 + 3) != '\0') {
    uVar22 = 0;
    puVar23 = (undefined8 *)((long)puVar19 + 0x19);
    puVar1 = (undefined8 *)((long)&__DT_RELA[0x4155].r_info + param_1);
    do {
      puVar4 = (undefined8 *)*param_3;
      if (puVar23 != (undefined8 *)0x0) {
        puVar4 = puVar23;
      }
      cVar7 = *(char *)((long)puVar4 + 0xab);
      puVar23 = (undefined8 *)((long)puVar4 + 0xe4);
      if ((cVar7 == '\0') ||
         (((cVar8 = *(char *)((long)&__DT_RELA[0x4157].r_offset + param_1), cVar7 != '\x01' ||
           (cVar8 != '\0')) && ((cVar7 != '\x02' || (cVar8 == '\0')))))) {
        local_150 = *puVar4;
        local_148 = *(undefined4 *)(puVar4 + 1);
        uStack_178 = 0;
        local_180 = 0x3f800000;
        uStack_168 = 0;
        local_170 = 0x3f80000000000000;
        local_144 = 0x3f800000;
        uStack_158 = 0x3f800000;
        local_160 = 0;
        fVar32 = *(float *)((long)puVar4 + 0xc) * 0.017453292;
        fVar25 = sinf(fVar32);
        fVar32 = cosf(fVar32);
        fVar27 = (float)local_170;
        fVar26 = (float)((ulong)local_170 >> 0x20);
        fVar29 = (float)uStack_168;
        fVar30 = (float)((ulong)uStack_168 >> 0x20);
        fVar28 = (float)((ulong)local_160 >> 0x20);
        fVar31 = (float)((ulong)uStack_158 >> 0x20);
        local_170._0_4_ = fVar27 * fVar32 + (float)local_160 * fVar25;
        local_170._4_4_ = fVar26 * fVar32 + fVar28 * fVar25;
        uStack_168._0_4_ = fVar29 * fVar32 + (float)uStack_158 * fVar25;
        uStack_168._4_4_ = fVar30 * fVar32 + fVar31 * fVar25;
        local_160._0_4_ = (float)local_160 * fVar32 - fVar27 * fVar25;
        local_160._4_4_ = fVar28 * fVar32 - fVar26 * fVar25;
        uStack_158._0_4_ = (float)uStack_158 * fVar32 - fVar29 * fVar25;
        uStack_158._4_4_ = fVar31 * fVar32 - fVar30 * fVar25;
        fVar25 = *(float *)(puVar4 + 2);
        fVar32 = sinf(fVar25 * 0.017453292);
        fVar25 = cosf(fVar25 * 0.017453292);
        fVar27 = (float)local_180;
        fVar26 = (float)((ulong)local_180 >> 0x20);
        fVar28 = (float)uStack_178;
        fVar29 = (float)((ulong)uStack_178 >> 0x20);
        local_180._0_4_ = fVar27 * fVar25 - (float)local_160 * fVar32;
        local_180._4_4_ = fVar26 * fVar25 - local_160._4_4_ * fVar32;
        uStack_178._0_4_ = fVar28 * fVar25 - (float)uStack_158 * fVar32;
        uStack_178._4_4_ = fVar29 * fVar25 - uStack_158._4_4_ * fVar32;
        local_160 = CONCAT44(fVar32 * fVar26 + fVar25 * local_160._4_4_,
                             fVar32 * fVar27 + fVar25 * (float)local_160);
        uStack_158 = CONCAT44(fVar32 * fVar29 + fVar25 * uStack_158._4_4_,
                              fVar32 * fVar28 + fVar25 * (float)uStack_158);
        fVar32 = *(float *)((long)puVar4 + 0x14) * 0.017453292;
        fVar25 = sinf(fVar32);
        fVar32 = cosf(fVar32);
        fVar28 = (float)local_170 * fVar25;
        fVar29 = local_170._4_4_ * fVar25;
        fVar27 = (float)uStack_178 * fVar25;
        fVar26 = uStack_178._4_4_ * fVar25;
        uStack_178 = CONCAT44(uStack_178._4_4_ * fVar32 + uStack_168._4_4_ * fVar25,
                              (float)uStack_178 * fVar32 + (float)uStack_168 * fVar25);
        local_170 = CONCAT44(local_170._4_4_ * fVar32 - local_180._4_4_ * fVar25,
                             (float)local_170 * fVar32 - (float)local_180 * fVar25);
        uStack_168 = CONCAT44(uStack_168._4_4_ * fVar32 - fVar26,(float)uStack_168 * fVar32 - fVar27
                             );
        local_180 = CONCAT44(local_180._4_4_ * fVar32 + fVar29,(float)local_180 * fVar32 + fVar28);
        lVar14 = FUN_00f324e4(param_1,param_2);
        if (lVar14 != 0) {
          *(undefined8 *)(lVar14 + 0x208) = 0;
          *(undefined4 *)(lVar14 + 0x210) = 0;
          uVar5 = *(uint *)(lVar14 + 0x220);
          bVar9 = *(byte *)(puVar4 + 3);
          uVar3 = bVar9 & 0xf;
          *(uint *)(lVar14 + 0x220) = uVar5 & 0xfffffff0 | uVar3;
          uVar17 = bVar9 & 0xf;
          uVar2 = (*(byte *)((long)puVar4 + 0x1a) & 3) << 8;
          *(uint *)(lVar14 + 0x220) = uVar5 & 0xfffffc00 | uVar5 & 0xf0 | uVar3 | uVar2;
          uVar3 = uVar3 | (*(byte *)((long)puVar4 + 0x19) & 0xf) << 4;
          *(uint *)(lVar14 + 0x220) = uVar5 & 0xfffffc00 | uVar2 | uVar3;
          uVar2 = uVar2 | uVar3 | (*(byte *)((long)puVar4 + 0x1b) & 3) << 10;
          *(uint *)(lVar14 + 0x220) = uVar5 & 0xfffff000 | uVar2;
          uVar2 = uVar2 | (*(ushort *)((long)puVar4 + 0x1c) & 0x7fff) << 0xc;
          *(uint *)(lVar14 + 0x220) = uVar5 & 0xf8000000 | uVar2;
          uVar2 = uVar2 | (uint)(*(char *)((long)puVar4 + 0x1e) != '\0') << 0x1b;
          *(uint *)(lVar14 + 0x220) = uVar5 & 0xf0000000 | uVar2;
          *(undefined4 *)(lVar14 + 0x214) = *(undefined4 *)(puVar4 + 4);
          uVar6 = *(undefined4 *)((long)puVar4 + 0x24);
          *(uint *)(lVar14 + 0x220) = uVar5 & 0xe0000000 | uVar2;
          *(undefined4 *)(lVar14 + 0x21c) = 0;
          *(undefined4 *)(lVar14 + 0x218) = uVar6;
          *(uint *)(lVar14 + 0x220) =
               uVar5 & 0xc0000000 | uVar2 | (uint)(*(char *)((long)puVar4 + 0x1f) != '\0') << 0x1d;
          if (((uVar17 - 4 < 5) || (uVar17 == 1)) && (*(char *)(puVar4 + 5) != '\0')) {
            FUN_00e6a8a8(&local_2c0,"build://%s");
            FUN_01996490(*puVar1,&local_2c0);
            uVar13 = FUN_019965fc(*puVar1,&local_2c0);
            *(undefined8 *)(lVar14 + 0x208) = uVar13;
          }
          if ((uint)*(byte *)((long)puVar4 + 0xaa) + (uint)*(byte *)((long)puVar4 + 0xa9) != 0) {
            uVar17 = 0;
            puVar24 = puVar23;
            do {
              puVar23 = puVar24 + 3;
              lVar15 = FUN_00f30acc(param_2);
              iVar21 = 0;
              while ((lVar15 != 0 && (*(int *)(lVar15 + 0x10) != *(int *)(puVar24 + 2)))) {
                lVar15 = FUN_00f30ae0(param_2);
                iVar21 = iVar21 + 1;
              }
              iVar12 = FUN_00f30af4(param_2);
              if ((iVar21 == iVar12) && (lVar15 = FUN_00f323e8(param_1,param_2), lVar15 != 0)) {
                uStack_2b8 = puVar24[1];
                local_2c0 = *puVar24;
                FUN_00f3606c(lVar15,*(undefined4 *)(puVar24 + 2),&local_2c0,
                             *(undefined1 *)((long)puVar24 + 0x14),
                             (long)*(char *)((long)puVar24 + 0x15));
              }
              uVar17 = uVar17 + 1;
              puVar24 = puVar23;
            } while (uVar17 < (uint)*(byte *)((long)puVar4 + 0xaa) +
                              (uint)*(byte *)((long)puVar4 + 0xa9));
          }
          *(undefined8 *)(lVar14 + 0x24c) = *(undefined8 *)((long)puVar4 + 0xac);
          uVar13 = FUN_00f3b1cc(*(undefined8 *)((long)puVar4 + 0xb4));
          *(undefined8 *)(lVar14 + 600) = uVar13;
          uVar13 = FUN_00f3b1cc(*(undefined8 *)((long)puVar4 + 0xbc));
          *(undefined8 *)(lVar14 + 0x260) = uVar13;
          uVar13 = FUN_00f3b1cc(*(undefined8 *)((long)puVar4 + 0xc4));
          *(undefined8 *)(lVar14 + 0x268) = uVar13;
          uVar13 = FUN_00f3b1cc(*(undefined8 *)((long)puVar4 + 0xcc));
          *(undefined8 *)(lVar14 + 0x270) = uVar13;
          uVar13 = FUN_00f3b1cc(*(undefined8 *)((long)puVar4 + 0xd4));
          *(undefined8 *)(lVar14 + 0x278) = uVar13;
          uVar13 = FUN_00f3b1cc(*(undefined8 *)((long)puVar4 + 0xdc));
          *(undefined8 *)(lVar14 + 0x280) = uVar13;
          if (*(char *)(puVar4 + 0x15) != '\0') {
            uVar17 = 0;
            puVar24 = puVar23;
            do {
              uVar10 = *(undefined1 *)(puVar24 + 3);
              puVar23 = (undefined8 *)((long)puVar24 + 0x7a);
              lVar15 = FUN_00f325f0(param_1,lVar14,uVar10);
              if (lVar15 != 0) {
                local_190 = *(undefined4 *)puVar24;
                local_18c = *(undefined8 *)((long)puVar24 + 4);
                uStack_1b8 = 0;
                local_1c0 = 0x3f800000;
                local_184 = 0x3f800000;
                uStack_1a8 = 0;
                local_1b0 = 0x3f80000000000000;
                uStack_198 = 0x3f800000;
                local_1a0 = 0;
                fVar32 = *(float *)((long)puVar24 + 0xc) * 0.017453292;
                fVar25 = sinf(fVar32);
                fVar32 = cosf(fVar32);
                fVar27 = (float)local_1b0;
                fVar26 = (float)((ulong)local_1b0 >> 0x20);
                fVar29 = (float)uStack_1a8;
                fVar30 = (float)((ulong)uStack_1a8 >> 0x20);
                fVar28 = (float)((ulong)local_1a0 >> 0x20);
                fVar31 = (float)((ulong)uStack_198 >> 0x20);
                local_1b0._0_4_ = fVar27 * fVar32 + (float)local_1a0 * fVar25;
                local_1b0._4_4_ = fVar26 * fVar32 + fVar28 * fVar25;
                uStack_1a8._0_4_ = fVar29 * fVar32 + (float)uStack_198 * fVar25;
                uStack_1a8._4_4_ = fVar30 * fVar32 + fVar31 * fVar25;
                local_1a0._0_4_ = (float)local_1a0 * fVar32 - fVar27 * fVar25;
                local_1a0._4_4_ = fVar28 * fVar32 - fVar26 * fVar25;
                uStack_198._0_4_ = (float)uStack_198 * fVar32 - fVar29 * fVar25;
                uStack_198._4_4_ = fVar31 * fVar32 - fVar30 * fVar25;
                fVar25 = *(float *)(puVar24 + 2);
                fVar32 = sinf(fVar25 * 0.017453292);
                fVar25 = cosf(fVar25 * 0.017453292);
                fVar27 = (float)local_1c0;
                fVar26 = (float)((ulong)local_1c0 >> 0x20);
                fVar28 = (float)uStack_1b8;
                fVar29 = (float)((ulong)uStack_1b8 >> 0x20);
                local_1c0._0_4_ = fVar27 * fVar25 - (float)local_1a0 * fVar32;
                local_1c0._4_4_ = fVar26 * fVar25 - local_1a0._4_4_ * fVar32;
                uStack_1b8._0_4_ = fVar28 * fVar25 - (float)uStack_198 * fVar32;
                uStack_1b8._4_4_ = fVar29 * fVar25 - uStack_198._4_4_ * fVar32;
                local_1a0 = CONCAT44(fVar32 * fVar26 + fVar25 * local_1a0._4_4_,
                                     fVar32 * fVar27 + fVar25 * (float)local_1a0);
                uStack_198 = CONCAT44(fVar32 * fVar29 + fVar25 * uStack_198._4_4_,
                                      fVar32 * fVar28 + fVar25 * (float)uStack_198);
                fVar32 = *(float *)((long)puVar24 + 0x14) * 0.017453292;
                fVar25 = sinf(fVar32);
                fVar32 = cosf(fVar32);
                fVar28 = (float)local_1b0 * fVar25;
                fVar29 = local_1b0._4_4_ * fVar25;
                fVar27 = (float)uStack_1b8 * fVar25;
                fVar26 = uStack_1b8._4_4_ * fVar25;
                uStack_1b8 = CONCAT44(uStack_1b8._4_4_ * fVar32 + uStack_1a8._4_4_ * fVar25,
                                      (float)uStack_1b8 * fVar32 + (float)uStack_1a8 * fVar25);
                local_1b0 = CONCAT44(local_1b0._4_4_ * fVar32 - local_1c0._4_4_ * fVar25,
                                     (float)local_1b0 * fVar32 - (float)local_1c0 * fVar25);
                uStack_1a8 = CONCAT44(uStack_1a8._4_4_ * fVar32 - fVar26,
                                      (float)uStack_1a8 * fVar32 - fVar27);
                local_1c0 = CONCAT44(local_1c0._4_4_ * fVar32 + fVar29,
                                     (float)local_1c0 * fVar32 + fVar28);
                FUN_009b3960(auStack_f8,&local_180,&local_138);
                FUN_009b3960(auStack_f8,&local_1c0,auStack_f8);
                FUN_00f39ab0(lVar15,auStack_f8);
                uVar13 = FUN_00f3b1cc(*(undefined8 *)((long)puVar24 + 0x19));
                *(undefined8 *)(lVar15 + 0x50) = uVar13;
                uVar13 = FUN_00f3b1cc(*(undefined8 *)((long)puVar24 + 0x21));
                *(undefined8 *)(lVar15 + 0x58) = uVar13;
                uVar13 = FUN_00f3b1cc(*(undefined8 *)((long)puVar24 + 0x29));
                *(undefined8 *)(lVar15 + 0x60) = uVar13;
                uVar13 = FUN_00f3b1cc(*(undefined8 *)((long)puVar24 + 0x31));
                *(undefined8 *)(lVar15 + 0x68) = uVar13;
                uVar13 = FUN_00f3b1cc(*(undefined8 *)((long)puVar24 + 0x39));
                *(undefined8 *)(lVar15 + 0x70) = uVar13;
                uVar13 = FUN_00f3b1cc(*(undefined8 *)((long)puVar24 + 0x41));
                *(undefined8 *)(lVar15 + 0x78) = uVar13;
                uVar13 = FUN_00f3b1cc(*(undefined8 *)((long)puVar24 + 0x49));
                *(undefined8 *)(lVar15 + 0x80) = uVar13;
                switch(uVar10) {
                case 0:
                case 1:
                case 3:
                  uVar13 = FUN_00f3b1cc(*(undefined8 *)((long)puVar24 + 0x51));
                  *(undefined8 *)(lVar15 + 0x88) = uVar13;
                  uVar13 = FUN_00f3b1cc(*(undefined8 *)((long)puVar24 + 0x59));
                  *(undefined8 *)(lVar15 + 0x90) = uVar13;
                  break;
                case 2:
                  uVar13 = FUN_00f3b1cc(*(undefined8 *)((long)puVar24 + 0x51));
                  *(undefined8 *)(lVar15 + 0x88) = uVar13;
                  uVar13 = FUN_00f3b1cc(*(undefined8 *)((long)puVar24 + 0x59));
                  *(undefined8 *)(lVar15 + 0x90) = uVar13;
                  uVar13 = FUN_00f3b1cc(*(undefined8 *)((long)puVar24 + 0x61));
                  *(undefined8 *)(lVar15 + 0x98) = uVar13;
                  uVar13 = FUN_00f3b1cc(*(undefined8 *)((long)puVar24 + 0x69));
                  *(undefined8 *)(lVar15 + 0xa0) = uVar13;
                  uVar13 = FUN_00f3b1cc(*(undefined8 *)((long)puVar24 + 0x71));
                  *(undefined8 *)(lVar15 + 0xa8) = uVar13;
                  *(undefined1 *)(lVar15 + 0xb0) = *(undefined1 *)((long)puVar24 + 0x79);
                }
              }
              uVar17 = uVar17 + 1;
              puVar24 = puVar23;
            } while (uVar17 < *(byte *)(puVar4 + 0x15));
          }
        }
      }
      else {
        bVar9 = *(byte *)(puVar4 + 0x15);
        if (bVar9 != 0) {
          uVar17 = (uint)bVar9;
          if (bVar9 < 2) {
            uVar17 = 1;
          }
          puVar23 = (undefined8 *)((long)puVar4 + (ulong)(uVar17 - 1) * 0x7a + 0x15e);
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < *(byte *)(puVar19 + 3));
  }
  lVar14 = FUN_00f30acc(param_2);
  if (lVar14 != 0) {
    do {
      for (lVar15 = FUN_00f31964(param_2); lVar15 != 0; lVar15 = FUN_00f31978(param_2,lVar15)) {
        if (*(long **)(lVar15 + 0x208) != (long *)0x0) {
          lVar20 = *(long *)(**(long **)(lVar15 + 0x208) +
                             (ulong)*(byte *)((long)&__DT_RELA[0x4157].r_offset + param_1 + 1) * 8 +
                            8);
          if (lVar20 == 0) {
            FUN_00e6a2fc(0);
          }
          lVar20 = *(long *)(lVar20 + 8);
          if ((lVar20 != 0) &&
             (uVar16 = FUN_019970a8(lVar20,*(undefined4 *)(lVar14 + 0x10)), (uVar16 & 1) != 0)) {
            FUN_00f34c8c(lVar15,lVar14);
          }
        }
      }
      lVar14 = FUN_00f30ae0(param_2,lVar14);
    } while (lVar14 != 0);
  }
  *(ushort *)(param_2 + 100) = *(ushort *)(param_2 + 100) | 0x100;
  if (*(long *)(lVar11 + 0x28) == lVar18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

