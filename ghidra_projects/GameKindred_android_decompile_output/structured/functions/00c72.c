// functions/00c72 — 24 functions
#include "libGameKindred.h"




void thunk_FUN_00c72090(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0xb30) + 1;
  iVar2 = iVar1 % 3;
  *(int *)(param_1 + 0xb30) = iVar1;
  if (iVar2 == 2) {
    if ((*(byte *)(param_1 + 0xb10) & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0xb20);
      goto LAB_00c72128;
    }
    lVar3 = param_1 + 0xb10;
  }
  else if (iVar2 == 1) {
    if ((*(byte *)(param_1 + 0xaf8) & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0xb08);
      goto LAB_00c72128;
    }
    lVar3 = param_1 + 0xaf8;
  }
  else {
    if (iVar2 != 0) {
      return;
    }
    if ((*(byte *)(param_1 + 0xae0) & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0xaf0);
      goto LAB_00c72128;
    }
    lVar3 = param_1 + 0xae0;
  }
  lVar3 = lVar3 + 1;
LAB_00c72128:
  FUN_00f0e578(param_1 + 0x598,lVar3);
  return;
}




void FUN_00c72060(void *param_1)

{
  FUN_00c71ef8();
  operator_delete(param_1);
  return;
}




void FUN_00c72084(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xb28) = param_1;
  *(undefined4 *)(param_3 + 0xb2c) = param_2;
  FUN_00c71ad4();
  return;
}




void FUN_00c72090(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0xb30) + 1;
  iVar2 = iVar1 % 3;
  *(int *)(param_1 + 0xb30) = iVar1;
  if (iVar2 == 2) {
    if ((*(byte *)(param_1 + 0xb10) & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0xb20);
      goto LAB_00c72128;
    }
    lVar3 = param_1 + 0xb10;
  }
  else if (iVar2 == 1) {
    if ((*(byte *)(param_1 + 0xaf8) & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0xb08);
      goto LAB_00c72128;
    }
    lVar3 = param_1 + 0xaf8;
  }
  else {
    if (iVar2 != 0) {
      return;
    }
    if ((*(byte *)(param_1 + 0xae0) & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0xaf0);
      goto LAB_00c72128;
    }
    lVar3 = param_1 + 0xae0;
  }
  lVar3 = lVar3 + 1;
LAB_00c72128:
  FUN_00f0e578(param_1 + 0x598,lVar3);
  return;
}




void FUN_00c72130(uint *param_1,uint param_2)

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




void FUN_00c721b0(uint *param_1,uint param_2)

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




