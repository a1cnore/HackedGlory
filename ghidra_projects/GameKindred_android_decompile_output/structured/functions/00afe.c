// functions/00afe — 10 functions
#include "libGameKindred.h"




void FUN_00afe4f4(void)

{
  return;
}




void FUN_00afe4f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027daf28;
  FUN_00f01868(param_1 + 0x3c0);
  param_1[0x32a] = &PTR_FUN_027dc928;
  param_1[0x395] = &PTR_FUN_02826f38;
  param_1[0x3ac] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x3af);
  FUN_00f13d08(param_1 + 0x395);
  param_1[0x36b] = &PTR_FUN_02826f38;
  param_1[0x382] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x385);
  FUN_00f13d08(param_1 + 0x36b);
  param_1[0x341] = &PTR_FUN_02826f38;
  param_1[0x358] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x35b);
  FUN_00f13d08(param_1 + 0x341);
  FUN_00f13d08(param_1 + 0x32a);
  param_1[0x30c] = &PTR_FUN_028266f0;
  param_1[0x323] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x326);
  FUN_00f13d08(param_1 + 0x30c);
  FUN_00f01868(param_1 + 0x2fb);
  FUN_00aad654(param_1 + 0x181);
  param_1[0x163] = &PTR_FUN_028266f0;
  param_1[0x17a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x17d);
  FUN_00f13d08(param_1 + 0x163);
  FUN_00f0d3a4(param_1 + 0x13d);
  param_1[0x113] = &PTR_FUN_02826f38;
  param_1[0x12a] = &PTR_FUN_02827098;
  param_1[0x53] = &PTR_FUN_027dcbe0;
  FUN_00f0a79c(param_1 + 0x12d);
  FUN_00f13d08(param_1 + 0x113);
  param_1[0xe9] = &PTR_FUN_02826f38;
  param_1[0x100] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x103);
  FUN_00f13d08(param_1 + 0xe9);
  param_1[0x53] = &PTR_FUN_027dc928;
  param_1[0xbe] = &PTR_FUN_02826f38;
  param_1[0xd5] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0xd8);
  FUN_00f13d08(param_1 + 0xbe);
  param_1[0x94] = &PTR_FUN_02826f38;
  param_1[0xab] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0xae);
  FUN_00f13d08(param_1 + 0x94);
  param_1[0x6a] = &PTR_FUN_02826f38;
  param_1[0x81] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x84);
  FUN_00f13d08(param_1 + 0x6a);
  FUN_00f13d08(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00afe738(void *param_1)

{
  FUN_00afe4f8();
  operator_delete(param_1);
  return;
}




void FUN_00afe75c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00afe764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00afe768(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00afe770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_00afe774(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00afe77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_00afe780(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  FUN_00f00298(&uStack_74,&local_78);
  plVar1 = param_1 + 0x17;
  FUN_00f13f08(uStack_74,local_78,plVar1);
  local_70 = 0x3f0000003f000000;
  fVar8 = *(float *)(param_1 + 0x3d2);
  if ((*(float *)(param_1 + 0x1f) != fVar8) ||
     (fVar8 = *(float *)((long)param_1 + 0x1e94), *(float *)((long)param_1 + 0xfc) != fVar8)) {
    param_1[0x1f] = param_1[0x3d2];
    FUN_0091ada4(plVar1);
  }
  (**(code **)(param_1[0x17] + 0x28))(plVar1,&local_70);
  uVar7 = (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(uVar7,param_1 + 0x35);
  uVar7 = (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(uVar7,param_1 + 0x53);
  uVar7 = (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(uVar7,param_1 + 0x30c);
  uVar7 = (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(uVar7,param_1 + 0x32a);
  fVar5 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar11 = 20.0 - fVar5 * 0.5;
  fVar5 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  plVar1 = param_1 + 0x13d;
  fVar6 = 10.0;
  fVar10 = 20.0 - fVar8 * 0.5;
  FUN_00f0d4e0(plVar1);
  fVar8 = fVar10 + fVar6 * 0.5;
  if ((*(float *)(param_1 + 0x145) != fVar11 + 10.0) || (*(float *)((long)param_1 + 0xa2c) != fVar8)
     ) {
    *(float *)(param_1 + 0x145) = fVar11 + 10.0;
    *(float *)((long)param_1 + 0xa2c) = fVar8;
    FUN_0091ada4(plVar1);
  }
  local_70 = 0x3f00000000000000;
  (**(code **)(param_1[0x13d] + 0x28))(plVar1,&local_70);
  fVar8 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  plVar2 = param_1 + 0x181;
  fVar6 = (float)FUN_00f01c20(plVar2);
  fVar9 = 0.0;
  FUN_00f0db64((fVar8 + -60.0) - fVar6,0,0x3f800000,plVar1);
  FUN_00f0d4e0(plVar1);
  fVar10 = fVar10 + fVar9 + 8.0;
  plVar1 = param_1 + 0x163;
  fVar8 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar6 = 4.0;
  FUN_00f13f08(fVar8 + -60.0,plVar1);
  if ((*(float *)(param_1 + 0x16b) != 0.0) || (*(float *)((long)param_1 + 0xb5c) != fVar10)) {
    *(undefined4 *)(param_1 + 0x16b) = 0;
    *(float *)((long)param_1 + 0xb5c) = fVar10;
    FUN_0091ada4(plVar1);
  }
  local_70 = 0x3f000000;
  (**(code **)(param_1[0x163] + 0x28))(plVar1,&local_70);
  FUN_00f0e700(plVar1);
  fVar10 = fVar10 + fVar6;
  fVar8 = (float)FUN_00f13e54(plVar2);
  fVar6 = -0.3;
  FUN_00f13e54(plVar2);
  FUN_00f07940(fVar8 * -0.3,fVar6 * 0.25,plVar2,1,param_1,1);
  if ((*(float *)(param_1 + 0x3c8) != fVar11) || (*(float *)((long)param_1 + 0x1e44) != fVar10)) {
    *(float *)(param_1 + 0x3c8) = fVar11;
    *(float *)((long)param_1 + 0x1e44) = fVar10;
    FUN_0091ada4(param_1 + 0x3c0);
  }
  lVar4 = param_1[0x3d1];
  if (lVar4 != 0) {
    fVar8 = -20.0;
    (**(code **)(*param_1 + 0x48))(param_1);
    fVar8 = fVar8 * 0.5 - fVar10;
    FUN_00f13f08((fVar5 * 0.5 + -20.0) - fVar11,lVar4);
    if ((param_1[0x3d1] != 0) && ((char)param_1[0x3d3] != '\0')) {
      (**(code **)(*param_1 + 0x48))(param_1);
      fVar6 = DAT_02be3670;
      fVar5 = (float)(int)(fVar8 * 0.5 - fVar10);
      (**(code **)(*(long *)param_1[0x3d1] + 0x50))();
      fVar10 = (float)(int)fVar8;
      if (fVar5 < fVar10) {
        fVar6 = (float)(int)(local_78 - fVar6);
        (**(code **)(*param_1 + 0x48))(param_1);
        if ((float)(int)fVar8 < fVar6) {
          (**(code **)(*param_1 + 0x48))(param_1);
          fVar8 = (fVar10 - fVar5) + fVar8;
          if (fVar6 <= fVar8) {
            fVar8 = fVar6;
          }
          if (fVar5 <= fVar8) {
            fVar5 = fVar8;
          }
          uVar7 = (**(code **)(*param_1 + 0x48))(param_1);
          FUN_00f13f08(uVar7,fVar5,param_1);
          (**(code **)(*param_1 + 0x90))(param_1);
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00afec14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1 + 0x1a8;
  if (*(long *)(param_1 + 0x278) != 0) {
    FUN_00f0e628(lVar1);
  }
  FUN_00f0e548(lVar1,param_2,param_3);
  FUN_00f0e670(lVar1,param_4,2);
  lVar1 = param_1 + 0x1860;
  if (*(long *)(param_1 + 0x1930) != 0) {
    FUN_00f0e628(lVar1);
  }
  FUN_00f0e548(lVar1,param_2,param_3);
  FUN_00f0e670(lVar1,param_4,2);
  return;
}




void FUN_00afecb4(long param_1,byte param_2)

{
  long *plVar1;
  
  if (*(byte *)(param_1 + 0x1e99) != (param_2 & 1)) {
    *(byte *)(param_1 + 0x1e99) = param_2 & 1;
    FUN_00afed18(param_1);
    plVar1 = *(long **)(param_1 + 0x1e88);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00afed08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x140))(plVar1,param_2 & 1);
      return;
    }
  }
  return;
}




void FUN_00afed18(long *param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort *puVar8;
  long lVar9;
  float fVar10;
  
  FUN_00f01980();
  if ((param_2 & 1) == 0) {
    *(uint *)((long)param_1 + 0x185c) = *(uint *)((long)param_1 + 0x185c) & 0xfffffffb;
    if ((*(float *)(param_1 + 9) != 1.0) || (*(float *)((long)param_1 + 0x4c) != 1.0)) {
      lVar9 = NEON_fmov(0x3f800000,4);
      param_1[9] = lVar9;
      FUN_0091ada4(param_1);
    }
    if ((~*(uint *)((long)param_1 + 0x84) & 0x7f80) != 0) {
      *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x7f80;
      FUN_0091ada4(param_1);
    }
    uVar3 = FUN_00eff63c(0x3f4ccccd,0x3f4ccccd,0x3e000000,FUN_009a7608);
    uVar4 = FUN_00efee28(0,0x3e000000,FUN_009a7608);
    lVar9 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar9 + 0x20014) = *(int *)(lVar9 + 0x20014) + 1;
      FUN_00efcd98(puVar7);
      *(int *)(lVar9 + 0x20020) = *(int *)(lVar9 + 0x20020) + 1;
      lVar9 = DAT_03210d00;
      uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar6 != 0xffff) {
        puVar8 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar6 * 0x40);
        if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = *puVar8;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
        *(int *)(lVar9 + 0x20014) = *(int *)(lVar9 + 0x20014) + 1;
        FUN_00efc8e8(puVar8);
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        puVar8[0xc] = 0;
        puVar8[0xd] = 0;
        puVar8[0xe] = 0;
        puVar8[0xf] = 0;
        puVar8[0x14] = 0;
        puVar8[0x10] = 0;
        puVar8[0x11] = 0;
        puVar8[0x12] = 0;
        puVar8[0x13] = 0;
        *(undefined ***)puVar8 = &PTR_FUN_027d0db0;
        *(int *)(lVar9 + 0x20020) = *(int *)(lVar9 + 0x20020) + 1;
        goto LAB_00aff3e4;
      }
    }
    puVar8 = (ushort *)0x0;
LAB_00aff3e4:
    FUN_00a99c48(puVar8,&DAT_03139918,0,0);
    FUN_00efcea4(puVar7,uVar3,uVar4,puVar8,0);
    lVar9 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar9 + 0x20014) = *(int *)(lVar9 + 0x20014) + 1;
      FUN_00efc8e8(puVar8);
      *(undefined ***)puVar8 = &PTR_FUN_02825148;
      *(int *)(lVar9 + 0x20020) = *(int *)(lVar9 + 0x20020) + 1;
    }
    FUN_00f02308(param_1,puVar7,puVar8,0);
    return;
  }
  if ((*(float *)(param_1 + 9) != 0.8) || (*(float *)((long)param_1 + 0x4c) != 0.8)) {
    param_1[9] = 0x3f4ccccd3f4ccccd;
    FUN_0091ada4(param_1);
  }
  uVar5 = *(uint *)((long)param_1 + 0x84);
  if ((uVar5 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = uVar5 & 0xffff807f;
    FUN_0091ada4(param_1);
    uVar5 = *(uint *)((long)param_1 + 0x84);
  }
  *(uint *)((long)param_1 + 0x84) = uVar5 | 4;
  uVar3 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e000000,FUN_00a269a4);
  uVar4 = FUN_00efee28(0x3f800000,0x3e000000,FUN_009a7608);
  lVar9 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar9 + 0x20014) = *(int *)(lVar9 + 0x20014) + 1;
    FUN_00efcd98(puVar7);
    *(int *)(lVar9 + 0x20020) = *(int *)(lVar9 + 0x20020) + 1;
    lVar9 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 != 0xffff) {
      puVar8 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar6 * 0x40);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar9 + 0x20014) = *(int *)(lVar9 + 0x20014) + 1;
      FUN_00efc8e8(puVar8);
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[0x14] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      puVar8[0x12] = 0;
      puVar8[0x13] = 0;
      *(undefined ***)puVar8 = &PTR_FUN_027d0db0;
      *(int *)(lVar9 + 0x20020) = *(int *)(lVar9 + 0x20020) + 1;
      goto LAB_00aff07c;
    }
  }
  puVar8 = (ushort *)0x0;
