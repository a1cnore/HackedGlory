// functions/00a64 — 17 functions
#include "libGameKindred.h"




void FUN_00a64104(undefined8 param_1,int param_2)

{
  long lVar1;
  
  if ((param_2 != 0xffff) && (lVar1 = FUN_00a641a4(param_1), lVar1 != 0)) {
    FUN_00a64218(param_1,lVar1,1);
    return;
  }
  return;
}




bool FUN_00a64158(undefined8 param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (*(char *)(param_2 + 0x199) == '\0') {
    if ((*(char *)(param_2 + 0x19a) != '\0') && (iVar2 = FUN_00ceacf4(0), iVar2 != 2)) {
      return false;
    }
    bVar1 = *(char *)(param_2 + 0x198) == '\0';
  }
  return bVar1;
}




undefined8 FUN_00a641a4(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x1908) != 0) {
    lVar3 = 0x2f1;
    do {
      iVar1 = FUN_00a60ab4(*(undefined8 *)(param_1 + lVar3 * 8));
      if (iVar1 == param_2) {
        return *(undefined8 *)(param_1 + lVar3 * 8);
      }
      uVar2 = lVar3 - 0x2f0;
    } while ((uVar2 < 0x30) && (lVar3 = lVar3 + 1, uVar2 < *(uint *)(param_1 + 0x1908)));
  }
  return 0;
}




