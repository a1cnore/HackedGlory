// functions/00cf3 — 35 functions
#include "libGameKindred.h"




long FUN_00cf3048(long param_1,undefined8 param_2,byte param_3,byte param_4,undefined8 param_5,
                 undefined8 param_6)

{
  *(undefined8 *)(param_1 + 0x30) = param_5;
  *(byte *)(param_1 + 0x28) = param_3 & 1;
  *(byte *)(param_1 + 0x29) = param_4 & 1;
  FUN_00d9ff34(param_1 + 0x10);
  FUN_00d9ff34(param_1 + 0x20,param_6);
  return param_1;
}




long FUN_00cf3094(long param_1,undefined8 param_2,byte param_3,byte param_4,undefined8 param_5,
                 undefined8 param_6)

{
  *(undefined8 *)(param_1 + 0x30) = param_5;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(byte *)(param_1 + 0x28) = param_3 & 1;
  *(byte *)(param_1 + 0x29) = param_4 & 1;
  FUN_00d9ff34(param_1 + 0x20,param_6);
  return param_1;
}




void FUN_00cf30d8(long param_1)

{
  *(undefined1 *)(param_1 + 0x2a) = 1;
  return;
}




void FUN_00cf30e4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




void FUN_00cf30ec(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
  float local_64;
  undefined4 local_60 [2];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) == 0) {
    lVar5 = FUN_00d5048c(param_2);
    if (*(char *)(param_1 + 0x2a) != '\0') {
      lVar8 = *(long *)(lVar5 + 0x18);
      while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_02e3ef78))) {
        lVar8 = *(long *)(lVar8 + 0x20);
      }
      iVar2 = FUN_00d5359c(lVar8);
      if (iVar2 != 0) {
        uVar9 = 0;
        do {
          iVar2 = FUN_00d53990(lVar8,uVar9);
          if (iVar2 == 2) {
            lVar6 = FUN_00d53914(lVar8,uVar9);
            lVar7 = FUN_00d5029c(param_2);
            if (lVar6 != lVar7) goto LAB_00cf322c;
          }
          uVar9 = uVar9 + 1;
          uVar3 = FUN_00d5359c(lVar8);
        } while (uVar9 < uVar3);
      }
    }
    local_60[0] = *(undefined4 *)(param_1 + 0x10);
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      (**(code **)(param_1 + 0x18))(param_2,local_60);
    }
    fVar10 = (float)FUN_00d50df4(param_2);
    local_64 = *(float *)(param_1 + 0x24);
    if (*(code **)(param_1 + 0x30) != (code *)0x0) {
      (**(code **)(param_1 + 0x30))(0x3f800000,param_2,&local_64);
    }
    FUN_00d5a4cc(fVar10 / local_64,lVar5,local_60,*(undefined1 *)(param_1 + 0x28),
                 *(undefined1 *)(param_1 + 0x29),param_1 + 0x20);
  }
LAB_00cf322c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf3260(undefined8 *param_1)

{
  FUN_00cfc438();
  param_1[7] = 0xffffffff00000000;
  *param_1 = &PTR_FUN_0280f488;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xfe00 | 0x16;
  return;
}




