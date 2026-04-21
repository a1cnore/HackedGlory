// functions/00ee7 — 10 functions
#include "libGameKindred.h"




undefined8 FUN_00ee71d0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x270);
  lVar4 = *(long *)(param_1 + 0x268);
  iVar2 = *(int *)(lVar5 + 0x18);
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  *(int *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + (iVar1 >> 3);
  *(undefined4 *)(lVar5 + 0x18) = 0;
  uVar3 = (**(code **)(lVar4 + 0x10))();
  if ((int)uVar3 != 0) {
    if (0 < *(int *)(param_1 + 0x1c0)) {
      lVar4 = 0;
      do {
        *(undefined4 *)(lVar5 + 0x24 + lVar4 * 4) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_1 + 0x1c0));
    }
    *(undefined4 *)(lVar5 + 0x20) = 0;
    *(undefined4 *)(lVar5 + 0x38) = *(undefined4 *)(param_1 + 0x174);
    if (*(int *)(param_1 + 0x23c) == 0) {
      *(undefined4 *)(lVar5 + 0x34) = 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}




undefined8 FUN_00ee7264(undefined8 *param_1,ulong param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  
  plVar7 = (long *)param_1[4];
  pbVar8 = (byte *)*param_1;
  lVar10 = param_1[1];
  if (*(int *)((long)plVar7 + 0x23c) == 0) {
    if (param_3 < 0x19) {
      do {
        pbVar9 = pbVar8;
        if (lVar10 == 0) {
          uVar4 = (**(code **)(plVar7[5] + 0x18))(plVar7);
          if ((int)uVar4 == 0) {
            return uVar4;
          }
          pbVar9 = *(byte **)plVar7[5];
          lVar10 = ((undefined8 *)plVar7[5])[1];
        }
        pbVar8 = pbVar9 + 1;
        uVar6 = (ulong)*pbVar9;
        lVar10 = lVar10 + -1;
        pbVar9 = pbVar8;
        if (uVar6 == 0xff) {
          do {
            if (lVar10 == 0) {
              uVar4 = (**(code **)(plVar7[5] + 0x18))(plVar7);
              if ((int)uVar4 == 0) {
                return uVar4;
              }
              pbVar9 = *(byte **)plVar7[5];
              lVar10 = ((undefined8 *)plVar7[5])[1];
            }
            pbVar8 = pbVar9 + 1;
            bVar3 = *pbVar9;
            lVar10 = lVar10 + -1;
            pbVar9 = pbVar8;
          } while (bVar3 == 0xff);
          if (bVar3 != 0) {
            *(uint *)((long)plVar7 + 0x23c) = (uint)bVar3;
            goto LAB_00ee729c;
          }
          uVar6 = 0xff;
        }
        param_2 = uVar6 | param_2 << 8;
        iVar2 = param_3 + 8;
        bVar1 = param_3 < 0x11;
        param_3 = iVar2;
      } while (bVar1);
    }
  }
  else {
LAB_00ee729c:
    if (param_3 < param_4) {
      if (*(int *)(plVar7[0x4e] + 0x34) == 0) {
        lVar5 = *plVar7;
        *(undefined4 *)(lVar5 + 0x28) = 0x78;
        (**(code **)(lVar5 + 8))(plVar7,0xffffffff);
        *(undefined4 *)(plVar7[0x4e] + 0x34) = 1;
      }
      param_2 = param_2 << ((ulong)(0x19 - param_3) & 0x3f);
      param_3 = 0x19;
    }
  }
  *param_1 = pbVar8;
  param_1[1] = lVar10;
  param_1[2] = param_2;
  *(int *)(param_1 + 3) = param_3;
  return 1;
}




ulong FUN_00ee73b0(long param_1,ulong param_2,ulong param_3,long param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if ((int)param_3 < param_5) {
    iVar3 = FUN_00ee7264(param_1,param_2,param_3,param_5);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    param_2 = *(ulong *)(param_1 + 0x10);
    param_3 = (ulong)*(uint *)(param_1 + 0x18);
  }
  uVar5 = (int)param_3 - param_5;
  uVar6 = (ulong)uVar5;
  uVar2 = *(uint *)(&DAT_01bf3a5c + (long)param_5 * 4) & (uint)((long)param_2 >> (uVar6 & 0x3f));
  lVar8 = (long)param_5;
  uVar7 = (ulong)(int)uVar2;
  if (*(long *)(param_4 + (long)param_5 * 8) < (long)(int)uVar2) {
    do {
      iVar3 = (int)uVar6;
      if (iVar3 < 1) {
        iVar3 = FUN_00ee7264(param_1,param_2,uVar6,1);
        if (iVar3 == 0) {
          return 0xffffffff;
        }
        param_2 = *(ulong *)(param_1 + 0x10);
        iVar3 = *(int *)(param_1 + 0x18);
      }
      lVar1 = lVar8 * 8;
      uVar5 = iVar3 - 1;
      uVar6 = (ulong)uVar5;
      uVar7 = param_2 >> (uVar6 & 0x3f) & 1 | uVar7 << 1;
      lVar8 = lVar8 + 1;
    } while (*(long *)(param_4 + lVar1 + 8) < (long)uVar7);
    param_5 = (int)lVar8;
  }
  *(ulong *)(param_1 + 0x10) = param_2;
  *(uint *)(param_1 + 0x18) = uVar5;
  if (param_5 < 0x11) {
    uVar6 = (ulong)*(byte *)(*(long *)(param_4 + 0x118) +
                             (long)(*(int *)(param_4 + lVar8 * 8 + 0x90) + (int)uVar7) + 0x11);
  }
  else {
    plVar4 = *(long **)(param_1 + 0x20);
    lVar8 = *plVar4;
    *(undefined4 *)(lVar8 + 0x28) = 0x79;
    (**(code **)(lVar8 + 8))(plVar4,0xffffffff);
    uVar6 = 0;
  }
  return uVar6;
}




void FUN_00ee74dc(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  
  puVar2 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x88);
  param_1[0x49] = (long)puVar2;
  *puVar2 = FUN_00ee76ac;
  if (param_2 != 0) {
    puVar7 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar7 + 5) = 3;
    (*(code *)*puVar7)(param_1);
  }
  iVar8 = *(int *)((long)param_1 + 0x1ac);
  if (*(int *)(param_1[0x50] + 0x10) == 0) {
    iVar6 = (int)param_1[7];
    iVar9 = iVar8;
  }
  else {
    if (iVar8 < 2) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x30;
      (*(code *)*puVar7)(param_1);
      iVar8 = *(int *)((long)param_1 + 0x1ac);
    }
    lVar10 = param_1[0x49];
    lVar3 = (**(code **)param_1[1])(param_1,1,(long)(int)param_1[7] << 4);
    *(long *)(lVar10 + 0x68) = lVar3;
    iVar6 = (int)param_1[7];
    *(long *)(lVar10 + 0x70) = lVar3 + (long)iVar6 * 8;
    if (0 < iVar6) {
      lVar3 = 0;
      piVar11 = (int *)(param_1[0x26] + 0x28);
      do {
        iVar6 = 0;
        if (*(int *)((long)param_1 + 0x1ac) != 0) {
          iVar6 = (*piVar11 * piVar11[-7]) / *(int *)((long)param_1 + 0x1ac);
        }
        iVar9 = iVar6 * (iVar8 + 4);
        uVar1 = iVar9 * 2;
        lVar4 = (**(code **)param_1[1])
                          (param_1,1,
                           -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
        lVar4 = lVar4 + (long)iVar6 * 8;
        *(long *)(*(long *)(lVar10 + 0x68) + lVar3 * 8) = lVar4;
        *(long *)(*(long *)(lVar10 + 0x70) + lVar3 * 8) = lVar4 + (long)iVar9 * 8;
        iVar6 = (int)param_1[7];
        lVar3 = lVar3 + 1;
        piVar11 = piVar11 + 0x18;
      } while (lVar3 < iVar6);
    }
    iVar8 = *(int *)((long)param_1 + 0x1ac) + 2;
    iVar9 = *(int *)((long)param_1 + 0x1ac);
  }
  if (0 < iVar6) {
    lVar3 = 2;
    piVar11 = (int *)(param_1[0x26] + 0x28);
    while( true ) {
      iVar6 = 0;
      if (iVar9 != 0) {
        iVar6 = (*piVar11 * piVar11[-7]) / iVar9;
      }
      uVar5 = (**(code **)(param_1[1] + 0x10))(param_1,1,piVar11[-1] * piVar11[-3],iVar6 * iVar8);
      puVar2[lVar3] = uVar5;
      if ((long)(int)param_1[7] <= lVar3 + -1) break;
      iVar9 = *(int *)((long)param_1 + 0x1ac);
      lVar3 = lVar3 + 1;
      piVar11 = piVar11 + 0x18;
    }
  }
  return;
}




