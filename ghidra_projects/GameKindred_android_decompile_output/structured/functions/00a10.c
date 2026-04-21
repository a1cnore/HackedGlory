// functions/00a10 — 21 functions
#include "libGameKindred.h"




void FUN_00a102f4(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  float *pfVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  
  if (*(char *)(param_4 + 0x118) == '\0') {
    return;
  }
  uVar3 = FUN_00a1f37c();
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(char *)(*(long *)(param_4 + 0x28) + 0x59) == '\0') {
    return;
  }
  uVar1 = *(uint *)(*(long *)(param_4 + 0x28) + 0x48);
  if ((4 < uVar1) || ((1 << (ulong)(uVar1 & 0x1f) & 0x13U) == 0)) goto LAB_00a103bc;
  FUN_009bbfb0();
  FUN_009bd5c8();
  pfVar4 = (float *)FUN_009b812c();
  fVar11 = *pfVar4;
  fVar13 = pfVar4[1];
  fVar14 = pfVar4[2];
  fVar10 = (float)FUN_00a0bf68(param_4);
  param_2 = fVar13 - param_2;
  param_3 = fVar14 - param_3;
  *(float *)(param_4 + 0xc4) = fVar11 - fVar10;
  *(float *)(param_4 + 200) = param_2;
  *(float *)(param_4 + 0xcc) = param_3;
  iVar2 = *(int *)(*(long *)(param_4 + 0x28) + 0x48);
  if (iVar2 != 4) {
    if (iVar2 == 1) {
      param_3 = fVar14;
      param_2 = fVar13;
      FUN_009d1988(fVar11,*(undefined8 *)(param_4 + 0x100));
      goto LAB_00a103bc;
    }
    if (iVar2 != 0) goto LAB_00a103bc;
  }
  FUN_009d8ba8(*(undefined8 *)(param_4 + 0xe8),param_4 + 0xc4);
LAB_00a103bc:
  if (*(int *)(*(long *)(param_4 + 0x28) + 0x48) - 2U < 3) {
    FUN_009bbfb0();
    FUN_009bd5c8();
    puVar5 = (undefined8 *)FUN_009b812c();
    uVar12 = *puVar5;
    fVar11 = *(float *)(puVar5 + 1);
    fVar10 = (float)FUN_00a0bf68(param_4);
    fVar10 = (float)uVar12 - fVar10;
    *(ulong *)(param_4 + 0xc4) = CONCAT44((float)((ulong)uVar12 >> 0x20) - param_2,fVar10);
    *(float *)(param_4 + 0xcc) = fVar11 - param_3;
    atan2f(fVar10,fVar11 - param_3);
    FUN_009d1aa0(*(undefined8 *)(param_4 + 0x100));
  }
  lVar6 = FUN_00a1ffc0();
  plVar7 = (long *)(lVar6 + 0x10);
  plVar8 = (long *)*plVar7;
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar7;
    do {
      if (*(uint *)(plVar8 + 4) >= 0x646552f8) {
        plVar9 = plVar8;
      }
      plVar8 = (long *)plVar8[*(uint *)(plVar8 + 4) < 0x646552f8];
    } while (plVar8 != (long *)0x0);
    if (((plVar9 != plVar7) && (*(uint *)(plVar9 + 4) < 0x646552f9)) && ((int)plVar9[5] != 0)) {
      lVar6 = 0;
      uVar3 = 0;
      do {
        (*(code *)((undefined8 *)(plVar9[6] + lVar6))[1])
                  (*(undefined8 *)(plVar9[6] + lVar6),param_4 + 0x94);
        uVar3 = uVar3 + 1;
        lVar6 = lVar6 + 0x10;
      } while (uVar3 < *(uint *)(plVar9 + 5));
    }
  }
  return;
}




