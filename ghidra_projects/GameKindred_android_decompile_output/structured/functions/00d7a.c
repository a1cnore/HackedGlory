// functions/00d7a — 37 functions
#include "libGameKindred.h"




void FUN_00d7a008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00d7a6c0(param_3,param_2,param_2);
  return;
}




void FUN_00d7a014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00d7a7f4(param_3,param_2,param_2);
  return;
}




void FUN_00d7a020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00d7a968(param_3,param_2,param_2);
  return;
}




void FUN_00d7a02c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  DAT_031502d4 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031502d4 + 1;
  lVar2 = param_1 + (ulong)DAT_031502d4 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = FUN_00d7aaf8;
  *(code **)(lVar2 + 0xb8) = FUN_00d7ab1c;
  *(uint *)(lVar2 + 0xa4) = DAT_031502d4;
  *(undefined4 *)(lVar2 + 0xa8) = 0x298;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 2;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_01986780(param_1,4,FUN_00d7a0cc,0);
    return;
  }
  return;
}




void FUN_00d7a0cc(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long *plVar8;
  long lVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long lVar13;
  float fVar14;
  undefined4 uVar15;
  undefined1 auStack_140 [88];
  undefined1 auStack_e8 [88];
  long local_90;
  
  lVar3 = tpidr_el0;
  local_90 = *(long *)(lVar3 + 0x28);
  fVar14 = (float)FUN_01988c78();
  fVar14 = *(float *)(param_1 + 0x284) - fVar14;
  *(float *)(param_1 + 0x284) = fVar14;
  if (fVar14 <= 0.0) {
    if (0 < *(int *)(param_1 + 0x280)) {
      lVar13 = 0;
      do {
        lVar1 = param_1 + lVar13;
        plVar8 = *(long **)(lVar1 + 0x30);
        if (plVar8 != (long *)0x0) {
          if (*(int *)(lVar1 + 0x38) == (int)plVar8[1]) {
            lVar9 = (**(code **)(*plVar8 + 0x10))();
            if (lVar9 != 0) {
              plVar8 = *(long **)(lVar1 + 0x30);
              if (plVar8 == (long *)0x0) {
                lVar9 = 0;
              }
              else if (*(int *)(lVar1 + 0x38) == (int)plVar8[1]) {
                lVar9 = (**(code **)(*plVar8 + 0x10))();
              }
              else {
                *(undefined8 *)(lVar1 + 0x30) = 0;
                lVar9 = 0;
                *(undefined4 *)(lVar1 + 0x38) = DAT_03214ce8;
              }
              uVar2 = *(ushort *)(lVar9 + 0x88) & 0x1f;
              if (((uVar2 == 0x1f) || (1 < *(ushort *)(lVar9 + (ulong)uVar2 * 0x38 + 0x90) - 3)) &&
                 ((*(byte *)(lVar9 + 0x2f6) >> 2 & 1) != 0)) {
                cVar4 = FUN_00d55870(lVar9);
                if (cVar4 == *(char *)(param_1 + 0x288)) {
                  if ((*(byte *)(lVar9 + 0x2f6) >> 4 & 1) == 0) {
                    FUN_00ceace8();
                    uVar6 = FUN_00ceae90();
                    puVar10 = PTR_s_Buff_SpawnStage_MatchStart_Speed_02bf1060;
                    if ((uVar6 & 1) == 0) {
                      fVar14 = (float)FUN_009bc24c();
                      puVar10 = PTR_s_Buff_SpawnStage_MatchStart_Shopp_02bf1078;
                      if (fVar14 <= 0.0) {
                        uVar11 = *(undefined4 *)(lVar9 + 0x260);
                        uVar5 = FUN_00ceb350();
                        puVar7 = (undefined4 *)FUN_00d70a78();
                        uVar15 = *puVar7;
                        uVar12 = 0xbf800000;
                        goto LAB_00d7a2dc;
                      }
                    }
                    else {
                      uVar11 = *(undefined4 *)(lVar9 + 0x260);
                      uVar5 = FUN_00ceb350();
                      uVar15 = 0;
                      uVar12 = 0x41a00000;
LAB_00d7a2dc:
                      FUN_00cfe864(uVar12,uVar15,0,auStack_e8,uVar11,uVar11,puVar10,uVar5,1,0,0);
                      FUN_00ce20fc(auStack_e8);
                    }
                    uVar11 = *(undefined4 *)(lVar9 + 0x260);
                    uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x290) + 8);
                    uVar5 = FUN_00ceb350();
                    FUN_00cfe864(0x3fc00000,0,0,auStack_e8,uVar11,uVar11,uVar12,uVar5,1,0,0);
                    FUN_00ce20fc(auStack_e8);
                    puVar10 = PTR_s_Buff_Shop_AllowStorePurchase_02beba80;
                    uVar11 = *(undefined4 *)(lVar9 + 0x260);
                    uVar5 = FUN_00ceb350();
                    uVar15 = FUN_00d74134();
                    FUN_00cfe864(0x3fc00000,0,0,auStack_140,uVar11,uVar11,puVar10,uVar5,1,uVar15,0);
                    FUN_00ce20fc(auStack_140);
                  }
                }
                else {
                  cVar4 = FUN_00d55870(lVar9);
                  if ((cVar4 != '\0') && ((*(byte *)(lVar9 + 0x2f9) & 1) == 0)) {
                    uVar11 = *(undefined4 *)(lVar9 + 0x260);
                    uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x290) + 0x10);
                    uVar5 = FUN_00ceb350();
                    FUN_00cfe864(0x3f000000,0,0,auStack_e8,0xffffffff,uVar11,uVar12,uVar5,1,0,0);
                    FUN_00ce20fc(auStack_e8);
                  }
                }
              }
            }
          }
          else {
            *(undefined8 *)(lVar1 + 0x30) = 0;
            *(undefined4 *)(lVar1 + 0x38) = DAT_03214ce8;
          }
        }
        lVar13 = lVar13 + 0x10;
      } while (lVar13 != 0x200);
    }
    if (*(char *)(*(long *)(param_1 + 0x290) + 0x1c) != '\0') {
      lVar13 = 0;
      do {
        lVar1 = param_1 + lVar13;
        plVar8 = *(long **)(lVar1 + 0x230);
        if (plVar8 != (long *)0x0) {
          if (*(int *)(lVar1 + 0x238) == (int)plVar8[1]) {
            lVar9 = (**(code **)(*plVar8 + 0x10))();
            if (lVar9 == 0) goto LAB_00d7a4f8;
            lVar9 = (**(code **)(**(long **)(lVar1 + 0x230) + 0x10))();
            uVar2 = *(ushort *)(lVar9 + 0x88) & 0x1f;
            if ((uVar2 == 0x1f) || (1 < *(ushort *)(lVar9 + (ulong)uVar2 * 0x38 + 0x90) - 3)) {
              plVar8 = *(long **)(lVar1 + 0x230);
              uVar12 = 0;
              if (plVar8 != (long *)0x0) {
                if (*(int *)(lVar1 + 0x238) == (int)plVar8[1]) {
                  uVar12 = (**(code **)(*plVar8 + 0x10))();
                }
                else {
                  *(undefined8 *)(lVar1 + 0x230) = 0;
                  uVar12 = 0;
                  *(undefined4 *)(lVar1 + 0x238) = DAT_03214ce8;
                }
              }
              cVar4 = FUN_00d55870(uVar12);
              if (cVar4 == *(char *)(param_1 + 0x288)) goto LAB_00d7a4f8;
            }
            uVar11 = DAT_03214ce8;
            *(undefined8 *)(lVar1 + 0x230) = 0;
          }
          else {
            *(undefined8 *)(lVar1 + 0x230) = 0;
            uVar11 = DAT_03214ce8;
          }
          *(undefined4 *)(lVar1 + 0x238) = uVar11;
        }
LAB_00d7a4f8:
        lVar13 = lVar13 + 0x10;
      } while (lVar13 != 0x50);
    }
    *(undefined4 *)(param_1 + 0x284) = 0x3f000000;
  }
  if (*(long *)(lVar3 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d7a548(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 local_238 [64];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar5 = *(long **)(param_2 + 0x20);
  puVar4 = (undefined8 *)*plVar5;
  if (puVar4 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      local_238[uVar3 & 0xffffffff] = *puVar4;
      puVar4 = (undefined8 *)plVar5[uVar3 + 1];
      uVar3 = uVar3 + 1;
    } while (puVar4 != (undefined8 *)0x0);
  }
  FUN_00d7fc7c(0xff7fffff,*(long *)(param_1 + 0x28) + 0x28,local_238,uVar3);
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  *(long *)(param_1 + 0x290) = param_2;
  *(char *)(param_1 + 0x288) = (char)uVar1;
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00d7a5f8(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x38);
  do {
    plVar1 = *(long **)(piVar4 + -2);
    if (plVar1 != (long *)0x0) {
      if (*piVar4 == (int)plVar1[1]) {
        lVar2 = (**(code **)(*plVar1 + 0x10))();
        if (lVar2 != 0) {
          plVar1 = *(long **)(piVar4 + -2);
          lVar2 = 0;
          if (plVar1 != (long *)0x0) {
            if (*piVar4 == (int)plVar1[1]) {
              lVar2 = (**(code **)(*plVar1 + 0x10))();
            }
            else {
              piVar4[-2] = 0;
              piVar4[-1] = 0;
              lVar2 = 0;
              *piVar4 = DAT_03214ce8;
            }
          }
          if (lVar2 == param_2) {
            return 1;
          }
        }
      }
      else {
        piVar4[-2] = 0;
        piVar4[-1] = 0;
        *piVar4 = DAT_03214ce8;
      }
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 4;
    if (0x1f < uVar3) {
      return 0;
    }
  } while( true );
}




void FUN_00d7a6c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  
  uVar8 = 0;
  piVar7 = (int *)(param_1 + 0x38);
  do {
    plVar4 = *(long **)(piVar7 + -2);
    if (plVar4 == (long *)0x0) {
LAB_00d7a734:
      lVar5 = 0;
      if (param_3 != 0) {
        lVar5 = param_3 + 0x28;
      }
      piVar2 = &DAT_03214ce8;
      if (param_3 != 0) {
        piVar2 = (int *)(lVar5 + 8);
      }
      iVar3 = *piVar2;
      *(long *)(piVar7 + -2) = lVar5;
      *piVar7 = iVar3;
      *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + 1;
      break;
    }
    if (*piVar7 != (int)plVar4[1]) {
      piVar7[-2] = 0;
      piVar7[-1] = 0;
      *piVar7 = DAT_03214ce8;
      goto LAB_00d7a734;
    }
    lVar5 = (**(code **)(*plVar4 + 0x10))();
    if (lVar5 == 0) goto LAB_00d7a734;
    uVar8 = uVar8 + 1;
    piVar7 = piVar7 + 4;
  } while (uVar8 < 0x20);
  if (*(char *)(*(long *)(param_1 + 0x290) + 0x1c) != '\0') {
    lVar5 = 0;
    do {
      lVar1 = param_1 + lVar5;
      plVar4 = *(long **)(lVar1 + 0x230);
      lVar6 = 0;
      if (plVar4 != (long *)0x0) {
        if (*(int *)(lVar1 + 0x238) == (int)plVar4[1]) {
          lVar6 = (**(code **)(*plVar4 + 0x10))();
        }
        else {
          *(undefined8 *)(lVar1 + 0x230) = 0;
          lVar6 = 0;
          *(int *)(lVar1 + 0x238) = DAT_03214ce8;
        }
      }
      iVar3 = DAT_03214ce8;
      if (lVar6 == param_3) {
        *(undefined8 *)(lVar1 + 0x230) = 0;
        *(int *)(param_1 + lVar5 + 0x238) = iVar3;
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != 0x50);
  }
  return;
}




void FUN_00d7a7f4(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  
  if (param_3 == 0) {
    return;
  }
  uVar6 = 0;
  piVar5 = (int *)(param_1 + 0x38);
  do {
    plVar3 = *(long **)(piVar5 + -2);
    if (plVar3 != (long *)0x0) {
      if (*piVar5 == (int)plVar3[1]) {
        lVar4 = (**(code **)(*plVar3 + 0x10))();
        if (lVar4 != 0) {
          plVar3 = *(long **)(piVar5 + -2);
          lVar4 = 0;
          if (plVar3 != (long *)0x0) {
            if (*piVar5 == (int)plVar3[1]) {
              lVar4 = (**(code **)(*plVar3 + 0x10))();
            }
            else {
              piVar5[-2] = 0;
              piVar5[-1] = 0;
              lVar4 = 0;
              *piVar5 = DAT_03214ce8;
            }
          }
          iVar1 = DAT_03214ce8;
          if (lVar4 == param_3) {
            piVar5[-2] = 0;
            piVar5[-1] = 0;
            *piVar5 = iVar1;
            *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + -1;
            if (*(char *)(*(long *)(param_1 + 0x290) + 0x1c) == '\0') {
              return;
            }
            if ((*(byte *)(param_3 + 0x2f4) & 1) == 0) {
              return;
            }
            cVar2 = FUN_00d55870(param_3);
            if (cVar2 != *(char *)(param_1 + 0x288)) {
              return;
            }
            uVar6 = 0;
            piVar5 = (int *)(param_1 + 0x238);
            break;
          }
        }
      }
      else {
        piVar5[-2] = 0;
        piVar5[-1] = 0;
        *piVar5 = DAT_03214ce8;
      }
    }
    uVar6 = uVar6 + 1;
    piVar5 = piVar5 + 4;
    if (0x1f < uVar6) {
      return;
    }
  } while( true );
LAB_00d7a90c:
  plVar3 = *(long **)(piVar5 + -2);
  if (plVar3 == (long *)0x0) {
LAB_00d7a954:
    iVar1 = *(int *)(param_3 + 0x30);
    *(long *)(piVar5 + -2) = param_3 + 0x28;
    *piVar5 = iVar1;
    return;
  }
  if (*piVar5 != (int)plVar3[1]) {
    piVar5[-2] = 0;
    piVar5[-1] = 0;
    *piVar5 = DAT_03214ce8;
    goto LAB_00d7a954;
  }
  lVar4 = (**(code **)(*plVar3 + 0x10))();
  if (lVar4 == 0) goto LAB_00d7a954;
  uVar6 = uVar6 + 1;
  piVar5 = piVar5 + 4;
  if (4 < uVar6) {
    return;
  }
  goto LAB_00d7a90c;
}




void FUN_00d7a968(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  undefined4 local_50 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = 0;
  if ((*(byte *)(param_3 + 0x2f6) >> 2 & 1) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x290) + 0x1c) != '\0') {
      cVar2 = FUN_00d55870(param_3);
      uVar4 = 0;
      if (cVar2 != *(char *)(param_1 + 0x288)) goto LAB_00d7aa9c;
      uVar4 = FUN_00d9ea34(param_3);
      thunk_FUN_00d9ff34(local_50,*(undefined8 *)(*(long *)(param_1 + 0x290) + 8));
      bVar3 = FUN_00d6bbac(uVar4,local_50[0],0);
      uVar8 = 0;
      piVar7 = (int *)(param_1 + 0x238);
      do {
        plVar5 = *(long **)(piVar7 + -2);
        if (plVar5 != (long *)0x0) {
          if (*piVar7 == (int)plVar5[1]) {
            lVar6 = (**(code **)(*plVar5 + 0x10))();
            if (lVar6 != 0) {
              plVar5 = *(long **)(piVar7 + -2);
              lVar6 = 0;
              if (plVar5 != (long *)0x0) {
                if (*piVar7 == (int)plVar5[1]) {
                  lVar6 = (**(code **)(*plVar5 + 0x10))();
                }
                else {
                  piVar7[-2] = 0;
                  piVar7[-1] = 0;
                  lVar6 = 0;
                  *piVar7 = DAT_03214ce8;
                }
              }
              if ((lVar6 == param_3 & (bVar3 ^ 0xff)) != 0) {
                uVar4 = 0;
                goto LAB_00d7aa9c;
              }
            }
          }
          else {
            piVar7[-2] = 0;
            piVar7[-1] = 0;
            *piVar7 = DAT_03214ce8;
          }
        }
        uVar8 = uVar8 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 < 5);
    }
    uVar4 = 1;
  }
