// functions/00b91 — 16 functions
#include "libGameKindred.h"




void FUN_00b91984(long param_1)

{
  uint *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  
  puVar1 = (uint *)(param_1 + 0x12040);
  plVar2 = (long *)(param_1 + 0x12048);
  if (*puVar1 != 0) {
    uVar6 = 0;
    do {
      lVar4 = *plVar2;
      if (*(long *)(lVar4 + (ulong)uVar6 * 8) == 0) goto LAB_00b91a1c;
      uVar7 = (ulong)uVar6;
      uVar3 = FUN_00f02540();
      if ((uVar3 & 1) != 0) {
        FUN_00f01a4c(*(undefined8 *)(*plVar2 + uVar7 * 8),1);
      }
      plVar5 = (long *)(*plVar2 + uVar7 * 8);
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 8))();
        plVar5 = (long *)(*plVar2 + uVar7 * 8);
      }
      *plVar5 = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *puVar1);
  }
  lVar4 = *plVar2;
LAB_00b91a1c:
  if (lVar4 != 0) {
    *puVar1 = 0;
  }
  return;
}




void FUN_00b91a34(long param_1)

{
  uint *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  
  puVar1 = (uint *)(param_1 + 0x12060);
  plVar2 = (long *)(param_1 + 0x12068);
  if (*puVar1 != 0) {
    uVar6 = 0;
    do {
      lVar4 = *plVar2;
      if (*(long *)(lVar4 + (ulong)uVar6 * 8) == 0) goto LAB_00b91acc;
      uVar7 = (ulong)uVar6;
      uVar3 = FUN_00f02540();
      if ((uVar3 & 1) != 0) {
        FUN_00f01a4c(*(undefined8 *)(*plVar2 + uVar7 * 8),1);
      }
      plVar5 = (long *)(*plVar2 + uVar7 * 8);
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 8))();
        plVar5 = (long *)(*plVar2 + uVar7 * 8);
      }
      *plVar5 = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *puVar1);
  }
  lVar4 = *plVar2;
LAB_00b91acc:
  if (lVar4 != 0) {
    *puVar1 = 0;
  }
  return;
}




void FUN_00b91ae4(long param_1)

{
  uint *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  
  *(undefined8 *)(param_1 + 0x120b0) = 0;
  puVar1 = (uint *)(param_1 + 0x12050);
  plVar2 = (long *)(param_1 + 0x12058);
  if (*puVar1 != 0) {
    uVar6 = 0;
    do {
      lVar4 = *plVar2;
      if (*(long *)(lVar4 + (ulong)uVar6 * 8) == 0) goto LAB_00b91b8c;
      uVar7 = (ulong)uVar6;
      uVar3 = FUN_00f02540();
      if ((uVar3 & 1) != 0) {
        FUN_00f01a4c(*(undefined8 *)(*plVar2 + uVar7 * 8),1);
      }
      plVar5 = (long *)(*plVar2 + uVar7 * 8);
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 8))();
        plVar5 = (long *)(*plVar2 + uVar7 * 8);
      }
      *plVar5 = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *puVar1);
  }
  lVar4 = *plVar2;
LAB_00b91b8c:
  if (lVar4 != 0) {
    *puVar1 = 0;
  }
  puVar1 = (uint *)(param_1 + 0x12090);
  plVar2 = (long *)(param_1 + 0x12098);
  if (*puVar1 != 0) {
    uVar6 = 0;
    do {
      lVar4 = *plVar2;
      if (*(long *)(lVar4 + (ulong)uVar6 * 8) == 0) goto LAB_00b91c1c;
      uVar7 = (ulong)uVar6;
      uVar3 = FUN_00f02540();
      if ((uVar3 & 1) != 0) {
        FUN_00f01a4c(*(undefined8 *)(*plVar2 + uVar7 * 8),1);
      }
      plVar5 = (long *)(*plVar2 + uVar7 * 8);
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 8))();
        plVar5 = (long *)(*plVar2 + uVar7 * 8);
      }
      *plVar5 = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *puVar1);
  }
  lVar4 = *plVar2;
LAB_00b91c1c:
  if (lVar4 != 0) {
    *puVar1 = 0;
  }
  puVar1 = (uint *)(param_1 + 0x120a0);
  plVar2 = (long *)(param_1 + 0x120a8);
  if (*puVar1 != 0) {
    uVar6 = 0;
    do {
      lVar4 = *plVar2;
      if (*(long *)(lVar4 + (ulong)uVar6 * 8) == 0) goto LAB_00b91cac;
      uVar7 = (ulong)uVar6;
      uVar3 = FUN_00f02540();
      if ((uVar3 & 1) != 0) {
        FUN_00f01a4c(*(undefined8 *)(*plVar2 + uVar7 * 8),1);
      }
      plVar5 = (long *)(*plVar2 + uVar7 * 8);
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 8))();
        plVar5 = (long *)(*plVar2 + uVar7 * 8);
      }
      *plVar5 = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *puVar1);
  }
  lVar4 = *plVar2;