undefined8 FUN_00a104a8(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x94;
  iVar2 = FUN_008ff0d4(lVar1);
  if (iVar2 == 1) {
    plVar4 = *(long **)(param_1 + 0x48);
    uVar5 = 0;
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
        uVar5 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x48) = 0;
        uVar5 = 0;
        *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
      }
    }
    uVar5 = FUN_00d9eae0(uVar5);
    uVar3 = FUN_008ff0e4(lVar1);
    uVar5 = FUN_00d736f4(uVar5,uVar3);
    return uVar5;
  }
  if (iVar2 == 0) {
    plVar4 = *(long **)(param_1 + 0x48);
    uVar5 = 0;
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
        uVar5 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x48) = 0;
        uVar5 = 0;
        *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
      }
    }
    uVar5 = FUN_00d9eb38(uVar5);
    uVar3 = FUN_008ff0dc(lVar1);
    uVar5 = FUN_00d53978(uVar5,uVar3);
    return uVar5;
  }
  return 0x400;
}




void FUN_00a105a8(undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5)

{
  long lVar1;
  float fVar2;
  
  *(float *)(param_4 + 0xcc) = param_5[2];
  *(undefined8 *)(param_4 + 0xc4) = *(undefined8 *)param_5;
  if ((*(long *)(param_4 + 0xe8) != 0) && ((*(uint *)(*(long *)(param_4 + 0x28) + 0x48) | 4) == 4))
  {
    FUN_009d8ba8(*(long *)(param_4 + 0xe8),param_5);
    return;
  }
  lVar1 = *(long *)(param_4 + 0x100);
  if ((lVar1 != 0) && (*(int *)(*(long *)(param_4 + 0x28) + 0x48) == 1)) {
    fVar2 = (float)FUN_00a0bf68();
    FUN_009d1988(fVar2 + *param_5,param_2 + param_5[1],param_3 + param_5[2],lVar1);
    return;
  }
  return;
}




void FUN_00a10644(long param_1,float *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  atan2f(*param_2,param_2[2]);
  FUN_009d1aa0(uVar1);
  return;
}




void FUN_00a10670(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  
  uVar1 = *(uint *)(*(long *)(param_4 + 0x28) + 0x48);
  if ((uVar1 | 4) == 4) {
    FUN_009d8ba8(*(undefined8 *)(param_4 + 0xe8),param_4 + 0xc4);
    uVar1 = *(uint *)(*(long *)(param_4 + 0x28) + 0x48);
  }
  if (uVar1 == 1) {
    uVar2 = *(undefined8 *)(param_4 + 0x100);
    fVar3 = (float)FUN_00a0bf68(param_4);
    FUN_009d1988(fVar3 + *(float *)(param_4 + 0xc4),param_2 + *(float *)(param_4 + 200),
                 param_3 + *(float *)(param_4 + 0xcc),uVar2);
    uVar1 = *(uint *)(*(long *)(param_4 + 0x28) + 0x48);
  }
  if (uVar1 - 2 < 3) {
    uVar2 = *(undefined8 *)(param_4 + 0x100);
    FUN_00a0bf68(param_4);
    FUN_009d1988(uVar2);
    atan2f(*(float *)(param_4 + 0xc4),*(float *)(param_4 + 0xcc));
    FUN_009d1aa0(*(undefined8 *)(param_4 + 0x100));
    return;
  }
  return;
}




undefined8 FUN_00a10728(undefined8 param_1)

{
  FUN_00a0b86c();
  return param_1;
}




void FUN_00a1074c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a10754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00a10758(long param_1)

{
  long lVar1;
  
  DAT_02e3ef58 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_02e3ef58 + 1;
  lVar1 = param_1 + (ulong)DAT_02e3ef58 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00a11460;
  *(code **)(lVar1 + 0xb8) = FUN_00a114d0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(uint *)(lVar1 + 0xa4) = DAT_02e3ef58;
  *(undefined4 *)(lVar1 + 0xa8) = 0x848;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,3,FUN_00a107c8,0);
  return;
}




