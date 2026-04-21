// functions/00b0a — 10 functions
#include "libGameKindred.h"




void FUN_00b0a0b0(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar1 = param_3 + 0x1c8;
  if (*(char *)(param_3 + 0x1313) == '\0') {
    fVar4 = (float)FUN_00f0e700(lVar1);
    uVar6 = NEON_fminnm(fVar4 * 0.2,0x428c0000);
    FUN_00f0e700(lVar1);
    local_60 = uVar6;
    uStack_5c = param_2;
    FUN_00f13f18(param_3 + 0x2b8,&local_60);
    fVar4 = (float)FUN_00f0e700(lVar1);
    uVar6 = NEON_fminnm(fVar4 * 0.2,0x428c0000);
    FUN_00f0e700(lVar1);
    local_60 = uVar6;
    uStack_5c = param_2;
    FUN_00f13f18(param_3 + 0x3a8,&local_60);
    *(uint *)(param_3 + 0x51c) = *(uint *)(param_3 + 0x51c) & 0xfffffffb;
  }
  else {
    fVar4 = (float)FUN_00f0e700(lVar1);
    FUN_00f0e700(lVar1);
    FUN_00f13f08(fVar4 * 0.5,param_3 + 0x2b8);
    fVar4 = (float)FUN_00f0e700(lVar1);
    FUN_00f0e700(lVar1);
    FUN_00f13f08(fVar4 * 0.5,param_3 + 0x3a8);
    local_60 = FUN_00f0e700(lVar1);
    uStack_5c = param_2;
    FUN_00f13f18(param_3 + 0x498,&local_60);
    *(uint *)(param_3 + 0x51c) = *(uint *)(param_3 + 0x51c) | 4;
    if (*(float *)(param_3 + 0x12f8) != 0.0) {
      fVar4 = (float)FUN_00f0e700(lVar1);
      uVar2 = *(uint *)(param_3 + 0x42c);
      fVar5 = *(float *)(param_3 + 0x12f8) * 0.5;
      fVar5 = (fVar4 - fVar5) / fVar5;
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      if ((uVar2 >> 7 & 0xff) != (int)(fVar5 * 255.0)) {
        *(uint *)(param_3 + 0x42c) =
             uVar2 & 0xffff8000 | uVar2 & 0x7f | ((int)(fVar5 * 255.0) & 0xffU) << 7;
        FUN_0091ada4(param_3 + 0x3a8);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b0a264(undefined1 param_1 [16],float param_2,long *param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,ulong param_7,int param_8,uint param_9)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (0 < param_8) {
    *(int *)((long)param_3 + 0x130c) = param_8;
  }
  if ((param_7 & 1) == 0) {
    FUN_00b09fa8(param_3,(int)param_3[0x261],*(undefined4 *)((long)param_3 + 0x130c));
    FUN_00b0a8a8(param_3,param_5,param_5,param_6);
  }
  else {
    FUN_00b0a480(param_3,param_4,param_5,param_6,param_9 & 1);
  }
  if (*(char *)((long)param_3 + 0x1314) != '\0') {
    uVar3 = FUN_00e6ce7c("MENU_PROGRESS_BAR_VALUE",0);
    thunk_FUN_00e7051c(&local_58,uVar3);
    FUN_00e70510(&local_68);
    FUN_00e70e18(&local_68,"%u",*(undefined4 *)((long)param_3 + 0x1304));
    FUN_00e705c8(&local_78,"[VALUE]");
    FUN_00e71248(&local_58,0,&local_78,&local_68);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
      local_78 = 0;
      local_70 = (void *)0x0;
    }
    FUN_00e70510(&local_78);
    FUN_00e70e18(&local_78,"%u",*(undefined4 *)((long)param_3 + 0x130c));
    FUN_00e705c8(&local_88,"[MAX_VALUE]");
    FUN_00e71248(&local_58,0,&local_88,&local_78);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
    plVar1 = param_3 + 0x205;
    FUN_00f0d75c(plVar1,&local_58);
    fVar4 = (float)(**(code **)(*param_3 + 0x50))(param_3);
    fVar5 = (float)FUN_00f01c20(plVar1);
    fVar4 = fVar4 * 0.5 - fVar5 * 0.5;
    FUN_00f01c20(plVar1);
    if ((*(float *)(param_3 + 0x20d) != fVar4) ||
       (*(float *)((long)param_3 + 0x106c) != param_2 * -0.5)) {
      *(float *)(param_3 + 0x20d) = fVar4;
      *(float *)((long)param_3 + 0x106c) = param_2 * -0.5;
      FUN_0091ada4(plVar1);
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
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b0a480(undefined8 param_1,long *param_2,int param_3,undefined8 param_4,undefined8 param_5
                 ,ulong param_6)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort uVar11;
  ushort *puVar12;
  float fVar13;
  float fVar14;
  
  iVar3 = (int)param_2[0x261];
  iVar4 = *(int *)((long)param_2 + 0x130c);
  if ((param_6 & 1) != 0) {
    iVar2 = param_3;
    if (iVar4 <= param_3) {
      iVar2 = iVar4;
    }
    param_3 = iVar3;
    if (iVar3 <= iVar2) {
      param_3 = iVar2;
    }
  }
  uVar10 = 0;
  fVar13 = (float)NEON_fminnm((float)(param_3 - iVar3) / (float)(iVar4 - iVar3),0x3f800000);
  plVar1 = param_2 + 0x39;
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar13 = *(float *)(param_2 + 0x25f) * fVar13;
  FUN_00f0e700(plVar1);
  (**(code **)(*param_2 + 0x158))(param_2);
  uVar6 = FUN_00eff430(fVar13,uVar10,param_1,plVar1,FUN_0091aa80);
  uVar7 = FUN_00eff108(param_1,plVar1,param_4,FUN_0091aa80,2);
  lVar5 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar12;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efcd98(puVar12);
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar12,uVar6,uVar7,0);
  FUN_00f01980(plVar1);
  FUN_00f022a0(plVar1,puVar12);
  lVar5 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar11 * 0x40);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar12;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efc8e8(puVar12);
    *(undefined ***)puVar12 = &PTR_FUN_027c27b8;
    puVar12[0xc] = 0;
    puVar12[0xd] = 0;
    puVar12[0xe] = 0;
    puVar12[0xf] = 0;
    puVar12[0x10] = 0;
    puVar12[0x11] = 0;
    puVar12[0x12] = 0;
    puVar12[0x13] = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  *(code **)(puVar12 + 8) = FUN_00b0b9e4;
  *(long **)(puVar12 + 0x10) = param_2;
  FUN_00f022a0(plVar1,puVar12);
  plVar1 = param_2 + 0x57;
  uVar6 = FUN_00eff430(fVar13 * 0.5,uVar10,param_1,plVar1,FUN_0091aa80);
  FUN_00f01980(plVar1);
  FUN_00f022a0(plVar1,uVar6);
  plVar1 = param_2 + 0x75;
  uVar6 = FUN_00eff430(fVar13 * 0.5,uVar10,param_1,plVar1,FUN_0091aa80);
  fVar14 = (fVar13 - *(float *)(param_2 + 0x25f) * 0.5) / (*(float *)(param_2 + 0x25f) * 0.5);
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  uVar7 = FUN_00efee28(fVar14,param_1,FUN_0091aa80);
  uVar8 = FUN_00eff108(param_1,plVar1,param_5,FUN_0091aa80,2);
  uVar9 = FUN_00efef08(fVar13,*(undefined4 *)((long)param_2 + 0x20c),param_1,FUN_0091aa80);
  lVar5 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar12;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efcd98(puVar12);
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar12,uVar6,uVar7,uVar8,uVar9,0);
  FUN_00f01980(plVar1);
  FUN_00f022a0(plVar1,puVar12);
  plVar1 = param_2 + 0x93;
  uVar10 = FUN_00eff430(fVar13,uVar10,param_1,plVar1,FUN_0091aa80);
  FUN_00f01980(plVar1);
  FUN_00f022a0(plVar1,uVar10);
  *(int *)((long)param_2 + 0x1304) = param_3;
  return;
}




void FUN_00b0a8a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00f0e670(param_1 + 0x1c8,param_2,2);
  FUN_00f0e670(param_1 + 0x610,param_3,2);
  FUN_00f0e670(param_1 + 0x3a8,param_4,2);
  return;
}




