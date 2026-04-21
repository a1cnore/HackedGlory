// functions/00bfe — 20 functions
#include "libGameKindred.h"




void FUN_00bfe0c8(uint *param_1,undefined8 *param_2)

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
    FUN_00bfec78(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00bfe150(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_00bfe1bc(undefined1 param_1 [16],float param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (*(int *)(param_3 + 0x1668) != 0) {
    uVar6 = 0;
    fVar8 = 0.0;
    do {
      (**(code **)(**(long **)(*(long *)(param_3 + 0x1670) + uVar6 * 8) + 0x48))();
      uVar6 = uVar6 + 1;
      fVar8 = fVar8 + param_2;
    } while (uVar6 < *(uint *)(param_3 + 0x1668));
    lVar2 = param_3 + 0x4f8;
    FUN_00f13e54(lVar2);
    fVar7 = param_2;
    local_60 = (float)FUN_00f13e54(lVar2);
    local_5c = fVar8;
    if (fVar8 < param_2) {
      local_5c = fVar7;
    }
    local_60 = local_60 + -20.0;
    FUN_00f13f18(param_3 + 0xf20,&local_60);
    lVar5 = *(long *)(*(long *)(param_3 + 0x1670) + (ulong)(*(int *)(param_3 + 0x1668) - 1) * 8);
    fVar8 = 0.0;
    FUN_00f07940(0,lVar5,3,*(undefined8 *)(lVar5 + 0x20),3);
    uVar3 = *(int *)(param_3 + 0x1668) - 2;
    if (-1 < (int)uVar3) {
      uVar6 = (ulong)uVar3;
      do {
        fVar8 = 0.0;
        FUN_00f07940(0,*(undefined8 *)(*(long *)(param_3 + 0x1670) + uVar6 * 8),3,
                     *(undefined8 *)(*(long *)(param_3 + 0x1670) + (ulong)((int)uVar6 + 1) * 8),0);
        bVar1 = 0 < (long)uVar6;
        uVar6 = uVar6 - 1;
      } while (bVar1);
    }
    FUN_00ed5688(lVar2);
    FUN_00f13e54(lVar2);
    fVar7 = fVar8;
    FUN_00f13e54(param_3 + 0xf20);
    local_64 = fVar8 - fVar7;
    if (0.0 < local_64) {
      local_64 = 0.0;
    }
    local_68 = 0x41a00000;
    FUN_00ed5a14(lVar2,&local_68);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfe348(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  
  if (*(char *)(param_2 + 0x1680) != '\0') {
    return;
  }
  FUN_00f01980(param_2 + 0xc0);
  uVar2 = FUN_00efee28(0x3f800000,0x3e19999a,FUN_009a7608);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(param_1,puVar5);
  uVar3 = FUN_00efee28(0,0x3e19999a,FUN_009a7608);
  FUN_00f02308(param_2 + 0xc0,uVar2,puVar5,uVar3,0);
  uVar2 = FUN_00efee28(0,0x3e19999a,FUN_009a7608);
  FUN_00f022a0(param_2 + 0x178,uVar2);
  uVar2 = FUN_00efee28(0,0x3e19999a,FUN_009a7608);
  FUN_00f022a0(param_2 + 0x11b8,uVar2);
  uVar2 = FUN_00efee28(0,0x3e19999a,FUN_009a7608);
  FUN_00f022a0(param_2 + 0xfd8,uVar2);
  uVar2 = FUN_00efee28(0,0x3e19999a,FUN_009a7608);
  FUN_00f022a0(param_2 + 0x10c8,uVar2);
  return;
}




void FUN_00bfe520(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1 + 0x11b8;
  uVar4 = FUN_00ed7fb4(lVar1);
  if ((uVar4 & 1) == 0) {
    FUN_00e705c8(&local_48,&DAT_01e277f2);
    FUN_00f0d75c(param_1 + 0x1380,&local_48);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
    FUN_00ed7d60(lVar1);
    uVar2 = *(uint *)(param_1 + 0x1fc);
    if ((uVar2 & 0x7f80) != 0x5f80) {
      *(uint *)(param_1 + 0x1fc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5f80;
      FUN_0091ada4(param_1 + 0x178);
    }
    uVar2 = *(uint *)(param_1 + 0x105c);
    if ((uVar2 & 0x7f80) != 0x7900) {
      *(uint *)(param_1 + 0x105c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x7900;
      FUN_0091ada4(param_1 + 0xfd8);
    }
    if ((*(uint *)(param_1 + 0x114c) & 0x7f80) != 0x3f80) {
      *(uint *)(param_1 + 0x114c) = *(uint *)(param_1 + 0x114c) & 0xffff807f | 0x3f80;
      FUN_0091ada4(param_1 + 0x10c8);
    }
    if ((~*(uint *)(param_1 + 0x123c) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x123c) = *(uint *)(param_1 + 0x123c) | 0x7f80;
      FUN_0091ada4(lVar1);
    }
    FUN_00f01980(param_1 + 0xc0);
    uVar5 = FUN_00efee28(0x3f800000,0x3e19999a,FUN_009a7608);
    FUN_00f022a0(param_1 + 0xc0,uVar5);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfe684(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  FUN_00ed84c8(param_1 + 0x11b8);
  FUN_00ed7eb0(param_1 + 0x11b8);
  if ((param_2 & 1) != 0) {
    FUN_00f01980(param_1 + 0xc0);
    uVar1 = FUN_00efee28(0,0x3e19999a,FUN_009a7608);
    FUN_00f022a0(param_1 + 0xc0,uVar1);
    return;
  }
  FUN_00bfe348(0x41000000,param_1);
  return;
}




void FUN_00bfe70c(float param_1,long param_2,byte *param_3,undefined4 param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = param_2 + 0x178;
  local_4c = param_4;
  if (*(long *)(param_2 + 0x248) != 0) {
    FUN_00f0e628(lVar1);
  }
  pbVar4 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar4 = param_3 + 1;
  }
  FUN_00f0e548(lVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440,pbVar4);
  FUN_00f0e670(lVar1,&local_4c,2);
  uVar2 = *(uint *)(param_2 + 0x1fc);
  if ((uVar2 >> 7 & 0xff) != (int)(param_1 * 255.0)) {
    *(uint *)(param_2 + 0x1fc) =
         uVar2 & 0xffff8000 | uVar2 & 0x7f | ((int)(param_1 * 255.0) & 0xffU) << 7;
    FUN_0091ada4(lVar1);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfe7e4(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2ec) =
       *(uint *)(param_1 + 0x2ec) & 0xfffffff0 | *(uint *)(param_1 + 0x2ec) & 7 | (param_2 & 1) << 3
  ;
  return;
}




void FUN_00bfe7f8(long param_1,byte param_2)

{
  uint uVar1;
  
  *(byte *)(param_1 + 0x1680) = param_2 & 1;
  if ((param_2 & 1) == 0) {
    FUN_00bfe348(0x41000000,param_1);
    return;
  }
  if ((~*(uint *)(param_1 + 0x144) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x7f80;
    FUN_0091ada4(param_1 + 0xc0);
  }
  uVar1 = *(uint *)(param_1 + 0x1fc);
  if ((uVar1 & 0x7f80) != 0x5f80) {
    *(uint *)(param_1 + 0x1fc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x5f80;
    FUN_0091ada4(param_1 + 0x178);
  }
  uVar1 = *(uint *)(param_1 + 0x105c);
  if ((uVar1 & 0x7f80) != 0x7900) {
    *(uint *)(param_1 + 0x105c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x7900;
    FUN_0091ada4(param_1 + 0xfd8);
  }
  if ((*(uint *)(param_1 + 0x114c) & 0x7f80) != 0x3f80) {
    *(uint *)(param_1 + 0x114c) = *(uint *)(param_1 + 0x114c) & 0xffff807f | 0x3f80;
    FUN_0091ada4(param_1 + 0x10c8);
  }
  if ((~*(uint *)(param_1 + 0x123c) & 0x7f80) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x123c) = *(uint *)(param_1 + 0x123c) | 0x7f80;
  FUN_0091ada4(param_1 + 0x11b8);
  return;
}




void FUN_00bfe900(void)

{
  return;
}




void FUN_00bfe904(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x1680) == '\0') {
    FUN_00bfe684(param_1,1);
  }
  FUN_00f0490c(param_2);
  return;
}




void FUN_00bfe938(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  
  lVar2 = FUN_00f04924(param_2);
  if (lVar2 != 0) {
    (**(code **)**(undefined8 **)(param_1 + 0xb8))(*(undefined8 **)(param_1 + 0xb8),lVar2);
  }
  cVar1 = *(char *)(param_1 + 0x1680);
  FUN_00ed84c8(param_1 + 0x11b8);
  if (cVar1 == '\0') {
    FUN_00ed7eb0(param_1 + 0x11b8);
    FUN_00bfe348(0x41000000,param_1);
  }
  FUN_00f0490c(param_2);
  return;
}




void FUN_00bfe9b4(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  fStack_6c = param_2;
  local_70 = (float)(**(code **)(*param_3 + 0x48))();
  plVar1 = param_3 + 0x18;
  FUN_00f13f18(plVar1,&local_70);
  plVar4 = param_3 + 0x237;
  fVar8 = -20.0;
  FUN_00ed7fc8(local_70 + -20.0,plVar4);
  FUN_00f13e54(plVar4);
  fVar6 = local_70;
  plVar2 = param_3 + 0x1fb;
  fVar10 = fVar8 * -0.38;
  FUN_00f13e54(plVar4);
  FUN_00f13f08(fVar6,plVar2);
  local_78 = (float)FUN_00f0e700(plVar2);
  local_78 = local_78 + 12.0;
  fStack_74 = fVar8 + 12.0;
  FUN_00f13f18(param_3 + 0x219,&local_78);
  fVar9 = 0.0;
  FUN_00f07940(0,fVar10,plVar4,2,plVar1,2);
  FUN_00f07940(0,0,plVar2,6,plVar1,6);
  fVar10 = 0.0;
  FUN_00f07940(0,param_3 + 0x219,8,plVar2,8);
  fVar8 = fStack_6c;
  fVar6 = local_70;
  plVar2 = param_3 + 0x6b;
  FUN_00f13e54(plVar4);
  if ((*(uint *)((long)param_3 + 0x114c) & 8) != 0) {
    fVar9 = 24.0;
  }
  fVar9 = (fVar8 - fVar10) - fVar9;
  FUN_00f13f08(fVar6,plVar2);
  plVar4 = param_3 + 0x2f;
  local_78 = (float)FUN_00f13e54(plVar2);
  fStack_74 = fVar9;
  FUN_00f13f18(plVar4,&local_78);
  plVar3 = param_3 + 0x4d;
  uVar7 = FUN_00f0e700(plVar4);
  FUN_00f0e700(plVar3);
  FUN_00f13f08(uVar7,plVar3);
  local_78 = (float)FUN_00f13e54(plVar2);
  fStack_74 = fVar9;
  FUN_00f13f18(param_3 + 0x9f,&local_78);
  FUN_00f07940(0,0,plVar4,8,plVar2,8);
  FUN_00f07940(0,0,plVar3,6,plVar4,6);
  FUN_00f07940(0,0,plVar2,4,plVar1,4);
  FUN_00ed89c8(param_3 + 0x24e);
  FUN_00bfe1bc(param_3);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfec08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f4718;
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00bfec3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f4718;
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00bfec78(uint *param_1,uint param_2)

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




void FUN_00bfecf8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  FUN_00f1306c();
  param_1[0x2b] = 0;
  *param_1 = (long)&PTR_FUN_027f49b8;
  FUN_00f017e8(param_1 + 0x2c);
  plVar1 = param_1 + 0x3f;
  param_1[0x2c] = (long)&PTR_FUN_027c1f80;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  FUN_00f017e8(plVar1);
  param_1[0x3f] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(param_1 + 0x50);
  plVar2 = param_1 + 0x6e;
  FUN_00f0d160(plVar2);
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  FUN_00e70314(param_1 + 0x96);
  *(undefined2 *)(param_1 + 0x98) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2c,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x50,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78,&DAT_01bee7fa);
  return;
}




void FUN_00bfee08(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  
  uVar2 = *(uint *)(param_1 + 0x3d);
  plVar1 = (long *)param_1[0x3e];
  *param_1 = &PTR_FUN_027f49b8;
  plVar3 = plVar1;
  if (uVar2 != 0) {
    do {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
        uVar2 = *(uint *)(param_1 + 0x3d);
        plVar1 = (long *)param_1[0x3e];
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1 + uVar2);
  }
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x3d) = 0;
  }
  FUN_00f0d3a4(param_1 + 0x6e);
  param_1[0x50] = &PTR_FUN_028266f0;
  param_1[0x67] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6a);
  FUN_00f13d08(param_1 + 0x50);
  FUN_00f01868(param_1 + 0x3f);
  if ((void *)param_1[0x3e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3e]);
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
  }
  FUN_00f01868(param_1 + 0x2c);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00bfeef4(void *param_1)

{
  FUN_00bfee08();
  operator_delete(param_1);
  return;
}




void FUN_00bfef18(long *param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  param_1[0x94] = param_2;
  FUN_00cac438(local_60,*(undefined8 *)(param_2 + 8));
  pvVar1 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar1 = local_50;
  }
  FUN_00f0e540(param_1 + 0x50,pvVar1);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  local_60[0] = NEON_fmov(0x3f800000,4);
  FUN_00bff048(param_1,7,local_60);
  local_60[0] = 0x3f99999a3f99999a;
  FUN_00bff048(param_1,8,local_60);
  local_60[0] = 0x3f99999a3f99999a;
  FUN_00bff048(param_1,9,local_60);
  local_60[0] = 0x3f99999a3f99999a;
  FUN_00bff048(param_1,10,local_60);
  local_60[0] = 0x3f99999a3f99999a;
  FUN_00bff048(param_1,0xb,local_60);
  local_60[0] = 0x3f99999a3f99999a;
  FUN_00bff048(param_1,0xc,local_60);
  (**(code **)(*param_1 + 0x138))(param_1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

