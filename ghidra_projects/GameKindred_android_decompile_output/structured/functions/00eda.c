// functions/00eda — 16 functions
#include "libGameKindred.h"




undefined8 FUN_00eda00c(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x24) != 0xcc) {
    (*(code *)**(undefined8 **)(param_1 + 0x240))(param_1);
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0xcc;
  }
  if (*(int *)(*(long *)(param_1 + 0x240) + 0x10) != 0) {
    uVar4 = *(uint *)(param_1 + 0xa8);
    do {
      while (uVar1 = *(uint *)(param_1 + 0x8c), uVar4 < uVar1) {
        puVar3 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = uVar4;
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[1] = (ulong)uVar4;
          puVar3[2] = (ulong)uVar1;
          (*(code *)*puVar3)(param_1);
          uVar5 = *(uint *)(param_1 + 0xa8);
        }
        (**(code **)(*(long *)(param_1 + 0x248) + 8))(param_1,0,(uint *)(param_1 + 0xa8),0);
        uVar4 = *(uint *)(param_1 + 0xa8);
        if (uVar4 == uVar5) {
          return 0;
        }
      }
      (**(code **)(*(long *)(param_1 + 0x240) + 8))(param_1);
      (*(code *)**(undefined8 **)(param_1 + 0x240))(param_1);
      *(undefined4 *)(param_1 + 0xa8) = 0;
      uVar4 = 0;
    } while (*(int *)(*(long *)(param_1 + 0x240) + 0x10) != 0);
  }
  uVar2 = 0xcd;
  if (*(int *)(param_1 + 0x5c) != 0) {
    uVar2 = 0xce;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  return 1;
}




void FUN_00eda11c(long *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  int local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = *(int *)((long)param_1 + 0x24);
  if (iVar3 != 0xcd) {
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x28) = 0x15;
    *(int *)(lVar4 + 0x2c) = iVar3;
    (**(code **)*param_1)(param_1);
  }
  uVar1 = *(uint *)((long)param_1 + 0x8c);
  if (*(uint *)(param_1 + 0x15) < uVar1) {
    puVar5 = (undefined8 *)param_1[2];
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = (ulong)*(uint *)(param_1 + 0x15);
      puVar5[2] = (ulong)uVar1;
      (*(code *)*puVar5)(param_1);
    }
    local_3c = 0;
    (**(code **)(param_1[0x49] + 8))(param_1,param_2,&local_3c,param_3);
    *(int *)(param_1 + 0x15) = (int)param_1[0x15] + local_3c;
    iVar3 = local_3c;
  }
  else {
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x28) = 0x7e;
    (**(code **)(lVar4 + 8))(param_1,0xffffffff);
    iVar3 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}




uint FUN_00eda214(long *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  iVar2 = *(int *)((long)param_1 + 0x24);
  if (iVar2 != 0xce) {
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0x15;
    *(int *)(lVar3 + 0x2c) = iVar2;
    (**(code **)*param_1)(param_1);
  }
  uVar1 = *(uint *)((long)param_1 + 0x8c);
  if (*(uint *)(param_1 + 0x15) < uVar1) {
    puVar4 = (undefined8 *)param_1[2];
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = (ulong)*(uint *)(param_1 + 0x15);
      puVar4[2] = (ulong)uVar1;
      (*(code *)*puVar4)(param_1);
    }
    uVar1 = *(int *)((long)param_1 + 0x1ac) * *(int *)((long)param_1 + 0x1a4);
    if (param_3 < uVar1) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x18;
      (*(code *)*puVar4)(param_1);
    }
    iVar2 = (**(code **)(param_1[0x4a] + 0x18))(param_1,param_2);
    if (iVar2 != 0) {
      *(uint *)(param_1 + 0x15) = (int)param_1[0x15] + uVar1;
      return uVar1;
    }
  }
  else {
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0x7e;
    (**(code **)(lVar3 + 8))(param_1,0xffffffff);
  }
  return 0;
}




