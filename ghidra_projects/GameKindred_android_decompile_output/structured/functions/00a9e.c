// functions/00a9e — 23 functions
#include "libGameKindred.h"




void FUN_00a9e0e8(void *param_1)

{
  FUN_00a9de80();
  operator_delete(param_1);
  return;
}




void FUN_00a9e10c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = -0xb360;
  puVar1 = param_1 + 0x1349;
  *param_1 = &PTR_FUN_027d1070;
  do {
    FUN_00a9de80(puVar1);
    lVar2 = lVar2 + 0x19a0;
    puVar1 = puVar1 + -0x334;
  } while (lVar2 != 0);
  FUN_00f01868(param_1);
  return;
}




void FUN_00a9e174(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = -0xb360;
  puVar1 = param_1 + 0x1349;
  *param_1 = &PTR_FUN_027d1070;
  do {
    FUN_00a9de80(puVar1);
    lVar2 = lVar2 + 0x19a0;
    puVar1 = puVar1 + -0x334;
  } while (lVar2 != 0);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a9e1e4(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00b08d84();
  plVar1 = param_1 + 0x4e;
  *param_1 = (long)&PTR_FUN_027d1170;
  FUN_00f0d160(plVar1);
  FUN_00b1a1c4(param_1 + 0x74);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  local_50 = 0x3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_50);
  if ((*(float *)(param_1 + 0x58) != 0.5) || (*(float *)((long)param_1 + 0x2c4) != 0.5)) {
    param_1[0x58] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x74,1);
  FUN_00b09144(0xbf800000,param_1);
  local_50 = CONCAT44(local_50._4_4_,0xff808080);
  FUN_00f0d7fc(plVar1,&local_50);
  (**(code **)(*param_1 + 0x38))(0x41000000,0x41b00000,param_1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9e314(long param_1,ulong param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 local_30 [2];
  long local_28;
  
  puVar2 = local_30;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_2 & 1) == 0) {
    local_30[0] = 0xff808080;
  }
  else {
    puVar2 = &DAT_01bee7fa;
  }
  FUN_00f0d7fc(param_1 + 0x270,puVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9e37c(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = param_1 + 0x270;
  FUN_00f0d75c(lVar1);
  fVar2 = (float)FUN_00f0d4e0(lVar1);
  fVar3 = 48.0;
  FUN_00f0d4e0(lVar1);
  FUN_00f13f08(fVar2 + 48.0,fVar3 + 32.0,param_1);
  return;
}




void FUN_00a9e3dc(undefined1 param_1 [16],float param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar1 = (long *)(param_3 + 0x3a0);
  fVar4 = *(float *)(param_3 + 0x2b0);
  fVar3 = (float)FUN_00f01c20(param_3 + 0x270);
  fVar5 = *(float *)(param_3 + 0x2b4);
  fVar4 = fVar4 + fVar3 * 0.5;
  FUN_00f01c20(param_3 + 0x270);
  fVar5 = fVar5 - param_2 * 0.5;
  if ((*(float *)(param_3 + 0x3e0) != fVar4) || (*(float *)(param_3 + 0x3e4) != fVar5)) {
    *(float *)(param_3 + 0x3e0) = fVar4;
    *(float *)(param_3 + 0x3e4) = fVar5;
    FUN_0091ada4(plVar1);
  }
  local_60 = NEON_fmov(0x3f800000,4);
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_60);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9e4b0(long param_1)

{
  if ((*(float *)(param_1 + 0x2b8) == 0.93) && (*(float *)(param_1 + 700) == 0.93)) {
    return;
  }
  *(undefined8 *)(param_1 + 0x2b8) = 0x3f6e147b3f6e147b;
  FUN_0091ada4(param_1 + 0x270);
  return;
}




void FUN_00a9e4f0(long param_1)

{
  undefined8 uVar1;
  
  if ((*(float *)(param_1 + 0x2b8) == 1.0) && (*(float *)(param_1 + 700) == 1.0)) {
    return;
  }
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x2b8) = uVar1;
  FUN_0091ada4(param_1 + 0x270);
  return;
}




void FUN_00a9e524(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_027d12f0;
  FUN_00f017e8(param_1 + 0x17);
  plVar1 = param_1 + 0x28;
  param_1[0x17] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x46;
  FUN_00f0e4a8(plVar2);
  FUN_00b20c8c(param_1 + 100);
  param_1[0x4ef] = 0;
  param_1[0x4ee] = 0;
  param_1[0x4f0] = 0x44bb8000;
  *(undefined2 *)(param_1 + 0x4f1) = 0xffff;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 100,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  uVar3 = *(uint *)((long)param_1 + 0x1c4);
  if ((uVar3 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x1c4) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x7280;
    FUN_0091ada4(plVar1);
    uVar3 = *(uint *)((long)param_1 + 0x1c4);
  }
  *(uint *)((long)param_1 + 0x1c4) = uVar3 | 0x10;
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_brushstroke_h_bot");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  uVar3 = *(uint *)((long)param_1 + 0x2b4);
  if ((uVar3 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x2b4) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x7280;
    FUN_0091ada4(plVar2);
    uVar3 = *(uint *)((long)param_1 + 0x2b4);
  }
  *(uint *)((long)param_1 + 0x2b4) = uVar3 | 0x10;
  *(undefined4 *)((long)param_1 + 0x2784) = DAT_02be3670;
  return;
}




void FUN_00a9e6bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d12f0;
  FUN_00a9e764();
  if ((void *)param_1[0x4ef] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4ef]);
    param_1[0x4ef] = 0;
    param_1[0x4ee] = 0;
  }
  FUN_00b21040(param_1 + 100);
  param_1[0x46] = &PTR_FUN_028266f0;
  param_1[0x5d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x60);
  FUN_00f13d08(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_028266f0;
  param_1[0x3f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a9e764(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x2770);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x2778) + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x2778) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x2770);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x2778) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0x2778) != 0) {
    *(undefined4 *)(param_1 + 0x2770) = 0;
  }
  FUN_00b21160(param_1 + 800);
  return;
}




