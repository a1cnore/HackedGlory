// functions/00a15 — 18 functions
#include "libGameKindred.h"




void FUN_00a150e4(long param_1)

{
  long lVar1;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(*(undefined8 *)(param_1 + 0x340),auStack_68,0);
  FUN_00985148(auStack_58,auStack_68,0,0);
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a15150(long param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 auStack_d8 [2];
  undefined8 local_c8;
  float local_c0;
  undefined1 local_b8 [8];
  float local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  undefined **local_98;
  undefined4 local_90;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FUN_00d55794(param_2,&local_a8,0);
  FUN_00d55794(*(undefined8 *)(param_1 + 0x340),local_b8,0);
  fVar13 = local_a0;
  fVar10 = fStack_a4;
  fVar8 = local_a8;
  uVar6 = FUN_00d9f00c(*(undefined8 *)(param_1 + 0x340));
  bVar2 = (uVar6 & 1) != 0;
  if (bVar2) {
    local_90 = 0x18;
    local_98 = &PTR_FUN_027c8578;
    FUN_00a1a334(param_1 + 0x260,&local_98);
  }
  iVar5 = FUN_00d5bc54(param_2);
  if (DAT_0314fdb4 != iVar5) goto LAB_00a1535c;
  fVar8 = local_b8._0_4_ - fVar8;
  fVar10 = local_b8._4_4_ - fVar10;
  fVar13 = local_b0 - fVar13;
  uVar6 = FUN_00d9f00c(*(undefined8 *)(param_1 + 0x340));
  if ((uVar6 & 1) == 0) {
LAB_00a15254:
    fVar11 = fVar8 * fVar8 + fVar10 * fVar10 + fVar13 * fVar13;
    fVar9 = SQRT(fVar11);
    if (NAN(fVar9)) {
      fVar9 = sqrtf(fVar11);
    }
    if (fVar9 <= 6.0) {
      pfVar7 = (float *)FUN_00da2d50(*(undefined8 *)(param_1 + 0x340));
      fStack_a4 = fStack_a4 - (float)*(undefined8 *)(pfVar7 + 1);
      local_a0 = local_a0 - (float)((ulong)*(undefined8 *)(pfVar7 + 1) >> 0x20);
      fVar10 = (local_a8 - *pfVar7) * (local_a8 - *pfVar7) + fStack_a4 * fStack_a4 +
               local_a0 * local_a0;
      fVar8 = SQRT(fVar10);
      if (NAN(fVar8)) {
        fVar8 = sqrtf(fVar10);
      }
      if (6.0 < fVar8) {
        FUN_00a146bc(param_1,0);
      }
      goto LAB_00a1535c;
    }
  }
  else {
    uVar1 = *(ushort *)(*(long *)(param_1 + 0x340) + 0x88) & 0x1f;
    if ((uVar1 != 0x1f) &&
       (*(ushort *)(*(long *)(param_1 + 0x340) + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2))
    goto LAB_00a15254;
  }
  fVar11 = fVar8 * fVar8 + fVar10 * fVar10 + fVar13 * fVar13;
  fVar9 = SQRT(fVar11);
  if (NAN(fVar9)) {
    fVar9 = sqrtf(fVar11);
  }
  local_e8 = 0x4000000040000000;
  uVar12 = NEON_fmov(0x40a00000,4);
  local_c0 = (fVar13 / fVar9) * 5.0 + local_a0;
  local_c8 = CONCAT44(fStack_a4 + (fVar10 / fVar9) * (float)((ulong)uVar12 >> 0x20),
                      local_a8 + (fVar8 / fVar9) * (float)uVar12);
  local_e0 = 0x40000000;
  uVar12 = FUN_00da2eb4(*(undefined8 *)(param_1 + 0x340));
  uVar6 = FUN_00ef00a0(uVar12,&local_c8,auStack_d8,&local_e8);
  puVar3 = auStack_d8;
  if ((uVar6 & 1) == 0) {
    puVar3 = &local_c8;
  }
  FUN_00985148(&local_98,puVar3,0,0);
  FUN_00ce20fc(&local_98);
  if (!bVar2) {
    *(undefined1 *)(param_1 + 0x369) = 1;
  }
  FUN_00a11d98(param_1 + 0x28,1,0,0);
LAB_00a1535c:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a153f0(long param_1,long param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined1 auStack_80 [40];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar7 = param_1 + 0x1e8;
  lVar4 = FUN_00ceb7b0(lVar7);
  if ((lVar4 == param_2) && ((param_4 & 1) == 0)) {
    FUN_00a15598();
  }
  else {
    lVar4 = FUN_00ceb7b0(lVar7);
    if ((lVar4 != param_2) || ((lVar4 == 0 || ((param_4 & 1) != 0)))) {
      FUN_009658fc(lVar7,param_2,1);
      lVar7 = *(long *)(param_1 + 0x340);
      if (lVar7 != 0) {
        uVar2 = *(undefined4 *)(param_2 + 0x30);
        *(long *)(lVar7 + 0x2b0) = param_2 + 0x28;
        *(undefined4 *)(lVar7 + 0x2b8) = uVar2;
      }
      if ((param_3 & 1) != 0) {
        FUN_00985090(auStack_80,*(undefined4 *)(param_2 + 0x260),param_4 & 1);
        FUN_00ce20fc(auStack_80);
        lVar7 = *(long *)(param_1 + 0x340);
      }
      if (lVar7 != 0) {
        uVar2 = *(undefined4 *)(param_2 + 0x260);
        uVar6 = 0x10000;
        lVar4 = lVar7;
LAB_00a1550c:
        do {
          do {
            lVar5 = lVar4;
            if ((lVar5 != lVar7) &&
               (lVar4 = FUN_019865b4(*(undefined8 *)(lVar5 + 8),0x8a2209e7), lVar4 != 0)) {
              (**(code **)(lVar4 + 8))(lVar5,uVar2);
            }
            if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0))
            {
              uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
              goto LAB_00a1550c;
            }
            if ((uVar6 & 0xffff) == 0) goto LAB_00a15568;
            lVar4 = *(long *)(lVar5 + 0x20);
          } while (*(long *)(lVar5 + 0x20) != 0);
          lVar5 = *(long *)(lVar5 + 0x10);
          if ((lVar5 == 0) || (uVar1 = uVar6 - 1 & 0xffff, uVar1 == 0)) break;
          uVar6 = uVar1 | uVar6 & 0xffff0000;
          while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
            if ((uVar6 - 1 & 0xffff) == 0) goto LAB_00a15568;
            lVar5 = *(long *)(lVar5 + 0x10);
            uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
            if (lVar5 == 0) goto LAB_00a15568;
          }
        } while( true );
      }
    }
  }
LAB_00a15568:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a15598(void)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00ceace8();
  uVar2 = FUN_00ceae88();
  if ((uVar2 & 1) != 0) {
    local_30 = 0;
    FUN_019889cc(&local_30,1,DAT_02c091a0,0);
    if (local_30 != 0) {
      FUN_00a0ab0c();
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a1560c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00965940(param_1 + 0x1e8);
  uVar2 = DAT_03214ce8;
  lVar3 = *(long *)(param_1 + 0x340);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x2b0) = 0;
    *(undefined4 *)(lVar3 + 0x2b8) = uVar2;
  }
  FUN_00985090(auStack_50,0xffffffff,0);
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00a15694(long param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x28) & 0x1f;
  bVar2 = false;
  if (uVar1 != 0x1f) {
    bVar2 = *(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x30) == 1;
  }
  return bVar2;
}