uint FUN_00cf32cc(undefined4 param_1,long param_2,byte *param_3,ushort param_4,undefined8 param_5,
                 ushort param_6,ushort param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(param_2 + 0x28) = 1;
  uVar1 = (uint)param_2 & 0xffff;
  *(undefined4 *)(param_2 + 0x2c) = param_1;
  *(undefined8 *)(param_2 + 0x40) = param_5;
  *(uint *)(param_2 + 0x3c) = uVar1;
  *(ushort *)(param_2 + 0x80) =
       param_4 & 1 | (param_6 & 1) << 1 | (param_7 & 1) << 4 | *(ushort *)(param_2 + 0x80) & 0xffec;
  *(undefined8 *)(param_2 + 0x20) = param_8;
  if (param_3 == (byte *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = (uint)*param_3;
    uVar2 = 0x811c9dc5;
    if (*param_3 != 0) {
      do {
        param_3 = param_3 + 1;
        uVar2 = (uVar2 ^ uVar3) * 0x1000193;
        uVar3 = (uint)*param_3;
      } while (*param_3 != 0);
    }
  }
  *(uint *)(param_2 + 0x10) = uVar2;
  return uVar1;
}




uint FUN_00cf3358(undefined4 param_1,long param_2,byte *param_3,ushort param_4,byte *param_5,
                 undefined8 param_6,ushort param_7,ushort param_8,undefined8 param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0x811c9dc5;
  *(undefined4 *)(param_2 + 0x28) = 2;
  if (param_5 == (byte *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x811c9dc5;
    if (*param_5 != 0) {
      uVar3 = 0x811c9dc5;
      uVar1 = (uint)*param_5;
      do {
        param_5 = param_5 + 1;
        uVar3 = (uVar3 ^ uVar1) * 0x1000193;
        uVar1 = (uint)*param_5;
      } while (*param_5 != 0);
    }
  }
  uVar1 = (uint)param_2 & 0xffff;
  *(uint *)(param_2 + 0x38) = uVar3;
  *(uint *)(param_2 + 0x3c) = uVar1;
  *(undefined4 *)(param_2 + 0x2c) = param_1;
  *(undefined8 *)(param_2 + 0x40) = param_6;
  *(ushort *)(param_2 + 0x80) =
       param_4 & 1 | (param_7 & 1) << 1 | (param_8 & 1) << 4 | *(ushort *)(param_2 + 0x80) & 0xffec;
  *(undefined8 *)(param_2 + 0x20) = param_9;
  if (param_3 == (byte *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = (uint)*param_3;
    if (*param_3 != 0) {
      do {
        param_3 = param_3 + 1;
        uVar2 = (uVar2 ^ uVar3) * 0x1000193;
        uVar3 = (uint)*param_3;
      } while (*param_3 != 0);
    }
  }
  *(uint *)(param_2 + 0x10) = uVar2;
  return uVar1;
}




uint FUN_00cf3428(undefined4 param_1,long param_2,byte *param_3,ushort param_4,undefined8 param_5,
                 undefined8 param_6,ushort param_7,ushort param_8,undefined8 param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(param_2 + 0x28) = 3;
  uVar1 = (uint)param_2 & 0xffff;
  *(undefined4 *)(param_2 + 0x2c) = param_1;
  *(undefined8 *)(param_2 + 0x40) = param_6;
  *(uint *)(param_2 + 0x3c) = uVar1;
  *(ushort *)(param_2 + 0x80) =
       param_4 & 1 | (param_7 & 1) << 1 | (param_8 & 1) << 4 | *(ushort *)(param_2 + 0x80) & 0xffec;
  *(undefined8 *)(param_2 + 0x20) = param_9;
  if (param_3 == (byte *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = (uint)*param_3;
    uVar2 = 0x811c9dc5;
    if (*param_3 != 0) {
      do {
        param_3 = param_3 + 1;
        uVar2 = (uVar2 ^ uVar3) * 0x1000193;
        uVar3 = (uint)*param_3;
      } while (*param_3 != 0);
    }
  }
  *(uint *)(param_2 + 0x10) = uVar2;
  *(undefined8 *)(param_2 + 0x18) = param_5;
  return uVar1;
}




void FUN_00cf34b8(undefined4 param_1,long param_2,long param_3)

{
  *(undefined4 *)(param_2 + 0x48) = param_1;
  *(ushort *)(param_2 + 0x80) = *(ushort *)(param_2 + 0x80) | 0x20;
  if (param_3 != 0) {
    *(long *)(param_2 + 0x30) = param_3;
  }
  return;
}




void FUN_00cf34d4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return;
}




void FUN_00cf34dc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return;
}




void FUN_00cf34e4(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) & 0xfe3f | (param_2 & 7) << 6;
  return;
}




void FUN_00cf34fc(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x80) = *(ushort *)(param_1 + 0x80) & 0xfff3 | (param_2 & 3) << 2;
  return;
}




