// functions/00c84 — 41 functions
#include "libGameKindred.h"




void FUN_00c8406c(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x50c) =
       *(uint *)(param_1 + 0x50c) & 0xfffffff8 | *(uint *)(param_1 + 0x50c) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00c84080(long param_1)

{
  FUN_00f0d75c(param_1 + 0x6d0);
  FUN_00c840a8(param_1);
  return;
}




void FUN_00c840a8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar1 = param_1 + 0x398;
  fVar8 = *(float *)(param_1 + 0x930);
  fVar5 = (float)FUN_00f0eac0(lVar1);
  fVar5 = (fVar8 - fVar5) + -32.0;
  lVar2 = param_1 + 0x6d0;
  if ((*(float *)(param_1 + 0x718) != 1.0) || (*(float *)(param_1 + 0x71c) != 1.0)) {
    uVar6 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x718) = uVar6;
    FUN_0091ada4(lVar2);
  }
  FUN_00f0dad0(fVar5,lVar2,1);
  FUN_00f0db64(fVar5,0,0x3f800000,lVar2);
  lVar3 = param_1 + 0x800;
  if ((*(float *)(param_1 + 0x848) != 1.0) || (*(float *)(param_1 + 0x84c) != 1.0)) {
    uVar6 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x848) = uVar6;
    FUN_0091ada4(lVar3);
  }
  FUN_00f0dad0(fVar5,lVar3,1);
  fVar8 = 0.0;
  FUN_00f0db64(fVar5,0,0x3f800000,lVar3);
  FUN_00f07b18(0x41000000,lVar3,0,lVar2,2);
  FUN_00f07b18(0,lVar3,3,lVar2,3);
  lVar2 = param_1 + 0x578;
  FUN_00f13238(lVar2);
  FUN_00f07b18(0xc2000000,lVar1,1,lVar2,3);
  FUN_00f07b18(0,lVar1,5,lVar2,5);
  local_60 = (float)FUN_00f0e700(lVar1);
  local_60 = local_60 * 0.8;
  fStack_5c = fVar8 * 0.8;
  FUN_00f13f18(param_1 + 0x488,&local_60);
  uVar7 = 0;
  FUN_00f07940(0,param_1 + 0x488,8,lVar1,8);
  FUN_00f13238(param_1 + 0x240);
  local_60 = (float)FUN_00f13e54(param_1 + 0x240);
  fStack_5c = (float)uVar7;
  FUN_00f13f18(param_1,&local_60);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c842a8(long param_1)

{
  FUN_00f0d75c(param_1 + 0x800);
  FUN_00c840a8(param_1);
  return;
}




void FUN_00c842d0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x930) = param_1;
  FUN_00c840a8();
  return;
}




void FUN_00c842d8(long *param_1,undefined4 param_2)

{
  long *plVar1;
  
  FUN_00f1306c();
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  plVar1 = param_1 + 0x2d;
  *(undefined4 *)((long)param_1 + 0x164) = 0;
  *param_1 = (long)&PTR_FUN_028047a8;
  param_1[0x2b] = (long)&PTR_FUN_02804910;
  FUN_00f0d160(plVar1);
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0x44480000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98,&DAT_01bee7fa);
  return;
}




void FUN_00c8436c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  
  uVar3 = *(uint *)(param_1 + 0x53);
  plVar1 = (long *)param_1[0x54];
  *param_1 = &PTR_FUN_028047a8;
  param_1[0x2b] = &PTR_FUN_02804910;
  plVar4 = plVar1;
  if (uVar3 != 0) {
    do {
      plVar2 = (long *)*plVar4;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        uVar3 = *(uint *)(param_1 + 0x53);
        plVar1 = (long *)param_1[0x54];
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1 + uVar3);
  }
  if (plVar1 != (long *)0x0) {
    operator_delete__(plVar1);
    param_1[0x53] = 0;
    param_1[0x54] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x2d);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c84414(long param_1)

