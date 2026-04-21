// functions/00d5a — 37 functions
#include "libGameKindred.h"




void FUN_00d5a0a4(long param_1)

{
  FUN_00d54798(*(undefined8 *)(param_1 + 0x58));
  return;
}




void FUN_00d5a0ac(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  if ((param_4 & 1) != 0) {
    FUN_00d73828(*(undefined8 *)(param_1 + 0x68),param_2,param_3 & 1);
    return;
  }
  FUN_00d5378c(*(undefined8 *)(param_1 + 0x58),param_2,param_3 & 1);
  return;
}




void FUN_00d5a0c8(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  FUN_00d53bfc(*(undefined8 *)(param_1 + 0x58),param_2,param_3,param_4 & 1);
  return;
}




void FUN_00d5a0d4(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 1) != 0) {
    FUN_00d73ddc(*(undefined8 *)(param_1 + 0x68));
    return;
  }
  FUN_00d54a34(*(undefined8 *)(param_1 + 0x58));
  return;
}




void FUN_00d5a0e8(long param_1)

{
  FUN_00d5359c(*(undefined8 *)(param_1 + 0x58));
  return;
}




uint FUN_00d5a0f0(long param_1,uint param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined4 local_450 [2];
  long alStack_448 [128];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf38))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  FUN_00d7b35c(lVar4,alStack_448,0x80);
  if (param_2 == 0xff) {
    uVar2 = FUN_00d7b5c0();
    FUN_00d9ff84(local_450,uVar2);
  }
  else {
    local_450[0] = *(undefined4 *)(alStack_448[param_2] + 0x40);
  }
  uVar3 = FUN_00d5a1c0(param_1,local_450[0],param_3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00d5a1c0(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x18);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c7bf38))) {
    lVar5 = *(long *)(lVar5 + 0x20);
  }
  iVar1 = FUN_00d7b5c0();
  if (iVar1 == param_2) {
    FUN_00d7b87c(lVar5);
    pcVar4 = "NoTalent";
    param_3 = 0;
  }
  else {
    if (param_2 == 0) {
      return 0;
    }
    lVar2 = FUN_00d7b4ac(lVar5,param_2);
    uVar3 = FUN_00d7ae40();
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    FUN_00d7b7b0(lVar5,lVar2);
    pcVar4 = *(char **)(lVar2 + 0x38);
  }
  FUN_00da9844(param_1,pcVar4,param_3);
  return 1;
}




void FUN_00d5a288(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c7bf38))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00d7b938();
  return;
}




void FUN_00d5a2b4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c7bf38))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00d7b9f0();
  return;
}




void FUN_00d5a2e0(long param_1,uint param_2,int *param_3,undefined4 *param_4,int *param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long local_88 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x18);
  do {
    if (lVar2 == 0) {
LAB_00d5a3a4:
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_02c7bf38) {
      FUN_00d7b35c(lVar2,local_88,8);
      if (param_2 != 0) {
        uVar3 = (ulong)param_2;
        plVar4 = local_88;
        do {
          lVar2 = *plVar4;
          if ((lVar2 != 0) && (*(int *)(lVar2 + 0x40) == *param_3)) {
            FUN_00d7ac30(lVar2,*param_4);
            FUN_00d7ac38(*plVar4,*param_5 != 0);
          }
          plVar4 = plVar4 + 1;
          param_3 = param_3 + 1;
          param_4 = param_4 + 1;
          uVar3 = uVar3 - 1;
          param_5 = param_5 + 1;
        } while (uVar3 != 0);
      }
      goto LAB_00d5a3a4;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while( true );
}




void FUN_00d5a3d0(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = param_2;
  FUN_00d09160(param_1,local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00d5a41c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_02c7bf38) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_00d7b53c();
  return uVar2;
}




void FUN_00d5a450(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,ulong param_5,
                 undefined8 param_6)

{
  long *plVar1;
  
  if ((param_5 & 1) != 0) {
    FUN_00da2cc4(param_2);
  }
  plVar1 = *(long **)(param_2 + 0x50);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d5a4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x68))(param_1,plVar1,param_3,param_4 & 1,param_6);
    return;
  }
  return;
}




void FUN_00d5a4cc(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,ulong param_5,
                 undefined8 param_6)