void FUN_00a107c8(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  
  FUN_00d7eb10(param_1 + 0x28,*(undefined4 *)(param_1 + 0x844));
  plVar1 = *(long **)(param_1 + 0x808);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x810) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        fVar4 = (float)FUN_01988c78();
        lVar2 = (**(code **)(**(long **)(param_1 + 0x808) + 0x10))();
        *(float *)(lVar2 + 0x818) = *(float *)(lVar2 + 0x818) - fVar4;
        lVar2 = (**(code **)(**(long **)(param_1 + 0x808) + 0x10))();
        if (*(float *)(lVar2 + 0x818) <= 0.0) {
          puVar3 = (undefined8 *)FUN_00d7efd4(param_1 + 0x28);
          fVar4 = *(float *)(puVar3 + 1);
          *(ulong *)(param_1 + 0x830) =
               CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x818) >> 0x20) -
                        (float)((ulong)*puVar3 >> 0x20),
                        (float)*(undefined8 *)(param_1 + 0x818) - (float)*puVar3);
          *(float *)(param_1 + 0x838) = *(float *)(param_1 + 0x820) - fVar4;
          *(undefined8 *)(param_1 + 0x83c) = 0x4000000040000000;
          FUN_00a10a60(param_1);
        }
        else {
          plVar1 = *(long **)(param_1 + 0x808);
          lVar2 = 0;
          if (plVar1 != (long *)0x0) {
            if (*(int *)(param_1 + 0x810) == (int)plVar1[1]) {
              lVar2 = (**(code **)(*plVar1 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x808) = 0;
              lVar2 = 0;
              *(undefined4 *)(param_1 + 0x810) = DAT_03214ce8;
            }
          }
          FUN_00d7eb10(lVar2 + 0x38,*(undefined4 *)(param_1 + 0x844));
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x808) = 0;
      *(undefined4 *)(param_1 + 0x810) = DAT_03214ce8;
    }
  }
  fVar5 = *(float *)(param_1 + 0x83c);
  fVar4 = (float)FUN_01988c78();
  fVar5 = fVar5 - fVar4;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)(param_1 + 0x83c) = fVar5;
  uVar6 = DAT_03218f30;
  fVar4 = DAT_03218f38;
  if (0.0 < *(float *)(param_1 + 0x840)) {
    fVar5 = fVar5 / *(float *)(param_1 + 0x840);
    uVar6 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x830) >> 0x20) * fVar5,
                     (float)*(undefined8 *)(param_1 + 0x830) * fVar5);
    fVar4 = fVar5 * *(float *)(param_1 + 0x838);
  }
  FUN_00a111a0(param_1);
  puVar3 = (undefined8 *)FUN_00d7efd4();
  fVar5 = *(float *)(puVar3 + 1);
  *(ulong *)(param_1 + 0x818) =
       CONCAT44((float)((ulong)uVar6 >> 0x20) + (float)((ulong)*puVar3 >> 0x20),
                (float)uVar6 + (float)*puVar3);
  *(float *)(param_1 + 0x820) = fVar4 + fVar5;
  FUN_00a111a0(param_1);
  puVar3 = (undefined8 *)FUN_00d7efdc();
  *(undefined8 *)(param_1 + 0x824) = *puVar3;
  *(undefined4 *)(param_1 + 0x82c) = *(undefined4 *)(puVar3 + 1);
  return;
}




void FUN_00a10998(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_027c82c8;
  FUN_00d7ea98(param_1 + 5);
  param_1[0x101] = 0;
  *(undefined4 *)(param_1 + 0x102) = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x107) = DAT_03218f38;
  uVar1 = DAT_03218f30;
  param_1[0x108] = 0;
  *(undefined4 *)((long)param_1 + 0x83c) = 0;
  param_1[0x106] = uVar1;
  return;
}




void FUN_00a109fc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_00a10a60();
  FUN_00d7eab4(param_1 + 0x28,param_2,param_3);
  *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x818) = *param_2;
  *(undefined8 *)(param_1 + 0x824) = *param_3;
  *(undefined4 *)(param_1 + 0x82c) = *(undefined4 *)(param_3 + 1);
  return;
}




