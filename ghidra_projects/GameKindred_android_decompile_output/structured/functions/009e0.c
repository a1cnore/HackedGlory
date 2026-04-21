// functions/009e0 — 51 functions
#include "libGameKindred.h"




bool FUN_009e003c(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  
  uVar2 = FUN_009dffa0();
  if (uVar2 == 0) {
    bVar1 = true;
  }
  else {
    iVar3 = FUN_009dfcb4(param_1);
    uVar4 = FUN_00a1bcec();
    if ((((uVar2 & 0xfffffbbb) == 0) && ((uVar2 & 0x444) != 0)) && ((uVar4 & 1) != 0)) {
      bVar1 = false;
      if (iVar3 - 1U < 3) {
        fVar5 = (float)FUN_009df97c(param_1);
        bVar1 = fVar5 <= 99999.0;
      }
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}




bool FUN_009e00d0(void)

{
  uint uVar1;
  
  uVar1 = FUN_009dffa0();
  return (uVar1 & 0x280) != 0;
}




uint FUN_009e00f0(void)

{
  uint uVar1;
  
  uVar1 = FUN_009dffa0();
  return uVar1 >> 8 & 1;
}




uint FUN_009e0108(void)

{
  uint uVar1;
  
  uVar1 = FUN_009dffa0();
  return uVar1 >> 3 & 1;
}




undefined1  [16] FUN_009e0120(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if ((lVar2 != 0) && (*(int *)(param_1 + 0x50) == 0)) {
        uVar3 = FUN_009df8a0(param_1);
        FUN_00d53b2c(uVar3,*(undefined4 *)(param_1 + 0x5c));
        auVar4._4_4_ = extraout_var;
        auVar4._0_4_ = extraout_s0;
        auVar4._8_8_ = extraout_var_00;
        return auVar4;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  return ZEXT816(0);
}




undefined1  [16] FUN_009e019c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if ((lVar2 != 0) && (*(int *)(param_1 + 0x50) == 0)) {
        uVar3 = FUN_009df8a0(param_1);
        FUN_00d53b44(uVar3,*(undefined4 *)(param_1 + 0x5c));
        auVar4._4_4_ = extraout_var;
        auVar4._0_4_ = extraout_s0;
        auVar4._8_8_ = extraout_var_00;
        return auVar4;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  return ZEXT816(0);
}




float FUN_009e0218(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  plVar1 = *(long **)(param_1 + 0x40);
  fVar3 = 0.0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        fVar3 = (float)FUN_009e0120(param_1);
        fVar4 = (float)FUN_009e019c(param_1);
        if (fVar3 <= 0.0) {
          if (fVar4 <= 0.0) {
            fVar3 = 1.0;
          }
          else {
            lVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
            fVar3 = *(float *)(*(long *)(lVar2 + 0x40) + 0x314) / fVar4;
          }
        }
        else {
          lVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          fVar3 = *(float *)(*(long *)(lVar2 + 0x40) + 0x310) / fVar3;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  return fVar3;
}




void FUN_009e02f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009df8a0();
  FUN_00d53914(uVar1,*(undefined4 *)(param_1 + 0x58));
  return;
}




uint FUN_009e0314(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined **local_40 [2];
  undefined1 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_009e003c();
  uVar2 = 0;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(param_1 + 0x50) == 1) {
      uVar4 = FUN_00a1f33c();
      FUN_00a19d20(local_40,*(undefined4 *)(param_1 + 0x60));
    }
    else {
      uVar2 = 0;
      if (*(int *)(param_1 + 0x50) != 0) goto LAB_009e03a4;
      uVar4 = FUN_00a1f33c();
      FUN_00a19cdc(local_40,*(undefined4 *)(param_1 + 0x54));
    }
    local_2c = 0;
    local_40[0] = &PTR_FUN_027c84b8;
    uVar2 = FUN_00a1a334(uVar4,local_40);
  }
LAB_009e03a4:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_009e03cc(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar3 = FUN_00a1f33c();
    FUN_00a19ee4(auStack_38,*(undefined4 *)(param_1 + 0x54));
    uVar2 = FUN_00a1a334(uVar3,auStack_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e0440(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 0xf;
  local_38 = &PTR_FUN_027c84e8;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e04a4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    if (param_1[0x12] == *(uint *)(plVar4 + 1)) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        uVar2 = FUN_009dffa0(param_1);
        if (param_1[0x14] == 0) {
          uVar6 = FUN_009df8a0(param_1);
          iVar3 = FUN_00d535a4(uVar6,param_1[0x17]);
          if (iVar3 == 0) {
            if (param_1[0xc] == 0) {
              return;
            }
            param_1[0xc] = 0;
            if (*param_1 == 0) {
              return;
            }
            lVar5 = *(long *)(param_1 + 2);
            do {
              if (*(code **)(lVar5 + 8) == (code *)0x0) {
                (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
              }
              else {
                (**(code **)(lVar5 + 8))();
              }
              lVar5 = lVar5 + 0x20;
            } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
            return;
          }
        }
        if ((uVar2 & 0x388) == 0) {
          if ((uVar2 >> 2 & 1) == 0) {
            if ((uVar2 & 0x460) == 0) {
              uVar1 = param_1[0xc];
              if ((uVar2 >> 1 & 1) == 0) {
                if (1 < uVar1 - 1) {
                  if ((uVar1 == 4) && (param_1[4] != 0)) {
                    lVar5 = *(long *)(param_1 + 6);
                    do {
                      if (*(code **)(lVar5 + 8) == (code *)0x0) {
                        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
                      }
                      else {
                        (**(code **)(lVar5 + 8))();
                      }
                      lVar5 = lVar5 + 0x20;
                    } while (lVar5 != *(long *)(param_1 + 6) + (ulong)param_1[4] * 0x20);
                  }
                  param_1[0xc] = 1;
                  if (*param_1 != 0) {
                    lVar5 = *(long *)(param_1 + 2);
                    do {
                      if (*(code **)(lVar5 + 8) == (code *)0x0) {
                        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
                      }
                      else {
                        (**(code **)(lVar5 + 8))();
                      }
                      lVar5 = lVar5 + 0x20;
                    } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
                  }
                }
              }
              else if ((uVar1 != 3) && (param_1[0xc] = 3, *param_1 != 0)) {
                lVar5 = *(long *)(param_1 + 2);
                do {
                  if (*(code **)(lVar5 + 8) == (code *)0x0) {
                    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
                  }
                  else {
                    (**(code **)(lVar5 + 8))();
                  }
                  lVar5 = lVar5 + 0x20;
                } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
              }
            }
            else if ((param_1[0xc] != 5) && (param_1[0xc] = 5, *param_1 != 0)) {
              lVar5 = *(long *)(param_1 + 2);
              do {
                if (*(code **)(lVar5 + 8) == (code *)0x0) {
                  (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
                }
                else {
                  (**(code **)(lVar5 + 8))();
                }
                lVar5 = lVar5 + 0x20;
              } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
            }
          }
          else if ((param_1[0xc] != 4) && (param_1[0xc] = 4, *param_1 != 0)) {
            lVar5 = *(long *)(param_1 + 2);
            do {
              if (*(code **)(lVar5 + 8) == (code *)0x0) {
                (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
              }
              else {
                (**(code **)(lVar5 + 8))();
              }
              lVar5 = lVar5 + 0x20;
            } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
          }
        }
        else if ((param_1[0xc] != 5) && (param_1[0xc] = 5, *param_1 != 0)) {
          lVar5 = *(long *)(param_1 + 2);
          do {
            if (*(code **)(lVar5 + 8) == (code *)0x0) {
              (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
            }
            else {
              (**(code **)(lVar5 + 8))();
            }
            lVar5 = lVar5 + 0x20;
          } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
        }
      }
    }
    else {
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = DAT_03214ce8;
    }
  }
  return;
}




void thunk_FUN_009e04a4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    if (param_1[0x12] == *(uint *)(plVar4 + 1)) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        uVar2 = FUN_009dffa0(param_1);
        if (param_1[0x14] == 0) {
          uVar6 = FUN_009df8a0(param_1);
          iVar3 = FUN_00d535a4(uVar6,param_1[0x17]);
          if (iVar3 == 0) {
            if (param_1[0xc] == 0) {
              return;
            }
            param_1[0xc] = 0;
            if (*param_1 == 0) {
              return;
            }
            lVar5 = *(long *)(param_1 + 2);
            do {
              if (*(code **)(lVar5 + 8) == (code *)0x0) {
                (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
              }
              else {
                (**(code **)(lVar5 + 8))();
              }
              lVar5 = lVar5 + 0x20;
            } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
            return;
          }
        }
        if ((uVar2 & 0x388) == 0) {
          if ((uVar2 >> 2 & 1) == 0) {
            if ((uVar2 & 0x460) == 0) {
              uVar1 = param_1[0xc];
              if ((uVar2 >> 1 & 1) == 0) {
                if (1 < uVar1 - 1) {
                  if ((uVar1 == 4) && (param_1[4] != 0)) {
                    lVar5 = *(long *)(param_1 + 6);
                    do {
                      if (*(code **)(lVar5 + 8) == (code *)0x0) {
                        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
                      }
                      else {
                        (**(code **)(lVar5 + 8))();
                      }
                      lVar5 = lVar5 + 0x20;
                    } while (lVar5 != *(long *)(param_1 + 6) + (ulong)param_1[4] * 0x20);
                  }
                  param_1[0xc] = 1;
                  if (*param_1 != 0) {
                    lVar5 = *(long *)(param_1 + 2);
                    do {
                      if (*(code **)(lVar5 + 8) == (code *)0x0) {
                        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
                      }
                      else {
                        (**(code **)(lVar5 + 8))();
                      }
                      lVar5 = lVar5 + 0x20;
                    } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
                  }
                }
              }
              else if ((uVar1 != 3) && (param_1[0xc] = 3, *param_1 != 0)) {
                lVar5 = *(long *)(param_1 + 2);
                do {
                  if (*(code **)(lVar5 + 8) == (code *)0x0) {
                    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
                  }
                  else {
                    (**(code **)(lVar5 + 8))();
                  }
                  lVar5 = lVar5 + 0x20;
                } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
              }
            }
            else if ((param_1[0xc] != 5) && (param_1[0xc] = 5, *param_1 != 0)) {
              lVar5 = *(long *)(param_1 + 2);
              do {
                if (*(code **)(lVar5 + 8) == (code *)0x0) {
                  (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
                }
                else {
                  (**(code **)(lVar5 + 8))();
                }
                lVar5 = lVar5 + 0x20;
              } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
            }
          }
          else if ((param_1[0xc] != 4) && (param_1[0xc] = 4, *param_1 != 0)) {
            lVar5 = *(long *)(param_1 + 2);
            do {
              if (*(code **)(lVar5 + 8) == (code *)0x0) {
                (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
              }
              else {
                (**(code **)(lVar5 + 8))();
              }
              lVar5 = lVar5 + 0x20;
            } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
          }
        }
        else if ((param_1[0xc] != 5) && (param_1[0xc] = 5, *param_1 != 0)) {
          lVar5 = *(long *)(param_1 + 2);
          do {
            if (*(code **)(lVar5 + 8) == (code *)0x0) {
              (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
            }
            else {
              (**(code **)(lVar5 + 8))();
            }
            lVar5 = lVar5 + 0x20;
          } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
        }
      }
    }
    else {
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = DAT_03214ce8;
    }
  }
  return;
}




void FUN_009e077c(undefined8 param_1)

{
  if (DAT_0312fcd8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009e0798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_0312fcd8 + 0x10))(DAT_0312fcd8,param_1);
    return;
  }
  return;
}




void FUN_009e07a0(undefined8 param_1)

{
  if (DAT_0312fcd8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009e07bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_0312fcd8 + 0x18))(DAT_0312fcd8,param_1);
    return;
  }
  return;
}




void FUN_009e07c4(undefined8 param_1)

{
  if (DAT_0312fcd8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009e07e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_0312fcd8 + 0x20))(DAT_0312fcd8,param_1);
    return;
  }
  return;
}




