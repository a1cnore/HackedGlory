// functions/019af — 38 functions
#include "libGameKindred.h"




void FUN_019af01c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  
  uVar1 = (1 << (ulong)(*(uint *)(param_1 + 0x195) & 0x1f)) + 0x118;
  if ((int)*(uint *)(param_1 + 0x195) < 1) {
    uVar1 = 0x118;
  }
  if (param_2 == param_3) {
    if (0 < (int)uVar1) {
      uVar7 = (ulong)uVar1;
      piVar4 = (int *)*param_1;
      piVar5 = (int *)*param_2;
      do {
        uVar7 = uVar7 - 1;
        *piVar5 = *piVar5 + *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar7 != 0);
    }
    lVar3 = 0;
    do {
      *(int *)((long)param_2 + lVar3 + 0xc08) =
           *(int *)((long)param_2 + lVar3 + 0xc08) + *(int *)((long)param_1 + lVar3 + 0xc08);
      lVar3 = lVar3 + 4;
    } while (lVar3 != 0xa0);
    lVar3 = 0;
    do {
      lVar2 = lVar3 + 4;
      *(int *)((long)param_2 + lVar3 + 8) =
           *(int *)((long)param_2 + lVar3 + 8) + *(int *)((long)param_1 + lVar3 + 8);
      *(int *)((long)param_2 + lVar3 + 0x408) =
           *(int *)((long)param_2 + lVar3 + 0x408) + *(int *)((long)param_1 + lVar3 + 0x408);
      *(int *)((long)param_2 + lVar3 + 0x808) =
           *(int *)((long)param_2 + lVar3 + 0x808) + *(int *)((long)param_1 + lVar3 + 0x808);
      lVar3 = lVar2;
    } while (lVar2 != 0x400);
  }
  else {
    if (0 < (int)uVar1) {
      uVar7 = (ulong)uVar1;
      piVar4 = (int *)*param_1;
      piVar5 = (int *)*param_2;
      piVar6 = (int *)*param_3;
      do {
        uVar7 = uVar7 - 1;
        *piVar6 = *piVar5 + *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (uVar7 != 0);
    }
    lVar3 = 0;
    do {
      *(int *)((long)param_3 + lVar3 + 0xc08) =
           *(int *)((long)param_2 + lVar3 + 0xc08) + *(int *)((long)param_1 + lVar3 + 0xc08);
      lVar3 = lVar3 + 4;
    } while (lVar3 != 0xa0);
    lVar3 = 0;
    do {
      lVar2 = lVar3 + 4;
      *(int *)((long)param_3 + lVar3 + 8) =
           *(int *)((long)param_2 + lVar3 + 8) + *(int *)((long)param_1 + lVar3 + 8);
      *(int *)((long)param_3 + lVar3 + 0x408) =
           *(int *)((long)param_2 + lVar3 + 0x408) + *(int *)((long)param_1 + lVar3 + 0x408);
      *(int *)((long)param_3 + lVar3 + 0x808) =
           *(int *)((long)param_2 + lVar3 + 0x808) + *(int *)((long)param_1 + lVar3 + 0x808);
      lVar3 = lVar2;
    } while (lVar2 != 0x400);
  }
  return;
}




float FUN_019af18c(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  lVar6 = 0;
  uVar4 = 0;
  uVar5 = 0;
  fVar3 = 0.0;
  do {
    uVar2 = *(uint *)(param_1 + lVar6);
    uVar1 = *(int *)(param_2 + lVar6) + uVar2;
    if (uVar2 == 0) {
      if (uVar1 != 0) {
        uVar4 = uVar1 + uVar4;
        if (uVar1 < 0x100) {
          fVar7 = *(float *)(&DAT_01e1dac4 + (ulong)uVar1 * 4);
        }
        else {
          fVar7 = (float)(*DAT_0321a880)(uVar1);
        }
        fVar3 = fVar3 - fVar7;
      }
    }
    else {
      if (uVar2 < 0x100) {
        fVar7 = *(float *)(&DAT_01e1dac4 + (ulong)uVar2 * 4);
      }
      else {
        fVar7 = (float)(*DAT_0321a880)(uVar2);
      }
      uVar5 = uVar2 + uVar5;
      uVar4 = uVar1 + uVar4;
      if (uVar1 < 0x100) {
        fVar8 = *(float *)(&DAT_01e1dac4 + (ulong)uVar1 * 4);
      }
      else {
        fVar8 = (float)(*DAT_0321a880)(uVar1);
      }
      fVar3 = (fVar3 - fVar7) - fVar8;
    }
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0x400);
  if (uVar5 < 0x100) {
    fVar7 = *(float *)(&DAT_01e1dac4 + (ulong)uVar5 * 4);
  }
  else {
    fVar7 = (float)(*DAT_0321a880)(uVar5);
  }
  if (uVar4 < 0x100) {
    fVar8 = *(float *)(&DAT_01e1dac4 + (ulong)uVar4 * 4);
  }
  else {
    fVar8 = (float)(*DAT_0321a880)(uVar4);
  }
  return fVar3 + fVar7 + fVar8;
}




void FUN_019af2d8(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                 uint param_7,uint param_8,undefined8 param_9,long param_10)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  uint *puVar5;
  float fVar6;
  float fVar7;
  int aiStack_470 [256];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  memset(aiStack_470,0,0x400);
  if (param_2 < param_4) {
    iVar4 = param_1 + param_5 * param_2;
    do {
      if (param_1 < param_3) {
        puVar5 = (uint *)(param_10 + (long)iVar4 * 4);
        iVar2 = param_3 - param_1;
        do {
          iVar2 = iVar2 + -1;
          uVar1 = (*puVar5 >> 0x10) -
                  ((uint)(((int)(*puVar5 << 0x10) >> 0x18) * (int)(char)param_8) >> 5) & 0xff;
          aiStack_470[uVar1] = aiStack_470[uVar1] + 1;
          puVar5 = puVar5 + 1;
        } while (iVar2 != 0);
      }
      param_2 = param_2 + 1;
      iVar4 = iVar4 + param_5;
    } while (param_2 != param_4);
  }
  fVar6 = (float)FUN_019af410(param_9,aiStack_470);
  fVar7 = fVar6 + -3.0;
  if ((param_8 & 0xff) != (param_6 & 0xff)) {
    fVar7 = fVar6;
  }
  fVar6 = fVar7 + -3.0;
  if ((param_8 & 0xff) != (param_7 & 0xff)) {
    fVar6 = fVar7;
  }
  fVar7 = fVar6 + -3.0;
  if (param_8 != 0) {
    fVar7 = fVar6;
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar7);
}




