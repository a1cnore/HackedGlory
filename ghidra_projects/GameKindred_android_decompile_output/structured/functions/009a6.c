// functions/009a6 — 15 functions
#include "libGameKindred.h"




void FUN_009a6098(long param_1,long param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  if (param_2 != 0) {
    switch(*(undefined4 *)(param_1 + 0x44)) {
    case 1:
      uVar1 = *(undefined4 *)(param_2 + 0x6c);
      break;
    case 2:
      uVar1 = *(undefined4 *)(param_2 + 0x70);
      break;
    case 3:
      uVar1 = *(undefined4 *)(param_2 + 0x74);
      break;
    case 4:
      uVar1 = *(undefined4 *)(param_2 + 0x88);
      break;
    case 5:
      uVar1 = *(undefined4 *)(param_2 + 0x84);
      break;
    case 6:
      uVar1 = *(undefined4 *)(param_2 + 0x78);
      break;
    case 7:
      uVar1 = *(undefined4 *)(param_2 + 0xa0);
      break;
    case 8:
      uVar1 = *(undefined4 *)(param_2 + 0x94);
      break;
    case 9:
      uVar1 = *(undefined4 *)(param_2 + 0x9c);
      break;
    case 10:
      uVar1 = *(undefined4 *)(param_2 + 0x98);
      break;
    case 0xb:
      uVar1 = *(undefined4 *)(param_2 + 0x8c);
      break;
    case 0xc:
      uVar1 = *(undefined4 *)(param_2 + 0x90);
      break;
    case 0xd:
      uVar1 = *(undefined4 *)(param_2 + 0x7c);
      break;
    case 0xe:
      uVar1 = *(undefined4 *)(param_2 + 0x80);
      break;
    default:
      uVar1 = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar1;
    fVar2 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x5b));
    fVar2 = (float)NEON_fminnm(*(float *)(param_2 + 0xc) * fVar2,0x437f0000);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    *(char *)(param_1 + 0x5b) = (char)(int)fVar2;
  }
  return;
}




void FUN_009a6168(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x28);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x28) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
          }
        }
        FUN_00d7bfc8(uVar3,param_2 & 1);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_009a6214(void)

{
  return;
}




void FUN_009a6218(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c1908;
  FUN_00f0a79c(param_1 + 1);
  return;
}




void FUN_009a622c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c1908;
  FUN_00f0a79c(param_1 + 1);
  operator_delete(param_1);
  return;
}




void FUN_009a6260(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_00f017e8(param_1 + 5);
  *param_1 = &PTR_FUN_027c1930;
  param_1[5] = &PTR_FUN_027c1960;
  FUN_00f0d25c(param_1 + 0x16,PTR_s_build___Fonts_Futura_Medium_30_S_02be9d08);
  FUN_00f0d25c(param_1 + 0x3c,PTR_s_build___Fonts_Futura_Medium_40_S_02be9d10);
  FUN_00f0d25c(param_1 + 0x62,PTR_s_build___Fonts_Futura_Medium_64_S_02be9d18);
  param_1[0x88] = 0;
  uVar1 = DAT_03214ce8;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x89) = uVar1;
  return;
}




void FUN_009a6304(long param_1)

{
  long lVar1;
  
  DAT_0312e88c = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312e88c + 1;
  lVar1 = param_1 + (ulong)DAT_0312e88c * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009a8618;
  *(code **)(lVar1 + 0xb8) = FUN_009a863c;
  *(uint *)(lVar1 + 0xa4) = DAT_0312e88c;
  *(undefined4 *)(lVar1 + 0xa8) = 0x468;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,FUN_009a63a8,0);
  FUN_019867cc(param_1,0x36de0632,FUN_009a6404,0);
  return;
}




void FUN_009a63a8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00f023dc(param_1 + 0xb0);
  if ((((uVar1 & 1) == 0) && (uVar1 = FUN_00f023dc(param_1 + 0x1e0), (uVar1 & 1) == 0)) &&
     (uVar1 = FUN_00f023dc(param_1 + 0x310), (uVar1 & 1) == 0)) {
    FUN_019888e0(param_1);
    return;
  }
  FUN_009a64cc(param_1);
  FUN_009a6628(param_1);
  return;
}




