// functions/00929 — 27 functions
#include "libGameKindred.h"




undefined8 FUN_00929084(void)

{
  return 1;
}




undefined8 FUN_0092908c(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d01f00(auStack_48,*param_1);
  local_30 = 1;
  FUN_00ce20fc(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009290ec(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfe30c(auStack_48,*param_1);
  local_30 = 1;
  FUN_00ce20fc(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092914c(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfe470(auStack_50,*param_1,param_1[1]);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009291ac(undefined4 *param_1)

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
  FUN_00cfe614(auStack_58,*param_1,&local_68);
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00929220(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfe6f0(auStack_48,*param_1);
  local_30 = 1;
  FUN_00ce20fc(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00929280(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d075fc(param_1[1],auStack_50,*param_1);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009292e4(undefined4 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_108 [2];
  byte local_100 [8];
  undefined4 local_f8;
  void *local_f0;
  undefined4 local_74;
  undefined4 local_70;
  ulong local_44;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_100,param_1 + 8);
  FUN_00cead10(local_100);
  if ((local_100[0] & 1) != 0) {
    operator_delete(local_f0);
  }
  FUN_00ceadb0(param_1[0x18]);
  FUN_00cead30();
  uVar2 = FUN_00ceab64();
  if ((uVar2 & 1) == 0) {
    FUN_00ceb838(local_100);
    local_f8 = *param_1;
    local_44 = local_44 & 0xfff0000000000000 |
               local_44 & 0xffffffffffff | (ulong)(*(byte *)(param_1 + 0x19) & 0xf) << 0x30;
    local_74 = param_1[2];
    FUN_00d9ff84(local_108,param_1[3]);
    local_70 = local_108[0];
    local_44 = local_44 | 0x2000000ffffffff;
    FUN_00cebcf8(local_100);
    FUN_00ceb8d8(local_100);
  }
  uVar3 = FUN_009188a4();
  FUN_0091a3dc(uVar3,param_1[1] != 0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009293e4(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_110;
  void *local_108;
  undefined1 auStack_100 [8];
  undefined4 local_f8;
  undefined1 auStack_f0 [184];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab64();
  if ((uVar2 & 1) == 0) {
    FUN_00e70510(&local_110);
    FUN_00e70668(&local_110,param_1);
    uVar2 = FUN_00ced200(*(undefined4 *)(param_1 + 0x44));
    if ((uVar2 & 1) == 0) {
      FUN_00ceb838(auStack_100);
      local_f8 = *(undefined4 *)(param_1 + 0x44);
      FUN_00910394(auStack_f0,&local_110);
      FUN_00cebcf8(auStack_100);
      FUN_00ceb8d8(auStack_100);
    }
    else {
      FUN_00cebf7c(*(undefined4 *)(param_1 + 0x44),&local_110);
    }
    if (local_108 != (void *)0x0) {
      operator_delete__(local_108);
      local_110 = 0;
      local_108 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009294ac(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_d0 [24];
  undefined1 local_b8;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d06b64(auStack_d0,*param_1,param_1 + 1,*(undefined1 *)(param_1 + 0x18),
               *(undefined1 *)((long)param_1 + 0x62),param_1 + 0x15,
               *(undefined1 *)((long)param_1 + 0x61));
  local_b8 = 1;
  FUN_00ce20fc(auStack_d0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00929520(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d06cc4(auStack_50,*param_1,*(undefined1 *)(param_1 + 1));
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00929584(undefined1 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00985724(*(undefined4 *)(param_1 + 2),auStack_50,*param_1,param_1[6],param_1[1],param_1[7]);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009295f4(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_58 [24];
  undefined1 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00985e08(param_1[2],param_1[3],auStack_58,*param_1,param_1[1],*(undefined1 *)(param_1 + 4),
               *(undefined1 *)((long)param_1 + 0x11),*(undefined1 *)((long)param_1 + 0x12),
               *(char *)((long)param_1 + 0x13) == '\x01',*(char *)(param_1 + 5) == '\x01',
               *(char *)((long)param_1 + 0x15) == '\x01');
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092968c(char *param_1)

{
  short sVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  size_t sVar5;
  undefined8 uVar6;
  ulong local_40;
  ulong local_38;
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00e80f58();
  if ((uVar4 & 1) != 0) {
    local_40 = 0;
    local_38 = 0;
    local_30 = (void *)0x0;
    FUN_00e81200(&local_40);
    sVar5 = strlen(param_1);
    uVar4 = local_40 >> 1 & 0x7f;
    if ((local_40 & 1) != 0) {
      uVar4 = local_38;
    }
    if ((sVar5 == uVar4) &&
       (iVar3 = FUN_0090d610(&local_40,0,0xffffffffffffffff,param_1,sVar5), iVar3 == 0)) {
      sVar1 = *(short *)(param_1 + 0x40);
      uVar6 = FUN_009188a4();
      FUN_0091a208(uVar6,sVar1 == 0);
    }
    if ((local_40 & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00929754(void)

{
  return 1;
}




undefined8 FUN_0092975c(char *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009188a4();
  FUN_0091a468(uVar1,*param_1 != '\0');
  return 1;
}




undefined8 FUN_00929790(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_009860c0(auStack_48,*param_1);
  local_30 = 1;
  FUN_00ce20fc(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009297f0(undefined4 *param_1)

{
  long lVar1;
  undefined4 local_60 [2];
  undefined4 local_58 [2];
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_58[0] = *param_1;
  local_60[0] = param_1[1];
  FUN_00985a24(auStack_50,local_58,local_60);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00929864(undefined4 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d9e390(*param_1);
  if (lVar1 != 0) {
    FUN_009bbfb0();
    uVar2 = FUN_009bd5c8();
    FUN_009b8274((undefined4)DAT_03218f30,DAT_03218f30._4_4_,DAT_03218f38,uVar2,lVar1,0);
    FUN_009bbfb0();
    FUN_009bd5c8();
    FUN_009b850c();
    FUN_00ceab88(*(undefined4 *)(lVar1 + 0x260));
  }
  return lVar1 != 0;
}




undefined8 FUN_009298c8(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint local_168 [4];
  void *local_158;
  undefined4 local_150 [2];
  byte local_148 [16];
  void *local_138;
  undefined8 local_130;
  void *local_128;
  undefined8 local_120;
  void *local_118;
  undefined8 local_110;
  void *local_108;
  undefined4 local_100 [2];
  undefined4 local_f8;
  void *local_f0 [6];
  undefined1 auStack_c0 [76];
  undefined4 local_74;
  uint local_70;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  ulong local_44;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  FUN_00e70510(&local_110);
  FUN_00e70668(&local_110,param_1);
  FUN_00e70510(&local_120);
  FUN_00e70668(&local_120,param_1 + 0x98);
  FUN_00e70510(&local_130);
  FUN_00e70668(&local_130,param_1 + 0x90);
  FUN_008fa54c(local_148,param_1 + 0x40);
  uVar3 = FUN_00ced200(*(undefined4 *)(param_1 + 0xa0));
  if ((uVar3 & 1) == 0) {
    FUN_00ceb838(local_100);
    local_f8 = *(undefined4 *)(param_1 + 0xa0);
    local_44 = local_44 & 0xfff0000000000000 |
               local_44 & 0xffffffffffff | (ulong)(*(byte *)(param_1 + 0xd2) & 0xf) << 0x30;
    FUN_00910394(local_f0,&local_110);
    FUN_008fa54c(local_168,param_1 + 0x80);
    FUN_008fce60(auStack_c0,local_168);
    if ((local_168[0] & 1) != 0) {
      operator_delete(local_158);
    }
    local_74 = *(undefined4 *)(param_1 + 0xa4);
    FUN_00d9ff84(local_168,*(undefined4 *)(param_1 + 0xa8));
    local_70 = local_168[0];
    local_44 = local_44 & 0xe780000000000000 |
               local_44 & 0x1f000000000000 |
               (ulong)*(byte *)(param_1 + 0xd0) << 0x20 | (ulong)*(byte *)(param_1 + 0xd1) << 0x28 |
               (ulong)(*(byte *)(param_1 + 0xd3) & 1) << 0x35 |
               (ulong)(*(byte *)(param_1 + 0xd4) & 1) << 0x36 |
               (ulong)*(byte *)(param_1 + 0xce) << 0x10 | (ulong)*(byte *)(param_1 + 0xcf) << 0x18 |
               (ulong)*(ushort *)(param_1 + 0xcc) | (ulong)(*(byte *)(param_1 + 0xd6) & 1) << 0x3b |
               (ulong)(*(byte *)(param_1 + 0xd7) & 1) << 0x3c;
    local_64 = *(undefined8 *)(param_1 + 0xac);
    local_5c = *(undefined8 *)(param_1 + 0xb4);
    local_54 = *(undefined4 *)(param_1 + 0xbc);
    local_48 = *(undefined4 *)(param_1 + 0xc0);
    local_4c = *(undefined4 *)(param_1 + 0xc4);
    local_50 = *(undefined4 *)(param_1 + 200);
    FUN_00cebcf8(local_100);
    FUN_00ceb8d8(local_100);
  }
  else {
    FUN_00cebf7c(*(undefined4 *)(param_1 + 0xa0),&local_110);
    FUN_00cec2e4(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
    uVar1 = *(undefined4 *)(param_1 + 0xa0);
    FUN_00d9ff84(local_150,*(undefined4 *)(param_1 + 0xa8));
    FUN_00cec340(uVar1,local_150[0]);
    FUN_00cec198(*(undefined4 *)(param_1 + 0xa0),*(undefined2 *)(param_1 + 0xcc));
    FUN_00ceca80(*(undefined4 *)(param_1 + 0xa0),*(undefined1 *)(param_1 + 0xd2));
    uVar1 = *(undefined4 *)(param_1 + 0xa0);
    FUN_008fa54c(local_100,param_1 + 0x80);
    FUN_00cecaf4(uVar1,local_100);
    if (((byte)local_100[0] & 1) != 0) {
      operator_delete(local_f0[0]);
    }
    FUN_00cec128(*(undefined4 *)(param_1 + 0xa0),*(char *)(param_1 + 0xd3) != '\0');
    FUN_00cec260(*(undefined4 *)(param_1 + 0xa0),*(char *)(param_1 + 0xd4) != '\0',
                 *(char *)(param_1 + 0xd5) != '\0');
    FUN_00cec1fc(*(undefined4 *)(param_1 + 0xa0),*(undefined1 *)(param_1 + 0xce));
    FUN_00cee198(*(undefined4 *)(param_1 + 0xa0),*(undefined1 *)(param_1 + 0xcf));
    FUN_00cedf84(*(undefined4 *)(param_1 + 0xa0),*(char *)(param_1 + 0xd6) != '\0');
    FUN_00cee1fc(*(undefined4 *)(param_1 + 0xa0),*(undefined1 *)(param_1 + 0xd0));
    FUN_00cee260(*(undefined4 *)(param_1 + 0xa0),*(undefined1 *)(param_1 + 0xd1));
    FUN_00cec5d0(*(undefined4 *)(param_1 + 0xa0),*(char *)(param_1 + 0xd7) != '\0');
    local_100[0] = *(undefined4 *)(param_1 + 0xac);
    FUN_00cec640(*(undefined4 *)(param_1 + 0xa0),0,local_100);
    local_100[0] = *(undefined4 *)(param_1 + 0xb0);
    FUN_00cec640(*(undefined4 *)(param_1 + 0xa0),1,local_100);
    local_100[0] = *(undefined4 *)(param_1 + 0xb4);
    FUN_00cec640(*(undefined4 *)(param_1 + 0xa0),2,local_100);
    local_100[0] = *(undefined4 *)(param_1 + 0xb8);
    FUN_00cec640(*(undefined4 *)(param_1 + 0xa0),3,local_100);
    local_100[0] = *(undefined4 *)(param_1 + 0xbc);
    FUN_00cec640(*(undefined4 *)(param_1 + 0xa0),4,local_100);
    local_100[0] = *(undefined4 *)(param_1 + 0xc0);
    FUN_00cec640(*(undefined4 *)(param_1 + 0xa0),7,local_100);
    local_100[0] = *(undefined4 *)(param_1 + 0xc4);
    FUN_00cec640(*(undefined4 *)(param_1 + 0xa0),6,local_100);
    local_100[0] = *(undefined4 *)(param_1 + 200);
    FUN_00cec640(*(undefined4 *)(param_1 + 0xa0),5,local_100);
  }
  FUN_00cebfe4(*(undefined4 *)(param_1 + 0xa0),&local_120);
  FUN_00cec04c(*(undefined4 *)(param_1 + 0xa0),&local_130);
  FUN_00cec0b4(*(undefined4 *)(param_1 + 0xa0),local_148);
  if ((local_148[0] & 1) != 0) {
    operator_delete(local_138);
  }
  if (local_128 != (void *)0x0) {
    operator_delete__(local_128);
    local_130 = 0;
    local_128 = (void *)0x0;
  }
  if (local_118 != (void *)0x0) {
    operator_delete__(local_118);
    local_120 = 0;
    local_118 = (void *)0x0;
  }
  if (local_108 != (void *)0x0) {
    operator_delete__(local_108);
    local_110 = 0;
    local_108 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00929cb0(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d03ef8(auStack_50,*param_1,param_1[1]);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00929d10(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_60 [24];
  undefined1 local_48;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d03fd0(auStack_60,*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
  local_48 = 1;
  FUN_00ce20fc(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00929d78(undefined4 *param_1)

{
  long lVar1;
  undefined4 local_90 [2];
  undefined1 auStack_88 [24];
  undefined1 local_70;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_90[0] = param_1[1];
  FUN_00d02a78(param_1[2],auStack_88,*(undefined1 *)((long)param_1 + 0xe),
               *(undefined1 *)((long)param_1 + 0xf),*(undefined1 *)(param_1 + 4),
               *(undefined2 *)(param_1 + 3),local_90,*param_1);
  local_70 = 1;
  FUN_00ce20fc(auStack_88);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00929df4(undefined4 *param_1)

{
  long lVar1;
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined4 local_90;
  undefined1 auStack_88 [24];
  undefined1 local_70;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_98 = *(undefined8 *)(param_1 + 2);
  local_90 = param_1[4];
  local_a0[0] = param_1[1];
  FUN_00d02ac0(param_1[5],auStack_88,*(undefined1 *)((long)param_1 + 0x1a),
               *(undefined1 *)((long)param_1 + 0x1b),&local_98,*(undefined2 *)(param_1 + 6),local_a0
               ,*param_1);
  local_70 = 1;
  FUN_00ce20fc(auStack_88);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00929e80(undefined4 *param_1)

{
  long lVar1;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined1 auStack_88 [24];
  undefined1 local_70;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_90 = *(undefined8 *)(param_1 + 7);
  local_a0 = *(undefined8 *)(param_1 + 2);
  local_98 = param_1[4];
  local_a8 = *(undefined8 *)(param_1 + 5);
  local_b0[0] = param_1[1];
  FUN_00d02b18(param_1[9],auStack_88,*(undefined1 *)((long)param_1 + 0x2a),
               *(undefined1 *)((long)param_1 + 0x2b),&local_90,*(undefined2 *)(param_1 + 10),
               &local_a0,&local_a8,local_b0,*param_1);
  local_70 = 1;
  FUN_00ce20fc(auStack_88);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00929f2c(undefined4 *param_1)

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
  FUN_00d01228(auStack_58,*param_1,&local_68,*(char *)(param_1 + 4) != '\0');
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00929fac(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_60 [24];
  undefined1 local_48;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d041e4(param_1[2],auStack_60,*param_1,*(undefined1 *)(param_1 + 3),
               *(undefined1 *)((long)param_1 + 0xd),*(char *)((long)param_1 + 0xe) != '\0',
               param_1[1]);
  local_48 = 1;
  FUN_00ce20fc(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

