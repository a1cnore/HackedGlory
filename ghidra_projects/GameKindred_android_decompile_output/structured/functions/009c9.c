// functions/009c9 — 25 functions
#include "libGameKindred.h"




void FUN_009c9008(undefined4 param_1,undefined4 param_2,long param_3,undefined8 *param_4,
                 uint param_5)

{
  long *plVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_3 + 0xd0) = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  *(uint *)(param_3 + 0xac) =
       *(uint *)(param_3 + 0xac) & 0xfffffff8 | *(uint *)(param_3 + 0xac) & 3 | (param_5 & 1) << 2;
  *(undefined8 *)(param_3 + 200) = uVar2;
  plVar1 = (long *)FUN_00f00438("ingame-effects");
  (**(code **)(*plVar1 + 0x78))(plVar1,param_3 + 0x28,1);
  *(undefined4 *)(param_3 + 0x208) = param_1;
  *(undefined4 *)(param_3 + 0x20c) = param_2;
  return;
}




void FUN_009c9080(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  
  uVar3 = 0;
  plVar4 = (long *)(param_3 + 0xf8);
  do {
    if (*plVar4 == 0) {
      lVar2 = FUN_00f0a7e0(param_3 + 0xd8);
      if (lVar2 == 0) {
        return;
      }
      *(undefined4 *)(plVar4 + -2) = param_1;
      *(undefined4 *)((long)plVar4 + -0xc) = param_2;
      uVar1 = *param_5;
      *plVar4 = lVar2;
      *(undefined4 *)(plVar4 + -1) = uVar1;
      return;
    }
    uVar3 = uVar3 + 1;
    plVar4 = plVar4 + 3;
  } while (uVar3 < 0xc);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009c90ec(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_0091ef94(&local_68,param_1 + 200,0);
  uVar4 = FUN_0091f024(param_1 + 200);
  if ((*(float *)(param_1 + 0x68) != local_68) || (*(float *)(param_1 + 0x6c) != fStack_64)) {
    *(float *)(param_1 + 0x68) = local_68;
    *(float *)(param_1 + 0x6c) = fStack_64;
    FUN_0091ada4(param_1 + 0x28);
  }
  if (local_60 <= 1.0) {
    if (*(float *)(param_1 + 0x208) <= 0.0) {
      if ((~*(uint *)(param_1 + 0xac) & 0x7f80) == 0) goto LAB_009c92c8;
      uVar2 = *(uint *)(param_1 + 0xac) | 0x7f80;
    }
    else {
      FUN_00f00298(&local_70,(ulong)&local_70 | 4);
      fVar5 = *(float *)(param_1 + 0x20c);
      fVar6 = fVar5 * 0.5;
      fVar7 = DAT_03218ef8;
      if (DAT_03218ef8 <= local_68 - fVar6) {
        fVar7 = local_68 - fVar6;
      }
      fVar8 = _DAT_03218efc;
      if (_DAT_03218efc <= fStack_64 - fVar6) {
        fVar8 = fStack_64 - fVar6;
      }
      if (local_68 + fVar6 <= local_70) {
        local_70 = local_68 + fVar6;
      }
      if (fStack_64 + fVar6 <= fStack_6c) {
        fStack_6c = fStack_64 + fVar6;
      }
      fVar6 = 0.0;
      if ((fVar7 < local_70) && (fVar6 = 0.0, fVar8 < fStack_6c)) {
        fVar6 = (local_70 - fVar7) * (fStack_6c - fVar8);
      }
      fVar7 = (float)NEON_fminnm(uVar4,0x42b40000);
      if (fVar7 <= 75.0) {
        fVar7 = 75.0;
      }
      fVar5 = (float)NEON_fminnm((fVar6 / (fVar5 * fVar5)) * (1.0 / *(float *)(param_1 + 0x208)),
                                 0x3f800000);
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      fVar6 = (fVar7 + -75.0) / 15.0;
      fVar7 = (float)NEON_fminnm(fVar5,0x3f800000);
      uVar2 = *(uint *)(param_1 + 0xac);
      if (fVar7 <= 0.6) {
        fVar7 = 0.6;
      }
      uVar3 = (uint)((fVar6 * 0.6 + (1.0 - fVar6) * fVar7) * 255.0);
      if ((uVar2 >> 7 & 0xff) == uVar3) goto LAB_009c92c8;
      uVar2 = uVar2 & 0xffff8000 | uVar2 & 0x7f | (uVar3 & 0xff) << 7;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0xac) & 0x7f80) == 0) goto LAB_009c92c8;
    uVar2 = *(uint *)(param_1 + 0xac) & 0xffff807f;
  }
  *(uint *)(param_1 + 0xac) = uVar2;
  FUN_0091ada4(param_1 + 0x28);
