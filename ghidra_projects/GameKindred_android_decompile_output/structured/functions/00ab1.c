// functions/00ab1 — 31 functions
#include "libGameKindred.h"




void FUN_00ab1000(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00ab1080(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_00ab10ec(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_027d1ce8;
  FUN_00948cd8(param_1 + 2);
  FUN_00e83560(param_1 + 5);
  *param_1 = &PTR_FUN_027d3e88;
  param_1[2] = &PTR_FUN_027d3ed0;
  param_1[5] = &PTR_FUN_027d4268;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_00e6ea58(&DAT_02c7eef8,param_1,0x72bd94bf,FUN_00ab116c,0);
  return;
}




void FUN_00ab116c(void)

{
  FUN_00ab145c();
  return;
}




void FUN_00ab1198(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d3e88;
  param_1[2] = &PTR_FUN_027d3ed0;
  param_1[5] = &PTR_FUN_027d4268;
  FUN_00e6ec00(&DAT_02c7eef8,param_1,0x72bd94bf);
  FUN_00e835e0(param_1 + 5);
  FUN_00948d58(param_1 + 2);
  FUN_00aa32e8(param_1);
  return;
}




void FUN_00ab1210(long param_1)

{
  FUN_00ab1198(param_1 + -0x10);
  return;
}




void FUN_00ab1218(long param_1)

{
  FUN_00ab1198(param_1 + -0x28);
  return;
}




void FUN_00ab1220(void *param_1)

{
  FUN_00ab1198();
  operator_delete(param_1);
  return;
}




void FUN_00ab1244(long param_1)

{
  FUN_00ab1198((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00ab126c(long param_1)

{
  FUN_00ab1198((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00ab1294(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined **local_d0;
  uint local_c8 [2];
  long local_c0;
  byte local_b8;
  void *local_a8;
  byte local_a0;
  void *local_90;
  byte local_88;
  void *local_78;
  byte local_70;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_009744d0(&local_d0);
  uVar2 = FUN_0096c00c(&local_d0);
  if (((uVar2 & 1) != 0) && (local_c8[0] != 0)) {
    lVar6 = (ulong)local_c8[0] * 0x598;
    lVar5 = local_c0;
    do {
      uVar2 = FUN_00b36064(lVar5);
      if ((uVar2 & 1) == 0) {
        pvVar3 = operator_new(0x20);
        FUN_00bc55a0(pvVar3,lVar5);
        pvVar4 = operator_new(0xc0);
        FUN_00ab13dc(pvVar4,pvVar3);
        (*param_3)(param_2,lVar5 + 0x4c8,1,pvVar4,&DAT_01e277f2);
      }
      lVar6 = lVar6 + -0x598;
      lVar5 = lVar5 + 0x598;
    } while (lVar6 != 0);
  }
  local_d0 = &PTR_FUN_027bca40;
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  FUN_00977e28(local_c8,1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ab13dc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027d4298;
  param_1[0x17] = param_2;
  FUN_00f023ec(param_1,*(undefined8 *)(param_2 + 8),1);
  plVar1 = (long *)FUN_00f1357c();
  FUN_00f13fd8(param_1,plVar1);
                    /* WARNING: Could not recover jumptable at 0x00ab144c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1,*(undefined8 *)(param_2 + 8));
  return;
}




void FUN_00ab1450(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 1;
  FUN_00ab145c();
  return;
}




void FUN_00ab145c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined **local_b0;
  uint local_a8 [2];
  long local_a0;
  byte local_98;
  void *local_88;
  byte local_80;
  void *local_70;
  byte local_68;
  void *local_58;
  byte local_50;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0x40) == '\0') || (uVar2 = FUN_0096bc4c(), (uVar2 & 1) == 0)) {
    FUN_00aa32f0(param_1,0);
  }
  else {
    FUN_009744d0(&local_b0);
    uVar2 = FUN_0096c00c(&local_b0);
    if (((uVar2 & 1) != 0) && (local_a8[0] != 0)) {
      lVar5 = (ulong)local_a8[0] * 0x598;
      lVar4 = local_a0;
      do {
        uVar2 = FUN_00b36064(lVar4);
        if ((uVar2 & 1) == 0) {
          uVar3 = 2;
          goto LAB_00ab14d4;
        }
        lVar5 = lVar5 + -0x598;
        lVar4 = lVar4 + 0x598;
      } while (lVar5 != 0);
    }
    uVar3 = 1;
LAB_00ab14d4:
    FUN_00aa32f0(param_1,uVar3);
    local_b0 = &PTR_FUN_027bca40;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    FUN_00977e28(local_a8,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ab157c(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  FUN_00ab145c(param_1 + -0x10);
  return;
}




void FUN_00ab1590(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_00ab145c();
  return;
}




void FUN_00ab1598(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_00ab145c(param_1 + -0x28);
  return;
}




void FUN_00ab15a8(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_00ab145c();
  return;
}




void FUN_00ab15b0(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_00ab145c(param_1 + -0x28);
  return;
}




void FUN_00ab15c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d4298;
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 8))();
  }
  param_1[0x17] = 0;
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ab1608(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d4298;
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 8))();
  }
  param_1[0x17] = 0;
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ab1658(long *param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 local_60 [8];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_027d43e0;
  FUN_00b15e58(param_1 + 0x17,0);
  plVar1 = param_1 + 0xc6;
  FUN_00ed66ec(plVar1);
  plVar2 = param_1 + 0x20b;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x231;
  FUN_00f0c714(plVar3);
  param_1[0x253] = 0;
  param_1[0x252] = 0;
  param_1[0x251] = 0;
  param_1[0x250] = 0;
  param_1[0x24f] = 0;
  param_1[0x24e] = 0;
  param_1[0x24d] = 0;
  param_1[0x24c] = 0;
  *(byte *)(param_1 + 0x254) = param_2 & 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  plVar5 = (long *)FUN_00f136e0();
  (**(code **)(*plVar5 + 0x68))(plVar5,plVar3,0,2);
  (**(code **)(*plVar5 + 0x68))(plVar5,plVar1,1,2);
  FUN_00f13fd8(param_1,plVar5);
  uVar6 = FUN_00f13624();
  FUN_00f13fd8(plVar3,uVar6);
  FUN_00f0c774(plVar3,&DAT_03133e50);
  uVar6 = FUN_00e6ce7c("MENU_GUILD_SEARCH_COLUMN_TITLE_NAME",0);
  FUN_00ab1924(param_1,500,uVar6);
  uVar6 = FUN_00e6ce7c("MENU_GUILD_SEARCH_COLUMN_TITLE_LEVEL",0);
  FUN_00ab1924(param_1,100,uVar6);
  uVar6 = FUN_00e6ce7c("MENU_GUILD_SEARCH_COLUMN_TITLE_NUM_MEMBERS",0);
  FUN_00ab1924(param_1,100,uVar6);
  uVar6 = FUN_00e6ce7c("MENU_GUILD_SEARCH_COLUMN_TITLE_GUILD_TYPE",0);
  FUN_00ab1924(param_1,200,uVar6);
  uVar6 = FUN_00e6ce7c("MENU_GUILD_SEARCH_COLUMN_TITLE_MIN_SKILL_TIER",0);
  FUN_00ab1924(param_1,0x32,uVar6);
  uVar6 = FUN_00e6ce7c("MENU_GUILD_SEARCH_COLUMN_TITLE_PRIME_TIME",0);
  FUN_00ab1924(param_1,100,uVar6);
  if ((char)param_1[0x254] != '\0') {
    FUN_00ab1924(param_1,100,&DAT_03210450);
    FUN_00ab1924(param_1,100,&DAT_03210450);
  }
  local_60[0] = 9;
  FUN_00ed5ab0(plVar1,local_60);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xfffffffb;
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  *(uint *)((long)param_1 + 0x10dc) = *(uint *)((long)param_1 + 0x10dc) & 0xfffffffb;
  FUN_00ab19fc(param_1);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ab1924(long param_1,undefined2 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00ab2508(param_1 + 0x1188,1);
  FUN_00f0d75c(lVar2 + 0xb8,param_3);
  *(undefined2 *)(lVar2 + 0x1e8) = param_2;
  local_60 = CONCAT44(local_60._4_4_,0xccffffff);
  FUN_00f0d7fc(lVar2 + 0xb8,&local_60);
  plVar3 = (long *)FUN_00f14058(param_1 + 0x1188);
  (**(code **)(*plVar3 + 0x68))(plVar3,lVar2,0,2);
  local_60 = lVar2;
  FUN_00ab2570(param_1 + 0x1280,&local_60);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ab19fc(long *param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  undefined8 uVar4;
  
  if ((int)param_1[0x24e] != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(param_1[0x24f] + uVar2 * 8);
      uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_00f13f08(uVar4,0x42c80000,lVar1 + 0x1948);
      FUN_00ab2380(lVar1);
      if (uVar2 == 0) {
        FUN_00f07a18(0,0xc0000000,lVar1,4);
      }
      else {
        FUN_00f07b18(0xbf800000,lVar1,0,
                     *(undefined8 *)(param_1[0x24f] + (ulong)((int)uVar2 - 1) * 8),2);
      }
      fVar3 = (float)(**(code **)(**(long **)param_1[0x251] + 0x48))();
      FUN_00f13f08(fVar3 + -40.0,0x42c80000,lVar1 + 0x398);
      FUN_00f07b18(0x41a00000,lVar1 + 0x398,3,*(undefined8 *)param_1[0x251],3);
      FUN_00f07b18(0,lVar1 + 0x4c8,4,*(undefined8 *)(param_1[0x251] + 8),4);
      FUN_00f07b18(0,lVar1 + 0x5f8,4,*(undefined8 *)(param_1[0x251] + 0x10),4);
      FUN_00f07b18(0,lVar1 + 0x728,4,*(undefined8 *)(param_1[0x251] + 0x18),4);
      FUN_00f07b18(0,lVar1 + 0x858,4,*(undefined8 *)(param_1[0x251] + 0x20),4);
      FUN_00f07b18(0,lVar1 + 0xc28,4,*(undefined8 *)(param_1[0x251] + 0x28),4);
      if ((char)param_1[0x254] != '\0') {
        FUN_00f07b18(0,lVar1 + 0xd58,4,*(undefined8 *)(param_1[0x251] + 0x30),4);
        FUN_00f07b18(0,lVar1 + 0x1350,4,*(undefined8 *)(param_1[0x251] + 0x38),4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x24e));
  }
  FUN_00f07a18(0,0x43160000,param_1 + 0x17,4);
  FUN_00f07a18(0,0x43160000,param_1 + 0x20b,4);
  return;
}




void FUN_00ab1c3c(long param_1)

{
  *(uint *)(param_1 + 0x10dc) = *(uint *)(param_1 + 0x10dc) & 0xfffffffb;
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 4;
  FUN_00b16058(param_1 + 0xb8);
  return;
}




void FUN_00ab1c60(long param_1)

{
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xfffffffb;
  FUN_00b16600(param_1 + 0xb8);
  return;
}




void FUN_00ab1c78(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00ed5aa8(param_1 + 0x630);
  FUN_00f019d4(uVar1,1);
  if (*(long *)(param_1 + 0x1278) != 0) {
    *(undefined4 *)(param_1 + 0x1270) = 0;
  }
  return;
}




void FUN_00ab1cb0(long param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  code *local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  FUN_00ab1c78();
  FUN_00ab2e6c(param_1 + 0x1290,param_2);
  uVar1 = *(uint *)(param_1 + 0x10dc) | 4;
  if (*param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x10dc) & 0xfffffffb;
  }
  *(uint *)(param_1 + 0x10dc) = uVar1;
  if (*param_2 != 0) {
    uVar2 = DAT_03210c64;
    lVar7 = 0;
    uVar8 = 0;
    do {
      uVar4 = FUN_00ed5aa8(param_1 + 0x630);
      pcVar5 = (code *)FUN_00ab1e6c(uVar4,1);
      FUN_00ab1ed4(pcVar5,*(long *)(param_2 + 2) + lVar7,*(undefined1 *)(param_1 + 0x12a0));
      local_98 = FUN_00ab2150;
      local_88 = 0;
      uStack_80 = 0;
      lStack_90 = param_1;
      local_78 = uVar8;
      local_70 = uVar2;
      FUN_009693a0(pcVar5 + 8,&local_98);
      local_98 = FUN_00ab2158;
      local_88 = 0;
      uStack_80 = 0;
      lStack_90 = param_1;
      local_78 = uVar8;
      local_70 = uVar2;
      FUN_009693a0(pcVar5 + 0xd60,&local_98);
      local_98 = FUN_00ab2160;
      local_88 = 0;
      uStack_80 = 0;
      lStack_90 = param_1;
      local_78 = uVar8;
      local_70 = uVar2;
      FUN_009693a0(pcVar5 + 0x1358,&local_98);
      if ((uVar8 & 1) == 0) {
        puVar6 = &DAT_03133e58;
      }
      else {
        puVar6 = &DAT_03133e54;
      }
      FUN_00f0c774(pcVar5 + 0x1948,puVar6);
      local_98 = pcVar5;
      FUN_00ab2168(param_1 + 0x1270,&local_98);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x158;
    } while (uVar8 < *param_2);
  }
  FUN_00ab19fc(param_1);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_00ab1e6c(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1a28);
  FUN_00ab25f8();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_00ab1ed4(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_00e70510(&local_48);
  lVar2 = param_2 + 0x31;
  if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
    lVar2 = *(long *)(param_2 + 0x40);
  }
  lVar3 = param_2 + 0x19;
  if ((*(byte *)(param_2 + 0x18) & 1) != 0) {
    lVar3 = *(long *)(param_2 + 0x28);
  }
  FUN_00e70e18(&local_48,"[%s] %s",lVar2,lVar3);
  FUN_00f0d75c(param_1 + 0x398,&local_48);
  FUN_00e70510(&local_58);
  FUN_00e70e18(&local_58,&DAT_01bb6d43,*(undefined4 *)(param_2 + 0x68));
  FUN_00f0d75c(param_1 + 0x4c8,&local_58);
  FUN_00e70510(&local_68);
  FUN_00e70e18(&local_68,"%d/%d",*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 100));
  FUN_00f0d75c(param_1 + 0x5f8,&local_68);
  uVar5 = FUN_00cb50d8(param_2 + 0x78,0);
  thunk_FUN_00e7051c(&local_78,uVar5);
  FUN_00f0d75c(param_1 + 0x728,&local_78);
  iVar6 = *(int *)(param_2 + 0x74);
  if (iVar6 < 0) {
    iVar6 = -1;
  }
  FUN_00b1d77c(param_1 + 0x858,iVar6);
  FUN_00cb6184(&local_88,*(undefined4 *)(param_2 + 0x70),0);
  FUN_00cb6184(&local_98,*(int *)(param_2 + 0x70) + 1,0);
  uVar5 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_PRIMETIME_VALUE",0);
  thunk_FUN_00e7051c(&local_a8,uVar5);
  FUN_00e705c8(&local_b8,"[START_HOUR]");
  FUN_00e71248(&local_a8,0,&local_b8,&local_88);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
    local_b8 = 0;
    local_b0 = (void *)0x0;
  }
  FUN_00e705c8(&local_b8,"[END_HOUR]");
  FUN_00e71248(&local_a8,0,&local_b8,&local_98);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
    local_b8 = 0;
    local_b0 = (void *)0x0;
  }
  FUN_00f0d75c(param_1 + 0xc28,&local_a8);
  uVar1 = (param_3 & 1) << 2 | (param_3 & 1) << 6;
  *(uint *)(param_1 + 0xddc) = uVar1 | *(uint *)(param_1 + 0xddc) & 0xffffffbb;
  *(uint *)(param_1 + 0x13d4) = uVar1 | *(uint *)(param_1 + 0x13d4) & 0xffffffbb;
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00ab19fc(long *param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  undefined8 uVar4;
  
  if ((int)param_1[0x24e] != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(param_1[0x24f] + uVar2 * 8);
      uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_00f13f08(uVar4,0x42c80000,lVar1 + 0x1948);
      FUN_00ab2380(lVar1);
      if (uVar2 == 0) {
        FUN_00f07a18(0,0xc0000000,lVar1,4);
      }
      else {
        FUN_00f07b18(0xbf800000,lVar1,0,
                     *(undefined8 *)(param_1[0x24f] + (ulong)((int)uVar2 - 1) * 8),2);
      }
      fVar3 = (float)(**(code **)(**(long **)param_1[0x251] + 0x48))();
      FUN_00f13f08(fVar3 + -40.0,0x42c80000,lVar1 + 0x398);
      FUN_00f07b18(0x41a00000,lVar1 + 0x398,3,*(undefined8 *)param_1[0x251],3);
      FUN_00f07b18(0,lVar1 + 0x4c8,4,*(undefined8 *)(param_1[0x251] + 8),4);
      FUN_00f07b18(0,lVar1 + 0x5f8,4,*(undefined8 *)(param_1[0x251] + 0x10),4);
      FUN_00f07b18(0,lVar1 + 0x728,4,*(undefined8 *)(param_1[0x251] + 0x18),4);
      FUN_00f07b18(0,lVar1 + 0x858,4,*(undefined8 *)(param_1[0x251] + 0x20),4);
      FUN_00f07b18(0,lVar1 + 0xc28,4,*(undefined8 *)(param_1[0x251] + 0x28),4);
      if ((char)param_1[0x254] != '\0') {
        FUN_00f07b18(0,lVar1 + 0xd58,4,*(undefined8 *)(param_1[0x251] + 0x30),4);
        FUN_00f07b18(0,lVar1 + 0x1350,4,*(undefined8 *)(param_1[0x251] + 0x38),4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x24e));
  }
  FUN_00f07a18(0,0x43160000,param_1 + 0x17,4);
  FUN_00f07a18(0,0x43160000,param_1 + 0x20b,4);
  return;
}

