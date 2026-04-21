// functions/00934 — 38 functions
#include "libGameKindred.h"




void * FUN_00934058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_00934100(param_1,param_2,&local_50,auStack_58,param_3);
  pvVar3 = (void *)*puVar2;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = operator_new(0x30);
    *(undefined4 *)((long)pvVar3 + 0x20) = *param_4;
    *(undefined8 *)((long)pvVar3 + 0x28) = *(undefined8 *)(param_4 + 2);
    FUN_00934228(param_1,local_50,puVar2,pvVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long * FUN_00934100(undefined8 *param_1,long *param_2,long *param_3,long *param_4,int *param_5)

{
  int iVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  if (param_1 + 1 != param_2) {
    iVar1 = *param_5;
    if ((int)param_2[4] <= iVar1) {
      if (iVar1 <= (int)param_2[4]) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar4 = (long *)param_2[1];
      if (plVar4 == (long *)0x0) {
        plVar4 = param_2 + 2;
        plVar5 = (long *)*plVar4;
        if ((long *)*plVar5 != param_2) {
          do {
            lVar7 = *plVar4;
            plVar4 = (long *)(lVar7 + 0x10);
            plVar5 = (long *)*plVar4;
          } while (*plVar5 != lVar7);
        }
      }
      else {
        do {
          plVar5 = plVar4;
          plVar4 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      if ((plVar5 == param_1 + 1) || (iVar1 < (int)plVar5[4])) {
        if (param_2[1] != 0) {
          *param_3 = (long)plVar5;
          return plVar5;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      goto LAB_00934210;
    }
  }
  plVar5 = (long *)*param_2;
  plVar4 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar6 = param_2;
    plVar2 = plVar5;
    if (plVar5 == (long *)0x0) {
      do {
        plVar4 = (long *)plVar6[2];
        bVar3 = (long *)*plVar4 == plVar6;
        plVar6 = plVar4;
      } while (bVar3);
    }
    else {
      do {
        plVar4 = plVar2;
        plVar2 = (long *)plVar4[1];
      } while ((long *)plVar4[1] != (long *)0x0);
    }
    if (*param_5 <= (int)plVar4[4]) {
LAB_00934210:
      plVar4 = (long *)FUN_0093427c(param_1,param_3,param_5);
      return plVar4;
    }
  }
  if (plVar5 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar4;
    param_2 = plVar4 + 1;
  }
  return param_2;
}




void FUN_00934228(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




long * FUN_0093427c(long param_1,long *param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 8);
  if ((long *)*plVar1 == (long *)0x0) {
    *param_2 = (long)plVar1;
    return plVar1;
  }
  plVar2 = (long *)(param_1 + 8);
  plVar1 = (long *)*plVar1;
  do {
    while (plVar3 = plVar1, *param_3 < (int)plVar3[4]) {
      plVar2 = plVar3;
      plVar1 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) {
        *param_2 = (long)plVar3;
        return plVar3;
      }
    }
    if (*param_3 <= (int)plVar3[4]) break;
    plVar2 = plVar3 + 1;
    plVar1 = (long *)*plVar2;
  } while ((long *)*plVar2 != (long *)0x0);
  *param_2 = (long)plVar3;
  return plVar2;
}




void FUN_009342e4(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 2);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 4);
    if (puVar1 != param_3) {
      do {
        puVar2 = param_3 + 1;
        *param_2 = *param_3;
        param_2 = param_2 + 1;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




long * FUN_00934354(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_009343e8(param_1[1],param_2);
  operator_delete(param_2);
  return plVar3;
}




void FUN_009343e8(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  plVar4 = (long *)*param_2;
  plVar7 = param_2;
  if (plVar4 == (long *)0x0) {
LAB_0093440c:
    plVar4 = (long *)plVar7[1];
    if (plVar4 == (long *)0x0) {
      bVar1 = false;
      plVar5 = plVar7 + 2;
      goto LAB_00934434;
    }
  }
  else {
    plVar5 = (long *)param_2[1];
    if ((long *)param_2[1] != (long *)0x0) {
      do {
        plVar7 = plVar5;
        plVar5 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
      goto LAB_0093440c;
    }
  }
  plVar5 = plVar7 + 2;
  bVar1 = true;
  plVar4[2] = *plVar5;
LAB_00934434:
  puVar8 = (undefined8 *)plVar7[2];
  plVar2 = (long *)*puVar8;
  if (plVar2 == plVar7) {
    *puVar8 = plVar4;
    if (plVar7 == param_1) {
      plVar2 = (long *)0x0;
      param_1 = plVar4;
    }
    else {
      plVar2 = (long *)puVar8[1];
    }
  }
  else {
    puVar8[1] = plVar4;
  }
  lVar9 = plVar7[3];
  plVar3 = param_1;
  if (plVar7 != param_2) {
    lVar10 = param_2[2];
    *plVar5 = lVar10;
    lVar6 = 0;
    if (*(long **)param_2[2] != param_2) {
      lVar6 = 8;
    }
    *(long **)(lVar10 + lVar6) = plVar7;
    lVar6 = *param_2;
    *plVar7 = lVar6;
    *(long **)(lVar6 + 0x10) = plVar7;
    lVar6 = param_2[1];
    plVar7[1] = lVar6;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 0x10) = plVar7;
    }
    plVar3 = plVar7;
    if (param_1 != param_2) {
      plVar3 = param_1;
    }
    *(char *)(plVar7 + 3) = (char)param_2[3];
  }
  if (((char)lVar9 != '\0') && (plVar3 != (long *)0x0)) {
    if (!bVar1) {
      while( true ) {
        plVar4 = (long *)plVar2[2];
        plVar7 = plVar3;
        if ((long *)*plVar4 == plVar2) break;
        if ((char)plVar2[3] == '\0') {
          *(undefined1 *)(plVar2 + 3) = 1;
          plVar7 = (long *)plVar4[1];
          *(undefined1 *)(plVar4 + 3) = 0;
          lVar9 = *plVar7;
          plVar4[1] = lVar9;
          if (lVar9 != 0) {
            *(long **)(lVar9 + 0x10) = plVar4;
          }
          plVar7[2] = plVar4[2];
          lVar9 = 0;
          if (*(long **)plVar4[2] != plVar4) {
            lVar9 = 8;
          }
          *(long **)((long)plVar4[2] + lVar9) = plVar7;
          *plVar7 = (long)plVar4;
          plVar4[2] = (long)plVar7;
          plVar7 = plVar2;
          if (plVar3 != (long *)*plVar2) {
            plVar7 = plVar3;
          }
          plVar2 = (long *)((long *)*plVar2)[1];
        }
        lVar9 = *plVar2;
        if ((lVar9 != 0) && (*(char *)(lVar9 + 0x18) == '\0')) {
          lVar6 = plVar2[1];
          if (lVar6 != 0) goto LAB_00934640;
LAB_00934648:
          plVar5 = (long *)(lVar9 + 0x18);
          *(undefined1 *)plVar5 = 1;
          plVar7 = plVar2 + 3;
          *(char *)plVar7 = '\0';
          lVar6 = *(long *)(lVar9 + 8);
          *plVar2 = lVar6;
          if (lVar6 != 0) {
            *(long **)(lVar6 + 0x10) = plVar2;
          }
          plVar4 = (long *)(lVar9 + 0x10);
          *plVar4 = plVar2[2];
          lVar6 = 0;
          if (*(long **)plVar2[2] != plVar2) {
            lVar6 = 8;
          }
          *(long *)((long)plVar2[2] + lVar6) = lVar9;
          *(long **)(lVar9 + 8) = plVar2;
          plVar2[2] = lVar9;
LAB_0093476c:
          lVar9 = *plVar4;
          *(undefined1 *)plVar5 = *(undefined1 *)(lVar9 + 0x18);
          *(undefined1 *)(lVar9 + 0x18) = 1;
          *(char *)plVar7 = '\x01';
          plVar7 = *(long **)(lVar9 + 8);
          lVar6 = *plVar7;
          *(long *)(lVar9 + 8) = lVar6;
          if (lVar6 != 0) {
            *(long *)(lVar6 + 0x10) = lVar9;
          }
          plVar7[2] = *(long *)(lVar9 + 0x10);
          lVar6 = 0;
          if (**(long **)(lVar9 + 0x10) != lVar9) {
            lVar6 = 8;
          }
          *(long **)((long)*(long **)(lVar9 + 0x10) + lVar6) = plVar7;
          *plVar7 = lVar9;
          *(long **)(lVar9 + 0x10) = plVar7;
          return;
        }
        lVar6 = plVar2[1];
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0x18) == '\0')) {
LAB_00934640:
          plVar7 = (long *)(lVar6 + 0x18);
          if (*(char *)plVar7 == '\0') {
            plVar4 = plVar2 + 2;
            plVar5 = plVar2 + 3;
            goto LAB_0093476c;
          }
          goto LAB_00934648;
        }
        *(undefined1 *)(plVar2 + 3) = 0;
        plVar4 = plVar7;
        plVar5 = (long *)plVar2[2];
        if ((long *)plVar2[2] == plVar7) goto LAB_0093462c;
LAB_0093461c:
        plVar4 = plVar5;
        if ((char)plVar4[3] == '\0') goto LAB_0093462c;
        plVar2 = (long *)((undefined8 *)plVar4[2])[*(long **)plVar4[2] == plVar4];
        plVar3 = plVar7;
      }
      plVar5 = plVar2;
      if ((char)plVar2[3] == '\0') {
        *(undefined1 *)(plVar2 + 3) = 1;
        *(undefined1 *)(plVar4 + 3) = 0;
        plVar5 = (long *)plVar2[1];
        *plVar4 = (long)plVar5;
        if (plVar5 != (long *)0x0) {
          plVar5[2] = (long)plVar4;
        }
        plVar2[2] = plVar4[2];
        puVar8 = (undefined8 *)plVar4[2];
        if ((long *)*puVar8 == plVar4) {
          *puVar8 = plVar2;
          plVar5 = (long *)*plVar4;
        }
        else {
          puVar8[1] = plVar2;
        }
        plVar2[1] = (long)plVar4;
        plVar4[2] = (long)plVar2;
        plVar7 = plVar2;
        if (plVar3 != plVar4) {
          plVar7 = plVar3;
        }
      }
      lVar9 = *plVar5;
      if ((lVar9 == 0) || (*(char *)(lVar9 + 0x18) != '\0')) {
        plVar4 = (long *)plVar5[1];
        if ((plVar4 == (long *)0x0) || ((char)plVar4[3] != '\0')) {
          plVar4 = (long *)plVar5[2];
          *(undefined1 *)(plVar5 + 3) = 0;
          plVar5 = plVar4;
          if (plVar4 != plVar7) goto LAB_0093461c;
LAB_0093462c:
          *(undefined1 *)(plVar4 + 3) = 1;
          return;
        }
        if (lVar9 != 0) {
          if (*(char *)(lVar9 + 0x18) == '\0') goto LAB_009346a0;
          plVar4 = (long *)plVar5[1];
        }
        plVar7 = plVar4 + 3;
        *(undefined1 *)plVar7 = 1;
        plVar2 = plVar5 + 3;
        *(undefined1 *)plVar2 = 0;
        lVar9 = *plVar4;
        plVar5[1] = lVar9;
        if (lVar9 != 0) {
          *(long **)(lVar9 + 0x10) = plVar5;
        }
        plVar3 = plVar4 + 2;
        *plVar3 = plVar5[2];
        lVar9 = 0;
        if (*(long **)plVar5[2] != plVar5) {
          lVar9 = 8;
        }
        *(long **)((long)plVar5[2] + lVar9) = plVar4;
        *plVar4 = (long)plVar5;
        plVar5[2] = (long)plVar4;
      }
      else {
LAB_009346a0:
        plVar2 = (long *)(lVar9 + 0x18);
        plVar3 = plVar5 + 2;
        plVar7 = plVar5 + 3;
      }
      plVar3 = (long *)*plVar3;
      *(char *)plVar7 = (char)plVar3[3];
      *(undefined1 *)(plVar3 + 3) = 1;
      *(undefined1 *)plVar2 = 1;
      lVar9 = *plVar3;
      lVar6 = *(long *)(lVar9 + 8);
      *plVar3 = lVar6;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 0x10) = plVar3;
      }
      *(long *)(lVar9 + 0x10) = plVar3[2];
      lVar6 = 0;
      if (*(long **)plVar3[2] != plVar3) {
        lVar6 = 8;
      }
      *(long *)((long)plVar3[2] + lVar6) = lVar9;
      *(long **)(lVar9 + 8) = plVar3;
      plVar3[2] = lVar9;
      return;
    }
    *(undefined1 *)(plVar4 + 3) = 1;
  }
  return;
}




