// functions/00d78 — 19 functions
#include "libGameKindred.h"




void FUN_00d782f0(undefined8 param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined4 auStack_40 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar6 = param_2[2];
  lVar4 = -0x40 - ((uVar6 & 0xffffffff) * 4 + 0xf & 0x7fffffff0);
  if ((long *)*param_2 != param_2 + 1) {
    uVar7 = 0;
    plVar8 = (long *)*param_2;
    do {
      *(undefined4 *)((long)auStack_40 + (ulong)uVar7 * 4 + lVar4 + 0x40) =
           *(undefined4 *)((long)plVar8 + 0x1c);
      plVar9 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) {
        plVar9 = plVar8 + 2;
        plVar10 = (long *)*plVar9;
        if ((long *)*plVar10 != plVar8) {
          do {
            lVar11 = *plVar9;
            plVar9 = (long *)(lVar11 + 0x10);
            plVar10 = (long *)*plVar9;
          } while (*plVar10 != lVar11);
        }
      }
      else {
        do {
          plVar10 = plVar9;
          plVar9 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      uVar7 = uVar7 + 1;
      plVar8 = plVar10;
    } while (plVar10 != param_2 + 1);
  }
  uVar7 = (int)uVar6 - 1;
  iVar5 = rand();
  iVar1 = (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) + 1;
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = iVar5 / iVar1;
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined4 *)
                      ((long)auStack_40 + (long)(iVar5 - iVar2 * iVar1) * 4 + lVar4 + 0x40));
  }
  return;
}




void FUN_00d783e8(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (param_2 == 0xfe) {
    *(undefined4 *)(param_1 + 0x28) = 0xfe;
    *(undefined1 *)(param_1 + 0xed) = 1;
    lVar2 = FUN_00d7e3d0();
    uVar1 = *(undefined4 *)(lVar6 + 0x260);
    plVar3 = (long *)(lVar2 + 0x10);
    plVar4 = (long *)*plVar3;
    plVar8 = plVar3;
    if (plVar4 != (long *)0x0) {
      do {
        if (*(uint *)(plVar4 + 4) >= 0xb924e89d) {
          plVar8 = plVar4;
        }
        plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < 0xb924e89d];
      } while (plVar4 != (long *)0x0);
      if (((plVar8 != plVar3) && (*(uint *)(plVar8 + 4) < 0xb924e89e)) && ((int)plVar8[5] != 0)) {
        lVar6 = 0;
        uVar7 = 0;
        do {
          (*(code *)((undefined8 *)(plVar8[6] + lVar6))[1])
                    (*(undefined8 *)(plVar8[6] + lVar6),uVar1,0xfe);
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (uVar7 < *(uint *)(plVar8 + 5));
      }
    }
  }
  else {
    plVar8 = *(long **)(*(long *)(lVar6 + 0x38) + 0x198);
    if (*plVar8 != 0) {
      iVar9 = 0;
      do {
        if (iVar9 == param_2) {
          FUN_00d77e48(param_1);
          *(int *)(param_1 + 0x28) = param_2;
          *(undefined1 *)(param_1 + 0xed) = 1;
          lVar2 = FUN_00d7e3d0();
          uVar1 = *(undefined4 *)(lVar6 + 0x260);
          plVar4 = (long *)(lVar2 + 0x10);
          plVar5 = (long *)*plVar4;
          plVar3 = plVar4;
          if (plVar5 != (long *)0x0) {
            do {
              if (*(uint *)(plVar5 + 4) >= 0xb924e89d) {
                plVar3 = plVar5;
              }
              plVar5 = (long *)plVar5[*(uint *)(plVar5 + 4) < 0xb924e89d];
            } while (plVar5 != (long *)0x0);
            if (((plVar3 != plVar4) && (*(uint *)(plVar3 + 4) < 0xb924e89e)) &&
               ((int)plVar3[5] != 0)) {
              lVar2 = 0;
              uVar7 = 0;
              do {
                (*(code *)((undefined8 *)(plVar3[6] + lVar2))[1])
                          (*(undefined8 *)(plVar3[6] + lVar2),uVar1,param_2);
                uVar7 = uVar7 + 1;
                lVar2 = lVar2 + 0x10;
              } while (uVar7 < *(uint *)(plVar3 + 5));
            }
          }
        }
        plVar8 = plVar8 + 1;
        iVar9 = iVar9 + 1;
      } while (*plVar8 != 0);
    }
  }
  return;
}




