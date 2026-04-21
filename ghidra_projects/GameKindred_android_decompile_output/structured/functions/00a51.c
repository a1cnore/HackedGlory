// functions/00a51 — 14 functions
#include "libGameKindred.h"




void FUN_00a511a8(long param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_009f1f94(0x1a);
  if (iVar1 == 2) {
    bVar2 = *(byte *)(param_1 + 0x27f5) & 0xe7;
  }
  else if (iVar1 == 1) {
    bVar2 = *(byte *)(param_1 + 0x27f5) & 0xef | 8;
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    bVar2 = *(byte *)(param_1 + 0x27f5) | 0x18;
  }
  *(byte *)(param_1 + 0x27f5) = bVar2;
  return;
}




void FUN_00a51214(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_027cb398;
  if (param_1[0x19] != 0) {
    FUN_019888f4();
    param_1[0x19] = 0;
  }
  uVar2 = FUN_00a1ffc0();
  FUN_00e6ec98(uVar2,param_1);
  uVar2 = FUN_00d7e3d0();
  FUN_00e6ec98(uVar2,param_1);
  uVar3 = FUN_009f1f50();
  if ((uVar3 & 1) != 0) {
    puVar4 = (uint *)FUN_009f1f64();
    lVar6 = (ulong)*puVar4 << 5;
    lVar1 = *(long *)(puVar4 + 2);
    do {
      lVar5 = lVar1;
      if (lVar6 == 0) goto LAB_00a5129c;
      lVar6 = lVar6 + -0x20;
      lVar1 = lVar5 + 0x20;
    } while (*(undefined8 **)(lVar5 + 8) != param_1);
    FUN_0091064c(puVar4,lVar5);
  }
LAB_00a5129c:
  FUN_00a513b4(param_1);
  if ((void *)param_1[0x4fa] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4fa]);
    param_1[0x4fa] = 0;
    param_1[0x4f9] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x4d3);
  FUN_00f0d3a4(param_1 + 0x4ad);
  FUN_00a3af04(param_1 + 0xd9);
  param_1[0x2c] = &PTR_FUN_027cb250;
  param_1[0xbb] = &PTR_FUN_028266f0;
  param_1[0xd2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd5);
  FUN_00f13d08(param_1 + 0xbb);
  param_1[0x9d] = &PTR_FUN_028266f0;
  param_1[0xb4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb7);
  FUN_00f13d08(param_1 + 0x9d);
  param_1[0x7f] = &PTR_FUN_028266f0;
  param_1[0x96] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x99);
  FUN_00f13d08(param_1 + 0x7f);
  param_1[0x61] = &PTR_FUN_028266f0;
  param_1[0x78] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7b);
  FUN_00f13d08(param_1 + 0x61);
  param_1[0x43] = &PTR_FUN_028266f0;
  param_1[0x5a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5d);
  FUN_00f13d08(param_1 + 0x43);
  FUN_00f13d08(param_1 + 0x2c);
  FUN_00f01868(param_1 + 0x1b);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a513b4(long param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x27c8) != 0) {
    uVar3 = 0;
    do {
      uVar1 = FUN_00f02540(*(undefined8 *)(*(long *)(param_1 + 0x27d0) + uVar3 * 8));
      if ((uVar1 & 1) != 0) {
        FUN_00f01a4c(*(undefined8 *)(*(long *)(param_1 + 0x27d0) + uVar3 * 8),1);
      }
      plVar2 = *(long **)(*(long *)(param_1 + 0x27d0) + uVar3 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x27c8));
  }
  if (*(long *)(param_1 + 0x27d0) != 0) {
    *(undefined4 *)(param_1 + 0x27c8) = 0;
  }
  return;
}