void FUN_00a64218(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00a60aac(param_2);
  lVar2 = param_1 + (long)*(int *)(lVar2 + 0x30) * 0x538 + 0x2a8;
  uVar3 = FUN_00ed0848(lVar2);
  if ((((uVar3 & 1) == 0) && (uVar3 = FUN_00ed08a8(lVar2), (uVar3 & 1) == 0)) &&
     (uVar3 = FUN_00ed0854(lVar2), (uVar3 & 1) == 0)) {
    lVar2 = *(long *)(param_1 + 0x24d90);
    if (lVar2 != param_2) {
      if (lVar2 != 0) {
        FUN_00a60a14(lVar2,0);
      }
      FUN_00a60a14(param_2,1);
      FUN_00ed8868(auStack_78,DAT_03210c64,param_3 & 1,param_2);
      FUN_00f04760(param_1,auStack_78,1);
      *(long *)(param_1 + 0x24d90) = param_2;
      if (*(int *)(param_1 + 0x298dc) != 0) {
        *(long *)(param_1 + 0x24d98) = param_2;
      }
      FUN_00a64540(param_1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a64334(long param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar6 = FUN_00d75338(*(undefined8 *)(param_1 + 0xd8));
  lVar9 = *(long *)(lVar6 + 0x18);
  while ((lVar9 != 0 && (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_03130aa8))) {
    lVar9 = *(long *)(lVar9 + 0x20);
  }
  lVar11 = 0;
  uVar10 = (uint)*(float *)(*(long *)(lVar6 + 0x40) + 800);
  do {
    uVar3 = 0;
    if (lVar11 == 0) {
      FUN_00ceace8();
      uVar3 = FUN_00ceaf8c();
    }
    for (lVar7 = FUN_00ed0280(param_1 + lVar11 * 0x538 + 0x7e0); lVar7 != 0;
        lVar7 = *(long *)(lVar7 + 0x30)) {
      local_b0 = 0;
      local_6c = 0;
      local_74 = 0;
      uStack_8c = 0;
      local_94 = 0;
      uStack_7c = 0;
      uStack_84 = 0;
      uStack_9c = 0;
      local_a4 = 0;
      uVar12 = *(undefined8 *)(param_1 + 0xd8);
      local_a8 = 0xffffffff;
      uVar4 = FUN_00a60ab4(lVar7);
      uVar8 = FUN_00d74500(uVar12,uVar4,uVar10,(long)&local_b0 + 4,&local_a8,&local_b0,1);
      uVar4 = FUN_00a60ab4(lVar7);
      bVar2 = FUN_00d72d24(lVar9,uVar4);
      FUN_00a60abc(lVar7,local_b0._4_4_);
      if ((uVar8 & 1) == 0) {
        if (local_b0._4_4_ <= uVar10) goto LAB_00a6447c;
LAB_00a64494:
        uVar12 = 0;
      }
      else {
        if ((uVar3 & 1) != 0 || ((int)local_b0 == 0 & (bVar2 ^ 0xff)) != 0) goto LAB_00a64494;
LAB_00a6447c:
        uVar12 = 1;
      }
      FUN_00a60a34(lVar7,uVar12);
      lVar13 = *(long *)(lVar6 + 0x18);
      while ((lVar13 != 0 && (*(int *)(*(long *)(lVar13 + 8) + 0xa4) != DAT_03130aa8))) {
        lVar13 = *(long *)(lVar13 + 0x20);
      }
      uVar4 = FUN_00a60ab4(lVar7);
      uVar5 = FUN_00d73590(lVar13,uVar4);
      FUN_00a60af8(lVar7,uVar5 & 1);
    }
    lVar11 = lVar11 + 1;
    if (lVar11 == 3) {
      FUN_00a64540(param_1);
      if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}




void FUN_00a64540(long param_1)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  uint local_f8;
  uint local_f4;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined4 local_74;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar11 = 0;
  plVar1 = (long *)(param_1 + 0x24d98);
  do {
    for (lVar7 = FUN_00ed0280(param_1 + lVar11 * 0x538 + 0x7e0); lVar7 != 0;
        lVar7 = *(long *)(lVar7 + 0x30)) {
      if (*plVar1 == 0) {
        FUN_00a60a14(lVar7,0);
        FUN_00a60a64(lVar7,0);
      }
      else {
        if (*plVar1 == lVar7) {
LAB_00a645e8:
          bVar3 = true;
          FUN_00a60a64(lVar7,1);
        }
        else {
          uVar10 = *(undefined8 *)(param_1 + 0xd8);
          uVar4 = FUN_00a60ab4(lVar7);
          uVar5 = FUN_00a60ab4(*plVar1);
          iVar6 = FUN_00d74c14(uVar10,uVar4,uVar5);
          if (iVar6 != 0) goto LAB_00a645e8;
          FUN_00a60a64(lVar7,0);
          bVar3 = false;
        }
        if (*(long *)(param_1 + 0x24d90) == lVar7) {
          FUN_00a60a14(lVar7,1);
          FUN_00a60a64(lVar7,1);
        }
        else {
          if (bVar3) {
            uVar10 = 0;
          }
          else {
            uVar10 = 2;
          }
          FUN_00a60a14(lVar7,uVar10);
        }
        FUN_00a60b1c(lVar7,0);
      }
    }
    lVar11 = lVar11 + 1;
    if (lVar11 == 3) {
      FUN_00a62b0c(param_1);
      if ((*plVar1 != 0) && (FUN_00a662fc(param_1,*plVar1,1,1), *plVar1 != 0)) {
        local_74 = 0;
        local_7c = 0;
        uStack_84 = 0;
        local_8c = 0;
        uStack_94 = 0;
        local_9c = 0;
        uStack_a4 = 0;
        local_ac = 0;
        local_f4 = 0;
        uVar10 = *(undefined8 *)(param_1 + 0xd8);
        local_b0 = 0xffff;
        uVar4 = FUN_00a60ab4();
        FUN_00d74f6c(uVar10,uVar4,1,&local_b0,&local_f4);
        if (local_f4 != 0) {
          uVar12 = 0;
          do {
            lVar11 = FUN_00a641a4(param_1,(&local_b0)[uVar12]);
            if (lVar11 != 0) {
              uVar8 = FUN_00a60b10(*plVar1);
              if (((uVar8 & 1) != 0) && (lVar7 = FUN_00a60aac(*plVar1), *(int *)(lVar7 + 0x30) != 3)
                 ) {
                FUN_00a60b24(lVar11,1);
              }
              lVar7 = FUN_00a60aac(*plVar1);
              if (*(int *)(lVar7 + 0x30) == 3) {
                local_b4 = 0;
                local_bc = 0;
                uStack_d4 = 0;
                local_dc = 0;
                uStack_c4 = 0;
                uStack_cc = 0;
                uStack_e4 = 0;
                local_ec = 0;
                local_f8 = 0;
                uVar10 = *(undefined8 *)(param_1 + 0xd8);
                local_f0 = 0xffff;
                uVar4 = FUN_00a60ab4(lVar11);
                FUN_00d74f6c(uVar10,uVar4,1,&local_f0,&local_f8);
                if (local_f8 != 0) {
                  uVar8 = 0;
                  do {
                    lVar7 = FUN_00a641a4(param_1,(&local_f0)[uVar8]);
                    if (lVar7 != 0) {
                      uVar9 = FUN_00a60b10(lVar11);
                      if ((uVar9 & 1) == 0) {
                        uVar10 = 0xffffffff;
                      }
                      else {
                        uVar10 = 1;
                      }
                      FUN_00a60b24(lVar7,uVar10);
                    }
                    uVar8 = uVar8 + 1;
                  } while ((uVar8 < 0x10) && (uVar8 < local_f8));
                }
              }
            }
            uVar12 = uVar12 + 1;
          } while ((uVar12 < 0x10) && (uVar12 < local_f4));
        }
      }
      if (*(long *)(lVar2 + 0x28) == local_70) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}




void FUN_00a64858(long param_1,int param_2)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  uint local_ac;
  int local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  ulong local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined4 local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*(int *)(param_1 + 0x298dc) == 0) &&
     (lVar10 = *(long *)(*(long *)(param_1 + 0xd0) + 0x18), lVar10 != 0)) {
    while (*(int *)(*(long *)(lVar10 + 8) + 0xa4) != DAT_03130aa8) {
      lVar10 = *(long *)(lVar10 + 0x20);
      if (lVar10 == 0) goto LAB_00a6489c;
    }
    lVar9 = 0;
    do {
      lVar7 = FUN_00ed0280(param_1 + lVar9 * 0x538 + 0x7e0);
      while (lVar3 = lVar7, lVar3 != 0) {
        lVar7 = *(long *)(lVar3 + 0x30);
        uVar4 = FUN_00a60ab4(lVar3);
        local_6c = 0;
        local_74 = 0;
        uStack_8c = 0;
        local_94 = 0;
        uStack_7c = 0;
        local_84 = 0;
        uStack_9c = 0;
        local_a4 = 0;
        local_ac = 0;
        local_a8 = 0xffff;
        FUN_00d74f6c(*(undefined8 *)(param_1 + 0xd8),uVar4,0,&local_a8,&local_ac);
        if (local_ac == 0) {
          iVar12 = 0;
          iVar13 = 0;
        }
        else {
          uVar11 = 0;
          iVar13 = 0;
          iVar12 = 0;
          do {
            iVar5 = param_2;
            if ((&local_a8)[uVar11] == param_2) {
LAB_00a649c4:
              iVar12 = iVar12 + 1;
              uVar6 = FUN_00d73590(lVar10,iVar5);
              iVar13 = iVar13 + (uVar6 & 1);
            }
            else {
              iVar5 = FUN_00d74c14(*(undefined8 *)(param_1 + 0xd8),(&local_a8)[uVar11],param_2);
              if (0 < iVar5) {
                iVar5 = (&local_a8)[uVar11];
                goto LAB_00a649c4;
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < local_ac);
        }
        uVar11 = FUN_00d73590(lVar10,uVar4);
        if (((uVar11 & 1) != 0) || ((iVar12 != 0 && (iVar12 == iVar13)))) {
          FUN_00a60b34(lVar3,1);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 3);
    local_84 = local_84 & 0xffffffff00000000;
    uStack_8c = 0;
    local_94 = 0;
    uStack_9c = 0;
    local_a4 = 0;
    local_a8 = 0xffff;
    FUN_00d73a9c(lVar10,&local_a8,10);
    puVar1 = (uint *)(param_1 + 0x298e0);
    if (*puVar1 == 0) goto LAB_00a6489c;
    uVar11 = 0;
    do {
      FUN_00a6171c(*(undefined8 *)(param_1 + 0x265f8 + uVar11 * 8),0);
      uVar8 = (ulong)*puVar1;
      uVar11 = uVar11 + 1;
      if (7 < uVar11) break;
    } while (uVar11 < uVar8);
    if (*puVar1 != 0) {
      uVar11 = 0;
      do {
        lVar9 = *(long *)(param_1 + uVar11 * 8 + 0x265f8);
        lVar10 = 0;
        do {
          if (*(int *)(lVar9 + 0x63c) == (&local_a8)[lVar10]) {
            (&local_a8)[lVar10] = 0xffff;
            FUN_00a6171c(lVar9,1);
            uVar8 = (ulong)*puVar1;
            break;
          }
          lVar10 = lVar10 + 1;
        } while ((uint)lVar10 < 10);
        uVar11 = uVar11 + 1;
      } while ((uVar11 < 8) && (uVar11 < uVar8));
    }
  }
LAB_00a6489c:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a64b1c(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  
  (**(code **)*param_2)(param_2);
  if (*(short *)(param_1 + 0x23280) == -1) {
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 3) * 0x2847;
    *(short *)(param_1 + 0x23282) = sVar2;
    *(short *)(param_1 + 0x23280) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x23282);
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 3) * 0x2847;
    *(short *)(param_1 + 0x23282) = sVar2;
    *(short *)(param_1 + (ulong)uVar1 * 3000) = sVar2;
  }
  *(int *)(param_1 + 0x23284) = *(int *)(param_1 + 0x23284) + -1;
  return;
}




void FUN_00a64bd0(long param_1)

{
  long lVar1;
  bool bVar2;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0xd0) == 0) {
    bVar2 = true;
  }
  else {
    FUN_00d74024(*(long *)(param_1 + 0xd0),&local_2c);
    bVar2 = *(int *)(param_1 + 0x298d8) != local_2c;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




void FUN_00a64c44(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    lVar3 = FUN_00ed0280(param_1 + lVar4 * 0x538 + 0x7e0);
    while (lVar1 = lVar3, lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + 0x30);
      iVar2 = FUN_00a60ab4(lVar1);
      if (iVar2 == param_2) {
        *(long *)(param_1 + 0x24d98) = lVar1;
        FUN_00a64540(param_1);
      }
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  return;
}




void FUN_00a64cd8(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = 0;
  do {
    lVar2 = FUN_00ed0280(param_1 + uVar4 * 0x538 + 0x7e0);
    while (lVar3 = lVar2, lVar3 != 0) {
      lVar2 = *(long *)(lVar3 + 0x30);
      iVar1 = FUN_00a60ab4(lVar3);
      if (iVar1 == param_2) {
        FUN_00a60cb0(lVar3);
        if (*(int *)(param_1 + 0x298dc) != 0) {
          return;
        }
        iVar1 = FUN_00a60ab4(lVar3);
        if (iVar1 != *(int *)(param_1 + 0x298d4)) {
          return;
        }
        FUN_00da3760(0xffff);
        lVar2 = *(long *)(param_1 + 0x24da0);
        if (lVar2 != 0) {
          FUN_00a61734(lVar2,0);
          *(long *)(param_1 + 0x24da0) = 0;
        }
        *(undefined1 *)(param_1 + 0x298e4) = 1;
        *(undefined4 *)(param_1 + 0x298d0) = 0x3e99999a;
        return;
      }
    }
    uVar4 = uVar4 + 1;
    if (2 < uVar4) {
      return;
    }
  } while( true );
}




void FUN_00a64dd8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x24da0);
  if (lVar1 != param_2) {
    if (lVar1 != 0) {
      FUN_00a61734(lVar1,0);
    }
    if (param_2 != 0) {
      FUN_00a61734(param_2,1);
    }
    *(long *)(param_1 + 0x24da0) = param_2;
  }
  return;
}




void FUN_00a64e2c(float param_1,long param_2)

{
  float *pfVar1;
  int iVar2;
  
  FUN_00a64334();
  if (*(int *)(param_2 + 0x298dc) == 0) {
    FUN_00a64858(param_2,*(undefined4 *)(param_2 + 0x298d4));
  }
  if (*(char *)(param_2 + 0x298e4) != '\0') {
    pfVar1 = (float *)(param_2 + 0x298d0);
    if (*pfVar1 <= 0.0) {
      *pfVar1 = 0.0;
      *(char *)(param_2 + 0x298e4) = '\0';
      if ((*(int *)(param_2 + 0x298e0) != 0) && (iVar2 = FUN_00da376c(), iVar2 != 0xffff)) {
        FUN_00a64f24(param_2);
      }
      FUN_00a63a44(param_2);
      return;
    }
    *pfVar1 = *pfVar1 - param_1;
  }
  return;
}




bool FUN_00a64efc(void)

{
  int iVar1;
  
  iVar1 = FUN_00da376c();
  return iVar1 != 0xffff;
}




undefined8 FUN_00a64f24(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 0x298e0) != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x265f8 + lVar3 * 8);
      if (*(char *)(lVar2 + 0x648) == '\0') {
        iVar1 = FUN_00da376c();
        FUN_00a659d8(param_1,lVar2,iVar1 != 0xffff);
        return *(undefined8 *)(param_1 + lVar3 * 8 + 0x265f8);
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < *(uint *)(param_1 + 0x298e0));
  }
  return 0;
}




undefined8 FUN_00a64fbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x24d90);
}