{
  long *plVar1;
  
  if ((param_5 & 1) != 0) {
    FUN_00da2cc4(param_2);
  }
  plVar1 = *(long **)(param_2 + 0x50);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d5a530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x70))(param_1,plVar1,param_3,param_4 & 1,param_6);
    return;
  }
  return;
}




void FUN_00d5a548(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d5a558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0xa0))();
    return;
  }
  return;
}




void FUN_00d5a560(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d5a570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0xa8))();
    return;
  }
  return;
}




void FUN_00d5a578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x50);
  if (plVar2 != (long *)0x0) {
    uVar1 = FUN_00d5a5c4(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00d5a5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0xb0))(plVar2,param_2,uVar1);
    return;
  }
  return;
}




undefined8 FUN_00d5a5c4(long param_1,byte *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar3 = (uint)*param_2;
    uVar1 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar1 = (uVar1 ^ uVar3) * 0x1000193;
        uVar3 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  uVar3 = *(uint *)(param_1 + 0x278);
  if (uVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x280);
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = uVar1 / uVar3;
    }
    uVar8 = uVar1 - uVar6 * uVar3;
    uVar5 = (ulong)uVar8;
    uVar6 = *(uint *)(lVar2 + uVar5 * 8);
    uVar7 = uVar5;
    uVar4 = uVar6;
    while ((uVar4 != uVar1 && (uVar8 = (uint)uVar7, *(int *)(lVar2 + uVar7 * 8 + 4) != -1))) {
      uVar4 = uVar3;
      if (0 < (int)uVar8) {
        uVar4 = uVar8;
      }
      uVar8 = uVar4 - 1;
      uVar7 = (ulong)uVar8;
      uVar4 = *(uint *)(lVar2 + uVar7 * 8);
    }
    if ((uVar8 != 0xffffffff) && (*(int *)(lVar2 + (ulong)uVar8 * 8 + 4) != -1)) {
      while ((uVar4 = (uint)uVar5, uVar6 != uVar1 && (*(int *)(lVar2 + uVar5 * 8 + 4) != -1))) {
        uVar6 = uVar3;
        if (0 < (int)uVar4) {
          uVar6 = uVar4;
        }
        uVar5 = (ulong)(uVar6 - 1);
        uVar6 = *(uint *)(lVar2 + uVar5 * 8);
      }
      if (uVar4 == 0xffffffff) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = (ulong)*(uint *)(lVar2 + uVar5 * 8 + 4);
      }
      return *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x298) + uVar7 * 8) + 8);
    }
  }
  return 0;
}




void FUN_00d5a6dc(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d5a6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0xd0))();
    return;
  }
  return;
}




void FUN_00d5a6f4(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d5a704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0xd8))();
    return;
  }
  return;
}




void FUN_00d5a70c(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d5a71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0xe0))();
    return;
  }
  return;
}




void FUN_00d5a724(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(long *)(*(long *)(param_1 + 0x38) + 0x78) != 0) && (iVar1 = FUN_00e6a474(), iVar1 != 0)) {
    uVar2 = FUN_00d5401c(*(undefined8 *)(param_1 + 0x58),
                         *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78));
    FUN_00d530e8(*(undefined8 *)(param_1 + 0x58),uVar2);
    return;
  }
  return;
}




void FUN_00d5a77c(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d5a78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0xe8))();
    return;
  }
  return;
}




void FUN_00d5a794(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d5a7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0xb8))();
    return;
  }
  return;
}




void FUN_00d5a7ac(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d5a7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0xc0))();
    return;
  }
  return;
}




void FUN_00d5a7c4(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d5a7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 200))();
    return;
  }
  return;
}




void FUN_00d5a7dc(long param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_00d53f20(*(undefined8 *)(param_1 + 0x58),param_2,param_3,param_4 & 1);
    return;
  }
  return;
}




void FUN_00d5a834(long param_1,undefined4 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_00d543b8(*(undefined8 *)(param_1 + 0x58),param_2);
    return;
  }
  return;
}




