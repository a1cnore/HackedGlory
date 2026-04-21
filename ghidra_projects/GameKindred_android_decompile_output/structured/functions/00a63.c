// functions/00a63 — 12 functions
#include "libGameKindred.h"




void FUN_00a63028(long param_1)

{
  FUN_00a62d78(param_1 + -0xb8);
  return;
}




void FUN_00a63030(void *param_1)

{
  FUN_00a62d78();
  operator_delete(param_1);
  return;
}




void FUN_00a63054(long param_1)

{
  FUN_00a62d78((void *)(param_1 + -0xb8));
  operator_delete((void *)(param_1 + -0xb8));
  return;
}




void FUN_00a6307c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  *(undefined8 *)(param_1 + 0xd8) = param_2;
  FUN_00a63088(param_1,0);
  return;
}




void FUN_00a63088(long param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  
  piVar1 = (int *)(param_1 + 0x298dc);
  if (*piVar1 != param_2) {
    *(undefined8 *)(param_1 + 0x24d90) = 0;
  }
  *piVar1 = param_2;
  FUN_00a63a44(param_1);
  if (*(long *)(param_1 + 0xd0) == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_00d9ebe8();
    uVar3 = 0;
    if (*(int *)(lVar2 + 0x28) != 0xfe) {
      uVar3 = (uint)(*piVar1 == 0) << 2;
    }
  }
  *(uint *)(param_1 + 0x2653c) = *(uint *)(param_1 + 0x2653c) & 0xfffffffb | uVar3;
  *(uint *)(param_1 + 0x263ec) = *(uint *)(param_1 + 0x263ec) & 0xfffffffb | uVar3;
  return;
}




void FUN_00a63138(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  ushort *puVar6;
  
  FUN_00b89d24(param_1 + 0x4f0,param_2 & 1,param_3,param_4 & 1);
  *(uint *)(param_1 + 0x24c34) = *(uint *)(param_1 + 0x24c34) & 0xfffffffb;
  *(uint *)(param_1 + 0x24d24) = *(uint *)(param_1 + 0x24d24) & 0xfffffffb;
  if ((param_2 & 1) != 0) {
    uVar2 = FUN_00efed6c(0x3df5c28f);
    lVar4 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efc8e8(puVar6);
      *(undefined ***)puVar6 = &PTR_FUN_02825100;
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00f02308(param_1 + 0x24bb0,uVar2,puVar6,0);
    uVar2 = FUN_00efed6c(0x3df5c28f);
    lVar4 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efc8e8(puVar6);
      *(undefined ***)puVar6 = &PTR_FUN_02825100;
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00f02308(param_1 + 0x24ca0,uVar2,puVar6,0);
  }
  lVar4 = 0;
  uVar1 = (param_2 & 1) << 4;
  do {
    lVar5 = *(long *)(param_1 + 0x1788 + lVar4);
    if (lVar5 != 0) {
      *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) & 0xffffffef | uVar1;
    }
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x180);
  lVar4 = 0;
  do {
    lVar5 = *(long *)(param_1 + 0x265f8 + lVar4);
    if (lVar5 != 0) {
      *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) & 0xffffffef | uVar1;
    }
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x40);
  *(uint *)(param_1 + 0x24e2c) = *(uint *)(param_1 + 0x24e2c) & 0xffffffef | uVar1;
  return;
}




