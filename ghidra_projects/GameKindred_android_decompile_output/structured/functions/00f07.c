// functions/00f07 — 44 functions
#include "libGameKindred.h"




ulong FUN_00f07118(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  if (uVar1 < uVar2) {
    return 0xffffffff;
  }
  uVar3 = 0;
  if (uVar1 != uVar2) {
    uVar3 = (ulong)(uVar2 < uVar1);
  }
  return uVar3;
}




void FUN_00f07144(void *param_1,uint param_2,short *param_3,uint param_4,undefined4 *param_5,
                 ulong param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
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
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if ((param_6 & 1) != 0) {
    memset(param_1,0,(ulong)(param_2 * param_2));
  }
  local_88 = auStack_20090;
  local_90[0] = 0;
  local_80 = 0x20000;
  if (param_4 != 0) {
    plVar5 = (long *)0x0;
    fVar8 = (float)param_2;
    uVar6 = (ulong)param_4;
    sVar7 = -1;
    do {
      if ((plVar5 == (long *)0x0) || (sVar7 != *param_3)) {
        plVar5 = (long *)FUN_00f058b4(DAT_03210cf0);
        if ((*(int *)((long)plVar5 + 0x24) - 1U < 2) && (*plVar5 != 0)) {
          sVar7 = *param_3;
          goto LAB_00f07210;
        }
      }
      else {
LAB_00f07210:
        lVar3 = plVar5[6] + (ulong)(ushort)param_3[1] * 0x28;
        iVar4 = (int)(*(float *)(lVar3 + 0x18) * fVar8);
        iVar2 = (int)(*(float *)(lVar3 + 0x1c) * fVar8);
        FUN_00f1a218(*param_5,param_5[1],plVar5,(long)param_1 + (long)(int)(iVar4 + iVar2 * param_2)
                     ,(int)(*(float *)(lVar3 + 0x20) * fVar8) - iVar4,
                     (int)(*(float *)(lVar3 + 0x24) * fVar8) - iVar2,param_2,
                     (ulong)(ushort)param_3[1],local_90);
        local_90[0] = 0;
      }
      uVar6 = uVar6 - 1;
      param_3 = param_3 + 2;
    } while (uVar6 != 0);
    if ((local_80 < 0) && (local_88 != (undefined1 *)0x0)) {
      operator_delete__(local_88);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f072c4(undefined4 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x138);
  FUN_00f059e4(pvVar1,param_1);
  DAT_03210ff8 = pvVar1;
  return;
}




void FUN_00f072fc(void)

{
  void *pvVar1;
  
  FUN_00f00870();
  pvVar1 = DAT_03210ff8;
  if (DAT_03210ff8 != (void *)0x0) {
    FUN_00f05c70(DAT_03210ff8);
    operator_delete(pvVar1);
  }
  DAT_03210ff8 = (void *)0x0;
  return;
}




ulong FUN_00f0733c(undefined4 param_1,undefined4 param_2,ulong param_3)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  uint uVar2;
  
  lVar1 = DAT_03210ff8;
  if (DAT_03210ff8 != 0) {
    __mutex = (pthread_mutex_t *)(DAT_03210ff8 + 0x10c);
    pthread_mutex_lock(__mutex);
    *(undefined4 *)(lVar1 + 0x100) = param_1;
    *(undefined4 *)(lVar1 + 0x104) = param_2;
    uVar2 = pthread_mutex_unlock(__mutex);
    return (ulong)uVar2;
  }
  return param_3;
}




bool FUN_00f07398(void)

{
  return DAT_03210ff8 != 0;
}




void FUN_00f073ac(void)

{
  if (DAT_03210ff8 != 0) {
    FUN_00f05d6c(DAT_03210ff8,0,0);
    return;
  }
  return;
}




void FUN_00f073c8(undefined2 param_1)

{
  long lVar1;
  undefined2 local_30 [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = param_1;
  if (DAT_03210ff8 != 0) {
    FUN_00f05d6c(DAT_03210ff8,local_30,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f07428(undefined1 param_1,long param_2,int param_3,undefined4 param_4)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_00f061ac(DAT_03210ff8,param_1,param_2,param_3,param_4);
    return;
  }
  return;
}




void FUN_00f07454(void)

{
  FUN_00f06510(DAT_03210ff8);
  return;
}




void FUN_00f07460(undefined8 param_1)

{
  FUN_00f06fd8(DAT_03210ff8,param_1);
  return;
}




long FUN_00f07474(void)

{
  long lVar1;
  
  lVar1 = 0;
  if (DAT_03210ff8 != 0) {
    lVar1 = DAT_03210ff8 + 0xd8;
  }
  return lVar1;
}




uint FUN_00f0748c(long param_1,long param_2)

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




uint FUN_00f074c8(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(param_2 + 0xc) < *(int *)(param_1 + 0xc));
  if (*(int *)(param_1 + 0xc) < *(int *)(param_2 + 0xc)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}




uint FUN_00f074e0(ushort *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar2 = 0;
  iVar4 = 0;
  if ((int)(uint)*param_1 < param_3 + param_2) {
    iVar4 = 0;
    iVar5 = 0;
    uVar2 = 0;
    uVar6 = (uint)*param_1;
    do {
      uVar3 = (uint)param_1[1];
      if (uVar2 < uVar3) {
        param_1 = *(ushort **)(param_1 + 4);
        iVar4 = iVar4 + (uVar3 - uVar2) * iVar5;
        uVar8 = (uint)*param_1;
        uVar2 = uVar3;
        if ((int)uVar6 < param_2) {
          iVar7 = uVar8 - param_2;
        }
        else {
          iVar7 = uVar8 - uVar6;
        }
      }
      else {
        param_1 = *(ushort **)(param_1 + 4);
        uVar8 = (uint)*param_1;
        iVar1 = *param_1 - uVar6;
        iVar7 = param_3 - iVar5;
        if (iVar1 + iVar5 <= param_3) {
          iVar7 = iVar1;
        }
        iVar4 = iVar4 + iVar7 * (uVar2 - uVar3);
      }
      iVar5 = iVar7 + iVar5;
      uVar6 = uVar8;
    } while ((int)uVar8 < param_3 + param_2);
  }
  *param_4 = iVar4;
  return uVar2;
}




void FUN_00f0757c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      do {
        uVar5 = *puVar2;
        lVar3 = lVar3 + -0x10;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 2;
        puVar2 = puVar2 + 2;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00f07600(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_00f076a4(param_1 + 0x18,auStack_48);
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = (ulong)(*(int *)(param_1 + 0x18) - 1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar3 + uVar2 * 0xc);
  }
  puVar4 = (undefined8 *)(lVar3 + uVar2 * 0xc);
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(param_2 + 1);
  *puVar4 = *param_2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f076a4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar1 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar1 = uVar3;
    }
    FUN_00f07738(param_1,uVar1);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar2 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0xc;
  *(undefined4 *)(lVar2 + -4) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + -0xc) = *param_2;
  return;
}




void FUN_00f07738(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0xc);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0xc;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -0xc;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar2 + 1);
        *puVar4 = *puVar2;
        puVar4 = (undefined8 *)((long)puVar4 + 0xc);
        puVar2 = (undefined8 *)((long)puVar2 + 0xc);
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00f077c8(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      do {
        uVar5 = *puVar2;
        lVar3 = lVar3 + -0x10;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 2;
        puVar2 = puVar2 + 2;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00f0784c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_02825668;
  param_1[3] = param_2;
  param_1[4] = param_3;
  return;
}




void FUN_00f07864(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + 8);
  FUN_0199fccc(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),uVar1 & 0x3fff,
               uVar1 >> 0xe & 0x3fff,1,0xb,0);
  return;
}