void FUN_00d5a870(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long local_2a0 [70];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  FUN_00d5538c(param_1 + 0x88,3,0,0);
  uVar3 = FUN_019889cc(local_2a0,0x46,DAT_02c7eb30,0);
  if (uVar3 != 0) {
    uVar6 = 0;
    do {
      lVar7 = local_2a0[uVar6];
      if (lVar7 != 0) {
        uVar8 = 0xffff0000;
        lVar4 = lVar7;
LAB_00d5a924:
        do {
          do {
            lVar5 = lVar4;
            if ((lVar5 != lVar7) &&
               (lVar4 = FUN_019865b4(*(undefined8 *)(lVar5 + 8),0x199203e9), lVar4 != 0)) {
              (**(code **)(lVar4 + 8))(lVar5,param_1);
            }
            if (((uVar8 & 0xffff) < uVar8 >> 0x10) && (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0))
            {
              uVar8 = uVar8 & 0xffff0000 | uVar8 + 1 & 0xffff;
              goto LAB_00d5a924;
            }
            if ((uVar8 & 0xffff) == 0) goto LAB_00d5a98c;
            lVar4 = *(long *)(lVar5 + 0x20);
          } while (*(long *)(lVar5 + 0x20) != 0);
          lVar5 = *(long *)(lVar5 + 0x10);
          if ((lVar5 == 0) || (uVar1 = uVar8 - 1 & 0xffff, uVar1 == 0)) break;
          uVar8 = uVar1 | uVar8 & 0xffff0000;
          while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
            if ((uVar8 - 1 & 0xffff) == 0) goto LAB_00d5a98c;
            lVar5 = *(long *)(lVar5 + 0x10);
            uVar8 = uVar8 & 0xffff0000 | uVar8 - 1 & 0xffff;
            if (lVar5 == 0) goto LAB_00d5a98c;
          }
        } while( true );
      }
LAB_00d5a98c:
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar3);
  }
  if (param_1 == 0) {
LAB_00d5aa44:
    if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  uVar3 = 0x10000;
  lVar7 = param_1;
LAB_00d5a9e8:
  do {
    do {
      lVar4 = lVar7;
      if ((lVar4 != param_1) &&
         (lVar7 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x199203e9), lVar7 != 0)) {
        (**(code **)(lVar7 + 8))(lVar4,param_1);
      }
      if (((uVar3 & 0xffff) < uVar3 >> 0x10) && (lVar7 = *(long *)(lVar4 + 0x18), lVar7 != 0)) {
        uVar3 = uVar3 & 0xffff0000 | uVar3 + 1 & 0xffff;
        goto LAB_00d5a9e8;
      }
      if ((uVar3 & 0xffff) == 0) goto LAB_00d5aa44;
      lVar7 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((lVar4 == 0) || (uVar8 = uVar3 - 1 & 0xffff, uVar8 == 0)) goto LAB_00d5aa44;
    uVar3 = uVar8 | uVar3 & 0xffff0000;
    while (lVar7 = *(long *)(lVar4 + 0x20), lVar7 == 0) {
      if ((uVar3 - 1 & 0xffff) == 0) goto LAB_00d5aa44;
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar3 = uVar3 & 0xffff0000 | uVar3 - 1 & 0xffff;
      if (lVar4 == 0) goto LAB_00d5aa44;
    }
  } while( true );
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d5aa78(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_68 = *(undefined4 *)(param_1 + 0x250);
  local_60 = *(undefined4 *)(param_1 + 600);
  local_70 = DAT_03218f90;
  local_78 = _DAT_03218f88;
  local_64 = *(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254);
  FUN_00d55878(param_1,param_2,&local_78);
  if (param_1 != 0) {
    uVar5 = 0xffff0000;
    lVar3 = param_1;
LAB_00d5ab3c:
    do {
      do {
        lVar4 = lVar3;
        if ((lVar4 != param_1) &&
           (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x1ab4042d), lVar3 != 0)) {
          (**(code **)(lVar3 + 8))(lVar4,&local_68,param_2);
        }
        if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
          uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
          goto LAB_00d5ab3c;
        }
        if ((uVar5 & 0xffff) == 0) goto LAB_00d5ab9c;
        lVar3 = *(long *)(lVar4 + 0x20);
      } while (*(long *)(lVar4 + 0x20) != 0);
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((lVar4 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) break;
      uVar5 = uVar1 | uVar5 & 0xffff0000;
      while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
        if ((uVar5 - 1 & 0xffff) == 0) goto LAB_00d5ab9c;
        lVar4 = *(long *)(lVar4 + 0x10);
        uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
        if (lVar4 == 0) goto LAB_00d5ab9c;
      }
    } while( true );
  }
