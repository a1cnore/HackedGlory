// functions/01b14 — 17 functions
#include "libGameKindred.h"




bool thunk_FUN_01b14098(ulong *param_1,ulong param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_1 <= param_2) {
    bVar1 = param_2 < *param_1 + (ulong)(uint)param_1[3];
  }
  return bVar1;
}




void FUN_01b14008(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  FUN_01b14018();
  return;
}




void FUN_01b14018(long *param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)0x0;
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(param_2 + 0xfU & 0xfffffffffffffff0);
  }
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 3) = param_3;
  *puVar2 = (int)puVar2;
  *(undefined8 *)(puVar2 + 1) = 0x10000000;
  *(undefined8 *)(puVar2 + 3) = 0xffffffffffffffff;
  iVar3 = (int)*param_1;
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = iVar3 + 0xfU & 0xfffffff0;
  }
  *(ulong *)(puVar2 + 1) =
       (ulong)((iVar3 + (int)param_1[3] & 0xfffffff0U) - uVar1 >> 4) | 0x10000000;
  param_1[1] = (long)puVar2;
  param_1[2] = (long)puVar2;
  return;
}




void FUN_01b1407c(undefined4 *param_1)

{
  *param_1 = (int)param_1;
  *(undefined8 *)(param_1 + 1) = 0x10000000;
  *(undefined8 *)(param_1 + 3) = 0xffffffffffffffff;
  return;
}




void FUN_01b14094(void)

{
  return;
}




bool FUN_01b14098(ulong *param_1,ulong param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_1 <= param_2) {
    bVar1 = param_2 < *param_1 + (ulong)(uint)param_1[3];
  }
  return bVar1;
}




void FUN_01b140c0(void)

{
  return;
}




void FUN_01b140c4(void)

{
  return;
}




void FUN_01b140c8(void)

{
  return;
}




void FUN_01b140cc(undefined4 *param_1)

{
  *param_1 = (int)param_1;
  *(undefined8 *)(param_1 + 1) = 0;
  return;
}




void FUN_01b140d8(undefined4 *param_1)

{
  *param_1 = (int)param_1;
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  return;
}




long FUN_01b140e8(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = param_1[2];
  if (param_3 < 0x11) {
    param_3 = 0x10;
  }
  uVar3 = (ulong)param_3;
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    if (lVar2 == -0x10) {
      lVar4 = 0;
    }
    else {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = (lVar2 + 0xfU) / uVar3;
      }
      lVar4 = uVar3 + uVar1 * uVar3;
    }
    if (lVar4 + (param_2 & 0xffffffff) <= (*(ulong *)(lVar2 + 4) & 0xfffffff) * 0x10 + lVar2) break;
    if (*(uint *)(lVar2 + 0xc) == 0xffffffff) {
      return 0;
    }
    lVar2 = *param_1 + (ulong)*(uint *)(lVar2 + 0xc);
  }
  lVar2 = FUN_01b141c4(param_1,lVar2,param_2 & 0xffffffff);
  return lVar2 + 0x10;
}




bool FUN_01b14180(undefined8 param_1,long param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_2 == -0x10) {
    lVar3 = 0;
  }
  else {
    uVar2 = (ulong)param_4;
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = (param_2 + 0xfU) / uVar2;
    }
    lVar3 = (ulong)param_4 + uVar1 * uVar2;
  }
  return lVar3 + (ulong)param_3 <= (*(ulong *)(param_2 + 4) & 0xfffffff) * 0x10 + param_2;
}




