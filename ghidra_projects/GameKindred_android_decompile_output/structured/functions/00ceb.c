// functions/00ceb — 56 functions
#include "libGameKindred.h"




undefined1 FUN_00ceb03c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x4b);
}




undefined1 FUN_00ceb044(long param_1)

{
  return *(undefined1 *)(param_1 + 0x4c);
}




undefined1 FUN_00ceb04c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x4d);
}




undefined1 FUN_00ceb054(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3b);
}




undefined1 FUN_00ceb05c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x4f);
}




bool FUN_00ceb064(long param_1)

{
  if (*(char *)(param_1 + 0x3a) != '\0') {
    return true;
  }
  return *(char *)(param_1 + 0x3b) != '\0';
}




undefined1 FUN_00ceb084(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}




undefined1 FUN_00ceb08c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}




undefined1 FUN_00ceb094(long param_1)

{
  return *(undefined1 *)(param_1 + 0x51);
}




undefined1 FUN_00ceb09c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x59);
}




undefined1 FUN_00ceb0a4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}




undefined1 FUN_00ceb0ac(long param_1)

{
  return *(undefined1 *)(param_1 + 0x54);
}




undefined1 FUN_00ceb0b4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x55);
}




undefined1 FUN_00ceb0bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x56);
}




undefined1 FUN_00ceb0c4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x57);
}




long FUN_00ceb0d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (**(long **)(param_1 + 0x28) != 0) {
    lVar2 = 0;
    do {
      lVar1 = lVar2 + 1;
      lVar2 = lVar2 + 1;
    } while ((*(long **)(param_1 + 0x28))[lVar1] != 0);
    return lVar2;
  }
  return 0;
}




int FUN_00ceb0fc(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  piVar4 = (int *)*puVar3;
  if (piVar4 != (int *)0x0) {
    iVar2 = 0;
    do {
      puVar3 = puVar3 + 1;
      iVar1 = *piVar4;
      piVar4 = (int *)*puVar3;
      iVar2 = iVar1 + iVar2;
    } while (piVar4 != (int *)0x0);
    return iVar2;
  }
  return 0;
}




int FUN_00ceb12c(long param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  piVar3 = (int *)*puVar2;
  if (piVar3 != (int *)0x0) {
    param_2 = param_2 & 0xff;
    iVar1 = 0;
    do {
      param_2 = param_2 - 1;
      puVar2 = puVar2 + 1;
      if (param_2 != 0) {
        iVar1 = *piVar3 + iVar1;
      }
      piVar3 = (int *)*puVar2;
    } while (piVar3 != (int *)0x0);
    return iVar1;
  }
  return 0;
}




undefined4 FUN_00ceb16c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




undefined4 FUN_00ceb174(long param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}




undefined4 FUN_00ceb17c(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00ceb1a0();
  if (puVar2 == (undefined4 *)0x0) {
    uVar1 = 0x40;
  }
  else {
    uVar1 = *puVar2;
  }
  return uVar1;
}




undefined8 FUN_00ceb1a0(byte *param_1)

{
  byte *__s1;
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_00d6eb50();
  plVar3 = (long *)FUN_00d6eb5c(uVar2,"*GameModeMatchmakerQueues*");
  puVar4 = *(undefined8 **)*plVar3;
  if (puVar4 != (undefined8 *)0x0) {
    plVar3 = (long *)*plVar3;
    do {
      __s1 = param_1 + 1;
      if ((*param_1 & 1) != 0) {
        __s1 = *(byte **)(param_1 + 0x10);
      }
      iVar1 = strcmp((char *)__s1,(char *)*puVar4);
      if (iVar1 == 0) {
        uVar2 = FUN_00d6eb50();
        uVar2 = FUN_00d6eb5c(uVar2,*(undefined8 *)(*plVar3 + 8));
        return uVar2;
      }
      puVar4 = (undefined8 *)plVar3[1];
      plVar3 = plVar3 + 1;
    } while (puVar4 != (undefined8 *)0x0);
  }
  return 0;
}




uint FUN_00ceb224(void)

{
  ulong uVar1;
  ushort *puVar2;
  
  uVar1 = (ulong)(ushort)DAT_0314f340;
  if (uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = &DAT_0314b340 + uVar1 * 8;
    if ((ushort)DAT_0314f340 == DAT_0314f340._2_2_) {
      DAT_0314f340._0_2_ = 0xffff;
    }
    else {
      DAT_0314f340._0_2_ = *puVar2;
    }
    puVar2[0] = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined4 *)(&DAT_0314b348 + uVar1 * 0x10) = DAT_03214ce8;
    DAT_0314f340._4_4_ = DAT_0314f340._4_4_ + 1;
  }
  return (int)puVar2 + 0xfceb4cc0U >> 4 & 0xffff;
}