LAB_00d5ab9c:
  lVar3 = *(long *)(param_1 + 0x40);
  fVar6 = (*(float *)(lVar3 + 0x1a0) + 1.0) *
          (*(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0));
  if (DAT_031a95b0 <= fVar6) {
    fVar6 = DAT_031a95b0;
  }
  fVar7 = DAT_031a94f0;
  if (DAT_031a94f0 <= fVar6) {
    fVar7 = fVar6;
  }
  FUN_00d5f70c(fVar7,lVar3,0);
  lVar3 = *(long *)(param_1 + 0x40);
  fVar6 = (*(float *)(lVar3 + 0x1a8) + 1.0) *
          (*(float *)(lVar3 + 0x40) + *(float *)(lVar3 + 0xf4) * (*(float *)(lVar3 + 0x25c) + 1.0));
  if (DAT_031a95b8 <= fVar6) {
    fVar6 = DAT_031a95b8;
  }
  fVar7 = DAT_031a94f8;
  if (DAT_031a94f8 <= fVar6) {
    fVar7 = fVar6;
  }
  FUN_00d5f70c(fVar7,lVar3,2);
  *(undefined4 *)(param_1 + 0x2c0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c4) = 0xffffffff;
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00d5fefc();
  }
  FUN_00d5ad88(param_1);
  FUN_00d5538c(param_1 + 0x88,1,0,0);
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x30))();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_00d6c6d8(*(long *)(param_1 + 0x60),PTR_s_onActorRespawnName_02bed598);
    FUN_00d6c618(*(undefined8 *)(param_1 + 0x60));
  }
  uVar5 = 0x10000;
  lVar3 = param_1;
LAB_00d5acfc:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_1) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x163803be), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_00d5acfc;
      }
      if ((uVar5 & 0xffff) == 0) goto LAB_00d5ad54;
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((lVar4 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) {
LAB_00d5ad54:
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) goto LAB_00d5ad54;
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) goto LAB_00d5ad54;
    }
  } while( true );
}




void FUN_00d5ad88(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if (((uVar2 & 1) != 0) && (*(char *)(*(long *)(param_1 + 0x38) + 0x80) != '\0')) {
    local_38 = *(undefined4 *)(param_1 + 0x250);
    local_30 = *(undefined4 *)(param_1 + 600);
    local_34 = *(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254);
    uVar3 = FUN_01985d44(param_1,DAT_031a96c0);
    FUN_00d77c04(uVar3,&local_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d5ae18(long param_1)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_60 [56];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00d549a8(*(undefined8 *)(param_1 + 0x58));
  if (iVar2 != -1) {
    FUN_00cfdfa8(auStack_60,iVar2);
    FUN_00ce20fc(auStack_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d5ae88(long param_1)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_60 [56];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00d549e8(*(undefined8 *)(param_1 + 0x58));
  if (iVar2 != -1) {
    FUN_00cfdfa8(auStack_60,iVar2);
    FUN_00ce20fc(auStack_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d5aef8(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d5af08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0x38))();
    return;
  }
  return;
}




void FUN_00d5af10(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d5af20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0x40))();
    return;
  }
  return;
}




void FUN_00d5af28(long param_1)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x301);
  uVar2 = uVar3 + 0x400 & 0x3c00;
  *(ushort *)(param_1 + 0x301) = uVar2 | uVar3 & 0xc3ff;
  if ((uVar2 != 0) &&
     ((uVar1 = *(ushort *)(param_1 + 0x88) & 0x1f, uVar1 == 0x1f ||
      (*(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x90) != 5)))) {
    uVar4 = FUN_00d5afc0(param_1 + 0x88,5);
    if ((uVar4 & 1) != 0) {
      FUN_00d5538c(param_1 + 0x88,5,0,0);
      return;
    }
  }
  return;
}




bool FUN_00d5afc0(ushort *param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 == 0x1f) {
    bVar3 = true;
  }
  else {
    uVar2 = *param_1 >> 10;
    if ((uVar2 & 0x1f) != 0) {
      uVar4 = 0;
      puVar5 = param_1 + 4;
      do {
        if (*puVar5 == param_2) goto LAB_00d5b008;
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 0x1c;
      } while (uVar4 < (uVar2 & 0x1f));
    }
    uVar4 = 0x1f;
LAB_00d5b008:
    bVar3 = true;
    if (uVar4 != uVar1) {
      bVar3 = (1 << (ulong)(uVar4 & 0x1f) & (uint)param_1[(ulong)uVar1 * 0x1c + 5]) != 0;
    }
  }
  return bVar3;
}

