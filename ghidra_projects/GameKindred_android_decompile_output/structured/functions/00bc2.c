// functions/00bc2 — 7 functions
#include "libGameKindred.h"




void FUN_00bc21e0(long param_1,ulong param_2)

{
  FUN_00c11ff0(*(undefined8 *)(param_1 + 8),param_2,0);
  FUN_00c12014(*(undefined8 *)(param_1 + 8),param_2 & 0xffffffff,0);
  FUN_00c11fa8(*(undefined8 *)(param_1 + 8),param_2 & 0xffffffff,0);
  return;
}




undefined4 FUN_00bc2228(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x20) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        lVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
        puVar3 = (undefined4 *)(lVar2 + 0x260);
        goto LAB_00bc2294;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
    }
  }
  puVar3 = &DAT_01bc8f90;
LAB_00bc2294:
  return *puVar3;
}




uint FUN_00bc22a4(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar4 == 0) {
      return 0xffffffff;
    }
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_02e3ef78) break;
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  iVar1 = FUN_00d5359c(lVar4);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar5 = 0;
  do {
    uVar3 = FUN_00d54540(lVar4,uVar5);
    if ((uVar3 & 1) != 0) {
      return uVar5;
    }
    uVar5 = uVar5 + 1;
    uVar2 = FUN_00d5359c(lVar4);
  } while (uVar5 < uVar2);
  return 0xffffffff;
}




void FUN_00bc2324(long param_1)

