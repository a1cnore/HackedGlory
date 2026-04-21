// functions/009d0 — 13 functions
#include "libGameKindred.h"




void thunk_FUN_009d010c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x8a0) >> 4 & 1) != 0) {
    uVar1 = FUN_00ceab64();
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x828) + 0x18);
      while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef68))) {
        lVar2 = *(long *)(lVar2 + 0x20);
      }
      FUN_00a14894(lVar2,0);
    }
    else {
      lVar2 = FUN_009bbfb0();
      lVar2 = *(long *)(lVar2 + 0x18);
      while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_0312ee00))) {
        lVar2 = *(long *)(lVar2 + 0x20);
      }
      FUN_00a18f90(lVar2,0);
    }
  }
  if ((*(byte *)(param_1 + 0x8a0) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) & 0x45;
    *(undefined4 *)(param_1 + 0x89c) = 0;
    if (*(long *)(param_1 + 0x890) != 0) {
      FUN_00f00464();
      *(undefined8 *)(param_1 + 0x890) = 0;
    }
  }
  return;
}




void FUN_009d010c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x8a0) >> 4 & 1) != 0) {
    uVar1 = FUN_00ceab64();
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x828) + 0x18);
      while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef68))) {
        lVar2 = *(long *)(lVar2 + 0x20);
      }
      FUN_00a14894(lVar2,0);
    }
    else {
      lVar2 = FUN_009bbfb0();
      lVar2 = *(long *)(lVar2 + 0x18);
      while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_0312ee00))) {
        lVar2 = *(long *)(lVar2 + 0x20);
      }
      FUN_00a18f90(lVar2,0);
    }
  }
  if ((*(byte *)(param_1 + 0x8a0) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) & 0x45;
    *(undefined4 *)(param_1 + 0x89c) = 0;
    if (*(long *)(param_1 + 0x890) != 0) {
      FUN_00f00464();
      *(undefined8 *)(param_1 + 0x890) = 0;
    }
  }
  return;
}




void FUN_009d01d0(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  FUN_009cfec4();
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) &&
      (uVar1 = FUN_00ceab64(), (uVar1 & 1) == 0)) && (*(long *)(param_1 + 0x828) != 0)) {
    for (lVar2 = *(long *)(*(long *)(param_1 + 0x828) + 0x18); lVar2 != 0;
        lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_02e3ef68) {
        FUN_00a14ae8((float)(int)*(float *)(param_2 + 5),
                     (float)(int)*(float *)((long)param_2 + 0x2c),lVar2,param_2[4]);
        return;
      }
    }
  }
  return;
}




void thunk_FUN_009d010c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x8a0) >> 4 & 1) != 0) {
    uVar1 = FUN_00ceab64();
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x828) + 0x18);
      while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef68))) {
        lVar2 = *(long *)(lVar2 + 0x20);
      }
      FUN_00a14894(lVar2,0);
    }
    else {
      lVar2 = FUN_009bbfb0();
      lVar2 = *(long *)(lVar2 + 0x18);
      while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_0312ee00))) {
        lVar2 = *(long *)(lVar2 + 0x20);
      }
      FUN_00a18f90(lVar2,0);
    }
  }
  if ((*(byte *)(param_1 + 0x8a0) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) & 0x45;
    *(undefined4 *)(param_1 + 0x89c) = 0;
    if (*(long *)(param_1 + 0x890) != 0) {
      FUN_00f00464();
      *(undefined8 *)(param_1 + 0x890) = 0;
    }
  }
  return;
}




