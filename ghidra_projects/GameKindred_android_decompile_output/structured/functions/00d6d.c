// functions/00d6d — 23 functions
#include "libGameKindred.h"




undefined8 FUN_00d6d004(long param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  
  lVar3 = FUN_00d9e390(param_2);
  if (lVar3 != 0) {
    if ((*(byte *)(lVar3 + 0x2f4) & 1) != 0) {
      uVar4 = 0;
      do {
        uVar6 = 0;
        lVar3 = 0x28;
        do {
          piVar8 = (int *)(param_1 + lVar3);
          lVar3 = lVar3 + 0xc;
          if (*piVar8 != -1) {
            uVar6 = uVar6 + 1;
          }
        } while (lVar3 != 0x70);
        if (uVar6 <= uVar4) {
          return 0;
        }
        uVar7 = 0;
        uVar6 = 0;
        piVar8 = (int *)(param_1 + 0x28);
        do {
          if (*piVar8 != -1) {
            iVar1 = *piVar8;
            if (uVar6 == uVar4) break;
            uVar6 = uVar6 + 1;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 3;
          iVar1 = -1;
        } while (uVar7 < 6);
        if (iVar1 == param_2) goto code_r0x00d6d104;
        uVar4 = uVar4 + 1;
      } while( true );
    }
    iVar1 = FUN_00d6ce28(param_1);
    if (0 < iVar1) {
      iVar1 = 0;
      lVar3 = 0x30;
      do {
        iVar2 = FUN_00d6ce90(param_1,iVar1);
        if (iVar2 == param_2) {
          uVar5 = *(undefined4 *)(param_1 + lVar3);
          goto LAB_00d6d120;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_00d6ce28(param_1);
        lVar3 = lVar3 + 0xc;
      } while (iVar1 < iVar2);
    }
  }
  return 0;
code_r0x00d6d104:
  uVar5 = *(undefined4 *)(param_1 + (ulong)uVar4 * 0xc + 0x30);
LAB_00d6d120:
  *param_3 = uVar5;
  return 1;
}




void FUN_00d6d13c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 0) {
    return;
  }
  FUN_00d5cf60(param_3);
  lVar1 = FUN_00d9e390();
  lVar2 = param_3;
  if (((*(byte *)(param_3 + 0x2f4) & 1) == 0) &&
     ((lVar1 == 0 || (lVar2 = lVar1, (*(byte *)(lVar1 + 0x2f4) & 1) == 0)))) {
    FUN_00d6d248(param_1,param_2,param_3);
    return;
  }
  FUN_00d6d1d0(param_1,param_2,lVar2);
  return;
}




void FUN_00d6d1d0(int param_1,long param_2,long param_3)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = 0;
  piVar2 = (int *)(param_2 + 0x28);
  while ((*piVar2 != *(int *)(param_3 + 0x260) && (*piVar2 != -1))) {
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 3;
    if (5 < uVar1) {
      return;
    }
  }
  *piVar2 = *(int *)(param_3 + 0x260);
  piVar2[1] = param_1;
  iVar3 = FUN_009bc24c();
  piVar2[2] = iVar3;
  *(int *)(param_2 + 0xe8) = (int)uVar1;
  return;
}




void FUN_00d6d248(undefined4 param_1,long param_2,long param_3)

{
  int iVar1;
  float fVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  uVar3 = 0;
  pfVar6 = (float *)(param_2 + 0x78);
  fVar8 = 3.4028235e+38;
  iVar4 = -1;
  while( true ) {
    fVar2 = pfVar6[-2];
    iVar5 = (int)uVar3;
    if (fVar2 == -NAN) break;
    fVar9 = *pfVar6;
    iVar1 = iVar5;
    if (fVar8 <= fVar9) {
      iVar1 = iVar4;
    }
    if ((fVar2 == -NAN) || (fVar2 == *(float *)(param_3 + 0x260))) break;
    uVar3 = uVar3 + 1;
    if (fVar8 <= fVar9) {
      fVar9 = fVar8;
    }
    pfVar6 = pfVar6 + 3;
    fVar8 = fVar9;
    iVar4 = iVar1;
    iVar5 = iVar1;
    if (9 < uVar3) break;
  }
  param_2 = param_2 + (long)iVar5 * 0xc;
  *(float *)(param_2 + 0x70) = *(float *)(param_3 + 0x260);
  *(undefined4 *)(param_2 + 0x74) = param_1;
  uVar7 = FUN_009bc24c();
  *(undefined4 *)(param_2 + 0x78) = uVar7;
  return;
}