void FUN_00a51430(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cb250;
  param_1[0x8f] = &PTR_FUN_028266f0;
  param_1[0xa6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa9);
  FUN_00f13d08(param_1 + 0x8f);
  param_1[0x71] = &PTR_FUN_028266f0;
  param_1[0x88] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8b);
  FUN_00f13d08(param_1 + 0x71);
  param_1[0x53] = &PTR_FUN_028266f0;
  param_1[0x6a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6d);
  FUN_00f13d08(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a51504(void *param_1)

{
  FUN_00a51214();
  operator_delete(param_1);
  return;
}




void FUN_00a51528(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  timespec local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  clock_gettime(1,&local_58);
  lVar5 = local_58.tv_nsec - *(long *)(param_1 + 0x27e0);
  lVar4 = local_58.tv_sec - *(long *)(param_1 + 0x27d8);
  if (lVar5 < 0) {
    lVar4 = lVar4 + -1;
    lVar5 = (local_58.tv_nsec + 1000000000) - *(long *)(param_1 + 0x27e0);
  }
  if (1.0 <= (double)(lVar5 + lVar4 * 1000000000) * 1e-09) {
    *(byte *)(param_1 + 0x27f5) = *(byte *)(param_1 + 0x27f5) | 2;
    FUN_00e70314(param_1 + 0x27d8);
  }
  FUN_00a516ac(param_1);
  if (*(int *)(param_1 + 0x27c8) != 0) {
    uVar6 = 0;
    do {
      uVar2 = FUN_00f023dc(*(undefined8 *)(*(long *)(param_1 + 0x27d0) + (ulong)uVar6 * 8));
      if ((uVar2 & 1) == 0) {
        uVar7 = (ulong)uVar6;
        uVar2 = FUN_00f02540(*(undefined8 *)(*(long *)(param_1 + 0x27d0) + uVar7 * 8));
        if ((uVar2 & 1) != 0) {
          FUN_00f01a4c(*(undefined8 *)(*(long *)(param_1 + 0x27d0) + uVar7 * 8),1);
        }
        lVar4 = *(long *)(param_1 + 0x27d0);
        plVar3 = (long *)(lVar4 + uVar7 * 8);
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 8))();
          lVar4 = *(long *)(param_1 + 0x27d0);
          plVar3 = (long *)(lVar4 + uVar7 * 8);
        }
        FUN_00a51970((uint *)(param_1 + 0x27c8),plVar3,lVar4 + uVar7 * 8 + 8);
        uVar6 = uVar6 - 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x27c8));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a5168c(long param_1)

{
  *(byte *)(param_1 + 0x27f5) = *(byte *)(param_1 + 0x27f5) | 2;
  FUN_00e70314(param_1 + 0x27d8);
  return;
}




void FUN_00a516ac(long param_1)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 200) == 0) goto LAB_00a5190c;
  plVar6 = *(long **)(param_1 + 0xb8);
  if (plVar6 == (long *)0x0) {
    bVar2 = false;
    lVar7 = 0;
LAB_00a51760:
    uVar3 = 1;
  }
  else {
    if (*(int *)(param_1 + 0xc0) == (int)plVar6[1]) {
      lVar7 = (**(code **)(*plVar6 + 0x10))();
      if (lVar7 == 0) {
        bVar2 = false;
      }
      else {
        lVar8 = FUN_00d9ec14(lVar7);
        if (lVar8 != 0) {
          uVar3 = FUN_00d78a44();
          uVar3 = uVar3 ^ 1;
          bVar2 = true;
          goto LAB_00a51764;
        }
        bVar2 = true;
      }
      goto LAB_00a51760;
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
    bVar2 = false;
    lVar7 = 0;
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0xc0) = DAT_03214ce8;
  }
LAB_00a51764:
  FUN_00ceace8();
  uVar9 = FUN_00ceae88();
  if ((((uVar9 & 1) != 0) ||
      (((uVar3 & 1) == 0 && (*(byte *)(param_1 + 0x27f5) & 8) != 0 &&
       ((uVar9 = FUN_009c1050(), (uVar9 & 1) == 0 || (uVar9 = FUN_00a1fdac(), (uVar9 & 1) == 0))))))
     && (FUN_00a520c4(param_1), bVar2)) {
    uVar3 = FUN_00d74024(lVar7,&local_4c);
    uVar9 = FUN_00d74a40(*(undefined8 *)(param_1 + 200),local_4c);
    if ((uVar9 & 1) == 0) {
      thunk_FUN_00d74350(*(undefined8 *)(param_1 + 200),local_4c);
    }
    *(int *)(param_1 + 0xd0) = local_4c;
    if ((local_4c != 0xffff) && (FUN_00a52130(param_1), *(int *)(param_1 + 0xd4) != 0xffff)) {
      uVar10 = FUN_00d9eb0c(lVar7);
      uVar9 = FUN_00da3778((int)*(float *)(*(long *)(lVar7 + 0x40) + 800),uVar10,
                           *(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd4),0,0);
      if ((uVar9 & 1) != 0) {
        uVar10 = *(undefined8 *)(param_1 + 200);
        uVar4 = FUN_00d74ad0(uVar10,*(undefined4 *)(param_1 + 0xd4));
        lVar8 = FUN_00d74ab0(uVar10,uVar4);
        lVar11 = FUN_00d9ec14(lVar7);
        uVar5 = 0;
        if ((uVar3 & 1) == 0 && *(int *)(lVar11 + 0x28) != 0xfe) {
          uVar9 = FUN_00d75000(*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd4));
          uVar5 = 0;
          if (((((uVar9 & 1) != 0) && (uVar5 = 0, *(char *)(lVar8 + 0x34) == '\0')) &&
              (uVar5 = 0, 1 < *(int *)(lVar8 + 0x30))) &&
             (uVar5 = 0, 1500.0 <= *(float *)(*(long *)(lVar7 + 0x40) + 800))) {
            FUN_00ceace8();
            uVar5 = FUN_00ceaf84();
            uVar5 = uVar5 ^ 1;
          }
        }
        if ((uVar3 & 1) != 0) {
          FUN_00a50fa8(param_1,1,1);
          FUN_00a52274(param_1,*(byte *)(param_1 + 0x27f5) >> 6 | 1);
          if ((*(byte *)(param_1 + 0x27f5) >> 4 & 1) != 0) {
            FUN_00a529c4(param_1);
          }
          goto LAB_00a5190c;
        }
        if ((uVar5 & 1) != 0) {
          FUN_00a50fa8(param_1,1,1);
          FUN_00a52274(param_1,2);
          goto LAB_00a5190c;
        }
      }
    }
  }
  FUN_00a50fa8(param_1,0,1);