void FUN_00f07888(long param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar2) {
      *param_2 = 100;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar3 = FUN_00f016d4(param_2 + (ulong)(uint)param_2[10] * 4 + 2,0x2f);
  puVar4 = (undefined8 *)(lVar3 + 7U & 0xfffffffffffffff8);
  *param_2 = 0;
  *puVar4 = &PTR___cxa_pure_virtual_028256c8;
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar5;
  *puVar4 = &PTR_FUN_02825668;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = uVar5;
  return;
}




void FUN_00f07918(void)

{
  return;
}




void FUN_00f0791c(void)

{
  return;
}




void FUN_00f07920(void)

{
  return;
}




void FUN_00f07924(void)

{
  return;
}




undefined8 FUN_00f07928(void)

{
  return 0;
}




undefined8 FUN_00f07930(void)

{
  return 0;
}




void FUN_00f07938(void)

{
  return;
}




void FUN_00f0793c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xf07940);
  (*pcVar1)();
}




void FUN_00f07940(undefined1 param_1 [16],float param_2,long param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_00f079b0();
  if ((*(float *)(param_3 + 0x40) == fVar1) && (*(float *)(param_3 + 0x44) == param_2)) {
    return;
  }
  *(float *)(param_3 + 0x40) = fVar1;
  *(float *)(param_3 + 0x44) = param_2;
  FUN_0091ada4(param_3);
  return;
}