void FUN_00d6d2e8(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_00d6d30c(undefined8 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_0281dee0;
  lVar2 = 0x28;
  do {
    puVar1 = (undefined4 *)((long)param_1 + lVar2);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0xffffffff;
    lVar2 = lVar2 + 0xc;
  } while ((undefined8 *)(puVar1 + 3) != param_1 + 0xe);
  lVar2 = 0x70;
  do {
    puVar1 = (undefined4 *)((long)param_1 + lVar2);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0xffffffff;
    lVar2 = lVar2 + 0xc;
  } while ((undefined8 *)(puVar1 + 3) != param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  return;
}




void FUN_00d6d370(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d6d378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d6d37c(undefined8 param_1)

{
  FUN_00d4fa7c();
  FUN_00d528c0(param_1);
  FUN_00d554c4(param_1);
  FUN_00d5f21c(param_1);
  FUN_00d5edc8(param_1);
  FUN_00d61a3c(param_1);
  FUN_00d5fc34(param_1);
  FUN_00d61ce4(param_1);
  FUN_00d62860(param_1);
  FUN_00d62d9c(param_1);
  FUN_00d66920(param_1);
  FUN_00d6a614(param_1);
  FUN_00d6ac68(param_1);
  FUN_00d6cb28(param_1);
  FUN_00d6d4f8(param_1);
  FUN_00e5dfac(param_1);
  FUN_00d6e7d4(param_1);
  FUN_00d6ec98(param_1);
  FUN_00d6f810(param_1);
  FUN_00d6feec(param_1);
  FUN_00d709c4(param_1);
  FUN_00d70bc4(param_1);
  FUN_00d70f64(param_1);
  FUN_00d73fc4(param_1);
  FUN_00d72678(param_1);
  FUN_00d75788(param_1);
  FUN_00d7685c(param_1);
  FUN_00d77268(param_1);
  FUN_00d778bc(param_1);
  FUN_00d82184(param_1);
  FUN_00d77d50(param_1);
  FUN_00d798c4(param_1);
  FUN_00d8048c(param_1);
  FUN_00d79508(param_1);
  FUN_00d79b98(param_1);
  FUN_00d7a02c(param_1);
  FUN_00d7ab28(param_1);
  FUN_00d7af30(param_1);
  FUN_00d7bc74(param_1);
  FUN_00d7befc(param_1);
  FUN_00d7c170(param_1);
  FUN_00d7c448(param_1);
  FUN_00d7c694(param_1);
  FUN_00d7d76c(param_1);
  FUN_00d7d9c8(param_1);
  return;
}




void FUN_00d6d4f8(long param_1)

{
  long lVar1;
  
  DAT_02c7bf1c = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_02c7bf1c + 1;
  lVar1 = param_1 + (ulong)DAT_02c7bf1c * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d6e6f8;
  *(code **)(lVar1 + 0xb8) = FUN_00d6e71c;
  *(uint *)(lVar1 + 0xa4) = DAT_02c7bf1c;
  *(undefined4 *)(lVar1 + 0xa8) = 0x70;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x4b0;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_00d6d558(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_0281df10;
  param_1[5] = &PTR_FUN_0281df48;
  param_1[7] = &PTR_FUN_0281df78;
  param_1[8] = 0;
  uVar1 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x6a) = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0xbf8000003f800000;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 9) = uVar1;
  *(byte *)((long)param_1 + 0x6b) = *(byte *)((long)param_1 + 0x6b) & 0xe0;
  return;
}




void FUN_00d6d5e0(long param_1,undefined4 *param_2,byte param_3,byte param_4,byte param_5,
                 byte param_6)

{
  *(undefined4 *)(param_1 + 0x50) = *param_2;
  *(byte *)(param_1 + 0x6b) =
       param_3 & 3 | (param_4 & 1) << 2 | (param_5 & 1) << 3 | (param_6 & 1) << 4 |
       *(byte *)(param_1 + 0x6b) & 0xe0;
  return;
}




void FUN_00d6d618(long param_1,byte param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)((int)*(char *)(param_1 + 0x69) + (uint)*(byte *)(param_1 + 0x68));
  fVar1 = (float)param_2;
  if (fVar2 <= (float)param_2) {
    fVar1 = fVar2;
  }
  *(char *)(param_1 + 0x6a) = (char)(int)fVar1;
  FUN_00d6d644();
  return;
}




void FUN_00d6d644(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  if (*(float *)(param_2 + 0x54) < 0.0) {
    return;
  }
  plVar4 = *(long **)(param_2 + 0x40);
  if (plVar4 == (long *)0x0) {
LAB_00d6d6f8:
    lVar5 = FUN_01985d44(param_2,DAT_0312e6d4);
    uVar3 = DAT_03214ce8;
    if (lVar5 == 0) {
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
    else {
      iVar2 = *(int *)(lVar5 + 0x30);
      *(long **)(param_2 + 0x40) = (long *)(lVar5 + 0x28);
      *(int *)(param_2 + 0x48) = iVar2;
      if (iVar2 == *(int *)(lVar5 + 0x30)) {
        lVar5 = (**(code **)(*(long *)(lVar5 + 0x28) + 0x10))();
        if (lVar5 == 0) {
          return;
        }
        plVar4 = *(long **)(param_2 + 0x40);
        uVar6 = 0;
        if (plVar4 != (long *)0x0) {
          if (*(int *)(param_2 + 0x48) == (int)plVar4[1]) {
            uVar6 = (**(code **)(*plVar4 + 0x10))();
          }
          else {
            *(undefined8 *)(param_2 + 0x40) = 0;
            uVar6 = 0;
            *(undefined4 *)(param_2 + 0x48) = DAT_03214ce8;
          }
        }
        FUN_00d7bf88(param_1,uVar6,param_2 + 0x38);
        goto LAB_00d6d7b4;
      }
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
    *(undefined4 *)(param_2 + 0x48) = uVar3;
  }
  else {
    if (*(int *)(param_2 + 0x48) != (int)plVar4[1]) {
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined4 *)(param_2 + 0x48) = DAT_03214ce8;
      goto LAB_00d6d6f8;
    }
    lVar5 = (**(code **)(*plVar4 + 0x10))();
    if (lVar5 == 0) goto LAB_00d6d6f8;
    plVar4 = *(long **)(param_2 + 0x40);
    uVar6 = 0;
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_2 + 0x48) == (int)plVar4[1]) {
        uVar6 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        *(undefined8 *)(param_2 + 0x40) = 0;
        uVar6 = 0;
        *(undefined4 *)(param_2 + 0x48) = DAT_03214ce8;
      }
    }
    uVar7 = FUN_01985dc8(uVar6);
    if ((uVar7 & 1) != 0) goto LAB_00d6d6f8;
LAB_00d6d7b4:
    if (*(char *)(param_2 + 0x6a) == '\0') {
      lVar5 = *(long *)(param_2 + 0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c09220) {
        lVar5 = 0;
      }
      uVar10 = 0xffff0000;
      lVar8 = lVar5;
LAB_00d6d830:
      do {
        do {
          lVar9 = lVar8;
          if ((lVar9 != lVar5) &&
             (lVar8 = FUN_019865b4(*(undefined8 *)(lVar9 + 8),0x457106fa), lVar8 != 0)) {
            (**(code **)(lVar8 + 8))(lVar9,param_2);
          }
          if (((uVar10 & 0xffff) < uVar10 >> 0x10) && (lVar8 = *(long *)(lVar9 + 0x18), lVar8 != 0))
          {
            uVar10 = uVar10 & 0xffff0000 | uVar10 + 1 & 0xffff;
            goto LAB_00d6d830;
          }
          if ((uVar10 & 0xffff) == 0) {
            return;
          }
          lVar8 = *(long *)(lVar9 + 0x20);
        } while (*(long *)(lVar9 + 0x20) != 0);
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        uVar1 = uVar10 - 1 & 0xffff;
        if (uVar1 == 0) {
          return;
        }
        uVar10 = uVar1 | uVar10 & 0xffff0000;
        while (lVar8 = *(long *)(lVar9 + 0x20), lVar8 == 0) {
          if ((uVar10 - 1 & 0xffff) == 0) {
            return;
          }
          lVar9 = *(long *)(lVar9 + 0x10);
          uVar10 = uVar10 & 0xffff0000 | uVar10 - 1 & 0xffff;
          if (lVar9 == 0) {
            return;
          }
        }
      } while( true );
    }
  }
  return;
}




