// functions/00d24 — 4 functions
#include "libGameKindred.h"




void FUN_00d241a8(long *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_758 [16];
  undefined1 auStack_748 [40];
  undefined1 auStack_720 [96];
  long local_6c0 [200];
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 != 0) {
        FUN_00d4d9e8(auStack_720);
        FUN_00d4db40(auStack_720,lVar6);
        FUN_00d4dc44(auStack_720,0);
        FUN_00d4d364(auStack_720,0);
        FUN_00d4daf4(auStack_720,1,1,0,0);
        FUN_00d4dd1c(auStack_720,1);
        FUN_00d55794(lVar6,auStack_758,0);
        fVar12 = *(float *)(*(long *)(lVar6 + 0x40) + 0x7c);
        fVar13 = *(float *)(*(long *)(lVar6 + 0x40) + 0x130);
        uVar3 = FUN_00d55870(lVar6);
        FUN_00d4eb08(auStack_748,auStack_758,1000,1);
        puVar9 = auStack_748;
        if (*(char *)((long)param_1 + 0x1984) == '\0') {
          FUN_00d4db48(fVar12 + fVar13,auStack_720,auStack_758);
          puVar9 = (undefined1 *)0x0;
          if (*(char *)((long)param_1 + 0x1984) != '\0') {
            puVar9 = auStack_748;
          }
        }
        uVar4 = FUN_00d9e840(auStack_720,local_6c0,200,puVar9);
        if (uVar4 != 0) {
          uVar11 = (ulong)uVar4;
          plVar5 = local_6c0;
          do {
            lVar10 = *plVar5;
            uVar4 = *(ushort *)(lVar10 + 0x88) & 0x1f;
            if ((uVar4 == 0x1f) || (1 < *(ushort *)(lVar10 + (ulong)uVar4 * 0x38 + 0x90) - 3)) {
              uVar7 = FUN_00d55870(lVar10);
              uVar4 = *(uint *)(lVar10 + 0x2f4);
              if (((uint)uVar7 & 0xff) == (uVar3 & 0xff)) {
                if ((uVar4 & 1) == 0) {
LAB_00d24384:
                  if ((uVar4 >> 4 & 1) != 0) {
                    uVar4 = *(uint *)(param_1 + 0x111);
                    if (uVar4 < 8) {
                      *(uint *)(param_1 + 0x111) = uVar4 + 1;
                      plVar8 = param_1 + (ulong)uVar4 * 8 + 0xd1;
                      goto LAB_00d243f4;
                    }
                  }
                }
                else {
                  uVar1 = *(uint *)(param_1 + 0x6f);
                  if (3 < uVar1) goto LAB_00d24384;
                  *(uint *)(param_1 + 0x6f) = uVar1 + 1;
                  plVar8 = param_1 + (ulong)uVar1 * 8 + 0x4f;
LAB_00d243f4:
                  FUN_00d24960(uVar7,lVar6,lVar10,plVar8);
                }
              }
              else {
                if ((uVar4 & 5) != 0) {
                  uVar1 = *(uint *)(param_1 + 0x4e);
                  if (uVar1 < 8) {
                    *(uint *)(param_1 + 0x4e) = uVar1 + 1;
                    plVar8 = param_1 + (ulong)uVar1 * 8 + 0xe;
                    goto LAB_00d243f4;
                  }
                }
                if ((uVar4 & 0x20100010) != 0) {
                  uVar1 = *(uint *)(param_1 + 0xd0);
                  if (uVar1 < 0xc) {
                    *(uint *)(param_1 + 0xd0) = uVar1 + 1;
                    plVar8 = param_1 + (ulong)uVar1 * 8 + 0x70;
                    goto LAB_00d243f4;
                  }
                }
                if ((uVar4 & 0x300) != 0) {
                  uVar4 = *(uint *)(param_1 + 0x142);
                  if (uVar4 < 6) {
                    plVar8 = param_1 + (ulong)uVar4 * 8 + 0x112;
                    *(uint *)(param_1 + 0x142) = uVar4 + 1;
                    goto LAB_00d243f4;
                  }
                }
              }
            }
            uVar11 = uVar11 - 1;
            plVar5 = plVar5 + 1;
          } while (uVar11 != 0);
        }
      }
    }
    else {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d2445c(long *param_1)

{
  long lVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  float local_6d0 [4];
  float local_6c0 [4];
  undefined8 local_6b0 [200];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  FUN_00d25a78();
  plVar5 = (long *)param_1[0x28f];
  plVar11 = param_1 + 0x28f;
  if (plVar5 == (long *)0x0) {
LAB_00d24528:
    plVar5 = (long *)*param_1;
    uVar8 = 0;
    if (plVar5 != (long *)0x0) {
      if ((int)param_1[1] == (int)plVar5[1]) {
        uVar8 = (**(code **)(*plVar5 + 0x10))();
      }
      else {
        *param_1 = 0;
        uVar8 = 0;
        *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
      }
    }
    cVar2 = FUN_00d55870(uVar8);
    uVar4 = FUN_019889cc(local_6b0,200,DAT_02c09220,0);
    uVar13 = (ulong)uVar4;
    if (uVar4 == 0) goto LAB_00d2492c;
    plVar5 = (long *)0x0;
    puVar12 = local_6b0;
    plVar9 = (long *)0x0;
    uVar16 = uVar13;
    do {
      plVar14 = (long *)*puVar12;
      plVar7 = plVar9;
      if (((*(byte *)((long)plVar14 + 0x2f5) >> 5 & 1) == 0) ||
         (((*(ushort *)(plVar14 + 0x11) & 0x1f) != 0x1f &&
          (*(ushort *)(plVar14 + (ulong)(*(ushort *)(plVar14 + 0x11) & 0x1f) * 7 + 0x12) - 3 < 2))))
      goto LAB_00d246c8;
      cVar3 = FUN_00d55870(plVar14);
      if (cVar3 == cVar2) {
        plVar7 = plVar14;
        if (plVar9 != (long *)0x0) {
          plVar7 = plVar9;
        }
        FUN_00d55794(plVar14,local_6c0,0);
        FUN_00d55794(plVar7,local_6d0,0);
        if (cVar2 == '\x02') {
          if (local_6c0[0] < local_6d0[0]) goto LAB_00d2469c;
        }
        else if ((cVar2 == '\x01') && (local_6d0[0] < local_6c0[0])) {
LAB_00d2469c:
          plVar7 = plVar14;
        }
      }
      else {
        plVar9 = plVar14;
        if (plVar5 != (long *)0x0) {
          plVar9 = plVar5;
        }
        FUN_00d55794(plVar14,local_6c0,0);
        FUN_00d55794(plVar9,local_6d0,0);
        plVar5 = plVar9;
        if (cVar2 == '\x02') {
          if (local_6c0[0] < local_6d0[0]) goto LAB_00d246b4;
        }
        else if ((cVar2 == '\x01') && (local_6d0[0] < local_6c0[0])) {
LAB_00d246b4:
          plVar5 = plVar14;
        }
      }
LAB_00d246c8:
      uVar16 = uVar16 - 1;
      puVar12 = puVar12 + 1;
      plVar9 = plVar7;
    } while (uVar16 != 0);
    if (uVar4 != 0) {
      plVar9 = (long *)0x0;
      puVar12 = local_6b0;
      plVar14 = (long *)0x0;
      do {
        plVar15 = (long *)*puVar12;
        plVar10 = plVar14;
        if ((*(char *)((long)plVar15 + 0x2f5) < '\0') &&
           (cVar3 = FUN_00d55870(plVar15), plVar10 = plVar15, cVar3 != cVar2)) {
          plVar9 = plVar15;
          plVar10 = plVar14;
        }
        uVar13 = uVar13 - 1;
        puVar12 = puVar12 + 1;
        plVar14 = plVar10;
      } while (uVar13 != 0);
      plVar14 = plVar7;
      if (plVar10 != (long *)0x0) {
        plVar14 = (long *)*param_1;
        if (plVar14 == (long *)0x0) {
          plVar15 = (long *)0x0;
        }
        else if ((int)param_1[1] == (int)plVar14[1]) {
          plVar14 = (long *)(**(code **)(*plVar14 + 0x10))();
          plVar15 = plVar14;
        }
        else {
          *param_1 = 0;
          plVar15 = (long *)0x0;
          *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
        }
        FUN_00d24960(plVar14,plVar15,plVar10,param_1 + 0x29f);
        plVar14 = plVar10;
        if (plVar7 != (long *)0x0) {
          plVar14 = plVar7;
        }
      }
      plVar7 = plVar14;
      if (plVar9 != (long *)0x0) {
        plVar14 = (long *)*param_1;
        if (plVar14 == (long *)0x0) {
          plVar10 = (long *)0x0;
        }
        else if ((int)param_1[1] == (int)plVar14[1]) {
          plVar14 = (long *)(**(code **)(*plVar14 + 0x10))();
          plVar10 = plVar14;
        }
        else {
          *param_1 = 0;
          plVar10 = (long *)0x0;
          *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
        }
        FUN_00d24960(plVar14,plVar10,plVar9,param_1 + 0x2c7);
      }
    }
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)*param_1;
      if (plVar9 == (long *)0x0) {
        plVar14 = (long *)0x0;
      }
      else if ((int)param_1[1] == (int)plVar9[1]) {
        plVar9 = (long *)(**(code **)(*plVar9 + 0x10))();
        plVar14 = plVar9;
      }
      else {
        *param_1 = 0;
        plVar14 = (long *)0x0;
        *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
      }
      FUN_00d24960(plVar9,plVar14,plVar7,plVar11);
    }
    if (plVar5 == (long *)0x0) goto LAB_00d2492c;
    plVar9 = (long *)*param_1;
    if (plVar9 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else if ((int)param_1[1] == (int)plVar9[1]) {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x10))();
      plVar7 = plVar9;
    }
    else {
      *param_1 = 0;
      plVar7 = (long *)0x0;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
    }
    plVar11 = param_1 + 0x2af;
  }
  else {
    if ((int)param_1[0x290] != (int)plVar5[1]) {
      param_1[0x28f] = 0;
      *(undefined4 *)(param_1 + 0x290) = DAT_03214ce8;
      goto LAB_00d24528;
    }
    lVar6 = (**(code **)(*plVar5 + 0x10))();
    uVar4 = *(ushort *)(lVar6 + 0x88) & 0x1f;
    if ((uVar4 != 0x1f) && (*(ushort *)(lVar6 + (ulong)uVar4 * 0x38 + 0x90) - 3 < 2))
    goto LAB_00d24528;
    plVar5 = (long *)*param_1;
    if (plVar5 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else if ((int)param_1[1] == (int)plVar5[1]) {
      plVar7 = (long *)(**(code **)(*plVar5 + 0x10))();
    }
    else {
      *param_1 = 0;
      plVar7 = (long *)0x0;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
    }
    plVar9 = (long *)*plVar11;
    if (plVar9 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else if ((int)param_1[0x290] == (int)plVar9[1]) {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x10))();
      plVar5 = plVar9;
    }
    else {
      param_1[0x28f] = 0;
      plVar5 = (long *)0x0;
      *(undefined4 *)(param_1 + 0x290) = DAT_03214ce8;
    }
  }
  FUN_00d24960(plVar9,plVar7,plVar5,plVar11);
