// functions/00d23 — 13 functions
#include "libGameKindred.h"




undefined8 thunk_FUN_00d23720(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)*param_1;
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if ((int)param_1[1] != (int)plVar1[1]) {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
      return 0;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))();
  }
  return uVar2;
}




void FUN_00d23124(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d22fe8();
  if (*(float *)(param_4 + 1) < *(float *)(param_5 + 1)) {
    uVar5 = param_4[2];
    uVar8 = param_4[1];
    uVar6 = *param_4;
    param_4[2] = param_5[2];
    uVar7 = *param_5;
    param_4[1] = param_5[1];
    *param_4 = uVar7;
    param_5[2] = uVar5;
    param_5[1] = uVar8;
    *param_5 = uVar6;
    iVar2 = (int)uVar3;
    if (*(float *)(param_4 + 1) <= *(float *)(param_3 + 1)) {
      uVar3 = (ulong)(iVar2 + 1);
    }
    else {
      uVar5 = param_3[2];
      uVar8 = param_3[1];
      uVar6 = *param_3;
      param_3[2] = param_4[2];
      uVar7 = *param_4;
      param_3[1] = param_4[1];
      *param_3 = uVar7;
      param_4[2] = uVar5;
      param_4[1] = uVar8;
      *param_4 = uVar6;
      if (*(float *)(param_3 + 1) <= *(float *)(param_2 + 1)) {
        uVar3 = (ulong)(iVar2 + 2);
      }
      else {
        uVar5 = param_2[2];
        uVar8 = param_2[1];
        uVar6 = *param_2;
        param_2[2] = param_3[2];
        uVar7 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar7;
        param_3[2] = uVar5;
        param_3[1] = uVar8;
        *param_3 = uVar6;
        if (*(float *)(param_2 + 1) <= *(float *)(param_1 + 1)) {
          uVar3 = (ulong)(iVar2 + 3);
        }
        else {
          uVar5 = param_1[2];
          uVar3 = (ulong)(iVar2 + 4);
          uVar8 = param_1[1];
          uVar6 = *param_1;
          param_1[2] = param_2[2];
          uVar7 = *param_2;
          param_1[1] = param_2[1];
          *param_1 = uVar7;
          param_2[2] = uVar5;
          param_2[1] = uVar8;
          *param_2 = uVar6;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00d232ac(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float fVar12;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  FUN_00d22e60(param_1,param_1 + 3,param_1 + 6,param_3);
  if (param_1 + 9 != param_2) {
    lVar5 = 0;
    puVar10 = param_1 + 9;
    puVar11 = param_1 + 6;
    do {
      puVar6 = puVar10;
      fVar12 = *(float *)(puVar6 + 1);
      if (*(float *)(puVar11 + 1) < fVar12) {
        uVar1 = *(undefined4 *)((long)puVar6 + 0x14);
        uVar7 = *puVar6;
        uVar8 = *(undefined8 *)((long)puVar6 + 0xc);
        lVar3 = lVar5;
        do {
          lVar9 = lVar3;
          *(undefined8 *)((long)param_1 + lVar9 + 0x58) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x40);
          *(undefined8 *)((long)param_1 + lVar9 + 0x50) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x38);
          *(undefined8 *)((long)param_1 + lVar9 + 0x48) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x30);
          puVar10 = param_1;
          if (lVar9 == -0x30) goto LAB_00d23360;
          lVar3 = lVar9 + -0x18;
        } while (*(float *)((long)param_1 + lVar9 + 0x20) < fVar12);
        puVar10 = (undefined8 *)((long)param_1 + lVar9 + 0x30);
LAB_00d23360:
        *puVar10 = uVar7;
        *(float *)(puVar10 + 1) = fVar12;
        *(undefined4 *)((long)puVar10 + 0x14) = uVar1;
        *(undefined8 *)((long)puVar10 + 0xc) = uVar8;
      }
      lVar5 = lVar5 + 0x18;
      puVar10 = puVar6 + 3;
      puVar11 = puVar6;
    } while (puVar6 + 3 != param_2);
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d233b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  float fVar14;
  
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
  lVar5 = (long)param_2 - (long)param_1 >> 3;
  if ((ulong)(lVar5 * -0x5555555555555555) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00d2340c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01bca718 + *(int *)(&DAT_01bca718 + lVar5 * -0x5555555555555554)))(1);
    return;
  }
  FUN_00d22e60(param_1,param_1 + 3,param_1 + 6,param_3);
  if (param_1 + 9 != param_2) {
    lVar5 = 0;
    iVar6 = 0;
    puVar12 = param_1 + 9;
    puVar13 = param_1 + 6;
    do {
      puVar8 = puVar12;
      fVar14 = *(float *)(puVar8 + 1);
      if (*(float *)(puVar13 + 1) < fVar14) {
        uVar1 = *(undefined4 *)((long)puVar8 + 0x14);
        uVar9 = *puVar8;
        uVar10 = *(undefined8 *)((long)puVar8 + 0xc);
        lVar3 = lVar5;
        do {
          lVar11 = lVar3;
          *(undefined8 *)((long)param_1 + lVar11 + 0x58) =
               *(undefined8 *)((long)param_1 + lVar11 + 0x40);
          *(undefined8 *)((long)param_1 + lVar11 + 0x50) =
               *(undefined8 *)((long)param_1 + lVar11 + 0x38);
          *(undefined8 *)((long)param_1 + lVar11 + 0x48) =
               *(undefined8 *)((long)param_1 + lVar11 + 0x30);
          puVar12 = param_1;
          if (lVar11 == -0x30) goto LAB_00d23500;
          lVar3 = lVar11 + -0x18;
        } while (*(float *)((long)param_1 + lVar11 + 0x20) < fVar14);
        puVar12 = (undefined8 *)((long)param_1 + lVar11 + 0x30);
LAB_00d23500:
        *puVar12 = uVar9;
        *(float *)(puVar12 + 1) = fVar14;
        iVar6 = iVar6 + 1;
        *(undefined4 *)((long)puVar12 + 0x14) = uVar1;
        *(undefined8 *)((long)puVar12 + 0xc) = uVar10;
        if (iVar6 == 8) {
          bVar4 = puVar8 + 3 == param_2;
          goto LAB_00d23570;
        }
      }
      lVar5 = lVar5 + 0x18;
      puVar12 = puVar8 + 3;
      puVar13 = puVar8;
    } while (puVar8 + 3 != param_2);
  }
  bVar4 = true;
LAB_00d23570:
  if (*(long *)(lVar2 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}




undefined8 FUN_00d235a8(void)

{
  return 1;
}




void FUN_00d235b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281a860;
  *(undefined4 *)(param_1 + 1) = 0x40a00000;
  return;
}




void FUN_00d235cc(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auStack_b0 [96];
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_b0);
  plVar2 = (long *)*param_2;
  if (plVar2 == (long *)0x0) {
    uVar3 = 0;
  }
  else if ((int)param_2[1] == (int)plVar2[1]) {
    uVar3 = (**(code **)(*plVar2 + 0x10))();
  }
  else {
    *param_2 = 0;
    uVar3 = 0;
    *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
  }
  FUN_00d4dabc(auStack_b0,0x2000);
  FUN_00d4daf4(auStack_b0,1,0,0,uVar3);
  FUN_00d4db48(*(undefined4 *)(param_1 + 8),auStack_b0,param_3);
  FUN_00d4d364(auStack_b0,0);
  uVar3 = FUN_00d9e840(auStack_b0,&local_50,1,0);
  if ((uint)uVar3 != 0) {
    uVar4 = 0;
    uVar5 = (ulong)*(ushort *)(local_50 + 0x88) & 0x1f;
    do {
      if (((int)uVar5 == 0x1f) || (1 < ((ushort *)(local_50 + 0x88))[uVar5 * 0x1c + 4] - 3)) {
        uVar3 = 1;
        goto LAB_00d236f4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)uVar3);
    uVar3 = 0;
  }
LAB_00d236f4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




undefined8 FUN_00d23720(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)*param_1;
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if ((int)param_1[1] != (int)plVar1[1]) {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
      return 0;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))();
  }
  return uVar2;
}




