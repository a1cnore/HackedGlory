// functions/00b2e — 26 functions
#include "libGameKindred.h"




void FUN_00b2e2d8(undefined1 param_1 [16],float param_2,long param_3,byte param_4)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  ushort uVar4;
  ushort *puVar5;
  ulong uVar6;
  float fVar7;
  undefined4 local_80;
  float local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  bVar2 = DAT_02be9bcc == '\0';
  if (*(int *)(param_3 + 0xbd0) != 0) {
    uVar6 = 0;
    fVar7 = 0.0;
    do {
      FUN_00f01980(*(undefined8 *)(*(long *)(param_3 + 0xbd8) + uVar6 * 8));
      lVar3 = DAT_03210d00;
      if ((bVar2 & param_4) == 0) {
        lVar3 = *(long *)(*(long *)(param_3 + 0xbd8) + uVar6 * 8);
        if ((*(float *)(lVar3 + 0x40) != 0.0) || (*(float *)(lVar3 + 0x44) != fVar7)) {
          *(undefined4 *)(lVar3 + 0x40) = 0;
          *(float *)(lVar3 + 0x44) = fVar7;
          FUN_0091ada4();
        }
      }
      else {
        uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
        if ((ulong)uVar4 == 0xffff) {
          puVar5 = (ushort *)0x0;
        }
        else {
          puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
          if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
            uVar4 = 0xffff;
          }
          else {
            uVar4 = *puVar5;
          }
          *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
          *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
          FUN_00efdc08(puVar5);
          *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
        }
        local_80 = 0;
        local_7c = fVar7;
        FUN_00efdc50(puVar5,&local_80);
        FUN_00efcac4(0x3f000000,puVar5);
        FUN_00efcb24(puVar5,FUN_0091aa80);
        FUN_00f02308(*(undefined8 *)(*(long *)(param_3 + 0xbd8) + uVar6 * 8),puVar5,0);
      }
      (**(code **)(**(long **)(*(long *)(param_3 + 0xbd8) + uVar6 * 8) + 0x48))();
      uVar6 = uVar6 + 1;
      fVar7 = fVar7 + param_2;
    } while (uVar6 < *(uint *)(param_3 + 0xbd0));
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00b2e4b0(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  float fVar4;
  
  fVar4 = 0.0;
  if ((*(char *)(param_3 + 0x590) != '\0') &&
     (plVar3 = *(long **)(param_3 + 0x288), plVar3 != (long *)0x0)) {
    fVar4 = 0.0;
    do {
      uVar1 = FUN_00e6a474("TableViewSeparator");
      iVar2 = FUN_0091ed5c("TableViewSeparator",uVar1,0x1234);
      if (0xffff < (uint)(*(int *)((long)plVar3 + 0x84) << 1 ^ iVar2 << 0x10)) {
        (**(code **)(*plVar3 + 0x48))(plVar3);
        fVar4 = fVar4 + param_2;
      }
      plVar3 = (long *)plVar3[6];
    } while (plVar3 != (long *)0x0);
  }
  return fVar4;
}




float FUN_00b2e53c(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  float fVar4;
  
  fVar4 = 0.0;
  if ((*(char *)(param_3 + 0x590) != '\0') &&
     (plVar3 = *(long **)(param_3 + 0x288), plVar3 != (long *)0x0)) {
    fVar4 = 0.0;
    do {
      uVar1 = FUN_00e6a474("TableViewSeparator");
      iVar2 = FUN_0091ed5c("TableViewSeparator",uVar1,0x1234);
      if ((uint)(*(int *)((long)plVar3 + 0x84) << 1 ^ iVar2 << 0x10) >> 0x10 == 0) {
        (**(code **)(*plVar3 + 0x48))(plVar3);
        fVar4 = fVar4 + param_2;
      }
      plVar3 = (long *)plVar3[6];
    } while (plVar3 != (long *)0x0);
  }
  return fVar4;
}




void FUN_00b2e5c8(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x591) != '\0') {
    return;
  }
  *(byte *)(param_1 + 0x590) = *(byte *)(param_1 + 0x590) ^ 1;
  FUN_00b2dc64(param_1);
  FUN_00f0490c(param_2);
  FUN_00b2de68(param_1,1);
  FUN_00b2e62c(*(undefined8 *)(param_1 + 0x568),param_1);
  return;
}




