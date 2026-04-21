// functions/00a5b — 19 functions
#include "libGameKindred.h"




void thunk_FUN_00a5bd48(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_CLOSE_SHOP");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a5b474(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_80 [40];
  long lStack_58;
  
  lVar4 = tpidr_el0;
  lStack_58 = *(long *)(lVar4 + 0x28);
  plVar1 = (long *)(param_1 + 0x340c0);
  plVar8 = (long *)*plVar1;
  if (plVar8 != (long *)0x0) {
    if (*(int *)(param_1 + 0x340c8) == (int)plVar8[1]) {
      lVar9 = (**(code **)(*plVar8 + 0x10))();
      if (lVar9 != 0) {
        FUN_00a5a9f4(param_1);
        lVar2 = param_1 + 0x2f260;
        iVar5 = FUN_00a5d360(lVar2);
        if (iVar5 - 3U < 2) {
          FUN_00a5d4d0(lVar2);
        }
        else if (iVar5 == 1) {
          lVar3 = param_1 + 0x2c2b0;
          uVar10 = FUN_00a5fec4(lVar3);
          if ((uVar10 & 1) == 0) {
            uVar11 = FUN_00d9ea60(plVar1);
            iVar5 = FUN_00a5f97c(lVar3);
            if ((iVar5 != -1) && (iVar6 = FUN_00d731d8(uVar11,iVar5), -1 < iVar6)) {
              uVar7 = FUN_00d7312c(uVar11,iVar5);
              FUN_00d06994(auStack_80,*(undefined4 *)(lVar9 + 0x260),iVar5);
              FUN_00ce20fc(auStack_80);
              FUN_00a624b0(param_1 + 0x31cb8);
              if (uVar7 < 2) {
                FUN_00a5f054(lVar3);
                FUN_00a5d410(lVar2,0xffffffff);
                FUN_00a5a9f4(param_1);
              }
            }
          }
        }
        else if (iVar5 == 0) {
          FUN_00a5b628(param_1);
        }
      }
    }
    else {
      *plVar1 = 0;
      *(int *)(param_1 + 0x340c8) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar4 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a5bdb8(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  FUN_00b1bd10(param_1 + 0x33630,1);
  lVar1 = FUN_00a1ffc0();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0xda87fc4a) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xda87fc4a];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xda87fc4b)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1),6);
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  return;
}




void FUN_00a5b394(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210c94);
  if (((uVar1 & 1) != 0) || (DAT_03210c94 == DAT_03210f50)) {
    FUN_00a63088(param_1 + 0x29c0,(int)param_2[5]);
    lVar2 = FUN_00a64fbc(param_1 + 0x29c0);
    if (lVar2 == 0) {
      FUN_00a624b0(param_1 + 0x31cb8);
      return;
    }
  }
  return;
}




void FUN_00a5b430(long param_1)

{
  ulong uVar1;
  
  FUN_00a5a9f4();
  uVar1 = FUN_00a64bd0(param_1 + 0x29c0);
  if ((uVar1 & 1) != 0) {
    FUN_00a63a44(param_1 + 0x29c0);
    return;
  }
  return;
}