float FUN_00d6d8a4(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_1 + 0x60);
  if (fVar2 < 0.0) {
    fVar2 = (*(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x58)) * *(float *)(param_1 + 0x5c);
  }
  if ((*(byte *)(param_1 + 0x6b) >> 3 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c09220) {
      lVar1 = 0;
    }
    lVar1 = *(long *)(lVar1 + 0x40);
    fVar3 = (*(float *)(lVar1 + 0x204) + 1.0) *
            (*(float *)(lVar1 + 0x9c) +
            *(float *)(lVar1 + 0x150) * (*(float *)(lVar1 + 0x2b8) + 1.0));
    if (DAT_031a9c84 <= fVar3) {
      fVar3 = DAT_031a9c84;
    }
    fVar4 = DAT_031a9bc4;
    if (DAT_031a9bc4 <= fVar3) {
      fVar4 = fVar3;
    }
    fVar2 = fVar2 * (1.0 - fVar4);
  }
  if ((*(byte *)(param_1 + 0x6b) >> 4 & 1) == 0) {
    return fVar2;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c09220) {
    lVar1 = 0;
  }
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar1 + 0x1dc) + 1.0) *
          (*(float *)(lVar1 + 0x74) + *(float *)(lVar1 + 0x128) * (*(float *)(lVar1 + 0x290) + 1.0))
  ;
  if (DAT_031a9c5c <= fVar3) {
    fVar3 = DAT_031a9c5c;
  }
  fVar4 = DAT_031a9b9c;
  if (DAT_031a9b9c <= fVar3) {
    fVar4 = fVar3;
  }
  return fVar2 / fVar4;
}




