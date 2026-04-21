// functions/00f2c — 11 functions
#include "libGameKindred.h"




void FUN_00f2c2d4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  uVar2 = (*(code *)*param_4)(param_2,param_1);
  uVar3 = (*(code *)*param_4)(param_3,param_2);
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
    if ((uVar3 & 1) == 0) goto LAB_00f2c46c;
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
    uVar2 = (*(code *)*param_4)(param_2,param_1);
    if ((uVar2 & 1) != 0) {
      uVar5 = param_1[2];
      uVar8 = param_1[1];
      uVar6 = *param_1;
      param_1[2] = param_2[2];
      uVar7 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar7;
      param_2[2] = uVar5;
      param_2[1] = uVar8;
      *param_2 = uVar6;
      goto LAB_00f2c460;
    }
  }
  else if ((uVar3 & 1) == 0) {
    uVar5 = param_1[2];
    uVar8 = param_1[1];
    uVar6 = *param_1;
    param_1[2] = param_2[2];
    uVar7 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar7;
    param_2[2] = uVar5;
    param_2[1] = uVar8;
    *param_2 = uVar6;
    uVar2 = (*(code *)*param_4)(param_3,param_2);
    if ((uVar2 & 1) != 0) {
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
LAB_00f2c460:
      uVar5 = 2;
      goto LAB_00f2c46c;
    }
  }
  else {
    uVar5 = param_1[2];
    uVar8 = param_1[1];
    uVar6 = *param_1;
    param_1[2] = param_3[2];
    uVar7 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = uVar7;
    param_3[2] = uVar5;
    param_3[1] = uVar8;
    *param_3 = uVar6;
  }
  uVar5 = 1;
LAB_00f2c46c:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}




int FUN_00f2c498(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
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
  iVar2 = FUN_00f2c2d4();
  uVar3 = (*(code *)*param_5)(param_4,param_3);
  if ((uVar3 & 1) != 0) {
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
    uVar3 = (*(code *)*param_5)(param_3,param_2);
    if ((uVar3 & 1) == 0) {
      iVar2 = iVar2 + 1;
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
      uVar3 = (*(code *)*param_5)(param_2,param_1);
      if ((uVar3 & 1) == 0) {
        iVar2 = iVar2 + 2;
      }
      else {
        uVar5 = param_1[2];
        iVar2 = iVar2 + 3;
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
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00f2c5f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5,undefined8 *param_6)

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
  iVar2 = FUN_00f2c498();
  uVar3 = (*(code *)*param_6)(param_5,param_4);
  if ((uVar3 & 1) != 0) {
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
    uVar3 = (*(code *)*param_6)(param_4,param_3);
    if ((uVar3 & 1) == 0) {
      iVar2 = iVar2 + 1;
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
      uVar3 = (*(code *)*param_6)(param_3,param_2);
      if ((uVar3 & 1) == 0) {
        iVar2 = iVar2 + 2;
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
        uVar3 = (*(code *)*param_6)(param_2,param_1);
        if ((uVar3 & 1) == 0) {
          iVar2 = iVar2 + 3;
        }
        else {
          uVar5 = param_1[2];
          iVar2 = iVar2 + 4;
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
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f2c7a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00f2c2d4(param_1,param_1 + 3,param_1 + 6,param_3);
  if (param_1 + 9 != param_2) {
    lVar7 = 0;
    puVar5 = param_1 + 9;
    puVar6 = param_1 + 6;
    do {
      puVar4 = puVar5;
      uVar3 = (*(code *)*param_3)(puVar4,puVar6);
      if ((uVar3 & 1) != 0) {
        local_60 = puVar4[2];
        uStack_68 = puVar4[1];
        local_70 = *puVar4;
        lVar2 = lVar7;
        do {
          lVar8 = lVar2;
          *(undefined8 *)((long)param_1 + lVar8 + 0x58) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x40);
          *(undefined8 *)((long)param_1 + lVar8 + 0x50) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x38);
          *(undefined8 *)((long)param_1 + lVar8 + 0x48) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x30);
          puVar5 = param_1;
          if (lVar8 == -0x30) goto LAB_00f2c868;
          uVar3 = (*(code *)*param_3)(&local_70,(long)param_1 + lVar8 + 0x18);
          lVar2 = lVar8 + -0x18;
        } while ((uVar3 & 1) != 0);
        puVar5 = (undefined8 *)((long)param_1 + lVar8 + 0x30);
LAB_00f2c868:
        puVar5[2] = local_60;
        puVar5[1] = uStack_68;
        *puVar5 = local_70;
      }
      lVar7 = lVar7 + 0x18;
      puVar5 = puVar4 + 3;
      puVar6 = puVar4;
    } while (puVar4 + 3 != param_2);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f2c8b8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar5 = (long)param_2 - (long)param_1 >> 3;
  if ((ulong)(lVar5 * -0x5555555555555555) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00f2c91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01bf7ff4 + *(int *)(&DAT_01bf7ff4 + lVar5 * -0x5555555555555554)))(1);
    return;
  }
  FUN_00f2c2d4(param_1,param_1 + 3,param_1 + 6,param_3);
  if (param_1 + 9 != param_2) {
    lVar5 = 0;
    iVar9 = 0;
    puVar7 = param_1 + 9;
    puVar8 = param_1 + 6;
    do {
      puVar6 = puVar7;
      uVar4 = (*(code *)*param_3)(puVar6,puVar8);
      if ((uVar4 & 1) != 0) {
        local_60 = puVar6[2];
        uStack_68 = puVar6[1];
        local_70 = *puVar6;
        lVar2 = lVar5;
        do {
          lVar10 = lVar2;
          *(undefined8 *)((long)param_1 + lVar10 + 0x58) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x40);
          *(undefined8 *)((long)param_1 + lVar10 + 0x50) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x38);
          *(undefined8 *)((long)param_1 + lVar10 + 0x48) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x30);
          puVar7 = param_1;
          if (lVar10 == -0x30) goto LAB_00f2ca20;
          uVar4 = (*(code *)*param_3)(&local_70,(long)param_1 + lVar10 + 0x18);
          lVar2 = lVar10 + -0x18;
        } while ((uVar4 & 1) != 0);
        puVar7 = (undefined8 *)((long)param_1 + lVar10 + 0x30);
LAB_00f2ca20:
        iVar9 = iVar9 + 1;
        puVar7[2] = local_60;
        puVar7[1] = uStack_68;
        *puVar7 = local_70;
        if (iVar9 == 8) {
          bVar3 = puVar6 + 3 == param_2;
          goto LAB_00f2ca8c;
        }
      }
      lVar5 = lVar5 + 0x18;
      puVar7 = puVar6 + 3;
      puVar8 = puVar6;
    } while (puVar6 + 3 != param_2);
  }
  bVar3 = true;
