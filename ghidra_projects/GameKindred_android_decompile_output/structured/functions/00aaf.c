// functions/00aaf — 24 functions
#include "libGameKindred.h"




void FUN_00aaf098(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  (**(code **)(*param_3 + 0x48))();
  FUN_00f082c0(param_2,param_3 + 0x34);
  FUN_00f07940(0,0,param_3 + 0x34,4,param_3,4);
  FUN_00f07b18(0,param_3 + 0x52,3,param_3,3);
  FUN_00f07940(0,0,param_3 + 0xdf,0,param_3 + 0xb9,3);
  plVar1 = param_3 + 0x123;
  FUN_00f07940(0,0x41c80000,plVar1,0,param_3 + 0xdf,3);
  plVar2 = param_3 + 0x3a4;
  FUN_00f07940(0,0x41c80000,plVar2,0,plVar1,3);
  plVar3 = param_3 + 0x625;
  FUN_00f07940(0,0x41c80000,plVar3,0,plVar2,3);
  plVar4 = param_3 + 0x8a6;
  FUN_00f07940(0,0x41c80000,plVar4,0,plVar3,3);
  FUN_00f07940(0,0x41c80000,param_3 + 0xb09,0,plVar4,3);
  FUN_00f07940(0,0,param_3 + 0xb2f,0,param_3 + 0xb09,3);
  FUN_00f07940(0xc1700000,0,param_3 + 0x105,5,plVar1,7);
  FUN_00f07940(0xc1700000,0,param_3 + 0x386,5,plVar2,7);
  FUN_00f07940(0xc1700000,0,param_3 + 0x607,5,plVar3,7);
  FUN_00f07940(0xc1700000,0,param_3 + 0x888,5,plVar4,7);
  FUN_00f13238(param_3 + 0x8e);
  FUN_00f07940(0x41200000,0xc1200000,param_3 + 0x8e,3,param_3,3);
  return;
}




void FUN_00aaf2b4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6ce7c(param_2[3],0);
    FUN_00f0d75c(param_1 + 0x5c8,uVar2);
    uVar2 = FUN_00e6ce7c(param_2[9],0);
    FUN_00f0d75c(param_1 + 0x6f8,uVar2);
    puVar3 = (undefined8 *)FUN_00cc7868(*param_2);
    FUN_00aaf494(param_1,*puVar3);
    if (*(int *)(param_2 + 0xb) == 2) {
      pcVar4 = "MENU_HERO_ATTRIBUTES_LABEL_DIFFICULTY_HARD";
    }
    else if (*(int *)(param_2 + 0xb) == 1) {
      pcVar4 = "MENU_HERO_ATTRIBUTES_LABEL_DIFFICULTY_MEDIUM";
    }
    else {
      pcVar4 = "MENU_HERO_ATTRIBUTES_LABEL_DIFFICULTY_EASY";
    }
    uVar2 = FUN_00e6ce7c(pcVar4,0);
    FUN_00f0d75c(param_1 + 0x5978,uVar2);
    local_50 = (undefined1)*(undefined4 *)((long)param_2 + 0x6c);
    local_4f = (undefined1)*(undefined4 *)(param_2 + 0xe);
    local_4e = (undefined1)*(undefined4 *)((long)param_2 + 0x74);
    local_4d = (undefined1)*(undefined4 *)(param_2 + 0xf);
    local_58 = (undefined1)*(undefined4 *)((long)param_2 + 0x7c);
    local_57 = (undefined1)*(undefined4 *)(param_2 + 0x10);
    local_56 = (undefined1)*(undefined4 *)((long)param_2 + 0x84);
    local_55 = (undefined1)*(undefined4 *)(param_2 + 0x11);
    FUN_00b0a264(0x3f000000,param_1 + 0x918,*(undefined4 *)((long)param_2 + 0x5c),&local_50,
                 &local_58,1,0xffffffff,1);
    FUN_00b0a264(0x3f000000,param_1 + 0x1d20,*(undefined4 *)(param_2 + 0xc),&local_50,&local_58,1,
                 0xffffffff,1);
    FUN_00b0a264(0x3f000000,param_1 + 0x3128,*(undefined4 *)(param_2 + 0xd),&local_50,&local_58,1,
                 0xffffffff,1);
    FUN_00b0a264(0x3f000000,param_1 + 0x4530,*(undefined4 *)((long)param_2 + 100),&local_50,
                 &local_58,1,0xffffffff,1);
    FUN_00aaf098(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aaf494(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [64];
  undefined1 auStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00cc7618(param_4);
  FUN_00e6a8a8(auStack_78,"build://Splash_%s.png",*(undefined8 *)(lVar2 + 0x28));
  FUN_008fff20(auStack_b8,"loading_vert_%s_5v5",*(undefined8 *)(lVar2 + 0x28));
  lVar2 = param_3 + 0x1a0;
  FUN_00f0e628(lVar2);
  FUN_00f0e548(lVar2,auStack_78,auStack_b8);
  local_c0 = FUN_00f0eaf4(lVar2);
  uStack_bc = param_2;
  FUN_00f13f18(lVar2,&local_c0);
  FUN_00aaf098(param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aaf550(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d27e0;
  FUN_00f13d08(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00aaf5d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d27e0;
  FUN_00f13d08(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00aaf668(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}




void FUN_00aaf670(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d2928;
  FUN_00bd1b44(param_1 + 0x275);
  param_1[599] = &PTR_FUN_028266f0;
  param_1[0x26e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x271);
  FUN_00f13d08(param_1 + 599);
  param_1[0x239] = &PTR_FUN_028266f0;
  param_1[0x250] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x253);
  FUN_00f13d08(param_1 + 0x239);
  FUN_00f0d3a4(param_1 + 0x213);
  param_1[0x1e8] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x1ff);
  FUN_00f13d08(param_1 + 0x1e8);
  FUN_00f0d3a4(param_1 + 0x1c2);
  param_1[0x1a4] = &PTR_FUN_028266f0;
  param_1[0x1bb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1be);
  FUN_00f13d08(param_1 + 0x1a4);
  FUN_00f0d3a4(param_1 + 0x17e);
  param_1[0x160] = &PTR_FUN_028266f0;
  param_1[0x177] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x17a);
  FUN_00f13d08(param_1 + 0x160);
  param_1[0x142] = &PTR_FUN_028266f0;
  param_1[0x159] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x15c);
  FUN_00f13d08(param_1 + 0x142);
  FUN_00f13d08(param_1 + 0x127);
  param_1[0x109] = &PTR_FUN_028266f0;
  param_1[0x120] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x123);
  FUN_00f13d08(param_1 + 0x109);
  param_1[0xeb] = &PTR_FUN_028266f0;
  param_1[0x102] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x105);
  FUN_00f13d08(param_1 + 0xeb);
  param_1[0xcd] = &PTR_FUN_028266f0;
  param_1[0xe4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe7);
  FUN_00f13d08(param_1 + 0xcd);
  param_1[0xaf] = &PTR_FUN_028266f0;
  param_1[0xc6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc9);
  FUN_00f13d08(param_1 + 0xaf);
  param_1[0x91] = &PTR_FUN_028266f0;
  param_1[0xa8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xab);
  FUN_00f13d08(param_1 + 0x91);
  FUN_00f13d08(param_1 + 0x76);
  FUN_00f13d08(param_1 + 0x5f);
  FUN_00f13d08(param_1 + 0x48);
  FUN_00ecf74c(param_1);
  return;
}