LAB_009c92c8:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009c92f8(long param_1)

{
  FUN_009c90ec(param_1 + -0x28);
  return;
}




void FUN_009c9300(void)

{
  return;
}




void FUN_009c930c(void)

{
  return;
}




void FUN_009c9318(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_98;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00965ecc(param_1 + 0x28);
  fVar5 = *(float *)(lVar2 + 8);
  fVar6 = *(float *)(lVar2 + 0xc);
  FUN_00f00298(&local_98,(ulong)&local_98 | 4);
  fVar7 = (float)local_98 * (float)*(undefined8 *)(lVar2 + 0x10) * 0.5;
  fVar12 = (float)((ulong)local_98 >> 0x20) * (float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20)
           * 0.5;
  local_98 = CONCAT44(fVar12,fVar7);
  uVar8 = FUN_0091f024(param_1 + 200);
  if (*(long *)(param_1 + 0xf8) != 0) {
    fVar9 = (float)NEON_fminnm(uVar8,0x42c80000);
    if (fVar9 <= 65.0) {
      fVar9 = 65.0;
    }
    fVar9 = (fVar9 + -65.0) / 35.0;
    plVar4 = (long *)(param_1 + 0x110);
    do {
      local_8c = (undefined1)plVar4[-4];
      local_8b = *(undefined1 *)((long)plVar4 + -0x1f);
      local_8a = *(undefined1 *)((long)plVar4 + -0x1e);
      fVar10 = (float)NEON_ucvtf((uint)*(byte *)((long)plVar4 + -0x1d));
      local_89 = (undefined1)(int)(*(float *)(lVar2 + 0x18) * fVar10);
      fVar10 = *(float *)(plVar4 + -5);
      fVar11 = (fVar9 * 0.6 + (1.0 - fVar9)) * *(float *)((long)plVar4 + -0x24);
      fVar15 = fVar11 * *(float *)(lVar2 + 0x10);
      fVar11 = fVar11 * *(float *)(lVar2 + 0x14);
      lVar3 = FUN_00f0a7d4(param_1 + 0xd8,*(undefined4 *)plVar4[-3]);
      fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 8));
      fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 10));
      uVar8 = NEON_ucvtf((uint)*(ushort *)(lVar3 + 4));
      uVar13 = NEON_ucvtf((uint)*(ushort *)(lVar3 + 6));
      FUN_009c96fc((fVar5 + (fVar7 - fVar5) * fVar10) - fVar15 * fVar14 * 0.5,
                   (fVar6 + (fVar12 - fVar6) * fVar10) - fVar11 * fVar16 * 0.5,fVar15 * fVar14,
                   SUB42(fVar11 * fVar16,0),0,uVar8,uVar13,param_2,&local_8c,0,0);
      lVar3 = *plVar4;
      plVar4 = plVar4 + 3;
    } while (lVar3 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009c9554(long param_1)

{
  FUN_009c9318(param_1 + -0xb0);
  return;
}




undefined8 FUN_009c955c(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0xd8) + 8) + 0x30;
  return 1;
}




undefined8 FUN_009c9574(void)

{
  return 2;
}




