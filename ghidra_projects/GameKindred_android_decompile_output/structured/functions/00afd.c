// functions/00afd — 17 functions
#include "libGameKindred.h"




void FUN_00afd018(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = param_2;
  lVar3 = FUN_00afda10(param_1 + 0x1b0,&local_40);
  if (*(long *)(lVar3 + 0x48) == 0) {
    lVar1 = lVar3 + 0x31;
    if ((*(byte *)(lVar3 + 0x30) & 1) != 0) {
      lVar1 = *(long *)(lVar3 + 0x40);
    }
    puVar4 = (undefined8 *)FUN_00afcdb8(lVar3,lVar1);
    uVar5 = *(undefined8 *)(lVar3 + 0x50);
    *(undefined8 **)(lVar3 + 0x48) = puVar4;
    puVar4[1] = *(undefined8 *)(lVar3 + 0x58);
    *puVar4 = uVar5;
    uVar5 = *(undefined8 *)(lVar3 + 0x60);
    puVar4[3] = *(undefined8 *)(lVar3 + 0x68);
    puVar4[2] = uVar5;
    uVar5 = *(undefined8 *)(lVar3 + 0x80);
    puVar4[7] = *(undefined8 *)(lVar3 + 0x88);
    puVar4[6] = uVar5;
    uVar5 = *(undefined8 *)(lVar3 + 0x70);
    puVar4[5] = *(undefined8 *)(lVar3 + 0x78);
    puVar4[4] = uVar5;
  }
  FUN_00afd658(param_1,local_40);
  if (*(long *)(lVar3 + 0x48) != 0) {
    FUN_00f309f4();
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00afd0d4(long param_1)

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
    FUN_00afd1b0(param_1,lVar4);
    uVar6 = (uint)uVar3;
    do {
      uVar6 = uVar6 + 1;
      uVar3 = (ulong)uVar6;
      if (*(uint *)(param_1 + 0x1b0) <= uVar6) break;
    } while (*(int *)(*(long *)(param_1 + 0x1b8) + uVar3 * 8 + 4) == -1);
  } while( true );
}




void FUN_00afd1b0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  lVar2 = FUN_00afda10(param_1 + 0x1b0,&local_30);
  if (*(long *)(lVar2 + 0x48) != 0) {
    FUN_00f30a40();
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00afd20c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  lVar2 = FUN_00afda10(param_1 + 0x1b0,&local_30);
  if (*(long *)(lVar2 + 0x48) != 0) {
    FUN_00f30a68();
    *(ushort *)(*(long *)(lVar2 + 0x48) + 100) = *(ushort *)(*(long *)(lVar2 + 0x48) + 100) | 0x200;
    *(undefined8 *)(lVar2 + 0x48) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00afd280(long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x1b0);
  uVar3 = 0;
  do {
    uVar7 = uVar3;
    uVar4 = (ulong)uVar7;
    if (uVar1 <= uVar7) break;
    uVar3 = uVar7 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x1b8) + uVar4 * 8 + 4) == -1);
  do {
    if (uVar1 == uVar7) {
      if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar5 = *(long *)(param_1 + 0x1d0);
    uVar6 = (ulong)*(uint *)(*(long *)(param_1 + 0x1b8) + uVar4 * 8 + 4);
    if ((*(byte *)(lVar5 + uVar6 * 0xa0 + 0x18) & 1) == 0) {
      local_60 = lVar5 + uVar6 * 0xa0 + 0x19;
    }
    else {
      local_60 = *(long *)(lVar5 + uVar6 * 0xa0 + 0x28);
    }
    lVar5 = FUN_00afda10((uint *)(param_1 + 0x1b0),&local_60);
    *(undefined4 *)(lVar5 + 0x9c) = param_2;
    uVar7 = (uint)uVar4;
    do {
      uVar7 = uVar7 + 1;
      uVar4 = (ulong)uVar7;
      if (*(uint *)(param_1 + 0x1b0) <= uVar7) break;
    } while (*(int *)(*(long *)(param_1 + 0x1b8) + uVar4 * 8 + 4) == -1);
  } while( true );
}




