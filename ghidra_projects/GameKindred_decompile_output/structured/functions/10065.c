// functions/10065 — 544 functions
#include "GameKindred.h"




void thunk_FUN_100652cdc(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_1006575c4(param_1 + 0xd0);
  if (lVar1 != *(long *)(param_1 + 0xe0)) {
    *(long *)(param_1 + 0xe0) = lVar1;
    FUN_1000200a0(param_1);
    return;
  }
  return;
}




void thunk_FUN_1006557ec(void)

{
  FUN_1006557ec();
  return;
}




void FUN_100650064(long *param_1,float *param_2)

{
  int iVar1;
  long lVar2;
  
  if (((*(float *)(param_1 + 0x17) == *param_2) && (*(float *)((long)param_1 + 0xbc) == param_2[1]))
     && (*(float *)(param_1 + 0x18) == param_2[2])) {
    return;
  }
  lVar2 = *(long *)param_2;
  *(float *)(param_1 + 0x18) = param_2[2];
  param_1[0x17] = lVar2;
  if (((DAT_101ea58f8 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101ea58f8), iVar1 != 0)) {
    ___cxa_guard_release(&DAT_101ea58f8);
  }
  DAT_101ea58f0 = DAT_101dc1cb8;
  *(undefined4 *)((long)&DAT_101ea58f0 + (ulong)*(uint *)((long)param_1 + 0xc4) * 4) =
       *(undefined4 *)((long)param_1 + 0xbc);
  (**(code **)(*param_1 + 0x28))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100650110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_100650140(long *param_1,int param_2)

{
  if (*(int *)((long)param_1 + 0xc4) == param_2) {
    return;
  }
  *(int *)((long)param_1 + 0xc4) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010065015c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_100650160(long param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 local_48;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar5 = 0;
    uVar13 = 0;
    do {
      uVar1 = *(uint *)(param_1 + 0xd4);
      if ((int)uVar1 < 1) {
        uVar1 = *(uint *)(param_1 + 0xd0);
        if ((int)uVar1 < 1) {
          uVar9 = 0;
        }
        else {
          uVar2 = 0;
          if (uVar1 != 0) {
            uVar2 = uVar5 / uVar1;
          }
          uVar9 = CONCAT44(uVar5 - uVar2 * uVar1,uVar2);
        }
      }
      else {
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = uVar5 / uVar1;
        }
        uVar9 = CONCAT44(uVar2,uVar5 - uVar2 * uVar1);
      }
      uVar8 = NEON_ucvtf(uVar9,4);
      uVar11 = *(undefined8 *)(param_1 + 0xb8);
      uVar12 = *(undefined8 *)(param_1 + 0xc0);
      fVar10 = (float)uVar12 + (float)uVar11;
      fVar6 = fVar10 * (float)uVar8;
      fVar7 = (float)(**(code **)(*plVar4 + 0x50))(plVar4);
      fVar14 = (float)*(undefined8 *)(param_1 + 200);
      fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20);
      fVar6 = fVar6 + (float)*(undefined8 *)(param_1 + 0xb8) * fVar14 +
              fVar7 * ((float)plVar4[10] - fVar14);
      fVar7 = ((float)((ulong)uVar12 >> 0x20) + (float)((ulong)uVar11 >> 0x20)) *
              (float)((ulong)uVar8 >> 0x20) +
              (float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) * fVar15 +
              fVar10 * ((float)((ulong)plVar4[10] >> 0x20) - fVar15);
      bVar3 = false;
      if ((*(float *)(plVar4 + 8) == fVar6) &&
         (bVar3 = false, !NAN(*(float *)((long)plVar4 + 0x44)) && !NAN(fVar7))) {
        bVar3 = *(float *)((long)plVar4 + 0x44) == fVar7;
      }
      if (!bVar3) {
        plVar4[8] = CONCAT44(fVar7,fVar6);
        FUN_1000200a0(plVar4);
      }
      uVar5 = uVar5 + 1;
      uVar13 = NEON_umax(CONCAT44((int)((ulong)uVar9 >> 0x20) + 1,(int)uVar9 + 1),uVar13,4);
      plVar4 = (long *)plVar4[6];
    } while (plVar4 != (long *)0x0);
  }
  uVar9 = NEON_ucvtf(uVar13,4);
  uVar13 = NEON_ucvtf(CONCAT44((int)((ulong)uVar13 >> 0x20) + -1,(int)uVar13 + -1),4);
  local_48 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) *
                      (float)((ulong)uVar9 >> 0x20) +
                      (float)((ulong)uVar13 >> 0x20) *
                      (float)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20),
                      (float)*(undefined8 *)(param_1 + 0xb8) * (float)uVar9 +
                      (float)uVar13 * (float)*(undefined8 *)(param_1 + 0xc0));
  FUN_10064e48c(param_1,&local_48);
  return;
}




void FUN_1006502a8(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = FUN_10064fca4(param_1 + 0x17);
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar2 = *param_2;
  lVar4 = param_2[3];
  lVar3 = param_2[2];
  param_1[0x18] = param_2[1];
  param_1[0x17] = lVar2;
  param_1[0x1a] = lVar4;
  param_1[0x19] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x000100650300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_100650308(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




void FUN_100650320(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




void FUN_100650334(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100655644();
  *puVar1 = &PTR_FUN_1014a6628;
  puVar1[0x2b] = 0x600000003;
  *(undefined4 *)(puVar1 + 0x2c) = 0;
  return;
}




void FUN_100650364(undefined4 param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 uStack_41;
  
  FUN_10064eb54(param_4,&uStack_41);
  *(undefined4 *)(param_2 + 0x2b) = param_3;
  *(int *)((long)param_2 + 0x15c) = (int)param_4;
  *(undefined4 *)(param_2 + 0x2c) = param_1;
  (**(code **)(*param_2 + 0xe8))(param_2);
  return;
}




void FUN_1006503cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  
  lVar4 = *(long *)(param_1 + 0xe0);
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      lVar1 = lVar5;
      if ((((*(uint *)(lVar4 + 0x84) ^ 0xffffffff) & 0x44) == 0) && (lVar1 = lVar4, lVar5 != 0)) {
        switch(*(undefined4 *)(param_1 + 0x158)) {
        case 0:
          iVar6 = *(int *)(param_1 + 0x15c);
          fVar7 = -*(float *)(param_1 + 0x160);
          uVar2 = 2;
          uVar3 = 0;
          break;
        case 1:
          fVar7 = *(float *)(param_1 + 0x160);
          iVar6 = *(int *)(param_1 + 0x15c);
          uVar2 = 0;
          uVar3 = 2;
          break;
        case 2:
          iVar6 = *(int *)(param_1 + 0x15c);
          fVar7 = -*(float *)(param_1 + 0x160);
          uVar2 = 1;
          uVar3 = 3;
          break;
        case 3:
          fVar7 = *(float *)(param_1 + 0x160);
          iVar6 = *(int *)(param_1 + 0x15c);
          uVar2 = 3;
          uVar3 = 1;
          break;
        default:
          goto switchD_10065042c_default;
        }
        FUN_10064e72c(fVar7,lVar4,uVar2,lVar5,uVar3);
        if (iVar6 != 6) {
          FUN_10064e72c(0,lVar4,iVar6,lVar5,iVar6);
        }
      }
switchD_10065042c_default:
      lVar4 = *(long *)(lVar4 + 0x30);
      lVar5 = lVar1;
    } while (lVar4 != 0);
  }
  FUN_1006557ec(param_1);
  return;
}




void FUN_1006504fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100650530(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100650568(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  uVar1 = DAT_101dbd2f0;
  *(undefined4 *)(puVar2 + 0x18) = 0x7000000;
  puVar2[0x19] = uVar1;
  *puVar2 = &PTR_thunk_FUN_10064e2bc_1014a6778;
  puVar2[0x17] = &PTR_FUN_1014a68d8;
  *(undefined4 *)(puVar2 + 0x1a) = 0xffffffff;
  return;
}




void FUN_1006505b8(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  uVar1 = DAT_101dbd2f0;
  *(undefined4 *)(puVar2 + 0x18) = 0x7000000;
  puVar2[0x19] = uVar1;
  *puVar2 = &PTR_thunk_FUN_10064e2bc_1014a6778;
  puVar2[0x17] = &PTR_FUN_1014a68d8;
  *(undefined4 *)(puVar2 + 0x1a) = 0xffffffff;
  return;
}




void FUN_100650608(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xd0) = *param_2;
  return;
}




void FUN_100650614(undefined1 param_1 [16],float param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  
  if (*(char *)((long)param_3 + 0xd3) != '\0') {
    pfVar5 = (float *)FUN_10003d5bc();
    fVar7 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    fVar10 = (float)(int)*pfVar5;
    fVar9 = (float)(int)pfVar5[1];
    fVar7 = fVar10 + fVar7 * pfVar5[4];
    fVar8 = fVar9 + param_2 * pfVar5[5];
    uVar1 = (undefined1)param_3[0x1a];
    uVar2 = *(undefined1 *)((long)param_3 + 0xd1);
    uVar3 = *(undefined1 *)((long)param_3 + 0xd2);
    fVar11 = (float)NEON_ucvtf((uint)*(byte *)((long)param_3 + 0xd3));
    fVar11 = (float)NEON_fminnm((int)(pfVar5[6] * fVar11),0x437f0000);
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    pfVar5 = (float *)*param_4;
    *pfVar5 = fVar10;
    pfVar5[1] = fVar9;
    pfVar5[2] = 0.0;
    *(undefined1 *)(pfVar5 + 3) = uVar1;
    *(undefined1 *)((long)pfVar5 + 0xd) = uVar2;
    *(undefined1 *)((long)pfVar5 + 0xe) = uVar3;
    uVar4 = (undefined1)(int)fVar11;
    *(undefined1 *)((long)pfVar5 + 0xf) = uVar4;
    pfVar5[4] = 0.0;
    pfVar5[5] = 1.0;
    lVar6 = *param_4;
    *(float *)(lVar6 + 0x18) = fVar10;
    *param_4 = lVar6 + 0x18;
    *(int *)(param_4 + 1) = (int)param_4[1] + 1;
    *(float *)(lVar6 + 0x1c) = fVar8;
    *(undefined4 *)(lVar6 + 0x20) = 0;
    *(undefined1 *)(lVar6 + 0x24) = uVar1;
    *(undefined1 *)(lVar6 + 0x25) = uVar2;
    *(undefined1 *)(lVar6 + 0x26) = uVar3;
    *(undefined1 *)(lVar6 + 0x27) = uVar4;
    *(undefined8 *)(lVar6 + 0x28) = 0;
    lVar6 = *param_4;
    *(float *)(lVar6 + 0x18) = fVar7;
    *param_4 = lVar6 + 0x18;
    *(int *)(param_4 + 1) = (int)param_4[1] + 1;
    *(float *)(lVar6 + 0x1c) = fVar9;
    *(undefined4 *)(lVar6 + 0x20) = 0;
    *(undefined1 *)(lVar6 + 0x24) = uVar1;
    *(undefined1 *)(lVar6 + 0x25) = uVar2;
    *(undefined1 *)(lVar6 + 0x26) = uVar3;
    *(undefined1 *)(lVar6 + 0x27) = uVar4;
    uVar12 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(lVar6 + 0x28) = uVar12;
    lVar6 = *param_4;
    *(float *)(lVar6 + 0x18) = fVar10;
    *param_4 = lVar6 + 0x18;
    *(int *)(param_4 + 1) = (int)param_4[1] + 1;
    *(float *)(lVar6 + 0x1c) = fVar8;
    *(undefined4 *)(lVar6 + 0x20) = 0;
    *(undefined1 *)(lVar6 + 0x24) = uVar1;
    *(undefined1 *)(lVar6 + 0x25) = uVar2;
    *(undefined1 *)(lVar6 + 0x26) = uVar3;
    *(undefined1 *)(lVar6 + 0x27) = uVar4;
    *(undefined8 *)(lVar6 + 0x28) = 0;
    lVar6 = *param_4;
    *(float *)(lVar6 + 0x18) = fVar7;
    *param_4 = lVar6 + 0x18;
    *(int *)(param_4 + 1) = (int)param_4[1] + 1;
    *(float *)(lVar6 + 0x1c) = fVar8;
    *(undefined4 *)(lVar6 + 0x20) = 0;
    *(undefined1 *)(lVar6 + 0x24) = uVar1;
    *(undefined1 *)(lVar6 + 0x25) = uVar2;
    *(undefined1 *)(lVar6 + 0x26) = uVar3;
    *(undefined1 *)(lVar6 + 0x27) = uVar4;
    *(undefined8 *)(lVar6 + 0x28) = 0x3f800000;
    lVar6 = *param_4;
    *(float *)(lVar6 + 0x18) = fVar7;
    *param_4 = lVar6 + 0x18;
    *(int *)(param_4 + 1) = (int)param_4[1] + 1;
    *(float *)(lVar6 + 0x1c) = fVar9;
    *(undefined4 *)(lVar6 + 0x20) = 0;
    *(undefined1 *)(lVar6 + 0x24) = uVar1;
    *(undefined1 *)(lVar6 + 0x25) = uVar2;
    *(undefined1 *)(lVar6 + 0x26) = uVar3;
    *(undefined1 *)(lVar6 + 0x27) = uVar4;
    *(undefined8 *)(lVar6 + 0x28) = uVar12;
    *param_4 = *param_4 + 0x18;
    *(int *)(param_4 + 1) = (int)param_4[1] + 1;
  }
  return;
}




void FUN_100650804(long param_1)

{
  FUN_100650614(param_1 + -0xb8);
  return;
}




undefined8 FUN_10065080c(void)

{
  return 0;
}




undefined8 FUN_100650814(void)

{
  return 0;
}




void FUN_10065081c(void)

{
  FUN_1010b3fec(0);
  return;
}




void FUN_100650824(void)

{
  FUN_1010b3fec(0);
  return;
}




void FUN_100650830(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




void FUN_100650844(long param_1)

{
  FUN_10064e2bc(param_1 + -0xb8);
  return;
}




void FUN_10065084c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc(param_1 + -0xb8);
  operator_delete(pvVar1);
  return;
}




void FUN_100650864(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006543ec();
  *puVar1 = &PTR_thunk_FUN_10064e2bc_1014a6920;
  return;
}




void FUN_100650884(undefined1 param_1 [16],float param_2,long *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 auStack_41b0 [148];
  undefined4 local_411c;
  undefined1 auStack_4118 [40];
  undefined1 auStack_40f0 [168];
  undefined1 auStack_4048 [16384];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1010b3878(auStack_4118);
  FUN_1010b2058(auStack_40f0);
  fVar3 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10065783c(auStack_4118,(int)fVar3,(int)param_2);
  local_411c = 0;
  FUN_1006545f8(param_3,param_4,auStack_4048,&local_411c,auStack_4118);
  uVar1 = local_411c;
  uVar2 = FUN_1010b0058(0);
  FUN_1010b24ac(auStack_41b0,"Composite task (ScreenNode)",auStack_4048,uVar1,uVar2,auStack_4118,
                auStack_40f0,0);
  FUN_1010b36cc(param_4,auStack_41b0,0);
  FUN_1010b2508(auStack_41b0);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1006509ac(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




long FUN_1006509c0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006543ec();
  *puVar1 = &PTR_FUN_1014a6a80;
  thunk_FUN_1006421a8(puVar1 + 0x34);
  *(undefined8 *)(param_1 + 0x228) = DAT_101873a40;
  *(undefined8 *)(param_1 + 0x230) = 0x200000001;
  *(undefined1 *)(param_1 + 0x238) = 1;
  FUN_100642bd8(param_1,puVar1 + 0x34,1);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) & 0xffffffbf;
  return param_1;
}




long thunk_FUN_1006509c0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006543ec();
  *puVar1 = &PTR_FUN_1014a6a80;
  thunk_FUN_1006421a8(puVar1 + 0x34);
  *(undefined8 *)(param_1 + 0x228) = DAT_101873a40;
  *(undefined8 *)(param_1 + 0x230) = 0x200000001;
  *(undefined1 *)(param_1 + 0x238) = 1;
  FUN_100642bd8(param_1,puVar1 + 0x34,1);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) & 0xffffffbf;
  return param_1;
}




void FUN_100650a40(long *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(float *)(param_1 + 10) == *param_2) &&
     (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x54)) && !NAN(param_2[1]))) {
    bVar1 = *(float *)((long)param_1 + 0x54) == param_2[1];
  }
  if (!bVar1) {
    param_1[10] = *(long *)param_2;
    FUN_1000200a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000100650a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_100650a8c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar9 = DAT_101dc1cb8._4_4_;
  fVar7 = (float)DAT_101dc1cb8;
  fVar4 = (float)(**(code **)(*param_3 + 0x48))();
  fVar10 = param_2;
  if ((fVar4 <= 0.0) || ((**(code **)(*param_3 + 0x48))(param_3), fVar10 = param_2, param_2 <= 0.0))
  goto LAB_100650d04;
  plVar1 = param_3 + 0x34;
  fVar4 = (float)FUN_1006425d0(plVar1,0,0,0,(char)param_3[0x47]);
  iVar2 = (int)param_3[0x46];
  fVar10 = param_2;
  if (iVar2 == 2) {
    fVar6 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    fVar6 = fVar6 / fVar4;
    (**(code **)(*param_3 + 0x48))(param_3);
    fVar11 = fVar10 / param_2;
    fVar5 = fVar6;
    if (fVar6 <= fVar11) {
      fVar5 = fVar11;
    }
    iVar2 = *(int *)((long)param_3 + 0x234);
    if (((iVar2 != 2) && ((iVar2 != 0 || (fVar5 <= 1.0)))) && ((iVar2 != 1 || (1.0 <= fVar5))))
    goto LAB_100650d04;
    fVar8 = *(float *)((long)param_3 + 0x1ec);
    bVar3 = false;
    if ((*(float *)(param_3 + 0x3d) == fVar5) && (bVar3 = false, !NAN(fVar8) && !NAN(fVar5))) {
      bVar3 = fVar8 == fVar5;
    }
    if (!bVar3) {
      *(float *)(param_3 + 0x3d) = fVar5;
      *(float *)((long)param_3 + 0x1ec) = fVar5;
      FUN_1000200a0(plVar1);
    }
    if (fVar11 <= fVar6) {
      (**(code **)(*param_3 + 0x48))(param_3);
      fVar8 = fVar8 - param_2 * fVar5;
LAB_100650cf8:
      fVar10 = *(float *)((long)param_3 + 0x22c);
      fVar9 = fVar8 * fVar10;
      goto LAB_100650d04;
    }
    fVar6 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    fVar6 = fVar6 - fVar4 * fVar5;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 == 0) {
        fVar6 = param_2;
        fVar5 = (float)(**(code **)(*param_3 + 0x48))(param_3);
        fVar5 = fVar5 / fVar4;
        fVar4 = (float)NEON_fminnm(fVar5,0x3f800000);
        fVar10 = (float)NEON_fminnm(fVar6 / param_2,0x3f800000);
        fVar11 = fVar5;
        if (fVar5 <= 1.0) {
          fVar11 = 1.0;
        }
        if (*(int *)((long)param_3 + 0x234) == 0) {
          fVar5 = fVar11;
        }
        if (*(int *)((long)param_3 + 0x234) != 1) {
          fVar10 = fVar6 / param_2;
          fVar4 = fVar5;
        }
        bVar3 = false;
        if ((*(float *)(param_3 + 0x3d) == fVar4) &&
           (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x1ec)) && !NAN(fVar10))) {
          bVar3 = *(float *)((long)param_3 + 0x1ec) == fVar10;
        }
        if (!bVar3) {
          *(float *)(param_3 + 0x3d) = fVar4;
          *(float *)((long)param_3 + 0x1ec) = fVar10;
          FUN_1000200a0(plVar1);
        }
      }
      goto LAB_100650d04;
    }
    fVar5 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    (**(code **)(*param_3 + 0x48))(param_3);
    fVar11 = (float)NEON_fminnm(fVar5 / fVar4,fVar10 / param_2);
    iVar2 = *(int *)((long)param_3 + 0x234);
    if (((iVar2 != 2) && ((iVar2 != 0 || (fVar11 <= 1.0)))) && ((iVar2 != 1 || (1.0 <= fVar11))))
    goto LAB_100650d04;
    fVar8 = *(float *)((long)param_3 + 0x1ec);
    bVar3 = false;
    if ((*(float *)(param_3 + 0x3d) == fVar11) && (bVar3 = false, !NAN(fVar8) && !NAN(fVar11))) {
      bVar3 = fVar8 == fVar11;
    }
    if (!bVar3) {
      *(float *)(param_3 + 0x3d) = fVar11;
      *(float *)((long)param_3 + 0x1ec) = fVar11;
      FUN_1000200a0(plVar1);
    }
    fVar6 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    if (fVar5 / fVar4 <= fVar10 / param_2) {
      fVar8 = fVar8 - param_2 * fVar11;
      goto LAB_100650cf8;
    }
    fVar6 = fVar6 - fVar4 * fVar11;
  }
  fVar10 = *(float *)(param_3 + 0x45);
  fVar7 = fVar6 * fVar10;
LAB_100650d04:
  fVar4 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar7 = fVar7 - fVar4 * *(float *)(param_3 + 10);
  fVar9 = fVar9 - fVar10 * *(float *)((long)param_3 + 0x54);
  bVar3 = false;
  if ((*(float *)(param_3 + 0x3c) == fVar7) &&
     (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x1e4)) && !NAN(fVar9))) {
    bVar3 = *(float *)((long)param_3 + 0x1e4) == fVar9;
  }
  if (bVar3) {
    return;
  }
  *(float *)(param_3 + 0x3c) = fVar7;
  *(float *)((long)param_3 + 0x1e4) = fVar9;
  FUN_1000200a0(param_3 + 0x34);
  return;
}




undefined8 FUN_100650d80(long *param_1)

{
  (**(code **)(*param_1 + 0x150))();
  return 0;
}




void FUN_100650da0(long param_1,int param_2)

{
  *(int *)(param_1 + 0x230) = param_2;
  FUN_100654488(param_1,param_2 == 2);
  return;
}




void FUN_100650db0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x234) = param_2;
  return;
}




void FUN_100650db8(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x228) = param_1;
  *(undefined4 *)(param_3 + 0x22c) = param_2;
  return;
}




void FUN_100650dc4(long param_1)

{
  FUN_100642bd8(param_1 + 0x1a0);
  return;
}




void FUN_100650dcc(long *param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x47) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000100650dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_100650ddc(long param_1)

{
  FUN_100642888(param_1 + 0x1a0,0,0,0,*(undefined1 *)(param_1 + 0x238));
  return;
}




void FUN_100650df8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a6a80;
  FUN_10064230c(param_1 + 0x34);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100650e2c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014a6a80;
  FUN_10064230c(param_1 + 0x34);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_100650e64(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  uVar1 = DAT_101dbd2f0;
  *(undefined4 *)(puVar2 + 0x18) = 0x7000000;
  puVar2[0x19] = uVar1;
  *puVar2 = &PTR_thunk_FUN_100651068_1014a6bf0;
  puVar2[0x17] = &PTR_FUN_1014a6d68;
  FUN_100655a8c(puVar2 + 0x1a);
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x124) = 0xff000000;
  *(undefined1 *)(param_1 + 0x25) = DAT_101872b90;
  *(undefined2 *)((long)param_1 + 0x129) = 0x101;
  *(byte *)((long)param_1 + 299) = *(byte *)((long)param_1 + 299) & 0xe0 | 0x10;
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  local_28 = 0;
  (**(code **)(*param_1 + 0x28))(param_1,&local_28);
  return param_1;
}




long * thunk_FUN_100650e64(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_28;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  uVar1 = DAT_101dbd2f0;
  *(undefined4 *)(puVar2 + 0x18) = 0x7000000;
  puVar2[0x19] = uVar1;
  *puVar2 = &PTR_thunk_FUN_100651068_1014a6bf0;
  puVar2[0x17] = &PTR_FUN_1014a6d68;
  FUN_100655a8c(puVar2 + 0x1a);
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x124) = 0xff000000;
  *(undefined1 *)(param_1 + 0x25) = DAT_101872b90;
  *(undefined2 *)((long)param_1 + 0x129) = 0x101;
  *(byte *)((long)param_1 + 299) = *(byte *)((long)param_1 + 299) & 0xe0 | 0x10;
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  uStack_28 = 0;
  (**(code **)(*param_1 + 0x28))(param_1,&uStack_28);
  return param_1;
}




long * FUN_100650f44(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  uVar1 = DAT_101dbd2f0;
  *(undefined4 *)(puVar3 + 0x18) = 0x7000000;
  puVar3[0x19] = uVar1;
  *puVar3 = &PTR_thunk_FUN_100651068_1014a6bf0;
  puVar3[0x17] = &PTR_FUN_1014a6d68;
  FUN_100655a8c(puVar3 + 0x1a);
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x124) = 0xff000000;
  *(undefined1 *)(param_1 + 0x25) = DAT_101872b90;
  *(undefined2 *)((long)param_1 + 0x129) = 0x101;
  *(byte *)((long)param_1 + 299) = *(byte *)((long)param_1 + 299) & 0xe0 | 0x10;
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  local_28 = 0;
  (**(code **)(*param_1 + 0x28))(param_1,&local_28);
  uVar2 = FUN_10064169c(param_2);
  FUN_100651488(param_1,uVar2);
  return param_1;
}




void FUN_100651038(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_10064169c(param_2);
  FUN_100651488(param_1,uVar1);
  return;
}




long * thunk_FUN_100650f44(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  uVar1 = DAT_101dbd2f0;
  *(undefined4 *)(puVar3 + 0x18) = 0x7000000;
  puVar3[0x19] = uVar1;
  *puVar3 = &PTR_thunk_FUN_100651068_1014a6bf0;
  puVar3[0x17] = &PTR_FUN_1014a6d68;
  FUN_100655a8c(puVar3 + 0x1a);
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x124) = 0xff000000;
  *(undefined1 *)(param_1 + 0x25) = DAT_101872b90;
  *(undefined2 *)((long)param_1 + 0x129) = 0x101;
  *(byte *)((long)param_1 + 299) = *(byte *)((long)param_1 + 299) & 0xe0 | 0x10;
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  uStack_28 = 0;
  (**(code **)(*param_1 + 0x28))(param_1,&uStack_28);
  uVar2 = FUN_10064169c(param_2);
  FUN_100651488(param_1,uVar2);
  return param_1;
}




void FUN_100651068(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100651068_1014a6bf0;
  param_1[0x17] = &PTR_FUN_1014a6d68;
  if (*(char *)(param_1 + 0x25) != DAT_101872b90) {
    FUN_1006416c0();
  }
  thunk_FUN_100655acc(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100651068(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100651068_1014a6bf0;
  param_1[0x17] = &PTR_FUN_1014a6d68;
  if (*(char *)(param_1 + 0x25) != DAT_101872b90) {
    FUN_1006416c0();
  }
  thunk_FUN_100655acc(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1006510c4(long param_1)

{
  FUN_100651068(param_1 + -0xb8);
  return;
}




void FUN_1006510cc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100651068();
  operator_delete(pvVar1);
  return;
}




void FUN_1006510e0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100651068(param_1 + -0xb8);
  operator_delete(pvVar1);
  return;
}




void FUN_1006510f8(long param_1)

{
  if (*(char *)(param_1 + 0x128) != DAT_101872b90) {
    FUN_1006416c0();
    *(char *)(param_1 + 0x128) = DAT_101872b90;
    FUN_100656b1c(param_1 + 0xd0);
  }
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x124) = 0xff000000;
  *(undefined2 *)(param_1 + 0x129) = 0x101;
  *(byte *)(param_1 + 299) = *(byte *)(param_1 + 299) & 0xe0 | 0x10;
  return;
}




float FUN_100651184(long param_1)

{
  float fVar1;
  undefined1 local_28 [4];
  float local_24;
  
  FUN_1006569f0(param_1 + 0xd0,&local_24,local_28);
  fVar1 = (float)FUN_100655cc0(param_1 + 0xd0);
  if (fVar1 <= 0.0) {
    fVar1 = local_24;
  }
  return fVar1;
}




undefined4 FUN_1006511d0(long param_1)

{
  undefined1 local_18 [4];
  undefined4 local_14;
  
  FUN_1006569f0(param_1 + 0xd0,&local_14,local_18);
  return local_14;
}




void FUN_100651200(undefined8 param_1,long param_2)

{
  int iVar1;
  float fVar2;
  
  param_2 = param_2 + 0xd0;
  iVar1 = FUN_100655c6c(param_2);
  if ((iVar1 != 0) && (fVar2 = (float)FUN_100655cc0(param_2), fVar2 != (float)param_1)) {
    FUN_100655c98(param_1,param_2);
    return;
  }
  return;
}




int FUN_10065125c(undefined1 param_1 [16],float param_2,long *param_3,uint param_4)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_100655c6c(param_3 + 0x1a);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    FUN_100655c98((float)param_4,param_3 + 0x1a);
    fVar2 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    FUN_10064e514(param_3,CONCAT44((int)param_2,(int)fVar2));
    iVar1 = (int)param_2;
  }
  return iVar1;
}




int FUN_1006512dc(undefined1 param_1 [16],float param_2,long *param_3,uint param_4)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  plVar1 = param_3 + 0x1a;
  iVar2 = FUN_100655c6c(plVar1);
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  else {
    uVar3 = (**(code **)(*param_3 + 0x48))(param_3);
    FUN_100655c98((float)param_4,plVar1);
    (**(code **)(*param_3 + 0x48))(param_3);
    iVar2 = (int)param_2;
    FUN_100655c98(uVar3,plVar1);
  }
  return iVar2;
}




ulong FUN_100651368(undefined1 param_1 [16],float param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  
  iVar1 = FUN_100655c6c(param_3 + 0x1a);
  if (iVar1 == 0) {
    fVar4 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    uVar2 = (ulong)(uint)(int)fVar4;
    uVar3 = (ulong)(uint)(int)param_2;
  }
  else {
    uVar2 = FUN_10064e4e4(param_3);
    uVar3 = uVar2 >> 0x20;
  }
  return uVar2 & 0xffffffff | uVar3 << 0x20;
}




void FUN_1006513c0(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  
  plVar1 = param_3 + 0x1a;
  iVar2 = FUN_100655b10(plVar1);
  if (iVar2 != 0) {
    FUN_1000200a0(param_3);
    (**(code **)(*param_3 + 0xe8))(param_3);
    uVar3 = FUN_100655c6c(plVar1);
    FUN_100655c3c(plVar1,0);
    fVar4 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    FUN_10064e4dc(param_3,CONCAT44((int)param_2,(int)fVar4));
    FUN_100655c3c(plVar1,uVar3);
    return;
  }
  return;
}




void FUN_100651460(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x120) = *param_2;
  return;
}




void FUN_10065146c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010065147c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,&DAT_101d91650);
  return;
}




long FUN_100651480(long param_1)

{
  return param_1 + 0x120;
}




void FUN_100651488(long param_1,char param_2)

{
  uint3 *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  
  cVar2 = *(char *)(param_1 + 0x128);
  if (cVar2 != param_2) {
    if (cVar2 != DAT_101872b90) {
      FUN_1006416c0();
      *(char *)(param_1 + 0x128) = DAT_101872b90;
      FUN_100656b1c(param_1 + 0xd0);
      cVar2 = DAT_101872b90;
    }
    if (cVar2 != param_2) {
      *(char *)(param_1 + 0x128) = param_2;
      FUN_1006416ac(param_2);
      lVar4 = FUN_1006489e0(DAT_101dbd2e8,*(undefined1 *)(param_1 + 0x128));
      FUN_100655b74(param_1 + 0xd0,lVar4);
      puVar1 = (uint3 *)(param_1 + 0x129);
      uVar5 = *puVar1 & 0xfffc0000 |
              (uint)*(ushort *)puVar1 | (*(uint *)(lVar4 + 0x930) & 3) << 0x10;
      *(char *)(param_1 + 299) = (char)(uVar5 >> 0x10);
      bVar6 = 0;
      if ((*(int *)(lVar4 + 0x10) != 0) && (bVar6 = 0, *(long **)(lVar4 + 0xa0) != (long *)0x0)) {
        if (**(long **)(lVar4 + 0xa0) == 0) {
          bVar6 = 0;
        }
        else {
          iVar3 = FUN_100645350();
          bVar6 = 0x10;
          if (iVar3 == 0) {
            bVar6 = 0;
          }
          uVar5 = (uint)*puVar1;
        }
      }
      *(ushort *)puVar1 = (ushort)(uVar5 & 0xefffff);
      *(byte *)(param_1 + 299) = (byte)((uVar5 & 0xefffff) >> 0x10) | bVar6;
    }
  }
  return;
}




void FUN_100651594(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_10064169c(param_2);
  FUN_100651488(param_1,uVar1);
  *(undefined4 *)(param_1 + 0x120) = *param_3;
  return;
}




void FUN_1006515d0(long param_1)

{
  FUN_100655c00(param_1 + 0xd0);
  return;
}




void FUN_1006515d8(long param_1)

{
  FUN_100655c04(param_1 + 0xd0);
  return;
}




void FUN_1006515e0(undefined1 param_1 [16],float param_2,long *param_3,int param_4)

{
  undefined *puVar1;
  float fVar2;
  
  FUN_100655c3c(param_3 + 0x1a);
  if (param_4 == 0) {
    fVar2 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    FUN_10064e504(param_3,CONCAT44((int)param_2,(int)fVar2));
    puVar1 = &DAT_101dbd510;
  }
  else {
    FUN_10064e504(param_3,0);
    puVar1 = &DAT_101872b9c;
  }
  FUN_10064e5b8(param_3,puVar1);
  return;
}




void FUN_100651654(long param_1)

{
  FUN_100655c78(param_1 + 0xd0);
  return;
}




void FUN_10065165c(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 4;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 299) = *(byte *)(param_1 + 299) & 0xfb | bVar1;
  return;
}




void FUN_10065168c(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 8;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 299) = *(byte *)(param_1 + 299) & 0xf7 | bVar1;
  return;
}




void FUN_1006516bc(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x124) = *param_2;
  return;
}




void FUN_1006516c8(long param_1,float *param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  float fVar3;
  
  uVar2 = (ushort)(int)*param_2 & 0xff;
  uVar1 = (undefined1)((ushort)*(short *)(param_1 + 0x12a) >> 8);
  *(undefined1 *)(param_1 + 299) = uVar1;
  *(ushort *)(param_1 + 0x129) = uVar2 | *(short *)(param_1 + 0x12a) << 8;
  fVar3 = param_2[1];
  *(undefined1 *)(param_1 + 299) = uVar1;
  *(ushort *)(param_1 + 0x129) = uVar2 | (ushort)((int)fVar3 << 8);
  return;
}




void FUN_100651700(long param_1)

{
  FUN_100655b9c(param_1 + 0xd0);
  return;
}




void FUN_100651708(float param_1,long param_2,int param_3)

{
  FUN_100655c98(param_2 + 0xd0);
  if (param_3 != 0) {
    FUN_100655c3c(param_2 + 0xd0,0.0 < param_1);
    return;
  }
  return;
}




void FUN_10065175c(long param_1)

{
  FUN_100655cc8(param_1 + 0xd0);
  return;
}




void FUN_100651764(long param_1)

{
  FUN_100655ce8(param_1 + 0xd0);
  return;
}




void FUN_10065176c(long *param_1)

{
  FUN_100655d08(param_1 + 0x1a);
                    /* WARNING: Could not recover jumptable at 0x000100651798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_10065179c(float param_1,float param_2,float param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auStack_48 [4];
  float local_44;
  
  FUN_1006569f0(param_4 + 0xd0,&local_44,auStack_48);
  local_44 = local_44 * param_3;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (param_1 != -1.0) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(local_44) && !NAN(param_1)) {
      bVar1 = local_44 < param_1;
      bVar2 = local_44 == param_1;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    bVar1 = false;
    if ((*(float *)(param_4 + 0x48) == param_3) &&
       (bVar1 = false, !NAN(*(float *)(param_4 + 0x4c)) && !NAN(param_3))) {
      bVar1 = *(float *)(param_4 + 0x4c) == param_3;
    }
    if (bVar1) {
      return;
    }
    *(float *)(param_4 + 0x48) = param_3;
    *(float *)(param_4 + 0x4c) = param_3;
  }
  else {
    NEON_fminnm((param_3 * param_1) / local_44,0x3f800000);
    bVar1 = false;
    if ((*(float *)(param_4 + 0x48) == param_2) &&
       (bVar1 = false, !NAN(*(float *)(param_4 + 0x4c)) && !NAN(param_2))) {
      bVar1 = *(float *)(param_4 + 0x4c) == param_2;
    }
    if (bVar1) {
      return;
    }
    *(float *)(param_4 + 0x48) = param_2;
    *(float *)(param_4 + 0x4c) = param_2;
  }
  FUN_1000200a0(param_4);
  return;
}




void FUN_10065184c(float param_1,float param_2,float param_3,long *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  
  fVar4 = param_2;
  (**(code **)(*param_4 + 0x48))();
  fVar4 = fVar4 * param_3;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (param_1 != -1.0) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar4) && !NAN(param_1)) {
      bVar1 = fVar4 < param_1;
      bVar2 = fVar4 == param_1;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    bVar1 = false;
    if ((*(float *)(param_4 + 9) == param_3) &&
       (bVar1 = false, !NAN(*(float *)((long)param_4 + 0x4c)) && !NAN(param_3))) {
      bVar1 = *(float *)((long)param_4 + 0x4c) == param_3;
    }
    if (bVar1) {
      return;
    }
    *(float *)(param_4 + 9) = param_3;
    *(float *)((long)param_4 + 0x4c) = param_3;
  }
  else {
    NEON_fminnm((param_3 * param_1) / fVar4,0x3f800000);
    bVar1 = false;
    if ((*(float *)(param_4 + 9) == param_2) &&
       (bVar1 = false, !NAN(*(float *)((long)param_4 + 0x4c)) && !NAN(param_2))) {
      bVar1 = *(float *)((long)param_4 + 0x4c) == param_2;
    }
    if (bVar1) {
      return;
    }
    *(float *)(param_4 + 9) = param_2;
    *(float *)((long)param_4 + 0x4c) = param_2;
  }
  FUN_1000200a0(param_4);
  return;
}




void FUN_1006518fc(long param_1)

{
  FUN_100655bc0(param_1 + 0xd0);
  return;
}




void FUN_100651904(long param_1)

{
  FUN_100655bf4(param_1 + 0xd0);
  return;
}




void FUN_10065190c(long param_1,long *param_2)

{
  uint3 *puVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 local_64;
  undefined2 local_63;
  undefined1 local_61;
  
  if (*(char *)(param_1 + 0x128) != DAT_101872b90) {
    pfVar4 = (float *)FUN_10003d5bc();
    fVar14 = *pfVar4;
    fVar15 = pfVar4[1];
    fVar12 = pfVar4[4];
    fVar13 = pfVar4[5];
    puVar1 = (uint3 *)(param_1 + 0x129);
    uVar7 = (uint)*puVar1;
    if ((*(byte *)(param_1 + 299) & 4) != 0) {
      local_64 = *(undefined1 *)(param_1 + 0x124);
      local_63 = *(undefined2 *)(param_1 + 0x125);
      fVar10 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x123));
      fVar11 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x127));
      fVar10 = (float)NEON_fminnm((int)(pfVar4[6] * 0.003921569 * fVar10 * fVar11),0x437f0000);
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      local_61 = (undefined1)(int)fVar10;
      lVar5 = *param_2 + (long)(int)param_2[1] * 0x18;
      uVar2 = *(int *)((long)param_2 + 0xc) - (int)param_2[1];
      iVar3 = FUN_100656b2c(fVar14 + (float)(int)(char)*(undefined2 *)puVar1,
                            fVar15 + (float)((int)(uVar7 << 0x10) >> 0x18),fVar12,fVar13,
                            param_1 + 0xd0,&local_64,lVar5,lVar5 + 0x10,lVar5 + 0xc,0x18,0,
                            uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU),0);
      iVar3 = (int)param_2[1] + iVar3;
      iVar9 = *(int *)((long)param_2 + 0xc);
      if (iVar3 <= *(int *)((long)param_2 + 0xc)) {
        iVar9 = iVar3;
      }
      *(int *)(param_2 + 1) = iVar9;
      uVar7 = (uint)*puVar1;
    }
    if ((uVar7 >> 0x13 & 1) == 0) {
      iVar9 = (int)param_2[1];
      iVar8 = *(int *)((long)param_2 + 0xc);
    }
    else {
      local_64 = *(undefined1 *)(param_1 + 0x124);
      local_63 = *(undefined2 *)(param_1 + 0x125);
      fVar10 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x123));
      fVar11 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x127));
      fVar10 = (float)NEON_fminnm((int)(pfVar4[6] * 0.003921569 * fVar10 * fVar11),0x437f0000);
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      local_61 = (undefined1)(int)fVar10;
      lVar5 = param_1 + 0xd0;
      lVar6 = *param_2 + (long)(int)param_2[1] * 0x18;
      uVar2 = *(int *)((long)param_2 + 0xc) - (int)param_2[1];
      iVar3 = FUN_100656b2c(fVar14 + (float)(int)(char)uVar7,
                            fVar15 + (float)((int)(uVar7 << 0x10) >> 0x18),fVar12,fVar13,lVar5,
                            &local_64,lVar6,lVar6 + 0x10,lVar6 + 0xc,0x18,0,
                            uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU),0);
      iVar8 = *(int *)((long)param_2 + 0xc);
      iVar3 = (int)param_2[1] + iVar3;
      iVar9 = iVar8;
      if (iVar3 <= iVar8) {
        iVar9 = iVar3;
      }
      *(int *)(param_2 + 1) = iVar9;
      lVar6 = *param_2 + (long)(iVar9 * 0x18);
      iVar3 = FUN_100656b2c(fVar14 + (float)(int)(char)*(undefined2 *)puVar1,
                            fVar15 - (float)((int)((uint)*puVar1 << 0x10) >> 0x18),fVar12,fVar13,
                            lVar5,&local_64,lVar6,lVar6 + 0x10,lVar6 + 0xc,0x18,0,
                            iVar8 - iVar9 & (iVar8 - iVar9 >> 0x1f ^ 0xffffffffU),0);
      iVar8 = *(int *)((long)param_2 + 0xc);
      iVar3 = (int)param_2[1] + iVar3;
      iVar9 = iVar8;
      if (iVar3 <= iVar8) {
        iVar9 = iVar3;
      }
      *(int *)(param_2 + 1) = iVar9;
      lVar6 = *param_2 + (long)(iVar9 * 0x18);
      iVar3 = FUN_100656b2c(fVar14 - (float)(int)(char)*(undefined2 *)puVar1,
                            fVar15 + (float)((int)((uint)*puVar1 << 0x10) >> 0x18),fVar12,fVar13,
                            lVar5,&local_64,lVar6,lVar6 + 0x10,lVar6 + 0xc,0x18,0,
                            iVar8 - iVar9 & (iVar8 - iVar9 >> 0x1f ^ 0xffffffffU),0);
      iVar8 = *(int *)((long)param_2 + 0xc);
      iVar3 = (int)param_2[1] + iVar3;
      iVar9 = iVar8;
      if (iVar3 <= iVar8) {
        iVar9 = iVar3;
      }
      *(int *)(param_2 + 1) = iVar9;
      lVar6 = *param_2 + (long)(iVar9 * 0x18);
      iVar3 = FUN_100656b2c(fVar14 - (float)(int)(char)*(undefined2 *)puVar1,
                            fVar15 - (float)((int)((uint)*puVar1 << 0x10) >> 0x18),fVar12,fVar13,
                            lVar5,&local_64,lVar6,lVar6 + 0x10,lVar6 + 0xc,0x18,0,
                            iVar8 - iVar9 & (iVar8 - iVar9 >> 0x1f ^ 0xffffffffU),0);
      iVar8 = *(int *)((long)param_2 + 0xc);
      iVar3 = (int)param_2[1] + iVar3;
      iVar9 = iVar8;
      if (iVar3 <= iVar8) {
        iVar9 = iVar3;
      }
      *(int *)(param_2 + 1) = iVar9;
    }
    local_64 = *(undefined1 *)(param_1 + 0x120);
    local_63 = *(undefined2 *)(param_1 + 0x121);
    fVar10 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x123));
    fVar10 = (float)NEON_fminnm((int)(pfVar4[6] * fVar10),0x437f0000);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    local_61 = (undefined1)(int)fVar10;
    lVar5 = *param_2 + (long)(iVar9 * 0x18);
    iVar3 = FUN_100656b2c(fVar14,fVar15,fVar12,fVar13,param_1 + 0xd0,&local_64,lVar5,lVar5 + 0x10,
                          lVar5 + 0xc,0x18,0,iVar8 - iVar9 & (iVar8 - iVar9 >> 0x1f ^ 0xffffffffU),1
                         );
    iVar3 = (int)param_2[1] + iVar3;
    iVar9 = *(int *)((long)param_2 + 0xc);
    if (iVar3 <= *(int *)((long)param_2 + 0xc)) {
      iVar9 = iVar3;
    }
    *(int *)(param_2 + 1) = iVar9;
  }
  return;
}




void FUN_100651d4c(long param_1)

{
  FUN_10065190c(param_1 + -0xb8);
  return;
}




undefined8 FUN_100651d54(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = *(char *)(param_1 + 0x128);
  if (cVar3 == DAT_101872b90) {
    return 0;
  }
  if ((*(byte *)(param_1 + 299) & 3) != 0) {
    uVar1 = FUN_10064a188();
    if ((uVar1 & 1) != 0) {
      uVar2 = FUN_10064a234();
      goto LAB_100651dc0;
    }
    cVar3 = *(char *)(param_1 + 0x128);
  }
  uVar2 = FUN_100648974(DAT_101dbd2e8,cVar3);
LAB_100651dc0:
  *param_2 = uVar2;
  return 1;
}




void FUN_100651dd4(long param_1)

{
  FUN_100651d54(param_1 + -0xb8);
  return;
}




undefined8 FUN_100651ddc(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x128) == DAT_101872b90) {
    return 0;
  }
  uVar2 = 2;
  if ((*(byte *)(param_1 + 299) & 0x10) != 0) {
    uVar2 = 9;
  }
  uVar1 = FUN_1010b3fec(uVar2);
  return uVar1;
}




undefined8 FUN_100651e20(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x70) == DAT_101872b90) {
    return 0;
  }
  uVar2 = 2;
  if ((*(byte *)(param_1 + 0x73) & 0x10) != 0) {
    uVar2 = 9;
  }
  uVar1 = FUN_1010b3fec(uVar2);
  return uVar1;
}




undefined8 FUN_100651e68(void)

{
  return 0;
}




undefined8 FUN_100651e70(void)

{
  return 0;
}




void FUN_100651e78(long param_1)

{
  FUN_100656b1c(param_1 + 0xd0);
  return;
}




void FUN_100651e80(long param_1)

{
  int iVar1;
  
  FUN_1000433b8();
  iVar1 = FUN_10064a188();
  if (iVar1 != 0) {
    FUN_100656ec8(param_1 + 0xd0,*(undefined1 *)(param_1 + 0x128));
    return;
  }
  return;
}




long FUN_100651ebc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  uVar2 = DAT_101dbd2f0;
  *(undefined4 *)(puVar3 + 0x18) = 0x7000000;
  puVar3[0x19] = uVar2;
  *puVar3 = &PTR_FUN_1014a6db0;
  puVar3[0x17] = &PTR_FUN_1014a6f10;
  FUN_100657568(puVar3 + 0x1a);
  *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
  uVar1 = (ulong)*(uint6 *)(param_1 + 0x144) & 0xe000f8000000;
  *(int *)(param_1 + 0x144) = (int)uVar1;
  *(ushort *)(param_1 + 0x148) = (ushort)(uVar1 >> 0x20) | 0x2ff;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  _memset_pattern16((void *)(param_1 + 300),&DAT_10117d9f0,0xc);
  _memset_pattern16((void *)(param_1 + 0x138),&DAT_10117d9f0,0xc);
  return param_1;
}




long thunk_FUN_100651ebc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  uVar2 = DAT_101dbd2f0;
  *(undefined4 *)(puVar3 + 0x18) = 0x7000000;
  puVar3[0x19] = uVar2;
  *puVar3 = &PTR_FUN_1014a6db0;
  puVar3[0x17] = &PTR_FUN_1014a6f10;
  FUN_100657568(puVar3 + 0x1a);
  *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
  uVar1 = (ulong)*(uint6 *)(param_1 + 0x144) & 0xe000f8000000;
  *(int *)(param_1 + 0x144) = (int)uVar1;
  *(ushort *)(param_1 + 0x148) = (ushort)(uVar1 >> 0x20) | 0x2ff;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  _memset_pattern16((void *)(param_1 + 300),&DAT_10117d9f0,0xc);
  _memset_pattern16((void *)(param_1 + 0x138),&DAT_10117d9f0,0xc);
  return param_1;
}




void FUN_100651f8c(long param_1)

{
  FUN_1006575f4(param_1 + 0xd0);
  return;
}




void FUN_100651f94(long param_1,undefined8 param_2,uint param_3,uint param_4,int param_5,
                  undefined8 param_6,int param_7,int param_8,char param_9,undefined8 param_10,
                  undefined8 param_11,undefined8 param_12,undefined8 param_13,undefined8 param_14,
                  undefined8 param_15,undefined8 param_16,undefined8 param_17,undefined8 param_18,
                  undefined8 param_19,undefined8 param_20,undefined8 param_21,undefined8 param_22,
                  undefined8 param_23)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  undefined2 uVar22;
  undefined2 uVar23;
  
  lVar1 = param_1 + 0xd0;
  uVar7 = FUN_1006575c4(lVar1);
  *(undefined8 *)(param_1 + 0xe0) = uVar7;
  uVar7 = FUN_1006575c4(lVar1,param_6);
  *(undefined8 *)(param_1 + 0xe8) = uVar7;
  uVar7 = FUN_1006575c4(lVar1,param_10);
  *(undefined8 *)(param_1 + 0xf0) = uVar7;
  uVar7 = FUN_1006575c4(lVar1,param_12);
  *(undefined8 *)(param_1 + 0xf8) = uVar7;
  uVar7 = FUN_1006575c4(lVar1,param_14);
  *(undefined8 *)(param_1 + 0x100) = uVar7;
  uVar7 = FUN_1006575c4(lVar1,param_16);
  *(undefined8 *)(param_1 + 0x108) = uVar7;
  uVar7 = FUN_1006575c4(lVar1,param_18);
  *(undefined8 *)(param_1 + 0x110) = uVar7;
  uVar7 = FUN_1006575c4(lVar1,param_20);
  *(undefined8 *)(param_1 + 0x118) = uVar7;
  uVar7 = FUN_1006575c4(lVar1,param_22);
  *(undefined8 *)(param_1 + 0x120) = uVar7;
  uVar8 = 2;
  uVar9 = uVar8;
  if (param_7 == 0) {
    uVar9 = 0;
  }
  uVar10 = 4;
  uVar11 = uVar10;
  if ((char)param_11 == '\0') {
    uVar11 = 0;
  }
  uVar12 = 8;
  uVar15 = uVar12;
  if ((char)param_13 == '\0') {
    uVar15 = 0;
  }
  uVar14 = 0x10;
  uVar17 = uVar14;
  if ((char)param_15 == '\0') {
    uVar17 = 0;
  }
  uVar13 = 0x20;
  uVar19 = uVar13;
  if ((char)param_17 == '\0') {
    uVar19 = 0;
  }
  uVar16 = 0x40;
  uVar2 = uVar16;
  if ((char)param_19 == '\0') {
    uVar2 = 0;
  }
  uVar18 = 0x80;
  uVar3 = uVar18;
  if ((char)param_21 == '\0') {
    uVar3 = 0;
  }
  uVar6 = 0x100;
  uVar4 = uVar6;
  if ((char)param_23 == '\0') {
    uVar4 = 0;
  }
  if (param_8 == 0) {
    uVar8 = 0;
  }
  if (param_11._1_1_ == '\0') {
    uVar10 = 0;
  }
  if (param_13._1_1_ == '\0') {
    uVar12 = 0;
  }
  if (param_15._1_1_ == '\0') {
    uVar14 = 0;
  }
  if (param_17._1_1_ == '\0') {
    uVar13 = 0;
  }
  if (param_19._1_1_ == '\0') {
    uVar16 = 0;
  }
  if (param_21._1_1_ == '\0') {
    uVar18 = 0;
  }
  if (param_23._1_1_ == '\0') {
    uVar6 = 0;
  }
  uVar8 = uVar9 | param_3 | uVar11 | uVar15 | uVar17 | uVar19 | uVar2 | uVar3 | uVar4 |
          (uVar8 | param_4 | uVar10 | uVar12 | uVar14 | uVar13 | uVar16 | uVar18 | uVar6) << 9;
  uVar9 = 0x40000;
  if (param_5 == 0) {
    uVar9 = 0;
  }
  uVar11 = 0x80000;
  if (param_9 == '\0') {
    uVar11 = 0;
  }
  uVar10 = 0x100000;
  if (param_11._2_1_ == '\0') {
    uVar10 = 0;
  }
  uVar15 = 0x200000;
  if (param_13._2_1_ == '\0') {
    uVar15 = 0;
  }
  uVar12 = 0x400000;
  if (param_15._2_1_ == '\0') {
    uVar12 = 0;
  }
  uVar17 = 0x800000;
  if (param_17._2_1_ == '\0') {
    uVar17 = 0;
  }
  uVar14 = 0x1000000;
  if (param_19._2_1_ == '\0') {
    uVar14 = 0;
  }
  uVar19 = 0x2000000;
  if (param_21._2_1_ == '\0') {
    uVar19 = 0;
  }
  uVar13 = 0x4000000;
  if (param_23._2_1_ == '\0') {
    uVar13 = 0;
  }
  *(uint *)(param_1 + 0x144) =
       *(uint *)(param_1 + 0x144) & 0xf8000000 | uVar8 & 0xf803ffff |
       uVar10 | uVar11 | uVar15 | uVar12 | uVar17 | uVar14 | uVar19 | uVar13 |
       uVar9 | uVar8 & 0x7fc0000;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  if (*(long *)(param_1 + 0xf8) != 0) {
    uVar5 = NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xf8) + 8));
    uVar22 = (undefined2)uVar5;
    uVar23 = (undefined2)((uint)uVar5 >> 0x10);
  }
  *(uint *)(param_1 + 300) = CONCAT22(uVar23,uVar22);
  if (*(long *)(param_1 + 0x108) != 0) {
    uVar5 = NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0x108) + 8));
    uVar20 = (undefined2)uVar5;
    uVar21 = (undefined2)((uint)uVar5 >> 0x10);
  }
  *(uint *)(param_1 + 0x134) = CONCAT22(uVar21,uVar20);
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    uVar5 = NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xe0) + 10));
    uVar22 = (undefined2)uVar5;
    uVar23 = (undefined2)((uint)uVar5 >> 0x10);
  }
  *(uint *)(param_1 + 0x138) = CONCAT22(uVar23,uVar22);
  if (*(long *)(param_1 + 0x110) != 0) {
    uVar5 = NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0x110) + 10));
    uVar20 = (undefined2)uVar5;
    uVar21 = (undefined2)((uint)uVar5 >> 0x10);
  }
  *(uint *)(param_1 + 0x140) = CONCAT22(uVar21,uVar20);
  FUN_1006523bc(param_1);
  return;
}




undefined4 FUN_100652390(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + (long)param_2 * 8 + 0xe0);
  if (lVar2 != 0) {
    uVar1 = NEON_ucvtf((uint)*(ushort *)(lVar2 + 8));
    NEON_ucvtf((uint)*(ushort *)(lVar2 + 10));
    return uVar1;
  }
  return 0;
}




void FUN_1006523bc(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 0x130) + *(float *)(param_1 + 300) + *(float *)(param_1 + 0x134);
  fVar3 = *(float *)(param_1 + 0x13c) + *(float *)(param_1 + 0x138) + *(float *)(param_1 + 0x140);
  *(float *)(param_1 + 0x90) = fVar2;
  *(float *)(param_1 + 0x94) = fVar3;
  uVar1 = CONCAT44((int)fVar3,(int)fVar2);
  FUN_10064e4dc(param_1,uVar1);
  FUN_10064e504(param_1,uVar1);
  FUN_10064e514(param_1,uVar1);
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  FUN_1000200a0(param_1);
  return;
}




void FUN_100652444(void)

{
  FUN_100651f94();
  return;
}




void FUN_1006524f8(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  _memmove((void *)(param_1 + 0xe0),(void *)(param_2 + 0xe0),0x48);
  uVar2 = *(undefined4 *)(param_2 + 0x134);
  *(undefined8 *)(param_1 + 300) = *(undefined8 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x134) = uVar2;
  uVar4 = *(undefined8 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x138) = uVar4;
  uVar3 = *(uint *)(param_1 + 0x144);
  uVar1 = *(uint *)(param_2 + 0x144) & 0x1ff;
  *(uint *)(param_1 + 0x144) = uVar3 & 0xfffffe00 | uVar1;
  uVar1 = uVar1 | (*(uint *)(param_2 + 0x144) >> 9 & 0x1ff) << 9;
  *(uint *)(param_1 + 0x144) = uVar3 & 0xfffc0000 | uVar1;
  *(uint *)(param_1 + 0x144) = uVar3 & 0xf8000000 | uVar1 | *(uint *)(param_2 + 0x144) & 0x7fc0000;
  FUN_1006523bc(param_1);
  return;
}




void FUN_100652590(long param_1,undefined4 *param_2,uint param_3)

{
  *(undefined4 *)(param_1 + 0x128) = *param_2;
  *(ushort *)(param_1 + 0x148) =
       *(ushort *)(param_1 + 0x148) & 0xe0ff | (ushort)(((ulong)(param_3 & 0x1f) << 0x28) >> 0x20);
  return;
}




long FUN_1006525bc(long param_1)

{
  return param_1 + 0x128;
}




void FUN_1006525c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,long param_7)

{
  *(undefined4 *)(param_7 + 300) = param_1;
  *(undefined4 *)(param_7 + 0x130) = param_2;
  *(undefined4 *)(param_7 + 0x134) = param_3;
  *(undefined4 *)(param_7 + 0x138) = param_4;
  *(undefined4 *)(param_7 + 0x13c) = param_5;
  *(undefined4 *)(param_7 + 0x140) = param_6;
  FUN_1006523bc();
  return;
}




void FUN_1006525e0(float param_1,float param_2,long param_3)

{
  *(float *)(param_3 + 0x130) = param_1 - (*(float *)(param_3 + 300) + *(float *)(param_3 + 0x134));
  *(float *)(param_3 + 0x13c) =
       param_2 - (*(float *)(param_3 + 0x138) + *(float *)(param_3 + 0x140));
  FUN_1006523bc();
  return;
}




void FUN_10065260c(float param_1,long param_2)

{
  *(ushort *)(param_2 + 0x148) =
       *(ushort *)(param_2 + 0x148) & 0xe000 | (ushort)(int)(param_1 * 255.0) | 0x500;
  return;
}




void FUN_100652644(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint6 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  float *pfVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  
  if (*(long *)(param_1 + 0xd0) != 0) {
    pfVar11 = (float *)FUN_10003d5bc();
    local_78 = *(undefined2 *)(param_1 + 0x128);
    local_76 = *(undefined1 *)(param_1 + 0x12a);
    local_75 = (undefined1)(int)(pfVar11[6] * 255.0);
    if (((*(ushort *)(param_1 + 0x148) ^ 0xffff) & 0xff) != 0) {
      local_76 = (undefined1)*(ushort *)(param_1 + 0x148);
      local_78 = CONCAT11(local_76,local_76);
    }
    lVar15 = 0;
    DAT_101ea5900 = (int)*pfVar11;
    fVar19 = pfVar11[4];
    fVar3 = pfVar11[5];
    fVar16 = (float)(int)(float)(int)*pfVar11 + *(float *)(param_1 + 300) * fVar19;
    DAT_101ea5904 = (int)fVar16;
    fVar16 = (float)(int)(float)(int)fVar16 + fVar19 * *(float *)(param_1 + 0x130);
    DAT_101ea5908 = (int)fVar16;
    DAT_101ea590c = (int)((float)(int)(float)(int)fVar16 + fVar19 * *(float *)(param_1 + 0x134));
    DAT_101ea5910 = (int)pfVar11[1];
    fVar16 = (float)(int)(float)(int)pfVar11[1] + *(float *)(param_1 + 0x138) * fVar3;
    DAT_101ea5914 = (int)fVar16;
    fVar16 = (float)(int)(float)(int)fVar16 + fVar3 * *(float *)(param_1 + 0x13c);
    DAT_101ea5918 = (int)fVar16;
    DAT_101ea591c = (int)((float)(int)(float)(int)fVar16 + fVar3 * *(float *)(param_1 + 0x140));
    do {
      lVar12 = *(long *)(param_1 + 0xe0 + lVar15 * 8);
      if (lVar12 != 0) {
        uVar14 = (uint)lVar15;
        uVar1 = (uVar14 & 0xff) / 3;
        uVar2 = uVar14 - (uVar1 * 2 + (uVar14 & 0xff) / 3);
        fVar17 = (float)(&DAT_101ea5900)[(ulong)uVar2 & 0xff];
        fVar18 = (float)(&DAT_101ea5910)[uVar1];
        uVar6 = *(uint6 *)(param_1 + 0x144);
        uVar14 = 1 << (ulong)(uVar14 & 0x1f) & 0x1ff;
        bVar8 = (uVar14 & *(uint *)(param_1 + 0x144)) != 0;
        bVar9 = (uVar14 & (uint)(uVar6 >> 9)) != 0;
        bVar10 = (uVar14 & (uint)(uVar6 >> 0x12)) != 0;
        lVar13 = *(long *)(*(long *)(param_1 + 0xd0) + 8);
        fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(lVar12 + 8));
        fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar12 + 10));
        fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(lVar12 + 4));
        fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar12 + 6));
        fVar20 = 1.0 / (float)*(int *)(lVar13 + 0x48);
        bVar7 = bVar9;
        if (!bVar10) {
          bVar7 = bVar8;
          bVar8 = bVar9;
        }
        fVar5 = fVar3 + fVar19;
        if (bVar7) {
          fVar5 = fVar19;
          fVar19 = fVar3 + fVar19;
        }
        if (bVar8) {
          fVar4 = fVar16 + fVar4;
        }
        FUN_100043664(fVar17,fVar18,
                      (float)((&DAT_101ea5900)[(ulong)(uVar2 + 1) & 0xff] -
                             (&DAT_101ea5900)[(ulong)uVar2 & 0xff]) + fVar17,
                      (float)((&DAT_101ea5910)[uVar1 + 1] - (&DAT_101ea5910)[uVar1]) + fVar18,0,
                      SUB42(fVar20 * fVar19,0),
                      SUB42(1.0 - fVar4 * (1.0 / (float)*(int *)(lVar13 + 0x4c)),0),
                      SUB42(fVar20 * fVar5,0),param_2,&local_78,bVar10);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 9);
  }
  return;
}




void FUN_1006528d8(long param_1)

{
  FUN_100652644(param_1 + -0xb8);
  return;
}




undefined8 FUN_1006528e0(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0xd0) + 8) + 0x30;
  return 1;
}




undefined8 FUN_1006528f8(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x18) + 8) + 0x30;
  return 1;
}




void FUN_100652910(long param_1)

{
  FUN_1010b3fec(*(byte *)(param_1 + 0x149) & 0x1f);
  return;
}




void FUN_10065291c(long param_1)

{
  FUN_1010b3fec(*(byte *)(param_1 + 0x91) & 0x1f);
  return;
}




void FUN_100652928(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  FUN_100651f94(param_1,"",0,0,0,"",0,0,0,"",0,param_2,param_3,param_6,param_7,param_10,param_11,"",
                0,"",0,"",0);
  return;
}




void FUN_1006529e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  *(undefined4 *)(param_5 + 300) = param_1;
  *(undefined4 *)(param_5 + 0x130) = param_2;
  *(undefined4 *)(param_5 + 0x134) = param_3;
  *(undefined4 *)(param_5 + 0x138) = 0;
  *(undefined4 *)(param_5 + 0x13c) = param_4;
  *(undefined4 *)(param_5 + 0x140) = 0;
  FUN_1006523bc();
  return;
}




undefined4 FUN_1006529fc(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + (long)param_2 * 8 + 0xf8);
  if (lVar2 != 0) {
    uVar1 = NEON_ucvtf((uint)*(ushort *)(lVar2 + 8));
    NEON_ucvtf((uint)*(ushort *)(lVar2 + 10));
    return uVar1;
  }
  return 0;
}




void FUN_100652a28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a6db0;
  param_1[0x17] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100652a64(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014a6db0;
  param_1[0x17] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x1a);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100652aa4(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_1014a6db0;
  *param_1 = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 3);
  FUN_10064e2bc(param_1 + -0x17);
  return;
}




void FUN_100652adc(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-0x17] = &PTR_FUN_1014a6db0;
  *param_1 = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 3);
  pvVar1 = (void *)FUN_10064e2bc(param_1 + -0x17);
  operator_delete(pvVar1);
  return;
}




void FUN_100652b18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a6db0;
  param_1[0x17] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100652b54(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014a6db0;
  param_1[0x17] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x1a);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100652b94(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_1014a6db0;
  *param_1 = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 3);
  FUN_10064e2bc(param_1 + -0x17);
  return;
}




void FUN_100652bcc(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-0x17] = &PTR_FUN_1014a6db0;
  *param_1 = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 3);
  pvVar1 = (void *)FUN_10064e2bc(param_1 + -0x17);
  operator_delete(pvVar1);
  return;
}




long FUN_100652c08(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  uVar2 = DAT_101dbd2f0;
  *(undefined4 *)(puVar1 + 0x18) = 0x7000000;
  puVar1[0x19] = uVar2;
  *puVar1 = &PTR_FUN_1014a7108;
  puVar1[0x17] = &PTR_FUN_1014a7268;
  FUN_100657568(puVar1 + 0x1a);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  *(ushort *)(param_1 + 0xec) = *(ushort *)(param_1 + 0xec) & 0xc000 | 0x2ff;
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  uVar2 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  return param_1;
}




long thunk_FUN_100652c08(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  uVar2 = DAT_101dbd2f0;
  *(undefined4 *)(puVar1 + 0x18) = 0x7000000;
  puVar1[0x19] = uVar2;
  *puVar1 = &PTR_FUN_1014a7108;
  puVar1[0x17] = &PTR_FUN_1014a7268;
  FUN_100657568(puVar1 + 0x1a);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  *(ushort *)(param_1 + 0xec) = *(ushort *)(param_1 + 0xec) & 0xc000 | 0x2ff;
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  uVar2 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  return param_1;
}




void FUN_100652ca4(long param_1)

{
  FUN_1006575f4(param_1 + 0xd0);
  return;
}




void FUN_100652cac(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1006575f4(param_1 + 0xd0);
  FUN_100652cdc(param_1,param_3);
  return;
}




void FUN_100652cdc(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_1006575c4(param_1 + 0xd0);
  if (lVar1 != *(long *)(param_1 + 0xe0)) {
    *(long *)(param_1 + 0xe0) = lVar1;
    FUN_1000200a0(param_1);
    return;
  }
  return;
}




void FUN_100652d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0xd0);
  if (*plVar2 != 0) {
    lVar1 = FUN_1006575c4(plVar2,param_3);
    if (lVar1 == 0) {
      FUN_1006576cc(plVar2);
    }
    if (*plVar2 != 0) goto LAB_100652d74;
  }
  FUN_1006575f4(plVar2,param_2);
LAB_100652d74:
  FUN_100652cdc(param_1,param_3);
  return;
}




void FUN_100652d8c(long param_1)

{
  FUN_1006576cc(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}




undefined4 FUN_100652db4(long param_1)

{
  if (*(undefined4 **)(param_1 + 0xe0) != (undefined4 *)0x0) {
    return **(undefined4 **)(param_1 + 0xe0);
  }
  return 0;
}




undefined8 FUN_100652dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}




void FUN_100652dd4(long param_1,undefined4 *param_2,ushort param_3)

{
  *(undefined4 *)(param_1 + 0xe8) = *param_2;
  *(ushort *)(param_1 + 0xec) = *(ushort *)(param_1 + 0xec) & 0xe0ff | (param_3 & 0x1f) << 8;
  return;
}




long FUN_100652df4(long param_1)

{
  return param_1 + 0xe8;
}




void FUN_100652dfc(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0xec) = *(ushort *)(param_1 + 0xec) & 0xe0ff | (param_2 & 0x1f) << 8;
  return;
}




void FUN_100652e14(float param_1,long param_2)

{
  *(ushort *)(param_2 + 0xec) =
       *(ushort *)(param_2 + 0xec) & 0xe000 | (ushort)(int)(param_1 * 255.0) | 0x500;
  return;
}




void FUN_100652e40(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 4;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) & 0xfb | bVar1;
  return;
}




undefined4 FUN_100652e60(long param_1)

{
  float fVar1;
  undefined4 uVar2;
  long lVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  lVar3 = *(long *)(param_1 + 0xe0);
  if ((lVar3 != 0) && (*(long *)(param_1 + 0xd0) != 0)) {
    fVar1 = *(float *)(param_1 + 0x90);
    uVar4 = SUB42(fVar1,0);
    uVar5 = (undefined2)((uint)fVar1 >> 0x10);
    if (fVar1 < 0.0) {
      uVar2 = NEON_ucvtf((uint)*(ushort *)(lVar3 + 8));
      uVar4 = (undefined2)uVar2;
      uVar5 = (undefined2)((uint)uVar2 >> 0x10);
    }
    if (*(float *)(param_1 + 0x94) < 0.0) {
      NEON_ucvtf((uint)*(ushort *)(lVar3 + 10));
    }
    return CONCAT22(uVar5,uVar4);
  }
  return (undefined4)DAT_101dc1cb8;
}




int FUN_100652eac(long param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  float local_24;
  
  local_24 = 0.0;
  iVar1 = FUN_100652f30(param_1,&local_24);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    fVar2 = (float)param_2 / local_24;
    iVar1 = (int)fVar2;
    if ((1.0 <= ABS((float)param_2 - *(float *)(param_1 + 0x90))) ||
       (1.0 <= ABS((float)(int)fVar2 - *(float *)(param_1 + 0x94)))) {
      FUN_10064e47c(param_1);
    }
  }
  return iVar1;
}




bool FUN_100652f30(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0xed) >> 5 & 1) == 0) {
    return false;
  }
  lVar3 = *(long *)(param_1 + 0xe0);
  if ((lVar3 != 0) &&
     (fVar1 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 10)), 1.1920929e-07 <= fVar1)) {
    fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 8));
    *param_2 = fVar2 / fVar1;
    if ((*(byte *)(param_1 + 0xed) >> 5 & 1) == 0) {
      return false;
    }
  }
  return *(long *)(param_1 + 0xe0) != 0;
}




int FUN_100652f8c(undefined8 param_1,uint param_2)

{
  int iVar1;
  float local_24;
  
  local_24 = 0.0;
  iVar1 = FUN_100652f30(param_1,&local_24);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (int)((float)param_2 / local_24);
  }
  return iVar1;
}




int FUN_100652fd8(undefined8 param_1,uint param_2)

{
  int iVar1;
  float local_24;
  
  local_24 = 0.0;
  iVar1 = FUN_100652f30(param_1,&local_24);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (int)(local_24 * (float)param_2);
    FUN_10064e47c((int)(local_24 * (float)param_2),param_1);
  }
  return iVar1;
}




int FUN_100653038(undefined8 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  float local_24;
  
  local_24 = 0.0;
  iVar1 = FUN_100652f30(param_1,&local_24);
  iVar2 = (int)(local_24 * (float)param_2);
  if (iVar1 == 0) {
    iVar2 = -1;
  }
  return iVar2;
}




void FUN_100653080(long param_1,uint param_2)

{
  undefined *puVar1;
  ushort uVar2;
  
  if ((((*(ushort *)(param_1 + 0xec) & 0x2000) == 0 ^ param_2) & 1) != 0) {
    return;
  }
  uVar2 = 0x2000;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  *(ushort *)(param_1 + 0xec) = *(ushort *)(param_1 + 0xec) & 0xdfff | uVar2;
  puVar1 = &DAT_101872b9c;
  if (param_2 == 0) {
    puVar1 = &DAT_101dbd510;
  }
  FUN_10064e5b8(param_1,puVar1);
  return;
}




void FUN_1006530c8(float param_1,float param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if ((*(byte *)((long)param_3 + 0xed) >> 5 & 1) != 0) {
    iVar3 = (**(code **)(*param_3 + 0x100))(param_3,(int)param_1);
    lVar2 = 0x108;
    iVar1 = (int)param_2;
    if ((float)iVar3 <= param_2) {
      lVar2 = 0xf8;
      iVar1 = (int)param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x000100653140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + lVar2))(param_3,iVar1);
    return;
  }
  return;
}




undefined8 FUN_100653144(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x48))();
  return CONCAT44((int)param_2,(int)fVar1);
}




undefined8 FUN_10065316c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}




undefined8 FUN_100653174(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}




float FUN_10065317c(long *param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x48))();
  return *(float *)(param_1 + 9) * fVar1;
}




undefined4 FUN_1006531b0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xe0);
  if (lVar2 != 0) {
    uVar1 = NEON_ucvtf((uint)*(ushort *)(lVar2 + 8));
    NEON_ucvtf((uint)*(ushort *)(lVar2 + 10));
    return uVar1;
  }
  return 0;
}




void FUN_1006531d8(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  
  if (*(long *)(param_1 + 0xe0) != 0) {
    pfVar6 = (float *)FUN_10003d5bc();
    local_28 = *(undefined2 *)(param_1 + 0xe8);
    local_26 = *(undefined1 *)(param_1 + 0xea);
    local_25 = (undefined1)(int)(pfVar6[6] * 255.0);
    if (*(char *)(param_1 + 0xec) != -1) {
      uVar5 = (ushort)local_28 >> 8;
      local_28 = CONCAT11((char)uVar5,*(char *)(param_1 + 0xec));
    }
    fVar13 = *(float *)(param_1 + 0x90);
    fVar15 = *(float *)(param_1 + 0x94);
    lVar7 = *(long *)(param_1 + 0xe0);
    if ((fVar13 < 0.0) || (fVar14 = fVar13, fVar16 = fVar15, fVar15 < 0.0)) {
      if (lVar7 == 0) {
        uVar9 = 0;
        uVar10 = 0;
        uVar11 = 0;
        uVar12 = 0;
      }
      else {
        uVar1 = NEON_ucvtf((uint)*(ushort *)(lVar7 + 8));
        uVar9 = (undefined2)uVar1;
        uVar10 = (undefined2)((uint)uVar1 >> 0x10);
        uVar1 = NEON_ucvtf((uint)*(ushort *)(lVar7 + 10));
        uVar11 = (undefined2)uVar1;
        uVar12 = (undefined2)((uint)uVar1 >> 0x10);
      }
      fVar14 = (float)CONCAT22(uVar10,uVar9);
      if (0.0 <= fVar13) {
        fVar14 = fVar13;
      }
      fVar16 = (float)CONCAT22(uVar12,uVar11);
      if (0.0 <= fVar15) {
        fVar16 = fVar15;
      }
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0xd0) + 8);
    fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 8));
    fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 10));
    fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 4));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 6));
    fVar17 = 1.0 / (float)*(int *)(lVar8 + 0x48);
    fVar4 = fVar13 + fVar2;
    if ((*(byte *)(param_1 + 0xd8) & 1) != 0) {
      fVar4 = fVar2;
      fVar2 = fVar13 + fVar2;
    }
    if ((*(byte *)(param_1 + 0xd8) & 2) != 0) {
      fVar3 = fVar15 + fVar3;
    }
    FUN_100043664(SUB42(*pfVar6,0),SUB42(pfVar6[1],0),*pfVar6 + fVar14 * pfVar6[4],
                  pfVar6[1] + fVar16 * pfVar6[5],0,fVar17 * fVar2,
                  SUB42(1.0 - fVar3 * (1.0 / (float)*(int *)(lVar8 + 0x4c)),0),
                  SUB42(fVar17 * fVar4,0),param_2,&local_28,0);
  }
  return;
}




void FUN_100653328(long param_1)

{
  FUN_1006531d8(param_1 + -0xb8);
  return;
}




undefined8 FUN_100653330(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0xd0) + 8) + 0x30;
  return 1;
}




undefined8 FUN_100653348(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x18) + 8) + 0x30;
  return 1;
}




void FUN_100653360(long param_1)

{
  FUN_1010b3fec(*(byte *)(param_1 + 0xed) & 0x1f);
  return;
}




void FUN_10065336c(long param_1)

{
  FUN_1010b3fec(*(byte *)(param_1 + 0x35) & 0x1f);
  return;
}




void FUN_100653378(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100652c08();
  *puVar1 = &PTR_FUN_1014a72b0;
  puVar1[0x17] = &PTR_FUN_1014a7410;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  return;
}




void FUN_1006533a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100652c08();
  *puVar1 = &PTR_FUN_1014a72b0;
  puVar1[0x17] = &PTR_FUN_1014a7410;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  return;
}




void FUN_1006533d0(long param_1,undefined8 param_2)

{
  long lVar1;
  float fVar2;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar1 = FUN_10003d5bc();
    local_28 = *(undefined2 *)(param_1 + 0xe8);
    local_26 = *(undefined1 *)(param_1 + 0xea);
    fVar2 = (float)NEON_fminnm((int)(*(float *)(lVar1 + 0x18) * 255.0),0x437f0000);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    local_25 = (undefined1)(int)fVar2;
    if (*(code **)(param_1 + 0xf0) != (code *)0x0) {
      (**(code **)(param_1 + 0xf0))
                (param_2,lVar1,param_1 + 0xd0,&local_28,*(undefined8 *)(param_1 + 0xf8));
    }
  }
  return;
}




void FUN_10065345c(long param_1)

{
  FUN_1006533d0(param_1 + -0xb8);
  return;
}




void FUN_100653464(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xf0) = param_2;
  *(undefined8 *)(param_1 + 0xf8) = param_3;
  return;
}




void FUN_10065346c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_100652c08();
  *puVar2 = &PTR_FUN_1014a7458;
  puVar2[0x17] = &PTR_FUN_1014a75b8;
  puVar2[0x1e] = DAT_101873a40;
  puVar2[0x20] = 0x3f80000000000000;
  puVar2[0x1f] = 0x3f800000;
  uVar1 = DAT_101873a38;
  puVar2[0x21] = DAT_101dc1cb8;
  puVar2[0x22] = uVar1;
  *(undefined4 *)(puVar2 + 0x23) = 0;
  return;
}




void FUN_1006534d0(undefined4 param_1,undefined4 param_2,long param_3)

{
  float fVar1;
  
  *(undefined4 *)(param_3 + 0x118) = param_1;
  fVar1 = (float)___sincosf_stret();
  *(undefined4 *)(param_3 + 0xf8) = param_2;
  *(float *)(param_3 + 0xfc) = fVar1;
  *(float *)(param_3 + 0x100) = -fVar1;
  *(undefined4 *)(param_3 + 0x104) = param_2;
  FUN_1000200a0(param_3);
  return;
}




void FUN_100653508(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xf0) = param_1;
  *(undefined4 *)(param_3 + 0xf4) = param_2;
  FUN_1000200a0();
  return;
}




void FUN_100653514(long param_1,long *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  lVar8 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(long *)(param_1 + 0xe0) != 0) {
    pfVar7 = (float *)FUN_10003d5bc();
    lVar9 = *(long *)(*(long *)(param_1 + 0xd0) + 8);
    fVar10 = (float)NEON_ucvtf(*(undefined4 *)(lVar9 + 0x48));
    fVar12 = (float)NEON_ucvtf(*(undefined4 *)(lVar9 + 0x4c));
    lVar9 = *(long *)(param_1 + 0xe0);
    fVar18 = (float)*(ushort *)(lVar9 + 4) / fVar10;
    fVar19 = 1.0 - (float)*(ushort *)(lVar9 + 6) / fVar12;
    fVar10 = (float)((uint)*(ushort *)(lVar9 + 8) + (uint)*(ushort *)(lVar9 + 4)) / fVar10;
    fVar20 = 1.0 - (float)((uint)*(ushort *)(lVar9 + 10) + (uint)*(ushort *)(lVar9 + 6)) / fVar12;
    bVar1 = *(byte *)(param_1 + 0xd8);
    fVar11 = (float)FUN_100652e60(param_1);
    fVar13 = fVar18;
    if ((bVar1 & 1) != 0) {
      fVar13 = fVar10;
      fVar10 = fVar18;
    }
    bVar6 = (bVar1 & 2) != 0;
    fVar18 = fVar20;
    if (bVar6) {
      fVar18 = fVar19;
    }
    fVar21 = *(float *)(param_1 + 0xf0) * pfVar7[4] * fVar11;
    fVar25 = fVar21 + *pfVar7;
    if (bVar6) {
      fVar19 = fVar20;
    }
    fVar12 = pfVar7[5] * fVar12;
    fVar14 = *(float *)(param_1 + 0xf4) * fVar12;
    fVar17 = fVar14 + pfVar7[1];
    fVar23 = -(*(float *)(param_1 + 0xf4) * fVar12);
    fVar20 = pfVar7[4] * fVar11 - fVar21;
    fVar12 = fVar12 - fVar14;
    fVar27 = *(float *)(param_1 + 0x100) * fVar23;
    fVar23 = *(float *)(param_1 + 0x104) * fVar23;
    fVar28 = fVar21 * *(float *)(param_1 + 0xf8);
    fVar21 = fVar21 * *(float *)(param_1 + 0xfc);
    fVar15 = *(float *)(param_1 + 0xf8) * fVar20;
    fVar20 = *(float *)(param_1 + 0xfc) * fVar20;
    fVar26 = fVar12 * *(float *)(param_1 + 0x100);
    fVar12 = fVar12 * *(float *)(param_1 + 0x104);
    fVar16 = fVar15 + fVar27 + fVar25;
    fVar14 = fVar20 + fVar23 + fVar17;
    fVar24 = (fVar26 - fVar28) + fVar25;
    fVar22 = (fVar12 - fVar21) + fVar17;
    uVar2 = *(undefined1 *)(param_1 + 0xe8);
    uVar3 = *(undefined1 *)(param_1 + 0xe9);
    uVar4 = *(undefined1 *)(param_1 + 0xea);
    fVar11 = (float)NEON_fminnm((int)(pfVar7[6] * 255.0),0x437f0000);
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    pfVar7 = (float *)*param_2;
    *pfVar7 = (fVar27 - fVar28) + fVar25;
    pfVar7[1] = (fVar23 - fVar21) + fVar17;
    pfVar7[2] = 0.0;
    *(undefined1 *)(pfVar7 + 3) = uVar2;
    *(undefined1 *)((long)pfVar7 + 0xd) = uVar3;
    *(undefined1 *)((long)pfVar7 + 0xe) = uVar4;
    uVar5 = (undefined1)(int)fVar11;
    *(undefined1 *)((long)pfVar7 + 0xf) = uVar5;
    pfVar7[4] = fVar13;
    pfVar7[5] = fVar19;
    lVar9 = *param_2;
    *(float *)(lVar9 + 0x18) = fVar24;
    *param_2 = lVar9 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(float *)(lVar9 + 0x1c) = fVar22;
    *(undefined4 *)(lVar9 + 0x20) = 0;
    *(undefined1 *)(lVar9 + 0x24) = uVar2;
    *(undefined1 *)(lVar9 + 0x25) = uVar3;
    *(undefined1 *)(lVar9 + 0x26) = uVar4;
    *(undefined1 *)(lVar9 + 0x27) = uVar5;
    *(float *)(lVar9 + 0x28) = fVar13;
    *(float *)(lVar9 + 0x2c) = fVar18;
    lVar9 = *param_2;
    *(float *)(lVar9 + 0x18) = fVar16;
    *param_2 = lVar9 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(float *)(lVar9 + 0x1c) = fVar14;
    *(undefined4 *)(lVar9 + 0x20) = 0;
    *(undefined1 *)(lVar9 + 0x24) = uVar2;
    *(undefined1 *)(lVar9 + 0x25) = uVar3;
    *(undefined1 *)(lVar9 + 0x26) = uVar4;
    *(undefined1 *)(lVar9 + 0x27) = uVar5;
    *(float *)(lVar9 + 0x28) = fVar10;
    *(float *)(lVar9 + 0x2c) = fVar19;
    lVar9 = *param_2;
    *param_2 = lVar9 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(ulong *)(lVar9 + 0x18) = CONCAT44(fVar22,fVar24);
    *(undefined4 *)(lVar9 + 0x20) = 0;
    *(undefined1 *)(lVar9 + 0x24) = uVar2;
    *(undefined1 *)(lVar9 + 0x25) = uVar3;
    *(undefined1 *)(lVar9 + 0x26) = uVar4;
    *(undefined1 *)(lVar9 + 0x27) = uVar5;
    *(float *)(lVar9 + 0x28) = fVar13;
    *(float *)(lVar9 + 0x2c) = fVar18;
    lVar9 = *param_2;
    *param_2 = lVar9 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(ulong *)(lVar9 + 0x18) = CONCAT44(fVar12 + fVar20 + fVar17,fVar26 + fVar15 + fVar25);
    *(undefined4 *)(lVar9 + 0x20) = 0;
    *(undefined1 *)(lVar9 + 0x24) = uVar2;
    *(undefined1 *)(lVar9 + 0x25) = uVar3;
    *(undefined1 *)(lVar9 + 0x26) = uVar4;
    *(undefined1 *)(lVar9 + 0x27) = uVar5;
    *(float *)(lVar9 + 0x28) = fVar10;
    *(float *)(lVar9 + 0x2c) = fVar18;
    lVar9 = *param_2;
    *param_2 = lVar9 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(ulong *)(lVar9 + 0x18) = CONCAT44(fVar14,fVar16);
    *(undefined4 *)(lVar9 + 0x20) = 0;
    *(undefined1 *)(lVar9 + 0x24) = uVar2;
    *(undefined1 *)(lVar9 + 0x25) = uVar3;
    *(undefined1 *)(lVar9 + 0x26) = uVar4;
    *(undefined1 *)(lVar9 + 0x27) = uVar5;
    *(float *)(lVar9 + 0x28) = fVar10;
    *(float *)(lVar9 + 0x2c) = fVar19;
    *param_2 = *param_2 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != lVar8) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100653830(long param_1)

{
  FUN_100653514(param_1 + -0xb8);
  return;
}




void FUN_100653838(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100652c08();
  *puVar1 = &PTR_FUN_1014a7600;
  puVar1[0x17] = &PTR_FUN_1014a7760;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  *(undefined1 *)(puVar1 + 0x20) = 0;
  return;
}




void FUN_100653868(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 in_x7;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined2 local_28;
  char local_26;
  undefined1 local_25;
  
  if (*(long *)(param_1 + 0xe0) != 0) {
    puVar2 = (undefined4 *)FUN_10003d5bc();
    local_28 = *(undefined2 *)(param_1 + 0xe8);
    local_25 = (undefined1)(int)((float)puVar2[6] * 255.0);
    cVar1 = *(char *)(param_1 + 0xec);
    local_26 = *(char *)(param_1 + 0xea);
    if (cVar1 != -1) {
      local_28 = CONCAT11(cVar1,cVar1);
      local_26 = cVar1;
    }
    fVar8 = *(float *)(param_1 + 0x90);
    fVar10 = *(float *)(param_1 + 0x94);
    lVar3 = *(long *)(param_1 + 0xe0);
    if ((fVar8 < 0.0) || (fVar9 = fVar8, fVar11 = fVar10, fVar10 < 0.0)) {
      if (lVar3 == 0) {
        uVar4 = 0;
        uVar5 = 0;
        uVar6 = 0;
        uVar7 = 0;
      }
      else {
        uVar12 = NEON_ucvtf((uint)*(ushort *)(lVar3 + 8));
        uVar4 = (undefined2)uVar12;
        uVar5 = (undefined2)((uint)uVar12 >> 0x10);
        uVar12 = NEON_ucvtf((uint)*(ushort *)(lVar3 + 10));
        uVar6 = (undefined2)uVar12;
        uVar7 = (undefined2)((uint)uVar12 >> 0x10);
      }
      fVar9 = (float)CONCAT22(uVar5,uVar4);
      if (0.0 <= fVar8) {
        fVar9 = fVar8;
      }
      fVar11 = (float)CONCAT22(uVar7,uVar6);
      if (0.0 <= fVar10) {
        fVar11 = fVar10;
      }
    }
    uVar13 = NEON_fminnm(*(undefined4 *)(param_1 + 0xf4),1.0 - *(float *)(param_1 + 0xf0));
    uVar12 = NEON_fminnm(*(undefined4 *)(param_1 + 0xfc),1.0 - *(float *)(param_1 + 0xf8));
    FUN_10065397c((short)*puVar2,(short)puVar2[1],fVar9,fVar11,0,puVar2[4],puVar2[5],0,param_2,
                  &local_28,lVar3,param_1 + 0xd0,*(byte *)(param_1 + 0xd8) & 1,
                  *(byte *)(param_1 + 0xd8) >> 1 & 1,*(undefined1 *)(param_1 + 0x100),in_x7,0,uVar13
                  ,uVar12);
  }
  return;
}




void FUN_10065397c(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,long *param_9,undefined1 *param_10,
                  long param_11,long *param_12,int param_13,int param_14,uint param_15,
                  undefined8 param_16,undefined8 param_17,undefined8 param_18,float param_19)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
  fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
  fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 10));
  fVar4 = fVar3;
  fVar8 = fVar5 + fVar3;
  if (param_13 == 0) {
    fVar4 = fVar5 + fVar3;
    fVar8 = fVar3;
  }
  fVar6 = fVar13;
  fVar3 = fVar7 + fVar13;
  if (param_14 == 0) {
    fVar6 = fVar7 + fVar13;
    fVar3 = fVar13;
  }
  if (5 < *(int *)((long)param_9 + 0xc) - (int)param_9[1]) {
    fVar12 = 1.0 / (float)*(int *)(*(long *)(*param_12 + 8) + 0x48);
    fVar13 = 1.0 / (float)*(int *)(*(long *)(*param_12 + 8) + 0x4c);
    fVar5 = param_8 * param_6 * fVar5;
    fVar9 = param_1 - fVar5;
    fVar7 = param_2 - fVar7 * (float)param_17 * param_7;
    param_1 = param_6 * param_3 + param_1;
    param_2 = param_2 + param_4 * param_7;
    fVar8 = fVar12 * fVar8;
    fVar3 = 1.0 - fVar3 * fVar13;
    fVar12 = fVar12 * fVar4;
    fVar13 = 1.0 - fVar6 * fVar13;
    fVar11 = 0.0;
    fVar6 = 0.0;
    fVar10 = 0.0;
    fVar4 = 0.0;
    if ((param_15 & 1) == 0) {
      fVar4 = fVar12 - fVar8;
      fVar11 = fVar4 * param_17._4_4_;
      fVar6 = fVar4 * (float)param_18;
      fVar10 = fVar4 * param_18._4_4_;
      fVar4 = fVar4 * param_19;
    }
    fVar5 = fVar5 + param_6 * param_3;
    pfVar1 = (float *)*param_9;
    *pfVar1 = fVar9 + param_17._4_4_ * fVar5;
    pfVar1[1] = fVar7;
    pfVar1[2] = param_5;
    *(undefined1 *)(pfVar1 + 3) = *param_10;
    *(undefined1 *)((long)pfVar1 + 0xd) = param_10[1];
    *(undefined1 *)((long)pfVar1 + 0xe) = param_10[2];
    *(undefined1 *)((long)pfVar1 + 0xf) = param_10[3];
    pfVar1[4] = fVar11 + fVar8;
    pfVar1[5] = fVar3;
    lVar2 = *param_9;
    fVar9 = fVar9 + param_18._4_4_ * fVar5;
    *(float *)(lVar2 + 0x18) = fVar9;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = param_2;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar10 + fVar8;
    *(float *)(lVar2 + 0x2c) = fVar13;
    lVar2 = *param_9;
    fVar11 = param_1 - (float)param_18 * fVar5;
    *(float *)(lVar2 + 0x18) = fVar11;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = fVar7;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar12 - fVar6;
    *(float *)(lVar2 + 0x2c) = fVar3;
    lVar2 = *param_9;
    *(float *)(lVar2 + 0x18) = fVar9;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = param_2;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar10 + fVar8;
    *(float *)(lVar2 + 0x2c) = fVar13;
    lVar2 = *param_9;
    *(float *)(lVar2 + 0x18) = param_1 - param_19 * fVar5;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = param_2;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar12 - fVar4;
    *(float *)(lVar2 + 0x2c) = fVar13;
    lVar2 = *param_9;
    *(float *)(lVar2 + 0x18) = fVar11;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = fVar7;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar12 - fVar6;
    *(float *)(lVar2 + 0x2c) = fVar3;
    *param_9 = *param_9 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
  }
  return;
}




void FUN_100653c30(long param_1)

{
  FUN_100653868(param_1 + -0xb8);
  return;
}




void FUN_100653c38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a7108;
  param_1[0x17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100653c74(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014a7108;
  param_1[0x17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100653cb4(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_1014a7108;
  *param_1 = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 3);
  FUN_10064e2bc(param_1 + -0x17);
  return;
}




void FUN_100653cec(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-0x17] = &PTR_FUN_1014a7108;
  *param_1 = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 3);
  pvVar1 = (void *)FUN_10064e2bc(param_1 + -0x17);
  operator_delete(pvVar1);
  return;
}




void FUN_100653d28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a7108;
  param_1[0x17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100653d64(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014a7108;
  param_1[0x17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100653da4(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_1014a7108;
  *param_1 = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 3);
  FUN_10064e2bc(param_1 + -0x17);
  return;
}




void FUN_100653ddc(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-0x17] = &PTR_FUN_1014a7108;
  *param_1 = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 3);
  pvVar1 = (void *)FUN_10064e2bc(param_1 + -0x17);
  operator_delete(pvVar1);
  return;
}




void FUN_100653e18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a7108;
  param_1[0x17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100653e54(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014a7108;
  param_1[0x17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100653e94(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_1014a7108;
  *param_1 = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 3);
  FUN_10064e2bc(param_1 + -0x17);
  return;
}




void FUN_100653ecc(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-0x17] = &PTR_FUN_1014a7108;
  *param_1 = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 3);
  pvVar1 = (void *)FUN_10064e2bc(param_1 + -0x17);
  operator_delete(pvVar1);
  return;
}




void FUN_100653f08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a7108;
  param_1[0x17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100653f44(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014a7108;
  param_1[0x17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100653f84(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_1014a7108;
  *param_1 = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 3);
  FUN_10064e2bc(param_1 + -0x17);
  return;
}




void FUN_100653fbc(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-0x17] = &PTR_FUN_1014a7108;
  *param_1 = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 3);
  pvVar1 = (void *)FUN_10064e2bc(param_1 + -0x17);
  operator_delete(pvVar1);
  return;
}




long FUN_100653ff8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100652c08();
  *puVar1 = &PTR_FUN_1014a77a8;
  puVar1[0x17] = &PTR_FUN_1014a7910;
  FUN_100657568(puVar1 + 0x1e);
  *(undefined8 *)(param_1 + 0x100) = 0;
  return param_1;
}




void FUN_10065403c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_1006575f4(param_1 + 0xf0);
  uVar1 = FUN_1006575c4(param_1 + 0xf0,param_3);
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  FUN_1000200a0(param_1);
  return;
}




undefined8 FUN_100654084(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0xd0) + 8) + 0x30;
  param_2[1] = *(long *)(*(long *)(param_1 + 0xf0) + 8) + 0x30;
  return 2;
}




undefined8 FUN_1006540ac(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x18) + 8) + 0x30;
  param_2[1] = *(long *)(*(long *)(param_1 + 0x38) + 8) + 0x30;
  return 2;
}




undefined8 FUN_1006540d4(long param_1,float *param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar7 = FUN_100652db4();
  bVar1 = *(byte *)(param_1 + 0xd8);
  lVar8 = FUN_1006575b8(param_1 + 0xd0,uVar7);
  fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + 4));
  fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + 6));
  fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + 8));
  fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + 10));
  lVar8 = *(long *)(*(long *)(param_1 + 0xd0) + 8);
  fVar10 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + 0x48));
  fVar12 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + 0x4c));
  fVar15 = fVar2;
  if ((bVar1 & 1) != 0) {
    fVar15 = fVar3 + fVar2;
  }
  fVar14 = fVar17;
  if ((bVar1 & 2) != 0) {
    fVar14 = fVar16 + fVar17;
  }
  fVar15 = (1.0 / fVar10) * fVar15;
  fVar14 = 1.0 - fVar14 * (1.0 / fVar12);
  if (*(undefined4 **)(param_1 + 0x100) == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = **(undefined4 **)(param_1 + 0x100);
  }
  fVar16 = fVar16 + fVar17;
  if ((bVar1 & 2) != 0) {
    fVar16 = fVar17;
  }
  fVar17 = fVar3 + fVar2;
  if ((bVar1 & 1) != 0) {
    fVar17 = fVar2;
  }
  bVar1 = *(byte *)(param_1 + 0xf8);
  lVar8 = FUN_1006575b8(param_1 + 0xf0,uVar9);
  fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + 4));
  fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + 6));
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + 8));
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + 10));
  lVar8 = *(long *)(*(long *)(param_1 + 0xf0) + 8);
  fVar11 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + 0x48));
  fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + 0x4c));
  fVar6 = fVar4 + fVar2;
  if ((bVar1 & 1) != 0) {
    fVar6 = fVar2;
    fVar2 = fVar4 + fVar2;
  }
  fVar4 = fVar5 + fVar3;
  if ((bVar1 & 2) != 0) {
    fVar4 = fVar3;
    fVar3 = fVar5 + fVar3;
  }
  fVar2 = (1.0 / fVar11) * fVar2;
  fVar5 = 1.0 - fVar3 * (1.0 / fVar13);
  fVar17 = ((1.0 / fVar11) * fVar6 - fVar2) / ((1.0 / fVar10) * fVar17 - fVar15);
  fVar3 = (1.0 - (fVar5 + fVar4 * (1.0 / fVar13))) / (1.0 - (fVar14 + fVar16 * (1.0 / fVar12)));
  *param_2 = fVar2 - fVar15 * fVar17;
  param_2[1] = fVar5 - fVar14 * fVar3;
  param_2[2] = fVar17;
  param_2[3] = fVar3;
  return 4;
}




undefined8 FUN_100654258(long param_1)

{
  FUN_1006540d4(param_1 + -0xb8);
  return 4;
}




void FUN_100654274(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a77a8;
  param_1[0x17] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0x1e);
  *param_1 = &PTR_FUN_1014a7108;
  param_1[0x17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1006542d0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014a77a8;
  param_1[0x17] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0x1e);
  *param_1 = &PTR_FUN_1014a7108;
  param_1[0x17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100654330(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_1014a77a8;
  *param_1 = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 7);
  *puVar1 = &PTR_FUN_1014a7108;
  *param_1 = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 3);
  FUN_10064e2bc(puVar1);
  return;
}




void FUN_10065438c(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + -0x17;
  *puVar2 = &PTR_FUN_1014a77a8;
  *param_1 = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 7);
  *puVar2 = &PTR_FUN_1014a7108;
  *param_1 = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 3);
  pvVar1 = (void *)FUN_10064e2bc(puVar2);
  operator_delete(pvVar1);
  return;
}




long * FUN_1006543ec(long *param_1)

{
  undefined8 *puVar1;
  undefined8 local_28;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_10064e2bc_1014a7958;
  FUN_1010b3878(puVar1 + 0x17);
  FUN_1010b2058(param_1 + 0x1c);
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  FUN_10064e47c(0x42c80000,0x42c80000,param_1);
  FUN_10064e5b8(param_1,&DAT_101872b9c);
  local_28 = 0;
  (**(code **)(*param_1 + 0x28))(param_1,&local_28);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0xc;
  return param_1;
}




long * thunk_FUN_1006543ec(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_10064e2bc_1014a7958;
  FUN_1010b3878(puVar1 + 0x17);
  FUN_1010b2058(param_1 + 0x1c);
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  FUN_10064e47c(0x42c80000,0x42c80000,param_1);
  FUN_10064e5b8(param_1,&DAT_101872b9c);
  uStack_28 = 0;
  (**(code **)(*param_1 + 0x28))(param_1,&uStack_28);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0xc;
  return param_1;
}




void FUN_100654484(long param_1)

{
  long lVar1;
  
  if ((*(uint *)(param_1 + 0x84) & 1) == 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 1;
    for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x30)) {
      if ((*(byte *)(lVar1 + 0x84) & 1) == 0) {
        FUN_1000200a0(lVar1);
      }
    }
  }
  return;
}




void FUN_100654488(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x198) = param_2;
  return;
}




long FUN_100654490(float param_1,float param_2,long *param_3)

{
  long lVar1;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  lVar1 = FUN_100642ed4();
  if (((lVar1 != 0) && ((char)param_3[0x33] != '\0')) &&
     (((**(code **)(*param_3 + 0x68))(param_3,&local_38,&local_40), param_1 < local_38 ||
      (((local_40 < param_1 || (param_2 < local_34)) || (local_3c < param_2)))))) {
    lVar1 = 0;
  }
  return lVar1;
}




void FUN_100654528(long *param_1,long param_2)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  
  FUN_100643064();
  if ((char)param_1[0x33] != '\0') {
    (**(code **)(*param_1 + 0x68))(param_1,&local_28,&local_30);
    uVar4 = (uint)fStack_24;
    iVar5 = (int)local_30;
    sVar3 = *(short *)(param_2 + 0x1c);
    iVar1 = (int)local_28;
    if ((int)local_28 <= (int)sVar3 && (~(int)sVar3 & 0xffffU) != 0) {
      iVar1 = (int)sVar3;
    }
    *(short *)((long)param_1 + 0x7c) = (short)iVar1;
    uVar2 = *(ushort *)(param_2 + 0x1e);
    if ((int)uVar4 <= (int)(short)uVar2 && uVar2 != 0xffff) {
      uVar4 = (uint)uVar2;
    }
    *(short *)((long)param_1 + 0x7e) = (short)uVar4;
    sVar3 = *(short *)(param_2 + 0x20);
    if ((sVar3 == iVar5 || sVar3 < iVar5) && (~(int)sVar3 & 0xffffU) != 0) {
      iVar5 = (int)sVar3;
    }
    *(short *)(param_1 + 0x10) = (short)iVar5;
    uVar2 = *(ushort *)(param_2 + 0x22);
    uVar4 = (uint)fStack_2c;
    if ((int)(short)uVar2 <= (int)uVar4 && uVar2 != 0xffff) {
      uVar4 = (uint)uVar2;
    }
    *(short *)((long)param_1 + 0x82) = (short)uVar4;
  }
  return;
}




void FUN_1006545f8(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_80e0 [32772];
  int local_dc;
  undefined1 auStack_d8 [144];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  if (((char)param_1[0x33] == '\0') && (param_1[0x31] == 0)) {
    if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
      FUN_100643134(param_1,param_2,param_3,param_4,param_5);
      return;
    }
  }
  else {
    iVar1 = *param_4;
    if (iVar1 != 0) {
      uVar2 = FUN_1010b0058(0);
      FUN_1010b24ac(auStack_d8,"Composite task (ViewNode)",param_3,iVar1,uVar2,param_5,
                    param_5 + 0x28,0);
      FUN_1010b36cc(param_2,auStack_d8,0);
      *param_4 = 0;
      FUN_1010b2508(auStack_d8);
    }
    (**(code **)(*param_1 + 0x148))(param_1,param_5);
    if ((code *)param_1[0x31] != (code *)0x0) {
      (*(code *)param_1[0x31])(param_2,param_1,param_1[0x32]);
    }
    local_dc = 0;
    FUN_100643134(param_1,param_2,auStack_80e0,&local_dc,param_1 + 0x17);
    iVar1 = local_dc;
    if (local_dc != 0) {
      uVar2 = FUN_1010b0058(0);
      FUN_1010b24ac(auStack_d8,"Composite task (ViewNode)",auStack_80e0,iVar1,uVar2,param_1 + 0x17,
                    param_1 + 0x1c,0);
      FUN_1010b36cc(param_2,auStack_d8,0);
      FUN_1010b2508(auStack_d8);
    }
    if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1006547b4(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  float local_28;
  undefined1 auStack_24 [4];
  
  FUN_10064140c(auStack_24,&local_28);
  if (*(char *)(param_1 + 0x198) == '\0') {
    FUN_100657a24(param_1 + 0xb8,param_2);
  }
  else {
    lVar1 = FUN_10003d5bc(param_1);
    uVar3 = (uint)(float)((int)*(short *)(lVar1 + 0x20) - (int)*(short *)(lVar1 + 0x1c));
    uVar2 = (uint)(float)((int)*(short *)(lVar1 + 0x22) - (int)*(short *)(lVar1 + 0x1e));
    FUN_100657a68(param_1 + 0xb8,param_2,(long)*(short *)(lVar1 + 0x1c),
                  (int)(local_28 - (float)(int)*(short *)(lVar1 + 0x22)),
                  uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU),
                  uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
  }
  return;
}




void FUN_100654858(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




long FUN_10065486c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1006543ec();
  uVar1 = DAT_101dbd2f0;
  *(undefined4 *)(puVar2 + 0x35) = 0x7000000;
  puVar2[0x36] = uVar1;
  *puVar2 = &PTR_FUN_1014a7ab8;
  puVar2[0x34] = &PTR_FUN_1014a7c30;
  FUN_1010b73bc(puVar2 + 0x37);
  FUN_1010b73bc(param_1 + 0x1e8);
  FUN_1010b67a4(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x290) = 0x20000000200;
  *(undefined2 *)(param_1 + 0x298) = 1;
  *(undefined1 *)(param_1 + 0x29a) = 1;
  FUN_10064e47c(0x43fa0000,0x43fa0000,param_1);
  if (*(char *)(param_1 + 0x298) == '\0') {
    *(undefined1 *)(param_1 + 0x298) = 0;
    FUN_100654a88(param_1);
  }
  else {
    *(undefined1 *)(param_1 + 0x298) = 1;
    FUN_100654938(param_1);
  }
  return param_1;
}




void FUN_100654920(long param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x298) = 1;
    FUN_100654938();
    return;
  }
  *(undefined1 *)(param_1 + 0x298) = 0;
  FUN_100654a88();
  return;
}




void FUN_100654938(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  lVar1 = param_1 + 0x1b8;
  iVar4 = FUN_1010b79d0(lVar1);
  iVar5 = FUN_1010b79f4(lVar1);
  if ((iVar4 != *(int *)(param_1 + 0x290)) || (iVar5 != *(int *)(param_1 + 0x294))) {
    if (*(char *)(param_1 + 0x299) != '\0') {
      FUN_100654a88(param_1);
    }
    FUN_1010b7478(lVar1,4);
    FUN_1010b75c4(lVar1,0,*(undefined4 *)(param_1 + 0x290),*(undefined4 *)(param_1 + 0x294),1,1,0);
    iVar4 = FUN_1010b555c(2);
    uVar6 = 5;
    if (iVar4 == 0) {
      uVar6 = 0x15;
    }
    lVar2 = param_1 + 0x1e8;
    FUN_1010b7478(lVar2,4);
    FUN_1010b75c4(lVar2,0,*(undefined4 *)(param_1 + 0x290),*(undefined4 *)(param_1 + 0x294),1,uVar6,
                  0);
    FUN_1010b7a18(lVar1,0,0,0);
    FUN_1010b7a3c(lVar1,1,1,0);
    lVar3 = param_1 + 0x218;
    FUN_1010b67c0(lVar3,*(undefined4 *)(param_1 + 0x290),*(undefined4 *)(param_1 + 0x294));
    FUN_1010b685c(lVar3,0,lVar1,1,0);
    FUN_1010b6874(lVar3,lVar2,1,0);
    *(undefined1 *)(param_1 + 0x299) = 1;
  }
  return;
}




void FUN_100654a88(long param_1)

{
  FUN_1010b73f4(param_1 + 0x1b8);
  FUN_1010b73f4(param_1 + 0x1e8);
  FUN_1010b6810(param_1 + 0x218);
  *(undefined1 *)(param_1 + 0x299) = 0;
  return;
}




undefined1 FUN_100654ac0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x298);
}




void FUN_100654ac8(undefined8 param_1)

{
  FUN_100654484();
  FUN_100654aec(param_1);
  return;
}




void FUN_100654aec(undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (float)FUN_1006429c4();
  iVar1 = (int)fVar3;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  iVar2 = (int)param_2;
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  if ((iVar1 == *(int *)(param_3 + 0x290)) && (iVar2 == *(int *)(param_3 + 0x294))) {
    return;
  }
  *(int *)(param_3 + 0x290) = iVar1;
  *(int *)(param_3 + 0x294) = iVar2;
  FUN_1000200a0(param_3);
  return;
}




void thunk_FUN_100654aec(undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (float)FUN_1006429c4();
  iVar1 = (int)fVar3;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  iVar2 = (int)param_2;
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  if ((iVar1 == *(int *)(param_3 + 0x290)) && (iVar2 == *(int *)(param_3 + 0x294))) {
    return;
  }
  *(int *)(param_3 + 0x290) = iVar1;
  *(int *)(param_3 + 0x294) = iVar2;
  FUN_1000200a0(param_3);
  return;
}




void FUN_100654b58(long *param_1,undefined8 param_2,long param_3,uint *param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40e0 [16384];
  undefined1 auStack_e0 [148];
  int local_4c;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  if ((char)param_1[0x53] == '\0') {
    if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
      FUN_1006545f8(param_1,param_2,param_3,param_4,param_5);
      return;
    }
  }
  else {
    uVar3 = FUN_1010b3760(param_2,1);
    uVar1 = *param_4;
    *(long **)(param_3 + (ulong)uVar1 * 8) = param_1 + 0x35;
    *param_4 = uVar1 + 1;
    (**(code **)(*param_1 + 0x148))(param_1,param_5);
    if (*(char *)((long)param_1 + 0x29a) != '\0') {
      FUN_1010b3974(auStack_e0,param_1 + 0x17,param_1 + 0x1c);
      FUN_1010b3af8(0,0,0,0,auStack_e0);
      FUN_1010b36cc(uVar3,auStack_e0,0);
    }
    if ((code *)param_1[0x31] != (code *)0x0) {
      (*(code *)param_1[0x31])(uVar3,param_1,param_1[0x32]);
    }
    local_4c = 0;
    FUN_100643134(param_1,uVar3,auStack_40e0,&local_4c,param_1 + 0x17);
    iVar2 = local_4c;
    if (local_4c != 0) {
      uVar4 = FUN_1010b0058(0);
      FUN_1010b24ac(auStack_e0,"Composite task (ViewRTNode)",auStack_40e0,iVar2,uVar4,param_1 + 0x17
                    ,param_1 + 0x1c,0);
      FUN_1010b36cc(uVar3,auStack_e0,0);
      FUN_1010b2508(auStack_e0);
    }
    if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100654d14(long param_1)

{
  if (*(char *)(param_1 + 0x298) != '\0') {
    FUN_100654938();
    return;
  }
  return;
}




void FUN_100654d24(long param_1,undefined8 param_2)

{
  float *pfVar1;
  undefined3 local_24;
  undefined1 uStack_21;
  
  pfVar1 = (float *)FUN_10003d5bc();
  _local_24 = CONCAT13((char)(int)(pfVar1[6] * 255.0),0xffffff);
  FUN_100043664(*pfVar1,pfVar1[1],*pfVar1 + *(float *)(param_1 + 0x90) * pfVar1[4],
                pfVar1[1] + *(float *)(param_1 + 0x94) * pfVar1[5],0,0,0x3f800000,0x3f800000,param_2
                ,&local_24,0);
  return;
}




void FUN_100654db0(long param_1)

{
  FUN_100654d24(param_1 + -0x1a0);
  return;
}




undefined8 FUN_100654db8(long param_1,long *param_2)

{
  *param_2 = param_1 + 0x1b8;
  return 1;
}




undefined8 FUN_100654dc8(long param_1,long *param_2)

{
  *param_2 = param_1 + 0x18;
  return 1;
}




void FUN_100654dd8(void)

{
  FUN_1010b3fec(2);
  return;
}




void FUN_100654de0(void)

{
  FUN_1010b3fec(2);
  return;
}




void FUN_100654de8(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x298) != '\0') {
    lVar1 = FUN_10003d5bc(param_1);
    FUN_10065793c(param_1 + 0xb8,(int)(*(float *)(lVar1 + 0x10) * *(float *)(param_1 + 0x90)),
                  (int)(*(float *)(lVar1 + 0x14) * *(float *)(param_1 + 0x94)),param_1 + 0x218);
    return;
  }
  FUN_1006547b4(param_1);
  return;
}




void FUN_100654e44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a7ab8;
  param_1[0x34] = &PTR_FUN_1014a7c30;
  FUN_1010b7434(param_1 + 0x3d);
  FUN_1010b7434(param_1 + 0x37);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100654e88(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014a7ab8;
  param_1[0x34] = &PTR_FUN_1014a7c30;
  FUN_1010b7434(param_1 + 0x3d);
  FUN_1010b7434(param_1 + 0x37);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100654ed0(undefined8 *param_1)

{
  param_1[-0x34] = &PTR_FUN_1014a7ab8;
  *param_1 = &PTR_FUN_1014a7c30;
  FUN_1010b7434(param_1 + 9);
  FUN_1010b7434(param_1 + 3);
  FUN_10064e2bc(param_1 + -0x34);
  return;
}




void FUN_100654f14(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-0x34] = &PTR_FUN_1014a7ab8;
  *param_1 = &PTR_FUN_1014a7c30;
  FUN_1010b7434(param_1 + 9);
  FUN_1010b7434(param_1 + 3);
  pvVar1 = (void *)FUN_10064e2bc(param_1 + -0x34);
  operator_delete(pvVar1);
  return;
}




void FUN_100654f5c(long *param_1)

{
  FUN_100654ac8();
                    /* WARNING: Could not recover jumptable at 0x000100654f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1);
  return;
}




void FUN_100654f88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x29b) != '\0') && (iVar1 = FUN_100654ac0(param_1), iVar1 != 0)) {
    FUN_100654b58(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  FUN_1006545f8(param_1,param_2,param_3,param_4,param_5);
  return;
}




void FUN_100655014(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x29b) != '\0') && (iVar1 = FUN_100654ac0(param_1), iVar1 != 0)) {
    FUN_100654de8(param_1,param_2);
    return;
  }
  FUN_1006547b4(param_1,param_2);
  return;
}




long * FUN_100655064(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10065486c();
  *(undefined1 *)((long)puVar1 + 0x29b) = 1;
  *puVar1 = &PTR_FUN_1014a7c78;
  puVar1[0x34] = &PTR_FUN_1014a7df8;
  FUN_10066110c((long)puVar1 + 0x29c);
  FUN_100661338(param_1 + 0x54);
  FUN_100654920(param_1,1);
  *(undefined4 *)((long)param_1 + 0x29c) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x29b) = 0;
  (**(code **)(*param_1 + 0x168))(param_1);
  return param_1;
}




void FUN_1006550dc(float param_1,long param_2)

{
  *(float *)(param_2 + 0x29c) = param_1;
  *(bool *)(param_2 + 0x29b) = param_1 != 1.0;
  return;
}




long * thunk_FUN_100655064(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10065486c();
  *(undefined1 *)((long)puVar1 + 0x29b) = 1;
  *puVar1 = &PTR_FUN_1014a7c78;
  puVar1[0x34] = &PTR_FUN_1014a7df8;
  FUN_10066110c((long)puVar1 + 0x29c);
  FUN_100661338(param_1 + 0x54);
  FUN_100654920(param_1,1);
  *(undefined4 *)((long)param_1 + 0x29c) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x29b) = 0;
  (**(code **)(*param_1 + 0x168))(param_1);
  return param_1;
}




void FUN_1006550f8(long param_1)

{
  FUN_100654938();
  FUN_100654938(param_1);
  FUN_100661150(param_1 + 0x2a0,param_1 + 0x1b8);
  return;
}




void FUN_100655138(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x29b) != '\0') && (iVar1 = FUN_100654ac0(param_1), iVar1 != 0)) {
    FUN_100654f88(param_1,param_2,param_3,param_4,param_5);
    FUN_100654938(param_1);
    FUN_100654938(param_1);
    FUN_10066120c(param_2,param_1 + 0x2a0,param_1 + 0x29c,param_1 + 0x1b8,param_1 + 0x218);
    return;
  }
  FUN_100654f88(param_1,param_2,param_3,param_4,param_5);
  return;
}




void FUN_1006551f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a7c78;
  param_1[0x34] = &PTR_FUN_1014a7df8;
  FUN_100661118(param_1 + 0x54);
  *param_1 = &PTR_FUN_1014a7ab8;
  param_1[0x34] = &PTR_FUN_1014a7c30;
  FUN_1010b7434(param_1 + 0x3d);
  FUN_1010b7434(param_1 + 0x37);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10065525c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014a7c78;
  param_1[0x34] = &PTR_FUN_1014a7df8;
  FUN_100661118(param_1 + 0x54);
  *param_1 = &PTR_FUN_1014a7ab8;
  param_1[0x34] = &PTR_FUN_1014a7c30;
  FUN_1010b7434(param_1 + 0x3d);
  FUN_1010b7434(param_1 + 0x37);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1006552c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x34;
  *puVar1 = &PTR_FUN_1014a7c78;
  *param_1 = &PTR_FUN_1014a7df8;
  FUN_100661118(param_1 + 0x20);
  *puVar1 = &PTR_FUN_1014a7ab8;
  *param_1 = &PTR_FUN_1014a7c30;
  FUN_1010b7434(param_1 + 9);
  FUN_1010b7434(param_1 + 3);
  FUN_10064e2bc(puVar1);
  return;
}




void FUN_100655338(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + -0x34;
  *puVar2 = &PTR_FUN_1014a7c78;
  *param_1 = &PTR_FUN_1014a7df8;
  FUN_100661118(param_1 + 0x20);
  *puVar2 = &PTR_FUN_1014a7ab8;
  *param_1 = &PTR_FUN_1014a7c30;
  FUN_1010b7434(param_1 + 9);
  FUN_1010b7434(param_1 + 3);
  pvVar1 = (void *)FUN_10064e2bc(puVar2);
  operator_delete(pvVar1);
  return;
}




long FUN_1006553b0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long local_30;
  code *pcStack_28;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_10065541c_1014a7e40;
  puVar1[0x17] = 0;
  lVar2 = FUN_100655a84();
  *(long *)(param_1 + 0xb8) = lVar2;
  if (lVar2 != 0) {
    pcStack_28 = FUN_10065562c;
    local_30 = param_1;
    FUN_100643618(0x3f800000,&local_30,0,1);
  }
  return param_1;
}




long thunk_FUN_1006553b0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  code *pcStack_28;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_10065541c_1014a7e40;
  puVar1[0x17] = 0;
  lVar2 = FUN_100655a84();
  *(long *)(param_1 + 0xb8) = lVar2;
  if (lVar2 != 0) {
    pcStack_28 = FUN_10065562c;
    lStack_30 = param_1;
    FUN_100643618(0x3f800000,&lStack_30,0,1);
  }
  return param_1;
}




void FUN_10065541c(undefined8 *param_1)

{
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_thunk_FUN_10065541c_1014a7e40;
  if (param_1[0x17] != 0) {
    pcStack_28 = FUN_10065562c;
    local_30 = param_1;
    FUN_100643a8c(&local_30);
    if ((long *)param_1[0x17] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x17] + 8))();
    }
    param_1[0x17] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_10065541c(undefined8 *param_1)

{
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR_thunk_FUN_10065541c_1014a7e40;
  if (param_1[0x17] != 0) {
    pcStack_28 = FUN_10065562c;
    puStack_30 = param_1;
    FUN_100643a8c(&puStack_30);
    if ((long *)param_1[0x17] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x17] + 8))();
    }
    param_1[0x17] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10065548c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10065541c();
  operator_delete(pvVar1);
  return;
}




void FUN_1006554a0(undefined1 param_1 [16],float param_2,long param_3)

{
  float fVar1;
  int local_28;
  int iStack_24;
  
  FUN_10064e328();
  if (*(long *)(param_3 + 0xb8) != 0) {
    fVar1 = (float)FUN_10064edf4(param_3);
    local_28 = (int)fVar1;
    iStack_24 = (int)param_2;
    (**(code **)(**(long **)(param_3 + 0xb8) + 0x50))(*(long **)(param_3 + 0xb8),&local_28);
  }
  return;
}




void FUN_1006554f8(long *param_1)

{
  undefined8 local_38;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  
  FUN_10064e32c();
  if (param_1[0x17] != 0) {
    (**(code **)(*param_1 + 0x68))(param_1,&local_28,auStack_30);
    local_38 = local_28;
    (**(code **)(*(long *)param_1[0x17] + 0x58))((long *)param_1[0x17],&local_38);
  }
  return;
}




void FUN_10065555c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  float fVar2;
  undefined1 local_38 [8];
  undefined1 auStack_30 [8];
  int local_28;
  int iStack_24;
  
  if (param_3[0x17] != 0) {
    (**(code **)(*param_3 + 0x68))(param_3,&local_28,auStack_30);
    (**(code **)(*(long *)param_3[0x17] + 0x58))((long *)param_3[0x17],local_38);
    fVar2 = (float)FUN_10064edf4(param_3);
    local_28 = (int)fVar2;
    iStack_24 = (int)param_2;
    (**(code **)(*(long *)param_3[0x17] + 0x50))((long *)param_3[0x17],&local_28);
    lVar1 = FUN_10003d5bc(param_3);
    (**(code **)(*(long *)param_3[0x17] + 0x60))(*(undefined4 *)(lVar1 + 0x18));
    (**(code **)(*(long *)param_3[0x17] + 0x68))
              ((long *)param_3[0x17],*(uint *)((long)param_3 + 0x84) >> 2 & 1);
  }
  return;
}




void FUN_100655614(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100655624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
    return;
  }
  return;
}




void FUN_10065562c(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010065563c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x48))();
    return;
  }
  return;
}




long FUN_100655644(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_1014a7f88;
  FUN_1006421a8(puVar2 + 0x17);
  *(undefined ***)(param_1 + 0xb8) = &PTR_thunk_FUN_10064221c_1014a80d8;
  uVar1 = DAT_101dc1cb8;
  *(undefined8 *)(param_1 + 0x140) = DAT_101dc1cb8;
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined1 *)(param_1 + 0x154) = 1;
  FUN_100642bd8(param_1,puVar2 + 0x17,1);
  *(uint *)((long)puVar2 + 0x13c) = *(uint *)((long)puVar2 + 0x13c) & 0xffffffbf;
  return param_1;
}




long thunk_FUN_100655644(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_1014a7f88;
  FUN_1006421a8(puVar2 + 0x17);
  *(undefined ***)(param_1 + 0xb8) = &PTR_thunk_FUN_10064221c_1014a80d8;
  uVar1 = DAT_101dc1cb8;
  *(undefined8 *)(param_1 + 0x140) = DAT_101dc1cb8;
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined1 *)(param_1 + 0x154) = 1;
  FUN_100642bd8(param_1,puVar2 + 0x17,1);
  *(uint *)((long)puVar2 + 0x13c) = *(uint *)((long)puVar2 + 0x13c) & 0xffffffbf;
  return param_1;
}




void FUN_1006556c8(long param_1,float *param_2)

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
  FUN_10065570c(param_1);
  return;
}




void FUN_10065570c(long param_1)

{
  bool bVar1;
  float fVar2;
  ulong uVar3;
  float fVar4;
  double dVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x140);
  dVar5 = *(double *)(param_1 + 0x148) -
          (double)CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) *
                           (float)(uVar3 >> 0x20),
                           (float)*(undefined8 *)(param_1 + 0x50) * (float)uVar3);
  fVar2 = (float)((ulong)dVar5 >> 0x20);
  bVar1 = false;
  if ((*(float *)(param_1 + 0xf8) == SUB84(dVar5,0)) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0xfc)) && !NAN(fVar2))) {
    bVar1 = *(float *)(param_1 + 0xfc) == fVar2;
  }
  if (!bVar1) {
    *(double *)(param_1 + 0xf8) = dVar5;
    FUN_1000200a0(param_1 + 0xb8);
    uVar3 = (ulong)*(uint *)(param_1 + 0x140);
  }
  if ((ABS((float)uVar3) < 1.1920929e-07) || (ABS(*(float *)(param_1 + 0x144)) < 1.1920929e-07)) {
    bVar1 = false;
    if ((*(float *)(param_1 + 0x108) == (float)DAT_101dc1cb8) &&
       (bVar1 = false, !NAN(*(float *)(param_1 + 0x10c)) && !NAN(DAT_101dc1cb8._4_4_))) {
      bVar1 = *(float *)(param_1 + 0x10c) == DAT_101dc1cb8._4_4_;
    }
    if (bVar1) {
      return;
    }
    *(ulong *)(param_1 + 0x108) = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x148) / (float)uVar3;
    fVar4 = *(float *)(param_1 + 0x14c) / *(float *)(param_1 + 0x144);
    bVar1 = false;
    if ((*(float *)(param_1 + 0x108) == fVar2) &&
       (bVar1 = false, !NAN(*(float *)(param_1 + 0x10c)) && !NAN(fVar4))) {
      bVar1 = *(float *)(param_1 + 0x10c) == fVar4;
    }
    if (bVar1) {
      return;
    }
    *(float *)(param_1 + 0x108) = fVar2;
    *(float *)(param_1 + 0x10c) = fVar4;
  }
  FUN_1000200a0(param_1 + 0xb8);
  return;
}




void FUN_1006557ec(long param_1)

{
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  
  FUN_1006426a0(param_1 + 0xb8,local_28,local_30,0,0,0,*(undefined1 *)(param_1 + 0x154));
  *(ulong *)(param_1 + 0x148) = CONCAT44(-local_28._4_4_,-local_28._0_4_);
  *(ulong *)(param_1 + 0x140) =
       CONCAT44(local_30._4_4_ - local_28._4_4_,local_30._0_4_ - local_28._0_4_);
  FUN_10065570c(param_1);
  if (*(int *)(param_1 + 0x150) == 1) {
    FUN_1006558ac(param_1);
  }
  else if (*(int *)(param_1 + 0x150) == 0) {
    FUN_10064e3d4((int)(float)(int)*(float *)(param_1 + 0x140),
                  (int)(float)(int)*(float *)(param_1 + 0x144),param_1,1);
  }
  FUN_10064e4dc(param_1,CONCAT44((int)*(float *)(param_1 + 0x144),(int)*(float *)(param_1 + 0x140)))
  ;
  return;
}




void FUN_1006558ac(long *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)(**(code **)(*param_1 + 0x48))();
  fVar3 = *(float *)(param_1 + 0x28);
  fVar2 = fVar2 / fVar3;
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar2 = (float)NEON_fminnm(fVar2,fVar3 / *(float *)((long)param_1 + 0x144));
  bVar1 = false;
  if ((*(float *)(param_1 + 0x20) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x104)) && !NAN(fVar2))) {
    bVar1 = *(float *)((long)param_1 + 0x104) == fVar2;
  }
  if (!bVar1) {
    *(float *)(param_1 + 0x20) = fVar2;
    *(float *)((long)param_1 + 0x104) = fVar2;
    FUN_1000200a0(param_1 + 0x17);
    return;
  }
  return;
}




void FUN_100655930(long *param_1)

{
  FUN_100642bd8(param_1 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x00010065595c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_100655960(long *param_1)

{
  FUN_100642bd8(param_1 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x00010065598c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_100655990(long *param_1,undefined1 param_2)

{
  *(undefined1 *)((long)param_1 + 0x154) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010065599c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




long FUN_1006559a0(long param_1)

{
  return param_1 + 0xb8;
}




void FUN_1006559a8(long param_1)

{
  FUN_10064e3d4();
  *(undefined4 *)(param_1 + 0x150) = 1;
  FUN_1006558ac(param_1);
  return;
}




undefined1  [16] FUN_1006559d4(long param_1)

{
  undefined4 extraout_s0;
  undefined4 uVar1;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined8 extraout_var_00;
  undefined8 uVar4;
  undefined1 auVar2 [16];
  
  if (*(long **)(param_1 + 0x20) == (long *)0x0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar1 = (undefined4)DAT_101dc1cb8;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x48))();
    uVar1 = extraout_s0;
    uVar3 = extraout_var;
    uVar4 = extraout_var_00;
  }
  auVar2._4_4_ = uVar3;
  auVar2._0_4_ = uVar1;
  auVar2._8_8_ = uVar4;
  return auVar2;
}




void FUN_100655a08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100655a38(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100655a70(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064221c();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100655a84(void)

{
  return 0;
}




undefined8 * FUN_100655a8c(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_1004e313c(param_1 + 1);
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 9) = 0x20;
  return param_1;
}




long FUN_100655acc(long param_1)

{
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return param_1;
}




long thunk_FUN_100655acc(long param_1)

{
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return param_1;
}




uint FUN_100655b10(long param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = FUN_1004e36c0(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x48);
  }
  else {
    FUN_1000153b4(param_1 + 8,param_2);
    uVar2 = *(byte *)(param_1 + 0x48) | 0xffffff80;
    *(char *)(param_1 + 0x48) = (char)uVar2;
  }
  return uVar2 >> 7 & 1;
}




long FUN_100655b6c(long param_1)

{
  return param_1 + 8;
}




void FUN_100655b74(long *param_1,long param_2)

{
  if (*param_1 != param_2) {
    *param_1 = param_2;
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x80;
  }
  return;
}




undefined8 FUN_100655b94(undefined8 *param_1)

{
  return *param_1;
}




void FUN_100655b9c(long param_1,uint param_2)

{
  if ((*(byte *)(param_1 + 0x48) & 7) != param_2) {
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0x78 | (byte)param_2 & 7 | 0x80;
  }
  return;
}




void FUN_100655bc0(long param_1,uint param_2)

{
  byte bVar1;
  
  if ((((*(byte *)(param_1 + 0x48) & 8) == 0 ^ param_2) & 1) == 0) {
    bVar1 = 0x88;
    if (param_2 == 0) {
      bVar1 = 0x80;
    }
    *(byte *)(param_1 + 0x48) = bVar1 | *(byte *)(param_1 + 0x48) & 0x77;
  }
  return;
}




byte FUN_100655bf4(long param_1)

{
  return *(byte *)(param_1 + 0x48) >> 3 & 1;
}




void FUN_100655c00(void)

{
  return;
}




void FUN_100655c04(long param_1,uint param_2)

{
  byte bVar1;
  
  if ((((*(byte *)(param_1 + 0x48) & 0x20) == 0 ^ param_2) & 1) == 0) {
    bVar1 = 0xa0;
    if (param_2 == 0) {
      bVar1 = 0x80;
    }
    *(byte *)(param_1 + 0x48) = bVar1 | *(byte *)(param_1 + 0x48) & 0x5f;
  }
  return;
}




void FUN_100655c3c(long param_1,uint param_2)

{
  byte bVar1;
  
  if ((((*(byte *)(param_1 + 0x48) & 0x40) == 0 ^ param_2) & 1) == 0) {
    bVar1 = 0xc0;
    if (param_2 == 0) {
      bVar1 = 0x80;
    }
    *(byte *)(param_1 + 0x48) = bVar1 | *(byte *)(param_1 + 0x48) & 0x3f;
  }
  return;
}




byte FUN_100655c6c(long param_1)

{
  return *(byte *)(param_1 + 0x48) >> 6 & 1;
}




void FUN_100655c78(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x44) != param_1) {
    *(float *)(param_2 + 0x44) = param_1;
    *(byte *)(param_2 + 0x48) = *(byte *)(param_2 + 0x48) | 0x80;
  }
  return;
}




void FUN_100655c98(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x28) != param_1) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    *(float *)(param_2 + 0x28) = param_1;
    *(byte *)(param_2 + 0x48) = *(byte *)(param_2 + 0x48) | 0x80;
  }
  return;
}




undefined4 FUN_100655cc0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




void FUN_100655cc8(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x2c) != param_1) {
    *(float *)(param_2 + 0x2c) = param_1;
    *(byte *)(param_2 + 0x48) = *(byte *)(param_2 + 0x48) | 0x80;
  }
  return;
}




void FUN_100655ce8(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x30) != param_1) {
    *(float *)(param_2 + 0x30) = param_1;
    *(byte *)(param_2 + 0x48) = *(byte *)(param_2 + 0x48) | 0x80;
  }
  return;
}




void FUN_100655d08(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulong local_170;
  ulong local_168;
  float local_148;
  undefined4 local_144;
  int local_140;
  undefined8 local_13c;
  byte local_134;
  float local_130;
  float local_12c;
  undefined8 local_128 [16];
  int local_a8;
  uint local_a0 [4];
  float local_90;
  float local_8c;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(int *)*param_3 == 0) {
    bVar4 = ((int *)*param_3)[0x24c] - 1U < 2;
  }
  else {
    bVar4 = true;
  }
  local_168 = 0xffffffff;
  iVar12 = (uint)(*(float *)((long)param_3 + 0x44) == 0.0) << 2;
  plVar1 = param_3 + 3;
  if (param_3[4] != 0) {
    *(undefined4 *)plVar1 = 0;
  }
  lVar13 = 0;
  do {
    *(undefined8 *)((long)local_128 + lVar13 + 0x28) = 0xff000000ff000000;
    *(undefined8 *)((long)local_128 + lVar13 + 0x20) = 0xff000000ff000000;
    *(undefined8 *)((long)local_128 + lVar13 + 0x38) = 0xff000000ff000000;
    *(undefined8 *)((long)local_128 + lVar13 + 0x30) = 0xff000000ff000000;
    *(undefined8 *)((long)local_128 + lVar13 + 8) = 0xff000000ff000000;
    *(undefined8 *)((long)local_128 + lVar13) = 0xff000000ff000000;
    *(undefined8 *)((long)local_128 + lVar13 + 0x18) = 0xff000000ff000000;
    *(undefined8 *)((long)local_128 + lVar13 + 0x10) = 0xff000000ff000000;
    lVar13 = lVar13 + 0x40;
  } while (lVar13 != 0x80);
  local_a8 = 0;
  plVar2 = param_3 + 1;
  iVar5 = FUN_1004e3634(plVar2);
  if (iVar5 != 0) {
    uVar14 = 0;
    fVar17 = 0.0;
    local_148 = 0.0;
    local_170 = 0xffff;
    fVar18 = 0.0;
    do {
      uVar9 = FUN_1004e3648(plVar2,uVar14);
      if (iVar12 == 1) {
        uVar10 = FUN_100657700(uVar9);
        if ((uVar10 & 1) == 0) {
          fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(*param_3 + 0x918));
          param_2 = *(float *)((long)param_3 + 0x44);
          fVar17 = param_2 * fVar17;
          iVar12 = 3;
        }
        else {
          iVar12 = 1;
        }
      }
      else if (iVar12 == 0) {
        iVar5 = FUN_100657728(uVar9);
        iVar12 = 3;
        if (iVar5 != 0) {
          iVar12 = 1;
        }
      }
      iVar5 = FUN_10065771c(uVar9);
      uVar7 = (uint)uVar9;
      if (iVar5 == 0) {
        if ((*(byte *)(param_3 + 9) & 8) != 0) {
          uVar7 = 0x2a;
        }
        iVar5 = 0x1d7c6;
        if ((0x2f < uVar7 & *(byte *)(param_3 + 9) >> 4 & uVar7 < 0x3a) == 0) {
          iVar5 = 0;
        }
        iVar5 = uVar7 + iVar5;
        uVar10 = FUN_100645fa4(*param_3,iVar5);
        uVar15 = uVar10 >> 0x10 & 0xffff;
        iVar8 = (int)uVar15;
        uVar7 = (uint)uVar10;
        if ((uVar7 & 0xffff) == 0xffff && iVar8 == 0xffff) {
          if ((((iVar5 == 0xa0 || iVar5 == 0x1680) || iVar5 == 0x180e) ||
              (iVar5 - 0x2000U < 0xc || iVar5 == 0x202f)) || (iVar5 == 0x3000 || iVar5 == 0x205f)) {
            uVar10 = FUN_100645fa4(*param_3,0x20);
            uVar15 = uVar10 >> 0x10 & 0xffff;
            uVar7 = 0xffff;
            iVar8 = 0xffff;
          }
          if ((((uint)uVar10 & 0xffff) == (uVar7 & 0xffff)) && ((int)uVar15 == iVar8)) {
            lVar13 = *param_3;
            uVar6 = FUN_100657834();
            uVar10 = FUN_100645fa4(lVar13,uVar6);
            uVar15 = uVar10 >> 0x10 & 0xffff;
            uVar7 = 0xffff;
            iVar8 = 0xffff;
          }
          if ((((uint)uVar10 & 0xffff) == (uVar7 & 0xffff)) && ((int)uVar15 == iVar8))
          goto LAB_100656120;
        }
        lVar13 = FUN_10064637c(*param_3);
        local_13c = 0xffffff000000;
        if ((*(byte *)(param_3 + 9) >> 5 & 1) == 0) {
LAB_100655fdc:
          if ((bVar4) && ((((uint)local_168 & 0xffff) != 0xffff || ((int)local_170 != 0xffff)))) {
            fVar16 = (float)FUN_100646118(*param_3);
            fVar17 = fVar16 + fVar17;
            fVar18 = param_2 + fVar18;
          }
          puVar3 = &DAT_10115a160;
          if (local_a8 != 0) {
            puVar3 = (undefined4 *)((long)local_128 + (long)(local_a8 + -1) * 4);
          }
          local_13c = CONCAT44((uint)uVar10 & 0xffff | (int)uVar15 << 0x10,*puVar3);
          local_134 = local_134 & 0xfe | local_a8 != 0;
          local_140 = iVar5;
          local_130 = fVar17;
          local_12c = fVar18;
          FUN_100656270(plVar1,&local_140);
          uVar11 = FUN_10065770c(iVar5);
          param_2 = fVar17;
          if ((uVar11 & 1) == 0) {
            param_2 = *(float *)(lVar13 + 4) + fVar17 + *(float *)((long)param_3 + 0x2c);
          }
          fVar17 = local_148;
          local_170 = uVar15;
          local_168 = uVar10;
          if (local_148 <= param_2) {
            fVar17 = param_2;
            local_148 = param_2;
          }
        }
        else {
          uVar11 = FUN_1006562fc(plVar2,uVar14);
          if ((uVar11 & 1) == 0) {
            iVar8 = FUN_100656358(plVar2,uVar14);
            if (iVar8 == 0) goto LAB_100655fdc;
            iVar5 = FUN_1006563a8(plVar2,uVar14);
            if (iVar5 == 0) {
              uVar7 = FUN_100656414(plVar2,uVar14,local_a0,0x20);
              if (uVar7 != 0xffffffff) {
                local_144 = 0xff000000;
                FUN_1004d2bec(&local_144,local_a0);
                *(undefined4 *)((long)local_128 + (long)local_a8 * 4) = local_144;
                local_a8 = local_a8 + 1;
                uVar14 = uVar7;
              }
            }
            else {
              if (local_a8 != 0) {
                local_a8 = local_a8 + -1;
              }
              uVar14 = uVar14 + 2;
            }
          }
        }
      }
      else {
        local_a0[1] = 0xff000000;
        local_a0[2] = 0xffffffff;
        local_a0[0] = uVar7;
        local_90 = fVar17;
        local_8c = fVar18;
        FUN_100656270(plVar1,local_a0);
        if ((*(byte *)(param_3 + 9) >> 6 & 1) == 0) {
          param_2 = *(float *)(param_3 + 6) + 1.0;
          fVar18 = fVar18 + *(float *)(*param_3 + 0x924) * param_2;
        }
        local_148 = 0.0;
        iVar12 = (uint)(*(float *)((long)param_3 + 0x44) == 0.0) << 2;
        fVar17 = 0.0;
      }
LAB_100656120:
      uVar14 = uVar14 + 1;
      uVar7 = FUN_1004e3634(plVar2);
    } while (uVar14 < uVar7);
  }
  FUN_10065657c(param_3);
  FUN_100656850(param_3);
  FUN_100656970(param_3);
  *(byte *)(param_3 + 9) = *(byte *)(param_3 + 9) & 0x7f;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100656270(uint *param_1,undefined8 *param_2)

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
    FUN_10065731c(param_1,uVar2);
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




undefined8 FUN_1006562fc(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1004e363c();
  if (((iVar1 == 0x5c) && (uVar2 = FUN_1004e3634(param_1), param_2 + 1U < uVar2)) &&
     (iVar1 = FUN_1004e363c(param_1), iVar1 == 0x7b)) {
    return 1;
  }
  return 0;
}




undefined8 FUN_100656358(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1004e363c();
  if ((iVar1 == 0x7b) &&
     ((param_2 == 0 || (iVar1 = FUN_1004e363c(param_1,param_2 + -1), iVar1 != 0x5c)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_1006563a8(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_1004e3634();
  if (((param_2 + 2U < uVar1) && (iVar2 = FUN_1004e363c(param_1,param_2 + 1), iVar2 == 0x5c)) &&
     (iVar2 = FUN_1004e363c(param_1,param_2 + 2U), iVar2 == 0x7d)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




void FUN_100656414(undefined8 param_1,int param_2,undefined1 *param_3,uint param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_158 [256];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004e34d8(param_1,auStack_158,0x100);
  uVar6 = param_2 + 1;
  uVar2 = FUN_1004e3634(param_1);
  if (uVar6 < uVar2) {
    uVar2 = 0;
    do {
      iVar3 = FUN_1004e363c(param_1,uVar6 + uVar2);
      if (iVar3 == 0x7b) goto LAB_100656530;
      iVar3 = FUN_1004e363c(param_1,uVar6 + uVar2);
      if (iVar3 == 0x7d) {
        uVar8 = uVar6 + uVar2;
        break;
      }
      uVar2 = uVar2 + 1;
      uVar4 = FUN_1004e3634(param_1);
      uVar8 = uVar6 + uVar2;
    } while (uVar8 < uVar4);
  }
  else {
    uVar2 = 0;
    uVar8 = uVar6;
  }
  uVar5 = FUN_1004e3634(param_1);
  uVar4 = 0xffffffff;
  if ((uVar8 < uVar5) && (uVar2 < param_4)) {
    iVar3 = FUN_1004e363c(param_1,uVar8);
    if (iVar3 == 0x7d) {
      if (uVar2 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (ulong)uVar2;
        uVar9 = uVar7;
        puVar10 = param_3;
        do {
          uVar1 = FUN_1004e363c(param_1,uVar6);
          *puVar10 = uVar1;
          uVar6 = uVar6 + 1;
          uVar9 = uVar9 - 1;
          puVar10 = puVar10 + 1;
        } while (uVar9 != 0);
      }
      param_3[uVar7] = 0;
      uVar4 = uVar8;
    }
    else {
LAB_100656530:
      uVar4 = 0xffffffff;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar4);
  }
  return;
}




void FUN_10065657c(long *param_1)

{
  ulong *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  float *pfVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong local_b0;
  ulong uStack_a8;
  float local_a0;
  float fStack_9c;
  undefined8 local_90;
  undefined8 local_88;
  
  uVar6 = *(uint *)(param_1 + 3);
  if ((uVar6 == 0) || ((*(byte *)(param_1 + 9) >> 6 & 1) == 0)) {
    return;
  }
  uVar8 = 0;
  iVar7 = (uint)(*(float *)((long)param_1 + 0x44) == 0.0) << 2;
  local_88 = 0;
  fVar20 = 0.0;
  fVar19 = 0.0;
LAB_100656608:
  local_90 = local_88;
  do {
    do {
      uVar13 = (uint)uVar8;
    } while (uVar6 <= uVar13);
    lVar14 = 0;
    iVar17 = 1;
    lVar15 = uVar8 * 0x18;
    uVar16 = 0xffffffff;
    do {
      uVar10 = uVar8 + lVar14;
      lVar12 = param_1[4];
      puVar9 = (undefined4 *)(lVar12 + lVar15) + 6;
      if (uVar6 - 1 <= uVar10) {
        puVar9 = (undefined4 *)0x0;
      }
      iVar4 = FUN_100657744(*(undefined4 *)(lVar12 + lVar15),puVar9);
      uVar2 = (uint)uVar10;
      if (iVar4 == 0) {
        uVar2 = uVar16;
      }
      if (iVar7 == 0) {
        iVar4 = FUN_100657728(*(undefined4 *)(lVar12 + lVar15));
        iVar7 = 2;
        if (iVar4 == 0) {
          iVar7 = 3;
        }
      }
      iVar4 = FUN_100657700(*(undefined4 *)(lVar12 + lVar15));
      if ((iVar4 == 0) || (uVar6 = *(uint *)(param_1 + 3), uVar6 - 1 <= uVar10)) {
        puVar1 = (ulong *)(lVar12 + lVar15);
        uStack_a8 = puVar1[1];
        local_b0 = *puVar1;
        local_a0 = (float)puVar1[2];
        fStack_9c = (float)(puVar1[2] >> 0x20);
        _local_a0 = CONCAT44(fStack_9c + fVar19,local_a0 + fVar20);
        FUN_100656efc(param_1,&local_b0,&local_88,&local_90);
        iVar4 = (int)lVar14;
        if ((*(float *)(param_1 + 5) < (float)local_90 - (float)local_88 && uVar8 <= uVar10) &&
            ((float)local_90 - (float)local_88 <= *(float *)(param_1 + 5) || uVar10 != uVar8)) {
          uVar16 = uVar13 - iVar17;
          if (uVar13 + iVar4 != uVar2 && uVar2 != 0xffffffff) {
            uVar16 = uVar2;
          }
          uVar6 = *(uint *)(param_1 + 3);
          bVar3 = (uVar13 - uVar6) + iVar4 == -1 && (uVar13 - uVar16) + iVar4 == 0;
        }
        else {
          iVar5 = FUN_10065771c(local_b0 & 0xffffffff);
          if (iVar5 == 0) {
            uVar6 = *(uint *)(param_1 + 3);
            if (uVar10 != uVar6 - 1) goto LAB_1006566fc;
            uVar10 = uVar8 + lVar14;
            bVar3 = uVar10 >> 0x20 == 0;
          }
          else {
            uVar10 = (ulong)(uVar13 + iVar4);
            iVar7 = (uint)(*(float *)((long)param_1 + 0x44) == 0.0) << 2;
            uVar6 = *(uint *)(param_1 + 3);
            bVar3 = (uVar13 - uVar6) + iVar4 == -1;
          }
          uVar16 = (uint)uVar10;
        }
        if (uVar16 < uVar13 || uVar6 <= uVar13) goto LAB_1006567e4;
        pfVar11 = (float *)(param_1[4] + uVar8 * 0x18 + 0x14);
        goto LAB_1006567b8;
      }
LAB_1006566fc:
      lVar14 = lVar14 + 1;
      iVar17 = iVar17 + -1;
      lVar15 = lVar15 + 0x18;
      uVar16 = uVar2;
    } while (uVar8 + lVar14 < (ulong)uVar6);
  } while( true );
  while( true ) {
    uVar8 = uVar8 + 1;
    pfVar11 = pfVar11 + 6;
    if (uVar6 <= uVar8) break;
LAB_1006567b8:
    pfVar11[-1] = pfVar11[-1] + fVar20;
    *pfVar11 = *pfVar11 + fVar19;
    if (uVar16 <= uVar8) break;
  }
LAB_1006567e4:
  if (bVar3) {
    return;
  }
  uVar8 = (ulong)(uVar16 + 1);
  fVar18 = *(float *)(param_1[4] + uVar8 * 0x18 + 0x10);
  if (iVar7 == 2) {
    fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(*param_1 + 0x918));
    fVar20 = *(float *)((long)param_1 + 0x44) * fVar20 - fVar18;
  }
  else {
    fVar20 = -fVar18;
  }
  fVar19 = fVar19 + *(float *)(*param_1 + 0x924) * (*(float *)(param_1 + 6) + 1.0);
  local_90 = CONCAT44(*(float *)(param_1[4] + uVar8 * 0x18 + 0x14) + fVar19,fVar18 + fVar20);
  local_88 = local_90;
  goto LAB_100656608;
}




void FUN_100656850(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  float fVar10;
  
  if (((*(byte *)(param_1 + 0x48) & 7) != 0) && (uVar3 = *(uint *)(param_1 + 0x18), uVar3 != 0)) {
    uVar5 = 0;
    do {
      uVar3 = uVar3 - 1;
      uVar4 = (uint)uVar5;
      uVar2 = uVar4;
      if (uVar4 <= uVar3) {
        uVar2 = uVar3;
      }
      uVar9 = (ulong)uVar2;
      lVar6 = *(long *)(param_1 + 0x20) + uVar5 * 0x18;
      lVar7 = -1;
      pfVar8 = (float *)(lVar6 + 0x2c);
      do {
        if ((uVar5 - uVar9) + lVar7 == -1) goto LAB_1006568d0;
        fVar10 = *pfVar8;
        lVar7 = lVar7 + 1;
        pfVar8 = pfVar8 + 6;
      } while (*(float *)(lVar6 + 0x14) == fVar10);
      uVar9 = (ulong)(uVar4 + (int)lVar7);
LAB_1006568d0:
      uVar2 = FUN_10065771c(*(undefined4 *)(*(long *)(param_1 + 0x20) + uVar9 * 0x18));
      bVar1 = *(byte *)(param_1 + 0x48) & 7;
      if (((uint)uVar9 == uVar3 | uVar2) != 1 || bVar1 != 2) {
        if (bVar1 == 3) {
          FUN_100657228(param_1,uVar5,uVar9);
        }
        else if (bVar1 == 2) {
          FUN_1006570a4(param_1,uVar5,uVar9);
        }
        else if (bVar1 == 1) {
          FUN_100656fc8(param_1,uVar5,uVar9);
        }
      }
      uVar2 = (uint)uVar9 + 1;
      uVar5 = (ulong)uVar2;
      uVar3 = *(uint *)(param_1 + 0x18);
    } while (uVar2 < uVar3);
  }
  return;
}




void FUN_100656970(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_100656efc(param_1,*(long *)(param_1 + 0x20) + lVar1,&local_38,&local_40);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x18;
    } while (uVar2 < *(uint *)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x34) = local_38;
  *(undefined8 *)(param_1 + 0x3c) = local_40;
  return;
}




void FUN_1006569f0(long param_1,float *param_2,float *param_3)

{
  FUN_100656a40();
  *param_2 = *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x34);
  *param_3 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38);
  return;
}




void FUN_100656a40(long *param_1)

{
  if (-1 < (char)*(byte *)(param_1 + 9)) {
    return;
  }
  if (*param_1 != 0) {
    FUN_100655d08();
    return;
  }
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  if (param_1[4] != 0) {
    *(undefined4 *)(param_1 + 3) = 0;
  }
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0x7f;
  return;
}




void FUN_100656a78(long *param_1,int param_2)

{
  FUN_100656a40();
  if ((((int)param_1[3] != 0) && ((int)param_1[3] == param_2)) && (*param_1 != 0)) {
    FUN_10064637c(*param_1,*(undefined4 *)(param_1[4] + (ulong)(param_2 - 1) * 0x18 + 8));
  }
  return;
}




void FUN_100656b1c(long param_1)

{
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 0x80;
  return;
}




int FUN_100656b2c(float param_1,float param_2,float param_3,float param_4,long *param_5,
                 undefined1 *param_6,float *param_7,undefined4 *param_8,undefined1 *param_9,
                 ulong param_10,int param_11,uint param_12,byte param_13)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  undefined1 uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong local_b0;
  undefined4 *local_a8;
  int local_9c;
  
  FUN_100656a40();
  FUN_100656a40(param_5);
  if (((param_11 == 0) && (0.0 < *(float *)(param_5 + 8) - *(float *)(param_5 + 7))) &&
     (*param_5 != 0)) {
    param_2 = param_2 + param_4 * *(float *)(*param_5 + 0x91c);
  }
  uVar2 = (int)param_12 / 6;
  if (*(uint *)(param_5 + 3) * 6 <= param_12 || 0x7fffffff < param_12) {
    uVar2 = *(uint *)(param_5 + 3);
  }
  if (uVar2 == 0) {
    local_9c = 0;
  }
  else {
    uVar12 = 0;
    local_9c = 0;
    uVar13 = param_10 >> 2 & 0x3fffffff;
    param_13 = param_13 ^ 1;
    local_a8 = param_8;
    do {
      lVar11 = param_5[4];
      uVar5 = FUN_10065770c(*(undefined4 *)(lVar11 + uVar12 * 0x18));
      if (((uVar5 & 1) == 0) &&
         ((puVar7 = (uint *)(lVar11 + uVar12 * 0x18 + 8), *(short *)puVar7 != -1 ||
          (*(short *)(lVar11 + uVar12 * 0x18 + 10) != -1)))) {
        local_b0 = local_b0 & 0xffffffff00000000 | (ulong)*puVar7;
        lVar6 = FUN_10064637c(*param_5,local_b0);
        lVar8 = lVar11 + uVar12 * 0x18;
        fVar14 = param_1 + param_3 * (*(float *)(lVar6 + 8) + *(float *)(lVar8 + 0x10));
        fVar15 = param_2 + param_4 * (*(float *)(lVar8 + 0x14) - *(float *)(lVar6 + 0xc));
        fVar16 = fVar14 + param_3 * *(float *)(lVar6 + 0x10);
        fVar17 = fVar15 + param_4 * *(float *)(lVar6 + 0x14);
        *param_7 = fVar14;
        param_7[1] = fVar15;
        param_7[2] = 0.0;
        param_7 = param_7 + uVar13;
        *param_7 = fVar14;
        param_7[1] = fVar17;
        param_7[2] = 0.0;
        param_7 = param_7 + uVar13;
        *param_7 = fVar16;
        param_7[1] = fVar15;
        param_7[2] = 0.0;
        param_7 = param_7 + uVar13;
        *param_7 = fVar14;
        param_7[1] = fVar17;
        param_7[2] = 0.0;
        param_7 = param_7 + uVar13;
        *param_7 = fVar16;
        param_7[1] = fVar17;
        param_7[2] = 0.0;
        param_7 = param_7 + uVar13;
        *param_7 = fVar16;
        param_7[1] = fVar15;
        param_7[2] = 0.0;
        *local_a8 = *(undefined4 *)(lVar6 + 0x18);
        local_a8[1] = *(undefined4 *)(lVar6 + 0x1c);
        local_a8 = local_a8 + uVar13;
        *local_a8 = *(undefined4 *)(lVar6 + 0x18);
        local_a8[1] = *(undefined4 *)(lVar6 + 0x24);
        local_a8 = local_a8 + uVar13;
        *local_a8 = *(undefined4 *)(lVar6 + 0x20);
        local_a8[1] = *(undefined4 *)(lVar6 + 0x1c);
        local_a8 = local_a8 + uVar13;
        *local_a8 = *(undefined4 *)(lVar6 + 0x18);
        local_a8[1] = *(undefined4 *)(lVar6 + 0x24);
        local_a8 = local_a8 + uVar13;
        *local_a8 = *(undefined4 *)(lVar6 + 0x20);
        local_a8[1] = *(undefined4 *)(lVar6 + 0x24);
        local_a8 = local_a8 + uVar13;
        *local_a8 = *(undefined4 *)(lVar6 + 0x20);
        local_a8[1] = *(undefined4 *)(lVar6 + 0x1c);
        bVar4 = *(byte *)(lVar8 + 0xc);
        if ((bVar4 & 1) == 0 || (param_13 & 1) != 0) {
          uVar9 = param_6[3];
        }
        else {
          fVar14 = (float)NEON_ucvtf((uint)*(byte *)(lVar11 + uVar12 * 0x18 + 7));
          fVar15 = (float)NEON_ucvtf((uint)(byte)param_6[3]);
          uVar9 = (undefined1)(int)(fVar14 * fVar15 * 0.003921569);
        }
        param_7 = param_7 + uVar13;
        puVar1 = (undefined1 *)(lVar11 + uVar12 * 0x18 + 4);
        puVar3 = param_6;
        if ((bVar4 & 1) != 0 && param_13 == 0) {
          puVar3 = puVar1;
        }
        *param_9 = *puVar3;
        param_9[1] = puVar3[1];
        local_a8 = local_a8 + uVar13;
        param_9[2] = puVar3[2];
        param_9[3] = uVar9;
        param_9 = param_9 + (param_10 & 0xffffffff);
        iVar10 = 5;
        do {
          puVar3 = param_6;
          if ((*(byte *)(lVar8 + 0xc) & 1) != 0 && param_13 == 0) {
            puVar3 = puVar1;
          }
          *param_9 = *puVar3;
          param_9[1] = puVar3[1];
          param_9[2] = puVar3[2];
          param_9[3] = uVar9;
          param_9 = param_9 + (param_10 & 0xffffffff);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        local_9c = local_9c + 6;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar2);
  }
  return local_9c;
}




void FUN_100656ec8(long *param_1,undefined1 param_2)

{
  if (((*param_1 != 0) && (*(int *)(*param_1 + 0x930) != 0)) && ((int)param_1[3] != 0)) {
    FUN_10064a1ec(param_2,param_1[4] + 8,(int)param_1[3],0x18);
    return;
  }
  return;
}




void FUN_100656efc(long *param_1,long param_2,float *param_3,float *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((*(short *)(param_2 + 8) != -1) || (*(short *)(param_2 + 10) != -1)) {
    lVar1 = FUN_10064637c(*param_1,*(undefined4 *)(param_2 + 8));
    fVar2 = *(float *)(param_2 + 0x14);
    fVar5 = *(float *)(lVar1 + 8) + *(float *)(param_2 + 0x10);
    fVar3 = fVar2 - *(float *)(*param_1 + 0x91c);
    fVar6 = *(float *)(lVar1 + 0x10);
    fVar4 = *(float *)(*param_1 + 0x920);
    if (fVar5 < *param_3) {
      *param_3 = fVar5;
    }
    fVar6 = fVar6 + fVar5;
    if (fVar3 < param_3[1]) {
      param_3[1] = fVar3;
    }
    fVar2 = fVar2 - fVar4;
    if (*param_4 < fVar6) {
      *param_4 = fVar6;
    }
    if (param_4[1] < fVar2) {
      param_4[1] = fVar2;
    }
  }
  return;
}




void FUN_100656fc8(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined8 local_50;
  undefined8 local_48;
  
  lVar2 = *(long *)(param_1 + 0x20) + (ulong)param_2 * 0x18;
  local_50 = *(undefined8 *)(lVar2 + 0x10);
  if (param_2 <= param_3) {
    local_48 = local_50;
    FUN_100656efc(param_1,lVar2,&local_48,&local_50);
    uVar1 = param_2;
    while (uVar1 = uVar1 + 1, uVar1 <= param_3) {
      FUN_100656efc(param_1,*(long *)(param_1 + 0x20) + (ulong)uVar1 * 0x18,&local_48,&local_50);
    }
    if (param_2 <= param_3) {
      fVar4 = *(float *)(param_1 + 0x28);
      lVar2 = *(long *)(param_1 + 0x20);
      do {
        lVar3 = lVar2 + (ulong)param_2 * 0x18;
        *(float *)(lVar3 + 0x10) =
             *(float *)(lVar3 + 0x10) + (float)(int)((fVar4 - (float)local_50) + (float)local_48);
        param_2 = param_2 + 1;
      } while (param_2 <= param_3);
    }
  }
  return;
}




void FUN_1006570a4(long param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_60;
  undefined8 local_58;
  
  while ((param_2 <= param_3 &&
         (uVar3 = FUN_100657700(*(undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)param_3 * 0x18)),
         (uVar3 & 1) != 0))) {
    param_3 = param_3 - 1;
  }
  if (param_2 <= param_3) {
    uVar5 = 0;
    uVar6 = param_2;
    do {
      iVar2 = FUN_100657700(*(undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)uVar6 * 0x18));
      uVar5 = uVar5 + iVar2;
      uVar6 = uVar6 + 1;
    } while (uVar6 <= param_3);
    if (uVar5 != 0) {
      lVar4 = *(long *)(param_1 + 0x20) + (ulong)param_2 * 0x18;
      local_60 = *(undefined8 *)(lVar4 + 0x10);
      if (param_3 < param_2) {
        local_58._0_4_ = (float)local_60;
        local_60._0_4_ = (float)local_58;
        uVar1 = local_60;
      }
      else {
        local_58 = local_60;
        FUN_100656efc(param_1,lVar4,&local_58,&local_60);
        uVar6 = param_2;
        while (uVar6 = uVar6 + 1, uVar6 <= param_3) {
          FUN_100656efc(param_1,*(long *)(param_1 + 0x20) + (ulong)uVar6 * 0x18,&local_58,&local_60)
          ;
        }
        uVar1 = local_58;
      }
      local_58 = uVar1;
      if (param_2 <= param_3) {
        fVar7 = (*(float *)(param_1 + 0x28) - (float)local_60) + (float)local_58;
        fVar8 = 0.0;
        do {
          iVar2 = FUN_100657700(*(undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)param_2 * 0x18));
          if (iVar2 == 0) {
            lVar4 = *(long *)(param_1 + 0x20) + (ulong)param_2 * 0x18;
            *(float *)(lVar4 + 0x10) = *(float *)(lVar4 + 0x10) + fVar8;
          }
          else {
            fVar8 = fVar8 + (float)(int)(fVar7 / (float)uVar5);
          }
          param_2 = param_2 + 1;
        } while (param_2 <= param_3);
      }
    }
  }
  return;
}




void FUN_100657228(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined8 local_50;
  undefined8 local_48;
  
  lVar2 = *(long *)(param_1 + 0x20) + (ulong)param_2 * 0x18;
  local_50 = *(undefined8 *)(lVar2 + 0x10);
  if (param_3 < param_2) {
    local_48._0_4_ = (float)local_50;
    local_50._0_4_ = (float)local_48;
  }
  else {
    local_48 = local_50;
    FUN_100656efc(param_1,lVar2,&local_48,&local_50);
    uVar1 = param_2;
    while (uVar1 = uVar1 + 1, uVar1 <= param_3) {
      FUN_100656efc(param_1,*(long *)(param_1 + 0x20) + (ulong)uVar1 * 0x18,&local_48,&local_50);
    }
  }
  if (param_2 <= param_3) {
    fVar4 = *(float *)(param_1 + 0x28);
    lVar2 = *(long *)(param_1 + 0x20);
    do {
      lVar3 = lVar2 + (ulong)param_2 * 0x18;
      *(float *)(lVar3 + 0x10) =
           *(float *)(lVar3 + 0x10) +
           (float)(int)(((fVar4 - (float)local_50) + (float)local_48) * 0.5);
      param_2 = param_2 + 1;
    } while (param_2 <= param_3);
  }
  return;
}




void FUN_10065731c(uint *param_1,uint param_2)

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




float FUN_1006573a8(float param_1,float param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_100655b94(param_3 + 0x1a);
  lVar2 = FUN_100655b94(param_4 + 0x1a);
  fVar3 = 0.0;
  if ((lVar1 != 0) && (lVar2 != 0)) {
    (**(code **)(*param_3 + 0x48))(0,param_3);
    fVar5 = *(float *)(lVar1 + 0x920);
    fVar3 = -fVar5;
    if (0.0 <= fVar5) {
      fVar3 = fVar5;
    }
    fVar5 = -((*(float *)((long)param_3 + 0x54) + -1.0) * param_2) - fVar3;
    fVar4 = 0.0;
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    (**(code **)(*param_4 + 0x48))(param_4);
    if (param_1 <= fVar3) {
      param_1 = fVar3;
    }
    fVar3 = fVar5 + param_1 + fVar4 * *(float *)((long)param_4 + 0x54);
  }
  return fVar3;
}




void FUN_10065745c(float param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_100655b94(param_2 + 0xd0);
  lVar2 = FUN_100655b94(param_3 + 0xd0);
  fVar3 = *(float *)(lVar1 + 0x920);
  fVar4 = -fVar3;
  if (0.0 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)(lVar2 + 0x920);
  if (0.0 <= fVar3) {
    fVar3 = -fVar3;
  }
  FUN_10064e72c(fVar4 + param_1 + fVar3,param_2,2,param_3,2);
  return;
}




void FUN_1006574dc(undefined8 param_1,float param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_100655b94(param_3 + 0xd0);
  if (lVar1 != 0) {
    fVar2 = *(float *)(lVar1 + 0x920);
    fVar3 = -fVar2;
    if (0.0 <= fVar2) {
      fVar3 = fVar2;
    }
    FUN_10064e5ec(param_1,param_2 + *(float *)(param_3 + 0x4c) * fVar3,param_3,param_4,param_5,
                  param_6);
    return;
  }
  return;
}




void FUN_100657568(undefined8 *param_1)

{
  *param_1 = 0;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xf8 | 4;
  return;
}




long * FUN_100657580(long *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1010af6e0();
    FUN_1010af6ec(uVar1,*param_1);
  }
  return param_1;
}




long * thunk_FUN_100657580(long *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1010af6e0();
    FUN_1010af6ec(uVar1,*param_1);
  }
  return param_1;
}




void FUN_1006575b8(long *param_1)

{
  FUN_1010b01bc(*(undefined8 *)(*param_1 + 8));
  return;
}




void FUN_1006575c4(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1010b0260(param_2);
  FUN_1010b01bc(*(undefined8 *)(*param_1 + 8),uVar1);
  return;
}




void FUN_1006575f4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 **local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1006581d8(param_2,&local_48);
  if ((*(byte *)(param_1 + 1) >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1004e2fec(&DAT_101d911b0);
    uVar2 = uVar2 ^ 1 | (uint)(DAT_101d911c8 < 0x20000001);
  }
  uVar3 = FUN_1010af6e0();
  pppuVar1 = (undefined8 ***)local_48;
  if (-1 < local_38) {
    pppuVar1 = &local_48;
  }
  FUN_1010aef94(uVar3,pppuVar1,uVar2);
  uVar3 = FUN_1010af6e0();
  pppuVar1 = (undefined8 ***)local_48;
  if (-1 < local_38) {
    pppuVar1 = &local_48;
  }
  uVar3 = FUN_1010af2cc(uVar3,pppuVar1,0,0,1);
  *param_1 = uVar3;
  if (local_38 < 0) {
    operator_delete(local_48);
  }
  return;
}




void FUN_1006576cc(long *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1010af6e0();
    FUN_1010af6ec(uVar1,*param_1);
    *param_1 = 0;
  }
  return;
}




bool FUN_100657700(int param_1)

{
  return param_1 == 0x20;
}




bool FUN_10065770c(int param_1)

{
  return param_1 == 0x200b;
}




bool FUN_10065771c(int param_1)

{
  return param_1 == 10;
}




bool FUN_100657728(int param_1)

{
  return param_1 == 0x2022 || param_1 == 0x2d;
}




undefined8 FUN_100657744(int param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 == 0x20) {
    return 1;
  }
  if (param_1 == 0x200b) {
    return 1;
  }
  if ((0x146 < param_1 - 0x4e00U >> 6 && 0x5f < param_1 - 0x3040U) && 0x5f < param_1 - 0x30a0U) {
    return 0;
  }
  if (param_1 == 0x28) {
    return 0;
  }
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    if (uVar2 == 0xf) break;
    uVar1 = uVar2 + 1;
  } while ((&DAT_10117db54)[uVar2] != param_1);
  if (0xe < uVar2) {
    if (param_2 == (int *)0x0) {
      return 1;
    }
    if (*param_2 != 0x29) {
      uVar1 = 0;
      do {
        uVar2 = uVar1;
        if (uVar2 == 0x4f) break;
        uVar1 = uVar2 + 1;
      } while ((&DAT_10117da14)[uVar2] != *param_2);
      if (0x4e < uVar2) {
        return 1;
      }
    }
  }
  return 0;
}




undefined8 FUN_100657834(void)

{
  return 0x25a1;
}




void FUN_10065783c(void)

{
  FUN_100657850();
  return;
}




void FUN_100657850(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  FUN_1010b393c(param_1,0,0,param_2,param_3);
  FUN_1010b3960(param_1,param_4,param_5,param_6,param_7);
  uVar1 = NEON_ucvtf(CONCAT44((int)param_3,(int)param_2),4);
  fVar3 = 1.0 / (float)uVar1;
  fVar2 = (float)((ulong)uVar1 >> 0x20);
  fVar4 = -1.0 / fVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(float *)(param_1 + 0x70) = fVar3 + fVar3;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(float *)(param_1 + 0x84) = fVar4 + fVar4;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0xbc23d70a;
  *(ulong *)(param_1 + 0xa0) = CONCAT44(fVar4 * -fVar2,fVar3 * -(float)uVar1);
  *(undefined8 *)(param_1 + 0xa8) = 0x3f80000080000000;
  return;
}




void FUN_10065793c(long param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = *(undefined4 *)(param_4 + 0x68);
  uVar2 = *(undefined4 *)(param_4 + 0x6c);
  FUN_1010b393c(param_1,0,0,uVar1,uVar2);
  FUN_1010b3960(param_1,0,0,uVar1,uVar2);
  FUN_1010b3934(param_1,param_4);
  uVar3 = NEON_ucvtf(CONCAT44(param_3,param_2),4);
  fVar5 = 1.0 / (float)uVar3;
  fVar4 = (float)((ulong)uVar3 >> 0x20);
  fVar6 = -1.0 / fVar4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(float *)(param_1 + 0x70) = fVar5 + fVar5;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(float *)(param_1 + 0x84) = fVar6 + fVar6;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0xbc23d70a;
  *(ulong *)(param_1 + 0xa0) = CONCAT44(fVar6 * -fVar4,fVar5 * -(float)uVar3);
  *(undefined8 *)(param_1 + 0xa8) = 0x3f80000080000000;
  return;
}




void FUN_100657a24(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  uVar7 = *(undefined8 *)(param_2 + 0x58);
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  uVar5 = *(undefined8 *)(param_2 + 0xa8);
  uVar4 = *(undefined8 *)(param_2 + 0xa0);
  uVar2 = *(undefined8 *)(param_2 + 0xb8);
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  uVar3 = *(undefined8 *)(param_2 + 0xbc);
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  uVar6 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_2 + 0xc4);
  *(undefined8 *)(param_1 + 0xbc) = uVar3;
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  *(undefined8 *)(param_1 + 0x98) = uVar7;
  *(undefined8 *)(param_1 + 0x90) = uVar6;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  return;
}




void FUN_100657a68(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  uVar7 = *(undefined8 *)(param_2 + 0x58);
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  uVar5 = *(undefined8 *)(param_2 + 0xa8);
  uVar4 = *(undefined8 *)(param_2 + 0xa0);
  uVar2 = *(undefined8 *)(param_2 + 0xb8);
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  uVar3 = *(undefined8 *)(param_2 + 0xbc);
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  uVar6 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_2 + 0xc4);
  *(undefined8 *)(param_1 + 0xbc) = uVar3;
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  *(undefined8 *)(param_1 + 0x98) = uVar7;
  *(undefined8 *)(param_1 + 0x90) = uVar6;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  FUN_1010b3960(param_1,param_3,param_4,param_5,param_6);
  return;
}




uint * FUN_100657abc(uint *param_1)

{
  uint *puVar1;
  long *plVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar1 = param_1 + 0xc;
  FUN_100657bb8(puVar1);
  puVar3 = param_1 + 4;
  if (*puVar3 != 0) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 6) + uVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        plVar2 = *(long **)(*(long *)(param_1 + 6) + uVar4 * 8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *puVar3);
  }
  uVar4 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar5 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 2) + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        uVar4 = (ulong)*param_1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  FUN_100657bb8(puVar1);
  FUN_10065aa70(puVar1,*(undefined8 *)(param_1 + 0xe));
  if (*(void **)(param_1 + 10) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 10));
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  if (*(void **)(param_1 + 6) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 6));
    puVar3[0] = 0;
    puVar3[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
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




void FUN_100657bb8(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  if (*(int *)(param_1 + 2) != 0) {
    plVar6 = (long *)*param_1;
    while (plVar6 != param_1 + 1) {
      iVar3 = *(int *)((long)plVar6 + 0x44);
      if (-1 < iVar3) {
        do {
          (*(code *)plVar6[5])(plVar6[6],(int)plVar6[8],iVar3,plVar6[7]);
          iVar1 = *(int *)((long)plVar6 + 0x44);
          iVar3 = iVar1 + -1;
          *(int *)((long)plVar6 + 0x44) = iVar3;
        } while (0 < iVar1);
      }
      plVar4 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        plVar4 = plVar6 + 2;
        bVar2 = *(long **)*plVar4 != plVar6;
        plVar6 = (long *)*plVar4;
        if (bVar2) {
          do {
            lVar5 = *plVar4;
            plVar4 = (long *)(lVar5 + 0x10);
            plVar6 = (long *)*plVar4;
          } while (*plVar6 != lVar5);
        }
      }
      else {
        do {
          plVar6 = plVar4;
          plVar4 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    }
    FUN_10065aa70(param_1,param_1[1]);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = param_1 + 1;
  }
  return;
}




undefined8 FUN_100657c84(uint *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long local_38;
  
  if (param_2 == 0) {
LAB_100657cf8:
    uVar2 = 0;
  }
  else {
    local_38 = param_2;
    if (*param_1 != 0) {
      uVar4 = 0;
      do {
        plVar3 = (long *)(param_2 + 8);
        if (*(char *)(param_2 + 0x1f) < '\0') {
          plVar3 = *(long **)(param_2 + 8);
        }
        uVar1 = FUN_100657d10(*(undefined8 *)(*(long *)(param_1 + 2) + uVar4 * 8),plVar3);
        if ((uVar1 & 1) != 0) goto LAB_100657cf8;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *param_1);
    }
    FUN_100657d7c(param_1,&local_38);
    uVar2 = 1;
  }
  return uVar2;
}




bool FUN_100657d10(long param_1,char *param_2)

{
  size_t sVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  
  sVar4 = _strlen(param_2);
  sVar1 = *(size_t *)(param_1 + 0x10);
  if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
    sVar1 = (ulong)*(byte *)(param_1 + 0x1f);
  }
  if (sVar4 == sVar1) {
    iVar3 = std::string::compare(param_1 + 8,0,(char *)0xffffffffffffffff,(ulong)param_2);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}




void FUN_100657d7c(uint *param_1,undefined8 *param_2)

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
    FUN_10065aab0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




int FUN_100657dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  char local_98 [32];
  undefined8 **local_78 [2];
  char local_61;
  
  FUN_100658990(local_98);
  if (local_98[0] != '\0') {
    if (-1 < local_61) {
      local_78[0] = local_78;
    }
    plVar2 = (long *)FUN_100657ecc(param_1,local_78[0]);
    if ((((plVar2 != (long *)0x0) && (iVar1 = (**(code **)(*plVar2 + 0x40))(), iVar1 != 0)) &&
        (iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,param_3), iVar1 != 0)) &&
       (lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,local_98,param_3), lVar3 != 0)) {
      iVar1 = FUN_100657f34(param_1,lVar3);
      iVar1 = iVar1 + 1;
      goto LAB_100657eac;
    }
  }
  iVar1 = -1;
LAB_100657eac:
  FUN_100658a8c(local_98);
  return iVar1;
}




long FUN_100657ecc(uint *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 2) + uVar3 * 8);
      if (lVar2 != 0) {
        uVar1 = FUN_100657d10(lVar2,param_2);
        if ((uVar1 & 1) != 0) {
          return lVar2;
        }
        uVar1 = (ulong)*param_1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}




void FUN_100657f34(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long local_28;
  
  local_28 = param_2;
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_100658870(param_1 + 0x10,&local_28);
    uVar2 = *(int *)(param_1 + 0x10) - 1;
  }
  else {
    uVar1 = *(int *)(param_1 + 0x20) - 1;
    uVar2 = *(uint *)(*(long *)(param_1 + 0x28) + (ulong)uVar1 * 4);
    *(uint *)(param_1 + 0x20) = uVar1;
    *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar2 * 8) = param_2;
  }
  *(uint *)(local_28 + 8) = uVar2;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return;
}




undefined8 FUN_100657fa8(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  uint local_34;
  
  iVar1 = (int)param_2;
  if (((iVar1 != 0) && (iVar1 <= *(int *)(param_1 + 0x10))) &&
     (plVar2 = *(long **)(*(long *)(param_1 + 0x18) + (ulong)(iVar1 - 1) * 8), plVar2 != (long *)0x0
     )) {
    iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (iVar1 == 0) {
      return param_2;
    }
    local_34 = *(uint *)(plVar2 + 1);
    *(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)local_34 * 8) = 0;
    FUN_1000e6a60(param_1 + 0x20,&local_34);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return 0xffffffff;
}




void FUN_100658564(long param_1,ulong param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong local_38;
  undefined8 uStack_30;
  ulong local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  plVar1 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if ((ulong)plVar3[4] >= param_2) {
        plVar1 = plVar3;
      }
      plVar3 = (long *)plVar3[(ulong)plVar3[4] < param_2];
    } while (plVar3 != (long *)0x0);
    if ((plVar1 != plVar2) && ((ulong)plVar1[4] <= param_2)) {
      *(int *)((long)plVar1 + 0x44) = *(int *)((long)plVar1 + 0x44) + 1;
      return;
    }
  }
  uStack_14 = 1;
  local_38 = param_2;
  uStack_30 = param_3;
  local_28 = param_2;
  uStack_20 = param_5;
  local_18 = param_4;
  FUN_10065aba8(param_1,&local_38,&local_38);
  return;
}




void FUN_1006585e4(void *param_1,undefined8 param_2,int param_3)

{
  if ((param_3 < 1) && (param_1 != (void *)0x0)) {
    operator_delete__(param_1);
    return;
  }
  return;
}




undefined8 FUN_1006585f8(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 local_48;
  
  if ((((param_2 == 0) || (*(int *)(param_1 + 0x10) < param_2)) ||
      (plVar6 = *(long **)(*(long *)(param_1 + 0x18) + (ulong)(param_2 - 1) * 8),
      plVar6 == (long *)0x0)) || (iVar2 = (**(code **)(*plVar6 + 0x50))(plVar6), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    local_48 = 0;
    uVar3 = (**(code **)(*plVar6 + 0x28))(plVar6,&local_48);
    uVar1 = local_48;
    uVar4 = (**(code **)(*plVar6 + 0x38))(plVar6);
    uVar5 = (**(code **)(*plVar6 + 0x40))(plVar6);
    FUN_100658564(param_1 + 0x30,uVar1,uVar4,uVar3,uVar5);
    *param_3 = local_48;
  }
  return uVar3;
}




void FUN_1006586d8(long param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if ((ulong)plVar3[4] >= param_2) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[(ulong)plVar3[4] < param_2];
    } while (plVar3 != (long *)0x0);
    if ((plVar4 != plVar2) && ((ulong)plVar4[4] <= param_2)) {
      iVar1 = *(int *)((long)plVar4 + 0x44) + -1;
      *(int *)((long)plVar4 + 0x44) = iVar1;
      (*(code *)plVar4[5])(param_2,(int)plVar4[8],iVar1,plVar4[7]);
      if (*(int *)((long)plVar4 + 0x44) < 1) {
        FUN_10065acdc(param_1,plVar4);
        return;
      }
    }
  }
  return;
}




undefined8 FUN_100658770(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 **local_68 [2];
  char local_51;
  
  FUN_100658990(auStack_88);
  if (-1 < local_51) {
    local_68[0] = local_68;
  }
  plVar1 = (long *)FUN_100657ecc(param_1,local_68[0]);
  if (plVar1 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,auStack_88);
  }
  FUN_100658a8c(auStack_88);
  return uVar2;
}




undefined8 FUN_1006587e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined8 **local_78 [2];
  char local_61;
  
  FUN_100658990(auStack_98);
  if (-1 < local_61) {
    local_78[0] = local_78;
  }
  plVar1 = (long *)FUN_100657ecc(param_1,local_78[0]);
  if (plVar1 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,auStack_98,param_3);
  }
  FUN_100658a8c(auStack_98);
  return uVar2;
}




void FUN_100658870(uint *param_1,undefined8 *param_2)

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
    FUN_10065ab2c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined8 * FUN_1006588f0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  void *local_38 [2];
  char local_21;
  
  *param_1 = &PTR_FUN_1014a81d8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  FUN_1000ee4ec(local_38);
  std::string::operator=((string *)(param_1 + 1),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return param_1;
}




void FUN_100658958(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10065895c);
  (*pcVar1)();
}




void FUN_10065895c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100658960);
  (*pcVar1)();
}




undefined8 FUN_100658960(void)

{
  return 1;
}




bool FUN_100658968(long param_1,uint param_2)

{
  return (param_2 & (*(uint *)(param_1 + 0x20) ^ 0xffffffff)) == 0;
}




uint FUN_100658978(long param_1)

{
  return *(uint *)(param_1 + 0x20) & 1;
}




byte FUN_100658984(long param_1)

{
  return *(byte *)(param_1 + 0x20) >> 1 & 1;
}




undefined1 * FUN_100658990(undefined1 *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  char *local_78;
  undefined4 local_70;
  char local_61;
  undefined1 *local_60;
  code *pcStack_58;
  undefined8 *local_50;
  code *pcStack_48;
  undefined1 *local_40;
  code *pcStack_38;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  local_78 = param_2;
  sVar2 = _strlen(param_2);
  local_70 = (undefined4)sVar2;
  local_40 = param_1 + 0x20;
  pcStack_38 = FUN_1004dfcd4;
  pcStack_48 = FUN_1004dfcd4;
  local_60 = param_1 + 0x50;
  pcStack_58 = FUN_1004dfcd4;
  local_50 = (undefined8 *)(param_1 + 0x38);
  iVar1 = FUN_1004df8f0(&DAT_101ea5920,&local_78,&local_40,&local_50,&local_60,&DAT_101d91150,
                        &DAT_101d91150,&DAT_101d91150,&DAT_101d91150,&DAT_101d91150,&DAT_101d91150,
                        &DAT_101d91150,&DAT_101d91150,&DAT_101d91150,&DAT_101d91150,&DAT_101d91150,
                        &DAT_101d91150,&DAT_101d91150);
  if (iVar1 != 0) {
    *param_1 = 1;
    FUN_1000ee4ec(&local_78,param_2);
    std::string::operator=((string *)(param_1 + 8),(string *)&local_78);
    if (local_61 < '\0') {
      operator_delete(local_78);
    }
  }
  return param_1;
}




long FUN_100658a8c(long param_1)

{
  if (*(char *)(param_1 + 0x67) < '\0') {
    operator_delete(*(void **)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)(param_1 + 8));
  }
  return param_1;
}




void FUN_100658aec(int param_1)

{
  undefined1 **ppuVar1;
  undefined1 *local_440 [2];
  char local_429;
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  DAT_101ea5960 = operator_new(0x50);
  DAT_101ea5960[8] = 0;
  DAT_101ea5960[7] = 0;
  DAT_101ea5960[1] = 0;
  *DAT_101ea5960 = 0;
  DAT_101ea5960[3] = 0;
  DAT_101ea5960[2] = 0;
  DAT_101ea5960[5] = 0;
  DAT_101ea5960[4] = 0;
  DAT_101ea5960[6] = DAT_101ea5960 + 7;
  *(undefined4 *)(DAT_101ea5960 + 9) = 0;
  if (param_1 != 0) {
    FUN_1004e20a8(&DAT_101d911b0,3,auStack_428,0x400);
    FUN_1000ee4ec(local_440,auStack_428);
    std::string::append((char *)local_440);
    ppuVar1 = (undefined1 **)local_440[0];
    if (-1 < local_429) {
      ppuVar1 = local_440;
    }
    FUN_100658bd8("build",ppuVar1,0);
    if (local_429 < '\0') {
      operator_delete(local_440[0]);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100658bd8(undefined8 param_1,undefined8 param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 == 0) {
    pvVar1 = operator_new(0x40);
    FUN_100658f7c(pvVar1,param_1,param_2);
  }
  else {
    pvVar1 = operator_new(0x70);
    FUN_100659868(pvVar1,param_1,param_2);
  }
  FUN_100657c84(DAT_101ea5960,pvVar1);
  return;
}




bool FUN_100658c44(void)

{
  return DAT_101ea5960 != 0;
}




void FUN_100658c58(void)

{
  void *pvVar1;
  
  if (DAT_101ea5960 != 0) {
    pvVar1 = (void *)FUN_100657abc();
    operator_delete(pvVar1);
  }
  DAT_101ea5960 = 0;
  return;
}




void FUN_100658c88(undefined8 param_1,undefined8 param_2)

{
  FUN_100657dfc(DAT_101ea5960,param_1,param_2);
  return;
}




void FUN_100658c9c(undefined8 param_1)

{
  FUN_100657fa8(DAT_101ea5960,param_1);
  return;
}




void FUN_100658cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10065804c(DAT_101ea5960,param_1,param_2,param_3);
  return;
}




void FUN_100658cc4(undefined8 param_1,undefined8 param_2)

{
  FUN_1006585f8(DAT_101ea5960,param_1,param_2);
  return;
}




void FUN_100658cd8(void)

{
  FUN_1006586d8(DAT_101ea5960 + 0x30);
  return;
}




void FUN_100658ce8(undefined8 param_1)

{
  FUN_1006586d8(DAT_101ea5960 + 0x30,param_1);
  return;
}




void FUN_100658cfc(undefined8 param_1)

{
  FUN_100658770(DAT_101ea5960,param_1);
  return;
}




void FUN_100658d0c(undefined8 param_1,undefined8 param_2)

{
  FUN_1006587e8(DAT_101ea5960,param_1,param_2);
  return;
}




bool FUN_100658d20(char *param_1,string *param_2)

{
  char *pcVar1;
  void *local_48 [2];
  char local_31;
  
  pcVar1 = _strstr(param_1,"://");
  if (pcVar1 != (char *)0x0) {
    FUN_1000ee4ec(local_48,param_1);
    std::string::operator=(param_2,(string *)local_48);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    std::string::resize((ulong)param_2,(char)pcVar1 - (char)param_1);
  }
  return pcVar1 != (char *)0x0;
}




void FUN_100658da4(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (0 < param_3) {
    return;
  }
  _munmap();
  return;
}




void FUN_100658db4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a8248;
  return;
}




uint FUN_100658dc8(long param_1)

{
  uint uVar1;
  
  uVar1 = _close(*(undefined4 *)(param_1 + 0x10));
  if (-1 < (int)uVar1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return ~uVar1 >> 0x1f;
}




void FUN_100658dfc(long param_1,void *param_2,size_t param_3)

{
  _read(*(int *)(param_1 + 0x10),param_2,param_3);
  return;
}




void FUN_100658e04(long param_1,void *param_2,size_t param_3)

{
  _write(*(int *)(param_1 + 0x10),param_2,param_3);
  return;
}




undefined8 FUN_100658e0c(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  uVar2 = _mmap(0,uVar1,1,2,(int)param_1[2],0);
  *param_2 = uVar2;
  return uVar1;
}




undefined8 FUN_100658e68(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  _munmap(param_2,uVar1);
  return 0;
}




code * FUN_100658ea0(void)

{
  return FUN_100658da4;
}




off_t FUN_100658eac(long param_1)

{
  stat sStack_a0;
  
  _fstat(*(int *)(param_1 + 0x10),&sStack_a0);
  return sStack_a0.st_size;
}




undefined8 FUN_100658ed4(void)

{
  return 1;
}




undefined8 FUN_100658edc(void)

{
  return 1;
}




undefined8 FUN_100658ee4(undefined8 param_1,undefined8 param_2,string *param_3)

{
  void *local_38 [2];
  char local_21;
  
  FUN_1000ee4ec(local_38,param_1);
  std::string::operator=(param_3,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  std::string::append((char *)param_3);
  std::string::append((char *)param_3);
  std::string::append((char *)param_3);
  return 1;
}




undefined8 FUN_100658f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  void *local_48 [2];
  char local_31;
  
  puVar1 = (undefined8 *)FUN_1006588f0(param_1,param_2,7);
  *puVar1 = &PTR_thunk_FUN_100658ff8_1014a82b8;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[5] = 0;
  FUN_1000ee4ec(local_48,param_3);
  std::string::operator=((string *)(puVar1 + 5),(string *)local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return param_1;
}




undefined8 * FUN_100658ff8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100658ff8_1014a82b8;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  *param_1 = &PTR_FUN_1014a81d8;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  return param_1;
}




void thunk_FUN_100658ff8(void)

{
  FUN_100658ff8();
  return;
}




void FUN_100659054(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100658ff8();
  operator_delete(pvVar1);
  return;
}




undefined8 * FUN_100659068(long *param_1,undefined8 param_2,uint param_3)

{
  undefined8 ***pppuVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 **local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  iVar2 = (**(code **)(*param_1 + 0x38))(param_1,param_2,&local_48);
  puVar4 = (undefined8 *)0x0;
  if (iVar2 != 0) {
    uVar3 = 2;
    if ((param_3 & 3) != 3) {
      uVar3 = (uint)((param_3 & 3) == 2);
    }
    pppuVar1 = (undefined8 ***)local_48;
    if (-1 < local_38) {
      pppuVar1 = &local_48;
    }
    iVar2 = _open(pppuVar1,uVar3 | (param_3 >> 2 & 1) << 9 | 4);
    if (iVar2 < 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = operator_new(0x18);
      *(undefined4 *)(puVar4 + 1) = 0xffffffff;
      *(uint *)((long)puVar4 + 0xc) = param_3;
      *puVar4 = &PTR_FUN_1014a8248;
      *(int *)(puVar4 + 2) = iVar2;
    }
  }
  if (local_38 < 0) {
    operator_delete(local_48);
  }
  return puVar4;
}




bool FUN_100659358(long param_1,char *param_2)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = *param_2;
  if (cVar1 != '\0') {
    plVar2 = (long *)(param_1 + 0x28);
    if (*(char *)(param_1 + 0x3f) < '\0') {
      plVar2 = (long *)*plVar2;
    }
    FUN_100658ee4(plVar2);
  }
  return cVar1 != '\0';
}




void FUN_100659398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = param_4 + 1;
  plVar2 = plVar1;
  if (*(char *)((long)param_4 + 0x1f) < '\0') {
    plVar2 = (long *)*plVar1;
  }
  FUN_100659410(*param_4,param_1,param_3,plVar2,*(undefined4 *)(param_4 + 4));
  if (0 < (int)param_3) {
    return;
  }
  if (*(char *)((long)param_4 + 0x1f) < '\0') {
    operator_delete((void *)*plVar1);
  }
  operator_delete(param_4);
  return;
}




void FUN_100659410(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 local_28;
  
  local_28 = param_4;
  lVar5 = FUN_10065a620(param_1 + 0x40,&local_28);
  lVar6 = *(long *)(lVar5 + 8);
  lVar10 = lVar6 + (param_5 & 0xffffffff) * 0x20;
  piVar8 = (int *)(lVar10 + 0x1c);
  iVar9 = *(int *)(lVar10 + 0x18);
  if (iVar9 <= *piVar8) {
    lVar11 = *(long *)(lVar5 + 0x20);
    lVar10 = (long)iVar9;
    iVar9 = 0x7fffffff;
    iVar7 = -1;
    do {
      iVar4 = *(int *)(lVar11 + lVar10 * 4);
      *(int *)(lVar11 + lVar10 * 4) = iVar4 + -1;
      iVar2 = (int)lVar10;
      if (1 < iVar4 || lVar10 <= iVar7) {
        iVar2 = iVar7;
      }
      iVar3 = (int)lVar10;
      if (1 < iVar4 || iVar9 != 0x7fffffff) {
        iVar3 = iVar9;
      }
      bVar1 = lVar10 < *piVar8;
      lVar10 = lVar10 + 1;
      iVar9 = iVar3;
      iVar7 = iVar2;
    } while (bVar1);
    if (iVar3 != 0x7fffffff) {
      FUN_1004d29b8(param_2 + (DAT_101ea5980 * iVar3 -
                              (ulong)(uint)(*(int *)(lVar6 + (param_5 & 0xffffffff) * 0x20 + 0x10) +
                                           *(int *)(lVar5 + 0x44))),
                    ((iVar2 - iVar3) + 1) * (int)DAT_101ea5980);
    }
  }
  return;
}




undefined8 * FUN_100659500(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a8328;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  return param_1;
}




void FUN_10065953c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a8328;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}




undefined8 FUN_100659578(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x2f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  FUN_100659410(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x38),param_3,plVar1,
                *(undefined4 *)(param_1 + 0x30));
  return 1;
}




long FUN_1006595b0(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x44);
  uVar1 = (ulong)(*(uint *)(param_1 + 0x40) - uVar2);
  if ((long)(uVar2 + param_3) <= (long)(ulong)*(uint *)(param_1 + 0x40)) {
    uVar1 = param_3;
  }
  _memmove(param_2,(void *)(*(long *)(param_1 + 0x38) + (ulong)uVar2),uVar1 & 0xffffffff);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + (int)uVar1;
  return (long)(int)uVar1;
}




undefined8 FUN_100659608(void)

{
  return 0;
}




undefined4 FUN_100659610(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x2f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  FUN_100659658(*(undefined8 *)(param_1 + 0x10),param_2,param_3,plVar1,
                *(undefined4 *)(param_1 + 0x30));
  *param_2 = *(undefined8 *)(param_1 + 0x38);
  return *(undefined4 *)(param_1 + 0x40);
}




void FUN_100659658(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined8 local_28;
  
  local_28 = param_4;
  lVar3 = FUN_10065a620(param_1 + 0x40,&local_28);
  lVar5 = *(long *)(lVar3 + 8) + (param_5 & 0xffffffff) * 0x20;
  piVar4 = (int *)(lVar5 + 0x1c);
  iVar2 = *(int *)(lVar5 + 0x18);
  if (iVar2 <= *piVar4) {
    lVar3 = *(long *)(lVar3 + 0x20);
    lVar5 = (long)iVar2;
    do {
      *(int *)(lVar3 + lVar5 * 4) = *(int *)(lVar3 + lVar5 * 4) + 1;
      bVar1 = lVar5 < *piVar4;
      lVar5 = lVar5 + 1;
    } while (bVar1);
  }
  return;
}




undefined8 FUN_1006596cc(void)

{
  return 0;
}




code * FUN_1006596d4(void)

{
  return FUN_100659398;
}




void FUN_1006596e0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x28);
  FUN_100659720(pvVar1,param_1 + 0x10);
  return;
}




undefined4 FUN_100659708(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}




undefined8 FUN_100659710(void)

{
  return 1;
}




undefined8 FUN_100659718(void)

{
  return 0;
}




undefined8 * FUN_100659720(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar1 = param_1 + 1;
  *param_1 = *param_2;
  if ((char)*(byte *)((long)param_2 + 0x1f) < '\0') {
    uVar2 = param_2[2];
    if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_10065a98c();
    }
    puVar3 = (undefined8 *)param_2[1];
  }
  else {
    puVar3 = param_2 + 1;
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x1f);
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x1f) = (char)uVar2;
    if (uVar2 == 0) goto LAB_1006597b0;
  }
  else {
    uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar1 = operator_new(uVar4);
    param_1[2] = uVar2;
    param_1[3] = uVar4 | 0x8000000000000000;
    param_1[1] = puVar1;
  }
  _memcpy(puVar1,puVar3,uVar2);
LAB_1006597b0:
  *(undefined1 *)((long)puVar1 + uVar2) = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}




void FUN_1006597d8(string *param_1,string *param_2)

{
  string sVar1;
  ulong uVar2;
  uint uVar3;
  void *local_50 [2];
  char local_39;
  void *local_38 [2];
  char local_21;
  
  sVar1 = param_2[0x17];
  if ((char)sVar1 < '\0') {
    uVar3 = (uint)*(undefined8 *)(param_2 + 8);
    if (uVar3 == 0) goto LAB_10065980c;
  }
  else {
    uVar3 = (uint)(byte)sVar1;
    if (sVar1 == (string)0x0) {
LAB_10065980c:
      uVar2 = 0;
      goto LAB_100659810;
    }
  }
  uVar2 = (ulong)(uVar3 - 1);
LAB_100659810:
  std::string::string((string *)local_50,param_2,0,uVar2,(allocator *)param_2);
  std::string::string((string *)local_38,(string *)local_50);
  std::string::operator=(param_1,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return;
}




void FUN_100659df0(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  void *pvVar2;
  size_t sVar3;
  
  pvVar2 = (void *)*param_1;
  if ((ulong)(param_1[2] - (long)pvVar2 >> 5) < param_2) {
    if (param_2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10065a998();
    }
    sVar3 = param_1[1] - (long)pvVar2;
    pvVar1 = operator_new(param_2 << 5);
    if (0 < (long)sVar3) {
      _memcpy(pvVar1,pvVar2,sVar3);
    }
    *param_1 = pvVar1;
    param_1[1] = (long)pvVar1 + sVar3;
    param_1[2] = (void *)((long)pvVar1 + param_2 * 0x20);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}




void FUN_100659e98(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  void *pvVar2;
  size_t sVar3;
  
  pvVar2 = (void *)*param_1;
  if ((ulong)(param_1[2] - (long)pvVar2 >> 2) < param_2) {
    if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10065a998();
    }
    sVar3 = param_1[1] - (long)pvVar2;
    pvVar1 = operator_new(param_2 << 2);
    if (0 < (long)sVar3) {
      _memcpy(pvVar1,pvVar2,sVar3);
    }
    *param_1 = pvVar1;
    param_1[1] = (long)pvVar1 + sVar3;
    param_1[2] = (void *)((long)pvVar1 + param_2 * 4);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}




void FUN_100659f40(uint *param_1,undefined8 *param_2,undefined8 param_3)

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
  uVar7 = FUN_10065ae90(param_1,param_3);
  puVar1[1] = uVar7;
  return;
}




void FUN_10065a0d4(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  uint uVar6;
  
  *param_1 = &PTR_thunk_FUN_10065a0d4_1014a8398;
  puVar5 = (uint *)(param_1 + 8);
  lVar4 = param_1[9];
  uVar1 = 0;
  do {
    uVar6 = uVar1;
    if (*puVar5 == uVar6) goto LAB_10065a12c;
    uVar1 = uVar6 + 1;
  } while (*(int *)(lVar4 + (ulong)uVar6 * 8 + 4) == -1);
  if (*puVar5 + 1 != uVar6 + 1) {
    do {
      _fclose(*(FILE **)(param_1[0xc] + (ulong)*(uint *)(lVar4 + (ulong)uVar6 * 8 + 4) * 0x48 + 0x38
                        ));
      uVar2 = *(uint *)(param_1 + 8);
      uVar1 = uVar2;
      if (uVar2 <= uVar6 + 1) {
        uVar1 = uVar6 + 1;
      }
      do {
        uVar6 = uVar6 + 1;
        uVar3 = uVar1;
        if (uVar2 <= uVar6) break;
        uVar3 = uVar6;
      } while (*(int *)(param_1[9] + (ulong)uVar6 * 8 + 4) == -1);
      uVar6 = uVar3;
      if (uVar2 == uVar6) break;
      lVar4 = param_1[9];
    } while( true );
  }
LAB_10065a12c:
  FUN_10065a1b8(puVar5);
  FUN_10065ad70(puVar5);
  FUN_100658ff8(param_1);
  return;
}




void FUN_10065a1b8(uint *param_1)

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
        FUN_10065adf4(param_1);
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




void thunk_FUN_10065a0d4(void)

{
  FUN_10065a0d4();
  return;
}




void FUN_10065a240(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10065a0d4();
  operator_delete(pvVar1);
  return;
}




undefined8 * FUN_10065a254(long *param_1,long param_2,undefined4 param_3)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  void *local_90 [2];
  char local_79;
  undefined4 local_74;
  undefined8 **local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 **local_58 [2];
  char local_41;
  
  puVar14 = (undefined8 *)(param_2 + 0x38);
  puVar15 = (undefined8 *)*puVar14;
  if (-1 < *(char *)(param_2 + 0x4f)) {
    puVar15 = puVar14;
  }
  uVar6 = FUN_1004d2524(puVar15);
  if (uVar6 < 2) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    puVar15 = (undefined8 *)*puVar14;
    if (-1 < *(char *)(param_2 + 0x4f)) {
      puVar15 = puVar14;
    }
    FUN_1000ee4ec(local_58,puVar15);
    FUN_1006597d8(local_58,local_58);
    local_70 = local_58[0];
    if (-1 < local_41) {
      local_70 = local_58;
    }
    lVar8 = FUN_10065a480(param_1 + 8,&local_70);
    if (lVar8 == 0) {
      puVar15 = (undefined8 *)0x0;
    }
    else {
      local_70 = (undefined8 ***)0x0;
      uStack_68 = 0;
      local_60 = 0;
      iVar7 = (**(code **)(*param_1 + 0x38))(param_1,param_2,&local_70);
      puVar15 = (undefined8 *)0x0;
      if (iVar7 != 0) {
        local_74 = 0xffffffff;
        puVar15 = *(undefined8 **)(param_2 + 0x50);
        if (-1 < *(char *)(param_2 + 0x67)) {
          puVar15 = (undefined8 *)(param_2 + 0x50);
        }
        FUN_1000ee4ec(local_90,puVar15);
        lVar9 = FUN_10065a53c(lVar8,local_90,&local_74);
        if (local_79 < '\0') {
          operator_delete(local_90[0]);
        }
        lVar4 = DAT_101ea5980;
        uVar6 = *(uint *)(lVar9 + 0x18);
        uVar12 = *(uint *)(lVar9 + 0x1c);
        uVar11 = (ulong)(int)uVar6;
        lVar10 = DAT_101ea5980 * uVar11;
        if (uVar6 <= uVar12) {
          lVar13 = *(long *)(lVar8 + 0x20);
          do {
            *(int *)(lVar13 + (uVar11 & 0xffffffff) * 4) =
                 *(int *)(lVar13 + (uVar11 & 0xffffffff) * 4) + 1;
            uVar6 = (int)uVar11 + 1;
            uVar11 = (ulong)uVar6;
            uVar12 = *(uint *)(lVar9 + 0x1c);
          } while (uVar6 <= uVar12);
          uVar6 = *(uint *)(lVar9 + 0x18);
        }
        uVar6 = ((uVar12 - uVar6) + 1) * (int)lVar4;
        lVar10 = lVar10 + (ulong)uVar6;
        iVar7 = *(uint *)(lVar8 + 0x40) - (int)lVar10;
        if (lVar10 <= (long)(ulong)*(uint *)(lVar8 + 0x40)) {
          iVar7 = 0;
        }
        lVar10 = FUN_1004d295c(0,iVar7 + uVar6,*(undefined8 *)(lVar8 + 0x38));
        iVar7 = *(int *)(lVar8 + 0x44);
        iVar2 = *(int *)(lVar9 + 0x10);
        lVar8 = DAT_101ea5980 * *(int *)(lVar9 + 0x18);
        puVar15 = operator_new(0x48);
        uVar5 = local_74;
        uVar3 = *(undefined4 *)(lVar9 + 0x14);
        pppuVar1 = (undefined8 ***)local_58[0];
        if (-1 < local_41) {
          pppuVar1 = local_58;
        }
        *(undefined4 *)(puVar15 + 1) = 0xffffffff;
        *(undefined4 *)((long)puVar15 + 0xc) = param_3;
        *puVar15 = &PTR_FUN_1014a8328;
        puVar15[2] = param_1;
        FUN_1000ee4ec(puVar15 + 3,pppuVar1);
        *(undefined4 *)(puVar15 + 6) = uVar5;
        puVar15[7] = lVar10 + ((ulong)(uint)(iVar2 + iVar7) - lVar8);
        *(undefined4 *)(puVar15 + 8) = uVar3;
        *(undefined4 *)((long)puVar15 + 0x44) = 0;
      }
      if (local_60 < 0) {
        operator_delete(local_70);
      }
    }
    if (local_41 < '\0') {
      operator_delete(local_58[0]);
    }
  }
  return puVar15;
}




long FUN_10065a480(uint *param_1,undefined8 *param_2)

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
  if (uVar1 != 0) {
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
      if ((int)uVar6 == -1) {
        return 0;
      }
    }
    uVar1 = *(uint *)(lVar5 + uVar6 * 8 + 4);
    if (uVar1 != 0xffffffff) {
      return *(long *)(param_1 + 8) + (ulong)uVar1 * 0x48;
    }
  }
  return 0;
}




void FUN_10065a53c(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [88];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004e07d8(auStack_90);
  FUN_1004e0800(auStack_90,param_2);
  thunk_FUN_1004e13c8(auStack_90,auStack_a0);
  lVar2 = *(long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != lVar2) {
    uVar3 = 0;
    do {
      iVar1 = FUN_1004d2898(auStack_a0,lVar2 + uVar3 * 0x20,0x10);
      if (iVar1 == 0) {
        if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 5) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_10065b1e4();
        }
        lVar2 = *(long *)(param_1 + 8) + uVar3 * 0x20;
        if (param_3 != (int *)0x0) {
          *param_3 = (int)uVar3;
        }
        goto LAB_10065a5ec;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
      lVar2 = *(long *)(param_1 + 8);
    } while (uVar3 < (ulong)(*(long *)(param_1 + 0x10) - lVar2 >> 5));
  }
  lVar2 = 0;
LAB_10065a5ec:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(lVar2);
}




long FUN_10065a620(uint *param_1,undefined8 *param_2)

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
LAB_10065a6b8:
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
      if ((int)uVar6 == -1) goto LAB_10065a6b8;
    }
    uVar6 = (ulong)*(uint *)(lVar5 + uVar6 * 8 + 4);
  }
  return *(long *)(param_1 + 8) + uVar6 * 0x48;
}




bool FUN_10065a6d4(long param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 **local_60 [2];
  char local_49;
  undefined8 **local_48 [2];
  char local_31;
  
  puVar5 = (undefined8 *)(param_2 + 0x38);
  puVar1 = (undefined8 *)*puVar5;
  if (-1 < *(char *)(param_2 + 0x4f)) {
    puVar1 = puVar5;
  }
  uVar3 = FUN_1004d2524(puVar1);
  if (uVar3 < 2) {
    bVar2 = false;
  }
  else {
    puVar1 = (undefined8 *)*puVar5;
    if (-1 < *(char *)(param_2 + 0x4f)) {
      puVar1 = puVar5;
    }
    FUN_1000ee4ec(local_48,puVar1);
    FUN_1006597d8(local_48,local_48);
    local_60[0] = local_48[0];
    if (-1 < local_31) {
      local_60[0] = local_48;
    }
    lVar4 = FUN_10065a480(param_1 + 0x40,local_60);
    if (lVar4 == 0) {
      bVar2 = false;
    }
    else {
      puVar1 = *(undefined8 **)(param_2 + 0x50);
      if (-1 < *(char *)(param_2 + 0x67)) {
        puVar1 = (undefined8 *)(param_2 + 0x50);
      }
      FUN_1000ee4ec(local_60,puVar1);
      lVar4 = FUN_10065a53c(lVar4,local_60,0);
      bVar2 = lVar4 != 0;
      if (local_49 < '\0') {
        operator_delete(local_60[0]);
      }
    }
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  return bVar2;
}




undefined8 FUN_10065a7d8(void)

{
  return 0;
}




undefined8 FUN_10065a7e0(void)

{
  return 0;
}




undefined4 FUN_10065a7e8(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 **local_60 [2];
  char local_49;
  undefined8 **local_48 [2];
  char local_31;
  
  puVar5 = (undefined8 *)(param_2 + 0x38);
  puVar1 = (undefined8 *)*puVar5;
  if (-1 < *(char *)(param_2 + 0x4f)) {
    puVar1 = puVar5;
  }
  uVar2 = FUN_1004d2524(puVar1);
  if (uVar2 < 2) {
    uVar4 = 0;
  }
  else {
    puVar1 = (undefined8 *)*puVar5;
    if (-1 < *(char *)(param_2 + 0x4f)) {
      puVar1 = puVar5;
    }
    FUN_1000ee4ec(local_48,puVar1);
    FUN_1006597d8(local_48,local_48);
    local_60[0] = local_48[0];
    if (-1 < local_31) {
      local_60[0] = local_48;
    }
    lVar3 = FUN_10065a480(param_1 + 0x40,local_60);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      puVar1 = *(undefined8 **)(param_2 + 0x50);
      if (-1 < *(char *)(param_2 + 0x67)) {
        puVar1 = (undefined8 *)(param_2 + 0x50);
      }
      FUN_1000ee4ec(local_60,puVar1);
      lVar3 = FUN_10065a53c(lVar3,local_60,0);
      if (local_49 < '\0') {
        operator_delete(local_60[0]);
      }
      uVar4 = 0;
      if (lVar3 != 0) {
        uVar4 = *(undefined4 *)(lVar3 + 0x14);
      }
    }
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  return uVar4;
}




bool FUN_10065a8f0(long param_1,char *param_2)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = *param_2;
  if (cVar1 != '\0') {
    plVar2 = (long *)(param_1 + 0x28);
    if (*(char *)(param_1 + 0x3f) < '\0') {
      plVar2 = (long *)*plVar2;
    }
    FUN_100658ee4(plVar2);
  }
  return cVar1 != '\0';
}




undefined8 FUN_10065a930(void)

{
  return 1;
}




undefined4 * FUN_10065a938(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_10065b07c(param_1 + 2,param_2 + 2);
  FUN_10065b130(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 FUN_10065a984(void)

{
  return 0;
}




void FUN_10065a98c(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_10065a998(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




undefined8 * FUN_10065a9a4(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  undefined8 ***pppuVar2;
  ulong uVar3;
  undefined8 **local_58;
  size_t local_50;
  undefined8 uStack_48;
  
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  sVar1 = _strlen(param_2);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_10065a98c();
  }
  if (sVar1 < 0x17) {
    pppuVar2 = &local_58;
    uStack_48 = CONCAT17((char)sVar1,(undefined7)uStack_48);
    if (sVar1 == 0) goto LAB_10065aa2c;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pppuVar2 = operator_new(uVar3);
    uStack_48 = uVar3 | 0x8000000000000000;
    local_58 = pppuVar2;
    local_50 = sVar1;
  }
  _memcpy(pppuVar2,param_2,sVar1);
LAB_10065aa2c:
  *(undefined1 *)((long)pppuVar2 + sVar1) = 0;
  FUN_1004df618(param_1,&local_58,0);
  if ((long)uStack_48 < 0) {
    operator_delete(local_58);
  }
  return param_1;
}




void FUN_10065aa70(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10065aa70(param_1,*param_2);
    FUN_10065aa70(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_10065aab0(uint *param_1,uint param_2)

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




void FUN_10065ab2c(uint *param_1,uint param_2)

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




undefined1  [16] FUN_10065aba8(long param_1,ulong *param_2,undefined8 *param_3)

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
      while (puVar3 = puVar2, *param_2 < (ulong)puVar3[4]) {
        puVar4 = puVar3;
        puVar2 = (undefined8 *)*puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_10065ac1c;
      }
      if (*param_2 <= (ulong)puVar3[4]) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_10065ac1c:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x48);
    *(undefined8 *)((long)pvVar5 + 0x20) = *param_3;
    uVar6 = param_3[1];
    *(undefined8 *)((long)pvVar5 + 0x30) = param_3[2];
    *(undefined8 *)((long)pvVar5 + 0x28) = uVar6;
    *(undefined8 *)((long)pvVar5 + 0x38) = param_3[3];
    *(undefined8 *)((long)pvVar5 + 0x40) = param_3[4];
    FUN_10065ac88(param_1,puVar3,puVar4,pvVar5);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar5;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_10065ac88(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




long * FUN_10065acdc(undefined8 *param_1,void *param_2)

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




uint * FUN_10065ad70(uint *param_1)

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
        FUN_10065adf4(param_1);
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




void FUN_10065adf4(long param_1,uint param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar3 = (ulong)param_2;
  pvVar1 = *(void **)(lVar2 + (ulong)param_2 * 0x48 + 0x20);
  if (pvVar1 != (void *)0x0) {
    *(void **)(lVar2 + uVar3 * 0x48 + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(lVar2 + uVar3 * 0x48 + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(lVar2 + uVar3 * 0x48 + 0x10) = pvVar1;
    operator_delete(pvVar1);
  }
  *(undefined4 *)(lVar2 + uVar3 * 0x48) = *(undefined4 *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_10065ae78(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_10065ae84(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




ulong FUN_10065ae90(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_80 [72];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_10065af3c(param_1 + 0x18,auStack_80);
    uVar2 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar1 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar1 + uVar2 * 0x48);
  }
  FUN_10065a938(lVar1 + uVar2 * 0x48,param_2);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10065af3c(uint *param_1,undefined8 *param_2)

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
    FUN_10065afdc(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x48;
  uVar5 = param_2[8];
  uVar10 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  *(undefined8 *)(lVar4 + -0x20) = param_2[5];
  *(undefined8 *)(lVar4 + -0x28) = uVar10;
  *(undefined8 *)(lVar4 + -0x10) = uVar7;
  *(undefined8 *)(lVar4 + -0x18) = uVar6;
  *(undefined8 *)(lVar4 + -8) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar4 + -0x40) = param_2[1];
  *(undefined8 *)(lVar4 + -0x48) = uVar5;
  *(undefined8 *)(lVar4 + -0x30) = uVar9;
  *(undefined8 *)(lVar4 + -0x38) = uVar8;
  return;
}




void FUN_10065afdc(uint *param_1,uint param_2)

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
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x48);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0x48;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        uVar7 = puVar5[3];
        uVar6 = puVar5[2];
        uVar9 = puVar5[5];
        uVar8 = puVar5[4];
        uVar11 = puVar5[7];
        uVar10 = puVar5[6];
        puVar4[8] = puVar5[8];
        puVar4[5] = uVar9;
        puVar4[4] = uVar8;
        puVar4[7] = uVar11;
        puVar4[6] = uVar10;
        puVar4[3] = uVar7;
        puVar4[2] = uVar6;
        puVar5 = puVar5 + 9;
        puVar4 = puVar4 + 9;
        lVar3 = lVar3 + -0x48;
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




undefined8 * FUN_10065b07c(undefined8 *param_1,long *param_2)

{
  void *pvVar1;
  size_t sVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    FUN_10065b0f0(param_1,param_2[1] - *param_2 >> 5);
    pvVar1 = (void *)param_1[1];
    sVar2 = param_2[1] - *param_2;
    if (0 < (long)sVar2) {
      _memcpy(pvVar1,(void *)*param_2,sVar2);
      pvVar1 = (void *)((long)pvVar1 + sVar2);
    }
    param_1[1] = pvVar1;
  }
  return param_1;
}




void FUN_10065b0f0(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  
  if (param_2 >> 0x3b == 0) {
    pvVar1 = operator_new(param_2 << 5);
    *param_1 = pvVar1;
    param_1[1] = pvVar1;
    param_1[2] = (void *)((long)pvVar1 + param_2 * 0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10065ae78();
}




undefined8 * FUN_10065b130(undefined8 *param_1,long *param_2)

{
  void *pvVar1;
  size_t sVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    FUN_10065b1a4(param_1,param_2[1] - *param_2 >> 2);
    pvVar1 = (void *)param_1[1];
    sVar2 = param_2[1] - *param_2;
    if (0 < (long)sVar2) {
      _memcpy(pvVar1,(void *)*param_2,sVar2);
      pvVar1 = (void *)((long)pvVar1 + sVar2);
    }
    param_1[1] = pvVar1;
  }
  return param_1;
}




void FUN_10065b1a4(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  
  if (param_2 >> 0x3e == 0) {
    pvVar1 = operator_new(param_2 << 2);
    *param_1 = pvVar1;
    param_1[1] = pvVar1;
    param_1[2] = (void *)((long)pvVar1 + param_2 * 4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10065ae84();
}




void FUN_10065b1e4(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_10065b1f0(void)

{
  FUN_10065a9a4(&DAT_101ea5920,"(\\w+)://([a-zA-Z_0-9/.-]*/)*([\\w\\.-]+)$");
  ___cxa_atexit(thunk_FUN_1004df820,&DAT_101ea5920,0x100000000);
  FUN_1000ee4ec(&DAT_101ea5968,"/");
  ___cxa_atexit(FUN_1000e6204,&DAT_101ea5968,0x100000000);
  DAT_101ea5980 = _sysconf(0x1d);
  return;
}




void FUN_10065b278(uint *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    lVar4 = 0;
    puVar2 = *(undefined8 **)(param_1 + 2);
    puVar3 = puVar2;
    do {
      if (*(int *)puVar3[2] == param_2) {
        if ((int)lVar4 == 1) {
          return;
        }
        lVar4 = 0;
        piVar5 = (int *)(puVar2 + 3);
        goto LAB_10065b2c8;
      }
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -1;
    } while (-lVar4 != (ulong)uVar1);
  }
  return;
  while( true ) {
    piVar5 = piVar5 + 8;
    lVar4 = lVar4 + -1;
    if (-lVar4 == (ulong)uVar1) break;
LAB_10065b2c8:
    if (*piVar5 == param_2) {
      if ((int)lVar4 != 1) {
        *piVar5 = *(int *)(puVar3 + 3);
      }
      break;
    }
  }
  puVar2 = puVar2 + (ulong)(uVar1 - 1) * 4;
  uVar6 = *puVar2;
  uVar8 = puVar2[3];
  uVar7 = puVar2[2];
  puVar3[1] = puVar2[1];
  *puVar3 = uVar6;
  puVar3[3] = uVar8;
  puVar3[2] = uVar7;
  *param_1 = *param_1 - 1;
  return;
}




void FUN_10065b318(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_101dbd520;
  if (DAT_101dbd520 != (void *)0x0) {
    if (*(void **)((long)DAT_101dbd520 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)DAT_101dbd520 + 8));
    }
    operator_delete(pvVar1);
  }
  DAT_101dbd520 = (void *)0x0;
  return;
}




void FUN_10065b354(uint *param_1,undefined8 *param_2)

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
    FUN_10065c64c(param_1,uVar3);
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




void FUN_10065b3d4(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    while (*param_1 != 0) {
      lVar1 = 0;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      while (*(int *)*puVar2 != param_2) {
        puVar2 = puVar2 + 4;
        lVar1 = lVar1 + -1;
        if (-lVar1 == (ulong)*param_1) {
          return;
        }
      }
      if ((int)lVar1 == 1) {
        return;
      }
      if ((code *)puVar2[-2] != (code *)0x0) {
        (*(code *)puVar2[-2])(puVar2[-1]);
      }
      param_2 = *(int *)(puVar2 + 1);
      if (param_2 == 0) {
        return;
      }
    }
  }
  return;
}




undefined8 * FUN_10065b450(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_thunk_FUN_10065b494_1014a8408;
  operator_new(0x1a1b0);
  uVar1 = FUN_10065c3c8();
  param_1[3] = uVar1;
  return param_1;
}




undefined8 * FUN_10065b494(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_thunk_FUN_10065b494_1014a8408;
  FUN_10065b4e4();
  if (param_1[3] != 0) {
    pvVar1 = (void *)FUN_10065c478();
    operator_delete(pvVar1);
  }
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}




void FUN_10065b4e4(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x10);
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *(long *)(param_1 + 0x10);
        uVar2 = *(uint *)(param_1 + 8);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}




void thunk_FUN_10065b494(void)

{
  FUN_10065b494();
  return;
}




void FUN_10065b54c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10065b494();
  operator_delete(pvVar1);
  return;
}




void FUN_10065b560(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  *(undefined1 *)(lVar2 + 0x1a1a4) = 0;
  iVar1 = FUN_1004e5330(lVar2);
  if (iVar1 != 0) {
    FUN_1004e5a70(lVar2);
    return;
  }
  return;
}




void FUN_10065b5a4(long param_1)

{
  FUN_1004e4780(*(long *)(param_1 + 0x18) + 0x140);
  return;
}




void FUN_10065b5b0(long param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  FUN_10065b5d8(param_1 + 8,&local_18);
  return;
}




void FUN_10065b5d8(uint *param_1,undefined8 *param_2)

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
    FUN_10065c6c8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10065b658(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010065b668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}




void FUN_10065b66c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010065b67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}




bool FUN_10065b680(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,undefined4 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10065b714();
  if (lVar1 != 0) {
    lVar2 = FUN_10065b788(*(undefined8 *)(param_1 + 0x18));
    uVar3 = FUN_10065b890(lVar2,lVar1,param_3);
    *(undefined8 *)(lVar2 + 0x28) = param_4;
    *(undefined4 *)(lVar2 + 0x58) = param_6;
    if (param_5 == 0) {
      FUN_10065b968(uVar3,lVar2);
    }
    else {
      FUN_10065b8f8(*(undefined8 *)(param_1 + 0x18),lVar2);
    }
  }
  return lVar1 != 0;
}




undefined8 FUN_10065b714(long param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar3 = 0;
    do {
      pcVar2 = (char *)(**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar3 * 8) + 0x10))();
      iVar1 = _strcmp(pcVar2,param_2);
      if (iVar1 == 0) {
        return *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar3 * 8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  return 0;
}




uint * FUN_10065b788(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  code *local_50;
  uint *puStack_48;
  uint *local_40;
  undefined4 local_38;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x1a160));
  uVar1 = *(uint *)(param_1 + 0x1a150);
  if (uVar1 == 0xffffffff) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = (uint *)(param_1 + 0x150 + (ulong)uVar1 * 0x68);
    if (uVar1 == *(uint *)(param_1 + 0x1a154)) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(uint *)(param_1 + 0x1a150) = uVar3;
    lVar2 = param_1 + 0x150 + (ulong)uVar1 * 0x68;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 8) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    *(undefined8 *)(lVar2 + 0x5a) = 0;
    *(undefined8 *)(lVar2 + 0x52) = 0;
    lVar2 = DAT_101dbd520;
    uVar1 = *(int *)(DAT_101dbd520 + 0x10) + 1;
    *(uint *)(DAT_101dbd520 + 0x10) = uVar1;
    *puVar4 = uVar1;
    local_50 = FUN_10065bb38;
    local_38 = 0;
    puStack_48 = puVar4;
    local_40 = puVar4;
    FUN_10065b354(lVar2,&local_50);
    *(int *)(param_1 + 0x1a158) = *(int *)(param_1 + 0x1a158) + 1;
  }
  _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x1a160));
  *(long *)(puVar4 + 0x14) = param_1;
  *(char *)(puVar4 + 0x18) = (char)*(undefined4 *)(param_1 + 0x1a1a0);
  return puVar4;
}




void FUN_10065b890(long param_1,undefined8 param_2,undefined8 param_3)

{
  void *local_38 [2];
  char local_21;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  FUN_10001549c(local_38,param_3);
  std::string::operator=((string *)(param_1 + 0x10),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_10065b8ec(long param_1,undefined8 param_2,uint param_3)

{
  *(undefined8 *)(param_1 + (ulong)param_3 * 8 + 0x28) = param_2;
  return;
}




void FUN_10065b8f8(long param_1,long param_2)

{
  if (*(char *)(param_1 + 0x1a1a4) == '\x01') {
    *(undefined1 *)(param_2 + 0x61) = 1;
    FUN_10065bb90(param_2);
    FUN_1004e57e0(param_1,FUN_10065c4d0,param_2);
    return;
  }
  if (*(char *)(param_1 + 0x1a1a4) == '\0') {
    FUN_10065b968(param_1,param_2);
    return;
  }
  return;
}




void FUN_10065b968(undefined8 param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  
  *(undefined1 *)(param_2 + 0x61) = 0;
  FUN_10065bb90(param_2);
  piVar1 = (int *)(param_2 + 0x5c);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar5 = *(long **)(param_2 + 8);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  }
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 == 0) {
    FUN_10065bcac(*(undefined8 *)(param_2 + 0x50),param_2);
    return;
  }
  return;
}




void FUN_10065b9e4(long param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x1a1a4) = 0;
  iVar1 = FUN_1004e5330();
  if (iVar1 != 0) {
    FUN_1004e5a70(param_1);
  }
  iVar1 = FUN_1004e5330(param_1);
  if (iVar1 != 0) {
    FUN_1004e5208(param_1);
    return;
  }
  return;
}




void FUN_10065ba38(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(*(long *)(param_1 + 0x18) + 0x1a1a0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_10065b9e4();
  return;
}




void FUN_10065ba5c(undefined8 param_1,uint param_2)

{
  operator_new__((ulong)param_2);
  return;
}




undefined8 FUN_10065ba64(undefined8 param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    operator_delete__(param_2);
  }
  return 0;
}




undefined8 FUN_10065ba68(undefined8 param_1,void *param_2)

{
  operator_delete__(param_2);
  return 0;
}




undefined8 FUN_10065ba84(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  uVar2 = FUN_100658c88(param_2,1);
  if ((int)uVar2 == -1) {
    local_38 = 0;
  }
  else {
    local_38 = 0;
    uVar1 = FUN_100658cc4(uVar2,&local_38);
    FUN_100658c9c(uVar2);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = uVar1;
    }
  }
  return local_38;
}




undefined8 FUN_10065baf4(undefined8 param_1,undefined8 param_2)

{
  FUN_100658ce8(param_2);
  return 1;
}




pthread_key_t * FUN_10065bb10(pthread_key_t *param_1)

{
  _pthread_key_delete(*param_1);
  return param_1;
}




void FUN_10065bb38(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0x5c);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 == 0) {
    FUN_10065bcac(*(undefined8 *)(param_1 + 0x50));
    return;
  }
  return;
}




undefined8 * FUN_10065bb60(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x27)) {
    return (undefined8 *)(param_1 + 0x10);
  }
  return *(undefined8 **)(param_1 + 0x10);
}




undefined8 FUN_10065bb7c(long param_1,uint param_2)

{
  return *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x28);
}




undefined1 FUN_10065bb88(long param_1)

{
  return *(undefined1 *)(param_1 + 0x61);
}




void FUN_10065bb90(long param_1)

{
  char cVar1;
  long *plVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(param_1 + 0x10);
  if ((-1 < *(char *)(param_1 + 0x27)) || (pcVar3 = *(char **)pcVar3, pcVar3 != (char *)0x0)) {
    cVar1 = *pcVar3;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
  }
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x10))();
    plVar2 = *(long **)(param_1 + 8);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010065bbf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
      return;
    }
  }
  return;
}




void FUN_10065bc08(long param_1)

{
  char cVar1;
  long *plVar2;
  char *pcVar3;
  
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_10065b3d4(DAT_101dbd520);
  }
  pcVar3 = (char *)(param_1 + 0x10);
  if ((-1 < *(char *)(param_1 + 0x27)) || (pcVar3 = *(char **)pcVar3, pcVar3 != (char *)0x0)) {
    cVar1 = *pcVar3;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
  }
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010065bc84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}




void FUN_10065bc94(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x5c);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}




void FUN_10065bcac(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [8];
  
  FUN_1004e4780(auStack_28);
  iVar1 = FUN_1004e47a4(auStack_28,param_1 + 0x140);
  if (iVar1 == 0) {
    uVar2 = FUN_1004e683c();
    FUN_1004e57e0(uVar2,FUN_10065c5b4,param_2);
  }
  else {
    FUN_10065c4dc(param_1,param_2);
  }
  return;
}




uint FUN_10065bd10(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = (ulong)(byte)DAT_101dbd5f0;
  lVar2 = uVar5 * 0x60;
  puVar4 = (undefined8 *)(&DAT_101dbd530 + lVar2);
  if ((byte)DAT_101dbd5f0 == DAT_101dbd5f0._1_1_) {
    DAT_101dbd5f0._0_1_ = 0xff;
  }
  else {
    DAT_101dbd5f0._0_1_ = *(byte *)puVar4;
  }
  FUN_1010b8e34(puVar4);
  lVar1 = uVar5 * 0x60;
  (&DAT_101dbd584)[lVar1] = 0;
  *(undefined8 *)(&DAT_101dbd558 + lVar1) = 0;
  *(undefined8 *)(&DAT_101dbd550 + lVar1) = 0;
  *(undefined8 *)(&DAT_101dbd568 + lVar1) = 0;
  *(undefined8 *)(&DAT_101dbd560 + lVar1) = 0;
  *(undefined8 *)(&DAT_101dbd578 + lVar1) = 0;
  *(undefined8 *)(&DAT_101dbd570 + lVar1) = 0;
  DAT_101dbd5f4 = DAT_101dbd5f4 + 1;
  uVar6 = param_1[1];
  *(undefined8 *)(&DAT_101dbd550 + lVar1) = *param_1;
  *(undefined8 *)(&DAT_101dbd558 + lVar1) = uVar6;
  puVar3 = (undefined8 *)FUN_1010b8e4c();
  uVar8 = *puVar3;
  uVar7 = puVar3[3];
  uVar6 = puVar3[2];
  *(undefined8 *)(&DAT_101dbd538 + lVar2) = puVar3[1];
  *puVar4 = uVar8;
  *(undefined8 *)(lVar2 + 0x101dbd548) = uVar7;
  *(undefined8 *)(&DAT_101dbd540 + lVar2) = uVar6;
  *(undefined8 **)(&DAT_101dbd560 + lVar1) = puVar3 + 4;
  *(ulong *)(&DAT_101dbd568 + lVar1) = (ulong)*(uint *)(&DAT_101dbd534 + lVar1);
  *(undefined4 *)(&DAT_101dbd580 + lVar1) = param_2;
  return ((int)puVar4 + 0xfe242ad0U >> 5) * 0xaaab & 0xff;
}




void FUN_10065bdd8(undefined8 *param_1,int param_2)

{
  if (param_2 == 3) {
    FUN_100658ce8(*param_1);
    return;
  }
  if (param_2 != 2) {
    if (param_2 == 1) {
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete__((void *)*param_1);
      }
      *param_1 = 0;
    }
    return;
  }
  FUN_1004d29b8(*param_1,*(undefined4 *)(param_1 + 1));
  return;
}




void FUN_10065be40(long param_1)

{
  char cVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  
  cVar1 = FUN_1010b8e50();
  if (cVar1 != '\0') {
    FUN_1010b8e5c(param_1,&uStack_24,&local_28);
    FUN_1010b8c4c(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),uStack_24,local_28
                 );
  }
  return;
}




void * FUN_10065be90(long param_1)

{
  void *pvVar1;
  uint local_24;
  
  local_24 = *(uint *)(param_1 + 8);
  pvVar1 = operator_new__((ulong)local_24);
  FUN_10065c810(pvVar1,&local_24,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  return pvVar1;
}




void FUN_10065bed8(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1 = param_1 & 0xff;
  FUN_10065be40(&DAT_101dbd530 + param_1 * 0x60);
  if (((&DAT_101dbd53c)[param_1 * 0x60] & 1) == 0) {
    lVar1 = param_1 * 0x60;
    *(undefined8 *)(&DAT_101dbd578 + lVar1) = *(undefined8 *)(&DAT_101dbd568 + lVar1);
    *(undefined8 *)(&DAT_101dbd570 + lVar1) = *(undefined8 *)(&DAT_101dbd560 + lVar1);
    if ((&DAT_101dbd584)[lVar1] == '\0') {
      return;
    }
  }
  else {
    uVar2 = FUN_10065be90(&DAT_101dbd530 + param_1 * 0x60);
    lVar1 = param_1 * 0x60;
    *(undefined8 *)(&DAT_101dbd570 + lVar1) = uVar2;
    *(ulong *)(&DAT_101dbd578 + lVar1) = (ulong)*(uint *)(&DAT_101dbd538 + lVar1);
    (&DAT_101dbd584)[lVar1] = 1;
  }
  lVar1 = param_1 * 0x60;
  FUN_10065bdd8(&DAT_101dbd550 + lVar1,*(undefined4 *)(&DAT_101dbd580 + lVar1));
  *(undefined8 *)(&DAT_101dbd558 + lVar1) = 0;
  *(undefined8 *)(&DAT_101dbd550 + lVar1) = 0;
  *(undefined8 *)(&DAT_101dbd568 + lVar1) = 0;
  *(undefined8 *)(&DAT_101dbd560 + lVar1) = 0;
  return;
}




void FUN_10065bf74(ulong param_1)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  
  param_1 = param_1 & 0xff;
  uVar1 = (uint)(param_1 * 0x60);
  if ((&DAT_101dbd584)[param_1 * 0x60] != '\0') {
    pvVar2 = *(void **)(&DAT_101dbd570 + param_1 * 0x60);
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(undefined8 *)(&DAT_101dbd570 + param_1 * 0x60) = 0;
  }
  if (*(long *)(&DAT_101dbd550 + param_1 * 0x60) != 0) {
    FUN_10065bdd8(&DAT_101dbd550 + param_1 * 0x60,*(undefined4 *)(&DAT_101dbd580 + param_1 * 0x60));
  }
  if ((char)DAT_101dbd5f0 == -1) {
    DAT_101dbd5f0._0_1_ = (char)(uVar1 >> 5) * -0x55;
    DAT_101dbd5f0._1_1_ = (char)DAT_101dbd5f0;
  }
  else {
    uVar3 = (ulong)DAT_101dbd5f0._1_1_;
    DAT_101dbd5f0._1_1_ = (char)(uVar1 >> 5) * -0x55;
    (&DAT_101dbd530)[uVar3 * 0x60] = DAT_101dbd5f0._1_1_;
  }
  DAT_101dbd5f4 = DAT_101dbd5f4 + -1;
  return;
}




void FUN_10065c048(undefined8 *param_1,string *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  string *this;
  undefined8 *local_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = FUN_1004e6cb8(0x30);
  puVar2 = (undefined8 *)FUN_1004e6bb8();
  this = (string *)(puVar2 + 2);
  *(undefined8 *)this = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *puVar2 = &PTR_thunk_FUN_10065c75c_1014a8438;
  std::string::operator=(this,param_2);
  local_58 = (undefined8 *)FUN_1004e68dc();
  *local_58 = this;
  local_58[1] = thunk_FUN_10065c258;
  uVar3 = FUN_1004e76ac(&local_58,0x1e3e5dd1);
  uVar4 = 0;
  if (param_3 != 1) {
    uVar4 = FUN_1004e6858(uVar3,0);
  }
  uVar3 = FUN_1004e76a0(uVar3,uVar4);
  FUN_1004e7744(uVar3,uVar1);
  uVar3 = FUN_1004e777c();
  local_58 = (undefined8 *)FUN_1004e68dc();
  *local_58 = this;
  local_58[1] = thunk_FUN_10065c31c;
  uVar4 = FUN_1004e76ac(&local_58,0x9fe3f120);
  if (param_3 == 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1004e683c();
  }
  uVar4 = FUN_1004e76a0(uVar4,uVar5);
  uVar4 = FUN_1004e76b8(uVar4,uVar3);
  FUN_1004e7744(uVar4,uVar1);
  uVar5 = FUN_1004e777c();
  uVar4 = DAT_101d91740;
  if (param_4 == 1) {
    local_58 = (undefined8 *)FUN_1004e68dc();
    *local_58 = this;
    local_58[1] = FUN_10065c794;
    uVar4 = FUN_1004e76ac(&local_58,0x804b9f1a);
    uVar1 = FUN_1004e7744(uVar4,uVar1);
    FUN_1004e76b8(uVar1,uVar5);
    uVar4 = FUN_1004e777c();
  }
  *param_1 = uVar3;
  param_1[1] = uVar5;
  param_1[2] = uVar4;
  return;
}




void FUN_10065c1dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_38;
  
  uVar1 = FUN_100658c88(param_2,1);
  if ((int)uVar1 == -1) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_38 = 0;
    uVar2 = FUN_100658cc4(uVar1,&local_38);
    FUN_100658c9c(uVar1);
    *param_1 = local_38;
    param_1[1] = uVar2 & 0xffffffff;
  }
  return;
}




void FUN_10065c248(long *param_1)

{
  if (*param_1 != 0) {
    FUN_100658ce8();
    return;
  }
  return;
}




void FUN_10065c258(long *param_1)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_58;
  long local_50;
  undefined8 **local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1 = (long *)*param_1;
  }
  FUN_1006581d8(param_1,&local_48);
  pppuVar1 = (undefined8 ***)local_48;
  if (-1 < local_38) {
    pppuVar1 = &local_48;
  }
  FUN_10065c1dc(&local_58,pppuVar1);
  uVar2 = FUN_1004e6948();
  if (local_50 == 0) {
    FUN_1004e69fc(uVar2);
  }
  else {
    uVar3 = FUN_1004e6cb8(0x20);
    puVar4 = (undefined8 *)FUN_1004e6bb8();
    puVar4[2] = local_58;
    puVar4[3] = local_50;
    *puVar4 = &PTR_thunk_FUN_1004e6bc8_1014a17b8;
    FUN_1004e69d4(uVar2,uVar3,0x9423106f);
  }
  if (local_38 < 0) {
    operator_delete(local_48);
  }
  return;
}




void FUN_10065c31c(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar2 = FUN_1004e6948();
  lVar3 = FUN_1004e697c(uVar2,0x9423106f);
  puVar5 = (undefined8 *)0x0;
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(lVar3 + 0x10);
  }
  local_30 = *puVar5;
  uStack_28 = puVar5[1];
  uVar1 = FUN_10065bd10(&local_30,3);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  FUN_10065bed8(uVar1);
  uVar4 = FUN_1004e6cb8(0x20);
  puVar5 = (undefined8 *)FUN_1004e6bb8();
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = &PTR_thunk_FUN_1004e6bc8_1014a17b8;
  lVar3 = (ulong)*(byte *)(param_1 + 0x18) * 0x60;
  uVar2 = *(undefined8 *)(&DAT_101dbd578 + lVar3);
  puVar5[2] = *(undefined8 *)(&DAT_101dbd570 + lVar3);
  puVar5[3] = uVar2;
  uVar2 = FUN_1004e6948();
  FUN_1004e69d4(uVar2,uVar4,0x815f1c7b);
  return;
}




long FUN_10065c3c8(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  thunk_FUN_1004e4dcc();
  lVar3 = -0x3ff;
  lVar4 = 0x150;
  do {
    *(int *)(param_1 + lVar4) = (int)lVar3 + 0x400;
    lVar4 = lVar4 + 0x68;
    bVar1 = lVar3 != -1;
    lVar3 = lVar3 + 1;
  } while (bVar1);
  *(undefined8 *)(param_1 + 0x1a150) = 0x3ff00000000;
  *(undefined4 *)(param_1 + 0x1a158) = 0;
  FUN_1004e4464(param_1 + 0x1a160,0);
  *(undefined1 *)(param_1 + 0x1a1a4) = 0;
  FUN_1004e4780(param_1 + 0x140);
  DAT_101dbd520 = operator_new(0x18);
  *DAT_101dbd520 = 0;
  DAT_101dbd520[1] = 0;
  *(undefined4 *)(DAT_101dbd520 + 2) = 0;
  iVar2 = FUN_1004e4bc0();
  if (iVar2 != 0) {
    FUN_1004e4e60(param_1,0,"Nuo::DataMgr::Scheduler::JobQueue");
  }
  return param_1;
}




void FUN_10065c478(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x1a1a0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_10065b9e4(param_1);
  FUN_10065b318();
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x1a160));
  thunk_FUN_1004e4e84(param_1);
  return;
}




void FUN_10065c4d0(long param_1)

{
  FUN_10065c5c0(*(undefined8 *)(param_1 + 0x50),param_1);
  return;
}




int FUN_10065c4dc(long param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  
  FUN_10065bc08(param_2);
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x1a160));
  if (*(char *)((long)param_2 + 0x27) < '\0') {
    operator_delete(*(void **)(param_2 + 4));
  }
  if (*param_2 != 0) {
    FUN_10065b278(DAT_101dbd520);
  }
  lVar1 = param_1 + 0x150;
  if (*(int *)(param_1 + 0x1a150) == -1) {
    iVar3 = (int)((ulong)((long)param_2 - lVar1) >> 3) * -0x3b13b13b;
    *(int *)(param_1 + 0x1a150) = iVar3;
    *(int *)(param_1 + 0x1a154) = iVar3;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x1a154);
    iVar3 = (int)((ulong)((long)param_2 - lVar1) >> 3) * -0x3b13b13b;
    *(int *)(param_1 + 0x1a154) = iVar3;
    *(int *)(lVar1 + (ulong)uVar2 * 0x68) = iVar3;
  }
  *(int *)(param_1 + 0x1a158) = *(int *)(param_1 + 0x1a158) + -1;
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x1a160));
  return iVar3;
}




void FUN_10065c5b4(long param_1)

{
  FUN_10065c4dc(*(undefined8 *)(param_1 + 0x50),param_1);
  return;
}




void FUN_10065c5c0(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  
  if ((uint)*(byte *)(param_2 + 0x60) == (*(uint *)(param_1 + 0x1a1a0) & 0xff)) {
    piVar1 = (int *)(param_2 + 0x5c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5 = *(long **)(param_2 + 8);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
    }
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      FUN_10065bcac(*(undefined8 *)(param_2 + 0x50),param_2);
      return;
    }
  }
  return;
}




void FUN_10065c64c(uint *param_1,uint param_2)

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




void FUN_10065c6c8(uint *param_1,uint param_2)

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




void thunk_FUN_10065c75c(void)

{
  FUN_10065c75c();
  return;
}




void FUN_10065c748(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10065c75c();
  operator_delete(pvVar1);
  return;
}




void FUN_10065c75c(long param_1)

{
  if (*(char *)(param_1 + 0x27) < '\0') {
    operator_delete(*(void **)(param_1 + 0x10));
  }
  FUN_1004e6bc8(param_1);
  return;
}




void thunk_FUN_10065c258(long *param_1)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppuStack_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1 = (long *)*param_1;
  }
  FUN_1006581d8(param_1,&ppuStack_48);
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if (-1 < lStack_38) {
    pppuVar1 = &ppuStack_48;
  }
  FUN_10065c1dc(&uStack_58,pppuVar1);
  uVar2 = FUN_1004e6948();
  if (lStack_50 == 0) {
    FUN_1004e69fc(uVar2);
  }
  else {
    uVar3 = FUN_1004e6cb8(0x20);
    puVar4 = (undefined8 *)FUN_1004e6bb8();
    puVar4[2] = uStack_58;
    puVar4[3] = lStack_50;
    *puVar4 = &PTR_thunk_FUN_1004e6bc8_1014a17b8;
    FUN_1004e69d4(uVar2,uVar3,0x9423106f);
  }
  if (lStack_38 < 0) {
    operator_delete(ppuStack_48);
  }
  return;
}




void thunk_FUN_10065c31c(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = FUN_1004e6948();
  lVar3 = FUN_1004e697c(uVar2,0x9423106f);
  puVar5 = (undefined8 *)0x0;
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(lVar3 + 0x10);
  }
  uStack_30 = *puVar5;
  uStack_28 = puVar5[1];
  uVar1 = FUN_10065bd10(&uStack_30,3);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  FUN_10065bed8(uVar1);
  uVar4 = FUN_1004e6cb8(0x20);
  puVar5 = (undefined8 *)FUN_1004e6bb8();
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = &PTR_thunk_FUN_1004e6bc8_1014a17b8;
  lVar3 = (ulong)*(byte *)(param_1 + 0x18) * 0x60;
  uVar2 = *(undefined8 *)(&DAT_101dbd578 + lVar3);
  puVar5[2] = *(undefined8 *)(&DAT_101dbd570 + lVar3);
  puVar5[3] = uVar2;
  uVar2 = FUN_1004e6948();
  FUN_1004e69d4(uVar2,uVar4,0x815f1c7b);
  return;
}




void FUN_10065c794(long param_1)

{
  FUN_10065bf74(*(undefined4 *)(param_1 + 0x18));
  return;
}




void FUN_10065c79c(void)

{
  pthread_key_t local_18;
  
  local_18 = 0;
  _pthread_key_create(&local_18,(void *)0x0);
  DAT_101dbd528 = local_18;
  ___cxa_atexit(FUN_10065bb10,&DAT_101dbd528,0x100000000);
  DAT_101ea5988 = 0xffffffff;
  DAT_101dbd530 = 1;
  DAT_101dbd5f0 = 0x100;
  DAT_101dbd5f4 = 0;
  return;
}




bool FUN_10065c810(undefined8 param_1,uint *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  ulong local_28;
  
  local_28 = (ulong)*param_2;
  iVar1 = FUN_10065f22c(param_1,&local_28,param_3,param_4);
  *param_2 = (uint)local_28;
  return iVar1 == 0;
}




ulong FUN_10065c858(ulong param_1,byte *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  bool bVar18;
  ulong uVar19;
  int iVar20;
  byte *pbVar21;
  
  uVar19 = param_1 >> 0x10 & 0xffff;
  param_1 = param_1 & 0xffff;
  if (param_3 == 1) {
    param_1 = param_1 + *param_2;
    uVar16 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar16 = param_1;
    }
    uVar19 = uVar16 + uVar19;
    uVar17 = uVar19 * 0x10000 - 0xfff10000;
    if (uVar19 < 0xfff1) {
      uVar17 = uVar19 * 0x10000;
    }
    return uVar17 | uVar16;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  uVar16 = param_1;
  if (param_3 < 0x10) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar19 = uVar16 + *param_2 + uVar19;
      uVar16 = uVar16 + *param_2;
      param_2 = param_2 + 1;
    }
    param_1 = uVar16 - 0xfff1;
    if (uVar16 < 0xfff1) {
      param_1 = uVar16;
    }
    uVar19 = uVar19 % 0xfff1;
  }
  else {
    if (param_3 >> 4 < 0x15b) {
LAB_10065ca58:
      do {
        param_3 = param_3 - 0x10;
        lVar1 = param_1 + *param_2;
        lVar2 = lVar1 + (ulong)param_2[1];
        lVar3 = lVar2 + (ulong)param_2[2];
        lVar4 = lVar3 + (ulong)param_2[3];
        lVar5 = lVar4 + (ulong)param_2[4];
        lVar6 = lVar5 + (ulong)param_2[5];
        lVar7 = lVar6 + (ulong)param_2[6];
        lVar8 = lVar7 + (ulong)param_2[7];
        lVar9 = lVar8 + (ulong)param_2[8];
        lVar10 = lVar9 + (ulong)param_2[9];
        lVar11 = lVar10 + (ulong)param_2[10];
        lVar12 = lVar11 + (ulong)param_2[0xb];
        lVar13 = lVar12 + (ulong)param_2[0xc];
        lVar14 = lVar13 + (ulong)param_2[0xd];
        lVar15 = lVar14 + (ulong)param_2[0xe];
        param_1 = lVar15 + (ulong)param_2[0xf];
        uVar19 = lVar1 + uVar19 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 +
                 lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + param_1;
        param_2 = param_2 + 0x10;
        if (param_3 < 0x10) goto joined_r0x00010065cb28;
      } while( true );
    }
    do {
      param_3 = param_3 - 0x15b0;
      iVar20 = -0x15b;
      pbVar21 = param_2;
      do {
        lVar1 = param_1 + *pbVar21;
        lVar2 = lVar1 + (ulong)pbVar21[1];
        lVar3 = lVar2 + (ulong)pbVar21[2];
        lVar4 = lVar3 + (ulong)pbVar21[3];
        lVar5 = lVar4 + (ulong)pbVar21[4];
        lVar6 = lVar5 + (ulong)pbVar21[5];
        lVar7 = lVar6 + (ulong)pbVar21[6];
        lVar8 = lVar7 + (ulong)pbVar21[7];
        lVar9 = lVar8 + (ulong)pbVar21[8];
        lVar10 = lVar9 + (ulong)pbVar21[9];
        lVar11 = lVar10 + (ulong)pbVar21[10];
        lVar12 = lVar11 + (ulong)pbVar21[0xb];
        lVar13 = lVar12 + (ulong)pbVar21[0xc];
        lVar14 = lVar13 + (ulong)pbVar21[0xd];
        lVar15 = lVar14 + (ulong)pbVar21[0xe];
        param_1 = lVar15 + (ulong)pbVar21[0xf];
        uVar19 = lVar1 + uVar19 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 +
                 lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + param_1;
        pbVar21 = pbVar21 + 0x10;
        bVar18 = iVar20 != -1;
        iVar20 = iVar20 + 1;
      } while (bVar18);
      param_2 = param_2 + 0x15b0;
      param_1 = param_1 % 0xfff1;
      uVar19 = uVar19 % 0xfff1;
    } while (0x15a < param_3 >> 4);
    if (param_3 != 0) {
      if (0xf < param_3) goto LAB_10065ca58;
      do {
        param_1 = param_1 + *param_2;
        uVar19 = param_1 + uVar19;
        param_3 = param_3 - 1;
        param_2 = param_2 + 1;
joined_r0x00010065cb28:
      } while (param_3 != 0);
      param_1 = param_1 % 0xfff1;
      uVar19 = uVar19 % 0xfff1;
    }
  }
  return param_1 | uVar19 << 0x10;
}




uint FUN_10065cb84(uint param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (param_2 != (uint *)0x0) {
    param_1 = ~param_1;
    puVar3 = param_2;
    for (; (param_3 != 0 && (((ulong)param_2 & 3) != 0)); param_2 = (uint *)((long)param_2 + 1)) {
      param_1 = *(uint *)(&DAT_10117dba0 + (ulong)(param_1 & 0xff ^ (uint)(byte)*puVar3) * 4) ^
                param_1 >> 8;
      param_3 = param_3 - 1;
      puVar3 = (uint *)((long)puVar3 + 1);
    }
    for (; 0x1f < param_3; param_3 = param_3 - 0x20) {
      param_1 = *puVar3 ^ param_1;
      uVar1 = *(uint *)(&DAT_10117e3a0 + (ulong)(param_1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_10117e7a0 + (ulong)(param_1 & 0xff) * 4) ^
              *(uint *)(&DAT_10117dfa0 + (ulong)(param_1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_10117dba0 + (ulong)(param_1 >> 0x18) * 4) ^ puVar3[1];
      uVar1 = *(uint *)(&DAT_10117e3a0 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_10117e7a0 + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_10117dfa0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_10117dba0 + (ulong)(uVar1 >> 0x18) * 4) ^ puVar3[2];
      uVar1 = *(uint *)(&DAT_10117e3a0 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_10117e7a0 + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_10117dfa0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_10117dba0 + (ulong)(uVar1 >> 0x18) * 4) ^ puVar3[3];
      uVar1 = *(uint *)(&DAT_10117e3a0 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_10117e7a0 + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_10117dfa0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_10117dba0 + (ulong)(uVar1 >> 0x18) * 4) ^ puVar3[4];
      uVar1 = *(uint *)(&DAT_10117e3a0 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_10117e7a0 + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_10117dfa0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_10117dba0 + (ulong)(uVar1 >> 0x18) * 4) ^ puVar3[5];
      puVar2 = puVar3 + 7;
      uVar1 = *(uint *)(&DAT_10117e3a0 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_10117e7a0 + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_10117dfa0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_10117dba0 + (ulong)(uVar1 >> 0x18) * 4) ^ puVar3[6];
      puVar3 = puVar3 + 8;
      uVar1 = *(uint *)(&DAT_10117e3a0 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_10117e7a0 + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_10117dfa0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_10117dba0 + (ulong)(uVar1 >> 0x18) * 4) ^ *puVar2;
      param_1 = *(uint *)(&DAT_10117e3a0 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_10117e7a0 + (ulong)(uVar1 & 0xff) * 4) ^
                *(uint *)(&DAT_10117dfa0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_10117dba0 + (ulong)(uVar1 >> 0x18) * 4);
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      param_1 = *puVar3 ^ param_1;
      param_1 = *(uint *)(&DAT_10117e3a0 + (ulong)(param_1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_10117e7a0 + (ulong)(param_1 & 0xff) * 4) ^
                *(uint *)(&DAT_10117dfa0 + (ulong)(param_1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_10117dba0 + (ulong)(param_1 >> 0x18) * 4);
      puVar3 = puVar3 + 1;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      param_1 = *(uint *)(&DAT_10117dba0 + (ulong)(param_1 & 0xff ^ (uint)(byte)*puVar3) * 4) ^
                param_1 >> 8;
      puVar3 = (uint *)((long)puVar3 + 1);
    }
    return ~param_1;
  }
  return 0;
}




void FUN_10065ce0c(long *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  ushort uVar12;
  long lVar13;
  char *pcVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  ulong uVar21;
  undefined4 uVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 *puVar27;
  long lVar28;
  undefined1 *puVar29;
  int iVar30;
  ulong uVar31;
  long lVar32;
  
  puVar15 = (undefined4 *)param_1[7];
  pbVar16 = (byte *)(*param_1 + -1);
  pbVar1 = pbVar16 + ((int)param_1[1] - 5);
  puVar19 = (undefined1 *)(param_1[3] + -1);
  lVar13 = param_1[4];
  iVar3 = puVar15[0xd];
  uVar5 = puVar15[0xe];
  uVar9 = puVar15[0xf];
  lVar18 = *(long *)(puVar15 + 0x10);
  uVar21 = *(ulong *)(puVar15 + 0x12);
  uVar24 = (ulong)(uint)puVar15[0x14];
  uVar4 = puVar15[0x1c];
  uVar6 = puVar15[0x1d];
  lVar7 = *(long *)(puVar15 + 0x18);
  lVar8 = *(long *)(puVar15 + 0x1a);
  puVar20 = puVar19;
LAB_10065cea0:
  uVar23 = (uint)uVar24;
  if (uVar23 < 0xf) {
    uVar21 = ((ulong)pbVar16[1] << (uVar24 & 0x3f)) + uVar21 +
             ((ulong)pbVar16[2] << ((ulong)(uVar23 + 8) & 0x3f));
    uVar24 = (ulong)(uVar23 + 0x10);
    pbVar16 = pbVar16 + 2;
  }
  pbVar17 = (byte *)(lVar7 + (uVar21 & (uint)~(-1 << (ulong)(uVar4 & 0x1f))) * 4);
  bVar10 = *pbVar17;
  bVar11 = pbVar17[1];
  uVar12 = *(ushort *)(pbVar17 + 2);
  while( true ) {
    uVar21 = uVar21 >> ((ulong)bVar11 & 0x3f);
    uVar23 = (int)uVar24 - (uint)bVar11;
    uVar24 = (ulong)uVar23;
    uVar26 = (uint)bVar10;
    if (uVar26 == 0) break;
    if ((bVar10 >> 4 & 1) != 0) {
      uVar25 = (uint)uVar12;
      uVar26 = uVar26 & 0xf;
      if ((bVar10 & 0xf) != 0) {
        if (uVar23 < uVar26) {
          pbVar16 = pbVar16 + 1;
          uVar21 = ((ulong)*pbVar16 << (uVar24 & 0x3f)) + uVar21;
          uVar23 = uVar23 + 8;
        }
        uVar25 = ((uint)uVar21 & (-1 << (ulong)uVar26 ^ 0xffffffffU)) + uVar25;
        uVar21 = uVar21 >> uVar26;
        uVar24 = (ulong)(uVar23 - uVar26);
      }
      uVar23 = (uint)uVar24;
      pbVar17 = pbVar16;
      if (uVar23 < 0xf) {
        pbVar17 = pbVar16 + 2;
        uVar21 = ((ulong)pbVar16[1] << (uVar24 & 0x3f)) + uVar21 +
                 ((ulong)*pbVar17 << ((ulong)(uVar23 + 8) & 0x3f));
        uVar24 = (ulong)(uVar23 + 0x10);
      }
      pbVar16 = (byte *)(lVar8 + (uVar21 & (uint)~(-1 << (ulong)(uVar6 & 0x1f))) * 4);
      bVar10 = *pbVar16;
      bVar11 = pbVar16[1];
      uVar12 = *(ushort *)(pbVar16 + 2);
      goto LAB_10065cfa4;
    }
    if ((bVar10 >> 6 & 1) != 0) {
      if ((bVar10 >> 5 & 1) == 0) {
        pcVar14 = "invalid literal/length code";
        pbVar17 = pbVar16;
        goto LAB_10065d25c;
      }
      uVar22 = 0xb;
      goto LAB_10065d264;
    }
    pbVar17 = (byte *)(lVar7 + ((uVar21 & (uint)~(-1 << (ulong)(uVar26 & 0x1f))) + (ulong)uVar12) *
                               4);
    bVar10 = *pbVar17;
    bVar11 = pbVar17[1];
    uVar12 = *(ushort *)(pbVar17 + 2);
  }
  puVar27 = puVar20 + 1;
  *puVar27 = (char)uVar12;
  goto LAB_10065cf1c;
LAB_10065cfa4:
  uVar21 = uVar21 >> ((ulong)bVar11 & 0x3f);
  uVar23 = (int)uVar24 - (uint)bVar11;
  uVar24 = (ulong)uVar23;
  if ((bVar10 >> 4 & 1) != 0) goto LAB_10065cfd8;
  pcVar14 = "invalid distance code";
  if ((bVar10 >> 6 & 1) != 0) goto LAB_10065d25c;
  pbVar16 = (byte *)(lVar8 + ((uVar21 & (uint)~(-1 << (ulong)(bVar10 & 0x1f))) + (ulong)uVar12) * 4)
  ;
  bVar10 = *pbVar16;
  bVar11 = pbVar16[1];
  uVar12 = *(ushort *)(pbVar16 + 2);
  goto LAB_10065cfa4;
LAB_10065cfd8:
  uVar2 = bVar10 & 0xf;
  pbVar16 = pbVar17;
  uVar26 = uVar23;
  if (uVar23 < uVar2) {
    pbVar16 = pbVar17 + 1;
    uVar21 = ((ulong)*pbVar16 << (uVar24 & 0x3f)) + uVar21;
    uVar26 = uVar23 + 8;
    if (uVar26 < uVar2) {
      uVar21 = ((ulong)pbVar17[2] << ((ulong)uVar26 & 0x3f)) + uVar21;
      pbVar16 = pbVar17 + 2;
      uVar26 = uVar23 + 0x10;
    }
  }
  uVar23 = ((uint)uVar21 & (-1 << uVar2 ^ 0xffffffffU)) + (uint)uVar12;
  uVar21 = uVar21 >> uVar2;
  uVar24 = (ulong)(uVar26 - uVar2);
  uVar2 = (int)puVar20 - ((int)puVar19 - (param_2 - (int)lVar13));
  uVar26 = uVar23 - uVar2;
  if (uVar23 < uVar2 || uVar26 == 0) {
    iVar30 = 0;
    lVar32 = 0;
    do {
      lVar28 = lVar32;
      lVar32 = lVar28 - (ulong)uVar23;
      puVar20[lVar28 + 1] = puVar20[lVar32 + 1];
      puVar20[lVar28 + 2] = puVar20[lVar32 + 2];
      puVar20[lVar28 + 3] = puVar20[lVar32 + 3];
      lVar32 = lVar28 + 3;
      iVar30 = iVar30 + -3;
    } while (2 < uVar25 + iVar30);
    puVar27 = puVar20 + lVar32;
    if (uVar25 != (uint)lVar32) {
      puVar27 = puVar27 + 1;
      *puVar27 = puVar20[(lVar32 - (ulong)uVar23) + 1];
      if (uVar25 - 1 != (uint)lVar32) {
        puVar27 = puVar20 + lVar28 + 5;
        *puVar27 = puVar20[(lVar32 - (ulong)uVar23) + 2];
      }
    }
    goto LAB_10065cf1c;
  }
  if ((uVar5 < uVar26) &&
     (pcVar14 = "invalid distance too far back", pbVar17 = pbVar16, puVar15[0x6f8] != 0)) {
LAB_10065d25c:
    param_1[6] = (long)pcVar14;
    uVar22 = 0x1d;
    pbVar16 = pbVar17;
LAB_10065d264:
    *puVar15 = uVar22;
    puVar27 = puVar20;
LAB_10065d268:
    lVar18 = (long)pbVar16 - (uVar24 >> 3);
    uVar4 = (uint)uVar24 & 7;
    *param_1 = lVar18 + 1;
    param_1[3] = (long)(puVar27 + 1);
    *(int *)(param_1 + 1) = ((int)pbVar1 - (int)lVar18) + 5;
    *(int *)(param_1 + 4) = ((int)(puVar19 + ((int)lVar13 - 0x101)) - (int)puVar27) + 0x101;
    *(ulong *)(puVar15 + 0x12) = uVar21 & (uint)~(-1 << (ulong)uVar4);
    puVar15[0x14] = uVar4;
    return;
  }
  if (uVar9 == 0) {
    uVar31 = (ulong)(iVar3 - uVar26);
    uVar2 = uVar25 - uVar26;
    if (uVar25 < uVar26 || uVar2 == 0) goto LAB_10065d1ac;
    puVar27 = (undefined1 *)(lVar18 + uVar31);
    do {
      puVar20 = puVar20 + 1;
      *puVar20 = *puVar27;
      uVar26 = uVar26 - 1;
      puVar27 = puVar27 + 1;
    } while (uVar26 != 0);
LAB_10065d1a0:
    puVar29 = puVar20 + -(ulong)uVar23;
  }
  else {
    if (uVar9 < uVar26) {
      uVar31 = (ulong)((uVar9 + iVar3) - uVar26);
      uVar2 = uVar25 - (uVar26 - uVar9);
      if (uVar26 - uVar9 <= uVar25 && uVar2 != 0) {
        puVar27 = (undefined1 *)(lVar18 + uVar31);
        do {
          puVar20 = puVar20 + 1;
          *puVar20 = *puVar27;
          uVar26 = uVar26 - 1;
          puVar27 = puVar27 + 1;
        } while (uVar9 != uVar26);
        puVar29 = (undefined1 *)(lVar18 + -1);
        if (uVar9 < uVar2) {
          lVar32 = 0;
          do {
            puVar20[lVar32 + 1] = *(undefined1 *)(lVar18 + lVar32);
            lVar32 = lVar32 + 1;
          } while (uVar9 != (uint)lVar32);
          puVar29 = puVar20 + (lVar32 - (ulong)uVar23);
          puVar20 = puVar20 + lVar32;
          uVar2 = uVar2 - uVar9;
        }
        goto joined_r0x00010065d1b4;
      }
    }
    else {
      uVar31 = (ulong)(uVar9 - uVar26);
      uVar2 = uVar25 - uVar26;
      if (uVar26 <= uVar25 && uVar2 != 0) {
        puVar27 = (undefined1 *)(lVar18 + uVar31);
        do {
          puVar20 = puVar20 + 1;
          *puVar20 = *puVar27;
          uVar26 = uVar26 - 1;
          puVar27 = puVar27 + 1;
        } while (uVar26 != 0);
        goto LAB_10065d1a0;
      }
    }
LAB_10065d1ac:
    puVar29 = (undefined1 *)(lVar18 + -1) + uVar31;
    uVar2 = uVar25;
  }
joined_r0x00010065d1b4:
  for (; 2 < uVar2; uVar2 = uVar2 - 3) {
    puVar20[1] = puVar29[1];
    puVar20[2] = puVar29[2];
    puVar20 = puVar20 + 3;
    *puVar20 = puVar29[3];
    puVar29 = puVar29 + 3;
  }
  puVar27 = puVar20;
  if (uVar2 != 0) {
    puVar27 = puVar20 + 1;
    *puVar27 = puVar29[1];
    if (uVar2 != 1) {
      puVar27 = puVar20 + 2;
      *puVar27 = puVar29[2];
    }
  }
LAB_10065cf1c:
  if ((pbVar1 <= pbVar16) || (puVar20 = puVar27, puVar19 + ((int)lVar13 - 0x101) <= puVar27))
  goto LAB_10065d268;
  goto LAB_10065cea0;
}




undefined8 FUN_10065d2d4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((param_1 != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x38), puVar2 != (undefined8 *)0x0)) {
    puVar2[4] = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (*(uint *)(puVar2 + 1) != 0) {
      *(ulong *)(param_1 + 0x60) = (ulong)*(uint *)(puVar2 + 1) & 1;
    }
    *(undefined4 *)((long)puVar2 + 0x14) = 0x8000;
    puVar1 = puVar2 + 0xaa;
    puVar2[0x11] = puVar1;
    puVar2[0xc] = puVar1;
    puVar2[0xd] = puVar1;
    *puVar2 = 0;
    *(undefined4 *)((long)puVar2 + 0xc) = 0;
    puVar2[5] = 0;
    puVar2[9] = 0;
    *(undefined4 *)(puVar2 + 10) = 0;
    puVar2[0x37c] = 0xffffffff00000001;
    return 0;
  }
  return 0xfffffffe;
}




undefined8 FUN_10065d340(long param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  if ((param_1 != 0) && (lVar7 = *(long *)(param_1 + 0x38), lVar7 != 0)) {
    uVar5 = (uint)param_2;
    uVar2 = uVar5 & 0xf;
    if (0x2f < (int)uVar5) {
      uVar2 = uVar5;
    }
    bVar3 = (param_2 & 0x80000000) != 0;
    if (bVar3) {
      uVar2 = -uVar5;
    }
    iVar1 = 0;
    if (!bVar3) {
      iVar1 = ((uint)(param_2 >> 4) & 0xfffffff) + 1;
    }
    if ((uVar2 == 0) || ((uVar2 & 0xfffffff8) == 8)) {
      if ((*(long *)(lVar7 + 0x40) == 0) || (*(uint *)(lVar7 + 0x30) == uVar2)) {
        *(int *)(lVar7 + 8) = iVar1;
        *(uint *)(lVar7 + 0x30) = uVar2;
        lVar6 = lVar7;
      }
      else {
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50));
        *(undefined8 *)(lVar7 + 0x40) = 0;
        lVar6 = *(long *)(param_1 + 0x38);
        *(int *)(lVar7 + 8) = iVar1;
        *(uint *)(lVar7 + 0x30) = uVar2;
        if (lVar6 == 0) {
          return 0xfffffffe;
        }
      }
      *(undefined8 *)(lVar6 + 0x38) = 0;
      *(undefined4 *)(lVar6 + 0x34) = 0;
      uVar4 = FUN_10065d2d4(param_1);
      return uVar4;
    }
  }
  return 0xfffffffe;
}




undefined8 FUN_10065d3fc(long param_1,undefined8 param_2,char *param_3,int param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (param_3 == (char *)0x0) {
    uVar3 = 0xfffffffa;
  }
  else {
    uVar3 = 0xfffffffa;
    if ((*param_3 == '1') && (param_4 == 0x70)) {
      if (param_1 == 0) {
        uVar3 = 0xfffffffe;
      }
      else {
        *(undefined8 *)(param_1 + 0x30) = 0;
        pcVar2 = *(code **)(param_1 + 0x40);
        if (pcVar2 == (code *)0x0) {
          pcVar2 = FUN_10065f30c;
          *(code **)(param_1 + 0x40) = FUN_10065f30c;
          *(undefined8 *)(param_1 + 0x50) = 0;
        }
        if (*(long *)(param_1 + 0x48) == 0) {
          *(code **)(param_1 + 0x48) = FUN_10065f314;
        }
        lVar1 = (*pcVar2)(*(undefined8 *)(param_1 + 0x50),1,0x1bf0);
        if (lVar1 == 0) {
          uVar3 = 0xfffffffc;
        }
        else {
          *(long *)(param_1 + 0x38) = lVar1;
          *(undefined8 *)(lVar1 + 0x40) = 0;
          uVar3 = FUN_10065d340(param_1,param_2);
          if ((int)uVar3 != 0) {
            (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),lVar1);
            *(undefined8 *)(param_1 + 0x38) = 0;
          }
        }
      }
    }
  }
  return uVar3;
}




void FUN_10065d4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10065d3fc(param_1,0xf,param_2,param_3);
  return;
}




int FUN_10065d4e4(long *param_1,int param_2)

{
  ushort *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  char *pcVar21;
  undefined1 *puVar22;
  ulong uVar23;
  ulong uVar24;
  int iVar25;
  byte *pbVar26;
  ulong uVar27;
  undefined2 uVar28;
  uint uVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  byte *pbVar32;
  byte *pbVar33;
  uint uVar34;
  ulong uVar35;
  uint *puVar36;
  int local_84;
  uint local_74;
  undefined4 local_64;
  
  if ((((param_1 == (long *)0x0) || (puVar36 = (uint *)param_1[7], puVar36 == (uint *)0x0)) ||
      (puVar30 = (undefined1 *)param_1[3], puVar30 == (undefined1 *)0x0)) ||
     ((pbVar32 = (byte *)*param_1, pbVar32 == (byte *)0x0 && ((int)param_1[1] != 0)))) {
LAB_10065eaac:
    return -2;
  }
  uVar19 = *puVar36;
  if (uVar19 == 0xb) {
    uVar19 = 0xc;
    *puVar36 = 0xc;
  }
  uVar29 = *(uint *)(param_1 + 4);
  uVar7 = *(uint *)(param_1 + 1);
  uVar23 = (ulong)uVar7;
  uVar35 = *(ulong *)(puVar36 + 0x12);
  puVar2 = puVar36 + 0x154;
  puVar3 = puVar36 + 0x22;
  uVar17 = (ulong)puVar36[0x14];
  puVar4 = puVar36 + 0xc4;
  local_84 = 0;
  local_74 = uVar29;
  do {
    uVar16 = (uint)uVar17;
    uVar34 = (uint)uVar23;
    pbVar33 = pbVar32;
    iVar25 = 1;
    switch(uVar19) {
    case 0:
      uVar19 = puVar36[2];
      if (uVar19 == 0) {
        uVar19 = 0xc;
        goto LAB_10065ea28;
      }
      if (uVar16 < 0x10) {
        uVar15 = uVar17 & 0xffffffff;
        do {
          uVar17 = uVar15;
          if ((int)uVar23 == 0) goto LAB_10065ea94;
          pbVar33 = pbVar32 + 1;
          uVar23 = (ulong)((int)uVar23 - 1);
          uVar35 = ((ulong)*pbVar32 << (uVar15 & 0x3f)) + uVar35;
          uVar17 = uVar15 + 8;
          bVar11 = uVar15 < 8;
          pbVar32 = pbVar33;
          uVar15 = uVar17;
        } while (bVar11);
      }
      if (((uVar19 >> 1 & 1) == 0) || (uVar35 != 0x8b1f)) {
        puVar36[4] = 0;
        if (*(long *)(puVar36 + 10) != 0) {
          *(undefined4 *)(*(long *)(puVar36 + 10) + 0x48) = 0xffffffff;
        }
        if (((uVar19 & 1) == 0) ||
           (0x842108421084210 <
            (((ulong)(uint)((int)uVar35 << 8) & 0xff00) + (uVar35 >> 8)) * -0x1084210842108421)) {
          pcVar21 = "incorrect header check";
          break;
        }
        if ((uVar35 & 0xf) != 8) goto LAB_10065ea18;
        uVar16 = (uint)(uVar35 >> 4) & 0xf;
        uVar19 = uVar16 + 8;
        if (puVar36[0xc] == 0) {
          puVar36[0xc] = uVar19;
        }
        else if (puVar36[0xc] < uVar19) {
          uVar35 = uVar35 >> 4;
          uVar17 = (ulong)((int)uVar17 - 4);
          pcVar21 = "invalid window size";
          break;
        }
        puVar36[5] = 0x100 << (ulong)uVar16;
        lVar14 = FUN_10065c858(0,0,0);
        uVar17 = 0;
        *(long *)(puVar36 + 6) = lVar14;
        param_1[0xc] = lVar14;
        uVar19 = 0xb;
        if ((uVar35 & 0x2000) != 0) {
          uVar19 = 9;
        }
        *puVar36 = uVar19;
        uVar35 = 0;
      }
      else {
        uVar13 = FUN_10065cb84(0,0,0);
        *(undefined8 *)(puVar36 + 6) = uVar13;
        local_64 = CONCAT22(local_64._2_2_,0x8b1f);
        uVar13 = FUN_10065cb84(uVar13,&local_64,2);
        uVar35 = 0;
        uVar17 = 0;
        *(undefined8 *)(puVar36 + 6) = uVar13;
        *puVar36 = 1;
      }
      goto LAB_10065ea2c;
    case 1:
      if (uVar16 < 0x10) {
        uVar15 = uVar17 & 0xffffffff;
        do {
          uVar17 = uVar15;
          if ((int)uVar23 == 0) goto LAB_10065ea94;
          pbVar33 = pbVar32 + 1;
          uVar23 = (ulong)((int)uVar23 - 1);
          uVar35 = ((ulong)*pbVar32 << (uVar15 & 0x3f)) + uVar35;
          uVar17 = uVar15 + 8;
          bVar11 = uVar15 < 8;
          pbVar32 = pbVar33;
          uVar15 = uVar17;
        } while (bVar11);
      }
      uVar19 = (uint)uVar35;
      puVar36[4] = uVar19;
      if ((uVar19 & 0xff) == 8) {
        if ((uVar35 & 0xe000) == 0) {
          if (*(uint **)(puVar36 + 10) != (uint *)0x0) {
            **(uint **)(puVar36 + 10) = uVar19 >> 8 & 1;
          }
          if ((uVar19 >> 9 & 1) != 0) {
            local_64 = CONCAT22(local_64._2_2_,(short)uVar35);
            uVar13 = FUN_10065cb84(*(undefined8 *)(puVar36 + 6),&local_64,2);
            *(undefined8 *)(puVar36 + 6) = uVar13;
          }
          uVar17 = 0;
          uVar35 = 0;
          *puVar36 = 2;
          goto LAB_10065df90;
        }
        pcVar21 = "unknown header flags set";
      }
      else {
LAB_10065ea18:
        pcVar21 = "unknown compression method";
      }
      break;
    case 2:
      if (uVar16 < 0x20) {
LAB_10065df90:
        uVar17 = uVar17 & 0xffffffff;
        do {
          if ((int)uVar23 == 0) goto LAB_10065ea94;
          pbVar33 = pbVar32 + 1;
          uVar23 = (ulong)((int)uVar23 - 1);
          uVar35 = ((ulong)*pbVar32 << (uVar17 & 0x3f)) + uVar35;
          bVar11 = uVar17 < 0x18;
          pbVar32 = pbVar33;
          uVar17 = uVar17 + 8;
        } while (bVar11);
      }
      if (*(long *)(puVar36 + 10) != 0) {
        *(ulong *)(*(long *)(puVar36 + 10) + 8) = uVar35;
      }
      if ((*(byte *)((long)puVar36 + 0x11) >> 1 & 1) != 0) {
        local_64 = (undefined4)uVar35;
        uVar13 = FUN_10065cb84(*(undefined8 *)(puVar36 + 6),&local_64,4);
        *(undefined8 *)(puVar36 + 6) = uVar13;
      }
      uVar17 = 0;
      uVar35 = 0;
      *puVar36 = 3;
LAB_10065e000:
      uVar17 = uVar17 & 0xffffffff;
      do {
        if ((int)uVar23 == 0) goto LAB_10065ea94;
        pbVar33 = pbVar32 + 1;
        uVar23 = (ulong)((int)uVar23 - 1);
        uVar35 = ((ulong)*pbVar32 << (uVar17 & 0x3f)) + uVar35;
        bVar11 = uVar17 < 8;
        pbVar32 = pbVar33;
        uVar17 = uVar17 + 8;
      } while (bVar11);
      goto LAB_10065e028;
    case 3:
      if (uVar16 < 0x10) goto LAB_10065e000;
LAB_10065e028:
      lVar14 = *(long *)(puVar36 + 10);
      if (lVar14 != 0) {
        *(uint *)(lVar14 + 0x10) = (uint)uVar35 & 0xff;
        *(int *)(lVar14 + 0x14) = (int)(uVar35 >> 8);
      }
      if ((*(byte *)((long)puVar36 + 0x11) >> 1 & 1) != 0) {
        local_64 = CONCAT22(local_64._2_2_,(short)uVar35);
        uVar13 = FUN_10065cb84(*(undefined8 *)(puVar36 + 6),&local_64,2);
        *(undefined8 *)(puVar36 + 6) = uVar13;
      }
      uVar35 = 0;
      uVar15 = 0;
      uVar17 = 0;
      *puVar36 = 4;
      uVar19 = puVar36[4];
      if ((uVar19 >> 10 & 1) == 0) {
LAB_10065e088:
        pbVar33 = pbVar32;
        if (*(long *)(puVar36 + 10) != 0) {
          *(undefined8 *)(*(long *)(puVar36 + 10) + 0x18) = 0;
        }
      }
      else {
LAB_10065e098:
        uVar17 = uVar15 & 0xffffffff;
        do {
          if ((int)uVar23 == 0) goto LAB_10065ea94;
          pbVar33 = pbVar32 + 1;
          uVar23 = (ulong)((int)uVar23 - 1);
          uVar35 = ((ulong)*pbVar32 << (uVar17 & 0x3f)) + uVar35;
          bVar11 = uVar17 < 8;
          pbVar32 = pbVar33;
          uVar17 = uVar17 + 8;
        } while (bVar11);
LAB_10065e0c4:
        puVar36[0x15] = (uint)uVar35;
        if (*(long *)(puVar36 + 10) != 0) {
          *(uint *)(*(long *)(puVar36 + 10) + 0x20) = (uint)uVar35;
        }
        if ((uVar19 >> 9 & 1) == 0) {
          uVar35 = 0;
          uVar17 = 0;
        }
        else {
          local_64 = CONCAT22(local_64._2_2_,(short)uVar35);
          uVar13 = FUN_10065cb84(*(undefined8 *)(puVar36 + 6),&local_64,2);
          uVar35 = 0;
          uVar17 = 0;
          *(undefined8 *)(puVar36 + 6) = uVar13;
        }
      }
      *puVar36 = 5;
      pbVar32 = pbVar33;
switchD_10065d5b8_caseD_5:
      uVar19 = puVar36[4];
      if ((uVar19 >> 10 & 1) != 0) {
        uVar18 = puVar36[0x15];
        uVar34 = (uint)uVar23;
        uVar16 = uVar34;
        if (uVar18 <= uVar34) {
          uVar16 = uVar18;
        }
        if (uVar16 != 0) {
          lVar14 = *(long *)(puVar36 + 10);
          if ((lVar14 != 0) && (*(long *)(lVar14 + 0x18) != 0)) {
            uVar18 = *(int *)(lVar14 + 0x20) - uVar18;
            uVar19 = *(uint *)(lVar14 + 0x24) - uVar18;
            if (uVar18 + uVar16 <= *(uint *)(lVar14 + 0x24)) {
              uVar19 = uVar16;
            }
            _memcpy((void *)(*(long *)(lVar14 + 0x18) + (ulong)uVar18),pbVar32,(ulong)uVar19);
            uVar19 = puVar36[4];
          }
          if ((uVar19 >> 9 & 1) != 0) {
            uVar13 = FUN_10065cb84(*(undefined8 *)(puVar36 + 6),pbVar32,uVar16);
            *(undefined8 *)(puVar36 + 6) = uVar13;
          }
          uVar23 = (ulong)(uVar34 - uVar16);
          pbVar32 = pbVar32 + uVar16;
          uVar18 = puVar36[0x15] - uVar16;
          puVar36[0x15] = uVar18;
        }
        uVar34 = (uint)uVar23;
        if (uVar18 == 0) goto LAB_10065e1f4;
        goto LAB_10065ea98;
      }
LAB_10065e1f4:
      puVar36[0x15] = 0;
      *puVar36 = 6;
switchD_10065d5b8_caseD_6:
      uVar16 = (uint)uVar17;
      iVar25 = (int)uVar23;
      if ((*(byte *)((long)puVar36 + 0x11) >> 3 & 1) == 0) {
        if (*(long *)(puVar36 + 10) != 0) {
          *(undefined8 *)(*(long *)(puVar36 + 10) + 0x28) = 0;
        }
LAB_10065e2b4:
        puVar36[0x15] = 0;
        *puVar36 = 7;
switchD_10065d5b8_caseD_7:
        uVar16 = (uint)uVar17;
        iVar25 = (int)uVar23;
        if ((*(byte *)((long)puVar36 + 0x11) >> 4 & 1) == 0) {
          if (*(long *)(puVar36 + 10) != 0) {
            *(undefined8 *)(*(long *)(puVar36 + 10) + 0x38) = 0;
          }
        }
        else {
          uVar34 = 0;
          if (iVar25 == 0) goto LAB_10065ea98;
          uVar15 = 0;
          do {
            bVar8 = pbVar32[uVar15];
            lVar14 = *(long *)(puVar36 + 10);
            if ((lVar14 != 0) && (lVar20 = *(long *)(lVar14 + 0x38), lVar20 != 0)) {
              uVar19 = puVar36[0x15];
              if (uVar19 < *(uint *)(lVar14 + 0x40)) {
                puVar36[0x15] = uVar19 + 1;
                *(byte *)(lVar20 + (ulong)uVar19) = bVar8;
              }
            }
            uVar15 = uVar15 + 1;
          } while (bVar8 != 0 && uVar15 < (uVar23 & 0xffffffff));
          if ((*(byte *)((long)puVar36 + 0x11) >> 1 & 1) != 0) {
            uVar13 = FUN_10065cb84(*(undefined8 *)(puVar36 + 6),pbVar32,uVar15);
            *(undefined8 *)(puVar36 + 6) = uVar13;
          }
          pbVar32 = pbVar32 + uVar15;
          if (bVar8 != 0) goto LAB_10065ec10;
          uVar23 = (uVar23 & 0xffffffff) - uVar15;
        }
        *puVar36 = 8;
switchD_10065d5b8_caseD_8:
        if ((puVar36[4] >> 9 & 1) != 0) {
          if ((uint)uVar17 < 0x10) {
            uVar15 = uVar17 & 0xffffffff;
            do {
              uVar17 = uVar15;
              if ((int)uVar23 == 0) goto LAB_10065ea94;
              pbVar33 = pbVar32 + 1;
              uVar23 = (ulong)((int)uVar23 - 1);
              uVar35 = ((ulong)*pbVar32 << (uVar15 & 0x3f)) + uVar35;
              uVar17 = uVar15 + 8;
              bVar11 = uVar15 < 8;
              pbVar32 = pbVar33;
              uVar15 = uVar17;
            } while (bVar11);
          }
          if (uVar35 != (ushort)puVar36[6]) {
            pcVar21 = "header crc mismatch";
            break;
          }
          uVar35 = 0;
          uVar17 = 0;
        }
        lVar14 = *(long *)(puVar36 + 10);
        if (lVar14 != 0) {
          *(uint *)(lVar14 + 0x44) = puVar36[4] >> 9 & 1;
          *(undefined4 *)(lVar14 + 0x48) = 1;
        }
        lVar14 = FUN_10065cb84(0,0,0);
        *(long *)(puVar36 + 6) = lVar14;
        param_1[0xc] = lVar14;
        uVar19 = 0xb;
LAB_10065e404:
        *puVar36 = uVar19;
        goto LAB_10065ea2c;
      }
      uVar34 = 0;
      if (iVar25 == 0) goto LAB_10065ea98;
      uVar15 = 0;
      do {
        bVar8 = pbVar32[uVar15];
        lVar14 = *(long *)(puVar36 + 10);
        if ((lVar14 != 0) && (lVar20 = *(long *)(lVar14 + 0x28), lVar20 != 0)) {
          uVar19 = puVar36[0x15];
          if (uVar19 < *(uint *)(lVar14 + 0x30)) {
            puVar36[0x15] = uVar19 + 1;
            *(byte *)(lVar20 + (ulong)uVar19) = bVar8;
          }
        }
        uVar15 = uVar15 + 1;
      } while (bVar8 != 0 && uVar15 < (uVar23 & 0xffffffff));
      if ((*(byte *)((long)puVar36 + 0x11) >> 1 & 1) != 0) {
        uVar13 = FUN_10065cb84(*(undefined8 *)(puVar36 + 6),pbVar32,uVar15);
        *(undefined8 *)(puVar36 + 6) = uVar13;
      }
      pbVar32 = pbVar32 + uVar15;
      if (bVar8 == 0) {
        uVar23 = (uVar23 & 0xffffffff) - uVar15;
        goto LAB_10065e2b4;
      }
LAB_10065ec10:
      uVar34 = iVar25 - (int)uVar15;
      iVar25 = local_84;
    case 0x1c:
switchD_10065d5b8_caseD_1c:
      param_1[3] = (long)puVar30;
      *(uint *)(param_1 + 4) = uVar29;
      *param_1 = (long)pbVar32;
      *(uint *)(param_1 + 1) = uVar34;
      *(ulong *)(puVar36 + 0x12) = uVar35;
      puVar36[0x14] = uVar16;
      if ((puVar36[0xd] != 0) ||
         (((local_74 != uVar29 && (*puVar36 < 0x1d)) && ((*puVar36 < 0x1a || (param_2 != 4)))))) {
        iVar12 = FUN_10065ec7c(param_1,puVar30,local_74 - uVar29);
        if (iVar12 != 0) {
          *puVar36 = 0x1e;
LAB_10065eaac:
          return -4;
        }
        uVar34 = *(uint *)(param_1 + 1);
        uVar29 = *(uint *)(param_1 + 4);
      }
      uVar7 = uVar7 - uVar34;
      local_74 = local_74 - uVar29;
      uVar17 = (ulong)local_74;
      param_1[2] = param_1[2] + (ulong)uVar7;
      param_1[5] = param_1[5] + uVar17;
      *(ulong *)(puVar36 + 8) = *(long *)(puVar36 + 8) + uVar17;
      if ((puVar36[2] != 0) && (local_74 != 0)) {
        if (puVar36[4] == 0) {
          lVar14 = FUN_10065c858(*(undefined8 *)(puVar36 + 6),param_1[3] - uVar17,uVar17);
        }
        else {
          lVar14 = FUN_10065cb84();
        }
        *(long *)(puVar36 + 6) = lVar14;
        param_1[0xc] = lVar14;
      }
      uVar19 = *puVar36;
      iVar12 = 0x100;
      if (uVar19 != 0xe && uVar19 != 0x13) {
        iVar12 = 0;
      }
      *(uint *)(param_1 + 0xb) =
           puVar36[0x14] + (uint)(puVar36[1] != 0) * 0x40 + (uint)(uVar19 == 0xb) * 0x80 + iVar12;
      if ((param_2 == 4 || uVar7 == 0 && local_74 == 0) && iVar25 == 0) {
        return -5;
      }
      return iVar25;
    case 4:
      uVar19 = puVar36[4];
      if ((uVar19 >> 10 & 1) != 0) {
        uVar15 = uVar17;
        pbVar33 = pbVar32;
        if (uVar16 < 0x10) goto LAB_10065e098;
        goto LAB_10065e0c4;
      }
      goto LAB_10065e088;
    case 5:
      goto switchD_10065d5b8_caseD_5;
    case 6:
      goto switchD_10065d5b8_caseD_6;
    case 7:
      goto switchD_10065d5b8_caseD_7;
    case 8:
      goto switchD_10065d5b8_caseD_8;
    case 9:
      if (uVar16 < 0x20) {
        uVar17 = uVar17 & 0xffffffff;
        do {
          if ((int)uVar23 == 0) goto LAB_10065ea94;
          pbVar33 = pbVar32 + 1;
          uVar23 = (ulong)((int)uVar23 - 1);
          uVar35 = ((ulong)*pbVar32 << (uVar17 & 0x3f)) + uVar35;
          bVar11 = uVar17 < 0x18;
          pbVar32 = pbVar33;
          uVar17 = uVar17 + 8;
        } while (bVar11);
      }
      uVar17 = 0;
      uVar19 = ((uint)uVar35 & 0xff00ff00) >> 8 | ((uint)uVar35 & 0xff00ff) << 8;
      uVar35 = (ulong)(uVar19 >> 0x10 | uVar19 << 0x10);
      *(ulong *)(puVar36 + 6) = uVar35;
      param_1[0xc] = uVar35;
      *puVar36 = 10;
      uVar35 = 0;
    case 10:
      if (puVar36[3] == 0) {
        param_1[3] = (long)puVar30;
        *(uint *)(param_1 + 4) = uVar29;
        *param_1 = (long)pbVar33;
        *(int *)(param_1 + 1) = (int)uVar23;
        *(ulong *)(puVar36 + 0x12) = uVar35;
        puVar36[0x14] = (uint)uVar17;
        return 2;
      }
      lVar14 = FUN_10065c858(0,0,0);
      *(long *)(puVar36 + 6) = lVar14;
      param_1[0xc] = lVar14;
      *puVar36 = 0xb;
      pbVar32 = pbVar33;
switchD_10065d5b8_caseD_b:
      uVar34 = (uint)uVar23;
      if (param_2 - 5U < 2) goto LAB_10065ea98;
switchD_10065d5b8_caseD_c:
      uVar19 = (uint)uVar17;
      if (puVar36[1] != 0) {
        uVar35 = uVar35 >> (uVar19 & 7);
        uVar17 = (ulong)(uVar19 & 0xfffffff8);
        uVar19 = 0x1a;
        goto LAB_10065ea28;
      }
      if (uVar19 < 3) {
        uVar34 = 0;
        if ((int)uVar23 == 0) goto LAB_10065ea98;
        uVar19 = uVar19 + 8;
        uVar23 = (ulong)((int)uVar23 - 1);
        uVar35 = ((ulong)*pbVar32 << (uVar17 & 0x3f)) + uVar35;
        pbVar32 = pbVar32 + 1;
      }
      uVar34 = (uint)uVar23;
      puVar36[1] = (uint)uVar35 & 1;
      uVar16 = 0xd;
      switch((uint)uVar35 >> 1 & 3) {
      case 1:
        *(undefined **)(puVar36 + 0x1a) = &DAT_10118040c;
        puVar36[0x1c] = 9;
        puVar36[0x1d] = 5;
        *(undefined **)(puVar36 + 0x18) = &DAT_10117fc0c;
        *puVar36 = 0x13;
        if (param_2 == 6) {
          uVar35 = uVar35 >> 3;
          uVar17 = (ulong)(uVar19 - 3);
          goto LAB_10065ea98;
        }
        goto LAB_10065de08;
      case 2:
        uVar16 = 0x10;
        break;
      case 3:
        param_1[6] = (long)"invalid block type";
        uVar16 = 0x1d;
      }
      *puVar36 = uVar16;
LAB_10065de08:
      uVar35 = uVar35 >> 3;
      uVar17 = (ulong)(uVar19 - 3);
      goto LAB_10065ea2c;
    case 0xb:
      goto switchD_10065d5b8_caseD_b;
    case 0xc:
      goto switchD_10065d5b8_caseD_c;
    case 0xd:
      uVar35 = uVar35 >> (uVar16 & 7);
      uVar17 = (ulong)(uVar16 & 0xfffffff8);
      uVar15 = uVar17;
      if ((uVar16 & 0xfffffff8) < 0x20) {
        do {
          uVar17 = uVar15;
          if ((int)uVar23 == 0) goto LAB_10065ea94;
          pbVar33 = pbVar32 + 1;
          uVar23 = (ulong)((int)uVar23 - 1);
          uVar35 = ((ulong)*pbVar32 << (uVar15 & 0x3f)) + uVar35;
          uVar17 = uVar15 + 8;
          bVar11 = uVar15 < 0x18;
          pbVar32 = pbVar33;
          uVar15 = uVar17;
        } while (bVar11);
      }
      uVar34 = (uint)uVar23;
      if ((uVar35 >> 0x10 ^ 0xffff) == (uVar35 & 0xffff)) {
        uVar17 = 0;
        puVar36[0x15] = (uint)uVar35 & 0xffff;
        *puVar36 = 0xe;
        uVar35 = 0;
        if (param_2 == 6) goto LAB_10065ea98;
        goto switchD_10065d5b8_caseD_e;
      }
      pcVar21 = "invalid stored block lengths";
      break;
    case 0xe:
switchD_10065d5b8_caseD_e:
      *puVar36 = 0xf;
    case 0xf:
      uVar16 = (uint)uVar17;
      uVar34 = (uint)uVar23;
      uVar19 = puVar36[0x15];
      if (uVar19 == 0) {
LAB_10065e9cc:
        uVar19 = 0xb;
        goto LAB_10065ea28;
      }
      uVar18 = uVar34;
      if (uVar19 <= uVar34) {
        uVar18 = uVar19;
      }
      uVar19 = uVar29;
      if (uVar18 <= uVar29) {
        uVar19 = uVar18;
      }
      iVar25 = local_84;
      if (uVar19 != 0) {
        _memcpy(puVar30,pbVar32,(ulong)uVar19);
        uVar23 = (ulong)(uVar34 - uVar19);
        pbVar32 = pbVar32 + uVar19;
        uVar29 = uVar29 - uVar19;
        puVar30 = puVar30 + uVar19;
        puVar36[0x15] = puVar36[0x15] - uVar19;
        goto LAB_10065ea2c;
      }
      goto switchD_10065d5b8_caseD_1c;
    case 0x10:
      if (uVar16 < 0xe) {
        uVar15 = uVar17 & 0xffffffff;
        do {
          uVar17 = uVar15;
          if ((int)uVar23 == 0) goto LAB_10065ea94;
          pbVar33 = pbVar32 + 1;
          uVar23 = (ulong)((int)uVar23 - 1);
          uVar35 = ((ulong)*pbVar32 << (uVar15 & 0x3f)) + uVar35;
          uVar17 = uVar15 + 8;
          bVar11 = uVar15 < 6;
          pbVar32 = pbVar33;
          uVar15 = uVar17;
        } while (bVar11);
      }
      uVar34 = (uint)uVar35;
      uVar16 = uVar34 >> 5 & 0x1f;
      puVar36[0x1f] = (uVar34 & 0x1f) + 0x101;
      puVar36[0x20] = uVar16 + 1;
      uVar19 = (uVar34 >> 10 & 0xf) + 4;
      puVar36[0x1e] = uVar19;
      uVar35 = uVar35 >> 0xe;
      uVar17 = (ulong)((int)uVar17 - 0xe);
      if (((uVar34 & 0x1f) < 0x1e) && (uVar16 < 0x1e)) {
        uVar15 = 0;
        puVar36[0x21] = 0;
        *puVar36 = 0x11;
LAB_10065d940:
        do {
          uVar16 = (uint)uVar17;
          pbVar33 = pbVar32;
          if (uVar16 < 3) {
            if ((int)uVar23 == 0) goto LAB_10065ea94;
            pbVar33 = pbVar32 + 1;
            uVar16 = uVar16 + 8;
            uVar23 = (ulong)((int)uVar23 - 1);
            uVar35 = ((ulong)*pbVar32 << (uVar17 & 0x3f)) + uVar35;
          }
          uVar9 = (&DAT_10117fbe6)[uVar15];
          uVar15 = uVar15 + 1;
          puVar36[0x21] = (uint)uVar15;
          *(ushort *)((long)puVar36 + (ulong)uVar9 * 2 + 0x90) = (ushort)uVar35 & 7;
          uVar35 = uVar35 >> 3;
          uVar17 = (ulong)(uVar16 - 3);
          pbVar32 = pbVar33;
        } while ((uint)uVar15 < uVar19);
        goto LAB_10065d998;
      }
      pcVar21 = "too many length or distance symbols";
      break;
    case 0x11:
      uVar19 = puVar36[0x1e];
      uVar15 = (ulong)puVar36[0x21];
      if (puVar36[0x21] < uVar19) goto LAB_10065d940;
LAB_10065d998:
      if ((uint)uVar15 < 0x13) {
        uVar15 = uVar15 & 0xffffffff;
        do {
          puVar1 = &DAT_10117fbe6 + uVar15;
          uVar15 = uVar15 + 1;
          *(undefined2 *)((long)puVar36 + (ulong)*puVar1 * 2 + 0x90) = 0;
        } while ((int)uVar15 != 0x13);
        puVar36[0x21] = 0x13;
      }
      *(uint **)(puVar36 + 0x22) = puVar2;
      *(uint **)(puVar36 + 0x18) = puVar2;
      puVar36[0x1c] = 7;
      local_84 = FUN_10065ee00(0,puVar36 + 0x24,0x13,puVar3,puVar36 + 0x1c,puVar4);
      if (local_84 == 0) {
        uVar19 = 0;
        local_84 = 0;
        puVar36[0x21] = 0;
        *puVar36 = 0x12;
        goto LAB_10065db28;
      }
      param_1[6] = (long)"invalid code lengths set";
      uVar19 = 0x1d;
      pbVar32 = pbVar33;
      goto LAB_10065e404;
    case 0x12:
      uVar19 = puVar36[0x21];
LAB_10065db28:
      uVar5 = puVar36[0x1f];
      uVar18 = puVar36[0x20] + uVar5;
      pbVar32 = pbVar33;
      if (uVar19 < uVar18) {
        lVar14 = *(long *)(puVar36 + 0x18);
        uVar10 = ~(-1 << (ulong)(puVar36[0x1c] & 0x1f));
        do {
          uVar34 = (uint)uVar23;
          uVar24 = (ulong)(uVar10 & (uint)uVar35);
          bVar8 = *(byte *)(lVar14 + uVar24 * 4 + 1);
          uVar15 = (ulong)bVar8;
          uVar16 = (uint)uVar17;
          if (uVar16 < bVar8) {
            uVar17 = uVar17 & 0xffffffff;
            pbVar32 = pbVar33;
            do {
              if ((int)uVar23 == 0) goto LAB_10065eacc;
              uVar23 = (ulong)((int)uVar23 - 1);
              pbVar26 = pbVar32 + 1;
              uVar35 = ((ulong)*pbVar32 << (uVar17 & 0x3f)) + uVar35;
              uVar17 = uVar17 + 8;
              uVar6 = uVar10 & (uint)uVar35;
              uVar15 = (ulong)*(byte *)(lVar14 + (ulong)uVar6 * 4 + 1);
              pbVar32 = pbVar26;
            } while (uVar17 < uVar15);
            uVar24 = (ulong)uVar6;
            pbVar33 = pbVar26;
          }
          uVar9 = *(ushort *)(lVar14 + uVar24 * 4 + 2);
          iVar25 = (int)uVar15;
          uVar16 = (uint)uVar17;
          if (0xf < uVar9) {
            pbVar32 = pbVar33;
            if (uVar9 == 0x10) {
              if (uVar16 < iVar25 + 2U) {
                uVar17 = uVar17 & 0xffffffff;
                do {
                  uVar34 = 0;
                  if ((int)uVar23 == 0) goto LAB_10065ea98;
                  uVar23 = (ulong)((int)uVar23 - 1);
                  pbVar33 = pbVar32 + 1;
                  uVar35 = ((ulong)*pbVar32 << (uVar17 & 0x3f)) + uVar35;
                  uVar17 = uVar17 + 8;
                  pbVar32 = pbVar33;
                } while (uVar17 < iVar25 + 2U);
              }
              uVar35 = uVar35 >> (uVar15 & 0x3f);
              uVar16 = (int)uVar17 - iVar25;
              uVar17 = (ulong)uVar16;
              if (uVar19 != 0) {
                uVar28 = *(undefined2 *)((long)puVar36 + (ulong)(uVar19 - 1) * 2 + 0x90);
                iVar12 = ((uint)uVar35 & 3) + 3;
                uVar35 = uVar35 >> 2;
                uVar17 = (ulong)(uVar16 - 2);
                goto LAB_10065dd04;
              }
            }
            else {
              if (uVar9 == 0x11) {
                if (uVar16 < iVar25 + 3U) {
                  uVar17 = uVar17 & 0xffffffff;
                  do {
                    if ((int)uVar23 == 0) goto LAB_10065ea94;
                    uVar23 = (ulong)((int)uVar23 - 1);
                    pbVar33 = pbVar32 + 1;
                    uVar35 = ((ulong)*pbVar32 << (uVar17 & 0x3f)) + uVar35;
                    uVar17 = uVar17 + 8;
                    pbVar32 = pbVar33;
                  } while (uVar17 < iVar25 + 3U);
                }
                uVar28 = 0;
                uVar35 = uVar35 >> (uVar15 & 0x3f);
                iVar12 = ((uint)uVar35 & 7) + 3;
                uVar35 = uVar35 >> 3;
                uVar17 = (ulong)(((int)uVar17 - iVar25) - 3);
              }
              else {
                if (uVar16 < iVar25 + 7U) {
                  uVar17 = uVar17 & 0xffffffff;
                  do {
                    if ((int)uVar23 == 0) goto LAB_10065ea94;
                    uVar23 = (ulong)((int)uVar23 - 1);
                    pbVar33 = pbVar32 + 1;
                    uVar35 = ((ulong)*pbVar32 << (uVar17 & 0x3f)) + uVar35;
                    uVar17 = uVar17 + 8;
                    pbVar32 = pbVar33;
                  } while (uVar17 < iVar25 + 7U);
                }
                uVar28 = 0;
                uVar35 = uVar35 >> (uVar15 & 0x3f);
                iVar12 = ((uint)uVar35 & 0x7f) + 0xb;
                uVar35 = uVar35 >> 7;
                uVar17 = (ulong)(((int)uVar17 - iVar25) - 7);
              }
LAB_10065dd04:
              if (iVar12 + uVar19 <= uVar18) {
                do {
                  uVar15 = (ulong)uVar19;
                  uVar19 = uVar19 + 1;
                  *(undefined2 *)((long)puVar36 + uVar15 * 2 + 0x90) = uVar28;
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
                puVar36[0x21] = uVar19;
                goto LAB_10065dd28;
              }
            }
            pcVar21 = "invalid bit length repeat";
            pbVar32 = pbVar33;
            goto LAB_10065ea20;
          }
          uVar35 = uVar35 >> (uVar15 & 0x3f);
          uVar17 = (ulong)(uVar16 - iVar25);
          uVar15 = (ulong)uVar19;
          uVar19 = uVar19 + 1;
          puVar36[0x21] = uVar19;
          *(ushort *)((long)puVar36 + uVar15 * 2 + 0x90) = uVar9;
LAB_10065dd28:
          pbVar32 = pbVar33;
        } while (uVar19 < uVar18);
      }
      uVar34 = (uint)uVar23;
      if ((short)puVar36[0xa4] != 0) {
        *(uint **)(puVar36 + 0x22) = puVar2;
        *(uint **)(puVar36 + 0x18) = puVar2;
        puVar36[0x1c] = 9;
        local_84 = FUN_10065ee00(1,puVar36 + 0x24,uVar5,puVar3,puVar36 + 0x1c,puVar4);
        if (local_84 == 0) {
          *(undefined8 *)(puVar36 + 0x1a) = *(undefined8 *)(puVar36 + 0x22);
          puVar36[0x1d] = 6;
          local_84 = FUN_10065ee00(2,(long)puVar36 + (ulong)puVar36[0x1f] * 2 + 0x90,puVar36[0x20],
                                   puVar3,puVar36 + 0x1d,puVar4);
          if (local_84 == 0) {
            local_84 = 0;
            *puVar36 = 0x13;
            if (param_2 == 6) goto LAB_10065ea98;
            goto switchD_10065d5b8_caseD_13;
          }
          param_1[6] = (long)"invalid distances set";
          *puVar36 = 0x1d;
        }
        else {
          param_1[6] = (long)"invalid literal/lengths set";
          *puVar36 = 0x1d;
        }
        goto LAB_10065ea2c;
      }
      pcVar21 = "invalid code -- missing end-of-block";
      break;
    case 0x13:
switchD_10065d5b8_caseD_13:
      *puVar36 = 0x14;
      pbVar33 = pbVar32;
    case 0x14:
      uVar34 = (uint)uVar23;
      uVar16 = (uint)uVar17;
      if ((uVar34 < 6) || (uVar29 < 0x102)) {
        puVar36[0x6f9] = 0;
        lVar14 = *(long *)(puVar36 + 0x18);
        uVar19 = -1 << (ulong)(puVar36[0x1c] & 0x1f);
        uVar24 = (ulong)((uint)uVar35 & (uVar19 ^ 0xffffffff));
        bVar8 = *(byte *)(lVar14 + uVar24 * 4 + 1);
        uVar15 = (ulong)bVar8;
        if (uVar16 < bVar8) {
          uVar17 = uVar17 & 0xffffffff;
          pbVar32 = pbVar33;
          do {
            if ((int)uVar23 == 0) goto LAB_10065eacc;
            uVar23 = (ulong)((int)uVar23 - 1);
            pbVar26 = pbVar32 + 1;
            uVar35 = ((ulong)*pbVar32 << (uVar17 & 0x3f)) + uVar35;
            uVar17 = uVar17 + 8;
            uVar18 = ~uVar19 & (uint)uVar35;
            uVar15 = (ulong)*(byte *)(lVar14 + (ulong)uVar18 * 4 + 1);
            pbVar32 = pbVar26;
          } while (uVar17 < uVar15);
          uVar24 = (ulong)uVar18;
          pbVar33 = pbVar26;
        }
        uVar34 = (uint)uVar23;
        uVar19 = (uint)uVar15;
        uVar16 = (uint)uVar17;
        pbVar32 = (byte *)(lVar14 + uVar24 * 4);
        bVar8 = *pbVar32;
        uVar9 = *(ushort *)(pbVar32 + 2);
        pbVar32 = pbVar33;
        if (bVar8 == 0 || (bVar8 & 0xf0) != 0) {
          uVar24 = uVar15;
          uVar34 = uVar19;
          uVar19 = 0;
        }
        else {
          uVar18 = -1 << (ulong)(uVar19 + bVar8 & 0x1f);
          uVar27 = (ulong)((((uint)uVar35 & (uVar18 ^ 0xffffffff)) >> (ulong)(uVar19 & 0x1f)) +
                          (uint)uVar9);
          bVar8 = *(byte *)(lVar14 + uVar27 * 4 + 1);
          uVar24 = (ulong)bVar8;
          if (uVar16 < uVar19 + bVar8) {
            uVar17 = uVar17 & 0xffffffff;
            pbVar26 = pbVar33;
            do {
              if ((int)uVar23 == 0) goto LAB_10065eacc;
              uVar23 = (ulong)((int)uVar23 - 1);
              pbVar32 = pbVar26 + 1;
              uVar35 = ((ulong)*pbVar26 << (uVar17 & 0x3f)) + uVar35;
              uVar17 = uVar17 + 8;
              uVar5 = (((uint)uVar35 & ~uVar18) >> (ulong)(uVar19 & 0x1f)) + (uint)uVar9;
              uVar24 = (ulong)*(byte *)(lVar14 + (ulong)uVar5 * 4 + 1);
              pbVar26 = pbVar32;
            } while (uVar17 < uVar24 + uVar15);
            uVar27 = (ulong)uVar5;
          }
          uVar34 = (uint)uVar24;
          pbVar33 = (byte *)(lVar14 + uVar27 * 4);
          uVar9 = *(ushort *)(pbVar33 + 2);
          bVar8 = *pbVar33;
          uVar35 = uVar35 >> (uVar15 & 0x3f);
          uVar16 = (int)uVar17 - uVar19;
        }
        uVar35 = uVar35 >> (uVar24 & 0x3f);
        uVar17 = (ulong)(uVar16 - uVar34);
        puVar36[0x6f9] = uVar19 + uVar34;
        puVar36[0x15] = (uint)uVar9;
        if (bVar8 != 0) {
          if ((bVar8 >> 5 & 1) != 0) {
            puVar36[0x6f9] = 0xffffffff;
            goto LAB_10065e9cc;
          }
          if ((bVar8 >> 6 & 1) != 0) {
            pcVar21 = "invalid literal/length code";
            break;
          }
          uVar19 = bVar8 & 0xf;
          puVar36[0x17] = uVar19;
          *puVar36 = 0x15;
          if ((bVar8 & 0xf) == 0) {
LAB_10065e700:
            uVar16 = puVar36[0x15];
          }
          else {
LAB_10065da20:
            uVar34 = (uint)uVar23;
            uVar16 = (uint)uVar17;
            uVar18 = uVar16;
            pbVar26 = pbVar32;
            while (uVar18 < uVar19) {
              pbVar33 = pbVar32;
              if ((int)uVar23 == 0) goto LAB_10065eacc;
              uVar23 = (ulong)((int)uVar23 - 1);
              uVar35 = ((ulong)*pbVar26 << (uVar17 & 0x3f)) + uVar35;
              uVar18 = (int)uVar17 + 8;
              uVar17 = (ulong)uVar18;
              pbVar26 = pbVar26 + 1;
            }
            uVar16 = puVar36[0x15] + ((uint)uVar35 & (-1 << (ulong)(uVar19 & 0x1f) ^ 0xffffffffU));
            puVar36[0x15] = uVar16;
            uVar35 = uVar35 >> ((ulong)uVar19 & 0x3f);
            uVar17 = (ulong)(uVar18 - uVar19);
            puVar36[0x6f9] = puVar36[0x6f9] + uVar19;
            pbVar32 = pbVar26;
          }
          puVar36[0x6fa] = uVar16;
          *puVar36 = 0x16;
          pbVar33 = pbVar32;
switchD_10065d5b8_caseD_16:
          uVar34 = (uint)uVar23;
          lVar14 = *(long *)(puVar36 + 0x1a);
          uVar19 = -1 << (ulong)(puVar36[0x1d] & 0x1f);
          uVar24 = (ulong)((uint)uVar35 & (uVar19 ^ 0xffffffff));
          bVar8 = *(byte *)(lVar14 + uVar24 * 4 + 1);
          uVar15 = (ulong)bVar8;
          uVar16 = (uint)uVar17;
          if (uVar16 < bVar8) {
            uVar17 = uVar17 & 0xffffffff;
            pbVar32 = pbVar33;
            do {
              if ((int)uVar23 == 0) goto LAB_10065eacc;
              uVar23 = (ulong)((int)uVar23 - 1);
              pbVar26 = pbVar32 + 1;
              uVar35 = ((ulong)*pbVar32 << (uVar17 & 0x3f)) + uVar35;
              uVar17 = uVar17 + 8;
              uVar18 = ~uVar19 & (uint)uVar35;
              uVar15 = (ulong)*(byte *)(lVar14 + (ulong)uVar18 * 4 + 1);
              pbVar32 = pbVar26;
            } while (uVar17 < uVar15);
            uVar24 = (ulong)uVar18;
            pbVar33 = pbVar26;
          }
          uVar34 = (uint)uVar23;
          uVar19 = (uint)uVar15;
          uVar16 = (uint)uVar17;
          pbVar32 = (byte *)(lVar14 + uVar24 * 4);
          bVar8 = *pbVar32;
          uVar9 = *(ushort *)(pbVar32 + 2);
          pbVar32 = pbVar33;
          if ((bVar8 & 0xf0) == 0) {
            uVar18 = -1 << (ulong)(uVar19 + bVar8 & 0x1f);
            uVar27 = (ulong)((((uint)uVar35 & (uVar18 ^ 0xffffffff)) >> (ulong)(uVar19 & 0x1f)) +
                            (uint)uVar9);
            bVar8 = *(byte *)(lVar14 + uVar27 * 4 + 1);
            uVar24 = (ulong)bVar8;
            if (uVar16 < uVar19 + bVar8) {
              uVar17 = uVar17 & 0xffffffff;
              pbVar26 = pbVar33;
              do {
                if ((int)uVar23 == 0) goto LAB_10065eacc;
                uVar23 = (ulong)((int)uVar23 - 1);
                pbVar32 = pbVar26 + 1;
                uVar35 = ((ulong)*pbVar26 << (uVar17 & 0x3f)) + uVar35;
                uVar17 = uVar17 + 8;
                uVar5 = (((uint)uVar35 & ~uVar18) >> (ulong)(uVar19 & 0x1f)) + (uint)uVar9;
                uVar24 = (ulong)*(byte *)(lVar14 + (ulong)uVar5 * 4 + 1);
                pbVar26 = pbVar32;
              } while (uVar17 < uVar24 + uVar15);
              uVar27 = (ulong)uVar5;
            }
            uVar18 = (uint)uVar24;
            pbVar33 = (byte *)(lVar14 + uVar27 * 4);
            uVar9 = *(ushort *)(pbVar33 + 2);
            bVar8 = *pbVar33;
            uVar35 = uVar35 >> (uVar15 & 0x3f);
            uVar16 = (int)uVar17 - uVar19;
            uVar34 = puVar36[0x6f9] + uVar19;
          }
          else {
            uVar34 = puVar36[0x6f9];
            uVar24 = uVar15;
            uVar18 = uVar19;
          }
          uVar35 = uVar35 >> (uVar24 & 0x3f);
          uVar17 = (ulong)(uVar16 - uVar18);
          puVar36[0x6f9] = uVar34 + uVar18;
          if ((bVar8 >> 6 & 1) != 0) {
            pcVar21 = "invalid distance code";
            break;
          }
          uVar19 = bVar8 & 0xf;
          puVar36[0x16] = (uint)uVar9;
          puVar36[0x17] = uVar19;
          *puVar36 = 0x17;
          if ((bVar8 & 0xf) != 0) {
LAB_10065e878:
            uVar34 = (uint)uVar23;
            uVar16 = (uint)uVar17;
            uVar18 = uVar16;
            pbVar26 = pbVar32;
            while (uVar18 < uVar19) {
              pbVar33 = pbVar32;
              if ((int)uVar23 == 0) goto LAB_10065eacc;
              uVar23 = (ulong)((int)uVar23 - 1);
              uVar35 = ((ulong)*pbVar26 << (uVar17 & 0x3f)) + uVar35;
              uVar18 = (int)uVar17 + 8;
              uVar17 = (ulong)uVar18;
              pbVar26 = pbVar26 + 1;
            }
            puVar36[0x16] =
                 puVar36[0x16] + ((uint)uVar35 & (-1 << (ulong)(uVar19 & 0x1f) ^ 0xffffffffU));
            uVar35 = uVar35 >> ((ulong)uVar19 & 0x3f);
            uVar17 = (ulong)(uVar18 - uVar19);
            puVar36[0x6f9] = puVar36[0x6f9] + uVar19;
            pbVar32 = pbVar26;
          }
LAB_10065e8fc:
          *puVar36 = 0x18;
switchD_10065d5b8_caseD_18:
          uVar34 = (uint)uVar23;
          if (uVar29 != 0) {
            uVar19 = puVar36[0x16];
            if (local_74 - uVar29 < uVar19) {
              uVar19 = uVar19 - (local_74 - uVar29);
              if ((puVar36[0xe] < uVar19) && (puVar36[0x6f8] != 0)) {
                pcVar21 = "invalid distance too far back";
                break;
              }
              uVar16 = puVar36[0xf];
              uVar34 = uVar19 - uVar16;
              if (uVar19 < uVar16 || uVar34 == 0) {
                uVar16 = uVar16 - uVar19;
              }
              else {
                uVar16 = puVar36[0xd] - uVar34;
                uVar19 = uVar34;
              }
              puVar22 = (undefined1 *)(*(long *)(puVar36 + 0x10) + (ulong)uVar16);
              uVar16 = puVar36[0x15];
              uVar34 = uVar16;
              if (uVar19 <= uVar16) {
                uVar34 = uVar19;
              }
            }
            else {
              puVar22 = puVar30 + -(ulong)uVar19;
              uVar16 = puVar36[0x15];
              uVar34 = uVar16;
            }
            uVar19 = uVar29;
            if (uVar34 <= uVar29) {
              uVar19 = uVar34;
            }
            puVar36[0x15] = uVar16 - uVar19;
            uVar16 = uVar19;
            do {
              puVar31 = puVar30 + 1;
              *puVar30 = *puVar22;
              uVar16 = uVar16 - 1;
              puVar22 = puVar22 + 1;
              puVar30 = puVar31;
            } while (uVar16 != 0);
            uVar29 = uVar29 - uVar19;
            if (puVar36[0x15] != 0) goto LAB_10065ea2c;
LAB_10065e9b4:
            uVar19 = 0x14;
            puVar30 = puVar31;
            goto LAB_10065ea28;
          }
          goto LAB_10065ea98;
        }
        uVar19 = 0x19;
        goto LAB_10065ea28;
      }
      param_1[3] = (long)puVar30;
      *(uint *)(param_1 + 4) = uVar29;
      *param_1 = (long)pbVar33;
      *(uint *)(param_1 + 1) = uVar34;
      *(ulong *)(puVar36 + 0x12) = uVar35;
      puVar36[0x14] = uVar16;
      FUN_10065ce0c(param_1,local_74);
      puVar30 = (undefined1 *)param_1[3];
      uVar29 = *(uint *)(param_1 + 4);
      pbVar32 = (byte *)*param_1;
      uVar23 = (ulong)*(uint *)(param_1 + 1);
      uVar35 = *(ulong *)(puVar36 + 0x12);
      uVar17 = (ulong)puVar36[0x14];
      if (*puVar36 == 0xb) {
        puVar36[0x6f9] = 0xffffffff;
      }
      goto LAB_10065ea2c;
    case 0x15:
      uVar19 = puVar36[0x17];
      if (uVar19 != 0) goto LAB_10065da20;
      goto LAB_10065e700;
    case 0x16:
      goto switchD_10065d5b8_caseD_16;
    case 0x17:
      uVar19 = puVar36[0x17];
      if (uVar19 != 0) goto LAB_10065e878;
      goto LAB_10065e8fc;
    case 0x18:
      goto switchD_10065d5b8_caseD_18;
    case 0x19:
      if (uVar29 != 0) {
        puVar31 = puVar30 + 1;
        *puVar30 = (char)puVar36[0x15];
        uVar29 = uVar29 - 1;
        goto LAB_10065e9b4;
      }
      goto LAB_10065ea98;
    case 0x1a:
      if (puVar36[2] != 0) {
        if (uVar16 < 0x20) {
          uVar15 = uVar17 & 0xffffffff;
          do {
            uVar17 = uVar15;
            if ((int)uVar23 == 0) goto LAB_10065ea94;
            pbVar33 = pbVar32 + 1;
            uVar23 = (ulong)((int)uVar23 - 1);
            uVar35 = ((ulong)*pbVar32 << (uVar15 & 0x3f)) + uVar35;
            uVar17 = uVar15 + 8;
            bVar11 = uVar15 < 0x18;
            pbVar32 = pbVar33;
            uVar15 = uVar17;
          } while (bVar11);
        }
        uVar15 = (ulong)(local_74 - uVar29);
        param_1[5] = param_1[5] + uVar15;
        *(ulong *)(puVar36 + 8) = *(long *)(puVar36 + 8) + uVar15;
        if (local_74 - uVar29 == 0) {
          uVar15 = *(ulong *)(puVar36 + 6);
        }
        else {
          if (puVar36[4] == 0) {
            uVar15 = FUN_10065c858(*(undefined8 *)(puVar36 + 6),(long)puVar30 - uVar15);
          }
          else {
            uVar15 = FUN_10065cb84();
          }
          *(ulong *)(puVar36 + 6) = uVar15;
          param_1[0xc] = uVar15;
        }
        uVar19 = ((uint)uVar35 & 0xff00ff00) >> 8 | ((uint)uVar35 & 0xff00ff) << 8;
        uVar24 = (ulong)(uVar19 >> 0x10 | uVar19 << 0x10);
        if (puVar36[4] != 0) {
          uVar24 = uVar35;
        }
        local_74 = uVar29;
        if (uVar24 != uVar15) {
          param_1[6] = (long)"incorrect data check";
          *puVar36 = 0x1d;
          pbVar32 = pbVar33;
          goto LAB_10065ea2c;
        }
        uVar35 = 0;
        uVar17 = 0;
      }
      *puVar36 = 0x1b;
    case 0x1b:
      uVar16 = (uint)uVar17;
      uVar34 = (uint)uVar23;
      if ((puVar36[2] != 0) && (puVar36[4] != 0)) {
        if (uVar16 < 0x20) {
          pbVar32 = pbVar33;
          uVar15 = uVar17 & 0xffffffff;
          do {
            uVar17 = uVar15;
            if ((int)uVar23 == 0) goto LAB_10065ea94;
            pbVar33 = pbVar32 + 1;
            uVar23 = (ulong)((int)uVar23 - 1);
            uVar35 = ((ulong)*pbVar32 << (uVar15 & 0x3f)) + uVar35;
            uVar17 = uVar15 + 8;
            bVar11 = uVar15 < 0x18;
            pbVar32 = pbVar33;
            uVar15 = uVar17;
          } while (bVar11);
        }
        uVar34 = (uint)uVar23;
        if (uVar35 != puVar36[8]) {
          pcVar21 = "incorrect length check";
          pbVar32 = pbVar33;
          break;
        }
        uVar35 = 0;
        uVar16 = 0;
      }
      *puVar36 = 0x1c;
      pbVar32 = pbVar33;
      iVar25 = 1;
      goto switchD_10065d5b8_caseD_1c;
    case 0x1d:
      iVar25 = -3;
      goto switchD_10065d5b8_caseD_1c;
    case 0x1e:
      goto LAB_10065eaac;
    default:
      goto LAB_10065eaac;
    }
LAB_10065ea20:
    param_1[6] = (long)pcVar21;
    uVar19 = 0x1d;
LAB_10065ea28:
    *puVar36 = uVar19;
LAB_10065ea2c:
    uVar19 = *puVar36;
  } while( true );
LAB_10065eacc:
  uVar16 = uVar16 + uVar34 * 8;
  pbVar32 = pbVar33 + uVar34;
  uVar34 = 0;
  iVar25 = local_84;
  goto switchD_10065d5b8_caseD_1c;
LAB_10065ea94:
  uVar34 = 0;
LAB_10065ea98:
  uVar16 = (uint)uVar17;
  iVar25 = local_84;
  goto switchD_10065d5b8_caseD_1c;
}




undefined8 FUN_10065ec7c(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x38);
  pvVar3 = *(void **)(lVar6 + 0x40);
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)(**(code **)(param_1 + 0x40))
                               (*(undefined8 *)(param_1 + 0x50),
                                1 << (ulong)(*(uint *)(lVar6 + 0x30) & 0x1f),1);
    *(void **)(lVar6 + 0x40) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      return 1;
    }
  }
  uVar4 = *(uint *)(lVar6 + 0x34);
  if (uVar4 == 0) {
    uVar4 = 1 << (ulong)(*(uint *)(lVar6 + 0x30) & 0x1f);
    *(undefined8 *)(lVar6 + 0x38) = 0;
    *(uint *)(lVar6 + 0x34) = uVar4;
  }
  if (param_3 < uVar4) {
    uVar4 = uVar4 - *(uint *)(lVar6 + 0x3c);
    uVar1 = param_3;
    if (uVar4 <= param_3) {
      uVar1 = uVar4;
    }
    _memcpy((void *)((long)pvVar3 + (ulong)*(uint *)(lVar6 + 0x3c)),
            (void *)(param_2 - (ulong)param_3),(ulong)uVar1);
    param_3 = param_3 - uVar1;
    if (param_3 == 0) {
      uVar4 = *(int *)(lVar6 + 0x3c) + uVar1;
      uVar2 = 0;
      if (uVar4 != *(uint *)(lVar6 + 0x34)) {
        uVar2 = uVar4;
      }
      *(uint *)(lVar6 + 0x3c) = uVar2;
      if (*(uint *)(lVar6 + 0x34) <= *(uint *)(lVar6 + 0x38)) {
        return 0;
      }
      iVar5 = *(uint *)(lVar6 + 0x38) + uVar1;
    }
    else {
      _memcpy(*(void **)(lVar6 + 0x40),(void *)(param_2 - (ulong)param_3),(ulong)param_3);
      iVar5 = *(int *)(lVar6 + 0x34);
      *(uint *)(lVar6 + 0x3c) = param_3;
    }
  }
  else {
    _memcpy(pvVar3,(void *)(param_2 - (ulong)uVar4),(ulong)uVar4);
    iVar5 = *(int *)(lVar6 + 0x34);
    *(undefined4 *)(lVar6 + 0x3c) = 0;
  }
  *(int *)(lVar6 + 0x38) = iVar5;
  return 0;
}




undefined8 FUN_10065ed9c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (((param_1 == 0) || (lVar2 = *(long *)(param_1 + 0x38), lVar2 == 0)) ||
     (pcVar3 = *(code **)(param_1 + 0x48), pcVar3 == (code *)0x0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    if (*(long *)(lVar2 + 0x40) != 0) {
      (*pcVar3)(*(undefined8 *)(param_1 + 0x50),*(long *)(lVar2 + 0x40));
      pcVar3 = *(code **)(param_1 + 0x48);
      lVar2 = *(long *)(param_1 + 0x38);
    }
    (*pcVar3)(*(undefined8 *)(param_1 + 0x50),lVar2);
    uVar1 = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return uVar1;
}




void FUN_10065ee00(int param_1,ushort *param_2,uint param_3,long *param_4,uint *param_5,
                  undefined *param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ushort *puVar18;
  int iVar19;
  short sVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  ushort uVar28;
  undefined1 uVar29;
  uint uVar30;
  ushort auStack_b0 [16];
  ushort local_90 [20];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  local_90[4] = 0;
  local_90[5] = 0;
  local_90[6] = 0;
  local_90[7] = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_90[0xc] = 0;
  local_90[0xd] = 0;
  local_90[0xe] = 0;
  local_90[0xf] = 0;
  local_90[8] = 0;
  local_90[9] = 0;
  local_90[10] = 0;
  local_90[0xb] = 0;
  if (param_3 != 0) {
    uVar12 = (ulong)param_3;
    puVar18 = param_2;
    do {
      local_90[*puVar18] = local_90[*puVar18] + 1;
      uVar12 = uVar12 - 1;
      puVar18 = puVar18 + 1;
    } while (uVar12 != 0);
  }
  uVar12 = 0xf;
  do {
    uVar11 = (uint)uVar12;
    if (local_90[uVar12] != 0) {
      uVar24 = uVar11;
      if (*param_5 <= uVar11) {
        uVar24 = *param_5;
      }
      if (uVar11 < 2) {
        uVar16 = 1;
        goto LAB_10065eef0;
      }
      uVar15 = 1;
      goto LAB_10065eed0;
    }
    uVar12 = (ulong)(uVar11 - 1);
  } while (uVar11 - 1 != 0);
  puVar9 = (undefined4 *)*param_4;
  *param_4 = (long)(puVar9 + 1);
  *puVar9 = 0x140;
  puVar9 = (undefined4 *)*param_4;
  *param_4 = (long)(puVar9 + 1);
  *puVar9 = 0x140;
  uVar17 = 1;
LAB_10065eea8:
  uVar7 = 0;
  *param_5 = uVar17;
  goto LAB_10065efe0;
  while (uVar15 = uVar15 + 1, uVar16 = uVar12, uVar12 != uVar15) {
LAB_10065eed0:
    uVar16 = uVar15;
    if (local_90[uVar15] != 0) break;
  }
LAB_10065eef0:
  uVar17 = (uint)uVar16;
  if ((uint)uVar16 <= uVar24) {
    uVar17 = uVar24;
  }
  iVar19 = 1;
  lVar21 = 2;
  do {
    iVar19 = iVar19 * 2 - (uint)*(ushort *)((long)local_90 + lVar21);
    if (iVar19 < 0) {
      uVar7 = 0xffffffff;
      goto LAB_10065efe0;
    }
    lVar21 = lVar21 + 2;
  } while (lVar21 != 0x20);
  if ((iVar19 < 1) || ((uVar7 = 0xffffffff, param_1 != 0 && (uVar11 == 1)))) {
    lVar21 = 0;
    sVar20 = 0;
    auStack_b0[1] = 0;
    do {
      sVar20 = *(short *)(((ulong)local_90 | 2) + lVar21) + sVar20;
      *(short *)((long)auStack_b0 + lVar21 + 4) = sVar20;
      lVar21 = lVar21 + 2;
    } while (lVar21 != 0x1c);
    if (param_3 != 0) {
      uVar12 = 0;
      do {
        uVar15 = (ulong)param_2[uVar12];
        if (uVar15 != 0) {
          uVar28 = auStack_b0[uVar15];
          auStack_b0[uVar15] = uVar28 + 1;
          *(short *)(param_6 + (ulong)uVar28 * 2) = (short)uVar12;
        }
        uVar12 = uVar12 + 1;
      } while (param_3 != uVar12);
    }
    if (param_1 == 0) {
      bVar6 = false;
      bVar5 = 0;
      iVar19 = 0x13;
      puVar22 = param_6;
      puVar23 = param_6;
LAB_10065f068:
      uVar12 = 0;
      uVar8 = 0;
      uVar24 = 1 << (ulong)(uVar17 & 0x1f);
      uVar4 = uVar24 - 1;
      lVar21 = *param_4;
      uVar13 = uVar17;
      uVar25 = 0;
      uVar26 = 0xffffffff;
      do {
        uVar2 = 1 << (ulong)(uVar13 & 0x1f);
        do {
          uVar13 = (uint)uVar16;
          uVar28 = *(ushort *)(param_6 + uVar12 * 2);
          if ((int)(uint)uVar28 < iVar19) {
            uVar29 = 0;
          }
          else if (iVar19 < (int)(uint)uVar28) {
            uVar29 = puVar22[(ulong)uVar28 * 2];
            uVar28 = *(ushort *)(puVar23 + (ulong)uVar28 * 2);
          }
          else {
            uVar28 = 0;
            uVar29 = 0x60;
          }
          iVar27 = -1 << (ulong)(uVar13 - uVar25 & 0x1f);
          uVar14 = uVar2;
          do {
            puVar1 = (undefined1 *)
                     (lVar21 + (ulong)((uVar8 >> (ulong)(uVar25 & 0x1f)) + iVar27 + uVar14) * 4);
            *puVar1 = uVar29;
            uVar3 = (undefined1)(uVar13 - uVar25);
            puVar1[1] = uVar3;
            *(ushort *)(puVar1 + 2) = uVar28;
            uVar14 = uVar14 + iVar27;
          } while (uVar14 != 0);
          uVar14 = 1 << (ulong)(uVar13 - 1 & 0x1f);
          do {
            uVar30 = uVar14;
            uVar14 = uVar30 >> 1;
          } while ((uVar30 & uVar8) != 0);
          uVar14 = uVar30 - 1 & uVar8;
          uVar8 = 0;
          if (uVar30 != 0) {
            uVar8 = uVar14 + uVar30;
          }
          uVar12 = (ulong)((int)uVar12 + 1);
          uVar28 = local_90[uVar16 & 0xffffffff];
          local_90[uVar16 & 0xffffffff] = uVar28 - 1;
          if ((ushort)(uVar28 - 1) == 0) {
            if (uVar13 == uVar11) {
              if (uVar8 != 0) {
                puVar1 = (undefined1 *)(lVar21 + (ulong)uVar8 * 4);
                *puVar1 = 0x40;
                puVar1[1] = uVar3;
                *(undefined2 *)(puVar1 + 2) = 0;
              }
              *param_4 = *param_4 + (ulong)uVar24 * 4;
              goto LAB_10065eea8;
            }
            uVar16 = (ulong)param_2[*(ushort *)(param_6 + uVar12 * 2)];
          }
          uVar14 = (uint)uVar16;
        } while ((uVar14 <= uVar17) || (uVar30 = uVar8 & uVar4, uVar30 == uVar26));
        uVar26 = uVar17;
        if (uVar25 != 0) {
          uVar26 = uVar25;
        }
        uVar13 = uVar14 - uVar26;
        iVar27 = 1 << (ulong)(uVar13 & 0x1f);
        if (uVar14 < uVar11) {
          uVar13 = uVar11 - uVar26;
          uVar15 = uVar16 & 0xffffffff;
          do {
            if ((int)(iVar27 - (uint)local_90[uVar15]) < 1) {
              uVar13 = (int)uVar15 - uVar26;
              break;
            }
            iVar27 = (iVar27 - (uint)local_90[uVar15]) * 2;
            uVar15 = uVar15 + 1;
          } while ((uint)uVar15 < uVar11);
          iVar27 = 1 << (ulong)(uVar13 & 0x1f);
        }
        uVar24 = iVar27 + uVar24;
        if (((bool)(bVar5 & 0x354 < uVar24)) || ((bool)(bVar6 & 0x250 < uVar24)))
        goto LAB_10065f060;
        lVar21 = lVar21 + (ulong)uVar2 * 4;
        lVar10 = *param_4;
        puVar1 = (undefined1 *)(lVar10 + (ulong)uVar30 * 4);
        *puVar1 = (char)uVar13;
        puVar1[1] = (char)uVar17;
        *(short *)(puVar1 + 2) = (short)((uint)((int)lVar21 - (int)lVar10) >> 2);
        uVar25 = uVar26;
        uVar26 = uVar30;
      } while( true );
    }
    if (param_1 == 1) {
      uVar7 = 1;
      bVar5 = 1;
      if (uVar17 < 10) {
        bVar6 = false;
        iVar19 = 0x100;
        puVar22 = &DAT_1011802c8;
        puVar23 = &DAT_10118028a;
        goto LAB_10065f068;
      }
    }
    else {
      bVar5 = 0;
      iVar19 = -1;
      bVar6 = param_1 == 2;
      puVar22 = &UNK_101180548;
      puVar23 = &UNK_101180508;
      if ((!bVar6) || (uVar17 < 10)) goto LAB_10065f068;
LAB_10065f060:
      uVar7 = 1;
    }
  }
LAB_10065efe0:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar7);
  }
  return;
}




ulong FUN_10065f22c(undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 local_90;
  int local_88;
  undefined8 local_78;
  undefined4 local_70;
  ulong local_68;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_88 = (int)param_4;
  if (((int)((ulong)param_4 >> 0x20) != 0) ||
     (local_70 = (undefined4)*param_2, *param_2 >> 0x20 != 0)) {
    return 0xfffffffb;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_90 = param_3;
  local_78 = param_1;
  uVar2 = FUN_10065d4d4(&local_90,"1.2.8",0x70);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = FUN_10065d4e4(&local_90,4);
  iVar1 = (int)uVar2;
  if (iVar1 == 1) {
    *param_2 = local_68;
    uVar2 = FUN_10065ed9c(&local_90);
    return uVar2;
  }
  FUN_10065ed9c(&local_90);
  if (iVar1 == 2) {
    return 0xfffffffd;
  }
  if (iVar1 != -5) {
    return uVar2;
  }
  uVar3 = 0xfffffffd;
  if (local_88 != 0) {
    uVar3 = 0xfffffffb;
  }
  return (ulong)uVar3;
}




char * FUN_10065f300(void)

{
  return "1.2.8";
}




void FUN_10065f30c(undefined8 param_1,int param_2,int param_3)

{
  _malloc((ulong)(uint)(param_3 * param_2));
  return;
}




void FUN_10065f314(undefined8 param_1,void *param_2)

{
  _free(param_2);
  return;
}




void FUN_10065f31c(undefined8 param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    return;
  }
  FUN_10065f328();
  return;
}




void FUN_10065f328(void)

{
  operator_new(0x9ff0);
  DAT_101ea5990 = FUN_1006602ec();
  FUN_1004e4e60(&DAT_101dbd600,1,"DispatchQueue_FogOfWar");
  FUN_1004e55c8(&DAT_101dbd600);
  return;
}




void FUN_10065f374(void)

{
  if (DAT_101ea5990 != 0) {
    FUN_10065f388();
    return;
  }
  return;
}




void FUN_10065f388(void)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_1004e4ecc(&DAT_101dbd600);
  if (iVar1 != 0) {
    FUN_1004e51fc(&DAT_101dbd600);
  }
  iVar1 = FUN_1004e4ecc(&DAT_101dbd600);
  if (iVar1 != 0) {
    FUN_1004e4edc(&DAT_101dbd600);
  }
  if (DAT_101ea5990 != 0) {
    pvVar2 = (void *)FUN_100660400();
    operator_delete(pvVar2);
  }
  DAT_101ea5990 = 0;
  return;
}




void FUN_10065f3f0(void)

{
  return;
}




void FUN_10065f3f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1010b3404(param_1,0);
  if (DAT_101ea5990 != 0) {
    FUN_10065f5f8(DAT_101ea5990,uVar1);
    return;
  }
  return;
}




undefined8 FUN_10065f424(void)

{
  return 1;
}




void FUN_10065f42c(void)

{
  FUN_10065f438(DAT_101ea5990);
  return;
}




void FUN_10065f438(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  long local_d00 [400];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_101444218;
  pvVar7 = (void *)FUN_1010b8000(param_1 + (ulong)*(uint *)(param_1 + 0x9fe0) * 0x50 + 0x9ef0,0);
  iVar5 = FUN_1004e4ecc(&DAT_101dbd600);
  if (iVar5 == 0) {
    uVar6 = FUN_100660024(param_1,local_d00,200);
    if (uVar6 != 0) {
      uVar8 = 0;
      uVar10 = 0;
      plVar9 = local_d00 + 1;
      do {
        lVar1 = plVar9[-1];
        lVar2 = *plVar9;
        uVar4 = *(uint *)(param_1 + 0x9fe4);
        uVar3 = 0;
        if (uVar4 != 0) {
          uVar3 = (uint)uVar8 / uVar4;
        }
        if ((uint)uVar8 - uVar3 * uVar4 == *(int *)(param_1 + 0x9fe8)) {
          if ((*(byte *)(lVar2 + 0x26) & 2) != 0) {
            if (*(long *)(lVar2 + 0x10) != 0) {
              *(undefined4 *)(lVar2 + 8) = 0;
            }
            *(undefined2 *)(lVar2 + 0x24) = *(undefined2 *)(lVar2 + 0x24);
            *(byte *)(lVar2 + 0x26) = *(byte *)(lVar2 + 0x26) & 0xfd;
            FUN_100660484(*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
                          *(float *)(lVar2 + 0x20),*(float *)(lVar2 + 0x20) * 0.5,lVar1 + 0x22d0,
                          *(undefined4 *)(lVar1 + 4),lVar1 + 0x2ed0);
          }
        }
        uVar4 = *(uint *)(lVar2 + 8);
        if (uVar4 != 0) {
          if (uVar4 + uVar10 < 0x3001) {
            _memmove(pvVar7,*(void **)(lVar2 + 0x10),(ulong)(uVar4 * 0x18));
            *(uint *)(lVar1 + 0x9ed4) = *(int *)(lVar1 + 0x9ed4) + uVar4;
            pvVar7 = (void *)((long)pvVar7 + (ulong)uVar4 * 0x18);
            uVar10 = uVar4 + uVar10;
          }
        }
        uVar8 = uVar8 + 1;
        plVar9 = plVar9 + 2;
      } while (uVar6 != uVar8);
    }
  }
  else {
    FUN_10065ff64(param_1,pvVar7);
  }
  uVar10 = *(uint *)(param_1 + 0x9fe4);
  uVar6 = *(int *)(param_1 + 0x9fe8) + 1;
  uVar4 = 0;
  if (uVar10 != 0) {
    uVar4 = uVar6 / uVar10;
  }
  *(uint *)(param_1 + 0x9fe8) = uVar6 - uVar4 * uVar10;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10065f5f8(char *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  byte *pbVar7;
  undefined **local_120 [3];
  byte *local_108;
  byte *pbStack_100;
  undefined4 local_f8;
  byte local_f4;
  undefined **local_f0 [3];
  byte *local_d8;
  char *pcStack_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  int iStack_7c;
  byte local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  iVar3 = FUN_1004e4ecc(&DAT_101dbd600);
  if (iVar3 != 0) {
    FUN_1004e51fc(&DAT_101dbd600);
  }
  if (((*(int *)(param_1 + 0x9ee0) != 0) && (*param_1 != '\0')) && (*(int *)(param_1 + 0x9ed4) != 0)
     ) {
    bVar6 = false;
    lVar4 = 0;
    uVar2 = (*(int *)(param_1 + 0x9fe0) + 1U) % 3;
    do {
      lVar1 = lVar4;
      if (lVar4 < 2) {
        lVar1 = 1;
      }
      pbVar7 = (byte *)(param_1 + lVar4 * 0x1b0 + 0x1b8);
      lVar5 = lVar4;
      while (pbVar7[-0x1a8] == 0) {
        lVar5 = lVar5 + 1;
        pbVar7 = pbVar7 + 0x1b0;
        if (lVar1 + 1 == lVar5) {
          if (!bVar6) goto LAB_10065f810;
          goto LAB_10065f808;
        }
      }
      uStack_88 = *(undefined8 *)(pbVar7 + -0x18);
      local_f0[1] = (undefined **)0xbb23d70a3b23d70a;
      local_f0[0] = (undefined **)0x3b23d70abb23d70a;
      local_d8 = (byte *)0x3b23d70a3b23d70a;
      local_f0[2] = (undefined **)0xbb23d70abb23d70a;
      local_90 = CONCAT44((float)((ulong)local_f0[DAT_101ea5998] >> 0x20) +
                          (float)((ulong)*(undefined8 *)(pbVar7 + -0x20) >> 0x20),
                          SUB84(local_f0[DAT_101ea5998],0) + (float)*(undefined8 *)(pbVar7 + -0x20))
      ;
      DAT_101ea5998 = DAT_101ea5998 + 1 & 3;
      local_d8 = pbVar7 + -200;
      pcStack_d0 = param_1 + (ulong)*(uint *)(param_1 + 0x9fe0) * 0x50 + 0x9ef0;
      iStack_7c = *(int *)(param_1 + 0x9ed4);
      bVar6 = true;
      local_78 = (*pbVar7 >> 1 ^ 0xff) & 1;
      local_f0[0] = &PTR_FUN_1014a84b8;
      uStack_b8 = *(undefined8 *)(pbVar7 + -0x48);
      local_c0 = *(undefined8 *)(pbVar7 + -0x50);
      uStack_a8 = *(undefined8 *)(pbVar7 + -0x38);
      uStack_b0 = *(undefined8 *)(pbVar7 + -0x40);
      uStack_98 = *(undefined8 *)(pbVar7 + -0x28);
      local_a0 = *(undefined8 *)(pbVar7 + -0x30);
      local_80 = 0;
      local_c8 = param_1 + (ulong)uVar2 * 0x50 + 0x9ef0;
      FUN_1010b36cc(param_2,local_f0,0);
      local_108 = pbVar7 + -0x140;
      pbStack_100 = pbVar7 + -0x170;
      local_f4 = ~*pbVar7 & 1;
      local_120[0] = &PTR_FUN_1014a8458;
      local_f8 = 0x3f733333;
      *pbVar7 = *pbVar7 | 1;
      FUN_1010b36cc(param_2,local_120,0);
      lVar4 = lVar5 + 1;
    } while (lVar5 < 1);
LAB_10065f808:
    *(uint *)(param_1 + 0x9fe0) = uVar2;
  }
LAB_10065f810:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




int FUN_10065f84c(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = DAT_101ea5990;
  lVar3 = FUN_10066091c(DAT_101ea5990);
  if (lVar3 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)((ulong)(lVar3 - lVar1) >> 5) * -0x33900339;
  }
  return iVar2;
}




void FUN_10065f894(int param_1)

{
  long lVar1;
  undefined1 *puVar2;
  
  lVar1 = DAT_101ea5990;
  puVar2 = (undefined1 *)(DAT_101ea5990 + (long)param_1 * 0x9ee0);
  FUN_100661aa8(puVar2 + 0x380);
  FUN_100661afc(puVar2 + 0x10);
  *puVar2 = 0;
  *(int *)(lVar1 + 0x9ee0) = *(int *)(lVar1 + 0x9ee0) + 1;
  return;
}




void FUN_10065f8e4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(DAT_101ea5990 + (long)param_1 * 0x9ee0 + 0x9ed0) = param_2;
  return;
}




void FUN_10065f900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10065f918(DAT_101ea5990,param_1,param_2,param_3);
  return;
}




void FUN_10065f918(long param_1,int param_2,float *param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  
  if (1 < param_4) {
    puVar11 = (uint *)(param_1 + (long)param_2 * 0x9ee0 + 4);
    uVar7 = *puVar11;
    if (uVar7 + 1 < 0x81) {
      lVar13 = (long)param_2;
      puVar12 = (uint *)(param_1 + lVar13 * 0x9ee0 + 8);
      uVar14 = *puVar12;
      if (uVar14 + param_4 < 0x401) {
        lVar15 = param_1 + lVar13 * 0x9ee0;
        lVar16 = lVar15 + (ulong)uVar7 * 0x18;
        *(uint *)(lVar16 + 0x22d0) = uVar14;
        fVar17 = *param_3;
        fVar18 = param_3[1];
        *(float *)(lVar16 + 0x22e0) = fVar17;
        *(float *)(lVar16 + 0x22e4) = fVar18;
        fVar20 = *param_3;
        fVar19 = param_3[1];
        *(float *)(lVar16 + 0x22d8) = fVar20;
        *(float *)(lVar16 + 0x22dc) = fVar19;
        pfVar1 = (float *)(lVar15 + (ulong)uVar14 * 0x1c + 0x2ed0);
        pfVar9 = pfVar1;
        if (param_3 < param_3 + (ulong)param_4 * 2) {
          pfVar10 = param_3 + (ulong)param_4 * 2 + -2;
          while( true ) {
            fVar3 = *pfVar10;
            fVar5 = pfVar10[1];
            pfVar2 = pfVar10 + -2;
            if (pfVar10 <= param_3) {
              pfVar2 = param_3 + (ulong)(param_4 - 1) * 2;
            }
            fVar4 = *pfVar2;
            fVar6 = pfVar2[1];
            uVar21 = NEON_fminnm(fVar3,fVar4);
            fVar20 = (float)NEON_fminnm(fVar20,uVar21);
            *(float *)(lVar16 + 0x22d8) = fVar20;
            uVar21 = NEON_fminnm(fVar5,fVar6);
            fVar20 = (float)NEON_fminnm(fVar19,uVar21);
            *(float *)(lVar16 + 0x22dc) = fVar20;
            fVar20 = fVar3;
            if (fVar3 <= fVar4) {
              fVar20 = fVar4;
            }
            if (fVar17 <= fVar20) {
              fVar17 = fVar20;
            }
            *(float *)(lVar16 + 0x22e0) = fVar17;
            fVar17 = fVar5;
            if (fVar5 <= fVar6) {
              fVar17 = fVar6;
            }
            if (fVar18 <= fVar17) {
              fVar18 = fVar17;
            }
            *(float *)(lVar16 + 0x22e4) = fVar18;
            fVar18 = fVar4 - fVar3;
            fVar17 = fVar6 - fVar5;
            fVar20 = SQRT(fVar18 * fVar18 + fVar17 * fVar17);
            if (0.0 < fVar20) {
              *pfVar9 = fVar3;
              pfVar9[1] = fVar5;
              pfVar9[2] = fVar4;
              pfVar9[3] = fVar6;
              pfVar9[4] = -fVar17 / fVar20;
              pfVar9[5] = fVar18 / fVar20;
              pfVar9[6] = -((-fVar17 / fVar20) * fVar3) - (fVar18 / fVar20) * fVar5;
              pfVar9 = pfVar9 + 7;
            }
            if (pfVar10 <= param_3) break;
            fVar20 = *(float *)(lVar16 + 0x22d8);
            fVar19 = *(float *)(lVar16 + 0x22dc);
            fVar17 = *(float *)(lVar16 + 0x22e0);
            fVar18 = *(float *)(lVar16 + 0x22e4);
            pfVar10 = pfVar10 + -2;
          }
          uVar14 = *puVar12;
        }
        iVar8 = (int)((ulong)((long)pfVar9 - (long)pfVar1) >> 2) * -0x49249249;
        *(int *)(param_1 + lVar13 * 0x9ee0 + (ulong)uVar7 * 0x18 + 0x22d4) = iVar8;
        *puVar11 = uVar7 + 1;
        *puVar12 = uVar14 + iVar8;
      }
    }
  }
  return;
}




void FUN_10065fae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10065fb00(DAT_101ea5990,param_1,param_2,param_3);
  return;
}




int FUN_10065fb00(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  
  lVar1 = param_1 + (long)param_2 * 0x9ee0 + 0x10;
  lVar4 = FUN_100660a20(lVar1);
  if (lVar4 == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = FUN_1010b555c(0);
    uVar5 = 0x17;
    if (iVar3 == 0) {
      uVar5 = 1;
    }
    lVar2 = lVar4 + 8;
    FUN_1010b7478(lVar2,4);
    FUN_1010b75c4(lVar2,0,param_3,param_4,1,uVar5,0);
    FUN_1010b7a18(lVar2,0,0,0);
    FUN_1010b7a3c(lVar2,1,1,0);
    FUN_1010b67c0(lVar4 + 0x68,param_3,param_4);
    FUN_1010b685c(lVar4 + 0x68,0,lVar2,0,0);
    lVar2 = lVar4 + 0x38;
    FUN_1010b7478(lVar2,4);
    FUN_1010b75c4(lVar2,0,param_3,param_4,1,uVar5,0);
    FUN_1010b7a18(lVar2,0,0,0);
    FUN_1010b7a3c(lVar2,1,1,0);
    FUN_1010b67c0(lVar4 + 0xe0,param_3,param_4);
    FUN_1010b685c(lVar4 + 0xe0,0,lVar2,0,0);
    iVar3 = (int)((ulong)(lVar4 - lVar1) >> 4) * 0x684bda13;
  }
  return iVar3;
}




void FUN_10065fc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10065fca8(DAT_101ea5990,param_1,param_2,param_3,param_4);
  return;
}




void FUN_10065fca8(long param_1,int param_2,int param_3,undefined8 *param_4,undefined8 *param_5)

{
  long lVar1;
  float fVar2;
  float fVar4;
  ulong uVar3;
  float fVar5;
  float fVar7;
  ulong uVar6;
  int iVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  lVar1 = param_1 + (long)param_2 * 0x9ee0 + (long)param_3 * 0x1b0;
  fVar2 = (float)*param_4;
  fVar5 = (float)*param_5 + fVar2;
  fVar4 = (float)((ulong)*param_4 >> 0x20);
  fVar7 = (float)((ulong)*param_5 >> 0x20) + fVar4;
  iVar8 = -(uint)(fVar5 < fVar2);
  iVar10 = -(uint)(fVar7 < fVar4);
  uVar12 = CONCAT44(fVar4,fVar5);
  uVar3 = CONCAT44(fVar7,fVar2);
  uVar6 = uVar3 ^ (uVar3 ^ uVar12) & CONCAT44(iVar10,iVar8);
  uVar3 = uVar3 ^ (uVar3 ^ uVar12) & ~CONCAT44(iVar10,iVar8);
  fVar2 = (float)uVar3;
  fVar5 = (float)uVar6;
  fVar4 = (float)(uVar3 >> 0x20);
  fVar7 = (float)(uVar6 >> 0x20);
  uVar13 = NEON_fmov(0x3f800000,4);
  fVar9 = (float)uVar13 / (fVar2 - fVar5);
  fVar11 = (float)((ulong)uVar13 >> 0x20) / (fVar4 - fVar7);
  *(float *)(lVar1 + 0x168) = fVar9 + fVar9;
  *(float *)(lVar1 + 0x17c) = fVar11 + fVar11;
  *(undefined8 *)(lVar1 + 0x174) = 0;
  *(undefined8 *)(lVar1 + 0x16c) = 0;
  *(undefined8 *)(lVar1 + 0x188) = 0;
  *(undefined8 *)(lVar1 + 0x180) = 0;
  *(undefined8 *)(lVar1 + 400) = 0xc0000000;
  *(ulong *)(lVar1 + 0x198) = CONCAT44(fVar11 * -(fVar4 + fVar7),fVar9 * -(fVar2 + fVar5));
  *(undefined8 *)(lVar1 + 0x1a0) = 0x3f800000bf800000;
  return;
}




void FUN_10065fd38(int param_1,int param_2,int param_3)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = DAT_101ea5990 + (long)param_1 * 0x9ee0 + (long)param_2 * 0x1b0;
  bVar2 = 2;
  if (param_3 == 0) {
    bVar2 = 0;
  }
  *(byte *)(lVar1 + 0x1b8) = *(byte *)(lVar1 + 0x1b8) & 0xfd | bVar2;
  return;
}




long FUN_10065fd70(int param_1,int param_2)

{
  return DAT_101ea5990 + (long)param_1 * 0x9ee0 + (long)param_2 * 0x1b0 + 0x1a8;
}




long FUN_10065fd90(int param_1,int param_2)

{
  return DAT_101ea5990 + (long)param_1 * 0x9ee0 + (long)param_2 * 0x1b0 + 0x18;
}




int FUN_10065fdb0(int param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = DAT_101ea5990 + (long)param_1 * 0x9ee0 + 0x380;
  lVar3 = FUN_1006609c8(lVar1);
  if (lVar3 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)((ulong)(lVar3 - lVar1) >> 3) * -0x33333333;
  }
  return iVar2;
}




void FUN_10065fe04(undefined8 param_1,undefined8 param_2)

{
  FUN_10065fe18(DAT_101ea5990,param_1,param_2);
  return;
}




void FUN_10065fe18(long param_1,int param_2,int param_3)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar1 = param_1 + (long)param_2 * 0x9ee0 + 0x380;
  pvVar2 = *(void **)(lVar1 + (long)param_3 * 0x28 + 0x10);
  if (pvVar2 != (void *)0x0) {
    lVar3 = lVar1 + (long)param_3 * 0x28;
    operator_delete__(pvVar2);
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
  }
  *(undefined1 *)(lVar1 + (long)param_3 * 0x28) = 0;
  param_1 = param_1 + (long)param_2 * 0x9ee0;
  *(int *)(param_1 + 0x22c0) = *(int *)(param_1 + 0x22c0) + 1;
  return;
}




void FUN_10065fe98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10065feb8(DAT_101ea5990,param_1,param_2,param_3,param_4,param_5);
  return;
}




void FUN_10065feb8(float param_1,long param_2,int param_3,int param_4,float *param_5,int param_6,
                  uint param_7)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  
  lVar2 = param_2 + (long)param_3 * 0x9ee0 + 0x380;
  lVar3 = lVar2 + (long)param_4 * 0x28;
  pfVar4 = (float *)(lVar3 + 0x18);
  fVar6 = *(float *)(lVar3 + 0x1c);
  lVar3 = (long)param_4;
  bVar1 = false;
  if ((*pfVar4 == *param_5) && (bVar1 = false, !NAN(fVar6) && !NAN(param_5[1]))) {
    bVar1 = fVar6 == param_5[1];
  }
  if ((((!bVar1) || (*(float *)(lVar2 + lVar3 * 0x28 + 0x20) != param_1)) ||
      (lVar5 = lVar2 + lVar3 * 0x28, param_6 != *(short *)(lVar5 + 0x24))) ||
     ((((*(byte *)(lVar5 + 0x26) & 1) == 0 ^ param_7) & 1) == 0)) {
    *(undefined8 *)pfVar4 = *(undefined8 *)param_5;
    lVar2 = lVar2 + lVar3 * 0x28;
    *(float *)(lVar2 + 0x20) = param_1;
    *(short *)(lVar2 + 0x24) = (short)param_6;
    *(byte *)(lVar2 + 0x26) =
         param_7 != 0 | (byte)(((uint)(*(byte *)(lVar2 + 0x26) >> 2) << 0x12) >> 0x10) | 2;
  }
  return;
}




void FUN_10065ff64(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_1004e4bd4();
  DAT_101dbe3c0 = FUN_100660024(param_1,&DAT_101dbd740,200);
  DAT_101dbe3c4 = 0;
  DAT_101dbe3c8 = param_2;
  DAT_101dbe3d0 = param_1;
  if (DAT_101dbe3c0 <= uVar1) {
    uVar1 = DAT_101dbe3c0;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    FUN_1004e57e0(&DAT_101dbd600,FUN_100660090,&DAT_101dbd740);
  }
  FUN_1004e586c(&DAT_101dbd600,0,0);
  FUN_1004e57e0(&DAT_101dbd600,FUN_1006601c0,&DAT_101dbd740);
  return;
}

