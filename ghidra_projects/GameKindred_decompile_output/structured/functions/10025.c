// functions/10025 — 223 functions
#include "GameKindred.h"




void thunk_FUN_100252a20(long param_1)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 **ppuStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  iVar2 = FUN_1004eef10();
  if (iVar2 != 0) {
    uVar3 = FUN_10015d3ec();
    FUN_100163bd0(uVar3,1);
    FUN_100156c78(param_1 + 0x2cde0,0);
    FUN_10024f744(param_1);
    FUN_10015d3ec();
    FUN_100165cac();
    *(uint *)(param_1 + 0xb16c) = *(uint *)(param_1 + 0xb16c) | 4;
    iVar2 = FUN_100131560();
    if (iVar2 != 0) {
      ppuStack_38 = (undefined8 ***)0x0;
      uStack_30 = 0;
      lStack_28 = 0;
      pvStack_50 = (void *)0x0;
      uStack_48 = 0;
      lStack_40 = 0;
      iVar2 = FUN_1004ef16c(&ppuStack_38);
      if (iVar2 != 0) {
        pppuVar1 = (undefined8 ***)ppuStack_38;
        if (-1 < lStack_28) {
          pppuVar1 = &ppuStack_38;
        }
        FUN_1004e2414(pppuVar1,&pvStack_50);
        std::string::operator=((string *)(param_1 + 0x2cf50),(string *)&pvStack_50);
        uVar3 = FUN_10015d3ec();
        uVar4 = FUN_10018e8a8(param_1 + 0xb0e8);
        FUN_1001657f0(uVar3,&pvStack_50,uVar4);
        if (lStack_40 < 0) {
          operator_delete(pvStack_50);
        }
      }
      if (lStack_28 < 0) {
        operator_delete(ppuStack_38);
      }
    }
  }
  return;
}




void thunk_FUN_100252b24(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  iVar1 = FUN_1004eef10();
  if (iVar1 != 0) {
    FUN_100156c78(param_1 + 0x2cde0,0);
    FUN_10024f744(param_1);
    pvStack_38 = (void *)0x0;
    uStack_30 = 0;
    lStack_28 = 0;
    uVar2 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x5d88) & 1) * 0x130 + 0x5bf8);
    FUN_1004e357c(uVar2,&pvStack_38);
    uVar2 = FUN_10015d3ec();
    FUN_100165860(uVar2,&pvStack_38);
    if (lStack_28 < 0) {
      operator_delete(pvStack_38);
    }
  }
  return;
}




void thunk_FUN_100251990(void)

{
  FUN_100251990();
  return;
}




void thunk_FUN_100252bb8(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  void *apvStack_68 [2];
  char cStack_51;
  
  iVar1 = FUN_10024f528();
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x2cea8) != '\0')) {
    lVar5 = param_1 + 0x137d0;
    lVar7 = 0xe;
    do {
      FUN_1001b4c0c(lVar5,0);
      lVar5 = lVar5 + 0x1320;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    FUN_10018e8a8(param_1 + 0xb0e8);
    piVar2 = (int *)FUN_10034ccb8();
    if (piVar2 != (int *)0x0) {
      uVar3 = FUN_10015d3ec();
      FUN_10031ffe0();
      uVar4 = FUN_1003211bc();
      lVar5 = FUN_10031ffe0();
      FUN_10001549c(apvStack_68,*(undefined8 *)(piVar2 + 6));
      if ((*(byte *)(param_1 + 0xda9c) >> 2 & 1) == 0) {
        puVar6 = &DAT_101d91198;
      }
      else {
        puVar6 = (undefined8 *)FUN_10018e8a8(param_1 + 0xda18);
      }
      FUN_1001661c0(uVar3,uVar4,lVar5 + 0x88,apvStack_68,puVar6);
      if (cStack_51 < '\0') {
        operator_delete(apvStack_68[0]);
      }
    }
    if ((*(char *)(param_1 + 0x2ceab) != '\0') && (1 < *(uint *)(param_1 + 0x2ce98))) {
      FUN_100102bf8(*piVar2 == 0);
    }
    FUN_1001b4c0c(param_1 + 0x107d0,0);
  }
  return;
}




void FUN_1002501b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100252d04(param_1,param_2,param_5);
  return;
}




void FUN_1002501bc(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100253bf8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10025023c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined1 *local_88;
  
  plVar1 = (long *)(param_1 + 0x283e0);
  plVar2 = (long *)(param_1 + 0x278e8);
  plVar3 = (long *)(param_1 + 0x27468);
  plVar4 = (long *)(param_1 + 0x26df0);
  bVar7 = *(char *)(param_1 + 0x2ceb5) != '\0';
  fVar16 = 650.0;
  if (bVar7) {
    fVar16 = 800.0;
  }
  fVar8 = 140.0;
  if (bVar7) {
    fVar8 = 188.0;
  }
  iVar6 = *(int *)(param_1 + 0x289f0);
  uVar11 = (uint)(iVar6 != 0);
  uVar12 = uVar11 << 2;
  *(uint *)(param_1 + 0x27fe4) =
       *(uint *)(param_1 + 0x27fe4) & 0xfffffff8 | *(uint *)(param_1 + 0x27fe4) & 3 | uVar11 << 2;
  if (*(char *)(param_1 + 0x2ceb1) == '\0') {
    uVar12 = 0;
  }
  *(uint *)(param_1 + 0x28114) = uVar12 | *(uint *)(param_1 + 0x28114) & 0xfffffffb;
  *(uint *)(param_1 + 0x28244) = *(uint *)(param_1 + 0x28244) & 0xfffffffb | uVar12;
  *(uint *)(param_1 + 0x28464) =
       *(uint *)(param_1 + 0x28464) & 0xfffffff8 |
       *(uint *)(param_1 + 0x28464) & 3 | (uint)(iVar6 != 0) << 2;
  if (iVar6 == 0) {
    fVar17 = 66.0;
  }
  else {
    plVar5 = (long *)(param_1 + 0x27f60);
    if ((*(float *)(param_1 + 0x27fa0) != 65.0) || (*(float *)(param_1 + 0x27fa4) != 66.0)) {
      *(undefined8 *)(param_1 + 0x27fa0) = 0x4284000042820000;
      FUN_1000200a0(plVar5);
    }
    local_88 = (undefined1 *)0x3f00000000000000;
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_88);
    if ((*(float *)(param_1 + 0x28420) != 23.0) || (*(float *)(param_1 + 0x28424) != 66.0)) {
      *(undefined8 *)(param_1 + 0x28420) = 0x4284000041b80000;
      FUN_1000200a0(plVar1);
    }
    local_88 = &DAT_3f0000003f000000;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_88);
    FUN_10064e72c(0,param_1 + 0x28090,4,**(long **)(param_1 + 0x289f8) + 0x498,4);
    FUN_10064e72c(0,param_1 + 0x28090,2,plVar5,2);
    FUN_10064e72c(0,param_1 + 0x281c0,4,**(long **)(param_1 + 0x289f8) + 0x868,4);
    FUN_10064e72c(0,param_1 + 0x281c0,2,plVar5,2);
    if ((*(float *)(param_1 + 0x28330) != 65.0) || (*(float *)(param_1 + 0x28334) != 110.0)) {
      *(undefined8 *)(param_1 + 0x28330) = 0x42dc000042820000;
      FUN_1000200a0(param_1 + 0x282f0);
    }
    FUN_10064e47c(fVar16 + -97.0,0x40800000,param_1 + 0x282f0);
    fVar17 = fVar8 * 0.5 + 114.0;
    if ((*(float *)(param_1 + 0x27f18) != 0.0) || (*(float *)(param_1 + 0x27f1c) != fVar17)) {
      *(undefined4 *)(param_1 + 0x27f18) = 0;
      *(float *)(param_1 + 0x27f1c) = fVar17;
      FUN_1000200a0(param_1 + 0x27ed8);
    }
    uVar12 = *(uint *)(param_1 + 0x289f0);
    uVar9 = (ulong)uVar12;
    if (*(char *)(param_1 + 0x2ceb1) == '\0') {
      if (uVar12 != 0) {
        uVar9 = 0;
        do {
          lVar10 = *(long *)(*(long *)(param_1 + 0x289f8) + uVar9 * 8);
          *(uint *)(lVar10 + 0x84) = *(uint *)(lVar10 + 0x84) & 0xfffffffb;
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(param_1 + 0x289f0));
      }
    }
    else {
      if (uVar12 != 0) {
        uVar13 = 0;
        do {
          lVar10 = *(long *)(*(long *)(param_1 + 0x289f8) + uVar13 * 8);
          *(uint *)(lVar10 + 0x84) = *(uint *)(lVar10 + 0x84) | 4;
          lVar10 = *(long *)(*(long *)(param_1 + 0x289f8) + uVar13 * 8);
          fVar14 = fVar8 * (float)(uVar13 & 0xffffffff);
          bVar7 = false;
          if ((*(float *)(lVar10 + 0x40) == 0.0) &&
             (bVar7 = false, !NAN(*(float *)(lVar10 + 0x44)) && !NAN(fVar14))) {
            bVar7 = *(float *)(lVar10 + 0x44) == fVar14;
          }
          if (!bVar7) {
            *(undefined4 *)(lVar10 + 0x40) = 0;
            *(float *)(lVar10 + 0x44) = fVar14;
            FUN_1000200a0();
          }
          uVar13 = uVar13 + 1;
          uVar9 = (ulong)*(uint *)(param_1 + 0x289f0);
        } while (uVar13 < uVar9);
      }
      fVar17 = fVar17 + (float)uVar9 * fVar8;
    }
  }
  iVar6 = *(int *)(param_1 + 0x289e0);
  uVar11 = (uint)(iVar6 != 0);
  uVar12 = uVar11 << 2;
  *(uint *)(param_1 + 0x274ec) =
       *(uint *)(param_1 + 0x274ec) & 0xfffffff8 | *(uint *)(param_1 + 0x274ec) & 3 | uVar11 << 2;
  if (*(char *)(param_1 + 0x2ceb0) == '\0') {
    uVar12 = 0;
  }
  *(uint *)(param_1 + 0x2761c) = uVar12 | *(uint *)(param_1 + 0x2761c) & 0xfffffffb;
  *(uint *)(param_1 + 0x2774c) = *(uint *)(param_1 + 0x2774c) & 0xfffffffb | uVar12;
  *(uint *)(param_1 + 0x2796c) =
       *(uint *)(param_1 + 0x2796c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x2796c) & 3 | (uint)(iVar6 != 0) << 2;
  if (iVar6 != 0) {
    if ((*(float *)(param_1 + 0x274a8) != 65.0) || (*(float *)(param_1 + 0x274ac) != fVar17)) {
      *(undefined4 *)(param_1 + 0x274a8) = 0x42820000;
      *(float *)(param_1 + 0x274ac) = fVar17;
      FUN_1000200a0(plVar3);
    }
    local_88 = (undefined1 *)0x3f00000000000000;
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_88);
    FUN_10064e72c(0,param_1 + 0x27598,4,**(long **)(param_1 + 0x289e8) + 0x498,4);
    FUN_10064e72c(0,param_1 + 0x27598,2,plVar3,2);
    FUN_10064e72c(0,param_1 + 0x276c8,4,**(long **)(param_1 + 0x289e8) + 0x868,4);
    FUN_10064e72c(0,param_1 + 0x276c8,2,plVar3,2);
    if ((*(float *)(param_1 + 0x27928) != 23.0) || (*(float *)(param_1 + 0x2792c) != fVar17)) {
      *(undefined4 *)(param_1 + 0x27928) = 0x41b80000;
      *(float *)(param_1 + 0x2792c) = fVar17;
      FUN_1000200a0(plVar2);
    }
    local_88 = &DAT_3f0000003f000000;
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_88);
    fVar17 = fVar17 + 44.0;
    if ((*(float *)(param_1 + 0x27838) != 65.0) || (*(float *)(param_1 + 0x2783c) != fVar17)) {
      *(undefined4 *)(param_1 + 0x27838) = 0x42820000;
      *(float *)(param_1 + 0x2783c) = fVar17;
      FUN_1000200a0(param_1 + 0x277f8);
    }
    FUN_10064e47c(fVar16 + -97.0,0x40800000,param_1 + 0x277f8);
    fVar17 = fVar8 * 0.5 + 4.0 + fVar17;
    if ((*(float *)(param_1 + 0x27420) != 0.0) || (*(float *)(param_1 + 0x27424) != fVar17)) {
      *(undefined4 *)(param_1 + 0x27420) = 0;
      *(float *)(param_1 + 0x27424) = fVar17;
      FUN_1000200a0(param_1 + 0x273e0);
    }
    if (*(char *)(param_1 + 0x2ceb0) == '\0') {
      if (*(int *)(param_1 + 0x289e0) != 0) {
        uVar9 = 0;
        do {
          lVar10 = *(long *)(*(long *)(param_1 + 0x289e8) + uVar9 * 8);
          *(uint *)(lVar10 + 0x84) = *(uint *)(lVar10 + 0x84) & 0xfffffffb;
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(param_1 + 0x289e0));
      }
    }
    else {
      if (*(int *)(param_1 + 0x289e0) == 0) {
        fVar14 = 0.0;
      }
      else {
        uVar9 = 0;
        do {
          lVar10 = *(long *)(*(long *)(param_1 + 0x289e8) + uVar9 * 8);
          *(uint *)(lVar10 + 0x84) = *(uint *)(lVar10 + 0x84) | 4;
          lVar10 = *(long *)(*(long *)(param_1 + 0x289e8) + uVar9 * 8);
          fVar14 = fVar8 * (float)(uVar9 & 0xffffffff);
          bVar7 = false;
          if ((*(float *)(lVar10 + 0x40) == 0.0) &&
             (bVar7 = false, !NAN(*(float *)(lVar10 + 0x44)) && !NAN(fVar14))) {
            bVar7 = *(float *)(lVar10 + 0x44) == fVar14;
          }
          if (!bVar7) {
            *(undefined4 *)(lVar10 + 0x40) = 0;
            *(float *)(lVar10 + 0x44) = fVar14;
            FUN_1000200a0();
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(param_1 + 0x289e0));
        fVar14 = (float)*(uint *)(param_1 + 0x289e0);
      }
      fVar17 = fVar17 + fVar14 * fVar8;
    }
  }
  bVar7 = *(int *)(param_1 + 0x289d0) != 0;
  *(uint *)(param_1 + 0x269f4) =
       *(uint *)(param_1 + 0x269f4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x269f4) & 3 | (uint)bVar7 << 2;
  uVar12 = 4;
  if (*(char *)(param_1 + 0x2ceb2) == '\0' || !bVar7) {
    uVar12 = 0;
  }
  *(uint *)(param_1 + 0x26b24) = uVar12 | *(uint *)(param_1 + 0x26b24) & 0xfffffffb;
  *(uint *)(param_1 + 0x26c54) = *(uint *)(param_1 + 0x26c54) & 0xfffffffb | uVar12;
  *(uint *)(param_1 + 0x26e74) =
       *(uint *)(param_1 + 0x26e74) & 0xfffffff8 |
       *(uint *)(param_1 + 0x26e74) & 3 | (uint)bVar7 << 2;
  if (*(int *)(param_1 + 0x289d0) != 0) {
    plVar1 = (long *)(param_1 + 0x26970);
    if ((*(float *)(param_1 + 0x269b0) != 65.0) || (*(float *)(param_1 + 0x269b4) != fVar17)) {
      *(undefined4 *)(param_1 + 0x269b0) = 0x42820000;
      *(float *)(param_1 + 0x269b4) = fVar17;
      FUN_1000200a0(plVar1);
    }
    local_88 = (undefined1 *)0x3f00000000000000;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_88);
    if ((*(float *)(param_1 + 0x26e30) != 23.0) || (*(float *)(param_1 + 0x26e34) != fVar17)) {
      *(undefined4 *)(param_1 + 0x26e30) = 0x41b80000;
      *(float *)(param_1 + 0x26e34) = fVar17;
      FUN_1000200a0(plVar4);
    }
    local_88 = &DAT_3f0000003f000000;
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_88);
    fVar17 = fVar17 + 44.0;
    FUN_10064e72c(0,param_1 + 0x26aa0,4,**(long **)(param_1 + 0x289d8) + 0x498,4);
    FUN_10064e72c(0,param_1 + 0x26aa0,2,plVar1,2);
    FUN_10064e72c(0,param_1 + 0x26bd0,4,**(long **)(param_1 + 0x289d8) + 0x868,4);
    FUN_10064e72c(0,param_1 + 0x26bd0,2,plVar1,2);
    if ((*(float *)(param_1 + 0x26d40) != 65.0) || (*(float *)(param_1 + 0x26d44) != fVar17)) {
      *(undefined4 *)(param_1 + 0x26d40) = 0x42820000;
      *(float *)(param_1 + 0x26d44) = fVar17;
      FUN_1000200a0(param_1 + 0x26d00);
    }
    FUN_10064e47c(fVar16 + -97.0,0x40800000,param_1 + 0x26d00);
    fVar17 = fVar8 * 0.5 + 4.0 + fVar17;
    if ((*(float *)(param_1 + 0x26928) != 0.0) || (*(float *)(param_1 + 0x2692c) != fVar17)) {
      *(float *)(param_1 + 0x26928) = 0.0;
      *(float *)(param_1 + 0x2692c) = fVar17;
      FUN_1000200a0(param_1 + 0x268e8);
    }
    if (*(char *)(param_1 + 0x2ceb2) == '\0') {
      if (*(int *)(param_1 + 0x289d0) != 0) {
        uVar9 = 0;
        do {
          lVar10 = *(long *)(*(long *)(param_1 + 0x289d8) + uVar9 * 8);
          *(uint *)(lVar10 + 0x84) = *(uint *)(lVar10 + 0x84) & 0xfffffffb;
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(param_1 + 0x289d0));
      }
    }
    else if (*(int *)(param_1 + 0x289d0) != 0) {
      uVar9 = 0;
      do {
        lVar10 = *(long *)(*(long *)(param_1 + 0x289d8) + uVar9 * 8);
        *(uint *)(lVar10 + 0x84) = *(uint *)(lVar10 + 0x84) | 4;
        FUN_1001b4c0c(*(long *)(*(long *)(param_1 + 0x289d8) + uVar9 * 8) + 0xc38,
                      *(char *)(param_1 + 0x2ceb7) == '\0');
        lVar10 = *(long *)(*(long *)(param_1 + 0x289d8) + uVar9 * 8);
        fVar16 = fVar8 * (float)(uVar9 & 0xffffffff);
        bVar7 = false;
        if ((*(float *)(lVar10 + 0x40) == 0.0) &&
           (bVar7 = false, !NAN(*(float *)(lVar10 + 0x44)) && !NAN(fVar16))) {
          bVar7 = *(float *)(lVar10 + 0x44) == fVar16;
        }
        if (!bVar7) {
          *(undefined4 *)(lVar10 + 0x40) = 0;
          *(float *)(lVar10 + 0x44) = fVar16;
          FUN_1000200a0();
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_1 + 0x289d0));
    }
  }
  uVar15 = FUN_10064e3cc(param_1 + 0x26210);
  FUN_100530aa0(param_1 + 0x263b0,1,0,1,1);
  FUN_10053093c(uVar15,param_1 + 0x263b0);
  return;
}




void FUN_100250c04(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(uint *)(param_1 + 0x289d0) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x289d8) + uVar3 * 8);
      if (lVar2 == 0) break;
      uVar1 = FUN_100655b6c(lVar2 + 0x158);
      uVar1 = FUN_10024fb94(param_1,uVar1);
      FUN_1001a1ed8(lVar2,uVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x289d0));
  }
  if (*(int *)(param_1 + 0x289e0) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x289e8) + uVar3 * 8);
      if (lVar2 == 0) break;
      uVar1 = FUN_100655b6c(lVar2 + 0x158);
      uVar1 = FUN_10024fb94(param_1,uVar1);
      FUN_1001a1ed8(lVar2,uVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x289e0));
  }
  if (*(int *)(param_1 + 0x289f0) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x289f8) + uVar3 * 8);
      if (lVar2 == 0) {
        return;
      }
      uVar1 = FUN_100655b6c(lVar2 + 0x158);
      uVar1 = FUN_10024fb94(param_1,uVar1);
      FUN_1001a1ed8(lVar2,uVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x289f0));
  }
  return;
}




void FUN_100250d0c(long param_1,int param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  pcVar1 = (char *)(param_1 + 0x2ceb7);
  if (*(uint *)(param_1 + 0x289d0) != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x289d8) + uVar4 * 8);
      if (lVar3 != 0) {
        if ((param_2 == 0) || (*pcVar1 != '\0')) {
          uVar2 = 0;
        }
        else {
          if (*(char *)(lVar3 + 0x1228) != '\0') goto LAB_100250d70;
          uVar2 = 1;
        }
        FUN_1001b4c0c(lVar3 + 0xc38,uVar2);
      }
LAB_100250d70:
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x289d0));
  }
  if (*(int *)(param_1 + 0x289e0) != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x289e8) + uVar4 * 8);
      if (lVar3 != 0) {
        if ((param_2 == 0) || (*pcVar1 != '\0')) {
          uVar2 = 0;
        }
        else {
          if (*(char *)(lVar3 + 0x1228) != '\0') goto LAB_100250dc8;
          uVar2 = 1;
        }
        FUN_1001b4c0c(lVar3 + 0xc38,uVar2);
      }
LAB_100250dc8:
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x289e0));
  }
  if (*(int *)(param_1 + 0x289f0) != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x289f8) + uVar4 * 8);
      if (lVar3 != 0) {
        if ((param_2 == 0) || (*pcVar1 != '\0')) {
          uVar2 = 0;
        }
        else {
          if (*(char *)(lVar3 + 0x1228) != '\0') goto LAB_100250e20;
          uVar2 = 1;
        }
        FUN_1001b4c0c(lVar3 + 0xc38,uVar2);
      }
LAB_100250e20:
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x289f0));
  }
  return;
}




void FUN_100250e58(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  byte ****ppppbVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  byte ***local_78;
  size_t local_70;
  ulong local_68;
  
  iVar6 = FUN_1004eef10();
  if (iVar6 != 0) {
    lVar18 = 0;
    lVar17 = param_1 + 0x13618;
    do {
      *(undefined4 *)(param_1 + 0x2ce60 + lVar18) = 0xffffffff;
      FUN_1001a0d78(lVar17);
      lVar18 = lVar18 + 4;
      lVar17 = lVar17 + 0x1320;
    } while (lVar18 != 0x38);
    *(undefined4 *)(param_1 + 0x2ce98) = *(undefined4 *)(param_1 + 0x2cde0);
    *(undefined1 *)(param_1 + 0x2cea9) = 1;
    local_78 = (byte ***)0x0;
    local_70 = 0;
    local_68 = 0;
    FUN_1004ef16c(&local_78);
    uVar12 = 0;
    if (*(int *)(param_1 + 0x2ce98) != 0) {
      uVar19 = 0;
      uVar12 = 0;
      uVar10 = 1;
      do {
        lVar18 = *(long *)(param_1 + 0x2cde8);
        if (*(char *)(param_1 + 0x2ceab) == '\0') {
          if ((int)*(uint *)(param_1 + 0x2ced8) < 1) {
            iVar6 = 0;
          }
          else {
            uVar20 = 0;
            iVar6 = 0;
            do {
              if ((long)uVar20 < (long)*(int *)(lVar18 + uVar19 * 0x88 + 0x30)) {
                iVar6 = *(int *)(param_1 + 0x2cee0 + uVar20 * 4) + iVar6;
              }
              uVar20 = uVar20 + 1;
            } while (*(uint *)(param_1 + 0x2ced8) != uVar20);
          }
          uVar11 = iVar6 + *(int *)(lVar18 + uVar19 * 0x88 + 0x34);
LAB_100250f94:
          if (uVar11 < 0xe) goto LAB_100250fa0;
        }
        else {
          if (*(char *)(lVar18 + uVar19 * 0x88 + 0x29) == '\0') {
            uVar11 = uVar10;
            if (uVar10 < 0xd) {
              uVar10 = uVar10 + 1;
            }
            goto LAB_100250f94;
          }
          uVar11 = 0;
LAB_100250fa0:
          *(int *)(param_1 + (ulong)uVar11 * 4 + 0x2ce60) = (int)uVar19;
          lVar18 = lVar18 + uVar19 * 0x88;
          if (*(int *)(lVar18 + 0x2c) == 1) {
            uVar12 = uVar12 + 1;
          }
          lVar17 = param_1 + (ulong)uVar11 * 0x1320 + 0x13618;
          FUN_1001a0d70(lVar17,lVar18 + 0x18);
          FUN_1001a0d68(lVar17,*(undefined4 *)(*(long *)(param_1 + 0x2cde8) + uVar19 * 0x88 + 0x30))
          ;
          if ((*(char *)(param_1 + 0x2cea8) == '\0') ||
             (*(char *)(*(long *)(param_1 + 0x2cde8) + uVar19 * 0x88 + 0x29) != '\0')) {
            bVar5 = false;
          }
          else {
            bVar5 = *(char *)(param_1 + 0x2cead) == '\0';
          }
          uVar20 = (ulong)uVar11;
          FUN_1001a0dfc(lVar17,bVar5);
          if (*(char *)(param_1 + 0x2cea8) == '\0') {
            bVar5 = false;
          }
          else {
            bVar5 = *(char *)(param_1 + 0x2ceab) == '\0';
          }
          FUN_1001a0e1c(lVar17,bVar5);
          lVar18 = *(long *)(param_1 + 0x2cde8);
          puVar14 = (undefined8 *)(lVar18 + uVar19 * 0x88);
          *(byte *)(param_1 + uVar20 * 0x1320 + 0x13f76) = *(byte *)(puVar14 + 5) & 1;
          if (*(char *)((long)puVar14 + 0x29) == '\0') {
            bVar4 = *(byte *)((long)puVar14 + 0x17);
            uVar13 = (ulong)bVar4;
            sVar1 = *(size_t *)(lVar18 + uVar19 * 0x88 + 8);
            if (-1 < (char)bVar4) {
              sVar1 = uVar13;
            }
            sVar2 = local_70;
            if (-1 < (long)local_68) {
              sVar2 = local_68 >> 0x38;
            }
            if (sVar1 == sVar2) {
              puVar3 = (void *)*puVar14;
              if (-1 < (char)bVar4) {
                puVar3 = puVar14;
              }
              ppppbVar16 = (byte ****)local_78;
              if (-1 < (long)local_68) {
                ppppbVar16 = &local_78;
              }
              if ((char)bVar4 < '\0') {
                if ((sVar1 == 0) || (iVar6 = _memcmp(puVar3,ppppbVar16,sVar1), iVar6 == 0))
                goto LAB_1002511c8;
              }
              else {
                if (sVar1 == 0) {
LAB_1002511c8:
                  uVar7 = 1;
                  uVar8 = 1;
                  uVar9 = 0;
                  goto LAB_100251090;
                }
                if ((uint)*(byte *)ppppbVar16 == ((uint)(void *)*puVar14 & 0xff)) {
                  pbVar15 = (byte *)(lVar18 + uVar19 * 0x88);
                  do {
                    uVar13 = uVar13 - 1;
                    ppppbVar16 = (byte ****)((long)ppppbVar16 + 1);
                    pbVar15 = pbVar15 + 1;
                    if (uVar13 == 0) goto LAB_1002511c8;
                  } while (*pbVar15 == *(byte *)ppppbVar16);
                }
              }
            }
            FUN_1001a06f4(lVar17,*(undefined4 *)(lVar18 + uVar19 * 0x88 + 0x2c),
                          *(undefined4 *)(param_1 + uVar20 * 4 + 0x2ce10),0);
            if (*(char *)(param_1 + uVar20 * 0x1320 + 0x13f75) == '\0') {
              *(undefined1 *)(param_1 + 0x2cea9) = 0;
            }
          }
          else {
            uVar7 = 0;
            uVar8 = 0;
            uVar9 = 1;
LAB_100251090:
            FUN_1001a06f4(lVar17,uVar7,uVar8,uVar9);
          }
          if ((((*(char *)(param_1 + 0x2cea8) != '\0') && (*(char *)(param_1 + 0x2cea9) == '\0')) &&
              (iVar6 = FUN_1004eef10(), iVar6 != 0)) &&
             (lVar18 = FUN_10015d3ec(), *(int *)(lVar18 + 0x55cc) == 2)) {
            uVar7 = FUN_10015d3ec();
            FUN_100165784(uVar7,0);
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < *(uint *)(param_1 + 0x2ce98));
      uVar12 = (uint)(1 < uVar12) << 2;
    }
    *(uint *)(*(long *)(param_1 + 0x2c70) + 0x84) =
         *(uint *)(*(long *)(param_1 + 0x2c70) + 0x84) & 0xfffffffb | uVar12;
    if ((long)local_68 < 0) {
      operator_delete(local_78);
    }
  }
  return;
}




void FUN_10025122c(long param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  
  param_1 = param_1 + 0x13618;
  lVar2 = 0xe;
  do {
    if ((param_2 == 0) || (*(int *)(param_1 + 0x950) == -1)) {
      bVar1 = false;
    }
    else {
      bVar1 = *(char *)(param_1 + 0x95c) == '\0';
    }
    FUN_1001a0dfc(param_1,bVar1);
    param_1 = param_1 + 0x1320;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}




void FUN_10025129c(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar1 = FUN_10015d3f8();
  if ((iVar1 != 0) && (uVar2 = FUN_100131560(), (uVar2 & 1) == 0)) {
    uVar3 = FUN_10015d3ec();
    local_24 = 5;
    iVar1 = FUN_100164e00(uVar3,&local_24);
    lVar4 = FUN_10015d3ec();
    if (iVar1 == 0) {
      local_28 = 6;
      iVar1 = FUN_100164e00(lVar4,&local_28);
      if (iVar1 != 0) {
        FUN_10015d3ec();
        FUN_100165b64();
      }
    }
    else {
      FUN_100169cec(lVar4 + 0x278);
    }
  }
  return;
}




void thunk_FUN_10025129c(void)

{
  FUN_10025129c();
  return;
}




void FUN_100251318(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_10015d3ec();
  if (*(int *)(lVar1 + 0x55cc) - 2U < 7) {
    return;
  }
  lVar1 = param_1 + 0x137d0;
  lVar2 = 0xe;
  do {
    FUN_1001b4c0c(lVar1,1);
    lVar1 = lVar1 + 0x1320;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1001b4c0c(param_1 + 0x107d0,1);
  return;
}




void FUN_1002513a0(long param_1)

{
  FUN_100251318(param_1 + -0x2c30);
  return;
}




void FUN_1002513ac(void)

{
  return;
}




void FUN_1002513b0(void)

{
  return;
}




void FUN_1002513b4(long param_1,long param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  string *this;
  undefined8 *puVar3;
  size_t sVar4;
  byte *pbVar5;
  size_t sVar6;
  undefined8 *******pppppppuVar7;
  string sVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  string *psVar22;
  string *psVar23;
  ulong uVar24;
  double dVar25;
  void *local_b0 [2];
  char local_99;
  undefined8 ******local_98;
  size_t local_90;
  byte local_81;
  undefined8 ******local_80;
  size_t local_78;
  byte local_69;
  
  lVar14 = FUN_10015d3ec();
  if (*(char *)(lVar14 + 0x567a) != '\0') {
    FUN_10015d3ec();
    dVar25 = (double)FUN_1001664b0();
    if (0.0 < dVar25) {
      uVar15 = FUN_100644a94("EVENT_NULL");
      FUN_100644aec(&local_80,uVar15,0);
      FUN_100251990(param_1);
      *(undefined1 *)(param_1 + 0x2ceae) = 1;
      return;
    }
  }
  if ((*(byte *)(param_1 + 0x2c2c) >> 1 & 1) != 0) {
    lVar14 = FUN_10015d3ec();
    FUN_1001117e4(*(undefined1 *)(lVar14 + 0x567a));
  }
  puVar1 = (uint *)(param_2 + 0x70);
  FUN_1001697bc(param_1 + 0x2cde0,puVar1);
  if (*(int *)(param_2 + 0x84) != 0) {
    return;
  }
  if (*(char *)(param_2 + 0x80) == '\0') {
    return;
  }
  if (*puVar1 != 0) {
    uVar24 = 0;
    cVar9 = *(char *)(param_1 + 0x2cea8);
    lVar14 = 0x29;
    do {
      lVar18 = *(long *)(param_1 + 0x2cde8);
      lVar16 = FUN_1004f0338();
      iVar13 = FUN_1004e3654(lVar18 + lVar14 + -0x11,lVar16 + 0xd0);
      if (iVar13 != 0) {
        cVar12 = *(char *)(*(long *)(param_1 + 0x2cde8) + lVar14);
        *(char *)(param_1 + 0x2cea8) = cVar12;
        if (cVar12 != '\0' && cVar9 == '\0') {
          *(undefined1 *)(param_1 + 0x2ceaa) = 0;
          *(uint *)(param_1 + 0x28ce4) = *(uint *)(param_1 + 0x28ce4) & 0xfffffffb;
          *(uint *)(param_1 + 0x2620c) =
               *(uint *)(param_1 + 0x2620c) & 0xfffffff8 |
               *(uint *)(param_1 + 0x2620c) & 3 | (*(uint *)(param_1 + 0x2560c) >> 2 & 1) << 2;
        }
        break;
      }
      uVar24 = uVar24 + 1;
      lVar14 = lVar14 + 0x88;
    } while (uVar24 < *puVar1);
  }
  puVar2 = (undefined8 *)(param_2 + 0x58);
  bVar10 = *(byte *)(param_2 + 0x6f);
  uVar24 = (ulong)bVar10;
  sVar6 = *(size_t *)(param_2 + 0x60);
  if (-1 < (char)bVar10) {
    sVar6 = uVar24;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar6 == sVar4) {
    puVar3 = (void *)*puVar2;
    if (-1 < (char)bVar10) {
      puVar3 = puVar2;
    }
    pbVar19 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar19 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar10 < '\0') {
      if ((sVar6 != 0) && (iVar13 = _memcmp(puVar3,pbVar19,sVar6), iVar13 != 0)) goto LAB_1002515dc;
    }
    else if (sVar6 != 0) {
      if ((uint)*pbVar19 == ((uint)(void *)*puVar2 & 0xff)) {
        pbVar20 = (byte *)(param_2 + 0x59);
        do {
          uVar24 = uVar24 - 1;
          pbVar19 = pbVar19 + 1;
          if (uVar24 == 0) goto LAB_1002516a8;
          bVar10 = *pbVar20;
          pbVar20 = pbVar20 + 1;
        } while (bVar10 == *pbVar19);
      }
      goto LAB_1002515dc;
    }
    goto LAB_1002516a8;
  }
LAB_1002515dc:
  pbVar19 = (byte *)FUN_10018e8a8(param_1 + 0xda18);
  bVar10 = *(byte *)(param_2 + 0x6f);
  uVar24 = (ulong)bVar10;
  sVar6 = *(size_t *)(param_2 + 0x60);
  if (-1 < (char)bVar10) {
    sVar6 = uVar24;
  }
  bVar11 = pbVar19[0x17];
  sVar4 = *(size_t *)(pbVar19 + 8);
  if (-1 < (char)bVar11) {
    sVar4 = (ulong)bVar11;
  }
  if (sVar6 == sVar4) {
    puVar3 = (undefined8 *)*puVar2;
    if (-1 < (char)bVar10) {
      puVar3 = puVar2;
    }
    pbVar20 = *(byte **)pbVar19;
    if (-1 < (char)bVar11) {
      pbVar20 = pbVar19;
    }
    if ((char)bVar10 < '\0') {
      if ((sVar6 != 0) && (iVar13 = _memcmp(puVar3,pbVar20,sVar6), iVar13 != 0)) goto LAB_100251684;
    }
    else if (sVar6 != 0) {
      if ((uint)*pbVar20 == ((uint)(undefined8 *)*puVar2 & 0xff)) {
        pbVar19 = (byte *)(param_2 + 0x59);
        do {
          uVar24 = uVar24 - 1;
          pbVar20 = pbVar20 + 1;
          if (uVar24 == 0) goto LAB_1002516a8;
          bVar10 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar10 == *pbVar20);
      }
      goto LAB_100251684;
    }
  }
  else {
LAB_100251684:
    FUN_10018e754(param_1 + 0xda18,puVar2,0,1);
    FUN_100251a50(param_1);
    FUN_10024bf9c(param_1);
  }
LAB_1002516a8:
  pbVar20 = (byte *)FUN_10018e8a8(param_1 + 0xb0e8);
  pbVar19 = (byte *)(param_2 + 0x40);
  bVar10 = pbVar20[0x17];
  uVar24 = (ulong)bVar10;
  sVar6 = *(size_t *)(pbVar20 + 8);
  if (-1 < (char)bVar10) {
    sVar6 = uVar24;
  }
  bVar11 = *(byte *)(param_2 + 0x57);
  sVar4 = *(size_t *)(param_2 + 0x48);
  if (-1 < (char)bVar11) {
    sVar4 = (ulong)bVar11;
  }
  if (sVar6 == sVar4) {
    pbVar5 = *(byte **)pbVar20;
    if (-1 < (char)bVar10) {
      pbVar5 = pbVar20;
    }
    pbVar21 = *(byte **)pbVar19;
    if (-1 < (char)bVar11) {
      pbVar21 = pbVar19;
    }
    if ((char)bVar10 < '\0') {
      if ((sVar6 != 0) && (iVar13 = _memcmp(pbVar5,pbVar21,sVar6), iVar13 != 0)) goto LAB_100251754;
    }
    else if (sVar6 != 0) {
      if ((uint)*pbVar21 == ((uint)*(byte **)pbVar20 & 0xff)) {
        do {
          uVar24 = uVar24 - 1;
          pbVar21 = pbVar21 + 1;
          pbVar20 = pbVar20 + 1;
          if (uVar24 == 0) goto LAB_100251768;
        } while (*pbVar20 == *pbVar21);
      }
      goto LAB_100251754;
    }
  }
  else {
LAB_100251754:
    FUN_10018e754(param_1 + 0xb0e8,pbVar19,0,0);
  }
LAB_100251768:
  *(uint *)(param_1 + 0xb16c) =
       *(uint *)(param_1 + 0xb16c) & 0xfffffffb | (uint)*(byte *)(param_1 + 0x2cea8) << 2;
  uVar17 = *(uint *)(param_1 + 0x8524);
  *(uint *)(param_1 + 0x8524) =
       uVar17 & 0xfffffff8 | uVar17 & 3 | (uint)(*(byte *)(param_1 + 0x2cea8) == 0) << 2;
  FUN_100250e58(param_1);
  lVar14 = FUN_10015d3ec();
  FUN_10003330c(&local_80,lVar14 + 0x54c0);
  uVar24 = (ulong)local_69;
  if (-1 < (char)local_69) {
    local_78 = uVar24;
  }
  sVar6 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar6 = (ulong)DAT_101d911a8._7_1_;
  }
  if (local_78 == sVar6) {
    pppppppuVar7 = (undefined8 *******)local_80;
    if (-1 < (char)local_69) {
      pppppppuVar7 = &local_80;
    }
    pbVar19 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar19 = (byte *)&DAT_101d91198;
    }
    if ((char)local_69 < '\0') {
      if ((local_78 != 0) && (iVar13 = _memcmp(pppppppuVar7,pbVar19,local_78), iVar13 != 0))
      goto LAB_100251848;
    }
    else if (local_78 != 0) {
      if ((uint)*pbVar19 == ((uint)local_80 & 0xff)) {
        pbVar20 = (byte *)((ulong)&local_80 | 1);
        do {
          uVar24 = uVar24 - 1;
          pbVar19 = pbVar19 + 1;
          if (uVar24 == 0) goto LAB_100251908;
          bVar10 = *pbVar20;
          pbVar20 = pbVar20 + 1;
        } while (bVar10 == *pbVar19);
      }
      goto LAB_100251848;
    }
LAB_100251908:
    FUN_100186730(param_1 + 0x28ce8,1);
    std::string::operator=((string *)(param_1 + 0x2ce48),(string *)&DAT_101d91198);
    goto LAB_10025197c;
  }
LAB_100251848:
  std::operator+("#",(string *)&local_80);
  std::string::string((string *)&local_98,(string *)local_b0);
  if (local_99 < '\0') {
    operator_delete(local_b0[0]);
  }
  this = (string *)(param_1 + 0x2ce48);
  uVar24 = (ulong)local_81;
  uVar17 = (uint)(char)local_81;
  if (-1 < (int)uVar17) {
    local_90 = uVar24;
  }
  bVar10 = *(byte *)(param_1 + 0x2ce5f);
  sVar6 = *(size_t *)(param_1 + 0x2ce50);
  if (-1 < (char)bVar10) {
    sVar6 = (ulong)bVar10;
  }
  if (local_90 == sVar6) {
    pppppppuVar7 = (undefined8 *******)local_98;
    if (-1 < (int)uVar17) {
      pppppppuVar7 = &local_98;
    }
    psVar23 = *(string **)this;
    if (-1 < (char)bVar10) {
      psVar23 = this;
    }
    if (-1 < (int)uVar17) {
      if (local_90 == 0) goto LAB_10025197c;
      if ((uint)(byte)*psVar23 == ((uint)local_98 & 0xff)) {
        psVar22 = (string *)((ulong)&local_98 | 1);
        do {
          uVar24 = uVar24 - 1;
          psVar23 = psVar23 + 1;
          if (uVar24 == 0) goto LAB_100251970;
          sVar8 = *psVar22;
          psVar22 = psVar22 + 1;
        } while (sVar8 == *psVar23);
      }
      goto LAB_100251944;
    }
    if ((local_90 != 0) && (iVar13 = _memcmp(pppppppuVar7,psVar23,local_90), iVar13 != 0))
    goto LAB_100251944;
  }
  else {
LAB_100251944:
    std::string::operator=(this,(string *)&local_98);
    FUN_100187878(param_1 + 0x28ce8,this,0,0);
    uVar17 = (uint)local_81;
LAB_100251970:
    if ((uVar17 >> 7 & 1) == 0) goto LAB_10025197c;
  }
  operator_delete(local_98);
LAB_10025197c:
  if ((char)local_69 < '\0') {
    operator_delete(local_80);
  }
  return;
}




void FUN_100251990(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_40 [32];
  
  *(undefined1 *)(param_1 + 0x2ceb8) = 1;
  iVar1 = FUN_100131560();
  if (iVar1 == 0) {
    FUN_10015d3ec();
    FUN_100165e04();
  }
  else {
    FUN_10031ffe0();
    FUN_1003210e4();
  }
  uVar2 = FUN_100644a94("UI::EVENT_MENU_LEAVE_PARTY");
  FUN_100644aec(auStack_40,uVar2,0);
  FUN_100644c34(param_1,auStack_40,1);
  uVar3 = FUN_100131560();
  if ((uVar3 & 1) == 0) {
    FUN_100186730(param_1 + 0x28ce8,1);
    std::string::operator=((string *)(param_1 + 0x2ce48),(string *)&DAT_101d91198);
    iVar1 = FUN_100126b4c();
    if (iVar1 != 0) {
      FUN_10024f8fc(param_1);
    }
  }
  return;
}




void FUN_100251a50(long param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0xda18;
  uVar4 = FUN_10018e8a8(lVar1);
  uVar2 = *(ulong *)(uVar4 + 8);
  if (-1 < (char)*(byte *)(uVar4 + 0x17)) {
    uVar2 = (ulong)*(byte *)(uVar4 + 0x17);
  }
  if ((uVar2 == 9) &&
     (iVar3 = std::string::compare(uVar4,0,(char *)0xffffffffffffffff,0x1013e4b8f), iVar3 == 0)) {
    pcVar5 = "MENU_PARTY_BOT_DIFFICULTY_VERY_EASY_OPTION";
  }
  else {
    uVar4 = FUN_10018e8a8(lVar1);
    uVar2 = *(ulong *)(uVar4 + 8);
    if (-1 < (char)*(byte *)(uVar4 + 0x17)) {
      uVar2 = (ulong)*(byte *)(uVar4 + 0x17);
    }
    if ((uVar2 == 4) &&
       (iVar3 = std::string::compare(uVar4,0,(char *)0xffffffffffffffff,0x1013e442c), iVar3 == 0)) {
      pcVar5 = "MENU_PARTY_BOT_DIFFICULTY_EASY_OPTION";
    }
    else {
      uVar4 = FUN_10018e8a8(lVar1);
      uVar2 = *(ulong *)(uVar4 + 8);
      if (-1 < (char)*(byte *)(uVar4 + 0x17)) {
        uVar2 = (ulong)*(byte *)(uVar4 + 0x17);
      }
      if ((uVar2 == 6) &&
         (iVar3 = std::string::compare(uVar4,0,(char *)0xffffffffffffffff,0x1013dc162), iVar3 == 0))
      {
        pcVar5 = "MENU_PARTY_BOT_DIFFICULTY_MEDIUM_OPTION";
      }
      else {
        uVar4 = FUN_10018e8a8(lVar1);
        uVar2 = *(ulong *)(uVar4 + 8);
        if (-1 < (char)*(byte *)(uVar4 + 0x17)) {
          uVar2 = (ulong)*(byte *)(uVar4 + 0x17);
        }
        if ((uVar2 == 4) &&
           (iVar3 = std::string::compare(uVar4,0,(char *)0xffffffffffffffff,0x1013e4b99), iVar3 == 0
           )) {
          pcVar5 = "MENU_PARTY_BOT_DIFFICULTY_HARD_OPTION";
        }
        else {
          uVar4 = FUN_10018e8a8(lVar1);
          uVar2 = *(ulong *)(uVar4 + 8);
          if (-1 < (char)*(byte *)(uVar4 + 0x17)) {
            uVar2 = (ulong)*(byte *)(uVar4 + 0x17);
          }
          if ((uVar2 != 9) ||
             (iVar3 = std::string::compare(uVar4,0,(char *)0xffffffffffffffff,0x1013e4b9e),
             iVar3 != 0)) goto LAB_100251bfc;
          pcVar5 = "MENU_PARTY_BOT_DIFFICULTY_VERY_HARD_OPTION";
        }
      }
    }
  }
  uVar6 = FUN_1004e0150(pcVar5,0);
  FUN_1006513c0(param_1 + 0x85d0,uVar6);
LAB_100251bfc:
  FUN_10065179c(*(undefined4 *)(param_1 + 0x2cf38),0,0x3f800000,param_1 + 0x85d0);
  return;
}




void FUN_100251c24(long param_1)

{
  FUN_1002513b4(param_1 + -0x2c30);
  return;
}




void FUN_100251c30(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  void *local_48 [2];
  char local_31;
  
  uVar2 = FUN_10015d3ec();
  FUN_100163bd0(uVar2,1);
  FUN_10031ffe0();
  uVar2 = FUN_1003211bc();
  FUN_1001697bc(param_1 + 0x2cde0,uVar2);
  lVar3 = FUN_10031ffe0();
  *(byte *)(param_1 + 0x2cea8) = *(byte *)(lVar3 + 0xa0);
  FUN_10001549c(local_48,"*GameMode_Blitz_Private*");
  FUN_10018e754(param_1 + 0xb0e8,local_48,0,0);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  uVar4 = (uint)*(byte *)(param_1 + 0x2cea8);
  *(uint *)(param_1 + 0xb16c) = *(uint *)(param_1 + 0xb16c) & 0xfffffffb | uVar4 << 2;
  uVar1 = *(uint *)(param_1 + 0x8524);
  *(uint *)(param_1 + 0x8524) = uVar1 & 0xfffffff8 | uVar1 & 3 | (uint)(uVar4 == 0) << 2;
  FUN_100250e58(param_1);
  return;
}




void FUN_100251d0c(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(int *)(param_2 + 0x40) + 0x11;
  if (uVar1 < 3) {
    uVar2 = FUN_1004e0150((&PTR_s_MENU_PARTY_COULD_NOT_INVITE_NOT__10147a828)[(int)uVar1],0);
    FUN_1001e55b0(0x40200000,uVar2,1,1);
  }
  FUN_100250d0c(param_1,1);
  return;
}




void FUN_100251d64(long param_1)

{
  FUN_100251d0c(param_1 + -0x2c30);
  return;
}




void FUN_100251d70(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  if ((*(int *)(param_2 + 0x28) == 0) && (*(char *)(param_2 + 0x494) == '\0')) {
    uVar1 = param_2 + 0x460;
    bVar11 = *(byte *)(param_2 + 0x477);
    uVar9 = (ulong)bVar11;
    uVar10 = *(ulong *)(param_2 + 0x468);
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 3) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e887a);
      if (iVar3 == 0) {
        uVar1 = param_2 + 0x478;
        bVar11 = *(byte *)(param_2 + 0x48f);
        uVar9 = (ulong)bVar11;
        uVar10 = *(ulong *)(param_2 + 0x480);
        uVar2 = uVar10;
        if (-1 < (char)bVar11) {
          uVar2 = uVar9;
        }
        if (uVar2 == 0xf) {
          iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e887e);
          if (iVar3 == 0) {
            uVar4 = FUN_1004e0150("PARTY_BANNED_TITLE",0);
            pcVar6 = "PARTY_BANNED_MSG";
            goto LAB_1002522ac;
          }
          bVar11 = *(byte *)(param_2 + 0x48f);
          uVar9 = (ulong)bVar11;
          uVar10 = *(ulong *)(param_2 + 0x480);
        }
        uVar2 = uVar10;
        if (-1 < (char)bVar11) {
          uVar2 = uVar9;
        }
        if (uVar2 != 3) {
LAB_10025201c:
          if (-1 < (char)bVar11) {
            uVar10 = uVar9;
          }
          if (uVar10 != 6) {
            return;
          }
          iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e88cb);
          if (iVar3 != 0) {
            return;
          }
          uVar4 = FUN_1004e0150("PARTY_BANNED_MSG_GM_BAN",0);
          thunk_FUN_1004e439c(auStack_40,uVar4);
          FUN_1004e313c(auStack_50);
          FUN_1004e38ac(auStack_50,"%d");
          FUN_1004e3120(auStack_60,"[HOURS]");
          FUN_1004e3bc4(auStack_40,0,auStack_60,auStack_50);
          if (local_58 != (void *)0x0) {
            operator_delete__(local_58);
          }
          uVar4 = FUN_1004e0150("PARTY_BANNED_TITLE",0);
          uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1001e3090(uVar4,auStack_40,uVar7,param_1,0);
          if (local_48 != (void *)0x0) {
            operator_delete__(local_48);
          }
          if (local_38 == (void *)0x0) {
            return;
          }
          operator_delete__(local_38);
          return;
        }
        iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e88b2);
        if (iVar3 != 0) {
          bVar11 = *(byte *)(param_2 + 0x48f);
          uVar9 = (ulong)bVar11;
          uVar10 = *(ulong *)(param_2 + 0x480);
          goto LAB_10025201c;
        }
        uVar4 = FUN_1004e0150("PARTY_BANNED_TITLE",0);
        pcVar6 = "PARTY_BANNED_MSG_AFK";
        goto LAB_1002522ac;
      }
      bVar11 = *(byte *)(param_2 + 0x477);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x468);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e88f2);
      if (iVar3 == 0) {
        iVar3 = FUN_10024f6c8(param_1);
        if (iVar3 == 0) {
          uVar4 = FUN_1004e0150("PARTY_RANKED_NOT_ENOUGH_HEROES_TITLE",0);
          pcVar6 = "PARTY_RANKED_NOT_ENOUGH_HEROES_MSG";
        }
        else {
          uVar4 = FUN_1004e0150("PARTY_DRAFT_NOT_ENOUGH_HEROES_TITLE",0);
          pcVar6 = "PARTY_DRAFT_NOT_ENOUGH_HEROES_MSG";
        }
        goto LAB_1002522ac;
      }
      bVar11 = *(byte *)(param_2 + 0x477);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x468);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 0xf) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e898b);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("PARTY_RANKED_PARTY_ELO_SPREAD_TOO_WIDE_TITLE",0);
        pcVar6 = "PARTY_RANKED_PARTY_ELO_SPREAD_TOO_WIDE_MSG";
        goto LAB_1002522ac;
      }
      bVar11 = *(byte *)(param_2 + 0x477);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x468);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 0xf) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013d25e0);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("PARTY_5V5_PARTY_MISSING_ACCESS_TITLE",0);
        pcVar6 = "PARTY_5V5_PARTY_MISSING_ACCESS_MSG";
        goto LAB_1002522ac;
      }
      bVar11 = *(byte *)(param_2 + 0x477);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x468);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 5) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013d2620);
      if (iVar3 == 0) {
        FUN_10018e8a8(param_1 + 0xb0e8);
        piVar5 = (int *)FUN_10034ccb8();
        if (*piVar5 == 0) {
          uVar4 = FUN_1004e0150("PARTY_RANKED_LEVEL_REQ_NOT_MET_TITLE",0);
          pcVar6 = "PARTY_RANKED_LEVEL_REQ_NOT_MET_MSG";
        }
        else {
          FUN_10018e8a8(param_1 + 0xb0e8);
          piVar5 = (int *)FUN_10034ccb8();
          if (*piVar5 == 9) {
            uVar4 = FUN_1004e0150("PARTY_CASUAL_LEVEL_REQ_NOT_MET_TITLE",0);
            pcVar6 = "PARTY_CASUAL_LEVEL_REQ_NOT_MET_MSG";
          }
          else {
            uVar4 = FUN_1004e0150("PARTY_LEVEL_REQ_NOT_MET_TITLE",0);
            pcVar6 = "PARTY_LEVEL_REQ_NOT_MET_MSG";
          }
        }
        goto LAB_1002522ac;
      }
      bVar11 = *(byte *)(param_2 + 0x477);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x468);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 5) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e8b05);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("PARTY_RANKED_KARMA_REQ_NOT_MET_TITLE",0);
        pcVar6 = "PARTY_RANKED_KARMA_REQ_NOT_MET_MSG";
        goto LAB_1002522ac;
      }
      bVar11 = *(byte *)(param_2 + 0x477);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x468);
    }
    if (-1 < (char)bVar11) {
      uVar10 = uVar9;
    }
    if ((uVar10 == 0x11) &&
       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e8b53), iVar3 == 0)) {
      uVar4 = FUN_1004e0150("MENU_PARTY_5V5_NO_QUAD_QUEUE_TITLE",0);
      pcVar6 = "MENU_PARTY_5V5_NO_QUAD_QUEUE";
LAB_1002522ac:
      uVar7 = FUN_1004e0150(pcVar6,0);
      uVar8 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar4,uVar7,uVar8,param_1,0);
      return;
    }
  }
  return;
}




void FUN_1002522f0(long param_1)

{
  FUN_100251d70(param_1 + -0x2c30);
  return;
}




void FUN_1002522fc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  if ((*(int *)(param_2 + 0x50) == 0) && (*(char *)(param_2 + 0x4bc) == '\0')) {
    uVar1 = param_2 + 0x488;
    bVar11 = *(byte *)(param_2 + 0x49f);
    uVar9 = (ulong)bVar11;
    uVar10 = *(ulong *)(param_2 + 0x490);
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 3) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e887a);
      if (iVar3 == 0) {
        uVar1 = param_2 + 0x4a0;
        bVar11 = *(byte *)(param_2 + 0x4b7);
        uVar9 = (ulong)bVar11;
        uVar10 = *(ulong *)(param_2 + 0x4a8);
        uVar2 = uVar10;
        if (-1 < (char)bVar11) {
          uVar2 = uVar9;
        }
        if (uVar2 == 0xf) {
          iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e887e);
          if (iVar3 == 0) {
            uVar4 = FUN_1004e0150("PARTY_BANNED_TITLE",0);
            pcVar6 = "PARTY_BANNED_MSG";
            goto LAB_100252838;
          }
          bVar11 = *(byte *)(param_2 + 0x4b7);
          uVar9 = (ulong)bVar11;
          uVar10 = *(ulong *)(param_2 + 0x4a8);
        }
        uVar2 = uVar10;
        if (-1 < (char)bVar11) {
          uVar2 = uVar9;
        }
        if (uVar2 != 3) {
LAB_1002525a8:
          if (-1 < (char)bVar11) {
            uVar10 = uVar9;
          }
          if (uVar10 != 6) {
            return;
          }
          iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e88cb);
          if (iVar3 != 0) {
            return;
          }
          uVar4 = FUN_1004e0150("PARTY_BANNED_MSG_GM_BAN",0);
          thunk_FUN_1004e439c(auStack_40,uVar4);
          FUN_1004e313c(auStack_50);
          FUN_1004e38ac(auStack_50,"%d");
          FUN_1004e3120(auStack_60,"[HOURS]");
          FUN_1004e3bc4(auStack_40,0,auStack_60,auStack_50);
          if (local_58 != (void *)0x0) {
            operator_delete__(local_58);
          }
          uVar4 = FUN_1004e0150("PARTY_BANNED_TITLE",0);
          uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1001e3090(uVar4,auStack_40,uVar7,param_1,0);
          if (local_48 != (void *)0x0) {
            operator_delete__(local_48);
          }
          if (local_38 == (void *)0x0) {
            return;
          }
          operator_delete__(local_38);
          return;
        }
        iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e88b2);
        if (iVar3 != 0) {
          bVar11 = *(byte *)(param_2 + 0x4b7);
          uVar9 = (ulong)bVar11;
          uVar10 = *(ulong *)(param_2 + 0x4a8);
          goto LAB_1002525a8;
        }
        uVar4 = FUN_1004e0150("PARTY_BANNED_TITLE",0);
        pcVar6 = "PARTY_BANNED_MSG_AFK";
        goto LAB_100252838;
      }
      bVar11 = *(byte *)(param_2 + 0x49f);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x490);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e88f2);
      if (iVar3 == 0) {
        iVar3 = FUN_10024f6c8(param_1);
        if (iVar3 == 0) {
          uVar4 = FUN_1004e0150("PARTY_RANKED_NOT_ENOUGH_HEROES_TITLE",0);
          pcVar6 = "PARTY_RANKED_NOT_ENOUGH_HEROES_MSG";
        }
        else {
          uVar4 = FUN_1004e0150("PARTY_DRAFT_NOT_ENOUGH_HEROES_TITLE",0);
          pcVar6 = "PARTY_DRAFT_NOT_ENOUGH_HEROES_MSG";
        }
        goto LAB_100252838;
      }
      bVar11 = *(byte *)(param_2 + 0x49f);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x490);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 0xf) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e898b);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("PARTY_RANKED_PARTY_ELO_SPREAD_TOO_WIDE_TITLE",0);
        pcVar6 = "PARTY_RANKED_PARTY_ELO_SPREAD_TOO_WIDE_MSG";
        goto LAB_100252838;
      }
      bVar11 = *(byte *)(param_2 + 0x49f);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x490);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 0xf) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013d25e0);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("PARTY_5V5_PARTY_MISSING_ACCESS_TITLE",0);
        pcVar6 = "PARTY_5V5_PARTY_MISSING_ACCESS_MSG";
        goto LAB_100252838;
      }
      bVar11 = *(byte *)(param_2 + 0x49f);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x490);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 5) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013d2620);
      if (iVar3 == 0) {
        FUN_10018e8a8(param_1 + 0xb0e8);
        piVar5 = (int *)FUN_10034ccb8();
        if (*piVar5 == 0) {
          uVar4 = FUN_1004e0150("PARTY_RANKED_LEVEL_REQ_NOT_MET_TITLE",0);
          pcVar6 = "PARTY_RANKED_LEVEL_REQ_NOT_MET_MSG";
        }
        else {
          FUN_10018e8a8(param_1 + 0xb0e8);
          piVar5 = (int *)FUN_10034ccb8();
          if (*piVar5 == 9) {
            uVar4 = FUN_1004e0150("PARTY_CASUAL_LEVEL_REQ_NOT_MET_TITLE",0);
            pcVar6 = "PARTY_CASUAL_LEVEL_REQ_NOT_MET_MSG";
          }
          else {
            uVar4 = FUN_1004e0150("PARTY_LEVEL_REQ_NOT_MET_TITLE",0);
            pcVar6 = "PARTY_LEVEL_REQ_NOT_MET_MSG";
          }
        }
        goto LAB_100252838;
      }
      bVar11 = *(byte *)(param_2 + 0x49f);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x490);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 5) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e8b05);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("PARTY_RANKED_KARMA_REQ_NOT_MET_TITLE",0);
        pcVar6 = "PARTY_RANKED_KARMA_REQ_NOT_MET_MSG";
        goto LAB_100252838;
      }
      bVar11 = *(byte *)(param_2 + 0x49f);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x490);
    }
    if (-1 < (char)bVar11) {
      uVar10 = uVar9;
    }
    if ((uVar10 == 0x11) &&
       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e8b53), iVar3 == 0)) {
      uVar4 = FUN_1004e0150("MENU_PARTY_5V5_NO_QUAD_QUEUE_TITLE",0);
      pcVar6 = "MENU_PARTY_5V5_NO_QUAD_QUEUE";
LAB_100252838:
      uVar7 = FUN_1004e0150(pcVar6,0);
      uVar8 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar4,uVar7,uVar8,param_1,0);
      return;
    }
  }
  return;
}




void FUN_10025287c(long param_1)

{
  FUN_1002522fc(param_1 + -0x2c30);
  return;
}




void FUN_100252888(long param_1)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  short *psVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong local_40;
  void *local_38;
  
  puVar1 = (uint *)(param_1 + 0x2cdd0);
  lVar6 = *(long *)(param_1 + 0x2cdd8);
  if (lVar6 != 0) {
    if (*puVar1 != 0) {
      lVar9 = (ulong)*puVar1 * 0x188;
      do {
        lVar6 = FUN_100111a80(lVar6);
        lVar6 = lVar6 + 0x188;
        lVar9 = lVar9 + -0x188;
      } while (lVar9 != 0);
    }
    *puVar1 = 0;
  }
  iVar3 = FUN_100111818();
  pcVar2 = "MENU_PARTY_SAD_AND_EMPTY";
  if (iVar3 != 0) {
    pcVar2 = "MENU_PARTY_NO_FRIENDS_ONLINE";
  }
  uVar7 = FUN_1004e0150(pcVar2,0);
  FUN_1006513c0(param_1 + 0x28b30,uVar7);
  iVar3 = FUN_100111828();
  if ((iVar3 != 0) && (iVar3 = FUN_100111828(), iVar3 != 0)) {
    uVar10 = 0;
    uVar11 = 0;
    do {
      psVar8 = (short *)FUN_100111838(uVar11);
      uVar5 = (uint)uVar10;
      if (*psVar8 != 0) {
        uVar5 = uVar5 + 1;
      }
      uVar10 = (ulong)uVar5;
      uVar11 = uVar11 + 1;
      uVar4 = FUN_100111828();
    } while (uVar11 < uVar4);
    if (uVar5 != 0) {
      local_40 = 0;
      local_38 = (void *)0x0;
      FUN_10020df00(&local_40,uVar10,0);
      iVar3 = FUN_100111828();
      if (iVar3 != 0) {
        uVar11 = 0;
        do {
          psVar8 = (short *)FUN_100111838(uVar11);
          if (*psVar8 != 0) {
            uVar10 = (ulong)((int)uVar10 - 1);
            *(short **)((long)local_38 + uVar10 * 8) = psVar8;
          }
          uVar11 = uVar11 + 1;
          uVar5 = FUN_100111828();
        } while (uVar11 < uVar5);
      }
      _qsort(local_38,local_40 & 0xffffffff,8,(int *)FUN_100111120);
      if ((int)local_40 != 0) {
        uVar10 = 0;
        do {
          FUN_100110e8c(puVar1,*(undefined8 *)((long)local_38 + uVar10 * 8));
          uVar10 = uVar10 + 1;
        } while (uVar10 < (local_40 & 0xffffffff));
      }
      if (local_38 != (void *)0x0) {
        operator_delete__(local_38);
      }
    }
  }
  FUN_10024fd34(param_1);
  return;
}




void FUN_100252a14(long param_1)

{
  FUN_100252888(param_1 + -0x2c58);
  return;
}




void FUN_100252a20(long param_1)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  undefined8 **local_38;
  undefined8 uStack_30;
  long local_28;
  
  iVar2 = FUN_1004eef10();
  if (iVar2 != 0) {
    uVar3 = FUN_10015d3ec();
    FUN_100163bd0(uVar3,1);
    FUN_100156c78(param_1 + 0x2cde0,0);
    FUN_10024f744(param_1);
    FUN_10015d3ec();
    FUN_100165cac();
    *(uint *)(param_1 + 0xb16c) = *(uint *)(param_1 + 0xb16c) | 4;
    iVar2 = FUN_100131560();
    if (iVar2 != 0) {
      local_38 = (undefined8 ***)0x0;
      uStack_30 = 0;
      local_28 = 0;
      local_50 = (void *)0x0;
      uStack_48 = 0;
      local_40 = 0;
      iVar2 = FUN_1004ef16c(&local_38);
      if (iVar2 != 0) {
        pppuVar1 = (undefined8 ***)local_38;
        if (-1 < local_28) {
          pppuVar1 = &local_38;
        }
        FUN_1004e2414(pppuVar1,&local_50);
        std::string::operator=((string *)(param_1 + 0x2cf50),(string *)&local_50);
        uVar3 = FUN_10015d3ec();
        uVar4 = FUN_10018e8a8(param_1 + 0xb0e8);
        FUN_1001657f0(uVar3,&local_50,uVar4);
        if (local_40 < 0) {
          operator_delete(local_50);
        }
      }
      if (local_28 < 0) {
        operator_delete(local_38);
      }
    }
  }
  return;
}




void FUN_100252b24(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *local_38;
  undefined8 uStack_30;
  long local_28;
  
  iVar1 = FUN_1004eef10();
  if (iVar1 != 0) {
    FUN_100156c78(param_1 + 0x2cde0,0);
    FUN_10024f744(param_1);
    local_38 = (void *)0x0;
    uStack_30 = 0;
    local_28 = 0;
    uVar2 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x5d88) & 1) * 0x130 + 0x5bf8);
    FUN_1004e357c(uVar2,&local_38);
    uVar2 = FUN_10015d3ec();
    FUN_100165860(uVar2,&local_38);
    if (local_28 < 0) {
      operator_delete(local_38);
    }
  }
  return;
}




void FUN_100252bb8(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  void *local_68 [2];
  char local_51;
  
  iVar1 = FUN_10024f528();
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x2cea8) != '\0')) {
    lVar5 = param_1 + 0x137d0;
    lVar7 = 0xe;
    do {
      FUN_1001b4c0c(lVar5,0);
      lVar5 = lVar5 + 0x1320;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    FUN_10018e8a8(param_1 + 0xb0e8);
    piVar2 = (int *)FUN_10034ccb8();
    if (piVar2 != (int *)0x0) {
      uVar3 = FUN_10015d3ec();
      FUN_10031ffe0();
      uVar4 = FUN_1003211bc();
      lVar5 = FUN_10031ffe0();
      FUN_10001549c(local_68,*(undefined8 *)(piVar2 + 6));
      if ((*(byte *)(param_1 + 0xda9c) >> 2 & 1) == 0) {
        puVar6 = &DAT_101d91198;
      }
      else {
        puVar6 = (undefined8 *)FUN_10018e8a8(param_1 + 0xda18);
      }
      FUN_1001661c0(uVar3,uVar4,lVar5 + 0x88,local_68,puVar6);
      if (local_51 < '\0') {
        operator_delete(local_68[0]);
      }
    }
    if ((*(char *)(param_1 + 0x2ceab) != '\0') && (1 < *(uint *)(param_1 + 0x2ce98))) {
      FUN_100102bf8(*piVar2 == 0);
    }
    FUN_1001b4c0c(param_1 + 0x107d0,0);
  }
  return;
}




void FUN_100252d04(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  uint uVar2;
  void *local_48 [2];
  char local_31;
  
  if ((-1 < (int)param_3) && (param_3 < *(uint *)(param_1 + 0x2cdd0))) {
    uVar1 = FUN_10015d3ec();
    FUN_100165e48(uVar1,*(long *)(param_1 + 0x2cdd8) + (ulong)param_3 * 0x188 + 8);
    FUN_10024fc24(param_1,*(long *)(param_1 + 0x2cdd8) + (ulong)param_3 * 0x188 + 0x20,1);
    *(int *)(param_1 + 0x2ce98) = *(int *)(param_1 + 0x2ce98) + 1;
    FUN_100250d0c(param_1,0);
    *(undefined1 *)(param_1 + 0x2cea9) = 0;
    uVar2 = *(uint *)(param_1 + 0x2ce98);
    if ((*(uint *)(param_1 + 0x2cedc) < uVar2) && (*(char *)(param_1 + 0x2ceab) != '\0')) {
      FUN_10001549c(local_48,"*GameMode_HF_Private*");
      FUN_10018e754(param_1 + 0xb0e8,local_48,0,0);
      if (local_31 < '\0') {
        operator_delete(local_48[0]);
      }
      uVar2 = *(uint *)(param_1 + 0x2ce98);
    }
    if (0xd < uVar2) {
      *(undefined1 *)(param_1 + 0x2ceaa) = 1;
      *(uint *)(param_1 + 0x28ce4) = *(uint *)(param_1 + 0x28ce4) | 4;
      *(uint *)(param_1 + 0x2620c) = *(uint *)(param_1 + 0x2620c) & 0xfffffffb;
      FUN_1000165f0(param_1 + 0x2cdf0,0);
    }
  }
  return;
}




void FUN_100252e40(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((*(char *)(param_1 + 0x2cead) == '\0') &&
     (plVar1 = (long *)(param_1 + 0x2cde8), *(char *)(param_1 + 0x2cea8) != '\0')) {
    uVar6 = (ulong)*(uint *)(param_1 + ((param_3 << 0x20) >> 0x1e) + 0x2ce60);
    lVar5 = *plVar1;
    lVar3 = FUN_1004f0338();
    iVar2 = FUN_1004e36c0(lVar5 + uVar6 * 0x88 + 0x18,lVar3 + 0xd0);
    if ((iVar2 != 0) && (*(int *)(*plVar1 + uVar6 * 0x88 + 0x2c) != 2)) {
      iVar2 = FUN_100131560();
      if (iVar2 != 0) {
        uVar4 = FUN_10031ffe0();
        FUN_100321020(uVar4,*plVar1 + uVar6 * 0x88);
        return;
      }
      uVar4 = FUN_10015d3ec();
      FUN_100165eb0(uVar4,*plVar1 + uVar6 * 0x88,&DAT_101d91198);
      return;
    }
  }
  return;
}




void FUN_100252f24(long param_1,uint param_2)

{
  long *plVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  
  if ((*(char *)(param_1 + 0x2cea8) != '\0') && (*(char *)(param_1 + 0x2ceab) == '\0')) {
    if (*(char *)(param_1 + 0x2cead) == '\0') {
      if ((param_2 != 0xffffffff) &&
         (puVar2 = (uint *)(param_1 + (long)(int)param_2 * 4 + 0x2ce60),
         *puVar2 < *(uint *)(param_1 + 0x2cde0))) {
        puVar3 = (uint *)(param_1 + 0x2425c);
        *(undefined1 *)(param_1 + 0x2cead) = 1;
        lVar7 = param_1 + 0x13618;
        lVar8 = 0xe;
        do {
          FUN_1001a0dfc(lVar7,0);
          lVar7 = lVar7 + 0x1320;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        *(uint *)(param_1 + 0x2ce9c) = param_2;
        uVar6 = *puVar2;
        *(uint *)(param_1 + 0x2cea0) = uVar6;
        puVar2 = (uint *)(param_1 + (long)(int)param_2 * 0x1320 + 0x1369c);
        uVar4 = *puVar2;
        if ((uVar4 & 0x7f80) != 0x3300) {
          *puVar2 = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x3300;
          FUN_1000200a0(param_1 + (long)(int)param_2 * 0x1320 + 0x13618);
          uVar6 = *(uint *)(param_1 + 0x2cea0);
        }
        *puVar3 = *puVar3 | 4;
        FUN_1001a0d70(param_1 + 0x241d8,*(long *)(param_1 + 0x2cde8) + (ulong)uVar6 * 0x88 + 0x18);
        fVar9 = (float)FUN_10064e3cc(param_1 + 0x24980);
        FUN_10065179c(fVar9 + -316.0,0,0x3f800000,param_1 + 0x24260);
        *puVar3 = *puVar3 | 0x10;
        FUN_10024e17c(param_1);
        FUN_100530adc(param_1 + 0x263b0,0,0);
        if (0.0 < (float)(*(uint *)(param_1 + 0x105ac) >> 7 & 0xff) * 0.003921569) {
          FUN_100642324(param_1 + 0x10528);
          uVar5 = FUN_100640840(0,0x3dcccccd,FUN_10001f218);
          FUN_100047300();
          FUN_100642b7c(param_1 + 0x10528,uVar5);
        }
        FUN_100530adc(param_1 + 0x7f68,0,0);
        *(uint *)(param_1 + 0x7fec) = *(uint *)(param_1 + 0x7fec) & 0xffffffef;
      }
    }
    else {
      plVar1 = (long *)(param_1 + 0x254f8);
      if (*plVar1 != 0) {
        FUN_1001a0edc(*plVar1,0);
      }
      if (param_2 < 0xe) {
        lVar7 = param_1 + (ulong)param_2 * 0x1320 + 0x13618;
        *plVar1 = lVar7;
        FUN_1001a0edc(lVar7,1);
        return;
      }
      *plVar1 = 0;
    }
  }
  return;
}




void FUN_1002531fc(long param_1,ulong param_2,ulong param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_13b8 [8];
  void *local_13b0;
  undefined1 auStack_13a8 [2384];
  undefined8 local_a58;
  undefined1 local_a4c;
  undefined1 local_a4a;
  undefined1 auStack_88 [8];
  void *local_80;
  
  if ((((*(char *)(param_1 + 0x2cea8) != '\0') && (*(char *)(param_1 + 0x2ceab) == '\0')) &&
      (cVar3 = *(char *)(param_1 + 0x2cead), FUN_10024fa68(param_1), cVar3 != '\0')) &&
     ((-1 < (int)param_2 && (-1 < (int)param_3)))) {
    uVar12 = param_3 & 0xffffffff;
    lVar8 = param_1 + 0x13618 + (param_3 & 0xffffffff) * 0x1320;
    uVar4 = FUN_100655b6c(lVar8 + 0x158);
    thunk_FUN_1004e439c(auStack_88,uVar4);
    thunk_FUN_10019ff68(auStack_13a8);
    local_a58 = *(undefined8 *)(lVar8 + 0x950);
    local_a4c = *(undefined1 *)(lVar8 + 0x95c);
    local_a4a = *(undefined1 *)(lVar8 + 0x95e);
    uVar11 = param_2 & 0xffffffff;
    lVar10 = param_1 + 0x13618 + (param_2 & 0xffffffff) * 0x1320;
    uVar4 = FUN_100655b6c(lVar10 + 0x158);
    thunk_FUN_1004e439c(auStack_13b8,uVar4);
    FUN_1001a0d70(lVar8,auStack_13b8);
    *(undefined8 *)(lVar8 + 0x950) = *(undefined8 *)(lVar10 + 0x950);
    *(undefined1 *)(lVar8 + 0x95c) = *(undefined1 *)(lVar10 + 0x95c);
    *(undefined1 *)(lVar8 + 0x95e) = *(undefined1 *)(lVar10 + 0x95e);
    FUN_1001a0d70(lVar10,auStack_88);
    *(undefined8 *)(lVar10 + 0x950) = local_a58;
    *(undefined1 *)(lVar10 + 0x95c) = local_a4c;
    *(undefined1 *)(lVar10 + 0x95e) = local_a4a;
    if ((*(char *)(param_1 + 0x2cea8) == '\0') || (*(char *)(lVar8 + 0x95c) != '\0')) {
      uVar5 = 0;
    }
    else {
      uVar5 = ~*(uint *)(param_1 + uVar11 * 4 + 0x2ce60) >> 0x1f;
    }
    FUN_1001a0dfc(lVar8,uVar5);
    if ((*(char *)(param_1 + 0x2cea8) == '\0') || (*(char *)(lVar10 + 0x95c) != '\0')) {
      uVar5 = 0;
    }
    else {
      uVar5 = ~*(uint *)(param_1 + uVar12 * 4 + 0x2ce60) >> 0x1f;
    }
    FUN_1001a0dfc(lVar10,uVar5);
    if ((*(char *)(param_1 + 0x2cea8) == '\0') || (*(char *)(param_1 + 0x2ceab) != '\0')) {
      uVar5 = 0;
    }
    else {
      uVar5 = ~*(uint *)(param_1 + uVar11 * 4 + 0x2ce60) >> 0x1f;
    }
    FUN_1001a0e1c(lVar8,uVar5);
    if ((*(char *)(param_1 + 0x2cea8) == '\0') || (*(char *)(param_1 + 0x2ceab) != '\0')) {
      uVar5 = 0;
    }
    else {
      uVar5 = ~*(uint *)(param_1 + uVar12 * 4 + 0x2ce60) >> 0x1f;
    }
    FUN_1001a0e1c(lVar10,uVar5);
    FUN_1001a0704(*(undefined4 *)(param_1 + 0x2cf38),0x42a00000,0,0,lVar8,
                  *(undefined1 *)(param_1 + 0x2ceab));
    FUN_1001a0704(*(undefined4 *)(param_1 + 0x2cf38),0x42a00000,0,0,lVar10,
                  *(undefined1 *)(param_1 + 0x2ceab));
    FUN_1001a06f4(lVar8,*(undefined4 *)(lVar8 + 0x950),*(undefined4 *)(lVar8 + 0x954),
                  *(char *)(lVar8 + 0x95c));
    FUN_1001a06f4(lVar10,*(undefined4 *)(lVar10 + 0x950),*(undefined4 *)(lVar10 + 0x954),
                  *(char *)(lVar10 + 0x95c));
    FUN_10024bf9c(param_1);
    *(undefined4 *)(param_1 + 0x2ce9c) = 0xffffffff;
    lVar8 = param_1 + 0x2ce60;
    uVar1 = *(undefined4 *)(lVar8 + uVar12 * 4);
    *(undefined4 *)(lVar8 + uVar12 * 4) = *(undefined4 *)(lVar8 + uVar11 * 4);
    *(undefined4 *)(lVar8 + uVar11 * 4) = uVar1;
    lVar8 = param_1 + 0x2ce10;
    uVar1 = *(undefined4 *)(lVar8 + uVar12 * 4);
    *(undefined4 *)(lVar8 + uVar12 * 4) = *(undefined4 *)(lVar8 + uVar11 * 4);
    *(undefined4 *)(lVar8 + uVar11 * 4) = uVar1;
    uVar9 = (ulong)*(uint *)(param_1 + 0x2ced8);
    uVar11 = uVar9;
    uVar12 = uVar9;
    if (0 < (int)*(uint *)(param_1 + 0x2ced8)) {
      uVar11 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x2cee0 + uVar11 * 4);
        uVar6 = (ulong)(uint)((int)param_2 - iVar2);
        uVar12 = uVar11;
        if ((int)param_2 < iVar2) break;
        uVar11 = uVar11 + 1;
        param_2 = uVar6;
        uVar12 = uVar9;
      } while (uVar9 != uVar11);
      uVar6 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x2cee0 + uVar6 * 4);
        uVar7 = (ulong)(uint)((int)param_3 - iVar2);
        uVar11 = uVar6;
        if ((int)param_3 < iVar2) break;
        uVar6 = uVar6 + 1;
        param_3 = uVar7;
        uVar11 = uVar9;
      } while (uVar9 != uVar6);
    }
    uVar4 = FUN_10015d3ec();
    FUN_100165f34(uVar4,uVar12,param_2,uVar11,param_3);
    if (local_13b0 != (void *)0x0) {
      operator_delete__(local_13b0);
    }
    thunk_FUN_1001a040c(auStack_13a8);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
    }
  }
  return;
}




void FUN_1002535c8(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_3 == 0) {
    return;
  }
  uVar1 = FUN_100644b2c(param_2);
  if ((uVar1 & 1) == 0) {
    uVar4 = 0x3f19999a;
    uVar3 = 0x3f4ccccd;
    goto LAB_100253678;
  }
  lVar2 = param_1 + 0xb0e8;
  if ((param_3 == lVar2) && (*(char *)(param_1 + 0x1033c) != '\0')) {
    lVar2 = param_1 + 0xda18;
LAB_100253668:
    FUN_10018e440(lVar2,0);
  }
  else {
    uVar3 = 0x3f800000;
    if (param_3 == param_1 + 0xda18) {
      uVar4 = 0x3f800000;
      if (*(char *)(param_1 + 0xda0c) == '\0') goto LAB_100253678;
      goto LAB_100253668;
    }
  }
  uVar3 = 0x3f800000;
  uVar4 = 0x3f800000;
LAB_100253678:
  FUN_1002536bc(param_1,uVar1 & 1);
  FUN_10018ef5c(uVar4,uVar3,param_1 + 0xb0e8);
  FUN_10018ef5c(uVar4,uVar3,param_1 + 0xda18);
  return;
}




void FUN_1002536bc(long param_1,uint param_2)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  
  puVar1 = (uint *)(param_1 + 0x103cc);
  lVar2 = param_1 + 0x10348;
  FUN_100642324(lVar2);
  lVar3 = param_1 + 0x10438;
  FUN_100642324(lVar3);
  fVar5 = (float)(*puVar1 >> 7 & 0xff) * 0.003921569;
  uVar7 = 0x3ecccccd;
  fVar6 = 0.4 - fVar5;
  if (param_2 == 0) {
    uVar7 = 0;
    fVar6 = fVar5;
  }
  fVar6 = fVar6 * 0.25;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  uVar4 = FUN_100047714();
  FUN_10063f0e8(fVar6);
  FUN_10063fce0(uVar7,uVar4);
  FUN_100642b14(lVar2,uVar4);
  *puVar1 = *puVar1 | 4;
  if ((param_2 & 1) == 0) {
    uVar4 = FUN_100047300();
    FUN_100642b14(lVar2,uVar4);
    uVar4 = FUN_100047714();
    FUN_10063f0e8(fVar6);
    FUN_10063fce0(uVar7,uVar4);
    FUN_100642b14(lVar3,uVar4);
    *(uint *)(param_1 + 0x104bc) = *(uint *)(param_1 + 0x104bc) | 4;
    uVar4 = FUN_100047300();
    FUN_100642b14(lVar3,uVar4);
    return;
  }
  uVar4 = FUN_100047714();
  FUN_10063f0e8(fVar6);
  FUN_10063fce0(uVar7,uVar4);
  FUN_100642b14(lVar3,uVar4);
  *(uint *)(param_1 + 0x104bc) = *(uint *)(param_1 + 0x104bc) | 4;
  return;
}




void FUN_10025383c(long param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    bVar2 = *(byte *)(param_1 + 0x2ceb0);
    *(byte *)(param_1 + 0x2ceb0) = bVar2 ^ 1;
    uVar3 = 0x7db8;
  }
  else if (param_3 == 1) {
    bVar2 = *(byte *)(param_1 + 0x2ceb1);
    *(byte *)(param_1 + 0x2ceb1) = bVar2 ^ 1;
    uVar3 = 0x88b0;
  }
  else {
    if (param_3 != 2) goto LAB_1002538c8;
    bVar2 = *(byte *)(param_1 + 0x2ceb2);
    *(byte *)(param_1 + 0x2ceb2) = bVar2 ^ 1;
    uVar3 = 0x72c0;
  }
  pcVar1 = "arrow_down";
  if (bVar2 != 0) {
    pcVar1 = "arrow_right";
  }
  FUN_100652cdc(param_1 + (ulong)(uVar3 | 0x20000),pcVar1);
LAB_1002538c8:
  FUN_10025023c(param_1);
  return;
}




void FUN_1002538d8(long param_1)

{
  long lVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  
  lVar1 = param_1 + 0x10528;
  FUN_100642324(lVar1);
  puVar2 = (uint *)(param_1 + 0x105ac);
  uVar4 = *puVar2;
  if ((uVar4 & 0x7f80) != 0) {
    *puVar2 = uVar4 & 0xffff807f;
    FUN_1000200a0(lVar1);
    uVar4 = *puVar2;
  }
  *puVar2 = uVar4 | 4;
  uVar3 = FUN_100640840(0x3f800000,0x3ecccccd,FUN_10001f160);
  FUN_10064081c(0x40000000);
  FUN_100640840(0,0x3f800000,FUN_10001f218);
  FUN_100047300();
  FUN_100642b7c(lVar1,uVar3);
  return;
}




void FUN_1002539a4(undefined8 param_1,float param_2,float param_3,long param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = param_4 + (long)param_5 * 0x1320;
  FUN_1001a0704(*(undefined4 *)(param_4 + 0x2cf48),0x42a00000,0,param_1,lVar2 + 0x13618,
                *(undefined1 *)(param_4 + 0x2ceab));
  fVar3 = *(float *)(lVar2 + 0x1365c);
  bVar1 = false;
  if ((*(float *)(lVar2 + 0x13658) == param_2) && (bVar1 = false, !NAN(fVar3) && !NAN(param_3))) {
    bVar1 = fVar3 == param_3;
  }
  if (!bVar1) {
    *(float *)(lVar2 + 0x13658) = param_2;
    *(float *)(lVar2 + 0x1365c) = param_3;
    FUN_1000200a0(lVar2 + 0x13618);
  }
  param_4 = param_4 + (long)param_5 * 0x1320;
  *(uint *)(param_4 + 0x1369c) = *(uint *)(param_4 + 0x1369c) | 4;
  return;
}




void FUN_100253a74(void)

{
  return;
}




char * FUN_100253a78(void)

{
  return "main_nav_party";
}




void FUN_100253a84(void)

{
  FUN_1004e0150("MAIN_MENU_PARTY",0);
  return;
}




void FUN_100253a94(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100253aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1,1);
  return;
}




void FUN_100253aa4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100253ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1,0);
  return;
}




undefined8 FUN_100253ab4(void)

{
  return 0;
}




undefined8 FUN_100253abc(void)

{
  return 0;
}




void FUN_100253ac4(void)

{
  return;
}




void FUN_100253ac8(void)

{
  return;
}




undefined8 FUN_100253acc(void)

{
  return 0;
}




undefined8 FUN_100253ad4(void)

{
  return 0;
}




undefined8 FUN_100253adc(void)

{
  return 0;
}




void FUN_100253ae4(void)

{
  return;
}




void FUN_100253ae8(void)

{
  return;
}




undefined8 FUN_100253aec(void)

{
  return 0;
}




long FUN_100253af4(long param_1)

{
  return param_1 + -0x2c50;
}




void FUN_100253b00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100253b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -0x2c50) + 0x148))((long *)(param_1 + -0x2c50),1);
  return;
}




void FUN_100253b18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100253b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -0x2c50) + 0x148))((long *)(param_1 + -0x2c50),0);
  return;
}




char * FUN_100253b30(void)

{
  return "main_nav_party";
}




void FUN_100253b3c(void)

{
  FUN_1004e0150("MAIN_MENU_PARTY",0);
  return;
}




void FUN_100253b4c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145f300;
  param_1[0x9a] = &PTR_FUN_1014a7108;
  param_1[0xb1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb4);
  FUN_10064e2bc(param_1 + 0x9a);
  param_1[0x7c] = &PTR_FUN_1014a7108;
  param_1[0x93] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x96);
  FUN_10064e2bc(param_1 + 0x7c);
  param_1[0x5e] = &PTR_FUN_1014a7108;
  param_1[0x75] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x78);
  FUN_10064e2bc(param_1 + 0x5e);
  FUN_10064221c(param_1 + 0x4d);
  pvVar1 = (void *)FUN_10003bec8(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100253bf8(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




long FUN_100253c74(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_1004e313c();
  FUN_1004e313c(lVar1 + 0x10);
  FUN_1004e313c(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1004e313c(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_1004e313c(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_10001549c(param_1 + 0xe0,PTR_s_build___MenuPartsCommon_tga_101854970);
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x184) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1ac) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x1b4) = 0x100;
  return param_1;
}




long thunk_FUN_100253c74(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_1004e313c();
  FUN_1004e313c(lVar1 + 0x10);
  FUN_1004e313c(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1004e313c(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_1004e313c(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_10001549c(param_1 + 0xe0,PTR_s_build___MenuPartsCommon_tga_101854970);
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x184) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1ac) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x1b4) = 0x100;
  return param_1;
}




long FUN_100253d30(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100269da8();
  *puVar1 = &PTR_thunk_FUN_1002546e8_10147a850;
  puVar1[0x19] = &PTR_FUN_10147a9c0;
  FUN_10064e264(puVar1 + 0x1a);
  thunk_FUN_1006543ec(param_1 + 0x188);
  thunk_FUN_100652c08(param_1 + 0x328);
  thunk_FUN_100652c08(param_1 + 0x418);
  thunk_FUN_100652c08(param_1 + 0x508);
  thunk_FUN_1006543ec(param_1 + 0x5f8);
  FUN_10053077c(param_1 + 0x798,0);
  thunk_FUN_100652c08(param_1 + 0xcd0);
  thunk_FUN_1001a66f4(param_1 + 0xdc0);
  thunk_FUN_100650e64(param_1 + 0xec0);
  FUN_1006421a8(param_1 + 0xff0);
  *(undefined ***)(param_1 + 0xff0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0x1078);
  *(undefined ***)(param_1 + 0x1078) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0x1100);
  FUN_1006421a8(param_1 + 0x1230);
  *(undefined ***)(param_1 + 0x1230) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100181304(param_1 + 0x12b8,0);
  thunk_FUN_100181304(param_1 + 0x2870,0);
  thunk_FUN_100181304(param_1 + 0x3e28,0);
  FUN_1006421a8(param_1 + 0x53e0);
  *(undefined ***)(param_1 + 0x53e0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  *(undefined8 *)(param_1 + 0x5468) = 0;
  FUN_10003330c(param_1 + 0x5470,&DAT_101d91198);
  *(undefined8 *)(param_1 + 0x5498) = 0;
  *(undefined8 *)(param_1 + 0x5490) = 0;
  *(undefined8 *)(param_1 + 0x5488) = 0;
  FUN_10003330c(param_1 + 0x54a0,&DAT_101d91198);
  *(undefined8 *)(param_1 + 0x54c8) = 0;
  *(undefined8 *)(param_1 + 0x54c0) = 0;
  *(undefined8 *)(param_1 + 0x54b8) = 0;
  FUN_10003330c(param_1 + 0x54d0,&DAT_101d91198);
  *(undefined8 *)(param_1 + 0x552c) = 0;
  *(undefined8 *)(param_1 + 0x5524) = 0;
  *(undefined8 *)(param_1 + 0x5510) = 0;
  *(undefined8 *)(param_1 + 0x5508) = 0;
  *(undefined8 *)(param_1 + 0x5520) = 0;
  *(undefined8 *)(param_1 + 0x5518) = 0;
  *(undefined8 *)(param_1 + 0x54f0) = 0;
  *(undefined8 *)(param_1 + 0x54e8) = 0;
  *(undefined8 *)(param_1 + 0x5500) = 0;
  *(undefined8 *)(param_1 + 0x54f8) = 0;
  *(undefined8 *)(param_1 + 0x5540) = 0;
  *(undefined8 *)(param_1 + 0x5538) = 0;
  *(undefined4 *)(param_1 + 0x5548) = 0;
  *(undefined1 *)(param_1 + 0x554c) = 1;
  *(undefined8 *)(param_1 + 0x5550) = 0;
  FUN_100253ee8(param_1);
  return param_1;
}




void FUN_100253ee8(long *param_1)

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
  undefined **ppuVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  float fVar17;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1a,1);
  plVar1 = param_1 + 0x31;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x65;
  FUN_100642bd8(plVar1,plVar2,1);
  plVar3 = param_1 + 0x83;
  FUN_100642bd8(plVar1,plVar3,1);
  plVar4 = param_1 + 0xa1;
  FUN_100642bd8(plVar1,plVar4,1);
  plVar5 = param_1 + 0xbf;
  FUN_100642bd8(plVar1,plVar5,1);
  plVar6 = param_1 + 0xf3;
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_1005308f8(plVar6,param_1 + 0x19a,1);
  FUN_1005308f8(plVar6,param_1 + 0x1b8,1);
  FUN_1005308f8(plVar6,param_1 + 0xa7c,1);
  plVar7 = param_1 + 0x1d8;
  FUN_1005308f8(plVar6,plVar7,1);
  FUN_1005308f8(plVar6,param_1 + 0x1fe,1);
  FUN_100642bd8(param_1 + 0x1fe,param_1 + 0x20f,1);
  plVar8 = param_1 + 0x220;
  FUN_100642bd8(param_1 + 0x20f,plVar8,1);
  plVar9 = param_1 + 0x246;
  FUN_100642bd8(plVar1,plVar9,1);
  plVar10 = param_1 + 599;
  FUN_100642bd8(plVar9,plVar10,1);
  plVar11 = param_1 + 0x50e;
  FUN_100642bd8(plVar9,plVar11,1);
  plVar12 = param_1 + 0x7c5;
  FUN_100642bd8(plVar9,plVar12,1);
  iVar16 = FUN_100126c88();
  *(uint *)((long)param_1 + 0x154) = *(uint *)((long)param_1 + 0x154) | 0x10;
  FUN_100654488(plVar1,0);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((~*(uint *)((long)param_1 + 0x3ac) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3ac) = *(uint *)((long)param_1 + 0x3ac) | 0x7f80;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  uVar14 = *(uint *)((long)param_1 + 0x58c);
  if ((uVar14 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x58c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x1980;
    FUN_1000200a0(plVar4);
  }
  *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) | 1;
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  uVar14 = *(uint *)((long)param_1 + 0x49c);
  if ((uVar14 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x49c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x1980;
    FUN_1000200a0(plVar3);
  }
  FUN_100654488(plVar5,0);
  if ((*(float *)(param_1 + 0xc9) != 0.5) || (*(float *)((long)param_1 + 0x64c) != 0.0)) {
    param_1[0xc9] = 0x3f000000;
    FUN_1000200a0(plVar5);
  }
  if (*(float *)((long)param_1 + 0x63c) != 50.0) {
    *(undefined4 *)((long)param_1 + 0x63c) = 0x42480000;
    FUN_1000200a0(plVar5);
  }
  FUN_100530be0(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530bb4(0x3e800000,0x3f800000,plVar6);
  if ((*(float *)(param_1 + 0xfd) != 0.5) || (*(float *)((long)param_1 + 0x7ec) != 0.0)) {
    param_1[0xfd] = 0x3f000000;
    FUN_1000200a0(plVar6);
  }
  if ((*(float *)(param_1 + 0x1c2) != 0.5) || (*(float *)((long)param_1 + 0xe14) != 0.5)) {
    param_1[0x1c2] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(param_1 + 0x1b8);
  }
  *(undefined1 *)(param_1 + 0x1d7) = 1;
  if ((*(float *)(param_1 + 0x1a4) != 0.5) || (*(float *)((long)param_1 + 0xd24) != 0.5)) {
    param_1[0x1a4] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(param_1 + 0x19a);
  }
  FUN_100651594(plVar7,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e290,&DAT_10115a168);
  uVar14 = *(uint *)((long)param_1 + 0xf44);
  if ((uVar14 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0xf44) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x5900;
    FUN_1000200a0(plVar7);
  }
  ppuVar13 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar16 == 0) {
    ppuVar13 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  }
  FUN_100651594(plVar8,*ppuVar13,&DAT_10115a168);
  FUN_100651708(0x44aa0000,plVar8,1);
  if ((*(uint *)((long)param_1 + 0x1184) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1184) = *(uint *)((long)param_1 + 0x1184) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar8);
  }
  fVar17 = 1.2;
  if (iVar16 == 0) {
    fVar17 = 1.0;
  }
  if ((*(float *)(param_1 + 0x260) != fVar17) || (*(float *)((long)param_1 + 0x1304) != fVar17)) {
    *(float *)(param_1 + 0x260) = fVar17;
    *(float *)((long)param_1 + 0x1304) = fVar17;
    FUN_1000200a0(plVar10);
  }
  if ((*(float *)(param_1 + 0x261) != 0.5) || (*(float *)((long)param_1 + 0x130c) != 0.5)) {
    param_1[0x261] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar10);
  }
  FUN_100651700(param_1 + 0x33a,0);
  uVar14 = *(uint *)((long)param_1 + 0x133c);
  if ((uVar14 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x133c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x5900;
    FUN_1000200a0(plVar10);
  }
  FUN_1001816d4(0x42700000,0x42c80000,0x44960000,plVar10,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar15 = DAT_101d91884;
  local_78 = DAT_101d91884;
  local_a0 = FUN_100254f48;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 600,&local_a0);
  param_1[0x262] = 0x4220000042a00000;
  *(uint *)((long)param_1 + 0x133c) = *(uint *)((long)param_1 + 0x133c) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x517) != fVar17) || (*(float *)((long)param_1 + 0x28bc) != fVar17)) {
    *(float *)(param_1 + 0x517) = fVar17;
    *(float *)((long)param_1 + 0x28bc) = fVar17;
    FUN_1000200a0(plVar11);
  }
  if ((*(float *)(param_1 + 0x518) != 0.5) || (*(float *)((long)param_1 + 0x28c4) != 0.5)) {
    param_1[0x518] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar11);
  }
  FUN_100651700(param_1 + 0x5f1,0);
  uVar14 = *(uint *)((long)param_1 + 0x28f4);
  if ((uVar14 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x28f4) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x5900;
    FUN_1000200a0(plVar11);
  }
  FUN_1001816d4(0x42700000,0x42c80000,0x43c80000,plVar11,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  local_78 = uVar15;
  local_a0 = FUN_100254f48;
  local_90 = 0;
  local_88 = 0;
  local_80 = 1;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x50f,&local_a0);
  param_1[0x519] = 0x4220000042a00000;
  *(uint *)((long)param_1 + 0x28f4) = *(uint *)((long)param_1 + 0x28f4) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x7ce) != fVar17) || (*(float *)((long)param_1 + 0x3e74) != fVar17)) {
    *(float *)(param_1 + 0x7ce) = fVar17;
    *(float *)((long)param_1 + 0x3e74) = fVar17;
    FUN_1000200a0(plVar12);
  }
  if ((*(float *)(param_1 + 1999) != 0.5) || (*(float *)((long)param_1 + 0x3e7c) != 0.5)) {
    param_1[1999] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar12);
  }
  FUN_100651700(param_1 + 0x8a8,0);
  uVar14 = *(uint *)((long)param_1 + 0x3eac);
  if ((uVar14 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x3eac) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x5900;
    FUN_1000200a0(plVar12);
  }
  FUN_1001816d4(0x42700000,0x42c80000,0x43c80000,plVar12,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  local_78 = uVar15;
  local_a0 = FUN_100254f48;
  local_90 = 0;
  local_88 = 0;
  local_80 = 2;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x7c6,&local_a0);
  param_1[2000] = 0x41f0000042a00000;
  *(uint *)((long)param_1 + 0x3eac) = *(uint *)((long)param_1 + 0x3eac) & 0xfffffffb;
  local_78 = FUN_100644a94("UI::EVENT_MENU_CLOSE_PLATFORM_NOTIFICATION");
  local_a0 = thunk_FUN_100254ed8;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&local_a0);
  return;
}




long thunk_FUN_100253d30(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100269da8();
  *puVar1 = &PTR_thunk_FUN_1002546e8_10147a850;
  puVar1[0x19] = &PTR_FUN_10147a9c0;
  FUN_10064e264(puVar1 + 0x1a);
  thunk_FUN_1006543ec(param_1 + 0x188);
  thunk_FUN_100652c08(param_1 + 0x328);
  thunk_FUN_100652c08(param_1 + 0x418);
  thunk_FUN_100652c08(param_1 + 0x508);
  thunk_FUN_1006543ec(param_1 + 0x5f8);
  FUN_10053077c(param_1 + 0x798,0);
  thunk_FUN_100652c08(param_1 + 0xcd0);
  thunk_FUN_1001a66f4(param_1 + 0xdc0);
  thunk_FUN_100650e64(param_1 + 0xec0);
  FUN_1006421a8(param_1 + 0xff0);
  *(undefined ***)(param_1 + 0xff0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0x1078);
  *(undefined ***)(param_1 + 0x1078) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0x1100);
  FUN_1006421a8(param_1 + 0x1230);
  *(undefined ***)(param_1 + 0x1230) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100181304(param_1 + 0x12b8,0);
  thunk_FUN_100181304(param_1 + 0x2870,0);
  thunk_FUN_100181304(param_1 + 0x3e28,0);
  FUN_1006421a8(param_1 + 0x53e0);
  *(undefined ***)(param_1 + 0x53e0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  *(undefined8 *)(param_1 + 0x5468) = 0;
  FUN_10003330c(param_1 + 0x5470,&DAT_101d91198);
  *(undefined8 *)(param_1 + 0x5498) = 0;
  *(undefined8 *)(param_1 + 0x5490) = 0;
  *(undefined8 *)(param_1 + 0x5488) = 0;
  FUN_10003330c(param_1 + 0x54a0,&DAT_101d91198);
  *(undefined8 *)(param_1 + 0x54c8) = 0;
  *(undefined8 *)(param_1 + 0x54c0) = 0;
  *(undefined8 *)(param_1 + 0x54b8) = 0;
  FUN_10003330c(param_1 + 0x54d0,&DAT_101d91198);
  *(undefined8 *)(param_1 + 0x552c) = 0;
  *(undefined8 *)(param_1 + 0x5524) = 0;
  *(undefined8 *)(param_1 + 0x5510) = 0;
  *(undefined8 *)(param_1 + 0x5508) = 0;
  *(undefined8 *)(param_1 + 0x5520) = 0;
  *(undefined8 *)(param_1 + 0x5518) = 0;
  *(undefined8 *)(param_1 + 0x54f0) = 0;
  *(undefined8 *)(param_1 + 0x54e8) = 0;
  *(undefined8 *)(param_1 + 0x5500) = 0;
  *(undefined8 *)(param_1 + 0x54f8) = 0;
  *(undefined8 *)(param_1 + 0x5540) = 0;
  *(undefined8 *)(param_1 + 0x5538) = 0;
  *(undefined4 *)(param_1 + 0x5548) = 0;
  *(undefined1 *)(param_1 + 0x554c) = 1;
  *(undefined8 *)(param_1 + 0x5550) = 0;
  FUN_100253ee8(param_1);
  return param_1;
}




void FUN_1002546e8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002546e8_10147a850;
  param_1[0x19] = &PTR_FUN_10147a9c0;
  FUN_100254968();
  if (*(char *)((long)param_1 + 0x552f) < '\0') {
    operator_delete((void *)param_1[0xaa3]);
  }
  if (*(char *)((long)param_1 + 0x5517) < '\0') {
    operator_delete((void *)param_1[0xaa0]);
  }
  if (*(char *)((long)param_1 + 0x54ff) < '\0') {
    operator_delete((void *)param_1[0xa9d]);
  }
  if (*(char *)((long)param_1 + 0x54e7) < '\0') {
    operator_delete((void *)param_1[0xa9a]);
  }
  if (*(char *)((long)param_1 + 0x54cf) < '\0') {
    operator_delete((void *)param_1[0xa97]);
  }
  if (*(char *)((long)param_1 + 0x54b7) < '\0') {
    operator_delete((void *)param_1[0xa94]);
  }
  if (*(char *)((long)param_1 + 0x549f) < '\0') {
    operator_delete((void *)param_1[0xa91]);
  }
  if (*(char *)((long)param_1 + 0x5487) < '\0') {
    operator_delete((void *)param_1[0xa8e]);
  }
  FUN_10064221c(param_1 + 0xa7c);
  FUN_10003bd40(param_1 + 0x7c5);
  FUN_10003bd40(param_1 + 0x50e);
  FUN_10003bd40(param_1 + 599);
  FUN_10064221c(param_1 + 0x246);
  thunk_FUN_100651068(param_1 + 0x220);
  FUN_10064221c(param_1 + 0x20f);
  FUN_10064221c(param_1 + 0x1fe);
  thunk_FUN_100651068(param_1 + 0x1d8);
  param_1[0x1b8] = &PTR_FUN_101462f50;
  param_1[0x1c9] = &PTR_FUN_101463068;
  if (*(char *)((long)param_1 + 0xea7) < '\0') {
    operator_delete((void *)param_1[0x1d2]);
  }
  FUN_1010b7434(param_1 + 0x1cc);
  FUN_10064221c(param_1 + 0x1b8);
  param_1[0x19a] = &PTR_FUN_1014a7108;
  param_1[0x1b1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1b4);
  FUN_10064e2bc(param_1 + 0x19a);
  thunk_FUN_100530784(param_1 + 0xf3);
  FUN_10064e2bc(param_1 + 0xbf);
  param_1[0xa1] = &PTR_FUN_1014a7108;
  param_1[0xb8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xbb);
  FUN_10064e2bc(param_1 + 0xa1);
  param_1[0x83] = &PTR_FUN_1014a7108;
  param_1[0x9a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9d);
  FUN_10064e2bc(param_1 + 0x83);
  param_1[0x65] = &PTR_FUN_1014a7108;
  param_1[0x7c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x7f);
  FUN_10064e2bc(param_1 + 0x65);
  FUN_10064e2bc(param_1 + 0x31);
  thunk_FUN_10064e2bc(param_1 + 0x1a);
  param_1[0x19] = &PTR_FUN_10146b508;
  FUN_100136bd8(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100254968(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x5468) != 0) {
    iVar1 = FUN_100642d08();
    if (iVar1 != 0) {
      FUN_1006423ec(*(undefined8 *)(param_1 + 0x5468),1);
    }
    if (*(long **)(param_1 + 0x5468) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x5468) + 8))();
    }
    *(undefined8 *)(param_1 + 0x5468) = 0;
  }
  return;
}




void thunk_FUN_1002546e8(void)

{
  FUN_1002546e8();
  return;
}




void FUN_1002549bc(long param_1)

{
  FUN_1002546e8(param_1 + -200);
  return;
}




void FUN_1002549c4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002546e8();
  operator_delete(pvVar1);
  return;
}




void FUN_1002549d8(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002546e8(param_1 + -200);
  operator_delete(pvVar1);
  return;
}




void FUN_1002549f0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  uint uVar11;
  
  FUN_100136bd8(param_1 + 0x19);
  uVar6 = *(ulong *)(param_2 + 0x118);
  if (-1 < (char)*(byte *)(param_2 + 0x127)) {
    uVar6 = (ulong)*(byte *)(param_2 + 0x127);
  }
  if (uVar6 == 0) {
    uVar6 = *(ulong *)(param_2 + 0x100);
    if (-1 < (char)*(byte *)(param_2 + 0x10f)) {
      uVar6 = (ulong)*(byte *)(param_2 + 0x10f);
    }
    if (uVar6 != 0) {
      uVar6 = *(ulong *)(param_2 + 0xe8);
      if (-1 < (char)*(byte *)(param_2 + 0xf7)) {
        uVar6 = (ulong)*(byte *)(param_2 + 0xf7);
      }
      if (uVar6 != 0) {
        iVar4 = FUN_100642d08(param_1 + 0x1b8);
        if (iVar4 != 0) {
          FUN_1006423ec(param_1 + 0x1b8,1);
        }
        plVar10 = param_1 + 0x19a;
        if (param_1[0x1b4] != 0) {
          FUN_100652d8c(plVar10);
        }
        plVar1 = (long *)*(long *)(param_2 + 0xe0);
        if (-1 < *(char *)(param_2 + 0xf7)) {
          plVar1 = (long *)(param_2 + 0xe0);
        }
        plVar2 = (long *)*(long *)(param_2 + 0xf8);
        if (-1 < *(char *)(param_2 + 0x10f)) {
          plVar2 = (long *)(param_2 + 0xf8);
        }
        FUN_100652cac(plVar10,plVar1,plVar2);
        uVar6 = FUN_100642d08(plVar10);
        if ((uVar6 & 1) == 0) {
          FUN_1005308f8(param_1 + 0xf3,plVar10,1);
        }
        goto LAB_100254a94;
      }
    }
    iVar4 = FUN_100642d08(param_1 + 0x19a);
    if (iVar4 != 0) {
      FUN_1006423ec(param_1 + 0x19a,1);
    }
    iVar4 = FUN_100642d08(param_1 + 0x1b8);
    if (iVar4 != 0) {
      FUN_1006423ec(param_1 + 0x1b8,1);
    }
  }
  else {
    plVar10 = param_1 + 0x19a;
    if (param_1[0x1b4] != 0) {
      FUN_100652d8c(plVar10);
    }
    iVar4 = FUN_100642d08(plVar10);
    if (iVar4 != 0) {
      FUN_1006423ec(plVar10,1);
    }
    uVar6 = FUN_100642d08(param_1 + 0x1b8);
    if ((uVar6 & 1) == 0) {
      FUN_1005308f8(param_1 + 0xf3,param_1 + 0x1b8,1);
    }
    FUN_100136b6c(param_2 + 0x110,param_1 + 0x19,param_1);
  }
LAB_100254a94:
  FUN_100254968(param_1);
  if (*(char *)(param_2 + 0x1b4) != '\0') {
    uVar6 = *(ulong *)(param_2 + 0x130);
    if (-1 < (char)*(byte *)(param_2 + 0x13f)) {
      uVar6 = (ulong)*(byte *)(param_2 + 0x13f);
    }
    if (uVar6 != 0) {
      uVar6 = *(ulong *)(param_2 + 0x148);
      if (-1 < (char)*(byte *)(param_2 + 0x157)) {
        uVar6 = (ulong)*(byte *)(param_2 + 0x157);
      }
      if (uVar6 != 0) {
        pvVar7 = operator_new(0x1e0);
        lVar8 = FUN_1001aa1d4();
        param_1[0xa8d] = lVar8;
        FUN_100642bd8(param_1 + 0xa7c,pvVar7,1);
        uVar9 = FUN_100345b94();
        plVar10 = (long *)*(long *)(param_2 + 0x128);
        if (-1 < *(char *)(param_2 + 0x13f)) {
          plVar10 = (long *)(param_2 + 0x128);
        }
        lVar8 = FUN_10034c450(uVar9,plVar10);
        if (lVar8 != 0) {
          FUN_1001aa350(param_1[0xa8d],lVar8);
          FUN_10064e47c(0x44800000,0x44800000,param_1[0xa8d]);
          lVar8 = param_1[0xa8d];
          bVar3 = false;
          if ((*(float *)(lVar8 + 0x4c) == 0.0) && (bVar3 = false, !NAN(*(float *)(lVar8 + 0x48))))
          {
            bVar3 = *(float *)(lVar8 + 0x48) == 0.0;
          }
          if (!bVar3) {
            *(undefined8 *)(lVar8 + 0x48) = 0;
            FUN_1000200a0();
            lVar8 = param_1[0xa8d];
          }
          plVar10 = (long *)*(long *)(param_2 + 0x140);
          if (-1 < *(char *)(param_2 + 0x157)) {
            plVar10 = (long *)(param_2 + 0x140);
          }
          FUN_1001aae30(lVar8,plVar10);
        }
      }
    }
  }
  FUN_1006513c0(param_1 + 0x1d8,param_2);
  lVar8 = *(long *)(param_2 + 0x188);
  plVar10 = param_1 + 0x20f;
  uVar5 = FUN_100642d08(plVar10);
  if (lVar8 == 0) {
    if ((uVar5 & 1) != 0) goto LAB_100254c98;
  }
  else {
    if (uVar5 != 0) {
      FUN_1006423ec(plVar10,1);
    }
    iVar4 = FUN_100642d08(*(undefined8 *)(param_2 + 0x188));
    if (iVar4 != 0) {
      FUN_1006423ec(*(undefined8 *)(param_2 + 0x188),1);
    }
    plVar10 = *(long **)(param_2 + 0x188);
  }
  FUN_100642bd8(param_1 + 0x1fe,plVar10,1);
LAB_100254c98:
  param_1[0xaaa] = *(long *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0xaa9) = *(undefined4 *)(param_2 + 0x1b0);
  FUN_1006513c0(param_1 + 0x220,param_2 + 0x10);
  FUN_100651700(param_1 + 0x220,(int)param_1[0xaa9]);
  std::string::operator=((string *)(param_1 + 0xa8e),(string *)(param_2 + 0x30));
  std::string::operator=((string *)(param_1 + 0xa91),(string *)(param_2 + 0x48));
  std::string::operator=((string *)(param_1 + 0xa94),(string *)(param_2 + 0x70));
  std::string::operator=((string *)(param_1 + 0xa97),(string *)(param_2 + 0x88));
  std::string::operator=((string *)(param_1 + 0xa9a),(string *)(param_2 + 0xb0));
  std::string::operator=((string *)(param_1 + 0xa9d),(string *)(param_2 + 200));
  std::string::operator=((string *)(param_1 + 0xaa0),(string *)(param_2 + 0x158));
  *(undefined4 *)(param_1 + 0xaa6) = *(undefined4 *)(param_2 + 400);
  std::string::operator=((string *)(param_1 + 0xaa3),(string *)(param_2 + 0x170));
  *(undefined1 *)((long)param_1 + 0x554c) = *(undefined1 *)(param_2 + 0x1b5);
  lVar8 = *(long *)(param_2 + 0x1a0);
  param_1[0xaa7] = *(long *)(param_2 + 0x198);
  param_1[0xaa8] = lVar8;
  FUN_100181af8(param_1 + 599,param_2 + 0x20);
  FUN_100181af8(param_1 + 0x50e,param_2 + 0x60);
  FUN_100181af8(param_1 + 0x7c5,param_2 + 0xa0);
  iVar4 = FUN_1004e3624(param_2 + 0x20);
  uVar11 = 4;
  uVar5 = 0;
  if (iVar4 == 0) {
    uVar5 = uVar11;
  }
  *(uint *)((long)param_1 + 0x133c) = *(uint *)((long)param_1 + 0x133c) & 0xfffffffb | uVar5;
  iVar4 = FUN_1004e3624(param_2 + 0x60);
  uVar5 = 0;
  if (iVar4 == 0) {
    uVar5 = uVar11;
  }
  *(uint *)((long)param_1 + 0x28f4) = *(uint *)((long)param_1 + 0x28f4) & 0xfffffffb | uVar5;
  iVar4 = FUN_1004e3624(param_2 + 0xa0);
  uVar5 = 0;
  if (iVar4 == 0) {
    uVar5 = uVar11;
  }
  *(uint *)((long)param_1 + 0x3eac) = *(uint *)((long)param_1 + 0x3eac) & 0xfffffffb | uVar5;
  if (*(float *)((long)param_1 + 0x7dc) != 0.0) {
    *(undefined4 *)((long)param_1 + 0x7dc) = 0;
    FUN_1000200a0(param_1 + 0xf3);
  }
                    /* WARNING: Could not recover jumptable at 0x000100254e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_100254e78(long *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  FUN_1001a679c(param_1 + 0x1b8);
  FUN_1001a6880((float)param_3,(float)param_4,param_1 + 0x1b8);
                    /* WARNING: Could not recover jumptable at 0x000100254ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_100254ed0(long param_1)

{
  FUN_100254e78(param_1 + -200);
  return;
}




void FUN_100254ed8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  FUN_100642324();
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_100644a94("UI::EVENT_MENU_CLOSE_PLATFORM_NOTIFICATION");
    FUN_100644aec(auStack_40,uVar1,0);
    FUN_100644c34(*(undefined8 *)(param_1 + 0x20),auStack_40,1);
  }
  if (*(code **)(param_1 + 0x5540) != (code *)0x0) {
    (**(code **)(param_1 + 0x5540))(*(undefined8 *)(param_1 + 0x5538),0);
  }
  return;
}




void FUN_100254f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100255a10(param_1,param_2,param_5);
  return;
}




void thunk_FUN_100254ed8(void)

{
  FUN_100254ed8();
  return;
}




void FUN_100254f54(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_60;
  float local_5c;
  undefined1 *local_58;
  
  FUN_100641464(&local_5c,&local_60);
  FUN_10064e47c(local_5c,local_60,param_1 + 0xd0);
  lVar3 = param_1 + 0x188;
  if ((*(float *)(param_1 + 0x1c8) != local_5c * 0.5) || (*(float *)(param_1 + 0x1cc) != 0.0)) {
    *(float *)(param_1 + 0x1c8) = local_5c * 0.5;
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    FUN_1000200a0(lVar3);
  }
  local_58 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x188) + 0x28))(lVar3,&local_58);
  FUN_10064e47c(0x452f0000,local_60,lVar3);
  lVar3 = param_1 + 0x328;
  FUN_10064e47c(0x44d20001,local_60,lVar3);
  bVar1 = false;
  if ((*(float *)(param_1 + 0x36c) == 0.0) && (bVar1 = false, !NAN(*(float *)(param_1 + 0x368)))) {
    bVar1 = *(float *)(param_1 + 0x368) == 0.0;
  }
  if (!bVar1) {
    *(undefined8 *)(param_1 + 0x368) = 0;
    FUN_1000200a0(lVar3);
  }
  local_58 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x328) + 0x28))(lVar3,&local_58);
  lVar5 = param_1 + 0x508;
  FUN_10064e47c(0x43480000,local_60,lVar5);
  if ((*(float *)(param_1 + 0x548) != -840.00006) || (*(float *)(param_1 + 0x54c) != 0.0)) {
    *(undefined8 *)(param_1 + 0x548) = 0xc4520001;
    FUN_1000200a0(lVar5);
  }
  local_58 = (undefined1 *)0x3f800000;
  (**(code **)(*(long *)(param_1 + 0x508) + 0x28))(lVar5,&local_58);
  lVar5 = param_1 + 0x418;
  FUN_10064e47c(0x43480000,local_60,lVar5);
  if ((*(float *)(param_1 + 0x458) != 840.00006) || (*(float *)(param_1 + 0x45c) != 0.0)) {
    *(undefined8 *)(param_1 + 0x458) = 0x44520001;
    FUN_1000200a0(lVar5);
  }
  local_58 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_1 + 0x418) + 0x28))(lVar5,&local_58);
  lVar5 = param_1 + 0xcd0;
  iVar2 = FUN_100642d08(lVar5);
  if (iVar2 == 0) {
    lVar6 = param_1 + 0xdc0;
    iVar2 = FUN_100642d08(lVar6);
    if (iVar2 != 0) {
      fVar7 = *(float *)(param_1 + 0x5550);
      if (fVar7 <= 0.0) {
        fVar7 = (float)FUN_100652e60(lVar3);
        fVar8 = (float)FUN_10064259c(lVar6);
        fVar7 = (float)NEON_fminnm((fVar7 + -10.0) / fVar8,0x3f800000);
        bVar1 = false;
        if ((*(float *)(param_1 + 0xe08) == fVar7) &&
           (bVar1 = false, !NAN(*(float *)(param_1 + 0xe0c)) && !NAN(fVar7))) {
          bVar1 = *(float *)(param_1 + 0xe0c) == fVar7;
        }
        if (!bVar1) goto LAB_100255218;
      }
      else if ((*(float *)(param_1 + 0xe08) != fVar7) || (*(float *)(param_1 + 0xe0c) != fVar7)) {
LAB_100255218:
        *(float *)(param_1 + 0xe08) = fVar7;
        *(float *)(param_1 + 0xe0c) = fVar7;
        goto LAB_100255220;
      }
    }
  }
  else {
    fVar7 = *(float *)(param_1 + 0x5550);
    if (fVar7 <= 0.0) {
      fVar7 = (float)FUN_100652e60(lVar3);
      fVar8 = (float)FUN_10065317c(lVar5);
      fVar7 = (float)NEON_fminnm((fVar7 + -10.0) / fVar8,0x3f800000);
      bVar1 = false;
      if ((*(float *)(param_1 + 0xd18) == fVar7) &&
         (bVar1 = false, !NAN(*(float *)(param_1 + 0xd1c)) && !NAN(fVar7))) {
        bVar1 = *(float *)(param_1 + 0xd1c) == fVar7;
      }
      if (!bVar1) goto LAB_1002551d0;
    }
    else if ((*(float *)(param_1 + 0xd18) != fVar7) || (*(float *)(param_1 + 0xd1c) != fVar7)) {
LAB_1002551d0:
      *(float *)(param_1 + 0xd18) = fVar7;
      *(float *)(param_1 + 0xd1c) = fVar7;
      lVar6 = lVar5;
LAB_100255220:
      FUN_1000200a0(lVar6);
    }
  }
  lVar3 = param_1 + 0xec0;
  FUN_10065179c(0x44af0000,0,0x3f800000,lVar3);
  bVar1 = false;
  if ((*(float *)(param_1 + 0xf04) == 0.0) && (bVar1 = false, !NAN(*(float *)(param_1 + 0xf00)))) {
    bVar1 = *(float *)(param_1 + 0xf00) == 0.0;
  }
  if (!bVar1) {
    *(undefined8 *)(param_1 + 0xf00) = 0;
    FUN_1000200a0(lVar3);
  }
  local_58 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0xec0) + 0x28))(lVar3,&local_58);
  fVar7 = (float)FUN_100651184(param_1 + 0x1100);
  fVar8 = *(float *)(param_1 + 0x1140);
  if (fVar8 != fVar7 * -0.5) {
    *(float *)(param_1 + 0x1140) = fVar7 * -0.5;
    FUN_1000200a0(param_1 + 0x1100);
  }
  iVar2 = FUN_100642d08(lVar5);
  if (iVar2 == 0) {
    lVar6 = param_1 + 0xdc0;
    iVar2 = FUN_100642d08(lVar6);
    fVar7 = *(float *)(param_1 + 0xf04);
    if (iVar2 != 0) {
      FUN_100651184(lVar3);
      fVar9 = fVar8;
      FUN_10064259c(lVar6);
      fVar7 = fVar7 + 16.0 + fVar8 + fVar9 * 0.5;
      fVar8 = *(float *)(param_1 + 0xe00);
      if ((fVar8 != 0.0) || (fVar8 = *(float *)(param_1 + 0xe04), fVar8 != fVar7)) {
        *(undefined4 *)(param_1 + 0xe00) = 0;
        *(float *)(param_1 + 0xe04) = fVar7;
        FUN_1000200a0(lVar6);
      }
      local_58 = &DAT_3f0000003f000000;
      (**(code **)(*(long *)(param_1 + 0xdc0) + 0x28))(lVar6,&local_58);
      fVar7 = *(float *)(param_1 + 0xe04);
      FUN_10064259c(lVar6);
      goto LAB_1002553cc;
    }
    FUN_10064259c(lVar3);
    fVar8 = fVar7 + 5.0 + fVar8;
  }
  else {
    fVar9 = *(float *)(param_1 + 0xf04);
    FUN_100651184(lVar3);
    fVar7 = fVar8;
    FUN_10065317c(lVar5);
    fVar7 = fVar9 + fVar8 + 16.0 + fVar7 * 0.5;
    fVar8 = *(float *)(param_1 + 0xd10);
    if ((fVar8 != 0.0) || (fVar8 = *(float *)(param_1 + 0xd14), fVar8 != fVar7)) {
      *(undefined4 *)(param_1 + 0xd10) = 0;
      *(float *)(param_1 + 0xd14) = fVar7;
      FUN_1000200a0(lVar5);
    }
    local_58 = &DAT_3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0xcd0) + 0x28))(lVar5,&local_58);
    fVar7 = *(float *)(param_1 + 0xd14);
    FUN_10065317c(lVar5);
LAB_1002553cc:
    fVar8 = fVar7 + 5.0 + fVar8 * 0.5;
  }
  fVar7 = *(float *)(param_1 + 0x1030);
  if ((fVar7 != 0.0) || (fVar7 = *(float *)(param_1 + 0x1034), fVar7 != fVar8)) {
    *(undefined4 *)(param_1 + 0x1030) = 0;
    *(float *)(param_1 + 0x1034) = fVar8;
    FUN_1000200a0(param_1 + 0xff0);
  }
  if (*(long *)(param_1 + 0x5468) != 0) {
    iVar2 = FUN_100642d08(lVar5);
    if (iVar2 == 0) {
      iVar2 = FUN_100642d08(param_1 + 0xdc0);
      plVar4 = *(long **)(param_1 + 0x5468);
      if (iVar2 == 0) {
        fVar7 = *(float *)(param_1 + 0x1140);
        fVar8 = *(float *)(param_1 + 0x1144);
      }
      else {
        fVar7 = *(float *)(param_1 + 0xe00);
        fVar8 = *(float *)(param_1 + 0xe04);
      }
    }
    else {
      plVar4 = *(long **)(param_1 + 0x5468);
      fVar7 = *(float *)(param_1 + 0xd10);
      fVar8 = *(float *)(param_1 + 0xd14);
    }
    local_58 = &DAT_3f0000003f000000;
    if ((*(float *)(plVar4 + 8) != fVar7) || (*(float *)((long)plVar4 + 0x44) != fVar8)) {
      *(float *)(plVar4 + 8) = fVar7;
      *(float *)((long)plVar4 + 0x44) = fVar8;
      FUN_1000200a0(plVar4);
    }
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_58);
    lVar3 = *(long *)(param_1 + 0x5468);
    fVar8 = *(float *)(param_1 + 0x5554);
    fVar7 = *(float *)(lVar3 + 0x48);
    if ((fVar7 != fVar8) || (fVar7 = *(float *)(lVar3 + 0x4c), fVar7 != fVar8)) {
      *(float *)(lVar3 + 0x48) = fVar8;
      *(float *)(lVar3 + 0x4c) = fVar8;
      FUN_1000200a0();
    }
  }
  fVar8 = local_60;
  lVar5 = param_1 + 0x12b8;
  FUN_10064e3cc(lVar5);
  fVar7 = (fVar8 + -120.0) - fVar7;
  FUN_10064e47c(local_5c,param_1 + 0x5f8);
  lVar3 = param_1 + 0x798;
  FUN_100530a48(lVar3,1);
  if (*(char *)(param_1 + 0x554c) == '\0') {
    bVar1 = false;
  }
  else {
    FUN_100530a94(lVar3);
    fVar8 = fVar7;
    FUN_10064e3cc(param_1 + 0x5f8);
    bVar1 = fVar8 < fVar7;
    fVar7 = fVar8;
  }
  FUN_100530c04(lVar3,0);
  FUN_100530adc(lVar3,0,bVar1);
  FUN_10064e3cc(lVar5);
  fVar7 = local_60 + fVar7 * -0.5 + -50.0;
  if (*(float *)(param_1 + 0x12fc) != fVar7) {
    *(float *)(param_1 + 0x12fc) = fVar7;
    FUN_1000200a0(lVar5);
  }
  lVar3 = param_1 + 0x2870;
  if (*(float *)(param_1 + 0x28b4) != fVar7) {
    *(float *)(param_1 + 0x28b4) = fVar7;
    FUN_1000200a0(lVar3);
  }
  if (*(float *)(param_1 + 0x3e6c) != fVar7) {
    *(float *)(param_1 + 0x3e6c) = fVar7;
    FUN_1000200a0(param_1 + 0x3e28);
  }
  FUN_100655b6c(param_1 + 0x3058);
  iVar2 = FUN_1004e3624();
  if (iVar2 != 0) {
    FUN_100655b6c(param_1 + 0x4610);
    iVar2 = FUN_1004e3624();
    if (iVar2 != 0) {
      if (*(float *)(param_1 + 0x12f8) == 0.0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x12f8) = 0;
      goto LAB_1002556d8;
    }
  }
  FUN_100655b6c(param_1 + 0x4610);
  iVar2 = FUN_1004e3624();
  if (iVar2 == 0) {
    if (*(float *)(param_1 + 0x12f8) != 554.4001) {
      *(undefined4 *)(param_1 + 0x12f8) = 0x440a999b;
      FUN_1000200a0(lVar5);
    }
    if (*(float *)(param_1 + 0x3e68) != 0.0) {
      *(undefined4 *)(param_1 + 0x3e68) = 0;
      FUN_1000200a0(param_1 + 0x3e28);
    }
    if (*(float *)(param_1 + 0x28b0) == -554.4001) {
      return;
    }
    *(undefined4 *)(param_1 + 0x28b0) = 0xc40a999b;
    lVar5 = lVar3;
  }
  else {
    if (*(float *)(param_1 + 0x28b0) != -420.00003) {
      *(undefined4 *)(param_1 + 0x28b0) = 0xc3d20001;
      FUN_1000200a0(lVar3);
    }
    if (*(float *)(param_1 + 0x12f8) == 420.00003) {
      return;
    }
    *(undefined4 *)(param_1 + 0x12f8) = 0x43d20001;
  }
LAB_1002556d8:
  FUN_1000200a0(lVar5);
  return;
}




void thunk_FUN_100255700(void)

{
  FUN_100255700();
  return;
}




void FUN_100255700(long param_1,int param_2)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  long *plVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long *plVar11;
  size_t sVar12;
  size_t sVar13;
  byte bVar14;
  undefined4 local_70;
  undefined4 uStack_6c;
  char local_59;
  undefined4 local_58;
  undefined1 auStack_54 [4];
  
  FUN_100641464(auStack_54,&local_58);
  uVar7 = FUN_10018eed4();
  FUN_10063f0e8(0x3f000000);
  lVar1 = param_1 + 0x188;
  if (param_2 == 0) {
    local_70 = 0;
    uStack_6c = local_58;
    FUN_100640428(uVar7,lVar1,&local_70);
    FUN_10063f130(uVar7,FUN_10001f160);
    FUN_100642324(lVar1);
    FUN_100642b14(lVar1,uVar7);
    FUN_100254968(param_1);
    return;
  }
  local_70 = 0x44af0000;
  uStack_6c = local_58;
  FUN_100640428(uVar7,lVar1,&local_70);
  FUN_10063f130(uVar7,FUN_10006bf9c);
  FUN_10064e47c(0,local_58,lVar1);
  FUN_100642324(lVar1);
  FUN_100642b14(lVar1,uVar7);
  bVar14 = DAT_101d911a8._7_1_;
  sVar13 = DAT_101d911a0;
  plVar11 = (long *)(param_1 + 0x5518);
  bVar5 = *(byte *)(param_1 + 0x552f);
  uVar8 = (ulong)bVar5;
  sVar3 = *(size_t *)(param_1 + 0x5520);
  if (-1 < (char)bVar5) {
    sVar3 = uVar8;
  }
  sVar12 = (size_t)DAT_101d911a8._7_1_;
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = sVar12;
  }
  if (sVar3 == sVar2) {
    plVar4 = (long *)*plVar11;
    if (-1 < (char)bVar5) {
      plVar4 = plVar11;
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar3 == 0) || (iVar6 = _memcmp(plVar4,pbVar10,sVar3), iVar6 == 0)) goto LAB_1002558f0;
    }
    else {
      if (sVar3 == 0) goto LAB_1002558f0;
      if ((uint)*pbVar10 == ((uint)(long *)*plVar11 & 0xff)) {
        pbVar9 = (byte *)(param_1 + 0x5519);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) goto LAB_1002558f0;
          bVar5 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar5 == *pbVar10);
      }
    }
  }
  uVar7 = FUN_1001a47a4();
  if (*(char *)(param_1 + 0x552f) < '\0') {
    plVar11 = (long *)*plVar11;
  }
  FUN_10001549c(&local_70,plVar11);
  FUN_1001e1e48(uVar7,&local_70,0,1);
  if (local_59 < '\0') {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  FUN_100642b14(lVar1,uVar7);
  sVar12 = (size_t)DAT_101d911a8._7_1_;
  sVar13 = DAT_101d911a0;
  bVar14 = DAT_101d911a8._7_1_;
LAB_1002558f0:
  plVar11 = (long *)(param_1 + 0x5500);
  bVar5 = *(byte *)(param_1 + 0x5517);
  uVar8 = (ulong)bVar5;
  sVar3 = *(size_t *)(param_1 + 0x5508);
  if (-1 < (char)bVar5) {
    sVar3 = uVar8;
  }
  if (-1 < (char)bVar14) {
    sVar13 = sVar12;
  }
  if (sVar3 == sVar13) {
    plVar4 = (long *)*plVar11;
    if (-1 < (char)bVar5) {
      plVar4 = plVar11;
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)bVar14) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if (sVar3 == 0) {
        return;
      }
      iVar6 = _memcmp(plVar4,pbVar10,sVar3);
      if (iVar6 == 0) {
        return;
      }
    }
    else {
      if (sVar3 == 0) {
        return;
      }
      if ((uint)*pbVar10 == ((uint)(long *)*plVar11 & 0xff)) {
        pbVar9 = (byte *)(param_1 + 0x5501);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) {
            return;
          }
          bVar5 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar5 == *pbVar10);
      }
    }
  }
  uVar7 = FUN_10064081c(*(undefined4 *)(param_1 + 0x5530));
  FUN_100642b14(lVar1,uVar7);
  uVar7 = FUN_1001a47a4();
  if (*(char *)(param_1 + 0x5517) < '\0') {
    plVar11 = (long *)*plVar11;
  }
  FUN_10001549c(&local_70,plVar11);
  FUN_1001e1e48(uVar7,&local_70,0,0);
  if (local_59 < '\0') {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  FUN_100642b14(lVar1,uVar7);
  return;
}




void FUN_100255a10(long param_1,undefined8 param_2,int param_3)

{
  size_t sVar1;
  undefined8 ***pppuVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *local_60 [2];
  char local_49;
  undefined8 **local_48;
  size_t local_40;
  byte local_31;
  
  FUN_100254ed8();
  FUN_10003330c(&local_48,&DAT_101d91198);
  FUN_10003330c(local_60,&DAT_101d91198);
  if (param_3 == 2) {
    std::string::operator=((string *)&local_48,(string *)(param_1 + 0x54d0));
    lVar6 = 0x54e8;
LAB_100255aa8:
    std::string::operator=((string *)local_60,(string *)(param_1 + lVar6));
  }
  else {
    if (param_3 == 1) {
      std::string::operator=((string *)&local_48,(string *)(param_1 + 0x54a0));
      lVar6 = 0x54b8;
      goto LAB_100255aa8;
    }
    if (param_3 == 0) {
      std::string::operator=((string *)&local_48,(string *)(param_1 + 0x5470));
      lVar6 = 0x5488;
      goto LAB_100255aa8;
    }
  }
  uVar7 = (ulong)local_31;
  if (-1 < (char)local_31) {
    local_40 = uVar7;
  }
  sVar1 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar1 = (ulong)DAT_101d911a8._7_1_;
  }
  if (local_40 == sVar1) {
    pppuVar2 = (undefined8 ***)local_48;
    if (-1 < (char)local_31) {
      pppuVar2 = &local_48;
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)local_31 < '\0') {
      if ((local_40 == 0) || (iVar4 = _memcmp(pppuVar2,pbVar9,local_40), iVar4 == 0))
      goto LAB_100255b68;
    }
    else {
      if (local_40 == 0) goto LAB_100255b68;
      if ((uint)*pbVar9 == ((uint)local_48 & 0xff)) {
        pbVar8 = (byte *)((ulong)&local_48 | 1);
        do {
          uVar7 = uVar7 - 1;
          pbVar9 = pbVar9 + 1;
          if (uVar7 == 0) goto LAB_100255b68;
          bVar3 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar3 == *pbVar9);
      }
    }
  }
  uVar5 = FUN_10002f320();
  FUN_1000312cc(uVar5,&local_48,local_60,0,0);
LAB_100255b68:
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if ((char)local_31 < '\0') {
    operator_delete(local_48);
  }
  return;
}




undefined ** FUN_100255b9c(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  int iVar28;
  long lVar29;
  undefined8 uVar30;
  uint uVar31;
  undefined *puVar32;
  undefined **local_348;
  undefined **local_340;
  undefined8 local_338;
  code *local_330;
  undefined8 uStack_328;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  void *pvStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined1 auStack_2c8 [164];
  undefined4 local_224;
  undefined8 local_1a0;
  undefined1 auStack_100 [16];
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined4 local_c0;
  uint local_84;
  
  lVar29 = FUN_100269da8();
  FUN_1001e1b34(lVar29 + 200);
  *param_1 = (undefined *)&PTR_thunk_FUN_100256f78_10147a9e8;
  param_1[0x19] = (undefined *)&PTR_FUN_10147ab58;
  ppuVar1 = param_1 + 0x1c;
  FUN_1006421a8();
  param_1[0x1c] = (undefined *)&PTR_thunk_FUN_10064221c_10144b7e8;
  ppuVar2 = param_1 + 0x2d;
  thunk_FUN_100652c08();
  ppuVar3 = param_1 + 0x4b;
  thunk_FUN_10064f204();
  ppuVar4 = param_1 + 0x74;
  thunk_FUN_100650e64();
  ppuVar5 = param_1 + 0x9a;
  thunk_FUN_100650e64();
  ppuVar6 = param_1 + 0xc0;
  thunk_FUN_100650e64();
  thunk_FUN_1001c4088();
  ppuVar7 = param_1 + 0x181;
  thunk_FUN_100650e64();
  thunk_FUN_1001c4088();
  FUN_1006421a8(param_1 + 0x242);
  param_1[0x242] = (undefined *)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x253);
  thunk_FUN_100650e64(param_1 + 0x271);
  ppuVar8 = param_1 + 0x297;
  thunk_FUN_100650e64();
  thunk_FUN_1001c4088();
  ppuVar9 = param_1 + 0x358;
  thunk_FUN_100655644();
  ppuVar10 = param_1 + 899;
  thunk_FUN_100652c08();
  ppuVar11 = param_1 + 0x3a1;
  thunk_FUN_100652c08();
  ppuVar12 = param_1 + 0x3bf;
  thunk_FUN_100650e64();
  ppuVar13 = param_1 + 0x3e5;
  thunk_FUN_100652c08();
  ppuVar14 = param_1 + 0x403;
  thunk_FUN_1001cd1dc();
  ppuVar15 = param_1 + 0x42e;
  thunk_FUN_100650e64();
  ppuVar16 = param_1 + 0x454;
  thunk_FUN_1006543ec(ppuVar16);
  ppuVar17 = param_1 + 0x488;
  FUN_10053319c(ppuVar17,0);
  ppuVar18 = param_1 + 0x533;
  FUN_1006421a8();
  param_1[0x533] = (undefined *)&PTR_thunk_FUN_10064221c_10144b7e8;
  ppuVar19 = param_1 + 0x548;
  param_1[0x545] = (undefined *)0x0;
  param_1[0x544] = (undefined *)0x0;
  param_1[0x547] = (undefined *)0x0;
  param_1[0x546] = (undefined *)0x0;
  thunk_FUN_100652c08(ppuVar19);
  ppuVar20 = param_1 + 0x566;
  thunk_FUN_100652c08(ppuVar20);
  ppuVar21 = param_1 + 0x584;
  thunk_FUN_1001ae894();
  ppuVar22 = param_1 + 0x6c3;
  FUN_1006421a8(ppuVar22);
  param_1[0x6c3] = (undefined *)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4d10();
  ppuVar23 = param_1 + 0x937;
  thunk_FUN_100652c08(ppuVar23);
  ppuVar24 = param_1 + 0x955;
  thunk_FUN_100652c08(ppuVar24);
  ppuVar25 = param_1 + 0x973;
  thunk_FUN_1001c0c34(ppuVar25,0);
  ppuVar26 = param_1 + 0xa22;
  FUN_1006421a8(ppuVar26);
  param_1[0xa22] = (undefined *)&PTR_thunk_FUN_10064221c_10144b7e8;
  ppuVar27 = param_1 + 0xa33;
  thunk_FUN_1001ae894(ppuVar27);
  thunk_FUN_10019a2d4(param_1 + 0xb72,0);
  thunk_FUN_1001b17d8();
  param_1[0x1cb5] = (undefined *)0x0;
  param_1[0x1cb4] = (undefined *)0x0;
  param_1[0x1cb3] = (undefined *)0x0;
  param_1[0x1cb7] = (undefined *)0xffffffff00000001;
  *(undefined4 *)(param_1 + 0x1cb8) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xe5c4) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,ppuVar16,1);
  FUN_100642bd8(ppuVar16,ppuVar19,1);
  FUN_100642bd8(ppuVar16,ppuVar20,1);
  FUN_100642bd8(ppuVar16,ppuVar25,1);
  FUN_100642bd8(ppuVar16,ppuVar18,1);
  FUN_100642bd8(ppuVar18,ppuVar17,1);
  FUN_1005308f8(ppuVar17,ppuVar22,1);
  FUN_100642bd8(ppuVar22,ppuVar24,1);
  FUN_100642bd8(ppuVar22,param_1 + 0x6d4,1);
  FUN_100642bd8(ppuVar22,ppuVar23,1);
  FUN_100642bd8(ppuVar18,ppuVar21,1);
  FUN_100642bd8(ppuVar16,ppuVar26,1);
  FUN_100642bd8(ppuVar26,ppuVar27,1);
  FUN_100642bd8(ppuVar26,param_1 + 0xb78,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1565,1);
  (**(code **)(*param_1 + 0x78))(param_1,ppuVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,ppuVar1,1);
  FUN_100642bd8(ppuVar1,ppuVar3,1);
  FUN_10064f31c(ppuVar3,ppuVar4,1);
  FUN_10064f31c(ppuVar3,ppuVar5,1);
  FUN_10064f31c(ppuVar3,ppuVar6,1);
  FUN_10064f31c(ppuVar3,param_1 + 0xe6,1);
  FUN_10064f31c(ppuVar3,ppuVar7,1);
  FUN_10064f31c(ppuVar3,param_1 + 0x1a7,1);
  FUN_10064f31c(ppuVar3,ppuVar8,1);
  FUN_10064f31c(ppuVar3,param_1 + 0x2bd,1);
  FUN_100642bd8(ppuVar1,ppuVar9,1);
  FUN_100655930(ppuVar9,ppuVar10,1);
  FUN_100655930(ppuVar9,ppuVar11,1);
  FUN_100655930(ppuVar9,ppuVar13,1);
  FUN_100655930(ppuVar9,ppuVar12,1);
  FUN_100655930(ppuVar9,ppuVar14,1);
  FUN_100655930(ppuVar9,ppuVar15,1);
  FUN_100652cac(ppuVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar31 = *(uint *)((long)param_1 + 0x1ec);
  if ((uVar31 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x1ec) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x1980;
    FUN_1000200a0(ppuVar2);
  }
  FUN_1001b66dc(0x3fef684c,param_1 + 0x6d4,"xp_bar_current","xp_bar_new");
  *(undefined2 *)(param_1 + 0x936) = 0;
  *(uint *)((long)param_1 + 0x3724) = *(uint *)((long)param_1 + 0x3724) | 4;
  FUN_100651594(ppuVar4,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248,&DAT_101158614);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_WINS_LABEL",0);
  FUN_1006513c0(ppuVar4,uVar30);
  FUN_100651594(ppuVar5,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0,&DAT_101158614);
  FUN_1004e3120(&local_348,"0");
  FUN_1006513c0(ppuVar5,&local_348);
  if (local_340 != (void *)0x0) {
    operator_delete__(local_340);
  }
  FUN_100651594(ppuVar6,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_101158614);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_GOLD_LABEL",0);
  FUN_1006513c0(ppuVar6,uVar30);
  FUN_10001549c(&local_348,"ice_icon_small");
  FUN_1001c435c(param_1 + 0xe6,&local_348);
  if ((long)local_338 < 0) {
    operator_delete(local_348);
  }
  FUN_100651594(ppuVar7,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_101158614);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_SILVER_LABEL",0);
  FUN_1006513c0(ppuVar7,uVar30);
  FUN_10001549c(&local_348,"glory_icon_small");
  FUN_1001c435c(param_1 + 0x1a7,&local_348);
  if ((long)local_338 < 0) {
    operator_delete(local_348);
  }
  FUN_100651594(ppuVar8,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_101158614);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_OPAL_LABEL",0);
  FUN_1006513c0(ppuVar8,uVar30);
  FUN_10001549c(&local_348,"opal_icon_small");
  FUN_1001c435c(param_1 + 0x2bd,&local_348);
  if ((long)local_338 < 0) {
    operator_delete(local_348);
  }
  FUN_100652cac(ppuVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"icon_karma_L1");
  if ((*(float *)(param_1 + 0x38c) != 0.8) || (*(float *)((long)param_1 + 0x1c64) != 0.8)) {
    param_1[0x38c] = (undefined *)0x3f4ccccd3f4ccccd;
    FUN_1000200a0(ppuVar10);
  }
  FUN_100651594(ppuVar12,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_KARMA_GOOD",0);
  FUN_1006513c0(ppuVar12,uVar30);
  if ((*(uint *)((long)param_1 + 0x1e7c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1e7c) = *(uint *)((long)param_1 + 0x1e7c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(ppuVar12);
  }
  FUN_100652cac(ppuVar11,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_10064e47c(0x43fa0000,0x42c80000,ppuVar11);
  FUN_100651594(ppuVar14,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_BAN_TIMER",0);
  FUN_1001cd23c(ppuVar14,uVar30,0,0);
  uVar31 = *(uint *)((long)param_1 + 0x209c);
  if ((uVar31 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x209c) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x2600;
    FUN_1000200a0(ppuVar14);
    uVar31 = *(uint *)((long)param_1 + 0x209c);
  }
  *(uint *)((long)param_1 + 0x209c) = uVar31 & 0xfffffffb;
  FUN_100652cac(ppuVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_10064e47c(0x44960000,0x42c80000,ppuVar13);
  FUN_100651594(ppuVar15,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_KARMA_BONUS_LABEL",0);
  FUN_1006513c0(ppuVar15,uVar30);
  uVar31 = *(uint *)((long)param_1 + 0x21f4);
  if ((uVar31 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x21f4) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x2600;
    FUN_1000200a0(ppuVar15);
    uVar31 = *(uint *)((long)param_1 + 0x21f4);
  }
  *(uint *)((long)param_1 + 0x21f4) = uVar31 & 0xfffffffb;
  *(uint *)((long)param_1 + 0x2324) = *(uint *)((long)param_1 + 0x2324) | 0x10;
  FUN_100530adc(ppuVar17,1,0);
  FUN_100652cac(ppuVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"account_level_shield_blur");
  if ((*(float *)(param_1 + 0x552) != 0.48) || (*(float *)((long)param_1 + 0x2a94) != 0.38)) {
    param_1[0x552] = (undefined *)0x3ec28f5c3ef5c28f;
    FUN_1000200a0(ppuVar19);
  }
  if ((*(float *)(param_1 + 0x551) != 6.5) || (*(float *)((long)param_1 + 0x2a8c) != 6.5)) {
    puVar32 = (undefined *)NEON_fmov(0x40d00000,4);
    param_1[0x551] = puVar32;
    FUN_1000200a0(ppuVar19);
  }
  uVar31 = *(uint *)((long)param_1 + 0x2ac4);
  if ((uVar31 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x2ac4) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x1980;
    FUN_1000200a0(ppuVar19);
  }
  iVar28 = FUN_100131560();
  uVar31 = 0;
  if (iVar28 == 0) {
    uVar31 = 4;
  }
  *(uint *)((long)param_1 + 0x2ac4) = *(uint *)((long)param_1 + 0x2ac4) & 0xfffffffb | uVar31;
  FUN_100652cac(ppuVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"account_level_shield_blur");
  if ((*(float *)(param_1 + 0x570) != 0.48) || (*(float *)((long)param_1 + 0x2b84) != 0.38)) {
    param_1[0x570] = (undefined *)0x3ec28f5c3ef5c28f;
    FUN_1000200a0(ppuVar20);
  }
  if ((*(float *)(param_1 + 0x56f) != 8.5) || (*(float *)((long)param_1 + 0x2b7c) != 8.5)) {
    puVar32 = (undefined *)NEON_fmov(0x41080000,4);
    param_1[0x56f] = puVar32;
    FUN_1000200a0(ppuVar20);
  }
  if ((*(uint *)((long)param_1 + 0x2bb4) & 0x7f80) != 0x600) {
    *(uint *)((long)param_1 + 0x2bb4) = *(uint *)((long)param_1 + 0x2bb4) & 0xffff807f | 0x600;
    FUN_1000200a0(ppuVar20);
  }
  iVar28 = FUN_100131560();
  uVar31 = 0;
  if (iVar28 == 0) {
    uVar31 = 4;
  }
  *(uint *)((long)param_1 + 0x2bb4) = *(uint *)((long)param_1 + 0x2bb4) & 0xfffffffb | uVar31;
  if ((*(float *)(param_1 + 0x97c) != 2.0) || (*(float *)((long)param_1 + 0x4be4) != 2.0)) {
    param_1[0x97c] = (undefined *)0x4000000040000000;
    FUN_1000200a0(ppuVar25);
  }
  FUN_1002340fc(0x3f08f5c3,ppuVar21);
  *(uint *)((long)param_1 + 0x2ca4) = *(uint *)((long)param_1 + 0x2ca4) & 0xfffffffb;
  FUN_1002340fc(0x3f08f5c3,ppuVar27);
  FUN_10003c274(auStack_100);
  local_84 = local_84 & 0xffff | 0x3200000;
  local_c0 = 0;
  uVar30 = FUN_1004e0150("MENU_PROFILE_TUTORIAL_CHEST_TITLE",0);
  thunk_FUN_1004e439c(&local_348,uVar30);
  FUN_10003330c(&local_338,&DAT_101d91198);
  local_320 = 0;
  uStack_31c = 0x41200000;
  uStack_318 = 0;
  FUN_10003c2dc(auStack_100,&local_348);
  if (uStack_328 < 0) {
    operator_delete(local_338);
  }
  if (local_340 != (void *)0x0) {
    operator_delete__(local_340);
  }
  uVar30 = FUN_1004e0150("MENU_PROFILE_TUTORIAL_CHEST_DESCRIPTION",0);
  thunk_FUN_1004e439c(&local_348,uVar30);
  FUN_10003330c(&local_338,&DAT_101d91198);
  local_320 = 1;
  uStack_31c = 0x41200000;
  uStack_318 = 0;
  FUN_10003c2dc(auStack_100,&local_348);
  if (uStack_328._7_1_ < '\0') {
    operator_delete(local_338);
  }
  if (local_340 != (void *)0x0) {
    operator_delete__(local_340);
  }
  FUN_10001549c(&local_348,"tutorial_not_complete");
  FUN_10019aa88(param_1 + 0xb72,&local_348,auStack_100);
  if (local_338._7_1_ < '\0') {
    operator_delete(local_348);
  }
  FUN_100652cac(ppuVar24,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar31 = *(uint *)((long)param_1 + 0x4b2c);
  if ((uVar31 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x4b2c) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x5900;
    FUN_1000200a0(ppuVar24);
  }
  FUN_100652cac(ppuVar23,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar31 = *(uint *)((long)param_1 + 0x4a3c);
  if ((uVar31 & 0x7f80) != 0x2c80) {
    *(uint *)((long)param_1 + 0x4a3c) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x2c80;
    FUN_1000200a0(ppuVar23);
  }
  local_320 = FUN_100644a94("EVENT_SCROLLING_TO_PAGE");
  local_348 = (undefined **)FUN_100256b68;
  ppuVar1 = param_1 + 1;
  local_330 = (code *)0x0;
  uStack_328 = 0;
  local_338 = (undefined **)0x0;
  local_340 = param_1;
  FUN_10001554c(ppuVar1,&local_348);
  local_320 = FUN_100644a94("EVENT_SCROLLING_FINISHED");
  local_348 = (undefined **)FUN_100256b6c;
  local_330 = (code *)0x0;
  uStack_328 = 0;
  local_338 = (undefined **)0x0;
  local_340 = param_1;
  FUN_10001554c(ppuVar1,&local_348);
  local_320 = FUN_100644a94("UI::EVENT_MENU_OPEN_CHEST");
  local_348 = (undefined **)thunk_FUN_1002599f8;
  local_330 = (code *)0x0;
  uStack_328 = 0;
  local_338 = (undefined **)0x0;
  local_340 = param_1;
  FUN_10001554c(param_1 + 0x585,&local_348);
  thunk_FUN_100644cf4(ppuVar21,ppuVar17);
  local_320 = FUN_100644a94("UI::EVENT_OPEN_GOVERNMENTID");
  local_348 = (undefined **)thunk_FUN_100259c48;
  local_330 = (code *)0x0;
  uStack_328 = 0;
  local_338 = (undefined **)0x0;
  local_340 = param_1;
  FUN_10001554c(ppuVar1,&local_348);
  uVar30 = FUN_10032697c();
  local_340 = (undefined **)0x0;
  local_330 = thunk_FUN_1002587e8;
  local_348 = param_1;
  local_338 = param_1;
  FUN_1000be5e4(uVar30,&local_348);
  uVar30 = FUN_100326d90();
  local_348 = (undefined **)0x0;
  local_330 = (code *)0x100259e70;
  local_340 = param_1;
  local_338 = param_1;
  FUN_1002059f4(uVar30,&local_348);
  local_320 = DAT_101d23670;
  local_348 = (undefined **)FUN_100256ba0;
  local_330 = (code *)0x0;
  uStack_328 = 0;
  local_338 = (undefined **)0x0;
  local_340 = param_1;
  FUN_10001554c(ppuVar1,&local_348);
  iVar28 = FUN_100131560();
  if (iVar28 != 0) {
    *(uint *)((long)param_1 + 0x684) = *(uint *)((long)param_1 + 0x684) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x7b4) = *(uint *)((long)param_1 + 0x7b4) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xc8c) = *(uint *)((long)param_1 + 0xc8c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xdbc) = *(uint *)((long)param_1 + 0xdbc) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x153c) = *(uint *)((long)param_1 + 0x153c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x166c) = *(uint *)((long)param_1 + 0x166c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x1c9c) = *(uint *)((long)param_1 + 0x1c9c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x1e7c) = *(uint *)((long)param_1 + 0x1e7c) & 0xfffffffb;
    FUN_1004f1580(&local_348);
    local_348 = &PTR_FUN_10145b860;
    uStack_318 = 0;
    uStack_314 = 0;
    local_320 = 0;
    uStack_31c = 0;
    uStack_308 = 0;
    local_310 = 0;
    pvStack_2f8 = (void *)0x0;
    local_300 = 0;
    uStack_2e8 = 0;
    local_2f0 = 0;
    uStack_2d8 = 0;
    local_2e0 = 0;
    local_2d0 = 0;
    FUN_100168aa8(auStack_2c8);
    local_1a0 = 0xffffffffffffffff;
    local_224 = 10;
    FUN_100256bac(param_1,&local_348,0);
    local_348 = &PTR_FUN_10145b860;
    FUN_10015613c(auStack_2c8);
    FUN_100156080(&local_2f0,1);
    if (pvStack_2f8 != (void *)0x0) {
      operator_delete__(pvStack_2f8);
      local_300 = 0;
      pvStack_2f8 = (void *)0x0;
    }
    FUN_100155f24(&local_310,1);
    FUN_100155eac(&local_320,1);
    FUN_1004f15a8(&local_348);
  }
  if (local_c8 != (void *)0x0) {
    operator_delete__(local_c8);
    local_d0 = 0;
    local_c8 = (void *)0x0;
  }
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
    local_e0 = 0;
    local_d8 = (void *)0x0;
  }
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
    local_f0 = 0;
    local_e8 = (void *)0x0;
  }
  FUN_10003c480(auStack_100,1);
  return param_1;
}




void FUN_100256b68(void)

{
  return;
}




void FUN_100256b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100644b2c(param_4);
  FUN_1002579a0(param_1,uVar1);
  return;
}




void thunk_FUN_1002599f8(long param_1)

{
  string *this;
  size_t sVar1;
  size_t sVar2;
  string *psVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  long *plVar14;
  void *apvStack_60 [2];
  char cStack_49;
  void *apvStack_48 [2];
  char cStack_31;
  
  this = (string *)(param_1 + 0xe598);
  uVar4 = *(uint *)(param_1 + 0xe5bc);
  if ((int)uVar4 < 0) {
    bVar6 = true;
  }
  else {
    bVar6 = *(uint *)(param_1 + 0x2a20) <= uVar4;
  }
  bVar5 = *(byte *)(param_1 + 0xe5af);
  uVar10 = (ulong)bVar5;
  sVar1 = *(size_t *)(param_1 + 0xe5a0);
  if (-1 < (char)bVar5) {
    sVar1 = uVar10;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 != sVar2) {
    return;
  }
  psVar3 = *(string **)this;
  if (-1 < (char)bVar5) {
    psVar3 = this;
  }
  pbVar12 = DAT_101d91198;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    pbVar12 = (byte *)&DAT_101d91198;
  }
  if ((char)bVar5 < '\0') {
    if (sVar1 != 0) {
      iVar7 = _memcmp(psVar3,pbVar12,sVar1);
      if (iVar7 != 0 || bVar6) {
        return;
      }
      goto LAB_100259aec;
    }
  }
  else if (sVar1 != 0) {
    if ((uint)*pbVar12 != ((uint)*(string **)this & 0xff)) {
      return;
    }
    pbVar11 = (byte *)(param_1 + 0xe599);
    while( true ) {
      uVar10 = uVar10 - 1;
      pbVar12 = pbVar12 + 1;
      if (uVar10 == 0) break;
      bVar5 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      if (bVar5 != *pbVar12) {
        return;
      }
    }
  }
  if (bVar6) {
    return;
  }
LAB_100259aec:
  lVar13 = *(long *)(*(long *)(param_1 + 0x2a28) + (ulong)uVar4 * 8);
  if (lVar13 != 0) {
    plVar14 = (long *)(lVar13 + 0x5d8);
    FUN_10003330c(apvStack_48,plVar14);
    if (*(char *)(lVar13 + 0x5ef) < '\0') {
      plVar14 = (long *)*plVar14;
    }
    lVar8 = FUN_100326d78(plVar14);
    if (lVar8 != 0) {
      iVar7 = FUN_100319e28();
      if (iVar7 != 0) {
        std::string::operator=(this,(string *)apvStack_48);
        FUN_1001af9fc(param_1 + 0x2c20,0);
        uVar9 = FUN_10002f320();
        if ((char)*(byte *)(param_1 + 0x353f) < '\0') {
          uVar10 = *(ulong *)(param_1 + 0x3530);
        }
        else {
          uVar10 = (ulong)*(byte *)(param_1 + 0x353f);
        }
        lVar8 = param_1 + 0x35d8;
        if (uVar10 != 0) {
          lVar8 = param_1 + 0x3528;
        }
        FUN_1000315c4(uVar9,this,lVar8);
      }
      FUN_1002591d0(lVar13);
      uVar9 = FUN_10002f320();
      FUN_10001549c(apvStack_60,"layer_player_profile_prog");
      FUN_100030cf0(uVar9,apvStack_60);
      if (cStack_49 < '\0') {
        operator_delete(apvStack_60[0]);
      }
    }
    if (cStack_31 < '\0') {
      operator_delete(apvStack_48[0]);
    }
  }
  return;
}




void thunk_FUN_100259c48(void)

{
  undefined8 uVar1;
  void *apvStack_38 [2];
  char cStack_21;
  
  uVar1 = FUN_10002f320();
  FUN_10001549c(apvStack_38,"layer_player_profile_prog");
  FUN_100030cf0(uVar1,apvStack_38);
  if (cStack_21 < '\0') {
    operator_delete(apvStack_38[0]);
  }
  return;
}




void FUN_100256ba0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100256ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_100256bac(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  void *local_88 [2];
  char local_71;
  undefined8 local_70;
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  
  fVar10 = (float)(**(code **)(*param_1 + 0x48))();
  iVar5 = FUN_100126cb8();
  fVar11 = 4.0;
  if (iVar5 == 0) {
    fVar11 = 3.0;
  }
  fVar10 = fVar10 / fVar11;
  lVar7 = FUN_10015d3ec();
  uVar2 = *(uint *)(lVar7 + 0x55d0);
  lVar7 = FUN_10015d3ec();
  iVar5 = *(int *)(lVar7 + 0x55d4);
  lVar7 = FUN_10015d3ec();
  iVar3 = *(int *)(lVar7 + 0x55d8);
  lVar7 = FUN_10015d3ec();
  iVar4 = *(int *)(lVar7 + 0x55dc);
  if (uVar2 != *(uint *)(param_1 + 0x1cb8)) {
    *(uint *)(param_1 + 0x1cb8) = uVar2;
    iVar6 = FUN_10015d3f8();
    if (iVar6 != 0) {
      FUN_100326da8();
    }
  }
  FUN_1001b5e00(fVar10 * (float)uVar2,0x41f80000,param_1 + 0x6d4,0,(int)(fVar10 * (float)uVar2),
                (int)((fVar10 * (float)(uint)(iVar5 - iVar3)) / (float)(uint)(iVar4 - iVar3) +
                     (float)(uVar2 - 1) * fVar10),0);
  FUN_1004e0150("MENU_LEVEL_UP_REWARD_GAME_MODE_UNLOCKED_BOTS",0);
  FUN_1004e0150("MENU_LEVEL_UP_REWARD_GAME_MODE_UNLOCKED_CASUAL",0);
  FUN_1004e313c(auStack_60);
  FUN_1004e38ac(auStack_60,"%d");
  FUN_1006513c0(param_1 + 0x9a,auStack_60);
  FUN_1000f0994(local_88,*(undefined4 *)(param_2 + 0x6c));
  FUN_1004e3170(&local_70,local_88);
  FUN_1006513c0(param_1 + 0x271,&local_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  plVar1 = param_1 + 0x242;
  fVar10 = *(float *)(param_1 + 0x189);
  fVar11 = (float)FUN_1006425d0(plVar1,0,0,1,1);
  fVar10 = fVar10 + fVar11 * -0.5;
  if (*(float *)(param_1 + 0x24a) != fVar10) {
    *(float *)(param_1 + 0x24a) = fVar10;
    FUN_1000200a0(plVar1);
  }
  FUN_1001c4394(param_1 + 0xe6,*(undefined4 *)(param_2 + 0x68));
  FUN_1001c4394(param_1 + 0x1a7,*(undefined4 *)(param_2 + 0x6c));
  FUN_1001c4394(param_1 + 0x2bd,*(undefined4 *)(param_2 + 0x74));
  fVar10 = *(float *)(param_1 + 0x189);
  fVar11 = (float)FUN_1006425d0(plVar1,0,0,1,1);
  fVar11 = fVar10 + fVar11 * -0.5 + -10.0;
  if (*(float *)(param_1 + 0x24a) != fVar11) {
    *(float *)(param_1 + 0x24a) = fVar11;
    FUN_1000200a0(plVar1);
  }
  plVar1 = param_1 + 899;
  if ((~*(uint *)((long)param_1 + 0x1c9c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1c9c) = *(uint *)((long)param_1 + 0x1c9c) | 0x7f80;
    FUN_1000200a0(plVar1);
  }
  lVar7 = FUN_10015d3ec();
  iVar5 = *(int *)(lVar7 + 0x5608);
  *(int *)(param_1 + 0x1cb7) = iVar5;
  *(uint *)((long)param_1 + 0x21f4) = *(uint *)((long)param_1 + 0x21f4) & 0xfffffffb;
  if (iVar5 == 2) {
    FUN_100652cdc(plVar1,"icon_karma_L2");
    uVar9 = FUN_1004e0150("MAIN_PROFILE_KARMA_GREAT",0);
    FUN_1006513c0(param_1 + 0x3bf,uVar9);
    *(uint *)((long)param_1 + 0x21f4) = *(uint *)((long)param_1 + 0x21f4) | 4;
  }
  else {
    if (iVar5 == 1) {
      FUN_100652cdc(plVar1,"icon_karma_L1");
      pcVar8 = "MAIN_PROFILE_KARMA_GOOD";
    }
    else {
      if (iVar5 != 0) {
        FUN_100652cdc(plVar1,"icon_karma_L1");
        FUN_1006513c0(param_1 + 0x3bf,&DAT_101d91650);
        uVar2 = *(uint *)((long)param_1 + 0x1c9c);
        if ((uVar2 & 0x7f80) != 0x2600) {
          *(uint *)((long)param_1 + 0x1c9c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x2600;
          FUN_1000200a0(plVar1);
        }
        goto LAB_100256f28;
      }
      FUN_100652cdc(plVar1,"icon_karma_L0");
      pcVar8 = "MAIN_PROFILE_KARMA_BAD";
    }
    uVar9 = FUN_1004e0150(pcVar8,0);
    FUN_1006513c0(param_1 + 0x3bf,uVar9);
  }
LAB_100256f28:
  param_1[0x1cb6] = (long)*(double *)(param_2 + 0x110);
  FUN_1001cd374(param_1 + 0x403,param_1 + 0x1cb6);
  FUN_10025791c(param_1);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  return;
}




undefined ** thunk_FUN_100255b9c(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  int iVar28;
  long lVar29;
  undefined8 uVar30;
  uint uVar31;
  undefined *puVar32;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined8 uStack_338;
  code *pcStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  void *pvStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [164];
  undefined4 uStack_224;
  undefined8 uStack_1a0;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  void *pvStack_e8;
  undefined8 uStack_e0;
  void *pvStack_d8;
  undefined8 uStack_d0;
  void *pvStack_c8;
  undefined4 uStack_c0;
  uint uStack_84;
  
  lVar29 = FUN_100269da8();
  FUN_1001e1b34(lVar29 + 200);
  *param_1 = (undefined *)&PTR_thunk_FUN_100256f78_10147a9e8;
  param_1[0x19] = (undefined *)&PTR_FUN_10147ab58;
  ppuVar1 = param_1 + 0x1c;
  FUN_1006421a8();
  param_1[0x1c] = (undefined *)&PTR_thunk_FUN_10064221c_10144b7e8;
  ppuVar2 = param_1 + 0x2d;
  thunk_FUN_100652c08();
  ppuVar3 = param_1 + 0x4b;
  thunk_FUN_10064f204();
  ppuVar4 = param_1 + 0x74;
  thunk_FUN_100650e64();
  ppuVar5 = param_1 + 0x9a;
  thunk_FUN_100650e64();
  ppuVar6 = param_1 + 0xc0;
  thunk_FUN_100650e64();
  thunk_FUN_1001c4088();
  ppuVar7 = param_1 + 0x181;
  thunk_FUN_100650e64();
  thunk_FUN_1001c4088();
  FUN_1006421a8(param_1 + 0x242);
  param_1[0x242] = (undefined *)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x253);
  thunk_FUN_100650e64(param_1 + 0x271);
  ppuVar8 = param_1 + 0x297;
  thunk_FUN_100650e64();
  thunk_FUN_1001c4088();
  ppuVar9 = param_1 + 0x358;
  thunk_FUN_100655644();
  ppuVar10 = param_1 + 899;
  thunk_FUN_100652c08();
  ppuVar11 = param_1 + 0x3a1;
  thunk_FUN_100652c08();
  ppuVar12 = param_1 + 0x3bf;
  thunk_FUN_100650e64();
  ppuVar13 = param_1 + 0x3e5;
  thunk_FUN_100652c08();
  ppuVar14 = param_1 + 0x403;
  thunk_FUN_1001cd1dc();
  ppuVar15 = param_1 + 0x42e;
  thunk_FUN_100650e64();
  ppuVar16 = param_1 + 0x454;
  thunk_FUN_1006543ec(ppuVar16);
  ppuVar17 = param_1 + 0x488;
  FUN_10053319c(ppuVar17,0);
  ppuVar18 = param_1 + 0x533;
  FUN_1006421a8();
  param_1[0x533] = (undefined *)&PTR_thunk_FUN_10064221c_10144b7e8;
  ppuVar19 = param_1 + 0x548;
  param_1[0x545] = (undefined *)0x0;
  param_1[0x544] = (undefined *)0x0;
  param_1[0x547] = (undefined *)0x0;
  param_1[0x546] = (undefined *)0x0;
  thunk_FUN_100652c08(ppuVar19);
  ppuVar20 = param_1 + 0x566;
  thunk_FUN_100652c08(ppuVar20);
  ppuVar21 = param_1 + 0x584;
  thunk_FUN_1001ae894();
  ppuVar22 = param_1 + 0x6c3;
  FUN_1006421a8(ppuVar22);
  param_1[0x6c3] = (undefined *)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4d10();
  ppuVar23 = param_1 + 0x937;
  thunk_FUN_100652c08(ppuVar23);
  ppuVar24 = param_1 + 0x955;
  thunk_FUN_100652c08(ppuVar24);
  ppuVar25 = param_1 + 0x973;
  thunk_FUN_1001c0c34(ppuVar25,0);
  ppuVar26 = param_1 + 0xa22;
  FUN_1006421a8(ppuVar26);
  param_1[0xa22] = (undefined *)&PTR_thunk_FUN_10064221c_10144b7e8;
  ppuVar27 = param_1 + 0xa33;
  thunk_FUN_1001ae894(ppuVar27);
  thunk_FUN_10019a2d4(param_1 + 0xb72,0);
  thunk_FUN_1001b17d8();
  param_1[0x1cb5] = (undefined *)0x0;
  param_1[0x1cb4] = (undefined *)0x0;
  param_1[0x1cb3] = (undefined *)0x0;
  param_1[0x1cb7] = (undefined *)0xffffffff00000001;
  *(undefined4 *)(param_1 + 0x1cb8) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xe5c4) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,ppuVar16,1);
  FUN_100642bd8(ppuVar16,ppuVar19,1);
  FUN_100642bd8(ppuVar16,ppuVar20,1);
  FUN_100642bd8(ppuVar16,ppuVar25,1);
  FUN_100642bd8(ppuVar16,ppuVar18,1);
  FUN_100642bd8(ppuVar18,ppuVar17,1);
  FUN_1005308f8(ppuVar17,ppuVar22,1);
  FUN_100642bd8(ppuVar22,ppuVar24,1);
  FUN_100642bd8(ppuVar22,param_1 + 0x6d4,1);
  FUN_100642bd8(ppuVar22,ppuVar23,1);
  FUN_100642bd8(ppuVar18,ppuVar21,1);
  FUN_100642bd8(ppuVar16,ppuVar26,1);
  FUN_100642bd8(ppuVar26,ppuVar27,1);
  FUN_100642bd8(ppuVar26,param_1 + 0xb78,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1565,1);
  (**(code **)(*param_1 + 0x78))(param_1,ppuVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,ppuVar1,1);
  FUN_100642bd8(ppuVar1,ppuVar3,1);
  FUN_10064f31c(ppuVar3,ppuVar4,1);
  FUN_10064f31c(ppuVar3,ppuVar5,1);
  FUN_10064f31c(ppuVar3,ppuVar6,1);
  FUN_10064f31c(ppuVar3,param_1 + 0xe6,1);
  FUN_10064f31c(ppuVar3,ppuVar7,1);
  FUN_10064f31c(ppuVar3,param_1 + 0x1a7,1);
  FUN_10064f31c(ppuVar3,ppuVar8,1);
  FUN_10064f31c(ppuVar3,param_1 + 0x2bd,1);
  FUN_100642bd8(ppuVar1,ppuVar9,1);
  FUN_100655930(ppuVar9,ppuVar10,1);
  FUN_100655930(ppuVar9,ppuVar11,1);
  FUN_100655930(ppuVar9,ppuVar13,1);
  FUN_100655930(ppuVar9,ppuVar12,1);
  FUN_100655930(ppuVar9,ppuVar14,1);
  FUN_100655930(ppuVar9,ppuVar15,1);
  FUN_100652cac(ppuVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar31 = *(uint *)((long)param_1 + 0x1ec);
  if ((uVar31 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x1ec) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x1980;
    FUN_1000200a0(ppuVar2);
  }
  FUN_1001b66dc(0x3fef684c,param_1 + 0x6d4,"xp_bar_current","xp_bar_new");
  *(undefined2 *)(param_1 + 0x936) = 0;
  *(uint *)((long)param_1 + 0x3724) = *(uint *)((long)param_1 + 0x3724) | 4;
  FUN_100651594(ppuVar4,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248,&DAT_101158614);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_WINS_LABEL",0);
  FUN_1006513c0(ppuVar4,uVar30);
  FUN_100651594(ppuVar5,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0,&DAT_101158614);
  FUN_1004e3120(&ppuStack_348,"0");
  FUN_1006513c0(ppuVar5,&ppuStack_348);
  if (ppuStack_340 != (void *)0x0) {
    operator_delete__(ppuStack_340);
  }
  FUN_100651594(ppuVar6,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_101158614);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_GOLD_LABEL",0);
  FUN_1006513c0(ppuVar6,uVar30);
  FUN_10001549c(&ppuStack_348,"ice_icon_small");
  FUN_1001c435c(param_1 + 0xe6,&ppuStack_348);
  if ((long)uStack_338 < 0) {
    operator_delete(ppuStack_348);
  }
  FUN_100651594(ppuVar7,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_101158614);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_SILVER_LABEL",0);
  FUN_1006513c0(ppuVar7,uVar30);
  FUN_10001549c(&ppuStack_348,"glory_icon_small");
  FUN_1001c435c(param_1 + 0x1a7,&ppuStack_348);
  if ((long)uStack_338 < 0) {
    operator_delete(ppuStack_348);
  }
  FUN_100651594(ppuVar8,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_101158614);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_OPAL_LABEL",0);
  FUN_1006513c0(ppuVar8,uVar30);
  FUN_10001549c(&ppuStack_348,"opal_icon_small");
  FUN_1001c435c(param_1 + 0x2bd,&ppuStack_348);
  if ((long)uStack_338 < 0) {
    operator_delete(ppuStack_348);
  }
  FUN_100652cac(ppuVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"icon_karma_L1");
  if ((*(float *)(param_1 + 0x38c) != 0.8) || (*(float *)((long)param_1 + 0x1c64) != 0.8)) {
    param_1[0x38c] = (undefined *)0x3f4ccccd3f4ccccd;
    FUN_1000200a0(ppuVar10);
  }
  FUN_100651594(ppuVar12,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_KARMA_GOOD",0);
  FUN_1006513c0(ppuVar12,uVar30);
  if ((*(uint *)((long)param_1 + 0x1e7c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1e7c) = *(uint *)((long)param_1 + 0x1e7c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(ppuVar12);
  }
  FUN_100652cac(ppuVar11,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_10064e47c(0x43fa0000,0x42c80000,ppuVar11);
  FUN_100651594(ppuVar14,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_BAN_TIMER",0);
  FUN_1001cd23c(ppuVar14,uVar30,0,0);
  uVar31 = *(uint *)((long)param_1 + 0x209c);
  if ((uVar31 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x209c) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x2600;
    FUN_1000200a0(ppuVar14);
    uVar31 = *(uint *)((long)param_1 + 0x209c);
  }
  *(uint *)((long)param_1 + 0x209c) = uVar31 & 0xfffffffb;
  FUN_100652cac(ppuVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_10064e47c(0x44960000,0x42c80000,ppuVar13);
  FUN_100651594(ppuVar15,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_KARMA_BONUS_LABEL",0);
  FUN_1006513c0(ppuVar15,uVar30);
  uVar31 = *(uint *)((long)param_1 + 0x21f4);
  if ((uVar31 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x21f4) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x2600;
    FUN_1000200a0(ppuVar15);
    uVar31 = *(uint *)((long)param_1 + 0x21f4);
  }
  *(uint *)((long)param_1 + 0x21f4) = uVar31 & 0xfffffffb;
  *(uint *)((long)param_1 + 0x2324) = *(uint *)((long)param_1 + 0x2324) | 0x10;
  FUN_100530adc(ppuVar17,1,0);
  FUN_100652cac(ppuVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"account_level_shield_blur");
  if ((*(float *)(param_1 + 0x552) != 0.48) || (*(float *)((long)param_1 + 0x2a94) != 0.38)) {
    param_1[0x552] = (undefined *)0x3ec28f5c3ef5c28f;
    FUN_1000200a0(ppuVar19);
  }
  if ((*(float *)(param_1 + 0x551) != 6.5) || (*(float *)((long)param_1 + 0x2a8c) != 6.5)) {
    puVar32 = (undefined *)NEON_fmov(0x40d00000,4);
    param_1[0x551] = puVar32;
    FUN_1000200a0(ppuVar19);
  }
  uVar31 = *(uint *)((long)param_1 + 0x2ac4);
  if ((uVar31 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x2ac4) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x1980;
    FUN_1000200a0(ppuVar19);
  }
  iVar28 = FUN_100131560();
  uVar31 = 0;
  if (iVar28 == 0) {
    uVar31 = 4;
  }
  *(uint *)((long)param_1 + 0x2ac4) = *(uint *)((long)param_1 + 0x2ac4) & 0xfffffffb | uVar31;
  FUN_100652cac(ppuVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"account_level_shield_blur");
  if ((*(float *)(param_1 + 0x570) != 0.48) || (*(float *)((long)param_1 + 0x2b84) != 0.38)) {
    param_1[0x570] = (undefined *)0x3ec28f5c3ef5c28f;
    FUN_1000200a0(ppuVar20);
  }
  if ((*(float *)(param_1 + 0x56f) != 8.5) || (*(float *)((long)param_1 + 0x2b7c) != 8.5)) {
    puVar32 = (undefined *)NEON_fmov(0x41080000,4);
    param_1[0x56f] = puVar32;
    FUN_1000200a0(ppuVar20);
  }
  if ((*(uint *)((long)param_1 + 0x2bb4) & 0x7f80) != 0x600) {
    *(uint *)((long)param_1 + 0x2bb4) = *(uint *)((long)param_1 + 0x2bb4) & 0xffff807f | 0x600;
    FUN_1000200a0(ppuVar20);
  }
  iVar28 = FUN_100131560();
  uVar31 = 0;
  if (iVar28 == 0) {
    uVar31 = 4;
  }
  *(uint *)((long)param_1 + 0x2bb4) = *(uint *)((long)param_1 + 0x2bb4) & 0xfffffffb | uVar31;
  if ((*(float *)(param_1 + 0x97c) != 2.0) || (*(float *)((long)param_1 + 0x4be4) != 2.0)) {
    param_1[0x97c] = (undefined *)0x4000000040000000;
    FUN_1000200a0(ppuVar25);
  }
  FUN_1002340fc(0x3f08f5c3,ppuVar21);
  *(uint *)((long)param_1 + 0x2ca4) = *(uint *)((long)param_1 + 0x2ca4) & 0xfffffffb;
  FUN_1002340fc(0x3f08f5c3,ppuVar27);
  FUN_10003c274(auStack_100);
  uStack_84 = uStack_84 & 0xffff | 0x3200000;
  uStack_c0 = 0;
  uVar30 = FUN_1004e0150("MENU_PROFILE_TUTORIAL_CHEST_TITLE",0);
  thunk_FUN_1004e439c(&ppuStack_348,uVar30);
  FUN_10003330c(&uStack_338,&DAT_101d91198);
  uStack_320 = 0;
  uStack_31c = 0x41200000;
  uStack_318 = 0;
  FUN_10003c2dc(auStack_100,&ppuStack_348);
  if (uStack_328 < 0) {
    operator_delete(uStack_338);
  }
  if (ppuStack_340 != (void *)0x0) {
    operator_delete__(ppuStack_340);
  }
  uVar30 = FUN_1004e0150("MENU_PROFILE_TUTORIAL_CHEST_DESCRIPTION",0);
  thunk_FUN_1004e439c(&ppuStack_348,uVar30);
  FUN_10003330c(&uStack_338,&DAT_101d91198);
  uStack_320 = 1;
  uStack_31c = 0x41200000;
  uStack_318 = 0;
  FUN_10003c2dc(auStack_100,&ppuStack_348);
  if (uStack_328._7_1_ < '\0') {
    operator_delete(uStack_338);
  }
  if (ppuStack_340 != (void *)0x0) {
    operator_delete__(ppuStack_340);
  }
  FUN_10001549c(&ppuStack_348,"tutorial_not_complete");
  FUN_10019aa88(param_1 + 0xb72,&ppuStack_348,auStack_100);
  if (uStack_338._7_1_ < '\0') {
    operator_delete(ppuStack_348);
  }
  FUN_100652cac(ppuVar24,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar31 = *(uint *)((long)param_1 + 0x4b2c);
  if ((uVar31 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x4b2c) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x5900;
    FUN_1000200a0(ppuVar24);
  }
  FUN_100652cac(ppuVar23,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar31 = *(uint *)((long)param_1 + 0x4a3c);
  if ((uVar31 & 0x7f80) != 0x2c80) {
    *(uint *)((long)param_1 + 0x4a3c) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x2c80;
    FUN_1000200a0(ppuVar23);
  }
  uStack_320 = FUN_100644a94("EVENT_SCROLLING_TO_PAGE");
  ppuStack_348 = (undefined **)FUN_100256b68;
  ppuVar1 = param_1 + 1;
  pcStack_330 = (code *)0x0;
  uStack_328 = 0;
  uStack_338 = (undefined **)0x0;
  ppuStack_340 = param_1;
  FUN_10001554c(ppuVar1,&ppuStack_348);
  uStack_320 = FUN_100644a94("EVENT_SCROLLING_FINISHED");
  ppuStack_348 = (undefined **)FUN_100256b6c;
  pcStack_330 = (code *)0x0;
  uStack_328 = 0;
  uStack_338 = (undefined **)0x0;
  ppuStack_340 = param_1;
  FUN_10001554c(ppuVar1,&ppuStack_348);
  uStack_320 = FUN_100644a94("UI::EVENT_MENU_OPEN_CHEST");
  ppuStack_348 = (undefined **)thunk_FUN_1002599f8;
  pcStack_330 = (code *)0x0;
  uStack_328 = 0;
  uStack_338 = (undefined **)0x0;
  ppuStack_340 = param_1;
  FUN_10001554c(param_1 + 0x585,&ppuStack_348);
  thunk_FUN_100644cf4(ppuVar21,ppuVar17);
  uStack_320 = FUN_100644a94("UI::EVENT_OPEN_GOVERNMENTID");
  ppuStack_348 = (undefined **)thunk_FUN_100259c48;
  pcStack_330 = (code *)0x0;
  uStack_328 = 0;
  uStack_338 = (undefined **)0x0;
  ppuStack_340 = param_1;
  FUN_10001554c(ppuVar1,&ppuStack_348);
  uVar30 = FUN_10032697c();
  ppuStack_340 = (undefined **)0x0;
  pcStack_330 = thunk_FUN_1002587e8;
  ppuStack_348 = param_1;
  uStack_338 = param_1;
  FUN_1000be5e4(uVar30,&ppuStack_348);
  uVar30 = FUN_100326d90();
  ppuStack_348 = (undefined **)0x0;
  pcStack_330 = (code *)0x100259e70;
  ppuStack_340 = param_1;
  uStack_338 = param_1;
  FUN_1002059f4(uVar30,&ppuStack_348);
  uStack_320 = DAT_101d23670;
  ppuStack_348 = (undefined **)FUN_100256ba0;
  pcStack_330 = (code *)0x0;
  uStack_328 = 0;
  uStack_338 = (undefined **)0x0;
  ppuStack_340 = param_1;
  FUN_10001554c(ppuVar1,&ppuStack_348);
  iVar28 = FUN_100131560();
  if (iVar28 != 0) {
    *(uint *)((long)param_1 + 0x684) = *(uint *)((long)param_1 + 0x684) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x7b4) = *(uint *)((long)param_1 + 0x7b4) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xc8c) = *(uint *)((long)param_1 + 0xc8c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xdbc) = *(uint *)((long)param_1 + 0xdbc) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x153c) = *(uint *)((long)param_1 + 0x153c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x166c) = *(uint *)((long)param_1 + 0x166c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x1c9c) = *(uint *)((long)param_1 + 0x1c9c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x1e7c) = *(uint *)((long)param_1 + 0x1e7c) & 0xfffffffb;
    FUN_1004f1580(&ppuStack_348);
    ppuStack_348 = &PTR_FUN_10145b860;
    uStack_318 = 0;
    uStack_314 = 0;
    uStack_320 = 0;
    uStack_31c = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    pvStack_2f8 = (void *)0x0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2d0 = 0;
    FUN_100168aa8(auStack_2c8);
    uStack_1a0 = 0xffffffffffffffff;
    uStack_224 = 10;
    FUN_100256bac(param_1,&ppuStack_348,0);
    ppuStack_348 = &PTR_FUN_10145b860;
    FUN_10015613c(auStack_2c8);
    FUN_100156080(&uStack_2f0,1);
    if (pvStack_2f8 != (void *)0x0) {
      operator_delete__(pvStack_2f8);
      uStack_300 = 0;
      pvStack_2f8 = (void *)0x0;
    }
    FUN_100155f24(&uStack_310,1);
    FUN_100155eac(&uStack_320,1);
    FUN_1004f15a8(&ppuStack_348);
  }
  if (pvStack_c8 != (void *)0x0) {
    operator_delete__(pvStack_c8);
    uStack_d0 = 0;
    pvStack_c8 = (void *)0x0;
  }
  if (pvStack_d8 != (void *)0x0) {
    operator_delete__(pvStack_d8);
    uStack_e0 = 0;
    pvStack_d8 = (void *)0x0;
  }
  if (pvStack_e8 != (void *)0x0) {
    operator_delete__(pvStack_e8);
    uStack_f0 = 0;
    pvStack_e8 = (void *)0x0;
  }
  FUN_10003c480(auStack_100,1);
  return param_1;
}




void FUN_100256f78(undefined8 *param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_thunk_FUN_100256f78_10147a9e8;
  param_1[0x19] = &PTR_FUN_10147ab58;
  FUN_100257490();
  puVar1 = (uint *)FUN_10032697c();
  if (*puVar1 != 0) {
    lVar2 = (ulong)*puVar1 << 5;
    puVar4 = *(undefined8 **)(puVar1 + 2);
    do {
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_1000c044c(puVar1,puVar4,puVar4 + 4);
        break;
      }
      lVar2 = lVar2 + -0x20;
      puVar4 = puVar4 + 4;
    } while (lVar2 != 0);
  }
  puVar1 = (uint *)FUN_100326d90();
  if (*puVar1 != 0) {
    lVar2 = *(long *)(puVar1 + 2);
    lVar3 = (ulong)*puVar1 << 5;
    do {
      puVar4 = (undefined8 *)(lVar2 + 8);
      lVar2 = lVar2 + 0x20;
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_100205984();
        break;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  if (*(char *)((long)param_1 + 0xe5af) < '\0') {
    operator_delete((void *)param_1[0x1cb3]);
  }
  thunk_FUN_1001b1de4(param_1 + 0x1565);
  thunk_FUN_10019a96c(param_1 + 0xb72);
  FUN_1001afa60(param_1 + 0xa33);
  FUN_10064221c(param_1 + 0xa22);
  lVar2 = 0;
  param_1[0x973] = &PTR_FUN_10145e588;
  do {
    *(undefined ***)((long)param_1 + lVar2 + 0x5010) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar2 + 0x50c8) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar2 + 0x50e0);
    FUN_10064e2bc((long)param_1 + lVar2 + 0x5010);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != -0x4b0);
  FUN_10064e2bc(param_1 + 0x973);
  param_1[0x955] = &PTR_FUN_1014a7108;
  param_1[0x96c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x96f);
  FUN_10064e2bc(param_1 + 0x955);
  param_1[0x937] = &PTR_FUN_1014a7108;
  param_1[0x94e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x951);
  FUN_10064e2bc(param_1 + 0x937);
  FUN_100196fa4(param_1 + 0x6d4);
  FUN_10064221c(param_1 + 0x6c3);
  FUN_1001afa60(param_1 + 0x584);
  param_1[0x566] = &PTR_FUN_1014a7108;
  param_1[0x57d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x580);
  FUN_10064e2bc(param_1 + 0x566);
  param_1[0x548] = &PTR_FUN_1014a7108;
  param_1[0x55f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x562);
  FUN_10064e2bc(param_1 + 0x548);
  if ((void *)param_1[0x547] != (void *)0x0) {
    operator_delete__((void *)param_1[0x547]);
    param_1[0x547] = 0;
    param_1[0x546] = 0;
  }
  if ((void *)param_1[0x545] != (void *)0x0) {
    operator_delete__((void *)param_1[0x545]);
    param_1[0x545] = 0;
    param_1[0x544] = 0;
  }
  FUN_10064221c(param_1 + 0x533);
  thunk_FUN_100530784(param_1 + 0x488);
  FUN_10064e2bc(param_1 + 0x454);
  thunk_FUN_100651068(param_1 + 0x42e);
  param_1[0x403] = &PTR_FUN_10145eb78;
  param_1[0x41a] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x42b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x42b]);
    param_1[0x42b] = 0;
    param_1[0x42a] = 0;
  }
  FUN_100651068(param_1 + 0x403);
  param_1[0x3e5] = &PTR_FUN_1014a7108;
  param_1[0x3fc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3ff);
  FUN_10064e2bc(param_1 + 0x3e5);
  thunk_FUN_100651068(param_1 + 0x3bf);
  param_1[0x3a1] = &PTR_FUN_1014a7108;
  param_1[0x3b8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3bb);
  FUN_10064e2bc(param_1 + 0x3a1);
  param_1[899] = &PTR_FUN_1014a7108;
  param_1[0x39a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x39d);
  FUN_10064e2bc(param_1 + 899);
  param_1[0x358] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x36f);
  FUN_10064e2bc(param_1 + 0x358);
  param_1[0x2bd] = &PTR_FUN_1014654b8;
  thunk_FUN_100651068(param_1 + 0x331);
  thunk_FUN_100651068(param_1 + 0x30b);
  FUN_10064e2bc(param_1 + 0x2f2);
  param_1[0x2d4] = &PTR_FUN_1014a7108;
  param_1[0x2eb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2ee);
  FUN_10064e2bc(param_1 + 0x2d4);
  FUN_10064e2bc(param_1 + 0x2bd);
  thunk_FUN_100651068(param_1 + 0x297);
  thunk_FUN_100651068(param_1 + 0x271);
  param_1[0x253] = &PTR_FUN_1014a7108;
  param_1[0x26a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x26d);
  FUN_10064e2bc(param_1 + 0x253);
  FUN_10064221c(param_1 + 0x242);
  param_1[0x1a7] = &PTR_FUN_1014654b8;
  thunk_FUN_100651068(param_1 + 0x21b);
  thunk_FUN_100651068(param_1 + 0x1f5);
  FUN_10064e2bc(param_1 + 0x1dc);
  param_1[0x1be] = &PTR_FUN_1014a7108;
  param_1[0x1d5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1d8);
  FUN_10064e2bc(param_1 + 0x1be);
  FUN_10064e2bc(param_1 + 0x1a7);
  thunk_FUN_100651068(param_1 + 0x181);
  param_1[0xe6] = &PTR_FUN_1014654b8;
  thunk_FUN_100651068(param_1 + 0x15a);
  thunk_FUN_100651068(param_1 + 0x134);
  FUN_10064e2bc(param_1 + 0x11b);
  param_1[0xfd] = &PTR_FUN_1014a7108;
  param_1[0x114] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x117);
  FUN_10064e2bc(param_1 + 0xfd);
  FUN_10064e2bc(param_1 + 0xe6);
  thunk_FUN_100651068(param_1 + 0xc0);
  thunk_FUN_100651068(param_1 + 0x9a);
  thunk_FUN_100651068(param_1 + 0x74);
  param_1[0x4b] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x62);
  FUN_10064e2bc(param_1 + 0x4b);
  param_1[0x2d] = &PTR_FUN_1014a7108;
  param_1[0x44] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x47);
  FUN_10064e2bc(param_1 + 0x2d);
  FUN_10064221c(param_1 + 0x1c);
  FUN_1001e1bb0(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100257490(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x2a20) != 0) {
    uVar3 = 0;
    do {
      iVar1 = FUN_100642d08(*(undefined8 *)(*(long *)(param_1 + 0x2a28) + uVar3 * 8));
      if (iVar1 != 0) {
        FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0x2a28) + uVar3 * 8),1);
      }
      plVar2 = *(long **)(*(long *)(param_1 + 0x2a28) + uVar3 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x2a20));
  }
  if (*(long *)(param_1 + 0x2a28) != 0) {
    *(undefined4 *)(param_1 + 0x2a20) = 0;
  }
  if (*(int *)(param_1 + 0x2a30) != 0) {
    uVar3 = 0;
    do {
      iVar1 = FUN_100642d08(*(undefined8 *)(*(long *)(param_1 + 0x2a38) + uVar3 * 8));
      if (iVar1 != 0) {
        FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0x2a38) + uVar3 * 8),1);
      }
      plVar2 = *(long **)(*(long *)(param_1 + 0x2a38) + uVar3 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x2a30));
  }
  if (*(long *)(param_1 + 0x2a38) != 0) {
    *(undefined4 *)(param_1 + 0x2a30) = 0;
  }
  *(undefined4 *)(param_1 + 0x2994) = 0;
  FUN_100533244(param_1 + 0x2440);
  return;
}




void thunk_FUN_100256f78(undefined8 *param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_thunk_FUN_100256f78_10147a9e8;
  param_1[0x19] = &PTR_FUN_10147ab58;
  FUN_100257490();
  puVar1 = (uint *)FUN_10032697c();
  if (*puVar1 != 0) {
    lVar2 = (ulong)*puVar1 << 5;
    puVar4 = *(undefined8 **)(puVar1 + 2);
    do {
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_1000c044c(puVar1,puVar4,puVar4 + 4);
        break;
      }
      lVar2 = lVar2 + -0x20;
      puVar4 = puVar4 + 4;
    } while (lVar2 != 0);
  }
  puVar1 = (uint *)FUN_100326d90();
  if (*puVar1 != 0) {
    lVar2 = *(long *)(puVar1 + 2);
    lVar3 = (ulong)*puVar1 << 5;
    do {
      puVar4 = (undefined8 *)(lVar2 + 8);
      lVar2 = lVar2 + 0x20;
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_100205984();
        break;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  if (*(char *)((long)param_1 + 0xe5af) < '\0') {
    operator_delete((void *)param_1[0x1cb3]);
  }
  thunk_FUN_1001b1de4(param_1 + 0x1565);
  thunk_FUN_10019a96c(param_1 + 0xb72);
  FUN_1001afa60(param_1 + 0xa33);
  FUN_10064221c(param_1 + 0xa22);
  lVar2 = 0;
  param_1[0x973] = &PTR_FUN_10145e588;
  do {
    *(undefined ***)((long)param_1 + lVar2 + 0x5010) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar2 + 0x50c8) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar2 + 0x50e0);
    FUN_10064e2bc((long)param_1 + lVar2 + 0x5010);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != -0x4b0);
  FUN_10064e2bc(param_1 + 0x973);
  param_1[0x955] = &PTR_FUN_1014a7108;
  param_1[0x96c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x96f);
  FUN_10064e2bc(param_1 + 0x955);
  param_1[0x937] = &PTR_FUN_1014a7108;
  param_1[0x94e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x951);
  FUN_10064e2bc(param_1 + 0x937);
  FUN_100196fa4(param_1 + 0x6d4);
  FUN_10064221c(param_1 + 0x6c3);
  FUN_1001afa60(param_1 + 0x584);
  param_1[0x566] = &PTR_FUN_1014a7108;
  param_1[0x57d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x580);
  FUN_10064e2bc(param_1 + 0x566);
  param_1[0x548] = &PTR_FUN_1014a7108;
  param_1[0x55f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x562);
  FUN_10064e2bc(param_1 + 0x548);
  if ((void *)param_1[0x547] != (void *)0x0) {
    operator_delete__((void *)param_1[0x547]);
    param_1[0x547] = 0;
    param_1[0x546] = 0;
  }
  if ((void *)param_1[0x545] != (void *)0x0) {
    operator_delete__((void *)param_1[0x545]);
    param_1[0x545] = 0;
    param_1[0x544] = 0;
  }
  FUN_10064221c(param_1 + 0x533);
  thunk_FUN_100530784(param_1 + 0x488);
  FUN_10064e2bc(param_1 + 0x454);
  thunk_FUN_100651068(param_1 + 0x42e);
  param_1[0x403] = &PTR_FUN_10145eb78;
  param_1[0x41a] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x42b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x42b]);
    param_1[0x42b] = 0;
    param_1[0x42a] = 0;
  }
  FUN_100651068(param_1 + 0x403);
  param_1[0x3e5] = &PTR_FUN_1014a7108;
  param_1[0x3fc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3ff);
  FUN_10064e2bc(param_1 + 0x3e5);
  thunk_FUN_100651068(param_1 + 0x3bf);
  param_1[0x3a1] = &PTR_FUN_1014a7108;
  param_1[0x3b8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3bb);
  FUN_10064e2bc(param_1 + 0x3a1);
  param_1[899] = &PTR_FUN_1014a7108;
  param_1[0x39a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x39d);
  FUN_10064e2bc(param_1 + 899);
  param_1[0x358] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x36f);
  FUN_10064e2bc(param_1 + 0x358);
  param_1[0x2bd] = &PTR_FUN_1014654b8;
  thunk_FUN_100651068(param_1 + 0x331);
  thunk_FUN_100651068(param_1 + 0x30b);
  FUN_10064e2bc(param_1 + 0x2f2);
  param_1[0x2d4] = &PTR_FUN_1014a7108;
  param_1[0x2eb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2ee);
  FUN_10064e2bc(param_1 + 0x2d4);
  FUN_10064e2bc(param_1 + 0x2bd);
  thunk_FUN_100651068(param_1 + 0x297);
  thunk_FUN_100651068(param_1 + 0x271);
  param_1[0x253] = &PTR_FUN_1014a7108;
  param_1[0x26a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x26d);
  FUN_10064e2bc(param_1 + 0x253);
  FUN_10064221c(param_1 + 0x242);
  param_1[0x1a7] = &PTR_FUN_1014654b8;
  thunk_FUN_100651068(param_1 + 0x21b);
  thunk_FUN_100651068(param_1 + 0x1f5);
  FUN_10064e2bc(param_1 + 0x1dc);
  param_1[0x1be] = &PTR_FUN_1014a7108;
  param_1[0x1d5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1d8);
  FUN_10064e2bc(param_1 + 0x1be);
  FUN_10064e2bc(param_1 + 0x1a7);
  thunk_FUN_100651068(param_1 + 0x181);
  param_1[0xe6] = &PTR_FUN_1014654b8;
  thunk_FUN_100651068(param_1 + 0x15a);
  thunk_FUN_100651068(param_1 + 0x134);
  FUN_10064e2bc(param_1 + 0x11b);
  param_1[0xfd] = &PTR_FUN_1014a7108;
  param_1[0x114] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x117);
  FUN_10064e2bc(param_1 + 0xfd);
  FUN_10064e2bc(param_1 + 0xe6);
  thunk_FUN_100651068(param_1 + 0xc0);
  thunk_FUN_100651068(param_1 + 0x9a);
  thunk_FUN_100651068(param_1 + 0x74);
  param_1[0x4b] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x62);
  FUN_10064e2bc(param_1 + 0x4b);
  param_1[0x2d] = &PTR_FUN_1014a7108;
  param_1[0x44] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x47);
  FUN_10064e2bc(param_1 + 0x2d);
  FUN_10064221c(param_1 + 0x1c);
  FUN_1001e1bb0(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10025757c(long param_1)

{
  FUN_100256f78(param_1 + -200);
  return;
}




void FUN_100257584(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100256f78();
  operator_delete(pvVar1);
  return;
}




void FUN_100257598(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100256f78(param_1 + -200);
  operator_delete(pvVar1);
  return;
}




void FUN_1002575b0(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  void *local_38 [2];
  char local_21;
  
  if (param_2 == 0) {
    FUN_1001b6764(param_1 + 0x36a0);
    uVar2 = FUN_10002f320();
    FUN_10001549c(local_38,"layer_player_profile_prog");
    FUN_100030cf0(uVar2,local_38);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  else {
    FUN_1001b6574();
    thunk_FUN_1001b22d4(param_1 + 0xab28);
    lVar1 = FUN_10016c2f0();
    if (*(int *)(lVar1 + 0x38) < 1) {
      uVar3 = *(uint *)(param_1 + 0x5194) & 0xfffffffb;
    }
    else {
      FUN_10001549c(local_38,"tutorial");
      FUN_1001aefd4(param_1 + 0x5198,local_38);
      if (local_21 < '\0') {
        operator_delete(local_38[0]);
      }
      FUN_10001549c(local_38,"IDLE_CLOSED");
      FUN_1001aeb7c(0xbf800000,param_1 + 0x5198,local_38);
      if (local_21 < '\0') {
        operator_delete(local_38[0]);
      }
      uVar3 = *(uint *)(param_1 + 0x5194) | 4;
    }
    *(uint *)(param_1 + 0x5194) = uVar3;
  }
  return;
}




void FUN_1002576c0(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) &&
     ((iVar1 = FUN_10015d3f8(), iVar1 == 0 ||
      (lVar2 = FUN_10015d3ec(), *(char *)(lVar2 + 0x567c) == '\0')))) {
    FUN_100257708(param_1);
    return;
  }
  return;
}




void FUN_100257708(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  code *local_60;
  undefined8 uStack_58;
  long local_50;
  undefined4 local_48;
  uint local_40 [2];
  void *local_38;
  
  lVar1 = FUN_10015d3ec();
  if (*(char *)(lVar1 + 0x567c) == '\0') {
    uVar2 = FUN_100327554();
    if ((uVar2 & 1) == 0) {
      FUN_100258824(param_1,1);
    }
    else {
      *(uint *)((long)param_1 + 0x4c1c) = *(uint *)((long)param_1 + 0x4c1c) & 0xfffffffb;
      FUN_1001c102c(param_1 + 0x973);
      *(uint *)((long)param_1 + 0x4b2c) = *(uint *)((long)param_1 + 0x4b2c) | 4;
      FUN_1003270b0(local_40,2);
      local_60 = FUN_100259be0;
      FUN_100259f00(local_38,(void *)((long)local_38 + (ulong)local_40[0] * 8),&local_60);
      uVar2 = (ulong)local_40[0];
      if (local_40[0] != 0) {
        uVar4 = 0;
        do {
          lVar1 = *(long *)((long)local_38 + uVar4 * 8);
          if (lVar1 != 0) {
            local_60 = (code *)0x0;
            uStack_58 = 0;
            local_48 = 0;
            local_50 = 0;
            puVar3 = (undefined4 *)FUN_100319d48(lVar1,"level");
            if (puVar3 != (undefined4 *)0x0) {
              local_48 = *puVar3;
              std::string::operator=((string *)&local_60,(string *)(lVar1 + 0x48));
              uVar2 = FUN_100131560();
              if ((uVar2 & 1) == 0) {
                FUN_100259514(param_1,&local_60);
              }
            }
            if (local_50 < 0) {
              operator_delete(local_60);
            }
            uVar2 = (ulong)local_40[0];
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      FUN_100258b18(param_1,1);
      if (local_38 != (void *)0x0) {
        operator_delete__(local_38);
      }
    }
    (**(code **)(*param_1 + 0x150))(param_1);
  }
  return;
}




void FUN_100257860(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  FUN_10025791c();
  lVar3 = FUN_10015d3ec();
  if (*(char *)(lVar3 + 0x567c) == '\0') {
    lVar3 = param_1 + 0x2440;
    uVar4 = FUN_100530d94(lVar3);
    if (((uVar4 & 1) == 0) && (iVar2 = FUN_100530da0(lVar3), iVar2 == 0)) {
      if ((*(char *)(param_1 + 0xe5c4) == '\0') &&
         (((uVar4 = FUN_100530d94(lVar3), (uVar4 & 1) == 0 &&
           (uVar4 = FUN_100530da0(lVar3), (uVar4 & 1) == 0)) && (*(int *)(param_1 + 0xe5bc) == -1)))
         ) {
        FUN_1002579a0(param_1,*(undefined4 *)(param_1 + 0x298c));
      }
    }
    else {
      FUN_1002579a0(param_1,0xffffffff);
      FUN_100257ca8(param_1);
    }
    uVar1 = FUN_100530d94(lVar3);
    *(undefined1 *)(param_1 + 0xe5c4) = uVar1;
  }
  return;
}




void FUN_10025791c(long param_1)

{
  if (*(long *)(param_1 + 0xe5b0) < 1) {
    *(uint *)(param_1 + 0x209c) = *(uint *)(param_1 + 0x209c) & 0xfffffffb;
    FUN_1006513c0(param_1 + 0x2018,&DAT_101d91650);
    *(uint *)(param_1 + 0x21f4) =
         *(uint *)(param_1 + 0x21f4) & 0xfffffff8 |
         *(uint *)(param_1 + 0x21f4) & 3 | (uint)(*(int *)(param_1 + 0xe5b8) == 2) << 2;
  }
  else {
    *(uint *)(param_1 + 0x209c) = *(uint *)(param_1 + 0x209c) | 4;
    FUN_1001cd27c();
    *(uint *)(param_1 + 0x21f4) = *(uint *)(param_1 + 0x21f4) & 0xfffffffb;
  }
  return;
}




void FUN_100257ca8(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  undefined8 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_a0 [2];
  undefined8 local_98;
  
  uVar18 = (**(code **)(*param_3 + 0x48))();
  FUN_100641518(local_a0,(ulong)local_a0 | 4);
  fVar14 = param_2;
  iVar5 = FUN_100126cb8(uVar18);
  FUN_100652e60(param_3 + 0x2d);
  param_2 = param_2 - fVar14;
  fVar14 = 4.0;
  if (iVar5 == 0) {
    fVar14 = 3.0;
  }
  fVar14 = (float)uVar18 / fVar14;
  plVar12 = param_3 + 0x454;
  bVar3 = false;
  if ((*(float *)((long)param_3 + 0x22e4) == 0.0) &&
     (bVar3 = false, !NAN(*(float *)(param_3 + 0x45c)))) {
    bVar3 = *(float *)(param_3 + 0x45c) == 0.0;
  }
  if (!bVar3) {
    param_3[0x45c] = 0;
    FUN_1000200a0(plVar12);
  }
  local_98 = 0;
  (**(code **)(param_3[0x454] + 0x28))(plVar12,&local_98);
  FUN_10064e47c(uVar18,param_2,plVar12);
  lVar6 = FUN_10015d3ec();
  fVar23 = 2.0;
  if (iVar5 == 0) {
    fVar23 = 1.5;
  }
  fVar23 = fVar14 * fVar23;
  uVar21 = *(undefined4 *)(lVar6 + 0x55d0);
  fVar8 = 23.25;
  if (iVar5 == 0) {
    fVar8 = -15.5;
  }
  fVar15 = param_2 + -10.0;
  bVar3 = false;
  if ((*(float *)(param_3 + 0x6cb) == fVar23) &&
     (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x365c)) && !NAN(fVar15))) {
    bVar3 = *(float *)((long)param_3 + 0x365c) == fVar15;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0x6cb) = fVar23;
    *(float *)((long)param_3 + 0x365c) = fVar15;
    FUN_1000200a0(param_3 + 0x6c3);
  }
  fVar15 = (float)NEON_ucvtf(uVar21);
  if ((*(float *)(param_3 + 0x6dc) != 0.0) || (*(float *)((long)param_3 + 0x36e4) != fVar8 + -15.5))
  {
    *(undefined4 *)(param_3 + 0x6dc) = 0;
    *(float *)((long)param_3 + 0x36e4) = fVar8 + -15.5;
    FUN_1000200a0(param_3 + 0x6d4);
  }
  local_98 = 0;
  (**(code **)(param_3[0x6d4] + 0x28))(param_3 + 0x6d4,&local_98);
  plVar1 = param_3 + 0x937;
  lVar6 = FUN_10015d3ec();
  fVar16 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + 0x55d0));
  FUN_10064e47c(fVar14 * (fVar16 + -1.0) + -2.0,0x41f80000,plVar1);
  if ((*(float *)(param_3 + 0x93f) != 0.0) || (*(float *)((long)param_3 + 0x49fc) != fVar8 + -31.0))
  {
    *(float *)(param_3 + 0x93f) = 0.0;
    *(float *)((long)param_3 + 0x49fc) = fVar8 + -31.0;
    FUN_1000200a0(plVar1);
  }
  local_98 = 0;
  (**(code **)(param_3[0x937] + 0x28))(plVar1,&local_98);
  lVar6 = FUN_10015d3ec();
  *(uint *)((long)param_3 + 0x4a3c) =
       *(uint *)((long)param_3 + 0x4a3c) & 0xfffffff8 |
       *(uint *)((long)param_3 + 0x4a3c) & 3 | (uint)(1 < *(uint *)(lVar6 + 0x55d0)) << 2;
  lVar6 = param_3[0x544];
  lVar7 = FUN_10015d3ec();
  fVar16 = (float)((int)lVar6 + ~*(uint *)(lVar7 + 0x55d0)) * fVar14 + -2.0;
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  plVar1 = param_3 + 0x955;
  FUN_10064e47c(fVar16,0x40800000,plVar1);
  fVar15 = fVar14 * fVar15 + 4.0;
  fVar16 = fVar8 + 4.0;
  bVar3 = false;
  if ((*(float *)(param_3 + 0x95d) == fVar15) &&
     (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x4aec)) && !NAN(fVar16))) {
    bVar3 = *(float *)((long)param_3 + 0x4aec) == fVar16;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0x95d) = fVar15;
    *(float *)((long)param_3 + 0x4aec) = fVar16;
    FUN_1000200a0(plVar1);
  }
  local_98 = 0x3f80000000000000;
  (**(code **)(param_3[0x955] + 0x28))(plVar1,&local_98);
  *(float *)((long)param_3 + 0x2974) = fVar14;
  *(float *)(param_3 + 0x52f) = param_2;
  FUN_10064e3cc(plVar12);
  fVar20 = fVar16;
  FUN_10064e3cc(plVar12);
  fVar15 = 0.525;
  if (iVar5 == 0) {
    fVar15 = 0.545;
  }
  iVar5 = FUN_100131560();
  if (iVar5 != 0) {
    *(uint *)((long)param_3 + 0x3724) = *(uint *)((long)param_3 + 0x3724) & 0xfffffffb;
    *(uint *)((long)param_3 + 0x369c) = *(uint *)((long)param_3 + 0x369c) & 0xfffffffb;
    *(uint *)((long)param_3 + 0x4a3c) = *(uint *)((long)param_3 + 0x4a3c) & 0xfffffffb;
    *(uint *)((long)param_3 + 0x4b2c) = *(uint *)((long)param_3 + 0x4b2c) & 0xfffffffb;
  }
  fVar20 = fVar20 * fVar15;
  fVar15 = (float)uVar18 * 0.5;
  uVar10 = (ulong)*(uint *)(param_3 + 0x544);
  if (*(uint *)(param_3 + 0x544) != 0) {
    uVar13 = 0;
    fVar24 = fVar15 + -500.0;
    do {
      lVar6 = *(long *)(param_3[0x545] + uVar13 * 8);
      if (lVar6 != 0) {
        fVar22 = fVar15 + (float)(int)uVar13 * fVar14;
        lVar7 = FUN_10003d5bc(lVar6);
        fVar17 = *(float *)(lVar7 + 8) / local_a0[0];
        bVar3 = true;
        bVar4 = false;
        if (fVar17 <= fVar15 + 500.0) {
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar17) && !NAN(fVar24)) {
            bVar3 = fVar17 < fVar24;
            bVar4 = false;
          }
        }
        fVar2 = 0.0;
        if (bVar3 == bVar4) {
          fVar2 = ABS(fVar17 - fVar15) * -0.002 + 1.0;
        }
        fVar17 = fVar16 * 0.7575 + (fVar20 - fVar16 * 0.7575) * fVar2;
        if ((*(float *)(lVar6 + 0x40) != fVar22) || (*(float *)(lVar6 + 0x44) != fVar17)) {
          *(float *)(lVar6 + 0x40) = fVar22;
          *(float *)(lVar6 + 0x44) = fVar17;
          FUN_1000200a0(lVar6);
        }
        FUN_10025940c(fVar2,lVar6);
        uVar10 = (ulong)*(uint *)(param_3 + 0x544);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar10);
    if ((int)uVar10 == 0) {
      uVar18 = uVar18 & 0xffffffff;
    }
    else {
      uVar18 = uVar18 & 0xffffffff;
      if ((int)param_3[0x546] != 0) {
        uVar10 = 0;
        do {
          plVar12 = *(long **)(param_3[0x547] + uVar10 * 8);
          if (plVar12 != (long *)0x0) {
            lVar6 = FUN_10003d5bc(plVar12);
            fVar16 = *(float *)(lVar6 + 8) / local_a0[0];
            uVar19 = (**(code **)(*plVar12 + 0x48))(plVar12);
            bVar3 = true;
            bVar4 = false;
            if (fVar16 <= fVar15 + 500.0) {
              bVar3 = false;
              bVar4 = true;
              if (!NAN(fVar16) && !NAN(fVar24)) {
                bVar3 = fVar16 < fVar24;
                bVar4 = false;
              }
            }
            fVar17 = 31.0;
            if (bVar3 == bVar4) {
              fVar17 = ABS(fVar16 - fVar15) * -0.062000003 + 62.0;
            }
            FUN_10064e47c(uVar19,fVar17,plVar12);
            if (uVar10 == 0) {
              uVar9 = *(uint *)((long)plVar12 + 0x84);
LAB_10025817c:
              uVar11 = 0;
            }
            else {
              lVar6 = FUN_10015d3ec();
              uVar9 = *(uint *)((long)plVar12 + 0x84);
              if (uVar10 == *(uint *)(lVar6 + 0x55d0)) goto LAB_10025817c;
              uVar11 = 4;
            }
            *(uint *)((long)plVar12 + 0x84) = uVar9 & 0xfffffffb | uVar11;
            fVar16 = (fVar15 - fVar23) + (float)(int)uVar10 * fVar14;
            bVar3 = false;
            if ((*(float *)(plVar12 + 8) == fVar16) &&
               (bVar3 = false, !NAN(*(float *)((long)plVar12 + 0x44)) && !NAN(fVar8))) {
              bVar3 = *(float *)((long)plVar12 + 0x44) == fVar8;
            }
            if (!bVar3) {
              *(float *)(plVar12 + 8) = fVar16;
              *(float *)((long)plVar12 + 0x44) = fVar8;
              FUN_1000200a0(plVar12);
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(uint *)(param_3 + 0x546));
        uVar10 = (ulong)*(uint *)(param_3 + 0x544);
      }
    }
  }
  FUN_10053093c((float)uVar18 * (float)uVar10,param_2,param_3 + 0x488);
  if ((*(byte *)((long)param_3 + 0x2ca4) >> 2 & 1) != 0) {
    FUN_1001af2f0(param_3 + 0x584);
    bVar3 = false;
    if ((*(float *)(param_3 + 0x58c) == fVar15) &&
       (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x2c64)) && !NAN(fVar20))) {
      bVar3 = *(float *)((long)param_3 + 0x2c64) == fVar20;
    }
    if (!bVar3) {
      *(float *)(param_3 + 0x58c) = fVar15;
      *(float *)((long)param_3 + 0x2c64) = fVar20;
      FUN_1000200a0(param_3 + 0x584);
    }
  }
  bVar3 = false;
  if ((*(float *)(param_3 + 0x550) == fVar15) &&
     (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x2a84)) && !NAN(fVar20))) {
    bVar3 = *(float *)((long)param_3 + 0x2a84) == fVar20;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0x550) = fVar15;
    *(float *)((long)param_3 + 0x2a84) = fVar20;
    FUN_1000200a0(param_3 + 0x548);
  }
  fVar14 = *(float *)((long)param_3 + 0x2b74);
  bVar3 = false;
  if ((*(float *)(param_3 + 0x56e) == fVar15) && (bVar3 = false, !NAN(fVar14) && !NAN(fVar20))) {
    bVar3 = fVar14 == fVar20;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0x56e) = fVar15;
    *(float *)((long)param_3 + 0x2b74) = fVar20;
    FUN_1000200a0(param_3 + 0x566);
  }
  plVar12 = param_3 + 0x973;
  fVar23 = (float)FUN_100642888(plVar12,0,0,1,1);
  fVar23 = fVar15 - fVar23 * 0.5;
  FUN_100642888(plVar12,0,0,1,1);
  fVar14 = fVar20 - fVar14 * 0.5;
  bVar3 = false;
  if ((*(float *)(param_3 + 0x97b) == fVar23) &&
     (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x4bdc)) && !NAN(fVar14))) {
    bVar3 = *(float *)((long)param_3 + 0x4bdc) == fVar14;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0x97b) = fVar23;
    *(float *)((long)param_3 + 0x4bdc) = fVar14;
    FUN_1000200a0(plVar12);
  }
  FUN_1001af2f0(param_3 + 0xa33);
  if ((*(float *)(param_3 + 0xa3b) != fVar15) || (*(float *)((long)param_3 + 0x51dc) != fVar20)) {
    *(float *)(param_3 + 0xa3b) = fVar15;
    *(float *)((long)param_3 + 0x51dc) = fVar20;
    FUN_1000200a0(param_3 + 0xa33);
  }
  fVar14 = -0.5;
  fVar23 = DAT_101d236ac * -0.5;
  FUN_100642888(param_3 + 0xb78,0,0,1,1);
  param_2 = param_2 - fVar14;
  bVar3 = false;
  if ((*(float *)(param_3 + 0xb80) == fVar23) &&
     (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x5c04)) && !NAN(param_2))) {
    bVar3 = *(float *)((long)param_3 + 0x5c04) == param_2;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0xb80) = fVar23;
    *(float *)((long)param_3 + 0x5c04) = param_2;
    FUN_1000200a0(param_3 + 0xb78);
  }
  lVar6 = FUN_10016c2f0();
  *(uint *)((long)param_3 + 0x2a1c) =
       *(uint *)((long)param_3 + 0x2a1c) & 0xfffffff8 |
       *(uint *)((long)param_3 + 0x2a1c) & 3 | (uint)(*(int *)(lVar6 + 0x38) < 1) << 2;
  return;
}




void FUN_1002583c0(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  
  uVar8 = (**(code **)(*param_3 + 0x48))();
  iVar3 = FUN_100126c88();
  iVar4 = FUN_100126cb8(uVar8,param_2);
  FUN_1001b2188(param_3 + 0x1565);
  FUN_10064e5ec(0,0,param_3 + 0x1565,4,param_3,4);
  FUN_10064e47c(uVar8,0x43808000,param_3 + 0x2d);
  plVar1 = param_3 + 0x4b;
  FUN_10064e47c(uVar8,0x43808000,plVar1);
  FUN_10064e5ec(0,0,plVar1,6,param_3,6);
  FUN_10064e5ec(0,0,param_3 + 0x2d,6,plVar1,6);
  iVar5 = FUN_100131560();
  fVar9 = (float)uVar8;
  if (iVar5 == 0) {
    fVar7 = fVar9 * -0.25;
    uVar8 = 6;
    plVar6 = plVar1;
  }
  else {
    fVar7 = 0.0;
    uVar8 = 4;
    plVar6 = param_3;
  }
  FUN_10064e5ec(fVar7,0,param_3 + 0x74,uVar8,plVar6,8);
  FUN_10064e5ec(0,0,param_3 + 0x9a,4,param_3 + 0x74,6);
  if (iVar3 != 0) {
    FUN_100651594(param_3 + 0x3bf,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230,&DAT_10115a168);
    FUN_100651594(param_3 + 0x403,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230,&DAT_10115a168);
  }
  fVar7 = 0.6;
  if (iVar4 == 0) {
    fVar7 = 0.8;
  }
  bVar2 = false;
  if ((*(float *)(param_3 + 0x38c) == fVar7) &&
     (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x1c64)) && !NAN(fVar7))) {
    bVar2 = *(float *)((long)param_3 + 0x1c64) == fVar7;
  }
  if (!bVar2) {
    *(float *)(param_3 + 0x38c) = fVar7;
    *(float *)((long)param_3 + 0x1c64) = fVar7;
    FUN_1000200a0(param_3 + 899);
  }
  plVar6 = param_3 + 0x3bf;
  FUN_10064e5ec(0,0,plVar6,4,param_3 + 899,6);
  FUN_10064e5ec(0,0,param_3 + 0x3a1,8,plVar6,8);
  FUN_10064e5ec(0,0,param_3 + 0x403,4,plVar6,6);
  FUN_10064e5ec(0,0,param_3 + 0x3e5,8,param_3 + 0x403,6);
  FUN_10064e5ec(0,0,param_3 + 0x42e,4,plVar6,6);
  FUN_1006557ec(param_3 + 0x358);
  FUN_10064e5ec(-(fVar9 * 0.125),0,param_3 + 0x358,6,plVar1,6);
  FUN_10064e5ec(0,0,param_3 + 0xc0,6,plVar1,8);
  FUN_10064e5ec(0,0,param_3 + 0xe6,4,param_3 + 0xc0,6);
  FUN_10064e5ec(fVar9 * 0.125,0,param_3 + 0x181,6,plVar1,8);
  FUN_10064e5ec(0,0,param_3 + 0x1a7,4,param_3 + 0x181,6);
  FUN_10064e5ec(fVar9 * 0.25,0,param_3 + 0x297,6,plVar1,8);
  FUN_10064e5ec(0,0,param_3 + 0x2bd,4,param_3 + 0x297,6);
  FUN_100257ca8(param_3);
  return;
}




void FUN_100258734(long param_1,int param_2)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  if (param_2 != 0) {
    uVar1 = FUN_10002f320();
    FUN_10001549c(local_38,"layer_player_profile_prog");
    FUN_100030cf0(uVar1,local_38);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
    return;
  }
  FUN_1002579a0(param_1,*(undefined4 *)(param_1 + 0xe5bc));
  return;
}




void FUN_1002587a4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_10015d3f8();
  if ((iVar1 != 0) && (lVar2 = FUN_10015d3ec(), *(char *)(lVar2 + 0x567c) != '\0')) {
    return;
  }
  FUN_100257708(param_1);
  return;
}




void FUN_1002587e8(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_100327554();
  if ((uVar1 & 1) != 0) {
    FUN_100257708(param_1);
    return;
  }
  FUN_100258824(param_1,1);
  return;
}




void FUN_100258824(long param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  void *local_48 [2];
  char local_31;
  
  puVar1 = (uint *)(param_1 + 0x4b2c);
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x4c1c) = *(uint *)(param_1 + 0x4c1c) & 0xfffffffb;
    FUN_1001c102c(param_1 + 0x4b98);
    *puVar1 = *puVar1 | 4;
  }
  else {
    iVar2 = FUN_10015d3f8();
    if ((iVar2 == 0) || (lVar3 = FUN_10015d3ec(), *(char *)(lVar3 + 0x567c) == '\0')) {
      FUN_1001c0e10(param_1 + 0x4b98);
      *(uint *)(param_1 + 0x4c1c) = *(uint *)(param_1 + 0x4c1c) | 4;
    }
    *puVar1 = *puVar1 & 0xfffffffb;
    *(uint *)(param_1 + 0x2ca4) = *(uint *)(param_1 + 0x2ca4) & 0xfffffffb;
    uVar4 = FUN_10002f320();
    FUN_10001549c(local_48,"layer_player_profile_prog");
    FUN_100030cf0(uVar4,local_48);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    FUN_100257490(param_1);
    std::string::operator=((string *)(param_1 + 0xe598),(string *)&DAT_101d91198);
    *(undefined4 *)(param_1 + 0xe5bc) = 0xffffffff;
  }
  return;
}




void FUN_10025892c(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  void *pvVar10;
  
  if ((param_2 == 0) || (*(char *)(param_2 + 0xd9) == '\0')) {
    FUN_100259dd0(param_1);
    return;
  }
  bVar4 = *(byte *)(param_2 + 0x5f);
  uVar8 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_2 + 0x50);
  if (-1 < (char)bVar4) {
    sVar1 = uVar8;
  }
  bVar5 = *(byte *)(param_1 + 0xe5af);
  sVar2 = *(size_t *)(param_1 + 0xe5a0);
  if (-1 < (char)bVar5) {
    sVar2 = (ulong)bVar5;
  }
  if (sVar1 == sVar2) {
    pvVar10 = *(void **)(param_2 + 0x48);
    puVar3 = pvVar10;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(param_2 + 0x48);
    }
    pbVar7 = *(byte **)(param_1 + 0xe598);
    if (-1 < (char)bVar5) {
      pbVar7 = (byte *)(param_1 + 0xe598);
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar6 = _memcmp(puVar3,pbVar7,sVar1), iVar6 == 0)) goto LAB_100258a08;
    }
    else {
      if (sVar1 == 0) {
LAB_100258a08:
        FUN_100259c9c(param_1);
        return;
      }
      if ((uint)*pbVar7 == ((uint)pvVar10 & 0xff)) {
        pbVar9 = (byte *)(param_2 + 0x49);
        do {
          uVar8 = uVar8 - 1;
          pbVar7 = pbVar7 + 1;
          if (uVar8 == 0) goto LAB_100258a08;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar7);
      }
    }
  }
  return;
}




void FUN_100258a18(long param_1,byte *param_2)

{
  string *this;
  size_t sVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  this = (string *)(param_1 + 0xe598);
  bVar5 = *(byte *)(param_1 + 0xe5af);
  uVar8 = (ulong)bVar5;
  uVar6 = uVar8;
  if ((char)bVar5 < '\0') {
    uVar6 = *(ulong *)(param_1 + 0xe5a0);
  }
  if (uVar6 != 0) {
    sVar1 = *(size_t *)(param_1 + 0xe5a0);
    if (-1 < (char)bVar5) {
      sVar1 = uVar8;
    }
    bVar4 = param_2[0x17];
    sVar2 = *(size_t *)(param_2 + 8);
    if (-1 < (char)bVar4) {
      sVar2 = (ulong)bVar4;
    }
    if (sVar1 == sVar2) {
      psVar3 = *(string **)this;
      if (-1 < (char)bVar5) {
        psVar3 = this;
      }
      pbVar10 = *(byte **)param_2;
      if (-1 < (char)bVar4) {
        pbVar10 = param_2;
      }
      if ((char)bVar5 < '\0') {
        if ((sVar1 == 0) || (iVar7 = _memcmp(psVar3,pbVar10,sVar1), iVar7 == 0)) goto LAB_100258af4;
      }
      else {
        if (sVar1 == 0) {
LAB_100258af4:
          std::string::operator=(this,(string *)&DAT_101d91198);
          FUN_100258b18(param_1,1);
          return;
        }
        if ((uint)*pbVar10 == ((uint)*(string **)this & 0xff)) {
          pbVar9 = (byte *)(param_1 + 0xe599);
          do {
            uVar8 = uVar8 - 1;
            pbVar10 = pbVar10 + 1;
            if (uVar8 == 0) goto LAB_100258af4;
            bVar5 = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while (bVar5 == *pbVar10);
        }
      }
    }
  }
  return;
}




void FUN_100258b18(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x2a20) != 0) {
    uVar4 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x2a28) + uVar4 * 8);
      plVar1 = (long *)(lVar2 + 0x5d8);
      if (*(char *)(lVar2 + 0x5ef) < '\0') {
        plVar1 = (long *)*plVar1;
      }
      lVar2 = FUN_100326d78(plVar1);
      if (((lVar2 != 0) && (*(char *)(lVar2 + 0xd8) != '\0')) && (*(char *)(lVar2 + 0xd9) == '\0'))
      goto LAB_100258b8c;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x2a20));
  }
  lVar2 = FUN_10015d3ec();
  uVar4 = (ulong)(*(int *)(lVar2 + 0x55d0) - 1);
LAB_100258b8c:
  uVar3 = (uint)uVar4;
  if ((-1 < (int)uVar3) && (uVar3 < *(uint *)(param_1 + 0x2a20))) {
    FUN_100533bac(param_1 + 0x2440,uVar4,param_2);
  }
  if (uVar3 == *(uint *)(param_1 + 0xe5bc)) {
    FUN_1002579a0(param_1,uVar4);
    return;
  }
  return;
}




void FUN_100258be8(long param_1)

{
  FUN_100258a18(param_1 + -200);
  return;
}




long * FUN_100258bf0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  puVar7 = (undefined8 *)FUN_1006421a8();
  *puVar7 = &PTR_thunk_FUN_100259034_10147ab80;
  puVar7 = puVar7 + 0x11;
  thunk_FUN_100652c08(puVar7);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x55;
  FUN_1006421a8(plVar2);
  param_1[0x55] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x66;
  FUN_1006421a8(plVar3);
  param_1[0x66] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar4 = param_1 + 0x77;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x9d;
  thunk_FUN_100652c08(plVar5);
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xbf] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  if ((*(float *)(param_1 + 0x81) != 0.5) || (*(float *)((long)param_1 + 0x40c) != 0.5)) {
    param_1[0x81] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar4);
  }
  uVar8 = FUN_1004e0150("MAIN_PROFILE_LEVEL_CHEST_READY",0);
  FUN_1006513c0(plVar4,uVar8);
  uVar6 = *(uint *)((long)param_1 + 0x43c);
  if ((uVar6 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x43c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_down");
  if ((*(float *)(param_1 + 0xa7) != 0.5) || (*(float *)((long)param_1 + 0x53c) != 0.0)) {
    param_1[0xa7] = 0x3f000000;
    FUN_1000200a0(plVar5);
  }
  uVar6 = *(uint *)((long)param_1 + 0x56c);
  if ((uVar6 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x56c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar5);
  }
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  if ((*(float *)(param_1 + 0x39) != 0.5) || (*(float *)((long)param_1 + 0x1cc) != 0.5)) {
    param_1[0x39] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100652ca4(puVar7,PTR_s_build___Chests_tga_1018549e0);
  if ((*(float *)(param_1 + 0x1b) != 0.5) || (*(float *)((long)param_1 + 0xdc) != 0.5)) {
    param_1[0x1b] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar7);
  }
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) | 0x10;
  FUN_100258ec4(param_1,0);
  return param_1;
}




void FUN_100258ec4(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  ushort *puVar7;
  
  uVar6 = 4;
  if (param_2 == 0) {
    uVar6 = 0;
  }
  *(uint *)(param_1 + 0x32c) = *(uint *)(param_1 + 0x32c) & 0xfffffffb | uVar6;
  lVar1 = param_1 + 0x330;
  FUN_100642324(lVar1);
  bVar3 = false;
  if ((*(float *)(param_1 + 0x374) == 0.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x370)))) {
    bVar3 = *(float *)(param_1 + 0x370) == 0.0;
  }
  if (!bVar3) {
    *(undefined8 *)(param_1 + 0x370) = 0;
    FUN_1000200a0(lVar1);
  }
  if (param_2 != 0) {
    uVar4 = FUN_1006408f4(0,0x41200000,0x3f000000,FUN_10001f218);
    FUN_1006408f4(0,0,0x3f000000,FUN_10001f160);
    lVar2 = DAT_101dbd2f8;
    uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar7;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_10063f564(puVar7);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_10063f614(puVar7,uVar4);
    FUN_10063f664(puVar7);
    FUN_100642b14(lVar1,puVar7);
    return;
  }
  return;
}




void FUN_100259034(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100259034_10147ab80;
  if (*(char *)((long)param_1 + 0x5ef) < '\0') {
    operator_delete((void *)param_1[0xbb]);
  }
  param_1[0x9d] = &PTR_FUN_1014a7108;
  param_1[0xb4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb7);
  FUN_10064e2bc(param_1 + 0x9d);
  thunk_FUN_100651068(param_1 + 0x77);
  FUN_10064221c(param_1 + 0x66);
  FUN_10064221c(param_1 + 0x55);
  thunk_FUN_100651068(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void thunk_FUN_100259034(void)

{
  FUN_100259034();
  return;
}




void FUN_1002590e4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100259034();
  operator_delete(pvVar1);
  return;
}




void FUN_1002590f8(long param_1,string *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  std::string::operator=((string *)(param_1 + 0x5d8),param_2);
  *(undefined4 *)(param_1 + 0x5f0) = *(undefined4 *)(param_2 + 0x18);
  FUN_1004e313c(auStack_30);
  FUN_1004e38ac(auStack_30,"%d");
  uVar1 = FUN_1004e0150("MAIN_PROFILE_LEVEL",0);
  thunk_FUN_1004e439c(auStack_40,uVar1);
  FUN_1004e3120(auStack_50,"[LEVEL_NUMBER]");
  FUN_1004e3bc4(auStack_40,0,auStack_50,auStack_30);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  FUN_1006513c0(param_1 + 0x178,auStack_40);
  FUN_1002591d0(param_1);
  FUN_100259278(param_1);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1002591d0(long param_1)

{
  undefined8 ****ppppuVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 ***local_48 [2];
  char local_31;
  
  *(undefined4 *)(param_1 + 0x5f8) = 0;
  plVar2 = (long *)(param_1 + 0x5d8);
  if (*(char *)(param_1 + 0x5ef) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  lVar3 = FUN_100326d78(plVar2);
  if (lVar3 == 0) {
    return;
  }
  FUN_1000e6234(local_48);
  ppppuVar1 = (undefined8 ****)local_48[0];
  if (-1 < local_31) {
    ppppuVar1 = local_48;
  }
  FUN_100652cdc(param_1 + 0x88,ppppuVar1);
  if (*(char *)(lVar3 + 0xd9) == '\0') {
    if (*(char *)(lVar3 + 0xd8) == '\0') {
      *(undefined4 *)(param_1 + 0x5fc) = 0;
      goto LAB_10025924c;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 2;
  }
  *(undefined4 *)(param_1 + 0x5fc) = uVar4;
LAB_10025924c:
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return;
}




void FUN_100259278(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  (**(code **)(*param_3 + 0x48))();
  iVar2 = FUN_100126cb8();
  fVar5 = *(float *)((long)param_3 + 0xcc);
  FUN_100652e60(param_3 + 0x11);
  fVar6 = *(float *)((long)param_3 + 0xdc);
  fVar3 = param_2;
  FUN_100651184(param_3 + 0x2f);
  fVar4 = 0.0;
  if (iVar2 == 0) {
    fVar4 = 10.0;
  }
  fVar3 = fVar4 + fVar5 + fVar6 * param_2 + *(float *)((long)param_3 + 0x1cc) * fVar3;
  fVar4 = *(float *)((long)param_3 + 0x1bc);
  if (fVar4 != fVar3) {
    *(float *)((long)param_3 + 0x1bc) = fVar3;
    FUN_1000200a0(param_3 + 0x2f);
  }
  plVar1 = param_3 + 0x77;
  fVar5 = *(float *)((long)param_3 + 0xcc);
  FUN_100652e60(param_3 + 0x11);
  fVar6 = *(float *)((long)param_3 + 0xdc);
  fVar3 = fVar4;
  FUN_100651184(plVar1);
  fVar5 = fVar5 + -30.0;
  fVar3 = fVar5 - (fVar4 * fVar6 + *(float *)((long)param_3 + 0x40c) * fVar3);
  fVar4 = *(float *)((long)param_3 + 0x3fc);
  if (fVar4 != fVar3) {
    *(float *)((long)param_3 + 0x3fc) = fVar3;
    FUN_1000200a0(plVar1);
    fVar4 = *(float *)((long)param_3 + 0x3fc);
  }
  FUN_100651184(plVar1);
  fVar3 = fVar4 + 10.0 + fVar5 * 0.5;
  if (*(float *)((long)param_3 + 0x52c) != fVar3) {
    *(float *)((long)param_3 + 0x52c) = fVar3;
    FUN_1000200a0(param_3 + 0x9d);
    return;
  }
  return;
}




void FUN_1002593b4(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = 4;
  }
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0x32c) =
       *(uint *)(param_1 + 0x32c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x32c) & 3 | (uint)(*(int *)(param_1 + 0x5fc) == 1) << 2;
  FUN_100258ec4();
  FUN_100259278(param_1);
  return;
}




void FUN_10025940c(float param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = param_1 + 1.0;
  iVar1 = *(int *)(param_2 + 0x5f0);
  lVar4 = FUN_10015d3ec();
  fVar7 = 1.0;
  if ((iVar1 != *(int *)(lVar4 + 0x55d0) + 1) &&
     ((*(int *)(param_2 + 0x5fc) == 0 || (fVar7 = 1.0, *(int *)(param_2 + 0x5fc) == 2)))) {
    fVar7 = param_1 * 0.6 + 0.4;
  }
  bVar3 = false;
  if ((*(float *)(param_2 + 0x48) == fVar6) &&
     (bVar3 = false, !NAN(*(float *)(param_2 + 0x4c)) && !NAN(fVar6))) {
    bVar3 = *(float *)(param_2 + 0x4c) == fVar6;
  }
  if (!bVar3) {
    *(float *)(param_2 + 0x48) = fVar6;
    *(float *)(param_2 + 0x4c) = fVar6;
    FUN_1000200a0(param_2);
  }
  uVar2 = *(uint *)(param_2 + 0x84);
  if ((int)(fVar7 * 255.0) != (uVar2 >> 7 & 0xff)) {
    *(uint *)(param_2 + 0x84) =
         uVar2 & 0xffff8000 | uVar2 & 0x7f | ((int)(fVar7 * 255.0) & 0xffU) << 7;
    FUN_1000200a0(param_2);
  }
  uVar2 = *(uint *)(param_2 + 0x32c);
  if (((uVar2 >> 2 & 1) != 0) &&
     (uVar5 = (uint)(255.0 - param_1 * 255.0), uVar5 != (uVar2 >> 7 & 0xff))) {
    *(uint *)(param_2 + 0x32c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | (uVar5 & 0xff) << 7;
    FUN_1000200a0(param_2 + 0x2a8);
    return;
  }
  return;
}




void FUN_100259514(long param_1,byte *param_2)

{
  long lVar1;
  byte *pbVar2;
  size_t sVar3;
  uint uVar4;
  byte bVar5;
  size_t sVar6;
  long lVar7;
  int iVar8;
  void *pvVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  uVar4 = *(uint *)(param_1 + 0x2a20);
  pbVar2 = *(byte **)param_2;
  sVar6 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar2 = param_2;
    sVar6 = (ulong)param_2[0x17];
  }
  if (uVar4 != 0) {
    uVar13 = 0;
    lVar14 = *(long *)(param_1 + 0x2a28);
    do {
      lVar12 = *(long *)(lVar14 + uVar13 * 8);
      bVar5 = *(byte *)(lVar12 + 0x5ef);
      sVar3 = *(size_t *)(lVar12 + 0x5e0);
      if (-1 < (char)bVar5) {
        sVar3 = (ulong)bVar5;
      }
      if (sVar3 == sVar6) {
        if ((char)bVar5 < '\0') {
          if ((sVar6 == 0) || (iVar8 = _memcmp(*(void **)(lVar12 + 0x5d8),pbVar2,sVar6), iVar8 == 0)
             ) goto LAB_100259704;
        }
        else {
          if (sVar6 == 0) goto LAB_100259704;
          if ((uint)*pbVar2 == ((uint)*(void **)(lVar12 + 0x5d8) & 0xff)) {
            lVar11 = 0;
            do {
              if ((ulong)bVar5 - 1 == lVar11) {
                local_68 = lVar12;
                if (lVar12 == 0) goto LAB_100259608;
                goto LAB_100259704;
              }
              lVar1 = lVar12 + lVar11;
              lVar7 = lVar11 + 1;
              lVar11 = lVar11 + 1;
            } while (*(byte *)(lVar1 + 0x5d9) == pbVar2[lVar7]);
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar4);
  }
LAB_100259608:
  pvVar9 = operator_new(0x600);
  local_68 = FUN_100258bf0();
  FUN_1005308f8(param_1 + 0x2440,pvVar9,1);
  FUN_100259730(param_1 + 0x2a20,&local_68);
  *(undefined4 *)(param_1 + 0x2994) = *(undefined4 *)(param_1 + 0x2a20);
  plVar10 = operator_new(0xf0);
  local_70 = thunk_FUN_100652c08();
  FUN_100652cac(local_70,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_10064e47c(0x40800000,0x41f80000,plVar10);
  uVar4 = *(uint *)((long)plVar10 + 0x84);
  if ((uVar4 & 0x7f80) != 0x5900) {
    *(uint *)((long)plVar10 + 0x84) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x5900;
    FUN_1000200a0(plVar10);
  }
  local_78 = 0x3f8000003f000000;
  (**(code **)(*plVar10 + 0x28))(plVar10,&local_78);
  FUN_100642bd8(param_1 + 0x3618,plVar10,1);
  FUN_100047df4(param_1 + 0x2a30,&local_70);
  lVar12 = local_68;
  if (local_68 != 0) {
LAB_100259704:
    local_68 = lVar12;
    FUN_1002590f8(local_68,param_2);
  }
  return;
}




void FUN_100259730(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100259e84(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002597b0(long param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  void *local_128;
  void *local_120;
  undefined7 local_118;
  char cStack_111;
  char local_101;
  undefined4 local_100;
  undefined8 local_fc;
  undefined **local_f0;
  undefined1 auStack_e8 [40];
  long local_c0;
  undefined8 local_a0;
  void *local_98;
  void *local_90 [2];
  char local_79;
  undefined8 local_70;
  undefined4 local_5c;
  undefined4 local_48;
  undefined1 local_43;
  
  if ((*(byte *)(param_1 + 0x5194) >> 2 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0xe5bc);
    if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 0x2a20))) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x2a28) + (ulong)uVar1 * 8);
      plVar2 = (long *)(lVar5 + 0x5d8);
      if (*(char *)(lVar5 + 0x5ef) < '\0') {
        plVar2 = (long *)*plVar2;
      }
      lVar5 = FUN_100326d78(plVar2);
      if ((((lVar5 != 0) && (*(char *)(lVar5 + 0xd8) != '\0')) && (*(char *)(lVar5 + 0xd9) == '\0'))
         && (uVar3 = FUN_10013033c("firstLevelChest"), (uVar3 & 1) == 0)) {
        thunk_FUN_1001cd434(&local_f0);
        local_c0 = param_1 + 0x2a40;
        local_48 = 2;
        FUN_10001549c(&local_128,"firstLevelChest");
        std::string::operator=((string *)local_90,(string *)&local_128);
        if (cStack_111 < '\0') {
          operator_delete(local_128);
        }
        local_43 = 1;
        local_5c = 0x442f0000;
        local_70 = 0x43160000;
        uVar4 = FUN_1004e0150("MENU_PROFILE_CHEST_UNLOCKED_TOOLTIP_TITLE",0);
        thunk_FUN_1004e439c(&local_128,uVar4);
        FUN_10003330c(&local_118,&DAT_101d91198);
        local_100 = 0;
        local_fc = 0x41a00000;
        FUN_10003c048(auStack_e8,&local_128);
        if (local_101 < '\0') {
          operator_delete((void *)CONCAT17(cStack_111,local_118));
        }
        if (local_120 != (void *)0x0) {
          operator_delete__(local_120);
        }
        uVar4 = FUN_1004e0150("MENU_PROFILE_CHEST_UNLOCKED_TOOLTIP",0);
        thunk_FUN_1004e439c(&local_128,uVar4);
        FUN_10003330c(&local_118,&DAT_101d91198);
        local_100 = 1;
        local_fc = 0x41a00000;
        FUN_10003c048(auStack_e8,&local_128);
        if (local_101 < '\0') {
          operator_delete((void *)CONCAT17(cStack_111,local_118));
        }
        if (local_120 != (void *)0x0) {
          operator_delete__(local_120);
        }
        uVar4 = FUN_10002f320();
        FUN_10001549c(&local_128,"firstLevelChest");
        FUN_100030e74(uVar4,&local_128,&local_f0);
        if (cStack_111 < '\0') {
          operator_delete(local_128);
        }
        local_f0 = &PTR_FUN_1014666e0;
        if (local_79 < '\0') {
          operator_delete(local_90[0]);
        }
        if (local_98 != (void *)0x0) {
          operator_delete__(local_98);
          local_a0 = 0;
          local_98 = (void *)0x0;
        }
        FUN_10003c1ec(auStack_e8,1);
      }
    }
  }
  return;
}




void FUN_1002599f8(long param_1)

{
  string *this;
  size_t sVar1;
  size_t sVar2;
  string *psVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  long *plVar14;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  this = (string *)(param_1 + 0xe598);
  uVar4 = *(uint *)(param_1 + 0xe5bc);
  if ((int)uVar4 < 0) {
    bVar6 = true;
  }
  else {
    bVar6 = *(uint *)(param_1 + 0x2a20) <= uVar4;
  }
  bVar5 = *(byte *)(param_1 + 0xe5af);
  uVar10 = (ulong)bVar5;
  sVar1 = *(size_t *)(param_1 + 0xe5a0);
  if (-1 < (char)bVar5) {
    sVar1 = uVar10;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 != sVar2) {
    return;
  }
  psVar3 = *(string **)this;
  if (-1 < (char)bVar5) {
    psVar3 = this;
  }
  pbVar12 = DAT_101d91198;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    pbVar12 = (byte *)&DAT_101d91198;
  }
  if ((char)bVar5 < '\0') {
    if (sVar1 != 0) {
      iVar7 = _memcmp(psVar3,pbVar12,sVar1);
      if (iVar7 != 0 || bVar6) {
        return;
      }
      goto LAB_100259aec;
    }
  }
  else if (sVar1 != 0) {
    if ((uint)*pbVar12 != ((uint)*(string **)this & 0xff)) {
      return;
    }
    pbVar11 = (byte *)(param_1 + 0xe599);
    while( true ) {
      uVar10 = uVar10 - 1;
      pbVar12 = pbVar12 + 1;
      if (uVar10 == 0) break;
      bVar5 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      if (bVar5 != *pbVar12) {
        return;
      }
    }
  }
  if (bVar6) {
    return;
  }
LAB_100259aec:
  lVar13 = *(long *)(*(long *)(param_1 + 0x2a28) + (ulong)uVar4 * 8);
  if (lVar13 != 0) {
    plVar14 = (long *)(lVar13 + 0x5d8);
    FUN_10003330c(local_48,plVar14);
    if (*(char *)(lVar13 + 0x5ef) < '\0') {
      plVar14 = (long *)*plVar14;
    }
    lVar8 = FUN_100326d78(plVar14);
    if (lVar8 != 0) {
      iVar7 = FUN_100319e28();
      if (iVar7 != 0) {
        std::string::operator=(this,(string *)local_48);
        FUN_1001af9fc(param_1 + 0x2c20,0);
        uVar9 = FUN_10002f320();
        if ((char)*(byte *)(param_1 + 0x353f) < '\0') {
          uVar10 = *(ulong *)(param_1 + 0x3530);
        }
        else {
          uVar10 = (ulong)*(byte *)(param_1 + 0x353f);
        }
        lVar8 = param_1 + 0x35d8;
        if (uVar10 != 0) {
          lVar8 = param_1 + 0x3528;
        }
        FUN_1000315c4(uVar9,this,lVar8);
      }
      FUN_1002591d0(lVar13);
      uVar9 = FUN_10002f320();
      FUN_10001549c(local_60,"layer_player_profile_prog");
      FUN_100030cf0(uVar9,local_60);
      if (local_49 < '\0') {
        operator_delete(local_60[0]);
      }
    }
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  return;
}




bool FUN_100259be0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)FUN_100319d48(param_1,"level");
  piVar3 = (int *)FUN_100319d48(param_2,"level");
  if (piVar2 == (int *)0x0 || piVar3 == (int *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *piVar2 < *piVar3;
  }
  return bVar1;
}




void FUN_100259c48(void)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_10002f320();
  FUN_10001549c(local_38,"layer_player_profile_prog");
  FUN_100030cf0(uVar1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_100259c9c(long param_1)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_30;
  undefined8 uStack_28;
  
  plVar1 = (long *)(param_1 + 0xe598);
  bVar6 = *(byte *)(param_1 + 0xe5af);
  uVar10 = (ulong)bVar6;
  sVar2 = *(size_t *)(param_1 + 0xe5a0);
  if (-1 < (char)bVar6) {
    sVar2 = uVar10;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  plVar14 = plVar1;
  if (sVar2 == sVar3) {
    plVar13 = (long *)*plVar1;
    plVar4 = plVar13;
    if (-1 < (char)bVar6) {
      plVar4 = plVar1;
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar2 == 0) || (iVar7 = _memcmp(plVar4,pbVar12,sVar2), plVar14 = plVar13, iVar7 == 0))
      goto LAB_100259db8;
    }
    else {
      if (sVar2 == 0) goto LAB_100259db8;
      if ((uint)*pbVar12 == ((uint)plVar13 & 0xff)) {
        pbVar11 = (byte *)(param_1 + 0xe599);
        do {
          uVar10 = uVar10 - 1;
          pbVar12 = pbVar12 + 1;
          if (uVar10 == 0) goto LAB_100259db8;
          bVar5 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar5 == *pbVar12);
        goto LAB_100259d4c;
      }
    }
  }
  else {
LAB_100259d4c:
    if ((char)bVar6 < '\0') {
      plVar14 = (long *)*plVar1;
    }
  }
  lVar8 = FUN_100326d78(plVar14);
  if (lVar8 != 0) {
    local_30 = 0;
    uStack_28 = 0;
    iVar7 = FUN_1000e6ae0(lVar8,&local_30);
    if (iVar7 != 0) {
      uVar9 = FUN_10002f320();
      FUN_100031670(uVar9,plVar1,&local_30);
    }
    FUN_1000ec1cc(&local_30,1);
    return;
  }
LAB_100259db8:
  uVar9 = FUN_10002f320();
  FUN_100031740(uVar9,plVar1);
  return;
}




void FUN_100259dd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_10002f320();
  FUN_100031740(uVar1,(string *)(param_1 + 0xe598));
  std::string::operator=((string *)(param_1 + 0xe598),(string *)&DAT_101d91198);
  uVar1 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
  uVar2 = FUN_1004e0150("MENU_DIALOG_CHEST_REDEMPTION_FAILIRE",0);
  uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar1,uVar2,uVar3,0,0);
  FUN_100257708(param_1);
  return;
}




void thunk_FUN_1002587e8(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_100327554();
  if ((uVar1 & 1) != 0) {
    FUN_100257708(param_1);
    return;
  }
  FUN_100258824(param_1,1);
  return;
}




void FUN_100259e84(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_100259f00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
LAB_100259f2c:
  puVar8 = param_2 + -1;
  puVar9 = param_1;
LAB_100259f34:
  param_1 = puVar9;
  lVar7 = (long)param_2 - (long)param_1;
  uVar5 = lVar7 >> 3;
  switch(uVar5) {
  case 0:
  case 1:
    goto switchD_10025a1d4_caseD_0;
  case 2:
    iVar3 = (*(code *)*param_3)(*puVar8,*param_1);
    if (iVar3 == 0) {
      return;
    }
    uVar6 = *param_1;
    *param_1 = *puVar8;
    *puVar8 = uVar6;
    return;
  case 3:
    FUN_10025a2d4(param_1,param_1 + 1,puVar8,param_3);
    return;
  case 4:
    FUN_10025a3c0(param_1,param_1 + 1,param_1 + 2,puVar8,param_3);
    return;
  case 5:
    FUN_10025a48c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar8,param_3);
    return;
  default:
    if (lVar7 < 0xf8) {
      FUN_10025a590(param_1,param_2,param_3);
      return;
    }
    uVar1 = uVar5;
    if ((long)uVar5 < 0) {
      uVar1 = uVar5 + 1;
    }
    puVar9 = (undefined8 *)((long)param_1 + (uVar1 & 0x3ffffffffffffffe) * 4);
    if (lVar7 < 0x1f39) {
      iVar3 = FUN_10025a2d4(param_1,puVar9,puVar8,param_3);
    }
    else {
      uVar1 = uVar5 + 3;
      if (-1 < (long)uVar5) {
        uVar1 = uVar5;
      }
      lVar7 = (uVar1 & 0x7ffffffffffffffc) * 2;
      iVar3 = FUN_10025a48c(param_1,(long)param_1 + lVar7,puVar9,(long)puVar9 + lVar7,puVar8,param_3
                           );
    }
    uVar5 = (*(code *)*param_3)(*param_1,*puVar9);
    puVar10 = puVar8;
    if ((uVar5 & 1) == 0) break;
    goto LAB_10025a004;
  }
  while (puVar10 = puVar10 + -1, puVar10 != param_1) {
    iVar4 = (*(code *)*param_3)(*puVar10,*puVar9);
    if (iVar4 != 0) goto code_r0x000100259ff0;
  }
  puVar10 = param_1 + 1;
  uVar5 = (*(code *)*param_3)(*param_1,*puVar8);
  puVar9 = puVar10;
  if ((uVar5 & 1) == 0) {
    while( true ) {
      if (puVar9 == puVar8) {
        return;
      }
      iVar3 = (*(code *)*param_3)(*param_1,*puVar9);
      if (iVar3 != 0) break;
      puVar9 = puVar9 + 1;
    }
    uVar6 = *puVar9;
    puVar10 = puVar9 + 1;
    *puVar9 = *puVar8;
    *puVar8 = uVar6;
  }
  puVar12 = puVar8;
  if (puVar10 == puVar8) {
    return;
  }
  while( true ) {
    puVar9 = puVar10 + -1;
    do {
      puVar10 = puVar9;
      puVar9 = puVar10 + 1;
      iVar3 = (*(code *)*param_3)(*param_1,*puVar9);
    } while (iVar3 == 0);
    puVar10 = puVar10 + 2;
    do {
      puVar12 = puVar12 + -1;
      uVar5 = (*(code *)*param_3)(*param_1,*puVar12);
    } while ((uVar5 & 1) != 0);
    if (puVar12 <= puVar9) break;
    uVar6 = *puVar9;
    *puVar9 = *puVar12;
    *puVar12 = uVar6;
  }
  goto LAB_100259f34;
code_r0x000100259ff0:
  uVar6 = *param_1;
  *param_1 = *puVar10;
  *puVar10 = uVar6;
  iVar3 = iVar3 + 1;
LAB_10025a004:
  puVar12 = param_1 + 1;
  puVar2 = puVar9;
  puVar11 = puVar12;
  if (puVar12 < puVar10) {
    while( true ) {
      puVar9 = puVar2;
      puVar12 = puVar11 + -1;
      do {
        puVar11 = puVar12;
        puVar12 = puVar11 + 1;
        uVar5 = (*(code *)*param_3)(*puVar12,*puVar9);
      } while ((uVar5 & 1) != 0);
      puVar11 = puVar11 + 2;
      do {
        puVar10 = puVar10 + -1;
        iVar4 = (*(code *)*param_3)(*puVar10,*puVar9);
      } while (iVar4 == 0);
      if (puVar10 < puVar12) break;
      uVar6 = *puVar12;
      *puVar12 = *puVar10;
      *puVar10 = uVar6;
      iVar3 = iVar3 + 1;
      puVar2 = puVar10;
      if (puVar12 != puVar9) {
        puVar2 = puVar9;
      }
    }
  }
  if ((puVar12 != puVar9) && (iVar4 = (*(code *)*param_3)(*puVar9,*puVar12), iVar4 != 0)) {
    uVar6 = *puVar12;
    *puVar12 = *puVar9;
    *puVar9 = uVar6;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 0) {
    uVar5 = FUN_10025a660(param_1,puVar12,param_3);
    iVar3 = FUN_10025a660(puVar12 + 1,param_2,param_3);
    if (iVar3 != 0) goto LAB_10025a1b4;
    puVar9 = puVar12 + 1;
    if ((uVar5 & 1) != 0) goto LAB_100259f34;
  }
  if ((long)param_2 - (long)puVar12 <= (long)puVar12 - (long)param_1) {
    FUN_100259f00(puVar12 + 1,param_2,param_3);
    param_2 = puVar12;
    goto LAB_100259f2c;
  }
  FUN_100259f00(param_1,puVar12,param_3);
  puVar9 = puVar12 + 1;
  goto LAB_100259f34;
LAB_10025a1b4:
  param_2 = puVar12;
  if ((uVar5 & 1) != 0) {
switchD_10025a1d4_caseD_0:
    return;
  }
  goto LAB_100259f2c;
}




undefined8
FUN_10025a2d4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = (*(code *)*param_4)(*param_2,*param_1);
  uVar3 = (*(code *)*param_4)(*param_3,*param_2);
  if ((uVar2 & 1) == 0) {
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    iVar1 = (*(code *)*param_4)(*param_2,*param_1);
    if (iVar1 != 0) {
      uVar3 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar3;
      return 2;
    }
  }
  else {
    uVar4 = *param_1;
    if ((int)uVar3 == 0) {
      *param_1 = *param_2;
      *param_2 = uVar4;
      iVar1 = (*(code *)*param_4)(*param_3);
      if (iVar1 != 0) {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        return 2;
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar4;
    }
  }
  return 1;
}




ulong FUN_10025a3c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = FUN_10025a2d4();
  iVar1 = (*(code *)*param_5)(*param_4,*param_3);
  if (iVar1 != 0) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    iVar1 = (*(code *)*param_5)(*param_3,*param_2);
    iVar4 = (int)uVar2;
    if (iVar1 == 0) {
      uVar2 = (ulong)(iVar4 + 1);
    }
    else {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      iVar1 = (*(code *)*param_5)(*param_2,*param_1);
      if (iVar1 == 0) {
        uVar2 = (ulong)(iVar4 + 2);
      }
      else {
        uVar3 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar3;
        uVar2 = (ulong)(iVar4 + 3);
      }
    }
  }
  return uVar2;
}




ulong FUN_10025a48c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = FUN_10025a3c0();
  iVar1 = (*(code *)*param_6)(*param_5,*param_4);
  if (iVar1 != 0) {
    uVar3 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar3;
    iVar1 = (*(code *)*param_6)(*param_4,*param_3);
    iVar4 = (int)uVar2;
    if (iVar1 == 0) {
      uVar2 = (ulong)(iVar4 + 1);
    }
    else {
      uVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar3;
      iVar1 = (*(code *)*param_6)(*param_3,*param_2);
      if (iVar1 == 0) {
        uVar2 = (ulong)(iVar4 + 2);
      }
      else {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        iVar1 = (*(code *)*param_6)(*param_2,*param_1);
        if (iVar1 == 0) {
          uVar2 = (ulong)(iVar4 + 3);
        }
        else {
          uVar3 = *param_1;
          *param_1 = *param_2;
          *param_2 = uVar3;
          uVar2 = (ulong)(iVar4 + 4);
        }
      }
    }
  }
  return uVar2;
}




void FUN_10025a590(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  FUN_10025a2d4(param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar8 = 0;
    puVar5 = param_1 + 3;
    puVar6 = param_1 + 2;
    do {
      puVar4 = puVar5;
      iVar2 = (*(code *)*param_3)(*puVar4,*puVar6);
      if (iVar2 != 0) {
        uVar7 = *puVar4;
        lVar1 = lVar8;
        do {
          lVar9 = lVar1;
          *(undefined8 *)((long)param_1 + lVar9 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x10);
          puVar5 = param_1;
          if (lVar9 == -0x10) goto LAB_10025a634;
          uVar3 = (*(code *)*param_3)(uVar7,*(undefined8 *)((long)param_1 + lVar9 + 8));
          lVar1 = lVar9 + -8;
        } while ((uVar3 & 1) != 0);
        puVar5 = (undefined8 *)((long)param_1 + lVar9 + 0x10);
LAB_10025a634:
        *puVar5 = uVar7;
      }
      lVar8 = lVar8 + 8;
      puVar5 = puVar4 + 1;
      puVar6 = puVar4;
    } while (puVar4 + 1 != param_2);
  }
  return;
}




bool FUN_10025a660(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    iVar2 = (*(code *)*param_3)(param_2[-1],*param_1);
    if (iVar2 != 0) {
      uVar8 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar8;
    }
    break;
  case 3:
    FUN_10025a2d4(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_10025a3c0(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_10025a48c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_10025a2d4(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar9 = 0;
      iVar2 = 0;
      puVar6 = param_1 + 3;
      puVar7 = param_1 + 2;
      do {
        puVar5 = puVar6;
        iVar3 = (*(code *)*param_3)(*puVar5,*puVar7);
        if (iVar3 != 0) {
          uVar8 = *puVar5;
          lVar1 = lVar9;
          do {
            lVar10 = lVar1;
            *(undefined8 *)((long)param_1 + lVar10 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x10);
            puVar6 = param_1;
            if (lVar10 == -0x10) goto LAB_10025a760;
            uVar4 = (*(code *)*param_3)(uVar8,*(undefined8 *)((long)param_1 + lVar10 + 8));
            lVar1 = lVar10 + -8;
          } while ((uVar4 & 1) != 0);
          puVar6 = (undefined8 *)((long)param_1 + lVar10 + 0x10);
LAB_10025a760:
          *puVar6 = uVar8;
          iVar2 = iVar2 + 1;
          if (iVar2 == 8) {
            return puVar5 + 1 == param_2;
          }
        }
        lVar9 = lVar9 + 8;
        puVar6 = puVar5 + 1;
        puVar7 = puVar5;
      } while (puVar5 + 1 != param_2);
    }
  }
  return true;
}




code * FUN_10025a800(code *param_1,code param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  undefined **ppuVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long lVar22;
  code *pcVar23;
  undefined4 uVar24;
  code *pcVar25;
  code *local_a8;
  code *local_a0;
  code *local_98;
  code *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  puVar20 = (undefined8 *)FUN_100269da8();
  *puVar20 = &PTR_thunk_FUN_10025b12c_10147ac80;
  *(undefined4 *)((long)puVar20 + 0xc4) = 0;
  puVar20 = puVar20 + 0x19;
  thunk_FUN_100652c08();
  thunk_FUN_1001c73d0();
  pcVar1 = param_1 + 0xd28;
  FUN_10064e264();
  thunk_FUN_1001c6070();
  pcVar2 = param_1 + 0x2d60;
  thunk_FUN_1006543ec(pcVar2);
  pcVar3 = param_1 + 0x2f00;
  FUN_10053077c(pcVar3,0);
  pcVar25 = param_1 + 0x3438;
  FUN_1006421a8(pcVar25);
  *(undefined ***)(param_1 + 0x3438) = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8();
  *(undefined ***)(param_1 + 0x34c0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  pcVar4 = param_1 + 0x3548;
  FUN_1006421a8();
  *(undefined ***)(param_1 + 0x3548) = &PTR_thunk_FUN_10064221c_10144b7e8;
  pcVar5 = param_1 + 0x35d0;
  thunk_FUN_100183990(pcVar5,0);
  pcVar6 = param_1 + 0x3bc0;
  thunk_FUN_100650e64();
  pcVar7 = param_1 + 0x3cf0;
  thunk_FUN_100650e64();
  thunk_FUN_1001ceb64(param_1 + 0x3e20,0);
  pcVar8 = param_1 + 0x3f08;
  FUN_1006421a8(pcVar8);
  *(undefined ***)(param_1 + 0x3f08) = &PTR_thunk_FUN_10064221c_10144b7e8;
  pcVar9 = param_1 + 0x3f90;
  thunk_FUN_100652c08();
  pcVar10 = param_1 + 0x4080;
  FUN_10064fd54(pcVar10,0);
  *(undefined ***)(param_1 + 0x4080) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  pcVar11 = param_1 + 0x4148;
  thunk_FUN_100183990(pcVar11,0);
  pcVar12 = param_1 + 0x4738;
  FUN_10064fd54(pcVar12,1);
  *(undefined ***)(param_1 + 0x4738) = &PTR_thunk_FUN_10064e2bc_101451a40;
  pcVar13 = param_1 + 0x4800;
  thunk_FUN_100650e64();
  pcVar14 = param_1 + 0x4930;
  FUN_10064fd54(pcVar14,0);
  *(undefined ***)(param_1 + 0x4930) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  pcVar15 = param_1 + 0x49f8;
  thunk_FUN_100652c08();
  pcVar16 = param_1 + 0x4ae8;
  thunk_FUN_1001cd1dc(pcVar16);
  *(undefined4 *)(param_1 + 0x4c48) = 0;
  *(long *)(param_1 + 0x4c40) = 0;
  param_1[0x4c4c] = param_2;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,puVar20,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar2,1);
  FUN_100642bd8(pcVar2,pcVar3,1);
  FUN_1005308f8(pcVar3,pcVar25,1);
  FUN_100642bd8(pcVar25,param_1 + 0x34c0,1);
  FUN_100642bd8(param_1 + 0x34c0,param_1 + 0x1b8,1);
  FUN_100642bd8(param_1 + 0x1b8,pcVar1,1);
  pcVar23 = pcVar7;
  if (((byte)param_2 & 1) == 0) {
    FUN_100642bd8(pcVar25,pcVar4,1);
    FUN_100642bd8(pcVar4,param_1 + 0xde0,1);
    FUN_100642bd8(pcVar4,pcVar5,1);
    pcVar23 = pcVar6;
    pcVar25 = pcVar4;
  }
  FUN_100642bd8(pcVar25,pcVar23,1);
  FUN_1005308f8(pcVar3,pcVar8,1);
  FUN_100642bd8(pcVar8,pcVar9,1);
  FUN_100642bd8(pcVar8,pcVar10,1);
  FUN_100642bd8(pcVar10,pcVar11,1);
  FUN_100642bd8(pcVar10,pcVar12,1);
  FUN_100642bd8(pcVar12,pcVar13,1);
  FUN_100642bd8(pcVar12,pcVar14,1);
  FUN_100642bd8(pcVar14,pcVar15,1);
  FUN_100642bd8(pcVar14,pcVar16,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,param_1 + 0x3e20,1);
  iVar19 = FUN_100126c88();
  FUN_100652cac(puVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(puVar20,&DAT_10115a164,2);
  uVar18 = *(uint *)(param_1 + 0x14c);
  if ((uVar18 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0x14c) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x6600;
    FUN_1000200a0(puVar20);
  }
  param_1[0x1a0] = (code)((byte)param_1[0x1a0] | 2);
  FUN_100654488(pcVar2,1);
  FUN_100530adc(pcVar3,0,1);
  if (param_1[0x4c4c] == (code)0x0) {
    *(uint *)(param_1 + 0xdac) = *(uint *)(param_1 + 0xdac) | 0x10;
    if ((*(float *)(param_1 + 0xd78) != 0.5) || (*(float *)(param_1 + 0xd7c) != 0.6)) {
      *(long *)(param_1 + 0xd78) = 0x3f19999a3f000000;
      FUN_1000200a0(pcVar1);
    }
    FUN_10064e47c(0x447a0000,0x44480000,pcVar1);
    local_80 = DAT_101dbd460;
    local_a8 = FUN_10025b11c;
    local_90 = (code *)0x0;
    uStack_88 = 0;
    local_98 = (code *)0x0;
    local_a0 = param_1;
    FUN_10001554c(param_1 + 0xd30,&local_a8);
    local_80 = DAT_101dbd48c;
    local_a8 = FUN_10025b11c;
    local_90 = (code *)0x0;
    uStack_88 = 0;
    local_98 = (code *)0x0;
    local_a0 = param_1;
    FUN_10001554c(param_1 + 0xd30,&local_a8);
  }
  FUN_1001c6454(param_1 + 0xde0,1);
  if (param_1[0x4c4c] == (code)0x0) {
    FUN_100652cdc(param_1 + 0x3aa0,"circle_button_question");
    uVar18 = *(uint *)(param_1 + 0x3654);
    if ((uVar18 & 0x7f80) != 0x5f80) {
      *(uint *)(param_1 + 0x3654) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x5f80;
      FUN_1000200a0(pcVar5);
    }
    FUN_1001b495c(0xbf800000,pcVar5);
    local_80 = DAT_101d91884;
    local_a8 = FUN_10025b11c;
    local_90 = (code *)0x0;
    uStack_88 = 0;
    local_98 = (code *)0x0;
    local_a0 = param_1;
    FUN_10001554c(param_1 + 0x35d8,&local_a8);
    FUN_1001b4964(pcVar5,1);
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
    if (iVar19 == 0) {
      ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8;
    }
    local_a8 = (code *)CONCAT44(local_a8._4_4_,0xffa0a0a0);
    FUN_100651594(pcVar6,*ppuVar17,&local_a8);
    uVar21 = FUN_1004e0150("PLAYER_PROFILE_SKILLTIER_EXPLANATION_DESCRIPTION",0);
    thunk_FUN_1004e439c(&local_a8,uVar21);
    FUN_1006513c0(pcVar6,&local_a8);
    if (local_a0 != (code *)0x0) {
      operator_delete__(local_a0);
    }
  }
  else {
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
    if (iVar19 == 0) {
      ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
    }
    FUN_100651594(pcVar7,*ppuVar17,&DAT_10115a168);
    uVar18 = *(uint *)(param_1 + 0x3d74);
    if ((uVar18 & 0x7f80) != 0x3300) {
      *(uint *)(param_1 + 0x3d74) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x3300;
      FUN_1000200a0(pcVar7);
    }
    FUN_100651700(pcVar7,3);
    uVar21 = FUN_1004e0150("PLAYER_PROFILE_TROPHY_EXPLANATION",0);
    FUN_1006513c0(pcVar7,uVar21);
  }
  FUN_100652cac(pcVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar18 = *(uint *)(param_1 + 0x4014);
  if ((uVar18 & 0x7f80) != 0x3300) {
    *(uint *)(param_1 + 0x4014) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x3300;
    FUN_1000200a0(pcVar9);
  }
  FUN_100652cdc(param_1 + 0x4618,"circle_button_question");
  uVar18 = *(uint *)(param_1 + 0x41cc);
  if ((uVar18 & 0x7f80) != 0x5f80) {
    *(uint *)(param_1 + 0x41cc) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x5f80;
    FUN_1000200a0(pcVar11);
  }
  FUN_1001b495c(0xbf800000,pcVar11);
  local_80 = DAT_101d91884;
  local_a8 = thunk_FUN_10025bee4;
  local_90 = (code *)0x0;
  uStack_88 = 0;
  local_98 = (code *)0x0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x4150,&local_a8);
  FUN_1001b4964(pcVar11,1);
  ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar19 == 0) {
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  uVar24 = 0x44160000;
  if (iVar19 == 0) {
    uVar24 = 0x43e10000;
  }
  FUN_100651038(pcVar13,*ppuVar17);
  FUN_100651708(uVar24,pcVar13,1);
  uVar18 = *(uint *)(param_1 + 0x4884);
  if ((uVar18 & 0x7f80) != 0x5900) {
    *(uint *)(param_1 + 0x4884) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x5900;
    FUN_1000200a0(pcVar13);
  }
  FUN_100652cac(pcVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_clock");
  uVar18 = *(uint *)(param_1 + 0x4a7c);
  if ((uVar18 & 0x7f80) != 0x5900) {
    *(uint *)(param_1 + 0x4a7c) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x5900;
    FUN_1000200a0(pcVar15);
  }
  if ((*(float *)(param_1 + 0x4a48) != 0.5) || (*(float *)(param_1 + 0x4a4c) != 0.5)) {
    *(undefined1 **)(param_1 + 0x4a48) = &DAT_3f0000003f000000;
    FUN_1000200a0(pcVar15);
  }
  ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar19 == 0) {
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(pcVar16,*ppuVar17);
  if ((*(uint *)(param_1 + 0x4b6c) & 0x7f80) != 0x3f80) {
    *(uint *)(param_1 + 0x4b6c) = *(uint *)(param_1 + 0x4b6c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(pcVar16);
  }
  if ((*(float *)(param_1 + 0x4b38) != 0.0) || (*(float *)(param_1 + 0x4b3c) != 0.5)) {
    *(long *)(param_1 + 0x4b38) = 0x3f00000000000000;
    FUN_1000200a0(pcVar16);
  }
  uVar24 = 0x44098000;
  if (iVar19 == 0) {
    uVar24 = 0x43c80000;
  }
  FUN_10065179c(uVar24,0,0x3f800000,pcVar16);
  uVar21 = FUN_1004e0150("PLAYER_PROFILE_RANKED_SKILL_TIER_DECAY_TIMER",0);
  FUN_1001cd23c(pcVar16,uVar21,0,0);
  *(uint *)(param_1 + 0x3f8c) = *(uint *)(param_1 + 0x3f8c) & 0xfffffffb;
  lVar22 = FUN_100327e00();
  local_a0 = (code *)0x0;
  local_90 = thunk_FUN_10025b448;
  local_a8 = param_1;
  local_98 = param_1;
  FUN_1000be5e4(lVar22 + 0x18,&local_a8);
  return param_1;
}




void FUN_10025b11c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10025be2c(param_1,param_4);
  return;
}




void thunk_FUN_10025bee4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvStack_118;
  void *pvStack_110;
  undefined7 uStack_108;
  char cStack_101;
  char cStack_f1;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined **ppuStack_e0;
  undefined1 auStack_d8 [40];
  long lStack_b0;
  undefined8 uStack_90;
  void *pvStack_88;
  void *pvStack_80;
  char cStack_69;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_38;
  
  thunk_FUN_1001cd434(&ppuStack_e0);
  uVar2 = FUN_1004e0150("PLAYER_PROFILE_RANKED_SKILL_TIER_DECAY_TOOLTIP",0);
  thunk_FUN_1004e439c(&pvStack_118,uVar2);
  FUN_10003330c(&uStack_108,&DAT_101d91198);
  uStack_f0 = 1;
  uStack_ec = 0x41a00000;
  FUN_10003c048(auStack_d8,&pvStack_118);
  if (cStack_f1 < '\0') {
    operator_delete((void *)CONCAT17(cStack_101,uStack_108));
  }
  if (pvStack_110 != (void *)0x0) {
    operator_delete__(pvStack_110);
  }
  lStack_b0 = param_1 + 0x4148;
  uStack_38 = 2;
  uStack_50 = 0x3f666666;
  iVar1 = FUN_100126c88();
  uStack_4c = 0x44af0000;
  if (iVar1 == 0) {
    uStack_4c = 0x447a0000;
  }
  uVar2 = FUN_10002f320();
  FUN_10001549c(&pvStack_118,"skillTierDecayInfo");
  FUN_100030e74(uVar2,&pvStack_118,&ppuStack_e0);
  if (cStack_101 < '\0') {
    operator_delete(pvStack_118);
  }
  ppuStack_e0 = &PTR_FUN_1014666e0;
  if (cStack_69 < '\0') {
    operator_delete(pvStack_80);
  }
  if (pvStack_88 != (void *)0x0) {
    operator_delete__(pvStack_88);
    uStack_90 = 0;
    pvStack_88 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_d8,1);
  return;
}




code * thunk_FUN_10025a800(code *param_1,code param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  undefined **ppuVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long lVar22;
  code *pcVar23;
  undefined4 uVar24;
  code *pcVar25;
  code *pcStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  puVar20 = (undefined8 *)FUN_100269da8();
  *puVar20 = &PTR_thunk_FUN_10025b12c_10147ac80;
  *(undefined4 *)((long)puVar20 + 0xc4) = 0;
  puVar20 = puVar20 + 0x19;
  thunk_FUN_100652c08();
  thunk_FUN_1001c73d0();
  pcVar1 = param_1 + 0xd28;
  FUN_10064e264();
  thunk_FUN_1001c6070();
  pcVar2 = param_1 + 0x2d60;
  thunk_FUN_1006543ec(pcVar2);
  pcVar3 = param_1 + 0x2f00;
  FUN_10053077c(pcVar3,0);
  pcVar25 = param_1 + 0x3438;
  FUN_1006421a8(pcVar25);
  *(undefined ***)(param_1 + 0x3438) = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8();
  *(undefined ***)(param_1 + 0x34c0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  pcVar4 = param_1 + 0x3548;
  FUN_1006421a8();
  *(undefined ***)(param_1 + 0x3548) = &PTR_thunk_FUN_10064221c_10144b7e8;
  pcVar5 = param_1 + 0x35d0;
  thunk_FUN_100183990(pcVar5,0);
  pcVar6 = param_1 + 0x3bc0;
  thunk_FUN_100650e64();
  pcVar7 = param_1 + 0x3cf0;
  thunk_FUN_100650e64();
  thunk_FUN_1001ceb64(param_1 + 0x3e20,0);
  pcVar8 = param_1 + 0x3f08;
  FUN_1006421a8(pcVar8);
  *(undefined ***)(param_1 + 0x3f08) = &PTR_thunk_FUN_10064221c_10144b7e8;
  pcVar9 = param_1 + 0x3f90;
  thunk_FUN_100652c08();
  pcVar10 = param_1 + 0x4080;
  FUN_10064fd54(pcVar10,0);
  *(undefined ***)(param_1 + 0x4080) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  pcVar11 = param_1 + 0x4148;
  thunk_FUN_100183990(pcVar11,0);
  pcVar12 = param_1 + 0x4738;
  FUN_10064fd54(pcVar12,1);
  *(undefined ***)(param_1 + 0x4738) = &PTR_thunk_FUN_10064e2bc_101451a40;
  pcVar13 = param_1 + 0x4800;
  thunk_FUN_100650e64();
  pcVar14 = param_1 + 0x4930;
  FUN_10064fd54(pcVar14,0);
  *(undefined ***)(param_1 + 0x4930) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  pcVar15 = param_1 + 0x49f8;
  thunk_FUN_100652c08();
  pcVar16 = param_1 + 0x4ae8;
  thunk_FUN_1001cd1dc(pcVar16);
  *(undefined4 *)(param_1 + 0x4c48) = 0;
  *(long *)(param_1 + 0x4c40) = 0;
  param_1[0x4c4c] = param_2;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,puVar20,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar2,1);
  FUN_100642bd8(pcVar2,pcVar3,1);
  FUN_1005308f8(pcVar3,pcVar25,1);
  FUN_100642bd8(pcVar25,param_1 + 0x34c0,1);
  FUN_100642bd8(param_1 + 0x34c0,param_1 + 0x1b8,1);
  FUN_100642bd8(param_1 + 0x1b8,pcVar1,1);
  pcVar23 = pcVar7;
  if (((byte)param_2 & 1) == 0) {
    FUN_100642bd8(pcVar25,pcVar4,1);
    FUN_100642bd8(pcVar4,param_1 + 0xde0,1);
    FUN_100642bd8(pcVar4,pcVar5,1);
    pcVar23 = pcVar6;
    pcVar25 = pcVar4;
  }
  FUN_100642bd8(pcVar25,pcVar23,1);
  FUN_1005308f8(pcVar3,pcVar8,1);
  FUN_100642bd8(pcVar8,pcVar9,1);
  FUN_100642bd8(pcVar8,pcVar10,1);
  FUN_100642bd8(pcVar10,pcVar11,1);
  FUN_100642bd8(pcVar10,pcVar12,1);
  FUN_100642bd8(pcVar12,pcVar13,1);
  FUN_100642bd8(pcVar12,pcVar14,1);
  FUN_100642bd8(pcVar14,pcVar15,1);
  FUN_100642bd8(pcVar14,pcVar16,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,param_1 + 0x3e20,1);
  iVar19 = FUN_100126c88();
  FUN_100652cac(puVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(puVar20,&DAT_10115a164,2);
  uVar18 = *(uint *)(param_1 + 0x14c);
  if ((uVar18 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0x14c) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x6600;
    FUN_1000200a0(puVar20);
  }
  param_1[0x1a0] = (code)((byte)param_1[0x1a0] | 2);
  FUN_100654488(pcVar2,1);
  FUN_100530adc(pcVar3,0,1);
  if (param_1[0x4c4c] == (code)0x0) {
    *(uint *)(param_1 + 0xdac) = *(uint *)(param_1 + 0xdac) | 0x10;
    if ((*(float *)(param_1 + 0xd78) != 0.5) || (*(float *)(param_1 + 0xd7c) != 0.6)) {
      *(long *)(param_1 + 0xd78) = 0x3f19999a3f000000;
      FUN_1000200a0(pcVar1);
    }
    FUN_10064e47c(0x447a0000,0x44480000,pcVar1);
    uStack_80 = DAT_101dbd460;
    pcStack_a8 = FUN_10025b11c;
    pcStack_90 = (code *)0x0;
    uStack_88 = 0;
    pcStack_98 = (code *)0x0;
    pcStack_a0 = param_1;
    FUN_10001554c(param_1 + 0xd30,&pcStack_a8);
    uStack_80 = DAT_101dbd48c;
    pcStack_a8 = FUN_10025b11c;
    pcStack_90 = (code *)0x0;
    uStack_88 = 0;
    pcStack_98 = (code *)0x0;
    pcStack_a0 = param_1;
    FUN_10001554c(param_1 + 0xd30,&pcStack_a8);
  }
  FUN_1001c6454(param_1 + 0xde0,1);
  if (param_1[0x4c4c] == (code)0x0) {
    FUN_100652cdc(param_1 + 0x3aa0,"circle_button_question");
    uVar18 = *(uint *)(param_1 + 0x3654);
    if ((uVar18 & 0x7f80) != 0x5f80) {
      *(uint *)(param_1 + 0x3654) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x5f80;
      FUN_1000200a0(pcVar5);
    }
    FUN_1001b495c(0xbf800000,pcVar5);
    uStack_80 = DAT_101d91884;
    pcStack_a8 = FUN_10025b11c;
    pcStack_90 = (code *)0x0;
    uStack_88 = 0;
    pcStack_98 = (code *)0x0;
    pcStack_a0 = param_1;
    FUN_10001554c(param_1 + 0x35d8,&pcStack_a8);
    FUN_1001b4964(pcVar5,1);
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
    if (iVar19 == 0) {
      ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8;
    }
    pcStack_a8 = (code *)CONCAT44(pcStack_a8._4_4_,0xffa0a0a0);
    FUN_100651594(pcVar6,*ppuVar17,&pcStack_a8);
    uVar21 = FUN_1004e0150("PLAYER_PROFILE_SKILLTIER_EXPLANATION_DESCRIPTION",0);
    thunk_FUN_1004e439c(&pcStack_a8,uVar21);
    FUN_1006513c0(pcVar6,&pcStack_a8);
    if (pcStack_a0 != (code *)0x0) {
      operator_delete__(pcStack_a0);
    }
  }
  else {
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
    if (iVar19 == 0) {
      ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
    }
    FUN_100651594(pcVar7,*ppuVar17,&DAT_10115a168);
    uVar18 = *(uint *)(param_1 + 0x3d74);
    if ((uVar18 & 0x7f80) != 0x3300) {
      *(uint *)(param_1 + 0x3d74) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x3300;
      FUN_1000200a0(pcVar7);
    }
    FUN_100651700(pcVar7,3);
    uVar21 = FUN_1004e0150("PLAYER_PROFILE_TROPHY_EXPLANATION",0);
    FUN_1006513c0(pcVar7,uVar21);
  }
  FUN_100652cac(pcVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar18 = *(uint *)(param_1 + 0x4014);
  if ((uVar18 & 0x7f80) != 0x3300) {
    *(uint *)(param_1 + 0x4014) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x3300;
    FUN_1000200a0(pcVar9);
  }
  FUN_100652cdc(param_1 + 0x4618,"circle_button_question");
  uVar18 = *(uint *)(param_1 + 0x41cc);
  if ((uVar18 & 0x7f80) != 0x5f80) {
    *(uint *)(param_1 + 0x41cc) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x5f80;
    FUN_1000200a0(pcVar11);
  }
  FUN_1001b495c(0xbf800000,pcVar11);
  uStack_80 = DAT_101d91884;
  pcStack_a8 = thunk_FUN_10025bee4;
  pcStack_90 = (code *)0x0;
  uStack_88 = 0;
  pcStack_98 = (code *)0x0;
  pcStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x4150,&pcStack_a8);
  FUN_1001b4964(pcVar11,1);
  ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar19 == 0) {
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  uVar24 = 0x44160000;
  if (iVar19 == 0) {
    uVar24 = 0x43e10000;
  }
  FUN_100651038(pcVar13,*ppuVar17);
  FUN_100651708(uVar24,pcVar13,1);
  uVar18 = *(uint *)(param_1 + 0x4884);
  if ((uVar18 & 0x7f80) != 0x5900) {
    *(uint *)(param_1 + 0x4884) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x5900;
    FUN_1000200a0(pcVar13);
  }
  FUN_100652cac(pcVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_clock");
  uVar18 = *(uint *)(param_1 + 0x4a7c);
  if ((uVar18 & 0x7f80) != 0x5900) {
    *(uint *)(param_1 + 0x4a7c) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x5900;
    FUN_1000200a0(pcVar15);
  }
  if ((*(float *)(param_1 + 0x4a48) != 0.5) || (*(float *)(param_1 + 0x4a4c) != 0.5)) {
    *(undefined1 **)(param_1 + 0x4a48) = &DAT_3f0000003f000000;
    FUN_1000200a0(pcVar15);
  }
  ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar19 == 0) {
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(pcVar16,*ppuVar17);
  if ((*(uint *)(param_1 + 0x4b6c) & 0x7f80) != 0x3f80) {
    *(uint *)(param_1 + 0x4b6c) = *(uint *)(param_1 + 0x4b6c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(pcVar16);
  }
  if ((*(float *)(param_1 + 0x4b38) != 0.0) || (*(float *)(param_1 + 0x4b3c) != 0.5)) {
    *(long *)(param_1 + 0x4b38) = 0x3f00000000000000;
    FUN_1000200a0(pcVar16);
  }
  uVar24 = 0x44098000;
  if (iVar19 == 0) {
    uVar24 = 0x43c80000;
  }
  FUN_10065179c(uVar24,0,0x3f800000,pcVar16);
  uVar21 = FUN_1004e0150("PLAYER_PROFILE_RANKED_SKILL_TIER_DECAY_TIMER",0);
  FUN_1001cd23c(pcVar16,uVar21,0,0);
  *(uint *)(param_1 + 0x3f8c) = *(uint *)(param_1 + 0x3f8c) & 0xfffffffb;
  lVar22 = FUN_100327e00();
  pcStack_a0 = (code *)0x0;
  pcStack_90 = thunk_FUN_10025b448;
  pcStack_a8 = param_1;
  pcStack_98 = param_1;
  FUN_1000be5e4(lVar22 + 0x18,&pcStack_a8);
  return param_1;
}




void FUN_10025b12c(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_thunk_FUN_10025b12c_10147ac80;
  lVar2 = FUN_100327e00();
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 5;
    puVar4 = *(undefined8 **)(lVar2 + 0x20);
    do {
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_1000c044c((uint *)(lVar2 + 0x18),puVar4,puVar4 + 4);
        break;
      }
      lVar3 = lVar3 + -0x20;
      puVar4 = puVar4 + 4;
    } while (lVar3 != 0);
  }
  param_1[0x95d] = &PTR_FUN_10145eb78;
  param_1[0x974] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x985] != (void *)0x0) {
    operator_delete__((void *)param_1[0x985]);
    param_1[0x985] = 0;
    param_1[0x984] = 0;
  }
  FUN_100651068(param_1 + 0x95d);
  param_1[0x93f] = &PTR_FUN_1014a7108;
  param_1[0x956] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x959);
  FUN_10064e2bc(param_1 + 0x93f);
  FUN_10064e2bc(param_1 + 0x926);
  thunk_FUN_100651068(param_1 + 0x900);
  FUN_10064e2bc(param_1 + 0x8e7);
  param_1[0x829] = &PTR_FUN_10145f300;
  param_1[0x8c3] = &PTR_FUN_1014a7108;
  param_1[0x8da] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8dd);
  FUN_10064e2bc(param_1 + 0x8c3);
  param_1[0x8a5] = &PTR_FUN_1014a7108;
  param_1[0x8bc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8bf);
  FUN_10064e2bc(param_1 + 0x8a5);
  param_1[0x887] = &PTR_FUN_1014a7108;
  param_1[0x89e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8a1);
  FUN_10064e2bc(param_1 + 0x887);
  FUN_10064221c(param_1 + 0x876);
  FUN_10003bec8(param_1 + 0x829);
  FUN_10064e2bc(param_1 + 0x810);
  param_1[0x7f2] = &PTR_FUN_1014a7108;
  param_1[0x809] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x80c);
  FUN_10064e2bc(param_1 + 0x7f2);
  FUN_10064221c(param_1 + 0x7e1);
  thunk_FUN_1001cec4c(param_1 + 0x7c4);
  thunk_FUN_100651068(param_1 + 0x79e);
  thunk_FUN_100651068(param_1 + 0x778);
  param_1[0x6ba] = &PTR_FUN_10145f300;
  param_1[0x754] = &PTR_FUN_1014a7108;
  param_1[0x76b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x76e);
  FUN_10064e2bc(param_1 + 0x754);
  param_1[0x736] = &PTR_FUN_1014a7108;
  param_1[0x74d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x750);
  FUN_10064e2bc(param_1 + 0x736);
  param_1[0x718] = &PTR_FUN_1014a7108;
  param_1[0x72f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x732);
  FUN_10064e2bc(param_1 + 0x718);
  FUN_10064221c(param_1 + 0x707);
  FUN_10003bec8(param_1 + 0x6ba);
  FUN_10064221c(param_1 + 0x6a9);
  FUN_10064221c(param_1 + 0x698);
  FUN_10064221c(param_1 + 0x687);
  thunk_FUN_100530784(param_1 + 0x5e0);
  FUN_10064e2bc(param_1 + 0x5ac);
  FUN_1001c80b4(param_1 + 0x1bc);
  thunk_FUN_10064e2bc(param_1 + 0x1a5);
  thunk_FUN_1001c768c(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_1014a7108;
  param_1[0x30] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x33);
  FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_10025b12c(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_thunk_FUN_10025b12c_10147ac80;
  lVar2 = FUN_100327e00();
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 5;
    puVar4 = *(undefined8 **)(lVar2 + 0x20);
    do {
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_1000c044c((uint *)(lVar2 + 0x18),puVar4,puVar4 + 4);
        break;
      }
      lVar3 = lVar3 + -0x20;
      puVar4 = puVar4 + 4;
    } while (lVar3 != 0);
  }
  param_1[0x95d] = &PTR_FUN_10145eb78;
  param_1[0x974] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x985] != (void *)0x0) {
    operator_delete__((void *)param_1[0x985]);
    param_1[0x985] = 0;
    param_1[0x984] = 0;
  }
  FUN_100651068(param_1 + 0x95d);
  param_1[0x93f] = &PTR_FUN_1014a7108;
  param_1[0x956] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x959);
  FUN_10064e2bc(param_1 + 0x93f);
  FUN_10064e2bc(param_1 + 0x926);
  thunk_FUN_100651068(param_1 + 0x900);
  FUN_10064e2bc(param_1 + 0x8e7);
  param_1[0x829] = &PTR_FUN_10145f300;
  param_1[0x8c3] = &PTR_FUN_1014a7108;
  param_1[0x8da] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8dd);
  FUN_10064e2bc(param_1 + 0x8c3);
  param_1[0x8a5] = &PTR_FUN_1014a7108;
  param_1[0x8bc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8bf);
  FUN_10064e2bc(param_1 + 0x8a5);
  param_1[0x887] = &PTR_FUN_1014a7108;
  param_1[0x89e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8a1);
  FUN_10064e2bc(param_1 + 0x887);
  FUN_10064221c(param_1 + 0x876);
  FUN_10003bec8(param_1 + 0x829);
  FUN_10064e2bc(param_1 + 0x810);
  param_1[0x7f2] = &PTR_FUN_1014a7108;
  param_1[0x809] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x80c);
  FUN_10064e2bc(param_1 + 0x7f2);
  FUN_10064221c(param_1 + 0x7e1);
  thunk_FUN_1001cec4c(param_1 + 0x7c4);
  thunk_FUN_100651068(param_1 + 0x79e);
  thunk_FUN_100651068(param_1 + 0x778);
  param_1[0x6ba] = &PTR_FUN_10145f300;
  param_1[0x754] = &PTR_FUN_1014a7108;
  param_1[0x76b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x76e);
  FUN_10064e2bc(param_1 + 0x754);
  param_1[0x736] = &PTR_FUN_1014a7108;
  param_1[0x74d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x750);
  FUN_10064e2bc(param_1 + 0x736);
  param_1[0x718] = &PTR_FUN_1014a7108;
  param_1[0x72f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x732);
  FUN_10064e2bc(param_1 + 0x718);
  FUN_10064221c(param_1 + 0x707);
  FUN_10003bec8(param_1 + 0x6ba);
  FUN_10064221c(param_1 + 0x6a9);
  FUN_10064221c(param_1 + 0x698);
  FUN_10064221c(param_1 + 0x687);
  thunk_FUN_100530784(param_1 + 0x5e0);
  FUN_10064e2bc(param_1 + 0x5ac);
  FUN_1001c80b4(param_1 + 0x1bc);
  thunk_FUN_10064e2bc(param_1 + 0x1a5);
  thunk_FUN_1001c768c(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_1014a7108;
  param_1[0x30] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x33);
  FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10025b42c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10025b12c();
  operator_delete(pvVar1);
  return;
}




void FUN_10025b440(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc4) = param_2;
  FUN_10025b448();
  return;
}




void FUN_10025b448(long *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  ulong local_38;
  
  uVar3 = FUN_100327e00();
  lVar4 = FUN_100327f2c(uVar3,*(undefined4 *)((long)param_1 + 0xc4));
  piVar1 = (int *)(lVar4 + 4);
  if (*(char *)((long)param_1 + 0x4c4c) != '\0') {
    piVar1 = (int *)(lVar4 + 8);
  }
  fVar6 = (float)NEON_fminnm((float)*piVar1,0x41e80000);
  if (fVar6 <= -1.0) {
    fVar6 = -1.0;
  }
  fVar7 = *(float *)(lVar4 + 0xc);
  *(float *)(param_1 + 0x989) = fVar7;
  uVar2 = *(undefined4 *)(lVar4 + 4);
  if (fVar7 == 0.0 && (int)fVar6 == 0) {
    uVar2 = 0xffffffff;
  }
  FUN_1001c7990(param_1 + 0x37,uVar2);
  FUN_1001c6b50(*(float *)(param_1 + 0x989),*(undefined4 *)(lVar4 + 0x10),
                *(undefined4 *)(lVar4 + 0x14),*(undefined4 *)(lVar4 + 0x18),param_1 + 0x1bc,
                (int)fVar6);
  lVar4 = *(long *)(lVar4 + 0x28);
  if (0 < lVar4) {
    param_1[0x988] = lVar4;
    lVar5 = FUN_1004f1a74(0);
    local_38 = lVar4 - lVar5 & (lVar4 - lVar5 >> 0x3f ^ 0xffffffffffffffffU);
    FUN_1001cd374(param_1 + 0x95d,&local_38);
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_10025b53c(long param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_100642324(param_1 + 0x2f00);
    if (*(float *)(param_1 + 0x2f44) != 0.0) {
      *(undefined4 *)(param_1 + 0x2f44) = 0;
      FUN_1000200a0(param_1 + 0x2f00);
      return;
    }
  }
  return;
}




void FUN_10025b58c(long param_1)

{
  if (0 < *(long *)(param_1 + 0x4c40)) {
    FUN_1001cd27c(param_1 + 0x4ae8);
    FUN_10025b5d0(param_1);
    return;
  }
  return;
}




void FUN_10025b5d0(long param_1)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_38;
  
  lVar4 = *(long *)(param_1 + 0x4c40);
  if (lVar4 < 1) {
    return;
  }
  puVar1 = (uint *)(param_1 + 0x49b4);
  lVar2 = FUN_1004f1a74(0);
  uVar5 = lVar4 - lVar2;
  local_38 = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
  FUN_1001cd374(param_1 + 0x4ae8,&local_38);
  if ((*(long *)(param_1 + 0x4c40) < 1) || (0 < (long)uVar5)) {
    if (0x545ff < (long)uVar5) {
      FUN_1001c6dc8(param_1 + 0xde0,0);
      *(uint *)(param_1 + 0x3f8c) = *(uint *)(param_1 + 0x3f8c) & 0xfffffffb;
      return;
    }
    *puVar1 = *puVar1 | 4;
    *(uint *)(param_1 + 0x3f8c) = *(uint *)(param_1 + 0x3f8c) | 4;
    uVar3 = FUN_1004e0150("PLAYER_PROFILE_RANKED_SKILL_TIER_DECAY_WARNING",0);
    FUN_1006513c0(param_1 + 0x4800,uVar3);
    uVar3 = 0;
  }
  else {
    *puVar1 = *puVar1 & 0xfffffffb;
    *(uint *)(param_1 + 0x3f8c) = *(uint *)(param_1 + 0x3f8c) | 4;
    uVar3 = FUN_1004e0150("PLAYER_PROFILE_RANKED_SKILL_TIER_DECAY_ACTIVE",0);
    FUN_1006513c0(param_1 + 0x4800,uVar3);
    if (*(char *)(param_1 + 0x2d5d) != '\0') goto LAB_10025b6f4;
    lVar4 = FUN_10015d3ec();
    FUN_100169cec(lVar4 + 0x18);
    uVar3 = 1;
  }
  FUN_1001c6dc8(param_1 + 0xde0,uVar3);
LAB_10025b6f4:
  FUN_10025baf0(param_1);
  return;
}




void FUN_10025b72c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 *local_88;
  
  uVar11 = (**(code **)(*param_3 + 0x48))();
  iVar4 = FUN_100126c88();
  FUN_10064e47c(uVar11,param_2 * 0.5,param_3 + 0x19);
  FUN_10064e5ec(0,0,param_3 + 0x19,6,param_3,6);
  fVar10 = 1000.0;
  if (iVar4 == 0) {
    fVar10 = 800.0;
  }
  fVar12 = 50.0;
  fVar9 = fVar12;
  if (iVar4 == 0) {
    fVar9 = 100.0;
  }
  fVar13 = (float)uVar11 * 0.5;
  plVar1 = param_3 + 0x37;
  FUN_1001c7e04(plVar1);
  fVar9 = fVar9 + fVar12 * 0.5;
  fVar12 = *(float *)(param_3 + 0x6a0);
  bVar3 = false;
  if ((fVar12 == fVar13) && (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x3504)) && !NAN(fVar9))
     ) {
    bVar3 = *(float *)((long)param_3 + 0x3504) == fVar9;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0x6a0) = fVar13;
    *(float *)((long)param_3 + 0x3504) = fVar9;
    FUN_1000200a0(param_3 + 0x698);
  }
  local_88 = &DAT_3f0000003f000000;
  (**(code **)(param_3[0x698] + 0x28))(param_3 + 0x698,&local_88);
  if (*(char *)((long)param_3 + 0x4c4c) == '\0') {
    uVar5 = FUN_100327e00();
    lVar6 = FUN_100327f2c(uVar5,*(undefined4 *)((long)param_3 + 0xc4));
    fVar14 = fVar13 - fVar10 * 0.5;
    fVar15 = *(float *)((long)param_3 + 0x3504);
    FUN_1001c7e04(plVar1);
    plVar2 = param_3 + 0x1bc;
    fVar9 = fVar12;
    FUN_10064258c(plVar2);
    fVar15 = fVar15 + (fVar9 + fVar12) * 0.5;
    fVar9 = *(float *)(lVar6 + 0x1c);
    if (*(float *)(param_3 + 0x989) <= 0.0) {
      fVar12 = *(float *)(lVar6 + 0x20);
      iVar7 = 1000;
      iVar8 = 0;
    }
    else {
      if (fVar9 <= 0.0) {
        iVar7 = 1000;
      }
      else {
        iVar7 = (int)(fVar9 / *(float *)(param_3 + 0x989));
      }
      iVar8 = (int)fVar9;
      fVar12 = *(float *)(lVar6 + 0x20);
    }
    FUN_1001c6480(fVar10,0x42580000,plVar2,0,iVar7,iVar8,(int)fVar9,(int)fVar12,0);
    bVar3 = false;
    if ((*(float *)(param_3 + 0x1c4) == fVar14) &&
       (bVar3 = false, !NAN(*(float *)((long)param_3 + 0xe24)) && !NAN(fVar15))) {
      bVar3 = *(float *)((long)param_3 + 0xe24) == fVar15;
    }
    if (!bVar3) {
      *(float *)(param_3 + 0x1c4) = fVar14;
      *(float *)((long)param_3 + 0xe24) = fVar15;
      FUN_1000200a0(plVar2);
    }
    local_88 = &DAT_3f0000003f000000;
    (**(code **)(param_3[0x1bc] + 0x28))(plVar2,&local_88);
    fVar14 = fVar10 + 78.0 + fVar14;
    bVar3 = false;
    if ((*(float *)(param_3 + 0x6c2) == fVar14) &&
       (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x3614)) && !NAN(fVar15))) {
      bVar3 = *(float *)((long)param_3 + 0x3614) == fVar15;
    }
    if (!bVar3) {
      *(float *)(param_3 + 0x6c2) = fVar14;
      *(float *)((long)param_3 + 0x3614) = fVar15;
      FUN_1000200a0(param_3 + 0x6ba);
    }
    local_88 = &DAT_3f0000003f000000;
    (**(code **)(param_3[0x6ba] + 0x28))(param_3 + 0x6ba,&local_88);
    fVar10 = 1690.0;
    if (iVar4 == 0) {
      fVar10 = 1450.0;
    }
    FUN_100651708(fVar10,param_3 + 0x778,1);
    fVar13 = fVar13 + fVar10 * -0.5;
    fVar15 = fVar15 + 128.0;
    bVar3 = false;
    if ((*(float *)(param_3 + 0x780) == fVar13) &&
       (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x3c04)) && !NAN(fVar15))) {
      bVar3 = *(float *)((long)param_3 + 0x3c04) == fVar15;
    }
    if (!bVar3) {
      *(float *)(param_3 + 0x780) = fVar13;
      *(float *)((long)param_3 + 0x3c04) = fVar15;
      FUN_1000200a0(param_3 + 0x778);
    }
  }
  else {
    plVar2 = param_3 + 0x79e;
    FUN_100651708((float)uVar11 * 0.8,plVar2,1);
    fVar10 = param_2 * 0.875;
    bVar3 = false;
    if ((*(float *)(param_3 + 0x7a6) == fVar13) &&
       (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x3d34)) && !NAN(fVar10))) {
      bVar3 = *(float *)((long)param_3 + 0x3d34) == fVar10;
    }
    if (!bVar3) {
      *(float *)(param_3 + 0x7a6) = fVar13;
      *(float *)((long)param_3 + 0x3d34) = fVar10;
      FUN_1000200a0(plVar2);
    }
    local_88 = &DAT_3f0000003f000000;
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_88);
  }
  param_2 = param_2 - *(float *)((long)param_3 + 0x2da4);
  FUN_10064e47c(uVar11,param_2,param_3 + 0x5ac);
  FUN_100642888(param_3 + 0x687,0,0,1,1);
  FUN_10053093c(uVar11,param_2 + 70.0,param_3 + 0x5e0);
  FUN_1001c77a8(plVar1);
  FUN_10025baf0(param_3);
  return;
}




void FUN_10025baf0(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_68 [2];
  undefined1 auStack_58 [4];
  float local_54;
  
  FUN_100641464(&local_54,auStack_58);
  fVar6 = DAT_101d236ac;
  FUN_10064259c(param_3 + 0x4148);
  fVar4 = param_2 * 0.5 + 8.0;
  fVar5 = *(float *)(param_3 + 0x418c);
  if (fVar5 != fVar4) {
    *(float *)(param_3 + 0x418c) = fVar4;
    FUN_1000200a0(param_3 + 0x4148);
  }
  lVar1 = param_3 + 0x4ae8;
  FUN_100651184(lVar1);
  fVar4 = *(float *)(param_3 + 0x4a3c);
  if (fVar4 != fVar5 * 0.5) {
    *(float *)(param_3 + 0x4a3c) = fVar5 * 0.5;
    FUN_1000200a0(param_3 + 0x49f8);
  }
  FUN_100651184(lVar1);
  if (*(float *)(param_3 + 0x4b2c) != fVar4 * 0.5) {
    *(float *)(param_3 + 0x4b2c) = fVar4 * 0.5;
    FUN_1000200a0(lVar1);
  }
  lVar1 = param_3 + 0x4930;
  fVar4 = 0.0;
  FUN_10064fc74(0,0,0x41000000,local_68);
  FUN_100650064(lVar1,local_68);
  (**(code **)(*(long *)(param_3 + 0x4930) + 0x90))(lVar1);
  FUN_100642888(lVar1,1,0,1,1);
  if (*(float *)(param_3 + 0x4974) != fVar4 * 0.5) {
    *(float *)(param_3 + 0x4974) = fVar4 * 0.5;
    FUN_1000200a0(lVar1);
  }
  lVar1 = param_3 + 0x4738;
  FUN_10064fc74(0,0,0x41a00000,local_68);
  FUN_100650064(lVar1,local_68);
  (**(code **)(*(long *)(param_3 + 0x4738) + 0x90))(lVar1);
  if (*(float *)(param_3 + 0x477c) != 16.0) {
    *(undefined4 *)(param_3 + 0x477c) = 0x41800000;
    FUN_1000200a0(lVar1);
  }
  lVar1 = param_3 + 0x4080;
  FUN_10064fc74(0x41000000,0,0x41000000,local_68);
  FUN_100650064(lVar1,local_68);
  (**(code **)(*(long *)(param_3 + 0x4080) + 0x90))(lVar1);
  lVar2 = param_3 + 0x3f90;
  fVar5 = (float)FUN_1006425d0(lVar1,1,0,1,1);
  fVar4 = 76.0;
  FUN_1006425d0(lVar1,1,0,1,1);
  fVar4 = fVar4 + 16.0;
  FUN_10064e47c(fVar5 + 76.0,lVar2);
  plVar3 = (long *)(param_3 + 0x3f08);
  fVar5 = (float)FUN_100652e60(lVar2);
  fVar5 = local_54 - (fVar6 + fVar5);
  fVar6 = *(float *)(param_3 + 0xe24);
  FUN_100652e60(lVar2);
  fVar6 = (fVar6 - fVar4) + -200.0;
  if ((*(float *)(param_3 + 0x3f48) != fVar5) || (*(float *)(param_3 + 0x3f4c) != fVar6)) {
    *(float *)(param_3 + 0x3f48) = fVar5;
    *(float *)(param_3 + 0x3f4c) = fVar6;
    FUN_1000200a0(plVar3);
  }
  local_68[0] = 0;
  (**(code **)(*plVar3 + 0x28))(plVar3,local_68);
  return;
}




void FUN_10025bda0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  
  FUN_1006513c0(param_1 + 0x3bc0);
  fVar2 = 0.0;
  uVar3 = 0;
  if (param_3 == 0) {
    uVar3 = 0x3f800000;
  }
  FUN_100651184(param_1 + 0x3bc0);
  uVar1 = FUN_1006408f4(0,-fVar2,uVar3,FUN_1000917d4);
  FUN_100642324(param_1 + 0x2f00);
  FUN_100642b14(param_1 + 0x2f00,uVar1);
  return;
}




void FUN_10025be2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar1 = FUN_1004e0150("PLAYER_PROFILE_SKILLTIER_EXPLANATION_DESCRIPTION",0);
  thunk_FUN_1004e439c(auStack_30,uVar1);
  FUN_1004e3120(auStack_40,"[SEASON_NAME]");
  FUN_1000f0f78(auStack_50,0,0,0);
  FUN_1004e3bc4(auStack_30,0,auStack_40,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_10025bda0(param_1,auStack_30,0);
  FUN_100644b14(param_2);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_10025bee4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *local_118;
  void *local_110;
  undefined7 local_108;
  char cStack_101;
  char local_f1;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined **local_e0;
  undefined1 auStack_d8 [40];
  long local_b0;
  undefined8 local_90;
  void *local_88;
  void *local_80;
  char local_69;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_38;
  
  thunk_FUN_1001cd434(&local_e0);
  uVar2 = FUN_1004e0150("PLAYER_PROFILE_RANKED_SKILL_TIER_DECAY_TOOLTIP",0);
  thunk_FUN_1004e439c(&local_118,uVar2);
  FUN_10003330c(&local_108,&DAT_101d91198);
  local_f0 = 1;
  local_ec = 0x41a00000;
  FUN_10003c048(auStack_d8,&local_118);
  if (local_f1 < '\0') {
    operator_delete((void *)CONCAT17(cStack_101,local_108));
  }
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
  }
  local_b0 = param_1 + 0x4148;
  local_38 = 2;
  local_50 = 0x3f666666;
  iVar1 = FUN_100126c88();
  local_4c = 0x44af0000;
  if (iVar1 == 0) {
    local_4c = 0x447a0000;
  }
  uVar2 = FUN_10002f320();
  FUN_10001549c(&local_118,"skillTierDecayInfo");
  FUN_100030e74(uVar2,&local_118,&local_e0);
  if (cStack_101 < '\0') {
    operator_delete(local_118);
  }
  local_e0 = &PTR_FUN_1014666e0;
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_d8,1);
  return;
}




void thunk_FUN_10025b448(long *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  ulong uStack_38;
  
  uVar3 = FUN_100327e00();
  lVar4 = FUN_100327f2c(uVar3,*(undefined4 *)((long)param_1 + 0xc4));
  piVar1 = (int *)(lVar4 + 4);
  if (*(char *)((long)param_1 + 0x4c4c) != '\0') {
    piVar1 = (int *)(lVar4 + 8);
  }
  fVar6 = (float)NEON_fminnm((float)*piVar1,0x41e80000);
  if (fVar6 <= -1.0) {
    fVar6 = -1.0;
  }
  fVar7 = *(float *)(lVar4 + 0xc);
  *(float *)(param_1 + 0x989) = fVar7;
  uVar2 = *(undefined4 *)(lVar4 + 4);
  if (fVar7 == 0.0 && (int)fVar6 == 0) {
    uVar2 = 0xffffffff;
  }
  FUN_1001c7990(param_1 + 0x37,uVar2);
  FUN_1001c6b50(*(float *)(param_1 + 0x989),*(undefined4 *)(lVar4 + 0x10),
                *(undefined4 *)(lVar4 + 0x14),*(undefined4 *)(lVar4 + 0x18),param_1 + 0x1bc,
                (int)fVar6);
  lVar4 = *(long *)(lVar4 + 0x28);
  if (0 < lVar4) {
    param_1[0x988] = lVar4;
    lVar5 = FUN_1004f1a74(0);
    uStack_38 = lVar4 - lVar5 & (lVar4 - lVar5 >> 0x3f ^ 0xffffffffffffffffU);
    FUN_1001cd374(param_1 + 0x95d,&uStack_38);
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




long * FUN_10025c044(undefined1 param_1 [16],undefined4 param_2,long *param_3)

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
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  undefined *puVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 local_2f0;
  long *plStack_2e8;
  long local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  void *pvStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined1 auStack_270 [296];
  undefined8 local_148;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  lVar20 = FUN_1006543ec();
  FUN_10014f4a0(lVar20 + 0x1a0);
  FUN_1004f0a20(param_3 + 0x37);
  *param_3 = (long)&PTR_thunk_FUN_10025cfb8_10147ade8;
  param_3[0x34] = (long)&PTR_FUN_10147af98;
  param_3[0x37] = (long)&PTR_FUN_10147b330;
  plVar1 = param_3 + 0x3a;
  thunk_FUN_1002268e4(plVar1);
  plVar2 = param_3 + 0xfc1;
  FUN_1006421a8(plVar2);
  param_3[0xfc1] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_3 + 0xfd2;
  thunk_FUN_10064f204(plVar3);
  thunk_FUN_1001c81d8();
  plVar4 = param_3 + 0x1158;
  thunk_FUN_100255b9c();
  plVar5 = param_3 + 0x2e11;
  thunk_FUN_10025a800(plVar5,0);
  plVar6 = param_3 + 0x379b;
  thunk_FUN_10025a800(plVar6,0);
  plVar7 = param_3 + 0x4125;
  thunk_FUN_100655644(plVar7);
  plVar8 = param_3 + 0x4150;
  thunk_FUN_1002ecd94(plVar8,0);
  plVar9 = param_3 + 0x42ca;
  thunk_FUN_100650e64();
  plVar10 = param_3 + 0x42f0;
  thunk_FUN_100650e64();
  thunk_FUN_1001ceb64(param_3 + 0x4316,0);
  plVar11 = param_3 + 0x4333;
  thunk_FUN_100655644(plVar11);
  plVar12 = param_3 + 0x435e;
  thunk_FUN_1002ecd94(plVar12,0);
  plVar13 = param_3 + 0x44d8;
  thunk_FUN_100650e64(plVar13);
  plVar14 = param_3 + 0x44fe;
  thunk_FUN_10018afc8(0x3dcccccd,plVar14,0,3);
  plVar15 = param_3 + 0x4698;
  thunk_FUN_10018ceb0(plVar15);
  plVar16 = param_3 + 0x4bbe;
  thunk_FUN_100650e64();
  FUN_1004e313c(param_3 + 0x4be6);
  FUN_1004e313c(param_3 + 0x4be8);
  *(undefined1 *)(param_3 + 0x4bea) = 1;
  *(undefined4 *)((long)param_3 + 0x25f54) = 0;
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_10064f31c(plVar3,plVar4,1);
  FUN_10064f31c(plVar3,plVar5,1);
  FUN_10064f31c(plVar3,plVar6,1);
  FUN_10064f31c(plVar3,param_3 + 0xffe,1);
  FUN_10064f31c(plVar3,plVar7,1);
  FUN_100655930(plVar7,plVar9,1);
  FUN_100655930(plVar7,plVar10,1);
  FUN_100655930(plVar7,plVar8,1);
  FUN_10064f31c(plVar3,plVar11,1);
  FUN_100655930(plVar11,plVar12,1);
  FUN_100655930(plVar11,plVar13,1);
  FUN_100655930(plVar11,plVar14,1);
  FUN_10064f31c(plVar3,plVar16,1);
  FUN_10064f31c(plVar3,plVar15,1);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x4316,1);
  FUN_100654488(param_3,1);
  *(uint *)((long)param_3 + 0x84) = *(uint *)((long)param_3 + 0x84) & 0xfffffffb;
  param_3[0xffb] = (long)plVar4;
  param_3[0xffc] = (long)plVar5;
  param_3[0xffd] = (long)plVar6;
  local_88 = 0;
  uStack_80 = 0;
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&local_88,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_5V5",0);
  FUN_10010b098(&local_88,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_3V3",0);
  FUN_10010b098(&local_88,uVar21);
  FUN_100269e20(0x3e99999a,plVar4,1,4,1);
  local_2c8._0_4_ = FUN_100644a94("UI::EVENT_RENAME_PLAYER_HANDLE");
  local_2f0 = (undefined **)FUN_10025cd14;
  plVar2 = param_3 + 0x1159;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&local_2f0);
  local_2c8._0_4_ = DAT_101dbd458;
  local_2f0 = (undefined **)FUN_10025cd4c;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&local_2f0);
  local_2c8 = CONCAT44(local_2c8._4_4_,DAT_101dbd484);
  local_2f0 = (undefined **)FUN_10025cd4c;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&local_2f0);
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x216d4) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x216d4) = *(uint *)((long)param_3 + 0x216d4) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar9);
  }
  uVar21 = FUN_1004e0150("MAIN_PROFILE_LOGOUT",0);
  FUN_1006513c0(plVar9,uVar21);
  if ((*(float *)(param_3 + 0x42d3) != 0.8) || (*(float *)((long)param_3 + 0x2169c) != 0.8)) {
    param_3[0x42d3] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar9);
  }
  FUN_100651594(plVar10,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x21804) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x21804) = *(uint *)((long)param_3 + 0x21804) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar10);
  }
  if ((*(float *)(param_3 + 0x42f9) != 0.8) || (*(float *)((long)param_3 + 0x217cc) != 0.8)) {
    param_3[0x42f9] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar10);
  }
  uVar21 = FUN_10016aa7c();
  FUN_1006513c0(plVar10,uVar21);
  FUN_1002eb970(plVar8,0);
  puVar18 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&local_2f0,"icon_exit_app");
  FUN_1002ece5c(plVar8,puVar18,&local_2f0,&DAT_101d91198);
  if (local_2e0 < 0) {
    operator_delete(local_2f0);
  }
  uVar22 = *(uint *)((long)param_3 + 0x20b04);
  if ((uVar22 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x20b04) = uVar22 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar8);
  }
  FUN_1005300a8(0,plVar8);
  uVar23 = FUN_100652e60(param_3 + 0x4288);
  local_2f0 = (undefined **)CONCAT44(param_2,uVar23);
  FUN_10064e48c(plVar8,&local_2f0);
  uVar23 = DAT_101d91884;
  local_2c8 = CONCAT44(local_2c8._4_4_,DAT_101d91884);
  local_2f0 = (undefined **)thunk_FUN_10025e0c4;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x4151,&local_2f0);
  iVar19 = FUN_100131228();
  uVar22 = 4;
  if (iVar19 == 0) {
    uVar22 = 0;
  }
  *(uint *)((long)param_3 + 0x21a1c) = *(uint *)((long)param_3 + 0x21a1c) & 0xfffffffb | uVar22;
  FUN_1002eb970(plVar12,0);
  puVar18 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&local_2f0,"icon_video_capture");
  FUN_1002ece5c(plVar12,puVar18,&local_2f0,&DAT_101d91198);
  if (local_2e0 < 0) {
    operator_delete(local_2f0);
  }
  if ((*(uint *)((long)param_3 + 0x21b74) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x21b74) = *(uint *)((long)param_3 + 0x21b74) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar12);
  }
  FUN_1005300a8(0,plVar12);
  uVar24 = FUN_100652e60(param_3 + 0x4496);
  local_2f0 = (undefined **)CONCAT44(param_2,uVar24);
  FUN_10064e48c(plVar12,&local_2f0);
  local_2c8 = CONCAT44(local_2c8._4_4_,uVar23);
  local_2f0 = (undefined **)thunk_FUN_10025e16c;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x435f,&local_2f0);
  FUN_100651594(plVar13,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x22744) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x22744) = *(uint *)((long)param_3 + 0x22744) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar13);
  }
  iVar19 = FUN_10013128c();
  pcVar17 = "MENU_PROFILE_RECORD_OR_STREAM_LABEL";
  if (iVar19 == 0) {
    pcVar17 = "MENU_PROFILE_RECORD_VIDEO_LABEL";
  }
  uVar21 = FUN_1004e0150(pcVar17,0);
  FUN_1006513c0(plVar13,uVar21);
  if ((*(float *)(param_3 + 0x44e1) != 0.8) || (*(float *)((long)param_3 + 0x2270c) != 0.8)) {
    param_3[0x44e1] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar13);
  }
  *(uint *)((long)param_3 + 0x22874) = *(uint *)((long)param_3 + 0x22874) & 0xfffffffb;
  uVar21 = FUN_1004e0150("MENU_PROFILE_RECORD_OPTION_LABEL",0);
  FUN_10018b1ec(0x3dcccccd,plVar14,0,uVar21,&DAT_101d91198,1,1);
  uVar21 = FUN_1004e0150("MENU_PROFILE_STREAM_OPTION_LABEL",0);
  FUN_10018b1ec(0x3dcccccd,plVar14,1,uVar21,&DAT_101d91198,1,1);
  FUN_10018b614(plVar14,2);
  uVar24 = FUN_100644a94("EVENT_SELECT_CONTEXT_MENU_ITEM");
  local_2c8 = CONCAT44(local_2c8._4_4_,uVar24);
  local_2f0 = (undefined **)FUN_10025cd68;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x44ff,&local_2f0);
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_NA",0);
  FUN_10010b098(&local_98,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_SA",0);
  FUN_10010b098(&local_98,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_EA",0);
  FUN_10010b098(&local_98,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_EU",0);
  FUN_10010b098(&local_98,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_SEA",0);
  FUN_10010b098(&local_98,uVar21);
  FUN_10001549c(&local_2f0,"NA");
  FUN_10001617c(&local_a8,&local_2f0);
  if (local_2e0 < 0) {
    operator_delete(local_2f0);
  }
  FUN_10001549c(&local_2f0,"SA");
  FUN_10001617c(&local_a8,&local_2f0);
  if (local_2e0 < 0) {
    operator_delete(local_2f0);
  }
  FUN_10001549c(&local_2f0,"EA");
  FUN_10001617c(&local_a8,&local_2f0);
  if (local_2e0 < 0) {
    operator_delete(local_2f0);
  }
  FUN_10001549c(&local_2f0,"EU");
  FUN_10001617c(&local_a8,&local_2f0);
  if (local_2e0 < 0) {
    operator_delete(local_2f0);
  }
  FUN_10001549c(&local_2f0,"SEA");
  FUN_10001617c(&local_a8,&local_2f0);
  if (local_2e0 < 0) {
    operator_delete(local_2f0);
  }
  FUN_10018d7d4(0x43160000,0x43c80000,0,0x3f800000,0x3f8ccccd,plVar15,&local_98,&local_a8,1,1,0);
  *(uint *)((long)param_3 + 0x23544) = *(uint *)((long)param_3 + 0x23544) | 4;
  FUN_10018ef5c(0x3f19999a,0x3f4ccccd,plVar15);
  FUN_10018efac(plVar15,0);
  FUN_10018efa4(plVar15,0);
  *(uint *)((long)param_3 + 0x25044) = *(uint *)((long)param_3 + 0x25044) & 0xfffffffb;
  FUN_100651594(plVar16,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x25e74) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x25e74) = *(uint *)((long)param_3 + 0x25e74) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar16);
  }
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_REGION",0);
  FUN_1006513c0(plVar16,uVar21);
  FUN_10025cd70(param_3,plVar1,0,1);
  local_2c8 = CONCAT44(local_2c8._4_4_,uVar23);
  local_2f0 = (undefined **)FUN_10025cfa0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x52,&local_2f0);
  *(uint *)((long)param_3 + 0x254) = *(uint *)((long)param_3 + 0x254) & 0xfffffffb;
  FUN_1004e18bc(&DAT_101d234d8,param_3,0x9d2c9b16,thunk_FUN_10025d244,0);
  iVar19 = FUN_100131560();
  if (iVar19 != 0) {
    FUN_1004f1580(&local_2f0);
    local_2f0 = &PTR_FUN_10145b860;
    uStack_2c0 = 0;
    local_2c8 = 0;
    uStack_2b0 = 0;
    local_2b8 = 0;
    pvStack_2a0 = (void *)0x0;
    local_2a8 = 0;
    uStack_290 = 0;
    local_298 = 0;
    uStack_280 = 0;
    local_288 = 0;
    local_278 = 0;
    FUN_100168aa8(auStack_270);
    local_148 = 0xffffffffffffffff;
    (**(code **)(*param_3 + 0x178))(param_3,&local_2f0);
    local_2f0 = &PTR_FUN_10145b860;
    FUN_10015613c(auStack_270);
    FUN_100156080(&local_298,1);
    if (pvStack_2a0 != (void *)0x0) {
      operator_delete__(pvStack_2a0);
      local_2a8 = 0;
      pvStack_2a0 = (void *)0x0;
    }
    FUN_100155f24(&local_2b8,1);
    FUN_100155eac(&local_2c8,1);
    FUN_1004f15a8(&local_2f0);
  }
  FUN_10001629c(&local_a8,1);
  FUN_10010b1a8(&local_98,1);
  FUN_10010b1a8(&local_88,1);
  return param_3;
}




void FUN_10025cd14(long param_1)

{
  FUN_100227f64(param_1 + 0x1d0);
  FUN_10025cd70(param_1,param_1 + 0x1d0,1,0);
  return;
}




void FUN_10025cd4c(long param_1)

{
  FUN_10018e440(param_1 + 0x234c0,0);
  return;
}




void thunk_FUN_10025e0c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_10015d3ec();
  if (*(int *)(lVar1 + 0x55c8) != 0) {
    uVar2 = FUN_1004e0150("MENU_LPQ_NOTIFICATION_TITLE",0);
    uVar3 = FUN_1004e0150("MENU_ACCOUNT_CANNOT_LOGOUT_LPQ",0);
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(uVar2,uVar3,uVar4,0,0);
    return;
  }
  FUN_100530068(param_1 + 0x20a80,0);
  FUN_100102abc(0);
  FUN_10015d3ec();
  FUN_1001633f4();
  FUN_100220d08();
  return;
}




void thunk_FUN_10025e16c(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100131228();
  if (iVar1 != 0) {
    FUN_100102bcc();
    iVar1 = FUN_10013128c();
    if (iVar1 == 0) {
      iVar1 = FUN_100131268();
      if (iVar1 != 0) {
        FUN_10052bb64(0,&DAT_101d237c8);
        return;
      }
    }
    else {
      *(uint *)(param_1 + 0x22874) = *(uint *)(param_1 + 0x22874) ^ 4;
    }
  }
  return;
}




void FUN_10025cd68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10025e1d4(param_1,param_4);
  return;
}




void FUN_10025cd70(long param_1,long param_2,uint param_3,int param_4)

{
  ushort *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined8 uVar6;
  ushort uVar7;
  float fVar8;
  float local_68;
  undefined1 auStack_64 [4];
  
  FUN_100641464(auStack_64,&local_68);
  if (param_4 == 0) {
    if (param_3 != (*(uint *)(param_2 + 0x84) & 4) >> 2) {
      lVar3 = param_2;
      if (param_3 == 0) {
        lVar3 = param_1 + 0x7e08;
      }
      uVar6 = FUN_1006408f4(0,0,0x3f4ccccd,FUN_1000917d4);
      FUN_100642324(lVar3);
      *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) | 4;
      FUN_100642b14(lVar3,uVar6);
      lVar3 = param_1 + 0x7e08;
      if (param_3 == 0) {
        lVar3 = param_2;
      }
      if (param_3 == 0) {
        local_68 = -local_68;
      }
      uVar6 = FUN_1006408f4(0,local_68,0x3f4ccccd,FUN_1000917d4);
      lVar4 = DAT_101dbd2f8;
      uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
      if ((ulong)uVar7 != 0xffff) {
        puVar1 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
        if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar1;
        }
        *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_10063ee9c(puVar1);
        *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5338;
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
      FUN_100642324(lVar3);
      FUN_100642b7c(lVar3,uVar6);
    }
  }
  else {
    bVar5 = param_3 == 0;
    uVar2 = 4;
    if (bVar5) {
      uVar2 = 0;
    }
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xfffffffb | uVar2;
    uVar2 = 0;
    if (bVar5) {
      uVar2 = 4;
    }
    *(uint *)(param_1 + 0x7e8c) = *(uint *)(param_1 + 0x7e8c) & 0xfffffffb | uVar2;
    fVar8 = 0.0;
    if (bVar5) {
      fVar8 = -local_68;
    }
    if (*(float *)(param_2 + 0x44) != fVar8) {
      *(float *)(param_2 + 0x44) = fVar8;
      FUN_1000200a0(param_2);
    }
    if (param_3 == 0) {
      local_68 = 0.0;
    }
    if (*(float *)(param_1 + 0x7e4c) != local_68) {
      *(float *)(param_1 + 0x7e4c) = local_68;
      FUN_1000200a0(param_1 + 0x7e08);
    }
  }
  if ((param_3 & 1) == 0) {
    FUN_1002583c0(param_1 + 0x8ac0);
    FUN_10025dacc(param_1,0);
  }
  return;
}




void FUN_10025cfa0(long param_1)

{
  FUN_10025cd70(param_1,param_1 + 0x1d0,0,0);
  return;
}




void thunk_FUN_10025d244(void)

{
  FUN_10025d244();
  return;
}




long * thunk_FUN_10025c044(undefined1 param_1 [16],undefined4 param_2,long *param_3)

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
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  undefined *puVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uStack_2f0;
  long *plStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  void *pvStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [296];
  undefined8 uStack_148;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar20 = FUN_1006543ec();
  FUN_10014f4a0(lVar20 + 0x1a0);
  FUN_1004f0a20(param_3 + 0x37);
  *param_3 = (long)&PTR_thunk_FUN_10025cfb8_10147ade8;
  param_3[0x34] = (long)&PTR_FUN_10147af98;
  param_3[0x37] = (long)&PTR_FUN_10147b330;
  plVar1 = param_3 + 0x3a;
  thunk_FUN_1002268e4(plVar1);
  plVar2 = param_3 + 0xfc1;
  FUN_1006421a8(plVar2);
  param_3[0xfc1] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_3 + 0xfd2;
  thunk_FUN_10064f204(plVar3);
  thunk_FUN_1001c81d8();
  plVar4 = param_3 + 0x1158;
  thunk_FUN_100255b9c();
  plVar5 = param_3 + 0x2e11;
  thunk_FUN_10025a800(plVar5,0);
  plVar6 = param_3 + 0x379b;
  thunk_FUN_10025a800(plVar6,0);
  plVar7 = param_3 + 0x4125;
  thunk_FUN_100655644(plVar7);
  plVar8 = param_3 + 0x4150;
  thunk_FUN_1002ecd94(plVar8,0);
  plVar9 = param_3 + 0x42ca;
  thunk_FUN_100650e64();
  plVar10 = param_3 + 0x42f0;
  thunk_FUN_100650e64();
  thunk_FUN_1001ceb64(param_3 + 0x4316,0);
  plVar11 = param_3 + 0x4333;
  thunk_FUN_100655644(plVar11);
  plVar12 = param_3 + 0x435e;
  thunk_FUN_1002ecd94(plVar12,0);
  plVar13 = param_3 + 0x44d8;
  thunk_FUN_100650e64(plVar13);
  plVar14 = param_3 + 0x44fe;
  thunk_FUN_10018afc8(0x3dcccccd,plVar14,0,3);
  plVar15 = param_3 + 0x4698;
  thunk_FUN_10018ceb0(plVar15);
  plVar16 = param_3 + 0x4bbe;
  thunk_FUN_100650e64();
  FUN_1004e313c(param_3 + 0x4be6);
  FUN_1004e313c(param_3 + 0x4be8);
  *(undefined1 *)(param_3 + 0x4bea) = 1;
  *(undefined4 *)((long)param_3 + 0x25f54) = 0;
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_10064f31c(plVar3,plVar4,1);
  FUN_10064f31c(plVar3,plVar5,1);
  FUN_10064f31c(plVar3,plVar6,1);
  FUN_10064f31c(plVar3,param_3 + 0xffe,1);
  FUN_10064f31c(plVar3,plVar7,1);
  FUN_100655930(plVar7,plVar9,1);
  FUN_100655930(plVar7,plVar10,1);
  FUN_100655930(plVar7,plVar8,1);
  FUN_10064f31c(plVar3,plVar11,1);
  FUN_100655930(plVar11,plVar12,1);
  FUN_100655930(plVar11,plVar13,1);
  FUN_100655930(plVar11,plVar14,1);
  FUN_10064f31c(plVar3,plVar16,1);
  FUN_10064f31c(plVar3,plVar15,1);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x4316,1);
  FUN_100654488(param_3,1);
  *(uint *)((long)param_3 + 0x84) = *(uint *)((long)param_3 + 0x84) & 0xfffffffb;
  param_3[0xffb] = (long)plVar4;
  param_3[0xffc] = (long)plVar5;
  param_3[0xffd] = (long)plVar6;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&uStack_88,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_5V5",0);
  FUN_10010b098(&uStack_88,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_3V3",0);
  FUN_10010b098(&uStack_88,uVar21);
  FUN_100269e20(0x3e99999a,plVar4,1,4,1);
  uStack_2c8._0_4_ = FUN_100644a94("UI::EVENT_RENAME_PLAYER_HANDLE");
  uStack_2f0 = (undefined **)FUN_10025cd14;
  plVar2 = param_3 + 0x1159;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&uStack_2f0);
  uStack_2c8._0_4_ = DAT_101dbd458;
  uStack_2f0 = (undefined **)FUN_10025cd4c;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&uStack_2f0);
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,DAT_101dbd484);
  uStack_2f0 = (undefined **)FUN_10025cd4c;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&uStack_2f0);
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x216d4) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x216d4) = *(uint *)((long)param_3 + 0x216d4) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar9);
  }
  uVar21 = FUN_1004e0150("MAIN_PROFILE_LOGOUT",0);
  FUN_1006513c0(plVar9,uVar21);
  if ((*(float *)(param_3 + 0x42d3) != 0.8) || (*(float *)((long)param_3 + 0x2169c) != 0.8)) {
    param_3[0x42d3] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar9);
  }
  FUN_100651594(plVar10,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x21804) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x21804) = *(uint *)((long)param_3 + 0x21804) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar10);
  }
  if ((*(float *)(param_3 + 0x42f9) != 0.8) || (*(float *)((long)param_3 + 0x217cc) != 0.8)) {
    param_3[0x42f9] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar10);
  }
  uVar21 = FUN_10016aa7c();
  FUN_1006513c0(plVar10,uVar21);
  FUN_1002eb970(plVar8,0);
  puVar18 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&uStack_2f0,"icon_exit_app");
  FUN_1002ece5c(plVar8,puVar18,&uStack_2f0,&DAT_101d91198);
  if (lStack_2e0 < 0) {
    operator_delete(uStack_2f0);
  }
  uVar22 = *(uint *)((long)param_3 + 0x20b04);
  if ((uVar22 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x20b04) = uVar22 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar8);
  }
  FUN_1005300a8(0,plVar8);
  uVar23 = FUN_100652e60(param_3 + 0x4288);
  uStack_2f0 = (undefined **)CONCAT44(param_2,uVar23);
  FUN_10064e48c(plVar8,&uStack_2f0);
  uVar23 = DAT_101d91884;
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,DAT_101d91884);
  uStack_2f0 = (undefined **)thunk_FUN_10025e0c4;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x4151,&uStack_2f0);
  iVar19 = FUN_100131228();
  uVar22 = 4;
  if (iVar19 == 0) {
    uVar22 = 0;
  }
  *(uint *)((long)param_3 + 0x21a1c) = *(uint *)((long)param_3 + 0x21a1c) & 0xfffffffb | uVar22;
  FUN_1002eb970(plVar12,0);
  puVar18 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&uStack_2f0,"icon_video_capture");
  FUN_1002ece5c(plVar12,puVar18,&uStack_2f0,&DAT_101d91198);
  if (lStack_2e0 < 0) {
    operator_delete(uStack_2f0);
  }
  if ((*(uint *)((long)param_3 + 0x21b74) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x21b74) = *(uint *)((long)param_3 + 0x21b74) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar12);
  }
  FUN_1005300a8(0,plVar12);
  uVar24 = FUN_100652e60(param_3 + 0x4496);
  uStack_2f0 = (undefined **)CONCAT44(param_2,uVar24);
  FUN_10064e48c(plVar12,&uStack_2f0);
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uVar23);
  uStack_2f0 = (undefined **)thunk_FUN_10025e16c;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x435f,&uStack_2f0);
  FUN_100651594(plVar13,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x22744) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x22744) = *(uint *)((long)param_3 + 0x22744) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar13);
  }
  iVar19 = FUN_10013128c();
  pcVar17 = "MENU_PROFILE_RECORD_OR_STREAM_LABEL";
  if (iVar19 == 0) {
    pcVar17 = "MENU_PROFILE_RECORD_VIDEO_LABEL";
  }
  uVar21 = FUN_1004e0150(pcVar17,0);
  FUN_1006513c0(plVar13,uVar21);
  if ((*(float *)(param_3 + 0x44e1) != 0.8) || (*(float *)((long)param_3 + 0x2270c) != 0.8)) {
    param_3[0x44e1] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar13);
  }
  *(uint *)((long)param_3 + 0x22874) = *(uint *)((long)param_3 + 0x22874) & 0xfffffffb;
  uVar21 = FUN_1004e0150("MENU_PROFILE_RECORD_OPTION_LABEL",0);
  FUN_10018b1ec(0x3dcccccd,plVar14,0,uVar21,&DAT_101d91198,1,1);
  uVar21 = FUN_1004e0150("MENU_PROFILE_STREAM_OPTION_LABEL",0);
  FUN_10018b1ec(0x3dcccccd,plVar14,1,uVar21,&DAT_101d91198,1,1);
  FUN_10018b614(plVar14,2);
  uVar24 = FUN_100644a94("EVENT_SELECT_CONTEXT_MENU_ITEM");
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uVar24);
  uStack_2f0 = (undefined **)FUN_10025cd68;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x44ff,&uStack_2f0);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_NA",0);
  FUN_10010b098(&uStack_98,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_SA",0);
  FUN_10010b098(&uStack_98,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_EA",0);
  FUN_10010b098(&uStack_98,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_EU",0);
  FUN_10010b098(&uStack_98,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_SEA",0);
  FUN_10010b098(&uStack_98,uVar21);
  FUN_10001549c(&uStack_2f0,"NA");
  FUN_10001617c(&uStack_a8,&uStack_2f0);
  if (lStack_2e0 < 0) {
    operator_delete(uStack_2f0);
  }
  FUN_10001549c(&uStack_2f0,"SA");
  FUN_10001617c(&uStack_a8,&uStack_2f0);
  if (lStack_2e0 < 0) {
    operator_delete(uStack_2f0);
  }
  FUN_10001549c(&uStack_2f0,"EA");
  FUN_10001617c(&uStack_a8,&uStack_2f0);
  if (lStack_2e0 < 0) {
    operator_delete(uStack_2f0);
  }
  FUN_10001549c(&uStack_2f0,"EU");
  FUN_10001617c(&uStack_a8,&uStack_2f0);
  if (lStack_2e0 < 0) {
    operator_delete(uStack_2f0);
  }
  FUN_10001549c(&uStack_2f0,"SEA");
  FUN_10001617c(&uStack_a8,&uStack_2f0);
  if (lStack_2e0 < 0) {
    operator_delete(uStack_2f0);
  }
  FUN_10018d7d4(0x43160000,0x43c80000,0,0x3f800000,0x3f8ccccd,plVar15,&uStack_98,&uStack_a8,1,1,0);
  *(uint *)((long)param_3 + 0x23544) = *(uint *)((long)param_3 + 0x23544) | 4;
  FUN_10018ef5c(0x3f19999a,0x3f4ccccd,plVar15);
  FUN_10018efac(plVar15,0);
  FUN_10018efa4(plVar15,0);
  *(uint *)((long)param_3 + 0x25044) = *(uint *)((long)param_3 + 0x25044) & 0xfffffffb;
  FUN_100651594(plVar16,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x25e74) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x25e74) = *(uint *)((long)param_3 + 0x25e74) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar16);
  }
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_REGION",0);
  FUN_1006513c0(plVar16,uVar21);
  FUN_10025cd70(param_3,plVar1,0,1);
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uVar23);
  uStack_2f0 = (undefined **)FUN_10025cfa0;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x52,&uStack_2f0);
  *(uint *)((long)param_3 + 0x254) = *(uint *)((long)param_3 + 0x254) & 0xfffffffb;
  FUN_1004e18bc(&DAT_101d234d8,param_3,0x9d2c9b16,thunk_FUN_10025d244,0);
  iVar19 = FUN_100131560();
  if (iVar19 != 0) {
    FUN_1004f1580(&uStack_2f0);
    uStack_2f0 = &PTR_FUN_10145b860;
    uStack_2c0 = 0;
    uStack_2c8 = 0;
    uStack_2b0 = 0;
    uStack_2b8 = 0;
    pvStack_2a0 = (void *)0x0;
    uStack_2a8 = 0;
    uStack_290 = 0;
    uStack_298 = 0;
    uStack_280 = 0;
    uStack_288 = 0;
    uStack_278 = 0;
    FUN_100168aa8(auStack_270);
    uStack_148 = 0xffffffffffffffff;
    (**(code **)(*param_3 + 0x178))(param_3,&uStack_2f0);
    uStack_2f0 = &PTR_FUN_10145b860;
    FUN_10015613c(auStack_270);
    FUN_100156080(&uStack_298,1);
    if (pvStack_2a0 != (void *)0x0) {
      operator_delete__(pvStack_2a0);
      uStack_2a8 = 0;
      pvStack_2a0 = (void *)0x0;
    }
    FUN_100155f24(&uStack_2b8,1);
    FUN_100155eac(&uStack_2c8,1);
    FUN_1004f15a8(&uStack_2f0);
  }
  FUN_10001629c(&uStack_a8,1);
  FUN_10010b1a8(&uStack_98,1);
  FUN_10010b1a8(&uStack_88,1);
  return param_3;
}




void FUN_10025cfb8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10025cfb8_10147ade8;
  param_1[0x34] = &PTR_FUN_10147af98;
  param_1[0x37] = &PTR_FUN_10147b330;
  FUN_1001c8728(param_1 + 0xffe);
  FUN_1004e1acc(&DAT_101d234d8,param_1,0x9d2c9b16);
  if ((void *)param_1[0x4be9] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4be9]);
    param_1[0x4be9] = 0;
    param_1[0x4be8] = 0;
  }
  if ((void *)param_1[0x4be7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4be7]);
    param_1[0x4be7] = 0;
    param_1[0x4be6] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x4bbe);
  thunk_FUN_10018d500(param_1 + 0x4698);
  thunk_FUN_10018b08c(param_1 + 0x44fe);
  thunk_FUN_100651068(param_1 + 0x44d8);
  FUN_1001acc08(param_1 + 0x435e);
  param_1[0x4333] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x434a);
  FUN_10064e2bc(param_1 + 0x4333);
  thunk_FUN_1001cec4c(param_1 + 0x4316);
  thunk_FUN_100651068(param_1 + 0x42f0);
  thunk_FUN_100651068(param_1 + 0x42ca);
  FUN_1001acc08(param_1 + 0x4150);
  param_1[0x4125] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x413c);
  FUN_10064e2bc(param_1 + 0x4125);
  thunk_FUN_10025b12c(param_1 + 0x379b);
  thunk_FUN_10025b12c(param_1 + 0x2e11);
  thunk_FUN_100256f78(param_1 + 0x1158);
  thunk_FUN_1001c859c(param_1 + 0xffe);
  param_1[0xfd2] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0xfe9);
  FUN_10064e2bc(param_1 + 0xfd2);
  FUN_10064221c(param_1 + 0xfc1);
  FUN_10022ae54(param_1 + 0x3a);
  FUN_1004f0a9c(param_1 + 0x37);
  FUN_10014f51c(param_1 + 0x34);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_10025cfb8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10025cfb8_10147ade8;
  param_1[0x34] = &PTR_FUN_10147af98;
  param_1[0x37] = &PTR_FUN_10147b330;
  FUN_1001c8728(param_1 + 0xffe);
  FUN_1004e1acc(&DAT_101d234d8,param_1,0x9d2c9b16);
  if ((void *)param_1[0x4be9] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4be9]);
    param_1[0x4be9] = 0;
    param_1[0x4be8] = 0;
  }
  if ((void *)param_1[0x4be7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4be7]);
    param_1[0x4be7] = 0;
    param_1[0x4be6] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x4bbe);
  thunk_FUN_10018d500(param_1 + 0x4698);
  thunk_FUN_10018b08c(param_1 + 0x44fe);
  thunk_FUN_100651068(param_1 + 0x44d8);
  FUN_1001acc08(param_1 + 0x435e);
  param_1[0x4333] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x434a);
  FUN_10064e2bc(param_1 + 0x4333);
  thunk_FUN_1001cec4c(param_1 + 0x4316);
  thunk_FUN_100651068(param_1 + 0x42f0);
  thunk_FUN_100651068(param_1 + 0x42ca);
  FUN_1001acc08(param_1 + 0x4150);
  param_1[0x4125] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x413c);
  FUN_10064e2bc(param_1 + 0x4125);
  thunk_FUN_10025b12c(param_1 + 0x379b);
  thunk_FUN_10025b12c(param_1 + 0x2e11);
  thunk_FUN_100256f78(param_1 + 0x1158);
  thunk_FUN_1001c859c(param_1 + 0xffe);
  param_1[0xfd2] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0xfe9);
  FUN_10064e2bc(param_1 + 0xfd2);
  FUN_10064221c(param_1 + 0xfc1);
  FUN_10022ae54(param_1 + 0x3a);
  FUN_1004f0a9c(param_1 + 0x37);
  FUN_10014f51c(param_1 + 0x34);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10025d1f0(long param_1)

{
  FUN_10025cfb8(param_1 + -0x1a0);
  return;
}




void FUN_10025d1f8(long param_1)

{
  FUN_10025cfb8(param_1 + -0x1b8);
  return;
}




void FUN_10025d200(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10025cfb8();
  operator_delete(pvVar1);
  return;
}




void FUN_10025d214(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10025cfb8(param_1 + -0x1a0);
  operator_delete(pvVar1);
  return;
}




void FUN_10025d22c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10025cfb8(param_1 + -0x1b8);
  operator_delete(pvVar1);
  return;
}




void FUN_10025d244(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined4 local_74;
  ulong local_70;
  long local_68;
  
  local_70 = 0;
  local_68 = 0;
  FUN_100136ce8(&local_70);
  if ((int)local_70 != 0) {
    uVar9 = 0;
    do {
      lVar11 = local_68;
      lVar5 = local_68 + uVar9 * 0xe8;
      uVar13 = *(ulong *)(lVar5 + 200);
      if (-1 < (char)*(byte *)(lVar5 + 0xd7)) {
        uVar13 = (ulong)*(byte *)(lVar5 + 0xd7);
      }
      if ((uVar13 == 0x12) &&
         (iVar3 = std::string::compare(lVar5 + 0xc0,0,(char *)0xffffffffffffffff,0x1013e91a7),
         iVar3 == 0)) {
        lVar11 = lVar11 + uVar9 * 0xe8;
        puVar12 = (uint *)(lVar11 + 8);
        uVar6 = *puVar12;
        if (uVar6 != 0) {
          uVar13 = 0;
          do {
            lVar15 = *(long *)(lVar11 + 0x10);
            lVar5 = lVar15 + uVar13 * 0xa0;
            puVar8 = (uint *)(lVar5 + 8);
            uVar4 = *puVar8;
            if (uVar4 != 0) {
              lVar7 = 0;
              uVar10 = 0;
              do {
                lVar14 = *(long *)(lVar5 + 0x10);
                uVar1 = lVar14 + lVar7;
                uVar2 = *(ulong *)(uVar1 + 8);
                if (-1 < (char)*(byte *)(uVar1 + 0x17)) {
                  uVar2 = (ulong)*(byte *)(uVar1 + 0x17);
                }
                if (uVar2 == 4) {
                  iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013d24d0);
                  if (iVar3 == 0) {
                    local_74 = *(undefined4 *)(lVar14 + lVar7 + 0x18);
                    FUN_100227d90(param_1 + 0x1d0,lVar15 + (uVar13 & 0xffffffff) * 0xa0 + 0x60,
                                  &local_74);
                    goto LAB_10025d3c4;
                  }
                  uVar4 = *puVar8;
                }
                uVar10 = uVar10 + 1;
                lVar7 = lVar7 + 0x20;
              } while (uVar10 < uVar4);
              uVar6 = *puVar12;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar6);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (local_70 & 0xffffffff));
  }
LAB_10025d3c4:
  FUN_100144b1c(&local_70,1);
  return;
}




void FUN_10025d3f0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  if ((int)param_2 != 0) {
    FUN_10025d244(param_1);
    FUN_10025d500(param_1);
    FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_menu_layer_slide.mp3",0,0);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x25f54) == 0) {
      iVar1 = FUN_100131228();
      uVar3 = 4;
      if (iVar1 == 0) {
        uVar3 = 0;
      }
    }
    *(uint *)(param_1 + 0x21a1c) = *(uint *)(param_1 + 0x21a1c) & 0xfffffffb | uVar3;
    FUN_10025b440(param_1 + 0x17088,0);
    FUN_10025b440(param_1 + 0x1bcd8,1);
  }
  FUN_1002575b0(param_1 + 0x8ac0,param_2);
  iVar1 = FUN_1004eef10();
  if ((iVar1 == 0) || (iVar1 = FUN_10052b78c(), iVar1 != 0)) {
    *(uint *)(param_1 + 0x20b04) = *(uint *)(param_1 + 0x20b04) & 0xfffffffb;
  }
  iVar1 = FUN_1004eef10();
  if ((iVar1 != 0) && ((int)param_2 != 0)) {
    lVar2 = FUN_10015d3ec();
    FUN_100169cec(lVar2 + 0x18);
    return;
  }
  return;
}




void FUN_10025d500(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  float fVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 local_68;
  undefined4 uStack_64;
  
  uVar8 = (**(code **)(*param_3 + 0x48))();
  iVar6 = FUN_100126c88();
  if (iVar6 != 0) {
    FUN_100651594(param_3 + 0x42ca,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
    bVar5 = false;
    if ((*(float *)(param_3 + 0x42d3) == 1.0) &&
       (bVar5 = false, !NAN(*(float *)((long)param_3 + 0x2169c)))) {
      bVar5 = *(float *)((long)param_3 + 0x2169c) == 1.0;
    }
    lVar9 = NEON_fmov(0x3f800000,4);
    if (!bVar5) {
      param_3[0x42d3] = lVar9;
      FUN_1000200a0(param_3 + 0x42ca);
    }
    FUN_100651594(param_3 + 0x42f0,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
    bVar5 = false;
    if ((*(float *)(param_3 + 0x42f9) == 1.0) &&
       (bVar5 = false, !NAN(*(float *)((long)param_3 + 0x217cc)))) {
      bVar5 = *(float *)((long)param_3 + 0x217cc) == 1.0;
    }
    if (!bVar5) {
      param_3[0x42f9] = lVar9;
      FUN_1000200a0(param_3 + 0x42f0);
    }
    FUN_100651594(param_3 + 0x44d8,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
    if ((*(float *)(param_3 + 0x44e1) != 1.0) || (*(float *)((long)param_3 + 0x2270c) != 1.0)) {
      param_3[0x44e1] = lVar9;
      FUN_1000200a0(param_3 + 0x44d8);
    }
    FUN_100651594(param_3 + 0x4bbe,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
    if ((*(float *)(param_3 + 0x4bc7) != 1.0) || (*(float *)((long)param_3 + 0x25e3c) != 1.0)) {
      param_3[0x4bc7] = lVar9;
      FUN_1000200a0(param_3 + 0x4bbe);
    }
  }
  *(uint *)((long)param_3 + 0x8074) = *(uint *)((long)param_3 + 0x8074) & 0xfffffffb;
  FUN_10064e5ec(0,0x42000000,param_3 + 0xffe,4,param_3,4);
  plVar1 = param_3 + 0xfd2;
  FUN_10064e47c(uVar8,plVar1);
  plVar2 = param_3 + 0x1158;
  local_68 = FUN_10064e3cc(plVar1);
  uStack_64 = param_2;
  FUN_10064e48c(plVar2,&local_68);
  plVar3 = param_3 + 0x2e11;
  local_68 = FUN_10064e3cc(plVar1);
  uStack_64 = param_2;
  FUN_10064e48c(plVar3,&local_68);
  plVar4 = param_3 + 0x379b;
  local_68 = FUN_10064e3cc(plVar1);
  uStack_64 = param_2;
  FUN_10064e48c(plVar4,&local_68);
  FUN_1002583c0(plVar2);
  FUN_10025b72c(plVar3);
  FUN_10025b72c(plVar4);
  FUN_100227610(param_3 + 0x3a);
  FUN_10064e5ec(0,0,plVar1,4,param_3,4);
  FUN_10064e5ec(0,0,plVar2,4,plVar1,4);
  FUN_10064e5ec(0,0,plVar3,4,plVar1,4);
  FUN_10064e5ec(0,0,plVar4,4,plVar1,4);
  FUN_10064e5ec(0,0,param_3 + 0x42ca,4,param_3 + 0x4150,6);
  FUN_10064e5ec(0,0,param_3 + 0x42f0,4,param_3 + 0x42ca,6);
  FUN_10064e5ec(0,0x42480000,param_3 + 0x4bbe,4,param_3 + 0x42f0,6);
  FUN_10064e5ec(0,0x42480000,param_3 + 0x4698,4,param_3 + 0x4bbe,6);
  plVar1 = param_3 + 0x4125;
  FUN_1006557ec(plVar1);
  FUN_10064e5ec(0,0,plVar1,1,param_3,1);
  FUN_10064e5ec(0,0,param_3 + 0x44d8,4,param_3 + 0x435e,6);
  FUN_10064e5ec(0,0,param_3 + 0x44fe,5,param_3 + 0x435e,7);
  FUN_1006557ec(param_3 + 0x4333);
  fVar7 = (float)FUN_100651184(param_3 + 0x44d8);
  FUN_10064e5ec(fVar7 * -0.5,0,param_3 + 0x4333,1,plVar1,2);
  return;
}




void thunk_FUN_10025d500(void)

{
  FUN_10025d500();
  return;
}




void thunk_FUN_10025d500(void)

{
  FUN_10025d500();
  return;
}




void FUN_10025d954(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x8074) = *(uint *)(param_1 + 0x8074) & 0xfffffffb;
  FUN_100256bac(param_1 + 0x8ac0,param_2,1);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
  uVar1 = FUN_10014e20c();
  *(char *)(param_1 + 0x25f50) = (char)uVar1;
  uVar2 = FUN_10052b840();
  uVar2 = uVar2 | uVar1;
  iVar3 = FUN_100131560();
  uVar1 = 0;
  if (iVar3 == 0 && uVar2 == 0) {
    uVar1 = 4;
  }
  *(uint *)(param_1 + 0x20b04) = *(uint *)(param_1 + 0x20b04) & 0xfffffffb | uVar1;
  uVar1 = FUN_100131560();
  FUN_100530068(param_1 + 0x20a80,(uVar1 | uVar2) ^ 1);
  iVar3 = FUN_100131560();
  uVar1 = 0;
  if (iVar3 == 0 && uVar2 == 0) {
    uVar1 = 4;
  }
  *(uint *)(param_1 + 0x216d4) = *(uint *)(param_1 + 0x216d4) & 0xfffffffb | uVar1;
  if (*(char *)(param_1 + 0x25f50) != '\0') {
    return;
  }
  FUN_100227fb8(param_1 + 0x1d0,1);
  return;
}




void FUN_10025da5c(long param_1)

{
  FUN_10025d954(param_1 + -0x1a0);
  return;
}




void FUN_10025da64(long param_1,ulong param_2)

{
  if ((param_2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x254) >> 2 & 1) != 0) {
      FUN_10025cd70(param_1,param_1 + 0x1d0,0,1);
    }
    if (*(int *)(param_1 + 0x25f54) != 0) {
      FUN_10025dacc(param_1,0);
    }
  }
  FUN_1002576c0(param_1 + 0x8ac0,param_2);
  return;
}




void FUN_10025dacc(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_SWITCH_TO_TAB");
  FUN_100644aec(auStack_40,uVar1,param_2);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_10025db20(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_10002f320();
    FUN_100030cf0(uVar1,&DAT_101d91198);
    uVar1 = FUN_10002f320();
    FUN_1000309a8(uVar1,&DAT_101d91198);
    return;
  }
  return;
}




void FUN_10025db5c(long param_1,long param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e3120(auStack_30,"");
  FUN_1000153b4(param_1 + 0x25f30,auStack_30);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  iVar1 = *(int *)(param_2 + 0x40);
  if (iVar1 == -0xb) {
    uVar3 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar2 = "PLAYER_PROFILE_ERROR_RESERVED";
  }
  else if (iVar1 == -10) {
    uVar3 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar2 = "PLAYER_PROFILE_ERROR_TAKEN";
  }
  else {
    if (iVar1 == 0) {
      FUN_1001027f8(2);
      if ((*(byte *)(param_1 + 0x254) >> 2 & 1) == 0) {
        return;
      }
      FUN_10025cd70(param_1,param_1 + 0x1d0,0,0);
      return;
    }
    uVar3 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar2 = "PLAYER_PROFILE_ERROR";
  }
  uVar4 = FUN_1004e0150(pcVar2,0);
  uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar3,uVar4,uVar5,0,0);
  FUN_1001027f8(1);
  return;
}




void FUN_10025dc8c(long param_1)

{
  FUN_10025db5c(param_1 + -0x1a0);
  return;
}




void FUN_10025dc94(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e3120(auStack_30,"");
  FUN_1000153b4(param_1 + 0x25f30,auStack_30);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  iVar2 = *(int *)(param_2 + 0x40);
  if (iVar2 == -0xb) {
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "PLAYER_PROFILE_ERROR_RESERVED";
  }
  else if (iVar2 == -10) {
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "PLAYER_PROFILE_ERROR_TAKEN";
  }
  else {
    if (iVar2 == 0) {
      if (*(char *)(param_2 + 0x44) != '\0') {
        FUN_1001027f8(2);
        if ((*(byte *)(param_1 + 0x254) >> 2 & 1) == 0) {
          return;
        }
        FUN_10025cd70(param_1,param_1 + 0x1d0,0,0);
        return;
      }
      bVar9 = *(byte *)(param_2 + 0x5f);
      uVar7 = (ulong)bVar9;
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar1 = uVar8;
      if (-1 < (char)bVar9) {
        uVar1 = uVar7;
      }
      if (uVar1 == 0x12) {
        iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e789b);
        if (iVar2 == 0) {
          uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
          pcVar3 = "PLAYER_PROFILE_ERROR_INSUFFICIENT_FUNDS";
          goto LAB_10025de00;
        }
        bVar9 = *(byte *)(param_2 + 0x5f);
        uVar7 = (ulong)bVar9;
        uVar8 = *(ulong *)(param_2 + 0x50);
      }
      if (-1 < (char)bVar9) {
        uVar8 = uVar7;
      }
      if ((uVar8 == 0x13) &&
         (iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e9230),
         iVar2 == 0)) {
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        uVar5 = FUN_1004e0150("MENU_GUILD_ERROR_PROFANITY",0);
        uVar6 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e3090(uVar4,uVar5,uVar6,0,0);
        return;
      }
    }
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "PLAYER_PROFILE_ERROR";
  }
LAB_10025de00:
  uVar5 = FUN_1004e0150(pcVar3,0);
  uVar6 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar4,uVar5,uVar6,0,0);
  FUN_1001027f8(1);
  return;
}




void FUN_10025dec0(long param_1)

{
  FUN_10025dc94(param_1 + -0x1a0);
  return;
}




void FUN_10025dec8(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x28) != 0) {
    return;
  }
  FUN_1002587a4(param_1 + 0x8ac0);
  return;
}




void FUN_10025dee0(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x28) != 0) {
    return;
  }
  FUN_1002587a4(param_1 + 0x8908);
  return;
}




void FUN_10025def8(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d2367c,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_10025df44(long param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d2367c,0);
  FUN_100644c34(param_1 + -0x1b8,auStack_40,1);
  return;
}




void FUN_10025df90(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x209ac);
  *(uint *)(param_1 + 0x209ac) = uVar2 & 0xfffffff8 | uVar2 & 3 | (uint)(param_2 == 0) << 2;
  if (param_2 == 0) {
    iVar1 = FUN_100131228();
    uVar2 = 4;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x21a1c) = *(uint *)(param_1 + 0x21a1c) & 0xfffffffb | uVar2;
  return;
}




void FUN_10025dff4(long param_1,ulong param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  
  uVar1 = *(uint *)(param_1 + 0x25f54);
  uVar3 = (uint)param_2;
  if ((uVar1 < 3 && uVar3 < 3) && uVar1 != uVar3) {
    plVar2 = *(long **)(param_1 + 0x7fd8 + (ulong)uVar1 * 8);
    plVar4 = *(long **)(param_1 + 0x7fd8 + (param_2 & 0xffffffff) * 8);
    if (plVar4 != (long *)0x0 && plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x138))(0x3e4ccccd,plVar2,0,uVar3 <= uVar1,1);
      (**(code **)(*plVar4 + 0x138))(0x3e4ccccd,plVar4,1,uVar3 > uVar1,1);
    }
    FUN_10025df90(param_1,param_2);
    *(uint *)(param_1 + 0x25f54) = uVar3;
  }
  return;
}




void FUN_10025e0c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_10015d3ec();
  if (*(int *)(lVar1 + 0x55c8) != 0) {
    uVar2 = FUN_1004e0150("MENU_LPQ_NOTIFICATION_TITLE",0);
    uVar3 = FUN_1004e0150("MENU_ACCOUNT_CANNOT_LOGOUT_LPQ",0);
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(uVar2,uVar3,uVar4,0,0);
    return;
  }
  FUN_100530068(param_1 + 0x20a80,0);
  FUN_100102abc(0);
  FUN_10015d3ec();
  FUN_1001633f4();
  FUN_100220d08();
  return;
}




void FUN_10025e16c(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100131228();
  if (iVar1 != 0) {
    FUN_100102bcc();
    iVar1 = FUN_10013128c();
    if (iVar1 == 0) {
      iVar1 = FUN_100131268();
      if (iVar1 != 0) {
        FUN_10052bb64(0,&DAT_101d237c8);
        return;
      }
    }
    else {
      *(uint *)(param_1 + 0x22874) = *(uint *)(param_1 + 0x22874) ^ 4;
    }
  }
  return;
}




void FUN_10025e1d4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  iVar1 = FUN_100644b2c(param_2);
  if (iVar1 == 0) {
    uVar3 = FUN_100131268();
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
  else {
    iVar2 = FUN_100644b2c(param_2);
    if ((iVar2 != 1) || (iVar2 = FUN_10013128c(), iVar2 == 0)) {
      return;
    }
  }
  FUN_10052bb64(iVar1 != 0,&DAT_101d237c8);
  return;
}




void FUN_10025e23c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *local_38;
  ulong local_30;
  byte local_21;
  
  lVar3 = FUN_10015d3ec();
  if (*(char *)(lVar3 + 0x567c) != '\0') {
    return;
  }
  FUN_10003330c(&local_38,param_2);
  FUN_1000f0918(&local_38);
  uVar5 = (ulong)local_21;
  uVar1 = local_30;
  if (-1 < (char)local_21) {
    uVar1 = uVar5;
  }
  if (uVar1 == 8) {
    iVar2 = std::string::compare((ulong)&local_38,0,(char *)0xffffffffffffffff,0x1013e5ce5);
    if (iVar2 != 0) {
      uVar5 = (ulong)local_21;
      goto LAB_10025e2c0;
    }
    uVar4 = 0;
  }
  else {
LAB_10025e2c0:
    uVar1 = local_30;
    if (-1 < (char)local_21) {
      uVar1 = uVar5;
    }
    if (uVar1 == 9) {
      iVar2 = std::string::compare((ulong)&local_38,0,(char *)0xffffffffffffffff,0x1013e5cee);
      if (iVar2 == 0) {
        uVar4 = 1;
        goto LAB_10025e348;
      }
      uVar5 = (ulong)local_21;
    }
    if (-1 < (char)local_21) {
      local_30 = uVar5;
    }
    if ((local_30 != 9) ||
       (iVar2 = std::string::compare((ulong)&local_38,0,(char *)0xffffffffffffffff,0x1013e5cf8),
       iVar2 != 0)) goto LAB_10025e350;
    uVar4 = 2;
  }
LAB_10025e348:
  FUN_10025dff4(param_1,uVar4);
LAB_10025e350:
  if ((char)local_21 < '\0') {
    operator_delete(local_38);
  }
  return;
}




void FUN_10025e370(long param_1)

{
  FUN_100258734(param_1 + 0x8ac0);
  return;
}




void FUN_10025e37c(void)

{
  DAT_101e43de0 = 0xff;
  DAT_101e43de2 = 0xffff;
  DAT_101e43de4 = 0xffff;
  DAT_101e43de6 = 0xffbc9c44;
  DAT_101e43dea = 0xff1166f2;
  DAT_101e43dee = 0xffe0e0e0;
  DAT_101e43df2 = 0xffa0a0a0;
  DAT_101e43df6 = 0xff8c8c8c;
  DAT_101e43dfa = 0xff322213;
  DAT_101e43dfe = 0xff091911;
  DAT_101e43e02 = 0xff170c19;
  DAT_101e43e06 = 0xff241a14;
  DAT_101e43e0a = 0xff14171c;
  DAT_101e43e0e = 0xff221911;
  DAT_101e43e12 = 0xff1a1416;
  DAT_101e43e16 = 0xff121414;
  DAT_101e43e1a = 0xff1a1809;
  DAT_101e43e1e = 0xff141414;
  DAT_101e43e22 = 0xff141414;
  DAT_101e43e26 = 0xff2929c0;
  DAT_101e43e2a = 0xff283082;
  DAT_101e43e2e = 0xff5262cc;
  DAT_101e43e32 = 0xff283082;
  DAT_101e43e36 = 0xff5262cc;
  DAT_101e43e3a = 0xff745c42;
  DAT_101e43e3e = 0xff184155;
  DAT_101e43e42 = 0xff92665e;
  DAT_101e43e46 = 0xffbc9c44;
  DAT_101e43e4a = 0xffbbae56;
  DAT_101e43e4e = 0xff8b7b01;
  DAT_101e43e52 = 0xff90b3ef;
  DAT_101e43e56 = 0xff728ebe;
  DAT_101e43e5a = 0xff19459d;
  DAT_101e43e5e = 0xff9d877b;
  DAT_101e43e62 = 0xffcbb1a3;
  DAT_101e43e66 = 0xff3f6fb5;
  DAT_101e43e6a = 0xffc5c5c5;
  DAT_101e43e6e = 0xff4fc1f1;
  DAT_101e43e72 = 0xff606060;
  DAT_101e43e76 = 0xffc5ff7b;
  DAT_101e43e7a = 0xff5271eb;
  DAT_101e43e7e = 0xfffae076;
  DAT_101e43e82 = 0xff3ac8f6;
  DAT_101e43e86 = 0xffaaaaaa;
  DAT_101e43e8a = 0xffe19400;
  DAT_101e43e8e = 0xffe19400;
  DAT_101e43e92 = 0xffe550b2;
  DAT_101e43e96 = 0xfff22ae8;
  DAT_101e43e9a = 0xff005ae1;
  DAT_101e43e9e = 0xff1addfa;
  DAT_101e43ea2 = 0xff2424b3;
  DAT_101e43ea6 = 0xff2424b3;
  DAT_101e43eaa = 0xff646464;
  DAT_101e43eae = 0xff92665e;
  DAT_101e43eb2 = 0xff646037;
  DAT_101e43ebc = 0xff1111a1;
  DAT_101e43ec4 = 0xffc8c8c8;
  DAT_101e43ec0 = 0xff321ee1;
  DAT_101e43ec8 = 0xff321ee1;
  DAT_101e43ed4 = 0xff6259b3;
  DAT_101e43ed8 = 0xff506e73;
  DAT_101e43eb8 = 0xffffffff;
  DAT_101e43edc = 0xff9dbf86;
  DAT_101e43ecc = 0xff7fe801;
  DAT_101e43ee0 = 0xffa35244;
  DAT_101e43ed0 = 0xffffffff;
  DAT_101e43ee4 = 0xffca828e;
  DAT_101e43ee8 = 0xffa6a6a6;
  DAT_101e43eec = 0xffa6a6a6;
  DAT_101e43ef0 = 0xffffffff;
  DAT_101e43ef4 = 0xff88ea2f;
  DAT_101e43ef8 = 0xff8c8c8c;
  DAT_101e43efc = 0xffffb400;
  DAT_101e43f00 = 0xffff00ff;
  DAT_101e43f04 = 0xff00aded;
  DAT_101e43f08 = 0xff33d3ff;
  DAT_101e43f0c = 0xff7fe801;
  DAT_101e43f10 = 0xff282828;
  DAT_101e43f14 = 0xfff0f0f0;
  DAT_101e43f18 = 0xffa4781e;
  DAT_101e43f1c = 0xffa6654b;
  DAT_101e43f20 = 0xff93435b;
  DAT_101e43f24 = 0xff387f9c;
  DAT_101e43f28 = 0xffa3781e;
  DAT_101e43f2c = 0xffffd18a;
  DAT_101e43f30 = 0xffff61f7;
  DAT_101e43f34 = 0xff5de1f2;
  DAT_101e43f38 = 0xff80eaff;
  DAT_101e43f3c = 0xff32e00e;
  DAT_101e43f40 = 0xff5a3c10;
  DAT_101e43f44 = 0xff330b03;
  DAT_101e43f48 = 0xff33031d;
  DAT_101e43f4c = 0xff032433;
  DAT_101e43f50 = 0xff9e8e8d;
  DAT_101e43f58 = 0x4326000041900000;
  DAT_101e43f60 = 0x4326000041c00000;
  DAT_101d237c8 = &PTR_thunk_FUN_10052bb70_10144d118;
  ___cxa_atexit(thunk_FUN_10052bb70,&DAT_101d237c8,0x100000000);
  return;
}




undefined8 * FUN_10025ea78(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_100269da8();
  FUN_10014f4a0(lVar1 + 200);
  *param_1 = &PTR_thunk_FUN_10025f468_10147b360;
  param_1[0x19] = &PTR_FUN_10147b4d0;
  FUN_10064e264(param_1 + 0x1c);
  thunk_FUN_1006543ec(param_1 + 0x33);
  FUN_10053077c(param_1 + 0x67,0);
  FUN_1006421a8(param_1 + 0x10e);
  param_1[0x10e] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x11f);
  thunk_FUN_100652c08(param_1 + 0x13d);
  thunk_FUN_100652c08(param_1 + 0x15b);
  thunk_FUN_100652c08(param_1 + 0x179);
  thunk_FUN_100650e64(param_1 + 0x197);
  thunk_FUN_100650e64(param_1 + 0x1bd);
  FUN_1001a246c(param_1 + 0x1e3);
  thunk_FUN_100650e64(param_1 + 0x259);
  thunk_FUN_100181304(param_1 + 0x27f,0);
  thunk_FUN_1001c0c34(param_1 + 0x536,0);
  FUN_10025eb5c(param_1);
  FUN_10025efc8(param_1);
  return param_1;
}




void FUN_10025eb5c(long *param_1)

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
  undefined **ppuVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1c,1);
  plVar1 = param_1 + 0x179;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x11f,1);
  plVar2 = param_1 + 0x13d;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  plVar3 = param_1 + 0x15b;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  plVar4 = param_1 + 0x33;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  plVar5 = param_1 + 0x67;
  FUN_100642bd8(plVar4,plVar5,1);
  plVar6 = param_1 + 0x10e;
  FUN_1005308f8(plVar5,plVar6,1);
  plVar7 = param_1 + 0x197;
  FUN_100642bd8(plVar6,plVar7,1);
  plVar8 = param_1 + 0x1bd;
  FUN_100642bd8(plVar6,plVar8,1);
  plVar9 = param_1 + 0x1e3;
  FUN_100642bd8(plVar6,plVar9,1);
  plVar6 = param_1 + 0x259;
  FUN_100642bd8(plVar9,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x27f,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x536,1);
  *(uint *)((long)param_1 + 0x164) = *(uint *)((long)param_1 + 0x164) | 0x10;
  FUN_100654488(plVar4,1);
  FUN_100530adc(plVar5,0,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"corner_shadow");
  uVar11 = *(uint *)((long)param_1 + 0xc4c);
  if ((uVar11 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xc4c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar1);
  }
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  FUN_100652cac(param_1 + 0x11f,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_brushstroke_vert_r");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_brushstroke_vert_l");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  FUN_100651038(plVar7,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e298);
  uVar11 = *(uint *)((long)param_1 + 0xd3c);
  if ((uVar11 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0xd3c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x5280;
    FUN_1000200a0(plVar7);
  }
  iVar12 = FUN_100126c88();
  ppuVar10 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar12 == 0) {
    ppuVar10 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651594(plVar8,*ppuVar10,&DAT_10115a168);
  FUN_100651700(plVar8,0);
  FUN_100651708(0x446b3334,plVar8,1);
  FUN_1001a2508(plVar9,8);
  FUN_10064e47c(0x45000000,0x45000000,plVar9);
  if ((*(float *)(param_1 + 0x1ec) != 0.75) || (*(float *)((long)param_1 + 0xf64) != 0.75)) {
    lVar13 = NEON_fmov(0x3f400000,4);
    param_1[0x1ec] = lVar13;
    FUN_1000200a0(plVar9);
  }
  FUN_100651594(plVar6,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e298,&DAT_101158624);
  uVar11 = *(uint *)((long)param_1 + 0x134c);
  if ((uVar11 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x134c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x7280;
    FUN_1000200a0(plVar6);
  }
  if ((*(float *)(param_1 + 0x263) != 0.5) || (*(float *)((long)param_1 + 0x131c) != 0.5)) {
    param_1[0x263] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar6);
  }
  FUN_1001816d4(0x42800000,0x42c80000,0x447a0000,param_1 + 0x27f,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  local_68 = DAT_101d91884;
  local_90 = FUN_10025fb48;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 1;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x280,&local_90);
  lVar13 = NEON_fmov(0x41c00000,4);
  param_1[0x28a] = lVar13;
  if ((*(float *)(param_1 + 0x53f) != 2.5) || (*(float *)((long)param_1 + 0x29fc) != 2.5)) {
    lVar13 = NEON_fmov(0x40200000,4);
    param_1[0x53f] = lVar13;
    FUN_1000200a0(param_1 + 0x536);
  }
  return;
}




void FUN_10025efc8(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_60;
  float local_5c;
  undefined1 *local_58;
  
  FUN_100641464(&local_5c,&local_60);
  FUN_10064e47c(local_5c,local_60,param_1 + 0xe0);
  lVar1 = param_1 + 0x198;
  fVar4 = 0.0;
  bVar3 = false;
  if ((*(float *)(param_1 + 0x1dc) == 0.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x1d8)))) {
    bVar3 = *(float *)(param_1 + 0x1d8) == 0.0;
  }
  if (!bVar3) {
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    fVar4 = 0.0;
    FUN_1000200a0(lVar1);
  }
  local_58 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_1 + 0x198) + 0x28))(lVar1,&local_58);
  fVar6 = local_5c;
  fVar5 = local_60;
  lVar2 = param_1 + 0x13f8;
  FUN_10064e3cc(lVar2);
  FUN_10064e47c(fVar6,fVar5 + -140.0 + fVar4 * -0.5,lVar1);
  lVar1 = param_1 + 0x8f8;
  FUN_10064e47c(0x44900000,local_60,lVar1);
  if ((*(float *)(param_1 + 0x938) != local_5c * 0.5) || (*(float *)(param_1 + 0x93c) != 0.0)) {
    *(float *)(param_1 + 0x938) = local_5c * 0.5;
    *(undefined4 *)(param_1 + 0x93c) = 0;
    FUN_1000200a0(lVar1);
  }
  local_58 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x8f8) + 0x28))(lVar1,&local_58);
  fVar4 = local_5c * 0.5 + -576.0;
  if ((*(float *)(param_1 + 0xb18) != fVar4) || (*(float *)(param_1 + 0xb1c) != 0.0)) {
    *(float *)(param_1 + 0xb18) = fVar4;
    *(undefined4 *)(param_1 + 0xb1c) = 0;
    FUN_1000200a0(param_1 + 0xad8);
  }
  local_58 = (undefined1 *)0x3f800000;
  (**(code **)(*(long *)(param_1 + 0xad8) + 0x28))(param_1 + 0xad8,&local_58);
  fVar4 = local_5c * 0.5 + 576.0;
  if ((*(float *)(param_1 + 0xa28) != fVar4) || (*(float *)(param_1 + 0xa2c) != 0.0)) {
    *(float *)(param_1 + 0xa28) = fVar4;
    *(undefined4 *)(param_1 + 0xa2c) = 0;
    FUN_1000200a0(param_1 + 0x9e8);
  }
  local_58 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_1 + 0x9e8) + 0x28))(param_1 + 0x9e8,&local_58);
  lVar1 = param_1 + 0xbc8;
  if ((*(float *)(param_1 + 0xc08) != local_5c * 0.5) ||
     (*(float *)(param_1 + 0xc0c) != local_60 * 0.5)) {
    *(float *)(param_1 + 0xc08) = local_5c * 0.5;
    *(float *)(param_1 + 0xc0c) = local_60 * 0.5;
    FUN_1000200a0(lVar1);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0xbc8) + 0x28))(lVar1,&local_58);
  FUN_10064e47c(local_5c,local_5c,lVar1);
  if ((*(float *)(param_1 + 0xcf8) != 0.0) || (*(float *)(param_1 + 0xcfc) != 205.0)) {
    *(undefined8 *)(param_1 + 0xcf8) = 0x434d000000000000;
    FUN_1000200a0(param_1 + 0xcb8);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0xcb8) + 0x28))(param_1 + 0xcb8,&local_58);
  local_58 = &DAT_3f0000003f000000;
  if ((*(float *)(param_1 + 0xf58) != 0.0) || (*(float *)(param_1 + 0xf5c) != local_60 * 0.4)) {
    *(undefined4 *)(param_1 + 0xf58) = 0;
    *(float *)(param_1 + 0xf5c) = local_60 * 0.4;
    FUN_1000200a0(param_1 + 0xf18);
  }
  (**(code **)(*(long *)(param_1 + 0xf18) + 0x28))(param_1 + 0xf18,&local_58);
  if ((*(float *)(param_1 + 0x1438) != local_5c * 0.5) ||
     (*(float *)(param_1 + 0x143c) != local_60 + -100.0)) {
    *(float *)(param_1 + 0x1438) = local_5c * 0.5;
    *(float *)(param_1 + 0x143c) = local_60 + -100.0;
    FUN_1000200a0(lVar2);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x13f8) + 0x28))(lVar2,&local_58);
  fVar4 = local_5c;
  lVar1 = param_1 + 0x29b0;
  fVar5 = (float)FUN_100642888(lVar1,0,0,1,1);
  fVar6 = (fVar4 - fVar5) * 0.5;
  fVar5 = -100.0;
  fVar4 = local_60 + -100.0;
  FUN_100642888(lVar1,0,0,1,1);
  fVar4 = fVar4 + fVar5 * -0.5;
  if ((*(float *)(param_1 + 0x29f0) != fVar6) || (*(float *)(param_1 + 0x29f4) != fVar4)) {
    *(float *)(param_1 + 0x29f0) = fVar6;
    *(float *)(param_1 + 0x29f4) = fVar4;
    FUN_1000200a0(lVar1);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x29b0) + 0x28))(lVar1,&local_58);
  lVar1 = param_1 + 0xde8;
  if ((*(float *)(param_1 + 0xe28) != 0.0) || (*(float *)(param_1 + 0xe2c) != local_60 * 0.7)) {
    *(undefined4 *)(param_1 + 0xe28) = 0;
    *(float *)(param_1 + 0xe2c) = local_60 * 0.7;
    FUN_1000200a0(lVar1);
  }
  local_58 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0xde8) + 0x28))(lVar1,&local_58);
  fVar5 = *(float *)(param_1 + 0x8b0);
  fVar4 = local_5c;
  if (fVar5 != local_5c * 0.5) {
    *(float *)(param_1 + 0x8b0) = local_5c * 0.5;
    FUN_1000200a0(param_1 + 0x870);
    fVar4 = local_5c;
  }
  fVar6 = *(float *)(param_1 + 0xe2c);
  FUN_100651184(lVar1);
  FUN_10053093c(fVar4,fVar5 + fVar6,param_1 + 0x338);
  return;
}




undefined8 * thunk_FUN_10025ea78(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_100269da8();
  FUN_10014f4a0(lVar1 + 200);
  *param_1 = &PTR_thunk_FUN_10025f468_10147b360;
  param_1[0x19] = &PTR_FUN_10147b4d0;
  FUN_10064e264(param_1 + 0x1c);
  thunk_FUN_1006543ec(param_1 + 0x33);
  FUN_10053077c(param_1 + 0x67,0);
  FUN_1006421a8(param_1 + 0x10e);
  param_1[0x10e] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x11f);
  thunk_FUN_100652c08(param_1 + 0x13d);
  thunk_FUN_100652c08(param_1 + 0x15b);
  thunk_FUN_100652c08(param_1 + 0x179);
  thunk_FUN_100650e64(param_1 + 0x197);
  thunk_FUN_100650e64(param_1 + 0x1bd);
  FUN_1001a246c(param_1 + 0x1e3);
  thunk_FUN_100650e64(param_1 + 0x259);
  thunk_FUN_100181304(param_1 + 0x27f,0);
  thunk_FUN_1001c0c34(param_1 + 0x536,0);
  FUN_10025eb5c(param_1);
  FUN_10025efc8(param_1);
  return param_1;
}




void FUN_10025f468(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_thunk_FUN_10025f468_10147b360;
  param_1[0x19] = &PTR_FUN_10147b4d0;
  param_1[0x536] = &PTR_FUN_10145e588;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x2e28) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 12000) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x2ef8);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x2e28);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_10064e2bc(param_1 + 0x536);
  FUN_10003bd40(param_1 + 0x27f);
  thunk_FUN_100651068(param_1 + 0x259);
  FUN_1001a7dd8(param_1 + 0x1e3);
  thunk_FUN_100651068(param_1 + 0x1bd);
  thunk_FUN_100651068(param_1 + 0x197);
  param_1[0x179] = &PTR_FUN_1014a7108;
  param_1[400] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x193);
  FUN_10064e2bc(param_1 + 0x179);
  param_1[0x15b] = &PTR_FUN_1014a7108;
  param_1[0x172] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x175);
  FUN_10064e2bc(param_1 + 0x15b);
  param_1[0x13d] = &PTR_FUN_1014a7108;
  param_1[0x154] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x157);
  FUN_10064e2bc(param_1 + 0x13d);
  param_1[0x11f] = &PTR_FUN_1014a7108;
  param_1[0x136] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x139);
  FUN_10064e2bc(param_1 + 0x11f);
  FUN_10064221c(param_1 + 0x10e);
  thunk_FUN_100530784(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x33);
  thunk_FUN_10064e2bc(param_1 + 0x1c);
  FUN_10014f51c(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_10025f468(void)

{
  FUN_10025f468();
  return;
}




void FUN_10025f5f0(long param_1)

{
  FUN_10025f468(param_1 + -200);
  return;
}




void FUN_10025f5f8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10025f468();
  operator_delete(pvVar1);
  return;
}




void FUN_10025f60c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10025f468(param_1 + -200);
  operator_delete(pvVar1);
  return;
}




void FUN_10025f624(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_10002f320();
  uVar1 = *(ulong *)(lVar3 + 0xe1a0);
  if (-1 < (char)*(byte *)(lVar3 + 0xe1af)) {
    uVar1 = (ulong)*(byte *)(lVar3 + 0xe1af);
  }
  if (((uVar1 == 0x12) &&
      (iVar2 = std::string::compare(lVar3 + 0xe198,0,(char *)0xffffffffffffffff,0x1013e4aba),
      iVar2 == 0)) && ((*(uint *)(param_1 + 0x2a34) >> 2 & 1) != 0)) {
    *(uint *)(param_1 + 0x2a34) = *(uint *)(param_1 + 0x2a34) & 0xfffffffb;
  }
  return;
}




void FUN_10025f69c(void)

{
  return;
}




void thunk_FUN_10025f6a4(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  FUN_100641464(auStack_34,auStack_38);
  if (param_2 == 0) {
    *(uint *)(param_1 + 0xf9c) = *(uint *)(param_1 + 0xf9c) & 0xfffffffb;
    uVar1 = FUN_100047714();
    FUN_10063f0e8(0x3f000000);
    FUN_10063fce0(0,uVar1);
    FUN_10063f130(uVar1,FUN_10001f160);
    FUN_100642324(param_1 + 0x198);
    FUN_100642b14(param_1 + 0x198,uVar1);
  }
  else {
    *(uint *)(param_1 + 0xf9c) = *(uint *)(param_1 + 0xf9c) | 4;
    *(uint *)(param_1 + 0x147c) = *(uint *)(param_1 + 0x147c) | 4;
    *(uint *)(param_1 + 0x2a34) = *(uint *)(param_1 + 0x2a34) & 0xfffffffb;
    FUN_1001c102c(param_1 + 0x29b0);
    uVar1 = FUN_100047714();
    FUN_10063f0e8(0x3f000000);
    FUN_10063fce0(0x3f800000,uVar1);
    FUN_10063f130(uVar1,FUN_10006bf9c);
    FUN_100642324(param_1 + 0x198);
    FUN_100642b14(param_1 + 0x198,uVar1);
    FUN_100642324(param_1 + 0x338);
    if (*(float *)(param_1 + 0x37c) != 0.0) {
      *(undefined4 *)(param_1 + 0x37c) = 0;
      FUN_1000200a0(param_1 + 0x338);
    }
    FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_season_sun_fly_dial.mp3",0,0);
    FUN_10025f7f4(param_1);
    FUN_10025fa64(param_1);
  }
  return;
}




void FUN_10025f6a4(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  FUN_100641464(auStack_34,auStack_38);
  if (param_2 == 0) {
    *(uint *)(param_1 + 0xf9c) = *(uint *)(param_1 + 0xf9c) & 0xfffffffb;
    uVar1 = FUN_100047714();
    FUN_10063f0e8(0x3f000000);
    FUN_10063fce0(0,uVar1);
    FUN_10063f130(uVar1,FUN_10001f160);
    FUN_100642324(param_1 + 0x198);
    FUN_100642b14(param_1 + 0x198,uVar1);
  }
  else {
    *(uint *)(param_1 + 0xf9c) = *(uint *)(param_1 + 0xf9c) | 4;
    *(uint *)(param_1 + 0x147c) = *(uint *)(param_1 + 0x147c) | 4;
    *(uint *)(param_1 + 0x2a34) = *(uint *)(param_1 + 0x2a34) & 0xfffffffb;
    FUN_1001c102c(param_1 + 0x29b0);
    uVar1 = FUN_100047714();
    FUN_10063f0e8(0x3f000000);
    FUN_10063fce0(0x3f800000,uVar1);
    FUN_10063f130(uVar1,FUN_10006bf9c);
    FUN_100642324(param_1 + 0x198);
    FUN_100642b14(param_1 + 0x198,uVar1);
    FUN_100642324(param_1 + 0x338);
    if (*(float *)(param_1 + 0x37c) != 0.0) {
      *(undefined4 *)(param_1 + 0x37c) = 0;
      FUN_1000200a0(param_1 + 0x338);
    }
    FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_season_sun_fly_dial.mp3",0,0);
    FUN_10025f7f4(param_1);
    FUN_10025fa64(param_1);
  }
  return;
}




void FUN_10025f7f4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar1 = FUN_1004e0150("MENU_DIALOG_END_SEASON_REWARDS_TITLE",0);
  thunk_FUN_1004e439c(auStack_30,uVar1);
  FUN_1004e3120(auStack_40,"[SEASON_NAME]");
  FUN_1000f0f78(auStack_50,0,1,0);
  FUN_1004e3bc4(auStack_30,0,auStack_40,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1004e3120(auStack_40,"[PREVIOUS_SEASON_NAME]");
  FUN_1000f0fc0(auStack_50,0,1,0);
  FUN_1004e3bc4(auStack_30,0,auStack_40,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1006513c0(param_1 + 0xcb8,auStack_30);
  FUN_10065179c(0x44660000,0,0x3f800000,param_1 + 0xcb8);
  uVar1 = FUN_1004e0150("MENU_DIALOG_END_SEASON_REWARDS_TEXT",0);
  thunk_FUN_1004e439c(auStack_40,uVar1);
  FUN_1004e3120(auStack_50,"[SEASON_NAME]");
  FUN_1000f0f78(auStack_60,0,1,0);
  FUN_1004e3d50(auStack_40,0,auStack_50,auStack_60);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  FUN_1004e3120(auStack_50,"[PREVIOUS_SEASON_NAME]");
  FUN_1000f0fc0(auStack_60,0,1,0);
  FUN_1004e3d50(auStack_40,0,auStack_50,auStack_60);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  FUN_1006513c0(param_1 + 0xde8,auStack_40);
  uVar1 = FUN_1004e0150("MENU_DIALOG_COLLECT_REWARDS",0);
  thunk_FUN_1004e439c(auStack_50,uVar1);
  FUN_1004e3120(auStack_60,"[PREVIOUS_SEASON_NAME]");
  FUN_1000f0fc0(auStack_70,0,1,0);
  FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  FUN_100181af8(param_1 + 0x13f8,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_10025fa64(long param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  undefined1 auStack_40 [8];
  void *local_38;
  
  lVar3 = FUN_1000fd654();
  if (lVar3 != 0) {
    FUN_1004e313c(auStack_40);
    uVar1 = *(uint *)(lVar3 + 0x60);
    FUN_1004e38ac(auStack_40,"%d");
    FUN_1001a24a0((float)uVar1,param_1 + 0xf18);
    FUN_1006513c0(param_1 + 0x12c8,auStack_40);
    uVar1 = uVar1 % 10;
    fVar4 = -20.0;
    if (uVar1 != 4 && uVar1 != 1) {
      fVar4 = 0.0;
    }
    bVar2 = false;
    if ((*(float *)(param_1 + 0x1308) == fVar4) &&
       (bVar2 = false, !NAN(*(float *)(param_1 + 0x130c)))) {
      bVar2 = *(float *)(param_1 + 0x130c) == 30.0;
    }
    if (!bVar2) {
      *(float *)(param_1 + 0x1308) = fVar4;
      *(undefined4 *)(param_1 + 0x130c) = 0x41f00000;
      FUN_1000200a0(param_1 + 0x12c8);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return;
}




void FUN_10025fb48(long param_1)

{
  FUN_1000ec2a0();
  *(uint *)(param_1 + 0x147c) = *(uint *)(param_1 + 0x147c) & 0xfffffffb;
  *(uint *)(param_1 + 0x2a34) = *(uint *)(param_1 + 0x2a34) | 4;
  FUN_1001c0e10(param_1 + 0x29b0);
  return;
}




void FUN_10025fb88(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d23554,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_10025fbd4(long param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d23554,0);
  FUN_100644c34(param_1 + -200,auStack_40,1);
  return;
}




void FUN_10025fc20(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10025fca0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10025fca0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




long * FUN_10025fd1c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  puVar10 = (undefined8 *)FUN_100269da8();
  *puVar10 = &PTR_thunk_FUN_100260244_10147b868;
  puVar10 = puVar10 + 0x19;
  FUN_10053319c(puVar10,0);
  plVar1 = param_1 + 0xc4;
  thunk_FUN_100183990(plVar1,0);
  plVar2 = param_1 + 0x182;
  thunk_FUN_100183990(plVar2,0);
  param_1[0x241] = 0;
  param_1[0x240] = 0;
  plVar3 = param_1 + 0x242;
  thunk_FUN_1006543ec(plVar3);
  FUN_10064e264(param_1 + 0x276);
  FUN_10064e264(param_1 + 0x28d);
  plVar4 = param_1 + 0x2a4;
  thunk_FUN_100650e64(plVar4);
  thunk_FUN_1001ceb64(param_1 + 0x2ca,0);
  plVar5 = param_1 + 0x2e7;
  thunk_FUN_100650e64(plVar5);
  lVar12 = DAT_101dc1cb8;
  param_1[0x30d] = DAT_101dc1cb8;
  param_1[0x30e] = lVar12;
  *(undefined4 *)(param_1 + 0x30f) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,puVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x276,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x28d,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2ca,1);
  iVar9 = FUN_100126c88();
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  uVar11 = FUN_1004e0150("MENU_TROPHY_DATA_ERROR",0);
  FUN_1006513c0(plVar5,uVar11);
  FUN_100651700(plVar5,3);
  FUN_100530adc(puVar10,1,0);
  FUN_100530adc(puVar10,DAT_101854ae0 == '\0');
  *(uint *)((long)param_1 + 0x1434) = *(uint *)((long)param_1 + 0x1434) | 0x10;
  FUN_100652cdc(param_1 + 0x15e,"arrow_down");
  *(byte *)(param_1 + 0x179) = *(byte *)(param_1 + 0x179) | 2;
  if ((*(float *)(param_1 + 0x167) != 2.0) || (*(float *)((long)param_1 + 0xb3c) != 2.0)) {
    param_1[0x167] = 0x4000000040000000;
    FUN_1000200a0(param_1 + 0x15e);
  }
  FUN_100183c50(0,plVar1,&DAT_10115a164);
  lVar12 = NEON_fmov(0x3f800000,4);
  if ((*(float *)(param_1 + 0xcd) != 1.0) || (*(float *)((long)param_1 + 0x66c) != 1.0)) {
    param_1[0xcd] = lVar12;
    FUN_1000200a0(plVar1);
  }
  FUN_1001b495c(0,plVar1);
  FUN_100183ca8(plVar1,1);
  uVar7 = *(uint *)((long)param_1 + 0x6a4);
  if ((uVar7 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x6a4) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar1);
  }
  uVar8 = DAT_101d91884;
  local_78 = DAT_101d91884;
  local_a0 = FUN_100260220;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0xc5,&local_a0);
  *(uint *)((long)param_1 + 0x6a4) = *(uint *)((long)param_1 + 0x6a4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x14ec) = *(uint *)((long)param_1 + 0x14ec) | 0x10;
  FUN_100652cdc(param_1 + 0x21c,"arrow_down");
  if ((*(float *)(param_1 + 0x225) != 2.0) || (*(float *)((long)param_1 + 0x112c) != 2.0)) {
    param_1[0x225] = 0x4000000040000000;
    FUN_1000200a0(param_1 + 0x21c);
  }
  FUN_100183c50(0,plVar2,&DAT_10115a164);
  if ((*(float *)(param_1 + 0x18b) != 1.0) || (*(float *)((long)param_1 + 0xc5c) != 1.0)) {
    param_1[0x18b] = lVar12;
    FUN_1000200a0(plVar2);
  }
  FUN_1001b495c(0,plVar2);
  FUN_100183ca8(plVar2,1);
  uVar7 = *(uint *)((long)param_1 + 0xc94);
  if ((uVar7 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xc94) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar2);
  }
  local_78 = uVar8;
  local_a0 = FUN_100260228;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x183,&local_a0);
  *(uint *)((long)param_1 + 0xc94) = *(uint *)((long)param_1 + 0xc94) & 0xfffffffb;
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar9 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230;
  }
  FUN_100651594(plVar4,*ppuVar6,&DAT_10115a168);
  uVar11 = FUN_1004e0150("MENU_TROPHY_PAGE_DOWN_ARROW_LABEL",0);
  FUN_1006513c0(plVar4,uVar11);
  local_78 = FUN_100644a94("EVENT_SCROLLING_TO_PAGE");
  local_a0 = FUN_100260230;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&local_a0);
  local_78 = FUN_100644a94("EVENT_SCROLLING_FINISHED");
  local_a0 = FUN_100260238;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&local_a0);
  return param_1;
}




long * thunk_FUN_10025fd1c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar10 = (undefined8 *)FUN_100269da8();
  *puVar10 = &PTR_thunk_FUN_100260244_10147b868;
  puVar10 = puVar10 + 0x19;
  FUN_10053319c(puVar10,0);
  plVar1 = param_1 + 0xc4;
  thunk_FUN_100183990(plVar1,0);
  plVar2 = param_1 + 0x182;
  thunk_FUN_100183990(plVar2,0);
  param_1[0x241] = 0;
  param_1[0x240] = 0;
  plVar3 = param_1 + 0x242;
  thunk_FUN_1006543ec(plVar3);
  FUN_10064e264(param_1 + 0x276);
  FUN_10064e264(param_1 + 0x28d);
  plVar4 = param_1 + 0x2a4;
  thunk_FUN_100650e64(plVar4);
  thunk_FUN_1001ceb64(param_1 + 0x2ca,0);
  plVar5 = param_1 + 0x2e7;
  thunk_FUN_100650e64(plVar5);
  lVar12 = DAT_101dc1cb8;
  param_1[0x30d] = DAT_101dc1cb8;
  param_1[0x30e] = lVar12;
  *(undefined4 *)(param_1 + 0x30f) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,puVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x276,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x28d,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2ca,1);
  iVar9 = FUN_100126c88();
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  uVar11 = FUN_1004e0150("MENU_TROPHY_DATA_ERROR",0);
  FUN_1006513c0(plVar5,uVar11);
  FUN_100651700(plVar5,3);
  FUN_100530adc(puVar10,1,0);
  FUN_100530adc(puVar10,DAT_101854ae0 == '\0');
  *(uint *)((long)param_1 + 0x1434) = *(uint *)((long)param_1 + 0x1434) | 0x10;
  FUN_100652cdc(param_1 + 0x15e,"arrow_down");
  *(byte *)(param_1 + 0x179) = *(byte *)(param_1 + 0x179) | 2;
  if ((*(float *)(param_1 + 0x167) != 2.0) || (*(float *)((long)param_1 + 0xb3c) != 2.0)) {
    param_1[0x167] = 0x4000000040000000;
    FUN_1000200a0(param_1 + 0x15e);
  }
  FUN_100183c50(0,plVar1,&DAT_10115a164);
  lVar12 = NEON_fmov(0x3f800000,4);
  if ((*(float *)(param_1 + 0xcd) != 1.0) || (*(float *)((long)param_1 + 0x66c) != 1.0)) {
    param_1[0xcd] = lVar12;
    FUN_1000200a0(plVar1);
  }
  FUN_1001b495c(0,plVar1);
  FUN_100183ca8(plVar1,1);
  uVar7 = *(uint *)((long)param_1 + 0x6a4);
  if ((uVar7 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x6a4) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar1);
  }
  uVar8 = DAT_101d91884;
  uStack_78 = DAT_101d91884;
  pcStack_a0 = FUN_100260220;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0xc5,&pcStack_a0);
  *(uint *)((long)param_1 + 0x6a4) = *(uint *)((long)param_1 + 0x6a4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x14ec) = *(uint *)((long)param_1 + 0x14ec) | 0x10;
  FUN_100652cdc(param_1 + 0x21c,"arrow_down");
  if ((*(float *)(param_1 + 0x225) != 2.0) || (*(float *)((long)param_1 + 0x112c) != 2.0)) {
    param_1[0x225] = 0x4000000040000000;
    FUN_1000200a0(param_1 + 0x21c);
  }
  FUN_100183c50(0,plVar2,&DAT_10115a164);
  if ((*(float *)(param_1 + 0x18b) != 1.0) || (*(float *)((long)param_1 + 0xc5c) != 1.0)) {
    param_1[0x18b] = lVar12;
    FUN_1000200a0(plVar2);
  }
  FUN_1001b495c(0,plVar2);
  FUN_100183ca8(plVar2,1);
  uVar7 = *(uint *)((long)param_1 + 0xc94);
  if ((uVar7 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xc94) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar2);
  }
  uStack_78 = uVar8;
  pcStack_a0 = FUN_100260228;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x183,&pcStack_a0);
  *(uint *)((long)param_1 + 0xc94) = *(uint *)((long)param_1 + 0xc94) & 0xfffffffb;
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar9 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230;
  }
  FUN_100651594(plVar4,*ppuVar6,&DAT_10115a168);
  uVar11 = FUN_1004e0150("MENU_TROPHY_PAGE_DOWN_ARROW_LABEL",0);
  FUN_1006513c0(plVar4,uVar11);
  uStack_78 = FUN_100644a94("EVENT_SCROLLING_TO_PAGE");
  pcStack_a0 = FUN_100260230;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_a0);
  uStack_78 = FUN_100644a94("EVENT_SCROLLING_FINISHED");
  pcStack_a0 = FUN_100260238;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_a0);
  return param_1;
}

