// functions/011c6 — 86 functions
#include "libGameKindred.h"




int FUN_011c6020(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.19999999 + 0.3;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_011c60a0(int param_1,undefined4 *param_2)

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




uint FUN_011c60c0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_011c60fc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_011c6138(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_011c6174(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01c80a04 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c80a04 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c80a04 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_011c622c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011c623c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011c6248(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011c6254(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011c6264(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011c6270(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_011c6280(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011c628c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_011c629c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_011c62b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_011c62c0(int param_1,float *param_2)

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




undefined8 FUN_011c633c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3d4ccccd;
  return 1;
}




uint FUN_011c6350(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_011c638c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_011c63c8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_011c6404(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_011c6440(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.9;
      if ((fVar3 < 1.0) && (fVar4 = 0.1, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.9;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c80504 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01c80504 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c80504 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_011c6500(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011c6510(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011c651c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011c6528(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011c6538(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011c6544(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_011c6554(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011c6560(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_011c6570(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_011c6584(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40c0000040a00000;
  return 1;
}




undefined8 FUN_011c6598(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011c65a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3df5c28f;
  return 1;
}




uint FUN_011c65b8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_011c65f4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_011c6630(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_011c666c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_011c66a8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01c80a04 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c80a04 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c80a04 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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



undefined DAT_01c9cbf0;
undefined DAT_01c80ef0;
undefined DAT_01c80ff0;
undefined DAT_01c810f0;
undefined DAT_01c9bef0;
undefined DAT_01c811f0;
undefined DAT_01c9bcf0;
undefined DAT_01c812f0;
undefined DAT_01c9e0f0;
undefined DAT_01c9d0f0;
undefined DAT_01c976f0;
undefined DAT_01c97df0;
undefined DAT_01c88ff0;
undefined DAT_01c841f0;
undefined DAT_01c952f0;
undefined DAT_01c965f0;
undefined DAT_01c813f0;
undefined DAT_01c814f0;
undefined DAT_01c9dff0;
undefined DAT_01c9f0f0;
undefined DAT_01c9a9f0;
undefined DAT_01c815f0;
undefined DAT_01c816f0;
undefined DAT_01c817f0;
undefined DAT_01c818f0;
undefined DAT_01c819f0;
undefined DAT_01c81af0;
undefined DAT_01c81bf0;
undefined DAT_01c87df0;
undefined DAT_01c81cf0;
undefined DAT_01c9aff0;
undefined DAT_01c9d1f0;
undefined DAT_01c9a4f0;
undefined DAT_01c81df0;
undefined DAT_01c81ef0;
undefined DAT_01c81ff0;
undefined DAT_01c969f0;
undefined DAT_01c820f0;
undefined DAT_01c821f0;
undefined DAT_01c939f0;
undefined DAT_01c822f0;
undefined DAT_01c9fff0;
undefined DAT_01c9b0f0;
undefined DAT_01c9e8f0;
undefined DAT_01c9a0f0;
undefined DAT_01c995f0;
undefined DAT_01c996f0;
undefined DAT_01c823f0;
undefined DAT_01c824f0;
undefined DAT_01c825f0;
undefined DAT_01c826f0;
undefined DAT_01c827f0;
undefined DAT_01c9aaf0;
undefined DAT_01c9abf0;
undefined DAT_01c828f0;
undefined DAT_01c829f0;
undefined DAT_01c82af0;
undefined DAT_01c82bf0;
undefined DAT_01c916f0;
undefined DAT_01c9dcf0;
undefined DAT_01c9e6f0;
undefined DAT_01c980f0;
undefined DAT_01c82cf0;
undefined DAT_01c9c9f0;
undefined DAT_01c92af0;
undefined DAT_01c82df0;
undefined DAT_01c82ef0;
undefined DAT_01c9b1f0;
undefined DAT_01c9b5f0;
undefined DAT_01c9c6f0;
undefined DAT_01c9e2f0;
undefined DAT_01c82ff0;
undefined DAT_01c830f0;
undefined DAT_01c8a2f0;
undefined DAT_01c831f0;
undefined DAT_01c832f0;
undefined DAT_01c833f0;
undefined DAT_01c834f0;
undefined DAT_01c8a7f0;
undefined DAT_01c835f0;
undefined DAT_01c836f0;
undefined DAT_01c837f0;
undefined DAT_01c9baf0;
undefined DAT_01c838f0;
undefined DAT_01c8dff0;
undefined DAT_01c8e0f0;
undefined DAT_01c839f0;
undefined DAT_01c977f0;
undefined DAT_01c9b2f0;
undefined DAT_01c83af0;
undefined DAT_01c9bdf0;
undefined DAT_01c9bbf0;
undefined DAT_01c9c5f0;
undefined DAT_01c9c8f0;
undefined DAT_01c997f0;
undefined DAT_01c998f0;
undefined DAT_01c8c8f0;
undefined DAT_01c83bf0;
undefined DAT_01c9fef0;
undefined DAT_01c93ff0;
undefined DAT_01c9a5f0;
undefined DAT_01c83cf0;
undefined DAT_01c886f0;
undefined DAT_01c984f0;
undefined DAT_01c888f0;
undefined DAT_01c83df0;
undefined DAT_01c83ef0;
undefined DAT_01c83ff0;
undefined DAT_01c903f0;
undefined DAT_01c840f0;
undefined DAT_01c8d9f0;
undefined DAT_01c844f0;
undefined DAT_01c880f0;
undefined DAT_01c881f0;
undefined DAT_01c946f0;
undefined DAT_01c917f0;
undefined DAT_01c98df0;
undefined DAT_01c842f0;
undefined DAT_01c9fcf0;
undefined DAT_01c9dbf0;
undefined DAT_01c9b7f0;
undefined DAT_01c98bf0;
undefined DAT_01c98ef0;
undefined DAT_01c843f0;
undefined DAT_01c845f0;
undefined DAT_01c846f0;
undefined DAT_01c8aef0;
undefined DAT_01c847f0;
undefined DAT_01c848f0;
undefined DAT_01c849f0;
undefined DAT_01c84af0;
undefined DAT_01c84bf0;
undefined DAT_01c84cf0;
undefined DAT_01c84df0;
undefined DAT_01c84ef0;
undefined DAT_01c84ff0;
undefined DAT_01c850f0;
undefined DAT_01c851f0;
undefined DAT_01c852f0;
undefined DAT_01c8cbf0;
undefined DAT_01c968f0;
undefined DAT_01c853f0;
undefined DAT_01c9f2f0;
undefined DAT_01c854f0;
undefined DAT_01c96cf0;
undefined DAT_01c92ff0;
undefined DAT_01c855f0;
undefined DAT_01c856f0;
undefined DAT_01c857f0;
undefined DAT_01c858f0;
undefined DAT_01c94af0;
undefined DAT_01c9cff0;
undefined DAT_01c97ef0;
undefined DAT_01c859f0;
undefined DAT_01c85af0;
undefined DAT_01c85bf0;
undefined DAT_01c9aef0;
undefined DAT_01c85cf0;
undefined DAT_01c85df0;
undefined DAT_01c85ef0;
undefined DAT_01c85ff0;
undefined DAT_01c860f0;
undefined DAT_01c93bf0;
undefined DAT_01c93cf0;
undefined DAT_01c949f0;
undefined DAT_01c959f0;
undefined DAT_01c99df0;
undefined DAT_01c9caf0;
undefined DAT_01c861f0;
undefined DAT_01c862f0;
undefined DAT_01c863f0;
undefined DAT_01c9a3f0;
undefined DAT_01c9ecf0;
undefined DAT_01c864f0;
undefined DAT_01c865f0;
undefined DAT_01c866f0;
undefined DAT_01c867f0;
undefined DAT_01c868f0;
undefined DAT_01c869f0;
undefined DAT_01c86af0;
undefined DAT_01c86bf0;
undefined DAT_01c86cf0;
undefined DAT_01c86df0;
undefined DAT_01c86ef0;
undefined DAT_01c86ff0;
undefined DAT_01c870f0;
undefined DAT_01c871f0;
undefined DAT_01c872f0;
undefined DAT_01c873f0;
undefined DAT_01c874f0;
undefined DAT_01c876f0;
undefined DAT_01c878f0;
undefined DAT_01c875f0;
undefined DAT_01c877f0;
undefined DAT_01c879f0;
undefined DAT_01c87af0;
undefined DAT_01c87bf0;
undefined DAT_01c901f0;
undefined DAT_01c87cf0;
undefined DAT_01c87ef0;
undefined DAT_01c87ff0;
undefined DAT_01c940f0;
undefined DAT_01c999f0;
undefined DAT_01c882f0;
undefined DAT_01c883f0;
undefined DAT_01c884f0;
undefined DAT_01c885f0;
undefined DAT_01c887f0;
undefined DAT_01c9cef0;
undefined DAT_01c92ef0;
undefined DAT_01c889f0;
undefined DAT_01c88bf0;
undefined DAT_01c88af0;
undefined DAT_01c88cf0;
undefined DAT_01c88df0;
undefined DAT_01c88ef0;
undefined DAT_01c890f0;
undefined DAT_01c9e7f0;
undefined DAT_01c891f0;
undefined DAT_01c967f0;
undefined DAT_01c8c6f0;
undefined DAT_01c9eff0;
undefined DAT_01c892f0;
undefined DAT_01c893f0;
undefined DAT_01c894f0;
undefined DAT_01c9cdf0;
undefined DAT_01c963f0;
undefined DAT_01c92bf0;
undefined DAT_01c895f0;
undefined DAT_01c896f0;
undefined DAT_01c897f0;
undefined DAT_01c898f0;
undefined DAT_01c89af0;
undefined DAT_01c899f0;
undefined DAT_01c89bf0;
undefined DAT_01c89cf0;
undefined DAT_01c89df0;
undefined DAT_01c9ddf0;
undefined DAT_01c8eef0;
undefined DAT_01c9edf0;
undefined DAT_01c89ef0;
undefined DAT_01c89ff0;
undefined DAT_01c8a0f0;
undefined DAT_01c8a1f0;
undefined DAT_01c8a3f0;
undefined DAT_01c8a4f0;
undefined DAT_01c8a5f0;
undefined DAT_01c8a6f0;
undefined DAT_01c8a8f0;
undefined DAT_01c8a9f0;
undefined DAT_01c8aaf0;
undefined DAT_01c96ff0;
undefined DAT_01c98af0;
undefined DAT_01c8abf0;
undefined DAT_01c8e8f0;
undefined DAT_01c8acf0;
undefined DAT_01c8adf0;
undefined DAT_01c8aff0;
undefined DAT_01c945f0;
undefined DAT_01c979f0;
undefined DAT_01c8baf0;
undefined DAT_01c8bbf0;
undefined DAT_01c8b2f0;
undefined DAT_01c8b0f0;
undefined DAT_01c8b1f0;
undefined DAT_01c8b3f0;
undefined DAT_01c8b4f0;
undefined DAT_01c8b5f0;
undefined DAT_01c8b6f0;
undefined DAT_01c8b7f0;
undefined DAT_01c8b8f0;
undefined DAT_01c8b9f0;
undefined DAT_01c8bcf0;
undefined DAT_01c8bdf0;
undefined DAT_01c8bef0;
undefined DAT_01c9bff0;
undefined DAT_01c9c0f0;
undefined DAT_01c9c2f0;
undefined DAT_01c9c3f0;
undefined DAT_01c8bff0;
undefined DAT_01c8c0f0;
undefined DAT_01c8c1f0;
undefined DAT_01c9d2f0;
undefined DAT_01c8c2f0;
undefined DAT_01c8e3f0;
undefined DAT_01c91ff0;
undefined DAT_01c920f0;
undefined DAT_01c8c3f0;
undefined DAT_01c8c4f0;
undefined DAT_01c96df0;
undefined DAT_01c8c5f0;
undefined DAT_01c8c7f0;
undefined DAT_01c8c9f0;
undefined DAT_01c8caf0;
undefined DAT_01c8ccf0;
undefined DAT_01c97bf0;
undefined DAT_01c8cdf0;
undefined DAT_01c8cef0;
undefined DAT_01c8cff0;
undefined DAT_01c8d0f0;
undefined DAT_01c8d1f0;
undefined DAT_01c8d2f0;
undefined DAT_01c8d3f0;
undefined DAT_01c96bf0;
undefined DAT_01c8d4f0;
undefined DAT_01c8d5f0;
undefined DAT_01c8d6f0;
undefined DAT_01c8d7f0;
undefined DAT_01c99af0;
undefined DAT_01c8d8f0;
undefined DAT_01c8daf0;
undefined DAT_01c8dbf0;
undefined DAT_01c9c7f0;
undefined DAT_01c8dcf0;
undefined DAT_01c8ddf0;
undefined DAT_01c8def0;
undefined DAT_01c8e1f0;
undefined DAT_01c8e2f0;
undefined DAT_01c8e4f0;
undefined DAT_01c8e5f0;
undefined DAT_01c8eaf0;
undefined DAT_01c9a8f0;
undefined DAT_01c8e6f0;
undefined DAT_01c8e7f0;
undefined DAT_01c8e9f0;
undefined DAT_01c8ebf0;
undefined DAT_01c8ecf0;
undefined DAT_01c983f0;
undefined DAT_01c985f0;
undefined DAT_01c986f0;
undefined DAT_01c8edf0;
undefined DAT_01c987f0;
undefined DAT_01c988f0;
undefined DAT_01c989f0;
undefined DAT_01c8eff0;
undefined DAT_01c8f0f0;
undefined DAT_01c9d9f0;
undefined DAT_01c98ff0;
undefined DAT_01c992f0;
undefined DAT_01c90af0;
undefined DAT_01c8f1f0;
undefined DAT_01c8f2f0;
undefined DAT_01c8f3f0;
undefined DAT_01c8f4f0;
undefined DAT_01c8f5f0;
undefined DAT_01c8f6f0;
undefined DAT_01c8f8f0;
undefined DAT_01c8f9f0;
undefined DAT_01c8f7f0;
undefined DAT_01c8faf0;
undefined DAT_01c8fbf0;
undefined DAT_01c8fcf0;
undefined DAT_01c8fdf0;
undefined DAT_01c8fef0;
undefined DAT_01c8fff0;
undefined DAT_01c900f0;
undefined DAT_01c902f0;
undefined DAT_01c904f0;
undefined DAT_01c905f0;
undefined DAT_01c906f0;
undefined DAT_01c907f0;
undefined DAT_01c908f0;
undefined DAT_01c909f0;
undefined DAT_01c90bf0;
undefined DAT_01c9a2f0;
undefined DAT_01c90cf0;
undefined DAT_01c90df0;
undefined DAT_01c90ef0;
undefined DAT_01c910f0;
undefined DAT_01c911f0;
undefined DAT_01c90ff0;
undefined DAT_01c912f0;
undefined DAT_01c913f0;
undefined DAT_01c914f0;
undefined DAT_01c915f0;
undefined DAT_01c9e3f0;
undefined DAT_01c94df0;
undefined DAT_01c918f0;
undefined DAT_01c919f0;
undefined DAT_01c91af0;
undefined DAT_01c91bf0;
undefined DAT_01c91cf0;
undefined DAT_01c91df0;
undefined DAT_01c91ef0;
undefined DAT_01c921f0;
undefined DAT_01c922f0;
undefined DAT_01c923f0;
undefined DAT_01c924f0;
undefined DAT_01c925f0;
undefined DAT_01c926f0;
undefined DAT_01c927f0;
undefined DAT_01c928f0;
undefined DAT_01c929f0;
undefined DAT_01c92cf0;
undefined DAT_01c92df0;

undefined8 FUN_011c6760(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011c6770(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_011c6780(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011c678c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011c679c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011c67a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_011c67b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011c67c4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_011c67d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_011c67e8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_011c67f8(int param_1,float *param_2)

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




undefined8 FUN_011c6874(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_011c6888(int param_1,undefined4 *param_2)

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




uint FUN_011c68a8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_011c68e4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01c80a04 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c80a04 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c80a04 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_011c699c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011c69ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011c69b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011c69c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011c69d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011c69e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_011c69f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011c69fc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_011c6a0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_011c6a20(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40c00000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_011c6a30(int param_1,float *param_2)

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




undefined8 FUN_011c6aac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3d4ccccd;
  return 1;
}




uint FUN_011c6ac0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_011c6afc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_011c6b38(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_011c6b74(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_011c6bb0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.0;
      fVar7 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = 0.0;
      fVar5 = 0.0;
      if (fVar7 < 1.0) {
        fVar6 = 1.0;
        fVar5 = 1.0;
        if (0.0 < fVar7) {
          uVar3 = (uint)(fVar7 * 64.0);
          uVar1 = uVar3 + 1;
          fVar7 = fVar7 * 64.0;
          fVar5 = 0.0;
          fVar6 = 0.0;
          if (uVar1 < 0x40) {
            fVar6 = *(float *)(&DAT_01c80604 + (ulong)uVar3 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_01c80604 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01c80604 + (ulong)uVar3 * 4));
            fVar5 = *(float *)(&DAT_01c80704 + (ulong)uVar3 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_01c80704 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01c80704 + (ulong)uVar3 * 4));
          }
        }
      }
      *param_3 = fVar6;
      param_3[1] = fVar5;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      if ((fVar5 < 1.0) && (fVar4 = 1.0, 0.7 < fVar5)) {
        fVar5 = (fVar5 + -0.7) / 0.3;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01c80804 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c80804 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c80804 + (ulong)uVar3 * 4));
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




undefined8 FUN_011c6d18(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011c6d28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbe99999a;
  return 1;
}




undefined8 FUN_011c6d3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_011c6d48(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar3 = rand();
      *param_2 = ((float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + -1.0) * 0.0;
      param_2[1] = -5.0;
      iVar1 = iVar1 + -1;
      param_2[2] = ((float)iVar3 * 4.656613e-10 + (float)iVar3 * 4.656613e-10 + -1.0) * 0.0;
      param_2 = param_2 + 3;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_011c6dec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




int FUN_011c6dfc(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 14.0 + 6.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_011c6e74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011c6e80(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_011c6e90(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 13.0 + 2.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_011c6f08(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f4ccccd3e19999a;
  return 1;
}




undefined8 FUN_011c6f1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_011c6f28(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.39999998 + 0.3;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_011c6fa8(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x43713333;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_011c6fcc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}

