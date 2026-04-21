// functions/00ac5 — 25 functions
#include "libGameKindred.h"




void FUN_00ac500c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00ac4eec(param_1,param_2,param_5);
  return;
}




void FUN_00ac5014(undefined4 param_1,long *param_2,byte param_3,undefined4 param_4)

{
  FUN_00f017e8();
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *param_2 = (long)&PTR_FUN_027d6408;
  FUN_00f017e8(param_2 + 0x13);
  param_2[0x13] = (long)&PTR_FUN_027c1f80;
  FUN_00b16678(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x198) = param_1;
  *(undefined4 *)((long)param_2 + 0xcc4) = param_4;
  *(undefined4 *)(param_2 + 0x199) = 0;
  *(byte *)((long)param_2 + 0xccc) = param_3 & 1;
  *(undefined1 *)((long)param_2 + 0xccd) = 0;
  (**(code **)(*param_2 + 0x78))(param_2,param_2 + 0x24,1);
                    /* WARNING: Could not recover jumptable at 0x00ac50d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))(param_2,param_2 + 0x13,1);
  return;
}




void FUN_00ac50d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d6408;
  FUN_00ac5128();
  FUN_00ac51b8(param_1 + 0x24);
  FUN_00f01868(param_1 + 0x13);
  if ((void *)param_1[0x12] != (void *)0x0) {
    operator_delete__((void *)param_1[0x12]);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  FUN_00f01868(param_1);
  return;
}




void FUN_00ac5128(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x88);
  if (*(uint *)(param_1 + 0x88) != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x90) + lVar4) != 0) {
        FUN_00f04710();
        plVar1 = *(long **)(*(long *)(param_1 + 0x90) + lVar4);
        if (plVar1 == (long *)0x0) {
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0x90) + uVar5 * 8);
        }
        else {
          (**(code **)(*plVar1 + 8))();
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0x90) + lVar4);
        }
        *puVar3 = 0;
        uVar2 = (ulong)*(uint *)(param_1 + 0x88);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  return;
}




void FUN_00ac51b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d6508;
  param_1[0x154] = &PTR_FUN_028266f0;
  param_1[0x16b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x16e);
  FUN_00f13d08(param_1 + 0x154);
  param_1[0x136] = &PTR_FUN_028266f0;
  param_1[0x14d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x150);
  FUN_00f13d08(param_1 + 0x136);
  param_1[0x118] = &PTR_FUN_028266f0;
  param_1[0x12f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x132);
  FUN_00f13d08(param_1 + 0x118);
  param_1[0xfa] = &PTR_FUN_028266f0;
  param_1[0x111] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x114);
  FUN_00f13d08(param_1 + 0xfa);
  param_1[0xdc] = &PTR_FUN_028266f0;
  param_1[0xf3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf6);
  FUN_00f13d08(param_1 + 0xdc);
  param_1[0xbe] = &PTR_FUN_028266f0;
  param_1[0xd5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd8);
  FUN_00f13d08(param_1 + 0xbe);
  param_1[0xa0] = &PTR_FUN_028266f0;
  param_1[0xb7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xba);
  FUN_00f13d08(param_1 + 0xa0);
  param_1[0x82] = &PTR_FUN_028266f0;
  param_1[0x99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9c);
  FUN_00f13d08(param_1 + 0x82);
  param_1[100] = &PTR_FUN_028266f0;
  param_1[0x7b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7e);
  FUN_00f13d08(param_1 + 100);
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




void FUN_00ac533c(void *param_1)

{
  FUN_00ac50d4();
  operator_delete(param_1);
  return;
}




void FUN_00ac5360(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x84);
  if (*(char *)(param_1 + 0xccd) != '\0') {
    uVar1 = uVar1 & 0xfffffffb;
    *(uint *)(param_1 + 0x84) = uVar1;
    *(undefined1 *)(param_1 + 0xccd) = 0;
  }
  if ((uVar1 >> 2 & 1) == 0) {
    return;
  }
  FUN_00ac5384();
  return;
}




void FUN_00ac5384(long param_1)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  
  uVar2 = FUN_019807a4();
  if ((((uVar2 & 1) != 0) && (iVar1 = FUN_019807b8(), iVar1 != 0)) &&
     (pbVar3 = (byte *)FUN_019807cc(0), (*pbVar3 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xccd) = 1;
  }
  uVar2 = FUN_019806a4();
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_019806f8(0), (uVar2 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0xccd) = 1;
  }
  return;
}




void FUN_00ac53e4(undefined8 param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5,
                 uint param_6,uint param_7)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_2 + 0x88) != 0) {
    puVar2 = *(undefined8 **)(param_2 + 0x90);
    lVar3 = (ulong)*(uint *)(param_2 + 0x88) << 3;
    do {
      pvVar4 = (void *)*puVar2;
      if ((pvVar4 != (void *)0x0) && (*(int *)((long)pvVar4 + 0x1940) == param_3)) {
        *(int *)((long)pvVar4 + 0x1940) = param_3;
        local_70 = pvVar4;
        FUN_00ac4c60(pvVar4,param_4);
        FUN_00ac4e9c(pvVar4,param_5);
        goto LAB_00ac54c8;
      }
      lVar3 = lVar3 + -8;
      puVar2 = puVar2 + 1;
    } while (lVar3 != 0);
  }
  pvVar4 = operator_new(0x1948);
  FUN_00ac46bc(pvVar4,*(undefined1 *)(param_2 + 0xccc),param_3,param_4,param_5,param_7 & 1);
  local_70 = pvVar4;
  FUN_00f023ec(param_2 + 0x98,pvVar4,1);
  FUN_00ac5578(param_2 + 0x88,&local_70);
  pvVar4 = local_70;
LAB_00ac54c8:
  *(undefined1 *)((long)pvVar4 + 0x15ba) = 0;
  FUN_00b09144(param_1,pvVar4);
  FUN_00b09454(local_70,param_6 & 1);
  *(uint *)((long)local_70 + 0x84) = *(uint *)((long)local_70 + 0x84) | 4;
  FUN_00ac5600(param_2);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00ac5534(long param_1,int param_2,uint param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 0x88) != 0) {
    plVar2 = *(long **)(param_1 + 0x90);
    lVar3 = (ulong)*(uint *)(param_1 + 0x88) << 3;
    do {
      lVar1 = *plVar2;
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0x1940) == param_2)) {
        if ((param_3 & 1) == 0) {
          return lVar1;
        }
        if ((*(byte *)(lVar1 + 0x84) >> 2 & 1) != 0) {
          return lVar1;
        }
      }
      lVar3 = lVar3 + -8;
      plVar2 = plVar2 + 1;
    } while (lVar3 != 0);
  }
  return 0;
}




void FUN_00ac5578(uint *param_1,undefined8 *param_2)

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
    FUN_00ac5a38(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ac5600(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (uVar1 != 0) {
    uVar4 = 0;
    fVar9 = 0.0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 0x90) + uVar4 * 8);
      if ((plVar2 != (long *)0x0) && ((*(byte *)((long)plVar2 + 0x84) >> 2 & 1) != 0)) {
        fVar5 = (float)(**(code **)(*plVar2 + 0x50))(plVar2);
        fVar7 = *(float *)(param_1 + 0xcc8);
        if (fVar7 < fVar5) {
          uVar6 = (**(code **)(*plVar2 + 0x50))(plVar2);
          *(undefined4 *)(param_1 + 0xcc8) = uVar6;
        }
        (**(code **)(*plVar2 + 0x50))(plVar2);
        fVar7 = fVar7 * 0.5;
        fVar9 = fVar9 + fVar7;
        if (*(float *)((long)plVar2 + 0x44) != fVar9) {
          *(float *)((long)plVar2 + 0x44) = fVar9;
          FUN_0091ada4(plVar2);
        }
        (**(code **)(*plVar2 + 0x50))(plVar2);
        fVar9 = fVar9 + fVar7 * 0.5;
        *(uint *)((long)plVar2 + 0x1644) =
             *(uint *)((long)plVar2 + 0x1644) & 0xfffffff8 |
             *(uint *)((long)plVar2 + 0x1644) & 3 |
             (uint)(uVar4 != 0 && *(char *)((long)plVar2 + 0x1945) != '\0') << 2;
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
    if (uVar1 != 0) {
      uVar4 = 0;
      do {
        lVar3 = *(long *)(*(long *)(param_1 + 0x90) + uVar4 * 8);
        if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x84) >> 2 & 1) != 0)) {
          fVar5 = *(float *)(param_1 + 0xcc8);
          fVar9 = (float)FUN_00f10374(lVar3 + 0x478,0);
          fVar9 = fVar9 * *(float *)(lVar3 + 0x718);
          FUN_00ac4ca0(fVar5 - (fVar9 + fVar9),lVar3);
        }
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
    }
  }
  uVar6 = *(undefined4 *)(param_1 + 0xcc4);
  uVar8 = *(undefined4 *)(param_1 + 0xcc0);
  lVar3 = param_1 + 0x98;
  fVar9 = (float)FUN_00f01fcc(lVar3,1,0,1,1);
  fVar5 = 16.0;
  FUN_00f01fcc(lVar3,1,0,1,1);
  FUN_00b16840(uVar8,fVar9 + 16.0,fVar5 + 20.0,param_1 + 0x120,uVar6,
               *(undefined1 *)(param_1 + 0xccc));
  FUN_00b18a7c(0x41000000,0x41200000,DAT_03218ef8,_DAT_03218efc,param_1 + 0x120,lVar3);
  return;
}




void FUN_00ac57dc(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 0x88) != 0) {
    plVar1 = *(long **)(param_1 + 0x90);
    lVar2 = (ulong)*(uint *)(param_1 + 0x88) << 3;
    do {
      lVar3 = *plVar1;
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x1940) == param_2)) {
        *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xfffffffb;
        FUN_00ac5600();
        return;
      }
      lVar2 = lVar2 + -8;
      plVar1 = plVar1 + 1;
    } while (lVar2 != 0);
  }
  FUN_00ac5600();
  return;
}




void FUN_00ac5820(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x88);
  if (*(uint *)(param_1 + 0x88) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x90) + uVar3 * 8);
      if (lVar2 != 0) {
        *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xfffffffb;
        FUN_00ab7960(*(undefined8 *)(*(long *)(param_1 + 0x90) + uVar3 * 8));
        uVar1 = (ulong)*(uint *)(param_1 + 0x88);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  *(undefined4 *)(param_1 + 0xcc8) = 0;
  FUN_00ac5600(param_1);
  return;
}




void FUN_00ac5884(long param_1,int param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x88) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x88) << 3;
    plVar1 = *(long **)(param_1 + 0x90);
    do {
      if (*(int *)(*plVar1 + 0x1940) == param_2) {
        FUN_00b09454(*plVar1,param_3 & 1);
        return;
      }
      lVar2 = lVar2 + -8;
      plVar1 = plVar1 + 1;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_00ac58b8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xcc4) = param_2;
  FUN_00ac5600();
  return;
}




int FUN_00ac58c0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 0x88) != 0) {
    plVar2 = *(long **)(param_1 + 0x90);
    iVar1 = 0;
    lVar3 = (ulong)*(uint *)(param_1 + 0x88) << 3;
    do {
      if (*plVar2 != 0) {
        iVar1 = (*(uint *)(*plVar2 + 0x84) >> 2 & 1) + iVar1;
      }
      lVar3 = lVar3 + -8;
      plVar2 = plVar2 + 1;
    } while (lVar3 != 0);
    return iVar1;
  }
  return 0;
}




void FUN_00ac5904(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d6270;
  if ((*(byte *)(param_1 + 0x325) & 1) != 0) {
    operator_delete((void *)param_1[0x327]);
  }
  if ((void *)param_1[0x324] != (void *)0x0) {
    operator_delete__((void *)param_1[0x324]);
    param_1[0x324] = 0;
    param_1[0x323] = 0;
  }
  param_1[0x305] = &PTR_FUN_028266f0;
  param_1[0x31c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 799);
  FUN_00f13d08(param_1 + 0x305);
  param_1[0x2e7] = &PTR_FUN_028266f0;
  param_1[0x2fe] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x301);
  FUN_00f13d08(param_1 + 0x2e7);
  FUN_00f01868(param_1 + 0x2d6);
  param_1[0x2b8] = &PTR_FUN_028266f0;
  param_1[0x2cf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2d2);
  FUN_00f13d08(param_1 + 0x2b8);
  FUN_009c7fa8(param_1);
  return;
}




void FUN_00ac59f0(void *param_1)

{
  FUN_00ac5904();
  operator_delete(param_1);
  return;
}




void FUN_00ac5a14(void *param_1)

{
  FUN_00ac51b8();
  operator_delete(param_1);
  return;
}




void FUN_00ac5a38(uint *param_1,uint param_2)

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




void FUN_00ac5ab8(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  uint uVar9;
  long lVar10;
  undefined *puVar11;
  undefined4 local_70 [2];
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027d6650;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x28;
  param_1[0x17] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x46;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x6c;
  FUN_00b159b8(plVar4);
  plVar5 = param_1 + 0xd7;
  FUN_00b159b8(plVar5);
  plVar6 = param_1 + 0x142;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0x160;
  FUN_00f0e4a8(plVar7);
  param_1[0x17e] = 0;
  *(undefined1 *)(param_1 + 0x17f) = 1;
  *(undefined8 *)((long)param_1 + 0xbfc) = 0x4100000041600000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f023ec(plVar1,plVar6,1);
  FUN_00f023ec(plVar1,plVar7,1);
  ppuVar8 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  if ((param_2 & 1) == 0) {
    ppuVar8 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  }
  puVar11 = *ppuVar8;
  FUN_00f0e548(plVar2,puVar11,"white_background");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  uVar9 = *(uint *)((long)param_1 + 0x1c4);
  if ((uVar9 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1c4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x2600;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar6,puVar11,"white_background");
  uVar9 = *(uint *)((long)param_1 + 0xa94);
  if ((uVar9 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xa94) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x6600;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0e548(plVar7,puVar11,"white_background");
  uVar9 = *(uint *)((long)param_1 + 0xb84);
  if ((uVar9 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xb84) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x6600;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0d9a4(plVar3,0);
  local_70[0] = 0xffe0e0e0;
  FUN_00f0d7fc(plVar3,local_70);
  if ((*(uint *)((long)param_1 + 0x2b4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2b4) = *(uint *)((long)param_1 + 0x2b4) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar3);
  }
  uVar9 = *(uint *)((long)param_1 + 0x3e4);
  if ((uVar9 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x3e4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x2600;
    FUN_0091ada4(plVar4);
  }
  uVar9 = *(uint *)((long)param_1 + 0x73c);
  if ((uVar9 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x73c) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x2600;
    FUN_0091ada4(plVar5);
  }
  if (*(long *)(lVar10 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac5da8(long param_1)

{
  FUN_00f0d378(param_1 + 0x230);
  FUN_00ac5dd0(param_1);
  return;
}




void FUN_00ac5dd0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  
  plVar1 = param_1 + 0x46;
  fVar7 = (float)FUN_00f0d4e0(plVar1);
  fVar9 = *(float *)((long)param_1 + 0xbfc) + *(float *)((long)param_1 + 0xbfc) + 6.0;
  fVar7 = fVar7 + fVar9;
  FUN_00f0d4e0(plVar1);
  plVar2 = param_1 + 0x28;
  FUN_00f13f08(fVar7,fVar9 + *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x180) + 2.0,plVar2)
  ;
  plVar3 = param_1 + 0x17;
  FUN_00f07940(0,0,plVar1,8,plVar3,8);
  FUN_00f07940(0,0,plVar2,8,plVar3,8);
  bVar5 = *(byte *)(param_1 + 0x17f);
  *(uint *)((long)param_1 + 0x3e4) =
       *(uint *)((long)param_1 + 0x3e4) & 0xfffffffb | (uint)bVar5 << 2;
  *(uint *)((long)param_1 + 0x73c) =
       *(uint *)((long)param_1 + 0x73c) & 0xfffffffb | (uint)bVar5 << 2;
  uVar4 = ((uint)bVar5 << 2 ^ 4) & 0xfc;
  *(uint *)((long)param_1 + 0xa94) = *(uint *)((long)param_1 + 0xa94) & 0xfffffffb | uVar4;
  *(uint *)((long)param_1 + 0xb84) = *(uint *)((long)param_1 + 0xb84) & 0xfffffffb | uVar4;
  if (bVar5 == 0) {
    lVar6 = param_1[0x180];
    FUN_00f0eac0(plVar2);
    FUN_00f13f08((int)lVar6,param_1 + 0x142);
    lVar6 = param_1[0x180];
    FUN_00f0eac0(plVar2);
    FUN_00f13f08((int)lVar6,param_1 + 0x160);
    FUN_00f07940(0,0,param_1 + 0x142,7,plVar2,7);
    uVar10 = 0;
    FUN_00f07940(0,param_1 + 0x160,5,plVar2,5);
  }
  else {
    FUN_00b15ad8(*(undefined4 *)((long)param_1 + 0xbfc),(int)param_1[0x180],0,param_1 + 0x6c,plVar2,
                 1);
    uVar10 = (undefined4)param_1[0x180];
    FUN_00b15ad8(*(undefined4 *)((long)param_1 + 0xbfc),uVar10,0,param_1 + 0xd7,plVar2,0);
  }
  uVar8 = (**(code **)(*param_1 + 0x58))(param_1,0,0,1,1);
  *(undefined4 *)(param_1 + 0x17e) = uVar8;
  *(undefined4 *)((long)param_1 + 0xbf4) = uVar10;
  FUN_00f13f18(param_1,param_1 + 0x17e);
  FUN_00f07940(0,0,plVar3,8,param_1,8);
  return;
}




void FUN_00ac5fdc(long param_1)

{
  FUN_00f0d75c(param_1 + 0x230);
  FUN_00ac5dd0(param_1);
  return;
}

