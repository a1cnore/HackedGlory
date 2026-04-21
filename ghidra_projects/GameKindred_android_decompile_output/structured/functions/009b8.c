// functions/009b8 — 46 functions
#include "libGameKindred.h"




void FUN_009b8018(float param_1,undefined4 param_2,long param_3,uint param_4)

{
  if (((*(float *)(param_3 + 0x38) != param_1) &&
      (*(float *)(param_3 + 0x38) = param_1, (param_4 & 1) != 0)) &&
     (*(int *)(param_3 + 0x470) == 2)) {
    *(float *)(param_3 + 0xdc) = param_1;
    *(undefined4 *)(param_3 + 0xe8) = 0;
    *(undefined4 *)(param_3 + 0x470) = 2;
    *(undefined8 *)(param_3 + 0xd4) = *(undefined8 *)(param_3 + 0x58);
    *(undefined4 *)(param_3 + 0xbc) = *(undefined4 *)(param_3 + 0x9c);
    *(undefined8 *)(param_3 + 0xb4) = *(undefined8 *)(param_3 + 0x94);
    *(undefined4 *)(param_3 + 0xec) = param_2;
    FUN_009b7630();
    return;
  }
  return;
}




long FUN_009b806c(long param_1)

{
  if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) != 0) {
    FUN_009b78f4(param_1);
  }
  return param_1 + 0x310;
}




long FUN_009b809c(long param_1)

{
  if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) != 0) {
    FUN_009b78f4(param_1);
  }
  return param_1 + 0x18c;
}




long FUN_009b80cc(long param_1)

{
  if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) != 0) {
    FUN_009b78f4(param_1);
  }
  return param_1 + 0x1cc;
}




long FUN_009b80fc(long param_1)

{
  if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) != 0) {
    FUN_009b78f4(param_1);
  }
  return param_1 + 0x20c;
}




long FUN_009b812c(long param_1)

{
  return param_1 + 0x80;
}




long FUN_009b8134(long param_1)

{
  return param_1 + 0x94;
}




long FUN_009b813c(long param_1)

{
  return param_1 + 0xd4;
}




float FUN_009b8144(long param_1)

{
  return *(float *)(param_1 + 0x8c) + *(float *)(param_1 + 0x80);
}




long FUN_009b8164(long param_1)

{
  if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) != 0) {
    FUN_009b78f4(param_1);
  }
  return param_1 + 0x32c;
}




long FUN_009b8194(long param_1)

{
  if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) != 0) {
    FUN_009b78f4(param_1);
  }
  return param_1 + 800;
}




undefined4 FUN_009b81c4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x9c);
}




undefined4 FUN_009b81cc(long param_1)

{
  return *(undefined4 *)(param_1 + 0xdc);
}




undefined4 FUN_009b81d4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x470);
}




void FUN_009b81dc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf0) = param_2;
  *(undefined4 *)(param_1 + 0xf4) = param_2;
  return;
}




void FUN_009b81e4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf4) = param_2;
  return;
}




long FUN_009b81ec(long param_1)

{
  return param_1 + 0x250;
}




void FUN_009b81f4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x2f8) = param_2;
  return;
}




void FUN_009b81fc(long param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 2;
  *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x414) = *param_2;
  uVar1 = *(undefined4 *)(param_1 + 0xf0);
  *(int *)(param_1 + 0xf0) = param_3;
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  if (param_3 - 1U < 4) {
    uVar2 = *(undefined4 *)(&DAT_01b983a0 + (long)(int)(param_3 - 1U) * 4);
  }
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  return;
}




void FUN_009b8248(long param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x420) = *param_2;
  return;
}




void FUN_009b825c(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x42c) = *param_2;
  return;
}




void FUN_009b826c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x434) = param_1;
  return;
}




void FUN_009b8274(float param_1,float param_2,float param_3,long param_4,long param_5,uint param_6)