void FUN_00b2e62c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  FUN_00b2e2d8(param_1,1);
  if (DAT_0313a0b8 != 0) {
    plVar2 = (long *)(DAT_0313a0b8 + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00b2e68c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 local_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027dfda8;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00ed66ec(plVar2);
  param_1[0x17c] = 0;
  param_1[0x17b] = 0;
  param_1[0x17a] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_40[0] = 9;
  FUN_00ed5ab0(plVar2,local_40);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2e770(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dfda8;
  FUN_00b2e7fc();
  DAT_0313a0c8 = 0;
  DAT_0313a0b8 = 0;
  DAT_0313a0c0 = 0;
  if ((void *)param_1[0x17b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x17b]);
    param_1[0x17b] = 0;
    param_1[0x17a] = 0;
  }
  thunk_FUN_00ed5534(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b2e7fc(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0xbd0);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0xbd8) + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0xbd8) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0xbd0);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0xbd8) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0xbd8) != 0) {
    *(undefined4 *)(param_1 + 0xbd0) = 0;
  }
  *(undefined8 *)(param_1 + 0xbe0) = 0;
  return;
}




void FUN_00b2e880(void *param_1)

{
  FUN_00b2e770();
  operator_delete(param_1);
  return;
}




void FUN_00b2e8a4(long *param_1)

{
  FUN_00f13db0();
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_00b2e2d8(param_1,0);
  return;
}




void FUN_00b2e8dc(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00f13db4();
  local_60 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_5c = param_2;
  FUN_00f13f18(param_3 + 0x17,&local_60);
  local_60 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_5c = param_2;
  FUN_00f13f18(param_3 + 0x35,&local_60);
  uVar5 = 0;
  fVar6 = 0.0;
  FUN_00f07940(0,0,param_3 + 0x17,8,param_3,8);
  if ((int)param_3[0x17a] != 0) {
    uVar3 = 0;
    do {
      uVar2 = *(undefined8 *)(param_3[0x17b] + uVar3 * 8);
      uVar4 = (**(code **)(*param_3 + 0x48))(param_3);
      uVar5 = 0;
      FUN_00f13f08(uVar4,0,uVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_3 + 0x17a));
  }
  uVar2 = (**(code **)(*param_3 + 0x48))(param_3);
  if ((int)param_3[0x17a] != 0) {
    uVar3 = 0;
    fVar6 = 0.0;
    do {
      (**(code **)(**(long **)(param_3[0x17b] + uVar3 * 8) + 0x48))();
      uVar3 = uVar3 + 1;
      fVar6 = fVar6 + (float)uVar5;
    } while (uVar3 < *(uint *)(param_3 + 0x17a));
  }
  FUN_00ed5a58(uVar2,fVar6,param_3 + 0x35);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00b2ea40(undefined1 param_1 [16],float param_2,long param_3)

{
  ulong uVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 0xbd0) == 0) {
    fVar2 = 0.0;
  }
  else {
    uVar1 = 0;
    fVar2 = 0.0;
    do {
      (**(code **)(**(long **)(*(long *)(param_3 + 0xbd8) + uVar1 * 8) + 0x48))();
      uVar1 = uVar1 + 1;
      fVar2 = fVar2 + param_2;
    } while (uVar1 < *(uint *)(param_3 + 0xbd0));
  }
  return fVar2;
}




void FUN_00b2eaa8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_2 + 8);
  *puVar2 = 0;
  puVar1 = &DAT_0313a0b8;
  if (DAT_0313a0b8 != 0) {
    puVar1 = DAT_0313a0c0;
  }
  *puVar1 = puVar2;
  DAT_0313a0c0 = puVar2;
  DAT_0313a0c8 = DAT_0313a0c8 + 1;
  return;
}




void FUN_00b2ead8(long *param_1,long param_2)

