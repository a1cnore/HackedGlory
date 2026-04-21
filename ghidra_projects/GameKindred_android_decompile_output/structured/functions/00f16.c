// functions/00f16 — 23 functions
#include "libGameKindred.h"




void FUN_00f161c4(long *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = param_2;
  FUN_00f167f8(param_1 + 5,param_1[6] + (ulong)param_3 * 8,&local_40,&local_38);
  param_3 = param_3 + 1;
  if (param_3 < *(uint *)(param_1 + 5)) {
    FUN_00f13998(*(undefined8 *)(param_1[6] + (ulong)param_3 * 8));
    lVar1 = param_1[6] + (ulong)param_3 * 8;
    FUN_00f16a38(param_1 + 5,lVar1,lVar1 + 8);
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00f16278(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




ulong FUN_00f16280(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar2 = 0;
    do {
      lVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar2 * 8) + 0x40))();
      if (lVar1 == param_2) goto LAB_00f162d4;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x28));
  }
  uVar2 = 0xffffffff;
LAB_00f162d4:
  return uVar2 & 0xffffffff;
}




ulong FUN_00f162e8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(uint *)(param_1 + 0x28) != 0) {
    uVar2 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x30) + uVar2 * 8) == param_2) {
        return uVar2;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x28));
  }
  return 0xffffffff;
}




undefined8 FUN_00f16318(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar3 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 0x30) + uVar3 * 8);
      lVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
      if (lVar1 == param_2) {
        *(undefined2 *)(param_3 + 0xc) = *(undefined2 *)((long)plVar2 + 0xc);
        *(int *)(param_3 + 8) = (int)plVar2[1];
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x28));
  }
  return 0;
}




undefined8 FUN_00f163a4(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if ((int)param_1[5] != 0) {
    puVar2 = (undefined8 *)param_1[6];
    do {
      lVar1 = (**(code **)(*(long *)*puVar2 + 0x40))();
      if (lVar1 == param_2) {
        FUN_00f13998(*puVar2);
        FUN_00f16a38(param_1 + 5,puVar2,puVar2 + 1);
        (**(code **)(*param_1 + 0x30))(param_1);
        return 1;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined8 *)(param_1[6] + (ulong)*(uint *)(param_1 + 5) * 8));
  }
  return 0;
}




undefined8 FUN_00f16444(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 < *(uint *)(param_1 + 0x28)) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)param_2 * 8);
  }
  return uVar1;
}




bool FUN_00f16464(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 < uVar1) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + (ulong)param_2 * 8);
    *(undefined2 *)(param_3 + 0xc) = *(undefined2 *)(lVar2 + 0xc);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(lVar2 + 8);
  }
  return param_2 < uVar1;
}




bool FUN_00f16498(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  
  bVar2 = param_2 <= *(uint *)(param_1 + 5);
  if (bVar2) {
    puVar1 = (undefined8 *)(param_1[6] + (ulong)param_2 * 8);
    FUN_00f13998(*puVar1);
    FUN_00f16a38(param_1 + 5,puVar1,puVar1 + 1);
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  return bVar2;
}




undefined8 FUN_00f16508(long param_1,uint param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if (((param_2 < *(uint *)(param_1 + 0x28)) &&
      (lVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + (ulong)param_2 * 8) + 0x40))(),
      uVar1 = 0, lVar2 != 0)) && (lVar2 = FUN_00f14058(), uVar1 = 0, lVar2 != 0)) {
    *(undefined2 *)(param_3 + 0xc) = *(undefined2 *)(lVar2 + 0xc);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(lVar2 + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
    *(undefined8 *)(param_3 + 0x10) = uVar1;
    *(undefined2 *)(param_3 + 0x20) = *(undefined2 *)(lVar2 + 0x20);
    uVar1 = 1;
    *(undefined1 *)(param_3 + 0x22) = *(undefined1 *)(lVar2 + 0x22);
  }
  return uVar1;
}




undefined8 FUN_00f16584(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 5);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = (long *)(param_1[6] + (ulong)uVar3 * 8);
      if (*plVar1 == param_2) {
        FUN_00f16a38(param_1 + 5,plVar1,plVar1 + 1);
        (**(code **)(*param_1 + 0x30))(param_1);
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}




