// functions/00ee1 — 14 functions
#include "libGameKindred.h"




long FUN_00ee123c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = (param_1 + param_2 + -1) / param_2;
  }
  return lVar1;
}




long FUN_00ee124c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = (param_1 + param_2 + -1) / param_2;
  }
  return lVar1 * param_2;
}




void FUN_00ee1260(long param_1,int param_2,long param_3,int param_4,int param_5,uint param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (0 < param_5) {
    param_5 = param_5 + 1;
    puVar1 = (undefined8 *)(param_3 + (long)param_4 * 8);
    puVar2 = (undefined8 *)(param_1 + (long)param_2 * 8);
    do {
      memcpy((void *)*puVar1,(void *)*puVar2,(ulong)param_6);
      param_5 = param_5 + -1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (1 < param_5);
  }
  return;
}




void FUN_00ee12b4(void *param_1,void *param_2,ulong param_3)

{
  memcpy(param_2,param_1,(param_3 & 0xffffffff) << 7);
  return;
}




void FUN_00ee12cc(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  char *__s;
  long lVar5;
  byte local_44 [4];
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[1] = 0;
  lVar3 = FUN_00ee2424();
  local_40 = lVar3;
  puVar4 = (undefined8 *)FUN_00ee23e8(param_1,0xa8);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_00ee242c(param_1);
    *(undefined8 *)(*param_1 + 0x28) = 0x38;
    (**(code **)*param_1)(param_1);
  }
  puVar4[2] = FUN_00ee1728;
  puVar4[3] = FUN_00ee1838;
  puVar4[6] = FUN_00ee1a90;
  puVar4[7] = FUN_00ee1c78;
  puVar4[8] = FUN_00ee1e58;
  puVar4[9] = FUN_00ee203c;
  puVar4[0xb] = lVar3;
  puVar4[0xc] = 1000000000;
  puVar4[10] = FUN_00ee2184;
  puVar4[1] = FUN_00ee1628;
  *puVar4 = FUN_00ee1480;
  puVar4[4] = FUN_00ee1950;
  puVar4[5] = FUN_00ee19f0;
  lVar3 = 0;
  do {
    lVar5 = lVar3 + -0x10;
    *(undefined8 *)((long)puVar4 + lVar3 + 0x70) = 0;
    *(undefined8 *)((long)puVar4 + lVar3 + 0x68) = 0;
    *(undefined8 *)((long)puVar4 + lVar3 + 0x80) = 0;
    *(undefined8 *)((long)puVar4 + lVar3 + 0x78) = 0;
    lVar3 = lVar5;
  } while (lVar5 != -0x10);
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0xa8;
  param_1[1] = (long)puVar4;
  __s = getenv("JPEGMEM");
  if (__s != (char *)0x0) {
    local_44[0] = 0x78;
    iVar2 = sscanf(__s,"%ld%c",&local_40,local_44);
    if (0 < iVar2) {
      if ((local_44[0] | 0x20) == 0x6d) {
        local_40 = local_40 * 1000;
      }
      puVar4[0xb] = local_40 * 1000;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00ee1480(long *param_1,uint param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  lVar7 = param_1[1];
  if (0x3b9ac9e8 < param_3) {
    *(undefined8 *)(*param_1 + 0x28) = 0x100000038;
    (**(code **)*param_1)(param_1);
  }
  lVar1 = 0;
  if ((param_3 & 7) != 0) {
    lVar1 = 8 - (param_3 & 7);
  }
  if (1 < param_2) {
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x28) = 0xf;
    *(uint *)(lVar5 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar9 = (undefined8 *)(lVar7 + (long)(int)param_2 * 8 + 0x68);
  puVar6 = (undefined8 *)*puVar9;
  param_3 = lVar1 + param_3;
  if (puVar6 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    do {
      puVar4 = puVar6;
      if (param_3 <= (ulong)puVar4[2]) goto LAB_00ee15f0;
      puVar6 = (undefined8 *)*puVar4;
      puVar8 = puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
  puVar2 = &DAT_01bf3638;
  if (puVar8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01bf3648;
  }
  uVar3 = 0x3b9ac9e8 - param_3;
  if (*(ulong *)(puVar2 + (long)(int)param_2 * 8) <= 0x3b9ac9e8 - param_3) {
    uVar3 = *(ulong *)(puVar2 + (long)(int)param_2 * 8);
  }
  lVar5 = uVar3 + param_3;
  lVar1 = lVar5 + 0x18;
  puVar4 = (undefined8 *)FUN_00ee23e8(param_1,lVar1);
  while (puVar4 == (undefined8 *)0x0) {
    if (uVar3 < 100) {
      *(undefined8 *)(*param_1 + 0x28) = 0x200000038;
      (**(code **)*param_1)(param_1);
    }
    lVar5 = (uVar3 >> 1) + param_3;
    lVar1 = lVar5 + 0x18;
    puVar4 = (undefined8 *)FUN_00ee23e8(param_1,lVar1);
    uVar3 = uVar3 >> 1;
  }
  if (puVar8 != (undefined8 *)0x0) {
    puVar9 = puVar8;
  }
  *(long *)(lVar7 + 0x98) = *(long *)(lVar7 + 0x98) + lVar1;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = lVar5;
  *puVar9 = puVar4;
LAB_00ee15f0:
  lVar7 = puVar4[1];
  puVar4[1] = lVar7 + param_3;
  puVar4[2] = puVar4[2] - param_3;
  return (long)puVar4 + lVar7 + 0x18;
}




undefined8 * FUN_00ee1628(long *param_1,uint param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = param_1[1];
  if (0x3b9ac9e8 < param_3) {
    *(undefined8 *)(*param_1 + 0x28) = 0x300000038;
    (**(code **)*param_1)(param_1);
  }
  lVar2 = 0;
  if ((param_3 & 7) != 0) {
    lVar2 = 8 - (param_3 & 7);
  }
  if (1 < param_2) {
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x28) = 0xf;
    *(uint *)(lVar4 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  lVar4 = lVar2 + param_3 + 0x18;
  puVar3 = (undefined8 *)FUN_00ee23f8(param_1,lVar4);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)(*param_1 + 0x28) = 0x400000038;
    (**(code **)*param_1)(param_1);
  }
  lVar1 = lVar6 + (long)(int)param_2 * 8;
  *(long *)(lVar6 + 0x98) = *(long *)(lVar6 + 0x98) + lVar4;
  uVar5 = *(undefined8 *)(lVar1 + 0x78);
  puVar3[1] = lVar2 + param_3;
  puVar3[2] = 0;
  *puVar3 = uVar5;
  *(undefined8 **)(lVar1 + 0x78) = puVar3;
  return puVar3 + 3;
}




long FUN_00ee1728(long *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  lVar6 = param_1[1];
  uVar8 = 0;
  if (param_3 != 0) {
    uVar8 = 0x3b9ac9e8 / param_3;
  }
  if (0x3b9ac9e8 < param_3) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x48;
    (*(code *)*puVar4)(param_1);
  }
  if (param_4 <= uVar8) {
    uVar8 = param_4;
  }
  *(uint *)(lVar6 + 0xa0) = uVar8;
  lVar6 = FUN_00ee1480(param_1,param_2,(ulong)param_4 << 3);
  if (param_4 != 0) {
    uVar7 = 0;
    do {
      uVar2 = uVar8;
      if (param_4 - uVar7 <= uVar8) {
        uVar2 = param_4 - uVar7;
      }
      lVar3 = FUN_00ee1628(param_1,param_2,(ulong)uVar2 * (ulong)param_3);
      if (uVar2 != 0) {
        uVar1 = uVar7 + ~param_4;
        if (uVar1 <= ~uVar8) {
          uVar1 = ~uVar8;
        }
        iVar5 = uVar1 + 1;
        uVar8 = uVar7;
        do {
          *(long *)(lVar6 + (ulong)uVar8 * 8) = lVar3;
          uVar8 = uVar8 + 1;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + (ulong)param_3;
        } while (iVar5 != 0);
        uVar7 = (uVar7 - 1) - uVar1;
      }
      uVar8 = uVar2;
    } while (uVar7 < param_4);
  }
  return lVar6;
}




long FUN_00ee1838(long *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar7 = param_1[1];
  uVar8 = (ulong)param_3 * 0x80;
  uVar3 = 0;
  if ((ulong)param_3 != 0) {
    uVar3 = 0x3b9ac9e8 / uVar8;
  }
  if (0x773593 < param_3) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x48;
    (*(code *)*puVar5)(param_1);
  }
  uVar10 = (uint)uVar3;
  if (param_4 <= uVar3) {
    uVar10 = param_4;
  }
  *(uint *)(lVar7 + 0xa0) = uVar10;
  lVar7 = FUN_00ee1480(param_1,param_2,(ulong)param_4 << 3);
  if (param_4 != 0) {
    uVar9 = 0;
    do {
      uVar2 = uVar10;
      if (param_4 - uVar9 <= uVar10) {
        uVar2 = param_4 - uVar9;
      }
      lVar4 = FUN_00ee1628(param_1,param_2,uVar8 * uVar2);
      if (uVar2 != 0) {
        uVar1 = uVar9 + ~param_4;
        if (uVar1 <= ~uVar10) {
          uVar1 = ~uVar10;
        }
        iVar6 = uVar1 + 1;
        uVar10 = uVar9;
        do {
          *(long *)(lVar7 + (ulong)uVar10 * 8) = lVar4;
          uVar10 = uVar10 + 1;
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + uVar8;
        } while (iVar6 != 0);
        uVar9 = (uVar9 - 1) - uVar1;
      }
      uVar10 = uVar2;
    } while (uVar9 < param_4);
  }
  return lVar7;
}




void FUN_00ee1950(long *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[1];
  if (param_2 != 1) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0xf;
    *(int *)(lVar2 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar1 = (undefined8 *)FUN_00ee1480(param_1,param_2,0x98);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = param_5;
  *(undefined4 *)((long)puVar1 + 0xc) = param_4;
  *(undefined4 *)(puVar1 + 2) = param_6;
  *(undefined4 *)((long)puVar1 + 0x24) = param_3;
  *(undefined4 *)((long)puVar1 + 0x2c) = 0;
  puVar1[6] = *(undefined8 *)(lVar3 + 0x88);
  *(undefined8 **)(lVar3 + 0x88) = puVar1;
  return;
}




void FUN_00ee19f0(long *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[1];
  if (param_2 != 1) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0xf;
    *(int *)(lVar2 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar1 = (undefined8 *)FUN_00ee1480(param_1,param_2,0x98);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = param_5;
  *(undefined4 *)((long)puVar1 + 0xc) = param_4;
  *(undefined4 *)(puVar1 + 2) = param_6;
  *(undefined4 *)((long)puVar1 + 0x24) = param_3;
  *(undefined4 *)((long)puVar1 + 0x2c) = 0;
  puVar1[6] = *(undefined8 *)(lVar3 + 0x90);
  *(undefined8 **)(lVar3 + 0x90) = puVar1;
  return;
}




void FUN_00ee1a90(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 8);
  plVar5 = *(long **)(lVar8 + 0x88);
  if (plVar5 == (long *)0x0) {
    lVar7 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    lVar7 = 0;
    do {
      if (*plVar5 == 0) {
        lVar6 = lVar6 + (ulong)*(uint *)((long)plVar5 + 0xc) * (ulong)*(uint *)(plVar5 + 2);
        lVar7 = lVar7 + (ulong)*(uint *)(plVar5 + 1) * (ulong)*(uint *)((long)plVar5 + 0xc);
      }
      plVar5 = (long *)plVar5[6];
    } while (plVar5 != (long *)0x0);
  }
  for (plVar5 = *(long **)(lVar8 + 0x90); plVar5 != (long *)0x0; plVar5 = (long *)plVar5[6]) {
    if (*plVar5 == 0) {
      lVar6 = lVar6 + (ulong)*(uint *)(plVar5 + 2) * (ulong)*(uint *)((long)plVar5 + 0xc) * 0x80;
      lVar7 = lVar7 + (ulong)*(uint *)((long)plVar5 + 0xc) * (ulong)*(uint *)(plVar5 + 1) * 0x80;
    }
  }
  if (0 < lVar6) {
    lVar3 = FUN_00ee2408(param_1,lVar6,lVar7,*(undefined8 *)(lVar8 + 0x98));
    if (lVar3 < lVar7) {
      lVar7 = 0;
      if (lVar6 != 0) {
        lVar7 = lVar3 / lVar6;
      }
      if (lVar7 < 2) {
        lVar7 = 1;
      }
    }
    else {
      lVar7 = 1000000000;
    }
    for (plVar5 = *(long **)(lVar8 + 0x88); plVar5 != (long *)0x0; plVar5 = (long *)plVar5[6]) {
      if (*plVar5 == 0) {
        uVar4 = (ulong)*(uint *)(plVar5 + 1);
        uVar1 = *(uint *)(plVar5 + 2);
        lVar6 = 0;
        if ((ulong)uVar1 != 0) {
          lVar6 = (long)(uVar4 - 1) / (long)(ulong)uVar1;
        }
        if (lVar6 < lVar7) {
          *(uint *)((long)plVar5 + 0x14) = *(uint *)(plVar5 + 1);
        }
        else {
          *(uint *)((long)plVar5 + 0x14) = uVar1 * (int)lVar7;
          FUN_00ee2410(param_1,plVar5 + 7,*(uint *)((long)plVar5 + 0xc) * uVar4);
          uVar4 = (ulong)*(uint *)((long)plVar5 + 0x14);
          *(undefined4 *)((long)plVar5 + 0x2c) = 1;
        }
        lVar6 = FUN_00ee1728(param_1,1,*(undefined4 *)((long)plVar5 + 0xc),uVar4);
        *plVar5 = lVar6;
        uVar2 = *(undefined4 *)(lVar8 + 0xa0);
        *(undefined4 *)((long)plVar5 + 0x1c) = 0;
        *(undefined4 *)(plVar5 + 4) = 0;
        *(undefined4 *)(plVar5 + 5) = 0;
        *(undefined4 *)(plVar5 + 3) = uVar2;
      }
    }
    for (plVar5 = *(long **)(lVar8 + 0x90); plVar5 != (long *)0x0; plVar5 = (long *)plVar5[6]) {
      if (*plVar5 == 0) {
        uVar4 = (ulong)*(uint *)(plVar5 + 1);
        uVar1 = *(uint *)(plVar5 + 2);
        lVar6 = 0;
        if ((ulong)uVar1 != 0) {
          lVar6 = (long)(uVar4 - 1) / (long)(ulong)uVar1;
        }
        if (lVar6 < lVar7) {
          *(uint *)((long)plVar5 + 0x14) = *(uint *)(plVar5 + 1);
        }
        else {
          *(uint *)((long)plVar5 + 0x14) = uVar1 * (int)lVar7;
          FUN_00ee2410(param_1,plVar5 + 7,uVar4 * *(uint *)((long)plVar5 + 0xc) * 0x80);
          uVar4 = (ulong)*(uint *)((long)plVar5 + 0x14);
          *(undefined4 *)((long)plVar5 + 0x2c) = 1;
        }
        lVar6 = FUN_00ee1838(param_1,1,*(undefined4 *)((long)plVar5 + 0xc),uVar4);
        *plVar5 = lVar6;
        uVar2 = *(undefined4 *)(lVar8 + 0xa0);
        *(undefined4 *)((long)plVar5 + 0x1c) = 0;
        *(undefined4 *)(plVar5 + 4) = 0;
        *(undefined4 *)(plVar5 + 5) = 0;
        *(undefined4 *)(plVar5 + 3) = uVar2;
      }
    }
  }
  return;
}




long FUN_00ee1c78(long *param_1,long *param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  
  uVar1 = param_4 + param_3;
  if (((*(uint *)(param_2 + 1) < uVar1) || (*(uint *)(param_2 + 2) < param_4)) || (*param_2 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x17;
    (*(code *)*puVar5)(param_1);
  }
  if ((param_3 < *(uint *)((long)param_2 + 0x1c)) ||
     (*(int *)((long)param_2 + 0x14) + *(uint *)((long)param_2 + 0x1c) < uVar1)) {
    if (*(int *)((long)param_2 + 0x2c) == 0) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x47;
      (*(code *)*puVar5)(param_1);
    }
    if ((int)param_2[5] != 0) {
      FUN_00ee21d4(param_1,param_2,1);
      *(undefined4 *)(param_2 + 5) = 0;
    }
    uVar4 = param_3;
    if ((param_3 <= *(uint *)((long)param_2 + 0x1c)) &&
       (lVar6 = (ulong)uVar1 - (ulong)*(uint *)((long)param_2 + 0x14), uVar4 = (uint)lVar6,
       lVar6 < 1)) {
      uVar4 = 0;
    }
    *(uint *)((long)param_2 + 0x1c) = uVar4;
    FUN_00ee21d4(param_1,param_2,0);
  }
  uVar4 = *(uint *)(param_2 + 4);
  if (uVar1 <= uVar4) goto LAB_00ee1e28;
  if (uVar4 < param_3) {
    uVar4 = param_3;
    if (param_5 == 0) {
      bVar3 = false;
    }
    else {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x17;
      (*(code *)*puVar5)(param_1);
LAB_00ee1da4:
      bVar3 = true;
      *(uint *)(param_2 + 4) = uVar1;
    }
  }
  else {
    if (param_5 != 0) goto LAB_00ee1da4;
    bVar3 = false;
  }
  if (*(int *)((long)param_2 + 0x24) == 0) {
    if (!bVar3) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x17;
      (*(code *)*puVar5)(param_1);
    }
  }
  else {
    uVar4 = uVar4 - *(int *)((long)param_2 + 0x1c);
    uVar1 = uVar1 - *(int *)((long)param_2 + 0x1c);
    if (uVar4 < uVar1) {
      uVar2 = *(uint *)((long)param_2 + 0xc);
      uVar7 = (ulong)uVar4;
      do {
        memset(*(void **)(*param_2 + uVar7 * 8),0,(ulong)uVar2);
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
  }
LAB_00ee1e28:
  if (param_5 != 0) {
    *(undefined4 *)(param_2 + 5) = 1;
  }
  return *param_2 + (ulong)(param_3 - *(int *)((long)param_2 + 0x1c)) * 8;
}




long FUN_00ee1e58(long *param_1,long *param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  
  uVar1 = param_4 + param_3;
  if (((*(uint *)(param_2 + 1) < uVar1) || (*(uint *)(param_2 + 2) < param_4)) || (*param_2 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x17;
    (*(code *)*puVar5)(param_1);
  }
  if ((param_3 < *(uint *)((long)param_2 + 0x1c)) ||
     (*(int *)((long)param_2 + 0x14) + *(uint *)((long)param_2 + 0x1c) < uVar1)) {
    if (*(int *)((long)param_2 + 0x2c) == 0) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x47;
      (*(code *)*puVar5)(param_1);
    }
    if ((int)param_2[5] != 0) {
      FUN_00ee22dc(param_1,param_2,1);
      *(undefined4 *)(param_2 + 5) = 0;
    }
    uVar4 = param_3;
    if ((param_3 <= *(uint *)((long)param_2 + 0x1c)) &&
       (lVar6 = (ulong)uVar1 - (ulong)*(uint *)((long)param_2 + 0x14), uVar4 = (uint)lVar6,
       lVar6 < 1)) {
      uVar4 = 0;
    }
    *(uint *)((long)param_2 + 0x1c) = uVar4;
    FUN_00ee22dc(param_1,param_2,0);
  }
  uVar4 = *(uint *)(param_2 + 4);
  if (uVar1 <= uVar4) goto LAB_00ee200c;
  if (uVar4 < param_3) {
    uVar4 = param_3;
    if (param_5 == 0) {
      bVar3 = false;
    }
    else {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x17;
      (*(code *)*puVar5)(param_1);
LAB_00ee1f84:
      bVar3 = true;
      *(uint *)(param_2 + 4) = uVar1;
    }
  }
  else {
    if (param_5 != 0) goto LAB_00ee1f84;
    bVar3 = false;
  }
  if (*(int *)((long)param_2 + 0x24) == 0) {
    if (!bVar3) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x17;
      (*(code *)*puVar5)(param_1);
    }
  }
  else {
    uVar4 = uVar4 - *(int *)((long)param_2 + 0x1c);
    uVar1 = uVar1 - *(int *)((long)param_2 + 0x1c);
    if (uVar4 < uVar1) {
      uVar2 = *(uint *)((long)param_2 + 0xc);
      uVar7 = (ulong)uVar4;
      do {
        memset(*(void **)(*param_2 + uVar7 * 8),0,(ulong)uVar2 << 7);
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
  }
LAB_00ee200c:
  if (param_5 != 0) {
    *(undefined4 *)(param_2 + 5) = 1;
  }
  return *param_2 + (ulong)(param_3 - *(int *)((long)param_2 + 0x1c)) * 8;
}

