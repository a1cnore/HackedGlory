// functions/00a9c — 6 functions
#include "libGameKindred.h"




void FUN_00a9c2c4(float param_1,long param_2)

{
  uint uVar1;
  
  if (*(char *)(param_2 + 0x1994) != '\0') {
    if (0.0 <= *(float *)(param_2 + 0x1990)) {
      *(float *)(param_2 + 0x1990) = *(float *)(param_2 + 0x1990) - param_1;
    }
    else if (*(int *)(param_2 + 0x1988) != -1) {
      FUN_00a9c338(DAT_03133aa8,param_2);
    }
  }
  uVar1 = FUN_00f023dc(param_2);
  *(uint *)(param_2 + 0x1954) =
       *(uint *)(param_2 + 0x1954) & 0xffffffe0 |
       *(uint *)(param_2 + 0x1954) & 0xf | (uVar1 & 1) << 4;
  return;
}




void FUN_00a9c338(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  FUN_00a9cc40(param_2,0,1);
  iVar1 = *(int *)(param_2 + 0x1988);
  *(undefined4 *)(param_2 + 0x1988) = 0xffffffff;
  lVar3 = 0x1a10;
  lVar4 = 7;
  *(uint *)(param_2 + 0x5c4) = *(uint *)(param_2 + 0x5c4) & 0xffffffef;
  *(uint *)(param_2 + 0x126c) = *(uint *)(param_2 + 0x126c) & 0xffffffef;
  *(uint *)(param_2 + 0xc74) = *(uint *)(param_2 + 0xc74) & 0xffffffef;
  do {
    iVar2 = *(int *)(param_1 + lVar3);
    if ((iVar2 != -1) && (iVar1 < iVar2)) {
      *(int *)(param_1 + lVar3) = iVar2 + -1;
    }
    lVar4 = lVar4 + -1;
    lVar3 = lVar3 + 0x19a0;
  } while (lVar4 != 0);
  uVar5 = 0;
  lVar3 = 0x1a10;
  do {
    if ((*(int *)(param_1 + lVar3) != -1) && (iVar1 <= *(int *)(param_1 + lVar3))) {
      FUN_00a9d6bc(param_1,uVar5 & 0xffffffff);
    }
    uVar5 = uVar5 + 1;
    lVar3 = lVar3 + 0x19a0;
  } while (uVar5 != 7);
  return;
}




void FUN_00a9c418(long param_1)

