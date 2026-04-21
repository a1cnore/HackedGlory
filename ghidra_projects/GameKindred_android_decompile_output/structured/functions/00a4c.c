// functions/00a4c — 26 functions
#include "libGameKindred.h"




void thunk_FUN_00a4c268(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  
  lVar1 = FUN_00a1ae38();
  if (lVar1 != 0) {
    FUN_00a1ae38();
    fVar6 = (float)FUN_00a1b610();
    if (fVar6 <= 0.0) {
      lVar1 = FUN_00a1ffc0();
      plVar2 = (long *)(lVar1 + 0x10);
      plVar3 = (long *)*plVar2;
      plVar4 = plVar2;
      if (plVar3 != (long *)0x0) {
        do {
          if (*(uint *)(plVar3 + 4) >= 0x6b7b66e5) {
            plVar4 = plVar3;
          }
          plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0x6b7b66e5];
        } while (plVar3 != (long *)0x0);
        if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0x6b7b66e6)) && ((int)plVar4[5] != 0)) {
          lVar1 = 0;
          uVar5 = 0;
          do {
            (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
            uVar5 = uVar5 + 1;
            lVar1 = lVar1 + 0x10;
          } while (uVar5 < *(uint *)(plVar4 + 5));
        }
      }
    }
  }
  return;
}




void FUN_00a4c0d4(void *param_1)

{
  FUN_00a4bbbc();
  operator_delete(param_1);
  return;
}




void FUN_00a4c0f8(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x2bb8) != 0) {
    lVar1 = FUN_00a1ae38();
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_00a1ae38();
      uVar3 = FUN_00a1b610();
    }
    if (*(int *)(param_1 + 0x2bb8) != 0) {
      uVar2 = 0;
      do {
        FUN_00abb6ac(uVar3,*(undefined8 *)(*(long *)(param_1 + 0x2bc0) + uVar2 * 8));
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x2bb8));
    }
  }
  return;
}




void FUN_00a4c16c(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x2bc0);
  (**(code **)(*plVar1 + 0x48))(plVar1[10],0x3f8000003f000000,plVar1);
  FUN_00965ecc(plVar1);
  return;
}




void thunk_FUN_00a4c0f8(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x2bb8) != 0) {
    lVar1 = FUN_00a1ae38();
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_00a1ae38();
      uVar3 = FUN_00a1b610();
    }
    if (*(int *)(param_1 + 0x2bb8) != 0) {
      uVar2 = 0;
      do {
        FUN_00abb6ac(uVar3,*(undefined8 *)(*(long *)(param_1 + 0x2bc0) + uVar2 * 8));
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x2bb8));
    }
  }
  return;
}




void FUN_00a4c1d8(long param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *local_48;
  undefined4 local_40;
  uint uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x2bd8);
  uVar3 = FUN_00a1f33c();
  if (bVar1 == param_3) {
    local_48 = &DAT_027c8658;
  }
  else {
    local_48 = &DAT_027c8640;
    uStack_3c = param_3;
  }
  local_40 = 0x1d;
  local_48 = local_48 + 0x10;
  FUN_00a1a334(uVar3,&local_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a4c268(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  
  lVar1 = FUN_00a1ae38();
  if (lVar1 != 0) {
    FUN_00a1ae38();
    fVar6 = (float)FUN_00a1b610();
    if (fVar6 <= 0.0) {
      lVar1 = FUN_00a1ffc0();
      plVar2 = (long *)(lVar1 + 0x10);
      plVar3 = (long *)*plVar2;
      plVar4 = plVar2;
      if (plVar3 != (long *)0x0) {
        do {
          if (*(uint *)(plVar3 + 4) >= 0x6b7b66e5) {
            plVar4 = plVar3;
          }
          plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0x6b7b66e5];
        } while (plVar3 != (long *)0x0);
        if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0x6b7b66e6)) && ((int)plVar4[5] != 0)) {
          lVar1 = 0;
          uVar5 = 0;
          do {
            (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
            uVar5 = uVar5 + 1;
            lVar1 = lVar1 + 0x10;
          } while (uVar5 < *(uint *)(plVar4 + 5));
        }
      }
    }
  }
  return;
}




