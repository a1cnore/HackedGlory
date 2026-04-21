// functions/00c6f — 25 functions
#include "libGameKindred.h"




void thunk_FUN_00c6f880(long *param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0x138))();
  FUN_00f048e0(auStack_48,DAT_0313bee0,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6f17c(undefined8 *param_1)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_028013e8;
  FUN_00c6f2c0();
  if (*(char *)((long)param_1 + 0x7cc) != '\0') {
    puVar2 = (uint *)FUN_00cc7c38();
    lVar4 = (ulong)*puVar2 << 5;
    lVar1 = *(long *)(puVar2 + 2);
    do {
      lVar3 = lVar1;
      if (lVar4 == 0) goto LAB_00c6f1dc;
      lVar4 = lVar4 + -0x20;
      lVar1 = lVar3 + 0x20;
    } while (*(undefined8 **)(lVar3 + 8) != param_1);
    FUN_00be1628(puVar2,lVar3);
  }
LAB_00c6f1dc:
  if ((*(byte *)(param_1 + 0xf5) & 1) != 0) {
    operator_delete((void *)param_1[0xf7]);
  }
  FUN_00f13d08(param_1 + 0xd9);
  param_1[0xae] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0xc5);
  FUN_00f13d08(param_1 + 0xae);
  FUN_00f0d3a4(param_1 + 0x88);
  param_1[0x67] = &PTR_FUN_028266f0;
  param_1[0x7e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x81);
  FUN_00f13d08(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_028266f0;
  param_1[0x60] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 99);
  FUN_00f13d08(param_1 + 0x49);
  param_1[0x2b] = &PTR_FUN_028266f0;
  param_1[0x42] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x45);
  FUN_00f13d08(param_1 + 0x2b);
  if ((void *)param_1[0x2a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2a]);
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
  }
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c6f2c0(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x148);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x150) + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x150) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x148);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x150) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0x150) != 0) {
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  return;
}




void FUN_00c6f340(void *param_1)

{
  FUN_00c6f17c();
  operator_delete(param_1);
  return;
}




void FUN_00c6f364(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_90;
  float fStack_8c;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  fVar10 = *(float *)(param_1 + 0x7c0);
  FUN_00f13f18(param_1,param_1 + 0x7c0);
  if (*(int *)(param_1 + 0x148) == 0) {
    iVar6 = 0;
  }
  else {
    fVar10 = (fVar10 + -60.0) * 0.25;
    uVar7 = 0;
    lVar3 = 0;
    lVar4 = 0;
    iVar6 = 0;
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    do {
      lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x150) + uVar7 * 8) + 8);
      if (*(char *)(lVar5 + 0x2a9) == '\0') {
        *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) & 0xfffffffb;
      }
      else {
        FUN_00f13f08(fVar10,fVar10,lVar5);
        if (iVar6 == 0) {
          if ((*(float *)(lVar5 + 0x40) != 0.0) || (lVar3 = lVar5, *(float *)(lVar5 + 0x44) != 20.0)
             ) {
            *(undefined8 *)(lVar5 + 0x40) = 0x41a0000000000000;
            FUN_0091ada4(lVar5);
            lVar3 = lVar5;
          }
        }
        else if (iVar6 == (iVar6 / 3) * 3) {
          FUN_00f07b18(0x41a00000,lVar5,0,lVar3,2);
          FUN_00f07b18(0,lVar5,3,lVar3,3);
          lVar3 = lVar5;
        }
        else {
          FUN_00f07b18(0x41a00000,lVar5,3,lVar4,1);
          FUN_00f07b18(0,lVar5,0,lVar4,0);
        }
        iVar6 = iVar6 + 1;
        FUN_00f13238(param_1 + 0x570);
        lVar4 = lVar5;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0x148));
  }
  lVar3 = param_1 + 0x338;
  *(int *)(param_1 + 0x7c8) = iVar6;
  FUN_00f13f08(0x43960000,0x43960000,lVar3);
  lVar4 = param_1 + 0x248;
  FUN_00f13f08(0x43480000,0x43960000,lVar4);
  fVar8 = (float)FUN_00f0e700(lVar3);
  fVar10 = 0.5;
  fVar9 = (float)FUN_00f0e700(lVar3);
  fVar9 = ((fVar8 + -200.0) * 0.5) / fVar9;
  *(ulong *)(param_1 + 0x430) = CONCAT44(fVar9,fVar9);
  *(ulong *)(param_1 + 0x428) = CONCAT44(fVar9,fVar9);
  FUN_00f13e54(param_1 + 0x570);
  fVar8 = fVar10;
  FUN_00f0e700(lVar3);
  lVar5 = param_1 + 0x440;
  if (fVar10 <= fVar8) {
    fVar10 = fVar8;
  }
  FUN_00f0d4e0(lVar5);
  fVar9 = *(float *)(param_1 + 0x7c0);
  lVar1 = param_1 + 0x6c8;
  *(float *)(param_1 + 0x7c4) = fVar8 + fVar10 + 40.0;
  fVar10 = fVar9 * 0.8;
  FUN_00f13e54(param_1 + 0x570);
  FUN_00f13f08(fVar10,lVar1);
  local_90 = FUN_00f13e54(lVar1);
  fStack_8c = fVar9;
  FUN_00f13f18(param_1 + 0x158,&local_90);
  FUN_00f13f18(param_1,param_1 + 0x7c0);
  FUN_00f07940(0x41a00000,0,lVar5,0,param_1,0);
  FUN_00f07940(0,0x41a00000,lVar4,0,lVar5,3);
  FUN_00f07940(0,0,lVar3,8,lVar4,8);
  FUN_00f07940(0,0,param_1 + 0x570,0,lVar1,0);
  FUN_00f07b18(0x41200000,lVar1,3,lVar4,1);
  FUN_00f07b18(0,lVar1,0,lVar4,0);
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6f6e4(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar2 = (long *)FUN_00cc75b0();
  plVar2 = (long *)*plVar2;
  lVar5 = *plVar2;
  while (lVar5 != 0) {
    iVar1 = strcmp(*(char **)(lVar5 + 0x10),(char *)**(undefined8 **)(param_1 + 0x7a0));
    if (((iVar1 == 0) && (uVar3 = FUN_00cce580(*plVar2), (uVar3 & 1) != 0)) &&
       (*(int *)(*plVar2 + 0x20) != 0)) {
      uVar4 = FUN_00a07af0();
      uVar3 = FUN_00a07f2c(uVar4,*plVar2);
      if ((uVar3 & 1) != 0) {
        FUN_00c6f760(param_1,*plVar2);
      }
    }
    plVar2 = plVar2 + 1;
    lVar5 = *plVar2;
  }
  return;
}




