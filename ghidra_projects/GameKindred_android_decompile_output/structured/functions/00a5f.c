// functions/00a5f — 16 functions
#include "libGameKindred.h"




void FUN_00a5f054(long param_1)

{
  if (*(int *)(param_1 + 0xd0) != -1) {
    FUN_00a5f090(param_1,0);
  }
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  return;
}




void FUN_00a5f090(long param_1,byte param_2,uint param_3)

{
  long lVar1;
  undefined4 uVar2;
  bool bVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined4 uVar6;
  
  lVar1 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  bVar3 = (param_2 & 1) == 0;
  uVar2 = 0x3d4ccccd;
  if (bVar3) {
    uVar2 = 0x3dcccccd;
  }
  uVar6 = 0x3f800000;
  if (bVar3) {
    uVar6 = 0;
  }
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
    FUN_00efdd74(puVar5);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efddc4(uVar6,puVar5);
  FUN_00efcac4(uVar2,puVar5);
  lVar1 = param_1 + (ulong)param_3 * 0xf0 + 0x1848;
  FUN_00f01980(lVar1);
  FUN_00f022a0(lVar1,puVar5);
  *(byte *)(param_1 + (ulong)param_3 + 0x2db0) = param_2 & 1;
  return;
}




void FUN_00a5f1c4(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [64];
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 200) != 0) {
    FUN_00a5eec8(param_1);
  }
  fVar15 = 0.0;
  FUN_00f04944(0,0,0,0,auStack_b8,DAT_03210f58,1,0,0,1,0,0,0);
  uVar9 = FUN_0091f2ec(0x10);
  if ((uVar9 & 1) != 0) {
    FUN_00a5f664(param_1,auStack_b8,0);
  }
  uVar9 = FUN_0091f2ec(0x11);
  if ((uVar9 & 1) != 0) {
    FUN_00a5f664(param_1,auStack_b8,1);
  }
  uVar9 = FUN_0091f2ec(0x12);
  if ((uVar9 & 1) != 0) {
    FUN_00a5f664(param_1,auStack_b8,2);
  }
  uVar9 = FUN_0091f2ec(0x13);
  if ((uVar9 & 1) != 0) {
    FUN_00a5f664(param_1,auStack_b8,3);
  }
  uVar9 = FUN_0091f2ec(0x14);
  if ((uVar9 & 1) != 0) {
    FUN_00a5f664(param_1,auStack_b8,4);
  }
  uVar9 = FUN_0091f2ec(0x15);
  if ((uVar9 & 1) != 0) {
    FUN_00a5f664(param_1,auStack_b8,5);
  }
  if (*(char *)(param_1 + 0x2fa8) == '\0') {
    *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0xd8) != -1) {
    fVar13 = (float)FUN_00a5f7fc(param_1);
    fVar16 = *(float *)(param_1 + 0x5c8);
    lVar12 = param_1 + 0x588;
    fVar14 = (float)(**(code **)(*(long *)(param_1 + 0x588) + 0x50))(lVar12);
    FUN_00ceace8();
    iVar4 = FUN_00ceb174();
    fVar17 = *(float *)(lVar12 + (long)iVar4 * 0xf0 + -0xb0);
    FUN_00ceace8();
    iVar4 = FUN_00ceb174();
    fVar16 = fVar16 - fVar14 * 0.5;
    fVar14 = (float)(**(code **)(*(long *)(lVar12 + (long)iVar4 * 0xf0 + -0xf0) + 0x50))();
    fVar17 = fVar17 + fVar14 * 0.5;
    if (fVar17 <= fVar13) {
      fVar13 = fVar17;
    }
    fVar14 = *(float *)(param_1 + 0x5cc);
    if (fVar16 <= fVar13) {
      fVar16 = fVar13;
    }
    if ((*(float *)(param_1 + 0x2e00) != fVar16) || (*(float *)(param_1 + 0x2e04) != fVar14)) {
      *(float *)(param_1 + 0x2e00) = fVar16;
      *(float *)(param_1 + 0x2e04) = fVar14;
      FUN_0091ada4(param_1 + 0x2dc0);
      fVar14 = *(float *)(param_1 + 0x5cc);
    }
    if (*(int *)(param_1 + (long)*(int *)(param_1 + 0xd8) * 4 + 0x2d88) == -1) {
      FUN_00a5f090(param_1,0);
    }
    else {
      if (10.0 < ABS(fVar16 - *(float *)(param_1 + 0x2fa0))) {
        *(uint *)(param_1 + 0x2e44) = *(uint *)(param_1 + 0x2e44) | 4;
      }
      fVar13 = ABS(*(float *)(param_1 + 0x5c8) - *(float *)(param_1 + 0x6b8));
      FUN_00ceace8();
      iVar4 = FUN_00ceb174();
      if (0 < iVar4) {
        uVar9 = 0;
        fVar17 = fVar13 * 0.5;
        lVar12 = 0x5c8;
        do {
          if ((fVar17 <= ABS(fVar14 - fVar15)) ||
             (fVar17 <= ABS(*(float *)(param_1 + lVar12) - fVar16))) {
            uVar11 = 0;
          }
          else {
            uVar11 = 1;
          }
          FUN_00a5f090(param_1,uVar11,uVar9 & 0xffffffff);
          uVar9 = uVar9 + 1;
          FUN_00ceace8();
          iVar4 = FUN_00ceb174();
          lVar12 = lVar12 + 0xf0;
        } while ((long)uVar9 < (long)iVar4);
      }
      uVar9 = FUN_019807a4();
      bVar3 = false;
      if ((uVar9 & 1) != 0) {
        iVar4 = FUN_019807b8();
        if (iVar4 == 0) {
          bVar3 = false;
        }
        else {
          pbVar10 = (byte *)FUN_019807cc(0);
          bVar3 = (*pbVar10 & 1) == 0;
        }
      }
      uVar9 = FUN_019806a4();
      if ((uVar9 & 1) == 0) {
        if (!bVar3) goto LAB_00a5f404;
      }
      else {
        uVar5 = FUN_019806f8(0);
        if (!bVar3 && (uVar5 & 1) == 0) goto LAB_00a5f404;
      }
      FUN_00a5f090(param_1,0,*(undefined4 *)(param_1 + 0xd8));
      fVar13 = fVar13 * 0.5;
      if (ABS(fVar14 - fVar15) < fVar13) {
        FUN_00ceace8();
        iVar4 = FUN_00ceb174();
        if (0 < iVar4) {
          uVar9 = 0;
          lVar12 = 0x5c8;
          do {
            if (ABS(*(float *)(param_1 + lVar12) - fVar16) < fVar13) {
              iVar4 = (int)uVar9;
              if (*(int *)(param_1 + 0xd8) != iVar4) {
                uVar5 = FUN_00a5f8e8(param_1);
                uVar6 = FUN_00a5f8e8(param_1,uVar9 & 0xffffffff);
                if ((uVar6 & uVar5) != 0xffffffff) {
                  lVar12 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
                  uVar1 = *(undefined4 *)(lVar12 + 0x260);
                  uVar7 = FUN_00a5f8e8(param_1,*(undefined4 *)(param_1 + 0xd8));
                  uVar8 = FUN_00a5f8e8(param_1,uVar9 & 0xffffffff);
                  FUN_00d06788(auStack_e0,uVar1,uVar7,uVar8);
                  FUN_00ce20fc(auStack_e0);
                }
                FUN_00a5eec8(param_1);
                FUN_00a5f090(param_1,0,uVar9 & 0xffffffff);
                if (*(int *)(param_1 + 0xd0) == iVar4) {
                  if (iVar4 != -1) {
                    FUN_00a5f090(param_1,0,uVar9 & 0xffffffff);
                  }
                  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
                }
                *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
              }
              break;
            }
            uVar9 = uVar9 + 1;
            FUN_00ceace8();
            iVar4 = FUN_00ceb174();
            lVar12 = lVar12 + 0xf0;
          } while ((long)uVar9 < (long)iVar4);
        }
      }
    }
    *(uint *)(param_1 + 0x2e44) = *(uint *)(param_1 + 0x2e44) & 0xfffffffb;
    *(char *)(param_1 + 0x2fa8) = '\0';
  }
