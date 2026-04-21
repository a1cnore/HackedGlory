// functions/00d61 — 31 functions
#include "libGameKindred.h"




bool FUN_00d61090(long param_1)

{
  return *(long *)(param_1 + 0x18) != 0;
}




void FUN_00d610a0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_68;
  float fStack_64;
  float fStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar6 = *(long **)(param_1 + 0x7e8);
  if (plVar6 == (long *)0x0) {
LAB_00d61154:
    lVar10 = *(long *)(param_1 + 0x10);
    lVar7 = 0;
LAB_00d6115c:
    bVar4 = true;
  }
  else {
    if (*(int *)(param_1 + 0x7f0) != (int)plVar6[1]) {
      *(undefined8 *)(param_1 + 0x7e8) = 0;
      *(undefined4 *)(param_1 + 0x7f0) = DAT_03214ce8;
      goto LAB_00d61154;
    }
    lVar7 = (**(code **)(*plVar6 + 0x10))();
    lVar10 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) goto LAB_00d6115c;
    uVar1 = *(ushort *)(lVar10 + 0x88) & 0x1f;
    if ((uVar1 == 0x1f) || (*(short *)(lVar10 + (ulong)uVar1 * 0x38 + 0x90) != 5)) {
      bVar4 = false;
    }
    else {
      uVar8 = FUN_00d5b0c4(lVar10);
      bVar4 = false;
      uVar9 = 0;
      if ((uVar8 & 1) == 0) goto LAB_00d61378;
    }
  }
  bVar2 = *(byte *)(param_1 + 0x818);
  if ((bVar2 & 0x21) == 1) {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x7c4);
    *param_2 = *(undefined8 *)(param_1 + 0x7bc);
    uVar5 = DAT_03214ce8;
    *(undefined8 *)(param_1 + 0x7e8) = 0;
    *(undefined4 *)(param_1 + 0x7f0) = uVar5;
    *(byte *)(param_1 + 0x818) = *(byte *)(param_1 + 0x818) & 0xf9;
  }
  else {
    if (((~bVar2 & 6) != 0) || (bVar4 || lVar7 == lVar10)) {
      bVar2 = bVar2 >> 1 & 3;
      if (bVar2 == 2) {
        FUN_00d55794(lVar10,&local_58,1);
        fVar11 = local_58 - *(float *)(param_1 + 0x7f8);
        fVar12 = fStack_54 - (float)*(undefined8 *)(param_1 + 0x7fc);
        fVar13 = fStack_50 - (float)((ulong)*(undefined8 *)(param_1 + 0x7fc) >> 0x20);
        fVar12 = fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13;
        fVar11 = SQRT(fVar12);
        if (NAN(fVar11)) {
          fVar11 = sqrtf(fVar12);
        }
        uVar9 = 0;
        if (fVar11 < 0.01) goto LAB_00d61378;
        uVar9 = *(undefined8 *)(param_1 + 0x7f8);
        fStack_60 = *(float *)(param_1 + 0x800);
        goto LAB_00d612f0;
      }
      uVar9 = 0;
      if (bVar2 != 1) goto LAB_00d61378;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x800);
      uVar9 = *(undefined8 *)(param_1 + 0x7f8);
    }
    else {
      FUN_00d55794(lVar7,&local_68,1);
      FUN_00d55794(lVar10,&local_58,1);
      fVar12 = (local_58 - local_68) * (local_58 - local_68) +
               (fStack_54 - fStack_64) * (fStack_54 - fStack_64) +
               (fStack_50 - fStack_60) * (fStack_50 - fStack_60);
      fVar11 = SQRT(fVar12);
      if (NAN(fVar11)) {
        fVar11 = sqrtf(fVar12);
      }
      uVar9 = 0;
      if (fVar11 < 0.01) goto LAB_00d61378;
      uVar9 = CONCAT44(fStack_64,local_68);
LAB_00d612f0:
      local_58 = (float)uVar9 - local_58;
      fStack_54 = (float)((ulong)uVar9 >> 0x20) - fStack_54;
      fStack_60 = fStack_60 - fStack_50;
      *param_2 = CONCAT44(fStack_54,local_58);
      fVar11 = local_58 * local_58 + fStack_54 * fStack_54 + fStack_60 * fStack_60;
      *(float *)(param_2 + 1) = fStack_60;
      if (1e-08 <= fVar11) {
        fVar12 = SQRT(fVar11);
        if (NAN(fVar12)) {
          fVar12 = sqrtf(fVar11);
        }
        *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) / fVar12,(float)*param_2 / fVar12);
        *(float *)(param_2 + 1) = *(float *)(param_2 + 1) / fVar12;
        goto LAB_00d61374;
      }
      *(undefined4 *)(param_2 + 1) = DAT_03218f70;
      uVar9 = DAT_03218f68;
    }
    *param_2 = uVar9;
  }
