// functions/00afc — 21 functions
#include "libGameKindred.h"




void FUN_00afc010(uint *param_1,uint param_2)

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




void FUN_00afc090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00afc948(param_3,param_1,param_2);
  return;
}




void FUN_00afc0a4(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x36);
  *param_1 = &PTR_FUN_027dad98;
  uVar2 = 0;
  do {
    uVar5 = uVar2;
    uVar4 = (ulong)uVar5;
    uVar3 = uVar1;
    if (uVar1 <= uVar5) break;
    uVar2 = uVar5 + 1;
  } while (*(int *)(param_1[0x37] + uVar4 * 8 + 4) == -1);
  do {
    if (uVar1 == uVar5) {
      FUN_00afc1a4(param_1 + 0x36);
      if ((void *)param_1[0x35] != (void *)0x0) {
        operator_delete__((void *)param_1[0x35]);
        param_1[0x34] = 0;
        param_1[0x35] = 0;
      }
      FUN_00f13d08(param_1);
      return;
    }
    if (*(long *)(param_1[0x3a] + (ulong)*(uint *)(param_1[0x37] + uVar4 * 8 + 4) * 0xa0 + 0x48) !=
        0) {
      FUN_00f34268();
      uVar3 = *(uint *)(param_1 + 0x36);
    }
    uVar5 = (uint)uVar4;
    do {
      uVar5 = uVar5 + 1;
      uVar4 = (ulong)uVar5;
      if (uVar3 <= uVar5) break;
    } while (*(int *)(param_1[0x37] + uVar4 * 8 + 4) == -1);
  } while( true );
}




