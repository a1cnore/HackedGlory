// functions/00f0c — 31 functions
#include "libGameKindred.h"




void FUN_00f0c030(float param_1,float param_2,long *param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined4 local_88;
  float fStack_84;
  long local_80;
  undefined4 local_78;
  float fStack_74;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)param_3[5];
  if (plVar3 != (long *)0x0) {
    uVar2 = (ulong)(*(int *)((long)param_3 + 0xc4) == 0);
    pfVar4 = (float *)((ulong)&local_70 | uVar2 << 2);
    do {
      local_70 = plVar3[8];
      local_78 = (**(code **)(*plVar3 + 0x50))(plVar3);
      local_80 = plVar3[10];
      fVar5 = *(float *)((ulong)&local_78 | uVar2 << 2);
      fVar6 = fVar5 * (*(float *)((ulong)&local_80 | uVar2 << 2) - param_1);
      *pfVar4 = fVar6;
      fStack_74 = param_2;
      if ((param_4 & 1) != 0) {
        local_88 = (**(code **)(*param_3 + 0x48))(param_3);
        *pfVar4 = fVar6 + *(float *)((ulong)&local_88 | uVar2 << 2) * param_1;
        fStack_84 = fVar5;
      }
      param_2 = (float)local_70;
      if ((*(float *)(plVar3 + 8) != (float)local_70) ||
         (param_2 = local_70._4_4_, *(float *)((long)plVar3 + 0x44) != local_70._4_4_)) {
        plVar3[8] = local_70;
        FUN_0091ada4(plVar3);
      }
      plVar3 = (long *)plVar3[6];
    } while (plVar3 != (long *)0x0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f0c168(long *param_1,float *param_2)

{
  int iVar1;
  
  if (((*(float *)(param_1 + 0x17) == *param_2) && (*(float *)((long)param_1 + 0xbc) == param_2[1]))
     && (*(float *)(param_1 + 0x18) == param_2[2])) {
    return;
  }
  *(float *)(param_1 + 0x18) = param_2[2];
  param_1[0x17] = *(long *)param_2;
  if (((DAT_03211008 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_03211008), iVar1 != 0)) {
    __cxa_guard_release(&DAT_03211008);
  }
  DAT_03211000 = _DAT_03218ef8;
  *(undefined4 *)((long)&DAT_03211000 + (ulong)*(uint *)((long)param_1 + 0xc4) * 4) =
       *(undefined4 *)((long)param_1 + 0xbc);
  (**(code **)(*param_1 + 0x28))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00f0c214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00f0c244(long *param_1,int param_2)

{
  if (*(int *)((long)param_1 + 0xc4) == param_2) {
    return;
  }
  *(int *)((long)param_1 + 0xc4) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00f0c260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00f0c264(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  undefined8 uVar9;
  int iVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    uVar7 = 0;
    do {
      uVar1 = *(uint *)(param_1 + 0xd4);
      if ((int)uVar1 < 1) {
        uVar1 = *(uint *)(param_1 + 0xd0);
        if ((int)uVar1 < 1) {
          uVar13 = 0;
        }
        else {
          uVar2 = 0;
          if (uVar1 != 0) {
            uVar2 = uVar7 / uVar1;
          }
          uVar13 = CONCAT44(uVar7 - uVar2 * uVar1,uVar2);
        }
      }
      else {
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = uVar7 / uVar1;
        }
        uVar13 = CONCAT44(uVar2,uVar7 - uVar2 * uVar1);
      }
      uVar9 = *(undefined8 *)(param_1 + 0xb8);
      uVar12 = *(undefined8 *)(param_1 + 0xc0);
      uVar14 = NEON_ucvtf(uVar13,4);
      fVar15 = (float)((ulong)uVar14 >> 0x20);
      fVar11 = (float)uVar12 * (float)uVar14;
      fVar18 = (float)uVar9 * (float)uVar14 + fVar11;
      fVar8 = (float)(**(code **)(*plVar4 + 0x50))(plVar4);
      fVar16 = (float)*(undefined8 *)(param_1 + 200);
      fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20);
      fVar18 = fVar18 + (float)*(undefined8 *)(param_1 + 0xb8) * fVar16 +
                        fVar8 * ((float)plVar4[10] - fVar16);
      fVar8 = (float)((ulong)uVar9 >> 0x20) * fVar15 + (float)((ulong)uVar12 >> 0x20) * fVar15 +
              (float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) * fVar17 +
              fVar11 * ((float)((ulong)plVar4[10] >> 0x20) - fVar17);
      if ((*(float *)(plVar4 + 8) != fVar18) || (*(float *)((long)plVar4 + 0x44) != fVar8)) {
        plVar4[8] = CONCAT44(fVar8,fVar18);
        FUN_0091ada4(plVar4);
      }
      plVar4 = (long *)plVar4[6];
      uVar7 = uVar7 + 1;
      iVar10 = (int)((ulong)uVar13 >> 0x20);
      if (uVar5 < iVar10 + 1U) {
        uVar5 = iVar10 + 1;
      }
      if (uVar6 < (int)uVar13 + 1U) {
        uVar6 = (int)uVar13 + 1;
      }
    } while (plVar4 != (long *)0x0);
  }
  local_60 = *(float *)(param_1 + 0xb8) * (float)uVar6 +
             *(float *)(param_1 + 0xc0) * (float)(uVar6 - 1);
  fStack_5c = *(float *)(param_1 + 0xbc) * (float)uVar5 +
              *(float *)(param_1 + 0xc4) * (float)(uVar5 - 1);
  FUN_00f13f18(param_1,&local_60);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0c410(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00f0bcd8(param_1 + 0x17);
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar2 = param_2[2];
  param_1[0x1a] = param_2[3];
  param_1[0x19] = lVar2;
  lVar2 = *param_2;
  param_1[0x18] = param_2[1];
  param_1[0x17] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00f0c470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00f0c474(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00f0c498(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00f0c4bc(undefined8 *param_1)

{
  FUN_00f1306c();
  *param_1 = &PTR_FUN_02825f68;
  param_1[0x2b] = 0x600000003;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}




void FUN_00f0c4fc(undefined4 param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  undefined1 auStack_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f08078(param_4,auStack_4c);
  *(undefined4 *)(param_2 + 0x2b) = param_3;
  *(undefined4 *)((long)param_2 + 0x15c) = param_4;
  *(undefined4 *)(param_2 + 0x2c) = param_1;
  (**(code **)(*param_2 + 0xe8))(param_2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0c584(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  
  lVar4 = *(long *)(param_1 + 0xe0);
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      lVar1 = lVar5;
      if ((((*(uint *)(lVar4 + 0x84) ^ 0xffffffff) & 0x44) == 0) && (lVar1 = lVar4, lVar5 != 0)) {
        switch(*(undefined4 *)(param_1 + 0x158)) {
        case 0:
          iVar6 = *(int *)(param_1 + 0x15c);
          uVar2 = 2;
          fVar7 = -*(float *)(param_1 + 0x160);
          uVar3 = 0;
          break;
        case 1:
          fVar7 = *(float *)(param_1 + 0x160);
          iVar6 = *(int *)(param_1 + 0x15c);
          uVar3 = 2;
          uVar2 = 0;
          break;
        case 2:
          iVar6 = *(int *)(param_1 + 0x15c);
          uVar2 = 1;
          uVar3 = 3;
          fVar7 = -*(float *)(param_1 + 0x160);
          break;
        case 3:
          fVar7 = *(float *)(param_1 + 0x160);
          iVar6 = *(int *)(param_1 + 0x15c);
          uVar2 = 3;
          uVar3 = 1;
          break;
        default:
          goto switchD_00f0c5e0_default;
        }
        FUN_00f07b18(fVar7,lVar4,uVar2,lVar5,uVar3);
        if (iVar6 != 6) {
          FUN_00f07b18(0,lVar4,iVar6,lVar5,iVar6);
        }
      }
switchD_00f0c5e0_default:
      lVar4 = *(long *)(lVar4 + 0x30);
      lVar5 = lVar1;
    } while (lVar4 != 0);
  }
  FUN_00f13238(param_1);
  return;
}




void FUN_00f0c6a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00f0c6d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00f0c714(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00f13ca4();
  uVar1 = DAT_03210cf8;
  *(undefined4 *)(param_1 + 0x18) = 0x7000000;
  *param_1 = &PTR_thunk_FUN_00f13d08_028260b8;
  param_1[0x17] = &PTR_FUN_02826218;
  param_1[0x19] = uVar1;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  return;
}




void FUN_00f0c774(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xd0) = *param_2;
  return;
}




long FUN_00f0c780(long param_1)

{
  return param_1 + 0xd0;
}




void FUN_00f0c788(undefined1 param_1 [16],float param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  
  if (*(char *)((long)param_3 + 0xd3) != '\0') {
    pfVar5 = (float *)FUN_00965ecc(param_3);
    fVar8 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    fVar11 = pfVar5[4];
    fVar12 = pfVar5[5];
    fVar14 = pfVar5[6];
    pfVar6 = (float *)*param_4;
    fVar15 = (float)NEON_ucvtf((uint)*(byte *)((long)param_3 + 0xd3));
    fVar9 = *pfVar5;
    fVar10 = pfVar5[1];
    uVar1 = (undefined1)param_3[0x1a];
    uVar2 = *(undefined1 *)((long)param_3 + 0xd1);
    uVar3 = *(undefined1 *)((long)param_3 + 0xd2);
    pfVar6[4] = 0.0;
    pfVar6[5] = 1.0;
    fVar14 = (float)NEON_fminnm((int)(fVar14 * fVar15),0x437f0000);
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    fVar15 = (float)(int)fVar9;
    fVar10 = (float)(int)fVar10;
    pfVar6[2] = 0.0;
    *(undefined1 *)(pfVar6 + 3) = uVar1;
    *(undefined1 *)((long)pfVar6 + 0xd) = uVar2;
    *(undefined1 *)((long)pfVar6 + 0xe) = uVar3;
    *pfVar6 = fVar15;
    pfVar6[1] = fVar10;
    uVar4 = (undefined1)(int)fVar14;
    *(undefined1 *)((long)pfVar6 + 0xf) = uVar4;
    lVar7 = *param_4;
    fVar9 = fVar10 + param_2 * fVar12;
    *param_4 = lVar7 + 0x18;
    *(int *)(param_4 + 1) = (int)param_4[1] + 1;
    *(float *)(lVar7 + 0x18) = fVar15;
    *(float *)(lVar7 + 0x1c) = fVar9;
    *(undefined4 *)(lVar7 + 0x20) = 0;
    *(undefined1 *)(lVar7 + 0x24) = uVar1;
    *(undefined1 *)(lVar7 + 0x25) = uVar2;
    *(undefined1 *)(lVar7 + 0x26) = uVar3;
    *(undefined1 *)(lVar7 + 0x27) = uVar4;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    lVar7 = *param_4;
    uVar13 = NEON_fmov(0x3f800000,4);
    fVar8 = fVar15 + fVar8 * fVar11;
    *param_4 = lVar7 + 0x18;
    *(int *)(param_4 + 1) = (int)param_4[1] + 1;
    *(float *)(lVar7 + 0x18) = fVar8;
    *(float *)(lVar7 + 0x1c) = fVar10;
    *(undefined4 *)(lVar7 + 0x20) = 0;
    *(undefined1 *)(lVar7 + 0x24) = uVar1;
    *(undefined1 *)(lVar7 + 0x25) = uVar2;
    *(undefined1 *)(lVar7 + 0x26) = uVar3;
    *(undefined1 *)(lVar7 + 0x27) = uVar4;
    *(undefined8 *)(lVar7 + 0x28) = uVar13;
    lVar7 = *param_4;
    *param_4 = lVar7 + 0x18;
    *(int *)(param_4 + 1) = (int)param_4[1] + 1;
    *(float *)(lVar7 + 0x18) = fVar15;
    *(float *)(lVar7 + 0x1c) = fVar9;
    *(undefined4 *)(lVar7 + 0x20) = 0;
    *(undefined1 *)(lVar7 + 0x24) = uVar1;
    *(undefined1 *)(lVar7 + 0x25) = uVar2;
    *(undefined1 *)(lVar7 + 0x26) = uVar3;
    *(undefined1 *)(lVar7 + 0x27) = uVar4;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    lVar7 = *param_4;
    *param_4 = lVar7 + 0x18;
    *(int *)(param_4 + 1) = (int)param_4[1] + 1;
    *(float *)(lVar7 + 0x18) = fVar8;
    *(float *)(lVar7 + 0x1c) = fVar9;
    *(undefined4 *)(lVar7 + 0x20) = 0;
    *(undefined1 *)(lVar7 + 0x24) = uVar1;
    *(undefined1 *)(lVar7 + 0x25) = uVar2;
    *(undefined1 *)(lVar7 + 0x26) = uVar3;
    *(undefined1 *)(lVar7 + 0x27) = uVar4;
    *(undefined8 *)(lVar7 + 0x28) = 0x3f800000;
    lVar7 = *param_4;
    *param_4 = lVar7 + 0x18;
    *(int *)(param_4 + 1) = (int)param_4[1] + 1;
    *(float *)(lVar7 + 0x18) = fVar8;
    *(float *)(lVar7 + 0x1c) = fVar10;
    *(undefined4 *)(lVar7 + 0x20) = 0;
    *(undefined1 *)(lVar7 + 0x24) = uVar1;
    *(undefined1 *)(lVar7 + 0x25) = uVar2;
    *(undefined1 *)(lVar7 + 0x26) = uVar3;
    *(undefined1 *)(lVar7 + 0x27) = uVar4;
    *(undefined8 *)(lVar7 + 0x28) = uVar13;
    *param_4 = *param_4 + 0x18;
    *(int *)(param_4 + 1) = (int)param_4[1] + 1;
  }
  return;
}




void FUN_00f0c980(long param_1)

{
  FUN_00f0c788(param_1 + -0xb8);
  return;
}




undefined8 FUN_00f0c988(void)

{
  return 0;
}




undefined8 FUN_00f0c990(void)

{
  return 0;
}




void FUN_00f0c998(void)

{
  FUN_0199d9a4(0);
  return;
}




void FUN_00f0c9b0(void)

{
  FUN_0199d9a4(0);
  return;
}




void FUN_00f0c9c8(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00f0c9ec(long param_1)

{
  FUN_00f13d08(param_1 + -0xb8);
  return;
}




void FUN_00f0c9f4(long param_1)

{
  FUN_00f13d08((void *)(param_1 + -0xb8));
  operator_delete((void *)(param_1 + -0xb8));
  return;
}




void FUN_00f0ca1c(undefined8 *param_1)

{
  FUN_00f11234();
  *param_1 = &PTR_FUN_02826260;
  return;
}




void FUN_00f0ca4c(undefined1 param_1 [16],float param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined4 local_41c4;
  undefined1 auStack_41c0 [16392];
  undefined1 auStack_1b8 [144];
  undefined1 auStack_128 [40];
  undefined1 auStack_100 [176];
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  FUN_0199cb3c(auStack_128);
  FUN_0199b368(auStack_100);
  fVar5 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f1c0cc(auStack_128,(int)fVar5,(int)param_2);
  local_41c4 = 0;
  FUN_00f114c4(param_3,param_4,auStack_41c0,&local_41c4,auStack_128);
  uVar2 = local_41c4;
  uVar3 = FUN_01997b18(0);
  FUN_0199b72c(auStack_1b8,"Composite task (ScreenNode)",auStack_41c0,uVar2,uVar3,auStack_128,
               auStack_100,0);
  FUN_0199c960(param_4,auStack_1b8,0);
  FUN_0199b7a8(auStack_1b8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0cb90(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00f0cbb4(undefined8 *param_1)

{
  FUN_00f11234();
  *param_1 = &PTR_FUN_028263c0;
  FUN_00f017e8(param_1 + 0x34);
  param_1[0x45] = DAT_03218f08;
  param_1[0x46] = 0x200000001;
  *(undefined1 *)(param_1 + 0x47) = 1;
  FUN_00f023ec(param_1,param_1 + 0x34,1);
  *(uint *)((long)param_1 + 0x224) = *(uint *)((long)param_1 + 0x224) & 0xffffffbf;
  return;
}




void FUN_00f0cc30(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_00f11234();
  *param_3 = &PTR_FUN_028263c0;
  FUN_00f017e8(param_3 + 0x34);
  *(undefined4 *)(param_3 + 0x46) = param_4;
  *(undefined4 *)((long)param_3 + 0x234) = param_5;
  param_3[0x45] = 0x3f0000003f000000;
  *(undefined1 *)(param_3 + 0x47) = 0;
  FUN_00f13f08(param_1,param_2,param_3);
  return;
}




void FUN_00f0cca8(long *param_1,float *param_2)

{
  if ((*(float *)(param_1 + 10) != *param_2) || (*(float *)((long)param_1 + 0x54) != param_2[1])) {
    param_1[10] = *(long *)param_2;
    FUN_0091ada4(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00f0ccfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f0cd00(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = _DAT_03218efc;
  fVar7 = DAT_03218ef8;
  fVar3 = (float)(**(code **)(*param_3 + 0x48))();
  fVar8 = param_2;
  if ((0.0 < fVar3) && ((**(code **)(*param_3 + 0x48))(param_3), fVar8 = param_2, 0.0 < param_2)) {
    plVar1 = param_3 + 0x34;
    fVar3 = (float)FUN_00f01c54(plVar1,0,0,0,(char)param_3[0x47]);
    iVar2 = (int)param_3[0x46];
    fVar8 = param_2;
    if (iVar2 == 2) {
      fVar5 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      fVar5 = fVar5 / fVar3;
      (**(code **)(*param_3 + 0x48))(param_3);
      iVar2 = *(int *)((long)param_3 + 0x234);
      fVar10 = fVar8 / param_2;
      fVar4 = fVar5;
      if (fVar5 <= fVar10) {
        fVar4 = fVar10;
      }
      if (((iVar2 == 2) || ((iVar2 == 0 && (1.0 < fVar4)))) || ((iVar2 == 1 && (fVar4 < 1.0)))) {
        if ((*(float *)(param_3 + 0x3d) != fVar4) || (*(float *)((long)param_3 + 0x1ec) != fVar4)) {
          *(float *)(param_3 + 0x3d) = fVar4;
          *(float *)((long)param_3 + 0x1ec) = fVar4;
          FUN_0091ada4(plVar1);
        }
        if (fVar10 <= fVar5) {
          (**(code **)(*param_3 + 0x48))(param_3);
          fVar8 = param_2 * fVar4 - fVar8;
          fVar9 = -(*(float *)((long)param_3 + 0x22c) * fVar8);
        }
        else {
          fVar7 = (float)(**(code **)(*param_3 + 0x48))(param_3);
          fVar8 = *(float *)(param_3 + 0x45);
          fVar7 = -(fVar8 * (fVar3 * fVar4 - fVar7));
        }
      }
    }
    else if (iVar2 == 1) {
      fVar5 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      fVar5 = fVar5 / fVar3;
      (**(code **)(*param_3 + 0x48))(param_3);
      iVar2 = *(int *)((long)param_3 + 0x234);
      fVar10 = fVar8 / param_2;
      fVar4 = fVar5;
      if (fVar10 <= fVar5) {
        fVar4 = fVar10;
      }
      if (((iVar2 == 2) || ((iVar2 == 0 && (1.0 < fVar4)))) || ((iVar2 == 1 && (fVar4 < 1.0)))) {
        if ((*(float *)(param_3 + 0x3d) != fVar4) || (*(float *)((long)param_3 + 0x1ec) != fVar4)) {
          *(float *)(param_3 + 0x3d) = fVar4;
          *(float *)((long)param_3 + 0x1ec) = fVar4;
          FUN_0091ada4(plVar1);
        }
        fVar6 = (float)(**(code **)(*param_3 + 0x48))(param_3);
        if (fVar5 <= fVar10) {
          fVar8 = fVar8 - param_2 * fVar4;
          fVar9 = fVar8 * *(float *)((long)param_3 + 0x22c);
        }
        else {
          fVar8 = *(float *)(param_3 + 0x45);
          fVar7 = (fVar6 - fVar3 * fVar4) * fVar8;
        }
      }
    }
    else if (iVar2 == 0) {
      fVar4 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      fVar4 = fVar4 / fVar3;
      fVar8 = fVar8 / param_2;
      if (*(int *)((long)param_3 + 0x234) == 1) {
        fVar4 = (float)NEON_fminnm(fVar4,0x3f800000);
        fVar8 = (float)NEON_fminnm(fVar8,0x3f800000);
      }
      else if (*(int *)((long)param_3 + 0x234) == 0) {
        if (fVar4 <= 1.0) {
          fVar4 = 1.0;
        }
        if (fVar8 <= 1.0) {
          fVar8 = 1.0;
        }
      }
      if ((*(float *)(param_3 + 0x3d) != fVar4) || (*(float *)((long)param_3 + 0x1ec) != fVar8)) {
        *(float *)(param_3 + 0x3d) = fVar4;
        *(float *)((long)param_3 + 0x1ec) = fVar8;
        FUN_0091ada4(plVar1);
      }
    }
  }
  fVar3 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar7 = fVar7 - fVar3 * *(float *)(param_3 + 10);
  fVar9 = fVar9 - fVar8 * *(float *)((long)param_3 + 0x54);
  if ((*(float *)(param_3 + 0x3c) == fVar7) && (*(float *)((long)param_3 + 0x1e4) == fVar9)) {
    return;
  }
  *(float *)(param_3 + 0x3c) = fVar7;
  *(float *)((long)param_3 + 0x1e4) = fVar9;
  FUN_0091ada4(param_3 + 0x34);
  return;
}