LAB_00d7aa9c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00d7aad4(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




undefined8 FUN_00d7aaf8(undefined8 param_1)

{
  FUN_00d79f18();
  return param_1;
}




void FUN_00d7ab1c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d7ab24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d7ab28(long param_1)

{
  long lVar1;
  
  DAT_031aa094 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031aa094 + 1;
  lVar1 = param_1 + (ulong)DAT_031aa094 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d7af00;
  *(code **)(lVar1 + 0xb8) = FUN_00d7af24;
  *(uint *)(lVar1 + 0xa4) = DAT_031aa094;
  *(undefined4 *)(lVar1 + 0xa8) = 0x60;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x80;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_00d7ab88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  param_1[7] = 0;
  *param_1 = &PTR_FUN_0281e550;
  param_1[5] = &PTR_FUN_0281e580;
  thunk_FUN_00d9ff34(param_1 + 8,&DAT_01bcddcf);
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0xffffffff;
  return;
}




void FUN_00d7ac00(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  FUN_00d9ff34(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}




void FUN_00d7ac30(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}




void FUN_00d7ac38(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x58) = param_2 & 1;
  return;
}




void FUN_00d7ac44(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((((uVar3 & 1) != 0) && (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar4 != 0)) &&
     (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_02c09220)) {
    uVar2 = FUN_00ceb350();
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    FUN_00cfe864(0xbf800000,0,0,auStack_90,*(undefined4 *)(lVar4 + 0x260),
                 *(undefined4 *)(lVar4 + 0x260),*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x20),
                 uVar2,1,*(undefined4 *)(param_1 + 0x50),0);
    FUN_00ce20fc(auStack_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00d7ad00(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c09220) {
      lVar1 = 0;
    }
    return lVar1;
  }
  return 0;
}




void FUN_00d7ad30(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    if (((*(int *)(param_1 + 0x54) != -1) &&
        (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar3 != 0)) &&
       (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_02c09220)) {
      FUN_00d009d0(auStack_60,*(undefined4 *)(lVar3 + 0x260));
      FUN_00ce20fc(auStack_60);
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d7add8(long param_1)

{
  FUN_00d4c67c(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x28));
  return;
}




undefined8 FUN_00d7ade4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}




float FUN_00d7adec(long param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = FUN_00d4c67c(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x28));
  if (lVar1 == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = *(float *)(lVar1 + 8) + *(float *)(lVar1 + 0xc) * (float)(*(int *)(param_1 + 0x50) - 1);
  }
  return fVar2;
}




