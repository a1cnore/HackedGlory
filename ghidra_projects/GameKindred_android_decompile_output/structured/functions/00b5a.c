// functions/00b5a — 20 functions
#include "libGameKindred.h"




void FUN_00b5a054(long param_1)

{
  FUN_00ac9484(param_1 + 0xb110,0);
  FUN_00ac9484(param_1 + 0xda48,0);
  return;
}




void FUN_00b5a090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00b63464(param_1,param_4,param_5);
  return;
}




void FUN_00b5a0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00b62b5c(param_1,param_2,param_5);
  return;
}




void FUN_00b5a0a8(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_00b62c58(param_1,in_x4);
  return;
}




void FUN_00b5a0b0(long param_1)

{
  undefined8 in_x4;
  
  FUN_00b62fdc(param_1,*(undefined4 *)(param_1 + 0x2cf8c),in_x4);
  return;
}




void FUN_00b5a0cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_009606dc(uVar1,1);
  FUN_00b09454(param_1 + 0x10808,1);
  return;
}




void FUN_00b5a104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00b639ec(param_1,param_2,param_5);
  return;
}




void FUN_00b5a10c(long param_1,ulong param_2)

{
  char *pcVar1;
  
  pcVar1 = "arrow_down";
  if ((param_2 & 1) == 0) {
    pcVar1 = "arrow_right";
  }
  FUN_00f0e578(param_1 + 0x4d8,pcVar1);
  return;
}




void FUN_00b5a12c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b5ed60(param_1,param_4);
  return;
}




void FUN_00b5a134(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_027e4378;
  param_1[0x587] = &PTR_FUN_027e45c8;
  param_1[0x58b] = &PTR_FUN_027e49c0;
  param_1[0x58a] = &PTR_FUN_027e4960;
  param_1[0x58c] = &PTR_FUN_027e4a18;
  FUN_00915ef0(param_1 + 0x58c);
  FUN_00ac0980(param_1 + 0x51b8,1);
  FUN_00b5aae4(param_1);
  uVar1 = FUN_009580c4();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_009580b8();
    FUN_00963a5c(uVar2,0);
  }
  uVar1 = FUN_0092e920();
  if ((uVar1 & 1) != 0) {
    lVar3 = FUN_009fece0();
    lVar5 = (ulong)*(uint *)(lVar3 + 0x40) << 5;
    puVar6 = *(undefined8 **)(lVar3 + 0x48);
    do {
      puVar4 = puVar6;
      if (lVar5 == 0) goto LAB_00b5a200;
      lVar5 = lVar5 + -0x20;
      puVar6 = puVar4 + 4;
    } while ((undefined8 *)*puVar4 != param_1 + 0x58e);
    FUN_00910480((uint *)(lVar3 + 0x40),puVar4);
  }
LAB_00b5a200:
  if ((*(byte *)(param_1 + 0x5a08) & 1) != 0) {
    operator_delete((void *)param_1[0x5a0a]);
  }
  if ((*(byte *)(param_1 + 0x59f6) & 1) != 0) {
    operator_delete((void *)param_1[0x59f8]);
  }
  if ((*(byte *)(param_1 + 0x59e7) & 1) != 0) {
    operator_delete((void *)param_1[0x59e9]);
  }
  FUN_0099cedc(param_1 + 0x59dc);
  FUN_00952050(param_1 + 0x59da,1);
  FUN_00914e2c(param_1 + 23000,1);
  FUN_00ac078c(param_1 + 0x51b8);
  FUN_00f01868(param_1 + 0x51a7);
  FUN_00f0d3a4(param_1 + 0x5181);
  FUN_00f0d3a4(param_1 + 0x515b);
  if ((void *)param_1[0x515a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x515a]);
    param_1[0x515a] = 0;
    param_1[0x5159] = 0;
  }
  if ((void *)param_1[0x5158] != (void *)0x0) {
    operator_delete__((void *)param_1[0x5158]);
    param_1[0x5158] = 0;
    param_1[0x5157] = 0;
  }
  if ((void *)param_1[0x5156] != (void *)0x0) {
    operator_delete__((void *)param_1[0x5156]);
    param_1[0x5156] = 0;
    param_1[0x5155] = 0;
  }
  param_1[0x5096] = &PTR_FUN_027d5388;
  param_1[0x5131] = &PTR_FUN_028266f0;
  param_1[0x5148] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x514b);
  FUN_00f13d08(param_1 + 0x5131);
  param_1[0x5113] = &PTR_FUN_028266f0;
  param_1[0x512a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x512d);
  FUN_00f13d08(param_1 + 0x5113);
  param_1[0x50f5] = &PTR_FUN_028266f0;
  param_1[0x510c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x510f);
  FUN_00f13d08(param_1 + 0x50f5);
  FUN_00f01868(param_1 + 0x50e4);
  FUN_009c825c(param_1 + 0x5096);
  param_1[0x5078] = &PTR_FUN_028266f0;
  param_1[0x508f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5092);
  FUN_00f13d08(param_1 + 0x5078);
  FUN_00f0d3a4(param_1 + 0x5052);
  FUN_00f0d3a4(param_1 + 0x502c);
  FUN_00f0d3a4(param_1 + 0x5006);
  FUN_00f01868(param_1 + 0x4ff5);
  param_1[0x4f36] = &PTR_FUN_027d5388;
  param_1[0x4fd1] = &PTR_FUN_028266f0;
  param_1[0x4fe8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4feb);
  FUN_00f13d08(param_1 + 0x4fd1);
  param_1[0x4fb3] = &PTR_FUN_028266f0;
  param_1[0x4fca] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4fcd);
  FUN_00f13d08(param_1 + 0x4fb3);
  param_1[0x4f95] = &PTR_FUN_028266f0;
  param_1[0x4fac] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4faf);
  FUN_00f13d08(param_1 + 0x4f95);
  FUN_00f01868(param_1 + 0x4f84);
  FUN_009c825c(param_1 + 0x4f36);
  param_1[0x4f18] = &PTR_FUN_028266f0;
  param_1[0x4f2f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f32);
  FUN_00f13d08(param_1 + 0x4f18);
  FUN_00f0d3a4(param_1 + 0x4ef2);
  FUN_00f0d3a4(param_1 + 0x4ecc);
  FUN_00f0d3a4(param_1 + 0x4ea6);
  FUN_00f01868(param_1 + 0x4e95);
  param_1[0x4dd6] = &PTR_FUN_027d5388;
  param_1[0x4e71] = &PTR_FUN_028266f0;
  param_1[0x4e88] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4e8b);
  FUN_00f13d08(param_1 + 0x4e71);
  param_1[0x4e53] = &PTR_FUN_028266f0;
  param_1[0x4e6a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4e6d);
  FUN_00f13d08(param_1 + 0x4e53);
  param_1[0x4e35] = &PTR_FUN_028266f0;
  param_1[0x4e4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4e4f);
  FUN_00f13d08(param_1 + 0x4e35);
  FUN_00f01868(param_1 + 0x4e24);
  FUN_009c825c(param_1 + 0x4dd6);
  param_1[0x4db8] = &PTR_FUN_028266f0;
  param_1[0x4dcf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4dd2);
  FUN_00f13d08(param_1 + 0x4db8);
  FUN_00f0d3a4(param_1 + 0x4d92);
  FUN_00f0d3a4(param_1 + 0x4d6c);
  FUN_00f0d3a4(param_1 + 0x4d46);
  FUN_00f01868(param_1 + 0x4d35);
  FUN_00ed00e0(param_1 + 0x4c8e);
  FUN_00f13d08(param_1 + 0x4c5a);
  FUN_00f01868(param_1 + 0x4c49);
  FUN_00f0d3a4(param_1 + 0x4c23);
  FUN_00b1f8e8(param_1 + 0x4ac9);
  FUN_00f01868(param_1 + 0x4ab8);
  FUN_00ae7558(param_1 + 0x4852);
  lVar3 = -0x10c30;
  puVar6 = param_1 + 0x45ed;
  do {
    FUN_00ae7558(puVar6);
    lVar3 = lVar3 + 0x1328;
    puVar6 = puVar6 + -0x265;
  } while (lVar3 != 0);
  FUN_00f13d08(param_1 + 0x26b5);
  param_1[0x2697] = &PTR_FUN_028266f0;
  param_1[0x26ae] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x26b1);
  FUN_00f13d08(param_1 + 0x2697);
  FUN_00f0d3a4(param_1 + 0x2671);
  FUN_009c7fa8(param_1 + 0x23b9);
  FUN_009c7fa8(param_1 + 0x2101);
  FUN_00f0d3a4(param_1 + 0x20db);
  param_1[0x20bd] = &PTR_FUN_028266f0;
  param_1[0x20d4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x20d7);
  FUN_00f13d08(param_1 + 0x20bd);
  FUN_00f01868(param_1 + 0x20ac);
  param_1[0x208e] = &PTR_FUN_028266f0;
  param_1[0x20a5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x20a8);
  FUN_00f13d08(param_1 + 0x208e);
  param_1[0x2070] = &PTR_FUN_028266f0;
  param_1[0x2087] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x208a);
  FUN_00f13d08(param_1 + 0x2070);
  FUN_00ac848c(param_1 + 0x1b49);
  FUN_00ac848c(param_1 + 0x1622);
  puVar6 = param_1 + 0x15fc;
  lVar3 = -0x1300;
  do {
    FUN_00f0d3a4(puVar6);
    lVar3 = lVar3 + 0x130;
    puVar6 = puVar6 + -0x26;
  } while (lVar3 != 0);
  FUN_00f0d3a4(param_1 + 0x139c);
  FUN_009c7fa8(param_1 + 0x10e4);
  FUN_00f0d3a4(param_1 + 0x10be);
  FUN_00f0d3a4(param_1 + 0x1098);
  FUN_00ed00e0(param_1 + 0xff1);
  FUN_00f13d08(param_1 + 0xfbd);
  FUN_00f01868(param_1 + 0xfac);
  FUN_00f13d08(param_1 + 0xf95);
  param_1[0xf77] = &PTR_FUN_028266f0;
  param_1[0xf8e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf91);
  FUN_00f13d08(param_1 + 0xf77);
  param_1[0xf59] = &PTR_FUN_028266f0;
  param_1[0xf70] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf73);
  FUN_00f13d08(param_1 + 0xf59);
  FUN_00f01868(param_1 + 0xf48);
  FUN_00f0d3a4(param_1 + 0xf22);
  FUN_00f0d3a4(param_1 + 0xefc);
  FUN_00f13d08(param_1 + 0xee5);
  param_1[0xb46] = &PTR_FUN_027d5508;
  if ((void *)param_1[0xedf] != (void *)0x0) {
    operator_delete__((void *)param_1[0xedf]);
    param_1[0xedf] = 0;
    param_1[0xede] = 0;
  }
  if ((void *)param_1[0xedd] != (void *)0x0) {
    operator_delete__((void *)param_1[0xedd]);
    param_1[0xedd] = 0;
    param_1[0xedc] = 0;
  }
  if ((void *)param_1[0xedb] != (void *)0x0) {
    operator_delete__((void *)param_1[0xedb]);
    param_1[0xedb] = 0;
    param_1[0xeda] = 0;
  }
  FUN_00f0d3a4(param_1 + 0xeb4);
  FUN_00f13d08(param_1 + 0xe99);
  FUN_00f13d08(param_1 + 0xe7e);
  FUN_009c7fa8(param_1 + 0xbc6);
  FUN_00abd150(param_1 + 0xb46);
  FUN_00f0d3a4(param_1 + 0xb20);
  FUN_009c7fa8(param_1 + 0x868);
  FUN_009c7fa8(param_1 + 0x5b0);
  FUN_00f13d08(param_1 + 0x595);
  FUN_00bf1768(param_1 + 0x58e);
  FUN_00948d58(param_1 + 0x587);
  FUN_00a9f558(param_1);
  return;
}




