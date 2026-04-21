// functions/00c6e — 25 functions
#include "libGameKindred.h"




void FUN_00c6e0d0(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm(1.0 - param_1,0x3f800000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_2 + 0x19d0) = fVar1;
  *(uint *)(param_2 + 0x5c4) =
       *(uint *)(param_2 + 0x5c4) & 0xfffffff8 |
       *(uint *)(param_2 + 0x5c4) & 3 | (uint)(0.025 < fVar1) << 2;
  return;
}




void FUN_00c6e108(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)(param_3 + 0x247) = param_1;
  *(undefined4 *)((long)param_3 + 0x123c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00c6e118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x138))();
  return;
}




void FUN_00c6e11c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_80;
  float fStack_7c;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  iVar5 = *(int *)(param_1 + 0x1218);
  if (iVar5 == 0) {
    if ((*(float *)(param_1 + 0x19d4) < 0.01) && (*(int *)(param_1 + 0x19e8) < 1))
    goto LAB_00c6e190;
  }
  else if ((iVar5 == 3) ||
          ((iVar5 == 1 &&
           ((0.01 <= *(float *)(param_1 + 0x19d4) || (0 < *(int *)(param_1 + 0x19e8))))))) {
LAB_00c6e190:
    *(undefined1 *)(param_1 + 0x19ed) = 1;
    if (*(long **)(param_1 + 0xa78) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xa78) + 8))();
    }
    *(undefined8 *)(param_1 + 0xa78) = 0;
    pvVar7 = operator_new(0x24f8);
    FUN_00b0bb00(pvVar7,param_1 + 0x1180);
    *(void **)(param_1 + 0xa78) = pvVar7;
    FUN_00f0ad88(param_1 + 0x148,pvVar7,1);
    goto LAB_00c6e224;
  }
  *(undefined1 *)(param_1 + 0x19ed) = 0;
LAB_00c6e224:
  FUN_00f13f18(param_1,param_1 + 0x1238);
  FUN_00f13f18(param_1 + 0x148,param_1 + 0x1238);
  lVar8 = param_1 + 0x290;
  fVar10 = *(float *)(param_1 + 0x1238) * 0.8;
  FUN_00f13f08(lVar8);
  local_80 = FUN_00f0e700(lVar8);
  fStack_7c = fVar10;
  FUN_00f13f18(param_1 + 0x450,&local_80);
  lVar1 = param_1 + 0x540;
  fVar11 = (float)FUN_00f0e700(lVar8);
  fVar10 = (float)FUN_00f0e700(lVar1);
  fVar11 = fVar11 / fVar10;
  if ((*(float *)(param_1 + 0x588) != fVar11) || (*(float *)(param_1 + 0x58c) != fVar11)) {
    *(float *)(param_1 + 0x588) = fVar11;
    *(float *)(param_1 + 0x58c) = fVar11;
    FUN_0091ada4(lVar1);
  }
  lVar9 = param_1 + 0x640;
  *(undefined4 *)(param_1 + 0x19b4) = *(undefined4 *)(param_1 + 0x1238);
  FUN_00f0db64(*(undefined4 *)(param_1 + 0x1238),0,0x3f800000,lVar9);
  lVar2 = param_1 + 0x988;
  FUN_00f13f08(0x42480000,0x42480000,lVar2);
  fVar11 = *(float *)(param_1 + 0x1238);
  lVar3 = param_1 + 0x828;
  fVar10 = (float)FUN_00f0e700(lVar2);
  FUN_00f0db64((fVar11 - (fVar10 + fVar10)) + -20.0,0,0x3f800000,lVar3);
  uVar13 = *(undefined4 *)(param_1 + 0x123c);
  FUN_00f13f08(*(undefined4 *)(param_1 + 0x1238),param_1 + 0xca8);
  uVar12 = FUN_00f0eac0(lVar1);
  *(undefined4 *)(param_1 + 0x1178) = uVar12;
  lVar4 = param_1 + 0x770;
  *(uint *)(param_1 + 0x7f4) =
       *(uint *)(param_1 + 0x7f4) & 0xfffffffb | (uint)*(byte *)(param_1 + 0x19ec) << 2;
  local_80 = FUN_00f01c54(lVar4,0,0,1,1);
  fStack_7c = (float)uVar13;
  FUN_00f13f18(lVar4,&local_80);
  FUN_00f07940(0,0x41a00000,lVar8,4,param_1 + 0x148,4);
  FUN_00f07940(0,0,param_1 + 0x450,8,lVar8,8);
  FUN_00f07940(0,0,lVar1,8,lVar8,8);
  FUN_00f07b18(0,lVar9,0,lVar8,2);
  FUN_00f07b18(0,lVar9,4,lVar8,4);
  FUN_00f07940(0,0,param_1 + 0x1240,1,lVar8,1);
  lVar8 = *(long *)(param_1 + 0xa78);
  if (lVar8 == 0) {
    FUN_00f07b18(0,lVar4,0,lVar9,2);
  }
  else {
    FUN_00f07b18(0x41200000,lVar8,0,lVar9,2);
    FUN_00f07b18(0,lVar8,4,lVar9,4);
    lVar9 = *(long *)(param_1 + 0xa78);
    FUN_00f07b18(0,lVar4,0,lVar9,2);
  }
  FUN_00f07b18(0x41200000,lVar4,4,lVar9,4);
  FUN_00f07b18(0xc1200000,lVar2,1,lVar3,3);
  FUN_00f07b18(0,lVar2,5,lVar3,5);
  FUN_00f07940(0,0,param_1 + 0xd98,8,lVar1,8);
  if (*(byte *)(param_1 + 0x19ec) == 0) {
    *(undefined4 *)(param_1 + 0x19d0) = 0x3f800000;
    *(uint *)(param_1 + 0x5c4) = *(uint *)(param_1 + 0x5c4) | 4;
  }
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6e578(long param_1)