void FUN_00ee76ac(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  lVar12 = param_1[0x49];
  if (param_2 == 2) {
    *(code **)(lVar12 + 8) = FUN_00ee7b94;
    return;
  }
  if (param_2 == 0) {
    if (*(int *)(param_1[0x50] + 0x10) == 0) {
      *(code **)(lVar12 + 8) = FUN_00ee7ae0;
    }
    else {
      *(code **)(lVar12 + 8) = FUN_00ee77fc;
      iVar2 = *(int *)(param_1 + 7);
      if (0 < iVar2) {
        iVar1 = *(int *)((long)param_1 + 0x1ac);
        lVar14 = param_1[0x26];
        lVar13 = 0;
        do {
          puVar15 = *(undefined8 **)(*(long *)(lVar12 + 0x68) + lVar13 * 8);
          puVar17 = *(undefined8 **)(*(long *)(lVar12 + 0x70) + lVar13 * 8);
          puVar16 = *(undefined8 **)(lVar12 + lVar13 * 8 + 0x10);
          uVar5 = 0;
          if (iVar1 != 0) {
            uVar5 = (*(int *)(lVar14 + 0x28) * *(int *)(lVar14 + 0xc)) / iVar1;
          }
          uVar3 = uVar5 * (iVar1 + 2);
          if (0 < (int)uVar3) {
            uVar6 = (ulong)uVar3;
            puVar8 = puVar16;
            puVar9 = puVar17;
            puVar10 = puVar15;
            do {
              uVar11 = *puVar8;
              uVar6 = uVar6 - 1;
              *puVar9 = uVar11;
              *puVar10 = uVar11;
              puVar8 = puVar8 + 1;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar6 != 0);
          }
          if (0 < (int)uVar5) {
            iVar4 = uVar5 * (iVar1 + -2);
            lVar7 = 0;
            do {
              puVar17[iVar4 + lVar7] = puVar16[(int)(uVar5 * iVar1) + lVar7];
              puVar17[(int)(uVar5 * iVar1) + lVar7] = puVar16[iVar4 + lVar7];
              lVar7 = lVar7 + 1;
            } while (lVar7 < (int)(uVar5 << 1));
            uVar6 = (ulong)uVar5;
            puVar16 = puVar15 + -(long)(int)uVar5;
            do {
              uVar6 = uVar6 - 1;
              *puVar16 = *puVar15;
              puVar16 = puVar16 + 1;
            } while (uVar6 != 0);
          }
          lVar13 = lVar13 + 1;
          lVar14 = lVar14 + 0x60;
        } while (lVar13 != iVar2);
      }
      *(undefined8 *)(lVar12 + 0x78) = 0;
      *(undefined4 *)(lVar12 + 0x84) = 0;
    }
    *(undefined8 *)(lVar12 + 0x60) = 0;
    return;
  }
  param_1 = (undefined8 *)*param_1;
  *(undefined4 *)(param_1 + 5) = 3;
                    /* WARNING: Could not recover jumptable at 0x00ee77e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)();
  return;
}




void FUN_00ee77fc(long param_1,undefined8 param_2,uint *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  lVar14 = *(long *)(param_1 + 0x248);
  if (*(int *)(lVar14 + 0x60) == 0) {
    iVar7 = (**(code **)(*(long *)(param_1 + 0x250) + 0x18))
                      (param_1,*(undefined8 *)(lVar14 + (long)*(int *)(lVar14 + 0x78) * 8 + 0x68));
    if (iVar7 == 0) {
      return;
    }
    *(undefined4 *)(lVar14 + 0x60) = 1;
    *(int *)(lVar14 + 0x84) = *(int *)(lVar14 + 0x84) + 1;
  }
  iVar7 = *(int *)(lVar14 + 0x7c);
  if (iVar7 == 2) {
    (**(code **)(*(long *)(param_1 + 600) + 8))
              (param_1,*(undefined8 *)(lVar14 + (long)*(int *)(lVar14 + 0x78) * 8 + 0x68),
               lVar14 + 100,*(undefined4 *)(lVar14 + 0x80),param_2,param_3,param_4);
    if (*(uint *)(lVar14 + 100) < *(uint *)(lVar14 + 0x80)) {
      return;
    }
    *(undefined4 *)(lVar14 + 0x7c) = 0;
    if (param_4 <= *param_3) {
      return;
    }
  }
  else {
    if (iVar7 == 1) goto LAB_00ee79ac;
    if (iVar7 != 0) {
      return;
    }
  }
  *(undefined4 *)(lVar14 + 100) = 0;
  iVar7 = *(int *)(param_1 + 0x1ac);
  *(int *)(lVar14 + 0x80) = iVar7 + -1;
  if ((*(int *)(lVar14 + 0x84) == *(int *)(param_1 + 0x1b0)) &&
     (iVar1 = *(int *)(param_1 + 0x38), 0 < iVar1)) {
    lVar9 = *(long *)(param_1 + 0x248);
    lVar10 = *(long *)(param_1 + 0x130);
    lVar8 = 0;
    iVar2 = *(int *)(lVar9 + 0x78);
    do {
      uVar3 = *(int *)(lVar10 + 0x28) * *(int *)(lVar10 + 0xc);
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = *(uint *)(lVar10 + 0x30) / uVar3;
      }
      uVar6 = *(uint *)(lVar10 + 0x30) - uVar6 * uVar3;
      iVar4 = 0;
      if (iVar7 != 0) {
        iVar4 = (int)uVar3 / iVar7;
      }
      if (uVar6 != 0) {
        uVar3 = uVar6;
      }
      if (lVar8 == 0) {
        iVar5 = 0;
        if (iVar4 != 0) {
          iVar5 = (int)(uVar3 - 1) / iVar4;
        }
        *(int *)(lVar9 + 0x80) = iVar5 + 1;
      }
      if (0 < iVar4) {
        lVar11 = 0;
        lVar13 = *(long *)(*(long *)(lVar9 + (long)iVar2 * 8 + 0x68) + lVar8 * 8);
        do {
          *(undefined8 *)(lVar13 + (long)(int)uVar3 * 8 + lVar11 * 8) =
               *(undefined8 *)(lVar13 + ((long)(int)uVar3 + -1) * 8);
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar4 << 1);
      }
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + 0x60;
    } while (lVar8 != iVar1);
  }
  *(undefined4 *)(lVar14 + 0x7c) = 1;
LAB_00ee79ac:
  (**(code **)(*(long *)(param_1 + 600) + 8))
            (param_1,*(undefined8 *)(lVar14 + (long)*(int *)(lVar14 + 0x78) * 8 + 0x68),lVar14 + 100
             ,*(undefined4 *)(lVar14 + 0x80),param_2,param_3,param_4);
  if (*(uint *)(lVar14 + 0x80) <= *(uint *)(lVar14 + 100)) {
    if (*(int *)(lVar14 + 0x84) == 1) {
      iVar1 = *(int *)(param_1 + 0x38);
      iVar7 = *(int *)(param_1 + 0x1ac);
      if (0 < iVar1) {
        lVar9 = *(long *)(param_1 + 0x248);
        lVar10 = *(long *)(param_1 + 0x130);
        lVar8 = 0;
        do {
          uVar3 = 0;
          if (iVar7 != 0) {
            uVar3 = (*(int *)(lVar10 + 0x28) * *(int *)(lVar10 + 0xc)) / iVar7;
          }
          if (0 < (int)uVar3) {
            iVar2 = uVar3 * (iVar7 + 1);
            iVar4 = uVar3 * (iVar7 + 2);
            uVar12 = 0;
            lVar11 = *(long *)(*(long *)(lVar9 + 0x70) + lVar8 * 8);
            lVar13 = *(long *)(*(long *)(lVar9 + 0x68) + lVar8 * 8);
            do {
              *(undefined8 *)(lVar13 + (long)(int)uVar3 * -8 + uVar12 * 8) =
                   *(undefined8 *)(lVar13 + (long)iVar2 * 8 + uVar12 * 8);
              *(undefined8 *)(lVar11 + (long)(int)uVar3 * -8 + uVar12 * 8) =
                   *(undefined8 *)(lVar11 + (long)iVar2 * 8 + uVar12 * 8);
              *(undefined8 *)(lVar13 + (long)iVar4 * 8 + uVar12 * 8) =
                   *(undefined8 *)(lVar13 + uVar12 * 8);
              *(undefined8 *)(lVar11 + (long)iVar4 * 8 + uVar12 * 8) =
                   *(undefined8 *)(lVar11 + uVar12 * 8);
              uVar12 = uVar12 + 1;
            } while (uVar3 != uVar12);
          }
          lVar8 = lVar8 + 1;
          lVar10 = lVar10 + 0x60;
        } while (lVar8 != iVar1);
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 0x1ac);
    }
    *(undefined4 *)(lVar14 + 0x60) = 0;
    *(int *)(lVar14 + 100) = iVar7 + 1;
    *(uint *)(lVar14 + 0x78) = *(uint *)(lVar14 + 0x78) ^ 1;
    *(undefined4 *)(lVar14 + 0x7c) = 2;
    *(int *)(lVar14 + 0x80) = iVar7 + 2;
  }
  return;
}




void FUN_00ee7ae0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x248);
  if (*(int *)(lVar3 + 0x60) == 0) {
    iVar2 = (**(code **)(*(long *)(param_1 + 0x250) + 0x18))(param_1,lVar3 + 0x10);
    if (iVar2 == 0) {
      return;
    }
    *(undefined4 *)(lVar3 + 0x60) = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x1ac);
  (**(code **)(*(long *)(param_1 + 600) + 8))
            (param_1,lVar3 + 0x10,lVar3 + 100,uVar1,param_2,param_3,param_4);
  if (uVar1 <= *(uint *)(lVar3 + 100)) {
    *(undefined8 *)(lVar3 + 0x60) = 0;
  }
  return;
}




void FUN_00ee7b94(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00ee7bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 600) + 8))(param_1,0,0,0,param_2,param_3,param_4);
  return;
}




void FUN_00ee7bb8(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  short *psVar12;
  uint uVar13;
  long lVar14;
  short sVar15;
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
  float fVar27;
  float local_128 [64];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  lVar9 = *(long *)(param_1 + 0x1b8);
  pfVar10 = *(float **)(param_2 + 0x58);
  pfVar11 = local_128;
  psVar12 = (short *)(param_3 + 0x40);
  uVar13 = 9;
  do {
    sVar15 = psVar12[-0x10];
    if ((((psVar12[-0x18] == 0 && sVar15 == 0) && (sVar15 = 0, psVar12[-8] == 0)) &&
        (sVar15 = 0, *psVar12 == 0)) &&
       (((sVar15 = 0, psVar12[8] == 0 && (sVar15 = 0, psVar12[0x10] == 0)) &&
        (sVar15 = 0, psVar12[0x18] == 0)))) {
      fVar16 = *pfVar10 * (float)(int)psVar12[-0x20];
      *pfVar11 = fVar16;
      pfVar11[8] = fVar16;
      pfVar11[0x10] = fVar16;
      pfVar11[0x18] = fVar16;
      pfVar11[0x20] = fVar16;
      pfVar11[0x28] = fVar16;
      pfVar11[0x30] = fVar16;
      lVar14 = 0x38;
    }
    else {
      fVar20 = pfVar10[8] * (float)(int)psVar12[-0x18];
      fVar26 = *pfVar10 * (float)(int)psVar12[-0x20] + pfVar10[0x20] * (float)(int)*psVar12;
      fVar16 = *pfVar10 * (float)(int)psVar12[-0x20] - pfVar10[0x20] * (float)(int)*psVar12;
      fVar18 = pfVar10[0x10] * (float)(int)sVar15 + pfVar10[0x30] * (float)(int)psVar12[0x10];
      fVar22 = pfVar10[0x18] * (float)(int)psVar12[-8] + pfVar10[0x28] * (float)(int)psVar12[8];
      fVar23 = pfVar10[0x28] * (float)(int)psVar12[8] - pfVar10[0x18] * (float)(int)psVar12[-8];
      fVar24 = fVar20 + pfVar10[0x38] * (float)(int)psVar12[0x18];
      fVar20 = fVar20 - pfVar10[0x38] * (float)(int)psVar12[0x18];
      fVar17 = (pfVar10[0x10] * (float)(int)sVar15 - pfVar10[0x30] * (float)(int)psVar12[0x10]) *
               1.4142135 - fVar18;
      fVar21 = fVar22 + fVar24;
      fVar25 = fVar26 + fVar18;
      fVar26 = fVar26 - fVar18;
      fVar19 = fVar16 + fVar17;
      fVar16 = fVar16 - fVar17;
      fVar17 = (fVar23 + fVar20) * 1.847759;
      fVar18 = (fVar17 + fVar23 * -2.613126) - fVar21;
      fVar22 = (fVar24 - fVar22) * 1.4142135 - fVar18;
      fVar17 = (fVar17 + fVar20 * -1.0823922) - fVar22;
      pfVar11[0x30] = fVar19 - fVar18;
      pfVar11[0x10] = fVar16 + fVar22;
      pfVar11[0x28] = fVar16 - fVar22;
      fVar16 = fVar26 - fVar17;
      lVar14 = 0x20;
      *pfVar11 = fVar25 + fVar21;
      pfVar11[0x38] = fVar25 - fVar21;
      pfVar11[8] = fVar19 + fVar18;
      pfVar11[0x18] = fVar26 + fVar17;
    }
    uVar13 = uVar13 - 1;
    pfVar11[lVar14] = fVar16;
    pfVar11 = pfVar11 + 1;
    pfVar10 = pfVar10 + 1;
    psVar12 = psVar12 + 1;
  } while (1 < uVar13);
  lVar14 = 0;
  do {
    pfVar11 = local_128 + lVar14;
    lVar4 = lVar14 + 1;
    lVar5 = lVar14 + 4;
    lVar6 = lVar14 + 5;
    fVar18 = local_128[lVar14 + 2];
    lVar7 = lVar14 + 3;
    fVar23 = local_128[lVar14 + 6];
    lVar8 = lVar14 + 7;
    plVar1 = (long *)(param_4 + lVar14);
    lVar14 = lVar14 + 8;
    fVar25 = fVar18 + fVar23;
    fVar24 = local_128[lVar6] + local_128[lVar7];
    fVar17 = local_128[lVar6] - local_128[lVar7];
    fVar19 = local_128[lVar4] + local_128[lVar8];
    fVar22 = local_128[lVar4] - local_128[lVar8];
    fVar20 = *pfVar11 + 128.5 + local_128[lVar5];
    fVar16 = (*pfVar11 + 128.5) - local_128[lVar5];
    fVar21 = fVar24 + fVar19;
    fVar26 = fVar20 + fVar25;
    puVar2 = (undefined1 *)(*plVar1 + (ulong)param_5);
    fVar27 = (fVar17 + fVar22) * 1.847759;
    *puVar2 = *(undefined1 *)(lVar9 + (ulong)((int)(fVar26 + fVar21) & 0x3ff));
    fVar18 = (fVar18 - fVar23) * 1.4142135 - fVar25;
    fVar23 = fVar16 + fVar18;
    fVar17 = (fVar27 + fVar17 * -2.613126) - fVar21;
    puVar2[7] = *(undefined1 *)(lVar9 + (ulong)((int)(fVar26 - fVar21) & 0x3ff));
    puVar2[1] = *(undefined1 *)(lVar9 + (ulong)((int)(fVar23 + fVar17) & 0x3ff));
    fVar16 = fVar16 - fVar18;
    fVar18 = (fVar19 - fVar24) * 1.4142135 - fVar17;
    puVar2[6] = *(undefined1 *)(lVar9 + (ulong)((int)(fVar23 - fVar17) & 0x3ff));
    fVar20 = fVar20 - fVar25;
    puVar2[2] = *(undefined1 *)(lVar9 + (ulong)((int)(fVar16 + fVar18) & 0x3ff));
    fVar17 = (fVar27 + fVar22 * -1.0823922) - fVar18;
    puVar2[5] = *(undefined1 *)(lVar9 + (ulong)((int)(fVar16 - fVar18) & 0x3ff));
    puVar2[3] = *(undefined1 *)(lVar9 + (ulong)((int)(fVar20 + fVar17) & 0x3ff));
    puVar2[4] = *(undefined1 *)(lVar9 + (ulong)((int)(fVar20 - fVar17) & 0x3ff));
  } while (lVar14 != 0x40);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ee7f3c(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  short sVar15;
  long lVar16;
  int iVar17;
  uint *puVar18;
  short *psVar19;
  long lVar20;
  uint uVar21;
  int *piVar22;
  uint uVar23;
  uint local_148 [16];
  uint local_108 [8];
  uint local_e8 [8];
  uint local_c8 [8];
  uint local_a8 [8];
  uint local_88 [8];
  uint local_68 [8];
  long local_48;
  
  lVar14 = tpidr_el0;
  puVar18 = local_148;
  psVar19 = (short *)(param_3 + 0x40);
  uVar21 = 9;
  local_48 = *(long *)(lVar14 + 0x28);
  lVar20 = *(long *)(param_1 + 0x1b8);
  piVar22 = *(int **)(param_2 + 0x58);
  do {
    sVar15 = psVar19[-0x10];
    if (((((psVar19[-0x18] == 0 && sVar15 == 0) && (sVar15 = 0, psVar19[-8] == 0)) &&
         (sVar15 = 0, *psVar19 == 0)) &&
        ((sVar15 = 0, psVar19[8] == 0 && (sVar15 = 0, psVar19[0x10] == 0)))) &&
       (sVar15 = 0, psVar19[0x18] == 0)) {
      uVar23 = *piVar22 * (int)psVar19[-0x20];
      *puVar18 = uVar23;
      puVar18[8] = uVar23;
      puVar18[0x10] = uVar23;
      puVar18[0x18] = uVar23;
      puVar18[0x20] = uVar23;
      puVar18[0x28] = uVar23;
      puVar18[0x30] = uVar23;
      lVar16 = 0x38;
    }
    else {
      iVar11 = piVar22[8] * (int)psVar19[-0x18];
      iVar1 = piVar22[0x20] * (int)*psVar19 + *piVar22 * (int)psVar19[-0x20];
      iVar12 = *piVar22 * (int)psVar19[-0x20] - piVar22[0x20] * (int)*psVar19;
      iVar2 = piVar22[0x30] * (int)psVar19[0x10] + piVar22[0x10] * (int)sVar15;
      iVar3 = piVar22[0x28] * (int)psVar19[8] + piVar22[0x18] * (int)psVar19[-8];
      iVar13 = piVar22[0x28] * (int)psVar19[8] - piVar22[0x18] * (int)psVar19[-8];
      iVar4 = piVar22[0x38] * (int)psVar19[0x18] + iVar11;
      iVar11 = iVar11 - piVar22[0x38] * (int)psVar19[0x18];
      iVar5 = iVar4 + iVar3;
      iVar6 = iVar2 + iVar1;
      iVar1 = iVar1 - iVar2;
      iVar2 = (int)((ulong)((long)(piVar22[0x10] * (int)sVar15 - piVar22[0x30] * (int)psVar19[0x10])
                           * 0x16a) >> 8) - iVar2;
      puVar18[0x38] = iVar6 - iVar5;
      iVar7 = iVar2 + iVar12;
      iVar12 = iVar12 - iVar2;
      iVar17 = (int)((ulong)((long)(iVar11 + iVar13) * 0x1d9) >> 8);
      iVar2 = ((int)((ulong)((long)iVar13 * -0x29d) >> 8) - iVar5) + iVar17;
      *puVar18 = iVar5 + iVar6;
      iVar4 = (int)((ulong)((long)(iVar4 - iVar3) * 0x16a) >> 8) - iVar2;
      iVar3 = iVar4 + ((int)((ulong)((long)iVar11 * 0x115) >> 8) - iVar17);
      puVar18[0x30] = iVar7 - iVar2;
      puVar18[0x28] = iVar12 - iVar4;
      uVar23 = iVar1 - iVar3;
      puVar18[0x20] = iVar3 + iVar1;
      lVar16 = 0x18;
      puVar18[8] = iVar2 + iVar7;
      puVar18[0x10] = iVar4 + iVar12;
    }
    uVar21 = uVar21 - 1;
    puVar18[lVar16] = uVar23;
    puVar18 = puVar18 + 1;
    piVar22 = piVar22 + 1;
    psVar19 = psVar19 + 1;
  } while (1 < uVar21);
  lVar16 = 0;
  lVar20 = lVar20 + 0x80;
  puVar18 = local_148 + 4;
  do {
    uVar21 = puVar18[-3];
    uVar23 = puVar18[-2];
    pbVar8 = (byte *)(*(long *)(param_4 + lVar16) + (param_5 & 0xffffffff));
    if (((uVar21 == 0 && uVar23 == 0) && (uVar23 = 0, puVar18[-1] == 0)) &&
       ((uVar23 = 0, *puVar18 == 0 &&
        ((uVar23 = 0, puVar18[1] == 0 && (uVar23 = 0, puVar18[2] == 0)))))) {
      uVar23 = 0;
      if (puVar18[3] != 0) goto LAB_00ee81dc;
      bVar10 = *(byte *)(lVar20 + (ulong)(puVar18[-4] >> 5 & 0x3ff));
      *pbVar8 = bVar10;
      iVar1 = (uint)bVar10 * 0x1010101;
      pbVar8[7] = (byte)iVar1;
      *(short *)(pbVar8 + 5) = (short)iVar1;
      *(int *)(pbVar8 + 1) = iVar1;
    }
    else {
LAB_00ee81dc:
      uVar9 = puVar18[2];
      iVar1 = *puVar18 + puVar18[-4];
      iVar12 = puVar18[-4] - *puVar18;
      iVar2 = uVar9 + uVar23;
      iVar3 = puVar18[-1] + puVar18[1];
      iVar11 = puVar18[1] - puVar18[-1];
      iVar4 = puVar18[3] + uVar21;
      iVar13 = uVar21 - puVar18[3];
      iVar5 = iVar2 + iVar1;
      iVar6 = iVar4 + iVar3;
      iVar1 = iVar1 - iVar2;
      *pbVar8 = *(byte *)(lVar20 + (ulong)((uint)(iVar6 + iVar5) >> 5 & 0x3ff));
      iVar2 = (int)((ulong)((long)(int)(uVar23 - uVar9) * 0x16a) >> 8) - iVar2;
      iVar7 = iVar2 + iVar12;
      iVar17 = (int)((ulong)((long)(iVar13 + iVar11) * 0x1d9) >> 8);
      iVar11 = ((int)((ulong)((long)iVar11 * -0x29d) >> 8) - iVar6) + iVar17;
      pbVar8[7] = *(byte *)(lVar20 + (ulong)((uint)(iVar5 - iVar6) >> 5 & 0x3ff));
      iVar12 = iVar12 - iVar2;
      pbVar8[1] = *(byte *)(lVar20 + (ulong)((uint)(iVar11 + iVar7) >> 5 & 0x3ff));
      iVar3 = (int)((ulong)((long)(iVar4 - iVar3) * 0x16a) >> 8) - iVar11;
      pbVar8[6] = *(byte *)(lVar20 + (ulong)((uint)(iVar7 - iVar11) >> 5 & 0x3ff));
      pbVar8[2] = *(byte *)(lVar20 + (ulong)((uint)(iVar3 + iVar12) >> 5 & 0x3ff));
      iVar2 = iVar3 + ((int)((ulong)((long)iVar13 * 0x115) >> 8) - iVar17);
      pbVar8[5] = *(byte *)(lVar20 + (ulong)((uint)(iVar12 - iVar3) >> 5 & 0x3ff));
      pbVar8[4] = *(byte *)(lVar20 + (ulong)((uint)(iVar2 + iVar1) >> 5 & 0x3ff));
      pbVar8[3] = *(byte *)(lVar20 + (ulong)((uint)(iVar1 - iVar2) >> 5 & 0x3ff));
    }
    lVar16 = lVar16 + 8;
    puVar18 = puVar18 + 8;
    if (lVar16 == 0x40) {
      if (*(long *)(lVar14 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}

