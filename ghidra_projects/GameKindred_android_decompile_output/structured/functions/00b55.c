// functions/00b55 — 46 functions
#include "libGameKindred.h"




void thunk_FUN_00b55380(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00969248();
  if (0 < *(int *)(lVar2 + 0x38)) {
    FUN_00f048e0(auStack_48,DAT_03133778,0);
    FUN_00f04760(param_1,auStack_48,1);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b5507c(ulong *param_1,byte *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  void *__dest;
  ulong uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  bVar2 = *param_3;
  pbVar4 = *(byte **)(param_2 + 0x10);
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  bVar3 = (*param_2 & 1) != 0;
  __n = (ulong)(*param_2 >> 1);
  if (bVar3) {
    __n = *(size_t *)(param_2 + 8);
  }
  uVar5 = uVar1 + __n;
  if (!bVar3) {
    pbVar4 = param_2 + 1;
  }
  if (uVar5 < 0xfffffffffffffff0) {
    if (uVar5 < 0x17) {
      __dest = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)__n << 1);
    }
    else {
      uVar5 = uVar5 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar5);
      param_1[1] = __n;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar5 | 1;
    }
    if (__n != 0) {
      memcpy(__dest,pbVar4,__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
    pbVar4 = *(byte **)(param_3 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar4 = param_3 + 1;
    }
    FUN_0090de84(param_1,pbVar4,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




void FUN_00b55160(void)

{
  long *in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00b55170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_x4 + 0x170))(in_x4);
  return;
}




void FUN_00b55174(void)

{
  long *in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00b55184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_x4 + 0x170))(in_x4);
  return;
}




void FUN_00b55188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b54bd0(param_1,param_3,param_4,param_2);
  return;
}




void FUN_00b5519c(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00b55530(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = *param_2;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_00b55224(uint *param_1,undefined8 *param_2)

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
    FUN_00b555b4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00b552ac(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x9c88);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 0x9c90) == 0) {
    return;
  }
  FUN_00b51b74(param_1,(byte *)(param_1 + 0x9c88),param_1 + 0x9ca0);
  return;
}




void FUN_00b552e0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00aa0104();
  FUN_00aa0770(uVar2,0x11);
  FUN_00f048e0(auStack_48,DAT_03133760,0);
  FUN_00f04760(param_1,auStack_48,1);
  FUN_00f048e0(auStack_68,DAT_03133778,0);
  FUN_00f04760(param_1,auStack_68,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b55380(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00969248();
  if (0 < *(int *)(lVar2 + 0x38)) {
    FUN_00f048e0(auStack_48,DAT_03133778,0);
    FUN_00f04760(param_1,auStack_48,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b553fc(long param_1)

{
  *(uint *)(param_1 + 0x968c) = *(uint *)(param_1 + 0x968c) | 4;
  FUN_00b16058(param_1 + 0x96f8);
  return;
}




void FUN_00b5541c(undefined8 param_1,undefined8 param_2)

{
  FUN_00b1a8e8(param_2,"MARKET.*");
  FUN_00b1a8e8(param_2,"REWARDS.BASIC_MYSTERY*");
  FUN_00b1a8e8(param_2,"REWARDS.EPIC_MYSTERY*");
  return;
}




void thunk_FUN_00b5541c(undefined8 param_1,undefined8 param_2)

{
  FUN_00b1a8e8(param_2,"MARKET.*");
  FUN_00b1a8e8(param_2,"REWARDS.BASIC_MYSTERY*");
  FUN_00b1a8e8(param_2,"REWARDS.EPIC_MYSTERY*");
  return;
}




void FUN_00b55468(void)

{
  return;
}




undefined8 FUN_00b5546c(void)

{
  return 0;
}




void FUN_00b55474(void)

{
  return;
}




char * FUN_00b55478(void)

{
  return "main_nav_market";
}




void FUN_00b55484(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b55490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1,1);
  return;
}




void FUN_00b55494(undefined8 param_1)

{
  FUN_00a9f780(param_1,1);
  return;
}




void FUN_00b5549c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b554a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1,0);
  return;
}




void FUN_00b554ac(undefined8 param_1)

{
  FUN_00a9f780(param_1,0);
  return;
}




long FUN_00b554b4(long param_1)

{
  return param_1 + -0x2c90;
}




void FUN_00b554c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b554d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -0x2c90) + 0x148))((long *)(param_1 + -0x2c90),1);
  return;
}