{
  FUN_00b28094(param_1 + 0x1838,param_1 + 0x1220,param_1 + 0x1920);
  return;
}




void FUN_00c6e598(uint *param_1,uint param_2)

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




void FUN_00c6e61c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  code *local_68;
  long *plStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x1a;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_028012a0;
  FUN_00ed66ec(plVar1);
  plVar2 = param_1 + 0x15f;
  FUN_00f0d160(plVar2);
  param_1[0x188] = 0;
  param_1[0x187] = 0;
  param_1[0x186] = 0;
  param_1[0x185] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00ed5664(plVar1,plVar2,1);
  local_68 = (code *)CONCAT71(local_68._1_7_,9);
  FUN_00ed5ab0(plVar1,&local_68);
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bee7fa);
  FUN_00f0dac8(plVar2,3);
  uVar4 = FUN_00e6ce7c("INVENTORY_NO_BLUEPRINTS_INSTRUCTION",0);
  FUN_00f0d75c(plVar2,uVar4);
  plVar1 = param_1 + 1;
  local_40 = DAT_0313c060;
  local_68 = thunk_FUN_00c6ee54;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(plVar1,&local_68);
  local_40 = DAT_0313c05c;
  local_68 = thunk_FUN_00c6ef28;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(plVar1,&local_68);
  local_40 = DAT_0313bee0;
  local_68 = thunk_FUN_00c6e7d8;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(plVar1,&local_68);
  FUN_00c6e7d8(param_1);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c6ee54(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar1 = 0;
    do {
      FUN_00c6eeb4(*(undefined8 *)(*(long *)(param_1 + 200) + uVar1 * 8),0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xc0));
  }
  FUN_00ed7174(0,param_1 + 0xd0);
  FUN_00ed717c(0,param_1 + 0xd0);
  return;
}




void thunk_FUN_00c6ef28(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar1 = 0;
    do {
      FUN_00c6eeb4(*(undefined8 *)(*(long *)(param_1 + 200) + uVar1 * 8),1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xc0));
  }
  FUN_00ed7184(param_1 + 0xd0);
  return;
}




void thunk_FUN_00c6e7d8(long param_1)