void FUN_00b5aae4(long param_1)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  
  puVar1 = (uint *)(param_1 + 0x28aa8);
  uVar4 = *puVar1;
  plVar2 = (long *)(param_1 + 0x28ab0);
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      plVar3 = *(long **)(*plVar2 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        *(undefined8 *)(*plVar2 + uVar5 * 8) = 0;
        uVar4 = *puVar1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if (*plVar2 != 0) {
    *puVar1 = 0;
  }
  puVar1 = (uint *)(param_1 + 0x28ab8);
  uVar4 = *puVar1;
  plVar2 = (long *)(param_1 + 0x28ac0);
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      plVar3 = *(long **)(*plVar2 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        *(undefined8 *)(*plVar2 + uVar5 * 8) = 0;
        uVar4 = *puVar1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if (*plVar2 != 0) {
    *puVar1 = 0;
  }
  puVar1 = (uint *)(param_1 + 0x28ac8);
  uVar4 = *puVar1;
  plVar2 = (long *)(param_1 + 0x28ad0);
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      plVar3 = *(long **)(*plVar2 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        *(undefined8 *)(*plVar2 + uVar5 * 8) = 0;
        uVar4 = *puVar1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if (*plVar2 != 0) {
    *puVar1 = 0;
  }
  return;
}




void FUN_00b5ac28(long param_1)

{
  FUN_00b5a134(param_1 + -0x2c38);
  return;
}




void FUN_00b5ac34(long param_1)

{
  FUN_00b5a134(param_1 + -0x2c50);
  return;
}




void FUN_00b5ac40(long param_1)

{
  FUN_00b5a134(param_1 + -0x2c60);
  return;
}




void FUN_00b5ac4c(void *param_1)

{
  FUN_00b5a134();
  operator_delete(param_1);
  return;
}




void FUN_00b5ac70(long param_1)

{
  FUN_00b5a134((void *)(param_1 + -0x2c38));
  operator_delete((void *)(param_1 + -0x2c38));
  return;
}




void FUN_00b5ac9c(long param_1)

{
  FUN_00b5a134((void *)(param_1 + -0x2c50));
  operator_delete((void *)(param_1 + -0x2c50));
  return;
}




void FUN_00b5acc8(long param_1)

{
  FUN_00b5a134((void *)(param_1 + -0x2c60));
  operator_delete((void *)(param_1 + -0x2c60));
  return;
}




void thunk_FUN_00b5acf8(undefined1 param_1 [16],float param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  char *pcVar6;
  long *plVar7;
  long *plVar8;
  float *pfVar9;
  long *plVar10;
  byte *pbVar11;
  long *plVar12;
  long *plVar13;
  float *pfVar14;
  float *pfVar15;
  uint *puVar16;
  char *pcVar17;
  uint *puVar18;
  char *pcVar19;
  long *plVar20;
  long *plVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  undefined4 *puVar25;
  undefined **ppuVar26;
  uint uVar27;
  char cVar28;
  long lVar29;
  long *plVar30;
  ulong uVar31;
  long *plVar32;
  ulong uVar33;
  float *pfVar34;
  long lVar35;
  long *plVar36;
  int iVar37;
  ulong uVar38;
  int iVar39;
  uint uVar40;
  int iVar41;
  long *plVar42;
  float fVar43;
  float fVar44;
  long lVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fStack_110;
  int iStack_10c;
  undefined8 uStack_d0;
  void *pvStack_c8;
  int iStack_bc;
  float fStack_b8;
  float fStack_b4;
  long lStack_b0;
  
  lVar29 = tpidr_el0;
  lStack_b0 = *(long *)(lVar29 + 0x28);
  FUN_00f00298(&fStack_b4,&fStack_b8);
  fStack_b4 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  *(uint *)((long)param_3 + 0x2d2c) = *(uint *)((long)param_3 + 0x2d2c) | 4;
  *(uint *)((long)param_3 + 0x7de4) = *(uint *)((long)param_3 + 0x7de4) & 0xfffffffb;
  fStack_b8 = param_2;
  FUN_0093dbe8();
  pfVar3 = (float *)(param_3 + 0x5a06);
  *(uint *)((long)param_3 + 0x25644) = *(uint *)((long)param_3 + 0x25644) & 0xfffffffb;
  fVar47 = fStack_b4 * 0.58;
  *pfVar3 = fVar47;
  fVar49 = fVar47 + -130.0;
  pfVar24 = (float *)(param_3 + 0x5a05);
  pfVar4 = (float *)((long)param_3 + 0x2d02c);
  *pfVar24 = fVar49;
  *pfVar4 = fVar49;
  pfVar22 = (float *)(param_3 + 0x5a07);
  pfVar5 = (float *)((long)param_3 + 0x2d034);
  pcVar6 = (char *)((long)param_3 + 0x2cfa5);
  *pfVar22 = (fVar49 + -30.0) * 0.5;
  *pfVar5 = (fStack_b4 - fVar47) + -48.0 + -80.0;
  cVar28 = *pcVar6;
  pfVar9 = (float *)(param_3 + 0xf50);
  if ((*pfVar9 != 0.0) || (*(float *)((long)param_3 + 0x7a84) != 0.0)) {
    pfVar9[0] = 0.0;
    pfVar9[1] = 0.0;
    FUN_0091ada4(param_3 + 0xf48);
  }
  plVar7 = param_3 + 0xf59;
  FUN_00f13f08(fStack_b4,fStack_b8,plVar7);
  plVar8 = param_3 + 0xf95;
  fVar47 = (float)FUN_00f0e700(plVar7);
  FUN_00f0e700(plVar7);
  FUN_00f13f08(fVar47 * 0.5,plVar8);
  pfVar9 = (float *)(param_3 + 0xfb4);
  if ((*pfVar9 != 65.0) || (*(float *)((long)param_3 + 0x7da4) != 0.0)) {
    pfVar9[0] = 65.0;
    pfVar9[1] = 0.0;
    FUN_0091ada4(param_3 + 0xfac);
  }
  plVar7 = param_3 + 0x1622;
  fVar49 = *pfVar24;
  FUN_00ac9d00(0,fVar49,fVar49,plVar7);
  FUN_00ac9484(plVar7,1);
  fVar43 = (float)FUN_00aca658(plVar7);
  fVar47 = DAT_02be366c;
  pfVar9 = (float *)((long)param_3 + 0xb154);
  if ((*(float *)(param_3 + 0x162a) != *pfVar24 * 0.5) || (*pfVar9 != DAT_02be366c)) {
    *(float *)(param_3 + 0x162a) = *pfVar24 * 0.5;
    *pfVar9 = fVar47;
    FUN_0091ada4(plVar7);
  }
  uStack_d0 = 0x3f0000003f000000;
  (**(code **)(*plVar7 + 0x28))(plVar7,&uStack_d0);
  fVar47 = (float)NEON_ucvtf((int)param_3[0x4ada]);
  if (fVar47 <= 1.0) {
    fVar47 = 1.0;
  }
  plVar10 = param_3 + 0x4ac9;
  FUN_00b20860(0,*pfVar5 / fVar47,*pfVar5 / fVar47,plVar10);
  fVar47 = DAT_02be366c + -50.0;
  if ((*(float *)(param_3 + 0x4ad1) != 48.0) || (*(float *)((long)param_3 + 0x2568c) != fVar47)) {
    *(float *)(param_3 + 0x4ad1) = 48.0;
    *(float *)((long)param_3 + 0x2568c) = fVar47;
    FUN_0091ada4(plVar10);
  }
  uStack_d0 = 0;
  (**(code **)(*plVar10 + 0x28))(plVar10,&uStack_d0);
  plVar10 = param_3 + 0x4c23;
  fVar47 = DAT_02be366c + -50.0;
  if ((*(float *)(param_3 + 0x4c2b) != 68.0) || (*(float *)((long)param_3 + 0x2615c) != fVar47)) {
    *(float *)(param_3 + 0x4c2b) = 68.0;
    *(float *)((long)param_3 + 0x2615c) = fVar47;
    FUN_0091ada4(plVar10);
  }
  uStack_d0 = 0;
  (**(code **)(*plVar10 + 0x28))(plVar10,&uStack_d0);
  pbVar11 = (byte *)((long)param_3 + 0xdacc);
  plVar12 = param_3 + 0x1b49;
  if ((*pbVar11 >> 2 & 1) != 0) {
    FUN_00ac9d00(0,*pfVar24,*pfVar24,plVar12);
    FUN_00ac9484(plVar12,1);
    fVar47 = fVar49 + DAT_02be366c + 10.0;
    if ((*(float *)(param_3 + 0x1b51) != *pfVar24 * 0.5) ||
       (*(float *)((long)param_3 + 0xda8c) != fVar47)) {
      *(float *)(param_3 + 0x1b51) = *pfVar24 * 0.5;
      *(float *)((long)param_3 + 0xda8c) = fVar47;
      FUN_0091ada4(plVar12);
    }
    uStack_d0 = 0x3f0000003f000000;
    (**(code **)(*plVar12 + 0x28))(plVar12,&uStack_d0);
    fVar44 = (float)FUN_00aca658(plVar12);
    fVar49 = fVar49 + fVar47 + 10.0;
    fVar43 = fVar43 + fVar44 + 0.0;
    if (*pcVar6 != '\0') {
      fVar49 = fVar49 + 100.0;
    }
  }
  fVar44 = *pfVar24 * 0.5 - fVar43 * 0.5;
  fVar47 = fVar49 * 0.5 + DAT_02be366c + 10.0;
  if ((*(float *)(param_3 + 0x20b4) != fVar44) || (*(float *)((long)param_3 + 0x105a4) != fVar47)) {
    *(float *)(param_3 + 0x20b4) = fVar44;
    *(float *)((long)param_3 + 0x105a4) = fVar47;
    FUN_0091ada4(param_3 + 0x20ac);
  }
  plVar13 = param_3 + 0x20db;
  FUN_00f0dad0(fVar43 + -60.0,plVar13,1);
  if ((*(float *)(param_3 + 0x20e3) != 30.0) || (*(float *)((long)param_3 + 0x1071c) != 30.0)) {
    lVar45 = NEON_fmov(0x41f00000,4);
    param_3[0x20e3] = lVar45;
    FUN_0091ada4(plVar13);
  }
  fVar47 = (float)FUN_00f0d4e0(plVar13);
  FUN_00f0d4e0(plVar13);
  FUN_00f13f08(fVar47 + 60.0,fVar44 + 60.0,param_3 + 0x20bd);
  ppuVar26 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if (*pcVar6 != '\0') {
    ppuVar26 = &PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20;
  }
  plVar13 = param_3 + 0x1098;
  FUN_00f0d92c(plVar13,*ppuVar26,&DAT_01bee7fa);
  FUN_00f0db64(*pfVar22,0,0x3f800000,plVar13);
  fVar47 = DAT_02be366c;
  fVar43 = *(float *)(param_3 + 0x10a0);
  pfVar14 = (float *)((long)param_3 + 0x8504);
  if ((fVar43 != 0.0) || (fVar43 = *pfVar14, fVar43 != DAT_02be366c)) {
    *(float *)(param_3 + 0x10a0) = 0.0;
    *pfVar14 = fVar47;
    FUN_0091ada4(plVar13);
  }
  uStack_d0 = 0x3f00000000000000;
  (**(code **)(*plVar13 + 0x28))(plVar13,&uStack_d0);
  ppuVar26 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if (*pcVar6 != '\0') {
    ppuVar26 = &PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20;
  }
  plVar32 = param_3 + 0x10be;
  FUN_00f0d92c(plVar32,*ppuVar26,&DAT_01bee7fa);
  fVar47 = DAT_02be366c;
  FUN_00f0d4e0(plVar13);
  fVar44 = fVar43 * 0.5;
  FUN_00f0d4e0(plVar32);
  fVar48 = *(float *)(param_3 + 0x10c6);
  uVar31 = (ulong)(uint)fVar48;
  fVar47 = fVar47 + fVar44 + fVar43 * 0.5 + 4.0;
  pfVar15 = (float *)((long)param_3 + 0x8634);
  if ((fVar48 != 0.0) || (uVar31 = (ulong)(uint)*pfVar15, *pfVar15 != fVar47)) {
    *(float *)(param_3 + 0x10c6) = 0.0;
    *pfVar15 = fVar47;
    FUN_0091ada4(plVar32);
  }
  uStack_d0 = 0x3f00000000000000;
  fVar43 = *(float *)(&DAT_01bb4d10 + (ulong)(cVar28 == '\0') * 4);
  (**(code **)(*plVar32 + 0x28))(plVar32,&uStack_d0);
  fVar47 = (float)uVar31;
  lVar45 = -0x1300;
  do {
    lVar35 = lVar45 + 0x130;
    *(uint *)((long)param_3 + lVar45 + 0xb194) =
         *(uint *)((long)param_3 + lVar45 + 0xb194) & 0xfffffffb;
    lVar45 = lVar35;
  } while (lVar35 != 0);
  lVar45 = 0x136e4;
  lVar35 = 0xe;
  do {
    lVar35 = lVar35 + -1;
    *(uint *)((long)param_3 + lVar45) = *(uint *)((long)param_3 + lVar45) & 0xfffffffb;
    lVar45 = lVar45 + 0x1328;
  } while (lVar35 != 0);
  puVar16 = (uint *)((long)param_3 + 0x9d64);
  pcVar17 = (char *)((long)param_3 + 0x2cfa4);
  *puVar16 = *puVar16 & 0xfffffffb;
  puVar18 = (uint *)(param_3 + 0x59f9);
  uVar27 = *puVar18;
  uVar33 = (ulong)uVar27;
  pcVar19 = (char *)((long)param_3 + 0x2cf9b);
  if (*pcVar17 == '\0') {
    if (uVar27 == 0) goto LAB_00b5ba9c;
    fVar44 = 80.0;
    iVar41 = 0;
    iStack_10c = 0;
    uVar33 = 0;
    do {
      fVar47 = (float)uVar31;
      iVar37 = *(int *)((long)param_3 + uVar33 * 4 + 0x2cfd0);
      if (iVar37 != 0) {
        iVar1 = iVar41;
        iVar39 = iVar37;
        do {
          fVar47 = 80.0;
          FUN_00ae78e4(*pfVar24,0x42a00000,0,0x40800000,param_3 + (long)iVar1 * 0x265 + 0x26cc,
                       *pcVar19);
          pfVar34 = (float *)((long)param_3 + (long)iVar1 * 0x1328 + 0x136a4);
          if ((*(float *)(param_3 + (long)iVar1 * 0x265 + 0x26d4) != 0.0) || (*pfVar34 != fVar44)) {
            *(float *)(param_3 + (long)iVar1 * 0x265 + 0x26d4) = 0.0;
            *pfVar34 = fVar44;
            FUN_0091ada4(param_3 + (long)iVar1 * 0x265 + 0x26cc);
          }
          fVar44 = fVar44 + 84.0;
          iVar39 = iVar39 + -1;
          *(uint *)((long)param_3 + (long)iVar1 * 0x1328 + 0x136e4) =
               *(uint *)((long)param_3 + (long)iVar1 * 0x1328 + 0x136e4) | 4;
          iVar1 = iVar1 + 1;
        } while (iVar39 != 0);
        iStack_10c = iVar41 + -1 + iVar37;
      }
      fVar48 = *(float *)((long)param_3 + (long)iVar41 * 0x1328 + 0x136a4);
      plVar20 = param_3 + uVar33 * 0x26 + 0x13c2;
      FUN_00f0e700(param_3 + 0x27d9);
      uVar31 = 0xc0c00000;
      fVar47 = fVar48 + fVar47 * -0.5 + -6.0;
      pfVar34 = (float *)((long)param_3 + uVar33 * 0x130 + 0x9e54);
      if ((*(float *)(param_3 + uVar33 * 0x26 + 0x13ca) != 0.0) ||
         (fVar48 = *pfVar34, uVar31 = (ulong)(uint)fVar48, fVar48 != fVar47)) {
        *(float *)(param_3 + uVar33 * 0x26 + 0x13ca) = 0.0;
        *pfVar34 = fVar47;
        FUN_0091ada4(plVar20);
      }
      uStack_d0 = 0x3f80000000000000;
      (**(code **)(*plVar20 + 0x28))(plVar20,&uStack_d0);
      fVar47 = (float)uVar31;
      uVar38 = uVar33 + 1;
      *(uint *)((long)param_3 + uVar33 * 0x130 + 0x9e94) =
           *(uint *)((long)param_3 + uVar33 * 0x130 + 0x9e94) | 4;
      fVar44 = fVar44 + 65.0;
      iVar41 = iVar37 + iVar41;
      uVar33 = uVar38;
    } while (uVar38 < *puVar18);
  }
  else if (uVar27 == 0) {
LAB_00b5ba9c:
    fVar44 = 80.0;
    iStack_10c = 0;
  }
  else {
    fVar44 = 80.0;
    plVar20 = param_3 + 0xfbd;
    plVar42 = param_3 + 0x27d9;
    plVar21 = param_3 + 0x13c2;
    iVar41 = 0;
    iStack_10c = 0;
    fStack_110 = 80.0;
    uVar38 = 0;
    do {
      fVar47 = (float)uVar31;
      iVar37 = *(int *)((long)param_3 + uVar38 * 4 + 0x2cfd0);
      if (((int)uVar33 < 2) || (*pcVar17 == '\0')) {
        if (iVar37 != 0) {
          iVar39 = iVar37;
          iVar1 = iVar41;
          do {
            FUN_00b63c54(0x40800000,(*(float *)(param_3 + 0x26bd) + *pfVar24 * 0.5) - *pfVar22 * 0.5
                         ,fVar44,param_3,iVar1);
            fVar44 = fVar44 + 84.0;
            iVar39 = iVar39 + -1;
            iVar1 = iVar1 + 1;
          } while (iVar39 != 0);
          iStack_10c = iVar41 + -1 + iVar37;
        }
        fVar48 = *(float *)((long)param_3 + (long)iVar41 * 0x1328 + 0x136a4);
        plVar36 = param_3 + uVar38 * 0x26;
        fVar47 = *pfVar22 * 0.5;
        fVar51 = (*(float *)(param_3 + 0x26bd) + *pfVar24 * 0.5) - fVar47;
        FUN_00f0e700(plVar42);
        pfVar34 = (float *)(plVar36 + 0x13ca);
        fVar50 = *pfVar34;
        fVar48 = fVar48 - fVar47 * 0.5;
LAB_00b5b824:
        plVar30 = plVar36 + 0x13c2;
        uVar31 = 0xc0c00000;
        if ((fVar50 != fVar51) ||
           (fVar47 = *(float *)((long)plVar36 + 0x9e54), uVar31 = (ulong)(uint)fVar47,
           fVar47 != fVar48 + -6.0)) {
          *pfVar34 = fVar51;
          *(float *)((long)plVar36 + 0x9e54) = fVar48 + -6.0;
          FUN_0091ada4(plVar30);
        }
        lVar45 = *plVar30;
      }
      else {
        fVar48 = (float)FUN_00f13e54(plVar20);
        FUN_00f13e54(plVar20);
        FUN_00f13f08(fVar48 + fVar48,plVar20);
        if (uVar38 != 0) {
          fVar44 = fStack_110;
          if (iVar37 != 0) {
            iVar1 = iVar41;
            iVar39 = iVar37;
            do {
              fVar47 = *pfVar22 + 30.0;
              FUN_00b63c54(0x40800000,fVar47,fVar44,param_3,iVar1);
              fVar44 = fVar44 + 84.0;
              iVar39 = iVar39 + -1;
              iVar1 = iVar1 + 1;
            } while (iVar39 != 0);
            iStack_10c = iVar41 + -1 + iVar37;
          }
          fVar48 = *(float *)((long)param_3 + (long)iVar41 * 0x1328 + 0x136a4);
          plVar36 = param_3 + uVar38 * 0x26;
          fVar51 = *pfVar22 + 30.0;
          FUN_00f0e700(plVar42);
          pfVar34 = (float *)(plVar36 + 0x13ca);
          fVar50 = *pfVar34;
          fVar48 = fVar48 + fVar47 * -0.5;
          goto LAB_00b5b824;
        }
        if (iVar37 != 0) {
          iVar39 = iVar37;
          iVar1 = iVar41;
          do {
            fVar47 = 0.0;
            FUN_00b63c54(0x40800000,0,fVar44,param_3,iVar1);
            fVar44 = fVar44 + 84.0;
            iVar39 = iVar39 + -1;
            iVar1 = iVar1 + 1;
          } while (iVar39 != 0);
          iStack_10c = iVar41 + -1 + iVar37;
        }
        fVar48 = *(float *)((long)param_3 + (long)iVar41 * 0x1328 + 0x136a4);
        FUN_00f0e700(plVar42);
        fVar48 = fVar48 + fVar47 * -0.5;
        uVar31 = (ulong)(uint)fVar48;
        fVar48 = fVar48 + -6.0;
        if ((*(float *)(param_3 + 0x13ca) != 0.0) ||
           (fVar47 = *(float *)((long)param_3 + 0x9e54), uVar31 = (ulong)(uint)fVar47,
           fVar47 != fVar48)) {
          *(float *)(param_3 + 0x13ca) = 0.0;
          *(float *)((long)param_3 + 0x9e54) = fVar48;
          FUN_0091ada4(plVar21);
        }
        lVar45 = *plVar21;
        plVar30 = plVar21;
      }
      uStack_d0 = 0x3f80000000000000;
      (**(code **)(lVar45 + 0x28))(plVar30,&uStack_d0);
      fVar47 = (float)uVar31;
      uVar2 = uVar38 + 1;
      iVar41 = iVar37 + iVar41;
      *(uint *)((long)param_3 + uVar38 * 0x130 + 0x9e94) =
           *(uint *)((long)param_3 + uVar38 * 0x130 + 0x9e94) | 4;
      fVar44 = fVar44 + 65.0;
      uVar33 = (ulong)*puVar18;
      uVar38 = uVar2;
    } while (uVar2 < uVar33);
  }
  if (*pcVar19 == '\0') {
    FUN_00ac9cd0(plVar7);
    lVar45 = FUN_00cead68();
    if (*(char *)(lVar45 + 0x53) != '\0') {
      iVar41 = *(int *)((long)param_3 + 0x2cfcc);
      plVar20 = param_3 + 0x139c;
      uVar27 = 0xe - iVar41;
      if (*pcVar17 == '\0') {
        if (0 < (int)uVar27) {
          iVar37 = 0;
          plVar42 = param_3 + (long)iStack_10c * 0x265 + 0x2931;
          do {
            fVar47 = 80.0;
            FUN_00ae78e4(*pfVar24,0x42a00000,0,0x40800000,plVar42,*pcVar19);
            if ((*(float *)(plVar42 + 8) != 0.0) || (*(float *)((long)plVar42 + 0x44) != fVar44)) {
              *(undefined4 *)(plVar42 + 8) = 0;
              *(float *)((long)plVar42 + 0x44) = fVar44;
              FUN_0091ada4(plVar42);
            }
            *(uint *)((long)plVar42 + 0x84) = *(uint *)((long)plVar42 + 0x84) | 4;
            if (iVar37 == 0) {
              fVar48 = *(float *)((long)plVar42 + 0x44);
              FUN_00f0e700(param_3 + 0x27d9);
              fVar47 = fVar48 + fVar47 * -0.5;
              fVar48 = fVar47 + -6.0;
              if ((*(float *)(param_3 + 0x13a4) != 0.0) ||
                 (fVar47 = *(float *)((long)param_3 + 0x9d24), fVar47 != fVar48)) {
                *(float *)(param_3 + 0x13a4) = 0.0;
                *(float *)((long)param_3 + 0x9d24) = fVar48;
                FUN_0091ada4(plVar20);
              }
              uStack_d0 = 0x3f80000000000000;
              (**(code **)(*plVar20 + 0x28))(plVar20,&uStack_d0);
              *puVar16 = *puVar16 | 4;
            }
            iVar37 = iVar37 + -1;
            fVar44 = fVar44 + 84.0;
            plVar42 = plVar42 + 0x265;
          } while (iVar41 + -0xe != iVar37);
        }
      }
      else if (0 < (int)uVar27) {
        if ((int)*puVar18 < 2) {
          pfVar34 = (float *)((long)param_3 + (long)iStack_10c * 0x1328 + 0x149cc);
          uVar40 = 0;
          do {
            fVar47 = (*(float *)(param_3 + 0x26bd) + *pfVar24 * 0.5) - *pfVar22 * 0.5;
            FUN_00b63c54(0x40800000,fVar47,fVar44,param_3,iStack_10c + 1 + uVar40);
            if (uVar40 == 0) {
              fVar48 = *pfVar34;
              FUN_00f0e700(param_3 + 0x27d9);
              fVar47 = fVar48 + fVar47 * -0.5;
              fVar48 = fVar47 + -6.0;
              if ((*(float *)(param_3 + 0x13a4) != 0.0) ||
                 (fVar47 = *(float *)((long)param_3 + 0x9d24), fVar47 != fVar48)) {
                *(float *)(param_3 + 0x13a4) = 0.0;
                *(float *)((long)param_3 + 0x9d24) = fVar48;
                FUN_0091ada4(plVar20);
              }
              uStack_d0 = 0x3f80000000000000;
              (**(code **)(*plVar20 + 0x28))(plVar20,&uStack_d0);
              *puVar16 = *puVar16 | 4;
            }
            uVar40 = uVar40 + 1;
            fVar44 = fVar44 + 84.0;
            pfVar34 = pfVar34 + 0x4ca;
          } while (uVar27 != uVar40);
        }
        else {
          uVar40 = 0;
          if (0.0 < (float)(int)uVar27 * 0.5) {
            pfVar34 = (float *)((long)param_3 + (long)iStack_10c * 0x1328 + 0x149cc);
            fVar48 = fVar44;
            do {
              fVar47 = 0.0;
              FUN_00b63c54(0x40800000,0,fVar48,param_3,iStack_10c + uVar40 + 1);
              if (uVar40 == 0) {
                fVar50 = *pfVar34;
                FUN_00f0e700(param_3 + 0x27d9);
                fVar47 = fVar50 + fVar47 * -0.5;
                fVar50 = fVar47 + -6.0;
                if ((*(float *)(param_3 + 0x13a4) != 0.0) ||
                   (fVar47 = *(float *)((long)param_3 + 0x9d24), fVar47 != fVar50)) {
                  *(float *)(param_3 + 0x13a4) = 0.0;
                  *(float *)((long)param_3 + 0x9d24) = fVar50;
                  FUN_0091ada4(plVar20);
                }
                uStack_d0 = 0x3f80000000000000;
                (**(code **)(*plVar20 + 0x28))(plVar20,&uStack_d0);
                *puVar16 = *puVar16 | 4;
              }
              uVar40 = uVar40 + 1;
              fVar48 = fVar48 + 84.0;
              pfVar34 = pfVar34 + 0x4ca;
            } while ((float)uVar40 < (float)(int)uVar27 * 0.5);
            iStack_10c = iStack_10c + uVar40;
          }
          if (uVar40 < uVar27) {
            iVar41 = (0xe - uVar40) - iVar41;
            do {
              iStack_10c = iStack_10c + 1;
              fVar47 = *pfVar22 + 30.0;
              FUN_00b63c54(0x40800000,fVar47,fVar44,param_3,iStack_10c);
              fVar44 = fVar44 + 84.0;
              iVar41 = iVar41 + -1;
            } while (iVar41 != 0);
          }
        }
      }
    }
  }
  pfVar22 = (float *)((long)param_3 + 0x7e2c);
  fVar44 = *pfVar22;
  plVar20 = param_3 + 0xfbd;
  FUN_00f13e54(plVar20);
  fVar47 = fVar44 + fVar47 + -12.0;
  plVar42 = param_3 + 0x2671;
  if ((*(float *)(param_3 + 0x2679) != 0.0) || (*(float *)((long)param_3 + 0x133cc) != fVar47)) {
    *(float *)(param_3 + 0x2679) = 0.0;
    *(float *)((long)param_3 + 0x133cc) = fVar47;
    FUN_0091ada4(plVar42);
  }
  uStack_d0 = 0;
  (**(code **)(*plVar42 + 0x28))(plVar42,&uStack_d0);
  fVar44 = *(float *)(param_3 + 0x26bd);
  fVar50 = fVar44 + *pfVar24 * 0.5;
  iStack_bc = 0;
  FUN_00967388(0,0,0,&iStack_bc);
  plVar21 = param_3 + 0x10e4;
  fVar51 = fStack_b8 + -30.0;
  FUN_00f13e54(plVar21);
  fVar48 = (float)iStack_bc;
  fVar44 = (fVar51 - fVar44 * 0.5) - fVar48;
  pfVar34 = (float *)((long)param_3 + 0x8764);
  if ((*(float *)(param_3 + 0x10ec) != fVar50) || (*pfVar34 != fVar44)) {
    *(float *)(param_3 + 0x10ec) = fVar50;
    *pfVar34 = fVar44;
    FUN_0091ada4(plVar21);
  }
  uStack_d0 = 0x3f0000003f000000;
  (**(code **)(*plVar21 + 0x28))(plVar21,&uStack_d0);
  uVar31 = FUN_0092e920();
  if ((uVar31 & 1) != 0) {
    lVar45 = param_3[0x58f];
    FUN_00f01c20(plVar21);
    iVar41 = (int)fVar48;
    FUN_00f01c20(plVar21);
    FUN_00f13f2c(lVar45,CONCAT44((int)fVar48,iVar41));
    lVar45 = param_3[0x58f];
    fVar51 = (float)FUN_00f01c20(plVar21);
    (**(code **)(*(long *)param_3[0x58f] + 0x48))();
    fVar51 = (fVar50 - fVar51 * 0.5) + fVar48 * -1.8;
    (**(code **)(*(long *)param_3[0x58f] + 0x48))();
    fVar48 = fVar48 * 0.5;
    fVar44 = fVar44 - fVar48;
    if ((*(float *)(lVar45 + 0x40) != fVar51) ||
       (fVar48 = *(float *)(lVar45 + 0x44), fVar48 != fVar44)) {
      *(float *)(lVar45 + 0x40) = fVar51;
      *(float *)(lVar45 + 0x44) = fVar44;
      FUN_0091ada4(lVar45);
    }
  }
  FUN_00f01c54(param_3 + 0x26b5,1,0,0,1);
  FUN_00ed02d8(*pfVar3 + -65.0,param_3 + 0xff1);
  fVar51 = *pfVar34;
  FUN_00f13e54(plVar21);
  plVar36 = param_3 + 0x2101;
  fVar44 = fVar48 * 0.5;
  FUN_00f13e54(plVar36);
  fVar44 = ((fVar51 - fVar44) - fVar48 * 0.5) + -20.0;
  FUN_00ab75d0(0,*pfVar4,*pfVar4,plVar36);
  pfVar23 = (float *)((long)param_3 + 0x1084c);
  if ((*(float *)(param_3 + 0x2109) != fVar50) || (*pfVar23 != fVar44)) {
    *(float *)(param_3 + 0x2109) = fVar50;
    *pfVar23 = fVar44;
    FUN_0091ada4(plVar36);
  }
  uStack_d0 = 0x3f0000003f000000;
  (**(code **)(*plVar36 + 0x28))(plVar36,&uStack_d0);
  FUN_00f0dad0(*pfVar24,plVar42,1);
  uVar31 = FUN_0093dbe8();
  if (((uVar31 & 1) != 0) && ((char)param_3[0x59f3] != '\0')) {
    plVar42 = param_3 + 0xefc;
    *(uint *)((long)param_3 + 0x7864) = *(uint *)((long)param_3 + 0x7864) | 4;
    *(uint *)((long)param_3 + 0x7994) = *(uint *)((long)param_3 + 0x7994) | 4;
    plVar30 = param_3 + 0xf22;
    FUN_00f0dad0(*pfVar24,plVar42,1);
    FUN_00f0dad0(*pfVar24,plVar30,1);
    fVar47 = fVar47 * 0.9;
    if ((*(float *)(param_3 + 0xf04) != 0.0) || (*(float *)((long)param_3 + 0x7824) != fVar47)) {
      *(float *)(param_3 + 0xf04) = 0.0;
      *(float *)((long)param_3 + 0x7824) = fVar47;
      FUN_0091ada4(plVar42);
    }
    uStack_d0 = 0;
    (**(code **)(param_3[0xefc] + 0x28))(plVar42,&uStack_d0);
    fVar48 = (float)FUN_00f0d548(plVar42);
    if ((*(float *)(param_3 + 0xf2a) != fVar48 * 1.1) ||
       (*(float *)((long)param_3 + 0x7954) != fVar47)) {
      *(float *)(param_3 + 0xf2a) = fVar48 * 1.1;
      *(float *)((long)param_3 + 0x7954) = fVar47;
      FUN_0091ada4(plVar30);
    }
    uStack_d0 = 0;
    (**(code **)(param_3[0xf22] + 0x28))(plVar30,&uStack_d0);
    FUN_00e70570(&uStack_d0,param_3 + 0x5a08);
    FUN_00f0d75c(plVar30,&uStack_d0);
    if (pvStack_c8 != (void *)0x0) {
      operator_delete__(pvStack_c8);
      uStack_d0 = 0;
      pvStack_c8 = (void *)0x0;
    }
  }
  fVar47 = *pfVar4;
  plVar42 = param_3 + 0x23b9;
  FUN_00ab75d0(0,fVar47,fVar47,plVar42);
  FUN_00f13e54(plVar42);
  fVar44 = fVar44 + fVar47 * -0.5;
  if ((*(float *)(param_3 + 0x23c1) != fVar50) ||
     (fVar47 = *(float *)((long)param_3 + 0x11e0c), fVar47 != fVar44)) {
    *(float *)(param_3 + 0x23c1) = fVar50;
    *(float *)((long)param_3 + 0x11e0c) = fVar44;
    FUN_0091ada4(plVar42);
  }
  uStack_d0 = 0x3f0000003f000000;
  (**(code **)(*plVar42 + 0x28))(plVar42,&uStack_d0);
  fVar44 = *pfVar9;
  FUN_00aca658(plVar7);
  if ((*pbVar11 >> 2 & 1) == 0) {
    if ((*(byte *)((long)param_3 + 0x8674) >> 2 & 1) != 0) {
      fVar44 = *pfVar15;
      FUN_00f0d4e0(plVar32);
    }
  }
  else {
    fVar44 = *(float *)((long)param_3 + 0xda8c);
    FUN_00aca658(plVar12);
  }
  fVar48 = *pfVar34;
  fVar44 = fVar44 + fVar47;
  FUN_00f13e54(plVar21);
  fVar50 = *pfVar23;
  fVar48 = fVar48 - fVar47;
  FUN_00f13e54(plVar36);
  if (fVar50 - fVar47 <= fVar48) {
    fVar48 = fVar50 - fVar47;
  }
  if (*pfVar22 != fVar44) {
    *pfVar22 = fVar44;
    FUN_0091ada4(plVar20);
  }
  FUN_00f13f08(*pfVar3 + -65.0,fVar48 - fVar44,plVar20);
  fVar47 = *pfVar3;
  pfVar24 = (float *)((long)param_3 + 0x25604);
  if ((*(float *)(param_3 + 0x4ac0) != fVar47) || (*pfVar24 != 0.0)) {
    *(float *)(param_3 + 0x4ac0) = fVar47;
    *pfVar24 = 0.0;
    FUN_0091ada4(param_3 + 0x4ab8);
    fVar47 = *pfVar3;
  }
  FUN_00f13f08(fVar47,fStack_b8,param_3 + 0x2070);
  if (*(float *)(param_3 + 0x2078) != -65.0) {
    *(float *)(param_3 + 0x2078) = -65.0;
    FUN_0091ada4(param_3 + 0x2070);
  }
  FUN_00f13f08(fStack_b4 - *pfVar3,fStack_b8,param_3 + 0x208e);
  pfVar22 = (float *)(param_3 + 0xf7f);
  plVar7 = param_3 + 0xf77;
  if ((*pfVar22 != 0.0) || (*(float *)((long)param_3 + 0x7bfc) != 0.0)) {
    pfVar22[0] = 0.0;
    pfVar22[1] = 0.0;
    FUN_0091ada4(plVar7);
  }
  uStack_d0 = 0;
  (**(code **)(param_3[0xf77] + 0x28))(plVar7,&uStack_d0);
  FUN_00f13f08(fStack_b4 - *pfVar3,fStack_b8,plVar7);
  ppuVar26 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if (*pcVar6 != '\0') {
    ppuVar26 = &PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20;
  }
  puVar25 = (undefined4 *)&DAT_01bb4d48;
  if (*(char *)((long)param_3 + 0x2cf9a) != '\0') {
    puVar25 = &DAT_01bee7fa;
  }
  FUN_00f0d92c(plVar10,*ppuVar26,puVar25);
  fVar44 = *pfVar3;
  plVar7 = param_3 + 0x5b0;
  fVar47 = (float)FUN_00f13e54(plVar7);
  fVar47 = (fVar44 - fVar47) * 0.5;
  FUN_00f13f08(fStack_b4 - *pfVar3,fStack_b8,param_3 + 0x595);
  if ((*(float *)(param_3 + 0x59d) != *pfVar3) || (*(float *)((long)param_3 + 0x2cec) != 0.0)) {
    *(float *)(param_3 + 0x59d) = *pfVar3;
    *(undefined4 *)((long)param_3 + 0x2cec) = 0;
    FUN_0091ada4(param_3 + 0x595);
  }
  fVar48 = *pfVar4;
  FUN_00ab75d0(0,fVar48,fVar48,plVar7);
  fVar44 = (float)FUN_00f13e54(plVar7);
  fVar44 = fVar44 * -0.5 - fVar47;
  FUN_00f13e54(plVar8);
  if ((*(float *)(param_3 + 0x5b8) != fVar44) ||
     (*(float *)((long)param_3 + 0x2dc4) != fVar48 * 0.5)) {
    *(float *)(param_3 + 0x5b8) = fVar44;
    *(float *)((long)param_3 + 0x2dc4) = fVar48 * 0.5;
    FUN_0091ada4(plVar7);
  }
  fVar48 = *pfVar4;
  plVar10 = param_3 + 0x868;
  FUN_00ab75d0(0,fVar48,fVar48,plVar10);
  fVar44 = (float)FUN_00f13e54(plVar10);
  fVar47 = fVar44 * -0.5 - fVar47;
  FUN_00f13e54(plVar8);
  if ((*(float *)(param_3 + 0x870) != fVar47) ||
     (*(float *)((long)param_3 + 0x4384) != fVar48 * 0.6)) {
    *(float *)(param_3 + 0x870) = fVar47;
    *(float *)((long)param_3 + 0x4384) = fVar48 * 0.6;
    FUN_0091ada4(plVar10);
  }
  fVar47 = 0.0;
  FUN_00f07940(0,param_3 + 0xee5,7,plVar10,7);
  plVar8 = param_3 + 0xb20;
  FUN_00f13e54(plVar7);
  FUN_00f0dad0(plVar8,1);
  FUN_00f07b18(0xc2700000,plVar8,2,plVar7,0);
  FUN_00f07b18(0,plVar8,3,plVar7,3);
  if ((char)param_3[0x59f3] == '\0') {
    if ((*(byte *)((long)param_3 + 0x8674) >> 2 & 1) == 0) goto LAB_00b5c584;
    fVar49 = *pfVar15;
  }
  else {
    if ((*pbVar11 >> 2 & 1) != 0) {
      fVar49 = fVar49 + 40.0;
      goto LAB_00b5c5a0;
    }
LAB_00b5c584:
    fVar49 = *pfVar14;
    plVar32 = plVar13;
  }
  FUN_00f0d4e0(plVar32);
  fVar49 = fVar49 + fVar47;
LAB_00b5c5a0:
  pfVar3 = (float *)(param_3 + 0x4c62);
  fVar47 = 1.0;
  if (*pcVar6 != '\0') {
    fVar47 = 0.8;
  }
  plVar7 = param_3 + 0x4c5a;
  fVar47 = fVar49 + fVar43 * fVar47 + -60.0;
  pfVar4 = (float *)((long)param_3 + 0x26314);
  if ((*pfVar3 != 0.0) || (fVar49 = *pfVar4, fVar49 != fVar47)) {
    *pfVar3 = 0.0;
    *pfVar4 = fVar47;
    FUN_0091ada4(plVar7);
    fVar49 = *pfVar4;
  }
  FUN_00f13f08(*pfVar5 + 80.0 + 48.0,(fStack_b8 - fVar49) - *pfVar24,plVar7);
  *(uint *)((long)param_3 + 0x26354) = *(uint *)((long)param_3 + 0x26354) | 0x10;
  uVar46 = FUN_00f13e54(plVar7);
  FUN_00f01c54(param_3 + 0x4c8e,0,0,1,1);
  FUN_00ed02d8(uVar46,param_3 + 0x4c8e);
  fVar47 = *pfVar4;
  fVar49 = 60.0;
  plVar8 = param_3 + 0x515b;
  FUN_00f0d4e0(plVar8);
  fVar47 = fVar47 + 60.0 + fVar49 * -0.5;
  pfVar24 = (float *)((long)param_3 + 0x28b1c);
  if ((*(float *)(param_3 + 0x5163) != 48.0) || (*pfVar24 != fVar47)) {
    *(float *)(param_3 + 0x5163) = 48.0;
    *pfVar24 = fVar47;
    FUN_0091ada4(plVar8);
  }
  uStack_d0 = 0;
  (**(code **)(*plVar8 + 0x28))(plVar8,&uStack_d0);
  FUN_00f0dad0(*pfVar5 + -20.0,plVar8,1);
  ppuVar26 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  if (*pcVar6 != '\0') {
    ppuVar26 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  }
  plVar8 = param_3 + 0x5181;
  FUN_00f0d92c(plVar8,*ppuVar26,&DAT_01bee7fa);
  if ((*(float *)(param_3 + 0x5189) != 48.0) || (*(float *)((long)param_3 + 0x28c4c) != *pfVar24)) {
    *(float *)(param_3 + 0x5189) = 48.0;
    *(float *)((long)param_3 + 0x28c4c) = *pfVar24;
    FUN_0091ada4(plVar8);
  }
  uStack_d0 = 0;
  (**(code **)(*plVar8 + 0x28))(plVar8,&uStack_d0);
  FUN_00f0dad0(*pfVar5 + -30.0,plVar8,1);
  if ((*(float *)(param_3 + 0x51c0) != *pfVar3 + 24.0) ||
     (*(float *)((long)param_3 + 0x28e04) != *pfVar4)) {
    *(float *)(param_3 + 0x51c0) = *pfVar3 + 24.0;
    *(float *)((long)param_3 + 0x28e04) = *pfVar4;
    FUN_0091ada4(param_3 + 0x51b8);
  }
  fVar47 = (float)FUN_00f13e54(plVar7);
  fVar43 = -48.0;
  FUN_00f13e54(plVar7);
  fVar49 = 13.0;
  if (*pcVar6 != '\0') {
    fVar49 = -11.0;
  }
  FUN_00ac1374(fVar47 + -48.0,fVar43 - fVar49,param_3 + 0x51b8);
  *(undefined1 *)(param_3 + 0x59f5) = 0;
  if (*(long *)(lVar29 + 0x28) == lStack_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b5acf8(undefined1 param_1 [16],float param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  char *pcVar6;
  long *plVar7;
  long *plVar8;
  float *pfVar9;
  long *plVar10;
  byte *pbVar11;
  long *plVar12;
  long *plVar13;
  float *pfVar14;
  float *pfVar15;
  uint *puVar16;
  char *pcVar17;
  uint *puVar18;
  char *pcVar19;
  long *plVar20;
  long *plVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  undefined4 *puVar25;
  undefined **ppuVar26;
  uint uVar27;
  char cVar28;
  long lVar29;
  long *plVar30;
  ulong uVar31;
  long *plVar32;
  ulong uVar33;
  float *pfVar34;
  long lVar35;
  long *plVar36;
  int iVar37;
  ulong uVar38;
  int iVar39;
  uint uVar40;
  int iVar41;
  long *plVar42;
  float fVar43;
  float fVar44;
  long lVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float local_110;
  int local_10c;
  undefined8 local_d0;
  void *local_c8;
  int local_bc;
  float local_b8;
  float local_b4;
  long local_b0;
  
  lVar29 = tpidr_el0;
  local_b0 = *(long *)(lVar29 + 0x28);
  FUN_00f00298(&local_b4,&local_b8);
  local_b4 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  *(uint *)((long)param_3 + 0x2d2c) = *(uint *)((long)param_3 + 0x2d2c) | 4;
  *(uint *)((long)param_3 + 0x7de4) = *(uint *)((long)param_3 + 0x7de4) & 0xfffffffb;
  local_b8 = param_2;
  FUN_0093dbe8();
  pfVar3 = (float *)(param_3 + 0x5a06);
  *(uint *)((long)param_3 + 0x25644) = *(uint *)((long)param_3 + 0x25644) & 0xfffffffb;
  fVar47 = local_b4 * 0.58;
  *pfVar3 = fVar47;
  fVar49 = fVar47 + -130.0;
  pfVar24 = (float *)(param_3 + 0x5a05);
  pfVar4 = (float *)((long)param_3 + 0x2d02c);
  *pfVar24 = fVar49;
  *pfVar4 = fVar49;
  pfVar22 = (float *)(param_3 + 0x5a07);
  pfVar5 = (float *)((long)param_3 + 0x2d034);
  pcVar6 = (char *)((long)param_3 + 0x2cfa5);
  *pfVar22 = (fVar49 + -30.0) * 0.5;
  *pfVar5 = (local_b4 - fVar47) + -48.0 + -80.0;
  cVar28 = *pcVar6;
  pfVar9 = (float *)(param_3 + 0xf50);
  if ((*pfVar9 != 0.0) || (*(float *)((long)param_3 + 0x7a84) != 0.0)) {
    pfVar9[0] = 0.0;
    pfVar9[1] = 0.0;
    FUN_0091ada4(param_3 + 0xf48);
  }
  plVar7 = param_3 + 0xf59;
  FUN_00f13f08(local_b4,local_b8,plVar7);
  plVar8 = param_3 + 0xf95;
  fVar47 = (float)FUN_00f0e700(plVar7);
  FUN_00f0e700(plVar7);
  FUN_00f13f08(fVar47 * 0.5,plVar8);
  pfVar9 = (float *)(param_3 + 0xfb4);
  if ((*pfVar9 != 65.0) || (*(float *)((long)param_3 + 0x7da4) != 0.0)) {
    pfVar9[0] = 65.0;
    pfVar9[1] = 0.0;
    FUN_0091ada4(param_3 + 0xfac);
  }
  plVar7 = param_3 + 0x1622;
  fVar49 = *pfVar24;
  FUN_00ac9d00(0,fVar49,fVar49,plVar7);
  FUN_00ac9484(plVar7,1);
  fVar43 = (float)FUN_00aca658(plVar7);
  fVar47 = DAT_02be366c;
  pfVar9 = (float *)((long)param_3 + 0xb154);
  if ((*(float *)(param_3 + 0x162a) != *pfVar24 * 0.5) || (*pfVar9 != DAT_02be366c)) {
    *(float *)(param_3 + 0x162a) = *pfVar24 * 0.5;
    *pfVar9 = fVar47;
    FUN_0091ada4(plVar7);
  }
  local_d0 = 0x3f0000003f000000;
  (**(code **)(*plVar7 + 0x28))(plVar7,&local_d0);
  fVar47 = (float)NEON_ucvtf((int)param_3[0x4ada]);
  if (fVar47 <= 1.0) {
    fVar47 = 1.0;
  }
  plVar10 = param_3 + 0x4ac9;
  FUN_00b20860(0,*pfVar5 / fVar47,*pfVar5 / fVar47,plVar10);
  fVar47 = DAT_02be366c + -50.0;
  if ((*(float *)(param_3 + 0x4ad1) != 48.0) || (*(float *)((long)param_3 + 0x2568c) != fVar47)) {
    *(float *)(param_3 + 0x4ad1) = 48.0;
    *(float *)((long)param_3 + 0x2568c) = fVar47;
    FUN_0091ada4(plVar10);
  }
  local_d0 = 0;
  (**(code **)(*plVar10 + 0x28))(plVar10,&local_d0);
  plVar10 = param_3 + 0x4c23;
  fVar47 = DAT_02be366c + -50.0;
  if ((*(float *)(param_3 + 0x4c2b) != 68.0) || (*(float *)((long)param_3 + 0x2615c) != fVar47)) {
    *(float *)(param_3 + 0x4c2b) = 68.0;
    *(float *)((long)param_3 + 0x2615c) = fVar47;
    FUN_0091ada4(plVar10);
  }
  local_d0 = 0;
  (**(code **)(*plVar10 + 0x28))(plVar10,&local_d0);
  pbVar11 = (byte *)((long)param_3 + 0xdacc);
  plVar12 = param_3 + 0x1b49;
  if ((*pbVar11 >> 2 & 1) != 0) {
    FUN_00ac9d00(0,*pfVar24,*pfVar24,plVar12);
    FUN_00ac9484(plVar12,1);
    fVar47 = fVar49 + DAT_02be366c + 10.0;
    if ((*(float *)(param_3 + 0x1b51) != *pfVar24 * 0.5) ||
       (*(float *)((long)param_3 + 0xda8c) != fVar47)) {
      *(float *)(param_3 + 0x1b51) = *pfVar24 * 0.5;
      *(float *)((long)param_3 + 0xda8c) = fVar47;
      FUN_0091ada4(plVar12);
    }
    local_d0 = 0x3f0000003f000000;
    (**(code **)(*plVar12 + 0x28))(plVar12,&local_d0);
    fVar44 = (float)FUN_00aca658(plVar12);
    fVar49 = fVar49 + fVar47 + 10.0;
    fVar43 = fVar43 + fVar44 + 0.0;
    if (*pcVar6 != '\0') {
      fVar49 = fVar49 + 100.0;
    }
  }
  fVar44 = *pfVar24 * 0.5 - fVar43 * 0.5;
  fVar47 = fVar49 * 0.5 + DAT_02be366c + 10.0;
  if ((*(float *)(param_3 + 0x20b4) != fVar44) || (*(float *)((long)param_3 + 0x105a4) != fVar47)) {
    *(float *)(param_3 + 0x20b4) = fVar44;
    *(float *)((long)param_3 + 0x105a4) = fVar47;
    FUN_0091ada4(param_3 + 0x20ac);
  }
  plVar13 = param_3 + 0x20db;
  FUN_00f0dad0(fVar43 + -60.0,plVar13,1);
  if ((*(float *)(param_3 + 0x20e3) != 30.0) || (*(float *)((long)param_3 + 0x1071c) != 30.0)) {
    lVar45 = NEON_fmov(0x41f00000,4);
    param_3[0x20e3] = lVar45;
    FUN_0091ada4(plVar13);
  }
  fVar47 = (float)FUN_00f0d4e0(plVar13);
  FUN_00f0d4e0(plVar13);
  FUN_00f13f08(fVar47 + 60.0,fVar44 + 60.0,param_3 + 0x20bd);
  ppuVar26 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if (*pcVar6 != '\0') {
    ppuVar26 = &PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20;
  }
  plVar13 = param_3 + 0x1098;
  FUN_00f0d92c(plVar13,*ppuVar26,&DAT_01bee7fa);
  FUN_00f0db64(*pfVar22,0,0x3f800000,plVar13);
  fVar47 = DAT_02be366c;
  fVar43 = *(float *)(param_3 + 0x10a0);
  pfVar14 = (float *)((long)param_3 + 0x8504);
  if ((fVar43 != 0.0) || (fVar43 = *pfVar14, fVar43 != DAT_02be366c)) {
    *(float *)(param_3 + 0x10a0) = 0.0;
    *pfVar14 = fVar47;
    FUN_0091ada4(plVar13);
  }
  local_d0 = 0x3f00000000000000;
  (**(code **)(*plVar13 + 0x28))(plVar13,&local_d0);
  ppuVar26 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if (*pcVar6 != '\0') {
    ppuVar26 = &PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20;
  }
  plVar32 = param_3 + 0x10be;
  FUN_00f0d92c(plVar32,*ppuVar26,&DAT_01bee7fa);
  fVar47 = DAT_02be366c;
  FUN_00f0d4e0(plVar13);
  fVar44 = fVar43 * 0.5;
  FUN_00f0d4e0(plVar32);
  fVar48 = *(float *)(param_3 + 0x10c6);
  uVar31 = (ulong)(uint)fVar48;
  fVar47 = fVar47 + fVar44 + fVar43 * 0.5 + 4.0;
  pfVar15 = (float *)((long)param_3 + 0x8634);
  if ((fVar48 != 0.0) || (uVar31 = (ulong)(uint)*pfVar15, *pfVar15 != fVar47)) {
    *(float *)(param_3 + 0x10c6) = 0.0;
    *pfVar15 = fVar47;
    FUN_0091ada4(plVar32);
  }
  local_d0 = 0x3f00000000000000;
  fVar43 = *(float *)(&DAT_01bb4d10 + (ulong)(cVar28 == '\0') * 4);
  (**(code **)(*plVar32 + 0x28))(plVar32,&local_d0);
  fVar47 = (float)uVar31;
  lVar45 = -0x1300;
  do {
    lVar35 = lVar45 + 0x130;
    *(uint *)((long)param_3 + lVar45 + 0xb194) =
         *(uint *)((long)param_3 + lVar45 + 0xb194) & 0xfffffffb;
    lVar45 = lVar35;
  } while (lVar35 != 0);
  lVar45 = 0x136e4;
  lVar35 = 0xe;
  do {
    lVar35 = lVar35 + -1;
    *(uint *)((long)param_3 + lVar45) = *(uint *)((long)param_3 + lVar45) & 0xfffffffb;
    lVar45 = lVar45 + 0x1328;
  } while (lVar35 != 0);
  puVar16 = (uint *)((long)param_3 + 0x9d64);
  pcVar17 = (char *)((long)param_3 + 0x2cfa4);
  *puVar16 = *puVar16 & 0xfffffffb;
  puVar18 = (uint *)(param_3 + 0x59f9);
  uVar27 = *puVar18;
  uVar33 = (ulong)uVar27;
  pcVar19 = (char *)((long)param_3 + 0x2cf9b);
  if (*pcVar17 == '\0') {
    if (uVar27 == 0) goto LAB_00b5ba9c;
    fVar44 = 80.0;
    iVar41 = 0;
    local_10c = 0;
    uVar33 = 0;
    do {
      fVar47 = (float)uVar31;
      iVar37 = *(int *)((long)param_3 + uVar33 * 4 + 0x2cfd0);
      if (iVar37 != 0) {
        iVar1 = iVar41;
        iVar39 = iVar37;
        do {
          fVar47 = 80.0;
          FUN_00ae78e4(*pfVar24,0x42a00000,0,0x40800000,param_3 + (long)iVar1 * 0x265 + 0x26cc,
                       *pcVar19);
          pfVar34 = (float *)((long)param_3 + (long)iVar1 * 0x1328 + 0x136a4);
          if ((*(float *)(param_3 + (long)iVar1 * 0x265 + 0x26d4) != 0.0) || (*pfVar34 != fVar44)) {
            *(float *)(param_3 + (long)iVar1 * 0x265 + 0x26d4) = 0.0;
            *pfVar34 = fVar44;
            FUN_0091ada4(param_3 + (long)iVar1 * 0x265 + 0x26cc);
          }
          fVar44 = fVar44 + 84.0;
          iVar39 = iVar39 + -1;
          *(uint *)((long)param_3 + (long)iVar1 * 0x1328 + 0x136e4) =
               *(uint *)((long)param_3 + (long)iVar1 * 0x1328 + 0x136e4) | 4;
          iVar1 = iVar1 + 1;
        } while (iVar39 != 0);
        local_10c = iVar41 + -1 + iVar37;
      }
      fVar48 = *(float *)((long)param_3 + (long)iVar41 * 0x1328 + 0x136a4);
      plVar20 = param_3 + uVar33 * 0x26 + 0x13c2;
      FUN_00f0e700(param_3 + 0x27d9);
      uVar31 = 0xc0c00000;
      fVar47 = fVar48 + fVar47 * -0.5 + -6.0;
      pfVar34 = (float *)((long)param_3 + uVar33 * 0x130 + 0x9e54);
      if ((*(float *)(param_3 + uVar33 * 0x26 + 0x13ca) != 0.0) ||
         (fVar48 = *pfVar34, uVar31 = (ulong)(uint)fVar48, fVar48 != fVar47)) {
        *(float *)(param_3 + uVar33 * 0x26 + 0x13ca) = 0.0;
        *pfVar34 = fVar47;
        FUN_0091ada4(plVar20);
      }
      local_d0 = 0x3f80000000000000;
      (**(code **)(*plVar20 + 0x28))(plVar20,&local_d0);
      fVar47 = (float)uVar31;
      uVar38 = uVar33 + 1;
      *(uint *)((long)param_3 + uVar33 * 0x130 + 0x9e94) =
           *(uint *)((long)param_3 + uVar33 * 0x130 + 0x9e94) | 4;
      fVar44 = fVar44 + 65.0;
      iVar41 = iVar37 + iVar41;
      uVar33 = uVar38;
    } while (uVar38 < *puVar18);
  }
  else if (uVar27 == 0) {
LAB_00b5ba9c:
    fVar44 = 80.0;
    local_10c = 0;
  }
  else {
    fVar44 = 80.0;
    plVar20 = param_3 + 0xfbd;
    plVar42 = param_3 + 0x27d9;
    plVar21 = param_3 + 0x13c2;
    iVar41 = 0;
    local_10c = 0;
    local_110 = 80.0;
    uVar38 = 0;
    do {
      fVar47 = (float)uVar31;
      iVar37 = *(int *)((long)param_3 + uVar38 * 4 + 0x2cfd0);
      if (((int)uVar33 < 2) || (*pcVar17 == '\0')) {
        if (iVar37 != 0) {
          iVar39 = iVar37;
          iVar1 = iVar41;
          do {
            FUN_00b63c54(0x40800000,(*(float *)(param_3 + 0x26bd) + *pfVar24 * 0.5) - *pfVar22 * 0.5
                         ,fVar44,param_3,iVar1);
            fVar44 = fVar44 + 84.0;
            iVar39 = iVar39 + -1;
            iVar1 = iVar1 + 1;
          } while (iVar39 != 0);
          local_10c = iVar41 + -1 + iVar37;
        }
        fVar48 = *(float *)((long)param_3 + (long)iVar41 * 0x1328 + 0x136a4);
        plVar36 = param_3 + uVar38 * 0x26;
        fVar47 = *pfVar22 * 0.5;
        fVar51 = (*(float *)(param_3 + 0x26bd) + *pfVar24 * 0.5) - fVar47;
        FUN_00f0e700(plVar42);
        pfVar34 = (float *)(plVar36 + 0x13ca);
        fVar50 = *pfVar34;
        fVar48 = fVar48 - fVar47 * 0.5;
LAB_00b5b824:
        plVar30 = plVar36 + 0x13c2;
        uVar31 = 0xc0c00000;
        if ((fVar50 != fVar51) ||
           (fVar47 = *(float *)((long)plVar36 + 0x9e54), uVar31 = (ulong)(uint)fVar47,
           fVar47 != fVar48 + -6.0)) {
          *pfVar34 = fVar51;
          *(float *)((long)plVar36 + 0x9e54) = fVar48 + -6.0;
          FUN_0091ada4(plVar30);
        }
        lVar45 = *plVar30;
      }
      else {
        fVar48 = (float)FUN_00f13e54(plVar20);
        FUN_00f13e54(plVar20);
        FUN_00f13f08(fVar48 + fVar48,plVar20);
        if (uVar38 != 0) {
          fVar44 = local_110;
          if (iVar37 != 0) {
            iVar1 = iVar41;
            iVar39 = iVar37;
            do {
              fVar47 = *pfVar22 + 30.0;
              FUN_00b63c54(0x40800000,fVar47,fVar44,param_3,iVar1);
              fVar44 = fVar44 + 84.0;
              iVar39 = iVar39 + -1;
              iVar1 = iVar1 + 1;
            } while (iVar39 != 0);
            local_10c = iVar41 + -1 + iVar37;
          }
          fVar48 = *(float *)((long)param_3 + (long)iVar41 * 0x1328 + 0x136a4);
          plVar36 = param_3 + uVar38 * 0x26;
          fVar51 = *pfVar22 + 30.0;
          FUN_00f0e700(plVar42);
          pfVar34 = (float *)(plVar36 + 0x13ca);
          fVar50 = *pfVar34;
          fVar48 = fVar48 + fVar47 * -0.5;
          goto LAB_00b5b824;
        }
        if (iVar37 != 0) {
          iVar39 = iVar37;
          iVar1 = iVar41;
          do {
            fVar47 = 0.0;
            FUN_00b63c54(0x40800000,0,fVar44,param_3,iVar1);
            fVar44 = fVar44 + 84.0;
            iVar39 = iVar39 + -1;
            iVar1 = iVar1 + 1;
          } while (iVar39 != 0);
          local_10c = iVar41 + -1 + iVar37;
        }
        fVar48 = *(float *)((long)param_3 + (long)iVar41 * 0x1328 + 0x136a4);
        FUN_00f0e700(plVar42);
        fVar48 = fVar48 + fVar47 * -0.5;
        uVar31 = (ulong)(uint)fVar48;
        fVar48 = fVar48 + -6.0;
        if ((*(float *)(param_3 + 0x13ca) != 0.0) ||
           (fVar47 = *(float *)((long)param_3 + 0x9e54), uVar31 = (ulong)(uint)fVar47,
           fVar47 != fVar48)) {
          *(float *)(param_3 + 0x13ca) = 0.0;
          *(float *)((long)param_3 + 0x9e54) = fVar48;
          FUN_0091ada4(plVar21);
        }
        lVar45 = *plVar21;
        plVar30 = plVar21;
      }
      local_d0 = 0x3f80000000000000;
      (**(code **)(lVar45 + 0x28))(plVar30,&local_d0);
      fVar47 = (float)uVar31;
      uVar2 = uVar38 + 1;
      iVar41 = iVar37 + iVar41;
      *(uint *)((long)param_3 + uVar38 * 0x130 + 0x9e94) =
           *(uint *)((long)param_3 + uVar38 * 0x130 + 0x9e94) | 4;
      fVar44 = fVar44 + 65.0;
      uVar33 = (ulong)*puVar18;
      uVar38 = uVar2;
    } while (uVar2 < uVar33);
  }
  if (*pcVar19 == '\0') {
    FUN_00ac9cd0(plVar7);
    lVar45 = FUN_00cead68();
    if (*(char *)(lVar45 + 0x53) != '\0') {
      iVar41 = *(int *)((long)param_3 + 0x2cfcc);
      plVar20 = param_3 + 0x139c;
      uVar27 = 0xe - iVar41;
      if (*pcVar17 == '\0') {
        if (0 < (int)uVar27) {
          iVar37 = 0;
          plVar42 = param_3 + (long)local_10c * 0x265 + 0x2931;
          do {
            fVar47 = 80.0;
            FUN_00ae78e4(*pfVar24,0x42a00000,0,0x40800000,plVar42,*pcVar19);
            if ((*(float *)(plVar42 + 8) != 0.0) || (*(float *)((long)plVar42 + 0x44) != fVar44)) {
              *(undefined4 *)(plVar42 + 8) = 0;
              *(float *)((long)plVar42 + 0x44) = fVar44;
              FUN_0091ada4(plVar42);
            }
            *(uint *)((long)plVar42 + 0x84) = *(uint *)((long)plVar42 + 0x84) | 4;
            if (iVar37 == 0) {
              fVar48 = *(float *)((long)plVar42 + 0x44);
              FUN_00f0e700(param_3 + 0x27d9);
              fVar47 = fVar48 + fVar47 * -0.5;
              fVar48 = fVar47 + -6.0;
              if ((*(float *)(param_3 + 0x13a4) != 0.0) ||
                 (fVar47 = *(float *)((long)param_3 + 0x9d24), fVar47 != fVar48)) {
                *(float *)(param_3 + 0x13a4) = 0.0;
                *(float *)((long)param_3 + 0x9d24) = fVar48;
                FUN_0091ada4(plVar20);
              }
              local_d0 = 0x3f80000000000000;
              (**(code **)(*plVar20 + 0x28))(plVar20,&local_d0);
              *puVar16 = *puVar16 | 4;
            }
            iVar37 = iVar37 + -1;
            fVar44 = fVar44 + 84.0;
            plVar42 = plVar42 + 0x265;
          } while (iVar41 + -0xe != iVar37);
        }
      }
      else if (0 < (int)uVar27) {
        if ((int)*puVar18 < 2) {
          pfVar34 = (float *)((long)param_3 + (long)local_10c * 0x1328 + 0x149cc);
          uVar40 = 0;
          do {
            fVar47 = (*(float *)(param_3 + 0x26bd) + *pfVar24 * 0.5) - *pfVar22 * 0.5;
            FUN_00b63c54(0x40800000,fVar47,fVar44,param_3,local_10c + 1 + uVar40);
            if (uVar40 == 0) {
              fVar48 = *pfVar34;
              FUN_00f0e700(param_3 + 0x27d9);
              fVar47 = fVar48 + fVar47 * -0.5;
              fVar48 = fVar47 + -6.0;
              if ((*(float *)(param_3 + 0x13a4) != 0.0) ||
                 (fVar47 = *(float *)((long)param_3 + 0x9d24), fVar47 != fVar48)) {
                *(float *)(param_3 + 0x13a4) = 0.0;
                *(float *)((long)param_3 + 0x9d24) = fVar48;
                FUN_0091ada4(plVar20);
              }
              local_d0 = 0x3f80000000000000;
              (**(code **)(*plVar20 + 0x28))(plVar20,&local_d0);
              *puVar16 = *puVar16 | 4;
            }
            uVar40 = uVar40 + 1;
            fVar44 = fVar44 + 84.0;
            pfVar34 = pfVar34 + 0x4ca;
          } while (uVar27 != uVar40);
        }
        else {
          uVar40 = 0;
          if (0.0 < (float)(int)uVar27 * 0.5) {
            pfVar34 = (float *)((long)param_3 + (long)local_10c * 0x1328 + 0x149cc);
            fVar48 = fVar44;
            do {
              fVar47 = 0.0;
              FUN_00b63c54(0x40800000,0,fVar48,param_3,local_10c + uVar40 + 1);
              if (uVar40 == 0) {
                fVar50 = *pfVar34;
                FUN_00f0e700(param_3 + 0x27d9);
                fVar47 = fVar50 + fVar47 * -0.5;
                fVar50 = fVar47 + -6.0;
                if ((*(float *)(param_3 + 0x13a4) != 0.0) ||
                   (fVar47 = *(float *)((long)param_3 + 0x9d24), fVar47 != fVar50)) {
                  *(float *)(param_3 + 0x13a4) = 0.0;
                  *(float *)((long)param_3 + 0x9d24) = fVar50;
                  FUN_0091ada4(plVar20);
                }
                local_d0 = 0x3f80000000000000;
                (**(code **)(*plVar20 + 0x28))(plVar20,&local_d0);
                *puVar16 = *puVar16 | 4;
              }
              uVar40 = uVar40 + 1;
              fVar48 = fVar48 + 84.0;
              pfVar34 = pfVar34 + 0x4ca;
            } while ((float)uVar40 < (float)(int)uVar27 * 0.5);
            local_10c = local_10c + uVar40;
          }
          if (uVar40 < uVar27) {
            iVar41 = (0xe - uVar40) - iVar41;
            do {
              local_10c = local_10c + 1;
              fVar47 = *pfVar22 + 30.0;
              FUN_00b63c54(0x40800000,fVar47,fVar44,param_3,local_10c);
              fVar44 = fVar44 + 84.0;
              iVar41 = iVar41 + -1;
            } while (iVar41 != 0);
          }
        }
      }
    }
  }
  pfVar22 = (float *)((long)param_3 + 0x7e2c);
  fVar44 = *pfVar22;
  plVar20 = param_3 + 0xfbd;
  FUN_00f13e54(plVar20);
  fVar47 = fVar44 + fVar47 + -12.0;
  plVar42 = param_3 + 0x2671;
  if ((*(float *)(param_3 + 0x2679) != 0.0) || (*(float *)((long)param_3 + 0x133cc) != fVar47)) {
    *(float *)(param_3 + 0x2679) = 0.0;
    *(float *)((long)param_3 + 0x133cc) = fVar47;
    FUN_0091ada4(plVar42);
  }
  local_d0 = 0;
  (**(code **)(*plVar42 + 0x28))(plVar42,&local_d0);
  fVar44 = *(float *)(param_3 + 0x26bd);
  fVar50 = fVar44 + *pfVar24 * 0.5;
  local_bc = 0;
  FUN_00967388(0,0,0,&local_bc);
  plVar21 = param_3 + 0x10e4;
  fVar51 = local_b8 + -30.0;
  FUN_00f13e54(plVar21);
  fVar48 = (float)local_bc;
  fVar44 = (fVar51 - fVar44 * 0.5) - fVar48;
  pfVar34 = (float *)((long)param_3 + 0x8764);
  if ((*(float *)(param_3 + 0x10ec) != fVar50) || (*pfVar34 != fVar44)) {
    *(float *)(param_3 + 0x10ec) = fVar50;
    *pfVar34 = fVar44;
    FUN_0091ada4(plVar21);
  }
  local_d0 = 0x3f0000003f000000;
  (**(code **)(*plVar21 + 0x28))(plVar21,&local_d0);
  uVar31 = FUN_0092e920();
  if ((uVar31 & 1) != 0) {
    lVar45 = param_3[0x58f];
    FUN_00f01c20(plVar21);
    iVar41 = (int)fVar48;
    FUN_00f01c20(plVar21);
    FUN_00f13f2c(lVar45,CONCAT44((int)fVar48,iVar41));
    lVar45 = param_3[0x58f];
    fVar51 = (float)FUN_00f01c20(plVar21);
    (**(code **)(*(long *)param_3[0x58f] + 0x48))();
    fVar51 = (fVar50 - fVar51 * 0.5) + fVar48 * -1.8;
    (**(code **)(*(long *)param_3[0x58f] + 0x48))();
    fVar48 = fVar48 * 0.5;
    fVar44 = fVar44 - fVar48;
    if ((*(float *)(lVar45 + 0x40) != fVar51) ||
       (fVar48 = *(float *)(lVar45 + 0x44), fVar48 != fVar44)) {
      *(float *)(lVar45 + 0x40) = fVar51;
      *(float *)(lVar45 + 0x44) = fVar44;
      FUN_0091ada4(lVar45);
    }
  }
  FUN_00f01c54(param_3 + 0x26b5,1,0,0,1);
  FUN_00ed02d8(*pfVar3 + -65.0,param_3 + 0xff1);
  fVar51 = *pfVar34;
  FUN_00f13e54(plVar21);
  plVar36 = param_3 + 0x2101;
  fVar44 = fVar48 * 0.5;
  FUN_00f13e54(plVar36);
  fVar44 = ((fVar51 - fVar44) - fVar48 * 0.5) + -20.0;
  FUN_00ab75d0(0,*pfVar4,*pfVar4,plVar36);
  pfVar23 = (float *)((long)param_3 + 0x1084c);
  if ((*(float *)(param_3 + 0x2109) != fVar50) || (*pfVar23 != fVar44)) {
    *(float *)(param_3 + 0x2109) = fVar50;
    *pfVar23 = fVar44;
    FUN_0091ada4(plVar36);
  }
  local_d0 = 0x3f0000003f000000;
  (**(code **)(*plVar36 + 0x28))(plVar36,&local_d0);
  FUN_00f0dad0(*pfVar24,plVar42,1);
  uVar31 = FUN_0093dbe8();
  if (((uVar31 & 1) != 0) && ((char)param_3[0x59f3] != '\0')) {
    plVar42 = param_3 + 0xefc;
    *(uint *)((long)param_3 + 0x7864) = *(uint *)((long)param_3 + 0x7864) | 4;
    *(uint *)((long)param_3 + 0x7994) = *(uint *)((long)param_3 + 0x7994) | 4;
    plVar30 = param_3 + 0xf22;
    FUN_00f0dad0(*pfVar24,plVar42,1);
    FUN_00f0dad0(*pfVar24,plVar30,1);
    fVar47 = fVar47 * 0.9;
    if ((*(float *)(param_3 + 0xf04) != 0.0) || (*(float *)((long)param_3 + 0x7824) != fVar47)) {
      *(float *)(param_3 + 0xf04) = 0.0;
      *(float *)((long)param_3 + 0x7824) = fVar47;
      FUN_0091ada4(plVar42);
    }
    local_d0 = 0;
    (**(code **)(param_3[0xefc] + 0x28))(plVar42,&local_d0);
    fVar48 = (float)FUN_00f0d548(plVar42);
    if ((*(float *)(param_3 + 0xf2a) != fVar48 * 1.1) ||
       (*(float *)((long)param_3 + 0x7954) != fVar47)) {
      *(float *)(param_3 + 0xf2a) = fVar48 * 1.1;
      *(float *)((long)param_3 + 0x7954) = fVar47;
      FUN_0091ada4(plVar30);
    }
    local_d0 = 0;
    (**(code **)(param_3[0xf22] + 0x28))(plVar30,&local_d0);
    FUN_00e70570(&local_d0,param_3 + 0x5a08);
    FUN_00f0d75c(plVar30,&local_d0);
    if (local_c8 != (void *)0x0) {
      operator_delete__(local_c8);
      local_d0 = 0;
      local_c8 = (void *)0x0;
    }
  }
  fVar47 = *pfVar4;
  plVar42 = param_3 + 0x23b9;
  FUN_00ab75d0(0,fVar47,fVar47,plVar42);
  FUN_00f13e54(plVar42);
  fVar44 = fVar44 + fVar47 * -0.5;
  if ((*(float *)(param_3 + 0x23c1) != fVar50) ||
     (fVar47 = *(float *)((long)param_3 + 0x11e0c), fVar47 != fVar44)) {
    *(float *)(param_3 + 0x23c1) = fVar50;
    *(float *)((long)param_3 + 0x11e0c) = fVar44;
    FUN_0091ada4(plVar42);
  }
  local_d0 = 0x3f0000003f000000;
  (**(code **)(*plVar42 + 0x28))(plVar42,&local_d0);
  fVar44 = *pfVar9;
  FUN_00aca658(plVar7);
  if ((*pbVar11 >> 2 & 1) == 0) {
    if ((*(byte *)((long)param_3 + 0x8674) >> 2 & 1) != 0) {
      fVar44 = *pfVar15;
      FUN_00f0d4e0(plVar32);
    }
  }
  else {
    fVar44 = *(float *)((long)param_3 + 0xda8c);
    FUN_00aca658(plVar12);
  }
  fVar48 = *pfVar34;
  fVar44 = fVar44 + fVar47;
  FUN_00f13e54(plVar21);
  fVar50 = *pfVar23;
  fVar48 = fVar48 - fVar47;
  FUN_00f13e54(plVar36);
  if (fVar50 - fVar47 <= fVar48) {
    fVar48 = fVar50 - fVar47;
  }
  if (*pfVar22 != fVar44) {
    *pfVar22 = fVar44;
    FUN_0091ada4(plVar20);
  }
  FUN_00f13f08(*pfVar3 + -65.0,fVar48 - fVar44,plVar20);
  fVar47 = *pfVar3;
  pfVar24 = (float *)((long)param_3 + 0x25604);
  if ((*(float *)(param_3 + 0x4ac0) != fVar47) || (*pfVar24 != 0.0)) {
    *(float *)(param_3 + 0x4ac0) = fVar47;
    *pfVar24 = 0.0;
    FUN_0091ada4(param_3 + 0x4ab8);
    fVar47 = *pfVar3;
  }
  FUN_00f13f08(fVar47,local_b8,param_3 + 0x2070);
  if (*(float *)(param_3 + 0x2078) != -65.0) {
    *(float *)(param_3 + 0x2078) = -65.0;
    FUN_0091ada4(param_3 + 0x2070);
  }
  FUN_00f13f08(local_b4 - *pfVar3,local_b8,param_3 + 0x208e);
  pfVar22 = (float *)(param_3 + 0xf7f);
  plVar7 = param_3 + 0xf77;
  if ((*pfVar22 != 0.0) || (*(float *)((long)param_3 + 0x7bfc) != 0.0)) {
    pfVar22[0] = 0.0;
    pfVar22[1] = 0.0;
    FUN_0091ada4(plVar7);
  }
  local_d0 = 0;
  (**(code **)(param_3[0xf77] + 0x28))(plVar7,&local_d0);
  FUN_00f13f08(local_b4 - *pfVar3,local_b8,plVar7);
  ppuVar26 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if (*pcVar6 != '\0') {
    ppuVar26 = &PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20;
  }
  puVar25 = (undefined4 *)&DAT_01bb4d48;
  if (*(char *)((long)param_3 + 0x2cf9a) != '\0') {
    puVar25 = &DAT_01bee7fa;
  }
  FUN_00f0d92c(plVar10,*ppuVar26,puVar25);
  fVar44 = *pfVar3;
  plVar7 = param_3 + 0x5b0;
  fVar47 = (float)FUN_00f13e54(plVar7);
  fVar47 = (fVar44 - fVar47) * 0.5;
  FUN_00f13f08(local_b4 - *pfVar3,local_b8,param_3 + 0x595);
  if ((*(float *)(param_3 + 0x59d) != *pfVar3) || (*(float *)((long)param_3 + 0x2cec) != 0.0)) {
    *(float *)(param_3 + 0x59d) = *pfVar3;
    *(undefined4 *)((long)param_3 + 0x2cec) = 0;
    FUN_0091ada4(param_3 + 0x595);
  }
  fVar48 = *pfVar4;
  FUN_00ab75d0(0,fVar48,fVar48,plVar7);
  fVar44 = (float)FUN_00f13e54(plVar7);
  fVar44 = fVar44 * -0.5 - fVar47;
  FUN_00f13e54(plVar8);
  if ((*(float *)(param_3 + 0x5b8) != fVar44) ||
     (*(float *)((long)param_3 + 0x2dc4) != fVar48 * 0.5)) {
    *(float *)(param_3 + 0x5b8) = fVar44;
    *(float *)((long)param_3 + 0x2dc4) = fVar48 * 0.5;
    FUN_0091ada4(plVar7);
  }
  fVar48 = *pfVar4;
  plVar10 = param_3 + 0x868;
  FUN_00ab75d0(0,fVar48,fVar48,plVar10);
  fVar44 = (float)FUN_00f13e54(plVar10);
  fVar47 = fVar44 * -0.5 - fVar47;
  FUN_00f13e54(plVar8);
  if ((*(float *)(param_3 + 0x870) != fVar47) ||
     (*(float *)((long)param_3 + 0x4384) != fVar48 * 0.6)) {
    *(float *)(param_3 + 0x870) = fVar47;
    *(float *)((long)param_3 + 0x4384) = fVar48 * 0.6;
    FUN_0091ada4(plVar10);
  }
  fVar47 = 0.0;
  FUN_00f07940(0,param_3 + 0xee5,7,plVar10,7);
  plVar8 = param_3 + 0xb20;
  FUN_00f13e54(plVar7);
  FUN_00f0dad0(plVar8,1);
  FUN_00f07b18(0xc2700000,plVar8,2,plVar7,0);
  FUN_00f07b18(0,plVar8,3,plVar7,3);
  if ((char)param_3[0x59f3] == '\0') {
    if ((*(byte *)((long)param_3 + 0x8674) >> 2 & 1) == 0) goto LAB_00b5c584;
    fVar49 = *pfVar15;
  }
  else {
    if ((*pbVar11 >> 2 & 1) != 0) {
      fVar49 = fVar49 + 40.0;
      goto LAB_00b5c5a0;
    }
LAB_00b5c584:
    fVar49 = *pfVar14;
    plVar32 = plVar13;
  }
  FUN_00f0d4e0(plVar32);
  fVar49 = fVar49 + fVar47;
LAB_00b5c5a0:
  pfVar3 = (float *)(param_3 + 0x4c62);
  fVar47 = 1.0;
  if (*pcVar6 != '\0') {
    fVar47 = 0.8;
  }
  plVar7 = param_3 + 0x4c5a;
  fVar47 = fVar49 + fVar43 * fVar47 + -60.0;
  pfVar4 = (float *)((long)param_3 + 0x26314);
  if ((*pfVar3 != 0.0) || (fVar49 = *pfVar4, fVar49 != fVar47)) {
    *pfVar3 = 0.0;
    *pfVar4 = fVar47;
    FUN_0091ada4(plVar7);
    fVar49 = *pfVar4;
  }
  FUN_00f13f08(*pfVar5 + 80.0 + 48.0,(local_b8 - fVar49) - *pfVar24,plVar7);
  *(uint *)((long)param_3 + 0x26354) = *(uint *)((long)param_3 + 0x26354) | 0x10;
  uVar46 = FUN_00f13e54(plVar7);
  FUN_00f01c54(param_3 + 0x4c8e,0,0,1,1);
  FUN_00ed02d8(uVar46,param_3 + 0x4c8e);
  fVar47 = *pfVar4;
  fVar49 = 60.0;
  plVar8 = param_3 + 0x515b;
  FUN_00f0d4e0(plVar8);
  fVar47 = fVar47 + 60.0 + fVar49 * -0.5;
  pfVar24 = (float *)((long)param_3 + 0x28b1c);
  if ((*(float *)(param_3 + 0x5163) != 48.0) || (*pfVar24 != fVar47)) {
    *(float *)(param_3 + 0x5163) = 48.0;
    *pfVar24 = fVar47;
    FUN_0091ada4(plVar8);
  }
  local_d0 = 0;
  (**(code **)(*plVar8 + 0x28))(plVar8,&local_d0);
  FUN_00f0dad0(*pfVar5 + -20.0,plVar8,1);
  ppuVar26 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  if (*pcVar6 != '\0') {
    ppuVar26 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  }
  plVar8 = param_3 + 0x5181;
  FUN_00f0d92c(plVar8,*ppuVar26,&DAT_01bee7fa);
  if ((*(float *)(param_3 + 0x5189) != 48.0) || (*(float *)((long)param_3 + 0x28c4c) != *pfVar24)) {
    *(float *)(param_3 + 0x5189) = 48.0;
    *(float *)((long)param_3 + 0x28c4c) = *pfVar24;
    FUN_0091ada4(plVar8);
  }
  local_d0 = 0;
  (**(code **)(*plVar8 + 0x28))(plVar8,&local_d0);
  FUN_00f0dad0(*pfVar5 + -30.0,plVar8,1);
  if ((*(float *)(param_3 + 0x51c0) != *pfVar3 + 24.0) ||
     (*(float *)((long)param_3 + 0x28e04) != *pfVar4)) {
    *(float *)(param_3 + 0x51c0) = *pfVar3 + 24.0;
    *(float *)((long)param_3 + 0x28e04) = *pfVar4;
    FUN_0091ada4(param_3 + 0x51b8);
  }
  fVar47 = (float)FUN_00f13e54(plVar7);
  fVar43 = -48.0;
  FUN_00f13e54(plVar7);
  fVar49 = 13.0;
  if (*pcVar6 != '\0') {
    fVar49 = -11.0;
  }
  FUN_00ac1374(fVar47 + -48.0,fVar43 - fVar49,param_3 + 0x51b8);
  *(undefined1 *)(param_3 + 0x59f5) = 0;
  if (*(long *)(lVar29 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

