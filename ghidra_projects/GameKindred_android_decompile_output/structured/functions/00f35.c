// functions/00f35 — 11 functions
#include "libGameKindred.h"




void FUN_00f351f4(float param_1,ushort *param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint uVar10;
  float fVar11;
  
  uVar10 = *(uint *)(param_2 + 0x100);
  if (uVar10 != 0) {
    uVar7 = 0;
    piVar1 = (int *)(param_3 + 0x84004);
    puVar8 = param_2;
    puVar9 = param_2;
    do {
      uVar3 = *puVar9;
      lVar2 = param_3 + (ulong)uVar3 * 4;
      fVar11 = *(float *)(lVar2 + 0x50000);
      if ((fVar11 == -1.0) || (param_1 <= fVar11 + *(float *)(lVar2 + 0x48000))) {
        if (puVar9 != puVar8) {
          *puVar8 = uVar3;
        }
        puVar8 = puVar8 + 1;
      }
      else {
        do {
          while (*piVar1 != 0) {
            ClearExclusiveLocal();
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = 100;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        iVar4 = *(int *)(param_3 + 0x84000);
        *(ushort *)(param_3 + (long)iVar4 * 2 + 0x80000) = uVar3;
        *(int *)(param_3 + 0x84000) = iVar4 + 1;
        *piVar1 = 0;
        uVar10 = *(uint *)(param_2 + 0x100);
      }
      uVar7 = uVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar7 < uVar10);
    *(int *)(param_2 + 0x100) = (int)((ulong)((long)puVar8 - (long)param_2) >> 1);
  }
  return;
}




void FUN_00f352b8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  undefined2 *puVar13;
  long lVar14;
  
  if ((*(long *)(param_3 + 0x288) != 0) &&
     (lVar14 = *(long *)(param_3 + 0x288) + -0xc0, lVar14 != 0)) {
    piVar3 = (int *)(param_4 + 0x84004);
    do {
      uVar6 = *(uint *)(param_3 + 0x200);
      if (0xff < (int)uVar6) {
        return;
      }
      iVar11 = thunk_FUN_00f39af8(param_1,param_2,lVar14,param_6);
      if (iVar11 != 0) {
        iVar7 = *(int *)(param_3 + 0x200);
        puVar4 = (undefined2 *)(param_3 + (ulong)uVar6 * 2);
        do {
          while (*piVar3 != 0) {
            ClearExclusiveLocal();
          }
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar10) {
            *piVar3 = 100;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        iVar8 = *(int *)(param_4 + 0x84000);
        lVar12 = (long)iVar8;
        iVar5 = 0x100 - iVar7;
        if (iVar7 + iVar11 < 0x101) {
          iVar5 = iVar11;
        }
        if (iVar8 == 0) {
          *piVar3 = 0;
        }
        else {
          iVar11 = iVar8;
          if (iVar5 <= iVar8) {
            iVar11 = iVar5;
          }
          iVar7 = iVar8 - iVar11;
          if (iVar7 < iVar8) {
            puVar13 = puVar4;
            do {
              lVar2 = lVar12 * 2;
              lVar12 = lVar12 + -1;
              *puVar13 = *(undefined2 *)(param_4 + 0x7fffe + lVar2);
              puVar13 = puVar13 + 1;
            } while (iVar7 < lVar12);
          }
          *(int *)(param_4 + 0x84000) = iVar7;
          *piVar3 = 0;
          if (iVar11 != 0) {
            thunk_FUN_00f39bf8(param_1,lVar14,param_4,iVar11,puVar4,param_5,param_6);
            *(int *)(param_3 + 0x200) = *(int *)(param_3 + 0x200) + iVar11;
          }
        }
      }
      plVar1 = (long *)(lVar14 + 0xc0);
      lVar14 = 0;
      if (*plVar1 != 0) {
        lVar14 = *plVar1 + -0xc0;
      }
    } while (lVar14 != 0);
  }
  return;
}




void FUN_00f35424(undefined1 param_1 [16],float param_2,long param_3,long param_4,undefined8 param_5
                 )

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  float *pfVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  float fVar12;
  undefined8 uVar13;
  float afStack_50 [2];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  pfVar11 = (float *)((long)afStack_50 - ((ulong)*(uint *)(param_3 + 0x200) * 4 + 0xf & 0x7fffffff0)
                     );
  iVar6 = (**(code **)(param_3 + 600))
                    ((ulong)*(uint *)(param_3 + 0x200),pfVar11,param_3,param_4,param_5);
  if (iVar6 == 1) {
    fVar12 = 1.0 - *pfVar11 * param_2;
    if ((fVar12 != 1.0) && (uVar2 = *(uint *)(param_3 + 0x200), uVar2 != 0)) {
      lVar7 = 0;
      do {
        uVar3 = *(ushort *)(param_3 + lVar7 * 2);
        lVar10 = param_4 + 0x18000;
        lVar7 = lVar7 + 1;
        lVar9 = (ulong)uVar3 * 0xc;
        uVar13 = *(undefined8 *)(lVar10 + lVar9);
        uVar1 = (uint)uVar3 * 3 + 2;
        *(ulong *)(lVar10 + lVar9) =
             CONCAT44(fVar12 * (float)((ulong)uVar13 >> 0x20),fVar12 * (float)uVar13);
        *(float *)(lVar10 + (ulong)uVar1 * 4) = fVar12 * *(float *)(lVar10 + (ulong)uVar1 * 4);
      } while ((uint)lVar7 < uVar2);
    }
  }
  else {
    uVar2 = *(uint *)(param_3 + 0x200);
    if (uVar2 != 0) {
      uVar8 = 0;
      do {
        uVar3 = *(ushort *)(param_3 + uVar8 * 2);
        pfVar4 = pfVar11 + uVar8;
        lVar7 = param_4 + 0x18000;
        uVar8 = uVar8 + 1;
        lVar10 = (ulong)uVar3 * 0xc;
        uVar13 = *(undefined8 *)(lVar7 + lVar10);
        fVar12 = 1.0 - *pfVar4 * param_2;
        uVar1 = (uint)uVar3 * 3 + 2;
        *(ulong *)(lVar7 + lVar10) =
             CONCAT44((float)((ulong)uVar13 >> 0x20) * fVar12,(float)uVar13 * fVar12);
        *(float *)(lVar7 + (ulong)uVar1 * 4) = fVar12 * *(float *)(lVar7 + (ulong)uVar1 * 4);
      } while (uVar8 < uVar2);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f35574(undefined1 param_1 [16],undefined8 param_2,long param_3,long param_4,
                 undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 local_50;
  float afStack_48 [4];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  lVar7 = -((ulong)*(uint *)(param_3 + 0x200) * 0xc + 0xf & 0x1ffffffff0);
  puVar12 = (undefined8 *)((long)afStack_48 + lVar7 + -8);
  local_50 = param_2;
  iVar6 = (**(code **)(param_3 + 0x260))
                    ((ulong)*(uint *)(param_3 + 0x200),puVar12,param_3,param_4,param_5);
  fVar15 = (float)local_50;
  if (iVar6 == 1) {
    fVar13 = (float)*puVar12 * fVar15;
    fVar14 = (float)((ulong)*puVar12 >> 0x20) * fVar15;
    fVar15 = *(float *)((long)afStack_48 + lVar7) * fVar15;
    if ((fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15 != 0.0) &&
       (uVar2 = *(uint *)(param_3 + 0x200), uVar2 != 0)) {
      lVar7 = 0;
      do {
        uVar3 = *(ushort *)(param_3 + lVar7 * 2);
        lVar11 = param_4 + 0x18000;
        lVar7 = lVar7 + 1;
        lVar10 = (ulong)uVar3 * 0xc;
        uVar16 = *(undefined8 *)(lVar11 + lVar10);
        uVar9 = (uint)uVar3 * 3 + 2;
        *(ulong *)(lVar11 + lVar10) =
             CONCAT44(fVar14 + (float)((ulong)uVar16 >> 0x20),fVar13 + (float)uVar16);
        *(float *)(lVar11 + (ulong)uVar9 * 4) = fVar15 + *(float *)(lVar11 + (ulong)uVar9 * 4);
      } while ((uint)lVar7 < uVar2);
    }
  }
  else {
    uVar2 = *(uint *)(param_3 + 0x200);
    if (uVar2 != 0) {
      uVar8 = 0;
      uVar9 = 2;
      do {
        uVar3 = *(ushort *)(param_3 + uVar8 * 2);
        lVar7 = param_4 + 0x18000;
        lVar11 = (ulong)uVar3 * 0xc;
        uVar16 = *(undefined8 *)(lVar7 + lVar11);
        uVar1 = (uint)uVar3 * 3 + 2;
        uVar8 = uVar8 + 1;
        *(ulong *)(lVar7 + lVar11) =
             CONCAT44((float)((ulong)uVar16 >> 0x20) +
                      fVar15 * *(float *)((long)puVar12 + (ulong)(uVar9 - 1) * 4),
                      (float)uVar16 + fVar15 * *(float *)((long)puVar12 + (ulong)(uVar9 - 2) * 4));
        uVar4 = (ulong)uVar9;
        uVar9 = uVar9 + 3;
        *(float *)(lVar7 + (ulong)uVar1 * 4) =
             *(float *)(lVar7 + (ulong)uVar1 * 4) + *(float *)((long)puVar12 + uVar4 * 4) * fVar15;
      } while (uVar8 < uVar2);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f356f0(float param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar2 = *(uint *)(param_2 + 0x200);
  if (uVar2 != 0) {
    lVar4 = 0;
    do {
      uVar3 = *(ushort *)(param_2 + lVar4 * 2);
      lVar4 = lVar4 + 1;
      lVar5 = (ulong)uVar3 * 0xc;
      uVar6 = *(undefined8 *)(param_3 + 0x18000 + lVar5);
      uVar1 = (uint)uVar3 * 3 + 2;
      *(ulong *)(param_3 + lVar5) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_3 + lVar5) >> 0x20) +
                    param_1 * (float)((ulong)uVar6 >> 0x20),
                    (float)*(undefined8 *)(param_3 + lVar5) + param_1 * (float)uVar6);
      *(float *)(param_3 + (ulong)uVar1 * 4) =
           *(float *)(param_3 + (ulong)uVar1 * 4) +
           *(float *)(param_3 + 0x18000 + (ulong)uVar1 * 4) * param_1;
    } while ((uint)lVar4 < uVar2);
  }
  return;
}




void FUN_00f3574c(undefined1 param_1 [16],undefined8 param_2,long param_3,long param_4,
                 undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 local_50;
  float afStack_48 [4];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  lVar7 = -((ulong)*(uint *)(param_3 + 0x200) * 0xc + 0xf & 0x1ffffffff0);
  puVar11 = (undefined8 *)((long)afStack_48 + lVar7 + -8);
  local_50 = param_2;
  iVar6 = (**(code **)(param_3 + 0x268))
                    ((ulong)*(uint *)(param_3 + 0x200),puVar11,param_3,param_4,param_5);
  fVar14 = (float)local_50;
  if (iVar6 == 1) {
    uVar2 = *(uint *)(param_3 + 0x200);
    if (uVar2 != 0) {
      uVar12 = *puVar11;
      fVar13 = *(float *)((long)afStack_48 + lVar7);
      lVar7 = 0;
      do {
        uVar3 = *(ushort *)(param_3 + lVar7 * 2);
        lVar7 = lVar7 + 1;
        lVar10 = (ulong)uVar3 * 0xc;
        uVar15 = *(undefined8 *)(param_4 + lVar10);
        uVar9 = (uint)uVar3 * 3 + 2;
        *(ulong *)(param_4 + lVar10) =
             CONCAT44((float)((ulong)uVar12 >> 0x20) * fVar14 + (float)((ulong)uVar15 >> 0x20),
                      (float)uVar12 * fVar14 + (float)uVar15);
        *(float *)(param_4 + (ulong)uVar9 * 4) =
             fVar13 * fVar14 + *(float *)(param_4 + (ulong)uVar9 * 4);
      } while ((uint)lVar7 < uVar2);
    }
  }
  else {
    uVar2 = *(uint *)(param_3 + 0x200);
    if (uVar2 != 0) {
      uVar8 = 0;
      uVar9 = 2;
      do {
        uVar3 = *(ushort *)(param_3 + uVar8 * 2);
        lVar7 = (ulong)uVar3 * 0xc;
        uVar12 = *(undefined8 *)(param_4 + lVar7);
        uVar1 = (uint)uVar3 * 3 + 2;
        uVar8 = uVar8 + 1;
        *(ulong *)(param_4 + lVar7) =
             CONCAT44((float)((ulong)uVar12 >> 0x20) +
                      fVar14 * *(float *)((long)puVar11 + (ulong)(uVar9 - 1) * 4),
                      (float)uVar12 + fVar14 * *(float *)((long)puVar11 + (ulong)(uVar9 - 2) * 4));
        uVar4 = (ulong)uVar9;
        uVar9 = uVar9 + 3;
        *(float *)(param_4 + (ulong)uVar1 * 4) =
             *(float *)(param_4 + (ulong)uVar1 * 4) + *(float *)((long)puVar11 + uVar4 * 4) * fVar14
        ;
      } while (uVar8 < uVar2);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f358a8(undefined1 param_1 [16],float param_2,long param_3,long param_4,undefined8 param_5
                 )

{
  long lVar1;
  uint uVar2;
  float *pfVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float afStack_50 [2];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  pfVar8 = (float *)((long)afStack_50 - ((ulong)*(uint *)(param_3 + 0x200) * 4 + 0xf & 0x7fffffff0))
  ;
  iVar5 = (**(code **)(param_3 + 0x270))
                    ((ulong)*(uint *)(param_3 + 0x200),pfVar8,param_3,param_4,param_5);
  if (iVar5 == 1) {
    if ((0.01 <= ABS(*pfVar8)) && (uVar2 = *(uint *)(param_3 + 0x200), uVar2 != 0)) {
      param_2 = *pfVar8 * param_2;
      lVar6 = 0;
      do {
        lVar1 = lVar6 * 2;
        lVar6 = lVar6 + 1;
        lVar1 = param_4 + (ulong)*(ushort *)(param_3 + lVar1) * 8;
        uVar10 = *(undefined8 *)(lVar1 + 0x30000);
        fVar9 = param_2 + (float)uVar10;
        fVar11 = param_2 + (float)((ulong)uVar10 >> 0x20);
        *(ulong *)(lVar1 + 0x30000) =
             CONCAT44(fVar11,fVar9) & CONCAT44(-(uint)(0.0 < fVar11),-(uint)(0.0 < fVar9));
      } while ((uint)lVar6 < uVar2);
    }
  }
  else {
    uVar2 = *(uint *)(param_3 + 0x200);
    if (uVar2 != 0) {
      uVar7 = 0;
      do {
        lVar6 = uVar7 * 2;
        pfVar3 = pfVar8 + uVar7;
        uVar7 = uVar7 + 1;
        lVar6 = param_4 + (ulong)*(ushort *)(param_3 + lVar6) * 8;
        uVar10 = *(undefined8 *)(lVar6 + 0x30000);
        fVar9 = (float)uVar10 + *pfVar3 * param_2;
        fVar11 = (float)((ulong)uVar10 >> 0x20) + *pfVar3 * param_2;
        *(ulong *)(lVar6 + 0x30000) =
             CONCAT44(fVar11,fVar9) & CONCAT44(-(uint)(0.0 < fVar11),-(uint)(0.0 < fVar9));
      } while (uVar7 < uVar2);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f359e0(undefined1 param_1 [16],float param_2,long param_3,long param_4,undefined8 param_5
                 )

{
  long lVar1;
  uint uVar2;
  float *pfVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  float fVar9;
  float afStack_50 [2];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  pfVar8 = (float *)((long)afStack_50 - ((ulong)*(uint *)(param_3 + 0x200) * 4 + 0xf & 0x7fffffff0))
  ;
  iVar5 = (**(code **)(param_3 + 0x278))
                    ((ulong)*(uint *)(param_3 + 0x200),pfVar8,param_3,param_4,param_5);
  if (iVar5 == 1) {
    fVar9 = *pfVar8;
    if ((0.01 <= ABS(fVar9)) && (uVar2 = *(uint *)(param_3 + 0x200), uVar2 != 0)) {
      lVar6 = 0;
      do {
        lVar1 = lVar6 * 2;
        lVar6 = lVar6 + 1;
        lVar1 = param_4 + (ulong)*(ushort *)(param_3 + lVar1) * 4;
        *(float *)(lVar1 + 0x40000) = fVar9 * param_2 + *(float *)(lVar1 + 0x40000);
      } while ((uint)lVar6 < uVar2);
    }
  }
  else {
    uVar2 = *(uint *)(param_3 + 0x200);
    if (uVar2 != 0) {
      uVar7 = 0;
      do {
        lVar6 = uVar7 * 2;
        pfVar3 = pfVar8 + uVar7;
        uVar7 = uVar7 + 1;
        lVar6 = param_4 + (ulong)*(ushort *)(param_3 + lVar6) * 4;
        *(float *)(lVar6 + 0x40000) = *(float *)(lVar6 + 0x40000) + *pfVar3 * param_2;
      } while (uVar7 < uVar2);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f35b00(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  long alStack_40 [2];
  
  lVar6 = tpidr_el0;
  alStack_40[1] = *(long *)(lVar6 + 0x28);
  uVar8 = (ulong)*(uint *)(param_1 + 0x200);
  plVar11 = alStack_40 + uVar8 * -2;
  iVar7 = (**(code **)(param_1 + 0x280))(uVar8,plVar11,param_1,param_2,param_3);
  if (iVar7 == 1) {
    uVar4 = *(uint *)(param_1 + 0x200);
    if (uVar4 != 0) {
      lVar2 = *plVar11;
      lVar3 = alStack_40[uVar8 * -2 + 1];
      lVar10 = 0;
      do {
        uVar5 = *(ushort *)(param_1 + lVar10 * 2);
        lVar10 = lVar10 + 1;
        *(long *)(param_2 + 0x58000 + (ulong)uVar5 * 0x10) = lVar2;
        *(long *)(param_2 + 0x58000 + (ulong)((uint)uVar5 << 2 | 2) * 4) = lVar3;
      } while ((uint)lVar10 < uVar4);
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x200);
    if (uVar4 != 0) {
      uVar8 = 0;
      uVar9 = 3;
      do {
        uVar5 = *(ushort *)(param_1 + uVar8 * 2);
        lVar10 = param_2 + 0x58000;
        uVar8 = uVar8 + 1;
        *(undefined4 *)(lVar10 + (ulong)uVar5 * 0x10) =
             *(undefined4 *)((long)plVar11 + (ulong)(uVar9 - 3) * 4);
        *(undefined4 *)(lVar10 + (ulong)((uint)uVar5 << 2 | 1) * 4) =
             *(undefined4 *)((long)plVar11 + (ulong)(uVar9 - 2) * 4);
        *(undefined4 *)(lVar10 + (ulong)((uint)uVar5 << 2 | 2) * 4) =
             *(undefined4 *)((long)plVar11 + (ulong)(uVar9 - 1) * 4);
        uVar1 = (ulong)uVar9;
        uVar9 = uVar9 + 4;
        *(undefined4 *)(lVar10 + (ulong)((uint)uVar5 << 2 | 3) * 4) =
             *(undefined4 *)((long)plVar11 + uVar1 * 4);
      } while (uVar8 < uVar4);
    }
  }
  if (*(long *)(lVar6 + 0x28) != alStack_40[1]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f35c30(ushort *param_1,long param_2,long param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  ushort *puVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_d0 [6];
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  long local_98;
  
  lVar6 = tpidr_el0;
  local_98 = *(long *)(lVar6 + 0x28);
  if (*(int *)(param_1 + 0x100) != 0) {
    lVar9 = 0;
    fVar21 = 3.4028235e+38;
    fVar20 = -3.4028235e+38;
    fVar13 = fVar21;
    fVar17 = fVar21;
    fVar15 = fVar20;
    fVar19 = fVar20;
    do {
      uVar3 = param_1[lVar9];
      uVar11 = *(undefined8 *)(param_2 + (ulong)uVar3 * 8 + 0x30000);
      fVar18 = *(float *)(param_2 + (ulong)uVar3 * 0xc);
      fVar10 = (float)uVar11 * 0.5;
      fVar12 = (float)((ulong)uVar11 >> 0x20) * 0.5;
      fVar22 = *(float *)(param_2 + (ulong)((uint)uVar3 * 3 + 1) * 4);
      fVar23 = *(float *)(param_2 + (ulong)((uint)uVar3 * 3 + 2) * 4);
      fVar12 = fVar10 * fVar10 + fVar12 * fVar12;
      fVar10 = SQRT(fVar12);
      if (NAN(fVar10)) {
        fVar10 = sqrtf(fVar12);
      }
      fVar12 = fVar18 - fVar10;
      fVar14 = fVar22 - fVar10;
      fVar16 = fVar23 - fVar10;
      if (fVar12 <= fVar13) {
        fVar13 = fVar12;
      }
      fVar18 = fVar18 + fVar10;
      uVar1 = *(uint *)(param_1 + 0x100);
      if (fVar14 <= fVar17) {
        fVar17 = fVar14;
      }
      fVar22 = fVar22 + fVar10;
      if (fVar16 <= fVar21) {
        fVar21 = fVar16;
      }
      fVar23 = fVar23 + fVar10;
      if (fVar15 <= fVar18) {
        fVar15 = fVar18;
      }
      lVar9 = lVar9 + 1;
      if (fVar19 <= fVar22) {
        fVar19 = fVar22;
      }
      if (fVar20 <= fVar23) {
        fVar20 = fVar23;
      }
    } while ((uint)lVar9 < uVar1);
    uVar2 = *(uint *)(param_1 + 0x110);
    local_d0[0] = fVar13;
    local_d0[1] = fVar17;
    local_d0[2] = fVar21;
    local_d0[3] = fVar15;
    local_d0[4] = fVar19;
    local_d0[5] = fVar20;
    if ((uVar2 & 0xc00) == 0x400) {
      local_a0 = fVar21;
      local_a8 = CONCAT44(fVar17,fVar13);
      local_b0 = fVar20;
      local_b8 = CONCAT44(fVar19,fVar15);
      local_d0[0] = *(float *)(param_3 + 0x30);
      local_d0[1] = *(float *)(param_3 + 0x34);
      local_d0[2] = *(float *)(param_3 + 0x38);
      local_d0[4] = *(float *)(param_3 + 0x34);
      local_d0[5] = *(float *)(param_3 + 0x38);
      lVar9 = 0;
      local_d0[3] = local_d0[0];
      fVar21 = local_d0[0];
      fVar13 = local_d0[0];
      while( true ) {
        lVar8 = 0;
        do {
          fVar15 = *(float *)(param_3 + lVar8 * 4);
          pfVar4 = (float *)((long)&local_a8 + lVar8);
          pfVar5 = (float *)((long)&local_b8 + lVar8);
          lVar8 = lVar8 + 4;
          fVar17 = fVar15 * *pfVar4;
          fVar15 = fVar15 * *pfVar5;
          fVar20 = fVar15;
          if (fVar15 <= fVar17) {
            fVar20 = fVar17;
            fVar17 = fVar15;
          }
          fVar13 = fVar13 + fVar17;
          fVar21 = fVar20 + fVar21;
        } while (lVar8 != 0xc);
        local_d0[lVar9] = fVar13;
        local_d0[lVar9 + 3] = fVar21;
        lVar8 = lVar9 + 1;
        if (lVar8 == 3) break;
        fVar13 = local_d0[lVar8];
        fVar21 = local_d0[lVar9 + 4];
        param_3 = param_3 + 4;
        lVar9 = lVar8;
      }
    }
    if ((uVar2 & 0xf) - 5 < 2) {
      fVar21 = 0.0;
      puVar7 = param_1;
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        fVar13 = *(float *)(param_2 + ((ulong)*puVar7 << 3 | 4) + 0x30000) * 0.5;
        fVar13 = fVar13 * fVar13;
        if (fVar21 <= fVar13) {
          fVar21 = fVar13;
        }
        puVar7 = puVar7 + 1;
      }
      fVar13 = SQRT(fVar21);
      if (NAN(fVar13)) {
        fVar13 = sqrtf(fVar21);
      }
      fVar21 = *(float *)(param_1 + 0x112) - fVar13;
      if (fVar21 <= local_d0[0]) {
        local_d0[0] = fVar21;
      }
      fVar21 = *(float *)(param_1 + 0x114) - fVar13;
      if (fVar21 <= local_d0[1]) {
        local_d0[1] = fVar21;
      }
      fVar21 = *(float *)(param_1 + 0x116) - fVar13;
      if (fVar21 <= local_d0[2]) {
        local_d0[2] = fVar21;
      }
      fVar21 = fVar13 + *(float *)(param_1 + 0x112);
      fVar17 = fVar13 + *(float *)(param_1 + 0x114);
      fVar13 = fVar13 + *(float *)(param_1 + 0x116);
      if (local_d0[3] <= fVar21) {
        local_d0[3] = fVar21;
      }
      if (local_d0[4] <= fVar17) {
        local_d0[4] = fVar17;
      }
      if (local_d0[5] <= fVar13) {
        local_d0[5] = fVar13;
      }
    }
    fVar13 = *param_4;
    fVar21 = param_4[3];
    if (fVar13 <= fVar21) {
      fVar20 = param_4[1];
      fVar17 = param_4[4];
      if (fVar20 <= fVar17) {
        fVar19 = param_4[2];
        fVar15 = param_4[5];
        if (fVar19 <= fVar15) {
          if (local_d0[0] <= fVar13) {
            fVar13 = local_d0[0];
          }
          if (local_d0[1] <= fVar20) {
            fVar20 = local_d0[1];
          }
          if (local_d0[2] <= fVar19) {
            fVar19 = local_d0[2];
          }
          *param_4 = fVar13;
          param_4[1] = fVar20;
          param_4[2] = fVar19;
          if (fVar21 <= local_d0[3]) {
            fVar21 = local_d0[3];
          }
          if (fVar17 <= local_d0[4]) {
            fVar17 = local_d0[4];
          }
          if (fVar15 <= local_d0[5]) {
            fVar15 = local_d0[5];
          }
          param_4[3] = fVar21;
          param_4[4] = fVar17;
          param_4[5] = fVar15;
          goto LAB_00f35f34;
        }
      }
    }
    *(ulong *)(param_4 + 4) = CONCAT44(local_d0[5],local_d0[4]);
    *(ulong *)(param_4 + 2) = CONCAT44(local_d0[3],local_d0[2]);
    *(ulong *)param_4 = CONCAT44(local_d0[1],local_d0[0]);
  }
LAB_00f35f34:
  if (*(long *)(lVar6 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f35fc8(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}