undefined8 FUN_00f165f4(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar2 = 0;
    do {
      lVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar2 * 8) + 0x40))();
      if (lVar1 == param_2) {
        lVar1 = FUN_00f14058(param_2);
        if (lVar1 == 0) {
          return 0;
        }
        *(undefined2 *)(param_3 + 0xc) = *(undefined2 *)(lVar1 + 0xc);
        *(undefined4 *)(param_3 + 8) = *(undefined4 *)(lVar1 + 8);
        uVar3 = *(undefined8 *)(lVar1 + 0x10);
        *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
        *(undefined8 *)(param_3 + 0x10) = uVar3;
        *(undefined2 *)(param_3 + 0x20) = *(undefined2 *)(lVar1 + 0x20);
        *(undefined1 *)(param_3 + 0x22) = *(undefined1 *)(lVar1 + 0x22);
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x28));
  }
  return 0;
}




void FUN_00f16698(long *param_1,byte param_2)

{
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfe | param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00f166ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_00f166b0(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar3 = 0;
    do {
      plVar1 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar3 * 8) + 0x40))();
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar3 * 8) + 0x48))();
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0xa0))(plVar1,param_2);
        }
      }
      else {
        uVar2 = FUN_00f02540(plVar1);
        if (((uVar2 & 1) == 0) && (plVar1[4] != param_2)) {
          (**(code **)(*plVar1 + 0x80))(plVar1,param_2,1);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x28));
  }
  return;
}




void FUN_00f1676c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00f16774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))();
  return;
}




void FUN_00f16778(uint *param_1,uint param_2)

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




undefined8 * FUN_00f167f8(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  
  if (param_3 != param_4) {
    uVar1 = *param_1;
    uVar7 = (ulong)uVar1;
    uVar5 = param_1[1];
    puVar13 = *(undefined8 **)(param_1 + 2);
    uVar15 = (ulong)((long)param_4 - (long)param_3) >> 3;
    uVar14 = (uint)uVar15;
    uVar16 = (long)param_2 - (long)puVar13;
    if (uVar5 - uVar1 < uVar14) {
      uVar1 = uVar1 + uVar14;
      if (uVar5 < 0x20) {
        uVar5 = uVar5 << 1;
      }
      else if (uVar5 == 0xffffffff) {
        uVar5 = 0;
      }
      else {
        uVar5 = (uVar5 + 0x10) - (uVar5 & 0xf);
      }
      uVar14 = uVar1;
      if (uVar1 <= uVar5) {
        uVar14 = uVar5;
      }
      puVar3 = operator_new__((ulong)uVar14 << 3);
      puVar6 = puVar3;
      for (; puVar13 != param_2; puVar13 = puVar13 + 1) {
        *puVar6 = *puVar13;
        puVar6 = puVar6 + 1;
      }
      puVar13 = puVar3 + (uVar16 >> 3 & 0xffffffff);
      puVar6 = puVar13;
      do {
        puVar8 = param_3 + 1;
        *puVar6 = *param_3;
        puVar6 = puVar6 + 1;
        param_3 = puVar8;
      } while (param_4 != puVar8);
      pvVar4 = *(void **)(param_1 + 2);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar7 * 8);
      if (puVar6 != param_2) {
        puVar8 = puVar13 + (uVar15 & 0xffffffff);
        do {
          puVar12 = param_2 + 1;
          *puVar8 = *param_2;
          puVar8 = puVar8 + 1;
          param_2 = puVar12;
        } while (puVar6 != puVar12);
        pvVar4 = *(void **)(param_1 + 2);
      }
      if (pvVar4 != (void *)0x0) {
        operator_delete__(pvVar4);
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      *(undefined8 **)(param_1 + 2) = puVar3;
      *param_1 = uVar1;
      param_1[1] = uVar14;
      param_2 = puVar13;
    }
    else {
      puVar13 = puVar13 + uVar7;
      uVar9 = (long)puVar13 - (long)param_2;
      uVar10 = uVar9 >> 3;
      uVar15 = (ulong)((long)param_4 - (long)param_3) >> 3 & 0xffffffff;
      if (uVar14 < (uint)uVar10) {
        puVar6 = puVar13 + -uVar15;
        if (uVar15 != 0) {
          lVar11 = 0;
          do {
            *(undefined8 *)((long)puVar13 + lVar11) = *(undefined8 *)((long)puVar6 + lVar11);
            lVar11 = lVar11 + 8;
          } while (lVar11 != uVar15 * 8);
          puVar6 = (undefined8 *)(*(long *)(param_1 + 2) + uVar7 * 8 + uVar15 * -8);
        }
        lVar11 = (long)puVar6 - (long)param_2;
        if (lVar11 != 0) {
          do {
            puVar6 = puVar6 + -1;
            lVar2 = lVar11 + uVar15 * 8;
            lVar11 = lVar11 + -8;
            *(undefined8 *)((long)param_2 + lVar2 + -8) = *puVar6;
          } while (lVar11 != 0);
        }
        do {
          puVar13 = param_3 + 1;
          *param_2 = *param_3;
          param_2 = param_2 + 1;
          param_3 = puVar13;
        } while (param_4 != puVar13);
      }
      else {
        puVar6 = param_2;
        if (puVar13 != param_2) {
          do {
            puVar6[uVar15] = *puVar6;
            puVar6 = puVar6 + 1;
          } while (puVar13 != puVar6);
          puVar13 = (undefined8 *)(*(long *)(param_1 + 2) + uVar7 * 8);
        }
        uVar7 = uVar9 >> 3 & 0xffffffff;
        for (puVar6 = param_3 + (uVar10 & 0xffffffff); puVar6 != param_4; puVar6 = puVar6 + 1) {
          *puVar13 = *puVar6;
          puVar13 = puVar13 + 1;
        }
        if (uVar7 != 0) {
          lVar11 = uVar7 << 3;
          do {
            lVar11 = lVar11 + -8;
            *param_2 = *param_3;
            param_2 = param_2 + 1;
            param_3 = param_3 + 1;
          } while (lVar11 != 0);
        }
      }
      *param_1 = uVar1 + uVar14;
      param_2 = (undefined8 *)(*(long *)(param_1 + 2) + (uVar16 >> 3 & 0xffffffff) * 8);
    }
  }
  return param_2;
}