LAB_00d61374:
  uVar9 = 1;
LAB_00d61378:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}




void FUN_00d613a4(long param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)FUN_01988c78();
  fVar1 = *(float *)(param_1 + 0x804) - fVar1;
  *(float *)(param_1 + 0x804) = fVar1;
  if (fVar1 <= 0.0) {
    if ((*(byte *)(param_1 + 0x818) & 1) != 0) {
      FUN_00d5ff84(param_1);
    }
    uVar2 = 0x40a00000;
    if ((*(uint *)(*(long *)(param_1 + 0x10) + 0x2f4) & 0x20000001) != 0) {
      uVar2 = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x804) = uVar2;
  }
  return;
}




void FUN_00d6140c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  fVar5 = *(float *)(param_1 + 0x814);
  if (0.0 < fVar5) {
    fVar4 = (float)FUN_01988c78();
    lVar3 = *(long *)(param_1 + 0x10);
    if (fVar4 <= fVar5) {
      fVar5 = fVar4;
    }
    FUN_00d55794(lVar3,&local_48,1);
    local_48 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x808) >> 0x20) * fVar5 +
                        (float)((ulong)local_48 >> 0x20),
                        (float)*(undefined8 *)(param_1 + 0x808) * fVar5 + (float)local_48);
    local_40 = fVar5 * *(float *)(param_1 + 0x810) + local_40;
    FUN_00d58004(lVar3,&local_48);
    fVar5 = *(float *)(param_1 + 0x814) - fVar5;
    *(float *)(param_1 + 0x814) = fVar5;
    if ((fVar5 <= 0.0) &&
       (((uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 == 0x1f ||
         (1 < *(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3)) &&
        ((*(byte *)(param_1 + 0x818) & 1) != 0)))) {
      FUN_00d60ff4(param_1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d6151c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  
  if ((~*(byte *)(param_1 + 0x818) & 6) == 0) {
    plVar1 = *(long **)(param_1 + 0x7e8);
    lVar2 = 0;
    if (plVar1 != (long *)0x0) {
      if (*(int *)(param_1 + 0x7f0) == (int)plVar1[1]) {
        lVar2 = (**(code **)(*plVar1 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x7e8) = 0;
        lVar2 = 0;
        *(undefined4 *)(param_1 + 0x7f0) = DAT_03214ce8;
      }
    }
    if (param_2 == lVar2) {
      lVar2 = 0;
      uVar3 = DAT_03214ce8;
      if (param_3 != 0) {
        uVar3 = *(undefined4 *)(param_3 + 0x30);
        lVar2 = param_3 + 0x28;
      }
      *(long *)(param_1 + 0x7e8) = lVar2;
      *(undefined4 *)(param_1 + 0x7f0) = uVar3;
    }
  }
  return;
}




undefined8 FUN_00d615dc(undefined8 param_1)

{
  FUN_00d5fae8();
  return param_1;
}




void FUN_00d61600(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d61608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d6160c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_00eefeb4(param_1 + 5);
  *param_1 = &PTR_FUN_0281dc48;
  param_1[5] = &PTR_FUN_0281dc88;
  return;
}




void FUN_00d6165c(long param_1)

{
  long lVar1;
  
  DAT_0314fa30 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0314fa30 + 1;
  lVar1 = param_1 + (ulong)DAT_0314fa30 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d6199c;
  *(code **)(lVar1 + 0xb8) = FUN_00d619f0;
  *(uint *)(lVar1 + 0xa4) = DAT_0314fa30;
  *(undefined4 *)(lVar1 + 0xa8) = 0x48;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_00d616bc(long param_1)

{
  byte bVar1;
  
  if ((*(long *)(param_1 + 0x10) != 0) && (bVar1 = FUN_00d55870(), bVar1 < 3)) {
    FUN_00eeff98(param_1 + 0x28,(&PTR_s_threat_neutral_0281dca0)[bVar1]);
    return;
  }
  return;
}




void FUN_00d61710(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  char cVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    cVar5 = FUN_00d55870(lVar8);
    uVar1 = *(ushort *)(lVar8 + 0x88) & 0x1f;
    if ((uVar1 == 0x1f) || (1 < *(ushort *)(lVar8 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
      uVar7 = 1;
      if (cVar5 == '\x01') {
        uVar7 = 2;
      }
      uVar6 = FUN_00d7d0a0(*(undefined8 *)(lVar8 + 0x80),uVar7);
      if ((uVar6 & 1) != 0) {
        lVar2 = *(long *)(lVar8 + 0x40);
        fVar10 = (*(float *)(lVar2 + 0x1e0) + 1.0) *
                 (*(float *)(lVar2 + 0x78) +
                 *(float *)(lVar2 + 300) * (*(float *)(lVar2 + 0x294) + 1.0));
        fVar9 = (*(float *)(lVar2 + 0x1dc) + 1.0) *
                (*(float *)(lVar2 + 0x74) +
                *(float *)(lVar2 + 0x128) * (*(float *)(lVar2 + 0x290) + 1.0));
        if (DAT_031a9950 <= fVar10) {
          fVar10 = DAT_031a9950;
        }
        fVar11 = (float)DAT_031a9890;
        if ((float)DAT_031a9890 <= fVar10) {
          fVar11 = fVar10;
        }
        if (*(char *)(*(long *)(lVar8 + 0x38) + 0x1fc) != '\0') {
          fVar11 = fVar11 * 1.25;
        }
        fVar10 = (*(float *)(lVar2 + 0x1b0) + 1.0) *
                 (*(float *)(lVar2 + 0x48) +
                 *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0));
        if (DAT_031a9920 <= fVar10) {
          fVar10 = DAT_031a9920;
        }
        fVar4 = (float)DAT_031a9860;
        if ((float)DAT_031a9860 <= fVar10) {
          fVar4 = fVar10;
        }
        if (DAT_031a994c <= fVar9) {
          fVar9 = DAT_031a994c;
        }
        fVar10 = DAT_031a988c;
        if (DAT_031a988c <= fVar9) {
          fVar10 = fVar9;
        }
        FUN_00d55794(lVar8,local_58,0);
        FUN_00eeed4c(local_58[0],local_50,(fVar4 / fVar10) / 3570.0,fVar11,param_2,0);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00d618cc(float param_1)

{
  return param_1 / 3570.0;
}




void FUN_00d618dc(long param_1)

{
  FUN_00d61710(param_1 + -0x28);
  return;
}




float FUN_00d618e4(float param_1)

{
  return param_1 * 3570.0;
}




void FUN_00d618f4(long param_1)

{
  FUN_00eefecc(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d6191c(void *param_1)

{
  FUN_00eefecc((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d6194c(long param_1)

{
  FUN_00eefecc();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_00d61970(long param_1)

{
  FUN_00eefecc();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




undefined8 * FUN_00d6199c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_00eefeb4(param_1 + 5);
  *param_1 = &PTR_FUN_0281dc48;
  param_1[5] = &PTR_FUN_0281dc88;
  return param_1;
}




void FUN_00d619f0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d619f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d619fc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_01985bd0_0281dcd0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}




void FUN_00d61a18(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_00d61a3c(long param_1)

{
  long lVar1;
  
  DAT_031a9670 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031a9670 + 1;
  lVar1 = param_1 + (ulong)DAT_031a9670 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d61c54;
  *(code **)(lVar1 + 0xb8) = FUN_00d61c6c;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x20;
  *(uint *)(lVar1 + 0xa4) = DAT_031a9670;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,3,FUN_00d61aac,0);
  return;
}




void FUN_00d61aac(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = (float)FUN_01988c78();
  fVar4 = *(float *)(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x10);
  fVar2 = fVar2 + *(float *)(param_1 + 0x34);
  if (fVar4 <= fVar2) {
    fVar2 = fVar4;
  }
  *(float *)(param_1 + 0x34) = fVar2;
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c09220) {
    lVar1 = 0;
  }
  if (fVar2 < fVar4) {
    fVar4 = fVar4 * 0.5;
    if (fVar4 <= fVar2) {
      fVar6 = *(float *)(param_1 + 0x2c);
      fVar3 = *(float *)(param_1 + 0x28) - fVar6;
      fVar2 = cosf(((fVar2 - fVar4) / fVar4) * 1.5707964);
      fVar3 = fVar3 - fVar3 * fVar2;
    }
    else {
      fVar6 = *(float *)(param_1 + 0x28);
      fVar5 = *(float *)(param_1 + 0x2c);
      fVar3 = sinf((fVar2 / fVar4) * 1.5707964);
      fVar3 = (fVar5 - fVar6) * fVar3;
    }
    FUN_00d57f74(fVar6 + fVar3,lVar1);
    return;
  }
  FUN_00d57f74(0,lVar1);
  FUN_01985ca8(param_1);
  return;
}




void FUN_00d61bac(float param_1,float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [4];
  float local_44;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_3 + 0x10);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c09220) {
    lVar2 = 0;
  }
  FUN_00d55794(lVar2,auStack_48,1);
  *(float *)(param_3 + 0x30) = param_2 / param_1;
  *(undefined4 *)(param_3 + 0x34) = 0;
  *(float *)(param_3 + 0x28) = local_44;
  *(float *)(param_3 + 0x2c) = local_44 + param_2;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 FUN_00d61c4c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




void FUN_00d61c54(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_01985bd0_0281dcd0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}




void FUN_00d61c6c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d61c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d61c78(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_0281dd00;
  param_1[5] = &PTR_FUN_0281dd30;
  uVar1 = DAT_03214ce8;
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}




void FUN_00d61ce4(long param_1)

{
  long lVar1;
  
  DAT_031a96b0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031a96b0 + 1;
  lVar1 = param_1 + (ulong)DAT_031a96b0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d62678;
  *(code **)(lVar1 + 0xb8) = FUN_00d626e8;
  *(uint *)(lVar1 + 0xa4) = DAT_031a96b0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x70;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,3,FUN_00d61d88,0);
  FUN_019867cc(param_1,0x1ab4042d,FUN_00d6212c,0);
  return;
}




void FUN_00d61d88(long param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_78 [4];
  undefined8 local_68;
  float local_60;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  fVar12 = (float)FUN_01988c78();
  lVar9 = *(long *)(param_1 + 0x10);
  fVar12 = fVar12 + *(float *)(param_1 + 0x50);
  if (*(float *)(param_1 + 0x4c) <= fVar12) {
    fVar12 = *(float *)(param_1 + 0x4c);
  }
  *(float *)(param_1 + 0x50) = fVar12;
  if (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_0314f724) {
    lVar9 = 0;
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else if (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_02c09220) {
    lVar9 = 0;
  }
  FUN_00d55794(lVar9,&local_58,0);
  local_60 = local_50;
  if (*(float *)(param_1 + 0x4c) <= *(float *)(param_1 + 0x50)) {
    local_68 = *(undefined8 *)(param_1 + 0x40);
    bVar3 = true;
    local_60 = *(float *)(param_1 + 0x48);
    fVar12 = (float)local_68;
    goto LAB_00d61f7c;
  }
  plVar4 = *(long **)(param_1 + 0x58);
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_1 + 0x60) == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        plVar4 = *(long **)(param_1 + 0x58);
        uVar6 = 0;
        if (plVar4 != (long *)0x0) {
          if (*(int *)(param_1 + 0x60) == (int)plVar4[1]) {
            uVar6 = (**(code **)(*plVar4 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x58) = 0;
            uVar6 = 0;
            *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
          }
        }
        FUN_00d55794(uVar6,local_78,0);
        uVar8 = DAT_03214ce8;
        local_78[1] = 0.0;
        fVar12 = local_78[0] - *(float *)(param_1 + 0x40);
        fVar14 = 0.0 - *(float *)(param_1 + 0x44);
        fVar13 = local_78[2] - *(float *)(param_1 + 0x48);
        if (25.0 < fVar12 * fVar12 + fVar14 * fVar14 + fVar13 * fVar13) {
          *(undefined8 *)(param_1 + 0x58) = 0;
          goto LAB_00d61f34;
        }
        *(float *)(param_1 + 0x48) = local_78[2];
        *(ulong *)(param_1 + 0x40) = (ulong)(uint)local_78[0];
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x58) = 0;
      uVar8 = DAT_03214ce8;
LAB_00d61f34:
      *(undefined4 *)(param_1 + 0x60) = uVar8;
    }
  }
  fVar13 = *(float *)(param_1 + 0x50) / *(float *)(param_1 + 0x4c);
  fVar14 = 1.0 - fVar13;
  fVar12 = (float)*(undefined8 *)(param_1 + 0x34) * fVar14 +
           (float)*(undefined8 *)(param_1 + 0x40) * fVar13;
  local_68 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20) * fVar14 +
                      (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) * fVar13,fVar12);
  bVar3 = false;
  local_60 = fVar14 * *(float *)(param_1 + 0x3c) + fVar13 * *(float *)(param_1 + 0x48);
LAB_00d61f7c:
  if (((1.1920929e-07 <= ABS(local_58 - fVar12)) ||
      (1.1920929e-07 <= ABS(fStack_54 - local_68._4_4_))) ||
     (1.1920929e-07 <= ABS(local_50 - local_60))) {
    uVar7 = FUN_00d6a814(lVar9,1);
    if (((uVar7 & 1) == 0) && ((*(byte *)(lVar9 + 0x2f6) >> 5 & 1) != 0)) {
      uVar6 = FUN_00d55870(lVar9);
      uVar7 = FUN_00d7db38(uVar6,&local_58,&local_68,local_78);
      if ((uVar7 & 1) != 0) {
        local_60 = local_78[2];
        local_68 = CONCAT44(*(undefined4 *)(param_1 + 0x44),local_78[0]);
        FUN_00d58004(lVar9,&local_68);
        FUN_00d623bc(param_1);
        uVar11 = 0xffff0000;
        lVar5 = lVar9;
LAB_00d620b8:
        do {
          do {
            lVar10 = lVar5;
            if ((lVar10 != lVar9) &&
               (lVar5 = FUN_019865b4(*(undefined8 *)(lVar10 + 8),0x444d06f4), lVar5 != 0)) {
              (**(code **)(lVar5 + 8))(lVar10);
            }
            if (((uVar11 & 0xffff) < uVar11 >> 0x10) &&
               (lVar5 = *(long *)(lVar10 + 0x18), lVar5 != 0)) {
              uVar11 = uVar11 & 0xffff0000 | uVar11 + 1 & 0xffff;
              goto LAB_00d620b8;
            }
            if ((uVar11 & 0xffff) == 0) goto LAB_00d62050;
            lVar5 = *(long *)(lVar10 + 0x20);
          } while (*(long *)(lVar10 + 0x20) != 0);
          lVar10 = *(long *)(lVar10 + 0x10);
          if ((lVar10 == 0) || (uVar1 = uVar11 - 1 & 0xffff, uVar1 == 0)) goto LAB_00d62050;
          uVar11 = uVar1 | uVar11 & 0xffff0000;
          while (lVar5 = *(long *)(lVar10 + 0x20), lVar5 == 0) {
            if ((uVar11 - 1 & 0xffff) == 0) goto LAB_00d62050;
            lVar10 = *(long *)(lVar10 + 0x10);
            uVar11 = uVar11 & 0xffff0000 | uVar11 - 1 & 0xffff;
            if (lVar10 == 0) goto LAB_00d62050;
          }
        } while( true );
      }
    }
    FUN_00d58004(lVar9,&local_68);
  }
  if (bVar3) {
    FUN_01985ca8(param_1);
  }
LAB_00d62050:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

