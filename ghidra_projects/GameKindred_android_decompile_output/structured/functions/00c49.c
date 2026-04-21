// functions/00c49 — 35 functions
#include "libGameKindred.h"




void * FUN_00c49010(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xb88);
  FUN_00c49078();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_00c49078(long *param_1)

{
  long *plVar1;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027fc150;
  FUN_00f017e8(plVar1);
  *plVar1 = (long)&PTR_FUN_027c1f80;
  FUN_00c93600(param_1 + 0x28,0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x28,1);
  return;
}




void FUN_00c49100(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fc150;
  param_1[0x28] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x149);
  FUN_00c925cc(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c49168(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fc150;
  param_1[0x28] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x149);
  FUN_00c925cc(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c491d8(uint *param_1,uint param_2)

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




void FUN_00c4925c(code *param_1)

{
  long lVar1;
  code *local_78;
  code *pcStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f13ca4();
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined ***)param_1 = &PTR_FUN_027fc298;
  FUN_00f017e8(param_1 + 0xc0);
  FUN_00ed66ec(param_1 + 0x148);
  *(undefined ***)(param_1 + 0x148) = &PTR_FUN_027fc3e0;
  FUN_00f13ca4(param_1 + 0xb70);
  *(undefined8 *)(param_1 + 0xc30) = 0;
  *(undefined8 *)(param_1 + 0xc28) = 0;
  FUN_00ed66ec(param_1 + 0xc40);
  *(undefined ***)(param_1 + 0xc40) = &PTR_FUN_027fc3e0;
  FUN_00f13ca4(param_1 + 0x1668);
  *(undefined8 *)(param_1 + 0x1728) = 0;
  *(undefined8 *)(param_1 + 0x1720) = 0;
  *(code **)(param_1 + 0x1738) = param_1 + 0x148;
  *(code **)(param_1 + 0x1740) = param_1 + 0xc40;
  FUN_00f0e4a8(param_1 + 0x1748);
  FUN_00f0e4a8(param_1 + 0x1838);
  FUN_00b15e58(param_1 + 0x1928,0);
  param_1[0x1ea0] = (code)0xff;
  FUN_00c493b4(param_1);
  pcStack_70 = thunk_FUN_00c49f9c;
  local_78 = param_1;
  FUN_00f02e98(0xbf800000,&local_78,0,1);
  local_50 = DAT_0313b970;
  local_78 = FUN_00c49588;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  pcStack_70 = param_1;
  FUN_009693a0(param_1 + 8,&local_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c493b4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_60 [2];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  plVar1 = param_1 + 0x18;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x29;
  FUN_00f023ec(plVar1,plVar2,1);
  plVar3 = param_1 + 0x188;
  FUN_00f023ec(plVar1,plVar3,1);
  plVar1 = param_1 + 0x2e9;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar4 = param_1 + 0x307;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x325,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"tile_edge_shadow_vert");
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"tile_edge_shadow_vert");
  *(byte *)(param_1 + 0x304) = *(byte *)(param_1 + 0x304) | 1;
  *(uint *)((long)param_1 + 0x17cc) = *(uint *)((long)param_1 + 0x17cc) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x18bc) = *(uint *)((long)param_1 + 0x18bc) & 0xffffffbf;
  local_60[0] = 0xff503d2b;
  FUN_00f0e670(plVar1,local_60,2);
  local_60[0] = 0xff503d2b;
  FUN_00f0e670(plVar4,local_60,2);
  local_60[0]._0_1_ = 6;
  FUN_00ed5ab0(plVar2,local_60);
  local_60[0] = CONCAT31(local_60[0]._1_3_,6);
  FUN_00ed5ab0(plVar3,local_60);
  FUN_00ed5664(plVar2,param_1 + 0x16e,1);
  FUN_00ed5664(plVar3,param_1 + 0x2cd,1);
  *(uint *)((long)param_1 + 0x19ac) = *(uint *)((long)param_1 + 0x19ac) & 0xfffffffb;
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c49588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c4a6d4(param_1,param_4);
  return;
}