void FUN_009c957c(undefined1 param_1 [16],float param_2,long *param_3,undefined8 param_4,
                 long param_5,uint *param_6,undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00965ecc();
  if (0.0 < *(float *)(lVar3 + 0x18)) {
    (**(code **)(*param_3 + 0x68))(param_3,&local_60,&local_68);
    FUN_00f0061c();
    plVar4 = (long *)FUN_00f03548();
    fVar5 = (float)(**(code **)(*plVar4 + 0x48))();
    fVar7 = 0.0;
    if (*(short *)(lVar3 + 0x1c) != -1) {
      fVar7 = (float)(int)*(short *)(lVar3 + 0x1c);
    }
    fVar6 = 0.0;
    if (*(short *)(lVar3 + 0x1e) != -1) {
      fVar6 = (float)(int)*(short *)(lVar3 + 0x1e);
    }
    if (*(short *)(lVar3 + 0x20) != -1) {
      fVar5 = (float)(int)*(short *)(lVar3 + 0x20);
    }
    if (local_60 <= fVar5) {
      if (*(short *)(lVar3 + 0x22) != -1) {
        param_2 = (float)(int)*(short *)(lVar3 + 0x22);
      }
      if (((local_5c <= param_2) && (fVar7 <= local_68)) && (fVar6 <= local_64)) {
        uVar1 = *param_6;
        *(long **)(param_5 + (ulong)uVar1 * 8) = param_3 + 0x12;
        *param_6 = uVar1 + 1;
      }
    }
    FUN_00f029e4(param_3,param_4,param_5,param_6,param_7);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009c96dc(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30;
  return 1;
}




undefined8 FUN_009c96f4(void)

{
  return 2;
}




void FUN_009c96fc(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,long *param_9,undefined1 *param_10,
                 uint param_11,uint param_12)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  float *pfVar4;
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
  float fVar15;
  float fVar16;
  float in_stack_00000000;
  float in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000018;
  
  if (0x11 < *(int *)((long)param_9 + 0xc) - (int)param_9[1]) {
    pfVar4 = (float *)*param_9;
    fVar14 = param_3 * in_stack_00000008 * 0.5;
    fVar7 = fVar14 + param_1;
    fVar8 = param_6;
    fVar9 = param_6 + param_8;
    if ((param_11 & 1) == 0) {
      fVar8 = param_6 + param_8;
      fVar9 = param_6;
    }
    pfVar4[1] = param_2;
    pfVar4[2] = param_5;
    *pfVar4 = fVar7;
    *(undefined1 *)(pfVar4 + 3) = *param_10;
    *(undefined1 *)((long)pfVar4 + 0xd) = param_10[1];
    bVar2 = (param_12 & 1) == 0;
    fVar9 = (1.0 / in_stack_00000010) * fVar9;
    fVar8 = (1.0 / in_stack_00000010) * fVar8;
    *(undefined1 *)((long)pfVar4 + 0xe) = param_10[2];
    fVar13 = param_7 + in_stack_00000000;
    if (bVar2) {
      fVar13 = param_7;
    }
    uVar1 = param_10[3];
    fVar16 = (fVar8 - fVar9) * in_stack_00000008 * 0.5;
    fVar15 = 1.0 - (1.0 / in_stack_00000018) * fVar13;
    fVar6 = fVar9 + fVar16;
    pfVar4[4] = fVar6;
    pfVar4[5] = fVar15;
    *(undefined1 *)((long)pfVar4 + 0xf) = uVar1;
    lVar3 = *param_9;
    fVar13 = param_4 * in_stack_00000008 * 0.5;
    fVar11 = fVar13 + param_2;
    *param_9 = lVar3 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar3 + 0x18) = param_1;
    *(float *)(lVar3 + 0x1c) = fVar11;
    *(float *)(lVar3 + 0x20) = param_5;
    if (bVar2) {
      param_7 = param_7 + in_stack_00000000;
    }
    *(undefined1 *)(lVar3 + 0x24) = *param_10;
    fVar5 = 1.0 - (1.0 / in_stack_00000018) * param_7;
    *(undefined1 *)(lVar3 + 0x25) = param_10[1];
    fVar10 = (fVar5 - fVar15) * in_stack_00000008 * 0.5;
    fVar12 = fVar15 + fVar10;
    param_3 = param_1 + param_3;
    *(undefined1 *)(lVar3 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(float *)(lVar3 + 0x28) = fVar9;
    *(float *)(lVar3 + 0x2c) = fVar12;
    fVar14 = param_3 - fVar14;
    fVar16 = fVar8 - fVar16;
    *(undefined1 *)(lVar3 + 0x27) = uVar1;
    lVar3 = *param_9;
    fVar10 = fVar5 - fVar10;
    *param_9 = lVar3 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar3 + 0x18) = fVar14;
    *(float *)(lVar3 + 0x1c) = param_2;
    *(float *)(lVar3 + 0x20) = param_5;
    *(undefined1 *)(lVar3 + 0x24) = *param_10;
    *(undefined1 *)(lVar3 + 0x25) = param_10[1];
    *(undefined1 *)(lVar3 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(float *)(lVar3 + 0x28) = fVar16;
    *(float *)(lVar3 + 0x2c) = fVar15;
    *(undefined1 *)(lVar3 + 0x27) = uVar1;
    lVar3 = *param_9;
    *param_9 = lVar3 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar3 + 0x18) = fVar14;
    *(float *)(lVar3 + 0x1c) = param_2;
    *(float *)(lVar3 + 0x20) = param_5;
    param_2 = param_2 + param_4;
    fVar13 = param_2 - fVar13;
    *(undefined1 *)(lVar3 + 0x24) = *param_10;
    *(undefined1 *)(lVar3 + 0x25) = param_10[1];
    *(undefined1 *)(lVar3 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(float *)(lVar3 + 0x28) = fVar16;
    *(float *)(lVar3 + 0x2c) = fVar15;
    *(undefined1 *)(lVar3 + 0x27) = uVar1;
    lVar3 = *param_9;
    *param_9 = lVar3 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar3 + 0x18) = param_1;
    *(float *)(lVar3 + 0x1c) = fVar11;
    *(float *)(lVar3 + 0x20) = param_5;
    *(undefined1 *)(lVar3 + 0x24) = *param_10;
    *(undefined1 *)(lVar3 + 0x25) = param_10[1];
    *(undefined1 *)(lVar3 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(float *)(lVar3 + 0x28) = fVar9;
    *(float *)(lVar3 + 0x2c) = fVar12;
    *(undefined1 *)(lVar3 + 0x27) = uVar1;
    lVar3 = *param_9;
    *param_9 = lVar3 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar3 + 0x18) = param_3;
    *(float *)(lVar3 + 0x1c) = fVar11;
    *(float *)(lVar3 + 0x20) = param_5;
    *(undefined1 *)(lVar3 + 0x24) = *param_10;
    *(undefined1 *)(lVar3 + 0x25) = param_10[1];
    *(undefined1 *)(lVar3 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(float *)(lVar3 + 0x28) = fVar8;
    *(float *)(lVar3 + 0x2c) = fVar12;
    *(undefined1 *)(lVar3 + 0x27) = uVar1;
    lVar3 = *param_9;
    *param_9 = lVar3 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar3 + 0x18) = param_1;
    *(float *)(lVar3 + 0x1c) = fVar11;
    *(float *)(lVar3 + 0x20) = param_5;
    *(undefined1 *)(lVar3 + 0x24) = *param_10;
    *(undefined1 *)(lVar3 + 0x25) = param_10[1];
    *(undefined1 *)(lVar3 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(float *)(lVar3 + 0x28) = fVar9;
    *(float *)(lVar3 + 0x2c) = fVar12;
    *(undefined1 *)(lVar3 + 0x27) = uVar1;
    lVar3 = *param_9;
    *param_9 = lVar3 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar3 + 0x18) = param_1;
    *(float *)(lVar3 + 0x1c) = fVar13;
    *(float *)(lVar3 + 0x20) = param_5;
    *(undefined1 *)(lVar3 + 0x24) = *param_10;
    *(undefined1 *)(lVar3 + 0x25) = param_10[1];
    *(undefined1 *)(lVar3 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(float *)(lVar3 + 0x28) = fVar9;
    *(float *)(lVar3 + 0x2c) = fVar10;
    *(undefined1 *)(lVar3 + 0x27) = uVar1;
    lVar3 = *param_9;
    *param_9 = lVar3 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar3 + 0x18) = param_3;
    *(float *)(lVar3 + 0x1c) = fVar11;
    *(float *)(lVar3 + 0x20) = param_5;
    *(undefined1 *)(lVar3 + 0x24) = *param_10;
    *(undefined1 *)(lVar3 + 0x25) = param_10[1];
    *(undefined1 *)(lVar3 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(float *)(lVar3 + 0x28) = fVar8;
    *(float *)(lVar3 + 0x2c) = fVar12;
    *(undefined1 *)(lVar3 + 0x27) = uVar1;
    lVar3 = *param_9;
    *param_9 = lVar3 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar3 + 0x18) = param_3;
    *(float *)(lVar3 + 0x1c) = fVar11;
    *(float *)(lVar3 + 0x20) = param_5;
    *(undefined1 *)(lVar3 + 0x24) = *param_10;
    *(undefined1 *)(lVar3 + 0x25) = param_10[1];
    *(undefined1 *)(lVar3 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(float *)(lVar3 + 0x28) = fVar8;
    *(float *)(lVar3 + 0x2c) = fVar12;
    *(undefined1 *)(lVar3 + 0x27) = uVar1;
    lVar3 = *param_9;
    *param_9 = lVar3 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar3 + 0x18) = param_1;
    *(float *)(lVar3 + 0x1c) = fVar13;
    *(float *)(lVar3 + 0x20) = param_5;
    *(undefined1 *)(lVar3 + 0x24) = *param_10;
    *(undefined1 *)(lVar3 + 0x25) = param_10[1];
    *(undefined1 *)(lVar3 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(float *)(lVar3 + 0x28) = fVar9;
    *(float *)(lVar3 + 0x2c) = fVar10;
    *(undefined1 *)(lVar3 + 0x27) = uVar1;
    lVar3 = *param_9;
    *param_9 = lVar3 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar3 + 0x18) = param_3;
    *(float *)(lVar3 + 0x1c) = fVar13;
    *(float *)(lVar3 + 0x20) = param_5;
    *(undefined1 *)(lVar3 + 0x24) = *param_10;
    *(undefined1 *)(lVar3 + 0x25) = param_10[1];
    *(undefined1 *)(lVar3 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(float *)(lVar3 + 0x28) = fVar8;
    *(float *)(lVar3 + 0x2c) = fVar10;
    *(undefined1 *)(lVar3 + 0x27) = uVar1;
    lVar3 = *param_9;
    *param_9 = lVar3 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar3 + 0x18) = param_1;
    *(float *)(lVar3 + 0x1c) = fVar13;
    *(float *)(lVar3 + 0x20) = param_5;
    *(undefined1 *)(lVar3 + 0x24) = *param_10;
    *(undefined1 *)(lVar3 + 0x25) = param_10[1];
    *(undefined1 *)(lVar3 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(float *)(lVar3 + 0x28) = fVar9;
    *(float *)(lVar3 + 0x2c) = fVar10;
    *(undefined1 *)(lVar3 + 0x27) = uVar1;
    lVar3 = *param_9;
    *param_9 = lVar3 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar3 + 0x18) = fVar7;
    *(float *)(lVar3 + 0x1c) = param_2;
    *(float *)(lVar3 + 0x20) = param_5;
    *(undefined1 *)(lVar3 + 0x24) = *param_10;
    *(undefined1 *)(lVar3 + 0x25) = param_10[1];
    *(undefined1 *)(lVar3 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(float *)(lVar3 + 0x28) = fVar6;
    *(float *)(lVar3 + 0x2c) = fVar5;
    *(undefined1 *)(lVar3 + 0x27) = uVar1;
    lVar3 = *param_9;
    *param_9 = lVar3 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar3 + 0x18) = param_3;
    *(float *)(lVar3 + 0x1c) = fVar13;
    *(float *)(lVar3 + 0x20) = param_5;
    *(undefined1 *)(lVar3 + 0x24) = *param_10;
    *(undefined1 *)(lVar3 + 0x25) = param_10[1];
    *(undefined1 *)(lVar3 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(float *)(lVar3 + 0x28) = fVar8;
    *(float *)(lVar3 + 0x2c) = fVar10;
    *(undefined1 *)(lVar3 + 0x27) = uVar1;
    lVar3 = *param_9;
    *param_9 = lVar3 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar3 + 0x18) = param_3;
    *(float *)(lVar3 + 0x1c) = fVar13;
    *(float *)(lVar3 + 0x20) = param_5;
    *(undefined1 *)(lVar3 + 0x24) = *param_10;
    *(undefined1 *)(lVar3 + 0x25) = param_10[1];
    *(undefined1 *)(lVar3 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(float *)(lVar3 + 0x28) = fVar8;
    *(float *)(lVar3 + 0x2c) = fVar10;
    *(undefined1 *)(lVar3 + 0x27) = uVar1;
    lVar3 = *param_9;
    *param_9 = lVar3 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar3 + 0x18) = fVar7;
    *(float *)(lVar3 + 0x1c) = param_2;
    *(float *)(lVar3 + 0x20) = param_5;
    *(undefined1 *)(lVar3 + 0x24) = *param_10;
    *(undefined1 *)(lVar3 + 0x25) = param_10[1];
    *(undefined1 *)(lVar3 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(float *)(lVar3 + 0x28) = fVar6;
    *(float *)(lVar3 + 0x2c) = fVar5;
    *(undefined1 *)(lVar3 + 0x27) = uVar1;
    lVar3 = *param_9;
    *param_9 = lVar3 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar3 + 0x18) = fVar14;
    *(float *)(lVar3 + 0x1c) = param_2;
    *(float *)(lVar3 + 0x20) = param_5;
    *(undefined1 *)(lVar3 + 0x24) = *param_10;
    *(undefined1 *)(lVar3 + 0x25) = param_10[1];
    *(undefined1 *)(lVar3 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(float *)(lVar3 + 0x28) = fVar16;
    *(float *)(lVar3 + 0x2c) = fVar5;
    *(undefined1 *)(lVar3 + 0x27) = uVar1;
    *param_9 = *param_9 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
  }
  return;
}




undefined8 FUN_009c9ca4(undefined8 param_1)

{
  FUN_009c8d08();
  return param_1;
}




void FUN_009c9cc8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009c9cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




long * FUN_009c9cd4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_01985d44(param_1,DAT_0312f198);
  (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
  plVar1 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 5;
  }
  return plVar1;
}