void FUN_009a64cc(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  float local_68;
  float fStack_64;
  float local_38;
  float fStack_34;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x440);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x448) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        if ((*(int *)(param_1 + 0x450) == -0x7ee3623b) || (*(int *)(param_1 + 0x450) == 0)) {
          FUN_00d55794(lVar3,param_1 + 0x454,0);
          local_38 = *(float *)(param_1 + 0x454);
          fStack_34 = *(float *)(param_1 + 0x458);
          local_30 = *(float *)(param_1 + 0x45c);
        }
        else {
          FUN_00d58298(lVar3,param_1 + 0x450,&local_68);
          *(float *)(param_1 + 0x454) = local_38;
          *(float *)(param_1 + 0x458) = fStack_34;
          *(float *)(param_1 + 0x45c) = local_30;
        }
        *(float *)(param_1 + 0x454) = local_38 + 0.0;
        *(float *)(param_1 + 0x458) = *(float *)(param_1 + 0x460) + fStack_34;
        *(float *)(param_1 + 0x45c) = local_30 + 0.0;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x440) = 0;
      *(undefined4 *)(param_1 + 0x448) = DAT_03214ce8;
    }
  }
  FUN_0091ef94(&local_68,param_1 + 0x454,0);
  local_68 = (float)(int)local_68;
  fStack_64 = (float)(int)fStack_64;
  if ((*(float *)(param_1 + 0x68) != local_68) || (*(float *)(param_1 + 0x6c) != fStack_64)) {
    *(float *)(param_1 + 0x68) = local_68;
    *(float *)(param_1 + 0x6c) = fStack_64;
    FUN_0091ada4(param_1 + 0x28);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009a6628(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x440);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x448) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        *(uint *)(param_1 + 0xac) =
             *(uint *)(param_1 + 0xac) & 0xfffffff8 |
             *(uint *)(param_1 + 0xac) & 3 | (uint)((*(byte *)(lVar2 + 0x2fc) & 0x1f) != 0) << 2;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x440) = 0;
      *(undefined4 *)(param_1 + 0x448) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_009a669c(undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long lVar1;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_58);
  FUN_00e70e18(&local_58,&DAT_01bb6d43,(int)ABS((float)(int)ABS(param_2)));
  FUN_009a6760(param_1,ABS(param_2),param_3,param_4,&local_58,&DAT_0312e858,param_5,0,1);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009a6760(undefined4 param_1,float param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,ulong param_7,uint param_8,uint param_9)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_a0;
  void *local_98;
  float local_90;
  float fStack_8c;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  *(long *)(param_3 + 0x440) = param_4 + 0x28;
  *(undefined4 *)(param_3 + 0x448) = *(undefined4 *)(param_4 + 0x30);
  *(undefined4 *)(param_3 + 0x460) = param_1;
  FUN_009a64cc();
  bVar4 = (param_9 & 1) == 0;
  fVar13 = -50.0;
  if (bVar4) {
    fVar13 = -100.0;
  }
  param_2 = param_2 + fVar13;
  fVar13 = 0.005;
  if (bVar4) {
    fVar13 = 0.0025;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  bVar4 = (param_7 & 1) != 0;
  fVar12 = 6.8067846;
  if (bVar4) {
    fVar12 = 4.712389;
  }
  fVar14 = (float)NEON_fminnm(param_2 * fVar13,0x3fe66666);
  fVar13 = 4.712389;
  if (bVar4) {
    fVar13 = 2.6179938;
  }
  iVar5 = rand();
  fVar13 = fVar13 + (fVar12 - fVar13) * (float)iVar5 * 4.656613e-10;
  fVar12 = cosf(fVar13);
  fStack_8c = sinf(fVar13);
  lVar3 = DAT_03210d00;
  local_90 = fVar12 * 100.0;
  fStack_8c = fStack_8c * 100.0;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efd7c4(puVar8);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  fVar14 = fVar14 + 1.2;
  FUN_00efcac4(0x3f19999a,puVar8);
  FUN_00efd894(puVar8,&local_90);
  local_a0 = 0x4352000000000000;
  FUN_00efd8a8(puVar8,&local_a0);
  lVar3 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efe530(puVar9);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  local_a0 = CONCAT44(fVar14,fVar14);
  FUN_00efe58c(puVar9,&local_a0);
  FUN_00efcac4(0x3d75c290,puVar9);
  lVar3 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efe530(puVar10);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  local_a0 = CONCAT44(fVar14,fVar14);
  FUN_00efe58c(puVar10,&local_a0);
  FUN_00efcac4(0x3f19999a,puVar10);
  FUN_00efc930(puVar9,puVar10);
  lVar3 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efcad4(puVar10);
    *(undefined ***)puVar10 = &PTR_FUN_027c1a60;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3e75c290,puVar10);
  lVar3 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efcad4(puVar11);
    *(undefined ***)puVar11 = &PTR_FUN_02825268;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  plVar1 = (long *)(param_3 + 0xb0);
  FUN_00efcac4(0x3eb851ec,puVar11);
  FUN_00efc930(puVar10,puVar11);
  lVar3 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efcd98(puVar11);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar11,puVar8,puVar9,puVar10,0);
  FUN_00f018bc(plVar1,1);
  FUN_00f022a0(plVar1,puVar11);
  FUN_00f0d7fc(plVar1,param_6);
  local_a0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0xb0) + 0x28))(plVar1,&local_a0);
  (**(code **)(*(long *)(param_3 + 0xb0) + 0x80))(plVar1,param_3 + 0x28,0);
  if ((param_8 & 1) != 0) {
    FUN_00e705c8(&local_a0,&DAT_01b97ca0);
    FUN_00e70c34(param_5,&local_a0);
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
      local_a0 = 0;
      local_98 = (void *)0x0;
    }
  }
  (**(code **)(*plVar1 + 0x138))(plVar1,param_5);
  uVar6 = FUN_00f00438("ingame-actor-effects");
  FUN_00f02408(param_3 + 0x28,uVar6,1);
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009a6da8(undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,int param_5
                 ,undefined8 param_6,uint param_7,undefined4 param_8)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_68);
  FUN_00e70e18(&local_68,&DAT_01bb6d43,(int)ABS((float)(int)param_2));
  uVar2 = FUN_0093d818();
  if ((uVar2 & 1) != 0) {
    if (param_5 == 2) {
      puVar3 = &DAT_0312e868;
      goto LAB_009a6e4c;
    }
    if (param_5 == 1) {
      puVar3 = &DAT_0312e864;
      goto LAB_009a6e4c;
    }
    if (param_5 == 0) {
      puVar3 = &DAT_0312e860;
      goto LAB_009a6e4c;
    }
  }
  puVar3 = &DAT_0312e85c;
