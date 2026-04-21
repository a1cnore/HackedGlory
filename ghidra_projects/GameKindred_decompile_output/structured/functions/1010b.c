// functions/1010b — 377 functions
#include "GameKindred.h"




undefined8 thunk_FUN_1010b2ecc(void)

{
  return DAT_101ea5b38;
}




void thunk_FUN_1010b240c(void)

{
  FUN_1010b240c();
  return;
}




void FUN_1010b0008(float param_1)

{
  float *pfVar1;
  
  pfVar1 = (float *)FUN_1010b1de8(DAT_101ea5ad8,"World.Time",0);
  if (pfVar1 != (float *)0x0) {
    *pfVar1 = *pfVar1 + param_1;
  }
  return;
}




undefined8 FUN_1010b004c(void)

{
  return DAT_101ea5ae0;
}




undefined8 FUN_1010b0058(ulong param_1)

{
  return (&DAT_101ea5ac0)[param_1 & 0xffffffff];
}




long * FUN_1010b0068(long *param_1)

{
  void *pvVar1;
  
  if (*param_1 != 0) {
    pvVar1 = (void *)FUN_1010b7000();
    operator_delete(pvVar1);
  }
  if (param_1[1] != 0) {
    pvVar1 = (void *)FUN_1010af6a0();
    operator_delete(pvVar1);
  }
  return param_1;
}




undefined8 * FUN_1010b00a8(undefined8 *param_1)

{
  FUN_1010b73f4(param_1 + 6);
  FUN_1010b7434(param_1 + 6);
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




void FUN_1010b00fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  
  if (*(int *)(param_1 + 0x24) != 1) {
    return;
  }
  lVar1 = param_1 + 0x30;
  uVar3 = *(ushort *)(param_1 + 0x58);
  bVar2 = *(byte *)(param_3 + 0x10);
  if ((uVar3 & 3) == (bVar2 & 3)) {
    uVar4 = bVar2 >> 2 & 3;
    if ((uVar3 >> 2 & 3) == uVar4) goto LAB_1010b017c;
  }
  else {
    uVar4 = bVar2 >> 2 & 3;
  }
  FUN_1010b7a18(lVar1,bVar2 & 3,uVar4,uVar3 >> 4 & 3);
  uVar3 = *(ushort *)(param_1 + 0x58);
  bVar2 = *(byte *)(param_3 + 0x10);
LAB_1010b017c:
  uVar4 = uVar3 >> 6 & 3;
  uVar5 = bVar2 >> 4 & 1;
  if (uVar4 != uVar5 || (uVar3 >> 8 & 3) != uVar4) {
    FUN_1010b7a3c(lVar1,uVar5,uVar5,uVar3 >> 10 & 3);
  }
  FUN_1010b7d6c(param_2,lVar1);
  return;
}




void FUN_1010b01bc(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_14;
  
  local_14 = param_2;
  FUN_1010b01e0(param_1,&local_14);
  return;
}




long FUN_1010b01e0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = *param_2;
    uVar5 = (ulong)uVar1 * (ulong)uVar2 >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)uVar2 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar5 * 4) <= uVar2) goto LAB_1010b0218;
        iVar4 = (int)uVar5;
        uVar3 = iVar4 - 1;
        uVar5 = (ulong)uVar3;
      } while (uVar3 != 0 && 0 < iVar4);
      uVar5 = 0;
    }
LAB_1010b0218:
    if ((int)uVar5 < (int)uVar1) {
      do {
        uVar3 = *(uint *)(*(long *)(param_1 + 2) + uVar5 * 4);
        if (uVar2 <= uVar3) {
          if (uVar3 != uVar2) {
            return 0;
          }
          return *(long *)(param_1 + 6) + uVar5 * 0xc;
        }
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar3;
      } while (uVar1 != uVar3);
    }
  }
  return 0;
}




undefined8 FUN_1010b0260(char *param_1)

{
  undefined8 ****ppppuVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 ***local_38 [2];
  char local_21;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    uVar3 = 0;
  }
  else {
    FUN_10001549c(local_38,param_1);
    FUN_1004e2bfc(local_38);
    ppppuVar1 = (undefined8 ****)local_38[0];
    if (-1 < local_21) {
      ppppuVar1 = local_38;
    }
    uVar2 = FUN_1004d2524(ppppuVar1);
    uVar3 = FUN_100015208(ppppuVar1,uVar2,0x12345678);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  return uVar3;
}




void FUN_1010b02f0(undefined2 *param_1)

{
  long lVar1;
  long lVar2;
  undefined2 *puVar3;
  
  lVar1 = 1;
  puVar3 = param_1;
  do {
    *puVar3 = (short)lVar1;
    lVar1 = lVar1 + 1;
    puVar3 = puVar3 + 0xc;
  } while (lVar1 != 0x1000);
  *(undefined8 *)(param_1 + 0xc000) = 0xfff0000;
  lVar1 = 0x18010;
  lVar2 = 1;
  do {
    *(short *)((long)param_1 + lVar1) = (short)lVar2;
    lVar1 = lVar1 + 0x78;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x400);
  *(undefined8 *)(param_1 + 0x1b008) = 0x3ff0000;
  *(undefined8 *)(param_1 + 0x1b014) = 0;
  *(undefined8 *)(param_1 + 0x1b010) = 0;
  *(undefined4 *)(param_1 + 0x1b018) = 0;
  *(undefined8 *)(param_1 + 0x1b020) = 0;
  *(undefined8 *)(param_1 + 0x1b01c) = 0;
  *(undefined4 *)(param_1 + 0x1b024) = 0;
  *(undefined8 *)(param_1 + 0x1b034) = 0;
  *(undefined8 *)(param_1 + 0x1b030) = 0;
  *(undefined8 *)(param_1 + 0x1b028) = 0;
  *(undefined2 **)(param_1 + 0x1b02c) = param_1 + 0x1b030;
  return;
}




void FUN_1010b0398(undefined2 *param_1)

{
  long lVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x1b010);
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x68);
    FUN_1010b00a8();
  }
  lVar1 = *(long *)(param_1 + 0x1b01c);
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x68);
    FUN_1010b00a8();
  }
  *(long *)(param_1 + 0x1b010) = 0;
  *(undefined8 *)(param_1 + 0x1b014) = 0;
  *(undefined4 *)(param_1 + 0x1b018) = 0;
  *(long *)(param_1 + 0x1b01c) = 0;
  *(undefined8 *)(param_1 + 0x1b020) = 0;
  lVar1 = 1;
  *(undefined4 *)(param_1 + 0x1b024) = 0;
  puVar2 = param_1;
  do {
    *puVar2 = (short)lVar1;
    lVar1 = lVar1 + 1;
    puVar2 = puVar2 + 0xc;
  } while (lVar1 != 0x1000);
  *(undefined8 *)(param_1 + 0xc000) = 0xfff0000;
  lVar1 = 1;
  puVar2 = param_1 + 0xc008;
  do {
    *puVar2 = (short)lVar1;
    lVar1 = lVar1 + 1;
    puVar2 = puVar2 + 0x3c;
  } while (lVar1 != 0x400);
  *(undefined8 *)(param_1 + 0x1b008) = 0x3ff0000;
  puVar3 = (undefined8 *)(param_1 + 0x1b030);
  FUN_1010b0ff8(param_1 + 0x1b02c,*puVar3);
  *(undefined8 **)(param_1 + 0x1b02c) = puVar3;
  *(undefined8 *)(param_1 + 0x1b034) = 0;
  *puVar3 = 0;
  return;
}




bool FUN_1010b0488(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  
  uVar2 = FUN_1004d2524(param_2);
  uVar3 = FUN_100015208(param_2,uVar2,0x12345678);
  plVar1 = (long *)(param_1 + 0x36060);
  plVar5 = (long *)*plVar1;
  plVar4 = plVar1;
  if (plVar5 != (long *)0x0) {
    do {
      if (*(uint *)(plVar5 + 4) >= uVar3) {
        plVar4 = plVar5;
      }
      plVar5 = (long *)plVar5[*(uint *)(plVar5 + 4) < uVar3];
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar1) && (*(uint *)(plVar4 + 4) <= uVar3)) {
      return plVar4[5] != 0;
    }
  }
  return false;
}




ushort * FUN_1010b051c(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  ushort uVar3;
  ushort *puVar4;
  long lVar5;
  
  uVar1 = *(ushort *)(param_1 + 0x36010);
  uVar2 = (ulong)uVar1;
  if (uVar2 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(param_1 + 0x18010 + uVar2 * 0x78);
    uVar3 = 0xffff;
    if (uVar1 != *(ushort *)(param_1 + 0x36012)) {
      uVar3 = *puVar4;
    }
    *(ushort *)(param_1 + 0x36010) = uVar3;
    lVar5 = param_1 + 0x18010 + uVar2 * 0x78;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(undefined4 *)(lVar5 + 0x24) = 2;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    FUN_1010b73bc(lVar5 + 0x30);
    *(undefined2 *)(lVar5 + 0x60) = 0xffff;
    *(undefined1 *)(lVar5 + 0x62) = 0;
    *(undefined8 *)(lVar5 + 0x6c) = 0;
    *(undefined8 *)(lVar5 + 100) = 0;
    *(undefined4 *)(lVar5 + 0x74) = 0;
    *(int *)(param_1 + 0x36014) = *(int *)(param_1 + 0x36014) + 1;
  }
  return puVar4;
}




bool FUN_1010b05dc(long param_1,long param_2)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 100);
  *(int *)(param_2 + 100) = iVar1 + -1;
  if (iVar1 + -1 == 0 || iVar1 < 1) {
    FUN_1010b13dc(param_1 + 0x36058,param_2 + 0x20);
    FUN_1010b06bc(param_1 + 0x36020,param_2);
    FUN_1010b00a8(param_2);
    iVar4 = (int)(param_1 + 0x18010);
    if (*(short *)(param_1 + 0x36010) == -1) {
      sVar3 = (short)((uint)((int)param_2 - iVar4) >> 3) * -0x1111;
      *(short *)(param_1 + 0x36012) = sVar3;
      *(short *)(param_1 + 0x36010) = sVar3;
    }
    else {
      uVar2 = *(ushort *)(param_1 + 0x36012);
      sVar3 = (short)((uint)((int)param_2 - iVar4) >> 3) * -0x1111;
      *(short *)(param_1 + 0x36012) = sVar3;
      *(short *)(param_1 + 0x18010 + (ulong)uVar2 * 0x78) = sVar3;
    }
    *(int *)(param_1 + 0x36014) = *(int *)(param_1 + 0x36014) + -1;
  }
  return iVar1 < 2;
}




void FUN_1010b06bc(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x68);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0x70);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x68) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x70);
    *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(long *)(*(long *)(param_2 + 0x68) + 0x70) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_1010b071c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x36050) = param_2;
  return;
}




void FUN_1010b072c(long param_1)

{
  *(undefined8 *)(param_1 + 0x36050) = 0;
  return;
}




void FUN_1010b073c(long param_1,undefined8 param_2)

{
  FUN_1010b00fc(*(undefined8 *)(param_1 + 8),param_2,param_1);
  return;
}




undefined1  [16]
FUN_1010b0748(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined8 *local_58;
  
  uVar1 = FUN_1004e6cb8(0x38);
  puVar2 = (undefined8 *)FUN_1004e6bb8();
  puVar2[6] = 0;
  *puVar2 = &PTR_thunk_FUN_1004e6bc8_10182e648;
  puVar6 = puVar2 + 2;
  *puVar6 = &PTR_FUN_10182e668;
  puVar2[3] = param_2;
  puVar2[4] = param_3;
  *(undefined4 *)(puVar2 + 5) = param_1;
  *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
  local_58 = (undefined8 *)FUN_1004e68dc();
  *local_58 = puVar6;
  local_58[1] = thunk_FUN_1010b0bd4;
  uVar3 = FUN_1004e76ac(&local_58,0x8cc8426f);
  uVar3 = FUN_1004e76b8(uVar3,param_5);
  FUN_1004e7744(uVar3,uVar1);
  auVar7._0_8_ = FUN_1004e777c();
  local_58 = (undefined8 *)FUN_1004e68dc();
  *local_58 = puVar6;
  local_58[1] = thunk_FUN_1010b0de8;
  uVar3 = FUN_1004e76ac(&local_58,0x589a4f97);
  uVar4 = FUN_1004e6804();
  uVar3 = FUN_1004e76a0(uVar3,uVar4);
  uVar3 = FUN_1004e76b8(uVar3,auVar7._0_8_);
  uVar3 = FUN_1004e76e8(uVar3,param_6);
  FUN_1004e7744(uVar3,uVar1);
  uVar3 = FUN_1004e777c();
  local_58 = (undefined8 *)FUN_1004e68dc();
  *local_58 = puVar6;
  local_58[1] = FUN_1010b1510;
  uVar4 = FUN_1004e76ac(&local_58,0x94ef0e1d);
  uVar5 = FUN_1004e6820();
  uVar4 = FUN_1004e76a0(uVar4,uVar5);
  uVar3 = FUN_1004e76b8(uVar4,uVar3);
  FUN_1004e7744(uVar3,uVar1);
  uVar1 = FUN_1004e777c();
  auVar7._8_8_ = uVar1;
  return auVar7;
}




undefined1 FUN_1010b08bc(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  uVar1 = 1;
  switch(param_1) {
  case 0x11:
    iVar2 = FUN_1010b872c(1);
    return iVar2 == 1;
  case 0x13:
    return 0xf;
  case 0x14:
    uVar1 = 0x10;
  }
  return uVar1;
}




void * FUN_1010b0910(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  int *piVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long *local_140;
  undefined8 local_138;
  undefined8 local_130;
  int aiStack_128 [16];
  long alStack_e8 [16];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  uVar15 = *(uint *)(param_1 + 0x184);
  uVar16 = *(uint *)(param_1 + 0x180);
  if (uVar15 < uVar16) {
    uVar14 = 0;
    puVar12 = (undefined4 *)(param_1 + (long)(int)uVar15 * 0x18 + 0x14);
    piVar9 = aiStack_128 + (int)uVar15;
    do {
      iVar1 = FUN_1010b8840(param_2,puVar12[-1],*puVar12);
      *piVar9 = iVar1;
      uVar14 = iVar1 + uVar14;
      uVar16 = *(uint *)(param_1 + 0x180);
      puVar12 = puVar12 + 6;
      uVar15 = uVar15 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar15 < uVar16);
    uVar15 = *(uint *)(param_1 + 0x184);
    uVar2 = (ulong)uVar14;
  }
  else {
    uVar2 = 0;
  }
  pvVar3 = operator_new__(uVar2);
  if (uVar15 < uVar16) {
    uVar2 = 0;
    plVar8 = alStack_e8 + (int)uVar15;
    piVar9 = aiStack_128 + (int)uVar15;
    do {
      *plVar8 = (long)pvVar3 + uVar2;
      uVar2 = (ulong)(uint)(*piVar9 + (int)uVar2);
      uVar15 = uVar15 + 1;
      plVar8 = plVar8 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar15 < uVar16);
  }
  lVar4 = FUN_1004e6cb8(0x218);
  puVar5 = (undefined8 *)FUN_1004e6bb8();
  *puVar5 = &PTR_thunk_FUN_1004e6bc8_10182e688;
  *(undefined4 *)(puVar5 + 0x42) = *(undefined4 *)(param_1 + 0x194);
  *(int *)((long)puVar5 + 0x214) = (int)param_2;
  uVar15 = *(uint *)(param_1 + 0x184);
  uVar16 = *(uint *)(param_1 + 0x180);
  if (uVar15 < uVar16) {
    lVar11 = (long)(int)uVar15;
    puVar10 = (undefined8 *)(lVar4 + lVar11 * 0x20 + 0x18);
    puVar12 = (undefined4 *)(param_1 + lVar11 * 0x18 + 8);
    plVar8 = alStack_e8 + lVar11;
    uVar14 = uVar15;
    do {
      puVar10[-1] = *plVar8;
      *puVar10 = *(undefined8 *)(puVar12 + -2);
      *(undefined4 *)(puVar10 + 1) = *puVar12;
      *(undefined8 *)((long)puVar10 + 0xc) = *(undefined8 *)(puVar12 + 2);
      puVar10 = puVar10 + 4;
      puVar12 = puVar12 + 6;
      uVar14 = uVar14 + 1;
      plVar8 = plVar8 + 1;
    } while (uVar14 < uVar16);
  }
  local_130 = 0;
  local_140 = (long *)FUN_1004e68dc();
  *local_140 = (long)(puVar5 + 2);
  local_140[1] = (long)thunk_FUN_1010b156c;
  uVar6 = FUN_1004e683c();
  uVar6 = FUN_1004e76a0(&local_140,uVar6);
  uVar6 = FUN_1004e7744(uVar6,lVar4);
  FUN_1004e7738(uVar6,uVar15 * 0x100 + 0x100 & 0xff00 | uVar15 & 0xff);
  local_138 = FUN_1004e777c();
  uVar15 = *(uint *)(param_1 + 0x180);
  iVar1 = *(int *)(param_1 + 0x184);
  if ((int)(uVar15 - iVar1) < 2) {
    uVar6 = 1;
  }
  else {
    local_140 = (long *)FUN_1004e68dc();
    *local_140 = (long)(puVar5 + 2);
    local_140[1] = (long)thunk_FUN_1010b156c;
    uVar6 = FUN_1004e683c();
    uVar6 = FUN_1004e76a0(&local_140,uVar6);
    uVar6 = FUN_1004e7744(uVar6,lVar4);
    FUN_1004e7738(uVar6,iVar1 + 1U & 0xff | (uVar15 & 0xff) << 8);
    local_130 = FUN_1004e777c();
    uVar6 = 2;
  }
  uVar7 = FUN_1004e6948();
  FUN_1004e6a34(uVar7,&local_138,uVar6,&local_138,uVar6,0);
  uVar15 = *(uint *)(param_1 + 0x184);
  uVar16 = *(uint *)(param_1 + 0x180);
  if (uVar15 < uVar16) {
    lVar4 = (long)(int)uVar15;
    plVar8 = alStack_e8 + lVar4;
    piVar9 = aiStack_128 + lVar4;
    piVar13 = (int *)(param_1 + lVar4 * 0x18 + 8);
    do {
      *(long *)(piVar13 + -2) = *plVar8;
      *piVar13 = *piVar9;
      uVar15 = uVar15 + 1;
      plVar8 = plVar8 + 1;
      piVar9 = piVar9 + 1;
      piVar13 = piVar13 + 6;
    } while (uVar15 < uVar16);
  }
  *(int *)(param_1 + 0x194) = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010b0bd4(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 auStack_44 [4];
  
  uVar5 = FUN_1004e6948();
  lVar6 = FUN_1004e697c(uVar5,0x815f1c7b);
  plVar1 = (long *)(lVar6 + 0x10);
  if (lVar6 == 0) {
    FUN_1004d22dc("Inconsistency");
    plVar1 = (long *)0x0;
  }
  if (*plVar1 == 0) {
    FUN_1004d22dc("Inconsistency");
  }
  lVar6 = FUN_1004e6cb8(0x1a8);
  puVar7 = (undefined8 *)FUN_1004e6bb8();
  *puVar7 = &PTR_thunk_FUN_1004e6bc8_10182e6a8;
  uVar5 = FUN_1004e6948();
  FUN_1004e69d4(uVar5,lVar6,0x9ee95407);
  FUN_1010b90ac(*plVar1,auStack_44,lVar6 + 400,0,lVar6 + 0x1a4,lVar6 + 0x198,lVar6 + 0x19c,
                (uint *)(lVar6 + 0x1a0));
  FUN_1010b8aa4(*plVar1,lVar6 + 0x10);
  cVar3 = *(char *)(*(long *)(param_1 + 8) + 0x62);
  uVar4 = *(int *)(lVar6 + 400) - 1;
  uVar2 = (int)cVar3;
  if (uVar4 <= (uint)(int)cVar3) {
    uVar2 = uVar4;
  }
  *(uint *)(lVar6 + 0x194) = uVar2;
  uVar5 = FUN_1010b08bc(*(undefined4 *)(lVar6 + 0x1a4));
  if (*(int *)(lVar6 + 0x1a4) != (int)uVar5) {
    uVar5 = FUN_1010b0910(lVar6 + 0x10,uVar5);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
  }
  uVar2 = *(uint *)(lVar6 + 0x1a0);
  uVar8 = (ulong)uVar2;
  if (uVar2 != 0) {
    lVar6 = *plVar1 + 0x1c;
    do {
      FUN_1010b0d1c(*(undefined8 *)(param_1 + 8),lVar6,lVar6);
      lVar6 = lVar6 + 0xc;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}




void FUN_1010b0d1c(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint local_34;
  
  local_34 = *param_2;
  lVar3 = *(long *)(param_1 + 2);
  uVar2 = *param_1;
  if (uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar6 = (ulong)uVar2 * (ulong)local_34 >> 0x20;
    if (0 < (int)((ulong)uVar2 * (ulong)local_34 >> 0x20)) {
      do {
        if (*(uint *)(lVar3 + uVar6 * 4) <= local_34) goto LAB_1010b0d74;
        iVar4 = (int)uVar6;
        uVar5 = iVar4 - 1;
        uVar6 = (ulong)uVar5;
      } while (uVar5 != 0 && 0 < iVar4);
      uVar6 = 0;
    }
LAB_1010b0d74:
    uVar5 = (uint)uVar6;
    if ((int)(uint)uVar6 < (int)uVar2) {
      do {
        uVar5 = (uint)uVar6;
        if (local_34 <= *(uint *)(lVar3 + uVar6 * 4)) break;
        uVar1 = (uint)uVar6 + 1;
        uVar6 = (ulong)uVar1;
        uVar5 = uVar2;
      } while (uVar2 != uVar1);
    }
  }
  FUN_10011a5f4(param_1,lVar3 + (long)(int)uVar5 * 4,&local_34,&stack0xffffffffffffffd0);
  FUN_1010b1664(param_1 + 4,*(long *)(param_1 + 6) + (long)(int)uVar5 * 0xc,param_3,param_3 + 0xc);
  return;
}




void FUN_1010b0de8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_1004e6948();
  lVar3 = FUN_1004e697c(uVar2,0x9ee95407);
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x10;
  }
  FUN_1010b7478(*(long *)(param_1 + 8) + 0x30,0);
  FUN_1010b76d8(*(long *)(param_1 + 8) + 0x30,lVar1 + (ulong)*(uint *)(lVar1 + 0x184) * 0x18,
                *(int *)(lVar1 + 0x180) - *(uint *)(lVar1 + 0x184),*(undefined4 *)(lVar1 + 0x194),
                *(undefined4 *)(lVar1 + 0x188),*(undefined4 *)(lVar1 + 0x18c));
  FUN_1010b7a64(0,0x447a0000,*(long *)(param_1 + 8) + 0x30);
  FUN_1010b7a60(0,*(long *)(param_1 + 8) + 0x30);
  return;
}




void FUN_1010b0e80(void)

{
  return;
}




void FUN_1010b0e88(void)

{
  return;
}




void FUN_1010b0e90(void)

{
  return;
}




void FUN_1010b0e98(void)

{
  return;
}




undefined8 FUN_1010b0ea0(void)

{
  return 0;
}




undefined8 * FUN_1010b0ea8(undefined8 *param_1,long *param_2,uint param_3,byte param_4)

{
  ulong uVar1;
  
  *param_1 = &PTR_FUN_10182e5b8;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  uVar1 = *(ulong *)(*param_2 + (ulong)param_4 * 8 + 8);
  if (uVar1 == 0) {
    FUN_1004d22dc(0);
  }
  param_1[2] = (uVar1 & 0xfffffff8 | (ulong)(param_3 & 0xf) << 0x20 |
                (*(ulong *)(uVar1 + 0x10) >> 6 & 1) << 0x24 |
               (ulong)((*(ulong *)(uVar1 + 0x10) & 0xf00000) != 0) << 0x25) ^ 0x1000000000;
  *(byte *)(param_1 + 3) = param_4;
  return param_1;
}




void FUN_1010b0f30(void)

{
  return;
}




undefined8 FUN_1010b0f38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_1010b0f40(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1010b0f40(param_1,*param_2);
    FUN_1010b0f40(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_1010b0f80(uint *param_1)

{
  ulong uVar1;
  uint *puVar2;
  
  uVar1 = (ulong)*param_1;
  if (*param_1 != 0) {
    puVar2 = param_1 + uVar1 * 0x77e + -0x77a;
    do {
      if (puVar2[0x152] != 0) {
        puVar2[0x152] = 0;
      }
      uVar1 = uVar1 - 1;
      if (*puVar2 != 0) {
        *puVar2 = 0;
      }
      puVar2 = puVar2 + -0x77e;
    } while (uVar1 != 0);
    *param_1 = 0;
  }
  return;
}




void FUN_1010b0fcc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_1010b3e28(*(undefined4 *)(param_1 + 8));
  FUN_1010b7d6c(param_2,uVar1);
  return;
}




void FUN_1010b0ff8(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1010b0ff8(param_1,*param_2);
    FUN_1010b0ff8(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




undefined1  [16] FUN_1010b1038(long param_1,uint *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(param_1 + 8);
    puVar2 = (undefined8 *)*puVar3;
    do {
      while (puVar3 = puVar2, *param_2 < *(uint *)(puVar3 + 4)) {
        puVar4 = puVar3;
        puVar2 = (undefined8 *)*puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_1010b10ac;
      }
      if (*param_2 <= *(uint *)(puVar3 + 4)) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_1010b10ac:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x30);
    uVar6 = *param_3;
    *(undefined8 *)((long)pvVar5 + 0x28) = param_3[1];
    *(undefined8 *)((long)pvVar5 + 0x20) = uVar6;
    FUN_1010b1100(param_1,puVar3,puVar4,pvVar5);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar5;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_1010b1100(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




undefined8 FUN_1010b1154(long param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar3;
  if (plVar4 != (long *)0x0) {
    uVar1 = *param_2;
    plVar2 = plVar3;
    do {
      if (*(uint *)(plVar4 + 4) >= uVar1) {
        plVar2 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < uVar1];
    } while (plVar4 != (long *)0x0);
    if ((plVar2 != plVar3) && (*(uint *)(plVar2 + 4) <= uVar1)) {
      FUN_1010b11b4();
      return 1;
    }
  }
  return 0;
}




long * FUN_1010b11b4(undefined8 *param_1,void *param_2)

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




void FUN_1010b124c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004e6bc8();
  operator_delete(pvVar1);
  return;
}




void FUN_1010b1268(void)

{
  return;
}




void thunk_FUN_1010b1284(void)

{
  FUN_1010b1284();
  return;
}




void FUN_1010b1270(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010b1284();
  operator_delete(pvVar1);
  return;
}




void FUN_1010b1284(long param_1)

{
  if (*(int *)(param_1 + 0x77f8) != 0) {
    *(int *)(param_1 + 0x77f8) = 0;
  }
  FUN_1010b0f80(param_1 + 0x10);
  FUN_1004e6bc8(param_1);
  return;
}




undefined1  [16] FUN_1010b12c0(long param_1,uint *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(param_1 + 8);
    puVar2 = (undefined8 *)*puVar3;
    do {
      while (puVar3 = puVar2, *param_2 < *(uint *)(puVar3 + 4)) {
        puVar4 = puVar3;
        puVar2 = (undefined8 *)*puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_1010b1334;
      }
      if (*param_2 <= *(uint *)(puVar3 + 4)) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_1010b1334:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x30);
    uVar6 = *param_3;
    *(undefined8 *)((long)pvVar5 + 0x28) = param_3[1];
    *(undefined8 *)((long)pvVar5 + 0x20) = uVar6;
    FUN_1010b1388(param_1,puVar3,puVar4,pvVar5);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar5;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_1010b1388(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




undefined8 FUN_1010b13dc(long param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar3;
  if (plVar4 != (long *)0x0) {
    uVar1 = *param_2;
    plVar2 = plVar3;
    do {
      if (*(uint *)(plVar4 + 4) >= uVar1) {
        plVar2 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < uVar1];
    } while (plVar4 != (long *)0x0);
    if ((plVar2 != plVar3) && (*(uint *)(plVar2 + 4) <= uVar1)) {
      FUN_1010b143c();
      return 1;
    }
  }
  return 0;
}




long * FUN_1010b143c(undefined8 *param_1,void *param_2)

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




void FUN_1010b14d4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004e6bc8();
  operator_delete(pvVar1);
  return;
}




void FUN_1010b14e8(long param_1)

{
  FUN_1004e6bc8(param_1 + -0x10);
  return;
}




void FUN_1010b14f0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004e6bc8(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_1010b0bd4(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 auStack_44 [4];
  
  uVar5 = FUN_1004e6948();
  lVar6 = FUN_1004e697c(uVar5,0x815f1c7b);
  plVar1 = (long *)(lVar6 + 0x10);
  if (lVar6 == 0) {
    FUN_1004d22dc("Inconsistency");
    plVar1 = (long *)0x0;
  }
  if (*plVar1 == 0) {
    FUN_1004d22dc("Inconsistency");
  }
  lVar6 = FUN_1004e6cb8(0x1a8);
  puVar7 = (undefined8 *)FUN_1004e6bb8();
  *puVar7 = &PTR_thunk_FUN_1004e6bc8_10182e6a8;
  uVar5 = FUN_1004e6948();
  FUN_1004e69d4(uVar5,lVar6,0x9ee95407);
  FUN_1010b90ac(*plVar1,auStack_44,lVar6 + 400,0,lVar6 + 0x1a4,lVar6 + 0x198,lVar6 + 0x19c,
                (uint *)(lVar6 + 0x1a0));
  FUN_1010b8aa4(*plVar1,lVar6 + 0x10);
  cVar3 = *(char *)(*(long *)(param_1 + 8) + 0x62);
  uVar4 = *(int *)(lVar6 + 400) - 1;
  uVar2 = (int)cVar3;
  if (uVar4 <= (uint)(int)cVar3) {
    uVar2 = uVar4;
  }
  *(uint *)(lVar6 + 0x194) = uVar2;
  uVar5 = FUN_1010b08bc(*(undefined4 *)(lVar6 + 0x1a4));
  if (*(int *)(lVar6 + 0x1a4) != (int)uVar5) {
    uVar5 = FUN_1010b0910(lVar6 + 0x10,uVar5);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
  }
  uVar2 = *(uint *)(lVar6 + 0x1a0);
  uVar8 = (ulong)uVar2;
  if (uVar2 != 0) {
    lVar6 = *plVar1 + 0x1c;
    do {
      FUN_1010b0d1c(*(undefined8 *)(param_1 + 8),lVar6,lVar6);
      lVar6 = lVar6 + 0xc;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}




void thunk_FUN_1010b0de8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_1004e6948();
  lVar3 = FUN_1004e697c(uVar2,0x9ee95407);
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x10;
  }
  FUN_1010b7478(*(long *)(param_1 + 8) + 0x30,0);
  FUN_1010b76d8(*(long *)(param_1 + 8) + 0x30,lVar1 + (ulong)*(uint *)(lVar1 + 0x184) * 0x18,
                *(int *)(lVar1 + 0x180) - *(uint *)(lVar1 + 0x184),*(undefined4 *)(lVar1 + 0x194),
                *(undefined4 *)(lVar1 + 0x188),*(undefined4 *)(lVar1 + 0x18c));
  FUN_1010b7a64(0,0x447a0000,*(long *)(param_1 + 8) + 0x30);
  FUN_1010b7a60(0,*(long *)(param_1 + 8) + 0x30);
  return;
}




void FUN_1010b1510(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar1 + 0x24) = 1;
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x20));
    lVar1 = *(long *)(param_1 + 8);
  }
  *(int *)(lVar1 + 100) = *(int *)(lVar1 + 100) + -1;
  return;
}




void FUN_1010b1558(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004e6bc8();
  operator_delete(pvVar1);
  return;
}




void FUN_1010b156c(undefined8 param_1)

{
  uint uVar1;
  
  FUN_1004e6948();
  uVar1 = FUN_1004e69f4();
  FUN_1010b159c(param_1,uVar1 & 0xff,uVar1 >> 8 & 0xff);
  return;
}




void FUN_1010b159c(long param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x200) - 0x11U < 4) {
    if (param_2 < param_3) {
      lVar2 = param_1 + (long)param_2 * 0x20;
      param_3 = param_3 - param_2;
      do {
        FUN_1010b88e8(*(undefined8 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0x10),
                      *(undefined4 *)(param_1 + 0x204),lVar2,0,0);
        lVar2 = lVar2 + 0x20;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else if (*(int *)(param_1 + 0x200) == 0 && param_2 < param_3) {
    puVar1 = (undefined4 *)(param_1 + (long)param_2 * 0x20 + 0x18);
    param_3 = param_3 - param_2;
    do {
      FUN_1010b8884(*(undefined8 *)(puVar1 + -4),puVar1[-1],*puVar1,*(undefined8 *)(puVar1 + -6));
      puVar1 = puVar1 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}




void thunk_FUN_1010b156c(undefined8 param_1)

{
  uint uVar1;
  
  FUN_1004e6948();
  uVar1 = FUN_1004e69f4();
  FUN_1010b159c(param_1,uVar1 & 0xff,uVar1 >> 8 & 0xff);
  return;
}




void FUN_1010b1650(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004e6bc8();
  operator_delete(pvVar1);
  return;
}




undefined8 *
FUN_1010b1664(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (param_3 != param_4) {
    uVar10 = ((long)param_4 - (long)param_3 >> 2) * -0x5555555555555555;
    puVar11 = *(undefined8 **)(param_1 + 2);
    uVar12 = ((long)param_2 - (long)puVar11 >> 2) * -0x5555555555555555;
    uVar2 = *param_1;
    uVar13 = (ulong)uVar2;
    uVar3 = param_1[1];
    uVar9 = (uint)uVar10;
    if (uVar3 - uVar2 < uVar9) {
      uVar2 = uVar2 + uVar9;
      uVar9 = 0;
      if (uVar3 != 0xffffffff) {
        uVar9 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
      }
      if (uVar3 < 0x20) {
        uVar9 = uVar3 << 1;
      }
      uVar3 = uVar2;
      if (uVar2 <= uVar9) {
        uVar3 = uVar9;
      }
      puVar5 = operator_new__((ulong)uVar3 * 0xc);
      puVar4 = puVar5;
      for (puVar1 = puVar11; puVar1 != param_2; puVar1 = (undefined8 *)((long)puVar1 + 0xc)) {
        uVar7 = *puVar1;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar1 + 1);
        *puVar4 = uVar7;
        puVar4 = (undefined8 *)((long)puVar4 + 0xc);
      }
      lVar8 = (uVar12 & 0xffffffff) * 2 + (uVar12 & 0xffffffff);
      _memcpy((void *)((long)puVar5 + lVar8 * 4),param_3,
              ((((long)param_4 - (long)param_3) - 0xcU) / 0xc) * 0xc + 0xc);
      if ((undefined8 *)((long)puVar11 + uVar13 * 0xc) != param_2) {
        _memcpy((void *)((long)puVar5 + lVar8 * 4 + (uVar10 & 0xffffffff) * 0xc),param_2,
                (((long)puVar11 + (uVar13 * 0xc - (long)param_2) + -0xc) / 0xc) * 0xc + 0xc);
      }
      if (puVar11 != (undefined8 *)0x0) {
        operator_delete__(puVar11);
      }
      *(undefined8 **)(param_1 + 2) = puVar5;
      *param_1 = uVar2;
      param_1[1] = uVar3;
    }
    else {
      puVar5 = (undefined8 *)((long)puVar11 + uVar13 * 0xc);
      uVar6 = ((long)puVar5 - (long)param_2 >> 2) * -0x5555555555555555;
      if (uVar9 < (uint)uVar6) {
        uVar10 = uVar10 & 0xffffffff;
        if (uVar10 != 0) {
          lVar8 = 0;
          do {
            puVar11 = (undefined8 *)((long)puVar5 + lVar8 + uVar10 * -0xc);
            *(undefined8 *)((long)puVar5 + lVar8) = *puVar11;
            *(undefined4 *)((undefined8 *)((long)puVar5 + lVar8) + 1) = *(undefined4 *)(puVar11 + 1)
            ;
            lVar8 = lVar8 + 0xc;
          } while (uVar10 * -0xc + lVar8 != 0);
          uVar13 = (ulong)*param_1;
          puVar11 = *(undefined8 **)(param_1 + 2);
        }
        lVar8 = (long)puVar11 + ((uVar13 - uVar10) * 0xc - (long)param_2);
        if (lVar8 != 0) {
          puVar11 = (undefined8 *)((long)puVar11 + (uVar13 - uVar10) * 0xc);
          do {
            puVar5 = (undefined8 *)((long)param_2 + lVar8 + uVar10 * 0xc + -0xc);
            uVar7 = *(undefined8 *)((long)puVar11 + -0xc);
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)((long)puVar11 + -4);
            *puVar5 = uVar7;
            lVar8 = lVar8 + -0xc;
            puVar11 = (undefined8 *)((long)puVar11 + -0xc);
          } while (lVar8 != 0);
        }
        do {
          uVar7 = *param_3;
          *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
          *param_2 = uVar7;
          param_3 = (undefined8 *)((long)param_3 + 0xc);
          param_2 = (undefined8 *)((long)param_2 + 0xc);
        } while (param_3 != param_4);
      }
      else {
        if (puVar5 != param_2) {
          puVar11 = param_2;
          do {
            puVar1 = (undefined8 *)
                     ((long)puVar11 + ((uVar10 & 0xffffffff) * 2 + (uVar10 & 0xffffffff)) * 4);
            uVar7 = *puVar11;
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar11 + 1);
            *puVar1 = uVar7;
            puVar11 = (undefined8 *)((long)puVar11 + 0xc);
          } while (puVar11 != puVar5);
          uVar13 = (ulong)*param_1;
          puVar11 = *(undefined8 **)(param_1 + 2);
        }
        uVar6 = uVar6 & 0xffffffff;
        puVar5 = (undefined8 *)((long)param_3 + uVar6 * 0xc);
        if (puVar5 != param_4) {
          puVar11 = (undefined8 *)((long)puVar11 + uVar13 * 0xc);
          do {
            uVar7 = *puVar5;
            *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar5 + 1);
            *puVar11 = uVar7;
            puVar5 = (undefined8 *)((long)puVar5 + 0xc);
            puVar11 = (undefined8 *)((long)puVar11 + 0xc);
          } while (puVar5 != param_4);
        }
        if (uVar6 != 0) {
          lVar8 = uVar6 * 0xc;
          do {
            uVar7 = *param_3;
            *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
            *param_2 = uVar7;
            param_3 = (undefined8 *)((long)param_3 + 0xc);
            lVar8 = lVar8 + -0xc;
            param_2 = (undefined8 *)((long)param_2 + 0xc);
          } while (lVar8 != 0);
        }
      }
      *param_1 = *param_1 + uVar9;
      puVar5 = *(undefined8 **)(param_1 + 2);
    }
    param_2 = (undefined8 *)((long)puVar5 + (uVar12 & 0xffffffff) * 0xc);
  }
  return param_2;
}




long * FUN_1010b1990(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  *param_1 = param_2;
  *(uint *)(param_1 + 1) = param_3;
  pvVar2 = operator_new__((ulong)param_3 << 2);
  param_1[2] = (long)pvVar2;
  if (param_3 == 0) {
    uVar7 = 0;
    uVar6 = 0;
  }
  else {
    uVar4 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar1 = *(uint *)(param_1 + 1);
    piVar5 = (int *)(param_2 + 0xc);
    do {
      switch(piVar5[-1]) {
      case 0:
        *(uint *)((long)pvVar2 + uVar4 * 4) = uVar7;
        uVar7 = *piVar5 + uVar7;
        break;
      case 1:
        uVar7 = uVar7 + 1 & 0xfffffffe;
        *(uint *)((long)pvVar2 + uVar4 * 4) = uVar7;
        uVar7 = uVar7 + *piVar5 * 2;
        break;
      case 2:
      case 3:
        uVar7 = uVar7 + 3 & 0xfffffffc;
        *(uint *)((long)pvVar2 + uVar4 * 4) = uVar7;
        uVar7 = uVar7 + *piVar5 * 4;
        break;
      case 4:
        *(uint *)((long)pvVar2 + uVar4 * 4) = uVar6;
        uVar6 = *piVar5 + uVar6;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 6;
    } while (uVar4 < uVar1);
  }
  pvVar2 = operator_new__((ulong)uVar7 << 2);
  param_1[3] = (long)pvVar2;
  puVar3 = operator_new__((ulong)uVar6 << 3);
  param_1[4] = (long)puVar3;
  if (uVar7 != 0) {
    _bzero(pvVar2,(ulong)uVar7 << 2);
  }
  if (uVar6 != 0) {
    *puVar3 = 0;
    if (uVar6 != 1) {
      uVar4 = 1;
      do {
        *(undefined8 *)(param_1[4] + uVar4 * 8) = 0;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    pvVar2 = (void *)param_1[3];
    puVar3 = (undefined8 *)param_1[4];
  }
  DAT_101dc1be8 = pvVar2;
  DAT_101dc1bf0 = uVar7 << 2;
  DAT_101dc1c00 = uVar6;
  DAT_101dc1bf8 = puVar3;
  DAT_101dc1bf4 = 1;
  return param_1;
}




long * thunk_FUN_1010b1990(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  *param_1 = param_2;
  *(uint *)(param_1 + 1) = param_3;
  pvVar2 = operator_new__((ulong)param_3 << 2);
  param_1[2] = (long)pvVar2;
  if (param_3 == 0) {
    uVar7 = 0;
    uVar6 = 0;
  }
  else {
    uVar4 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar1 = *(uint *)(param_1 + 1);
    piVar5 = (int *)(param_2 + 0xc);
    do {
      switch(piVar5[-1]) {
      case 0:
        *(uint *)((long)pvVar2 + uVar4 * 4) = uVar7;
        uVar7 = *piVar5 + uVar7;
        break;
      case 1:
        uVar7 = uVar7 + 1 & 0xfffffffe;
        *(uint *)((long)pvVar2 + uVar4 * 4) = uVar7;
        uVar7 = uVar7 + *piVar5 * 2;
        break;
      case 2:
      case 3:
        uVar7 = uVar7 + 3 & 0xfffffffc;
        *(uint *)((long)pvVar2 + uVar4 * 4) = uVar7;
        uVar7 = uVar7 + *piVar5 * 4;
        break;
      case 4:
        *(uint *)((long)pvVar2 + uVar4 * 4) = uVar6;
        uVar6 = *piVar5 + uVar6;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 6;
    } while (uVar4 < uVar1);
  }
  pvVar2 = operator_new__((ulong)uVar7 << 2);
  param_1[3] = (long)pvVar2;
  puVar3 = operator_new__((ulong)uVar6 << 3);
  param_1[4] = (long)puVar3;
  if (uVar7 != 0) {
    _bzero(pvVar2,(ulong)uVar7 << 2);
  }
  if (uVar6 != 0) {
    *puVar3 = 0;
    if (uVar6 != 1) {
      uVar4 = 1;
      do {
        *(undefined8 *)(param_1[4] + uVar4 * 8) = 0;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    pvVar2 = (void *)param_1[3];
    puVar3 = (undefined8 *)param_1[4];
  }
  DAT_101dc1be8 = pvVar2;
  DAT_101dc1bf0 = uVar7 << 2;
  DAT_101dc1c00 = uVar6;
  DAT_101dc1bf8 = puVar3;
  DAT_101dc1bf4 = 1;
  return param_1;
}




long FUN_1010b1b3c(long param_1)

{
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x20));
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x18));
  }
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x10));
  }
  return param_1;
}




long thunk_FUN_1010b1b3c(long param_1)

{
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x20));
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x18));
  }
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x10));
  }
  return param_1;
}




bool FUN_1010b1b84(long *param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  
  lVar2 = 0;
  ppuVar3 = &PTR_s_OmniLight_Position_101873208;
  do {
    iVar1 = _strcmp(param_2,*ppuVar3);
    if (iVar1 == 0) goto LAB_1010b1bcc;
    lVar2 = lVar2 + 1;
    ppuVar3 = ppuVar3 + 3;
  } while (lVar2 != 0x17);
  lVar2 = 0xffffffff;
LAB_1010b1bcc:
  return *(int *)(*param_1 + lVar2 * 0x18 + 8) == 4;
}




long FUN_1010b1bf4(undefined8 param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  
  lVar2 = 0;
  ppuVar3 = &PTR_s_OmniLight_Position_101873208;
  do {
    iVar1 = _strcmp(param_2,*ppuVar3);
    if (iVar1 == 0) {
      return lVar2;
    }
    lVar2 = lVar2 + 1;
    ppuVar3 = ppuVar3 + 3;
  } while (lVar2 != 0x17);
  return 0xffffffff;
}




long FUN_1010b1c4c(undefined8 param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  
  lVar2 = 0;
  ppuVar3 = &PTR_s_OmniLight_Position_101873208;
  do {
    iVar1 = _strcmp(param_2,*ppuVar3);
    if (iVar1 == 0) {
      return lVar2;
    }
    lVar2 = lVar2 + 1;
    ppuVar3 = ppuVar3 + 3;
  } while (lVar2 != 0x17);
  return 0xffffffff;
}




long FUN_1010b1ca4(long *param_1,uint param_2,int param_3)

{
  return param_1[3] +
         ((ulong)(uint)(*(int *)(&DAT_1013a20fc +
                                (ulong)*(uint *)(*param_1 + (ulong)param_2 * 0x18 + 8) * 4) *
                       param_3) + (long)*(int *)(param_1[2] + (ulong)param_2 * 4)) * 4;
}




long FUN_1010b1cd8(long param_1,uint param_2,uint param_3)

{
  return *(long *)(param_1 + 0x20) +
         ((long)*(int *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 4) + (ulong)param_3) * 8;
}




void FUN_1010b1cf0(long *param_1,uint param_2,int param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  lVar1 = param_1[3] +
          ((ulong)(uint)(*(int *)(&DAT_1013a20fc +
                                 (ulong)*(uint *)(*param_1 + (ulong)param_2 * 0x18 + 8) * 4) *
                        param_3) + (long)*(int *)(param_1[2] + (ulong)param_2 * 4)) * 4;
  do {
    if (*(float *)(lVar1 + lVar2) != *(float *)(param_4 + lVar2)) {
      DAT_101dc1bf4 = 1;
    }
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0xc);
  lVar2 = 0;
  do {
    *(undefined4 *)(lVar1 + lVar2) = *(undefined4 *)(param_4 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0xc);
  return;
}




void FUN_1010b1d6c(long *param_1,uint param_2,int param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  lVar1 = param_1[3] +
          ((ulong)(uint)(*(int *)(&DAT_1013a20fc +
                                 (ulong)*(uint *)(*param_1 + (ulong)param_2 * 0x18 + 8) * 4) *
                        param_3) + (long)*(int *)(param_1[2] + (ulong)param_2 * 4)) * 4;
  do {
    if (*(float *)(lVar1 + lVar2) != *(float *)(param_4 + lVar2)) {
      DAT_101dc1bf4 = 1;
    }
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(lVar1 + lVar2) = *(undefined4 *)(param_4 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  return;
}




long FUN_1010b1de8(long *param_1,char *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  
  lVar2 = 0;
  ppuVar3 = &PTR_s_OmniLight_Position_101873208;
  do {
    iVar1 = _strcmp(param_2,*ppuVar3);
    if (iVar1 == 0) goto LAB_1010b1e38;
    lVar2 = lVar2 + 1;
    ppuVar3 = ppuVar3 + 3;
  } while (lVar2 != 0x17);
  lVar2 = 0xffffffff;
LAB_1010b1e38:
  return param_1[3] +
         ((ulong)(uint)(*(int *)(&DAT_1013a20fc + (ulong)*(uint *)(*param_1 + lVar2 * 0x18 + 8) * 4)
                       * param_3) + (long)*(int *)(param_1[2] + lVar2 * 4)) * 4;
}




void FUN_1010b1e7c(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  
  lVar2 = 0;
  ppuVar3 = &PTR_s_OmniLight_Position_101873208;
  do {
    iVar1 = _strcmp(param_2,*ppuVar3);
    if (iVar1 == 0) goto LAB_1010b1ed0;
    lVar2 = lVar2 + 1;
    ppuVar3 = ppuVar3 + 3;
  } while (lVar2 != 0x17);
  lVar2 = 0xffffffff;
LAB_1010b1ed0:
  FUN_1010b1cf0(param_1,lVar2,param_3,param_4);
  return;
}




void FUN_1010b1ef4(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  
  lVar2 = 0;
  ppuVar3 = &PTR_s_OmniLight_Position_101873208;
  do {
    iVar1 = _strcmp(param_2,*ppuVar3);
    if (iVar1 == 0) goto LAB_1010b1f48;
    lVar2 = lVar2 + 1;
    ppuVar3 = ppuVar3 + 3;
  } while (lVar2 != 0x17);
  lVar2 = 0xffffffff;
LAB_1010b1f48:
  FUN_1010b1d6c(param_1,lVar2,param_3,param_4);
  return;
}




void FUN_1010b1f6c(long param_1,char *param_2,ulong param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  
  lVar2 = 0;
  ppuVar3 = &PTR_s_OmniLight_Position_101873208;
  do {
    iVar1 = _strcmp(param_2,*ppuVar3);
    if (iVar1 == 0) goto LAB_1010b1fc0;
    lVar2 = lVar2 + 1;
    ppuVar3 = ppuVar3 + 3;
  } while (lVar2 != 0x17);
  lVar2 = 0xffffffff;
LAB_1010b1fc0:
  lVar2 = (long)*(int *)(*(long *)(param_1 + 0x10) + lVar2 * 4) + (param_3 & 0xffffffff);
  if (*(long *)(*(long *)(param_1 + 0x20) + lVar2 * 8) != param_4) {
    DAT_101dc1bf4 = 1;
  }
  *(long *)(*(long *)(param_1 + 0x20) + lVar2 * 8) = param_4;
  return;
}




void FUN_1010b2004(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10182e6e0;
  param_1[8] = 0x3f80000000000000;
  param_1[7] = 0;
  param_1[6] = 0x3f800000;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0x3f80000000000000;
  param_1[2] = 0;
  param_1[1] = 0x3f800000;
  param_1[10] = 0;
  param_1[9] = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xb] = 0x3f80000000000000;
  param_1[0xe] = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0x10] = 0x3f80000000000000;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x13] = 0;
  return;
}




void FUN_1010b2058(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10182e6e0;
  param_1[8] = 0x3f80000000000000;
  param_1[7] = 0;
  param_1[6] = 0x3f800000;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0x3f80000000000000;
  param_1[2] = 0;
  param_1[1] = 0x3f800000;
  param_1[10] = 0;
  param_1[9] = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xb] = 0x3f80000000000000;
  param_1[0xe] = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0x10] = 0x3f80000000000000;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x13] = 0;
  return;
}




undefined8 * FUN_1010b20ac(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar4) {
      *param_2 = 100;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar1 = param_2[10];
  piVar11 = param_2 + (ulong)uVar1 * 4 + 2;
  pvVar9 = *(void **)piVar11;
  if ((pvVar9 == (void *)0x0) ||
     (uVar5 = (ulong)*(uint *)((long)pvVar9 + 0x20000), pvVar7 = pvVar9,
     *(uint *)((long)pvVar9 + 0x20000) < 0xaf)) {
    pvVar7 = *(void **)(param_2 + (ulong)uVar1 * 4 + 4);
    if (pvVar7 == (void *)0x0) {
      pvVar7 = operator_new(0x20010);
      uVar5 = 0x20000;
      *(undefined4 *)((long)pvVar7 + 0x20000) = 0x20000;
      *(void **)((long)pvVar7 + 0x20008) = pvVar9;
      *(void **)piVar11 = pvVar7;
    }
    else {
      uVar6 = *(undefined8 *)((long)pvVar7 + 0x20008);
      *(void **)((long)pvVar7 + 0x20008) = pvVar9;
      *(void **)piVar11 = pvVar7;
      *(undefined8 *)(param_2 + (ulong)uVar1 * 4 + 4) = uVar6;
      uVar5 = 0x20000;
      *(undefined4 *)((long)pvVar7 + 0x20000) = 0x20000;
    }
  }
  *(int *)((long)pvVar7 + 0x20000) = (int)uVar5 + -0xaf;
  puVar10 = (undefined8 *)((long)pvVar7 + 0x20000 + (7 - uVar5) & 0xfffffffffffffff8);
  *param_2 = 0;
  *puVar10 = &PTR_FUN_10182e6e0;
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  puVar10[4] = *(undefined8 *)(param_1 + 0x20);
  puVar10[3] = uVar13;
  puVar10[2] = uVar12;
  puVar10[1] = uVar6;
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar14 = *(undefined8 *)(param_1 + 0x40);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  uVar16 = *(undefined8 *)(param_1 + 0x50);
  uVar15 = *(undefined8 *)(param_1 + 0x48);
  uVar17 = *(undefined8 *)(param_1 + 0x58);
  puVar10[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar10[0xb] = uVar17;
  puVar10[10] = uVar16;
  puVar10[9] = uVar15;
  puVar10[8] = uVar14;
  puVar10[7] = uVar13;
  puVar10[6] = uVar12;
  puVar10[5] = uVar6;
  uVar12 = *(undefined8 *)(param_1 + 0x70);
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  uVar14 = *(undefined8 *)(param_1 + 0x80);
  uVar13 = *(undefined8 *)(param_1 + 0x78);
  uVar16 = *(undefined8 *)(param_1 + 0x90);
  uVar15 = *(undefined8 *)(param_1 + 0x88);
  uVar17 = *(undefined8 *)(param_1 + 0x94);
  *(undefined8 *)((long)puVar10 + 0x9c) = *(undefined8 *)(param_1 + 0x9c);
  *(undefined8 *)((long)puVar10 + 0x94) = uVar17;
  puVar10[0x12] = uVar16;
  puVar10[0x11] = uVar15;
  puVar10[0x10] = uVar14;
  puVar10[0xf] = uVar13;
  puVar10[0xe] = uVar12;
  puVar10[0xd] = uVar6;
  pvVar9 = *(void **)(param_1 + 0x88);
  if (pvVar9 != (void *)0x0) {
    do {
      while (*param_2 != 0) {
        ClearExclusiveLocal();
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar4) {
        *param_2 = 100;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar1 = param_2[10];
    piVar11 = param_2 + (ulong)uVar1 * 4 + 2;
    pvVar7 = *(void **)piVar11;
    if ((pvVar7 == (void *)0x0) ||
       (uVar5 = (ulong)*(uint *)((long)pvVar7 + 0x20000), pvVar8 = pvVar7,
       *(uint *)((long)pvVar7 + 0x20000) < 0x107)) {
      pvVar8 = *(void **)(param_2 + (ulong)uVar1 * 4 + 4);
      if (pvVar8 == (void *)0x0) {
        pvVar8 = operator_new(0x20010);
        uVar5 = 0x20000;
        *(undefined4 *)((long)pvVar8 + 0x20000) = 0x20000;
        *(void **)((long)pvVar8 + 0x20008) = pvVar7;
        *(void **)piVar11 = pvVar8;
      }
      else {
        uVar6 = *(undefined8 *)((long)pvVar8 + 0x20008);
        *(void **)((long)pvVar8 + 0x20008) = pvVar7;
        *(void **)piVar11 = pvVar8;
        *(undefined8 *)(param_2 + (ulong)uVar1 * 4 + 4) = uVar6;
        uVar5 = 0x20000;
        *(undefined4 *)((long)pvVar8 + 0x20000) = 0x20000;
      }
    }
    *(int *)((long)pvVar8 + 0x20000) = (int)uVar5 + -0x107;
    pvVar7 = (void *)((long)pvVar8 + 0x20000 + (3 - uVar5) & 0xfffffffffffffffc);
    *param_2 = 0;
    _memmove(pvVar7,pvVar9,0x104);
    puVar10[0x11] = pvVar7;
  }
  pvVar9 = *(void **)(param_1 + 0x98);
  if (pvVar9 != (void *)0x0) {
    uVar1 = *(uint *)(param_1 + 0xa0);
    if (uVar1 != 0) {
      do {
        while (*param_2 != 0) {
          ClearExclusiveLocal();
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
        if (bVar4) {
          *param_2 = 100;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar2 = param_2[10];
      piVar11 = param_2 + (ulong)uVar2 * 4 + 2;
      pvVar7 = *(void **)piVar11;
      if ((pvVar7 == (void *)0x0) ||
         (uVar5 = (ulong)*(uint *)((long)pvVar7 + 0x20000), pvVar8 = pvVar7,
         *(uint *)((long)pvVar7 + 0x20000) < uVar1)) {
        pvVar8 = *(void **)(param_2 + (ulong)uVar2 * 4 + 4);
        if (pvVar8 == (void *)0x0) {
          pvVar8 = operator_new(0x20010);
          uVar5 = 0x20000;
          *(undefined4 *)((long)pvVar8 + 0x20000) = 0x20000;
          *(void **)((long)pvVar8 + 0x20008) = pvVar7;
          *(void **)piVar11 = pvVar8;
        }
        else {
          uVar6 = *(undefined8 *)((long)pvVar8 + 0x20008);
          *(void **)((long)pvVar8 + 0x20008) = pvVar7;
          *(void **)piVar11 = pvVar8;
          *(undefined8 *)(param_2 + (ulong)uVar2 * 4 + 4) = uVar6;
          uVar5 = 0x20000;
          *(undefined4 *)((long)pvVar8 + 0x20000) = 0x20000;
        }
      }
      pvVar7 = (void *)(((long)pvVar8 + 0x20000) - uVar5);
      *(uint *)((long)pvVar8 + 0x20000) = (int)uVar5 - uVar1;
      *param_2 = 0;
      _memmove(pvVar7,pvVar9,(ulong)uVar1);
      puVar10[0x13] = pvVar7;
    }
  }
  return puVar10;
}




void FUN_1010b2384(long param_1)

{
  FUN_1010b53c4(0,&DAT_1013cd78c);
  FUN_1010b53c4(1,param_1 + 8);
  FUN_1010b53c4(2,param_1 + 0x48);
  if (*(code **)(param_1 + 0x90) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001010b23d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x90))(param_1,*(undefined8 *)(param_1 + 0x98));
    return;
  }
  return;
}




void FUN_1010b23e4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x90) = param_2;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}




void FUN_1010b23f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10182e708;
  param_1[1] = DAT_101ea5b30;
  DAT_101ea5b30 = param_1;
  return;
}




void FUN_1010b240c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_10182e708;
  puVar1 = &DAT_101ea5b30;
  do {
    puVar2 = (undefined8 *)*puVar1;
    puVar1 = puVar2 + 1;
  } while (puVar2 != (undefined8 *)0x0 && puVar2 != param_1);
  if (DAT_101ea5b30 != param_1) {
    return;
  }
  DAT_101ea5b30 = (undefined8 *)param_1[1];
  return;
}




void FUN_1010b2454(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010b2458);
  (*pcVar1)();
}




void FUN_1010b2458(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010b245c);
  (*pcVar1)();
}




void FUN_1010b245c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined4 uVar1;
  
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = 0;
  *(uint *)((long)param_1 + 0x44) = *(uint *)((long)param_1 + 0x44) & 0x1fffffff;
  *param_1 = &PTR_FUN_10182e750;
  param_1[9] = param_2;
  param_1[10] = param_3;
  param_1[0xb] = param_4;
  param_1[0xc] = &PTR_FUN_10182e7b0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar1 = 0x80000001;
  if (param_7 == 0) {
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0x11) = uVar1;
  return;
}




void FUN_1010b24ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  uint uVar1;
  
  param_1[3] = param_6;
  param_1[4] = param_7;
  param_1[5] = 0;
  *(uint *)((long)param_1 + 0x44) = *(uint *)((long)param_1 + 0x44) & 0x1fffffff;
  *param_1 = &PTR_FUN_10182e750;
  param_1[9] = param_2;
  param_1[10] = param_3;
  param_1[0xb] = param_5;
  param_1[0xc] = &PTR_FUN_10182e7b0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar1 = 0x80000000;
  if (param_8 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x11) = uVar1 | param_4 & 0x3fffffff | 0x40000000;
  return;
}




void FUN_1010b2504(void)

{
  return;
}




void FUN_1010b2508(void)

{
  return;
}




undefined8 * FUN_1010b2510(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *pvVar9;
  void *pvVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar4) {
      *param_2 = 100;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar1 = param_2[10];
  piVar12 = param_2 + (ulong)uVar1 * 4 + 2;
  pvVar10 = *(void **)piVar12;
  if ((pvVar10 == (void *)0x0) ||
     (uVar6 = (ulong)*(uint *)((long)pvVar10 + 0x20000), pvVar9 = pvVar10,
     *(uint *)((long)pvVar10 + 0x20000) < 0x97)) {
    pvVar9 = *(void **)(param_2 + (ulong)uVar1 * 4 + 4);
    if (pvVar9 == (void *)0x0) {
      pvVar9 = operator_new(0x20010);
      uVar6 = 0x20000;
      *(undefined4 *)((long)pvVar9 + 0x20000) = 0x20000;
      *(void **)((long)pvVar9 + 0x20008) = pvVar10;
      *(void **)piVar12 = pvVar9;
    }
    else {
      uVar7 = *(undefined8 *)((long)pvVar9 + 0x20008);
      *(void **)((long)pvVar9 + 0x20008) = pvVar10;
      *(void **)piVar12 = pvVar9;
      *(undefined8 *)(param_2 + (ulong)uVar1 * 4 + 4) = uVar7;
      uVar6 = 0x20000;
      *(undefined4 *)((long)pvVar9 + 0x20000) = 0x20000;
    }
  }
  *(int *)((long)pvVar9 + 0x20000) = (int)uVar6 + -0x97;
  puVar11 = (undefined8 *)((long)pvVar9 + 0x20000 + (7 - uVar6) & 0xfffffffffffffff8);
  *param_2 = 0;
  *puVar11 = &PTR____cxa_pure_virtual_10182e8c0;
  uVar7 = *(undefined8 *)(param_1 + 8);
  puVar11[2] = *(undefined8 *)(param_1 + 0x10);
  puVar11[1] = uVar7;
  *puVar11 = &PTR_FUN_10182e7f8;
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar15 = *(undefined8 *)(param_1 + 0x30);
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  uVar16 = *(undefined8 *)(param_1 + 0x38);
  puVar11[8] = *(undefined8 *)(param_1 + 0x40);
  puVar11[7] = uVar16;
  puVar11[6] = uVar15;
  puVar11[5] = uVar14;
  puVar11[4] = uVar13;
  puVar11[3] = uVar7;
  *puVar11 = &PTR_FUN_10182e750;
  uVar13 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  puVar11[10] = *(undefined8 *)(param_1 + 0x50);
  puVar11[9] = uVar13;
  puVar11[0xb] = uVar7;
  puVar11[0xc] = &PTR_FUN_10182e7b0;
  *(undefined4 *)(puVar11 + 0xd) = 0;
  uVar7 = *(undefined8 *)(param_1 + 0x78);
  puVar11[0xe] = *(undefined8 *)(param_1 + 0x70);
  puVar11[0xf] = uVar7;
  *(undefined4 *)(puVar11 + 0x10) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(puVar11 + 0x11) = *(undefined4 *)(param_1 + 0x88);
  puVar5 = *(undefined8 **)(param_1 + 0x18);
  if (puVar5 != (undefined8 *)0x0) {
    uVar7 = (**(code **)*puVar5)(puVar5,param_2);
    puVar11[3] = uVar7;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x20);
  if (puVar5 != (undefined8 *)0x0) {
    uVar7 = (**(code **)*puVar5)(puVar5,param_2);
    puVar11[4] = uVar7;
  }
  uVar1 = *(uint *)(param_1 + 0x88);
  if ((uVar1 >> 0x1e & 1) != 0) {
    do {
      while (*param_2 != 0) {
        ClearExclusiveLocal();
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar4) {
        *param_2 = 100;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar2 = param_2[10];
    piVar12 = param_2 + (ulong)uVar2 * 4 + 2;
    pvVar10 = *(void **)piVar12;
    uVar1 = uVar1 << 3 | 7;
    if ((pvVar10 == (void *)0x0) ||
       (uVar6 = (ulong)*(uint *)((long)pvVar10 + 0x20000), pvVar9 = pvVar10,
       *(uint *)((long)pvVar10 + 0x20000) < uVar1)) {
      pvVar9 = *(void **)(param_2 + (ulong)uVar2 * 4 + 4);
      if (pvVar9 == (void *)0x0) {
        pvVar9 = operator_new(0x20010);
        uVar6 = 0x20000;
        *(undefined4 *)((long)pvVar9 + 0x20000) = 0x20000;
        *(void **)((long)pvVar9 + 0x20008) = pvVar10;
        *(void **)piVar12 = pvVar9;
      }
      else {
        uVar7 = *(undefined8 *)((long)pvVar9 + 0x20008);
        *(void **)((long)pvVar9 + 0x20008) = pvVar10;
        *(void **)piVar12 = pvVar9;
        *(undefined8 *)(param_2 + (ulong)uVar2 * 4 + 4) = uVar7;
        uVar6 = 0x20000;
        *(undefined4 *)((long)pvVar9 + 0x20000) = 0x20000;
      }
    }
    *(int *)((long)pvVar9 + 0x20000) = (int)uVar6 - uVar1;
    uVar6 = (long)pvVar9 + 0x20000 + (7 - uVar6) & 0xfffffffffffffff8;
    *param_2 = 0;
    if ((*(uint *)(param_1 + 0x88) & 0x3fffffff) != 0) {
      uVar8 = 0;
      do {
        *(undefined8 *)(uVar6 + uVar8 * 8) = *(undefined8 *)(*(long *)(param_1 + 0x50) + uVar8 * 8);
        uVar8 = uVar8 + 1;
      } while (uVar8 < ((ulong)*(uint *)(param_1 + 0x88) & 0x3fffffff));
    }
    puVar11[10] = uVar6;
  }
  return puVar11;
}




void FUN_1010b279c(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar2 = *(uint *)(param_1 + 0x88);
  puVar3 = (undefined8 *)(param_1 + 0x50);
  if ((uVar2 >> 0x1e & 1) != 0) {
    puVar3 = (undefined8 *)*puVar3;
  }
  if (param_3 == (long *)0x0) {
    if ((uVar2 & 0x3fffffff) != 0) {
      lVar4 = 0;
      do {
        plVar1 = *(long **)(puVar3[lVar4] + 8);
        (**(code **)(*plVar1 + 0x10))
                  (plVar1,param_2,*(undefined8 *)(param_1 + 0x58),param_1,puVar3[lVar4],
                   param_1 + 0x60);
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < (*(uint *)(param_1 + 0x88) & 0x3fffffff));
    }
  }
  else if ((uVar2 & 0x3fffffff) != 0) {
    lVar4 = 0;
    do {
      if (*(long **)(puVar3[lVar4] + 8) == param_3) {
        (**(code **)(*param_3 + 0x10))
                  (param_3,param_2,*(undefined8 *)(param_1 + 0x58),param_1,puVar3[lVar4],
                   param_1 + 0x60);
        uVar2 = *(uint *)(param_1 + 0x88);
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < (uVar2 & 0x3fffffff));
  }
  return;
}




void FUN_1010b287c(long param_1)

{
  if (-1 < *(int *)(param_1 + 0x88)) {
    return;
  }
  FUN_1010b2890(param_1 + 0x60);
  return;
}




void FUN_1010b2890(long param_1)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long alStack_40 [2];
  
  alStack_40[1] = *(long *)PTR____stack_chk_guard_101444218;
  uVar3 = *(uint *)(param_1 + 0x20);
  if (uVar3 != 0) {
    plVar9 = alStack_40 + (ulong)uVar3 * -2;
    plVar10 = (long *)(param_1 + 0x10);
    plVar2 = plVar9;
    for (lVar8 = *plVar10; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x10)) {
      *plVar2 = *(long *)(lVar8 + 0x18);
      plVar2[1] = lVar8;
      plVar2 = plVar2 + 2;
    }
    iVar6 = uVar3 - 1;
    if (uVar3 == 0 || iVar6 == 0) {
      uVar3 = 1;
    }
    FUN_1010b2afc(plVar9,0,iVar6);
    uVar7 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    piVar1 = (int *)(param_1 + 8);
    *plVar10 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    do {
      lVar8 = plVar9[1];
      do {
        while (*piVar1 != 0) {
          ClearExclusiveLocal();
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = 100;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar2 = plVar10;
      if (*(long *)(param_1 + 0x10) != 0) {
        plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x10);
      }
      *plVar2 = lVar8;
      *(long *)(param_1 + 0x18) = lVar8;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      *(undefined4 *)(param_1 + 8) = 0;
      uVar7 = uVar7 + 1;
      plVar9 = plVar9 + 2;
    } while (uVar7 != uVar3);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == alStack_40[1]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void thunk_FUN_1010b29a4(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x44);
  lVar1 = 0;
  if ((uVar2 & 0x20000000) != 0) {
    lVar1 = param_1 + 0x30;
  }
  uVar4 = 0xbf800000;
  if ((uVar2 >> 0x1e & 1) != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x40);
  }
  iVar3 = (int)(uVar2 << 3) >> 3;
  if (-1 < (int)uVar2) {
    iVar3 = -1;
  }
  (**(code **)(**(long **)(param_1 + 0x18) + 8))(uVar4,*(long **)(param_1 + 0x18),lVar1,iVar3);
  (**(code **)(**(long **)(param_1 + 0x20) + 8))();
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001010b2a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))(param_1);
    return;
  }
  return;
}




void FUN_1010b29a4(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x44);
  lVar1 = 0;
  if ((uVar2 & 0x20000000) != 0) {
    lVar1 = param_1 + 0x30;
  }
  uVar4 = 0xbf800000;
  if ((uVar2 >> 0x1e & 1) != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x40);
  }
  iVar3 = (int)(uVar2 << 3) >> 3;
  if (-1 < (int)uVar2) {
    iVar3 = -1;
  }
  (**(code **)(**(long **)(param_1 + 0x18) + 8))(uVar4,*(long **)(param_1 + 0x18),lVar1,iVar3);
  (**(code **)(**(long **)(param_1 + 0x20) + 8))();
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001010b2a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))(param_1);
    return;
  }
  return;
}




void FUN_1010b2a20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001010b2a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x58) + 0x18))(*(long **)(param_1 + 0x58),param_1 + 0x60);
  return;
}




void FUN_1010b2a38(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  for (plVar2 = *(long **)(param_2 + 0x10); plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    lVar1 = plVar2[1];
    (**(code **)*plVar2)(plVar2);
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0x20))(param_1,lVar1);
    }
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return;
}




void FUN_1010b2aa4(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 8);
  do {
    while (*piVar1 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (*(long *)(param_1 + 0x10) == 0) {
    *(long *)(param_1 + 0x10) = param_2;
  }
  else {
    *(long *)(*(long *)(param_1 + 0x18) + 0x10) = param_2;
  }
  *(long *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}




void FUN_1010b2afc(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar6;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar5;
  ulong *puVar7;
  
  do {
    iVar1 = param_3 + param_2;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    iVar8 = param_2;
    iVar2 = param_3;
    if (param_2 <= param_3) {
      uVar3 = *(ulong *)(param_1 +
                        (-(ulong)((uint)(iVar1 >> 1) >> 0x1f) & 0xfffffff000000000 |
                        (ulong)(uint)(iVar1 >> 1) << 4));
      do {
        puVar4 = (ulong *)(param_1 + -0x10 + (long)iVar8 * 0x10);
        iVar1 = iVar8;
        do {
          iVar8 = iVar1;
          puVar5 = puVar4;
          puVar4 = puVar5 + 2;
          iVar1 = iVar8 + 1;
        } while (*puVar4 < uVar3);
        puVar6 = (ulong *)(param_1 + 0x10 + (long)iVar2 * 0x10);
        iVar1 = iVar2;
        do {
          iVar2 = iVar1;
          puVar7 = puVar6;
          puVar6 = puVar7 + -2;
          iVar1 = iVar2 + -1;
        } while (uVar3 < *puVar6);
        if (iVar8 <= iVar2) {
          uVar10 = puVar5[3];
          uVar9 = *puVar4;
          uVar11 = *puVar6;
          puVar5[3] = puVar7[-1];
          *puVar4 = uVar11;
          puVar7[-1] = uVar10;
          *puVar6 = uVar9;
          iVar8 = iVar8 + 1;
          iVar2 = iVar2 + -1;
        }
      } while (iVar8 <= iVar2);
    }
    if (param_2 < iVar2) {
      FUN_1010b2afc(param_1);
    }
    param_2 = iVar8;
  } while (iVar8 < param_3);
  return;
}




void FUN_1010b2bf8(undefined8 param_1)

{
  DAT_101dc0d18 = operator_new(0x4010);
  *DAT_101dc0d18 = 0;
  DAT_101dc0d18[0x1002] = 0;
  DAT_101ea5b38 = operator_new(0x38);
  *DAT_101ea5b38 = 0;
  DAT_101ea5b38[1] = 0;
  *(undefined4 *)(DAT_101ea5b38 + 2) = 0;
  DAT_101ea5b38[3] = 0;
  DAT_101ea5b38[4] = 0;
  *(undefined4 *)(DAT_101ea5b38 + 5) = 0;
  DAT_101ea5b38[6] = param_1;
  FUN_1010b2c58();
  FUN_1010b2cbc();
  return;
}




void FUN_1010b2c58(void)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_1004e4bc0();
  if (iVar1 != 0) {
    pvVar2 = operator_new(0xd8);
    DAT_101ea5c80 = thunk_FUN_1004e63dc(pvVar2,1,FUN_1010a1cec,"Render thread",2);
    FUN_1004e4e60(&DAT_101ea5b40,2,PTR_s___Render_Serial_Queue_101867468);
    return;
  }
  return;
}




void FUN_1010b2cbc(void)

{
  int iVar1;
  
  iVar1 = FUN_1004e4bc0();
  if (iVar1 != 0) {
    FUN_1004e4e60(&DAT_101ea5c90,1,"DispatchQueue_RenderEval");
    FUN_1004e55c8(&DAT_101ea5c90);
    return;
  }
  return;
}




void FUN_1010b2d08(void)

{
  void *pvVar1;
  
  FUN_1010b2d54();
  FUN_1010b2da4();
  if (DAT_101ea5b38 != 0) {
    pvVar1 = (void *)FUN_1010b330c();
    operator_delete(pvVar1);
  }
  DAT_101ea5b38 = 0;
  if (DAT_101dc0d18 != (void *)0x0) {
    operator_delete(DAT_101dc0d18);
  }
  DAT_101dc0d18 = (void *)0x0;
  return;
}




void FUN_1010b2d54(void)

{
  int iVar1;
  
  FUN_1004e5918(&DAT_101ea5c90,0,0);
  iVar1 = FUN_1004e4ecc(&DAT_101ea5c90);
  if (iVar1 != 0) {
    FUN_1004e4edc(&DAT_101ea5c90);
    return;
  }
  return;
}




void FUN_1010b2da4(void)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_1004e4ecc(&DAT_101ea5b40);
  if (iVar1 != 0) {
    FUN_1004e5ff0(&DAT_101ea5b40,1);
    FUN_1004e4edc(&DAT_101ea5b40);
    if (DAT_101ea5c80 != 0) {
      pvVar2 = (void *)thunk_FUN_1004e6660();
      operator_delete(pvVar2);
    }
    DAT_101ea5c80 = 0;
  }
  return;
}




void FUN_1010b2dfc(long *param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = (**(code **)*param_2)(param_2,param_1[6]);
  if (param_3 == 0) {
    plVar4 = param_1 + 1;
    lVar3 = *plVar4;
    *(undefined8 *)(lVar2 + 8) = 0;
    *(long *)(lVar2 + 0x10) = lVar3;
    plVar1 = param_1;
    if (*param_1 != 0) {
      plVar1 = (long *)(lVar3 + 8);
    }
    *plVar1 = lVar2;
  }
  else {
    lVar3 = *param_1;
    *(long *)(lVar2 + 8) = lVar3;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    if (lVar3 == 0) {
      plVar4 = param_1 + 1;
      *param_1 = lVar2;
    }
    else {
      *(long *)(lVar3 + 0x10) = lVar2;
      plVar4 = param_1;
    }
  }
  *plVar4 = lVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1010b2e8c(undefined8 param_1)

{
  ulong uVar1;
  
  FUN_1010b345c();
  uVar1 = FUN_1004e5330(&DAT_101ea5b40);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1010b3028(param_1);
  return;
}




undefined8 FUN_1010b2ecc(void)

{
  return DAT_101ea5b38;
}




void FUN_1010b2edc(void)

{
  int iVar1;
  
  iVar1 = FUN_1004e4ecc(&DAT_101ea5b40);
  if (iVar1 != 0) {
    if ((DAT_101ea5c80 != 0) && (iVar1 = FUN_1004e5330(&DAT_101ea5b40), iVar1 != 0)) {
      FUN_1010b2f64();
      FUN_1004e5208(&DAT_101ea5b40);
      FUN_1004e51c4(&DAT_101ea5b40);
    }
    iVar1 = FUN_1004e51b4(&DAT_101ea5b40);
    if (iVar1 != 0) {
      FUN_1004e5ff0(&DAT_101ea5b40,0);
      return;
    }
  }
  return;
}




void FUN_1010b2f64(void)

{
  int iVar1;
  
  iVar1 = FUN_1004e4ecc(&DAT_101ea5b40);
  if ((iVar1 != 0) && (iVar1 = FUN_1004e5330(&DAT_101ea5b40), iVar1 != 0)) {
    FUN_1004e51fc(&DAT_101ea5b40);
    return;
  }
  return;
}




void FUN_1010b2fa4(void)

{
  int iVar1;
  
  iVar1 = FUN_1004e51b4(&DAT_101ea5b40);
  if (iVar1 != 0) {
    FUN_1004e51c4(&DAT_101ea5b40);
    return;
  }
  return;
}




void FUN_1010b2fd4(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_1004e5330(&DAT_101ea5b40);
  if ((uVar1 & 1) != 0) {
    FUN_1010b2f64();
    FUN_1004e57e0(&DAT_101ea5b40,thunk_FUN_1010b3028,param_1);
    return;
  }
  FUN_1010b3028(param_1);
  return;
}




void FUN_1010b3028(long param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  plVar9 = (long *)(param_1 + 0x18);
  for (plVar8 = (long *)*plVar9; plVar4 = DAT_101ea5b30, plVar8 != (long *)0x0;
      plVar8 = (long *)plVar8[1]) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  for (; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[1]) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  for (plVar8 = (long *)*plVar9; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
    (**(code **)(*plVar8 + 0x28))(plVar8);
    (**(code **)(*plVar8 + 0x38))(plVar8);
    (**(code **)(*plVar8 + 0x30))(plVar8);
  }
  *plVar9 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  for (plVar8 = DAT_101ea5b30; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
    (**(code **)(*plVar8 + 0x30))(plVar8);
  }
  uVar5 = FUN_1004e5330(&DAT_101ea5b40);
  piVar6 = *(int **)(param_1 + 0x30);
  if ((uVar5 & 1) == 0) {
    do {
      while (*piVar6 != 0) {
        ClearExclusiveLocal();
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = 100;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar1 = piVar6[10];
    uVar5 = (ulong)uVar1;
    plVar8 = (long *)(piVar6 + uVar5 * 4 + 4);
    lVar7 = *plVar8;
    while (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0x20008);
      lVar7 = *plVar8;
    }
    *plVar8 = *(long *)(piVar6 + uVar5 * 4 + 2);
    (piVar6 + uVar5 * 4 + 2)[0] = 0;
    (piVar6 + uVar5 * 4 + 2)[1] = 0;
    uVar5 = (ulong)(~uVar1 & 1);
    plVar8 = (long *)(piVar6 + uVar5 * 4 + 4);
    lVar7 = *plVar8;
    while (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0x20008);
      lVar7 = *plVar8;
    }
  }
  else {
    do {
      while (*piVar6 != 0) {
        ClearExclusiveLocal();
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = 100;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar5 = (ulong)(uint)~piVar6[10] & 1;
    plVar8 = (long *)(piVar6 + uVar5 * 4 + 4);
    lVar7 = *plVar8;
    while (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0x20008);
      lVar7 = *plVar8;
    }
  }
  *plVar8 = *(long *)(piVar6 + uVar5 * 4 + 2);
  (piVar6 + uVar5 * 4 + 2)[0] = 0;
  (piVar6 + uVar5 * 4 + 2)[1] = 0;
  *piVar6 = 0;
  return;
}




void thunk_FUN_1010b3028(void)

{
  FUN_1010b3028();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b31ec(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if ((param_2 != 0) && (iVar1 = FUN_1004e4ecc(&DAT_101ea5c90), iVar1 != 0)) {
    uRam0000000101ea5f38 = 0;
    _DAT_101ea5f30 = 0;
    uRam0000000101ea5f48 = 0;
    _DAT_101ea5f40 = 0;
    uRam0000000101ea5f18 = 0;
    _DAT_101ea5f10 = 0;
    uRam0000000101ea5f28 = 0;
    _DAT_101ea5f20 = 0;
    uRam0000000101ea5ef8 = 0;
    _DAT_101ea5ef0 = 0;
    uRam0000000101ea5f08 = 0;
    _DAT_101ea5f00 = 0;
    uRam0000000101ea5ed8 = 0;
    _DAT_101ea5ed0 = 0;
    uRam0000000101ea5ee8 = 0;
    _DAT_101ea5ee0 = 0;
    uRam0000000101ea5eb8 = 0;
    _DAT_101ea5eb0 = 0;
    uRam0000000101ea5ec8 = 0;
    _DAT_101ea5ec0 = 0;
    uRam0000000101ea5e98 = 0;
    _DAT_101ea5e90 = 0;
    uRam0000000101ea5ea8 = 0;
    _DAT_101ea5ea0 = 0;
    uRam0000000101ea5e78 = 0;
    _DAT_101ea5e70 = 0;
    uRam0000000101ea5e88 = 0;
    _DAT_101ea5e80 = 0;
    uRam0000000101ea5e58 = 0;
    _DAT_101ea5e50 = 0;
    uRam0000000101ea5e68 = 0;
    _DAT_101ea5e60 = 0;
    uRam0000000101ea5e38 = 0;
    _DAT_101ea5e30 = 0;
    uRam0000000101ea5e48 = 0;
    _DAT_101ea5e40 = 0;
    uRam0000000101ea5e18 = 0;
    _DAT_101ea5e10 = 0;
    uRam0000000101ea5e28 = 0;
    _DAT_101ea5e20 = 0;
    uRam0000000101ea5df8 = 0;
    _DAT_101ea5df0 = 0;
    uRam0000000101ea5e08 = 0;
    _DAT_101ea5e00 = 0;
    DAT_101ea5dd8 = 0;
    DAT_101ea5dd0 = 0;
    uRam0000000101ea5de8 = 0;
    DAT_101ea5de0 = 0;
    if (DAT_101ea5b30 != 0) {
      uVar3 = 0;
      lVar2 = DAT_101ea5b30;
      do {
        lVar4 = *(long *)(lVar2 + 8);
        (&DAT_101ea5dd0)[uVar3 * 3] = param_1;
        (&DAT_101ea5dd8)[uVar3 * 3] = lVar2;
        (&DAT_101ea5de0)[uVar3 * 3] = param_2;
        FUN_1004e57e0(&DAT_101ea5c90,FUN_1010b32c0);
        uVar3 = (ulong)((int)uVar3 + 1);
        lVar2 = lVar4;
      } while (lVar4 != 0);
    }
  }
  return;
}




void FUN_1010b32c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[2];
  if (plVar3 != (long *)0x0) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    do {
      (**(code **)(*plVar3 + 0x18))(plVar3,uVar1,uVar2);
      plVar3 = (long *)plVar3[1];
    } while (plVar3 != (long *)0x0);
  }
  return;
}




undefined8 * FUN_1010b330c(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  FUN_1010b2f64();
  piVar4 = DAT_101dc0d18;
  do {
    while (*piVar4 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  piVar4[0x1002] = 0;
  *piVar4 = 0;
  piVar4 = (int *)param_1[6];
  do {
    while (*piVar4 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar1 = piVar4[10];
  uVar5 = (ulong)uVar1;
  plVar6 = (long *)(piVar4 + uVar5 * 4 + 4);
  lVar7 = *plVar6;
  while (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 0x20008);
    lVar7 = *plVar6;
  }
  *plVar6 = *(long *)(piVar4 + uVar5 * 4 + 2);
  (piVar4 + uVar5 * 4 + 2)[0] = 0;
  (piVar4 + uVar5 * 4 + 2)[1] = 0;
  uVar5 = (ulong)(~uVar1 & 1);
  plVar6 = (long *)(piVar4 + uVar5 * 4 + 4);
  lVar7 = *plVar6;
  while (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 0x20008);
    lVar7 = *plVar6;
  }
  *plVar6 = *(long *)(piVar4 + uVar5 * 4 + 2);
  (piVar4 + uVar5 * 4 + 2)[0] = 0;
  (piVar4 + uVar5 * 4 + 2)[1] = 0;
  *piVar4 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}




void FUN_1010b3404(long param_1,undefined8 param_2)

{
  undefined **local_48 [3];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(param_1 + 0x30);
  local_30 = 0;
  uStack_28 = 0;
  local_48[0] = &PTR_FUN_10182e858;
  local_20 = 0;
  FUN_1010b2dfc(param_1,local_48,param_2);
  return;
}




void FUN_1010b3444(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10182e858;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}




void FUN_1010b345c(long *param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  
  FUN_1010b2f64();
  piVar8 = DAT_101dc0d18;
  for (plVar9 = DAT_101ea5b30; DAT_101dc0d18 = piVar8, plVar9 != (long *)0x0;
      plVar9 = (long *)plVar9[1]) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
    piVar8 = DAT_101dc0d18;
  }
  do {
    while (*piVar8 != 0) {
      ClearExclusiveLocal();
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar4) {
      *piVar8 = 100;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  piVar8[0x1002] = 0;
  *piVar8 = 0;
  FUN_1010b3600(param_1);
  uVar7 = FUN_1004e4ecc(&DAT_101ea5c90);
  plVar9 = (long *)*param_1;
  if ((uVar7 & 1) == 0) {
    for (; plVar5 = DAT_101ea5b30, plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
      (**(code **)(*plVar9 + 0x18))(plVar9,param_1,0);
    }
  }
  else {
    FUN_1010b31ec(param_1,plVar9);
    FUN_1004e5918(&DAT_101ea5c90,0,0);
    plVar5 = DAT_101ea5b30;
  }
  for (; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[1]) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  lVar10 = *param_1;
  while (lVar10 != 0) {
    FUN_1010b366c(param_1,lVar10);
    lVar1 = param_1[3];
    lVar2 = param_1[4];
    *(undefined8 *)(lVar10 + 8) = 0;
    *(long *)(lVar10 + 0x10) = lVar2;
    plVar9 = param_1 + 3;
    if (lVar1 != 0) {
      plVar9 = (long *)(lVar2 + 8);
    }
    *plVar9 = lVar10;
    param_1[4] = lVar10;
    *(int *)(param_1 + 5) = (int)param_1[5] + 1;
    lVar10 = *param_1;
  }
  FUN_1010b2edc();
  iVar6 = FUN_1004e5330(&DAT_101ea5b40);
  if (iVar6 != 0) {
    piVar8 = (int *)param_1[6];
    do {
      while (*piVar8 != 0) {
        ClearExclusiveLocal();
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = 100;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    piVar8[10] = ~piVar8[10] & 1;
    *piVar8 = 0;
    FUN_1010b2fd4(param_1);
    return;
  }
  return;
}




void FUN_1010b3600(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  while (plVar1 != (long *)0x0) {
    plVar3 = (long *)plVar1[1];
    plVar2 = (long *)(**(code **)(*plVar1 + 0x40))();
    plVar1 = plVar3;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x50))(plVar2,param_1,plVar2);
      FUN_1010b366c(param_1,plVar2);
    }
  }
  return;
}




void FUN_1010b366c(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 8);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0x10);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x10);
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 8);
    *(long *)(*(long *)(param_2 + 8) + 0x10) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_1010b36cc(long param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x30));
  if (param_3 == 0) {
    lVar4 = *(long *)(param_1 + 0x18);
    plVar3 = (long *)(param_1 + 0x20);
    lVar5 = *plVar3;
    *(undefined8 *)(lVar2 + 8) = 0;
    *(long *)(lVar2 + 0x10) = lVar5;
    plVar1 = (long *)(param_1 + 0x18);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar5 + 8);
    }
    *plVar1 = lVar2;
  }
  else {
    plVar3 = (long *)(param_1 + 0x18);
    lVar4 = *plVar3;
    *(long *)(lVar2 + 8) = lVar4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    if (lVar4 == 0) {
      *(long *)(param_1 + 0x18) = lVar2;
      plVar3 = (long *)(param_1 + 0x20);
    }
    else {
      *(long *)(lVar4 + 0x10) = lVar2;
    }
  }
  *plVar3 = lVar2;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}




void FUN_1010b3760(long param_1,undefined8 param_2)

{
  undefined **local_48 [3];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(param_1 + 0x30);
  local_30 = 0;
  uStack_28 = 0;
  local_48[0] = &PTR_FUN_10182e858;
  local_20 = 0;
  FUN_1010b36cc(param_1,local_48,param_2);
  return;
}




long * FUN_1010b37a0(long param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 0x18);
  plVar3 = (long *)*plVar4;
  if (plVar3 != (long *)0x0) {
    do {
      if (plVar3 == *(long **)(param_1 + 0x20)) {
        *plVar4 = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      else {
        *plVar4 = plVar3[1];
      }
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      plVar2 = (long *)(**(code **)(*plVar3 + 0x40))(plVar3);
      if (plVar2 == (long *)0x0) {
        plVar3[1] = param_3[1];
        plVar3[2] = (long)param_3;
        puVar1 = (undefined8 *)(param_2 + 8);
        if (param_3[1] != 0) {
          puVar1 = (undefined8 *)(param_3[1] + 0x10);
        }
        *puVar1 = plVar3;
        param_3[1] = (long)plVar3;
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        param_3 = plVar3;
      }
      else {
        param_3 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,param_2,param_3);
      }
      plVar3 = (long *)*plVar4;
    } while (plVar3 != (long *)0x0);
  }
  return param_3;
}




void FUN_1010b3878(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10182e7d0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0x7010100ff;
  return;
}




void FUN_1010b389c(long param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x24) = param_2;
  *(undefined2 *)(param_1 + 0x1c) = param_2;
  *(undefined2 *)(param_1 + 0x26) = param_3;
  *(undefined2 *)(param_1 + 0x1e) = param_3;
  return;
}




void FUN_1010b38b8(long param_1)

{
  FUN_1010b6884(*(undefined8 *)(param_1 + 8));
  FUN_1010b4bac(*(undefined2 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x1a),
                *(undefined2 *)(param_1 + 0x1c),*(undefined2 *)(param_1 + 0x1e));
  FUN_1010b4bd8(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22),
                *(undefined2 *)(param_1 + 0x24),*(undefined2 *)(param_1 + 0x26));
  FUN_1010b4b00(*(undefined8 *)(param_1 + 0x10));
  return;
}




void FUN_1010b3908(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1010b6b58();
  }
  FUN_1010b6884(0xbf800000,0,0,0xffffffff);
  return;
}




void FUN_1010b3934(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_1010b393c(long param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 param_5)

{
  *(undefined2 *)(param_1 + 0x20) = param_2;
  *(undefined2 *)(param_1 + 0x18) = param_2;
  *(undefined2 *)(param_1 + 0x22) = param_3;
  *(undefined2 *)(param_1 + 0x1a) = param_3;
  *(undefined2 *)(param_1 + 0x24) = param_4;
  *(undefined2 *)(param_1 + 0x1c) = param_4;
  *(undefined2 *)(param_1 + 0x26) = param_5;
  *(undefined2 *)(param_1 + 0x1e) = param_5;
  return;
}




void FUN_1010b3960(long param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 param_5)

{
  *(undefined2 *)(param_1 + 0x20) = param_2;
  *(undefined2 *)(param_1 + 0x22) = param_3;
  *(undefined2 *)(param_1 + 0x24) = param_4;
  *(undefined2 *)(param_1 + 0x26) = param_5;
  return;
}




void FUN_1010b3974(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_10182e7f8;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[5] = 0;
  *(uint *)((long)param_1 + 0x44) = *(uint *)((long)param_1 + 0x44) & 0x1fffffff;
  return;
}




undefined8 * FUN_1010b3998(long param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
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
  piVar10 = param_2 + (ulong)uVar1 * 4 + 2;
  pvVar8 = *(void **)piVar10;
  if ((pvVar8 == (void *)0x0) ||
     (uVar5 = (ulong)*(uint *)((long)pvVar8 + 0x20000), pvVar7 = pvVar8,
     *(uint *)((long)pvVar8 + 0x20000) < 0x4f)) {
    pvVar7 = *(void **)(param_2 + (ulong)uVar1 * 4 + 4);
    if (pvVar7 == (void *)0x0) {
      pvVar7 = operator_new(0x20010);
      uVar5 = 0x20000;
      *(undefined4 *)((long)pvVar7 + 0x20000) = 0x20000;
      *(void **)((long)pvVar7 + 0x20008) = pvVar8;
      *(void **)piVar10 = pvVar7;
    }
    else {
      uVar6 = *(undefined8 *)((long)pvVar7 + 0x20008);
      *(void **)((long)pvVar7 + 0x20008) = pvVar8;
      *(void **)piVar10 = pvVar7;
      *(undefined8 *)(param_2 + (ulong)uVar1 * 4 + 4) = uVar6;
      uVar5 = 0x20000;
      *(undefined4 *)((long)pvVar7 + 0x20000) = 0x20000;
    }
  }
  *(int *)((long)pvVar7 + 0x20000) = (int)uVar5 + -0x4f;
  puVar9 = (undefined8 *)((long)pvVar7 + 0x20000 + (7 - uVar5) & 0xfffffffffffffff8);
  *param_2 = 0;
  *puVar9 = &PTR____cxa_pure_virtual_10182e8c0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar9[2] = *(undefined8 *)(param_1 + 0x10);
  puVar9[1] = uVar6;
  *puVar9 = &PTR_FUN_10182e7f8;
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  puVar9[8] = *(undefined8 *)(param_1 + 0x40);
  puVar9[7] = uVar14;
  puVar9[6] = uVar13;
  puVar9[5] = uVar12;
  puVar9[4] = uVar11;
  puVar9[3] = uVar6;
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = (**(code **)*puVar4)(puVar4,param_2);
    puVar9[3] = uVar6;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = (**(code **)*puVar4)(puVar4,param_2);
    puVar9[4] = uVar6;
  }
  return puVar9;
}




void FUN_1010b3ae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001010b3af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}




void FUN_1010b3af8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  *(uint *)(param_5 + 0x44) = *(uint *)(param_5 + 0x44) | 0x20000000;
  *(undefined4 *)(param_5 + 0x30) = param_1;
  *(undefined4 *)(param_5 + 0x34) = param_2;
  *(undefined4 *)(param_5 + 0x38) = param_3;
  *(undefined4 *)(param_5 + 0x3c) = param_4;
  return;
}




void FUN_1010b3b18(undefined4 param_1,long param_2)

{
  *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) | 0x40000000;
  *(undefined4 *)(param_2 + 0x40) = param_1;
  return;
}




void FUN_1010b3b2c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_1010b3b34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001010b3b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  return;
}




void FUN_1010b3b44(void)

{
  return;
}




void FUN_1010b3b4c(void)

{
  return;
}




void FUN_1010b3b50(void)

{
  return;
}




void FUN_1010b3b54(void)

{
  return;
}




undefined8 FUN_1010b3b58(void)

{
  return 0;
}




void FUN_1010b3b60(long param_1,int *param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  
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
     *(uint *)((long)pvVar8 + 0x20000) < 0x3f)) {
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
  *(int *)((long)pvVar7 + 0x20000) = (int)uVar5 + -0x3f;
  puVar4 = (undefined8 *)((long)pvVar7 + 0x20000 + (7 - uVar5) & 0xfffffffffffffff8);
  *param_2 = 0;
  *puVar4 = &PTR____cxa_pure_virtual_10182e8c0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar6;
  *puVar4 = &PTR_FUN_10182e858;
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  puVar4[6] = *(undefined8 *)(param_1 + 0x30);
  puVar4[5] = uVar11;
  puVar4[4] = uVar10;
  puVar4[3] = uVar6;
  return;
}




void FUN_1010b3c6c(void)

{
  return;
}




void FUN_1010b3c70(void)

{
  return;
}




void FUN_1010b3c74(void)

{
  return;
}




void FUN_1010b3c78(void)

{
  return;
}




undefined8 FUN_1010b3c7c(void)

{
  return 0;
}




void FUN_1010b3c84(long param_1,int *param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  
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
  *puVar4 = &PTR_FUN_10182e7d0;
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = uVar11;
  puVar4[2] = uVar10;
  puVar4[1] = uVar6;
  return;
}




void FUN_1010b3d7c(void)

{
  thunk_FUN_1004e4dcc(&DAT_101ea5b40);
  ___cxa_atexit(thunk_FUN_1004e4e84,&DAT_101ea5b40,0x100000000);
  thunk_FUN_1004e4dcc(&DAT_101ea5c90);
  ___cxa_atexit(thunk_FUN_1004e4e84,&DAT_101ea5c90,0x100000000);
  return;
}




void FUN_1010b3de0(void)

{
  return;
}




void FUN_1010b3de4(void)

{
  void *pvVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    if (*(long *)((long)&DAT_101dc0d30 + lVar2) != 0) {
      pvVar1 = (void *)FUN_1010b7434();
      operator_delete(pvVar1);
    }
    *(undefined8 *)((long)&DAT_101dc0d30 + lVar2) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x18);
  return;
}




undefined8 FUN_1010b3e28(ulong param_1)

{
  return (&DAT_101dc0d30)[param_1 & 0xffffffff];
}




void FUN_1010b3e38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  dispatch_queue_t pdVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_48 = 0;
  uVar1 = _objc_msgSend(DAT_101dc1c78,"newBufferWithBytes:length:options:",&DAT_1013a210c,0x276ea,0)
  ;
  uVar2 = _objc_msgSend(uVar1,"contents");
  pdVar3 = _dispatch_get_current_queue();
  uVar2 = _dispatch_data_create(uVar2,0x276ea,pdVar3,0);
  uVar2 = _objc_msgSend(DAT_101dc1c78,"newLibraryWithData:error:",uVar2,&local_48);
  _objc_release(uVar1);
  lVar5 = 0;
  do {
    if ((*(long *)((long)&PTR_s_builtin_tint_vs_101873430 + lVar5) == 0) ||
       (*(long *)((long)&PTR_s_builtin_tint_fs_1018734d8 + lVar5) == 0)) {
      *(undefined8 *)((long)&DAT_101dc0d50 + lVar5) = 0;
    }
    else {
      FUN_1010b6b60(&local_68,uVar2);
      puVar4 = operator_new(0x20);
      FUN_1010b6ff0();
      *(undefined8 **)((long)&DAT_101dc0d50 + lVar5) = puVar4;
      puVar4[1] = uStack_60;
      *puVar4 = local_68;
      puVar4[3] = uStack_50;
      puVar4[2] = local_58;
    }
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0xa8);
  FUN_1010b3de0();
  return;
}




void FUN_1010b3f70(void)

{
  void *pvVar1;
  long lVar2;
  
  FUN_1010b3de4();
  lVar2 = 0;
  do {
    pvVar1 = *(void **)((long)&DAT_101dc0d50 + lVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_1010b7000(pvVar1);
      operator_delete(pvVar1);
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0xa8);
  return;
}




undefined8 thunk_FUN_1010b3e28(ulong param_1)

{
  return (&DAT_101dc0d30)[param_1 & 0xffffffff];
}




void FUN_1010b3fdc(ulong param_1)

{
  FUN_1010b7024((&DAT_101dc0d50)[param_1 & 0xffffffff]);
  return;
}




undefined8 FUN_1010b3fec(ulong param_1)

{
  return (&DAT_101dc0d50)[param_1 & 0xffffffff];
}




undefined8 * FUN_1010b3ffc(undefined8 *param_1,ulong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  FUN_1010b4150(param_1,param_2,&local_80);
  if ((int)param_2 != 0) {
    lVar3 = 0;
    do {
      lVar2 = param_1[1];
      uVar1 = _objc_msgSend(DAT_101dc1c78,"newBufferWithLength:options:",param_3,0);
      *(undefined8 *)(lVar2 + lVar3) = uVar1;
      uVar1 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_DrawData_d);
      _objc_msgSend(*(undefined8 *)(lVar2 + lVar3),"setLabel:",uVar1);
      uVar1 = _objc_msgSend(*(undefined8 *)(lVar2 + lVar3),"contents");
      lVar2 = lVar2 + lVar3;
      *(undefined8 *)(lVar2 + 8) = uVar1;
      *(undefined8 *)(lVar2 + 0x10) = uVar1;
      *(undefined4 *)(lVar2 + 0x18) = 0;
      lVar3 = lVar3 + 0x20;
    } while ((param_2 & 0xffffffff) * 0x20 - lVar3 != 0);
  }
  *(undefined4 *)(param_1[1] + 0x18) = 1;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = param_3;
  return param_1;
}




void FUN_1010b4150(uint *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = (uint)param_2;
  if (uVar3 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < uVar3) {
      FUN_1010b43f4(param_1,param_2);
    }
    uVar2 = *param_1;
    if (uVar2 < uVar3) {
      lVar4 = (ulong)uVar2 << 5;
      lVar5 = (param_2 & 0xffffffff) - (ulong)uVar2;
      do {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + lVar4);
        uVar6 = *param_3;
        uVar8 = param_3[3];
        uVar7 = param_3[2];
        puVar1[1] = param_3[1];
        *puVar1 = uVar6;
        puVar1[3] = uVar8;
        puVar1[2] = uVar7;
        lVar4 = lVar4 + 0x20;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    *param_1 = uVar3;
  }
  return;
}




undefined8 * thunk_FUN_1010b3ffc(undefined8 *param_1,ulong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  FUN_1010b4150(param_1,param_2,&uStack_80);
  if ((int)param_2 != 0) {
    lVar3 = 0;
    do {
      lVar2 = param_1[1];
      uVar1 = _objc_msgSend(DAT_101dc1c78,"newBufferWithLength:options:",param_3,0);
      *(undefined8 *)(lVar2 + lVar3) = uVar1;
      uVar1 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_DrawData_d);
      _objc_msgSend(*(undefined8 *)(lVar2 + lVar3),"setLabel:",uVar1);
      uVar1 = _objc_msgSend(*(undefined8 *)(lVar2 + lVar3),"contents");
      lVar2 = lVar2 + lVar3;
      *(undefined8 *)(lVar2 + 8) = uVar1;
      *(undefined8 *)(lVar2 + 0x10) = uVar1;
      *(undefined4 *)(lVar2 + 0x18) = 0;
      lVar3 = lVar3 + 0x20;
    } while ((param_2 & 0xffffffff) * 0x20 - lVar3 != 0);
  }
  *(undefined4 *)(param_1[1] + 0x18) = 1;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = param_3;
  return param_1;
}




uint * FUN_1010b41e4(uint *param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*param_1 != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      _objc_release(*(undefined8 *)(*(long *)(param_1 + 2) + lVar1));
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x20;
    } while (uVar2 < *param_1);
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




uint * thunk_FUN_1010b41e4(uint *param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*param_1 != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      _objc_release(*(undefined8 *)(*(long *)(param_1 + 2) + lVar1));
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x20;
    } while (uVar2 < *param_1);
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




long FUN_1010b426c(long param_1)

{
  return *(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x10) * 0x20;
}




ulong FUN_1010b427c(long param_1,ulong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x10) * 0x20);
  uVar2 = puVar1[2] + 0xf & 0xfffffffffffffff0;
  puVar1[2] = uVar2 + (param_2 & 0xffffffff);
  _objc_msgSend(DAT_101dc0e10,"setVertexBuffer:offset:atIndex:",*puVar1,uVar2 - puVar1[1],param_3);
  _objc_msgSend(DAT_101dc0e10,"setFragmentBuffer:offset:atIndex:",*puVar1,uVar2 - puVar1[1],param_4)
  ;
  return uVar2;
}




void FUN_1010b4308(uint *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined *local_50;
  undefined8 local_48;
  code *local_40;
  undefined *puStack_38;
  uint *local_30;
  uint local_28;
  
  uVar4 = param_1[4];
  lVar1 = *(long *)(param_1 + 2) + (ulong)uVar4 * 0x20;
  uVar5 = *(int *)(lVar1 + 0x10) - *(int *)(lVar1 + 8);
  uVar2 = param_1[6];
  if (param_1[6] <= uVar5) {
    uVar2 = uVar5;
  }
  param_1[6] = uVar2;
  *(undefined4 *)(lVar1 + 0x18) = 2;
  local_50 = PTR___NSConcreteStackBlock_101444138;
  local_48 = 0xc0000000;
  local_40 = FUN_1010b43d4;
  puStack_38 = &DAT_10182e910;
  local_30 = param_1;
  local_28 = uVar4;
  FUN_1010cead4(&local_50);
  uVar2 = *param_1;
  uVar5 = uVar2;
  do {
    uVar4 = uVar4 + 1;
    if (uVar5 == 0) {
      return;
    }
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar4 / uVar2;
    }
    uVar3 = uVar4 - uVar3 * uVar2;
    piVar6 = (int *)(*(long *)(param_1 + 2) + (ulong)uVar3 * 0x20 + 0x18);
    uVar5 = uVar5 - 1;
  } while (*piVar6 != 0);
  *piVar6 = 1;
  param_1[4] = uVar3;
  return;
}




void FUN_1010b43d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8) + (ulong)*(uint *)(param_1 + 0x28) * 0x20;
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + 8);
  *(undefined4 *)(lVar1 + 0x18) = 0;
  return;
}




void FUN_1010b43f4(uint *param_1,uint param_2)

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




ulong FUN_1010b4470(ulong param_1,uint param_2)

{
  if ((int)param_1 != 0) {
    param_1 = (ulong)*(uint *)(&DAT_1013c9920 + (ulong)param_2 * 4);
  }
  return param_1;
}




void FUN_1010b4484(undefined8 *param_1,void *param_2,uint param_3,uint param_4)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar4 = param_4;
  if (param_4 == 0) {
    pvVar2 = operator_new__((ulong)param_3 << 1);
    if (param_3 != 0) {
      uVar5 = 0;
      do {
        *(ushort *)((long)pvVar2 + uVar5 * 2) = (ushort)*(byte *)((long)param_2 + uVar5);
        uVar5 = uVar5 + 1;
      } while (param_3 != uVar5);
    }
    param_2 = pvVar2;
    uVar4 = 1;
  }
  iVar1 = *(int *)(&DAT_1013c99c4 + (ulong)uVar4 * 4);
  *(uint *)(param_1 + 1) = uVar4;
  uVar3 = _objc_msgSend(DAT_101dc1c78,"newBufferWithBytes:length:options:",param_2,iVar1 * param_3,0
                       );
  *param_1 = uVar3;
  if ((param_4 == 0) && (param_2 != (void *)0x0)) {
    operator_delete__(param_2);
    return;
  }
  return;
}




long FUN_1010b4554(long param_1)

{
  FUN_1010b7434(param_1 + 0xf0);
  FUN_1010b7434(param_1 + 0xc0);
  FUN_1010b7434(param_1 + 0x90);
  return param_1;
}




long FUN_1010b45b4(long param_1)

{
  FUN_1010b56cc(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
  FUN_1010b564c(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20));
  FUN_1010b568c(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}




void FUN_1010b45f8(undefined8 *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  while (plVar4 != param_1 + 1) {
    _objc_release(plVar4[5]);
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
  FUN_1010b568c(param_1,param_1[1]);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_1 + 1;
  return;
}




void FUN_1010b4698(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x18);
  while (plVar4 != (long *)(param_1 + 0x20)) {
    _objc_release(plVar4[8]);
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
  FUN_1010b564c((undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(long **)(param_1 + 0x18) = (long *)(param_1 + 0x20);
  return;
}




void FUN_1010b473c(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x30);
  while (plVar4 != (long *)(param_1 + 0x38)) {
    _objc_release(plVar4[9]);
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
  FUN_1010b56cc((undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(long **)(param_1 + 0x30) = (long *)(param_1 + 0x38);
  return;
}




void FUN_1010b47e0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x20);
  thunk_FUN_1010b3ffc(pvVar1,3,0x200000);
  DAT_101dc12f0 = pvVar1;
  FUN_1010b3e38();
  FUN_1010b8734();
  return;
}




void FUN_1010b4830(void)

{
  void *pvVar1;
  
  FUN_1010b8810();
  FUN_1010b45f8(&DAT_101dc1ba0);
  FUN_1010b4698(&DAT_101dc1ba0);
  FUN_1010b473c(&DAT_101dc1ba0);
  FUN_1010b3f70();
  pvVar1 = DAT_101dc12f0;
  if (DAT_101dc12f0 != (void *)0x0) {
    thunk_FUN_1010b41e4(DAT_101dc12f0);
    operator_delete(pvVar1);
  }
  DAT_101dc12f0 = (void *)0x0;
  return;
}




void FUN_1010b48a4(void)

{
  return;
}




void FUN_1010b48a8(void)

{
  return;
}




void FUN_1010b48ac(void)

{
  return;
}




void FUN_1010b48b0(void)

{
  FUN_1010ceb88();
  FUN_1010b48ec(DAT_101dc1c88);
  DAT_101dc0e00 = 0;
  FUN_1010b6884(0xbf800000,&DAT_101dc0e18,0,0xffffffff);
  return;
}




void FUN_1010b48ec(long param_1)

{
  if (DAT_101dc1c70 != '\0') {
    if (param_1 != 0) {
      FUN_1010b570c(param_1);
    }
    DAT_101dc1c70 = 0;
    return;
  }
  FUN_1010b73f4(&DAT_101dc0e90);
  FUN_1010b7a7c(&DAT_101dc0e90,param_1);
  return;
}




void FUN_1010b494c(void)

{
  undefined8 uVar1;
  long lVar2;
  
  if (DAT_101dc0e10 != 0) {
    FUN_1010b49d8();
  }
  uVar1 = DAT_101dc12f0;
  FUN_1010b426c(DAT_101dc12f0);
  FUN_1010b426c(uVar1);
  FUN_1010b4308(DAT_101dc12f0);
  FUN_1010cebec();
  lVar2 = 0;
  do {
    if ((&DAT_101dc1b08)[lVar2] != 0) {
      FUN_1010b7d44((&DAT_101dc1b08)[lVar2],lVar2);
      (&DAT_101dc1b08)[lVar2] = 0;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  DAT_101dc1b04 = 0;
  return;
}




void FUN_1010b49d8(void)

{
  _objc_msgSend(DAT_101dc0e10,"endEncoding");
  DAT_101dc0e10 = 0;
  FUN_1010cebe0(DAT_101dc0e08);
  _objc_release(DAT_101dc0e08);
  DAT_101dc0e08 = 0;
  return;
}




void FUN_1010b4a20(uint param_1)

{
  if (((uint)DAT_101dc0f38 >> 7 & 7) != param_1) {
    DAT_101dc0f38 = DAT_101dc0f38 & 0xfffffffffffffc7f | (ulong)((param_1 & 7) << 7);
    DAT_101dc1b8a = 1;
  }
  return;
}




void FUN_1010b4a58(int param_1)

{
  if (DAT_101dc0f30 != param_1) {
    DAT_101dc1b8d = 1;
    DAT_101dc0f30 = param_1;
  }
  return;
}




void FUN_1010b4a80(uint param_1,uint param_2)

{
  DAT_101dc0f20 =
       DAT_101dc0f20 & 0xffffffffffff03ff | (ulong)((param_1 & 7) << 10 | (param_2 & 7) << 0xd);
  return;
}




void FUN_1010b4aa0(ushort param_1,uint param_2,uint param_3,int param_4)

{
  DAT_101dc0f20._2_2_ =
       param_1 & 0xf | (ushort)(((param_2 & 0xf) << 0x14) >> 0x10) |
       (ushort)(((param_3 & 0xf) << 0x18) >> 0x10) | (ushort)((uint)(param_4 << 0x1c) >> 0x10);
  return;
}




void FUN_1010b4ac0(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (DAT_101dc0f28 == param_2) {
    uVar1 = param_1;
    if (param_2 == 0) {
      return;
    }
  }
  else {
    if (param_2 != 0) {
      DAT_101dc0f2c = param_1;
    }
    DAT_101dc0f28 = (byte)param_2;
    uVar1 = DAT_101dc0f2c;
  }
  DAT_101dc0f2c = uVar1;
  DAT_101dc1b90 = 1;
  return;
}




void FUN_1010b4b00(ulong param_1)

{
  uint uVar1;
  
  if ((param_1 & 0xffc0) != DAT_101dc0f38) {
    DAT_101dc1b8a = 1;
    DAT_101dc0f38 = param_1 & 0xffc0;
  }
  uVar1 = (uint)param_1 & 3;
  if (uVar1 != DAT_101dc0f30) {
    DAT_101dc1b8d = 1;
    DAT_101dc0f30 = uVar1;
  }
  DAT_101dc0f20 = param_1;
  DAT_101dc1b8e = 1;
  return;
}




void FUN_1010b4b68(uint param_1)

{
  ulong uVar1;
  
  if ((((DAT_101dc0f38 & 0x40) == 0 ^ param_1) & 1) == 0) {
    uVar1 = 0x40;
    if (param_1 == 0) {
      uVar1 = 0;
    }
    DAT_101dc0f38 = DAT_101dc0f38 & 0xffffffffffffffbf | uVar1;
    DAT_101dc1b8a = 1;
  }
  return;
}




void FUN_1010b4bac(int param_1,int param_2,int param_3,int param_4)

{
  DAT_101dc0f50 = (double)param_1;
  DAT_101dc0f58 = (double)param_2;
  DAT_101dc0f60 = (double)param_3;
  DAT_101dc0f68 = (double)param_4;
  DAT_101dc1b8b = 1;
  return;
}




void FUN_1010b4bd8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  
  iVar2 = (int)*(undefined8 *)(DAT_101dc0e00 + 0x68);
  if (iVar2 <= param_1) {
    param_1 = iVar2;
  }
  iVar3 = (int)((ulong)*(undefined8 *)(DAT_101dc0e00 + 0x68) >> 0x20);
  DAT_101dc0f80 = 0;
  DAT_101dc0f88 = 0;
  uVar4 = NEON_smax(CONCAT44(iVar3 - (param_4 + param_2 & (param_4 + param_2 >> 0x1f ^ 0xffffffffU))
                             ,param_1),0,4);
  uVar5 = NEON_smin(CONCAT44(iVar3 - (int)((ulong)uVar4 >> 0x20),iVar2 - (int)uVar4),
                    CONCAT44(param_4,param_3),4);
  uVar6 = NEON_smax(uVar5,0,4);
  uVar7 = (uint)(uVar6 >> 0x20);
  if ((int)uVar6 == 0 || uVar7 == 0) {
    DAT_101dc1b88 = DAT_101dc1b88 | 1;
    DAT_101dc0f90 = 1;
    DAT_101dc0f98 = 1;
  }
  else {
    uVar4 = NEON_smin(uVar4,CONCAT44(iVar3 - uVar7,iVar2 - (int)uVar6),4);
    uVar1 = NEON_smax(uVar4,0,4);
    DAT_101dc1b88 = DAT_101dc1b88 & 0xfe;
    DAT_101dc0f80 = uVar1 & 0xffffffff;
    DAT_101dc0f88 = uVar1 >> 0x20;
    DAT_101dc0f90 = uVar6 & 0xffffffff;
    DAT_101dc0f98 = (ulong)uVar7;
  }
  DAT_101dc1b8c = 1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b4c9c(float param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  bVar2 = false;
  bVar3 = false;
  if (0x7fffffff < (uint)param_3) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1)) {
      bVar2 = param_1 < 0.0;
      bVar3 = false;
    }
  }
  if (bVar2 != bVar3 && param_2 == (undefined8 *)0x0 || DAT_101dc1b88 != '\0') {
    return;
  }
  uVar4 = FUN_1010b4e90();
  FUN_1010b3fdc(0xd);
  if (param_2 == (undefined8 *)0x0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = param_2[1];
    uVar7 = *param_2;
  }
  fVar6 = param_1;
  if (param_1 <= 0.0) {
    fVar6 = 0.0;
  }
  if (-1 < (int)(uint)param_3) {
    _objc_msgSend(uVar4,"setStencilReferenceValue:",param_3);
  }
  DAT_101dc1310 = NEON_fmov(0xbf800000,4);
  DAT_101dc131c = 0xbf8000003f800000;
  DAT_101dc1324 = 0x40400000;
  DAT_101dc132c = 0x404000003f800000;
  DAT_101dc1334 = 0xbf800000;
  DAT_101dc133c = 0x3f800000;
  DAT_101dc1b00 = 4;
  if ((~(uint)DAT_101dc0f38 & 0x380) != 0) {
    DAT_101dc0f38 = DAT_101dc0f38 | 0x380;
    DAT_101dc1b8a = 1;
  }
  if (DAT_101dc0f30 != 0) {
    DAT_101dc0f30 = 0;
    DAT_101dc1b8d = 1;
  }
  uVar5 = (ulong)(param_2 != (undefined8 *)0x0);
  uVar1 = 6;
  if (param_2 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  DAT_101dc0f20 =
       DAT_101dc0f20 & 0xfffff8000000ffc0 | DAT_101dc0f20 & 3 | (uVar1 | uVar5) << 2 | uVar5 << 5 |
       0x701010000;
  DAT_101dc1b8e = 1;
  if (0.0 <= param_1 == ((DAT_101dc0f38 & 0x40) == 0)) {
    DAT_101dc0f38 =
         DAT_101dc0f38 & 0xffffffffffffff80 | DAT_101dc0f38 & 0x3f | (ulong)(0.0 <= param_1) << 6;
    DAT_101dc1b8a = 1;
  }
  _DAT_101dc1300 = uVar7;
  _DAT_101dc1308 = uVar8;
  DAT_101dc1318 = fVar6;
  DAT_101dc1328 = fVar6;
  DAT_101dc1338 = fVar6;
  FUN_1010b4ee0(uVar4);
  _objc_msgSend(uVar4,"drawPrimitives:vertexStart:vertexCount:",3,0,3);
  return;
}




long FUN_1010b4e90(void)

{
  if (DAT_101dc1b89 != '\0') {
    if (DAT_101dc0e10 != 0) {
      FUN_1010b49d8();
    }
    FUN_1010b5828(DAT_101dc0e00,0);
    DAT_101dc1b89 = '\0';
  }
  return DAT_101dc0e10;
}




void FUN_1010b4ee0(undefined8 param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_101dc1b8a != '\0') {
    FUN_1010b58d8(param_1);
    DAT_101dc1b8a = '\0';
  }
  if (DAT_101dc1b8d != '\0') {
    _objc_msgSend(param_1,"setCullMode:",*(undefined4 *)(&DAT_1013c99d0 + (ulong)DAT_101dc0f30 * 4))
    ;
    DAT_101dc1b8d = '\0';
  }
  if (DAT_101dc1b8b != '\0') {
    FUN_1010b59cc(param_1);
    DAT_101dc1b8b = '\0';
  }
  if (DAT_101dc1b8c != '\0') {
    FUN_1010b5a34(param_1);
    DAT_101dc1b8c = '\0';
  }
  if (DAT_101dc1b90 != '\0') {
    if (DAT_101dc0f28 != '\0') {
      _objc_msgSend(DAT_101dc0f2c,0x3f800000,0,param_1,"setDepthBias:slopeScale:clamp:");
    }
    DAT_101dc1b90 = '\0';
  }
  if (DAT_101dc1b8e != '\0') {
    FUN_1010b5ad8(param_1);
    DAT_101dc1b8e = '\0';
  }
  if (DAT_101dc1b04 != 0) {
    uVar6 = 0;
    uVar5 = DAT_101dc1b04;
    do {
      uVar1 = 1 << (ulong)(uVar6 & 0x1f);
      if ((uVar1 & uVar5) != 0) {
        if ((undefined8 *)(&DAT_101dc1b08)[uVar6] != (undefined8 *)0x0) {
          _objc_msgSend(DAT_101dc0e10,"setFragmentTexture:atIndex:",
                        *(undefined8 *)(&DAT_101dc1b08)[uVar6],uVar6);
          _objc_msgSend(DAT_101dc0e10,"setFragmentSamplerState:atIndex:",
                        *(undefined8 *)((&DAT_101dc1b08)[uVar6] + 8),uVar6);
        }
      }
      uVar6 = uVar6 + 1;
      uVar5 = uVar5 & (uVar1 ^ 0xffffffff);
    } while (uVar5 != 0);
    DAT_101dc1b04 = 0;
  }
  FUN_1010b5c0c(param_1);
  FUN_1010b5c88(0);
  pvVar2 = (void *)FUN_1010b427c(DAT_101dc12f0,0x1b0,0,0);
  _memmove(pvVar2,&DAT_101dc1100,0x1b0);
  if (DAT_101dc1b00 != 0) {
    uVar6 = DAT_101dc1b00 << 4;
    pvVar2 = (void *)FUN_1010b427c(DAT_101dc12f0,(ulong)uVar6,3,3);
    _memmove(pvVar2,&DAT_101dc1300,(ulong)uVar6);
  }
  pvVar2 = DAT_101dc1be8;
  if (DAT_101dc1bf4 != '\0') {
    uVar4 = (ulong)DAT_101dc1bf0;
    pvVar3 = (void *)FUN_1010b427c(DAT_101dc12f0,uVar4,1,1);
    _memmove(pvVar3,pvVar2,uVar4);
    DAT_101dc1bf4 = '\0';
  }
  pvVar2 = DAT_101dc0d20;
  if (0 < DAT_101dc0d28 && DAT_101dc0d20 != (void *)0x0) {
    uVar6 = DAT_101dc0d28 << 6;
    pvVar3 = (void *)FUN_1010b427c(DAT_101dc12f0,(ulong)uVar6,4,4);
    _memmove(pvVar3,pvVar2,(ulong)uVar6);
  }
  DAT_101dc0d20 = (void *)0x0;
  DAT_101dc0d28 = 0;
  return;
}




void FUN_1010b519c(ulong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (DAT_101dc1b88 != '\0') {
    return;
  }
  uVar1 = FUN_1010b4e90();
  FUN_1010b84f8(param_2,param_5,param_6);
  FUN_1010b4ee0(uVar1);
  _objc_msgSend(uVar1,"drawPrimitives:vertexStart:vertexCount:",
                *(undefined4 *)
                 ((long)&PTR___mh_execute_header_1013c99a0 + (param_1 & 0xffffffff) * 4),param_3,
                param_4);
  return;
}




void FUN_1010b5248(ulong param_1,undefined8 *param_2,undefined8 param_3,int param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if (DAT_101dc1b88 != '\0') {
    return;
  }
  uVar1 = FUN_1010b4e90();
  FUN_1010b84f8(param_3,param_6,param_7);
  FUN_1010b4ee0(uVar1);
  _objc_msgSend(uVar1,"drawIndexedPrimitives:indexCount:indexType:indexBuffer:indexBufferOffset:",
                *(undefined4 *)
                 ((long)&PTR___mh_execute_header_1013c99a0 + (param_1 & 0xffffffff) * 4),param_5,
                *(undefined4 *)(&DAT_1013c99b8 + (ulong)*(uint *)(param_2 + 1) * 4),*param_2,
                *(int *)(&DAT_1013c99c4 + (ulong)*(uint *)(param_2 + 1) * 4) * param_4);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b5318(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if (DAT_101dc1b88 != '\0') {
    return;
  }
  uVar1 = FUN_1010b4e90();
  FUN_1010b3fdc(10);
  _DAT_101dc1300 = *param_1;
  _DAT_101dc1308 = param_1[1];
  _DAT_101dc1318 = 0;
  DAT_101dc1310 = 0xbf800000bf800000;
  _DAT_101dc1328 = 0x3f80000000000000;
  ram0x000101dc1320 = 0x3f800000bf800000;
  _DAT_101dc1338 = 0x3f800000;
  ram0x000101dc1330 = 0xbf8000003f800000;
  uRam0000000101dc1348 = 0x3f800000;
  _DAT_101dc1340 = 0xbf8000003f800000;
  uRam0000000101dc1358 = 0x3f80000000000000;
  _DAT_101dc1350 = 0x3f800000bf800000;
  auVar2 = NEON_fmov(0x3f800000,4);
  uRam0000000101dc1368 = auVar2._8_8_;
  _DAT_101dc1360 = auVar2._0_8_;
  DAT_101dc1b00 = 7;
  FUN_1010b4ee0(uVar1);
  _objc_msgSend(uVar1,"drawPrimitives:vertexStart:vertexCount:",3,0,6);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b53c4(int param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (param_1 == 2) {
    DAT_101dc10fc = DAT_101dc10fc | 0x10;
    uRam0000000101dc12b8 = param_2[1];
    _DAT_101dc12b0 = *param_2;
    uRam0000000101dc12c8 = param_2[3];
    _DAT_101dc12c0 = param_2[2];
    uRam0000000101dc12d8 = param_2[5];
    _DAT_101dc12d0 = param_2[4];
    uRam0000000101dc12e8 = param_2[7];
    _DAT_101dc12e0 = param_2[6];
  }
  else {
    if (param_1 == 1) {
      DAT_101dc10fc = DAT_101dc10fc | 0xb8;
      uRam0000000101dc1178 = param_2[7];
      _DAT_101dc1170 = param_2[6];
      uRam0000000101dc1168 = param_2[5];
      _DAT_101dc1160 = param_2[4];
      uRam0000000101dc1158 = param_2[3];
      _DAT_101dc1150 = param_2[2];
      uRam0000000101dc1148 = param_2[1];
      _DAT_101dc1140 = *param_2;
      return;
    }
    if (param_1 == 0) {
      lVar1 = 0;
      do {
        if (*(float *)((long)&DAT_101dc1100 + lVar1) != *(float *)((long)param_2 + lVar1)) {
          DAT_101dc10fc = DAT_101dc10fc | 0x38;
          break;
        }
        lVar1 = lVar1 + 4;
      } while (lVar1 != 0x40);
      uRam0000000101dc1128 = param_2[5];
      _DAT_101dc1120 = param_2[4];
      uRam0000000101dc1138 = param_2[7];
      _DAT_101dc1130 = param_2[6];
      uRam0000000101dc1108 = param_2[1];
      _DAT_101dc1100 = *param_2;
      uRam0000000101dc1118 = param_2[3];
      _DAT_101dc1110 = param_2[2];
      return;
    }
  }
  return;
}




void FUN_1010b54a8(undefined4 param_1,uint param_2)

{
  *(undefined4 *)(&DAT_101dc1300 + (ulong)param_2 * 0x10) = param_1;
  if (DAT_101dc1b00 <= param_2 + 1) {
    DAT_101dc1b00 = param_2 + 1;
  }
  return;
}




void FUN_1010b54d0(uint param_1,undefined8 *param_2)

{
  *(undefined8 *)(&DAT_101dc1300 + (ulong)param_1 * 0x10) = *param_2;
  if (DAT_101dc1b00 <= param_1 + 1) {
    DAT_101dc1b00 = param_1 + 1;
  }
  return;
}




void FUN_1010b54fc(uint param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(&DAT_101dc1308 + (ulong)param_1 * 0x10) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(&DAT_101dc1300 + (ulong)param_1 * 0x10) = uVar1;
  if (DAT_101dc1b00 <= param_1 + 1) {
    DAT_101dc1b00 = param_1 + 1;
  }
  return;
}




void FUN_1010b5530(uint param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined8 *)(&DAT_101dc1308 + (ulong)param_1 * 0x10) = param_2[1];
  *(undefined8 *)(&DAT_101dc1300 + (ulong)param_1 * 0x10) = uVar1;
  if (DAT_101dc1b00 <= param_1 + 1) {
    DAT_101dc1b00 = param_1 + 1;
  }
  return;
}




uint FUN_1010b555c(uint param_1)

{
  return 0xbU >> (ulong)(param_1 & 0xf) & (uint)(param_1 < 4);
}




undefined8 * FUN_1010b5578(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1010b67a4(param_1 + 3);
  FUN_1010b73bc(param_1 + 0x12);
  FUN_1010b73bc(param_1 + 0x18);
  FUN_1010b73bc(param_1 + 0x1e);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  auVar1 = NEON_fmov(0xbff0000000000000,8);
  param_1[0x2d] = auVar1._8_8_;
  param_1[0x2c] = auVar1._0_8_;
  param_1[0x2f] = 0x3ff0000000000000;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x33] = 0xffffffff;
  param_1[0x32] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((long)param_1 + 0x2fc) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0xd0c) = 0;
  *(undefined8 *)((long)param_1 + 0xd04) = 0;
  *(undefined8 *)((long)param_1 + 0xd1c) = 0;
  *(undefined8 *)((long)param_1 + 0xd14) = 0;
  *(undefined8 *)((long)param_1 + 0xd2c) = 0;
  *(undefined8 *)((long)param_1 + 0xd24) = 0;
  *(undefined8 *)((long)param_1 + 0xd3c) = 0;
  *(undefined8 *)((long)param_1 + 0xd34) = 0;
  *(undefined8 *)((long)param_1 + 0xd4c) = 0;
  *(undefined8 *)((long)param_1 + 0xd44) = 0;
  *(undefined8 *)((long)param_1 + 0xd5c) = 0;
  *(undefined8 *)((long)param_1 + 0xd54) = 0;
  *(undefined8 *)((long)param_1 + 0xd6c) = 0;
  *(undefined8 *)((long)param_1 + 0xd64) = 0;
  *(undefined8 *)((long)param_1 + 0xd7c) = 0;
  *(undefined8 *)((long)param_1 + 0xd74) = 0;
  *(undefined8 *)((long)param_1 + 0xd81) = 0;
  *(undefined8 *)((long)param_1 + 0xd89) = 0x101010101010101;
  return param_1;
}




void FUN_1010b564c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1010b564c(param_1,*param_2);
    FUN_1010b564c(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_1010b568c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1010b568c(param_1,*param_2);
    FUN_1010b568c(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_1010b56cc(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1010b56cc(param_1,*param_2);
    FUN_1010b56cc(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_1010b570c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1010b6810(&DAT_101dc0e18);
  uVar1 = _objc_msgSend(param_1,"width");
  uVar2 = _objc_msgSend(param_1,"height");
  FUN_1010b67c0(&DAT_101dc0e18,uVar1,uVar2);
  DAT_101dc0e88 = 0;
  FUN_1010b73f4(&DAT_101dc0e90);
  FUN_1010b7478(&DAT_101dc0e90,0);
  FUN_1010b7a7c(&DAT_101dc0e90,param_1);
  FUN_1010b685c(&DAT_101dc0e18,0,&DAT_101dc0e90,1,0);
  FUN_1010b73f4(&DAT_101dc0ec0);
  FUN_1010b73f4(&DAT_101dc0ef0);
  if (param_1 != 0) {
    FUN_1010b7478(&DAT_101dc0ec0,4);
    FUN_1010b75c4(&DAT_101dc0ec0,0,uVar1,uVar2,1,0x15,0);
    FUN_1010b6874(&DAT_101dc0e18,&DAT_101dc0ec0,1,1);
    return;
  }
  return;
}




void FUN_1010b5828(undefined8 *param_1)

{
  if (DAT_101dc0e08 == 0) {
    DAT_101dc0e08 = _objc_msgSend(DAT_101dc1c80,"commandBuffer");
    _objc_retain();
  }
  DAT_101dc0e10 = _objc_msgSend(DAT_101dc0e08,"renderCommandEncoderWithDescriptor:",*param_1);
  _objc_msgSend(DAT_101dc0e10,"pushDebugGroup:",&cf_resetRenderState);
  _objc_msgSend(DAT_101dc0e10,"setFrontFacingWinding:",*(byte *)(param_1 + 0xe) ^ 1);
  _objc_msgSend(DAT_101dc0e10,"popDebugGroup");
  DAT_101dc1bf4 = 1;
  return;
}




void FUN_1010b58d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (DAT_101dc1ba8 != (undefined8 *)0x0) {
    puVar3 = &DAT_101dc1ba8;
    puVar4 = DAT_101dc1ba8;
    do {
      if ((ulong)puVar4[4] >= DAT_101dc0f38) {
        puVar3 = puVar4;
      }
      puVar4 = (undefined8 *)puVar4[(ulong)puVar4[4] < DAT_101dc0f38];
    } while (puVar4 != (undefined8 *)0x0);
    if (((undefined8 **)puVar3 != &DAT_101dc1ba8) && ((ulong)puVar3[4] <= DAT_101dc0f38)) {
      uVar1 = puVar3[5];
      goto LAB_1010b59ac;
    }
  }
  uVar1 = _objc_alloc(&_OBJC_CLASS___MTLDepthStencilDescriptor);
  uVar2 = _objc_msgSend(uVar1,"init");
  FUN_1010b5ecc(&DAT_101dc0f38,uVar2);
  uVar1 = _objc_msgSend(DAT_101dc1c78,"newDepthStencilStateWithDescriptor:",uVar2);
  puVar3 = (undefined8 *)FUN_1010b6000(&DAT_101dc1ba0,&DAT_101dc0f38);
  *puVar3 = uVar1;
  _objc_release(uVar2);
LAB_1010b59ac:
  _objc_msgSend(param_1,"setDepthStencilState:",uVar1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b59cc(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  auVar1 = _DAT_101dc0f60;
  if (DAT_101dc0f60 == -1.0) {
    auVar1._0_8_ = *(ulong *)(DAT_101dc0e00 + 0x68) & 0xffffffff;
    auVar1._8_8_ = *(ulong *)(DAT_101dc0e00 + 0x68) >> 0x20;
    auVar1 = NEON_ucvtf(auVar1,8);
  }
  uStack_38 = DAT_101dc0f58;
  local_40 = DAT_101dc0f50;
  uStack_28 = auVar1._8_8_;
  uStack_30 = auVar1._0_8_;
  uStack_18 = DAT_101dc0f70._8_8_;
  local_20 = (undefined8)DAT_101dc0f70;
  _objc_msgSend(param_1,"setViewport:",&local_40);
  return;
}




void FUN_1010b5a34(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_30;
  long lStack_28;
  ulong local_20;
  ulong uStack_18;
  
  if (DAT_101dc0f90 == 0xffffffff) {
    local_20 = (ulong)*(uint *)(DAT_101dc0e00 + 0x68);
    uVar3 = (ulong)*(uint *)(DAT_101dc0e00 + 0x6c);
    uStack_18 = uVar3;
  }
  else {
    uVar2 = *(uint *)(DAT_101dc0e00 + 0x6c);
    uVar3 = (ulong)uVar2;
    iVar1 = *(int *)(DAT_101dc0e00 + 0x68);
    if ((int)DAT_101dc0f90 <= *(int *)(DAT_101dc0e00 + 0x68)) {
      iVar1 = (int)DAT_101dc0f90;
    }
    local_20 = (ulong)iVar1;
    if ((int)(uint)DAT_101dc0f98 <= (int)uVar2) {
      uVar2 = (uint)DAT_101dc0f98;
    }
    uStack_18 = (ulong)(int)uVar2;
  }
  lStack_28 = DAT_101dc0f88;
  if (*(char *)(DAT_101dc0e00 + 0x70) != '\0') {
    lStack_28 = uVar3 - (uStack_18 + DAT_101dc0f88);
  }
  local_30 = DAT_101dc0f80;
  _objc_msgSend(param_1,"setScissorRect:",&local_30);
  return;
}




void FUN_1010b5ad8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  local_40 = 0;
  local_58 = DAT_101dc0f40;
  uStack_50 = DAT_101dc0f48;
  local_60 = DAT_101dc0f20;
  local_48 = FUN_1010b8148();
  lVar3 = 0;
  do {
    lVar4 = *(long *)(DAT_101dc0e00 + 8 + lVar3 * 8);
    if (lVar4 != 0) {
      *(char *)((long)&local_40 + lVar3) = (char)*(undefined4 *)(lVar4 + 0x10);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 6);
  puVar1 = (undefined8 *)FUN_1010b6430(&DAT_101dc1bd0,&local_60);
  if (puVar1 == &DAT_101dc1bd8) {
    uVar2 = FUN_1010b610c();
    local_68 = 0;
    uVar5 = _objc_msgSend(DAT_101dc1c78,"newRenderPipelineStateWithDescriptor:error:",uVar2,
                          &local_68);
    puVar1 = (undefined8 *)FUN_1010b63b4(&DAT_101dc1bd0,&local_60);
    *puVar1 = uVar5;
    _objc_release(uVar2);
  }
  else {
    uVar5 = puVar1[9];
  }
  _objc_msgSend(param_1,"setRenderPipelineState:",uVar5);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010b5c0c(undefined8 param_1)

{
  long lVar1;
  
  if (0 < DAT_101dc10f8) {
    lVar1 = 0;
    do {
      _objc_msgSend(param_1,"setVertexBuffer:offset:atIndex:",
                    **(undefined8 **)((&DAT_101dc10c0)[lVar1] + 8),0,lVar1 + 8);
      lVar1 = lVar1 + 1;
    } while (lVar1 < DAT_101dc10f8);
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b5c88(void)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(DAT_101dc0e00 + 0x70) == '\0') {
    uRam0000000101dc11c8 = uRam0000000101dc12b8;
    _DAT_101dc11c0 = _DAT_101dc12b0;
    uRam0000000101dc11d8 = uRam0000000101dc12c8;
    _DAT_101dc11d0 = _DAT_101dc12c0;
    uRam0000000101dc11e8 = uRam0000000101dc12d8;
    _DAT_101dc11e0 = _DAT_101dc12d0;
    uRam0000000101dc11f8 = uRam0000000101dc12e8;
    _DAT_101dc11f0 = _DAT_101dc12e0;
  }
  else {
    uStack_58 = 0;
    local_60 = 0x3f800000;
    uStack_48 = 0;
    uStack_50 = 0xbf80000000000000;
    uStack_38 = 0x3f800000;
    local_40 = 0;
    uStack_28 = 0x3f80000000000000;
    uStack_30 = 0;
    FUN_10002a9fc(&DAT_101dc11c0,&DAT_101dc12b0,&local_60);
  }
  uStack_58 = 0;
  local_60 = 0x3f800000;
  uStack_48 = 0;
  uStack_50 = 0x3f80000000000000;
  uStack_38 = 0x3f000000;
  local_40 = 0;
  uStack_28 = 0x3f8000003f000000;
  uStack_30 = 0;
  FUN_10002a9fc(&DAT_101dc11c0,&DAT_101dc11c0,&local_60);
  uVar2 = DAT_101dc10fc;
  uVar1 = DAT_101dc10fc;
  if ((DAT_101dc10fc >> 3 & 1) != 0) {
    FUN_10002a9fc(&DAT_101dc1200,&DAT_101dc1100,&DAT_101dc1140);
    uVar2 = DAT_101dc10fc & 0xfffffff7;
    uVar1 = DAT_101dc10fc;
  }
  DAT_101dc10fc = uVar2;
  uVar2 = DAT_101dc10fc;
  if ((uVar1 >> 4 & 1) != 0) {
    FUN_10002a9fc(&DAT_101dc1240,&DAT_101dc1200,&DAT_101dc11c0);
    uVar2 = DAT_101dc10fc & 0xffffffef;
  }
  uVar1 = DAT_101dc10fc >> 5;
  DAT_101dc10fc = uVar2;
  if ((uVar1 & 1) != 0) {
    fVar3 = DAT_101dc1228 * DAT_101dc1214 - DAT_101dc1224 * DAT_101dc1218;
    fVar4 = DAT_101dc1228 * DAT_101dc1210 - DAT_101dc1220 * DAT_101dc1218;
    fVar5 = DAT_101dc1224 * DAT_101dc1210 - DAT_101dc1220 * DAT_101dc1214;
    fVar6 = (fVar3 * DAT_101dc1200 - fVar4 * DAT_101dc1204) + DAT_101dc1208 * fVar5;
    DAT_101dc1280 = 0.0;
    DAT_101dc1290 = 0.0;
    DAT_101dc12a0 = 0.0;
    DAT_101dc1284 = 0.0;
    DAT_101dc1294 = 0.0;
    DAT_101dc12a4 = 0.0;
    DAT_101dc1288 = 0.0;
    DAT_101dc1298 = 0.0;
    DAT_101dc12a8 = 0.0;
    if (1.1920929e-07 <= ABS(fVar6)) {
      fVar6 = 1.0 / fVar6;
      DAT_101dc1280 = fVar6 * fVar3;
      DAT_101dc1284 = fVar4 * -fVar6;
      DAT_101dc1288 = fVar6 * fVar5;
      DAT_101dc1290 = (DAT_101dc1224 * DAT_101dc1208 - DAT_101dc1228 * DAT_101dc1204) * fVar6;
      DAT_101dc1294 = fVar6 * (DAT_101dc1228 * DAT_101dc1200 - DAT_101dc1220 * DAT_101dc1208);
      DAT_101dc1298 = (DAT_101dc1220 * DAT_101dc1204 - DAT_101dc1224 * DAT_101dc1200) * fVar6;
      DAT_101dc12a0 = fVar6 * (DAT_101dc1218 * DAT_101dc1204 - DAT_101dc1214 * DAT_101dc1208);
      DAT_101dc12a4 = (DAT_101dc1210 * DAT_101dc1208 - DAT_101dc1218 * DAT_101dc1200) * fVar6;
      DAT_101dc12a8 = fVar6 * (DAT_101dc1214 * DAT_101dc1200 - DAT_101dc1210 * DAT_101dc1204);
    }
    DAT_101dc10fc = uVar2 & 0xffffffdf;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    FUN_10002ee14(&DAT_101dc1180);
  }
  DAT_101dc10fc = 0;
  return;
}




void FUN_1010b5ecc(ulong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = _objc_alloc(&_OBJC_CLASS___MTLStencilDescriptor);
  uVar1 = _objc_msgSend(uVar1,"init");
  _objc_msgSend(uVar1,"setStencilCompareFunction:",7);
  _objc_msgSend(uVar1,"setStencilFailureOperation:",0);
  _objc_msgSend(uVar1,"setDepthFailureOperation:",0);
  _objc_msgSend(uVar1,"setDepthStencilPassOperation:",0);
  _objc_msgSend(uVar1,"setReadMask:",0);
  _objc_msgSend(uVar1,"setWriteMask:",0);
  _objc_msgSend(param_2,"setDepthCompareFunction:",
                *(undefined4 *)((long)&PTR___mh_execute_header_1013c9934 + (*param_1 >> 7 & 7) * 4))
  ;
  _objc_msgSend(param_2,"setDepthWriteEnabled:",*param_1 >> 6 & 1);
  _objc_msgSend(param_2,"setFrontFaceStencil:",uVar1);
  _objc_msgSend(param_2,"setBackFaceStencil:",uVar1);
  _objc_autorelease(uVar1);
  return;
}




undefined8 * FUN_1010b6000(long param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  puVar3 = (undefined8 *)*puVar1;
  puVar2 = puVar1;
  if (puVar3 == (undefined8 *)0x0) {
LAB_1010b6078:
    uVar4 = *param_2;
  }
  else {
    uVar4 = *param_2;
    puVar1 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar2 = puVar3, (ulong)puVar2[4] <= uVar4) {
        if (uVar4 <= (ulong)puVar2[4]) {
          if (puVar2 != (undefined8 *)0x0) goto LAB_1010b60a0;
          goto LAB_1010b6078;
        }
        puVar1 = puVar2 + 1;
        puVar3 = (undefined8 *)*puVar1;
        if ((undefined8 *)*puVar1 == (undefined8 *)0x0) goto LAB_1010b607c;
      }
      puVar1 = puVar2;
      puVar3 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
  }
LAB_1010b607c:
  puVar3 = operator_new(0x30);
  puVar3[4] = uVar4;
  puVar3[5] = 0;
  FUN_1010b60b8(param_1,puVar2,puVar1,puVar3);
  puVar2 = puVar3;
LAB_1010b60a0:
  return puVar2 + 5;
}




void FUN_1010b60b8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




undefined8 FUN_1010b610c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = _objc_alloc(&_OBJC_CLASS___MTLRenderPipelineDescriptor);
  uVar1 = _objc_msgSend(uVar1,"init");
  FUN_1010b64ac(&DAT_101dc0f20,uVar1);
  uVar2 = FUN_1010b8148();
  _objc_msgSend(uVar1,"setVertexDescriptor:",uVar2);
  _objc_msgSend(uVar1,"setVertexFunction:",DAT_101dc0f48);
  _objc_msgSend(uVar1,"setFragmentFunction:",DAT_101dc0f40);
  uVar6 = *DAT_101dc0e00;
  uVar2 = _objc_msgSend(uVar6,"depthAttachment");
  lVar3 = _objc_msgSend(uVar2,"texture");
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = _objc_msgSend(uVar6,"depthAttachment");
    uVar2 = _objc_msgSend(uVar2,"texture");
    uVar2 = _objc_msgSend(uVar2,"pixelFormat");
  }
  _objc_msgSend(uVar1,"setDepthAttachmentPixelFormat:",uVar2);
  uVar2 = _objc_msgSend(uVar6,"stencilAttachment");
  lVar3 = _objc_msgSend(uVar2,"texture");
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = _objc_msgSend(uVar6,"stencilAttachment");
    uVar2 = _objc_msgSend(uVar2,"texture");
    uVar2 = _objc_msgSend(uVar2,"pixelFormat");
  }
  _objc_msgSend(uVar1,"setStencilAttachmentPixelFormat:",uVar2);
  lVar3 = 0;
  do {
    uVar2 = _objc_msgSend(uVar6,"colorAttachments");
    uVar2 = _objc_msgSend(uVar2,"objectAtIndexedSubscript:",lVar3);
    lVar4 = _objc_msgSend(uVar2,"texture");
    if (lVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = _objc_msgSend(uVar6,"colorAttachments");
      uVar2 = _objc_msgSend(uVar2,"objectAtIndexedSubscript:",lVar3);
      uVar2 = _objc_msgSend(uVar2,"texture");
      uVar2 = _objc_msgSend(uVar2,"pixelFormat");
    }
    uVar5 = _objc_msgSend(uVar1,"colorAttachments");
    uVar5 = _objc_msgSend(uVar5,"objectAtIndexedSubscript:",lVar3);
    _objc_msgSend(uVar5,"setPixelFormat:",uVar2);
    uVar2 = _objc_msgSend(uVar6,"colorAttachments");
    uVar2 = _objc_msgSend(uVar2,"objectAtIndexedSubscript:",lVar3);
    lVar4 = _objc_msgSend(uVar2,"texture");
    if (lVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = _objc_msgSend(uVar1,"colorAttachments");
      uVar2 = _objc_msgSend(uVar2,"objectAtIndexedSubscript:",lVar3);
      uVar2 = _objc_msgSend(uVar2,"isBlendingEnabled");
    }
    uVar5 = _objc_msgSend(uVar1,"colorAttachments");
    uVar5 = _objc_msgSend(uVar5,"objectAtIndexedSubscript:",lVar3);
    _objc_msgSend(uVar5,"setBlendingEnabled:",uVar2);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  return uVar1;
}




long FUN_1010b63b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_1010b6624(param_1,&local_38,param_2);
  pvVar2 = (void *)*puVar1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = operator_new(0x50);
    uVar3 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    *(undefined8 *)((long)pvVar2 + 0x28) = param_2[1];
    *(undefined8 *)((long)pvVar2 + 0x20) = uVar3;
    *(undefined8 *)((long)pvVar2 + 0x38) = uVar5;
    *(undefined8 *)((long)pvVar2 + 0x30) = uVar4;
    *(undefined8 *)((long)pvVar2 + 0x40) = param_2[4];
    *(undefined8 *)((long)pvVar2 + 0x48) = 0;
    FUN_1010b66d0(param_1,local_38,puVar1,pvVar2);
  }
  return (long)pvVar2 + 0x48;
}




long * FUN_1010b6430(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      uVar1 = FUN_1004d2898(plVar5 + 4,param_2,0x28);
      if (-1 < (int)uVar1) {
        plVar4 = plVar5;
      }
      plVar5 = (long *)plVar5[uVar1 >> 0x1f];
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (iVar2 = FUN_1004d2898(param_2,plVar4 + 4,0x28), -1 < iVar2)) {
      return plVar4;
    }
  }
  return plVar3;
}




void FUN_1010b64ac(ulong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(param_2,"setSampleCount:",1);
  _objc_msgSend(param_2,"setAlphaToCoverageEnabled:",0);
  _objc_msgSend(param_2,"setAlphaToOneEnabled:",0);
  uVar1 = _objc_msgSend(param_2,"colorAttachments");
  uVar1 = _objc_msgSend(uVar1,"objectAtIndexedSubscript:",0);
  _objc_msgSend(uVar1,"setBlendingEnabled:",*(char *)((long)param_1 + 2) != '\x01');
  _objc_msgSend(uVar1,"setSourceRGBBlendFactor:",
                *(undefined4 *)
                 ((long)&PTR___mh_execute_header_1013c9988 + (*param_1 >> 0x10 & 0xf) * 4));
  _objc_msgSend(uVar1,"setDestinationRGBBlendFactor:",
                *(undefined4 *)
                 ((long)&PTR___mh_execute_header_1013c9988 + (*param_1 >> 0x14 & 0xf) * 4));
  _objc_msgSend(uVar1,"setRgbBlendOperation:",
                *(undefined4 *)((long)&PTR___mh_execute_header_1013c9974 + (*param_1 >> 10 & 7) * 4)
               );
  _objc_msgSend(uVar1,"setSourceAlphaBlendFactor:",
                *(undefined4 *)
                 ((long)&PTR___mh_execute_header_1013c9988 + (*param_1 >> 0x18 & 0xf) * 4));
  _objc_msgSend(uVar1,"setDestinationAlphaBlendFactor:",
                *(undefined4 *)
                 ((long)&PTR___mh_execute_header_1013c9988 + (*param_1 >> 0x1c & 0xf) * 4));
  _objc_msgSend(uVar1,"setAlphaBlendOperation:",
                *(undefined4 *)
                 ((long)&PTR___mh_execute_header_1013c9974 + (*param_1 >> 0xd & 7) * 4));
  _objc_msgSend(uVar1,"setWriteMask:",*param_1 >> 1 & 0xe | *param_1 >> 5 & 1);
  return;
}




long * FUN_1010b6624(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  if ((long *)*plVar2 == (long *)0x0) {
    *param_2 = plVar2;
    return plVar2;
  }
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar2;
  do {
    while( true ) {
      plVar4 = plVar2;
      iVar1 = FUN_1004d2898(param_3,plVar4 + 4,0x28);
      if (-1 < iVar1) break;
      plVar3 = plVar4;
      plVar2 = (long *)*plVar4;
      if ((long *)*plVar4 == (long *)0x0) {
        *param_2 = plVar4;
        return plVar4;
      }
    }
    iVar1 = FUN_1004d2898(plVar4 + 4,param_3,0x28);
    if (-1 < iVar1) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  } while ((long *)*plVar3 != (long *)0x0);
  *param_2 = plVar4;
  return plVar3;
}




void FUN_1010b66d0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




void FUN_1010b6724(void)

{
  FUN_1010b5578(&DAT_101dc0e00);
  ___cxa_atexit(FUN_1010b4554,&DAT_101dc0e00,0x100000000);
  DAT_101dc1ba8 = 0;
  DAT_101dc1ba0 = &DAT_101dc1ba8;
  DAT_101dc1bc0 = 0;
  DAT_101dc1bb0 = 0;
  DAT_101dc1bb8 = &DAT_101dc1bc0;
  DAT_101dc1be0 = 0;
  DAT_101dc1bd8 = 0;
  DAT_101dc1bc8 = 0;
  DAT_101dc1bd0 = &DAT_101dc1bd8;
  ___cxa_atexit(FUN_1010b45b4,&DAT_101dc1ba0,0x100000000);
  return;
}




void FUN_1010b67a4(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return;
}




void FUN_1010b67c0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0xd) = param_2;
  *(undefined4 *)((long)param_1 + 0x6c) = param_3;
  *(undefined1 *)(param_1 + 0xe) = 0;
  uVar1 = _objc_msgSend(&_OBJC_CLASS___MTLRenderPassDescriptor,"renderPassDescriptor");
  *param_1 = uVar1;
  _objc_retain();
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  return;
}




void FUN_1010b6810(undefined8 *param_1)

{
  _objc_release(*param_1);
  return;
}




bool FUN_1010b6818(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 8) == param_2) {
    return true;
  }
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    if (uVar2 == 5) break;
    uVar1 = uVar2 + 1;
  } while (*(long *)(param_1 + 0x10 + uVar2 * 8) != param_2);
  return uVar2 < 5;
}




void FUN_1010b685c(long param_1,uint param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 8) = param_3;
  param_1 = param_1 + (ulong)param_2 * 4;
  *(undefined4 *)(param_1 + 0x38) = param_4;
  *(undefined4 *)(param_1 + 0x50) = param_5;
  return;
}




void FUN_1010b6874(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  *(undefined4 *)(param_1 + 0x60) = param_4;
  return;
}




void FUN_1010b6884(undefined8 param_1,undefined8 *param_2,float *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  float fVar6;
  
  puVar1 = (undefined8 *)&DAT_101dc0e18;
  if (param_2 != (undefined8 *)0x0) {
    puVar1 = param_2;
  }
  iVar3 = (int)param_4;
  fVar6 = (float)param_1;
  if (puVar1 == DAT_101dc0e00) {
    if (((param_3 != (float *)0x0) || (0.0 <= fVar6)) || (-1 < iVar3)) {
      FUN_1010b4c9c(param_1,param_3,param_4);
      return;
    }
  }
  else {
    lVar5 = 0;
    piVar4 = (int *)(puVar1 + 10);
    do {
      if (puVar1[lVar5 + 1] != 0) {
        uVar2 = _objc_msgSend(*puVar1,"colorAttachments");
        uVar2 = _objc_msgSend(uVar2,"objectAtIndexedSubscript:",lVar5);
        _objc_msgSend(uVar2,"setTexture:",*(undefined8 *)puVar1[lVar5 + 1]);
        if (param_3 == (float *)0x0) {
          _objc_msgSend(uVar2,"setLoadAction:",piVar4[-6] == 0);
        }
        else {
          _objc_msgSend(uVar2,"setLoadAction:",2);
          _objc_msgSend((double)*param_3,(double)param_3[1],(double)param_3[2],(double)param_3[3],
                        uVar2,"setClearColor:");
        }
        _objc_msgSend(uVar2,"setStoreAction:",*piVar4 == 0);
      }
      lVar5 = lVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (lVar5 != 4);
    if (puVar1[5] != 0) {
      uVar2 = _objc_msgSend(*puVar1,"depthAttachment");
      _objc_msgSend(uVar2,"setTexture:",*(undefined8 *)puVar1[5]);
      if (0.0 <= fVar6) {
        _objc_msgSend(uVar2,"setLoadAction:",2);
        _objc_msgSend((double)fVar6,uVar2,"setClearDepth:");
      }
      else {
        _objc_msgSend(uVar2,"setLoadAction:",*(int *)(puVar1 + 9) == 0);
      }
      _objc_msgSend(uVar2,"setStoreAction:",*(int *)(puVar1 + 0xc) == 0);
    }
    if (puVar1[6] != 0) {
      uVar2 = _objc_msgSend(*puVar1,"stencilAttachment");
      _objc_msgSend(uVar2,"setTexture:",*(undefined8 *)puVar1[6]);
      if (iVar3 < 0) {
        _objc_msgSend(uVar2,"setLoadAction:",*(int *)((long)puVar1 + 0x4c) == 0);
      }
      else {
        _objc_msgSend(uVar2,"setLoadAction:",2);
        _objc_msgSend(uVar2,"setClearStencil:",iVar3);
      }
      _objc_msgSend(uVar2,"setStoreAction:",*(int *)((long)puVar1 + 100) == 0);
    }
    DAT_101dc1b89 = 1;
    DAT_101dc0e00 = puVar1;
  }
  return;
}




void FUN_1010b6b58(void)

{
  return;
}




uint * thunk_FUN_1010b7044(uint *param_1)

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
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
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




void FUN_1010b6b60(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",param_3);
  uVar1 = _objc_msgSend(param_2,"newFunctionWithName:",uVar1);
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",param_4);
  uVar2 = _objc_msgSend(param_2,"newFunctionWithName:",uVar2);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1010b6c0c(undefined1 *param_1,long param_2,long param_3)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  dispatch_queue_t pdVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_68 [12];
  undefined4 local_5c;
  long local_58;
  long local_50 [2];
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  local_50[1] = 0;
  lVar2 = (ulong)*(ushort *)(param_2 + 2) + param_2;
  pcVar1 = (char *)(lVar2 + 4);
  lVar8 = (param_3 - (ulong)*(ushort *)(param_2 + 2)) + -4;
  local_5c = FUN_100015208(pcVar1,lVar8,0x12345678);
  local_50[0] = 0;
  plVar3 = (long *)FUN_1010b6e7c(&DAT_101dc1c08,&local_5c,local_50);
  lVar9 = *plVar3;
  local_50[0] = 0;
  plVar3 = (long *)FUN_1010b6e7c(&DAT_101dc1c38,&local_5c,local_50);
  local_58 = *plVar3;
  if (lVar9 == 0 || local_58 == 0) {
    if ((((*pcVar1 == 'M') && (*(char *)(lVar2 + 5) == 'T')) && (*(char *)(lVar2 + 6) == 'L')) &&
       (*(char *)(lVar2 + 7) == 'B')) {
      uVar4 = _objc_msgSend(DAT_101dc1c78,"newBufferWithBytes:length:options:",pcVar1,lVar8,0);
      uVar5 = _objc_msgSend(uVar4,"contents");
      pdVar6 = _dispatch_get_current_queue();
      uVar5 = _dispatch_data_create(uVar5,lVar8,pdVar6,0);
      uVar5 = _objc_msgSend(DAT_101dc1c78,"newLibraryWithData:error:",uVar5,local_50 + 1);
      local_50[0] = _objc_msgSend(uVar5,"newFunctionWithName:",&cf_vertex_program);
      local_58 = _objc_msgSend(uVar5,"newFunctionWithName:",&cf_fragment_program);
      _objc_release(uVar4);
    }
    else {
      uVar4 = _objc_alloc(&_OBJC_CLASS___MTLCompileOptions);
      uVar5 = _objc_msgSend(uVar4,"init");
      _objc_msgSend(uVar5,"setFastMathEnabled:",1);
      uVar4 = DAT_101dc1c78;
      uVar7 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",pcVar1);
      uVar4 = _objc_msgSend(uVar4,"newLibraryWithSource:options:error:",uVar7,uVar5,auStack_68);
      _objc_release(uVar5);
      local_50[0] = _objc_msgSend(uVar4,"newFunctionWithName:",&cf_vertex_program);
      local_58 = _objc_msgSend(uVar4,"newFunctionWithName:",&cf_fragment_program);
    }
    FUN_1010b6f08(&DAT_101dc1c08,&local_5c,local_50);
    FUN_1010b6f08(&DAT_101dc1c38,&local_5c,&local_58);
    lVar9 = local_50[0];
  }
  *(long *)(param_1 + 0x10) = lVar9;
  *(long *)(param_1 + 0x18) = local_58;
  return;
}




long FUN_1010b6e7c(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = *param_2;
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = uVar2 / uVar1;
    }
    uVar5 = (ulong)(uVar2 - uVar3 * uVar1);
    lVar4 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar4 + uVar5 * 8) != uVar2) {
      do {
        if (*(int *)(lVar4 + uVar5 * 8 + 4) == -1) break;
        uVar3 = uVar1;
        if (0 < (int)(uint)uVar5) {
          uVar3 = (uint)uVar5;
        }
        uVar5 = (ulong)(uVar3 - 1);
      } while (*(uint *)(lVar4 + uVar5 * 8) != uVar2);
      if ((int)uVar5 == -1) goto LAB_1010b6ef8;
    }
    uVar1 = *(uint *)(lVar4 + uVar5 * 8 + 4);
    if (uVar1 != 0xffffffff) {
      lVar4 = *(long *)(param_1 + 8) + (ulong)uVar1 * 8;
      goto LAB_1010b6efc;
    }
  }
LAB_1010b6ef8:
  lVar4 = 0;
LAB_1010b6efc:
  if (lVar4 != 0) {
    param_3 = lVar4;
  }
  return param_3;
}




void FUN_1010b6f08(uint *param_1,uint *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar4 = *param_2;
  uVar2 = param_1[4];
  param_1[4] = uVar2 + 1;
  uVar5 = *param_1;
  if (uVar5 >> 1 < uVar2 + 1) {
    FUN_1010b7134(param_1);
    uVar5 = *param_1;
  }
  uVar2 = 0;
  if (uVar5 != 0) {
    uVar2 = uVar4 / uVar5;
  }
  uVar7 = (ulong)(uVar4 - uVar2 * uVar5);
  lVar6 = *(long *)(param_1 + 2);
  iVar3 = *(int *)(lVar6 + uVar7 * 8 + 4);
  while (iVar3 != -1) {
    uVar2 = uVar5;
    if (0 < (int)(uint)uVar7) {
      uVar2 = (uint)uVar7;
    }
    uVar7 = (ulong)(uVar2 - 1);
    iVar3 = *(int *)(lVar6 + uVar7 * 8 + 4);
  }
  puVar1 = (uint *)(lVar6 + uVar7 * 8);
  *puVar1 = uVar4;
  uVar4 = FUN_1010b70cc(param_1,param_3);
  puVar1[1] = uVar4;
  return;
}




void FUN_1010b6fac(char *param_1)

{
  if (*param_1 != '\0') {
    _objc_release(*(undefined8 *)(param_1 + 0x18));
    _objc_release(*(undefined8 *)(param_1 + 0x10));
    _objc_release(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}




void FUN_1010b6ff0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




undefined8 FUN_1010b7000(undefined8 param_1)

{
  FUN_1010b6fac();
  return param_1;
}




void FUN_1010b7024(long param_1)

{
  DAT_101dc0f40 = *(undefined8 *)(param_1 + 0x18);
  DAT_101dc0f48 = *(undefined8 *)(param_1 + 0x10);
  DAT_101dc1b00 = 0;
  DAT_101dc1b8e = 1;
  return;
}




uint * FUN_1010b7044(uint *param_1)

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
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
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




void FUN_1010b70cc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_1010b7248(param_1 + 0x18,auStack_28);
    uVar1 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar1 * 8);
  }
  *(undefined8 *)(lVar2 + uVar1 * 8) = *param_2;
  return;
}




void FUN_1010b7134(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 local_30;
  void *local_28;
  
  local_30 = 0;
  local_28 = (void *)0x0;
  FUN_10002690c(&local_30,(*param_1 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
  uVar6 = *param_1;
  uVar7 = uVar6 - 1;
  if ((int)uVar7 < 0) {
    pvVar5 = *(void **)(param_1 + 2);
  }
  else {
    pvVar5 = *(void **)(param_1 + 2);
    do {
      uVar6 = *(uint *)((long)pvVar5 + (ulong)uVar7 * 8 + 4);
      if (uVar6 != 0xffffffff) {
        uVar3 = *(uint *)((long)pvVar5 + (ulong)uVar7 * 8);
        uVar4 = 0;
        if ((uint)local_30 != 0) {
          uVar4 = uVar3 / (uint)local_30;
        }
        uVar8 = (ulong)(uVar3 - uVar4 * (uint)local_30);
        iVar2 = *(int *)((long)local_28 + uVar8 * 8 + 4);
        while (iVar2 != -1) {
          uVar4 = (uint)local_30;
          if (0 < (int)(uint)uVar8) {
            uVar4 = (uint)uVar8;
          }
          uVar8 = (ulong)(uVar4 - 1);
          iVar2 = *(int *)((long)local_28 + uVar8 * 8 + 4);
        }
        puVar1 = (uint *)((long)local_28 + uVar8 * 8);
        *puVar1 = uVar3;
        puVar1[1] = uVar6;
      }
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
    uVar6 = *param_1;
  }
  uVar7 = param_1[1];
  *param_1 = (uint)local_30;
  param_1[1] = local_30._4_4_;
  local_30 = CONCAT44(uVar7,uVar6);
  *(void **)(param_1 + 2) = local_28;
  if (pvVar5 != (void *)0x0) {
    local_28 = pvVar5;
    operator_delete__(pvVar5);
  }
  return;
}




void FUN_1010b7248(uint *param_1,undefined8 *param_2)

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
    FUN_1010b72c8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1010b72c8(uint *param_1,uint param_2)

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




void FUN_1010b7344(void)

{
  DAT_101dc1c08 = 0;
  DAT_101dc1c10 = 0;
  DAT_101dc1c18 = 0;
  DAT_101dc1c20 = 0;
  DAT_101dc1c28 = 0;
  DAT_101dc1c30 = 0xffffffff;
  ___cxa_atexit(thunk_FUN_1010b7044,&DAT_101dc1c08,0x100000000);
  DAT_101dc1c38 = 0;
  DAT_101dc1c40 = 0;
  DAT_101dc1c48 = 0;
  DAT_101dc1c50 = 0;
  DAT_101dc1c58 = 0;
  DAT_101dc1c60 = 0xffffffff;
  ___cxa_atexit(thunk_FUN_1010b7044,&DAT_101dc1c38,0x100000000);
  return;
}




void FUN_1010b73bc(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x7f7fffff;
  *(ushort *)(param_1 + 5) = *(ushort *)(param_1 + 5) & 0xe000 | 0x1000;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




void FUN_1010b73f4(undefined8 *param_1)

{
  _objc_release(*param_1);
  *param_1 = 0;
  _objc_release(param_1[1]);
  param_1[1] = 0;
  *(ushort *)(param_1 + 5) = *(ushort *)(param_1 + 5) | 0x1000;
  return;
}




undefined8 * FUN_1010b7434(undefined8 *param_1)

{
  _objc_release(*param_1);
  *param_1 = 0;
  _objc_release(param_1[1]);
  param_1[1] = 0;
  *(ushort *)(param_1 + 5) = *(ushort *)(param_1 + 5) | 0x1000;
  return param_1;
}




void FUN_1010b7478(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}




void FUN_1010b7480(undefined8 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                  uint param_5)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = _objc_msgSend(&_OBJC_CLASS___MTLTextureDescriptor,
                        "texture2DDescriptorWithPixelFormat:width:height:mipmapped:",
                        *(undefined4 *)(&DAT_1013c97f8 + (ulong)param_5 * 4),param_2,param_3,
                        1 < param_4);
  uVar1 = *(uint *)((long)param_1 + 0x14);
  if ((uVar1 >> 2 & 1) != 0) {
    uVar3 = _objc_msgSend(uVar2,"usage");
    _objc_msgSend(uVar2,"setUsage:",uVar3 | 4);
    uVar1 = *(uint *)((long)param_1 + 0x14);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    uVar3 = _objc_msgSend(uVar2,"usage");
    _objc_msgSend(uVar2,"setUsage:",uVar3 | 2);
    uVar1 = *(uint *)((long)param_1 + 0x14);
  }
  if ((uVar1 & 1) != 0) {
    _objc_msgSend(uVar2,"setResourceOptions:",0);
  }
  if ((param_5 < 0x16) && ((1 << (ulong)(param_5 & 0x1f) & 0x200060U) != 0)) {
    _objc_msgSend(uVar2,"setResourceOptions:",0x20);
  }
  if (1 < param_4) {
    _objc_msgSend(uVar2,"setMipmapLevelCount:",param_4);
  }
  uVar2 = _objc_msgSend(DAT_101dc1c78,"newTextureWithDescriptor:",uVar2);
  *param_1 = uVar2;
  return;
}




void FUN_1010b75c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  int iVar1;
  undefined1 auStack_1d8 [384];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  if (param_2 == 0) {
    if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
      FUN_1010b76d8(param_1,0,0,param_6,param_3,param_4);
      return;
    }
  }
  else {
    iVar1 = FUN_1010b8b3c(param_2,param_6,param_5,param_3,param_4,auStack_1d8);
    if (iVar1 - 1U <= param_7) {
      param_7 = iVar1 - 1U;
    }
    FUN_1010b76d8(param_1,auStack_1d8 + (ulong)param_7 * 0x18,iVar1 - param_7,param_6,param_3,
                  param_4);
    if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010b76d8(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (*param_1 != 0) {
    _objc_release();
    *param_1 = 0;
    _objc_release(param_1[1]);
    param_1[1] = 0;
    *(ushort *)(param_1 + 5) = *(ushort *)(param_1 + 5) | 0x1000;
  }
  if ((param_2 != 0) && (0 < (int)param_3)) {
    FUN_1010b7798(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  FUN_1010b7480(param_1,param_5,param_6,1,param_4);
  *(int *)(param_1 + 2) = (int)param_4;
  *(int *)(param_1 + 3) = (int)param_5;
  *(int *)((long)param_1 + 0x1c) = (int)param_6;
  return;
}




void FUN_1010b7798(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4,uint param_5,
                  uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulong uStack_80;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  
  iVar5 = (int)param_4;
  if (iVar5 < 0x13) {
    uVar9 = 1;
    if ((iVar5 - 0x11U < 2) || (iVar5 == 0)) goto LAB_1010b7810;
  }
  else {
    if (iVar5 == 0x14) {
      uVar9 = 0x10;
      goto LAB_1010b7810;
    }
    if (iVar5 == 0x13) {
      uVar9 = 0xf;
      goto LAB_1010b7810;
    }
  }
  uVar9 = param_4;
LAB_1010b7810:
  *(uint *)(param_1 + 3) = param_5;
  *(uint *)((long)param_1 + 0x1c) = param_6;
  iVar8 = (int)uVar9;
  *(int *)(param_1 + 2) = iVar8;
  local_68 = (void *)0x0;
  if (iVar8 != iVar5) {
    uVar4 = FUN_1010b8840(uVar9,*(undefined4 *)(param_2 + 2),*(undefined4 *)((long)param_2 + 0x14));
    local_68 = operator_new__(uVar4 & 0xffffffff);
  }
  pvVar6 = local_68;
  *(int *)(param_1 + 2) = iVar8;
  FUN_1010b7480(param_1,*(undefined4 *)(param_2 + 2),*(undefined4 *)((long)param_2 + 0x14),param_3,
                uVar9);
  if (0 < (int)param_3) {
    uVar4 = 0;
    uVar1 = *(uint *)(&DAT_1013c98b8 + (uVar9 & 0xffffffff) * 4);
    do {
      uVar2 = param_5 >> (ulong)(*(uint *)((long)param_2 + 0xc) & 0x1f);
      if (uVar2 <= uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = param_6 >> (ulong)(*(uint *)((long)param_2 + 0xc) & 0x1f);
      if (uVar3 <= uVar1) {
        uVar3 = uVar1;
      }
      if (iVar5 - 0x11U < 4) {
        FUN_1010b88e8(*param_2,*(undefined4 *)(param_2 + 1),iVar8,&local_68,0,0);
      }
      else if (iVar5 == 0) {
        FUN_1010b8884(*param_2,(ulong)uVar2,(ulong)uVar3,local_68);
      }
      if (iVar8 - 7U < 4) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
        if (2 < iVar8 - 2U) {
          uVar7 = 3;
        }
        uVar7 = (uint)(*(int *)(&DAT_1013c9858 + (uVar9 & 0xffffffff) * 4) * *(int *)(param_2 + 2))
                >> (ulong)uVar7;
      }
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_70 = 1;
      pvVar6 = local_68;
      if (local_68 == (void *)0x0) {
        pvVar6 = (void *)*param_2;
      }
      uStack_80 = (ulong)uVar2;
      local_78 = (ulong)uVar3;
      _objc_msgSend(*param_1,"replaceRegion:mipmapLevel:withBytes:bytesPerRow:",&local_98,uVar4,
                    pvVar6,uVar7);
      uVar4 = uVar4 + 1;
      param_2 = param_2 + 3;
      pvVar6 = local_68;
    } while ((param_3 & 0xffffffff) != uVar4);
  }
  if (pvVar6 != (void *)0x0) {
    operator_delete__(pvVar6);
  }
  return;
}




void FUN_1010b79d0(long *param_1)

{
  if (*param_1 != 0) {
    _objc_msgSend(*param_1,"width");
  }
  return;
}




void FUN_1010b79f4(long *param_1)

{
  if (*param_1 != 0) {
    _objc_msgSend(*param_1,"height");
  }
  return;
}




void FUN_1010b7a18(long param_1,ushort param_2,ushort param_3,ushort param_4)

{
  *(ushort *)(param_1 + 0x28) =
       param_2 & 3 | (param_3 & 3) << 2 | (param_4 & 3) << 4 | *(ushort *)(param_1 + 0x28) & 0xffc0
       | 0x1000;
  return;
}




void FUN_1010b7a3c(long param_1,ushort param_2,ushort param_3,ushort param_4)

{
  *(ushort *)(param_1 + 0x28) =
       (param_3 & 3) << 8 | (param_2 & 3) << 6 | (param_4 & 3) << 10 |
       *(ushort *)(param_1 + 0x28) & 0xe03f | 0x1000;
  return;
}




void FUN_1010b7a60(void)

{
  return;
}




void FUN_1010b7a64(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x20) = param_1;
  *(undefined4 *)(param_3 + 0x24) = param_2;
  *(ushort *)(param_3 + 0x28) = *(ushort *)(param_3 + 0x28) | 0x1000;
  return;
}




void FUN_1010b7a7c(long *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  *param_1 = param_2;
  if (param_2 == 0) {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
    goto LAB_1010b7bc0;
  }
  _objc_retain(param_2);
  lVar2 = _objc_msgSend(param_2,"pixelFormat");
  if (lVar2 < 0xa0) {
    if (lVar2 < 0x2a) {
      if (lVar2 == 10) {
        uVar1 = 0x17;
      }
      else {
        if (lVar2 != 0x28) goto switchD_1010b7ae0_caseD_a1;
        uVar1 = 0xf;
      }
    }
    else if (lVar2 == 0x2a) {
      uVar1 = 0x10;
    }
    else if (lVar2 == 0x46) {
      uVar1 = 1;
    }
    else {
      if (lVar2 != 0x50) goto switchD_1010b7ae0_caseD_a1;
      uVar1 = 0xe;
    }
    goto LAB_1010b7b98;
  }
  if (0xb3 < lVar2) {
    if (lVar2 == 0xb4) {
      uVar1 = 0xc;
    }
    else if (lVar2 == 0xfc) {
      uVar1 = 0x15;
    }
    else {
      if (lVar2 != 0xfd) goto switchD_1010b7ae0_caseD_a1;
      uVar1 = 0x16;
    }
    goto LAB_1010b7b98;
  }
  switch(lVar2) {
  case 0xa0:
    uVar1 = 7;
    break;
  default:
    goto switchD_1010b7ae0_caseD_a1;
  case 0xa2:
    uVar1 = 8;
    break;
  case 0xa4:
    uVar1 = 9;
    break;
  case 0xa6:
    uVar1 = 10;
  }
LAB_1010b7b98:
  *(undefined4 *)(param_1 + 2) = uVar1;
switchD_1010b7ae0_caseD_a1:
  uVar1 = _objc_msgSend(param_2,"height");
  *(undefined4 *)((long)param_1 + 0x1c) = uVar1;
  uVar1 = _objc_msgSend(param_2,"width");
LAB_1010b7bc0:
  *(undefined4 *)(param_1 + 3) = uVar1;
  return;
}




void FUN_1010b7bd0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_release(param_1[1]);
  uVar2 = _objc_alloc(&_OBJC_CLASS___MTLSamplerDescriptor);
  uVar2 = _objc_msgSend(uVar2,"init");
  _objc_msgSend(uVar2,"setMinFilter:",
                *(undefined4 *)
                 ((long)&PTR___mh_execute_header_1013c9918 +
                 ((ulong)(*(ushort *)(param_1 + 5) >> 6) & 3) * 4));
  _objc_msgSend(uVar2,"setMagFilter:",
                *(undefined4 *)
                 ((long)&PTR___mh_execute_header_1013c9918 +
                 ((ulong)*(byte *)((long)param_1 + 0x29) & 3) * 4));
  uVar3 = _objc_msgSend(*param_1,"mipmapLevelCount");
  uVar1 = FUN_1010b4470(1 < uVar3,*(ushort *)(param_1 + 5) >> 10 & 3);
  _objc_msgSend(uVar2,"setMipFilter:",uVar1);
  _objc_msgSend(uVar2,"setSAddressMode:",
                *(undefined4 *)(&DAT_1013c9928 + ((ulong)*(ushort *)(param_1 + 5) & 3) * 4));
  _objc_msgSend(uVar2,"setTAddressMode:",
                *(undefined4 *)(&DAT_1013c9928 + ((ulong)(*(ushort *)(param_1 + 5) >> 2) & 3) * 4));
  _objc_msgSend(uVar2,"setRAddressMode:",
                *(undefined4 *)(&DAT_1013c9928 + ((ulong)(*(ushort *)(param_1 + 5) >> 4) & 3) * 4));
  _objc_msgSend(*(undefined4 *)(param_1 + 4),uVar2,"setLodMinClamp:");
  _objc_msgSend(*(undefined4 *)((long)param_1 + 0x24),uVar2,"setLodMaxClamp:");
  uVar4 = _objc_msgSend(DAT_101dc1c78,"newSamplerStateWithDescriptor:",uVar2);
  param_1[1] = uVar4;
  _objc_release(uVar2);
  *(ushort *)(param_1 + 5) = *(ushort *)(param_1 + 5) & 0xefff;
  return;
}




void FUN_1010b7d44(undefined8 param_1,uint param_2)

{
  (&DAT_101dc1b08)[param_2] = 0;
  DAT_101dc1b04 = DAT_101dc1b04 | 1 << (ulong)(param_2 & 0x1f);
  return;
}




void FUN_1010b7d6c(uint param_1,long param_2)

{
  uint uVar1;
  
  if ((*(byte *)(param_2 + 0x29) >> 4 & 1) != 0) {
    FUN_1010b7bd0(param_2);
  }
  if ((&DAT_101dc1b08)[param_1] == 0) {
    uVar1 = 1 << (ulong)(param_1 & 0x1f);
  }
  else {
    (&DAT_101dc1b08)[param_1] = 0;
    uVar1 = 1 << (ulong)(param_1 & 0x1f);
    DAT_101dc1b04 = DAT_101dc1b04 | uVar1;
  }
  (&DAT_101dc1b08)[param_1] = param_2;
  DAT_101dc1b04 = DAT_101dc1b04 | uVar1;
  return;
}




void FUN_1010b7de4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = 0x18;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2);
    *puVar1 = 0;
    *(undefined2 *)((long)puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    lVar2 = lVar2 + 0x10;
  } while (puVar1 + 2 != param_1 + 9);
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined2 *)((long)param_1 + 0x4c) = 0;
  *(undefined1 *)((long)param_1 + 0x4e) = 0;
  return;
}




void FUN_1010b7e24(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (0xf < *(byte *)(param_1 + 0x4e)) {
    uVar1 = 0;
    puVar2 = (undefined8 *)(param_1 + 0x18);
    do {
      _objc_release(*puVar2);
      *puVar2 = 0;
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 2;
    } while (uVar1 < *(byte *)(param_1 + 0x4e) >> 4);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}




long FUN_1010b7e7c(long param_1)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1010b7e24(param_1);
  }
  return param_1;
}




void FUN_1010b7eac(long param_1,undefined4 param_2)

{
  *(undefined2 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  return;
}




ulong FUN_1010b7ebc(long param_1,long param_2,uint param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(*(byte *)(param_1 + 0x4e) >> 4);
  *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) + 0x10;
  if (param_2 == 0) {
    uVar1 = _objc_msgSend(DAT_101dc1c78,"newBufferWithLength:options:",param_3,param_4 == 6);
  }
  else {
    uVar1 = _objc_msgSend(DAT_101dc1c78,"newBufferWithBytes:length:options:",param_2);
  }
  param_1 = param_1 + uVar2 * 0x10;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(short *)(param_1 + 0x24) = (short)(param_4 << 0xc);
  *(uint *)(param_1 + 0x20) = param_3 & 0xffffff | param_5 << 0x18;
  return uVar2;
}




void FUN_1010b7f64(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                  undefined1 param_6,int param_7)

{
  long lVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  uint *puVar7;
  
  lVar1 = param_1 + (ulong)param_3 * 0x10;
  puVar7 = (uint *)(lVar1 + 0x20);
  uVar3 = *puVar7;
  *puVar7 = uVar3;
  uVar6 = (ushort)(1 << (ulong)(param_2 & 0x1f));
  uVar5 = *(ushort *)(lVar1 + 0x24) & 0xf000 | (uVar6 | *(ushort *)(lVar1 + 0x24)) & 0xfff;
  *(ushort *)(lVar1 + 0x24) = uVar5;
  if (param_7 != 0) {
    iVar4 = *(int *)(&UNK_1013c9a50 + (ulong)(param_5 - 1) * 4 + (ulong)param_4 * 0x10);
    *(ushort *)(lVar1 + 0x24) = uVar5;
    *puVar7 = uVar3 & 0xffffff | (iVar4 + (uVar3 >> 0x18)) * 0x1000000;
  }
  puVar2 = (undefined1 *)(param_1 + (ulong)param_2 * 2);
  puVar2[1] = (byte)param_4 & 7 | (byte)((param_5 & 7) << 3) | (byte)(param_3 << 6);
  *puVar2 = param_6;
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | uVar6;
  *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) & 0xf0 | *(byte *)(param_1 + 0x4e) + 1 & 0xf
  ;
  return;
}




void FUN_1010b7ff8(void)

{
  return;
}




void FUN_1010b7ffc(void)

{
  return;
}




void FUN_1010b8000(long param_1,ulong param_2)

{
  _objc_msgSend(*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 0x10 + 0x18),"contents");
  return;
}




long FUN_1010b8014(long param_1,uint param_2)

{
  byte *pbVar1;
  long lVar2;
  
  if ((*(ushort *)(param_1 + 0x4c) >> (ulong)(param_2 & 0x1f) & 1) == 0) {
    lVar2 = 0;
  }
  else {
    pbVar1 = (byte *)(param_1 + (ulong)param_2 * 2);
    lVar2 = _objc_msgSend(*(undefined8 *)(param_1 + ((ulong)(pbVar1[1] >> 2) & 0x30) + 0x18),
                          "contents");
    lVar2 = lVar2 + (ulong)*pbVar1;
  }
  return lVar2;
}




undefined1 FUN_1010b806c(long param_1,uint param_2)

{
  return *(undefined1 *)
          (param_1 + ((ulong)(*(byte *)(param_1 + (ulong)param_2 * 2 + 1) >> 2) & 0x30) + 0x23);
}




void FUN_1010b8088(void)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  
  lVar1 = 0;
  do {
    *(undefined4 *)((long)&DAT_101dc0fb0 + lVar1) = 0xffffffff;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x120);
  uVar2 = 0;
  DAT_101dc10f8 = 0;
  piVar3 = &DAT_101dc0fc8;
  lVar1 = 0xb;
  do {
    if (((&DAT_101dc0fa0)[uVar2 * 3] != 0) && ((&DAT_101dc0fb0)[uVar2 * 6] == -1)) {
      (&DAT_101dc10c0)[DAT_101dc10f8] = &DAT_101dc0fa0 + uVar2 * 3;
      (&DAT_101dc0fb0)[uVar2 * 6] = DAT_101dc10f8;
      if (uVar2 < 0xb) {
        lVar4 = (&DAT_101dc0fa8)[uVar2 * 3];
        piVar5 = piVar3;
        lVar6 = lVar1;
        do {
          if (*(long *)(piVar5 + -2) == lVar4) {
            *piVar5 = DAT_101dc10f8;
          }
          piVar5 = piVar5 + 6;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      DAT_101dc10f8 = DAT_101dc10f8 + 1;
    }
    uVar2 = uVar2 + 1;
    lVar1 = lVar1 + -1;
    piVar3 = piVar3 + 6;
  } while (uVar2 != 0xc);
  DAT_101dc1b8f = 0;
  return;
}




undefined8 FUN_1010b8148(void)

{
  undefined8 *puVar1;
  long lVar2;
  char *pcVar3;
  undefined1 *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined7 local_30;
  undefined4 uStack_29;
  
  if (DAT_101dc1b8f != '\0') {
    FUN_1010b8088();
  }
  lVar2 = 0;
  local_40 = 0;
  uStack_38 = 0;
  pcVar3 = (char *)&DAT_101dc0fb0;
  local_30 = 0;
  uStack_29 = 0;
  do {
    if (*(long *)(pcVar3 + -0x10) == 0) {
      *(undefined2 *)((long)&local_40 + lVar2) = 0;
    }
    else {
      *(undefined2 *)((long)&local_40 + lVar2) = *(undefined2 *)(*(long *)(pcVar3 + -0x10) + lVar2);
      *(byte *)((long)&local_40 + lVar2 + 1) =
           *(byte *)((long)&local_40 + lVar2 + 1) & 0x3f | *pcVar3 << 6;
    }
    lVar2 = lVar2 + 2;
    pcVar3 = pcVar3 + 0x18;
  } while (lVar2 != 0x18);
  if (0 < (int)DAT_101dc10f8) {
    puVar4 = (undefined1 *)((long)&uStack_29 + 1);
    plVar5 = &DAT_101dc10c0;
    uVar6 = (ulong)DAT_101dc10f8;
    do {
      *puVar4 = *(undefined1 *)(*(long *)(*plVar5 + 8) + 0xb);
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 1;
      plVar5 = plVar5 + 1;
    } while (uVar6 != 0);
  }
  if (DAT_101dc10f8 < 3) {
    _bzero((void *)((long)&uStack_29 + (ulong)DAT_101dc10f8 + 1),(ulong)(2 - DAT_101dc10f8) + 1);
  }
  puVar1 = (undefined8 *)FUN_1010b85b0(&DAT_101dc1bb8,&local_40);
  if (puVar1 == &DAT_101dc1bc0) {
    uVar7 = FUN_1010b8270();
    puVar1 = (undefined8 *)FUN_1010b8478(&DAT_101dc1bb8,&local_40);
    *puVar1 = uVar7;
  }
  else {
    uVar7 = puVar1[8];
  }
  return uVar7;
}




undefined8 FUN_1010b8270(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  
  if (DAT_101dc1b8f != '\0') {
    FUN_1010b8088();
  }
  uVar6 = _objc_msgSend(&_OBJC_CLASS___MTLVertexDescriptor,"vertexDescriptor");
  _objc_retain();
  lVar10 = 0;
  lVar8 = 0;
  piVar9 = &DAT_101dc0fb0;
  do {
    if (*(long *)(piVar9 + -4) != 0) {
      puVar1 = (undefined1 *)(*(long *)(piVar9 + -4) + lVar10);
      bVar3 = puVar1[1];
      uVar2 = *(undefined4 *)
               (&UNK_1013c99dc + ((ulong)bVar3 & 7) * 0x10 + ((ulong)(bVar3 >> 3) & 7) * 4);
      uVar7 = _objc_msgSend(uVar6,"attributes");
      uVar7 = _objc_msgSend(uVar7,"objectAtIndexedSubscript:",lVar8);
      _objc_msgSend(uVar7,"setFormat:",uVar2);
      uVar4 = *puVar1;
      uVar7 = _objc_msgSend(uVar6,"attributes");
      uVar7 = _objc_msgSend(uVar7,"objectAtIndexedSubscript:",lVar8);
      _objc_msgSend(uVar7,"setOffset:",uVar4);
      iVar5 = *piVar9;
      uVar7 = _objc_msgSend(uVar6,"attributes");
      uVar7 = _objc_msgSend(uVar7,"objectAtIndexedSubscript:",lVar8);
      _objc_msgSend(uVar7,"setBufferIndex:",(long)iVar5 + 8);
    }
    lVar8 = lVar8 + 1;
    piVar9 = piVar9 + 6;
    lVar10 = lVar10 + 2;
  } while (lVar8 != 0xc);
  if (0 < DAT_101dc10f8) {
    lVar8 = 0;
    do {
      uVar7 = _objc_msgSend(uVar6,"layouts");
      uVar7 = _objc_msgSend(uVar7,"objectAtIndexedSubscript:",lVar8 + 8);
      _objc_msgSend(uVar7,"setStride:",*(undefined1 *)(*(long *)((&DAT_101dc10c0)[lVar8] + 8) + 0xb)
                   );
      _objc_msgSend(uVar7,"setStepFunction:",1);
      _objc_msgSend(uVar7,"setStepRate:",1);
      lVar8 = lVar8 + 1;
    } while (lVar8 < DAT_101dc10f8);
  }
  return uVar6;
}




long FUN_1010b8478(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_1010b862c(param_1,&local_38,param_2);
  pvVar2 = (void *)*puVar1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = operator_new(0x48);
    uVar3 = *param_2;
    *(undefined8 *)((long)pvVar2 + 0x28) = param_2[1];
    *(undefined8 *)((long)pvVar2 + 0x20) = uVar3;
    uVar3 = *(undefined8 *)((long)param_2 + 0xb);
    *(undefined8 *)((long)pvVar2 + 0x33) = *(undefined8 *)((long)param_2 + 0x13);
    *(undefined8 *)((long)pvVar2 + 0x2b) = uVar3;
    *(undefined8 *)((long)pvVar2 + 0x40) = 0;
    FUN_1010b86d8(param_1,local_38,puVar1,pvVar2);
  }
  return (long)pvVar2 + 0x40;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b84f8(long param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  uVar3 = param_2 & (param_3 ^ 0xffffffff) & (uint)*(ushort *)(param_1 + 0x4c);
  if (0xf < *(byte *)(param_1 + 0x4e)) {
    uVar4 = (ulong)(*(byte *)(param_1 + 0x4e) >> 4);
    lVar5 = param_1 + 0x20;
    do {
      puVar1 = (ushort *)(lVar5 + 4);
      lVar5 = lVar5 + 0x10;
      uVar2 = ~(uint)*puVar1 | 0xfffff000;
      if ((*puVar1 & 0x4000) != 0) {
        uVar2 = 0xffffffff;
      }
      uVar3 = uVar2 & uVar3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  lVar5 = 0;
  plVar6 = &DAT_101dc0fa0;
  lVar7 = 1;
  do {
    uVar2 = 1 << (ulong)((uint)lVar5 & 0x1f);
    if ((uVar2 & param_3) == 0) {
      if ((uVar2 & uVar3) == 0) {
        *plVar6 = 0;
        plVar6[1] = 0;
      }
      else {
        *plVar6 = param_1;
        plVar6[1] = param_1 + ((ulong)(*(byte *)(param_1 + lVar7) >> 2) & 0x30) + 0x18;
      }
    }
    lVar5 = lVar5 + 1;
    plVar6 = plVar6 + 3;
    lVar7 = lVar7 + 2;
  } while (lVar5 != 0xc);
  _DAT_101dc1b8e = 0x101;
  return;
}




long * FUN_1010b85b0(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      uVar1 = FUN_1004d2898(plVar5 + 4,param_2,0x1b);
      if (-1 < (int)uVar1) {
        plVar4 = plVar5;
      }
      plVar5 = (long *)plVar5[uVar1 >> 0x1f];
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (iVar2 = FUN_1004d2898(param_2,plVar4 + 4,0x1b), -1 < iVar2)) {
      return plVar4;
    }
  }
  return plVar3;
}




long * FUN_1010b862c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  if ((long *)*plVar2 == (long *)0x0) {
    *param_2 = plVar2;
    return plVar2;
  }
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar2;
  do {
    while( true ) {
      plVar4 = plVar2;
      iVar1 = FUN_1004d2898(param_3,plVar4 + 4,0x1b);
      if (-1 < iVar1) break;
      plVar3 = plVar4;
      plVar2 = (long *)*plVar4;
      if ((long *)*plVar4 == (long *)0x0) {
        *param_2 = plVar4;
        return plVar4;
      }
    }
    iVar1 = FUN_1004d2898(plVar4 + 4,param_3,0x1b);
    if (-1 < iVar1) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  } while ((long *)*plVar3 != (long *)0x0);
  *param_2 = plVar4;
  return plVar3;
}




void FUN_1010b86d8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




undefined8 FUN_1010b872c(void)

{
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b8734(void)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  operator_new(0x50);
  DAT_101dc1c68 = FUN_1010b7de4();
  FUN_1010b7eac(DAT_101dc1c68,6);
  FUN_1010b7ebc(DAT_101dc1c68,0,0x60,4,0);
  FUN_1010b7f64(DAT_101dc1c68,0,0,4,2,0,1);
  FUN_1010b7f64(DAT_101dc1c68,5,0,4,2,8,1);
  FUN_1010b7ff8(DAT_101dc1c68,0xffff,4);
  puVar1 = (undefined8 *)FUN_1010b8000(DAT_101dc1c68,0);
  auVar2 = NEON_fmov(0x3f800000,4);
  puVar1[1] = 0x3f80000000000000;
  *puVar1 = 0x3f800000bf800000;
  puVar1[3] = auVar2._8_8_;
  puVar1[2] = auVar2._0_8_;
  puVar1[5] = 0x3f800000;
  puVar1[4] = 0xbf8000003f800000;
  puVar1[7] = 0x3f800000;
  puVar1[6] = 0xbf8000003f800000;
  auVar2 = _DAT_1013c9ac0;
  puVar1[9] = DAT_1013c9ac0._8_8_;
  puVar1[8] = auVar2._0_8_;
  puVar1[0xb] = 0x3f80000000000000;
  puVar1[10] = 0x3f800000bf800000;
  FUN_1010b7ffc(DAT_101dc1c68,0xffff,0xffffffff);
  return;
}




void FUN_1010b8810(void)

{
  void *pvVar1;
  
  if (DAT_101dc1c68 != 0) {
    pvVar1 = (void *)FUN_1010b7e7c();
    operator_delete(pvVar1);
  }
  DAT_101dc1c68 = 0;
  return;
}




uint FUN_1010b8840(ulong param_1,int param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  
  if (3 < (param_1 & 0xffffffff) - 0x11) {
    lVar1 = (param_1 & 0xffffffff) * 0x10;
    uVar2 = (uint)(param_3 * param_2 * *(int *)(&DAT_1013c9b40 + lVar1)) >> 3;
    if (uVar2 <= *(uint *)(&DAT_1013c9b48 + lVar1)) {
      uVar2 = *(uint *)(&DAT_1013c9b48 + lVar1);
    }
    return uVar2;
  }
  return 0xffffffff;
}




void FUN_1010b8884(long param_1,int param_2,int param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = param_3 * param_2;
  if (uVar1 != 0) {
    uVar2 = 0;
    uVar3 = 3;
    do {
      *(undefined1 *)(param_4 + (ulong)(uVar3 - 3)) =
           *(undefined1 *)(param_1 + (uVar2 & 0xffffffff));
      *(undefined1 *)(param_4 + (ulong)(uVar3 - 2)) =
           *(undefined1 *)(param_1 + (ulong)((int)uVar2 + 1));
      *(undefined1 *)(param_4 + (ulong)(uVar3 - 1)) =
           *(undefined1 *)(param_1 + (ulong)((int)uVar2 + 2));
      *(undefined1 *)(param_4 + (ulong)uVar3) = 0xff;
      uVar3 = uVar3 + 4;
      uVar2 = uVar2 + 3;
    } while ((ulong)uVar1 * 2 + (ulong)uVar1 != uVar2);
  }
  return;
}




bool FUN_1010b88e8(undefined8 param_1,undefined4 param_2,int param_3,undefined8 *param_4,
                  int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  void *pvVar9;
  undefined1 local_200 [8];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  void *local_1c8;
  undefined8 uStack_1c0;
  ulong local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_134;
  int local_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  void *local_100;
  uint local_f8;
  undefined4 uStack_f4;
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  int local_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  FUN_1010c1230(param_1,param_2,&local_98,0x203);
  if (param_5 != (int *)0x0) {
    *param_5 = local_98;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = iStack_94;
  }
  iVar4 = 5;
  if (param_3 != 0x10) {
    iVar4 = 1;
  }
  iVar6 = 0x10;
  if (param_3 != 0x10) {
    iVar6 = 0;
  }
  iVar1 = 6;
  if (param_3 != 0xf) {
    iVar1 = iVar4;
  }
  iVar4 = 0x10;
  if (param_3 != 0xf) {
    iVar4 = iVar6;
  }
  iVar6 = param_3;
  if (param_3 != 1) {
    iVar6 = 1;
  }
  iVar7 = 0x20;
  if (param_3 != 1) {
    iVar7 = 0;
  }
  iVar2 = param_3;
  if (param_3 != 0) {
    iVar2 = iVar6;
  }
  iVar6 = 0x18;
  if (param_3 != 0) {
    iVar6 = iVar7;
  }
  if (param_3 < 0xf) {
    iVar4 = iVar6;
    iVar1 = iVar2;
  }
  uVar3 = (uint)(local_98 * iVar4) >> 3;
  uVar8 = (ulong)(uVar3 * iStack_94);
  pvVar9 = (void *)*param_4;
  pvVar5 = pvVar9;
  if (pvVar9 == (void *)0x0) {
    pvVar5 = operator_new__(uVar8);
  }
  *param_4 = pvVar5;
  FUN_1010b96a4(&local_110,0x203);
  uStack_104 = 1;
  iStack_10c = local_98;
  iStack_108 = iStack_94;
  local_110 = iVar1;
  local_100 = pvVar5;
  local_f8 = uVar3;
  local_f0 = uVar8;
  FUN_1010c11d0(local_200,0x203);
  uStack_1f8 = uStack_90;
  uStack_1e8 = uStack_80;
  uStack_1f0 = uStack_88;
  uStack_190 = uStack_c8;
  local_198 = local_d0;
  uStack_180 = uStack_b8;
  local_188 = uStack_c0;
  uStack_170 = uStack_a8;
  local_178 = local_b0;
  uStack_1d0 = CONCAT44(uStack_104,iStack_108);
  local_1d8 = CONCAT44(iStack_10c,local_110);
  uStack_1c0 = CONCAT44(uStack_f4,local_f8);
  local_1c8 = local_100;
  uStack_1b0 = uStack_e8;
  local_1b8 = local_f0;
  local_1e0 = local_78;
  local_168 = local_a0;
  uStack_1a0 = uStack_d8;
  local_1a8 = uStack_e0;
  local_134 = 100;
  iVar4 = FUN_1010c124c(param_1,param_2,local_200);
  if ((iVar4 != 0) && (pvVar9 == (void *)0x0)) {
    operator_delete__(pvVar5);
    *param_4 = 0;
  }
  return iVar4 == 0;
}




undefined4 FUN_1010b8aa4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined1 auStack_2c [4];
  undefined4 local_28;
  undefined1 auStack_24 [4];
  
  uVar1 = FUN_1010b90ac(param_1,auStack_24,&local_28,auStack_2c,&local_38,&local_30,&uStack_34,0);
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[0xf] = 0;
  param_2[0xe] = 0;
  param_2[0x11] = 0;
  param_2[0x10] = 0;
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  param_2[0x15] = 0;
  param_2[0x14] = 0;
  param_2[0x17] = 0;
  param_2[0x16] = 0;
  param_2[0x19] = 0;
  param_2[0x18] = 0;
  param_2[0x1b] = 0;
  param_2[0x1a] = 0;
  param_2[0x1d] = 0;
  param_2[0x1c] = 0;
  param_2[0x1f] = 0;
  param_2[0x1e] = 0;
  param_2[0x21] = 0;
  param_2[0x20] = 0;
  param_2[0x23] = 0;
  param_2[0x22] = 0;
  param_2[0x25] = 0;
  param_2[0x24] = 0;
  param_2[0x27] = 0;
  param_2[0x26] = 0;
  param_2[0x29] = 0;
  param_2[0x28] = 0;
  param_2[0x2b] = 0;
  param_2[0x2a] = 0;
  param_2[0x2d] = 0;
  param_2[0x2c] = 0;
  param_2[0x2f] = 0;
  param_2[0x2e] = 0;
  FUN_1010b8b3c(param_1 + (uVar1 & 0xffffffff),local_38,local_28,local_30,uStack_34,param_2);
  return local_28;
}




ulong FUN_1010b8b3c(long param_1,uint param_2,ulong param_3,uint param_4,uint param_5,long *param_6)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((int)param_3 != 0) {
    uVar5 = 0;
    uVar6 = 0;
    lVar1 = (ulong)param_2 * 0x10;
    uVar3 = *(uint *)(&DAT_1013c9b44 + lVar1);
    do {
      puVar2 = (uint *)(param_1 + uVar6);
      *param_6 = (long)puVar2;
      *(uint *)(param_6 + 2) = param_4;
      *(uint *)((long)param_6 + 0x14) = param_5;
      *(int *)((long)param_6 + 0xc) = (int)uVar5;
      if ((ulong)param_2 - 0x11 < 4) {
        uVar7 = *puVar2;
        *param_6 = (long)(puVar2 + 1);
        uVar8 = uVar7 + 4;
      }
      else {
        uVar4 = *(uint *)(&DAT_1013c9b48 + lVar1);
        uVar7 = param_4 * param_5 * *(int *)(&DAT_1013c9b40 + lVar1) >> 3;
        uVar8 = uVar7;
        if (uVar7 <= uVar4) {
          uVar7 = uVar4;
          uVar8 = uVar4;
        }
      }
      uVar6 = (ulong)(uVar8 + (int)uVar6);
      uVar8 = param_4 >> 1;
      uVar4 = param_4 >> 1;
      *(uint *)(param_6 + 1) = uVar7;
      param_4 = uVar3;
      if (uVar3 <= uVar8) {
        param_4 = uVar4;
      }
      uVar8 = param_5 >> 1;
      uVar7 = param_5 >> 1;
      param_5 = uVar3;
      if (uVar3 <= uVar7) {
        param_5 = uVar8;
      }
      uVar5 = uVar5 + 1;
      param_6 = param_6 + 3;
    } while ((param_3 & 0xffffffff) != uVar5);
  }
  return param_3;
}




undefined1  [16] FUN_1010b8be8(undefined8 param_1,long param_2,int param_3,uint param_4)

{
  int *piVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  
  uVar2 = (ulong)*(uint *)(param_2 + 8);
  if (*(uint *)(param_2 + 8) != 0) {
    piVar1 = (int *)(param_2 + 0x18);
    pbVar3 = (byte *)(param_2 + 0xc);
    do {
      if (*pbVar3 == param_4) {
        param_2 = param_2 + (ulong)(uint)piVar1[-1];
        if ((int)uVar2 == 1) {
          param_3 = param_3 - (int)param_2;
        }
        else {
          param_3 = *piVar1 - piVar1[-1];
        }
        goto LAB_1010b8c40;
      }
      piVar1 = piVar1 + 1;
      pbVar3 = pbVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  param_3 = 0;
  param_2 = 0;
LAB_1010b8c40:
  auVar4._8_4_ = param_3;
  auVar4._0_8_ = param_2;
  auVar4._12_4_ = 0;
  return auVar4;
}




undefined1  [16] thunk_FUN_1010b8be8(undefined8 param_1,long param_2,int param_3,uint param_4)

{
  int *piVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  
  uVar2 = (ulong)*(uint *)(param_2 + 8);
  if (*(uint *)(param_2 + 8) != 0) {
    piVar1 = (int *)(param_2 + 0x18);
    pbVar3 = (byte *)(param_2 + 0xc);
    do {
      if (*pbVar3 == param_4) {
        param_2 = param_2 + (ulong)(uint)piVar1[-1];
        if ((int)uVar2 == 1) {
          param_3 = param_3 - (int)param_2;
        }
        else {
          param_3 = *piVar1 - piVar1[-1];
        }
        goto LAB_1010b8c40;
      }
      piVar1 = piVar1 + 1;
      pbVar3 = pbVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  param_3 = 0;
  param_2 = 0;
LAB_1010b8c40:
  auVar4._8_4_ = param_3;
  auVar4._0_8_ = param_2;
  auVar4._12_4_ = 0;
  return auVar4;
}




void FUN_1010b8c4c(uint *param_1,uint param_2,undefined4 param_3,ulong param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_34;
  
  puVar1 = (uint *)((long)param_1 + (ulong)(param_2 & 0xfffffffc));
  local_34 = param_3;
  uVar2 = FUN_100015208(&local_34,4,param_4);
  for (; param_1 < puVar1; param_1 = param_1 + 1) {
    uVar3 = (uint)param_4;
    param_4 = (ulong)*param_1;
    *param_1 = uVar2 ^ (uVar3 >> 0x1f | uVar3 << 1) ^ *param_1;
  }
  return;
}




void FUN_1010b8cbc(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_1 + 4);
  lVar1 = param_1 + 4 + (uVar2 & 0xffffffff);
  uVar2 = (**(code **)(*param_2 + 0x18))(param_2,lVar1);
  lVar1 = lVar1 + (uVar2 & 0xffffffff);
  uVar2 = (**(code **)(*param_2 + 0x20))(param_2,lVar1);
  lVar1 = lVar1 + (uVar2 & 0xffffffff);
  uVar2 = (**(code **)(*param_2 + 0x28))(param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001010b8d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))(param_2,lVar1 + (uVar2 & 0xffffffff));
  return;
}




undefined8 FUN_1010b8d48(void *param_1,void *param_2)

{
  _memmove(param_2,param_1,0x47);
  return 0x47;
}




undefined8
FUN_1010b8d70(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
             undefined1 *param_5,undefined4 *param_6)

{
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = param_1[1];
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = param_1[2];
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = param_1[3];
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = *(undefined4 *)(param_1 + 4);
  }
  return 8;
}




undefined8
FUN_1010b8db4(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 *param_4,
             undefined4 *param_5,undefined4 *param_6,undefined1 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = param_1[1];
  }
  uVar2 = *(undefined8 *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 2);
  param_4[2] = *(undefined8 *)(param_1 + 0x12);
  param_4[1] = uVar2;
  *param_4 = uVar1;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_1 + 0x1a);
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = *(undefined4 *)(param_1 + 0x1e);
  }
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = param_1[0x22];
  }
  return 0x23;
}




undefined8
FUN_1010b8e08(undefined1 *param_1,undefined1 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 1);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 5);
  }
  return 9;
}




void FUN_1010b8e34(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0x30435352;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return;
}




void FUN_1010b8e4c(void)

{
  return;
}




byte FUN_1010b8e50(long param_1)

{
  return *(byte *)(param_1 + 0xc) >> 4;
}




void FUN_1010b8e5c(long param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 local_34;
  
  if (*(byte *)(param_1 + 0xc) < 0x10) {
    uVar1 = 0;
    *param_2 = 0;
  }
  else {
    local_34 = *(undefined4 *)(&DAT_101873580 + (ulong)(*(byte *)(param_1 + 0xc) >> 4) * 4);
    uVar1 = FUN_100015208(&local_34,4);
    *param_2 = uVar1;
    uVar1 = *(uint *)(param_1 + 4) ^ uVar1;
  }
  *param_3 = uVar1;
  return;
}




int FUN_1010b8ed8(undefined1 *param_1,undefined1 *param_2,byte *param_3,long param_4,
                 undefined4 *param_5)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_1;
  }
  bVar1 = param_1[1];
  if (param_3 != (byte *)0x0) {
    *param_3 = bVar1;
  }
  uVar2 = 2;
  if ((param_4 != 0) && (bVar1 != 0)) {
    lVar3 = 0;
    do {
      *(undefined4 *)(param_4 + lVar3) = *(undefined4 *)(param_1 + lVar3 + 2);
      lVar3 = lVar3 + 4;
    } while ((ulong)bVar1 * 4 - lVar3 != 0);
    uVar2 = (int)lVar3 + 2;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_1 + uVar2);
  }
  return uVar2 + 4;
}




undefined8
FUN_1010b8f34(long param_1,long *param_2,undefined1 *param_3,byte *param_4,byte *param_5,
             undefined1 *param_6,undefined4 *param_7)

{
  if (param_2 != (long *)0x0) {
    *param_2 = param_1;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = *(undefined1 *)(param_1 + 0x21);
  }
  if (param_4 != (byte *)0x0) {
    *param_4 = *(byte *)(param_1 + 0x22) & 0xf;
  }
  if (param_5 != (byte *)0x0) {
    *param_5 = *(byte *)(param_1 + 0x22) >> 4;
  }
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = *(undefined1 *)(param_1 + 0x23);
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = *(undefined4 *)(param_1 + 0x24);
  }
  return 0x28;
}




undefined8
FUN_1010b8f88(void *param_1,void *param_2,undefined1 *param_3,undefined1 *param_4,byte *param_5,
             undefined1 *param_6)

{
  if (param_2 != (void *)0x0) {
    _memmove(param_2,param_1,0x300);
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = *(undefined1 *)((long)param_1 + 0x300);
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = *(undefined1 *)((long)param_1 + 0x301);
  }
  if (param_5 != (byte *)0x0) {
    *param_5 = *(byte *)((long)param_1 + 0x301) >> 4;
  }
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = *(undefined1 *)((long)param_1 + 0x302);
  }
  return 0x303;
}




undefined8 FUN_1010b9010(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,long *param_4)

{
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = param_1[1];
  }
  if (param_4 != (long *)0x0) {
    *param_4 = (long)(param_1 + 2);
  }
  return 0x23;
}




void * FUN_1010b903c(undefined8 *param_1,undefined8 *param_2,void *param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_2 + 1) = uVar1;
  *param_2 = uVar2;
  uVar1 = uVar1 >> 0x10;
  if (uVar1 <= param_4) {
    param_4 = uVar1;
  }
  _memmove(param_3,(void *)((long)param_1 + 0xc),(ulong)(param_4 << 3));
  return (void *)((long)param_1 + 0xc + (ulong)*(ushort *)((long)param_2 + 10) * 8);
}




undefined8 * FUN_1010b9094(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  param_2[2] = param_1[2];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return param_1 + 3;
}




int FUN_1010b90ac(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_1[1];
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = param_1[2];
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = param_1[3];
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = param_1[4];
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = param_1[5];
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = param_1[6];
  }
  return param_1[6] * 0xc + 0x1c;
}




void FUN_1010b9114(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_1010be924(*(undefined8 *)((long)param_1 + 0x18));
    *(undefined8 *)((long)param_1 + 0x18) = 0;
    _free(param_1);
    return;
  }
  return;
}




long FUN_1010b9148(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  undefined8 uVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  
  iVar11 = (int)param_2;
  if (iVar11 < 0) {
    return 0;
  }
  if ((int)param_3 < 1) {
    return 0;
  }
  uVar3 = *(ushort *)(param_1 + 0x42);
  uVar16 = (ulong)uVar3;
  if ((int)(uint)uVar3 < (int)param_3 + iVar11) {
    return 0;
  }
  uVar4 = *(ushort *)(param_1 + 0x40);
  uVar15 = (ulong)uVar4;
  uVar14 = param_3;
  if (iVar11 == 0) {
    puVar10 = (uint *)FUN_1010ce998(1,200);
    *(uint **)(param_1 + 0x920) = puVar10;
    if (puVar10 == (uint *)0x0) {
      return 0;
    }
    pbVar13 = *(byte **)(param_1 + 0x928);
    uVar14 = *(ulong *)(param_1 + 0x930);
    uVar12 = *(undefined8 *)(param_1 + 0x940);
    *puVar10 = (uint)uVar4;
    puVar10[1] = (uint)uVar3;
    if (uVar14 < 2) goto LAB_1010b92fc;
    bVar2 = *pbVar13;
    uVar6 = bVar2 & 3;
    puVar10[2] = uVar6;
    puVar10[3] = *pbVar13 >> 2 & 3;
    uVar5 = *pbVar13 >> 4 & 3;
    puVar10[4] = uVar5;
    if (((1 < uVar6) || (1 < uVar5)) || (0x3f < *pbVar13)) goto LAB_1010b92fc;
    uVar14 = uVar14 - 1;
    if ((bVar2 & 3) == 0) {
      uVar6 = (uint)(uVar16 * uVar15 <= uVar14);
    }
    else {
      uVar6 = FUN_1010be950(puVar10,pbVar13 + 1,uVar14,uVar12);
    }
    puVar10 = *(uint **)(param_1 + 0x920);
    if (uVar6 == 0) goto LAB_1010b92fc;
    uVar14 = uVar16;
    if (puVar10[4] != 1) {
      *(undefined4 *)(param_1 + 0x948) = 0;
      uVar14 = param_3;
    }
  }
  if (*(int *)(param_1 + 0x938) != 0) goto LAB_1010b91a4;
  piVar9 = *(int **)(param_1 + 0x920);
  iVar8 = *piVar9;
  iVar1 = piVar9[1];
  lVar18 = *(long *)(param_1 + 0x940);
  uVar6 = piVar9[3];
  iVar17 = (int)uVar14;
  if (piVar9[2] == 0) {
    _memcpy((void *)(lVar18 + iVar8 * iVar11),
            (void *)(*(long *)(param_1 + 0x928) + (long)(iVar8 * iVar11) + 1),(long)(iVar8 * iVar17)
           );
LAB_1010b927c:
    if (*(code **)(&DAT_10182eb18 + (ulong)uVar6 * 8) != (code *)0x0) {
      (**(code **)(&DAT_10182eb18 + (ulong)uVar6 * 8))(iVar8,iVar1,iVar8,param_2,uVar14,lVar18);
    }
    if (iVar17 + iVar11 == (uint)*(ushort *)(param_1 + 0x42)) {
      *(undefined4 *)(param_1 + 0x938) = 1;
    }
    if ((*(int *)(param_1 + 0x948) < 1) ||
       (iVar8 = FUN_1010cdaa4(*(undefined8 *)(param_1 + 0x940),uVar15,uVar16), iVar8 != 0)) {
      if (*(int *)(param_1 + 0x938) != 0) {
        FUN_1010b9114(*(undefined8 *)(param_1 + 0x920));
        *(undefined8 *)(param_1 + 0x920) = 0;
      }
LAB_1010b91a4:
      return *(long *)(param_1 + 0x940) + uVar15 * (long)iVar11;
    }
  }
  else {
    iVar7 = FUN_1010bf4c8(piVar9,iVar17 + iVar11);
    if (iVar7 != 0) goto LAB_1010b927c;
  }
  puVar10 = *(uint **)(param_1 + 0x920);
LAB_1010b92fc:
  FUN_1010b9114(puVar10);
  *(undefined8 *)(param_1 + 0x920) = 0;
  return 0;
}




undefined8 FUN_1010b9350(uint param_1,uint param_2,long param_3,uint *param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  
  if (param_4 == (uint *)0x0) {
    return 2;
  }
  if ((int)param_1 < 1) {
    return 2;
  }
  if ((int)param_2 < 1) {
    return 2;
  }
  if (param_3 != 0) {
    if (*(int *)(param_3 + 8) != 0) {
      uVar5 = *(uint *)(param_3 + 0xc) & 0xfffffffe;
      if ((int)uVar5 < 0) {
        return 2;
      }
      uVar17 = *(uint *)(param_3 + 0x10) & 0xfffffffe;
      if ((int)uVar17 < 0) {
        return 2;
      }
      uVar11 = *(uint *)(param_3 + 0x14);
      if ((int)uVar11 < 1) {
        return 2;
      }
      uVar12 = *(uint *)(param_3 + 0x18);
      if ((int)uVar12 < 1) {
        return 2;
      }
      if ((int)param_1 < (int)(uVar5 + uVar11)) {
        return 2;
      }
      bVar13 = (int)param_2 < (int)(uVar17 + uVar12);
      param_1 = uVar11;
      param_2 = uVar12;
      if (bVar13) {
        return 2;
      }
    }
    if (*(int *)(param_3 + 0x1c) != 0) {
      param_1 = *(uint *)(param_3 + 0x20);
      if ((int)param_1 < 1) {
        return 2;
      }
      param_2 = *(uint *)(param_3 + 0x24);
      if ((int)param_2 < 1) {
        return 2;
      }
    }
  }
  param_4[1] = param_1;
  param_4[2] = param_2;
  uVar5 = *param_4;
  if (uVar5 < 0xd) {
    if ((param_4[3] == 0) && (*(long *)(param_4 + 0x1c) == 0)) {
      iVar3 = *(int *)(&DAT_1013c9cc0 + (ulong)uVar5 * 4);
      lVar15 = (long)iVar3 * (long)(int)param_1 * (ulong)param_2;
      uVar17 = param_1 + 1 >> 1;
      lVar10 = 0;
      if (uVar5 == 0xc) {
        lVar10 = (ulong)param_1 * (ulong)param_2;
      }
      uVar11 = 0;
      if (uVar5 == 0xc) {
        uVar11 = param_1;
      }
      bVar13 = 10 < uVar5;
      lVar16 = 0;
      if (bVar13) {
        lVar16 = lVar10;
      }
      lVar10 = 0;
      if (bVar13) {
        lVar10 = (ulong)uVar17 * (ulong)(param_2 + 1 >> 1);
      }
      uVar12 = 0;
      if (bVar13) {
        uVar12 = uVar11;
      }
      uVar11 = 0;
      if (bVar13) {
        uVar11 = uVar17;
      }
      lVar14 = FUN_1010ce974(lVar16 + lVar15 + lVar10 * 2,1);
      if (lVar14 == 0) {
        return 1;
      }
      *(long *)(param_4 + 0x1c) = lVar14;
      *(long *)(param_4 + 4) = lVar14;
      uVar17 = (uint)((long)iVar3 * (long)(int)param_1);
      if (uVar5 < 0xb) {
        param_4[6] = uVar17;
        *(long *)(param_4 + 8) = lVar15;
      }
      else {
        lVar14 = lVar14 + lVar15;
        param_4[0xc] = uVar17;
        param_4[0xd] = uVar11;
        *(long *)(param_4 + 0x10) = lVar15;
        *(long *)(param_4 + 0x12) = lVar10;
        *(long *)(param_4 + 6) = lVar14;
        *(long *)(param_4 + 8) = lVar14 + lVar10;
        param_4[0xe] = uVar11;
        *(long *)(param_4 + 0x14) = lVar10;
        if (uVar5 == 0xc) {
          *(long *)(param_4 + 10) = lVar14 + lVar10 * 2;
        }
        *(long *)(param_4 + 0x16) = lVar16;
        param_4[0xf] = uVar12;
      }
    }
    uVar5 = *param_4;
    if (uVar5 < 0xd) {
      uVar17 = param_4[1];
      lVar10 = (long)(int)uVar17;
      uVar11 = param_4[2];
      if (uVar5 < 0xb) {
        uVar6 = param_4[6];
        uVar12 = -uVar6;
        if (-1 < (int)uVar6) {
          uVar12 = uVar6;
        }
        if (*(long *)(param_4 + 4) == 0) {
          return 2;
        }
        if ((int)uVar12 < (int)(*(int *)(&DAT_1013c9cc0 + (ulong)uVar5 * 4) * uVar17) ||
            *(ulong *)(param_4 + 8) < lVar10 + (ulong)uVar12 * ((long)(int)uVar11 + -1)) {
          return 2;
        }
      }
      else {
        iVar3 = uVar17 + 2;
        if (-1 < (int)(uVar17 + 1)) {
          iVar3 = uVar17 + 1;
        }
        iVar4 = uVar11 + 2;
        if (-1 < (int)(uVar11 + 1)) {
          iVar4 = uVar11 + 1;
        }
        uVar6 = param_4[0xc];
        uVar8 = param_4[0xd];
        uVar12 = -uVar6;
        if (-1 < (int)uVar6) {
          uVar12 = uVar6;
        }
        uVar6 = -uVar8;
        if (-1 < (int)uVar8) {
          uVar6 = uVar8;
        }
        uVar7 = param_4[0xe];
        uVar9 = param_4[0xf];
        uVar8 = -uVar7;
        if (-1 < (int)uVar7) {
          uVar8 = uVar7;
        }
        uVar7 = -uVar9;
        if (-1 < (int)uVar9) {
          uVar7 = uVar9;
        }
        lVar15 = (long)(int)uVar11 + -1;
        iVar3 = iVar3 >> 1;
        lVar16 = (long)((iVar4 >> 1) + -1);
        bVar13 = *(ulong *)(param_4 + 0x10) < lVar10 + (ulong)uVar12 * lVar15;
        bVar1 = *(ulong *)(param_4 + 0x12) < (ulong)uVar6 * lVar16 + (long)iVar3;
        bVar2 = *(ulong *)(param_4 + 0x14) < (ulong)uVar8 * lVar16 + (long)iVar3;
        if (uVar5 == 0xc) {
          if ((int)uVar7 < (int)uVar17 ||
              (*(long *)(param_4 + 8) == 0 ||
              (*(long *)(param_4 + 6) == 0 ||
              (*(long *)(param_4 + 4) == 0 ||
              ((int)uVar8 < iVar3 ||
              ((int)uVar6 < iVar3 || ((int)uVar12 < (int)uVar17 || ((bVar13 || bVar1) || bVar2))))))
              )) {
            return 2;
          }
          if (*(ulong *)(param_4 + 0x16) < lVar10 + (ulong)uVar7 * lVar15) {
            return 2;
          }
          if (*(long *)(param_4 + 10) == 0) {
            return 2;
          }
        }
        else if (*(long *)(param_4 + 8) == 0 ||
                 (*(long *)(param_4 + 6) == 0 ||
                 (*(long *)(param_4 + 4) == 0 ||
                 ((int)uVar8 < iVar3 ||
                 ((int)uVar6 < iVar3 || ((int)uVar12 < (int)uVar17 || ((bVar13 || bVar1) || bVar2)))
                 )))) {
          return 2;
        }
      }
      return 0;
    }
  }
  return 2;
}




bool FUN_1010b96a4(undefined8 *param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = (param_2 & 0xffffff00) == 0x200 && param_1 != (undefined8 *)0x0;
  if (bVar1) {
    param_1[0xe] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return bVar1;
}




void FUN_1010b96e0(long param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      _free(*(void **)(param_1 + 0x70));
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}




void FUN_1010b9714(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  if ((param_1 != 0) && (iVar2 = *(int *)(param_1 + 0x2c), -1 < iVar2)) {
    if (iVar2 < 0x65) {
      if ((iVar2 * 0xff & 0xffffU) < 100) {
        return;
      }
      uVar3 = ((uint)(iVar2 * 0xff) >> 2 & 0x3fff) / 0x19;
    }
    else {
      uVar3 = 0xff;
    }
    lVar5 = 0;
    uVar4 = 0;
    do {
      lVar1 = param_2 + lVar5;
      uVar6 = *(uint *)(lVar1 + 0x3f4);
      if ((int)uVar6 < 0xc) {
        uVar6 = (int)(*(int *)(&DAT_1013c9cf4 +
                              (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) * 4) * uVar3) >> 3
        ;
        *(uint *)(lVar1 + 0x3f8) = uVar6;
      }
      else {
        uVar6 = *(uint *)(lVar1 + 0x3f8);
      }
      uVar4 = uVar6 | uVar4;
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != 0x80);
    if (uVar4 != 0) {
      FUN_1010cdf98(0x3f800000,param_2 + 0x2f4);
      *(undefined4 *)(param_2 + 0x2f0) = 1;
    }
  }
  return;
}




undefined8 FUN_1010b97d4(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((*(int *)(param_1 + 0x8f8) < 1) || (*(int *)(param_1 + 0x8ec) < *(int *)(param_1 + 0x19c))) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)(*(int *)(param_1 + 0x8ec) <= *(int *)(param_1 + 0x1a4));
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    lVar2 = FUN_1010ce65c();
    uVar3 = (**(code **)(lVar2 + 0x10))(param_1 + 0x90);
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *param_2;
      uVar7 = param_2[3];
      uVar6 = param_2[2];
      *(undefined8 *)(param_1 + 0xf8) = param_2[1];
      *(undefined8 *)(param_1 + 0xf0) = uVar4;
      *(undefined8 *)(param_1 + 0x108) = uVar7;
      *(undefined8 *)(param_1 + 0x100) = uVar6;
      uVar6 = param_2[5];
      uVar4 = param_2[4];
      uVar8 = param_2[7];
      uVar7 = param_2[6];
      uVar9 = param_2[8];
      uVar11 = param_2[0xb];
      uVar10 = param_2[10];
      *(undefined8 *)(param_1 + 0x138) = param_2[9];
      *(undefined8 *)(param_1 + 0x130) = uVar9;
      *(undefined8 *)(param_1 + 0x148) = uVar11;
      *(undefined8 *)(param_1 + 0x140) = uVar10;
      *(undefined8 *)(param_1 + 0x118) = uVar6;
      *(undefined8 *)(param_1 + 0x110) = uVar4;
      *(undefined8 *)(param_1 + 0x128) = uVar8;
      *(undefined8 *)(param_1 + 0x120) = uVar7;
      uVar6 = param_2[0xd];
      uVar4 = param_2[0xc];
      uVar8 = param_2[0xf];
      uVar7 = param_2[0xe];
      uVar10 = param_2[0x11];
      uVar9 = param_2[0x10];
      uVar12 = param_2[0x13];
      uVar11 = param_2[0x12];
      *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xc4);
      *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x8ec);
      *(undefined8 *)(param_1 + 0x178) = uVar10;
      *(undefined8 *)(param_1 + 0x170) = uVar9;
      *(undefined8 *)(param_1 + 0x188) = uVar12;
      *(undefined8 *)(param_1 + 0x180) = uVar11;
      *(undefined8 *)(param_1 + 0x158) = uVar6;
      *(undefined8 *)(param_1 + 0x150) = uVar4;
      *(undefined8 *)(param_1 + 0x168) = uVar8;
      *(undefined8 *)(param_1 + 0x160) = uVar7;
      *(uint *)(param_1 + 0xd8) = uVar5;
      if (*(int *)(param_1 + 0xc0) == 2) {
        uVar4 = *(undefined8 *)(param_1 + 0xe8);
        *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x8f0);
        *(undefined8 *)(param_1 + 0x8f0) = uVar4;
      }
      else {
        FUN_1010b9930(param_1,param_1 + 0xd0);
      }
      if (uVar5 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0xe0);
        *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x8a8);
        *(undefined8 *)(param_1 + 0x8a8) = uVar4;
      }
      lVar2 = FUN_1010ce65c();
      (**(code **)(lVar2 + 0x18))(param_1 + 0x90);
      iVar1 = 0;
      if (*(int *)(param_1 + 0xc4) + 1 != *(int *)(param_1 + 200)) {
        iVar1 = *(int *)(param_1 + 0xc4) + 1;
      }
      *(int *)(param_1 + 0xc4) = iVar1;
      uVar4 = 1;
    }
    return uVar4;
  }
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x8ec);
  *(uint *)(param_1 + 0xd8) = uVar5;
  FUN_1010b9930(param_1,param_1 + 0xd0);
  uVar4 = FUN_1010b9eb4(param_1,param_2);
  return uVar4;
}




void FUN_1010b9930(long param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  code *pcVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 *local_80;
  undefined8 *local_78;
  
  iVar5 = param_2[1];
  uVar3 = 5;
  if (iVar5 == 0) {
    uVar3 = 6;
  }
  if (0 < *(int *)(param_1 + 400)) {
    uVar24 = 0;
    lVar23 = *(long *)(param_1 + 0x8b0);
    puVar1 = (undefined8 *)(lVar23 + 0x28);
    puVar2 = (undefined8 *)(lVar23 + 600);
    iVar8 = *param_2;
    uVar15 = (ulong)(iVar5 == 0) << 2;
    do {
      lVar22 = *(long *)(param_2 + 6);
      lVar13 = 0;
      uVar21 = uVar3;
      if (uVar24 == 0) {
        do {
          *(undefined1 *)(lVar23 + 0x27 + lVar13) = 0x81;
          lVar13 = lVar13 + 0x20;
        } while (lVar13 != 0x200);
        lVar13 = 0;
        do {
          *(undefined1 *)(lVar23 + lVar13 + 0x247) = 0x81;
          *(undefined1 *)(lVar23 + lVar13 + 599) = 0x81;
          lVar13 = lVar13 + 0x20;
        } while (lVar13 != 0x100);
        if (iVar5 < 1) {
          local_78 = *(undefined8 **)(param_1 + 0x898);
          uVar18 = *(uint *)(lVar22 + 0x314);
          local_80 = local_78;
          goto LAB_1010b9b24;
        }
        *(undefined1 *)(lVar23 + 0x237) = 0x81;
        *(undefined1 *)(lVar23 + 0x227) = 0x81;
        *(undefined1 *)(lVar23 + 7) = 0x81;
        local_78 = *(undefined8 **)(param_1 + 0x898);
        uVar18 = *(uint *)(lVar22 + 0x314);
        local_80 = local_78;
LAB_1010b9ab4:
        uVar25 = *local_78;
        *(undefined8 *)(lVar23 + 0x10) = local_78[1];
        *(undefined8 *)(lVar23 + 8) = uVar25;
        *(undefined8 *)(lVar23 + 0x228) = local_80[uVar24 * 4 + 2];
        *(undefined8 *)(lVar23 + 0x238) = local_80[uVar24 * 4 + 3];
        if (*(char *)(lVar22 + uVar24 * 800 + 0x300) != '\0') {
          if ((long)uVar24 < (long)*(int *)(param_1 + 400) + -1) {
            iVar12 = *(int *)(local_78 + 4);
          }
          else {
            iVar12 = (uint)*(byte *)((long)local_80 + uVar24 * 0x20 + 0xf) * 0x1010101;
          }
          *(int *)(lVar23 + 0x18) = iVar12;
          goto LAB_1010b9b64;
        }
LAB_1010b9c34:
        bVar7 = *(byte *)(lVar22 + uVar24 * 800 + 0x301);
        if (uVar24 != 0) {
          uVar21 = uVar15;
        }
        uVar4 = uVar21;
        if (bVar7 != 0) {
          uVar4 = (ulong)bVar7;
        }
        (*(code *)(&PTR_FUN_10182e9a0)[uVar4])(puVar1);
        if (uVar18 != 0) {
          lVar17 = 0;
          lVar13 = lVar22 + uVar24 * 800;
          do {
            lVar20 = (long)puVar1 + (long)*(int *)((long)&DAT_1013c9d28 + lVar17);
            uVar9 = uVar18 >> 0x1e;
            if (uVar9 == 1) {
              puVar14 = &DAT_101dc1d48;
LAB_1010b9cd4:
              (*(code *)*puVar14)(lVar13,lVar20);
            }
            else {
              if (uVar9 == 2) {
                puVar14 = &DAT_101dc1d40;
                goto LAB_1010b9cd4;
              }
              if (uVar9 == 3) {
                (*DAT_101dc1d38)(lVar13,lVar20,0);
              }
            }
            uVar18 = uVar18 << 2;
            lVar13 = lVar13 + 0x20;
            lVar17 = lVar17 + 4;
          } while (lVar17 != 0x40);
        }
      }
      else {
        do {
          *(undefined4 *)(lVar23 + lVar13 + 4) = *(undefined4 *)(lVar23 + lVar13 + 0x14);
          lVar13 = lVar13 + 0x20;
        } while (lVar13 != 0x220);
        lVar13 = 0;
        do {
          lVar17 = lVar23 + lVar13;
          *(undefined4 *)(lVar17 + 0x224) = *(undefined4 *)(lVar17 + 0x22c);
          *(undefined4 *)(lVar17 + 0x234) = *(undefined4 *)(lVar17 + 0x23c);
          lVar13 = lVar13 + 0x20;
        } while (lVar13 != 0x120);
        local_80 = *(undefined8 **)(param_1 + 0x898);
        local_78 = local_80 + uVar24 * 4;
        uVar18 = *(uint *)(lVar22 + uVar24 * 800 + 0x314);
        if (0 < iVar5) goto LAB_1010b9ab4;
LAB_1010b9b24:
        if (uVar24 == 0) {
          *(undefined8 *)(lVar23 + 0x14) = 0x7f7f7f7f7f7f7f7f;
          *(undefined8 *)(lVar23 + 7) = 0x7f7f7f7f7f7f7f7f;
          *(undefined8 *)(lVar23 + 0xf) = 0x7f7f7f7f7f7f7f7f;
          *(undefined8 *)(lVar23 + 0x227) = 0x7f7f7f7f7f7f7f7f;
          *(undefined1 *)(lVar23 + 0x22f) = 0x7f;
          *(undefined8 *)(lVar23 + 0x237) = 0x7f7f7f7f7f7f7f7f;
          *(undefined1 *)(lVar23 + 0x23f) = 0x7f;
        }
        if (*(char *)(lVar22 + uVar24 * 800 + 0x300) == '\0') goto LAB_1010b9c34;
LAB_1010b9b64:
        lVar17 = 0;
        uVar6 = *(undefined4 *)(lVar23 + 0x18);
        *(undefined4 *)(lVar23 + 0x198) = uVar6;
        *(undefined4 *)(lVar23 + 0x118) = uVar6;
        *(undefined4 *)(lVar23 + 0x98) = uVar6;
        lVar20 = lVar22 + uVar24 * 800;
        lVar13 = lVar20 + 0x301;
        do {
          lVar16 = (long)puVar1 + (long)(int)(&DAT_1013c9d28)[lVar17];
          (*(code *)(&PTR_FUN_10182e950)[*(byte *)(lVar13 + lVar17)])(lVar16);
          uVar9 = uVar18 >> 0x1e;
          if (uVar9 == 1) {
            puVar14 = &DAT_101dc1d48;
LAB_1010b9bfc:
            (*(code *)*puVar14)(lVar20,lVar16);
          }
          else {
            if (uVar9 == 2) {
              puVar14 = &DAT_101dc1d40;
              goto LAB_1010b9bfc;
            }
            if (uVar9 == 3) {
              (*DAT_101dc1d38)(lVar20,lVar16,0);
            }
          }
          lVar17 = lVar17 + 1;
          uVar18 = uVar18 << 2;
          lVar20 = lVar20 + 0x20;
        } while (lVar17 != 0x10);
        if (uVar24 != 0) {
          uVar21 = uVar15;
        }
      }
      lVar13 = lVar22 + uVar24 * 800;
      uVar18 = *(uint *)(lVar13 + 0x318);
      bVar7 = *(byte *)(lVar13 + 0x311);
      if (bVar7 != 0) {
        uVar21 = (ulong)bVar7;
      }
      pcVar19 = (code *)(&PTR_FUN_10182e9d8)[uVar21];
      (*pcVar19)(lVar23 + 0x248);
      (*pcVar19)(puVar2);
      if ((uVar18 & 0xff) != 0) {
        puVar14 = &DAT_101dc1d50;
        if ((uVar18 & 0xaa) != 0) {
          puVar14 = &DAT_101dc1d58;
        }
        (*(code *)*puVar14)(lVar22 + uVar24 * 800 + 0x200,lVar23 + 0x248);
      }
      if ((uVar18 & 0xff00) != 0) {
        puVar14 = &DAT_101dc1d50;
        if ((uVar18 & 0xaa00) != 0) {
          puVar14 = &DAT_101dc1d58;
        }
        (*(code *)*puVar14)(lVar22 + uVar24 * 800 + 0x280,puVar2);
      }
      if (iVar5 < *(int *)(param_1 + 0x194) + -1) {
        uVar25 = *(undefined8 *)(lVar23 + 0x208);
        local_78[1] = *(undefined8 *)(lVar23 + 0x210);
        *local_78 = uVar25;
        local_80[uVar24 * 4 + 2] = *(undefined8 *)(lVar23 + 0x328);
        local_80[uVar24 * 4 + 3] = *(undefined8 *)(lVar23 + 0x338);
      }
      iVar12 = *(int *)(param_1 + 0x8d4);
      lVar20 = *(long *)(param_1 + 0x8b8);
      lVar16 = (ulong)(uint)((int)uVar24 << 4) +
               (long)iVar8 * 0x10 * (long)*(int *)(param_1 + 0x8d0);
      lVar22 = *(long *)(param_1 + 0x8c0);
      lVar17 = *(long *)(param_1 + 0x8c8);
      uVar25 = *puVar1;
      puVar14 = (undefined8 *)(lVar20 + lVar16);
      puVar14[1] = *(undefined8 *)(lVar23 + 0x30);
      *puVar14 = uVar25;
      lVar13 = -0xf;
      puVar14 = (undefined8 *)(lVar23 + 0x48);
      do {
        uVar25 = *puVar14;
        puVar10 = (undefined8 *)
                  (lVar20 + lVar16 + (long)*(int *)(param_1 + 0x8d0) * (long)((int)lVar13 + 0x10));
        puVar10[1] = puVar14[1];
        *puVar10 = uVar25;
        bVar11 = lVar13 != -1;
        lVar13 = lVar13 + 1;
        puVar14 = puVar14 + 4;
      } while (bVar11);
      lVar13 = 0;
      lVar20 = (uVar24 & 0x1fffffff) * 8 + (long)iVar8 * 8 * (long)iVar12;
      puVar14 = puVar2;
      do {
        *(undefined8 *)(lVar22 + lVar20 + (long)*(int *)(param_1 + 0x8d4) * (long)(int)lVar13) =
             puVar14[-2];
        *(undefined8 *)(lVar17 + lVar20 + (long)*(int *)(param_1 + 0x8d4) * (long)(int)lVar13) =
             *puVar14;
        lVar13 = lVar13 + 1;
        puVar14 = puVar14 + 4;
      } while (lVar13 != 8);
      uVar24 = uVar24 + 1;
    } while ((long)uVar24 < (long)*(int *)(param_1 + 400));
  }
  return;
}




undefined8 FUN_1010b9eb4(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  undefined1 uVar12;
  byte bVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  size_t sVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  int iVar26;
  long lVar27;
  int iVar28;
  long lVar29;
  
  iVar14 = *(int *)(param_1 + 0xd0);
  bVar13 = (&DAT_1013c9d24)[*(int *)(param_1 + 0x8f8)];
  lVar27 = (long)*(int *)(param_1 + 0x8d0);
  iVar4 = *(int *)(param_1 + 0x8d4);
  lVar20 = *(long *)(param_1 + 0x8b8);
  lVar16 = *(long *)(param_1 + 0x8c0);
  lVar17 = *(long *)(param_1 + 0x8c8);
  iVar5 = *(int *)(param_1 + 0xd4);
  iVar6 = *(int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0xc0) == 2) {
    FUN_1010b9930(param_1);
  }
  sVar22 = lVar27 * (ulong)bVar13;
  lVar18 = iVar14 * lVar27 * 0x10;
  lVar19 = (long)(iVar14 * iVar4 * 8);
  iVar4 = (uint)(bVar13 >> 1) * iVar4;
  if (*(int *)(param_1 + 0xd8) != 0) {
    iVar26 = *(int *)(param_1 + 0x198);
    lVar29 = (long)iVar26;
    if (iVar26 < *(int *)(param_1 + 0x1a0)) {
      iVar7 = *(int *)(param_1 + 0xd4);
      lVar23 = lVar29 << 2;
      iVar28 = iVar26 << 3;
      iVar26 = iVar26 << 4;
      do {
        lVar24 = *(long *)(param_1 + 0xe0);
        bVar10 = *(byte *)(lVar24 + lVar23);
        if (bVar10 != 0) {
          iVar8 = *(int *)(param_1 + 0x8d0);
          lVar2 = *(long *)(param_1 + 0x8b8) +
                  (long)(*(int *)(param_1 + 0xd0) * iVar8 * 0x10) + (long)iVar26;
          uVar25 = (uint)bVar10;
          if (*(int *)(param_1 + 0x8f8) == 1) {
            if (0 < lVar29) {
              (*DAT_101dc1d18)(lVar2,iVar8,uVar25 + 4);
            }
            if (*(char *)(lVar24 + lVar23 + 2) != '\0') {
              (*DAT_101dc1d20)(lVar2,iVar8,bVar10);
            }
            if (0 < iVar7) {
              (*DAT_101dc1d28)(lVar2,iVar8,uVar25 + 4);
            }
            if (*(char *)(lVar24 + lVar23 + 2) != '\0') {
              (*DAT_101dc1d30)(lVar2,iVar8,bVar10);
            }
          }
          else {
            bVar11 = ((byte *)(lVar24 + lVar23))[1];
            iVar9 = *(int *)(param_1 + 0x8d4);
            lVar21 = (long)(*(int *)(param_1 + 0xd0) * iVar9 * 8) + (long)iVar28;
            lVar3 = *(long *)(param_1 + 0x8c0) + lVar21;
            lVar21 = *(long *)(param_1 + 0x8c8) + lVar21;
            lVar24 = lVar24 + lVar23;
            uVar12 = *(undefined1 *)(lVar24 + 3);
            if (0 < lVar29) {
              iVar1 = bVar10 + 4;
              (*DAT_101dc1cf8)(lVar2,iVar8,iVar1,bVar11,uVar12);
              (*DAT_101dc1d08)(lVar3,lVar21,iVar9,iVar1,bVar11,uVar12);
            }
            if (*(char *)(lVar24 + 2) != '\0') {
              (*DAT_101dc1d00)(lVar2,iVar8,bVar10,bVar11,uVar12);
              (*DAT_101dc1d10)(lVar3,lVar21,iVar9,bVar10,bVar11,uVar12);
            }
            if (0 < iVar7) {
              (*DAT_101dc1d68)(lVar2,iVar8,uVar25 + 4,bVar11,uVar12);
              (*DAT_101dc1d78)(lVar3,lVar21,iVar9,uVar25 + 4,bVar11,uVar12);
            }
            if (*(char *)(lVar24 + 2) != '\0') {
              (*DAT_101dc1d70)(lVar2,iVar8,bVar10,bVar11,uVar12);
              (*DAT_101dc1d80)(lVar3,lVar21,iVar9,bVar10,bVar11,uVar12);
            }
          }
        }
        lVar29 = lVar29 + 1;
        lVar23 = lVar23 + 4;
        iVar28 = iVar28 + 8;
        iVar26 = iVar26 + 0x10;
      } while (lVar29 < *(int *)(param_1 + 0x1a0));
    }
  }
  if (*(int *)(param_1 + 0x2f0) != 0) {
    iVar26 = *(int *)(param_1 + 0x198);
    lVar29 = (long)iVar26;
    iVar28 = *(int *)(param_1 + 0x1a0);
    if (iVar26 < iVar28) {
      iVar26 = iVar26 << 3;
      lVar23 = lVar29 * 800 + 0x31c;
      do {
        lVar24 = *(long *)(param_1 + 0xe8);
        if (3 < *(byte *)(lVar24 + lVar23)) {
          iVar28 = *(int *)(param_1 + 0x8d4);
          lVar2 = (long)(iVar28 * *(int *)(param_1 + 0xd0) * 8) + (long)iVar26;
          lVar21 = *(long *)(param_1 + 0x8c8);
          FUN_1010baac0(param_1 + 0x2f4,*(long *)(param_1 + 0x8c0) + lVar2,iVar28);
          FUN_1010baac0(param_1 + 0x2f4,lVar21 + lVar2,iVar28,*(undefined1 *)(lVar24 + lVar23));
          iVar28 = *(int *)(param_1 + 0x1a0);
        }
        lVar29 = lVar29 + 1;
        iVar26 = iVar26 + 8;
        lVar23 = lVar23 + 800;
      } while (lVar29 < iVar28);
    }
  }
  lVar20 = lVar20 + (lVar18 - sVar22);
  lVar16 = lVar16 + (lVar19 - iVar4);
  lVar17 = lVar17 + (lVar19 - iVar4);
  iVar6 = iVar6 + -1;
  if (*(long *)(param_2 + 0x10) == 0) {
    uVar15 = 1;
  }
  else {
    if (iVar5 == 0) {
      iVar26 = 0;
      lVar18 = *(long *)(param_1 + 0x8b8) + lVar18;
      lVar29 = *(long *)(param_1 + 0x8c0) + lVar19;
      lVar19 = *(long *)(param_1 + 0x8c8) + lVar19;
    }
    else {
      iVar26 = iVar5 * 0x10 - (uint)bVar13;
      lVar18 = lVar20;
      lVar29 = lVar16;
      lVar19 = lVar17;
    }
    lVar23 = 0;
    *(long *)(param_2 + 6) = lVar18;
    *(long *)(param_2 + 8) = lVar29;
    *(long *)(param_2 + 10) = lVar19;
    uVar25 = 0;
    if (iVar5 < iVar6) {
      uVar25 = (uint)bVar13;
    }
    iVar7 = (iVar5 * 0x10 + 0x10) - uVar25;
    iVar28 = param_2[0x21];
    if (iVar7 <= param_2[0x21]) {
      iVar28 = iVar7;
    }
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    if ((*(long *)(param_1 + 0x928) != 0) && (iVar28 - iVar26 != 0 && iVar26 <= iVar28)) {
      lVar23 = FUN_1010b9148(param_1,iVar26,iVar28 - iVar26);
      *(long *)(param_2 + 0x26) = lVar23;
      if (lVar23 == 0) {
        uVar15 = FUN_1010bceb0(param_1,3,"Could not decode alpha data.");
        return uVar15;
      }
    }
    iVar7 = param_2[0x20];
    uVar25 = iVar7 - iVar26;
    if (uVar25 != 0 && iVar26 <= iVar7) {
      lVar18 = (long)*(int *)(param_1 + 0x8d4) * ((long)((ulong)uVar25 << 0x20) >> 0x21);
      *(long *)(param_2 + 6) =
           *(long *)(param_2 + 6) + (long)*(int *)(param_1 + 0x8d0) * (long)(int)uVar25;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + lVar18;
      *(long *)(param_2 + 10) = *(long *)(param_2 + 10) + lVar18;
      iVar26 = iVar7;
      if (lVar23 != 0) {
        lVar23 = lVar23 + (long)*param_2 * (long)(int)uVar25;
        *(long *)(param_2 + 0x26) = lVar23;
      }
    }
    if (iVar28 - iVar26 == 0 || iVar28 < iVar26) {
      uVar15 = 1;
    }
    else {
      iVar8 = param_2[0x1e];
      *(long *)(param_2 + 6) = *(long *)(param_2 + 6) + (long)iVar8;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + (long)(iVar8 >> 1);
      *(long *)(param_2 + 10) = *(long *)(param_2 + 10) + (long)(iVar8 >> 1);
      if (lVar23 != 0) {
        *(long *)(param_2 + 0x26) = lVar23 + iVar8;
      }
      param_2[2] = iVar26 - iVar7;
      param_2[3] = param_2[0x1f] - iVar8;
      param_2[4] = iVar28 - iVar26;
      uVar15 = (**(code **)(param_2 + 0x10))(param_2);
    }
  }
  if ((iVar14 + 1 == *(int *)(param_1 + 200)) && (iVar5 < iVar6)) {
    _memcpy((void *)(*(long *)(param_1 + 0x8b8) - lVar27 * (ulong)bVar13),
            (void *)(lVar20 + (long)*(int *)(param_1 + 0x8d0) * 0x10),sVar22);
    _memcpy((void *)(*(long *)(param_1 + 0x8c0) + -(long)iVar4),
            (void *)(lVar16 + (long)*(int *)(param_1 + 0x8d4) * 8),(long)iVar4);
    _memcpy((void *)(*(long *)(param_1 + 0x8c8) + -(long)iVar4),
            (void *)(lVar17 + (long)*(int *)(param_1 + 0x8d4) * 8),(long)iVar4);
  }
  return uVar15;
}




undefined4 FUN_1010ba52c(undefined4 *param_1,long param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  
  if ((*(code **)(param_2 + 0x48) != (code *)0x0) &&
     (iVar7 = (**(code **)(param_2 + 0x48))(param_2), iVar7 == 0)) {
    FUN_1010bceb0(param_1,6,"Frame setup failed");
    return *param_1;
  }
  if (*(int *)(param_2 + 0x70) == 0) {
    iVar7 = param_1[0x23e];
    uVar11 = (uint)(byte)(&DAT_1013c9d24)[iVar7];
    if (iVar7 != 2) goto LAB_1010ba594;
    param_1[0x66] = 0;
    iVar7 = 2;
  }
  else {
    uVar11 = 0;
    iVar7 = 0;
    param_1[0x23e] = 0;
LAB_1010ba594:
    iVar4 = *(int *)(param_2 + 0x78) - uVar11;
    param_1[0x66] = iVar4 >> 4;
    iVar12 = *(int *)(param_2 + 0x80) - uVar11;
    param_1[0x67] = iVar12 >> 4;
    if (iVar4 < 0) {
      param_1[0x66] = 0;
    }
    if (-1 < iVar12) goto LAB_1010ba5ec;
  }
  param_1[0x67] = 0;
LAB_1010ba5ec:
  iVar4 = (int)(uVar11 + 0xf + *(int *)(param_2 + 0x84)) >> 4;
  param_1[0x69] = iVar4;
  iVar12 = (int)(uVar11 + 0xf + *(int *)(param_2 + 0x7c)) >> 4;
  iVar3 = param_1[100];
  if (iVar12 <= (int)param_1[100]) {
    iVar3 = iVar12;
  }
  param_1[0x68] = iVar3;
  if ((int)param_1[0x65] < iVar4) {
    param_1[0x69] = param_1[0x65];
  }
  if (0 < iVar7) {
    lVar8 = 0;
    iVar7 = param_1[0x1e];
    iVar4 = param_1[0x15];
    do {
      if (iVar7 == 0) {
        uVar11 = param_1[0x13];
      }
      else {
        uVar11 = (uint)*(char *)((long)param_1 + lVar8 + 0x88);
        if (param_1[0x20] == 0) {
          uVar11 = param_1[0x13] + uVar11;
        }
      }
      lVar13 = 0;
      iVar12 = 0;
      bVar6 = true;
      do {
        uVar10 = uVar11;
        if ((iVar4 != 0) && (uVar10 = param_1[0x16] + uVar11, !bVar6)) {
          uVar10 = param_1[0x1a] + uVar10;
        }
        uVar9 = uVar10;
        if (0x3e < (int)uVar10) {
          uVar9 = 0x3f;
        }
        if ((int)uVar10 < 1) {
          *(char *)(param_1 + lVar8 * 2 + lVar13 + 0x23f) = '\0';
        }
        else {
          iVar3 = param_1[0x14];
          uVar10 = 1;
          if (4 < iVar3) {
            uVar10 = 2;
          }
          uVar2 = 9U - iVar3;
          if ((int)(uVar9 >> (ulong)uVar10) <= (int)(9U - iVar3)) {
            uVar2 = uVar9 >> (ulong)uVar10;
          }
          uVar10 = uVar9;
          if (0 < iVar3) {
            uVar10 = uVar2;
          }
          if ((int)uVar10 < 2) {
            uVar10 = 1;
          }
          lVar5 = lVar13 * 4 + lVar8 * 8;
          *(char *)((long)param_1 + lVar5 + 0x8fd) = (char)uVar10;
          *(char *)(param_1 + lVar8 * 2 + lVar13 + 0x23f) = (char)uVar10 + (char)(uVar9 << 1);
          uVar1 = 2;
          if ((int)uVar9 < 0x28) {
            uVar1 = 0xe < (int)uVar9;
          }
          *(undefined1 *)((long)param_1 + lVar5 + 0x8ff) = uVar1;
        }
        bVar6 = false;
        *(char *)((long)param_1 + lVar13 * 4 + lVar8 * 8 + 0x8fe) = (char)iVar12;
        iVar12 = iVar12 + 1;
        lVar13 = 1;
      } while (iVar12 != 2);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 4);
  }
  return 0;
}




undefined8 FUN_1010ba758(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0xc0) < 1) {
    uVar2 = 1;
  }
  else {
    lVar1 = FUN_1010ce65c();
    uVar2 = (**(code **)(lVar1 + 0x10))(param_1 + 0x90);
  }
  if (*(code **)(param_2 + 0x50) != (code *)0x0) {
    (**(code **)(param_2 + 0x50))(param_2);
  }
  return uVar2;
}




int FUN_1010ba7b4(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      iVar1 = (uint)(0x1ff < param_3) << 1;
    }
  }
  return iVar1;
}




undefined8 FUN_1010ba7d4(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (*(int *)(param_1 + 0xc0) < 1) {
    iVar7 = 1;
LAB_1010ba850:
    *(int *)(param_1 + 200) = iVar7;
  }
  else {
    lVar8 = FUN_1010ce65c();
    iVar7 = (**(code **)(lVar8 + 8))(param_1 + 0x90);
    if (iVar7 != 0) {
      *(long *)(param_1 + 0xa8) = param_1;
      *(long *)(param_1 + 0xb0) = param_1 + 0xf0;
      *(code **)(param_1 + 0xa0) = FUN_1010b9eb4;
      iVar7 = 2;
      if (0 < *(int *)(param_1 + 0x8f8)) {
        iVar7 = 3;
      }
      goto LAB_1010ba850;
    }
    uVar10 = FUN_1010bceb0(param_1,1,"thread initialization failed.");
    if ((int)uVar10 == 0) {
      return uVar10;
    }
    iVar7 = *(int *)(param_1 + 200);
  }
  iVar6 = *(int *)(param_1 + 400);
  lVar8 = (long)iVar6;
  uVar17 = -(ulong)(iVar6 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(iVar6 + 1U) << 1;
  iVar11 = *(int *)(param_1 + 0xc0);
  iVar12 = 1;
  if (0 < iVar11) {
    iVar12 = 2;
  }
  uVar13 = -(ulong)((uint)(iVar12 * iVar6) >> 0x1f) & 0xfffffffc00000000 |
           (ulong)(uint)(iVar12 * iVar6) << 2;
  if ((long)*(int *)(param_1 + 0x8f8) < 1) {
    uVar13 = 0;
  }
  iVar12 = 1;
  if (iVar11 == 2) {
    iVar12 = 2;
  }
  lVar18 = (long)(iVar12 * iVar6) * 800;
  uVar3 = ((uint)(byte)(&DAT_1013c9d24)[*(int *)(param_1 + 0x8f8)] + iVar7 * 0x10) * 3;
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 + 1;
  }
  lVar15 = lVar8 * 0x20 * ((long)((ulong)uVar3 << 0x20) >> 0x21);
  if (*(long *)(param_1 + 0x928) == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = (ulong)*(ushort *)(param_1 + 0x42) * (ulong)*(ushort *)(param_1 + 0x40);
  }
  uVar1 = lVar8 * 0x24 + uVar17 + lVar18 + uVar13 + lVar15 + lVar16 + 0x35f;
  pvVar9 = *(void **)(param_1 + 0x8d8);
  if (*(ulong *)(param_1 + 0x8e0) < uVar1) {
    _free(pvVar9);
    *(undefined8 *)(param_1 + 0x8e0) = 0;
    pvVar9 = (void *)FUN_1010ce974(uVar1,1);
    *(void **)(param_1 + 0x8d8) = pvVar9;
    if (pvVar9 == (void *)0x0) {
      uVar10 = FUN_1010bceb0(param_1,1,"no memory during frame initialization.");
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      goto LAB_1010baa38;
    }
    *(ulong *)(param_1 + 0x8e0) = uVar1;
    iVar11 = *(int *)(param_1 + 0xc0);
  }
  *(void **)(param_1 + 0x888) = pvVar9;
  pvVar9 = (void *)((long)pvVar9 + lVar8 * 4);
  *(void **)(param_1 + 0x898) = pvVar9;
  pvVar9 = (void *)((long)pvVar9 + lVar8 * 0x20);
  *(long *)(param_1 + 0x8a0) = (long)pvVar9 + 2;
  lVar14 = 0;
  if (uVar13 != 0) {
    lVar14 = (long)pvVar9 + uVar17;
  }
  *(long *)(param_1 + 0x8a8) = lVar14;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  lVar4 = lVar8;
  if (iVar11 < 1) {
    lVar4 = 0;
  }
  uVar13 = uVar13 + (long)pvVar9 + uVar17 + 0x1f & 0xffffffffffffffe0;
  *(ulong *)(param_1 + 0x8b0) = uVar13;
  lVar2 = uVar13 + 0x340;
  *(long *)(param_1 + 0x8f0) = lVar2;
  *(long *)(param_1 + 0xe0) = lVar14 + lVar4 * 4;
  *(long *)(param_1 + 0xe8) = lVar2;
  if (iVar11 == 2) {
    *(long *)(param_1 + 0xe8) = lVar2 + lVar8 * 800;
  }
  lVar2 = lVar2 + lVar18;
  iVar12 = (int)(lVar8 * 0x10);
  *(int *)(param_1 + 0x8d0) = iVar12;
  iVar6 = iVar6 * 8;
  *(int *)(param_1 + 0x8d4) = iVar6;
  bVar5 = (&DAT_1013c9d24)[*(int *)(param_1 + 0x8f8)];
  lVar18 = lVar2 + lVar8 * 0x10 * (ulong)bVar5;
  *(long *)(param_1 + 0x8b8) = lVar18;
  lVar14 = (long)(int)((uint)(bVar5 >> 1) * iVar6);
  lVar18 = lVar18 + lVar14 + iVar12 * iVar7 * 0x10;
  *(long *)(param_1 + 0x8c0) = lVar18;
  *(long *)(param_1 + 0x8c8) = lVar18 + lVar14 + iVar7 * iVar6 * 8;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  lVar18 = 0;
  if (lVar16 != 0) {
    lVar18 = lVar2 + lVar15;
  }
  *(long *)(param_1 + 0x940) = lVar18;
  _bzero(pvVar9,uVar17);
  FUN_1010bd990(param_1);
  _bzero(*(void **)(param_1 + 0x888),lVar8 * 4);
LAB_1010baa38:
  *(undefined4 *)(param_2 + 8) = 0;
  uVar10 = *(undefined8 *)(param_1 + 0x8b8);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x8c0);
  *(undefined8 *)(param_2 + 0x18) = uVar10;
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x8c8);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x8d0);
  *(undefined8 *)(param_2 + 0x98) = 0;
  FUN_1010c2278();
  return 1;
}




void FUN_1010baac0(int *param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = 0;
  do {
    lVar4 = 0;
    do {
      iVar1 = param_1[(long)*param_1 + 2];
      iVar2 = param_1[(long)param_1[1] + 2];
      param_1[(long)*param_1 + 2] = iVar1 - iVar2 & 0x7fffffff;
      iVar5 = (int)*(undefined8 *)param_1 + 1;
      iVar6 = (int)((ulong)*(undefined8 *)param_1 >> 0x20) + 1;
      iVar7 = -(uint)(iVar5 == 0x37);
      iVar8 = -(uint)(iVar6 == 0x37);
      *(ulong *)param_1 =
           CONCAT17((byte)((uint)iVar6 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                    CONCAT16((byte)((uint)iVar6 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                             CONCAT15((byte)((uint)iVar6 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                      CONCAT14((byte)iVar6 & ~(byte)iVar8,
                                               CONCAT13((byte)((uint)iVar5 >> 0x18) &
                                                        ~(byte)((uint)iVar7 >> 0x18),
                                                        CONCAT12((byte)((uint)iVar5 >> 0x10) &
                                                                 ~(byte)((uint)iVar7 >> 0x10),
                                                                 CONCAT11((byte)((uint)iVar5 >> 8) &
                                                                          ~(byte)((uint)iVar7 >> 8),
                                                                          (byte)iVar5 & ~(byte)iVar7
                                                                         )))))));
      iVar1 = (uint)*(byte *)(param_2 + lVar4) +
              ((((iVar1 - iVar2) * 2 >> 0x17) * param_4 >> 8) + 8 >> 4);
      if (0xfe < iVar1) {
        iVar1 = 0xff;
      }
      *(byte *)(param_2 + lVar4) = (byte)iVar1 & ((byte)(iVar1 >> 0x1f) ^ 0xff);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 8);
    param_2 = param_2 + param_3;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  return;
}




void FUN_1010bab50(undefined8 param_1,long param_2)

{
  *(code **)(param_2 + 0x48) = FUN_1010babe8;
  *(code **)(param_2 + 0x50) = FUN_1010bb090;
  *(undefined8 *)(param_2 + 0x38) = param_1;
  *(code **)(param_2 + 0x40) = FUN_1010bab74;
  return;
}




undefined8 FUN_1010bab74(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0xc) < 1 || *(int *)(param_1 + 0x10) < 1) {
    uVar2 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x38);
    iVar1 = (**(code **)(lVar3 + 0x1d8))(param_1,lVar3);
    if (*(code **)(lVar3 + 0x1e0) != (code *)0x0) {
      (**(code **)(lVar3 + 0x1e0))(param_1,lVar3);
    }
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + iVar1;
    uVar2 = 1;
  }
  return uVar2;
}




undefined8 FUN_1010babe8(long param_1)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  long lVar15;
  int *piVar16;
  undefined8 *puVar17;
  
  puVar17 = *(undefined8 **)(param_1 + 0x38);
  uVar9 = *(uint *)*puVar17;
  if ((uVar9 - 1 < 0xc) && ((0x81dU >> (ulong)(uVar9 - 1 & 0x1f) & 1) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = 3 < uVar9 - 7;
  }
  puVar17[0x3b] = 0;
  puVar17[0x3a] = 0;
  puVar17[0x3d] = 0;
  puVar17[0x3c] = 0;
  uVar14 = 0xb;
  if (bVar1) {
    uVar14 = 0xc;
  }
  iVar11 = FUN_1010c1334(puVar17[5],param_1,uVar14);
  if (iVar11 == 0) {
    return 0;
  }
  if (!(bool)(bVar1 | 3 < uVar9 - 7)) {
    FUN_1010c66ac();
  }
  plVar2 = puVar17 + 0x3a;
  if (*(int *)(param_1 + 0x88) == 0) {
    if (uVar9 < 0xb) {
      puVar17[0x3b] = FUN_1010bb0b8;
      if (*(int *)(param_1 + 0x58) == 0) {
        FUN_1010cbef0();
      }
      else {
        uVar3 = (long)*(int *)(param_1 + 0xc) + 1;
        lVar13 = FUN_1010ce974(1,(uVar3 & 0xfffffffffffffffe) + (long)*(int *)(param_1 + 0xc));
        *plVar2 = lVar13;
        if (lVar13 == 0) {
          return 0;
        }
        lVar15 = lVar13 + *(int *)(param_1 + 0xc);
        puVar17[1] = lVar13;
        puVar17[2] = lVar15;
        puVar17[3] = lVar15 + ((int)uVar3 >> 1);
        puVar17[0x3b] = FUN_1010bb124;
        FUN_1010c66ac();
      }
      if (bVar1) goto LAB_1010baefc;
    }
    else {
      puVar17[0x3b] = FUN_1010bb340;
      if (bVar1) {
        return 1;
      }
    }
    pcVar5 = FUN_1010bb5a8;
    if (10 < uVar9) {
      pcVar5 = FUN_1010bb6bc;
    }
    pcVar6 = FUN_1010bb4b0;
    if (uVar9 != 5 && uVar9 != 10) {
      pcVar6 = pcVar5;
    }
    puVar17[0x3c] = pcVar6;
    if (10 < uVar9) {
      return 1;
    }
  }
  else {
    piVar16 = (int *)*puVar17;
    iVar11 = *piVar16;
    uVar10 = iVar11 - 1;
    if (10 < uVar9) {
      if ((uVar10 < 0xc) && ((0x81dU >> (ulong)(uVar10 & 0x1f) & 1) != 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = 3 < iVar11 - 7U;
      }
      iVar7 = *(int *)(param_1 + 0x90);
      lVar15 = (long)*(int *)(param_1 + 0x8c);
      uVar9 = *(int *)(param_1 + 0x8c) + 1;
      iVar11 = *(int *)(param_1 + 0xc);
      iVar8 = *(int *)(param_1 + 0x10);
      uVar10 = uVar9 & 0xfffffffe;
      lVar13 = 0;
      if (!bVar1) {
        lVar13 = lVar15 << 1;
      }
      lVar13 = FUN_1010ce974(1,(lVar13 + lVar15 * 2 + (long)(int)uVar10 * 2) * 4);
      *plVar2 = lVar13;
      if (lVar13 == 0) {
        return 0;
      }
      iVar4 = iVar7 + 1 >> 1;
      iVar11 = iVar11 + 1 >> 1;
      iVar8 = iVar8 + 1 >> 1;
      FUN_1010ce328(puVar17 + 6,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                    *(undefined8 *)(piVar16 + 4),lVar15,iVar7,piVar16[0xc],1,lVar13);
      lVar13 = lVar13 + lVar15 * 8;
      FUN_1010ce328(puVar17 + 0x13,iVar11,iVar8,*(undefined8 *)(piVar16 + 6),(int)uVar9 >> 1,iVar4,
                    piVar16[0xd],1,lVar13);
      FUN_1010ce328(puVar17 + 0x20,iVar11,iVar8,*(undefined8 *)(piVar16 + 8),(int)uVar9 >> 1,iVar4,
                    piVar16[0xe],1,lVar13 + (long)(int)uVar10 * 4);
      puVar17[0x3b] = FUN_1010bbc5c;
      if (bVar1) {
        return 1;
      }
      FUN_1010ce328(puVar17 + 0x2d,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                    *(undefined8 *)(piVar16 + 10),lVar15,iVar7,piVar16[0xf],1,
                    lVar13 + (-(ulong)(uVar9 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar10 << 1) * 4
                   );
      puVar17[0x3c] = FUN_1010bbd2c;
      FUN_1010c1590();
      return 1;
    }
    if ((uVar10 < 0xc) && ((0x81dU >> (ulong)(uVar10 & 0x1f) & 1) != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = 3 < iVar11 - 7U;
    }
    uVar14 = *(undefined4 *)(param_1 + 0x90);
    lVar15 = (long)*(int *)(param_1 + 0x8c);
    iVar11 = *(int *)(param_1 + 0xc);
    iVar7 = *(int *)(param_1 + 0x10);
    lVar13 = lVar15 * 6;
    if (!bVar1) {
      lVar13 = lVar15 << 3;
    }
    lVar12 = 0;
    if (!bVar1) {
      lVar12 = lVar15;
    }
    lVar12 = FUN_1010ce974(1,lVar12 + lVar15 * 3 + lVar13 * 4);
    *plVar2 = lVar12;
    if (lVar12 == 0) {
      return 0;
    }
    iVar11 = iVar11 + 1 >> 1;
    iVar7 = iVar7 + 1 >> 1;
    lVar13 = lVar12 + lVar13 * 4;
    FUN_1010ce328(puVar17 + 6,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),lVar13,
                  lVar15,uVar14,0,1,lVar12);
    FUN_1010ce328(puVar17 + 0x13,iVar11,iVar7,lVar13 + lVar15,lVar15,uVar14,0,1,lVar12 + lVar15 * 8)
    ;
    FUN_1010ce328(puVar17 + 0x20,iVar11,iVar7,lVar13 + lVar15 * 2,lVar15,uVar14,0,1,
                  lVar12 + lVar15 * 0x10);
    puVar17[0x3b] = FUN_1010bb770;
    if (bVar1) goto LAB_1010baefc;
    FUN_1010ce328(puVar17 + 0x2d,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                  lVar13 + lVar15 * 3,lVar15,uVar14,0,1,lVar12 + lVar15 * 0x18);
    pcVar5 = FUN_1010bb9c4;
    if (*(int *)*puVar17 != 10 && *(int *)*puVar17 != 5) {
      pcVar5 = FUN_1010bbb04;
    }
    puVar17[0x3c] = FUN_1010bb92c;
    puVar17[0x3d] = pcVar5;
  }
  FUN_1010c1590();
LAB_1010baefc:
  FUN_1010cbe34();
  return 1;
}




void FUN_1010bb090(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  _free(*(void **)(lVar1 + 0x1d0));
  *(undefined8 *)(lVar1 + 0x1d0) = 0;
  return;
}




undefined4 FUN_1010bb0b8(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_2;
  FUN_1010cbe38(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined4 *)(param_1 + 0x34),
                *(long *)(puVar1 + 4) + (long)(int)puVar1[6] * (long)*(int *)(param_1 + 8),
                (long)(int)puVar1[6],*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                (&DAT_101dc1ef0)[*puVar1]);
  return *(undefined4 *)(param_1 + 0x10);
}




int FUN_1010bb124(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)(param_1 + 0x10);
  puVar6 = (uint *)*param_2;
  iVar8 = *(int *)(param_1 + 8);
  lVar9 = *(long *)(puVar6 + 4) + (long)(int)puVar6[6] * (long)iVar8;
  pcVar7 = (code *)(&DAT_101dc1e88)[*puVar6];
  lVar10 = *(long *)(param_1 + 0x18);
  pvVar14 = *(void **)(param_1 + 0x20);
  pvVar11 = *(void **)(param_1 + 0x28);
  iVar1 = iVar3 + 2;
  if (-1 < iVar3 + 1) {
    iVar1 = iVar3 + 1;
  }
  if (iVar8 == 0) {
    (*pcVar7)(lVar10,0,pvVar14,pvVar11,pvVar14,pvVar11,lVar9,0,iVar3);
    iVar5 = iVar4;
  }
  else {
    (*pcVar7)(param_2[1],lVar10,param_2[2],param_2[3],pvVar14,pvVar11,lVar9 - (int)puVar6[6],lVar9,
              iVar3);
    iVar5 = iVar4 + 1;
  }
  uVar2 = iVar8 + iVar4;
  if (2 < iVar4) {
    iVar8 = iVar8 + 2;
    pvVar12 = pvVar11;
    pvVar13 = pvVar14;
    do {
      pvVar14 = (void *)((long)pvVar13 + (long)*(int *)(param_1 + 0x34));
      pvVar11 = (void *)((long)pvVar12 + (long)*(int *)(param_1 + 0x34));
      lVar9 = lVar9 + (long)(int)puVar6[6] * 2;
      lVar10 = lVar10 + (long)*(int *)(param_1 + 0x30) * 2;
      (*pcVar7)(lVar10 - *(int *)(param_1 + 0x30),lVar10,pvVar13,pvVar12,pvVar14,pvVar11,
                lVar9 - (int)puVar6[6],lVar9,iVar3);
      iVar8 = iVar8 + 2;
      pvVar12 = pvVar11;
      pvVar13 = pvVar14;
    } while (iVar8 < (int)uVar2);
  }
  pvVar12 = (void *)(lVar10 + *(int *)(param_1 + 0x30));
  if ((int)(*(int *)(param_1 + 0x80) + uVar2) < *(int *)(param_1 + 0x84)) {
    _memcpy((void *)param_2[1],pvVar12,(long)iVar3);
    _memcpy((void *)param_2[2],pvVar14,(long)(iVar1 >> 1));
    _memcpy((void *)param_2[3],pvVar11,(long)(iVar1 >> 1));
    iVar5 = iVar5 + -1;
  }
  else if ((uVar2 & 1) == 0) {
    (*pcVar7)(pvVar12,0,pvVar14,pvVar11,pvVar14,pvVar11,lVar9 + (int)puVar6[6],0,iVar3);
  }
  return iVar5;
}




undefined4 FUN_1010bb340(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  
  iVar12 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar1 = iVar12 + 2;
  if (-1 < iVar12 + 1) {
    iVar1 = iVar12 + 1;
  }
  iVar2 = iVar3 + 2;
  if (-1 < iVar3 + 1) {
    iVar2 = iVar3 + 1;
  }
  if (0 < iVar3) {
    lVar9 = *param_2;
    iVar7 = *(int *)(param_1 + 8);
    iVar6 = *(int *)(lVar9 + 0x34);
    lVar13 = (long)*(int *)(lVar9 + 0x30) * (long)iVar7;
    lVar4 = *(long *)(lVar9 + 0x10);
    lVar5 = *(long *)(lVar9 + 0x18);
    lVar10 = *(long *)(lVar9 + 0x20);
    iVar8 = *(int *)(lVar9 + 0x38);
    _memcpy((void *)(lVar4 + lVar13),*(void **)(param_1 + 0x18),(long)iVar12);
    if (iVar3 != 1) {
      iVar11 = 1;
      do {
        _memcpy((void *)(lVar4 + lVar13 + (long)*(int *)(lVar9 + 0x30) * (long)iVar11),
                (void *)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x30) * (long)iVar11),
                (long)iVar12);
        iVar11 = iVar11 + 1;
      } while (iVar3 != iVar11);
    }
    if (0 < iVar3) {
      iVar12 = 0;
      lVar4 = ((long)iVar7 << 0x20) >> 0x21;
      iVar2 = iVar2 >> 1;
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      do {
        lVar13 = (long)iVar12;
        _memcpy((void *)(lVar5 + iVar6 * lVar4 + *(int *)(lVar9 + 0x34) * lVar13),
                (void *)(*(long *)(param_1 + 0x20) + *(int *)(param_1 + 0x34) * lVar13),
                (long)(iVar1 >> 1));
        _memcpy((void *)(lVar10 + iVar8 * lVar4 + *(int *)(lVar9 + 0x38) * lVar13),
                (void *)(*(long *)(param_1 + 0x28) + *(int *)(param_1 + 0x34) * lVar13),
                (long)(iVar1 >> 1));
        iVar12 = iVar12 + 1;
      } while (iVar2 != iVar12);
    }
  }
  return *(undefined4 *)(param_1 + 0x10);
}




undefined8 FUN_1010bb4b0(int *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  int *piVar14;
  int local_3c;
  byte *local_38;
  
  local_38 = *(byte **)(param_1 + 0x26);
  if (local_38 != (byte *)0x0) {
    uVar2 = param_1[3];
    piVar14 = (int *)*param_2;
    iVar3 = *piVar14;
    iVar5 = FUN_1010bbe44(param_1,&local_38,&local_3c);
    if (0 < local_3c) {
      iVar7 = 0;
      iVar6 = piVar14[6];
      pbVar1 = (byte *)(*(long *)(piVar14 + 4) + (long)(iVar6 * iVar5));
      bVar8 = 0xf;
      pbVar9 = local_38;
      pbVar10 = pbVar1;
      do {
        uVar11 = (ulong)uVar2;
        pbVar12 = pbVar10;
        pbVar13 = pbVar9;
        if (0 < (int)uVar2) {
          do {
            bVar4 = *pbVar13;
            *pbVar12 = *pbVar12 & 0xf0 | bVar4 >> 4;
            bVar8 = bVar8 & bVar4 >> 4;
            uVar11 = uVar11 - 1;
            pbVar12 = pbVar12 + 2;
            pbVar13 = pbVar13 + 1;
          } while (uVar11 != 0);
          iVar6 = piVar14[6];
        }
        pbVar9 = pbVar9 + *param_1;
        pbVar10 = pbVar10 + iVar6;
        iVar7 = iVar7 + 1;
      } while (iVar7 != local_3c);
      if ((bVar8 != 0xf) && (iVar3 - 7U < 4)) {
        (*DAT_101dc1cd8)(pbVar1,(ulong)uVar2);
      }
    }
  }
  return 0;
}




undefined8 FUN_1010bb5a8(int *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte bVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  int *piVar15;
  int local_4c;
  byte *local_48;
  
  local_48 = *(byte **)(param_1 + 0x26);
  if (local_48 != (byte *)0x0) {
    uVar3 = param_1[3];
    piVar15 = (int *)*param_2;
    iVar4 = *piVar15;
    iVar6 = FUN_1010bbe44(param_1,&local_48,&local_4c);
    if (0 < local_4c) {
      iVar8 = 0;
      iVar7 = piVar15[6];
      lVar1 = *(long *)(piVar15 + 4) + (long)(iVar7 * iVar6);
      lVar2 = 0;
      if (iVar4 != 4 && iVar4 != 9) {
        lVar2 = 3;
      }
      pbVar11 = (byte *)(lVar1 + lVar2);
      bVar10 = 0xff;
      pbVar9 = local_48;
      do {
        uVar12 = (ulong)uVar3;
        pbVar13 = pbVar11;
        pbVar14 = pbVar9;
        if (0 < (int)uVar3) {
          do {
            bVar5 = *pbVar14;
            *pbVar13 = bVar5;
            bVar10 = bVar10 & bVar5;
            uVar12 = uVar12 - 1;
            pbVar13 = pbVar13 + 4;
            pbVar14 = pbVar14 + 1;
          } while (uVar12 != 0);
          iVar7 = piVar15[6];
        }
        pbVar9 = pbVar9 + *param_1;
        pbVar11 = pbVar11 + iVar7;
        iVar8 = iVar8 + 1;
      } while (iVar8 != local_4c);
      if ((bVar10 != 0xff) && (iVar4 - 7U < 4)) {
        (*DAT_101dc1cd0)(lVar1,iVar4 == 4 || iVar4 == 9,(ulong)uVar3);
      }
    }
  }
  return 0;
}




undefined8 FUN_1010bb6bc(int *param_1,long *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  
  pvVar3 = *(void **)(param_1 + 0x26);
  lVar4 = *param_2;
  iVar1 = param_1[3];
  iVar5 = param_1[4];
  pvVar2 = (void *)(*(long *)(lVar4 + 0x28) + (long)*(int *)(lVar4 + 0x3c) * (long)param_1[2]);
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar4 + 0x28) != 0 && 0 < iVar5) {
      do {
        _memset(pvVar2,0xff,(long)iVar1);
        pvVar2 = (void *)((long)pvVar2 + (long)*(int *)(lVar4 + 0x3c));
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (0 < iVar5) {
    do {
      _memcpy(pvVar2,pvVar3,(long)iVar1);
      pvVar3 = (void *)((long)pvVar3 + (long)*param_1);
      pvVar2 = (void *)((long)pvVar2 + (long)*(int *)(lVar4 + 0x3c));
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}




int FUN_1010bb770(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 1) {
    iVar4 = 0;
  }
  else {
    iVar10 = 0;
    iVar7 = 0;
    iVar4 = 0;
    do {
      iVar2 = FUN_1010ce4f4(param_2 + 6,iVar1 - iVar10,
                            *(long *)(param_1 + 0x18) + (long)(*(int *)(param_1 + 0x30) * iVar10));
      iVar8 = (iVar1 + 1 >> 1) - iVar7;
      iVar3 = FUN_1010ce4f4(param_2 + 0x13,iVar8,
                            *(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x34) * (long)iVar7
                           );
      FUN_1010ce4f4(param_2 + 0x20,iVar8,
                    *(long *)(param_1 + 0x28) + (long)*(int *)(param_1 + 0x34) * (long)iVar7);
      if (*(int *)(param_2 + 0xe) < *(int *)(param_2 + 0xd)) {
        iVar8 = 0;
        puVar5 = (uint *)*param_2;
        pcVar6 = (code *)(&PTR_FUN_10182eab0)[*puVar5];
        lVar9 = *(long *)(puVar5 + 4) +
                ((long)*(int *)(param_2 + 4) + (long)iVar4) * (long)(int)puVar5[6];
        do {
          if (((0 < *(int *)(param_2 + 9)) || (*(int *)(param_2 + 0x1a) <= *(int *)(param_2 + 0x1b))
              ) || (0 < *(int *)(param_2 + 0x16))) break;
          FUN_1010ce0e4(param_2 + 6);
          FUN_1010ce0e4(param_2 + 0x13);
          FUN_1010ce0e4(param_2 + 0x20);
          (*pcVar6)(param_2[0xf],param_2[0x1c],param_2[0x29],lVar9,
                    *(undefined4 *)((long)param_2 + 100));
          lVar9 = lVar9 + (int)puVar5[6];
          iVar8 = iVar8 + 1;
        } while (*(int *)(param_2 + 0xe) < *(int *)(param_2 + 0xd));
      }
      else {
        iVar8 = 0;
      }
      iVar10 = iVar2 + iVar10;
      iVar7 = iVar3 + iVar7;
      iVar4 = iVar8 + iVar4;
    } while (iVar10 < iVar1);
  }
  return iVar4;
}




undefined8 FUN_1010bb92c(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  lVar3 = *(long *)(param_1 + 0x26);
  if ((lVar3 != 0) && (iVar1 = param_1[4], 0 < iVar1)) {
    iVar4 = 0;
    iVar5 = 0;
    while( true ) {
      iVar1 = FUN_1010ce4f4(param_2 + 0x168,iVar1 - iVar5,lVar3 + *param_1 * iVar5);
      iVar5 = iVar1 + iVar5;
      iVar2 = (**(code **)(param_2 + 0x1e8))(param_2,iVar4);
      iVar1 = param_1[4];
      if (iVar1 <= iVar5) break;
      iVar4 = iVar2 + iVar4;
      lVar3 = *(long *)(param_1 + 0x26);
    }
  }
  return 0;
}




int FUN_1010bb9c4(undefined8 *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  byte bVar9;
  byte *pbVar10;
  
  if (*(int *)(param_1 + 0x35) < *(int *)(param_1 + 0x34)) {
    piVar8 = (int *)*param_1;
    pbVar1 = (byte *)(*(long *)(piVar8 + 4) + (long)((*(int *)(param_1 + 4) + param_2) * piVar8[6]))
    ;
    iVar2 = *piVar8;
    uVar3 = *(uint *)((long)param_1 + 0x19c);
    if (*(int *)(param_1 + 0x30) < 1) {
      iVar7 = 0;
      bVar9 = 0xf;
      pbVar10 = pbVar1;
      do {
        FUN_1010ce0e4(param_1 + 0x2d);
        if (0 < (int)uVar3) {
          uVar5 = 0;
          pbVar6 = pbVar10;
          do {
            bVar4 = *(byte *)(param_1[0x36] + uVar5);
            *pbVar6 = *pbVar6 & 0xf0 | bVar4 >> 4;
            bVar9 = bVar9 & bVar4 >> 4;
            uVar5 = uVar5 + 1;
            pbVar6 = pbVar6 + 2;
          } while (uVar3 != uVar5);
        }
        iVar7 = iVar7 + 1;
        if (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x35)) break;
        pbVar10 = pbVar10 + piVar8[6];
      } while (*(int *)(param_1 + 0x30) < 1);
    }
    else {
      iVar7 = 0;
      bVar9 = 0xf;
    }
    if ((iVar2 - 7U < 4) && (bVar9 != 0xf)) {
      (*DAT_101dc1cd8)(pbVar1,(ulong)uVar3,iVar7);
    }
  }
  else {
    iVar7 = 0;
  }
  return iVar7;
}




int FUN_1010bbb04(undefined8 *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  byte *pbVar7;
  int iVar8;
  int *piVar9;
  byte bVar10;
  byte *pbVar11;
  
  piVar9 = (int *)*param_1;
  iVar3 = *piVar9;
  if (*(int *)(param_1 + 0x35) < *(int *)(param_1 + 0x34)) {
    lVar1 = *(long *)(piVar9 + 4) + (long)((*(int *)(param_1 + 4) + param_2) * piVar9[6]);
    uVar4 = *(uint *)((long)param_1 + 0x19c);
    if (*(int *)(param_1 + 0x30) < 1) {
      iVar8 = 0;
      lVar2 = 0;
      if (iVar3 != 4 && iVar3 != 9) {
        lVar2 = 3;
      }
      pbVar11 = (byte *)(lVar1 + lVar2);
      bVar10 = 0xff;
      do {
        FUN_1010ce0e4(param_1 + 0x2d);
        if (0 < (int)uVar4) {
          uVar6 = 0;
          pbVar7 = pbVar11;
          do {
            bVar5 = *(byte *)(param_1[0x36] + uVar6);
            *pbVar7 = bVar5;
            bVar10 = bVar10 & bVar5;
            uVar6 = uVar6 + 1;
            pbVar7 = pbVar7 + 4;
          } while (uVar4 != uVar6);
        }
        iVar8 = iVar8 + 1;
        if (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x35)) break;
        pbVar11 = pbVar11 + piVar9[6];
      } while (*(int *)(param_1 + 0x30) < 1);
    }
    else {
      iVar8 = 0;
      bVar10 = 0xff;
    }
    if ((iVar3 - 7U < 4) && (bVar10 != 0xff)) {
      (*DAT_101dc1cd0)(lVar1,iVar3 == 4 || iVar3 == 9,(ulong)uVar4,iVar8);
    }
  }
  else {
    iVar8 = 0;
  }
  return iVar8;
}




undefined8 FUN_1010bbc5c(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar2 = param_1[4];
  iVar1 = iVar2 + 1 >> 1;
  uVar3 = *(uint *)*param_2;
  if (((uVar3 < 0xd && (1 << (ulong)(uVar3 & 0x1f) & 0x103aU) != 0) || (uVar3 - 7 < 4)) &&
     (*(long *)(param_1 + 0x26) != 0)) {
    FUN_1010c1510(*(undefined8 *)(param_1 + 6),param_1[0xc],*(long *)(param_1 + 0x26),*param_1,
                  param_1[3],iVar2,0);
  }
  uVar4 = FUN_1010bbdc0(*(undefined8 *)(param_1 + 6),param_1[0xc],iVar2,param_2 + 6);
  FUN_1010bbdc0(*(undefined8 *)(param_1 + 8),param_1[0xd],iVar1,param_2 + 0x13);
  FUN_1010bbdc0(*(undefined8 *)(param_1 + 10),param_1[0xd],iVar1,param_2 + 0x20);
  return uVar4;
}




undefined8 FUN_1010bbd2c(undefined4 *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x26) != 0) {
    lVar6 = *param_2;
    lVar5 = *(long *)(lVar6 + 0x10);
    lVar3 = param_2[4];
    iVar1 = *(int *)(lVar6 + 0x30);
    lVar7 = *(long *)(lVar6 + 0x28);
    iVar2 = *(int *)(lVar6 + 0x3c);
    uVar4 = FUN_1010bbdc0(*(long *)(param_1 + 0x26),*param_1,param_1[4],param_2 + 0x2d);
    if (0 < (int)uVar4) {
      FUN_1010c1510(lVar5 + (long)iVar1 * (long)(int)lVar3,*(undefined4 *)(lVar6 + 0x30),
                    lVar7 + (long)iVar2 * (long)(int)lVar3,*(undefined4 *)(lVar6 + 0x3c),
                    *(undefined4 *)((long)param_2 + 0x19c),uVar4,1);
    }
  }
  return 0;
}




int FUN_1010bbdc0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if ((int)param_3 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      iVar2 = FUN_1010ce4f4(param_4,param_3,param_1,param_2);
      param_1 = param_1 + iVar2 * (int)param_2;
      uVar1 = (int)param_3 - iVar2;
      param_3 = (ulong)uVar1;
      iVar2 = FUN_1010ce5f8(param_4);
      iVar3 = iVar2 + iVar3;
    } while (0 < (int)uVar1);
  }
  return iVar3;
}




void FUN_1010bbe44(int *param_1,long *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  iVar1 = param_1[4];
  *param_3 = iVar1;
  if (param_1[0x16] != 0) {
    if (iVar2 == 0) {
      *param_3 = iVar1 + -1;
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -1;
      *param_2 = *param_2 - (long)*param_1;
    }
    iVar1 = param_1[2] + param_1[0x20] + param_1[4];
    if (iVar1 == param_1[0x21]) {
      *param_3 = iVar1 - (param_1[0x20] + iVar2);
    }
  }
  return;
}




void FUN_1010bbeac(long param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar15 = param_1 + 0x10;
  uVar7 = FUN_1010ccef0(lVar15,7);
  iVar8 = FUN_1010ccef0(lVar15,1);
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_1010ccffc(lVar15,4);
  }
  iVar9 = FUN_1010ccef0(lVar15,1);
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_1010ccffc(lVar15,4);
  }
  iVar10 = FUN_1010ccef0(lVar15,1);
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = FUN_1010ccffc(lVar15,4);
  }
  iVar11 = FUN_1010ccef0(lVar15,1);
  if (iVar11 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = FUN_1010ccffc(lVar15,4);
  }
  iVar12 = FUN_1010ccef0(lVar15,1);
  iVar13 = 0;
  if (iVar12 != 0) {
    iVar13 = FUN_1010ccffc(lVar15,4);
  }
  lVar15 = 0x3f4;
  iVar12 = *(int *)(param_1 + 0x78);
  lVar16 = 0x84;
  do {
    if (iVar12 == 0) {
      uVar14 = uVar7;
      if (lVar16 == 0x84) goto LAB_1010bbff4;
      puVar3 = (undefined8 *)(param_1 + lVar15);
      uVar18 = *(undefined8 *)(param_1 + 0x3e4);
      uVar17 = *(undefined8 *)(param_1 + 0x3dc);
      uVar19 = *(undefined8 *)(param_1 + 0x3ec);
      *puVar3 = *(undefined8 *)(param_1 + 0x3f4);
      puVar3[-1] = uVar19;
      puVar3[-2] = uVar18;
      puVar3[-3] = uVar17;
    }
    else {
      uVar14 = uVar7;
      if (*(int *)(param_1 + 0x80) != 0) {
        uVar14 = 0;
      }
      uVar14 = uVar14 + (int)*(char *)(param_1 + lVar16);
LAB_1010bbff4:
      uVar1 = uVar14 + iVar8;
      if (0x7e < (int)uVar1) {
        uVar1 = 0x7f;
      }
      puVar2 = (uint *)(param_1 + lVar15);
      uVar4 = uVar14;
      if (0x7e < (int)uVar14) {
        uVar4 = 0x7f;
      }
      uVar6 = *(ushort *)(&DAT_1013c9de8 + (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) * 2);
      puVar2[-6] = (uint)(byte)(&DAT_1013c9d68)[uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)];
      puVar2[-5] = (uint)uVar6;
      uVar1 = uVar14 + iVar9;
      if (0x7e < (int)uVar1) {
        uVar1 = 0x7f;
      }
      uVar4 = uVar14 + iVar10;
      if (0x7e < (int)uVar4) {
        uVar4 = 0x7f;
      }
      uVar5 = 8;
      if (0x7ffff < (uint)*(ushort *)
                           (&DAT_1013c9de8 + (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) * 2
                           ) * 0x18ccd) {
        uVar5 = (uint)*(ushort *)
                       (&DAT_1013c9de8 + (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) * 2) *
                0x18ccd >> 0x10;
      }
      puVar2[-4] = (uint)(byte)(&DAT_1013c9d68)[uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)] << 1;
      puVar2[-3] = uVar5;
      uVar1 = uVar14 + iVar11;
      if (0x74 < (int)uVar1) {
        uVar1 = 0x75;
      }
      uVar14 = uVar14 + iVar13;
      uVar4 = uVar14;
      if (0x7e < (int)uVar14) {
        uVar4 = 0x7f;
      }
      uVar6 = *(ushort *)(&DAT_1013c9de8 + (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) * 2);
      puVar2[-2] = (uint)(byte)(&DAT_1013c9d68)[uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)];
      puVar2[-1] = (uint)uVar6;
      *puVar2 = uVar14;
    }
    lVar15 = lVar15 + 0x20;
    lVar16 = lVar16 + 1;
    if (lVar15 == 0x474) {
      return;
    }
  } while( true );
}




void FUN_1010bc0d0(undefined2 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0xff;
  *param_1 = 0xffff;
  return;
}




bool FUN_1010bc0e4(uint *param_1,long param_2)

{
  ulong uVar1;
  int *piVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  byte bVar20;
  long lVar21;
  ulong uVar22;
  
  if (0 < *(int *)(param_2 + 400)) {
    lVar21 = 0;
    do {
      lVar18 = *(long *)(param_2 + 0x888);
      lVar9 = *(long *)(param_2 + 0x8f0);
      if (*(int *)(param_2 + 0x7c) == 0) {
        uVar10 = 0;
      }
      else {
        bVar4 = *(byte *)(param_2 + 0x45c);
        uVar16 = param_1[1];
        uVar7 = param_1[2];
        if ((int)uVar7 < 0) {
          puVar3 = *(uint **)(param_1 + 4);
          if (*(uint **)(param_1 + 6) < puVar3 + 1) {
            FUN_1010cce8c(param_1);
            uVar7 = param_1[2];
          }
          else {
            uVar11 = *puVar3;
            *(long *)(param_1 + 4) = (long)puVar3 + 3;
            uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
            *param_1 = (uint)(CONCAT44(*param_1,uVar11 >> 0x10 | uVar11 << 0x10) >> 8);
            uVar7 = uVar7 + 0x18;
            param_1[2] = uVar7;
          }
        }
        uVar6 = uVar16 * bVar4;
        uVar5 = uVar6 >> 8;
        uVar11 = *param_1;
        uVar12 = uVar11 >> (ulong)(uVar7 & 0x1f);
        uVar15 = uVar5;
        if (uVar6 >> 8 < uVar12) {
          uVar11 = uVar11 - (uVar5 + 1 << (ulong)(uVar7 & 0x1f));
          *param_1 = uVar11;
          uVar15 = uVar16 - (uVar5 + 1);
        }
        if (uVar15 < 0x7f) {
          uVar19 = (ulong)uVar15;
          uVar15 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar15 * 4);
          uVar7 = uVar7 - (byte)(&DAT_1013cbe28)[uVar19];
          param_1[2] = uVar7;
        }
        param_1[1] = uVar15;
        if (uVar5 < uVar12) {
          bVar4 = *(byte *)(param_2 + 0x45e);
          if ((int)uVar7 < 0) {
            puVar3 = *(uint **)(param_1 + 4);
            if (*(uint **)(param_1 + 6) < puVar3 + 1) {
              FUN_1010cce8c(param_1);
              uVar7 = param_1[2];
              uVar11 = *param_1;
            }
            else {
              uVar16 = *puVar3;
              *(long *)(param_1 + 4) = (long)puVar3 + 3;
              uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
              uVar11 = (uint)(CONCAT44(uVar11,uVar16 >> 0x10 | uVar16 << 0x10) >> 8);
              *param_1 = uVar11;
              uVar7 = uVar7 + 0x18;
              param_1[2] = uVar7;
            }
          }
          uVar16 = uVar15 * bVar4;
          uVar12 = uVar16 >> 8;
          if (uVar16 >> 8 < uVar11 >> (ulong)(uVar7 & 0x1f)) {
            iVar8 = uVar12 + 1;
            uVar12 = uVar15 - iVar8;
            *param_1 = uVar11 - (iVar8 << (ulong)(uVar7 & 0x1f));
            uVar10 = 3;
          }
          else {
            uVar10 = 2;
          }
        }
        else {
          bVar4 = *(byte *)(param_2 + 0x45d);
          if ((int)uVar7 < 0) {
            puVar3 = *(uint **)(param_1 + 4);
            if (*(uint **)(param_1 + 6) < puVar3 + 1) {
              FUN_1010cce8c(param_1);
              uVar7 = param_1[2];
              uVar11 = *param_1;
            }
            else {
              uVar16 = *puVar3;
              *(long *)(param_1 + 4) = (long)puVar3 + 3;
              uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
              uVar11 = (uint)(CONCAT44(uVar11,uVar16 >> 0x10 | uVar16 << 0x10) >> 8);
              *param_1 = uVar11;
              uVar7 = uVar7 + 0x18;
              param_1[2] = uVar7;
            }
          }
          uVar16 = uVar15 * bVar4;
          uVar12 = uVar16 >> 8;
          uVar5 = uVar11 >> (ulong)(uVar7 & 0x1f);
          uVar16 = uVar16 >> 8;
          if (uVar16 < uVar5) {
            iVar8 = uVar12 + 1;
            uVar12 = uVar15 - iVar8;
            *param_1 = uVar11 - (iVar8 << (ulong)(uVar7 & 0x1f));
          }
          uVar10 = uVar16 < uVar5;
        }
        if (uVar12 < 0x7f) {
          uVar19 = (ulong)uVar12;
          uVar12 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar12 * 4);
          param_1[2] = uVar7 - (byte)(&DAT_1013cbe28)[uVar19];
        }
        param_1[1] = uVar12;
      }
      *(undefined1 *)(lVar9 + lVar21 * 800 + 0x31e) = uVar10;
      if (*(int *)(param_2 + 0x880) == 0) {
        uVar16 = param_1[1];
        uVar7 = param_1[2];
      }
      else {
        bVar4 = *(byte *)(param_2 + 0x884);
        uVar11 = param_1[1];
        uVar7 = param_1[2];
        if ((int)uVar7 < 0) {
          puVar3 = *(uint **)(param_1 + 4);
          if (*(uint **)(param_1 + 6) < puVar3 + 1) {
            FUN_1010cce8c(param_1);
            uVar7 = param_1[2];
          }
          else {
            uVar16 = *puVar3;
            *(long *)(param_1 + 4) = (long)puVar3 + 3;
            uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
            *param_1 = (uint)(CONCAT44(*param_1,uVar16 >> 0x10 | uVar16 << 0x10) >> 8);
            uVar7 = uVar7 + 0x18;
            param_1[2] = uVar7;
          }
        }
        uVar15 = uVar11 * bVar4;
        uVar16 = uVar15 >> 8;
        uVar12 = *param_1 >> (ulong)(uVar7 & 0x1f);
        uVar15 = uVar15 >> 8;
        if (uVar15 < uVar12) {
          iVar8 = uVar16 + 1;
          uVar16 = uVar11 - iVar8;
          *param_1 = *param_1 - (iVar8 << (ulong)(uVar7 & 0x1f));
        }
        if (uVar16 < 0x7f) {
          uVar19 = (ulong)uVar16;
          uVar16 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar16 * 4);
          uVar7 = uVar7 - (byte)(&DAT_1013cbe28)[uVar19];
          param_1[2] = uVar7;
        }
        param_1[1] = uVar16;
        *(bool *)(lVar9 + lVar21 * 800 + 0x31d) = uVar15 < uVar12;
      }
      if ((int)uVar7 < 0) {
        puVar3 = *(uint **)(param_1 + 4);
        if (*(uint **)(param_1 + 6) < puVar3 + 1) {
          FUN_1010cce8c(param_1);
          uVar7 = param_1[2];
        }
        else {
          uVar11 = *puVar3;
          *(long *)(param_1 + 4) = (long)puVar3 + 3;
          uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
          *param_1 = (uint)(CONCAT44(*param_1,uVar11 >> 0x10 | uVar11 << 0x10) >> 8);
          uVar7 = uVar7 + 0x18;
          param_1[2] = uVar7;
        }
      }
      uVar5 = uVar16 * 0x91 >> 8;
      uVar11 = *param_1;
      uVar12 = uVar11 >> (ulong)(uVar7 & 0x1f);
      uVar15 = uVar5;
      if (uVar16 * 0x91 >> 8 < uVar12) {
        uVar11 = uVar11 - (uVar5 + 1 << (ulong)(uVar7 & 0x1f));
        *param_1 = uVar11;
        uVar15 = uVar16 - (uVar5 + 1);
      }
      if (uVar15 < 0x7f) {
        uVar19 = (ulong)uVar15;
        uVar15 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar15 * 4);
        uVar7 = uVar7 - (byte)(&DAT_1013cbe28)[uVar19];
        param_1[2] = uVar7;
      }
      piVar2 = (int *)(lVar18 + (ulong)(uint)((int)lVar21 << 2));
      param_1[1] = uVar15;
      *(bool *)(lVar9 + lVar21 * 800 + 0x300) = uVar12 <= uVar5;
      if (uVar5 < uVar12) {
        if ((int)uVar7 < 0) {
          puVar3 = *(uint **)(param_1 + 4);
          if (*(uint **)(param_1 + 6) < puVar3 + 1) {
            FUN_1010cce8c(param_1);
            uVar7 = param_1[2];
            uVar11 = *param_1;
          }
          else {
            uVar16 = *puVar3;
            *(long *)(param_1 + 4) = (long)puVar3 + 3;
            uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
            uVar11 = (uint)(CONCAT44(uVar11,uVar16 >> 0x10 | uVar16 << 0x10) >> 8);
            *param_1 = uVar11;
            uVar7 = uVar7 + 0x18;
            param_1[2] = uVar7;
          }
        }
        uVar5 = uVar15 * 0x9c >> 8;
        uVar12 = uVar11 >> (ulong)(uVar7 & 0x1f);
        uVar16 = uVar5;
        if (uVar15 * 0x9c >> 8 < uVar12) {
          uVar11 = uVar11 - (uVar5 + 1 << (ulong)(uVar7 & 0x1f));
          *param_1 = uVar11;
          uVar16 = uVar15 - (uVar5 + 1);
        }
        if (uVar16 < 0x7f) {
          uVar19 = (ulong)uVar16;
          uVar16 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar16 * 4);
          uVar7 = uVar7 - (byte)(&DAT_1013cbe28)[uVar19];
          param_1[2] = uVar7;
        }
        param_1[1] = uVar16;
        if (uVar5 < uVar12) {
          if ((int)uVar7 < 0) {
            puVar3 = *(uint **)(param_1 + 4);
            if (*(uint **)(param_1 + 6) < puVar3 + 1) {
              FUN_1010cce8c(param_1);
              uVar7 = param_1[2];
              uVar11 = *param_1;
            }
            else {
              uVar15 = *puVar3;
              *(long *)(param_1 + 4) = (long)puVar3 + 3;
              uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
              uVar11 = (uint)(CONCAT44(uVar11,uVar15 >> 0x10 | uVar15 << 0x10) >> 8);
              *param_1 = uVar11;
              uVar7 = uVar7 + 0x18;
              param_1[2] = uVar7;
            }
          }
          uVar5 = uVar16 >> 1 & 0xffffff;
          uVar12 = uVar11 >> (ulong)(uVar7 & 0x1f);
          uVar15 = uVar5;
          if (uVar5 < uVar12) {
            uVar15 = uVar16 - (uVar5 + 1);
            *param_1 = uVar11 - (uVar5 + 1 << (ulong)(uVar7 & 0x1f));
          }
          if (uVar15 < 0x7f) {
            uVar19 = (ulong)uVar15;
            uVar15 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar15 * 4);
            param_1[2] = uVar7 - (byte)(&DAT_1013cbe28)[uVar19];
          }
          param_1[1] = uVar15;
          iVar8 = 3;
          if (uVar5 < uVar12) {
            iVar8 = 1;
          }
        }
        else {
          if ((int)uVar7 < 0) {
            puVar3 = *(uint **)(param_1 + 4);
            if (*(uint **)(param_1 + 6) < puVar3 + 1) {
              FUN_1010cce8c(param_1);
              uVar7 = param_1[2];
              uVar11 = *param_1;
            }
            else {
              uVar15 = *puVar3;
              *(long *)(param_1 + 4) = (long)puVar3 + 3;
              uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
              uVar11 = (uint)(CONCAT44(uVar11,uVar15 >> 0x10 | uVar15 << 0x10) >> 8);
              *param_1 = uVar11;
              uVar7 = uVar7 + 0x18;
              param_1[2] = uVar7;
            }
          }
          uVar5 = uVar16 * 0xa3 >> 8;
          uVar12 = uVar11 >> (ulong)(uVar7 & 0x1f);
          uVar15 = uVar5;
          if (uVar16 * 0xa3 >> 8 < uVar12) {
            uVar15 = uVar16 - (uVar5 + 1);
            *param_1 = uVar11 - (uVar5 + 1 << (ulong)(uVar7 & 0x1f));
          }
          if (uVar15 < 0x7f) {
            uVar19 = (ulong)uVar15;
            uVar15 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar15 * 4);
            param_1[2] = uVar7 - (byte)(&DAT_1013cbe28)[uVar19];
          }
          param_1[1] = uVar15;
          iVar8 = (uint)(uVar5 < uVar12) << 1;
        }
        *(char *)(lVar9 + lVar21 * 800 + 0x301) = (char)iVar8;
        *piVar2 = iVar8 * 0x1010101;
        *(int *)(param_2 + 0x890) = iVar8 * 0x1010101;
      }
      else {
        lVar18 = 0;
        piVar14 = (int *)(lVar9 + lVar21 * 800 + 0x301);
        do {
          lVar17 = 0;
          uVar19 = (ulong)*(byte *)(param_2 + lVar18 + 0x890);
          do {
            bVar4 = *(byte *)((long)piVar2 + lVar17);
            uVar16 = param_1[1];
            uVar7 = param_1[2];
            if ((int)uVar7 < 0) {
              puVar3 = *(uint **)(param_1 + 4);
              if (*(uint **)(param_1 + 6) < puVar3 + 1) {
                FUN_1010cce8c(param_1);
                uVar7 = param_1[2];
              }
              else {
                uVar11 = *puVar3;
                *(long *)(param_1 + 4) = (long)puVar3 + 3;
                uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
                *param_1 = (uint)(CONCAT44(*param_1,uVar11 >> 0x10 | uVar11 << 0x10) >> 8);
                uVar7 = uVar7 + 0x18;
                param_1[2] = uVar7;
              }
            }
            uVar11 = uVar16 * (byte)(&UNK_1013ca728)
                                    [(-(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3) +
                                     (long)(int)uVar19 + (ulong)bVar4 * 0x5a];
            uVar12 = uVar11 >> 8;
            uVar15 = *param_1;
            uVar5 = uVar15 >> (ulong)(uVar7 & 0x1f);
            uVar11 = uVar11 >> 8;
            if (uVar11 < uVar5) {
              iVar8 = uVar12 + 1;
              uVar12 = uVar16 - iVar8;
              uVar15 = uVar15 - (iVar8 << (ulong)(uVar7 & 0x1f));
              *param_1 = uVar15;
            }
            uVar22 = (ulong)(uVar11 < uVar5);
            if (uVar12 < 0x7f) {
              uVar13 = (ulong)uVar12;
              uVar12 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar12 * 4);
              uVar7 = uVar7 - (byte)(&DAT_1013cbe28)[uVar13];
              param_1[2] = uVar7;
            }
            param_1[1] = uVar12;
            bVar20 = (&DAT_1013caaac)[uVar22];
            if ((0xa2eaUL >> uVar22 & 1) != 0) {
              do {
                uVar22 = (ulong)bVar20;
                if ((int)uVar7 < 0) {
                  puVar3 = *(uint **)(param_1 + 4);
                  if (*(uint **)(param_1 + 6) < puVar3 + 1) {
                    FUN_1010cce8c(param_1);
                    uVar7 = param_1[2];
                    uVar15 = *param_1;
                  }
                  else {
                    uVar16 = *puVar3;
                    *(long *)(param_1 + 4) = (long)puVar3 + 3;
                    uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
                    uVar15 = (uint)(CONCAT44(uVar15,uVar16 >> 0x10 | uVar16 << 0x10) >> 8);
                    *param_1 = uVar15;
                    uVar7 = uVar7 + 0x18;
                    param_1[2] = uVar7;
                  }
                }
                uVar5 = uVar12 * (byte)(&UNK_1013ca728)
                                       [(long)(char)bVar20 +
                                        (long)(int)uVar19 * 9 + (ulong)bVar4 * 0x5a] >> 8;
                uVar11 = uVar15 >> (ulong)(uVar7 & 0x1f);
                uVar16 = uVar12 * (byte)(&UNK_1013ca728)
                                        [(long)(char)bVar20 +
                                         (long)(int)uVar19 * 9 + (ulong)bVar4 * 0x5a] >> 8;
                if (uVar16 < uVar11) {
                  iVar8 = uVar5 + 1;
                  uVar15 = uVar15 - (iVar8 << (ulong)(uVar7 & 0x1f));
                  *param_1 = uVar15;
                  uVar5 = uVar12 - iVar8;
                }
                uVar12 = uVar5;
                uVar13 = (ulong)(uVar16 < uVar11);
                if (uVar12 < 0x7f) {
                  uVar1 = (ulong)uVar12;
                  uVar12 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar12 * 4);
                  uVar7 = uVar7 - (byte)(&DAT_1013cbe28)[uVar1];
                  param_1[2] = uVar7;
                }
                param_1[1] = uVar12;
                bVar20 = (&DAT_1013caaac)
                         [uVar13 | -(ulong)(bVar20 >> 7) & 0xfffffffffffffe00 | uVar22 << 1];
              } while ((0xa2eaUL >> (uVar13 | uVar22 << 1 & 0x3f) & 1) != 0);
            }
            uVar19 = (ulong)(uint)-(int)(char)bVar20;
            uVar10 = (undefined1)-(int)(char)bVar20;
            *(undefined1 *)((long)piVar2 + lVar17) = uVar10;
            lVar17 = lVar17 + 1;
          } while (lVar17 != 4);
          *piVar14 = *piVar2;
          *(undefined1 *)(param_2 + lVar18 + 0x890) = uVar10;
          lVar18 = lVar18 + 1;
          piVar14 = piVar14 + 1;
        } while (lVar18 != 4);
      }
      uVar16 = param_1[1];
      uVar7 = param_1[2];
      if ((int)uVar7 < 0) {
        puVar3 = *(uint **)(param_1 + 4);
        if (*(uint **)(param_1 + 6) < puVar3 + 1) {
          FUN_1010cce8c(param_1);
          uVar7 = param_1[2];
        }
        else {
          uVar11 = *puVar3;
          *(long *)(param_1 + 4) = (long)puVar3 + 3;
          uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
          *param_1 = (uint)(CONCAT44(*param_1,uVar11 >> 0x10 | uVar11 << 0x10) >> 8);
          uVar7 = uVar7 + 0x18;
          param_1[2] = uVar7;
        }
      }
      uVar6 = uVar16 * 0x8e;
      uVar5 = uVar6 >> 8;
      uVar11 = *param_1;
      uVar12 = uVar11 >> (ulong)(uVar7 & 0x1f);
      uVar15 = uVar5;
      if (uVar6 >> 8 < uVar12) {
        uVar11 = uVar11 - (uVar5 + 1 << (ulong)(uVar7 & 0x1f));
        *param_1 = uVar11;
        uVar15 = uVar16 - (uVar5 + 1);
      }
      if (uVar15 < 0x7f) {
        uVar19 = (ulong)uVar15;
        uVar15 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar15 * 4);
        uVar7 = uVar7 - (byte)(&DAT_1013cbe28)[uVar19];
        param_1[2] = uVar7;
      }
      param_1[1] = uVar15;
      if (uVar5 < uVar12) {
        if ((int)uVar7 < 0) {
          puVar3 = *(uint **)(param_1 + 4);
          if (*(uint **)(param_1 + 6) < puVar3 + 1) {
            FUN_1010cce8c(param_1);
            uVar7 = param_1[2];
            uVar11 = *param_1;
          }
          else {
            uVar16 = *puVar3;
            *(long *)(param_1 + 4) = (long)puVar3 + 3;
            uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
            uVar11 = (uint)(CONCAT44(uVar11,uVar16 >> 0x10 | uVar16 << 0x10) >> 8);
            *param_1 = uVar11;
            uVar7 = uVar7 + 0x18;
            param_1[2] = uVar7;
          }
        }
        uVar5 = uVar15 * 0x72 >> 8;
        uVar12 = uVar11 >> (ulong)(uVar7 & 0x1f);
        uVar16 = uVar5;
        if (uVar15 * 0x72 >> 8 < uVar12) {
          uVar11 = uVar11 - (uVar5 + 1 << (ulong)(uVar7 & 0x1f));
          *param_1 = uVar11;
          uVar16 = uVar15 - (uVar5 + 1);
        }
        if (uVar16 < 0x7f) {
          uVar19 = (ulong)uVar16;
          uVar16 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar16 * 4);
          uVar7 = uVar7 - (byte)(&DAT_1013cbe28)[uVar19];
          param_1[2] = uVar7;
        }
        param_1[1] = uVar16;
        if (uVar5 < uVar12) {
          if ((int)uVar7 < 0) {
            puVar3 = *(uint **)(param_1 + 4);
            if (*(uint **)(param_1 + 6) < puVar3 + 1) {
              FUN_1010cce8c(param_1);
              uVar7 = param_1[2];
              uVar11 = *param_1;
            }
            else {
              uVar15 = *puVar3;
              *(long *)(param_1 + 4) = (long)puVar3 + 3;
              uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
              uVar11 = (uint)(CONCAT44(uVar11,uVar15 >> 0x10 | uVar15 << 0x10) >> 8);
              *param_1 = uVar11;
              uVar7 = uVar7 + 0x18;
              param_1[2] = uVar7;
            }
          }
          uVar5 = uVar16 * 0xb7 >> 8;
          uVar12 = uVar11 >> (ulong)(uVar7 & 0x1f);
          uVar15 = uVar5;
          if (uVar16 * 0xb7 >> 8 < uVar12) {
            uVar15 = uVar16 - (uVar5 + 1);
            *param_1 = uVar11 - (uVar5 + 1 << (ulong)(uVar7 & 0x1f));
          }
          if (uVar15 < 0x7f) {
            uVar19 = (ulong)uVar15;
            uVar15 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar15 * 4);
            param_1[2] = uVar7 - (byte)(&DAT_1013cbe28)[uVar19];
          }
          param_1[1] = uVar15;
          uVar10 = 3;
          if (uVar5 < uVar12) {
            uVar10 = 1;
          }
        }
        else {
          uVar10 = 2;
        }
      }
      else {
        uVar10 = 0;
      }
      *(undefined1 *)(lVar9 + lVar21 * 800 + 0x311) = uVar10;
      lVar21 = lVar21 + 1;
    } while (lVar21 < *(int *)(param_2 + 400));
  }
  return *(int *)(param_2 + 0x30) == 0;
}




void FUN_1010bcbb8(uint *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
  lVar11 = 0;
  lVar22 = param_2 + 0x45f;
  puVar16 = &DAT_1013c9ee8;
  puVar19 = &DAT_1013ca308;
  do {
    lVar12 = 0;
    puVar17 = puVar16;
    puVar20 = puVar19;
    lVar23 = lVar22;
    do {
      lVar15 = 0;
      puVar18 = puVar17;
      puVar21 = puVar20;
      lVar24 = lVar23;
      do {
        lVar14 = 0;
        do {
          bVar4 = puVar18[lVar14];
          uVar2 = param_1[1];
          uVar10 = param_1[2];
          if ((int)uVar10 < 0) {
            puVar3 = *(uint **)(param_1 + 4);
            if (*(uint **)(param_1 + 6) < puVar3 + 1) {
              FUN_1010cce8c(param_1);
              uVar10 = param_1[2];
            }
            else {
              uVar13 = *puVar3;
              *(long *)(param_1 + 4) = (long)puVar3 + 3;
              uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
              *param_1 = (uint)(CONCAT44(*param_1,uVar13 >> 0x10 | uVar13 << 0x10) >> 8);
              uVar10 = uVar10 + 0x18;
              param_1[2] = uVar10;
            }
          }
          uVar7 = uVar2 * bVar4;
          uVar6 = uVar7 >> 8;
          uVar5 = *param_1 >> (ulong)(uVar10 & 0x1f);
          uVar13 = uVar6;
          if (uVar7 >> 8 < uVar5) {
            uVar13 = uVar2 - (uVar6 + 1);
            *param_1 = *param_1 - (uVar6 + 1 << (ulong)(uVar10 & 0x1f));
          }
          if (uVar13 < 0x7f) {
            uVar1 = (ulong)uVar13;
            uVar13 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar13 * 4);
            param_1[2] = uVar10 - (byte)(&DAT_1013cbe28)[uVar1];
          }
          param_1[1] = uVar13;
          if (uVar6 < uVar5) {
            uVar8 = FUN_1010ccef0(param_1,8);
          }
          else {
            uVar8 = puVar21[lVar14];
          }
          *(undefined1 *)(lVar24 + lVar14) = uVar8;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0xb);
        lVar15 = lVar15 + 1;
        puVar18 = puVar18 + 0xb;
        puVar21 = puVar21 + 0xb;
        lVar24 = lVar24 + 0xb;
      } while (lVar15 != 3);
      lVar12 = lVar12 + 1;
      puVar17 = puVar17 + 0x21;
      puVar20 = puVar20 + 0x21;
      lVar23 = lVar23 + 0x21;
    } while (lVar12 != 8);
    lVar11 = lVar11 + 1;
    puVar16 = puVar16 + 0x108;
    puVar19 = puVar19 + 0x108;
    lVar22 = lVar22 + 0x108;
  } while (lVar11 != 4);
  iVar9 = FUN_1010ccef0(param_1,1);
  *(int *)(param_2 + 0x880) = iVar9;
  if (iVar9 != 0) {
    uVar8 = FUN_1010ccef0(param_1,8);
    *(undefined1 *)(param_2 + 0x884) = uVar8;
  }
  return;
}




undefined8 FUN_1010bcd88(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 0xffffff00) == 0x200) {
    if (param_1 == (undefined8 *)0x0) {
      uVar1 = 1;
    }
    else {
      param_1[0x11] = 0;
      param_1[0x10] = 0;
      param_1[0x13] = 0;
      param_1[0x12] = 0;
      param_1[0xd] = 0;
      param_1[0xc] = 0;
      param_1[0xf] = 0;
      param_1[0xe] = 0;
      param_1[9] = 0;
      param_1[8] = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      uVar1 = 1;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




undefined4 * FUN_1010bcdcc(void)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined4 *)FUN_1010ce998(1,0x950);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(char **)(puVar1 + 2) = "OK";
    puVar2 = (undefined8 *)FUN_1010ce65c();
    (*(code *)*puVar2)(puVar1 + 0x24);
    puVar1[1] = 0;
    puVar1[0x6a] = 1;
  }
  return puVar1;
}




void FUN_1010bce28(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_1010bce54();
    _free(param_1);
    return;
  }
  return;
}




void FUN_1010bce54(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_1010ce65c();
    (**(code **)(lVar1 + 0x28))(param_1 + 0x90);
    FUN_1010b9114(*(undefined8 *)(param_1 + 0x920));
    *(undefined8 *)(param_1 + 0x920) = 0;
    _free(*(void **)(param_1 + 0x8d8));
    *(undefined8 *)(param_1 + 0x8e0) = 0;
    *(undefined8 *)(param_1 + 0x8d8) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}




undefined8 FUN_1010bceb0(int *param_1,int param_2,undefined8 param_3)

{
  if (*param_1 == 0) {
    *(undefined8 *)(param_1 + 2) = param_3;
    *param_1 = param_2;
    param_1[1] = 0;
  }
  return 0;
}




undefined8 FUN_1010bcec8(byte *param_1,ulong param_2,ulong param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((param_1 != (byte *)0x0) && (9 < param_2)) {
    if (((param_1[3] == 0x9d) &&
        (((param_1[4] == 1 && (param_1[5] == 0x2a)) && ((*param_1 & 0x19) == 0x10)))) &&
       ((uint3)(CONCAT12(param_1[2],CONCAT11(param_1[1],*param_1)) >> 5) < param_3)) {
      uVar3 = 0;
      uVar1 = (uint)param_1[6] | (param_1[7] & 0x3f) << 8;
      if ((uVar1 != 0) && (uVar2 = (uint)param_1[8] | (param_1[9] & 0x3f) << 8, uVar2 != 0)) {
        if (param_4 != (uint *)0x0) {
          *param_4 = uVar1;
        }
        if (param_5 != (uint *)0x0) {
          *param_5 = uVar2;
        }
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}




int FUN_1010bcf70(int *param_1,uint *param_2)

{
  int *piVar1;
  byte bVar2;
  uint3 uVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  byte *pbVar10;
  ulong uVar11;
  char *pcVar12;
  uint3 *puVar13;
  uint uVar14;
  byte *pbVar15;
  ulong uVar16;
  int *piVar17;
  byte *pbVar18;
  long lVar19;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  *param_1 = 0;
  *(char **)(param_1 + 2) = "OK";
  if (param_2 == (uint *)0x0) {
    *param_1 = 2;
    pcVar12 = "null VP8Io passed to VP8GetHeaders()";
  }
  else {
    uVar11 = *(ulong *)(param_2 + 0x18);
    uVar16 = uVar11 - 3;
    if (uVar11 < 3 || uVar16 == 0) {
      *param_1 = 7;
      pcVar12 = "Truncated header.";
    }
    else {
      puVar13 = *(uint3 **)(param_2 + 0x1a);
      bVar2 = (byte)*puVar13;
      bVar4 = bVar2 >> 1 & 7;
      bVar5 = bVar2 >> 4 & 1;
      uVar3 = *puVar13;
      *(byte *)(param_1 + 0xe) = ~bVar2 & 1;
      *(byte *)((long)param_1 + 0x39) = bVar4;
      *(byte *)((long)param_1 + 0x3a) = bVar5;
      uVar14 = (uint)(uVar3 >> 5);
      param_1[0xf] = uVar14;
      if (bVar4 < 4) {
        if (bVar5 == 0) {
          *param_1 = 4;
          pcVar12 = "Frame not displayable.";
        }
        else {
          pbVar15 = (byte *)((long)puVar13 + 3);
          if ((~bVar2 & 1) == 0) {
LAB_1010bd12c:
            if (uVar16 < uVar14) {
              if (*param_1 != 0) {
                return 0;
              }
              *param_1 = 7;
              pcVar12 = "bad partition length";
            }
            else {
              piVar1 = param_1 + 4;
              FUN_1010cce40(piVar1,pbVar15,pbVar15 + uVar14);
              uVar14 = param_1[0xf];
              if ((char)param_1[0xe] != '\0') {
                uVar6 = FUN_1010ccef0(piVar1,1);
                *(undefined1 *)((long)param_1 + 0x46) = uVar6;
                uVar6 = FUN_1010ccef0(piVar1,1);
                *(undefined1 *)((long)param_1 + 0x47) = uVar6;
              }
              iVar7 = FUN_1010ccef0(piVar1,1);
              param_1[0x1e] = iVar7;
              if (iVar7 == 0) {
                param_1[0x1f] = 0;
              }
              else {
                iVar7 = FUN_1010ccef0(piVar1,1);
                param_1[0x1f] = iVar7;
                iVar7 = FUN_1010ccef0(piVar1,1);
                if (iVar7 != 0) {
                  iVar7 = FUN_1010ccef0(piVar1,1);
                  lVar19 = 0;
                  param_1[0x20] = iVar7;
                  do {
                    iVar7 = FUN_1010ccef0(piVar1,1);
                    uVar6 = 0;
                    if (iVar7 != 0) {
                      uVar6 = FUN_1010ccffc(piVar1,7);
                    }
                    *(undefined1 *)((long)param_1 + lVar19 + 0x84) = uVar6;
                    lVar19 = lVar19 + 1;
                  } while (lVar19 != 4);
                  lVar19 = 0;
                  do {
                    iVar7 = FUN_1010ccef0(piVar1,1);
                    uVar6 = 0;
                    if (iVar7 != 0) {
                      uVar6 = FUN_1010ccffc(piVar1,6);
                    }
                    *(undefined1 *)((long)param_1 + lVar19 + 0x88) = uVar6;
                    lVar19 = lVar19 + 1;
                  } while (lVar19 != 4);
                }
                if (param_1[0x1f] != 0) {
                  lVar19 = 0;
                  do {
                    iVar7 = FUN_1010ccef0(piVar1,1);
                    if (iVar7 == 0) {
                      uVar6 = 0xff;
                    }
                    else {
                      uVar6 = FUN_1010ccef0(piVar1,8);
                    }
                    *(undefined1 *)((long)param_1 + lVar19 + 0x45c) = uVar6;
                    lVar19 = lVar19 + 1;
                  } while (lVar19 != 3);
                }
              }
              if (param_1[0xc] == 0) {
                iVar7 = FUN_1010ccef0(piVar1,1);
                param_1[0x12] = iVar7;
                iVar7 = FUN_1010ccef0(piVar1,6);
                param_1[0x13] = iVar7;
                iVar7 = FUN_1010ccef0(piVar1,3);
                param_1[0x14] = iVar7;
                iVar7 = FUN_1010ccef0(piVar1,1);
                param_1[0x15] = iVar7;
                if ((iVar7 != 0) && (iVar7 = FUN_1010ccef0(piVar1,1), iVar7 != 0)) {
                  lVar19 = 0;
                  do {
                    iVar7 = FUN_1010ccef0(piVar1,1);
                    if (iVar7 != 0) {
                      uVar8 = FUN_1010ccffc(piVar1,6);
                      *(undefined4 *)((long)param_1 + lVar19 + 0x58) = uVar8;
                    }
                    lVar19 = lVar19 + 4;
                  } while (lVar19 != 0x10);
                  lVar19 = 0;
                  do {
                    iVar7 = FUN_1010ccef0(piVar1,1);
                    if (iVar7 != 0) {
                      uVar8 = FUN_1010ccffc(piVar1,6);
                      *(undefined4 *)((long)param_1 + lVar19 + 0x68) = uVar8;
                    }
                    lVar19 = lVar19 + 4;
                  } while (lVar19 != 0x10);
                }
                iVar7 = 0;
                if ((param_1[0x13] != 0) && (iVar7 = 1, param_1[0x12] == 0)) {
                  iVar7 = 2;
                }
                param_1[0x23e] = iVar7;
                if (param_1[0xc] == 0) {
                  uVar9 = FUN_1010ccef0(piVar1,2);
                  iVar7 = 1 << (ulong)(uVar9 & 0x1f);
                  param_1[0x6a] = iVar7;
                  uVar9 = iVar7 - 1;
                  lVar19 = (-(ulong)(uVar9 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar9 << 1) +
                           (long)(int)uVar9;
                  if ((long)(uVar16 - uVar14) < lVar19) {
                    iVar7 = 7;
                  }
                  else {
                    puVar13 = (uint3 *)(pbVar15 + uVar14);
                    pbVar15 = pbVar15 + uVar16;
                    pbVar18 = (byte *)((long)puVar13 + lVar19);
                    if (1 < iVar7) {
                      uVar16 = (ulong)uVar9;
                      piVar17 = param_1 + 0x6c;
                      pbVar10 = pbVar18;
                      do {
                        pbVar18 = pbVar15;
                        if (pbVar10 + *puVar13 <= pbVar15) {
                          pbVar18 = pbVar10 + *puVar13;
                        }
                        FUN_1010cce40(piVar17,pbVar10,pbVar18);
                        piVar17 = piVar17 + 10;
                        puVar13 = (uint3 *)((long)puVar13 + 3);
                        uVar16 = uVar16 - 1;
                        pbVar10 = pbVar18;
                      } while (uVar16 != 0);
                    }
                    FUN_1010cce40(param_1 + (long)(int)uVar9 * 10 + 0x6c,pbVar18,pbVar15);
                    if (pbVar18 < pbVar15) {
                      FUN_1010bbeac(param_1);
                      if ((char)param_1[0xe] != '\0') {
                        iVar7 = 1;
                        FUN_1010ccef0(piVar1,1);
                        FUN_1010bcbb8(piVar1,param_1);
                        goto LAB_1010bd16c;
                      }
                      if (*param_1 != 0) {
                        return 0;
                      }
                      *param_1 = 4;
                      pcVar12 = "Not a key frame.";
                      goto LAB_1010bd168;
                    }
                    iVar7 = 5;
                  }
                  if (*param_1 != 0) {
                    return 0;
                  }
                  *param_1 = iVar7;
                  pcVar12 = "cannot parse partitions";
                }
                else {
                  if (*param_1 != 0) {
                    return 0;
                  }
                  *param_1 = 3;
                  pcVar12 = "cannot parse filter header";
                }
              }
              else {
                if (*param_1 != 0) {
                  return 0;
                }
                *param_1 = 3;
                pcVar12 = "cannot parse segment header";
              }
            }
          }
          else if (uVar16 < 7) {
            *param_1 = 7;
            pcVar12 = "cannot parse picture header";
          }
          else {
            if (((*pbVar15 == 0x9d) && ((byte)puVar13[1] == 1)) &&
               (*(byte *)((long)puVar13 + 5) == 0x2a)) {
              uVar14 = (uint)*(byte *)((long)puVar13 + 6) |
                       (*(byte *)((long)puVar13 + 7) & 0x3f) << 8;
              *(short *)(param_1 + 0x10) = (short)uVar14;
              *(byte *)(param_1 + 0x11) = *(byte *)((long)puVar13 + 7) >> 6;
              uVar9 = (uint)(byte)puVar13[2] | (*(byte *)((long)puVar13 + 9) & 0x3f) << 8;
              *(short *)((long)param_1 + 0x42) = (short)uVar9;
              *(byte *)((long)param_1 + 0x45) = *(byte *)((long)puVar13 + 9) >> 6;
              pbVar15 = (byte *)((long)puVar13 + 10);
              uVar16 = uVar11 - 10;
              param_1[100] = uVar14 + 0xf >> 4;
              param_1[0x65] = uVar9 + 0xf >> 4;
              *param_2 = uVar14;
              param_2[1] = uVar9;
              param_2[0x1d] = 0;
              param_2[0x1e] = 0;
              param_2[0x1f] = uVar14;
              param_2[0x20] = 0;
              param_2[0x21] = uVar9;
              param_2[0x22] = 0;
              param_2[3] = uVar14;
              param_2[4] = uVar9;
              FUN_1010bc0d0(param_1 + 0x117);
              param_1[0x20] = 1;
              param_1[0x21] = 0;
              param_1[0x1e] = 0;
              param_1[0x1f] = 0;
              param_1[0x22] = 0;
              uVar14 = param_1[0xf];
              goto LAB_1010bd12c;
            }
            *param_1 = 3;
            pcVar12 = "Bad code word";
          }
        }
      }
      else {
        *param_1 = 3;
        pcVar12 = "Incorrect keyframe parameters.";
      }
    }
  }
LAB_1010bd168:
  iVar7 = 0;
  *(char **)(param_1 + 2) = pcVar12;
LAB_1010bd16c:
  param_1[1] = iVar7;
  return iVar7;
}




void FUN_1010bd520(long param_1,long param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  short *psVar25;
  short *psVar26;
  uint uVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  uint uVar31;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  lVar28 = *(long *)(param_1 + 0x8a0);
  lVar24 = (long)*(int *)(param_1 + 0x8e8);
  pbVar1 = (byte *)(lVar28 + lVar24 * 2);
  lVar21 = *(long *)(param_1 + 0x8f0);
  if ((*(int *)(param_1 + 0x880) == 0) || (*(char *)(lVar21 + lVar24 * 800 + 0x31d) == '\0')) {
    psVar25 = (short *)(lVar21 + lVar24 * 800);
    uVar29 = (ulong)*(byte *)(psVar25 + 399);
    _bzero(psVar25,0x300);
    if ((char)psVar25[0x180] == '\0') {
      uStack_88 = 0;
      local_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      lVar14 = lVar28 + lVar24 * 2;
      iVar9 = FUN_1010bdb98(param_2,param_1 + 0x567,
                            (uint)*(byte *)(lVar28 + -1) + (uint)*(byte *)(lVar14 + 1),
                            param_1 + uVar29 * 0x20 + 0x3e4,0,&local_90);
      *(bool *)(lVar28 + -1) = 0 < iVar9;
      *(bool *)(lVar14 + 1) = 0 < iVar9;
      if (iVar9 < 2) {
        uVar15 = 0;
        do {
          psVar25[uVar15] = (short)((int)(short)local_90 + 3U >> 3);
          bVar7 = uVar15 < 0xf0;
          uVar15 = uVar15 + 0x10;
        } while (bVar7);
      }
      else {
        (*DAT_101dc1d60)(&local_90,psVar25);
      }
      lVar14 = 0;
      iVar9 = 1;
    }
    else {
      iVar9 = 0;
      lVar14 = 3;
    }
    uVar19 = 0;
    iVar20 = 0;
    uVar23 = *pbVar1 & 0xf;
    uVar11 = *(byte *)(lVar28 + -2) & 0xf;
    do {
      lVar30 = 0;
      uVar31 = 0;
      uVar12 = uVar11 & 1;
      do {
        iVar8 = FUN_1010bdb98(param_2,param_1 + lVar14 * 0x108 + 0x45f,uVar12 + (uVar23 & 1),
                              param_1 + uVar29 * 0x20 + 0x3dc,iVar9,
                              (short *)((long)psVar25 + lVar30));
        uVar12 = (uint)(iVar9 < iVar8);
        uVar23 = uVar23 >> 1 | (uint)(iVar9 < iVar8) << 7;
        uVar16 = (uint)(*(short *)((long)psVar25 + lVar30) != 0);
        if (1 < iVar8) {
          uVar16 = 2;
        }
        uVar27 = 3;
        if (iVar8 < 4) {
          uVar27 = uVar16;
        }
        uVar31 = uVar27 | uVar31 << 2;
        lVar30 = lVar30 + 0x20;
      } while ((int)lVar30 != 0x80);
      uVar23 = uVar23 >> 4;
      uVar11 = uVar11 >> 1 | (uint)(iVar9 < iVar8) << 7;
      uVar19 = uVar31 | uVar19 << 8;
      iVar20 = iVar20 + 1;
      psVar25 = (short *)((long)psVar25 + lVar30);
    } while (iVar20 != 4);
    uVar12 = 0;
    uVar31 = 0;
    uVar11 = uVar11 >> 4;
    bVar7 = true;
    do {
      bVar6 = bVar7;
      uVar16 = 0;
      uVar27 = (uint)(*pbVar1 >> (ulong)(uVar31 | 4));
      uVar22 = (uint)(*(byte *)(lVar28 + -2) >> (ulong)(uVar31 | 4));
      bVar7 = true;
      do {
        bVar5 = bVar7;
        uVar17 = uVar22 & 1;
        psVar26 = psVar25;
        bVar7 = true;
        do {
          bVar18 = bVar7;
          iVar9 = FUN_1010bdb98(param_2,param_1 + 0x66f,(uVar27 & 1) + uVar17,
                                param_1 + uVar29 * 0x20 + 0x3ec,0,psVar26);
          uVar17 = (uint)(0 < iVar9);
          uVar27 = uVar27 >> 1 | uVar17 << 3;
          psVar25 = psVar26 + 0x10;
          uVar13 = (uint)(*psVar26 != 0);
          if (1 < iVar9) {
            uVar13 = 2;
          }
          uVar3 = 3;
          if (iVar9 < 4) {
            uVar3 = uVar13;
          }
          uVar16 = uVar3 | uVar16 << 2;
          psVar26 = psVar25;
          bVar7 = false;
        } while (bVar18);
        uVar27 = uVar27 >> 2;
        uVar13 = uVar22 >> 1;
        uVar17 = (uint)(0 < iVar9) << 5;
        uVar22 = uVar13 | uVar17;
        bVar7 = false;
      } while (bVar5);
      uVar12 = uVar16 << (ulong)(uVar31 << 2) | uVar12;
      uVar23 = (uVar27 << 4) << (ulong)uVar31 | uVar23;
      uVar11 = (uVar13 & 0x70 | uVar17) << (ulong)uVar31 | uVar11;
      uVar31 = 2;
      bVar7 = false;
    } while (bVar6);
    *pbVar1 = (byte)uVar23;
    *(char *)(lVar28 + -2) = (char)uVar11;
    lVar28 = lVar21 + lVar24 * 800;
    *(uint *)(lVar28 + 0x314) = uVar19;
    *(uint *)(lVar28 + 0x318) = uVar12;
    if ((uVar12 & 0xaaaa) == 0) {
      uVar10 = (undefined1)*(undefined4 *)(param_1 + uVar29 * 0x20 + 0x3f8);
    }
    else {
      uVar10 = 0;
    }
    *(undefined1 *)(lVar21 + lVar24 * 800 + 0x31c) = uVar10;
    bVar7 = uVar12 != 0 || uVar19 != 0;
  }
  else {
    *pbVar1 = 0;
    *(undefined1 *)(lVar28 + -2) = 0;
    if (*(char *)(lVar21 + lVar24 * 800 + 0x300) == '\0') {
      *(undefined1 *)(lVar28 + lVar24 * 2 + 1) = 0;
      *(undefined1 *)(lVar28 + -1) = 0;
    }
    bVar7 = false;
    lVar28 = lVar21 + lVar24 * 800;
    *(undefined1 *)(lVar28 + 0x31c) = 0;
    *(undefined8 *)(lVar28 + 0x314) = 0;
  }
  if (0 < *(int *)(param_1 + 0x8f8)) {
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x8a8) + (long)*(int *)(param_1 + 0x8e8) * 4);
    lVar21 = lVar21 + lVar24 * 800;
    uVar4 = *(undefined4 *)
             (param_1 + (ulong)*(byte *)(lVar21 + 0x31e) * 8 + (ulong)*(byte *)(lVar21 + 0x300) * 4
             + 0x8fc);
    *puVar2 = uVar4;
    *(byte *)((long)puVar2 + 2) = (byte)((uint)uVar4 >> 0x10) | bVar7;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(int *)(param_2 + 0x20) == 0);
}




void FUN_1010bd990(long param_1)

{
  *(undefined2 *)(*(long *)(param_1 + 0x8a0) + -2) = 0;
  *(undefined4 *)(param_1 + 0x890) = 0;
  *(undefined4 *)(param_1 + 0x8e8) = 0;
  return;
}




undefined8 FUN_1010bd9a4(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  uint uVar7;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    if (*param_1 != 0) {
      return 0;
    }
    param_1[0] = 2;
    param_1[1] = 0;
    *(char **)(param_1 + 2) = "NULL VP8Io parameter in VP8Decode().";
    return 0;
  }
  if ((param_1[1] == 0) && (uVar4 = FUN_1010bcf70(param_1,param_2), (int)uVar4 == 0)) {
    return uVar4;
  }
  iVar1 = FUN_1010ba52c(param_1,param_2);
  if (iVar1 != 0) goto LAB_1010bd9f0;
  iVar1 = FUN_1010ba7d4(param_1,param_2);
  if (iVar1 == 0) {
LAB_1010bdb24:
    uVar7 = 0;
  }
  else {
    param_1[0x23b] = 0;
    if (0 < param_1[0x69]) {
      uVar7 = 0;
      do {
        iVar1 = param_1[0x6a];
        iVar2 = FUN_1010bc0e4(param_1 + 4,param_1);
        if (iVar2 == 0) {
          if (*param_1 != 0) goto LAB_1010bdb24;
          uVar4 = 7;
          pcVar6 = "Premature end-of-partition0 encountered.";
LAB_1010bdb58:
          uVar7 = 0;
          *(undefined8 *)param_1 = uVar4;
          *(char **)(param_1 + 2) = pcVar6;
          goto LAB_1010bdb28;
        }
        if (param_1[0x23a] < param_1[100]) {
          do {
            iVar2 = FUN_1010bd520(param_1,param_1 + (long)(int)(iVar1 - 1U & uVar7) * 10 + 0x6c);
            if (iVar2 == 0) {
              if (*param_1 != 0) goto LAB_1010bdb24;
              uVar4 = 7;
              pcVar6 = "Premature end-of-file encountered.";
              goto LAB_1010bdb58;
            }
            iVar2 = param_1[0x23a];
            param_1[0x23a] = iVar2 + 1;
          } while (iVar2 + 1 < param_1[100]);
        }
        *(undefined2 *)(*(long *)(param_1 + 0x228) + -2) = 0;
        param_1[0x224] = 0;
        param_1[0x23a] = 0;
        iVar1 = FUN_1010b97d4(param_1,param_2);
        if (iVar1 == 0) {
          if (*param_1 == 0) {
            uVar4 = 6;
            pcVar6 = "Output aborted.";
            goto LAB_1010bdb58;
          }
          goto LAB_1010bdb24;
        }
        uVar7 = param_1[0x23b] + 1;
        param_1[0x23b] = uVar7;
      } while ((int)uVar7 < param_1[0x69]);
    }
    if (0 < param_1[0x30]) {
      lVar5 = FUN_1010ce65c();
      iVar1 = (**(code **)(lVar5 + 0x10))(param_1 + 0x24);
      if (iVar1 == 0) goto LAB_1010bdb24;
    }
    uVar7 = 1;
  }
LAB_1010bdb28:
  uVar3 = FUN_1010ba758(param_1,param_2);
  if ((uVar3 & uVar7) != 0) {
    param_1[1] = 0;
    return 1;
  }
LAB_1010bd9f0:
  FUN_1010bce54(param_1);
  return 0;
}




ulong FUN_1010bdb98(uint *param_1,long param_2,int param_3,long param_4,ulong param_5,long param_6)

{
  ulong uVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  short sVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ushort uVar17;
  uint uVar18;
  int *piVar19;
  long lVar20;
  
  if ((int)param_5 < 0x10) {
    pbVar12 = (byte *)(param_2 + (param_5 & 0xffffffff) * 0x20 + (param_5 & 0xffffffff) +
                      (long)param_3 * 0xb);
    uVar13 = param_1[1];
    uVar9 = param_1[2];
    do {
      bVar4 = *pbVar12;
      if ((int)uVar9 < 0) {
        puVar3 = *(uint **)(param_1 + 4);
        if (*(uint **)(param_1 + 6) < puVar3 + 1) {
          FUN_1010cce8c(param_1);
          uVar9 = param_1[2];
        }
        else {
          uVar10 = *puVar3;
          *(long *)(param_1 + 4) = (long)puVar3 + 3;
          uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
          *param_1 = (uint)(CONCAT44(*param_1,uVar10 >> 0x10 | uVar10 << 0x10) >> 8);
          uVar9 = uVar9 + 0x18;
          param_1[2] = uVar9;
        }
      }
      uVar18 = uVar13 * bVar4 >> 8;
      uVar10 = *param_1;
      uVar14 = uVar10 >> (ulong)(uVar9 & 0x1f);
      uVar16 = uVar18;
      if (uVar13 * bVar4 >> 8 < uVar14) {
        uVar10 = uVar10 - (uVar18 + 1 << (ulong)(uVar9 & 0x1f));
        *param_1 = uVar10;
        uVar16 = uVar13 - (uVar18 + 1);
      }
      if (uVar16 < 0x7f) {
        uVar1 = (ulong)uVar16;
        uVar16 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar16 * 4);
        uVar9 = uVar9 - (byte)(&DAT_1013cbe28)[uVar1];
        param_1[2] = uVar9;
      }
      param_1[1] = uVar16;
      if (uVar14 <= uVar18) {
        return param_5;
      }
      lVar20 = param_5 << 0x20;
      piVar19 = (int *)(&DAT_1013caac0 + (long)(int)param_5 * 4);
      while( true ) {
        piVar19 = piVar19 + 1;
        bVar4 = pbVar12[1];
        if ((int)uVar9 < 0) {
          puVar3 = *(uint **)(param_1 + 4);
          if (*(uint **)(param_1 + 6) < puVar3 + 1) {
            FUN_1010cce8c(param_1);
            uVar9 = param_1[2];
            uVar10 = *param_1;
          }
          else {
            uVar13 = *puVar3;
            *(long *)(param_1 + 4) = (long)puVar3 + 3;
            uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
            uVar10 = (uint)(CONCAT44(uVar10,uVar13 >> 0x10 | uVar13 << 0x10) >> 8);
            *param_1 = uVar10;
            uVar9 = uVar9 + 0x18;
            param_1[2] = uVar9;
          }
        }
        uVar14 = uVar16 * bVar4 >> 8;
        uVar13 = uVar10 >> (ulong)(uVar9 & 0x1f);
        uVar18 = uVar14;
        if (uVar16 * bVar4 >> 8 < uVar13) {
          uVar10 = uVar10 - (uVar14 + 1 << (ulong)(uVar9 & 0x1f));
          *param_1 = uVar10;
          uVar18 = uVar16 - (uVar14 + 1);
        }
        uVar16 = uVar18;
        if (uVar16 < 0x7f) {
          uVar1 = (ulong)uVar16;
          uVar16 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar16 * 4);
          uVar9 = uVar9 - (byte)(&DAT_1013cbe28)[uVar1];
          param_1[2] = uVar9;
        }
        param_1[1] = uVar16;
        iVar15 = (int)param_5;
        if (uVar14 < uVar13) break;
        pbVar12 = (byte *)(param_2 + (long)*piVar19 * 0x21);
        lVar20 = lVar20 + 0x100000000;
        param_5 = (ulong)(iVar15 + 1U);
        if (iVar15 + 1U == 0x10) {
          return 0x10;
        }
      }
      bVar4 = pbVar12[2];
      if ((int)uVar9 < 0) {
        puVar3 = *(uint **)(param_1 + 4);
        if (*(uint **)(param_1 + 6) < puVar3 + 1) {
          FUN_1010cce8c(param_1);
          uVar9 = param_1[2];
          uVar10 = *param_1;
        }
        else {
          uVar13 = *puVar3;
          *(long *)(param_1 + 4) = (long)puVar3 + 3;
          uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
          uVar10 = (uint)(CONCAT44(uVar10,uVar13 >> 0x10 | uVar13 << 0x10) >> 8);
          *param_1 = uVar10;
          uVar9 = uVar9 + 0x18;
          param_1[2] = uVar9;
        }
      }
      uVar18 = uVar16 * bVar4 >> 8;
      uVar13 = uVar10 >> (ulong)(uVar9 & 0x1f);
      uVar14 = uVar18;
      if (uVar16 * bVar4 >> 8 < uVar13) {
        uVar10 = uVar10 - (uVar18 + 1 << (ulong)(uVar9 & 0x1f));
        *param_1 = uVar10;
        uVar14 = uVar16 - (uVar18 + 1);
      }
      if (uVar14 < 0x7f) {
        uVar1 = (ulong)uVar14;
        uVar14 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar14 * 4);
        uVar9 = uVar9 - (byte)(&DAT_1013cbe28)[uVar1];
        param_1[2] = uVar9;
      }
      iVar5 = *(int *)(&DAT_1013caac0 + (long)(int)(iVar15 + 1U) * 4);
      param_1[1] = uVar14;
      if (uVar18 < uVar13) {
        bVar4 = pbVar12[3];
        if ((int)uVar9 < 0) {
          puVar3 = *(uint **)(param_1 + 4);
          if (*(uint **)(param_1 + 6) < puVar3 + 1) {
            FUN_1010cce8c(param_1);
            uVar9 = param_1[2];
            uVar10 = *param_1;
          }
          else {
            uVar13 = *puVar3;
            *(long *)(param_1 + 4) = (long)puVar3 + 3;
            uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
            uVar10 = (uint)(CONCAT44(uVar10,uVar13 >> 0x10 | uVar13 << 0x10) >> 8);
            *param_1 = uVar10;
            uVar9 = uVar9 + 0x18;
            param_1[2] = uVar9;
          }
        }
        uVar18 = uVar14 * bVar4 >> 8;
        uVar16 = uVar10 >> (ulong)(uVar9 & 0x1f);
        uVar13 = uVar18;
        if (uVar14 * bVar4 >> 8 < uVar16) {
          uVar10 = uVar10 - (uVar18 + 1 << (ulong)(uVar9 & 0x1f));
          *param_1 = uVar10;
          uVar13 = uVar14 - (uVar18 + 1);
        }
        if (uVar13 < 0x7f) {
          uVar1 = (ulong)uVar13;
          uVar13 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar13 * 4);
          uVar9 = uVar9 - (byte)(&DAT_1013cbe28)[uVar1];
          param_1[2] = uVar9;
        }
        param_1[1] = uVar13;
        if (uVar18 < uVar16) {
          bVar4 = pbVar12[6];
          if ((int)uVar9 < 0) {
            puVar3 = *(uint **)(param_1 + 4);
            if (*(uint **)(param_1 + 6) < puVar3 + 1) {
              FUN_1010cce8c(param_1);
              uVar9 = param_1[2];
              uVar10 = *param_1;
            }
            else {
              uVar16 = *puVar3;
              *(long *)(param_1 + 4) = (long)puVar3 + 3;
              uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
              uVar10 = (uint)(CONCAT44(uVar10,uVar16 >> 0x10 | uVar16 << 0x10) >> 8);
              *param_1 = uVar10;
              uVar9 = uVar9 + 0x18;
              param_1[2] = uVar9;
            }
          }
          uVar18 = uVar13 * bVar4 >> 8;
          uVar14 = uVar10 >> (ulong)(uVar9 & 0x1f);
          uVar16 = uVar18;
          if (uVar13 * bVar4 >> 8 < uVar14) {
            uVar10 = uVar10 - (uVar18 + 1 << (ulong)(uVar9 & 0x1f));
            *param_1 = uVar10;
            uVar16 = uVar13 - (uVar18 + 1);
          }
          if (uVar16 < 0x7f) {
            uVar1 = (ulong)uVar16;
            uVar16 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar16 * 4);
            uVar9 = uVar9 - (byte)(&DAT_1013cbe28)[uVar1];
            param_1[2] = uVar9;
          }
          param_1[1] = uVar16;
          if (uVar18 < uVar14) {
            bVar4 = pbVar12[8];
            if ((int)uVar9 < 0) {
              puVar3 = *(uint **)(param_1 + 4);
              if (*(uint **)(param_1 + 6) < puVar3 + 1) {
                FUN_1010cce8c(param_1);
                uVar9 = param_1[2];
                uVar10 = *param_1;
              }
              else {
                uVar13 = *puVar3;
                *(long *)(param_1 + 4) = (long)puVar3 + 3;
                uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
                uVar10 = (uint)(CONCAT44(uVar10,uVar13 >> 0x10 | uVar13 << 0x10) >> 8);
                *param_1 = uVar10;
                uVar9 = uVar9 + 0x18;
                param_1[2] = uVar9;
              }
            }
            uVar18 = uVar16 * bVar4 >> 8;
            uVar6 = uVar10 >> (ulong)(uVar9 & 0x1f);
            uVar13 = uVar16 * bVar4 >> 8;
            if (uVar13 < uVar6) {
              iVar2 = uVar18 + 1;
              uVar18 = uVar16 - iVar2;
              uVar10 = uVar10 - (iVar2 << (ulong)(uVar9 & 0x1f));
              *param_1 = uVar10;
            }
            if (uVar18 < 0x7f) {
              uVar1 = (ulong)uVar18;
              uVar18 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar18 * 4);
              uVar9 = uVar9 - (byte)(&DAT_1013cbe28)[uVar1];
              param_1[2] = uVar9;
            }
            param_1[1] = uVar18;
            bVar4 = pbVar12[(ulong)(uVar13 < uVar6) + 9];
            if ((int)uVar9 < 0) {
              puVar3 = *(uint **)(param_1 + 4);
              if (*(uint **)(param_1 + 6) < puVar3 + 1) {
                FUN_1010cce8c(param_1);
                uVar9 = param_1[2];
                uVar10 = *param_1;
              }
              else {
                uVar16 = *puVar3;
                *(long *)(param_1 + 4) = (long)puVar3 + 3;
                uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
                uVar10 = (uint)(CONCAT44(uVar10,uVar16 >> 0x10 | uVar16 << 0x10) >> 8);
                *param_1 = uVar10;
                uVar9 = uVar9 + 0x18;
                param_1[2] = uVar9;
              }
            }
            uVar14 = uVar18 * bVar4 >> 8;
            uVar7 = uVar10 >> (ulong)(uVar9 & 0x1f);
            uVar16 = uVar18 * bVar4 >> 8;
            if (uVar16 < uVar7) {
              iVar2 = uVar14 + 1;
              uVar14 = uVar18 - iVar2;
              uVar10 = uVar10 - (iVar2 << (ulong)(uVar9 & 0x1f));
              *param_1 = uVar10;
            }
            if (uVar14 < 0x7f) {
              uVar1 = (ulong)uVar14;
              uVar14 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar14 * 4);
              uVar9 = uVar9 - (byte)(&DAT_1013cbe28)[uVar1];
              param_1[2] = uVar9;
            }
            param_1[1] = uVar14;
            uVar13 = (uint)(uVar16 < uVar7) | (uint)(uVar13 < uVar6) << 1;
            pbVar12 = (&PTR_DAT_10182e930)[uVar13];
            uVar16 = (uint)*pbVar12;
            if (*pbVar12 == 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = 0;
              do {
                pbVar12 = pbVar12 + 1;
                if ((int)uVar9 < 0) {
                  puVar3 = *(uint **)(param_1 + 4);
                  if (*(uint **)(param_1 + 6) < puVar3 + 1) {
                    FUN_1010cce8c(param_1);
                    uVar9 = param_1[2];
                    uVar10 = *param_1;
                  }
                  else {
                    uVar18 = *puVar3;
                    *(long *)(param_1 + 4) = (long)puVar3 + 3;
                    uVar18 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
                    uVar10 = (uint)(CONCAT44(uVar10,uVar18 >> 0x10 | uVar18 << 0x10) >> 8);
                    *param_1 = uVar10;
                    uVar9 = uVar9 + 0x18;
                    param_1[2] = uVar9;
                  }
                }
                uVar6 = uVar14 * uVar16 >> 8;
                uVar18 = uVar10 >> (ulong)(uVar9 & 0x1f);
                uVar16 = uVar14 * uVar16 >> 8;
                if (uVar16 < uVar18) {
                  iVar2 = uVar6 + 1;
                  uVar10 = uVar10 - (iVar2 << (ulong)(uVar9 & 0x1f));
                  *param_1 = uVar10;
                  uVar6 = uVar14 - iVar2;
                }
                uVar14 = uVar6;
                if (uVar14 < 0x7f) {
                  uVar1 = (ulong)uVar14;
                  uVar14 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar14 * 4);
                  uVar9 = uVar9 - (byte)(&DAT_1013cbe28)[uVar1];
                  param_1[2] = uVar9;
                }
                param_1[1] = uVar14;
                uVar17 = (ushort)(uVar16 < uVar18) | uVar17 << 1;
                uVar16 = (uint)*pbVar12;
              } while (uVar16 != 0);
            }
            uVar17 = uVar17 + (short)(8 << (ulong)uVar13) + 3;
          }
          else {
            bVar4 = pbVar12[7];
            if ((int)uVar9 < 0) {
              puVar3 = *(uint **)(param_1 + 4);
              if (*(uint **)(param_1 + 6) < puVar3 + 1) {
                FUN_1010cce8c(param_1);
                uVar9 = param_1[2];
                uVar10 = *param_1;
              }
              else {
                uVar13 = *puVar3;
                *(long *)(param_1 + 4) = (long)puVar3 + 3;
                uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
                uVar10 = (uint)(CONCAT44(uVar10,uVar13 >> 0x10 | uVar13 << 0x10) >> 8);
                *param_1 = uVar10;
                uVar9 = uVar9 + 0x18;
                param_1[2] = uVar9;
              }
            }
            uVar18 = uVar16 * bVar4 >> 8;
            uVar14 = uVar10 >> (ulong)(uVar9 & 0x1f);
            uVar13 = uVar18;
            if (uVar16 * bVar4 >> 8 < uVar14) {
              uVar10 = uVar10 - (uVar18 + 1 << (ulong)(uVar9 & 0x1f));
              *param_1 = uVar10;
              uVar13 = uVar16 - (uVar18 + 1);
            }
            if (uVar13 < 0x7f) {
              uVar1 = (ulong)uVar13;
              uVar13 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar13 * 4);
              uVar9 = uVar9 - (byte)(&DAT_1013cbe28)[uVar1];
              param_1[2] = uVar9;
            }
            param_1[1] = uVar13;
            if (uVar14 <= uVar18) {
              if ((int)uVar9 < 0) {
                puVar3 = *(uint **)(param_1 + 4);
                if (*(uint **)(param_1 + 6) < puVar3 + 1) {
                  FUN_1010cce8c(param_1);
                  uVar9 = param_1[2];
                  uVar10 = *param_1;
                }
                else {
                  uVar16 = *puVar3;
                  *(long *)(param_1 + 4) = (long)puVar3 + 3;
                  uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
                  uVar10 = (uint)(CONCAT44(uVar10,uVar16 >> 0x10 | uVar16 << 0x10) >> 8);
                  *param_1 = uVar10;
                  uVar9 = uVar9 + 0x18;
                  param_1[2] = uVar9;
                }
              }
              uVar14 = uVar13 * 0x9f >> 8;
              if (uVar13 * 0x9f >> 8 < uVar10 >> (ulong)(uVar9 & 0x1f)) {
                iVar2 = uVar14 + 1;
                uVar10 = uVar10 - (iVar2 << (ulong)(uVar9 & 0x1f));
                *param_1 = uVar10;
                uVar17 = 6;
                uVar14 = uVar13 - iVar2;
              }
              else {
                uVar17 = 5;
              }
              goto LAB_1010be518;
            }
            if ((int)uVar9 < 0) {
              puVar3 = *(uint **)(param_1 + 4);
              if (*(uint **)(param_1 + 6) < puVar3 + 1) {
                FUN_1010cce8c(param_1);
                uVar9 = param_1[2];
                uVar10 = *param_1;
              }
              else {
                uVar16 = *puVar3;
                *(long *)(param_1 + 4) = (long)puVar3 + 3;
                uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
                uVar10 = (uint)(CONCAT44(uVar10,uVar16 >> 0x10 | uVar16 << 0x10) >> 8);
                *param_1 = uVar10;
                uVar9 = uVar9 + 0x18;
                param_1[2] = uVar9;
              }
            }
            uVar16 = uVar13 * 0xa5 >> 8;
            if (uVar13 * 0xa5 >> 8 < uVar10 >> (ulong)(uVar9 & 0x1f)) {
              iVar2 = uVar16 + 1;
              uVar16 = uVar13 - iVar2;
              uVar10 = uVar10 - (iVar2 << (ulong)(uVar9 & 0x1f));
              *param_1 = uVar10;
              sVar11 = 9;
            }
            else {
              sVar11 = 7;
            }
            if (uVar16 < 0x7f) {
              uVar1 = (ulong)uVar16;
              uVar16 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar16 * 4);
              uVar9 = uVar9 - (byte)(&DAT_1013cbe28)[uVar1];
              param_1[2] = uVar9;
            }
            param_1[1] = uVar16;
            if ((int)uVar9 < 0) {
              puVar3 = *(uint **)(param_1 + 4);
              if (*(uint **)(param_1 + 6) < puVar3 + 1) {
                FUN_1010cce8c(param_1);
                uVar9 = param_1[2];
                uVar10 = *param_1;
              }
              else {
                uVar13 = *puVar3;
                *(long *)(param_1 + 4) = (long)puVar3 + 3;
                uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
                uVar10 = (uint)(CONCAT44(uVar10,uVar13 >> 0x10 | uVar13 << 0x10) >> 8);
                *param_1 = uVar10;
                uVar9 = uVar9 + 0x18;
                param_1[2] = uVar9;
              }
            }
            uVar14 = uVar16 * 0x91 >> 8;
            uVar18 = uVar10 >> (ulong)(uVar9 & 0x1f);
            uVar13 = uVar16 * 0x91 >> 8;
            if (uVar13 < uVar18) {
              iVar2 = uVar14 + 1;
              uVar14 = uVar16 - iVar2;
              uVar10 = uVar10 - (iVar2 << (ulong)(uVar9 & 0x1f));
              *param_1 = uVar10;
            }
            if (uVar14 < 0x7f) {
              uVar1 = (ulong)uVar14;
              uVar14 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar14 * 4);
              uVar9 = uVar9 - (byte)(&DAT_1013cbe28)[uVar1];
              param_1[2] = uVar9;
            }
            param_1[1] = uVar14;
            uVar17 = (ushort)(uVar13 < uVar18) + sVar11;
          }
        }
        else {
          bVar4 = pbVar12[4];
          if ((int)uVar9 < 0) {
            puVar3 = *(uint **)(param_1 + 4);
            if (*(uint **)(param_1 + 6) < puVar3 + 1) {
              FUN_1010cce8c(param_1);
              uVar9 = param_1[2];
              uVar10 = *param_1;
            }
            else {
              uVar16 = *puVar3;
              *(long *)(param_1 + 4) = (long)puVar3 + 3;
              uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
              uVar10 = (uint)(CONCAT44(uVar10,uVar16 >> 0x10 | uVar16 << 0x10) >> 8);
              *param_1 = uVar10;
              uVar9 = uVar9 + 0x18;
              param_1[2] = uVar9;
            }
          }
          uVar18 = uVar13 * bVar4 >> 8;
          uVar16 = uVar10 >> (ulong)(uVar9 & 0x1f);
          uVar14 = uVar18;
          if (uVar13 * bVar4 >> 8 < uVar16) {
            uVar10 = uVar10 - (uVar18 + 1 << (ulong)(uVar9 & 0x1f));
            *param_1 = uVar10;
            uVar14 = uVar13 - (uVar18 + 1);
          }
          if (uVar14 < 0x7f) {
            uVar1 = (ulong)uVar14;
            uVar14 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar14 * 4);
            uVar9 = uVar9 - (byte)(&DAT_1013cbe28)[uVar1];
            param_1[2] = uVar9;
          }
          param_1[1] = uVar14;
          if (uVar18 < uVar16) {
            bVar4 = pbVar12[5];
            if ((int)uVar9 < 0) {
              puVar3 = *(uint **)(param_1 + 4);
              if (*(uint **)(param_1 + 6) < puVar3 + 1) {
                FUN_1010cce8c(param_1);
                uVar9 = param_1[2];
                uVar10 = *param_1;
              }
              else {
                uVar13 = *puVar3;
                *(long *)(param_1 + 4) = (long)puVar3 + 3;
                uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
                uVar10 = (uint)(CONCAT44(uVar10,uVar13 >> 0x10 | uVar13 << 0x10) >> 8);
                *param_1 = uVar10;
                uVar9 = uVar9 + 0x18;
                param_1[2] = uVar9;
              }
            }
            uVar13 = uVar14 * bVar4 >> 8;
            if (uVar14 * bVar4 >> 8 < uVar10 >> (ulong)(uVar9 & 0x1f)) {
              iVar2 = uVar13 + 1;
              uVar10 = uVar10 - (iVar2 << (ulong)(uVar9 & 0x1f));
              *param_1 = uVar10;
              uVar17 = 4;
              uVar14 = uVar14 - iVar2;
            }
            else {
              uVar17 = 3;
              uVar14 = uVar13;
            }
LAB_1010be518:
            if (uVar14 < 0x7f) {
              uVar1 = (ulong)uVar14;
              uVar14 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar14 * 4);
              uVar9 = uVar9 - (byte)(&DAT_1013cbe28)[uVar1];
              param_1[2] = uVar9;
            }
            param_1[1] = uVar14;
          }
          else {
            uVar17 = 2;
          }
        }
        pbVar12 = (byte *)(param_2 + (long)iVar5 * 0x21 + 0x16);
      }
      else {
        pbVar12 = (byte *)(param_2 + (long)iVar5 * 0x21 + 0xb);
        uVar17 = 1;
      }
      if ((int)uVar9 < 0) {
        puVar3 = *(uint **)(param_1 + 4);
        if (*(uint **)(param_1 + 6) < puVar3 + 1) {
          FUN_1010cce8c(param_1);
          uVar14 = param_1[1];
          uVar9 = param_1[2];
          uVar10 = *param_1;
        }
        else {
          uVar13 = *puVar3;
          *(long *)(param_1 + 4) = (long)puVar3 + 3;
          uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
          uVar10 = (uint)(CONCAT44(uVar10,uVar13 >> 0x10 | uVar13 << 0x10) >> 8);
          uVar9 = uVar9 + 0x18;
        }
      }
      param_5 = (ulong)(iVar15 + 1U);
      iVar5 = (uVar14 >> 1) - (uVar10 >> (ulong)(uVar9 & 0x1f));
      uVar16 = iVar5 >> 0x1f;
      uVar18 = uVar9 & 0x1f;
      uVar9 = uVar9 - 1;
      uVar13 = uVar14 + uVar16 | 1;
      param_1[1] = uVar13;
      param_1[2] = uVar9;
      *param_1 = uVar10 - (((uVar14 >> 1) + 1 & uVar16) << (ulong)uVar18);
      uVar8 = (ushort)(iVar5 >> 0x1f);
      *(ushort *)(param_6 + (ulong)(byte)(&DAT_1013cab04)[lVar20 >> 0x20] * 2) =
           ((uVar17 ^ uVar8) - uVar8) * (short)*(undefined4 *)(param_4 + (ulong)(0 < iVar15) * 4);
    } while (iVar15 < 0xf);
  }
  return 0x10;
}




bool FUN_1010be6a0(char *param_1,ulong param_2)

{
  if ((4 < param_2) && (*param_1 == '/')) {
    return (byte)param_1[4] < 0x20;
  }
  return false;
}




undefined8
FUN_1010be6cc(char *param_1,ulong param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_70 [52];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar1 = 0;
  if ((param_1 != (char *)0x0) && (4 < param_2)) {
    if ((*param_1 == '/') && ((byte)param_1[4] < 0x20)) {
      FUN_1010cd034(auStack_70);
      uVar1 = FUN_1010be780(auStack_70,&local_34,&local_38,&local_3c);
      if ((int)uVar1 != 0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = local_34;
        }
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = local_38;
        }
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = local_3c;
        }
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}




bool FUN_1010be780(undefined8 param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_1010cd140(param_1,8);
  if (iVar2 == 0x2f) {
    iVar2 = FUN_1010cd140(param_1,0xe);
    *param_2 = iVar2 + 1;
    iVar2 = FUN_1010cd140(param_1,0xe);
    *param_3 = iVar2 + 1;
    uVar3 = FUN_1010cd140(param_1,1);
    *param_4 = uVar3;
    iVar2 = FUN_1010cd140(param_1,3);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}




undefined8 * FUN_1010be814(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1010ce998(1,0x138);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x200000000;
    *(undefined4 *)(puVar1 + 1) = 2;
    FUN_1010c5998();
  }
  return puVar1;
}




void FUN_1010be85c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (param_1 != 0) {
    FUN_1010be8e0(param_1 + 0x78);
    _free(*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (0 < *(int *)(param_1 + 0xb8)) {
      lVar1 = 0;
      puVar2 = (undefined8 *)(param_1 + 0xd0);
      do {
        _free((void *)*puVar2);
        *puVar2 = 0;
        lVar1 = lVar1 + 1;
        puVar2 = puVar2 + 3;
      } while (lVar1 < *(int *)(param_1 + 0xb8));
    }
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    _free(*(void **)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}




void FUN_1010be8e0(undefined8 *param_1)

{
  _free((void *)param_1[5]);
  FUN_1010cd488(param_1[7],*(undefined4 *)(param_1 + 6));
  FUN_1010cd1f0(param_1 + 1);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}




void FUN_1010be924(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_1010be85c();
    _free(param_1);
    return;
  }
  return;
}




undefined8
FUN_1010be950(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  
  puVar3 = (undefined4 *)FUN_1010be814();
  param_1[3] = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  *(undefined8 *)(puVar3 + 0x18) = *param_1;
  puVar1 = param_1 + 4;
  *(undefined8 **)(puVar3 + 4) = puVar1;
  FUN_1010bcd88(puVar1,0x203);
  FUN_1010bab50(0,puVar1);
  param_1[0xb] = param_4;
  param_1[4] = *param_1;
  *puVar3 = 0;
  FUN_1010cd034(puVar3 + 0xc,param_2,param_3);
  puVar3[1] = 1;
  iVar2 = FUN_1010beacc(*(undefined4 *)param_1,*(undefined4 *)((long)param_1 + 4),1,puVar3,0);
  if (iVar2 == 0) {
LAB_1010bea98:
    pvVar7 = (void *)param_1[3];
    if (pvVar7 != (void *)0x0) {
      FUN_1010be85c(pvVar7);
      _free(pvVar7);
    }
    uVar4 = 0;
    param_1[3] = 0;
  }
  else {
    if (((puVar3[0x2e] == 1) && (puVar3[0x30] == 3)) && ((int)puVar3[0x1e] < 1)) {
      uVar5 = (ulong)(uint)puVar3[0x2a];
      if (0 < (int)puVar3[0x2a]) {
        lVar6 = *(long *)(puVar3 + 0x2c);
        do {
          if (((1 < *(int *)(lVar6 + 0x51c)) || (1 < *(int *)(lVar6 + 0x7ac))) ||
             (1 < *(int *)(lVar6 + 0xa3c))) goto LAB_1010bea10;
          lVar6 = lVar6 + 0xcd0;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      *(undefined4 *)(param_1 + 0x18) = 1;
      *(undefined8 *)(puVar3 + 10) = 0;
      lVar6 = FUN_1010ce974((long)(int)puVar3[0x19] * (long)(int)puVar3[0x18],1);
      *(long *)(puVar3 + 8) = lVar6;
      if (lVar6 == 0) {
        *puVar3 = 1;
        goto LAB_1010bea98;
      }
    }
    else {
LAB_1010bea10:
      *(undefined4 *)(param_1 + 0x18) = 0;
      iVar2 = FUN_1010bf470(puVar3,*(undefined4 *)param_1);
      if (iVar2 == 0) goto LAB_1010bea98;
    }
    puVar3[1] = 0;
    uVar4 = 1;
  }
  return uVar4;
}




void FUN_1010beacc(ulong param_1,ulong param_2,int param_3,int *param_4,long *param_5)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  uint *puVar17;
  ulong uVar18;
  int *piVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  char *pcVar23;
  ulong uVar24;
  undefined4 *puVar25;
  char *pcVar26;
  ulong uVar27;
  void *pvVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  int *piVar32;
  byte *pbVar33;
  ulong uVar34;
  ulong uVar35;
  ulong local_3f0;
  uint *local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined4 uStack_378;
  undefined4 local_374;
  undefined4 uStack_370;
  undefined8 uStack_36c;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined4 uStack_328;
  undefined4 local_324;
  undefined4 uStack_320;
  undefined8 uStack_31c;
  undefined4 local_308;
  undefined4 local_304;
  short asStack_288 [128];
  short asStack_188 [128];
  long local_88;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  puVar1 = (ulong *)(param_4 + 0xc);
  piVar2 = param_4 + 0x1e;
  if (param_3 == 0) {
LAB_1010bed18:
    iVar6 = FUN_1010cd140(puVar1,1);
    if (iVar6 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = FUN_1010cd140(puVar1,4);
      if (10 < (int)uVar14 - 1U) goto LAB_1010bf320;
    }
    local_3b8 = (uint *)0x0;
    uVar35 = 1;
    uVar34 = param_1;
    if ((param_3 != 0) && (iVar6 = FUN_1010cd140(puVar1,1), iVar6 != 0)) {
      iVar6 = FUN_1010cd140(puVar1,3);
      uVar8 = iVar6 + 2;
      iVar6 = 1 << (ulong)(uVar8 & 0x1f);
      uVar16 = ((int)param_1 + iVar6) - 1U >> (ulong)(uVar8 & 0x1f);
      uVar7 = (iVar6 + (int)param_2) - 1U >> (ulong)(uVar8 & 0x1f);
      iVar6 = FUN_1010beacc(uVar16,uVar7,0,param_4,&local_3b8);
      if (iVar6 != 0) {
        uVar16 = uVar16 * uVar7;
        param_4[0x25] = uVar8;
        if ((int)uVar16 < 1) {
          uVar35 = 1;
          uVar34 = param_1 & 0xffffffff;
        }
        else {
          uVar22 = (ulong)uVar16;
          uVar35 = 1;
          uVar34 = param_1 & 0xffffffff;
          puVar17 = local_3b8;
          do {
            uVar5 = *(ushort *)((long)puVar17 + 1);
            *puVar17 = (uint)uVar5;
            uVar8 = (uint)uVar35;
            if (uVar8 <= uVar5) {
              uVar8 = uVar5 + 1;
            }
            uVar35 = (ulong)uVar8;
            uVar22 = uVar22 - 1;
            puVar17 = puVar17 + 1;
          } while (uVar22 != 0);
        }
        goto LAB_1010bee24;
      }
      pvVar28 = (void *)0x0;
      piVar32 = (int *)0x0;
      lVar29 = 0;
      *param_4 = 3;
      uVar35 = 1;
LAB_1010bf300:
      _free(pvVar28);
      _free(piVar32);
      _free(local_3b8);
      FUN_1010cd488(lVar29,uVar35);
      goto LAB_1010bf320;
    }
LAB_1010bee24:
    if (param_4[0x16] != 0) {
      pvVar28 = (void *)0x0;
      piVar32 = (int *)0x0;
      lVar29 = 0;
      goto LAB_1010bf300;
    }
    lVar29 = 0;
    iVar6 = 1 << (ulong)((uint)uVar14 & 0x1f);
    iVar10 = 0;
    do {
      iVar9 = iVar6;
      if ((int)(uint)uVar14 < 1 || lVar29 != 0) {
        iVar9 = 0;
      }
      iVar9 = iVar9 + (uint)*(ushort *)((long)&DAT_1013cab30 + lVar29);
      if (iVar9 <= iVar10) {
        iVar9 = iVar10;
      }
      lVar29 = lVar29 + 2;
      iVar10 = iVar9;
    } while (lVar29 != 10);
    lVar29 = FUN_1010cd47c(uVar35);
    piVar32 = (int *)FUN_1010ce998((long)iVar9,4);
    pvVar28 = (void *)FUN_1010ce974((long)iVar9,4);
    if ((lVar29 == 0) || (piVar32 == (int *)0x0 || pvVar28 == (void *)0x0)) {
      *param_4 = 1;
      goto LAB_1010bf300;
    }
    local_3f0 = 0;
    uVar22 = uVar14;
    uVar24 = param_2;
    do {
      lVar21 = 0;
      do {
        lVar30 = lVar29 + local_3f0 * 0xcd0 + lVar21 * 0x290;
        iVar10 = iVar6;
        if ((int)uVar22 < 1 || lVar21 != 0) {
          iVar10 = 0;
        }
        uVar8 = iVar10 + (uint)(ushort)(&DAT_1013cab30)[lVar21];
        uVar18 = (ulong)uVar8;
        iVar10 = FUN_1010cd140(puVar1,1);
        if (iVar10 == 0) {
          uStack_36c = 0;
          uStack_370 = 0;
          uStack_388 = 0;
          local_390 = 0;
          uStack_378 = 0;
          local_374 = 0;
          uStack_380 = 0;
          uStack_3a8 = 0;
          local_3b0 = 0;
          uStack_398 = 0;
          uStack_3a0 = 0;
          iVar10 = FUN_1010cd140(puVar1,4);
          uVar16 = iVar10 + 4;
          if (0x13 < (int)uVar16) {
            *param_4 = 3;
            goto LAB_1010bf300;
          }
          _bzero(piVar32,-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | uVar18 << 2);
          if (0 < (int)uVar16) {
            uVar27 = (ulong)uVar16;
            pbVar33 = &DAT_1013cab3a;
            do {
              uVar11 = FUN_1010cd140(puVar1,3);
              *(undefined4 *)((long)&local_3b0 + (ulong)*pbVar33 * 4) = uVar11;
              uVar27 = uVar27 - 1;
              pbVar33 = pbVar33 + 1;
            } while (uVar27 != 0);
          }
          uStack_31c = 0;
          uStack_320 = 0;
          uStack_328 = 0;
          local_324 = 0;
          uStack_330 = 0;
          uStack_348 = 0;
          local_350 = 0;
          uStack_338 = 0;
          uStack_340 = 0;
          uStack_358 = 0;
          local_360 = 0;
          iVar10 = FUN_1010cd63c(&local_308,&local_3b0,&local_360,0x13);
          if (iVar10 == 0) {
LAB_1010bf0ac:
            uVar8 = 0;
            *param_4 = 3;
          }
          else {
            iVar10 = FUN_1010cd140(puVar1,1);
            uVar34 = uVar18;
            if (iVar10 != 0) {
              iVar10 = FUN_1010cd140(puVar1,3);
              iVar10 = FUN_1010cd140(puVar1,iVar10 * 2 + 2);
              uVar34 = (ulong)(iVar10 + 2U);
              if ((int)uVar8 < (int)(iVar10 + 2U)) {
LAB_1010bf094:
                *param_4 = 3;
                FUN_1010cd44c(&local_308);
                uVar22 = uVar14 & 0xffffffff;
                uVar24 = param_2 & 0xffffffff;
                uVar34 = param_1 & 0xffffffff;
                goto LAB_1010bf0ac;
              }
            }
            if ((0 < (int)uVar8) && ((int)uVar34 != 0)) {
              iVar10 = 0;
              iVar9 = 8;
              do {
                uVar16 = param_4[0x14];
                if (0x1f < (int)uVar16) {
                  FUN_1010cd090(puVar1);
                  uVar16 = param_4[0x14];
                }
                uVar24 = *puVar1 >> ((ulong)uVar16 & 0x3f);
                uVar22 = uVar24 & 0x7f;
                if (*(byte *)((long)&local_308 + uVar22) < 8) {
                  iVar31 = uVar16 + *(byte *)((long)&local_308 + uVar22);
                  param_4[0x14] = iVar31;
                  param_4[0x15] =
                       (uint)(*(long *)(param_4 + 0x12) == *(long *)(param_4 + 0x10) &&
                             0x40 < iVar31);
                  iVar31 = (int)asStack_288[uVar22];
                }
                else {
                  piVar19 = (int *)(local_88 + (long)asStack_188[uVar22] * 8);
                  uVar22 = uVar24 >> 7 & 0x1ffffff;
                  iVar31 = uVar16 + 6;
                  do {
                    iVar20 = iVar31;
                    piVar19 = piVar19 + ((long)piVar19[1] + (ulong)((uint)uVar22 & 1)) * 2;
                    uVar22 = (ulong)((uint)uVar22 >> 1);
                    iVar31 = iVar20 + 1;
                  } while (piVar19[1] != 0);
                  param_4[0x14] = iVar20 + 2;
                  param_4[0x15] =
                       (uint)(*(long *)(param_4 + 0x12) == *(long *)(param_4 + 0x10) &&
                             0x3f < iVar31);
                  iVar31 = *piVar19;
                }
                if (iVar31 < 0x10) {
                  piVar32[iVar10] = iVar31;
                  iVar10 = iVar10 + 1;
                  if (iVar31 != 0) {
                    iVar9 = iVar31;
                  }
                }
                else {
                  iVar4 = *(int *)(&DAT_1013cab5c + (ulong)(iVar31 - 0x10) * 4);
                  iVar12 = FUN_1010cd140(puVar1,*(undefined4 *)
                                                 (&DAT_1013cab50 + (ulong)(iVar31 - 0x10) * 4));
                  iVar20 = iVar12 + iVar4;
                  if ((int)uVar8 < iVar20 + iVar10) goto LAB_1010bf094;
                  iVar3 = iVar9;
                  if (iVar31 != 0x10) {
                    iVar3 = 0;
                  }
                  if (0 < iVar20) {
                    iVar31 = iVar12 + iVar4 + 1;
                    piVar19 = piVar32 + iVar10;
                    do {
                      *piVar19 = iVar3;
                      iVar10 = iVar10 + 1;
                      iVar31 = iVar31 + -1;
                      piVar19 = piVar19 + 1;
                    } while (1 < iVar31);
                  }
                }
              } while ((iVar10 < (int)uVar8) &&
                      (uVar16 = (int)uVar34 - 1, uVar34 = (ulong)uVar16, uVar16 != 0));
            }
            uVar34 = param_1 & 0xffffffff;
            FUN_1010cd44c(&local_308);
            iVar10 = FUN_1010cd63c(lVar30,piVar32,pvVar28,uVar18);
            uVar8 = (uint)(iVar10 != 0);
            uVar22 = uVar14 & 0xffffffff;
            uVar24 = param_2 & 0xffffffff;
          }
        }
        else {
          iVar10 = FUN_1010cd140(puVar1,1);
          iVar9 = FUN_1010cd140(puVar1,1);
          uVar11 = 8;
          if (iVar9 == 0) {
            uVar11 = 1;
          }
          local_308 = FUN_1010cd140(puVar1,uVar11);
          local_360 = local_360 & 0xffffffff00000000;
          *piVar32 = iVar10;
          if (iVar10 + 1 == 2) {
            local_304 = FUN_1010cd140(puVar1,8);
            local_360 = CONCAT44(1,(undefined4)local_360);
            piVar32[1] = iVar10;
          }
          uVar8 = FUN_1010cd9d4(lVar30,piVar32,&local_360,&local_308,uVar18,iVar10 + 1);
        }
        if ((uVar8 == 0) || (param_4[0x16] != 0)) {
          *param_4 = 3;
          goto LAB_1010bf300;
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 != 5);
      local_3f0 = local_3f0 + 1;
    } while (local_3f0 != uVar35);
    _free(pvVar28);
    _free(piVar32);
    *(uint **)(param_4 + 0x28) = local_3b8;
    param_4[0x2a] = (int)uVar35;
    *(long *)(param_4 + 0x2c) = lVar29;
    if ((int)uVar22 < 1) {
      *piVar2 = 0;
LAB_1010bf3bc:
      uVar16 = param_4[0x25];
      iVar6 = (int)uVar34;
      param_4[0x18] = iVar6;
      param_4[0x19] = (int)uVar24;
      param_4[0x26] = (iVar6 + (1 << (ulong)(uVar16 & 0x1f))) - 1U >> (ulong)(uVar16 & 0x1f);
      uVar8 = 0xffffffff;
      if (uVar16 != 0) {
        uVar8 = ~(-1 << (ulong)(uVar16 & 0x1f));
      }
      param_4[0x24] = uVar8;
      if (param_3 != 0) {
        pvVar28 = (void *)0x0;
        param_4[2] = 1;
LAB_1010bf3fc:
        if (param_5 != (long *)0x0) {
          *param_5 = (long)pvVar28;
        }
        param_4[0x1b] = 0;
        if (param_3 == 0) {
          FUN_1010be8e0(piVar2);
        }
        uVar15 = 1;
        goto LAB_1010bf368;
      }
      pvVar28 = (void *)FUN_1010ce974((long)iVar6 * (long)(int)uVar24,4);
      if (pvVar28 == (void *)0x0) goto LAB_1010bf460;
      iVar6 = FUN_1010bf984(param_4,pvVar28,uVar34,uVar24,uVar24,0);
      if ((iVar6 != 0) && (param_4[0x16] == 0)) goto LAB_1010bf3fc;
    }
    else {
      param_4[0x1e] = iVar6;
      iVar6 = FUN_1010cd1a4(param_4 + 0x20,uVar22);
      if (iVar6 != 0) goto LAB_1010bf3bc;
      pvVar28 = (void *)0x0;
LAB_1010bf460:
      *param_4 = 1;
    }
  }
  else {
    do {
      iVar6 = FUN_1010cd140(puVar1,1);
      if (iVar6 == 0) goto LAB_1010bed18;
      lVar29 = (long)param_4[0x2e];
      uVar7 = FUN_1010cd140(puVar1,2);
      uVar8 = param_4[0x48];
      uVar16 = 1 << (ulong)(uVar7 & 0x1f);
      if ((uVar8 & uVar16) != 0) break;
      piVar32 = param_4 + lVar29 * 6 + 0x34;
      piVar32[0] = 0;
      piVar32[1] = 0;
      param_4[0x48] = uVar8 | uVar16;
      param_4[lVar29 * 6 + 0x30] = uVar7;
      piVar19 = param_4 + lVar29 * 6 + 0x32;
      *piVar19 = (int)param_1;
      param_4[lVar29 * 6 + 0x33] = (int)param_2;
      param_4[0x2e] = param_4[0x2e] + 1;
      if (uVar7 < 2) {
        iVar6 = FUN_1010cd140(puVar1,3);
        uVar8 = iVar6 + 2;
        param_4[lVar29 * 6 + 0x31] = uVar8;
        uVar16 = ~(-1 << (ulong)(uVar8 & 0x1f));
        uVar8 = FUN_1010beacc(*piVar19 + uVar16 >> (ulong)(uVar8 & 0x1f),
                              param_4[lVar29 * 6 + 0x33] + uVar16 >> (ulong)(uVar8 & 0x1f),0,param_4
                              ,piVar32);
      }
      else if (uVar7 == 3) {
        iVar6 = FUN_1010cd140(puVar1,8);
        iVar6 = iVar6 + 1;
        uVar8 = 2;
        if (iVar6 < 3) {
          uVar8 = 3;
        }
        uVar16 = 1;
        if (iVar6 < 5) {
          uVar16 = uVar8;
        }
        uVar8 = 0;
        if (iVar6 < 0x11) {
          uVar8 = uVar16;
        }
        iVar10 = *piVar19;
        param_4[lVar29 * 6 + 0x31] = uVar8;
        iVar9 = FUN_1010beacc(iVar6,1,0,param_4,piVar32);
        if (iVar9 == 0) break;
        lVar29 = 1L << (8UL >> ((ulong)(uint)param_4[lVar29 * 6 + 0x31] & 0x3f) & 0x3f);
        puVar13 = (undefined4 *)FUN_1010ce974(lVar29,4);
        if (puVar13 != (undefined4 *)0x0) {
          puVar25 = *(undefined4 **)piVar32;
          *puVar13 = *puVar25;
          if (iVar6 < 2) {
            uVar16 = 4;
          }
          else {
            uVar16 = iVar6 * 4;
            if ((int)uVar16 < 6) {
              uVar16 = 5;
            }
            lVar21 = (ulong)uVar16 - 4;
            pcVar23 = (char *)(puVar13 + 1);
            pcVar26 = (char *)(puVar25 + 1);
            do {
              *pcVar23 = pcVar23[-4] + *pcVar26;
              lVar21 = lVar21 + -1;
              pcVar23 = pcVar23 + 1;
              pcVar26 = pcVar26 + 1;
            } while (lVar21 != 0);
          }
          iVar6 = (int)lVar29;
          if (uVar16 < (uint)(iVar6 << 2)) {
            _bzero((void *)((long)puVar13 + (ulong)uVar16),(ulong)(iVar6 * 4 + ~uVar16) + 1);
          }
          _free(*(void **)piVar32);
          *(undefined4 **)piVar32 = puVar13;
        }
        param_1 = (ulong)((iVar10 + (1 << (ulong)uVar8)) - 1U >> (ulong)uVar8);
        uVar8 = (uint)(puVar13 != (undefined4 *)0x0);
      }
      else {
        uVar8 = 1;
      }
    } while (uVar8 != 0);
LAB_1010bf320:
    pvVar28 = (void *)0x0;
    *param_4 = 3;
  }
  _free(pvVar28);
  FUN_1010be8e0(piVar2);
  if ((*param_4 == 3) && (param_4[0x15] != 0)) {
    uVar15 = 0;
    *param_4 = 5;
  }
  else {
    uVar15 = 0;
  }
LAB_1010bf368:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar15);
}




bool FUN_1010bf470(undefined4 *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (ulong)(param_2 & 0xffff) + (long)(int)param_1[0x19] * (long)(int)param_1[0x18];
  lVar1 = FUN_1010ce974(lVar2 + (long)(int)param_2 * 0x10,4);
  *(long *)(param_1 + 8) = lVar1;
  if (lVar1 == 0) {
    lVar2 = 0;
    *param_1 = 1;
  }
  else {
    lVar2 = lVar1 + lVar2 * 4;
  }
  *(long *)(param_1 + 10) = lVar2;
  return lVar1 != 0;
}




undefined8 FUN_1010bf4c8(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  undefined4 *puVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  
  puVar20 = *(undefined4 **)(param_1 + 0x18);
  iVar22 = puVar20[0x1b];
  iVar3 = puVar20[0x18];
  iVar6 = puVar20[0x19] * iVar3;
  if (iVar22 == iVar6) {
LAB_1010bf500:
    uVar9 = 1;
  }
  else {
    if (*(int *)(param_1 + 0xc0) == 0) {
      uVar9 = FUN_1010bf984(puVar20,*(undefined8 *)(puVar20 + 8),iVar3,puVar20[0x19],param_2,
                            FUN_1010c0178);
      return uVar9;
    }
    lVar11 = *(long *)(puVar20 + 8);
    uVar21 = 0;
    if (iVar3 != 0) {
      uVar21 = iVar22 / iVar3;
    }
    uVar23 = iVar22 - uVar21 * iVar3;
    uVar4 = puVar20[0x25];
    if (uVar4 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (long)*(int *)(*(long *)(puVar20 + 0x28) +
                             (long)(((int)uVar23 >> (uVar4 & 0x1f)) +
                                   puVar20[0x26] * ((int)uVar21 >> (uVar4 & 0x1f))) * 4);
    }
    puVar2 = (ulong *)(puVar20 + 0xc);
    lVar12 = *(long *)(puVar20 + 0x2c) + lVar12 * 0xcd0;
    iVar7 = iVar3 * (int)param_2;
    uVar4 = puVar20[0x24];
    do {
      if (puVar20[0x15] != 0 || iVar7 <= iVar22) {
        FUN_1010c0814(puVar20,uVar21);
        if ((puVar20[0x16] == 0) && ((puVar20[0x15] == 0 || (iVar6 <= iVar22)))) {
          puVar20[0x1b] = iVar22;
          if (iVar6 == iVar22) {
            puVar20[2] = 0;
          }
          goto LAB_1010bf500;
        }
        break;
      }
      if ((uVar23 & uVar4) == 0) {
        uVar24 = puVar20[0x25];
        if (uVar24 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = (long)*(int *)(*(long *)(puVar20 + 0x28) +
                                 (long)(((int)uVar23 >> (uVar24 & 0x1f)) +
                                       puVar20[0x26] * ((int)uVar21 >> (uVar24 & 0x1f))) * 4);
        }
        lVar12 = *(long *)(puVar20 + 0x2c) + lVar12 * 0xcd0;
      }
      uVar24 = puVar20[0x14];
      if (0x1f < (int)uVar24) {
        FUN_1010cd090(puVar2);
        uVar24 = puVar20[0x14];
      }
      uVar13 = *puVar2;
      uVar19 = uVar13 >> ((ulong)uVar24 & 0x3f);
      uVar17 = uVar19 & 0x7f;
      if (*(byte *)(lVar12 + uVar17) < 8) {
        uVar24 = uVar24 + *(byte *)(lVar12 + uVar17);
        puVar20[0x14] = uVar24;
        puVar20[0x15] =
             (uint)(*(long *)(puVar20 + 0x12) == *(long *)(puVar20 + 0x10) && 0x40 < (int)uVar24);
        uVar16 = (uint)*(short *)(lVar12 + uVar17 * 2 + 0x80);
      }
      else {
        puVar14 = (uint *)(*(long *)(lVar12 + 0x280) +
                          (long)*(short *)(lVar12 + uVar17 * 2 + 0x180) * 8);
        uVar17 = uVar19 >> 7 & 0x1ffffff;
        iVar8 = uVar24 + 6;
        do {
          iVar15 = iVar8;
          puVar14 = puVar14 + ((long)(int)puVar14[1] + (ulong)((uint)uVar17 & 1)) * 2;
          uVar17 = (ulong)((uint)uVar17 >> 1);
          iVar8 = iVar15 + 1;
        } while (puVar14[1] != 0);
        uVar24 = iVar15 + 2;
        puVar20[0x14] = uVar24;
        puVar20[0x15] =
             (uint)(*(long *)(puVar20 + 0x12) == *(long *)(puVar20 + 0x10) && 0x3f < iVar8);
        uVar16 = *puVar14;
      }
      if ((int)uVar16 < 0x100) {
        *(char *)(lVar11 + iVar22) = (char)uVar16;
        iVar22 = iVar22 + 1;
        uVar23 = uVar23 + 1;
        if (iVar3 <= (int)uVar23) {
          uVar21 = uVar21 + 1;
          if ((uVar21 & 0xf) == 0) {
            FUN_1010c0814(puVar20,uVar21);
          }
          uVar23 = 0;
        }
      }
      else {
        if (0x117 < (int)uVar16) break;
        if ((int)uVar16 < 0x104) {
          uVar16 = uVar16 - 0x100;
        }
        else {
          iVar8 = FUN_1010cd140(puVar2);
          uVar16 = iVar8 + ((uVar16 & 1 | 2) << (ulong)(uVar16 - 0x102 >> 1 & 0x1f));
          uVar13 = *(ulong *)(puVar20 + 0xc);
          uVar24 = puVar20[0x14];
        }
        uVar13 = uVar13 >> ((ulong)uVar24 & 0x3f);
        uVar17 = uVar13 & 0x7f;
        bVar5 = *(byte *)(lVar12 + uVar17 + 0xa40);
        if (bVar5 < 8) {
          iVar15 = uVar24 + bVar5;
          puVar20[0x14] = iVar15;
          puVar20[0x15] =
               (uint)(*(long *)(puVar20 + 0x12) == *(long *)(puVar20 + 0x10) && 0x40 < iVar15);
          uVar24 = (uint)*(short *)(lVar12 + uVar17 * 2 + 0xac0);
        }
        else {
          puVar14 = (uint *)(*(long *)(lVar12 + 0xcc0) +
                            (long)*(short *)(lVar12 + uVar17 * 2 + 0xbc0) * 8);
          uVar13 = uVar13 >> 7 & 0x1ffffff;
          iVar8 = uVar24 + 6;
          do {
            iVar15 = iVar8;
            puVar14 = puVar14 + ((long)(int)puVar14[1] + (ulong)((uint)uVar13 & 1)) * 2;
            uVar13 = (ulong)((uint)uVar13 >> 1);
            iVar8 = iVar15 + 1;
          } while (puVar14[1] != 0);
          iVar15 = iVar15 + 2;
          puVar20[0x14] = iVar15;
          puVar20[0x15] =
               (uint)(*(long *)(puVar20 + 0x12) == *(long *)(puVar20 + 0x10) && 0x3f < iVar8);
          uVar24 = *puVar14;
        }
        if (0x1f < iVar15) {
          FUN_1010cd090(puVar2);
        }
        if (3 < (int)uVar24) {
          iVar8 = FUN_1010cd140(puVar2);
          uVar24 = iVar8 + ((uVar24 & 1 | 2) << (ulong)(uVar24 - 2 >> 1 & 0x1f));
        }
        if ((int)(uVar24 + 1) < 0x79) {
          uVar24 = ((uint)((byte)(&DAT_1013cab68)[(int)uVar24] >> 4) * iVar3 -
                   ((byte)(&DAT_1013cab68)[(int)uVar24] & 0xf)) + 8;
          if ((int)uVar24 < 2) {
            uVar24 = 1;
          }
        }
        else {
          uVar24 = uVar24 - 0x77;
        }
        uVar1 = uVar16 + 1;
        if (iVar22 < (int)uVar24 || iVar6 - iVar22 < (int)uVar1) break;
        if (uVar16 < 0x7fffffff) {
          uVar13 = (ulong)uVar1;
          puVar18 = (undefined1 *)(lVar11 + iVar22);
          do {
            *puVar18 = puVar18[-(ulong)uVar24];
            uVar13 = uVar13 - 1;
            puVar18 = puVar18 + 1;
          } while (uVar13 != 0);
        }
        uVar23 = uVar1 + uVar23;
        while (iVar3 <= (int)uVar23) {
          uVar23 = uVar23 - iVar3;
          uVar21 = uVar21 + 1;
          if ((uVar21 & 0xf) == 0) {
            FUN_1010c0814(puVar20,uVar21);
          }
        }
        iVar22 = uVar1 + iVar22;
        if ((iVar22 < iVar7) && ((uVar23 & uVar4) != 0)) {
          uVar24 = puVar20[0x25];
          if (uVar24 == 0) {
            lVar12 = 0;
          }
          else {
            lVar12 = (long)*(int *)(*(long *)(puVar20 + 0x28) +
                                   (long)(((int)uVar23 >> (uVar24 & 0x1f)) +
                                         puVar20[0x26] * ((int)uVar21 >> (uVar24 & 0x1f))) * 4);
          }
          lVar12 = *(long *)(puVar20 + 0x2c) + lVar12 * 0xcd0;
        }
      }
    } while (puVar20[0x16] == 0);
    uVar9 = 0;
    uVar10 = 3;
    if (puVar20[0x15] != 0) {
      uVar10 = 5;
    }
    *puVar20 = uVar10;
  }
  return uVar9;
}




undefined8
FUN_1010bf984(undefined4 *param_1,long param_2,int param_3,int param_4,int param_5,code *param_6)

{
  uint *puVar1;
  ulong *puVar2;
  long *plVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  uint *puVar24;
  uint *puVar25;
  uint local_88;
  
  iVar6 = param_1[0x1b];
  uVar21 = 0;
  if (param_3 != 0) {
    uVar21 = iVar6 / param_3;
  }
  uVar23 = iVar6 - uVar21 * param_3;
  uVar4 = param_1[0x25];
  if (uVar4 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = (long)*(int *)(*(long *)(param_1 + 0x28) +
                           (long)(((int)uVar23 >> (uVar4 & 0x1f)) +
                                 param_1[0x26] * ((int)uVar21 >> (uVar4 & 0x1f))) * 4);
  }
  puVar2 = (ulong *)(param_1 + 0xc);
  lVar16 = *(long *)(param_1 + 0x2c) + lVar16 * 0xcd0;
  puVar22 = (uint *)(param_2 + (long)iVar6 * 4);
  puVar1 = (uint *)(param_2 + (long)(param_4 * param_3) * 4);
  iVar6 = param_1[0x1e];
  plVar3 = (long *)(param_1 + 0x20);
  if (iVar6 < 1) {
    plVar3 = (long *)0x0;
  }
  uVar4 = param_1[0x24];
  puVar25 = puVar22;
  do {
    if (param_1[0x15] != 0 || (uint *)(param_2 + (long)(param_5 * param_3) * 4) <= puVar22) {
      if (param_6 != (code *)0x0) {
        (*param_6)(param_1,uVar21);
      }
      if ((param_1[0x16] == 0) && ((param_1[0x15] == 0 || (puVar1 <= puVar22)))) {
        param_1[0x1b] = (int)((ulong)((long)puVar22 - param_2) >> 2);
        if (puVar22 == puVar1) {
          param_1[2] = 0;
        }
        return 1;
      }
      break;
    }
    if ((uVar23 & uVar4) == 0) {
      uVar9 = param_1[0x25];
      if (uVar9 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = (long)*(int *)(*(long *)(param_1 + 0x28) +
                               (long)(((int)uVar23 >> (uVar9 & 0x1f)) +
                                     param_1[0x26] * ((int)uVar21 >> (uVar9 & 0x1f))) * 4);
      }
      lVar16 = *(long *)(param_1 + 0x2c) + lVar16 * 0xcd0;
    }
    uVar9 = param_1[0x14];
    if (0x1f < (int)uVar9) {
      FUN_1010cd090(puVar2);
      uVar9 = param_1[0x14];
    }
    uVar11 = *puVar2;
    uVar18 = uVar11 >> ((ulong)uVar9 & 0x3f);
    uVar19 = uVar18 & 0x7f;
    if (*(byte *)(lVar16 + uVar19) < 8) {
      uVar9 = uVar9 + *(byte *)(lVar16 + uVar19);
      lVar13 = *(long *)(param_1 + 0x10);
      lVar17 = *(long *)(param_1 + 0x12);
      param_1[0x14] = uVar9;
      param_1[0x15] = (uint)(lVar17 == lVar13 && 0x40 < (int)uVar9);
      local_88 = (uint)*(short *)(lVar16 + uVar19 * 2 + 0x80);
    }
    else {
      puVar12 = (uint *)(*(long *)(lVar16 + 0x280) +
                        (long)*(short *)(lVar16 + uVar19 * 2 + 0x180) * 8);
      uVar18 = uVar18 >> 7 & 0x1ffffff;
      iVar8 = uVar9 + 6;
      do {
        iVar15 = iVar8;
        puVar12 = puVar12 + ((long)(int)puVar12[1] + (ulong)((uint)uVar18 & 1)) * 2;
        uVar18 = (ulong)((uint)uVar18 >> 1);
        iVar8 = iVar15 + 1;
      } while (puVar12[1] != 0);
      uVar9 = iVar15 + 2;
      lVar13 = *(long *)(param_1 + 0x10);
      lVar17 = *(long *)(param_1 + 0x12);
      param_1[0x14] = uVar9;
      param_1[0x15] = (uint)(lVar17 == lVar13 && 0x3f < iVar8);
      local_88 = *puVar12;
    }
    uVar18 = (ulong)uVar9;
    if ((int)local_88 < 0x100) {
      uVar19 = uVar11 >> (uVar18 & 0x3f);
      uVar18 = uVar19 & 0x7f;
      bVar5 = *(byte *)(lVar16 + uVar18 + 0x290);
      if (bVar5 < 8) {
        uVar9 = uVar9 + bVar5;
        param_1[0x14] = uVar9;
        param_1[0x15] = (uint)(lVar17 == lVar13 && 0x40 < (int)uVar9);
        uVar20 = (uint)*(ushort *)(lVar16 + uVar18 * 2 + 0x310);
      }
      else {
        puVar12 = (uint *)(*(long *)(lVar16 + 0x510) +
                          (long)*(short *)(lVar16 + uVar18 * 2 + 0x410) * 8);
        uVar18 = uVar19 >> 7 & 0x1ffffff;
        iVar8 = uVar9 + 6;
        do {
          iVar15 = iVar8;
          puVar12 = puVar12 + ((long)(int)puVar12[1] + (ulong)((uint)uVar18 & 1)) * 2;
          uVar18 = (ulong)((uint)uVar18 >> 1);
          iVar8 = iVar15 + 1;
        } while (puVar12[1] != 0);
        uVar9 = iVar15 + 2;
        param_1[0x14] = uVar9;
        param_1[0x15] = (uint)(lVar17 == lVar13 && 0x3f < iVar8);
        uVar20 = *puVar12;
      }
      if (0x1f < (int)uVar9) {
        FUN_1010cd090(puVar2);
        uVar11 = *(ulong *)(param_1 + 0xc);
        uVar9 = param_1[0x14];
      }
      uVar19 = uVar11 >> ((ulong)uVar9 & 0x3f);
      uVar18 = uVar19 & 0x7f;
      bVar5 = *(byte *)(lVar16 + uVar18 + 0x520);
      if (bVar5 < 8) {
        uVar9 = uVar9 + bVar5;
        lVar13 = *(long *)(param_1 + 0x10);
        lVar17 = *(long *)(param_1 + 0x12);
        param_1[0x14] = uVar9;
        param_1[0x15] = (uint)(lVar17 == lVar13 && 0x40 < (int)uVar9);
        uVar14 = (uint)*(short *)(lVar16 + uVar18 * 2 + 0x5a0);
      }
      else {
        puVar12 = (uint *)(*(long *)(lVar16 + 0x7a0) +
                          (long)*(short *)(lVar16 + uVar18 * 2 + 0x6a0) * 8);
        uVar18 = uVar19 >> 7 & 0x1ffffff;
        iVar8 = uVar9 + 6;
        do {
          iVar15 = iVar8;
          puVar12 = puVar12 + ((long)(int)puVar12[1] + (ulong)((uint)uVar18 & 1)) * 2;
          uVar18 = (ulong)((uint)uVar18 >> 1);
          iVar8 = iVar15 + 1;
        } while (puVar12[1] != 0);
        uVar9 = iVar15 + 2;
        lVar13 = *(long *)(param_1 + 0x10);
        lVar17 = *(long *)(param_1 + 0x12);
        param_1[0x14] = uVar9;
        param_1[0x15] = (uint)(lVar17 == lVar13 && 0x3f < iVar8);
        uVar14 = *puVar12;
      }
      uVar11 = uVar11 >> ((ulong)uVar9 & 0x3f);
      uVar18 = uVar11 & 0x7f;
      bVar5 = *(byte *)(lVar16 + uVar18 + 0x7b0);
      if (bVar5 < 8) {
        iVar8 = uVar9 + bVar5;
        param_1[0x14] = iVar8;
        param_1[0x15] = (uint)(lVar17 == lVar13 && 0x40 < iVar8);
        uVar9 = (uint)*(ushort *)(lVar16 + uVar18 * 2 + 0x830);
      }
      else {
        puVar12 = (uint *)(*(long *)(lVar16 + 0xa30) +
                          (long)*(short *)(lVar16 + uVar18 * 2 + 0x930) * 8);
        uVar11 = uVar11 >> 7 & 0x1ffffff;
        iVar8 = uVar9 + 6;
        do {
          iVar15 = iVar8;
          puVar12 = puVar12 + ((long)(int)puVar12[1] + (ulong)((uint)uVar11 & 1)) * 2;
          uVar11 = (ulong)((uint)uVar11 >> 1);
          iVar8 = iVar15 + 1;
        } while (puVar12[1] != 0);
        param_1[0x14] = iVar15 + 2;
        param_1[0x15] = (uint)(lVar17 == lVar13 && 0x3f < iVar8);
        uVar9 = *puVar12;
      }
      uVar9 = uVar20 << 0x10 | local_88 << 8 | uVar14 | uVar9 << 0x18;
LAB_1010bfe00:
      puVar12 = puVar22 + 1;
      *puVar22 = uVar9;
      uVar23 = uVar23 + 1;
      if (param_3 <= (int)uVar23) {
        uVar21 = uVar21 + 1;
        if (((uVar21 & 0xf) == 0) && (param_6 != (code *)0x0)) {
          (*param_6)(param_1,uVar21);
        }
        uVar23 = 0;
        if ((0 < iVar6) && (puVar25 < puVar12)) {
          lVar13 = *plVar3;
          puVar24 = puVar25;
          do {
            puVar25 = puVar24 + 1;
            *(uint *)(lVar13 + (ulong)(*puVar24 * 0x1e35a7bd >>
                                      ((ulong)*(uint *)(plVar3 + 1) & 0x3f)) * 4) = *puVar24;
            bVar7 = puVar24 < puVar22;
            puVar24 = puVar25;
          } while (bVar7);
          uVar23 = 0;
        }
      }
    }
    else {
      if (0x117 < (int)local_88) {
        if ((int)local_88 < iVar6 + 0x118) {
          lVar13 = *plVar3;
          for (; puVar25 < puVar22; puVar25 = puVar25 + 1) {
            *(uint *)(lVar13 + (ulong)(*puVar25 * 0x1e35a7bd >>
                                      ((ulong)*(uint *)(plVar3 + 1) & 0x3f)) * 4) = *puVar25;
          }
          uVar9 = *(uint *)(lVar13 + (ulong)(local_88 - 0x118) * 4);
          goto LAB_1010bfe00;
        }
        break;
      }
      if ((int)local_88 < 0x104) {
        local_88 = local_88 - 0x100;
      }
      else {
        iVar8 = FUN_1010cd140(puVar2);
        local_88 = iVar8 + ((local_88 & 1 | 2) << (ulong)(local_88 - 0x102 >> 1 & 0x1f));
        uVar11 = *(ulong *)(param_1 + 0xc);
        uVar18 = (ulong)(uint)param_1[0x14];
      }
      uVar11 = uVar11 >> (uVar18 & 0x3f);
      uVar19 = uVar11 & 0x7f;
      bVar5 = *(byte *)(lVar16 + uVar19 + 0xa40);
      if (bVar5 < 8) {
        iVar15 = (int)uVar18 + (uint)bVar5;
        param_1[0x14] = iVar15;
        param_1[0x15] =
             (uint)(*(long *)(param_1 + 0x12) == *(long *)(param_1 + 0x10) && 0x40 < iVar15);
        uVar9 = (uint)*(short *)(lVar16 + uVar19 * 2 + 0xac0);
      }
      else {
        puVar12 = (uint *)(*(long *)(lVar16 + 0xcc0) +
                          (long)*(short *)(lVar16 + uVar19 * 2 + 0xbc0) * 8);
        uVar11 = uVar11 >> 7 & 0x1ffffff;
        iVar8 = (int)uVar18 + 6;
        do {
          iVar15 = iVar8;
          puVar12 = puVar12 + ((long)(int)puVar12[1] + (ulong)((uint)uVar11 & 1)) * 2;
          uVar11 = (ulong)((uint)uVar11 >> 1);
          iVar8 = iVar15 + 1;
        } while (puVar12[1] != 0);
        iVar15 = iVar15 + 2;
        param_1[0x14] = iVar15;
        param_1[0x15] =
             (uint)(*(long *)(param_1 + 0x12) == *(long *)(param_1 + 0x10) && 0x3f < iVar8);
        uVar9 = *puVar12;
      }
      if (0x1f < iVar15) {
        FUN_1010cd090(puVar2);
      }
      if (3 < (int)uVar9) {
        iVar8 = FUN_1010cd140(puVar2);
        uVar9 = iVar8 + ((uVar9 & 1 | 2) << (ulong)(uVar9 - 2 >> 1 & 0x1f));
      }
      if ((int)(uVar9 + 1) < 0x79) {
        uVar9 = ((uint)((byte)(&DAT_1013cab68)[(int)uVar9] >> 4) * param_3 -
                ((byte)(&DAT_1013cab68)[(int)uVar9] & 0xf)) + 8;
        if ((int)uVar9 < 2) {
          uVar9 = 1;
        }
      }
      else {
        uVar9 = uVar9 - 0x77;
      }
      if ((long)puVar22 - param_2 >> 2 < (long)(ulong)uVar9) break;
      uVar20 = local_88 + 1;
      if ((long)puVar1 - (long)puVar22 >> 2 < (long)(int)uVar20) break;
      if (local_88 < 0x7fffffff) {
        uVar11 = (ulong)uVar20;
        puVar12 = puVar22;
        do {
          *puVar12 = puVar12[-(long)(int)uVar9];
          uVar11 = uVar11 - 1;
          puVar12 = puVar12 + 1;
        } while (uVar11 != 0);
      }
      uVar23 = uVar20 + uVar23;
      while (param_3 <= (int)uVar23) {
        uVar23 = uVar23 - param_3;
        uVar21 = uVar21 + 1;
        if ((uVar21 & 0xf) == 0 && param_6 != (code *)0x0) {
          (*param_6)(param_1,uVar21);
        }
      }
      puVar12 = puVar22 + (int)uVar20;
      if (puVar12 < puVar1) {
        if ((uVar23 & uVar4) != 0) {
          uVar9 = param_1[0x25];
          if (uVar9 == 0) {
            lVar16 = 0;
          }
          else {
            lVar16 = (long)*(int *)(*(long *)(param_1 + 0x28) +
                                   (long)(((int)uVar23 >> (uVar9 & 0x1f)) +
                                         param_1[0x26] * ((int)uVar21 >> (uVar9 & 0x1f))) * 4);
          }
          lVar16 = *(long *)(param_1 + 0x2c) + lVar16 * 0xcd0;
        }
        if ((0 < iVar6) && (puVar25 < puVar12)) {
          lVar13 = *plVar3;
          puVar22 = puVar25;
          do {
            puVar25 = puVar22 + 1;
            *(uint *)(lVar13 + (ulong)(*puVar22 * 0x1e35a7bd >>
                                      ((ulong)*(uint *)(plVar3 + 1) & 0x3f)) * 4) = *puVar22;
            puVar22 = puVar25;
          } while (puVar25 < puVar12);
        }
      }
    }
    puVar22 = puVar12;
  } while (param_1[0x16] == 0);
  uVar10 = 3;
  if (param_1[0x15] != 0) {
    uVar10 = 5;
  }
  *param_1 = uVar10;
  return 0;
}

