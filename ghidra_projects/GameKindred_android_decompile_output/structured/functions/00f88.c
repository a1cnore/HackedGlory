// functions/00f88 — 116 functions
#include "libGameKindred.h"




undefined8 FUN_00f88048(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00f88058(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f88064(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f88070(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00f88080(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f8808c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_00f8809c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f880a8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_00f880b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f880c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x406000003fc00000;
  return 1;
}




undefined8 FUN_00f880d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42340000;
  return 1;
}




undefined8 FUN_00f880e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e19999a;
  return 1;
}




uint FUN_00f880fc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_00f88138(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_00f88174(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_00f88184(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f88190(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_00f881a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f881ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x406000003fc00000;
  return 1;
}




undefined8 FUN_00f881c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42f00000;
  return 1;
}




undefined8 FUN_00f881d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e19999a;
  return 1;
}




uint FUN_00f881e4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_00f88220(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_00f8825c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01c1a480 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c1a480 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c1a480 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.5 < fVar4)) {
        fVar4 = fVar4 + -0.5 + fVar4 + -0.5;
        uVar3 = (uint)(fVar4 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = fVar4 * 64.0;
          fVar5 = *(float *)(&DAT_01c0af80 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01c0af80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c0af80 + (ulong)uVar3 * 4));
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




undefined8 FUN_00f8837c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00f8838c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f88398(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc49c4000;
  return 1;
}




undefined8 FUN_00f883ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00f883bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_00f883cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_00f883dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f883e8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_00f883f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_00f88408(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40e00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_00f88418(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42200000;
  return 1;
}




undefined8 FUN_00f88428(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




uint FUN_00f8843c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_00f88478(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_00f884b4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_00f884f0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_00f8852c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_00f8853c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00f8854c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




undefined8 FUN_00f8855c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f88568(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xc170000000000000;
  return 1;
}




undefined8 FUN_00f88580(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_00f88590(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_00f885a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f885ac(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_00f885bc(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 5.0 + 5.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_00f88628(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x404000003f800000;
  return 1;
}




undefined8 FUN_00f8863c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




int FUN_00f8864c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.1 + 0.1;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_00f886bc(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x42340000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_00f886dc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_00f88718(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    uVar3 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar3;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01c1a980 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c1a980 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c1a980 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_00f887c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00f887d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_00f887e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f887f4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00f88804(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f88810(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_00f88820(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f8882c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_00f8883c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_00f88850(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4080000040400000;
  return 1;
}




undefined8 FUN_00f88864(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}



undefined DAT_01c07880;
undefined DAT_01c07980;
undefined DAT_01c07a80;
undefined DAT_01c07b80;
undefined DAT_01c07c80;
undefined DAT_01c07d80;
undefined DAT_01c07e80;
undefined DAT_01c07f80;
undefined DAT_01c08080;
undefined DAT_01c0bd80;
undefined DAT_01c0c780;
undefined DAT_01c08180;
undefined DAT_01c08280;
undefined DAT_01c08380;
undefined DAT_01c08480;
undefined DAT_01c08580;
undefined DAT_01c08680;
undefined DAT_01c08780;
undefined DAT_01c08880;
undefined DAT_01c08980;
undefined DAT_01c1a780;
undefined DAT_01c08a80;
undefined DAT_01c08b80;
undefined DAT_01c15c80;
undefined DAT_01c14880;
undefined DAT_01c08c80;
undefined DAT_01c08e80;
undefined DAT_01c08f80;
undefined DAT_01c19f80;
undefined DAT_01c09080;
undefined DAT_01c09180;
undefined DAT_01c09280;
undefined DAT_01c09380;
undefined DAT_01c09480;
undefined DAT_01c09580;
undefined DAT_01c09680;
undefined DAT_01c09780;
undefined DAT_01c0c580;
undefined DAT_01c13480;
undefined DAT_01c09a80;
undefined DAT_01c09b80;
undefined DAT_01c09c80;
undefined DAT_01c09d80;
undefined DAT_01c09e80;
undefined DAT_01c09f80;
undefined DAT_01c0a080;
undefined DAT_01c0a180;
undefined DAT_01c0aa80;
undefined DAT_01c0ab80;
undefined DAT_01c0ac80;
undefined DAT_01c0ad80;
undefined DAT_01c0ae80;
undefined DAT_01c13f80;
undefined DAT_01c0b280;
undefined DAT_01c0b480;
undefined DAT_01c0b580;
undefined DAT_01c0b680;
undefined DAT_01c0b780;
undefined DAT_01c0b880;
undefined DAT_01c0b980;
undefined DAT_01c0ba80;
undefined DAT_01c0bb80;
undefined DAT_01c0bc80;
undefined DAT_01c0be80;
undefined DAT_01c0c180;
undefined DAT_01c0c280;
undefined DAT_01c0c680;
undefined DAT_01c0c980;
undefined DAT_01c0ca80;
undefined DAT_01c0cb80;
undefined DAT_01c0cc80;
undefined DAT_01c0cd80;
undefined DAT_01c11580;
undefined DAT_01c0cf80;
undefined DAT_01c0d080;
undefined DAT_01c0d180;
undefined DAT_01c0d280;
undefined DAT_01c0d380;
undefined DAT_01c0d480;
undefined DAT_01c0d580;
undefined DAT_01c17480;
undefined DAT_01c0d680;
undefined DAT_01c0d880;
undefined DAT_01c0d980;
undefined DAT_01c0da80;
undefined DAT_01c0db80;
undefined DAT_01c0de80;
undefined DAT_01c0e080;
undefined DAT_01c0e480;
undefined DAT_01c0e580;
undefined DAT_01c0e680;
undefined DAT_01c0e780;
undefined DAT_01c0e880;
undefined DAT_01c0eb80;
undefined DAT_01c0ea80;
undefined DAT_01c18480;
undefined DAT_01c0ec80;
undefined DAT_01c0ed80;
undefined DAT_01c0ee80;
undefined DAT_01c0f080;
undefined DAT_01c0f180;
undefined DAT_01c0f280;
undefined DAT_01c0f380;
undefined DAT_01c0f480;
undefined DAT_01c0f580;
undefined DAT_01c0f880;
undefined DAT_01c0fa80;
undefined DAT_01c0f980;
undefined DAT_01c0f680;
undefined DAT_01c0fb80;
undefined DAT_01c0fc80;
undefined DAT_01c0fd80;
undefined DAT_01c0fe80;
undefined DAT_01c10180;
undefined DAT_01c10080;
undefined DAT_01c13580;
undefined DAT_01c10380;
undefined DAT_01c10480;
undefined DAT_01c10580;
undefined DAT_01c10680;
undefined DAT_01c10780;
undefined DAT_01c11180;
undefined DAT_01c10880;
undefined DAT_01c10980;
undefined DAT_01c10a80;
undefined DAT_01c10b80;
undefined DAT_01c10d80;
undefined DAT_01c10e80;
undefined DAT_01c11280;
undefined DAT_01c11380;
undefined DAT_01c18680;
undefined DAT_01c11680;
undefined DAT_01c11880;
undefined DAT_01c11980;
undefined DAT_01c11a80;
undefined DAT_01c11b80;
undefined DAT_01c11f80;
undefined DAT_01c12080;
undefined DAT_01c12180;
undefined DAT_01c12280;
undefined DAT_01c12380;
undefined DAT_01c12480;
undefined DAT_01c12580;
undefined DAT_01c12980;
undefined DAT_01c12a80;
undefined DAT_01c13080;
undefined DAT_01c12b80;
undefined DAT_01c12e80;
undefined DAT_01c12f80;
undefined DAT_01c13180;
undefined DAT_01c13280;
undefined DAT_01c13380;
undefined DAT_01c13680;
undefined DAT_01c13780;
undefined DAT_01c13880;
undefined DAT_01c13980;
undefined DAT_01c13b80;
undefined DAT_01c13e80;
undefined DAT_01c14080;
undefined DAT_01c14180;
undefined DAT_01c14280;
undefined DAT_01c14380;
undefined DAT_01c14480;
undefined DAT_01c14580;
undefined DAT_01c14680;
undefined DAT_01c14b80;
undefined DAT_01c14780;
undefined DAT_01c14f80;
undefined DAT_01c14d80;
undefined DAT_01c15080;
undefined DAT_01c15180;
undefined DAT_01c15280;
undefined DAT_01c15580;
undefined DAT_01c16280;
undefined DAT_01c15780;
undefined DAT_01c15880;
undefined DAT_01c15b80;
undefined DAT_01c15d80;
undefined DAT_01c15e80;
undefined DAT_01c15f80;
undefined DAT_01c16580;
undefined DAT_01c16680;
undefined DAT_01c16780;
undefined DAT_01c16880;
undefined DAT_01c16980;
undefined DAT_01c16a80;
undefined DAT_01c16c80;
undefined DAT_01c16f80;
undefined DAT_01c17580;
undefined DAT_01c17880;
undefined DAT_01c17b80;
undefined DAT_01c17c80;
undefined DAT_01c17d80;
undefined DAT_01c17f80;
undefined DAT_01c18080;
undefined DAT_01c18280;
undefined DAT_01c18880;
undefined DAT_01c18980;
undefined DAT_01c18a80;
undefined DAT_01c18b80;
undefined DAT_01c18c80;
undefined DAT_01c18d80;
undefined DAT_01c18e80;
undefined DAT_01c18f80;
undefined DAT_01c19080;
undefined DAT_01c19180;
undefined DAT_01c19280;
undefined4 DAT_01bf8c28;
undefined DAT_01c19380;
undefined DAT_01c19580;
undefined DAT_01c19680;
undefined DAT_01c19780;
undefined DAT_01c19e80;
undefined DAT_01c1a080;
undefined DAT_01c1a580;
undefined DAT_01c1a680;
undefined DAT_01c1ac80;
undefined DAT_01c37940;
undefined DAT_01c1b440;
undefined DAT_01c1d540;
undefined DAT_01c35240;
undefined DAT_01c1b540;
undefined DAT_01c1b640;
undefined DAT_01c2da40;
undefined DAT_01c38340;
undefined DAT_01c1b740;
undefined DAT_01c30f40;
undefined DAT_01c38140;
undefined DAT_01c1b840;
undefined DAT_01c1b940;
undefined DAT_01c34b40;
undefined DAT_01c36940;
undefined DAT_01c1ba40;
undefined DAT_01c1bb40;
undefined DAT_01c1bc40;
undefined DAT_01c23140;
undefined DAT_01c1c940;
undefined DAT_01c1ca40;
undefined DAT_01c23d40;
undefined DAT_01c23940;
undefined DAT_01c1bd40;
undefined DAT_01c1be40;
undefined DAT_01c1bf40;
undefined DAT_01c34240;
undefined DAT_01c1c040;
undefined DAT_01c1c140;
undefined DAT_01c1c240;
undefined DAT_01c1eb40;
undefined DAT_01c1c340;
undefined DAT_01c36d40;
undefined DAT_01c1c440;
undefined DAT_01c1c540;
undefined DAT_01c1c640;
undefined DAT_01c34640;
undefined DAT_01c36740;
undefined DAT_01c1c740;
undefined DAT_01c37740;
undefined DAT_01c1c840;
undefined DAT_01c2c240;
undefined DAT_01c1cb40;
undefined DAT_01c27d40;
undefined DAT_01c1cc40;
undefined DAT_01c1cd40;
undefined DAT_01c1ce40;
undefined DAT_01c1cf40;
undefined DAT_01c1d040;
undefined DAT_01c1d140;
undefined DAT_01c1d240;
undefined DAT_01c2fb40;
undefined DAT_01c1d340;
undefined DAT_01c33f40;
undefined DAT_01c34040;
undefined DAT_01c35040;
undefined DAT_01c24840;
undefined DAT_01c2f340;
undefined DAT_01c32a40;
undefined DAT_01c29840;
undefined DAT_01c1d440;
undefined DAT_01c1d640;
undefined DAT_01c1d740;
undefined DAT_01c1d840;
undefined DAT_01c1d940;
undefined DAT_01c36140;
undefined DAT_01c21540;
undefined DAT_01c1da40;
undefined DAT_01c36f40;
undefined DAT_01c1db40;
undefined DAT_01c1dc40;
undefined DAT_01c1dd40;
undefined DAT_01c1de40;
undefined DAT_01c1df40;
undefined DAT_01c36040;
undefined DAT_01c1e040;
undefined DAT_01c32240;
undefined DAT_01c22a40;
undefined DAT_01c36840;
undefined DAT_01c1e140;
undefined DAT_01c1e240;
undefined DAT_01c1e340;
undefined DAT_01c1e440;
undefined DAT_01c1e540;
undefined DAT_01c1e640;
undefined DAT_01c2b340;
undefined DAT_01c1e740;
undefined DAT_01c1e840;
undefined DAT_01c1e940;
undefined DAT_01c1ea40;
undefined DAT_01c1ec40;
undefined DAT_01c33e40;
undefined DAT_01c30440;
undefined DAT_01c1ed40;
undefined DAT_01c1ee40;
undefined DAT_01c1ef40;
undefined DAT_01c37c40;
undefined DAT_01c1f040;
undefined DAT_01c1f140;
undefined DAT_01c22940;
undefined DAT_01c30a40;
undefined DAT_01c33c40;
undefined DAT_01c1f240;
undefined DAT_01c1f340;
undefined DAT_01c1f440;
undefined DAT_01c34e40;
undefined DAT_01c1f540;
undefined DAT_01c21b40;
undefined DAT_01c1f640;
undefined DAT_01c1f840;
undefined DAT_01c36240;
undefined DAT_01c1f740;
undefined DAT_01c26940;

undefined8 FUN_00f88874(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




uint FUN_00f88888(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_00f888c4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_00f88900(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    uVar3 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar3;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01c1a980 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c1a980 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c1a980 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_00f889b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00f889c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_00f889d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f889dc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00f889ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f889f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_00f88a08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f88a14(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_00f88a24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_00f88a38(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_00f88a48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_00f88a58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




uint FUN_00f88a6c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_00f88aa8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_00f88ae4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    uVar3 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar3;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01c1a980 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c1a980 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c1a980 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_00f88b94(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00f88ba4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_00f88bb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f88bc0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00f88bd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f88bdc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_00f88bec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f88bf8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_00f88c08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_00f88c1c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




undefined8 FUN_00f88c2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_00f88c3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




uint FUN_00f88c50(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_00f88c8c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_00f88cc8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = -0.0;
      if ((fVar6 < 1.0) && (fVar5 = 1.0, 0.1 < fVar6)) {
        fVar6 = (fVar6 + -0.1) / 0.9;
        uVar3 = (uint)(fVar6 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar6 = fVar6 * 64.0;
          fVar5 = *(float *)(&DAT_01c1aa80 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01c1aa80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c1aa80 + (ulong)uVar3 * 4));
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




undefined8 FUN_00f88da0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00f88db0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f88dbc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f88dc8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00f88dd8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f88de4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_00f88df4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f88e00(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_00f88e10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_00f88e20(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_00f88e30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f88e3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e19999a;
  return 1;
}




void FUN_00f88e50(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x4177ae14;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_00f88e74(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_00f88eb0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar6 = 0.0;
      fVar7 = 1.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = -0.0;
      if (fVar5 < 1.0) {
        fVar4 = 1.0;
        if (0.0 < fVar5) {
          uVar1 = (int)(fVar5 * 64.0) + 1;
          fVar4 = -0.0;
          if (uVar1 < 0x40) {
            fVar4 = *(float *)(&DAT_01c0c380 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                    (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                    (*(float *)(&DAT_01c0c380 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01c0c380 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
          }
        }
        fVar6 = 1.0;
        if (0.7 < fVar5) {
          fVar7 = (fVar5 + -0.7) / 0.3;
          uVar3 = (uint)(fVar7 * 64.0);
          uVar1 = uVar3 + 1;
          fVar6 = 0.0;
          if (uVar1 < 0x40) {
            fVar7 = fVar7 * 64.0;
            fVar6 = *(float *)(&DAT_01c17a80 + (ulong)uVar3 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_01c17a80 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01c17a80 + (ulong)uVar3 * 4));
          }
        }
        fVar7 = 0.0;
        if (0.0 < fVar5) {
          uVar1 = (int)(fVar5 * 64.0) + 1;
          if (uVar1 < 0x40) {
            fVar7 = *(float *)(&DAT_01c1a480 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                    (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                    (*(float *)(&DAT_01c1a480 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01c1a480 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
          }
          else {
            fVar7 = 1.0;
          }
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar6;
      param_3[2] = fVar7;
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar7 = 1.0;
      if ((fVar6 < 1.0) && (fVar7 = 0.0, -0.0 < fVar6)) {
        uVar3 = (uint)((fVar6 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar7 = 1.0;
        if (uVar1 < 0x40) {
          fVar7 = (fVar6 + 0.0) * 64.0;
          fVar7 = *(float *)(&DAT_01c1a480 + (ulong)uVar3 * 4) +
                  (fVar7 - (float)(int)fVar7) *
                  (*(float *)(&DAT_01c1a480 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c1a480 + (ulong)uVar3 * 4));
        }
      }
      param_3[3] = fVar7;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}

