// functions/00bab — 9 functions
#include "libGameKindred.h"




void FUN_00bab200(undefined4 param_1,long *param_2)

{
  *(undefined4 *)(param_2 + 0x3ff7) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00bab214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x150))();
  return;
}




void FUN_00bab218(long param_1)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_a0 [2];
  float local_90;
  float local_8c;
  long local_88;
  
  lVar6 = tpidr_el0;
  local_88 = *(long *)(lVar6 + 0x28);
  uVar8 = FUN_00f02540();
  if ((uVar8 & 1) != 0) {
    FUN_00b8e860(param_1);
    pfVar2 = (float *)(param_1 + 0x1ffb8);
    if (*(float *)(param_1 + 0x44) != *pfVar2) {
      *(float *)(param_1 + 0x44) = *pfVar2;
      FUN_0091ada4(param_1);
    }
    if (*(long *)(*(long *)(param_1 + 0x1ffd8) + 0x28f50) != 0) {
      uVar9 = FUN_009580b8();
      pbVar10 = *(byte **)(*(long *)(param_1 + 0x1ffd8) + 0x28f50);
      if ((*pbVar10 & 1) == 0) {
        pbVar10 = pbVar10 + 1;
      }
      else {
        pbVar10 = *(byte **)(pbVar10 + 0x10);
      }
      uVar7 = FUN_00961804(uVar9,pbVar10,1);
      FUN_00bab988(param_1,uVar7 & 1);
      FUN_00f00298(&local_8c,&local_90);
      uVar8 = FUN_0092ead0(local_8c,local_90);
      fVar13 = local_8c - DAT_031339d4;
      FUN_00f13f08(fVar13,local_90,param_1 + 0x380);
      FUN_00f13f08(local_8c,local_8c * 0.75,param_1 + 0x520);
      fVar11 = local_90 * *(float *)(param_1 + 0x574);
      if ((*(float *)(param_1 + 0x560) != fVar13) || (*(float *)(param_1 + 0x564) != fVar11)) {
        *(float *)(param_1 + 0x560) = fVar13;
        *(float *)(param_1 + 0x564) = fVar11;
        FUN_0091ada4(param_1 + 0x520);
      }
      FUN_00f13f08(0x44c80000,local_90,param_1 + 0x610);
      lVar1 = param_1 + 0x700;
      if ((*(float *)(param_1 + 0x740) != fVar13) || (*(float *)(param_1 + 0x744) != 0.0)) {
        *(float *)(param_1 + 0x740) = fVar13;
        *(undefined4 *)(param_1 + 0x744) = 0;
        FUN_0091ada4(lVar1);
      }
      local_a0[0] = 0x3f800000;
      (**(code **)(*(long *)(param_1 + 0x700) + 0x28))(lVar1,local_a0);
      FUN_00f13f08(0x44800000,0x44400000,lVar1);
      fVar11 = 0.5;
      if ((uVar8 & 1) == 0) {
        fVar11 = 1.0;
      }
      fVar12 = fVar11 * DAT_02be366c + -30.0;
      if ((*(float *)(param_1 + 0x830) != 80.0) || (*(float *)(param_1 + 0x834) != fVar12)) {
        *(undefined4 *)(param_1 + 0x830) = 0x42a00000;
        *(float *)(param_1 + 0x834) = fVar12;
        FUN_0091ada4(param_1 + 0x7f0);
      }
      fVar12 = 0.75;
      FUN_00ad8038(param_1 + 0x878);
      lVar1 = param_1 + 0x7188;
      FUN_00f01fcc(param_1 + 0x878,0,0,1,1);
      if (*(float *)(param_1 + 0x71cc) != fVar12 + 80.0) {
        *(float *)(param_1 + 0x71cc) = fVar12 + 80.0;
        FUN_0091ada4(lVar1);
      }
      fVar12 = (float)FUN_00f01c20(lVar1);
      if (*(float *)(param_1 + 0x71c8) != fVar12 * 0.5) {
        *(float *)(param_1 + 0x71c8) = fVar12 * 0.5;
        FUN_0091ada4(lVar1);
      }
      lVar1 = param_1 + 0x13858;
      fVar12 = (float)FUN_00f01c20(lVar1);
      pfVar3 = (float *)(param_1 + 0x13898);
      fVar14 = *pfVar3;
      fVar12 = fVar13 + -40.0 + fVar12 * -0.5;
      if (fVar14 != fVar12) {
        *pfVar3 = fVar12;
        FUN_0091ada4(lVar1);
        fVar14 = *pfVar3;
      }
      lVar4 = param_1 + 0x13e50;
      fVar12 = (float)FUN_00f01c20(lVar1);
      pfVar3 = (float *)(param_1 + 0x13e90);
      fVar15 = *pfVar3;
      fVar12 = (fVar14 - fVar12) + -10.0;
      if (fVar15 != fVar12) {
        *pfVar3 = fVar12;
        FUN_0091ada4(lVar4);
        fVar15 = *pfVar3;
      }
      fVar12 = (float)FUN_00f01c20(lVar4);
      fVar14 = -1020.0;
      fVar12 = (fVar15 - fVar12 * 0.5) + -1020.0;
      FUN_00f01c20(lVar4);
      if ((*(float *)(param_1 + 0xead8) != fVar12) || (*(float *)(param_1 + 0xeadc) != fVar14 * 0.5)
         ) {
        *(float *)(param_1 + 0xead8) = fVar12;
        *(float *)(param_1 + 0xeadc) = fVar14 * 0.5;
        FUN_0091ada4(param_1 + 0xea98);
      }
      plVar5 = (long *)(param_1 + 0x8a40);
      fVar12 = *(float *)(param_1 + 0xdb50) * -0.5 * *(float *)(param_1 + 0xc5ec) + -10.0;
      if ((*(float *)(param_1 + 0x8a80) != 84.0) || (*(float *)(param_1 + 0x8a84) != fVar12)) {
        *(float *)(param_1 + 0x8a80) = 84.0;
        *(float *)(param_1 + 0x8a84) = fVar12;
        FUN_0091ada4(plVar5);
      }
      local_a0[0] = 0x3f80000000000000;
      (**(code **)(*plVar5 + 0x28))(plVar5,local_a0);
      plVar5 = (long *)(param_1 + 0x8978);
      FUN_00f0bc10(0,0,0x42480000,local_a0);
      FUN_00f0c168(plVar5,local_a0);
      (**(code **)(*plVar5 + 0x90))(plVar5);
      if (*(float *)(param_1 + 0x89b8) != 80.0) {
        *(float *)(param_1 + 0x89b8) = 80.0;
        FUN_0091ada4(plVar5);
      }
      if (*(float *)(param_1 + 0x878c) != local_90 + -240.0) {
        *(float *)(param_1 + 0x878c) = local_90 + -240.0;
        FUN_0091ada4(param_1 + 0x8748);
      }
      plVar5 = (long *)(param_1 + 0x8800);
      if ((*(float *)(param_1 + 0x8840) != 0.0) ||
         (*(float *)(param_1 + 0x8844) != local_90 - *pfVar2)) {
        *(float *)(param_1 + 0x8840) = 0.0;
        *(float *)(param_1 + 0x8844) = local_90 - *pfVar2;
        FUN_0091ada4(plVar5);
      }
      local_a0[0] = 0x3f80000000000000;
      (**(code **)(*plVar5 + 0x28))(plVar5,local_a0);
      FUN_00f13f08(local_8c,0x43c80000,plVar5);
      FUN_00f13f08(fVar13,(local_90 - *pfVar2) + -338.0,param_1 + 0x14448);
      FUN_00babbe0(param_1);
      FUN_00ed04ac(0,DAT_02be366c * 1.5,param_1 + 0x145e8);
      FUN_00ed0578(0xc1200000,0x41200000,param_1 + 0x145e8);
      fVar12 = fVar11 * DAT_02be366c;
      if ((*(float *)(param_1 + 0x15158) != DAT_02be366c * 1.2) ||
         (*(float *)(param_1 + 0x1515c) != fVar12)) {
        *(float *)(param_1 + 0x15158) = DAT_02be366c * 1.2;
        *(float *)(param_1 + 0x1515c) = fVar12;
        FUN_0091ada4(param_1 + 0x15118);
      }
      FUN_00f13f08(fVar13 + DAT_02be366c * -2.5,local_90,param_1 + 0x15118);
      fVar11 = fVar11 * DAT_02be366c;
      if ((*(float *)(param_1 + 0x1cc20) != DAT_02be366c * 1.2) ||
         (*(float *)(param_1 + 0x1cc24) != fVar11)) {
        *(float *)(param_1 + 0x1cc20) = DAT_02be366c * 1.2;
        *(float *)(param_1 + 0x1cc24) = fVar11;
        FUN_0091ada4(param_1 + 0x1cbe0);
      }
      FUN_00f13f08(fVar13 + DAT_02be366c * -3.0,local_90,param_1 + 0x1cbe0);
      fVar11 = DAT_02be3668;
      if ((*(float *)(param_1 + 0x14b68) != DAT_02be3668) ||
         (*(float *)(param_1 + 0x14b6c) != DAT_02be3668)) {
        *(float *)(param_1 + 0x14b68) = DAT_02be3668;
        *(float *)(param_1 + 0x14b6c) = fVar11;
        FUN_0091ada4(param_1 + 0x14b20);
      }
      fVar11 = DAT_02be366c;
      if ((*(float *)(param_1 + 0x14b60) != fVar13 - DAT_02be366c) ||
         (*(float *)(param_1 + 0x14b64) != DAT_02be366c)) {
        *(float *)(param_1 + 0x14b60) = fVar13 - DAT_02be366c;
        *(float *)(param_1 + 0x14b64) = fVar11;
        FUN_0091ada4(param_1 + 0x14b20);
      }
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bab988(long param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  byte local_70 [16];
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_0096bc2c();
  uVar3 = ~param_2 & 1;
  *(uint *)(param_1 + 0x8ac4) =
       *(uint *)(param_1 + 0x8ac4) & 0xfffffff8 | *(uint *)(param_1 + 0x8ac4) & 3 | uVar3 << 2;
  lVar1 = param_1 + 0x180;
  *(uint *)(param_1 + 0x89fc) =
       *(uint *)(param_1 + 0x89fc) & 0xfffffff8 | *(uint *)(param_1 + 0x89fc) & 3 | uVar3 << 2;
  auVar8 = FUN_00f0e700(lVar1);
  if ((~param_2 & 1) == 0) {
    FUN_00f13f08(auVar8,0x43480000,lVar1);
    uVar3 = *(uint *)(param_1 + 0x204);
    if ((uVar3 & 0x7f80) != 0x5280) {
      *(uint *)(param_1 + 0x204) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5280;
      FUN_0091ada4(lVar1);
    }
  }
  else {
    FUN_00f13f08(auVar8,0x43e10000,lVar1);
    if ((~*(uint *)(param_1 + 0x204) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x204) = *(uint *)(param_1 + 0x204) | 0x7f80;
      FUN_0091ada4(lVar1);
    }
    plVar2 = (long *)(*(long *)(param_1 + 0x1ffd8) + 0x28f50);
    bVar4 = *(byte *)(*plVar2 + 0x60);
    if ((bVar4 & 1) == 0) {
      uVar7 = (ulong)(bVar4 >> 1);
    }
    else {
      uVar7 = *(ulong *)(*plVar2 + 0x68);
    }
    *(uint *)(param_1 + 0xa1b4) =
         *(uint *)(param_1 + 0xa1b4) & 0xfffffff8 |
         *(uint *)(param_1 + 0xa1b4) & 3 | (uint)(uVar7 != 0) << 2;
    bVar4 = *(byte *)(*plVar2 + 0x80);
    if ((bVar4 & 1) == 0) {
      uVar7 = (ulong)(bVar4 >> 1);
    }
    else {
      uVar7 = *(ulong *)(*plVar2 + 0x88);
    }
    *(uint *)(param_1 + 0xc624) =
         *(uint *)(param_1 + 0xc624) & 0xfffffff8 |
         *(uint *)(param_1 + 0xc624) & 3 | (uint)(uVar7 != 0) << 2;
    FUN_00cb418c(local_70,*(undefined4 *)(*plVar2 + 0x78));
    FUN_00e70570(&local_58,local_70);
    FUN_00ab7498(param_1 + 0xa130,&local_58);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    FUN_00cb418c(local_70,*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x1ffd8) + 0x28f50) + 0x98))
    ;
    FUN_00e70570(&local_58,local_70);
    FUN_00ab7498(param_1 + 0xc5a0,&local_58);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    *(uint *)(param_1 + 0x8bf4) =
         *(uint *)(param_1 + 0x8bf4) & 0xfffffff8 |
         *(uint *)(param_1 + 0x8bf4) & 3 | (~uVar6 & 1) << 2;
    FUN_00f0bdf8(param_1 + 0x8978);
  }
  FUN_00baae0c(param_1);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00babbe0(long param_1)