void FUN_00b0a8fc(long param_1)

{
  FUN_00f0d75c(param_1 + 0x1028);
  *(undefined1 *)(param_1 + 0x1314) = 1;
  return;
}




void FUN_00b0a930(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,byte param_7)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  
  *(byte *)(param_3 + 0x1313) = param_7 & 1;
  uVar8 = param_2;
  FUN_00f112f0(param_3 + 0x1158,0);
  fVar6 = (float)uVar8;
  uVar4 = *(uint *)(param_3 + 0x33c);
  uVar3 = uVar4 >> 7 & 0xff;
  if (*(char *)(param_3 + 0x1313) == '\0') {
    if (uVar3 != 0x4c) {
      *(uint *)(param_3 + 0x33c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x2600;
      FUN_0091ada4(param_3 + 0x2b8);
    }
    uVar4 = *(uint *)(param_3 + 0x42c);
    if ((uVar4 & 0x7f80) == 0x3900) goto LAB_00b0aa0c;
    iVar5 = 0x72;
  }
  else {
    if (uVar3 != 0x99) {
      *(uint *)(param_3 + 0x33c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x4c80;
      FUN_0091ada4(param_3 + 0x2b8);
    }
    uVar4 = *(uint *)(param_3 + 0x42c);
    if ((uVar4 & 0x7f80) == 0x4c80) goto LAB_00b0aa0c;
    iVar5 = 0x99;
  }
  *(uint *)(param_3 + 0x42c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | iVar5 << 7;
  FUN_0091ada4(param_3 + 0x3a8);
LAB_00b0aa0c:
  lVar1 = param_3 + 0x1c8;
  fVar9 = (float)param_2;
  if (*(float *)(param_3 + 0x12fc) == 0.0) {
    FUN_00f0e700(lVar1);
    fVar6 = ((fVar6 + (fVar6 - fVar9) * -0.5) / fVar6) * 1.5;
    if ((*(float *)(param_3 + 0x928) != fVar6) || (*(float *)(param_3 + 0x92c) != fVar6)) {
      *(float *)(param_3 + 0x928) = fVar6;
      *(float *)(param_3 + 0x92c) = fVar6;
      FUN_0091ada4(param_3 + 0x8e0);
    }
  }
  FUN_00f13f08(0,param_2,lVar1);
  fVar6 = *(float *)(param_3 + 0x1300) * fVar9;
  FUN_00f13f08(0,fVar6,param_3 + 0x610);
  lVar2 = param_3 + 0xac0;
  FUN_00f0e700(lVar1);
  FUN_00b1265c((float)param_1 + 4.0,fVar6 + 4.0,0x40800000,lVar2);
  uVar7 = 0xc0800000;
  if ((*(float *)(param_3 + 0xb00) != -4.0) || (*(float *)(param_3 + 0xb04) != 0.0)) {
    *(undefined8 *)(param_3 + 0xb00) = 0xc0800000;
    uVar7 = 0xc0800000;
    FUN_0091ada4(lVar2);
  }
  FUN_00b128a0(0x3eb33333,lVar2,&DAT_01bee7fa);
  *(float *)(param_3 + 0x12f8) = (float)param_1;
  FUN_00f0e700(lVar1);
  *(undefined4 *)(param_3 + 0x12fc) = uVar7;
  if (*(float *)(param_3 + 0x744) != fVar9 * -0.5) {
    *(float *)(param_3 + 0x744) = fVar9 * -0.5;
    FUN_0091ada4(param_3 + 0x700);
  }
  if (*(float *)(param_3 + 0x834) != fVar9 * 0.5) {
    *(float *)(param_3 + 0x834) = fVar9 * 0.5;
    FUN_0091ada4(param_3 + 0x7f0);
  }
  *(uint *)(param_3 + 0x694) = *(uint *)(param_3 + 0x694) & 0xfffffffb;
  FUN_00b09fa8(param_3,param_4,param_5,param_6);
  FUN_00f13f08(param_1,param_2,param_3);
  return;
}




void FUN_00b0ab94(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_PROGRESS_BAR_ROLLED_OVER");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b0ac04(undefined8 param_1,undefined8 param_2)

{
  FUN_00b0ab94(param_2);
  return;
}




void FUN_00b0ac0c(long param_1)

{
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  return;
}




void FUN_00b0ac1c(float param_1,float param_2,long param_3,int param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  code *pcVar11;
  ushort uVar12;
  ushort *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_b0;
  void *local_a0;
  long local_98;
  
  lVar8 = tpidr_el0;
  local_98 = *(long *)(lVar8 + 0x28);
  lVar1 = param_3 + 0x610;
  uVar4 = *(uint *)(param_3 + 0x130c);
  uVar2 = *(uint *)(param_3 + 0x1308) & ((int)*(uint *)(param_3 + 0x1308) >> 0x1f ^ 0xffffffffU);
  if ((int)uVar4 <= (int)(uVar2 + 1)) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_3 + 0x1308) = uVar2;
  *(uint *)(param_3 + 0x130c) = uVar4;
  uVar3 = *(uint *)(param_3 + 0x1304);
  if ((int)*(uint *)(param_3 + 0x1304) <= (int)uVar2) {
    uVar3 = uVar2;
  }
  uVar2 = uVar4;
  iVar9 = (param_4 - uVar4) + uVar3;
  if ((int)uVar3 <= (int)uVar4) {
    uVar2 = uVar3;
    iVar9 = param_4;
  }
  *(uint *)(param_3 + 0x1304) = uVar2;
  *(uint *)(param_3 + 0x694) = *(uint *)(param_3 + 0x694) | 4;
  FUN_00f01980(lVar1);
  FUN_00f0e700(lVar1);
  FUN_00f13f08(0,lVar1);
  *(uint *)(param_3 + 0x24c) = *(uint *)(param_3 + 0x24c) | 4;
  FUN_00f01980(param_3);
  fVar14 = (float)FUN_00f0e700(param_3 + 0x1c8);
  fVar16 = *(float *)(param_3 + 0x650);
  if (fVar16 != fVar14) {
    *(float *)(param_3 + 0x650) = fVar14;
    FUN_0091ada4(lVar1);
  }
  lVar10 = DAT_03210d00;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  if (uVar4 == param_5 || (int)(iVar9 + uVar2) <= (int)uVar4) {
    iVar5 = *(int *)(param_3 + 0x130c);
    iVar6 = *(int *)(param_3 + 0x1308);
    uVar12 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar12 == 0xffff) {
      puVar13 = (ushort *)0x0;
    }
    else {
      puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar12 * 0x40 + 0x10);
      if (uVar12 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar12 = 0xffff;
      }
      else {
        uVar12 = *puVar13;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar12;
      *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
      FUN_00efcad4(puVar13);
      *(undefined ***)puVar13 = &PTR_FUN_027c1a60;
      *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
    }
    FUN_00efcac4(param_2,puVar13);
    FUN_00f022a0(lVar1,puVar13);
    FUN_00b0b730(param_3);
    lVar10 = DAT_03210d00;
    if (*(char *)(param_3 + 0x1310) != '\0') {
      uVar12 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar12 == 0xffff) {
        puVar13 = (ushort *)0x0;
      }
      else {
        puVar13 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar12 * 0x40);
        if (uVar12 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar12 = 0xffff;
        }
        else {
          uVar12 = *puVar13;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar12;
        *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
        FUN_00efc8e8(puVar13);
        puVar13[8] = 0;
        puVar13[9] = 0;
        puVar13[10] = 0;
        puVar13[0xb] = 0;
        puVar13[0xc] = 0;
        puVar13[0xd] = 0;
        puVar13[0xe] = 0;
        puVar13[0xf] = 0;
        puVar13[0x14] = 0;
        puVar13[0x10] = 0;
        puVar13[0x11] = 0;
        puVar13[0x12] = 0;
        puVar13[0x13] = 0;
        *(undefined ***)puVar13 = &PTR_FUN_027d0db0;
        *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
      }
      FUN_008fa54c(&local_b0,"build://Sounds/UI.assetbundle/ui_level_up_bar_loop_1.mp3");
      FUN_00a99c48(puVar13,&local_b0,0,0);
      if (((byte)local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      FUN_00f022a0(lVar1,puVar13);
    }
    lVar10 = DAT_03210d00;
    uVar12 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar12 == 0xffff) {
      puVar13 = (ushort *)0x0;
    }
    else {
      puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar12 * 0x40 + 0x10);
      if (uVar12 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar12 = 0xffff;
      }
      else {
        uVar12 = *puVar13;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar12;
      *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
      FUN_00efea00(puVar13);
      *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
    }
    fVar14 = *(float *)(param_3 + 0x12f8);
    FUN_00f0e700(lVar1);
    local_b0 = CONCAT44(fVar16,((float)iVar9 / (float)(iVar5 - iVar6)) * fVar14);
    FUN_00efea4c(puVar13,lVar1,&local_b0);
    FUN_00efcac4(param_1,puVar13);
    pcVar11 = FUN_009a71a4;
  }
  else {
    iVar5 = *(int *)(param_3 + 0x130c);
    iVar6 = *(int *)(param_3 + 0x1308);
    uVar12 = *(ushort *)(DAT_03210d00 + 0x20010);
    iVar7 = iVar5 - *(int *)(param_3 + 0x1304);
    if ((ulong)uVar12 == 0xffff) {
      puVar13 = (ushort *)0x0;
    }
    else {
      puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar12 * 0x40 + 0x10);
      if (uVar12 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar12 = 0xffff;
      }
      else {
        uVar12 = *puVar13;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar12;
      *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
      FUN_00efcad4(puVar13);
      *(undefined ***)puVar13 = &PTR_FUN_027c1a60;
      *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
    }
    fVar14 = (float)iVar7;
    FUN_00efcac4(param_2,puVar13);
    FUN_00f022a0(lVar1,puVar13);
    FUN_00b0b730(param_3);
    lVar10 = DAT_03210d00;
    if (*(char *)(param_3 + 0x1310) != '\0') {
      uVar12 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar12 == 0xffff) {
        puVar13 = (ushort *)0x0;
      }
      else {
        puVar13 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar12 * 0x40);
        if (uVar12 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar12 = 0xffff;
        }
        else {
          uVar12 = *puVar13;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar12;
        *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
        FUN_00efc8e8(puVar13);
        puVar13[8] = 0;
        puVar13[9] = 0;
        puVar13[10] = 0;
        puVar13[0xb] = 0;
        puVar13[0xc] = 0;
        puVar13[0xd] = 0;
        puVar13[0xe] = 0;
        puVar13[0xf] = 0;
        puVar13[0x14] = 0;
        puVar13[0x10] = 0;
        puVar13[0x11] = 0;
        puVar13[0x12] = 0;
        puVar13[0x13] = 0;
        *(undefined ***)puVar13 = &PTR_FUN_027d0db0;
        *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
      }
      FUN_008fa54c(&local_b0,"build://Sounds/UI.assetbundle/ui_level_up_bar_loop_1.mp3");
      FUN_00a99c48(puVar13,&local_b0,0,0);
      if (((byte)local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      FUN_00f022a0(lVar1,puVar13);
    }
    lVar10 = DAT_03210d00;
    uVar12 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar12 == 0xffff) {
      puVar13 = (ushort *)0x0;
    }
    else {
      puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar12 * 0x40 + 0x10);
      if (uVar12 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar12 = 0xffff;
      }
      else {
        uVar12 = *puVar13;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar12;
      *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
      FUN_00efea00(puVar13);
      *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
    }
    fVar15 = *(float *)(param_3 + 0x12f8);
    FUN_00f0e700(lVar1);
    local_b0 = CONCAT44(fVar16,(fVar14 / (float)(iVar5 - iVar6)) * fVar15);
    FUN_00efea4c(puVar13,lVar1,&local_b0);
    FUN_00efcac4(param_1 * (fVar14 / (float)iVar9),puVar13);
    FUN_00efcb24(puVar13,FUN_009a71a4);
    FUN_00f022a0(lVar1,puVar13);
    lVar10 = DAT_03210d00;
    uVar12 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar12 == 0xffff) {
      puVar13 = (ushort *)0x0;
    }
    else {
      puVar13 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar12 * 0x40);
      if (uVar12 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar12 = 0xffff;
      }
      else {
        uVar12 = *puVar13;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar12;
      *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
      FUN_00efc8e8(puVar13);
      *(undefined ***)puVar13 = &PTR_FUN_027c27b8;
      puVar13[0xc] = 0;
      puVar13[0xd] = 0;
      puVar13[0xe] = 0;
      puVar13[0xf] = 0;
      puVar13[0x10] = 0;
      puVar13[0x11] = 0;
      puVar13[0x12] = 0;
      puVar13[0x13] = 0;
      puVar13[8] = 0;
      puVar13[9] = 0;
      puVar13[10] = 0;
      puVar13[0xb] = 0;
      *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
    }
    *(code **)(puVar13 + 8) = FUN_00b0ac04;
    puVar13[0x10] = 0;
    puVar13[0x11] = 0;
    puVar13[0x12] = 0;
    puVar13[0x13] = 0;
    FUN_00f022a0(lVar1,puVar13);
    lVar10 = DAT_03210d00;
    uVar12 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar12 == 0xffff) {
      puVar13 = (ushort *)0x0;
    }
    else {
      puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar12 * 0x40 + 0x10);
      if (uVar12 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar12 = 0xffff;
      }
      else {
        uVar12 = *puVar13;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar12;
      *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
      FUN_00efcad4(puVar13);
      *(undefined ***)puVar13 = &PTR_FUN_027c1a60;
      *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
    }
    FUN_00efcac4(0,puVar13);
    FUN_00f022a0(lVar1,puVar13);
    iVar5 = *(int *)(param_3 + 0x130c);
    *(uint *)(param_3 + 0x130c) = param_5;
    *(int *)(param_3 + 0x1308) = iVar5;
    *(int *)(param_3 + 0x1304) = *(int *)(param_3 + 0x1304) + iVar9;
    lVar10 = DAT_03210d00;
    uVar12 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar12 == 0xffff) {
      puVar13 = (ushort *)0x0;
    }
    else {
      puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar12 * 0x40 + 0x10);
      if (uVar12 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar12 = 0xffff;
      }
      else {
        uVar12 = *puVar13;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar12;
      *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
      FUN_00efea00(puVar13);
      *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
    }
    FUN_00f0e700(lVar1);
    local_b0 = (ulong)(uint)fVar16 << 0x20;
    FUN_00efea4c(puVar13,lVar1,&local_b0);
    FUN_00efcac4(0,puVar13);
    FUN_00f022a0(lVar1,puVar13);
    lVar10 = DAT_03210d00;
    uVar12 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar12 == 0xffff) {
      puVar13 = (ushort *)0x0;
    }
    else {
      puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar12 * 0x40 + 0x10);
      if (uVar12 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar12 = 0xffff;
      }
      else {
        uVar12 = *puVar13;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar12;
      *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
      FUN_00efdc08(puVar13);
      *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
    }
    fVar14 = (float)(iVar9 - iVar7);
    FUN_00efcac4(0,puVar13);
    local_b0 = 0x3f80000000000000;
    FUN_00efdc50(puVar13,&local_b0);
    FUN_00f022a0(lVar1,puVar13);
    lVar10 = DAT_03210d00;
    uVar12 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar12 == 0xffff) {
      puVar13 = (ushort *)0x0;
    }
    else {
      puVar13 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar12 * 0x40);
      if (uVar12 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar12 = 0xffff;
      }
      else {
        uVar12 = *puVar13;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar12;
      *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
      FUN_00efc8e8(puVar13);
      *(undefined ***)puVar13 = &PTR_FUN_027c27b8;
      puVar13[0xc] = 0;
      puVar13[0xd] = 0;
      puVar13[0xe] = 0;
      puVar13[0xf] = 0;
      puVar13[0x10] = 0;
      puVar13[0x11] = 0;
      puVar13[0x12] = 0;
      puVar13[0x13] = 0;
      puVar13[8] = 0;
      puVar13[9] = 0;
      puVar13[10] = 0;
      puVar13[0xb] = 0;
      *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
    }
    *(code **)(puVar13 + 8) = FUN_00b0ac0c;
    *(long *)(puVar13 + 0x10) = param_3 + 0x1c8;
    FUN_00f022a0(lVar1,puVar13);
    lVar10 = DAT_03210d00;
    uVar12 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar12 == 0xffff) {
      puVar13 = (ushort *)0x0;
    }
    else {
      puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar12 * 0x40 + 0x10);
      if (uVar12 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar12 = 0xffff;
      }
      else {
        uVar12 = *puVar13;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar12;
      *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
      FUN_00efea00(puVar13);
      *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
    }
    fVar15 = *(float *)(param_3 + 0x12f8);
    FUN_00f0e700(lVar1);
    local_b0 = CONCAT44(fVar16,(fVar14 / (float)(int)(param_5 - iVar5)) * fVar15);
    FUN_00efea4c(puVar13,lVar1,&local_b0);
    FUN_00efcac4(param_1 * (fVar14 / (float)iVar9),puVar13);
    pcVar11 = FUN_009a7608;
  }
  FUN_00efcb24(puVar13,pcVar11);
  FUN_00f022a0(lVar1,puVar13);
  if (*(long *)(lVar8 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

