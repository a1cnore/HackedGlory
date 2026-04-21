// functions/00be7 — 10 functions
#include "libGameKindred.h"




long * FUN_00be7008(long param_1,undefined8 *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s1;
  byte bVar3;
  int iVar4;
  void *__s2;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    *param_2 = plVar5;
  }
  else {
    uVar2 = *(ulong *)(param_3 + 8);
    __s1 = *(byte **)(param_3 + 0x10);
    plVar5 = (long *)(param_1 + 8);
    if ((*param_3 & 1) == 0) {
      __s1 = param_3 + 1;
      uVar2 = (ulong)(*param_3 >> 1);
    }
    do {
      while( true ) {
        plVar7 = plVar6;
        bVar3 = *(byte *)(plVar7 + 4);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = plVar7[5];
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        if (__n == 0) break;
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) break;
        if (-1 < iVar4) {
LAB_00be706c:
          iVar4 = memcmp(__s2,__s1,__n);
          if (iVar4 == 0) goto LAB_00be7088;
          if (iVar4 < 0) goto LAB_00be7090;
          goto LAB_00be7108;
        }
LAB_00be70f4:
        plVar5 = plVar7;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          *param_2 = plVar7;
          return plVar7;
        }
      }
      if (uVar2 < uVar1) goto LAB_00be70f4;
      if (__n != 0) {
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        goto LAB_00be706c;
      }
LAB_00be7088:
      if (uVar2 <= uVar1) break;
LAB_00be7090:
      plVar5 = plVar7 + 1;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_00be7108:
    *param_2 = plVar7;
  }
  return plVar5;
}