{
  long lVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_00f13f18(param_1,param_1 + 0xc28);
  lVar1 = param_1 + 0xd0;
  FUN_00f13f18(lVar1,param_1 + 0xc28);
  FUN_00f0dad0(*(undefined4 *)(param_1 + 0xc28),param_1 + 0xaf8,1);
  *(uint *)(param_1 + 0xb7c) = *(uint *)(param_1 + 0xb7c) | 4;
  FUN_00f07940(0,0,param_1 + 0xaf8,8,lVar1,8);
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar6 = 0;
    lVar4 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 200) + uVar6 * 8);
      if ((int)plVar2[0xf9] == 0) {
        puVar3 = (uint *)((long)plVar2 + 0x84);
      }
      else {
        *(undefined4 *)(plVar2 + 0xf8) = *(undefined4 *)(param_1 + 0xc28);
        (**(code **)(*plVar2 + 0x138))();
        lVar5 = *(long *)(*(long *)(param_1 + 200) + uVar6 * 8);
        if (lVar4 == 0) {
          if ((*(float *)(lVar5 + 0x40) != 0.0) || (*(float *)(lVar5 + 0x44) != 0.0)) {
            *(undefined8 *)(lVar5 + 0x40) = 0;
            FUN_0091ada4(lVar5);
          }
        }
        else {
          FUN_00f07b18(0,lVar5,0,lVar4,2);
          FUN_00f07b18(0,lVar5,3,lVar4,3);
        }
        lVar4 = *(long *)(*(long *)(param_1 + 200) + uVar6 * 8);
        puVar3 = (uint *)(param_1 + 0xb7c);
      }
      uVar6 = uVar6 + 1;
      *puVar3 = *puVar3 & 0xfffffffb;
    } while (uVar6 < *(uint *)(param_1 + 0xc0));
  }
  if (*(float *)(param_1 + 0x114) != 0.0) {
    *(undefined4 *)(param_1 + 0x114) = 0;
    FUN_0091ada4(lVar1);
    return;
  }
  return;
}




void FUN_00c6e7d8(long param_1)

{
  long lVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_00f13f18(param_1,param_1 + 0xc28);
  lVar1 = param_1 + 0xd0;
  FUN_00f13f18(lVar1,param_1 + 0xc28);
  FUN_00f0dad0(*(undefined4 *)(param_1 + 0xc28),param_1 + 0xaf8,1);
  *(uint *)(param_1 + 0xb7c) = *(uint *)(param_1 + 0xb7c) | 4;
  FUN_00f07940(0,0,param_1 + 0xaf8,8,lVar1,8);
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar6 = 0;
    lVar4 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 200) + uVar6 * 8);
      if ((int)plVar2[0xf9] == 0) {
        puVar3 = (uint *)((long)plVar2 + 0x84);
      }
      else {
        *(undefined4 *)(plVar2 + 0xf8) = *(undefined4 *)(param_1 + 0xc28);
        (**(code **)(*plVar2 + 0x138))();
        lVar5 = *(long *)(*(long *)(param_1 + 200) + uVar6 * 8);
        if (lVar4 == 0) {
          if ((*(float *)(lVar5 + 0x40) != 0.0) || (*(float *)(lVar5 + 0x44) != 0.0)) {
            *(undefined8 *)(lVar5 + 0x40) = 0;
            FUN_0091ada4(lVar5);
          }
        }
        else {
          FUN_00f07b18(0,lVar5,0,lVar4,2);
          FUN_00f07b18(0,lVar5,3,lVar4,3);
        }
        lVar4 = *(long *)(*(long *)(param_1 + 200) + uVar6 * 8);
        puVar3 = (uint *)(param_1 + 0xb7c);
      }
      uVar6 = uVar6 + 1;
      *puVar3 = *puVar3 & 0xfffffffb;
    } while (uVar6 < *(uint *)(param_1 + 0xc0));
  }
  if (*(float *)(param_1 + 0x114) != 0.0) {
    *(undefined4 *)(param_1 + 0x114) = 0;
    FUN_0091ada4(lVar1);
    return;
  }
  return;
}