void FUN_00a4c318(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x2bc8) = *param_2;
  *(undefined4 *)(param_1 + 0x2bd0) = *(undefined4 *)(param_2 + 1);
  return;
}




void FUN_00a4c32c(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  FUN_00b89d24(param_1 + 0xb8,param_2 & 1,param_3,param_4 & 1);
  return;
}




void FUN_00a4c33c(long param_1,undefined4 param_2)

{
  long lVar1;
  
  FUN_00a4c420();
  *(char *)(param_1 + 0x2bd8) = (char)param_2;
  switch(param_2) {
  case 2:
    param_1 = param_1 + 0x290;
    goto LAB_00a4c3a4;
  case 3:
    lVar1 = 0x1300;
    break;
  case 4:
    param_1 = param_1 + 0xac8;
    goto LAB_00a4c3a4;
  case 5:
    lVar1 = 0x1b38;
    break;
  case 6:
    lVar1 = 0x2370;
    break;
  default:
    goto switchD_00a4c378_default;
  }
  param_1 = param_1 + lVar1;
LAB_00a4c3a4:
  FUN_00abb1c8(0x3f19999a,param_1,&DAT_01bee7fa);
  FUN_00f0e6bc(0x3fc00000,param_1 + 0x4d8);
  if ((~*(uint *)(param_1 + 0x55c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x55c) = *(uint *)(param_1 + 0x55c) | 0x7f80;
    FUN_0091ada4(param_1 + 0x4d8);
  }
  if ((~*(uint *)(param_1 + 0x37c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x37c) = *(uint *)(param_1 + 0x37c) | 0x7f80;
    FUN_0091ada4(param_1 + 0x2f8);
    return;
  }
switchD_00a4c378_default:
  return;
}




void FUN_00a4c420(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x2bb8) != 0) {
    uVar3 = 0;
    do {
      FUN_00abb1c8(0,*(undefined8 *)(*(long *)(param_1 + 0x2bc0) + uVar3 * 8),&DAT_01bee7fa);
      FUN_00f0e6bc(0x3f000000,*(long *)(*(long *)(param_1 + 0x2bc0) + uVar3 * 8) + 0x4d8);
      lVar2 = *(long *)(*(long *)(param_1 + 0x2bc0) + uVar3 * 8);
      uVar1 = *(uint *)(lVar2 + 0x55c);
      if ((uVar1 & 0x7f80) != 0x5f80) {
        *(uint *)(lVar2 + 0x55c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x5f80;
        FUN_0091ada4(lVar2 + 0x4d8);
        lVar2 = *(long *)(*(long *)(param_1 + 0x2bc0) + uVar3 * 8);
      }
      uVar1 = *(uint *)(lVar2 + 0x37c);
      if ((uVar1 & 0x7f80) != 0x1980) {
        *(uint *)(lVar2 + 0x37c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x1980;
        FUN_0091ada4(lVar2 + 0x2f8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x2bb8));
  }
  *(undefined1 *)(param_1 + 0x2bd8) = 0xff;
  return;
}




void FUN_00a4c518(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ca918;
  FUN_00f0d3a4(param_1 + 0xdf);
  param_1[0xbf] = &PTR_FUN_028266f0;
  param_1[0xd6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd9);
  FUN_00f13d08(param_1 + 0xbf);
  param_1[0x9b] = &PTR_FUN_028266f0;
  param_1[0xb2] = &PTR_FUN_02826850;
  *param_1 = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0xb5);
  FUN_00f13d08(param_1 + 0x9b);
  param_1[0x7d] = &PTR_FUN_028266f0;
  param_1[0x94] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x97);
  FUN_00f13d08(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_028266f0;
  param_1[0x76] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x79);
  FUN_00f13d08(param_1 + 0x5f);
  FUN_00f01868(param_1 + 0x4e);
  FUN_009c825c(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a4c5f8(void)

{
  return;
}




void FUN_00a4c5fc(uint *param_1,uint param_2)

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




void * FUN_00a4c67c(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xf0);
  FUN_00f0e4a8();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_00a4c6e4(long *param_1,undefined1 param_2)

{
  long *plVar1;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027caa98;
  FUN_00b89cd8(plVar1);
  FUN_00f13ca4(param_1 + 0x30);
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  *(undefined1 *)(param_1 + 0x49) = param_2;
  *(undefined1 *)((long)param_1 + 0x249) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x30,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 8;
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 8;
  return;
}




void FUN_00a4c78c(long param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x249) = param_2;
  uVar1 = FUN_0093d96c();
  if ((uVar1 & 1) != 0) {
    FUN_00a4c7e4(param_1);
    uVar2 = FUN_00a1ffc0();
    FUN_00e6ea58(uVar2,param_1,0x2d56d876,FUN_00a4c884,0);
    return;
  }
  return;
}




void FUN_00a4c7e4(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 auStack_d0 [24];
  long local_b8 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_0093d96c();
  if ((uVar3 & 1) != 0) {
    FUN_00d4d54c(auStack_d0);
    uVar2 = FUN_00d9e840(auStack_d0,local_b8,0x10,0);
    if (uVar2 != 0) {
      uVar3 = (ulong)uVar2;
      plVar4 = local_b8;
      do {
        if (*plVar4 != 0) {
          FUN_00a4d0b0(param_1);
        }
        uVar3 = uVar3 - 1;
        plVar4 = plVar4 + 1;
      } while (uVar3 != 0);
    }
    FUN_00a4ced8(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a4c940(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_027caa98;
  uVar1 = FUN_0093d96c();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00a1ffc0();
    FUN_00e6ec98(uVar2,param_1);
  }
  FUN_00a4c9b4(param_1);
  if ((void *)param_1[0x48] != (void *)0x0) {
    operator_delete__((void *)param_1[0x48]);
    param_1[0x48] = 0;
    param_1[0x47] = 0;
  }
  FUN_00f13d08(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a4c9b4(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x238);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x240) + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x240) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x238);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x240) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0x240) != 0) {
    *(undefined4 *)(param_1 + 0x238) = 0;
  }
  return;
}