LAB_00d2492c:
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d24960(undefined8 param_1,long param_2,long param_3,long *param_4)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar5 = *(long *)(param_3 + 0x40);
  fVar7 = *(float *)(lVar5 + 0x31c);
  fVar8 = *(float *)(lVar5 + 0x308);
  fVar9 = *(float *)(lVar5 + 0x318);
  *param_4 = param_3 + 0x28;
  if (fVar8 <= fVar7) {
    fVar7 = fVar8;
  }
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(param_3 + 0x30);
  fVar7 = fVar8 + fVar9 + fVar7;
  fVar8 = (*(float *)(lVar5 + 0x1bc) + 1.0) *
          (*(float *)(lVar5 + 0x54) + *(float *)(lVar5 + 0x108) * (*(float *)(lVar5 + 0x270) + 1.0))
  ;
  if (DAT_031505ac <= fVar8) {
    fVar8 = DAT_031505ac;
  }
  fVar9 = DAT_031504ec;
  if (DAT_031504ec <= fVar8) {
    fVar9 = fVar8;
  }
  *(float *)(param_4 + 5) = fVar7 * ((fVar9 + 100.0) / 100.0);
  fVar8 = (*(float *)(lVar5 + 0x1c0) + 1.0) *
          (*(float *)(lVar5 + 0x58) + *(float *)(lVar5 + 0x10c) * (*(float *)(lVar5 + 0x274) + 1.0))
  ;
  if (DAT_031505b0 <= fVar8) {
    fVar8 = DAT_031505b0;
  }
  fVar9 = DAT_031504f0;
  if (DAT_031504f0 <= fVar8) {
    fVar9 = fVar8;
  }
  *(float *)((long)param_4 + 0x2c) = fVar7 * ((fVar9 + 100.0) / 100.0);
  fVar7 = (*(float *)(lVar5 + 0x1b0) + 1.0) *
          (*(float *)(lVar5 + 0x48) + *(float *)(lVar5 + 0xfc) * (*(float *)(lVar5 + 0x264) + 1.0));
  fVar8 = (*(float *)(lVar5 + 0x1dc) + 1.0) *
          (*(float *)(lVar5 + 0x74) + *(float *)(lVar5 + 0x128) * (*(float *)(lVar5 + 0x290) + 1.0))
  ;
  if (DAT_031505a0 <= fVar7) {
    fVar7 = DAT_031505a0;
  }
  fVar9 = DAT_031504e0;
  if (DAT_031504e0 <= fVar7) {
    fVar9 = fVar7;
  }
  if (DAT_031505cc <= fVar8) {
    fVar8 = DAT_031505cc;
  }
  fVar7 = DAT_0315050c;
  if (DAT_0315050c <= fVar8) {
    fVar7 = fVar8;
  }
  *(float *)(param_4 + 6) = fVar9 / fVar7;
  fVar7 = (*(float *)(lVar5 + 0x1e0) + 1.0) *
          (*(float *)(lVar5 + 0x78) + *(float *)(lVar5 + 300) * (*(float *)(lVar5 + 0x294) + 1.0));
  if (DAT_031505d0 <= fVar7) {
    fVar7 = DAT_031505d0;
  }
  fVar8 = DAT_03150510;
  if (DAT_03150510 <= fVar7) {
    fVar8 = fVar7;
  }
  *(float *)((long)param_4 + 0x34) = fVar8;
  uVar6 = FUN_00d9ee8c(param_3);
  *(undefined4 *)(param_4 + 7) = uVar6;
  plVar3 = *(long **)(param_3 + 0x2b0);
  lVar5 = 0;
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_3 + 0x2b8) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      lVar5 = 0;
      if (lVar4 != 0) {
        plVar3 = *(long **)(param_3 + 0x2b0);
        lVar4 = 0;
        if (plVar3 != (long *)0x0) {
          if (*(int *)(param_3 + 0x2b8) == (int)plVar3[1]) {
            lVar4 = (**(code **)(*plVar3 + 0x10))();
          }
          else {
            *(undefined8 *)(param_3 + 0x2b0) = 0;
            lVar4 = 0;
            *(undefined4 *)(param_3 + 0x2b8) = DAT_03214ce8;
          }
        }
        uVar1 = *(ushort *)(lVar4 + 0x88) & 0x1f;
        if ((uVar1 == 0x1f) || (lVar5 = 0, 1 < *(ushort *)(lVar4 + (ulong)uVar1 * 0x38 + 0x90) - 3))
        {
          plVar3 = *(long **)(param_3 + 0x2b0);
          lVar5 = 0;
          if (plVar3 != (long *)0x0) {
            if (*(int *)(param_3 + 0x2b8) != (int)plVar3[1]) goto LAB_00d24bf0;
            lVar5 = (**(code **)(*plVar3 + 0x10))();
          }
        }
      }
    }
    else {
LAB_00d24bf0:
      *(undefined8 *)(param_3 + 0x2b0) = 0;
      lVar5 = 0;
      *(undefined4 *)(param_3 + 0x2b8) = DAT_03214ce8;
    }
  }
  *(byte *)((long)param_4 + 0x3c) = *(byte *)((long)param_4 + 0x3c) & 0xfd | (lVar5 == param_2) << 1
  ;
  plVar3 = *(long **)(param_3 + 0x2b0);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_3 + 0x2b8) != (int)plVar3[1]) {
LAB_00d24cf4:
      *(undefined8 *)(param_3 + 0x2b0) = 0;
      bVar2 = 0;
      *(undefined4 *)(param_3 + 0x2b8) = DAT_03214ce8;
      goto LAB_00d24d0c;
    }
    lVar5 = (**(code **)(*plVar3 + 0x10))();
    if (lVar5 != 0) {
      plVar3 = *(long **)(param_3 + 0x2b0);
      lVar5 = 0;
      if (plVar3 != (long *)0x0) {
        if (*(int *)(param_3 + 0x2b8) == (int)plVar3[1]) {
          lVar5 = (**(code **)(*plVar3 + 0x10))();
        }
        else {
          *(undefined8 *)(param_3 + 0x2b0) = 0;
          lVar5 = 0;
          *(undefined4 *)(param_3 + 0x2b8) = DAT_03214ce8;
        }
      }
      uVar1 = *(ushort *)(lVar5 + 0x88) & 0x1f;
      if ((uVar1 != 0x1f) && (bVar2 = 0, *(ushort *)(lVar5 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2))
      goto LAB_00d24d0c;
      plVar3 = *(long **)(param_3 + 0x2b0);
      if (plVar3 != (long *)0x0) {
        if (*(int *)(param_3 + 0x2b8) == (int)plVar3[1]) {
          lVar5 = (**(code **)(*plVar3 + 0x10))();
          bVar2 = (lVar5 != 0) << 2;
          goto LAB_00d24d0c;
        }
        goto LAB_00d24cf4;
      }
    }
  }
  bVar2 = 0;