void FUN_00eda308(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if ((iVar1 != 0xcc) && (iVar1 != 0xcf)) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x15;
    *(int *)(lVar2 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  iVar1 = param_2;
  if ((*(int *)(param_1[0x4c] + 0x24) != 0) &&
     (iVar1 = *(int *)((long)param_1 + 0xac), param_2 <= *(int *)((long)param_1 + 0xac))) {
    iVar1 = param_2;
  }
  *(int *)((long)param_1 + 0xb4) = iVar1;
  FUN_00eda00c(param_1);
  return;
}




undefined8 FUN_00eda380(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 - 0xcdU < 2) {
    if ((int)param_1[0xb] != 0) {
      (**(code **)(param_1[0x48] + 8))(param_1);
      *(undefined4 *)((long)param_1 + 0x24) = 0xd0;
      goto LAB_00eda3e8;
    }
  }
  else if (iVar1 == 0xd0) goto LAB_00eda3e8;
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 0x28) = 0x15;
  *(int *)(lVar3 + 0x2c) = iVar1;
  (**(code **)*param_1)(param_1);
LAB_00eda3e8:
  while ((*(int *)((long)param_1 + 0xac) <= *(int *)((long)param_1 + 0xb4) &&
         (*(int *)(param_1[0x4c] + 0x24) == 0))) {
    uVar2 = (**(code **)param_1[0x4c])(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0xcf;
  return 1;
}




void FUN_00eda430(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  if (puVar3 == (undefined8 *)0x0) {
    lVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x50);
    *(long *)(param_1 + 0x28) = lVar1;
    uVar2 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x1000);
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
    puVar3 = *(undefined8 **)(param_1 + 0x28);
  }
  puVar3[2] = FUN_00eda4d8;
  puVar3[3] = FUN_00eda4e8;
  puVar3[4] = FUN_00eda588;
  puVar3[5] = FUN_00edb304;
  puVar3[6] = FUN_00eda5f4;
  puVar3[7] = param_2;
  *puVar3 = 0;
  puVar3[1] = 0;
  return;
}




void FUN_00eda4d8(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x48) = 1;
  return;
}




undefined8 FUN_00eda4e8(long *param_1)

{
  size_t sVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[5];
  sVar1 = fread((void *)puVar4[8],1,0x1000,(FILE *)puVar4[7]);
  if (sVar1 == 0) {
    if (*(int *)(puVar4 + 9) != 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x2b;
      (*(code *)*puVar2)(param_1);
    }
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0x7b;
    (**(code **)(lVar3 + 8))(param_1,0xffffffff);
    *(undefined1 *)puVar4[8] = 0xff;
    *(undefined1 *)(puVar4[8] + 1) = 0xd9;
    sVar1 = 2;
  }
  *(undefined4 *)(puVar4 + 9) = 0;
  *puVar4 = puVar4[8];
  puVar4[1] = sVar1;
  return 1;
}




void FUN_00eda588(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  if (0 < param_2) {
    plVar2 = *(long **)(param_1 + 0x28);
    lVar1 = plVar2[1];
    if (lVar1 < param_2) {
      do {
        param_2 = param_2 - lVar1;
        (*(code *)plVar2[3])(param_1);
        lVar1 = plVar2[1];
      } while (lVar1 < param_2);
    }
    *plVar2 = *plVar2 + param_2;
    plVar2[1] = lVar1 - param_2;
  }
  return;
}




void FUN_00eda5f4(void)

{
  return;
}




void FUN_00eda5f8(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x2b;
    (*(code *)*puVar2)(param_1);
  }
  plVar1 = (long *)param_1[5];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)(**(code **)param_1[1])(param_1,0,0x38);
    param_1[5] = (long)plVar1;
  }
  plVar1[2] = (long)FUN_00eda6a0;
  plVar1[3] = (long)FUN_00eda6a4;
  plVar1[4] = (long)FUN_00eda588;
  plVar1[5] = (long)FUN_00edb304;
  plVar1[6] = (long)FUN_00eda5f4;
  *plVar1 = param_2;
  plVar1[1] = param_3;
  return;
}




void FUN_00eda6a0(void)

{
  return;
}




undefined8 FUN_00eda6a4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x28) = 0x7b;
  (**(code **)(lVar1 + 8))(param_1,0xffffffff);
  puVar2 = (undefined8 *)param_1[5];
  *puVar2 = &DAT_01bf1c3c;
  puVar2[1] = 2;
  return 1;
}




