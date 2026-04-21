// functions/00afa — 21 functions
#include "libGameKindred.h"




void FUN_00afa094(undefined4 param_1,long param_2,undefined8 param_3,uint param_4,byte param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  long local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = 0;
  *(undefined1 *)(param_2 + 0x3a8) = 0;
  uStack_50 = param_3;
  plVar2 = (long *)FUN_00afb85c(param_2 + 0x290,&uStack_50);
  plVar4 = &local_58;
  if (plVar2 != (long *)0x0) {
    plVar4 = plVar2;
  }
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    *(byte *)(param_2 + 0x3a8) = param_5 & 1;
    uVar3 = FUN_0198ff3c();
    plVar4 = (long *)FUN_019902b4(uVar3,lVar5);
    *(long **)(param_2 + 0x310) = plVar4;
    fVar6 = *(float *)(plVar4 + 1);
    *(undefined4 *)(plVar4 + 3) = param_1;
    *(uint *)((long)plVar4 + 0x14) = param_4 & 1;
    *(undefined4 *)((long)plVar4 + 0x1c) = 0;
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
      *(undefined4 *)(plVar4 + 1) = 0;
    }
    *(undefined4 *)(plVar4 + 4) = 0;
    fVar7 = *(float *)(*plVar4 + 4);
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    if (fVar7 < fVar6) {
      *(float *)(plVar4 + 1) = fVar7;
    }
    *(undefined8 *)((long)plVar4 + 0xc) = 0x3f80000000000000;
    FUN_0198fe18(param_2 + 0x318);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00afa194(long param_1)

{
  if (*(long *)(param_1 + 0x2f8) != 0) {
    *(undefined4 *)(param_1 + 0x2f0) = 0;
  }
  return;
}




void FUN_00afa1a4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = FUN_00e6a474(uVar3);
  uVar1 = FUN_0091ed5c(uVar3,uVar1,0x12345678);
  lVar2 = FUN_00afb18c(param_1,uVar1);
  uVar1 = FUN_00afb328(param_1,param_3);
  *(undefined4 *)(lVar2 + 4) = uVar1;
  return;
}




void FUN_00afa20c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = FUN_00e6a474(uVar3);
  uVar1 = FUN_0091ed5c(uVar3,uVar1,0x12345678);
  lVar2 = FUN_00afb18c(param_1,uVar1);
  uVar1 = FUN_00afb4c0(param_1,param_3);
  *(undefined4 *)(lVar2 + 4) = uVar1;
  return;
}




void FUN_00afa274(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = FUN_00e6a474(uVar3);
  uVar1 = FUN_0091ed5c(uVar3,uVar1,0x12345678);
  lVar2 = FUN_00afb18c(param_1,uVar1);
  uVar1 = FUN_00afb658(param_1,param_3);
  *(undefined4 *)(lVar2 + 4) = uVar1;
  return;
}




void FUN_00afa2dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dabf8;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[5]);
  return;
}




undefined8 FUN_00afa330(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong local_70 [2];
  void *local_60;
  ulong local_58 [2];
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = 0;
  uVar3 = FUN_00f1c800(param_2,&local_40,0);
  local_58[0] = 0;
  local_58[1] = 0;
  local_48 = (void *)0x0;
  FUN_00f1c904(param_2,local_58);
  pvVar1 = (void *)((ulong)local_58 | 1);
  if ((local_58[0] & 1) != 0) {
    pvVar1 = local_48;
  }
  local_70[0] = 0;
  local_70[1] = 0;
  local_60 = (void *)0x0;
  FUN_00f1c8ec(pvVar1,local_70);
  uVar4 = FUN_00f3428c();
  pvVar1 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar1 = local_60;
  }
  uVar4 = FUN_00f32a6c(uVar4,pvVar1,local_40,uVar3);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00afa420(float param_1,long param_2,ulong param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((*(long *)(param_2 + 0x1a0) != 0) &&
     (puVar1 = *(undefined8 **)
                (*(long *)(*(long *)(param_2 + 0x1a0) + 8) + (param_3 & 0xffffffff) * 8),
     puVar1 != (undefined8 *)0x0)) {
    if (param_1 <= 0.0) {
      param_1 = *(float *)(puVar1 + 2);
    }
    FUN_00afa094(param_1,param_2,*puVar1,*(undefined1 *)((long)puVar1 + 0x14),param_4 & 1);
    return;
  }
  return;
}




