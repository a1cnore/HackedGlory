// functions/00ac7 — 22 functions
#include "libGameKindred.h"




void FUN_00ac7158(long param_1)

{
  FUN_00ac6ce0(param_1 + -0x30);
  return;
}




void FUN_00ac7160(float param_1,float param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float local_68;
  undefined1 auStack_64 [4];
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ecfbc4();
  if ((((uVar2 & 1) != 0) && (uVar2 = FUN_01980b08(), (uVar2 & 1) != 0)) &&
     (uVar2 = FUN_01980b3c(1), (uVar2 & 1) != 0)) {
    FUN_00f08be8(param_3 + 0x2bd8);
    uVar2 = FUN_00e70b04();
    if ((uVar2 & 1) == 0) {
      uVar3 = 1;
    }
    else {
      FUN_00f08be8(param_3 + 0x1618);
      uVar2 = FUN_00e70b04();
      if ((uVar2 & 1) != 0) goto LAB_00ac71ec;
      uVar3 = 0;
    }
    FUN_00ecfca4(param_3,uVar3);
  }
LAB_00ac71ec:
  FUN_00f00298(auStack_64,&local_68);
  fVar4 = local_68 * 0.5;
  FUN_00f13e54(param_3 + 0x1b8);
  param_2 = param_2 * 0.5;
  fVar4 = fVar4 - param_2;
  if ((*(float *)(param_3 + 0x488) != 0.0) ||
     (param_2 = *(float *)(param_3 + 0x48c), param_2 != fVar4)) {
    *(undefined4 *)(param_3 + 0x488) = 0;
    *(float *)(param_3 + 0x48c) = fVar4;
    FUN_0091ada4(param_3 + 0x448);
  }
  local_60 = 0;
  (**(code **)(*(long *)(param_3 + 0x448) + 0x28))(param_3 + 0x448,&local_60);
  FUN_00f13e54(param_3 + 0x1b8);
  fVar4 = local_68 * 0.5 + param_2 * 0.5;
  if ((*(float *)(param_3 + 0x578) != 0.0) || (*(float *)(param_3 + 0x57c) != fVar4)) {
    *(undefined4 *)(param_3 + 0x578) = 0;
    *(float *)(param_3 + 0x57c) = fVar4;
    FUN_0091ada4(param_3 + 0x538);
  }
  local_60 = 0x3f80000000000000;
  (**(code **)(*(long *)(param_3 + 0x538) + 0x28))(param_3 + 0x538,&local_60);
  FUN_00b252ec(param_3 + 0x4f68);
  param_1 = *(float *)(param_3 + 0x50c8) - param_1;
  *(float *)(param_3 + 0x50c8) = param_1;
  if (param_1 <= 1.0) {
    *(uint *)(param_3 + 0x734) = *(uint *)(param_3 + 0x734) | 4;
    *(uint *)(param_3 + 0x4fec) = *(uint *)(param_3 + 0x4fec) & 0xfffffffb;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac7334(long param_1)

{
  FUN_00ac7160(param_1 + -0x30);
  return;
}




void FUN_00ac733c(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  ushort *puVar9;
  undefined1 local_74 [4];
  undefined1 auStack_70 [4];
  undefined4 local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  FUN_00ac6ce0();
  FUN_00f00298(&local_6c,auStack_70);
  uVar5 = FUN_00ecfbc4(param_1);
  if ((uVar5 & 1) == 0) {
    FUN_00f01980(param_1 + 0x30);
    uVar2 = *(uint *)(param_1 + 0x14c);
    lVar1 = param_1 + 200;
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 4;
    *(uint *)(param_1 + 0x14c) = uVar2 | 0x10;
    if ((uVar2 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x14c) = uVar2 & 0xffff807f | 0x10;
      FUN_0091ada4(lVar1);
    }
    uVar6 = FUN_00efee28(0x3f000000,0x3f0ccccd,0);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,uVar6);
    uVar2 = *(uint *)(param_1 + 0x5bc);
    lVar1 = param_1 + 0x538;
    if ((uVar2 & 0x7f80) != 0xc80) {
      *(uint *)(param_1 + 0x5bc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0xc80;
      FUN_0091ada4(lVar1);
    }
    uVar6 = FUN_00efee28(0x3f59999a,0x3f0ccccd,0);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,uVar6);
    uVar2 = *(uint *)(param_1 + 0x4cc);
    lVar1 = param_1 + 0x448;
    if ((uVar2 & 0x7f80) != 0xc80) {
      *(uint *)(param_1 + 0x4cc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0xc80;
      FUN_0091ada4(lVar1);
    }
    uVar6 = FUN_00efee28(0x3f59999a,0x3f0ccccd,0);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,uVar6);
    lVar1 = param_1 + 0x1b8;
    if ((*(uint *)(param_1 + 0x23c) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x23c) = *(uint *)(param_1 + 0x23c) & 0xffff807f;
      FUN_0091ada4(lVar1);
    }
    FUN_00f13f08(local_6c,0,lVar1);
    uVar6 = FUN_00eff73c(local_6c,0x44910000,0x3f0ccccd,lVar1,FUN_00a269a4);
    uVar7 = FUN_00efee28(0x3f800000,0x3f0ccccd,0);
    lVar4 = DAT_03210d00;
    uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar8 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
      if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efcd98(puVar9);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efcea4(puVar9,uVar6,uVar7,0);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,puVar9);
  }
  local_74[0] = 1;
  FUN_00ac7600(param_1 + 0xb8,local_74);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac7600(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void FUN_00ac766c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort *puVar8;
  undefined1 local_84 [4];
  undefined1 auStack_80 [4];
  undefined4 local_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(&local_7c,auStack_80);
  uVar4 = FUN_00ecfbc4(param_1);
  if ((uVar4 & 1) != 0) {
    lVar1 = param_1 + 0x1b8;
    *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) & 0xffffffef;
    uVar5 = FUN_00eff73c(local_7c,0,0x3f0ccccd,lVar1,FUN_00ac7950);
    uVar6 = FUN_00efee28(0,0x3eef5c2a,0);
    lVar3 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efcd98(puVar8);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00efcea4(puVar8,uVar5,uVar6,0);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,puVar8);
    uVar5 = FUN_00efee28(0x3dcccccd,0x3f0ccccd,0);
    FUN_00f01980(param_1 + 0x538);
    FUN_00f022a0(param_1 + 0x538,uVar5);
    uVar5 = FUN_00efee28(0x3dcccccd,0x3f0ccccd,0);
    FUN_00f01980(param_1 + 0x448);
    FUN_00f022a0(param_1 + 0x448,uVar5);
    uVar5 = FUN_00efee28(0,0x3f0ccccd,0);
    FUN_00f01980(param_1 + 200);
    FUN_00f022a0(param_1 + 200,uVar5);
    uVar5 = FUN_00efed6c(0x3f0ccccd);
    lVar1 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efc8e8(puVar8);
      *(undefined ***)puVar8 = &PTR_FUN_02825148;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00f01980(param_1 + 0x30);
    FUN_00f02308(param_1 + 0x30,uVar5,puVar8,0);
  }
  local_84[0] = 0;
  FUN_00ac7600(param_1 + 0xb8,local_84);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00ac7950(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  param_1 = param_1 / (param_4 * 0.5);
  if (1.0 <= param_1) {
    param_1 = param_1 + -2.0;
    fVar1 = param_1 * param_1 * (param_1 * 3.5949094 + 2.5949094) + 2.0;
  }
  else {
    fVar1 = param_1 * param_1 * (param_1 * 3.5949094 + -2.5949094);
  }
  return param_3 * 0.5 * fVar1 + param_2;
}