{
  long lVar1;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ed5664(param_1 + 0x35,param_2,1);
  *(long **)(param_2 + 0x568) = param_1;
  local_40 = param_2;
  FUN_00b2eb68(param_1 + 0x17a,&local_40);
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_00b2e2d8(param_1,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2eb68(uint *param_1,undefined8 *param_2)

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
    FUN_00b2ef10(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined8 FUN_00b2ebf0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0xbd0) != 0) {
    uVar3 = 0;
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0xbd8) + (uVar3 & 0xffffffff) * 8);
      uVar1 = FUN_00e6a474(param_2);
      iVar2 = FUN_0091ed5c(param_2,uVar1,0x1234);
      if ((uint)(*(int *)(lVar4 + 0x84) << 1 ^ iVar2 << 0x10) >> 0x10 == 0) {
        return *(undefined8 *)(*(long *)(param_1 + 0xbd8) + uVar3 * 8);
      }
      uVar3 = uVar3 + 1;
    } while ((uint)uVar3 < *(uint *)(param_1 + 0xbd0));
  }
  return 0;
}




long FUN_00b2ec78(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0xbd0) != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0xbd8) + (ulong)uVar2 * 8);
      if ((uint)(param_2 << 0x10 ^ *(int *)(lVar1 + 0x84) << 1) >> 0x10 == 0) {
        return lVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0xbd0));
  }
  return 0;
}




void FUN_00b2ecb8(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_2;
  FUN_00f0e670(param_1 + 0xb8,&local_2c,2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2ed0c(long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0xbd0) != 0) {
    uVar2 = 0;
    do {
      lVar1 = uVar2 * 8;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0xbd8) + lVar1) + 0x593) = param_2;
    } while (uVar2 < *(uint *)(param_1 + 0xbd0));
  }
  return;
}




void FUN_00b2ed3c(void)

{
  return;
}




void FUN_00b2ed40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dfb10;
  param_1[0x18] = &PTR_FUN_028266f0;
  param_1[0x2f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x18);
  *param_1 = &PTR_FUN_027df9c0;
  param_1[0x17] = 0;
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b2edb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dfb10;
  param_1[0x18] = &PTR_FUN_028266f0;
  param_1[0x2f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x18);
  *param_1 = &PTR_FUN_027df9c0;
  param_1[0x17] = 0;
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b2ee28(uint *param_1,uint param_2)

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




void * FUN_00b2eea8(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1b0);
  FUN_00b2d024();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_00b2ef10(uint *param_1,uint param_2)

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




void FUN_00b2ef90(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_00b356dc();
  plVar1 = param_1 + 0x7c;
  *param_1 = (long)&PTR_FUN_027dfef0;
  param_1[0x6d] = (long)&PTR_FUN_027e00d0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x9a;
  FUN_00f13ca4(plVar2);
  plVar3 = param_1 + 0xb1;
  FUN_00ecfd6c(plVar3,0);
  plVar4 = param_1 + 0x158;
  FUN_00f0d160(plVar4);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar4,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50);
  uVar6 = FUN_00e6ce7c("MENU_NEWSFEED_PULLTOREFRESH",0);
  FUN_00f0d75c(plVar4,uVar6);
  if ((*(uint *)((long)param_1 + 0xb44) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0xb44) = *(uint *)((long)param_1 + 0xb44) & 0xffff807f;
    FUN_0091ada4(plVar4);
  }
  if ((*(float *)(param_1 + 0x161) != 0.66) || (*(float *)((long)param_1 + 0xb0c) != 0.66)) {
    param_1[0x161] = 0x3f28f5c33f28f5c3;
    FUN_0091ada4(plVar4);
  }
  FUN_00ed0680(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,
               PTR_s_scrollbar_button_fill_top_02be3518,PTR_s_scrollbar_button_fill_middle_02be3520,
               PTR_s_scrollbar_button_fill_bottom_02be3528);
  FUN_00ed04d8(plVar3,0,1);
  local_50 = DAT_03210f60;
  local_78 = FUN_00b2f200;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 0xb2,&local_78);
  local_78 = FUN_00b2f200;
  local_50 = DAT_03210f8c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 0xb2,&local_78);
  local_50 = FUN_00f048a4("UI::EVENT_FEED_SIZE_UPDATE");
  local_78 = FUN_00b2f214;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 1,&local_78);
  (**(code **)(*param_1 + 0x150))(param_1);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