void FUN_00a64fcc(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_e0 [4];
  float local_dc;
  float local_d8;
  float local_d4;
  undefined1 auStack_d0 [4];
  float local_cc;
  undefined1 auStack_c8 [4];
  float local_c4;
  undefined2 local_c0;
  undefined1 local_be;
  undefined1 local_bd;
  undefined1 auStack_b8 [4];
  undefined1 auStack_b4 [4];
  long local_b0;
  
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
  lVar5 = FUN_00965ecc();
  if (param_1[0x49b3] != 0) {
    fVar18 = *(float *)(lVar5 + 0x10);
    fVar20 = *(float *)(lVar5 + 0x14);
    FUN_00f00298(auStack_b4,auStack_b8);
    lVar5 = FUN_00965ecc(param_1);
    local_c0 = 0xffff;
    fVar21 = (float)NEON_fminnm((int)(*(float *)(lVar5 + 0x18) * 255.0),0x437f0000);
    uVar14 = SUB42(fVar21,0);
    uVar15 = (short)((uint)fVar21 >> 0x10);
    if (fVar21 <= 0.0) {
      uVar14 = 0;
      uVar15 = 0;
    }
    local_be = 0xff;
    local_bd = (undefined1)(int)(float)CONCAT22(uVar15,uVar14);
    plVar10 = param_1 + 0x1c;
    (**(code **)(*param_1 + 0x68))(param_1,auStack_c8,auStack_d0);
    lVar5 = 0;
    fVar21 = fVar18 * 36.0;
    plVar8 = param_1;
    do {
      lVar12 = 0;
      do {
        plVar6 = *(long **)((long)plVar8 + lVar12 + 0xf0);
        if ((plVar6 != (long *)0x0) &&
           (plVar11 = *(long **)((long)plVar8 + lVar12 + 0xf8), plVar11 != (long *)0x0)) {
          (**(code **)(*plVar6 + 0x68))(plVar6,&local_d8,auStack_e0);
          fVar4 = local_d8;
          fVar23 = (local_d4 + local_dc) * 0.5;
          (**(code **)(*plVar11 + 0x68))(plVar11,&local_d8,auStack_e0);
          fVar19 = (local_d4 + local_dc) * 0.5;
          fVar22 = fVar23;
          if (fVar19 <= fVar23) {
            fVar22 = fVar19;
          }
          fVar16 = fVar20 + fVar20 + ABS(fVar23 - fVar19);
          fVar17 = fVar16 - (local_c4 - fVar22);
          fVar24 = local_c4;
          if (local_c4 <= fVar22) {
            fVar17 = fVar16;
            fVar24 = fVar22;
          }
          if (0.5 < ABS(fVar23 - fVar19)) {
            fVar19 = local_cc - fVar24;
            if (fVar24 + fVar17 <= local_cc) {
              fVar19 = fVar17;
            }
            fVar22 = fVar4 - fVar21;
            if (fVar4 - fVar21 <= local_d8 - fVar21) {
              fVar22 = local_d8 - fVar21;
            }
            lVar7 = FUN_00f0a7e0(plVar10,"hud_store_connector_fill");
            fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 8));
            fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 10));
            uVar2 = *(uint *)(*(long *)(*plVar10 + 8) + 0x3c);
            fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 6));
            fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 4));
            fVar25 = 1.0 / (float)(uVar2 & 0x3fff);
            fVar22 = fVar22 - fVar4 * 0.0;
            fVar24 = fVar24 - fVar23 * 0.0;
            FUN_00965b68(SUB42(fVar22,0),SUB42(fVar24,0),SUB42(fVar18 * 4.0 + fVar22,0),
                         SUB42(fVar19 + fVar24,0),0,fVar25 * fVar16,
                         1.0 - (1.0 / (float)(uVar2 >> 0xe & 0x3fff)) * fVar17,
                         (fVar16 + fVar4) * fVar25,param_2,&local_c0,0);
          }
        }
        lVar12 = lVar12 + 0x10;
      } while (lVar12 != 0x200);
      lVar5 = lVar5 + 1;
      plVar8 = plVar8 + 0x40;
    } while (lVar5 != 2);
    uVar13 = 0;
    do {
      plVar8 = (long *)FUN_00ed0278(param_1 + uVar13 * 0xa7 + 0xfc);
      uVar1 = uVar13 + 1;
      for (; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[6]) {
        uVar9 = FUN_00a60a7c(plVar8);
        if (((uVar9 & 1) != 0) && (uVar9 = FUN_00a60aa0(plVar8), (uVar9 & 1) != 0)) {
          (**(code **)(*plVar8 + 0x68))(plVar8,&local_d8,auStack_e0);
          fVar19 = (local_d4 + local_dc) * 0.5;
          fVar4 = fVar20 * 4.0 - (local_c4 - fVar19);
          fVar22 = local_c4;
          if (local_c4 <= fVar19) {
            fVar4 = fVar20 * 4.0;
            fVar22 = fVar19;
          }
          fVar19 = local_cc - fVar22;
          if (fVar22 + fVar4 <= local_cc) {
            fVar19 = fVar4;
          }
          if (0.0 < fVar19) {
            if (uVar13 != 0) {
              fVar23 = local_d8 - fVar21;
              lVar5 = FUN_00f0a7e0(plVar10,"hud_store_connector_fill");
              fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 8));
              fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 6));
              uVar2 = *(uint *)(*(long *)(*plVar10 + 8) + 0x3c);
              fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 4));
              fVar23 = fVar23 - fVar4 * 0.0;
              fVar24 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 10));
              fVar25 = 1.0 / (float)(uVar2 & 0x3fff);
              fVar24 = fVar22 - fVar24 * 0.0;
              FUN_00965b68(SUB42(fVar23,0),SUB42(fVar24,0),SUB42(fVar21 + 2.0 + fVar23,0),
                           SUB42(fVar19 + fVar24,0),0,fVar25 * fVar16,
                           1.0 - (1.0 / (float)(uVar2 >> 0xe & 0x3fff)) * fVar17,
                           (fVar16 + fVar4) * fVar25,param_2,&local_c0,0);
            }
            if (uVar1 < 3) {
              fVar4 = (float)(**(code **)(*plVar8 + 0x48))(plVar8);
              fVar4 = DAT_02be34e8 + fVar4 + -128.0;
              fVar24 = fVar18 * 128.0 + local_d8;
              lVar5 = FUN_00f0a7e0(plVar10,"hud_store_connector_gradient");
              fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 8));
              fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 10));
              uVar2 = *(uint *)(*(long *)(*plVar10 + 8) + 0x3c);
              fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 6));
              fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 4));
              fVar26 = 1.0 / (float)(uVar2 & 0x3fff);
              fVar24 = fVar24 - fVar23 * 0.0;
              fVar22 = fVar22 - fVar16 * 0.0;
              FUN_00965b68(SUB42(fVar24,0),SUB42(fVar22,0),
                           SUB42((fVar18 * fVar4 - fVar21) + fVar24,0),SUB42(fVar19 + fVar22,0),0,
                           fVar26 * fVar17,1.0 - (1.0 / (float)(uVar2 >> 0xe & 0x3fff)) * fVar25,
                           (fVar17 + fVar23) * fVar26,param_2,&local_c0,0);
            }
          }
        }
      }
      uVar13 = uVar1;
    } while (uVar1 != 3);
  }
  if (*(long *)(lVar3 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