undefined4 FUN_00d7ae38(long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}




undefined1 FUN_00d7ae40(long param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}




void FUN_00d7ae48(long param_1)

{
  FUN_0198931c(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d7ae70(void *param_1)

{
  FUN_0198931c((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d7aea0(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_00d7aec4(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




long FUN_00d7aef0(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00d7aef8(long param_1)

{
  return param_1 + -0x28;
}




undefined8 FUN_00d7af00(undefined8 param_1)

{
  FUN_00d7ab88();
  return param_1;
}




void FUN_00d7af24(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d7af2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d7af30(long param_1)

{
  long lVar1;
  
  DAT_02c7bf38 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_02c7bf38 + 1;
  lVar1 = param_1 + (ulong)DAT_02c7bf38 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d7bb10;
  *(code **)(lVar1 + 0xb8) = FUN_00d7bb40;
  *(uint *)(lVar1 + 0xa4) = DAT_02c7bf38;
  *(undefined4 *)(lVar1 + 0xa8) = 0x50;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_00d7af90(undefined8 *param_1)

{
  undefined4 uVar1;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_0281e5b0;
  uVar1 = DAT_03214ce8;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}




void FUN_00d7afc0(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  byte local_70 [16];
  void *local_60;
  ulong local_58 [2];
  void *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    local_58[0] = 0;
    local_58[1] = 0;
    local_48 = (void *)0x0;
    FUN_008fa54c(local_70,param_2);
    FUN_008fce60(local_58,local_70);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    local_40 = param_3;
    FUN_00d7b06c(param_1 + 0x28,local_58);
    if ((local_58[0] & 1) != 0) {
      operator_delete(local_48);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

