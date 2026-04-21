// functions/00c58 — 15 functions
#include "libGameKindred.h"




void thunk_FUN_00c5802c(long *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((long)param_1 + 0x807c) = 0;
  uVar1 = (**(code **)(*param_1 + 0x138))();
  uVar1 = FUN_00c580ec(uVar1,param_1 + 0x641);
  FUN_00c580ec(uVar1,param_1 + 0xe05);
  uVar1 = FUN_00eff63c(0,0,0x3ecccccd,FUN_009a7608);
  FUN_00f022a0(param_1 + 0xe79,uVar1);
  if ((~*(uint *)((long)param_1 + 0x5f4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x5f4) = *(uint *)((long)param_1 + 0x5f4) | 0x7f80;
    FUN_0091ada4(param_1 + 0xae);
  }
  uVar1 = FUN_00efee28(0x3f800000,0x3ecccccd,FUN_009a7608);
  FUN_00f022a0(param_1 + 0xae,uVar1);
  return;
}




void FUN_00c5802c(long *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((long)param_1 + 0x807c) = 0;
  uVar1 = (**(code **)(*param_1 + 0x138))();
  uVar1 = FUN_00c580ec(uVar1,param_1 + 0x641);
  FUN_00c580ec(uVar1,param_1 + 0xe05);
  uVar1 = FUN_00eff63c(0,0,0x3ecccccd,FUN_009a7608);
  FUN_00f022a0(param_1 + 0xe79,uVar1);
  if ((~*(uint *)((long)param_1 + 0x5f4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x5f4) = *(uint *)((long)param_1 + 0x5f4) | 0x7f80;
    FUN_0091ada4(param_1 + 0xae);
  }
  uVar1 = FUN_00efee28(0x3f800000,0x3ecccccd,FUN_009a7608);
  FUN_00f022a0(param_1 + 0xae,uVar1);
  return;
}




void FUN_00c580ec(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  FUN_00f01980(param_2);
  if ((~*(uint *)(param_2 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 0x7f80;
    FUN_0091ada4(param_2);
  }
  uVar2 = FUN_00efee28(0,0x3ecccccd,FUN_009a7608);
  uVar3 = FUN_00eff008(0,0x41a00000,0x3ecccccd,FUN_009a7608);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcd98(puVar5);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar5,uVar2,uVar3,0);
  lVar1 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00f02308(param_2,puVar5,puVar6,0);
  return;
}




void FUN_00c582c8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c58300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x148) + 8))();
  return;
}




