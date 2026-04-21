// functions/00d10 — 29 functions
#include "libGameKindred.h"




void FUN_00d101fc(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x24) = param_1;
  *(undefined4 *)(param_3 + 0x28) = param_2;
  return;
}




void FUN_00d10204(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float local_68 [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_2 + 0x378) != 0) {
    uVar7 = 0;
    do {
      lVar1 = param_2 + uVar7 * 0x40;
      plVar3 = *(long **)(lVar1 + 0x278);
      uVar4 = 0;
      if (plVar3 != (long *)0x0) {
        if (*(int *)(lVar1 + 0x280) == (int)plVar3[1]) {
          uVar4 = (**(code **)(*plVar3 + 0x10))();
        }
        else {
          *(undefined8 *)(lVar1 + 0x278) = 0;
          uVar4 = 0;
          *(undefined4 *)(lVar1 + 0x280) = DAT_03214ce8;
        }
      }
      FUN_00d55794(uVar4,local_68,0);
      if (*(uint *)(param_2 + 0xd18) != 0) {
        uVar5 = 0;
        pfVar6 = (float *)(param_2 + 0xa28);
        do {
          fVar8 = (float)local_68._4_8_ - (float)*(undefined8 *)(pfVar6 + 1);
          fVar9 = SUB84(local_68._4_8_,4) - (float)((ulong)*(undefined8 *)(pfVar6 + 1) >> 0x20);
          if ((local_68[0] - *pfVar6) * (local_68[0] - *pfVar6) + fVar8 * fVar8 + fVar9 * fVar9 <
              pfVar6[9] * pfVar6[9]) {
            fVar8 = 1.0;
            goto LAB_00d103a0;
          }
          uVar5 = uVar5 + 1;
          pfVar6 = pfVar6 + 0x10;
        } while (uVar5 < *(uint *)(param_2 + 0xd18));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_2 + 0x378));
  }
  fVar8 = 0.0;
  if (*(long *)(param_2 + 0x1578) != 0) {
    if (*(int *)(param_2 + 0x1580) == *(int *)(*(long *)(param_2 + 0x1578) + 8)) {
      fVar8 = 0.0;
      if ((*(byte *)(param_2 + 0x15b4) & 1) != 0) {
        fVar8 = (float)FUN_00d26d8c(param_2,param_2 + 0x1578);
        fVar9 = (float)FUN_00d26bc8(param_2,param_2 + 0x1578);
        fVar8 = fVar8 * 0.5 + fVar9 * 0.5;
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x1578) = 0;
      fVar8 = 0.0;
      *(undefined4 *)(param_2 + 0x1580) = DAT_03214ce8;
    }
  }
  fVar8 = (float)NEON_fminnm(fVar8,0x3f800000);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
LAB_00d103a0:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar8);
}




void FUN_00d103d0(void)

{
  return;
}




undefined8 FUN_00d103d4(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (*(int *)(param_2 + 0xa10) != 0) {
    fVar12 = 64.0;
    uVar7 = 0;
    plVar8 = (long *)(param_2 + 0x890);
    plVar5 = (long *)0x0;
    do {
      plVar2 = (long *)*plVar8;
      plVar6 = plVar5;
      fVar9 = fVar12;
      if (plVar2 == (long *)0x0) {
        lVar3 = 0;
LAB_00d10470:
        FUN_00d25570(param_2);
        uVar1 = FUN_00d55870();
        uVar4 = FUN_00d7d0a0(*(undefined8 *)(lVar3 + 0x80),uVar1);
        if (((uVar4 & 1) != 0) &&
           (fVar9 = *(float *)(param_2 + 0x28) - *(float *)(plVar8 + 2),
           fVar10 = (float)*(undefined8 *)(param_2 + 0x2c) -
                    (float)*(undefined8 *)((long)plVar8 + 0x14),
           fVar11 = (float)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20) -
                    (float)((ulong)*(undefined8 *)((long)plVar8 + 0x14) >> 0x20),
           fVar9 = fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11, plVar6 = plVar8,
           fVar12 <= fVar9)) {
          plVar6 = plVar5;
          fVar9 = fVar12;
        }
      }
      else {
        if ((int)plVar8[1] != (int)plVar2[1]) {
          *plVar8 = 0;
          lVar3 = 0;
          *(undefined4 *)(plVar8 + 1) = DAT_03214ce8;
          goto LAB_00d10470;
        }
        lVar3 = (**(code **)(*plVar2 + 0x10))();
        if ((lVar3 == 0) || ((*(ushort *)(lVar3 + 0x2f4) & 0x204) == 0)) goto LAB_00d10470;
      }
      fVar12 = fVar9;
      uVar7 = uVar7 + 1;
      plVar8 = plVar8 + 8;
      plVar5 = plVar6;
    } while (uVar7 < *(uint *)(param_2 + 0xa10));
    if (plVar6 != (long *)0x0) {
      *(long **)(param_2 + 0x1420) = plVar6;
      return 1;
    }
  }
  return 2;
}