void FUN_00d7858c(long param_1,undefined4 *param_2,byte param_3,undefined4 param_4,
                 undefined4 *param_5,byte param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  
  *(undefined4 *)(param_1 + 0x28) = 0xff;
  if (param_3 == 0) {
LAB_00d785d8:
    uVar5 = (ulong)param_3;
    do {
      lVar3 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(param_1 + lVar3 + 0x68) = 0xffff;
    } while (uVar5 != 0x14);
  }
  else {
    uVar5 = (ulong)param_3;
    puVar7 = (undefined4 *)(param_1 + 0x68);
    do {
      uVar5 = uVar5 - 1;
      *puVar7 = *param_2;
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar5 != 0);
    if (param_3 < 0x14) goto LAB_00d785d8;
  }
  *(undefined4 *)(param_1 + 0xb8) = param_4;
  if (param_6 != 0) {
    uVar5 = (ulong)param_6;
    puVar7 = (undefined4 *)(param_1 + 0xbc);
    do {
      uVar5 = uVar5 - 1;
      *puVar7 = *param_5;
      param_5 = param_5 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar5 != 0);
    if (0xb < param_6) goto LAB_00d78650;
  }
  memset((void *)(param_1 + (ulong)param_6 * 4 + 0xbc),0xff,
         ((ulong)param_6 * -4 + 0x2c & 0x3fffffffc) + 4);
LAB_00d78650:
  lVar8 = *(long *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0xed) = 1;
  lVar3 = FUN_00d7e3d0();
  uVar1 = *(undefined4 *)(lVar8 + 0x260);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  plVar4 = (long *)(lVar3 + 0x10);
  plVar6 = (long *)*plVar4;
  plVar9 = plVar4;
  if (plVar6 != (long *)0x0) {
    do {
      if (*(uint *)(plVar6 + 4) >= 0xb924e89d) {
        plVar9 = plVar6;
      }
      plVar6 = (long *)plVar6[*(uint *)(plVar6 + 4) < 0xb924e89d];
    } while (plVar6 != (long *)0x0);
    if (((plVar9 != plVar4) && (*(uint *)(plVar9 + 4) < 0xb924e89e)) && ((int)plVar9[5] != 0)) {
      lVar3 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar9[6] + lVar3))[1])
                  (*(undefined8 *)(plVar9[6] + lVar3),uVar1,uVar2);
        uVar5 = uVar5 + 1;
        lVar3 = lVar3 + 0x10;
      } while (uVar5 < *(uint *)(plVar9 + 5));
    }
  }
  return;
}




long FUN_00d786f8(long param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  if ((*(int *)(param_1 + 0x28) != 0xfe) && (param_3 != 0)) {
    lVar2 = 0;
    while (iVar1 = *(int *)(param_1 + 0x68 + lVar2 * 4), iVar1 != 0xffff) {
      *(int *)(param_2 + lVar2 * 4) = iVar1;
      lVar2 = lVar2 + 1;
      if (param_3 <= (uint)lVar2) {
        return lVar2;
      }
      if (0x13 < (uint)lVar2) {
        return lVar2;
      }
    }
  }
  return lVar2;
}




long FUN_00d7874c(long param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  if ((*(int *)(param_1 + 0x28) != 0xfe) && (param_3 != 0)) {
    lVar2 = 0;
    while (iVar1 = *(int *)(param_1 + 0xbc + lVar2 * 4), iVar1 != -1) {
      *(int *)(param_2 + lVar2 * 4) = iVar1;
      lVar2 = lVar2 + 1;
      if (param_3 <= (uint)lVar2) {
        return lVar2;
      }
      if (0xb < (uint)lVar2) {
        return lVar2;
      }
    }
  }
  return lVar2;
}




undefined4 FUN_00d78794(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x28) != 0xfe) {
    uVar1 = *(undefined4 *)(param_1 + 0xb8);
  }
  return uVar1;
}




undefined4 FUN_00d787b0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 0x28) == 0xfe) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_00d9eb64(*(undefined8 *)(param_1 + 0x10));
    iVar1 = FUN_00d532f8();
    uVar2 = 0xffffffff;
    if (*(int *)(param_1 + 0x28) != 0xfe) {
      fVar3 = (float)(iVar1 + 1);
      if (fVar3 <= 1.0) {
        fVar3 = 1.0;
      }
      if ((int)fVar3 - 1U < 0xc) {
        uVar2 = *(undefined4 *)(param_1 + (ulong)((int)fVar3 - 1U) * 4 + 0xbc);
      }
    }
  }
  return uVar2;
}




