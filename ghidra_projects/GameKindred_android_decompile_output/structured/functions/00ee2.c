// functions/00ee2 — 24 functions
#include "libGameKindred.h"




void thunk_FUN_00ee2484(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x50))(param_1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}




void thunk_FUN_00ee2430(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x48))(param_1,1);
    if (*(int *)(param_1 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x24) = 100;
    }
    else {
      *(undefined4 *)(param_1 + 0x24) = 200;
      *(undefined8 *)(param_1 + 0x198) = 0;
    }
  }
  return;
}




void FUN_00ee203c(long *param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1[1];
  if (param_2 < 2) {
    if (param_2 == 1) {
      for (lVar2 = *(long *)(lVar3 + 0x88); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x30)) {
        if (*(int *)(lVar2 + 0x2c) != 0) {
          *(undefined4 *)(lVar2 + 0x2c) = 0;
          (**(code **)(lVar2 + 0x48))(param_1,lVar2 + 0x38);
        }
      }
      lVar2 = *(long *)(lVar3 + 0x90);
      *(undefined8 *)(lVar3 + 0x88) = 0;
      for (; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x30)) {
        if (*(int *)(lVar2 + 0x2c) != 0) {
          *(undefined4 *)(lVar2 + 0x2c) = 0;
          (**(code **)(lVar2 + 0x48))(param_1,lVar2 + 0x38);
        }
      }
      *(undefined8 *)(lVar3 + 0x90) = 0;
    }
  }
  else {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0xf;
    *(uint *)(lVar2 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  lVar2 = lVar3 + (long)(int)param_2 * 8;
  plVar1 = *(long **)(lVar2 + 0x78);
  *(undefined8 *)(lVar2 + 0x78) = 0;
  while (plVar1 != (long *)0x0) {
    lVar4 = *plVar1;
    lVar2 = plVar1[1] + plVar1[2] + 0x18;
    FUN_00ee2400(param_1,plVar1,lVar2);
    *(long *)(lVar3 + 0x98) = *(long *)(lVar3 + 0x98) - lVar2;
    plVar1 = (long *)lVar4;
  }
  lVar2 = lVar3 + (long)(int)param_2 * 8;
  plVar1 = *(long **)(lVar2 + 0x68);
  *(undefined8 *)(lVar2 + 0x68) = 0;
  while (plVar1 != (long *)0x0) {
    lVar4 = *plVar1;
    lVar2 = plVar1[1] + plVar1[2] + 0x18;
    FUN_00ee23f0(param_1,plVar1,lVar2);
    *(long *)(lVar3 + 0x98) = *(long *)(lVar3 + 0x98) - lVar2;
    plVar1 = (long *)lVar4;
  }
  return;
}




void FUN_00ee2184(long param_1)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    FUN_00ee203c(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  FUN_00ee23f0(param_1,*(undefined8 *)(param_1 + 8),0xa8);
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_00ee242c(param_1);
  return;
}




void FUN_00ee21d4(undefined8 param_1,long *param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  uVar1 = *(uint *)((long)param_2 + 0x14);
  if (uVar1 != 0) {
    uVar5 = (ulong)*(uint *)((long)param_2 + 0x1c);
    uVar2 = (ulong)*(uint *)(param_2 + 3);
    if ((ulong)uVar1 <= (ulong)*(uint *)(param_2 + 3)) {
      uVar2 = (ulong)uVar1;
    }
    if ((long)(*(uint *)(param_2 + 4) - uVar5) <= (long)uVar2) {
      uVar2 = *(uint *)(param_2 + 4) - uVar5;
    }
    if ((long)(*(uint *)(param_2 + 1) - uVar5) <= (long)uVar2) {
      uVar2 = *(uint *)(param_2 + 1) - uVar5;
    }
    if (0 < (long)uVar2) {
      uVar1 = *(uint *)((long)param_2 + 0xc);
      uVar8 = 0;
      lVar6 = uVar5 * uVar1;
      do {
        lVar7 = uVar2 * uVar1;
        if (param_3 == 0) {
          lVar3 = *param_2;
          pcVar4 = (code *)param_2[7];
        }
        else {
          lVar3 = *param_2;
          pcVar4 = (code *)param_2[8];
        }
        (*pcVar4)(param_1,param_2 + 7,*(undefined8 *)(lVar3 + uVar8 * 8),lVar6,lVar7);
        uVar2 = (ulong)*(uint *)(param_2 + 3);
        uVar8 = uVar8 + uVar2;
        if (*(uint *)((long)param_2 + 0x14) <= uVar8) {
          return;
        }
        uVar5 = *(uint *)((long)param_2 + 0x14) - uVar8;
        if ((long)uVar5 <= (long)uVar2) {
          uVar2 = uVar5;
        }
        lVar3 = uVar8 + *(uint *)((long)param_2 + 0x1c);
        uVar5 = (ulong)*(uint *)(param_2 + 4) - lVar3;
        if ((long)uVar5 <= (long)uVar2) {
          uVar2 = uVar5;
        }
        uVar5 = (ulong)*(uint *)(param_2 + 1) - lVar3;
        if ((long)uVar5 <= (long)uVar2) {
          uVar2 = uVar5;
        }
        lVar6 = lVar7 + lVar6;
      } while (0 < (long)uVar2);
    }
  }
  return;
}




void FUN_00ee22dc(undefined8 param_1,long *param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  uVar1 = *(uint *)((long)param_2 + 0x14);
  if (uVar1 != 0) {
    uVar5 = (ulong)*(uint *)((long)param_2 + 0x1c);
    uVar2 = (ulong)*(uint *)(param_2 + 3);
    if ((ulong)uVar1 <= (ulong)*(uint *)(param_2 + 3)) {
      uVar2 = (ulong)uVar1;
    }
    if ((long)(*(uint *)(param_2 + 4) - uVar5) <= (long)uVar2) {
      uVar2 = *(uint *)(param_2 + 4) - uVar5;
    }
    if ((long)(*(uint *)(param_2 + 1) - uVar5) <= (long)uVar2) {
      uVar2 = *(uint *)(param_2 + 1) - uVar5;
    }
    if (0 < (long)uVar2) {
      uVar8 = 0;
      lVar9 = (ulong)*(uint *)((long)param_2 + 0xc) * 0x80;
      lVar6 = lVar9 * uVar5;
      do {
        lVar7 = uVar2 * lVar9;
        if (param_3 == 0) {
          lVar3 = *param_2;
          pcVar4 = (code *)param_2[7];
        }
        else {
          lVar3 = *param_2;
          pcVar4 = (code *)param_2[8];
        }
        (*pcVar4)(param_1,param_2 + 7,*(undefined8 *)(lVar3 + uVar8 * 8),lVar6,lVar7);
        uVar2 = (ulong)*(uint *)(param_2 + 3);
        uVar8 = uVar8 + uVar2;
        if (*(uint *)((long)param_2 + 0x14) <= uVar8) {
          return;
        }
        uVar5 = *(uint *)((long)param_2 + 0x14) - uVar8;
        if ((long)uVar5 <= (long)uVar2) {
          uVar2 = uVar5;
        }
        lVar3 = uVar8 + *(uint *)((long)param_2 + 0x1c);
        uVar5 = (ulong)*(uint *)(param_2 + 4) - lVar3;
        if ((long)uVar5 <= (long)uVar2) {
          uVar2 = uVar5;
        }
        uVar5 = (ulong)*(uint *)(param_2 + 1) - lVar3;
        if ((long)uVar5 <= (long)uVar2) {
          uVar2 = uVar5;
        }
        lVar6 = lVar7 + lVar6;
      } while (0 < (long)uVar2);
    }
  }
  return;
}




void FUN_00ee23e8(undefined8 param_1,size_t param_2)

{
  malloc(param_2);
  return;
}




void FUN_00ee23f0(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_00ee23f8(undefined8 param_1,size_t param_2)

{
  malloc(param_2);
  return;
}




void FUN_00ee2400(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




undefined8 FUN_00ee2408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




void FUN_00ee2410(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  *(undefined4 *)(param_1 + 5) = 0x33;
                    /* WARNING: Could not recover jumptable at 0x00ee2420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)();
  return;
}




undefined8 FUN_00ee2424(void)

{
  return 0;
}




void FUN_00ee242c(void)

{
  return;
}




void FUN_00ee2430(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x48))(param_1,1);
    if (*(int *)(param_1 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x24) = 100;
    }
    else {
      *(undefined4 *)(param_1 + 0x24) = 200;
      *(undefined8 *)(param_1 + 0x198) = 0;
    }
  }
  return;
}




void FUN_00ee2484(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x50))(param_1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}




void FUN_00ee24bc(long param_1)

{
  long lVar1;
  
  lVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x84);
  *(undefined4 *)(lVar1 + 0x80) = 0;
  return;
}




void FUN_00ee24e4(long param_1)

{
  long lVar1;
  
  lVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x118);
  *(undefined4 *)(lVar1 + 0x114) = 0;
  return;
}




void FUN_00ee250c(long param_1)

{
  undefined8 *puVar1;
  void *__s;
  int iVar2;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x150);
  *(undefined8 **)(param_1 + 0x270) = puVar1;
  *puVar1 = FUN_00ee25cc;
  memset(puVar1 + 9,0,0x100);
  *(undefined1 *)(puVar1 + 0x29) = 0x71;
  if (*(int *)(param_1 + 0x13c) != 0) {
    __s = (void *)(*(code *)**(undefined8 **)(param_1 + 8))
                            (param_1,1,(long)*(int *)(param_1 + 0x38) << 8);
    *(void **)(param_1 + 0xc0) = __s;
    if (0 < *(int *)(param_1 + 0x38)) {
      iVar2 = 0;
      do {
        memset(__s,0xff,0x100);
        iVar2 = iVar2 + 1;
        __s = (void *)((long)__s + 0x100);
      } while (iVar2 < *(int *)(param_1 + 0x38));
    }
  }
  return;
}




void FUN_00ee25cc(long *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined8 *puVar3;
  void *__s;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  
  lVar10 = param_1[0x4e];
  iVar4 = *(int *)((long)param_1 + 0x21c);
  if (*(int *)((long)param_1 + 0x13c) == 0) {
    if ((((iVar4 != 0) || (*(int *)((long)param_1 + 0x224) != 0)) || ((int)param_1[0x45] != 0)) ||
       (((int)param_1[0x44] < 0x40 && ((int)param_1[0x44] != (int)param_1[0x47])))) {
      lVar8 = *param_1;
      *(undefined4 *)(lVar8 + 0x28) = 0x7d;
      (**(code **)(lVar8 + 8))(param_1,0xffffffff);
    }
    *(code **)(lVar10 + 8) = FUN_00ee3024;
    iVar4 = (int)param_1[0x38];
    goto LAB_00ee27fc;
  }
  iVar7 = (int)param_1[0x44];
  if (iVar4 == 0) {
    if (iVar7 == 0) goto LAB_00ee2674;
LAB_00ee269c:
    lVar8 = *param_1;
    *(undefined4 *)(lVar8 + 0x28) = 0x11;
    *(int *)(lVar8 + 0x2c) = iVar4;
    *(int *)(*param_1 + 0x30) = (int)param_1[0x44];
    *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)((long)param_1 + 0x224);
    *(int *)(*param_1 + 0x38) = (int)param_1[0x45];
    (**(code **)*param_1)(param_1);
  }
  else {
    if (((iVar7 < iVar4) || ((int)param_1[0x47] < iVar7)) || ((int)param_1[0x38] != 1))
    goto LAB_00ee269c;
LAB_00ee2674:
    if (*(int *)((long)param_1 + 0x224) == 0) {
      iVar7 = (int)param_1[0x45];
    }
    else {
      iVar7 = *(int *)((long)param_1 + 0x224) + -1;
      if (iVar7 != (int)param_1[0x45]) goto LAB_00ee269c;
    }
    if (0xd < iVar7) goto LAB_00ee269c;
  }
  iVar4 = (int)param_1[0x38];
  if (0 < iVar4) {
    lVar8 = 0;
    do {
      lVar11 = param_1[0x18];
      iVar4 = *(int *)(param_1[lVar8 + 0x39] + 4);
      iVar7 = *(int *)((long)param_1 + 0x21c);
      if ((iVar7 != 0) && (*(int *)(lVar11 + (long)iVar4 * 0x100) < 0)) {
        lVar5 = *param_1;
        *(undefined4 *)(lVar5 + 0x28) = 0x76;
        *(int *)(lVar5 + 0x2c) = iVar4;
        *(undefined4 *)(*param_1 + 0x30) = 0;
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        iVar7 = *(int *)((long)param_1 + 0x21c);
      }
      if (iVar7 <= (int)param_1[0x44]) {
        lVar11 = lVar11 + (long)iVar4 * 0x100;
        lVar5 = (long)iVar7;
        do {
          uVar2 = *(uint *)(lVar11 + lVar5 * 4);
          if (*(uint *)((long)param_1 + 0x224) != (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU))) {
            lVar6 = *param_1;
            *(undefined4 *)(lVar6 + 0x28) = 0x76;
            *(int *)(lVar6 + 0x2c) = iVar4;
            *(int *)(*param_1 + 0x30) = (int)lVar5;
            (**(code **)(*param_1 + 8))(param_1,0xffffffff);
          }
          *(int *)(lVar11 + lVar5 * 4) = (int)param_1[0x45];
          bVar1 = lVar5 < (int)param_1[0x44];
          lVar5 = lVar5 + 1;
        } while (bVar1);
      }
      iVar4 = (int)param_1[0x38];
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar4);
  }
  if (*(int *)((long)param_1 + 0x224) == 0) {
    if (*(int *)((long)param_1 + 0x21c) == 0) {
      pcVar9 = FUN_00ee2968;
    }
    else {
      pcVar9 = FUN_00ee2b90;
    }
  }
  else if (*(int *)((long)param_1 + 0x21c) == 0) {
    pcVar9 = FUN_00ee2da4;
  }
  else {
    pcVar9 = FUN_00ee2e50;
  }
  *(code **)(lVar10 + 8) = pcVar9;
LAB_00ee27fc:
  if (0 < iVar4) {
    lVar8 = 0;
    do {
      lVar11 = param_1[lVar8 + 0x39];
      if (*(int *)((long)param_1 + 0x13c) == 0) {
LAB_00ee282c:
        uVar2 = *(uint *)(lVar11 + 0x14);
        if (0xf < uVar2) {
          lVar5 = *param_1;
          *(undefined4 *)(lVar5 + 0x28) = 0x32;
          *(uint *)(lVar5 + 0x2c) = uVar2;
          (**(code **)*param_1)(param_1);
        }
        puVar13 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x48);
        puVar3 = (undefined8 *)*puVar13;
        if (puVar3 == (undefined8 *)0x0) {
          puVar3 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x40);
          *puVar13 = puVar3;
        }
        lVar5 = lVar10 + lVar8 * 4;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[7] = 0;
        puVar3[6] = 0;
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        *(undefined4 *)(lVar5 + 0x24) = 0;
        *(undefined4 *)(lVar5 + 0x34) = 0;
        if (*(int *)((long)param_1 + 0x13c) == 0) {
          iVar4 = (int)param_1[0x47];
        }
        else {
          iVar4 = *(int *)((long)param_1 + 0x21c);
        }
        if (iVar4 != 0) {
LAB_00ee28b0:
          uVar2 = *(uint *)(lVar11 + 0x18);
          if (0xf < uVar2) {
            lVar11 = *param_1;
            *(undefined4 *)(lVar11 + 0x28) = 0x32;
            *(uint *)(lVar11 + 0x2c) = uVar2;
            (**(code **)*param_1)(param_1);
          }
          plVar12 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 200);
          __s = (void *)*plVar12;
          if (__s == (void *)0x0) {
            __s = (void *)(**(code **)param_1[1])(param_1,1,0x100);
            *plVar12 = (long)__s;
          }
          memset(__s,0,0x100);
        }
      }
      else {
        if (*(int *)((long)param_1 + 0x21c) != 0) goto LAB_00ee28b0;
        if (*(int *)((long)param_1 + 0x224) == 0) goto LAB_00ee282c;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_1[0x38]);
  }
  *(undefined8 *)(lVar10 + 0x10) = 0;
  *(undefined8 *)(lVar10 + 0x18) = 0;
  *(undefined4 *)(lVar10 + 0x20) = 0xfffffff0;
  *(undefined4 *)(lVar10 + 0x44) = *(undefined4 *)((long)param_1 + 0x174);
  return;
}




undefined8 FUN_00ee2968(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  
  lVar10 = param_1[0x4e];
  if (*(int *)((long)param_1 + 0x174) != 0) {
    iVar3 = *(int *)(lVar10 + 0x44);
    if (iVar3 == 0) {
      FUN_00ee33a0(param_1);
      iVar3 = *(int *)(lVar10 + 0x44);
    }
    *(int *)(lVar10 + 0x44) = iVar3 + -1;
  }
  if ((*(int *)(lVar10 + 0x20) != -1) && (0 < (int)param_1[0x3e])) {
    lVar11 = 0;
    do {
      lVar14 = (long)*(int *)((long)param_1 + lVar11 * 4 + 500);
      lVar9 = lVar10 + lVar14 * 4;
      lVar8 = (long)*(int *)(param_1[lVar14 + 0x39] + 0x14);
      puVar6 = *(undefined2 **)(param_2 + lVar11 * 8);
      plVar13 = (long *)(lVar10 + lVar8 * 8 + 0x48);
      piVar12 = (int *)(lVar9 + 0x34);
      lVar1 = *plVar13 + (long)*piVar12;
      iVar3 = FUN_00ee34a0(param_1,lVar1);
      if (iVar3 == 0) {
        *piVar12 = 0;
        iVar3 = *(int *)(lVar9 + 0x24);
      }
      else {
        iVar3 = FUN_00ee34a0(param_1,lVar1 + 1);
        lVar9 = lVar1 + iVar3 + 2;
        uVar4 = FUN_00ee34a0(param_1,lVar9);
        if (uVar4 != 0) {
          lVar9 = *plVar13 + 0x14;
          while (iVar5 = FUN_00ee34a0(param_1,lVar9), iVar5 != 0) {
            uVar4 = uVar4 << 1;
            if (uVar4 == 0x8000) {
              lVar11 = *param_1;
              *(undefined4 *)(lVar11 + 0x28) = 0x75;
              (**(code **)(lVar11 + 8))(param_1,0xffffffff);
              *(undefined4 *)(lVar10 + 0x20) = 0xffffffff;
              return 1;
            }
            lVar9 = lVar9 + 1;
          }
        }
        iVar5 = 0;
        if ((int)((ulong)(1L << ((ulong)*(byte *)((long)param_1 + lVar8 + 0x144) & 0x3f)) >> 1) <=
            (int)uVar4) {
          if ((int)((ulong)(1L << ((ulong)*(byte *)((long)param_1 + lVar8 + 0x154) & 0x3f)) >> 1) <
              (int)uVar4) {
            iVar5 = iVar3 * 4 + 0xc;
          }
          else {
            iVar5 = iVar3 * 4 + 4;
          }
        }
        uVar7 = (int)uVar4 >> 1;
        *piVar12 = iVar5;
        if (uVar7 != 0) {
          do {
            iVar5 = FUN_00ee34a0(param_1,lVar9 + 0xe);
            uVar2 = 0;
            if (iVar5 != 0) {
              uVar2 = uVar7;
            }
            uVar7 = (int)uVar7 >> 1;
            uVar4 = uVar2 | uVar4;
          } while (uVar7 != 0);
        }
        lVar9 = lVar10 + lVar14 * 4;
        uVar7 = ~uVar4;
        if (iVar3 == 0) {
          uVar7 = uVar4 + 1;
        }
        iVar3 = *(int *)(lVar9 + 0x24) + uVar7;
        *(int *)(lVar9 + 0x24) = iVar3;
      }
      lVar11 = lVar11 + 1;
      *puVar6 = (short)(iVar3 << (ulong)(*(uint *)(param_1 + 0x45) & 0x1f));
    } while (lVar11 < (int)param_1[0x3e]);
  }
  return 1;
}




undefined8 FUN_00ee2b90(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  
  lVar12 = param_1[0x4e];
  if (*(int *)((long)param_1 + 0x174) != 0) {
    iVar8 = *(int *)(lVar12 + 0x44);
    if (iVar8 == 0) {
      FUN_00ee33a0(param_1);
      iVar8 = *(int *)(lVar12 + 0x44);
    }
    *(int *)(lVar12 + 0x44) = iVar8 + -1;
  }
  if (*(int *)(lVar12 + 0x20) != -1) {
    lVar13 = param_1[0x46];
    lVar11 = *param_2;
    iVar3 = *(int *)(param_1[0x39] + 0x18);
    iVar8 = *(int *)((long)param_1 + 0x21c) + -1;
    plVar1 = (long *)(lVar12 + (long)iVar3 * 8 + 200);
    do {
      lVar9 = *plVar1;
      iVar4 = FUN_00ee34a0(param_1,lVar9 + iVar8 * 3);
      if (iVar4 != 0) {
        return 1;
      }
      lVar9 = lVar9 + iVar8 * 3 + 2;
      piVar14 = (int *)(lVar13 + (long)(iVar8 + 1) * 4);
      iVar4 = iVar8;
      while( true ) {
        iVar8 = iVar4 + 1;
        iVar5 = FUN_00ee34a0(param_1,lVar9 + -1);
        if (iVar5 != 0) break;
        lVar9 = lVar9 + 3;
        piVar14 = piVar14 + 1;
        iVar4 = iVar8;
        if ((int)param_1[0x44] <= iVar8) goto LAB_00ee2d5c;
      }
      iVar5 = FUN_00ee34a0(param_1,lVar12 + 0x148);
      uVar6 = FUN_00ee34a0(param_1,lVar9);
      uVar10 = 0;
      if (uVar6 != 0) {
        iVar7 = FUN_00ee34a0(param_1,lVar9);
        uVar10 = uVar6;
        if (iVar7 != 0) {
          uVar10 = uVar6 << 1;
          lVar9 = 0xbd;
          if ((int)(uint)*(byte *)((long)param_1 + (long)iVar3 + 0x164) <= iVar4) {
            lVar9 = 0xd9;
          }
          lVar9 = *plVar1 + lVar9;
          while (iVar4 = FUN_00ee34a0(param_1,lVar9), iVar4 != 0) {
            uVar10 = uVar10 << 1;
            if (uVar10 == 0x8000) {
LAB_00ee2d5c:
              lVar11 = *param_1;
              *(undefined4 *)(lVar11 + 0x28) = 0x75;
              (**(code **)(lVar11 + 8))(param_1,0xffffffff);
              *(undefined4 *)(lVar12 + 0x20) = 0xffffffff;
              return 1;
            }
            lVar9 = lVar9 + 1;
          }
        }
        uVar6 = (int)uVar10 >> 1;
        if (uVar6 != 0) {
          do {
            iVar4 = FUN_00ee34a0(param_1,lVar9 + 0xe);
            uVar2 = 0;
            if (iVar4 != 0) {
              uVar2 = uVar6;
            }
            uVar6 = (int)uVar6 >> 1;
            uVar10 = uVar2 | uVar10;
          } while (uVar6 != 0);
        }
      }
      uVar6 = ~uVar10;
      if (iVar5 == 0) {
        uVar6 = uVar10 + 1;
      }
      *(short *)(lVar11 + (long)*piVar14 * 2) =
           (short)(uVar6 << (ulong)(*(uint *)(param_1 + 0x45) & 0x1f));
    } while (iVar8 < (int)param_1[0x44]);
  }
  return 1;
}




undefined8 FUN_00ee2da4(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x270);
  if (*(int *)(param_1 + 0x174) != 0) {
    iVar2 = *(int *)(lVar4 + 0x44);
    if (iVar2 == 0) {
      FUN_00ee33a0(param_1);
      iVar2 = *(int *)(lVar4 + 0x44);
    }
    *(int *)(lVar4 + 0x44) = iVar2 + -1;
  }
  if (0 < *(int *)(param_1 + 0x1f0)) {
    uVar1 = *(uint *)(param_1 + 0x228);
    lVar5 = 0;
    do {
      iVar2 = FUN_00ee34a0(param_1,lVar4 + 0x148);
      if (iVar2 != 0) {
        puVar3 = *(ushort **)(param_2 + lVar5 * 8);
        *puVar3 = *puVar3 | (ushort)(1 << (ulong)(uVar1 & 0x1f));
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x1f0));
  }
  return 1;
}




undefined8 FUN_00ee2e50(long *param_1,long *param_2)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  
  lVar11 = param_1[0x4e];
  if (*(int *)((long)param_1 + 0x174) != 0) {
    iVar6 = *(int *)(lVar11 + 0x44);
    if (iVar6 == 0) {
      FUN_00ee33a0(param_1);
      iVar6 = *(int *)(lVar11 + 0x44);
    }
    *(int *)(lVar11 + 0x44) = iVar6 + -1;
  }
  if (*(int *)(lVar11 + 0x20) != -1) {
    uVar1 = *(uint *)(param_1 + 0x45);
    lVar12 = param_1[0x46];
    uVar17 = (ulong)(int)param_1[0x44];
    lVar13 = *param_2;
    iVar6 = *(int *)(param_1[0x39] + 0x18);
    piVar8 = (int *)(lVar12 + uVar17 * 4);
    do {
      iVar16 = (int)uVar17;
      if (*(short *)(lVar13 + (long)*piVar8 * 2) != 0) break;
      uVar3 = iVar16 - 1;
      uVar17 = (ulong)uVar3;
      piVar8 = piVar8 + -1;
      iVar16 = 0;
    } while (uVar3 != 0);
    iVar14 = *(int *)((long)param_1 + 0x21c) + -1;
    do {
      lVar10 = *(long *)(lVar11 + (long)iVar6 * 8 + 200);
      if ((iVar16 <= iVar14) && (iVar4 = FUN_00ee34a0(param_1,lVar10 + iVar14 * 3), iVar4 != 0)) {
        return 1;
      }
      lVar9 = (long)iVar14;
      lVar10 = lVar10 + iVar14 * 3 + 2;
      while( true ) {
        iVar14 = iVar14 + 1;
        lVar15 = (long)*(int *)(lVar12 + lVar9 * 4 + 4);
        sVar5 = (short)(1 << (ulong)(uVar1 & 0x1f));
        sVar7 = (short)(-1 << (ulong)(uVar1 & 0x1f));
        if (*(short *)(lVar13 + lVar15 * 2) != 0) break;
        iVar4 = FUN_00ee34a0(param_1,lVar10 + -1);
        if (iVar4 != 0) {
          iVar4 = FUN_00ee34a0(param_1,lVar11 + 0x148);
          if (iVar4 != 0) {
            sVar5 = sVar7;
          }
          goto LAB_00ee2fc8;
        }
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 3;
        if ((int)param_1[0x44] <= lVar9) {
          lVar12 = *param_1;
          *(undefined4 *)(lVar12 + 0x28) = 0x75;
          (**(code **)(lVar12 + 8))(param_1,0xffffffff);
          *(undefined4 *)(lVar11 + 0x20) = 0xffffffff;
          return 1;
        }
      }
      iVar4 = FUN_00ee34a0(param_1,lVar10);
      if (iVar4 != 0) {
        sVar2 = *(short *)(lVar13 + lVar15 * 2);
        if (-1 < sVar2) {
          sVar7 = sVar5;
        }
        sVar5 = sVar2 + sVar7;
LAB_00ee2fc8:
        *(short *)(lVar13 + lVar15 * 2) = sVar5;
      }
    } while (iVar14 < (int)param_1[0x44]);
  }
  return 1;
}