void FUN_009347c4(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar1 + (ulong)param_2 * 0x18) & 1) != 0) {
    operator_delete(*(void **)(lVar1 + (ulong)param_2 * 0x18 + 0x10));
  }
  *(undefined4 *)(lVar1 + (ulong)param_2 * 0x18) = *(undefined4 *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = param_2;
  return;
}




ulong FUN_00934828(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_009349c8(param_1 + 0x18,auStack_50);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar3 = (ulong)(*(int *)(param_1 + 0x18) - 1);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar3 * 0x18);
  }
  FUN_008fcdb8(lVar2 + uVar3 * 0x18,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009348c8(uint *param_1,uint param_2,undefined8 param_3)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < param_2) {
      FUN_00934948(param_1,param_2);
    }
    uVar1 = (ulong)*param_1;
    if (*param_1 < param_2) {
      do {
        *(undefined8 *)(*(long *)(param_1 + 2) + uVar1 * 8) = param_3;
        uVar1 = uVar1 + 1;
      } while (param_2 != uVar1);
    }
    *param_1 = param_2;
  }
  return;
}




void FUN_00934948(uint *param_1,uint param_2)

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




void FUN_009349c8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar1 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar1 = uVar3;
    }
    FUN_00934a5c(param_1,uVar1);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar2 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x18;
  *(undefined8 *)(lVar2 + -8) = param_2[2];
  uVar5 = *param_2;
  *(undefined8 *)(lVar2 + -0x10) = param_2[1];
  *(undefined8 *)(lVar2 + -0x18) = uVar5;
  return;
}