void FUN_00afa458(long param_1,int *param_2,uint param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  
  if (*param_2 != 0) {
    if (*(long *)(param_1 + 0x2f8) != 0) {
      *(undefined4 *)(param_1 + 0x2f0) = 0;
    }
    if (*(long *)(param_1 + 0x310) != 0) {
      FUN_0198fe30(param_1 + 0x318);
      *(undefined8 *)(param_1 + 0x310) = 0;
    }
    FUN_00a9a4a0(param_1 + 0x2f0,param_2);
    puVar1 = *(uint **)(param_1 + 0x2f8);
    puVar2 = *(undefined8 **)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + (ulong)*puVar1 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00afa094(*(undefined4 *)(puVar2 + 2),param_1,*puVar2,*(undefined1 *)((long)puVar2 + 0x14),
                   param_3 & 1);
      puVar1 = *(uint **)(param_1 + 0x2f8);
    }
    FUN_00a1b8f0(param_1 + 0x2f0,puVar1,puVar1 + 1);
    return;
  }
  return;
}




void FUN_00afa508(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x2c0);
  uVar2 = 0;
  do {
    uVar6 = uVar2;
    uVar3 = (ulong)uVar6;
    if (uVar1 <= uVar6) break;
    uVar2 = uVar6 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x2c8) + uVar3 * 8 + 4) == -1);
  do {
    if (uVar1 == uVar6) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x2e0);
    uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 0x2c8) + uVar3 * 8 + 4);
    if ((*(byte *)(lVar4 + uVar5 * 0xa8 + 0x18) & 1) == 0) {
      lVar4 = lVar4 + uVar5 * 0xa8 + 0x19;
    }
    else {
      lVar4 = *(long *)(lVar4 + uVar5 * 0xa8 + 0x28);
    }
    FUN_00afa5e4(param_1,lVar4);
    uVar6 = (uint)uVar3;
    do {
      uVar6 = uVar6 + 1;
      uVar3 = (ulong)uVar6;
      if (*(uint *)(param_1 + 0x2c0) <= uVar6) break;
    } while (*(int *)(*(long *)(param_1 + 0x2c8) + uVar3 * 8 + 4) == -1);
  } while( true );
}




void FUN_00afa5e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_2;
  lVar2 = FUN_00afac04(param_1 + 0x2c0,&local_40);
  if (*(long *)(lVar2 + 0x48) == 0) {
    if ((*(byte *)(lVar2 + 0x30) & 1) == 0) {
      lVar3 = lVar2 + 0x31;
    }
    else {
      lVar3 = *(long *)(lVar2 + 0x40);
    }
    lVar3 = FUN_00afa330(0,lVar3);
    *(long *)(lVar2 + 0x48) = lVar3;
    if (lVar3 == 0) goto LAB_00afa64c;
  }
  FUN_00f309f4();
LAB_00afa64c:
  FUN_00af9b80(param_1,lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00afa680(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x2c0);
  uVar2 = 0;
  do {
    uVar6 = uVar2;
    uVar3 = (ulong)uVar6;
    if (uVar1 <= uVar6) break;
    uVar2 = uVar6 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x2c8) + uVar3 * 8 + 4) == -1);
  do {
    if (uVar1 == uVar6) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x2e0);
    uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 0x2c8) + uVar3 * 8 + 4);
    if ((*(byte *)(lVar4 + uVar5 * 0xa8 + 0x18) & 1) == 0) {
      lVar4 = lVar4 + uVar5 * 0xa8 + 0x19;
    }
    else {
      lVar4 = *(long *)(lVar4 + uVar5 * 0xa8 + 0x28);
    }
    FUN_00afa75c(param_1,lVar4);
    uVar6 = (uint)uVar3;
    do {
      uVar6 = uVar6 + 1;
      uVar3 = (ulong)uVar6;
      if (*(uint *)(param_1 + 0x2c0) <= uVar6) break;
    } while (*(int *)(*(long *)(param_1 + 0x2c8) + uVar3 * 8 + 4) == -1);
  } while( true );
}