void FUN_00c58304(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  float *pfVar2;
  ulong uVar3;
  
  uVar3 = FUN_0093dbe8();
  if ((uVar3 & 1) == 0) {
    plVar1 = param_1 + 0xf22;
    FUN_00c38cf8(plVar1,param_2,1,param_3);
    FUN_00c38ecc(plVar1,1);
    FUN_00c38e08(plVar1,0);
    *(undefined4 *)(param_1 + 0xfac) = 0x3f000000;
    pfVar2 = (float *)(param_1 + 0xf2b);
    if ((*pfVar2 != 0.5) || (*(float *)((long)param_1 + 0x795c) != 0.5)) {
      pfVar2[0] = 0.5;
      pfVar2[1] = 0.5;
      FUN_0091ada4(plVar1);
    }
    *(undefined1 *)((long)param_1 + 0x807d) = 1;
                    /* WARNING: Could not recover jumptable at 0x00c583d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x138))(param_1);
    return;
  }
  return;
}




void FUN_00c583d8(long *param_1,uint param_2,uint param_3,int param_4,int param_5,undefined4 param_6
                 )

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint local_c0;
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
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  param_2 = param_2 ^ 1;
  uVar2 = (param_2 | param_3) & 1;
  *(uint *)((long)param_1 + 0x5f4) =
       *(uint *)((long)param_1 + 0x5f4) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x5f4) & 3 | uVar2 << 2;
  uVar4 = param_2 | param_3 ^ 1;
  *(uint *)((long)param_1 + 0x504) =
       *(uint *)((long)param_1 + 0x504) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x504) & 3 | uVar2 << 2;
  if ((uVar4 & 1) == 0) {
    *(uint *)((long)param_1 + 0x74c) = *(uint *)((long)param_1 + 0x74c) & 0xfffffffb;
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(char *)((long)param_1 + 0x807d) == '\0') goto LAB_00c587d8;
  FUN_00e70510(&local_78);
  if ((uVar4 & 1) == 0) {
    uVar6 = FUN_00e6ce7c("MENU_SKINS_HUB_CRAFTING_INSTRUCTIONS_DECRAFT_BLUEPRINT",0);
    FUN_00910394(&local_78,uVar6);
    uVar6 = FUN_00e6ce7c("MENU_SKINS_HUB_DECRAFT_BUTTON",0);
    FUN_00ab7498(param_1 + 0x652,uVar6);
LAB_00c58508:
    local_c0 = 1;
  }
  else {
    if ((param_3 & 1) == 0) {
      uVar6 = FUN_00e6ce7c("MENU_SKINS_HUB_CRAFTING_INSTRUCTIONS_MISSING_BLUEPRINT",0);
      FUN_00910394(&local_78,uVar6);
      goto LAB_00c58508;
    }
    uVar6 = FUN_00e6ce7c("MENU_SKINS_HUB_CRAFTING_INSTRUCTIONS_OWNED_BLUEPRINT",0);
    FUN_00910394(&local_78,uVar6);
    local_c0 = 0;
  }
  cVar3 = *(char *)(param_1[0x100e] + 0x34);
  FUN_00e705c8(&local_88,&DAT_01b9db64);
  FUN_00e705c8(&local_98,"{0,320,340,340}");
  FUN_00e713f0(&local_78,0,&local_88,&local_98);
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
  FUN_00e705c8(&local_88,"[/EM]");
  FUN_00e705c8(&local_98,&DAT_01bd12d3);
  FUN_00e713f0(&local_78,0,&local_88,&local_98);
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
  FUN_00e70510(&local_88);
  FUN_00e70e18(&local_88,&DAT_01bb6d43,param_5);
  FUN_00e70510(&local_98);
  FUN_00e70e18(&local_98,&DAT_01bb6d43,param_4);
  uVar6 = FUN_00e6ce7c(*(undefined8 *)(param_1[0x100e] + 0x18),0);
  thunk_FUN_00e7051c(&local_a8,uVar6);
  FUN_00e705c8(&local_b8,"[SKIN_NAME]");
  FUN_00e71248(&local_78,0,&local_b8,&local_a8);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
    local_b8 = 0;
    local_b0 = (void *)0x0;
  }
  FUN_00e705c8(&local_b8,"[NUM_ESSENCE]");
  FUN_00e71248(&local_78,0,&local_b8,&local_88);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
    local_b8 = 0;
    local_b0 = (void *)0x0;
  }
  local_c0 = local_c0 & cVar3 == '\0';
  if ((uVar4 & 1) == 0) {
    puVar7 = &local_78;
LAB_00c586cc:
    FUN_00f0d75c(param_1 + 0x90a,puVar7);
  }
  else if ((param_3 & 1) == 0) {
    puVar7 = (undefined8 *)FUN_00e6ce7c("MENU_SKINS_HUB_CRAFTING_BLUEPRINT_MISSING",0);
    goto LAB_00c586cc;
  }
  FUN_00f0d75c(param_1 + 0x96c,&local_78);
  FUN_00b09454(param_1 + 0x992,param_5 <= param_4 & param_3 & param_2);
  *(uint *)((long)param_1 + 0x48d4) =
       local_c0 << 2 | local_c0 << 6 | *(uint *)((long)param_1 + 0x48d4) & 0xffffffbb;
  FUN_00f0d75c(param_1 + 0xefc,&local_88);
  if (*(char *)((long)param_1 + 0x807e) == '\0') {
    FUN_00f0d75c(param_1 + 0xddf,&local_98);
  }
  plVar1 = param_1 + 0xf22;
  FUN_00c38e8c(plVar1,param_6);
  FUN_00c38e9c(plVar1,param_4);
  FUN_00c38eac(plVar1,param_3 & 1);
  *(uint *)((long)param_1 + 0x7994) =
       *(uint *)((long)param_1 + 0x7994) & 0xffffffe0 |
       *(uint *)((long)param_1 + 0x7994) & 0xf | (param_3 & 1) << 4;
  (**(code **)(*param_1 + 0xe8))(param_1);
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
LAB_00c587d8:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c5880c(long param_1)

{
  FUN_00c396c4(param_1 + 0x7910);
  return;
}




void FUN_00c58818(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  uVar3 = FUN_00a07af0();
  iVar2 = FUN_00a08548(uVar3,*(undefined8 *)(param_1 + 0x8070));
  *(float *)(param_1 + 0x8078) = (float)(param_2 - iVar2);
  uVar3 = FUN_00efed6c(0x3dcccccd);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efeb30(puVar5);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efeb88((float)(param_2 - iVar2),(float)param_2,puVar5,(float *)(param_1 + 0x8078));
  FUN_00efcb24(puVar5,FUN_00c58a18);
  FUN_00efcac4(0x3f800000,puVar5);
  lVar1 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar4 * 0x40);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_027c27b8;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(code **)(puVar6 + 8) = FUN_00c58a58;
  *(long *)(puVar6 + 0x10) = param_1;
  FUN_00f02308(param_1,uVar3,puVar5,puVar6,0);
  *(undefined1 *)(param_1 + 0x807e) = 1;
  return;
}




float FUN_00c58a18(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = exp2f((param_1 * -10.0) / param_4);
  return (1.0 - fVar1) * param_3 + param_2;
}




void FUN_00c58a58(long param_1)

{
  *(undefined1 *)(param_1 + 0x807e) = 0;
  return;
}




void FUN_00c58a64(long param_1)

{
  *(undefined1 *)(param_1 + 0x807e) = 0;
  return;
}




void FUN_00c58a70(long param_1)

{
  *(undefined1 *)(param_1 + 0x807c) = 0;
  return;
}




void FUN_00c58a7c(long param_1)

{
  long lVar1;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x807e) != '\0') {
    FUN_00e70510(&local_38);
    FUN_00e70e18((double)*(float *)(param_1 + 0x8078),&local_38,&DAT_01b9f3eb);
    FUN_00f0d75c(param_1 + 0x6ef8,&local_38);
    FUN_00c57a9c(param_1);
    if (local_30 != (void *)0x0) {
      operator_delete__(local_30);
      local_38 = 0;
      local_30 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c58b18(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 local_88;
  undefined4 uStack_84;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar9 = tpidr_el0;
  local_78 = *(long *)(lVar9 + 0x28);
  local_80 = (float)(**(code **)(*param_3 + 0x48))();
  plVar1 = param_3 + 0x72;
  local_80 = local_80 + -12.0;
  fStack_7c = param_2 + -12.0;
  FUN_00f13f18(plVar1,&local_80);
  plVar2 = param_3 + 0x54;
  fVar13 = fStack_7c + 6.0;
  FUN_00f13f08(local_80 + 6.0,fVar13,plVar2);
  fVar11 = (float)FUN_00f0e700(plVar2);
  FUN_00f0e700(plVar2);
  FUN_00f10644(0x41a00000,fVar11 + -4.0,0x41a00000,0x41a00000,fVar13 + -4.0,0x41a00000,
               param_3 + 0x2a);
  FUN_00f13f08(local_80,fStack_7c * 0.5,param_3 + 0x90);
  FUN_00f07940(0,0,plVar1,8,param_3,8);
  FUN_00f07940(0,0,plVar2,8,param_3,8);
  FUN_00f07940(0,0,param_3 + 0x2a,8,param_3,8);
  uVar14 = 0;
  FUN_00f07940(0,param_3 + 0x90,3,plVar1,3);
  uVar10 = 0;
  plVar2 = param_3 + 0x652;
  if (*(char *)(param_3[0x100e] + 0x34) == '\0') {
    uVar10 = (uint)(*(int *)(param_3[0x100e] + 0x20) != 0) << 2;
  }
  *(uint *)((long)param_3 + 0x3314) = *(uint *)((long)param_3 + 0x3314) & 0xfffffffb | uVar10;
  if ((*(float *)(param_3 + 0x65b) != 1.3) || (*(float *)((long)param_3 + 0x32dc) != 1.3)) {
    param_3[0x65b] = 0x3fa666663fa66666;
    FUN_0091ada4(plVar2);
  }
  plVar3 = param_3 + 0xea;
  if ((*(float *)(param_3 + 0xf3) != 1.3) || (*(float *)((long)param_3 + 0x79c) != 1.3)) {
    param_3[0xf3] = 0x3fa666663fa66666;
    FUN_0091ada4(plVar3);
  }
  FUN_00f07b18(0x42700000,plVar3,3,plVar2,1);
  FUN_00f07b18(0,plVar3,5,plVar2,5);
  uVar10 = *(uint *)((long)param_3 + 0x3314);
  plVar4 = param_3 + 0x90a;
  *(uint *)((long)param_3 + 0x3314) = uVar10 & 0xffffff80 | uVar10 & 0x3f | (uVar10 >> 2 & 1) << 6;
  local_88 = FUN_00f0d548(plVar4);
  uStack_84 = uVar14;
  FUN_00f13f18(plVar4,&local_88);
  uVar12 = (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f0db64(uVar12,0,0x3f800000,plVar4);
  FUN_00f07b18(0x41400000,plVar4,0,plVar2,2);
  FUN_00f07b18(0,plVar4,4,plVar2,4);
  uVar10 = *(uint *)((long)param_3 + 0x2c44);
  uVar7 = *(uint *)((long)param_3 + 0x74c);
  uVar8 = *(byte *)((long)param_3 + 0x9bc) >> 4 & 1;
  *(uint *)((long)param_3 + 0x74c) = uVar7 & 0xffffff80 | uVar7 & 0x3f | (uVar7 >> 2 & 1) << 6;
  plVar2 = param_3 + 0x5c9;
  plVar5 = param_3 + 0x5a3;
  plVar6 = param_3 + 0x578;
  *(uint *)((long)param_3 + 0x2c44) =
       uVar10 & 0xffffff80 | uVar10 & 0x38 | uVar10 & 3 | uVar8 << 2 | uVar8 << 6;
  FUN_00f07b18(0x41400000,plVar2,3,plVar5,1);
  FUN_00f07b18(0,plVar2,5,plVar5,5);
  FUN_00f07b18(0x40c00000,param_3 + 0x5e7,3,plVar2,1);
  FUN_00f07b18(0,param_3 + 0x5e7,5,plVar2,5);
  FUN_00f13238(plVar6);
  FUN_00f07b18(0x41400000,plVar6,0,plVar3,2);
  FUN_00f07b18(0,plVar6,4,plVar3,4);
  FUN_00f13238(param_3 + 0xae);
  if ((*(byte *)((long)param_3 + 0x2c44) >> 2 & 1) != 0) {
    FUN_00f07b18(0,plVar4,5,plVar5,5);
  }
  FUN_00c576f8(param_3);
  FUN_00f07940(0,0xc1c00000,param_3 + 0xae,6,plVar1,6);
  if (*(long *)(lVar9 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c58f2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fe228;
  param_1[0xff0] = &PTR_FUN_028266f0;
  param_1[0x1007] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x100a);
  FUN_00f13d08(param_1 + 0xff0);
  FUN_00c38c0c(param_1 + 0xf22);
  FUN_00f0d3a4(param_1 + 0xefc);
  param_1[0xede] = &PTR_FUN_028266f0;
  param_1[0xef5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xef8);
  FUN_00f13d08(param_1 + 0xede);
  param_1[0xeb5] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0xecc);
  FUN_00f13d08(param_1 + 0xeb5);
  FUN_00afc0a4(param_1 + 0xe79);
  param_1[0xe4e] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0xe65);
  FUN_00f13d08(param_1 + 0xe4e);
  param_1[0xe30] = &PTR_FUN_028266f0;
  param_1[0xe47] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe4a);
  FUN_00f13d08(param_1 + 0xe30);
  param_1[0xe05] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0xe1c);
  FUN_00f13d08(param_1 + 0xe05);
  FUN_00f0d3a4(param_1 + 0xddf);
  param_1[0xdc1] = &PTR_FUN_028266f0;
  param_1[0xdd8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xddb);
  FUN_00f13d08(param_1 + 0xdc1);
  FUN_00f0d3a4(param_1 + 0xd9b);
  param_1[0xd70] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0xd87);
  FUN_00f13d08(param_1 + 0xd70);
  param_1[0x992] = &PTR_FUN_027d5058;
  FUN_00f13d08(param_1 + 0xd39);
  FUN_00f01868(param_1 + 0xd28);
  FUN_00f13d08(param_1 + 0xcf4);
  FUN_00f01868(param_1 + 0xce3);
  FUN_00f0d3a4(param_1 + 0xcbd);
  FUN_00f0d3a4(param_1 + 0xc97);
  param_1[0xc79] = &PTR_FUN_028266f0;
  param_1[0xc90] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc93);
  FUN_00f13d08(param_1 + 0xc79);
  param_1[0xc5b] = &PTR_FUN_028266f0;
  param_1[0xc72] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc75);
  FUN_00f13d08(param_1 + 0xc5b);
  FUN_00f01868(param_1 + 0xc4a);
  FUN_009c7fa8(param_1 + 0x992);
  FUN_00f0d3a4(param_1 + 0x96c);
  param_1[0x94e] = &PTR_FUN_028266f0;
  param_1[0x965] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x968);
  FUN_00f13d08(param_1 + 0x94e);
  param_1[0x930] = &PTR_FUN_028266f0;
  param_1[0x947] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x94a);
  FUN_00f13d08(param_1 + 0x930);
  FUN_00f0d3a4(param_1 + 0x90a);
  FUN_009c7fa8(param_1 + 0x652);
  FUN_00f01868(param_1 + 0x641);
  FUN_00f13d08(param_1 + 0x60d);
  FUN_00f0d3a4(param_1 + 0x5e7);
  param_1[0x5c9] = &PTR_FUN_028266f0;
  param_1[0x5e0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5e3);
  FUN_00f13d08(param_1 + 0x5c9);
  FUN_00f0d3a4(param_1 + 0x5a3);
  param_1[0x578] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x58f);
  FUN_00f13d08(param_1 + 0x578);
  param_1[0x559] = &PTR_FUN_028266f0;
  param_1[0x570] = &PTR_FUN_02826850;
  param_1[0xea] = &PTR_FUN_027d51f0;
  FUN_00f0a79c(param_1 + 0x573);
  FUN_00f13d08(param_1 + 0x559);
  param_1[0x53b] = &PTR_FUN_028266f0;
  param_1[0x552] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x555);
  FUN_00f13d08(param_1 + 0x53b);
  FUN_00f0d3a4(param_1 + 0x515);
  param_1[0x4f7] = &PTR_FUN_028266f0;
  param_1[0x50e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x511);
  FUN_00f13d08(param_1 + 0x4f7);
  FUN_00f01868(param_1 + 0x4e6);
  param_1[0x4c8] = &PTR_FUN_028266f0;
  param_1[0x4df] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4e2);
  FUN_00f13d08(param_1 + 0x4c8);
  param_1[0xea] = &PTR_FUN_027d5058;
  FUN_00f13d08(param_1 + 0x491);
  FUN_00f01868(param_1 + 0x480);
  FUN_00f13d08(param_1 + 0x44c);
  FUN_00f01868(param_1 + 0x43b);
  FUN_00f0d3a4(param_1 + 0x415);
  FUN_00f0d3a4(param_1 + 0x3ef);
  param_1[0x3d1] = &PTR_FUN_028266f0;
  param_1[1000] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3eb);
  FUN_00f13d08(param_1 + 0x3d1);
  param_1[0x3b3] = &PTR_FUN_028266f0;
  param_1[0x3ca] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3cd);
  FUN_00f13d08(param_1 + 0x3b3);
  FUN_00f01868(param_1 + 0x3a2);
  FUN_009c7fa8(param_1 + 0xea);
  FUN_00f01868(param_1 + 0xd9);
  param_1[0xae] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0xc5);
  FUN_00f13d08(param_1 + 0xae);
  param_1[0x90] = &PTR_FUN_028266f0;
  param_1[0xa7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xaa);
  FUN_00f13d08(param_1 + 0x90);
  param_1[0x72] = &PTR_FUN_028266f0;
  param_1[0x89] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8c);
  FUN_00f13d08(param_1 + 0x72);
  param_1[0x54] = &PTR_FUN_028266f0;
  param_1[0x6b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6e);
  FUN_00f13d08(param_1 + 0x54);
  param_1[0x2a] = &PTR_FUN_02826f38;
  param_1[0x41] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x44);
  FUN_00f13d08(param_1 + 0x2a);
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}

