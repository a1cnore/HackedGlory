// functions/00adb — 12 functions
#include "libGameKindred.h"




void FUN_00adb0a8(int *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  FUN_00adad7c(param_1,param_1 + 4,param_1 + 8,param_3);
  if (param_1 + 0xc != param_2) {
    lVar6 = 0;
    piVar10 = param_1 + 0xc;
    piVar11 = param_1 + 8;
    do {
      piVar7 = piVar10;
      iVar1 = *piVar7;
      if (*piVar11 < iVar1) {
        iVar2 = piVar7[3];
        uVar8 = *(undefined8 *)(piVar7 + 1);
        lVar4 = lVar6;
        do {
          lVar9 = lVar4;
          *(undefined8 *)((long)param_1 + lVar9 + 0x38) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x28);
          *(undefined8 *)((long)param_1 + lVar9 + 0x30) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x20);
          piVar10 = param_1;
          if (lVar9 == -0x20) goto LAB_00adb150;
          lVar4 = lVar9 + -0x10;
        } while (*(int *)((long)param_1 + lVar9 + 0x10) < iVar1);
        piVar10 = (int *)((long)param_1 + lVar9 + 0x20);
LAB_00adb150:
        *piVar10 = iVar1;
        piVar10[3] = iVar2;
        *(undefined8 *)(piVar10 + 1) = uVar8;
      }
      lVar6 = lVar6 + 0x10;
      piVar10 = piVar7 + 4;
      piVar11 = piVar7;
    } while (piVar7 + 4 != param_2);
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00adb19c(int *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
  bVar5 = true;
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    goto switchD_00adb1ec_caseD_0;
  case 2:
    piVar12 = param_2 + -4;
    if (*param_1 < *piVar12) {
      uVar15 = *(undefined8 *)(param_1 + 2);
      uVar10 = *(undefined8 *)param_1;
      uVar14 = *(undefined8 *)piVar12;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)param_1 = uVar14;
      *(undefined8 *)(param_2 + -2) = uVar15;
      *(undefined8 *)piVar12 = uVar10;
    }
    break;
  case 3:
    FUN_00adad7c(param_1,param_1 + 4,param_2 + -4,param_3);
    break;
  case 4:
    FUN_00adae8c(param_1,param_1 + 4,param_1 + 8,param_2 + -4,param_3);
    break;
  case 5:
    FUN_00adaf80(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,param_2 + -4);
    break;
  default:
    FUN_00adad7c(param_1,param_1 + 4,param_1 + 8,param_3);
    if (param_1 + 0xc != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      piVar12 = param_1 + 0xc;
      piVar13 = param_1 + 8;
      do {
        piVar9 = piVar12;
        iVar1 = *piVar9;
        if (*piVar13 < iVar1) {
          iVar2 = piVar9[3];
          uVar10 = *(undefined8 *)(piVar9 + 1);
          lVar4 = lVar6;
          do {
            lVar11 = lVar4;
            *(undefined8 *)((long)param_1 + lVar11 + 0x38) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x28);
            *(undefined8 *)((long)param_1 + lVar11 + 0x30) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x20);
            piVar12 = param_1;
            if (lVar11 == -0x20) goto LAB_00adb2bc;
            lVar4 = lVar11 + -0x10;
          } while (*(int *)((long)param_1 + lVar11 + 0x10) < iVar1);
          piVar12 = (int *)((long)param_1 + lVar11 + 0x20);
LAB_00adb2bc:
          *piVar12 = iVar1;
          iVar7 = iVar7 + 1;
          piVar12[3] = iVar2;
          *(undefined8 *)(piVar12 + 1) = uVar10;
          if (iVar7 == 8) {
            bVar5 = piVar9 + 4 == param_2;
            goto switchD_00adb1ec_caseD_0;
          }
        }
        lVar6 = lVar6 + 0x10;
        piVar12 = piVar9 + 4;
        piVar13 = piVar9;
      } while (piVar9 + 4 != param_2);
    }
  }
  bVar5 = true;
switchD_00adb1ec_caseD_0:
  if (*(long *)(lVar3 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar5);
  }
  return;
}




