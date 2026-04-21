// functions/010e1 — 87 functions
#include "libGameKindred.h"




undefined8 FUN_010e10d8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_010e10e8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = -0.0;
      if ((fVar4 < 0.722154) && (fVar5 = -1.0, 0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 / 0.722154) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 / 0.722154) * 64.0;
          fVar5 = *(float *)(&DAT_01c4ac50 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c4ac50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c4ac50 + (ulong)uVar3 * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar5 * 3.0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




void FUN_010e11a0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = -0.0;
      if ((fVar5 < 0.7) && (fVar4 = 1.0, -0.0 < fVar5)) {
        fVar5 = (fVar5 + 0.0) / 0.7;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01c4ad50 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c4ad50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c4ad50 + (ulong)uVar3 * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar4 * -50.0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}



undefined DAT_01c4ae50;
undefined DAT_01c4af50;
undefined DAT_01c4b050;
undefined DAT_01c4b150;
undefined DAT_01c4b250;
undefined DAT_01c4b350;
undefined DAT_01c4f650;
undefined DAT_01c4b450;
undefined DAT_01c4b550;
undefined DAT_01c4b750;
undefined DAT_01c4be50;
undefined DAT_01c4bf50;
undefined DAT_01c4c050;
undefined DAT_01c4c150;
undefined DAT_01c4c250;
undefined DAT_01c4c350;
undefined DAT_01c4c450;
undefined DAT_01c4c550;
undefined DAT_01c4c650;
undefined DAT_01c4c850;
undefined DAT_01c4c750;
undefined DAT_01c4c950;
undefined DAT_01c4ca50;
undefined DAT_01c4d050;
undefined DAT_01c4cb50;
undefined DAT_01c4cd50;
undefined DAT_01c4ce50;
undefined DAT_01c4cf50;
undefined DAT_01c54150;
undefined DAT_01c54250;
undefined DAT_01c54450;
undefined DAT_01c4d150;
undefined DAT_01c4d450;
undefined DAT_01c4e150;
undefined DAT_01c4e350;
undefined DAT_01c4e450;
undefined DAT_01c4e750;
undefined DAT_01c4e850;
undefined DAT_01c4f950;
undefined DAT_01c4fa50;
undefined DAT_01c4fb50;
undefined DAT_01c4fc50;
undefined DAT_01c56950;
undefined DAT_01c5b450;
undefined DAT_01c5b550;
undefined DAT_01c4ff50;
undefined DAT_01c50050;
undefined DAT_01c50250;
undefined DAT_01c50350;
undefined DAT_01c50450;
undefined DAT_01c55050;
undefined DAT_01c50550;
undefined DAT_01c50650;
undefined DAT_01c50750;
undefined DAT_01c50850;
undefined DAT_01c50b50;
undefined DAT_01c50d50;
undefined DAT_01c50950;
undefined DAT_01c54050;
undefined DAT_01c51050;
undefined DAT_01c51250;
undefined DAT_01c54c50;
undefined DAT_01c54d50;
undefined DAT_01c51450;
undefined DAT_01c51650;
undefined DAT_01c51750;
undefined DAT_01c51850;
undefined DAT_01c51a50;
undefined DAT_01c51c50;
undefined DAT_01c52350;
undefined DAT_01c52550;
undefined DAT_01c52650;
undefined DAT_01c52750;
undefined DAT_01c52850;
undefined DAT_01c52950;
undefined DAT_01c52a50;
undefined DAT_01c52b50;
undefined DAT_01c52c50;
undefined DAT_01c52d50;
undefined DAT_01c52e50;
undefined DAT_01c52f50;
undefined DAT_01c53050;
undefined DAT_01c53150;
undefined DAT_01c53250;
undefined DAT_01c53350;
undefined DAT_01c53450;
undefined DAT_01c53550;
undefined DAT_01c53650;
undefined DAT_01c53850;
undefined DAT_01c53950;
undefined DAT_01c53a50;
undefined DAT_01c53b50;
undefined DAT_01c53c50;
undefined DAT_01c53d50;
undefined DAT_01c53f50;
undefined DAT_01c54650;
undefined DAT_01c54850;
undefined DAT_01c54950;
undefined DAT_01c54750;
undefined DAT_01c54a50;
undefined DAT_01c54e50;
undefined DAT_01c54f50;
undefined DAT_01c55150;
undefined DAT_01c55250;
undefined DAT_01c55350;
undefined DAT_01c55450;
undefined DAT_01c55750;
undefined DAT_01c55850;
undefined DAT_01c55950;
undefined DAT_01c55a50;
undefined DAT_01c55d50;
undefined DAT_01c55e50;
undefined DAT_01c55f50;
undefined DAT_01c56050;
undefined DAT_01c56150;
undefined DAT_01c56250;
undefined DAT_01c56350;
undefined DAT_01c56450;
undefined DAT_01c56a50;
undefined DAT_01c56c50;
undefined DAT_01c57250;
undefined DAT_01c57350;
undefined DAT_01c57850;
undefined DAT_01c57950;
undefined DAT_01c57a50;
undefined DAT_01c57b50;
undefined DAT_01c57d50;
undefined DAT_01c57e50;
undefined DAT_01c57f50;
undefined DAT_01c58050;
undefined DAT_01c38ce0;
undefined DAT_01c58150;
undefined DAT_01c58250;
undefined DAT_01c58350;
undefined DAT_01c58450;
undefined DAT_01c58850;
undefined DAT_01c58550;
undefined DAT_01c58650;
undefined DAT_01c58750;
undefined DAT_01c58950;
undefined DAT_01c58a50;
undefined DAT_01c58c50;
undefined DAT_01c58d50;
undefined DAT_01c58e50;
undefined DAT_01c58f50;
undefined DAT_01c5a050;
undefined DAT_01c59150;
undefined DAT_01c59250;
undefined DAT_01c59450;
undefined DAT_01c59550;
undefined DAT_01c59650;
undefined DAT_01c59750;
undefined DAT_01c59850;
undefined DAT_01c59950;
undefined DAT_01c59d50;
undefined DAT_01c59e50;
undefined DAT_01c59f50;
undefined DAT_01c5a350;
undefined DAT_01c5aa50;
undefined DAT_01c5a550;
undefined DAT_01c5a650;
undefined DAT_01c5a750;
undefined DAT_01c5a850;
undefined DAT_01c5a950;
undefined DAT_01c5ad50;
undefined DAT_01c5ac50;
undefined DAT_01c5ae50;
undefined4 DAT_01bf8840;
undefined DAT_01c5af50;
undefined DAT_01c5b050;
undefined DAT_01c5b150;
undefined DAT_01c5b250;
undefined DAT_01c5b350;
undefined DAT_01c5b650;
undefined DAT_01c5b750;
undefined DAT_01c5b850;
undefined DAT_01c5b950;
undefined DAT_01c5ba50;
undefined DAT_01c5bb50;
undefined DAT_01c5bd50;
undefined DAT_01c5be50;
undefined DAT_01c5bf50;
undefined DAT_01c5c050;
undefined DAT_01c5c450;
undefined DAT_01c5c650;
undefined DAT_01c5c750;
undefined DAT_01c5c850;
undefined DAT_01c5ca50;
undefined DAT_01c7bb04;
undefined DAT_01c7a204;
undefined DAT_01c7f804;
undefined DAT_01c76a04;
undefined DAT_01c7fd04;
undefined DAT_01c68804;
undefined DAT_01c5d104;
undefined DAT_01c5d204;
undefined DAT_01c80904;
undefined DAT_01c74704;
undefined DAT_01c7cf04;
undefined DAT_01c5d304;
undefined DAT_01c5d404;
undefined DAT_01c5d504;
undefined DAT_01c5d604;
undefined DAT_01c5d704;
undefined DAT_01c7f004;
undefined DAT_01c5d804;
undefined DAT_01c6f304;
undefined DAT_01c5d904;
undefined DAT_01c5fe04;
undefined DAT_01c72304;
undefined DAT_01c5da04;
undefined DAT_01c71904;
undefined DAT_01c7ec04;
undefined DAT_01c76404;
undefined DAT_01c5db04;
undefined DAT_01c5dc04;
undefined DAT_01c6af04;
undefined DAT_01c5dd04;
undefined DAT_01c77904;
undefined DAT_01c5de04;
undefined DAT_01c6be04;
undefined DAT_01c5df04;
undefined DAT_01c60104;
undefined DAT_01c5e004;
undefined DAT_01c80604;
undefined DAT_01c80704;
undefined DAT_01c80804;
undefined DAT_01c73704;
undefined DAT_01c80204;
undefined DAT_01c5e104;
undefined DAT_01c5e204;
undefined DAT_01c75004;
undefined DAT_01c5e304;
undefined DAT_01c6f504;
undefined DAT_01c69d04;
undefined DAT_01c5e404;
undefined DAT_01c67b04;
undefined DAT_01c7de04;
undefined DAT_01c5e504;
undefined DAT_01c5e604;
undefined DAT_01c5e704;
undefined DAT_01c5e804;
undefined DAT_01c5e904;
undefined DAT_01c5ea04;
undefined DAT_01c7fa04;
undefined DAT_01c64a04;
undefined DAT_01c5eb04;
undefined DAT_01c5ec04;
undefined DAT_01c6f104;
undefined DAT_01c5ed04;
undefined DAT_01c5ee04;
undefined DAT_01c77104;
undefined DAT_01c6bc04;
undefined DAT_01c6f604;
undefined DAT_01c61904;
undefined DAT_01c5ef04;
undefined DAT_01c7fe04;
undefined DAT_01c5f004;
undefined DAT_01c5f104;
undefined DAT_01c67104;
undefined DAT_01c62804;
undefined DAT_01c5f204;
undefined DAT_01c74304;
undefined DAT_01c76f04;
undefined DAT_01c67304;
undefined DAT_01c5fc04;
undefined DAT_01c5f304;
undefined DAT_01c80404;
undefined DAT_01c67704;
undefined DAT_01c5f404;
undefined DAT_01c5f504;
undefined DAT_01c5f604;
undefined DAT_01c7ee04;
undefined DAT_01c5f704;
undefined DAT_01c5f804;
undefined DAT_01c5f904;
undefined DAT_01c5fa04;
undefined DAT_01c6d104;
undefined DAT_01c73b04;
undefined DAT_01c7a504;
undefined DAT_01c6b804;
undefined DAT_01c7ed04;
undefined DAT_01c6ba04;
undefined DAT_01c5fb04;
undefined DAT_01c74104;
undefined DAT_01c6bb04;
undefined DAT_01c73c04;
undefined DAT_01c75d04;
undefined DAT_01c7a104;
undefined DAT_01c64004;
undefined DAT_01c75904;
undefined DAT_01c75704;
undefined DAT_01c5fd04;
undefined DAT_01c5ff04;
undefined DAT_01c7a904;
undefined DAT_01c60004;
undefined DAT_01c7ef04;
undefined DAT_01c60204;
undefined DAT_01c60304;
undefined DAT_01c80a04;
undefined DAT_01c60404;
undefined DAT_01c60504;
undefined DAT_01c6a404;
undefined DAT_01c60604;
undefined DAT_01c60704;
undefined DAT_01c60804;
undefined DAT_01c60904;
undefined DAT_01c60a04;
undefined DAT_01c60b04;
undefined DAT_01c60c04;
undefined DAT_01c60d04;
undefined DAT_01c60e04;
undefined DAT_01c69804;
undefined DAT_01c60f04;
undefined DAT_01c61004;
undefined DAT_01c7db04;
undefined DAT_01c64704;
undefined DAT_01c65004;
undefined DAT_01c61104;
undefined DAT_01c74604;
undefined DAT_01c61304;
undefined DAT_01c61204;
undefined DAT_01c76c04;
undefined DAT_01c7d504;
undefined DAT_01c61404;
undefined DAT_01c73a04;
undefined DAT_01c61504;
undefined DAT_01c61604;
undefined DAT_01c7bd04;
undefined DAT_01c61704;
undefined DAT_01c61804;
undefined DAT_01c74d04;
undefined DAT_01c71704;
undefined DAT_01c72104;
undefined DAT_01c72c04;
undefined DAT_01c61c04;
undefined DAT_01c61a04;
undefined DAT_01c61b04;
undefined DAT_01c61e04;
undefined DAT_01c62004;
undefined DAT_01c61d04;
undefined DAT_01c61f04;
undefined DAT_01c62104;
undefined DAT_01c62204;
undefined DAT_01c62304;
undefined DAT_01c62404;
undefined DAT_01c62504;
undefined DAT_01c62604;
undefined DAT_01c7d104;
undefined DAT_01c62704;
undefined DAT_01c62904;
undefined DAT_01c62a04;
undefined DAT_01c62c04;
undefined DAT_01c62b04;
undefined DAT_01c62d04;
undefined DAT_01c62e04;
undefined DAT_01c62f04;
undefined DAT_01c63004;
undefined DAT_01c63104;
undefined DAT_01c63204;
undefined DAT_01c63304;
undefined DAT_01c63404;
undefined DAT_01c63504;
undefined DAT_01c63604;
undefined DAT_01c63704;
undefined DAT_01c63804;
undefined DAT_01c63904;
undefined DAT_01c7be04;
undefined DAT_01c6b304;
undefined DAT_01c63a04;
undefined DAT_01c63b04;
undefined DAT_01c63c04;
undefined DAT_01c63d04;
undefined DAT_01c63e04;
undefined DAT_01c63f04;
undefined DAT_01c64204;
undefined DAT_01c64104;
undefined DAT_01c64304;
undefined DAT_01c64404;
undefined DAT_01c64504;
undefined DAT_01c64604;
undefined DAT_01c64804;
undefined DAT_01c64904;
undefined DAT_01c64b04;
undefined DAT_01c7dd04;
undefined DAT_01c6b004;
undefined DAT_01c6cc04;
undefined DAT_01c72004;
undefined DAT_01c72d04;
undefined DAT_01c64c04;
undefined DAT_01c64d04;
undefined DAT_01c67204;
undefined DAT_01c7a004;
undefined DAT_01c64e04;
undefined DAT_01c73204;
undefined DAT_01c64f04;
undefined DAT_01c77004;
undefined DAT_01c75c04;
undefined DAT_01c65104;
undefined DAT_01c77304;
undefined DAT_01c7c104;
undefined DAT_01c7c204;
undefined DAT_01c65204;
undefined DAT_01c6c804;
undefined DAT_01c77704;
undefined DAT_01c65304;
undefined DAT_01c76604;
undefined DAT_01c65404;
undefined DAT_01c7e904;
undefined DAT_01c65504;
undefined DAT_01c65604;
undefined DAT_01c65704;

undefined8 FUN_010e1264(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_010e1274(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_010e1280(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_010e1290(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_010e129c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_010e12ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_010e12b8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41a00000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_010e12c8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 360.0 + 0.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_010e1344(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40200000;
  return 1;
}




void FUN_010e1354(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x43b40000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_010e1374(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_010e13b0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_010e13ec(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_010e1428(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, -0.0 < fVar5)) {
        fVar6 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01c4ae50 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01c4ae50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c4ae50 + (ulong)uVar3 * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 2;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_010e14e4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_010e14f4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.0;
      if ((fVar4 < 1.1) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 / 1.1) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 / 1.1) * 64.0;
          fVar5 = *(float *)(&DAT_01c50a50 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c50a50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c50a50 + (ulong)uVar3 * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar5 * 90.0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_010e15a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc2c80000;
  return 1;
}




undefined8 FUN_010e15b8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_010e15c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_010e15d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_010e15e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_010e15f4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_010e1604(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_010e1610(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_010e1620(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 360.0 + 0.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_010e169c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ecccccd;
  return 1;
}




void FUN_010e16b0(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x43b40000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_010e16d0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_010e170c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_010e1748(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_010e1784(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, -0.0 < fVar5)) {
        fVar6 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01c5cb50 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01c5cb50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c5cb50 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar6;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      if ((fVar6 < 1.0) && (-0.0 < fVar6)) {
        fVar4 = 0.0;
        uVar3 = (uint)((fVar6 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar4 = (fVar6 + 0.0) * 64.0;
          fVar4 = *(float *)(&DAT_01c5a150 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01c5a150 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c5a150 + (ulong)uVar3 * 4));
        }
      }
      param_3[3] = fVar4;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_010e18a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_010e18b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_010e18c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_010e18cc(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0x3f80000000000000;
  return 1;
}




undefined8 FUN_010e18e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_010e18f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_010e1900(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_010e190c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_010e191c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_010e192c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x408000003f000000;
  return 1;
}




undefined8 FUN_010e1940(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_010e194c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_010e1960(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x43b40000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_010e1980(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40000000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_010e19a0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_010e19dc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_010e1a18(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, -0.0 < fVar4)) {
        fVar5 = 0.0;
        uVar3 = (uint)((fVar4 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 + 0.0) * 64.0;
          fVar5 = *(float *)(&DAT_01c5cb50 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c5cb50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c5cb50 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar5;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, -0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 + 0.0) * 64.0;
          fVar5 = *(float *)(&DAT_01c5c950 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c5c950 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c5c950 + (ulong)uVar3 * 4));
        }
      }
      param_3[3] = fVar5;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_010e1b3c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_010e1b4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_010e1b58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_010e1b64(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_010e1b74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_010e1b80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_010e1b90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_010e1b9c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_010e1bac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_010e1bc0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x41a0000040000000;
  return 1;
}




undefined8 FUN_010e1bd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_010e1be0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




void FUN_010e1bf4(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x43b40000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_010e1c14(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_010e1c50(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_010e1c8c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_010e1cc8(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x3f80000000000000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_1 = param_1 + -1;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (param_1 != 0);
  }
  return;
}




void FUN_010e1cf4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 1.0;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c5c950 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01c5c950 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c5c950 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (fVar3 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar3 = 0.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_01c4af50 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c4af50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c4af50 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_3[3] = fVar3;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_010e1e04(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_010e1e14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc1200000;
  return 1;
}




undefined8 FUN_010e1e24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_010e1e30(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0x3f80000000000000;
  return 1;
}




undefined8 FUN_010e1e48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_010e1e54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_010e1e64(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_010e1e70(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_010e1e80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_010e1e8c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41c80000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_010e1e9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_010e1ea8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




void FUN_010e1eb8(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x43b40000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_010e1ed8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_010e1f14(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_010e1f50(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_010e1f8c(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x3f80000000000000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_1 = param_1 + -1;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (param_1 != 0);
  }
  return;
}




void FUN_010e1fb8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 1.0;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c5c950 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01c5c950 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c5c950 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (fVar3 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar3 = 0.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_01c4af50 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c4af50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c4af50 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_3[3] = fVar3;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}