undefined4 FUN_00d78828(long param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_2 - 1U < 0xc) && (*(int *)(param_1 + 0x28) != 0xfe)) {
    uVar1 = *(undefined4 *)(param_1 + (ulong)(param_2 - 1U) * 4 + 0xbc);
  }
  return uVar1;
}




int FUN_00d78854(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x28) != 0xfe) {
    lVar8 = *(long *)(param_1 + 0x10);
    iVar3 = FUN_00d5c238(lVar8,param_2);
    iVar4 = FUN_00d5c240(lVar8,param_2);
    lVar8 = *(long *)(lVar8 + 0x40);
    uVar5 = 0;
    fVar9 = (*(float *)(lVar8 + 0x240) + 1.0) *
            (*(float *)(lVar8 + 0xd8) +
            *(float *)(lVar8 + 0x18c) * (*(float *)(lVar8 + 0x2f4) + 1.0));
    if (DAT_031aa080 <= fVar9) {
      fVar9 = DAT_031aa080;
    }
    fVar10 = DAT_031a9fc0;
    if (DAT_031a9fc0 <= fVar9) {
      fVar10 = fVar9;
    }
    uVar2 = iVar3 - iVar4;
    if ((int)fVar10 != 0) {
      uVar6 = (ulong)(uint)(int)fVar10;
      piVar7 = (int *)(param_1 + 0xbc);
      do {
        if (*piVar7 == param_2) {
          uVar5 = uVar5 + 1;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 1;
      } while (uVar6 != 0);
    }
    uVar1 = uVar2;
    if (uVar2 <= uVar5) {
      uVar1 = uVar5;
    }
    iVar3 = uVar1 - uVar2;
  }
  return iVar3;
}




void FUN_00d78938(long param_1,undefined8 param_2)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x198);
  lVar6 = *plVar8;
  while (lVar6 != 0) {
    local_78 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0xffffffff;
    lVar7 = **(long **)(lVar6 + 0x38);
    plVar3 = *(long **)(lVar6 + 0x38);
    while (lVar7 != 0) {
      uVar4 = FUN_00d6eb50();
      local_8c = FUN_00d6e9d4(uVar4,*(undefined8 *)*plVar3);
      local_90 = 0;
      piVar5 = (int *)FUN_00d7939c(&local_88,&local_8c);
      piVar1 = &local_90;
      if (piVar5 != (int *)0x0) {
        piVar1 = piVar5;
      }
      local_90 = *piVar1 + 1;
      FUN_00d78be0(&local_88,&local_8c,&local_90);
      FUN_00d78a4c(&local_88,local_8c,param_2);
      lVar7 = plVar3[1];
      plVar3 = plVar3 + 1;
    }
    FUN_00d78e18(&local_88);
    plVar8 = plVar8 + 1;
    lVar6 = *plVar8;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1 FUN_00d78a44(long param_1)

{
  return *(undefined1 *)(param_1 + 0xed);
}




int FUN_00d78a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  ulong uVar7;
  int local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_98 = 0xffff;
  local_5c = 0;
  local_64 = 0;
  uStack_6c = 0;
  local_74 = 0;
  uStack_7c = 0;
  local_84 = 0;
  uStack_8c = 0;
  local_94 = 0;
  local_9c = 0;
  FUN_00d74f6c(param_3,param_2,1,&local_98,&local_9c);
  if (local_9c == 0) {
    iVar5 = 0;
  }
  else {
    uVar7 = 0;
    iVar5 = 0;
    puVar6 = &local_98;
    do {
      local_a0 = 0;
      piVar3 = (int *)FUN_00d7939c(param_1,puVar6);
      piVar4 = &local_a0;
      if (piVar3 != (int *)0x0) {
        piVar4 = piVar3;
      }
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        iVar2 = FUN_00d78a4c(param_1,*puVar6,param_3);
        iVar5 = iVar2 + iVar5;
      }
      else {
        piVar4 = (int *)FUN_00d79434(param_1,puVar6);
        *piVar4 = iVar2 + -1;
        iVar5 = iVar5 + 1;
      }
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar7 < local_9c);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}




