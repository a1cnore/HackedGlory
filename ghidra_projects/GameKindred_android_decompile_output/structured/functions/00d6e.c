// functions/00d6e — 56 functions
#include "libGameKindred.h"




void FUN_00d6e0b0(float param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d6da08();
  FUN_00d6dc30(fVar1 + param_1,param_2);
  return;
}




void FUN_00d6e0e4(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  plVar1 = *(long **)(param_1 + 0x40);
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
          FUN_00d7bfc8(uVar3,param_2 & 1);
          return;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  return;
}




undefined8 FUN_00d6e1dc(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  plVar1 = *(long **)(param_1 + 0x40);
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
          uVar3 = FUN_00d7bfd4(uVar3);
          return uVar3;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  return 0;
}




void FUN_00d6e2d0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x54) = param_1;
  return;
}




void FUN_00d6e2d8(float param_1,long param_2)

{
  *(float *)(param_2 + 0x58) = *(float *)(param_2 + 0x58) + param_1;
  return;
}




void FUN_00d6e2e8(float param_1,long param_2)

{
  *(float *)(param_2 + 0x5c) = *(float *)(param_2 + 0x5c) * param_1;
  return;
}




void FUN_00d6e2f8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x60) = param_1;
  return;
}




void FUN_00d6e300(long param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0xbf800000;
  return;
}




void FUN_00d6e30c(long param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  cVar2 = *(char *)(param_1 + 0x6a);
  fVar9 = (float)((int)*(char *)(param_1 + 0x69) + (uint)*(byte *)(param_1 + 0x68));
  fVar8 = (float)param_2;
  if (fVar9 <= (float)param_2) {
    fVar8 = fVar9;
  }
  iVar4 = (int)fVar8;
  *(char *)(param_1 + 0x6a) = (char)iVar4;
  if (cVar2 == '\0') {
    if (iVar4 != 0) {
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c09220) {
        lVar5 = 0;
      }
      uVar7 = 0xffff0000;
      lVar3 = lVar5;
LAB_00d6e4a0:
      do {
        do {
          lVar6 = lVar3;
          if ((lVar6 != lVar5) &&
             (lVar3 = FUN_019865b4(*(undefined8 *)(lVar6 + 8),0x366b0603), lVar3 != 0)) {
            (**(code **)(lVar3 + 8))(lVar6,param_1);
          }
          if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar3 = *(long *)(lVar6 + 0x18), lVar3 != 0)) {
            uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
            goto LAB_00d6e4a0;
          }
          if ((uVar7 & 0xffff) == 0) {
            return;
          }
          lVar3 = *(long *)(lVar6 + 0x20);
        } while (*(long *)(lVar6 + 0x20) != 0);
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return;
        }
        uVar1 = uVar7 - 1 & 0xffff;
        if (uVar1 == 0) {
          return;
        }
        uVar7 = uVar1 | uVar7 & 0xffff0000;
        while (lVar3 = *(long *)(lVar6 + 0x20), lVar3 == 0) {
          if ((uVar7 - 1 & 0xffff) == 0) {
            return;
          }
          lVar6 = *(long *)(lVar6 + 0x10);
          uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
          if (lVar6 == 0) {
            return;
          }
        }
      } while( true );
    }
  }
  else if (iVar4 == 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c09220) {
      lVar5 = 0;
    }
    uVar7 = 0xffff0000;
    lVar3 = lVar5;
LAB_00d6e3f0:
    do {
      do {
        lVar6 = lVar3;
        if ((lVar6 != lVar5) &&
           (lVar3 = FUN_019865b4(*(undefined8 *)(lVar6 + 8),0x457106fa), lVar3 != 0)) {
          (**(code **)(lVar3 + 8))(lVar6,param_1);
        }
        if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar3 = *(long *)(lVar6 + 0x18), lVar3 != 0)) {
          uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
          goto LAB_00d6e3f0;
        }
        if ((uVar7 & 0xffff) == 0) {
          return;
        }
        lVar3 = *(long *)(lVar6 + 0x20);
      } while (*(long *)(lVar6 + 0x20) != 0);
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 == 0) {
        return;
      }
      uVar1 = uVar7 - 1 & 0xffff;
      if (uVar1 == 0) {
        return;
      }
      uVar7 = uVar1 | uVar7 & 0xffff0000;
      while (lVar3 = *(long *)(lVar6 + 0x20), lVar3 == 0) {
        if ((uVar7 - 1 & 0xffff) == 0) {
          return;
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
        if (lVar6 == 0) {
          return;
        }
      }
    } while( true );
  }
  return;
}