void FUN_00afa75c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  lVar2 = FUN_00afac04(param_1 + 0x2c0,&local_30);
  if (*(long *)(lVar2 + 0x48) != 0) {
    FUN_00f30a40();
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00afa7b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  lVar2 = FUN_00afac04(param_1 + 0x2c0,&local_30);
  if (*(long *)(lVar2 + 0x48) != 0) {
    FUN_00f30a68();
    *(ushort *)(*(long *)(lVar2 + 0x48) + 100) = *(ushort *)(*(long *)(lVar2 + 0x48) + 100) | 0x200;
    *(undefined8 *)(lVar2 + 0x48) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00afa82c(long param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x2c0);
  uVar3 = 0;
  do {
    uVar8 = uVar3;
    uVar4 = (ulong)uVar8;
    if (uVar1 <= uVar8) break;
    uVar3 = uVar8 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x2c8) + uVar4 * 8 + 4) == -1);
  do {
    if (uVar1 == uVar8) {
      if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar5 = *(long *)(param_1 + 0x2e0);
    uVar7 = (ulong)*(uint *)(*(long *)(param_1 + 0x2c8) + uVar4 * 8 + 4);
    if ((*(byte *)(lVar5 + uVar7 * 0xa8 + 0x18) & 1) == 0) {
      local_e8 = lVar5 + uVar7 * 0xa8 + 0x19;
    }
    else {
      local_e8 = *(long *)(lVar5 + uVar7 * 0xa8 + 0x28);
    }
    uStack_a8 = param_2[7];
    local_b0 = param_2[6];
    uStack_b8 = param_2[5];
    local_c0 = param_2[4];
    uStack_c8 = param_2[3];
    local_d0 = param_2[2];
    uStack_d8 = param_2[1];
    local_e0 = *param_2;
    lVar5 = FUN_00afac04((uint *)(param_1 + 0x2c0),&local_e8);
    puVar6 = *(undefined8 **)(lVar5 + 0x48);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[7] = uStack_a8;
      puVar6[6] = local_b0;
      puVar6[5] = uStack_b8;
      puVar6[4] = local_c0;
      puVar6[3] = uStack_c8;
      puVar6[2] = local_d0;
      puVar6[1] = uStack_d8;
      *puVar6 = local_e0;
      *(undefined8 *)(lVar5 + 0x88) = uStack_a8;
      *(undefined8 *)(lVar5 + 0x80) = local_b0;
      *(undefined8 *)(lVar5 + 0x78) = uStack_b8;
      *(undefined8 *)(lVar5 + 0x70) = local_c0;
      *(undefined8 *)(lVar5 + 0x68) = uStack_c8;
      *(undefined8 *)(lVar5 + 0x60) = local_d0;
      *(undefined8 *)(lVar5 + 0x58) = uStack_d8;
      *(undefined8 *)(lVar5 + 0x50) = local_e0;
    }
    uVar8 = (uint)uVar4;
    do {
      uVar8 = uVar8 + 1;
      uVar4 = (ulong)uVar8;
      uStack_68 = uStack_a8;
      local_70 = local_b0;
      uStack_78 = uStack_b8;
      local_80 = local_c0;
      uStack_88 = uStack_c8;
      local_90 = local_d0;
      uStack_98 = uStack_d8;
      local_a0 = local_e0;
      if (*(uint *)(param_1 + 0x2c0) <= uVar8) break;
    } while (*(int *)(*(long *)(param_1 + 0x2c8) + uVar4 * 8 + 4) == -1);
  } while( true );
}