void FUN_00cf3514(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_4 + 0x54) = *(undefined4 *)(param_5 + 1);
  uVar1 = *param_5;
  *(undefined4 *)(param_4 + 0x58) = param_1;
  *(undefined4 *)(param_4 + 0x5c) = param_2;
  *(undefined4 *)(param_4 + 0x60) = param_3;
  *(undefined8 *)(param_4 + 0x4c) = uVar1;
  return;
}




void FUN_00cf3530(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x78) = param_2;
  return;
}




void FUN_00cf3538(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d51820();
  *param_5 = uVar1;
  param_5[1] = param_2;
  param_5[2] = param_3;
  return;
}




void FUN_00cf3560(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float __x;
  undefined1 local_58 [8];
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  FUN_00d55794(uVar2,local_58,0);
  fVar3 = (float)FUN_00d51820(param_4);
  fVar3 = fVar3 - local_58._0_4_;
  param_2 = param_2 - local_58._4_4_;
  param_3 = param_3 - local_50;
  __x = fVar3 * fVar3 + param_2 * param_2 + param_3 * param_3;
  uVar2 = DAT_03218f68;
  fVar4 = DAT_03218f70;
  if (1e-08 <= __x) {
    fVar4 = SQRT(__x);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(__x);
    }
    uVar2 = CONCAT44(param_2 / fVar4,fVar3 / fVar4);
    fVar4 = param_3 / fVar4;
  }
  fVar3 = (float)FUN_00d50cc8(param_4);
  *param_5 = CONCAT44(local_58._4_4_ + (float)((ulong)uVar2 >> 0x20) * fVar3,
                      local_58._0_4_ + (float)uVar2 * fVar3);
  *(float *)(param_5 + 1) = fVar4 * fVar3 + local_50;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cf3664(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  code *pcVar11;
  uint uVar12;
  byte *pbVar13;
  float fVar14;
  undefined8 auStack_d0 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  uint local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  uint uStack_5c;
  uint local_58;
  byte local_54;
  byte local_53;
  ushort local_52;
  byte local_50;
  long local_48;
  
  puVar10 = auStack_d0;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) goto LAB_00cf3698;
  switch(*(ushort *)(param_1 + 0x80) >> 6 & 7) {
  case 1:
    FUN_00cedce4();
    uVar7 = FUN_00d9e390();
    FUN_00d5048c(param_2);
    cVar3 = FUN_00d55870();
    cVar4 = FUN_00d55870(uVar7);
    if (cVar3 != cVar4) goto LAB_00cf3698;
    break;
  case 2:
    FUN_00cedce4();
    uVar7 = FUN_00d9e390();
    FUN_00d5048c(param_2);
    cVar3 = FUN_00d55870();
    cVar4 = FUN_00d55870(uVar7);
    if (cVar3 == cVar4) goto LAB_00cf3698;
    break;
  case 3:
    lVar9 = FUN_00d51778(param_2);
    goto LAB_00cf372c;
  case 4:
    lVar9 = FUN_00d5048c(param_2);
LAB_00cf372c:
    uVar6 = FUN_00ced270(*(undefined4 *)(lVar9 + 0x260));
    if ((uVar6 & 1) == 0) goto LAB_00cf3698;
  }
  lVar8 = FUN_00d5048c(param_2);
  iVar5 = FUN_00d5cf60();
  lVar9 = lVar8;
  if (iVar5 != -1) {
    FUN_00d5cf60(lVar8);
    lVar9 = FUN_00d9e390();
  }
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    (**(code **)(param_1 + 0x40))(param_2,lVar8,param_1 + 0x2c);
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    pbVar13 = (byte *)0x0;
  }
  else {
    uVar6 = FUN_00d9e99c(lVar8);
    pbVar13 = (byte *)0x0;
    if ((uVar6 & 1) != 0) {
      pbVar13 = *(byte **)(param_1 + 0x20);
    }
  }
  if (((*(byte *)(param_1 + 0x80) >> 5 & 1) != 0) && (*(code **)(param_1 + 0x30) != (code *)0x0)) {
    (**(code **)(param_1 + 0x30))(0,param_2,param_1 + 0x48);
  }
  local_c0 = 0;
  pcVar11 = *(code **)(param_1 + 0x68);
  if (pcVar11 == (code *)0x0) {
    pcVar11 = *(code **)(param_1 + 0x70);
    if (pcVar11 != (code *)0x0) goto LAB_00cf381c;
  }
  else {
    puVar10 = &local_c0;
LAB_00cf381c:
    (*pcVar11)(param_2,puVar10);
  }
  if (pbVar13 == (byte *)0x0) {
    local_98 = *(uint *)(param_1 + 0x10);
  }
  else {
    uVar12 = (uint)*pbVar13;
    local_98 = 0x811c9dc5;
    if (*pbVar13 != 0) {
      do {
        pbVar13 = pbVar13 + 1;
        local_98 = (local_98 ^ uVar12) * 0x1000193;
        uVar12 = (uint)*pbVar13;
      } while (*pbVar13 != 0);
    }
  }
  uStack_a0 = 0;
  local_a8 = (undefined1 *)0x0;
  uStack_b0 = 0;
  local_b8 = 0;
  local_90 = 0xffffffff;
  local_84 = 0xff000000;
  local_7c = _DAT_03218ef8;
  local_74 = DAT_03218f40;
  local_6c = DAT_03218f48;
  local_8c = 0;
  local_68 = 0;
  local_58 = 0;
  local_52 = 0;
  local_50 = 0;
  local_94 = *(undefined4 *)(param_1 + 0x2c);
  uVar1 = *(ushort *)(param_1 + 0x80);
  local_54 = (byte)uVar1 & 1;
  local_53 = (byte)(uVar1 >> 1) & 1;
  uStack_5c = uVar1 >> 2 & 3;
  local_60 = 0;
  uVar12 = FUN_00d9e99c(lVar8);
  local_58 = ~uVar12 & 1;
  local_90 = *(undefined4 *)(param_1 + 0x3c);
  if (lVar9 == 0) {
    uStack_a0 = 0;
  }
  else {
    uStack_a0 = FUN_00d5babc(lVar9);
  }
  local_52 = CONCAT11(*(byte *)(param_1 + 0x80) >> 5,(undefined1)local_52) & 0x1ff;
  local_50 = *(byte *)(param_1 + 0x80) >> 4 & 1;
  local_b8 = local_c0;
  local_8c = CONCAT44(local_8c._4_4_,*(undefined4 *)(param_1 + 0x48));
  local_a8 = (undefined1 *)0x0;
  if (*(long *)(param_1 + 0x70) != 0) {
    local_a8 = (undefined1 *)auStack_d0;
  }
  if (*(code **)(param_1 + 0x78) != (code *)0x0) {
    (**(code **)(param_1 + 0x78))
              (param_2,param_1 + 0x4c,param_1 + 0x58,param_1 + 0x5c,param_1 + 0x60);
  }
  if (*(float *)(param_1 + 0x58) == 0.0) {
    fVar14 = *(float *)(param_1 + 0x5c);
    if (fVar14 != 0.0) goto LAB_00cf398c;
  }
  else {
    fVar14 = *(float *)(param_1 + 0x5c);
LAB_00cf398c:
    local_6c = *(undefined4 *)(param_1 + 0x54);
    local_74 = *(undefined8 *)(param_1 + 0x4c);
    local_60 = *(undefined4 *)(param_1 + 0x60);
    local_68 = CONCAT44(fVar14,*(float *)(param_1 + 0x58));
  }
  iVar5 = *(int *)(param_1 + 0x28);
  if (iVar5 == 3) {
    FUN_00d5a578(lVar8,&local_b8,*(undefined8 *)(param_1 + 0x18));
  }
  else if (iVar5 == 2) {
    FUN_00d5a560(lVar8,&local_b8,param_1 + 0x38);
  }
  else if (iVar5 == 1) {
    FUN_00d5a548(lVar8,&local_b8);
  }