void FUN_00ceb2a8(undefined8 *param_1,uint param_2)

{
  *(undefined8 *)(&DAT_0314b340 + (ulong)param_2 * 8) = *param_1;
  *(undefined4 *)(&DAT_0314b348 + (ulong)param_2 * 0x10) = *(undefined4 *)(param_1 + 1);
  return;
}




void FUN_00ceb2c8(short param_1)

{
  short sVar1;
  short sVar2;
  ulong uVar3;
  
  sVar1 = param_1;
  sVar2 = param_1;
  if ((short)DAT_0314f340 != -1) {
    uVar3 = (ulong)DAT_0314f340._2_2_;
    DAT_0314f340._2_2_ = param_1;
    (&DAT_0314b340)[uVar3 * 8] = param_1;
    sVar1 = (short)DAT_0314f340;
    sVar2 = DAT_0314f340._2_2_;
  }
  DAT_0314f340._2_2_ = sVar2;
  DAT_0314f340._0_2_ = sVar1;
  DAT_0314f340._4_4_ = DAT_0314f340._4_4_ + -1;
  return;
}




undefined2 * FUN_00ceb334(ulong param_1)

{
  return &DAT_0314b340 + (param_1 & 0xffffffff) * 8;
}




void FUN_00ceb344(undefined4 param_1)

{
  DAT_0314b330 = param_1;
  return;
}




void FUN_00ceb350(void)

{
  DAT_0314b330 = DAT_0314b330 + 1;
  return;
}




undefined4 FUN_00ceb364(void)

{
  return DAT_0314b330;
}




void FUN_00ceb370(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280f298;
  param_1[1] = 0;
  param_1[0x8002] = 0;
  FUN_00e784ec(param_1 + 0x8003);
  return;
}




void FUN_00ceb3a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280f298;
  FUN_00e786d4(param_1 + 0x8003);
  return;
}




void FUN_00ceb3c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280f298;
  FUN_00e786d4(param_1 + 0x8003);
  operator_delete(param_1);
  return;
}




void FUN_00ceb408(long param_1)

{
  FUN_00e78608(param_1 + 0x40018,1,"DispatchQueue_PacketRecorder");
  FUN_00e78b80(param_1 + 0x40018);
  *(undefined8 *)(param_1 + 0x40010) = 0;
  return;
}




void FUN_00ceb45c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(param_1 + 0x40018);
  if ((uVar1 & 1) != 0) {
    FUN_00e78724(param_1 + 0x40018);
    return;
  }
  return;
}




void FUN_00ceb49c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_00ceb4a4(long param_1,ulong param_2)