void FUN_00f16a38(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_00f16aa4(undefined8 *param_1)

{
  FUN_00f13aac();
  *param_1 = &PTR_FUN_028286c0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}




void FUN_00f16ad8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028286c0;
  FUN_00f16b18();
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return;
}




void FUN_00f16b18(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar1 = 0;
    do {
      FUN_00f13998(*(undefined8 *)(*(long *)(param_1 + 0x30) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x28));
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}




void FUN_00f16b68(void *param_1)

{
  FUN_00f16ad8();
  operator_delete(param_1);
  return;
}




void FUN_00f16b8c(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_22c8;
  undefined8 local_22c0;
  uint local_22b8 [2];
  float local_22b0 [10];
  undefined8 local_2288 [3];
  byte local_2270 [8640];
  long local_b0;
  
  lVar2 = tpidr_el0;
  local_b0 = *(long *)(lVar2 + 0x28);
  if ((*(byte *)(param_5 + 0xd) >> 1 & 1) != 0) {
    fVar21 = param_2;
    if (((*(byte *)(param_5 + 0x22) & 1) != 0) && (*(long **)(param_5 + 0x10) != (long *)0x0)) {
      param_3 = (float)(**(code **)(**(long **)(param_5 + 0x10) + 0x50))();
      fVar21 = 0.0;
      param_1 = 0.0;
      param_4 = param_2;
    }
    local_22c8 = 0;
    local_22c0 = 0;
    FUN_00f13bb4(param_5,(long)&local_22c0 + 4,(long)&local_22c8 + 4,&local_22c0,&local_22c8);
    uVar3 = local_22c0._4_4_;
    uVar1 = local_22c8._4_4_;
    param_3 = param_3 - (float)((int)local_22c0 + local_22c0._4_4_);
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    param_4 = param_4 - (float)((int)local_22c8 + local_22c8._4_4_);
    if (param_4 <= 0.0) {
      param_4 = 0.0;
    }
    if ((0.0 < param_3) || (0.0 < param_4)) {
      local_22b8[0] = 0;
      FUN_00f17064(param_5,local_22b8);
      uVar4 = local_22b8[0];
      uVar12 = (ulong)local_22b8[0];
      if (local_22b8[0] != 0) {
        uVar10 = 0;
        param_1 = param_1 + (float)uVar3;
        fVar21 = fVar21 + (float)uVar1;
        puVar13 = local_2288;
        do {
          if ((*(byte *)(puVar13 + 3) & 1) == 0) {
            plVar9 = *(long **)(*(long *)(param_5 + 0x30) + uVar10 * 8);
            lVar6 = (**(code **)(*plVar9 + 0x40))(plVar9);
            if (lVar6 != 0) {
              *(float *)(puVar13 + -4) = param_3;
              *(float *)((long)puVar13 + -0x1c) = param_4;
              fVar16 = (float)NEON_ucvtf(*(undefined4 *)puVar13);
              fVar17 = param_3;
              if (fVar16 <= param_3) {
                fVar17 = fVar16;
              }
              plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
              iVar5 = (**(code **)(*plVar7 + 0xf8))(plVar7,(int)fVar17);
              if (-1 < iVar5) {
                plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
                uVar8 = (**(code **)(*plVar7 + 0x118))();
                *puVar13 = uVar8;
                plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
                uVar8 = (**(code **)(*plVar7 + 0x120))();
                puVar13[1] = uVar8;
                plVar9 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
                uVar8 = (**(code **)(*plVar9 + 0x128))();
                fVar17 = (float)iVar5;
                if ((float)iVar5 <= param_4) {
                  fVar17 = param_4;
                }
                puVar13[2] = uVar8;
                *(float *)((long)puVar13 + -0x1c) = fVar17;
              }
            }
          }
          uVar10 = uVar10 + 1;
          puVar13 = (undefined8 *)((long)puVar13 + 0x44);
        } while (uVar10 < uVar12);
        if (uVar4 != 0) {
          uVar10 = 0;
          pbVar14 = local_2270;
          do {
            plVar7 = *(long **)(*(long *)(param_5 + 0x30) + uVar10 * 8);
            plVar9 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
            if ((*pbVar14 & 1) == 0) {
              pfVar15 = (float *)(pbVar14 + -0x34);
              fVar16 = *pfVar15;
              fVar17 = *(float *)(pbVar14 + -0x38);
            }
            else {
              fVar16 = 0.0;
              pfVar15 = local_22b0 + uVar10 * 0x11 + 3;
              fVar17 = 0.0;
              pbVar14[-0x38] = 0;
              pbVar14[-0x37] = 0;
              pbVar14[-0x36] = 0;
              pbVar14[-0x35] = 0;
              pbVar14[-0x34] = 0;
              pbVar14[-0x33] = 0;
              pbVar14[-0x32] = 0;
              pbVar14[-0x31] = 0;
            }
            *(float *)(pbVar14 + -0x28) = fVar17;
            *(float *)(pbVar14 + -0x24) = fVar16;
            if ((*(ushort *)(pbVar14 + -0x20) & 0xf) == 0) {
              fVar19 = (float)NEON_ucvtf(*(undefined4 *)(pbVar14 + -0x18));
            }
            else {
              fVar18 = (float)NEON_ucvtf(*(undefined4 *)(pbVar14 + -8));
              fVar19 = fVar17;
              if (fVar18 <= fVar17) {
                fVar19 = fVar18;
              }
            }
            *(float *)(pbVar14 + -0x38) = fVar19;
            if ((*(ushort *)(pbVar14 + -0x20) & 0xf0) == 0) {
              fVar18 = (float)NEON_ucvtf(*(undefined4 *)(pbVar14 + -0x14));
            }
            else {
              fVar20 = (float)NEON_ucvtf(*(undefined4 *)(pbVar14 + -4));
              fVar18 = fVar16;
              if (fVar20 <= fVar16) {
                fVar18 = fVar20;
              }
            }
            if (fVar19 < 0.0) {
              fVar19 = 0.0;
            }
            if (fVar18 < 0.0) {
              fVar18 = 0.0;
            }
            *(float *)(pbVar14 + -0x38) = fVar19;
            *pfVar15 = fVar18;
            *(float *)(pbVar14 + -0x30) = param_1;
            *(float *)(pbVar14 + -0x2c) = fVar21;
            pfVar11 = local_22b0 + uVar10 * 0x11;
            uVar1 = *(ushort *)((long)plVar7 + 0xc) & 0x1f;
            fVar20 = fVar21;
            if ((*(ushort *)((long)plVar7 + 0xc) & 1) == 0) {
              if ((uVar1 >> 2 & 1) != 0) {
                fVar20 = fVar21 + (fVar16 - fVar18);
                goto LAB_00f16eb8;
              }
              if ((uVar1 >> 1 & 1) != 0) {
                fVar20 = (fVar21 + fVar16 * 0.5) - fVar18 * 0.5;
                goto LAB_00f16eb8;
              }
            }
            else {
LAB_00f16eb8:
              *(float *)(pbVar14 + -0x3c) = fVar20;
            }
            if ((uVar1 >> 3 & 1) == 0) {
              if (uVar1 >> 4 == 0) {
                if ((uVar1 >> 1 & 1) == 0) {
                  pfVar11 = (float *)(pbVar14 + -0x40);
                  fVar17 = *pfVar11;
                  goto LAB_00f16f00;
                }
                fVar17 = fVar17 * 0.5 - fVar19 * 0.5;
              }
              else {
                fVar17 = fVar17 - fVar19;
              }
              *(float *)(pbVar14 + -0x40) = param_1 + fVar17;
              fVar17 = param_1 + fVar17;
            }
            else {
              *(float *)(pbVar14 + -0x40) = param_1;
              fVar17 = param_1;
            }
LAB_00f16f00:
            fVar16 = param_1;
            if (param_1 <= fVar17) {
              fVar16 = fVar17;
            }
            *pfVar11 = fVar16;
            fVar17 = fVar21;
            if (fVar21 <= *(float *)(pbVar14 + -0x3c)) {
              fVar17 = *(float *)(pbVar14 + -0x3c);
            }
            *(float *)(pbVar14 + -0x3c) = fVar17;
            if (plVar9 != (long *)0x0) {
              fVar18 = *(float *)(plVar9 + 10);
              fVar19 = *(float *)((long)plVar9 + 0x54);
              fVar16 = (float)(**(code **)(*plVar9 + 0x50))(plVar9);
              fVar20 = *(float *)(plVar9 + 9);
              fVar22 = *(float *)((long)plVar9 + 0x4c);
              fVar16 = fVar18 * fVar16 + *pfVar11;
              fVar17 = fVar19 * fVar17 + *(float *)(pbVar14 + -0x3c);
              if ((*(float *)(plVar9 + 8) != fVar16) || (*(float *)((long)plVar9 + 0x44) != fVar17))
              {
                *(float *)(plVar9 + 8) = fVar16;
                *(float *)((long)plVar9 + 0x44) = fVar17;
                FUN_0091ada4(plVar9);
              }
              fVar17 = 1.0;
              if (1.1920929e-07 <= ABS(fVar20)) {
                fVar17 = 1.0 / fVar20;
              }
              fVar16 = 1.0;
              if (1.1920929e-07 <= ABS(fVar22)) {
                fVar16 = 1.0 / fVar22;
              }
              (**(code **)(*plVar9 + 0x130))
                        (fVar17 * *(float *)(pbVar14 + -0x38),fVar16 * *pfVar15,plVar9,0);
              fVar16 = *pfVar11;
              fVar17 = *(float *)(pbVar14 + -0x3c);
              fVar19 = *(float *)(pbVar14 + -0x38);
              fVar18 = *pfVar15;
            }
            (**(code **)(*plVar7 + 0x28))(fVar16,fVar17,fVar19,fVar18,plVar7);
            uVar10 = uVar10 + 1;
            pbVar14 = pbVar14 + 0x44;
            *(ushort *)((long)plVar7 + 0xc) = *(ushort *)((long)plVar7 + 0xc) & 0xfdff;
          } while (uVar10 < uVar12);
          *(ushort *)(param_5 + 0xc) = *(ushort *)(param_5 + 0xc) & 0xfdff;
          if (uVar4 != 0) {
            local_22b8[0] = 0;
          }
          goto LAB_00f1701c;
        }
      }
    }
    *(ushort *)(param_5 + 0xc) = *(ushort *)(param_5 + 0xc) & 0xfdff;
  }
LAB_00f1701c:
  if (*(long *)(lVar2 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