LAB_00cf3698:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf3a08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d5048c(param_2);
  if ((*(byte *)(param_1 + 0x80) >> 4 & 1) == 0) {
    FUN_00d5a6dc();
    return;
  }
  FUN_00d5a6f4(uVar1,*(undefined4 *)(param_1 + 0x3c));
  return;
}




void FUN_00cf3a44(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0280f4e8;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xe0;
  return;
}




void FUN_00cf3a9c(undefined4 param_1,long param_2,undefined8 param_3,byte param_4)

{
  *(undefined8 *)(param_2 + 0x18) = param_3;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x30) = param_1;
  *(undefined4 *)(param_2 + 0x10) = 1;
  *(byte *)(param_2 + 0x58) = *(byte *)(param_2 + 0x58) & 0xfe | param_4 & 1;
  *(uint *)(param_2 + 0x4c) = (uint)param_2 & 0xffff;
  return;
}




void FUN_00cf3ac8(undefined4 param_1,long param_2,undefined8 param_3,byte param_4,byte *param_5)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_2 + 0x10) = 2;
  *(undefined8 *)(param_2 + 0x18) = param_3;
  if (param_5 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_5;
    uVar1 = 0x811c9dc5;
    if (*param_5 != 0) {
      do {
        param_5 = param_5 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_5;
      } while (*param_5 != 0);
    }
  }
  *(uint *)(param_2 + 0x20) = uVar1;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x30) = param_1;
  *(byte *)(param_2 + 0x58) = *(byte *)(param_2 + 0x58) & 0xfe | param_4 & 1;
  *(uint *)(param_2 + 0x4c) = (uint)param_2 & 0xffff;
  return;
}




