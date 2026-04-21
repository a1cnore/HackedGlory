// functions/00c6a — 22 functions
#include "libGameKindred.h"




void FUN_00c6a138(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0xb0);
  *param_1 = &PTR_FUN_028006c8;
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(param_1[0xb1] + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(param_1[0xb1] + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0xb0);
        puVar3 = (undefined8 *)(param_1[0xb1] + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if ((void *)param_1[0xb1] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    operator_delete__((void *)param_1[0xb1]);
    param_1[0xb0] = 0;
    param_1[0xb1] = 0;
  }
  param_1[0x92] = &PTR_FUN_028266f0;
  param_1[0xa9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xac);
  FUN_00f13d08(param_1 + 0x92);
  FUN_00f0d3a4(param_1 + 0x6c);
  FUN_00f0d3a4(param_1 + 0x46);
  FUN_00f13d08(param_1 + 0x2f);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c6a224(void *param_1)

{
  FUN_00c6a138();
  operator_delete(param_1);
  return;
}




void FUN_00c6a248(long param_1)

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
  FUN_00c69ed4(param_1);
  return;
}




void FUN_00c6a2cc(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  void *pvVar2;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x870);
  FUN_00c693f0();
  local_50 = pvVar2;
  FUN_00c69ac0(pvVar2,param_2,param_3 & 1,param_4);
  FUN_00c6a378(param_1 + 0x580,&local_50);
  FUN_00f023ec(param_1 + 0xc0,local_50,1);
  FUN_00c69ed4(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6a378(uint *param_1,undefined8 *param_2)

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
    FUN_00c6a40c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c6a400(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x590) = param_1;
  *(undefined4 *)(param_3 + 0x594) = param_2;
  FUN_00c69ed4();
  return;
}




void FUN_00c6a40c(uint *param_1,uint param_2)

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




void FUN_00c6a48c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  
  FUN_00f0ac5c();
  plVar1 = param_1 + 0x2a;
  *param_1 = (long)&PTR_FUN_02800810;
  param_1[0x29] = (long)&PTR_FUN_02800968;
  FUN_00f0ac5c(plVar1);
  plVar2 = param_1 + 0x53;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x79;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x9f;
  FUN_00f0e4a8(plVar4);
  FUN_00a889c8(param_1 + 0xbd);
  param_1[199] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0ad88(plVar1,plVar4,1);
  FUN_00f0ad88(plVar1,plVar3,1);
  FUN_00f0ad88(plVar1,plVar2,1);
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bee7fa);
  FUN_00f0dac8(plVar3,3);
  uVar5 = *(uint *)((long)param_1 + 0x44c);
  if ((uVar5 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x44c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6600;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  FUN_00f0dac8(plVar2,3);
  uVar5 = *(uint *)((long)param_1 + 0x31c);
  if ((uVar5 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x31c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6600;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e540(plVar4,"build://Keys.atlas");
                    /* WARNING: Could not recover jumptable at 0x00c6a610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00c6a614(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02800810;
  param_1[0x29] = &PTR_FUN_02800968;
  if ((*(byte *)(param_1 + 0xc3) & 1) != 0) {
    operator_delete((void *)param_1[0xc5]);
  }
  if ((*(byte *)(param_1 + 0xc0) & 1) != 0) {
    operator_delete((void *)param_1[0xc2]);
  }
  if ((*(byte *)(param_1 + 0xbd) & 1) != 0) {
    operator_delete((void *)param_1[0xbf]);
  }
  param_1[0x9f] = &PTR_FUN_028266f0;
  param_1[0xb6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb9);
  FUN_00f13d08(param_1 + 0x9f);
  FUN_00f0d3a4(param_1 + 0x79);
  FUN_00f0d3a4(param_1 + 0x53);
  param_1[0x2a] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x41);
  FUN_00f13d08(param_1 + 0x2a);
  param_1[0x29] = &PTR_FUN_027e0a68;
  FUN_0096bd60(param_1 + 0x29);
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c6a70c(long param_1)

{
  FUN_00c6a614(param_1 + -0x148);
  return;
}




void FUN_00c6a714(void *param_1)

{
  FUN_00c6a614();
  operator_delete(param_1);
  return;
}




void FUN_00c6a738(long param_1)

{
  FUN_00c6a614((void *)(param_1 + -0x148));
  operator_delete((void *)(param_1 + -0x148));
  return;
}




void FUN_00c6a760(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00f13f18(param_1,param_1 + 0x638);
  FUN_00f13f18(param_1 + 0x150,param_1 + 0x638);
  lVar1 = param_1 + 0x4f8;
  local_50 = *(float *)(param_1 + 0x638) * 0.6;
  fStack_4c = local_50;
  FUN_00f13f18(lVar1,&local_50);
  FUN_00f0dad0(*(undefined4 *)(param_1 + 0x638),param_1 + 0x298,1);
  fVar3 = (float)FUN_00f0e700(lVar1);
  FUN_00f0dad0(fVar3 * 0.5,param_1 + 0x3c8,1);
  FUN_00f07940(0,0,lVar1,4,param_1 + 0x150,4);
  FUN_00f07940(0,0,param_1 + 0x298,4,lVar1,6);
  FUN_00f07940(0xc1200000,0xc1f00000,param_1 + 0x3c8,2,lVar1,2);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6a87c(long *param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  byte local_98 [16];
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_008fce60(param_1 + 0xbd);
  FUN_008fce60(param_1 + 0xc0,param_2 + 0x18);
  FUN_008fce60(param_1 + 0xc3,param_2 + 0x30);
  *(undefined4 *)(param_1 + 0xc6) = *(undefined4 *)(param_2 + 0x48);
  FUN_008fcdb8(local_60,param_1 + 0xc0);
  pvVar1 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar1 = local_50;
  }
  uVar3 = FUN_00e6ce7c(pvVar1,0);
  FUN_00f0d75c(param_1 + 0x53,uVar3);
  FUN_00e705c8(&local_70,&DAT_01beeefc);
  FUN_00e70510(&local_80);
  FUN_00e70e18(&local_80,&DAT_01bb6d43,(int)param_1[0xc6]);
  FUN_00e70c34(&local_70,&local_80);
  FUN_00f0d75c(param_1 + 0x79,&local_70);
  FUN_008fcdb8(local_98,param_1 + 0xc3);
  pvVar1 = (void *)((ulong)local_98 | 1);
  if ((local_98[0] & 1) != 0) {
    pvVar1 = local_88;
  }
  FUN_00f0e578(param_1 + 0x9f,pvVar1);
  (**(code **)(*param_1 + 0x138))(param_1);
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6aa00(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)(param_3 + 199) = param_1;
  *(undefined4 *)((long)param_3 + 0x63c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00c6aa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x138))();
  return;
}




void FUN_00c6aa14(void)

{
  return;
}




void FUN_00c6aa18(void)

{
  return;
}




void FUN_00c6aa1c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_02800990;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x2f;
  FUN_00f13ca4(plVar2);
  plVar3 = param_1 + 0x46;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x6c;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0x92;
  FUN_00f0e4a8(plVar5);
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,plVar5,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar5,&DAT_01bee7f6,2);
  if ((*(uint *)((long)param_1 + 0x514) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x514) = *(uint *)((long)param_1 + 0x514) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  uVar6 = FUN_00e6ce7c("INVENTORY_KEY_SECTION_TITLE",0);
  FUN_00f0d75c(plVar3,uVar6);
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bee7fa);
  uVar6 = FUN_00e6ce7c("INVENTORY_NO_KEY_INSTRUCTION",0);
  FUN_00f0d75c(plVar4,uVar6);
  FUN_00f0dac8(plVar4,3);
  *(uint *)((long)param_1 + 0x3e4) = *(uint *)((long)param_1 + 0x3e4) & 0xfffffffb;
  FUN_00c6abe4(param_1);
  return;
}




void FUN_00c6abe4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  FUN_00f13f18(param_1 + 0xc0,param_1 + 0x590);
  uVar6 = 0x42f00000;
  lVar1 = param_1 + 0x178;
  FUN_00f13f08(*(undefined4 *)(param_1 + 0x590),lVar1);
  local_90 = FUN_00f13e54(lVar1);
  uStack_8c = uVar6;
  FUN_00f13f18(param_1 + 0x490,&local_90);
  uVar7 = FUN_00f13e54(lVar1);
  FUN_00f0db64(uVar7,0,0x3f800000,param_1 + 0x230);
  FUN_00f0dad0(*(float *)(param_1 + 0x590) + -20.0,param_1 + 0x360,1);
  FUN_00f07940(0x41a00000,0x41a00000,param_1 + 0x360,0,lVar1,3);
  if (*(int *)(param_1 + 0x580) != 0) {
    fVar9 = (*(float *)(param_1 + 0x590) + -60.0) * 0.2;
    uVar5 = 0;
    lVar4 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x588) + uVar5 * 8);
      FUN_00f13f08(fVar9,fVar9 * 0.8,lVar3);
      if (uVar5 == 0) {
        FUN_00f07b18(0,lVar3,0,lVar1,2);
        lVar4 = lVar1;
        uVar7 = 0x41200000;
LAB_00c6ad90:
        FUN_00f07b18(uVar7,lVar3,3,lVar4,3);
        lVar4 = lVar3;
      }
      else {
        if ((int)((uVar5 & 0xffffffff) / 5) * 5 == (int)uVar5) {
          FUN_00f07b18(0x41200000,lVar3,0,lVar4,2);
          uVar7 = 0;
          goto LAB_00c6ad90;
        }
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x588) + (ulong)((int)uVar5 - 1) * 8);
        FUN_00f07b18(0x41200000,lVar3,3,uVar7,1);
        FUN_00f07b18(0,lVar3,0,uVar7,0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x580));
  }
  uVar8 = 0;
  FUN_00f07940(0,param_1 + 0x230,8,lVar1,8);
  *(uint *)(param_1 + 0x3e4) =
       *(uint *)(param_1 + 0x3e4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x3e4) & 3 | (uint)(*(int *)(param_1 + 0x580) == 0) << 2;
  uVar6 = FUN_00f01c54(param_1 + 0xc0,0,0,1,1);
  *(undefined4 *)(param_1 + 0x590) = uVar6;
  *(undefined4 *)(param_1 + 0x594) = uVar8;
  FUN_00f13f18(param_1,param_1 + 0x590);
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6ae8c(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0xb0);
  *param_1 = &PTR_FUN_02800990;
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(param_1[0xb1] + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(param_1[0xb1] + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0xb0);
        puVar3 = (undefined8 *)(param_1[0xb1] + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if ((void *)param_1[0xb1] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    operator_delete__((void *)param_1[0xb1]);
    param_1[0xb0] = 0;
    param_1[0xb1] = 0;
  }
  param_1[0x92] = &PTR_FUN_028266f0;
  param_1[0xa9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xac);
  FUN_00f13d08(param_1 + 0x92);
  FUN_00f0d3a4(param_1 + 0x6c);
  FUN_00f0d3a4(param_1 + 0x46);
  FUN_00f13d08(param_1 + 0x2f);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c6af78(void *param_1)

{
  FUN_00c6ae8c();
  operator_delete(param_1);
  return;
}




void FUN_00c6af9c(long param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x640);
  FUN_00c6a48c();
  local_40 = pvVar2;
  FUN_00c6a87c(pvVar2,param_2);
  FUN_00c6b030(param_1 + 0x580,&local_40);
  FUN_00f023ec(param_1 + 0xc0,local_40,1);
  FUN_00c6abe4(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