void FUN_00d6e510(long param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x68);
  *(byte *)(param_1 + 0x68) = param_2;
  FUN_00d6e528(param_1,(uint)param_2 - (uint)bVar1);
  return;
}




void FUN_00d6e528(long param_1,int param_2)

{
  float fVar1;
  
  if (0 < param_2) {
    fVar1 = (float)(int)((uint)*(byte *)(param_1 + 0x6a) + param_2);
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    FUN_00d6e30c(param_1,(int)fVar1);
    return;
  }
  if ((int)*(char *)(param_1 + 0x69) + (uint)*(byte *)(param_1 + 0x68) <
      (uint)*(byte *)(param_1 + 0x6a)) {
    FUN_00d6e30c();
    return;
  }
  return;
}




void FUN_00d6e568(long param_1,char param_2)

{
  *(char *)(param_1 + 0x69) = *(char *)(param_1 + 0x69) + param_2;
  FUN_00d6e528(param_1,(int)param_2);
  return;
}




void FUN_00d6e580(long param_1,long param_2)

{
  float fVar1;
  
  if (((*(byte *)(param_1 + 0x6b) & 3) == 0) && (*(float *)(param_2 + 0x44) < 0.0)) {
    *(float *)(param_1 + 100) = ABS(*(float *)(param_2 + 0x44));
  }
  fVar1 = (float)(*(byte *)(param_1 + 0x6a) + 1);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  FUN_00d6e30c(param_1,(int)fVar1);
  FUN_00d6df14(param_1);
  return;
}




void FUN_00d6e5e0(long param_1)

{
  FUN_00d6e580(param_1 + -0x38);
  return;
}




void FUN_00d6e5e8(long param_1)

{
  FUN_0198931c(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d6e610(void *param_1)

{
  FUN_0198931c((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d6e640(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_00d6e664(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




long FUN_00d6e690(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00d6e698(long param_1)

{
  return param_1 + -0x28;
}




void FUN_00d6e6a0(long param_1)

{
  FUN_0198931c(param_1 + -0x10);
  FUN_01985bd0(param_1 + -0x38);
  return;
}




void FUN_00d6e6c8(long param_1)

{
  FUN_0198931c(param_1 + -0x10);
  FUN_01985bd0((void *)(param_1 + -0x38));
  operator_delete((void *)(param_1 + -0x38));
  return;
}




undefined8 FUN_00d6e6f8(undefined8 param_1)

{
  FUN_00d6d558();
  return param_1;
}




void FUN_00d6e71c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d6e724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d6e728(undefined8 *param_1)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_0281dfa0;
  DAT_031a9cd8 = param_1;
  return;
}




void FUN_00d6e750(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281dfa0;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
  }
  param_1[5] = 0;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
  }
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  DAT_031a9cd8 = 0;
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d6e7b0(void *param_1)

{
  FUN_00d6e750();
  operator_delete(param_1);
  return;
}




void FUN_00d6e7d4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  DAT_02c09240 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_02c09240 + 1;
  lVar2 = param_1 + (ulong)DAT_02c09240 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = FUN_00d6ec64;
  *(code **)(lVar2 + 0xb8) = FUN_00d6ec8c;
  *(uint *)(lVar2 + 0xa4) = DAT_02c09240;
  *(undefined4 *)(lVar2 + 0xa8) = 0x48;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  uVar1 = FUN_019888d4();
  FUN_01989130(uVar1,PTR_DAT_02bea710,FUN_00d6e858);
  return;
}




void FUN_00d6e858(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  
  if (param_3 != (long *)0x0) {
    lVar3 = FUN_01988738(DAT_02c09240,0);
    *(long **)(lVar3 + 0x40) = param_3;
    param_3 = (long *)*param_3;
    uVar6 = *(uint *)(lVar3 + 0x38);
    if (*param_3 != 0) {
      do {
        param_3 = param_3 + 1;
        uVar6 = uVar6 + 1;
      } while (*param_3 != 0);
      *(uint *)(lVar3 + 0x38) = uVar6;
    }
    pvVar4 = operator_new__((ulong)uVar6 << 2);
    *(void **)(lVar3 + 0x28) = pvVar4;
    pvVar4 = operator_new__((ulong)*(uint *)(lVar3 + 0x38) << 2);
    *(void **)(lVar3 + 0x30) = pvVar4;
    if (*(int *)(lVar3 + 0x38) != 0) {
      uVar11 = 0;
      do {
        plVar7 = *(long **)(**(long **)(lVar3 + 0x40) + uVar11 * 8);
        pbVar10 = (byte *)*plVar7;
        lVar1 = plVar7[1];
        uVar2 = FUN_00e6a474(lVar1);
        uVar2 = FUN_0091ed5c(lVar1,uVar2,0x12345678);
        *(undefined4 *)(*(long *)(lVar3 + 0x28) + uVar11 * 4) = uVar2;
        uVar2 = FUN_00e6a474(pbVar10);
        uVar2 = FUN_0091ed5c(pbVar10,uVar2,0x12345678);
        *(undefined4 *)(*(long *)(lVar3 + 0x30) + uVar11 * 4) = uVar2;
        uVar5 = FUN_00ceab48();
        if ((uVar5 & 1) != 0) {
          if (pbVar10 == (byte *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0x811c9dc5;
            if (*pbVar10 != 0) {
              uVar6 = 0x811c9dc5;
              uVar8 = (uint)*pbVar10;
              do {
                pbVar10 = pbVar10 + 1;
                uVar6 = (uVar6 ^ uVar8) * 0x1000193;
                uVar8 = (uint)*pbVar10;
              } while (*pbVar10 != 0);
            }
          }
          lVar9 = 0;
          do {
            if (uVar6 == (&DAT_01bcdc20)[lVar9]) goto LAB_00d6e9b0;
            lVar9 = lVar9 + 1;
          } while ((uint)lVar9 < 2);
        }
        FUN_01988700(0,lVar1);
LAB_00d6e9b0:
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(lVar3 + 0x38));
    }
  }
  return;
}




ulong FUN_00d6e9d4(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  
  uVar2 = FUN_00e6a474(param_2);
  iVar3 = FUN_0091ed5c(param_2,uVar2,0x12345678);
  if (*(uint *)(param_1 + 0x38) != 0) {
    uVar4 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 0x30) + uVar4 * 4) == iVar3) {
        return uVar4;
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x38));
  }
  return 0xffff;
}




long FUN_00d6ea48(long param_1,int param_2)

{
  long lVar1;
  
  if (*(uint *)(param_1 + 0x38) != 0) {
    lVar1 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 0x30) + lVar1 * 4) == param_2) {
        return lVar1;
      }
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < *(uint *)(param_1 + 0x38));
  }
  return 0xffff;
}