void FUN_00aaf84c(void *param_1)

{
  FUN_00aaf670();
  operator_delete(param_1);
  return;
}




void FUN_00aaf870(void)

{
  return;
}




void FUN_00aaf874(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d2a80;
  param_1[0x17] = &PTR_FUN_027d2be0;
  FUN_00f0ae84(param_1 + 0x72);
  param_1[0x54] = &PTR_FUN_028266f0;
  param_1[0x6b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6e);
  FUN_00f13d08(param_1 + 0x54);
  FUN_00f13d08(param_1 + 0x39);
  param_1[0x1b] = &PTR_FUN_028266f0;
  param_1[0x32] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x35);
  FUN_00f13d08(param_1 + 0x1b);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00aaf90c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d2a80;
  param_1[0x17] = &PTR_FUN_027d2be0;
  FUN_00f0ae84(param_1 + 0x72);
  param_1[0x54] = &PTR_FUN_028266f0;
  param_1[0x6b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6e);
  FUN_00f13d08(param_1 + 0x54);
  FUN_00f13d08(param_1 + 0x39);
  param_1[0x1b] = &PTR_FUN_028266f0;
  param_1[0x32] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x35);
  FUN_00f13d08(param_1 + 0x1b);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00aaf9ac(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_027d2a80;
  *param_1 = &PTR_FUN_027d2be0;
  FUN_00f0ae84(param_1 + 0x5b);
  param_1[0x3d] = &PTR_FUN_028266f0;
  param_1[0x54] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x57);
  FUN_00f13d08(param_1 + 0x3d);
  FUN_00f13d08(param_1 + 0x22);
  param_1[4] = &PTR_FUN_028266f0;
  param_1[0x1b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1e);
  FUN_00f13d08(param_1 + 4);
  FUN_00f13d08(param_1 + -0x17);
  return;
}