LAB_00b91cac:
  if (lVar4 != 0) {
    *puVar1 = 0;
  }
  puVar1 = (uint *)(param_1 + 0x12070);
  plVar2 = (long *)(param_1 + 0x12078);
  if (*puVar1 != 0) {
    uVar6 = 0;
    do {
      lVar4 = *plVar2;
      if (*(long *)(lVar4 + (ulong)uVar6 * 8) == 0) goto LAB_00b91d3c;
      uVar7 = (ulong)uVar6;
      uVar3 = FUN_00f02540();
      if ((uVar3 & 1) != 0) {
        FUN_00f01a4c(*(undefined8 *)(*plVar2 + uVar7 * 8),1);
      }
      plVar5 = (long *)(*plVar2 + uVar7 * 8);
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 8))();
        plVar5 = (long *)(*plVar2 + uVar7 * 8);
      }
      *plVar5 = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *puVar1);
  }
  lVar4 = *plVar2;
LAB_00b91d3c:
  if (lVar4 != 0) {
    *puVar1 = 0;
  }
  puVar1 = (uint *)(param_1 + 0x12080);
  plVar2 = (long *)(param_1 + 0x12088);
  if (*puVar1 != 0) {
    uVar6 = 0;
    do {
      lVar4 = *plVar2;
      if (*(long *)(lVar4 + (ulong)uVar6 * 8) == 0) goto LAB_00b91dcc;
      uVar7 = (ulong)uVar6;
      uVar3 = FUN_00f02540();
      if ((uVar3 & 1) != 0) {
        FUN_00f01a4c(*(undefined8 *)(*plVar2 + uVar7 * 8),1);
      }
      plVar5 = (long *)(*plVar2 + uVar7 * 8);
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 8))();
        plVar5 = (long *)(*plVar2 + uVar7 * 8);
      }
      *plVar5 = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *puVar1);
  }
  lVar4 = *plVar2;
LAB_00b91dcc:
  if (lVar4 != 0) {
    *puVar1 = 0;
  }
  return;
}