undefined1 * FUN_00d6ea80(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = FUN_00e6a474(param_2);
  iVar2 = FUN_0091ed5c(param_2,uVar1,0x12345678);
  if (*(uint *)(param_1 + 0x38) != 0) {
    uVar3 = 0;
    do {
      if (iVar2 == *(int *)(*(long *)(param_1 + 0x30) + (uVar3 & 0xffffffff) * 4)) {
        return *(undefined1 **)(*(long *)(**(long **)(param_1 + 0x40) + uVar3 * 8) + 8);
      }
      uVar3 = uVar3 + 1;
    } while ((uint)uVar3 < *(uint *)(param_1 + 0x38));
  }
  return &DAT_01e277f2;
}




bool FUN_00d6eb10(long param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_2 < *(uint *)(param_1 + 0x38)) {
    bVar1 = *(long *)(**(long **)(param_1 + 0x40) + (ulong)param_2 * 8) != 0;
  }
  return bVar1;
}




undefined8 FUN_00d6eb3c(long param_1,uint param_2)

{
  return **(undefined8 **)(**(long **)(param_1 + 0x40) + (ulong)param_2 * 8);
}




undefined8 FUN_00d6eb50(void)

{
  return DAT_031a9cd8;
}




void FUN_00d6eb5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01988718();
  FUN_01987114(uVar1,0,param_2,0);
  return;
}




void FUN_00d6eb88(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = **(undefined8 **)(**(long **)(param_1 + 0x40) + (param_2 & 0xffffffff) * 8);
  uVar1 = FUN_01988718();
  FUN_01987114(uVar1,0,uVar2,0);
  return;
}