void FUN_00a4ca34(void *param_1)

{
  FUN_00a4c940();
  operator_delete(param_1);
  return;
}




void FUN_00a4ca58(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  uVar3 = FUN_0093d96c();
  if ((uVar3 & 1) != 0) {
    FUN_00a4cbac(param_1,param_2);
    return;
  }
  if (*(int *)(param_2 + 0x238) == 0) {
    uVar3 = 0;
    uVar6 = 0;
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
    do {
      uVar4 = FUN_00a4cc08(param_1,*(undefined8 *)(*(long *)(param_2 + 0x240) + uVar7 * 8));
      uVar3 = (ulong)*(uint *)(param_2 + 0x238);
      uVar2 = 0;
      if ((uVar4 & 1) == 0) {
        uVar2 = 1 << (ulong)((uint)uVar7 & 0x1f);
      }
      uVar7 = uVar7 + 1;
      uVar6 = uVar2 | uVar6;
    } while (uVar7 < uVar3);
    if ((int)*(uint *)(param_2 + 0x238) < 0) {
      return;
    }
    uVar6 = uVar6 & 0xffff;
  }
  bVar5 = false;
  lVar9 = uVar3 + 1;
  lVar10 = uVar3 << 3;
  do {
    if ((1 << (ulong)((int)lVar9 - 1U & 0x1f) & uVar6) != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x240) + lVar10);
      plVar8 = (long *)*puVar1;
      FUN_00a4e1a4(param_2 + 0x238,puVar1,puVar1 + 1);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      bVar5 = true;
    }
    lVar9 = lVar9 + -1;
    lVar10 = lVar10 + -8;
  } while (0 < lVar9);
  if (!bVar5) {
    return;
  }
  FUN_00a4ced8(param_2);
  return;
}




