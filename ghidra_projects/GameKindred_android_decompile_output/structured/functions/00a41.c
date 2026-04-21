// functions/00a41 — 14 functions
#include "libGameKindred.h"




void FUN_00a411d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  float fVar1;
  
  fVar1 = (float)param_4 * 0.2;
  FUN_00a432a8(param_1,param_2,param_3,(float)param_4 - fVar1);
  FUN_00a43164(param_1,param_2,param_3,param_4,fVar1,param_5,param_6,param_7,param_8,param_9);
  return;
}




void FUN_00a41278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  FUN_00a42eec(param_1,param_2);
  FUN_00a43164(param_1,param_2,param_3,param_4,(float)param_4 * 0.9 * 0.4,param_5,param_6,param_7,
               param_8,param_9);
  return;
}




void FUN_00a41328(undefined8 param_1,float param_2,undefined8 param_3,float param_4,long *param_5,
                 undefined8 param_6,undefined8 *param_7,undefined8 param_8,long param_9)

{
  byte bVar1;
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
  float fVar14;
  float fVar15;
  float local_94;
  undefined8 local_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  fVar4 = param_2;
  fVar3 = (float)(**(code **)(*param_5 + 0x48))();
  fVar3 = (fVar3 / (float)DAT_031323e8) * (float)*param_7;
  fVar4 = (fVar4 / (float)((ulong)DAT_031323e8 >> 0x20)) * (float)((ulong)*param_7 >> 0x20);
  local_90 = CONCAT44(fVar4,fVar3);
  fVar8 = (float)param_1 + (float)param_3;
  fVar10 = fVar3 * 269.0;
  fVar7 = fVar4 * 10.0;
  fVar13 = fVar3 * 257.0;
  fVar14 = fVar4 * 3.0;
  fVar9 = fVar3 * 3.0;
  bVar1 = *(byte *)(param_5 + 0x28);
  fVar6 = (((fVar8 - fVar13) - fVar9) + (fVar10 - fVar13) * -0.5) - (fVar3 + fVar3);
  if ((bVar1 >> 1 & 1) == 0) {
    fVar11 = fVar7 + fVar14;
    if ((int)param_5[0x16] != 0) {
      fVar11 = 0.0;
    }
  }
  else {
    fVar11 = 4.0;
  }
  local_94 = fVar7 + fVar14;
  fVar15 = fVar13 + fVar9 + fVar9;
  fVar5 = local_94;
  if ((bVar1 & 2) != 0) {
    fVar5 = 4.0;
  }
  param_2 = fVar4 + fVar4 + param_2;
  fVar12 = fVar6 - fVar9;
  FUN_00a41730(param_1,param_2 + fVar11,param_3,param_4 - (fVar11 + fVar11),param_5,param_6,param_8)
  ;
  param_2 = fVar14 + param_2;
  FUN_00a41868(fVar12,param_2,fVar15,fVar5,fVar9,fVar14,param_5,param_6,&local_90,param_8);
  fVar11 = fVar14 + local_94 + param_2;
  FUN_00a419dc(((fVar8 - fVar10) + fVar3 * -4.0) - (fVar3 + fVar3),fVar11,fVar10,fVar4 * 25.0,0,
               *(undefined4 *)(param_9 + 8),param_5,param_6,&local_90,param_8);
  if (*(char *)(param_9 + 0xc) != '\0') {
    fVar11 = fVar4 * 25.0 + fVar14 + fVar11;
    fVar3 = fVar7 + fVar4 * 5.0;
    if ((bVar1 & 2) != 0) {
      fVar3 = 4.0;
    }
    FUN_00a41fa0(fVar6,fVar11,fVar13,fVar7,*(undefined4 *)(param_9 + 0x10),param_5,param_6);
    FUN_00a42658(fVar12,local_94 + fVar11,fVar15,fVar3,fVar9,fVar4 * 5.0,param_5,param_6,&local_90,
                 param_8);
  }
  if (*(long *)(lVar2 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a415d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,float *param_7,undefined8 param_8,
                 long param_9)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  fStack_7c = param_7[1] * 1.7;
  local_80 = *param_7 * 1.2;
  fVar2 = fStack_7c + fStack_7c;
  fVar3 = local_80 + local_80;
  FUN_00a433d4(param_1,param_2,param_3,fVar2 + fVar2 + (float)param_4,param_5,param_6,&local_80);
  FUN_00a419dc(param_1,fVar2 + (float)param_2,param_3,param_4,(int)fVar3,
               *(undefined4 *)(param_9 + 8),param_5,param_6,&local_80,param_8);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a416c8(long param_1)

{
  FUN_00a40f80(param_1 + -0x88);
  return;
}




void FUN_00a416d0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xd8) = param_2;
  return;
}




