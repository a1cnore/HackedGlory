// functions/00a1c — 16 functions
#include "libGameKindred.h"




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a1c26c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00a19b3c();
  *param_1 = &PTR_thunk_FUN_00a19b50_027c86b8;
  uVar1 = _DAT_03218ef8;
  *(undefined1 *)((long)param_1 + 0x1e) = 0;
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = uVar1;
  return;
}




void FUN_00a1c2bc(void *param_1)

{
  FUN_00a19b50();
  operator_delete(param_1);
  return;
}




void FUN_00a1c2e0(long param_1)

{
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  return;
}




void FUN_00a1c2f0(undefined4 param_1,long param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if ((param_3 & 1) != 0) {
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  uVar1 = *param_4;
  *(undefined4 *)(param_2 + 0x18) = param_1;
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  return;
}




void FUN_00a1c30c(long param_1)

{
  *(undefined2 *)(param_1 + 0x1c) = 0;
  return;
}




void FUN_00a1c314(long param_1)

{
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  return;
}




long FUN_00a1c324(float param_1,float param_2,undefined8 param_3,float *param_4,undefined8 param_5,
                 ulong param_6)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_720 [4];
  float local_710;
  float fStack_70c;
  float local_708;
  float local_700;
  float local_6fc;
  float fStack_6f8;
  long local_6f0 [200];
  long local_b0;
  
  lVar1 = tpidr_el0;
  local_b0 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d9e840(param_3,local_6f0,200,0);
  FUN_00d55794(param_5,&local_710,0);
  lVar5 = 0;
  if (uVar3 != 0) {
    uVar7 = (ulong)uVar3;
    plVar8 = local_6f0;
    fVar12 = 3.4028235e+38;
    fVar13 = fVar12;
    do {
      lVar6 = *plVar8;
      FUN_00d55794(lVar6,&local_700,0);
      fVar11 = 0.0;
      if ((param_6 & 1) != 0) {
        fVar11 = *(float *)(*(long *)(lVar6 + 0x38) + 100);
        fVar11 = (*(float *)(*(long *)(lVar6 + 0x38) + 0x68) * (fVar11 + *(float *)(lVar6 + 0x2e8)))
                 / fVar11;
      }
      if ((local_700 - local_710) * (local_700 - local_710) +
          (local_6fc - fStack_70c) * (local_6fc - fStack_70c) +
          (fStack_6f8 - local_708) * (fStack_6f8 - local_708) <=
          (fVar11 + param_2) * (fVar11 + param_2)) {
        fVar14 = (local_700 - *param_4) * (local_700 - *param_4) +
                 (local_6fc - param_4[1]) * (local_6fc - param_4[1]) +
                 (fStack_6f8 - param_4[2]) * (fStack_6f8 - param_4[2]);
        fVar11 = 0.0;
        if ((param_6 & 1) != 0) {
          fVar11 = *(float *)(*(long *)(lVar6 + 0x38) + 100);
          fVar11 = (*(float *)(*(long *)(lVar6 + 0x38) + 0x68) *
                   (fVar11 + *(float *)(lVar6 + 0x2e8))) / fVar11;
        }
        if (fVar14 <= (fVar11 + param_1) * (fVar11 + param_1)) {
          lVar4 = *(long *)(lVar6 + 0x40);
          uVar3 = *(uint *)(lVar6 + 0x2f4);
          fVar11 = (*(float *)(lVar4 + 0x1a0) + 1.0) *
                   (*(float *)(lVar4 + 0x38) +
                   *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0));
          fVar15 = *(float *)(lVar4 + 0x308);
          if (DAT_03130ee0 <= fVar11) {
            fVar11 = DAT_03130ee0;
          }
          fVar9 = DAT_03130e20;
          if (DAT_03130e20 <= fVar11) {
            fVar9 = fVar11;
          }
          if (lVar5 == 0) {
            bVar2 = false;
          }
          else {
            FUN_00d55794(lVar5,local_720,0);
            fVar11 = (float)*(undefined8 *)(param_4 + 1);
            fVar10 = (float)((ulong)*(undefined8 *)(param_4 + 1) >> 0x20);
            bVar2 = (local_700 - *param_4) * (local_720[0] - *param_4) +
                    (local_6fc - fVar11) * ((float)local_720._4_8_ - fVar11) +
                    (fStack_6f8 - fVar10) * (SUB84(local_720._4_8_,4) - fVar10) < 0.0;
          }
          fVar15 = fVar15 / fVar9;
          fVar11 = fVar14;
          if ((uVar3 & 1) != 0) {
            fVar9 = (float)NEON_fminnm(DAT_03130e10 +
                                       (1.0 - DAT_03130e10) *
                                       ((fVar14 - DAT_02be3418) / (DAT_02be341c - DAT_02be3418)),
                                       0x3f800000);
            fVar11 = DAT_03130e10;
            if (DAT_03130e10 <= fVar9) {
              fVar11 = fVar9;
            }
            fVar11 = fVar14 * fVar11 * fVar11;
          }
          if (fVar15 < 1.0) {
            fVar15 = fVar15 + (1.0 - fVar15) * DAT_03130e14;
            fVar9 = (float)NEON_fminnm(fVar15 + (1.0 - fVar15) *
                                                ((fVar14 - DAT_02be3418) /
                                                (DAT_02be341c - DAT_02be3418)),0x3f800000);
            if (fVar15 <= fVar9) {
              fVar15 = fVar9;
            }
            fVar11 = fVar11 * fVar15 * fVar15;
          }
          if (((bool)(bVar2 & fVar11 < fVar13)) || ((fVar14 < fVar12 && ((bool)(bVar2 ^ 1))))) {
            lVar5 = lVar6;
            fVar13 = fVar11;
            fVar12 = fVar14;
          }
        }
      }
      uVar7 = uVar7 - 1;
      plVar8 = plVar8 + 1;
    } while (uVar7 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_b0) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00a1c660(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_00cac608();
  return param_1 * param_2 * fVar1;
}




undefined8 FUN_00a1c68c(undefined8 param_1,undefined8 param_2,uint param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((3 < param_4 - 4U) && (param_4 != 0)) {
    return 0;
  }
  uVar1 = FUN_00a1c6ac(param_1,param_2,param_3 & 1);
  return uVar1;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

long FUN_00a1c6ac(float param_1,float param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                 int param_6)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  byte bVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  float fVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  float unaff_s13;
  undefined4 local_93c;
  float local_938;
  float local_928;
  float fStack_924;
  float local_920;
  undefined2 local_918;
  undefined1 local_916;
  undefined8 local_910;
  undefined8 uStack_908;
  long local_900;
  byte local_8f8;
  undefined2 local_8f7;
  undefined1 local_8f5;
  float local_8f4;
  float local_8f0;
  float local_8ec;
  undefined4 uStack_8e8;
  undefined8 local_8e0;
  undefined8 uStack_8d8;
  long local_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  long local_8a0;
  byte local_898;
  undefined2 local_897;
  undefined1 local_895;
  float local_894;
  float local_890;
  float local_88c;
  undefined4 uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  long local_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  long local_840;
  byte local_838;
  undefined2 local_837;
  undefined1 local_835;
  float local_834;
  float local_830;
  float local_82c;
  undefined4 local_828;
  undefined8 local_820;
  undefined8 uStack_818;
  long local_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  long local_7e0;
  byte local_7d8;
  undefined2 local_7d7;
  undefined1 local_7d5;
  float local_7d4;
  float local_7d0;
  float local_7cc;
  undefined4 local_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  long local_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  long local_780;
  byte local_778;
  undefined2 local_777;
  undefined1 local_775;
  float local_774;
  float local_770;
  float local_76c;
  undefined4 local_768;
  undefined8 local_760;
  undefined8 uStack_758;
  long local_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 local_730;
  float fStack_728;
  undefined4 uStack_724;
  long local_720;
  byte bStack_718;
  undefined2 uStack_717;
  undefined1 uStack_715;
  float fStack_714;
  float local_710;
  float local_70c;
  undefined4 local_708;
  undefined4 uStack_704;
  undefined8 local_700;
  undefined8 uStack_6f8;
  long local_6e8 [203];
  
  lVar1 = tpidr_el0;
  lVar11 = *(long *)(lVar1 + 0x28);
  uVar6 = FUN_00d9e840(param_3,local_6e8,200,0);
  local_918 = 0;
  local_700 = DAT_03218f30;
  uStack_6f8 = CONCAT44(uStack_6f8._4_4_,DAT_03218f38);
  fStack_728 = DAT_03218f38;
  local_730 = DAT_03218f30;
  fVar17 = 3.4028235e+38;
  bStack_718 = 0;
  uStack_717 = 0;
  local_720 = 0;
  local_708 = 0;
  fStack_714 = fVar17;
  local_70c = fVar17;
  FUN_00d55794(param_4,&local_928,0);
  if (uVar6 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    uVar16 = (ulong)uVar6;
    plVar18 = local_6e8;
    bVar2 = 0;
    local_93c = 0;
    local_938 = fVar17;
    do {
      lVar15 = *plVar18;
      bStack_718 = *(byte *)(lVar15 + 0x2f4) & 1;
      local_720 = lVar15;
      cVar4 = FUN_00d55870(lVar15);
      cVar5 = FUN_00d55870(param_4);
      uStack_717 = CONCAT11(uStack_717._1_1_,cVar4 != cVar5);
      FUN_00d55794(lVar15,&local_730,0);
      fVar20 = ((float)local_730 - local_928) * ((float)local_730 - local_928) +
               (local_730._4_4_ - fStack_924) * (local_730._4_4_ - fStack_924) +
               (fStack_728 - local_920) * (fStack_728 - local_920);
      fVar19 = SQRT(fVar20);
      if (NAN(fVar19)) {
        fVar19 = sqrtf(fVar20);
      }
      fVar20 = 0.0;
      if ((param_5 & 1) != 0) {
        fVar20 = *(float *)(*(long *)(lVar15 + 0x38) + 100);
        fVar20 = (*(float *)(*(long *)(lVar15 + 0x38) + 0x68) *
                 (fVar20 + *(float *)(lVar15 + 0x2e8))) / fVar20;
      }
      fVar19 = fVar19 - fVar20;
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      local_70c = fVar19 * fVar19;
      bVar3 = local_70c < param_1 * param_1;
      uStack_717._1_1_ = bVar3;
      uStack_717 = CONCAT11(bVar3,(undefined1)uStack_717);
      lVar12 = *(long *)(lVar15 + 0x40);
      uVar7 = 0;
      local_710 = *(float *)(lVar12 + 0x308);
      fVar19 = (*(float *)(lVar12 + 0x1a0) + 1.0) *
               (*(float *)(lVar12 + 0x38) +
               *(float *)(lVar12 + 0xec) * (*(float *)(lVar12 + 0x254) + 1.0));
      if (DAT_03130ee0 <= fVar19) {
        fVar19 = DAT_03130ee0;
      }
      fVar20 = DAT_03130e20;
      if (DAT_03130e20 <= fVar19) {
        fVar20 = fVar19;
      }
      fStack_714 = *(float *)(lVar12 + 0x308) / fVar20;
      if (param_6 == 7) {
        uVar9 = FUN_00d9ea08(lVar15);
        uVar7 = FUN_00d6bb44(uVar9,DAT_0315cf0c);
      }
      local_708 = uVar7;
      if (param_2 * param_2 < local_70c) goto switchD_00a1ca34_caseD_1;
      if (lVar14 == 0) goto LAB_00a1cc38;
      switch(param_6) {
      case 0:
        iVar8 = FUN_009f1f94(0x1e);
        if (iVar8 == 0) {
          uStack_788 = uStack_6f8;
          local_790 = local_700;
          uStack_748 = CONCAT44(fStack_714,
                                CONCAT13(uStack_715,
                                         CONCAT12(uStack_717._1_1_,
                                                  CONCAT11((undefined1)uStack_717,bStack_718))));
          uStack_738 = CONCAT44(uStack_704,local_708);
          uStack_740 = CONCAT44(local_70c,local_710);
          uStack_758 = CONCAT44(uStack_724,fStack_728);
          local_775 = local_916;
          local_777 = local_918;
          local_774 = local_938;
          local_750 = local_720;
          local_760 = local_730;
          local_768 = local_93c;
          local_780 = lVar14;
          local_778 = bVar2;
          local_770 = unaff_s13;
          local_76c = fVar17;
          uVar10 = FUN_00a1cccc(&local_760,&local_790);
          goto joined_r0x00a1cc34;
        }
        if (iVar8 == 1) {
          uStack_7e8 = uStack_6f8;
          local_7f0 = local_700;
          uStack_7a8 = CONCAT44(fStack_714,
                                CONCAT13(uStack_715,
                                         CONCAT12(uStack_717._1_1_,
                                                  CONCAT11((undefined1)uStack_717,bStack_718))));
          uStack_798 = CONCAT44(uStack_704,local_708);
          uStack_7a0 = CONCAT44(local_70c,local_710);
          uStack_7b8 = CONCAT44(uStack_724,fStack_728);
          local_7d5 = local_916;
          local_7d7 = local_918;
          local_7d4 = local_938;
          local_7b0 = local_720;
          local_7c0 = local_730;
          local_7c8 = local_93c;
          local_7e0 = lVar14;
          local_7d8 = bVar2;
          local_7d0 = unaff_s13;
          local_7cc = fVar17;
          uVar10 = FUN_00a1cdc8(&local_7c0,&local_7f0);
          goto joined_r0x00a1cb70;
        }
        if (iVar8 == 2) {
          bVar13 = bVar2;
          if (bStack_718 != 0) {
            if (bVar2 == 0) goto LAB_00a1cc38;
            bVar13 = 1;
          }
          if (bStack_718 == bVar13) {
            bVar3 = ABS(local_70c - fVar17) < 0.5;
            if (fStack_714 < local_938 && bVar3) goto LAB_00a1cc38;
            goto LAB_00a1cbd0;
          }
        }
        break;
      case 4:
        uStack_848 = uStack_6f8;
        local_850 = local_700;
        uStack_808 = CONCAT44(fStack_714,
                              CONCAT13(uStack_715,
                                       CONCAT12(uStack_717._1_1_,
                                                CONCAT11((undefined1)uStack_717,bStack_718))));
        uStack_7f8 = CONCAT44(uStack_704,uVar7);
        uStack_800 = CONCAT44(local_70c,local_710);
        uStack_818 = CONCAT44(uStack_724,fStack_728);
        local_835 = local_916;
        local_837 = local_918;
        local_834 = local_938;
        local_810 = local_720;
        local_820 = local_730;
        local_828 = local_93c;
        local_840 = lVar14;
        local_838 = bVar2;
        local_830 = unaff_s13;
        local_82c = fVar17;
        uVar10 = FUN_00a1ce48(&local_820,&local_850);
joined_r0x00a1cb70:
        if ((uVar10 & 1) == 0) break;
        goto LAB_00a1cc38;
      case 5:
        uStack_8a8 = uStack_6f8;
        local_8b0 = local_700;
        uStack_868 = CONCAT44(fStack_714,
                              CONCAT13(uStack_715,
                                       CONCAT12(uStack_717._1_1_,
                                                CONCAT11((undefined1)uStack_717,bStack_718))));
        uStack_858 = CONCAT44(uStack_704,uVar7);
        uStack_860 = CONCAT44(local_70c,local_710);
        local_895 = local_916;
        uStack_878 = CONCAT44(uStack_724,fStack_728);
        local_897 = local_918;
        local_894 = local_938;
        local_870 = local_720;
        local_880 = local_730;
        uStack_888 = local_93c;
        local_8a0 = lVar14;
        local_898 = bVar2;
        local_890 = unaff_s13;
        local_88c = fVar17;
        uVar10 = FUN_00a1cec8(&local_880,&local_8b0);
        goto joined_r0x00a1cc34;
      case 6:
        bVar13 = bVar2;
        if (bStack_718 != 0) {
          if (bVar2 == 0) goto LAB_00a1cc38;
          bVar13 = 1;
        }
        if (bStack_718 == bVar13) {
          bVar3 = ABS(local_70c - fVar17) < 0.5;
          if (!bVar3 || local_938 <= fStack_714) {
LAB_00a1cbd0:
            if (fVar17 <= local_70c || bVar3) break;
          }
          goto LAB_00a1cc38;
        }
        break;
      case 7:
        uStack_908 = uStack_6f8;
        local_910 = local_700;
        uStack_8c8 = CONCAT44(fStack_714,
                              CONCAT13(uStack_715,
                                       CONCAT12(uStack_717._1_1_,
                                                CONCAT11((undefined1)uStack_717,bStack_718))));
        uStack_8b8 = CONCAT44(uStack_704,uVar7);
        uStack_8c0 = CONCAT44(local_70c,local_710);
        local_8f5 = local_916;
        uStack_8d8 = CONCAT44(uStack_724,fStack_728);
        local_8f7 = local_918;
        local_8f4 = local_938;
        local_8d0 = local_720;
        local_8e0 = local_730;
        uStack_8e8 = local_93c;
        local_900 = lVar14;
        local_8f8 = bVar2;
        local_8f0 = unaff_s13;
        local_8ec = fVar17;
        uVar10 = FUN_00a1cf6c(&local_8e0,&local_910);
joined_r0x00a1cc34:
        if ((uVar10 & 1) != 0) {
LAB_00a1cc38:
          local_918 = uStack_717;
          local_916 = uStack_715;
          local_938 = fStack_714;
          uStack_6f8 = CONCAT44(uStack_724,fStack_728);
          local_700 = local_730;
          local_93c = local_708;
          lVar14 = local_720;
          fVar17 = local_70c;
          unaff_s13 = local_710;
          bVar2 = bStack_718;
        }
      }
switchD_00a1ca34_caseD_1:
      uVar16 = uVar16 - 1;
      plVar18 = plVar18 + 1;
    } while (uVar16 != 0);
  }
  if (*(long *)(lVar1 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar14;
}




undefined4 FUN_00a1cccc(long param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_2 + 0x1a);
  if ((*(char *)(param_1 + 0x1a) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x1a) == cVar2) {
    cVar2 = *(char *)(param_2 + 0x18);
    if ((*(char *)(param_1 + 0x18) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
      return 1;
    }
    if ((*(char *)(param_1 + 0x18) == cVar2) &&
       ((*(float *)(param_1 + 0x1c) < *(float *)(param_2 + 0x1c) ||
        ((*(float *)(param_1 + 0x1c) == *(float *)(param_2 + 0x1c) &&
         (*(float *)(param_1 + 0x24) < *(float *)(param_2 + 0x24))))))) {
      return 1;
    }
  }
  return 0;
}




undefined4 FUN_00a1cd4c(long param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  float fVar4;
  
  cVar2 = *(char *)(param_2 + 0x18);
  if ((*(char *)(param_1 + 0x18) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
    return 1;
  }
  uVar3 = 0;
  if (*(char *)(param_1 + 0x18) == cVar2) {
    fVar4 = ABS(*(float *)(param_1 + 0x24) - *(float *)(param_2 + 0x24));
    if (((*(float *)(param_1 + 0x24) < *(float *)(param_2 + 0x24)) && (0.5 <= fVar4)) ||
       ((fVar4 < 0.5 && (*(float *)(param_1 + 0x1c) < *(float *)(param_2 + 0x1c))))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}




undefined4 FUN_00a1cdc8(long param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_2 + 0x1a);
  if ((*(char *)(param_1 + 0x1a) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x1a) == cVar2) {
    cVar2 = *(char *)(param_2 + 0x18);
    if ((*(char *)(param_1 + 0x18) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
      return 1;
    }
    if ((*(char *)(param_1 + 0x18) == cVar2) &&
       ((*(float *)(param_1 + 0x20) < *(float *)(param_2 + 0x20) ||
        ((*(float *)(param_1 + 0x20) == *(float *)(param_2 + 0x20) &&
         (*(float *)(param_1 + 0x24) < *(float *)(param_2 + 0x24))))))) {
      return 1;
    }
  }
  return 0;
}




undefined4 FUN_00a1ce48(long param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_2 + 0x18);
  if ((*(char *)(param_1 + 0x18) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x18) == cVar2) {
    cVar2 = *(char *)(param_2 + 0x1a);
    if ((*(char *)(param_1 + 0x1a) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
      return 1;
    }
    if ((*(char *)(param_1 + 0x1a) == cVar2) &&
       ((*(float *)(param_1 + 0x1c) < *(float *)(param_2 + 0x1c) ||
        ((*(float *)(param_1 + 0x1c) == *(float *)(param_2 + 0x1c) &&
         (*(float *)(param_1 + 0x24) < *(float *)(param_2 + 0x24))))))) {
      return 1;
    }
  }
  return 0;
}




undefined4 FUN_00a1cec8(long param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_2 + 0x19);
  if ((*(char *)(param_1 + 0x19) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x19) == cVar2) {
    cVar2 = *(char *)(param_2 + 0x1a);
    if ((*(char *)(param_1 + 0x1a) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
      return 1;
    }
    if (*(char *)(param_1 + 0x1a) == cVar2) {
      cVar2 = *(char *)(param_2 + 0x18);
      if ((*(char *)(param_1 + 0x18) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
        return 1;
      }
      if ((*(char *)(param_1 + 0x18) == cVar2) &&
         ((*(float *)(param_1 + 0x1c) < *(float *)(param_2 + 0x1c) ||
          ((*(float *)(param_1 + 0x1c) == *(float *)(param_2 + 0x1c) &&
           (*(float *)(param_1 + 0x24) < *(float *)(param_2 + 0x24))))))) {
        return 1;
      }
    }
  }
  return 0;
}




undefined4 FUN_00a1cf6c(long param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (*(uint *)(param_2 + 0x28) < *(uint *)(param_1 + 0x28)) {
LAB_00a1cf7c:
    uVar3 = 1;
  }
  else {
    if (*(uint *)(param_1 + 0x28) == *(uint *)(param_2 + 0x28)) {
      cVar2 = *(char *)(param_2 + 0x18);
      if ((*(char *)(param_1 + 0x18) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
        return 1;
      }
      if (*(char *)(param_1 + 0x18) == cVar2) {
        cVar2 = *(char *)(param_2 + 0x1a);
        if ((*(char *)(param_1 + 0x1a) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
          return 1;
        }
        if ((*(char *)(param_1 + 0x1a) == cVar2) &&
           ((*(float *)(param_1 + 0x1c) < *(float *)(param_2 + 0x1c) ||
            ((*(float *)(param_1 + 0x1c) == *(float *)(param_2 + 0x1c) &&
             (*(float *)(param_1 + 0x24) < *(float *)(param_2 + 0x24))))))) goto LAB_00a1cf7c;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

