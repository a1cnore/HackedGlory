// functions/01991 — 20 functions
#include "libGameKindred.h"




void thunk_FUN_01991574(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_01991284(float param_1,long param_2,uint param_3)

{
  ulong uVar1;
  float *pfVar2;
  
  if (param_3 != 0) {
    uVar1 = (ulong)param_3;
    pfVar2 = (float *)(param_2 + 0x18);
    do {
      pfVar2[1] = 0.0;
      pfVar2[5] = 0.0;
      *(ulong *)(pfVar2 + -4) =
           CONCAT44(param_1 * (float)((ulong)*(undefined8 *)(pfVar2 + -4) >> 0x20),
                    param_1 * (float)*(undefined8 *)(pfVar2 + -4));
      *(ulong *)(pfVar2 + -6) =
           CONCAT44(param_1 * (float)((ulong)*(undefined8 *)(pfVar2 + -6) >> 0x20),
                    param_1 * (float)*(undefined8 *)(pfVar2 + -6));
      pfVar2[-2] = pfVar2[-2] * param_1;
      pfVar2[-1] = pfVar2[-1] * param_1;
      *pfVar2 = *pfVar2 * param_1;
      uVar1 = uVar1 - 1;
      pfVar2[2] = pfVar2[2] * param_1;
      pfVar2[3] = pfVar2[3] * param_1;
      pfVar2[4] = pfVar2[4] * param_1;
      pfVar2 = pfVar2 + 0xc;
    } while (uVar1 != 0);
  }
  return;
}




void FUN_019912f4(float param_1,long param_2,long param_3,uint param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  
  if (param_4 != 0) {
    uVar1 = (ulong)param_4;
    puVar2 = (undefined8 *)(param_2 + 0x1c);
    pfVar3 = (float *)(param_3 + 0x1c);
    do {
      fVar6 = pfVar3[-6];
      fVar7 = pfVar3[-5];
      uVar9 = *(undefined8 *)(pfVar3 + -4);
      fVar8 = (float)uVar9;
      fVar10 = (float)puVar2[-2];
      fVar5 = -param_1;
      if (0.0 <= *(float *)((long)puVar2 + -0x1c) * pfVar3[-7] + *(float *)(puVar2 + -3) * fVar6 +
                 *(float *)((long)puVar2 + -0x14) * fVar7 + fVar10 * fVar8) {
        fVar5 = param_1;
      }
      *(float *)((long)puVar2 + -0x1c) = *(float *)((long)puVar2 + -0x1c) + pfVar3[-7] * fVar5;
      *(float *)(puVar2 + -3) = *(float *)(puVar2 + -3) + fVar6 * fVar5;
      *(float *)((long)puVar2 + -0x14) = *(float *)((long)puVar2 + -0x14) + fVar7 * fVar5;
      uVar4 = *(undefined8 *)(pfVar3 + -2);
      fVar6 = *pfVar3;
      puVar2[-2] = CONCAT44((float)((ulong)puVar2[-2] >> 0x20) +
                            (float)((ulong)uVar9 >> 0x20) * param_1,fVar10 + fVar8 * fVar5);
      puVar2[-1] = CONCAT44(param_1 * (float)((ulong)uVar4 >> 0x20) +
                            (float)((ulong)puVar2[-1] >> 0x20),
                            param_1 * (float)uVar4 + (float)puVar2[-1]);
      uVar9 = *(undefined8 *)(pfVar3 + 2);
      *puVar2 = CONCAT44(param_1 * pfVar3[1] + (float)((ulong)*puVar2 >> 0x20),
                         param_1 * fVar6 + (float)*puVar2);
      fVar5 = pfVar3[4];
      puVar2[1] = CONCAT44(param_1 * (float)((ulong)uVar9 >> 0x20) +
                           (float)((ulong)puVar2[1] >> 0x20),
                           param_1 * (float)uVar9 + (float)puVar2[1]);
      uVar1 = uVar1 - 1;
      *(float *)(puVar2 + 2) = fVar5 * param_1 + *(float *)(puVar2 + 2);
      puVar2 = puVar2 + 6;
      pfVar3 = pfVar3 + 0xc;
    } while (uVar1 != 0);
  }
  return;
}




void FUN_019913d8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0x3f800000;
  param_1[3] = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  return;
}




void FUN_01991400(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0x3f800000;
  param_1[3] = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  return;
}




void FUN_01991428(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0x3f800000;
  param_1[3] = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  return;
}




undefined4 FUN_01991450(long *param_1)

{
  return *(undefined4 *)(*param_1 + 8);
}




void FUN_0199145c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0xbf80000000000000;
  param_1[4] = 0;
  return;
}