{
  long lVar1;
  code *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = DAT_03210f60;
  local_78 = FUN_00a9c4d4;
  uStack_70 = DAT_03133aa8;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = param_1;
  FUN_009693a0(param_1 + 0x548,&local_78);
  local_50 = DAT_03210f8c;
  local_78 = FUN_00a9c4d4;
  uStack_70 = DAT_03133aa8;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = param_1;
  FUN_009693a0(param_1 + 0x548,&local_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9c4d4(undefined8 param_1)

{
  long in_x4;
  
  if (*(int *)(in_x4 + 0x1988) != -1) {
    FUN_00a9c338(param_1,in_x4);
    return;
  }
  return;
}




void FUN_00a9c4ec(float param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                 code *param_6,long *param_7,long param_8,uint param_9,byte param_10)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined4 local_90;
  long local_88;
  
  lVar10 = tpidr_el0;
  local_88 = *(long *)(lVar10 + 0x28);
  *(undefined4 *)(param_2 + 0x331) = 0;
  if (param_1 == -1.0) {
    *(undefined1 *)((long)param_2 + 0x1994) = 0;
  }
  else {
    *(undefined1 *)((long)param_2 + 0x1994) = 1;
    *(float *)(param_2 + 0x332) = param_1;
  }
  fVar15 = 550.0;
  plVar1 = param_2 + 0x82;
  uVar7 = 0x44098000;
  if ((param_9 & 1) == 0) {
    uVar7 = 0x43f28000;
  }
  FUN_00f0dad0(uVar7,plVar1,1);
  FUN_00f0d75c(plVar1,param_3);
  FUN_00f0d548(plVar1);
  uVar11 = ~param_9 & 1;
  uVar9 = uVar11 << 4;
  uVar5 = uVar9 | (param_9 & 1) << 2;
  *(uint *)((long)param_2 + 0x5c4) =
       uVar9 | uVar11 << 2 | *(uint *)((long)param_2 + 0x5c4) & 0xffffffeb;
  plVar2 = param_2 + 0x17e;
  plVar3 = param_2 + 0x23d;
  *(uint *)((long)param_2 + 0xc74) = uVar5 | *(uint *)((long)param_2 + 0xc74) & 0xffffffeb;
  *(uint *)((long)param_2 + 0x126c) = uVar5 | *(uint *)((long)param_2 + 0x126c) & 0xffffffeb;
  *(uint *)((long)param_2 + 0x1864) =
       *(uint *)((long)param_2 + 0x1864) & 0xfffffff8 |
       *(uint *)((long)param_2 + 0x1864) & 3 | (param_9 & 1) << 2;
  if ((~param_9 & 1) == 0) {
    fVar16 = fVar15 + 30.0 + 50.0;
    if ((*(float *)(param_2 + 0x245) != DAT_03133aa0 * 0.25) ||
       (*(float *)((long)param_2 + 0x122c) != fVar16)) {
      *(float *)(param_2 + 0x245) = DAT_03133aa0 * 0.25;
      *(float *)((long)param_2 + 0x122c) = fVar16;
      FUN_0091ada4(plVar3);
    }
    fVar14 = *(float *)(param_2 + 0x186);
    plVar4 = param_2 + 0x2fc;
    if ((fVar14 != DAT_03133aa0 * 0.75) || (*(float *)((long)param_2 + 0xc34) != fVar16)) {
      *(float *)(param_2 + 0x186) = DAT_03133aa0 * 0.75;
      *(float *)((long)param_2 + 0xc34) = fVar16;
      FUN_0091ada4(plVar2);
      fVar14 = *(float *)(param_2 + 0x186);
    }
    fVar16 = (*(float *)(param_2 + 0x245) + fVar14) * 0.5;
    if ((*(float *)(param_2 + 0x304) != fVar16) ||
       (*(float *)((long)param_2 + 0x1824) != *(float *)((long)param_2 + 0x122c))) {
      *(float *)(param_2 + 0x304) = fVar16;
      *(float *)((long)param_2 + 0x1824) = *(float *)((long)param_2 + 0x122c);
      FUN_0091ada4(plVar4);
    }
    local_b8 = (code *)0x3f0000003f000000;
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
    fVar15 = fVar15 + 80.0;
  }
  puVar6 = &DAT_031339d8;
  if ((param_10 & 1) == 0) {
    puVar6 = &DAT_01bee7fa;
  }
  FUN_00f0d7fc(plVar1,puVar6);
  fVar16 = fVar15;
  FUN_00f13f08(0x44100000,param_2);
  plVar1 = param_2 + 0x28;
  FUN_00f0e700(plVar1);
  fVar14 = *(float *)((long)param_2 + 0x18c);
  if ((*(float *)(param_2 + 0x30) != 0.0) || (*(float *)((long)param_2 + 0x184) != 0.0)) {
    param_2[0x30] = 0;
    FUN_0091ada4(plVar1);
  }
  plVar4 = param_2 + 0xa8;
  fVar16 = fVar16 * fVar14;
  if ((*(float *)(param_2 + 0x4e) != 0.0) || (*(float *)((long)param_2 + 0x274) != fVar16)) {
    *(undefined4 *)(param_2 + 0x4e) = 0;
    *(float *)((long)param_2 + 0x274) = fVar16;
    FUN_0091ada4(param_2 + 0x46);
  }
  local_b8 = (code *)CONCAT44(fVar15 * 0.5,0xbf800000);
  FUN_00f13f18(param_2 + 0x46,&local_b8);
  if ((*(float *)(param_2 + 0x6c) != 0.0) || (*(float *)((long)param_2 + 0x364) != fVar15 + fVar16))
  {
    *(undefined4 *)(param_2 + 0x6c) = 0;
    *(float *)((long)param_2 + 0x364) = fVar15 + fVar16;
    FUN_0091ada4(param_2 + 100);
  }
  *(uint *)((long)param_2 + 0x1c4) = *(uint *)((long)param_2 + 0x1c4) | 0x10;
  *(uint *)((long)param_2 + 0x2b4) = *(uint *)((long)param_2 + 0x2b4) | 0x10;
  *(uint *)((long)param_2 + 0x3a4) = *(uint *)((long)param_2 + 0x3a4) | 0x10;
  fVar14 = DAT_03133aa0;
  fVar12 = (float)FUN_00f13e54(plVar4);
  fVar14 = fVar14 + fVar12 * -0.5 + -10.0;
  fVar16 = fVar15 * 0.5 + fVar16;
  if ((*(float *)(param_2 + 0xb0) != fVar14) || (*(float *)((long)param_2 + 0x584) != fVar16)) {
    *(float *)(param_2 + 0xb0) = fVar14;
    *(float *)((long)param_2 + 0x584) = fVar16;
    FUN_0091ada4(plVar4);
  }
  uVar13 = (**(code **)(*param_2 + 0x48))(param_2);
  (**(code **)(*param_2 + 0x48))(param_2);
  fVar15 = fVar16;
  FUN_00f0e700(plVar1);
  fVar15 = fVar15 * *(float *)((long)param_2 + 0x18c);
  fVar16 = fVar16 + fVar15 + fVar15;
  FUN_00f13f08(uVar13,fVar16,param_2 + 0x167);
  uVar13 = (**(code **)(*param_2 + 0x48))(param_2);
  (**(code **)(*param_2 + 0x48))(param_2);
  fVar15 = fVar16;
  FUN_00f0e700(plVar1);
  fVar15 = fVar15 * *(float *)((long)param_2 + 0x18c);
  FUN_00f13f08(uVar13,fVar16 + fVar15 + fVar15,param_2 + 0x31a);
  *(uint *)((long)param_2 + 0xbbc) = *(uint *)((long)param_2 + 0xbbc) & 0xffffffef;
  FUN_00f04710(param_2 + 0x167);
  FUN_00f04710(plVar4);
  FUN_00f04710(plVar2);
  FUN_00f04710(plVar3);
  plVar1 = param_2 + 0xa9;
  uVar7 = DAT_03210f60;
  local_b8 = FUN_00a9c4d4;
  lStack_b0 = DAT_03133aa8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = param_2;
  local_90 = uVar7;
  FUN_009693a0(plVar1,&local_b8);
  local_a8 = 0;
  uStack_a0 = 0;
  uVar8 = DAT_03210f8c;
  local_b8 = FUN_00a9c4d4;
  lStack_b0 = DAT_03133aa8;
  local_98 = param_2;
  local_90 = uVar8;
  FUN_009693a0(plVar1,&local_b8);
  if (param_8 != 0) {
    if (param_4 != 0) {
      local_b8 = (code *)param_4;
      local_98 = (long *)param_5;
      if ((param_9 & 1) == 0) {
        plVar2 = param_2 + 0x168;
        local_a8 = 0;
        uStack_a0 = 0;
        lStack_b0 = param_8;
        local_90 = uVar7;
        FUN_009693a0(plVar2,&local_b8);
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = (code *)param_4;
        lStack_b0 = param_8;
        local_98 = (long *)param_5;
        local_90 = uVar8;
        FUN_009693a0(plVar2,&local_b8);
        local_b8 = FUN_00a9c4d4;
        lStack_b0 = DAT_03133aa8;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = param_2;
        local_90 = uVar7;
        FUN_009693a0(plVar2,&local_b8);
        local_b8 = FUN_00a9c4d4;
        lStack_b0 = DAT_03133aa8;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = param_2;
        local_90 = uVar8;
        FUN_009693a0(plVar2,&local_b8);
        uVar11 = *(uint *)((long)param_2 + 0xbbc) | 0x10;
      }
      else {
        plVar4 = param_2 + 0x17f;
        local_a8 = 0;
        uStack_a0 = 0;
        lStack_b0 = param_8;
        local_90 = uVar7;
        FUN_009693a0(plVar4,&local_b8);
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = (code *)param_4;
        lStack_b0 = param_8;
        local_98 = (long *)param_5;
        local_90 = uVar8;
        FUN_009693a0(plVar4,&local_b8);
        local_b8 = FUN_00a9c4d4;
        lStack_b0 = DAT_03133aa8;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = param_2;
        local_90 = uVar7;
        FUN_009693a0(plVar4,&local_b8);
        local_b8 = FUN_00a9c4d4;
        lStack_b0 = DAT_03133aa8;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = param_2;
        local_90 = uVar8;
        FUN_009693a0(plVar4,&local_b8);
        FUN_00b08e40(plVar2);
        *(uint *)((long)param_2 + 0xc74) = *(uint *)((long)param_2 + 0xc74) | 0x10;
        uVar11 = *(uint *)((long)param_2 + 0xbbc) & 0xffffffef;
      }
      *(uint *)((long)param_2 + 0xbbc) = uVar11;
    }
    if (param_6 != (code *)0x0) {
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = param_6;
      lStack_b0 = param_8;
      local_98 = param_7;
      local_90 = uVar7;
      FUN_009693a0(plVar1,&local_b8);
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = param_6;
      lStack_b0 = param_8;
      local_98 = param_7;
      local_90 = uVar8;
      FUN_009693a0(plVar1,&local_b8);
      if ((param_9 & 1) != 0) {
        plVar1 = param_2 + 0x23e;
        local_b8 = FUN_00a9c4d4;
        lStack_b0 = DAT_03133aa8;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = param_2;
        local_90 = uVar7;
        FUN_009693a0(plVar1,&local_b8);
        local_b8 = FUN_00a9c4d4;
        lStack_b0 = DAT_03133aa8;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = param_2;
        local_90 = uVar8;
        FUN_009693a0(plVar1,&local_b8);
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = param_6;
        lStack_b0 = param_8;
        local_98 = param_7;
        local_90 = uVar7;
        FUN_009693a0(plVar1,&local_b8);
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = param_6;
        lStack_b0 = param_8;
        local_98 = param_7;
        local_90 = uVar8;
        FUN_009693a0(plVar1,&local_b8);
        FUN_00b08e40(plVar3);
        *(uint *)((long)param_2 + 0x126c) = *(uint *)((long)param_2 + 0x126c) | 0x10;
      }
    }
  }
  if (*(long *)(lVar10 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9cc40(undefined1 param_1 [16],float param_2,long param_3,byte param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  float fVar12;
  float local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(byte *)(param_3 + 0x198c) != (param_4 & 1)) {
    FUN_00f0e700(param_3 + 0x140);
    lVar4 = DAT_03210d00;
    if ((param_4 & 1) == 0) {
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
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_00efdc08(puVar10);
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
      local_6c = *(undefined4 *)(param_3 + 0xfc);
      local_70 = DAT_03133aa0 + 100.0;
      FUN_00efdc50(puVar10,&local_70);
      FUN_00efcac4(0x3ec00000,puVar10);
      FUN_00efcb24(puVar10,FUN_009a71a4);
      lVar4 = DAT_03210d00;
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
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_00efdd74(puVar9);
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
      FUN_00efddc4(0,puVar9);
      FUN_00efcac4(0x3ec00000,puVar9);
      lVar4 = DAT_03210d00;
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
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_00efcd98(puVar8);
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
      FUN_00efcea4(puVar8,puVar10,puVar9,0);
      lVar4 = DAT_03210d00;
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
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_00efc8e8(puVar10);
        *(undefined ***)puVar10 = &PTR_FUN_02825148;
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
      FUN_00f02308(param_3 + 0xb8,puVar8,puVar10,0);
      bVar5 = 0;
      *(uint *)(param_3 + 0x5c4) = *(uint *)(param_3 + 0x5c4) & 0xffffffef;
      *(uint *)(param_3 + 0xc74) = *(uint *)(param_3 + 0xc74) & 0xffffffef;
      *(uint *)(param_3 + 0x126c) = *(uint *)(param_3 + 0x126c) & 0xffffffef;
    }
    else {
      lVar4 = param_3 + 0xb8;
      fVar12 = -(param_2 * *(float *)(param_3 + 0x18c) + 100.0);
      FUN_00f01980(lVar4);
      if ((*(float *)(param_3 + 0xf8) != -80.0) || (*(float *)(param_3 + 0xfc) != fVar12)) {
        *(undefined4 *)(param_3 + 0xf8) = 0xc2a00000;
        *(float *)(param_3 + 0xfc) = fVar12;
        FUN_0091ada4(lVar4);
      }
      uVar6 = *(uint *)(param_3 + 0x13c);
      if ((uVar6 & 0x7f80) != 0) {
        *(uint *)(param_3 + 0x13c) = uVar6 & 0xffff807f;
        FUN_0091ada4(lVar4);
        uVar6 = *(uint *)(param_3 + 0x13c);
      }
      *(uint *)(param_3 + 0x13c) = uVar6 | 8;
      lVar2 = DAT_03210d00;
      puVar10 = (ushort *)(DAT_03210d00 + 0x20010);
      uVar7 = *puVar10;
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
        *puVar10 = uVar7;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efc8e8(puVar9);
        *(undefined ***)puVar9 = &PTR_FUN_02825100;
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
        puVar10 = (ushort *)(DAT_03210d00 + 0x20010);
      }
      lVar2 = DAT_03210d00;
      *(undefined8 *)(param_3 + 0x1998) = 0x41a00000c2a00000;
      uVar7 = *puVar10;
      if ((ulong)uVar7 == 0xffff) {
        puVar8 = (ushort *)0x0;
      }
      else {
        puVar8 = (ushort *)(lVar2 + (ulong)uVar7 * 0x40 + 0x10);
        if (uVar7 == *(ushort *)(lVar2 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar8;
        }
        *puVar10 = uVar7;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efdc08(puVar8);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00efdc50(puVar8,param_3 + 0x1998);
      FUN_00efcac4(0x3f400000,puVar8);
      FUN_00efcb24(puVar8,FUN_0091aa80);
      lVar2 = DAT_03210d00;
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
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efdd74(puVar10);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00efddc4(0x3f800000,puVar10);
      FUN_00efcac4(0x3ec00000,puVar10);
      lVar2 = DAT_03210d00;
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
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efcd98(puVar11);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00efcea4(puVar11,puVar8,puVar10,0);
      FUN_00f02308(lVar4,puVar9,puVar11,0);
      if ((param_5 & 1) != 0) {
        uVar3 = FUN_009b8d90();
        lVar4 = FUN_01985d44(uVar3,DAT_0312ebb0);
        if (lVar4 != 0) {
          FUN_009dbd5c(0x3f800000,lVar4,"build://Sounds/UI.assetbundle/ui_notification_general.mp3",
                       0,0,0);
          FUN_009dbea4(lVar4);
        }
      }
      bVar5 = 1;
    }
    *(byte *)(param_3 + 0x198c) = bVar5;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