LAB_00a5f404:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a5f664(long param_1,long *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  iVar1 = *(int *)(param_1 + 0xd8);
  if (((iVar1 == -1) || (iVar1 != param_3)) || (*(int *)(param_1 + (long)iVar1 * 4 + 0x2d88) == -1))
  goto LAB_00a5f7c0;
  if (*(int *)(param_1 + 0xd0) == iVar1) {
    uVar4 = FUN_0093d930();
    if (((uVar4 & 1) == 0) || (*(int *)(param_1 + 0xd0) == -1)) goto LAB_00a5f7c0;
    uVar4 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
    if ((((uVar4 & 1) != 0) || (uVar2 = DAT_03210c64, DAT_03210fd8 == DAT_03210f50)) &&
       (uVar4 = FUN_00f04a94(param_2), uVar2 = DAT_03210c64, (uVar4 & 1) != 0)) {
      FUN_00ed8868(auStack_78,DAT_03210c6c,0xffffffff,0);
      FUN_00f04760(param_1,auStack_78,1);
      *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
      goto LAB_00a5f7c0;
    }
  }
  else {
    if (*(int *)(param_1 + 0xd0) != -1) {
      FUN_00a5f090(param_1,0);
    }
    FUN_00a5f090(param_1,1,iVar1);
    *(int *)(param_1 + 0xd0) = iVar1;
    uVar2 = DAT_03210c64;
    *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  }
  FUN_00ed8868(auStack_78,uVar2,param_3,0);
  FUN_00f04760(param_1,auStack_78,1);
LAB_00a5f7c0:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a5f7fc(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  uVar3 = FUN_019807a4();
  if ((uVar3 & 1) == 0) {
    FUN_01980738((long)&local_40 + 4,&local_40,0,0);
  }
  else {
    iVar2 = FUN_019807b8();
    if (iVar2 != 0) {
      lVar4 = FUN_019807cc(0);
      local_40 = CONCAT44(*(undefined4 *)(lVar4 + 4),*(undefined4 *)(lVar4 + 8));
    }
  }
  param_1 = param_1 + 0x430;
  FUN_00f13420(param_1);
  FUN_00965ecc();
  FUN_00f13420(param_1);
  FUN_00965ecc();
  FUN_00f13420(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00a5f8e8(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  if ((*(long *)(param_1 + 200) != 0) && (iVar1 = FUN_00d72940(), iVar1 != 0)) {
    uVar4 = 0;
    do {
      iVar1 = FUN_00d73084(*(undefined8 *)(param_1 + 200),uVar4);
      if (iVar1 == -1) {
LAB_00a5f948:
        if (param_2 == 0) {
          return uVar4;
        }
        param_2 = param_2 + -1;
      }
      else {
        FUN_00d73214(*(undefined8 *)(param_1 + 200),iVar1);
        uVar3 = FUN_00a1feb4();
        if ((uVar3 & 1) == 0) goto LAB_00a5f948;
      }
      uVar4 = uVar4 + 1;
      uVar2 = FUN_00d72940(*(undefined8 *)(param_1 + 200));
    } while (uVar4 < uVar2);
  }
  return 0xffffffff;
}




undefined4 FUN_00a5f97c(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((*(long *)(param_1 + 200) != 0) && (iVar1 = *(int *)(param_1 + 0xd0), iVar1 != -1)) {
    FUN_00ceace8();
    iVar2 = FUN_00ceb174();
    if (iVar1 < iVar2) {
      puVar3 = (undefined4 *)(param_1 + (long)*(int *)(param_1 + 0xd0) * 4 + 0x2d88);
      goto LAB_00a5f9cc;
    }
  }
  puVar3 = &DAT_01bc8fa4;
LAB_00a5f9cc:
  return *puVar3;
}




void FUN_00a5f9dc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xd4) = param_2;
  return;
}




void FUN_00a5f9e4(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00ed8868(auStack_58,DAT_03210c64,param_2,0);
  FUN_00f04760(param_1,auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a5fa58(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4,
                 uint param_5)

{
  long lVar1;
  undefined4 uVar2;
  
  if (((param_5 != 0xffffffff) && (*(int *)(param_3 + 0xd8) == -1)) &&
     (lVar1 = param_3 + ((long)((ulong)param_5 << 0x20) >> 0x1e), *(int *)(lVar1 + 0x2d88) != -1)) {
    *(uint *)(param_3 + 0xd8) = param_5;
    lVar1 = FUN_00d73214(*(undefined8 *)(param_3 + 200),*(undefined4 *)(lVar1 + 0x2d88));
    FUN_00f0e578(param_3 + 0x2dc0,*(undefined8 *)(lVar1 + 8));
    uVar2 = FUN_00a5f7fc(param_3);
    *(undefined4 *)(param_3 + 0x2fa0) = uVar2;
    *(undefined4 *)(param_3 + 0x2fa4) = param_2;
    *(undefined1 *)(param_3 + 0x2fa8) = 1;
  }
  return;
}




void FUN_00a5faec(void)

{
  return;
}




void FUN_00a5faf0(long param_1,uint param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 0x2d88) = param_3;
  plVar4 = *(long **)(param_1 + 0xb8);
  uVar7 = (ulong)param_2;
  uVar5 = 0;
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_1 + 0xc0) == (int)plVar4[1]) {
      uVar5 = (**(code **)(*plVar4 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0xc0) = DAT_03214ce8;
    }
  }
  uVar5 = FUN_00d9eae0(uVar5);
  lVar6 = FUN_00d73214(uVar5,param_3);
  FUN_00f0e578(param_1 + uVar7 * 0xf0 + 0x588,*(undefined8 *)(lVar6 + 8));
  uVar2 = FUN_00d7312c(uVar5,param_3);
  if (uVar2 < 2) {
    lVar6 = param_1 + uVar7 * 0x130;
    *(uint *)(lVar6 + 0x222c) = *(uint *)(lVar6 + 0x222c) & 0xfffffffb;
  }
  else {
    FUN_00e70510(&local_68);
    FUN_00e70e18(&local_68,&DAT_01bb6d43,uVar2);
    lVar6 = param_1 + uVar7 * 0x130;
    (**(code **)(*(long *)(lVar6 + 0x21a8) + 0x138))(lVar6 + 0x21a8,&local_68);
    *(uint *)(lVar6 + 0x222c) = *(uint *)(lVar6 + 0x222c) | 4;
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
  }
  iVar3 = FUN_00d72f48(uVar5,param_3);
  if (iVar3 == *(int *)(param_1 + 0xd4)) {
    FUN_00a5fc78(param_1,param_2);
    *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a5fc78(long param_1,ulong param_2)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  
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
    FUN_00efdd74(puVar3);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efddc4(0x3f800000,puVar3);
  FUN_00efcac4(0x3e4ccccd,puVar3);
  lVar1 = DAT_03210d00;
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
    FUN_00efcad4(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f000000,puVar4);
  FUN_00efc930(puVar3,puVar4);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efdd74(puVar5);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar5);
  FUN_00efcac4(0x3f800000,puVar5);
  FUN_00efc930(puVar4,puVar5);
  lVar1 = param_1 + (param_2 & 0xffffffff) * 0xf0 + 0x1848;
  FUN_00f01980(lVar1);
  FUN_00f022a0(lVar1,puVar3);
  return;
}