{
  long lVar1;
  float fVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined1 local_58 [8];
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(long *)(param_4 + 0x438) = param_5 + 0x28;
  uVar4 = *(undefined4 *)(param_5 + 0x30);
  *(float *)(param_4 + 0x420) = param_1;
  *(float *)(param_4 + 0x424) = param_2;
  *(undefined4 *)(param_4 + 0x440) = uVar4;
  *(float *)(param_4 + 0x428) = param_3;
  FUN_00d581bc(param_5,local_58);
  bVar3 = *(byte *)(param_4 + 0x7c);
  fVar2 = 0.0;
  if ((param_6 & 1) == 0) {
    fVar2 = 100.0;
  }
  if ((bVar3 & 1) == 0) {
    uVar4 = 0x44480000;
    bVar3 = bVar3 | 1;
    *(byte *)(param_4 + 0x7c) = bVar3;
  }
  else {
    uVar4 = *(undefined4 *)(param_4 + 0xdc);
  }
  *(undefined4 *)(param_4 + 0xe0) = 0;
  *(byte *)(param_4 + 0x7c) = bVar3 | 6;
  *(undefined8 *)(param_4 + 0xa8) = *(undefined8 *)(param_4 + 0x88);
  *(undefined8 *)(param_4 + 0xa0) = *(undefined8 *)(param_4 + 0x80);
  *(undefined8 *)(param_4 + 0xb8) = *(undefined8 *)(param_4 + 0x98);
  *(undefined8 *)(param_4 + 0xb0) = *(undefined8 *)(param_4 + 0x90);
  *(ulong *)(param_4 + 0xc0) = CONCAT44(param_2 + local_58._4_4_,param_1 + local_58._0_4_);
  *(float *)(param_4 + 200) = param_3 + local_50;
  *(float *)(param_4 + 0xe4) = fVar2;
  if (fVar2 <= 0.0) {
    *(undefined4 *)(param_4 + 0x88) = *(undefined4 *)(param_4 + 200);
    *(undefined8 *)(param_4 + 0x80) = *(undefined8 *)(param_4 + 0xc0);
    *(undefined4 *)(param_4 + 0xe4) = 0;
  }
  FUN_009b7630(param_4);
  FUN_009b83b4(*(undefined4 *)(param_4 + 0x50),*(undefined4 *)(param_4 + 0x54),
               *(undefined4 *)(param_4 + 0xd4),*(undefined4 *)(param_4 + 0xd8),uVar4,fVar2,param_4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b83b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,float param_6,long param_7)

{
  *(undefined4 *)(param_7 + 0xcc) = param_1;
  *(undefined4 *)(param_7 + 0xd0) = param_2;
  *(undefined4 *)(param_7 + 0xd4) = param_3;
  *(undefined4 *)(param_7 + 0xd8) = param_4;
  *(undefined4 *)(param_7 + 0xdc) = param_5;
  *(undefined4 *)(param_7 + 0xe8) = 0;
  *(undefined8 *)(param_7 + 0xa8) = *(undefined8 *)(param_7 + 0x88);
  *(undefined8 *)(param_7 + 0xa0) = *(undefined8 *)(param_7 + 0x80);
  *(undefined8 *)(param_7 + 0xb8) = *(undefined8 *)(param_7 + 0x98);
  *(undefined8 *)(param_7 + 0xb0) = *(undefined8 *)(param_7 + 0x90);
  *(byte *)(param_7 + 0x7c) = *(byte *)(param_7 + 0x7c) | 6;
  *(float *)(param_7 + 0xec) = param_6;
  if (param_6 <= 0.0) {
    *(undefined4 *)(param_7 + 0x9c) = param_5;
    *(undefined4 *)(param_7 + 0xec) = 0;
    *(undefined8 *)(param_7 + 0x94) = *(undefined8 *)(param_7 + 0xd4);
    *(undefined8 *)(param_7 + 0x8c) = *(undefined8 *)(param_7 + 0xcc);
  }
  FUN_009b7630();
  return;
}




void FUN_009b83f8(long param_1)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(param_1 + 0x438);
  bVar2 = false;
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x440) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      bVar2 = false;
      if (lVar4 != 0) {
        FUN_00d55794(lVar4,auStack_38,0);
        FUN_0091ef94(&local_48,auStack_38,0);
        FUN_00f0025c(&local_4c,&local_50);
        if (local_48 <= 0.0) {
          bVar2 = false;
        }
        else {
          bVar2 = false;
          if ((local_48 < local_4c) && (bVar2 = false, 0.0 < local_44)) {
            bVar2 = local_44 < local_50;
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x438) = 0;
      bVar2 = false;
      *(undefined4 *)(param_1 + 0x440) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




void FUN_009b84e8(long param_1,long param_2,uint param_3)

{
  *(long *)(param_1 + 0x448) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_2 + 0x30);
  if ((param_3 & 1) != 0) {
    *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xef;
  }
  return;
}




void FUN_009b850c(long param_1)

{
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xef;
  return;
}




void FUN_009b851c(long param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x458) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x460) = uVar1;
  if ((param_3 & 1) != 0) {
    *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xef;
  }
  return;
}