void FUN_00d6ebc0(long param_1,uint param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  if (param_2 < *(uint *)(param_1 + 0x38)) {
    uVar3 = **(undefined8 **)(**(long **)(param_1 + 0x40) + (ulong)param_2 * 8);
    local_40 = 0;
    uVar2 = FUN_01988718(0);
    uVar2 = FUN_01987114(uVar2,0,uVar3,&local_40);
    if ((local_40 == 0) || (*(int *)(local_40 + 4) != *(int *)(param_3 + 4))) {
      uVar2 = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




void FUN_00d6ec64(undefined8 *param_1)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_0281dfa0;
  DAT_031a9cd8 = param_1;
  return;
}




void FUN_00d6ec8c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d6ec94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d6ec98(long param_1)

{
  long lVar1;
  
  DAT_02c7eb30 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_02c7eb30 + 1;
  lVar1 = param_1 + (ulong)DAT_02c7eb30 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d6efd4;
  *(code **)(lVar1 + 0xb8) = FUN_00d6f04c;
  *(uint *)(lVar1 + 0xa4) = DAT_02c7eb30;
  *(undefined4 *)(lVar1 + 0xa8) = 0x78;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x46;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_00d6ecf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_0281dfd0;
  param_1[5] = &PTR_FUN_0281e000;
  *(undefined8 *)((long)param_1 + 0x6c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0x3f80000000000000;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0x3f800000;
  return;
}




void FUN_00d6ed6c(long param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[6];
  *(undefined8 *)(param_1 + 0x6c) = param_2[7];
  *(undefined8 *)(param_1 + 100) = uVar1;
  uVar1 = param_2[4];
  *(undefined8 *)(param_1 + 0x5c) = param_2[5];
  *(undefined8 *)(param_1 + 0x54) = uVar1;
  uVar1 = param_2[2];
  *(undefined8 *)(param_1 + 0x4c) = param_2[3];
  *(undefined8 *)(param_1 + 0x44) = uVar1;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0x74) = param_3;
  *(undefined8 *)(param_1 + 0x3c) = uVar2;
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  return;
}




void FUN_00d6ed94(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 100);
  param_2[7] = *(undefined8 *)(param_1 + 0x6c);
  param_2[6] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x54);
  param_2[5] = *(undefined8 *)(param_1 + 0x5c);
  param_2[4] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x44);
  param_2[3] = *(undefined8 *)(param_1 + 0x4c);
  param_2[2] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x34);
  param_2[1] = *(undefined8 *)(param_1 + 0x3c);
  *param_2 = uVar1;
  return;
}




void FUN_00d6edb8(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  *param_2 = *(undefined4 *)(param_1 + 100);
  param_2[1] = uVar1;
  return;
}




void FUN_00d6edc8(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 100);
  param_2[1] = *(undefined4 *)(param_1 + 0x68);
  param_2[2] = *(undefined4 *)(param_1 + 0x6c);
  return;
}




void FUN_00d6ede4(long param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x54);
  *param_2 = fVar1;
  fVar2 = *(float *)(param_1 + 0x5c);
  fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
  param_2[1] = fVar2;
  if (1e-08 <= fVar1) {
    fVar2 = SQRT(fVar1);
    if (NAN(fVar2)) {
      fVar2 = sqrtf(fVar1);
    }
    *(ulong *)param_2 =
         CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) / fVar2,
                  (float)*(undefined8 *)param_2 / fVar2);
  }
  else {
    *(undefined8 *)param_2 = *param_3;
  }
  return;
}




void FUN_00d6ee68(long param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x54);
  *param_2 = fVar3;
  fVar2 = *(float *)(param_1 + 0x58);
  param_2[1] = fVar2;
  fVar1 = *(float *)(param_1 + 0x5c);
  fVar3 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  param_2[2] = fVar1;
  if (1e-08 <= fVar3) {
    fVar2 = SQRT(fVar3);
    if (NAN(fVar2)) {
      fVar2 = sqrtf(fVar3);
    }
    *(ulong *)param_2 =
         CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) / fVar2,
                  (float)*(undefined8 *)param_2 / fVar2);
    param_2[2] = param_2[2] / fVar2;
  }
  else {
    param_2[2] = *(float *)(param_3 + 1);
    *(undefined8 *)param_2 = *param_3;
  }
  return;
}




undefined1 FUN_00d6ef14(long param_1)

{
  return *(undefined1 *)(param_1 + 0x74);
}




void FUN_00d6ef1c(long param_1)

{
  FUN_0198931c(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d6ef44(void *param_1)

{
  FUN_0198931c((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d6ef74(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_00d6ef98(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




long FUN_00d6efc4(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00d6efcc(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_00d6efd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_0281dfd0;
  param_1[5] = &PTR_FUN_0281e000;
  *(undefined8 *)((long)param_1 + 0x6c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0x3f80000000000000;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0x3f800000;
  return param_1;
}