int * FUN_01b141c4(long *param_1,int *param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  int *local_60 [4];
  long local_40;
  int *piStack_38;
  int *local_30 [3];
  long local_18;
  
  lVar2 = tpidr_el0;
  local_18 = *(long *)(lVar2 + 0x28);
  param_4 = param_4 & 0xffffffff;
  uVar13 = *(ulong *)(param_2 + 1);
  piVar3 = param_2 + (uVar13 & 0xfffffff) * 4;
  uVar14 = 0;
  if (param_4 != 0) {
    uVar14 = ((long)piVar3 - (param_3 & 0xffffffff)) / param_4;
  }
  lVar9 = uVar14 * param_4;
  piVar5 = (int *)(lVar9 + -0x10);
  uVar14 = (long)piVar5 - (long)param_2;
  piVar10 = (int *)0x0;
  if (param_2 <= piVar5) {
    lVar7 = *param_1;
    uVar6 = uVar13 >> 0x1c & 0xfffffff0;
    local_40 = 0;
    if ((int)uVar6 != 0) {
      local_40 = (long)param_2 - uVar6;
    }
    local_30[2] = piVar3;
    if ((int *)(lVar7 + (ulong)*(uint *)(param_1 + 3) & 0xfffffffffffffff0) <= piVar3) {
      local_30[2] = (int *)0x0;
    }
    local_60[0] = (int *)0x0;
    if (param_2[4] != 0xffffffff) {
      local_60[0] = (int *)(lVar7 + (ulong)(uint)param_2[4]);
    }
    piVar8 = (int *)0x0;
    if (param_2[3] != 0xffffffff) {
      piVar8 = (int *)(lVar7 + (ulong)(uint)param_2[3]);
    }
    lVar7 = lVar9 + (param_3 & 0xffffffff);
    piVar10 = (int *)0x0;
    if (lVar7 != 0) {
      piVar10 = (int *)(lVar7 + 0xfU & 0xfffffffffffffff0);
    }
    iVar4 = (int)piVar5;
    if ((uVar14 & 0xffffffe0) == 0) {
      if ((int)uVar14 == 0) {
        param_2 = (int *)0x0;
      }
      else if (local_40 == 0) {
        param_2 = (int *)0x0;
        param_1[1] = (long)piVar5;
      }
      else {
        param_2 = (int *)0x0;
        *(ulong *)(local_40 + 4) =
             *(ulong *)(local_40 + 4) & 0xfffffffff0000000 |
             (ulong)((uint)(iVar4 - (int)local_40) >> 4);
      }
    }
    else {
      *(ulong *)(param_2 + 1) = uVar13 & 0xfffffffff0000000 | uVar14 >> 4 & 0xfffffff;
    }
    if (((long)piVar3 - (long)piVar10 & 0xffffffe0U) == 0) {
      piVar10 = (int *)0x0;
    }
    else {
      *(ulong *)(piVar10 + 1) = (ulong)((long)piVar3 - (long)piVar10) >> 4 & 0xfffffff | 0x10000000;
      *piVar10 = (int)piVar10;
      piVar10[3] = -1;
      piVar10[4] = -1;
      piVar3 = piVar10;
    }
    *piVar5 = iVar4;
    *(undefined4 *)(lVar9 + -4) = 0;
    *(ulong *)(lVar9 + -0xc) = (ulong)((uint)((int)piVar3 - iVar4) >> 4);
    local_30[0] = piVar5;
    local_30[1] = piVar10;
    if (local_40 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(int *)(local_40 + 4) << 4;
    }
    lVar9 = 0;
    piVar3 = param_2;
    while( true ) {
      if (piVar3 != (int *)0x0) {
        uVar14 = *(ulong *)(piVar3 + 1);
        uVar1 = uVar11 >> 4;
        uVar11 = (int)uVar14 << 4;
        *(ulong *)(piVar3 + 1) =
             uVar14 & 0xf000000000000000 | uVar14 & 0xffffffff | (ulong)uVar1 << 0x20;
      }
      if (lVar9 == 3) break;
      piVar3 = local_30[lVar9];
      lVar9 = lVar9 + 1;
    }
    lVar9 = 0;
    local_60[1] = param_2;
    local_60[2] = piVar10;
    local_60[3] = piVar8;
    piVar3 = param_2;
    piVar12 = local_60[0];
    while( true ) {
      if (piVar3 != (int *)0x0) {
        if (piVar12 == (int *)0x0) {
          iVar4 = -1;
        }
        else {
          iVar4 = (int)piVar12 - (int)*param_1;
        }
        piVar3[4] = iVar4;
        piVar12 = piVar3;
      }
      if (lVar9 == 2) break;
      piVar3 = local_60[lVar9 + 2];
      lVar9 = lVar9 + 1;
    }
    lVar9 = 1;
    while( true ) {
      if (piVar10 != (int *)0x0) {
        if (piVar8 == (int *)0x0) {
          iVar4 = -1;
        }
        else {
          iVar4 = (int)piVar8 - (int)*param_1;
        }
        piVar10[3] = iVar4;
        piVar8 = piVar10;
      }
      if (lVar9 == -1) break;
      piVar10 = local_60[lVar9];
      lVar9 = lVar9 + -1;
    }
    piVar10 = piVar5;
    piStack_38 = param_2;
    if (local_60[0] == (int *)0x0) {
      param_1[2] = (long)piVar8;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return piVar10;
}




void FUN_01b14408(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  
  lVar14 = *param_1;
  piVar6 = (int *)(param_2 + -0x10);
  uVar12 = *(ulong *)(param_2 + -0xc) << 4;
  uVar10 = *(ulong *)(param_2 + -0xc) >> 0x1c & 0xfffffff0;
  uVar1 = (uVar12 & 0xfffffff0) + (long)piVar6;
  lVar11 = 0;
  if ((int)uVar10 != 0) {
    lVar11 = (long)piVar6 - uVar10;
  }
  if ((lVar14 + (ulong)*(uint *)(param_1 + 3) & 0xfffffffffffffff0) <= uVar1) {
    uVar1 = 0;
  }
  if (lVar11 == 0) {
    iVar4 = (int)piVar6;
    piVar6 = (int *)0x0;
    if (lVar14 != 0) {
      piVar6 = (int *)(lVar14 + 0xfU & 0xfffffffffffffff0);
    }
    puVar13 = (ulong *)((ulong)piVar6 | 4);
    uVar10 = (ulong)((uint)(((int)uVar12 + iVar4) - (int)piVar6) >> 4);
    *piVar6 = (int)piVar6;
    piVar6[3] = 0;
    *(ulong *)(piVar6 + 1) = uVar10;
    if (uVar1 != 0) {
      *(ulong *)(uVar1 + 4) = *(ulong *)(uVar1 + 4) & 0xf0000000ffffffff | uVar10 << 0x20;
    }
    uVar15 = 0;
    param_1[1] = (long)piVar6;
  }
  else {
    puVar13 = (ulong *)(param_2 + -0xc);
    uVar15 = *(byte *)(lVar11 + 7) >> 4 & 1;
  }
  uVar10 = *puVar13;
  iVar4 = (int)uVar10 * 0x10;
  if (uVar1 == 0) {
    uVar16 = 0;
  }
  else {
    uVar12 = *(ulong *)(uVar1 + 4);
    uVar16 = (uint)(uVar12 >> 0x1c) & 1;
    if ((uVar16 & uVar15) == 1) {
      uVar7 = *(ulong *)(lVar11 + 4);
      uVar10 = (uVar12 & 0xfffffff) * 0x10 + uVar1;
      uVar15 = iVar4 + (int)uVar7 * 0x10 + (int)uVar12 * 0x10;
      if ((uVar10 == 0) ||
         ((*param_1 + (ulong)*(uint *)(param_1 + 3) & 0xfffffffffffffff0) <= uVar10)) {
        uVar12 = (ulong)(uVar15 >> 4);
      }
      else {
        uVar12 = (ulong)(uVar15 >> 4);
        *(ulong *)(uVar10 + 4) =
             *(ulong *)(uVar10 + 4) & 0xf000000000000000 |
             *(ulong *)(uVar10 + 4) & 0xffffffff | uVar12 << 0x20;
        uVar7 = *(ulong *)(lVar11 + 4);
      }
      *(ulong *)(lVar11 + 4) = uVar7 & 0xfffffffff0000000 | uVar12;
      uVar15 = *(uint *)(uVar1 + 0xc);
      if (uVar15 != 0xffffffff) {
        lVar14 = *param_1 + (ulong)uVar15;
        if (lVar14 != 0) {
          *(int *)(lVar14 + 0x10) = (int)lVar11 - (int)*param_1;
          goto LAB_01b14664;
        }
      }
      uVar15 = 0xffffffff;
LAB_01b14664:
      *(uint *)(lVar11 + 0xc) = uVar15;
      return;
    }
  }
  if (uVar15 != 0) {
    uVar10 = *(ulong *)(lVar11 + 4);
    uVar15 = (uint)(iVar4 + (int)uVar10 * 0x10) >> 4;
    if (uVar1 != 0) {
      *(ulong *)(uVar1 + 4) = *(ulong *)(uVar1 + 4) & 0xf0000000ffffffff | (ulong)uVar15 << 0x20;
      uVar10 = *(ulong *)(lVar11 + 4);
    }
    *(ulong *)(lVar11 + 4) = uVar10 & 0xfffffffff0000000 | (ulong)uVar15;
    return;
  }
  iVar5 = (int)piVar6;
  if (uVar16 != 0) {
    uVar12 = *(ulong *)(uVar1 + 4);
    lVar11 = *param_1;
    uVar15 = *(uint *)(param_1 + 3);
    *piVar6 = iVar5;
    piVar6[1] = 0x10000000;
    piVar6[2] = 0;
    piVar6[3] = -1;
    piVar6[4] = -1;
    uVar7 = (ulong)((uint)(iVar4 + (int)uVar12 * 0x10) >> 4);
    uVar12 = (uVar12 & 0xfffffff) * 0x10 + uVar1;
    *puVar13 = uVar10 & 0xfffffff00000000 | uVar7 | *puVar13 & 0xf0000000f0000000;
    if ((uVar12 != 0) && (uVar12 < (lVar11 + (ulong)uVar15 & 0xfffffffffffffff0))) {
      *(ulong *)(uVar12 + 4) = *(ulong *)(uVar12 + 4) & 0xf0000000ffffffff | uVar7 << 0x20;
    }
    if (*(uint *)(uVar1 + 0x10) == 0xffffffff) {
      lVar11 = 0;
    }
    else {
      lVar11 = *param_1 + (ulong)*(uint *)(uVar1 + 0x10);
    }
    if (*(uint *)(uVar1 + 0xc) == 0xffffffff) {
      lVar14 = 0;
    }
    else {
      lVar14 = *param_1 + (ulong)*(uint *)(uVar1 + 0xc);
    }
    if (lVar11 == 0) {
      param_1[2] = (long)piVar6;
      iVar4 = -1;
    }
    else {
      lVar2 = *param_1;
      *(int *)(lVar11 + 0xc) = iVar5 - (int)lVar2;
      iVar4 = (int)lVar11 - (int)lVar2;
    }
    piVar6[4] = iVar4;
    if (lVar14 == 0) {
      iVar4 = -1;
    }
    else {
      lVar11 = *param_1;
      *(int *)(lVar14 + 0x10) = iVar5 - (int)lVar11;
      iVar4 = (int)lVar14 - (int)lVar11;
    }
    piVar6[3] = iVar4;
    return;
  }
  *piVar6 = iVar5;
  piVar6[1] = 0x10000000;
  piVar6[2] = 0;
  piVar6[3] = -1;
  piVar6[4] = -1;
  *puVar13 = uVar10 & 0xfffffff0fffffff | *puVar13 & 0xf0000000f0000000;
  piVar8 = (int *)param_1[2];
  if ((piVar8 == (int *)0x0) || (piVar6 <= piVar8)) {
    iVar4 = -1;
    param_1[2] = (long)piVar6;
    piVar6[4] = -1;
    if (piVar8 == (int *)0x0) goto LAB_01b1473c;
  }
  else {
    while (piVar9 = piVar8, piVar9[3] != 0xffffffff) {
      piVar8 = (int *)(*param_1 + (ulong)(uint)piVar9[3]);
      bVar3 = piVar8 != (int *)0x0;
      if ((piVar8 == (int *)0x0) || (piVar6 <= piVar8)) goto LAB_01b14704;
    }
    piVar8 = (int *)0x0;
    bVar3 = false;
LAB_01b14704:
    lVar11 = *param_1;
    iVar4 = iVar5 - (int)lVar11;
    if (piVar6 == (int *)0x0) {
      iVar4 = -1;
    }
    piVar9[3] = iVar4;
    piVar6[4] = (int)piVar9 - (int)lVar11;
    if (!bVar3) {
      iVar4 = -1;
      goto LAB_01b1473c;
    }
  }
  iVar4 = (int)piVar8 - (int)*param_1;
  piVar8[4] = iVar5 - (int)*param_1;
LAB_01b1473c:
  piVar6[3] = iVar4;
  return;
}




bool FUN_01b14744(undefined8 param_1,long param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  if (((ulong)param_4 - 1 & param_2 + 0x10U) != 0) {
    return false;
  }
  iVar1 = *(int *)(param_2 + 4) * 0x10;
  return param_3 <= iVar1 - 0x10U && iVar1 - 0x20U < param_3;
}




void FUN_01b14788(pthread_mutex_t *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  timespec local_60;
  timeval local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_60.tv_nsec = 1000000;
  local_60.tv_sec = 0;
  iVar2 = pthread_mutex_trylock(param_1);
  do {
    if (iVar2 != 0x10) {
LAB_01b14824:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar2);
    }
    gettimeofday(&local_48,(__timezone_ptr_t)0x0);
    if ((*param_2 < local_48.tv_sec) ||
       ((local_48.tv_sec == *param_2 && (param_2[1] <= local_48.tv_usec * 1000)))) {
      iVar2 = 0x6e;
      goto LAB_01b14824;
    }
    nanosleep(&local_60,(timespec *)0x0);
    iVar2 = pthread_mutex_trylock(param_1);
  } while( true );
}