void FUN_00afc1a4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
    uVar4 = 0;
    lVar5 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar5);
      if (uVar1 != 0xffffffff) {
        puVar3 = (uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 0xa0);
        (*(code *)**(undefined8 **)puVar3)(puVar3);
        *puVar3 = param_1[10];
        uVar2 = *param_1;
        param_1[10] = uVar1;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (uVar4 < uVar2);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_00afc250(void *param_1)

{
  FUN_00afc0a4();
  operator_delete(param_1);
  return;
}




void FUN_00afc274(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  param_2 = (long *)*param_2;
  lVar1 = *param_2;
  while (lVar1 != 0) {
    param_2 = param_2 + 1;
    FUN_00afc340(param_1);
    lVar1 = *param_2;
  }
  return;
}




void FUN_00afc2b0(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  while (lVar1 != 0) {
    param_2 = param_2 + 1;
    FUN_00afc340(param_1);
    lVar1 = *param_2;
  }
  return;
}




void FUN_00afc2ec(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_48 = param_4;
  uStack_40 = param_5;
  local_38 = param_1;
  uStack_34 = param_2;
  local_30 = param_6;
  FUN_00afc340(param_3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00afc340(long param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  ulong local_158 [2];
  void *local_148;
  float local_140;
  float fStack_13c;
  undefined **local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulong local_120 [2];
  void *local_110;
  ulong local_108 [2];
  void *local_f8;
  float *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  float local_d0;
  float local_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  float local_a8;
  float fStack_a4;
  undefined4 local_a0;
  int local_9c;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  FUN_00f00238(&fStack_13c,&local_140);
  local_128 = FUN_00f34280();
  fStack_c8 = 0.0;
  fStack_c4 = 0.0;
  local_b8 = 0;
  local_130 = 0x7000000;
  local_138 = &PTR_FUN_027daef8;
  local_120[0] = 0;
  local_108[0] = 0;
  local_108[1] = 0;
  local_120[1] = 0;
  local_110 = (void *)0x0;
  local_f8 = (void *)0x0;
  local_f0 = (float *)0x0;
  local_d8 = 0x3f80000000000000;
  local_d0 = 0.0;
  local_cc = 0.0;
  fStack_c0 = 1.0;
  fStack_bc = 0.0;
  local_b0 = 0x3f80000000000000;
  uStack_e0 = 0;
  local_e8 = 0x3f800000;
  FUN_008fa54c(local_158,*param_2);
  FUN_008fce60(local_120,local_158);
  if ((local_158[0] & 1) != 0) {
    operator_delete(local_148);
  }
  FUN_008fa54c(local_158,param_2[1]);
  FUN_008fce60(local_108,local_158);
  if (((byte)local_158[0] & 1) != 0) {
    operator_delete(local_148);
  }
  fVar9 = *(float *)(param_2 + 2);
  fVar13 = *(float *)((long)param_2 + 0x14);
  local_9c = (int)param_2[3];
  local_a0 = 0;
  uVar11 = 0;
  fVar12 = 0.0;
  uVar8 = 0x3f800000;
  local_a8 = fVar9;
  fStack_a4 = fVar13;
  switch(local_9c) {
  case 0:
  case 3:
    local_e8 = 0x3f800000;
    uStack_e0 = 0;
    local_d8 = 0x3f80000000000000;
    local_d0 = 0.0;
    local_cc = 0.0;
    fStack_c8 = 0.0;
    fStack_c4 = 0.0;
    fStack_c0 = 1.0;
    fStack_bc = 0.0;
    break;
  case 1:
    lVar7 = FUN_00965ecc(param_1);
    fVar12 = *(float *)(lVar7 + 0x10);
    fVar10 = *(float *)(param_1 + 0x48);
    lVar7 = FUN_00965ecc(param_1);
    if (local_f0 != (float *)0x0) {
      fVar12 = fVar12 * fVar10;
      fVar10 = *(float *)(lVar7 + 0x14) * *(float *)(param_1 + 0x4c);
      fVar16 = fVar12 * 0.0;
      fVar9 = fStack_13c * fVar9 + 0.0;
      fVar13 = (1.0 - fVar13) * local_140 + 0.0;
      local_d0 = fVar10 * 0.0;
      local_f0[3] = 0.0;
      local_f0[0xb] = 0.0;
      local_f0[0xe] = 0.0;
      local_f0[0xf] = 1.0;
      *local_f0 = fVar12;
      local_f0[1] = fVar16;
      local_f0[2] = fVar16;
      local_f0[0xc] = fVar9;
      local_f0[0xd] = fVar13;
      local_f0[9] = 0.0;
      local_f0[10] = 1.0;
      local_f0[7] = 0.0;
      local_f0[8] = 0.0;
      local_f0[4] = local_d0;
      local_f0[5] = fVar10;
      local_f0[6] = local_d0;
      local_e8 = CONCAT44(fVar16,fVar12);
      uStack_e0 = (ulong)(uint)fVar16;
      local_d8 = CONCAT44(fVar10,local_d0);
      fStack_c4 = 0.0;
      fStack_c0 = 1.0;
      local_cc = 0.0;
      fStack_c8 = 0.0;
      fStack_bc = 0.0;
      local_b8 = CONCAT44(fVar13,fVar9);
      local_b0 = 0x3f80000000000000;
    }
  case 4:
  case 5:
    uVar8 = DAT_0321901c;
    fVar12 = DAT_03219018;
    uVar6 = DAT_03219010;
    fVar13 = DAT_03218ff8;
    uVar5 = DAT_03218ff0;
    uVar4 = DAT_03218fec;
    fVar9 = DAT_03218fe8;
    uVar11 = DAT_03218fe0;
    fVar18 = -DAT_03218ffc;
    fVar16 = (float)_DAT_03219000;
    uVar2 = (ulong)_DAT_03219000 >> 0x20;
    fVar14 = (float)ram0x03219008;
    uVar3 = (ulong)ram0x03219008 >> 0x20;
    lVar7 = FUN_00965ecc(param_1);
    fVar10 = *(float *)(lVar7 + 8);
    lVar7 = FUN_00965ecc(param_1);
    uVar17 = CONCAT44(*(float *)(lVar7 + 0xc),fVar10);
    uVar17 = uVar17 ^ (uVar17 ^ CONCAT44(*(float *)(lVar7 + 0xc) + fStack_a4,fVar10 + local_a8)) &
                      CONCAT44(-(uint)(local_9c == 5),-(uint)(local_9c == 5));
    lVar7 = FUN_00965ecc(param_1);
    fVar10 = *(float *)(lVar7 + 0x10) * *(float *)(param_1 + 0x48);
    lVar7 = FUN_00965ecc(param_1);
    fVar12 = fVar12 + 0.0;
    fVar15 = *(float *)(lVar7 + 0x14) * *(float *)(param_1 + 0x4c);
    local_e8 = CONCAT44((float)((ulong)uVar11 >> 0x20) * fVar10,(float)uVar11 * fVar10);
    uVar11 = CONCAT44((float)((ulong)uVar6 >> 0x20) + (float)(uVar17 >> 0x20),
                      (float)uVar6 + (float)uVar17);
    local_d8 = CONCAT44(-((float)((ulong)uVar5 >> 0x20) * fVar15),-((float)uVar5 * fVar15));
    uStack_e0 = CONCAT44(uVar4,fVar9 * fVar10);
    local_d0 = -(fVar13 * fVar15);
    local_cc = fVar18;
    fStack_c8 = -fVar16;
    fStack_c4 = -(float)uVar2;
    fStack_c0 = -fVar14;
    fStack_bc = -(float)uVar3;
    break;
  case 2:
    local_e8 = 0x3f800000;
    uStack_e0 = 0;
    local_d8 = 0x3f80000000000000;
    uVar11 = CONCAT44(fVar13 + 0.0,fVar9 + 0.0);
    fVar12 = 0.0;
    local_d0 = 0.0;
    local_cc = 0.0;
    fStack_c8 = 0.0;
    fStack_c4 = 0.0;
    fStack_c0 = 1.0;
    fStack_bc = 0.0;
    break;
  default:
    goto switchD_00afc49c_default;
  }
  local_b0 = CONCAT44(uVar8,fVar12);
  local_b8 = uVar11;
switchD_00afc49c_default:
  local_158[0] = *param_2;
  FUN_00afcb8c(param_1 + 0x1b0,local_158,&local_138);
  local_138 = &PTR_FUN_027daef8;
  if ((local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  if ((local_120[0] & 1) != 0) {
    operator_delete(local_110);
  }
  if (*(long *)(lVar1 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00afc73c(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x1b0);
  uVar2 = 0;
  do {
    uVar6 = uVar2;
    uVar3 = (ulong)uVar6;
    if (uVar1 <= uVar6) break;
    uVar2 = uVar6 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x1b8) + uVar3 * 8 + 4) == -1);
  do {
    if (uVar1 == uVar6) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x1d0);
    uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 0x1b8) + uVar3 * 8 + 4);
    if ((*(byte *)(lVar4 + uVar5 * 0xa0 + 0x18) & 1) == 0) {
      lVar4 = lVar4 + uVar5 * 0xa0 + 0x19;
    }
    else {
      lVar4 = *(long *)(lVar4 + uVar5 * 0xa0 + 0x28);
    }
    FUN_00afd20c(param_1,lVar4);
    uVar6 = (uint)uVar3;
    do {
      uVar6 = uVar6 + 1;
      uVar3 = (ulong)uVar6;
      if (*(uint *)(param_1 + 0x1b0) <= uVar6) break;
    } while (*(int *)(*(long *)(param_1 + 0x1b8) + uVar3 * 8 + 4) == -1);
  } while( true );
}




void FUN_00afc73c(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x1b0);
  uVar2 = 0;
  do {
    uVar6 = uVar2;
    uVar3 = (ulong)uVar6;
    if (uVar1 <= uVar6) break;
    uVar2 = uVar6 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x1b8) + uVar3 * 8 + 4) == -1);
  do {
    if (uVar1 == uVar6) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x1d0);
    uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 0x1b8) + uVar3 * 8 + 4);
    if ((*(byte *)(lVar4 + uVar5 * 0xa0 + 0x18) & 1) == 0) {
      lVar4 = lVar4 + uVar5 * 0xa0 + 0x19;
    }
    else {
      lVar4 = *(long *)(lVar4 + uVar5 * 0xa0 + 0x28);
    }
    FUN_00afd20c(param_1,lVar4);
    uVar6 = (uint)uVar3;
    do {
      uVar6 = uVar6 + 1;
      uVar3 = (ulong)uVar6;
      if (*(uint *)(param_1 + 0x1b0) <= uVar6) break;
    } while (*(int *)(*(long *)(param_1 + 0x1b8) + uVar3 * 8 + 4) == -1);
  } while( true );
}




