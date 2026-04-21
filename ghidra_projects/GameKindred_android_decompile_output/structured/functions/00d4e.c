// functions/00d4e — 29 functions
#include "libGameKindred.h"




void FUN_00d4e3dc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_88;
  float fStack_84;
  float local_80;
  float local_78;
  float fStack_74;
  float local_70;
  undefined8 local_68;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(param_1 + 8) != 0) && (-1.0 <= *(float *)(param_1 + 0x38))) {
    if (*(short *)(param_1 + 0x58) < 0) {
      local_60 = *(float *)(param_1 + 0x1c);
      local_68 = *(undefined8 *)(param_1 + 0x14);
    }
    else {
      FUN_00d55794(*(long *)(param_1 + 8),&local_68,0);
    }
    FUN_00d4e5bc(param_1,&local_88);
    FUN_00d55794(param_2,&local_78,0);
    if (0.1 <= ((float)local_68 - local_78) * ((float)local_68 - local_78) +
               (local_68._4_4_ - fStack_74) * (local_68._4_4_ - fStack_74) +
               (local_60 - local_70) * (local_60 - local_70)) {
      fVar9 = local_78 - (float)local_68;
      fVar8 = fStack_74 - local_68._4_4_;
      fVar7 = local_70 - local_60;
      fVar3 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
      fVar6 = SQRT(fVar3);
      if (NAN(fVar6)) {
        fVar6 = sqrtf(fVar3);
      }
      fVar3 = local_88 * (fVar9 / fVar6) + (fVar8 / fVar6) * fStack_84 + (fVar7 / fVar6) * local_80;
      if (fVar3 < *(float *)(param_1 + 0x38)) {
        if ((*(ushort *)(param_1 + 0x58) >> 0xd & 1) != 0) {
          fVar7 = (float)NEON_fminnm(fVar3,0x3f800000);
          fVar9 = *(float *)(param_2 + 0x2e8);
          fVar4 = *(float *)(*(long *)(param_2 + 0x38) + 100);
          fVar5 = *(float *)(*(long *)(param_2 + 0x38) + 0x68);
          fVar8 = *(float *)(param_1 + 0x40);
          fVar3 = acosf(*(float *)(param_1 + 0x38));
          fVar7 = acosf(fVar7);
          fVar3 = sinf(fVar7 - fVar3);
          if (fVar6 * fVar3 <= fVar8 * ((fVar5 * (fVar4 + fVar9)) / fVar4)) goto LAB_00d4e57c;
        }
        uVar2 = 0;
        goto LAB_00d4e580;
      }
    }
  }
LAB_00d4e57c:
  uVar2 = 1;
LAB_00d4e580:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}




void FUN_00d4e5bc(long param_1,float *param_2)

{
  float fVar1;
  
  if (*(float *)(param_1 + 0x3c) < 0.0) {
    FUN_00d557c4(*(undefined8 *)(param_1 + 8),param_2,&DAT_03218f68);
    return;
  }
  fVar1 = cosf(*(float *)(param_1 + 0x3c));
  *param_2 = fVar1;
  param_2[1] = 0.0;
  fVar1 = sinf(*(float *)(param_1 + 0x3c));
  param_2[2] = fVar1;
  return;
}




void FUN_00d4e61c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_0281d778;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *param_1 = &PTR_FUN_0281d898;
  param_1[1] = uVar1;
  memcpy((void *)((long)param_1 + 0x14),(void *)(param_2 + 0x14),0x47);
  *param_1 = &PTR_FUN_0281d8d0;
  *(undefined4 *)((long)param_1 + 100) = DAT_03218f38;
  *(undefined8 *)((long)param_1 + 0x5c) = DAT_03218f30;
  *(undefined4 *)(param_1 + 0xe) = DAT_03218f38;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  param_1[0xd] = DAT_03218f30;
  return;
}




