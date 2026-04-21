// functions/1004b — 497 functions
#include "GameKindred.h"




void FUN_1004b1528(void)

{
  long lVar1;
  
  if ((DAT_101862f38 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856398,1,"KindredSoundBalance",0x790,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018610e8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101862f30;
    DAT_101862f38 = 1;
  }
  return;
}




void FUN_1004b1588(void)

{
  long lVar1;
  
  if ((DAT_101862f40 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018563b8,3,"KindredSoundBalance*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856398;
    DAT_101862f40 = 1;
  }
  return;
}




void FUN_1004b15e0(void)

{
  long lVar1;
  
  if ((DAT_101862f48 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018563d0,3,"KindredSoundBalance**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018563b8;
    DAT_101862f48 = 1;
  }
  return;
}




void FUN_1004b1638(void)

{
  if ((DAT_101862f70 & 1) == 0) {
    DAT_101862f50 = 0;
    DAT_101862f54 = 0;
    DAT_101862f58 = PTR_DAT_101873138;
    DAT_101862f78 = DAT_101862f78 + 2;
    DAT_101862f60 = 0;
    DAT_101862f64 = 8;
    DAT_101862f68 = PTR_DAT_1018730c0;
    DAT_101862f70 = 1;
  }
  return;
}




void FUN_1004b169c(void)

{
  long lVar1;
  
  if ((DAT_101862f80 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018563e8,1,"Perk",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101862f50;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101862f78;
    DAT_101862f80 = 1;
  }
  return;
}




void FUN_1004b16fc(void)

{
  long lVar1;
  
  if ((DAT_101862f88 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856408,3,"Perk*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018563e8;
    DAT_101862f88 = 1;
  }
  return;
}




void FUN_1004b1754(void)

{
  long lVar1;
  
  if ((DAT_101862f90 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856420,3,"Perk**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856408;
    DAT_101862f90 = 1;
  }
  return;
}




void FUN_1004b17ac(void)

{
  if ((DAT_101862fc8 & 1) == 0) {
    DAT_101862f98 = 0;
    DAT_101862f9c = 0;
    DAT_101862fa0 = PTR_DAT_101873138;
    DAT_101862fa8 = 0;
    DAT_101862fac = 8;
    DAT_101862fb0 = PTR_DAT_1018730f0;
    DAT_101862fd0 = DAT_101862fd0 + 3;
    DAT_101862fb8 = 0;
    DAT_101862fbc = 0xc;
    DAT_101862fc0 = PTR_DAT_1018730c0;
    DAT_101862fc8 = 1;
  }
  return;
}




void FUN_1004b182c(void)

{
  long lVar1;
  
  if ((DAT_101862fd8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856440,1,"StaticEntityParameter",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101862f98;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101862fd0;
    DAT_101862fd8 = 1;
  }
  return;
}




void FUN_1004b188c(void)

{
  long lVar1;
  
  if ((DAT_101862fe0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856460,3,"StaticEntityParameter*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856440;
    DAT_101862fe0 = 1;
  }
  return;
}




void FUN_1004b18e4(void)

{
  long lVar1;
  
  if ((DAT_101862fe8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856478,3,"StaticEntityParameter**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856460;
    DAT_101862fe8 = 1;
  }
  return;
}




void FUN_1004b193c(void)

{
  if ((DAT_101863040 & 1) == 0) {
    DAT_101862ff0 = 0;
    DAT_101862ff4 = 0;
    DAT_101862ff8 = PTR_DAT_101873138;
    DAT_101863000 = 0;
    DAT_101863004 = 8;
    DAT_101863008 = PTR_DAT_101873138;
    DAT_101863010 = 0;
    DAT_101863014 = 0x10;
    DAT_101863018 = PTR_DAT_1018550e0;
    DAT_101863020 = 0;
    DAT_101863024 = 0x14;
    DAT_101863028 = PTR_DAT_1018730c0;
    DAT_101863048 = DAT_101863048 + 5;
    DAT_101863030 = 0;
    DAT_101863034 = 0x18;
    DAT_101863038 = PTR_DAT_101856490;
    DAT_101863040 = 1;
  }
  return;
}




void FUN_1004b19e0(void)

{
  long lVar1;
  
  if ((DAT_101863050 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856498,1,"StaticEntityEntry",0x20,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101862ff0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863048;
    DAT_101863050 = 1;
  }
  return;
}




void FUN_1004b1a40(void)

{
  long lVar1;
  
  if ((DAT_101863058 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018564b8,3,"StaticEntityEntry*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856498;
    DAT_101863058 = 1;
  }
  return;
}




void FUN_1004b1a98(void)

{
  long lVar1;
  
  if ((DAT_101863060 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018564d0,3,"StaticEntityEntry**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018564b8;
    DAT_101863060 = 1;
  }
  return;
}




void FUN_1004b1af0(void)

{
  if ((DAT_101863088 & 1) == 0) {
    DAT_101863068 = 0;
    DAT_10186306c = 0;
    DAT_101863070 = PTR_DAT_1018730d8;
    DAT_101863090 = DAT_101863090 + 2;
    DAT_101863078 = 0;
    DAT_10186307c = 8;
    DAT_101863080 = PTR_DAT_101873138;
    DAT_101863088 = 1;
  }
  return;
}




void FUN_1004b1b54(void)

{
  long lVar1;
  
  if ((DAT_101863098 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018564f0,1,"Effect",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863068;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863090;
    DAT_101863098 = 1;
  }
  return;
}




void FUN_1004b1bb4(void)

{
  long lVar1;
  
  if ((DAT_1018630a0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856510,3,"Effect*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018564f0;
    DAT_1018630a0 = 1;
  }
  return;
}




void FUN_1004b1c0c(void)

{
  long lVar1;
  
  if ((DAT_1018630a8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856528,3,"Effect**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856510;
    DAT_1018630a8 = 1;
  }
  return;
}




void FUN_1004b1c64(void)

{
  if ((DAT_1018630e0 & 1) == 0) {
    DAT_1018630b0 = 0;
    DAT_1018630b4 = 0;
    DAT_1018630b8 = PTR_DAT_101873138;
    DAT_1018630c0 = 0;
    DAT_1018630c4 = 8;
    DAT_1018630c8 = PTR_DAT_101873138;
    DAT_1018630e8 = DAT_1018630e8 + 3;
    DAT_1018630d0 = 0;
    DAT_1018630d4 = 0x10;
    DAT_1018630d8 = PTR_DAT_101856540;
    DAT_1018630e0 = 1;
  }
  return;
}




void FUN_1004b1cd4(void)

{
  long lVar1;
  
  if ((DAT_1018630f0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856548,1,"EffectGroup",0x18,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018630b0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018630e8;
    DAT_1018630f0 = 1;
  }
  return;
}




void FUN_1004b1d34(void)

{
  long lVar1;
  
  if ((DAT_1018630f8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856568,3,"EffectGroup*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856548;
    DAT_1018630f8 = 1;
  }
  return;
}




void FUN_1004b1d8c(void)

{
  long lVar1;
  
  if ((DAT_101863100 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856580,3,"EffectGroup**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856568;
    DAT_101863100 = 1;
  }
  return;
}




void FUN_1004b1de4(void)

{
  if ((DAT_101863118 & 1) == 0) {
    DAT_101863120 = DAT_101863120 + 1;
    DAT_101863108 = 0;
    DAT_10186310c = 0;
    DAT_101863110 = PTR_DAT_101856598;
    DAT_101863118 = 1;
  }
  return;
}




void FUN_1004b1e28(void)

{
  long lVar1;
  
  if ((DAT_101863128 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018565a0,1,"EffectSet",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863108;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863120;
    DAT_101863128 = 1;
  }
  return;
}




void FUN_1004b1e88(void)

{
  long lVar1;
  
  if ((DAT_101863130 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018565c0,3,"EffectSet*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018565a0;
    DAT_101863130 = 1;
  }
  return;
}




void FUN_1004b1ee0(void)

{
  long lVar1;
  
  if ((DAT_101863138 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018565d8,3,"EffectSet**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018565c0;
    DAT_101863138 = 1;
  }
  return;
}




void FUN_1004b1f38(void)

{
  if ((DAT_1018631a0 & 1) == 0) {
    DAT_101863140 = 0;
    DAT_101863144 = 0;
    DAT_101863148 = PTR_DAT_101873138;
    DAT_101863150 = 0;
    DAT_101863154 = 8;
    DAT_101863158 = PTR_DAT_101873138;
    DAT_101863160 = 0;
    DAT_101863164 = 0x10;
    DAT_101863168 = PTR_DAT_101873138;
    DAT_101863170 = 0;
    DAT_101863174 = 0x18;
    DAT_101863178 = PTR_DAT_1018730c0;
    DAT_101863180 = 0;
    DAT_101863184 = 0x1c;
    DAT_101863188 = PTR_DAT_101873118;
    DAT_1018631a8 = DAT_1018631a8 + 6;
    DAT_101863190 = 0;
    DAT_101863194 = 0x20;
    DAT_101863198 = PTR_DAT_101872d78;
    DAT_1018631a0 = 1;
  }
  return;
}




void FUN_1004b1ff4(void)

{
  long lVar1;
  
  if ((DAT_1018631b0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018565f0,1,"SpawnStage",0x28,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863140;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018631a8;
    DAT_1018631b0 = 1;
  }
  return;
}




void FUN_1004b2054(void)

{
  long lVar1;
  
  if ((DAT_1018631b8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856610,3,"SpawnStage*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018565f0;
    DAT_1018631b8 = 1;
  }
  return;
}




void FUN_1004b20ac(void)

{
  long lVar1;
  
  if ((DAT_1018631c0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856628,3,"SpawnStage**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856610;
    DAT_1018631c0 = 1;
  }
  return;
}




void FUN_1004b2104(void)

{
  if ((DAT_101863348 & 1) == 0) {
    DAT_1018631c8 = 0;
    DAT_1018631cc = 0;
    DAT_1018631d0 = PTR_DAT_101873138;
    DAT_1018631d8 = 0;
    DAT_1018631dc = 8;
    DAT_1018631e0 = PTR_DAT_101873138;
    DAT_1018631e8 = 0;
    DAT_1018631ec = 0x10;
    DAT_1018631f0 = PTR_DAT_101873138;
    DAT_1018631f8 = 0;
    DAT_1018631fc = 0x18;
    DAT_101863200 = PTR_DAT_101873138;
    DAT_101863208 = 0;
    DAT_10186320c = 0x20;
    DAT_101863210 = PTR_DAT_101873118;
    DAT_101863218 = 0;
    DAT_10186321c = 0x21;
    DAT_101863220 = PTR_DAT_101873118;
    DAT_101863228 = 0;
    DAT_10186322c = 0x22;
    DAT_101863230 = PTR_DAT_101873118;
    DAT_101863238 = 0;
    DAT_10186323c = 0x23;
    DAT_101863240 = PTR_DAT_101873118;
    DAT_101863248 = 0;
    DAT_10186324c = 0x24;
    DAT_101863250 = PTR_DAT_101873118;
    DAT_101863258 = 0;
    DAT_10186325c = 0x25;
    DAT_101863260 = PTR_DAT_101873118;
    DAT_101863268 = 0;
    DAT_10186326c = 0x26;
    DAT_101863270 = PTR_DAT_101873118;
    DAT_101863278 = 0;
    DAT_10186327c = 0x27;
    DAT_101863280 = PTR_DAT_101873118;
    DAT_101863288 = 0;
    DAT_10186328c = 0x28;
    DAT_101863290 = PTR_DAT_101873118;
    DAT_101863298 = 0;
    DAT_10186329c = 0x29;
    DAT_1018632a0 = PTR_DAT_101873118;
    DAT_1018632a8 = 0;
    DAT_1018632ac = 0x2a;
    DAT_1018632b0 = PTR_DAT_101873118;
    DAT_1018632b8 = 0;
    DAT_1018632bc = 0x2b;
    DAT_1018632c0 = PTR_DAT_101873118;
    DAT_1018632c8 = 0;
    DAT_1018632cc = 0x2c;
    DAT_1018632d0 = PTR_DAT_101873118;
    DAT_1018632d8 = 0;
    DAT_1018632dc = 0x2d;
    DAT_1018632e0 = PTR_DAT_101873118;
    DAT_1018632e8 = 0;
    DAT_1018632ec = 0x2e;
    DAT_1018632f0 = PTR_DAT_101873118;
    DAT_1018632f8 = 0;
    DAT_1018632fc = 0x2f;
    DAT_101863300 = PTR_DAT_101873118;
    DAT_101863308 = 0;
    DAT_10186330c = 0x30;
    DAT_101863310 = PTR_DAT_1018730c0;
    DAT_101863318 = 0;
    DAT_10186331c = 0x34;
    DAT_101863320 = PTR_DAT_1018730c0;
    DAT_101863328 = 0;
    DAT_10186332c = 0x38;
    DAT_101863330 = PTR_DAT_101854de8;
    DAT_101863350 = DAT_101863350 + 0x18;
    DAT_101863338 = 0;
    DAT_10186333c = 0x3c;
    DAT_101863340 = PTR_DAT_101854dc0;
    DAT_101863348 = 1;
  }
  return;
}




void FUN_1004b22e4(void)

{
  long lVar1;
  
  if ((DAT_101863358 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856648,1,"Buff",0x40,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018631c8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863350;
    DAT_101863358 = 1;
  }
  return;
}




void FUN_1004b2344(void)

{
  long lVar1;
  
  if ((DAT_101863360 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856668,3,"Buff*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856648;
    DAT_101863360 = 1;
  }
  return;
}




void FUN_1004b239c(void)

{
  long lVar1;
  
  if ((DAT_101863368 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856680,3,"Buff**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856668;
    DAT_101863368 = 1;
  }
  return;
}




void FUN_1004b23f4(void)

{
  if ((DAT_101863380 & 1) == 0) {
    DAT_101863388 = DAT_101863388 + 1;
    DAT_101863370 = 0;
    DAT_101863374 = 0;
    DAT_101863378 = PTR_DAT_101856698;
    DAT_101863380 = 1;
  }
  return;
}




void FUN_1004b2438(void)

{
  long lVar1;
  
  if ((DAT_101863390 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018566a0,1,"BuffSet",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863370;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863388;
    DAT_101863390 = 1;
  }
  return;
}




void FUN_1004b2498(void)

{
  long lVar1;
  
  if ((DAT_101863398 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018566c0,3,"BuffSet*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018566a0;
    DAT_101863398 = 1;
  }
  return;
}




void FUN_1004b24f0(void)

{
  long lVar1;
  
  if ((DAT_1018633a0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018566d8,3,"BuffSet**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018566c0;
    DAT_1018633a0 = 1;
  }
  return;
}




void FUN_1004b2548(void)

{
  if ((DAT_1018633f8 & 1) == 0) {
    DAT_1018633a8 = 0;
    DAT_1018633ac = 0;
    DAT_1018633b0 = PTR_DAT_101873138;
    DAT_1018633b8 = 0;
    DAT_1018633bc = 8;
    DAT_1018633c0 = PTR_DAT_1018730f0;
    DAT_1018633c8 = 0;
    DAT_1018633cc = 0xc;
    DAT_1018633d0 = PTR_DAT_1018730f0;
    DAT_1018633d8 = 0;
    DAT_1018633dc = 0x10;
    DAT_1018633e0 = PTR_DAT_1018730f0;
    DAT_101863400 = DAT_101863400 + 5;
    DAT_1018633e8 = 0;
    DAT_1018633ec = 0x14;
    DAT_1018633f0 = PTR_DAT_101872c38;
    DAT_1018633f8 = 1;
  }
  return;
}




void FUN_1004b25e8(void)

{
  long lVar1;
  
  if ((DAT_101863408 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018566f0,1,"StaticSound",0x20,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018633a8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863400;
    DAT_101863408 = 1;
  }
  return;
}




void FUN_1004b2648(void)

{
  long lVar1;
  
  if ((DAT_101863410 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856710,3,"StaticSound*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018566f0;
    DAT_101863410 = 1;
  }
  return;
}




void FUN_1004b26a0(void)

{
  long lVar1;
  
  if ((DAT_101863418 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856728,3,"StaticSound**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856710;
    DAT_101863418 = 1;
  }
  return;
}




void FUN_1004b26f8(void)

{
  if ((DAT_101863450 & 1) == 0) {
    DAT_101863420 = 0;
    DAT_101863424 = 0;
    DAT_101863428 = PTR_DAT_101873138;
    DAT_101863430 = 0;
    DAT_101863434 = 8;
    DAT_101863438 = PTR_DAT_1018730c0;
    DAT_101863458 = DAT_101863458 + 3;
    DAT_101863440 = 0;
    DAT_101863444 = 0xc;
    DAT_101863448 = PTR_DAT_101873118;
    DAT_101863450 = 1;
  }
  return;
}




void FUN_1004b2778(void)

{
  long lVar1;
  
  if ((DAT_101863460 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856748,1,"ItemEntry",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863420;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863458;
    DAT_101863460 = 1;
  }
  return;
}




void FUN_1004b27d8(void)

{
  long lVar1;
  
  if ((DAT_101863468 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856768,3,"ItemEntry*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856748;
    DAT_101863468 = 1;
  }
  return;
}




void FUN_1004b2830(void)

{
  long lVar1;
  
  if ((DAT_101863470 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856780,3,"ItemEntry**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856768;
    DAT_101863470 = 1;
  }
  return;
}




void FUN_1004b2888(void)

{
  if ((DAT_1018634a8 & 1) == 0) {
    DAT_101863478 = 0;
    DAT_10186347c = 0;
    DAT_101863480 = PTR_DAT_101856798;
    DAT_101863488 = 0;
    DAT_10186348c = 8;
    DAT_101863490 = PTR_DAT_101873118;
    DAT_1018634b0 = DAT_1018634b0 + 3;
    DAT_101863498 = 0;
    DAT_10186349c = 0xc;
    DAT_1018634a0 = PTR_DAT_1018730c0;
    DAT_1018634a8 = 1;
  }
  return;
}




void FUN_1004b2904(void)

{
  long lVar1;
  
  if ((DAT_1018634b8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018567a0,1,"ItemStore",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863478;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018634b0;
    DAT_1018634b8 = 1;
  }
  return;
}




void FUN_1004b2964(void)

{
  long lVar1;
  
  if ((DAT_1018634c0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018567c0,3,"ItemStore*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018567a0;
    DAT_1018634c0 = 1;
  }
  return;
}




void FUN_1004b29bc(void)

{
  long lVar1;
  
  if ((DAT_1018634c8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018567d8,3,"ItemStore**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018567c0;
    DAT_1018634c8 = 1;
  }
  return;
}




void FUN_1004b2a14(void)

{
  if ((DAT_1018634f0 & 1) == 0) {
    DAT_1018634d0 = 0;
    DAT_1018634d4 = 0;
    DAT_1018634d8 = PTR_DAT_101873138;
    DAT_1018634f8 = DAT_1018634f8 + 2;
    DAT_1018634e0 = 0;
    DAT_1018634e4 = 8;
    DAT_1018634e8 = PTR_DAT_1018730c0;
    DAT_1018634f0 = 1;
  }
  return;
}




void FUN_1004b2a78(void)

{
  long lVar1;
  
  if ((DAT_101863500 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018567f0,1,"KillScoreEntry",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018634d0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018634f8;
    DAT_101863500 = 1;
  }
  return;
}




void FUN_1004b2ad8(void)

{
  long lVar1;
  
  if ((DAT_101863508 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856810,3,"KillScoreEntry*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018567f0;
    DAT_101863508 = 1;
  }
  return;
}




void FUN_1004b2b30(void)

{
  long lVar1;
  
  if ((DAT_101863510 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856828,3,"KillScoreEntry**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856810;
    DAT_101863510 = 1;
  }
  return;
}




void FUN_1004b2b88(void)

{
  if ((DAT_101863578 & 1) == 0) {
    DAT_101863518 = 0;
    DAT_10186351c = 0;
    DAT_101863520 = PTR_DAT_101856840;
    DAT_101863528 = 0;
    DAT_10186352c = 8;
    DAT_101863530 = PTR_DAT_1018730c0;
    DAT_101863538 = 0;
    DAT_10186353c = 0xc;
    DAT_101863540 = PTR_DAT_1018730c0;
    DAT_101863548 = 0;
    DAT_10186354c = 0x10;
    DAT_101863550 = PTR_DAT_1018730f0;
    DAT_101863558 = 0;
    DAT_10186355c = 0x14;
    DAT_101863560 = PTR_DAT_101873118;
    DAT_101863580 = DAT_101863580 + 6;
    DAT_101863568 = 0;
    DAT_10186356c = 0x15;
    DAT_101863570 = PTR_DAT_101873118;
    DAT_101863578 = 1;
  }
  return;
}




void FUN_1004b2c40(void)

{
  long lVar1;
  
  if ((DAT_101863588 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856848,1,"ScoreGameModeSettings",0x18,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863518;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863580;
    DAT_101863588 = 1;
  }
  return;
}




void FUN_1004b2ca0(void)

{
  long lVar1;
  
  if ((DAT_101863590 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856870,3,"ScoreGameModeSettings*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856848;
    DAT_101863590 = 1;
  }
  return;
}




void FUN_1004b2cf8(void)

{
  long lVar1;
  
  if ((DAT_101863598 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856888,3,"ScoreGameModeSettings**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856870;
    DAT_101863598 = 1;
  }
  return;
}




void FUN_1004b2d50(void)

{
  if ((DAT_1018635c0 & 1) == 0) {
    DAT_1018635a0 = 0;
    DAT_1018635a4 = 0;
    DAT_1018635a8 = PTR_DAT_101873138;
    DAT_1018635c8 = DAT_1018635c8 + 2;
    DAT_1018635b0 = 0;
    DAT_1018635b4 = 8;
    DAT_1018635b8 = PTR_DAT_1018730f0;
    DAT_1018635c0 = 1;
  }
  return;
}




void FUN_1004b2db4(void)

{
  long lVar1;
  
  if ((DAT_1018635d0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018568a0,1,"LaneMinionEntry",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018635a0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018635c8;
    DAT_1018635d0 = 1;
  }
  return;
}




void FUN_1004b2e14(void)

{
  long lVar1;
  
  if ((DAT_1018635d8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018568c0,3,"LaneMinionEntry*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018568a0;
    DAT_1018635d8 = 1;
  }
  return;
}




void FUN_1004b2e6c(void)

{
  long lVar1;
  
  if ((DAT_1018635e0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018568d8,3,"LaneMinionEntry**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018568c0;
    DAT_1018635e0 = 1;
  }
  return;
}




void FUN_1004b2ec4(void)

{
  if ((DAT_101863608 & 1) == 0) {
    DAT_1018635e8 = 0;
    DAT_1018635ec = 0;
    DAT_1018635f0 = PTR_DAT_101873138;
    DAT_101863610 = DAT_101863610 + 2;
    DAT_1018635f8 = 0;
    DAT_1018635fc = 8;
    DAT_101863600 = PTR_DAT_101873138;
    DAT_101863608 = 1;
  }
  return;
}




void FUN_1004b2f1c(void)

{
  long lVar1;
  
  if ((DAT_101863618 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018568f8,1,"GameModeMatchmakerQueueEntry",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018635e8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863610;
    DAT_101863618 = 1;
  }
  return;
}




void FUN_1004b2f7c(void)

{
  long lVar1;
  
  if ((DAT_101863620 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856918,3,"GameModeMatchmakerQueueEntry*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018568f8;
    DAT_101863620 = 1;
  }
  return;
}




void FUN_1004b2fd4(void)

{
  long lVar1;
  
  if ((DAT_101863628 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856930,3,"GameModeMatchmakerQueueEntry**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856918;
    DAT_101863628 = 1;
  }
  return;
}




void FUN_1004b302c(void)

{
  if ((DAT_101863640 & 1) == 0) {
    DAT_101863648 = DAT_101863648 + 1;
    DAT_101863630 = 0;
    DAT_101863634 = 0;
    DAT_101863638 = PTR_DAT_101856948;
    DAT_101863640 = 1;
  }
  return;
}




void FUN_1004b3070(void)

{
  long lVar1;
  
  if ((DAT_101863650 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856950,1,"GameModeMatchmakerQueues",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863630;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863648;
    DAT_101863650 = 1;
  }
  return;
}




void FUN_1004b30d0(void)

{
  long lVar1;
  
  if ((DAT_101863658 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856970,3,"GameModeMatchmakerQueues*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856950;
    DAT_101863658 = 1;
  }
  return;
}




void FUN_1004b3128(void)

{
  long lVar1;
  
  if ((DAT_101863660 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856988,3,"GameModeMatchmakerQueues**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856970;
    DAT_101863660 = 1;
  }
  return;
}




void FUN_1004b3180(void)

{
  if ((DAT_1018636a8 & 1) == 0) {
    DAT_101863668 = 0;
    DAT_10186366c = 0;
    DAT_101863670 = PTR_DAT_101872d40;
    DAT_101863678 = 0;
    DAT_10186367c = 8;
    DAT_101863680 = PTR_DAT_101872d40;
    DAT_101863688 = 0;
    DAT_10186368c = 0x10;
    DAT_101863690 = PTR_DAT_1018730c0;
    DAT_1018636b0 = DAT_1018636b0 + 4;
    DAT_101863698 = 0;
    DAT_10186369c = 0x14;
    DAT_1018636a0 = PTR_DAT_1018730c0;
    DAT_1018636a8 = 1;
  }
  return;
}




void FUN_1004b3204(void)

{
  long lVar1;
  
  if ((DAT_1018636b8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018569a0,1,"BotSettings",0x18,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863668;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018636b0;
    DAT_1018636b8 = 1;
  }
  return;
}




void FUN_1004b3264(void)

{
  long lVar1;
  
  if ((DAT_1018636c0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018569c8,3,"BotSettings*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018569a0;
    DAT_1018636c0 = 1;
  }
  return;
}




void FUN_1004b32bc(void)

{
  long lVar1;
  
  if ((DAT_1018636c8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018569e0,3,"BotSettings**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018569c8;
    DAT_1018636c8 = 1;
  }
  return;
}




void FUN_1004b3314(void)

{
  if ((DAT_1018636e0 & 1) == 0) {
    DAT_1018636e8 = DAT_1018636e8 + 1;
    DAT_1018636d0 = 0;
    DAT_1018636d4 = 0;
    DAT_1018636d8 = PTR_DAT_101872d78;
    DAT_1018636e0 = 1;
  }
  return;
}




void FUN_1004b335c(void)

{
  long lVar1;
  
  if ((DAT_1018636f0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018569f8,1,"FogOfWarOccluder",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018636d0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018636e8;
    DAT_1018636f0 = 1;
  }
  return;
}




void FUN_1004b33bc(void)

{
  long lVar1;
  
  if ((DAT_1018636f8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856a18,3,"FogOfWarOccluder*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018569f8;
    DAT_1018636f8 = 1;
  }
  return;
}




void FUN_1004b3414(void)

{
  long lVar1;
  
  if ((DAT_101863700 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856a30,3,"FogOfWarOccluder**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856a18;
    DAT_101863700 = 1;
  }
  return;
}




void FUN_1004b346c(void)

{
  if ((DAT_101863748 & 1) == 0) {
    DAT_101863708 = 0;
    DAT_10186370c = 0;
    DAT_101863710 = PTR_DAT_101873118;
    DAT_101863718 = 0;
    DAT_10186371c = 4;
    DAT_101863720 = PTR_DAT_101872d40;
    DAT_101863728 = 0;
    DAT_10186372c = 0xc;
    DAT_101863730 = PTR_DAT_101872d40;
    DAT_101863750 = DAT_101863750 + 4;
    DAT_101863738 = 0;
    DAT_10186373c = 0x18;
    DAT_101863740 = PTR_DAT_101856a48;
    DAT_101863748 = 1;
  }
  return;
}




void FUN_1004b34f8(void)

{
  long lVar1;
  
  if ((DAT_101863758 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856a50,1,"FogOfWarSettings",0x20,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863708;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863750;
    DAT_101863758 = 1;
  }
  return;
}




void FUN_1004b3558(void)

{
  long lVar1;
  
  if ((DAT_101863760 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856a78,3,"FogOfWarSettings*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856a50;
    DAT_101863760 = 1;
  }
  return;
}




void FUN_1004b35b0(void)

{
  long lVar1;
  
  if ((DAT_101863768 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856a90,3,"FogOfWarSettings**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856a78;
    DAT_101863768 = 1;
  }
  return;
}




void FUN_1004b3608(void)

{
  if ((DAT_101863860 & 1) == 0) {
    DAT_101863770 = 0;
    DAT_101863774 = 0;
    DAT_101863778 = PTR_DAT_101873138;
    DAT_101863780 = 0;
    DAT_101863784 = 8;
    DAT_101863788 = PTR_DAT_101873138;
    DAT_101863790 = 0;
    DAT_101863794 = 0x10;
    DAT_101863798 = PTR_DAT_101873138;
    DAT_1018637a0 = 0;
    DAT_1018637a4 = 0x18;
    DAT_1018637a8 = PTR_DAT_101873138;
    DAT_1018637b0 = 0;
    DAT_1018637b4 = 0x20;
    DAT_1018637b8 = PTR_DAT_101873138;
    DAT_1018637c0 = 0;
    DAT_1018637c4 = 0x28;
    DAT_1018637c8 = PTR_DAT_101873138;
    DAT_1018637d0 = 0;
    DAT_1018637d4 = 0x30;
    DAT_1018637d8 = PTR_DAT_101873138;
    DAT_1018637e0 = 0;
    DAT_1018637e4 = 0x38;
    DAT_1018637e8 = PTR_DAT_101873138;
    DAT_1018637f0 = 0;
    DAT_1018637f4 = 0x40;
    DAT_1018637f8 = PTR_DAT_101873138;
    DAT_101863800 = 0;
    DAT_101863804 = 0x48;
    DAT_101863808 = PTR_DAT_101873138;
    DAT_101863810 = 0;
    DAT_101863814 = 0x50;
    DAT_101863818 = PTR_DAT_101873138;
    DAT_101863820 = 0;
    DAT_101863824 = 0x58;
    DAT_101863828 = PTR_DAT_101855090;
    DAT_101863830 = 0;
    DAT_101863834 = 0x5c;
    DAT_101863838 = PTR_DAT_1018730c0;
    DAT_101863840 = 0;
    DAT_101863844 = 0x60;
    DAT_101863848 = PTR_DAT_1018730c0;
    DAT_101863868 = DAT_101863868 + 0xf;
    DAT_101863850 = 0;
    DAT_101863854 = 100;
    DAT_101863858 = PTR_DAT_1018730f0;
    DAT_101863860 = 1;
  }
  return;
}




void FUN_1004b3750(void)

{
  long lVar1;
  
  if ((DAT_101863870 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856aa8,1,"SpoilsOfWarReward",0x68,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863770;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863868;
    DAT_101863870 = 1;
  }
  return;
}




void FUN_1004b37b0(void)

{
  long lVar1;
  
  if ((DAT_101863878 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856ac8,3,"SpoilsOfWarReward*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856aa8;
    DAT_101863878 = 1;
  }
  return;
}




void FUN_1004b3808(void)

{
  long lVar1;
  
  if ((DAT_101863880 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856ae0,3,"SpoilsOfWarReward**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856ac8;
    DAT_101863880 = 1;
  }
  return;
}




void FUN_1004b3860(void)

{
  if ((DAT_101863898 & 1) == 0) {
    DAT_1018638a0 = DAT_1018638a0 + 1;
    DAT_101863888 = 0;
    DAT_10186388c = 0;
    DAT_101863890 = PTR_DAT_101856af8;
    DAT_101863898 = 1;
  }
  return;
}




void FUN_1004b38a4(void)

{
  long lVar1;
  
  if ((DAT_1018638a8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856b00,1,"SpoilsOfWarRewardSet",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863888;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018638a0;
    DAT_1018638a8 = 1;
  }
  return;
}




void FUN_1004b3904(void)

{
  long lVar1;
  
  if ((DAT_1018638b0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856b20,3,"SpoilsOfWarRewardSet*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856b00;
    DAT_1018638b0 = 1;
  }
  return;
}




void FUN_1004b395c(void)

{
  long lVar1;
  
  if ((DAT_1018638b8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856b38,3,"SpoilsOfWarRewardSet**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856b20;
    DAT_1018638b8 = 1;
  }
  return;
}




void FUN_1004b39b4(void)

{
  if ((DAT_1018638e0 & 1) == 0) {
    DAT_1018638c0 = 0;
    DAT_1018638c4 = 0;
    DAT_1018638c8 = PTR_DAT_101873138;
    DAT_1018638e8 = DAT_1018638e8 + 2;
    DAT_1018638d0 = 0;
    DAT_1018638d4 = 8;
    DAT_1018638d8 = PTR_DAT_101872d78;
    DAT_1018638e0 = 1;
  }
  return;
}




void FUN_1004b3a18(void)

{
  long lVar1;
  
  if ((DAT_1018638f0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856b50,1,"Brush",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018638c0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018638e8;
    DAT_1018638f0 = 1;
  }
  return;
}




void FUN_1004b3a78(void)

{
  long lVar1;
  
  if ((DAT_1018638f8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856b70,3,"Brush*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856b50;
    DAT_1018638f8 = 1;
  }
  return;
}




void FUN_1004b3ad0(void)

{
  long lVar1;
  
  if ((DAT_101863900 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856b88,3,"Brush**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856b70;
    DAT_101863900 = 1;
  }
  return;
}




void FUN_1004b3b28(void)

{
  if ((DAT_101863948 & 1) == 0) {
    DAT_101863908 = 0;
    DAT_10186390c = 0;
    DAT_101863910 = PTR_DAT_1018730c0;
    DAT_101863918 = 0;
    DAT_10186391c = 4;
    DAT_101863920 = PTR_DAT_1018730c0;
    DAT_101863928 = 0;
    DAT_10186392c = 8;
    DAT_101863930 = PTR_DAT_1018730c0;
    DAT_101863950 = DAT_101863950 + 4;
    DAT_101863938 = 0;
    DAT_10186393c = 0xc;
    DAT_101863940 = PTR_DAT_1018730c0;
    DAT_101863948 = 1;
  }
  return;
}




void FUN_1004b3ba0(void)

{
  long lVar1;
  
  if ((DAT_101863958 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856ba8,1,"ColorVariable",0x10,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863908;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863950;
    DAT_101863958 = 1;
  }
  return;
}




void FUN_1004b3c00(void)

{
  long lVar1;
  
  if ((DAT_101863960 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856bd0,3,"ColorVariable*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856ba8;
    DAT_101863960 = 1;
  }
  return;
}




void FUN_1004b3c58(void)

{
  long lVar1;
  
  if ((DAT_101863968 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856be8,3,"ColorVariable**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856bd0;
    DAT_101863968 = 1;
  }
  return;
}




void FUN_1004b3cb0(void)

{
  if ((DAT_101863990 & 1) == 0) {
    DAT_101863970 = 0;
    DAT_101863974 = 0;
    DAT_101863978 = PTR_DAT_101873138;
    DAT_101863998 = DAT_101863998 + 2;
    DAT_101863980 = 0;
    DAT_101863984 = 8;
    DAT_101863988 = PTR_DAT_101872c98;
    DAT_101863990 = 1;
  }
  return;
}




void FUN_1004b3d14(void)

{
  long lVar1;
  
  if ((DAT_1018639a0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856c00,1,"Locator",0x30,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863970;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863998;
    DAT_1018639a0 = 1;
  }
  return;
}




void FUN_1004b3d74(void)

{
  long lVar1;
  
  if ((DAT_1018639a8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856c20,3,"Locator*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856c00;
    DAT_1018639a8 = 1;
  }
  return;
}




void FUN_1004b3dcc(void)

{
  long lVar1;
  
  if ((DAT_1018639b0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856c38,3,"Locator**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856c20;
    DAT_1018639b0 = 1;
  }
  return;
}




void FUN_1004b3e24(void)

{
  if ((DAT_1018639f8 & 1) == 0) {
    DAT_1018639b8 = 0;
    DAT_1018639bc = 0;
    DAT_1018639c0 = PTR_DAT_101873138;
    DAT_1018639c8 = 0;
    DAT_1018639cc = 8;
    DAT_1018639d0 = PTR_DAT_101873138;
    DAT_1018639d8 = 0;
    DAT_1018639dc = 0x10;
    DAT_1018639e0 = PTR_DAT_101856c50;
    DAT_101863a00 = DAT_101863a00 + 4;
    DAT_1018639e8 = 0;
    DAT_1018639ec = 0x18;
    DAT_1018639f0 = PTR_DAT_101855bc8;
    DAT_1018639f8 = 1;
  }
  return;
}




void FUN_1004b3eac(void)

{
  long lVar1;
  
  if ((DAT_101863a08 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856c58,1,"StaticEntity",0x20,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018639b8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863a00;
    DAT_101863a08 = 1;
  }
  return;
}




void FUN_1004b3f0c(void)

{
  long lVar1;
  
  if ((DAT_101863a10 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856c78,3,"StaticEntity*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856c58;
    DAT_101863a10 = 1;
  }
  return;
}




void FUN_1004b3f64(void)

{
  long lVar1;
  
  if ((DAT_101863a18 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856c90,3,"StaticEntity**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856c78;
    DAT_101863a18 = 1;
  }
  return;
}




void FUN_1004b3fbc(void)

{
  if ((DAT_101863a70 & 1) == 0) {
    DAT_101863a20 = 0;
    DAT_101863a24 = 0;
    DAT_101863a28 = PTR_DAT_101873138;
    DAT_101863a30 = 0;
    DAT_101863a34 = 8;
    DAT_101863a38 = PTR_DAT_101873138;
    DAT_101863a40 = 0;
    DAT_101863a44 = 0x10;
    DAT_101863a48 = PTR_DAT_101873138;
    DAT_101863a50 = 0;
    DAT_101863a54 = 0x18;
    DAT_101863a58 = PTR_DAT_101873138;
    DAT_101863a78 = DAT_101863a78 + 5;
    DAT_101863a60 = 0;
    DAT_101863a64 = 0x20;
    DAT_101863a68 = PTR_DAT_101873138;
    DAT_101863a70 = 1;
  }
  return;
}




void FUN_1004b4044(void)

{
  long lVar1;
  
  if ((DAT_101863a80 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856ca8,1,"CharmAnimation",0x28,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863a20;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863a78;
    DAT_101863a80 = 1;
  }
  return;
}




void FUN_1004b40a4(void)

{
  long lVar1;
  
  if ((DAT_101863a88 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856cc8,3,"CharmAnimation*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856ca8;
    DAT_101863a88 = 1;
  }
  return;
}




void FUN_1004b40fc(void)

{
  long lVar1;
  
  if ((DAT_101863a90 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856ce0,3,"CharmAnimation**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856cc8;
    DAT_101863a90 = 1;
  }
  return;
}




void FUN_1004b4154(void)

{
  if ((DAT_101863ad8 & 1) == 0) {
    DAT_101863a98 = 0;
    DAT_101863a9c = 0;
    DAT_101863aa0 = PTR_DAT_1018730c0;
    DAT_101863aa8 = 0;
    DAT_101863aac = 4;
    DAT_101863ab0 = PTR_DAT_1018730f0;
    DAT_101863ab8 = 0;
    DAT_101863abc = 8;
    DAT_101863ac0 = PTR_DAT_1018730c0;
    DAT_101863ae0 = DAT_101863ae0 + 4;
    DAT_101863ac8 = 0;
    DAT_101863acc = 0xc;
    DAT_101863ad0 = PTR_DAT_1018730f0;
    DAT_101863ad8 = 1;
  }
  return;
}




void FUN_1004b41d8(void)

{
  long lVar1;
  
  if ((DAT_101863ae8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856d00,1,"LevelScalingByTime",0x10,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863a98;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863ae0;
    DAT_101863ae8 = 1;
  }
  return;
}




void FUN_1004b4238(void)

{
  long lVar1;
  
  if ((DAT_101863af0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856d28,3,"LevelScalingByTime*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856d00;
    DAT_101863af0 = 1;
  }
  return;
}




void FUN_1004b4290(void)

{
  long lVar1;
  
  if ((DAT_101863af8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856d40,3,"LevelScalingByTime**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856d28;
    DAT_101863af8 = 1;
  }
  return;
}




void FUN_1004b42e8(void)

{
  if ((DAT_101863b40 & 1) == 0) {
    DAT_101863b00 = 0;
    DAT_101863b04 = 0;
    DAT_101863b08 = PTR_DAT_1018568f0;
    DAT_101863b10 = 0;
    DAT_101863b14 = 8;
    DAT_101863b18 = PTR_DAT_1018730f0;
    DAT_101863b20 = 0;
    DAT_101863b24 = 0xc;
    DAT_101863b28 = PTR_DAT_1018730f0;
    DAT_101863b48 = DAT_101863b48 + 4;
    DAT_101863b30 = 0;
    DAT_101863b34 = 0x10;
    DAT_101863b38 = PTR_DAT_101856d20;
    DAT_101863b40 = 1;
  }
  return;
}




void FUN_1004b4370(void)

{
  long lVar1;
  
  if ((DAT_101863b50 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856d58,1,"LaneMinionSettings",0x20,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863b00;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863b48;
    DAT_101863b50 = 1;
  }
  return;
}




void FUN_1004b43d0(void)

{
  long lVar1;
  
  if ((DAT_101863b58 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856d78,3,"LaneMinionSettings*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856d58;
    DAT_101863b58 = 1;
  }
  return;
}




void FUN_1004b4428(void)

{
  long lVar1;
  
  if ((DAT_101863b60 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856d90,3,"LaneMinionSettings**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856d78;
    DAT_101863b60 = 1;
  }
  return;
}




void FUN_1004b4480(void)

{
  if ((DAT_101863d68 & 1) == 0) {
    DAT_101863b68 = 0;
    DAT_101863b6c = 0;
    DAT_101863b70 = PTR_DAT_1018730d8;
    DAT_101863b78 = 0;
    DAT_101863b7c = 8;
    DAT_101863b80 = PTR_DAT_101873138;
    DAT_101863b88 = 0;
    DAT_101863b8c = 0x10;
    DAT_101863b90 = PTR_DAT_1018730f0;
    DAT_101863b98 = 0;
    DAT_101863b9c = 0x14;
    DAT_101863ba0 = PTR_DAT_1018730f0;
    DAT_101863ba8 = 0;
    DAT_101863bac = 0x18;
    DAT_101863bb0 = PTR_DAT_1018730f0;
    DAT_101863bb8 = 0;
    DAT_101863bbc = 0x1c;
    DAT_101863bc0 = PTR_DAT_1018730f0;
    DAT_101863bc8 = 0;
    DAT_101863bcc = 0x20;
    DAT_101863bd0 = PTR_DAT_1018730f0;
    DAT_101863bd8 = 0;
    DAT_101863bdc = 0x24;
    DAT_101863be0 = PTR_DAT_1018730f0;
    DAT_101863be8 = 0;
    DAT_101863bec = 0x28;
    DAT_101863bf0 = PTR_DAT_1018730f0;
    DAT_101863bf8 = 0;
    DAT_101863bfc = 0x2c;
    DAT_101863c00 = PTR_DAT_1018730f0;
    DAT_101863c08 = 0;
    DAT_101863c0c = 0x30;
    DAT_101863c10 = PTR_DAT_1018730f0;
    DAT_101863c18 = 0;
    DAT_101863c1c = 0x34;
    DAT_101863c20 = PTR_DAT_101873118;
    DAT_101863c28 = 0;
    DAT_101863c2c = 0x35;
    DAT_101863c30 = PTR_DAT_101873118;
    DAT_101863c38 = 0;
    DAT_101863c3c = 0x38;
    DAT_101863c40 = PTR_DAT_101854e88;
    DAT_101863c48 = 0;
    DAT_101863c4c = 0x3c;
    DAT_101863c50 = PTR_DAT_101873118;
    DAT_101863c58 = 0;
    DAT_101863c5c = 0x3d;
    DAT_101863c60 = PTR_DAT_101873118;
    DAT_101863c68 = 0;
    DAT_101863c6c = 0x3e;
    DAT_101863c70 = PTR_DAT_101873118;
    DAT_101863c78 = 0;
    DAT_101863c7c = 0x3f;
    DAT_101863c80 = PTR_DAT_101873118;
    DAT_101863c88 = 0;
    DAT_101863c8c = 0x40;
    DAT_101863c90 = PTR_DAT_101873118;
    DAT_101863c98 = 0;
    DAT_101863c9c = 0x41;
    DAT_101863ca0 = PTR_DAT_101873118;
    DAT_101863ca8 = 0;
    DAT_101863cac = 0x42;
    DAT_101863cb0 = PTR_DAT_101873118;
    DAT_101863cb8 = 0;
    DAT_101863cbc = 0x43;
    DAT_101863cc0 = PTR_DAT_101873118;
    DAT_101863cc8 = 0;
    DAT_101863ccc = 0x44;
    DAT_101863cd0 = PTR_DAT_101873118;
    DAT_101863cd8 = 0;
    DAT_101863cdc = 0x45;
    DAT_101863ce0 = PTR_DAT_101873118;
    DAT_101863ce8 = 0;
    DAT_101863cec = 0x46;
    DAT_101863cf0 = PTR_DAT_101873118;
    DAT_101863cf8 = 0;
    DAT_101863cfc = 0x47;
    DAT_101863d00 = PTR_DAT_101873118;
    DAT_101863d08 = 0;
    DAT_101863d0c = 0x48;
    DAT_101863d10 = PTR_DAT_101873118;
    DAT_101863d18 = 0;
    DAT_101863d1c = 0x49;
    DAT_101863d20 = PTR_DAT_101873118;
    DAT_101863d28 = 0;
    DAT_101863d2c = 0x4c;
    DAT_101863d30 = PTR_DAT_1018730f0;
    DAT_101863d38 = 0;
    DAT_101863d3c = 0x50;
    DAT_101863d40 = PTR_DAT_1018730f0;
    DAT_101863d48 = 0;
    DAT_101863d4c = 0x54;
    DAT_101863d50 = PTR_DAT_1018550b8;
    DAT_101863d70 = DAT_101863d70 + 0x20;
    DAT_101863d58 = 0;
    DAT_101863d5c = 0x58;
    DAT_101863d60 = PTR_DAT_101873118;
    DAT_101863d68 = 1;
  }
  return;
}




void FUN_1004b46ec(void)

{
  long lVar1;
  
  if ((DAT_101863d78 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856da8,1,"DamageVariable",0x60,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863b68;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863d70;
    DAT_101863d78 = 1;
  }
  return;
}




void FUN_1004b474c(void)

{
  long lVar1;
  
  if ((DAT_101863d80 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856dd0,3,"DamageVariable*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856da8;
    DAT_101863d80 = 1;
  }
  return;
}




void FUN_1004b47a4(void)

{
  long lVar1;
  
  if ((DAT_101863d88 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856de8,3,"DamageVariable**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856dd0;
    DAT_101863d88 = 1;
  }
  return;
}




void FUN_1004b47fc(void)

{
  if ((DAT_101863db0 & 1) == 0) {
    DAT_101863d90 = 0;
    DAT_101863d94 = 0;
    DAT_101863d98 = PTR_DAT_101873138;
    DAT_101863db8 = DAT_101863db8 + 2;
    DAT_101863da0 = 0;
    DAT_101863da4 = 8;
    DAT_101863da8 = PTR_DAT_101873138;
    DAT_101863db0 = 1;
  }
  return;
}




void FUN_1004b4854(void)

{
  long lVar1;
  
  if ((DAT_101863dc0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856e08,1,"DefinitionEntry",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863d90;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863db8;
    DAT_101863dc0 = 1;
  }
  return;
}




void FUN_1004b48b4(void)

{
  long lVar1;
  
  if ((DAT_101863dc8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856e28,3,"DefinitionEntry*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856e08;
    DAT_101863dc8 = 1;
  }
  return;
}




void FUN_1004b490c(void)

{
  long lVar1;
  
  if ((DAT_101863dd0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856e40,3,"DefinitionEntry**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856e28;
    DAT_101863dd0 = 1;
  }
  return;
}




void FUN_1004b4964(void)

{
  if ((DAT_101863de8 & 1) == 0) {
    DAT_101863df0 = DAT_101863df0 + 1;
    DAT_101863dd8 = 0;
    DAT_101863ddc = 0;
    DAT_101863de0 = PTR_DAT_101856e58;
    DAT_101863de8 = 1;
  }
  return;
}




void FUN_1004b49a8(void)

{
  long lVar1;
  
  if ((DAT_101863df8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856e60,1,"DefinitionManifest",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863dd8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863df0;
    DAT_101863df8 = 1;
  }
  return;
}




void FUN_1004b4a08(void)

{
  long lVar1;
  
  if ((DAT_101863e00 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856e88,3,"DefinitionManifest*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856e60;
    DAT_101863e00 = 1;
  }
  return;
}




void FUN_1004b4a60(void)

{
  long lVar1;
  
  if ((DAT_101863e08 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856ea0,3,"DefinitionManifest**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856e88;
    DAT_101863e08 = 1;
  }
  return;
}




void FUN_1004b4ab8(void)

{
  if ((DAT_101863ea0 & 1) == 0) {
    DAT_101863e10 = 0;
    DAT_101863e14 = 0;
    DAT_101863e18 = PTR_DAT_101873138;
    DAT_101863e20 = 0;
    DAT_101863e24 = 8;
    DAT_101863e28 = PTR_DAT_101873118;
    DAT_101863e30 = 0;
    DAT_101863e34 = 0x10;
    DAT_101863e38 = PTR_DAT_101873138;
    DAT_101863e40 = 0;
    DAT_101863e44 = 0x18;
    DAT_101863e48 = PTR_DAT_101873138;
    DAT_101863e50 = 0;
    DAT_101863e54 = 0x20;
    DAT_101863e58 = PTR_DAT_1018730c0;
    DAT_101863e60 = 0;
    DAT_101863e64 = 0x28;
    DAT_101863e68 = PTR_DAT_101873138;
    DAT_101863e70 = 0;
    DAT_101863e74 = 0x30;
    DAT_101863e78 = PTR_DAT_1018730f0;
    DAT_101863e80 = 0;
    DAT_101863e84 = 0x34;
    DAT_101863e88 = PTR_DAT_101873118;
    DAT_101863ea8 = DAT_101863ea8 + 9;
    DAT_101863e90 = 0;
    DAT_101863e94 = 0x35;
    DAT_101863e98 = PTR_DAT_101873118;
    DAT_101863ea0 = 1;
  }
  return;
}




void FUN_1004b4ba4(void)

{
  long lVar1;
  
  if ((DAT_101863eb0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856eb8,1,"SkinEntry",0x38,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863e10;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863ea8;
    DAT_101863eb0 = 1;
  }
  return;
}




void FUN_1004b4c04(void)

{
  long lVar1;
  
  if ((DAT_101863eb8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856ed8,3,"SkinEntry*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856eb8;
    DAT_101863eb8 = 1;
  }
  return;
}




void FUN_1004b4c5c(void)

{
  long lVar1;
  
  if ((DAT_101863ec0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856ef0,3,"SkinEntry**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856ed8;
    DAT_101863ec0 = 1;
  }
  return;
}




void FUN_1004b4cb4(void)

{
  if ((DAT_101863ed8 & 1) == 0) {
    DAT_101863ee0 = DAT_101863ee0 + 1;
    DAT_101863ec8 = 0;
    DAT_101863ecc = 0;
    DAT_101863ed0 = PTR_DAT_101856f08;
    DAT_101863ed8 = 1;
  }
  return;
}




void FUN_1004b4cf8(void)

{
  long lVar1;
  
  if ((DAT_101863ee8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856f10,1,"SkinManifest",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863ec8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863ee0;
    DAT_101863ee8 = 1;
  }
  return;
}




void FUN_1004b4d58(void)

{
  long lVar1;
  
  if ((DAT_101863ef0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856f30,3,"SkinManifest*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856f10;
    DAT_101863ef0 = 1;
  }
  return;
}




void FUN_1004b4db0(void)

{
  long lVar1;
  
  if ((DAT_101863ef8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856f48,3,"SkinManifest**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856f30;
    DAT_101863ef8 = 1;
  }
  return;
}




void FUN_1004b4e08(void)

{
  if ((DAT_101863f40 & 1) == 0) {
    DAT_101863f00 = 0;
    DAT_101863f04 = 0;
    DAT_101863f08 = PTR_DAT_101854cf8;
    DAT_101863f10 = 0;
    DAT_101863f14 = 4;
    DAT_101863f18 = PTR_DAT_1018730f0;
    DAT_101863f20 = 0;
    DAT_101863f24 = 8;
    DAT_101863f28 = PTR_DAT_1018730f0;
    DAT_101863f48 = DAT_101863f48 + 4;
    DAT_101863f30 = 0;
    DAT_101863f34 = 0xc;
    DAT_101863f38 = PTR_DAT_101854d48;
    DAT_101863f40 = 1;
  }
  return;
}




void FUN_1004b4e90(void)

{
  long lVar1;
  
  if ((DAT_101863f50 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856f60,1,"AttributeBonus",0x10,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863f00;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101863f48;
    DAT_101863f50 = 1;
  }
  return;
}




void FUN_1004b4ef0(void)

{
  long lVar1;
  
  if ((DAT_101863f58 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856f80,3,"AttributeBonus*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856f60;
    DAT_101863f58 = 1;
  }
  return;
}




void FUN_1004b4f48(void)

{
  long lVar1;
  
  if ((DAT_101863f60 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856f98,3,"AttributeBonus**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856f80;
    DAT_101863f60 = 1;
  }
  return;
}




void FUN_1004b4fa0(void)

{
  if ((DAT_101864048 & 1) == 0) {
    DAT_101863f68 = 0;
    DAT_101863f6c = 0;
    DAT_101863f70 = PTR_DAT_1018730c0;
    DAT_101863f78 = 0;
    DAT_101863f7c = 8;
    DAT_101863f80 = PTR_DAT_101873138;
    DAT_101863f88 = 0;
    DAT_101863f8c = 0x10;
    DAT_101863f90 = PTR_DAT_101873138;
    DAT_101863f98 = 0;
    DAT_101863f9c = 0x18;
    DAT_101863fa0 = PTR_DAT_101873138;
    DAT_101863fa8 = 0;
    DAT_101863fac = 0x20;
    DAT_101863fb0 = PTR_DAT_101873138;
    DAT_101863fb8 = 0;
    DAT_101863fbc = 0x28;
    DAT_101863fc0 = PTR_DAT_101873138;
    DAT_101863fc8 = 0;
    DAT_101863fcc = 0x30;
    DAT_101863fd0 = PTR_DAT_101873138;
    DAT_101863fd8 = 0;
    DAT_101863fdc = 0x38;
    DAT_101863fe0 = PTR_DAT_101873138;
    DAT_101863fe8 = 0;
    DAT_101863fec = 0x40;
    DAT_101863ff0 = PTR_DAT_101873138;
    DAT_101863ff8 = 0;
    DAT_101863ffc = 0x48;
    DAT_101864000 = PTR_DAT_101873138;
    DAT_101864008 = 0;
    DAT_10186400c = 0x50;
    DAT_101864010 = PTR_DAT_101873118;
    DAT_101864018 = 0;
    DAT_10186401c = 0x51;
    DAT_101864020 = PTR_DAT_101873118;
    DAT_101864028 = 0;
    DAT_10186402c = 0x52;
    DAT_101864030 = PTR_DAT_101873118;
    DAT_101864050 = DAT_101864050 + 0xe;
    DAT_101864038 = 0;
    DAT_10186403c = 0x54;
    DAT_101864040 = PTR_DAT_1018730c0;
    DAT_101864048 = 1;
  }
  return;
}




void FUN_1004b50d0(void)

{
  long lVar1;
  
  if ((DAT_101864058 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856fb8,1,"CardEntry",0x58,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101863f68;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101864050;
    DAT_101864058 = 1;
  }
  return;
}




void FUN_1004b5130(void)

{
  long lVar1;
  
  if ((DAT_101864060 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856fd8,3,"CardEntry*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856fb8;
    DAT_101864060 = 1;
  }
  return;
}




void FUN_1004b5188(void)

{
  long lVar1;
  
  if ((DAT_101864068 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101856ff0,3,"CardEntry**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101856fd8;
    DAT_101864068 = 1;
  }
  return;
}




void FUN_1004b51e0(void)

{
  if ((DAT_101864080 & 1) == 0) {
    DAT_101864088 = DAT_101864088 + 1;
    DAT_101864070 = 0;
    DAT_101864074 = 0;
    DAT_101864078 = PTR_DAT_101857008;
    DAT_101864080 = 1;
  }
  return;
}




void FUN_1004b5224(void)

{
  long lVar1;
  
  if ((DAT_101864090 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857010,1,"CardManifest",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101864070;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101864088;
    DAT_101864090 = 1;
  }
  return;
}




void FUN_1004b5284(void)

{
  long lVar1;
  
  if ((DAT_101864098 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857030,3,"CardManifest*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857010;
    DAT_101864098 = 1;
  }
  return;
}




void FUN_1004b52dc(void)

{
  long lVar1;
  
  if ((DAT_1018640a0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857048,3,"CardManifest**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857030;
    DAT_1018640a0 = 1;
  }
  return;
}




void FUN_1004b5334(void)

{
  if ((DAT_101864178 & 1) == 0) {
    DAT_1018640a8 = 0;
    DAT_1018640ac = 0;
    DAT_1018640b0 = PTR_DAT_101873138;
    DAT_1018640b8 = 0;
    DAT_1018640bc = 8;
    DAT_1018640c0 = PTR_DAT_1018730f0;
    DAT_1018640c8 = 0;
    DAT_1018640cc = 0xc;
    DAT_1018640d0 = PTR_DAT_1018730f0;
    DAT_1018640d8 = 0;
    DAT_1018640dc = 0x10;
    DAT_1018640e0 = PTR_DAT_1018730f0;
    DAT_1018640e8 = 0;
    DAT_1018640ec = 0x14;
    DAT_1018640f0 = PTR_DAT_1018730f0;
    DAT_1018640f8 = 0;
    DAT_1018640fc = 0x18;
    DAT_101864100 = PTR_DAT_1018730f0;
    DAT_101864108 = 0;
    DAT_10186410c = 0x1c;
    DAT_101864110 = PTR_DAT_1018730f0;
    DAT_101864118 = 0;
    DAT_10186411c = 0x20;
    DAT_101864120 = PTR_DAT_1018730f0;
    DAT_101864128 = 0;
    DAT_10186412c = 0x24;
    DAT_101864130 = PTR_DAT_1018730f0;
    DAT_101864138 = 0;
    DAT_10186413c = 0x28;
    DAT_101864140 = PTR_DAT_1018550b8;
    DAT_101864148 = 0;
    DAT_10186414c = 0x2c;
    DAT_101864150 = PTR_DAT_101854d48;
    DAT_101864158 = 0;
    DAT_10186415c = 0x30;
    DAT_101864160 = PTR_DAT_101855158;
    DAT_101864180 = DAT_101864180 + 0xd;
    DAT_101864168 = 0;
    DAT_10186416c = 0x34;
    DAT_101864170 = PTR_DAT_101873118;
    DAT_101864178 = 1;
  }
  return;
}




void FUN_1004b546c(void)

{
  long lVar1;
  
  if ((DAT_101864188 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857060,1,"AbilityVariable",0x38,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018640a8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101864180;
    DAT_101864188 = 1;
  }
  return;
}




void FUN_1004b54cc(void)

{
  long lVar1;
  
  if ((DAT_101864190 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857080,3,"AbilityVariable*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857060;
    DAT_101864190 = 1;
  }
  return;
}




void FUN_1004b5524(void)

{
  long lVar1;
  
  if ((DAT_101864198 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857098,3,"AbilityVariable**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857080;
    DAT_101864198 = 1;
  }
  return;
}




void FUN_1004b557c(void)

{
  if ((DAT_101864200 & 1) == 0) {
    DAT_1018641a0 = 0;
    DAT_1018641a4 = 0;
    DAT_1018641a8 = PTR_DAT_101873138;
    DAT_1018641b0 = 0;
    DAT_1018641b4 = 8;
    DAT_1018641b8 = PTR_DAT_101873138;
    DAT_1018641c0 = 0;
    DAT_1018641c4 = 0x10;
    DAT_1018641c8 = PTR_DAT_101873138;
    DAT_1018641d0 = 0;
    DAT_1018641d4 = 0x18;
    DAT_1018641d8 = PTR_DAT_101855130;
    DAT_1018641e0 = 0;
    DAT_1018641e4 = 0x20;
    DAT_1018641e8 = PTR_DAT_101873138;
    DAT_101864208 = DAT_101864208 + 6;
    DAT_1018641f0 = 0;
    DAT_1018641f4 = 0x28;
    DAT_1018641f8 = PTR_DAT_1018570b0;
    DAT_101864200 = 1;
  }
  return;
}




void FUN_1004b5624(void)

{
  long lVar1;
  
  if ((DAT_101864210 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018570b8,1,"Talent",0x30,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018641a0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101864208;
    DAT_101864210 = 1;
  }
  return;
}




void FUN_1004b5684(void)

{
  long lVar1;
  
  if ((DAT_101864218 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018570d8,3,"Talent*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018570b8;
    DAT_101864218 = 1;
  }
  return;
}




void FUN_1004b56dc(void)

{
  long lVar1;
  
  if ((DAT_101864220 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018570f0,3,"Talent**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018570d8;
    DAT_101864220 = 1;
  }
  return;
}




void FUN_1004b5734(void)

{
  if ((DAT_101864608 & 1) == 0) {
    DAT_101864228 = 0;
    DAT_10186422c = 0;
    DAT_101864230 = PTR_DAT_101873138;
    DAT_101864238 = 0;
    DAT_10186423c = 8;
    DAT_101864240 = PTR_DAT_101873138;
    DAT_101864248 = 0;
    DAT_10186424c = 0x10;
    DAT_101864250 = PTR_DAT_101873138;
    DAT_101864258 = 0;
    DAT_10186425c = 0x18;
    DAT_101864260 = PTR_DAT_101873138;
    DAT_101864268 = 0;
    DAT_10186426c = 0x20;
    DAT_101864270 = PTR_DAT_101873138;
    DAT_101864278 = 0;
    DAT_10186427c = 0x28;
    DAT_101864280 = PTR_DAT_101873138;
    DAT_101864288 = 0;
    DAT_10186428c = 0x30;
    DAT_101864290 = PTR_DAT_101873138;
    DAT_101864298 = 0;
    DAT_10186429c = 0x38;
    DAT_1018642a0 = PTR_DAT_101873138;
    DAT_1018642a8 = 0;
    DAT_1018642ac = 0x40;
    DAT_1018642b0 = PTR_DAT_1018730f0;
    DAT_1018642b8 = 0;
    DAT_1018642bc = 0x44;
    DAT_1018642c0 = PTR_DAT_101873118;
    DAT_1018642c8 = 0;
    DAT_1018642cc = 0x45;
    DAT_1018642d0 = PTR_DAT_101873118;
    DAT_1018642d8 = 0;
    DAT_1018642dc = 0x46;
    DAT_1018642e0 = PTR_DAT_101873118;
    DAT_1018642e8 = 0;
    DAT_1018642ec = 0x47;
    DAT_1018642f0 = PTR_DAT_101873118;
    DAT_1018642f8 = 0;
    DAT_1018642fc = 0x48;
    DAT_101864300 = PTR_DAT_101873118;
    DAT_101864308 = 0;
    DAT_10186430c = 0x4c;
    DAT_101864310 = PTR_DAT_1018730c0;
    DAT_101864318 = 0;
    DAT_10186431c = 0x50;
    DAT_101864320 = PTR_DAT_1018730f0;
    DAT_101864328 = 0;
    DAT_10186432c = 0x54;
    DAT_101864330 = PTR_DAT_101873118;
    DAT_101864338 = 0;
    DAT_10186433c = 0x55;
    DAT_101864340 = PTR_DAT_101873118;
    DAT_101864348 = 0;
    DAT_10186434c = 0x56;
    DAT_101864350 = PTR_DAT_101873118;
    DAT_101864358 = 0;
    DAT_10186435c = 0x57;
    DAT_101864360 = PTR_DAT_101873118;
    DAT_101864368 = 0;
    DAT_10186436c = 0x58;
    DAT_101864370 = PTR_DAT_101873118;
    DAT_101864378 = 0;
    DAT_10186437c = 0x59;
    DAT_101864380 = PTR_DAT_101873118;
    DAT_101864388 = 0;
    DAT_10186438c = 0x5a;
    DAT_101864390 = PTR_DAT_101873118;
    DAT_101864398 = 0;
    DAT_10186439c = 0x5b;
    DAT_1018643a0 = PTR_DAT_101873118;
    DAT_1018643a8 = 0;
    DAT_1018643ac = 0x5c;
    DAT_1018643b0 = PTR_DAT_101873118;
    DAT_1018643b8 = 0;
    DAT_1018643bc = 0x5d;
    DAT_1018643c0 = PTR_DAT_101873118;
    DAT_1018643c8 = 0;
    DAT_1018643cc = 0x5e;
    DAT_1018643d0 = PTR_DAT_101873118;
    DAT_1018643d8 = 0;
    DAT_1018643dc = 0x5f;
    DAT_1018643e0 = PTR_DAT_101873118;
    DAT_1018643e8 = 0;
    DAT_1018643ec = 0x60;
    DAT_1018643f0 = PTR_DAT_101873118;
    DAT_1018643f8 = 0;
    DAT_1018643fc = 100;
    DAT_101864400 = PTR_DAT_1018730c0;
    DAT_101864408 = 0;
    DAT_10186440c = 0x68;
    DAT_101864410 = PTR_DAT_1018730f0;
    DAT_101864418 = 0;
    DAT_10186441c = 0x6c;
    DAT_101864420 = PTR_DAT_1018730f0;
    DAT_101864428 = 0;
    DAT_10186442c = 0x70;
    DAT_101864430 = PTR_DAT_101873118;
    DAT_101864438 = 0;
    DAT_10186443c = 0x74;
    DAT_101864440 = PTR_DAT_1018730f0;
    DAT_101864448 = 0;
    DAT_10186444c = 0x78;
    DAT_101864450 = PTR_DAT_1018730c0;
    DAT_101864458 = 0;
    DAT_10186445c = 0x7c;
    DAT_101864460 = PTR_DAT_101873118;
    DAT_101864468 = 0;
    DAT_10186446c = 0x7d;
    DAT_101864470 = PTR_DAT_101873118;
    DAT_101864478 = 0;
    DAT_10186447c = 0x7e;
    DAT_101864480 = PTR_DAT_101873118;
    DAT_101864488 = 0;
    DAT_10186448c = 0x7f;
    DAT_101864490 = PTR_DAT_101873118;
    DAT_101864498 = 0;
    DAT_10186449c = 0x80;
    DAT_1018644a0 = PTR_DAT_101854cd0;
    DAT_1018644a8 = 0;
    DAT_1018644ac = 0x84;
    DAT_1018644b0 = PTR_DAT_1018730f0;
    DAT_1018644b8 = 0;
    DAT_1018644bc = 0x88;
    DAT_1018644c0 = PTR_DAT_101873118;
    DAT_1018644c8 = 0;
    DAT_1018644cc = 0x89;
    DAT_1018644d0 = PTR_DAT_101873118;
    DAT_1018644d8 = 0;
    DAT_1018644dc = 0x8a;
    DAT_1018644e0 = PTR_DAT_101873118;
    DAT_1018644e8 = 0;
    DAT_1018644ec = 0x8b;
    DAT_1018644f0 = PTR_DAT_101873118;
    DAT_1018644f8 = 0;
    DAT_1018644fc = 0x8c;
    DAT_101864500 = PTR_DAT_101873118;
    DAT_101864508 = 0;
    DAT_10186450c = 0x8d;
    DAT_101864510 = PTR_DAT_101873118;
    DAT_101864518 = 0;
    DAT_10186451c = 0x8e;
    DAT_101864520 = PTR_DAT_101873118;
    DAT_101864528 = 0;
    DAT_10186452c = 0x8f;
    DAT_101864530 = PTR_DAT_101873118;
    DAT_101864538 = 0;
    DAT_10186453c = 0x90;
    DAT_101864540 = PTR_DAT_101873118;
    DAT_101864548 = 0;
    DAT_10186454c = 0x91;
    DAT_101864550 = PTR_DAT_101873118;
    DAT_101864558 = 0;
    DAT_10186455c = 0x92;
    DAT_101864560 = PTR_DAT_101873118;
    DAT_101864568 = 0;
    DAT_10186456c = 0x93;
    DAT_101864570 = PTR_DAT_101873118;
    DAT_101864578 = 0;
    DAT_10186457c = 0x94;
    DAT_101864580 = PTR_DAT_101873118;
    DAT_101864588 = 0;
    DAT_10186458c = 0x98;
    DAT_101864590 = PTR_DAT_1018730c0;
    DAT_101864598 = 0;
    DAT_10186459c = 0x9c;
    DAT_1018645a0 = PTR_DAT_101873118;
    DAT_1018645a8 = 0;
    DAT_1018645ac = 0x9d;
    DAT_1018645b0 = PTR_DAT_101855598;
    DAT_1018645b8 = 0;
    DAT_1018645bc = 0xa0;
    DAT_1018645c0 = PTR_DAT_1018560a8;
    DAT_1018645c8 = 0;
    DAT_1018645cc = 0xa8;
    DAT_1018645d0 = PTR_DAT_101856e00;
    DAT_1018645d8 = 0;
    DAT_1018645dc = 0xb0;
    DAT_1018645e0 = PTR_DAT_1018570b0;
    DAT_1018645e8 = 0;
    DAT_1018645ec = 0xb8;
    DAT_1018645f0 = PTR_DAT_101856158;
    DAT_101864610 = DAT_101864610 + 0x3e;
    DAT_1018645f8 = 0;
    DAT_1018645fc = 0x118;
    DAT_101864600 = PTR_DAT_101854fa0;
    DAT_101864608 = 1;
  }
  return;
}




void FUN_1004b5ba8(void)

{
  long lVar1;
  
  if ((DAT_101864618 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857108,1,"Ability",0x120,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101864228;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101864610;
    DAT_101864618 = 1;
  }
  return;
}




void FUN_1004b5c08(void)

{
  long lVar1;
  
  if ((DAT_101864620 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857130,3,"Ability*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857108;
    DAT_101864620 = 1;
  }
  return;
}




void FUN_1004b5c60(void)

{
  long lVar1;
  
  if ((DAT_101864628 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857148,3,"Ability**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857130;
    DAT_101864628 = 1;
  }
  return;
}




void FUN_1004b5cb8(void)

{
  if ((DAT_101864650 & 1) == 0) {
    DAT_101864630 = 0;
    DAT_101864634 = 0;
    DAT_101864638 = PTR_DAT_101873138;
    DAT_101864658 = DAT_101864658 + 2;
    DAT_101864640 = 0;
    DAT_101864644 = 8;
    DAT_101864648 = PTR_DAT_101873138;
    DAT_101864650 = 1;
  }
  return;
}




void FUN_1004b5d10(void)

{
  long lVar1;
  
  if ((DAT_101864660 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857168,1,"LocalizedSoundAsset",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101864630;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101864658;
    DAT_101864660 = 1;
  }
  return;
}




void FUN_1004b5d70(void)

{
  long lVar1;
  
  if ((DAT_101864668 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857188,3,"LocalizedSoundAsset*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857168;
    DAT_101864668 = 1;
  }
  return;
}




void FUN_1004b5dc8(void)

{
  long lVar1;
  
  if ((DAT_101864670 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018571a0,3,"LocalizedSoundAsset**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857188;
    DAT_101864670 = 1;
  }
  return;
}




void FUN_1004b5e20(void)

{
  if ((DAT_101864698 & 1) == 0) {
    DAT_101864678 = 0;
    DAT_10186467c = 0;
    DAT_101864680 = PTR_DAT_101873138;
    DAT_1018646a0 = DAT_1018646a0 + 2;
    DAT_101864688 = 0;
    DAT_10186468c = 8;
    DAT_101864690 = PTR_DAT_1018571b8;
    DAT_101864698 = 1;
  }
  return;
}




void FUN_1004b5e80(void)

{
  long lVar1;
  
  if ((DAT_1018646a8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018571c0,1,"LocalizedSound",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101864678;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018646a0;
    DAT_1018646a8 = 1;
  }
  return;
}




void FUN_1004b5ee0(void)

{
  long lVar1;
  
  if ((DAT_1018646b0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018571e0,3,"LocalizedSound*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018571c0;
    DAT_1018646b0 = 1;
  }
  return;
}




void FUN_1004b5f38(void)

{
  long lVar1;
  
  if ((DAT_1018646b8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018571f8,3,"LocalizedSound**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018571e0;
    DAT_1018646b8 = 1;
  }
  return;
}




void FUN_1004b5f90(void)

{
  if ((DAT_1018646d0 & 1) == 0) {
    DAT_1018646d8 = DAT_1018646d8 + 1;
    DAT_1018646c0 = 0;
    DAT_1018646c4 = 0;
    DAT_1018646c8 = PTR_DAT_101857210;
    DAT_1018646d0 = 1;
  }
  return;
}




void FUN_1004b5fd4(void)

{
  long lVar1;
  
  if ((DAT_1018646e0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857218,1,"LocalizedSoundSet",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018646c0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018646d8;
    DAT_1018646e0 = 1;
  }
  return;
}




void FUN_1004b6034(void)

{
  long lVar1;
  
  if ((DAT_1018646e8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857238,3,"LocalizedSoundSet*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857218;
    DAT_1018646e8 = 1;
  }
  return;
}




void FUN_1004b608c(void)

{
  long lVar1;
  
  if ((DAT_1018646f0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857250,3,"LocalizedSoundSet**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857238;
    DAT_1018646f0 = 1;
  }
  return;
}




void FUN_1004b60e4(void)

{
  if ((DAT_101864708 & 1) == 0) {
    DAT_101864710 = DAT_101864710 + 1;
    DAT_1018646f8 = 0;
    DAT_1018646fc = 0;
    DAT_101864700 = PTR_DAT_101873138;
    DAT_101864708 = 1;
  }
  return;
}




void FUN_1004b612c(void)

{
  long lVar1;
  
  if ((DAT_101864718 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857268,1,"StringEntry",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018646f8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101864710;
    DAT_101864718 = 1;
  }
  return;
}




void FUN_1004b618c(void)

{
  long lVar1;
  
  if ((DAT_101864720 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857288,3,"StringEntry*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857268;
    DAT_101864720 = 1;
  }
  return;
}




void FUN_1004b61e4(void)

{
  long lVar1;
  
  if ((DAT_101864728 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018572a0,3,"StringEntry**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857288;
    DAT_101864728 = 1;
  }
  return;
}




void FUN_1004b623c(void)

{
  if ((DAT_101864750 & 1) == 0) {
    DAT_101864730 = 0;
    DAT_101864734 = 0;
    DAT_101864738 = PTR_DAT_101872c38;
    DAT_101864758 = DAT_101864758 + 2;
    DAT_101864740 = 0;
    DAT_101864744 = 0x10;
    DAT_101864748 = PTR_DAT_1018572b8;
    DAT_101864750 = 1;
  }
  return;
}




void FUN_1004b629c(void)

{
  long lVar1;
  
  if ((DAT_101864760 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018572c0,1,"JungleSpawnPoint",0x18,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101864730;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101864758;
    DAT_101864760 = 1;
  }
  return;
}




void FUN_1004b62fc(void)

{
  long lVar1;
  
  if ((DAT_101864768 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018572e0,3,"JungleSpawnPoint*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018572c0;
    DAT_101864768 = 1;
  }
  return;
}




void FUN_1004b6354(void)

{
  long lVar1;
  
  if ((DAT_101864770 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018572f8,3,"JungleSpawnPoint**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018572e0;
    DAT_101864770 = 1;
  }
  return;
}




void FUN_1004b63ac(void)

{
  if ((DAT_1018647c8 & 1) == 0) {
    DAT_101864778 = 0;
    DAT_10186477c = 0;
    DAT_101864780 = PTR_DAT_101872c98;
    DAT_10186478c = 0x28;
    DAT_101864788 = 0;
    DAT_101864790 = PTR_DAT_101873138;
    DAT_101864798 = 0;
    DAT_10186479c = 0x30;
    DAT_1018647a0 = PTR_DAT_101857310;
    DAT_1018647a8 = 0;
    DAT_1018647ac = 0x38;
    DAT_1018647b0 = PTR_DAT_1018730c0;
    DAT_1018647d0 = DAT_1018647d0 + 5;
    DAT_1018647b8 = 0;
    DAT_1018647bc = 0x3c;
    DAT_1018647c0 = PTR_DAT_1018730c0;
    DAT_1018647c8 = 1;
  }
  return;
}




void FUN_1004b6454(void)

{
  long lVar1;
  
  if ((DAT_1018647d8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857318,1,"SpawnCamp",0x40,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101864778;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018647d0;
    DAT_1018647d8 = 1;
  }
  return;
}




void FUN_1004b64b4(void)

{
  long lVar1;
  
  if ((DAT_1018647e0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857338,3,"SpawnCamp*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857318;
    DAT_1018647e0 = 1;
  }
  return;
}




void FUN_1004b650c(void)

{
  long lVar1;
  
  if ((DAT_1018647e8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857350,3,"SpawnCamp**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857338;
    DAT_1018647e8 = 1;
  }
  return;
}




void FUN_1004b6564(void)

{
  if ((DAT_101864820 & 1) == 0) {
    DAT_1018647f0 = 0;
    DAT_1018647f4 = 0;
    DAT_1018647f8 = PTR_DAT_101873138;
    DAT_101864800 = 0;
    DAT_101864804 = 8;
    DAT_101864808 = PTR_DAT_1018572b8;
    DAT_101864828 = DAT_101864828 + 3;
    DAT_101864810 = 0;
    DAT_101864814 = 0x10;
    DAT_101864818 = PTR_DAT_101872c98;
    DAT_101864820 = 1;
  }
  return;
}




void FUN_1004b65e0(void)

{
  long lVar1;
  
  if ((DAT_101864830 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857370,1,"NamedLocation",0x38,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018647f0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101864828;
    DAT_101864830 = 1;
  }
  return;
}




void FUN_1004b6640(void)

{
  long lVar1;
  
  if ((DAT_101864838 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857390,3,"NamedLocation*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857370;
    DAT_101864838 = 1;
  }
  return;
}




void FUN_1004b6698(void)

{
  long lVar1;
  
  if ((DAT_101864840 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018573a8,3,"NamedLocation**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857390;
    DAT_101864840 = 1;
  }
  return;
}




void FUN_1004b66f0(void)

{
  if ((DAT_101864a18 & 1) == 0) {
    DAT_101864848 = 0;
    DAT_10186484c = 0;
    DAT_101864850 = PTR_DAT_101873138;
    DAT_101864858 = 0;
    DAT_10186485c = 8;
    DAT_101864860 = PTR_DAT_101873138;
    DAT_101864868 = 0;
    DAT_10186486c = 0x10;
    DAT_101864870 = PTR_DAT_101873138;
    DAT_101864878 = 0;
    DAT_10186487c = 0x18;
    DAT_101864880 = PTR_DAT_101873138;
    DAT_101864888 = 0;
    DAT_10186488c = 0x20;
    DAT_101864890 = PTR_DAT_101873138;
    DAT_101864898 = 0;
    DAT_10186489c = 0x28;
    DAT_1018648a0 = PTR_DAT_101873138;
    DAT_1018648a8 = 0;
    DAT_1018648ac = 0x30;
    DAT_1018648b0 = PTR_DAT_1018730c0;
    DAT_1018648b8 = 0;
    DAT_1018648bc = 0x34;
    DAT_1018648c0 = PTR_DAT_101873118;
    DAT_1018648c8 = 0;
    DAT_1018648cc = 0x38;
    DAT_1018648d0 = PTR_DAT_1018730c0;
    DAT_1018648d8 = 0;
    DAT_1018648dc = 0x3c;
    DAT_1018648e0 = PTR_DAT_1018730c0;
    DAT_1018648e8 = 0;
    DAT_1018648ec = 0x40;
    DAT_1018648f0 = PTR_DAT_1018730c0;
    DAT_1018648f8 = 0;
    DAT_1018648fc = 0x48;
    DAT_101864900 = PTR_DAT_101856fb0;
    DAT_101864908 = 0;
    DAT_10186490c = 0x50;
    DAT_101864910 = PTR_DAT_1018572b8;
    DAT_101864918 = 0;
    DAT_10186491c = 0x58;
    DAT_101864920 = PTR_DAT_1018572b8;
    DAT_101864928 = 0;
    DAT_10186492c = 0x60;
    DAT_101864930 = PTR_DAT_101873118;
    DAT_101864938 = 0;
    DAT_10186493c = 0x68;
    DAT_101864940 = PTR_DAT_101873138;
    DAT_101864948 = 0;
    DAT_10186494c = 0x70;
    DAT_101864950 = PTR_DAT_101857128;
    DAT_101864958 = 0;
    DAT_10186495c = 400;
    DAT_101864960 = PTR_DAT_101873138;
    DAT_101864968 = 0;
    DAT_10186496c = 0x198;
    DAT_101864970 = PTR_DAT_101873118;
    DAT_101864978 = 0;
    DAT_10186497c = 0x199;
    DAT_101864980 = PTR_DAT_101873118;
    DAT_101864988 = 0;
    DAT_10186498c = 0x19a;
    DAT_101864990 = PTR_DAT_101873118;
    DAT_101864998 = 0;
    DAT_10186499c = 0x19b;
    DAT_1018649a0 = PTR_DAT_101873118;
    DAT_1018649a8 = 0;
    DAT_1018649ac = 0x19c;
    DAT_1018649b0 = PTR_DAT_101873118;
    DAT_1018649b8 = 0;
    DAT_1018649bc = 0x19d;
    DAT_1018649c0 = PTR_DAT_101873118;
    DAT_1018649c8 = 0;
    DAT_1018649cc = 0x19e;
    DAT_1018649d0 = PTR_DAT_101873118;
    DAT_1018649d8 = 0;
    DAT_1018649dc = 0x1a0;
    DAT_1018649e0 = PTR_DAT_101854f78;
    DAT_1018649e8 = 0;
    DAT_1018649ec = 0x1a4;
    DAT_1018649f0 = PTR_DAT_101873118;
    DAT_1018649f8 = 0;
    DAT_1018649fc = 0x1a8;
    DAT_101864a00 = PTR_DAT_101856028;
    DAT_101864a20 = DAT_101864a20 + 0x1d;
    DAT_101864a08 = 0;
    DAT_101864a0c = 0x1b0;
    DAT_101864a10 = PTR_DAT_101856e00;
    DAT_101864a18 = 1;
  }
  return;
}




void FUN_1004b6940(void)

{
  long lVar1;
  
  if ((DAT_101864a28 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018573c8,1,"Item",0x1b8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101864848;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101864a20;
    DAT_101864a28 = 1;
  }
  return;
}




void FUN_1004b69a0(void)

{
  long lVar1;
  
  if ((DAT_101864a30 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018573f0,3,"Item*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018573c8;
    DAT_101864a30 = 1;
  }
  return;
}




void FUN_1004b69f8(void)

{
  long lVar1;
  
  if ((DAT_101864a38 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857408,3,"Item**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018573f0;
    DAT_101864a38 = 1;
  }
  return;
}




void FUN_1004b6a50(void)

{
  if ((DAT_101864b10 & 1) == 0) {
    DAT_101864a40 = 0;
    DAT_101864a44 = 0;
    DAT_101864a48 = PTR_DAT_101873138;
    DAT_101864a50 = 0;
    DAT_101864a54 = 8;
    DAT_101864a58 = PTR_DAT_101873138;
    DAT_101864a60 = 0;
    DAT_101864a64 = 0x10;
    DAT_101864a68 = PTR_DAT_101873138;
    DAT_101864a70 = 0;
    DAT_101864a74 = 0x18;
    DAT_101864a78 = PTR_DAT_101873138;
    DAT_101864a80 = 0;
    DAT_101864a84 = 0x20;
    DAT_101864a88 = PTR_DAT_101873138;
    DAT_101864a90 = 0;
    DAT_101864a94 = 0x28;
    DAT_101864a98 = PTR_DAT_101873138;
    DAT_101864aa0 = 0;
    DAT_101864aa4 = 0x30;
    DAT_101864aa8 = PTR_DAT_101873138;
    DAT_101864ab0 = 0;
    DAT_101864ab4 = 0x38;
    DAT_101864ab8 = PTR_DAT_1018572b8;
    DAT_101864ac0 = 0;
    DAT_101864ac4 = 0x40;
    DAT_101864ac8 = PTR_DAT_101873138;
    DAT_101864ad0 = 0;
    DAT_101864ad4 = 0x48;
    DAT_101864ad8 = PTR_DAT_101856080;
    DAT_101864ae0 = 0;
    DAT_101864ae4 = 0x50;
    DAT_101864ae8 = PTR_DAT_101873118;
    DAT_101864af0 = 0;
    DAT_101864af4 = 0x51;
    DAT_101864af8 = PTR_DAT_101873118;
    DAT_101864b18 = DAT_101864b18 + 0xd;
    DAT_101864b00 = 0;
    DAT_101864b04 = 0x52;
    DAT_101864b08 = PTR_DAT_101873118;
    DAT_101864b10 = 1;
  }
  return;
}




void FUN_1004b6b74(void)

{
  long lVar1;
  
  if ((DAT_101864b20 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857420,1,"RecommendedBuildPath",0x58,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101864a40;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101864b18;
    DAT_101864b20 = 1;
  }
  return;
}




void FUN_1004b6bd4(void)

{
  long lVar1;
  
  if ((DAT_101864b28 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857440,3,"RecommendedBuildPath*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857420;
    DAT_101864b28 = 1;
  }
  return;
}




void FUN_1004b6c2c(void)

{
  long lVar1;
  
  if ((DAT_101864b30 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857458,3,"RecommendedBuildPath**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857440;
    DAT_101864b30 = 1;
  }
  return;
}




void FUN_1004b6c84(void)

{
  if ((DAT_101864ba8 & 1) == 0) {
    DAT_101864b38 = 0;
    DAT_101864b3c = 0;
    DAT_101864b40 = PTR_DAT_101873138;
    DAT_101864b48 = 0;
    DAT_101864b4c = 8;
    DAT_101864b50 = PTR_DAT_101873138;
    DAT_101864b58 = 0;
    DAT_101864b5c = 0x10;
    DAT_101864b60 = PTR_DAT_1018730c0;
    DAT_101864b68 = 0;
    DAT_101864b6c = 0x18;
    DAT_101864b70 = PTR_DAT_1018572b8;
    DAT_101864b78 = 0;
    DAT_101864b7c = 0x20;
    DAT_101864b80 = PTR_DAT_101873118;
    DAT_101864b88 = 0;
    DAT_101864b8c = 0x24;
    DAT_101864b90 = PTR_DAT_101856d20;
    DAT_101864bb0 = DAT_101864bb0 + 7;
    DAT_101864b98 = 0;
    DAT_101864b9c = 0x38;
    DAT_101864ba0 = PTR_DAT_1018572b8;
    DAT_101864ba8 = 1;
  }
  return;
}




void FUN_1004b6d54(void)

{
  long lVar1;
  
  if ((DAT_101864bb8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857478,1,"Structure",0x40,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101864b38;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101864bb0;
    DAT_101864bb8 = 1;
  }
  return;
}




void FUN_1004b6db4(void)

{
  long lVar1;
  
  if ((DAT_101864bc0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857498,3,"Structure*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857478;
    DAT_101864bc0 = 1;
  }
  return;
}




void FUN_1004b6e0c(void)

{
  long lVar1;
  
  if ((DAT_101864bc8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018574b0,3,"Structure**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857498;
    DAT_101864bc8 = 1;
  }
  return;
}




void FUN_1004b6e64(void)

{
  if ((DAT_101864be0 & 1) == 0) {
    DAT_101864be8 = DAT_101864be8 + 1;
    DAT_101864bd0 = 0;
    DAT_101864bd4 = 0;
    DAT_101864bd8 = PTR_DAT_1018574c8;
    DAT_101864be0 = 1;
  }
  return;
}




void FUN_1004b6ea8(void)

{
  long lVar1;
  
  if ((DAT_101864bf0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018574d0,1,"LevelLayout",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101864bd0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101864be8;
    DAT_101864bf0 = 1;
  }
  return;
}




void FUN_1004b6f08(void)

{
  long lVar1;
  
  if ((DAT_101864bf8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018574f0,3,"LevelLayout*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018574d0;
    DAT_101864bf8 = 1;
  }
  return;
}




void FUN_1004b6f60(void)

{
  long lVar1;
  
  if ((DAT_101864c00 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857508,3,"LevelLayout**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018574f0;
    DAT_101864c00 = 1;
  }
  return;
}




void FUN_1004b6fb8(void)

{
  if ((DAT_101864c98 & 1) == 0) {
    DAT_101864c08 = 0;
    DAT_101864c0c = 0;
    DAT_101864c10 = PTR_DAT_101873138;
    DAT_101864c18 = 0;
    DAT_101864c1c = 8;
    DAT_101864c20 = PTR_DAT_101873138;
    DAT_101864c28 = 0;
    DAT_101864c2c = 0x10;
    DAT_101864c30 = PTR_DAT_101873138;
    DAT_101864c38 = 0;
    DAT_101864c3c = 0x18;
    DAT_101864c40 = PTR_DAT_101873138;
    DAT_101864c48 = 0;
    DAT_101864c4c = 0x20;
    DAT_101864c50 = PTR_DAT_101873138;
    DAT_101864c58 = 0;
    DAT_101864c5c = 0x28;
    DAT_101864c60 = PTR_DAT_101873138;
    DAT_101864c68 = 0;
    DAT_101864c6c = 0x30;
    DAT_101864c70 = PTR_DAT_101873138;
    DAT_101864c78 = 0;
    DAT_101864c7c = 0x38;
    DAT_101864c80 = PTR_DAT_101873138;
    DAT_101864ca0 = DAT_101864ca0 + 9;
    DAT_101864c88 = 0;
    DAT_101864c8c = 0x40;
    DAT_101864c90 = PTR_DAT_1018572b8;
    DAT_101864c98 = 1;
  }
  return;
}




void FUN_1004b7088(void)

{
  long lVar1;
  
  if ((DAT_101864ca8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857520,1,"PlayMenuDropdownOption",0x48,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101864c08;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101864ca0;
    DAT_101864ca8 = 1;
  }
  return;
}




void FUN_1004b70e8(void)

{
  long lVar1;
  
  if ((DAT_101864cb0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857540,3,"PlayMenuDropdownOption*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857520;
    DAT_101864cb0 = 1;
  }
  return;
}




void FUN_1004b7140(void)

{
  long lVar1;
  
  if ((DAT_101864cb8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857558,3,"PlayMenuDropdownOption**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857540;
    DAT_101864cb8 = 1;
  }
  return;
}




void FUN_1004b7198(void)

{
  if ((DAT_101864cf0 & 1) == 0) {
    DAT_101864cc0 = 0;
    DAT_101864cc4 = 0;
    DAT_101864cc8 = PTR_DAT_101873138;
    DAT_101864cd0 = 0;
    DAT_101864cd4 = 8;
    DAT_101864cd8 = PTR_DAT_101873138;
    DAT_101864cf8 = DAT_101864cf8 + 3;
    DAT_101864ce0 = 0;
    DAT_101864ce4 = 0x10;
    DAT_101864ce8 = PTR_DAT_101857570;
    DAT_101864cf0 = 1;
  }
  return;
}




void FUN_1004b7208(void)

{
  long lVar1;
  
  if ((DAT_101864d00 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857578,1,"PlayMenuDropdown",0x18,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101864cc0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101864cf8;
    DAT_101864d00 = 1;
  }
  return;
}




void FUN_1004b7268(void)

{
  long lVar1;
  
  if ((DAT_101864d08 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857598,3,"PlayMenuDropdown*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857578;
    DAT_101864d08 = 1;
  }
  return;
}




void FUN_1004b72c0(void)

{
  long lVar1;
  
  if ((DAT_101864d10 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018575b0,3,"PlayMenuDropdown**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857598;
    DAT_101864d10 = 1;
  }
  return;
}




void FUN_1004b7318(void)

{
  if ((DAT_101864e08 & 1) == 0) {
    DAT_101864d18 = 0;
    DAT_101864d1c = 0;
    DAT_101864d20 = PTR_DAT_101873138;
    DAT_101864d28 = 0;
    DAT_101864d2c = 8;
    DAT_101864d30 = PTR_DAT_101873138;
    DAT_101864d38 = 0;
    DAT_101864d3c = 0x10;
    DAT_101864d40 = PTR_DAT_101873138;
    DAT_101864d48 = 0;
    DAT_101864d4c = 0x18;
    DAT_101864d50 = PTR_DAT_101873138;
    DAT_101864d58 = 0;
    DAT_101864d5c = 0x20;
    DAT_101864d60 = PTR_DAT_101873138;
    DAT_101864d68 = 0;
    DAT_101864d6c = 0x28;
    DAT_101864d70 = PTR_DAT_101873138;
    DAT_101864d78 = 0;
    DAT_101864d7c = 0x30;
    DAT_101864d80 = PTR_DAT_101873138;
    DAT_101864d88 = 0;
    DAT_101864d8c = 0x38;
    DAT_101864d90 = PTR_DAT_101873138;
    DAT_101864d98 = 0;
    DAT_101864d9c = 0x40;
    DAT_101864da0 = PTR_DAT_101873138;
    DAT_101864da8 = 0;
    DAT_101864dac = 0x48;
    DAT_101864db0 = PTR_DAT_101873138;
    DAT_101864db8 = 0;
    DAT_101864dbc = 0x50;
    DAT_101864dc0 = PTR_DAT_101873138;
    DAT_101864dc8 = 0;
    DAT_101864dcc = 0x58;
    DAT_101864dd0 = PTR_DAT_101873138;
    DAT_101864dd8 = 0;
    DAT_101864ddc = 0x60;
    DAT_101864de0 = PTR_DAT_101873138;
    DAT_101864de8 = 0;
    DAT_101864dec = 0x68;
    DAT_101864df0 = PTR_DAT_1018730c0;
    DAT_101864e10 = DAT_101864e10 + 0xf;
    DAT_101864df8 = 0;
    DAT_101864dfc = 0x70;
    DAT_101864e00 = PTR_DAT_1018575c8;
    DAT_101864e08 = 1;
  }
  return;
}




void FUN_1004b7454(void)

{
  long lVar1;
  
  if ((DAT_101864e18 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018575d0,1,"PlayMenuMode",0x78,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101864d18;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101864e10;
    DAT_101864e18 = 1;
  }
  return;
}




void FUN_1004b74b4(void)

{
  long lVar1;
  
  if ((DAT_101864e20 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018575f0,3,"PlayMenuMode*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018575d0;
    DAT_101864e20 = 1;
  }
  return;
}




void FUN_1004b750c(void)

{
  long lVar1;
  
  if ((DAT_101864e28 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857608,3,"PlayMenuMode**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018575f0;
    DAT_101864e28 = 1;
  }
  return;
}




void FUN_1004b7564(void)

{
  if ((DAT_101864e40 & 1) == 0) {
    DAT_101864e48 = DAT_101864e48 + 1;
    DAT_101864e30 = 0;
    DAT_101864e34 = 0;
    DAT_101864e38 = PTR_DAT_101857620;
    DAT_101864e40 = 1;
  }
  return;
}




void FUN_1004b75a8(void)

{
  long lVar1;
  
  if ((DAT_101864e50 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857628,1,"PlayMenu",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101864e30;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101864e48;
    DAT_101864e50 = 1;
  }
  return;
}




void FUN_1004b7608(void)

{
  long lVar1;
  
  if ((DAT_101864e58 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857648,3,"PlayMenu*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857628;
    DAT_101864e58 = 1;
  }
  return;
}




void FUN_1004b7660(void)

{
  long lVar1;
  
  if ((DAT_101864e60 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857660,3,"PlayMenu**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857648;
    DAT_101864e60 = 1;
  }
  return;
}




void FUN_1004b76b8(void)

{
  if ((DAT_101864fe8 & 1) == 0) {
    DAT_101864e68 = 0;
    DAT_101864e6c = 0;
    DAT_101864e70 = PTR_DAT_101873138;
    DAT_101864e78 = 0;
    DAT_101864e7c = 8;
    DAT_101864e80 = PTR_DAT_101873118;
    DAT_101864e88 = 0;
    DAT_101864e8c = 0x10;
    DAT_101864e90 = PTR_DAT_101873138;
    DAT_101864e98 = 0;
    DAT_101864e9c = 0x18;
    DAT_101864ea0 = PTR_DAT_101873138;
    DAT_101864ea8 = 0;
    DAT_101864eac = 0x20;
    DAT_101864eb0 = PTR_DAT_101873138;
    DAT_101864eb8 = 0;
    DAT_101864ebc = 0x28;
    DAT_101864ec0 = PTR_DAT_101873138;
    DAT_101864ec8 = 0;
    DAT_101864ecc = 0x30;
    DAT_101864ed0 = PTR_DAT_101873138;
    DAT_101864ed8 = 0;
    DAT_101864edc = 0x38;
    DAT_101864ee0 = PTR_DAT_1018572b8;
    DAT_101864ee8 = 0;
    DAT_101864eec = 0x40;
    DAT_101864ef0 = PTR_DAT_101873138;
    DAT_101864ef8 = 0;
    DAT_101864efc = 0x48;
    DAT_101864f00 = PTR_DAT_101873138;
    DAT_101864f08 = 0;
    DAT_101864f0c = 0x50;
    DAT_101864f10 = PTR_DAT_101873138;
    DAT_101864f18 = 0;
    DAT_101864f1c = 0x58;
    DAT_101864f20 = PTR_DAT_1018730c0;
    DAT_101864f28 = 0;
    DAT_101864f2c = 0x5c;
    DAT_101864f30 = PTR_DAT_1018730c0;
    DAT_101864f38 = 0;
    DAT_101864f3c = 0x60;
    DAT_101864f40 = PTR_DAT_1018730c0;
    DAT_101864f48 = 0;
    DAT_101864f4c = 100;
    DAT_101864f50 = PTR_DAT_1018730c0;
    DAT_101864f58 = 0;
    DAT_101864f5c = 0x68;
    DAT_101864f60 = PTR_DAT_1018730c0;
    DAT_101864f68 = 0;
    DAT_101864f6c = 0x6c;
    DAT_101864f70 = PTR_DAT_101856bc8;
    DAT_101864f78 = 0;
    DAT_101864f7c = 0x7c;
    DAT_101864f80 = PTR_DAT_101856bc8;
    DAT_101864f88 = 0;
    DAT_101864f8c = 0x8c;
    DAT_101864f90 = PTR_DAT_1018730c0;
    DAT_101864f98 = 0;
    DAT_101864f9c = 0x90;
    DAT_101864fa0 = PTR_DAT_1018730c0;
    DAT_101864fa8 = 0;
    DAT_101864fac = 0x94;
    DAT_101864fb0 = PTR_DAT_1018730c0;
    DAT_101864fb8 = 0;
    DAT_101864fbc = 0x98;
    DAT_101864fc0 = PTR_DAT_1018730c0;
    DAT_101864fc8 = 0;
    DAT_101864fcc = 0x9c;
    DAT_101864fd0 = PTR_DAT_1018730c0;
    DAT_101864ff0 = DAT_101864ff0 + 0x18;
    DAT_101864fd8 = 0;
    DAT_101864fdc = 0xa0;
    DAT_101864fe0 = PTR_DAT_1018730c0;
    DAT_101864fe8 = 1;
  }
  return;
}




void FUN_1004b7898(void)

{
  long lVar1;
  
  if ((DAT_101864ff8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857678,1,"HeroEntry",0xa8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101864e68;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101864ff0;
    DAT_101864ff8 = 1;
  }
  return;
}




void FUN_1004b78f8(void)

{
  long lVar1;
  
  if ((DAT_101865000 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857698,3,"HeroEntry*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857678;
    DAT_101865000 = 1;
  }
  return;
}




void FUN_1004b7950(void)

{
  long lVar1;
  
  if ((DAT_101865008 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018576b0,3,"HeroEntry**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857698;
    DAT_101865008 = 1;
  }
  return;
}




void FUN_1004b79a8(void)

{
  if ((DAT_101865020 & 1) == 0) {
    DAT_101865028 = DAT_101865028 + 1;
    DAT_101865010 = 0;
    DAT_101865014 = 0;
    DAT_101865018 = PTR_DAT_1018576c8;
    DAT_101865020 = 1;
  }
  return;
}




void FUN_1004b79ec(void)

{
  long lVar1;
  
  if ((DAT_101865030 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018576d0,1,"HeroManifest",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865010;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101865028;
    DAT_101865030 = 1;
  }
  return;
}




void FUN_1004b7a4c(void)

{
  long lVar1;
  
  if ((DAT_101865038 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018576f0,3,"HeroManifest*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018576d0;
    DAT_101865038 = 1;
  }
  return;
}




void FUN_1004b7aa4(void)

{
  long lVar1;
  
  if ((DAT_101865040 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857708,3,"HeroManifest**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018576f0;
    DAT_101865040 = 1;
  }
  return;
}




void FUN_1004b7afc(void)

{
  if ((DAT_101865508 & 1) == 0) {
    DAT_101865048 = 0;
    DAT_10186504c = 0;
    DAT_101865050 = PTR_DAT_1018730f0;
    DAT_101865058 = 0;
    DAT_10186505c = 4;
    DAT_101865060 = PTR_DAT_1018730f0;
    DAT_101865068 = 0;
    DAT_10186506c = 8;
    DAT_101865070 = PTR_DAT_1018730f0;
    DAT_101865078 = 0;
    DAT_10186507c = 0xc;
    DAT_101865080 = PTR_DAT_1018730f0;
    DAT_101865088 = 0;
    DAT_10186508c = 0x10;
    DAT_101865090 = PTR_DAT_1018730f0;
    DAT_101865098 = 0;
    DAT_10186509c = 0x14;
    DAT_1018650a0 = PTR_DAT_1018730f0;
    DAT_1018650a8 = 0;
    DAT_1018650ac = 0x18;
    DAT_1018650b0 = PTR_DAT_1018730f0;
    DAT_1018650b8 = 0;
    DAT_1018650bc = 0x1c;
    DAT_1018650c0 = PTR_DAT_1018730f0;
    DAT_1018650c8 = 0;
    DAT_1018650cc = 0x20;
    DAT_1018650d0 = PTR_DAT_1018730f0;
    DAT_1018650d8 = 0;
    DAT_1018650dc = 0x24;
    DAT_1018650e0 = PTR_DAT_1018730f0;
    DAT_1018650e8 = 0;
    DAT_1018650ec = 0x28;
    DAT_1018650f0 = PTR_DAT_1018730c0;
    DAT_1018650f8 = 0;
    DAT_1018650fc = 0x2c;
    DAT_101865100 = PTR_DAT_1018730f0;
    DAT_101865108 = 0;
    DAT_10186510c = 0x30;
    DAT_101865110 = PTR_DAT_1018730f0;
    DAT_101865118 = 0;
    DAT_10186511c = 0x34;
    DAT_101865120 = PTR_DAT_1018730f0;
    DAT_101865128 = 0;
    DAT_10186512c = 0x38;
    DAT_101865130 = PTR_DAT_1018730f0;
    DAT_101865138 = 0;
    DAT_10186513c = 0x3c;
    DAT_101865140 = PTR_DAT_1018730f0;
    DAT_101865148 = 0;
    DAT_10186514c = 0x40;
    DAT_101865150 = PTR_DAT_1018730f0;
    DAT_101865158 = 0;
    DAT_10186515c = 0x44;
    DAT_101865160 = PTR_DAT_1018730f0;
    DAT_101865168 = 0;
    DAT_10186516c = 0x48;
    DAT_101865170 = PTR_DAT_1018730f0;
    DAT_101865178 = 0;
    DAT_10186517c = 0x4c;
    DAT_101865180 = PTR_DAT_1018730f0;
    DAT_101865188 = 0;
    DAT_10186518c = 0x50;
    DAT_101865190 = PTR_DAT_1018730f0;
    DAT_101865198 = 0;
    DAT_10186519c = 0x54;
    DAT_1018651a0 = PTR_DAT_1018730f0;
    DAT_1018651a8 = 0;
    DAT_1018651ac = 0x58;
    DAT_1018651b0 = PTR_DAT_1018730f0;
    DAT_1018651b8 = 0;
    DAT_1018651bc = 0x5c;
    DAT_1018651c0 = PTR_DAT_1018730f0;
    DAT_1018651c8 = 0;
    DAT_1018651cc = 0x60;
    DAT_1018651d0 = PTR_DAT_1018730f0;
    DAT_1018651d8 = 0;
    DAT_1018651dc = 100;
    DAT_1018651e0 = PTR_DAT_1018730f0;
    DAT_1018651e8 = 0;
    DAT_1018651ec = 0x68;
    DAT_1018651f0 = PTR_DAT_1018730f0;
    DAT_1018651f8 = 0;
    DAT_1018651fc = 0x6c;
    DAT_101865200 = PTR_DAT_1018730f0;
    DAT_101865208 = 0;
    DAT_10186520c = 0x70;
    DAT_101865210 = PTR_DAT_1018730f0;
    DAT_101865218 = 0;
    DAT_10186521c = 0x74;
    DAT_101865220 = PTR_DAT_1018730f0;
    DAT_101865228 = 0;
    DAT_10186522c = 0x78;
    DAT_101865230 = PTR_DAT_1018730f0;
    DAT_101865238 = 0;
    DAT_10186523c = 0x7c;
    DAT_101865240 = PTR_DAT_1018730f0;
    DAT_101865248 = 0;
    DAT_10186524c = 0x80;
    DAT_101865250 = PTR_DAT_1018730f0;
    DAT_101865258 = 0;
    DAT_10186525c = 0x84;
    DAT_101865260 = PTR_DAT_1018730f0;
    DAT_101865268 = 0;
    DAT_10186526c = 0x88;
    DAT_101865270 = PTR_DAT_1018730f0;
    DAT_101865278 = 0;
    DAT_10186527c = 0x8c;
    DAT_101865280 = PTR_DAT_1018730f0;
    DAT_101865288 = 0;
    DAT_10186528c = 0x90;
    DAT_101865290 = PTR_DAT_1018730f0;
    DAT_101865298 = 0;
    DAT_10186529c = 0x94;
    DAT_1018652a0 = PTR_DAT_1018730f0;
    DAT_1018652a8 = 0;
    DAT_1018652ac = 0x98;
    DAT_1018652b0 = PTR_DAT_1018730f0;
    DAT_1018652b8 = 0;
    DAT_1018652bc = 0x9c;
    DAT_1018652c0 = PTR_DAT_1018730f0;
    DAT_1018652c8 = 0;
    DAT_1018652cc = 0xa0;
    DAT_1018652d0 = PTR_DAT_1018730c0;
    DAT_1018652d8 = 0;
    DAT_1018652dc = 0xa4;
    DAT_1018652e0 = PTR_DAT_1018730f0;
    DAT_1018652e8 = 0;
    DAT_1018652ec = 0xa8;
    DAT_1018652f0 = PTR_DAT_1018730f0;
    DAT_1018652f8 = 0;
    DAT_1018652fc = 0xac;
    DAT_101865300 = PTR_DAT_1018730f0;
    DAT_101865308 = 0;
    DAT_10186530c = 0xb0;
    DAT_101865310 = PTR_DAT_1018730f0;
    DAT_101865318 = 0;
    DAT_10186531c = 0xb4;
    DAT_101865320 = PTR_DAT_1018730f0;
    DAT_101865328 = 0;
    DAT_10186532c = 0xb8;
    DAT_101865330 = PTR_DAT_1018730f0;
    DAT_101865338 = 0;
    DAT_10186533c = 0xbc;
    DAT_101865340 = PTR_DAT_1018730f0;
    DAT_101865348 = 0;
    DAT_10186534c = 0xc0;
    DAT_101865350 = PTR_DAT_1018730f0;
    DAT_101865358 = 0;
    DAT_10186535c = 0xc4;
    DAT_101865360 = PTR_DAT_1018730f0;
    DAT_101865368 = 0;
    DAT_10186536c = 200;
    DAT_101865370 = PTR_DAT_1018730f0;
    DAT_101865378 = 0;
    DAT_10186537c = 0xcc;
    DAT_101865380 = PTR_DAT_1018730f0;
    DAT_101865388 = 0;
    DAT_10186538c = 0xd0;
    DAT_101865390 = PTR_DAT_1018730f0;
    DAT_101865398 = 0;
    DAT_10186539c = 0xd4;
    DAT_1018653a0 = PTR_DAT_1018730f0;
    DAT_1018653a8 = 0;
    DAT_1018653ac = 0xd8;
    DAT_1018653b0 = PTR_DAT_1018730f0;
    DAT_1018653b8 = 0;
    DAT_1018653bc = 0xdc;
    DAT_1018653c0 = PTR_DAT_101873118;
    DAT_1018653c8 = 0;
    DAT_1018653cc = 0xdd;
    DAT_1018653d0 = PTR_DAT_101873118;
    DAT_1018653d8 = 0;
    DAT_1018653dc = 0xe0;
    DAT_1018653e0 = PTR_DAT_1018730f0;
    DAT_1018653e8 = 0;
    DAT_1018653ec = 0xe4;
    DAT_1018653f0 = PTR_DAT_101873118;
    DAT_1018653f8 = 0;
    DAT_1018653fc = 0xe5;
    DAT_101865400 = PTR_DAT_101873118;
    DAT_101865408 = 0;
    DAT_10186540c = 0xe6;
    DAT_101865410 = PTR_DAT_101873118;
    DAT_101865418 = 0;
    DAT_10186541c = 0xe8;
    DAT_101865420 = PTR_DAT_101856868;
    DAT_101865428 = 0;
    DAT_10186542c = 0x100;
    DAT_101865430 = PTR_DAT_101856438;
    DAT_101865438 = 0;
    DAT_10186543c = 0x108;
    DAT_101865440 = PTR_DAT_101856438;
    DAT_101865448 = 0;
    DAT_10186544c = 0x110;
    DAT_101865450 = PTR_DAT_101856438;
    DAT_101865458 = 0;
    DAT_10186545c = 0x118;
    DAT_101865460 = PTR_DAT_101856438;
    DAT_101865468 = 0;
    DAT_10186546c = 0x120;
    DAT_101865470 = PTR_DAT_101856438;
    DAT_101865478 = 0;
    DAT_10186547c = 0x128;
    DAT_101865480 = PTR_DAT_101873138;
    DAT_101865488 = 0;
    DAT_10186548c = 0x130;
    DAT_101865490 = PTR_DAT_101873138;
    DAT_101865498 = 0;
    DAT_10186549c = 0x138;
    DAT_1018654a0 = PTR_DAT_1018572b8;
    DAT_1018654a8 = 0;
    DAT_1018654ac = 0x140;
    DAT_1018654b0 = PTR_DAT_1018564e8;
    DAT_1018654b8 = 0;
    DAT_1018654bc = 0x148;
    DAT_1018654c0 = PTR_DAT_1018564e8;
    DAT_1018654c8 = 0;
    DAT_1018654cc = 0x150;
    DAT_1018654d0 = PTR_DAT_1018572b8;
    DAT_1018654d8 = 0;
    DAT_1018654dc = 0x158;
    DAT_1018654e0 = PTR_DAT_1018572b8;
    DAT_1018654e8 = 0;
    DAT_1018654ec = 0x160;
    DAT_1018654f0 = PTR_DAT_1018572b8;
    DAT_101865510 = DAT_101865510 + 0x4c;
    DAT_1018654f8 = 0;
    DAT_1018654fc = 0x168;
    DAT_101865500 = PTR_DAT_101855e78;
    DAT_101865508 = 1;
  }
  return;
}




void FUN_1004b8044(void)

{
  long lVar1;
  
  if ((DAT_101865518 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857720,1,"GameplaySettings",0x170,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865048;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101865510;
    DAT_101865518 = 1;
  }
  return;
}




void FUN_1004b80a4(void)

{
  long lVar1;
  
  if ((DAT_101865520 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857748,3,"GameplaySettings*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857720;
    DAT_101865520 = 1;
  }
  return;
}




void FUN_1004b80fc(void)

{
  long lVar1;
  
  if ((DAT_101865528 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857760,3,"GameplaySettings**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857748;
    DAT_101865528 = 1;
  }
  return;
}




void FUN_1004b8154(void)

{
  if ((DAT_1018655f0 & 1) == 0) {
    DAT_101865530 = 0;
    DAT_101865534 = 0;
    DAT_101865538 = PTR_DAT_101854d98;
    DAT_101865540 = 0;
    DAT_101865544 = 4;
    DAT_101865548 = PTR_DAT_101873118;
    DAT_101865550 = 0;
    DAT_101865554 = 8;
    DAT_101865558 = PTR_DAT_1018730f0;
    DAT_101865560 = 0;
    DAT_101865564 = 0xc;
    DAT_101865568 = PTR_DAT_1018730f0;
    DAT_101865570 = 0;
    DAT_101865574 = 0x10;
    DAT_101865578 = PTR_DAT_101854d70;
    DAT_101865580 = 0;
    DAT_101865584 = 0x14;
    DAT_101865588 = PTR_DAT_101873118;
    DAT_101865590 = 0;
    DAT_101865594 = 0x18;
    DAT_101865598 = PTR_DAT_101873138;
    DAT_1018655a0 = 0;
    DAT_1018655a4 = 0x20;
    DAT_1018655a8 = PTR_DAT_101873138;
    DAT_1018655b0 = 0;
    DAT_1018655b4 = 0x28;
    DAT_1018655b8 = PTR_DAT_101873138;
    DAT_1018655c0 = 0;
    DAT_1018655c4 = 0x30;
    DAT_1018655c8 = PTR_DAT_101873138;
    DAT_1018655d0 = 0;
    DAT_1018655d4 = 0x38;
    DAT_1018655d8 = PTR_DAT_1018572b8;
    DAT_1018655f8 = DAT_1018655f8 + 0xc;
    DAT_1018655e0 = 0;
    DAT_1018655e4 = 0x40;
    DAT_1018655e8 = PTR_DAT_1018572b8;
    DAT_1018655f0 = 1;
  }
  return;
}




void FUN_1004b827c(void)

{
  long lVar1;
  
  if ((DAT_101865600 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857778,1,"BasicAttackEntry",0x48,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865530;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018655f8;
    DAT_101865600 = 1;
  }
  return;
}




void FUN_1004b82dc(void)

{
  long lVar1;
  
  if ((DAT_101865608 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857798,3,"BasicAttackEntry*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857778;
    DAT_101865608 = 1;
  }
  return;
}




void FUN_1004b8334(void)

{
  long lVar1;
  
  if ((DAT_101865610 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018577b0,3,"BasicAttackEntry**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857798;
    DAT_101865610 = 1;
  }
  return;
}




void FUN_1004b838c(void)

{
  if ((DAT_101865638 & 1) == 0) {
    DAT_101865618 = 0;
    DAT_10186561c = 0;
    DAT_101865620 = PTR_DAT_101873118;
    DAT_101865640 = DAT_101865640 + 2;
    DAT_101865628 = 0;
    DAT_10186562c = 8;
    DAT_101865630 = PTR_DAT_1018577c8;
    DAT_101865638 = 1;
  }
  return;
}




void FUN_1004b83ec(void)

{
  long lVar1;
  
  if ((DAT_101865648 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018577d0,1,"BasicAttackSelection",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865618;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101865640;
    DAT_101865648 = 1;
  }
  return;
}




void FUN_1004b844c(void)

{
  long lVar1;
  
  if ((DAT_101865650 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018577f8,3,"BasicAttackSelection*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018577d0;
    DAT_101865650 = 1;
  }
  return;
}




void FUN_1004b84a4(void)

{
  long lVar1;
  
  if ((DAT_101865658 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857810,3,"BasicAttackSelection**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018577f8;
    DAT_101865658 = 1;
  }
  return;
}




void FUN_1004b84fc(void)

{
  if ((DAT_101865710 & 1) == 0) {
    DAT_101865660 = 0;
    DAT_101865664 = 0;
    DAT_101865668 = PTR_DAT_101856438;
    DAT_101865670 = 0;
    DAT_101865674 = 8;
    DAT_101865678 = PTR_DAT_1018572b8;
    DAT_101865680 = 0;
    DAT_101865684 = 0x10;
    DAT_101865688 = PTR_DAT_101873138;
    DAT_101865690 = 0;
    DAT_101865694 = 0x18;
    DAT_101865698 = PTR_DAT_101873138;
    DAT_1018656a0 = 0;
    DAT_1018656a4 = 0x20;
    DAT_1018656a8 = PTR_DAT_101873138;
    DAT_1018656b0 = 0;
    DAT_1018656b4 = 0x28;
    DAT_1018656b8 = PTR_DAT_101873138;
    DAT_1018656c0 = 0;
    DAT_1018656c4 = 0x30;
    DAT_1018656c8 = PTR_DAT_101857160;
    DAT_1018656d0 = 0;
    DAT_1018656d4 = 0x38;
    DAT_1018656d8 = PTR_DAT_1018577f0;
    DAT_1018656e0 = 0;
    DAT_1018656e4 = 0x48;
    DAT_1018656e8 = PTR_DAT_1018730c0;
    DAT_1018656f0 = 0;
    DAT_1018656f4 = 0x4c;
    DAT_1018656f8 = PTR_DAT_1018730c0;
    DAT_101865718 = DAT_101865718 + 0xb;
    DAT_101865700 = 0;
    DAT_101865704 = 0x50;
    DAT_101865708 = PTR_DAT_1018730c0;
    DAT_101865710 = 1;
  }
  return;
}




void FUN_1004b8610(void)

{
  long lVar1;
  
  if ((DAT_101865720 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857828,1,"AbilitySet",0x58,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865660;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101865718;
    DAT_101865720 = 1;
  }
  return;
}




void FUN_1004b8670(void)

{
  long lVar1;
  
  if ((DAT_101865728 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857850,3,"AbilitySet*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857828;
    DAT_101865728 = 1;
  }
  return;
}




void FUN_1004b86c8(void)

{
  long lVar1;
  
  if ((DAT_101865730 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857868,3,"AbilitySet**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857850;
    DAT_101865730 = 1;
  }
  return;
}




void FUN_1004b8720(void)

{
  if ((DAT_101865788 & 1) == 0) {
    DAT_101865738 = 0;
    DAT_10186573c = 0;
    DAT_101865740 = PTR_DAT_101873138;
    DAT_101865748 = 0;
    DAT_10186574c = 8;
    DAT_101865750 = PTR_DAT_101873138;
    DAT_101865758 = 0;
    DAT_10186575c = 0x10;
    DAT_101865760 = PTR_DAT_101873138;
    DAT_101865768 = 0;
    DAT_10186576c = 0x18;
    DAT_101865770 = PTR_DAT_101873138;
    DAT_101865790 = DAT_101865790 + 5;
    DAT_101865778 = 0;
    DAT_10186577c = 0x20;
    DAT_101865780 = PTR_DAT_101873138;
    DAT_101865788 = 1;
  }
  return;
}




void FUN_1004b87a8(void)

{
  long lVar1;
  
  if ((DAT_101865798 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857880,1,"CharmVOLine",0x28,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865738;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101865790;
    DAT_101865798 = 1;
  }
  return;
}




void FUN_1004b8808(void)

{
  long lVar1;
  
  if ((DAT_1018657a0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018578a0,3,"CharmVOLine*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857880;
    DAT_1018657a0 = 1;
  }
  return;
}




void FUN_1004b8860(void)

{
  long lVar1;
  
  if ((DAT_1018657a8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018578b8,3,"CharmVOLine**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018578a0;
    DAT_1018657a8 = 1;
  }
  return;
}




void FUN_1004b88b8(void)

{
  if ((DAT_1018657d0 & 1) == 0) {
    DAT_1018657b0 = 0;
    DAT_1018657b4 = 0;
    DAT_1018657b8 = PTR_DAT_101873118;
    DAT_1018657d8 = DAT_1018657d8 + 2;
    DAT_1018657c0 = 0;
    DAT_1018657c4 = 4;
    DAT_1018657c8 = PTR_DAT_101872c38;
    DAT_1018657d0 = 1;
  }
  return;
}




void FUN_1004b891c(void)

{
  long lVar1;
  
  if ((DAT_1018657e0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018578d8,1,"ShadowingSettings",0x10,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018657b0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018657d8;
    DAT_1018657e0 = 1;
  }
  return;
}




void FUN_1004b897c(void)

{
  long lVar1;
  
  if ((DAT_1018657e8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857900,3,"ShadowingSettings*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018578d8;
    DAT_1018657e8 = 1;
  }
  return;
}




void FUN_1004b89d4(void)

{
  long lVar1;
  
  if ((DAT_1018657f0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857918,3,"ShadowingSettings**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857900;
    DAT_1018657f0 = 1;
  }
  return;
}




void FUN_1004b8a2c(void)

{
  if ((DAT_101865808 & 1) == 0) {
    DAT_101865810 = DAT_101865810 + 1;
    DAT_1018657f8 = 0;
    DAT_1018657fc = 0;
    DAT_101865800 = PTR_DAT_101873138;
    DAT_101865808 = 1;
  }
  return;
}




void FUN_1004b8a74(void)

{
  long lVar1;
  
  if ((DAT_101865818 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857930,1,"NotApplicableSkin",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018657f8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101865810;
    DAT_101865818 = 1;
  }
  return;
}




void FUN_1004b8ad4(void)

{
  long lVar1;
  
  if ((DAT_101865820 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857950,3,"NotApplicableSkin*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857930;
    DAT_101865820 = 1;
  }
  return;
}




void FUN_1004b8b2c(void)

{
  long lVar1;
  
  if ((DAT_101865828 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857968,3,"NotApplicableSkin**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857950;
    DAT_101865828 = 1;
  }
  return;
}




void FUN_1004b8b84(void)

{
  if ((DAT_101865890 & 1) == 0) {
    DAT_101865830 = 0;
    DAT_101865834 = 0;
    DAT_101865838 = PTR_DAT_101873138;
    DAT_101865840 = 0;
    DAT_101865844 = 8;
    DAT_101865848 = PTR_DAT_101873118;
    DAT_101865850 = 0;
    DAT_101865854 = 0x10;
    DAT_101865858 = PTR_DAT_101873138;
    DAT_101865860 = 0;
    DAT_101865864 = 0x18;
    DAT_101865868 = PTR_DAT_101873138;
    DAT_101865870 = 0;
    DAT_101865874 = 0x20;
    DAT_101865878 = PTR_DAT_101873138;
    DAT_101865898 = DAT_101865898 + 6;
    DAT_101865880 = 0;
    DAT_101865884 = 0x28;
    DAT_101865888 = PTR_DAT_101857980;
    DAT_101865890 = 1;
  }
  return;
}




void FUN_1004b8c30(void)

{
  long lVar1;
  
  if ((DAT_1018658a0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857988,1,"InventoryHat",0x30,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865830;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101865898;
    DAT_1018658a0 = 1;
  }
  return;
}




void FUN_1004b8c90(void)

{
  long lVar1;
  
  if ((DAT_1018658a8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018579a8,3,"InventoryHat*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857988;
    DAT_1018658a8 = 1;
  }
  return;
}




void FUN_1004b8ce8(void)

{
  long lVar1;
  
  if ((DAT_1018658b0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018579c0,3,"InventoryHat**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018579a8;
    DAT_1018658b0 = 1;
  }
  return;
}




void FUN_1004b8d40(void)

{
  if ((DAT_1018658c8 & 1) == 0) {
    DAT_1018658d0 = DAT_1018658d0 + 1;
    DAT_1018658b8 = 0;
    DAT_1018658bc = 0;
    DAT_1018658c0 = PTR_DAT_1018579d8;
    DAT_1018658c8 = 1;
  }
  return;
}




void FUN_1004b8d84(void)

{
  long lVar1;
  
  if ((DAT_1018658d8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018579e0,1,"HatManifest",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018658b8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018658d0;
    DAT_1018658d8 = 1;
  }
  return;
}




void FUN_1004b8de4(void)

{
  long lVar1;
  
  if ((DAT_1018658e0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857a00,3,"HatManifest*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018579e0;
    DAT_1018658e0 = 1;
  }
  return;
}




void FUN_1004b8e3c(void)

{
  long lVar1;
  
  if ((DAT_1018658e8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857a18,3,"HatManifest**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857a00;
    DAT_1018658e8 = 1;
  }
  return;
}




void FUN_1004b8e94(void)

{
  if ((DAT_101865940 & 1) == 0) {
    DAT_1018658f0 = 0;
    DAT_1018658f4 = 0;
    DAT_1018658f8 = PTR_DAT_101873138;
    DAT_101865900 = 0;
    DAT_101865904 = 8;
    DAT_101865908 = PTR_DAT_1018730f0;
    DAT_101865910 = 0;
    DAT_101865914 = 0xc;
    DAT_101865918 = PTR_DAT_1018730f0;
    DAT_101865920 = 0;
    DAT_101865924 = 0x10;
    DAT_101865928 = PTR_DAT_1018730f0;
    DAT_101865948 = DAT_101865948 + 5;
    DAT_101865930 = 0;
    DAT_101865934 = 0x14;
    DAT_101865938 = PTR_DAT_101873118;
    DAT_101865940 = 1;
  }
  return;
}




void FUN_1004b8f34(void)

{
  long lVar1;
  
  if ((DAT_101865950 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857a30,1,"AlternateAnimation",0x18,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018658f0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101865948;
    DAT_101865950 = 1;
  }
  return;
}




void FUN_1004b8f94(void)

{
  long lVar1;
  
  if ((DAT_101865958 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857a50,3,"AlternateAnimation*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857a30;
    DAT_101865958 = 1;
  }
  return;
}




void FUN_1004b8fec(void)

{
  long lVar1;
  
  if ((DAT_101865960 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857a68,3,"AlternateAnimation**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857a50;
    DAT_101865960 = 1;
  }
  return;
}




void FUN_1004b9044(void)

{
  if ((DAT_1018659d8 & 1) == 0) {
    DAT_101865968 = 0;
    DAT_10186596c = 0;
    DAT_101865970 = PTR_DAT_101873138;
    DAT_101865978 = 0;
    DAT_10186597c = 8;
    DAT_101865980 = PTR_DAT_101873138;
    DAT_101865988 = 0;
    DAT_10186598c = 0x10;
    DAT_101865990 = PTR_DAT_1018730f0;
    DAT_101865998 = 0;
    DAT_10186599c = 0x14;
    DAT_1018659a0 = PTR_DAT_1018730f0;
    DAT_1018659a8 = 0;
    DAT_1018659ac = 0x18;
    DAT_1018659b0 = PTR_DAT_1018730f0;
    DAT_1018659b8 = 0;
    DAT_1018659bc = 0x1c;
    DAT_1018659c0 = PTR_DAT_101873118;
    DAT_1018659e0 = DAT_1018659e0 + 7;
    DAT_1018659c8 = 0;
    DAT_1018659cc = 0x20;
    DAT_1018659d0 = PTR_DAT_101857a80;
    DAT_1018659d8 = 1;
  }
  return;
}




void FUN_1004b910c(void)

{
  long lVar1;
  
  if ((DAT_1018659e8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857a88,1,"NamedAnimation",0x28,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865968;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018659e0;
    DAT_1018659e8 = 1;
  }
  return;
}




void FUN_1004b916c(void)

{
  long lVar1;
  
  if ((DAT_1018659f0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857ab0,3,"NamedAnimation*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857a88;
    DAT_1018659f0 = 1;
  }
  return;
}




void FUN_1004b91c4(void)

{
  long lVar1;
  
  if ((DAT_1018659f8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857ac8,3,"NamedAnimation**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857ab0;
    DAT_1018659f8 = 1;
  }
  return;
}




void FUN_1004b921c(void)

{
  if ((DAT_101865a20 & 1) == 0) {
    DAT_101865a00 = 0;
    DAT_101865a04 = 0;
    DAT_101865a08 = PTR_DAT_101873118;
    DAT_101865a28 = DAT_101865a28 + 2;
    DAT_101865a10 = 0;
    DAT_101865a14 = 8;
    DAT_101865a18 = PTR_DAT_101857ae0;
    DAT_101865a20 = 1;
  }
  return;
}




void FUN_1004b927c(void)

{
  long lVar1;
  
  if ((DAT_101865a30 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857ae8,1,"AnimationPool",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865a00;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101865a28;
    DAT_101865a30 = 1;
  }
  return;
}




void FUN_1004b92dc(void)

{
  long lVar1;
  
  if ((DAT_101865a38 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857b10,3,"AnimationPool*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857ae8;
    DAT_101865a38 = 1;
  }
  return;
}




void FUN_1004b9334(void)

{
  long lVar1;
  
  if ((DAT_101865a40 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857b28,3,"AnimationPool**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857b10;
    DAT_101865a40 = 1;
  }
  return;
}




void FUN_1004b938c(void)

{
  if ((DAT_101865aa8 & 1) == 0) {
    DAT_101865a48 = 0;
    DAT_101865a4c = 0;
    DAT_101865a50 = PTR_DAT_101873138;
    DAT_101865a58 = 0;
    DAT_101865a5c = 8;
    DAT_101865a60 = PTR_DAT_101873138;
    DAT_101865a68 = 0;
    DAT_101865a6c = 0x10;
    DAT_101865a70 = PTR_DAT_101873138;
    DAT_101865a78 = 0;
    DAT_101865a7c = 0x18;
    DAT_101865a80 = PTR_DAT_101857b08;
    DAT_101865a88 = 0;
    DAT_101865a8c = 0x28;
    DAT_101865a90 = PTR_DAT_101855d20;
    DAT_101865ab0 = DAT_101865ab0 + 6;
    DAT_101865a98 = 0;
    DAT_101865a9c = 0x30;
    DAT_101865aa0 = PTR_DAT_101855068;
    DAT_101865aa8 = 1;
  }
  return;
}




void FUN_1004b943c(void)

{
  long lVar1;
  
  if ((DAT_101865ab8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857b40,1,"AnimatedMesh",0x38,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865a48;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101865ab0;
    DAT_101865ab8 = 1;
  }
  return;
}




void FUN_1004b949c(void)

{
  long lVar1;
  
  if ((DAT_101865ac0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857b68,3,"AnimatedMesh*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857b40;
    DAT_101865ac0 = 1;
  }
  return;
}




void FUN_1004b94f4(void)

{
  long lVar1;
  
  if ((DAT_101865ac8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857b80,3,"AnimatedMesh**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857b68;
    DAT_101865ac8 = 1;
  }
  return;
}




void FUN_1004b954c(void)

{
  if ((DAT_101865b50 & 1) == 0) {
    DAT_101865ad0 = 0;
    DAT_101865ad4 = 0;
    DAT_101865ad8 = PTR_DAT_101872c98;
    DAT_101865ae0 = 0;
    DAT_101865ae4 = 0x24;
    DAT_101865ae8 = PTR_DAT_101873118;
    DAT_101865af0 = 0;
    DAT_101865af4 = 0x28;
    DAT_101865af8 = PTR_DAT_101873138;
    DAT_101865b00 = 0;
    DAT_101865b04 = 0x30;
    DAT_101865b08 = PTR_DAT_101873138;
    DAT_101865b10 = 0;
    DAT_101865b14 = 0x38;
    DAT_101865b18 = PTR_DAT_101873138;
    DAT_101865b20 = 0;
    DAT_101865b24 = 0x40;
    DAT_101865b28 = PTR_DAT_101857aa8;
    DAT_101865b30 = 0;
    DAT_101865b34 = 0x68;
    DAT_101865b38 = PTR_DAT_101855d20;
    DAT_101865b58 = DAT_101865b58 + 8;
    DAT_101865b40 = 0;
    DAT_101865b44 = 0x70;
    DAT_101865b48 = PTR_DAT_101855068;
    DAT_101865b50 = 1;
  }
  return;
}




void FUN_1004b9634(void)

{
  long lVar1;
  
  if ((DAT_101865b60 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857b98,1,"StaticMesh",0x78,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865ad0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101865b58;
    DAT_101865b60 = 1;
  }
  return;
}




void FUN_1004b9694(void)

{
  long lVar1;
  
  if ((DAT_101865b68 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857bb8,3,"StaticMesh*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857b98;
    DAT_101865b68 = 1;
  }
  return;
}




void FUN_1004b96ec(void)

{
  long lVar1;
  
  if ((DAT_101865b70 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857bd0,3,"StaticMesh**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857bb8;
    DAT_101865b70 = 1;
  }
  return;
}




void FUN_1004b9744(void)

{
  if ((DAT_101865be8 & 1) == 0) {
    DAT_101865b78 = 0;
    DAT_101865b7c = 0;
    DAT_101865b80 = PTR_DAT_101873138;
    DAT_101865b88 = 0;
    DAT_101865b8c = 8;
    DAT_101865b90 = PTR_DAT_101873138;
    DAT_101865b98 = 0;
    DAT_101865b9c = 0x10;
    DAT_101865ba0 = PTR_DAT_101873138;
    DAT_101865ba8 = 0;
    DAT_101865bac = 0x18;
    DAT_101865bb0 = PTR_DAT_101872c98;
    DAT_101865bb8 = 0;
    DAT_101865bbc = 0x40;
    DAT_101865bc0 = PTR_DAT_101873138;
    DAT_101865bc8 = 0;
    DAT_101865bcc = 0x48;
    DAT_101865bd0 = PTR_DAT_101873138;
    DAT_101865bf0 = DAT_101865bf0 + 7;
    DAT_101865bd8 = 0;
    DAT_101865bdc = 0x50;
    DAT_101865be0 = PTR_DAT_101857aa8;
    DAT_101865be8 = 1;
  }
  return;
}




void FUN_1004b9800(void)

{
  long lVar1;
  
  if ((DAT_101865bf8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857bf0,1,"AttachmentSkinInfo",0x78,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865b78;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101865bf0;
    DAT_101865bf8 = 1;
  }
  return;
}




void FUN_1004b9860(void)

{
  long lVar1;
  
  if ((DAT_101865c00 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857c18,3,"AttachmentSkinInfo*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857bf0;
    DAT_101865c00 = 1;
  }
  return;
}




void FUN_1004b98b8(void)

{
  long lVar1;
  
  if ((DAT_101865c08 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857c30,3,"AttachmentSkinInfo**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857c18;
    DAT_101865c08 = 1;
  }
  return;
}




void FUN_1004b9910(void)

{
  if ((DAT_101865c30 & 1) == 0) {
    DAT_101865c10 = 0;
    DAT_101865c14 = 0;
    DAT_101865c18 = PTR_DAT_101857c10;
    DAT_101865c38 = DAT_101865c38 + 2;
    DAT_101865c20 = 0;
    DAT_101865c24 = 0x78;
    DAT_101865c28 = PTR_DAT_101857c48;
    DAT_101865c30 = 1;
  }
  return;
}




void FUN_1004b996c(void)

{
  long lVar1;
  
  if ((DAT_101865c40 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857c50,1,"Attachment",0x80,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865c10;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101865c38;
    DAT_101865c40 = 1;
  }
  return;
}




void FUN_1004b99cc(void)

{
  long lVar1;
  
  if ((DAT_101865c48 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857c70,3,"Attachment*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857c50;
    DAT_101865c48 = 1;
  }
  return;
}




void FUN_1004b9a24(void)

{
  long lVar1;
  
  if ((DAT_101865c50 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857c88,3,"Attachment**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857c70;
    DAT_101865c50 = 1;
  }
  return;
}




void FUN_1004b9a7c(void)

{
  if ((DAT_101865d38 & 1) == 0) {
    DAT_101865c58 = 0;
    DAT_101865c5c = 0;
    DAT_101865c60 = PTR_DAT_101872c38;
    DAT_101865c68 = 0;
    DAT_101865c6c = 0xc;
    DAT_101865c70 = PTR_DAT_101872d40;
    DAT_101865c78 = 0;
    DAT_101865c7c = 0x14;
    DAT_101865c80 = PTR_DAT_101872d40;
    DAT_101865c88 = 0;
    DAT_101865c8c = 0x1c;
    DAT_101865c90 = PTR_DAT_101872d40;
    DAT_101865c98 = 0;
    DAT_101865c9c = 0x24;
    DAT_101865ca0 = PTR_DAT_101872d40;
    DAT_101865ca8 = 0;
    DAT_101865cac = 0x2c;
    DAT_101865cb0 = PTR_DAT_1018730f0;
    DAT_101865cb8 = 0;
    DAT_101865cbc = 0x30;
    DAT_101865cc0 = PTR_DAT_1018730f0;
    DAT_101865cc8 = 0;
    DAT_101865ccc = 0x34;
    DAT_101865cd0 = PTR_DAT_1018730f0;
    DAT_101865cd8 = 0;
    DAT_101865cdc = 0x38;
    DAT_101865ce0 = PTR_DAT_1018730f0;
    DAT_101865ce8 = 0;
    DAT_101865cec = 0x3c;
    DAT_101865cf0 = PTR_DAT_1018730f0;
    DAT_101865cf8 = 0;
    DAT_101865cfc = 0x40;
    DAT_101865d00 = PTR_DAT_1018730f0;
    DAT_101865d08 = 0;
    DAT_101865d0c = 0x44;
    DAT_101865d10 = PTR_DAT_1018730f0;
    DAT_101865d18 = 0;
    DAT_101865d1c = 0x48;
    DAT_101865d20 = PTR_DAT_1018730f0;
    DAT_101865d40 = DAT_101865d40 + 0xe;
    DAT_101865d28 = 0;
    DAT_101865d2c = 0x4c;
    DAT_101865d30 = PTR_DAT_101872d40;
    DAT_101865d38 = 1;
  }
  return;
}




void FUN_1004b9bac(void)

{
  long lVar1;
  
  if ((DAT_101865d48 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857ca0,1,"CameraOrientation",0x54,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865c58;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101865d40;
    DAT_101865d48 = 1;
  }
  return;
}




void FUN_1004b9c0c(void)

{
  long lVar1;
  
  if ((DAT_101865d50 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857cc0,3,"CameraOrientation*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857ca0;
    DAT_101865d50 = 1;
  }
  return;
}




void FUN_1004b9c64(void)

{
  long lVar1;
  
  if ((DAT_101865d58 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857cd8,3,"CameraOrientation**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857cc0;
    DAT_101865d58 = 1;
  }
  return;
}




void FUN_1004b9cbc(void)

{
  if ((DAT_101865d90 & 1) == 0) {
    DAT_101865d60 = 0;
    DAT_101865d64 = 0;
    DAT_101865d68 = PTR_DAT_101857cf0;
    DAT_101865d70 = 0;
    DAT_101865d74 = 8;
    DAT_101865d78 = PTR_DAT_101872c70;
    DAT_101865d98 = DAT_101865d98 + 3;
    DAT_101865d80 = 0;
    DAT_101865d84 = 0x10;
    DAT_101865d88 = PTR_DAT_1018730f0;
    DAT_101865d90 = 1;
  }
  return;
}




void FUN_1004b9d38(void)

{
  long lVar1;
  
  if ((DAT_101865da0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857cf8,1,"CameraSettings",0x18,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865d60;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101865d98;
    DAT_101865da0 = 1;
  }
  return;
}




void FUN_1004b9d98(void)

{
  long lVar1;
  
  if ((DAT_101865da8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857d20,3,"CameraSettings*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857cf8;
    DAT_101865da8 = 1;
  }
  return;
}




void FUN_1004b9df0(void)

{
  long lVar1;
  
  if ((DAT_101865db0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857d38,3,"CameraSettings**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857d20;
    DAT_101865db0 = 1;
  }
  return;
}




void FUN_1004b9e48(void)

{
  if ((DAT_101865dd8 & 1) == 0) {
    DAT_101865db8 = 0;
    DAT_101865dbc = 0;
    DAT_101865dc0 = PTR_DAT_101873138;
    DAT_101865de0 = DAT_101865de0 + 2;
    DAT_101865dc8 = 0;
    DAT_101865dcc = 8;
    DAT_101865dd0 = PTR_DAT_101872c38;
    DAT_101865dd8 = 1;
  }
  return;
}




void FUN_1004b9eac(void)

{
  long lVar1;
  
  if ((DAT_101865de8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857d50,1,"StaticLensFlare",0x18,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865db8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101865de0;
    DAT_101865de8 = 1;
  }
  return;
}




void FUN_1004b9f0c(void)

{
  long lVar1;
  
  if ((DAT_101865df0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857d70,3,"StaticLensFlare*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857d50;
    DAT_101865df0 = 1;
  }
  return;
}




void FUN_1004b9f64(void)

{
  long lVar1;
  
  if ((DAT_101865df8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857d88,3,"StaticLensFlare**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857d70;
    DAT_101865df8 = 1;
  }
  return;
}




void FUN_1004b9fbc(void)

{
  if ((DAT_101865e20 & 1) == 0) {
    DAT_101865e00 = 0;
    DAT_101865e04 = 0;
    DAT_101865e08 = PTR_DAT_101873138;
    DAT_101865e28 = DAT_101865e28 + 2;
    DAT_101865e10 = 0;
    DAT_101865e14 = 8;
    DAT_101865e18 = PTR_DAT_101873138;
    DAT_101865e20 = 1;
  }
  return;
}




void FUN_1004ba014(void)

{
  long lVar1;
  
  if ((DAT_101865e30 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857da8,1,"VoiceOverLocalizedEntry",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865e00;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101865e28;
    DAT_101865e30 = 1;
  }
  return;
}




void FUN_1004ba074(void)

{
  long lVar1;
  
  if ((DAT_101865e38 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857dc8,3,"VoiceOverLocalizedEntry*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857da8;
    DAT_101865e38 = 1;
  }
  return;
}




void FUN_1004ba0cc(void)

{
  long lVar1;
  
  if ((DAT_101865e40 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857de0,3,"VoiceOverLocalizedEntry**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857dc8;
    DAT_101865e40 = 1;
  }
  return;
}




void FUN_1004ba124(void)

{
  if ((DAT_101865ed8 & 1) == 0) {
    DAT_101865e48 = 0;
    DAT_101865e4c = 0;
    DAT_101865e50 = PTR_DAT_101873138;
    DAT_101865e58 = 0;
    DAT_101865e5c = 8;
    DAT_101865e60 = PTR_DAT_101873138;
    DAT_101865e68 = 0;
    DAT_101865e6c = 0x10;
    DAT_101865e70 = PTR_DAT_101873138;
    DAT_101865e78 = 0;
    DAT_101865e7c = 0x18;
    DAT_101865e80 = PTR_DAT_101873138;
    DAT_101865e88 = 0;
    DAT_101865e8c = 0x20;
    DAT_101865e90 = PTR_DAT_101873138;
    DAT_101865e98 = 0;
    DAT_101865e9c = 0x28;
    DAT_101865ea0 = PTR_DAT_1018730f0;
    DAT_101865ea8 = 0;
    DAT_101865eac = 0x2c;
    DAT_101865eb0 = PTR_DAT_1018730f0;
    DAT_101865eb8 = 0;
    DAT_101865ebc = 0x30;
    DAT_101865ec0 = PTR_DAT_101855040;
    DAT_101865ee0 = DAT_101865ee0 + 9;
    DAT_101865ec8 = 0;
    DAT_101865ecc = 0x38;
    DAT_101865ed0 = PTR_DAT_101857df8;
    DAT_101865ed8 = 1;
  }
  return;
}




void FUN_1004ba208(void)

{
  long lVar1;
  
  if ((DAT_101865ee8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857e00,1,"SidebarConversationDialog",0x40,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865e48;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101865ee0;
    DAT_101865ee8 = 1;
  }
  return;
}




void FUN_1004ba268(void)

{
  long lVar1;
  
  if ((DAT_101865ef0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857e20,3,"SidebarConversationDialog*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857e00;
    DAT_101865ef0 = 1;
  }
  return;
}




void FUN_1004ba2c0(void)

{
  long lVar1;
  
  if ((DAT_101865ef8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857e38,3,"SidebarConversationDialog**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857e20;
    DAT_101865ef8 = 1;
  }
  return;
}




void FUN_1004ba318(void)

{
  if ((DAT_101865f20 & 1) == 0) {
    DAT_101865f00 = 0;
    DAT_101865f04 = 0;
    DAT_101865f08 = PTR_DAT_101873138;
    DAT_101865f28 = DAT_101865f28 + 2;
    DAT_101865f10 = 0;
    DAT_101865f14 = 8;
    DAT_101865f18 = PTR_DAT_101857e50;
    DAT_101865f20 = 1;
  }
  return;
}




void FUN_1004ba378(void)

{
  long lVar1;
  
  if ((DAT_101865f30 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857e58,1,"SidebarConversation",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865f00;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101865f28;
    DAT_101865f30 = 1;
  }
  return;
}




void FUN_1004ba3d8(void)

{
  long lVar1;
  
  if ((DAT_101865f38 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857e78,3,"SidebarConversation*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857e58;
    DAT_101865f38 = 1;
  }
  return;
}




void FUN_1004ba430(void)

{
  long lVar1;
  
  if ((DAT_101865f40 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857e90,3,"SidebarConversation**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857e78;
    DAT_101865f40 = 1;
  }
  return;
}




void FUN_1004ba488(void)

{
  if ((DAT_101865f78 & 1) == 0) {
    DAT_101865f48 = 0;
    DAT_101865f4c = 0;
    DAT_101865f50 = PTR_DAT_101873118;
    DAT_101865f58 = 0;
    DAT_101865f5c = 1;
    DAT_101865f60 = PTR_DAT_101873118;
    DAT_101865f80 = DAT_101865f80 + 3;
    DAT_101865f68 = 0;
    DAT_101865f6c = 4;
    DAT_101865f70 = PTR_DAT_1018730f0;
    DAT_101865f78 = 1;
  }
  return;
}




void FUN_1004ba4f8(void)

{
  long lVar1;
  
  if ((DAT_101865f88 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857ea8,1,"CameraMinimapModification",8,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865f48;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101865f80;
    DAT_101865f88 = 1;
  }
  return;
}




void FUN_1004ba558(void)

{
  long lVar1;
  
  if ((DAT_101865f90 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857ec8,3,"CameraMinimapModification*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857ea8;
    DAT_101865f90 = 1;
  }
  return;
}




void FUN_1004ba5b0(void)

{
  long lVar1;
  
  if ((DAT_101865f98 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857ee0,3,"CameraMinimapModification**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857ec8;
    DAT_101865f98 = 1;
  }
  return;
}




void FUN_1004ba608(void)

{
  if ((DAT_1018660b0 & 1) == 0) {
    DAT_101865fa0 = 0;
    DAT_101865fa4 = 0;
    DAT_101865fa8 = PTR_DAT_101873138;
    DAT_101865fb0 = 0;
    DAT_101865fb4 = 8;
    DAT_101865fb8 = PTR_DAT_1018730f0;
    DAT_101865fc0 = 0;
    DAT_101865fc4 = 0xc;
    DAT_101865fc8 = PTR_DAT_1018730f0;
    DAT_101865fd0 = 0;
    DAT_101865fd4 = 0x10;
    DAT_101865fd8 = PTR_DAT_101873138;
    DAT_101865fe0 = 0;
    DAT_101865fe4 = 0x18;
    DAT_101865fe8 = PTR_DAT_1018730f0;
    DAT_101865ff0 = 0;
    DAT_101865ff4 = 0x1c;
    DAT_101865ff8 = PTR_DAT_1018730f0;
    DAT_101866000 = 0;
    DAT_101866004 = 0x20;
    DAT_101866008 = PTR_DAT_1018730f0;
    DAT_101866010 = 0;
    DAT_101866014 = 0x24;
    DAT_101866018 = PTR_DAT_1018730f0;
    DAT_101866020 = 0;
    DAT_101866024 = 0x28;
    DAT_101866028 = PTR_DAT_101872d40;
    DAT_101866030 = 0;
    DAT_101866034 = 0x30;
    DAT_101866038 = PTR_DAT_1018730f0;
    DAT_101866040 = 0;
    DAT_101866044 = 0x34;
    DAT_101866048 = PTR_DAT_101872d40;
    DAT_101866050 = 0;
    DAT_101866054 = 0x3c;
    DAT_101866058 = PTR_DAT_101872d40;
    DAT_101866060 = 0;
    DAT_101866064 = 0x44;
    DAT_101866068 = PTR_DAT_101872d40;
    DAT_101866070 = 0;
    DAT_101866074 = 0x50;
    DAT_101866078 = PTR_DAT_101873138;
    DAT_101866080 = 0;
    DAT_101866084 = 0x58;
    DAT_101866088 = PTR_DAT_101873138;
    DAT_101866090 = 0;
    DAT_101866094 = 0x60;
    DAT_101866098 = PTR_DAT_101857ef8;
    DAT_1018660b8 = DAT_1018660b8 + 0x11;
    DAT_1018660a0 = 0;
    DAT_1018660a4 = 0x68;
    DAT_1018660a8 = PTR_DAT_101856308;
    DAT_1018660b0 = 1;
  }
  return;
}




void FUN_1004ba778(void)

{
  long lVar1;
  
  if ((DAT_1018660c0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857f00,1,"MinimapSettings",0xa8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101865fa0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018660b8;
    DAT_1018660c0 = 1;
  }
  return;
}




void FUN_1004ba7d8(void)

{
  long lVar1;
  
  if ((DAT_1018660c8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857f28,3,"MinimapSettings*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857f00;
    DAT_1018660c8 = 1;
  }
  return;
}




void FUN_1004ba830(void)

{
  long lVar1;
  
  if ((DAT_1018660d0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857f40,3,"MinimapSettings**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857f28;
    DAT_1018660d0 = 1;
  }
  return;
}




void FUN_1004ba888(void)

{
  if ((DAT_1018660e8 & 1) == 0) {
    DAT_1018660f0 = DAT_1018660f0 + 1;
    DAT_1018660d8 = 0;
    DAT_1018660dc = 0;
    DAT_1018660e0 = PTR_DAT_101873138;
    DAT_1018660e8 = 1;
  }
  return;
}




void FUN_1004ba8d0(void)

{
  long lVar1;
  
  if ((DAT_1018660f8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857f58,1,"LevelVisualsRef",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018660d8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018660f0;
    DAT_1018660f8 = 1;
  }
  return;
}




void FUN_1004ba930(void)

{
  long lVar1;
  
  if ((DAT_101866100 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857f78,3,"LevelVisualsRef*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857f58;
    DAT_101866100 = 1;
  }
  return;
}




void FUN_1004ba988(void)

{
  long lVar1;
  
  if ((DAT_101866108 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857f90,3,"LevelVisualsRef**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857f78;
    DAT_101866108 = 1;
  }
  return;
}




void FUN_1004ba9e0(void)

{
  if ((DAT_101866140 & 1) == 0) {
    DAT_101866110 = 0;
    DAT_101866114 = 0;
    DAT_101866118 = PTR_DAT_101873138;
    DAT_101866120 = 0;
    DAT_101866124 = 8;
    DAT_101866128 = PTR_DAT_1018730c0;
    DAT_101866148 = DAT_101866148 + 3;
    DAT_101866130 = 0;
    DAT_101866134 = 0xc;
    DAT_101866138 = PTR_DAT_1018730c0;
    DAT_101866140 = 1;
  }
  return;
}




void FUN_1004baa54(void)

{
  long lVar1;
  
  if ((DAT_101866150 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857fb0,1,"HordeLootTableEntry",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101866110;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101866148;
    DAT_101866150 = 1;
  }
  return;
}




void FUN_1004baab4(void)

{
  long lVar1;
  
  if ((DAT_101866158 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857fd0,3,"HordeLootTableEntry*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857fb0;
    DAT_101866158 = 1;
  }
  return;
}




void FUN_1004bab0c(void)

{
  long lVar1;
  
  if ((DAT_101866160 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101857fe8,3,"HordeLootTableEntry**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101857fd0;
    DAT_101866160 = 1;
  }
  return;
}




void FUN_1004bab64(void)

{
  if ((DAT_101866188 & 1) == 0) {
    DAT_101866168 = 0;
    DAT_10186616c = 0;
    DAT_101866170 = PTR_DAT_101873138;
    DAT_101866190 = DAT_101866190 + 2;
    DAT_101866178 = 0;
    DAT_10186617c = 8;
    DAT_101866180 = PTR_DAT_101858000;
    DAT_101866188 = 1;
  }
  return;
}




void FUN_1004babc4(void)

{
  long lVar1;
  
  if ((DAT_101866198 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858008,1,"HordeLootTable",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101866168;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101866190;
    DAT_101866198 = 1;
  }
  return;
}




void FUN_1004bac24(void)

{
  long lVar1;
  
  if ((DAT_1018661a0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858028,3,"HordeLootTable*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858008;
    DAT_1018661a0 = 1;
  }
  return;
}




void FUN_1004bac7c(void)

{
  long lVar1;
  
  if ((DAT_1018661a8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858040,3,"HordeLootTable**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858028;
    DAT_1018661a8 = 1;
  }
  return;
}




void FUN_1004bacd4(void)

{
  if ((DAT_1018661c0 & 1) == 0) {
    DAT_1018661c8 = DAT_1018661c8 + 1;
    DAT_1018661b0 = 0;
    DAT_1018661b4 = 0;
    DAT_1018661b8 = PTR_DAT_101858058;
    DAT_1018661c0 = 1;
  }
  return;
}




void FUN_1004bad18(void)

{
  long lVar1;
  
  if ((DAT_1018661d0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858060,1,"HordeLootCatalog",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018661b0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018661c8;
    DAT_1018661d0 = 1;
  }
  return;
}




void FUN_1004bad78(void)

{
  long lVar1;
  
  if ((DAT_1018661d8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858088,3,"HordeLootCatalog*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858060;
    DAT_1018661d8 = 1;
  }
  return;
}




void FUN_1004badd0(void)

{
  long lVar1;
  
  if ((DAT_1018661e0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018580a0,3,"HordeLootCatalog**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858088;
    DAT_1018661e0 = 1;
  }
  return;
}




void FUN_1004bae28(void)

{
  if ((DAT_101866258 & 1) == 0) {
    DAT_1018661e8 = 0;
    DAT_1018661ec = 0;
    DAT_1018661f0 = PTR_DAT_101855018;
    DAT_1018661f8 = 0;
    DAT_1018661fc = 4;
    DAT_101866200 = PTR_DAT_1018730f0;
    DAT_101866208 = 0;
    DAT_10186620c = 8;
    DAT_101866210 = PTR_DAT_1018730f0;
    DAT_101866218 = 0;
    DAT_10186621c = 0xc;
    DAT_101866220 = PTR_DAT_101873118;
    DAT_101866228 = 0;
    DAT_10186622c = 0xd;
    DAT_101866230 = PTR_DAT_101873118;
    DAT_101866238 = 0;
    DAT_10186623c = 0x10;
    DAT_101866240 = PTR_DAT_1018730f0;
    DAT_101866260 = DAT_101866260 + 7;
    DAT_101866248 = 0;
    DAT_10186624c = 0x14;
    DAT_101866250 = PTR_DAT_1018730c0;
    DAT_101866258 = 1;
  }
  return;
}




void FUN_1004baef0(void)

{
  long lVar1;
  
  if ((DAT_101866268 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018580b8,1,"Plaque",0x18,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018661e8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101866260;
    DAT_101866268 = 1;
  }
  return;
}




void FUN_1004baf50(void)

{
  long lVar1;
  
  if ((DAT_101866270 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018580e0,3,"Plaque*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018580b8;
    DAT_101866270 = 1;
  }
  return;
}




void FUN_1004bafa8(void)

{
  long lVar1;
  
  if ((DAT_101866278 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018580f8,3,"Plaque**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018580e0;
    DAT_101866278 = 1;
  }
  return;
}




void FUN_1004bb000(void)

{
  if ((DAT_1018662c0 & 1) == 0) {
    DAT_101866280 = 0;
    DAT_101866284 = 0;
    DAT_101866288 = PTR_DAT_1018580d8;
    DAT_101866290 = 0;
    DAT_101866294 = 0x18;
    DAT_101866298 = PTR_DAT_101856100;
    DAT_1018662a0 = 0;
    DAT_1018662a4 = 0x30;
    DAT_1018662a8 = PTR_DAT_1018730f0;
    DAT_1018662c8 = DAT_1018662c8 + 4;
    DAT_1018662b0 = 0;
    DAT_1018662b4 = 0x34;
    DAT_1018662b8 = PTR_DAT_101873118;
    DAT_1018662c0 = 1;
  }
  return;
}




void FUN_1004bb094(void)

{
  long lVar1;
  
  if ((DAT_1018662d0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858110,1,"ActorRep",0x38,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101866280;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018662c8;
    DAT_1018662d0 = 1;
  }
  return;
}




void FUN_1004bb0f4(void)

{
  long lVar1;
  
  if ((DAT_1018662d8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858138,3,"ActorRep*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858110;
    DAT_1018662d8 = 1;
  }
  return;
}




void FUN_1004bb14c(void)

{
  long lVar1;
  
  if ((DAT_1018662e0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858150,3,"ActorRep**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858138;
    DAT_1018662e0 = 1;
  }
  return;
}




void FUN_1004bb1a4(void)

{
  if ((DAT_1018665d8 & 1) == 0) {
    DAT_1018662e8 = 0;
    DAT_1018662ec = 0;
    DAT_1018662f0 = PTR_DAT_1018730f0;
    DAT_1018662f8 = 0;
    DAT_1018662fc = 4;
    DAT_101866300 = PTR_DAT_1018730f0;
    DAT_101866308 = 0;
    DAT_10186630c = 8;
    DAT_101866310 = PTR_DAT_1018730f0;
    DAT_101866318 = 0;
    DAT_10186631c = 0xc;
    DAT_101866320 = PTR_DAT_1018730f0;
    DAT_101866328 = 0;
    DAT_10186632c = 0x10;
    DAT_101866330 = PTR_DAT_1018730f0;
    DAT_101866338 = 0;
    DAT_10186633c = 0x14;
    DAT_101866340 = PTR_DAT_1018730f0;
    DAT_101866348 = 0;
    DAT_10186634c = 0x18;
    DAT_101866350 = PTR_DAT_1018730f0;
    DAT_101866358 = 0;
    DAT_10186635c = 0x1c;
    DAT_101866360 = PTR_DAT_1018730f0;
    DAT_101866368 = 0;
    DAT_10186636c = 0x20;
    DAT_101866370 = PTR_DAT_1018730f0;
    DAT_101866378 = 0;
    DAT_10186637c = 0x24;
    DAT_101866380 = PTR_DAT_1018730f0;
    DAT_101866388 = 0;
    DAT_10186638c = 0x28;
    DAT_101866390 = PTR_DAT_1018730f0;
    DAT_101866398 = 0;
    DAT_10186639c = 0x2c;
    DAT_1018663a0 = PTR_DAT_1018730f0;
    DAT_1018663a8 = 0;
    DAT_1018663ac = 0x30;
    DAT_1018663b0 = PTR_DAT_1018730f0;
    DAT_1018663b8 = 0;
    DAT_1018663bc = 0x34;
    DAT_1018663c0 = PTR_DAT_1018730f0;
    DAT_1018663c8 = 0;
    DAT_1018663cc = 0x38;
    DAT_1018663d0 = PTR_DAT_1018730f0;
    DAT_1018663d8 = 0;
    DAT_1018663dc = 0x3c;
    DAT_1018663e0 = PTR_DAT_1018730f0;
    DAT_1018663e8 = 0;
    DAT_1018663ec = 0x40;
    DAT_1018663f0 = PTR_DAT_1018730f0;
    DAT_1018663f8 = 0;
    DAT_1018663fc = 0x44;
    DAT_101866400 = PTR_DAT_1018730f0;
    DAT_101866408 = 0;
    DAT_10186640c = 0x48;
    DAT_101866410 = PTR_DAT_1018730f0;
    DAT_101866418 = 0;
    DAT_10186641c = 0x4c;
    DAT_101866420 = PTR_DAT_1018730f0;
    DAT_101866428 = 0;
    DAT_10186642c = 0x50;
    DAT_101866430 = PTR_DAT_1018730f0;
    DAT_101866438 = 0;
    DAT_10186643c = 0x54;
    DAT_101866440 = PTR_DAT_1018730f0;
    DAT_101866448 = 0;
    DAT_10186644c = 0x58;
    DAT_101866450 = PTR_DAT_1018730f0;
    DAT_101866458 = 0;
    DAT_10186645c = 0x5c;
    DAT_101866460 = PTR_DAT_1018730f0;
    DAT_101866468 = 0;
    DAT_10186646c = 0x60;
    DAT_101866470 = PTR_DAT_1018730f0;
    DAT_101866478 = 0;
    DAT_10186647c = 100;
    DAT_101866480 = PTR_DAT_1018730f0;
    DAT_101866488 = 0;
    DAT_10186648c = 0x68;
    DAT_101866490 = PTR_DAT_101873118;
    DAT_101866498 = 0;
    DAT_10186649c = 0x69;
    DAT_1018664a0 = PTR_DAT_101873118;
    DAT_1018664a8 = 0;
    DAT_1018664ac = 0x6a;
    DAT_1018664b0 = PTR_DAT_101873118;
    DAT_1018664b8 = 0;
    DAT_1018664bc = 0x6c;
    DAT_1018664c0 = PTR_DAT_1018730f0;
    DAT_1018664c8 = 0;
    DAT_1018664cc = 0x70;
    DAT_1018664d0 = PTR_DAT_1018730f0;
    DAT_1018664d8 = 0;
    DAT_1018664dc = 0x74;
    DAT_1018664e0 = PTR_DAT_1018730f0;
    DAT_1018664e8 = 0;
    DAT_1018664ec = 0x78;
    DAT_1018664f0 = PTR_DAT_1018730f0;
    DAT_1018664f8 = 0;
    DAT_1018664fc = 0x7c;
    DAT_101866500 = PTR_DAT_1018730f0;
    DAT_101866508 = 0;
    DAT_10186650c = 0x80;
    DAT_101866510 = PTR_DAT_1018730f0;
    DAT_101866518 = 0;
    DAT_10186651c = 0x84;
    DAT_101866520 = PTR_DAT_1018730f0;
    DAT_101866528 = 0;
    DAT_10186652c = 0x88;
    DAT_101866530 = PTR_DAT_1018730f0;
    DAT_101866538 = 0;
    DAT_10186653c = 0x8c;
    DAT_101866540 = PTR_DAT_1018730f0;
    DAT_101866548 = 0;
    DAT_10186654c = 0x90;
    DAT_101866550 = PTR_DAT_1018730f0;
    DAT_101866558 = 0;
    DAT_10186655c = 0x94;
    DAT_101866560 = PTR_DAT_1018730f0;
    DAT_101866568 = 0;
    DAT_10186656c = 0x98;
    DAT_101866570 = PTR_DAT_1018730f0;
    DAT_101866578 = 0;
    DAT_10186657c = 0x9c;
    DAT_101866580 = PTR_DAT_1018730f0;
    DAT_101866588 = 0;
    DAT_10186658c = 0xa0;
    DAT_101866590 = PTR_DAT_1018730f0;
    DAT_101866598 = 0;
    DAT_10186659c = 0xa4;
    DAT_1018665a0 = PTR_DAT_1018730f0;
    DAT_1018665a8 = 0;
    DAT_1018665ac = 0xa8;
    DAT_1018665b0 = PTR_DAT_1018730f0;
    DAT_1018665b8 = 0;
    DAT_1018665bc = 0xac;
    DAT_1018665c0 = PTR_DAT_1018730f0;
    DAT_1018665e0 = DAT_1018665e0 + 0x2f;
    DAT_1018665c8 = 0;
    DAT_1018665cc = 0xb0;
    DAT_1018665d0 = PTR_DAT_1018730f0;
    DAT_1018665d8 = 1;
  }
  return;
}




void FUN_1004bb4d8(void)

{
  long lVar1;
  
  if ((DAT_1018665e8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858168,1,"AttributeSet",0xb4,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018662e8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018665e0;
    DAT_1018665e8 = 1;
  }
  return;
}




void FUN_1004bb538(void)

{
  long lVar1;
  
  if ((DAT_1018665f0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858190,3,"AttributeSet*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858168;
    DAT_1018665f0 = 1;
  }
  return;
}




void FUN_1004bb590(void)

{
  long lVar1;
  
  if ((DAT_1018665f8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018581a8,3,"AttributeSet**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858190;
    DAT_1018665f8 = 1;
  }
  return;
}




void FUN_1004bb5e8(void)

{
  if ((DAT_101866650 & 1) == 0) {
    DAT_101866600 = 0;
    DAT_101866604 = 0;
    DAT_101866608 = PTR_DAT_101873138;
    DAT_101866610 = 0;
    DAT_101866614 = 8;
    DAT_101866618 = PTR_DAT_101873138;
    DAT_101866620 = 0;
    DAT_101866624 = 0x10;
    DAT_101866628 = PTR_DAT_101873138;
    DAT_101866630 = 0;
    DAT_101866634 = 0x18;
    DAT_101866638 = PTR_DAT_101873138;
    DAT_101866658 = DAT_101866658 + 5;
    DAT_101866640 = 0;
    DAT_101866644 = 0x20;
    DAT_101866648 = PTR_DAT_101873118;
    DAT_101866650 = 1;
  }
  return;
}




void FUN_1004bb67c(void)

{
  long lVar1;
  
  if ((DAT_101866660 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018581c0,1,"CharmEmoji",0x28,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101866600;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101866658;
    DAT_101866660 = 1;
  }
  return;
}




void FUN_1004bb6dc(void)

{
  long lVar1;
  
  if ((DAT_101866668 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018581e0,3,"CharmEmoji*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018581c0;
    DAT_101866668 = 1;
  }
  return;
}




void FUN_1004bb734(void)

{
  long lVar1;
  
  if ((DAT_101866670 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018581f8,3,"CharmEmoji**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018581e0;
    DAT_101866670 = 1;
  }
  return;
}




void FUN_1004bb78c(void)

{
  if ((DAT_1018666a8 & 1) == 0) {
    DAT_101866678 = 0;
    DAT_10186667c = 0;
    DAT_101866680 = PTR_DAT_101856cf8;
    DAT_101866688 = 0;
    DAT_10186668c = 8;
    DAT_101866690 = PTR_DAT_101858210;
    DAT_1018666b0 = DAT_1018666b0 + 3;
    DAT_101866698 = 0;
    DAT_10186669c = 0x10;
    DAT_1018666a0 = PTR_DAT_1018578d0;
    DAT_1018666a8 = 1;
  }
  return;
}




void FUN_1004bb800(void)

{
  long lVar1;
  
  if ((DAT_1018666b8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858218,1,"CharmsManifest",0x18,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101866678;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018666b0;
    DAT_1018666b8 = 1;
  }
  return;
}




void FUN_1004bb860(void)

{
  long lVar1;
  
  if ((DAT_1018666c0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858238,3,"CharmsManifest*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858218;
    DAT_1018666c0 = 1;
  }
  return;
}




void FUN_1004bb8b8(void)

{
  long lVar1;
  
  if ((DAT_1018666c8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858250,3,"CharmsManifest**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858238;
    DAT_1018666c8 = 1;
  }
  return;
}




void FUN_1004bb910(void)

{
  if ((DAT_1018666f0 & 1) == 0) {
    DAT_1018666d0 = 0;
    DAT_1018666d4 = 0;
    DAT_1018666d8 = PTR_DAT_101873138;
    DAT_1018666f8 = DAT_1018666f8 + 2;
    DAT_1018666e0 = 0;
    DAT_1018666e4 = 8;
    DAT_1018666e8 = PTR_DAT_1018730c0;
    DAT_1018666f0 = 1;
  }
  return;
}




void FUN_1004bb974(void)

{
  long lVar1;
  
  if ((DAT_101866700 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858268,1,"MenuMeshShaderParam",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018666d0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018666f8;
    DAT_101866700 = 1;
  }
  return;
}




void FUN_1004bb9d4(void)

{
  long lVar1;
  
  if ((DAT_101866708 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858288,3,"MenuMeshShaderParam*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858268;
    DAT_101866708 = 1;
  }
  return;
}




void FUN_1004bba2c(void)

{
  long lVar1;
  
  if ((DAT_101866710 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018582a0,3,"MenuMeshShaderParam**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858288;
    DAT_101866710 = 1;
  }
  return;
}




void FUN_1004bba84(void)

{
  if ((DAT_101866758 & 1) == 0) {
    DAT_101866718 = 0;
    DAT_10186671c = 0;
    DAT_101866720 = PTR_DAT_101873138;
    DAT_101866728 = 0;
    DAT_10186672c = 8;
    DAT_101866730 = PTR_DAT_101873138;
    DAT_101866738 = 0;
    DAT_10186673c = 0x10;
    DAT_101866740 = PTR_DAT_101872d40;
    DAT_101866760 = DAT_101866760 + 4;
    DAT_101866748 = 0;
    DAT_10186674c = 0x18;
    DAT_101866750 = PTR_DAT_1018730c0;
    DAT_101866758 = 1;
  }
  return;
}




void FUN_1004bbb14(void)

{
  long lVar1;
  
  if ((DAT_101866768 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018582c0,1,"MenuParticleInfo",0x20,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101866718;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101866760;
    DAT_101866768 = 1;
  }
  return;
}




void FUN_1004bbb74(void)

{
  long lVar1;
  
  if ((DAT_101866770 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018582e0,3,"MenuParticleInfo*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018582c0;
    DAT_101866770 = 1;
  }
  return;
}




void FUN_1004bbbcc(void)

{
  long lVar1;
  
  if ((DAT_101866778 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018582f8,3,"MenuParticleInfo**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018582e0;
    DAT_101866778 = 1;
  }
  return;
}




void FUN_1004bbc24(void)

{
  if ((DAT_101866790 & 1) == 0) {
    DAT_101866798 = DAT_101866798 + 1;
    DAT_101866780 = 0;
    DAT_101866784 = 0;
    DAT_101866788 = PTR_DAT_101858310;
    DAT_101866790 = 1;
  }
  return;
}




void FUN_1004bbc68(void)

{
  long lVar1;
  
  if ((DAT_1018667a0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858318,1,"MenuParticleData",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101866780;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101866798;
    DAT_1018667a0 = 1;
  }
  return;
}




void FUN_1004bbcc8(void)

{
  long lVar1;
  
  if ((DAT_1018667a8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858338,3,"MenuParticleData*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858318;
    DAT_1018667a8 = 1;
  }
  return;
}




void FUN_1004bbd20(void)

{
  long lVar1;
  
  if ((DAT_1018667b0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858350,3,"MenuParticleData**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858338;
    DAT_1018667b0 = 1;
  }
  return;
}




void FUN_1004bbd78(void)

{
  if ((DAT_101866818 & 1) == 0) {
    DAT_1018667b8 = 0;
    DAT_1018667bc = 0;
    DAT_1018667c0 = PTR_DAT_101873138;
    DAT_1018667c8 = 0;
    DAT_1018667cc = 8;
    DAT_1018667d0 = PTR_DAT_1018730c0;
    DAT_1018667d8 = 0;
    DAT_1018667dc = 0xc;
    DAT_1018667e0 = PTR_DAT_1018730c0;
    DAT_1018667e8 = 0;
    DAT_1018667ec = 0x10;
    DAT_1018667f0 = PTR_DAT_1018730c0;
    DAT_1018667f8 = 0;
    DAT_1018667fc = 0x14;
    DAT_101866800 = PTR_DAT_1018730c0;
    DAT_101866820 = DAT_101866820 + 6;
    DAT_101866808 = 0;
    DAT_10186680c = 0x18;
    DAT_101866810 = PTR_DAT_101872c98;
    DAT_101866818 = 1;
  }
  return;
}




void FUN_1004bbe28(void)

{
  long lVar1;
  
  if ((DAT_101866828 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858368,1,"SpawnPoint",0x40,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018667b8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101866820;
    DAT_101866828 = 1;
  }
  return;
}




void FUN_1004bbe88(void)

{
  long lVar1;
  
  if ((DAT_101866830 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858390,3,"SpawnPoint*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858368;
    DAT_101866830 = 1;
  }
  return;
}




void FUN_1004bbee0(void)

{
  long lVar1;
  
  if ((DAT_101866838 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018583a8,3,"SpawnPoint**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858390;
    DAT_101866838 = 1;
  }
  return;
}




void FUN_1004bbf38(void)

{
  if ((DAT_1018669b0 & 1) == 0) {
    DAT_101866840 = 0;
    DAT_101866844 = 0;
    DAT_101866848 = PTR_DAT_101873138;
    DAT_101866850 = 0;
    DAT_101866854 = 8;
    DAT_101866858 = PTR_DAT_101854fc8;
    DAT_101866860 = 0;
    DAT_101866864 = 0x10;
    DAT_101866868 = PTR_DAT_101857fa8;
    DAT_101866870 = 0;
    DAT_101866874 = 0x18;
    DAT_101866878 = PTR_DAT_101857f20;
    DAT_101866880 = 0;
    DAT_101866884 = 0xc0;
    DAT_101866888 = PTR_DAT_101857d18;
    DAT_101866890 = 0;
    DAT_101866894 = 0xd8;
    DAT_101866898 = PTR_DAT_1018578f8;
    DAT_1018668a0 = 0;
    DAT_1018668a4 = 0xe8;
    DAT_1018668a8 = PTR_DAT_101856a70;
    DAT_1018668b0 = 0;
    DAT_1018668b4 = 0x108;
    DAT_1018668b8 = PTR_DAT_1018569c0;
    DAT_1018668c0 = 0;
    DAT_1018668c4 = 0x120;
    DAT_1018668c8 = PTR_DAT_101873138;
    DAT_1018668d0 = 0;
    DAT_1018668d4 = 0x128;
    DAT_1018668d8 = PTR_DAT_101873138;
    DAT_1018668e0 = 0;
    DAT_1018668e4 = 0x130;
    DAT_1018668e8 = PTR_DAT_101873138;
    DAT_1018668f0 = 0;
    DAT_1018668f4 = 0x138;
    DAT_1018668f8 = PTR_DAT_101873138;
    DAT_101866900 = 0;
    DAT_101866904 = 0x140;
    DAT_101866908 = PTR_DAT_101873138;
    DAT_101866910 = 0;
    DAT_101866914 = 0x148;
    DAT_101866918 = PTR_DAT_101873138;
    DAT_101866920 = 0;
    DAT_101866924 = 0x150;
    DAT_101866928 = PTR_DAT_101873138;
    DAT_101866930 = 0;
    DAT_101866934 = 0x158;
    DAT_101866938 = PTR_DAT_1018583c0;
    DAT_101866940 = 0;
    DAT_101866944 = 0x160;
    DAT_101866948 = PTR_DAT_101856640;
    DAT_101866950 = 0;
    DAT_101866954 = 0x168;
    DAT_101866958 = PTR_DAT_101857368;
    DAT_101866960 = 0;
    DAT_101866964 = 0x170;
    DAT_101866968 = PTR_DAT_1018562e0;
    DAT_101866970 = 0;
    DAT_101866974 = 0x178;
    DAT_101866978 = PTR_DAT_1018573c0;
    DAT_101866980 = 0;
    DAT_101866984 = 0x180;
    DAT_101866988 = PTR_DAT_1018574c8;
    DAT_101866990 = 0;
    DAT_101866994 = 0x188;
    DAT_101866998 = PTR_DAT_1018557d0;
    DAT_1018669b8 = DAT_1018669b8 + 0x17;
    DAT_1018669a0 = 0;
    DAT_1018669a4 = 400;
    DAT_1018669a8 = PTR_DAT_101856ba0;
    DAT_1018669b0 = 1;
  }
  return;
}




void FUN_1004bc158(void)

{
  long lVar1;
  
  if ((DAT_1018669c0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018583c8,1,"Level",0x198,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101866840;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018669b8;
    DAT_1018669c0 = 1;
  }
  return;
}




void FUN_1004bc1b8(void)

{
  long lVar1;
  
  if ((DAT_1018669c8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018583f0,3,"Level*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018583c8;
    DAT_1018669c8 = 1;
  }
  return;
}




void FUN_1004bc210(void)

{
  long lVar1;
  
  if ((DAT_1018669d0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858408,3,"Level**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018583f0;
    DAT_1018669d0 = 1;
  }
  return;
}




void FUN_1004bc268(void)

{
  if ((DAT_1018669f8 & 1) == 0) {
    DAT_1018669d8 = 0;
    DAT_1018669dc = 0;
    DAT_1018669e0 = PTR_DAT_101873138;
    DAT_101866a00 = DAT_101866a00 + 2;
    DAT_1018669e8 = 0;
    DAT_1018669ec = 8;
    DAT_1018669f0 = PTR_DAT_101873138;
    DAT_1018669f8 = 1;
  }
  return;
}




void FUN_1004bc2c0(void)

{
  long lVar1;
  
  if ((DAT_101866a08 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858420,1,"Alias",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018669d8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101866a00;
    DAT_101866a08 = 1;
  }
  return;
}




void FUN_1004bc320(void)

{
  long lVar1;
  
  if ((DAT_101866a10 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858440,3,"Alias*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858420;
    DAT_101866a10 = 1;
  }
  return;
}




void FUN_1004bc378(void)

{
  long lVar1;
  
  if ((DAT_101866a18 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858458,3,"Alias**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858440;
    DAT_101866a18 = 1;
  }
  return;
}




void FUN_1004bc3d0(void)

{
  if ((DAT_101866a90 & 1) == 0) {
    DAT_101866a20 = 0;
    DAT_101866a24 = 0;
    DAT_101866a28 = PTR_DAT_101873138;
    DAT_101866a30 = 0;
    DAT_101866a34 = 8;
    DAT_101866a38 = PTR_DAT_101857b60;
    DAT_101866a40 = 0;
    DAT_101866a44 = 0x40;
    DAT_101866a48 = PTR_DAT_101856c50;
    DAT_101866a50 = 0;
    DAT_101866a54 = 0x48;
    DAT_101866a58 = PTR_DAT_101855720;
    DAT_101866a60 = 0;
    DAT_101866a64 = 0x50;
    DAT_101866a68 = PTR_DAT_101855208;
    DAT_101866a70 = 0;
    DAT_101866a74 = 0x58;
    DAT_101866a78 = PTR_DAT_101858470;
    DAT_101866a98 = DAT_101866a98 + 7;
    DAT_101866a80 = 0;
    DAT_101866a84 = 0x60;
    DAT_101866a88 = PTR_DAT_101858470;
    DAT_101866a90 = 1;
  }
  return;
}




void FUN_1004bc4a0(void)

{
  long lVar1;
  
  if ((DAT_101866aa0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858478,1,"SkinRep",0x68,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101866a20;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101866a98;
    DAT_101866aa0 = 1;
  }
  return;
}




void FUN_1004bc500(void)

{
  long lVar1;
  
  if ((DAT_101866aa8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858498,3,"SkinRep*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858478;
    DAT_101866aa8 = 1;
  }
  return;
}




void FUN_1004bc558(void)

{
  long lVar1;
  
  if ((DAT_101866ab0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018584b0,3,"SkinRep**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858498;
    DAT_101866ab0 = 1;
  }
  return;
}




void FUN_1004bc5b0(void)

{
  if ((DAT_101866ac8 & 1) == 0) {
    DAT_101866ad0 = DAT_101866ad0 + 1;
    DAT_101866ab8 = 0;
    DAT_101866abc = 0;
    DAT_101866ac0 = PTR_DAT_101858470;
    DAT_101866ac8 = 1;
  }
  return;
}




void FUN_1004bc5f4(void)

{
  long lVar1;
  
  if ((DAT_101866ad8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018584d0,1,"AliasSet",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101866ab8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101866ad0;
    DAT_101866ad8 = 1;
  }
  return;
}




void FUN_1004bc654(void)

{
  long lVar1;
  
  if ((DAT_101866ae0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018584f0,3,"AliasSet*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018584d0;
    DAT_101866ae0 = 1;
  }
  return;
}




void FUN_1004bc6ac(void)

{
  long lVar1;
  
  if ((DAT_101866ae8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858508,3,"AliasSet**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018584f0;
    DAT_101866ae8 = 1;
  }
  return;
}




void FUN_1004bc704(void)

{
  if ((DAT_101866b10 & 1) == 0) {
    DAT_101866af0 = 0;
    DAT_101866af4 = 0;
    DAT_101866af8 = PTR_DAT_101873138;
    DAT_101866b18 = DAT_101866b18 + 2;
    DAT_101866b00 = 0;
    DAT_101866b04 = 8;
    DAT_101866b08 = PTR_DAT_101873138;
    DAT_101866b10 = 1;
  }
  return;
}




void FUN_1004bc75c(void)

{
  long lVar1;
  
  if ((DAT_101866b20 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858520,1,"BotControllerSet",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101866af0;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101866b18;
    DAT_101866b20 = 1;
  }
  return;
}




void FUN_1004bc7bc(void)

{
  long lVar1;
  
  if ((DAT_101866b28 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858540,3,"BotControllerSet*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858520;
    DAT_101866b28 = 1;
  }
  return;
}




void FUN_1004bc814(void)

{
  long lVar1;
  
  if ((DAT_101866b30 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858558,3,"BotControllerSet**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858540;
    DAT_101866b30 = 1;
  }
  return;
}




void FUN_1004bc86c(void)

{
  if ((DAT_101866d48 & 1) == 0) {
    DAT_101866b38 = 0;
    DAT_101866b3c = 0;
    DAT_101866b40 = PTR_DAT_101854d20;
    DAT_101866b48 = 0;
    DAT_101866b4c = 8;
    DAT_101866b50 = PTR_DAT_101873138;
    DAT_101866b58 = 0;
    DAT_101866b5c = 0x10;
    DAT_101866b60 = PTR_DAT_101873138;
    DAT_101866b68 = 0;
    DAT_101866b6c = 0x18;
    DAT_101866b70 = PTR_DAT_101858570;
    DAT_101866b78 = 0;
    DAT_101866b7c = 0x20;
    DAT_101866b80 = PTR_DAT_101873138;
    DAT_101866b88 = 0;
    DAT_101866b8c = 0x28;
    DAT_101866b90 = PTR_DAT_101873138;
    DAT_101866b98 = 0;
    DAT_101866b9c = 0x30;
    DAT_101866ba0 = PTR_DAT_101873138;
    DAT_101866ba8 = 0;
    DAT_101866bac = 0x38;
    DAT_101866bb0 = PTR_DAT_101873138;
    DAT_101866bb8 = 0;
    DAT_101866bbc = 0x40;
    DAT_101866bc0 = PTR_DAT_101873138;
    DAT_101866bc8 = 0;
    DAT_101866bcc = 0x48;
    DAT_101866bd0 = PTR_DAT_101873138;
    DAT_101866bd8 = 0;
    DAT_101866bdc = 0x50;
    DAT_101866be0 = PTR_DAT_101873138;
    DAT_101866be8 = 0;
    DAT_101866bec = 0x58;
    DAT_101866bf0 = PTR_DAT_101873138;
    DAT_101866bf8 = 0;
    DAT_101866bfc = 0x60;
    DAT_101866c00 = PTR_DAT_101873118;
    DAT_101866c08 = 0;
    DAT_101866c0c = 0x61;
    DAT_101866c10 = PTR_DAT_101873118;
    DAT_101866c18 = 0;
    DAT_101866c1c = 100;
    DAT_101866c20 = PTR_DAT_1018730f0;
    DAT_101866c28 = 0;
    DAT_101866c2c = 0x68;
    DAT_101866c30 = PTR_DAT_1018730f0;
    DAT_101866c38 = 0;
    DAT_101866c3c = 0x6c;
    DAT_101866c40 = PTR_DAT_1018730f0;
    DAT_101866c48 = 0;
    DAT_101866c4c = 0x70;
    DAT_101866c50 = PTR_DAT_1018730f0;
    DAT_101866c58 = 0;
    DAT_101866c5c = 0x78;
    DAT_101866c60 = PTR_DAT_101873138;
    DAT_101866c68 = 0;
    DAT_101866c6c = 0x80;
    DAT_101866c70 = PTR_DAT_101873118;
    DAT_101866c78 = 0;
    DAT_101866c7c = 0x81;
    DAT_101866c80 = PTR_DAT_101873118;
    DAT_101866c88 = 0;
    DAT_101866c8c = 0x88;
    DAT_101866c90 = PTR_DAT_101857848;
    DAT_101866c98 = 0;
    DAT_101866c9c = 0xe0;
    DAT_101866ca0 = PTR_DAT_101858188;
    DAT_101866ca8 = 0;
    DAT_101866cac = 0x198;
    DAT_101866cb0 = PTR_DAT_101857470;
    DAT_101866cb8 = 0;
    DAT_101866cbc = 0x1a0;
    DAT_101866cc0 = PTR_DAT_101858130;
    DAT_101866cc8 = 0;
    DAT_101866ccc = 0x1d8;
    DAT_101866cd0 = PTR_DAT_1018584c8;
    DAT_101866cd8 = 0;
    DAT_101866cdc = 0x1e0;
    DAT_101866ce0 = PTR_DAT_101855180;
    DAT_101866ce8 = 0;
    DAT_101866cec = 0x200;
    DAT_101866cf0 = PTR_DAT_1018554e8;
    DAT_101866cf8 = 0;
    DAT_101866cfc = 0x220;
    DAT_101866d00 = PTR_DAT_1018572b8;
    DAT_101866d08 = 0;
    DAT_101866d0c = 0x228;
    DAT_101866d10 = PTR_DAT_101856028;
    DAT_101866d18 = 0;
    DAT_101866d1c = 0x230;
    DAT_101866d20 = PTR_DAT_101856e00;
    DAT_101866d28 = 0;
    DAT_101866d2c = 0x238;
    DAT_101866d30 = PTR_DAT_101856dc8;
    DAT_101866d50 = DAT_101866d50 + 0x21;
    DAT_101866d38 = 0;
    DAT_101866d3c = 0x298;
    DAT_101866d40 = PTR_DAT_101873138;
    DAT_101866d48 = 1;
  }
  return;
}




void FUN_1004bcb34(void)

{
  long lVar1;
  
  if ((DAT_101866d58 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858578,1,"Actor",0x2a0,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101866b38;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101866d50;
    DAT_101866d58 = 1;
  }
  return;
}




void FUN_1004bcb94(void)

{
  long lVar1;
  
  if ((DAT_101866d60 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018585a0,3,"Actor*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858578;
    DAT_101866d60 = 1;
  }
  return;
}




void FUN_1004bcbec(void)

{
  long lVar1;
  
  if ((DAT_101866d68 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018585b8,3,"Actor**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018585a0;
    DAT_101866d68 = 1;
  }
  return;
}




void FUN_1004bcc44(void)

{
  if ((DAT_101866d90 & 1) == 0) {
    DAT_101866d70 = 0;
    DAT_101866d74 = 0;
    DAT_101866d78 = PTR_DAT_101854e10;
    DAT_101866d98 = DAT_101866d98 + 2;
    DAT_101866d80 = 0;
    DAT_101866d84 = 8;
    DAT_101866d88 = PTR_DAT_101873138;
    DAT_101866d90 = 1;
  }
  return;
}




void FUN_1004bcca4(void)

{
  long lVar1;
  
  if ((DAT_101866da0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018585d0,1,"CutsceneCameraPan",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101866d70;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101866d98;
    DAT_101866da0 = 1;
  }
  return;
}




void FUN_1004bcd04(void)

{
  long lVar1;
  
  if ((DAT_101866da8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018585f8,3,"CutsceneCameraPan*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018585d0;
    DAT_101866da8 = 1;
  }
  return;
}




void FUN_1004bcd5c(void)

{
  long lVar1;
  
  if ((DAT_101866db0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858610,3,"CutsceneCameraPan**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018585f8;
    DAT_101866db0 = 1;
  }
  return;
}




void FUN_1004bcdb4(void)

{
  if ((DAT_101866e38 & 1) == 0) {
    DAT_101866db8 = 0;
    DAT_101866dbc = 0;
    DAT_101866dc0 = PTR_DAT_101873138;
    DAT_101866dc8 = 0;
    DAT_101866dcc = 8;
    DAT_101866dd0 = PTR_DAT_101873138;
    DAT_101866dd8 = 0;
    DAT_101866ddc = 0x10;
    DAT_101866de0 = PTR_DAT_101873138;
    DAT_101866de8 = 0;
    DAT_101866dec = 0x18;
    DAT_101866df0 = PTR_DAT_101873138;
    DAT_101866df8 = 0;
    DAT_101866dfc = 0x20;
    DAT_101866e00 = PTR_DAT_1018585f0;
    DAT_101866e08 = 0;
    DAT_101866e0c = 0x30;
    DAT_101866e10 = PTR_DAT_101854e60;
    DAT_101866e18 = 0;
    DAT_101866e1c = 0x34;
    DAT_101866e20 = PTR_DAT_101854e38;
    DAT_101866e40 = DAT_101866e40 + 8;
    DAT_101866e28 = 0;
    DAT_101866e2c = 0x38;
    DAT_101866e30 = PTR_DAT_101857df8;
    DAT_101866e38 = 1;
  }
  return;
}




void FUN_1004bce8c(void)

{
  long lVar1;
  
  if ((DAT_101866e48 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858628,1,"CutsceneDialog",0x40,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101866db8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101866e40;
    DAT_101866e48 = 1;
  }
  return;
}




void FUN_1004bceec(void)

{
  long lVar1;
  
  if ((DAT_101866e50 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858648,3,"CutsceneDialog*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858628;
    DAT_101866e50 = 1;
  }
  return;
}




void FUN_1004bcf44(void)

{
  long lVar1;
  
  if ((DAT_101866e58 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858660,3,"CutsceneDialog**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858648;
    DAT_101866e58 = 1;
  }
  return;
}




void FUN_1004bcf9c(void)

{
  if ((DAT_101866e80 & 1) == 0) {
    DAT_101866e60 = 0;
    DAT_101866e64 = 0;
    DAT_101866e68 = PTR_DAT_101873138;
    DAT_101866e88 = DAT_101866e88 + 2;
    DAT_101866e70 = 0;
    DAT_101866e74 = 8;
    DAT_101866e78 = PTR_DAT_101858678;
    DAT_101866e80 = 1;
  }
  return;
}




void FUN_1004bcffc(void)

{
  long lVar1;
  
  if ((DAT_101866e90 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858680,1,"CutsceneConversation",0x10,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101866e60;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101866e88;
    DAT_101866e90 = 1;
  }
  return;
}




void FUN_1004bd05c(void)

{
  long lVar1;
  
  if ((DAT_101866e98 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018586a0,3,"CutsceneConversation*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858680;
    DAT_101866e98 = 1;
  }
  return;
}




void FUN_1004bd0b4(void)

{
  long lVar1;
  
  if ((DAT_101866ea0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018586b8,3,"CutsceneConversation**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018586a0;
    DAT_101866ea0 = 1;
  }
  return;
}




void FUN_1004bd10c(void)

{
  if ((DAT_101866ed8 & 1) == 0) {
    DAT_101866ea8 = 0;
    DAT_101866eac = 0;
    DAT_101866eb0 = PTR_DAT_101872c98;
    DAT_101866eb8 = 0;
    DAT_101866ebc = 0x28;
    DAT_101866ec0 = PTR_DAT_101873138;
    DAT_101866ee0 = DAT_101866ee0 + 3;
    DAT_101866ec8 = 0;
    DAT_101866ecc = 0x30;
    DAT_101866ed0 = PTR_DAT_101873138;
    DAT_101866ed8 = 1;
  }
  return;
}




void FUN_1004bd180(void)

{
  long lVar1;
  
  if ((DAT_101866ee8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018586d0,1,"StaticPfx",0x38,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101866ea8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101866ee0;
    DAT_101866ee8 = 1;
  }
  return;
}




void FUN_1004bd1e0(void)

{
  long lVar1;
  
  if ((DAT_101866ef0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018586f0,3,"StaticPfx*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018586d0;
    DAT_101866ef0 = 1;
  }
  return;
}




void FUN_1004bd238(void)

{
  long lVar1;
  
  if ((DAT_101866ef8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858708,3,"StaticPfx**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018586f0;
    DAT_101866ef8 = 1;
  }
  return;
}




void FUN_1004bd290(void)

{
  if ((DAT_101866fc0 & 1) == 0) {
    DAT_101866f00 = 0;
    DAT_101866f04 = 0;
    DAT_101866f08 = PTR_DAT_101855ed0;
    DAT_101866f10 = 0;
    DAT_101866f14 = 8;
    DAT_101866f18 = PTR_DAT_101857be8;
    DAT_101866f20 = 0;
    DAT_101866f24 = 0x10;
    DAT_101866f28 = PTR_DAT_101857be8;
    DAT_101866f30 = 0;
    DAT_101866f34 = 0x18;
    DAT_101866f38 = PTR_DAT_101857be8;
    DAT_101866f40 = 0;
    DAT_101866f44 = 0x20;
    DAT_101866f48 = PTR_DAT_101858720;
    DAT_101866f50 = 0;
    DAT_101866f54 = 0x28;
    DAT_101866f58 = PTR_DAT_101858720;
    DAT_101866f60 = 0;
    DAT_101866f64 = 0x30;
    DAT_101866f68 = PTR_DAT_101858720;
    DAT_101866f70 = 0;
    DAT_101866f74 = 0x38;
    DAT_101866f78 = PTR_DAT_101856740;
    DAT_101866f80 = 0;
    DAT_101866f84 = 0x40;
    DAT_101866f88 = PTR_DAT_101856390;
    DAT_101866f90 = 0;
    DAT_101866f94 = 0x48;
    DAT_101866f98 = PTR_DAT_101872e30;
    DAT_101866fa0 = 0;
    DAT_101866fa4 = 0x50;
    DAT_101866fa8 = PTR_DAT_101873138;
    DAT_101866fc8 = DAT_101866fc8 + 0xc;
    DAT_101866fb0 = 0;
    DAT_101866fb4 = 0x58;
    DAT_101866fb8 = PTR_DAT_101857da0;
    DAT_101866fc0 = 1;
  }
  return;
}




void FUN_1004bd3c4(void)

{
  long lVar1;
  
  if ((DAT_101866fd0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858728,1,"LevelVisuals",0x60,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101866f00;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101866fc8;
    DAT_101866fd0 = 1;
  }
  return;
}




void FUN_1004bd424(void)

{
  long lVar1;
  
  if ((DAT_101866fd8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858748,3,"LevelVisuals*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858728;
    DAT_101866fd8 = 1;
  }
  return;
}




void FUN_1004bd47c(void)

{
  long lVar1;
  
  if ((DAT_101866fe0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858760,3,"LevelVisuals**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858748;
    DAT_101866fe0 = 1;
  }
  return;
}




void FUN_1004bd4d4(void)

{
  if ((DAT_101867018 & 1) == 0) {
    DAT_101866fe8 = 0;
    DAT_101866fec = 0;
    DAT_101866ff0 = PTR_DAT_101872c38;
    DAT_101866ff8 = 0;
    DAT_101866ffc = 0xc;
    DAT_101867000 = PTR_DAT_101872c38;
    DAT_101867020 = DAT_101867020 + 3;
    DAT_101867008 = 0;
    DAT_10186700c = 0x18;
    DAT_101867010 = PTR_DAT_101872c38;
    DAT_101867018 = 1;
  }
  return;
}




void FUN_1004bd53c(void)

{
  long lVar1;
  
  if ((DAT_101867028 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858778,1,"MenuMeshOmniLight",0x24,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101866fe8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101867020;
    DAT_101867028 = 1;
  }
  return;
}




void FUN_1004bd59c(void)

{
  long lVar1;
  
  if ((DAT_101867030 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018587a0,3,"MenuMeshOmniLight*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858778;
    DAT_101867030 = 1;
  }
  return;
}




void FUN_1004bd5f4(void)

{
  long lVar1;
  
  if ((DAT_101867038 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018587b8,3,"MenuMeshOmniLight**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018587a0;
    DAT_101867038 = 1;
  }
  return;
}




void FUN_1004bd64c(void)

{
  if ((DAT_1018670d0 & 1) == 0) {
    DAT_101867040 = 0;
    DAT_101867044 = 0;
    DAT_101867048 = PTR_DAT_101873138;
    DAT_101867050 = 0;
    DAT_101867054 = 8;
    DAT_101867058 = PTR_DAT_101855f28;
    DAT_101867060 = 0;
    DAT_101867064 = 0x10;
    DAT_101867068 = PTR_DAT_101855828;
    DAT_101867070 = 0;
    DAT_101867074 = 0x18;
    DAT_101867078 = PTR_DAT_101855570;
    DAT_101867080 = 0;
    DAT_101867084 = 0x20;
    DAT_101867088 = PTR_DAT_1018582b8;
    DAT_101867090 = 0;
    DAT_101867094 = 0x28;
    DAT_101867098 = PTR_DAT_101855330;
    DAT_1018670a0 = 0;
    DAT_1018670a4 = 0x58;
    DAT_1018670a8 = PTR_DAT_101858798;
    DAT_1018670b0 = 0;
    DAT_1018670b4 = 0x7c;
    DAT_1018670b8 = PTR_DAT_101858798;
    DAT_1018670d8 = DAT_1018670d8 + 9;
    DAT_1018670c0 = 0;
    DAT_1018670c4 = 0xa0;
    DAT_1018670c8 = PTR_DAT_101872c70;
    DAT_1018670d0 = 1;
  }
  return;
}




void FUN_1004bd750(void)

{
  long lVar1;
  
  if ((DAT_1018670e0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018587d0,1,"MenuMeshData",0xa8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101867040;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018670d8;
    DAT_1018670e0 = 1;
  }
  return;
}




void FUN_1004bd7b0(void)

{
  long lVar1;
  
  if ((DAT_1018670e8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018587f0,3,"MenuMeshData*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018587d0;
    DAT_1018670e8 = 1;
  }
  return;
}




void FUN_1004bd808(void)

{
  long lVar1;
  
  if ((DAT_1018670f0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858808,3,"MenuMeshData**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018587f0;
    DAT_1018670f0 = 1;
  }
  return;
}




void FUN_1004bd860(void)

{
  if ((DAT_101867138 & 1) == 0) {
    DAT_1018670f8 = 0;
    DAT_1018670fc = 0;
    DAT_101867100 = PTR_DAT_101873138;
    DAT_101867108 = 0;
    DAT_10186710c = 8;
    DAT_101867110 = PTR_DAT_101873138;
    DAT_101867118 = 0;
    DAT_10186711c = 0x10;
    DAT_101867120 = PTR_DAT_101873118;
    DAT_101867140 = DAT_101867140 + 4;
    DAT_101867128 = 0;
    DAT_10186712c = 0x11;
    DAT_101867130 = PTR_DAT_101873118;
    DAT_101867138 = 1;
  }
  return;
}




void FUN_1004bd8e4(void)

{
  long lVar1;
  
  if ((DAT_101867148 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858820,1,"GameModePartyDropDownEntry",0x18,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018670f8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101867140;
    DAT_101867148 = 1;
  }
  return;
}




void FUN_1004bd944(void)

{
  long lVar1;
  
  if ((DAT_101867150 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858840,3,"GameModePartyDropDownEntry*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858820;
    DAT_101867150 = 1;
  }
  return;
}




void FUN_1004bd99c(void)

{
  long lVar1;
  
  if ((DAT_101867158 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858858,3,"GameModePartyDropDownEntry**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858840;
    DAT_101867158 = 1;
  }
  return;
}




void FUN_1004bd9f4(void)

{
  if ((DAT_101867190 & 1) == 0) {
    DAT_101867160 = 0;
    DAT_101867164 = 0;
    DAT_101867168 = PTR_DAT_101858870;
    DAT_101867170 = 0;
    DAT_101867174 = 8;
    DAT_101867178 = PTR_DAT_101858870;
    DAT_101867198 = DAT_101867198 + 3;
    DAT_101867180 = 0;
    DAT_101867184 = 0x10;
    DAT_101867188 = PTR_DAT_101858870;
    DAT_101867190 = 1;
  }
  return;
}




void FUN_1004bda58(void)

{
  long lVar1;
  
  if ((DAT_1018671a0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858878,1,"GameModePartyDropDown",0x18,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101867160;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101867198;
    DAT_1018671a0 = 1;
  }
  return;
}




void FUN_1004bdab8(void)

{
  long lVar1;
  
  if ((DAT_1018671a8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858898,3,"GameModePartyDropDown*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858878;
    DAT_1018671a8 = 1;
  }
  return;
}




void FUN_1004bdb10(void)

{
  long lVar1;
  
  if ((DAT_1018671b0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018588b0,3,"GameModePartyDropDown**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858898;
    DAT_1018671b0 = 1;
  }
  return;
}




void FUN_1004bdb68(void)

{
  if ((DAT_1018671d8 & 1) == 0) {
    DAT_1018671b8 = 0;
    DAT_1018671bc = 0;
    DAT_1018671c0 = PTR_DAT_1018730c0;
    DAT_1018671e0 = DAT_1018671e0 + 2;
    DAT_1018671c8 = 0;
    DAT_1018671cc = 4;
    DAT_1018671d0 = PTR_DAT_1018730c0;
    DAT_1018671d8 = 1;
  }
  return;
}




void FUN_1004bdbc0(void)

{
  long lVar1;
  
  if ((DAT_1018671e8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018588c8,1,"HeroMasteryLevel",8,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_1018671b8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_1018671e0;
    DAT_1018671e8 = 1;
  }
  return;
}




void FUN_1004bdc20(void)

{
  long lVar1;
  
  if ((DAT_1018671f0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018588e8,3,"HeroMasteryLevel*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018588c8;
    DAT_1018671f0 = 1;
  }
  return;
}




void FUN_1004bdc78(void)

{
  long lVar1;
  
  if ((DAT_1018671f8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858900,3,"HeroMasteryLevel**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_1018588e8;
    DAT_1018671f8 = 1;
  }
  return;
}




void FUN_1004bdcd0(void)

{
  if ((DAT_101867210 & 1) == 0) {
    DAT_101867218 = DAT_101867218 + 1;
    DAT_101867200 = 0;
    DAT_101867204 = 0;
    DAT_101867208 = PTR_DAT_101858918;
    DAT_101867210 = 1;
  }
  return;
}




void FUN_1004bdd14(void)

{
  long lVar1;
  
  if ((DAT_101867220 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858920,1,"HeroMasteryManifest",8,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101867200;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101867218;
    DAT_101867220 = 1;
  }
  return;
}




void FUN_1004bdd74(void)

{
  long lVar1;
  
  if ((DAT_101867228 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858940,3,"HeroMasteryManifest*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858920;
    DAT_101867228 = 1;
  }
  return;
}




void FUN_1004bddcc(void)

{
  long lVar1;
  
  if ((DAT_101867230 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858958,3,"HeroMasteryManifest**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858940;
    DAT_101867230 = 1;
  }
  return;
}




void FUN_1004bde24(void)

{
  if ((DAT_101867268 & 1) == 0) {
    DAT_101867238 = 0;
    DAT_10186723c = 0;
    DAT_101867240 = PTR_DAT_101873138;
    DAT_101867248 = 0;
    DAT_10186724c = 8;
    DAT_101867250 = PTR_DAT_101873138;
    DAT_101867270 = DAT_101867270 + 3;
    DAT_101867258 = 0;
    DAT_10186725c = 0x10;
    DAT_101867260 = PTR_DAT_101873138;
    DAT_101867268 = 1;
  }
  return;
}




void FUN_1004bde8c(void)

{
  long lVar1;
  
  if ((DAT_101867278 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858970,1,"HatMaterial",0x18,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101867238;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101867270;
    DAT_101867278 = 1;
  }
  return;
}




void FUN_1004bdeec(void)

{
  long lVar1;
  
  if ((DAT_101867280 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101858990,3,"HatMaterial*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858970;
    DAT_101867280 = 1;
  }
  return;
}




void FUN_1004bdf44(void)

{
  long lVar1;
  
  if ((DAT_101867288 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_1018589a8,3,"HatMaterial**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101858990;
    DAT_101867288 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004bdf9c(void)

{
  if ((DAT_1018672a8 & 1) == 0) {
    ram0x0001018672a0 = DAT_101872e38;
    DAT_1018672a8 = 1;
  }
  return;
}




void FUN_1004bdfc8(void)

{
  if ((DAT_10184dad0 & 1) == 0) {
    DAT_10184dac8 = DAT_101872e38;
    DAT_10184dad0 = 1;
  }
  return;
}




void FUN_1004bdff4(void)

{
  if ((DAT_10184dd70 & 1) == 0) {
    DAT_10184dd68 = DAT_101872e38;
    DAT_10184dd70 = 1;
  }
  return;
}




void FUN_1004be020(void)

{
  if ((DAT_10184e008 & 1) == 0) {
    DAT_10184e000 = DAT_101872e38;
    DAT_10184e008 = 1;
  }
  return;
}




void FUN_1004be04c(void)

{
  if ((DAT_10184e3c0 & 1) == 0) {
    DAT_10184e3b8 = DAT_101872e38;
    DAT_10184e3c0 = 1;
  }
  return;
}




void FUN_1004be078(void)

{
  if ((DAT_10184e3d8 & 1) == 0) {
    DAT_10184e3d0 = DAT_101872e38;
    DAT_10184e3d8 = 1;
  }
  return;
}




void FUN_1004be0a4(void)

{
  if ((DAT_1018672b8 & 1) == 0) {
    DAT_1018672b0 = DAT_101872e38;
    DAT_1018672b8 = 1;
  }
  return;
}




void FUN_1004be0d0(void)

{
  if ((DAT_1018672c8 & 1) == 0) {
    DAT_1018672c0 = DAT_101872e38;
    DAT_1018672c8 = 1;
  }
  return;
}




void FUN_1004be0fc(void)

{
  if ((DAT_10184dec8 & 1) == 0) {
    DAT_10184dec0 = DAT_101872e38;
    DAT_10184dec8 = 1;
  }
  return;
}




void FUN_1004be128(void)

{
  if ((DAT_10184e118 & 1) == 0) {
    DAT_10184e110 = DAT_101872e38;
    DAT_10184e118 = 1;
  }
  return;
}




void FUN_1004be154(void)

{
  if ((DAT_10184de58 & 1) == 0) {
    DAT_10184de50 = DAT_101872e38;
    DAT_10184de58 = 1;
  }
  return;
}




void FUN_1004be180(void)

{
  if ((DAT_10184dab0 & 1) == 0) {
    DAT_10184daa8 = DAT_101872e38;
    DAT_10184dab0 = 1;
  }
  return;
}




void FUN_1004be1ac(void)

{
  if ((DAT_10184dea8 & 1) == 0) {
    DAT_10184dea0 = DAT_101872e38;
    DAT_10184dea8 = 1;
  }
  return;
}




void FUN_1004be1d8(void)

{
  if ((DAT_1018672d8 & 1) == 0) {
    DAT_1018672d0 = DAT_101872e38;
    DAT_1018672d8 = 1;
  }
  return;
}




void FUN_1004be204(void)

{
  if ((DAT_1018672e8 & 1) == 0) {
    DAT_1018672e0 = DAT_101872e38;
    DAT_1018672e8 = 1;
  }
  return;
}




void FUN_1004be230(void)

{
  if ((DAT_1018672f8 & 1) == 0) {
    DAT_1018672f0 = DAT_101872e38;
    DAT_1018672f8 = 1;
  }
  return;
}




void FUN_1004be25c(void)

{
  if ((DAT_101867308 & 1) == 0) {
    DAT_101867300 = DAT_101872e38;
    DAT_101867308 = 1;
  }
  return;
}




void FUN_1004be288(void)

{
  if ((DAT_10184dc40 & 1) == 0) {
    DAT_10184dc38 = DAT_101872e38;
    DAT_10184dc40 = 1;
  }
  return;
}




void FUN_1004be2b4(void)

{
  if ((DAT_10184e4d0 & 1) == 0) {
    DAT_10184e4c8 = DAT_101872e38;
    DAT_10184e4d0 = 1;
  }
  return;
}




void FUN_1004be2e0(void)

{
  if ((DAT_101867318 & 1) == 0) {
    DAT_101867310 = DAT_101872e38;
    DAT_101867318 = 1;
  }
  return;
}




void FUN_1004be30c(void)

{
  if ((DAT_101867328 & 1) == 0) {
    DAT_101867320 = DAT_101872e38;
    DAT_101867328 = 1;
  }
  return;
}




void FUN_1004be338(void)

{
  if ((DAT_10184dac0 & 1) == 0) {
    DAT_10184dab8 = DAT_101872e38;
    DAT_10184dac0 = 1;
  }
  return;
}




void FUN_1004be364(void)

{
  if ((DAT_101867338 & 1) == 0) {
    DAT_101867330 = DAT_101872e38;
    DAT_101867338 = 1;
  }
  return;
}




void FUN_1004be390(void)

{
  if ((DAT_10184e158 & 1) == 0) {
    DAT_10184e150 = DAT_101872e38;
    DAT_10184e158 = 1;
  }
  return;
}




void FUN_1004be3bc(void)

{
  if ((DAT_10184ddb0 & 1) == 0) {
    DAT_10184dda8 = DAT_101872e38;
    DAT_10184ddb0 = 1;
  }
  return;
}




void FUN_1004be3e8(void)

{
  if ((DAT_101867348 & 1) == 0) {
    DAT_101867340 = DAT_101872e38;
    DAT_101867348 = 1;
  }
  return;
}




void FUN_1004be414(void)

{
  if ((DAT_101867358 & 1) == 0) {
    DAT_101867350 = DAT_101872e38;
    DAT_101867358 = 1;
  }
  return;
}




void FUN_1004be440(void)

{
  if ((DAT_101867368 & 1) == 0) {
    DAT_101867360 = DAT_101872e38;
    DAT_101867368 = 1;
  }
  return;
}




void FUN_1004be46c(void)

{
  if ((DAT_101867378 & 1) == 0) {
    DAT_101867370 = DAT_101872e38;
    DAT_101867378 = 1;
  }
  return;
}




void FUN_1004be498(void)

{
  if ((DAT_101867388 & 1) == 0) {
    DAT_101867380 = DAT_101872e38;
    DAT_101867388 = 1;
  }
  return;
}




void FUN_1004be4c4(void)

{
  if ((DAT_101867398 & 1) == 0) {
    DAT_101867390 = DAT_101872e38;
    DAT_101867398 = 1;
  }
  return;
}




void FUN_1004be4f0(void)

{
  if ((DAT_1018673a8 & 1) == 0) {
    DAT_1018673a0 = DAT_101872e38;
    DAT_1018673a8 = 1;
  }
  return;
}




void FUN_1004be51c(void)

{
  if ((DAT_1018673b8 & 1) == 0) {
    DAT_1018673b0 = DAT_101872e38;
    DAT_1018673b8 = 1;
  }
  return;
}




void FUN_1004be548(void)

{
  if ((DAT_10184db00 & 1) == 0) {
    DAT_10184daf8 = DAT_101872e38;
    DAT_10184db00 = 1;
  }
  return;
}




void FUN_1004be574(void)

{
  if ((DAT_10184e3a0 & 1) == 0) {
    DAT_10184e398 = DAT_101872e38;
    DAT_10184e3a0 = 1;
  }
  return;
}




void FUN_1004be5a0(void)

{
  if ((DAT_1018673c8 & 1) == 0) {
    DAT_1018673c0 = DAT_101872e38;
    DAT_1018673c8 = 1;
  }
  return;
}




void FUN_1004be5cc(void)

{
  if ((DAT_1018673d8 & 1) == 0) {
    DAT_1018673d0 = DAT_101872e38;
    DAT_1018673d8 = 1;
  }
  return;
}




void FUN_1004be5f8(void)

{
  if ((DAT_1018673e8 & 1) == 0) {
    DAT_1018673e0 = DAT_101872e38;
    DAT_1018673e8 = 1;
  }
  return;
}




void FUN_1004be624(void)

{
  if ((DAT_10184e128 & 1) == 0) {
    DAT_10184e120 = DAT_101872e38;
    DAT_10184e128 = 1;
  }
  return;
}




void FUN_1004be650(void)

{
  if ((DAT_1018673f8 & 1) == 0) {
    DAT_1018673f0 = DAT_101872e38;
    DAT_1018673f8 = 1;
  }
  return;
}




void FUN_1004be67c(void)

{
  if ((DAT_10184dfe8 & 1) == 0) {
    DAT_10184dfe0 = DAT_101872e38;
    DAT_10184dfe8 = 1;
  }
  return;
}




void FUN_1004be6a8(void)

{
  if ((DAT_10184de78 & 1) == 0) {
    DAT_10184de70 = DAT_101872e38;
    DAT_10184de78 = 1;
  }
  return;
}




void FUN_1004be6d4(void)

{
  if ((DAT_101867408 & 1) == 0) {
    DAT_101867400 = DAT_101872e38;
    DAT_101867408 = 1;
  }
  return;
}




void FUN_1004be700(void)

{
  if ((DAT_101867418 & 1) == 0) {
    DAT_101867410 = DAT_101872e38;
    DAT_101867418 = 1;
  }
  return;
}




void FUN_1004be72c(void)

{
  if ((DAT_101867428 & 1) == 0) {
    DAT_101867420 = DAT_101872e38;
    DAT_101867428 = 1;
  }
  return;
}




void FUN_1004be758(void)

{
  if ((DAT_101867438 & 1) == 0) {
    DAT_101867430 = DAT_101872e38;
    DAT_101867438 = 1;
  }
  return;
}