{
  FUN_00c8436c(param_1 + -0x158);
  return;
}




void FUN_00c8441c(void *param_1)

{
  FUN_00c8436c();
  operator_delete(param_1);
  return;
}




void FUN_00c84440(long param_1)

{
  FUN_00c8436c((void *)(param_1 + -0x158));
  operator_delete((void *)(param_1 + -0x158));
  return;
}




void FUN_00c84468(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  void *pvVar2;
  void *local_80;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x938);
  FUN_00c83ebc();
  local_80 = pvVar2;
  FUN_00f0d75c((long)pvVar2 + 0x6d0,param_2);
  FUN_00c840a8(pvVar2);
  FUN_00f0d75c((long)pvVar2 + 0x800,param_3);
  FUN_00c840a8(pvVar2);
  local_58 = (ulong)*(uint *)(param_1 + 0x53);
  local_50 = DAT_03210c64;
  local_78 = FUN_00c84574;
  local_68 = 0;
  uStack_60 = 0;
  plStack_70 = param_1;
  FUN_009693a0((long)pvVar2 + 8,&local_78);
  FUN_00c8457c(param_1 + 0x53,&local_80);
  (**(code **)(*param_1 + 0x78))(param_1,local_80,1);
  if ((int)param_1[0x53] == 1) {
    FUN_00c84604(param_1,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c84574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00c84788(param_1,param_2,param_5);
  return;
}




void FUN_00c8457c(uint *param_1,undefined8 *param_2)

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
    FUN_00c861b4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c84604(long param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  *(uint *)(param_1 + 0x164) = param_2;
  if (*(int *)(param_1 + 0x298) != 0) {
    plVar4 = *(long **)(param_1 + 0x2a0);
    plVar2 = plVar4;
    do {
      plVar3 = plVar2 + 1;
      uVar1 = *(uint *)(*plVar2 + 0x50c);
      *(uint *)(*plVar2 + 0x50c) =
           uVar1 & 0xfffffff8 |
           uVar1 & 3 | (uint)((long)plVar2 - (long)plVar4 >> 3 == (ulong)param_2) << 2;
      plVar4 = *(long **)(param_1 + 0x2a0);
      plVar2 = plVar3;
    } while (plVar3 != plVar4 + *(uint *)(param_1 + 0x298));
  }
  return;
}




void FUN_00c84654(long param_1)

{
  FUN_00f0d75c(param_1 + 0x168);
  return;
}




void thunk_FUN_00c84604(long param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  *(uint *)(param_1 + 0x164) = param_2;
  if (*(int *)(param_1 + 0x298) != 0) {
    plVar4 = *(long **)(param_1 + 0x2a0);
    plVar2 = plVar4;
    do {
      plVar3 = plVar2 + 1;
      uVar1 = *(uint *)(*plVar2 + 0x50c);
      *(uint *)(*plVar2 + 0x50c) =
           uVar1 & 0xfffffff8 |
           uVar1 & 3 | (uint)((long)plVar2 - (long)plVar4 >> 3 == (ulong)param_2) << 2;
      plVar4 = *(long **)(param_1 + 0x2a0);
      plVar2 = plVar3;
    } while (plVar3 != plVar4 + *(uint *)(param_1 + 0x298));
  }
  return;
}




void FUN_00c84660(long param_1)

{
  FUN_00c84604(param_1 + -0x158);
  return;
}




void FUN_00c84668(undefined4 param_1,long *param_2)

{
  *(undefined4 *)(param_2 + 0x55) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00c84674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x138))();
  return;
}




void FUN_00c84678(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x150) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00c8468c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + -0x158) + 0x138))((long *)(param_2 + -0x158));
  return;
}




void FUN_00c84690(void)

{
  return;
}




long FUN_00c84694(long param_1)

{
  return param_1 + -0x158;
}