LAB_00d24d0c:
  *(byte *)((long)param_4 + 0x3c) = *(byte *)((long)param_4 + 0x3c) & 0xf3 | bVar2;
  uVar6 = FUN_00d55870(param_2);
  bVar2 = FUN_00d7d0a0(*(undefined8 *)(param_3 + 0x80),uVar6);
  *(byte *)((long)param_4 + 0x3c) = *(byte *)((long)param_4 + 0x3c) & 0xfe | bVar2 & 1;
  if (((*(byte *)(param_2 + 0x2f4) & 1) != 0) && ((*(byte *)(param_3 + 0x2f4) & 1) != 0)) {
    fVar7 = (float)FUN_009bc24c();
    uVar6 = FUN_00d55870(param_2);
    fVar8 = (float)FUN_00d7d2ec(*(undefined8 *)(param_3 + 0x80),uVar6);
    if (fVar7 - fVar8 < 3.0) {
      *(byte *)((long)param_4 + 0x3c) = *(byte *)((long)param_4 + 0x3c) | 1;
    }
  }
  FUN_00d55794(param_3,param_4 + 2,0);
  FUN_00d557c4(param_3,(long)param_4 + 0x1c,&DAT_03218f68);
  return;
}




void FUN_00d24dc0(long *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_710 [96];
  long local_6b0 [200];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 != 0) {
        FUN_00d4d9e8(auStack_710);
        FUN_00d4db40(auStack_710,lVar6);
        FUN_00d4dc44(auStack_710,0);
        FUN_00d4d364(auStack_710,1);
        FUN_00d4daf4(auStack_710,1,1,0,0);
        FUN_00d4dd1c(auStack_710,1);
        uVar4 = FUN_00d9e840(auStack_710,local_6b0,200,0);
        param_1[0x337] = 0;
        *(undefined1 *)(param_1 + 0x271) = 0;
        *(undefined1 *)(param_1 + 0x27a) = 0;
        *(undefined1 *)(param_1 + 0x283) = 0;
        *(undefined4 *)(param_1 + 0x245) = 0;
        uVar7 = FUN_00d55870(lVar6);
        if (uVar4 != 0) {
          uVar11 = (ulong)uVar4;
          uVar4 = (uint)uVar7;
          plVar5 = local_6b0;
          do {
            lVar12 = *plVar5;
            uVar2 = *(ushort *)(lVar12 + 0x88) & 0x1f;
            if ((uVar2 != 0x1f) && (*(ushort *)(lVar12 + (ulong)uVar2 * 0x38 + 0x90) - 3 < 2))
            goto LAB_00d2506c;
            uVar2 = *(uint *)(lVar12 + 0x2f4);
            if ((uVar2 >> 0x1e & 1) == 0) {
              plVar8 = param_1 + 0x272;
              plVar10 = param_1 + 0x27a;
              if (((uVar2 >> 0xb & 1) != 0) ||
                 (((uVar2 >> 10 & 1) != 0 &&
                  (uVar7 = FUN_00d55870(lVar12), plVar8 = param_1 + 0x27b, plVar10 = param_1 + 0x283
                  , ((uint)uVar7 & 0xff) != (uVar4 & 0xff))))) {
                *(undefined1 *)plVar10 = 1;
                goto LAB_00d25068;
              }
              uVar7 = FUN_00d55870(lVar12);
              uVar2 = *(uint *)(lVar12 + 0x2f4);
              if (((uint)uVar7 & 0xff) == (uVar4 & 0xff)) {
                if ((uVar2 & 1) == 0) {
                  if ((uVar2 >> 0xd & 1) != 0) {
                    uVar2 = *(uint *)(param_1 + 0x204);
                    *(int *)((long)param_1 + 0x19bc) = *(int *)((long)param_1 + 0x19bc) + 1;
                    if (uVar2 < 0xc) {
                      *(uint *)(param_1 + 0x204) = uVar2 + 1;
                      plVar8 = param_1 + (ulong)uVar2 * 8 + 0x1a4;
                      goto LAB_00d25068;
                    }
                  }
                }
                else {
                  uVar2 = *(uint *)(param_1 + 0x266);
                  if (uVar2 < 4) {
                    lVar1 = (ulong)uVar2 << 6;
                    *(uint *)(param_1 + 0x266) = uVar2 + 1;
                    lVar9 = 0x1230;
LAB_00d24f34:
                    plVar8 = (long *)((long)param_1 + lVar9 + lVar1);
                    goto LAB_00d25068;
                  }
                }
              }
              else if ((uVar2 & 1) == 0) {
                if ((uVar2 & 0x6000) != 0) {
                  uVar2 = *(uint *)(param_1 + 0x1a3);
                  if (uVar2 < 0xc) {
                    plVar8 = param_1 + (ulong)uVar2 * 8 + 0x143;
                    *(uint *)(param_1 + 0x1a3) = uVar2 + 1;
                    *(int *)(param_1 + 0x337) = (int)param_1[0x337] + 1;
                    goto LAB_00d25068;
                  }
                }
              }
              else {
                uVar2 = *(uint *)(param_1 + 0x245);
                if (uVar2 < 8) {
                  lVar1 = (ulong)uVar2 * 0x40;
                  *(uint *)(param_1 + 0x245) = uVar2 + 1;
                  lVar9 = 0x1028;
                  goto LAB_00d24f34;
                }
              }
            }
            else {
              *(undefined1 *)(param_1 + 0x271) = 1;
              plVar8 = param_1 + 0x269;
LAB_00d25068:
              uVar7 = FUN_00d24960(uVar7,lVar6,lVar12,plVar8);
            }
LAB_00d2506c:
            uVar11 = uVar11 - 1;
            plVar5 = plVar5 + 1;
          } while (uVar11 != 0);
        }
      }
    }
    else {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