void FUN_00d4e6ac(long param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_48;
  float local_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_2,&local_48,0);
  if ((*(byte *)(param_1 + 0x5a) & 0x10) != 0) {
    local_44 = *(float *)(param_1 + 0x18);
  }
  fVar2 = 0.0;
  if ((*(ushort *)(param_1 + 0x58) & 0x2000) != 0) {
    fVar2 = *(float *)(*(long *)(param_2 + 0x38) + 100);
    fVar2 = *(float *)(param_1 + 0x40) *
            ((*(float *)(*(long *)(param_2 + 0x38) + 0x68) * (fVar2 + *(float *)(param_2 + 0x2e8)))
            / fVar2);
  }
  fVar3 = *(float *)(param_1 + 100);
  fVar5 = *(float *)(param_1 + 0x5c);
  fVar4 = *(float *)(param_1 + 0x60);
  fVar8 = *(float *)(param_1 + 0x68) - fVar5;
  fVar7 = *(float *)(param_1 + 0x6c) - fVar4;
  fVar12 = local_48 - fVar5;
  fVar11 = local_44 - fVar4;
  fVar6 = *(float *)(param_1 + 0x70) - fVar3;
  fVar9 = local_40 - fVar3;
  fVar10 = fVar8 * fVar12 + fVar7 * fVar11 + fVar6 * fVar9;
  if (fVar10 <= 0.0) {
    local_40 = fVar12 * fVar12 + fVar11 * fVar11;
    fVar9 = fVar9 * fVar9;
  }
  else {
    fVar9 = fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6;
    if (fVar9 <= fVar10) {
      local_48 = local_48 - *(float *)(param_1 + 0x68);
      fVar3 = local_44 - *(float *)(param_1 + 0x6c);
      fVar9 = local_40 - *(float *)(param_1 + 0x70);
      local_40 = local_48 * local_48 + fVar3 * fVar3;
      fVar9 = fVar9 * fVar9;
    }
    else {
      fVar10 = fVar10 / fVar9;
      local_48 = local_48 - (fVar5 + fVar8 * fVar10);
      fVar9 = local_44 - (fVar4 + fVar7 * fVar10);
      local_40 = local_40 - (fVar3 + fVar6 * fVar10);
      fVar9 = local_48 * local_48 + fVar9 * fVar9;
      local_40 = local_40 * local_40;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_40 + fVar9 <=
                   fVar2 * fVar2 + *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x74));
}




void FUN_00d4e838(undefined4 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_2 + 0x6c) = param_3[2];
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined4 *)(param_2 + 0x74) = param_1;
  *(undefined8 *)(param_2 + 100) = uVar2;
  *(undefined8 *)(param_2 + 0x5c) = uVar1;
  return;
}




void FUN_00d4e850(void)

{
  return;
}




uint FUN_00d4e854(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d4de04();
  uVar2 = 0;
  if ((uVar3 & 1) != 0) {
    FUN_00d55794(*(undefined8 *)(param_1 + 8),auStack_48,0);
    FUN_00d55794(param_2,auStack_58,0);
    uVar2 = FUN_00ef01b8(1,auStack_48,auStack_58,0,0,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00d4e8f4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00d4de04();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00caa5f4(*(undefined8 *)(param_1 + 8),param_2);
    return uVar2;
  }
  return 0;
}




void FUN_00d4e934(undefined8 *param_1,undefined4 param_2)

{
  FUN_00d4d9e8();
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  *param_1 = &PTR_FUN_0281d908;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  return;
}




void FUN_00d4e980(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}




void FUN_00d4e988(long param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x6c) = 1;
  *(undefined4 *)(param_1 + 100) = param_2;
  return;
}




void FUN_00d4e998(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return;
}




void FUN_00d4e9a0(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_00d4de04();
  bVar3 = 0;
  if ((uVar5 & 1) != 0) {
    lVar6 = *(long *)(param_2 + 0x18);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar6 = *(long *)(lVar6 + 0x20);
    }
    local_3c = 0xffffffff;
    if (*(int *)(param_1 + 0x60) == -1) {
      uVar5 = FUN_00d6bbac(lVar6,*(undefined4 *)(param_1 + 0x5c),&local_3c);
    }
    else {
      uVar5 = FUN_00d6bca8(lVar6,*(undefined4 *)(param_1 + 0x5c),*(int *)(param_1 + 0x60),&local_3c)
      ;
    }
    bVar2 = false;
    if ((uVar5 & 1) != 0) {
      if (*(char *)(param_1 + 0x6c) == '\0') {
        bVar2 = true;
      }
      else {
        iVar4 = FUN_00d6bf28(lVar6,local_3c);
        bVar2 = iVar4 == *(int *)(param_1 + 100);
      }
    }
    bVar3 = bVar2 ^ *(int *)(param_1 + 0x68) == 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}