void FUN_00a5b474(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_80 [40];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar1 = (long *)(param_1 + 0x340c0);
  plVar8 = (long *)*plVar1;
  if (plVar8 != (long *)0x0) {
    if (*(int *)(param_1 + 0x340c8) == (int)plVar8[1]) {
      lVar9 = (**(code **)(*plVar8 + 0x10))();
      if (lVar9 != 0) {
        FUN_00a5a9f4(param_1);
        lVar2 = param_1 + 0x2f260;
        iVar5 = FUN_00a5d360(lVar2);
        if (iVar5 - 3U < 2) {
          FUN_00a5d4d0(lVar2);
        }
        else if (iVar5 == 1) {
          lVar3 = param_1 + 0x2c2b0;
          uVar10 = FUN_00a5fec4(lVar3);
          if ((uVar10 & 1) == 0) {
            uVar11 = FUN_00d9ea60(plVar1);
            iVar5 = FUN_00a5f97c(lVar3);
            if ((iVar5 != -1) && (iVar6 = FUN_00d731d8(uVar11,iVar5), -1 < iVar6)) {
              uVar7 = FUN_00d7312c(uVar11,iVar5);
              FUN_00d06994(auStack_80,*(undefined4 *)(lVar9 + 0x260),iVar5);
              FUN_00ce20fc(auStack_80);
              FUN_00a624b0(param_1 + 0x31cb8);
              if (uVar7 < 2) {
                FUN_00a5f054(lVar3);
                FUN_00a5d410(lVar2,0xffffffff);
                FUN_00a5a9f4(param_1);
              }
            }
          }
        }
        else if (iVar5 == 0) {
          FUN_00a5b628(param_1);
        }
      }
    }
    else {
      *plVar1 = 0;
      *(int *)(param_1 + 0x340c8) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a5b628(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 local_d8;
  undefined1 auStack_d0 [40];
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x340c0);
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_1 + 0x340c8) == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        lVar6 = FUN_00a64fbc(param_1 + 0x29c0);
        if (lVar6 != 0) {
          fVar12 = *(float *)(*(long *)(lVar5 + 0x40) + 800);
          uVar7 = FUN_00d9eae0(lVar5);
          local_d8 = 0;
          local_6c = 0;
          local_74 = 0;
          uStack_7c = 0;
          local_84 = 0;
          local_a8 = 0xffffffff;
          uStack_8c = 0;
          local_94 = 0;
          uStack_9c = 0;
          local_a4 = 0;
          FUN_00ceace8();
          uVar8 = FUN_00ceaf8c();
          if (((uVar8 & 1) == 0) || (uVar8 = FUN_00a60a58(lVar6), (uVar8 & 1) != 0)) {
            uVar11 = *(undefined8 *)(param_1 + 0x340d0);
            uVar2 = FUN_00a60ab4(lVar6);
            uVar8 = FUN_00d74500(uVar11,uVar2,(int)fVar12,(long)&local_d8 + 4,&local_a8,&local_d8,1)
            ;
            if ((uVar8 & 1) != 0) {
              uVar2 = FUN_00a60ab4(lVar6);
              uVar8 = FUN_00d72d24(uVar7,uVar2);
              if (((uVar8 & 1) != 0) || ((int)local_d8 != 0)) {
                uVar2 = *(undefined4 *)(lVar5 + 0x260);
                uVar3 = FUN_00a60ab4(lVar6);
                FUN_00d005bc(auStack_d0,uVar2,uVar3);
                FUN_00ce20fc(auStack_d0);
                uVar2 = FUN_00a60ab4(lVar6);
                FUN_00a64cd8(param_1 + 0x29c0,uVar2);
                uVar2 = FUN_00a60ab4(lVar6);
                FUN_00a5f9dc(param_1 + 0x2c2b0,uVar2);
                lVar5 = FUN_00a1ffc0();
                uVar2 = FUN_00a60ab4(lVar6);
                plVar10 = (long *)(lVar5 + 0x10);
                plVar9 = (long *)*plVar10;
                plVar4 = plVar10;
                if (plVar9 != (long *)0x0) {
                  do {
                    if (*(uint *)(plVar9 + 4) >= 0x6658bb67) {
                      plVar4 = plVar9;
                    }
                    plVar9 = (long *)plVar9[*(uint *)(plVar9 + 4) < 0x6658bb67];
                  } while (plVar9 != (long *)0x0);
                  if (((plVar4 != plVar10) && (*(uint *)(plVar4 + 4) < 0x6658bb68)) &&
                     ((int)plVar4[5] != 0)) {
                    lVar5 = 0;
                    uVar8 = 0;
                    do {
                      (*(code *)((undefined8 *)(plVar4[6] + lVar5))[1])
                                (*(undefined8 *)(plVar4[6] + lVar5),uVar2);
                      uVar8 = uVar8 + 1;
                      lVar5 = lVar5 + 0x10;
                    } while (uVar8 < *(uint *)(plVar4 + 5));
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      *(long *)(param_1 + 0x340c0) = 0;
      *(int *)(param_1 + 0x340c8) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a5b898(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a5b8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00a5b8a4(long param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210c94);
  if (((uVar2 & 1) != 0) || (DAT_03210c94 == DAT_03210f50)) {
    lVar8 = param_2[4];
    if (lVar8 == 0) {
      FUN_00a624b0(param_1 + 0x31cb8);
      lVar8 = FUN_00a1ffc0();
      plVar5 = (long *)(lVar8 + 0x10);
      plVar6 = (long *)*plVar5;
      plVar7 = plVar5;
      if (plVar6 != (long *)0x0) {
        do {
          if (*(uint *)(plVar6 + 4) >= 0xfb4b760d) {
            plVar7 = plVar6;
          }
          plVar6 = (long *)plVar6[*(uint *)(plVar6 + 4) < 0xfb4b760d];
        } while (plVar6 != (long *)0x0);
        if (((plVar7 != plVar5) && (*(uint *)(plVar7 + 4) < 0xfb4b760e)) && ((int)plVar7[5] != 0)) {
          lVar8 = 0;
          uVar2 = 0;
          do {
            (*(code *)((undefined8 *)(plVar7[6] + lVar8))[1])
                      (*(undefined8 *)(plVar7[6] + lVar8),0xffff);
            uVar2 = uVar2 + 1;
            lVar8 = lVar8 + 0x10;
          } while (uVar2 < *(uint *)(plVar7 + 5));
        }
      }
    }
    else {
      lVar3 = FUN_00a64fbc(param_1 + 0x29c0);
      if (lVar3 != lVar8) {
        FUN_00a5f054(param_1 + 0x2c2b0);
        lVar8 = param_2[4];
        uVar4 = FUN_00a60aac(lVar8);
        FUN_00a6219c(param_1 + 0x31cb8,uVar4);
        FUN_00a5a9f4(param_1);
        FUN_00a5d3ac(param_1 + 0x2f260,lVar8);
        if ((*(byte *)(param_2 + 5) & 1) == 0) {
          lVar3 = FUN_00a1ffc0();
          uVar1 = FUN_00a60ab4(lVar8);
          plVar6 = (long *)(lVar3 + 0x10);
          plVar5 = (long *)*plVar6;
          plVar7 = plVar6;
          if (plVar5 != (long *)0x0) {
            do {
              if (*(uint *)(plVar5 + 4) >= 0xfb4b760d) {
                plVar7 = plVar5;
              }
              plVar5 = (long *)plVar5[*(uint *)(plVar5 + 4) < 0xfb4b760d];
            } while (plVar5 != (long *)0x0);
            if (((plVar7 != plVar6) && (*(uint *)(plVar7 + 4) < 0xfb4b760e)) &&
               ((int)plVar7[5] != 0)) {
              lVar8 = 0;
              uVar2 = 0;
              do {
                (*(code *)((undefined8 *)(plVar7[6] + lVar8))[1])
                          (*(undefined8 *)(plVar7[6] + lVar8),uVar1);
                uVar2 = uVar2 + 1;
                lVar8 = lVar8 + 0x10;
              } while (uVar2 < *(uint *)(plVar7 + 5));
            }
          }
        }
      }
    }
  }
  return;
}




void FUN_00a5ba9c(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar5 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210c94);
  if (((uVar5 & 1) == 0) && (DAT_03210c94 != DAT_03210f50)) goto LAB_00a5bd1c;
  plVar11 = (long *)(param_1 + 0x340c0);
  plVar6 = (long *)*plVar11;
  if (plVar6 == (long *)0x0) {
    uVar7 = 0;
  }
  else if (*(int *)(param_1 + 0x340c8) == (int)plVar6[1]) {
    uVar7 = (**(code **)(*plVar6 + 0x10))();
  }
  else {
    *plVar11 = 0;
    uVar7 = 0;
    *(int *)(param_1 + 0x340c8) = DAT_03214ce8;
  }
  lVar9 = param_1 + 0x29c0;
  FUN_00a6398c(lVar9);
  lVar8 = FUN_00d9ea60(plVar11);
  if (lVar8 != 0) {
    iVar2 = FUN_00a5f97c(param_1 + 0x2c2b0);
    if (iVar2 == -1) {
      FUN_00a624b0(param_1 + 0x31cb8);
      FUN_00a6398c(lVar9);
      uVar5 = FUN_00d9f00c(uVar7);
      if ((uVar5 & 1) == 0) goto LAB_00a5bc94;
    }
    else {
      local_4c = 0xffff;
      uVar5 = FUN_00d74024(uVar7,&local_4c);
      if ((uVar5 & 1) != 0) {
        FUN_00ceace8();
        uVar5 = FUN_00ceb094();
        if ((uVar5 & 1) == 0) {
          uVar7 = *(undefined8 *)(param_1 + 0x340d0);
          uVar3 = FUN_00d72f48(lVar8,iVar2);
          uVar3 = FUN_00d74ad0(uVar7,uVar3);
          iVar4 = FUN_00d74b9c(uVar7,uVar3,local_4c);
          if (-1 < iVar4) {
            FUN_00a5e330(param_1 + 0xb38,iVar4 + 1);
            uVar3 = FUN_00d72f48(lVar8,iVar2);
            FUN_00a64c44(lVar9,uVar3);
          }
        }
      }
      uVar7 = FUN_00d73214(lVar8,iVar2);
      FUN_00a6219c(param_1 + 0x31cb8,uVar7);
    }
    FUN_00a5d410(param_1 + 0x2f260,iVar2);
  }
LAB_00a5bc94:
  lVar9 = FUN_00a1ffc0();
  plVar6 = (long *)(lVar9 + 0x10);
  plVar10 = (long *)*plVar6;
  plVar11 = plVar6;
  if (plVar10 != (long *)0x0) {
    do {
      if (*(uint *)(plVar10 + 4) >= 0xfb4b760d) {
        plVar11 = plVar10;
      }
      plVar10 = (long *)plVar10[*(uint *)(plVar10 + 4) < 0xfb4b760d];
    } while (plVar10 != (long *)0x0);
    if (((plVar11 != plVar6) && (*(uint *)(plVar11 + 4) < 0xfb4b760e)) && ((int)plVar11[5] != 0)) {
      lVar9 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar11[6] + lVar9))[1])
                  (*(undefined8 *)(plVar11[6] + lVar9),0xffff);
        uVar5 = uVar5 + 1;
        lVar9 = lVar9 + 0x10;
      } while (uVar5 < *(uint *)(plVar11 + 5));
    }
  }
LAB_00a5bd1c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a5bd48(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_CLOSE_SHOP");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a5bdb8(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  FUN_00b1bd10(param_1 + 0x33630,1);
  lVar1 = FUN_00a1ffc0();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0xda87fc4a) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xda87fc4a];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xda87fc4b)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1),6);
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  return;
}




