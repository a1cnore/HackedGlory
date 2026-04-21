// functions/00b4c — 7 functions
#include "libGameKindred.h"




void FUN_00b4c220(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(&uStack_4c,&local_50);
  uVar3 = FUN_0092ea9c();
  uVar4 = FUN_0092ead0(uStack_4c,local_50);
  fVar5 = 1.4;
  fVar7 = *(float *)(param_1 + 9);
  if ((uVar3 & 1) == 0) {
    fVar5 = 1.0;
  }
  if ((fVar7 != fVar5) || (*(float *)((long)param_1 + 0x4c) != fVar5)) {
    *(float *)(param_1 + 9) = fVar5;
    *(float *)((long)param_1 + 0x4c) = fVar5;
    FUN_0091ada4(param_1);
  }
  if (((uVar4 & 1) != 0) &&
     ((fVar7 = *(float *)(param_1 + 0x20), fVar7 != 0.8 ||
      (fVar7 = *(float *)((long)param_1 + 0x104), fVar7 != 0.8)))) {
    param_1[0x20] = 0x3f4ccccd3f4ccccd;
    FUN_0091ada4(param_1 + 0x17);
  }
  fVar8 = *(float *)((long)param_1 + 0xfc);
  plVar1 = param_1 + 0x3d;
  FUN_00f01c20(param_1 + 0x17);
  fVar8 = fVar8 + fVar7;
  fVar7 = fVar8 + 12.0;
  if ((*(float *)(param_1 + 0x45) != 0.0) ||
     (fVar8 = *(float *)((long)param_1 + 0x22c), fVar8 != fVar7)) {
    *(undefined4 *)(param_1 + 0x45) = 0;
    *(float *)((long)param_1 + 0x22c) = fVar7;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0dad0(*(float *)(param_1 + 0x12) / fVar5,plVar1,1);
  FUN_00f0da28(0x3f333333,plVar1);
  uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,0,0,1,1);
  FUN_00f13f08(uVar6,fVar8 + 100.0,param_1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b4c3c0(long *param_1)

{
  (**(code **)(*param_1 + 0xe8))();
  FUN_00b4c220(param_1);
  return;
}




void FUN_00b4c3ec(long *param_1,byte param_2)

{
  *(byte *)(param_1 + 0xf57) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00b4c400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00b4c404(undefined1 param_1 [16],float param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  int iVar10;
  long lVar11;
  bool bVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  uint *puVar17;
  ulong uVar18;
  undefined4 uVar19;
  uint uVar20;
  long lVar21;
  undefined8 *puVar22;
  float fVar23;
  float fVar24;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  long local_78;
  
  lVar11 = tpidr_el0;
  local_78 = *(long *)(lVar11 + 0x28);
  pcVar3 = (char *)(param_3 + 0x7ab8);
  bVar12 = *pcVar3 != '\0';
  pfVar5 = (float *)&DAT_02be9bd8;
  if (bVar12) {
    pfVar5 = (float *)&DAT_02be9bdc;
  }
  pfVar4 = (float *)(param_3 + 0x7abc);
  pfVar6 = (float *)&DAT_02be9bd0;
  if (bVar12) {
    pfVar6 = (float *)&DAT_02be9bd4;
  }
  *pfVar4 = *pfVar5;
  pfVar5 = (float *)(param_3 + 0x7ac0);
  pfVar9 = (float *)&DAT_02be9be0;
  if (bVar12) {
    pfVar9 = (float *)&DAT_02be9be4;
  }
  *pfVar5 = *pfVar6;
  pfVar6 = (float *)(param_3 + 0x7ac4);
  lVar1 = param_3 + 0xb8;
  *pfVar6 = *pfVar9;
  if (*pcVar3 != '\0') {
    FUN_00f0d378(lVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9cd8);
    FUN_00f0d378(param_3 + 0x3a0,PTR_s_build___Fonts_Brandon_Bold_24_fo_02be9c68);
    lVar21 = 0;
    do {
      FUN_00f0d92c(param_3 + 0x4d0 + lVar21,PTR_s_build___Fonts_Brandon_Bold_24_fo_02be9c68,
                   &DAT_01bee7fa);
      lVar21 = lVar21 + 0x130;
    } while (lVar21 != 0x5f0);
    FUN_00f0d378(param_3 + 0xac0,PTR_s_build___Fonts_Brandon_Bold_24_fo_02be9c68);
    FUN_00f0d378(param_3 + 0xbf0,PTR_s_build___Fonts_Brandon_Bold_24_fo_02be9c68);
  }
  uVar14 = FUN_00e6ce7c(*param_4,0);
  FUN_00f0d75c(lVar1,uVar14);
  fVar24 = *(float *)(param_3 + 0xfc);
  lVar21 = param_3 + 0x1e8;
  FUN_00f01c20(lVar1);
  fVar24 = fVar24 + param_2;
  fVar23 = fVar24 + 12.0;
  if ((*(float *)(param_3 + 0x228) != 0.0) ||
     (fVar24 = *(float *)(param_3 + 0x22c), fVar24 != fVar23)) {
    *(undefined4 *)(param_3 + 0x228) = 0;
    *(float *)(param_3 + 0x22c) = fVar23;
    FUN_0091ada4(lVar21);
  }
  uVar14 = FUN_00e6ce7c(param_4[4],0);
  thunk_FUN_00e7051c(&local_90,uVar14);
  FUN_00cb0410(&local_90,param_4);
  FUN_00cb6444(&local_90);
  FUN_00f0d75c(lVar21,&local_90);
  iVar10 = *(int *)(param_4 + 0xf);
  fVar23 = *(float *)(param_3 + 0x22c);
  iVar13 = 5;
  if (*(char *)((long)param_4 + 0x8d) != '\0') {
    iVar13 = 3;
  }
  lVar1 = param_3 + 0x318;
  FUN_00f0d4e0(lVar21);
  fVar23 = fVar23 + fVar24 + 136.0;
  if ((*(float *)(param_3 + 0x358) != 0.0) || (*(float *)(param_3 + 0x35c) != fVar23)) {
    *(undefined4 *)(param_3 + 0x358) = 0;
    *(float *)(param_3 + 0x35c) = fVar23;
    FUN_0091ada4(lVar1);
  }
  uVar2 = iVar13 + iVar10;
  plVar16 = (long *)(param_3 + 0x3a0);
  if ((*(float *)(param_3 + 0x3e0) != 0.0) || (*(float *)(param_3 + 0x3e4) != 0.0)) {
    *(undefined8 *)(param_3 + 0x3e0) = 0;
    FUN_0091ada4(plVar16);
  }
  local_80 = 0x3f80000000000000;
  (**(code **)(*plVar16 + 0x28))(plVar16,&local_80);
  lVar21 = 0;
  uVar18 = 0;
  uVar14 = NEON_fmov(0x3f800000,4);
  do {
    lVar7 = param_3 + lVar21;
    if (uVar18 < uVar2) {
      fVar23 = *pfVar5 + *pfVar6 + *pfVar4 * (float)(uVar18 & 0xffffffff);
      if ((*(float *)(lVar7 + 0x510) != fVar23) || (*(float *)(lVar7 + 0x514) != 0.0)) {
        *(float *)(lVar7 + 0x510) = fVar23;
        *(undefined4 *)(lVar7 + 0x514) = 0;
        FUN_0091ada4(lVar7 + 0x4d0);
      }
      lVar8 = param_3 + lVar21;
      local_80 = uVar14;
      (**(code **)(*(long *)(lVar8 + 0x4d0) + 0x28))(lVar7 + 0x4d0,&local_80);
      *(uint *)(lVar8 + 0x554) = *(uint *)(lVar8 + 0x554) | 4;
    }
    else {
      *(uint *)(lVar7 + 0x554) = *(uint *)(lVar7 + 0x554) & 0xfffffffb;
    }
    uVar18 = uVar18 + 1;
    lVar21 = lVar21 + 0x130;
  } while (uVar18 != 5);
  fVar23 = *pfVar5 + *pfVar6 + *pfVar4 * (float)uVar2;
  lVar21 = param_3 + 0xac0;
  if ((*(float *)(param_3 + 0xb00) != fVar23) || (*(float *)(param_3 + 0xb04) != 0.0)) {
    *(float *)(param_3 + 0xb00) = fVar23;
    *(undefined4 *)(param_3 + 0xb04) = 0;
    FUN_0091ada4(lVar21);
  }
  local_80 = uVar14;
  (**(code **)(*(long *)(param_3 + 0xac0) + 0x28))(lVar21,&local_80);
  fVar23 = *pfVar5 + *pfVar6 + *pfVar4 * (float)(uVar2 + 1);
  lVar7 = param_3 + 0xbf0;
  if ((*(float *)(param_3 + 0xc30) != fVar23) || (*(float *)(param_3 + 0xc34) != 0.0)) {
    *(float *)(param_3 + 0xc30) = fVar23;
    *(undefined4 *)(param_3 + 0xc34) = 0;
    FUN_0091ada4(lVar7);
  }
  local_80 = uVar14;
  (**(code **)(*(long *)(param_3 + 0xbf0) + 0x28))(lVar7,&local_80);
  FUN_00f0dad0(*pfVar4,lVar21,1);
  FUN_00f0dad0(*pfVar4,lVar7,1);
  if (*(float *)(param_3 + 0xd64) != 50.0) {
    *(undefined4 *)(param_3 + 0xd64) = 0x42480000;
    FUN_0091ada4(param_3 + 0xd20);
  }
  lVar21 = FUN_00ce9fc8("Energy Cost",param_4,0);
  if (lVar21 == 0) {
    uVar14 = FUN_00e6ce7c("STAT_LABEL_ENERGY_COST",0);
    FUN_00b4cdf0(0,param_3 + 0xda8,uVar14,1,uVar2,*pcVar3);
  }
  else {
    if (*(char *)(lVar21 + 0x34) != '\0') {
      uVar19 = 1;
      goto LAB_00b4c8d4;
    }
    uVar14 = FUN_00cb3700(lVar21);
    FUN_00b4cb94(*(undefined4 *)(lVar21 + 8),*(undefined4 *)(lVar21 + 0xc),
                 *(undefined4 *)(lVar21 + 0x10),*(undefined4 *)(lVar21 + 0x18),
                 *(undefined4 *)(lVar21 + 0x14),param_3 + 0xda8,uVar14,
                 *(undefined4 *)(lVar21 + 0x2c),uVar2,*pcVar3);
  }
  uVar19 = 0;
LAB_00b4c8d4:
  if (*(float *)(param_3 + 0xdec) != 80.0) {
    *(undefined4 *)(param_3 + 0xdec) = 0x42a00000;
    FUN_0091ada4(param_3 + 0xda8);
  }
  lVar21 = FUN_00ce9fc8("Cooldown",param_4,0);
  if (lVar21 == 0) {
    uVar14 = FUN_00e6ce7c("STAT_LABEL_COOLDOWN",0);
    FUN_00b4cdf0(0,param_3 + 0x1890,uVar14,4,uVar2,*pcVar3);
  }
  else {
    uVar14 = FUN_00cb3700(lVar21);
    FUN_00b4cb94(*(undefined4 *)(lVar21 + 8),*(undefined4 *)(lVar21 + 0xc),
                 *(undefined4 *)(lVar21 + 0x10),*(undefined4 *)(lVar21 + 0x18),
                 *(undefined4 *)(lVar21 + 0x14),param_3 + 0x1890,uVar14,
                 *(undefined4 *)(lVar21 + 0x2c),uVar2,*pcVar3);
  }
  plVar16 = (long *)param_4[0x15];
  lVar21 = *plVar16;
  if (lVar21 == 0) {
    uVar20 = 0;
  }
  else {
    uVar20 = 0;
    do {
      plVar16 = plVar16 + 1;
      if (*(char *)(lVar21 + 0x58) == '\0') {
        uVar14 = FUN_00cb372c(*(undefined4 *)(lVar21 + 0x54));
        fVar23 = *(float *)(lVar21 + 0x28);
        if (fVar23 <= 0.0) {
          fVar23 = *(float *)(lVar21 + 0x24);
        }
        if ((*(char *)(lVar21 + 0x34) == '\0') && (*(char *)(lVar21 + 0x35) == '\0')) {
          uVar15 = 1;
        }
        else {
          uVar15 = 2;
        }
        FUN_00b4cf84(0x42a00000,*(undefined4 *)(lVar21 + 0x10),*(undefined4 *)(lVar21 + 0x14),
                     *(undefined4 *)(lVar21 + 0x1c),fVar23,*(undefined4 *)(lVar21 + 0x20),param_3,
                     uVar20,uVar19,uVar14,uVar15,uVar2);
        uVar20 = uVar20 + 1;
        if (uVar20 == 8) break;
      }
      lVar21 = *plVar16;
    } while (lVar21 != 0);
  }
  puVar22 = *(undefined8 **)param_4[0x16];
  plVar16 = (long *)param_4[0x16];
  while (puVar22 != (undefined8 *)0x0) {
    if ((((*(int *)((long)puVar22 + 0x2c) != 0) && (*(char *)((long)puVar22 + 0x34) == '\0')) &&
        (iVar13 = strcasecmp("Energy Cost",(char *)*puVar22), iVar13 != 0)) &&
       (iVar13 = strcasecmp("Cooldown",*(char **)*plVar16), iVar13 != 0)) {
      uVar14 = FUN_00cb3700(puVar22);
      FUN_00b4cf84(0x42a00000,*(undefined4 *)(puVar22 + 1),*(undefined4 *)((long)puVar22 + 0xc),
                   *(undefined4 *)(puVar22 + 2),*(undefined4 *)(puVar22 + 3),
                   *(undefined4 *)((long)puVar22 + 0x14),param_3,uVar20,uVar19,uVar14,
                   *(undefined4 *)((long)puVar22 + 0x2c),uVar2);
      uVar20 = uVar20 + 1;
      if (uVar20 == 8) goto LAB_00b4caec;
    }
    puVar22 = (undefined8 *)plVar16[1];
    plVar16 = plVar16 + 1;
  }
  if (uVar20 < 8) {
    puVar17 = (uint *)(param_3 + (ulong)uVar20 * 0xae8 + 0x23fc);
    lVar21 = 8 - (ulong)uVar20;
    do {
      lVar21 = lVar21 + -1;
      *puVar17 = *puVar17 & 0xfffffffb;
      puVar17 = puVar17 + 0x2ba;
    } while (lVar21 != 0);
  }
LAB_00b4caec:
  fVar23 = (float)FUN_00f01c54(lVar1,0,0,1,1);
  fVar23 = fVar23 * *(float *)(param_3 + 0x48);
  if ((*(float *)(param_3 + 0x90) < fVar23) &&
     ((fVar23 = *(float *)(param_3 + 0x90) / fVar23, *(float *)(param_3 + 0x360) != fVar23 ||
      (*(float *)(param_3 + 0x364) != fVar23)))) {
    *(float *)(param_3 + 0x360) = fVar23;
    *(float *)(param_3 + 0x364) = fVar23;
    FUN_0091ada4(lVar1);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if (*(long *)(lVar11 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b4cb94(float param_1,float param_2,float param_3,float param_4,float param_5,
                 long *param_6,undefined8 param_7,int param_8,uint param_9,uint param_10)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  float fVar9;
  undefined8 local_a8;
  void *local_a0;
  long local_98;
  
  lVar4 = tpidr_el0;
  local_98 = *(long *)(lVar4 + 0x28);
  FUN_00f0d75c(param_6 + 0x2b);
  FUN_00b4d390(param_6,param_10 & 1,param_9);
  FUN_00e70510(&local_a8);
  plVar8 = param_6 + 0x51;
  uVar7 = 0;
  do {
    uVar1 = uVar7 + 1;
    if (uVar7 < param_9) {
      bVar5 = uVar7 != 4;
      fVar9 = param_3;
      if (bVar5) {
        fVar9 = 0.0;
      }
      FUN_00cb1d0c((float)(uVar7 & 0xffffffff) * param_2 + param_1 + fVar9,param_8,&local_a8,1);
      (**(code **)(*plVar8 + 0x138))(plVar8,&local_a8);
      ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
      if (param_3 == 0.0 || bVar5) {
        ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
      }
      ppuVar2 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
      if (param_3 == 0.0 || bVar5) {
        ppuVar2 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
      }
      if ((param_10 & 1) == 0) {
        ppuVar3 = ppuVar2;
      }
      FUN_00f0d92c(plVar8,*ppuVar3,&DAT_01bee7fa);
    }
    else {
      (**(code **)(*plVar8 + 0x138))(plVar8,&DAT_03210450);
    }
    plVar8 = plVar8 + 0x26;
    uVar7 = uVar1;
  } while (uVar1 != 5);
  if (param_5 <= 0.0) {
    puVar6 = &DAT_03210450;
  }
  else {
    fVar9 = param_5 * 100.0;
    if (param_8 != 2) {
      fVar9 = param_5;
    }
    FUN_00cb1d0c(fVar9,2,&local_a8,0);
    puVar6 = &local_a8;
  }
  FUN_00f0d75c(param_6 + 0x10f,puVar6);
  if (param_4 <= 0.0) {
    puVar6 = &DAT_03210450;
  }
  else {
    fVar9 = param_4 * 100.0;
    if (param_8 != 2) {
      fVar9 = param_4;
    }
    FUN_00cb1d0c(fVar9,2,&local_a8,0);
    puVar6 = &local_a8;
  }
  FUN_00f0d75c(param_6 + 0x135,puVar6);
  (**(code **)(*param_6 + 0x138))(param_6);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  if (*(long *)(lVar4 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b4cdf0(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                 uint param_5,uint param_6)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 local_90;
  void *local_88;
  undefined4 local_80 [2];
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  FUN_00b4d390(param_2,param_6 & 1,param_5);
  local_80[0] = 0xff5a5a5a;
  FUN_00f0d75c(param_2 + 0x2b,param_3);
  if ((float)param_1 == 0.0) {
    FUN_00f0d7fc(param_2 + 0x2b,local_80);
  }
  FUN_00e70510(&local_90);
  uVar6 = 0;
  plVar5 = param_2 + 0x51;
  puVar1 = &DAT_01bee7fa;
  if ((float)param_1 <= 0.0) {
    puVar1 = local_80;
  }
  do {
    bVar4 = uVar6 < param_5;
    uVar6 = uVar6 + 1;
    if (bVar4) {
      FUN_00cb1d0c(param_1,param_4,&local_90,1);
      (**(code **)(*plVar5 + 0x138))(plVar5,&local_90);
      ppuVar2 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
      if ((param_6 & 1) == 0) {
        ppuVar2 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
      }
      FUN_00f0d92c(plVar5,*ppuVar2,puVar1);
    }
    else {
      (**(code **)(*plVar5 + 0x138))(plVar5,&DAT_03210450);
    }
    plVar5 = plVar5 + 0x26;
  } while (uVar6 != 5);
  (**(code **)(*param_2 + 0x138))(param_2);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b4cf84(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,uint param_8,ulong param_9,
                 undefined8 param_10,undefined4 param_11,undefined4 param_12)

{
  long lVar1;
  
  lVar1 = param_7 + (ulong)param_8 * 0xae8 + 0x2378;
  FUN_00b4cb94(param_2,param_3,param_4,param_5,param_6,lVar1,param_10,param_11,param_12,
               *(undefined1 *)(param_7 + 0x7ab8));
  if (param_8 == 0) {
    if ((param_9 & 1) == 0) {
      if (*(float *)(param_7 + 0x23bc) == param_1 + param_1) goto LAB_00b4d070;
      *(float *)(param_7 + 0x23bc) = param_1 + param_1;
    }
    else {
      if (*(float *)(param_7 + 0x23bc) == param_1) goto LAB_00b4d070;
      *(float *)(param_7 + 0x23bc) = param_1;
    }
    FUN_0091ada4(lVar1);
  }
  else {
    FUN_00f07b18(0x41700000,lVar1,0,param_7 + (ulong)(param_8 - 1) * 0xae8 + 0x2378,2);
  }
LAB_00b4d070:
  param_7 = param_7 + (ulong)param_8 * 0xae8;
  *(uint *)(param_7 + 0x23fc) = *(uint *)(param_7 + 0x23fc) | 4;
  return;
}