void FUN_00ac79d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00ecfca4(param_1,param_3);
  return;
}




void FUN_00ac79d8(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00b08d84();
  plVar1 = param_1 + 0x4e;
  *param_1 = (long)&PTR_FUN_027d6a10;
  FUN_00f0d160(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  if ((*(float *)(param_1 + 0x56) != 0.0) || (*(float *)((long)param_1 + 0x2b4) != 0.0)) {
    param_1[0x56] = 0;
    FUN_0091ada4(plVar1);
  }
  local_40 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_40);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac7aa0(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = param_1 + 0x4e;
  FUN_00f0d75c(plVar1);
  uVar2 = FUN_00f0d4e0(plVar1);
  FUN_00f0d4e0(plVar1);
  FUN_00f13f08(uVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00ac7afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(0x41400000,param_1);
  return;
}




void FUN_00ac7b00(void)

{
  return;
}




void FUN_00ac7b04(void)

{
  return;
}




void FUN_00ac7b08(void)

{
  return;
}




void FUN_00ac7b0c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027d6898;
  param_1[6] = &PTR_FUN_027d6910;
  param_1[0x9ed] = &PTR_FUN_027d3cc8;
  param_1[0xa04] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0xa16] != (void *)0x0) {
    operator_delete__((void *)param_1[0xa16]);
    param_1[0xa16] = 0;
    param_1[0xa15] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x9ed);
  FUN_009c7fa8(param_1 + 0x735);
  FUN_009c7fa8(param_1 + 0x47d);
  FUN_009c7fa8(param_1 + 0x1c5);
  lVar1 = 0;
  param_1[0x156] = &PTR_FUN_027db530;
  do {
    FUN_00f0d3a4((long)param_1 + lVar1 + 0xcf0);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != -0x260);
  FUN_00f01868(param_1 + 0x167);
  FUN_00f01868(param_1 + 0x156);
  lVar1 = 0;
  param_1[0xe7] = &PTR_FUN_027db530;
  do {
    FUN_00f0d3a4((long)param_1 + lVar1 + 0x978);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != -0x260);
  FUN_00f01868(param_1 + 0xf8);
  FUN_00f01868(param_1 + 0xe7);
  FUN_00f01868(param_1 + 0xd6);
  FUN_00f01868(param_1 + 0xc5);
  param_1[0xa7] = &PTR_FUN_028266f0;
  param_1[0xbe] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc1);
  FUN_00f13d08(param_1 + 0xa7);
  param_1[0x89] = &PTR_FUN_028266f0;
  param_1[0xa0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa3);
  FUN_00f13d08(param_1 + 0x89);
  param_1[0x6b] = &PTR_FUN_028266f0;
  param_1[0x82] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x85);
  FUN_00f13d08(param_1 + 0x6b);
  FUN_00f13d08(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_028266f0;
  param_1[0x30] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x33);
  FUN_00f13d08(param_1 + 0x19);
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_00f01868(param_1 + 6);
  return;
}