void FUN_00a633c8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  ulong uVar12;
  
  uVar10 = (**(code **)(*param_1 + 0x48))();
  FUN_00f13f08(uVar10,0x42400000,param_1 + 0x4976);
  uVar10 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(uVar10,0x42400000,param_1 + 0x4994);
  FUN_00f07940(0,0,param_1 + 0x4976,0,param_1,0);
  FUN_00f07940(0,0,param_1 + 0x4994,3,param_1,3);
  *(uint *)((long)param_1 + 0x24c34) = *(uint *)((long)param_1 + 0x24c34) | 0x10;
  *(uint *)((long)param_1 + 0x24d24) = *(uint *)((long)param_1 + 0x24d24) | 0x10;
  fVar8 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  lVar6 = 0x2f1;
  uVar12 = (ulong)(uint)(DAT_02be34e8 + DAT_02be34e8);
  fVar8 = (fVar8 - (DAT_02be34e8 + DAT_02be34e8)) / 3.0;
  do {
    if ((ulong)*(uint *)(param_1 + 0x321) <= lVar6 - 0x2f1U) break;
    if (param_1[lVar6] != 0) {
      FUN_00a60a0c(fVar8);
      FUN_00a602d8(param_1[lVar6]);
    }
    uVar5 = lVar6 - 0x2f0;
    lVar6 = lVar6 + 1;
  } while (uVar5 < 0x30);
  lVar6 = 0;
  do {
    plVar2 = param_1 + lVar6 * 0xa7 + 0xfc;
    lVar3 = FUN_00ed0280(plVar2);
    fVar9 = (float)uVar12;
    if (lVar3 != 0) {
      iVar7 = 0;
      lVar4 = 0;
      do {
        if (iVar7 == 0) {
          lVar4 = *(long *)(lVar3 + 0x20);
          fVar9 = DAT_02be34ec * 0.5;
          uVar10 = 0;
        }
        else {
          uVar10 = 2;
          fVar9 = 0.0;
        }
        FUN_00f07b18(fVar9,lVar3,0,lVar4,uVar10);
        fVar9 = (float)uVar12;
        plVar1 = (long *)(lVar3 + 0x30);
        iVar7 = iVar7 + -1;
        lVar4 = lVar3;
        lVar3 = *plVar1;
      } while (*plVar1 != 0);
    }
    FUN_00ed0418(plVar2,1);
    FUN_00ed0470(plVar2,1,0,0,0);
    fVar11 = fVar9;
    (**(code **)(*param_1 + 0x48))(param_1);
    plVar2 = param_1 + lVar6 * 0x17 + 0xb7;
    if (fVar11 <= fVar9) {
      fVar9 = fVar11;
    }
    uVar12 = (ulong)(uint)fVar9;
    FUN_00f13f08(fVar8,plVar2);
    FUN_00f07b18(0,plVar2,5,param_1,5);
    if (lVar6 != 0) {
      FUN_00f07b18(DAT_02be34e8,plVar2,3,param_1 + (ulong)((int)lVar6 - 1) * 0x17 + 0xb7,1);
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 3);
  FUN_00a63648(param_1);
  return;
}




void FUN_00a63648(long *param_1)