long FUN_00d6d9c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c09220) {
      lVar1 = 0;
    }
    return lVar1;
  }
  return 0;
}




undefined1  [16] FUN_00d6d9f4(long param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(char *)(param_1 + 0x6a) != '\0') {
    return ZEXT816(0);
  }
  FUN_00d6da08();
  auVar1._4_4_ = extraout_var;
  auVar1._0_4_ = extraout_s0;
  auVar1._8_8_ = extraout_var_00;
  return auVar1;
}




undefined4 FUN_00d6da08(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  plVar1 = *(long **)(param_1 + 0x40);
  uVar5 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x40);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x40) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
          }
        }
        uVar4 = FUN_01985dc8(uVar3);
        if ((uVar4 & 1) == 0) {
          lVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          uVar5 = *(undefined4 *)(lVar2 + 0x44);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  return uVar5;
}




undefined4 FUN_00d6dad0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  plVar1 = *(long **)(param_1 + 0x40);
  uVar5 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x40);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x40) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
          }
        }
        uVar4 = FUN_01985dc8(uVar3);
        if ((uVar4 & 1) == 0) {
          lVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          uVar5 = *(undefined4 *)(lVar2 + 0x40);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  return uVar5;
}




void FUN_00d6db98(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_00d6d8a4();
  fVar2 = fVar1 + 0.1;
  if (fVar1 <= 0.0) {
    fVar2 = fVar1;
  }
  if ((*(byte *)(param_1 + 0x6b) & 3) == 0) {
    fVar1 = *(float *)(param_1 + 100);
    *(undefined4 *)(param_1 + 100) = 0;
    fVar2 = fVar2 - fVar1;
  }
  fVar1 = (float)(int)(*(byte *)(param_1 + 0x6a) - 1);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  FUN_00d6e30c(param_1,(int)fVar1);
  FUN_00d6d644(fVar2,param_1);
  return;
}




void FUN_00d6dc14(long param_1,int param_2)

{
  float fVar1;
  
  fVar1 = (float)(int)((uint)*(byte *)(param_1 + 0x6a) + param_2);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  FUN_00d6e30c(param_1,(int)fVar1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d6dc30(undefined8 param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  plVar2 = *(long **)(param_2 + 0x40);
  fVar9 = (float)param_1;
  if (plVar2 == (long *)0x0) {
LAB_00d6dcd8:
    if (fVar9 <= 0.0) {
      return;
    }
    fVar9 = (float)(int)(*(byte *)(param_2 + 0x6a) - 1);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    FUN_00d6e30c(param_2,(int)fVar9);
    FUN_00d6d644(param_1,param_2);
    return;
  }
  if (*(int *)(param_2 + 0x48) != (int)plVar2[1]) {
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_2 + 0x48) = DAT_03214ce8;
    goto LAB_00d6dcd8;
  }
  lVar3 = (**(code **)(*plVar2 + 0x10))();
  if (lVar3 == 0) goto LAB_00d6dcd8;
  plVar2 = *(long **)(param_2 + 0x40);
  uVar4 = 0;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_2 + 0x48) == (int)plVar2[1]) {
      uVar4 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      *(undefined8 *)(param_2 + 0x40) = 0;
      uVar4 = 0;
      *(undefined4 *)(param_2 + 0x48) = DAT_03214ce8;
    }
  }
  uVar5 = FUN_01985dc8(uVar4);
  if ((uVar5 & 1) != 0) goto LAB_00d6dcd8;
  if (fVar9 <= 0.0) {
    fVar9 = (float)(*(byte *)(param_2 + 0x6a) + 1);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    FUN_00d6e30c(param_2,(int)fVar9);
    FUN_00d6df14(param_2);
    return;
  }
  plVar2 = *(long **)(param_2 + 0x40);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_2 + 0x48) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      plVar2 = *(long **)(param_2 + 0x40);
      fVar10 = *(float *)(lVar3 + 0x44);
      uVar4 = 0;
      if (plVar2 != (long *)0x0) {
        if (*(int *)(param_2 + 0x48) == (int)plVar2[1]) {
          uVar4 = (**(code **)(*plVar2 + 0x10))();
        }
        else {
          *(undefined8 *)(param_2 + 0x40) = 0;
          uVar4 = 0;
          *(undefined4 *)(param_2 + 0x48) = DAT_03214ce8;
        }
      }
      goto LAB_00d6ddd8;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_2 + 0x48) = DAT_03214ce8;
  }
  uVar4 = 0;
  fVar10 = _DAT_00000044;