void FUN_00d78b70(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_00d78b94(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00d78b94(param_1,*param_2);
    FUN_00d78b94(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_00d78be0(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_0091ed5c(0,0,*param_2);
  uVar8 = *param_1;
  if (uVar8 != 0) {
    lVar9 = *(long *)(param_1 + 2);
    uVar10 = 0;
    if (uVar8 != 0) {
      uVar10 = uVar4 / uVar8;
    }
    uVar10 = uVar4 - uVar10 * uVar8;
    while ((*(uint *)(lVar9 + (ulong)uVar10 * 8) != uVar4 &&
           (*(int *)(lVar9 + (ulong)uVar10 * 8 + 4) != -1))) {
      uVar11 = uVar8;
      if (0 < (int)uVar10) {
        uVar11 = uVar10;
      }
      uVar10 = uVar11 - 1;
    }
    if ((uVar10 != 0xffffffff) &&
       (uVar10 = *(uint *)(lVar9 + (ulong)uVar10 * 8 + 4), uVar10 != 0xffffffff)) {
      uVar6 = 0;
      *(undefined4 *)(*(long *)(param_1 + 8) + (ulong)uVar10 * 4) = *param_3;
      goto LAB_00d78dec;
    }
  }
  uVar10 = param_1[4];
  param_1[4] = uVar10 + 1;
  if (uVar8 >> 1 < uVar10 + 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar8 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar10 = *param_1;
    uVar11 = uVar10 - 1;
    uVar8 = (uint)local_58;
    if ((int)uVar11 < 0) {
      pvVar7 = *(void **)(param_1 + 2);
    }
    else {
      pvVar7 = *(void **)(param_1 + 2);
      do {
        iVar5 = *(int *)((long)pvVar7 + (ulong)uVar11 * 8 + 4);
        if (iVar5 != -1) {
          uVar10 = *(uint *)((long)pvVar7 + (ulong)uVar11 * 8);
          uVar2 = 0;
          if ((uint)local_58 != 0) {
            uVar2 = uVar10 / (uint)local_58;
          }
          uVar12 = (ulong)(uVar10 - uVar2 * (uint)local_58);
          piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
          iVar1 = *piVar13;
          while (iVar1 != -1) {
            uVar2 = (uint)local_58;
            if (0 < (int)(uint)uVar12) {
              uVar2 = (uint)uVar12;
            }
            uVar12 = (ulong)(uVar2 - 1);
            piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
            iVar1 = *piVar13;
          }
          *(uint *)((long)local_50 + uVar12 * 8) = uVar10;
          *piVar13 = iVar5;
        }
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
      uVar10 = *param_1;
    }
    uVar11 = param_1[1];
    *param_1 = (uint)local_58;
    param_1[1] = local_58._4_4_;
    local_58 = CONCAT44(uVar11,uVar10);
    *(void **)(param_1 + 2) = local_50;
    local_50 = pvVar7;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar8 = *param_1;
    }
  }
  lVar9 = *(long *)(param_1 + 2);
  uVar10 = 0;
  if (uVar8 != 0) {
    uVar10 = uVar4 / uVar8;
  }
  uVar12 = (ulong)(uVar4 - uVar10 * uVar8);
  piVar13 = (int *)(lVar9 + uVar12 * 8 + 4);
  iVar5 = *piVar13;
  while (iVar5 != -1) {
    uVar10 = uVar8;
    if (0 < (int)(uint)uVar12) {
      uVar10 = (uint)uVar12;
    }
    uVar12 = (ulong)(uVar10 - 1);
    piVar13 = (int *)(lVar9 + uVar12 * 8 + 4);
    iVar5 = *piVar13;
  }
  *(uint *)(lVar9 + uVar12 * 8) = uVar4;
  iVar5 = FUN_00d78e98(param_1,param_3);
  *piVar13 = iVar5;
  uVar6 = 1;
LAB_00d78dec:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}




void FUN_00d78e18(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 4) = param_1[10];
        uVar4 = *param_1;
        param_1[10] = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_00d78e98(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_00d78f2c(param_1 + 0x18,auStack_40);
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)(*(int *)(param_1 + 0x18) - 1) * 4);
  }
  else {
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28) * 4);
    *(undefined4 *)(param_1 + 0x28) = *puVar2;
  }
  *puVar2 = *param_2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d78f2c(uint *param_1,undefined4 *param_2)

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
    FUN_00d78fb4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_00d78fb4(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -4;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined4 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}