void FUN_00a156c8(long param_1)

{
  if (*(long *)(param_1 + 0x150) != 0) {
    FUN_00a1e9bc();
    return;
  }
  return;
}




undefined8 FUN_00a156d8(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 < 3) {
    uVar1 = *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x248);
  }
  return uVar1;
}




void FUN_00a156f4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_0312f134))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




undefined8 FUN_00a15720(long param_1)

{
  return *(undefined8 *)(param_1 + 0x340);
}




void FUN_00a15728(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_0312f134))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  if ((param_2 & 1) == 0) {
    if (lVar1 != 0) {
      FUN_01985ca8();
      return;
    }
  }
  else if ((lVar1 == 0) && (lVar1 = FUN_01985d44(param_1,DAT_0312f134), lVar1 != 0)) {
    FUN_009c0684(lVar1,*(undefined8 *)(param_1 + 0x340));
    return;
  }
  return;
}




void FUN_00a157a8(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float __x;
  float fVar7;
  float fVar8;
  undefined8 local_a0;
  float local_98;
  undefined8 local_94;
  float local_8c;
  undefined1 local_88 [8];
  float local_80;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_a0 = CONCAT44(param_2,param_1);
  local_98 = 0.0;
  FUN_0091ef04(&local_78,&local_a0,1);
  local_a0 = CONCAT44(param_2,param_1);
  local_98 = 1.0;
  FUN_0091ef04(local_88,&local_a0,1);
  fVar7 = local_88._0_4_ - (float)local_78;
  fVar8 = local_88._4_4_ - (float)((ulong)local_78 >> 0x20);
  local_80 = local_80 - local_70;
  local_a0 = local_78;
  __x = fVar7 * fVar7 + fVar8 * fVar8 + local_80 * local_80;
  fVar6 = SQRT(__x);
  local_98 = local_70;
  if (NAN(fVar6)) {
    fVar6 = sqrtf(__x);
  }
  local_8c = local_80 / fVar6;
  local_94 = CONCAT44(fVar8 / fVar6,fVar7 / fVar6);
  if (param_3 != 0) {
    uVar5 = 0x10000;
    lVar3 = param_3;
LAB_00a158d8:
    do {
      do {
        lVar4 = lVar3;
        if ((lVar4 != param_3) &&
           (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0xfc5f0dc0), lVar3 != 0)) {
          (**(code **)(lVar3 + 8))(lVar4,&local_a0,param_4);
        }
        if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
          uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
          goto LAB_00a158d8;
        }
        if ((uVar5 & 0xffff) == 0) goto LAB_00a15938;
        lVar3 = *(long *)(lVar4 + 0x20);
      } while (*(long *)(lVar4 + 0x20) != 0);
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((lVar4 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) break;
      uVar5 = uVar1 | uVar5 & 0xffff0000;
      while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
        if ((uVar5 - 1 & 0xffff) == 0) goto LAB_00a15938;
        lVar4 = *(long *)(lVar4 + 0x10);
        uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
        if (lVar4 == 0) goto LAB_00a15938;
      }
    } while( true );
  }
