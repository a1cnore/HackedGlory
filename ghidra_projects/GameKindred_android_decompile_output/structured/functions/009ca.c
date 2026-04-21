// functions/009ca — 18 functions
#include "libGameKindred.h"




void FUN_009ca17c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar11 = (long *)param_2[1];
  lVar10 = *plVar11;
  while (lVar10 != 0) {
    plVar11 = plVar11 + 1;
    FUN_009ca964(param_1,lVar10,param_3);
    lVar10 = *plVar11;
  }
  plVar11 = (long *)param_2[4];
  lVar10 = *plVar11;
  while (lVar10 != 0) {
    plVar11 = plVar11 + 1;
    FUN_009cac14(param_1);
    lVar10 = *plVar11;
  }
  uVar5 = FUN_0092ea58();
  if ((uVar5 & 1) == 0) {
    plVar11 = (long *)param_2[2];
    lVar10 = *plVar11;
    while (lVar10 != 0) {
      plVar11 = plVar11 + 1;
      FUN_009ca964(param_1,lVar10,param_3);
      lVar10 = *plVar11;
    }
    plVar11 = (long *)param_2[5];
    lVar10 = *plVar11;
    while (lVar10 != 0) {
      plVar11 = plVar11 + 1;
      FUN_009cac14(param_1);
      lVar10 = *plVar11;
    }
  }
  else {
    plVar11 = (long *)param_2[3];
    lVar10 = *plVar11;
    while (lVar10 != 0) {
      plVar11 = plVar11 + 1;
      FUN_009ca964(param_1,lVar10,param_3);
      lVar10 = *plVar11;
    }
    plVar11 = (long *)param_2[6];
    lVar10 = *plVar11;
    while (lVar10 != 0) {
      plVar11 = plVar11 + 1;
      FUN_009cac14(param_1);
      lVar10 = *plVar11;
    }
  }
  plVar11 = (long *)param_2[7];
  lVar10 = *plVar11;
  while (lVar10 != 0) {
    plVar11 = plVar11 + 1;
    lVar6 = FUN_01985d44(param_1,DAT_0312f1a8);
    if (lVar6 != 0) {
      FUN_009d99c8(lVar6,lVar10);
    }
    lVar10 = *plVar11;
  }
  lVar10 = *(long *)param_2[8];
  plVar11 = (long *)param_2[8];
  while (lVar10 != 0) {
    lVar10 = FUN_01985d44(param_1,DAT_0312ee20);
    if (lVar10 != 0) {
      FUN_009da310(lVar10,*plVar11);
    }
    lVar10 = plVar11[1];
    plVar11 = plVar11 + 1;
  }
  plVar11 = (long *)param_2[0xb];
  lVar10 = *plVar11;
  do {
    if (lVar10 == 0) {
      iVar3 = FUN_00e6a474(param_2[10]);
      if (iVar3 != 0) {
        local_70 = 0;
        uVar4 = FUN_00f1c800(param_2[10],&local_70,0);
        local_88 = 0;
        local_80 = 0;
        local_78 = (void *)0x0;
        FUN_00f1c904(param_2[10],&local_88);
        pvVar1 = (void *)((ulong)&local_88 | 1);
        if ((local_88 & 1) != 0) {
          pvVar1 = local_78;
        }
        FUN_00f1c8ec(pvVar1,&local_88);
        pvVar1 = (void *)((ulong)&local_88 | 1);
        if ((local_88 & 1) != 0) {
          pvVar1 = local_78;
        }
        FUN_00f2e3bc(pvVar1,local_70,uVar4);
        if ((local_88 & 1) != 0) {
          operator_delete(local_78);
        }
      }
      FUN_00966984(*param_2);
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar7 = FUN_01985d44(param_1,DAT_0312f188);
    uVar8 = FUN_00d6eb50();
    plVar9 = (long *)FUN_00d6eb5c(uVar8,"*KindredLensFlares*");
    plVar9 = (long *)*plVar9;
    puVar12 = (undefined8 *)*plVar9;
    while( true ) {
      if (puVar12 == (undefined8 *)0x0) goto LAB_009ca3f0;
      iVar3 = strcmp((char *)*puVar12,*(char **)*plVar11);
      if (iVar3 == 0) break;
      plVar9 = plVar9 + 1;
      puVar12 = (undefined8 *)*plVar9;
    }
    local_88 = *(ulong *)(*plVar11 + 8);
    local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(*plVar11 + 0x10));
    FUN_009c9008(*(undefined4 *)(*plVar9 + 0x10),*(undefined4 *)(*plVar9 + 0x14),uVar7,&local_88,1);
    plVar9 = *(long **)(*plVar9 + 8);
    puVar12 = (undefined8 *)*plVar9;
    uVar8 = local_70;
    while (local_70 = uVar8, puVar12 != (undefined8 *)0x0) {
      plVar9 = plVar9 + 1;
      local_70._4_4_ = (undefined4)((ulong)uVar8 >> 0x20);
      local_70._0_4_ =
           CONCAT13((char)(int)(*(float *)((long)puVar12 + 0x1c) * 255.0),
                    CONCAT12((char)(int)(*(float *)(puVar12 + 3) * 255.0),
                             CONCAT11((char)(int)(*(float *)((long)puVar12 + 0x14) * 255.0),
                                      (char)(int)(*(float *)(puVar12 + 2) * 255.0))));
      FUN_009c9080(*(undefined4 *)(puVar12 + 1),*(undefined4 *)((long)puVar12 + 0xc),uVar7,*puVar12,
                   &local_70);
      uVar8 = local_70;
      puVar12 = (undefined8 *)*plVar9;
    }
LAB_009ca3f0:
    plVar11 = plVar11 + 1;
    lVar10 = *plVar11;
  } while( true );
}