void FUN_00f0798c(float param_1,float param_2,long param_3)

{
  if ((*(float *)(param_3 + 0x40) == param_1) && (*(float *)(param_3 + 0x44) == param_2)) {
    return;
  }
  *(float *)(param_3 + 0x40) = param_1;
  *(float *)(param_3 + 0x44) = param_2;
  FUN_0091ada4();
  return;
}




void FUN_00f079b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
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
    uVar2 = *(undefined4 *)(&DAT_01bf4390 + (long)(int)uVar1 * 4);
    uVar3 = *(undefined4 *)(&DAT_01bf4370 + (long)(int)uVar1 * 4);
  }
  uVar1 = param_6 - 1;
  uVar5 = 0;
  if (uVar1 < 8) {
    uVar4 = *(undefined4 *)(&DAT_01bf4390 + (long)(int)uVar1 * 4);
    uVar5 = *(undefined4 *)(&DAT_01bf4370 + (long)(int)uVar1 * 4);
  }
  FUN_00f07bc4(uVar2,uVar3,uVar4,uVar5,param_1,param_2,param_3,param_5);
  return;
}




void FUN_00f07a18(undefined1 param_1 [16],float param_2,long param_3,undefined4 param_4)

{
  float fVar1;
  
  fVar1 = (float)FUN_00f079b0(param_3,param_4,*(undefined8 *)(param_3 + 0x20),param_4);
  if ((*(float *)(param_3 + 0x40) == fVar1) && (*(float *)(param_3 + 0x44) == param_2)) {
    return;
  }
  *(float *)(param_3 + 0x40) = fVar1;
  *(float *)(param_3 + 0x44) = param_2;
  FUN_0091ada4(param_3);
  return;
}




void FUN_00f07a6c(long param_1,undefined4 param_2)

{
  FUN_00f079b0(param_1,param_2,*(undefined8 *)(param_1 + 0x20),param_2);
  return;
}




void FUN_00f07a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f00438("root-layer");
  FUN_00f07940(param_1,param_2,param_3,param_4,uVar1,param_4);
  return;
}




void FUN_00f07acc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f00438("root-layer");
  FUN_00f07b18(param_1,param_2,param_3,uVar1,param_3);
  return;
}




void FUN_00f07b18(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3 - 1;
  uVar3 = 0;
  uVar2 = 0;
  if (uVar1 < 5) {
    uVar2 = *(undefined4 *)(&DAT_01bf42d0 + (long)(int)uVar1 * 4);
  }
  if (param_5 - 1U < 5) {
    uVar3 = *(undefined4 *)(&DAT_01bf42d0 + (long)(int)(param_5 - 1U) * 4);
  }
  FUN_00f07e00(uVar2,uVar3,param_1,param_2,param_4,(uVar1 & 0xf) == 1 || 3 < uVar1);
  return;
}




void FUN_00f07b78(undefined1 param_1 [16],float param_2,long param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_00f07bc4();
  if ((*(float *)(param_3 + 0x40) == fVar1) && (*(float *)(param_3 + 0x44) == param_2)) {
    return;
  }
  *(float *)(param_3 + 0x40) = fVar1;
  *(float *)(param_3 + 0x44) = param_2;
  FUN_0091ada4(param_3);
  return;
}