LAB_00a15938:
  FUN_009c61c0(*(undefined8 *)(param_3 + 0x348));
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a15974(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float __x;
  float fVar7;
  float fVar8;
  undefined8 local_a0;
  float local_98;
  undefined8 local_94;
  float local_8c;
  undefined1 local_88 [8];
  float local_80;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_a0 = CONCAT44(param_2,param_1);
  local_98 = 0.0;
  FUN_0091ef04(&local_78,&local_a0,1);
  local_a0 = CONCAT44(param_2,param_1);
  local_98 = 1.0;
  FUN_0091ef04(local_88,&local_a0,1);
  fVar7 = local_88._0_4_ - (float)local_78;
  fVar8 = local_88._4_4_ - (float)((ulong)local_78 >> 0x20);
  local_80 = local_80 - local_70;
  local_a0 = local_78;
  __x = fVar7 * fVar7 + fVar8 * fVar8 + local_80 * local_80;
  fVar6 = SQRT(__x);
  local_98 = local_70;
  if (NAN(fVar6)) {
    fVar6 = sqrtf(__x);
  }
  local_8c = local_80 / fVar6;
  local_94 = CONCAT44(fVar8 / fVar6,fVar7 / fVar6);
  if (param_3 != 0) {
    uVar5 = 0x10000;
    lVar3 = param_3;
LAB_00a15aa4:
    do {
      do {
        lVar4 = lVar3;
        if ((lVar4 != param_3) &&
           (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0xb9330ba0), lVar3 != 0)) {
          (**(code **)(lVar3 + 8))(lVar4,&local_a0,param_4);
        }
        if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
          uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
          goto LAB_00a15aa4;
        }
        if ((uVar5 & 0xffff) == 0) goto LAB_00a15b04;
        lVar3 = *(long *)(lVar4 + 0x20);
      } while (*(long *)(lVar4 + 0x20) != 0);
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((lVar4 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) break;
      uVar5 = uVar1 | uVar5 & 0xffff0000;
      while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
        if ((uVar5 - 1 & 0xffff) == 0) goto LAB_00a15b04;
        lVar4 = *(long *)(lVar4 + 0x10);
        uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
        if (lVar4 == 0) goto LAB_00a15b04;
      }
    } while( true );
  }
LAB_00a15b04:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a15b38(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float __x;
  float fVar7;
  float fVar8;
  undefined8 local_a0;
  float local_98;
  undefined8 local_94;
  float local_8c;
  undefined1 local_88 [8];
  float local_80;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_a0 = CONCAT44(param_2,param_1);
  local_98 = 0.0;
  FUN_0091ef04(&local_78,&local_a0,1);
  local_a0 = CONCAT44(param_2,param_1);
  local_98 = 1.0;
  FUN_0091ef04(local_88,&local_a0,1);
  fVar7 = local_88._0_4_ - (float)local_78;
  fVar8 = local_88._4_4_ - (float)((ulong)local_78 >> 0x20);
  local_80 = local_80 - local_70;
  local_a0 = local_78;
  __x = fVar7 * fVar7 + fVar8 * fVar8 + local_80 * local_80;
  fVar6 = SQRT(__x);
  local_98 = local_70;
  if (NAN(fVar6)) {
    fVar6 = sqrtf(__x);
  }
  local_8c = local_80 / fVar6;
  local_94 = CONCAT44(fVar8 / fVar6,fVar7 / fVar6);
  if (param_3 != 0) {
    uVar5 = 0x10000;
    lVar3 = param_3;
LAB_00a15c68:
    do {
      do {
        lVar4 = lVar3;
        if ((lVar4 != param_3) &&
           (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0xedbb0d48), lVar3 != 0)) {
          (**(code **)(lVar3 + 8))(lVar4,&local_a0,param_4);
        }
        if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
          uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
          goto LAB_00a15c68;
        }
        if ((uVar5 & 0xffff) == 0) goto LAB_00a15cc8;
        lVar3 = *(long *)(lVar4 + 0x20);
      } while (*(long *)(lVar4 + 0x20) != 0);
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((lVar4 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) break;
      uVar5 = uVar1 | uVar5 & 0xffff0000;
      while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
        if ((uVar5 - 1 & 0xffff) == 0) goto LAB_00a15cc8;
        lVar4 = *(long *)(lVar4 + 0x10);
        uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
        if (lVar4 == 0) goto LAB_00a15cc8;
      }
    } while( true );
  }
