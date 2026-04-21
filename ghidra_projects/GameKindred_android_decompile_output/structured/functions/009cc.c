// functions/009cc — 28 functions
#include "libGameKindred.h"




void FUN_009cc05c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x38) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x38) + -8);
      while (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,param_1,param_2);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      }
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
      while (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,param_1,param_2);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      }
    }
  }
  return;
}




void FUN_009cc100(long param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x38) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




long FUN_009cc1a0(long param_1)

{
  return param_1 + -0x28;
}




long FUN_009cc1a8(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_009cc1b0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_027c2cf0;
  param_1[5] = &PTR_FUN_027c2d20;
  param_1[0xd] = &PTR_FUN_027c2d50;
  memset(param_1 + 0xe,0,0x51);
  param_1[0x19] = 0;
  uVar1 = DAT_03214ce8;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x1a) = uVar1;
  return param_1;
}




void FUN_009cc244(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009cc24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009cc250(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e6a474(param_2);
  uVar1 = FUN_0091ed5c(param_2,uVar1,0x12345678);
                    /* WARNING: Could not recover jumptable at 0x009cc298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,uVar1);
  return;
}




int FUN_009cc29c(long param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  ulong uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x58);
  piVar2 = (int *)(param_1 + 8);
  if ((ulong)bVar1 == 0) {
    cVar3 = '\x01';
  }
  else {
    uVar4 = 0;
    do {
      if (*piVar2 == param_2) {
        return param_2;
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar4 < bVar1);
    cVar3 = bVar1 + 1;
  }
  *piVar2 = param_2;
  *(char *)(param_1 + 0x58) = cVar3;
  return param_2;
}




long FUN_009cc2e4(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(byte *)(param_1 + 0x58) != 0) {
    lVar2 = 0;
    lVar1 = param_1 + 0x18;
    do {
      if (*(int *)(param_1 + 8 + lVar2 * 4) == param_2) {
        return lVar1;
      }
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while ((uint)lVar2 < (uint)*(byte *)(param_1 + 0x58));
  }
  return 0;
}




long FUN_009cc324(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(byte *)(param_1 + 0x58) != 0) {
    lVar2 = 0;
    lVar1 = param_1 + 0x18;
    do {
      if (*(int *)(param_1 + 8 + lVar2 * 4) == param_2) {
        return lVar1;
      }
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while ((uint)lVar2 < (uint)*(byte *)(param_1 + 0x58));
  }
  return 0;
}




void FUN_009cc364(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x28);
  lVar2 = 0;
  if (lVar4 != 0) {
    lVar2 = lVar4 + -0x20;
  }
  if (lVar2 != param_2) {
    FUN_009cc3e4((long *)(param_1 + 0x28),param_2);
    FUN_00a89fc4(param_2);
    return;
  }
  if (*(long *)(param_2 + 8) != 0) {
    plVar3 = (long *)(*(long *)(param_2 + 8) + -8);
    while (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      plVar1 = plVar3 + 1;
      plVar3 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar3 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_009cc3e4(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 0x20);
  plVar2 = (long *)*param_1;
  if (plVar1 == (long *)*param_1) {
    plVar3 = (long *)0x0;
    *param_1 = *plVar1;
  }
  else {
    do {
      plVar3 = plVar2;
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != plVar1);
    *plVar3 = *plVar1;
  }
  if (plVar1 == (long *)param_1[1]) {
    param_1[1] = (long)plVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_009cc440(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 &&
         (iVar1 = (**(code **)(**(long **)(lVar2 + 0x10) + 0x18))(*(long **)(lVar2 + 0x10),param_2),
         iVar1 != 1))) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = lVar3 + -8;
    }
    *(long *)(param_1 + 0x28) = lVar2;
  }
  return;
}




void FUN_009cc4a0(long param_1)

{
  long lVar1;
  
  DAT_0312f344 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312f344 + 1;
  lVar1 = param_1 + (ulong)DAT_0312f344 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009cc9ac;
  *(code **)(lVar1 + 0xb8) = FUN_009cca10;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(uint *)(lVar1 + 0xa4) = DAT_0312f344;
  *(undefined4 *)(lVar1 + 0xa8) = 0x50;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_019867cc(param_1,0x828f09a8,FUN_009cc514,0);
  return;
}




void FUN_009cc514(void)

{
  FUN_009cc808();
  return;
}




void FUN_009cc540(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  param_1[7] = 0;
  *param_1 = &PTR_FUN_027c2d80;
  param_1[5] = &PTR_FUN_027c2db0;
  uVar1 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}




long FUN_009cc5a0(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  long local_e8 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_01985cbc(param_1,local_e8,0x10,DAT_0312f344);
  if (uVar3 != 0) {
    uVar7 = 0;
    do {
      lVar6 = local_e8[uVar7];
      if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_0312f344) {
        lVar6 = 0;
      }
      plVar4 = *(long **)(lVar6 + 0x38);
      if (plVar4 != (long *)0x0) {
        if (*(int *)(lVar6 + 0x40) == (int)plVar4[1]) {
          lVar5 = (**(code **)(*plVar4 + 0x10))();
          if (lVar5 == param_2) goto LAB_009cc6e0;
        }
        else {
          *(undefined8 *)(lVar6 + 0x38) = 0;
          *(undefined4 *)(lVar6 + 0x40) = DAT_03214ce8;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  lVar6 = FUN_01985d44(param_1,DAT_0312f344);
  if (lVar6 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    *(long *)(lVar6 + 0x38) = param_2 + 0x28;
    *(undefined4 *)(lVar6 + 0x40) = uVar1;
    lVar5 = *(long *)(param_1 + 0x40);
    fVar8 = (*(float *)(lVar5 + 0x214) + 1.0) *
            (*(float *)(lVar5 + 0xac) +
            *(float *)(lVar5 + 0x160) * (*(float *)(lVar5 + 0x2c8) + 1.0));
    if (DAT_0312f304 <= fVar8) {
      fVar8 = DAT_0312f304;
    }
    fVar9 = DAT_0312f244;
    if (DAT_0312f244 <= fVar8) {
      fVar9 = fVar8;
    }
    *(int *)(lVar6 + 0x48) = (int)fVar9;
  }
LAB_009cc6e0:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009cc718(long param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long local_d8 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_019889cc(local_d8,0x10,DAT_0312f344,0);
  if (uVar2 != 0) {
    uVar6 = (ulong)uVar2;
    plVar7 = local_d8;
    do {
      lVar5 = *plVar7;
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_0312f344) {
        lVar5 = 0;
      }
      plVar3 = *(long **)(lVar5 + 0x38);
      if (plVar3 != (long *)0x0) {
        if (*(int *)(lVar5 + 0x40) == (int)plVar3[1]) {
          lVar4 = (**(code **)(*plVar3 + 0x10))();
          if (lVar4 == param_1) {
            FUN_01985ca8(lVar5);
          }
        }
        else {
          *(undefined8 *)(lVar5 + 0x38) = 0;
          *(undefined4 *)(lVar5 + 0x40) = DAT_03214ce8;
        }
      }
      uVar6 = uVar6 - 1;
      plVar7 = plVar7 + 1;
    } while (uVar6 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009cc808(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c09220) {
    lVar4 = 0;
  }
  lVar4 = *(long *)(lVar4 + 0x40);
  fVar6 = (*(float *)(lVar4 + 0x214) + 1.0) *
          (*(float *)(lVar4 + 0xac) + *(float *)(lVar4 + 0x160) * (*(float *)(lVar4 + 0x2c8) + 1.0))
  ;
  if (DAT_0312f304 <= fVar6) {
    fVar6 = DAT_0312f304;
  }
  iVar3 = *(int *)(param_1 + 0x48);
  fVar7 = DAT_0312f244;
  if (DAT_0312f244 <= fVar6) {
    fVar7 = fVar6;
  }
  iVar5 = (int)fVar7;
  if (iVar3 != iVar5) {
    plVar1 = *(long **)(param_1 + 0x38);
    uVar2 = 0;
    if (plVar1 != (long *)0x0) {
      if (*(int *)(param_1 + 0x40) == (int)plVar1[1]) {
        uVar2 = (**(code **)(*plVar1 + 0x10))();
        iVar3 = *(int *)(param_1 + 0x48);
      }
      else {
        *(undefined8 *)(param_1 + 0x38) = 0;
        uVar2 = 0;
        *(undefined4 *)(param_1 + 0x40) = DAT_03214ce8;
      }
    }
    FUN_009cc100(uVar2,iVar5 - iVar3);
    *(int *)(param_1 + 0x48) = iVar5;
  }
  return;
}




void FUN_009cc8f4(long param_1)

{
  FUN_0198931c(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009cc91c(void *param_1)

{
  FUN_0198931c((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_009cc94c(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_009cc970(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




long FUN_009cc99c(long param_1)

{
  return param_1 + -0x28;
}




long FUN_009cc9a4(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_009cc9ac(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  param_1[7] = 0;
  *param_1 = &PTR_FUN_027c2d80;
  param_1[5] = &PTR_FUN_027c2db0;
  uVar1 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  return param_1;
}




void FUN_009cca10(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009cca18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009cca1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort uVar11;
  long lVar12;
  ushort *puVar13;
  ushort *puVar14;
  code *local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  puVar1 = param_1 + 5;
  *param_1 = &PTR_FUN_02baef70;
  FUN_00f0eda4(puVar1);
  *param_1 = &PTR_FUN_027c2de0;
  param_1[5] = &PTR_FUN_027c2e20;
  param_1[0x1c] = &PTR_FUN_027c2f80;
  uVar5 = DAT_03214ce8;
  lVar12 = 0x128;
  do {
    puVar3 = (undefined8 *)((long)param_1 + lVar12);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = uVar5;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = uVar5;
    lVar12 = lVar12 + 0x40;
    *(undefined4 *)(puVar3 + 5) = DAT_03218f38;
    uVar6 = DAT_03218f30;
    *(undefined4 *)((long)puVar3 + 0x3c) = 0;
    *(undefined8 *)((long)puVar3 + 0x31) = 0;
    *(undefined8 *)((long)puVar3 + 0x2c) = 0;
    puVar3[4] = uVar6;
  } while (puVar3 + 8 != param_1 + 0xc5);
  puVar3 = param_1 + 0xc9;
  param_1[200] = 0;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  FUN_00f0e4a8(puVar3);
  puVar2 = param_1 + 0xe7;
  FUN_00f0e4a8(puVar2);
  param_1[0x105] = 0;
  param_1[0x106] = 0x3f80000000000000;
  uVar6 = _DAT_03218ef8;
  param_1[0x10f] = _DAT_03218ef8;
  param_1[0x110] = uVar6;
  uVar6 = DAT_03218f00;
  *(uint *)((long)param_1 + 0xac) = *(uint *)((long)param_1 + 0xac) | 0x10;
  param_1[0x113] = 0;
  param_1[0x112] = 0;
  param_1[0x111] = uVar6;
  *(undefined1 *)(param_1 + 0x114) = 0;
  (**(code **)(param_1[5] + 0x78))(puVar1,puVar3,1);
  FUN_00f023ec(puVar3,puVar2,1);
  FUN_00f0e548(puVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_ability_level_dot_lit");
  local_a8 = (code *)0x3f0000003f000000;
  (**(code **)(param_1[0xc9] + 0x28))(puVar3,&local_a8);
  FUN_00f13f08(0x41b00000,0x41b00000,puVar3);
  *(uint *)((long)param_1 + 0x6cc) = *(uint *)((long)param_1 + 0x6cc) & 0xfffffffb;
  FUN_00f0e670(puVar3,&DAT_01bee81a,2);
  FUN_00f0e548(puVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_ability_level_dot_lit");
  local_a8 = (code *)0x3f0000003f000000;
  (**(code **)(param_1[0xe7] + 0x28))(puVar2,&local_a8);
  FUN_00f13f08(0x41b00000,0x41b00000,puVar2);
  if ((*(uint *)((long)param_1 + 0x7bc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x7bc) = *(uint *)((long)param_1 + 0x7bc) & 0xffff807f;
    FUN_0091ada4(puVar2);
  }
  FUN_00f0e670(puVar2,&DAT_01bee81a,2);
  uVar6 = FUN_00efed6c(0x3e4ccccd);
  uVar7 = FUN_00eff63c(0x3f800000,0x3f800000,0,0);
  uVar8 = FUN_00efee28(0x3f666666,0x3d4ccccd,0);
  uVar9 = FUN_00eff63c(0x400ccccd,0x400ccccd,0x3f400000,FUN_0091aa80);
  uVar10 = FUN_00efee28(0,0x3f666666,FUN_009a7608);
  lVar12 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar13 = (ushort *)0x0;
  }
  else {
    puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar13;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar12 + 0x20014) = *(int *)(lVar12 + 0x20014) + 1;
    FUN_00efcd98(puVar13);
    *(int *)(lVar12 + 0x20020) = *(int *)(lVar12 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar13,uVar9,uVar10,0);
  lVar12 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar14 = (ushort *)0x0;
  }
  else {
    puVar14 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar14;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar12 + 0x20014) = *(int *)(lVar12 + 0x20014) + 1;
    FUN_00efd208(puVar14);
    *(int *)(lVar12 + 0x20020) = *(int *)(lVar12 + 0x20020) + 1;
  }
  FUN_00efd2dc(puVar14,uVar6,uVar7,uVar8,puVar13,0);
  FUN_00efd3bc(puVar14);
  FUN_00f022a0(puVar2,puVar14);
  FUN_00f0eea0(puVar1,FUN_009cd010,param_1);
  puVar1 = param_1 + 6;
  local_80 = DAT_03210f58;
  local_a8 = FUN_009cda3c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  puStack_a0 = param_1;
  FUN_009693a0(puVar1,&local_a8);
  local_80 = DAT_03210f84;
  local_a8 = FUN_009cda44;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  puStack_a0 = param_1;
  FUN_009693a0(puVar1,&local_a8);
  local_80 = DAT_03210f70;
  local_a8 = FUN_009cda4c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  puStack_a0 = param_1;
  FUN_009693a0(puVar1,&local_a8);
  local_80 = DAT_03210f5c;
  local_a8 = FUN_009cda54;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  puStack_a0 = param_1;
  FUN_009693a0(puVar1,&local_a8);
  local_80 = DAT_03210f88;
  local_a8 = FUN_009cda5c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  puStack_a0 = param_1;
  FUN_009693a0(puVar1,&local_a8);
  local_80 = DAT_03210f60;
  local_a8 = FUN_009cda64;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  puStack_a0 = param_1;
  FUN_009693a0(puVar1,&local_a8);
  local_80 = DAT_03210f8c;
  local_a8 = FUN_009cda6c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  puStack_a0 = param_1;
  FUN_009693a0(puVar1,&local_a8);
  local_80 = DAT_03210fa4;
  local_a8 = thunk_FUN_009d010c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  puStack_a0 = param_1;
  FUN_009693a0(puVar1,&local_a8);
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