void FUN_00aafa4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_027d2a80;
  *param_1 = &PTR_FUN_027d2be0;
  FUN_00f0ae84(param_1 + 0x5b);
  param_1[0x3d] = &PTR_FUN_028266f0;
  param_1[0x54] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x57);
  FUN_00f13d08(param_1 + 0x3d);
  FUN_00f13d08(param_1 + 0x22);
  param_1[4] = &PTR_FUN_028266f0;
  param_1[0x1b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1e);
  FUN_00f13d08(param_1 + 4);
  FUN_00f13d08(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00aafaf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d2c28;
  FUN_00f13d08(param_1 + 0x7b);
  FUN_00f0d3a4(param_1 + 0x55);
  param_1[0x37] = &PTR_FUN_028266f0;
  param_1[0x4e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x51);
  FUN_00f13d08(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_028266f0;
  param_1[0x30] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x33);
  FUN_00f13d08(param_1 + 0x19);
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00aafb94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d2c28;
  FUN_00f13d08(param_1 + 0x7b);
  FUN_00f0d3a4(param_1 + 0x55);
  param_1[0x37] = &PTR_FUN_028266f0;
  param_1[0x4e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x51);
  FUN_00f13d08(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_028266f0;
  param_1[0x30] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x33);
  FUN_00f13d08(param_1 + 0x19);
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00aafc3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d2d70;
  param_1[0x17] = &PTR_FUN_027d2ed0;
  FUN_00f0d3a4(param_1 + 0xf8);
  FUN_00f0d3a4(param_1 + 0xd2);
  param_1[0xa7] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0xbe);
  FUN_00f13d08(param_1 + 0xa7);
  param_1[0x7b] = &PTR_FUN_027d3cc8;
  param_1[0x92] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0xa4] != (void *)0x0) {
    operator_delete__((void *)param_1[0xa4]);
    param_1[0xa4] = 0;
    param_1[0xa3] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x7b);
  param_1[0x5a] = &PTR_FUN_028266f0;
  param_1[0x71] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x74);
  FUN_00f13d08(param_1 + 0x5a);
  param_1[0x3c] = &PTR_FUN_028266f0;
  param_1[0x53] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x56);
  FUN_00f13d08(param_1 + 0x3c);
  param_1[0x1e] = &PTR_FUN_028266f0;
  param_1[0x35] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x38);
  FUN_00f13d08(param_1 + 0x1e);
  *param_1 = &PTR_FUN_028266f0;
  param_1[0x17] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00aafd5c(void *param_1)

{
  FUN_00aafc3c();
  operator_delete(param_1);
  return;
}




void FUN_00aafd80(long param_1)

{
  FUN_00aafc3c(param_1 + -0xb8);
  return;
}




void FUN_00aafd88(long param_1)

{
  FUN_00aafc3c((void *)(param_1 + -0xb8));
  operator_delete((void *)(param_1 + -0xb8));
  return;
}




void FUN_00aafdb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d2f18;
  param_1[0xb9] = &PTR_FUN_028266f0;
  param_1[0xd0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd3);
  FUN_00f13d08(param_1 + 0xb9);
  FUN_00f0d3a4(param_1 + 0x93);
  param_1[0x68] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x7f);
  FUN_00f13d08(param_1 + 0x68);
  FUN_00f0d3a4(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00aafe60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d2f18;
  param_1[0xb9] = &PTR_FUN_028266f0;
  param_1[0xd0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd3);
  FUN_00f13d08(param_1 + 0xb9);
  FUN_00f0d3a4(param_1 + 0x93);
  param_1[0x68] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x7f);
  FUN_00f13d08(param_1 + 0x68);
  FUN_00f0d3a4(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00aaff18(void)

{
  return 200;
}




void FUN_00aaff20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d3068;
  param_1[200] = &PTR_FUN_028266f0;
  param_1[0xdf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe2);
  FUN_00f13d08(param_1 + 200);
  param_1[0xaa] = &PTR_FUN_028266f0;
  param_1[0xc1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc4);
  FUN_00f13d08(param_1 + 0xaa);
  FUN_00f0d3a4(param_1 + 0x84);
  param_1[0x59] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x70);
  FUN_00f13d08(param_1 + 0x59);
  FUN_00f01868(param_1 + 0x48);
  FUN_00ecf74c(param_1);
  return;
}




void FUN_00aaffd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d3068;
  param_1[200] = &PTR_FUN_028266f0;
  param_1[0xdf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe2);
  FUN_00f13d08(param_1 + 200);
  param_1[0xaa] = &PTR_FUN_028266f0;
  param_1[0xc1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc4);
  FUN_00f13d08(param_1 + 0xaa);
  FUN_00f0d3a4(param_1 + 0x84);
  param_1[0x59] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x70);
  FUN_00f13d08(param_1 + 0x59);
  FUN_00f01868(param_1 + 0x48);
  FUN_00ecf74c(param_1);
  operator_delete(param_1);
  return;
}