void FUN_00eda6f0(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  uVar3 = *(int *)(param_1 + 0x22c) * *(int *)(param_1 + 0x44);
  if (uVar3 <= uVar1) {
    uVar4 = FUN_00ee123c(*(undefined4 *)(param_1 + 0x30));
    uVar5 = (ulong)*(uint *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x88) = uVar4;
    lVar9 = 1;
    goto LAB_00eda94c;
  }
  if (uVar1 * 2 < uVar3) {
    if (uVar3 < uVar1 * 3 || uVar3 + uVar1 * -3 == 0) {
      uVar4 = FUN_00ee123c((ulong)*(uint *)(param_1 + 0x30) * 3);
      *(undefined4 *)(param_1 + 0x88) = uVar4;
      lVar9 = 3;
      uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 3;
      goto LAB_00eda94c;
    }
    if (uVar3 <= uVar1 * 4) {
      uVar4 = FUN_00ee123c((ulong)*(uint *)(param_1 + 0x30) << 2);
      uVar5 = (ulong)*(uint *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x88) = uVar4;
      lVar9 = 4;
LAB_00eda858:
      uVar5 = uVar5 << 2;
      goto LAB_00eda94c;
    }
    if (uVar3 < uVar1 * 5 || uVar3 + uVar1 * -5 == 0) {
      uVar4 = FUN_00ee123c((ulong)*(uint *)(param_1 + 0x30) * 5);
      *(undefined4 *)(param_1 + 0x88) = uVar4;
      lVar9 = 5;
      uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 5;
      goto LAB_00eda94c;
    }
    if (uVar3 < uVar1 * 6 || uVar3 + uVar1 * -6 == 0) {
      uVar4 = FUN_00ee123c((ulong)*(uint *)(param_1 + 0x30) * 6);
      *(undefined4 *)(param_1 + 0x88) = uVar4;
      lVar9 = 6;
      uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 3;
    }
    else {
      if (uVar3 < uVar1 * 7 || uVar3 + uVar1 * -7 == 0) {
        uVar4 = FUN_00ee123c((ulong)*(uint *)(param_1 + 0x30) * 7);
        uVar5 = (ulong)*(uint *)(param_1 + 0x34);
        *(undefined4 *)(param_1 + 0x88) = uVar4;
        lVar9 = 7;
        lVar7 = uVar5 << 3;
LAB_00eda8c4:
        uVar5 = lVar7 - uVar5;
        goto LAB_00eda94c;
      }
      if (uVar3 <= uVar1 * 8) {
        uVar4 = FUN_00ee123c((ulong)*(uint *)(param_1 + 0x30) << 3);
        *(undefined4 *)(param_1 + 0x88) = uVar4;
        lVar9 = 8;
        uVar5 = (ulong)*(uint *)(param_1 + 0x34) << 3;
        goto LAB_00eda94c;
      }
      if (uVar3 < uVar1 * 9 || uVar3 + uVar1 * -9 == 0) {
        uVar4 = FUN_00ee123c((ulong)*(uint *)(param_1 + 0x30) * 9);
        *(undefined4 *)(param_1 + 0x88) = uVar4;
        lVar9 = 9;
        uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 9;
        goto LAB_00eda94c;
      }
      if (uVar1 * 10 <= uVar3 && uVar3 + uVar1 * -10 != 0) {
        if (uVar3 < uVar1 * 0xb || uVar3 + uVar1 * -0xb == 0) {
          uVar5 = (ulong)*(uint *)(param_1 + 0x30);
          lVar9 = 0xb;
        }
        else {
          if (uVar3 < uVar1 * 0xc || uVar3 + uVar1 * -0xc == 0) {
            uVar4 = FUN_00ee123c((ulong)*(uint *)(param_1 + 0x30) * 0xc);
            *(undefined4 *)(param_1 + 0x88) = uVar4;
            lVar9 = 0xc;
            uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 3;
            goto LAB_00eda858;
          }
          if (uVar3 < uVar1 * 0xd || uVar3 + uVar1 * -0xd == 0) {
            uVar5 = (ulong)*(uint *)(param_1 + 0x30);
            lVar9 = 0xd;
          }
          else {
            if (uVar1 * 0xe <= uVar3 && uVar3 + uVar1 * -0xe != 0) {
              if (uVar1 * 0xf <= uVar3 && uVar3 + uVar1 * -0xf != 0) {
                uVar4 = FUN_00ee123c((ulong)*(uint *)(param_1 + 0x30) << 4);
                *(undefined4 *)(param_1 + 0x88) = uVar4;
                lVar9 = 0x10;
                uVar5 = (ulong)*(uint *)(param_1 + 0x34) << 4;
                goto LAB_00eda94c;
              }
              uVar4 = FUN_00ee123c((ulong)*(uint *)(param_1 + 0x30) * 0xf);
              uVar5 = (ulong)*(uint *)(param_1 + 0x34);
              *(undefined4 *)(param_1 + 0x88) = uVar4;
              lVar9 = 0xf;
              lVar7 = uVar5 << 4;
              goto LAB_00eda8c4;
            }
            uVar5 = (ulong)*(uint *)(param_1 + 0x30);
            lVar9 = 0xe;
          }
        }
        uVar4 = FUN_00ee123c(uVar5 * lVar9);
        *(undefined4 *)(param_1 + 0x88) = uVar4;
        uVar5 = (ulong)*(uint *)(param_1 + 0x34) * lVar9;
        goto LAB_00eda94c;
      }
      uVar4 = FUN_00ee123c((ulong)*(uint *)(param_1 + 0x30) * 10);
      *(undefined4 *)(param_1 + 0x88) = uVar4;
      lVar9 = 10;
      uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 5;
    }
  }
  else {
    uVar4 = FUN_00ee123c((ulong)*(uint *)(param_1 + 0x30) << 1);
    uVar5 = (ulong)*(uint *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x88) = uVar4;
    lVar9 = 2;
  }
  uVar5 = uVar5 << 1;
LAB_00eda94c:
  uVar4 = FUN_00ee123c(uVar5,(long)*(int *)(param_1 + 0x22c));
  iVar2 = *(int *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  uVar4 = (undefined4)lVar9;
  *(undefined4 *)(param_1 + 0x1a8) = uVar4;
  *(undefined4 *)(param_1 + 0x1ac) = uVar4;
  if (0 < iVar2) {
    iVar6 = 0;
    puVar8 = (undefined4 *)(*(long *)(param_1 + 0x130) + 0x28);
    do {
      iVar6 = iVar6 + 1;
      puVar8[-1] = uVar4;
      *puVar8 = uVar4;
      puVar8 = puVar8 + 0x18;
    } while (iVar6 < iVar2);
  }
  return;
}




void FUN_00eda9f4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x30);
  *(undefined8 **)(param_1 + 0x260) = puVar1;
  puVar1[3] = FUN_00edb2f0;
  puVar1[4] = 0;
  *puVar1 = FUN_00edaa64;
  puVar1[2] = FUN_00edb070;
  puVar1[1] = FUN_00edb018;
  *(undefined4 *)(puVar1 + 5) = 1;
  return;
}