void FUN_00934a5c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x18);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0x18;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -0x18;
        puVar4[2] = puVar2[2];
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 3;
        puVar2 = puVar2 + 3;
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




void FUN_00934aec(uint *param_1,uint param_2)

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




void FUN_00934b6c(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0xffffffffffffffff;
  uVar2 = FUN_00934bc8(param_2);
  *(int *)param_1 = (int)uVar2;
  uVar1 = FUN_00934c7c(uVar2,param_2 + 4,param_2 + 0xc,0x200,0x200);
  *(undefined4 *)((long)param_1 + 4) = uVar1;
  param_1[1] = *(undefined8 *)(param_2 + 4);
  param_1[2] = *(undefined8 *)(param_2 + 0xc);
  return;
}




undefined4 FUN_00934bc8(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 local_248 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f29f88();
  plVar6 = *(long **)(param_1 + 0x18);
  puVar4 = (undefined8 *)*plVar6;
  while (puVar4 != (undefined8 *)0x0) {
    plVar5 = (long *)*puVar4;
    puVar4 = (undefined8 *)*plVar5;
    if (puVar4 == (undefined8 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      do {
        local_248[uVar3 & 0xffffffff] = *puVar4;
        puVar4 = (undefined8 *)plVar5[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (puVar4 != (undefined8 *)0x0);
    }
    FUN_00f29fd8(uVar2,local_248,uVar3);
    plVar6 = plVar6 + 1;
    puVar4 = (undefined8 *)*plVar6;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




undefined4
FUN_00934c7c(ulong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f29ff4(param_1,param_4,param_5);
  local_50 = *param_2;
  local_58 = CONCAT44((float)((ulong)*param_3 >> 0x20) - (float)((ulong)local_50 >> 0x20),
                      (float)*param_3 - (float)local_50);
  FUN_00f2a028(param_1 & 0xffffffff,uVar2,&local_50,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00934d14(undefined4 *param_1)

{
  FUN_00f29f94(*param_1);
  return;
}




void FUN_00934d20(long param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_1 + 8);
  fVar1 = 1.0 / (*(float *)(param_1 + 0x10) - fVar3);
  fVar4 = 1.0 / (*(float *)(param_1 + 0xc) - fVar2);
  *param_3 = fVar1;
  param_3[1] = fVar4;
  *param_2 = -(fVar3 * fVar1);
  param_2[1] = -(fVar2 * fVar4);
  return;
}




void FUN_00934d50(undefined4 *param_1,uint param_2)

{
  FUN_00f2a048(*param_1,param_1[1],param_2 & 1);
  return;
}




void FUN_00934d64(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = FUN_01997b28();
  uVar2 = FUN_00f2a068(*param_1,param_1[1]);
  FUN_0199b2ec(uVar1,"FogOfWar.Texture",0,uVar2);
  fVar4 = (float)param_1[5];
  fVar5 = (float)param_1[2];
  fVar6 = 1.0 / ((float)param_1[4] - fVar5);
  fVar7 = 1.0 / ((float)param_1[3] - fVar4);
  pfVar3 = (float *)FUN_0199af30(uVar1,"FogOfWar.TranslateAndScale",0);
  *pfVar3 = -(fVar5 * fVar6);
  pfVar3[1] = -(fVar4 * fVar7);
  pfVar3[2] = fVar6;
  pfVar3[3] = fVar7;
  return;
}




void FUN_00934dfc(undefined4 *param_1)

{
  FUN_00f2a080(*param_1,param_1[1]);
  return;
}




void FUN_00934e0c(undefined4 *param_1,uint param_2)

{
  FUN_00f29fc0(*param_1,4 << (ulong)(param_2 & 0x1f));
  return;
}




uint FUN_00934e20(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 2;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  return uVar1 | param_1 << 2 | param_3 & 1;
}




void FUN_00934e3c(undefined4 *param_1)

{
  FUN_00f29fc0(*param_1,0x3fff8);
  return;
}




void FUN_00934e48(undefined8 param_1)

{
  ulong uVar1;
  void *pvVar2;
  
  uVar1 = FUN_00f29ecc();
  if ((uVar1 & 1) != 0) {
    pvVar2 = operator_new(0x18);
    FUN_00934b6c(pvVar2,param_1);
    DAT_02c7c028 = pvVar2;
  }
  return;
}




void FUN_00934e88(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_02c7c028;
  if (DAT_02c7c028 != (undefined4 *)0x0) {
    FUN_00f29f94(*DAT_02c7c028);
    operator_delete(puVar1);
    DAT_02c7c028 = (undefined4 *)0x0;
  }
  return;
}




undefined8 FUN_00934ec0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00f29ecc();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_0092ea58();
    return uVar2;
  }
  return 0;
}




bool FUN_00934ee4(void)

{
  return DAT_02c7c028 != 0;
}




void FUN_00934ef8(uint param_1)

{
  if (DAT_02c7c028 != (undefined4 *)0x0) {
    FUN_00f29fc0(*DAT_02c7c028,4 << (ulong)(param_1 & 0x1f));
    return;
  }
  return;
}




void FUN_00934f20(void)

{
  if (DAT_02c7c028 != (undefined4 *)0x0) {
    FUN_00f29fc0(*DAT_02c7c028,0x3fff8);
    return;
  }
  return;
}




void FUN_00934f3c(void)

{
  if (DAT_02c7c028 != 0) {
    FUN_00f29f68();
    return;
  }
  return;
}




void FUN_00934f50(uint param_1)

{
  if (DAT_02c7c028 != (undefined4 *)0x0) {
    FUN_00f2a048(*DAT_02c7c028,DAT_02c7c028[1],param_1 & 1);
    return;
  }
  return;
}




void FUN_00934f70(void)

{
  if (DAT_02c7c028 != 0) {
    FUN_00934d64();
    return;
  }
  return;
}




void FUN_00934f84(void)

{
  if (DAT_02c7c028 != 0) {
    FUN_00f29f48();
    return;
  }
  return;
}




uint FUN_00934f98(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = FUN_00d55870();
  uVar1 = *(uint *)(param_1 + 0x2f4);
  iVar2 = *(int *)(param_1 + 0x260);
  iVar4 = FUN_00cedce4();
  return (uVar1 & 1) << 1 | 4 << (ulong)(uVar3 & 0x1f) | (uint)(iVar2 == iVar4);
}




undefined8 FUN_00934ff0(void)

{
  undefined8 uVar1;
  
  if (DAT_02c7c028 != (undefined4 *)0x0) {
    uVar1 = FUN_00f2a080(*DAT_02c7c028,DAT_02c7c028[1]);
    return uVar1;
  }
  return 0;
}




void thunk_FUN_00934f70(void)

{
  if (DAT_02c7c028 != 0) {
    FUN_00934d64();
    return;
  }
  return;
}