void FUN_009ca4b8(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
        uVar4 = *param_1;
        param_1[10] = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
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




void FUN_009ca53c(long param_1)

{
  FUN_009c9e40(param_1 + -0x28);
  return;
}




void FUN_009ca544(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  uVar2 = FUN_00e6a474(param_2);
  uVar2 = FUN_0091ed5c(param_2,uVar2,0x12345678);
  if (param_1 == 0) {
    return;
  }
  uVar5 = 0x10000;
  lVar3 = param_1;
LAB_009ca5d0:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_1) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x1980099), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4,uVar2);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_009ca5d0;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_009ca640(long param_1)

{
  FUN_009ca544(param_1 + -0x28);
  return;
}




void FUN_009ca648(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  uVar2 = FUN_00e6a474(param_2);
  uVar2 = FUN_0091ed5c(param_2,uVar2,0x12345678);
  if (param_1 == 0) {
    return;
  }
  uVar5 = 0x10000;
  lVar3 = param_1;
LAB_009ca6d4:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_1) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x3eb506ac), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4,uVar2);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_009ca6d4;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_009ca744(long param_1)

{
  FUN_009ca648(param_1 + -0x28);
  return;
}




void FUN_009ca74c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  uVar2 = FUN_00e6a474(param_2);
  uVar2 = FUN_0091ed5c(param_2,uVar2,0x12345678);
  if (param_1 == 0) {
    return;
  }
  uVar5 = 0x10000;
  lVar3 = param_1;
LAB_009ca7d8:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_1) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x29d80553), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4,uVar2);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_009ca7d8;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_009ca848(long param_1)

{
  FUN_009ca74c(param_1 + -0x28);
  return;
}




void FUN_009ca850(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  uVar2 = FUN_00e6a474(param_2);
  uVar2 = FUN_0091ed5c(param_2,uVar2,0x12345678);
  if (param_1 == 0) {
    return;
  }
  uVar5 = 0xffff0000;
  lVar3 = param_1;
LAB_009ca8e4:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_1) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x456706e0), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4,uVar2,param_3);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_009ca8e4;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_009ca95c(long param_1)