void FUN_00afc818(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_009b8d9c();
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_009b8d90();
    *(undefined8 *)(lVar2 + 0xe378) = 0;
    *(undefined8 *)(lVar2 + 0xe370) = 0x3f800000;
    *(undefined8 *)(lVar2 + 0xe388) = 0;
    *(undefined8 *)(lVar2 + 0xe380) = 0x3f80000000000000;
    *(undefined8 *)(lVar2 + 0xe398) = 0x3f800000;
    *(undefined8 *)(lVar2 + 0xe390) = 0;
    *(undefined8 *)(lVar2 + 0xe3a8) = 0x3f80000000000000;
    *(undefined8 *)(lVar2 + 0xe3a0) = 0;
  }
  FUN_00afc86c(param_1);
  return;
}




void FUN_00afc86c(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x1b0);
  uVar2 = 0;
  do {
    uVar6 = uVar2;
    uVar3 = (ulong)uVar6;
    if (uVar1 <= uVar6) break;
    uVar2 = uVar6 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x1b8) + uVar3 * 8 + 4) == -1);
  do {
    if (uVar1 == uVar6) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x1d0);
    uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 0x1b8) + uVar3 * 8 + 4);
    if ((*(byte *)(lVar4 + uVar5 * 0xa0 + 0x18) & 1) == 0) {
      lVar4 = lVar4 + uVar5 * 0xa0 + 0x19;
    }
    else {
      lVar4 = *(long *)(lVar4 + uVar5 * 0xa0 + 0x28);
    }
    FUN_00afd658(param_1,lVar4);
    uVar6 = (uint)uVar3;
    do {
      uVar6 = uVar6 + 1;
      uVar3 = (ulong)uVar6;
      if (*(uint *)(param_1 + 0x1b0) <= uVar6) break;
    } while (*(int *)(*(long *)(param_1 + 0x1b8) + uVar3 * 8 + 4) == -1);
  } while( true );
}