LAB_00a5190c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a51970(uint *param_1,undefined8 *param_2,undefined8 *param_3)

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




void FUN_00a519dc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a519e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00a519e8(undefined1 param_1 [16],float param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00f13db4();
  fVar5 = (float)FUN_00f13e54(param_3 + 0x160);
  param_2 = param_2 * -0.5;
  if ((*(float *)(param_3 + 0x1a0) != fVar5 * -0.5) || (*(float *)(param_3 + 0x1a4) != param_2)) {
    *(float *)(param_3 + 0x1a0) = fVar5 * -0.5;
    *(float *)(param_3 + 0x1a4) = param_2;
    FUN_0091ada4(param_3 + 0x160);
  }
  if ((*(byte *)(param_3 + 0x27f5) >> 6 & 1) == 0) {
    *(uint *)(param_3 + 0x25ec) = *(uint *)(param_3 + 0x25ec) & 0xfffffffb;
  }
  else {
    *(uint *)(param_3 + 0x25ec) = *(uint *)(param_3 + 0x25ec) | 4;
    plVar1 = (long *)(param_3 + 0x2568);
    FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
    FUN_00f0dac8(plVar1,3);
    FUN_00f0eac0(param_3 + 0x218);
    if ((*(float *)(param_3 + 0x25a8) != 0.0) || (*(float *)(param_3 + 0x25ac) != param_2 * -0.51))
    {
      *(undefined4 *)(param_3 + 0x25a8) = 0;
      *(float *)(param_3 + 0x25ac) = param_2 * -0.51;
      FUN_0091ada4(plVar1);
    }
    local_50 = 0x3f8000003f000000;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_50);
    FUN_00f0dad0(0,plVar1,1);
    fVar5 = (float)FUN_00f0d4e0(plVar1);
    if (1.1920929e-07 <= ABS(fVar5)) {
      fVar6 = (float)FUN_00f0eac0(param_3 + 0x218);
      fVar5 = (float)FUN_00f0d4e0(plVar1);
      fVar6 = fVar6 / fVar5;
      if (1.0 < fVar6) {
        fVar6 = 1.0;
      }
      if ((*(float *)(param_3 + 0x25b0) != fVar6) || (*(float *)(param_3 + 0x25b4) != fVar6)) {
        *(float *)(param_3 + 0x25b0) = fVar6;
        *(float *)(param_3 + 0x25b4) = fVar6;
        FUN_0091ada4(plVar1);
      }
    }
    FUN_00f0dad0(0x43fa0000,plVar1,1);
  }
  lVar2 = param_3 + 0x2698;
  FUN_00f0d92c(lVar2,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  FUN_00f0db2c(0xbd4ccccd,lVar2);
  fVar5 = (float)FUN_00f0eac0(param_3 + 0x218);
  bVar4 = (*(byte *)(param_3 + 0x27f5) & 0x20) == 0;
  fVar6 = 1.0;
  if (bVar4) {
    fVar6 = -1.0;
  }
  fVar6 = (fVar5 * 0.55 + 10.0) * fVar6;
  uVar7 = 0;
  if (bVar4) {
    uVar7 = 0x3f800000;
  }
  if ((*(float *)(param_3 + 0x26d8) != fVar6) || (*(float *)(param_3 + 0x26dc) != 0.0)) {
    *(float *)(param_3 + 0x26d8) = fVar6;
    *(undefined4 *)(param_3 + 0x26dc) = 0;
    FUN_0091ada4(lVar2);
  }
  local_50 = CONCAT44(0x3f000000,uVar7);
  (**(code **)(*(long *)(param_3 + 0x2698) + 0x28))(lVar2,&local_50);
  if ((*(byte *)(param_3 + 0x788) & 1) != 0) {
    FUN_00a51cc0(param_3,*(undefined1 *)(param_3 + 0x27f4));
  }
  if (*(long *)(param_3 + 0x2560) != 0) {
    FUN_00f07940(0,0x40000000,*(long *)(param_3 + 0x2560),6,param_3 + 0x218,6);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a51cc0(undefined1 param_1 [16],float param_2,long param_3,byte param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  *(byte *)(param_3 + 0x27f4) = param_4 & 1;
  uVar4 = *(undefined8 *)(param_3 + 200);
  uVar2 = FUN_00d74ad0(uVar4,*(undefined4 *)(param_3 + 0xd4));
  lVar3 = FUN_00d74ab0(uVar4,uVar2);
  if (lVar3 != 0) {
    lVar1 = param_3 + 0x6c8;
    FUN_00a485f0(lVar1,lVar3,*(byte *)(param_3 + 0x27f4));
    if ((*(float *)(param_3 + 0x708) != 0.0) || (*(float *)(param_3 + 0x70c) != 0.0)) {
      *(undefined8 *)(param_3 + 0x708) = 0;
      FUN_0091ada4(lVar1);
    }
    FUN_00b89d24(0x3e800000,lVar1,1,4,1);
    fVar6 = *(float *)(param_3 + 0x1a0);
    fVar7 = *(float *)(param_3 + 0x1a4);
    FUN_00f13e54(param_3 + 0x160);
    fVar5 = param_2;
    FUN_00f13e54(lVar1);
    fVar7 = fVar7 + (param_2 - fVar5 * 0.5);
    fVar5 = (float)FUN_00f13e54(lVar1);
    fVar6 = fVar6 - (fVar5 * 0.5 + 20.0);
    if ((*(float *)(param_3 + 0x708) != fVar6) || (*(float *)(param_3 + 0x70c) != fVar7)) {
      *(float *)(param_3 + 0x708) = fVar6;
      *(float *)(param_3 + 0x70c) = fVar7;
      FUN_0091ada4(lVar1);
      return;
    }
  }
  return;
}




void FUN_00a51df8(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(auStack_5c,auStack_60);
  lVar1 = param_3 + 0x2698;
  FUN_00f0dad0(0,lVar1,1);
  FUN_00f0dac8(lVar1,(*(byte *)(param_3 + 0x27f5) >> 5 ^ 0xff) & 1);
  fVar3 = (float)FUN_00f0d4e0(lVar1);
  fVar5 = *(float *)(param_3 + 0x27f0);
  if (fVar5 < fVar3) {
    param_2 = 400.0;
    FUN_00cb6728(fVar5,lVar1);
  }
  fVar4 = (float)FUN_00f0eac0(param_3 + 0x218);
  FUN_00f01c20(lVar1);
  if (fVar4 < param_2) {
    FUN_00f0eac0(param_3 + 0x218);
    fVar4 = param_2;
    FUN_00f01c20(lVar1);
    if (param_2 + 2.0 < fVar4) {
      fVar3 = 1.0;
      do {
        fVar3 = fVar3 + -0.05;
        if ((*(float *)(param_3 + 0x26e0) != fVar3) || (*(float *)(param_3 + 0x26e4) != fVar3)) {
          *(float *)(param_3 + 0x26e0) = fVar3;
          *(float *)(param_3 + 0x26e4) = fVar3;
          FUN_0091ada4(lVar1);
        }
        FUN_00f0dad0(*(float *)(param_3 + 0x27f0) / fVar3,lVar1,1);
        FUN_00f0db34(lVar1);
        FUN_00f0d548(lVar1);
      } while (param_2 + 2.0 < fVar4 * *(float *)(param_3 + 0x26e4));
      goto LAB_00a51f5c;
    }
  }
  if (fVar3 <= fVar5) {
    FUN_00f0dad0(*(undefined4 *)(param_3 + 0x27f0),lVar1,1);
  }
LAB_00a51f5c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a51f90(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  FUN_00ceace8();
  uVar1 = FUN_00ceaf54();
  if ((uVar1 & 1) != 0) {
    param_1[0x17] = *param_2;
    *(int *)(param_1 + 0x18) = (int)param_2[1];
    lVar2 = FUN_01988738(DAT_031328d8,0);
    param_1[0x19] = lVar2;
    FUN_00d74184(lVar2,param_1 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x00a51ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe8))(param_1);
    return;
  }
  return;
}