void FUN_00c6e950(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028012a0;
  FUN_00c6e9b4();
  if ((*(byte *)(param_1 + 0x186) & 1) != 0) {
    operator_delete((void *)param_1[0x188]);
  }
  FUN_00f0d3a4(param_1 + 0x15f);
  thunk_FUN_00ed5534(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c6e9b4(long param_1)

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
  FUN_00ed7184(param_1 + 0xd0);
  return;
}




void FUN_00c6ea38(void *param_1)

{
  FUN_00c6e950();
  operator_delete(param_1);
  return;
}




void FUN_00c6ea5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = operator_new(2000);
  FUN_00c6ef78();
  local_40 = plVar2;
  FUN_00c6eb0c(plVar2,param_2);
  if ((int)plVar2[0xf9] == 0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  else {
    FUN_00c6ebf0(param_1 + 0xc0,&local_40);
    FUN_00ed5664(param_1 + 0xd0,local_40,1);
    FUN_00c6e7d8(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6eb0c(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_78;
  long *plStack_70;
  long *local_68;
  code *pcStack_60;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[0xf4] = param_2;
  FUN_00e6a8a8(auStack_58,"portrait_%s",*(undefined8 *)(param_2 + 0x10));
  FUN_00f0e628(param_1 + 0x67);
  FUN_00a9bbc4(param_1 + 0x67,auStack_58);
  uVar2 = FUN_00e6ce7c(*(undefined8 *)(param_2 + 0x18),0);
  FUN_00f0d75c(param_1 + 0x88,uVar2);
  uVar3 = FUN_00cc7c44();
  if ((uVar3 & 1) != 0) {
    FUN_00cc7c38();
    FUN_00c6f6e4(param_1);
  }
  uVar2 = FUN_00cc7c38();
  local_78 = 0;
  pcStack_60 = thunk_FUN_00c6f6e4;
  plStack_70 = param_1;
  local_68 = param_1;
  FUN_00be16a0(uVar2,&local_78);
  *(undefined1 *)((long)param_1 + 0x7cc) = 1;
  (**(code **)(*param_1 + 0x138))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6ebf0(uint *param_1,undefined8 *param_2)

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
    FUN_00c6f8f4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c6ec78(undefined4 param_1,long *param_2)

{
  *(undefined4 *)(param_2 + 0xf8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00c6ec84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x138))();
  return;
}




void FUN_00c6ec88(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xc28) = param_1;
  *(undefined4 *)(param_3 + 0xc2c) = param_2;
  FUN_00c6e7d8();
  return;
}




long FUN_00c6ec94(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte local_60 [8];
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1 + 0xc30;
  FUN_008fce60(lVar1,&DAT_0320ffa8);
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar6 = 0;
    do {
      uVar5 = FUN_00c6ed6c(*(undefined8 *)(*(long *)(param_1 + 200) + uVar6 * 8));
      FUN_008fcdb8(local_60,uVar5);
      uVar2 = (ulong)(local_60[0] >> 1);
      pvVar4 = (void *)((ulong)local_60 | 1);
      if ((local_60[0] & 1) != 0) {
        uVar2 = local_58;
        pvVar4 = local_50;
      }
      FUN_0090de84(lVar1,pvVar4,uVar2);
      if ((local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0xc0));
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar1;
}




long FUN_00c6ed6c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  byte local_60 [8];
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1 + 0x7a8;
  FUN_008fce60(lVar1,&DAT_0320ffa8);
  if (*(int *)(param_1 + 0x148) != 0) {
    uVar5 = 0;
    do {
      FUN_00bf5e8c(local_60,*(undefined8 *)(*(long *)(param_1 + 0x150) + uVar5 * 8));
      uVar2 = (ulong)(local_60[0] >> 1);
      pvVar4 = (void *)((ulong)local_60 | 1);
      if ((local_60[0] & 1) != 0) {
        uVar2 = local_58;
        pvVar4 = local_50;
      }
      FUN_0090de84(lVar1,pvVar4,uVar2);
      FUN_0090de84(lVar1,",",1);
      if ((local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x148));
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar1;
}




void FUN_00c6ee54(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar1 = 0;
    do {
      FUN_00c6eeb4(*(undefined8 *)(*(long *)(param_1 + 200) + uVar1 * 8),0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xc0));
  }
  FUN_00ed7174(0,param_1 + 0xd0);
  FUN_00ed717c(0,param_1 + 0xd0);
  return;
}




void FUN_00c6eeb4(long param_1,uint param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x148) != 0) {
    uVar2 = 0;
    do {
      lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x150) + uVar2 * 8) + 8);
      if ((*(char *)(lVar3 + 0x2a8) != '\0') || (bVar1 = false, (param_2 & 1) != 0)) {
        bVar1 = *(char *)(lVar3 + 0x2a9) != '\0';
      }
      uVar2 = uVar2 + 1;
      *(uint *)(lVar3 + 0x84) =
           *(uint *)(lVar3 + 0x84) & 0xfffffff8 | *(uint *)(lVar3 + 0x84) & 3 | (uint)bVar1 << 2;
    } while (uVar2 < *(uint *)(param_1 + 0x148));
  }
  *(uint *)(param_1 + 0x74c) =
       *(uint *)(param_1 + 0x74c) & 0xfffffff8 | *(uint *)(param_1 + 0x74c) & 3 | (param_2 & 1) << 2
  ;
  *(uint *)(param_1 + 0x3bc) =
       *(uint *)(param_1 + 0x3bc) & 0xfffffff8 | *(uint *)(param_1 + 0x3bc) & 3 | (param_2 & 1) << 2
  ;
  *(uint *)(param_1 + 0x4c4) =
       *(uint *)(param_1 + 0x4c4) & 0xfffffff8 | *(uint *)(param_1 + 0x4c4) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00c6ef28(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar1 = 0;
    do {
      FUN_00c6eeb4(*(undefined8 *)(*(long *)(param_1 + 200) + uVar1 * 8),1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xc0));
  }
  FUN_00ed7184(param_1 + 0xd0);
  return;
}