{
  long lVar1;
  float fVar2;
  undefined1 auStack_40 [4];
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&local_3c,auStack_40);
  param_1 = param_1 + 0x145e8;
  fVar2 = local_3c - DAT_031339d4;
  FUN_00ed0418(param_1,1);
  FUN_00ed0464(param_1);
  FUN_00ed02d8(fVar2,param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00babc78(long *param_1)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  
  if ((param_1[0x3ffb] != 0) &&
     (pbVar4 = *(byte **)(param_1[0x3ffb] + 0x28f50), pbVar4 != (byte *)0x0)) {
    lVar1 = FUN_00cc7868(**(undefined8 **)(pbVar4 + 0x18));
    FUN_00babd88(*(undefined4 *)(lVar1 + 0x30),param_1,*(undefined8 *)(lVar1 + 0x28));
    if ((*pbVar4 & 1) == 0) {
      pbVar2 = pbVar4 + 1;
    }
    else {
      pbVar2 = *(byte **)(pbVar4 + 0x10);
    }
    FUN_00ad7c98(param_1 + 0x10f,pbVar2,0);
    FUN_00b4df64(param_1 + 0x397c,*(undefined8 *)(pbVar4 + 0x20),*(undefined8 *)(pbVar4 + 0x18));
    FUN_00ad6890(param_1 + 0x1d53,*(undefined8 *)(pbVar4 + 0x18));
    if ((pbVar4[0xb8] & 1) == 0) {
      uVar3 = (ulong)(pbVar4[0xb8] >> 1);
    }
    else {
      uVar3 = *(ulong *)(pbVar4 + 0xc0);
    }
    *(uint *)((long)param_1 + 0x720c) =
         *(uint *)((long)param_1 + 0x720c) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0x720c) & 3 | (uint)(uVar3 != 0) << 2;
    if ((pbVar4[0xd0] & 1) == 0) {
      uVar3 = (ulong)(pbVar4[0xd0] >> 1);
    }
    else {
      uVar3 = *(ulong *)(pbVar4 + 0xd8);
    }
    *(uint *)((long)param_1 + 0x13ed4) =
         *(uint *)((long)param_1 + 0x13ed4) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0x13ed4) & 3 | (uint)(uVar3 != 0) << 2;
                    /* WARNING: Could not recover jumptable at 0x00babd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x150))(param_1);
    return;
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_00babd88(float param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  float local_d8;
  float afStack_d4 [3];
  undefined1 auStack_c8 [128];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar1 = (long *)(param_2 + 0x520);
  FUN_00f0e628(plVar1);
  FUN_00e6a8a8(auStack_c8,"build://Splash_%s.png",param_3);
  FUN_00f00298(afStack_d4,&local_d8);
  if ((*(float *)(param_2 + 0x560) != afStack_d4[0] - DAT_031339d4) ||
     (*(float *)(param_2 + 0x564) != local_d8 * param_1)) {
    *(float *)(param_2 + 0x560) = afStack_d4[0] - DAT_031339d4;
    *(float *)(param_2 + 0x564) = local_d8 * param_1;
    FUN_0091ada4(plVar1);
  }
  afStack_d4[1] = 1.0;
  afStack_d4[2] = param_1;
  (**(code **)(*plVar1 + 0x28))(plVar1,afStack_d4 + 1);
  FUN_00f0e6e8(plVar1,0);
  FUN_00f0e540(plVar1,auStack_c8);
  FUN_00f0e578(plVar1,"full_splash_1k");
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00babe98(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x1ffd0) = *(long *)(*(long *)(param_1 + 0x1ffd8) + 0x28f50) + 0x60;
  uVar2 = FUN_009580b8();
  lVar4 = *(long *)(*(long *)(param_1 + 0x1ffd8) + 0x28f50);
  FUN_008fa54c(local_60,&DAT_01e277f2);
  FUN_00961494(uVar2,lVar4 + 0x60,local_60);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  uVar3 = FUN_00969254();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00969248();
    if (0 < *(int *)(lVar4 + 0x38)) {
      uVar2 = FUN_009b8d90();
      FUN_009baadc(uVar2,&DAT_0320ffa8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00babf80(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x1ffd0) = *(long *)(*(long *)(param_1 + 0x1ffd8) + 0x28f50) + 0x80;
  uVar2 = FUN_009580b8();
  lVar4 = *(long *)(*(long *)(param_1 + 0x1ffd8) + 0x28f50);
  FUN_008fa54c(local_60,&DAT_01e277f2);
  FUN_00961494(uVar2,lVar4 + 0x80,local_60);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  uVar3 = FUN_00969254();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00969248();
    if (0 < *(int *)(lVar4 + 0x38)) {
      uVar2 = FUN_009b8d90();
      FUN_009baadc(uVar2,&DAT_0320ffa8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00babe98(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  byte abStack_60 [16];
  void *pvStack_50;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x1ffd0) = *(long *)(*(long *)(param_1 + 0x1ffd8) + 0x28f50) + 0x60;
  uVar2 = FUN_009580b8();
  lVar4 = *(long *)(*(long *)(param_1 + 0x1ffd8) + 0x28f50);
  FUN_008fa54c(abStack_60,&DAT_01e277f2);
  FUN_00961494(uVar2,lVar4 + 0x60,abStack_60);
  if ((abStack_60[0] & 1) != 0) {
    operator_delete(pvStack_50);
  }
  uVar3 = FUN_00969254();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00969248();
    if (0 < *(int *)(lVar4 + 0x38)) {
      uVar2 = FUN_009b8d90();
      FUN_009baadc(uVar2,&DAT_0320ffa8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