void FUN_00ac7cd4(void *param_1)

{
  FUN_00ac7b0c();
  operator_delete(param_1);
  return;
}




void FUN_00ac7cf8(long param_1)

{
  FUN_00ac7b0c(param_1 + -0x30);
  return;
}




void FUN_00ac7d00(long param_1)

{
  FUN_00ac7b0c((void *)(param_1 + -0x30));
  operator_delete((void *)(param_1 + -0x30));
  return;
}




void FUN_00ac7d28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d6a10;
  FUN_00f0d3a4(param_1 + 0x4e);
  FUN_009c825c(param_1);
  return;
}




void FUN_00ac7d60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d6a10;
  FUN_00f0d3a4(param_1 + 0x4e);
  FUN_009c825c(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ac7da0(long param_1)

{
  if ((*(float *)(param_1 + 0x2b8) == 0.9) && (*(float *)(param_1 + 700) == 0.9)) {
    return;
  }
  *(undefined8 *)(param_1 + 0x2b8) = 0x3f6666663f666666;
  FUN_0091ada4(param_1 + 0x270);
  return;
}




void FUN_00ac7de0(long param_1)

{
  undefined8 uVar1;
  
  if ((*(float *)(param_1 + 0x2b8) == 1.0) && (*(float *)(param_1 + 700) == 1.0)) {
    return;
  }
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x2b8) = uVar1;
  FUN_0091ada4(param_1 + 0x270);
  return;
}