int FUN_00edaa64(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  int *piVar12;
  
  lVar11 = param_1[0x4c];
  iVar1 = 2;
  if (*(int *)(lVar11 + 0x24) == 0) {
    do {
      while( true ) {
        iVar1 = (**(code **)(param_1[0x4d] + 8))(param_1);
        if (iVar1 != 1) {
          if (iVar1 != 2) {
            return iVar1;
          }
          *(undefined4 *)(lVar11 + 0x24) = 1;
          if (*(int *)(lVar11 + 0x28) == 0) {
            if (*(int *)((long)param_1 + 0xac) < *(int *)((long)param_1 + 0xb4)) {
              *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xac);
            }
          }
          else if (*(int *)(param_1[0x4d] + 0x1c) != 0) {
            puVar4 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar4 + 5) = 0x3e;
            (*(code *)*puVar4)(param_1);
          }
          return 2;
        }
        if (*(int *)(lVar11 + 0x28) == 0) break;
        if (*(int *)(lVar11 + 0x28) == 1) {
          if ((0xffdc < *(uint *)((long)param_1 + 0x34)) || (0xffdc < *(uint *)(param_1 + 6))) {
            *(undefined8 *)(*param_1 + 0x28) = 0xffdc0000002a;
            (**(code **)*param_1)(param_1);
          }
          lVar7 = param_1[0x25];
          if ((int)lVar7 != 8) {
            lVar6 = *param_1;
            *(undefined4 *)(lVar6 + 0x28) = 0x10;
            *(int *)(lVar6 + 0x2c) = (int)lVar7;
            (**(code **)*param_1)(param_1);
          }
          iVar1 = (int)param_1[7];
          if (10 < iVar1) {
            lVar7 = *param_1;
            *(undefined4 *)(lVar7 + 0x28) = 0x1b;
            *(int *)(lVar7 + 0x2c) = iVar1;
            *(undefined4 *)(*param_1 + 0x30) = 10;
            (**(code **)*param_1)(param_1);
            iVar1 = (int)param_1[7];
          }
          param_1[0x34] = 0x100000001;
          if (0 < iVar1) {
            iVar2 = 0;
            iVar5 = 1;
            piVar12 = (int *)(param_1[0x26] + 0xc);
            iVar8 = 1;
            do {
              iVar9 = piVar12[-1];
              if ((3 < iVar9 - 1U) || (iVar10 = *piVar12, 3 < iVar10 - 1U)) {
                puVar4 = (undefined8 *)*param_1;
                *(undefined4 *)(puVar4 + 5) = 0x13;
                (*(code *)*puVar4)(param_1);
                iVar8 = (int)param_1[0x34];
                iVar9 = piVar12[-1];
                iVar10 = *piVar12;
                iVar5 = *(int *)((long)param_1 + 0x1a4);
                iVar1 = (int)param_1[7];
              }
              iVar2 = iVar2 + 1;
              if (iVar8 <= iVar9) {
                iVar8 = iVar9;
              }
              if (iVar5 <= iVar10) {
                iVar5 = iVar10;
              }
              piVar12 = piVar12 + 0x18;
              *(int *)(param_1 + 0x34) = iVar8;
              *(int *)((long)param_1 + 0x1a4) = iVar5;
            } while (iVar2 < iVar1);
          }
          if (((int)param_1[0x27] == 0) &&
             ((*(int *)((long)param_1 + 0x13c) == 0 || ((int)param_1[0x38] == 0)))) {
            iVar2 = (int)param_1[0x44];
            if (0x4f < iVar2) {
              if (iVar2 < 0xa8) {
                if (iVar2 < 0x78) {
                  if (iVar2 == 0x50) {
                    iVar2 = 9;
                  }
                  else {
                    if (iVar2 != 99) goto LAB_00edaf28;
                    iVar2 = 10;
                  }
                }
                else if (iVar2 == 0x78) {
                  iVar2 = 0xb;
                }
                else {
                  if (iVar2 != 0x8f) goto LAB_00edaf28;
                  iVar2 = 0xc;
                }
              }
              else if (iVar2 < 0xe0) {
                if (iVar2 == 0xa8) {
                  iVar2 = 0xd;
                }
                else {
                  if (iVar2 != 0xc3) goto LAB_00edaf28;
                  iVar2 = 0xe;
                }
              }
              else if (iVar2 == 0xe0) {
                iVar2 = 0xf;
              }
              else {
                if (iVar2 != 0xff) goto LAB_00edaf28;
                iVar2 = 0x10;
              }
              goto LAB_00edac10;
            }
            if (iVar2 < 0x18) {
              if (7 < iVar2) {
                if (iVar2 == 8) {
                  iVar2 = 3;
                  *(undefined4 *)((long)param_1 + 0x22c) = 3;
                  param_1[0x46] = (long)&DAT_01bf3548;
                  uVar3 = 8;
                }
                else {
                  if (iVar2 != 0xf) goto LAB_00edaf28;
                  iVar2 = 4;
                  *(undefined4 *)((long)param_1 + 0x22c) = 4;
                  param_1[0x46] = (long)&DAT_01bf34c8;
                  uVar3 = 0xf;
                }
                goto LAB_00edaf18;
              }
              if (iVar2 != 0) {
                if (iVar2 != 3) goto LAB_00edaf28;
                iVar2 = 2;
                *(undefined4 *)((long)param_1 + 0x22c) = 2;
                param_1[0x46] = (long)&DAT_01bf35ac;
                uVar3 = 3;
                goto LAB_00edaf18;
              }
              iVar2 = 1;
              param_1[0x46] = (long)&DAT_01bf3110;
              *(undefined4 *)((long)param_1 + 0x22c) = 1;
              *(undefined4 *)(param_1 + 0x47) = 0;
            }
            else {
              if (iVar2 < 0x30) {
                if (iVar2 == 0x18) {
                  iVar2 = 5;
                  *(undefined4 *)((long)param_1 + 0x22c) = 5;
                  param_1[0x46] = (long)&DAT_01bf3424;
                  uVar3 = 0x18;
                }
                else {
                  if (iVar2 != 0x23) goto LAB_00edaf28;
                  iVar2 = 6;
                  *(undefined4 *)((long)param_1 + 0x22c) = 6;
                  param_1[0x46] = (long)&DAT_01bf3354;
                  uVar3 = 0x23;
                }
              }
              else {
                if (iVar2 != 0x30) {
                  if (iVar2 == 0x3f) goto LAB_00edac0c;
LAB_00edaf28:
                  lVar7 = *param_1;
                  *(undefined4 *)(lVar7 + 0x28) = 0x11;
                  *(undefined4 *)(lVar7 + 0x2c) = *(undefined4 *)((long)param_1 + 0x21c);
                  *(int *)(*param_1 + 0x30) = (int)param_1[0x44];
                  *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)((long)param_1 + 0x224);
                  *(int *)(*param_1 + 0x38) = (int)param_1[0x45];
                  (**(code **)*param_1)(param_1);
                  iVar2 = *(int *)((long)param_1 + 0x22c);
                  iVar1 = (int)param_1[7];
                  goto LAB_00edac1c;
                }
                iVar2 = 7;
                *(undefined4 *)((long)param_1 + 0x22c) = 7;
                param_1[0x46] = (long)&DAT_01bf3250;
                uVar3 = 0x30;
              }
LAB_00edaf18:
              *(undefined4 *)(param_1 + 0x47) = uVar3;
            }
          }
          else {
LAB_00edac0c:
            iVar2 = 8;
LAB_00edac10:
            param_1[0x46] = (long)&DAT_01bf3110;
            *(int *)((long)param_1 + 0x22c) = iVar2;
            *(undefined4 *)(param_1 + 0x47) = 0x3f;
          }
LAB_00edac1c:
          *(int *)(param_1 + 0x35) = iVar2;
          *(int *)((long)param_1 + 0x1ac) = iVar2;
          if (0 < iVar1) {
            iVar1 = 1;
            piVar12 = (int *)(param_1[0x26] + 0x28);
            while( true ) {
              piVar12[-1] = iVar2;
              *piVar12 = iVar2;
              iVar2 = FUN_00ee123c((long)piVar12[-8] * (ulong)*(uint *)(param_1 + 6),
                                   (long)(int)param_1[0x34] * (long)iVar2);
              piVar12[-3] = iVar2;
              iVar2 = FUN_00ee123c((long)piVar12[-7] * (ulong)*(uint *)((long)param_1 + 0x34),
                                   (long)*(int *)((long)param_1 + 0x22c) *
                                   (long)*(int *)((long)param_1 + 0x1a4));
              piVar12[-2] = iVar2;
              iVar2 = FUN_00ee123c((long)piVar12[-8] * (ulong)*(uint *)(param_1 + 6),
                                   (long)(int)param_1[0x34]);
              piVar12[1] = iVar2;
              iVar2 = FUN_00ee123c((long)piVar12[-7] * (ulong)*(uint *)((long)param_1 + 0x34),
                                   (long)*(int *)((long)param_1 + 0x1a4));
              piVar12[2] = iVar2;
              piVar12[3] = 1;
              piVar12[10] = 0;
              piVar12[0xb] = 0;
              if ((int)param_1[7] <= iVar1) break;
              iVar2 = *(int *)((long)param_1 + 0x22c);
              piVar12 = piVar12 + 0x18;
              iVar1 = iVar1 + 1;
            }
            iVar2 = *(int *)((long)param_1 + 0x22c);
          }
          uVar3 = FUN_00ee123c(*(undefined4 *)((long)param_1 + 0x34),
                               (long)iVar2 * (long)*(int *)((long)param_1 + 0x1a4));
          iVar1 = (int)param_1[0x38];
          *(undefined4 *)(param_1 + 0x36) = uVar3;
          if ((iVar1 < (int)param_1[7]) || (*(int *)((long)param_1 + 0x13c) != 0)) {
            *(undefined4 *)(param_1[0x4c] + 0x20) = 1;
          }
          else {
            *(undefined4 *)(param_1[0x4c] + 0x20) = 0;
          }
        }
        else {
          iVar1 = (int)param_1[0x38];
        }
        if (iVar1 != 0) {
          *(undefined4 *)(lVar11 + 0x28) = 0;
          goto LAB_00edafd4;
        }
        *(undefined4 *)(lVar11 + 0x28) = 2;
      }
      if (*(int *)(lVar11 + 0x20) == 0) {
        puVar4 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar4 + 5) = 0x24;
        (*(code *)*puVar4)(param_1);
      }
    } while ((int)param_1[0x38] == 0);
    FUN_00edb070(param_1);
LAB_00edafd4:
    iVar1 = 1;
  }
  return iVar1;
}