void FUN_00f07bc4(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1[4] == 0) {
    FUN_00f017ac(&local_90);
  }
  else {
    puVar2 = (undefined8 *)FUN_00965ecc();
    uStack_88 = puVar2[1];
    local_90 = *puVar2;
    uStack_78 = puVar2[3];
    local_80 = puVar2[2];
    local_70 = *(undefined4 *)(puVar2 + 4);
  }
  if (param_2[4] == 0) {
    FUN_00f017ac(&local_c0);
  }
  else {
    puVar2 = (undefined8 *)FUN_00965ecc();
    uStack_b8 = puVar2[1];
    local_c0 = *puVar2;
    uStack_a8 = puVar2[3];
    local_b0 = puVar2[2];
    local_a0 = *(undefined4 *)(puVar2 + 4);
  }
  (**(code **)(*param_2 + 0x50))(param_2);
  (**(code **)(*param_1 + 0x50))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f07d68(undefined1 param_1 [16],float param_2,long *param_3,long *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00f08c10(param_3 + 0x1a);
  fVar2 = *(float *)(lVar1 + 0x920);
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar2 = ABS(fVar2) / param_2;
  lVar1 = FUN_00f08c10(param_4 + 0x1a);
  fVar3 = *(float *)(lVar1 + 0x920);
  (**(code **)(*param_4 + 0x48))(param_4);
  FUN_00f07e00(1.0 - fVar2,1.0 - ABS(fVar3) / param_2,0,param_3,param_4,1);
  return;
}




void FUN_00f07e00(float param_1,float param_2,float param_3,long *param_4,long *param_5,uint param_6
                 )

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long local_e8;
  undefined4 local_e0;
  float fStack_dc;
  long local_d8;
  undefined4 local_d0;
  float fStack_cc;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar7 = param_2;
  if (param_4[4] == 0) {
    FUN_00f017ac(&local_90);
  }
  else {
    puVar2 = (undefined8 *)FUN_00965ecc();
    uStack_88 = puVar2[1];
    local_90 = *puVar2;
    uStack_78 = puVar2[3];
    local_80 = puVar2[2];
    local_70 = *(undefined4 *)(puVar2 + 4);
  }
  if (param_5[4] == 0) {
    FUN_00f017ac(&local_c0);
  }
  else {
    puVar2 = (undefined8 *)FUN_00965ecc();
    uStack_b8 = puVar2[1];
    local_c0 = *puVar2;
    uStack_a8 = puVar2[3];
    local_b0 = puVar2[2];
    local_a0 = *(undefined4 *)(puVar2 + 4);
  }
  local_c8 = param_5[8];
  uVar4 = (ulong)param_6 & 1;
  uVar5 = (ulong)&local_90 | uVar4 << 2;
  fVar6 = *(float *)(uVar5 + 0x10);
  fVar9 = *(float *)((ulong)&local_c8 | uVar4 << 2);
  local_d0 = (**(code **)(*param_5 + 0x50))(param_5);
  local_d8 = param_5[10];
  uVar3 = (ulong)&local_c0 | uVar4 << 2;
  fVar8 = *(float *)(uVar3 + 8);
  fVar9 = fVar8 + *(float *)(uVar3 + 0x10) *
                  (fVar9 + *(float *)((ulong)&local_d0 | uVar4 << 2) *
                           (param_2 - *(float *)((ulong)&local_d8 | uVar4 << 2)));
  fStack_cc = fVar7;
  local_e0 = (**(code **)(*param_4 + 0x50))(param_4);
  local_e8 = param_4[10];
  fVar7 = ((fVar6 * param_3 + fVar9 +
           *(float *)(uVar5 + 0x10) *
           *(float *)((ulong)&local_e0 | uVar4 << 2) *
           (*(float *)((ulong)&local_e8 | uVar4 << 2) - param_1)) - *(float *)(uVar5 + 8)) /
          *(float *)(uVar5 + 0x10);
  fStack_dc = fVar8;
  if ((param_6 & 1) == 0) {
    if (*(float *)(param_4 + 8) == fVar7) goto LAB_00f07fac;
    *(float *)(param_4 + 8) = fVar7;
  }
  else {
    if (*(float *)((long)param_4 + 0x44) == fVar7) goto LAB_00f07fac;
    *(float *)((long)param_4 + 0x44) = fVar7;
  }
  FUN_0091ada4(param_4);
LAB_00f07fac:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00f07fe0(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  float fVar2;
  
  lVar1 = FUN_00f08c10(param_3 + 0x1a);
  fVar2 = *(float *)(lVar1 + 0x920);
  (**(code **)(*param_3 + 0x48))(param_3);
  return 1.0 - ABS(fVar2) / param_2;
}