void FUN_00b554d8(long param_1)

{
  FUN_00a9f780(param_1 + -0x2c90,1);
  return;
}




void FUN_00b554e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b554fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -0x2c90) + 0x148))((long *)(param_1 + -0x2c90),0);
  return;
}




void FUN_00b55500(long param_1)

{
  FUN_00a9f780(param_1 + -0x2c90,0);
  return;
}




char * FUN_00b55510(void)

{
  return "main_nav_market";
}




undefined4 FUN_00b5551c(void)

{
  return 0xc2640000;
}




void FUN_00b55530(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      do {
        uVar5 = *puVar2;
        lVar3 = lVar3 + -0x10;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 2;
        puVar2 = puVar2 + 2;
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




void FUN_00b555b4(uint *param_1,uint param_2)

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




void FUN_00b55634(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_00b8e630();
  FUN_00948cd8(param_1 + 0x6d);
  plVar1 = param_1 + 0x71;
  param_1[0x70] = param_2;
  *param_1 = (long)&PTR_FUN_027e3160;
  param_1[0x6d] = (long)&PTR_FUN_027e32f0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x8f;
  FUN_00f11234(plVar2);
  plVar3 = param_1 + 0xc3;
  FUN_00ecfd6c(plVar3,0);
  FUN_00f13ca4(param_1 + 0x16a);
  FUN_00f11234(param_1 + 0x181);
  *(undefined1 *)(param_1 + 0x1bb) = 0;
  param_1[0x1b9] = 0;
  param_1[0x1b8] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b5] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar1,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00ed026c(plVar3,param_1 + 0x181,1);
  FUN_00ed026c(plVar3,param_1 + 0x16a,1);
  FUN_00f112f0(plVar2,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  FUN_00ed0680(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,
               PTR_s_scrollbar_button_fill_top_02be3518,PTR_s_scrollbar_button_fill_middle_02be3520,
               PTR_s_scrollbar_button_fill_bottom_02be3528);
  FUN_00ed04d8(plVar3,0,1);
  *(uint *)((long)param_1 + 0xc8c) = *(uint *)((long)param_1 + 0xc8c) | 0x10;
                    /* WARNING: Could not recover jumptable at 0x00b557b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_00b557bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e3160;
  param_1[0x6d] = &PTR_FUN_027e32f0;
  FUN_00b55880();
  if ((*(byte *)(param_1 + 0x1b7) & 1) != 0) {
    operator_delete((void *)param_1[0x1b9]);
  }
  if ((void *)param_1[0x1b6] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b6]);
    param_1[0x1b6] = 0;
    param_1[0x1b5] = 0;
  }
  FUN_00f13d08(param_1 + 0x181);
  FUN_00f13d08(param_1 + 0x16a);
  FUN_00ed00e0(param_1 + 0xc3);
  FUN_00f13d08(param_1 + 0x8f);
  param_1[0x71] = &PTR_FUN_028266f0;
  param_1[0x88] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8b);
  FUN_00f13d08(param_1 + 0x71);
  FUN_00948d58(param_1 + 0x6d);
  FUN_00b8e790(param_1);
  return;
}




void FUN_00b55880(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = 0;
  if (*(long *)(param_1 + 0x380) != 0) {
    lVar4 = *(long *)(param_1 + 0x380) + 0x2c98;
  }
  FUN_0096bd60(lVar4);
  uVar2 = *(uint *)(param_1 + 0xda8);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0xdb0) + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0xdb0) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0xda8);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0xdb0) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0xdb0) != 0) {
    *(undefined4 *)(param_1 + 0xda8) = 0;
  }
  return;
}




void FUN_00b55918(long param_1)

{
  FUN_00b557bc(param_1 + -0x368);
  return;
}




void FUN_00b55920(void *param_1)

{
  FUN_00b557bc();
  operator_delete(param_1);
  return;
}




void FUN_00b55944(long param_1)

{
  FUN_00b557bc((void *)(param_1 + -0x368));
  operator_delete((void *)(param_1 + -0x368));
  return;
}




void FUN_00b5596c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b55974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00b55978(long *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00b55984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))(param_1,param_2 & 1);
  return;
}




void FUN_00b55988(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x360) = *(byte *)(param_1 + 0x360) & 0xfd | (param_2 & 1) << 1;
  FUN_00b559a0();
  return;
}




void FUN_00b559a0(long param_1,uint param_2)

{
  long lVar1;
  
  FUN_00f13f08(*(undefined4 *)(param_1 + 0xdd0),0x42200000,param_1 + 0x180);
  if ((param_2 & 1) != 0) {
    FUN_00b55dc0(param_1);
    lVar1 = FUN_009580b8();
    FUN_009658c8(lVar1 + 0x18);
    return;
  }
  return;
}




void FUN_00b559f4(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  void *__s1;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  
  uVar2 = *(uint *)(param_1 + 0xda8);
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar10 = *(long *)(param_1 + 0xdb0);
    uVar9 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      plVar8 = *(long **)(lVar10 + uVar9 * 8);
      if (plVar8 != (long *)0x0) {
        bVar3 = *(byte *)(plVar8 + 0x358);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = plVar8[0x359];
        }
        if (uVar1 == __n) {
          __s1 = (void *)plVar8[0x35a];
          if ((bVar3 & 1) == 0) {
            __s1 = (void *)((long)plVar8 + 0x1ac1);
          }
          if ((bVar3 & 1) == 0) {
            if (__n == 0) {
LAB_00b55ad0:
              fVar11 = *(float *)(param_1 + 0x664);
              fVar12 = *(float *)((long)plVar8 + 0x44) * fVar11;
              FUN_00f13e54(param_1 + 0x478);
              fVar12 = (fVar11 * 0.5) / *(float *)(param_1 + 0x664) - fVar12;
              fVar11 = 0.0;
              if (0.0 < fVar12) {
                fVar12 = 0.0;
              }
              (**(code **)(*plVar8 + 0x48))(plVar8);
              fVar12 = fVar12 - fVar11 * 0.5;
              if (*(float *)(param_1 + 0x65c) == fVar12) {
                return;
              }
              *(float *)(param_1 + 0x65c) = fVar12;
              FUN_0091ada4(param_1 + 0x618);
              return;
            }
            pbVar5 = (byte *)((long)plVar8 + 0x1ac1);
            lVar6 = -(ulong)(bVar3 >> 1);
            pbVar7 = __s2;
            while (*pbVar5 == *pbVar7) {
              pbVar5 = pbVar5 + 1;
              lVar6 = lVar6 + 1;
              pbVar7 = pbVar7 + 1;
              if (lVar6 == 0) goto LAB_00b55ad0;
            }
          }
          else if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) goto LAB_00b55ad0;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
  }
  return;
}




void FUN_00b55b64(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  ulong uVar11;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00b8e860();
  lVar1 = param_1 + 0x478;
  FUN_00f13f08(*(undefined4 *)(param_1 + 0xdd0),*(undefined4 *)(param_1 + 0xdd4),lVar1);
  FUN_00f13f08(*(undefined4 *)(param_1 + 0xdd0),*(undefined4 *)(param_1 + 0xdd4),param_1 + 0x388);
  uVar11 = (ulong)(uint)(DAT_02be3670 + -8.0);
  uVar9 = uVar11;
  FUN_00f13f08(*(undefined4 *)(param_1 + 0xdd0),param_1 + 0xc08);
  if (*(int *)(param_1 + 0xda8) != 0) {
    uVar7 = 0;
    do {
      uVar4 = FUN_00ab5e18(*(undefined8 *)(*(long *)(param_1 + 0xdb0) + uVar7 * 8));
      if (((uVar4 & 1) == 0) &&
         ((uVar4 = FUN_00ab5e18(*(undefined8 *)(*(long *)(param_1 + 0xdb0) + uVar7 * 8)),
          (uVar4 & 1) != 0 ||
          (iVar3 = FUN_00ab5db4(*(undefined8 *)(*(long *)(param_1 + 0xdb0) + uVar7 * 8)), iVar3 < 1)
          ))) {
        lVar5 = *(long *)(*(long *)(param_1 + 0xdb0) + uVar7 * 8);
        *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) & 0xfffffffb;
      }
      else {
        lVar5 = *(long *)(*(long *)(param_1 + 0xdb0) + uVar7 * 8);
        *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) | 4;
        FUN_00ab43c0(*(undefined8 *)(*(long *)(param_1 + 0xdb0) + uVar7 * 8));
        plVar6 = *(long **)(*(long *)(param_1 + 0xdb0) + uVar7 * 8);
        fVar10 = (float)uVar11;
        if ((*(float *)(plVar6 + 8) != 0.0) || (*(float *)((long)plVar6 + 0x44) != fVar10)) {
          *(undefined4 *)(plVar6 + 8) = 0;
          *(float *)((long)plVar6 + 0x44) = fVar10;
          FUN_0091ada4(plVar6);
        }
        local_60 = 0x3f000000;
        (**(code **)(*plVar6 + 0x28))(plVar6,&local_60);
        (**(code **)(**(long **)(*(long *)(param_1 + 0xdb0) + uVar7 * 8) + 0x48))();
        uVar11 = (ulong)(uint)(fVar10 + (float)uVar9 + 6.0);
      }
      fVar10 = (float)uVar11;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0xda8));
    lVar5 = param_1 + 0x618;
    if (*(uint *)(param_1 + 0xda8) != 0) {
      FUN_00f13e54(lVar1);
      FUN_00ed02d8(lVar5);
      if (*(float *)(param_1 + 0x65c) != 0.0) {
        *(undefined4 *)(param_1 + 0x65c) = 0;
        FUN_0091ada4(lVar5);
      }
      FUN_00ed0464(lVar5);
      fVar8 = fVar10;
      FUN_00f13e54(lVar1);
      FUN_00ed04d8(lVar5,0,fVar8 < fVar10);
      FUN_00ed04ac(0,0x41f00000,lVar5);
      FUN_00ed1918(lVar5);
      goto LAB_00b55d74;
    }
  }
  FUN_00ed04d8(param_1 + 0x618,0,0);
  FUN_00ed02d8(0,0,param_1 + 0x618);
LAB_00b55d74:
  if (*(float *)(param_1 + 0x1c0) != 0.0) {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    FUN_0091ada4(param_1 + 0x180);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b55dc0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0xda8) != 0) {
    uVar6 = 0;
    do {
      uVar3 = FUN_00acab58(*(undefined8 *)(*(long *)(param_1 + 0xdb0) + uVar6 * 8));
      if ((uVar3 & 1) == 0) {
        pbVar4 = (byte *)FUN_00acab40(*(undefined8 *)(*(long *)(param_1 + 0xdb0) + uVar6 * 8));
        pbVar5 = *(byte **)(pbVar4 + 0x10);
        if ((*pbVar4 & 1) == 0) {
          pbVar5 = pbVar4 + 1;
        }
        FUN_008fa54c(local_50,pbVar5);
        lVar1 = 0;
        if (*(long *)(param_1 + 0x380) != 0) {
          lVar1 = *(long *)(param_1 + 0x380) + 0x2c98;
        }
        FUN_0096bce8(local_50,lVar1,*(undefined8 *)(*(long *)(param_1 + 0xdb0) + uVar6 * 8));
        if ((local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0xda8));
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b55e90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,uint param_8)

{
  long lVar1;
  void *pvVar2;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x1b20);
  FUN_00ab39a8(*(undefined4 *)(param_1 + 0xdd0),0x441f0000,pvVar2,param_3,param_4,param_5,param_6,
               param_7,param_8 & 1);
  local_70 = pvVar2;
  FUN_00b55f74(param_1 + 0xda8,&local_70);
  FUN_00f023ec(param_1 + 0xb50,local_70,1);
  FUN_00acab38(local_70,param_2);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_70);
}




void FUN_00b55f74(uint *param_1,undefined8 *param_2)

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
    FUN_00b562e4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00b55ffc(long param_1)

{
  if (*(float *)(param_1 + 0x65c) != 0.0) {
    *(undefined4 *)(param_1 + 0x65c) = 0;
    FUN_0091ada4(param_1 + 0x618);
  }
  FUN_00ed02ac(param_1 + 0x618);
  return;
}

