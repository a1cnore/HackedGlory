// functions/00b3e — 11 functions
#include "libGameKindred.h"




void FUN_00b3edc4(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x35439) = param_2 & 1;
  FUN_00ed04d8(param_1 + 0x298,0);
  *(uint *)(param_1 + 0x31c) =
       *(uint *)(param_1 + 0x31c) & 0xffffffef | (uint)*(byte *)(param_1 + 0x35439) << 4;
  return;
}




void FUN_00b3ee18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b41af4(param_1,param_4);
  return;
}




void FUN_00b3ee24(float param_1,long param_2)

{
  if ((*(float *)(param_2 + 0xd0) != param_1) || (*(float *)(param_2 + 0xd4) != param_1)) {
    *(float *)(param_2 + 0xd0) = param_1;
    *(float *)(param_2 + 0xd4) = param_1;
    FUN_0091ada4(param_2 + 0x88);
  }
  if ((*(float *)(param_2 + 0x480) == param_1) && (*(float *)(param_2 + 0x484) == param_1)) {
    return;
  }
  *(float *)(param_2 + 0x480) = param_1;
  *(float *)(param_2 + 0x484) = param_1;
  FUN_0091ada4(param_2 + 0x438);
  return;
}




void FUN_00b3eeb4(long param_1)

{
  FUN_00cbeb84(param_1 + 0x17728);
  FUN_00e6ce7c("MENU_GUILD_EDIT_SETTINGS_FORM_PANEL_TITLE",0);
  FUN_00cbeccc();
  return;
}




void FUN_00b3eee4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_00962f40(uVar1,param_1 + 0x353f0);
  FUN_00ad3a50(param_1 + 0x9ad0,0,0);
  return;
}




void FUN_00b3ef24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b415c0(param_1,param_4);
  return;
}




void FUN_00b3ef2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b417e0(param_1,param_4);
  return;
}




void FUN_00b3ef34(long param_1)

{
  FUN_00cbec10(param_1 + 0x17728);
  FUN_00936744(param_1 + 0x34e98,FUN_00b435dc,FUN_00b4361c);
  return;
}




void FUN_00b3ef80(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x35438) = 0;
  }
  return;
}




void FUN_00b3efb0(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x35358) = 0;
  }
  return;
}