void FUN_00a9e7e8(void *param_1)

{
  FUN_00a9e6bc();
  operator_delete(param_1);
  return;
}




void thunk_FUN_00a9e810(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_94;
  undefined1 auStack_90 [4];
  float fStack_8c;
  long lStack_88;
  
  lVar2 = tpidr_el0;
  lStack_88 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar3 & 1,&fStack_8c,auStack_90,&fStack_94);
  uVar6 = FUN_0092ea9c();
  FUN_00f13f08(fStack_8c - fStack_94,*(undefined4 *)(param_1 + 0x2784),param_1 + 0x140);
  FUN_00f13f08(fStack_8c - fStack_94,0x41d00000,param_1 + 0x230);
  if ((*(float *)(param_1 + 0x270) != 0.0) ||
     (*(float *)(param_1 + 0x274) != *(float *)(param_1 + 0x2784))) {
    *(undefined4 *)(param_1 + 0x270) = 0;
    *(float *)(param_1 + 0x274) = *(float *)(param_1 + 0x2784);
    FUN_0091ada4(param_1 + 0x230);
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x2770);
  if (*(uint *)(param_1 + 0x2770) != 0) {
    fVar12 = 44.0;
    uVar10 = 0;
    fVar13 = DAT_02be3668 * 44.0;
    if ((uVar6 & 1) == 0) {
      fVar13 = fVar12;
    }
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x2778) + uVar10 * 8);
      if ((*(byte *)(lVar8 + 0x84) >> 2 & 1) != 0) {
        ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
        if ((uVar6 & 1) == 0) {
          ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80;
        }
        FUN_00f0d378(lVar8 + 0x270,*ppuVar1);
        lVar8 = *(long *)(*(long *)(param_1 + 0x2778) + uVar10 * 8);
        fVar11 = (float)FUN_00f0d4e0(lVar8 + 0x270);
        FUN_00f0d4e0(*(long *)(*(long *)(param_1 + 0x2778) + uVar10 * 8) + 0x270);
        FUN_00f13f08(fVar11 + 48.0,fVar12 + 32.0,lVar8);
        plVar9 = *(long **)(*(long *)(param_1 + 0x2778) + uVar10 * 8);
        fVar12 = (float)(**(code **)(*plVar9 + 0x48))(plVar9);
        fVar11 = fVar13 + fVar12 * 0.5;
        fVar12 = *(float *)(param_1 + 0x2784) * 0.5;
        if ((*(float *)(plVar9 + 8) != fVar11) || (*(float *)((long)plVar9 + 0x44) != fVar12)) {
          *(float *)(plVar9 + 8) = fVar11;
          *(float *)((long)plVar9 + 0x44) = fVar12;
          FUN_0091ada4(plVar9);
        }
        lVar8 = *(long *)(*(long *)(param_1 + 0x2778) + uVar10 * 8);
        *(uint *)(lVar8 + 0x84) = *(uint *)(lVar8 + 0x84) | 4;
        fVar11 = (float)(**(code **)(**(long **)(*(long *)(param_1 + 0x2778) + uVar10 * 8) + 0x48))
                                  ();
        uVar7 = (ulong)*(uint *)(param_1 + 0x2770);
        fVar13 = fVar13 + fVar11 + 16.0;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar7);
  }
  lVar8 = param_1 + 800;
  FUN_00b21160(lVar8);
  iVar4 = FUN_00a9eb34(0,param_1);
  iVar5 = FUN_00ac58c0(param_1 + 0x1a88);
  *(uint *)(param_1 + 0x3a4) =
       *(uint *)(param_1 + 0x3a4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x3a4) & 3 | (uint)(iVar5 != 0) << 2;
  FUN_00b2118c(lVar8,(long)*(short *)(param_1 + 0x2788));
  if (0 < iVar4) {
    uVar6 = FUN_0092ea9c();
    fVar13 = DAT_02be3668 * 44.0;
    if ((uVar6 & 1) == 0) {
      fVar13 = 44.0;
    }
    if (*(int *)(param_1 + 0x2770) != 0) {
      plVar9 = *(long **)(*(long *)(param_1 + 0x2778) + (ulong)(iVar4 - 1) * 8);
      fVar12 = *(float *)(plVar9 + 8);
      fVar13 = (float)(**(code **)(*plVar9 + 0x50))();
      fVar13 = fVar12 + fVar13 * 0.5 + 16.0;
    }
    fVar12 = (float)FUN_00f01c20(lVar8);
    fVar13 = fVar13 + fVar12 * 0.5;
    fVar12 = *(float *)(param_1 + 0x2784) * 0.5;
    if ((*(float *)(param_1 + 0x360) != fVar13) || (*(float *)(param_1 + 0x364) != fVar12)) {
      *(float *)(param_1 + 0x360) = fVar13;
      *(float *)(param_1 + 0x364) = fVar12;
      FUN_0091ada4(lVar8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9e810(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_94;
  undefined1 auStack_90 [4];
  float local_8c;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar3 & 1,&local_8c,auStack_90,&local_94);
  uVar6 = FUN_0092ea9c();
  FUN_00f13f08(local_8c - local_94,*(undefined4 *)(param_1 + 0x2784),param_1 + 0x140);
  FUN_00f13f08(local_8c - local_94,0x41d00000,param_1 + 0x230);
  if ((*(float *)(param_1 + 0x270) != 0.0) ||
     (*(float *)(param_1 + 0x274) != *(float *)(param_1 + 0x2784))) {
    *(undefined4 *)(param_1 + 0x270) = 0;
    *(float *)(param_1 + 0x274) = *(float *)(param_1 + 0x2784);
    FUN_0091ada4(param_1 + 0x230);
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x2770);
  if (*(uint *)(param_1 + 0x2770) != 0) {
    fVar12 = 44.0;
    uVar10 = 0;
    fVar13 = DAT_02be3668 * 44.0;
    if ((uVar6 & 1) == 0) {
      fVar13 = fVar12;
    }
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x2778) + uVar10 * 8);
      if ((*(byte *)(lVar8 + 0x84) >> 2 & 1) != 0) {
        ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
        if ((uVar6 & 1) == 0) {
          ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80;
        }
        FUN_00f0d378(lVar8 + 0x270,*ppuVar1);
        lVar8 = *(long *)(*(long *)(param_1 + 0x2778) + uVar10 * 8);
        fVar11 = (float)FUN_00f0d4e0(lVar8 + 0x270);
        FUN_00f0d4e0(*(long *)(*(long *)(param_1 + 0x2778) + uVar10 * 8) + 0x270);
        FUN_00f13f08(fVar11 + 48.0,fVar12 + 32.0,lVar8);
        plVar9 = *(long **)(*(long *)(param_1 + 0x2778) + uVar10 * 8);
        fVar12 = (float)(**(code **)(*plVar9 + 0x48))(plVar9);
        fVar11 = fVar13 + fVar12 * 0.5;
        fVar12 = *(float *)(param_1 + 0x2784) * 0.5;
        if ((*(float *)(plVar9 + 8) != fVar11) || (*(float *)((long)plVar9 + 0x44) != fVar12)) {
          *(float *)(plVar9 + 8) = fVar11;
          *(float *)((long)plVar9 + 0x44) = fVar12;
          FUN_0091ada4(plVar9);
        }
        lVar8 = *(long *)(*(long *)(param_1 + 0x2778) + uVar10 * 8);
        *(uint *)(lVar8 + 0x84) = *(uint *)(lVar8 + 0x84) | 4;
        fVar11 = (float)(**(code **)(**(long **)(*(long *)(param_1 + 0x2778) + uVar10 * 8) + 0x48))
                                  ();
        uVar7 = (ulong)*(uint *)(param_1 + 0x2770);
        fVar13 = fVar13 + fVar11 + 16.0;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar7);
  }
  lVar8 = param_1 + 800;
  FUN_00b21160(lVar8);
  iVar4 = FUN_00a9eb34(0,param_1);
  iVar5 = FUN_00ac58c0(param_1 + 0x1a88);
  *(uint *)(param_1 + 0x3a4) =
       *(uint *)(param_1 + 0x3a4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x3a4) & 3 | (uint)(iVar5 != 0) << 2;
  FUN_00b2118c(lVar8,(long)*(short *)(param_1 + 0x2788));
  if (0 < iVar4) {
    uVar6 = FUN_0092ea9c();
    fVar13 = DAT_02be3668 * 44.0;
    if ((uVar6 & 1) == 0) {
      fVar13 = 44.0;
    }
    if (*(int *)(param_1 + 0x2770) != 0) {
      plVar9 = *(long **)(*(long *)(param_1 + 0x2778) + (ulong)(iVar4 - 1) * 8);
      fVar12 = *(float *)(plVar9 + 8);
      fVar13 = (float)(**(code **)(*plVar9 + 0x50))();
      fVar13 = fVar12 + fVar13 * 0.5 + 16.0;
    }
    fVar12 = (float)FUN_00f01c20(lVar8);
    fVar13 = fVar13 + fVar12 * 0.5;
    fVar12 = *(float *)(param_1 + 0x2784) * 0.5;
    if ((*(float *)(param_1 + 0x360) != fVar13) || (*(float *)(param_1 + 0x364) != fVar12)) {
      *(float *)(param_1 + 0x360) = fVar13;
      *(float *)(param_1 + 0x364) = fVar12;
      FUN_0091ada4(lVar8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00a9eb34(float param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  
LAB_00a9eb6c:
  uVar2 = FUN_0092ea9c();
  uVar4 = *(uint *)(param_2 + 0x2770);
  if (uVar4 != 0) {
    uVar5 = 0;
    fVar7 = DAT_02be3668 * 44.0;
    if ((uVar2 & 1) == 0) {
      fVar7 = 44.0;
    }
    do {
      plVar3 = *(long **)(*(long *)(param_2 + 0x2778) + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        fVar6 = (float)(**(code **)(*plVar3 + 0x48))();
        if (*(float *)(param_2 + 0x2780) - param_1 < fVar7 + fVar6) goto LAB_00a9ebd0;
        uVar4 = *(uint *)(param_2 + 0x2770);
        fVar7 = fVar7 + fVar6 + 16.0;
      }
      uVar5 = uVar5 + 1;
      if (uVar4 <= uVar5) break;
    } while( true );
  }
  uVar2 = 0xffffffff;
  uVar5 = 0xffffffff;
  goto LAB_00a9ec1c;
LAB_00a9ebd0:
  fVar7 = (float)(**(code **)(**(long **)(*(long *)(param_2 + 0x2778) + uVar5 * 8) + 0x48))();
  fVar6 = (float)FUN_00b21228(param_2 + 800);
  if (fVar7 <= fVar6) {
    fVar7 = fVar6;
  }
  bVar1 = fVar7 <= param_1;
  param_1 = fVar7;
  if (bVar1) {
    uVar2 = uVar5 & 0xffffffff;
LAB_00a9ec1c:
    FUN_00a9ec3c(param_2,uVar2);
    return uVar5 & 0xffffffff;
  }
  goto LAB_00a9eb6c;
}




void FUN_00a9ec3c(long *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = (ulong)param_2;
  if ((int)param_2 < 0) {
    param_2 = *(uint *)(param_1 + 0x4ee);
  }
  else {
    FUN_00b21160(param_1 + 100);
    if (param_2 < *(uint *)(param_1 + 0x4ee)) {
      do {
        lVar5 = *(long *)(param_1[0x4ef] + uVar4 * 8);
        if (lVar5 != 0) {
          iVar1 = *(int *)(lVar5 + 0x84);
          uVar2 = FUN_00f08be8(lVar5 + 0x340);
          FUN_00b21100(0x3dcccccd,param_1 + 100,(iVar1 << 1) >> 0x10,uVar2,&DAT_0320ffa8,1,1);
          uVar3 = FUN_00f02540(lVar5);
          if ((uVar3 & 1) != 0) {
            FUN_00f01a4c(*(undefined8 *)(param_1[0x4ef] + uVar4 * 8),1);
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0x4ee));
    }
  }
  if (0 < (int)param_2) {
    uVar4 = 0;
    do {
      lVar5 = *(long *)(param_1[0x4ef] + uVar4 * 8);
      if ((lVar5 != 0) && (uVar3 = FUN_00f02540(lVar5), (uVar3 & 1) == 0)) {
        (**(code **)(*param_1 + 0x78))(param_1,lVar5,1);
      }
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
  }
  return;
}




void FUN_00a9ed68(long *param_1,ushort param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  void *pvVar2;
  void *local_80;
  code *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0xa40);
  FUN_00a9e1e4();
  local_50 = DAT_03210c64;
  local_58 = (long)(short)param_2 & 0xffffffff;
  local_78 = FUN_00a9ee58;
  local_68 = 0;
  uStack_60 = 0;
  local_80 = pvVar2;
  uStack_70 = param_4;
  FUN_009693a0((long)pvVar2 + 8,&local_78);
  *(uint *)((long)pvVar2 + 0x84) =
       *(uint *)((long)pvVar2 + 0x84) & 0x80000000 |
       *(uint *)((long)pvVar2 + 0x84) & 0x7fff | (uint)param_2 << 0xf;
  FUN_00a9ee70(param_1 + 0x4ee,&local_80);
  (**(code **)(*param_1 + 0x78))(param_1,local_80,1);
  FUN_00a9e37c(local_80,param_3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9ee58(long *param_1)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00a9ee6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1,in_x4,&DAT_0320ffa8);
  return;
}




void FUN_00a9ee70(uint *param_1,undefined8 *param_2)

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
    FUN_00aa0018(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00a9eef8(long param_1,short param_2)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x2770);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 0x2778) + (ulong)uVar4 * 8);
      if (plVar2 == (long *)0x0) {
        return;
      }
      if ((*(int *)((long)plVar2 + 0x84) << 1) >> 0x10 == (int)param_2) {
        (**(code **)(*plVar2 + 8))();
        lVar1 = *(long *)(param_1 + 0x2778) + (ulong)uVar4 * 8;
        FUN_00aa0098(param_1 + 0x2770,lVar1,lVar1 + 8);
        uVar3 = *(uint *)(param_1 + 0x2770);
        uVar4 = uVar4 - 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return;
}




void FUN_00a9ef90(long param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(param_1 + 0x2770);
  if (uVar2 != 0) {
    uVar1 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x2778) + uVar1 * 8);
      if (lVar3 != 0) {
        *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xffffffef | (param_2 & 1) << 4;
        uVar2 = *(uint *)(param_1 + 0x2770);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  return;
}




void FUN_00a9efd4(long param_1,short param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 0x2770) != 0) {
    uVar2 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x2778) + (ulong)uVar2 * 8);
      if (lVar3 == 0) {
        return;
      }
      uVar1 = *(uint *)(lVar3 + 0x84);
      if ((int)(uVar1 << 1) >> 0x10 == (int)param_2) {
        *(uint *)(lVar3 + 0x84) = uVar1 & 0xffffffe0 | uVar1 & 0xf | (param_3 & 1) << 4;
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x2770));
  }
  return;
}

