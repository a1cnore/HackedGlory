// functions/00f00 — 56 functions
#include "libGameKindred.h"




void FUN_00f00058(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00f00064(undefined8 param_1)

{
  void *pvVar1;
  
  FUN_00f134ec();
  pvVar1 = operator_new(0x20030);
  FUN_00efff58();
  DAT_03210d00 = pvVar1;
  pvVar1 = operator_new(0x4c0);
  FUN_00f03438();
  DAT_03210ce8 = pvVar1;
  pvVar1 = operator_new(0x15b08);
  FUN_00f04dc4();
  DAT_03210cf0 = pvVar1;
  pvVar1 = operator_new(400);
  FUN_00f00b14(pvVar1,param_1);
  DAT_03210cf8 = pvVar1;
  FUN_00f072c4(0x400);
  FUN_00f03314();
  FUN_00f00628();
  return;
}




void FUN_00f000fc(void)

{
  void *pvVar1;
  
  FUN_00f01b9c();
  FUN_00f00674();
  FUN_00f03344();
  FUN_00f072fc();
  if (DAT_03210cf0 != (long *)0x0) {
    (**(code **)(*DAT_03210cf0 + 8))();
  }
  DAT_03210cf0 = (long *)0x0;
  if (DAT_03210cf8 != (long *)0x0) {
    (**(code **)(*DAT_03210cf8 + 8))();
  }
  pvVar1 = DAT_03210ce8;
  DAT_03210cf8 = (long *)0x0;
  if (DAT_03210ce8 != (void *)0x0) {
    thunk_FUN_00f13d08(DAT_03210ce8);
    operator_delete(pvVar1);
  }
  DAT_03210ce8 = (void *)0x0;
  if (DAT_03210d00 != (long *)0x0) {
    (**(code **)(*DAT_03210d00 + 8))();
  }
  DAT_03210d00 = (long *)0x0;
  FUN_00f13548();
  return;
}




void FUN_00f001a0(undefined8 param_1)

{
  FUN_00f01b9c();
  FUN_00f039f0(param_1,DAT_03210ce8);
  FUN_00f01b9c();
  return;
}




void FUN_00f001d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  FUN_00f034c8(DAT_03210ce8);
  lVar1 = 0;
  do {
    if (*(code **)((long)&DAT_03210d08 + lVar1) != (code *)0x0) {
      (**(code **)((long)&DAT_03210d08 + lVar1))
                (param_1,param_2,*(undefined8 *)((long)&DAT_03210d10 + lVar1));
    }
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x100);
  return;
}




void FUN_00f00238(undefined8 param_1,undefined8 param_2)

{
  FUN_00f034d4(DAT_03210ce8,param_1,param_2);
  return;
}




void FUN_00f00250(void)

{
  FUN_00f034e8(DAT_03210ce8);
  return;
}




void FUN_00f0025c(undefined8 param_1,undefined8 param_2)

{
  FUN_00f034f4(DAT_03210ce8,param_1,param_2);
  return;
}




void FUN_00f00274(void)

{
  FUN_00f03508(DAT_03210ce8);
  return;
}




void FUN_00f00280(void)

{
  FUN_00f03510(DAT_03210ce8);
  return;
}




void FUN_00f0028c(void)

{
  FUN_00f03518(DAT_03210ce8);
  return;
}




void FUN_00f00298(undefined8 param_1,undefined8 param_2)

{
  FUN_00f03524(DAT_03210ce8,param_1,param_2);
  return;
}




void FUN_00f002b0(void)

{
  FUN_00f03538(DAT_03210ce8);
  return;
}




void FUN_00f002bc(void)

{
  FUN_00f03540(DAT_03210ce8);
  return;
}




void FUN_00f002c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00f03548(DAT_03210ce8);
  fVar3 = (float)param_1;
  fVar2 = (float)param_2;
  if ((*(float *)(lVar1 + 0x48) == fVar3) && (*(float *)(lVar1 + 0x4c) == fVar2)) {
    return;
  }
  lVar1 = FUN_00f03548(DAT_03210ce8);
  if ((*(float *)(lVar1 + 0x48) != fVar3) || (*(float *)(lVar1 + 0x4c) != fVar2)) {
    *(float *)(lVar1 + 0x48) = fVar3;
    *(float *)(lVar1 + 0x4c) = fVar2;
    FUN_0091ada4();
  }
  FUN_00f0733c(param_1,param_2);
  FUN_00f073ac();
  FUN_00f05920(param_1,param_2,DAT_03210cf0);
  return;
}




