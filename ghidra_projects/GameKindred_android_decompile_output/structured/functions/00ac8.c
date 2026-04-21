// functions/00ac8 — 6 functions
#include "libGameKindred.h"




void FUN_00ac848c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d6b90;
  FUN_00ac86c4();
  if ((*(byte *)(param_1 + 0x520) & 1) != 0) {
    operator_delete((void *)param_1[0x522]);
  }
  FUN_00951534(param_1 + 0x51d,1);
  FUN_00f13d08(param_1 + 0x504);
  FUN_00f13d08(param_1 + 0x4d0);
  FUN_00f0d3a4(param_1 + 0x4a7);
  FUN_00f0d3a4(param_1 + 0x481);
  FUN_00f0d3a4(param_1 + 0x45b);
  param_1[0x43d] = &PTR_FUN_028266f0;
  param_1[0x454] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x457);
  FUN_00f13d08(param_1 + 0x43d);
  param_1[0x41f] = &PTR_FUN_028266f0;
  param_1[0x436] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x439);
  FUN_00f13d08(param_1 + 0x41f);
  FUN_00f13d08(param_1 + 0x406);
  FUN_00f13d08(param_1 + 0x3ed);
  FUN_00f13d08(param_1 + 0x3d4);
  FUN_00f13d08(param_1 + 0x3bb);
  param_1[0x39d] = &PTR_FUN_028266f0;
  param_1[0x3b4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3b7);
  FUN_00f13d08(param_1 + 0x39d);
  param_1[0x37f] = &PTR_FUN_028266f0;
  param_1[0x396] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x399);
  FUN_00f13d08(param_1 + 0x37f);
  param_1[0x361] = &PTR_FUN_028266f0;
  param_1[0x378] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x37b);
  FUN_00f13d08(param_1 + 0x361);
  if ((void *)param_1[0x360] != (void *)0x0) {
    operator_delete__((void *)param_1[0x360]);
    param_1[0x360] = 0;
    param_1[0x35f] = 0;
  }
  FUN_009c7fa8(param_1 + 0xa7);
  param_1[0x11] = &PTR_FUN_027dc928;
  param_1[0x7c] = &PTR_FUN_02826f38;
  param_1[0x93] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x96);
  FUN_00f13d08(param_1 + 0x7c);
  param_1[0x52] = &PTR_FUN_02826f38;
  param_1[0x69] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x6c);
  FUN_00f13d08(param_1 + 0x52);
  param_1[0x28] = &PTR_FUN_02826f38;
  param_1[0x3f] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00ac86c4(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x1af8);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x1b00) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        *(undefined8 *)(*(long *)(param_1 + 0x1b00) + uVar3 * 8) = 0;
        uVar2 = *(uint *)(param_1 + 0x1af8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x1b00) != 0) {
    *(undefined4 *)(param_1 + 0x1af8) = 0;
  }
  FUN_00951534(param_1 + 0x28e8,0);
  *(undefined4 *)(param_1 + 0x2918) = 0;
  FUN_00ab7498(param_1 + 0x538,&DAT_03210450);
  return;
}




void FUN_00ac8748(void *param_1)

{
  FUN_00ac848c();
  operator_delete(param_1);
  return;
}




void FUN_00ac876c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,long param_6,undefined8 param_7,undefined8 param_8,byte param_9,
                 byte param_10,uint param_11)

{
  *(undefined1 *)(param_6 + 0x292d) = 1;
  *(byte *)(param_6 + 0x292e) = param_9 & 1;
  *(byte *)(param_6 + 0x292f) = param_10 & 1;
  *(undefined4 *)(param_6 + 0x28f8) = param_4;
  *(undefined4 *)(param_6 + 0x28fc) = param_5;
  FUN_00ab75d0(param_3,param_1,param_2,param_6 + 0x538);
  FUN_00ac87f8(param_6,param_7,param_8,param_11 & 1);
  FUN_00ac8c38(param_6);
  return;
}




void FUN_00ac87f8(long param_1,uint *param_2,undefined8 param_3,uint param_4)

