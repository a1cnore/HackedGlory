// functions/00c9f — 23 functions
#include "libGameKindred.h"




void FUN_00c9f024(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028072a0;
  param_1[0xa3] = &PTR_FUN_028266f0;
  param_1[0xba] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xbd);
  FUN_00f13d08(param_1 + 0xa3);
  param_1[0x85] = &PTR_FUN_028266f0;
  param_1[0x9c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9f);
  FUN_00f13d08(param_1 + 0x85);
  param_1[0x67] = &PTR_FUN_028266f0;
  param_1[0x7e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x81);
  FUN_00f13d08(param_1 + 0x67);
  param_1[0x46] = &PTR_FUN_02827290;
  param_1[0x5d] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 100);
  param_1[0x46] = &PTR_FUN_028266f0;
  param_1[0x5d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x60);
  FUN_00f13d08(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_028266f0;
  param_1[0x3f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c9f120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028072a0;
  param_1[0xa3] = &PTR_FUN_028266f0;
  param_1[0xba] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xbd);
  FUN_00f13d08(param_1 + 0xa3);
  param_1[0x85] = &PTR_FUN_028266f0;
  param_1[0x9c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9f);
  FUN_00f13d08(param_1 + 0x85);
  param_1[0x67] = &PTR_FUN_028266f0;
  param_1[0x7e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x81);
  FUN_00f13d08(param_1 + 0x67);
  param_1[0x46] = &PTR_FUN_02827290;
  param_1[0x5d] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 100);
  param_1[0x46] = &PTR_FUN_028266f0;
  param_1[0x5d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x60);
  FUN_00f13d08(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_028266f0;
  param_1[0x3f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c9f224(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e6a474();
  FUN_0091ed5c(param_1,uVar1,0x12345678);
  return;
}




void FUN_00c9f254(undefined8 *param_1)

{
  FUN_00af8b20();
  *param_1 = &PTR_FUN_028073f0;
  FUN_00f0e4a8(param_1 + 0x76);
  FUN_00f0a784(param_1 + 0x94);
  FUN_00f017e8(param_1 + 0x96);
  param_1[0x96] = &PTR_FUN_027c1f80;
  FUN_00f017e8(param_1 + 0xa7);
  param_1[0xa7] = &PTR_FUN_027c1f80;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f4ccccd;
  *(undefined8 *)((long)param_1 + 0x5c4) = 0x100000004;
  *(undefined4 *)((long)param_1 + 0x5cc) = 0;
  *(undefined2 *)(param_1 + 0xba) = 0;
  FUN_00f0a814(param_1 + 0x94,PTR_s_build___MenuSkinsHeroesBlueprint_02be3630);
  FUN_00c9f320(param_1);
  FUN_00c9f440(param_1);
  *(undefined4 *)((long)param_1 + 0x5c4) = 1;
  FUN_00af9aa0(param_1,"rare");
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c9f320(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d6eb50();
  uVar3 = FUN_00d6eb5c(uVar3,"*TalentCoinRep3D*");
  FUN_00af9124(param_1,uVar3);
  local_48 = _DAT_03218ef8;
  uVar3 = *(undefined8 *)(param_1 + 0x308);
  uStack_40 = local_48;
  uVar2 = FUN_00e6a474("art_file");
  uVar2 = FUN_0091ed5c("art_file",uVar2,0x12345678);
  FUN_019972a0(uVar3,uVar2,*(undefined8 *)(param_1 + 0x4a0));
  uVar3 = *(undefined8 *)(param_1 + 0x308);
  uVar2 = FUN_00e6a474("u_repeat");
  uVar2 = FUN_0091ed5c("u_repeat",uVar2,0x12345678);
  FUN_019971b0(uVar3,uVar2,&uStack_40);
  uVar3 = *(undefined8 *)(param_1 + 0x308);
  uVar2 = FUN_00e6a474("u_offset");
  uVar2 = FUN_0091ed5c("u_offset",uVar2,0x12345678);
  FUN_019971b0(uVar3,uVar2,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c9f440(long *param_1)

{
  long *plVar1;
  
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x96,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xa7,1);
  plVar1 = param_1 + 0x76;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0e6e8(plVar1,0);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  if ((*(uint *)((long)param_1 + 0x434) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x434) = *(uint *)((long)param_1 + 0x434) & 0xffff807f;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e670(plVar1,&DAT_01bee802,2);
  *(uint *)((long)param_1 + 0x434) = *(uint *)((long)param_1 + 0x434) | 0x10;
  FUN_00f13f08(0x43480000,0x43480000,plVar1);
  if ((*(float *)(param_1 + 0x80) == 0.5) && (*(float *)((long)param_1 + 0x404) == 0.5)) {
    return;
  }
  param_1[0x80] = 0x3f0000003f000000;
  FUN_0091ada4(plVar1);
  return;
}




void FUN_00c9f550(long param_1,int param_2)

{
  *(int *)(param_1 + 0x5c4) = param_2;
  if (param_2 - 1U < 3) {
    FUN_00af9aa0(param_1,(&PTR_s_rare_02807580)[(int)(param_2 - 1U)]);
    return;
  }
  FUN_00af9aa0(param_1,&DAT_01e277f2);
  return;
}




void FUN_00c9f57c(void)

{
  return;
}




void FUN_00c9f580(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float local_58;
  float fStack_54;
  float local_50;
  float local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar4 = param_1 + 0x4a0;
    if (*(long *)(param_1 + 0x4a0) != 0) {
      FUN_00f0a948(lVar4);
    }
    FUN_00f0a814(lVar4,param_2);
    uVar5 = *(undefined8 *)(param_1 + 0x308);
    uVar3 = FUN_00e6a474("art_file");
    uVar3 = FUN_0091ed5c("art_file",uVar3,0x12345678);
    FUN_019972a0(uVar5,uVar3,*(undefined8 *)(param_1 + 0x4a0));
    lVar4 = FUN_00f0a7e0(lVar4,param_3);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x4a0) + 8) + 0x3c);
      fVar6 = (float)(uVar1 & 0x3fff);
      local_50 = (float)*(ushort *)(lVar4 + 4) / fVar6;
      fVar7 = (float)(uVar1 >> 0xe & 0x3fff);
      local_4c = 1.0 - (float)((uint)*(ushort *)(lVar4 + 10) + (uint)*(ushort *)(lVar4 + 6)) / fVar7
      ;
      local_58 = (float)((uint)*(ushort *)(lVar4 + 8) + (uint)*(ushort *)(lVar4 + 4)) / fVar6 -
                 local_50;
      fStack_54 = (1.0 - (float)*(ushort *)(lVar4 + 6) / fVar7) - local_4c;
      uVar5 = *(undefined8 *)(param_1 + 0x308);
      uVar3 = FUN_00e6a474("u_repeat");
      uVar3 = FUN_0091ed5c("u_repeat",uVar3,0x12345678);
      FUN_019971b0(uVar5,uVar3,&local_58);
      uVar5 = *(undefined8 *)(param_1 + 0x308);
      uVar3 = FUN_00e6a474("u_offset");
      uVar3 = FUN_0091ed5c("u_offset",uVar3,0x12345678);
      FUN_019971b0(uVar5,uVar3,&local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c9f734(undefined8 param_1)

{
  FUN_00af97f4(param_1,0);
  FUN_00f01980(param_1);
  return;
}




void FUN_00c9f75c(void)

{
  return;
}




void FUN_00c9f760(long param_1)

{
  FUN_00c9f770(param_1,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + 8));
  return;
}




void FUN_00c9f770(undefined8 param_1,undefined8 *param_2)

{
  FUN_00af97f4(param_1,0);
  FUN_00afa094(*(undefined4 *)(param_2 + 2),param_1,*param_2,*(undefined1 *)((long)param_2 + 0x14),0
              );
  return;
}




void FUN_00c9f7ac(long param_1)

{
  FUN_00c9f770(param_1,**(undefined8 **)(*(long *)(param_1 + 0x1a0) + 8));
  return;
}




void FUN_00c9f7bc(undefined8 param_1,undefined8 param_2)

{
  FUN_00c9f770(param_2,param_1);
  return;
}




void FUN_00c9f7cc(void)

{
  return;
}




void FUN_00c9f7d0(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x5c8) = param_2;
  *(undefined4 *)(param_1 + 0x5cc) = param_3;
  return;
}




void FUN_00c9f7dc(void)

{
  return;
}




void FUN_00c9f7e0(void)

{
  return;
}




void FUN_00c9f7e4(long param_1,ulong param_2)

{
  long lVar1;
  ushort uVar2;
  undefined8 uVar3;
  ushort *puVar4;
  
  FUN_00f01980();
  FUN_00c9f8fc(param_1,*(undefined1 *)(param_1 + 0x5d1));
  lVar1 = DAT_03210d00;
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + 0x10);
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00a99928(puVar4);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00a99998(puVar4,param_1,uVar3);
  FUN_00f022a0(param_1,puVar4);
  if ((param_2 & 1) != 0) {
    FUN_00c9fc3c(0x3e99999a,param_1);
    return;
  }
  return;
}




void FUN_00c9f8fc(long param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  ushort uVar6;
  char *pcVar7;
  char *pcVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  byte local_88 [16];
  void *local_78;
  ulong local_70;
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0;
  iVar2 = *(int *)(param_1 + 0x5c4);
  if (iVar2 == 3) {
    cVar5 = *(char *)(param_1 + 0x5d0);
    pcVar7 = "Effect_Coin_Legendary_Front_Flare_LQ";
    pcVar8 = "Effect_Coin_Legendary_Front_Flare";
  }
  else if (iVar2 == 2) {
    cVar5 = *(char *)(param_1 + 0x5d0);
    pcVar7 = "Effect_Coin_Epic_Front_Flare_LQ";
    pcVar8 = "Effect_Coin_Epic_Front_Flare";
  }
  else {
    if (iVar2 != 1) goto LAB_00c9f9c0;
    cVar5 = *(char *)(param_1 + 0x5d0);
    pcVar7 = "Effect_Coin_Rare_Front_Flare_LQ";
    pcVar8 = "Effect_Coin_Rare_Front_Flare";
  }
  if (cVar5 != '\0') {
    pcVar8 = pcVar7;
  }
  FUN_008fa54c(local_88,pcVar8);
  FUN_008fce60(&local_70,local_88);
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
LAB_00c9f9c0:
  uVar1 = local_70 >> 1 & 0x7f;
  if ((local_70 & 1) != 0) {
    uVar1 = local_68;
  }
  if (uVar1 != 0) {
    FUN_00f01980(param_1 + 0x4b0);
    lVar4 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar10 = (ushort *)0x0;
    }
    else {
      puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar10;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00a99abc(puVar10);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00a99b60(puVar10,param_1,&local_70);
    lVar4 = DAT_03210d00;
    if ((param_2 & 1) != 0) {
      uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar6 == 0xffff) {
        puVar11 = (ushort *)0x0;
      }
      else {
        puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
        if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = *puVar11;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_00a99abc(puVar11);
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
      pcVar7 = "Effect_Coin_New_Generic";
      if (*(char *)(param_1 + 0x5d0) != '\0') {
        pcVar7 = "Effect_Coin_New_Generic_LQ";
      }
      FUN_008fa54c(local_88,pcVar7);
      FUN_00a99b60(puVar11,param_1,local_88);
      if ((local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      lVar4 = DAT_03210d00;
      uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar6 == 0xffff) {
        puVar9 = (ushort *)0x0;
      }
      else {
        puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
        if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = *puVar9;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_00efcd98(puVar9);
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
      FUN_00efcea4(puVar9,puVar10,puVar11,0);
      puVar10 = puVar9;
    }
    FUN_00f022a0(param_1 + 0x4b0,puVar10);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c9fc3c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar2 * 0x40);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_027c27b8;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(code **)(puVar3 + 8) = FUN_00c9f7e0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  FUN_00f022a0(param_2,puVar3);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(param_1,puVar3);
  FUN_00f022a0(param_2,puVar3);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar2 * 0x40);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_027c27b8;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(code **)(puVar3 + 8) = FUN_00c9f7cc;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  FUN_00f022a0(param_2,puVar3);
  return;
}




void FUN_00c9fe8c(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00a99928(puVar3);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00a99998(puVar3,param_1,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + 0x20));
  FUN_00f022a0(param_1,puVar3);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3e4ccccd,puVar3);
  FUN_00f022a0(param_1,puVar3);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efec8c(puVar3);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efecd0(puVar3,"EVENT_3D_COIN_TALENT_UPGRADE_REVEAL");
  FUN_00f022a0(param_1,puVar3);
  FUN_00af9914(param_1);
  FUN_00c9f8fc(param_1,0);
  FUN_00ca00c8(param_1);
  return;
}