void FUN_00be7134(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_00be7188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  byte local_70 [16];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_70);
  lVar2 = FUN_0090e774(param_1,local_70);
  uStack_50 = 0;
  pcStack_40 = thunk_FUN_00be6250;
  local_58 = param_3;
  local_48 = param_3;
  FUN_009e4694(lVar2 + 0x10,&local_58);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be721c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  byte local_70 [16];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_70);
  lVar2 = FUN_0090e774(param_1,local_70);
  uStack_50 = 0;
  pcStack_40 = thunk_FUN_00be63ec;
  local_58 = param_3;
  local_48 = param_3;
  FUN_009e4694(lVar2 + 0x10,&local_58);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be72b0(long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_008fa54c(local_60,param_4);
  FUN_008fce60(param_2 + 8,local_60);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  *(int *)(param_2 + 0x68) = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 4);
  plVar6 = (long *)(param_5 + 8);
  plVar5 = (long *)*plVar6;
  if (plVar5 != (long *)0x0) {
    uVar1 = *(uint *)(param_3 + 0x58);
    plVar4 = plVar6;
    do {
      bVar3 = *(uint *)((long)plVar5 + 0x1c) < uVar1;
      if (!bVar3) {
        plVar4 = plVar5;
      }
      plVar5 = (long *)plVar5[bVar3];
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar6) && (*(uint *)((long)plVar4 + 0x1c) <= uVar1)) {
      *(long *)(param_2 + 0xa0) = plVar4[4];
    }
  }
  FUN_00c88cb8(param_2,param_3);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long * FUN_00be7398(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar2 = operator_new(0x118);
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[1] = 0;
  *(undefined8 *)((long)plVar2 + 0x4c) = 0;
  *(undefined8 *)((long)plVar2 + 0x44) = 0;
  *(undefined8 *)((long)plVar2 + 0x3c) = 0;
  *(undefined8 *)((long)plVar2 + 0x34) = 0;
  *(undefined8 *)((long)plVar2 + 0x2c) = 0;
  *(undefined8 *)((long)plVar2 + 0x24) = 0;
  *(undefined4 *)((long)plVar2 + 0x54) = 0;
  memset(plVar2 + 0xc,0,0x78);
  *(undefined4 *)(plVar2 + 0xb) = 0x3f800000;
  plVar2[0x1d] = 0;
  plVar2[0x1e] = 0;
  *plVar2 = (long)&PTR_FUN_027efbe0;
  plVar2[0x1b] = 0;
  plVar2[0x1c] = 0;
  FUN_00e70510(plVar2 + 0x1f);
  FUN_00e70510(plVar2 + 0x21);
  *(undefined4 *)(plVar2 + 4) = 3;
  *(undefined4 *)(plVar2 + 0x1c) = param_1[1];
  plVar2[0x1b] = *(long *)(param_1 + 2);
  *(undefined4 *)((long)plVar2 + 0xe4) = *param_1;
  *(undefined4 *)(plVar2 + 0x1e) = param_1[5];
  plVar2[0x1d] = *(long *)(param_1 + 6);
  *(undefined4 *)((long)plVar2 + 0xf4) = param_1[4];
  FUN_009580b8();
  uVar3 = FUN_0095fdf0();
  FUN_00910394(plVar2 + 0x1f,uVar3);
  FUN_00910394(plVar2 + 0x21,param_4);
  FUN_008fa54c(local_80,param_3);
  FUN_008fce60(plVar2 + 1,local_80);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00be751c(uint *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  if (*param_1 == 0) {
    iVar3 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 2);
    lVar4 = 0;
    uVar5 = 0;
    iVar3 = 0;
    do {
      lVar1 = FUN_00bc4ca0(lVar2 + lVar4,param_2);
      lVar2 = *(long *)(param_1 + 2);
      if (lVar2 + lVar4 + 8 != lVar1) {
        iVar3 = *(int *)(lVar1 + 0x38) + iVar3;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x28;
    } while (uVar5 < *param_1);
  }
  return iVar3;
}




void FUN_00be75ac(undefined8 *param_1)

{
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_00a0767c(param_1 + 0x15);
  FUN_00a0767c(param_1 + 0x1b);
  FUN_00a0767c(param_1 + 0x21);
  FUN_00a0767c(param_1 + 0x27);
  FUN_009ec3a8(param_1,0);
  FUN_009ec324(param_1 + 2,0);
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  FUN_008fce60(param_1 + 0x11,&DAT_0320ffa8);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  return;
}




byte FUN_00be7654(uint *param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  
  if (*param_1 == 0) {
    bVar2 = false;
  }
  else {
    uVar4 = 1;
    piVar3 = (int *)(*(long *)(param_1 + 2) + 8);
    do {
      bVar2 = *piVar3 != 0;
      if (*piVar3 != 0) break;
      bVar1 = uVar4 < *param_1;
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 10;
    } while (bVar1);
  }
  return param_1[0x1e] != param_1[0x1f] |
         (float)param_1[0x31] != (float)param_1[0x3d] |
         (float)param_1[0x49] != (float)param_1[0x55] |
         param_1[0x15] != param_1[0x19] | param_1[0xd] != param_1[0x11] | bVar2;
}




void FUN_00be76f0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  byte local_278 [16];
  void *local_268;
  uint *local_260;
  byte local_258 [8];
  void *local_250;
  void *local_248;
  byte local_240 [16];
  void *local_230;
  byte local_228 [16];
  void *local_218;
  byte local_210 [16];
  void *local_200;
  byte local_1f8;
  void *local_1e8;
  uint local_1e0 [2];
  byte local_1d8 [8];
  void *local_1d0;
  void *local_1c8;
  byte local_1c0 [16];
  void *local_1b0;
  byte local_1a8 [16];
  void *local_198;
  byte local_190 [16];
  void *local_180;
  byte local_178;
  void *local_168;
  undefined8 *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  void *local_140;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  void *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  void *local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined4 local_98;
  undefined8 local_94;
  ulong local_88 [2];
  void *local_78;
  
  lVar1 = tpidr_el0;
  lVar8 = *(long *)(lVar1 + 0x28);
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = (void *)0x0;
  local_98 = 0xffffffb3;
  FUN_008fa54c(local_1e0,"blitz");
  FUN_008fce60(local_88,local_1e0);
  if ((local_1e0[0] & 1) != 0) {
    operator_delete(local_1d0);
  }
  local_94 = 0xffffffb30000054d;
  FUN_009ebe58(param_1,&local_98);
  local_98 = 0x14;
  FUN_008fa54c(local_1e0,"glory");
  FUN_008fce60(local_88,local_1e0);
  if ((local_1e0[0] & 1) != 0) {
    operator_delete(local_1d0);
  }
  local_94 = 0x11000002694;
  FUN_009ebe58(param_1,&local_98);
  local_98 = 0x2c;
  FUN_008fa54c(local_1e0,"essence");
  FUN_008fce60(local_88,local_1e0);
  if ((local_1e0[0] & 1) != 0) {
    operator_delete(local_1d0);
  }
  local_94 = 0x2c00004da4;
  FUN_009ebe58(param_1,&local_98);
  local_98 = 0x4d;
  FUN_008fa54c(local_1e0,"sunlight");
  FUN_008fce60(local_88,local_1e0);
  if ((local_1e0[0] & 1) != 0) {
    operator_delete(local_1d0);
  }
  local_94 = 0x19a00004da4;
  FUN_009ebe58(param_1,&local_98);
  local_c0 = &local_b8;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_00e70510(&local_a8);
  uVar4 = FUN_00e6ce7c("MENU_SPOILS_BOOST_FIRE",0);
  FUN_00910394(&local_a8,uVar4);
  FUN_008fa54c(local_1e0,"glory");
  local_260 = local_1e0;
  lVar5 = FUN_009edb34(&local_c0,local_1e0,&DAT_01bbb27b,&local_260,&local_e8);
  *(undefined4 *)(lVar5 + 0x38) = 0x14;
  if ((local_1e0[0] & 1) != 0) {
    operator_delete(local_1d0);
  }
  lVar5 = param_1 + 0x10;
  FUN_009ec078(lVar5,&local_c0);
  local_e8 = &local_e0;
  local_e0 = 0;
  uStack_d8 = 0;
  FUN_00e70510(&local_d0);
  uVar4 = FUN_00e6ce7c("MENU_SPOILS_BOOST_PERMANENT_GLORY",0);
  FUN_00910394(&local_d0,uVar4);
  FUN_008fa54c(local_1e0,"glory");
  local_260 = local_1e0;
  lVar6 = FUN_009edb34(&local_e8,local_1e0,&DAT_01bbb27b,&local_260,&local_110);
  *(undefined4 *)(lVar6 + 0x38) = 10;
  if ((local_1e0[0] & 1) != 0) {
    operator_delete(local_1d0);
  }
  FUN_008fa54c(local_1e0,"xp");
  local_260 = local_1e0;
  lVar6 = FUN_009edb34(&local_e8,local_1e0,&DAT_01bbb27b,&local_260,&local_110);
  *(undefined4 *)(lVar6 + 0x38) = 0x23;
  if ((local_1e0[0] & 1) != 0) {
    operator_delete(local_1d0);
  }
  FUN_009ec078(lVar5,&local_e8);
  local_110 = &local_108;
  local_108 = 0;
  uStack_100 = 0;
  FUN_00e70510(&local_f8);
  uVar4 = FUN_00e6ce7c("MENU_SPOILS_BOOST_SUNLIGHT_100",0);
  FUN_00910394(&local_f8,uVar4);
  FUN_008fa54c(local_1e0,"glory");
  local_260 = local_1e0;
  lVar6 = FUN_009edb34(&local_110,local_1e0,&DAT_01bbb27b,&local_260,&local_138);
  *(undefined4 *)(lVar6 + 0x38) = 0xde;
  if ((local_1e0[0] & 1) != 0) {
    operator_delete(local_1d0);
  }
  FUN_008fa54c(local_1e0,"sunlight");
  local_260 = local_1e0;
  lVar6 = FUN_009edb34(&local_110,local_1e0,&DAT_01bbb27b,&local_260,&local_138);
  *(undefined4 *)(lVar6 + 0x38) = 0x14d;
  if ((local_1e0[0] & 1) != 0) {
    operator_delete(local_1d0);
  }
  FUN_008fa54c(local_1e0,"xp");
  local_260 = local_1e0;
  lVar6 = FUN_009edb34(&local_110,local_1e0,&DAT_01bbb27b,&local_260,&local_138);
  *(undefined4 *)(lVar6 + 0x38) = 0x78;
  if ((local_1e0[0] & 1) != 0) {
    operator_delete(local_1d0);
  }
  FUN_009ec078(lVar5,&local_110);
  local_138 = &local_130;
  local_130 = 0;
  uStack_128 = 0;
  FUN_00e70510(&local_120);
  uVar4 = FUN_00e6ce7c("MENU_SPOILS_BOOST_GUILD_XP_100",0);
  FUN_00910394(&local_120,uVar4);
  FUN_008fa54c(local_1e0,"glory");
  local_260 = local_1e0;
  lVar6 = FUN_009edb34(&local_138,local_1e0,&DAT_01bbb27b,&local_260,&local_160);
  *(undefined4 *)(lVar6 + 0x38) = 0x14;
  if ((local_1e0[0] & 1) != 0) {
    operator_delete(local_1d0);
  }
  FUN_008fa54c(local_1e0,"essence");
  local_260 = local_1e0;
  lVar6 = FUN_009edb34(&local_138,local_1e0,&DAT_01bbb27b,&local_260,&local_160);
  *(undefined4 *)(lVar6 + 0x38) = 0x2d;
  if ((local_1e0[0] & 1) != 0) {
    operator_delete(local_1d0);
  }
  FUN_009ec078(lVar5,&local_138);
  local_160 = &local_158;
  local_158 = 0;
  uStack_150 = 0;
  FUN_00e70510(&local_148);
  uVar4 = FUN_00e6ce7c("MAIN_SPOILS_OF_WAR_3RD_WIN_OF_DAY",0);
  FUN_00910394(&local_148,uVar4);
  FUN_008fa54c(local_1e0,"glory");
  local_260 = local_1e0;
  lVar6 = FUN_009edb34(&local_160,local_1e0,&DAT_01bbb27b,&local_260,local_278);
  *(undefined4 *)(lVar6 + 0x38) = 0x14;
  if ((local_1e0[0] & 1) != 0) {
    operator_delete(local_1d0);
  }
  FUN_009ec078(lVar5,&local_160);
  *(undefined8 *)(param_1 + 0x38) = 0xc800000064;
  *(undefined8 *)(param_1 + 0x30) = 0x9600000002;
  *(undefined8 *)(param_1 + 0x48) = 0x1e000000190;
  *(undefined8 *)(param_1 + 0x40) = 0x1ae00000003;
  *(undefined8 *)(param_1 + 0x58) = 0x12c00000064;
  *(undefined8 *)(param_1 + 0x50) = 0x9600000002;
  *(undefined8 *)(param_1 + 0x68) = 0x1e00000012c;
  *(undefined8 *)(param_1 + 0x60) = 0x1ae00000003;
  FUN_008fa54c(local_1e0,"*Caine*");
  FUN_008fce60(param_1 + 0x88,local_1e0);
  if (((byte)local_1e0[0] & 1) != 0) {
    operator_delete(local_1d0);
  }
  *(undefined4 *)(param_1 + 0x78) = 0xc56;
  iVar2 = FUN_00ccf1dc(0xc56);
  *(int *)(param_1 + 0x70) = iVar2;
  uVar7 = FUN_00ccf2a8(iVar2 + 1);
  if ((uVar7 & 1) == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x80);
  }
  else {
    uVar3 = FUN_00ccf248(*(int *)(param_1 + 0x70) + 1);
  }
  *(undefined4 *)(param_1 + 0x7c) = 0x12c0;
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  iVar2 = FUN_00ccf1dc(0x12c0);
  *(int *)(param_1 + 0x74) = iVar2;
  uVar7 = FUN_00ccf2a8(iVar2 + 1);
  if ((uVar7 & 1) == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x84);
  }
  else {
    uVar3 = FUN_00ccf248(*(int *)(param_1 + 0x74) + 1);
  }
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  *(undefined8 *)(param_1 + 0x108) = 0xa0000000a;
  *(undefined8 *)(param_1 + 0x124) = 0x43c80000;
  *(undefined8 *)(param_1 + 0x11c) = 0x3f3333333e99999a;
  *(undefined8 *)(param_1 + 0x114) = 0x3f266666;
  *(undefined8 *)(param_1 + 0x138) = 0xc0000000c;
  *(undefined8 *)(param_1 + 0x154) = 0x43af0000443b8000;
  *(undefined8 *)(param_1 + 0x14c) = 0x3f6666663f000000;
  *(undefined8 *)(param_1 + 0x144) = 0x3ecccccd;
  *(undefined8 *)(param_1 + 0xa8) = 0xa0000000a;
  *(undefined8 *)(param_1 + 0xc4) = 0x43c80000;
  *(undefined8 *)(param_1 + 0xbc) = 0x3f3333333e99999a;
  *(undefined8 *)(param_1 + 0xb4) = 0x3f266666;
  *(undefined8 *)(param_1 + 0xd8) = 0xa0000000a;
  *(undefined8 *)(param_1 + 0xf4) = 0xc1a0000043be0000;
  *(undefined8 *)(param_1 + 0xec) = 0x3f3333333e99999a;
  *(undefined8 *)(param_1 + 0xe4) = 0x3f19999a;
  memset(local_1d8,0,0x78);
  FUN_008fa54c(&local_260,"chest");
  FUN_008fce60(local_190,&local_260);
  if (((ulong)local_260 & 1) != 0) {
    operator_delete(local_250);
  }
  local_1e0[0] = 2;
  FUN_008fa54c(&local_260,"INVENTORY_CHEST_EPIC_SUMMER_CHEST");
  FUN_008fce60(local_1a8,&local_260);
  if (((ulong)local_260 & 1) != 0) {
    operator_delete(local_250);
  }
  FUN_008fa54c(&local_260,"summer_epic_chest");
  FUN_008fce60(local_1d8,&local_260);
  if (((ulong)local_260 & 1) != 0) {
    operator_delete(local_250);
  }
  FUN_008fa54c(&local_260,"build://Chests.atlas");
  FUN_008fce60(local_1c0,&local_260);
  if (((ulong)local_260 & 1) != 0) {
    operator_delete(local_250);
  }
  FUN_009ebef4(param_1 + 0x20,local_1e0);
  memset(local_258,0,0x78);
  FUN_008fa54c(local_278,"key");
  FUN_008fce60(local_210,local_278);
  if ((local_278[0] & 1) != 0) {
    operator_delete(local_268);
  }
  local_260 = (uint *)CONCAT44(local_260._4_4_,0x16);
  FUN_008fa54c(local_278,"INVENTORY_KEY_EPIC_SUMMER_KEY");
  FUN_008fce60(local_228,local_278);
  if ((local_278[0] & 1) != 0) {
    operator_delete(local_268);
  }
  FUN_008fa54c(local_278,"summer_epic_key");
  FUN_008fce60(local_258,local_278);
  if ((local_278[0] & 1) != 0) {
    operator_delete(local_268);
  }
  FUN_008fa54c(local_278,"build://Keys.atlas");
  FUN_008fce60(local_240,local_278);
  if ((local_278[0] & 1) != 0) {
    operator_delete(local_268);
  }
  FUN_009ebef4(param_1 + 0x20,&local_260);
  if ((local_1f8 & 1) != 0) {
    operator_delete(local_1e8);
  }
  if ((local_210[0] & 1) != 0) {
    operator_delete(local_200);
  }
  if ((local_228[0] & 1) != 0) {
    operator_delete(local_218);
  }
  if ((local_240[0] & 1) != 0) {
    operator_delete(local_230);
  }
  if ((local_258[0] & 1) != 0) {
    operator_delete(local_248);
  }
  if ((local_178 & 1) != 0) {
    operator_delete(local_168);
  }
  if ((local_190[0] & 1) != 0) {
    operator_delete(local_180);
  }
  if ((local_1a8[0] & 1) != 0) {
    operator_delete(local_198);
  }
  if ((local_1c0[0] & 1) != 0) {
    operator_delete(local_1b0);
  }
  if ((local_1d8[0] & 1) != 0) {
    operator_delete(local_1c8);
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
    local_148 = 0;
    local_140 = (void *)0x0;
  }
  FUN_00948ab4(&local_160,local_158);
  if (local_118 != (void *)0x0) {
    operator_delete__(local_118);
    local_120 = 0;
    local_118 = (void *)0x0;
  }
  FUN_00948ab4(&local_138,local_130);
  if (local_f0 != (void *)0x0) {
    operator_delete__(local_f0);
    local_f8 = 0;
    local_f0 = (void *)0x0;
  }
  FUN_00948ab4(&local_110,local_108);
  if (local_c8 != (void *)0x0) {
    operator_delete__(local_c8);
    local_d0 = 0;
    local_c8 = (void *)0x0;
  }
  FUN_00948ab4(&local_e8,local_e0);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  FUN_00948ab4(&local_c0,local_b8);
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