void FUN_009c9d24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2c30;
  param_1[5] = &PTR_FUN_027c2c88;
  param_1[6] = 0;
  return;
}




void FUN_009c9d40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2c30;
  param_1[5] = &PTR_FUN_027c2c88;
  FUN_009c9d7c();
  FUN_01985bd0(param_1);
  return;
}




void FUN_009c9d7c(void)

{
  FUN_009209e8();
  FUN_00967c2c();
  FUN_00934e88();
  FUN_00f2e3d8();
  return;
}




void FUN_009c9d98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2c30;
  param_1[5] = &PTR_FUN_027c2c88;
  FUN_009c9d7c();
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_009c9ddc(long param_1)

{
  long lVar1;
  
  DAT_0312f198 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312f198 + 1;
  lVar1 = param_1 + (ulong)DAT_0312f198 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009caecc;
  *(code **)(lVar1 + 0xb8) = FUN_009caee8;
  *(uint *)(lVar1 + 0xa4) = DAT_0312f198;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 4;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_009c9e3c(void)

{
  return;
}




void FUN_009c9e40(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x30) = param_2;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0xffffffff;
  plVar7 = *(long **)(param_2 + 0x170);
  puVar5 = (undefined8 *)*plVar7;
  while (puVar5 != (undefined8 *)0x0) {
    thunk_FUN_00d9ff34(local_80,*puVar5);
    local_88 = local_80[0];
    FUN_009c9fb4(&local_78,&local_88,plVar7);
    plVar7 = plVar7 + 1;
    puVar5 = (undefined8 *)*plVar7;
  }
  lVar6 = **(long **)(param_2 + 0x10);
  plVar7 = *(long **)(param_2 + 0x10);
  while (lVar6 != 0) {
    uVar2 = FUN_00d6eb50();
    lVar6 = FUN_00d6eb5c(uVar2,*(undefined8 *)*plVar7);
    if (lVar6 != 0) {
      FUN_019889cc(&local_88,1,DAT_0312f198,0);
      lVar3 = CONCAT44(uStack_84,local_88);
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_0312f198) {
        lVar3 = 0;
      }
      FUN_009ca17c(lVar3,lVar6,&local_78);
      uVar2 = FUN_019888d4();
      FUN_01989030(uVar2,PTR_DAT_02bf2778,*(undefined8 *)(lVar6 + 0x48));
    }
    lVar6 = plVar7[1];
    plVar7 = plVar7 + 1;
  }
  uVar4 = FUN_00934ec0();
  if (((uVar4 & 1) != 0) && (*(char *)(param_2 + 0xe8) != '\0')) {
    FUN_00934e48();
  }
  uVar4 = FUN_00967c00();
  if (((uVar4 & 1) != 0) && (*(char *)(param_2 + 0xd8) != '\0')) {
    FUN_00967b84();
  }
  FUN_00920990(param_2 + 0x18);
  FUN_009ca4b8(&local_78);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009c9fb4(uint *param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_0091ed5c(0,0,*param_2);
  uVar9 = param_1[4];
  uVar8 = *param_1;
  param_1[4] = uVar9 + 1;
  if (uVar8 >> 1 < uVar9 + 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar8 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar9 = *param_1;
    uVar10 = uVar9 - 1;
    uVar8 = (uint)local_58;
    if ((int)uVar10 < 0) {
      pvVar6 = *(void **)(param_1 + 2);
    }
    else {
      pvVar6 = *(void **)(param_1 + 2);
      do {
        iVar5 = *(int *)((long)pvVar6 + (ulong)uVar10 * 8 + 4);
        if (iVar5 != -1) {
          uVar9 = *(uint *)((long)pvVar6 + (ulong)uVar10 * 8);
          uVar2 = 0;
          if ((uint)local_58 != 0) {
            uVar2 = uVar9 / (uint)local_58;
          }
          uVar11 = (ulong)(uVar9 - uVar2 * (uint)local_58);
          piVar12 = (int *)((long)local_50 + uVar11 * 8 + 4);
          iVar1 = *piVar12;
          while (iVar1 != -1) {
            uVar2 = (uint)local_58;
            if (0 < (int)(uint)uVar11) {
              uVar2 = (uint)uVar11;
            }
            uVar11 = (ulong)(uVar2 - 1);
            piVar12 = (int *)((long)local_50 + uVar11 * 8 + 4);
            iVar1 = *piVar12;
          }
          *(uint *)((long)local_50 + uVar11 * 8) = uVar9;
          *piVar12 = iVar5;
        }
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
      uVar9 = *param_1;
    }
    uVar10 = param_1[1];
    *param_1 = (uint)local_58;
    param_1[1] = local_58._4_4_;
    local_58 = CONCAT44(uVar10,uVar9);
    *(void **)(param_1 + 2) = local_50;
    local_50 = pvVar6;
    if (pvVar6 != (void *)0x0) {
      operator_delete__(pvVar6);
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar8 = *param_1;
    }
  }
  lVar7 = *(long *)(param_1 + 2);
  uVar9 = 0;
  if (uVar8 != 0) {
    uVar9 = uVar4 / uVar8;
  }
  uVar11 = (ulong)(uVar4 - uVar9 * uVar8);
  piVar12 = (int *)(lVar7 + uVar11 * 8 + 4);
  iVar5 = *piVar12;
  while (iVar5 != -1) {
    uVar9 = uVar8;
    if (0 < (int)(uint)uVar11) {
      uVar9 = (uint)uVar11;
    }
    uVar11 = (ulong)(uVar9 - 1);
    piVar12 = (int *)(lVar7 + uVar11 * 8 + 4);
    iVar5 = *piVar12;
  }
  *(uint *)(lVar7 + uVar11 * 8) = uVar4;
  iVar5 = FUN_009caef4(param_1,param_3);
  *piVar12 = iVar5;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