LAB_009a6e4c:
  FUN_009a6760(param_1,ABS(param_2),param_3,param_4,&local_68,puVar3,param_8,param_7 & 1,0);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009a6ecc(void)

{
  FUN_009a6760();
  return;
}




void FUN_009a6ee4(undefined4 param_1,float param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort *puVar8;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *(long *)(param_3 + 0x440) = param_4 + 0x28;
  uVar2 = *(undefined4 *)(param_4 + 0x30);
  *(undefined4 *)(param_3 + 0x460) = param_1;
  *(undefined4 *)(param_3 + 0x448) = uVar2;
  FUN_009a64cc();
  plVar1 = (long *)(param_3 + 0x1e0);
  if (3.0 <= param_2) {
    plVar1 = (long *)(param_3 + 0x310);
  }
  FUN_00f0d7fc(plVar1,param_6);
  (**(code **)(*plVar1 + 0x138))(plVar1,param_5);
  if ((*(float *)(plVar1 + 8) != 0.0) || (*(float *)((long)plVar1 + 0x44) != 0.0)) {
    plVar1[8] = 0;
    FUN_0091ada4(plVar1);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_60);
  (**(code **)(*plVar1 + 0x80))(plVar1,param_3 + 0x28,0);
  lVar4 = DAT_03210d00;
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
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efd6a4(puVar7);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  local_60 = 0xc2a0000000000000;
  FUN_00efd6ec(puVar7,&local_60);
  FUN_00efcac4(0x3f4ccccd,puVar7);
  FUN_00efcb24(puVar7,FUN_0091aa80);
  lVar4 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efcad4(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_02825268;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f4ccccd,puVar8);
  FUN_00efcb24(puVar8,FUN_009a71a4);
  FUN_00f01980(plVar1);
  FUN_00f02308(plVar1,puVar7,puVar8,0);
  uVar5 = FUN_00f00438("ingame-actor-effects");
  FUN_00f02408(param_3 + 0x28,uVar5,0);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