undefined8 FUN_00a416d8(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x30;
  return 1;
}




undefined8 FUN_00a416f0(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x18) + 8) + 0x30;
  return 1;
}




void FUN_00a41708(float param_1,long param_2)

{
  *(float *)(param_2 + 0xf8) = *(float *)(param_2 + 0xf8) - param_1;
  return;
}




void FUN_00a41718(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) & 0xf7 | (param_2 & 1) << 3;
  return;
}




void FUN_00a41730(float param_1,float param_2,float param_3,float param_4,long param_5,
                 undefined8 param_6,long param_7)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  char local_5c;
  char local_5b;
  char local_5a;
  undefined1 local_59;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_5c = -((byte)(((uint)*(byte *)(param_5 + 0x140) << 4) >> 7) & 1);
  local_59 = *(undefined1 *)(param_7 + 3);
  local_5b = local_5c;
  local_5a = local_5c;
  lVar5 = FUN_00f0a7d4(param_5 + 0xa0,*(undefined4 *)(param_5 + 0x114));
  uVar1 = *(uint *)(*(long *)(*(long *)(param_5 + 0xa0) + 8) + 0x3c);
  fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 8));
  fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 10));
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 6));
  fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 4));
  param_1 = param_1 - fVar3 * 0.0;
  param_2 = param_2 - fVar7 * 0.0;
  fVar7 = 1.0 / (float)(uVar1 & 0x3fff);
  FUN_00965b68(SUB42(param_1,0),param_2,SUB42(param_1 + param_3,0),SUB42(param_2 + param_4,0),0,
               fVar7 * fVar6,1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar4,
               (fVar6 + fVar3) * fVar7,param_6,&local_5c,0);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a41868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 float param_5,float param_6,long param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10)

{
  uint uVar1;
  float fVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(long *)(param_7 + 0xd8) != 0) {
    fVar4 = (float)FUN_009becb4();
    fVar4 = (float)(int)(fVar4 * (float)param_3);
    if (0.0 < fVar4) {
      FUN_00a42ae0(param_1,param_2,param_3,param_4,param_7,param_8,param_9,param_10,1);
      lVar3 = FUN_00f0a7d4(param_7 + 0xa0,*(undefined4 *)(param_7 + 0x134));
      uVar1 = *(uint *)(*(long *)(*(long *)(param_7 + 0xa0) + 8) + 0x3c);
      fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 8));
      fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 10));
      fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 6));
      fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 4));
      fVar6 = ((float)param_1 + param_5) - fVar5 * 0.0;
      fVar7 = ((float)param_2 + param_6) - fVar7 * 0.0;
      fVar9 = 1.0 / (float)(uVar1 & 0x3fff);
      FUN_00965b68(fVar6,fVar7,(fVar4 - (param_5 + param_5)) + fVar6,
                   ((float)param_4 - (param_6 + param_6)) + fVar7,0,fVar9 * fVar8,
                   1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar2,(fVar8 + fVar5) * fVar9,
                   param_8,param_10,0);
    }
  }
  return;
}