{
  ushort uVar1;
  uint3 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x20) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if ((lVar4 != 0) && (plVar3 = *(long **)(param_1 + 0x28), plVar3 != (long *)0x0)) {
        if (*(int *)(param_1 + 0x30) == (int)plVar3[1]) {
          lVar4 = (**(code **)(*plVar3 + 0x10))();
          if (lVar4 != 0) {
            uVar5 = 0;
            piVar6 = (int *)(param_1 + 0x58);
            do {
              if (*piVar6 == -1) {
                if (piVar6[-5] != -1) {
                  FUN_00bc21e0(param_1,uVar5 & 0xffffffff);
                  piVar6[-5] = *piVar6;
                }
              }
              else {
                FUN_00bc35a4(param_1,uVar5 & 0xffffffff);
                FUN_00c12014(*(undefined8 *)(param_1 + 8),uVar5 & 0xffffffff,1);
                FUN_00bc3610(param_1,uVar5 & 0xffffffff);
              }
              uVar5 = uVar5 + 1;
              piVar6 = piVar6 + 10;
            } while (uVar5 != 6);
            uVar5 = (ulong)*(byte *)(param_1 + 0x152) << 0x10;
            uVar2 = *(uint3 *)(param_1 + 0x150) >> 0x15 & 1;
            if ((uVar5 & 0x400000) != 0) {
              uVar2 = 1;
            }
            if ((*(uint3 *)(param_1 + 0x150) >> 0xd & 1) != uVar2) {
              FUN_00c11ef8(*(undefined8 *)(param_1 + 8),(uVar5 & 0x600000) != 0,uVar5 >> 0x15 & 1);
              uVar5 = (ulong)*(byte *)(param_1 + 0x152) << 0x10;
              uVar1 = (ushort)(uVar5 >> 8) & 0x2000;
              if ((uVar5 & 0x400000) != 0) {
                uVar1 = 0x2000;
              }
              *(ushort *)(param_1 + 0x150) = uVar1 | *(ushort *)(param_1 + 0x150) & 0xdfff;
            }
          }
        }
        else {
          *(undefined8 *)(param_1 + 0x28) = 0;
          *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00bc24ac(long param_1)

{
  ulong *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint3 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 != 0) {
        lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
        lVar6 = *(long *)(lVar6 + 0x40);
        fVar15 = (*(float *)(lVar6 + 0x244) + 1.0) *
                 (*(float *)(lVar6 + 0xdc) +
                 *(float *)(lVar6 + 400) * (*(float *)(lVar6 + 0x2f8) + 1.0));
        if (DAT_0313a6f4 <= fVar15) {
          fVar15 = DAT_0313a6f4;
        }
        fVar16 = DAT_0313a634;
        if (DAT_0313a634 <= fVar15) {
          fVar16 = fVar15;
        }
        uVar11 = (uint)fVar16;
        lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
        lVar6 = *(long *)(lVar6 + 0x40);
        fVar15 = (*(float *)(lVar6 + 0x248) + 1.0) *
                 (*(float *)(lVar6 + 0xe0) +
                 *(float *)(lVar6 + 0x194) * (*(float *)(lVar6 + 0x2fc) + 1.0));
        if (DAT_0313a6f8 <= fVar15) {
          fVar15 = DAT_0313a6f8;
        }
        fVar16 = (float)DAT_0313a638;
        if ((float)DAT_0313a638 <= fVar15) {
          fVar16 = fVar15;
        }
        uVar13 = (uint)fVar16;
        lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
        fVar15 = *(float *)(param_1 + 0x130);
        puVar1 = (ulong *)(param_1 + 0x148);
        uVar14 = (uint)*(float *)(*(long *)(lVar6 + 0x40) + 0x334);
        if (((((ushort)((ulong)*(undefined8 *)(param_1 + 0x148) >> 0x30) & 0xff) != uVar11) ||
            ((byte)((ulong)*(undefined8 *)(param_1 + 0x148) >> 0x38) != uVar13)) ||
           ((*(ushort *)(param_1 + 0x150) & 0xff) != uVar14)) {
          FUN_00c124d4(*(undefined8 *)(param_1 + 8),uVar11,(ulong)uVar13,uVar14);
          *puVar1 = (ulong)(uVar11 & 0xff) << 0x30 | (ulong)uVar13 << 0x38 |
                    *puVar1 & 0xffffffffffff;
          *(ushort *)(param_1 + 0x150) =
               *(ushort *)(param_1 + 0x150) & 0xff00 | (ushort)uVar14 & 0xff;
        }
        uVar11 = (uint)fVar15;
        FUN_00ceace8();
        uVar7 = FUN_00ceb054();
        if ((uVar7 & 1) != 0) {
          lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
          lVar6 = *(long *)(lVar6 + 0x40);
          fVar15 = (*(float *)(lVar6 + 0x238) + 1.0) *
                   (*(float *)(lVar6 + 0xd0) +
                   *(float *)(lVar6 + 0x184) * (*(float *)(lVar6 + 0x2ec) + 1.0));
          if (DAT_0313a6e8 <= fVar15) {
            fVar15 = DAT_0313a6e8;
          }
          fVar16 = DAT_0313a628;
          if (DAT_0313a628 <= fVar15) {
            fVar16 = fVar15;
          }
          if ((*(ushort *)(param_1 + 0x150) >> 8 & 0x1f) != (int)fVar16) {
            FUN_00c12530(*(undefined8 *)(param_1 + 8),(*(byte *)(param_1 + 0x152) & 2) == 0);
          }
        }
        if ((*(uint *)(param_1 + 0x14c) & 0xfff) != uVar11) {
          FUN_00c12524(*(undefined8 *)(param_1 + 8),uVar11);
          *puVar1 = *puVar1 & 0xfffff00000000000 |
                    *puVar1 & 0xffffffff | (ulong)(uVar11 & 0xfff) << 0x20;
        }
        lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
        for (lVar6 = *(long *)(lVar6 + 0x18); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x20)) {
          if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_02c7bf28) {
            if ((*(byte *)(param_1 + 0x152) & 1) == 0) {
              fVar15 = (float)FUN_00d79b68();
              uVar7 = *puVar1;
              uVar11 = (uint)(fVar15 + 0.99);
              if (((uint)uVar7 & 0xffff) == uVar11) {
                uVar2 = *(undefined1 *)(param_1 + 0x152);
                uVar3 = *(undefined2 *)(param_1 + 0x150);
                goto LAB_00bc27a8;
              }
              FUN_00c11b18(*(undefined8 *)(param_1 + 8),uVar11);
              uVar4 = *(uint3 *)(param_1 + 0x150);
              uVar7 = *puVar1 & 0xffffffffffff0000 | (ulong)(uVar11 & 0xffff);
              *puVar1 = uVar7;
              goto LAB_00bc27ac;
            }
            break;
          }
        }
        FUN_00c11ab0(*(undefined8 *)(param_1 + 8));
        uVar2 = *(undefined1 *)(param_1 + 0x152);
        uVar3 = *(undefined2 *)(param_1 + 0x150);
        uVar7 = *puVar1;
LAB_00bc27a8:
        uVar4 = CONCAT12(uVar2,uVar3);
LAB_00bc27ac:
        uVar11 = (uint)uVar4;
        uVar13 = (uint)(*(float *)(param_1 + 0x138) + 0.99);
        if (((uint)(uVar7 >> 0x10) & 0xffff) != uVar13) {
          uVar8 = *(undefined8 *)(param_1 + 8);
          if ((int)uVar13 < 1) {
            uVar4 = uVar4 >> 0x14;
          }
          else {
            FUN_00c11dcc(uVar8,uVar13);
            uVar8 = *(undefined8 *)(param_1 + 8);
            uVar4 = (uint3)(*(byte *)(param_1 + 0x152) >> 4);
          }
          FUN_00c11e28(uVar8,(int)uVar13 >= 1,uVar4 & 1);
          uVar11 = (uint)*(ushort *)(param_1 + 0x150);
          *puVar1 = *puVar1 & 0xffffffff0000ffff | (ulong)(uVar13 << 0x10);
        }
        if ((uVar11 >> 0xe & 1) == 0) {
          lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
          uVar7 = FUN_00ced200(*(undefined4 *)(lVar6 + 0x260));
          if ((uVar7 & 1) != 0) {
            uVar12 = *(undefined8 *)(param_1 + 8);
            lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
            uVar8 = FUN_00cec840(*(undefined4 *)(lVar6 + 0x260));
            lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18));
            uVar9 = FUN_00cec930(*(undefined4 *)(lVar6 + 0x260));
            lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18));
            uVar10 = FUN_00cec9a0(*(undefined4 *)(lVar6 + 0x260));
            FUN_00c125d8(uVar12,uVar8,uVar9,uVar10);
            *(ushort *)(param_1 + 0x150) = *(ushort *)(param_1 + 0x150) | 0x4000;
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
    }
  }
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar7 = FUN_0092e920(), (uVar7 & 1) != 0)) {
    FUN_00bf1a70(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}




void FUN_00bc2938(undefined8 param_1)

{
  FUN_00bc2324();
  FUN_00bc24ac(param_1);
  return;
}




void FUN_00bc295c(long param_1)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  undefined2 *puVar15;
  undefined4 *puVar16;
  float fVar17;
  float fVar18;
  int local_80 [2];
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 == (long *)0x0) goto LAB_00bc3270;
  if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
    lVar6 = (**(code **)(*plVar5 + 0x10))();
    if (lVar6 != 0) {
      puVar1 = (ulong *)(param_1 + 0x148);
      if ((((*(byte *)(param_1 + 0x152) & 1) == 0) && (uVar7 = FUN_00ceab64(), (uVar7 & 1) == 0)) &&
         ((((uint)*(byte *)(param_1 + 0x152) << 0x10) >> 0x11 & 1) != 0)) {
        lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
        if ((*(byte *)(lVar6 + 0x2fc) & 0x1f) != 0) {
          plVar5 = *(long **)(param_1 + 0x18);
          lVar6 = 0;
          if (plVar5 != (long *)0x0) {
            if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
              lVar6 = (**(code **)(*plVar5 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x18) = 0;
              lVar6 = 0;
              *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
            }
          }
          uVar14 = *(ushort *)(lVar6 + 0x88) & 0x1f;
          if ((uVar14 == 0x1f) || (1 < *(ushort *)(lVar6 + (ulong)uVar14 * 0x38 + 0x90) - 3))
          goto LAB_00bc2a6c;
        }
      }
      else {
LAB_00bc2a6c:
        lVar6 = 0;
        do {
          lVar10 = param_1 + lVar6;
          lVar6 = lVar6 + 0x28;
          *(undefined4 *)(lVar10 + 0x54) = 0xffff;
          *(undefined4 *)(lVar10 + 0x58) = 0xffffffff;
        } while (lVar6 != 0xf0);
        lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
        iVar13 = (int)(*(float *)(*(long *)(lVar6 + 0x40) + 0x324) / 100.0);
        if (*(int *)(param_1 + 0x140) < iVar13) {
          *(int *)(param_1 + 0x140) = iVar13;
          FUN_00c123a8(*(undefined8 *)(param_1 + 8));
        }
        uVar14 = 0;
        iVar13 = 0;
        while( true ) {
          plVar5 = *(long **)(param_1 + 0x28);
          uVar8 = 0;
          if (plVar5 != (long *)0x0) {
            if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
              uVar8 = (**(code **)(*plVar5 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x28) = 0;
              uVar8 = 0;
              *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
            }
          }
          uVar3 = FUN_00d72dac(uVar8);
          if (uVar3 <= uVar14) break;
          plVar5 = *(long **)(param_1 + 0x28);
          uVar8 = 0;
          if (plVar5 != (long *)0x0) {
            if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
              uVar8 = (**(code **)(*plVar5 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x28) = 0;
              uVar8 = 0;
              *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
            }
          }
          uVar3 = FUN_00d72940(uVar8);
          if ((5 < iVar13) || (uVar3 <= uVar14)) break;
          plVar5 = *(long **)(param_1 + 0x28);
          if (plVar5 == (long *)0x0) {
            uVar9 = 0;
            uVar8 = 0;
          }
          else if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
            uVar9 = (**(code **)(*plVar5 + 0x10))();
            plVar5 = *(long **)(param_1 + 0x28);
            if (plVar5 == (long *)0x0) {
              uVar8 = 0;
            }
            else {
              if (*(int *)(param_1 + 0x30) != (int)plVar5[1]) goto LAB_00bc2be4;
              uVar8 = (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
          else {
            uVar9 = 0;
LAB_00bc2be4:
            *(undefined8 *)(param_1 + 0x28) = 0;
            uVar8 = 0;
            *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
          }
          uVar4 = FUN_00d72ed0(uVar8,uVar14);
          FUN_00d73214(uVar9,uVar4);
          uVar7 = FUN_00a1feb4();
          if ((uVar7 & 1) == 0) {
            plVar5 = *(long **)(param_1 + 0x28);
            lVar6 = (long)iVar13;
            uVar8 = 0;
            if (plVar5 != (long *)0x0) {
              if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
                uVar8 = (**(code **)(*plVar5 + 0x10))();
              }
              else {
                *(undefined8 *)(param_1 + 0x28) = 0;
                uVar8 = 0;
                *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
              }
            }
            uVar4 = FUN_00d72f0c(uVar8,uVar14);
            *(undefined4 *)(param_1 + lVar6 * 0x28 + 0x54) = uVar4;
            plVar5 = *(long **)(param_1 + 0x28);
            uVar8 = 0;
            if (plVar5 != (long *)0x0) {
              if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
                uVar8 = (**(code **)(*plVar5 + 0x10))();
              }
              else {
                *(undefined8 *)(param_1 + 0x28) = 0;
                uVar8 = 0;
                *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
              }
            }
            uVar4 = FUN_00d72ed0(uVar8,uVar14);
            puVar16 = (undefined4 *)(param_1 + lVar6 * 0x28 + 0x58);
            *puVar16 = uVar4;
            uVar7 = FUN_00ceab64();
            if (((uVar7 & 1) != 0) || ((*(byte *)(param_1 + 0x152) & 2) == 0)) {
              if ((*(byte *)(param_1 + 0x152) & 1) == 0) {
                plVar5 = *(long **)(param_1 + 0x28);
                uVar8 = 0;
                if (plVar5 != (long *)0x0) {
                  if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
                    uVar8 = (**(code **)(*plVar5 + 0x10))();
                  }
                  else {
                    *(undefined8 *)(param_1 + 0x28) = 0;
                    uVar8 = 0;
                    *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
                  }
                }
                uVar7 = FUN_00d73360(uVar8,*puVar16);
                if ((uVar7 & 1) != 0) {
                  plVar5 = *(long **)(param_1 + 0x28);
                  uVar8 = 0;
                  if (plVar5 != (long *)0x0) {
                    if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
                      uVar8 = (**(code **)(*plVar5 + 0x10))();
                    }
                    else {
                      *(undefined8 *)(param_1 + 0x28) = 0;
                      uVar8 = 0;
                      *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
                    }
                  }
                  uVar3 = FUN_00d736f4(uVar8,*puVar16);
                  if ((uVar3 >> 2 & 1) != 0) {
                    plVar5 = *(long **)(param_1 + 0x28);
                    uVar8 = 0;
                    if (plVar5 != (long *)0x0) {
                      if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
                        uVar8 = (**(code **)(*plVar5 + 0x10))();
                      }
                      else {
                        *(undefined8 *)(param_1 + 0x28) = 0;
                        uVar8 = 0;
                        *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
                      }
                    }
                    lVar10 = FUN_00d73214(uVar8,*puVar16);
                    if (*(char *)(lVar10 + 0x34) == '\0') {
                      plVar5 = *(long **)(param_1 + 0x28);
                      uVar8 = 0;
                      if (plVar5 != (long *)0x0) {
                        if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
                          uVar8 = (**(code **)(*plVar5 + 0x10))();
                        }
                        else {
                          *(undefined8 *)(param_1 + 0x28) = 0;
                          uVar8 = 0;
                          *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
                        }
                      }
                      fVar17 = (float)FUN_00d734b0(uVar8,*puVar16);
                      *(float *)(param_1 + lVar6 * 0x28 + 0x60) = fVar17;
                      plVar5 = *(long **)(param_1 + 0x28);
                      uVar8 = 0;
                      if (plVar5 != (long *)0x0) {
                        if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
                          uVar8 = (**(code **)(*plVar5 + 0x10))();
                        }
                        else {
                          *(undefined8 *)(param_1 + 0x28) = 0;
                          uVar8 = 0;
                          *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
                        }
                      }
                      fVar18 = (float)FUN_00d7349c(uVar8,*puVar16);
                      *(float *)(param_1 + lVar6 * 0x28 + 0x5c) = 1.0 - fVar17 / fVar18;
                      goto LAB_00bc2da8;
                    }
                  }
                }
              }
              lVar6 = param_1 + lVar6 * 0x28;
              *(undefined4 *)(lVar6 + 0x5c) = 0;
              *(undefined4 *)(lVar6 + 0x60) = 0;
            }