void FUN_00c8469c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (*(int *)(param_1 + 0x298) != 0) {
    plVar3 = *(long **)(param_1 + 0x2a0);
    do {
      *(undefined4 *)(*plVar3 + 0x930) = *(undefined4 *)(param_1 + 0x2a8);
      FUN_00c840a8();
      lVar1 = *plVar3;
      if (plVar3 == *(long **)(param_1 + 0x2a0)) {
        FUN_00f07b18(0x42000000,lVar1,0,param_1 + 0x168,2);
        lVar2 = param_1 + 0x168;
      }
      else {
        lVar2 = plVar3[-1];
        FUN_00f07b18(0x42000000,lVar1,0,lVar2,2);
      }
      FUN_00f07b18(0,lVar1,3,lVar2,3);
      plVar3 = plVar3 + 1;
    } while (plVar3 != (long *)(*(long *)(param_1 + 0x2a0) + (ulong)*(uint *)(param_1 + 0x298) * 8))
    ;
  }
  FUN_00f13238(param_1);
  return;
}




void FUN_00c84788(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00c84604(param_1,param_3);
  FUN_00f048e0(auStack_48,DAT_0313c544,param_1 + 0x164);
  FUN_00f04760(param_1,auStack_48,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c847f8(long *param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  FUN_00ecf178();
  plVar1 = param_1 + 0x4a;
  *(undefined4 *)(param_1 + 0x49) = param_2;
  *(undefined4 *)((long)param_1 + 0x24c) = 0;
  *param_1 = (long)&PTR_FUN_02804948;
  param_1[0x48] = (long)&PTR_FUN_02804ab8;
  FUN_00f1306c(plVar1);
  plVar2 = param_1 + 0x75;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x93;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0xb1;
  FUN_00f1306c(plVar4);
  plVar5 = param_1 + 0xdc;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0x102;
  FUN_00f0d160(plVar6);
  *(undefined4 *)(param_1 + 0x128) = 0x44480000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f133a4(plVar1,plVar2,1);
  FUN_00f133a4(plVar1,plVar3,1);
  FUN_00f133a4(plVar1,plVar4,1);
  FUN_00f133a4(plVar4,plVar5,1);
  FUN_00f133a4(plVar4,plVar6,1);
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"checkbox_hud_empty");
  FUN_00f0e548(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"checkbox_hud_filled");
  FUN_00f0d92c(plVar5,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98,&DAT_01bee7fa);
  local_88 = (code *)CONCAT44(local_88._4_4_,0xffc0c0c0);
  FUN_00f0d92c(plVar6,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&local_88);
  local_60 = DAT_03210c64;
  local_88 = thunk_FUN_00c84d1c;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 1,&local_88);
  *(uint *)((long)param_1 + 0x42c) = *(uint *)((long)param_1 + 0x42c) | 4;
  *(uint *)((long)param_1 + 0x51c) = *(uint *)((long)param_1 + 0x51c) & 0xfffffffb;
  *(undefined1 *)((long)param_1 + 0x24c) = 0;
  FUN_00ecf870(param_1,1);
  if (*(long *)(lVar7 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c84d1c(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x24c);
  *(uint *)(param_1 + 0x42c) = *(uint *)(param_1 + 0x42c) & 0xfffffffb | (uint)bVar1 << 2;
  *(byte *)(param_1 + 0x24c) = bVar1 ^ 1;
  *(uint *)(param_1 + 0x51c) =
       *(uint *)(param_1 + 0x51c) & 0xfffffffb | ((uint)bVar1 << 2 ^ 4) & 0xfc;
  FUN_00f048e0(auStack_48,DAT_0313c544,param_1 + 0x24c);
  FUN_00f04760(param_1,auStack_48,0);
  if (*(long *)(lVar2 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c84a00(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x42c) =
       *(uint *)(param_1 + 0x42c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x42c) & 3 | (~param_2 & 1) << 2;
  *(uint *)(param_1 + 0x51c) =
       *(uint *)(param_1 + 0x51c) & 0xfffffff8 | *(uint *)(param_1 + 0x51c) & 3 | (param_2 & 1) << 2
  ;
  *(char *)(param_1 + 0x24c) = (char)(param_2 & 1);
  return;
}




void FUN_00c84a2c(long param_1)

{
  FUN_00f0d75c(param_1 + 0x6e0);
  FUN_00c84a54(param_1);
  return;
}




void FUN_00c84a54(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar1 = param_1 + 0x3a8;
  if ((*(float *)(param_1 + 0x3f0) != 1.5) || (*(float *)(param_1 + 0x3f4) != 1.5)) {
    uVar6 = NEON_fmov(0x3fc00000,4);
    *(undefined8 *)(param_1 + 0x3f0) = uVar6;
    FUN_0091ada4(lVar1);
  }
  if ((*(float *)(param_1 + 0x4e0) != 1.5) || (*(float *)(param_1 + 0x4e4) != 1.5)) {
    uVar6 = NEON_fmov(0x3fc00000,4);
    *(undefined8 *)(param_1 + 0x4e0) = uVar6;
    FUN_0091ada4(param_1 + 0x498);
  }
  fVar8 = *(float *)(param_1 + 0x940);
  fVar5 = (float)FUN_00f0eac0(lVar1);
  fVar5 = (fVar8 - fVar5) + -32.0;
  lVar2 = param_1 + 0x6e0;
  if ((*(float *)(param_1 + 0x728) != 1.0) || (*(float *)(param_1 + 0x72c) != 1.0)) {
    uVar6 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x728) = uVar6;
    FUN_0091ada4(lVar2);
  }
  FUN_00f0dad0(fVar5,lVar2,1);
  FUN_00f0db64(fVar5,0,0x3f800000,lVar2);
  lVar3 = param_1 + 0x810;
  if ((*(float *)(param_1 + 0x858) != 1.0) || (*(float *)(param_1 + 0x85c) != 1.0)) {
    uVar6 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x858) = uVar6;
    FUN_0091ada4(lVar3);
  }
  FUN_00f0dad0(fVar5,lVar3,1);
  FUN_00f0db64(fVar5,0,0x3f800000,lVar3);
  FUN_00f07b18(0x41000000,lVar3,0,lVar2,2);
  FUN_00f07b18(0,lVar3,3,lVar2,3);
  lVar2 = param_1 + 0x588;
  FUN_00f13238(lVar2);
  FUN_00f07b18(0xc2000000,lVar1,1,lVar2,3);
  FUN_00f07b18(0,lVar1,5,lVar2,5);
  uVar7 = 0;
  FUN_00f07940(0,param_1 + 0x498,3,lVar1,3);
  FUN_00f13238(param_1 + 0x250);
  local_70 = FUN_00f13e54(param_1 + 0x250);
  uStack_6c = uVar7;
  FUN_00f13f18(param_1,&local_70);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c84c80(long param_1)

{
  FUN_00f0d75c(param_1 + 0x810);
  FUN_00c84a54(param_1);
  return;
}




void FUN_00c84ca8(long param_1,uint param_2)

{
  *(byte *)(param_1 + 0x24c) = (byte)param_2 & 1;
  *(uint *)(param_1 + 0x51c) =
       *(uint *)(param_1 + 0x51c) & 0xfffffff8 | *(uint *)(param_1 + 0x51c) & 3 | (param_2 & 1) << 2
  ;
  *(uint *)(param_1 + 0x42c) =
       (*(uint *)(param_1 + 0x42c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x42c) & 3 | (param_2 & 1) << 2) ^ 4;
  return;
}




void FUN_00c84cd0(long param_1,uint param_2)

{
  *(byte *)(param_1 + 0xc) = (byte)param_2 & 1;
  *(uint *)(param_1 + 0x2dc) =
       *(uint *)(param_1 + 0x2dc) & 0xfffffff8 | *(uint *)(param_1 + 0x2dc) & 3 | (param_2 & 1) << 2
  ;
  *(uint *)(param_1 + 0x1ec) =
       (*(uint *)(param_1 + 0x1ec) & 0xfffffff8 |
       *(uint *)(param_1 + 0x1ec) & 3 | (param_2 & 1) << 2) ^ 4;
  return;
}




void FUN_00c84cf8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x940) = param_1;
  FUN_00c84a54();
  return;
}




void FUN_00c84d00(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x700) = param_1;
  FUN_00c84a54(param_2 + -0x240);
  return;
}




