// functions/009b1 — 24 functions
#include "libGameKindred.h"




void FUN_009b112c(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  return;
}




void FUN_009b1134(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xf7 | (param_2 & 1) << 3;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009b114c(undefined4 param_1,long param_2,long *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar6 = (long *)*param_3;
  if (plVar6 != (long *)0x0) {
    if ((int)param_3[1] == (int)plVar6[1]) {
      lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
      if (lVar4 != 0) goto LAB_009b128c;
    }
    else {
      *param_3 = 0;
      *(undefined4 *)(param_3 + 1) = DAT_03214ce8;
    }
  }
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 != 0) {
    local_98 = 0xfc2e3586;
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_b0 = 0;
    local_b8 = 0;
    local_74 = DAT_03218f40;
    local_7c = _DAT_03218ef8;
    local_6c = DAT_03218f48;
    local_8c = 0;
    local_68 = 0;
    local_60 = 0;
    local_54 = 0x101;
    local_5c = 0x100000002;
    local_90 = FUN_00ceb350();
    local_50 = 1;
    local_84 = 0xa600a6a6;
    local_80 = param_1;
    lVar5 = FUN_00ca9fc8(lVar4,&local_b8);
    lVar4 = 0;
    if (lVar5 != 0) {
      lVar4 = lVar5 + 0x40;
    }
    puVar1 = &DAT_03214ce8;
    if (lVar5 != 0) {
      puVar1 = (undefined4 *)(lVar4 + 8);
    }
    uVar2 = *puVar1;
    *param_3 = lVar4;
    *(undefined4 *)(param_3 + 1) = uVar2;
    FUN_009b12b8(param_2,0,param_3);
  }
LAB_009b128c:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009b12b8(long param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  long *plVar6;
  byte local_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar6 = (long *)*param_3;
  if (plVar6 != (long *)0x0) {
    if ((int)param_3[1] == (int)plVar6[1]) {
      lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
      if ((lVar3 != 0) && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
        FUN_00ceabec(local_50);
        if ((param_2 & 1) == 0) {
          bVar5 = *(byte *)(param_1 + 0x44) >> 3 & 1;
        }
        else {
          bVar5 = 1;
        }
        bVar1 = *(byte *)(lVar3 + 0x2fc);
        local_50[0] = local_50[0] & 0x40 | bVar5 | bVar1 & 0x20 | bVar1 & 0x80;
        plVar6 = (long *)*param_3;
        uVar4 = 0;
        if (plVar6 != (long *)0x0) {
          if ((int)param_3[1] == (int)plVar6[1]) {
            uVar4 = (**(code **)(*plVar6 + 0x10))();
          }
          else {
            *param_3 = 0;
            uVar4 = 0;
            *(undefined4 *)(param_3 + 1) = DAT_03214ce8;
          }
        }
        FUN_009d3f48(uVar4,local_50);
      }
    }
    else {
      *param_3 = 0;
      *(undefined4 *)(param_3 + 1) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b13e8(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x28);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x28) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
          }
        }
        FUN_019888f4(uVar3);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
    }
  }
  FUN_01985ca8(param_1);
  return;
}




void FUN_009b148c(float param_1,long param_2,byte param_3,long param_4,byte param_5)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  
  lVar5 = *(long *)(param_2 + 0x10);
  if (lVar5 == 0) {
    return;
  }
  uVar1 = *(ushort *)(lVar5 + 0x88) & 0x1f;
  if ((uVar1 != 0x1f) && (*(ushort *)(lVar5 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)) {
    return;
  }
  *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) & 0xfe | param_3 & 1;
  FUN_00cedce4();
  lVar5 = FUN_00d9e390();
  fVar7 = *(float *)(param_2 + 0x38);
  *(float *)(param_2 + 0x38) = param_1 + 0.8;
  bVar2 = 0;
  if (lVar5 != 0) {
    bVar2 = (lVar5 == param_4) << 2;
  }
  *(byte *)(param_2 + 0x44) = bVar2 | *(byte *)(param_2 + 0x44) & 0xf9 | (param_5 & 1) << 1;
  if ((0.001 <= ABS(fVar7 - (param_1 + 0.8))) &&
     (plVar3 = *(long **)(param_2 + 0x28), plVar3 != (long *)0x0)) {
    if (*(int *)(param_2 + 0x30) == (int)plVar3[1]) {
      lVar5 = (**(code **)(*plVar3 + 0x10))();
      if (lVar5 != 0) {
        plVar3 = *(long **)(param_2 + 0x28);
        uVar4 = 0;
        if (plVar3 != (long *)0x0) {
          if (*(int *)(param_2 + 0x30) == (int)plVar3[1]) {
            uVar4 = (**(code **)(*plVar3 + 0x10))();
          }
          else {
            *(undefined8 *)(param_2 + 0x28) = 0;
            uVar4 = 0;
            *(undefined4 *)(param_2 + 0x30) = DAT_03214ce8;
          }
        }
        FUN_019888f4(uVar4);
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined4 *)(param_2 + 0x30) = DAT_03214ce8;
    }
  }
  plVar6 = (long *)(param_2 + 0x28);
  plVar3 = (long *)*plVar6;
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_2 + 0x30) == (int)plVar3[1]) {
      lVar5 = (**(code **)(*plVar3 + 0x10))();
      if (lVar5 != 0) goto LAB_009b162c;
    }
    else {
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined4 *)(param_2 + 0x30) = DAT_03214ce8;
    }
  }
  FUN_009b114c(*(undefined4 *)(param_2 + 0x38),param_2,plVar6);