void FUN_00afd3a8(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  lVar2 = FUN_00afda10(param_1 + 0x1b0,&local_30);
  *(undefined4 *)(lVar2 + 0x9c) = param_3;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00afd400(long param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x1b0);
  uVar3 = 0;
  do {
    uVar8 = uVar3;
    uVar4 = (ulong)uVar8;
    if (uVar1 <= uVar8) break;
    uVar3 = uVar8 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x1b8) + uVar4 * 8 + 4) == -1);
  do {
    if (uVar1 == uVar8) {
      if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar5 = *(long *)(param_1 + 0x1d0);
    uVar7 = (ulong)*(uint *)(*(long *)(param_1 + 0x1b8) + uVar4 * 8 + 4);
    if ((*(byte *)(lVar5 + uVar7 * 0xa0 + 0x18) & 1) == 0) {
      local_e8 = lVar5 + uVar7 * 0xa0 + 0x19;
    }
    else {
      local_e8 = *(long *)(lVar5 + uVar7 * 0xa0 + 0x28);
    }
    uStack_a8 = param_2[7];
    local_b0 = param_2[6];
    uStack_b8 = param_2[5];
    local_c0 = param_2[4];
    uStack_c8 = param_2[3];
    local_d0 = param_2[2];
    uStack_d8 = param_2[1];
    local_e0 = *param_2;
    lVar5 = FUN_00afda10((uint *)(param_1 + 0x1b0),&local_e8);
    puVar6 = *(undefined8 **)(lVar5 + 0x48);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[7] = uStack_a8;
      puVar6[6] = local_b0;
      puVar6[5] = uStack_b8;
      puVar6[4] = local_c0;
      puVar6[3] = uStack_c8;
      puVar6[2] = local_d0;
      puVar6[1] = uStack_d8;
      *puVar6 = local_e0;
      *(undefined8 *)(lVar5 + 0x88) = uStack_a8;
      *(undefined8 *)(lVar5 + 0x80) = local_b0;
      *(undefined8 *)(lVar5 + 0x78) = uStack_b8;
      *(undefined8 *)(lVar5 + 0x70) = local_c0;
      *(undefined8 *)(lVar5 + 0x68) = uStack_c8;
      *(undefined8 *)(lVar5 + 0x60) = local_d0;
      *(undefined8 *)(lVar5 + 0x58) = uStack_d8;
      *(undefined8 *)(lVar5 + 0x50) = local_e0;
    }
    uVar8 = (uint)uVar4;
    do {
      uVar8 = uVar8 + 1;
      uVar4 = (ulong)uVar8;
      uStack_68 = uStack_a8;
      local_70 = local_b0;
      uStack_78 = uStack_b8;
      local_80 = local_c0;
      uStack_88 = uStack_c8;
      local_90 = local_d0;
      uStack_98 = uStack_d8;
      local_a0 = local_e0;
      if (*(uint *)(param_1 + 0x1b0) <= uVar8) break;
    } while (*(int *)(*(long *)(param_1 + 0x1b8) + uVar4 * 8 + 4) == -1);
  } while( true );
}




