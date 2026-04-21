// functions/00967 — 22 functions
#include "libGameKindred.h"




undefined8 FUN_0096704c(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00e70220(&DAT_0320ffc0);
  piVar2 = &DAT_027bc230;
  uVar3 = 0;
  do {
    if (*piVar2 == iVar1) {
      uVar4 = *(undefined8 *)(piVar2 + 8);
      param_1[5] = *(undefined8 *)(piVar2 + 10);
      param_1[4] = uVar4;
      uVar4 = *(undefined8 *)(piVar2 + 4);
      param_1[3] = *(undefined8 *)(piVar2 + 6);
      param_1[2] = uVar4;
      uVar4 = *(undefined8 *)piVar2;
      param_1[1] = *(undefined8 *)(piVar2 + 2);
      *param_1 = uVar4;
      return 1;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 0xc;
  } while (uVar3 < 3);
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0x3f800000;
  param_1[4] = 0;
  param_1[1] = "rootLayout";
  *param_1 = 0;
  return 0;
}




void FUN_009670d4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f0025c(&fStack_3c,&local_40);
  FUN_00f13ba0(param_3,(int)(*(float *)(param_2 + 8) * fStack_3c),
               (int)(*(float *)(param_2 + 0xc) * local_40),
               (int)(fStack_3c * *(float *)(param_2 + 0x10)),
               (int)(local_40 * *(float *)(param_2 + 0x14)));
  FUN_00f13be8(param_3,(int)*(float *)(param_2 + 0x18));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00967174(undefined8 param_1,undefined8 param_2)

{
  FUN_00f13ba0(param_2,0,0,0,0);
  FUN_00f13be8(param_2,0);
  return;
}




void FUN_009671b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  local_40 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  local_50 = *(undefined8 *)(param_1 + 8);
  FUN_009670d4(param_1,&local_50,param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0096720c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  local_40 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  local_50 = *(undefined8 *)(param_1 + 8);
  FUN_009670d4(param_1,&local_50,param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00967268(int *param_1,int *param_2,int *param_3,int *param_4)

{
  long lVar1;
  float fVar2;
  ulong uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_70;
  float local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pfVar4 = (float *)&UNK_027bc24c;
  fVar2 = (float)FUN_00e70220(&DAT_0320ffc0);
  uVar3 = 0;
  do {
    if (pfVar4[-7] == fVar2) {
      fVar7 = pfVar4[-3];
      fVar6 = pfVar4[-2];
      fVar5 = pfVar4[-1];
      fVar2 = *pfVar4;
      goto LAB_009672f8;
    }
    uVar3 = uVar3 + 1;
    pfVar4 = pfVar4 + 0xc;
  } while (uVar3 < 3);
  fVar2 = 0.0;
  fVar5 = 0.0;
  fVar6 = 0.0;
  fVar7 = 0.0;
LAB_009672f8:
  FUN_00f0025c(&local_6c,&local_70);
  if (param_1 != (int *)0x0) {
    *param_1 = (int)(fVar7 * local_6c);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = (int)(fVar6 * local_70);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = (int)(fVar5 * local_6c);
  }
  if (param_4 != (int *)0x0) {
    *param_4 = (int)(fVar2 * local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00967388(int *param_1,int *param_2,int *param_3,int *param_4)

{
  long lVar1;
  float fVar2;
  ulong uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_70;
  float local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pfVar4 = (float *)&UNK_027bc24c;
  fVar2 = (float)FUN_00e70220(&DAT_0320ffc0);
  uVar3 = 0;
  do {
    if (pfVar4[-7] == fVar2) {
      fVar7 = pfVar4[-3];
      fVar6 = pfVar4[-2];
      fVar5 = pfVar4[-1];
      fVar2 = *pfVar4;
      goto LAB_00967418;
    }
    uVar3 = uVar3 + 1;
    pfVar4 = pfVar4 + 0xc;
  } while (uVar3 < 3);
  fVar2 = 0.0;
  fVar5 = 0.0;
  fVar6 = 0.0;
  fVar7 = 0.0;
LAB_00967418:
  FUN_00f0025c(&local_6c,&local_70);
  if (param_1 != (int *)0x0) {
    *param_1 = (int)(fVar7 * local_6c);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = (int)(fVar6 * local_70);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = (int)(fVar5 * local_6c);
  }
  if (param_4 != (int *)0x0) {
    *param_4 = (int)(fVar2 * local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009674a8(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 1;
  *param_1 = &PTR_FUN_027bc2d0;
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = *(undefined8 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 2) = uVar1;
  FUN_0197ec78(0x200);
  return;
}




void FUN_009674e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bc2d0;
  FUN_0197ecf0();
  return;
}




void FUN_009674f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bc2d0;
  FUN_0197ecf0();
  operator_delete(param_1);
  return;
}




void FUN_0096752c(void)

{
  return;
}




void FUN_00967530(long param_1,undefined8 param_2,undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  uint uVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  ulong uVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  ulong uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  uint local_1120;
  uint uStack_111c;
  uint local_1118;
  uint uStack_1114;
  ulong local_1110;
  float fStack_1108;
  float fStack_1104;
  float fStack_1100;
  float fStack_10fc;
  ulong local_10f0;
  undefined4 local_10e8;
  ulong local_10e0;
  undefined4 local_10d8;
  ulong local_10d0;
  float fStack_10c8;
  float afStack_10c4 [13];
  long local_1090 [512];
  long local_90;
  
  lVar3 = tpidr_el0;
  local_90 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_1 + 0x18) != '\0') {
    uVar4 = FUN_01988c10(local_1090,0x200,4,param_3);
    if (uVar4 == 0) {
      uVar7 = FUN_0199c9f8(param_2,0);
      puVar5 = (ulong *)&DAT_01e632b0;
      uVar14 = 0xbf800000;
      uVar16 = 0x3f800000;
      uVar24 = 0;
      uVar25 = 0;
      plVar8 = (long *)0x0;
      uVar4 = 0;
      uVar10 = uVar14;
      uVar12 = uVar16;
      uVar22 = uVar14;
      uVar23 = uVar16;
    }
    else {
      plVar8 = (long *)0x0;
      if (local_1090[0] != 0) {
        plVar8 = (long *)(local_1090[0] + -8);
      }
      (**(code **)(*plVar8 + 0x10))();
      puVar5 = (ulong *)FUN_0198ac08();
      fStack_1100 = (float)puVar5[2];
      fStack_10fc = (float)(puVar5[2] >> 0x20);
      local_1110 = *puVar5;
      plVar8 = (long *)0x0;
      if (local_1090[0] != 0) {
        plVar8 = (long *)(local_1090[0] + -8);
      }
      fStack_1108 = (float)puVar5[1];
      fStack_1104 = (float)(puVar5[1] >> 0x20);
      lVar6 = (**(code **)(*plVar8 + 0x18))();
      fStack_10c8 = fStack_1108;
      local_10d0 = local_1110;
      local_10d8 = fStack_10fc;
      local_10e0 = CONCAT44(fStack_1100,fStack_1104);
      fStack_1104 = *(float *)(lVar6 + 0x30);
      fStack_1100 = *(float *)(lVar6 + 0x34);
      local_1110 = *(ulong *)(lVar6 + 0x30);
      lVar9 = 0;
      fVar26 = *(float *)(lVar6 + 0x38);
      fStack_1108 = fVar26;
      uVar10 = (ulong)&local_1110 | 0xc;
      fVar13 = fStack_1104;
      fVar15 = fStack_1104;
      while( true ) {
        lVar11 = 0;
        do {
          fVar17 = *(float *)(lVar6 + lVar11 * 4);
          pfVar1 = (float *)((long)&local_10d0 + lVar11);
          pfVar2 = (float *)((long)&local_10e0 + lVar11);
          lVar11 = lVar11 + 4;
          fVar20 = fVar17 * *pfVar1;
          fVar17 = fVar17 * *pfVar2;
          fVar27 = fVar17;
          if (fVar17 <= fVar20) {
            fVar27 = fVar20;
            fVar20 = fVar17;
          }
          fVar15 = fVar15 + fVar20;
          fVar13 = fVar27 + fVar13;
        } while (lVar11 != 0xc);
        *(float *)((long)&local_1110 + lVar9 * 4) = fVar15;
        *(float *)(uVar10 + lVar9 * 4) = fVar13;
        lVar9 = lVar9 + 1;
        if (lVar9 == 3) break;
        fVar15 = *(float *)((long)&local_1110 + lVar9 * 4);
        fVar13 = *(float *)(uVar10 + lVar9 * 4);
        lVar6 = lVar6 + 4;
      }
      uVar10 = local_1110;
      fVar13 = fStack_1108;
      fVar15 = fStack_1104;
      fVar27 = fStack_1100;
      if (1 < uVar4) {
        uVar12 = 1;
        fStack_10fc = fVar26;
        do {
          plVar8 = (long *)0x0;
          if (local_1090[uVar12] != 0) {
            plVar8 = (long *)(local_1090[uVar12] + -8);
          }
          (**(code **)(*plVar8 + 0x10))();
          puVar5 = (ulong *)FUN_0198ac08();
          afStack_10c4[1] = (float)puVar5[2];
          afStack_10c4[2] = (float)(puVar5[2] >> 0x20);
          local_10d0 = *puVar5;
          plVar8 = (long *)0x0;
          if (local_1090[uVar12] != 0) {
            plVar8 = (long *)(local_1090[uVar12] + -8);
          }
          fStack_10c8 = (float)puVar5[1];
          afStack_10c4[0] = (float)(puVar5[1] >> 0x20);
          lVar6 = (**(code **)(*plVar8 + 0x18))();
          local_10d8 = fStack_10c8;
          local_10e0 = local_10d0;
          local_10e8 = afStack_10c4[2];
          local_10f0 = CONCAT44(afStack_10c4[1],afStack_10c4[0]);
          fVar20 = *(float *)(lVar6 + 0x30);
          lVar9 = 0;
          local_10d0 = *(ulong *)(lVar6 + 0x30);
          fStack_10c8 = *(float *)(lVar6 + 0x38);
          afStack_10c4[1] = *(float *)(lVar6 + 0x34);
          afStack_10c4[2] = *(float *)(lVar6 + 0x38);
          fVar17 = fVar20;
          afStack_10c4[0] = fVar20;
          while( true ) {
            lVar11 = 0;
            do {
              fVar18 = *(float *)(lVar6 + lVar11 * 4);
              pfVar1 = (float *)((long)&local_10e0 + lVar11);
              pfVar2 = (float *)((long)&local_10f0 + lVar11);
              lVar11 = lVar11 + 4;
              fVar21 = fVar18 * *pfVar1;
              fVar18 = fVar18 * *pfVar2;
              fVar19 = fVar18;
              if (fVar18 <= fVar21) {
                fVar19 = fVar21;
                fVar21 = fVar18;
              }
              fVar17 = fVar17 + fVar21;
              fVar20 = fVar19 + fVar20;
            } while (lVar11 != 0xc);
            *(float *)((long)&local_10d0 + lVar9 * 4) = fVar17;
            afStack_10c4[lVar9] = fVar20;
            lVar9 = lVar9 + 1;
            if (lVar9 == 3) break;
            fVar17 = *(float *)((long)&local_10d0 + lVar9 * 4);
            fVar20 = afStack_10c4[lVar9];
            lVar6 = lVar6 + 4;
          }
          uVar12 = uVar12 + 1;
          uVar10 = local_10d0 ^
                   (local_10d0 ^ uVar10) &
                   CONCAT44(-(uint)((float)(uVar10 >> 0x20) < (float)(local_10d0 >> 0x20)),
                            -(uint)((float)uVar10 < (float)local_10d0));
          fVar15 = (float)((uint)afStack_10c4[0] ^
                          ((uint)afStack_10c4[0] ^ (uint)fVar15) & -(uint)(afStack_10c4[0] < fVar15)
                          );
          fVar27 = (float)((uint)afStack_10c4[1] ^
                          ((uint)afStack_10c4[1] ^ (uint)fVar27) & -(uint)(afStack_10c4[1] < fVar27)
                          );
          if (fStack_10c8 <= fVar13) {
            fVar13 = fStack_10c8;
          }
          if (fVar26 <= afStack_10c4[2]) {
            fVar26 = afStack_10c4[2];
          }
        } while (uVar12 != uVar4);
      }
      fStack_10fc = fVar26;
      fStack_1100 = fVar27;
      fStack_1104 = fVar15;
      fStack_1108 = fVar13;
      local_1110 = uVar10;
      FUN_009678ec(&local_1110,param_1 + 8,&local_10d0,&local_10e0,&local_10f0,&uStack_1114,
                   &local_1118,&uStack_111c,&local_1120);
      uVar7 = FUN_0199c9f8(param_2,0);
      uVar14 = local_10e0 & 0xffffffff;
      uVar16 = local_10f0 & 0xffffffff;
      uVar25 = 0x3e4ccccd;
      uVar24 = 0x40000000;
      plVar8 = local_1090;
      puVar5 = &local_10d0;
      uVar10 = (ulong)uStack_1114;
      uVar12 = (ulong)local_1118;
      uVar22 = (ulong)uStack_111c;
      uVar23 = (ulong)local_1120;
    }
    uVar24 = FUN_0197ee48(uVar14,uVar16,uVar10,uVar12,uVar22,uVar23,uVar24,uVar25,uVar7,plVar8,uVar4
                          ,puVar5);
    *(undefined4 *)(param_1 + 0x14) = uVar24;
  }
  if (*(long *)(lVar3 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009678ec(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,float *param_4,
                 float *param_5,float *param_6,float *param_7,undefined8 param_8,float *param_9)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_180 [64];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  float local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  float local_a8;
  undefined4 uStack_a4;
  long local_a0;
  
  lVar1 = tpidr_el0;
  local_a0 = *(long *)(lVar1 + 0x28);
  fVar4 = -(float)*param_2 - (float)DAT_03218f30;
  fVar5 = -(float)((ulong)*param_2 >> 0x20) - (float)((ulong)DAT_03218f30 >> 0x20);
  fVar6 = -*(float *)(param_2 + 1) - DAT_03218f38;
  fVar3 = fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
  fVar2 = SQRT(fVar3);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(fVar3);
  }
  fVar6 = fVar6 / fVar2;
  fVar4 = fVar4 / fVar2;
  fVar5 = fVar5 / fVar2;
  fVar8 = DAT_03218f7c * fVar6 - DAT_03218f80 * fVar5;
  fVar7 = DAT_03218f80 * fVar4 - fVar6 * DAT_03218f78;
  fVar3 = DAT_03218f78 * fVar5 - DAT_03218f7c * fVar4;
  fVar2 = fVar3 * fVar3 + fVar8 * fVar8 + fVar7 * fVar7;
  local_d8 = SQRT(fVar2);
  if (NAN(local_d8)) {
    local_d8 = sqrtf(fVar2);
  }
  local_e0 = fVar8 / local_d8;
  fStack_dc = fVar7 / local_d8;
  local_d8 = fVar3 / local_d8;
  local_b0 = DAT_03218f30;
  local_a8 = DAT_03218f38;
  local_d0 = fVar5 * local_d8 - fVar6 * fStack_dc;
  fStack_cc = fVar6 * local_e0 - fVar4 * local_d8;
  local_c8 = fVar4 * fStack_dc - fVar5 * local_e0;
  uStack_a4 = 0x3f800000;
  local_d4 = 0;
  local_c4 = 0;
  local_b4 = 0;
  local_140 = param_1[3];
  uStack_124 = param_1[4];
  uStack_134 = *param_1;
  uStack_13c = param_1[1];
  local_138 = param_1[5];
  local_108 = param_1[2];
  local_130 = uStack_13c;
  uStack_12c = local_138;
  local_128 = local_140;
  local_120 = local_138;
  uStack_11c = uStack_134;
  local_118 = uStack_124;
  uStack_114 = local_138;
  local_110 = local_140;
  uStack_10c = uStack_13c;
  uStack_104 = uStack_134;
  local_100 = uStack_13c;
  uStack_fc = local_108;
  local_f8 = local_140;
  uStack_f4 = uStack_124;
  local_f0 = local_108;
  uStack_ec = uStack_134;
  local_e8 = uStack_124;
  uStack_e4 = local_108;
  local_c0 = CONCAT44(fVar5,fVar4);
  local_b8 = fVar6;
  FUN_0197f0d8(&local_e0,&local_140,8,auStack_180,param_4,param_5,param_6,param_7,param_8,param_9);
  FUN_00967cc0(param_3,auStack_180);
  *param_9 = *param_9 + *param_9;
  fVar2 = *param_4;
  if (*param_7 <= *param_4) {
    fVar2 = *param_7;
  }
  *param_7 = fVar2;
  *param_4 = fVar2;
  fVar2 = *param_5;
  if (*param_5 <= *param_6) {
    fVar2 = *param_6;
  }
  *param_6 = fVar2;
  *param_5 = fVar2;
  if (*(long *)(lVar1 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00967b6c(long param_1)

{
  if ((*(char *)(param_1 + 0x18) != '\0') && (-1 < *(int *)(param_1 + 0x14))) {
    FUN_0197eeb0();
    return;
  }
  return;
}




void FUN_00967b84(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar3 = FUN_0197ed68();
  if (((uVar3 & 1) != 0) && (iVar2 = FUN_0092ea24(), iVar2 == 1)) {
    puVar4 = operator_new(0x20);
    *(undefined4 *)((long)puVar4 + 0x14) = 0xffffffff;
    *(undefined1 *)(puVar4 + 3) = 1;
    *puVar4 = &PTR_FUN_027bc2d0;
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    puVar4[1] = *(undefined8 *)(param_1 + 4);
    *(undefined4 *)(puVar4 + 2) = uVar1;
    FUN_0197ec78(0x200);
    DAT_02c7ed60 = puVar4;
  }
  return;
}




bool FUN_00967c00(void)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = FUN_0197ed68();
  bVar1 = false;
  if ((uVar3 & 1) != 0) {
    iVar2 = FUN_0092ea24(0);
    bVar1 = iVar2 == 1;
  }
  return bVar1;
}




void FUN_00967c2c(void)

{
  if (DAT_02c7ed60 != (long *)0x0) {
    (**(code **)(*DAT_02c7ed60 + 8))();
    DAT_02c7ed60 = (long *)0x0;
  }
  return;
}




bool FUN_00967c60(void)

{
  return DAT_02c7ed60 != 0;
}




void FUN_00967c78(void)

{
  return;
}




void FUN_00967c7c(undefined8 param_1,undefined8 param_2)

{
  if (DAT_02c7ed60 != 0) {
    FUN_00967530(DAT_02c7ed60,param_1,param_2);
    return;
  }
  return;
}




void FUN_00967c9c(void)

{
  if (((DAT_02c7ed60 != 0) && (*(char *)(DAT_02c7ed60 + 0x18) != '\0')) &&
     (-1 < *(int *)(DAT_02c7ed60 + 0x14))) {
    FUN_0197eeb0();
    return;
  }
  return;
}




undefined4 FUN_00967cc0(float *param_1,float *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  
  fVar6 = *param_2;
  fVar11 = param_2[1];
  fVar13 = param_2[8];
  fVar20 = param_2[9];
  fVar4 = param_2[6];
  fVar12 = param_2[7];
  fVar15 = param_2[2];
  fVar16 = param_2[3];
  fVar17 = param_2[10];
  fVar21 = param_2[0xb];
  fVar22 = param_2[0xe];
  fVar25 = param_2[0xf];
  fVar10 = param_2[4];
  fVar19 = param_2[5];
  fVar14 = param_2[0xc];
  fVar24 = param_2[0xd];
  fVar7 = fVar6 * fVar20 - fVar11 * fVar13;
  fVar5 = fVar6 * fVar19 - fVar10 * fVar11;
  fVar11 = fVar6 * fVar24 - fVar11 * fVar14;
  fVar6 = fVar10 * fVar20 - fVar19 * fVar13;
  fVar23 = fVar4 * fVar25 - fVar12 * fVar22;
  fVar26 = fVar17 * fVar25 - fVar21 * fVar22;
  fVar13 = fVar13 * fVar24 - fVar20 * fVar14;
  fVar18 = fVar4 * fVar21 - fVar12 * fVar17;
  fVar12 = fVar15 * fVar12 - fVar4 * fVar16;
  fVar22 = fVar15 * fVar25 - fVar16 * fVar22;
  fVar4 = fVar10 * fVar24 - fVar19 * fVar14;
  fVar14 = fVar15 * fVar21 - fVar16 * fVar17;
  fVar10 = fVar13 * fVar12 +
           ((fVar6 * fVar22 + fVar11 * fVar18 + (fVar5 * fVar26 - fVar7 * fVar23)) - fVar4 * fVar14)
  ;
  if (1e-08 <= ABS(fVar10)) {
    *param_1 = fVar24 * fVar18 + (fVar19 * fVar26 - fVar20 * fVar23);
    lVar2 = 0;
    param_1[1] = (fVar22 * param_2[9] - fVar26 * param_2[1]) - fVar14 * param_2[0xd];
    param_1[2] = (fVar23 * param_2[1] - fVar22 * param_2[5]) + fVar12 * param_2[0xd];
    param_1[3] = (fVar14 * param_2[5] - fVar18 * param_2[1]) - fVar12 * param_2[9];
    param_1[4] = (fVar23 * param_2[8] - fVar26 * param_2[4]) - fVar18 * param_2[0xc];
    param_1[5] = (fVar26 * *param_2 - fVar22 * param_2[8]) + fVar14 * param_2[0xc];
    param_1[6] = (fVar22 * param_2[4] - fVar23 * *param_2) - fVar12 * param_2[0xc];
    param_1[7] = (fVar18 * *param_2 - fVar14 * param_2[4]) + fVar12 * param_2[8];
    param_1[8] = (fVar13 * param_2[7] - fVar4 * param_2[0xb]) + fVar6 * param_2[0xf];
    param_1[9] = (fVar11 * param_2[0xb] - fVar13 * param_2[3]) - fVar7 * param_2[0xf];
    param_1[10] = (fVar4 * param_2[3] - fVar11 * param_2[7]) + fVar5 * param_2[0xf];
    param_1[0xb] = (fVar7 * param_2[7] - fVar6 * param_2[3]) - fVar5 * param_2[0xb];
    param_1[0xc] = (fVar4 * param_2[10] - fVar13 * param_2[6]) - fVar6 * param_2[0xe];
    param_1[0xd] = (fVar13 * param_2[2] - fVar11 * param_2[10]) + fVar7 * param_2[0xe];
    param_1[0xe] = (fVar11 * param_2[6] - fVar4 * param_2[2]) - fVar5 * param_2[0xe];
    fVar10 = 1.0 / fVar10;
    param_1[0xf] = (fVar6 * param_2[2] - fVar7 * param_2[6]) + fVar5 * param_2[10];
    do {
      lVar3 = 0;
      do {
        uVar9 = ((undefined8 *)((long)param_1 + lVar3))[1];
        uVar8 = *(undefined8 *)((long)param_1 + lVar3);
        ((undefined8 *)((long)param_1 + lVar3))[1] =
             CONCAT44(fVar10 * (float)((ulong)uVar9 >> 0x20),fVar10 * (float)uVar9);
        *(undefined8 *)((long)param_1 + lVar3) =
             CONCAT44(fVar10 * (float)((ulong)uVar8 >> 0x20),fVar10 * (float)uVar8);
        lVar3 = lVar3 + 0x10;
      } while (lVar3 != 0x10);
      lVar2 = lVar2 + 1;
      param_1 = param_1 + 4;
    } while (lVar2 != 4);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    param_1[0xe] = 0.0;
    param_1[0xf] = 0.0;
    param_1[0xc] = 0.0;
    param_1[0xd] = 0.0;
    param_1[10] = 0.0;
    param_1[0xb] = 0.0;
    param_1[8] = 0.0;
    param_1[9] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[0] = 0.0;
    param_1[1] = 0.0;
  }
  return uVar1;
}

