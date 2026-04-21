// functions/00c6b — 24 functions
#include "libGameKindred.h"




void FUN_00c6b030(uint *param_1,undefined8 *param_2)

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
    FUN_00c6b148(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c6b0b8(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x580);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x588) + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x588) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x580);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x588) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0x588) != 0) {
    *(undefined4 *)(param_1 + 0x580) = 0;
  }
  FUN_00c6abe4(param_1);
  return;
}




void FUN_00c6b13c(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x590) = param_1;
  *(undefined4 *)(param_3 + 0x594) = param_2;
  FUN_00c6abe4();
  return;
}




void FUN_00c6b148(uint *param_1,uint param_2)

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




void FUN_00c6b1c8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 local_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00f0ac5c();
  plVar1 = param_1 + 0x2a;
  param_1[0x29] = 0;
  *param_1 = (long)&PTR_FUN_02800ad8;
  FUN_00ed66ec(plVar1);
  plVar2 = param_1 + 0x16f;
  FUN_00f0e4a8(plVar2);
  param_1[0x18e] = 0;
  param_1[0x18d] = 0;
  param_1[399] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00ed5664(plVar1,plVar2,1);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  local_40[0] = 9;
  FUN_00ed5ab0(plVar1,local_40);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6b2c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02800ad8;
  if (param_1[0x18d] != 0) {
    param_1[0x18d] = 0;
  }
  if (param_1[0x18e] != 0) {
    param_1[0x18e] = 0;
  }
  param_1[0x16f] = &PTR_FUN_028266f0;
  param_1[0x186] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x189);
  FUN_00f13d08(param_1 + 0x16f);
  thunk_FUN_00ed5534(param_1 + 0x2a);
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c6b354(void *param_1)

{
  FUN_00c6b2c0();
  operator_delete(param_1);
  return;
}




void FUN_00c6b378(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xc68) = param_2;
  FUN_00ed5664(param_1 + 0x150,param_2,1);
  return;
}




void FUN_00c6b38c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xc70) = param_2;
  FUN_00ed5664(param_1 + 0x150,param_2,1);
  return;
}




void FUN_00c6b3a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_00f13f18(param_1,param_1 + 0xc78);
  FUN_00f13f18(param_1 + 0x150,param_1 + 0xc78);
  lVar1 = param_1 + 0xb78;
  FUN_00f13f08(*(undefined4 *)(param_1 + 0xc78),0x41200000,lVar1);
  FUN_00f13f08(*(undefined4 *)(param_1 + 0xc78),*(undefined4 *)(param_1 + 0xc7c),
               *(undefined8 *)(param_1 + 0xc70));
  FUN_00f13f08(*(undefined4 *)(param_1 + 0xc78),*(undefined4 *)(param_1 + 0xc7c),
               *(undefined8 *)(param_1 + 0xc68));
  lVar3 = *(long *)(param_1 + 0xc70);
  if ((*(float *)(lVar3 + 0x40) != 0.0) || (*(float *)(lVar3 + 0x44) != 0.0)) {
    *(undefined8 *)(lVar3 + 0x40) = 0;
    FUN_0091ada4(lVar3);
    lVar3 = *(long *)(param_1 + 0xc70);
  }
  FUN_00f07b18(0,lVar1,0,lVar3,2);
  FUN_00f07b18(0,lVar1,3,lVar3,3);
  uVar2 = *(undefined8 *)(param_1 + 0xc68);
  FUN_00f07b18(0,uVar2,0,lVar1,2);
  FUN_00f07b18(0,uVar2,3,lVar1,3);
  return;
}




void FUN_00c6b49c(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)(param_3 + 399) = param_1;
  *(undefined4 *)((long)param_3 + 0xc7c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00c6b4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x138))();
  return;
}