undefined4 FUN_00d23774(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined1 auStack_a0 [96];
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_a0);
  plVar3 = (long *)*param_2;
  if (plVar3 == (long *)0x0) {
    uVar4 = 0;
  }
  else if ((int)param_2[1] == (int)plVar3[1]) {
    uVar4 = (**(code **)(*plVar3 + 0x10))();
  }
  else {
    *param_2 = 0;
    uVar4 = 0;
    *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
  }
  FUN_00d4dabc(auStack_a0,0x2000);
  uVar7 = 1;
  FUN_00d4daf4(auStack_a0,0,1,0,uVar4);
  FUN_00d4db48(0x41100000,auStack_a0,param_3);
  FUN_00d4d364(auStack_a0,0);
  uVar2 = FUN_00d9e840(auStack_a0,&local_40,1,0);
  if (uVar2 != 0) {
    uVar5 = 0;
    uVar6 = (ulong)*(ushort *)(local_40 + 0x88) & 0x1f;
    do {
      if (((int)uVar6 == 0x1f) || (1 < ((ushort *)(local_40 + 0x88))[uVar6 * 0x1c + 4] - 3)) {
        uVar7 = 0;
        goto LAB_00d23898;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
    uVar7 = 1;
  }
LAB_00d23898:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d238c4(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = 0;
  uVar1 = DAT_03214ce8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = uVar1;
  FUN_00e0b5d0(param_1 + 3);
  lVar4 = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  do {
    FUN_00e0b5d0((long)param_1 + lVar4 + 0x70);
    lVar4 = lVar4 + 0x40;
  } while (lVar4 != 0x200);
  lVar4 = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  do {
    FUN_00e0b5d0((long)param_1 + lVar4 + 0x278);
    lVar4 = lVar4 + 0x40;
  } while (lVar4 != 0x100);
  lVar4 = 0;
  do {
    FUN_00e0b5d0((long)param_1 + lVar4 + 0x380);
    lVar4 = lVar4 + 0x40;
  } while (lVar4 != 0x300);
  lVar4 = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  do {
    FUN_00e0b5d0((long)param_1 + lVar4 + 0x688);
    lVar4 = lVar4 + 0x40;
  } while (lVar4 != 0x200);
  lVar4 = 0;
  do {
    FUN_00e0b5d0((long)param_1 + lVar4 + 0x890);
    lVar4 = lVar4 + 0x40;
  } while (lVar4 != 0x180);
  lVar4 = 0;
  do {
    FUN_00e0b5d0((long)param_1 + lVar4 + 0xa18);
    lVar4 = lVar4 + 0x40;
  } while (lVar4 != 0x300);
  lVar4 = 0;
  *(undefined4 *)(param_1 + 0x1a3) = 0;
  do {
    FUN_00e0b5d0((long)param_1 + lVar4 + 0xd20);
    lVar4 = lVar4 + 0x40;
  } while (lVar4 != 0x300);
  lVar4 = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  do {
    FUN_00e0b5d0((long)param_1 + lVar4 + 0x1028);
    lVar4 = lVar4 + 0x40;
  } while (lVar4 != 0x200);
  lVar4 = 0;
  do {
    FUN_00e0b5d0((long)param_1 + lVar4 + 0x1230);
    lVar4 = lVar4 + 0x40;
  } while (lVar4 != 0x100);
  *(undefined8 *)((long)param_1 + 0x133c) = 0;
  *(undefined8 *)((long)param_1 + 0x1334) = 0;
  FUN_00e0b5d0(param_1 + 0x269);
  FUN_00e0b5d0(param_1 + 0x272);
  FUN_00e0b5d0(param_1 + 0x27b);
  param_1[0x285] = 0;
  param_1[0x284] = 0;
  *(undefined8 *)((long)param_1 + 0x143c) = DAT_03218f30;
  uVar1 = DAT_03218f38;
  param_1[0x28a] = param_1 + 0x28b;
  *(undefined4 *)((long)param_1 + 0x1444) = uVar1;
  param_1[0x28c] = &PTR_FUN_0281a860;
  param_1[0x28b] = &PTR_FUN_0281a878;
  *(undefined4 *)(param_1 + 0x28d) = 0x40a00000;
  param_1[0x28e] = &PTR_FUN_0281a890;
  FUN_00e0b5d0(param_1 + 0x28f);
  FUN_00e0b5d0(param_1 + 0x297);
  FUN_00e0b5d0(param_1 + 0x29f);
  FUN_00e0b5d0(param_1 + 0x2a7);
  FUN_00e0b5d0(param_1 + 0x2af);
  FUN_00e0b5d0(param_1 + 0x2b7);
  FUN_00e0b5d0(param_1 + 0x2bf);
  FUN_00e0b5d0(param_1 + 0x2c7);
  param_1[0x2d0] = 0;
  param_1[0x2cf] = 0;
  param_1[0x2d1] = &PTR_FUN_0281a8a8;
  memset(param_1 + 0x2d2,0,0x1e1);
  lVar4 = 0;
  do {
    FUN_00e0b5d0((long)param_1 + lVar4 + 0x1878);
    lVar4 = lVar4 + 0x40;
  } while (lVar4 != 0xc0);
  *(undefined4 *)(param_1 + 0x327) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined1 *)((long)param_1 + 0x1984) = 0;
  uVar1 = DAT_03214ce8;
  param_1[0x33a] = 0;
  param_1[0x33c] = 0;
  *(undefined4 *)(param_1 + 0x33b) = uVar1;
  *(undefined4 *)(param_1 + 0x33d) = uVar1;
  *(undefined4 *)(param_1 + 0x33f) = DAT_03218f38;
  uVar2 = DAT_03218f30;
  *(undefined4 *)((long)param_1 + 0x1a0c) = 0;
  param_1[0x33e] = uVar2;
  *(undefined8 *)((long)param_1 + 0x1a01) = 0;
  *(undefined8 *)((long)param_1 + 0x19fc) = 0;
  puVar3 = param_1 + 0x342;
  do {
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = uVar1;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = uVar1;
    *(undefined4 *)(puVar3 + 5) = DAT_03218f38;
    uVar2 = DAT_03218f30;
    *(undefined4 *)((long)puVar3 + 0x3c) = 0;
    *(undefined8 *)((long)puVar3 + 0x31) = 0;
    *(undefined8 *)((long)puVar3 + 0x2c) = 0;
    puVar3[4] = uVar2;
    puVar3 = puVar3 + 8;
  } while (puVar3 != param_1 + 0x362);
  param_1[0x362] = 0;
  *(undefined4 *)(param_1 + 0x363) = uVar1;
  param_1[0x364] = 0;
  *(undefined4 *)(param_1 + 0x365) = uVar1;
  *(undefined4 *)(param_1 + 0x367) = DAT_03218f38;
  uVar2 = DAT_03218f30;
  *(undefined4 *)((long)param_1 + 0x1b4c) = 0;
  param_1[0x366] = uVar2;
  *(undefined8 *)((long)param_1 + 0x1b41) = 0;
  *(undefined8 *)((long)param_1 + 0x1b3c) = 0;
  param_1[0x36a] = 0;
  *(undefined4 *)(param_1 + 0x36b) = uVar1;
  param_1[0x36c] = 0;
  *(undefined4 *)(param_1 + 0x36d) = uVar1;
  *(undefined4 *)(param_1 + 0x36f) = DAT_03218f38;
  uVar2 = DAT_03218f30;
  *(undefined4 *)((long)param_1 + 0x1b8c) = 0;
  param_1[0x36e] = uVar2;
  *(undefined8 *)((long)param_1 + 0x1b81) = 0;
  *(undefined8 *)((long)param_1 + 0x1b7c) = 0;
  param_1[0x372] = 0;
  *(undefined4 *)(param_1 + 0x373) = uVar1;
  param_1[0x374] = 0;
  *(undefined4 *)(param_1 + 0x375) = uVar1;
  *(undefined4 *)(param_1 + 0x377) = DAT_03218f38;
  uVar2 = DAT_03218f30;
  *(undefined4 *)((long)param_1 + 0x1bcc) = 0;
  param_1[0x376] = uVar2;
  *(undefined8 *)((long)param_1 + 0x1bc1) = 0;
  *(undefined8 *)((long)param_1 + 0x1bbc) = 0;
  param_1[0x3ba] = 0;
  param_1[0x3b9] = 0;
  *(undefined4 *)(param_1 + 0x3bc) = 0;
  param_1[0x3bb] = 0;
  *(undefined4 *)((long)param_1 + 0x1de4) = 0xffffffff;
  FUN_00e0b5d0(param_1 + 0x3bd);
  return;
}




void FUN_00d23cc4(long *param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_2;
  *param_1 = (long)plVar4;
  lVar5 = param_2[1];
  param_1[0xc] = 0x3f8000003f800000;
  param_1[0xb] = 0x3f800000;
  *(undefined2 *)(param_1 + 0xd) = 0x101;
  *(int *)(param_1 + 1) = (int)lVar5;
  if (plVar4 != (long *)0x0) {
    if ((int)lVar5 == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        cVar3 = FUN_00d55870();
        if (cVar3 == '\x01') {
          *(undefined4 *)(param_1 + 0x332) = 0x4121c28f;
          param_1[0x331] = 0x3d23d70ac07147ae;
        }
        else if (cVar3 == '\x02') {
          *(undefined4 *)(param_1 + 0x332) = 0x41200000;
          param_1[0x331] = 0x3d23d70a408b3333;
          param_1[0x335] = -0x3dfbffffbe9428f6;
          param_1[0x334] = 0x3c23d70ac1a80000;
          param_1[0x336] = 0x416733333c23d70a;
        }
        else {
          *(undefined4 *)(param_1 + 0x332) = DAT_03218f38;
          param_1[0x331] = DAT_03218f30;
        }
      }
    }
    else {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
    }
  }
  uVar1 = DAT_03214ce8;
  lVar5 = 4;
  param_1[0x33a] = 0;
  param_1[0x33c] = 0;
  *(undefined4 *)(param_1 + 0x33b) = uVar1;
  *(undefined4 *)(param_1 + 0x33d) = uVar1;
  *(undefined4 *)(param_1 + 0x33f) = DAT_03218f38;
  lVar2 = DAT_03218f30;
  *(undefined4 *)((long)param_1 + 0x1a0c) = 0;
  param_1[0x33e] = lVar2;
  *(undefined8 *)((long)param_1 + 0x1a01) = 0;
  *(undefined8 *)((long)param_1 + 0x19fc) = 0;
  param_1[0x362] = 0;
  *(undefined4 *)(param_1 + 0x363) = uVar1;
  param_1[0x364] = 0;
  *(undefined4 *)(param_1 + 0x365) = uVar1;
  *(undefined4 *)(param_1 + 0x367) = DAT_03218f38;
  lVar2 = DAT_03218f30;
  *(undefined4 *)((long)param_1 + 0x1b4c) = 0;
  param_1[0x366] = lVar2;
  *(undefined8 *)((long)param_1 + 0x1b41) = 0;
  *(undefined8 *)((long)param_1 + 0x1b3c) = 0;
  param_1[0x36a] = 0;
  *(undefined4 *)(param_1 + 0x36b) = uVar1;
  param_1[0x36c] = 0;
  *(undefined4 *)(param_1 + 0x36d) = uVar1;
  *(undefined4 *)(param_1 + 0x36f) = DAT_03218f38;
  lVar2 = DAT_03218f30;
  *(undefined4 *)((long)param_1 + 0x1b8c) = 0;
  param_1[0x36e] = lVar2;
  *(undefined8 *)((long)param_1 + 0x1b81) = 0;
  *(undefined8 *)((long)param_1 + 0x1b7c) = 0;
  param_1[0x372] = 0;
  *(undefined4 *)(param_1 + 0x373) = uVar1;
  param_1[0x374] = 0;
  *(undefined4 *)(param_1 + 0x375) = uVar1;
  *(undefined4 *)(param_1 + 0x377) = DAT_03218f38;
  lVar2 = DAT_03218f30;
  *(undefined4 *)((long)param_1 + 0x1bcc) = 0;
  param_1[0x376] = lVar2;
  *(undefined8 *)((long)param_1 + 0x1bc1) = 0;
  *(undefined8 *)((long)param_1 + 0x1bbc) = 0;
  param_1 = param_1 + 0x342;
  do {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = uVar1;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = uVar1;
    lVar5 = lVar5 + -1;
    *(undefined4 *)(param_1 + 5) = DAT_03218f38;
    lVar2 = DAT_03218f30;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
    *(undefined8 *)((long)param_1 + 0x31) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    param_1[4] = lVar2;
    param_1 = param_1 + 8;
  } while (lVar5 != 0);
  return;
}