void thunk_FUN_00c6e7d8(long param_1)

{
  long lVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_00f13f18(param_1,param_1 + 0xc28);
  lVar1 = param_1 + 0xd0;
  FUN_00f13f18(lVar1,param_1 + 0xc28);
  FUN_00f0dad0(*(undefined4 *)(param_1 + 0xc28),param_1 + 0xaf8,1);
  *(uint *)(param_1 + 0xb7c) = *(uint *)(param_1 + 0xb7c) | 4;
  FUN_00f07940(0,0,param_1 + 0xaf8,8,lVar1,8);
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar6 = 0;
    lVar4 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 200) + uVar6 * 8);
      if ((int)plVar2[0xf9] == 0) {
        puVar3 = (uint *)((long)plVar2 + 0x84);
      }
      else {
        *(undefined4 *)(plVar2 + 0xf8) = *(undefined4 *)(param_1 + 0xc28);
        (**(code **)(*plVar2 + 0x138))();
        lVar5 = *(long *)(*(long *)(param_1 + 200) + uVar6 * 8);
        if (lVar4 == 0) {
          if ((*(float *)(lVar5 + 0x40) != 0.0) || (*(float *)(lVar5 + 0x44) != 0.0)) {
            *(undefined8 *)(lVar5 + 0x40) = 0;
            FUN_0091ada4(lVar5);
          }
        }
        else {
          FUN_00f07b18(0,lVar5,0,lVar4,2);
          FUN_00f07b18(0,lVar5,3,lVar4,3);
        }
        lVar4 = *(long *)(*(long *)(param_1 + 200) + uVar6 * 8);
        puVar3 = (uint *)(param_1 + 0xb7c);
      }
      uVar6 = uVar6 + 1;
      *puVar3 = *puVar3 & 0xfffffffb;
    } while (uVar6 < *(uint *)(param_1 + 0xc0));
  }
  if (*(float *)(param_1 + 0x114) != 0.0) {
    *(undefined4 *)(param_1 + 0x114) = 0;
    FUN_0091ada4(lVar1);
    return;
  }
  return;
}




void FUN_00c6ef78(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  FUN_00f0ac5c();
  plVar1 = param_1 + 0x2b;
  *param_1 = (long)&PTR_FUN_028013e8;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x49;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x67;
  FUN_00f0f5dc(plVar3);
  plVar4 = param_1 + 0x88;
  FUN_00f0d160(plVar4);
  FUN_00f1306c(param_1 + 0xae);
  plVar5 = param_1 + 0xd9;
  FUN_00f0c714(plVar5);
  *(undefined8 *)((long)param_1 + 0x7c5) = 0;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  param_1[0xf6] = 0;
  param_1[0xf5] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f023ec(plVar3,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_00f023ec(plVar5,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xae,1);
  FUN_00f0e548(plVar2,PTR_s_build___InventoryCommon_atlas_02be34e0,
               "inventory_hero_portrait_frame_standard");
  FUN_00f0e548(plVar1,PTR_s_build___InventoryCommon_atlas_02be34e0,
               "inventory_hero_portrait_frame_standard");
  FUN_00f0c774(plVar5,&DAT_01bee7f6);
  local_98 = (code *)CONCAT44(local_98._4_4_,0xffb6acaa);
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58,&local_98);
  local_70 = DAT_0313c064;
  local_98 = thunk_FUN_00c6f880;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 1,&local_98);
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