void FUN_00f0036c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00f03548(DAT_03210ce8);
  uVar1 = *(undefined4 *)(lVar2 + 0x4c);
  *param_1 = *(undefined4 *)(lVar2 + 0x48);
  *param_2 = uVar1;
  return;
}




void FUN_00f003a8(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  
  uVar2 = 0;
  plVar1 = &DAT_03210d08;
  do {
    if (*plVar1 == 0) {
      *plVar1 = param_1;
      plVar1[1] = param_2;
      return;
    }
    uVar2 = uVar2 + 1;
    plVar1 = plVar1 + 2;
  } while (uVar2 < 0x10);
  return;
}




void FUN_00f003d8(long param_1)

{
  long *plVar1;
  uint uVar2;
  
  uVar2 = 0;
  plVar1 = &DAT_03210d08;
  do {
    if (*plVar1 == param_1) {
      *plVar1 = 0;
      plVar1[1] = 0;
      return;
    }
    uVar2 = uVar2 + 1;
    plVar1 = plVar1 + 2;
  } while (uVar2 < 0x10);
  return;
}




void FUN_00f0040c(undefined8 param_1,uint param_2)

{
  FUN_00f03550(DAT_03210ce8,param_1,param_2 & 1);
  return;
}




void FUN_00f00424(undefined4 param_1)

{
  FUN_00f035b8(DAT_03210ce8,param_1);
  return;
}




void FUN_00f00438(undefined8 param_1)

{
  FUN_00f0366c(DAT_03210ce8,param_1);
  return;
}




void FUN_00f0044c(undefined8 param_1,undefined8 param_2)

{
  FUN_00f036ac(DAT_03210ce8,param_1,param_2);
  return;
}




void FUN_00f00464(undefined8 param_1)

{
  FUN_00f0385c(DAT_03210ce8,param_1);
  return;
}




void FUN_00f00478(undefined8 param_1)

{
  FUN_00f038bc(DAT_03210ce8,param_1);
  return;
}




void FUN_00f0048c(void)

{
  FUN_00f03918(DAT_03210ce8);
  return;
}




void FUN_00f00498(undefined8 param_1)

{
  FUN_00f03958(DAT_03210ce8,param_1);
  return;
}




undefined8 FUN_00f004ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_03210ce8 != 0) {
    uVar1 = FUN_00f0398c(DAT_03210ce8,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_00f004cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_03210ce8 != 0) {
    uVar1 = FUN_00f039c0(DAT_03210ce8,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_00f004ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_03210ce8 != 0) {
    uVar1 = FUN_00f039c8(DAT_03210ce8,param_1);
    return uVar1;
  }
  return 0;
}




void FUN_00f0050c(undefined8 param_1)

{
  FUN_00f039d8(DAT_03210ce8,param_1);
  return;
}




void FUN_00f00520(undefined8 param_1)

{
  FUN_0199c3ec(param_1,0);
  FUN_00f00538();
  return;
}




void FUN_00f00538(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00f006a4();
  if ((uVar1 & 1) == 0) {
    FUN_00f0463c(DAT_03210ce8,param_1);
    FUN_00f07454();
    uVar1 = FUN_00f07398();
    if ((uVar1 & 1) != 0) {
      FUN_00f07460(param_1);
      return;
    }
  }
  else {
    FUN_00f0072c(param_1);
    uVar1 = FUN_00f07398();
    if ((uVar1 & 1) != 0) {
      FUN_00f007e0(param_1);
      return;
    }
  }
  return;
}




undefined1 FUN_00f005a8(undefined8 param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_00f05224(DAT_03210cf0,param_1);
  return uVar1;
}




void FUN_00f005d0(undefined1 param_1)

{
  FUN_00f056ac(DAT_03210cf0,param_1);
  return;
}




void FUN_00f005e4(undefined1 param_1)

{
  FUN_00f04f94(DAT_03210cf0,param_1);
  return;
}




void FUN_00f005f8(undefined1 param_1)

{
  FUN_00f05848(DAT_03210cf0,param_1);
  return;
}




undefined8 FUN_00f0061c(void)

{
  return DAT_03210ce8;
}




void FUN_00f00628(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78248();
  if ((uVar1 & 1) != 0) {
    FUN_00e78608(&DAT_03210e18,1,"DispatchQueue_Composite");
    FUN_00e78b80(&DAT_03210e18);
    return;
  }
  return;
}




void FUN_00f00674(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_03210e18);
  if ((uVar1 & 1) != 0) {
    FUN_00e78724(&DAT_03210e18);
    return;
  }
  return;
}




void FUN_00f006a4(void)