void FUN_00c49590(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *local_68;
  code *pcStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027fc298;
  pcStack_60 = thunk_FUN_00c49d98;
  local_68 = param_1;
  FUN_00f03390(&local_68);
  pcStack_60 = thunk_FUN_00c49f9c;
  local_68 = param_1;
  FUN_00f03390(&local_68);
  param_1[0x325] = &PTR_FUN_027d47d0;
  lVar3 = -0x4b0;
  puVar2 = param_1 + 0x3b4;
  do {
    *puVar2 = &PTR_FUN_028266f0;
    puVar2[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar2 + 0x1a);
    FUN_00f13d08(puVar2);
    lVar3 = lVar3 + 0xf0;
    puVar2 = puVar2 + -0x1e;
  } while (lVar3 != 0);
  FUN_00f13d08(param_1 + 0x325);
  param_1[0x307] = &PTR_FUN_028266f0;
  param_1[0x31e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x321);
  FUN_00f13d08(param_1 + 0x307);
  param_1[0x2e9] = &PTR_FUN_028266f0;
  param_1[0x300] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x303);
  FUN_00f13d08(param_1 + 0x2e9);
  param_1[0x188] = &PTR_FUN_027fc3e0;
  if ((void *)param_1[0x2e5] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2e5]);
    param_1[0x2e5] = 0;
    param_1[0x2e4] = 0;
  }
  FUN_00f13d08(param_1 + 0x2cd);
  thunk_FUN_00ed5534(param_1 + 0x188);
  param_1[0x29] = &PTR_FUN_027fc3e0;
  if ((void *)param_1[0x186] != (void *)0x0) {
    operator_delete__((void *)param_1[0x186]);
    param_1[0x186] = 0;
    param_1[0x185] = 0;
  }
  FUN_00f13d08(param_1 + 0x16e);
  thunk_FUN_00ed5534(param_1 + 0x29);
  FUN_00f01868(param_1 + 0x18);
  FUN_00f13d08(param_1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c49748(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fc3e0;
  if ((void *)param_1[0x15d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x15d]);
    param_1[0x15d] = 0;
    param_1[0x15c] = 0;
  }
  FUN_00f13d08(param_1 + 0x145);
  thunk_FUN_00ed5534(param_1);
  return;
}




void FUN_00c49794(void *param_1)

{
  FUN_00c49590();
  operator_delete(param_1);
  return;
}