void FUN_00a5be68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cbcd8;
  FUN_00f0d3a4(param_1 + 0x6c);
  param_1[0x4e] = &PTR_FUN_028266f0;
  param_1[0x65] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x68);
  FUN_00f13d08(param_1 + 0x4e);
  FUN_009c825c(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a5bed4(void)

{
  return;
}




void FUN_00a5bed8(void)

{
  return;
}




void FUN_00a5bedc(void *param_1)

{
  FUN_00a59ff4();
  operator_delete(param_1);
  return;
}




void FUN_00a5bf00(void *param_1)

{
  FUN_00a5a290();
  operator_delete(param_1);
  return;
}




void FUN_00a5bf24(undefined8 param_1,int *param_2)

{
  if ((*param_2 != 0x22) && (*param_2 != 0x1a)) {
    return;
  }
  FUN_00a59c20();
  return;
}




void FUN_00a5bf40(long *param_1)

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
  long lVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  float fVar16;
  long lVar17;
  code *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar12 = tpidr_el0;
  local_78 = *(long *)(lVar12 + 0x28);
  FUN_00f13ca4();
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027cc100;
  plVar1 = param_1 + 0x1b;
  *(undefined4 *)(param_1 + 0x1a) = DAT_03214ce8;
  FUN_00b89cd8(plVar1);
  plVar2 = param_1 + 0x34;
  FUN_00f1306c(plVar2);
  plVar3 = param_1 + 0x5f;
  FUN_00ab6c24(plVar3,1);
  plVar4 = param_1 + 0x317;
  FUN_00f13ca4(plVar4);
  plVar5 = param_1 + 0x32e;
  FUN_00f0d160();
  plVar6 = param_1 + 0x354;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0x372;
  FUN_00b02aa0(plVar7);
  FUN_00bbd8dc(param_1 + 0x3e1);
  plVar8 = param_1 + 0x3e4;
  FUN_00f13ca4(plVar8);
  plVar9 = param_1 + 0x3fb;
  FUN_00abb534(plVar9,1);
  plVar10 = param_1 + 0x502;
  FUN_00f0e4a8(plVar10);
  plVar11 = param_1 + 0x520;
  FUN_00f0d160(plVar11);
  *(undefined4 *)(param_1 + 0x546) = 0xffff;
  FUN_00e70510(param_1 + 0x547);
  lVar17 = NEON_fmov(0xbf800000,4);
  param_1[0x549] = lVar17;
  *(undefined4 *)((long)param_1 + 0x2a54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54a) = 0xffffffff;
  uVar15 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar15,param_1,0x9c723b68,FUN_00a5c464,0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f133a4(plVar2,plVar7,1);
  FUN_00f133a4(plVar2,plVar8,1);
  FUN_00f023ec(plVar8,plVar9,1);
  FUN_00f133a4(plVar2,param_1[0x3e2],1);
  FUN_00f133a4(plVar2,plVar3,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar4,plVar6,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar1,plVar10,1);
  FUN_00f023ec(plVar1,plVar11,1);
  FUN_00f0e548(plVar10,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_store_gold_icon_large");
  FUN_00f0e670(plVar10,&DAT_01ba0b30,2);
  FUN_00f0d7fc(plVar11,&DAT_01ba0b30);
  FUN_00b03834(plVar7,1);
  fVar16 = (float)FUN_00f13e54(plVar9);
  FUN_00b09144(0,plVar9);
  FUN_00f0e578(param_1 + 0x496,"hud_minimap_pingicon_mia");
  if ((*(float *)(param_1 + 0x49f) != 1.5) || (*(float *)((long)param_1 + 0x24fc) != 1.5)) {
    lVar17 = NEON_fmov(0x3fc00000,4);
    param_1[0x49f] = lVar17;
    FUN_0091ada4(param_1 + 0x496);
  }
  FUN_00abb218(120.0 / fVar16,(120.0 / fVar16) * 1.25,plVar9);
  FUN_00abb1c8(0x3ee66666,plVar9,&DAT_01bee7f6);
  plVar1 = param_1 + 0x3fc;
  uVar13 = DAT_03210c64;
  local_a8 = FUN_00a5c49c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  local_80 = uVar13;
  FUN_009693a0(plVar1,&local_a8);
  local_80 = DAT_03210f58;
  local_a8 = FUN_00a5c4a0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  local_a8 = FUN_00a5c4a0;
  local_80 = DAT_03210f84;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  uVar15 = FUN_00e6ce7c("HUD_STORE_ITEMBUY",0);
  local_a8 = (code *)0xc120000000000000;
  FUN_00ab703c(0,0x43a78000,0x442f0000,plVar3,0,uVar15,&DAT_01bee7fa,&local_a8,0);
  FUN_00f0d378(param_1 + 0x143,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  local_a8 = FUN_00a5c4a8;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  local_80 = uVar13;
  FUN_009693a0(param_1 + 0x60,&local_a8);
  FUN_00b09144(0x3dcccccd,plVar3);
  FUN_00ab7588(0x3f800000,plVar3,&DAT_01bee7f6);
  uVar13 = FUN_00e6a474("HUD_Store_Buy_Button");
  uVar14 = FUN_0091ed5c("HUD_Store_Buy_Button",uVar13,0x1234);
  *(uint *)((long)param_1 + 0x37c) =
       *(uint *)((long)param_1 + 0x37c) & 0x80000000 |
       *(uint *)((long)param_1 + 0x37c) & 0x7fff | (uVar14 & 0xffff) << 0xf;
  *(uint *)((long)param_1 + 0x193c) = *(uint *)((long)param_1 + 0x193c) & 0xfffffffb;
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xffc8c8c8);
  FUN_00f0e548(plVar6,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_stats_gold");
  FUN_00f0e670(plVar6,&local_a8,2);
  FUN_00f0d7fc(plVar5,&local_a8);
  FUN_00f0d378(plVar5,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  if (*(long *)(lVar12 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