{
  FUN_00e78714(&DAT_03210e18);
  return;
}




void FUN_00f006b0(undefined8 param_1)

{
  ulong uVar1;
  undefined4 uStack_14;
  
  uVar1 = FUN_00e78714(&DAT_03210e18);
  if ((uVar1 & 1) != 0) {
    FUN_00e78ecc(&DAT_03210e18,FUN_00f00708,CONCAT44(uStack_14,(int)param_1));
    return;
  }
  FUN_00f0061c();
  FUN_00f039f0(param_1);
  return;
}




void FUN_00f00708(undefined4 param_1)

{
  FUN_00f0061c();
  FUN_00f039f0(param_1);
  return;
}




void FUN_00f0072c(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e78714(&DAT_03210e18);
  if ((uVar1 & 1) != 0) {
    FUN_00f00784();
    FUN_00e78ecc(&DAT_03210e18,FUN_00f007bc,param_1);
    return;
  }
  uVar2 = FUN_00f0061c();
  FUN_00f0463c(uVar2,param_1);
  return;
}




void FUN_00f00784(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_03210e18);
  if ((uVar1 & 1) != 0) {
    FUN_00e78f64(&DAT_03210e18,0,0);
    return;
  }
  return;
}




void FUN_00f007bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f0061c();
  FUN_00f0463c(uVar1,param_1);
  return;
}




void FUN_00f007e0(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_03210e18);
  if ((uVar1 & 1) != 0) {
    FUN_00f00784();
    FUN_00e78ecc(&DAT_03210e18,FUN_00f0084c,param_1);
    return;
  }
  FUN_00f07454();
  uVar1 = FUN_00f07398();
  if ((uVar1 & 1) != 0) {
    FUN_00f07460(param_1);
    return;
  }
  return;
}




void FUN_00f0084c(undefined8 param_1)

{
  FUN_00f07454();
  FUN_00f07460(param_1);
  return;
}