void FUN_00afc948(long param_1,undefined8 param_2,long *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auStack_e8 [144];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar1 = (undefined4 *)(param_1 + 0x1a0);
  if (*(long *)(param_1 + 0x1a8) != 0) {
    *puVar1 = 0;
  }
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x1a4));
  if (fVar8 <= (float)*(int *)(param_1 + 0x1c0)) {
    fVar8 = (float)*(int *)(param_1 + 0x1c0);
  }
  FUN_00afc010(puVar1,(int)fVar8);
  FUN_00afca70(param_1,puVar1);
  iVar2 = *(int *)(param_1 + 0x1a0);
  if (iVar2 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x1a8);
    uVar4 = FUN_01997b18(0);
    uVar5 = (**(code **)(*param_3 + 0x138))(param_3);
    uVar6 = (**(code **)(*param_3 + 0x140))(param_3);
    FUN_0199b72c(auStack_e8,"Kindred Menu Particle FX",uVar7,iVar2,uVar4,uVar5,uVar6,0);
    FUN_0199c960(param_2,auStack_e8,0);
    FUN_0199b7a8(auStack_e8);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00afca68(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c0);
}




void FUN_00afca70(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x1b0);
  uVar3 = 0;
  do {
    uVar6 = uVar3;
    uVar5 = (ulong)uVar6;
    if (uVar1 <= uVar6) break;
    uVar3 = uVar6 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x1b8) + uVar5 * 8 + 4) == -1);
  do {
    if (uVar1 == uVar6) {
      if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar7 = *(long *)(param_1 + 0x1d0);
    uVar8 = (ulong)*(uint *)(*(long *)(param_1 + 0x1b8) + uVar5 * 8 + 4);
    if ((*(long *)(lVar7 + uVar8 * 0xa0 + 0x48) != 0) && (uVar4 = FUN_00f30cfc(), (uVar4 & 1) != 0))
    {
      local_60 = lVar7 + uVar8 * 0xa0 + 8;
      FUN_00afceb4(param_2,&local_60);
    }
    uVar6 = (uint)uVar5;
    do {
      uVar6 = uVar6 + 1;
      uVar5 = (ulong)uVar6;
      if (*(uint *)(param_1 + 0x1b0) <= uVar6) break;
    } while (*(int *)(*(long *)(param_1 + 0x1b8) + uVar5 * 8 + 4) == -1);
  } while( true );
}




