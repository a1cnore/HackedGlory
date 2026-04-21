// functions/00d09 — 47 functions
#include "libGameKindred.h"




undefined1  [16]
FUN_00d090c4(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar5 [16];
  
  uVar2 = FUN_00d9eb64();
  lVar3 = FUN_00d53914(uVar2,param_2);
  uVar4 = FUN_00d4c67c(*(undefined8 *)(lVar3 + 0xb0),param_3);
  iVar1 = FUN_00d535a4(uVar2,param_2);
  if ((iVar1 == 0) && ((param_5 & 1) == 0)) {
    return ZEXT816(0);
  }
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  FUN_00d08e88(param_1,uVar4,iVar1,param_4);
  auVar5._4_4_ = extraout_var;
  auVar5._0_4_ = extraout_s0;
  auVar5._8_8_ = extraout_var_00;
  return auVar5;
}




void FUN_00d09160(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_00d9ebbc();
  uVar2 = FUN_00d7b424(uVar2,*param_2);
  lVar3 = FUN_00d7ade4();
  uVar4 = FUN_00d4c67c(*(undefined8 *)(lVar3 + 0x28),param_3);
  uVar1 = FUN_00d7ae38(uVar2);
  FUN_00d08e88(param_1,uVar4,uVar1,param_4);
  return;
}




void FUN_00d091cc(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d4ee0c(*(undefined8 *)(param_2 + 0x1a8),param_3);
  FUN_00d08728(param_1,uVar1,param_4);
  return;
}




void FUN_00d09208(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,param_2);
  uVar1 = FUN_00d4ee0c(*(undefined8 *)(lVar2 + 0x1a8),param_3);
  FUN_00d08728(param_1,uVar1,param_4);
  return;
}




void FUN_00d0925c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00cea0b0(param_2);
  uVar2 = FUN_00d4c67c(*(undefined8 *)(lVar1 + 0xb0),param_3);
  FUN_00d08e88(param_1,uVar2,1,param_4);
  return;
}




undefined1  [16]
FUN_00d092ac(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  if (param_1 != 0) {
    FUN_00d5cf60();
    lVar1 = FUN_00d9e390();
    if (lVar1 != 0) {
      FUN_00d59f54(lVar1,param_2,param_3,param_4,param_5 & 1);
      auVar2._4_4_ = extraout_var;
      auVar2._0_4_ = extraout_s0;
      auVar2._8_8_ = extraout_var_00;
      return auVar2;
    }
  }
  return ZEXT816(0);
}




void FUN_00d09310(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d6eb50();
  FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return;
}




float FUN_00d09330(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x54) + param_1;
}




float FUN_00d09384(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return *(float *)(lVar2 + 8) + param_1;
}




float FUN_00d093b8(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return *(float *)(lVar2 + 0xc) + param_1;
}




float FUN_00d093ec(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x40) + param_1;
}




float FUN_00d09440(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x70) + param_1;
}




float FUN_00d09494(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x2c) + param_1;
}




float FUN_00d094e8(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x84) + param_1;
}




float FUN_00d0953c(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0xa0) + param_1;
}




float FUN_00d09590(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0xc0) + param_1;
}




float FUN_00d095e4(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0xe8) + param_1;
}




float FUN_00d09638(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0xfc) + param_1;
}




float FUN_00d0968c(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x10c) + param_1;
}




float FUN_00d096e0(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x120) + param_1;
}




float FUN_00d09734(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x134) + param_1;
}




float FUN_00d09788(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x14c) + param_1;
}




float FUN_00d097dc(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x160) + param_1;
}




float FUN_00d09830(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x184) + param_1;
}




float FUN_00d09884(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x1b0) + param_1;
}




float FUN_00d098d8(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x1c8) + param_1;
}




float FUN_00d0992c(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x1dc) + param_1;
}




float FUN_00d09980(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x200) + param_1;
}




float FUN_00d099d4(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x21c) + param_1;
}




float FUN_00d09a28(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x238) + param_1;
}




float FUN_00d09a7c(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x254) + param_1;
}




float FUN_00d09ad0(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x274) + param_1;
}




float FUN_00d09b24(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x288) + param_1;
}




float FUN_00d09b78(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x2a8) + param_1;
}




float FUN_00d09bcc(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x2cc) + param_1;
}




float FUN_00d09c20(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x2ec) + param_1;
}




float FUN_00d09c74(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x304) + param_1;
}




float FUN_00d09cc8(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x324) + param_1;
}




float FUN_00d09d1c(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x34c) + param_1;
}




float FUN_00d09d70(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x368) + param_1;
}




float FUN_00d09dc4(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x380) + param_1;
}




float FUN_00d09e18(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x3a4) + param_1;
}




float FUN_00d09e6c(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x3b8) + param_1;
}




float FUN_00d09ec0(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x3cc) + param_1;
}




float FUN_00d09f14(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x3ec) + param_1;
}




float FUN_00d09f68(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x408) + param_1;
}




float FUN_00d09fbc(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,"*KindredSoundBalance*");
  return fVar3 + *(float *)(lVar2 + 0x42c) + param_1;
}

