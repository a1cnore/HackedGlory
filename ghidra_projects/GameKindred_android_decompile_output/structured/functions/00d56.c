// functions/00d56 — 2 functions
#include "libGameKindred.h"




void FUN_00d566dc(long param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  void *pvVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  uint uVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 *puVar19;
  uint uVar20;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  *(undefined4 *)(param_1 + 0x26c) = *param_2;
  lVar7 = FUN_00d5cdac();
  lVar8 = FUN_01985d44(param_1,DAT_031a96a0);
  uVar5 = DAT_03214ce8;
  plVar10 = (long *)(lVar8 + 0x28);
  if (lVar8 == 0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  else {
    iVar6 = *(int *)(lVar8 + 0x30);
    *(long **)(param_1 + 0x70) = plVar10;
    *(int *)(param_1 + 0x78) = iVar6;
    if (iVar6 == *(int *)(lVar8 + 0x30)) {
      uVar9 = (**(code **)(*plVar10 + 0x10))(plVar10);
      goto LAB_00d56790;
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  uVar9 = 0;
  *(undefined4 *)(param_1 + 0x78) = uVar5;
LAB_00d56790:
  FUN_00d768bc(uVar9,*(undefined8 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x1d8) + 0x40));
  plVar10 = *(long **)(param_1 + 0x70);
  uVar9 = 0;
  if (plVar10 != (long *)0x0) {
    if (*(int *)(param_1 + 0x78) == (int)plVar10[1]) {
      uVar9 = (**(code **)(*plVar10 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x70) = 0;
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0x78) = DAT_03214ce8;
    }
  }
  FUN_00d76acc(uVar9,*(undefined8 *)(lVar7 + 0x40));
  puVar19 = *(undefined8 **)(**(long **)(*(long *)(param_1 + 0x38) + 0x1d8) + 0x48);
  puVar14 = (undefined8 *)*puVar19;
  if (puVar14 != (undefined8 *)0x0) {
    puVar1 = (uint *)(param_1 + 0x278);
    do {
      pbVar15 = (byte *)*puVar14;
      if (pbVar15 == (byte *)0x0) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0x811c9dc5;
        if (*pbVar15 != 0) {
          uVar20 = 0x811c9dc5;
          uVar12 = (uint)*pbVar15;
          do {
            pbVar15 = pbVar15 + 1;
            uVar20 = (uVar20 ^ uVar12) * 0x1000193;
            uVar12 = (uint)*pbVar15;
          } while (*pbVar15 != 0);
        }
      }
      uVar13 = *(uint *)(param_1 + 0x278);
      uVar12 = *(int *)(param_1 + 0x288) + 1;
      *(uint *)(param_1 + 0x288) = uVar12;
      if (uVar13 >> 1 < uVar12) {
        local_68 = 0;
        local_60 = (void *)0x0;
        FUN_009348c8(&local_68,(uVar13 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
        uVar12 = *puVar1;
        uVar16 = uVar12 - 1;
        uVar13 = (uint)local_68;
        if ((int)uVar16 < 0) {
          pvVar11 = *(void **)(param_1 + 0x280);
        }
        else {
          pvVar11 = *(void **)(param_1 + 0x280);
          do {
            iVar6 = *(int *)((long)pvVar11 + (ulong)uVar16 * 8 + 4);
            if (iVar6 != -1) {
              uVar12 = *(uint *)((long)pvVar11 + (ulong)uVar16 * 8);
              uVar3 = 0;
              if ((uint)local_68 != 0) {
                uVar3 = uVar12 / (uint)local_68;
              }
              uVar17 = (ulong)(uVar12 - uVar3 * (uint)local_68);
              piVar18 = (int *)((long)local_60 + uVar17 * 8 + 4);
              iVar2 = *piVar18;
              while (iVar2 != -1) {
                uVar3 = (uint)local_68;
                if (0 < (int)(uint)uVar17) {
                  uVar3 = (uint)uVar17;
                }
                uVar17 = (ulong)(uVar3 - 1);
                piVar18 = (int *)((long)local_60 + uVar17 * 8 + 4);
                iVar2 = *piVar18;
              }
              *(uint *)((long)local_60 + uVar17 * 8) = uVar12;
              *piVar18 = iVar6;
            }
            uVar16 = uVar16 - 1;
          } while (-1 < (int)uVar16);
          uVar12 = *puVar1;
        }
        *(undefined8 *)(param_1 + 0x278) = local_68;
        local_68 = CONCAT44(*(undefined4 *)(param_1 + 0x27c),uVar12);
        *(void **)(param_1 + 0x280) = local_60;
        if (pvVar11 == (void *)0x0) {
          local_60 = (void *)0x0;
        }
        else {
          local_60 = pvVar11;
          operator_delete__(pvVar11);
          local_68 = 0;
          local_60 = (void *)0x0;
          uVar13 = *puVar1;
        }
      }
      lVar8 = *(long *)(param_1 + 0x280);
      uVar12 = 0;
      if (uVar13 != 0) {
        uVar12 = uVar20 / uVar13;
      }
      uVar17 = (ulong)(uVar20 - uVar12 * uVar13);
      piVar18 = (int *)(lVar8 + uVar17 * 8 + 4);
      iVar6 = *piVar18;
      while (iVar6 != -1) {
        uVar12 = uVar13;
        if (0 < (int)(uint)uVar17) {
          uVar12 = (uint)uVar17;
        }
        uVar17 = (ulong)(uVar12 - 1);
        piVar18 = (int *)(lVar8 + uVar17 * 8 + 4);
        iVar6 = *piVar18;
      }
      *(uint *)(lVar8 + uVar17 * 8) = uVar20;
      iVar6 = FUN_00d5eb34(puVar1,puVar19);
      *piVar18 = iVar6;
      puVar19 = puVar19 + 1;
      puVar14 = (undefined8 *)*puVar19;
    } while (puVar14 != (undefined8 *)0x0);
  }
  puVar14 = *(undefined8 **)(lVar7 + 0x48);
  puVar19 = (undefined8 *)*puVar14;
  do {
    if (puVar19 == (undefined8 *)0x0) {
      if (*(long *)(lVar4 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pbVar15 = (byte *)*puVar19;
    if (pbVar15 == (byte *)0x0) {
      uVar20 = 0;
    }
    else {
      uVar20 = 0x811c9dc5;
      if (*pbVar15 != 0) {
        uVar20 = 0x811c9dc5;
        uVar12 = (uint)*pbVar15;
        do {
          pbVar15 = pbVar15 + 1;
          uVar20 = (uVar20 ^ uVar12) * 0x1000193;
          uVar12 = (uint)*pbVar15;
        } while (*pbVar15 != 0);
      }
    }
    uVar12 = *(uint *)(param_1 + 0x278);
    if (uVar12 == 0) {
LAB_00d56a60:
      uVar20 = 0xffffffff;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x280);
      uVar13 = 0;
      if (uVar12 != 0) {
        uVar13 = uVar20 / uVar12;
      }
      uVar13 = uVar20 - uVar13 * uVar12;
      while ((*(uint *)(lVar7 + (ulong)uVar13 * 8) != uVar20 &&
             (*(int *)(lVar7 + (ulong)uVar13 * 8 + 4) != -1))) {
        uVar16 = uVar12;
        if (0 < (int)uVar13) {
          uVar16 = uVar13;
        }
        uVar13 = uVar16 - 1;
      }
      if (uVar13 == 0xffffffff) goto LAB_00d56a60;
      uVar20 = *(uint *)(lVar7 + (ulong)uVar13 * 8 + 4);
    }
    *(undefined8 *)(*(long *)(param_1 + 0x298) + (ulong)uVar20 * 8) = *puVar14;
    puVar14 = puVar14 + 1;
    puVar19 = (undefined8 *)*puVar14;
  } while( true );
}




void FUN_00d56aa4(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  plVar5 = (long *)(param_1 + 0x40);
  lVar2 = *plVar5;
  fVar13 = 1.0;
  fVar9 = (*(float *)(lVar2 + 0x240) + 1.0) *
          (*(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0))
  ;
  if (DAT_031a9650 <= fVar9) {
    fVar9 = DAT_031a9650;
  }
  fVar15 = DAT_031a9590;
  if (DAT_031a9590 <= fVar9) {
    fVar15 = fVar9;
  }
  uVar6 = (uint)fVar15;
  if (0xb < uVar6) {
    return;
  }
  uVar1 = 0xc - uVar6;
  if (param_2 <= 0xc - uVar6) {
    uVar1 = param_2;
  }
  uVar4 = uVar6;
  if (0 < (int)uVar1) {
    FUN_00d5f27c((float)(int)uVar1,lVar2,0x28,0,*(undefined4 *)(param_1 + 0x260),0);
    lVar2 = *(long *)(param_1 + 0x40);
    fVar9 = (*(float *)(lVar2 + 0x240) + 1.0) *
            (*(float *)(lVar2 + 0xd8) +
            *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0));
    if (DAT_031a9650 <= fVar9) {
      fVar9 = DAT_031a9650;
    }
    fVar15 = DAT_031a9590;
    if (DAT_031a9590 <= fVar9) {
      fVar15 = fVar9;
    }
    uVar4 = (uint)fVar15;
    if (0xb < uVar4) {
      uVar4 = 0xc;
    }
  }
  lVar7 = *(long *)(param_1 + 0x38);
  fVar16 = (float)(int)(uVar4 - 1);
  fVar15 = *(float *)(lVar7 + 0xe0) + *(float *)(lVar7 + 0xe4) * fVar16;
  fVar9 = *(float *)(lVar7 + 0xf0) + *(float *)(lVar7 + 0xf4) * fVar16;
  if (uVar4 - 1 == 0) {
    FUN_00d5f478(0,lVar2,6,0,*(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(0,*(undefined8 *)(param_1 + 0x40),0x25,0,*(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(0,*(undefined8 *)(param_1 + 0x40),0x27,0,*(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(0,*(undefined8 *)(param_1 + 0x40),0x19,0,*(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(0,*(undefined8 *)(param_1 + 0x40),0x29,0,*(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(0,*(undefined8 *)(param_1 + 0x40),0x2a,0,*(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(0,*(undefined8 *)(param_1 + 0x40),0x1d,0,*(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(0,*(undefined8 *)(param_1 + 0x40),0x26,0,*(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(*(undefined4 *)(lVar7 + 0x188),*(undefined8 *)(param_1 + 0x40),0x1e,0,
                 *(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(*(undefined4 *)(lVar7 + 0x18c),*(undefined8 *)(param_1 + 0x40),0x1f,0,
                 *(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(0,*(undefined8 *)(param_1 + 0x40),0x20,0,*(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(0,*(undefined8 *)(param_1 + 0x40),0x21,0,*(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(0,*(undefined8 *)(param_1 + 0x40),0x22,0,*(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(0,*(undefined8 *)(param_1 + 0x40),0x23,0,*(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(0,*(undefined8 *)(param_1 + 0x40),0x24,0,*(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(0,*(undefined8 *)(param_1 + 0x40),0x2b,0,*(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(0,*(undefined8 *)(param_1 + 0x40),0xd,0,*(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(0,*(undefined8 *)(param_1 + 0x40),0xe,0,*(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(0,*(undefined8 *)(param_1 + 0x40),0x17,0,*(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(0,*(undefined8 *)(param_1 + 0x40),0x18,0,*(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(0,*(undefined8 *)(param_1 + 0x40),0x2c,0,*(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f478(0x3f800000,*(undefined8 *)(param_1 + 0x40),0x13,0,*(undefined4 *)(param_1 + 0x260),
                 1);
    FUN_00d5f478(*(undefined4 *)(lVar7 + 0x150),*(undefined8 *)(param_1 + 0x40),0x12,1,
                 *(undefined4 *)(param_1 + 0x260),1);
    FUN_00d5f70c(0,*(undefined8 *)(param_1 + 0x40),1);
    FUN_00d5f70c(0,*(undefined8 *)(param_1 + 0x40),3);
    FUN_00d5f70c(0,*(undefined8 *)(param_1 + 0x40),9);
    FUN_00d5f70c(0,*(undefined8 *)(param_1 + 0x40),10);
    FUN_00d5f70c(0,*(undefined8 *)(param_1 + 0x40),0xc);
    FUN_00d5f70c(0,*(undefined8 *)(param_1 + 0x40),0xb);
    FUN_00d5f70c(0,*(undefined8 *)(param_1 + 0x40),0xd);
    FUN_00d5f70c(0,*(undefined8 *)(param_1 + 0x40),0xe);
    FUN_00d5f70c(0,*(undefined8 *)(param_1 + 0x40),0xf);
    lVar2 = *(long *)(param_1 + 0x40);
    fVar13 = 0.0;
    fVar12 = fVar15;
    fVar11 = fVar9;
  }
  else {
    fVar11 = *(float *)(lVar2 + 0x1a0) + 1.0;
    fVar12 = fVar11 * (*(float *)(lVar2 + 0x38) +
                      *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0));
    if (DAT_031a95b0 <= fVar12) {
      fVar12 = DAT_031a95b0;
    }
    fVar10 = DAT_031a94f0;
    if (DAT_031a94f0 <= fVar12) {
      fVar10 = fVar12;
    }
    if (0.0 < fVar10) {
      fVar13 = *(float *)(lVar2 + 0x308) / fVar10;
    }
    fVar12 = *(float *)(lVar7 + 0xe4) * fVar11 * fVar13 * (float)(int)uVar1 +
             *(float *)(lVar2 + 0x308);
    fVar11 = *(float *)(lVar2 + 0x1a8) + 1.0;
    fVar13 = fVar11 * (*(float *)(lVar2 + 0x40) +
                      *(float *)(lVar2 + 0xf4) * (*(float *)(lVar2 + 0x25c) + 1.0));
    if (DAT_031a95b8 <= fVar13) {
      fVar13 = DAT_031a95b8;
    }
    fVar10 = (*(float *)(lVar2 + 0x23c) + 1.0) *
             (*(float *)(lVar2 + 0xd4) +
             *(float *)(lVar2 + 0x188) * (*(float *)(lVar2 + 0x2f0) + 1.0));
    fVar14 = DAT_031a94f8;
    if (DAT_031a94f8 <= fVar13) {
      fVar14 = fVar13;
    }
    fVar13 = *(float *)(lVar2 + 0x310) / fVar14;
    if (fVar14 <= 0.0) {
      fVar13 = 1.0;
    }
    if (DAT_031a964c <= fVar10) {
      fVar10 = DAT_031a964c;
    }
    fVar11 = *(float *)(lVar2 + 0x310) +
             *(float *)(lVar7 + 0xf4) * fVar11 * fVar13 * (float)(int)uVar1;
    fVar13 = DAT_031a958c;
    if (DAT_031a958c <= fVar10) {
      fVar13 = fVar10;
    }
    fVar13 = *(float *)(lVar2 + 0x328) - fVar13;
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
  }
  piVar8 = (int *)(param_1 + 0x260);
  FUN_00d5f478(fVar15,lVar2,0,0,*piVar8,1);
  FUN_00d5f478(fVar9,*plVar5,2,0,*piVar8,1);
  FUN_00d5f478(*(float *)(lVar7 + 0xe8) + *(float *)(lVar7 + 0xec) * fVar16,*plVar5,1,0,*piVar8,1);
  FUN_00d5f478(*(float *)(lVar7 + 0xf8) + *(float *)(lVar7 + 0xfc) * fVar16,*plVar5,3,0,*piVar8,1);
  FUN_00d5f478(*(float *)(lVar7 + 0x100) + *(float *)(lVar7 + 0x104) * fVar16,*plVar5,4,0,*piVar8,1)
  ;
  FUN_00d5f478(*(float *)(lVar7 + 0x108) + *(float *)(lVar7 + 0x10c) * fVar16,*plVar5,5,0,*piVar8,1)
  ;
  FUN_00d5f478(*(float *)(lVar7 + 0x110) + *(float *)(lVar7 + 0x114) * fVar16,*plVar5,7,0,*piVar8,1)
  ;
  FUN_00d5f478(*(float *)(lVar7 + 0x118) + *(float *)(lVar7 + 0x11c) * fVar16,*plVar5,8,0,*piVar8,1)
  ;
  FUN_00d5f478(*(undefined4 *)(lVar7 + 0x120),*plVar5,9,0,*piVar8,1);
  FUN_00d5f478(0,*plVar5,10,0,*piVar8,1);
  FUN_00d5f478(*(undefined4 *)(lVar7 + 0x124),*plVar5,0xb,0,*piVar8,1);
  FUN_00d5f478(0,*plVar5,0xc,0,*piVar8,1);
  FUN_00d5f478(*(float *)(lVar7 + 300) + *(float *)(lVar7 + 0x130) * fVar16,*plVar5,0xf,0,*piVar8,1)
  ;
  FUN_00d5f478(*(undefined4 *)(lVar7 + 0x128),*plVar5,0x10,0,*piVar8,1);
  FUN_00d5f478(*(undefined4 *)(lVar7 + 0x144),*plVar5,0x11,0,*piVar8,1);
  FUN_00d5f478(*(undefined4 *)(lVar7 + 0x14c),*plVar5,0x12,0,*piVar8,1);
  FUN_00d5f478(*(float *)(lVar7 + 0x160) + *(float *)(lVar7 + 0x164) * fVar16,*plVar5,0x14,0,*piVar8
               ,1);
  FUN_00d5f478(*(undefined4 *)(lVar7 + 0x16c),*plVar5,0x16,0,*piVar8,1);
  FUN_00d5f478(*(float *)(lVar7 + 0x168) + *(float *)(lVar7 + 0x16c) * fVar16,*plVar5,0x15,0,*piVar8
               ,1);
  FUN_00d5f478(*(float *)(lVar7 + 0x170) + *(float *)(lVar7 + 0x174) * fVar16,*plVar5,0x1a,0,*piVar8
               ,1);
  FUN_00d5f478(*(float *)(lVar7 + 0x178) + *(float *)(lVar7 + 0x17c) * fVar16,*plVar5,0x1b,0,*piVar8
               ,1);
  FUN_00d5f478(*(float *)(lVar7 + 0x180) + *(float *)(lVar7 + 0x184) * fVar16,*plVar5,0x1c,0,*piVar8
               ,1);
  FUN_00d5f70c(fVar12,*plVar5,0);
  FUN_00d5f70c(fVar11,*plVar5,2);
  FUN_00d5f70c(fVar13,*plVar5,8);
  if (0 < (int)uVar1) {
    if (0.0 < *(float *)(lVar7 + 0x154) * (float)(int)(uVar1 - (uVar6 == 0))) {
      FUN_00d5f27c(*plVar5,0x12,1,*piVar8,0);
    }
    FUN_00d5f27c((float)(int)uVar1,*plVar5,0x1d,0,*piVar8,0);
  }
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x128))();
  }
  if (*piVar8 != -1) {
    FUN_00da920c(param_1,uVar4);
  }
  uVar3 = FUN_00ceab48();
  if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x60) != 0)) {
    FUN_00d6c6d8(*(long *)(param_1 + 0x60),PTR_s_onActorLevelUpName_02bed550);
    FUN_00d6c4c0(*(undefined8 *)(param_1 + 0x60));
  }
  uVar6 = 0x10000;
  lVar2 = param_1;
LAB_00d57448:
  do {
    do {
      lVar7 = lVar2;
      if ((lVar7 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar7 + 8),0x828f09a8), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar7);
      }
      if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar2 = *(long *)(lVar7 + 0x18), lVar2 != 0)) {
        uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
        goto LAB_00d57448;
      }
      if ((uVar6 & 0xffff) == 0) goto LAB_00d574a0;
      lVar2 = *(long *)(lVar7 + 0x20);
    } while (*(long *)(lVar7 + 0x20) != 0);
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((lVar7 == 0) || (uVar1 = uVar6 - 1 & 0xffff, uVar1 == 0)) {
LAB_00d574a0:
      uVar6 = 0x10000;
      lVar2 = param_1;
LAB_00d574ec:
      do {
        do {
          lVar7 = lVar2;
          if ((lVar7 != param_1) &&
             (lVar2 = FUN_019865b4(*(undefined8 *)(lVar7 + 8),0x15ad039b), lVar2 != 0)) {
            (**(code **)(lVar2 + 8))(lVar7,uVar4);
          }
          if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar2 = *(long *)(lVar7 + 0x18), lVar2 != 0)) {
            uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
            goto LAB_00d574ec;
          }
          if ((uVar6 & 0xffff) == 0) {
            return;
          }
          lVar2 = *(long *)(lVar7 + 0x20);
        } while (*(long *)(lVar7 + 0x20) != 0);
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return;
        }
        uVar1 = uVar6 - 1 & 0xffff;
        if (uVar1 == 0) {
          return;
        }
        uVar6 = uVar1 | uVar6 & 0xffff0000;
        while (lVar2 = *(long *)(lVar7 + 0x20), lVar2 == 0) {
          if ((uVar6 - 1 & 0xffff) == 0) {
            return;
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
          if (lVar7 == 0) {
            return;
          }
        }
      } while( true );
    }
    uVar6 = uVar1 | uVar6 & 0xffff0000;
    while (lVar2 = *(long *)(lVar7 + 0x20), lVar2 == 0) {
      if ((uVar6 - 1 & 0xffff) == 0) goto LAB_00d574a0;
      lVar7 = *(long *)(lVar7 + 0x10);
      uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
      if (lVar7 == 0) goto LAB_00d574a0;
    }
  } while( true );
}