void FUN_00c497b8(long *param_1,code *param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pcVar1 = param_2 + 8;
  local_50 = DAT_03210c64;
  param_3 = param_3 & 0xffffffff;
  local_78 = FUN_00c498f8;
  local_68 = 0;
  uStack_60 = 0;
  plStack_70 = param_1;
  local_58 = param_3;
  FUN_009693a0(pcVar1,&local_78);
  local_50 = DAT_0313b7d4;
  local_78 = FUN_00c4992c;
  local_68 = 0;
  uStack_60 = 0;
  plStack_70 = param_1;
  local_58 = param_3;
  FUN_009693a0(pcVar1,&local_78);
  local_50 = DAT_0313b7d8;
  local_78 = FUN_00c49964;
  local_68 = 0;
  uStack_60 = 0;
  plStack_70 = param_1;
  local_58 = param_3;
  FUN_009693a0(pcVar1,&local_78);
  *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 0x10;
  FUN_00ecf870(param_2,1);
  FUN_00f023ec(param_1[0x2e7] + 0xa28,param_2,1);
  (**(code **)(*param_1 + 0xe8))(param_1);
  local_78 = param_2;
  FUN_00c499ac(param_1[0x2e7] + 0xae0,&local_78);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c498f8(long param_1)

{
  uint in_w4;
  
  if (*(byte *)(param_1 + 0x1ea0) == 0xff) {
                    /* WARNING: Could not recover jumptable at 0x00c49924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0xb8))(*(undefined8 **)(param_1 + 0xb8),in_w4);
    return;
  }
  if (*(byte *)(param_1 + 0x1ea0) == in_w4) {
    return;
  }
  FUN_00c4a5b4();
  return;
}




void FUN_00c4992c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_4);
                    /* WARNING: Could not recover jumptable at 0x00c49960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))(*(undefined8 **)(param_1 + 0xb8),uVar1);
  return;
}




void FUN_00c49964(long param_1)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00c49974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))(*(long **)(param_1 + 0xb8),in_x4);
  return;
}




void FUN_00c49978(long *param_1,undefined8 param_2,long param_3)

{
  FUN_00f023ec(param_3 + 0xa28,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00c499a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c499ac(uint *param_1,undefined8 *param_2)

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
    FUN_00c4a7e0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c49a34(ulong param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  (**(code **)(**(long **)(param_2 + 0x1738) + 0x140))();
  FUN_00ed5a14(*(undefined8 *)(param_2 + 0x1738),&DAT_03218ef8);
  if (*(int *)(*(long *)(param_2 + 0x1738) + 0xae0) != 0) {
    puVar1 = *(undefined8 **)(*(long *)(param_2 + 0x1738) + 0xae8);
    do {
      puVar2 = puVar1 + 1;
      FUN_00c47a90(param_1,0x3e4ccccd,*puVar1);
      param_1 = (ulong)(uint)((float)param_1 + 0.0666);
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)
                       (*(long *)(*(long *)(param_2 + 0x1738) + 0xae8) +
                       (ulong)*(uint *)(*(long *)(param_2 + 0x1738) + 0xae0) * 8));
  }
  return;
}




void FUN_00c49ad0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 *puVar5;
  
  if (*(int *)(*(long *)(param_1 + 0x1740) + 0xae0) != 0) {
    fVar9 = 0.0;
    fVar8 = 0.0;
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x1740) + 0xae8);
    do {
      puVar5 = puVar4 + 1;
      fVar7 = (float)FUN_00c47cd4(fVar9,0x3e4ccccd,*puVar4);
      if (fVar8 <= fVar7) {
        fVar8 = fVar7;
      }
      fVar9 = fVar9 + 0.0666;
      puVar4 = puVar5;
    } while (puVar5 != (undefined8 *)
                       (*(long *)(*(long *)(param_1 + 0x1740) + 0xae8) +
                       (ulong)*(uint *)(*(long *)(param_1 + 0x1740) + 0xae0) * 8));
    uVar2 = FUN_00efed6c(fVar8);
    lVar1 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efc8e8(puVar6);
      *(undefined ***)puVar6 = &PTR_FUN_027c27b8;
      puVar6[0xc] = 0;
      puVar6[0xd] = 0;
      puVar6[0xe] = 0;
      puVar6[0xf] = 0;
      puVar6[0x10] = 0;
      puVar6[0x11] = 0;
      puVar6[0x12] = 0;
      puVar6[0x13] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    *(code **)(puVar6 + 8) = FUN_00c49c48;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    FUN_00f02308(param_1,uVar2,puVar6,0);
    return;
  }
  return;
}




void FUN_00c49c48(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = thunk_FUN_00c49d98;
  local_38 = param_2;
  FUN_00f02e98(0xbf800000,&local_38,0,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c49ca8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x148;
  FUN_00f01a4c(lVar1,1);
  lVar2 = param_1 + 0xc40;
  FUN_00f01a4c(lVar2,1);
  FUN_00c49d98(param_1);
  uVar3 = (ulong)*(byte *)(param_1 + 0x1ea0);
  if (uVar3 != 0xff) {
    FUN_00c4829c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1738) + 0xae8) + uVar3 * 8));
    *(byte *)(param_1 + 0x1ea0) = 0xff;
  }
  if (*(long *)(param_1 + 0x1738) == lVar1) {
    *(long *)(param_1 + 0x1738) = lVar2;
    *(long *)(param_1 + 0x1740) = lVar1;
    FUN_00f023ec(param_1 + 0xc0,lVar1,1);
  }
  else {
    if (*(long *)(param_1 + 0x1738) != lVar2) {
      return;
    }
    *(long *)(param_1 + 0x1738) = lVar1;
    *(long *)(param_1 + 0x1740) = lVar2;
    FUN_00f023ec(param_1 + 0xc0,lVar2,1);
    lVar2 = lVar1;
  }
  FUN_00f023ec(param_1 + 0xc0,lVar2,1);
  return;
}




void FUN_00c49d98(long param_1)

{
  long *plVar1;
  
  FUN_00c4a720(param_1,*(long *)(param_1 + 0x1740) + 0xae0);
  plVar1 = (long *)FUN_00f14058(*(long *)(param_1 + 0x1740) + 0xa28);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c49dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))();
    return;
  }
  return;
}




void FUN_00c49de4(long param_1,uint param_2)

{
  FUN_00c4829c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1738) + 0xae8) + (ulong)param_2 * 8))
  ;
  return;
}




void FUN_00c49df4(long param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  FUN_00c47798(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1738) + 0xae8) + (ulong)param_2 * 8),
               1);
  FUN_00c47f84(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1738) + 0xae8) + (ulong)param_2 * 8))
  ;
  *(char *)(param_1 + 0x1ea0) = (char)param_2;
  lVar1 = *(long *)(param_1 + 0x1738);
  if (*(int *)(lVar1 + 0xae0) != 0) {
    plVar2 = *(long **)(lVar1 + 0xae8);
    plVar4 = plVar2;
    do {
      if (((uint)((ulong)((long)plVar4 - (long)plVar2) >> 3) != param_2) &&
         (lVar3 = *plVar4, lVar3 != 0)) {
        FUN_00c47798(lVar3,2);
        FUN_00c478d4(lVar3,0);
        lVar1 = *(long *)(param_1 + 0x1738);
      }
      plVar2 = *(long **)(lVar1 + 0xae8);
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2 + *(uint *)(lVar1 + 0xae0));
  }
  return;
}




void FUN_00c49ea8(long param_1,undefined8 param_2,ulong param_3,undefined4 param_4,uint param_5)

{
  FUN_00c482d4(*(undefined8 *)
                (*(long *)(*(long *)(param_1 + 0x1738) + 0xae8) + (param_3 & 0xffffffff) * 8),
               param_2,param_4,param_5 & 1);
  return;
}




void FUN_00c49ec4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c49ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00c49ed0(long param_1)

{
  FUN_00f13e54(*(long *)(param_1 + 0x1738) + 0xa28);
  return;
}




void FUN_00c49edc(long param_1)

{
  FUN_00f13e54(*(long *)(param_1 + 0x1740) + 0xa28);
  return;
}




void FUN_00c49ee8(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 local_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = 5;
  if ((param_2 & 1) != 0) {
    uVar2 = 6;
  }
  local_40[0] = uVar2;
  FUN_00ed5ab0(param_1 + 0x148,local_40);
  local_40[0] = uVar2;
  FUN_00ed5ab0(param_1 + 0xc40,local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00c49f60(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x1738);
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0xae0) != 0)) {
    lVar3 = (ulong)*(uint *)(lVar1 + 0xae0) << 3;
    plVar2 = *(long **)(lVar1 + 0xae8);
    do {
      if (*plVar2 == param_2) {
        return 1;
      }
      lVar3 = lVar3 + -8;
      plVar2 = plVar2 + 1;
    } while (lVar3 != 0);
  }
  return 0;
}




void FUN_00c49f9c(long param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x1738) + 0x148))();
  if (((uVar1 & 1) == 0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x1738) + 0x150))(), (uVar1 & 1) == 0)) {
    return;
  }
  FUN_00c49ff0(param_1);
  return;
}




void FUN_00c49ff0(long *param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float local_68 [2];
  float local_60 [2];
  float local_58 [2];
  float local_50 [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  (**(code **)(*(long *)param_1[0x2e7] + 0x68))((long *)param_1[0x2e7],local_50,local_58);
  FUN_00f02010(param_1[0x2e7] + 0xa28,local_60,local_68);
  fVar5 = local_50[0] - local_60[0];
  if (local_50[0] - local_60[0] <= 0.0) {
    fVar5 = 0.0;
  }
  fVar6 = local_68[0] - local_58[0];
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (fVar5 <= 0.0) {
    *(uint *)((long)param_1 + 0x17cc) = *(uint *)((long)param_1 + 0x17cc) & 0xfffffffb;
  }
  else {
    fVar5 = (float)NEON_fminnm(fVar5 * 1.1,0x43960000);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    plVar1 = param_1 + 0x2e9;
    (**(code **)(*param_1 + 0x48))(param_1);
    FUN_00f13f08(fVar5,plVar1);
    uVar3 = *(uint *)((long)param_1 + 0x17cc);
    uVar4 = (uint)((fVar5 / 300.0) * 255.0);
    if ((uVar3 >> 7 & 0xff) != uVar4) {
      *(uint *)((long)param_1 + 0x17cc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | (uVar4 & 0xff) << 7;
      FUN_0091ada4(plVar1);
      uVar3 = *(uint *)((long)param_1 + 0x17cc);
    }
    *(uint *)((long)param_1 + 0x17cc) = uVar3 | 4;
    FUN_00f07b18(0,plVar1,3,param_1,3);
  }
  if (fVar6 <= 0.0) {
    *(uint *)((long)param_1 + 0x18bc) = *(uint *)((long)param_1 + 0x18bc) & 0xfffffffb;
  }
  else {
    fVar5 = (float)NEON_fminnm(fVar6 * 1.1,0x43960000);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    plVar1 = param_1 + 0x307;
    (**(code **)(*param_1 + 0x48))(param_1);
    FUN_00f13f08(fVar5,plVar1);
    uVar3 = *(uint *)((long)param_1 + 0x18bc);
    uVar4 = (uint)((fVar5 / 300.0) * 255.0);
    if ((uVar3 >> 7 & 0xff) != uVar4) {
      *(uint *)((long)param_1 + 0x18bc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | (uVar4 & 0xff) << 7;
      FUN_0091ada4(plVar1);
      uVar3 = *(uint *)((long)param_1 + 0x18bc);
    }
    *(uint *)((long)param_1 + 0x18bc) = uVar3 | 4;
    FUN_00f07b18(0,plVar1,1,param_1,1);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c49d98(long param_1)

{
  long *plVar1;
  
  FUN_00c4a720(param_1,*(long *)(param_1 + 0x1740) + 0xae0);
  plVar1 = (long *)FUN_00f14058(*(long *)(param_1 + 0x1740) + 0xa28);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c49dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))();
    return;
  }
  return;
}




void thunk_FUN_00c49f9c(long param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x1738) + 0x148))();
  if (((uVar1 & 1) == 0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x1738) + 0x150))(), (uVar1 & 1) == 0)) {
    return;
  }
  FUN_00c49ff0(param_1);
  return;
}




void thunk_FUN_00c49d98(long param_1)

{
  long *plVar1;
  
  FUN_00c4a720(param_1,*(long *)(param_1 + 0x1740) + 0xae0);
  plVar1 = (long *)FUN_00f14058(*(long *)(param_1 + 0x1740) + 0xa28);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c49dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))();
    return;
  }
  return;
}