void FUN_00c84d10(void)

{
  return;
}




long FUN_00c84d14(long param_1)

{
  return param_1 + -0x240;
}




void FUN_00c84d1c(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x24c);
  *(uint *)(param_1 + 0x42c) = *(uint *)(param_1 + 0x42c) & 0xfffffffb | (uint)bVar1 << 2;
  *(byte *)(param_1 + 0x24c) = bVar1 ^ 1;
  *(uint *)(param_1 + 0x51c) =
       *(uint *)(param_1 + 0x51c) & 0xfffffffb | ((uint)bVar1 << 2 ^ 4) & 0xfc;
  FUN_00f048e0(auStack_48,DAT_0313c544,param_1 + 0x24c);
  FUN_00f04760(param_1,auStack_48,0);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c84dbc(long *param_1)

{
  FUN_00ecf178();
  *param_1 = (long)&PTR_FUN_02804af0;
  FUN_00f0d160(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00c84e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x48,1);
  return;
}




void thunk_FUN_00c84e10(long *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  FUN_00f0db64(uVar1,0,0x3f800000,param_1 + 0x48);
  FUN_00f07940(0,0,param_1 + 0x48,7,param_1,7);
  return;
}




void FUN_00c84e10(long *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  FUN_00f0db64(uVar1,0,0x3f800000,param_1 + 0x48);
  FUN_00f07940(0,0,param_1 + 0x48,7,param_1,7);
  return;
}