void FUN_00a4cbac(undefined8 param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0093d96c();
  if (((uVar1 & 1) != 0) && (*(int *)(param_2 + 0x238) != 0)) {
    uVar1 = 0;
    do {
      FUN_00a4cc08(param_1,*(undefined8 *)(*(long *)(param_2 + 0x240) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_2 + 0x238));
  }
  return;
}




uint FUN_00a4cc08(float param_1,long param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  if (*(long *)(param_2 + 0xd98) == 0) {
    uVar6 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)(param_2 + 0xd98) + 0x40);
    fVar12 = (*(float *)(lVar9 + 0x1a0) + 1.0) *
             (*(float *)(lVar9 + 0x38) +
             *(float *)(lVar9 + 0xec) * (*(float *)(lVar9 + 0x254) + 1.0));
    if (DAT_03132810 <= fVar12) {
      fVar12 = DAT_03132810;
    }
    fVar11 = DAT_03132750;
    if (DAT_03132750 <= fVar12) {
      fVar11 = fVar12;
    }
    FUN_00ca2d44(*(float *)(lVar9 + 0x308) / fVar11,param_2 + 0x770);
    lVar9 = *(long *)(param_2 + 0xd98);
    uVar2 = FUN_00cedf10();
    uVar3 = FUN_00d7d0a0(*(undefined8 *)(lVar9 + 0x80),uVar2);
    uVar6 = *(undefined8 *)(param_2 + 0xd98);
    *(uint *)(param_2 + 0x7f4) =
         *(uint *)(param_2 + 0x7f4) & 0xfffffff8 | *(uint *)(param_2 + 0x7f4) & 3 | (uVar3 & 1) << 2
    ;
    *(uint *)(param_2 + 0x704) =
         *(uint *)(param_2 + 0x704) & 0xfffffff8 | *(uint *)(param_2 + 0x704) & 3 | (uVar3 & 1) << 2
    ;
  }
  uVar7 = FUN_00d9e99c(uVar6);
  if (((uVar7 & 1) != 0) || (uVar7 = FUN_00ceab64(), (uVar7 & 1) != 0)) {
    for (lVar9 = *(long *)(*(long *)(param_2 + 0xd98) + 0x18); lVar9 != 0;
        lVar9 = *(long *)(lVar9 + 0x20)) {
      if (*(int *)(*(long *)(lVar9 + 8) + 0xa4) == DAT_02e3ef78) {
        iVar4 = FUN_00d5359c(lVar9);
        if (iVar4 != 0) {
          uVar3 = 0;
          goto LAB_00a4cd18;
        }
        break;
      }
    }
  }
  goto LAB_00a4ce24;
  while( true ) {
    uVar3 = uVar3 + 1;
    uVar5 = FUN_00d5359c(lVar9);
    if (uVar5 <= uVar3) break;
LAB_00a4cd18:
    uVar7 = FUN_00d54540(lVar9,uVar3);
    if ((uVar7 & 1) != 0) {
      iVar4 = FUN_00d53a44(lVar9,uVar3);
      if (iVar4 == 0) {
        bVar1 = true;
      }
      else {
        iVar4 = FUN_00d53a30(lVar9,uVar3);
        bVar1 = iVar4 != 0;
      }
      iVar4 = FUN_00d53990(lVar9,uVar3);
      uVar5 = *(uint *)(param_2 + 0xc34);
      uVar3 = 0;
      if (iVar4 != 0) {
        uVar3 = 0xff;
      }
      uVar10 = uVar5 >> 7 & 0xff;
      if (uVar10 != uVar3) {
        *(uint *)(param_2 + 0xc34) = uVar5 & 0xffff8000 | uVar5 & 0x7f | uVar3 << 7;
        FUN_0091ada4(param_2 + 0xbb0);
        uVar10 = *(uint *)(param_2 + 0xc34) >> 7 & 0xff;
      }
      uVar3 = *(uint *)(param_2 + 0xd24);
      uVar5 = (uint)(((float)uVar10 / 255.0) * 255.0);
      if ((uVar3 >> 7 & 0xff) != uVar5) {
        *(uint *)(param_2 + 0xd24) = uVar3 & 0xffff8000 | uVar3 & 0x7f | (uVar5 & 0xff) << 7;
        FUN_0091ada4(param_2 + 0xca0);
      }
      if (bVar1 && iVar4 - 1U < 2) {
        puVar8 = &DAT_01bee7fa;
      }
      else {
        puVar8 = &DAT_01bee7f6;
      }
      FUN_00f0e670(param_2 + 0xbb0,puVar8,2);
      break;
    }
  }