void FUN_00a10a60(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  plVar1 = *(long **)(param_1 + 0x808);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x810) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) {
        return;
      }
      plVar1 = *(long **)(param_1 + 0x808);
      uVar3 = 0;
      if (plVar1 != (long *)0x0) {
        if (*(int *)(param_1 + 0x810) == (int)plVar1[1]) {
          uVar3 = (**(code **)(*plVar1 + 0x10))();
        }
        else {
          *(undefined8 *)(param_1 + 0x808) = 0;
          uVar3 = 0;
          *(undefined4 *)(param_1 + 0x810) = DAT_03214ce8;
        }
      }
      FUN_019888f4(uVar3);
      uVar4 = DAT_03214ce8;
      *(undefined8 *)(param_1 + 0x808) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x808) = 0;
      uVar4 = DAT_03214ce8;
    }
    *(undefined4 *)(param_1 + 0x810) = uVar4;
  }
  return;
}




void FUN_00a10b10(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  *(undefined4 *)((long)param_1 + 0x14) = param_4;
  param_1[1] = uVar1;
  return;
}




void FUN_00a10b2c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_00d7ebe8(*param_1,param_1 + 1);
    return;
  }
  return;
}




void FUN_00a10b44(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_40 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*param_1 != 0) {
    local_30 = (undefined4)param_1[1];
    uStack_2c = (undefined4)param_1[2];
    FUN_00d7ecd8(*param_1,&local_30,param_2,param_3,auStack_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a10bb0(undefined8 param_1,long *param_2,undefined4 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_6c;
  undefined1 auStack_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*param_2 != 0) {
    local_48 = *param_3;
    local_40 = param_3[1];
    local_50 = 0x3e800000;
    local_44 = 0;
    uStack_54 = 0x7f7fffff;
    local_6c = 0;
    local_58 = 0x3e800000;
    uVar2 = FUN_00ef0108(*(undefined4 *)((long)param_2 + 0x14),&local_48,&local_6c,auStack_68,
                         &local_58);
    if ((uVar2 & 1) != 0) {
      local_44 = local_6c;
    }
    FUN_00d7edd0(param_1,*param_2,param_2 + 1,&local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a10c68(long *param_1,undefined8 param_2)

{
  if (*param_1 != 0) {
    FUN_00d7ee6c(*param_1,param_1 + 1,param_2);
    return;
  }
  return;
}




void FUN_00a10c84(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long *plVar8;
  
  plVar2 = *(long **)(param_2 + 0x808);
  if (plVar2 == (long *)0x0) {
LAB_00a10d04:
    lVar3 = param_2 + 0x28;
    plVar2 = (long *)FUN_00d7efd4(lVar3);
    lVar4 = FUN_01985d44(param_2,DAT_03130ab8);
    uVar7 = DAT_03214ce8;
    if (lVar4 == 0) {
      *(undefined8 *)(param_2 + 0x808) = 0;
      *(undefined4 *)(param_2 + 0x810) = uVar7;
    }
    else {
      iVar1 = *(int *)(lVar4 + 0x30);
      *(long **)(param_2 + 0x808) = (long *)(lVar4 + 0x28);
      *(int *)(param_2 + 0x810) = iVar1;
      if (iVar1 == *(int *)(lVar4 + 0x30)) {
        lVar4 = (**(code **)(*(long *)(lVar4 + 0x28) + 0x10))();
        if (lVar4 != 0) {
          plVar8 = *(long **)(param_2 + 0x808);
          lVar4 = 0;
          if (plVar8 != (long *)0x0) {
            if (*(int *)(param_2 + 0x810) == (int)plVar8[1]) {
              lVar4 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              *(undefined8 *)(param_2 + 0x808) = 0;
              lVar4 = 0;
              *(undefined4 *)(param_2 + 0x810) = DAT_03214ce8;
            }
          }
          uVar5 = FUN_00d7efd4(lVar3);
          uVar6 = FUN_00d7efdc(lVar3);
          FUN_00d7eab4(lVar4 + 0x38,uVar5,uVar6);
        }
        goto LAB_00a10e20;
      }
      *(undefined8 *)(param_2 + 0x808) = 0;
      *(undefined4 *)(param_2 + 0x810) = uVar7;
    }
  }
  else {
    if (*(int *)(param_2 + 0x810) != (int)plVar2[1]) {
      *(undefined8 *)(param_2 + 0x808) = 0;
      *(undefined4 *)(param_2 + 0x810) = DAT_03214ce8;
      goto LAB_00a10d04;
    }
    lVar3 = (**(code **)(*plVar2 + 0x10))();
    if (lVar3 == 0) goto LAB_00a10d04;
    plVar2 = *(long **)(param_2 + 0x808);
    lVar3 = 0;
    if (plVar2 != (long *)0x0) {
      if (*(int *)(param_2 + 0x810) == (int)plVar2[1]) {
        lVar3 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        *(undefined8 *)(param_2 + 0x808) = 0;
        lVar3 = 0;
        *(undefined4 *)(param_2 + 0x810) = DAT_03214ce8;
      }
    }
    plVar2 = (long *)FUN_00d7efd4(lVar3 + 0x38);
LAB_00a10e20:
    plVar8 = *(long **)(param_2 + 0x808);
    if (plVar8 != (long *)0x0) {
      if (*(int *)(param_2 + 0x810) == (int)plVar8[1]) {
        lVar3 = (**(code **)(*plVar8 + 0x10))();
        if (lVar3 != 0) {
          lVar3 = (**(code **)(**(long **)(param_2 + 0x808) + 0x10))();
          *(undefined4 *)(lVar3 + 0x818) = 0x40000000;
          plVar8 = *(long **)(param_2 + 0x808);
          lVar3 = 0;
          if (plVar8 != (long *)0x0) {
            if (*(int *)(param_2 + 0x810) == (int)plVar8[1]) {
              lVar3 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              *(undefined8 *)(param_2 + 0x808) = 0;
              lVar3 = 0;
              *(undefined4 *)(param_2 + 0x810) = DAT_03214ce8;
            }
          }
          uVar7 = *(undefined4 *)(param_2 + 0x844);
          *param_1 = lVar3 + 0x38;
          goto LAB_00a10ea8;
        }
      }
      else {
        *(undefined8 *)(param_2 + 0x808) = 0;
        *(undefined4 *)(param_2 + 0x810) = DAT_03214ce8;
      }
    }
  }
  uVar7 = *(undefined4 *)(param_2 + 0x844);
  *param_1 = 0;
LAB_00a10ea8:
  *(int *)(param_1 + 2) = (int)plVar2[1];
  lVar3 = *plVar2;
  *(undefined4 *)((long)param_1 + 0x14) = uVar7;
  param_1[1] = lVar3;
  return;
}




void FUN_00a10ef8(long *param_1,long param_2,float *param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  float local_6c;
  undefined1 auStack_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uStack_54 = 0x7f7fffff;
  local_48 = *param_3;
  local_40 = param_3[1];
  local_50 = 0x3e800000;
  local_58 = 0x3e800000;
  local_6c = 0.0;
  fStack_44 = 0.0;
  uVar3 = FUN_00ef0108(*(undefined4 *)(param_2 + 0x844),&local_48,&local_6c,auStack_68,&local_58);
  if ((uVar3 & 1) != 0) {
    fStack_44 = local_6c;
  }
  FUN_00a10a60(param_2);
  *(ulong *)(param_2 + 0x830) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x818) >> 0x20) - fStack_44,
                (float)*(undefined8 *)(param_2 + 0x818) - local_48);
  *(float *)(param_2 + 0x838) = *(float *)(param_2 + 0x820) - local_40;
  *(undefined8 *)(param_2 + 0x83c) = 0x4000000040000000;
  uVar1 = *(undefined4 *)(param_2 + 0x844);
  *param_1 = param_2 + 0x28;
  param_1[1] = CONCAT44(fStack_44,local_48);
  *(float *)(param_1 + 2) = local_40;
  *(undefined4 *)((long)param_1 + 0x14) = uVar1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a10fe0(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  *(undefined4 *)((long)param_2 + 0xc) = param_1;
  *(undefined4 *)(param_2 + 2) = param_1;
  *param_2 = uVar1;
  return;
}




void FUN_00a10ff8(long param_1)

{
  FUN_00d7ef00(param_1 + 0x28);
  FUN_00a10a60(param_1);
  return;
}