void FUN_00b3efe0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e0cf8;
  param_1[0x19] = &PTR_FUN_027e0e78;
  param_1[0x1c] = &PTR_FUN_027e0ea0;
  FUN_00cbec10(param_1 + 0x2ee5);
  FUN_0099cedc(param_1 + 0x6a82);
  if ((*(byte *)(param_1 + 0x6a7e) & 1) != 0) {
    operator_delete((void *)param_1[0x6a80]);
  }
  FUN_00b357ac(param_1 + 0x6a02);
  FUN_00f01868(param_1 + 0x69f1);
  FUN_00b3f690(param_1 + 0x2ee5);
  FUN_00ad501c(param_1 + 0x135a);
  FUN_00f0d3a4(param_1 + 0x1334);
  FUN_00f0d3a4(param_1 + 0x130e);
  FUN_00f0d3a4(param_1 + 0x12e8);
  FUN_00f13d08(param_1 + 0x12cf);
  FUN_009c7fa8(param_1 + 0x1017);
  FUN_00f0d3a4(param_1 + 0xff1);
  param_1[0xb63] = &PTR_FUN_027d51f0;
  param_1[0xfd2] = &PTR_FUN_028266f0;
  param_1[0xfe9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xfec);
  FUN_00f13d08(param_1 + 0xfd2);
  param_1[0xfb4] = &PTR_FUN_028266f0;
  param_1[0xfcb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xfce);
  FUN_00f13d08(param_1 + 0xfb4);
  FUN_00f0d3a4(param_1 + 0xf8e);
  param_1[0xf70] = &PTR_FUN_028266f0;
  param_1[0xf87] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf8a);
  FUN_00f13d08(param_1 + 0xf70);
  FUN_00f01868(param_1 + 0xf5f);
  param_1[0xf41] = &PTR_FUN_028266f0;
  param_1[0xf58] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf5b);
  FUN_00f13d08(param_1 + 0xf41);
  param_1[0xb63] = &PTR_FUN_027d5058;
  FUN_00f13d08(param_1 + 0xf0a);
  FUN_00f01868(param_1 + 0xef9);
  FUN_00f13d08(param_1 + 0xec5);
  FUN_00f01868(param_1 + 0xeb4);
  FUN_00f0d3a4(param_1 + 0xe8e);
  FUN_00f0d3a4(param_1 + 0xe68);
  param_1[0xe4a] = &PTR_FUN_028266f0;
  param_1[0xe61] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe64);
  FUN_00f13d08(param_1 + 0xe4a);
  param_1[0xe2c] = &PTR_FUN_028266f0;
  param_1[0xe43] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe46);
  FUN_00f13d08(param_1 + 0xe2c);
  FUN_00f01868(param_1 + 0xe1b);
  FUN_009c7fa8(param_1 + 0xb63);
  param_1[0xb3f] = &PTR_FUN_028266f0;
  param_1[0xb56] = &PTR_FUN_02826850;
  param_1[0xaa4] = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0xb59);
  FUN_00f13d08(param_1 + 0xb3f);
  param_1[0xb21] = &PTR_FUN_028266f0;
  param_1[0xb38] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb3b);
  FUN_00f13d08(param_1 + 0xb21);
  param_1[0xb03] = &PTR_FUN_028266f0;
  param_1[0xb1a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb1d);
  FUN_00f13d08(param_1 + 0xb03);
  FUN_00f01868(param_1 + 0xaf2);
  FUN_009c825c(param_1 + 0xaa4);
  FUN_00b029f4(param_1 + 0x964);
  FUN_00f0d3a4(param_1 + 0x93e);
  FUN_00f13d08(param_1 + 0x927);
  FUN_00f0d3a4(param_1 + 0x901);
  param_1[0x8e3] = &PTR_FUN_028266f0;
  param_1[0x8fa] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8fd);
  FUN_00f13d08(param_1 + 0x8e3);
  FUN_00ab0d88(param_1 + 0x680);
  FUN_00f0d3a4(param_1 + 0x65a);
  param_1[0x63c] = &PTR_FUN_028266f0;
  param_1[0x653] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x656);
  FUN_00f13d08(param_1 + 0x63c);
  param_1[0x57d] = &PTR_FUN_027d5388;
  param_1[0x618] = &PTR_FUN_028266f0;
  param_1[0x62f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x632);
  FUN_00f13d08(param_1 + 0x618);
  param_1[0x5fa] = &PTR_FUN_028266f0;
  param_1[0x611] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x614);
  FUN_00f13d08(param_1 + 0x5fa);
  param_1[0x5dc] = &PTR_FUN_028266f0;
  param_1[0x5f3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5f6);
  FUN_00f13d08(param_1 + 0x5dc);
  FUN_00f01868(param_1 + 0x5cb);
  FUN_009c825c(param_1 + 0x57d);
  param_1[0x4f0] = &PTR_FUN_027e0fd0;
  FUN_00af8c0c(param_1 + 0x507);
  FUN_00f13d08(param_1 + 0x4f0);
  FUN_00f0d3a4(param_1 + 0x4ca);
  FUN_00af8c0c(param_1 + 0x454);
  FUN_00f13d08(param_1 + 0x43d);
  param_1[0x37e] = &PTR_FUN_027d5388;
  param_1[0x419] = &PTR_FUN_028266f0;
  param_1[0x430] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x433);
  FUN_00f13d08(param_1 + 0x419);
  param_1[0x3fb] = &PTR_FUN_028266f0;
  param_1[0x412] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x415);
  FUN_00f13d08(param_1 + 0x3fb);
  param_1[0x3dd] = &PTR_FUN_028266f0;
  param_1[0x3f4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3f7);
  FUN_00f13d08(param_1 + 0x3dd);
  FUN_00f01868(param_1 + 0x3cc);
  FUN_009c825c(param_1 + 0x37e);
  param_1[0x2bf] = &PTR_FUN_027d5388;
  param_1[0x35a] = &PTR_FUN_028266f0;
  param_1[0x371] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x374);
  FUN_00f13d08(param_1 + 0x35a);
  param_1[0x33c] = &PTR_FUN_028266f0;
  param_1[0x353] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x356);
  FUN_00f13d08(param_1 + 0x33c);
  param_1[0x31e] = &PTR_FUN_028266f0;
  param_1[0x335] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x338);
  FUN_00f13d08(param_1 + 0x31e);
  FUN_00f01868(param_1 + 0x30d);
  FUN_009c825c(param_1 + 0x2bf);
  FUN_00f0d3a4(param_1 + 0x299);
  param_1[0x27b] = &PTR_FUN_028266f0;
  param_1[0x292] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x295);
  FUN_00f13d08(param_1 + 0x27b);
  param_1[0x25a] = &PTR_FUN_028266f0;
  param_1[0x271] = &PTR_FUN_02826850;
  param_1[0xfa] = &PTR_FUN_027d6650;
  FUN_00f0a79c(param_1 + 0x274);
  FUN_00f13d08(param_1 + 0x25a);
  param_1[0x23c] = &PTR_FUN_028266f0;
  param_1[0x253] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x256);
  FUN_00f13d08(param_1 + 0x23c);
  FUN_00ac6220(param_1 + 0x1d1);
  FUN_00ac6220(param_1 + 0x166);
  FUN_00f0d3a4(param_1 + 0x140);
  param_1[0x122] = &PTR_FUN_028266f0;
  param_1[0x139] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x13c);
  FUN_00f13d08(param_1 + 0x122);
  FUN_00f01868(param_1 + 0x111);
  FUN_00f13d08(param_1 + 0xfa);
  FUN_00ed00e0(param_1 + 0x53);
  FUN_00f13d08(param_1 + 0x1f);
  FUN_00e835e0(param_1 + 0x1c);
  FUN_00a997e0(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}