void FUN_00cf3b3c(long param_1,undefined8 param_2,undefined8 param_3,byte param_4,byte *param_5)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x10) = 2;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  if (param_5 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_5;
    uVar1 = 0x811c9dc5;
    if (*param_5 != 0) {
      do {
        param_5 = param_5 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_5;
      } while (*param_5 != 0);
    }
  }
  *(uint *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfe | param_4 & 1;
  *(uint *)(param_1 + 0x4c) = (uint)param_1 & 0xffff;
  return;
}




void FUN_00cf3bb0(undefined4 param_1,long param_2,undefined8 param_3,byte param_4,undefined8 param_5
                 )

{
  *(undefined8 *)(param_2 + 0x18) = param_3;
  *(undefined8 *)(param_2 + 0x28) = param_5;
  *(undefined4 *)(param_2 + 0x30) = param_1;
  *(undefined4 *)(param_2 + 0x10) = 3;
  *(byte *)(param_2 + 0x58) = *(byte *)(param_2 + 0x58) & 0xfe | param_4 & 1;
  *(uint *)(param_2 + 0x4c) = (uint)param_2 & 0xffff;
  return;
}




void FUN_00cf3bdc(undefined4 param_1,long param_2,long param_3)

{
  *(undefined4 *)(param_2 + 0x48) = param_1;
  *(byte *)(param_2 + 0x58) = *(byte *)(param_2 + 0x58) | 0x10;
  if (param_3 != 0) {
    *(long *)(param_2 + 0x40) = param_3;
  }
  return;
}




void FUN_00cf3bf8(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfb | (param_2 & 1) << 2;
  return;
}




void FUN_00cf3c10(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xf7 | (param_2 & 1) << 3;
  return;
}




void FUN_00cf3c28(long param_1)

{
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 2;
  return;
}