void FUN_00c6b4b0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 local_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x1a;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *param_1 = (long)&PTR_FUN_02800c28;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x31;
  FUN_00ed66ec(plVar2);
  param_1[0x176] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  local_40[0] = 9;
  FUN_00ed5ab0(plVar2,local_40);
  FUN_00c6b57c(param_1);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6b57c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  lVar4 = param_1 + 0xbb0;
  FUN_00f13f18(param_1,lVar4);
  FUN_00f13f18(param_1 + 0xd0,lVar4);
  lVar1 = param_1 + 0x188;
  FUN_00f13f18(lVar1,lVar4);
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar6 = 0;
    do {
      FUN_00f13f08(*(undefined4 *)(param_1 + 0xbb0),*(float *)(param_1 + 0xbb4) * 0.4,
                   *(undefined8 *)(*(long *)(param_1 + 200) + uVar6 * 8));
      puVar3 = &DAT_01bee7fa;
      if ((uVar6 & 1) == 0) {
        puVar3 = &DAT_01bee7f6;
      }
      FUN_00f0c774(*(long *)(*(long *)(param_1 + 200) + uVar6 * 8) + 0x200,puVar3);
      lVar4 = *(long *)(*(long *)(param_1 + 200) + uVar6 * 8);
      if (uVar6 == 0) {
        if ((*(float *)(lVar4 + 0x40) != 0.0) || (*(float *)(lVar4 + 0x44) != 0.0)) {
          *(undefined8 *)(lVar4 + 0x40) = 0;
          FUN_0091ada4(lVar4);
        }
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 200) + (ulong)((int)uVar6 - 1) * 8);
        FUN_00f07b18(0,lVar4,0,uVar5,2);
        FUN_00f07b18(0,lVar4,3,uVar5,3);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0xc0));
  }
  uVar5 = FUN_00f13e54(lVar1);
  plVar2 = (long *)FUN_00ed5aa8(lVar1);
  (**(code **)(*plVar2 + 0x58))(plVar2,0,0,1,1);
  FUN_00ed5a58(uVar5,lVar1);
  if (*(float *)(param_1 + 0x1cc) != 0.0) {
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    FUN_0091ada4(lVar1);
    return;
  }
  return;
}




void FUN_00c6b724(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02800c28;
  FUN_00c6b778();
  thunk_FUN_00ed5534(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c6b778(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0xc0);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 200) + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 200) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0xc0);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 200) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  FUN_00ed5670(param_1 + 0x188);
  return;
}




void FUN_00c6b7fc(void *param_1)

{
  FUN_00c6b724();
  operator_delete(param_1);
  return;
}




void FUN_00c6b820(long param_1)

{
  FUN_00f0c774(param_1 + 0x200);
  return;
}