void FUN_009d0298(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,long *param_5,
                 long param_6,undefined4 param_7,long param_8,uint *param_9,undefined8 param_10)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
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
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  long local_a8;
  
  lVar2 = tpidr_el0;
  local_a8 = *(long *)(lVar2 + 0x28);
  local_ac = param_7;
  iVar3 = FUN_00920910();
  if (iVar3 != 0) {
    uVar9 = 0;
    pbVar10 = (byte *)(param_8 + 0x6d);
    do {
      if (((*pbVar10 ^ 0xff) & 5) == 0) {
        lVar4 = (**(code **)(**(long **)(pbVar10 + -0x55) + 0x10))();
        uVar1 = *(uint *)(lVar4 + 0x2f4);
        if (((*param_9 & (uVar1 ^ 0xffffffff)) == 0) &&
           (((param_9[1] == 0xffffffff || ((param_9[1] & uVar1) != 0)) &&
            ((param_9[2] & uVar1) == 0)))) {
          fVar11 = (float)FUN_009cdd60(param_6,pbVar10 + -0x35);
          plVar5 = *(long **)(pbVar10 + -0x45);
          iVar8 = (int)fVar11;
          iVar3 = (int)(float)param_2;
          if (plVar5 == (long *)0x0) {
LAB_009d050c:
            if (*(int *)(pbVar10 + -0x29) == 9) {
              local_b0 = *(undefined4 *)(pbVar10 + -0x15);
              param_2 = (ulong)(uint)(float)iVar3;
              lVar4 = *(long *)(pbVar10 + -0x25);
              fVar13 = *(float *)(param_4 + 0x10) * *(float *)(pbVar10 + -0xd);
              fVar14 = *(float *)(pbVar10 + -0xd) * *(float *)(param_4 + 0x14);
              uVar1 = *(uint *)(*(long *)(*param_5 + 8) + 0x3c);
              fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 8));
              fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 10));
              fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 4));
              fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 6));
              fVar12 = (float)iVar8 - fVar13 * fVar16 * 0.5;
              fVar15 = (float)iVar3 - fVar14 * fVar17 * 0.5;
              fVar11 = 1.0 / (float)(uVar1 & 0x3fff);
              FUN_00965b68(fVar12,fVar15,fVar13 * fVar16 + fVar12,fVar14 * fVar17 + fVar15,0,
                           fVar11 * fVar18,1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar19,
                           (fVar18 + fVar16) * fVar11,param_3,&local_b0,0);
              local_b4 = *(undefined4 *)(pbVar10 + -0x11);
              FUN_00a21c68((float)iVar8,param_2,*(undefined4 *)(pbVar10 + -9),0x3f000000,0x3f000000,
                           *(undefined4 *)(pbVar10 + -0xd),*(undefined4 *)(pbVar10 + -0xd),param_3,
                           param_4,*(undefined8 *)(pbVar10 + -0x1d),param_5,&local_b4);
            }
            else {
              lVar4 = FUN_00920a70();
              lVar7 = *(long *)(pbVar10 + -0x1d);
              if (lVar7 != 0) {
                fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 8));
                uVar1 = *(uint *)(*(long *)(*param_5 + 8) + 0x3c);
                fVar14 = *(float *)(lVar4 + 0x68) * 0.28125;
                fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 10));
                fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 4));
                fVar15 = fVar14 * *(float *)(param_4 + 0x10);
                fVar14 = fVar14 * *(float *)(param_4 + 0x14);
                fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 6));
                fVar12 = (float)iVar8 - fVar15 * fVar17 * 0.5;
                fVar13 = (float)iVar3 - fVar14 * fVar18 * 0.5;
                param_2 = (ulong)(uint)fVar13;
                fVar16 = 1.0 / (float)(uVar1 & 0x3fff);
                FUN_00965b68(fVar12,param_2,fVar15 * fVar17 + fVar12,fVar14 * fVar18 + fVar13,0,
                             fVar16 * fVar19,1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar11,
                             (fVar19 + fVar17) * fVar16,param_3,&local_ac,0);
              }
              lVar4 = *(long *)(pbVar10 + -0x25);
              if (lVar4 != 0) {
                local_b8 = *(undefined4 *)(pbVar10 + -0x15);
                uVar1 = *(uint *)(*(long *)(*param_5 + 8) + 0x3c);
                fVar13 = *(float *)(param_4 + 0x10) * *(float *)(pbVar10 + -0xd);
                fVar12 = *(float *)(pbVar10 + -0xd) * *(float *)(param_4 + 0x14);
                fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 8));
                fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 10));
                fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 4));
                fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 6));
                fVar11 = (float)iVar8 - fVar13 * fVar15 * 0.5;
                fVar14 = (float)iVar3 - fVar12 * fVar16 * 0.5;
                param_2 = (ulong)(uint)fVar14;
                fVar19 = 1.0 / (float)(uVar1 & 0x3fff);
                FUN_00965b68(fVar11,param_2,fVar13 * fVar15 + fVar11,fVar12 * fVar16 + fVar14,0,
                             fVar19 * fVar17,1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar18,
                             (fVar17 + fVar15) * fVar19,param_3,&local_b8,0);
              }
            }
          }
          else {
            if (*(int *)(pbVar10 + -0x3d) != (int)plVar5[1]) {
              pbVar10[-0x45] = 0;
              pbVar10[-0x44] = 0;
              pbVar10[-0x43] = 0;
              pbVar10[-0x42] = 0;
              pbVar10[-0x41] = 0;
              pbVar10[-0x40] = 0;
              pbVar10[-0x3f] = 0;
              pbVar10[-0x3e] = 0;
              *(undefined4 *)(pbVar10 + -0x3d) = DAT_03214ce8;
              goto LAB_009d050c;
            }
            lVar4 = (**(code **)(*plVar5 + 0x10))();
            if (((lVar4 == 0) ||
                (lVar4 = (**(code **)(**(long **)(pbVar10 + -0x45) + 0x10))(),
                *(float *)(lVar4 + 0x44) <= 0.0)) || ((pbVar10[-1] >> 1 & 1) != 0))
            goto LAB_009d050c;
            lVar4 = *(long *)(param_6 + 0x638);
            uVar1 = *(uint *)(*(long *)(*param_5 + 8) + 0x3c);
            fVar11 = 0.625;
            if (*(int *)(pbVar10 + -0x29) != 0xb) {
              fVar11 = 1.0;
            }
            fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 8));
            fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 10));
            fVar12 = *(float *)(param_4 + 0x10) * fVar11;
            fVar15 = fVar11 * *(float *)(param_4 + 0x14);
            fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 6));
            param_2 = (ulong)(uint)(float)iVar3;
            fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 4));
            fVar13 = (float)iVar8 - fVar12 * fVar17 * 0.5;
            fVar16 = (float)iVar3 - fVar15 * fVar18 * 0.5;
            fVar14 = 1.0 / (float)(uVar1 & 0x3fff);
            FUN_00965b68(fVar13,fVar16,fVar12 * fVar17 + fVar13,fVar15 * fVar18 + fVar16,0,
                         fVar14 * fVar19,1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar20,
                         (fVar19 + fVar17) * fVar14,param_3,&DAT_01bee7fa,0);
            FUN_00a20e44((float)iVar8,param_2,*(undefined4 *)(pbVar10 + -9),0x3f000000,0x3f000000,
                         0x3f000000,0x3f000000,fVar11,param_3,param_4,
                         *(undefined8 *)(param_6 + 0x640),param_5,&local_ac,0,0,param_10,fVar11);
          }
          if ((*pbVar10 >> 3 & 1) != 0) {
            param_2 = (ulong)(uint)(float)iVar8;
            FUN_009d0884(param_1,param_2,(float)iVar3,0x3f333333,param_3,param_4 + 0x10,
                         *(undefined8 *)(param_6 + 0x630),param_5);
            FUN_009d0884((float)param_1 + 3.1415927,param_2,(float)iVar3,0x3f333333,param_3,
                         param_4 + 0x10,*(undefined8 *)(param_6 + 0x630),param_5);
          }
        }
      }
      uVar9 = uVar9 + 1;
      uVar6 = FUN_00920910();
      pbVar10 = pbVar10 + 0x70;
    } while (uVar9 < (uVar6 & 0xffffffff));
  }
  if (*(long *)(lVar2 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d0884(float param_1,float param_2,float param_3,float param_4,long *param_5,
                 float *param_6,long param_7,long *param_8)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
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
  float fVar29;
  
  lVar7 = tpidr_el0;
  lVar8 = *(long *)(lVar7 + 0x28);
  uVar2 = *(ushort *)(param_7 + 4);
  uVar3 = *(ushort *)(param_7 + 8);
  uVar4 = *(ushort *)(param_7 + 6);
  uVar5 = *(ushort *)(param_7 + 10);
  fVar19 = param_6[1];
  uVar1 = *(uint *)(*(long *)(*param_8 + 8) + 0x3c);
  fVar18 = *param_6 * (float)(uint)uVar3;
  fVar11 = (float)(uVar1 >> 0xe & 0x3fff);
  fVar12 = fVar18 * 0.5;
  param_2 = param_2 - fVar12;
  fVar12 = fVar12 + param_2;
  fVar13 = sinf(param_1);
  fVar14 = cosf(param_1);
  fVar19 = fVar19 * (float)(uint)uVar5;
  fVar22 = fVar19 * 0.5;
  param_3 = param_3 - fVar22;
  fVar22 = fVar22 + param_3;
  fVar15 = (fVar18 + param_2) - fVar12;
  fVar19 = (fVar19 + param_3) - fVar22;
  fVar20 = fVar14 * (param_2 - fVar12);
  fVar16 = fVar13 * (param_2 - fVar12);
  fVar23 = fVar14 * fVar15;
  fVar15 = fVar13 * fVar15;
  fVar26 = (param_3 - fVar22) * -fVar13;
  fVar24 = fVar14 * (param_3 - fVar22);
  fVar18 = fVar19 * -fVar13;
  fVar14 = fVar14 * fVar19;
  fVar27 = fVar12 + fVar23 + fVar26;
  fVar25 = fVar22 + fVar15 + fVar24;
  fVar21 = fVar12 + fVar20 + fVar18;
  fVar17 = fVar22 + fVar16 + fVar14;
  pfVar9 = (float *)*param_5;
  fVar13 = (float)NEON_fminnm((int)(param_4 * 255.0),0x437f0000);
  fVar19 = (float)(uVar1 & 0x3fff);
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar28 = 1.0 - (float)uVar4 / fVar11;
  fVar29 = (float)((uint)uVar3 + (uint)uVar2) / fVar19;
  *pfVar9 = fVar12 + fVar20 + fVar26;
  pfVar9[1] = fVar22 + fVar16 + fVar24;
  pfVar9[2] = 0.0;
  *(undefined2 *)(pfVar9 + 3) = 0xffff;
  *(undefined1 *)((long)pfVar9 + 0xe) = 0xff;
  uVar6 = (undefined1)(int)fVar13;
  *(undefined1 *)((long)pfVar9 + 0xf) = uVar6;
  pfVar9[4] = fVar29;
  pfVar9[5] = fVar28;
  lVar10 = *param_5;
  fVar11 = 1.0 - (float)((uint)uVar5 + (uint)uVar4) / fVar11;
  *param_5 = lVar10 + 0x18;
  *(int *)(param_5 + 1) = (int)param_5[1] + 1;
  *(float *)(lVar10 + 0x18) = fVar21;
  *(float *)(lVar10 + 0x1c) = fVar17;
  *(undefined4 *)(lVar10 + 0x20) = 0;
  *(undefined2 *)(lVar10 + 0x24) = 0xffff;
  *(undefined1 *)(lVar10 + 0x26) = 0xff;
  *(undefined1 *)(lVar10 + 0x27) = uVar6;
  *(float *)(lVar10 + 0x28) = fVar29;
  *(float *)(lVar10 + 0x2c) = fVar11;
  lVar10 = *param_5;
  fVar19 = (float)uVar2 / fVar19;
  *param_5 = lVar10 + 0x18;
  *(int *)(param_5 + 1) = (int)param_5[1] + 1;
  *(float *)(lVar10 + 0x18) = fVar27;
  *(float *)(lVar10 + 0x1c) = fVar25;
  *(undefined4 *)(lVar10 + 0x20) = 0;
  *(undefined2 *)(lVar10 + 0x24) = 0xffff;
  *(undefined1 *)(lVar10 + 0x26) = 0xff;
  *(undefined1 *)(lVar10 + 0x27) = uVar6;
  *(float *)(lVar10 + 0x28) = fVar19;
  *(float *)(lVar10 + 0x2c) = fVar28;
  lVar10 = *param_5;
  *param_5 = lVar10 + 0x18;
  *(int *)(param_5 + 1) = (int)param_5[1] + 1;
  *(undefined4 *)(lVar10 + 0x20) = 0;
  *(undefined2 *)(lVar10 + 0x24) = 0xffff;
  *(undefined1 *)(lVar10 + 0x26) = 0xff;
  *(undefined1 *)(lVar10 + 0x27) = uVar6;
  *(float *)(lVar10 + 0x28) = fVar29;
  *(float *)(lVar10 + 0x2c) = fVar11;
  *(ulong *)(lVar10 + 0x18) = CONCAT44(fVar17,fVar21);
  lVar10 = *param_5;
  *param_5 = lVar10 + 0x18;
  *(int *)(param_5 + 1) = (int)param_5[1] + 1;
  *(undefined4 *)(lVar10 + 0x20) = 0;
  *(undefined2 *)(lVar10 + 0x24) = 0xffff;
  *(undefined1 *)(lVar10 + 0x26) = 0xff;
  *(undefined1 *)(lVar10 + 0x27) = uVar6;
  *(float *)(lVar10 + 0x28) = fVar19;
  *(float *)(lVar10 + 0x2c) = fVar11;
  *(ulong *)(lVar10 + 0x18) = CONCAT44(fVar22 + fVar15 + fVar14,fVar12 + fVar23 + fVar18);
  lVar10 = *param_5;
  *param_5 = lVar10 + 0x18;
  *(int *)(param_5 + 1) = (int)param_5[1] + 1;
  *(undefined4 *)(lVar10 + 0x20) = 0;
  *(undefined2 *)(lVar10 + 0x24) = 0xffff;
  *(undefined1 *)(lVar10 + 0x26) = 0xff;
  *(undefined1 *)(lVar10 + 0x27) = uVar6;
  *(float *)(lVar10 + 0x28) = fVar19;
  *(float *)(lVar10 + 0x2c) = fVar28;
  *(ulong *)(lVar10 + 0x18) = CONCAT44(fVar25,fVar27);
  *param_5 = *param_5 + 0x18;
  *(int *)(param_5 + 1) = (int)param_5[1] + 1;
  if (*(long *)(lVar7 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d0ba0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_027c2de0;
  puVar1 = param_1 + 5;
  *puVar1 = &PTR_FUN_027c2e20;
  param_1[0x1c] = &PTR_FUN_027c2f80;
  param_1[0xe7] = &PTR_FUN_028266f0;
  param_1[0xfe] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x101);
  FUN_00f13d08(param_1 + 0xe7);
  param_1[0xc9] = &PTR_FUN_028266f0;
  param_1[0xe0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe3);
  FUN_00f13d08(param_1 + 0xc9);
  *puVar1 = &PTR_FUN_028266f0;
  param_1[0x1c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1f);
  FUN_00f13d08(puVar1);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009d0c54(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_027c2de0;
  puVar1 = param_1 + 5;
  *puVar1 = &PTR_FUN_027c2e20;
  param_1[0x1c] = &PTR_FUN_027c2f80;
  param_1[0xe7] = &PTR_FUN_028266f0;
  param_1[0xfe] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x101);
  FUN_00f13d08(param_1 + 0xe7);
  param_1[0xc9] = &PTR_FUN_028266f0;
  param_1[0xe0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe3);
  FUN_00f13d08(param_1 + 0xc9);
  *puVar1 = &PTR_FUN_028266f0;
  param_1[0x1c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1f);
  FUN_00f13d08(puVar1);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_009d0d10(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_027c2de0;
  *param_1 = &PTR_FUN_027c2e20;
  param_1[0x17] = &PTR_FUN_027c2f80;
  param_1[0xe2] = &PTR_FUN_028266f0;
  param_1[0xf9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xfc);
  FUN_00f13d08(param_1 + 0xe2);
  param_1[0xc4] = &PTR_FUN_028266f0;
  param_1[0xdb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xde);
  FUN_00f13d08(param_1 + 0xc4);
  *param_1 = &PTR_FUN_028266f0;
  param_1[0x17] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  FUN_01985bd0(param_1 + -5);
  return;
}




void FUN_009d0dc4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_027c2de0;
  *param_1 = &PTR_FUN_027c2e20;
  param_1[0x17] = &PTR_FUN_027c2f80;
  param_1[0xe2] = &PTR_FUN_028266f0;
  param_1[0xf9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xfc);
  FUN_00f13d08(param_1 + 0xe2);
  param_1[0xc4] = &PTR_FUN_028266f0;
  param_1[0xdb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xde);
  FUN_00f13d08(param_1 + 0xc4);
  *param_1 = &PTR_FUN_028266f0;
  param_1[0x17] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  FUN_01985bd0(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_009d0e80(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[-0x1c] = &PTR_FUN_027c2de0;
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_027c2e20;
  *param_1 = &PTR_FUN_027c2f80;
  param_1[0xcb] = &PTR_FUN_028266f0;
  param_1[0xe2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe5);
  FUN_00f13d08(param_1 + 0xcb);
  param_1[0xad] = &PTR_FUN_028266f0;
  param_1[0xc4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 199);
  FUN_00f13d08(param_1 + 0xad);
  *puVar1 = &PTR_FUN_028266f0;
  *param_1 = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(puVar1);
  FUN_01985bd0(param_1 + -0x1c);
  return;
}




void FUN_009d0f38(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1 + -0x1c;
  *puVar1 = &PTR_FUN_027c2de0;
  puVar2 = param_1 + -0x17;
  *puVar2 = &PTR_FUN_027c2e20;
  *param_1 = &PTR_FUN_027c2f80;
  param_1[0xcb] = &PTR_FUN_028266f0;
  param_1[0xe2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe5);
  FUN_00f13d08(param_1 + 0xcb);
  param_1[0xad] = &PTR_FUN_028266f0;
  param_1[0xc4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 199);
  FUN_00f13d08(param_1 + 0xad);
  *puVar2 = &PTR_FUN_028266f0;
  *param_1 = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(puVar2);
  FUN_01985bd0(puVar1);
  operator_delete(puVar1);
  return;
}




undefined8 FUN_009d0ff8(void)

{
  return 1;
}

