// functions/00928 — 21 functions
#include "libGameKindred.h"




undefined8 FUN_0092806c(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_58 [24];
  undefined1 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfee84(param_1[1],param_1[2],auStack_58,*param_1,param_1[3] != 0);
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009280dc(undefined4 *param_1)

{
  long lVar1;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 auStack_60 [24];
  undefined1 local_48;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_70 = *(undefined8 *)(param_1 + 2);
  local_68 = param_1[4];
  FUN_00d00174(param_1[1],auStack_60,*param_1,&local_70,*(char *)(param_1 + 5) != '\0');
  local_48 = 1;
  FUN_00ce20fc(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00928160(undefined1 *param_1)

{
  long lVar1;
  undefined8 local_68;
  undefined1 auStack_60 [24];
  undefined1 local_48;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_68 = *(undefined8 *)(param_1 + 1);
  FUN_00983f88(*(undefined4 *)(param_1 + 9),auStack_60,*param_1,&local_68,param_1[0xd],
               param_1[0xe] != '\0');
  local_48 = 1;
  FUN_00ce20fc(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009281e0(undefined1 *param_1)

{
  long lVar1;
  undefined1 auStack_60 [24];
  undefined1 local_48;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00984098(*(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5),
               *(undefined4 *)(param_1 + 9),*(undefined4 *)(param_1 + 0xd),
               *(undefined4 *)(param_1 + 0x11),auStack_60,*param_1);
  local_48 = 1;
  FUN_00ce20fc(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00928254(undefined4 *param_1)

{
  long lVar1;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 auStack_68 [24];
  undefined1 local_50;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = *(undefined8 *)(param_1 + 5);
  local_70 = param_1[7];
  FUN_00cfefa0(param_1[1],param_1[2],auStack_68,*param_1,param_1[3],&local_78);
  FUN_00d0005c(auStack_68,param_1[4]);
  local_50 = 1;
  FUN_00ce20fc(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009282e0(undefined4 *param_1)

{
  long lVar1;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 auStack_58 [24];
  undefined1 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_68 = *(undefined8 *)(param_1 + 1);
  local_60 = param_1[3];
  FUN_00d008a0(auStack_58,*param_1,&local_68);
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00928354(undefined4 *param_1)

{
  long lVar1;
  undefined4 local_58 [2];
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_58[0] = *param_1;
  FUN_00983e5c(auStack_50,*(undefined1 *)(param_1 + 1),*(undefined1 *)((long)param_1 + 5),local_58);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009283c4(undefined4 *param_1)

{
  long lVar1;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 auStack_58 [24];
  undefined1 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_68 = *(undefined8 *)(param_1 + 1);
  local_60 = param_1[3];
  FUN_00d07ad0(auStack_58,*param_1,&local_68,*(char *)(param_1 + 4) != '\0');
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00928444(undefined1 *param_1)

{
  long lVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  undefined1 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *(undefined8 *)(param_1 + 1);
  local_68 = *(undefined8 *)(param_1 + 9);
  FUN_00985fa4(auStack_58,*param_1,&local_60,&local_68);
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009284bc(undefined4 *param_1)

{
  long lVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined1 auStack_58 [24];
  undefined1 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_68 = param_1[1];
  local_60 = param_1[2];
  uStack_64 = 0;
  FUN_00d05a8c(auStack_58,*param_1,&local_68);
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092852c(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_60 [24];
  undefined1 local_48;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1[1] == -1) {
    FUN_00cfdbdc(auStack_60,*param_1,*(undefined1 *)(param_1 + 2));
  }
  else {
    FUN_00cfdc1c(auStack_60,*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  }
  local_48 = 1;
  FUN_00ce20fc(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009285bc(undefined4 *param_1)

{
  long lVar1;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 auStack_60 [24];
  undefined1 local_48;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_70 = *(undefined8 *)(param_1 + 1);
  local_68 = param_1[3];
  FUN_00cfdc4c(auStack_60,*param_1,&local_70,*(undefined1 *)(param_1 + 4));
  local_48 = 1;
  FUN_00ce20fc(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00928634(undefined4 *param_1)

{
  long lVar1;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 auStack_60 [24];
  undefined1 local_48;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_70 = *(undefined8 *)(param_1 + 2);
  local_68 = param_1[4];
  FUN_00cfdc94(auStack_60,*param_1,param_1[1],&local_70,*(undefined1 *)(param_1 + 5));
  local_48 = 1;
  FUN_00ce20fc(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009286ac(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d0644c(auStack_50,*param_1,param_1[1]);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092870c(undefined4 *param_1)

{
  long lVar1;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 auStack_60 [24];
  undefined1 local_48;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_70 = *(undefined8 *)(param_1 + 2);
  local_68 = param_1[4];
  FUN_00984978(param_1[5],auStack_60,*param_1,param_1[1],&local_70);
  local_48 = 1;
  FUN_00ce20fc(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00928784(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_58 [24];
  undefined1 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d05dec(auStack_58,*param_1,param_1[1],param_1[2],*(char *)(param_1 + 3) != '\0');
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009287f4(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d00ad0(auStack_50,*param_1,param_1[1]);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00928854(undefined4 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_740;
  undefined4 local_738;
  undefined8 local_730;
  undefined4 local_728;
  undefined4 local_720 [2];
  undefined1 auStack_718 [24];
  undefined1 local_700;
  undefined4 local_360 [15];
  undefined4 local_324;
  undefined4 local_318;
  undefined4 local_2e0;
  undefined4 local_2c0;
  undefined4 local_2ac;
  undefined4 local_270;
  undefined4 local_264;
  undefined4 local_1f8;
  undefined4 local_1bc;
  undefined4 local_1b0;
  undefined4 local_90;
  undefined4 local_80;
  ulong local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d4d1ec(local_360);
  if (*(char *)((long)param_1 + 0x75) == '\0') {
    local_360[0] = param_1[10];
    local_2ac = param_1[0xb];
    local_50 = local_50 | 0x10100048001;
    local_1f8 = param_1[0xc];
    local_318 = param_1[0xd];
    local_264 = param_1[0xe];
    local_1b0 = param_1[0xf];
    local_324 = param_1[0x10];
    local_270 = param_1[0x11];
    local_1bc = param_1[0x12];
    local_2e0 = param_1[0x14];
    local_2c0 = param_1[0x15];
    local_90 = param_1[9];
    local_80 = param_1[0x13];
  }
  uVar1 = *param_1;
  FUN_00d9ff84(local_720,param_1[1]);
  local_730 = *(undefined8 *)(param_1 + 3);
  local_728 = param_1[5];
  local_740 = *(undefined8 *)(param_1 + 6);
  local_738 = param_1[8];
  FUN_00d0216c(auStack_718,uVar1,local_720[0],param_1[2],*(undefined1 *)(param_1 + 0x1d),
               *(undefined1 *)((long)param_1 + 0x79),&local_730,&local_740,local_360,
               *(char *)((long)param_1 + 0x75) != '\0',*(undefined1 *)((long)param_1 + 0x76),
               *(undefined1 *)(param_1 + 0x1e),*(undefined1 *)((long)param_1 + 0x77),0,0xff,0xff,
               param_1 + 0x16,param_1 + 0x18,param_1 + 0x1a,param_1[0x1c],0,0xffffffff,0);
  local_700 = 1;
  FUN_00ce20fc(auStack_718);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00928a10(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 local_920;
  undefined4 local_918;
  undefined8 local_910;
  undefined4 local_908;
  undefined4 local_900 [2];
  undefined1 auStack_8f8 [24];
  undefined1 local_8e0;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined4 local_390;
  undefined4 local_388 [2];
  undefined4 local_380;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_34c;
  undefined4 local_340;
  undefined4 local_324;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2cc;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_298;
  undefined4 local_28c;
  undefined4 local_270;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1e4;
  undefined4 local_1d8;
  undefined4 local_1bc;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_8c;
  undefined4 local_80;
  ulong local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  FUN_00d4d1ec(local_388);
  if (*(int *)((long)param_1 + 0x146) == 0) {
    local_388[0] = *(undefined4 *)((long)param_1 + 0x2e);
    local_2d4 = *(undefined4 *)((long)param_1 + 0x32);
    local_220 = *(undefined4 *)((long)param_1 + 0x36);
    local_2d8 = *(undefined4 *)((long)param_1 + 0x3e);
    local_224 = *(undefined4 *)((long)param_1 + 0x42);
    local_170 = *(undefined4 *)((long)param_1 + 0x46);
    local_340 = *(undefined4 *)((long)param_1 + 0x4a);
    local_28c = *(undefined4 *)((long)param_1 + 0x4e);
    local_1d8 = *(undefined4 *)((long)param_1 + 0x52);
    local_34c = *(undefined4 *)((long)param_1 + 0x62);
    local_298 = *(undefined4 *)((long)param_1 + 0x66);
    local_1e4 = *(undefined4 *)((long)param_1 + 0x6a);
    local_310 = *(undefined4 *)((long)param_1 + 0x6e);
    local_25c = *(undefined4 *)((long)param_1 + 0x72);
    local_1a8 = *(undefined4 *)((long)param_1 + 0x76);
    local_380 = *(undefined4 *)((long)param_1 + 0x7e);
    local_2cc = *(undefined4 *)((long)param_1 + 0x82);
    local_218 = *(undefined4 *)((long)param_1 + 0x86);
    local_2dc = *(undefined4 *)((long)param_1 + 0x8e);
    local_228 = *(undefined4 *)((long)param_1 + 0x92);
    local_174 = *(undefined4 *)((long)param_1 + 0x96);
    local_374 = *(undefined4 *)((long)param_1 + 0x9a);
    local_2c0 = *(undefined4 *)((long)param_1 + 0x9e);
    local_20c = *(undefined4 *)((long)param_1 + 0xa2);
    local_370 = *(undefined4 *)((long)param_1 + 0xa6);
    local_2bc = *(undefined4 *)((long)param_1 + 0xaa);
    local_208 = *(undefined4 *)((long)param_1 + 0xae);
    local_324 = *(undefined4 *)((long)param_1 + 0xb2);
    local_270 = *(undefined4 *)((long)param_1 + 0xb6);
    local_1bc = *(undefined4 *)((long)param_1 + 0xba);
    local_36c = *(undefined4 *)((long)param_1 + 0xbe);
    local_2b8 = *(undefined4 *)((long)param_1 + 0xc2);
    local_204 = *(undefined4 *)((long)param_1 + 0xc6);
    local_368 = *(undefined4 *)((long)param_1 + 0xca);
    local_2b4 = *(undefined4 *)((long)param_1 + 0xce);
    local_200 = *(undefined4 *)((long)param_1 + 0xd2);
    local_378 = *(undefined4 *)((long)param_1 + 0xd6);
    local_2c4 = *(undefined4 *)((long)param_1 + 0xda);
    local_210 = *(undefined4 *)((long)param_1 + 0xde);
    local_30c = *(undefined4 *)((long)param_1 + 0xe2);
    local_258 = *(undefined4 *)((long)param_1 + 0xe6);
    local_1a4 = *(undefined4 *)((long)param_1 + 0xea);
    local_364 = *(undefined4 *)((long)param_1 + 0xee);
    local_2b0 = *(undefined4 *)((long)param_1 + 0xf2);
    local_1fc = *(undefined4 *)((long)param_1 + 0xf6);
    local_360 = *(undefined4 *)((long)param_1 + 0xfa);
    local_2ac = *(undefined4 *)((long)param_1 + 0xfe);
    local_1f8 = *(undefined4 *)((long)param_1 + 0x102);
    local_35c = *(undefined4 *)((long)param_1 + 0x106);
    local_2a8 = *(undefined4 *)((long)param_1 + 0x10a);
    local_1f4 = *(undefined4 *)((long)param_1 + 0x10e);
    local_358 = *(undefined4 *)((long)param_1 + 0x112);
    local_2a4 = *(undefined4 *)((long)param_1 + 0x116);
    local_1f0 = *(undefined4 *)((long)param_1 + 0x11a);
    local_2e8 = *(undefined8 *)((long)param_1 + 0x126);
    local_2e0 = *(undefined4 *)((long)param_1 + 0x12e);
    local_314 = *(undefined4 *)((long)param_1 + 0x13a);
    local_2ec = *(undefined4 *)((long)param_1 + 0x142);
    local_308 = *(undefined4 *)((long)param_1 + 0x156);
    local_78 = local_78 | 0x1f81e2049ff5;
    local_b8 = *(undefined4 *)((long)param_1 + 0x2a);
    local_b4 = *(undefined4 *)((long)param_1 + 0x3a);
    local_a8 = *(undefined4 *)((long)param_1 + 0x152);
    local_a4 = *(undefined4 *)((long)param_1 + 0x15a);
    local_b0 = *(undefined4 *)((long)param_1 + 0x7a);
    local_ac = *(undefined4 *)((long)param_1 + 0x8a);
    local_a0 = *(undefined8 *)((long)param_1 + 0x11e);
    local_98 = *(undefined4 *)((long)param_1 + 0x13e);
    local_8c = *(undefined4 *)((long)param_1 + 0x132);
    local_80 = *(undefined4 *)((long)param_1 + 0x136);
  }
  FUN_009bbfb0();
  iVar2 = param_1[2];
  iVar4 = FUN_00cedce4();
  if (iVar2 == iVar4) {
    FUN_00ceca80(param_1[2],param_1[3]);
  }
  local_390 = *(undefined4 *)((long)param_1 + 0x24a);
  local_398 = *(undefined8 *)((long)param_1 + 0x242);
  uStack_3b8 = *(undefined8 *)((long)param_1 + 0x1e2);
  local_3c0 = *(undefined8 *)((long)param_1 + 0x1da);
  uStack_3a8 = *(undefined8 *)((long)param_1 + 0x1f2);
  local_3b0 = *(undefined8 *)((long)param_1 + 0x1ea);
  local_3a0 = *(undefined8 *)((long)param_1 + 0x1fa);
  uVar1 = *param_1;
  FUN_00d9ff84(local_900,param_1[1]);
  local_910 = *(undefined8 *)((long)param_1 + 0x12);
  local_908 = *(undefined4 *)((long)param_1 + 0x1a);
  local_920 = *(undefined8 *)((long)param_1 + 0x1e);
  local_918 = *(undefined4 *)((long)param_1 + 0x26);
  FUN_00d03320(*(undefined4 *)((long)param_1 + 0x14e),auStack_8f8,uVar1,local_900[0],param_1[2],
               *(undefined1 *)((long)param_1 + 0x2e9),param_1[3],*(undefined1 *)(param_1 + 4),
               *(undefined1 *)((long)param_1 + 0x11),&local_910,&local_920,local_388,
               *(int *)((long)param_1 + 0x146) != 0,0,*(undefined4 *)((long)param_1 + 0x14a),
               (long)param_1 + 0x162,(long)param_1 + 0x18a,(long)param_1 + 0x1b2,&local_3c0,
               (long)param_1 + 0x202,*(undefined4 *)((long)param_1 + 0x15e),(long)param_1 + 0x22a,
               (long)param_1 + 0x236,&local_398,(long)param_1 + 0x24e,
               *(undefined4 *)((long)param_1 + 0x251),*(undefined4 *)((long)param_1 + 0x2c5),
               *(undefined4 *)((long)param_1 + 0x2c1),0,0xff,0,
               *(undefined4 *)((long)param_1 + 0x255),(long)param_1 + 0x259,(long)param_1 + 0x279,
               (long)param_1 + 0x299,*(undefined4 *)((long)param_1 + 0x2b9),
               *(undefined4 *)((long)param_1 + 0x2bd),(long)param_1 + 0x2c9,(long)param_1 + 0x2d1,
               (long)param_1 + 0x2d9,*(undefined4 *)((long)param_1 + 0x2e5),
               *(undefined4 *)((long)param_1 + 0x2e1),FUN_009bd94c,0xffffffff);
  local_8e0 = 1;
  FUN_00ce20fc(auStack_8f8);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00928f20(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 auStack_148 [128];
  uint local_c8;
  undefined4 local_c0;
  undefined1 auStack_bc [132];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  memset(auStack_148,0,0x84);
  if (param_1 != 0) {
    FUN_00e6a50c(auStack_148,0x80,param_1);
  }
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_c8 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_c0 = 0x5008600;
  memcpy(auStack_bc,auStack_148,0x84);
  FUN_00ce271c();
  uVar2 = FUN_0094271c(&local_c0,0x88);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00928fd0(void)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  local_40[0] = 0;
  local_40[1] = 0;
  local_30 = (void *)0x0;
  FUN_00e81200(local_40);
  uVar4 = FUN_00ceab64();
  if ((uVar4 & 1) != 0) {
    pbVar5 = (byte *)FUN_00ceabc0();
    uVar1 = (uint)(*pbVar5 >> 1);
    if ((*pbVar5 & 1) != 0) {
      uVar1 = *(uint *)(pbVar5 + 8);
    }
    if (uVar1 != 0) {
      uVar6 = FUN_00ceabc0();
      FUN_008fce60(local_40,uVar6);
    }
  }
  pvVar2 = (void *)((ulong)local_40 | 1);
  if ((local_40[0] & 1) != 0) {
    pvVar2 = local_30;
  }
  FUN_00ce2848(pvVar2);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