LAB_00bc2da8:
            iVar13 = iVar13 + 1;
          }
          uVar14 = uVar14 + 1;
        }
        lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
        lVar6 = *(long *)(lVar6 + 0x40);
        fVar17 = (*(float *)(lVar6 + 0x240) + 1.0) *
                 (*(float *)(lVar6 + 0xd8) +
                 *(float *)(lVar6 + 0x18c) * (*(float *)(lVar6 + 0x2f4) + 1.0));
        if (DAT_0313a6f0 <= fVar17) {
          fVar17 = DAT_0313a6f0;
        }
        fVar18 = DAT_0313a630;
        if (DAT_0313a630 <= fVar17) {
          fVar18 = fVar17;
        }
        uVar14 = (uint)fVar18;
        if (((uint)(*puVar1 >> 0x2c) & 0xf) != uVar14) {
          FUN_00c11c0c(*(undefined8 *)(param_1 + 8),uVar14);
          *puVar1 = *puVar1 & 0xffff000000000000 |
                    *puVar1 & 0xfffffffffff | (ulong)(uVar14 & 0xf) << 0x2c;
        }
        plVar5 = *(long **)(param_1 + 0x18);
        if (plVar5 == (long *)0x0) {
          uVar8 = 0;
        }
        else if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
          uVar8 = (**(code **)(*plVar5 + 0x10))();
        }
        else {
          *(undefined8 *)(param_1 + 0x18) = 0;
          uVar8 = 0;
          *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
        }
        uVar9 = FUN_00d70a78();
        uVar8 = FUN_00d9f0c4(uVar8,uVar9);
        if ((float)uVar8 != *(float *)(param_1 + 0x144)) {
          FUN_00c11c4c(uVar8,*(undefined8 *)(param_1 + 8));
          *(float *)(param_1 + 0x144) = (float)uVar8;
        }
        if ((((uint)*(byte *)(param_1 + 0x152) << 0x10) >> 0x11 & 1) == 0) {
          plVar5 = *(long **)(param_1 + 0x18);
          uVar8 = 0;
          if (plVar5 != (long *)0x0) {
            if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
              uVar8 = (**(code **)(*plVar5 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x18) = 0;
              uVar8 = 0;
              *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
            }
          }
          iVar13 = FUN_00bc22a4(uVar8);
          plVar5 = *(long **)(param_1 + 0x18);
          if (plVar5 == (long *)0x0) {
            uVar8 = 0;
          }
          else if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
            uVar8 = (**(code **)(*plVar5 + 0x10))(plVar5);
          }
          else {
            *(undefined8 *)(param_1 + 0x18) = 0;
            uVar8 = 0;
            *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
          }
          uVar14 = FUN_00bc33c8(uVar8);
          *(undefined2 *)(param_1 + 0x150) = *(undefined2 *)(param_1 + 0x150);
          *(byte *)(param_1 + 0x152) =
               *(byte *)(param_1 + 0x152) & 0xef | (byte)(((uVar14 & 1) << 0x14) >> 0x10);
          if ((iVar13 < 0) || ((uVar14 & 1) == 0)) {
            fVar17 = 0.0;
            FUN_00c11e64(0,*(undefined8 *)(param_1 + 8));
          }
          else {
            lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
            lVar6 = *(long *)(lVar6 + 0x18);
            while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02e3ef78))) {
              lVar6 = *(long *)(lVar6 + 0x20);
            }
            FUN_00c11e64(0x3f800000,*(undefined8 *)(param_1 + 8));
            fVar17 = (float)FUN_00d539e8(lVar6,iVar13);
            *(float *)(param_1 + 0x138) = fVar17;
            fVar18 = (float)FUN_00d539d0(lVar6,iVar13);
            fVar17 = 1.0 - fVar17 / fVar18;
          }
          *(float *)(param_1 + 0x134) = fVar17;
        }
        plVar5 = *(long **)(param_1 + 0x18);
        uVar8 = 0;
        if (plVar5 != (long *)0x0) {
          if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
            uVar8 = (**(code **)(*plVar5 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x18) = 0;
            uVar8 = 0;
            *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
          }
        }
        uVar8 = FUN_00d9ea08(uVar8);
        uVar14 = FUN_00d6bbac(uVar8,DAT_0315cc1c,0);
        puVar15 = (undefined2 *)(param_1 + 0x150);
        *puVar15 = *puVar15;
        *(byte *)(param_1 + 0x152) =
             *(byte *)(param_1 + 0x152) & 0xdf | (byte)(((uVar14 & 1) << 0x15) >> 0x10);
        uVar14 = FUN_00d6bbac(uVar8,DAT_0315cc20,0);
        *puVar15 = *puVar15;
        *(byte *)(param_1 + 0x152) =
             *(byte *)(param_1 + 0x152) & 0xbf | (byte)(((uVar14 & 1) << 0x16) >> 0x10);
        lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
        *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(*(long *)(lVar6 + 0x40) + 0x340);
      }
    }
    plVar5 = *(long **)(param_1 + 0x18);
    if (plVar5 == (long *)0x0) goto LAB_00bc3270;
    if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 == 0) goto LAB_00bc3270;
      if ((((*(byte *)(param_1 + 0x152) & 1) == 0) && (uVar7 = FUN_00ceab64(), (uVar7 & 1) == 0)) &&
         ((((uint)*(byte *)(param_1 + 0x152) << 0x10) >> 0x11 & 1) != 0)) {
        lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
        if ((*(byte *)(lVar6 + 0x2fc) & 0x1f) == 0) goto LAB_00bc3270;
        lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
        uVar14 = *(ushort *)(lVar6 + 0x88) & 0x1f;
        if ((uVar14 != 0x1f) && (*(ushort *)(lVar6 + (ulong)uVar14 * 0x38 + 0x90) - 3 < 2))
        goto LAB_00bc3270;
      }
      lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
      for (lVar6 = *(long *)(lVar6 + 0x18); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x20)) {
        if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_02c7bf38) {
          lVar6 = FUN_00d7b53c();
          if (lVar6 == 0) {
            thunk_FUN_00d9ff34(local_80,0);
            if (*(int *)(param_1 + 0x13c) == local_80[0]) {
              FUN_00c12288(*(undefined8 *)(param_1 + 8),0);
              *(undefined2 *)(param_1 + 0x150) = *(undefined2 *)(param_1 + 0x150);
              *(byte *)(param_1 + 0x152) = *(byte *)(param_1 + 0x152) & 0x7f;
              FUN_00d9ff34(param_1 + 0x13c,0);
            }
          }
          else if (*(int *)(lVar6 + 0x40) != *(int *)(param_1 + 0x13c)) {
            FUN_00c12288(*(undefined8 *)(param_1 + 8),1);
            *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(lVar6 + 0x40);
            *(undefined2 *)(param_1 + 0x150) = *(undefined2 *)(param_1 + 0x150);
            *(byte *)(param_1 + 0x152) = *(byte *)(param_1 + 0x152) | 0x80;
            lVar10 = FUN_00d7ade4(lVar6);
            lVar11 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18));
            uVar14 = *(int *)(lVar10 + 0x18) - 1;
            if (uVar14 < 3) {
              puVar12 = (&PTR_s_rare_027eb5d0)[(int)uVar14];
            }
            else {
              puVar12 = &DAT_01e277f2;
            }
            FUN_00c121d8(*(undefined8 *)(param_1 + 8),
                         *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x20),
                         *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x58),
                         *(undefined8 *)(lVar10 + 0x10),puVar12);
            uVar8 = *(undefined8 *)(param_1 + 8);
            uVar4 = FUN_00d7ae38(lVar6);
            FUN_00c122d4(uVar8,uVar4);
            FUN_00c1233c(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar10 + 0x18));
          }
          break;
        }
      }
      goto LAB_00bc3270;
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
LAB_00bc3270:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