void FUN_00d1050c(void)

{
  return;
}




void FUN_00d10510(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02812eb8;
  param_1[5] = 0;
  return;
}




void FUN_00d10544(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_00d1054c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auStack_90 [24];
  undefined1 local_78;
  undefined1 local_58 [8];
  float local_50;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00d25570(param_2);
  uVar2 = FUN_00d588cc(lVar4,*(undefined8 *)(param_1 + 0x28));
  uVar5 = FUN_00d5867c(lVar4,uVar2);
  if ((uVar5 & 1) == 0) {
LAB_00d10620:
    uVar6 = 2;
  }
  else {
    iVar3 = FUN_00d59fa0(lVar4,uVar2);
    if (iVar3 == 4) {
      FUN_00cfdfa8(auStack_90,uVar2);
    }
    else {
      if (iVar3 != 3) goto LAB_00d10620;
      FUN_00d55794(lVar4,&local_48,0);
      FUN_00d557c4(lVar4,local_58,&DAT_03218f68);
      fVar7 = (float)FUN_00d59f98(lVar4,uVar2);
      local_48 = CONCAT44(local_58._4_4_ * fVar7 + (float)((ulong)local_48 >> 0x20),
                          local_58._0_4_ * fVar7 + (float)local_48);
      local_40 = fVar7 * local_50 + local_40;
      FUN_00cfe024(auStack_90,&local_48,uVar2);
    }
    FUN_00cfe0b4(auStack_90,*(undefined4 *)(lVar4 + 0x260));
    uVar6 = 1;
    local_78 = 1;
    FUN_00ce20fc(auStack_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d1067c(void)

{
  return;
}




void FUN_00d10680(undefined8 *param_1)

{
  FUN_00d0aac4();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_02812f40;
  *(undefined4 *)(param_1 + 7) = 0;
  return;
}




void FUN_00d106b8(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  return;
}




void FUN_00d106c4(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                 undefined4 param_5)

{
  *(undefined8 *)(param_3 + 0x28) = param_4;
  *(undefined4 *)(param_3 + 0x30) = param_5;
  *(undefined4 *)(param_3 + 0x34) = param_1;
  *(undefined4 *)(param_3 + 0x38) = param_2;
  return;
}




undefined8 FUN_00d106d4(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  float fVar12;
  float local_b0 [4];
  undefined1 auStack_a0 [24];
  undefined1 local_88;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar6 = FUN_00d25570(param_2);
  uVar3 = FUN_00d588cc(lVar6,*(undefined8 *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x30) == 1) {
    plVar9 = *(long **)(param_2 + 0x1420);
    if (plVar9 == (long *)0x0) {
      plVar7 = *(long **)(param_2 + 0x18f8);
      if (plVar7 == (long *)0x0) goto LAB_00d10810;
      if (*(int *)(param_2 + 0x1900) == (int)plVar7[1]) goto LAB_00d107f4;
      *(undefined8 *)(param_2 + 0x18f8) = 0;
      uVar10 = 0;
      *(undefined4 *)(param_2 + 0x1900) = DAT_03214ce8;
    }
    else {
      plVar7 = (long *)*plVar9;
      if (plVar7 == (long *)0x0) {
LAB_00d10810:
        uVar10 = 0;
      }
      else if ((int)plVar9[1] == (int)plVar7[1]) {
LAB_00d107f4:
        uVar10 = (**(code **)(*plVar7 + 0x10))();
      }
      else {
        *plVar9 = 0;
        uVar10 = 0;
        *(undefined4 *)(plVar9 + 1) = DAT_03214ce8;
      }
    }
    FUN_00d55794(uVar10,local_b0,0);
    local_b0[1] = 0.0;
    iVar5 = rand();
    local_b0[0] = local_b0[0] +
                  (1.0 - *(float *)(param_2 + 100)) * ((float)iVar5 * 4.656613e-10 * 8.0 + -4.0);
    iVar5 = rand();
    local_b0[2] = local_b0[2] +
                  (1.0 - *(float *)(param_2 + 100)) * ((float)iVar5 * 4.656613e-10 * 8.0 + -4.0);
    cVar2 = FUN_00d55870(uVar10);
    fVar12 = -*(float *)(param_1 + 0x34);
    if (cVar2 != '\x01') {
      fVar12 = *(float *)(param_1 + 0x34);
    }
    local_b0[0] = local_b0[0] + fVar12;
    local_b0[2] = *(float *)(param_1 + 0x38) + local_b0[2];
    FUN_00cfe024(auStack_a0,local_b0,uVar3);
  }
  else {
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar10 = 1;
      goto LAB_00d1096c;
    }
    plVar9 = *(long **)(param_2 + 0x1420);
    if (plVar9 == (long *)0x0) {
      plVar7 = *(long **)(param_2 + 0x18f8);
      if (plVar7 == (long *)0x0) goto LAB_00d10808;
      if (*(int *)(param_2 + 0x1900) == (int)plVar7[1]) goto LAB_00d107c8;
      *(undefined8 *)(param_2 + 0x18f8) = 0;
      lVar11 = 0;
      *(undefined4 *)(param_2 + 0x1900) = DAT_03214ce8;
    }
    else {
      plVar7 = (long *)*plVar9;
      if (plVar7 == (long *)0x0) {
LAB_00d10808:
        lVar11 = 0;
      }
      else if ((int)plVar9[1] == (int)plVar7[1]) {
LAB_00d107c8:
        lVar11 = (**(code **)(*plVar7 + 0x10))();
      }
      else {
        *plVar9 = 0;
        lVar11 = 0;
        *(undefined4 *)(plVar9 + 1) = DAT_03214ce8;
      }
    }
    if ((*(byte *)(lVar6 + 0x2f4) & 1) != 0) {
      uVar4 = FUN_00d55870(lVar6);
      uVar8 = FUN_00d7d0a0(*(undefined8 *)(lVar11 + 0x80),uVar4);
      if ((uVar8 & 1) == 0) {
        uVar10 = 2;
        goto LAB_00d1096c;
      }
    }
    FUN_00cfdfe8(auStack_a0,*(undefined4 *)(lVar11 + 0x260),uVar3);
  }
  FUN_00cfe0b4(auStack_a0,*(undefined4 *)(lVar6 + 0x260));
  uVar10 = 1;
  local_88 = 1;
  FUN_00ce20fc(auStack_a0);
LAB_00d1096c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d109a4(void)

{
  return;
}




void FUN_00d109a8(undefined8 *param_1)

{
  FUN_00d0aac4();
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_02812fc8;
  *(undefined4 *)(param_1 + 6) = 1;
  return;
}




void FUN_00d109e8(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  return;
}




void FUN_00d109f4(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                 undefined4 param_5)

{
  *(undefined8 *)(param_3 + 0x28) = param_4;
  *(undefined4 *)(param_3 + 0x30) = param_5;
  *(undefined4 *)(param_3 + 0x34) = param_1;
  *(undefined4 *)(param_3 + 0x38) = param_2;
  return;
}




undefined8 FUN_00d10a04(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  undefined8 local_90;
  float local_88;
  undefined1 auStack_80 [24];
  undefined1 local_68;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d25570(param_2);
  uVar4 = FUN_00d588cc(lVar5,*(undefined8 *)(param_1 + 0x28));
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
    uVar1 = *(undefined4 *)(lVar5 + 0x260);
    break;
  case 1:
    plVar9 = *(long **)(param_2 + 0x1428);
    plVar6 = (long *)*plVar9;
    lVar8 = 0;
    if (plVar6 != (long *)0x0) {
      if ((int)plVar9[1] == (int)plVar6[1]) {
        lVar8 = (**(code **)(*plVar6 + 0x10))();
      }
      else {
        *plVar9 = 0;
        lVar8 = 0;
        *(undefined4 *)(plVar9 + 1) = DAT_03214ce8;
      }
    }
    uVar1 = *(undefined4 *)(lVar8 + 0x260);
    break;
  case 2:
    plVar9 = *(long **)(param_2 + 0x1428);
    plVar6 = (long *)*plVar9;
    uVar7 = 0;
    if (plVar6 != (long *)0x0) {
      if ((int)plVar9[1] == (int)plVar6[1]) {
        uVar7 = (**(code **)(*plVar6 + 0x10))();
      }
      else {
        *plVar9 = 0;
        uVar7 = 0;
        *(undefined4 *)(plVar9 + 1) = DAT_03214ce8;
      }
    }
    FUN_00d55794(uVar7,&local_90,0);
    goto LAB_00d10b38;
  case 3:
    local_88 = *(float *)(param_2 + 0x30);
    local_90 = *(undefined8 *)(param_2 + 0x28);
    cVar3 = FUN_00d55870(lVar5);
    fVar10 = -*(float *)(param_1 + 0x34);
    if (cVar3 != '\x01') {
      fVar10 = *(float *)(param_1 + 0x34);
    }
    local_90 = CONCAT44(local_90._4_4_,(float)local_90 + fVar10);
    local_88 = *(float *)(param_1 + 0x38) + local_88;
LAB_00d10b38:
    FUN_00cfe024(auStack_80,&local_90,uVar4);
    goto LAB_00d10b74;
  default:
    goto switchD_00d10a64_default;
  }
  FUN_00cfdfe8(auStack_80,uVar1,uVar4);
LAB_00d10b74:
  FUN_00cfe0b4(auStack_80,*(undefined4 *)(lVar5 + 0x260));
  local_68 = 1;
  FUN_00ce20fc(auStack_80);
switchD_00d10a64_default:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}




void FUN_00d10bc0(void)

{
  return;
}




void FUN_00d10bc4(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02813050;
  *(undefined8 *)((long)param_1 + 0x24) = 0x3e80000000000000;
  return;
}




undefined8 FUN_00d10bfc(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x24) == 1) {
    uVar1 = FUN_00d10cc8();
    return uVar1;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    FUN_00d10c30();
    return 3;
  }
  return 2;
}