void FUN_00cf3c38(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cf3c40(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  code *pcVar8;
  long lVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined1 auStack_100 [16];
  long local_f0 [2];
  undefined1 *local_e0;
  undefined8 uStack_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  ulong local_94;
  byte local_8c;
  undefined1 local_8b;
  byte local_8a;
  ushort local_89;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) == 0) {
    FUN_00d5048c(param_2);
    iVar2 = FUN_00d5cf60();
    lVar5 = FUN_00d5048c(param_2);
    if (iVar2 != -1) {
      FUN_00d5cf60(lVar5);
      lVar5 = FUN_00d9e390();
    }
    if (((*(byte *)(param_1 + 0x58) >> 4 & 1) != 0) && (*(code **)(param_1 + 0x40) != (code *)0x0))
    {
      (**(code **)(param_1 + 0x40))(0,param_2,param_1 + 0x48);
    }
    pcVar8 = *(code **)(param_1 + 0x38);
    if (pcVar8 == (code *)0x0) {
      uVar11 = *(undefined4 *)(param_1 + 0x30);
    }
    else {
      FUN_00d5048c(param_2);
      uVar11 = (*pcVar8)();
    }
    iVar2 = FUN_00d51964(param_2);
    if (iVar2 != 0) {
      uVar10 = 0;
      do {
        lVar6 = FUN_00d51954(param_2,uVar10);
        if (lVar6 != 0) {
          lVar9 = lVar5;
          if ((*(byte *)(param_1 + 0x58) >> 1 & 1) == 0) {
            if (*(code **)(param_1 + 0x50) != (code *)0x0) {
              (**(code **)(param_1 + 0x50))(param_2,auStack_100);
            }
            lVar9 = 0;
          }
          pbVar7 = *(byte **)(param_1 + 0x18);
          local_f0[1] = 0;
          local_f0[0] = 0;
          uStack_d8 = 0;
          local_e0 = (undefined1 *)0x0;
          if (pbVar7 == (byte *)0x0) {
            local_d0 = 0;
          }
          else {
            local_d0 = 0x811c9dc5;
            if (*pbVar7 != 0) {
              local_d0 = 0x811c9dc5;
              uVar3 = (uint)*pbVar7;
              do {
                pbVar7 = pbVar7 + 1;
                local_d0 = (local_d0 ^ uVar3) * 0x1000193;
                uVar3 = (uint)*pbVar7;
              } while (*pbVar7 != 0);
            }
          }
          local_c8 = 0xffffffff;
          local_ba = 0;
          local_bc = 0;
          local_c4 = 0;
          local_b9 = 0xff;
          local_a4 = DAT_03218f48;
          local_ac = DAT_03218f40;
          local_b8 = 0;
          local_b4 = _DAT_03218ef8;
          local_a0 = 0;
          local_98 = 0;
          local_89 = 0;
          local_8b = 0;
          local_94 = 1;
          local_8c = *(byte *)(param_1 + 0x58) & 1;
          local_8a = *(byte *)(param_1 + 0x58) >> 3 & 1;
          local_cc = uVar11;
          FUN_00d5048c(param_2);
          uVar3 = FUN_00d9e99c();
          local_94 = CONCAT44(~uVar3,(undefined4)local_94) & 0x1ffffffff;
          local_c8 = *(undefined4 *)(param_1 + 0x4c);
          if (lVar5 == 0) {
            uStack_d8 = 0;
          }
          else {
            uStack_d8 = FUN_00d5babc(lVar5);
          }
          local_89 = CONCAT11(*(byte *)(param_1 + 0x58) >> 2,*(byte *)(param_1 + 0x58) >> 4) & 0x101
          ;
          local_c4 = CONCAT44(local_c4._4_4_,*(undefined4 *)(param_1 + 0x48));
          local_e0 = (undefined1 *)0x0;
          if (*(long *)(param_1 + 0x50) != 0) {
            local_e0 = auStack_100;
          }
          iVar2 = *(int *)(param_1 + 0x10);
          local_f0[0] = lVar9;
          if (iVar2 == 3) {
            FUN_00d5a578(lVar6,local_f0,*(undefined8 *)(param_1 + 0x28));
          }
          else if (iVar2 == 2) {
            FUN_00d5a560(lVar6,local_f0,param_1 + 0x20);
          }
          else if (iVar2 == 1) {
            FUN_00d5a548(lVar6,local_f0);
          }
        }
        uVar10 = uVar10 + 1;
        uVar3 = FUN_00d51964(param_2);
      } while (uVar10 < uVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cf3f38(undefined8 *param_1)

{
  FUN_00cfc438();
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *param_1 = &PTR_FUN_0280f548;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  return;
}




void FUN_00cf3f74(long param_1,undefined4 param_2,byte param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(byte *)(param_1 + 0x14) = param_3 & 1;
  return;
}




void FUN_00cf3f84(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar2 = FUN_00d5048c(param_2);
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_00d5a6f4();
    return;
  }
  FUN_00d5a6dc(uVar2,*(undefined4 *)(param_1 + 0x10));
  return;
}




void FUN_00cf3fd8(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0280f5a8;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  return;
}

