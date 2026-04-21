// functions/01544 — 93 functions
#include "libGameKindred.h"




undefined8 FUN_01544024(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01544034(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01544040(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01544050(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0154405c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0154406c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01544078(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4100000041000000;
  return 1;
}



undefined DAT_01d46b50;
undefined DAT_01d3fd50;
undefined DAT_01d3fe50;
undefined DAT_01d3ff50;
undefined DAT_01d40050;
undefined DAT_01d42250;
undefined DAT_01d40350;
undefined DAT_01d40450;
undefined DAT_01d40550;
undefined DAT_01d4a650;
undefined DAT_01d40650;
undefined DAT_01d40750;
undefined DAT_01d40850;
undefined DAT_01d41050;
undefined4 DAT_01d2a7d8;
undefined DAT_01d40950;
undefined DAT_01d40a50;
undefined DAT_01d40b50;
undefined DAT_01d40c50;
undefined DAT_01d40d50;
undefined DAT_01d40e50;
undefined DAT_01d40f50;
undefined DAT_01d41150;
undefined DAT_01d41250;
undefined DAT_01d41350;
undefined DAT_01d41450;
undefined DAT_01d41850;
undefined DAT_01d41950;
undefined DAT_01d41a50;
undefined DAT_01d41b50;
undefined DAT_01d41c50;
undefined DAT_01d41d50;
undefined DAT_01d41e50;
undefined DAT_01d41f50;
undefined DAT_01d42050;
undefined DAT_01d42150;
undefined DAT_01d42550;
undefined DAT_01d49a50;
undefined DAT_01d42650;
undefined DAT_01d42750;
undefined DAT_01d42850;
undefined DAT_01d42950;
undefined DAT_01d42a50;
undefined DAT_01d42b50;
undefined DAT_01d42c50;
undefined DAT_01d42d50;
undefined DAT_01d42e50;
undefined DAT_01d42f50;
undefined DAT_01d43050;
undefined DAT_01d43350;
undefined DAT_01d43550;
undefined DAT_01d43750;
undefined DAT_01d43850;
undefined DAT_01d43950;
undefined DAT_01d43e50;
undefined DAT_01d4a250;
undefined DAT_01d44050;
undefined DAT_01d44150;
undefined DAT_01d44650;
undefined DAT_01d44750;
undefined DAT_01d44850;
undefined DAT_01d44950;
undefined DAT_01d44a50;
undefined DAT_01d44b50;
undefined DAT_01d4dc50;
undefined DAT_01d44c50;
undefined DAT_01d44d50;
undefined DAT_01d45050;
undefined DAT_01d44f50;
undefined DAT_01d45150;
undefined DAT_01d45350;
undefined DAT_01d45650;
undefined DAT_01d45750;
undefined DAT_01d45e50;
undefined DAT_01d45f50;
undefined DAT_01d45850;
undefined DAT_01d45950;
undefined DAT_01d45a50;
undefined DAT_01d45b50;
undefined DAT_01d45c50;
undefined DAT_01d45d50;
undefined DAT_01d46050;
undefined DAT_01d46250;
undefined DAT_01d46350;
undefined DAT_01d46450;
undefined DAT_01d46750;
undefined DAT_01d46850;
undefined DAT_01d46a50;
undefined DAT_01d46c50;
undefined DAT_01d46d50;
undefined DAT_01d47050;
undefined DAT_01d47150;
undefined DAT_01d47250;
undefined DAT_01d47350;
undefined DAT_01d47450;
undefined DAT_01d47550;
undefined DAT_01d47850;
undefined DAT_01d47950;
undefined DAT_01d47b50;
undefined DAT_01d47a50;
undefined DAT_01d47d50;
undefined DAT_01d48050;
undefined DAT_01d48250;
undefined DAT_01d48350;
undefined DAT_01d48450;
undefined DAT_01d48550;
undefined DAT_01d48850;
undefined DAT_01d48950;
undefined DAT_01d48a50;
undefined DAT_01d48b50;
undefined DAT_01d48c50;
undefined DAT_01d48d50;
undefined DAT_01d48f50;
undefined DAT_01d49050;
undefined DAT_01d49150;
undefined DAT_01d49350;
undefined DAT_01d49550;
undefined DAT_01d49650;
undefined DAT_01d49850;
undefined DAT_01d4c350;
undefined DAT_01d49f50;
undefined DAT_01d49b50;
undefined DAT_01d49e50;
undefined DAT_01d4a750;
undefined DAT_01d4aa50;
undefined DAT_01d4ac50;
undefined DAT_01d4b050;
undefined DAT_01d4b250;
undefined DAT_01d4b350;
undefined DAT_01d4b950;
undefined DAT_01d4ba50;
undefined DAT_01d4bb50;
undefined DAT_01d4bf50;
undefined DAT_01d4c050;
undefined DAT_01d4c250;
undefined DAT_01d4cb50;
undefined DAT_01d4cc50;
undefined DAT_01d4d350;
undefined DAT_01d4d250;
undefined DAT_01d4d750;
undefined DAT_01d63e40;
undefined DAT_01d67640;
undefined DAT_01d6ad40;
undefined DAT_01d62640;
undefined DAT_01d4e240;
undefined DAT_01d5e440;
undefined DAT_01d67e40;
undefined DAT_01d58540;
undefined DAT_01d64e40;
undefined DAT_01d4e340;
undefined DAT_01d4e440;
undefined DAT_01d4e540;
undefined DAT_01d68740;
undefined DAT_01d4e640;
undefined DAT_01d4e840;
undefined DAT_01d4e940;
undefined DAT_01d4e740;
undefined DAT_01d5cd40;
undefined DAT_01d61c40;
undefined DAT_01d4ea40;
undefined DAT_01d6a240;
undefined DAT_01d4eb40;
undefined DAT_01d4ec40;
undefined DAT_01d5fc40;
undefined DAT_01d67a40;
undefined DAT_01d56840;
undefined DAT_01d4ed40;
undefined DAT_01d4ee40;
undefined DAT_01d4ef40;
undefined DAT_01d4f040;
undefined DAT_01d50f40;
undefined DAT_01d67840;
undefined DAT_01d4f140;
undefined DAT_01d4f640;
undefined DAT_01d4f240;
undefined DAT_01d4f340;
undefined DAT_01d4f440;
undefined DAT_01d4f540;
undefined DAT_01d56140;
undefined DAT_01d65240;
undefined DAT_01d4f740;
undefined DAT_01d61f40;
undefined DAT_01d4f840;
undefined DAT_01d4f940;
undefined DAT_01d4fa40;
undefined DAT_01d4fb40;
undefined DAT_01d55d40;
undefined DAT_01d4fc40;
undefined DAT_01d4fd40;
undefined DAT_01d4fe40;
undefined DAT_01d62840;
undefined DAT_01d65640;
undefined DAT_01d4ff40;
undefined DAT_01d50040;
undefined DAT_01d58940;
undefined DAT_01d60540;
undefined DAT_01d62140;
undefined DAT_01d5ad40;
undefined DAT_01d50140;
undefined DAT_01d5cc40;
undefined DAT_01d5e340;
undefined DAT_01d50240;
undefined DAT_01d54d40;
undefined DAT_01d50340;
undefined DAT_01d69f40;
undefined DAT_01d6a040;
undefined DAT_01d50440;
undefined DAT_01d63240;
undefined DAT_01d56340;
undefined DAT_01d6af40;
undefined DAT_01d5ed40;
undefined DAT_01d59640;
undefined DAT_01d55c40;
undefined DAT_01d6a440;
undefined DAT_01d50540;
undefined DAT_01d68940;
undefined DAT_01d61040;
undefined DAT_01d56e40;
undefined DAT_01d5c540;
undefined DAT_01d63940;
undefined DAT_01d5c640;
undefined DAT_01d50640;
undefined DAT_01d5b640;
undefined DAT_01d50740;
undefined DAT_01d6ab40;
undefined DAT_01d6ac40;
undefined DAT_01d6ae40;
undefined DAT_01d5da40;
undefined DAT_01d50840;
undefined DAT_01d60040;
undefined DAT_01d50940;
undefined DAT_01d50a40;
undefined DAT_01d56b40;
undefined DAT_01d6a540;
undefined DAT_01d59f40;
undefined DAT_01d61940;
undefined DAT_01d62e40;
undefined DAT_01d51140;
undefined DAT_01d58140;
undefined DAT_01d63f40;
undefined DAT_01d50b40;
undefined DAT_01d50c40;
undefined DAT_01d50d40;
undefined DAT_01d5bc40;
undefined DAT_01d50e40;
undefined DAT_01d66c40;
undefined DAT_01d51040;
undefined DAT_01d5e940;
undefined DAT_01d6a140;
undefined DAT_01d66a40;
undefined DAT_01d65340;
undefined DAT_01d57040;
undefined DAT_01d51240;
undefined DAT_01d66140;
undefined DAT_01d66240;
undefined DAT_01d66340;
undefined DAT_01d66540;
undefined DAT_01d66440;
undefined DAT_01d5d240;
undefined DAT_01d63b40;
undefined DAT_01d65a40;
undefined DAT_01d5d340;
undefined DAT_01d5d440;
undefined DAT_01d5d540;
undefined DAT_01d66840;
undefined DAT_01d5d640;
undefined DAT_01d51340;
undefined DAT_01d51440;
undefined DAT_01d51540;
undefined DAT_01d51640;
undefined DAT_01d51740;
undefined DAT_01d51840;
undefined DAT_01d51940;
undefined DAT_01d68540;
undefined DAT_01d51a40;
undefined DAT_01d51b40;
undefined DAT_01d51c40;
undefined DAT_01d65540;
undefined DAT_01d51d40;
undefined DAT_01d61a40;
undefined DAT_01d51e40;
undefined DAT_01d51f40;
undefined DAT_01d62f40;
undefined DAT_01d52040;
undefined DAT_01d52240;
undefined DAT_01d68a40;
undefined DAT_01d55f40;
undefined DAT_01d52140;
undefined DAT_01d60140;
undefined DAT_01d67d40;
undefined DAT_01d52340;
undefined DAT_01d52440;
undefined DAT_01d67540;
undefined DAT_01d68640;
undefined DAT_01d52540;
undefined DAT_01d52640;
undefined DAT_01d53b40;
undefined DAT_01d68b40;
undefined DAT_01d58440;
undefined DAT_01d58640;
undefined DAT_01d58740;
undefined DAT_01d58840;
undefined DAT_01d6a640;
undefined DAT_01d52740;
undefined DAT_01d52840;
undefined DAT_01d52940;
undefined DAT_01d52a40;
undefined DAT_01d52e40;
undefined DAT_01d52b40;
undefined DAT_01d52c40;
undefined DAT_01d5fd40;
undefined DAT_01d5fe40;
undefined DAT_01d52d40;
undefined DAT_01d52f40;
undefined DAT_01d53040;
undefined DAT_01d53240;
undefined DAT_01d53140;
undefined DAT_01d53340;
undefined DAT_01d53440;
undefined DAT_01d53540;
undefined DAT_01d53640;
undefined DAT_01d53740;
undefined DAT_01d53840;
undefined DAT_01d53940;
undefined DAT_01d53a40;
undefined DAT_01d58340;
undefined DAT_01d53c40;
undefined DAT_01d53d40;
undefined DAT_01d53e40;
undefined DAT_01d53f40;
undefined DAT_01d57440;
undefined DAT_01d59e40;
undefined DAT_01d63d40;
undefined DAT_01d54040;
undefined DAT_01d68140;
undefined DAT_01d54140;
undefined DAT_01d54240;
undefined DAT_01d54340;
undefined DAT_01d54440;
undefined DAT_01d54540;
undefined DAT_01d54640;
undefined DAT_01d62b40;
undefined DAT_01d54740;
undefined DAT_01d54840;
undefined DAT_01d54940;
undefined DAT_01d54a40;
undefined DAT_01d54b40;
undefined DAT_01d54c40;
undefined DAT_01d54e40;
undefined DAT_01d67f40;
undefined DAT_01d54f40;
undefined DAT_01d55040;
undefined DAT_01d65440;
undefined DAT_01d55140;
undefined DAT_01d55240;
undefined DAT_01d55340;
undefined DAT_01d55440;
undefined DAT_01d55540;
undefined DAT_01d55640;
undefined DAT_01d55740;
undefined DAT_01d6a340;
undefined DAT_01d55840;
undefined DAT_01d55940;
undefined DAT_01d55a40;
undefined DAT_01d55b40;
undefined DAT_01d55e40;
undefined DAT_01d56040;
undefined DAT_01d65d40;
undefined DAT_01d56240;
undefined DAT_01d56440;
undefined DAT_01d5cb40;
undefined DAT_01d56540;
undefined DAT_01d56640;

undefined8 FUN_01544088(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x420c0000;
  return 1;
}




undefined8 FUN_01544098(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




void FUN_015440a8(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41551eb8;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_015440cc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01544108(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar6 = 1.0;
      if ((fVar5 < 0.9) && (fVar6 = 0.0, 0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 / 0.9) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 1.0;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 / 0.9) * 64.0;
          fVar6 = *(float *)(&DAT_01d46b50 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01d46b50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d46b50 + (ulong)uVar3 * 4));
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




undefined8 FUN_015441c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_015441d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_015441e0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 0.25) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar3 = (uint)(fVar4 * 4.0 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar4 * 4.0 * 64.0;
          fVar5 = *(float *)(&DAT_01d3fc50 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01d3fc50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d3fc50 + (ulong)uVar3 * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar5 * 500.0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01544294(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_015442a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015442b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_015442c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015442cc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_015442dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015442e8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40e00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_015442f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42960000;
  return 1;
}




undefined8 FUN_01544308(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3fcccccd;
  return 1;
}




void FUN_0154431c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41551eb8;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01544340(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0154437c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar6 = 1.0;
      if ((fVar5 < 0.9) && (fVar6 = 0.0, 0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 / 0.9) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 1.0;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 / 0.9) * 64.0;
          fVar6 = *(float *)(&DAT_01d46b50 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01d46b50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d46b50 + (ulong)uVar3 * 4));
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




undefined8 FUN_01544438(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01544448(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_01544454(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 0.25) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar3 = (uint)(fVar4 * 4.0 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar4 * 4.0 * 64.0;
          fVar5 = *(float *)(&DAT_01d3fc50 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01d3fc50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d3fc50 + (ulong)uVar3 * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar5 * -500.0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01544508(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01544518(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01544524(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01544534(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01544540(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01544550(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0154455c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40e00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_0154456c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42d20000;
  return 1;
}




undefined8 FUN_0154457c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3fcccccd;
  return 1;
}




void FUN_01544590(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41551eb8;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_015445b4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_015445f0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.0;
      if ((fVar4 < 0.8) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 / 0.8) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 / 0.8) * 64.0;
          fVar5 = *(float *)(&DAT_01d4c150 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01d4c150 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d4c150 + (ulong)uVar3 * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 2;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_015446ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_015446bc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = -1.0;
      if ((fVar5 < 1.0) && (fVar4 = -0.0, 0.8 < fVar5)) {
        fVar5 = (fVar5 + -0.8) / 0.19999999;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = -1.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01d3fd50 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01d3fd50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d3fd50 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar4;
      uVar2 = uVar2 - 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01544784(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_01544790(float param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < param_2) {
    fVar4 = (param_1 + -1.45) / 0.049999952;
    uVar3 = (uint)(fVar4 * 64.0);
    uVar1 = uVar3 + 1;
    bVar2 = param_1 < 1.5;
    fVar4 = fVar4 * 64.0;
    fVar5 = 1.0;
    if (bVar2) {
      fVar5 = 0.0;
    }
    if (bVar2 && 1.45 < param_1) {
      fVar5 = 1.0;
    }
    do {
      fVar6 = fVar5;
      if ((bVar2 && 1.45 < param_1) && uVar1 < 0x40) {
        fVar6 = *(float *)(&DAT_01d3fe50 + (ulong)uVar3 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_01d3fe50 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d3fe50 + (ulong)uVar3 * 4));
      }
      *param_3 = 0;
      param_3[2] = 0;
      param_2 = param_2 + -1;
      param_3[1] = fVar6 * -50.0;
      param_3 = param_3 + 3;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_0154485c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_0154486c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x420c0000;
  return 1;
}




undefined8 FUN_0154487c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01544888(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_01544898(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 5.5 + 0.5;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_01544910(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3eb333333e4ccccd;
  return 1;
}




undefined8 FUN_01544924(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_01544930(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 1.5 + 1.5;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_0154499c(int param_1,undefined4 *param_2)

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




void FUN_015449bc(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40800000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_015449dc(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40600000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_015449fc(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3dcccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01544a20(int param_1,undefined8 *param_2)

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




void FUN_01544a4c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.0;
      if ((fVar4 < 0.8) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 / 0.8) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 / 0.8) * 64.0;
          fVar5 = *(float *)(&DAT_01d4c150 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01d4c150 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d4c150 + (ulong)uVar3 * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 2;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01544b08(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_01544b18(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = -1.0;
      if ((fVar5 < 1.0) && (fVar4 = -0.0, 0.8 < fVar5)) {
        fVar5 = (fVar5 + -0.8) / 0.19999999;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = -1.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01d3fd50 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01d3fd50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d3fd50 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar4;
      uVar2 = uVar2 - 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01544be0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_01544bec(float param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < param_2) {
    fVar4 = (param_1 + -1.45) / 0.049999952;
    uVar3 = (uint)(fVar4 * 64.0);
    uVar1 = uVar3 + 1;
    bVar2 = param_1 < 1.5;
    fVar4 = fVar4 * 64.0;
    fVar5 = 1.0;
    if (bVar2) {
      fVar5 = 0.0;
    }
    if (bVar2 && 1.45 < param_1) {
      fVar5 = 1.0;
    }
    do {
      fVar6 = fVar5;
      if ((bVar2 && 1.45 < param_1) && uVar1 < 0x40) {
        fVar6 = *(float *)(&DAT_01d3fe50 + (ulong)uVar3 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_01d3fe50 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d3fe50 + (ulong)uVar3 * 4));
      }
      *param_3 = 0;
      param_3[2] = 0;
      param_2 = param_2 + -1;
      param_3[1] = fVar6 * -50.0;
      param_3 = param_3 + 3;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_01544cb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_01544cc8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x420c0000;
  return 1;
}




undefined8 FUN_01544cd8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01544ce4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_01544cf4(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 5.5 + 0.5;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_01544d6c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3eb333333dcccccd;
  return 1;
}




undefined8 FUN_01544d80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_01544d8c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 1.5 + 1.5;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01544df8(int param_1,undefined4 *param_2)

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




void FUN_01544e18(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40800000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01544e38(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40600000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01544e58(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3dcccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01544e7c(int param_1,undefined8 *param_2)

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




undefined8 FUN_01544ea8(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0x3f80000000000000;
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01544ebc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01544ecc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01544ed8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_01544ee8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01544ef8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01544f04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01544f14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01544f20(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01544f30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01544f3c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4103333341033333;
  return 1;
}




undefined8 FUN_01544f54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01544f60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3fc00000;
  return 1;
}




void FUN_01544f70(int param_1,undefined4 *param_2)

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




uint FUN_01544f90(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01544fcc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}

