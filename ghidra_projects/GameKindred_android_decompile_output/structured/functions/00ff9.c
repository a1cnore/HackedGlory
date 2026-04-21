// functions/00ff9 — 86 functions
#include "libGameKindred.h"




void FUN_00ff9018(int param_1,undefined4 *param_2)

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




void FUN_00ff9038(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3fc00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_00ff9058(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c36240 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01c36240 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c36240 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar4;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 2;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_00ff9100(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00ff9110(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00ff911c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00ff9128(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00ff9138(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00ff9144(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_00ff9154(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_00ff9164(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_00ff9174(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00ff9180(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4089999a4089999a;
  return 1;
}




undefined8 FUN_00ff9198(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00ff91a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




void FUN_00ff91b4(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x4328d70a;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_00ff91d8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_00ff9214(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (0 < (int)param_2) {
    fVar4 = 0.6;
    uVar2 = (ulong)param_2;
    do {
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar7 = 1.0;
      fVar6 = fVar4;
      if (fVar5 < 1.0) {
        fVar7 = 0.1;
        if (-0.0 < fVar5) {
          uVar3 = (uint)((fVar5 + 0.0) * 64.0);
          uVar1 = uVar3 + 1;
          fVar7 = 1.0;
          if (uVar1 < 0x40) {
            fVar7 = (fVar5 + 0.0) * 64.0;
            fVar7 = *(float *)(&DAT_01c35040 + (ulong)uVar3 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_01c35040 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01c35040 + (ulong)uVar3 * 4));
          }
        }
        if (0.0 < fVar5) {
          uVar1 = (int)(fVar5 * 64.0) + 1;
          if (uVar1 < 0x40) {
            fVar6 = *(float *)(&DAT_01c26940 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                    (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                    (*(float *)(&DAT_01c26940 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01c26940 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
          }
        }
      }
      *param_3 = fVar7;
      param_3[1] = fVar6;
      param_3[2] = 0.0;
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar7 = 0.0;
      if ((fVar6 < 1.0) && (-0.0 < fVar6)) {
        fVar7 = 0.0;
        uVar3 = (uint)((fVar6 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar7 = (fVar6 + 0.0) * 64.0;
          fVar7 = *(float *)(&DAT_01c1f740 + (ulong)uVar3 * 4) +
                  (fVar7 - (float)(int)fVar7) *
                  (*(float *)(&DAT_01c1f740 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c1f740 + (ulong)uVar3 * 4));
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




undefined8 FUN_00ff9390(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00ff93a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_00ff93b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00ff93bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00ff93cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00ff93d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_00ff93e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00ff93f4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_00ff9404(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_00ff9418(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_00ff9428(int param_1,float *param_2)

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




undefined8 FUN_00ff94a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




uint FUN_00ff94b8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_00ff94f4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_00ff9530(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar6 = 0.0, -0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 1.0;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01c1f840 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01c1f840 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c1f840 + (ulong)uVar3 * 4));
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




undefined8 FUN_00ff95f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00ff9600(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_00ff9610(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_00ff9620(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00ff9630(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_00ff9640(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_00ff9650(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_00ff9660(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_00ff9670(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.2 + -0.1;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}



undefined DAT_01c1f940;
undefined DAT_01c2c440;
undefined DAT_01c1fc40;
undefined DAT_01c1fa40;
undefined DAT_01c1fb40;
undefined DAT_01c1fd40;
undefined DAT_01c1fe40;
undefined DAT_01c26740;
undefined DAT_01c1ff40;
undefined DAT_01c31c40;
undefined DAT_01c20040;
undefined DAT_01c31f40;
undefined DAT_01c32040;
undefined DAT_01c20140;
undefined DAT_01c32e40;
undefined DAT_01c28840;
undefined DAT_01c28940;
undefined DAT_01c20240;
undefined DAT_01c20340;
undefined DAT_01c34340;
undefined DAT_01c36e40;
undefined DAT_01c20440;
undefined DAT_01c20540;
undefined DAT_01c20640;
undefined DAT_01c20740;
undefined DAT_01c20840;
undefined DAT_01c20940;
undefined DAT_01c20a40;
undefined DAT_01c20b40;
undefined DAT_01c20c40;
undefined DAT_01c2e540;
undefined DAT_01c20d40;
undefined DAT_01c20e40;
undefined DAT_01c20f40;
undefined DAT_01c21040;
undefined DAT_01c21140;
undefined DAT_01c25440;
undefined DAT_01c27c40;
undefined DAT_01c21240;
undefined DAT_01c21340;
undefined DAT_01c21440;
undefined DAT_01c2e740;
undefined DAT_01c34a40;
undefined DAT_01c21640;
undefined DAT_01c21740;
undefined DAT_01c2fe40;
undefined DAT_01c21840;
undefined DAT_01c21940;
undefined DAT_01c21a40;
undefined DAT_01c33740;
undefined DAT_01c38240;
undefined DAT_01c21c40;
undefined DAT_01c21d40;
undefined DAT_01c21e40;
undefined DAT_01c28740;
undefined DAT_01c22040;
undefined DAT_01c21f40;
undefined DAT_01c28540;
undefined DAT_01c36640;
undefined DAT_01c37f40;
undefined DAT_01c22140;
undefined DAT_01c22240;
undefined DAT_01c22340;
undefined DAT_01c22440;
undefined DAT_01c22540;
undefined DAT_01c22640;
undefined DAT_01c2c140;
undefined DAT_01c22740;
undefined DAT_01c22d40;
undefined DAT_01c22840;
undefined DAT_01c24b40;
undefined DAT_01c37640;
undefined DAT_01c22b40;
undefined DAT_01c22c40;
undefined DAT_01c22e40;
undefined DAT_01c22f40;
undefined DAT_01c2c940;
undefined DAT_01c36540;
undefined DAT_01c23040;
undefined DAT_01c36a40;
undefined DAT_01c2df40;
undefined DAT_01c35140;
undefined DAT_01c23240;
undefined DAT_01c2dc40;
undefined DAT_01c23340;
undefined DAT_01c23440;
undefined DAT_01c23540;
undefined DAT_01c23640;
undefined DAT_01c23840;
undefined DAT_01c23740;
undefined DAT_01c30040;
undefined DAT_01c29540;
undefined DAT_01c23a40;
undefined DAT_01c23b40;
undefined DAT_01c23c40;
undefined DAT_01c2d940;
undefined DAT_01c37240;
undefined DAT_01c2c540;
undefined DAT_01c23e40;
undefined DAT_01c23f40;
undefined DAT_01c24040;
undefined DAT_01c36b40;
undefined DAT_01c24140;
undefined DAT_01c24240;
undefined DAT_01c24340;
undefined DAT_01c24440;
undefined DAT_01c24540;
undefined DAT_01c24640;
undefined DAT_01c33a40;
undefined DAT_01c34140;
undefined DAT_01c24740;
undefined DAT_01c26140;
undefined DAT_01c24940;
undefined DAT_01c24a40;
undefined DAT_01c24c40;
undefined DAT_01c2eb40;
undefined DAT_01c24d40;
undefined DAT_01c26640;
undefined DAT_01c27e40;
undefined DAT_01c24e40;
undefined DAT_01c24f40;
undefined DAT_01c26f40;
undefined DAT_01c25040;
undefined DAT_01c25140;
undefined DAT_01c25240;
undefined DAT_01c32540;
undefined DAT_01c25340;
undefined DAT_01c2f940;
undefined DAT_01c25540;
undefined DAT_01c28a40;
undefined DAT_01c33b40;
undefined DAT_01c25640;
undefined DAT_01c34940;
undefined DAT_01c25740;
undefined DAT_01c25840;
undefined DAT_01c25940;
undefined DAT_01c25a40;
undefined DAT_01c25b40;
undefined DAT_01c25c40;
undefined DAT_01c25d40;
undefined DAT_01c25e40;
undefined DAT_01c25f40;
undefined DAT_01c26040;
undefined DAT_01c26440;
undefined DAT_01c33340;
undefined DAT_01c26240;
undefined DAT_01c26340;
undefined DAT_01c2b940;
undefined DAT_01c26540;
undefined DAT_01c29e40;
undefined DAT_01c26840;
undefined DAT_01c26a40;
undefined DAT_01c26b40;
undefined DAT_01c26c40;
undefined DAT_01c2e140;
undefined DAT_01c26d40;
undefined DAT_01c26e40;
undefined DAT_01c27040;
undefined DAT_01c27140;
undefined DAT_01c2cc40;
undefined DAT_01c2cd40;
undefined DAT_01c27240;
undefined DAT_01c2cf40;
undefined DAT_01c2d040;
undefined DAT_01c27340;
undefined DAT_01c27440;
undefined DAT_01c2fa40;
undefined DAT_01c34c40;
undefined DAT_01c27540;
undefined DAT_01c27640;
undefined DAT_01c27740;
undefined DAT_01c38640;
undefined DAT_01c27840;
undefined DAT_01c27940;
undefined DAT_01c27a40;
undefined DAT_01c27b40;
undefined DAT_01c38740;
undefined DAT_01c27f40;
undefined DAT_01c28040;
undefined DAT_01c28140;
undefined DAT_01c28240;
undefined DAT_01c28340;
undefined DAT_01c28440;
undefined DAT_01c28640;
undefined DAT_01c2c040;
undefined DAT_01c28b40;
undefined DAT_01c28c40;
undefined DAT_01c28d40;
undefined DAT_01c28e40;
undefined DAT_01c28f40;
undefined DAT_01c29040;
undefined DAT_01c29140;
undefined DAT_01c29240;
undefined DAT_01c29340;
undefined DAT_01c29440;
undefined DAT_01c2b740;
undefined DAT_01c2b840;
undefined DAT_01c29640;
undefined DAT_01c29740;
undefined DAT_01c2c840;
undefined DAT_01c29940;
undefined DAT_01c29a40;
undefined DAT_01c29b40;
undefined DAT_01c29c40;
undefined DAT_01c29d40;
undefined DAT_01c29f40;
undefined DAT_01c30840;
undefined DAT_01c2a040;
undefined DAT_01c2a140;
undefined DAT_01c2a240;
undefined DAT_01c2a340;
undefined DAT_01c2a440;
undefined DAT_01c2a540;
undefined DAT_01c2a640;
undefined DAT_01c2a740;
undefined DAT_01c2a840;
undefined DAT_01c2a940;
undefined DAT_01c2aa40;
undefined DAT_01c37840;
undefined DAT_01c2b440;
undefined DAT_01c37340;
undefined DAT_01c37540;
undefined DAT_01c37440;
undefined DAT_01c2ab40;
undefined DAT_01c2be40;
undefined DAT_01c2ac40;
undefined DAT_01c2ad40;
undefined DAT_01c2ae40;
undefined DAT_01c2af40;
undefined DAT_01c2b040;
undefined DAT_01c2b140;
undefined DAT_01c2b240;
undefined DAT_01c30240;
undefined DAT_01c2b540;
undefined DAT_01c2b640;
undefined DAT_01c2ba40;
undefined DAT_01c2bd40;
undefined DAT_01c2bb40;
undefined DAT_01c2bc40;
undefined DAT_01c2bf40;
undefined DAT_01c2c340;
undefined DAT_01c2c640;
undefined DAT_01c2c740;
undefined DAT_01c2ca40;
undefined DAT_01c2cb40;
undefined DAT_01c2ce40;
undefined DAT_01c2d140;
undefined DAT_01c2d240;
undefined DAT_01c33d40;
undefined DAT_01c2d340;
undefined DAT_01c2d440;
undefined DAT_01c2d540;
undefined DAT_01c2d640;
undefined4 DAT_01c1b3c0;
undefined DAT_01c2d740;
undefined DAT_01c2d840;
undefined DAT_01c2db40;
undefined DAT_01c2dd40;
undefined DAT_01c2de40;
undefined DAT_01c2e040;
undefined DAT_01c2e240;
undefined DAT_01c2e340;
undefined DAT_01c2e440;
undefined DAT_01c2e640;
undefined DAT_01c2e840;
undefined DAT_01c2e940;
undefined DAT_01c2ea40;
undefined DAT_01c2ec40;
undefined DAT_01c2ed40;
undefined DAT_01c2ee40;
undefined DAT_01c2ef40;
undefined DAT_01c2f040;
undefined DAT_01c2f140;
undefined DAT_01c2f440;
undefined DAT_01c2f540;
undefined DAT_01c2f240;
undefined DAT_01c2f640;
undefined DAT_01c2f740;
undefined DAT_01c2f840;
undefined DAT_01c2fc40;
undefined DAT_01c2fd40;
undefined DAT_01c2ff40;
undefined DAT_01c30140;
undefined DAT_01c30340;
undefined DAT_01c30540;
undefined DAT_01c30640;
undefined DAT_01c30740;
undefined DAT_01c30940;
undefined DAT_01c30b40;
undefined DAT_01c30c40;
undefined DAT_01c30d40;
undefined DAT_01c30e40;
undefined DAT_01c32940;
undefined DAT_01c31040;
undefined DAT_01c31140;
undefined DAT_01c31240;
undefined DAT_01c31340;
undefined DAT_01c31440;
undefined DAT_01c31540;
undefined DAT_01c31740;
undefined DAT_01c31640;
undefined DAT_01c31840;
undefined DAT_01c31940;
undefined DAT_01c31a40;
undefined DAT_01c31b40;
undefined DAT_01c31d40;
undefined DAT_01c31e40;
undefined DAT_01c32140;
undefined DAT_01c32f40;
undefined DAT_01c32340;
undefined DAT_01c32440;
undefined DAT_01c32640;
undefined DAT_01c32740;
undefined DAT_01c32840;
undefined DAT_01c32b40;
undefined DAT_01c33440;
undefined DAT_01c32c40;
undefined DAT_01c32d40;
undefined DAT_01c33040;
undefined DAT_01c33140;
undefined DAT_01c33240;
undefined DAT_01c33540;
undefined DAT_01c33640;
undefined DAT_01c33840;
undefined DAT_01c33940;
undefined DAT_01c34440;
undefined DAT_01c34840;
undefined DAT_01c34540;
undefined DAT_01c34740;
undefined DAT_01c34d40;
undefined DAT_01c34f40;

undefined8 FUN_00ff96f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f0000003f000000;
  return 1;
}




int FUN_00ff9700(int param_1,float *param_2)

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




int FUN_00ff977c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.3 + 0.7;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_00ff97fc(int param_1,undefined4 *param_2)

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




void FUN_00ff981c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3fc00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_00ff983c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar5 < 0.9) && (0.1 < fVar5)) {
        fVar5 = (fVar5 + -0.1) / 0.79999995;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01c1f940 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c1f940 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c1f940 + (ulong)uVar3 * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar4;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 2;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_00ff9908(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




uint FUN_00ff9918(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar4 = (ulong)param_2;
    do {
      fVar6 = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      if ((fVar5 < 0.8) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 / 0.8) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar5 / 0.8) * 64.0;
          fVar6 = *(float *)(&DAT_01c35240 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c35240 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c35240 + (ulong)uVar3 * 4));
        }
      }
      iVar2 = rand();
      uVar4 = uVar4 - 1;
      *param_3 = fVar6 * ((float)iVar2 * -4.656613e-10 * 0.20000002 + -0.1);
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar4 != 0);
  }
  return param_2;
}




undefined8 FUN_00ff9a50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00ff9a5c(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0x4120000000000000;
  return 1;
}




undefined8 FUN_00ff9a74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_00ff9a84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_00ff9a94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00ff9aa0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_00ff9ab0(int param_1,float *param_2)

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




undefined8 FUN_00ff9b1c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f4000003dcccccd;
  return 1;
}




undefined8 FUN_00ff9b30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_00ff9b3c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.4 + 0.1;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_00ff9bbc(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x42b40000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_00ff9bdc(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3f800000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_00ff9bfc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (fVar4 = 1.0, 0.8 < fVar5)) {
        fVar5 = (fVar5 + -0.8) / 0.19999999;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01c34e40 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c34e40 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c34e40 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (fVar4 = 0.4, 0.6 < fVar5)) {
        fVar5 = (fVar5 + -0.6) / 0.39999998;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01c2c440 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c2c440 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c2c440 + (ulong)uVar3 * 4));
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




undefined8 FUN_00ff9d54(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00ff9d64(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_00ff9d74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00ff9d80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00ff9d90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00ff9d9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_00ff9dac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00ff9db8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_00ff9dc8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00ff9dd4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_00ff9de4(int param_1,float *param_2)

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




undefined8 FUN_00ff9e60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




void FUN_00ff9e70(int param_1,undefined4 *param_2)

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




uint FUN_00ff9e90(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_00ff9ecc(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, -0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 + 0.0) * 64.0;
          fVar5 = *(float *)(&DAT_01c38340 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c38340 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c38340 + (ulong)uVar3 * 4));
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




undefined8 FUN_00ff9f8c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00ff9f9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00ff9fa8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00ff9fb4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00ff9fc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00ff9fd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_00ff9fe0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_00ff9ff0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}