void FUN_00d4eaa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281d940;
  param_1[1] = 0;
  return;
}




void FUN_00d4eab4(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (param_1[1] != 0) {
    param_3 = FUN_00d4eab4(param_1[1],param_2);
    param_3 = param_3 & 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00d4eaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,param_2,param_3);
  return;
}




void FUN_00d4eaf8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




undefined4 FUN_00d4eb00(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  return param_3;
}




void FUN_00d4eb08(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,byte param_4)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_0281d958;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 1);
  uVar1 = *param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = param_3;
  *(byte *)(param_1 + 4) = param_4 & 1;
  param_1[2] = uVar1;
  return;
}




int FUN_00d4eb38(long param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  
  FUN_00d4eb7c((int)param_1,param_2,0,param_3 + -1);
  fVar1 = (float)*(int *)(param_1 + 0x1c);
  if ((float)param_3 <= (float)*(int *)(param_1 + 0x1c)) {
    fVar1 = (float)param_3;
  }
  return (int)fVar1;
}




void FUN_00d4eb7c(undefined8 param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  do {
    iVar1 = param_3 + param_4;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    iVar7 = param_3;
    iVar2 = param_4;
    if (param_3 <= param_4) {
      uVar6 = *(undefined8 *)(param_2 + (long)(iVar1 >> 1) * 8);
      do {
        puVar5 = (undefined8 *)(param_2 + -8 + (long)iVar7 * 8);
        do {
          iVar9 = iVar7;
          puVar5 = puVar5 + 1;
          iVar1 = FUN_00d4eca0(param_1,*puVar5,uVar6);
          iVar7 = iVar9 + 1;
        } while (iVar1 == -1);
        puVar4 = (undefined8 *)(param_2 + 8 + (long)iVar2 * 8);
        do {
          iVar8 = iVar2;
          puVar4 = puVar4 + -1;
          iVar1 = FUN_00d4eca0(param_1,*puVar4,uVar6);
          iVar2 = iVar8 + -1;
        } while (iVar1 == 1);
        iVar2 = iVar8;
        iVar7 = iVar9;
        if (iVar9 <= iVar8) {
          uVar3 = *puVar5;
          *puVar5 = *puVar4;
          *puVar4 = uVar3;
          iVar2 = iVar8 + -1;
          iVar7 = iVar9 + 1;
        }
      } while (iVar7 <= iVar2);
    }
    if (param_3 < iVar2) {
      FUN_00d4eb7c(param_1,param_2,param_3);
    }
    param_3 = iVar7;
  } while (iVar7 < param_4);
  return;
}




void FUN_00d4eca0(long param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float local_58 [2];
  float local_50;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x20) != '\0') {
    if ((*(byte *)(param_2 + 0x2f4) & 1) == 0) {
      if ((*(uint *)(param_3 + 0x2f4) & 1) != 0) {
        uVar2 = 1;
        goto LAB_00d4ed74;
      }
    }
    else if ((*(uint *)(param_3 + 0x2f4) & 1) == 0) {
      uVar2 = 0xffffffff;
      goto LAB_00d4ed74;
    }
  }
  FUN_00d55794(param_2,&local_48,0);
  FUN_00d55794(param_3,local_58,0);
  local_48 = local_48 - *(float *)(param_1 + 0x10);
  local_58[0] = local_58[0] - *(float *)(param_1 + 0x10);
  fStack_44 = fStack_44 - *(float *)(param_1 + 0x14);
  fVar4 = *(float *)((ulong)local_58 | 4) - *(float *)(param_1 + 0x14);
  local_40 = local_40 - *(float *)(param_1 + 0x18);
  local_50 = local_50 - *(float *)(param_1 + 0x18);
  fVar3 = local_48 * local_48 + fStack_44 * fStack_44 + local_40 * local_40;
  fVar4 = local_58[0] * local_58[0] + fVar4 * fVar4 + local_50 * local_50;
  uVar2 = (uint)(fVar4 < fVar3);
  if (fVar3 < fVar4) {
    uVar2 = 0xffffffff;
  }