LAB_009b162c:
  plVar6 = (long *)*plVar6;
  if (plVar6 != (long *)0x0) {
    if (*(int *)(param_2 + 0x30) == (int)plVar6[1]) {
      lVar5 = (**(code **)(*plVar6 + 0x10))();
      if (lVar5 != 0) {
        FUN_009b0ee0(param_2);
        return;
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined4 *)(param_2 + 0x30) = DAT_03214ce8;
    }
  }
  return;
}




void thunk_FUN_009b13e8(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x28);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x28) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
          }
        }
        FUN_019888f4(uVar3);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
    }
  }
  FUN_01985ca8(param_1);
  return;
}




void FUN_009b1698(undefined8 *param_1)

{
  undefined4 uVar1;
  
  param_1[5] = 0;
  *param_1 = &PTR_thunk_FUN_01985bd0_027c1ec0;
  uVar1 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 7) = 0x40a00000;
  *(undefined4 *)(param_1 + 6) = uVar1;
  *(undefined8 *)((long)param_1 + 0x3c) = 0xffffffff;
  *(byte *)((long)param_1 + 0x44) = *(byte *)((long)param_1 + 0x44) & 0xf0;
  return;
}




void FUN_009b16dc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009b16e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009b16e8(undefined8 *param_1)

{
  undefined4 uVar1;
  
  param_1[5] = 0;
  *param_1 = &PTR_thunk_FUN_01985bd0_027c1ef0;
  uVar1 = DAT_03214ce8;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 6) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}




void FUN_009b171c(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_009b1740(long param_1)

{
  long lVar1;
  
  DAT_0312eba0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312eba0 + 1;
  lVar1 = param_1 + (ulong)DAT_0312eba0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009b1e50;
  *(code **)(lVar1 + 0xb8) = FUN_009b1e80;
  *(uint *)(lVar1 + 0xa4) = DAT_0312eba0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x48;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x20;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_019867cc(param_1,0x3be20659,FUN_009b17e8,0);
  FUN_019867cc(param_1,0xdc302c4,FUN_009b1908,0);
  return;
}




void FUN_009b1908(void)

{
  FUN_009b1bf4();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009b1934(long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
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
  undefined8 local_5c;
  undefined1 local_54;
  undefined2 local_53;
  undefined1 local_51;
  undefined1 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 != 0) goto LAB_009b1ac4;
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
    }
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    uVar10 = 0x811c9dc5;
    iVar4 = FUN_00da2c48();
    pbVar8 = (byte *)"Effect_TurretLaser_5v5";
    if (iVar4 != 2) {
      pbVar8 = (byte *)"Effect_TurretLaser";
    }
    uVar9 = (uint)*pbVar8;
    if (*pbVar8 != 0) {
      do {
        pbVar8 = pbVar8 + 1;
        uVar10 = (uVar10 ^ uVar9) * 0x1000193;
        uVar9 = (uint)*pbVar8;
      } while (*pbVar8 != 0);
    }
    local_a8 = 0;
    uStack_a0 = 0;
    local_84 = 0xff000000;
    local_7c = _DAT_03218ef8;
    local_74 = DAT_03218f40;
    local_6c = DAT_03218f48;
    local_8c = 0;
    local_68 = 0;
    local_60 = 0;
    local_51 = 0;
    local_94 = 0;
    local_54 = 1;
    local_53 = 1;
    local_5c = 0x100000002;
    local_98 = uVar10;
    local_90 = FUN_00ceb350();
    local_50 = 1;
    local_b8 = param_2;
    local_b0 = FUN_00d5a5c4(param_2,"Bone_CenterMass");
    lVar7 = FUN_00caa28c(lVar6,&local_b8,"Bone_SearchLight");
    lVar6 = 0;
    if (lVar7 != 0) {
      lVar6 = lVar7 + 0x40;
    }
    puVar1 = &DAT_03214ce8;
    if (lVar7 != 0) {
      puVar1 = (undefined4 *)(lVar6 + 8);
    }
    uVar2 = *puVar1;
    *(long *)(param_1 + 0x28) = lVar6;
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    FUN_009b1af0(param_1,0);
  }
LAB_009b1ac4:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009b1af0(long param_1,byte param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  byte local_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if ((lVar3 != 0) && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
        FUN_00ceabec(local_40);
        local_40[0] = local_40[0] & 0xc0 | param_2 & 1 | *(byte *)(lVar3 + 0x2fc) & 0x20;
        plVar2 = *(long **)(param_1 + 0x28);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x30) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x28) = 0;
            uVar4 = 0;
            *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
          }
        }
        FUN_009d3f48(uVar4,local_40);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b1bf4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x28);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x28) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
          }
        }
        FUN_019888f4(uVar3);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
    }
  }
  FUN_01985ca8(param_1);
  return;
}