void FUN_00ac7e14(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  code *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar15 = tpidr_el0;
  local_78 = *(long *)(lVar15 + 0x28);
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027d6b90;
  FUN_00b12bd8(plVar1,0);
  plVar2 = param_1 + 0xa7;
  FUN_00ab6c24(plVar2,0);
  plVar3 = param_1 + 0x361;
  param_1[0x360] = 0;
  param_1[0x35f] = 0;
  FUN_00f0e4a8();
  plVar4 = param_1 + 0x37f;
  FUN_00f0e4a8(plVar4);
  FUN_00f0e4a8();
  plVar5 = param_1 + 0x3bb;
  FUN_00f0bdbc(plVar5,0);
  plVar6 = param_1 + 0x3d4;
  param_1[0x3bb] = (long)&PTR_FUN_027c3260;
  FUN_00f0bdbc(plVar6,1);
  plVar7 = param_1 + 0x3ed;
  param_1[0x3d4] = (long)&PTR_FUN_027ccd08;
  FUN_00f0bdbc(plVar7,1);
  plVar8 = param_1 + 0x406;
  param_1[0x3ed] = (long)&PTR_FUN_027ccd08;
  FUN_00f0bdbc(plVar8,1);
  plVar9 = param_1 + 0x41f;
  param_1[0x406] = (long)&PTR_FUN_027ccd08;
  FUN_00f0e4a8();
  plVar10 = param_1 + 0x43d;
  FUN_00f0e4a8(plVar10);
  plVar11 = param_1 + 0x45b;
  FUN_00f0d160(plVar11);
  plVar12 = param_1 + 0x481;
  FUN_00f0d160(plVar12);
  FUN_00f0d160();
  plVar13 = param_1 + 0x4d0;
  FUN_00f11234(plVar13);
  plVar14 = param_1 + 0x504;
  FUN_00f0bdbc(plVar14,1);
  param_1[0x504] = (long)&PTR_FUN_027ccd08;
  param_1[0x51e] = 0;
  param_1[0x51d] = 0;
  lVar17 = DAT_03218f00;
  param_1[0x525] = 3;
  *(undefined4 *)(param_1 + 0x523) = 0;
  param_1[0x51f] = lVar17;
  param_1[0x522] = 0;
  param_1[0x521] = 0;
  param_1[0x520] = 0;
  *(undefined1 *)(param_1 + 0x526) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar13,1);
  FUN_00f023ec(plVar13,plVar14,1);
  FUN_00f023ec(plVar14,plVar5,1);
  FUN_00f023ec(plVar5,plVar6,1);
  FUN_00f023ec(plVar6,plVar11,1);
  FUN_00f023ec(plVar5,plVar9,1);
  FUN_00f023ec(plVar5,plVar7,1);
  FUN_00f023ec(plVar7,plVar12,1);
  FUN_00f023ec(plVar5,plVar10,1);
  FUN_00f023ec(plVar5,plVar8,1);
  FUN_00f023ec(plVar8,param_1 + 0x4a7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  local_a8 = (code *)0x3f0000003f000000;
  FUN_00b12ff0(plVar1,&local_a8);
  uVar16 = *(uint *)((long)param_1 + 0x10c);
  if ((uVar16 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x10c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  if ((*(float *)(param_1 + 0x36b) != 0.5) || (*(float *)((long)param_1 + 0x1b5c) != 0.5)) {
    param_1[0x36b] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  FUN_00f112f0(plVar13,1);
  FUN_00f0d92c(param_1 + 0x18b,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xff404040);
  FUN_00ab7588(0x3f800000,plVar2,&local_a8);
  FUN_00b09144(0,plVar2);
  FUN_00ab75b0(0x3f000000,plVar2,&DAT_01bee7fa);
  local_80 = DAT_03210c64;
  local_a8 = thunk_FUN_00aca9a0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_009693a0(param_1 + 0xa8,&local_a8);
  FUN_00e705c8(&local_a8,"<empty>");
  FUN_00ab703c(0x41f00000,0x43c80000,0x43c80000,plVar2,0,&local_a8,&DAT_01bee7fa,&DAT_03218ef8,0);
  if (local_a0 != (long *)0x0) {
    operator_delete__(local_a0);
    local_a8 = (code *)0x0;
    local_a0 = (long *)0x0;
  }
  FUN_00ab7520(plVar2,1);
  if ((*(float *)(param_1 + 0xb1) != 0.5) || (*(float *)((long)param_1 + 0x58c) != 0.5)) {
    param_1[0xb1] = 0x3f0000003f000000;
    FUN_0091ada4(plVar2);
  }
  FUN_00ab74fc(0x41200000,0,plVar2);
  FUN_00ab74c8(plVar2,0);
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"arrow_down");
  FUN_00f0e548(param_1 + 0x39d,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_check");
  uVar16 = *(uint *)((long)param_1 + 0x1d6c);
  if ((uVar16 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x1d6c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x4c80;
    FUN_0091ada4(param_1 + 0x39d);
    uVar16 = *(uint *)((long)param_1 + 0x1d6c);
  }
  *(uint *)((long)param_1 + 0x1d6c) = uVar16 | 4;
  FUN_00b094a4(plVar2,&DAT_0320ffa8);
  *(undefined1 *)((long)param_1 + 0x1af2) = 0;
  FUN_00f0e548(plVar9,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  if ((*(float *)(param_1 + 0x429) != 0.5) || (*(float *)((long)param_1 + 0x214c) != 0.5)) {
    param_1[0x429] = 0x3f0000003f000000;
    FUN_0091ada4(plVar9);
  }
  FUN_00f0e548(plVar10,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  if ((*(float *)(param_1 + 0x447) != 0.5) || (*(float *)((long)param_1 + 0x223c) != 0.5)) {
    param_1[0x447] = 0x3f0000003f000000;
    FUN_0091ada4(plVar10);
  }
  param_1[0x4ce] = (long)plVar12;
  param_1[0x4cf] = (long)(param_1 + 0x4a7);
  param_1[0x4cd] = (long)plVar11;
  if (0 < (int)param_1[0x525]) {
    lVar17 = 0;
    do {
      *(uint *)(param_1[lVar17 + 0x4cd] + 0x84) =
           *(uint *)(param_1[lVar17 + 0x4cd] + 0x84) & 0xffffffef;
      FUN_00f0d7fc(param_1[lVar17 + 0x4cd],&DAT_01bee7fa);
      FUN_00f0d378(param_1[lVar17 + 0x4cd],PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18);
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)param_1[0x525]);
  }
  if (*(long *)(lVar15 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