void FUN_00adb360(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0092ea9c();
  if (*(int *)(param_1 + 0x28) == 1) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_40_02be9c48;
  }
  else {
    if (*(int *)(param_1 + 0x28) != 0) goto LAB_00adb3f0;
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98;
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  }
  if ((uVar2 & 1) == 0) {
    ppuVar3 = ppuVar4;
  }
  FUN_008fa54c(local_50,*ppuVar3);
  FUN_008fce60(param_2,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00adb3f0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00adb418(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  code *local_d8;
  undefined8 *puStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  long local_a8;
  
  lVar9 = tpidr_el0;
  local_a8 = *(long *)(lVar9 + 0x28);
  FUN_00ecfb1c();
  puVar1 = param_1 + 6;
  FUN_00f017e8(puVar1);
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *param_1 = &PTR_FUN_027d8318;
  param_1[6] = &PTR_FUN_027d8390;
  FUN_00f13ca4(param_1 + 0x19);
  puVar2 = param_1 + 0x30;
  FUN_00f017e8(puVar2);
  param_1[0x30] = &PTR_FUN_027c1f80;
  FUN_00b16678(param_1 + 0x41);
  puVar3 = param_1 + 0x1b5;
  FUN_00f017e8(puVar3);
  puVar4 = param_1 + 0x1c6;
  param_2 = param_2 & 1;
  param_1[0x1b5] = &PTR_FUN_027c1f80;
  FUN_00ab6c24(puVar4,param_2);
  puVar5 = param_1 + 0x47e;
  FUN_00ab6c24(puVar5,param_2);
  puVar6 = param_1 + 0x736;
  FUN_00ab6c24(puVar6,param_2);
  param_1[0x9f0] = 0;
  param_1[0x9ef] = 0;
  param_1[0x9ee] = 0;
  param_1[0x9f3] = 0;
  param_1[0x9f2] = 0;
  param_1[0x9f1] = 0x300000001;
  *(undefined4 *)(param_1 + 0x9f4) = DAT_03214ce8;
  *(undefined2 *)(param_1 + 0x9f5) = 1000;
  *(byte *)((long)param_1 + 0x4faa) =
       *(byte *)((long)param_1 + 0x4faa) & 0xe0 | (byte)((param_2 << 0x12) >> 0x10);
  (**(code **)(param_1[6] + 0x78))(puVar1,param_1 + 0x19,1);
  (**(code **)(param_1[6] + 0x78))(puVar1,puVar2,1);
  FUN_00f023ec(puVar2,param_1 + 0x41,1);
  FUN_00f023ec(puVar2,puVar3,1);
  FUN_00f023ec(puVar3,puVar4,1);
  FUN_00f023ec(puVar3,puVar5,1);
  FUN_00f023ec(puVar3,puVar6,1);
  if ((*(float *)(param_1 + 0x1d0) != 0.5) || (*(float *)((long)param_1 + 0xe84) != 0.5)) {
    param_1[0x1d0] = 0x3f0000003f000000;
    FUN_0091ada4(puVar4);
  }
  FUN_00f0dac8(param_1 + 0x2aa,0);
  uVar7 = *(uint *)((long)param_1 + 0xeb4);
  if ((uVar7 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0xeb4) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6c00;
    FUN_0091ada4(puVar4);
  }
  FUN_00ab703c(0x42400000,0x42c80000,0x43c80000,puVar4,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,0
              );
  uVar11 = FUN_0092ea9c();
  fVar12 = 1.2;
  fVar13 = 1.5;
  fVar10 = fVar13;
  if ((uVar11 & 1) == 0) {
    fVar10 = fVar12;
  }
  if ((*(float *)(param_1 + 0x1cf) != fVar10) || (*(float *)((long)param_1 + 0xe7c) != fVar10)) {
    *(float *)(param_1 + 0x1cf) = fVar10;
    *(float *)((long)param_1 + 0xe7c) = fVar10;
    FUN_0091ada4(puVar4);
  }
  FUN_00b09144(0,puVar4);
  param_1[0x1d1] = 0x4220000042a00000;
  *(uint *)((long)param_1 + 0xeb4) = *(uint *)((long)param_1 + 0xeb4) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x488) != 0.5) || (*(float *)((long)param_1 + 0x2444) != 0.5)) {
    param_1[0x488] = 0x3f0000003f000000;
    FUN_0091ada4(puVar5);
  }
  FUN_00f0dac8(param_1 + 0x562,0);
  uVar7 = *(uint *)((long)param_1 + 0x2474);
  if ((uVar7 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x2474) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6c00;
    FUN_0091ada4(puVar5);
  }
  FUN_00ab703c(0x42400000,0x42c80000,0x43c80000,puVar5,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,0
              );
  uVar11 = FUN_0092ea9c();
  fVar10 = fVar13;
  if ((uVar11 & 1) == 0) {
    fVar10 = fVar12;
  }
  if ((*(float *)(param_1 + 0x487) != fVar10) || (*(float *)((long)param_1 + 0x243c) != fVar10)) {
    *(float *)(param_1 + 0x487) = fVar10;
    *(float *)((long)param_1 + 0x243c) = fVar10;
    FUN_0091ada4(puVar5);
  }
  FUN_00b09144(0,puVar5);
  param_1[0x489] = 0x4220000042a00000;
  *(uint *)((long)param_1 + 0x2474) = *(uint *)((long)param_1 + 0x2474) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x740) != 0.5) || (*(float *)((long)param_1 + 0x3a04) != 0.5)) {
    param_1[0x740] = 0x3f0000003f000000;
    FUN_0091ada4(puVar6);
  }
  FUN_00f0dac8(param_1 + 0x81a,0);
  uVar7 = *(uint *)((long)param_1 + 0x3a34);
  if ((uVar7 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x3a34) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6c00;
    FUN_0091ada4(puVar6);
  }
  FUN_00ab703c(0x42400000,0x42c80000,0x43c80000,puVar6,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,0
              );
  uVar11 = FUN_0092ea9c();
  if ((uVar11 & 1) == 0) {
    fVar13 = fVar12;
  }
  if ((*(float *)(param_1 + 0x73f) != fVar13) || (*(float *)((long)param_1 + 0x39fc) != fVar13)) {
    *(float *)(param_1 + 0x73f) = fVar13;
    *(float *)((long)param_1 + 0x39fc) = fVar13;
    FUN_0091ada4(puVar6);
  }
  FUN_00b09144(0,puVar6);
  param_1[0x741] = 0x4220000042a00000;
  uVar8 = DAT_03210c64;
  *(uint *)((long)param_1 + 0x3a34) = *(uint *)((long)param_1 + 0x3a34) & 0xfffffffb;
  local_d8 = FUN_00adba08;
  local_c0 = 0;
  local_b8 = 0;
  local_c8 = 0;
  puStack_d0 = param_1;
  local_b0 = uVar8;
  FUN_009693a0(param_1 + 0x1c7,&local_d8);
  local_d8 = FUN_00adba08;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 1;
  puStack_d0 = param_1;
  local_b0 = uVar8;
  FUN_009693a0(param_1 + 0x47f,&local_d8);
  local_d8 = FUN_00adba08;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 2;
  puStack_d0 = param_1;
  local_b0 = uVar8;
  FUN_009693a0(param_1 + 0x737,&local_d8);
  local_b0 = DAT_03210f8c;
  local_d8 = FUN_00adba54;
  local_c0 = 0;
  local_b8 = 0;
  local_c8 = 0;
  puStack_d0 = param_1;
  FUN_009693a0(param_1 + 0x42,&local_d8);
  local_d8 = FUN_00adba54;
  local_b0 = DAT_03210f60;
  local_c0 = 0;
  local_b8 = 0;
  local_c8 = 0;
  puStack_d0 = param_1;
  FUN_009693a0(param_1 + 0x42,&local_d8);
  uVar7 = *(uint *)((long)param_1 + 0xb4);
  if ((uVar7 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xb4) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6600;
    FUN_0091ada4(puVar1);
  }
  if (*(long *)(lVar9 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00adba08(long param_1)

{
  undefined4 in_w4;
  
  *(undefined4 *)(param_1 + 0x4f94) = in_w4;
  *(byte *)(param_1 + 0x4faa) = *(byte *)(param_1 + 0x4faa) | 1;
  *(uint *)(param_1 + 0xeb4) = *(uint *)(param_1 + 0xeb4) & 0xffffffef;
  *(uint *)(param_1 + 0x2474) = *(uint *)(param_1 + 0x2474) & 0xffffffef;
  *(uint *)(param_1 + 0x3a34) = *(uint *)(param_1 + 0x3a34) & 0xffffffef;
  *(uint *)(param_1 + 0x28c) = *(uint *)(param_1 + 0x28c) & 0xffffffef;
  return;
}




void FUN_00adba54(long param_1)

{
  undefined8 in_x4;
  
  FUN_00ecfca4(param_1,in_x4);
  *(byte *)(param_1 + 0x4faa) = *(byte *)(param_1 + 0x4faa) | 1;
  *(uint *)(param_1 + 0xeb4) = *(uint *)(param_1 + 0xeb4) & 0xffffffef;
  *(uint *)(param_1 + 0x2474) = *(uint *)(param_1 + 0x2474) & 0xffffffef;
  *(uint *)(param_1 + 0x3a34) = *(uint *)(param_1 + 0x3a34) & 0xffffffef;
  *(uint *)(param_1 + 0x28c) = *(uint *)(param_1 + 0x28c) & 0xffffffef;
  return;
}




void FUN_00adbab8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d8318;
  param_1[6] = &PTR_FUN_027d8390;
  FUN_00adcc40();
  *(undefined4 *)(param_1 + 0x9f2) = 0;
  *(undefined4 *)(param_1 + 0x9f1) = 1;
  *(undefined2 *)(param_1 + 0x9f5) = 1000;
  *(byte *)((long)param_1 + 0x4faa) = *(byte *)((long)param_1 + 0x4faa) & 0xf5;
  if ((*(byte *)(param_1 + 0x9ee) & 1) != 0) {
    operator_delete((void *)param_1[0x9f0]);
  }
  FUN_009c7fa8(param_1 + 0x736);
  FUN_009c7fa8(param_1 + 0x47e);
  FUN_009c7fa8(param_1 + 0x1c6);
  FUN_00f01868(param_1 + 0x1b5);
  FUN_00ac51b8(param_1 + 0x41);
  FUN_00f01868(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x19);
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_00f01868(param_1 + 6);
  return;
}




void FUN_00adbb90(long param_1)

{
  FUN_00adcc40();
  *(undefined4 *)(param_1 + 0x4f90) = 0;
  *(undefined4 *)(param_1 + 0x4f88) = 1;
  *(undefined2 *)(param_1 + 0x4fa8) = 1000;
  *(byte *)(param_1 + 0x4faa) = *(byte *)(param_1 + 0x4faa) & 0xf5;
  return;
}




void FUN_00adbbe4(long param_1)

{
  FUN_00adbab8(param_1 + -0x30);
  return;
}




void FUN_00adbbec(void *param_1)

{
  FUN_00adbab8();
  operator_delete(param_1);
  return;
}




void FUN_00adbc10(long param_1)

{
  FUN_00adbab8((void *)(param_1 + -0x30));
  operator_delete((void *)(param_1 + -0x30));
  return;
}




void FUN_00adbc38(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined2 *puVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  undefined2 uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ushort uVar12;
  ushort *puVar13;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  FUN_008fce60(param_1 + 0x4f70);
  bVar6 = *(byte *)(param_1 + 0x4faa);
  puVar2 = (undefined2 *)(param_1 + 0x4fa8);
  uVar8 = (undefined2)((uint)*(undefined4 *)(param_3 + 0x7c) >> 0x10);
  *(byte *)(param_1 + 0x4faa) = bVar6;
  *puVar2 = uVar8;
  *(float *)(param_1 + 0x4f90) = (float)(int)*(short *)(param_3 + 0x7c);
  bVar5 = *(byte *)(param_3 + 0x80);
  *puVar2 = uVar8;
  *(byte *)(param_1 + 0x4faa) = (byte)(((bVar5 & 1) << 0x11) >> 0x10) | bVar6 & 0xfd;
  FUN_00ecfc98(param_1,*(undefined8 *)(param_3 + 0x60),*(undefined8 *)(param_3 + 0x48),
               *(undefined8 *)(param_3 + 0x50),*(undefined8 *)(param_3 + 0x58));
  lVar1 = param_1 + 0xe30;
  FUN_00ab7498(lVar1,param_3 + 0x10);
  lVar3 = param_1 + 0x23f0;
  FUN_00ab7498(lVar3,param_3 + 0x20);
  lVar4 = param_1 + 0x39b0;
  FUN_00ab7498(lVar4,param_3 + 0x30);
  uVar9 = FUN_00e70b04(param_3 + 0x10);
  uVar10 = FUN_00f02540(lVar1);
  if ((uVar9 & 1) == 0) {
    if ((uVar10 & 1) == 0) {
      FUN_00f023ec(param_1 + 0xda8,lVar1,1);
    }
    uVar11 = *(uint *)(param_1 + 0xeb4) | 0x14;
  }
  else {
    if ((uVar10 & 1) != 0) {
      FUN_00f01a4c(lVar1,1);
    }
    uVar11 = *(uint *)(param_1 + 0xeb4) & 0xffffffeb;
  }
  *(uint *)(param_1 + 0xeb4) = uVar11;
  uVar9 = FUN_00e70b04(param_3 + 0x20);
  uVar10 = FUN_00f02540(lVar3);
  if ((uVar9 & 1) == 0) {
    if ((uVar10 & 1) == 0) {
      FUN_00f023ec(param_1 + 0xda8,lVar3,1);
    }
    uVar11 = *(uint *)(param_1 + 0x2474) | 0x14;
  }
  else {
    if ((uVar10 & 1) != 0) {
      FUN_00f01a4c(lVar3,1);
    }
    uVar11 = *(uint *)(param_1 + 0x2474) & 0xffffffeb;
  }
  *(uint *)(param_1 + 0x2474) = uVar11;
  uVar9 = FUN_00e70b04(param_3 + 0x30);
  uVar10 = FUN_00f02540(lVar4);
  if ((uVar9 & 1) == 0) {
    if ((uVar10 & 1) == 0) {
      FUN_00f023ec(param_1 + 0xda8,lVar4,1);
    }
    uVar11 = *(uint *)(param_1 + 0x3a34) | 0x14;
  }
  else {
    if ((uVar10 & 1) != 0) {
      FUN_00f01a4c(lVar4,1);
    }
    uVar11 = *(uint *)(param_1 + 0x3a34) & 0xffffffeb;
  }
  *(uint *)(param_1 + 0x3a34) = uVar11;
  *(undefined4 *)(param_1 + 0x4f88) = *(undefined4 *)(param_3 + 0x40);
  *(undefined4 *)(param_1 + 0x4f8c) = *(undefined4 *)(param_3 + 0x68);
  bVar5 = *(byte *)(param_3 + 0x80);
  *puVar2 = *puVar2;
  *(byte *)(param_1 + 0x4faa) =
       (byte)(((bVar5 & 2) << 0x12) >> 0x10) | *(byte *)(param_1 + 0x4faa) & 0xf7;
  FUN_00f00298(&uStack_6c,&local_70);
  if ((((uint)*(byte *)(param_1 + 0x4faa) << 0x10) >> 0x13 & 1) == 0) {
    uVar11 = *(uint *)(param_1 + 0x14c) & 0xffffffeb;
  }
  else {
    FUN_00f13f08(uStack_6c,local_70,param_1 + 200);
    uVar11 = *(uint *)(param_1 + 0x14c) | 0x10;
  }
  *(uint *)(param_1 + 0x14c) = uVar11;
  uVar11 = 0;
  if ((((ulong)*(byte *)(param_3 + 0x80) << 0x20) >> 0x22 & 1) != 0) {
    if (((*(byte *)(param_1 + 0xeb4) >> 2 & 1) == 0) &&
       ((*(byte *)(param_1 + 0x2474) >> 2 & 1) == 0)) {
      uVar11 = (*(uint *)(param_1 + 0x3a34) & 4) << 2;
    }
    else {
      uVar11 = 0x10;
    }
  }
  *(uint *)(param_1 + 0x28c) = *(uint *)(param_1 + 0x28c) & 0xffffffef | uVar11;
  FUN_00adc0f4(param_1,param_3);
  FUN_00adc264(param_1);
  FUN_00adc358(param_1,param_3);
  lVar1 = param_1 + 0x30;
  FUN_00f01980(lVar1);
  if ((*(uint *)(param_1 + 0xb4) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  lVar3 = DAT_03210d00;
  uVar12 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar12 == 0xffff) {
    puVar13 = (ushort *)0x0;
  }
  else {
    puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar12 * 0x40 + 0x10);
    if (uVar12 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar12 = 0xffff;
    }
    else {
      uVar12 = *puVar13;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar12;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efc8e8(puVar13);
    *(undefined ***)puVar13 = &PTR_FUN_02825100;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar1,puVar13);
  lVar3 = DAT_03210d00;
  uVar12 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar12 == 0xffff) {
    puVar13 = (ushort *)0x0;
  }
  else {
    puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar12 * 0x40 + 0x10);
    if (uVar12 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar12 = 0xffff;
    }
    else {
      uVar12 = *puVar13;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar12;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efdd74(puVar13);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efddc4(0x3f4ccccd,puVar13);
  FUN_00efcac4(0x3e4ccccd,puVar13);
  FUN_00efcb24(puVar13,FUN_009a7624);
  FUN_00f022a0(lVar1,puVar13);
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