{
  FUN_009ca850(param_1 + -0x28);
  return;
}




void FUN_009ca964(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00e6a474(param_2[7]);
  if (iVar2 == 0) {
    plVar4 = (long *)FUN_01985d44(param_1,DAT_0312ead4);
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2[6]);
  }
  else {
    uVar3 = FUN_01985d44(param_1,DAT_0312f1b8);
    plVar4 = (long *)FUN_01985d44(uVar3,DAT_0312ead4);
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2[6]);
    FUN_009d441c(uVar3,param_2[0xd]);
    uVar3 = FUN_01985d44(uVar3,DAT_0312eae0);
    FUN_009b2690(uVar3,param_2[7],param_2 + 8);
  }
  uStack_c8 = 0;
  local_d0 = 0x3f800000;
  local_b8 = 0;
  local_c0 = 0x3f80000000000000;
  uStack_a8 = 0x3f800000;
  local_b0 = 0;
  local_98 = 0x3f80000000000000;
  local_a0 = 0;
  if (*(char *)((long)param_2 + 0x24) == '\0') {
    local_dc = 0.0;
    local_c0 = 0x3f80000000000000;
    uStack_a8._0_4_ = 1.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    local_b8._0_4_ = 0.0;
    uStack_c8._0_4_ = 0.0;
    puVar6 = param_2;
  }
  else {
    thunk_FUN_00d9ff34(&local_d8,param_2[5]);
    local_d4 = local_d8;
    plVar5 = (long *)FUN_009cb08c(param_3,&local_d4);
    local_dc = (float)local_98;
    puVar6 = (undefined8 *)(*plVar5 + 8);
    fVar11 = uStack_c8._4_4_;
    fVar10 = uStack_a8._4_4_;
  }
  uVar3 = local_a0;
  fVar8 = *(float *)(param_2 + 3);
  fVar9 = *(float *)((long)param_2 + 0x1c);
  fVar16 = *(float *)(param_2 + 4);
  fVar12 = (float)local_d0 * fVar8;
  fVar13 = (float)((ulong)local_d0 >> 0x20) * fVar8;
  local_c0 = CONCAT44((float)((ulong)local_c0 >> 0x20) * fVar9,(float)local_c0 * fVar9);
  local_b8 = CONCAT44(local_b8._4_4_,fVar9 * (float)local_b8);
  fVar7 = *(float *)(param_2 + 2);
  fVar14 = (float)local_b0 * fVar16;
  fVar15 = (float)((ulong)local_b0 >> 0x20) * fVar16;
  fVar8 = fVar8 * (float)uStack_c8;
  fVar16 = fVar16 * (float)uStack_a8;
  fVar9 = sinf(fVar7 * 0.017453292);
  fVar7 = cosf(fVar7 * 0.017453292);
  local_d0 = CONCAT44(fVar13 * fVar7 - fVar15 * fVar9,fVar12 * fVar7 - fVar14 * fVar9);
  uStack_c8 = CONCAT44(fVar7 * fVar11 - fVar9 * fVar10,fVar7 * fVar8 - fVar9 * fVar16);
  local_b0 = CONCAT44(fVar13 * fVar9 + fVar15 * fVar7,fVar12 * fVar9 + fVar14 * fVar7);
  uStack_a8 = CONCAT44(fVar9 * fVar11 + fVar7 * fVar10,fVar9 * fVar8 + fVar7 * fVar16);
  local_a0 = CONCAT44((float)((ulong)*puVar6 >> 0x20) + (float)((ulong)uVar3 >> 0x20),
                      (float)*puVar6 + (float)uVar3);
  local_98 = CONCAT44(local_98._4_4_,*(float *)(puVar6 + 1) + local_dc);
  FUN_00e7ca50(plVar4,&local_d0);
  *(undefined1 *)((long)plVar4 + 0x33) = *(undefined1 *)(param_2 + 0xe);
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009cac14(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  fVar12 = *(float *)((long)param_2 + 0xc) * 0.017453292;
  fVar6 = sinf(fVar12);
  fVar12 = cosf(fVar12);
  uStack_80 = 0x3f80000000000000;
  local_88 = 0;
  fVar7 = *(float *)(param_2 + 2);
  fVar8 = sinf(fVar7 * 0.017453292);
  fVar7 = cosf(fVar7 * 0.017453292);
  fVar10 = fVar8 * 0.0;
  fVar11 = fVar7 * 0.0;
  fVar15 = fVar11 + fVar8 * fVar6;
  local_8c = fVar10 + fVar11;
  fVar14 = fVar11 - fVar8 * fVar12;
  fVar13 = *(float *)((long)param_2 + 0x14) * 0.017453292;
  fVar9 = sinf(fVar13);
  fVar13 = cosf(fVar13);
  local_ac = fVar13 * (fVar11 - fVar10) + fVar9 * 0.0;
  local_9c = fVar13 * 0.0 - fVar9 * (fVar11 - fVar10);
  local_b0 = *(float *)(param_2 + 3);
  local_a0 = *(float *)((long)param_2 + 0x1c);
  local_90 = *(float *)(param_2 + 4);
  local_b8 = (fVar13 * (fVar7 - fVar10) + fVar9 * 0.0) * local_b0;
  fStack_b4 = (fVar13 * fVar15 + fVar9 * fVar12) * local_b0;
  local_b0 = (fVar13 * fVar14 + fVar9 * fVar6) * local_b0;
  local_a8 = (fVar13 * 0.0 - fVar9 * (fVar7 - fVar10)) * local_a0;
  fStack_a4 = (fVar13 * fVar12 - fVar9 * fVar15) * local_a0;
  local_a0 = (fVar13 * fVar6 - fVar9 * fVar14) * local_a0;
  local_98 = local_90 * (fVar8 + fVar11);
  fStack_94 = local_90 * (fVar10 - fVar7 * fVar6);
  local_90 = local_90 * (fVar10 + fVar7 * fVar12);
  local_88 = CONCAT44((float)((ulong)*param_2 >> 0x20) + (float)((ulong)local_88 >> 0x20),
                      (float)*param_2 + (float)local_88);
  uStack_80 = CONCAT44(uStack_80._4_4_,*(float *)(param_2 + 1) + (float)uStack_80);
  lVar4 = FUN_01985d44(param_1,DAT_02e3ef98);
  if (lVar4 != 0) {
    FUN_009d31b4(lVar4,param_2[5],0);
    FUN_009d3440(0xbf800000,lVar4);
    FUN_009d34d4(lVar4,&local_b8);
    iVar2 = FUN_00e6a474(param_2[6]);
    if (iVar2 != 0) {
      uVar5 = param_2[6];
      uVar3 = FUN_00e6a474(uVar5);
      uVar3 = FUN_0091ed5c(uVar5,uVar3,0x12345678);
      FUN_009d33e4(lVar4,uVar3);
    }
    FUN_009d33ec(lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009caea0(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 & 1) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x30) + 0x188);
    lVar2 = *plVar1;
    while (lVar2 != 0) {
      plVar3 = *(long **)(lVar2 + 8);
      do {
        lVar2 = *plVar3;
        plVar3 = plVar3 + 1;
      } while (lVar2 != 0);
      plVar1 = plVar1 + 1;
      lVar2 = *plVar1;
    }
  }
  return;
}




void FUN_009caecc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2c30;
  param_1[5] = &PTR_FUN_027c2c88;
  param_1[6] = 0;
  return;
}




void FUN_009caee8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009caef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009caef4(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_009caf84(param_1 + 0x18,auStack_40);
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = (ulong)(*(int *)(param_1 + 0x18) - 1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar3 + uVar2 * 8);
  }
  *(undefined8 *)(lVar3 + uVar2 * 8) = *param_2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009caf84(uint *param_1,undefined8 *param_2)

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
    FUN_009cb00c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}