void FUN_00afcb8c(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar14 = *param_2;
  uVar4 = FUN_00e6a474(uVar14);
  uVar5 = FUN_0091ed5c(uVar14,uVar4,0x12345678);
  uVar10 = param_1[4];
  uVar9 = *param_1;
  param_1[4] = uVar10 + 1;
  if (uVar9 >> 1 < uVar10 + 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar9 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar10 = *param_1;
    uVar11 = uVar10 - 1;
    uVar9 = (uint)local_58;
    if ((int)uVar11 < 0) {
      pvVar7 = *(void **)(param_1 + 2);
    }
    else {
      pvVar7 = *(void **)(param_1 + 2);
      do {
        iVar6 = *(int *)((long)pvVar7 + (ulong)uVar11 * 8 + 4);
        if (iVar6 != -1) {
          uVar10 = *(uint *)((long)pvVar7 + (ulong)uVar11 * 8);
          uVar2 = 0;
          if ((uint)local_58 != 0) {
            uVar2 = uVar10 / (uint)local_58;
          }
          uVar12 = (ulong)(uVar10 - uVar2 * (uint)local_58);
          piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
          iVar1 = *piVar13;
          while (iVar1 != -1) {
            uVar2 = (uint)local_58;
            if (0 < (int)(uint)uVar12) {
              uVar2 = (uint)uVar12;
            }
            uVar12 = (ulong)(uVar2 - 1);
            piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
            iVar1 = *piVar13;
          }
          *(uint *)((long)local_50 + uVar12 * 8) = uVar10;
          *piVar13 = iVar6;
        }
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
      uVar10 = *param_1;
    }
    uVar11 = param_1[1];
    *param_1 = (uint)local_58;
    param_1[1] = local_58._4_4_;
    local_58 = CONCAT44(uVar11,uVar10);
    *(void **)(param_1 + 2) = local_50;
    local_50 = pvVar7;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar9 = *param_1;
    }
  }
  lVar8 = *(long *)(param_1 + 2);
  uVar10 = 0;
  if (uVar9 != 0) {
    uVar10 = uVar5 / uVar9;
  }
  uVar12 = (ulong)(uVar5 - uVar10 * uVar9);
  piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
  iVar6 = *piVar13;
  while (iVar6 != -1) {
    uVar10 = uVar9;
    if (0 < (int)(uint)uVar12) {
      uVar10 = (uint)uVar12;
    }
    uVar12 = (ulong)(uVar10 - 1);
    piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
    iVar6 = *piVar13;
  }
  *(uint *)(lVar8 + uVar12 * 8) = uVar5;
  iVar6 = FUN_00afdb14(param_1,param_3);
  *piVar13 = iVar6;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00afcd64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027daef8;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[5]);
  return;
}




long FUN_00afcdb8(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong local_70 [2];
  void *local_60;
  ulong local_58 [2];
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = 0;
  uVar3 = FUN_00f1c800(param_2,&local_40,0);
  local_58[0] = 0;
  local_58[1] = 0;
  local_48 = (void *)0x0;
  FUN_00f1c904(param_2,local_58);
  pvVar1 = (void *)((ulong)local_58 | 1);
  if ((local_58[0] & 1) != 0) {
    pvVar1 = local_48;
  }
  local_70[0] = 0;
  local_70[1] = 0;
  local_60 = (void *)0x0;
  FUN_00f1c8ec(pvVar1,local_70);
  uVar4 = FUN_00f3428c();
  pvVar1 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar1 = local_60;
  }
  lVar5 = FUN_00f32a6c(uVar4,pvVar1,local_40,uVar3);
  *(ushort *)(lVar5 + 100) = *(ushort *)(lVar5 + 100) | 0x1000;
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00afceb4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00afc010(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00afcf3c(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x1b0);
  uVar2 = 0;
  do {
    uVar6 = uVar2;
    uVar3 = (ulong)uVar6;
    if (uVar1 <= uVar6) break;
    uVar2 = uVar6 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x1b8) + uVar3 * 8 + 4) == -1);
  do {
    if (uVar1 == uVar6) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x1d0);
    uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 0x1b8) + uVar3 * 8 + 4);
    if ((*(byte *)(lVar4 + uVar5 * 0xa0 + 0x18) & 1) == 0) {
      lVar4 = lVar4 + uVar5 * 0xa0 + 0x19;
    }
    else {
      lVar4 = *(long *)(lVar4 + uVar5 * 0xa0 + 0x28);
    }
    FUN_00afd018(param_1,lVar4);
    uVar6 = (uint)uVar3;
    do {
      uVar6 = uVar6 + 1;
      uVar3 = (ulong)uVar6;
      if (*(uint *)(param_1 + 0x1b0) <= uVar6) break;
    } while (*(int *)(*(long *)(param_1 + 0x1b8) + uVar3 * 8 + 4) == -1);
  } while( true );
}