void FUN_00a419dc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 ulong param_5,float param_6,long param_7,undefined8 param_8,float *param_9,
                 undefined2 *param_10)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined2 *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
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
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined2 local_9c;
  undefined1 local_9a;
  undefined1 local_99;
  long local_98;
  
  lVar4 = tpidr_el0;
  local_98 = *(long *)(lVar4 + 0x28);
  lVar5 = (**(code **)(**(long **)(param_7 + 200) + 0x10))();
  lVar5 = *(long *)(lVar5 + 0x40);
  fVar8 = (*(float *)(lVar5 + 0x1a0) + 1.0) *
          (*(float *)(lVar5 + 0x38) + *(float *)(lVar5 + 0xec) * (*(float *)(lVar5 + 0x254) + 1.0));
  if (DAT_031324e0 <= fVar8) {
    fVar8 = DAT_031324e0;
  }
  fVar13 = DAT_03132420;
  if (DAT_03132420 <= fVar8) {
    fVar13 = fVar8;
  }
  lVar5 = (**(code **)(**(long **)(param_7 + 200) + 0x10))();
  uVar3 = *(undefined1 *)((long)param_10 + 3);
  fVar8 = *(float *)(*(long *)(lVar5 + 0x40) + 0x308);
  lVar5 = (**(code **)(**(long **)(param_7 + 200) + 0x10))(*(long **)(param_7 + 200));
  if ((*(byte *)(lVar5 + 0x303) & 4) == 0) {
    uVar20 = *(undefined4 *)(param_7 + 0xfc);
    uVar1 = *(undefined4 *)(param_7 + 0x124);
    puVar6 = param_10;
  }
  else {
    fVar9 = fmodf(*(float *)(param_7 + 0x10c) / 0.8,1.0);
    fVar9 = 0.5 - ABS(0.5 - fVar9);
    local_9a = (undefined1)(int)((fVar9 + fVar9) * 112.0 + 80.0);
    local_9c = CONCAT11(local_9a,local_9a);
    uVar20 = *(undefined4 *)(param_7 + 0xfc);
    uVar1 = *(undefined4 *)(param_7 + 0x124);
    puVar6 = &local_9c;
    local_99 = uVar3;
  }
  fVar9 = (float)FUN_00a43688(param_1,param_2,param_3,param_4,param_5,uVar20,param_7,param_8,puVar6,
                              uVar1);
  fVar23 = (float)param_1;
  fVar10 = (float)FUN_00a43688(fVar9 + fVar23,param_2,param_3,param_4,param_5,
                               *(undefined4 *)(param_7 + 0x100),param_7,param_8,param_10,
                               *(undefined4 *)(param_7 + 300));
  fVar11 = (float)FUN_00a43688(fVar9 + fVar23 + fVar10,param_2,param_3,param_4,param_5,
                               *(undefined4 *)(param_7 + 0x104),param_7,param_8,param_10,
                               *(undefined4 *)(param_7 + 0x130));
  iVar7 = *(int *)(param_7 + 0xb0);
  fVar15 = (float)param_2;
  fVar24 = (float)param_4;
  if (iVar7 == 0) {
    param_6 = ((float)param_3 / *(float *)(param_7 + 0xf0)) * param_6;
    if (param_6 <= 2.0) {
      param_6 = 2.0;
    }
    fVar17 = fVar10 + fVar9 + fVar11;
    if (param_6 < fVar17) {
      fVar16 = *param_9;
      fVar25 = param_6;
      do {
        fVar19 = param_9[1] + param_9[1];
        lVar5 = FUN_00f0a7d4((long *)(param_7 + 0xa0),DAT_0313240c);
        fVar21 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 8));
        fVar22 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 6));
        uVar2 = *(uint *)(*(long *)(*(long *)(param_7 + 0xa0) + 8) + 0x3c);
        fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 4));
        fVar12 = (((float)(int)fVar25 + fVar23) - fVar16 * 4.0 * 0.5) - fVar21 * 0.0;
        fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 10));
        fVar26 = 1.0 / (float)(uVar2 & 0x3fff);
        fVar14 = (fVar15 - fVar19) - fVar14 * 0.0;
        FUN_00965b68(fVar12,fVar14,fVar16 * 4.0 + fVar12,fVar19 + fVar24 + fVar14,0,fVar26 * fVar18,
                     1.0 - (1.0 / (float)(uVar2 >> 0xe & 0x3fff)) * fVar22,
                     (fVar18 + fVar21) * fVar26,param_8,param_10,0);
        fVar25 = param_6 + fVar25;
      } while (fVar25 < fVar17);
      iVar7 = *(int *)(param_7 + 0xb0);
      param_3 = param_3 & 0xffffffff;
      param_5 = param_5 & 0xffffffff;
      if (iVar7 != 0) goto LAB_00a41c08;
    }
    fVar25 = (float)param_3;
    fVar17 = (float)param_5;
    if (*(float *)(param_7 + 0xf4) < fVar8) {
      local_9a = 0xff;
      fVar8 = (float)NEON_fminnm((int)(((fVar8 - *(float *)(param_7 + 0xf4)) / fVar13) * 20.0 *
                                      255.0),0x437f0000);
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      local_9c = 0xffff;
      fVar13 = fVar9;
      if (28.0 < fVar9) {
        fVar13 = 28.0;
      }
      local_99 = (undefined1)(int)fVar8;
      lVar5 = FUN_00f0a7d4(param_7 + 0xa0,DAT_03132410);
      fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 8));
      fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 4));
      fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 6));
      uVar2 = *(uint *)(*(long *)(*(long *)(param_7 + 0xa0) + 8) + 0x3c);
      fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 10));
      fVar17 = ((fVar23 + fVar17 + fVar9) - fVar13) - fVar8 * 0.0;
      param_5 = param_5 & 0xffffffff;
      fVar21 = 1.0 / (float)(uVar2 & 0x3fff);
      fVar25 = fVar15 - fVar25 * 0.0;
      FUN_00965b68(fVar17,fVar25,fVar13 + fVar17,fVar25 + fVar24,0,fVar21 * fVar16,
                   1.0 - (1.0 / (float)(uVar2 >> 0xe & 0x3fff)) * fVar19,(fVar16 + fVar8) * fVar21,
                   param_8,&local_9c,0);
      iVar7 = *(int *)(param_7 + 0xb0);
      goto LAB_00a41c08;
    }
  }
  else {
LAB_00a41c08:
    fVar25 = (float)param_3;
    fVar17 = (float)param_5;
    if (iVar7 == 1) goto LAB_00a41f60;
  }
  fVar8 = *(float *)(param_7 + 0x108);
  if (0.0 < fVar8) {
    lVar5 = FUN_00f0a7d4(param_7 + 0xa0,*(undefined4 *)(param_7 + 0x128));
    fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 8));
    uVar2 = *(uint *)(*(long *)(*(long *)(param_7 + 0xa0) + 8) + 0x3c);
    fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 10));
    fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 6));
    fVar21 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 4));
    fVar9 = (fVar23 + fVar17 + fVar9 + fVar10 + fVar11) - fVar13 * 0.0;
    fVar15 = fVar15 - fVar16 * 0.0;
    fVar10 = 1.0 / (float)(uVar2 & 0x3fff);
    FUN_00965b68(fVar9,fVar15,(float)(int)((fVar25 - (fVar17 + fVar17)) * fVar8) + fVar9,
                 fVar15 + fVar24,0,fVar10 * fVar21,
                 1.0 - (1.0 / (float)(uVar2 >> 0xe & 0x3fff)) * fVar19,(fVar21 + fVar13) * fVar10,
                 param_8,param_10,0);
  }