void FUN_009b8540(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_03214ce8;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x450) = uVar1;
  return;
}




void FUN_009b8558(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_03214ce8;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined4 *)(param_1 + 0x460) = uVar1;
  return;
}




void FUN_009b8570(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if ((*(byte *)(param_1 + 0x7c) >> 4 & 1) == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x414);
    *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 0x10;
    uVar2 = FUN_009b7140(param_1,puVar1);
    if ((uVar2 & 1) != 0) {
      *puVar1 = CONCAT44((float)((ulong)*puVar1 >> 0x20) +
                         (float)((ulong)*(undefined8 *)(param_1 + 0x420) >> 0x20),
                         (float)*puVar1 + (float)*(undefined8 *)(param_1 + 0x420));
      *(float *)(param_1 + 0x41c) = *(float *)(param_1 + 0x41c) + *(float *)(param_1 + 0x428);
    }
  }
  return;
}




bool FUN_009b85d0(long param_1)

{
  return *(float *)(param_1 + 0x9c) < *(float *)(param_1 + 0x30);
}




void FUN_009b85e4(float param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float __x;
  
  iVar1 = rand();
  lVar2 = 0;
  __x = ((float)iVar1 * 4.656613e-10 * 360.0 + 0.0) * 0.017453292;
  do {
    fVar3 = cosf(__x);
    *(float *)(param_4 + lVar2 + 0xf8) = fVar3 * param_1;
    fVar3 = sinf(__x);
    *(float *)(param_4 + lVar2 + 0xfc) = fVar3 * param_1;
    iVar1 = rand();
    lVar2 = lVar2 + 8;
    __x = __x + ((float)iVar1 * 4.656613e-10 * 180.0 + 45.0) * 0.017453292;
  } while (lVar2 != 0x80);
  *(undefined4 *)(param_4 + 0x184) = 0;
  *(undefined4 *)(param_4 + 0x180) = param_2;
  *(undefined4 *)(param_4 + 0x188) = param_3;
  *(byte *)(param_4 + 0x7c) = *(byte *)(param_4 + 0x7c) | 8;
  return;
}




undefined8 FUN_009b86e8(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x448);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x450) == (int)plVar2[1]) goto LAB_009b8734;
    *(undefined8 *)(param_1 + 0x448) = 0;
    *(undefined4 *)(param_1 + 0x450) = DAT_03214ce8;
  }
  plVar2 = *(long **)(param_1 + 0x438);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x440) != (int)plVar2[1]) {
    *(undefined8 *)(param_1 + 0x438) = 0;
    *(undefined4 *)(param_1 + 0x440) = DAT_03214ce8;
    return 0;
  }
LAB_009b8734:
  uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
  return uVar1;
}