void FUN_01991478(void)

{
  return;
}




void FUN_0199147c(undefined4 param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_2 + 4) = param_1;
  *(undefined8 *)(param_2 + 0x10) = param_3;
  *(undefined4 *)(param_2 + 0x18) = param_4;
  switch(param_5) {
  case 0:
    *(code **)(param_2 + 0x20) = FUN_019947dc;
    *(code **)(param_2 + 0x28) = FUN_019949b4;
    *(code **)(param_2 + 0x30) = FUN_01994d88;
    uVar1 = FUN_01995118(param_3);
    break;
  case 1:
    *(code **)(param_2 + 0x20) = FUN_01992728;
    *(code **)(param_2 + 0x28) = FUN_01992e24;
    *(code **)(param_2 + 0x30) = FUN_0199324c;
    uVar1 = FUN_019935dc(param_3);
    break;
  case 2:
    *(code **)(param_2 + 0x20) = FUN_0199158c;
    *(code **)(param_2 + 0x28) = FUN_01991ee0;
    *(code **)(param_2 + 0x30) = FUN_01992390;
    uVar1 = FUN_01992720(param_3);
    break;
  case 3:
    *(code **)(param_2 + 0x20) = FUN_019935e4;
    *(code **)(param_2 + 0x28) = FUN_01993e70;
    *(code **)(param_2 + 0x30) = FUN_01994444;
    uVar1 = FUN_019947d4(param_3);
    break;
  default:
    goto switchD_019914b4_default;
  }
  *(undefined4 *)(param_2 + 8) = uVar1;
switchD_019914b4_default:
  return;
}