void FUN_00c72230(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_50 [2];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x1a;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *param_1 = (long)&PTR_FUN_02801a60;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x40;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x66;
  FUN_00ed66ec(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00ed5664(plVar3,plVar1,1);
  FUN_00ed5664(plVar3,plVar2,1);
  local_50[0] = CONCAT31(local_50[0]._1_3_,9);
  FUN_00ed5ab0(plVar3,local_50);
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  uVar5 = FUN_00e6ce7c("INVENTORY_CHARMS_TITLE",0);
  FUN_00f0d75c(plVar1,uVar5);
  local_50[0] = 0xffb6acaa;
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,local_50);
  uVar5 = FUN_00e6ce7c("INVENTORY_CHARMS_INSTRUCTION",0);
  FUN_00f0d75c(plVar2,uVar5);
  FUN_00f0dac8(plVar2,3);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c72394(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  long *plVar4;
  
  *param_1 = &PTR_FUN_02801a60;
  puVar3 = (uint *)(param_1 + 0x18);
  uVar2 = *puVar3;
  plVar1 = (long *)param_1[0x19];
  plVar4 = plVar1;
  if (uVar2 != 0) {
    do {
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 8))();
        uVar2 = *(uint *)(param_1 + 0x18);
        plVar1 = (long *)param_1[0x19];
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1 + uVar2);
  }
  if (plVar1 != (long *)0x0) {
    *puVar3 = 0;
  }
  thunk_FUN_00ed5534(param_1 + 0x66);
  FUN_00f0d3a4(param_1 + 0x40);
  FUN_00f0d3a4(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    puVar3[0] = 0;
    puVar3[1] = 0;
    param_1[0x19] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c7243c(void *param_1)

{
  FUN_00c72394();
  operator_delete(param_1);
  return;
}




void FUN_00c72460(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  plVar1 = param_3 + 0x66;
  uStack_7c = param_2;
  local_80 = (**(code **)(*param_3 + 0x48))();
  FUN_00f13f18(plVar1,&local_80);
  plVar2 = param_3 + 0x40;
  fVar8 = (float)FUN_00f13e54(plVar1);
  FUN_00f0dad0(fVar8 + -20.0,plVar2,1);
  FUN_00f07940(0,0,param_3 + 0x1a,4,plVar1,4);
  FUN_00f07940(0x41200000,0x41f00000,plVar2,4,param_3 + 0x1a,6);
  if ((int)param_3[0x18] != 0) {
    uVar7 = 0;
    uVar5 = 0;
    do {
      uVar6 = *(undefined8 *)(param_3[0x19] + uVar7 * 8);
      fVar8 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      fVar9 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      FUN_00f13f08((fVar8 + -80.0) / 6.0,fVar9 / 6.0,uVar6);
      if (uVar7 == 0) {
        FUN_00f07940(0,0x41200000,*(undefined8 *)param_3[0x19],0,plVar2,3);
        puVar4 = (undefined8 *)param_3[0x19];
        uVar5 = *puVar4;
      }
      else {
        uVar6 = *(undefined8 *)(param_3[0x19] + uVar7 * 8);
        if ((int)((uVar7 & 0xffffffff) / 6) * 6 == (int)uVar7) {
          FUN_00f07940(0,0,uVar6,0,uVar5,3);
          puVar4 = (undefined8 *)param_3[0x19];
          uVar5 = puVar4[uVar7];
        }
        else {
          FUN_00f07940(0x41200000,0,uVar6,7,
                       *(undefined8 *)(param_3[0x19] + (ulong)((int)uVar7 - 1) * 8),5);
          puVar4 = (undefined8 *)param_3[0x19];
        }
      }
      (**(code **)(*(long *)puVar4[uVar7] + 0x138))();
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_3 + 0x18));
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c72668(long param_1,uint *param_2)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*param_2 != 0) {
    uVar3 = 0;
    do {
      pvVar2 = operator_new(0x478);
      FUN_00c72878();
      local_60 = pvVar2;
      FUN_00c72734(pvVar2,*(undefined8 *)(*(long *)(param_2 + 2) + uVar3 * 8));
      FUN_00c727ec(param_1 + 0xc0,&local_60);
      FUN_00ed5664(param_1 + 0x330,local_60,1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *param_2);
  }
  FUN_00c72460(param_1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c72734(long param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1 + 0x388;
  *(long *)(param_1 + 0x148) = param_2;
  FUN_00f0e628(lVar1);
  FUN_00cac518(local_50,param_2 + 0x18);
  pvVar2 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar2 = local_40;
  }
  FUN_00f0e540(lVar1,pvVar2);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
    param_2 = param_2 + 0x31;
  }
  else {
    param_2 = *(long *)(param_2 + 0x40);
  }
  FUN_00f0e578(lVar1,param_2);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c727ec(uint *param_1,undefined8 *param_2)

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
    FUN_00c72dbc(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void thunk_FUN_00c72460(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  
  lVar3 = tpidr_el0;
  lStack_78 = *(long *)(lVar3 + 0x28);
  plVar1 = param_3 + 0x66;
  uStack_7c = param_2;
  uStack_80 = (**(code **)(*param_3 + 0x48))();
  FUN_00f13f18(plVar1,&uStack_80);
  plVar2 = param_3 + 0x40;
  fVar8 = (float)FUN_00f13e54(plVar1);
  FUN_00f0dad0(fVar8 + -20.0,plVar2,1);
  FUN_00f07940(0,0,param_3 + 0x1a,4,plVar1,4);
  FUN_00f07940(0x41200000,0x41f00000,plVar2,4,param_3 + 0x1a,6);
  if ((int)param_3[0x18] != 0) {
    uVar7 = 0;
    uVar5 = 0;
    do {
      uVar6 = *(undefined8 *)(param_3[0x19] + uVar7 * 8);
      fVar8 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      fVar9 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      FUN_00f13f08((fVar8 + -80.0) / 6.0,fVar9 / 6.0,uVar6);
      if (uVar7 == 0) {
        FUN_00f07940(0,0x41200000,*(undefined8 *)param_3[0x19],0,plVar2,3);
        puVar4 = (undefined8 *)param_3[0x19];
        uVar5 = *puVar4;
      }
      else {
        uVar6 = *(undefined8 *)(param_3[0x19] + uVar7 * 8);
        if ((int)((uVar7 & 0xffffffff) / 6) * 6 == (int)uVar7) {
          FUN_00f07940(0,0,uVar6,0,uVar5,3);
          puVar4 = (undefined8 *)param_3[0x19];
          uVar5 = puVar4[uVar7];
        }
        else {
          FUN_00f07940(0x41200000,0,uVar6,7,
                       *(undefined8 *)(param_3[0x19] + (ulong)((int)uVar7 - 1) * 8),5);
          puVar4 = (undefined8 *)param_3[0x19];
        }
      }
      (**(code **)(*(long *)puVar4[uVar7] + 0x138))();
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_3 + 0x18));
  }
  if (*(long *)(lVar3 + 0x28) == lStack_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c72878(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00f0ac5c();
  plVar1 = param_1 + 0x2a;
  param_1[0x29] = 0;
  *param_1 = (long)&PTR_FUN_02801ba8;
  FUN_00f0ac5c(plVar1);
  plVar2 = param_1 + 0x53;
  FUN_00f0e4a8(plVar2);
  FUN_00f0e4a8(param_1 + 0x71);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0ad88(plVar1,plVar2,1);
  FUN_00f0ad88(plVar1,param_1 + 0x71,1);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"speech_bubble_deselected");
  uVar3 = *(uint *)((long)param_1 + 0x31c);
  if ((uVar3 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x31c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x2600;
    FUN_0091ada4(plVar2);
  }
  local_50 = DAT_03210f60;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  local_78 = thunk_FUN_00c72d30;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 1,&local_78);
  local_78 = thunk_FUN_00c72d30;
  local_50 = DAT_03210f8c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 1,&local_78);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c72d30(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  byte abStack_60 [16];
  void *pvStack_50;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_008fcdb8(abStack_60,*(undefined8 *)(param_1 + 0x148));
  uVar2 = FUN_00f048a4("EVENT_ACTIVATE_CHARM");
  FUN_00f048e0(auStack_48,uVar2,abStack_60);
  FUN_00f04760(param_1,auStack_48,1);
  if ((abStack_60[0] & 1) != 0) {
    operator_delete(pvStack_50);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c729f0(undefined8 *param_1)

{
  param_1[0x29] = 0;
  *param_1 = &PTR_FUN_02801ba8;
  param_1[0x71] = &PTR_FUN_028266f0;
  param_1[0x88] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8b);
  FUN_00f13d08(param_1 + 0x71);
  param_1[0x53] = &PTR_FUN_028266f0;
  param_1[0x6a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6d);
  FUN_00f13d08(param_1 + 0x53);
  param_1[0x2a] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x41);
  FUN_00f13d08(param_1 + 0x2a);
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c72aa4(void *param_1)

{
  FUN_00c729f0();
  operator_delete(param_1);
  return;
}




void FUN_00c72ac8(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar1 = param_3 + 0x2a;
  local_50 = (**(code **)(*param_3 + 0x48))();
  uStack_4c = param_2;
  FUN_00f13f18(plVar1,&local_50);
  plVar2 = param_3 + 0x53;
  fVar4 = (float)FUN_00f13e54(plVar1);
  fVar5 = (float)FUN_00f0eaf4(plVar2);
  fVar5 = (fVar4 * 0.8) / fVar5;
  if ((*(float *)(param_3 + 0x5c) != fVar5) || (*(float *)((long)param_3 + 0x2e4) != fVar5)) {
    *(float *)(param_3 + 0x5c) = fVar5;
    *(float *)((long)param_3 + 0x2e4) = fVar5;
    FUN_0091ada4(plVar2);
  }
  FUN_00f07940(0,0,plVar2,8,plVar1,8);
  FUN_00f07940(0,0xc1200000,param_3 + 0x71,8,plVar2,8);
  FUN_00c72bc8(param_3);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c72bc8(long param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x148) + 0x60);
  if (iVar1 == 3) {
    FUN_00f0e578(param_1 + 0x298,"speech_bubble_deselected");
    uVar2 = *(uint *)(param_1 + 0x31c);
    if ((uVar2 & 0x7f80) != 0x2600) {
      *(uint *)(param_1 + 0x31c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x2600;
      FUN_0091ada4(param_1 + 0x298);
    }
    uVar2 = *(uint *)(param_1 + 0x40c);
    if ((uVar2 & 0x7f80) != 0x2600) {
      uVar2 = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x2600;
LAB_00c72ca0:
      *(uint *)(param_1 + 0x40c) = uVar2;
      FUN_0091ada4(param_1 + 0x388);
    }
  }
  else {
    if (iVar1 == 2) {
      FUN_00f0e578(param_1 + 0x298,"speech_bubble_deselected");
      if ((~*(uint *)(param_1 + 0x31c) & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x31c) = *(uint *)(param_1 + 0x31c) | 0x7f80;
        FUN_0091ada4(param_1 + 0x298);
      }
      if ((~*(uint *)(param_1 + 0x40c) & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x40c) = *(uint *)(param_1 + 0x40c) | 0x7f80;
        FUN_0091ada4(param_1 + 0x388);
      }
      uVar2 = *(uint *)(param_1 + 0x84) | 0x10;
      goto LAB_00c72d10;
    }
    if (iVar1 != 0) {
      return;
    }
    FUN_00f0e578(param_1 + 0x298,"speech_bubble_selected");
    if ((~*(uint *)(param_1 + 0x31c) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x31c) = *(uint *)(param_1 + 0x31c) | 0x7f80;
      FUN_0091ada4(param_1 + 0x298);
    }
    if ((~*(uint *)(param_1 + 0x40c) & 0x7f80) != 0) {
      uVar2 = *(uint *)(param_1 + 0x40c) | 0x7f80;
      goto LAB_00c72ca0;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x84) & 0xffffffef;
LAB_00c72d10:
  *(uint *)(param_1 + 0x84) = uVar2;
  return;
}




void FUN_00c72d24(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c72d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_00c72d30(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  byte local_60 [16];
  void *local_50;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fcdb8(local_60,*(undefined8 *)(param_1 + 0x148));
  uVar2 = FUN_00f048a4("EVENT_ACTIVATE_CHARM");
  FUN_00f048e0(auStack_48,uVar2,local_60);
  FUN_00f04760(param_1,auStack_48,1);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c72dbc(uint *param_1,uint param_2)

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




void FUN_00c72e3c(long *param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_88 [2];
  long local_80;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  FUN_00f13ca4();
  plVar6 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_02801cf8;
  FUN_00f10d7c(plVar6);
  plVar1 = param_1 + 0x38;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x56;
  FUN_00f11234(plVar2);
  plVar3 = param_1 + 0x8a;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0xa8;
  FUN_00f0fe84(plVar4);
  if ((param_3 & 1) == 0) {
    (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
    (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
    FUN_00a9bbc4(plVar6,param_2);
    if ((*(float *)(param_1 + 0x21) != 0.5) || (*(float *)((long)param_1 + 0x10c) != 0.5)) {
      param_1[0x21] = 0x3f0000003f000000;
      FUN_0091ada4(plVar6);
    }
    FUN_00f10dc8(plVar6,PTR_s_build___Frames_tga_02be35e0,"frame_mask");
    FUN_00f0e698(plVar6,0xb);
    FUN_00f0e9c0(plVar6,1);
    FUN_00f0e548(plVar1,PTR_s_build___Frames_tga_02be35e0,"frame_0_star");
    if ((*(float *)(param_1 + 0x42) != 0.5) || (*(float *)((long)param_1 + 0x214) != 0.5)) {
      param_1[0x42] = 0x3f0000003f000000;
      FUN_0091ada4(plVar1);
    }
    if ((*(float *)(param_1 + 0x41) != 1.68) || (*(float *)((long)param_1 + 0x20c) != 1.68)) {
      param_1[0x41] = 0x3fd70a3d3fd70a3d;
      FUN_0091ada4(plVar1);
    }
    FUN_00f0e670(plVar1,&DAT_01bbe6f4,2);
    FUN_00f0e9c0(plVar1,1);
  }
  else {
    (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
    FUN_00f023ec(plVar2,plVar3,1);
    (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
    FUN_00f112f0(plVar2,1);
    if ((*(float *)(param_1 + 0x5f) != 1.02) || (*(float *)((long)param_1 + 0x2fc) != 0.94)) {
      param_1[0x5f] = 0x3f70a3d73f828f5c;
      FUN_0091ada4(plVar2);
    }
    FUN_00f0e548(plVar3,PTR_s_build___DailyLogin_7Day_tga_02be35d8,param_2);
    FUN_00f0e9c0(plVar3,1);
    FUN_00f0ff6c(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530);
    FUN_00f0ff74(plVar4,"button_lively_glow_top_left",0,0,0,"button_lively_glow_top_middle",0,0,0,
                 "button_lively_glow_top_left",1,0,0,"button_lively_glow_middle_left",0,0,0,0,0,0,0,
                 "button_lively_glow_middle_left",1,0,0,"button_lively_glow_bottom_left",0,0,0,
                 "button_lively_glow_bottom_middle",0,0,0,"button_lively_glow_bottom_left",1,0,0);
    if ((*(float *)(param_1 + 0xb1) != 1.6) || (*(float *)((long)param_1 + 0x58c) != 1.6)) {
      param_1[0xb1] = 0x3fcccccd3fcccccd;
      FUN_0091ada4(plVar4);
    }
    local_88[0] = 0xff553e37;
    FUN_00f105ec(plVar4,local_88,2);
    if ((*(float *)(param_1 + 0xb2) != 0.5) || (*(float *)((long)param_1 + 0x594) != 0.5)) {
      param_1[0xb2] = 0x3f0000003f000000;
      FUN_0091ada4(plVar4);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

