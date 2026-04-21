// functions/00a45 — 12 functions
#include "libGameKindred.h"




void FUN_00a45204(undefined1 param_1 [16],float param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_3[0x29] != 0) {
    if ((int)param_3[0x2a] == *(int *)(param_3[0x29] + 8)) {
      plVar3 = (long *)param_3[0x2b];
      if (plVar3 != (long *)0x0) {
        if ((int)param_3[0x2c] == (int)plVar3[1]) {
          lVar4 = (**(code **)(*plVar3 + 0x10))();
          if (lVar4 != 0) {
            (**(code **)(*param_3 + 0x48))(param_3);
            plVar3 = param_3 + 0x46;
            fVar12 = param_2 * 0.05;
            fVar7 = (float)(**(code **)(*param_3 + 0x48))(param_3);
            (**(code **)(*param_3 + 0x48))(param_3);
            param_2 = param_2 - (fVar12 + fVar12);
            FUN_00f13f08(fVar7 - (fVar12 + fVar12),plVar3);
            (**(code **)(*param_3 + 0x48))(param_3);
            param_2 = fVar12 + param_2;
            fVar7 = param_2 * -0.5;
            if ((*(float *)(param_3 + 0x4e) != fVar12 * 0.5) ||
               (param_2 = *(float *)((long)param_3 + 0x274), param_2 != fVar7)) {
              *(float *)(param_3 + 0x4e) = fVar12 * 0.5;
              *(float *)((long)param_3 + 0x274) = fVar7;
              FUN_0091ada4(plVar3);
            }
            FUN_00f01c20(plVar3);
            fVar7 = param_2;
            fVar12 = (float)FUN_00f01c20(plVar3);
            fVar12 = (param_2 * fVar12) / 6.0;
            fVar11 = SQRT(fVar12);
            if (NAN(fVar11)) {
              fVar11 = sqrtf(fVar12);
            }
            FUN_00f01c20(plVar3);
            if (fVar11 <= fVar7) {
              fVar7 = fVar11;
            }
            fVar11 = (float)FUN_00f01c20(plVar3);
            fVar12 = fVar11 / 6.0;
            if (fVar7 <= fVar11 / 6.0) {
              fVar12 = fVar7;
            }
            local_70 = fVar12;
            fStack_6c = fVar12;
            fVar7 = (float)FUN_00f01c20(plVar3);
            if ((int)param_3[0x6ea] != 0) {
              fVar11 = (float)((int)param_3[0x6ea] - 1);
              if (fVar11 <= 1.0) {
                fVar11 = 1.0;
              }
              uVar6 = 0;
              plVar5 = param_3 + 0xa2;
              do {
                if (plVar5[4] != 0) {
                  FUN_00f01a4c(plVar5,1);
                }
                FUN_00f023ec(plVar3,plVar5,1);
                if (uVar6 == 0) {
                  if ((*(float *)(param_3 + 0xaa) != fVar12 * 0.5) ||
                     (*(float *)((long)param_3 + 0x554) != 0.0)) {
                    *(float *)(param_3 + 0xaa) = fVar12 * 0.5;
                    *(undefined4 *)((long)param_3 + 0x554) = 0;
                    goto LAB_00a45460;
                  }
                }
                else {
                  uVar1 = (int)uVar6 - 1;
                  fVar8 = *(float *)(param_3 + (ulong)uVar1 * 0xfd + 0xaa);
                  fVar9 = (float)(**(code **)(param_3[(ulong)uVar1 * 0xfd + 0xa2] + 0x50))
                                           (param_3 + (ulong)uVar1 * 0xfd + 0xa2);
                  fVar10 = (float)(**(code **)(*plVar5 + 0x50))(plVar5);
                  fVar8 = (fVar7 - fVar12 * 6.0) / fVar11 + ABS(fVar8) + fVar9 * 0.5 + fVar10 * 0.5;
                  if ((*(float *)(plVar5 + 8) != fVar8) || (*(float *)((long)plVar5 + 0x44) != 0.0))
                  {
                    *(float *)(plVar5 + 8) = fVar8;
                    *(undefined4 *)((long)plVar5 + 0x44) = 0;
LAB_00a45460:
                    FUN_0091ada4(plVar5);
                  }
                }
                uVar6 = uVar6 + 1;
                plVar5 = plVar5 + 0xfd;
              } while (uVar6 < *(uint *)(param_3 + 0x6ea));
            }
            param_3 = param_3 + 0xa2;
            lVar4 = 6;
            do {
              FUN_00f13f18(param_3,&local_70);
              FUN_00a46d60(param_3);
              lVar4 = lVar4 + -1;
              param_3 = param_3 + 0xfd;
            } while (lVar4 != 0);
          }
        }
        else {
          param_3[0x2b] = 0;
          *(undefined4 *)(param_3 + 0x2c) = DAT_03214ce8;
        }
      }
    }
    else {
      param_3[0x29] = 0;
      *(undefined4 *)(param_3 + 0x2a) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a45508(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_90;
  float fStack_8c;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  if (param_3[0x29] != 0) {
    if ((int)param_3[0x2a] == *(int *)(param_3[0x29] + 8)) {
      plVar5 = (long *)param_3[0x2b];
      if (plVar5 != (long *)0x0) {
        if ((int)param_3[0x2c] == (int)plVar5[1]) {
          lVar6 = (**(code **)(*plVar5 + 0x10))();
          if (lVar6 != 0) {
            (**(code **)(*param_3 + 0x50))(param_3);
            plVar5 = param_3 + 0x46;
            fVar14 = param_2 * 0.05;
            uVar11 = (**(code **)(*param_3 + 0x48))(param_3);
            (**(code **)(*param_3 + 0x48))(param_3);
            FUN_00f13f08(uVar11,plVar5);
            fVar13 = fVar14 * 0.5;
            (**(code **)(*param_3 + 0x48))(param_3);
            fVar14 = fVar14 + param_2;
            fVar8 = fVar14 * -0.5;
            if ((*(float *)(param_3 + 0x4e) != fVar13) ||
               (fVar14 = *(float *)((long)param_3 + 0x274), fVar14 != fVar8)) {
              *(float *)(param_3 + 0x4e) = fVar13;
              *(float *)((long)param_3 + 0x274) = fVar8;
              FUN_0091ada4(plVar5);
            }
            plVar1 = param_3 + 0x74;
            uVar11 = FUN_00f01c20(plVar5);
            FUN_00f01c20(plVar5);
            fVar14 = fVar14 * 0.5;
            FUN_00f13f08(uVar11,plVar1);
            uVar11 = FUN_00f01c20(plVar5);
            FUN_00f01c20(plVar5);
            fVar14 = fVar14 * 0.5;
            FUN_00f13f08(uVar11,param_3 + 0x5d);
            lVar6 = 0;
            do {
              fVar8 = (float)FUN_00f01c20(plVar5);
              FUN_00f01c20(plVar5);
              lVar2 = (long)param_3 + lVar6 + 0x2e8;
              fVar12 = fVar14 * 0.5;
              FUN_00f13f08(fVar8 * 0.95,lVar2);
              fVar8 = (float)FUN_00f01c20(plVar5);
              fVar14 = (float)(**(code **)(*(long *)((long)param_3 + lVar6 + 0x2e8) + 0x50))(lVar2);
              fVar13 = *(float *)((long)param_3 + 0x274);
              fVar8 = fVar8 - fVar14;
              (**(code **)(*(long *)((long)param_3 + lVar6 + 0x2e8) + 0x50))(lVar2);
              if (lVar6 == 0) {
                fVar14 = *(float *)(param_3 + 0x65);
                fVar13 = fVar13 + fVar12 * 0.5;
                if ((fVar14 != fVar8) ||
                   (fVar14 = *(float *)((long)param_3 + 0x32c), fVar14 != fVar13)) {
                  *(float *)(param_3 + 0x65) = fVar8;
                  *(float *)((long)param_3 + 0x32c) = fVar13;
                  goto LAB_00a4572c;
                }
              }
              else {
                fVar14 = *(float *)((long)param_3 + lVar6 + 0x328);
                fVar13 = fVar13 - fVar12 * 0.5;
                if ((fVar14 != fVar8) ||
                   (fVar14 = *(float *)((long)param_3 + lVar6 + 0x32c), fVar14 != fVar13)) {
                  *(float *)((long)param_3 + lVar6 + 0x328) = fVar8;
                  *(float *)((long)param_3 + lVar6 + 0x32c) = fVar13;
LAB_00a4572c:
                  FUN_0091ada4(lVar2);
                }
              }
              lVar6 = lVar6 + 0xb8;
            } while (lVar6 != 0x170);
            (**(code **)(*plVar1 + 0x50))(plVar1);
            fVar8 = fVar14;
            fVar13 = (float)(**(code **)(*plVar1 + 0x50))(plVar1);
            fVar14 = (fVar14 * fVar13) / 3.0;
            fVar13 = SQRT(fVar14);
            if (NAN(fVar13)) {
              fVar13 = sqrtf(fVar14);
            }
            (**(code **)(param_3[0x74] + 0x50))(plVar1);
            if (fVar13 <= fVar8) {
              fVar8 = fVar13;
            }
            fVar13 = (float)(**(code **)(param_3[0x74] + 0x50))(plVar1);
            fVar14 = fVar13 / 3.0;
            if (fVar8 <= fVar13 / 3.0) {
              fVar14 = fVar8;
            }
            local_90 = fVar14;
            fStack_8c = fVar14;
            fVar8 = (float)(**(code **)(param_3[0x74] + 0x50))(plVar1);
            if ((int)param_3[0x6ea] != 0) {
              lVar6 = 0;
              uVar7 = 0;
              fVar13 = fVar14 * 0.5;
              do {
                plVar5 = plVar1;
                if (2 < uVar7) {
                  plVar5 = param_3 + 0x5d;
                }
                lVar2 = (long)param_3 + lVar6 + 0x510;
                if (*(long *)((long)param_3 + lVar6 + 0x530) != 0) {
                  FUN_00f01a4c(lVar2,1);
                }
                (**(code **)(*plVar5 + 0x78))(plVar5,lVar2,1);
                if (uVar7 < 3) {
                  if (lVar6 == 0) {
                    if ((*(float *)(param_3 + 0xaa) == fVar13) &&
                       (*(float *)((long)param_3 + 0x554) == 0.0)) goto LAB_00a458f8;
                    *(float *)(param_3 + 0xaa) = fVar13;
                    *(undefined4 *)((long)param_3 + 0x554) = 0;
                  }
                  else {
LAB_00a45888:
                    uVar3 = (int)uVar7 - 1;
                    fVar12 = *(float *)(param_3 + (ulong)uVar3 * 0xfd + 0xaa);
                    fVar9 = (float)(**(code **)(param_3[(ulong)uVar3 * 0xfd + 0xa2] + 0x50))
                                             (param_3 + (ulong)uVar3 * 0xfd + 0xa2);
                    fVar10 = (float)(**(code **)(*(long *)((long)param_3 + lVar6 + 0x510) + 0x50))
                                              (lVar2);
                    fVar12 = (fVar8 - fVar14 * 3.0) * 0.5 + ABS(fVar12) + fVar9 * 0.5 + fVar10 * 0.5
                    ;
                    if ((*(float *)((long)param_3 + lVar6 + 0x550) == fVar12) &&
                       (*(float *)((long)param_3 + lVar6 + 0x554) == 0.0)) goto LAB_00a458f8;
                    *(float *)((long)param_3 + lVar6 + 0x550) = fVar12;
                    *(undefined4 *)((long)param_3 + lVar6 + 0x554) = 0;
                  }
LAB_00a458f0:
                  FUN_0091ada4(lVar2);
                }
                else {
                  if (uVar7 != 3) goto LAB_00a45888;
                  if ((*(float *)(param_3 + 0x3a1) != fVar13) ||
                     (*(float *)((long)param_3 + 0x1d0c) != 0.0)) {
                    *(float *)(param_3 + 0x3a1) = fVar13;
                    *(undefined4 *)((long)param_3 + 0x1d0c) = 0;
                    goto LAB_00a458f0;
                  }
                }
LAB_00a458f8:
                uVar7 = uVar7 + 1;
                lVar6 = lVar6 + 0x7e8;
              } while (uVar7 < *(uint *)(param_3 + 0x6ea));
            }
            param_3 = param_3 + 0xa2;
            lVar6 = 6;
            do {
              FUN_00f13f18(param_3,&local_90);
              FUN_00a46d60(param_3);
              lVar6 = lVar6 + -1;
              param_3 = param_3 + 0xfd;
            } while (lVar6 != 0);
          }
        }
        else {
          param_3[0x2b] = 0;
          *(undefined4 *)(param_3 + 0x2c) = DAT_03214ce8;
        }
      }
    }
    else {
      param_3[0x29] = 0;
      *(undefined4 *)(param_3 + 0x2a) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a459a0(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  FUN_00b89d24(param_1 + 0x168,param_2 & 1,param_3,param_4 & 1);
  return;
}




void FUN_00a459b0(long param_1,uint param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x510;
  lVar1 = 6;
  do {
    FUN_00a4780c(param_1,param_2 & 1);
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 0x7e8;
  } while (lVar1 != 0);
  return;
}




void FUN_00a459f4(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  param_1 = param_1 + 0x510;
  lVar2 = 6;
  do {
    iVar1 = FUN_00a47754(param_1);
    if (iVar1 == param_2) {
      FUN_00a47828(param_1);
    }
    lVar2 = lVar2 + -1;
    param_1 = param_1 + 0x7e8;
  } while (lVar2 != 0);
  return;
}




void FUN_00a45a44(long param_1,uint param_2)

{
  FUN_00a47838(param_1 + (ulong)param_2 * 0x7e8 + 0x510);
  return;
}




bool FUN_00a45a64(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(char *)(param_1 + 0x3758) == '\0') {
    bVar1 = *(int *)(param_1 + 0x3754) == 0;
  }
  return bVar1;
}




int FUN_00a45a88(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = 0;
  uVar7 = 0;
  do {
    plVar4 = *(long **)(param_1 + 0x158);
    uVar5 = 0;
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0x160) == (int)plVar4[1]) {
        uVar5 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x158) = 0;
        uVar5 = 0;
        *(undefined4 *)(param_1 + 0x160) = DAT_03214ce8;
      }
    }
    uVar2 = FUN_00d72dac(uVar5);
    if (uVar2 <= uVar7) {
      return iVar6;
    }
    plVar4 = *(long **)(param_1 + 0x158);
    if (plVar4 == (long *)0x0) {
      uVar3 = 0;
      uVar5 = 0;
    }
    else if (*(int *)(param_1 + 0x160) == (int)plVar4[1]) {
      uVar3 = (**(code **)(*plVar4 + 0x10))();
      plVar4 = *(long **)(param_1 + 0x158);
      if (plVar4 == (long *)0x0) {
        uVar5 = 0;
      }
      else {
        if (*(int *)(param_1 + 0x160) != (int)plVar4[1]) goto LAB_00a45b14;
        uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    else {
      uVar3 = 0;
LAB_00a45b14:
      *(undefined8 *)(param_1 + 0x158) = 0;
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x160) = DAT_03214ce8;
    }
    uVar1 = FUN_00d72ed0(uVar5,uVar7);
    FUN_00d73214(uVar3,uVar1);
    uVar2 = FUN_00a1feb4();
    iVar6 = iVar6 + (~uVar2 & 1);
    uVar7 = uVar7 + 1;
  } while( true );
}




void FUN_00a45bb0(long param_1,undefined4 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00ced270(param_2);
  if (((uVar1 & 1) == 0) && (*(char *)(param_1 + 0x3758) == '\0')) {
    return;
  }
  FUN_00a43c2c(param_1);
  return;
}




void FUN_00a45bf4(long param_1,uint param_2,undefined4 param_3,undefined8 param_4,uint param_5)

{
  undefined **ppuVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  byte local_108 [16];
  void *local_f8;
  undefined4 local_ec;
  undefined1 auStack_e8 [128];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar5 = *(long **)(param_1 + 0x158);
  local_ec = param_3;
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x160) == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if ((param_2 < 6) && (lVar6 != 0)) {
        lVar10 = param_1 + (ulong)param_2 * 0x7e8;
        lVar6 = lVar10 + 0x510;
        FUN_00a466f4(lVar6);
        FUN_00969b40(auStack_e8,"inventory_slot_%u",param_2);
        uVar3 = FUN_00e6a474(auStack_e8);
        uVar4 = FUN_0091ed5c(auStack_e8,uVar3,0x1234);
        *(uint *)(lVar10 + 0x594) =
             *(uint *)(lVar10 + 0x594) & 0x80000000 |
             *(uint *)(lVar10 + 0x594) & 0x7fff | (uVar4 & 0xffff) << 0xf;
        plVar5 = *(long **)(param_1 + 0x148);
        if (plVar5 != (long *)0x0) {
          if (*(int *)(param_1 + 0x150) == (int)plVar5[1]) {
            lVar7 = (**(code **)(*plVar5 + 0x10))();
            if (lVar7 != 0) {
              FUN_00a46500(lVar6,lVar7,param_2 & 0xff,&local_ec,param_4,*(char *)(param_1 + 0x3758),
                           param_5 & 1);
              uVar8 = FUN_00d9ea60(param_1 + 0x148);
              uVar9 = FUN_00d73360(uVar8,local_ec);
              if ((uVar9 & 1) != 0) {
                FUN_00a47770(lVar6,param_2 + 6);
              }
              ppuVar1 = &PTR_s_build___Fonts_Futura_Medium_64_S_02be9d18;
              if (*(char *)(param_1 + 0x3758) != '\0') {
                ppuVar1 = &PTR_s_build___Fonts_Futura_Medium_30_S_02be9d08;
              }
              FUN_008fa54c(local_108,*ppuVar1);
              FUN_00a47954(lVar6,local_108);
              if ((local_108[0] & 1) != 0) {
                operator_delete(local_f8);
              }
              FUN_00a46814(lVar6);
              *(uint *)(lVar10 + 0x594) = *(uint *)(lVar10 + 0x594) | 4;
            }
          }
          else {
            *(undefined8 *)(param_1 + 0x148) = 0;
            *(undefined4 *)(param_1 + 0x150) = DAT_03214ce8;
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x158) = 0;
      *(undefined4 *)(param_1 + 0x160) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1 FUN_00a45de4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3758);
}




void FUN_00a45df0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined1 uVar9;
  ulong uVar10;
  void *pvVar11;
  void *pvVar12;
  undefined8 uVar13;
  uint uVar14;
  code *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar8 = tpidr_el0;
  local_78 = *(long *)(lVar8 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027c9eb0;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x2f;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x4d;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x6b;
  FUN_00f0eda4(plVar4);
  plVar5 = param_1 + 0x8b;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0xa9;
  FUN_00f0d160(plVar6);
  plVar7 = param_1 + 0xcf;
  FUN_00f0d160(plVar7);
  param_1[0xf5] = 0;
  FUN_00e70314(param_1 + 0xf6);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0xfa) = DAT_03214ce8;
  uVar9 = DAT_0314b294;
  *(undefined4 *)((long)param_1 + 0x7dc) = 0xffffffff;
  *(byte *)(param_1 + 0xfc) = *(byte *)(param_1 + 0xfc) & 0xfc;
  *(undefined1 *)(param_1 + 0xfb) = uVar9;
  uVar10 = FUN_00ceab64();
  if ((uVar10 & 1) == 0) {
    pvVar11 = operator_new(0x38);
    pvVar12 = operator_new(0x198);
    FUN_00c03350();
    FUN_00bbddf8(pvVar11,pvVar12);
    param_1[0x17] = (long)pvVar11;
  }
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar6,1);
  FUN_00f023ec(plVar1,plVar7,1);
  if (param_1[0x17] != 0) {
    (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0x17] + 8),1);
    uVar13 = FUN_00c03750(*(undefined8 *)(param_1[0x17] + 8));
    (**(code **)(*param_1 + 0x78))(param_1,uVar13,1);
    FUN_00c03750(*(undefined8 *)(param_1[0x17] + 8));
    uVar13 = FUN_00c06624();
    (**(code **)(*param_1 + 0x78))(param_1,uVar13,1);
    FUN_00c03750(*(undefined8 *)(param_1[0x17] + 8));
    uVar13 = FUN_00c0662c();
    (**(code **)(*param_1 + 0x78))(param_1,uVar13,1);
  }
  local_a8 = (code *)0x3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_a8);
  FUN_00f0e540(plVar2,PTR_s_build___HUDItemsAndBuffs_atlas_02be3448);
  if ((*(float *)(param_1 + 0x39) != 0.5) || (*(float *)((long)param_1 + 0x1cc) != 0.5)) {
    param_1[0x39] = 0x3f0000003f000000;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e540(plVar4,PTR_s_build___HUDItemsAndBuffs_atlas_02be3448);
  FUN_00f0eea0(plVar4,FUN_00a46330,param_1 + 0xf8);
  FUN_00f0e578(plVar4,"icon_item_empty");
  if ((*(float *)(param_1 + 0x75) != 0.5) || (*(float *)((long)param_1 + 0x3ac) != 0.5)) {
    param_1[0x75] = 0x3f0000003f000000;
    FUN_0091ada4(plVar4);
  }
  uVar14 = *(uint *)((long)param_1 + 0x3dc);
  if ((uVar14 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x3dc) = uVar14 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar4);
    uVar14 = *(uint *)((long)param_1 + 0x3dc);
  }
  *(uint *)((long)param_1 + 0x3dc) = uVar14 & 0xfffffffb;
  FUN_00f0e540(plVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  if ((*(float *)(param_1 + 0x95) != 0.5) || (*(float *)((long)param_1 + 0x4ac) != 0.5)) {
    param_1[0x95] = 0x3f0000003f000000;
    FUN_0091ada4(plVar5);
  }
  *(uint *)((long)param_1 + 0x4dc) = *(uint *)((long)param_1 + 0x4dc) & 0xfffffffb;
  FUN_00f0e540(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(plVar3,"hud_store_inventory_tray");
  if ((*(float *)(param_1 + 0x57) != 0.5) || (*(float *)((long)param_1 + 700) != 0.5)) {
    param_1[0x57] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  if ((*(float *)(param_1 + 0xb3) != 0.5) || (*(float *)((long)param_1 + 0x59c) != 0.5)) {
    param_1[0xb3] = 0x3f0000003f000000;
    FUN_0091ada4(plVar6);
  }
  *(uint *)((long)param_1 + 0x5cc) = *(uint *)((long)param_1 + 0x5cc) | 4;
  FUN_00f0dac8(plVar6,0);
  FUN_00f0d75c(plVar6,&DAT_03210450);
  uVar14 = *(uint *)((long)param_1 + 0x5cc);
  if ((uVar14 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x5cc) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x7280;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0dac8(plVar7,0);
  if ((*(float *)(param_1 + 0xd9) != 0.5) || (*(float *)((long)param_1 + 0x6cc) != 0.5)) {
    param_1[0xd9] = 0x3f0000003f000000;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0da80(plVar7,&DAT_03131298);
  FUN_00f0da30(plVar7,1);
  local_80 = DAT_03210f94;
  local_a8 = thunk_FUN_00a47850;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_009693a0(param_1 + 1,&local_a8);
  local_80 = DAT_03210f98;
  local_a8 = thunk_FUN_00a478e4;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_009693a0(param_1 + 1,&local_a8);
  if (*(long *)(lVar8 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