void FUN_00c6f760(long *param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x58);
  FUN_00bf5830(pvVar2,param_2);
  local_40 = pvVar2;
  FUN_00c6f7f8(param_1 + 0x29,&local_40);
  FUN_00f133a4(param_1 + 0xae,*(undefined8 *)((long)local_40 + 8),1);
  (**(code **)(*param_1 + 0x138))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6f7f8(uint *param_1,undefined8 *param_2)

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
    FUN_00c6f978(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c6f880(long *param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0x138))();
  FUN_00f048e0(auStack_48,DAT_0313bee0,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6f8f4(uint *param_1,uint param_2)

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




void thunk_FUN_00c6f6e4(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar2 = (long *)FUN_00cc75b0();
  plVar2 = (long *)*plVar2;
  lVar5 = *plVar2;
  while (lVar5 != 0) {
    iVar1 = strcmp(*(char **)(lVar5 + 0x10),(char *)**(undefined8 **)(param_1 + 0x7a0));
    if (((iVar1 == 0) && (uVar3 = FUN_00cce580(*plVar2), (uVar3 & 1) != 0)) &&
       (*(int *)(*plVar2 + 0x20) != 0)) {
      uVar4 = FUN_00a07af0();
      uVar3 = FUN_00a07f2c(uVar4,*plVar2);
      if ((uVar3 & 1) != 0) {
        FUN_00c6f760(param_1,*plVar2);
      }
    }
    plVar2 = plVar2 + 1;
    lVar5 = *plVar2;
  }
  return;
}




void FUN_00c6f978(uint *param_1,uint param_2)

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




void FUN_00c6f9f8(long *param_1)

{
  long lVar1;
  code *local_68;
  long *plStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f0ac5c();
  param_1[0x29] = 0;
  *param_1 = (long)&PTR_FUN_02801538;
  FUN_00f0ac5c(param_1 + 0x2a);
  param_1[0x53] = 0;
  *(undefined2 *)(param_1 + 0x55) = 0x100;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2a,1);
  local_40 = DAT_0313ca18;
  local_68 = FUN_00c6faf0;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(param_1 + 1,&local_68);
  local_40 = DAT_0313ca1c;
  local_68 = FUN_00c6fb60;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(param_1 + 1,&local_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6faf0(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x2a8) = 1;
  FUN_00f048e0(auStack_48,DAT_0313c060,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6fb60(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  FUN_00f048e0(auStack_48,DAT_0313c05c,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6fbcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02801538;
  param_1[0x2a] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x41);
  FUN_00f13d08(param_1 + 0x2a);
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c6fc34(void *param_1)

{
  FUN_00c6fbcc();
  operator_delete(param_1);
  return;
}




void FUN_00c6fc58(long *param_1)

{
  FUN_00f13f08();
                    /* WARNING: Could not recover jumptable at 0x00c6fc80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00c6fc84(long param_1,undefined8 param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7)

{
  FUN_00c38cf8(*(undefined8 *)(param_1 + 0x298),param_2,1,param_3);
  FUN_00c6fce4(param_1,param_4 & 1,param_5,param_6,param_7);
  return;
}




void FUN_00c6fce4(long *param_1,uint param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  long *plVar2;
  
  FUN_00c38eac(param_1[0x53],param_2 & 1);
  uVar1 = *(uint *)(param_1[0x53] + 0x84);
  *(uint *)(param_1[0x53] + 0x84) = uVar1 & 0xffffffe0 | uVar1 & 0xf | (param_2 & 1) << 4;
  FUN_00c38e9c(param_1[0x53],param_3);
  FUN_00c38e8c(param_1[0x53],param_4);
  FUN_00c38e94(param_1[0x53],param_5);
  FUN_00c39738(param_1[0x53],param_5 <= param_3);
  FUN_00c396d4(param_1[0x53]);
  (**(code **)(*(long *)param_1[0x53] + 0x1a8))((long *)param_1[0x53],1);
  (**(code **)(*(long *)param_1[0x53] + 0x148))((long *)param_1[0x53],0);
  (**(code **)(*(long *)param_1[0x53] + 0x198))((long *)param_1[0x53],1);
  (**(code **)(*(long *)param_1[0x53] + 400))((long *)param_1[0x53],1);
  (**(code **)(*(long *)param_1[0x53] + 0x1c0))((long *)param_1[0x53],1);
  FUN_00c6fe68(param_1);
  FUN_00c396ec(0x3f333333,param_1[0x53]);
  plVar2 = (long *)param_1[0x53];
  if ((*(float *)(plVar2 + 9) != 0.6) || (*(float *)((long)plVar2 + 0x4c) != 0.6)) {
    plVar2[9] = 0x3f19999a3f19999a;
    FUN_0091ada4();
    plVar2 = (long *)param_1[0x53];
  }
  (**(code **)(*plVar2 + 0x1e0))(0x3f19999a);
                    /* WARNING: Could not recover jumptable at 0x00c6fe50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00c6fe54(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x298) = param_2;
  FUN_00f0ad88(param_1 + 0x150,param_2,1);
  return;
}




void FUN_00c6fe68(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_00a07af0();
  uVar2 = FUN_00a07fb0(uVar1,*(undefined8 *)(param_1 + 0x2a0));
  FUN_00c39718(*(undefined8 *)(param_1 + 0x298),(uVar2 & 1) == 0);
  return;
}




void FUN_00c6feac(long param_1)

{
  FUN_00c38e9c(*(undefined8 *)(param_1 + 0x298));
  return;
}




void FUN_00c6feb4(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long lVar1;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (**(code **)(*param_3 + 0x48))();
  uStack_3c = param_2;
  FUN_00f13f18(param_3 + 0x2a,&local_40);
  FUN_00f07940(0,0,param_3[0x53],8,param_3 + 0x2a,8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6ff3c(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  char acStack_d8 [128];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined8 **)(param_1 + 0x2a0) = param_2;
  plVar7 = (long *)FUN_00cc7ab8();
  FUN_00e6a8a8(acStack_d8,"card_skin_%s",*param_2);
  lVar9 = *(long *)*plVar7;
  plVar7 = (long *)*plVar7;
  do {
    if (lVar9 == 0) {
LAB_00c70028:
      if (*(long *)(lVar1 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar2 = strcmp(*(char **)(lVar9 + 8),acStack_d8);
    if (iVar2 == 0) {
      uVar8 = FUN_00a07af0();
      uVar3 = FUN_00a07f2c(uVar8,param_2);
      uVar4 = FUN_00a084a8(uVar8);
      uVar5 = FUN_00a08548(uVar8,param_2);
      uVar6 = FUN_00a084b0(uVar8,param_2);
      FUN_00c38cf8(*(undefined8 *)(param_1 + 0x298),*plVar7,1,*(undefined4 *)(param_2 + 4));
      FUN_00c6fce4(param_1,uVar3 & 1,uVar4,uVar5,uVar6);
      goto LAB_00c70028;
    }
    lVar9 = plVar7[1];
    plVar7 = plVar7 + 1;
  } while( true );
}