void FUN_009e07e8(undefined8 param_1)

{
  if (DAT_0312fcd8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009e0804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_0312fcd8 + 0x28))(DAT_0312fcd8,param_1);
    return;
  }
  return;
}




void FUN_009e080c(undefined8 param_1)

{
  if (DAT_0312fcd8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009e0828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_0312fcd8 + 0x30))(DAT_0312fcd8,param_1);
    return;
  }
  return;
}




void FUN_009e0830(undefined8 param_1)

{
  if (DAT_0312fcd8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009e084c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_0312fcd8 + 0x40))(DAT_0312fcd8,param_1);
    return;
  }
  return;
}




void FUN_009e0854(undefined8 param_1)

{
  if (DAT_0312fcd8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009e0870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_0312fcd8 + 0x38))(DAT_0312fcd8,param_1);
    return;
  }
  return;
}




void FUN_009e0878(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c3a00;
  return;
}




void FUN_009e088c(void)

{
  return;
}




void FUN_009e0890(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x9e0894);
  (*pcVar1)();
}




void FUN_009e0894(undefined8 param_1)

{
  DAT_0312fcd8 = param_1;
  return;
}




void FUN_009e08a0(void)

{
  DAT_0312fcd8 = 0;
  return;
}




void FUN_009e08ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c3a58;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  memset(param_1 + 1,0,100);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x11) = 0xff01;
  *(undefined4 *)((long)param_1 + 0x8c) = 0xffff;
  *(undefined4 *)(param_1 + 0x12) = 0xffff;
  DAT_0312fcd8 = param_1;
  FUN_00926a74();
  return;
}