void FUN_00c6b828(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e70b34(param_3,&DAT_03210450);
  if ((((0 < param_6) || (0 < param_5)) || (0 < param_4)) || ((0 < param_7 || ((uVar2 & 1) == 0))))
  {
    pvVar3 = operator_new(0x2068);
    FUN_00c6bc34();
    local_70 = pvVar3;
    FUN_00c6b930(pvVar3,param_2,param_3,param_4,param_5,param_6,param_7);
    FUN_00c6bba0(param_1 + 0xc0,&local_70);
    FUN_00ed5664(param_1 + 0x188,local_70,1);
    FUN_00c6b57c(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6b930(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar2 = *(uint *)(param_1 + 0x284);
  if ((uVar2 & 0x7f80) != 0xa00) {
    *(uint *)(param_1 + 0x284) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0xa00;
    FUN_0091ada4(param_1 + 0x200);
  }
  FUN_00f0d75c(param_1 + 0x1cd0,param_2);
  uVar4 = FUN_00e6ce7c("GENERIC_5V5",0);
  FUN_00c6c2dc(param_1 + 0x2d8,uVar4,param_4);
  uVar4 = FUN_00e6ce7c("GENERIC_3V3",0);
  FUN_00c6c2dc(param_1 + 0x988,uVar4,param_5);
  FUN_00b1d77c(param_1 + 0x1038,param_6);
  uVar4 = FUN_00e6ce7c("MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TYPE_TEAM",0);
  thunk_FUN_00e7051c(&local_68,uVar4);
  FUN_00e705c8(&local_78,&DAT_01e4a398);
  FUN_00e70c34(&local_68,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  uVar4 = FUN_00e6ce7c("GENERIC_3V3",0);
  FUN_00e70c34(&local_68,uVar4);
  FUN_00f0d75c(param_1 + 0x1e00,&local_68);
  if (0 < param_7) {
    lVar1 = param_1 + 0x1408;
    FUN_00acd7d8(lVar1);
    FUN_00acdd70(lVar1,param_7);
    FUN_00acd880(lVar1);
    *(uint *)(param_1 + 0x1ae4) = *(uint *)(param_1 + 0x1ae4) & 0xfffffffb;
    *(uint *)(param_1 + 0x19f4) = *(uint *)(param_1 + 0x19f4) & 0xfffffffb;
    *(uint *)(param_1 + 0x1c14) = *(uint *)(param_1 + 0x1c14) & 0xfffffffb;
    if (param_7 < 0x5a) {
      if (param_7 < 0x3c) {
        if (param_7 < 0x32) {
          if (param_7 < 0x1e) {
            fVar5 = *(float *)(&DAT_01baf4e8 + (ulong)(0x13 < param_7) * 4);
          }
          else {
            fVar5 = 0.55;
          }
        }
        else {
          fVar5 = 0.45;
        }
      }
      else {
        fVar5 = 0.35;
      }
    }
    else {
      fVar5 = 0.3;
    }
    if ((*(float *)(param_1 + 0x1450) != fVar5) || (*(float *)(param_1 + 0x1454) != fVar5)) {
      *(float *)(param_1 + 0x1450) = fVar5;
      *(float *)(param_1 + 0x1454) = fVar5;
      FUN_0091ada4(lVar1);
    }
    FUN_00f0d75c(param_1 + 0x1f30,param_3);
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6bba0(uint *param_1,undefined8 *param_2)

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
    FUN_00c6c630(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c6bc28(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xbb0) = param_1;
  *(undefined4 *)(param_3 + 0xbb4) = param_2;
  FUN_00c6b57c();
  return;
}




void FUN_00c6bc34(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  FUN_00f0ac5c();
  plVar1 = param_1 + 0x29;
  *param_1 = (long)&PTR_FUN_02800d70;
  FUN_00f13ca4(plVar1);
  FUN_00f0c714(param_1 + 0x40);
  FUN_00c6c460(param_1 + 0x5b);
  FUN_00c6c460(param_1 + 0x131);
  FUN_00b1d5d8(param_1 + 0x207);
  plVar2 = param_1 + 0x281;
  FUN_00acd4d4(plVar2,1);
  plVar3 = param_1 + 0x39a;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x3c0;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0x3e6;
  FUN_00f0d160(plVar5);
  param_1[0x40c] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x40,1);
  FUN_00f023ec(plVar1,param_1 + 0x5b,1);
  FUN_00f023ec(plVar1,param_1 + 0x131,1);
  FUN_00f023ec(plVar1,param_1 + 0x207,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58,&DAT_01bee7fa);
  FUN_00f0d92c(plVar5,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58,&DAT_01bee7fa);
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20,&DAT_01bee7fa);
  if ((*(float *)(param_1 + 0x28a) != 0.8) || (*(float *)((long)param_1 + 0x1454) != 0.8)) {
    param_1[0x28a] = 0x3f4ccccd3f4ccccd;
    FUN_0091ada4(plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00c6be30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00c6be34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02800d70;
  FUN_00acd82c(param_1 + 0x281);
  FUN_00f0d3a4(param_1 + 0x3e6);
  FUN_00f0d3a4(param_1 + 0x3c0);
  FUN_00f0d3a4(param_1 + 0x39a);
  param_1[0x281] = &PTR_FUN_027d70a0;
  FUN_00f0d3a4(param_1 + 0x372);
  FUN_00f0d3a4(param_1 + 0x34c);
  param_1[0x32e] = &PTR_FUN_028266f0;
  param_1[0x345] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x348);
  FUN_00f13d08(param_1 + 0x32e);
  FUN_00f0d3a4(param_1 + 0x308);
  FUN_00af8c0c(param_1 + 0x292);
  FUN_00f01868(param_1 + 0x281);
  FUN_00ab3254(param_1 + 0x207);
  param_1[0x131] = &PTR_FUN_02800ec0;
  FUN_00f0d3a4(param_1 + 0x1e0);
  FUN_00ab3254(param_1 + 0x166);
  param_1[0x148] = &PTR_FUN_028266f0;
  param_1[0x15f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x162);
  FUN_00f13d08(param_1 + 0x148);
  FUN_00f13d08(param_1 + 0x131);
  param_1[0x5b] = &PTR_FUN_02800ec0;
  FUN_00f0d3a4(param_1 + 0x10a);
  FUN_00ab3254(param_1 + 0x90);
  param_1[0x72] = &PTR_FUN_028266f0;
  param_1[0x89] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8c);
  FUN_00f13d08(param_1 + 0x72);
  FUN_00f13d08(param_1 + 0x5b);
  FUN_00f13d08(param_1 + 0x40);
  FUN_00f13d08(param_1 + 0x29);
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c6bfdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02800ec0;
  FUN_00f0d3a4(param_1 + 0xaf);
  FUN_00ab3254(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}