{
  uint *puVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puVar1 = (uint *)(param_1 + 0x531c);
  uVar8 = (ulong)*puVar1;
  if (1 < *puVar1) {
    uVar10 = 2;
    plVar9 = param_1 + 0x4cc0;
    do {
      if ((*plVar9 != 0) && (plVar9[-1] != 0)) {
        FUN_00f07b18(DAT_02be34f0,*plVar9,3,plVar9[-1],1);
        uVar8 = (ulong)*puVar1;
      }
      if (7 < uVar10) break;
      bVar3 = uVar10 < uVar8;
      uVar10 = uVar10 + 1;
      plVar9 = plVar9 + 1;
    } while (bVar3);
  }
  FUN_00f07b18(0,param_1 + 0x4c97,3,param_1 + 0xb7,3);
  uVar13 = 0x42820000;
  FUN_00f07b18(0x42820000,param_1 + 0x4c97,0,param_1,0);
  plVar9 = param_1 + 0x4c6d;
  fVar11 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(fVar11 * 0.9,0x40000000,plVar9);
  if ((*(float *)(param_1 + 0x4c77) != (float)DAT_03218f08) ||
     (*(float *)((long)param_1 + 0x263bc) != DAT_03218f08._4_4_)) {
    param_1[0x4c77] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar9);
  }
  fVar11 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar12 = *(float *)((long)param_1 + 0x264fc) + 210.0;
  if ((*(float *)(param_1 + 0x4c75) != fVar11 * 0.5) ||
     (*(float *)((long)param_1 + 0x263ac) != fVar12)) {
    *(float *)(param_1 + 0x4c75) = fVar11 * 0.5;
    *(float *)((long)param_1 + 0x263ac) = fVar12;
    FUN_0091ada4(plVar9);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(*plVar9 + 0x28))(plVar9,&local_60);
  if (((param_1[0x1a] == 0) || (lVar4 = FUN_00d9ebe8(), lVar4 == 0)) ||
     (*(int *)(lVar4 + 0x28) == 0xfe)) {
    if ((*(float *)(param_1 + 0x49be) != 1.25) || (*(float *)((long)param_1 + 0x24df4) != 1.25)) {
      lVar4 = NEON_fmov(0x3fa00000,4);
      param_1[0x49be] = lVar4;
      FUN_0091ada4(param_1 + 0x49b5);
    }
    FUN_00f07940(0,0,param_1 + 0x49b5,8,param_1,8);
  }
  else {
    plVar9 = param_1 + 0x49b5;
    if ((*(float *)(param_1 + 0x49be) != 1.0) || (*(float *)((long)param_1 + 0x24df4) != 1.0)) {
      lVar4 = NEON_fmov(0x3f800000,4);
      param_1[0x49be] = lVar4;
      FUN_0091ada4(plVar9);
    }
    if (*puVar1 == 0) {
      uVar5 = 0;
      uVar7 = 0;
      plVar6 = param_1;
    }
    else {
      uVar5 = 5;
      uVar7 = 5;
      uVar13 = 0;
      plVar6 = (long *)param_1[0x4cbf];
    }
    FUN_00f07b18(uVar13,plVar9,uVar5,plVar6,uVar7);
    FUN_00f07b18(0,plVar9,1,param_1,1);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a6398c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x24d90);
  if (lVar1 != 0) {
    FUN_00a60a14(lVar1,0);
  }
  *(long *)(param_1 + 0x24d90) = 0;
  if (*(int *)(param_1 + 0x298dc) != 0) {
    *(undefined8 *)(param_1 + 0x24d98) = 0;
  }
  return;
}




void FUN_00a639e4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    for (lVar1 = FUN_00ed0280(param_1 + lVar2 * 0x538 + 0x7e0); lVar1 != 0;
        lVar1 = *(long *)(lVar1 + 0x30)) {
      FUN_00a60a14(lVar1,2);
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  return;
}