void FUN_009b1c98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009b1ca0(param_1,param_3);
  return;
}




void FUN_009b1ca0(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar2 = DAT_03214ce8;
  if ((*(byte *)(*(long *)(param_1 + 0x10) + 0x2f5) >> 5 & 1) == 0) {
    return;
  }
  if ((param_2 == 0) ||
     ((uVar1 = *(ushort *)(param_2 + 0x88) & 0x1f, uVar1 != 0x1f &&
      (*(ushort *)(param_2 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)))) {
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    goto LAB_009b1da4;
  }
  plVar3 = *(long **)(param_1 + 0x28);
  if (plVar3 == (long *)0x0) {
LAB_009b1d84:
    FUN_009b1934(param_1,param_2);
  }
  else {
    if (*(int *)(param_1 + 0x30) != (int)plVar3[1]) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
      goto LAB_009b1d84;
    }
    lVar4 = (**(code **)(*plVar3 + 0x10))();
    if (lVar4 == 0) goto LAB_009b1d84;
    plVar3 = *(long **)(param_1 + 0x38);
    lVar4 = 0;
    if (plVar3 != (long *)0x0) {
      if (*(int *)(param_1 + 0x40) == (int)plVar3[1]) {
        lVar4 = (**(code **)(*plVar3 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x38) = 0;
        lVar4 = 0;
        *(undefined4 *)(param_1 + 0x40) = DAT_03214ce8;
      }
    }
    if (lVar4 != param_2) {
      plVar3 = *(long **)(param_1 + 0x28);
      if (plVar3 == (long *)0x0) {
        uVar5 = 0;
      }
      else if (*(int *)(param_1 + 0x30) == (int)plVar3[1]) {
        uVar5 = (**(code **)(*plVar3 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x28) = 0;
        uVar5 = 0;
        *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
      }
      FUN_00d5a5c4(param_2,"Bone_CenterMass");
      uVar2 = FUN_01995208();
      FUN_009d3d6c(uVar5,param_2,uVar2);
    }
  }
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar5 = 1;
  *(long *)(param_1 + 0x38) = param_2 + 0x28;
LAB_009b1da4:
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  FUN_009b1af0(param_1,uVar5);
  return;
}




void thunk_FUN_009b1bf4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x28);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x28) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
          }
        }
        FUN_019888f4(uVar3);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
    }
  }
  FUN_01985ca8(param_1);
  return;
}




void FUN_009b1e50(undefined8 *param_1)

{
  undefined4 uVar1;
  
  param_1[5] = 0;
  *param_1 = &PTR_thunk_FUN_01985bd0_027c1ef0;
  uVar1 = DAT_03214ce8;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 6) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}




void FUN_009b1e80(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009b1e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009b1e8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c1f20;
  FUN_0198f4cc(param_1 + 5);
  param_1[0x380] = 0;
  param_1[0x37f] = 0;
  param_1[0x37e] = 0;
  param_1[0x37d] = 0;
  param_1[0x37c] = 0;
  FUN_00d9ff2c(param_1 + 0x381);
  param_1[0x382] = 0;
  *(ushort *)((long)param_1 + 0x1d12) = *(ushort *)((long)param_1 + 0x1d12) | 0x3fe0;
  *(undefined1 *)((long)param_1 + 0x1d14) = 0xff;
  memset(param_1 + 0x13,0,0x1a58);
  *(undefined2 *)(param_1 + 0x3a2) = 0xffff;
  param_1[0x3a1] = 0xffffffffffffffff;
  return;
}




void FUN_009b1f14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c1f20;
  FUN_009b1f58();
  FUN_01995718(param_1[0x37d]);
  thunk_FUN_0198f500(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009b1f58(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (*(long *)(param_1 + 0x1bf0) != 0) {
    FUN_0198fe30(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x1bf0) = 0;
  }
  if (*(long *)(param_1 + 0x1bf8) != 0) {
    FUN_0198fe30(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x1bf8) = 0;
  }
  lVar3 = 0;
  puVar4 = (undefined8 *)(param_1 + 0xb8);
  do {
    lVar5 = param_1 + lVar3 * 0x88;
    plVar6 = (long *)(lVar5 + 0xa0);
    if (*plVar6 != 0) {
      uVar1 = FUN_0198ff3c();
      FUN_019901e8(uVar1,*plVar6);
      lVar2 = param_1 + lVar3 * 0x88;
      if (*(char *)(lVar2 + 0x118) != '\0') {
        uVar7 = 0;
        puVar8 = puVar4;
        do {
          uVar1 = FUN_0198ff3c();
          FUN_019901e8(uVar1,*puVar8);
          uVar7 = uVar7 + 1;
          puVar8 = puVar8 + 3;
        } while (uVar7 < *(byte *)(lVar2 + 0x118));
      }
      memset((void *)(lVar5 + 0x98),0,0x88);
    }
    lVar3 = lVar3 + 1;
    puVar4 = puVar4 + 0x11;
  } while (lVar3 != 0x30);
  return;
}