void FUN_00afd59c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = param_2;
  lVar2 = FUN_00afda10(param_1 + 0x1b0,&local_78);
  uStack_38 = param_3[7];
  local_40 = param_3[6];
  uStack_48 = param_3[5];
  local_50 = param_3[4];
  uStack_58 = param_3[3];
  local_60 = param_3[2];
  uStack_68 = param_3[1];
  local_70 = *param_3;
  puVar3 = *(undefined8 **)(lVar2 + 0x48);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[7] = uStack_38;
    puVar3[6] = local_40;
    puVar3[5] = uStack_48;
    puVar3[4] = local_50;
    puVar3[3] = uStack_58;
    puVar3[2] = local_60;
    puVar3[1] = uStack_68;
    *puVar3 = local_70;
    *(undefined8 *)(lVar2 + 0x88) = uStack_38;
    *(undefined8 *)(lVar2 + 0x80) = local_40;
    *(undefined8 *)(lVar2 + 0x78) = uStack_48;
    *(undefined8 *)(lVar2 + 0x70) = local_50;
    *(undefined8 *)(lVar2 + 0x68) = uStack_58;
    *(undefined8 *)(lVar2 + 0x60) = local_60;
    *(undefined8 *)(lVar2 + 0x58) = uStack_68;
    *(undefined8 *)(lVar2 + 0x50) = local_70;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00afd658(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  ulong uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_98;
  float fStack_94;
  undefined8 local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  local_90 = param_2;
  lVar6 = FUN_00afda10(param_1 + 0x1b0,&local_90);
  if (*(long *)(lVar6 + 0x48) == 0) goto LAB_00afd9d4;
  FUN_00f00238(&fStack_94,&local_98);
  if (4 < *(int *)(lVar6 + 0x9c) - 1U) goto LAB_00afd9d4;
  fVar10 = fStack_94 * 0.5 + 0.0;
  fVar16 = local_98 * 0.5 + 0.0;
  fVar15 = 0.0;
  switch(*(int *)(lVar6 + 0x9c)) {
  case 1:
    fVar16 = *(float *)(lVar6 + 0x90);
    fVar15 = *(float *)(lVar6 + 0x94);
    lVar7 = FUN_00965ecc(param_1);
    fVar10 = *(float *)(lVar7 + 0x10);
    fVar19 = *(float *)(param_1 + 0x48);
    lVar7 = FUN_00965ecc(param_1);
    pfVar9 = *(float **)(lVar6 + 0x48);
    if (pfVar9 != (float *)0x0) {
      fVar21 = *(float *)(lVar7 + 0x14) * *(float *)(param_1 + 0x4c);
      fVar10 = fVar10 * fVar19;
      fVar24 = fVar10 * 0.0;
      fVar16 = fStack_94 * fVar16 + 0.0;
      fVar15 = local_98 * (1.0 - fVar15) + 0.0;
      fVar19 = fVar21 * 0.0;
      pfVar9[3] = 0.0;
      pfVar9[0xb] = 0.0;
      pfVar9[0xe] = 0.0;
      pfVar9[0xf] = 1.0;
      *pfVar9 = fVar10;
      pfVar9[1] = fVar24;
      pfVar9[2] = fVar24;
      pfVar9[0xc] = fVar16;
      pfVar9[0xd] = fVar15;
      pfVar9[9] = 0.0;
      pfVar9[10] = 1.0;
      pfVar9[7] = 0.0;
      pfVar9[8] = 0.0;
      pfVar9[4] = fVar19;
      pfVar9[5] = fVar21;
      pfVar9[6] = fVar19;
      *(float *)(lVar6 + 0x50) = fVar10;
      *(float *)(lVar6 + 0x54) = fVar24;
      *(float *)(lVar6 + 0x58) = fVar24;
      *(undefined4 *)(lVar6 + 0x5c) = 0;
      *(float *)(lVar6 + 0x60) = fVar19;
      *(float *)(lVar6 + 100) = fVar21;
      *(float *)(lVar6 + 0x68) = fVar19;
      *(undefined8 *)(lVar6 + 0x74) = 0x3f80000000000000;
      *(undefined8 *)(lVar6 + 0x6c) = 0;
      *(undefined4 *)(lVar6 + 0x7c) = 0;
      *(float *)(lVar6 + 0x80) = fVar16;
      *(float *)(lVar6 + 0x84) = fVar15;
      *(undefined8 *)(lVar6 + 0x88) = 0x3f80000000000000;
    }
    goto LAB_00afd9d4;
  case 2:
    puVar8 = *(undefined4 **)(lVar6 + 0x48);
    if (puVar8 == (undefined4 *)0x0) goto LAB_00afd9d4;
    fVar19 = *(float *)(lVar6 + 0x90);
    fVar21 = *(float *)(lVar6 + 0x94);
    fVar15 = *(float *)(lVar6 + 0x98);
    *puVar8 = 0x3f800000;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    fVar10 = fVar10 + fVar19;
    fVar16 = fVar16 + fVar21;
    fVar15 = fVar15 + 0.0;
    puVar8[4] = 0;
    puVar8[5] = 0x3f800000;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0x3f800000;
    puVar8[0xb] = 0;
    puVar8[0xf] = 0x3f800000;
    puVar8[0xc] = fVar10;
    puVar8[0xd] = fVar16;
    puVar8[0xe] = fVar15;
    break;
  case 3:
    puVar8 = *(undefined4 **)(lVar6 + 0x48);
    if (puVar8 == (undefined4 *)0x0) goto LAB_00afd9d4;
    *puVar8 = 0x3f800000;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0x3f800000;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0x3f800000;
    puVar8[0xb] = 0;
    puVar8[0xc] = fVar10;
    puVar8[0xd] = fVar16;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0x3f800000;
    break;
  default:
    lVar7 = FUN_00965ecc(param_1);
    fVar11 = *(float *)(lVar7 + 8);
    lVar7 = FUN_00965ecc(param_1);
    fVar5 = DAT_0321901c;
    fVar4 = DAT_03219018;
    uVar3 = DAT_03219010;
    uVar2 = ram0x03219008;
    uVar23 = _DAT_03219000;
    fVar24 = DAT_03218ffc;
    fVar21 = DAT_03218ff8;
    uVar26 = DAT_03218ff0;
    fVar19 = DAT_03218fec;
    fVar16 = DAT_03218fe8;
    fVar15 = DAT_03218fe0._4_4_;
    fVar10 = (float)DAT_03218fe0;
    iVar12 = *(int *)(lVar6 + 0x9c);
    uVar13 = *(undefined8 *)(lVar6 + 0x90);
    fVar14 = *(float *)(lVar7 + 0xc);
    uVar25 = CONCAT44(fVar14,fVar11);
    lVar7 = FUN_00965ecc(param_1);
    fVar28 = *(float *)(lVar7 + 0x10);
    fVar29 = *(float *)(param_1 + 0x48);
    lVar7 = FUN_00965ecc(param_1);
    pfVar9 = *(float **)(lVar6 + 0x48);
    if (pfVar9 != (float *)0x0) {
      fVar22 = *(float *)(lVar7 + 0x14);
      iVar12 = -(uint)(iVar12 == 5);
      fVar27 = *(float *)(param_1 + 0x4c);
      fVar28 = fVar28 * fVar29;
      fVar29 = -(float)uVar23;
      fVar17 = -(float)((ulong)uVar23 >> 0x20);
      fVar18 = -(float)uVar2;
      fVar20 = -(float)((ulong)uVar2 >> 0x20);
      *(ulong *)(pfVar9 + 8) = CONCAT44(fVar17,fVar29);
      *(ulong *)(pfVar9 + 10) = CONCAT44(fVar20,fVar18);
      *pfVar9 = fVar10 * fVar28;
      pfVar9[1] = fVar15 * fVar28;
      uVar25 = uVar25 ^ (uVar25 ^ CONCAT44(fVar14 + (float)((ulong)uVar13 >> 0x20),
                                           fVar11 + (float)uVar13)) & CONCAT44(iVar12,iVar12);
      fVar22 = fVar22 * fVar27;
      uVar23 = CONCAT44((float)(uVar25 >> 0x20) + (float)((ulong)uVar3 >> 0x20),
                        (float)uVar25 + (float)uVar3);
      pfVar9[3] = fVar19;
      uVar26 = CONCAT44(-((float)((ulong)uVar26 >> 0x20) * fVar22),-((float)uVar26 * fVar22));
      pfVar9[0xf] = fVar5;
      pfVar9[2] = fVar16 * fVar28;
      pfVar9[0xe] = fVar4 + 0.0;
      *(undefined8 *)(pfVar9 + 0xc) = uVar23;
      pfVar9[6] = -(fVar21 * fVar22);
      pfVar9[7] = -fVar24;
      *(undefined8 *)(pfVar9 + 4) = uVar26;
      *(float *)(lVar6 + 0x50) = fVar10 * fVar28;
      *(float *)(lVar6 + 0x54) = fVar15 * fVar28;
      *(float *)(lVar6 + 0x58) = fVar16 * fVar28;
      *(float *)(lVar6 + 0x5c) = fVar19;
      *(undefined8 *)(lVar6 + 0x60) = uVar26;
      *(float *)(lVar6 + 0x68) = -(fVar21 * fVar22);
      *(float *)(lVar6 + 0x6c) = -fVar24;
      *(ulong *)(lVar6 + 0x70) = CONCAT44(fVar17,fVar29);
      *(ulong *)(lVar6 + 0x78) = CONCAT44(fVar20,fVar18);
      *(undefined8 *)(lVar6 + 0x80) = uVar23;
      *(float *)(lVar6 + 0x88) = fVar4 + 0.0;
      *(float *)(lVar6 + 0x8c) = fVar5;
    }
    goto LAB_00afd9d4;
  }
  *(undefined4 *)(lVar6 + 0x50) = 0x3f800000;
  *(undefined4 *)(lVar6 + 0x54) = 0;
  *(undefined4 *)(lVar6 + 0x58) = 0;
  *(undefined4 *)(lVar6 + 0x5c) = 0;
  *(undefined4 *)(lVar6 + 0x60) = 0;
  *(undefined4 *)(lVar6 + 100) = 0x3f800000;
  *(undefined4 *)(lVar6 + 0x68) = 0;
  *(undefined4 *)(lVar6 + 0x6c) = 0;
  *(undefined4 *)(lVar6 + 0x70) = 0;
  *(undefined4 *)(lVar6 + 0x74) = 0;
  *(undefined4 *)(lVar6 + 0x78) = 0x3f800000;
  *(undefined4 *)(lVar6 + 0x7c) = 0;
  *(float *)(lVar6 + 0x80) = fVar10;
  *(float *)(lVar6 + 0x84) = fVar16;
  *(float *)(lVar6 + 0x88) = fVar15;
  *(undefined4 *)(lVar6 + 0x8c) = 0x3f800000;
LAB_00afd9d4:
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00afda10(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  uVar4 = FUN_00e6a474(uVar8);
  uVar5 = FUN_0091ed5c(uVar8,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if (uVar3 != 0xffffffff) {
      uVar7 = (ulong)*(uint *)(lVar6 + (ulong)uVar3 * 8 + 4);
      goto LAB_00afda9c;
    }
  }
  uVar7 = 0xffffffff;
LAB_00afda9c:
  return *(long *)(param_1 + 8) + uVar7 * 0xa0;
}




void FUN_00afdab4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027daef8;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    operator_delete((void *)param_1[5]);
  }
  operator_delete(param_1);
  return;
}




