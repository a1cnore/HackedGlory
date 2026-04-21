// functions/00c3b — 31 functions
#include "libGameKindred.h"




void FUN_00c3b0e8(long param_1)

{
  FUN_00c37e18();
  if (*(long *)(param_1 + 0x45d0) != 0) {
    FUN_00af9914();
    return;
  }
  return;
}




void FUN_00c3b11c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x45e0) = param_2;
  if (*(long *)(param_1 + 0x45d0) != 0) {
    FUN_00c9f7d0(*(long *)(param_1 + 0x45d0),param_2,*(undefined4 *)(param_1 + 0x45e4));
    return;
  }
  return;
}




void FUN_00c3b140(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x45e4) = param_2;
  if (*(long *)(param_1 + 0x45d0) != 0) {
    FUN_00c9f7d0(*(long *)(param_1 + 0x45d0),*(undefined4 *)(param_1 + 0x45e0),param_2);
    return;
  }
  return;
}




void FUN_00c3b168(long *param_1,byte param_2)

{
  *(byte *)((long)param_1 + 0x45fc) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00c3b17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00c3b180(long *param_1,byte param_2)

{
  *(byte *)((long)param_1 + 0x45fd) = param_2 & 1;
  if (param_1[0x8ba] != 0) {
    *(byte *)(param_1[0x8ba] + 0x5d1) = param_2 & 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00c3b1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00c3b1a4(long *param_1,byte param_2)

{
  *(byte *)((long)param_1 + 0x45fe) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00c3b1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00c3b1bc(void)

{
  return;
}




void FUN_00c3b1c0(float param_1,long *param_2)

{
  FUN_00c37e2c();
  FUN_00b22d78(param_1 * 0.85,0x42600000,param_2 + 0x444);
  FUN_00f13f08(param_1 * 0.85,0x42600000,param_2 + 0x41b);
                    /* WARNING: Could not recover jumptable at 0x00c3b230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xe8))(param_2);
  return;
}




void FUN_00c3b234(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00b22d78(param_3 + 0x2220);
  FUN_00f13f08(param_1,param_2,param_3 + 0x20d8);
  return;
}




void FUN_00c3b27c(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00e6ce7c(param_2,0);
  FUN_00f0d75c(param_1 + 0x1ea,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00c3b2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c3b2c0(long *param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 0x8be) = param_2;
  uVar2 = FUN_00e6ce7c("MENU_TALENTS_TALENT_LEVEL",0);
  thunk_FUN_00e7051c(&local_48,uVar2);
  FUN_00e70510(&local_58);
  FUN_00e70e18(&local_58,"%u",param_2);
  FUN_00e705c8(&local_68,"[VALUE]");
  FUN_00e71248(&local_48,0,&local_68,&local_58);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  FUN_00f0d75c(param_1 + 0x3cf,&local_48);
  (**(code **)(*param_1 + 0xe8))(param_1);
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
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3b3c4(long *param_1,int param_2)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(int *)(param_1 + 0x8bf) = param_2;
  FUN_00e70510(&local_48);
  local_50 = 0xff000000;
  uStack_4c = 0xff000000;
  if (param_2 == 3) {
    pcVar2 = "MENU_TALENTS_LABEL_TIER_LEGENDARY";
    local_50 = 0xff5de1f2;
    uStack_4c = 0xff00aded;
  }
  else if (param_2 == 2) {
    local_50 = 0xffff61f7;
    uStack_4c = 0xffff00ff;
    pcVar2 = "MENU_TALENTS_LABEL_TIER_EPIC";
  }
  else {
    if (param_2 != 1) goto LAB_00c3b47c;
    local_50 = 0xffffd18a;
    uStack_4c = 0xffffb400;
    pcVar2 = "MENU_TALENTS_LABEL_TIER_RARE";
  }
  uVar3 = FUN_00e6ce7c(pcVar2,0);
  FUN_00910394(&local_48,uVar3);
LAB_00c3b47c:
  FUN_00b22eb4(param_1 + 0x444,&uStack_4c,&local_50);
  local_58[0] = 0xff348eb0;
  FUN_00f0e670(param_1 + 0x1aa,local_58,2);
  FUN_00f0d75c(param_1 + 0x266,&local_48);
  FUN_00f0d7fc(param_1 + 0x266,&uStack_4c);
  if (param_1[0x8b9] != 0) {
    FUN_00f0e670(param_1[0x8b9] + 0x140,&uStack_4c,2);
  }
  if (param_1[0x8ba] != 0) {
    FUN_00c9f550(param_1[0x8ba],param_2);
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3b53c(long *param_1,undefined8 param_2,undefined4 param_3)

{
  *(int *)(param_1 + 0x8bd) = (int)param_2;
  *(undefined4 *)((long)param_1 + 0x45ec) = param_3;
  FUN_00b22fc8(0x3f000000,param_1 + 0x444,param_2,(int)param_1[0x868],
               *(undefined4 *)((long)param_1 + 0x4344),0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00c3b598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c3b59c(long *param_1,int param_2)

{
  uint *puVar1;
  long lVar2;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(int *)((long)param_1 + 0x45f4) = param_2;
  puVar1 = (uint *)((long)param_1 + 0x43d4);
  if (param_2 < 2) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  else {
    *puVar1 = *puVar1 | 4;
    FUN_00e70510(&local_48);
    FUN_00e70e18(&local_48,&DAT_01bb6d43,param_2);
    FUN_00e705c8(&local_58,&DAT_01bbd168);
    FUN_00e705c8(&local_68,"[COUNT]");
    FUN_00e71248(&local_58,0,&local_68,&local_48);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    FUN_00f0d75c(param_1 + 0x86a,&local_58);
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
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3b6c0(long *param_1,undefined8 param_2)

{
  FUN_00f0e628(param_1 + 0x189);
  FUN_00a9bbc4(param_1 + 0x189,param_2);
                    /* WARNING: Could not recover jumptable at 0x00c3b708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c3b70c(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x45c8) != 0) {
    FUN_00c9ef0c(*(long *)(param_1 + 0x45c8),param_2,param_3);
  }
  if (*(long *)(param_1 + 0x45d0) != 0) {
    FUN_00c9f580(*(long *)(param_1 + 0x45d0),param_2,param_3);
    return;
  }
  return;
}




void FUN_00c3b76c(long *param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *(uint *)((long)param_1 + 0x1efc);
  uVar5 = 0xff;
  uVar4 = 0xb2;
  if ((param_2 & 1) == 0) {
    uVar4 = 0xff;
  }
  if ((uVar2 >> 7 & 0xff) != uVar4) {
    *(uint *)((long)param_1 + 0x1efc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar4 << 7;
    FUN_0091ada4(param_1 + 0x3cf);
  }
  uVar4 = *(uint *)((long)param_1 + 0x172c);
  if ((param_2 & 1) == 0) {
    uVar5 = 0x7f;
  }
  if ((uVar4 >> 7 & 0xff) != uVar5) {
    *(uint *)((long)param_1 + 0x172c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | uVar5 << 7;
    FUN_0091ada4(param_1 + 0x2d5);
  }
  plVar1 = param_1 + 0x266;
  uVar3 = FUN_00f02540(plVar1);
  if ((param_2 & 1) == 0) {
    if ((uVar3 & 1) == 0) {
      FUN_00f133a4(param_1 + 0x23b,plVar1,0);
    }
  }
  else if ((uVar3 & 1) != 0) {
    FUN_00f01a4c(plVar1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00c3b840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c3b844(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined8 uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x202c);
  lVar1 = param_1 + 0x1fa8;
  *(uint *)(param_1 + 0x202c) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x202c) = uVar2 & 0xffff807f | 4;
    FUN_0091ada4(lVar1);
  }
  if ((*(float *)(param_1 + 0x1ff0) != 3.0) || (*(float *)(param_1 + 0x1ff4) != 3.0)) {
    uVar7 = NEON_fmov(0x40400000,4);
    *(undefined8 *)(param_1 + 0x1ff0) = uVar7;
    FUN_0091ada4(lVar1);
  }
  uVar7 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e000000,FUN_00a269a4);
  uVar4 = FUN_00efee28(0x3f333333,0x3e000000,FUN_009a7608);
  lVar3 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efcd98(puVar6);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar6,uVar7,uVar4,0);
  FUN_00f022a0(lVar1,puVar6);
  return;
}




void FUN_00c3b9b4(long param_1)

{
  FUN_00b231f4(param_1 + 0x2220);
  return;
}




void FUN_00c3b9c0(long param_1,ulong param_2,undefined4 param_3)

{
  if ((param_2 & 1) != 0) {
    FUN_00b23218();
    return;
  }
  FUN_00b231f4(param_1 + 0x2220,param_3);
  return;
}




void FUN_00c3b9d8(long param_1)

{
  FUN_00b2322c(param_1 + 0x2220);
  return;
}




void FUN_00c3b9e4(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0x45c8) != 0) {
    FUN_00c9edc4(*(long *)(param_1 + 0x45c8),param_2 & 1);
    return;
  }
  return;
}




void FUN_00c3b9f8(long *param_1,byte param_2)

{
  *(byte *)((long)param_1 + 0x45ff) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00c3ba0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00c3ba10(long *param_1,uint param_2)

{
  *(byte *)((long)param_1 + 0x4601) = (byte)param_2 & 1;
  *(uint *)((long)param_1 + 0xfd4) =
       *(uint *)((long)param_1 + 0xfd4) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0xfd4) & 3 | (~param_2 & 1) << 2;
                    /* WARNING: Could not recover jumptable at 0x00c3ba38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00c3ba3c(long *param_1,byte param_2)

{
  *(byte *)((long)param_1 + 0x4602) = param_2 & 1;
  if (param_1[0x8b9] != 0) {
    FUN_00c9eef0(param_1[0x8b9],~param_2 & 1);
                    /* WARNING: Could not recover jumptable at 0x00c3ba80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe8))(param_1);
    return;
  }
  return;
}




void FUN_00c3ba90(long *param_1)

{
  (**(code **)(*param_1 + 0x1a8))(param_1,0);
  FUN_00c38200(param_1);
  return;
}




void FUN_00c3bac0(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (*(char *)((long)param_1 + 0x45fd) != '\0') {
    uVar2 = FUN_00e6ce7c("MENU_TALENT_COIN_NEW_TALENT_LABEL",0);
    FUN_00f0d75c(param_1 + 0x3cf,uVar2);
    *(uint *)((long)param_1 + 0x22a4) = *(uint *)((long)param_1 + 0x22a4) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x1ae4) = *(uint *)((long)param_1 + 0x1ae4) | 4;
  }
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_coin_flip.mp3",0,0);
  iVar1 = (int)param_1[0x8bf];
  if (iVar1 == 3) {
    pcVar3 = "build://Sounds/UI.assetbundle/sfx_legendary_talent_acquired.mp3";
  }
  else if (iVar1 == 2) {
    pcVar3 = "build://Sounds/UI.assetbundle/sfx_epic_talent_acquired.mp3";
  }
  else {
    if (iVar1 != 1) goto LAB_00c3bb80;
    pcVar3 = "build://Sounds/UI.assetbundle/sfx_rare_talent_acquired.mp3";
  }
  FUN_00aa12a8(0x3f800000,pcVar3,0,0);
LAB_00c3bb80:
  *(uint *)((long)param_1 + 0xf4c) = *(uint *)((long)param_1 + 0xf4c) | 4;
                    /* WARNING: Could not recover jumptable at 0x00c3bba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c3bba4(long param_1)

{
  (**(code **)**(undefined8 **)(param_1 + 0x648))();
  FUN_00c37adc(param_1 + 0x2f0,3,0,0);
  return;
}




void FUN_00c3bbe0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(uint *)(param_1 + 0xf4c) = *(uint *)(param_1 + 0xf4c) & 0xfffffffb;
  if (*(char *)(param_1 + 0x45fe) == '\0') {
    FUN_00b2322c(param_1 + 0x2220);
  }
  else {
    FUN_00b23218();
  }
  if (*(long *)(param_1 + 0x45d0) != 0) {
    uVar3 = FUN_00f048a4("CoinInspect");
    FUN_00f048e0(auStack_68,uVar3,0);
    FUN_00f04760(*(undefined8 *)(param_1 + 0x45d0),auStack_68,1);
    (**(code **)(**(long **)(param_1 + 0x45d0) + 0x158))(0x3e4ccccd,*(long **)(param_1 + 0x45d0),0);
    lVar2 = DAT_03210d00;
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efcad4(puVar5);
      *(undefined ***)puVar5 = &PTR_FUN_027c1a60;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3e4ccccd,puVar5);
    FUN_00f022a0(param_1,puVar5);
    lVar2 = DAT_03210d00;
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar4 * 0x40);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efc8e8(puVar5);
      *(undefined ***)puVar5 = &PTR_FUN_027c27b8;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      puVar5[0xe] = 0;
      puVar5[0xf] = 0;
      puVar5[0x10] = 0;
      puVar5[0x11] = 0;
      puVar5[0x12] = 0;
      puVar5[0x13] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    *(code **)(puVar5 + 8) = FUN_00c3bba4;
    *(long *)(puVar5 + 0x10) = param_1;
    FUN_00f022a0(param_1,puVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3be28(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(uint *)(param_1 + 0xf4c) = *(uint *)(param_1 + 0xf4c) | 4;
  if (*(long *)(param_1 + 0x45d0) != 0) {
    uVar2 = FUN_00f048a4("FinishedInspecting");
    FUN_00f048e0(auStack_48,uVar2,0);
    FUN_00f04760(*(undefined8 *)(param_1 + 0x45d0),auStack_48,1);
    (**(code **)(**(long **)(param_1 + 0x45d0) + 0x180))
              (0x3e4ccccd,*(undefined4 *)(param_1 + 0x450));
  }
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_coin_flip_back.mp3",0,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3bee0(long param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  ushort *puVar7;
  undefined4 uVar8;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FUN_00c38a88();
  lVar1 = DAT_03210d00;
  if (*(char *)(param_1 + 0x4600) == '\0') {
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efcad4(puVar7);
      *(undefined ***)puVar7 = &PTR_FUN_027c1a60;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3f000000,puVar7);
    lVar1 = param_1 + 0x4350;
    FUN_00f022a0(lVar1,puVar7);
    *(uint *)(param_1 + 0x43d4) = *(uint *)(param_1 + 0x43d4) & 0xfffffffb;
    FUN_00e705c8(&local_78,&DAT_01e1bfd0);
    FUN_00f0d75c(lVar1,&local_78);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
      local_78 = 0;
      local_70 = (void *)0x0;
    }
    piVar2 = (int *)(param_1 + 0x45f4);
    uVar8 = 0x3db851ec;
    if (0 < *piVar2) {
      uVar8 = NEON_fminnm(2.5 / (float)*piVar2,0x3db851ec);
    }
    lVar5 = FUN_00c3d214(lVar1,1);
    iVar3 = *piVar2;
    *(long *)(lVar5 + 0x88) = lVar1;
    *(undefined4 *)(lVar5 + 0x90) = uVar8;
    *(undefined4 *)(lVar5 + 0x94) = 0;
    *(int *)(lVar5 + 0x98) = iVar3;
    FUN_00c3c9b4(lVar5,lVar1);
    lVar1 = DAT_03210d00;
    uVar8 = NEON_fminnm((float)*piVar2 * 0.09,0x3f800000);
    if (*(long *)(param_1 + 0x45c8) != 0) {
      uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar6 == 0xffff) {
        puVar7 = (ushort *)0x0;
      }
      else {
        puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
        if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = *puVar7;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
        *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
        FUN_00efcad4(puVar7);
        *(undefined ***)puVar7 = &PTR_FUN_027c1a60;
        *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      }
      FUN_00efcac4(0x3f000000,puVar7);
      FUN_00f022a0(param_1 + 0x170,puVar7);
      lVar1 = DAT_03210d00;
      uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar6 == 0xffff) {
        puVar7 = (ushort *)0x0;
      }
      else {
        puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
        if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = *puVar7;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
        *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
        FUN_00efe530(puVar7);
        *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      }
      local_78 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1b8) >> 0x20) * 1.05,
                          (float)*(undefined8 *)(param_1 + 0x1b8) * 1.05);
      FUN_00efe58c(puVar7,&local_78);
      FUN_00efcac4(uVar8,puVar7);
      FUN_00f022a0(param_1 + 0x170,puVar7);
    }
    lVar1 = DAT_03210d00;
    if (*(long *)(param_1 + 0x45d0) != 0) {
      uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar6 == 0xffff) {
        puVar7 = (ushort *)0x0;
      }
      else {
        puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
        if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = *puVar7;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
        *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
        FUN_00efcad4(puVar7);
        *(undefined ***)puVar7 = &PTR_FUN_027c1a60;
        *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      }
      FUN_00efcac4(0x3ed9999a,puVar7);
      FUN_00f022a0(param_1 + 0x228,puVar7);
      lVar1 = DAT_03210d00;
      uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar6 == 0xffff) {
        puVar7 = (ushort *)0x0;
      }
      else {
        puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
        if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = *puVar7;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
        *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
        FUN_00efe530(puVar7);
        *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      }
      local_78 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x270) >> 0x20) * 1.05,
                          (float)*(undefined8 *)(param_1 + 0x270) * 1.05);
      FUN_00efe58c(puVar7,&local_78);
      FUN_00efcac4(uVar8,puVar7);
      FUN_00f022a0(param_1 + 0x228,puVar7);
    }
    *(char *)(param_1 + 0x4600) = '\x01';
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