void FUN_009b8778(void)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_009b86e8();
  if (lVar2 == 0) {
    local_30 = DAT_03218f38;
    local_38 = DAT_03218f30;
  }
  else {
    FUN_00d55794(lVar2,&local_38,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((undefined4)local_38,local_38._4_4_,local_30);
}




void FUN_009b87f0(long param_1,undefined8 *param_2,float *param_3,uint param_4,uint param_5)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  FUN_009b78f4();
  fVar1 = *(float *)(param_1 + 0x308) +
          (*(float *)(param_1 + 0x30c) - *(float *)(param_1 + 0x308)) * param_3[2];
  fVar7 = -fVar1;
  fVar6 = ((param_3[1] / (float)param_5 + param_3[1] / (float)param_5 + -1.0) * fVar7) /
          *(float *)(param_1 + 0x220);
  fVar1 = ((*param_3 / (float)param_4 + *param_3 / (float)param_4 + -1.0) * fVar1) /
          *(float *)(param_1 + 0x20c);
  if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) != 0) {
    FUN_009b78f4(param_1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x1cc);
  uVar3 = *(undefined8 *)(param_1 + 0x1dc);
  uVar5 = *(undefined8 *)(param_1 + 0x1ec);
  uVar4 = *(undefined8 *)(param_1 + 0x1fc);
  *(float *)(param_2 + 1) =
       *(float *)(param_1 + 0x204) +
       fVar1 * *(float *)(param_1 + 0x1d4) + fVar6 * *(float *)(param_1 + 0x1e4) +
       *(float *)(param_1 + 500) * fVar7;
  *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) +
                      (float)((ulong)uVar2 >> 0x20) * fVar1 + (float)((ulong)uVar3 >> 0x20) * fVar6
                      + (float)((ulong)uVar5 >> 0x20) * fVar7,
                      (float)uVar4 +
                      (float)uVar2 * fVar1 + (float)uVar3 * fVar6 + (float)uVar5 * fVar7);
  return;
}




void FUN_009b891c(long param_1,float *param_2,float *param_3,uint param_4,uint param_5)

{
  bool bVar1;
  float fVar2;
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
  float fVar14;
  
  FUN_009b78f4();
  fVar8 = *param_3;
  fVar6 = param_3[1];
  fVar5 = param_3[2];
  if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) == 0) {
    bVar1 = true;
  }
  else {
    FUN_009b78f4(param_1);
    bVar1 = (*(byte *)(param_1 + 0x7c) & 2) == 0;
  }
  fVar10 = *(float *)(param_1 + 0x1bc) +
           fVar8 * *(float *)(param_1 + 0x18c) + fVar6 * *(float *)(param_1 + 0x19c) +
           fVar5 * *(float *)(param_1 + 0x1ac);
  fVar9 = *(float *)(param_1 + 0x1c0) +
          fVar8 * *(float *)(param_1 + 400) + fVar6 * *(float *)(param_1 + 0x1a0) +
          fVar5 * *(float *)(param_1 + 0x1b0);
  fVar7 = *(float *)(param_1 + 0x1c4) +
          fVar8 * *(float *)(param_1 + 0x194) + fVar6 * *(float *)(param_1 + 0x1a4) +
          fVar5 * *(float *)(param_1 + 0x1b4);
  fVar5 = *(float *)(param_1 + 0x1c8) +
          fVar8 * *(float *)(param_1 + 0x198) + fVar6 * *(float *)(param_1 + 0x1a8) +
          fVar5 * *(float *)(param_1 + 0x1b8);
  if (!bVar1) {
    FUN_009b78f4(param_1);
  }
  fVar6 = *(float *)(param_1 + 0x210);
  fVar2 = *(float *)(param_1 + 0x220);
  fVar11 = *(float *)(param_1 + 0x214);
  fVar12 = *(float *)(param_1 + 0x224);
  fVar13 = *(float *)(param_1 + 0x234);
  fVar3 = *(float *)(param_1 + 0x230);
  fVar4 = *(float *)(param_1 + 0x240);
  fVar14 = *(float *)(param_1 + 0x244);
  fVar8 = 1.0 / (fVar10 * *(float *)(param_1 + 0x218) + fVar9 * *(float *)(param_1 + 0x228) +
                 fVar7 * *(float *)(param_1 + 0x238) + fVar5 * *(float *)(param_1 + 0x248));
  *param_2 = ((fVar10 * *(float *)(param_1 + 0x20c) + fVar9 * *(float *)(param_1 + 0x21c) +
               fVar7 * *(float *)(param_1 + 0x22c) + fVar5 * *(float *)(param_1 + 0x23c)) * fVar8 +
             1.0) * 0.5 * (float)param_4;
  param_2[1] = (1.0 - (fVar10 * fVar6 + fVar9 * fVar2 + fVar7 * fVar3 + fVar5 * fVar4) * fVar8) *
               0.5 * (float)param_5;
  param_2[2] = (fVar10 * fVar11 + fVar9 * fVar12 + fVar7 * fVar13 + fVar5 * fVar14) * fVar8;
  return;
}