float FUN_019af410(undefined8 param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  fVar5 = (float)FUN_019af18c(param_2,param_1);
  dVar7 = 2.4;
  lVar3 = 4;
  dVar6 = (double)(*param_2 * 3);
  lVar4 = 0x3fc;
  do {
    piVar1 = (int *)((long)param_2 + lVar3);
    piVar2 = (int *)((long)param_2 + lVar4);
    lVar3 = lVar3 + 4;
    lVar4 = lVar4 + -4;
    dVar8 = dVar7 * (double)(*piVar2 + *piVar1);
    dVar7 = dVar7 * 0.6;
    dVar6 = dVar6 + dVar8;
  } while (lVar3 != 0x40);
  return fVar5 + (float)(dVar6 * -0.1);
}




undefined8 FUN_019af49c(void)

{
  return 0xff000000;
}




void FUN_019af4a4(void)

{
  return;
}




undefined4 FUN_019af4a8(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}




undefined4 FUN_019af4b0(undefined8 param_1,long param_2)

{
  return *(undefined4 *)(param_2 + 4);
}




undefined4 FUN_019af4b8(undefined8 param_1,long param_2)

{
  return *(undefined4 *)(param_2 + -4);
}




int FUN_019af4c0(uint param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = ((param_2[1] ^ param_1) >> 1 & 0x7f7f7f7f) + (param_2[1] & param_1);
  return ((uVar1 ^ *param_2) >> 1 & 0x7f7f7f7f) + (uVar1 & *param_2);
}




int FUN_019af4f0(uint param_1,long param_2)

{
  return ((*(uint *)(param_2 + -4) ^ param_1) >> 1 & 0x7f7f7f7f) +
         (*(uint *)(param_2 + -4) & param_1);
}




int FUN_019af50c(uint param_1,uint *param_2)

{
  return ((*param_2 ^ param_1) >> 1 & 0x7f7f7f7f) + (*param_2 & param_1);
}




int FUN_019af528(undefined8 param_1,uint *param_2)

{
  return ((*param_2 ^ param_2[-1]) >> 1 & 0x7f7f7f7f) + (*param_2 & param_2[-1]);
}




int FUN_019af544(undefined8 param_1,uint *param_2)

{
  return ((param_2[1] ^ *param_2) >> 1 & 0x7f7f7f7f) + (param_2[1] & *param_2);
}




int FUN_019af560(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((param_2[-1] ^ param_1) >> 1 & 0x7f7f7f7f) + (param_2[-1] & param_1);
  uVar2 = ((param_2[1] ^ *param_2) >> 1 & 0x7f7f7f7f) + (param_2[1] & *param_2);
  return ((uVar2 ^ uVar1) >> 1 & 0x7f7f7f7f) + (uVar2 & uVar1);
}




uint FUN_019af5a8(undefined8 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  uVar2 = param_2[-1];
  uVar3 = *param_2;
  uVar12 = (uint)param_1;
  iVar10 = ((uint)((ulong)param_1 >> 0x18) & 0xff) - (uVar2 >> 0x18);
  iVar11 = (uVar3 >> 0x18) - (uVar2 >> 0x18);
  iVar4 = (uVar12 >> 0x10 & 0xff) - (uVar2 >> 0x10 & 0xff);
  iVar1 = -iVar10;
  if (-1 < iVar10) {
    iVar1 = iVar10;
  }
  iVar5 = (uVar3 >> 0x10 & 0xff) - (uVar2 >> 0x10 & 0xff);
  iVar10 = -iVar11;
  if (-1 < iVar11) {
    iVar10 = iVar11;
  }
  iVar6 = (uVar12 >> 8 & 0xff) - (uVar2 >> 8 & 0xff);
  iVar11 = -iVar4;
  if (-1 < iVar4) {
    iVar11 = iVar4;
  }
  iVar7 = (uVar3 >> 8 & 0xff) - (uVar2 >> 8 & 0xff);
  iVar4 = -iVar5;
  if (-1 < iVar5) {
    iVar4 = iVar5;
  }
  iVar8 = (uVar12 & 0xff) - (uVar2 & 0xff);
  iVar5 = -iVar6;
  if (-1 < iVar6) {
    iVar5 = iVar6;
  }
  iVar9 = (uVar3 & 0xff) - (uVar2 & 0xff);
  iVar6 = -iVar7;
  if (-1 < iVar7) {
    iVar6 = iVar7;
  }
  iVar7 = -iVar8;
  if (-1 < iVar8) {
    iVar7 = iVar8;
  }
  iVar8 = -iVar9;
  if (-1 < iVar9) {
    iVar8 = iVar9;
  }
  if (0 < ((((((iVar7 - iVar8) - iVar10) + iVar1) - iVar6) + iVar5) - iVar4) + iVar11) {
    uVar3 = uVar12;
  }
  return uVar3;
}




uint FUN_019af65c(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_2[-1];
  uVar2 = *param_2;
  uVar5 = ((uVar2 >> 0x18) + ((uint)param_1 >> 0x18)) - (uVar1 >> 0x18);
  uVar3 = ((uVar2 >> 0x10 & 0xff) + ((uint)((ulong)param_1 >> 0x10) & 0xff)) -
          (uVar1 >> 0x10 & 0xff);
  uVar4 = ((uVar2 >> 8 & 0xff) + ((uint)((ulong)param_1 >> 8) & 0xff)) - (uVar1 >> 8 & 0xff);
  uVar1 = ((uVar2 & 0xff) + ((uint)param_1 & 0xff)) - (uVar1 & 0xff);
  if (0xff < uVar5) {
    uVar5 = ~(uVar5 >> 0x18);
  }
  if (0xff < uVar3) {
    uVar3 = uVar3 >> 0x18 ^ 0xff;
  }
  if (0xff < uVar4) {
    uVar4 = uVar4 >> 0x18 ^ 0xff;
  }
  if (0xff < uVar1) {
    uVar1 = uVar1 >> 0x18 ^ 0xff;
  }
  return uVar1 | uVar5 << 0x18 | uVar3 << 0x10 | uVar4 << 8;
}