undefined1 FUN_00a5fec4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2fa8);
}




void FUN_00a5fed0(void *param_1)

{
  FUN_00a5a0e8();
  operator_delete(param_1);
  return;
}




void FUN_00a5fef4(long *param_1)

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
  long *plVar10;
  long lVar11;
  uint uVar12;
  undefined4 local_70 [2];
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  FUN_00f13ca4();
  param_1[0x18] = 0;
  plVar1 = param_1 + 0x1a;
  *(undefined4 *)(param_1 + 0x17) = 0xffff;
  *param_1 = (long)&PTR_FUN_027cc3b8;
  *(undefined4 *)(param_1 + 0x19) = 0xffff;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x31;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x4f;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x6d;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x8b;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0xa9;
  FUN_00f1306c(plVar6);
  plVar7 = param_1 + 0xd4;
  FUN_00f0d160(plVar7);
  plVar8 = param_1 + 0xfa;
  FUN_00f0d160();
  FUN_00e70510(param_1 + 0x120);
  FUN_00f13ca4(param_1 + 0x122);
  plVar9 = param_1 + 0x139;
  FUN_00f0e4a8(plVar9);
  plVar10 = param_1 + 0x157;
  FUN_00f0e4a8(plVar10);
  param_1[0x175] = 0x43c80000;
  *(byte *)(param_1 + 0x176) = *(byte *)(param_1 + 0x176) & 0xe0 | 0x10;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar1,plVar9,1);
  FUN_00f023ec(plVar1,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  FUN_00f133a4(plVar6,plVar7,1);
  FUN_00f133a4(plVar6,plVar8,1);
  FUN_00f0e540(plVar2,PTR_s_build___HUDItemsAndBuffs_atlas_02be3448);
  FUN_00f0e578(plVar2,"icon_item_empty");
  FUN_00f0e540(plVar3,PTR_s_build___HUDItemsAndBuffs_atlas_02be3448);
  FUN_00f0e578(plVar3,"icon_item_empty");
  if ((*(uint *)((long)param_1 + 0x2fc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x2fc) = *(uint *)((long)param_1 + 0x2fc) & 0xffff807f;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e540(plVar4,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(plVar4,"hud_store_item_node_regular");
  FUN_00f0e548(plVar9,PTR_s_build___HUDPartsCommon_atlas_02be3440,"generic_slash_line");
  uVar12 = *(uint *)((long)param_1 + 0xa4c);
  if ((uVar12 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0xa4c) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x3300;
    FUN_0091ada4(plVar9);
    uVar12 = *(uint *)((long)param_1 + 0xa4c);
  }
  *(uint *)((long)param_1 + 0xa4c) =
       uVar12 & 0xfffffff8 |
       uVar12 & 3 | ((*(byte *)(param_1 + 0x176) >> 2 ^ 0xffffffff) >> 2 & 1) << 2;
  FUN_00f0e548(plVar10,PTR_s_build___HUDPartsCommon_atlas_02be3440,"generic_slash_line");
  uVar12 = *(uint *)((long)param_1 + 0xb3c);
  if ((uVar12 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0xb3c) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x3300;
    FUN_0091ada4(plVar10);
    uVar12 = *(uint *)((long)param_1 + 0xb3c);
  }
  *(uint *)((long)param_1 + 0xb3c) =
       uVar12 & 0xfffffff8 |
       uVar12 & 3 | ((*(byte *)(param_1 + 0x176) >> 2 ^ 0xffffffff) >> 2 & 1) << 2;
  *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) | 1;
  FUN_00f0e540(plVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(plVar5,"hud_store_item_node_owned");
  uVar12 = *(uint *)((long)param_1 + 0x724);
  *(uint *)((long)param_1 + 0x4dc) = *(uint *)((long)param_1 + 0x4dc) & 0xfffffffb;
  if ((uVar12 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x724) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x7280;
    FUN_0091ada4(plVar7);
  }
  local_70[0] = 0xffb0b0b0;
  FUN_00f0d7fc(plVar8,local_70);
  uVar12 = *(uint *)((long)param_1 + 0x854);
  if ((uVar12 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x854) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x7280;
    FUN_0091ada4(plVar8);
  }
  FUN_00a602d8(param_1);
  FUN_00a60710(param_1);
  if (*(long *)(lVar11 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