void FUN_00b91de4(uint *param_1)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  
  uVar3 = *param_1;
  if (uVar3 != 0) {
    uVar4 = 0;
    lVar5 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar5);
      uVar6 = (ulong)uVar1;
      if (uVar1 != 0xffffffff) {
        lVar7 = *(long *)(param_1 + 8);
        pbVar8 = (byte *)(lVar7 + uVar6 * 0x38);
        pvVar2 = *(void **)(pbVar8 + 0x30);
        if (pvVar2 != (void *)0x0) {
          lVar9 = lVar7 + uVar6 * 0x38;
          operator_delete__(pvVar2);
          *(undefined8 *)(lVar9 + 0x28) = 0;
          *(undefined8 *)(lVar9 + 0x30) = 0;
        }
        pvVar2 = *(void **)(lVar7 + uVar6 * 0x38 + 0x20);
        if (pvVar2 != (void *)0x0) {
          lVar9 = lVar7 + uVar6 * 0x38;
          operator_delete__(pvVar2);
          *(undefined8 *)(lVar9 + 0x18) = 0;
          *(undefined8 *)(lVar9 + 0x20) = 0;
        }
        if ((*pbVar8 & 1) != 0) {
          operator_delete(*(void **)(lVar7 + uVar6 * 0x38 + 0x10));
        }
        *(uint *)(lVar7 + uVar6 * 0x38) = param_1[10];
        uVar3 = *param_1;
        param_1[10] = uVar1;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (uVar4 < uVar3);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_00b91ee4(long param_1)

{
  FUN_00b90b14(param_1 + -0x368);
  return;
}




void FUN_00b91eec(long param_1)

{
  FUN_00b90b14(param_1 + -0x380);
  return;
}




void FUN_00b91ef4(long param_1)

{
  FUN_00b90b14(param_1 + -0x398);
  return;
}




void FUN_00b91efc(long param_1)

{
  FUN_00b90b14(param_1 + -0x3a0);
  return;
}




void FUN_00b91f04(long param_1)

{
  FUN_00b90b14(param_1 + -0x3b8);
  return;
}




void FUN_00b91f0c(void *param_1)

{
  FUN_00b90b14();
  operator_delete(param_1);
  return;
}




void FUN_00b91f30(long param_1)

{
  FUN_00b90b14((void *)(param_1 + -0x368));
  operator_delete((void *)(param_1 + -0x368));
  return;
}




void FUN_00b91f58(long param_1)

{
  FUN_00b90b14((void *)(param_1 + -0x380));
  operator_delete((void *)(param_1 + -0x380));
  return;
}




void FUN_00b91f80(long param_1)

{
  FUN_00b90b14((void *)(param_1 + -0x398));
  operator_delete((void *)(param_1 + -0x398));
  return;
}




void FUN_00b91fa8(long param_1)

{
  FUN_00b90b14((void *)(param_1 + -0x3a0));
  operator_delete((void *)(param_1 + -0x3a0));
  return;
}




void FUN_00b91fd0(long param_1)

{
  FUN_00b90b14((void *)(param_1 + -0x3b8));
  operator_delete((void *)(param_1 + -0x3b8));
  return;
}




void FUN_00b91ff8(long param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar5 = FUN_00e80f6c();
  if ((uVar5 & 1) != 0) {
    cVar2 = *(char *)(param_1 + 0x12672);
    FUN_009580b8();
    dVar10 = (double)FUN_00961684();
    if ((bool)cVar2 != 0.0 < dVar10) {
      FUN_00b922c0(param_1);
      FUN_009580b8();
      dVar10 = (double)FUN_00961684();
      *(char *)(param_1 + 0x12672) = 0.0 < dVar10;
    }
  }
  uVar4 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar4 & 1,auStack_54,auStack_58,auStack_5c);
  fVar8 = *(float *)(param_1 + 0x12650) * 0.5;
  fVar9 = *(float *)(param_1 + 0x38f4);
  if (DAT_02be9bfc <= *(float *)(param_1 + 0x38f4)) {
    fVar9 = DAT_02be9bfc;
  }
  lVar1 = param_1 + 0x35e0;
  if ((*(float *)(param_1 + 0x3620) != fVar8) || (*(float *)(param_1 + 0x3624) != fVar9)) {
    *(float *)(param_1 + 0x3620) = fVar8;
    *(float *)(param_1 + 0x3624) = fVar9;
    FUN_0091ada4(lVar1);
  }
  local_50 = 0x3f8000003f000000;
  (**(code **)(*(long *)(param_1 + 0x35e0) + 0x28))(lVar1,&local_50);
  fVar9 = *(float *)(param_1 + 0x38f4);
  if (0.0 < fVar9) {
    fVar8 = fVar9 / DAT_02be9bfc;
    if (1.0 < fVar8) {
      fVar8 = 1.0;
    }
    fVar8 = fVar8 * 0.33 + 0.66;
    if ((*(float *)(param_1 + 0x3628) != fVar8) || (*(float *)(param_1 + 0x362c) != fVar8)) {
      *(float *)(param_1 + 0x3628) = fVar8;
      *(float *)(param_1 + 0x362c) = fVar8;
      FUN_0091ada4(lVar1);
      fVar9 = *(float *)(param_1 + 0x38f4);
    }
    if (fVar9 <= DAT_02be9bfc) {
      fVar9 = fVar9 / DAT_02be9bfc;
      uVar4 = *(uint *)(param_1 + 0x3664);
      if (1.0 < fVar9) {
        fVar9 = 1.0;
      }
      uVar7 = (uint)((fVar9 * 0.2 + 0.12) * 255.0);
      if ((uVar4 >> 7 & 0xff) != uVar7) {
        uVar4 = uVar4 & 0xffff8000 | uVar4 & 0x7f | (uVar7 & 0xff) << 7;
        goto LAB_00b921c8;
      }
    }
    else if ((~*(uint *)(param_1 + 0x3664) & 0x7f80) != 0) {
      uVar4 = *(uint *)(param_1 + 0x3664) | 0x7f80;
LAB_00b921c8:
      *(uint *)(param_1 + 0x3664) = uVar4;
      FUN_0091ada4(lVar1);
    }
    FUN_00f0d7fc(lVar1,&DAT_01bee7fa);
  }
  uVar4 = *(uint *)(param_1 + 0x944);
  if ((((*(int *)(param_1 + 0x12050) == 0) && (*(int *)(param_1 + 0x12090) == 0)) &&
      (*(int *)(param_1 + 0x120a0) == 0)) &&
     ((*(int *)(param_1 + 0x12070) == 0 && (*(int *)(param_1 + 0x12080) == 0)))) {
    uVar7 = (uint)(*(int *)(param_1 + 0x12660) != 0);
    *(uint *)(param_1 + 0x944) = uVar4 & 0xfffffff8 | uVar4 & 3 | uVar7 << 2;
    if ((uVar4 >> 2 & 1) == uVar7) goto LAB_00b92250;
  }
  else {
    *(uint *)(param_1 + 0x944) = uVar4 | 4;
    if ((uVar4 >> 2 & 1) != 0) goto LAB_00b92250;
  }
  FUN_00b9239c(param_1);
LAB_00b92250:
  uVar6 = FUN_009580b8();
  uVar4 = FUN_00961a78(uVar6,0);
  FUN_00b09454(param_1 + 0x8c0,uVar4 & 1);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