void FUN_00d23ee8(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        FUN_00d23fa0(param_1);
        FUN_00d241a8(param_1);
        uVar4 = FUN_00d2445c(param_1);
        FUN_00d24960(uVar4,lVar3,lVar3,param_1 + 3);
        FUN_00d24dc0(param_1);
        FUN_00d250ac(param_1);
        FUN_00d254dc(param_1);
        uVar1 = FUN_00d081d8(lVar3,param_1 + 0x37a,0x19);
        *(undefined4 *)((long)param_1 + 0x1dc4) = uVar1;
      }
    }
    else {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00d23fa0(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  
  uVar6 = DAT_03214ce8;
  lVar7 = 0;
  do {
    lVar1 = param_1 + lVar7;
    lVar7 = lVar7 + 0x40;
    *(undefined8 *)(lVar1 + 0x70) = 0;
    *(undefined4 *)(lVar1 + 0x78) = uVar6;
  } while (lVar7 != 0x200);
  lVar7 = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  do {
    lVar1 = param_1 + lVar7;
    lVar7 = lVar7 + 0x40;
    *(undefined8 *)(lVar1 + 0x278) = 0;
    *(undefined4 *)(lVar1 + 0x280) = uVar6;
  } while (lVar7 != 0x100);
  lVar7 = 0;
  *(undefined4 *)(param_1 + 0x378) = 0;
  do {
    lVar1 = param_1 + lVar7;
    lVar7 = lVar7 + 0x40;
    *(undefined8 *)(lVar1 + 0x380) = 0;
    *(undefined4 *)(lVar1 + 0x388) = uVar6;
  } while (lVar7 != 0x300);
  lVar7 = 0;
  *(undefined4 *)(param_1 + 0x680) = 0;
  do {
    lVar1 = param_1 + lVar7;
    lVar7 = lVar7 + 0x40;
    *(undefined8 *)(lVar1 + 0x688) = 0;
    *(undefined4 *)(lVar1 + 0x690) = uVar6;
  } while (lVar7 != 0x200);
  lVar7 = 0;
  *(undefined4 *)(param_1 + 0x888) = 0;
  do {
    lVar1 = param_1 + lVar7;
    lVar7 = lVar7 + 0x40;
    *(undefined8 *)(lVar1 + 0xa18) = 0;
    *(undefined4 *)(lVar1 + 0xa20) = uVar6;
  } while (lVar7 != 0x300);
  uVar3 = *(undefined4 *)(param_1 + 0xd18);
  lVar7 = 0;
  *(undefined4 *)(param_1 + 0xd18) = 0;
  *(undefined4 *)(param_1 + 0x1338) = uVar3;
  do {
    lVar1 = param_1 + lVar7;
    lVar7 = lVar7 + 0x40;
    *(undefined8 *)(lVar1 + 0xd20) = 0;
    *(undefined4 *)(lVar1 + 0xd28) = uVar6;
  } while (lVar7 != 0x300);
  uVar3 = *(undefined4 *)(param_1 + 0x1020);
  lVar7 = 0;
  *(undefined4 *)(param_1 + 0x1020) = 0;
  *(undefined4 *)(param_1 + 0x1334) = uVar3;
  do {
    lVar1 = param_1 + lVar7;
    lVar7 = lVar7 + 0x40;
    *(undefined8 *)(lVar1 + 0x890) = 0;
    *(undefined4 *)(lVar1 + 0x898) = uVar6;
  } while (lVar7 != 0x180);
  lVar7 = -0x100;
  *(undefined4 *)(param_1 + 0xa10) = 0;
  do {
    lVar1 = param_1 + lVar7;
    lVar7 = lVar7 + 0x40;
    *(undefined8 *)(lVar1 + 0x1330) = 0;
    *(undefined4 *)(lVar1 + 0x1338) = uVar6;
  } while (lVar7 != 0);
  uVar3 = *(undefined4 *)(param_1 + 0x1330);
  *(undefined4 *)(param_1 + 0x1330) = 0;
  *(undefined4 *)(param_1 + 0x133c) = uVar3;
  lVar7 = -0x200;
  do {
    lVar1 = param_1 + lVar7;
    lVar7 = lVar7 + 0x40;
    *(undefined8 *)(lVar1 + 0x1228) = 0;
    *(undefined4 *)(lVar1 + 0x1230) = uVar6;
  } while (lVar7 != 0);
  uVar3 = *(undefined4 *)(param_1 + 0x1228);
  plVar5 = *(long **)(param_1 + 0x1478);
  *(undefined4 *)(param_1 + 0x1228) = 0;
  *(undefined4 *)(param_1 + 0x1340) = uVar3;
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1480) == (int)plVar5[1]) {
      lVar7 = (**(code **)(*plVar5 + 0x10))();
      uVar2 = *(ushort *)(lVar7 + 0x88) & 0x1f;
      if ((uVar2 == 0x1f) ||
         (uVar6 = DAT_03214ce8, 1 < *(ushort *)(lVar7 + (ulong)uVar2 * 0x38 + 0x90) - 3))
      goto LAB_00d24150;
    }
    *(undefined8 *)(param_1 + 0x1478) = 0;
    *(undefined4 *)(param_1 + 0x1480) = uVar6;
  }
LAB_00d24150:
  *(undefined1 *)(param_1 + 0x1448) = 0;
  *(undefined1 *)(param_1 + 0x1984) = 0;
  *(undefined8 *)(param_1 + 0x1428) = 0;
  *(undefined8 *)(param_1 + 0x1420) = 0;
  *(undefined4 *)(param_1 + 0x19c8) = DAT_03218f38;
  uVar4 = DAT_03218f30;
  *(long *)(param_1 + 0x1450) = param_1 + 0x1458;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = uVar4;
  *(undefined8 *)(param_1 + 0x1dd0) = 0;
  *(undefined8 *)(param_1 + 0x1dc8) = 0;
  return;
}