void FUN_01991574(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_0199157c(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}




undefined4 FUN_01991584(undefined4 *param_1)

{
  return *param_1;
}




void FUN_0199158c(undefined8 param_1,float *param_2,uint param_3,undefined8 *param_4)

{
  float fVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 auStack_e8 [48];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  fVar12 = *param_2;
  fVar1 = param_2[1];
  uVar2 = (ulong)(uint)fVar1;
  uVar7 = (ulong)(uint)param_2[2];
  fVar10 = (float)(int)(fVar12 * (float)param_1);
  if ((param_3 & 1) == 0) {
    if ((float)((int)fVar1 - 1) <= fVar10) {
      fVar10 = (float)((int)fVar1 - 1);
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    uVar4 = (uint)fVar10;
  }
  else {
    uVar4 = 0;
    if (fVar1 != 0.0) {
      uVar4 = (uint)(int)fVar10 / (uint)fVar1;
    }
    uVar4 = (int)fVar10 - uVar4 * (int)fVar1;
  }
  if (param_2[2] != 0.0) {
    lVar5 = (long)(param_2 + 4) + uVar2 * 4 * uVar7 + uVar7 * 4;
    lVar9 = lVar5 + (ulong)(uint)param_2[3] * 4;
    pfVar6 = param_2 + (ulong)uVar4 + uVar7 + 4;
    pfVar8 = param_2 + 4;
    do {
      fVar1 = *pfVar6;
      fVar10 = *pfVar8;
      uVar11 = FUN_019917dc(param_1,(float)uVar2 / fVar12,lVar5,param_3 & 1,fVar10,
                            (ulong)(uint)fVar1);
      uVar4 = 0;
      if (fVar10 != 0.0) {
        uVar4 = ((int)fVar1 + 1U) / (uint)fVar10;
      }
      FUN_0199183c(&local_b8,lVar9 + (ulong)(uint)fVar1 * 0x14);
      FUN_0199183c(auStack_e8,lVar9 + (ulong)(((int)fVar1 + 1U) - uVar4 * (int)fVar10) * 0x14);
      if ((float)uVar11 <= 0.0) {
        param_4[5] = uStack_90;
        param_4[4] = local_98;
        param_4[3] = uStack_a0;
        param_4[2] = local_a8;
        param_4[1] = uStack_b0;
        *param_4 = local_b8;
      }
      else {
        FUN_01991d18(uVar11,param_4,&local_b8,auStack_e8);
      }
      param_4 = param_4 + 6;
      uVar7 = uVar7 - 1;
      pfVar6 = pfVar6 + uVar2;
      lVar5 = lVar5 + (ulong)(uint)*pfVar8 * 4;
      lVar9 = lVar9 + (ulong)(uint)*pfVar8 * 0x14;
      pfVar8 = pfVar8 + 1;
    } while (uVar7 != 0);
  }
  if (*(long *)(lVar3 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_01991734(undefined4 *param_1,undefined4 *param_2,uint *param_3,uint *param_4,long *param_5,
                 uint *param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  puVar1 = param_1 + 4;
  puVar8 = (undefined4 *)((long)(puVar1 + uVar4) + (ulong)uVar3 * 4 * (ulong)uVar4);
  puVar2 = puVar8 + (uint)param_1[3];
  puVar6 = puVar2 + (ulong)(uint)param_1[3] * 5;
  puVar7 = puVar6 + 1;
  uVar5 = *puVar6;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar3;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar4;
  }
  if (param_5 != (long *)0x0) {
    *param_5 = (long)puVar1;
    param_5[1] = (long)(puVar1 + uVar4);
    param_5[2] = (long)puVar8;
    param_5[3] = (long)puVar2;
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = uVar5;
    *(uint **)(param_6 + 2) = puVar7;
    *(uint **)(param_6 + 4) = puVar7 + uVar3;
    *(uint **)(param_6 + 6) = puVar7 + uVar3 + uVar5;
  }
  return;
}




int FUN_019917a0(float param_1,float param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  float fVar2;
  
  fVar2 = (float)(int)(param_1 * param_2);
  if ((param_3 & 1) != 0) {
    uVar1 = 0;
    if (param_4 != 0) {
      uVar1 = (uint)(int)fVar2 / param_4;
    }
    return (int)fVar2 - uVar1 * param_4;
  }
  if ((float)(param_4 - 1) <= fVar2) {
    fVar2 = (float)(param_4 - 1);
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return (int)fVar2;
}




float FUN_019917dc(float param_1,float param_2,long param_3,uint param_4,int param_5,uint param_6)

{
  float fVar1;
  
  if ((param_5 - 1U != param_6) || (fVar1 = 0.0, (param_4 & 1) != 0)) {
    fVar1 = *(float *)(param_3 + (ulong)param_6 * 4);
    if (param_5 - 1U == param_6) {
      fVar1 = (float)NEON_fminnm((param_1 - fVar1) / (param_2 - fVar1),0x3f800000);
    }
    else {
      fVar1 = (float)NEON_fminnm((param_1 - fVar1) /
                                 (*(float *)(param_3 + (ulong)(param_6 + 1) * 4) - fVar1),0x3f800000
                                );
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
  }
  return fVar1;
}




void FUN_0199183c(float *param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  uVar1 = *param_2;
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar4 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar4 = -1.0;
    }
    fVar4 = fVar4 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  *param_1 = fVar4;
  uVar1 = param_2[1];
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar4 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar4 = -1.0;
    }
    fVar4 = fVar4 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  param_1[1] = fVar4;
  uVar1 = param_2[2];
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar4 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar4 = -1.0;
    }
    fVar4 = fVar4 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  param_1[2] = fVar4;
  uVar1 = param_2[3];
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar4 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar4 = -1.0;
    }
    fVar4 = fVar4 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  param_1[3] = fVar4;
  uVar1 = param_2[4];
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar4 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar4 = -1.0;
    }
    fVar4 = fVar4 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  param_1[4] = fVar4;
  uVar1 = param_2[5];
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar4 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar4 = -1.0;
    }
    fVar4 = fVar4 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  param_1[5] = fVar4;
  uVar1 = param_2[6];
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar4 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar4 = -1.0;
    }
    fVar4 = fVar4 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  param_1[6] = fVar4;
  param_1[7] = 0.0;
  uVar1 = param_2[7];
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar4 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar4 = -1.0;
    }
    fVar4 = fVar4 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  param_1[8] = fVar4;
  uVar1 = param_2[8];
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar4 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar4 = -1.0;
    }
    fVar4 = fVar4 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  param_1[9] = fVar4;
  uVar1 = param_2[9];
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar4 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar4 = -1.0;
    }
    fVar4 = fVar4 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  param_1[10] = fVar4;
  param_1[0xb] = 0.0;
  return;
}