LAB_00a15cc8:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a15cfc(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 1;
  local_38 = param_4;
  local_30 = param_1;
  uStack_2c = param_2;
  FUN_00a15d58(param_3,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a15d58(long param_1,uint *param_2)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  cVar1 = *(char *)(param_1 + 0x380);
  if ((cVar1 != '\0') && (*param_2 == 1)) {
    FUN_00a16e70(param_1,0);
  }
  if (*(char *)(param_1 + 0x338) != '\0') {
    FUN_00a16f38(param_2[4],param_2[5],param_1);
  }
  *(undefined1 *)(param_1 + 0x338) = 1;
  if (param_2[1] == 4) {
    FUN_00d4d37c(auStack_70,*(undefined8 *)(param_1 + 0x340));
    lVar5 = FUN_00d9e458(param_1 + 800,0,auStack_70);
    FUN_00920d60(lVar5 != 0,0);
    FUN_00a1f4b8(param_2[4],param_2[5],param_1 + 0x218,*(undefined8 *)(param_2 + 2),param_1 + 800,
                 *param_2,param_2[1]);
  }
  else if ((*param_2 & 0xfffffffe) == 2) {
    for (lVar5 = *(long *)(param_1 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_0312f134) {
        uVar7 = FUN_009c0bfc(lVar5,*(undefined8 *)(param_2 + 2));
        if (((uVar7 & 1) != 0) &&
           (uVar7 = FUN_009c06a4(param_2[4],param_2[5],lVar5,*param_2,param_2[1],param_1 + 800,
                                 *(undefined8 *)(param_2 + 2)), (uVar7 & 1) != 0))
        goto LAB_00a15fcc;
        break;
      }
    }
    uVar7 = FUN_00a1f730(param_1 + 0x218,*(undefined8 *)(param_2 + 2));
    uVar4 = 0;
    if ((uVar7 & 1) != 0) {
      uVar4 = FUN_00a1f4b8(param_2[4],param_2[5],param_1 + 0x218,*(undefined8 *)(param_2 + 2),
                           param_1 + 800,*param_2,param_2[1]);
      uVar4 = uVar4 & 1;
    }
    for (lVar5 = *(long *)(param_1 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_03130a98) {
        uVar7 = FUN_00a0b260(lVar5,*(undefined8 *)(param_2 + 2));
        if ((uVar7 & 1) != 0) {
          bVar3 = false;
          goto LAB_00a15fc8;
        }
        break;
      }
    }
    if (uVar4 != 0) goto LAB_00a15fcc;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  for (lVar5 = lVar6; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
    if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_0312f134) goto LAB_00a15f34;
  }
  goto LAB_00a15f64;
  while (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0) {
LAB_00a15f34:
    if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_0312f134) break;
  }
  uVar7 = FUN_009c06a4(param_2[4],param_2[5],lVar6,*param_2,param_2[1],param_1 + 800,
                       *(undefined8 *)(param_2 + 2));
  if ((uVar7 & 1) != 0) goto LAB_00a15fcc;
LAB_00a15f64:
  if (param_2[1] == 4) {
    uVar4 = 4;
  }
  else {
    FUN_00a1bd34();
    uVar4 = param_2[1];
  }
  uVar7 = FUN_00a1f4b8(param_2[4],param_2[5],param_1 + 0x218,*(undefined8 *)(param_2 + 2),
                       param_1 + 800,*param_2,uVar4);
  if (((uVar7 & 1) == 0) && (uVar7 = FUN_00a174a0(param_1,param_2,param_1 + 800), (uVar7 & 1) == 0))
  {
    bVar3 = cVar1 != '\0';
LAB_00a15fc8:
    FUN_00a17140(param_1,param_2,param_1 + 800,bVar3);
  }
LAB_00a15fcc:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a15ff8(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 2;
  local_38 = param_4;
  local_30 = param_1;
  uStack_2c = param_2;
  FUN_00a15d58(param_3,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a150e4(long param_1)

{
  long lVar1;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [48];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(*(undefined8 *)(param_1 + 0x340),auStack_68,0);
  FUN_00985148(auStack_58,auStack_68,0,0);
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