LAB_00aff07c:
  FUN_00a99c48(puVar8,&DAT_03139930,0,0);
  FUN_00efcea4(puVar7,uVar3,uVar4,puVar8,0);
  FUN_00f022a0(param_1,puVar7);
  uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
  fVar10 = 0.100000024;
  (**(code **)(*param_1 + 0x48))(uVar3,0x3dccccd0,param_1);
  plVar1 = param_1 + 0x2fb;
  FUN_00f01980(plVar1);
  uVar2 = *(uint *)((long)param_1 + 0x185c);
  uVar5 = uVar2 & 0xfffffffb;
  *(uint *)((long)param_1 + 0x185c) = uVar5;
  if ((~uVar2 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x185c) = uVar5 | 0x7f80;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x304) != 1.0) || (*(float *)((long)param_1 + 0x1824) != 1.0)) {
    lVar9 = NEON_fmov(0x3f800000,4);
    param_1[0x304] = lVar9;
    FUN_0091ada4(plVar1);
  }
  lVar9 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar9 + 0x20014) = *(int *)(lVar9 + 0x20014) + 1;
    FUN_00efc8e8(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_02825100;
    *(int *)(lVar9 + 0x20020) = *(int *)(lVar9 + 0x20020) + 1;
  }
  FUN_00f022a0(plVar1,puVar7);
  uVar3 = FUN_00eff63c(0x3f8ccccd,((float)uVar3 * 0.100000024) / fVar10 + 1.0,0x3ecccccd,
                       FUN_00ab3980);
  uVar4 = FUN_00efee28(0,0x3ecccccd,FUN_00ab3980);
  lVar9 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar9 + 0x20014) = *(int *)(lVar9 + 0x20014) + 1;
    FUN_00efcd98(puVar7);
    *(int *)(lVar9 + 0x20020) = *(int *)(lVar9 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar7,uVar3,uVar4,0);
  FUN_00f022a0(plVar1,puVar7);
  lVar9 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar9 + 0x20014) = *(int *)(lVar9 + 0x20014) + 1;
    FUN_00efc8e8(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_02825148;
    *(int *)(lVar9 + 0x20020) = *(int *)(lVar9 + 0x20020) + 1;
  }
  FUN_00f022a0(plVar1,puVar7);
  return;
}