void FUN_01991d18(float param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = param_3[3];
  fVar8 = param_4[3];
  fVar9 = 1.0 - param_1;
  fVar2 = -param_1;
  if (0.0 <= *param_3 * *param_4 + param_3[1] * param_4[1] + param_3[2] * param_4[2] + fVar7 * fVar8
     ) {
    fVar2 = param_1;
  }
  fVar1 = fVar9 * *param_3 + *param_4 * fVar2;
  fVar5 = fVar9 * param_3[1] + param_4[1] * fVar2;
  fVar6 = fVar9 * param_3[2] + param_4[2] * fVar2;
  *param_2 = fVar1;
  param_2[1] = fVar5;
  fVar8 = fVar9 * fVar7 + fVar8 * fVar2;
  fVar7 = fVar8 * fVar8 + fVar6 * fVar6 + fVar1 * fVar1 + fVar5 * fVar5;
  fVar2 = SQRT(fVar7);
  param_2[2] = fVar6;
  param_2[3] = fVar8;
  if (NAN(fVar2)) {
    fVar2 = sqrtf(fVar7);
  }
  if (fVar2 <= 1.1920929e-07) {
    uVar4 = 0x3f80000000000000;
    uVar3 = 0;
  }
  else {
    fVar2 = 1.0 / fVar2;
    uVar3 = CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar2,
                     (float)*(undefined8 *)param_2 * fVar2);
    uVar4 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20) * fVar2,
                     (float)*(undefined8 *)(param_2 + 2) * fVar2);
  }
  *(undefined8 *)(param_2 + 2) = uVar4;
  *(undefined8 *)param_2 = uVar3;
  param_2[4] = fVar9 * param_3[4] + param_4[4] * param_1;
  param_2[5] = fVar9 * param_3[5] + param_4[5] * param_1;
  param_2[6] = fVar9 * param_3[6] + param_4[6] * param_1;
  param_2[7] = fVar9 * param_3[7] + param_4[7] * param_1;
  param_2[8] = fVar9 * param_3[8] + param_4[8] * param_1;
  param_2[9] = fVar9 * param_3[9] + param_4[9] * param_1;
  fVar2 = param_3[10];
  fVar7 = param_4[10];
  param_2[7] = 0.0;
  param_2[0xb] = 0.0;
  param_2[10] = fVar9 * fVar2 + fVar7 * param_1;
  return;
}




void FUN_01991ee0(undefined8 param_1,float *param_2,uint param_3,long param_4,uint param_5,
                 long param_6)

{
  float fVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  float *pfVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined1 auStack_f0 [48];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  
  lVar7 = tpidr_el0;
  local_90 = *(long *)(lVar7 + 0x28);
  fVar17 = *param_2;
  fVar1 = param_2[1];
  uVar2 = (ulong)(uint)param_2[2];
  fVar3 = param_2[3];
  fVar15 = (float)(int)(fVar17 * (float)param_1);
  if ((param_3 & 1) == 0) {
    if ((float)((int)fVar1 - 1) <= fVar15) {
      fVar15 = (float)((int)fVar1 - 1);
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    uVar10 = (uint)fVar15;
  }
  else {
    uVar10 = 0;
    if (fVar1 != 0.0) {
      uVar10 = (uint)(int)fVar15 / (uint)fVar1;
    }
    uVar10 = (int)fVar15 - uVar10 * (int)fVar1;
  }
  if (param_5 != 0) {
    param_2 = param_2 + 4;
    lVar12 = (uint)fVar1 * uVar2;
    uVar13 = 0;
    do {
      uVar5 = *(ushort *)(param_4 + uVar13 * 2);
      if (uVar5 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        uVar9 = (ulong)uVar5;
        pfVar11 = param_2;
        do {
          uVar9 = uVar9 - 1;
          uVar14 = (int)*pfVar11 + uVar14;
          pfVar11 = pfVar11 + 1;
        } while (uVar9 != 0);
      }
      fVar15 = param_2[uVar2 + (ulong)uVar10 + (ulong)((int)fVar1 * (uint)uVar5)];
      fVar4 = param_2[uVar5];
      uVar16 = FUN_019917dc(param_1,(float)(uint)fVar1 / fVar17,
                            param_2 + uVar2 + lVar12 + (ulong)uVar14,param_3 & 1,fVar4,
                            (ulong)(uint)fVar15);
      uVar6 = 0;
      if (fVar4 != 0.0) {
        uVar6 = ((int)fVar15 + 1U) / (uint)fVar4;
      }
      FUN_0199183c(&local_c0,
                   param_2 + uVar2 + lVar12 + (ulong)(uint)fVar3 +
                                              (ulong)uVar14 * 5 + (ulong)(uint)fVar15 * 5);
      FUN_0199183c(auStack_f0,
                   param_2 + uVar2 + lVar12 + (ulong)(uint)fVar3 +
                                              (ulong)uVar14 * 5 +
                                              (ulong)(((int)fVar15 + 1U) - uVar6 * (int)fVar4) * 5);
      puVar8 = (undefined8 *)(param_6 + uVar13 * 0x30);
      if ((float)uVar16 <= 0.0) {
        puVar8[5] = uStack_98;
        puVar8[4] = local_a0;
        puVar8[3] = uStack_a8;
        puVar8[2] = local_b0;
        puVar8[1] = uStack_b8;
        *puVar8 = local_c0;
      }
      else {
        FUN_01991d18(uVar16,puVar8,&local_c0,auStack_f0);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != param_5);
  }
  if (*(long *)(lVar7 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