LAB_00d6ddd8:
  FUN_00d7bf94(param_1,uVar4);
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c09220) {
    return;
  }
  uVar8 = 0xffff0000;
  lVar6 = lVar3;
LAB_00d6de54:
  do {
    do {
      lVar7 = lVar6;
      if ((lVar7 != lVar3) &&
         (lVar6 = FUN_019865b4(*(undefined8 *)(lVar7 + 8),0x4c810744), lVar6 != 0)) {
        (**(code **)(lVar6 + 8))((double)(fVar9 - fVar10),lVar7,param_2);
      }
      if (((uVar8 & 0xffff) < uVar8 >> 0x10) && (lVar6 = *(long *)(lVar7 + 0x18), lVar6 != 0)) {
        uVar8 = uVar8 & 0xffff0000 | uVar8 + 1 & 0xffff;
        goto LAB_00d6de54;
      }
      if ((uVar8 & 0xffff) == 0) {
        return;
      }
      lVar6 = *(long *)(lVar7 + 0x20);
    } while (*(long *)(lVar7 + 0x20) != 0);
    lVar7 = *(long *)(lVar7 + 0x10);
    if (lVar7 == 0) {
      return;
    }
    uVar1 = uVar8 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar8 = uVar1 | uVar8 & 0xffff0000;
    while (lVar6 = *(long *)(lVar7 + 0x20), lVar6 == 0) {
      if ((uVar8 - 1 & 0xffff) == 0) {
        return;
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      uVar8 = uVar8 & 0xffff0000 | uVar8 - 1 & 0xffff;
      if (lVar7 == 0) {
        return;
      }
    }
  } while( true );
}




long FUN_00d6dee8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c09220) {
      lVar1 = 0;
    }
    return lVar1;
  }
  return 0;
}




void FUN_00d6df14(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  plVar3 = *(long **)(param_1 + 0x40);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        plVar3 = *(long **)(param_1 + 0x40);
        uVar5 = 0;
        if (plVar3 != (long *)0x0) {
          if (*(int *)(param_1 + 0x48) == (int)plVar3[1]) {
            uVar5 = (**(code **)(*plVar3 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x40) = 0;
            uVar5 = 0;
            *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
          }
        }
        uVar6 = FUN_01985dc8(uVar5);
        if ((uVar6 & 1) == 0) {
          plVar3 = *(long **)(param_1 + 0x40);
          uVar5 = 0;
          if (plVar3 != (long *)0x0) {
            if (*(int *)(param_1 + 0x48) == (int)plVar3[1]) {
              uVar5 = (**(code **)(*plVar3 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x40) = 0;
              uVar5 = 0;
              *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
            }
          }
          FUN_01985ca8(uVar5);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  if ((int)*(char *)(param_1 + 0x69) + (uint)*(byte *)(param_1 + 0x68) ==
      (uint)*(byte *)(param_1 + 0x6a)) {
    return;
  }
  lVar4 = FUN_01985d44(param_1,DAT_0312e6d4);
  uVar2 = DAT_03214ce8;
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    iVar1 = *(int *)(lVar4 + 0x30);
    *(long **)(param_1 + 0x40) = (long *)(lVar4 + 0x28);
    *(int *)(param_1 + 0x48) = iVar1;
    if (iVar1 == *(int *)(lVar4 + 0x30)) {
      uVar5 = (**(code **)(*(long *)(lVar4 + 0x28) + 0x10))();
      goto LAB_00d6e094;
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
LAB_00d6e094:
  FUN_00d6d8a4(param_1);
  FUN_00d7bf88(uVar5,param_1 + 0x38);
  return;
}