void FUN_00f00870(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_03210e18);
  if ((uVar1 & 1) != 0) {
    FUN_00e7893c(&DAT_03210e18);
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f008a0(long param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  cVar1 = *(char *)(*(long *)(param_1 + 0x20) + 8);
  uVar7 = DAT_03210f20;
  if (((cVar1 == '\x02') || (uVar7 = DAT_03210f18, cVar1 == '\x01')) ||
     (uVar7 = DAT_03210f10, cVar1 == '\0')) {
    FUN_00f01040(uVar7);
  }
  puVar8 = *(undefined8 **)(param_1 + 0x20);
  puVar9 = (undefined4 *)*puVar8;
  if ((puVar9 != (undefined4 *)0x0) && (DAT_032157d0 != puVar9)) {
    DAT_032157d0 = puVar9;
    glUseProgram(*puVar9);
    puVar8 = *(undefined8 **)(param_1 + 0x20);
  }
  pbVar10 = (byte *)((long)puVar8 + 9);
  if (*pbVar10 != 0) {
    uVar11 = 0;
    do {
      if (puVar8[uVar11 + 2] != 0) {
        FUN_00f01264(uVar11 & 0xffffffff);
        puVar8 = *(undefined8 **)(param_1 + 0x20);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(byte *)((long)puVar8 + 9));
    pbVar10 = (byte *)((long)puVar8 + 9);
  }
  if (*(char *)((long)puVar8 + 10) != '\0') {
    uStack_40 = 0;
    local_48 = 0;
    uStack_50 = 0;
    local_58 = 0;
    uStack_60 = 0;
    local_68 = 0;
    uStack_70 = 0;
    local_78 = 0;
    bVar2 = *(byte *)((long)puVar8 + 10);
    if ((ulong)bVar2 != 0) {
      bVar3 = *pbVar10;
      uVar11 = 0;
      do {
        *(undefined4 *)((long)&local_78 + uVar11 * 4) =
             *(undefined4 *)((long)puVar8 + uVar11 * 4 + (ulong)bVar3 * 8 + 0x10);
        uVar11 = uVar11 + 1;
      } while (uVar11 < bVar2);
    }
    DAT_03215378 = &local_78;
    DAT_03215380 = 1;
  }
  uVar11 = 0;
  do {
    if ((float)(&DAT_03215478)[uVar11] != (float)(&DAT_01e632b0)[uVar11]) {
      DAT_0321561c = DAT_0321561c | 0x38;
      break;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 0x10);
  DAT_0321561c = DAT_0321561c | 0xb8;
  uRam00000000032154a0 = 0x3f800000;
  _DAT_03215498 = 0;
  uRam00000000032154b0 = 0x3f80000000000000;
  _DAT_032154a8 = 0;
  uRam0000000003215480 = 0;
  _DAT_03215478 = 0x3f800000;
  uRam0000000003215490 = 0;
  _DAT_03215488 = 0x3f80000000000000;
  uRam00000000032154e0 = 0x3f800000;
  _DAT_032154d8 = 0;
  uRam00000000032154f0 = 0x3f80000000000000;
  _DAT_032154e8 = 0;
  uRam00000000032154c0 = 0;
  _DAT_032154b8 = 0x3f800000;
  uRam00000000032154d0 = 0;
  _DAT_032154c8 = 0x3f80000000000000;
  uVar4 = *(undefined2 *)(param_1 + 0x30);
  uVar5 = *(undefined2 *)(param_1 + 0x32);
  FUN_00f013dc(*(undefined8 *)(param_1 + 0x28),0xffff,0);
  FUN_00f01570(DAT_032157d0);
  glDrawArrays(4,uVar4,uVar5);
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f00a94(int *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  
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
  lVar3 = FUN_00f016d4(param_1 + (ulong)(uint)param_1[10] * 4 + 2,0x3f);
  puVar4 = (undefined8 *)(lVar3 + 7U & 0xfffffffffffffff8);
  *param_1 = 0;
  puVar4[2] = 0;
  puVar4[1] = 0;
  puVar4[4] = 0;
  puVar4[3] = 0;
  *puVar4 = &PTR_FUN_028253a8;
  puVar4[5] = param_2;
  *(undefined4 *)(puVar4 + 6) = 0;
  return;
}




void FUN_00f00b14(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  
  FUN_0199b638();
  param_1[2] = param_2;
  lVar4 = 0x18;
  *param_1 = &PTR_FUN_02825360;
  do {
    FUN_019a033c((long)param_1 + lVar4);
    lVar4 = lVar4 + 0x70;
  } while (lVar4 != 0x168);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2e] = 0;
  lVar4 = 0x18;
  uVar3 = DAT_03210f10 & 0xffffffff0000fc3c;
  DAT_03210f10 = uVar3 | 0x1010380;
  DAT_03210f18 = uVar3 | 0x31310380;
  DAT_03210f20 = uVar3 | 0x11110380;
  do {
    lVar1 = (long)param_1 + lVar4;
    FUN_019a0440(lVar1,0x7800);
    uVar2 = FUN_019a044c(lVar1,0,0xb4000,6,0);
    FUN_019a06a4(lVar1,0,uVar2,4,3,0,1);
    FUN_019a06a4(lVar1,4,uVar2,5,4,0xc,1);
    FUN_019a06a4(lVar1,5,uVar2,4,2,0x10,1);
    lVar4 = lVar4 + 0x70;
  } while (lVar4 != 0x168);
  return;
}




void FUN_00f00c68(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0x18;
  *param_1 = &PTR_FUN_02825360;
  do {
    FUN_019a0378((long)param_1 + lVar1);
    lVar1 = lVar1 + 0x70;
  } while (lVar1 != 0x168);
  lVar1 = 0xf8;
  do {
    FUN_019a0368((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x70;
  } while (lVar1 != -0x58);
  FUN_0199b65c(param_1);
  return;
}




void FUN_00f00cc8(void *param_1)

{
  FUN_00f00c68();
  operator_delete(param_1);
  return;
}




void FUN_00f00cec(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  ulong uVar19;
  long *plVar20;
  int *piVar21;
  long local_138;
  int local_130;
  int iStack_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 auStack_118 [24];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  iVar5 = 0x7800 - *(int *)(param_1 + 0x168);
  if (iVar5 < 1) goto LAB_00f00f50;
  local_130 = 0;
  local_138 = *(long *)(param_1 + 0x180) + (ulong)(uint)(*(int *)(param_1 + 0x168) * 0x18);
  plVar20 = (long *)(param_5 + -8);
  iStack_12c = iVar5;
  (**(code **)(*plVar20 + 0x10))(plVar20,&local_138);
  iVar5 = local_130;
  if (local_130 == 0) goto LAB_00f00f50;
  local_128 = 0;
  local_120 = 0;
  local_128 = (**(code **)(*plVar20 + 0x20))(plVar20);
  uVar8 = (**(code **)(*plVar20 + 0x28))(plVar20);
  local_120 = CONCAT71(local_120._1_7_,uVar8);
  bVar9 = (**(code **)(*plVar20 + 0x18))(plVar20,auStack_118);
  local_120._0_2_ = CONCAT11(bVar9,(undefined1)local_120);
  bVar9 = (**(code **)(*plVar20 + 0x30))(plVar20,auStack_118 + bVar9);
  uVar7 = local_120;
  local_120._0_3_ = CONCAT12(bVar9,(undefined2)local_120);
  sVar4 = (short)iVar5;
  if (*(long *)(param_1 + 0x170) == param_4) {
    if (*(long *)(param_1 + 0x178) == 0) goto LAB_00f00de4;
    lVar11 = *(long *)(*(long *)(param_1 + 0x178) + 0x20);
    local_120._1_1_ = SUB81(uVar7,1);
    iVar10 = (uint)*(byte *)(lVar11 + 9) * 8 + (uint)*(byte *)(lVar11 + 10) * 4;
    uVar16 = (uint)local_120._1_1_;
    if ((iVar10 != (uint)bVar9 * 4 + uVar16 * 8) ||
       (iVar10 = FUN_00e6aee0(lVar11,&local_128,iVar10 + 0x10), iVar10 != 0)) goto LAB_00f00de4;
    *(short *)(*(long *)(param_1 + 0x178) + 0x32) =
         *(short *)(*(long *)(param_1 + 0x178) + 0x32) + sVar4;
  }
  else {
    *(long *)(param_1 + 0x170) = param_4;
    *(undefined8 *)(param_1 + 0x178) = 0;
LAB_00f00de4:
    lVar11 = FUN_00f00a94(*(undefined8 *)(param_1 + 0x10),
                          param_1 + (ulong)*(uint *)(param_1 + 0x188) * 0x70 + 0x18);
    piVar21 = *(int **)(param_1 + 0x10);
    do {
      while (*piVar21 != 0) {
        ClearExclusiveLocal();
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar3) {
        *piVar21 = 100;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar12 = FUN_00f016d4(piVar21 + (ulong)(uint)piVar21[10] * 4 + 2,
                          (uint)local_120._1_1_ * 8 + (uint)local_120._2_1_ * 4 + 0x17);
    *piVar21 = 0;
    puVar13 = (undefined8 *)(lVar12 + 7U & 0xfffffffffffffff8);
    *(byte *)((long)puVar13 + 10) = local_120._2_1_;
    *(undefined2 *)(puVar13 + 1) = (undefined2)local_120;
    *puVar13 = local_128;
    uVar14 = local_120 >> 8 & 0xff;
    if (uVar14 == 0) {
      lVar12 = 0;
    }
    else {
      puVar15 = puVar13 + 2;
      puVar17 = auStack_118;
      uVar19 = uVar14;
      do {
        uVar19 = uVar19 - 1;
        *puVar15 = *puVar17;
        puVar15 = puVar15 + 1;
        puVar17 = puVar17 + 1;
      } while (uVar19 != 0);
      lVar12 = uVar14 << 3;
    }
    uVar14 = (ulong)local_120._2_1_;
    if (uVar14 != 0) {
      puVar15 = puVar13 + (ulong)*(byte *)((long)puVar13 + 9) + 2;
      puVar18 = (undefined4 *)((long)auStack_118 + lVar12);
      do {
        uVar14 = uVar14 - 1;
        *(undefined4 *)puVar15 = *puVar18;
        puVar15 = (undefined8 *)((long)puVar15 + 4);
        puVar18 = puVar18 + 1;
      } while (uVar14 != 0);
    }
    *(undefined8 **)(lVar11 + 0x20) = puVar13;
    uVar1 = *(undefined4 *)(param_1 + 0x168);
    *(short *)(lVar11 + 0x32) = sVar4;
    *(short *)(lVar11 + 0x30) = (short)uVar1;
    *(long *)(param_1 + 0x178) = lVar11;
    FUN_0199bb10(param_6,lVar11);
  }
  *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + iVar5;
LAB_00f00f50:
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f00f80(long param_1)

{
  uint uVar1;
  
  uVar1 = (*(int *)(param_1 + 0x188) + 1U) % 3;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(uint *)(param_1 + 0x188) = uVar1;
  FUN_019a0748(param_1 + 0x18 + (ulong)uVar1 * 0x70,0x31,6);
  *(undefined8 *)(param_1 + 0x180) =
       *(undefined8 *)(param_1 + 0x18 + (ulong)*(uint *)(param_1 + 0x188) * 0x70 + 0x18);
  FUN_00f00870();
  return;
}




void thunk_FUN_00f00870(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_03210e18);
  if ((uVar1 & 1) != 0) {
    FUN_00e7893c(&DAT_03210e18);
    return;
  }
  return;
}

