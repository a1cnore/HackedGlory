// functions/00ec4 — 14 functions
#include "libGameKindred.h"




void FUN_00ec4188(undefined8 param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  int iVar8;
  long *plVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined2 *puVar12;
  long *plVar13;
  undefined2 *puVar14;
  double dVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined8 local_178;
  void *pvStack_170;
  void *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  int local_148;
  undefined4 uStack_144;
  undefined8 *local_140;
  undefined8 uStack_138;
  void *local_130;
  void *local_128;
  long local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined1 auStack_100 [8];
  int local_f8;
  undefined1 auStack_f0 [16];
  ulong local_e0;
  int local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  ulong uStack_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  ulong uStack_98;
  long local_90;
  
  lVar2 = tpidr_el0;
  local_90 = *(long *)(lVar2 + 0x28);
  local_158 = 0;
  uStack_150 = 0x100;
  local_140 = &local_178;
  uStack_138 = 0;
  uStack_160 = 0;
  local_168 = (void *)0x0;
  pvStack_170 = (void *)0x0;
  local_178 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = (void *)0x0;
  local_128 = (void *)0x0;
  local_110 = 0x200;
  local_108 = 0;
  FUN_00916df0(&local_140);
  plVar13 = (long *)*param_2;
  puVar3 = local_140;
  do {
    local_140 = puVar3;
    if (plVar13 == param_2 + 1) {
      local_120 = local_120 + -0x10;
      puVar10 = (undefined1 *)puVar3[3];
      puVar7 = puVar10 + 1;
      if ((undefined1 *)puVar3[4] <= puVar7) {
        FUN_008fe7c0(puVar3,1);
        puVar10 = (undefined1 *)puVar3[3];
        puVar7 = puVar10 + 1;
      }
      puVar3[3] = puVar7;
      *puVar10 = 0x7d;
      uVar6 = FUN_009155f8(&local_178);
      FUN_008fa54c(param_1,uVar6);
      free(local_128);
      if (local_130 != (void *)0x0) {
        operator_delete(local_130);
      }
      free(local_168);
      if (pvStack_170 != (void *)0x0) {
        operator_delete(pvStack_170);
      }
      if (*(long *)(lVar2 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    iVar8 = *(int *)(plVar13 + 5);
    if (iVar8 == 3) {
      FUN_00e83cf0(&local_140,plVar13[4]);
      fVar16 = *(float *)(plVar13 + 9);
      dVar15 = (double)fVar16;
      FUN_00916f0c(&local_140,6);
      puVar3 = local_140;
      puVar14 = (undefined2 *)local_140[3];
      puVar7 = (undefined1 *)((long)puVar14 + 0x19);
      if ((undefined1 *)local_140[4] <= puVar7) {
        FUN_008fe7c0(local_140,0x19);
        puVar14 = (undefined2 *)puVar3[3];
        puVar7 = (undefined1 *)((long)puVar14 + 0x19);
      }
      puVar3[3] = puVar7;
      if (ABS(dVar15) == 0.0) {
        puVar12 = puVar14;
        if ((long)dVar15 < 0) {
          puVar12 = (undefined2 *)((long)puVar14 + 1);
          *(undefined1 *)puVar14 = 0x2d;
        }
        *puVar12 = 0x2e30;
        *(undefined1 *)(puVar12 + 1) = 0x30;
        puVar7 = (undefined1 *)((long)puVar12 + 3);
      }
      else {
        puVar12 = puVar14;
        if (fVar16 < 0.0) {
          puVar12 = (undefined2 *)((long)puVar14 + 1);
          *(undefined1 *)puVar14 = 0x2d;
          dVar15 = -dVar15;
        }
        bVar4 = ((ulong)dVar15 >> 0x34 & 0x7ff) != 0;
        local_e0 = (ulong)dVar15 & 0xfffffffffffff;
        if (bVar4) {
          local_e0 = (ulong)dVar15 & 0xfffffffffffff | 0x10000000000000;
        }
        local_d8 = -0x432;
        if (bVar4) {
          local_d8 = ((uint)((ulong)dVar15 >> 0x34) & 0x7ff) - 0x433;
        }
        FUN_00918050(&local_e0,auStack_f0,auStack_100);
        local_c0 = local_e0 << (LZCOUNT(local_e0) & 0x3fU);
        uStack_b8 = (ulong)(uint)(local_d8 - (int)LZCOUNT(local_e0));
        dVar15 = (double)(-0x3d - local_f8) * 0.30102999566398114 + 347.0;
        iVar8 = (int)dVar15;
        uVar1 = ((int)((uint)(0.0 < dVar15 - (double)iVar8) + iVar8) >> 3) + 1;
        local_a0 = *(undefined8 *)(&DAT_01b93840 + (ulong)uVar1 * 8);
        local_148 = uVar1 * -8 + 0x15c;
        uStack_98 = (long)*(short *)(&DAT_01b93af8 + (ulong)uVar1 * 2) & 0xffffffff;
        auVar17 = FUN_0091810c(&local_c0,&local_a0);
        local_b0 = auVar17;
        auVar17 = FUN_0091810c(auStack_100,&local_a0);
        local_c8 = auVar17._8_8_;
        uVar5 = FUN_0091810c(auStack_f0,&local_a0);
        local_d0 = auVar17._0_8_ + -1;
        FUN_00918168(local_b0,&local_d0,local_d0 + ~uVar5,puVar12,&uStack_144,&local_148);
        puVar7 = (undefined1 *)FUN_00917e7c(puVar12,uStack_144,local_148);
      }
      lVar11 = -0x19 - (long)puVar14;
LAB_00ec44a4:
      local_140[3] = puVar7 + local_140[3] + lVar11;
    }
    else {
      if (iVar8 == 2) {
        FUN_00e83cf0(&local_140,plVar13[4]);
        iVar8 = *(int *)(plVar13 + 9);
        FUN_00916f0c(&local_140,6);
        puVar3 = local_140;
        puVar10 = (undefined1 *)local_140[3];
        puVar7 = puVar10 + 0xb;
        if ((undefined1 *)local_140[4] <= puVar7) {
          FUN_008fe7c0(local_140,0xb);
          puVar10 = (undefined1 *)puVar3[3];
          puVar7 = puVar10 + 0xb;
        }
        puVar3[3] = puVar7;
        puVar7 = puVar10;
        if (iVar8 < 0) {
          puVar7 = puVar10 + 1;
          *puVar10 = 0x2d;
          iVar8 = -iVar8;
        }
        puVar7 = (undefined1 *)FUN_0091754c(iVar8,puVar7);
        lVar11 = -0xb - (long)puVar10;
        goto LAB_00ec44a4;
      }
      if (iVar8 == 1) {
        FUN_00e83cf0(&local_140,plVar13[4]);
        if ((*(byte *)(plVar13 + 6) & 1) == 0) {
          lVar11 = (long)plVar13 + 0x31;
        }
        else {
          lVar11 = plVar13[8];
        }
        FUN_00e83d40(&local_140,lVar11);
      }
    }
    plVar9 = (long *)plVar13[1];
    puVar3 = local_140;
    if ((long *)plVar13[1] == (long *)0x0) {
      plVar9 = plVar13 + 2;
      bVar4 = (long *)*(long *)*plVar9 != plVar13;
      plVar13 = (long *)*plVar9;
      if (bVar4) {
        do {
          lVar11 = *plVar9;
          plVar9 = (long *)(lVar11 + 0x10);
          plVar13 = (long *)*plVar9;
        } while (*plVar13 != lVar11);
      }
    }
    else {
      do {
        plVar13 = plVar9;
        plVar9 = (long *)*plVar13;
      } while ((long *)*plVar13 != (long *)0x0);
    }
  } while( true );
}




void FUN_00ec45c0(byte *param_1,undefined8 param_2)

{
  float fVar1;
  long lVar2;
  double dVar3;
  undefined8 *puVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  long local_130;
  ulong local_128;
  undefined4 local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  void *local_100;
  void *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  float *local_c8;
  float *local_c0;
  ulong local_b8 [2];
  void *local_a8;
  float local_a0;
  undefined4 local_98 [2];
  ulong local_90 [2];
  void *local_80;
  float local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = (void *)0x0;
  local_f8 = (void *)0x0;
  local_108 = 0;
  local_e0 = 0x400;
  local_d8 = 0;
  local_d0 = 0;
  local_118 = operator_new(0x28);
  local_118[3] = 0;
  local_118[4] = 0;
  local_118[1] = 0x10000;
  local_118[2] = 0;
  *local_118 = 0;
  local_c8 = *(float **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    local_c8 = (float *)(param_1 + 1);
  }
  local_110 = local_118;
  local_c0 = local_c8;
  FUN_008fd344(&local_130,&local_c8);
  if ((int)local_128 != 0) {
    pfVar6 = (float *)(local_130 + 0x18);
    do {
      if ((*(byte *)((long)pfVar6 + -6) >> 6 & 1) == 0) {
        pfVar7 = *(float **)(pfVar6 + -6);
      }
      else {
        pfVar7 = pfVar6 + -6;
      }
      if (pfVar7 != (float *)0x0) {
        fVar1 = pfVar6[4];
        if (((uint)fVar1 >> 0xe & 1) == 0) {
          if (((uint)fVar1 >> 10 & 1) == 0) {
            if (((uint)fVar1 >> 0xc & 1) == 0) {
              if (((uint)fVar1 >> 0x14 & 1) == 0) goto LAB_00ec4794;
              pfVar5 = pfVar6;
              if (((uint)fVar1 >> 0x16 & 1) == 0) {
                pfVar5 = *(float **)pfVar6;
              }
              FUN_00ec3db8(local_98,pfVar5);
              local_c0 = (float *)CONCAT44(local_c0._4_4_,local_98[0]);
              goto LAB_00ec4754;
            }
            local_78 = (float)*(undefined8 *)pfVar6;
          }
          else {
            local_78 = *pfVar6;
          }
          local_80 = (void *)0x0;
          local_90[1] = 0;
          local_90[0] = 0;
          local_98[0] = 2;
          local_c0 = (float *)CONCAT44(local_c0._4_4_,2);
        }
        else {
          dVar3 = (double)FUN_008fc0f0(pfVar6);
          local_78 = (float)dVar3;
          local_90[1] = 0;
          local_80 = (void *)0x0;
          local_90[0] = 0;
          local_98[0] = 3;
          local_c0 = (float *)CONCAT44(local_c0._4_4_,3);
        }
LAB_00ec4754:
        local_a8 = (void *)0x0;
        local_b8[1] = 0;
        local_b8[0] = 0;
        local_c8 = pfVar7;
        FUN_008fce60(local_b8,local_90);
        local_a0 = local_78;
        FUN_00ec4d68(param_2,&local_c8);
        if ((local_b8[0] & 1) != 0) {
          operator_delete(local_a8);
        }
        if ((local_90[0] & 1) != 0) {
          operator_delete(local_80);
        }
      }
LAB_00ec4794:
      pfVar7 = pfVar6 + 6;
      pfVar6 = pfVar6 + 0xc;
    } while (pfVar7 != (float *)(local_130 + (local_128 & 0xffffffff) * 0x30));
  }
  puVar4 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_110);
    operator_delete(puVar4);
  }
  free(local_f8);
  if (local_100 != (void *)0x0) {
    operator_delete(local_100);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec4810(undefined8 param_1,long *param_2)

{
  uint uVar1;
  byte *pbVar2;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  int iVar9;
  long *plVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined2 *puVar13;
  long *plVar14;
  undefined2 *puVar15;
  double dVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined8 local_178;
  void *pvStack_170;
  void *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  int local_148;
  undefined4 uStack_144;
  undefined8 *local_140;
  undefined8 uStack_138;
  void *local_130;
  void *local_128;
  long local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined1 auStack_100 [8];
  int local_f8;
  undefined1 auStack_f0 [16];
  ulong local_e0;
  int local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  ulong uStack_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  ulong uStack_98;
  long local_90;
  
  lVar3 = tpidr_el0;
  local_90 = *(long *)(lVar3 + 0x28);
  local_158 = 0;
  uStack_150 = 0x100;
  local_140 = &local_178;
  uStack_138 = 0;
  uStack_160 = 0;
  local_168 = (void *)0x0;
  pvStack_170 = (void *)0x0;
  local_178 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = (void *)0x0;
  local_128 = (void *)0x0;
  local_110 = 0x200;
  local_108 = 0;
  FUN_00916df0(&local_140);
  plVar14 = (long *)*param_2;
  puVar4 = local_140;
  do {
    local_140 = puVar4;
    if (plVar14 == param_2 + 1) {
      local_120 = local_120 + -0x10;
      puVar11 = (undefined1 *)puVar4[3];
      puVar8 = puVar11 + 1;
      if ((undefined1 *)puVar4[4] <= puVar8) {
        FUN_008fe7c0(puVar4,1);
        puVar11 = (undefined1 *)puVar4[3];
        puVar8 = puVar11 + 1;
      }
      puVar4[3] = puVar8;
      *puVar11 = 0x7d;
      uVar7 = FUN_009155f8(&local_178);
      FUN_008fa54c(param_1,uVar7);
      free(local_128);
      if (local_130 != (void *)0x0) {
        operator_delete(local_130);
      }
      free(local_168);
      if (pvStack_170 != (void *)0x0) {
        operator_delete(pvStack_170);
      }
      if (*(long *)(lVar3 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    iVar9 = *(int *)(plVar14 + 7);
    pbVar2 = (byte *)(plVar14 + 4);
    if (iVar9 == 3) {
      if ((*pbVar2 & 1) == 0) {
        lVar12 = (long)plVar14 + 0x21;
      }
      else {
        lVar12 = plVar14[6];
      }
      FUN_00e83cf0(&local_140,lVar12);
      fVar17 = *(float *)(plVar14 + 0xb);
      dVar16 = (double)fVar17;
      FUN_00916f0c(&local_140,6);
      puVar4 = local_140;
      puVar15 = (undefined2 *)local_140[3];
      puVar8 = (undefined1 *)((long)puVar15 + 0x19);
      if ((undefined1 *)local_140[4] <= puVar8) {
        FUN_008fe7c0(local_140,0x19);
        puVar15 = (undefined2 *)puVar4[3];
        puVar8 = (undefined1 *)((long)puVar15 + 0x19);
      }
      puVar4[3] = puVar8;
      if (ABS(dVar16) == 0.0) {
        puVar13 = puVar15;
        if ((long)dVar16 < 0) {
          puVar13 = (undefined2 *)((long)puVar15 + 1);
          *(undefined1 *)puVar15 = 0x2d;
        }
        *puVar13 = 0x2e30;
        *(undefined1 *)(puVar13 + 1) = 0x30;
        puVar8 = (undefined1 *)((long)puVar13 + 3);
      }
      else {
        puVar13 = puVar15;
        if (fVar17 < 0.0) {
          puVar13 = (undefined2 *)((long)puVar15 + 1);
          *(undefined1 *)puVar15 = 0x2d;
          dVar16 = -dVar16;
        }
        bVar5 = ((ulong)dVar16 >> 0x34 & 0x7ff) != 0;
        local_e0 = (ulong)dVar16 & 0xfffffffffffff;
        if (bVar5) {
          local_e0 = (ulong)dVar16 & 0xfffffffffffff | 0x10000000000000;
        }
        local_d8 = -0x432;
        if (bVar5) {
          local_d8 = ((uint)((ulong)dVar16 >> 0x34) & 0x7ff) - 0x433;
        }
        FUN_00918050(&local_e0,auStack_f0,auStack_100);
        local_c0 = local_e0 << (LZCOUNT(local_e0) & 0x3fU);
        uStack_b8 = (ulong)(uint)(local_d8 - (int)LZCOUNT(local_e0));
        dVar16 = (double)(-0x3d - local_f8) * 0.30102999566398114 + 347.0;
        iVar9 = (int)dVar16;
        uVar1 = ((int)((uint)(0.0 < dVar16 - (double)iVar9) + iVar9) >> 3) + 1;
        local_a0 = *(undefined8 *)(&DAT_01b93840 + (ulong)uVar1 * 8);
        local_148 = uVar1 * -8 + 0x15c;
        uStack_98 = (long)*(short *)(&DAT_01b93af8 + (ulong)uVar1 * 2) & 0xffffffff;
        auVar18 = FUN_0091810c(&local_c0,&local_a0);
        local_b0 = auVar18;
        auVar18 = FUN_0091810c(auStack_100,&local_a0);
        local_c8 = auVar18._8_8_;
        uVar6 = FUN_0091810c(auStack_f0,&local_a0);
        local_d0 = auVar18._0_8_ + -1;
        FUN_00918168(local_b0,&local_d0,local_d0 + ~uVar6,puVar13,&uStack_144,&local_148);
        puVar8 = (undefined1 *)FUN_00917e7c(puVar13,uStack_144,local_148);
      }
      lVar12 = -0x19 - (long)puVar15;
LAB_00ec4b60:
      local_140[3] = puVar8 + local_140[3] + lVar12;
    }
    else {
      if (iVar9 == 2) {
        if ((*pbVar2 & 1) == 0) {
          lVar12 = (long)plVar14 + 0x21;
        }
        else {
          lVar12 = plVar14[6];
        }
        FUN_00e83cf0(&local_140,lVar12);
        iVar9 = *(int *)(plVar14 + 0xb);
        FUN_00916f0c(&local_140,6);
        puVar4 = local_140;
        puVar11 = (undefined1 *)local_140[3];
        puVar8 = puVar11 + 0xb;
        if ((undefined1 *)local_140[4] <= puVar8) {
          FUN_008fe7c0(local_140,0xb);
          puVar11 = (undefined1 *)puVar4[3];
          puVar8 = puVar11 + 0xb;
        }
        puVar4[3] = puVar8;
        puVar8 = puVar11;
        if (iVar9 < 0) {
          puVar8 = puVar11 + 1;
          *puVar11 = 0x2d;
          iVar9 = -iVar9;
        }
        puVar8 = (undefined1 *)FUN_0091754c(iVar9,puVar8);
        lVar12 = -0xb - (long)puVar11;
        goto LAB_00ec4b60;
      }
      if (iVar9 == 1) {
        if ((*pbVar2 & 1) == 0) {
          lVar12 = (long)plVar14 + 0x21;
        }
        else {
          lVar12 = plVar14[6];
        }
        FUN_00e83cf0(&local_140,lVar12);
        if ((*(byte *)(plVar14 + 8) & 1) == 0) {
          lVar12 = (long)plVar14 + 0x41;
        }
        else {
          lVar12 = plVar14[10];
        }
        FUN_00e83d40(&local_140,lVar12);
      }
    }
    plVar10 = (long *)plVar14[1];
    puVar4 = local_140;
    if ((long *)plVar14[1] == (long *)0x0) {
      plVar10 = plVar14 + 2;
      bVar5 = (long *)*(long *)*plVar10 != plVar14;
      plVar14 = (long *)*plVar10;
      if (bVar5) {
        do {
          lVar12 = *plVar10;
          plVar10 = (long *)(lVar12 + 0x10);
          plVar14 = (long *)*plVar10;
        } while (*plVar14 != lVar12);
      }
    }
    else {
      do {
        plVar14 = plVar10;
        plVar10 = (long *)*plVar14;
      } while ((long *)*plVar14 != (long *)0x0);
    }
  } while( true );
}




undefined1  [16] FUN_00ec4c7c(long param_1,ulong *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined1 auVar7 [16];
  
  puVar4 = (undefined8 *)(param_1 + 8);
  puVar5 = puVar4;
  if ((undefined8 *)*puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    puVar5 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar4 = puVar2, *param_2 < (ulong)puVar4[4]) {
        puVar2 = (undefined8 *)*puVar4;
        puVar5 = puVar4;
        if ((undefined8 *)*puVar4 == (undefined8 *)0x0) goto LAB_00ec4cf4;
      }
      if (*param_2 <= (ulong)puVar4[4]) break;
      puVar5 = puVar4 + 1;
      puVar2 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
  }
LAB_00ec4cf4:
  pvVar6 = (void *)*puVar5;
  bVar1 = pvVar6 == (void *)0x0;
  if (bVar1) {
    pvVar6 = operator_new(0x50);
    uVar3 = *param_3;
    *(undefined8 *)((long)pvVar6 + 0x38) = 0;
    *(undefined8 *)((long)pvVar6 + 0x40) = 0;
    *(undefined8 *)((long)pvVar6 + 0x20) = uVar3;
    *(undefined8 *)((long)pvVar6 + 0x30) = 0;
    *(undefined4 *)((long)pvVar6 + 0x28) = *(undefined4 *)(param_3 + 1);
    FUN_008fce60((undefined8 *)((long)pvVar6 + 0x30),param_3 + 2);
    *(undefined4 *)((long)pvVar6 + 0x48) = *(undefined4 *)(param_3 + 5);
    FUN_0090d414(param_1,puVar4,puVar5,pvVar6);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar6;
  auVar7._9_7_ = 0;
  return auVar7;
}




void * FUN_00ec4d68(undefined8 param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 local_58;
  void *local_50 [2];
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ec4e3c(local_50);
  plVar3 = (long *)FUN_00ec4eb0(param_1,&local_58,(long)local_50[0] + 0x20);
  pvVar2 = local_50[0];
  pvVar4 = (void *)*plVar3;
  if (pvVar4 == (void *)0x0) {
    FUN_00910a58(param_1,local_58,plVar3,local_50[0]);
    pvVar4 = local_50[0];
    local_50[0] = (void *)0x0;
  }
  else {
    local_50[0] = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      if (local_40 != '\0') {
        if ((*(byte *)((long)pvVar2 + 0x40) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar2 + 0x50));
        }
        if ((*(byte *)((long)pvVar2 + 0x20) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar2 + 0x30));
        }
      }
      operator_delete(pvVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar4;
}




void FUN_00ec4e3c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  
  pvVar2 = operator_new(0x60);
  *param_1 = pvVar2;
  param_1[1] = param_2 + 8;
  FUN_008fa54c((long)pvVar2 + 0x20,*param_3);
  *(undefined8 *)((long)pvVar2 + 0x40) = 0;
  *(undefined8 *)((long)pvVar2 + 0x48) = 0;
  *(undefined8 *)((long)pvVar2 + 0x50) = 0;
  *(undefined4 *)((long)pvVar2 + 0x38) = *(undefined4 *)(param_3 + 1);
  FUN_008fce60((undefined8 *)((long)pvVar2 + 0x40),param_3 + 2);
  uVar1 = *(undefined4 *)(param_3 + 5);
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)pvVar2 + 0x58) = uVar1;
  return;
}




long * FUN_00ec4eb0(long param_1,undefined8 *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s1;
  byte bVar3;
  int iVar4;
  void *__s2;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    *param_2 = plVar5;
  }
  else {
    uVar2 = *(ulong *)(param_3 + 8);
    __s1 = *(byte **)(param_3 + 0x10);
    plVar5 = (long *)(param_1 + 8);
    if ((*param_3 & 1) == 0) {
      __s1 = param_3 + 1;
      uVar2 = (ulong)(*param_3 >> 1);
    }
    do {
      while( true ) {
        plVar7 = plVar6;
        bVar3 = *(byte *)(plVar7 + 4);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = plVar7[5];
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        if (__n == 0) break;
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) break;
        if (-1 < iVar4) {
LAB_00ec4f14:
          iVar4 = memcmp(__s2,__s1,__n);
          if (iVar4 == 0) goto LAB_00ec4f30;
          if (iVar4 < 0) goto LAB_00ec4f38;
          goto LAB_00ec4fb0;
        }
LAB_00ec4f9c:
        plVar5 = plVar7;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          *param_2 = plVar7;
          return plVar7;
        }
      }
      if (uVar2 < uVar1) goto LAB_00ec4f9c;
      if (__n != 0) {
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        goto LAB_00ec4f14;
      }
LAB_00ec4f30:
      if (uVar2 <= uVar1) break;
LAB_00ec4f38:
      plVar5 = plVar7 + 1;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_00ec4fb0:
    *param_2 = plVar7;
  }
  return plVar5;
}




void FUN_00ec4fdc(void)

{
  return;
}




void FUN_00ec4fe0(void)

{
  return;
}




undefined8 FUN_00ec4fe4(void)

{
  return 0;
}




void FUN_00ec4fec(void)

{
  return;
}




void FUN_00ec4ff0(void)

{
  return;
}




undefined8 FUN_00ec4ff4(void)

{
  return 0;
}




undefined8 FUN_00ec4ffc(void)

{
  return 0;
}

