// functions/01154 — 86 functions
#include "libGameKindred.h"




undefined8 FUN_0115400c(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0x4000000000000000;
  return 1;
}




undefined8 FUN_01154024(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_01154034(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_01154044(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01154050(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_01154060(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 6.0 + 4.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_011540d8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3e4ccccd;
  return 1;
}




int FUN_011540f0(int param_1,float *param_2)

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




int FUN_0115416c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.5 + 0.5;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_011541d8(int param_1,undefined4 *param_2)

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




uint FUN_011541f8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01154234(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01154270(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_011542ac(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar5 = -0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01c71904 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c71904 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c71904 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_01154364(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01154374(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}




undefined8 FUN_01154384(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01154390(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011543a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_011543b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011543bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x447a0000;
  return 1;
}




undefined8 FUN_011543cc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_011543dc(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.0 + 1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_01154454(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f00000000000000;
  return 1;
}




undefined8 FUN_01154468(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01154474(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e19999a;
  return 1;
}




void FUN_01154488(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < param_2) {
    fVar6 = (param_1 + 0.0) / 0.2;
    uVar3 = (uint)(fVar6 * 64.0);
    uVar1 = uVar3 + 1;
    bVar2 = param_1 < 0.2;
    fVar6 = fVar6 * 64.0;
    fVar4 = 1.0;
    if (bVar2) {
      fVar4 = 0.0;
    }
    if (bVar2 && -0.0 < param_1) {
      fVar4 = 1.0;
    }
    do {
      fVar5 = fVar4;
      if ((bVar2 && -0.0 < param_1) && uVar1 < 0x40) {
        fVar5 = *(float *)(&DAT_01c76f04 + (ulong)uVar3 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_01c76f04 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c76f04 + (ulong)uVar3 * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar5 * 360.0;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




void FUN_0115453c(int param_1,undefined4 *param_2)

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




uint FUN_0115455c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01154598(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




int FUN_011545d4(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar3 = rand();
      *param_2 = (float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + -1.0;
      param_2[1] = 1.0;
      iVar1 = iVar1 + -1;
      param_2[2] = (float)iVar3 * 4.656613e-10 + (float)iVar3 * 4.656613e-10 + -1.0;
      param_2 = param_2 + 3;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_0115466c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar5 = -0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01c71904 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c71904 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c71904 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_01154724(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01154734(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




void FUN_01154744(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c7fd04 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01c7fd04 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c7fd04 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar4 * -3000.0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_011547ec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011547fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01154808(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01154818(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01154824(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01154834(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01154840(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40f00000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_01154850(int param_1,float *param_2)

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




undefined8 FUN_011548cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




void FUN_011548dc(int param_1,undefined4 *param_2)

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




uint FUN_011548fc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01154938(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01154974(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_011549b0(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0x3f800000;
      param_1 = param_1 + -1;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (param_1 != 0);
  }
  return;
}




void FUN_011549d8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar5 = -0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01c71904 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c71904 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c71904 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_01154a90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}



undefined DAT_01c65804;
undefined DAT_01c7c604;
undefined DAT_01c7a404;
undefined DAT_01c65904;
undefined DAT_01c65a04;
undefined DAT_01c6d304;
undefined DAT_01c6d704;
undefined DAT_01c65b04;
undefined DAT_01c80304;
undefined DAT_01c65c04;
undefined DAT_01c65d04;
undefined DAT_01c7a804;
undefined DAT_01c73904;
undefined DAT_01c67a04;
undefined DAT_01c65e04;
undefined DAT_01c65f04;
undefined DAT_01c66004;
undefined DAT_01c66104;
undefined DAT_01c66204;
undefined DAT_01c66304;
undefined DAT_01c66404;
undefined DAT_01c66504;
undefined DAT_01c66604;
undefined DAT_01c6fd04;
undefined DAT_01c66704;
undefined DAT_01c7d404;
undefined DAT_01c66804;
undefined DAT_01c66904;
undefined DAT_01c66a04;
undefined DAT_01c66b04;
undefined DAT_01c66c04;
undefined DAT_01c66d04;
undefined DAT_01c66e04;
undefined DAT_01c6a604;
undefined DAT_01c7eb04;
undefined DAT_01c66f04;
undefined DAT_01c67004;
undefined DAT_01c7aa04;
undefined DAT_01c67404;
undefined DAT_01c67504;
undefined DAT_01c67604;
undefined DAT_01c67804;
undefined DAT_01c67904;
undefined DAT_01c67c04;
undefined DAT_01c67d04;
undefined DAT_01c67e04;
undefined DAT_01c67f04;
undefined DAT_01c68004;
undefined DAT_01c68104;
undefined DAT_01c68204;
undefined DAT_01c68304;
undefined DAT_01c7b504;
undefined DAT_01c79204;
undefined DAT_01c68404;
undefined DAT_01c68504;
undefined DAT_01c68604;
undefined DAT_01c6f804;
undefined DAT_01c6f904;
undefined DAT_01c6fa04;
undefined DAT_01c6fb04;
undefined DAT_01c6fc04;
undefined DAT_01c6fe04;
undefined DAT_01c6ff04;
undefined DAT_01c74504;
undefined DAT_01c68704;
undefined DAT_01c72604;
undefined DAT_01c68904;
undefined DAT_01c68a04;
undefined DAT_01c68d04;
undefined DAT_01c68b04;
undefined DAT_01c68e04;
undefined DAT_01c68c04;
undefined DAT_01c7dc04;
undefined DAT_01c68f04;
undefined DAT_01c6ca04;
undefined DAT_01c71f04;
undefined DAT_01c69004;
undefined DAT_01c69104;
undefined DAT_01c76e04;
undefined DAT_01c69204;
undefined DAT_01c69304;
undefined DAT_01c69704;
undefined DAT_01c69404;
undefined DAT_01c69504;
undefined DAT_01c69604;
undefined DAT_01c69904;
undefined DAT_01c69a04;
undefined DAT_01c69b04;
undefined DAT_01c69c04;
undefined DAT_01c6b604;
undefined DAT_01c7da04;
undefined DAT_01c7e404;
undefined DAT_01c69e04;
undefined DAT_01c69f04;
undefined DAT_01c7c304;
undefined DAT_01c7ff04;
undefined DAT_01c6a004;
undefined DAT_01c7af04;
undefined DAT_01c7b004;
undefined DAT_01c6a104;
undefined DAT_01c7b104;
undefined DAT_01c6a204;
undefined DAT_01c7bc04;
undefined DAT_01c6a304;
undefined DAT_01c6a504;
undefined DAT_01c6a704;
undefined DAT_01c6a804;
undefined DAT_01c6a904;
undefined DAT_01c6aa04;
undefined DAT_01c6ab04;
undefined DAT_01c6ac04;
undefined DAT_01c6f204;
undefined DAT_01c6ad04;
undefined DAT_01c5cf20;
undefined DAT_01c6ae04;
undefined DAT_01c6b104;
undefined DAT_01c6b204;
undefined DAT_01c74c04;
undefined DAT_01c6b404;
undefined DAT_01c6b504;
undefined DAT_01c6b704;
undefined DAT_01c6cb04;
undefined DAT_01c6b904;
undefined DAT_01c76104;
undefined DAT_01c6bd04;
undefined DAT_01c6c904;
undefined DAT_01c74404;
undefined DAT_01c6f404;
undefined DAT_01c6bf04;
undefined DAT_01c6c004;
undefined DAT_01c6c104;
undefined DAT_01c6c204;
undefined DAT_01c6c304;
undefined DAT_01c6c404;
undefined DAT_01c6c504;
undefined DAT_01c6c604;
undefined DAT_01c6c704;
undefined DAT_01c75604;
undefined DAT_01c6cd04;
undefined DAT_01c6ce04;
undefined DAT_01c6d004;
undefined DAT_01c6cf04;
undefined DAT_01c78104;
undefined DAT_01c6d204;
undefined DAT_01c6d404;
undefined DAT_01c6d504;
undefined DAT_01c6d604;
undefined DAT_01c6d804;
undefined DAT_01c6e404;
undefined DAT_01c6d904;
undefined DAT_01c6da04;
undefined DAT_01c6db04;
undefined DAT_01c6dc04;
undefined DAT_01c6dd04;
undefined DAT_01c6de04;
undefined DAT_01c6df04;
undefined DAT_01c6e004;
undefined DAT_01c6e104;
undefined DAT_01c6e204;
undefined DAT_01c6e304;
undefined DAT_01c6e504;
undefined DAT_01c6e604;
undefined DAT_01c6e704;
undefined DAT_01c6e804;
undefined DAT_01c6e904;
undefined DAT_01c6ea04;
undefined DAT_01c6eb04;
undefined DAT_01c6ec04;
undefined DAT_01c6ed04;
undefined DAT_01c6ee04;
undefined DAT_01c6ef04;
undefined DAT_01c80b04;
undefined DAT_01c6f004;
undefined DAT_01c73504;
undefined DAT_01c7f304;
undefined DAT_01c80004;
undefined DAT_01c7a304;
undefined DAT_01c6f704;
undefined DAT_01c70d04;
undefined DAT_01c70004;
undefined DAT_01c70104;
undefined DAT_01c70204;
undefined DAT_01c70304;
undefined DAT_01c70404;
undefined DAT_01c70604;
undefined DAT_01c70704;
undefined DAT_01c70804;
undefined DAT_01c70904;
undefined DAT_01c70504;
undefined DAT_01c70b04;
undefined DAT_01c70a04;
undefined DAT_01c70c04;
undefined DAT_01c70e04;
undefined DAT_01c70f04;
undefined DAT_01c71004;
undefined DAT_01c71104;
undefined DAT_01c71204;
undefined DAT_01c71304;
undefined DAT_01c71404;
undefined DAT_01c71504;
undefined DAT_01c71604;
undefined DAT_01c71804;
undefined DAT_01c71a04;
undefined DAT_01c71b04;
undefined DAT_01c71d04;
undefined DAT_01c71e04;
undefined DAT_01c71c04;
undefined DAT_01c72204;
undefined DAT_01c72404;
undefined DAT_01c72504;
undefined DAT_01c72704;
undefined DAT_01c72804;
undefined DAT_01c72904;
undefined DAT_01c72a04;
undefined DAT_01c72b04;
undefined DAT_01c72e04;
undefined DAT_01c72f04;
undefined DAT_01c73004;
undefined DAT_01c73104;
undefined DAT_01c73304;
undefined DAT_01c73404;
undefined DAT_01c73604;
undefined DAT_01c73804;
undefined DAT_01c7cc04;
undefined DAT_01c73d04;
undefined DAT_01c74004;
undefined DAT_01c73e04;
undefined DAT_01c73f04;
undefined DAT_01c74204;
undefined DAT_01c74804;
undefined DAT_01c7f104;
undefined DAT_01c74904;
undefined DAT_01c74a04;
undefined DAT_01c74b04;
undefined DAT_01c74e04;
undefined DAT_01c74f04;
undefined DAT_01c75104;
undefined DAT_01c75204;
undefined DAT_01c75404;
undefined DAT_01c75304;
undefined DAT_01c75504;
undefined DAT_01c75804;
undefined DAT_01c75a04;
undefined DAT_01c75b04;
undefined DAT_01c75e04;
undefined DAT_01c75f04;
undefined DAT_01c76004;
undefined DAT_01c76204;
undefined DAT_01c76304;
undefined DAT_01c76504;
undefined DAT_01c76704;
undefined DAT_01c76804;
undefined DAT_01c76904;
undefined DAT_01c76b04;
undefined DAT_01c76d04;
undefined DAT_01c77204;
undefined DAT_01c77404;
undefined DAT_01c77504;
undefined DAT_01c77604;
undefined DAT_01c77804;
undefined DAT_01c77a04;
undefined DAT_01c77b04;
undefined DAT_01c77c04;
undefined DAT_01c77d04;
undefined DAT_01c78604;
undefined DAT_01c78b04;
undefined DAT_01c77e04;
undefined DAT_01c77f04;
undefined DAT_01c78004;
undefined DAT_01c78204;
undefined DAT_01c78304;
undefined DAT_01c78404;
undefined DAT_01c78504;
undefined DAT_01c78704;
undefined DAT_01c78804;
undefined DAT_01c78904;
undefined DAT_01c78a04;
undefined DAT_01c78c04;
undefined DAT_01c78d04;
undefined DAT_01c78e04;
undefined DAT_01c78f04;
undefined DAT_01c79004;
undefined DAT_01c79104;
undefined DAT_01c79304;
undefined DAT_01c79404;
undefined DAT_01c79504;
undefined DAT_01c79804;
undefined DAT_01c79904;
undefined DAT_01c79a04;
undefined DAT_01c79b04;
undefined DAT_01c79604;
undefined DAT_01c79704;
undefined DAT_01c79c04;
undefined DAT_01c79d04;
undefined DAT_01c79e04;
undefined DAT_01c79f04;
undefined DAT_01c7a604;
undefined DAT_01c7a704;
undefined DAT_01c7c904;
undefined DAT_01c7ab04;
undefined DAT_01c7ac04;
undefined DAT_01c7ae04;
undefined DAT_01c7ad04;
undefined DAT_01c7b204;
undefined DAT_01c7b304;
undefined DAT_01c7b404;
undefined DAT_01c7b604;
undefined DAT_01c7b704;
undefined DAT_01c7b804;
undefined DAT_01c7b904;
undefined DAT_01c7ba04;
undefined DAT_01c7bf04;
undefined DAT_01c7c004;
undefined DAT_01c7c504;
undefined DAT_01c7c404;
undefined DAT_01c7c704;
undefined DAT_01c7c804;
undefined DAT_01c7ca04;
undefined DAT_01c7cb04;
undefined DAT_01c7ce04;
undefined DAT_01c7cd04;
undefined DAT_01c7d004;
undefined DAT_01c7d204;
undefined DAT_01c7d304;
undefined DAT_01c7d604;
undefined DAT_01c7d704;
undefined DAT_01c7d804;
undefined DAT_01c7d904;
undefined DAT_01c7df04;
undefined DAT_01c7e004;
undefined DAT_01c7e104;
undefined DAT_01c7e204;
undefined DAT_01c7e304;
undefined DAT_01c7e504;
undefined DAT_01c7e604;
undefined DAT_01c7e704;
undefined DAT_01c7e804;
undefined DAT_01c7ea04;
undefined DAT_01c7f204;
undefined DAT_01c7f904;
undefined DAT_01c7f404;
undefined DAT_01c7f504;
undefined DAT_01c7f604;
undefined DAT_01c7f704;
undefined DAT_01c7fb04;
undefined DAT_01c7fc04;
undefined DAT_01c80104;
undefined DAT_01c80504;

undefined8 FUN_01154aa0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




void FUN_01154ab0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c7fd04 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01c7fd04 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c7fd04 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar4 * -1000.0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01154b58(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01154b68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01154b74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01154b84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01154b90(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01154ba0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01154bac(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_01154bbc(int param_1,float *param_2)

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




undefined8 FUN_01154c38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




void FUN_01154c48(int param_1,undefined4 *param_2)

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




uint FUN_01154c68(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01154ca4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01154ce0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01154d1c(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0x3f800000;
      param_1 = param_1 + -1;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (param_1 != 0);
  }
  return;
}




void FUN_01154d44(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar5 = -0.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01c65804 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c65804 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c65804 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_01154dfc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01154e0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01154e1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43960000;
  return 1;
}




undefined8 FUN_01154e2c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01154e3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01154e48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01154e58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01154e64(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01154e74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01154e80(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01154e90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc1f00000;
  return 1;
}




undefined8 FUN_01154ea0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




uint FUN_01154eb4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01154ef0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01154f2c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01c7fd04 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c7fd04 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c7fd04 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_01154fdc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01154fec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01154ff8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}