void FUN_00afa9c8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = param_2;
  lVar2 = FUN_00afac04(param_1 + 0x2c0,&local_78);
  uStack_38 = param_3[7];
  local_40 = param_3[6];
  uStack_48 = param_3[5];
  local_50 = param_3[4];
  uStack_58 = param_3[3];
  local_60 = param_3[2];
  uStack_68 = param_3[1];
  local_70 = *param_3;
  puVar3 = *(undefined8 **)(lVar2 + 0x48);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[7] = uStack_38;
    puVar3[6] = local_40;
    puVar3[5] = uStack_48;
    puVar3[4] = local_50;
    puVar3[3] = uStack_58;
    puVar3[2] = local_60;
    puVar3[1] = uStack_68;
    *puVar3 = local_70;
    *(undefined8 *)(lVar2 + 0x88) = uStack_38;
    *(undefined8 *)(lVar2 + 0x80) = local_40;
    *(undefined8 *)(lVar2 + 0x78) = uStack_48;
    *(undefined8 *)(lVar2 + 0x70) = local_50;
    *(undefined8 *)(lVar2 + 0x68) = uStack_58;
    *(undefined8 *)(lVar2 + 0x60) = local_60;
    *(undefined8 *)(lVar2 + 0x58) = uStack_68;
    *(undefined8 *)(lVar2 + 0x50) = local_70;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00afaa84(long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x2c0);
  uVar3 = 0;
  do {
    uVar7 = uVar3;
    uVar4 = (ulong)uVar7;
    if (uVar1 <= uVar7) break;
    uVar3 = uVar7 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x2c8) + uVar4 * 8 + 4) == -1);
  do {
    if (uVar1 == uVar7) {
      if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar5 = *(long *)(param_1 + 0x2e0);
    uVar6 = (ulong)*(uint *)(*(long *)(param_1 + 0x2c8) + uVar4 * 8 + 4);
    if ((*(byte *)(lVar5 + uVar6 * 0xa8 + 0x18) & 1) == 0) {
      local_60 = lVar5 + uVar6 * 0xa8 + 0x19;
    }
    else {
      local_60 = *(long *)(lVar5 + uVar6 * 0xa8 + 0x28);
    }
    lVar5 = FUN_00afac04((uint *)(param_1 + 0x2c0),&local_60);
    *(undefined4 *)(lVar5 + 0xa0) = param_2;
    uVar7 = (uint)uVar4;
    do {
      uVar7 = uVar7 + 1;
      uVar4 = (ulong)uVar7;
      if (*(uint *)(param_1 + 0x2c0) <= uVar7) break;
    } while (*(int *)(*(long *)(param_1 + 0x2c8) + uVar4 * 8 + 4) == -1);
  } while( true );
}