undefined8 FUN_00d10c30(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 auStack_70 [24];
  undefined1 local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d25570(param_2);
  FUN_00d9eb38();
  uVar2 = FUN_00d54968();
  FUN_00cfdfa8(auStack_70,uVar2);
  FUN_00cfe0b4(auStack_70,*(undefined4 *)(lVar3 + 0x260));
  local_58 = 1;
  FUN_00ce20fc(auStack_70);
  *(undefined8 *)(param_1 + 0x24) = 0x3e80000000000001;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d10cc8(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 local_48 [2];
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar7 = *(float *)(param_1 + 0x28) - *(float *)(param_2 + 0x6c);
  *(float *)(param_1 + 0x28) = fVar7;
  if (fVar7 <= 0.0) {
    lVar4 = FUN_00d25570(param_2);
    lVar4 = *(long *)(lVar4 + 0x18);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar4 = *(long *)(lVar4 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x28) = 0x3e800000;
    if (((DAT_0314ffb8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0314ffb8), iVar2 != 0)) {
      uVar3 = FUN_00e6a474("Buff_Withdraw");
      DAT_0314ffb0 = FUN_0091ed5c("Buff_Withdraw",uVar3,0x12345678);
      __cxa_guard_release(&DAT_0314ffb8);
    }
    if (((DAT_0314ffc8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0314ffc8), iVar2 != 0)) {
      uVar3 = FUN_00e6a474("Buff_SpawnStage_Recharge");
      DAT_0314ffc0 = FUN_0091ed5c("Buff_SpawnStage_Recharge",uVar3,0x12345678);
      __cxa_guard_release(&DAT_0314ffc8);
    }
    FUN_00d9ff84(local_40,DAT_0314ffb0);
    uVar5 = FUN_00d6bbac(lVar4,local_40[0],0);
    if ((uVar5 & 1) == 0) {
      FUN_00d9ff84(local_48,DAT_0314ffc0);
      uVar5 = FUN_00d6bbac(lVar4,local_48[0],0);
      if ((uVar5 & 1) == 0) {
        uVar6 = 2;
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
      else {
        uVar6 = 1;
      }
      goto LAB_00d10d84;
    }
  }
  uVar6 = 3;
LAB_00d10d84:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}




void FUN_00d10e84(long param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}




void FUN_00d10e8c(void)

{
  return;
}




void FUN_00d10e90(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028130d8;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = 0x40400000;
  return;
}




void FUN_00d10ed0(long *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)((long)param_1 + 0x24) == param_2) {
    return;
  }
  *(int *)((long)param_1 + 0x24) = param_2;
  if (param_2 == 2) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  }
  else {
    if (param_2 == 1) {
      FUN_00d10f30(param_1,param_3,param_4);
      return;
    }
    if (param_2 != 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xa0);
  }
                    /* WARNING: Could not recover jumptable at 0x00d10f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_3,param_4);
  return;
}




void FUN_00d10f24(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d10f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))();
  return;
}




void FUN_00d10f30(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  (**(code **)(*param_1 + 0xa8))();
  uVar5 = (**(code **)(*param_1 + 0xd8))(param_1);
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d25570(param_2);
    FUN_00d55794(lVar6,auStack_48,0);
    uVar4 = (**(code **)(*param_1 + 0x80))(param_1,auStack_48);
    bVar3 = false;
    uVar1 = *(ushort *)(lVar6 + 0x88) & 0x1f;
    if (uVar1 != 0x1f) {
      bVar3 = *(short *)(lVar6 + (ulong)uVar1 * 0x38 + 0x90) == 2;
    }
    if ((bVar3) || (((uVar4 ^ 1) & 1) != 0)) {
      (**(code **)(*param_1 + 0x98))(param_1,param_2);
      uVar5 = (**(code **)(*param_1 + 0xe0))(param_1);
      if ((uVar5 & 1) != 0) {
        uVar7 = (**(code **)(*param_1 + 0xe8))(param_1);
        *(undefined4 *)(param_1 + 5) = uVar7;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

