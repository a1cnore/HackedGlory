// functions/00c3f — 27 functions
#include "libGameKindred.h"




void FUN_00c3f028(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  long lVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(*(long *)(param_3 + 0x278) + 0x10);
  lVar4 = plVar2[8];
  fVar3 = (float)(**(code **)(*plVar2 + 0x48))();
  local_40 = CONCAT44((float)((ulong)lVar4 >> 0x20) + param_2 * 0.5,(float)lVar4 + fVar3 * 0.5);
  FUN_00f0862c(&local_40,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x278) + 0x10) + 0x20));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3f0b4(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c3f0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,param_3);
    return;
  }
  return;
}




void FUN_00c3f0d0(long param_1)

{
  if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c3f0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0xb8))();
    return;
  }
  return;
}




void FUN_00c3f0e8(long param_1,int *param_2)

{
  long *plVar1;
  
  if (*param_2 == 1) {
    FUN_00c3f14c();
    return;
  }
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x278);
  *(uint *)((long)plVar1 + 0x62c) = *(uint *)((long)plVar1 + 0x62c) | 4;
  *(uint *)((long)plVar1 + 0x294) = *(uint *)((long)plVar1 + 0x294) & 0xfffffffb;
  FUN_00f0d75c(plVar1 + 0x108,plVar1 + 0x202);
                    /* WARNING: Could not recover jumptable at 0x00c3f148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  return;
}




void FUN_00c3f14c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00c3e688(**(undefined8 **)(param_1 + 0x278),1);
  lVar2 = **(long **)(param_1 + 0x278);
  FUN_00e705c8(&local_38,&DAT_01bb47ff);
  if ((*(byte *)(lVar2 + 0x294) >> 2 & 1) != 0) {
    FUN_00f0d75c(lVar2 + 0x478,&local_38);
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3f1dc(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x278);
  *(uint *)((long)plVar1 + 0x62c) = *(uint *)((long)plVar1 + 0x62c) | 4;
  *(uint *)((long)plVar1 + 0x294) = *(uint *)((long)plVar1 + 0x294) & 0xfffffffb;
  FUN_00f0d75c(plVar1 + 0x108,plVar1 + 0x202);
                    /* WARNING: Could not recover jumptable at 0x00c3f22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  return;
}




void FUN_00c3f230(long param_1,int *param_2)

{
  char *pcVar1;
  
  if (*param_2 % 0x3c < 10) {
    pcVar1 = "%d:0%d";
  }
  else {
    pcVar1 = "%d:%d";
  }
  FUN_00e70e18(param_1 + 0x280,pcVar1);
  if ((*(byte *)(**(long **)(param_1 + 0x278) + 0x294) >> 2 & 1) == 0) {
    return;
  }
  FUN_00f0d75c(**(long **)(param_1 + 0x278) + 0x478,param_1 + 0x280);
  return;
}




void FUN_00c3f2c0(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x290) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x290) = param_2;
  FUN_00f13db4(param_1 + 0x1b0);
  if (*(int *)(param_1 + 0x270) != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0x278) + uVar2 * 8);
      FUN_00c3e30c(lVar1,*(int *)(lVar1 + 0x1028) == param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x270));
  }
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_menu_button_tap_drill_in.mp3",0,0);
  FUN_00c3f368(param_1,param_2 == 0);
  return;
}




void FUN_00c3f368(long param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  bVar2 = (param_2 & 1) == 0;
  uVar7 = 0x3f800000;
  if (bVar2) {
    uVar7 = 0;
  }
  uVar8 = 0x3f800000;
  if (bVar2) {
    uVar8 = 0x3ecccccd;
  }
  puVar3 = (ushort *)FUN_00efee28(uVar7,uVar8,FUN_0091aa80);
  lVar1 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc9c0(puVar6);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efca10(puVar6,param_2 & 1);
  FUN_00f01980(param_1 + 0xc0);
  puVar4 = puVar3;
  if ((param_2 & 1) != 0) {
    puVar4 = puVar6;
    puVar6 = puVar3;
  }
  FUN_00f02308(param_1 + 0xc0,puVar4,puVar6,0);
  FUN_00c3e7cc(**(undefined8 **)(param_1 + 0x278),~param_2 & 1);
  return;
}




void FUN_00c3f49c(long *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  FUN_00f13db4();
  iVar3 = FUN_0092f2b8();
  uVar2 = 0x41a00000;
  if (iVar3 < 2) {
    uVar2 = 0x40800000;
  }
  FUN_00f13f08(0x43a90000,0x43a90000,param_1 + 0x18);
  FUN_00f07a18(0x41a00000,uVar2,param_1 + 0x18,0);
  iVar3 = FUN_0092f2b8();
  fVar8 = *(float *)(&DAT_01bbd304 + (ulong)(1 < iVar3) * 4);
  fVar7 = *(float *)(&DAT_01bbd30c + (ulong)(1 < iVar3) * 4);
  fVar5 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar6 = -36.0;
  plVar1 = param_1 + 0x36;
  uVar4 = FUN_00f13f70(plVar1);
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar8 = (fVar6 - fVar7) - fVar8;
  fVar6 = (float)(uVar4 >> 0x20);
  if (fVar8 <= (float)(uVar4 >> 0x20)) {
    fVar6 = fVar8;
  }
  FUN_00f13f08(fVar5 + -36.0,fVar6,plVar1);
  FUN_00f13be8(param_1[0x4d],0);
  FUN_00f07a18(0,fVar7,plVar1,4);
  return;
}




void FUN_00c3f5a8(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x270);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x278) + uVar3 * 8);
      if (((param_2 ^ *(uint *)((long)plVar1 + 0x84) >> 2) & 1) != 0) {
        *(uint *)((long)plVar1 + 0x84) =
             *(uint *)((long)plVar1 + 0x84) & 0xfffffffb | (param_2 & 1) << 2;
        (**(code **)(*plVar1 + 0xe8))();
        uVar2 = *(uint *)(param_1 + 0x270);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}




undefined4 FUN_00c3f620(long param_1)

{
  return *(undefined4 *)(param_1 + 0x290);
}




void FUN_00c3f628(long param_1)

{
  ulong uVar1;
  
  if (1 < *(uint *)(param_1 + 0x270)) {
    uVar1 = 1;
    do {
      FUN_00c3e8ec((float)(int)uVar1 * 0.1 + 0.5,0x3fb33333,
                   *(undefined8 *)(*(long *)(param_1 + 0x278) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x270));
  }
  return;
}




void FUN_00c3f6a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fb188;
  if ((void *)param_1[0x203] != (void *)0x0) {
    operator_delete__((void *)param_1[0x203]);
    param_1[0x203] = 0;
    param_1[0x202] = 0;
  }
  param_1[0x12e] = &PTR_FUN_027d15d8;
  FUN_0099ccc4(param_1 + 0x1fa);
  FUN_00f0d3a4(param_1 + 0x1d3);
  FUN_00f0d3a4(param_1 + 0x1ad);
  FUN_00f0d3a4(param_1 + 0x187);
  param_1[0x169] = &PTR_FUN_028266f0;
  param_1[0x180] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x183);
  FUN_00f13d08(param_1 + 0x169);
  param_1[0x13f] = &PTR_FUN_02826f38;
  param_1[0x156] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x159);
  FUN_00f13d08(param_1 + 0x13f);
  FUN_00f01868(param_1 + 0x12e);
  FUN_00f0d3a4(param_1 + 0x108);
  param_1[0xea] = &PTR_FUN_028266f0;
  param_1[0x101] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x104);
  FUN_00f13d08(param_1 + 0xea);
  param_1[0xcc] = &PTR_FUN_028266f0;
  param_1[0xe3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe6);
  FUN_00f13d08(param_1 + 0xcc);
  FUN_00f13d08(param_1 + 0xb5);
  FUN_00f0d3a4(param_1 + 0x8f);
  param_1[0x71] = &PTR_FUN_028266f0;
  param_1[0x88] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8b);
  FUN_00f13d08(param_1 + 0x71);
  param_1[0x53] = &PTR_FUN_028266f0;
  param_1[0x6a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6d);
  FUN_00f13d08(param_1 + 0x53);
  FUN_00f01868(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c3f840(void *param_1)

{
  FUN_00c3f6a4();
  operator_delete(param_1);
  return;
}




void thunk_FUN_00c3f0e8(long param_1,int *param_2)

{
  long *plVar1;
  
  if (*param_2 == 1) {
    FUN_00c3f14c();
    return;
  }
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x278);
  *(uint *)((long)plVar1 + 0x62c) = *(uint *)((long)plVar1 + 0x62c) | 4;
  *(uint *)((long)plVar1 + 0x294) = *(uint *)((long)plVar1 + 0x294) & 0xfffffffb;
  FUN_00f0d75c(plVar1 + 0x108,plVar1 + 0x202);
                    /* WARNING: Could not recover jumptable at 0x00c3f148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  return;
}




void thunk_FUN_00c3f230(long param_1,int *param_2)

{
  char *pcVar1;
  
  if (*param_2 % 0x3c < 10) {
    pcVar1 = "%d:0%d";
  }
  else {
    pcVar1 = "%d:%d";
  }
  FUN_00e70e18(param_1 + 0x280,pcVar1);
  if ((*(byte *)(**(long **)(param_1 + 0x278) + 0x294) >> 2 & 1) == 0) {
    return;
  }
  FUN_00f0d75c(**(long **)(param_1 + 0x278) + 0x478,param_1 + 0x280);
  return;
}




void FUN_00c3f86c(uint *param_1,uint param_2)

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




void FUN_00c3f8ec(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  
  FUN_00b89cd8();
  plVar1 = param_1 + 0x19;
  *param_1 = (long)&PTR_FUN_027fb418;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x37;
  FUN_00f0e4a8(plVar2);
  param_1[0x55] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  uVar3 = *(uint *)((long)param_1 + 0x14c);
  if ((uVar3 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x14c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x3300;
    FUN_0091ada4(plVar1);
  }
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 1;
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  uVar3 = *(uint *)((long)param_1 + 0x23c);
  if ((uVar3 & 0x7f80) == 0x3300) {
    return;
  }
  *(uint *)((long)param_1 + 0x23c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x3300;
  FUN_0091ada4(plVar2);
  return;
}




void FUN_00c3fa38(undefined1 param_1 [16],undefined4 param_2,long *param_3,undefined8 *param_4,
                 uint param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((undefined8 *)param_3[0x55] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_3[0x55])();
    uVar2 = FUN_00f02540();
    if ((uVar2 & 1) != 0) {
      uVar3 = (*(code *)**(undefined8 **)param_3[0x55])();
      FUN_00f01a4c(uVar3,1);
    }
  }
  param_3[0x55] = (long)param_4;
  if (param_4 != (undefined8 *)0x0) {
    uVar3 = (**(code **)*param_4)(param_4);
    (**(code **)(*param_3 + 0x78))(param_3,uVar3,1);
    lVar4 = (*(code *)**(undefined8 **)param_3[0x55])();
    *(uint *)(lVar4 + 0x84) = *(uint *)(lVar4 + 0x84) | 4;
    uVar3 = (*(code *)**(undefined8 **)param_3[0x55])();
    local_40 = (**(code **)(*param_3 + 0x48))(param_3);
    uStack_3c = param_2;
    FUN_00f13f18(uVar3,&local_40);
    uVar3 = (*(code *)**(undefined8 **)param_3[0x55])();
    FUN_00f07940(0,0,uVar3,0,param_3,0);
  }
  *(uint *)((long)param_3 + 0x14c) =
       *(uint *)((long)param_3 + 0x14c) & 0xfffffff8 |
       *(uint *)((long)param_3 + 0x14c) & 3 | (param_5 & 1) << 2;
  *(uint *)((long)param_3 + 0x23c) =
       *(uint *)((long)param_3 + 0x23c) & 0xfffffff8 |
       *(uint *)((long)param_3 + 0x23c) & 3 | (param_5 & 1) << 2;
  (**(code **)(*param_3 + 0xe8))(param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3fb90(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((undefined8 *)param_3[0x55] != (undefined8 *)0x0) {
    uVar2 = (*(code *)**(undefined8 **)param_3[0x55])();
    local_40 = (**(code **)(*param_3 + 0x48))(param_3);
    uStack_3c = param_2;
    FUN_00f13f18(uVar2,&local_40);
    uVar2 = (*(code *)**(undefined8 **)param_3[0x55])();
    FUN_00f07940(0,0,uVar2,0,param_3,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3fc3c(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  (**(code **)(*param_3 + 0x48))();
  FUN_00f13f08(0x41f00000,param_3 + 0x19);
  FUN_00f13f08(0x41f00000,param_2,param_3 + 0x37);
  FUN_00f07940(0,0,param_3 + 0x19,1,param_3,0);
  FUN_00f07940(0,0,param_3 + 0x37,0,param_3,1);
  return;
}




void FUN_00c3fcd4(long param_1,ulong param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0x2a8) != 0) {
    puVar1 = &DAT_03210c70;
    if ((param_2 & 1) == 0) {
      puVar1 = &DAT_03210c74;
    }
    FUN_00f048e0(auStack_58,*puVar1,0);
    uVar3 = (**(code **)**(undefined8 **)(param_1 + 0x2a8))();
    FUN_00f04760(uVar3,auStack_58,0);
    if ((param_2 & 1) == 0) {
      pcVar4 = *(code **)(**(long **)(param_1 + 0x2a8) + 0x18);
    }
    else {
      pcVar4 = *(code **)(**(long **)(param_1 + 0x2a8) + 8);
    }
    (*pcVar4)();
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3fd8c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long **)(param_1 + 0x2a8) != (long *)0x0) {
    lVar3 = **(long **)(param_1 + 0x2a8);
    if ((param_2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00c3fdb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x10))();
      return;
    }
    (**(code **)(lVar3 + 0x20))();
    (**(code **)**(undefined8 **)(param_1 + 0x2a8))();
    uVar1 = FUN_00f02540();
    if ((uVar1 & 1) != 0) {
      uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x2a8))();
      FUN_00f01a4c(uVar2,1);
      return;
    }
  }
  return;
}




void FUN_00c3fe08(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f13ca4();
  lVar2 = 0xc0;
  param_3[0x17] = 0;
  *param_3 = (long)&PTR_FUN_027fb580;
  do {
    FUN_00c3f8ec((long)param_3 + lVar2);
    lVar2 = lVar2 + 0x2b0;
  } while (lVar2 != 0x620);
  lVar2 = 0xc0;
  *(undefined4 *)(param_3 + 0xc4) = 0;
  do {
    (**(code **)(*param_3 + 0x78))(param_3,(long)param_3 + lVar2,1);
    local_40 = (**(code **)(*param_3 + 0x48))(param_3);
    uStack_3c = param_2;
    FUN_00f13f18((long)param_3 + lVar2,&local_40);
    lVar2 = lVar2 + 0x2b0;
  } while (lVar2 != 0x620);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3fed4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027fb580;
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x370) = &PTR_FUN_027fb418;
    *(undefined ***)((long)param_1 + lVar1 + 0x528) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0x5e0) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0x5f8);
    FUN_00f13d08((long)param_1 + lVar1 + 0x528);
    *(undefined ***)((long)param_1 + lVar1 + 0x438) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0x4f0) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0x508);
    FUN_00f13d08((long)param_1 + lVar1 + 0x438);
    FUN_00f13d08((long)param_1 + lVar1 + 0x370);
    lVar1 = lVar1 + -0x2b0;
  } while (lVar1 != -0x560);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c3ffa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fb418;
  param_1[0x37] = &PTR_FUN_028266f0;
  param_1[0x4e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x51);
  FUN_00f13d08(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_028266f0;
  param_1[0x30] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x33);
  FUN_00f13d08(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}