LAB_00f2ca8c:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar3);
  }
  return;
}




void FUN_00f2cacc(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  param_2[3] = param_3;
  param_2[4] = param_4;
  *(undefined4 *)(param_2 + 5) = param_1;
  *param_2 = &PTR_FUN_02828f38;
  *(byte *)((long)param_2 + 0x2c) = param_5 & 1;
  return;
}




void FUN_00f2caf0(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_60;
  undefined4 local_58;
  float local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uStack_48 = 0x3f80000000000000;
  local_50 = 0;
  puVar1 = (undefined8 *)0x0;
  if (*(char *)(param_1 + 0x2c) != '\0') {
    puVar1 = &local_50;
  }
  FUN_0199d384(0xbf800000,*(undefined8 *)(param_1 + 0x18),puVar1,0xffffffff);
  FUN_00f01264(0,*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + 4);
  glViewport(0,0,uVar2 & 0xffff,uVar2 >> 0x10);
  if ((~(uint)DAT_03215620 & 0x380) != 0) {
    glDisable(0xb71);
    DAT_03215620 = DAT_03215620 | 0x380;
  }
  if (((uint)DAT_03215620 >> 6 & 1) != 0) {
    glDepthMask(0);
    DAT_03215620 = DAT_03215620 & 0xffffffffffffffbf;
  }
  if ((DAT_03215620 & 3) != 0) {
    glDisable(0xb44);
    DAT_03215620 = DAT_03215620 & 0xfffffffffffffffc;
  }
  uVar2 = (uint)DAT_03215620 & 0xffff0000;
  if (uVar2 != 0x32320000) {
    if (uVar2 == 0x1010000) {
      glEnable(0xbe2);
    }
    glBlendFuncSeparate(0x302,0x303,0x302,0x303);
    DAT_03215620._0_4_ = CONCAT22(0x3232,(undefined2)DAT_03215620);
  }
  local_60 = NEON_fmov(0x3f800000,4);
  local_58 = 0x3f800000;
  local_54 = 1.0 - *(float *)(param_1 + 0x28);
  FUN_0199d974(10);
  uVar4 = FUN_0199d9a4(10);
  uVar4 = FUN_0199f5f0(uVar4,"uTintColor");
  glUniform4fv(uVar4,1,&local_60);
  FUN_00f013dc(DAT_03215388,0xffff,0);
  FUN_00f01570(DAT_032157d0);
  glDrawArrays(4,0,6);
  FUN_0199d4b0(*(undefined8 *)(param_1 + 0x18));
  FUN_0199d384(0xbf800000,0,0,0xffffffff);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f2ccc8(long param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar2) {
      *param_2 = 100;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar3 = FUN_00f016d4(param_2 + (ulong)(uint)param_2[10] * 4 + 2,0x37);
  puVar4 = (undefined8 *)(lVar3 + 7U & 0xfffffffffffffff8);
  *param_2 = 0;
  *puVar4 = &PTR___cxa_pure_virtual_028256c8;
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar5;
  *puVar4 = &PTR_FUN_02828f38;
  *(undefined8 *)((long)puVar4 + 0x25) = *(undefined8 *)(param_1 + 0x25);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = uVar5;
  return;
}




void FUN_00f2cd60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined4 param_6,undefined4 param_7,byte param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[5] = param_4;
  *param_1 = &PTR_FUN_02828f98;
  uVar1 = param_5[6];
  param_1[0xd] = param_5[7];
  param_1[0xc] = uVar1;
  uVar1 = param_5[4];
  param_1[0xb] = param_5[5];
  param_1[10] = uVar1;
  uVar1 = param_5[2];
  param_1[9] = param_5[3];
  param_1[8] = uVar1;
  uVar2 = param_5[1];
  uVar1 = *param_5;
  *(undefined4 *)(param_1 + 0xe) = param_6;
  *(undefined4 *)((long)param_1 + 0x74) = param_7;
  *(byte *)(param_1 + 0xf) = param_8 & 1;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f2cda8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  FUN_019a0844(*(undefined8 *)(param_1 + 0x20),0xff,0xffffffff);
  FUN_019a0748(*(undefined8 *)(param_1 + 0x28),0xff,4);
  puVar2 = &DAT_01bf8050;
  if (*(char *)(param_1 + 0x78) != '\0') {
    puVar2 = &DAT_01bf8060;
  }
  FUN_0199d384(0xbf800000,*(undefined8 *)(param_1 + 0x18),puVar2,0xffffffff);
  uVar5 = *(uint *)(*(long *)(param_1 + 0x18) + 4);
  glViewport(0,0,uVar5 & 0xffff,uVar5 >> 0x10);
  if ((~(uint)DAT_03215620 & 0x380) != 0) {
    glDisable(0xb71);
    DAT_03215620 = DAT_03215620 | 0x380;
  }
  if (((uint)DAT_03215620 >> 6 & 1) != 0) {
    glDepthMask(0);
    DAT_03215620 = DAT_03215620 & 0xffffffffffffffbf;
  }
  if ((DAT_03215620 & 3) != 0) {
    glDisable(0xb44);
    DAT_03215620 = DAT_03215620 & 0xfffffffffffffffc;
  }
  FUN_0199d920();
  if ((undefined *)(DAT_03215620 & 0xffff0000) != (undefined *)0x11110000) {
    if ((undefined *)(DAT_03215620 & 0xffff0000) == &UNK_01010000) {
      glEnable(0xbe2);
    }
    glBlendFuncSeparate(1,1,1,1);
    DAT_03215620 = DAT_03215620 & 0xffffffff0000ffff | 0x11110000;
  }
  uVar6 = 0;
  do {
    if ((float)(&DAT_03215478)[uVar6] != (float)(&DAT_01e632b0)[uVar6]) {
      DAT_0321561c = DAT_0321561c | 0x38;
      break;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x10);
  DAT_0321561c = DAT_0321561c | 0xb8;
  uRam00000000032154a0 = 0x3f800000;
  _DAT_03215498 = 0;
  uRam00000000032154b0 = 0x3f80000000000000;
  _DAT_032154a8 = 0;
  uRam0000000003215480 = 0;
  _DAT_03215478 = 0x3f800000;
  uRam0000000003215490 = 0;
  _DAT_03215488 = 0x3f80000000000000;
  uRam00000000032154c0 = 0;
  _DAT_032154b8 = 0x3f800000;
  uRam00000000032154d0 = 0;
  _DAT_032154c8 = 0x3f80000000000000;
  uRam00000000032154e0 = 0x3f800000;
  _DAT_032154d8 = 0;
  uRam00000000032154f0 = 0x3f80000000000000;
  _DAT_032154e8 = 0;
  lVar7 = 0;
  do {
    lVar1 = lVar7 + 4;
    *(undefined4 *)((long)&DAT_03215538 + lVar7) = *(undefined4 *)(param_1 + 0x30 + lVar7);
    lVar7 = lVar1;
  } while (lVar1 != 0x40);
  FUN_0199d974(7);
  uVar3 = *(undefined4 *)(param_1 + 0x70);
  uVar4 = *(undefined4 *)(param_1 + 0x74);
  FUN_00f013dc(*(undefined8 *)(param_1 + 0x20),0xffff,0);
  FUN_00f01570(DAT_032157d0);
  glDrawArrays(4,uVar3,uVar4);
  FUN_0199d4b0(*(undefined8 *)(param_1 + 0x18));
  FUN_0199d384(0xbf800000,0,0,0xffffffff);
  return;
}




undefined8 * FUN_00f2cfb4(long param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar2) {
      *param_2 = 100;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar3 = FUN_00f016d4(param_2 + (ulong)(uint)param_2[10] * 4 + 2,0x87);
  *param_2 = 0;
  puVar4 = (undefined8 *)(lVar3 + 7U & 0xfffffffffffffff8);
  *puVar4 = &PTR___cxa_pure_virtual_028256c8;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  *puVar4 = &PTR_FUN_02828f98;
  puVar4[2] = uVar6;
  puVar4[1] = uVar5;
  memcpy(puVar4 + 3,(void *)(param_1 + 0x18),0x61);
  return puVar4;
}