{
  char *pcVar1;
  size_t __n;
  size_t sVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  void *pvVar9;
  long lVar10;
  char *__s2;
  uint uVar11;
  long lVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  void *local_e8;
  code *local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined4 local_b8;
  long local_b0;
  
  lVar5 = tpidr_el0;
  local_b0 = *(long *)(lVar5 + 0x28);
  if ((*(char *)(param_1 + 0x292d) != '\0') && (FUN_00ac86c4(param_1), *param_2 != 0)) {
    FUN_00965324(param_1 + 0x28e8,param_3);
    uVar11 = (uint)*(byte *)(param_1 + 0x2930);
    *(uint *)(param_1 + 0x1e5c) = *(uint *)(param_1 + 0x1e5c) & 0xfffffffb | uVar11 << 2;
    fVar6 = *(float *)(param_1 + 0x1ac8);
    if (uVar11 != 0) {
      fVar6 = *(float *)(param_1 + 0x1ac8) * 0.5;
    }
    fVar7 = *(float *)(param_1 + 0x1acc);
    if (uVar11 != 0) {
      fVar7 = *(float *)(param_1 + 0x1acc) * 0.5;
    }
    if (*param_2 != 0) {
      uVar3 = DAT_03210c64;
      uVar15 = 0;
      pcVar1 = (char *)(param_1 + 0x2901);
      do {
        pvVar9 = operator_new(0x15c0);
        FUN_00ab6c24(pvVar9,0);
        local_e8 = pvVar9;
        FUN_00ab703c(*(undefined4 *)(param_1 + 0x1ac4),fVar6,fVar7,pvVar9,0,
                     *(long *)(param_2 + 2) + uVar15 * 0x10,&DAT_01bee7fa,&DAT_03218ef8,0);
        local_e0 = (code *)CONCAT44(local_e0._4_4_,0xff404040);
        FUN_00ab7588(0x3f800000,local_e8,&local_e0);
        FUN_00b09144(0,local_e8);
        local_e0 = FUN_00ac9164;
        local_d0 = 0;
        uStack_c8 = 0;
        lStack_d8 = param_1;
        local_c0 = uVar15;
        local_b8 = uVar3;
        FUN_009693a0((long)local_e8 + 8,&local_e0);
        FUN_00ab75b0(0x3f000000,local_e8,&DAT_01bee7fa);
        FUN_00b094a4(local_e8,&DAT_0320ffa8);
        *(undefined1 *)((long)local_e8 + 0x15ba) = 0;
        FUN_00ab7628(*(float *)(param_1 + 0x28fc) * 92.0 * 0.87);
        bVar4 = *(byte *)(param_1 + 0x2900);
        __n = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          __n = *(size_t *)(param_1 + 0x2908);
        }
        sVar2 = (ulong)(DAT_0320ffa8 >> 1);
        if ((DAT_0320ffa8 & 1) != 0) {
          sVar2 = DAT_0320ffb0;
        }
        lVar10 = (long)local_e8 + 0x720;
        if (__n == sVar2) {
          pcVar14 = *(char **)(param_1 + 0x2910);
          pcVar13 = pcVar1;
          if ((bVar4 & 1) != 0) {
            pcVar13 = pcVar14;
          }
          __s2 = DAT_0320ffb8;
          if ((DAT_0320ffa8 & 1) == 0) {
            __s2 = &DAT_0320ffa9;
          }
          if ((bVar4 & 1) == 0) {
            if (__n != 0) {
              lVar12 = -(ulong)(bVar4 >> 1);
              pcVar13 = pcVar1;
              do {
                if (*pcVar13 != *__s2) goto LAB_00ac8ab4;
                pcVar13 = pcVar13 + 1;
                lVar12 = lVar12 + 1;
                __s2 = __s2 + 1;
              } while (lVar12 != 0);
            }
          }
          else if ((__n != 0) && (iVar8 = memcmp(pcVar13,__s2,__n), iVar8 != 0)) goto LAB_00ac8adc;
          pcVar14 = PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80;
        }
        else {
LAB_00ac8ab4:
          pcVar14 = pcVar1;
          if ((bVar4 & 1) != 0) {
            pcVar14 = *(char **)(param_1 + 0x2910);
          }
        }
LAB_00ac8adc:
        FUN_00f0d92c(lVar10,pcVar14,&DAT_01bee7fa);
        FUN_00ab74c8(local_e8,0);
        FUN_00ab74fc(0x41200000,0,local_e8);
        *(uint *)((long)local_e8 + 0x4fc) = *(uint *)((long)local_e8 + 0x4fc) & 0xfffffffb;
        FUN_00ac916c(param_1);
        FUN_00ac91e4(param_1 + 0x1af8,&local_e8);
        lVar10 = param_1 + 0x2820;
        if ((((*(byte *)(param_1 + 0x2930) == 0) ||
             (lVar10 = param_1 + 0x1ea0, (long)uVar15 < (long)*(int *)(param_1 + 0x291c))) ||
            (lVar12 = (long)*(int *)(param_1 + 0x2920) + (long)*(int *)(param_1 + 0x291c),
            lVar10 = param_1 + 0x1f68, (long)uVar15 < lVar12)) ||
           (lVar10 = param_1 + 0x2030,
           (long)uVar15 < (long)*(int *)(param_1 + 0x2924) + (long)(int)lVar12)) {
          FUN_00f023ec(lVar10,local_e8,1);
        }
        if (uVar15 < *(uint *)(param_1 + 0x1af8)) {
          FUN_00ab7598(0,*(undefined8 *)(*(long *)(param_1 + 0x1b00) + uVar15 * 8),&DAT_01bee802);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < *param_2);
    }
    if ((param_4 & 1) == 0) {
      FUN_00ac9358(param_1,0,0);
    }
    FUN_00ac9484(param_1,1);
  }
  if (*(long *)(lVar5 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ac8c38(long param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  char cVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 local_78 [2];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  lVar1 = param_1 + 0x538;
  FUN_00ab7628(*(float *)(param_1 + 0x28fc) * 92.0,lVar1);
  FUN_00ac916c(param_1);
  uVar14 = FUN_00f13e54(lVar1);
  FUN_00f13e54(lVar1);
  FUN_00f13f08(uVar14,param_1 + 0x88);
  fVar11 = (float)FUN_00f13e54(lVar1);
  fVar12 = 2.0;
  FUN_00f13f08(fVar11 + -4.0,param_1 + 0x1b08);
  FUN_00f01c20(lVar1);
  if (*(float *)(param_1 + 0x1b4c) != fVar12 * 0.5) {
    *(float *)(param_1 + 0x1b4c) = fVar12 * 0.5;
    FUN_0091ada4(param_1 + 0x1b08);
  }
  lVar9 = param_1 + 0x1bf8;
  fVar11 = (float)FUN_00f13e54(lVar1);
  fVar12 = (float)FUN_00f0e700(lVar9);
  fVar11 = (fVar11 * 0.5 - fVar12 * 0.5) + -20.0;
  if ((*(float *)(param_1 + 0x1c38) != fVar11) || (*(float *)(param_1 + 0x1c3c) != 0.0)) {
    *(float *)(param_1 + 0x1c38) = fVar11;
    *(undefined4 *)(param_1 + 0x1c3c) = 0;
    FUN_0091ada4(lVar9);
  }
  local_78[0] = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1bf8) + 0x28))(lVar9,local_78);
  pcVar2 = (char *)(param_1 + 0x2930);
  cVar7 = *pcVar2;
  fVar11 = *(float *)(param_1 + 0x1acc);
  fVar12 = *(float *)(param_1 + 0x1ac8);
  if (cVar7 != '\0') {
    fVar11 = *(float *)(param_1 + 0x1acc) * 0.333;
    fVar12 = *(float *)(param_1 + 0x1ac8) * 0.333;
  }
  if (*(int *)(param_1 + 0x1af8) != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x1b00);
    do {
      FUN_00ab75d0(*(undefined4 *)(param_1 + 0x1ac4),fVar12,fVar11,*puVar10);
      plVar8 = (long *)*puVar10;
      fVar13 = (float)(**(code **)(*plVar8 + 0x48))(plVar8);
      if (*(float *)(plVar8 + 8) != fVar13 * 0.5) {
        *(float *)(plVar8 + 8) = fVar13 * 0.5;
        FUN_0091ada4(plVar8);
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 !=
             (undefined8 *)(*(long *)(param_1 + 0x1b00) + (ulong)*(uint *)(param_1 + 0x1af8) * 8));
    cVar7 = *pcVar2;
  }
  if (cVar7 != '\0') {
    FUN_00f0bc10(0,0,0,local_78);
    FUN_00f0c168(param_1 + 0x1ea0,local_78);
    (**(code **)(*(long *)(param_1 + 0x1ea0) + 0x90))(param_1 + 0x1ea0);
    FUN_00f0bc10(0,0,0,local_78);
    FUN_00f0c168(param_1 + 0x1f68,local_78);
    (**(code **)(*(long *)(param_1 + 0x1f68) + 0x90))(param_1 + 0x1f68);
    FUN_00f0bc10(0,0,0,local_78);
    FUN_00f0c168(param_1 + 0x2030,local_78);
    (**(code **)(*(long *)(param_1 + 0x2030) + 0x90))(param_1 + 0x2030);
    fVar12 = 0.0;
    lVar9 = param_1 + 0x1dd8;
    FUN_00f0bc10(0,0,0,local_78);
    FUN_00f0c168(lVar9,local_78);
    (**(code **)(*(long *)(param_1 + 0x1dd8) + 0x90))(lVar9);
    FUN_00f13e54(lVar9);
    fVar11 = fVar12;
    FUN_00f13e54(lVar1);
    fVar12 = fVar12 + fVar11 * -0.5;
    lVar3 = param_1 + 0x21e8;
    fVar11 = fVar12;
    FUN_00f13f08(0x40000000,lVar3);
    uVar4 = *(uint *)(param_1 + 0x226c);
    if ((uVar4 & 0x7f80) != 0x4c80) {
      *(uint *)(param_1 + 0x226c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x4c80;
      FUN_0091ada4(lVar3);
    }
    fVar15 = *(float *)(param_1 + 0x1e1c);
    FUN_00f13e54(lVar9);
    fVar13 = fVar11 * 0.5;
    FUN_00f13e54(lVar1);
    fVar11 = fVar15 + fVar13 + fVar11 * 0.25;
    if (*(float *)(param_1 + 0x222c) != fVar11) {
      *(float *)(param_1 + 0x222c) = fVar11;
      FUN_0091ada4(lVar3);
    }
    lVar3 = param_1 + 0x20f8;
    FUN_00f13f08(0x40000000,lVar3);
    uVar4 = *(uint *)(param_1 + 0x217c);
    if ((uVar4 & 0x7f80) != 0x4c80) {
      *(uint *)(param_1 + 0x217c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x4c80;
      FUN_0091ada4(lVar3);
    }
    fVar13 = *(float *)(param_1 + 0x1e1c);
    FUN_00f13e54(lVar9);
    fVar11 = fVar12 * 0.5;
    FUN_00f13e54(lVar1);
    fVar11 = fVar13 + fVar11 + fVar12 * 0.25;
    if (*(float *)(param_1 + 0x213c) != fVar11) {
      *(float *)(param_1 + 0x213c) = fVar11;
      FUN_0091ada4(lVar3);
    }
    if (0 < *(int *)(param_1 + 0x2928)) {
      lVar9 = 0;
      do {
        FUN_00f07a18(0,0x41200000,*(undefined8 *)(param_1 + 0x2668 + lVar9 * 8),4);
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(param_1 + 0x2928));
    }
  }
  FUN_00f0bc10(0,0,0,local_78);
  FUN_00f0c168(param_1 + 0x2820,local_78);
  (**(code **)(*(long *)(param_1 + 0x2820) + 0x90))(param_1 + 0x2820);
  lVar9 = param_1 + 0x2680;
  fVar11 = 0.0;
  FUN_00f13f08(0,0,lVar9);
  iVar5 = *(int *)(param_1 + 0x1af8);
  if (iVar5 != 0) {
    if (*pcVar2 == '\0') {
      uVar14 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x1b00) + 0x48))();
      plVar8 = *(long **)(*(long *)(param_1 + 0x1b00) + (ulong)(iVar5 - 1) * 8);
      fVar12 = *(float *)((long)plVar8 + 0x44);
      (**(code **)(*plVar8 + 0x48))();
    }
    else {
      uVar14 = FUN_00f13e54(param_1 + 0x1dd8);
      fVar12 = *(float *)(param_1 + 0x1e1c);
      FUN_00f13e54(param_1 + 0x1dd8);
    }
    FUN_00f13f08(uVar14,fVar12 + fVar11,lVar9);
  }
  FUN_00f07940(0,0,lVar9,0,lVar1,3);
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