undefined8 FUN_00afdb04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}




long FUN_00afdb0c(long param_1)

{
  return param_1 + 0x50;
}




ulong FUN_00afdb14(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [160];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_00afdbec(param_1 + 0x18,auStack_d8);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar3 = (ulong)(*(int *)(param_1 + 0x18) - 1);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar3 * 0xa0);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  puVar4 = (undefined8 *)(lVar2 + uVar3 * 0xa0);
  *puVar4 = &PTR_FUN_027daef8;
  puVar4[2] = uVar6;
  puVar4[1] = uVar5;
  FUN_008fcdb8(puVar4 + 3,param_2 + 0x18);
  FUN_008fcdb8(puVar4 + 6,param_2 + 0x30);
  memcpy(puVar4 + 9,(void *)(param_2 + 0x48),0x58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00afdbec(uint *param_1,void *param_2)

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
    FUN_00afdc7c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  memcpy((void *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xa0 + -0xa0),param_2,0xa0);
  return;
}




void FUN_00afdc7c(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *__src;
  void *__dest;
  long lVar2;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0xa0);
    __src = *(void **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0xa0;
      __dest = pvVar1;
      do {
        memcpy(__dest,__src,0xa0);
        __src = (void *)((long)__src + 0xa0);
        lVar2 = lVar2 + -0xa0;
        __dest = (void *)((long)__dest + 0xa0);
      } while (lVar2 != 0);
      __src = *(void **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (__src != (void *)0x0) {
      operator_delete__(__src);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00afdd18(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  uint uVar13;
  byte local_c0 [16];
  void *local_b0;
  code *local_a8;
  long *local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar10 = tpidr_el0;
  local_78 = *(long *)(lVar10 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027daf28;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x53;
  FUN_00b148c4(plVar3,0);
  plVar4 = param_1 + 0x13d;
  FUN_00f0d160();
  plVar5 = param_1 + 0x163;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0x181;
  FUN_00c939c4(plVar6,0);
  plVar7 = param_1 + 0x2fb;
  FUN_00f017e8(plVar7);
  plVar8 = param_1 + 0x30c;
  param_1[0x2fb] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar8);
  plVar9 = param_1 + 0x32a;
  FUN_00b12bd8(plVar9,0);
  FUN_00f017e8();
  param_1[0x3c0] = (long)&PTR_FUN_027c1f80;
  param_1[0x3d1] = 0;
  lVar12 = _DAT_03218ef8;
  *(undefined2 *)(param_1 + 0x3d3) = 0;
  param_1[0x3d2] = lVar12;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_00f023ec(plVar7,plVar8,1);
  FUN_00f023ec(plVar7,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3c0,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  if ((*(float *)(param_1 + 0x21) != 0.5) || (*(float *)((long)param_1 + 0x10c) != 0.5)) {
    param_1[0x21] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  uVar13 = *(uint *)((long)param_1 + 0x13c);
  if ((uVar13 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x13c) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar1);
    uVar13 = *(uint *)((long)param_1 + 0x13c);
  }
  plVar1 = param_1 + 0x18;
  local_80 = DAT_03210f58;
  *(uint *)((long)param_1 + 0x13c) = uVar13 | 0x10;
  local_a8 = thunk_FUN_00aff5d0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = (void *)0x0;
  local_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  local_a8 = thunk_FUN_00aff5d0;
  local_80 = DAT_03210f84;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = (void *)0x0;
  local_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  local_80 = DAT_03210f54;
  local_a8 = FUN_00afe4f4;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = (void *)0x0;
  local_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  local_a8 = FUN_00afe4f4;
  local_80 = DAT_03210f60;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = (void *)0x0;
  local_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  local_a8 = FUN_00afe4f4;
  local_80 = DAT_03210f5c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = (void *)0x0;
  local_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  local_a8 = FUN_00afe4f4;
  local_80 = DAT_03210f64;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = (void *)0x0;
  local_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  local_a8 = FUN_00afe4f4;
  local_80 = DAT_03210f68;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = (void *)0x0;
  local_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  local_a8 = FUN_00afe4f4;
  local_80 = DAT_03210f6c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = (void *)0x0;
  local_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  local_a8 = FUN_00afe4f4;
  local_80 = DAT_03210f70;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = (void *)0x0;
  local_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  local_a8 = FUN_00afe4f4;
  local_80 = DAT_03210f74;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = (void *)0x0;
  local_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  local_a8 = FUN_00afe4f4;
  local_80 = DAT_03210f78;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = (void *)0x0;
  local_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  local_a8 = FUN_00afe4f4;
  local_80 = DAT_03210f80;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = (void *)0x0;
  local_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  local_a8 = FUN_00afe4f4;
  local_80 = DAT_03210f8c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = (void *)0x0;
  local_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  local_a8 = FUN_00afe4f4;
  local_80 = DAT_03210f88;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = (void *)0x0;
  local_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  if ((*(float *)(param_1 + 0x3f) != 0.5) || (*(float *)((long)param_1 + 0x1fc) != 0.5)) {
    param_1[0x3f] = 0x3f0000003f000000;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e670(plVar2,&DAT_01bee7fe,2);
  local_a8 = (code *)0x3f0000003f000000;
  FUN_00b12ff0(plVar3,&local_a8);
  *(uint *)((long)param_1 + 0x3d4) = *(uint *)((long)param_1 + 0x3d4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x31c) = *(uint *)((long)param_1 + 0x31c) | 0x10;
  FUN_00b12e9c(plVar3,1);
  FUN_00b1339c(plVar3,&DAT_01bee7f6);
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20);
  uVar13 = *(uint *)((long)param_1 + 0xa6c);
  if ((uVar13 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xa6c) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6600;
    FUN_0091ada4(plVar4);
  }
  FUN_00e705c8(&local_a8,"******* SET THIS TITLE *******");
  FUN_00f0d75c(plVar4,&local_a8);
  if (local_a0 != (long *)0x0) {
    operator_delete__(local_a0);
    local_a8 = (code *)0x0;
    local_a0 = (long *)0x0;
  }
  puVar11 = PTR_s_build___MenuPartsCommon_tga_02be3530;
  FUN_008fa54c(&local_a8,"button_lively_close");
  FUN_008fa54c(local_c0,"button_lively_close_hit");
  FUN_00c93a88(plVar6,puVar11,&local_a8,local_c0);
  if ((local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  if (((ulong)local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  FUN_00c9228c(plVar6,0);
  local_a8 = (code *)0x42c8000042c80000;
  FUN_00f13f18(plVar6,&local_a8);
  local_90 = 0;
  uStack_88 = 0;
  local_80 = DAT_03210c64;
  local_98 = (void *)0x0;
  local_a8 = thunk_FUN_00aff5d0;
  local_a0 = param_1;
  FUN_009693a0(param_1 + 0x182,&local_a8);
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  if ((*(uint *)((long)param_1 + 0xb9c) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_1 + 0xb9c) = *(uint *)((long)param_1 + 0xb9c) & 0xffff807f | 0x1f80;
    FUN_0091ada4(plVar5);
  }
  if ((*(float *)(param_1 + 0x305) != 0.5) || (*(float *)((long)param_1 + 0x182c) != 0.5)) {
    param_1[0x305] = 0x3f0000003f000000;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0e548(plVar8,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  if ((*(float *)(param_1 + 0x316) != 0.5) || (*(float *)((long)param_1 + 0x18b4) != 0.5)) {
    param_1[0x316] = 0x3f0000003f000000;
    FUN_0091ada4(plVar8);
  }
  FUN_00f0e670(plVar8,&DAT_01bee7fe,2);
  FUN_00b13264(plVar9,1);
  *(uint *)((long)param_1 + 0x1a8c) = *(uint *)((long)param_1 + 0x1a8c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x19d4) = *(uint *)((long)param_1 + 0x19d4) & 0xffffffef;
  FUN_00b12e9c(plVar9,0);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0xfffffffb | (uint)*(byte *)((long)param_1 + 0x1e99) << 2;
  FUN_00f13f08(0x44480000,0x44960000,param_1);
  if (*(long *)(lVar10 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