void FUN_00a63a44(long param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined4 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_1 + 0x24d90) == 0) {
    iVar5 = 0xffff;
  }
  else {
    iVar5 = FUN_00a60ab4();
  }
  FUN_00a62f00(param_1);
  FUN_00d74024(*(undefined8 *)(param_1 + 0xd0),&local_6c);
  uVar11 = FUN_00d74a40(*(undefined8 *)(param_1 + 0xd8),local_6c);
  if ((uVar11 & 1) == 0) {
    thunk_FUN_00d74350(*(undefined8 *)(param_1 + 0xd8),local_6c);
  }
  *(undefined4 *)(param_1 + 0x298d8) = local_6c;
  piVar1 = (int *)(param_1 + 0x298dc);
  if (*piVar1 == 0) {
    lVar12 = FUN_00d9ebe8(*(undefined8 *)(param_1 + 0xd0));
    puVar2 = (uint *)(param_1 + 0x2653c);
    if (*(int *)(lVar12 + 0x28) == 0xfe) {
      *puVar2 = *puVar2 & 0xfffffffb;
    }
    else {
      *puVar2 = *puVar2 | 4;
      iVar9 = FUN_00da376c();
      piVar3 = (int *)(param_1 + 0x298d4);
      *piVar3 = iVar9;
      if (iVar9 == 0xffff) {
        iVar9 = FUN_00da3904(*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
                             local_6c,0,0);
        *piVar3 = iVar9;
      }
      if (iVar9 != 0xffff) {
        iVar5 = FUN_00d752b4(*(undefined8 *)(param_1 + 0xd8));
        if (iVar5 != 0) {
          uVar14 = 0;
          do {
            iVar5 = FUN_00d74ac0(*(undefined8 *)(param_1 + 0xd8),uVar14);
            iVar9 = FUN_00d74c14(*(undefined8 *)(param_1 + 0xd8),iVar5,*piVar3);
            if ((0 < iVar9) || (iVar5 == *piVar3)) {
              uVar13 = FUN_00d74ab0(*(undefined8 *)(param_1 + 0xd8),uVar14);
              uVar7 = FUN_00d74ac0(*(undefined8 *)(param_1 + 0xd8),uVar14);
              uVar13 = FUN_00a63f20(param_1,uVar7,uVar13,1);
              if (iVar5 == *piVar3) {
                *(undefined8 *)(param_1 + 0x24d98) = uVar13;
              }
            }
            uVar14 = uVar14 + 1;
            uVar10 = FUN_00d752b4(*(undefined8 *)(param_1 + 0xd8));
          } while (uVar14 < uVar10);
        }
        FUN_00a64104(param_1,*piVar3);
        iVar5 = 0xffff;
      }
    }
    FUN_00ceace8();
    uVar11 = FUN_00ceb094();
    uVar14 = *(uint *)(param_1 + 0x265f4);
    if ((uVar11 & 1) == 0) {
      uVar14 = uVar14 | 4;
    }
    else {
      uVar14 = uVar14 & 0xfffffffb;
    }
    *(uint *)(param_1 + 0x265f4) = uVar14;
  }
  else {
    iVar9 = *piVar1 + -1;
    *(undefined4 *)(param_1 + 0x298d4) = 0xffff;
    iVar6 = FUN_00d752bc(*(undefined8 *)(param_1 + 0xd8),local_6c,iVar9);
    if (iVar6 != 0) {
      iVar15 = 0;
      do {
        uVar7 = FUN_00d752f8(*(undefined8 *)(param_1 + 0xd8),local_6c,iVar9,iVar15);
        local_70[0] = 1;
        lVar12 = FUN_00d74ab0(*(undefined8 *)(param_1 + 0xd8),uVar7);
        if (((*(char *)(lVar12 + 0x199) == '\0') &&
            (((*(char *)(lVar12 + 0x19a) == '\0' || (iVar8 = FUN_00ceacf4(), iVar8 == 2)) &&
             (*(char *)(lVar12 + 0x198) == '\0')))) &&
           (uVar11 = FUN_00d74b08(*(undefined8 *)(param_1 + 0xd8),uVar7,iVar9,
                                  *(undefined4 *)(param_1 + 0x298d8),local_70), (uVar11 & 1) != 0))
        {
          uVar7 = FUN_00d74ac0(*(undefined8 *)(param_1 + 0xd8),uVar7);
          FUN_00a63f20(param_1,uVar7,lVar12,local_70[0]);
        }
        iVar15 = iVar15 + 1;
      } while (iVar6 != iVar15);
    }
    *(uint *)(param_1 + 0x265f4) = *(uint *)(param_1 + 0x265f4) & 0xfffffffb;
    *(uint *)(param_1 + 0x2653c) = *(uint *)(param_1 + 0x2653c) & 0xfffffffb;
  }
  if ((*piVar1 != 0) && (iVar9 = FUN_00d752b4(*(undefined8 *)(param_1 + 0xd8)), iVar9 != 0)) {
    uVar14 = 0;
    do {
      uVar11 = FUN_00d748ec(*(undefined8 *)(param_1 + 0xd8),uVar14,local_6c);
      if ((uVar11 & 1) != 0) {
        lVar12 = FUN_00d74ab0(*(undefined8 *)(param_1 + 0xd8),uVar14);
        uVar7 = FUN_00d74ac0(*(undefined8 *)(param_1 + 0xd8),uVar14);
        local_74[0] = 1;
        uVar11 = FUN_00d74b08(*(undefined8 *)(param_1 + 0xd8),uVar14,*piVar1 + -1,local_6c,local_74)
        ;
        if ((((uVar11 & 1) == 0) && (*(int *)(lVar12 + 0x30) < 3)) &&
           (uVar11 = FUN_00d74dcc(*(undefined8 *)(param_1 + 0xd8),uVar7,*piVar1 + -1,local_6c),
           (uVar11 & 1) != 0)) {
          FUN_00a63f20(param_1,uVar7,lVar12,local_74[0]);
        }
      }
      uVar14 = uVar14 + 1;
      uVar10 = FUN_00d752b4(*(undefined8 *)(param_1 + 0xd8));
    } while (uVar14 < uVar10);
  }
  if (iVar5 != 0xffff) {
    uVar7 = FUN_00d74ad0(*(undefined8 *)(param_1 + 0xd8),iVar5);
    local_78[0] = 1;
    uVar11 = FUN_00d748ec(*(undefined8 *)(param_1 + 0xd8),uVar7,local_6c);
    if ((((uVar11 & 1) != 0) &&
        (uVar11 = FUN_00d74b08(*(undefined8 *)(param_1 + 0xd8),uVar7,*piVar1 + -1,local_6c,local_78)
        , (uVar11 & 1) != 0)) && (lVar12 = FUN_00a641a4(param_1,iVar5), lVar12 != 0)) {
      FUN_00a64218(param_1,lVar12,1);
    }
  }
  FUN_00a64334(param_1);
  FUN_00a633c8(param_1);
  FUN_00a64540(param_1);
  if (*piVar1 == 0) {
    FUN_00a64858(param_1,*(undefined4 *)(param_1 + 0x298d4));
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00a63f20(long param_1,undefined4 param_2,long param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00a65858(param_1 + 0x1920);
  FUN_00a60b70(lVar3,param_3,param_2,0,*(undefined4 *)(param_1 + 0x1908));
  lVar4 = lVar3 + 8;
  local_60 = DAT_03210f8c;
  local_88 = FUN_00a658e4;
  local_78 = 0;
  uStack_70 = 0;
  lStack_80 = param_1;
  local_68 = lVar3;
  FUN_009693a0(lVar4,&local_88);
  local_88 = FUN_00a658e4;
  local_60 = DAT_03210f60;
  local_78 = 0;
  uStack_70 = 0;
  lStack_80 = param_1;
  local_68 = lVar3;
  FUN_009693a0(lVar4,&local_88);
  local_60 = DAT_03210f58;
  local_88 = FUN_00a65914;
  local_78 = 0;
  uStack_70 = 0;
  lStack_80 = param_1;
  local_68 = lVar3;
  FUN_009693a0(lVar4,&local_88);
  local_88 = FUN_00a65914;
  local_60 = DAT_03210f84;
  local_78 = 0;
  uStack_70 = 0;
  lStack_80 = param_1;
  local_68 = lVar3;
  FUN_009693a0(lVar4,&local_88);
  local_60 = DAT_03210f70;
  local_88 = FUN_00a65920;
  local_78 = 0;
  uStack_70 = 0;
  lStack_80 = param_1;
  local_68 = lVar3;
  FUN_009693a0(lVar4,&local_88);
  *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) | 0x10;
  FUN_00a60a14(lVar3,0);
  FUN_00a60e90(lVar3,param_4 & 1);
  lVar4 = (long)*(int *)(param_3 + 0x30) + -1;
  FUN_00ed026c(param_1 + lVar4 * 0x538 + 0x7e0,lVar3,1);
  uVar1 = *(uint *)(param_1 + 0x1908);
  *(long *)(param_1 + (ulong)uVar1 * 8 + 0x1788) = lVar3;
  *(uint *)(param_1 + 0x1908) = uVar1 + 1;
  param_1 = param_1 + lVar4 * 4;
  *(int *)(param_1 + 0x190c) = *(int *)(param_1 + 0x190c) + 1;
  FUN_00a602d8(lVar3);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