uint FUN_019af6ec(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = param_2[-1];
  uVar2 = ((*param_2 ^ param_1) >> 1 & 0x7f7f7f7f) + (*param_2 & param_1);
  iVar7 = (uVar2 >> 0x18) - (uVar4 >> 0x18);
  if (iVar7 < 0) {
    iVar7 = iVar7 + 1;
  }
  iVar5 = (uVar2 >> 0x10 & 0xff) - (uVar4 >> 0x10 & 0xff);
  iVar6 = (uVar2 >> 8 & 0xff) - (uVar4 >> 8 & 0xff);
  uVar3 = (iVar7 >> 1) + (uVar2 >> 0x18);
  iVar7 = (uVar2 & 0xff) - (uVar4 & 0xff);
  if (0xff < uVar3) {
    uVar3 = ~(uVar3 >> 0x18);
  }
  if (iVar5 < 0) {
    iVar5 = iVar5 + 1;
  }
  uVar4 = (iVar5 >> 1) + (uVar2 >> 0x10 & 0xff);
  if (0xff < uVar4) {
    uVar4 = uVar4 >> 0x18 ^ 0xff;
  }
  if (iVar6 < 0) {
    iVar6 = iVar6 + 1;
  }
  uVar1 = (iVar6 >> 1) + (uVar2 >> 8 & 0xff);
  if (0xff < uVar1) {
    uVar1 = uVar1 >> 0x18 ^ 0xff;
  }
  if (iVar7 < 0) {
    iVar7 = iVar7 + 1;
  }
  uVar2 = (iVar7 >> 1) + (uVar2 & 0xff);
  if (0xff < uVar2) {
    uVar2 = uVar2 >> 0x18 ^ 0xff;
  }
  return uVar2 | uVar3 << 0x18 | uVar4 << 0x10 | uVar1 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019af7c0(void)

{
  DAT_0321a888 = FUN_019af8ac;
  DAT_0321a870 = FUN_019af91c;
  DAT_0321a8d8 = FUN_019af980;
  DAT_0321a898 = FUN_019afb4c;
  pcRam000000000321a820 = FUN_019afa14;
  _DAT_0321a818 = FUN_019af9f0;
  pcRam000000000321a830 = FUN_019afa4c;
  _DAT_0321a828 = FUN_019afa30;
  pcRam000000000321a840 = FUN_019afa7c;
  _DAT_0321a838 = FUN_019afa64;
  DAT_0321a858 = FUN_019afb14;
  pcRam000000000321a850 = FUN_019afae8;
  _DAT_0321a848 = FUN_019afaac;
  DAT_0321a8c8 = FUN_019afbc8;
  return;
}




void FUN_019af8ac(undefined1 *param_1,uint param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 *puVar4;
  
  if (0 < (int)(param_2 & 0xfffffff0)) {
    puVar1 = param_1 + (long)(int)(param_2 & 0xfffffff0) * 4;
    puVar2 = puVar1;
    if (puVar1 <= param_1 + 0x40) {
      puVar2 = param_1 + 0x40;
    }
    puVar4 = param_1;
    puVar5 = param_3;
    do {
      uVar6 = *puVar4;
      uVar22 = puVar4[1];
      puVar3 = puVar4 + 2;
      uVar53 = puVar4[3];
      uVar7 = puVar4[4];
      uVar23 = puVar4[5];
      uVar38 = puVar4[6];
      uVar54 = puVar4[7];
      uVar8 = puVar4[8];
      uVar24 = puVar4[9];
      uVar39 = puVar4[10];
      uVar55 = puVar4[0xb];
      uVar9 = puVar4[0xc];
      uVar25 = puVar4[0xd];
      uVar40 = puVar4[0xe];
      uVar56 = puVar4[0xf];
      uVar10 = puVar4[0x10];
      uVar26 = puVar4[0x11];
      uVar41 = puVar4[0x12];
      uVar57 = puVar4[0x13];
      uVar11 = puVar4[0x14];
      uVar27 = puVar4[0x15];
      uVar42 = puVar4[0x16];
      uVar58 = puVar4[0x17];
      uVar12 = puVar4[0x18];
      uVar28 = puVar4[0x19];
      uVar43 = puVar4[0x1a];
      uVar59 = puVar4[0x1b];
      uVar13 = puVar4[0x1c];
      uVar29 = puVar4[0x1d];
      uVar44 = puVar4[0x1e];
      uVar60 = puVar4[0x1f];
      uVar14 = puVar4[0x20];
      uVar30 = puVar4[0x21];
      uVar45 = puVar4[0x22];
      uVar61 = puVar4[0x23];
      uVar15 = puVar4[0x24];
      uVar31 = puVar4[0x25];
      uVar46 = puVar4[0x26];
      uVar62 = puVar4[0x27];
      uVar16 = puVar4[0x28];
      uVar32 = puVar4[0x29];
      uVar47 = puVar4[0x2a];
      uVar63 = puVar4[0x2b];
      uVar17 = puVar4[0x2c];
      uVar33 = puVar4[0x2d];
      uVar48 = puVar4[0x2e];
      uVar64 = puVar4[0x2f];
      uVar18 = puVar4[0x30];
      uVar34 = puVar4[0x31];
      uVar49 = puVar4[0x32];
      uVar65 = puVar4[0x33];
      uVar19 = puVar4[0x34];
      uVar35 = puVar4[0x35];
      uVar50 = puVar4[0x36];
      uVar66 = puVar4[0x37];
      uVar20 = puVar4[0x38];
      uVar36 = puVar4[0x39];
      uVar51 = puVar4[0x3a];
      uVar67 = puVar4[0x3b];
      uVar21 = puVar4[0x3c];
      uVar37 = puVar4[0x3d];
      uVar52 = puVar4[0x3e];
      uVar68 = puVar4[0x3f];
      puVar4 = puVar4 + 0x40;
      *puVar5 = *puVar3;
      puVar5[1] = uVar22;
      puVar5[2] = uVar6;
      puVar5[3] = uVar53;
      puVar5[4] = uVar38;
      puVar5[5] = uVar23;
      puVar5[6] = uVar7;
      puVar5[7] = uVar54;
      puVar5[8] = uVar39;
      puVar5[9] = uVar24;
      puVar5[10] = uVar8;
      puVar5[0xb] = uVar55;
      puVar5[0xc] = uVar40;
      puVar5[0xd] = uVar25;
      puVar5[0xe] = uVar9;
      puVar5[0xf] = uVar56;
      puVar5[0x10] = uVar41;
      puVar5[0x11] = uVar26;
      puVar5[0x12] = uVar10;
      puVar5[0x13] = uVar57;
      puVar5[0x14] = uVar42;
      puVar5[0x15] = uVar27;
      puVar5[0x16] = uVar11;
      puVar5[0x17] = uVar58;
      puVar5[0x18] = uVar43;
      puVar5[0x19] = uVar28;
      puVar5[0x1a] = uVar12;
      puVar5[0x1b] = uVar59;
      puVar5[0x1c] = uVar44;
      puVar5[0x1d] = uVar29;
      puVar5[0x1e] = uVar13;
      puVar5[0x1f] = uVar60;
      puVar5[0x20] = uVar45;
      puVar5[0x21] = uVar30;
      puVar5[0x22] = uVar14;
      puVar5[0x23] = uVar61;
      puVar5[0x24] = uVar46;
      puVar5[0x25] = uVar31;
      puVar5[0x26] = uVar15;
      puVar5[0x27] = uVar62;
      puVar5[0x28] = uVar47;
      puVar5[0x29] = uVar32;
      puVar5[0x2a] = uVar16;
      puVar5[0x2b] = uVar63;
      puVar5[0x2c] = uVar48;
      puVar5[0x2d] = uVar33;
      puVar5[0x2e] = uVar17;
      puVar5[0x2f] = uVar64;
      puVar5[0x30] = uVar49;
      puVar5[0x31] = uVar34;
      puVar5[0x32] = uVar18;
      puVar5[0x33] = uVar65;
      puVar5[0x34] = uVar50;
      puVar5[0x35] = uVar35;
      puVar5[0x36] = uVar19;
      puVar5[0x37] = uVar66;
      puVar5[0x38] = uVar51;
      puVar5[0x39] = uVar36;
      puVar5[0x3a] = uVar20;
      puVar5[0x3b] = uVar67;
      puVar5[0x3c] = uVar52;
      puVar5[0x3d] = uVar37;
      puVar5[0x3e] = uVar21;
      puVar5[0x3f] = uVar68;
      puVar5 = puVar5 + 0x40;
    } while (puVar4 < puVar1);
    param_3 = param_3 + ((ulong)(puVar2 + ~(ulong)param_1 + 0x40) & 0xffffffffffffffc0);
    param_1 = param_1 + (((ulong)(puVar2 + ~(ulong)param_1) >> 2 & 0x3ffffffffffffff0) + 0x10) * 4;
  }
  FUN_019ae83c(param_1,param_2 & 0xf,param_3);
  return;
}




void FUN_019af91c(undefined1 *param_1,uint param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  
  if (0 < (int)(param_2 & 0xfffffff0)) {
    puVar1 = param_1 + (long)(int)(param_2 & 0xfffffff0) * 4;
    puVar2 = puVar1;
    if (puVar1 <= param_1 + 0x40) {
      puVar2 = param_1 + 0x40;
    }
    puVar3 = param_1;
    puVar4 = param_3;
    do {
      uVar5 = *puVar3;
      uVar21 = puVar3[1];
      uVar37 = puVar3[2];
      uVar6 = puVar3[4];
      uVar22 = puVar3[5];
      uVar38 = puVar3[6];
      uVar7 = puVar3[8];
      uVar23 = puVar3[9];
      uVar39 = puVar3[10];
      uVar8 = puVar3[0xc];
      uVar24 = puVar3[0xd];
      uVar40 = puVar3[0xe];
      uVar9 = puVar3[0x10];
      uVar25 = puVar3[0x11];
      uVar41 = puVar3[0x12];
      uVar10 = puVar3[0x14];
      uVar26 = puVar3[0x15];
      uVar42 = puVar3[0x16];
      uVar11 = puVar3[0x18];
      uVar27 = puVar3[0x19];
      uVar43 = puVar3[0x1a];
      uVar12 = puVar3[0x1c];
      uVar28 = puVar3[0x1d];
      uVar44 = puVar3[0x1e];
      uVar13 = puVar3[0x20];
      uVar29 = puVar3[0x21];
      uVar45 = puVar3[0x22];
      uVar14 = puVar3[0x24];
      uVar30 = puVar3[0x25];
      uVar46 = puVar3[0x26];
      uVar15 = puVar3[0x28];
      uVar31 = puVar3[0x29];
      uVar47 = puVar3[0x2a];
      uVar16 = puVar3[0x2c];
      uVar32 = puVar3[0x2d];
      uVar48 = puVar3[0x2e];
      uVar17 = puVar3[0x30];
      uVar33 = puVar3[0x31];
      uVar49 = puVar3[0x32];
      uVar18 = puVar3[0x34];
      uVar34 = puVar3[0x35];
      uVar50 = puVar3[0x36];
      uVar19 = puVar3[0x38];
      uVar35 = puVar3[0x39];
      uVar51 = puVar3[0x3a];
      uVar20 = puVar3[0x3c];
      uVar36 = puVar3[0x3d];
      uVar52 = puVar3[0x3e];
      puVar3 = puVar3 + 0x40;
      *puVar4 = uVar5;
      puVar4[1] = uVar21;
      puVar4[2] = uVar37;
      puVar4[3] = uVar6;
      puVar4[4] = uVar22;
      puVar4[5] = uVar38;
      puVar4[6] = uVar7;
      puVar4[7] = uVar23;
      puVar4[8] = uVar39;
      puVar4[9] = uVar8;
      puVar4[10] = uVar24;
      puVar4[0xb] = uVar40;
      puVar4[0xc] = uVar9;
      puVar4[0xd] = uVar25;
      puVar4[0xe] = uVar41;
      puVar4[0xf] = uVar10;
      puVar4[0x10] = uVar26;
      puVar4[0x11] = uVar42;
      puVar4[0x12] = uVar11;
      puVar4[0x13] = uVar27;
      puVar4[0x14] = uVar43;
      puVar4[0x15] = uVar12;
      puVar4[0x16] = uVar28;
      puVar4[0x17] = uVar44;
      puVar4[0x18] = uVar13;
      puVar4[0x19] = uVar29;
      puVar4[0x1a] = uVar45;
      puVar4[0x1b] = uVar14;
      puVar4[0x1c] = uVar30;
      puVar4[0x1d] = uVar46;
      puVar4[0x1e] = uVar15;
      puVar4[0x1f] = uVar31;
      puVar4[0x20] = uVar47;
      puVar4[0x21] = uVar16;
      puVar4[0x22] = uVar32;
      puVar4[0x23] = uVar48;
      puVar4[0x24] = uVar17;
      puVar4[0x25] = uVar33;
      puVar4[0x26] = uVar49;
      puVar4[0x27] = uVar18;
      puVar4[0x28] = uVar34;
      puVar4[0x29] = uVar50;
      puVar4[0x2a] = uVar19;
      puVar4[0x2b] = uVar35;
      puVar4[0x2c] = uVar51;
      puVar4[0x2d] = uVar20;
      puVar4[0x2e] = uVar36;
      puVar4[0x2f] = uVar52;
      puVar4 = puVar4 + 0x30;
    } while (puVar3 < puVar1);
    param_3 = param_3 + ((ulong)(puVar2 + ~(ulong)param_1) >> 6) * 0x30 + 0x30;
    param_1 = param_1 + (((ulong)(puVar2 + ~(ulong)param_1) >> 6) * 0x10 + 0x10) * 4;
  }
  FUN_019ae8e4(param_1,param_2 & 0xf,param_3);
  return;
}




void FUN_019af980(undefined1 *param_1,uint param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 *puVar4;
  
  if (0 < (int)(param_2 & 0xfffffff0)) {
    puVar1 = param_1 + (long)(int)(param_2 & 0xfffffff0) * 4;
    puVar2 = puVar1;
    if (puVar1 <= param_1 + 0x40) {
      puVar2 = param_1 + 0x40;
    }
    puVar4 = param_1;
    puVar5 = param_3;
    do {
      uVar6 = *puVar4;
      uVar22 = puVar4[1];
      puVar3 = puVar4 + 2;
      uVar7 = puVar4[4];
      uVar23 = puVar4[5];
      uVar38 = puVar4[6];
      uVar8 = puVar4[8];
      uVar24 = puVar4[9];
      uVar39 = puVar4[10];
      uVar9 = puVar4[0xc];
      uVar25 = puVar4[0xd];
      uVar40 = puVar4[0xe];
      uVar10 = puVar4[0x10];
      uVar26 = puVar4[0x11];
      uVar41 = puVar4[0x12];
      uVar11 = puVar4[0x14];
      uVar27 = puVar4[0x15];
      uVar42 = puVar4[0x16];
      uVar12 = puVar4[0x18];
      uVar28 = puVar4[0x19];
      uVar43 = puVar4[0x1a];
      uVar13 = puVar4[0x1c];
      uVar29 = puVar4[0x1d];
      uVar44 = puVar4[0x1e];
      uVar14 = puVar4[0x20];
      uVar30 = puVar4[0x21];
      uVar45 = puVar4[0x22];
      uVar15 = puVar4[0x24];
      uVar31 = puVar4[0x25];
      uVar46 = puVar4[0x26];
      uVar16 = puVar4[0x28];
      uVar32 = puVar4[0x29];
      uVar47 = puVar4[0x2a];
      uVar17 = puVar4[0x2c];
      uVar33 = puVar4[0x2d];
      uVar48 = puVar4[0x2e];
      uVar18 = puVar4[0x30];
      uVar34 = puVar4[0x31];
      uVar49 = puVar4[0x32];
      uVar19 = puVar4[0x34];
      uVar35 = puVar4[0x35];
      uVar50 = puVar4[0x36];
      uVar20 = puVar4[0x38];
      uVar36 = puVar4[0x39];
      uVar51 = puVar4[0x3a];
      uVar21 = puVar4[0x3c];
      uVar37 = puVar4[0x3d];
      uVar52 = puVar4[0x3e];
      puVar4 = puVar4 + 0x40;
      *puVar5 = *puVar3;
      puVar5[1] = uVar22;
      puVar5[2] = uVar6;
      puVar5[3] = uVar38;
      puVar5[4] = uVar23;
      puVar5[5] = uVar7;
      puVar5[6] = uVar39;
      puVar5[7] = uVar24;
      puVar5[8] = uVar8;
      puVar5[9] = uVar40;
      puVar5[10] = uVar25;
      puVar5[0xb] = uVar9;
      puVar5[0xc] = uVar41;
      puVar5[0xd] = uVar26;
      puVar5[0xe] = uVar10;
      puVar5[0xf] = uVar42;
      puVar5[0x10] = uVar27;
      puVar5[0x11] = uVar11;
      puVar5[0x12] = uVar43;
      puVar5[0x13] = uVar28;
      puVar5[0x14] = uVar12;
      puVar5[0x15] = uVar44;
      puVar5[0x16] = uVar29;
      puVar5[0x17] = uVar13;
      puVar5[0x18] = uVar45;
      puVar5[0x19] = uVar30;
      puVar5[0x1a] = uVar14;
      puVar5[0x1b] = uVar46;
      puVar5[0x1c] = uVar31;
      puVar5[0x1d] = uVar15;
      puVar5[0x1e] = uVar47;
      puVar5[0x1f] = uVar32;
      puVar5[0x20] = uVar16;
      puVar5[0x21] = uVar48;
      puVar5[0x22] = uVar33;
      puVar5[0x23] = uVar17;
      puVar5[0x24] = uVar49;
      puVar5[0x25] = uVar34;
      puVar5[0x26] = uVar18;
      puVar5[0x27] = uVar50;
      puVar5[0x28] = uVar35;
      puVar5[0x29] = uVar19;
      puVar5[0x2a] = uVar51;
      puVar5[0x2b] = uVar36;
      puVar5[0x2c] = uVar20;
      puVar5[0x2d] = uVar52;
      puVar5[0x2e] = uVar37;
      puVar5[0x2f] = uVar21;
      puVar5 = puVar5 + 0x30;
    } while (puVar4 < puVar1);
    param_3 = param_3 + ((ulong)(puVar2 + ~(ulong)param_1) >> 6) * 0x30 + 0x30;
    param_1 = param_1 + (((ulong)(puVar2 + ~(ulong)param_1) >> 6) * 0x10 + 0x10) * 4;
  }
  FUN_019ae808(param_1,param_2 & 0xf,param_3);
  return;
}




ulong FUN_019af9f0(uint param_1,uint *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = NEON_uhadd((ulong)param_1,(ulong)param_2[1],1);
  uVar2 = NEON_uhadd(uVar1,(ulong)*param_2,1);
  return uVar2 & 0xffffffff;
}




ulong FUN_019afa14(uint param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = NEON_uhadd((ulong)param_1,(ulong)*(uint *)(param_2 + -4),1);
  return uVar1 & 0xffffffff;
}




ulong FUN_019afa30(uint param_1,uint *param_2)

{
  ulong uVar1;
  
  uVar1 = NEON_uhadd((ulong)param_1,(ulong)*param_2,1);
  return uVar1 & 0xffffffff;
}




ulong FUN_019afa4c(undefined8 param_1,uint *param_2)

{
  ulong uVar1;
  
  uVar1 = NEON_uhadd((ulong)param_2[-1],(ulong)*param_2,1);
  return uVar1 & 0xffffffff;
}




ulong FUN_019afa64(undefined8 param_1,uint *param_2)

{
  ulong uVar1;
  
  uVar1 = NEON_uhadd((ulong)*param_2,(ulong)param_2[1],1);
  return uVar1 & 0xffffffff;
}




ulong FUN_019afa7c(uint param_1,uint *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = NEON_uhadd((ulong)param_1,(ulong)param_2[-1],1);
  uVar3 = NEON_uhadd((ulong)*param_2,(ulong)param_2[1],1);
  uVar2 = NEON_uhadd(uVar1,uVar3,1);
  return uVar2 & 0xffffffff;
}




uint FUN_019afaac(uint param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = NEON_uabd((ulong)param_1,(ulong)param_2[-1],1);
  uVar3 = NEON_uabd((ulong)*param_2,(ulong)param_2[-1],1);
  uVar1 = *param_2;
  if (0 < (int)(short)(((ushort)(byte)uVar2 + (ushort)(byte)((ulong)uVar2 >> 8)) -
                      ((ushort)(byte)uVar3 + (ushort)(byte)((ulong)uVar3 >> 8))) +
          (int)(short)(((ushort)(byte)((ulong)uVar2 >> 0x10) + (ushort)(byte)((ulong)uVar2 >> 0x18))
                      - ((ushort)(byte)((ulong)uVar3 >> 0x10) + (ushort)(byte)((ulong)uVar3 >> 0x18)
                        ))) {
    uVar1 = param_1;
  }
  return uVar1;
}




ulong FUN_019afae8(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = param_2[-1];
  uVar2 = *param_2;
  auVar4._0_2_ = (ushort)(byte)uVar2 + (ushort)(byte)param_1;
  auVar4._2_2_ = (ushort)(byte)((uint)uVar2 >> 8) + (ushort)(byte)((uint)param_1 >> 8);
  auVar4._4_2_ = (ushort)(byte)((uint)uVar2 >> 0x10) + (ushort)(byte)((uint)param_1 >> 0x10);
  auVar4._6_2_ = (ushort)(byte)((uint)uVar2 >> 0x18) + (ushort)(byte)((uint)param_1 >> 0x18);
  auVar4._8_8_ = 0;
  auVar4 = NEON_uqsub(auVar4,ZEXT716(CONCAT16((char)((uint)uVar1 >> 0x18),
                                              (uint6)CONCAT14((char)((uint)uVar1 >> 0x10),
                                                              (uint)CONCAT12((char)((uint)uVar1 >> 8
                                                                                   ),(ushort)(byte)
                                                  uVar1)))),2);
  uVar3 = NEON_uqxtn(auVar4._0_8_,auVar4,2);
  return uVar3 & 0xffffffff;
}




ulong FUN_019afb14(uint param_1,uint *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = NEON_uhadd((ulong)param_1,(ulong)*param_2,1);
  uVar3 = NEON_uqsub(uVar1,(ulong)param_2[-1],1);
  uVar4 = NEON_uqsub((ulong)param_2[-1],uVar1,1);
  uVar1 = NEON_uqadd(uVar1,CONCAT17((byte)((ulong)uVar3 >> 0x39),
                                    CONCAT16((byte)((ulong)uVar3 >> 0x30) >> 1,
                                             CONCAT15((byte)((ulong)uVar3 >> 0x28) >> 1,
                                                      CONCAT14((byte)((ulong)uVar3 >> 0x20) >> 1,
                                                               CONCAT13((byte)((ulong)uVar3 >> 0x18)
                                                                        >> 1,CONCAT12((byte)((ulong)
                                                  uVar3 >> 0x10) >> 1,
                                                  CONCAT11((byte)((ulong)uVar3 >> 8) >> 1,
                                                           (byte)uVar3 >> 1))))))),1);
  uVar2 = NEON_uqsub(uVar1,CONCAT17((byte)((ulong)uVar4 >> 0x39),
                                    CONCAT16((byte)((ulong)uVar4 >> 0x30) >> 1,
                                             CONCAT15((byte)((ulong)uVar4 >> 0x28) >> 1,
                                                      CONCAT14((byte)((ulong)uVar4 >> 0x20) >> 1,
                                                               CONCAT13((byte)((ulong)uVar4 >> 0x18)
                                                                        >> 1,CONCAT12((byte)((ulong)
                                                  uVar4 >> 0x10) >> 1,
                                                  CONCAT11((byte)((ulong)uVar4 >> 8) >> 1,
                                                           (byte)uVar4 >> 1))))))),1);
  return uVar2 & 0xffffffff;
}




void FUN_019afb4c(ulong *param_1,uint param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  ulong *puVar8;
  ulong *puVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  if (0 < (int)(param_2 & 0xfffffffc)) {
    puVar1 = (ulong *)((long)param_1 + (long)(int)(param_2 & 0xfffffffc) * 4);
    puVar2 = puVar1;
    if (puVar1 <= param_1 + 2) {
      puVar2 = param_1 + 2;
    }
    puVar8 = param_1;
    do {
      uVar5 = puVar8[1];
      cVar10 = (char)(uVar5 >> 8);
      cVar11 = (char)(uVar5 >> 0x10);
      cVar12 = (char)(uVar5 >> 0x18);
      cVar13 = (char)(uVar5 >> 0x20);
      cVar14 = (char)(uVar5 >> 0x28);
      cVar15 = (char)(uVar5 >> 0x30);
      cVar16 = (char)(uVar5 >> 0x38);
      uVar4 = *puVar8;
      auVar18[9] = cVar10;
      auVar18._0_9_ = *(unkbyte9 *)puVar8;
      auVar18[10] = cVar11;
      auVar18[0xb] = cVar12;
      auVar18[0xc] = cVar13;
      auVar18[0xd] = cVar14;
      auVar18[0xe] = cVar15;
      auVar18[0xf] = cVar16;
      auVar3[9] = cVar10;
      auVar3._0_9_ = *(unkbyte9 *)puVar8;
      auVar3[10] = cVar11;
      auVar3[0xb] = cVar12;
      auVar3[0xc] = cVar13;
      auVar3[0xd] = cVar14;
      auVar3[0xe] = cVar15;
      auVar3[0xf] = cVar16;
      auVar18 = NEON_ext(auVar18,auVar3,8,1);
      auVar19._0_8_ = auVar18._0_8_;
      auVar19._8_8_ = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar4;
      uVar7 = a64_TBL(ZEXT816(0),auVar6,0xff05ff05ff01ff01);
      uVar17 = a64_TBL(ZEXT816(0),auVar19,0xff05ff05ff01ff01);
      puVar9 = puVar8 + 2;
      puVar8[1] = CONCAT17(cVar16 - (char)((ulong)uVar17 >> 0x38),
                           CONCAT16(cVar15 - (char)((ulong)uVar17 >> 0x30),
                                    CONCAT15(cVar14 - (char)((ulong)uVar17 >> 0x28),
                                             CONCAT14(cVar13 - (char)((ulong)uVar17 >> 0x20),
                                                      CONCAT13(cVar12 - (char)((ulong)uVar17 >> 0x18
                                                                              ),
                                                               CONCAT12(cVar11 - (char)((ulong)
                                                  uVar17 >> 0x10),
                                                  CONCAT11(cVar10 - (char)((ulong)uVar17 >> 8),
                                                           (char)uVar5 - (char)uVar17)))))));
      *puVar8 = CONCAT17((char)(uVar4 >> 0x38) - (char)((ulong)uVar7 >> 0x38),
                         CONCAT16((char)(uVar4 >> 0x30) - (char)((ulong)uVar7 >> 0x30),
                                  CONCAT15((char)(uVar4 >> 0x28) - (char)((ulong)uVar7 >> 0x28),
                                           CONCAT14((char)(uVar4 >> 0x20) -
                                                    (char)((ulong)uVar7 >> 0x20),
                                                    CONCAT13((char)(uVar4 >> 0x18) -
                                                             (char)((ulong)uVar7 >> 0x18),
                                                             CONCAT12((char)(uVar4 >> 0x10) -
                                                                      (char)((ulong)uVar7 >> 0x10),
                                                                      CONCAT11((char)(uVar4 >> 8) -
                                                                               (char)((ulong)uVar7
                                                                                     >> 8),
                                                                               (char)uVar4 -
                                                                               (char)uVar7)))))));
      puVar8 = puVar9;
    } while (puVar9 < puVar1);
    param_1 = (ulong *)((long)param_1 +
                       (((long)puVar2 + ~(ulong)param_1 >> 2 & 0x3ffffffffffffffc) + 4) * 4);
  }
  FUN_019ad894(param_1,param_2 & 3);
  return;
}




void FUN_019afbc8(ulong *param_1,uint param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  ulong *puVar8;
  ulong *puVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  if (0 < (int)(param_2 & 0xfffffffc)) {
    puVar1 = (ulong *)((long)param_1 + (long)(int)(param_2 & 0xfffffffc) * 4);
    puVar2 = puVar1;
    if (puVar1 <= param_1 + 2) {
      puVar2 = param_1 + 2;
    }
    puVar8 = param_1;
    do {
      uVar5 = puVar8[1];
      cVar10 = (char)(uVar5 >> 8);
      cVar11 = (char)(uVar5 >> 0x10);
      cVar12 = (char)(uVar5 >> 0x18);
      cVar13 = (char)(uVar5 >> 0x20);
      cVar14 = (char)(uVar5 >> 0x28);
      cVar15 = (char)(uVar5 >> 0x30);
      cVar16 = (char)(uVar5 >> 0x38);
      uVar4 = *puVar8;
      auVar18[9] = cVar10;
      auVar18._0_9_ = *(unkbyte9 *)puVar8;
      auVar18[10] = cVar11;
      auVar18[0xb] = cVar12;
      auVar18[0xc] = cVar13;
      auVar18[0xd] = cVar14;
      auVar18[0xe] = cVar15;
      auVar18[0xf] = cVar16;
      auVar3[9] = cVar10;
      auVar3._0_9_ = *(unkbyte9 *)puVar8;
      auVar3[10] = cVar11;
      auVar3[0xb] = cVar12;
      auVar3[0xc] = cVar13;
      auVar3[0xd] = cVar14;
      auVar3[0xe] = cVar15;
      auVar3[0xf] = cVar16;
      auVar18 = NEON_ext(auVar18,auVar3,8,1);
      auVar19._0_8_ = auVar18._0_8_;
      auVar19._8_8_ = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar4;
      uVar7 = a64_TBL(ZEXT816(0),auVar6,0xff05ff05ff01ff01);
      uVar17 = a64_TBL(ZEXT816(0),auVar19,0xff05ff05ff01ff01);
      puVar9 = puVar8 + 2;
      puVar8[1] = CONCAT17((char)((ulong)uVar17 >> 0x38) + cVar16,
                           CONCAT16((char)((ulong)uVar17 >> 0x30) + cVar15,
                                    CONCAT15((char)((ulong)uVar17 >> 0x28) + cVar14,
                                             CONCAT14((char)((ulong)uVar17 >> 0x20) + cVar13,
                                                      CONCAT13((char)((ulong)uVar17 >> 0x18) +
                                                               cVar12,CONCAT12((char)((ulong)uVar17
                                                                                     >> 0x10) +
                                                                               cVar11,CONCAT11((char
                                                  )((ulong)uVar17 >> 8) + cVar10,
                                                  (char)uVar17 + (char)uVar5)))))));
      *puVar8 = CONCAT17((char)((ulong)uVar7 >> 0x38) + (char)(uVar4 >> 0x38),
                         CONCAT16((char)((ulong)uVar7 >> 0x30) + (char)(uVar4 >> 0x30),
                                  CONCAT15((char)((ulong)uVar7 >> 0x28) + (char)(uVar4 >> 0x28),
                                           CONCAT14((char)((ulong)uVar7 >> 0x20) +
                                                    (char)(uVar4 >> 0x20),
                                                    CONCAT13((char)((ulong)uVar7 >> 0x18) +
                                                             (char)(uVar4 >> 0x18),
                                                             CONCAT12((char)((ulong)uVar7 >> 0x10) +
                                                                      (char)(uVar4 >> 0x10),
                                                                      CONCAT11((char)((ulong)uVar7
                                                                                     >> 8) +
                                                                               (char)(uVar4 >> 8),
                                                                               (char)uVar7 +
                                                                               (char)uVar4)))))));
      puVar8 = puVar9;
    } while (puVar9 < puVar1);
    param_1 = (ulong *)((long)param_1 +
                       (((long)puVar2 + ~(ulong)param_1 >> 2 & 0x3ffffffffffffffc) + 4) * 4);
  }
  FUN_019ad8d0(param_1,param_2 & 3);
  return;
}




undefined8 FUN_019afc44(int param_1)

{
  long lVar1;
  
  FUN_019afc84();
  FUN_019b5650();
  lVar1 = 0x20;
  if (param_1 != 0) {
    lVar1 = 0x18;
  }
  return *(undefined8 *)(&DAT_0321a8e8 + lVar1);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019afc84(void)

{
  int iVar1;
  
  if (PTR_LOOP_02bf7468 != PTR_FUN_02bf7450) {
    pcRam000000000321a8f0 = FUN_019b0ad0;
    _DAT_0321a8e8 = FUN_019b040c;
    DAT_0321a900 = FUN_019b189c;
    _DAT_0321a8f8 = FUN_019b11d8;
    _DAT_0321a920 = FUN_019b0ad0;
    _DAT_0321a918 = FUN_019b2dcc;
    pcRam000000000321a930 = FUN_019b1fa4;
    _DAT_0321a928 = FUN_019b189c;
    pcRam000000000321a910 = FUN_019b26d4;
    DAT_0321a908 = FUN_019b1fa4;
    DAT_0321a938 = FUN_019b26d4;
    if ((PTR_FUN_02bf7450 != (undefined *)0x0) &&
       (iVar1 = (*(code *)PTR_FUN_02bf7450)(4), iVar1 != 0)) {
      FUN_019b3504();
    }
    PTR_LOOP_02bf7468 = PTR_FUN_02bf7450;
  }
  return;
}




void FUN_019afd4c(byte *param_1,byte *param_2,byte *param_3,long param_4,uint param_5)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (0 < (int)param_5) {
    uVar6 = 0;
    uVar7 = (ulong)param_5;
    do {
      bVar3 = *param_2;
      iVar4 = (uint)*param_1 * 0x4a85;
      uVar2 = (iVar4 + (uint)*param_3 * 0x6625) - 0x379ad0;
      pcVar1 = (char *)(param_4 + (uVar6 & 0xffffffff));
      if (uVar2 >> 0x16 == 0) {
        cVar5 = (char)(uVar2 >> 0xe);
      }
      else {
        cVar5 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
      }
      uVar2 = iVar4 + (uint)bVar3 * -0x1913 + (uint)*param_3 * -0x3408 + 0x220530;
      *pcVar1 = cVar5;
      if (uVar2 >> 0x16 == 0) {
        cVar5 = (char)(uVar2 >> 0xe);
      }
      else {
        cVar5 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
      }
      uVar2 = (iVar4 + (uint)bVar3 * 0x811a) - 0x451550;
      pcVar1[1] = cVar5;
      if (uVar2 >> 0x16 == 0) {
        cVar5 = (char)(uVar2 >> 0xe);
      }
      else {
        cVar5 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
      }
      uVar6 = uVar6 + 3;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      uVar7 = uVar7 - 1;
      param_1 = param_1 + 1;
      pcVar1[2] = cVar5;
    } while (uVar7 != 0);
  }
  return;
}




void FUN_019afe3c(byte *param_1,byte *param_2,byte *param_3,long param_4,uint param_5)

{
  uint uVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  
  if (0 < (int)param_5) {
    uVar5 = 0;
    uVar6 = (ulong)param_5;
    do {
      bVar3 = *param_2;
      iVar4 = (uint)*param_1 * 0x4a85;
      uVar1 = (iVar4 + (uint)*param_3 * 0x6625) - 0x379ad0;
      pcVar2 = (char *)(param_4 + (uVar5 & 0xfffffffc));
      if (uVar1 >> 0x16 == 0) {
        cVar7 = (char)(uVar1 >> 0xe);
      }
      else {
        cVar7 = ((byte)((int)uVar1 >> 0x1f) & 1) - 1;
      }
      uVar1 = iVar4 + (uint)bVar3 * -0x1913 + (uint)*param_3 * -0x3408 + 0x220530;
      *pcVar2 = cVar7;
      if (uVar1 >> 0x16 == 0) {
        cVar7 = (char)(uVar1 >> 0xe);
      }
      else {
        cVar7 = ((byte)((int)uVar1 >> 0x1f) & 1) - 1;
      }
      uVar1 = (iVar4 + (uint)bVar3 * 0x811a) - 0x451550;
      pcVar2[1] = cVar7;
      if (uVar1 >> 0x16 == 0) {
        cVar7 = (char)(uVar1 >> 0xe);
      }
      else {
        cVar7 = ((byte)((int)uVar1 >> 0x1f) & 1) - 1;
      }
      uVar5 = uVar5 + 4;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      uVar6 = uVar6 - 1;
      param_1 = param_1 + 1;
      pcVar2[2] = cVar7;
      pcVar2[3] = -1;
    } while (uVar6 != 0);
  }
  return;
}




void FUN_019aff40(byte *param_1,byte *param_2,byte *param_3,long param_4,uint param_5)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (0 < (int)param_5) {
    uVar6 = 0;
    uVar7 = (ulong)param_5;
    do {
      bVar3 = *param_3;
      iVar4 = (uint)*param_1 * 0x4a85;
      uVar2 = (iVar4 + (uint)*param_2 * 0x811a) - 0x451550;
      pcVar1 = (char *)(param_4 + (uVar6 & 0xffffffff));
      if (uVar2 >> 0x16 == 0) {
        cVar5 = (char)(uVar2 >> 0xe);
      }
      else {
        cVar5 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
      }
      uVar2 = iVar4 + (uint)*param_2 * -0x1913 + (uint)bVar3 * -0x3408 + 0x220530;
      *pcVar1 = cVar5;
      if (uVar2 >> 0x16 == 0) {
        cVar5 = (char)(uVar2 >> 0xe);
      }
      else {
        cVar5 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
      }
      uVar2 = (iVar4 + (uint)bVar3 * 0x6625) - 0x379ad0;
      pcVar1[1] = cVar5;
      if (uVar2 >> 0x16 == 0) {
        cVar5 = (char)(uVar2 >> 0xe);
      }
      else {
        cVar5 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
      }
      uVar6 = uVar6 + 3;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      uVar7 = uVar7 - 1;
      param_1 = param_1 + 1;
      pcVar1[2] = cVar5;
    } while (uVar7 != 0);
  }
  return;
}