LAB_00a4ce24:
  uVar7 = FUN_0093d96c();
  uVar3 = FUN_00a4dad0(param_2);
  if ((uVar7 & 1) == 0) goto LAB_00a4cec0;
  if (((uVar3 & 1) != 0) || (0.0 < *(float *)(param_2 + 0xd90))) {
    if ((~*(uint *)(param_2 + 0x214) & 0x7f80) != 0) {
      uVar5 = *(uint *)(param_2 + 0x214) | 0x7f80;
      goto LAB_00a4ce84;
    }
  }
  else {
    uVar5 = *(uint *)(param_2 + 0x214);
    if ((uVar5 & 0x7f80) != 0xc80) {
      uVar5 = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0xc80;
LAB_00a4ce84:
      *(uint *)(param_2 + 0x214) = uVar5;
      FUN_0091ada4(param_2 + 400);
    }
  }
  if (*(float *)(param_2 + 0xd90) <= 0.0) {
    FUN_00a4db94(param_2,0);
  }
  else {
    FUN_00a4db94(param_2,1);
    *(float *)(param_2 + 0xd90) = *(float *)(param_2 + 0xd90) - param_1;
  }
LAB_00a4cec0:
  return uVar3 & 1;
}




void FUN_00a4ced8(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar2 = FUN_0093d96c();
  fVar7 = 8.0;
  if ((uVar2 & 1) == 0) {
    fVar7 = 3.0;
  }
  fVar4 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar6 = (float)(uint)*(byte *)((long)param_1 + 0x249);
  fVar4 = (fVar4 - fVar7 * (float)(int)(*(byte *)((long)param_1 + 0x249) - 1)) / fVar6;
  (**(code **)(*param_1 + 0x48))(param_1);
  if (fVar6 <= fVar4) {
    fVar4 = fVar6;
  }
  if (*(char *)((long)param_1 + 0x249) != '\0') {
    fVar6 = *(float *)((long)param_1 + 0x54);
    bVar1 = false;
    if ((fVar6 == 0.0) && (bVar1 = false, !NAN(*(float *)(param_1 + 10)))) {
      bVar1 = *(float *)(param_1 + 10) == 1.0;
    }
    uVar2 = 0;
    fVar8 = fVar4 * 0.5;
    fVar9 = -1.0;
    if (!bVar1) {
      fVar9 = 1.0;
    }
    do {
      if (*(uint *)(param_1 + 0x47) <= uVar2) {
        return;
      }
      lVar3 = *(long *)(param_1[0x48] + uVar2 * 8);
      if (lVar3 != 0) {
        fVar5 = (float)FUN_00f0e700(lVar3 + 0xa0);
        if ((*(float *)(lVar3 + 0x48) != fVar4 / fVar5) ||
           (*(float *)(lVar3 + 0x4c) != fVar4 / fVar6)) {
          *(float *)(lVar3 + 0x48) = fVar4 / fVar5;
          *(float *)(lVar3 + 0x4c) = fVar4 / fVar6;
          FUN_0091ada4(lVar3);
        }
        fVar5 = fVar8;
        if (uVar2 != 0) {
          fVar5 = *(float *)(*(long *)(param_1[0x48] + (ulong)((int)uVar2 - 1) * 8) + 0x40);
        }
        fVar6 = 0.0;
        if (uVar2 != 0) {
          fVar6 = 1.0;
        }
        fVar6 = fVar4 * fVar6;
        fVar5 = fVar9 * (fVar6 + fVar7 + ABS(fVar5));
        if ((*(float *)(lVar3 + 0x40) != fVar5) ||
           (fVar6 = *(float *)(lVar3 + 0x44), fVar6 != fVar8)) {
          *(float *)(lVar3 + 0x40) = fVar5;
          *(float *)(lVar3 + 0x44) = fVar8;
          FUN_0091ada4(lVar3);
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)((long)param_1 + 0x249));
  }
  return;
}




void thunk_FUN_00a4ced8(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar2 = FUN_0093d96c();
  fVar7 = 8.0;
  if ((uVar2 & 1) == 0) {
    fVar7 = 3.0;
  }
  fVar4 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar6 = (float)(uint)*(byte *)((long)param_1 + 0x249);
  fVar4 = (fVar4 - fVar7 * (float)(int)(*(byte *)((long)param_1 + 0x249) - 1)) / fVar6;
  (**(code **)(*param_1 + 0x48))(param_1);
  if (fVar6 <= fVar4) {
    fVar4 = fVar6;
  }
  if (*(char *)((long)param_1 + 0x249) != '\0') {
    fVar6 = *(float *)((long)param_1 + 0x54);
    bVar1 = false;
    if ((fVar6 == 0.0) && (bVar1 = false, !NAN(*(float *)(param_1 + 10)))) {
      bVar1 = *(float *)(param_1 + 10) == 1.0;
    }
    uVar2 = 0;
    fVar8 = fVar4 * 0.5;
    fVar9 = -1.0;
    if (!bVar1) {
      fVar9 = 1.0;
    }
    do {
      if (*(uint *)(param_1 + 0x47) <= uVar2) {
        return;
      }
      lVar3 = *(long *)(param_1[0x48] + uVar2 * 8);
      if (lVar3 != 0) {
        fVar5 = (float)FUN_00f0e700(lVar3 + 0xa0);
        if ((*(float *)(lVar3 + 0x48) != fVar4 / fVar5) ||
           (*(float *)(lVar3 + 0x4c) != fVar4 / fVar6)) {
          *(float *)(lVar3 + 0x48) = fVar4 / fVar5;
          *(float *)(lVar3 + 0x4c) = fVar4 / fVar6;
          FUN_0091ada4(lVar3);
        }
        fVar5 = fVar8;
        if (uVar2 != 0) {
          fVar5 = *(float *)(*(long *)(param_1[0x48] + (ulong)((int)uVar2 - 1) * 8) + 0x40);
        }
        fVar6 = 0.0;
        if (uVar2 != 0) {
          fVar6 = 1.0;
        }
        fVar6 = fVar4 * fVar6;
        fVar5 = fVar9 * (fVar6 + fVar7 + ABS(fVar5));
        if ((*(float *)(lVar3 + 0x40) != fVar5) ||
           (fVar6 = *(float *)(lVar3 + 0x44), fVar6 != fVar8)) {
          *(float *)(lVar3 + 0x40) = fVar5;
          *(float *)(lVar3 + 0x44) = fVar8;
          FUN_0091ada4(lVar3);
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)((long)param_1 + 0x249));
  }
  return;
}