void FUN_00afabac(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  lVar2 = FUN_00afac04(param_1 + 0x2c0,&local_30);
  *(undefined4 *)(lVar2 + 0xa0) = param_3;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00afac04(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  uVar4 = FUN_00e6a474(uVar8);
  uVar5 = FUN_0091ed5c(uVar8,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if (uVar3 != 0xffffffff) {
      uVar7 = (ulong)*(uint *)(lVar6 + (ulong)uVar3 * 8 + 4);
      goto LAB_00afac90;
    }
  }
  uVar7 = 0xffffffff;
LAB_00afac90:
  return *(long *)(param_1 + 8) + uVar7 * 0xa8;
}




void FUN_00afaca8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  uVar2 = FUN_00afac04(param_1 + 0x2c0,&local_30);
  FUN_00af9c90(param_1,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00afad08(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  undefined1 local_510 [8];
  undefined1 auStack_508 [8];
  undefined1 auStack_500 [144];
  long local_470;
  undefined4 local_468;
  undefined4 uStack_464;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  (**(code **)(*param_1 + 0x68))(param_1,auStack_508,local_510);
  plVar1 = param_1 + 0x35;
  FUN_00af88f4((local_510._0_4_ - auStack_508._0_4_) / (local_510._4_4_ - auStack_508._4_4_),plVar1)
  ;
  uVar5 = FUN_01997b28();
  FUN_0199b18c(uVar5,"OmniLight.Position",0,param_1[0x34] + 0x58);
  FUN_0199b18c(uVar5,"OmniLight.Color",0,param_1[0x34] + 100);
  FUN_0199b18c(uVar5,"OmniLight.Attenuation",0,param_1[0x34] + 0x70);
  FUN_0199b18c(uVar5,"OmniLight.Position",1,param_1[0x34] + 0x7c);
  FUN_0199b18c(uVar5,"OmniLight.Color",1,param_1[0x34] + 0x88);
  FUN_0199b18c(uVar5,"OmniLight.Attenuation",1,param_1[0x34] + 0x94);
  uVar4 = FUN_0199ad04(uVar5,"Probe.Samples");
  plVar11 = *(long **)(param_1[0x34] + 0xa0);
  plVar9 = (long *)*plVar11;
  while (plVar9 != (long *)0x0) {
    plVar11 = plVar11 + 1;
    local_470 = *plVar9;
    local_468 = (undefined4)plVar9[1];
    uStack_464 = 0x3f800000;
    FUN_0199aecc(uVar5,uVar4,0,&local_470);
    plVar9 = (long *)*plVar11;
  }
  if ((long *)param_1[0x60] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x60] + 0x20))();
    uVar6 = FUN_0198abd8();
    if ((uVar6 & 1) != 0) {
      lVar10 = param_1[0x60];
      uVar5 = FUN_01997b18(0);
      uVar7 = (**(code **)(*param_3 + 0x138))(param_3);
      FUN_0199b6b8(&local_470,"Kindred menu mesh: mesh",lVar10 + 8,uVar5,uVar7,plVar1,0);
      FUN_0199cf00(0x3f800000,&local_470);
      FUN_0199c960(param_2,&local_470,0);
      FUN_0199b7a8(&local_470);
    }
  }
  uVar2 = *(uint *)(param_1 + 0x58);
  uVar14 = 0;
  do {
    uVar12 = uVar14;
    uVar6 = (ulong)uVar12;
    if (uVar2 <= uVar12) break;
    uVar14 = uVar12 + 1;
  } while (*(int *)(param_1[0x59] + uVar6 * 8 + 4) == -1);
  if (uVar2 != uVar12) {
    uVar14 = 0;
    do {
      lVar10 = param_1[0x5c];
      uVar13 = (ulong)*(uint *)(param_1[0x59] + uVar6 * 8 + 4);
      if ((*(long *)(lVar10 + uVar13 * 0xa8 + 0x48) != 0) &&
         (uVar8 = FUN_00f30cfc(), (uVar8 & 1) != 0)) {
        (&local_470)[uVar14] = lVar10 + uVar13 * 0xa8 + 8;
        uVar14 = uVar14 + 1;
      }
      uVar12 = (uint)uVar6;
      do {
        uVar12 = uVar12 + 1;
        uVar6 = (ulong)uVar12;
        if (*(uint *)(param_1 + 0x58) <= uVar12) break;
      } while (*(int *)(param_1[0x59] + uVar6 * 8 + 4) == -1);
    } while (uVar2 != uVar12);
    if (uVar14 != 0) {
      uVar5 = FUN_01997b18(0);
      uVar7 = (**(code **)(*param_3 + 0x138))(param_3);
      FUN_0199b72c(auStack_500,"Kindred menu mesh: particlefx",&local_470,uVar14,uVar5,uVar7,plVar1,
                   0);
      FUN_0199c960(param_2,auStack_500,0);
      FUN_0199b7a8(auStack_500);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