void FUN_009e0914(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c3a58;
  DAT_0312fcd8 = 0;
  FUN_009e099c(param_1 + 0xb);
  if ((void *)param_1[10] != (void *)0x0) {
    operator_delete__((void *)param_1[10]);
    param_1[9] = 0;
    param_1[10] = 0;
  }
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    param_1[7] = 0;
    param_1[8] = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




void FUN_009e099c(uint *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      if (*(int *)(*(long *)(param_1 + 2) + lVar3) != -1) {
        FUN_009e1398(param_1);
        uVar1 = (ulong)*param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar1);
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




void FUN_009e0a1c(void *param_1)

{
  FUN_009e0914();
  operator_delete(param_1);
  return;
}




void FUN_009e0a40(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  FUN_009265b4(param_2,param_3);
  return;
}




void FUN_009e0a4c(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  FUN_009266e4(param_2,param_3);
  return;
}




void FUN_009e0a58(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  FUN_009265b4(param_2,param_3);
  return;
}




uint FUN_009e0a64(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  uVar2 = FUN_009e0ab8(param_1 + 0x58,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_009e0ab8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar4 = FUN_00e6a474(uVar7);
  uVar5 = FUN_0091ed5c(uVar7,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if (uVar3 != 0xffffffff) {
      return *(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1;
    }
  }
  return false;
}




uint FUN_009e0b58(long *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  if (param_2 != 0xffff) {
    uVar2 = FUN_00e80f58();
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_00d6eb50();
      uVar3 = FUN_00d6eb3c(uVar3,param_2);
      uVar2 = (**(code **)(*param_1 + 0x48))(param_1,uVar3);
      if ((uVar2 & 1) == 0) {
        uVar1 = FUN_00e80f58();
        uVar1 = uVar1 ^ 1;
        goto LAB_009e0bc0;
      }
    }
    uVar1 = 1;
  }
LAB_009e0bc0:
  return uVar1 & 1;
}




void FUN_009e0bd4(long param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 0x8c) = param_2;
  local_3c = param_2;
  if ((*(int *)(param_1 + 0x90) == 0xffff) &&
     (puVar3 = (undefined8 *)FUN_00ce9ba0(&local_3c), puVar3 != (undefined8 *)0x0)) {
    plVar4 = (long *)FUN_00cc75b0();
    plVar4 = (long *)*plVar4;
    puVar5 = (undefined8 *)*plVar4;
    while (puVar5 != (undefined8 *)0x0) {
      plVar4 = plVar4 + 1;
      iVar2 = strcmp((char *)puVar5[2],(char *)*puVar3);
      if (iVar2 == 0) {
        FUN_00925af0(local_3c,*puVar5);
        break;
      }
      puVar5 = (undefined8 *)*plVar4;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e0c88(undefined8 param_1,undefined4 param_2)

{
  FUN_00926234(param_2);
  return;
}




void FUN_009e0c94(undefined8 param_1,undefined4 param_2)

{
  FUN_0092648c(param_2);
  return;
}




void FUN_009e0c9c(undefined8 param_1,undefined8 param_2)

{
  FUN_00925c48(param_2);
  return;
}




void FUN_009e0ca4(undefined8 param_1,undefined4 param_2)

{
  FUN_00925d84(param_2);
  return;
}




void FUN_009e0cac(undefined8 param_1,undefined4 param_2)

{
  FUN_00925eb0(param_2);
  return;
}




void FUN_009e0cb4(undefined8 param_1,undefined4 param_2)

{
  FUN_00925fdc(param_2);
  return;
}




void FUN_009e0cbc(undefined8 param_1,undefined4 param_2)

{
  FUN_009259c0(param_2);
  return;
}




void FUN_009e0cc8(long param_1)

{
  FUN_00925510();
  FUN_009e0cec(param_1 + 0x58);
  return;
}




void FUN_009e0cec(uint *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      if (*(int *)(*(long *)(param_1 + 2) + lVar3) != -1) {
        FUN_009e1398(param_1);
        uVar1 = (ulong)*param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar1);
  }
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  param_1[4] = 0;
  if (*(long *)(param_1 + 8) != 0) {
    param_1[6] = 0;
  }
  param_1[10] = 0xffffffff;
  return;
}




undefined1 FUN_009e0d70(long param_1)

{
  return *(undefined1 *)(param_1 + 0x88);
}




undefined1 FUN_009e0d78(long param_1)

{
  return *(undefined1 *)(param_1 + 0x89);
}




undefined4 FUN_009e0d80(long param_1)

{
  return *(undefined4 *)(param_1 + 0x8c);
}




undefined4 FUN_009e0d88(long param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}




void FUN_009e0d90(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong local_58 [2];
  void *local_48;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1 = param_1 + 0x58;
  local_58[0] = param_2;
  uVar2 = FUN_009e0ab8(param_1,local_58);
  if ((uVar2 & 1) == 0) {
    local_40 = param_2;
    FUN_008fa54c(local_58,param_2);
    FUN_009e0e38(param_1,&local_40,local_58);
    if ((local_58[0] & 1) != 0) {
      operator_delete(local_48);
    }
  }
  else {
    local_58[0] = param_2;
    FUN_009e13fc(param_1,local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e0e38(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar14 = *param_2;
  uVar4 = FUN_00e6a474(uVar14);
  uVar5 = FUN_0091ed5c(uVar14,uVar4,0x12345678);
  uVar10 = param_1[4];
  uVar9 = *param_1;
  param_1[4] = uVar10 + 1;
  if (uVar9 >> 1 < uVar10 + 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar9 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar10 = *param_1;
    uVar11 = uVar10 - 1;
    uVar9 = (uint)local_58;
    if ((int)uVar11 < 0) {
      pvVar7 = *(void **)(param_1 + 2);
    }
    else {
      pvVar7 = *(void **)(param_1 + 2);
      do {
        iVar6 = *(int *)((long)pvVar7 + (ulong)uVar11 * 8 + 4);
        if (iVar6 != -1) {
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
          *piVar13 = iVar6;
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
      uVar9 = *param_1;
    }
  }
  lVar8 = *(long *)(param_1 + 2);
  uVar10 = 0;
  if (uVar9 != 0) {
    uVar10 = uVar5 / uVar9;
  }
  uVar12 = (ulong)(uVar5 - uVar10 * uVar9);
  piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
  iVar6 = *piVar13;
  while (iVar6 != -1) {
    uVar10 = uVar9;
    if (0 < (int)(uint)uVar12) {
      uVar10 = (uint)uVar12;
    }
    uVar12 = (ulong)(uVar10 - 1);
    piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
    iVar6 = *piVar13;
  }
  *(uint *)(lVar8 + uVar12 * 8) = uVar5;
  iVar6 = FUN_009e14a0(param_1,param_3);
  *piVar13 = iVar6;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