LAB_00d4ed74:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




void FUN_00d4eda4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_0281d970;
  param_1[1] = 0;
  param_1[2] = param_2;
  return;
}




void FUN_00d4edbc(long param_1,undefined8 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00d4edc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(param_2,param_3);
  return;
}




void FUN_00d4edd0(void)

{
  return;
}




void FUN_00d4edd4(void)

{
  return;
}




void FUN_00d4edf0(void)

{
  return;
}




void FUN_00d4ee08(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xd4ee0c);
  (*pcVar1)();
}




void FUN_00d4ee0c(long *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  for (; (lVar1 != 0 && (param_1 = param_1 + 1, param_2 != 0)); param_2 = param_2 + -1) {
    lVar1 = *param_1;
  }
  return;
}




void FUN_00d4ee30(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ushort *puVar3;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_0281da28;
  param_1[5] = &PTR_FUN_0281da58;
  param_1[8] = 0;
  param_1[7] = 0;
  FUN_00cf29d8(param_1 + 9);
  param_1[0xc] = 0;
  puVar3 = (ushort *)(param_1 + 0xd);
  *(undefined2 *)((long)param_1 + 0x74) = 0;
  param_1[0x38] = param_1;
  param_1[0x39] = 0;
  uVar1 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x3a) = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x3c) = DAT_03218f38;
  uVar2 = DAT_03218f30;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)(param_1 + 0x43) = 0x3f800000;
  param_1[0x3b] = uVar2;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  *(undefined8 *)((long)param_1 + 0x21c) = 0;
  *(undefined8 *)((long)param_1 + 0x22c) = 0xbf800000;
  param_1[0x1e] = 0;
  param_1[0x1d] = FUN_00d4f224;
  *(undefined2 *)(param_1 + 0x15) = 1;
  param_1[0x20] = 0;
  param_1[0x1f] = FUN_00d4f2a0;
  param_1[0x18] = FUN_00d4f0e8;
  *(undefined2 *)(param_1 + 0x1c) = 2;
  *(uint *)(param_1 + 0x47) = *(uint *)(param_1 + 0x47) & 0xffff03c0 | 1;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)((long)param_1 + 0x23c) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  *(undefined2 *)((long)param_1 + 0xaa) = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = FUN_00d4f3d8;
  *(undefined2 *)(param_1 + 0x2a) = 4;
  *(undefined2 *)(param_1 + 0x23) = 3;
  *(undefined2 *)((long)param_1 + 0xe2) = 0;
  *(undefined2 *)((long)param_1 + 0x11a) = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined2 *)((long)param_1 + 0x152) = 0;
  param_1[0x2d] = FUN_00d4f5b8;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined2 *)(param_1 + 0x31) = 5;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined2 *)((long)param_1 + 0x18a) = 0;
  param_1[0x34] = FUN_00d4f6f0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *puVar3 = *puVar3 & 0x8000 | 0x1bff;
  FUN_00d4f820(puVar3,0,1);
  FUN_00d4f820(puVar3,1,2);
  FUN_00d4f820(puVar3,1,5);
  FUN_00d4f820(puVar3,1,3);
  FUN_00d4f820(puVar3,3,5);
  FUN_00d4f820(puVar3,3,1);
  FUN_00d4f820(puVar3,2,5);
  FUN_00d4f820(puVar3,2,1);
  FUN_00d4f820(puVar3,2,4);
  FUN_00d4f820(puVar3,4,5);
  FUN_00d4f820(puVar3,4,1);
  FUN_00d4f820(puVar3,4,3);
  FUN_00d4f820(puVar3,5,1);
  FUN_00d4f820(puVar3,5,3);
  FUN_00d4f8a8(puVar3,0,0,0);
  return;
}