void FUN_009b8b34(long param_1)

{
  undefined8 uVar1;
  
  FUN_01988c84();
  FUN_00f2e250();
  uVar1 = FUN_01997b28();
  FUN_00f2e304(4,uVar1,param_1 + 8);
  FUN_00967c9c();
  return;
}




void FUN_009b8b6c(void)

{
  return;
}




void FUN_009b8b70(void)

{
  return;
}




undefined8 FUN_009b8b74(undefined8 param_1)

{
  FUN_009b6ab0();
  return param_1;
}




void FUN_009b8b98(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009b8ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009b8ba4(undefined8 param_1)

{
  FUN_009a6304();
  FUN_009af4fc(param_1);
  FUN_009a88d4(param_1);
  FUN_009b0c8c(param_1);
  FUN_009b1740(param_1);
  FUN_009b2054(param_1);
  FUN_009b3e08(param_1);
  FUN_009b64f8(param_1);
  FUN_009b66ec(param_1);
  FUN_009b6fa0(param_1);
  FUN_009b9c7c(param_1);
  FUN_009bcd60(param_1);
  FUN_009bdd88(param_1);
  FUN_009beb68(param_1);
  FUN_009bef74(param_1);
  FUN_009bf83c(param_1);
  FUN_009bfc18(param_1);
  FUN_009c0ea4(param_1);
  FUN_009c8bf0(param_1);
  FUN_009d7f34(param_1);
  FUN_009d8158(param_1);
  FUN_009d82d8(param_1);
  FUN_00a0ad74(param_1);
  FUN_009c2850(param_1);
  FUN_009dd764(param_1);
  FUN_009c8868(param_1);
  FUN_00a1d14c(param_1);
  FUN_00a1e6bc(param_1);
  FUN_00a1e8bc(param_1);
  FUN_009c8fa8(param_1);
  FUN_009c9ddc(param_1);
  FUN_009cb11c(param_1);
  FUN_009cb468(param_1);
  FUN_009cc4a0(param_1);
  FUN_00a0bab4(param_1);
  FUN_009cda7c(param_1);
  FUN_009d1124(param_1);
  FUN_009d1588(param_1);
  FUN_00a10758(param_1);
  FUN_00a120dc(param_1);
  FUN_00a18430(param_1);
  FUN_009d1e44(param_1);
  FUN_009d4334(param_1);
  FUN_009d7744(param_1);
  FUN_00a19360(param_1);
  FUN_00a0a8a4(param_1);
  FUN_00a7c438(param_1);
  FUN_009dba98(param_1);
  FUN_009dacd4(param_1);
  FUN_009dc6e0(param_1);
  FUN_009d9934(param_1);
  FUN_009da298(param_1);
  FUN_00a195fc(param_1);
  FUN_009de93c(param_1);
  FUN_009d48b8(param_1);
  FUN_009d886c(param_1);
  FUN_009de130(param_1);
  FUN_009b564c(param_1);
  FUN_009b614c(param_1);
  return;
}




undefined8 FUN_009b8d90(void)

{
  return DAT_0312ede0;
}




bool FUN_009b8d9c(void)

{
  return DAT_0312ede0 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009b8db0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined8 *local_68;
  code *pcStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *param_1 = &PTR_FUN_02baef70;
  param_1[5] = &PTR_FUN_027d0bb0;
  FUN_00948cd8(param_1 + 6);
  FUN_00e83560(param_1 + 9);
  FUN_0092157c(param_1 + 0xc);
  *param_1 = &PTR_FUN_027c22b8;
  param_1[9] = &PTR_FUN_027c26e0;
  param_1[6] = &PTR_FUN_027c2348;
  param_1[5] = &PTR_FUN_027c2320;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = &PTR_FUN_027c2740;
  param_1[0xc] = &PTR_FUN_027c2710;
  param_1[0xe] = 0;
  FUN_00b7d994(param_1 + 0x17);
  FUN_00adb418(param_1 + 0x121,0);
  FUN_00add4f8(param_1 + 0xb17);
  FUN_00acac40(param_1 + 0xbc5,0);
  FUN_00b27c04(param_1 + 0xcca,0);
  FUN_00cd3074(param_1 + 0xce7);
  param_1[0x18dc] = 0;
  FUN_00af032c(param_1 + 0x18dd);
  FUN_00f017e8(param_1 + 0x1c3b);
  puVar1 = param_1 + 0x1c4c;
  param_1[0x1c3b] = &PTR_FUN_027c1f80;
  FUN_00f017e8(puVar1);
  puVar2 = param_1 + 0x1c5d;
  *puVar1 = &PTR_FUN_027c1f80;
  FUN_00f017e8(puVar2);
  *puVar2 = &PTR_FUN_027c1f80;
  *(undefined8 *)((long)param_1 + 0xe3c6) = 0;
  param_1[0x1c78] = 0;
  param_1[0x1c77] = 0;
  param_1[0x1c76] = 0;
  DAT_0312ede0 = param_1;
  FUN_0096bb04();
  FUN_00aa1738(puVar1);
  FUN_00aff9c4(puVar2);
  FUN_00a09964();
  FUN_009e8018();
  FUN_00a07a84();
  FUN_00a87dfc();
  FUN_00aa4db8();
  FUN_00aa5eb4();
  FUN_00aa81c0();
  FUN_009f7330();
  FUN_009fa6c0();
  uVar10 = FUN_0093dbe8();
  if ((uVar10 & 1) == 0) {
    FUN_009fde64();
  }
  FUN_009fec24();
  pvVar11 = operator_new(0x138);
  FUN_00bd7130();
  param_1[0x10] = pvVar11;
  uVar13 = *(undefined8 *)((long)pvVar11 + 8);
  param_1[0xf] = uVar13;
  pvVar11 = operator_new(0xc080);
  FUN_00cd72c0(pvVar11,uVar13);
  param_1[0x18dc] = pvVar11;
  pvVar11 = operator_new(0x2a0);
  FUN_00b7d404();
  param_1[0x11] = pvVar11;
  pvVar11 = operator_new(0xe50);
  FUN_00b8b5d4();
  param_1[0x12] = pvVar11;
  pvVar11 = operator_new(0x370);
  FUN_00b8c8f8();
  param_1[0x13] = pvVar11;
  pvVar11 = operator_new(0x228);
  FUN_00bdae5c();
  param_1[0x15] = pvVar11;
  uVar9 = _DAT_03219018;
  uVar8 = DAT_03219010;
  fVar7 = DAT_0321900c;
  uVar6 = DAT_03219004;
  uVar5 = _DAT_03218ff8;
  uVar4 = DAT_03218ff0;
  uVar13 = DAT_03218fe0;
  fVar14 = -DAT_03219000;
  param_1[0x1c6f] = _DAT_03218fe8;
  param_1[0x1c6e] = uVar13;
  param_1[0x1c71] = uVar5;
  param_1[0x1c70] = uVar4;
  *(float *)(param_1 + 0x1c72) = fVar14;
  *(ulong *)((long)param_1 + 0xe394) = CONCAT44(-(float)((ulong)uVar6 >> 0x20),-(float)uVar6);
  *(float *)((long)param_1 + 0xe39c) = -fVar7;
  param_1[0x1c75] = uVar9;
  param_1[0x1c74] = uVar8;
  FUN_008fa54c(&local_78,PTR_s_screen_main_hub_02be3690);
  FUN_008fce60(param_1 + 0x1c76,&local_78);
  if (((byte)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  lVar12 = FUN_009e80b8();
  local_78 = 0;
  pcStack_60 = thunk_FUN_009bb314;
  puStack_70 = param_1;
  local_68 = param_1;
  FUN_009bbd70(lVar12 + 0x28,&local_78);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