{
  FUN_00ceb524(param_1,1);
  if ((param_2 & 1) != 0) {
    FUN_00e7893c(param_1 + 0x40018);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




void FUN_00ceb4e4(long param_1,ulong param_2)

{
  FUN_00ceb524(param_1,1);
  if ((param_2 & 1) != 0) {
    FUN_00e7893c(param_1 + 0x40018);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




void FUN_00ceb524(long param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  
  FUN_00e7893c(param_1 + 0x40018);
  *(undefined8 *)(param_1 + 0x40110) = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 0x40118) = param_1 + (long)*(int *)(param_1 + 0x40014) * 0x20000 + 0x10;
  *(undefined4 *)(param_1 + 0x40120) = *(undefined4 *)(param_1 + 0x40010);
  *(byte *)(param_1 + 0x40124) = param_2 & 1;
  FUN_00e78ecc(param_1 + 0x40018,FUN_00ceb6d4);
  *(undefined4 *)(param_1 + 0x40010) = 0;
  iVar2 = *(int *)(param_1 + 0x40014);
  uVar1 = iVar2 + 2;
  if (-1 < iVar2 + 1) {
    uVar1 = iVar2 + 1;
  }
  *(uint *)(param_1 + 0x40014) = (iVar2 + 1) - (uVar1 & 0xfffffffe);
  return;
}




void FUN_00ceb5f4(long param_1)

{
  FUN_00e78714(param_1 + 0x40018);
  return;
}




bool FUN_00ceb604(long param_1)

{
  return *(long *)(param_1 + 8) != 0;
}




void FUN_00ceb614(uint param_1,long param_2,void *param_3,uint param_4)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  piVar2 = (int *)(param_2 + 0x40010);
  iVar5 = *piVar2;
  uVar3 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  uVar4 = (param_4 & 0xff00ff00) >> 8 | (param_4 & 0xff00ff) << 8;
  if (0x1ffff < (int)(iVar5 + param_4 + 8)) {
    FUN_00ceb524(param_2,0);
    iVar5 = *piVar2;
  }
  lVar1 = param_2 + (long)*(int *)(param_2 + 0x40014) * 0x20000 + 0x10;
  *(uint *)(lVar1 + iVar5) = uVar3 >> 0x10 | uVar3 << 0x10;
  *(uint *)(lVar1 + *piVar2 + 4) = uVar4 >> 0x10 | uVar4 << 0x10;
  memmove((void *)(lVar1 + *piVar2 + 8),param_3,(ulong)param_4);
  *piVar2 = *piVar2 + param_4 + 8;
  return;
}




ulong FUN_00ceb6d4(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00e6af10(param_1[1],*(undefined4 *)(param_1 + 2),1,*param_1);
  if (*(char *)((long)param_1 + 0x14) != '\0') {
    uVar1 = fclose((FILE *)*param_1);
    return (ulong)uVar1;
  }
  return uVar2;
}




long FUN_00ceb718(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = 0;
  if (plVar2 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if ((lVar3 == 0) ||
         ((uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 != 0x1f &&
          (*(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)))) {
        FUN_00965940(param_1);
        lVar3 = 0;
      }
    }
    else {
      *param_1 = 0;
      lVar3 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
    }
  }
  return lVar3;
}




long FUN_00ceb7b0(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = 0;
  if (plVar2 != (long *)0x0) {
    if ((int)param_1[1] != (int)plVar2[1]) {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
      return 0;
    }
    lVar3 = (**(code **)(*plVar2 + 0x10))();
    if ((lVar3 == 0) ||
       ((uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 != 0x1f &&
        (*(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)))) {
      lVar3 = 0;
    }
  }
  return lVar3;
}




void FUN_00ceb838(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  FUN_00e70510(param_1 + 2);
  FUN_00e70510(param_1 + 4);
  FUN_00e70510(param_1 + 6);
  memset(param_1 + 8,0,0x48);
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x8c) = 0xffff;
  FUN_00d9ff2c(param_1 + 0x12);
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0xff000000ff;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(ulong *)((long)param_1 + 0xbc) =
       *(ulong *)((long)param_1 + 0xbc) & 0xe000000000000000 | 0x10000200ffffffff;
  return;
}




void FUN_00ceb8d8(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    *param_1 = 0;
  }
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    operator_delete((void *)param_1[0x10]);
  }
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    operator_delete((void *)param_1[0xd]);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
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
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ceb964(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = operator_new__(0xc88);
  *puVar1 = 0x10;
  lVar2 = 8;
  do {
    FUN_00ceb838((long)puVar1 + lVar2);
    lVar2 = lVar2 + 200;
  } while (lVar2 != 0xc88);
  DAT_0314f358 = 1;
  _DAT_0314f370 = 0;
  DAT_0314f378 = 0;
  DAT_0314f350 = puVar1 + 1;
  FUN_00ceb9e4();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ceb9d4(void)

{
  _DAT_0314f370 = 0;
  DAT_0314f378 = 0;
  return;
}




void FUN_00ceb9e4(void)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 local_70 [2];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (DAT_0314f358 == '\x01') {
    uVar6 = 0;
    lVar7 = 0xbc;
    lVar5 = DAT_0314f350;
    do {
      *(undefined4 *)(lVar5 + lVar7 + -0xb4) = 0xffffffff;
      FUN_00910394(lVar5 + lVar7 + -0xac,&DAT_03210450);
      FUN_00910394(DAT_0314f350 + lVar7 + -0x9c,&DAT_03210450);
      FUN_00910394(DAT_0314f350 + lVar7 + -0x8c,&DAT_03210450);
      FUN_008fce60(DAT_0314f350 + lVar7 + -0x7c,&DAT_0320ffa8);
      FUN_008fce60(DAT_0314f350 + lVar7 + -100,&DAT_0320ffa8);
      FUN_008fce60(DAT_0314f350 + lVar7 + -0x4c,&DAT_0320ffa8);
      lVar5 = DAT_0314f350 + lVar7;
      *(undefined4 *)(lVar5 + -0x34) = 0;
      *(undefined4 *)(lVar5 + -0x30) = 0xffff;
      FUN_00d9ff2c(local_70);
      lVar5 = DAT_0314f350;
      puVar1 = (ulong *)(DAT_0314f350 + lVar7);
      *(undefined4 *)((long)puVar1 + -0x2c) = local_70[0];
      *puVar1 = *puVar1 & 0xe000000000000000 | 0x1000020000000000;
      if (*(long *)((long)puVar1 + -0xbc) != 0) {
        FUN_00ceec50();
        lVar5 = DAT_0314f350;
      }
      lVar2 = lVar5 + lVar7;
      *(undefined8 *)(lVar2 + -0x18) = 0;
      *(undefined8 *)(lVar2 + -0x20) = 0;
      *(undefined8 *)(lVar2 + -8) = 0;
      *(undefined8 *)(lVar2 + -0x10) = 0;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 200;
      uVar3 = 0x10;
      if (DAT_0314f358 == '\0') {
        uVar3 = 0;
      }
    } while (uVar6 < uVar3);
  }
  DAT_0314f360 = 0;
  DAT_0314f368 = 0;
  DAT_0314f35c = 0;
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cebb98(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = DAT_0314f350;
  DAT_0314f358 = 0;
  if (DAT_0314f350 != 0) {
    plVar3 = (long *)(DAT_0314f350 + -8);
    lVar2 = *plVar3;
    if (lVar2 != 0) {
      lVar2 = lVar2 * 200;
      do {
        FUN_00ceb8d8(lVar1 + lVar2 + -200);
        lVar2 = lVar2 + -200;
      } while (lVar2 != 0);
    }
    operator_delete__(plVar3);
  }
  DAT_0314f350 = 0;
  DAT_0314f35c = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cebc08(void)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int *piVar8;
  
  lVar2 = DAT_0314f350;
  uVar3 = (ulong)DAT_0314f35c;
  _DAT_0314f370 = 0;
  DAT_0314f378 = 0;
  if (DAT_0314f35c != 0) {
    uVar4 = 0;
    lVar5 = DAT_0314f350 + 0xbc;
    do {
      if (*(int *)(lVar5 + -0xb4) != -1) {
        uVar6 = (ulong)*(ushort *)(lVar5 + 6) & 0xf;
        (&DAT_0314f370)[uVar6] = (&DAT_0314f370)[uVar6] + '\x01';
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 200;
    } while (uVar4 < uVar3);
  }
  uVar3 = 0;
  bVar1 = DAT_0314f358 ^ 1;
  uVar4 = 0x10;
  if (DAT_0314f358 == 0) {
    uVar4 = 0;
  }
  do {
    if ((&DAT_0314f370)[uVar3] != '\0' && (bVar1 & 1) == 0) {
      uVar6 = 0;
      iVar7 = 1;
      piVar8 = (int *)(lVar2 + 0x88);
      do {
        if ((piVar8[-0x20] != -1) && (((ulong)*(ushort *)((long)piVar8 + 0x3a) & 0xf) == uVar3)) {
          *piVar8 = iVar7;
          iVar7 = iVar7 + 1;
        }
        uVar6 = uVar6 + 1;
        piVar8 = piVar8 + 0x32;
      } while (uVar6 < uVar4);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x10);
  return;
}




void FUN_00cebcf4(void)

{
  return;
}




void FUN_00cebcf8(long param_1)

{
  ushort uVar1;
  void *pvVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  if (*(int *)(param_1 + 8) != -1) {
    if (DAT_0314f358 == '\x01') {
      uVar5 = 0;
      plVar7 = DAT_0314f350;
      do {
        if ((int)plVar7[1] == *(int *)(param_1 + 8)) {
          if (plVar7 != (long *)0x0) goto LAB_00cebda0;
          break;
        }
        uVar5 = uVar5 + 1;
        plVar7 = plVar7 + 0x19;
      } while (uVar5 < 0x10);
    }
    uVar5 = (ulong)DAT_0314f35c;
    uVar3 = 0x10;
    if (DAT_0314f358 == '\0') {
      uVar3 = 0;
    }
    if (DAT_0314f35c < uVar3) {
      DAT_0314f35c = DAT_0314f35c + 1;
      plVar7 = DAT_0314f350 + uVar5 * 0x19;
      if (plVar7 != (long *)0x0) {
LAB_00cebda0:
        *(undefined4 *)(plVar7 + 0x11) = 0xffffffff;
        *(ulong *)((long)plVar7 + 0xbc) = *(ulong *)((long)plVar7 + 0xbc) & 0xfa6fffffffffffff;
        if (*plVar7 == 0) {
          pvVar2 = operator_new(0x278);
          FUN_00cee334();
          *plVar7 = (long)pvVar2;
        }
        *(undefined4 *)(plVar7 + 1) = *(undefined4 *)(param_1 + 8);
        FUN_00910394(plVar7 + 2,param_1 + 0x10);
        FUN_00910394(plVar7 + 4,param_1 + 0x20);
        FUN_00910394(plVar7 + 6,param_1 + 0x30);
        FUN_008fce60(plVar7 + 0xb,param_1 + 0x58);
        FUN_008fce60(plVar7 + 8,param_1 + 0x40);
        uVar6 = *(ulong *)((long)plVar7 + 0xbc);
        lVar4 = 0;
        *(undefined4 *)((long)plVar7 + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
        *(undefined4 *)(plVar7 + 0x12) = *(undefined4 *)(param_1 + 0x90);
        uVar1 = *(ushort *)(param_1 + 0xbc);
        *(ulong *)((long)plVar7 + 0xbc) = uVar6 & 0xffffffffffff0000 | (ulong)uVar1;
        uVar5 = (ulong)uVar1 | (*(ulong *)(param_1 + 0xbc) >> 0x10 & 0xff) << 0x10;
        *(ulong *)((long)plVar7 + 0xbc) = uVar6 & 0xffffffffff000000 | uVar5;
        uVar5 = uVar5 | (*(ulong *)(param_1 + 0xbc) >> 0x18 & 0xff) << 0x18;
        *(ulong *)((long)plVar7 + 0xbc) = uVar6 & 0xffffffff00000000 | uVar5;
        uVar5 = uVar5 | (*(ulong *)(param_1 + 0xbc) >> 0x20 & 0xff) << 0x20;
        *(ulong *)((long)plVar7 + 0xbc) = uVar6 & 0xffffff0000000000 | uVar5;
        uVar5 = uVar5 | (*(ulong *)(param_1 + 0xbc) >> 0x28 & 0xff) << 0x28;
        *(ulong *)((long)plVar7 + 0xbc) = uVar6 & 0xffff000000000000 | uVar5;
        uVar5 = uVar5 | (*(ulong *)(param_1 + 0xbc) >> 0x30 & 0xf) << 0x30;
        *(ulong *)((long)plVar7 + 0xbc) = uVar6 & 0xfff0000000000000 | uVar5;
        uVar5 = uVar6 & 0x10000000000000 | uVar5 | (*(ulong *)(param_1 + 0xbc) >> 0x35 & 1) << 0x35;
        *(ulong *)((long)plVar7 + 0xbc) = uVar6 & 0xffc0000000000000 | uVar5;
        uVar5 = uVar5 | (*(ulong *)(param_1 + 0xbc) >> 0x36 & 1) << 0x36;
        *(ulong *)((long)plVar7 + 0xbc) = uVar6 & 0xff80000000000000 | uVar5;
        uVar5 = uVar6 & 0x180000000000000 | uVar5 | (*(ulong *)(param_1 + 0xbc) >> 0x39 & 1) << 0x39
        ;
        *(ulong *)((long)plVar7 + 0xbc) = uVar6 & 0xfc00000000000000 | uVar5;
        uVar5 = uVar6 & 0x400000000000000 | uVar5 | (*(ulong *)(param_1 + 0xbc) >> 0x3b & 1) << 0x3b
        ;
        *(ulong *)((long)plVar7 + 0xbc) = uVar6 & 0xf000000000000000 | uVar5;
        *(ulong *)((long)plVar7 + 0xbc) =
             uVar6 & 0xe000000000000000 | uVar5 | (*(ulong *)(param_1 + 0xbc) >> 0x3c & 1) << 0x3c;
        do {
          *(undefined4 *)((long)plVar7 + lVar4 + 0x9c) = *(undefined4 *)(param_1 + 0x9c + lVar4);
          lVar4 = lVar4 + 4;
        } while (lVar4 != 0x20);
        FUN_00cebc08();
        return;
      }
    }
  }
  return;
}




long FUN_00cebf1c(int param_1)

{
  long lVar1;
  uint uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        return lVar1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 0;
}




void FUN_00cebf7c(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350 + 0x10;
    do {
      if (*(int *)(lVar1 + -8) == param_1) {
        if (lVar1 == 0x10) {
          return;
        }
        FUN_00910394(lVar1);
        return;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return;
}




void FUN_00cebfe4(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350 + 0x20;
    do {
      if (*(int *)(lVar1 + -0x18) == param_1) {
        if (lVar1 == 0x20) {
          return;
        }
        FUN_00910394(lVar1);
        return;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return;
}