LAB_00a41f60:
  if (*(long *)(lVar4 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a41fa0(float param_1,float param_2,float param_3,float param_4,float param_5,long param_6
                 ,undefined8 param_7,undefined8 param_8,long param_9,int param_10)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint3 *puVar13;
  uint3 *puVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9d;
  uint3 local_9c;
  undefined1 local_99;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  lVar9 = (**(code **)(**(long **)(param_6 + 200) + 0x10))();
  lVar9 = *(long *)(lVar9 + 0x40);
  fVar24 = (*(float *)(lVar9 + 0x24c) + 1.0) *
           (*(float *)(lVar9 + 0xe4) + *(float *)(lVar9 + 0x198) * (*(float *)(lVar9 + 0x300) + 1.0)
           );
  plVar10 = *(long **)(param_6 + 200);
  if (DAT_0313258c <= fVar24) {
    fVar24 = DAT_0313258c;
  }
  fVar22 = DAT_031324c8._4_4_;
  if (DAT_031324c8._4_4_ <= fVar24) {
    fVar22 = fVar24;
  }
  lVar9 = 0;
  if (plVar10 != (long *)0x0) {
    if (*(int *)(param_6 + 0xd0) == (int)plVar10[1]) {
      lVar9 = (**(code **)(*plVar10 + 0x10))();
    }
    else {
      *(undefined8 *)(param_6 + 200) = 0;
      lVar9 = 0;
      *(undefined4 *)(param_6 + 0xd0) = DAT_03214ce8;
    }
  }
  if (fVar22 <= 0.0) {
    if (*(float *)(*(long *)(lVar9 + 0x40) + 0x40) <= 0.0) goto LAB_00a42618;
    plVar10 = *(long **)(param_6 + 200);
    lVar9 = 0;
    if (plVar10 != (long *)0x0) {
      if (*(int *)(param_6 + 0xd0) == (int)plVar10[1]) {
        lVar9 = (**(code **)(*plVar10 + 0x10))();
      }
      else {
        *(undefined8 *)(param_6 + 200) = 0;
        lVar9 = 0;
        *(undefined4 *)(param_6 + 0xd0) = DAT_03214ce8;
      }
    }
    uVar1 = *(ushort *)(lVar9 + 0x88) & 0x1f;
    if (uVar1 == 0x1f) {
LAB_00a421b8:
      lVar9 = (**(code **)(**(long **)(param_6 + 200) + 0x10))();
      uVar4 = *(undefined4 *)(*(long *)(lVar9 + 0x40) + 0x310);
      uVar15 = (undefined2)uVar4;
      uVar16 = (undefined2)((uint)uVar4 >> 0x10);
    }
    else {
      uVar15 = 0;
      uVar16 = 0;
      if (1 < *(ushort *)(lVar9 + (ulong)uVar1 * 0x38 + 0x90) - 3) goto LAB_00a421b8;
    }
    fVar24 = (float)CONCAT22(uVar16,uVar15);
    if ((float)CONCAT22(uVar16,uVar15) <= 0.0) {
      fVar24 = 0.0;
    }
    lVar9 = (**(code **)(**(long **)(param_6 + 200) + 0x10))();
    lVar9 = *(long *)(lVar9 + 0x40);
    bVar5 = false;
    fVar23 = *(float *)(lVar9 + 0x1a8);
    fVar22 = *(float *)(lVar9 + 0x40) + *(float *)(lVar9 + 0xf4) * (*(float *)(lVar9 + 0x25c) + 1.0)
    ;
    uVar15 = (undefined2)DAT_03132428;
    uVar16 = (undefined2)((uint)DAT_03132428 >> 0x10);
    fVar17 = DAT_031324e8;
  }
  else {
    uVar1 = *(ushort *)(lVar9 + 0x88) & 0x1f;
    if (uVar1 == 0x1f) {
LAB_00a420d4:
      lVar9 = (**(code **)(**(long **)(param_6 + 200) + 0x10))();
      uVar4 = *(undefined4 *)(*(long *)(lVar9 + 0x40) + 0x314);
      uVar15 = (undefined2)uVar4;
      uVar16 = (undefined2)((uint)uVar4 >> 0x10);
    }
    else {
      uVar15 = 0;
      uVar16 = 0;
      if (1 < *(ushort *)(lVar9 + (ulong)uVar1 * 0x38 + 0x90) - 3) goto LAB_00a420d4;
    }
    fVar24 = (float)CONCAT22(uVar16,uVar15);
    if ((float)CONCAT22(uVar16,uVar15) <= 0.0) {
      fVar24 = 0.0;
    }
    lVar9 = (**(code **)(**(long **)(param_6 + 200) + 0x10))();
    lVar9 = *(long *)(lVar9 + 0x40);
    bVar5 = true;
    fVar23 = *(float *)(lVar9 + 0x24c);
    fVar22 = *(float *)(lVar9 + 0xe4) +
             *(float *)(lVar9 + 0x198) * (*(float *)(lVar9 + 0x300) + 1.0);
    uVar15 = SUB42(DAT_031324c8._4_4_,0);
    uVar16 = (undefined2)((uint)DAT_031324c8._4_4_ >> 0x10);
    fVar17 = DAT_0313258c;
  }
  fVar22 = (fVar23 + 1.0) * fVar22;
  if (fVar17 <= fVar22) {
    fVar22 = fVar17;
  }
  fVar23 = (float)CONCAT22(uVar16,uVar15);
  if ((float)CONCAT22(uVar16,uVar15) <= fVar22) {
    fVar23 = fVar22;
  }
  if (fVar23 <= 0.0) {
    fVar23 = 0.0;
  }
  fVar22 = (float)NEON_fminnm(fVar24 / fVar23,0x3f800000);
  uVar15 = SUB42(fVar22,0);
  uVar16 = (undefined2)((uint)fVar22 >> 0x10);
  if (fVar22 <= 0.0) {
    uVar15 = 0;
    uVar16 = 0;
  }
  fVar22 = (float)(int)((float)CONCAT22(uVar16,uVar15) * param_3);
  uVar2 = *(undefined1 *)(param_9 + 3);
  bVar6 = false;
  bVar7 = true;
  bVar8 = false;
  if (fVar22 == 0.0) {
    bVar6 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN((float)CONCAT22(uVar16,uVar15))) {
      bVar6 = (float)CONCAT22(uVar16,uVar15) < 0.0;
      bVar7 = (float)CONCAT22(uVar16,uVar15) == 0.0;
      bVar8 = false;
    }
  }
  fVar17 = 1.0;
  if (bVar7 || bVar6 != bVar8) {
    fVar17 = fVar22;
  }
  if (0.0 < fVar17) {
    local_a0 = 0xa8e0;
    local_a4 = 0xf3ff;
    local_9e = 1;
    local_a2 = 1;
    local_a8 = 0xb2b2;
    local_9c = 0xff8030;
    local_a6 = 0xb2;
    local_ac = 0xffff;
    local_aa = 0xff;
    if (param_10 == 1) {
      puVar13 = (uint3 *)&local_a8;
      puVar14 = (uint3 *)&local_ac;
    }
    else {
      puVar13 = &local_9c;
      puVar14 = &local_9c;
      if (param_10 != 2) {
        puVar13 = (uint3 *)&local_a0;
        puVar14 = (uint3 *)&local_a4;
      }
    }
    if (param_5 <= (float)CONCAT22(uVar16,uVar15)) {
      puVar13 = puVar14;
    }
    if (!bVar5) {
      puVar13 = &local_9c;
    }
    local_a9 = uVar2;
    local_a5 = uVar2;
    local_a1 = uVar2;
    local_9d = uVar2;
    local_99 = uVar2;
    lVar9 = FUN_00f0a7d4(param_6 + 0xa0,*(undefined4 *)(param_6 + 0x134));
    fVar22 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 8));
    uVar1 = *(uint *)(*(long *)(*(long *)(param_6 + 0xa0) + 8) + 0x3c);
    fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 10));
    fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 4));
    fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 6));
    fVar19 = param_1 - fVar22 * 0.0;
    fVar18 = param_2 - fVar18 * 0.0;
    fVar21 = 1.0 / (float)(uVar1 & 0x3fff);
    FUN_00965b68(SUB42(fVar19,0),fVar18,SUB42(fVar17 + fVar19,0),SUB42(fVar18 + param_4,0),0,
                 fVar21 * fVar20,1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar25,
                 (fVar20 + fVar22) * fVar21,param_7,puVar13,0);
  }
  if ((fVar24 / fVar23 < 0.25) && (!bVar5 && *(int *)(param_6 + 0xb0) == 0)) {
    plVar10 = *(long **)(param_6 + 200);
    uVar11 = 0;
    if (plVar10 != (long *)0x0) {
      if (*(int *)(param_6 + 0xd0) == (int)plVar10[1]) {
        uVar11 = (**(code **)(*plVar10 + 0x10))();
      }
      else {
        *(undefined8 *)(param_6 + 200) = 0;
        uVar11 = 0;
        *(undefined4 *)(param_6 + 0xd0) = DAT_03214ce8;
      }
    }
    uVar12 = FUN_00d9e99c(uVar11);
    if (((uVar12 & 1) != 0) || (uVar12 = FUN_00ceab64(), (uVar12 & 1) != 0)) {
      fVar22 = fmodf(*(float *)(param_6 + 0x10c) / 0.8,1.0);
      fVar22 = 0.5 - ABS(0.5 - fVar22);
      local_9c = (uint3)(byte)(int)((fVar22 + fVar22) * 144.0 + 80.0);
      local_99 = uVar2;
      lVar9 = FUN_00f0a7d4(param_6 + 0xa0,*(undefined4 *)(param_6 + 0x134));
      fVar22 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 8));
      uVar1 = *(uint *)(*(long *)(*(long *)(param_6 + 0xa0) + 8) + 0x3c);
      fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 10));
      fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 4));
      fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 6));
      fVar19 = (fVar17 + param_1) - fVar22 * 0.0;
      fVar18 = param_2 - fVar18 * 0.0;
      fVar21 = 1.0 / (float)(uVar1 & 0x3fff);
      FUN_00965b68(SUB42(fVar19,0),fVar18,SUB42((param_3 - fVar17) + fVar19,0),
                   SUB42(fVar18 + param_4,0),0,fVar21 * fVar20,
                   1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar25,(fVar20 + fVar22) * fVar21,
                   param_7,&local_9c,0);
    }
  }
  if ((*(int *)(param_6 + 0xb0) == 0) && (fVar24 < *(float *)(param_6 + 0xe0))) {
    fVar24 = *(float *)(param_6 + 0xe0) - fVar24;
    if (fVar23 <= fVar24) {
      fVar24 = fVar23;
    }
    if (fVar24 <= 0.0) {
      fVar24 = 0.0;
    }
    if (!bVar5 && 0.0 < fVar24 / fVar23) {
      local_9c = 0xffc2ae;
      local_99 = uVar2;
      lVar9 = FUN_00f0a7d4(param_6 + 0xa0,*(undefined4 *)(param_6 + 0x138));
      fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 10));
      fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 6));
      uVar1 = *(uint *)(*(long *)(*(long *)(param_6 + 0xa0) + 8) + 0x3c);
      fVar22 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 8));
      param_2 = param_2 - fVar19 * 0.0;
      fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 4));
      fVar25 = 1.0 / (float)(uVar1 & 0x3fff);
      fVar17 = (fVar17 + param_1) - fVar22 * 0.0;
      FUN_00965b68(SUB42(fVar17,0),param_2,SUB42((fVar24 / fVar23) * param_3 + fVar17,0),
                   SUB42(param_2 + param_4,0),0,fVar25 * fVar19,
                   1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar18,(fVar19 + fVar22) * fVar25,
                   param_7,&local_9c,0);
    }
  }
LAB_00a42618:
  if (*(long *)(lVar3 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