void FUN_00c84e64(long param_1,ulong param_2)

{
  long lVar1;
  float fVar2;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = DAT_0313c3d8;
  if ((param_2 & 1) == 0) {
    local_3c = 0xffa0a0a0;
  }
  FUN_00f0d7fc(param_1 + 0x240,&local_3c);
  fVar2 = 1.2;
  if ((param_2 & 1) == 0) {
    fVar2 = 1.0;
  }
  if ((*(float *)(param_1 + 0x288) != fVar2) || (*(float *)(param_1 + 0x28c) != fVar2)) {
    *(float *)(param_1 + 0x288) = fVar2;
    *(float *)(param_1 + 0x28c) = fVar2;
    FUN_0091ada4(param_1 + 0x240);
  }
  FUN_00c84e10(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c84f24(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  code *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f13ca4();
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)((long)param_1 + 0xc4) = 0;
  *param_1 = &PTR_FUN_02804c48;
  param_1[0x17] = &PTR_FUN_02804db0;
  FUN_00f0d160(param_1 + 0x19);
  FUN_00f13ca4(param_1 + 0x3f);
  FUN_00f0c714(param_1 + 0x56);
  FUN_00f0e4a8(param_1 + 0x71);
  FUN_00f13ca4(param_1 + 0x8f);
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0x3f800000;
  local_68 = (code *)CONCAT62(local_68._2_6_,5);
  FUN_00f14070(param_1,&local_68);
  puVar1 = param_1 + 0x90;
  local_40 = DAT_03210f58;
  local_68 = FUN_00c850d0;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar1,&local_68);
  local_40 = DAT_03210f84;
  local_68 = FUN_00c850dc;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar1,&local_68);
  local_40 = DAT_03210f60;
  local_68 = thunk_FUN_00c859f8;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar1,&local_68);
  local_40 = DAT_03210f8c;
  local_68 = thunk_FUN_00c859f8;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar1,&local_68);
  local_40 = DAT_03210fa4;
  local_68 = thunk_FUN_00c85af0;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar1,&local_68);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

