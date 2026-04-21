// functions/00c37 — 25 functions
#include "libGameKindred.h"




void FUN_00c37174(void *param_1)

{
  FUN_00c36f70();
  operator_delete(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c37198(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  ushort uVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  float local_b0;
  float fStack_ac;
  code *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027fa810;
  FUN_00f13ca4(plVar1);
  FUN_00f13ca4();
  plVar2 = param_1 + 0x45;
  FUN_00f13ca4(plVar2);
  param_1[0x89] = (long)param_1;
  *(undefined2 *)((long)param_1 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0xa1] = (long)param_1;
  *(undefined1 *)((long)param_1 + 0x462) = 0;
  *(undefined2 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0x3f800000;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  *(ushort *)(param_1 + 0x5e) = *(ushort *)(param_1 + 0x5e) & 0x8000 | 0x3ff;
  *(ushort *)(param_1 + 0x8b) = *(ushort *)(param_1 + 0x8b) & 0x8000 | 0x3ff;
  plVar3 = param_1 + 0xa6;
  param_1[0xa4] = _DAT_03218ef8;
  plVar4 = param_1 + 0x5e;
  plVar10 = param_1 + 0x8b;
  param_1[0xa5] = DAT_03218f00;
  FUN_00f0e4a8(plVar3);
  *(undefined2 *)(param_1 + 0xc5) = 0;
  param_1[0xc4] = 0;
  *(undefined1 *)((long)param_1 + 0x62a) = 1;
  FUN_00e70314();
  uVar6 = *(ushort *)(param_1 + 0x8b);
  plVar9 = param_1 + (ulong)(uVar6 >> 10 & 0x1f) * 7 + 0x8c;
  param_1[200] = 0;
  *(undefined4 *)plVar9 = 0;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9 = param_1 + (ulong)(uVar6 + 0x400 >> 10 & 0x1f) * 7 + 0x8c;
  plVar9[4] = 0;
  plVar9[3] = (long)FUN_00c377e0;
  *(undefined4 *)plVar9 = 1;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[5] = (long)FUN_00c377f4;
  plVar9[6] = 0;
  uVar8 = (uVar6 + 0x400 & 0x7c00 | uVar6 & 0xffff83ff) + 0x400;
  uVar6 = (ushort)(uVar6 & 0xffff83ff);
  plVar9 = param_1 + (ulong)(uVar8 >> 10 & 0x1f) * 7 + 0x8c;
  *(undefined4 *)plVar9 = 2;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[4] = 0;
  plVar9[3] = (long)FUN_00c37808;
  plVar9[6] = 0;
  plVar9[5] = (long)FUN_00c37884;
  *(ushort *)(param_1 + 0x8b) = ((ushort)uVar8 & 0x7c00 | uVar6) + 0x400 & 0x7c00 | uVar6;
  FUN_00c37894(plVar10,0,1);
  FUN_00c37894(plVar10,0,2);
  FUN_00c37894(plVar10,1,0);
  FUN_00c37894(plVar10,1,2);
  FUN_00c37894(plVar10,2,0);
  FUN_00c37894(plVar10,2,1);
  FUN_00c3791c(plVar10,0,0,0);
  uVar6 = *(ushort *)(param_1 + 0x5e);
  plVar10 = param_1 + (ulong)(uVar6 >> 10 & 0x1f) * 7 + 0x5f;
  plVar10[4] = 1;
  plVar10[3] = 0x1f0;
  *(undefined4 *)plVar10 = 0;
  plVar10[1] = 0;
  plVar10[2] = 0;
  plVar10[5] = 0;
  plVar10[6] = 0;
  uVar5 = uVar6 & 0xffff83ff;
  plVar10 = param_1 + (ulong)(uVar6 + 0x400 >> 10 & 0x1f) * 7 + 0x5f;
  plVar10[4] = 1;
  plVar10[3] = 0x208;
  uVar8 = (uVar6 + 0x400 & 0x7c00 | uVar5) + 0x400;
  *(undefined4 *)plVar10 = 3;
  plVar10[1] = 0;
  plVar10[2] = 0;
  plVar10[5] = 0;
  plVar10[6] = 0;
  plVar10 = param_1 + (ulong)(uVar8 >> 10 & 0x1f) * 7 + 0x5f;
  plVar10[4] = 1;
  plVar10[3] = 0x210;
  plVar10[6] = 1;
  plVar10[5] = 0x218;
  *(undefined4 *)plVar10 = 4;
  uVar8 = (uVar8 & 0x7c00 | uVar5) + 0x400;
  plVar10[1] = 0;
  plVar10[2] = 0;
  plVar10 = param_1 + (ulong)(uVar8 >> 10 & 0x1f) * 7 + 0x5f;
  plVar10[4] = 1;
  plVar10[3] = 0x1f8;
  uVar8 = (uVar8 & 0x7c00 | uVar5) + 0x400;
  plVar10[6] = 1;
  plVar10[5] = 0x200;
  *(undefined4 *)plVar10 = 5;
  plVar10[1] = 0;
  plVar10[2] = 0;
  plVar10 = param_1 + (ulong)(uVar8 >> 10 & 0x1f) * 7 + 0x5f;
  plVar10[4] = 1;
  plVar10[3] = 0x220;
  uVar8 = (uVar8 & 0x7c00 | uVar5) + 0x400;
  *(undefined4 *)plVar10 = 1;
  plVar10[1] = 0;
  plVar10[2] = 0;
  plVar10[5] = 0;
  plVar10[6] = 0;
  plVar10 = param_1 + (ulong)(uVar8 >> 10 & 0x1f) * 7 + 0x5f;
  plVar10[4] = 1;
  plVar10[3] = 0x228;
  *(undefined4 *)plVar10 = 2;
  plVar10[1] = 0;
  plVar10[2] = 0;
  plVar10[6] = 1;
  plVar10[5] = 0x230;
  *(ushort *)(param_1 + 0x5e) =
       ((ushort)uVar8 & 0x7c00 | (ushort)uVar5) + 0x400 & 0x7c00 | (ushort)uVar5;
  FUN_00c37a54(plVar4,5,0);
  FUN_00c37a54(plVar4,3,0);
  FUN_00c37a54(plVar4,4,0);
  FUN_00c37a54(plVar4,1,0);
  FUN_00c37a54(plVar4,2,0);
  FUN_00c37a54(plVar4,0,5);
  FUN_00c37a54(plVar4,0,3);
  FUN_00c37a54(plVar4,5,3);
  FUN_00c37a54(plVar4,3,4);
  FUN_00c37a54(plVar4,4,3);
  FUN_00c37a54(plVar4,0,1);
  FUN_00c37a54(plVar4,1,2);
  FUN_00c37a54(plVar4,2,1);
  FUN_00c37adc(plVar4,0,0,0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x2e,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f00298(&fStack_ac,&local_b0);
  FUN_00f0e6e8(plVar3,0);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  uVar8 = *(uint *)((long)param_1 + 0x5b4);
  if ((uVar8 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x5b4) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x7280;
    FUN_0091ada4(plVar3);
    uVar8 = *(uint *)((long)param_1 + 0x5b4);
  }
  *(uint *)((long)param_1 + 0x5b4) = uVar8 | 0x10;
  FUN_00f13f08(fStack_ac + fStack_ac,local_b0 + local_b0,plVar3);
  if ((*(float *)(param_1 + 0xb0) != 0.5) || (*(float *)((long)param_1 + 0x584) != 0.5)) {
    param_1[0xb0] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  local_80 = DAT_03210f60;
  *(uint *)((long)param_1 + 0x5b4) = *(uint *)((long)param_1 + 0x5b4) & 0xfffffffb;
  local_a8 = FUN_00c37c14;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_009693a0(param_1 + 0x46,&local_a8);
  local_a8 = FUN_00c37c14;
  local_80 = DAT_03210f8c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_009693a0(param_1 + 0x46,&local_a8);
  FUN_00f13f08(fStack_ac,local_b0,plVar2);
  if ((*(float *)(param_1 + 0x4f) != 0.5) || (*(float *)((long)param_1 + 0x27c) != 0.5)) {
    param_1[0x4f] = 0x3f0000003f000000;
    FUN_0091ada4(plVar2);
  }
  FUN_00e70314(param_1 + 0xc6);
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c377e0(long param_1)

{
  *(uint *)(*(long *)(param_1 + 0x2e0) + 0x84) = *(uint *)(*(long *)(param_1 + 0x2e0) + 0x84) | 4;
  return;
}




void FUN_00c377f4(long param_1)

{
  *(uint *)(*(long *)(param_1 + 0x2e0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x2e0) + 0x84) & 0xfffffffb;
  return;
}




void FUN_00c37808(long param_1)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 0x2ac) = *(uint *)(param_1 + 0x2ac) | 4;
  (**(code **)(**(long **)(param_1 + 0x2e8) + 0x150))();
  if ((*(uint *)(param_1 + 0x5b4) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x5b4) = *(uint *)(param_1 + 0x5b4) & 0xffff807f;
    FUN_0091ada4(param_1 + 0x530);
  }
  uVar1 = FUN_00efee28(0x3f666666,0x3e4ccccd,FUN_009a7608);
  FUN_00f022a0(param_1 + 0x530,uVar1);
  return;
}




void FUN_00c37884(long param_1)

{
  *(uint *)(param_1 + 0x2ac) = *(uint *)(param_1 + 0x2ac) & 0xfffffffb;
  return;
}




void FUN_00c37894(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar1 = *param_1 >> 10;
  if ((uVar1 & 0x1f) != 0) {
    uVar2 = 0;
    puVar4 = param_1 + 4;
    do {
      if (*puVar4 == param_2) goto LAB_00c378c8;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x1c;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_00c378c8:
    if ((uVar1 & 0x1f) != 0) {
      uVar3 = 0;
      puVar4 = param_1 + 4;
      do {
        if (*puVar4 == param_3) {
          if (uVar2 == 0xffffffff) {
            return;
          }
          param_1[(long)(int)uVar2 * 0x1c + 5] =
               param_1[(long)(int)uVar2 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar3 & 0x1f));
          return;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 0x1c;
      } while (uVar3 < (uVar1 & 0x1f));
    }
  }
  return;
}




void FUN_00c3791c(ushort *param_1,uint param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort *puVar6;
  ulong uVar7;
  
  uVar2 = *param_1;
  if ((uVar2 & 0x7c00) != 0) {
    uVar3 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_00c37964;
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 < (uVar2 >> 10 & 0x1f));
  }
  uVar3 = 0x1f;
LAB_00c37964:
  uVar1 = uVar2 & 0x1f;
  uVar4 = (ulong)uVar1;
  if (uVar1 == 0x1f) {
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
  }
  else {
    if (uVar3 == uVar1) {
      return;
    }
    if ((1 << (ulong)(uVar3 & 0x1f) & (uint)param_1[uVar4 * 0x1c + 5]) == 0) {
      return;
    }
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar4 * 0x1c + 0x18);
    uVar5 = *(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) & 1;
    if (uVar5 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar5 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x58) +
                                ((long)*(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) >> 1)));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar2 = *param_1;
    }
  }
  *param_1 = (ushort)uVar7 | uVar2 & 0xfc00 | 0x3e0;
  if ((int)uVar7 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar7 * 0x1c + 0x10);
    uVar4 = *(ulong *)(param_1 + uVar7 * 0x1c + 0x14) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x58) +
                                ((long)*(ulong *)(param_1 + uVar7 * 0x1c + 0x14) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00c379d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_00c37a54(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar1 = *param_1 >> 10;
  if ((uVar1 & 0x1f) != 0) {
    uVar2 = 0;
    puVar4 = param_1 + 4;
    do {
      if (*puVar4 == param_2) goto LAB_00c37a88;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x1c;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_00c37a88:
    if ((uVar1 & 0x1f) != 0) {
      uVar3 = 0;
      puVar4 = param_1 + 4;
      do {
        if (*puVar4 == param_3) {
          if (uVar2 == 0xffffffff) {
            return;
          }
          param_1[(long)(int)uVar2 * 0x1c + 5] =
               param_1[(long)(int)uVar2 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar3 & 0x1f));
          return;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 0x1c;
      } while (uVar3 < (uVar1 & 0x1f));
    }
  }
  return;
}




void FUN_00c37adc(ushort *param_1,uint param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort *puVar6;
  ulong uVar7;
  
  uVar2 = *param_1;
  if ((uVar2 & 0x7c00) != 0) {
    uVar3 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_00c37b24;
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 < (uVar2 >> 10 & 0x1f));
  }
  uVar3 = 0x1f;
LAB_00c37b24:
  uVar1 = uVar2 & 0x1f;
  uVar4 = (ulong)uVar1;
  if (uVar1 == 0x1f) {
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
  }
  else {
    if (uVar3 == uVar1) {
      return;
    }
    if ((1 << (ulong)(uVar3 & 0x1f) & (uint)param_1[uVar4 * 0x1c + 5]) == 0) {
      return;
    }
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar4 * 0x1c + 0x18);
    uVar5 = *(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) & 1;
    if (uVar5 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar5 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0xac) +
                                ((long)*(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) >> 1)));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar2 = *param_1;
    }
  }
  *param_1 = (ushort)uVar7 | uVar2 & 0xfc00 | 0x3e0;
  if ((int)uVar7 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar7 * 0x1c + 0x10);
    uVar4 = *(ulong *)(param_1 + uVar7 * 0x1c + 0x14) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0xac) +
                                ((long)*(ulong *)(param_1 + uVar7 * 0x1c + 0x14) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00c37b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_00c37c14(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00c37c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1e8))(param_1,param_4,param_5);
  return;
}




void FUN_00c37c28(undefined8 *param_1)

{
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *param_1 = &PTR_FUN_027fa810;
  param_1[0xa6] = &PTR_FUN_028266f0;
  param_1[0xbd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc0);
  FUN_00f13d08(param_1 + 0xa6);
  FUN_00f13d08(param_1 + 0x45);
  FUN_00f13d08(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c37ca4(void *param_1)

{
  FUN_00c37c28();
  operator_delete(param_1);
  return;
}




void FUN_00c37cc8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x620) = param_1;
  FUN_00c37cf4(param_2 + 0x458);
  FUN_00c37d3c(param_2 + 0x2f0);
  return;
}




void FUN_00c37cf4(ushort *param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x58) +
                                ((long)*(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00c37d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_00c37d3c(ushort *param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0xac) +
                                ((long)*(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00c37d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_00c37d84(long param_1)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x62a) = 0;
  *(undefined8 *)(param_1 + 0x518) = 0;
  FUN_00c37adc(param_1 + 0x2f0,1,0,0);
  if ((*(long *)(param_1 + 0x2e8) != 0) && (uVar1 = FUN_00f02540(), (uVar1 & 1) != 0)) {
    FUN_00f01a4c(*(undefined8 *)(param_1 + 0x2e8),1);
  }
  *(uint *)(param_1 + 0x5b4) = *(uint *)(param_1 + 0x5b4) & 0xfffffffb;
  return;
}




void FUN_00c37de4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x518) = param_2;
  FUN_00c37adc(param_1 + 0x2f0,1,0,0);
  return;
}




void FUN_00c37e04(long param_1)

{
  FUN_00c37adc(param_1 + 0x2f0,5,0,0);
  return;
}




void FUN_00c37e18(long param_1)

{
  FUN_00c37adc(param_1 + 0x2f0,0,0,0);
  return;
}




void FUN_00c37e2c(long *param_1)

{
  FUN_00f13f08(param_1 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x00c37e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c37e5c(long param_1)

{
  FUN_00f13e54(param_1 + 0xb8);
  return;
}




void FUN_00c37e64(long param_1)

{
  uint uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x2f0) & 0x1f;
  if ((uVar1 != 0x1f) && (*(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x2f8) == 5)) {
    FUN_00c37adc(param_1 + 0x2f0,3,0,0);
    return;
  }
  return;
}




void FUN_00c37ea4(long param_1)

{
  uint uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x2f0) & 0x1f;
  if ((uVar1 != 0x1f) && (*(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x2f8) == 4)) {
    FUN_00c37adc(param_1 + 0x2f0,3,0,0);
    return;
  }
  return;
}




void FUN_00c37ee4(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined4 local_6c;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x2e0) = param_2;
  *(long *)(param_1 + 0x2e8) = param_3;
  if (param_2 != 0) {
    FUN_00f023ec(param_1 + 0x170,param_2,1);
    *(uint *)(*(long *)(param_1 + 0x2e0) + 0x84) =
         *(uint *)(*(long *)(param_1 + 0x2e0) + 0x84) & 0xfffffffb;
    local_68 = (code *)0x3f0000003f000000;
    (**(code **)(**(long **)(param_1 + 0x2e0) + 0x28))(*(long **)(param_1 + 0x2e0),&local_68);
    local_40 = DAT_03210f60;
    *(uint *)(*(long *)(param_1 + 0x2e0) + 0x84) =
         *(uint *)(*(long *)(param_1 + 0x2e0) + 0x84) | 0x10;
    local_68 = FUN_00c37c14;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(*(long *)(param_1 + 0x2e0) + 8,&local_68);
    local_68 = FUN_00c37c14;
    local_40 = DAT_03210f8c;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(*(long *)(param_1 + 0x2e0) + 8,&local_68);
    param_3 = *(long *)(param_1 + 0x2e8);
  }
  if (param_3 != 0) {
    FUN_00f023ec(param_1 + 0x228,param_3,1);
    *(uint *)(param_1 + 0x2ac) = *(uint *)(param_1 + 0x2ac) & 0xfffffffb;
    local_68 = (code *)0x3f0000003f000000;
    (**(code **)(**(long **)(param_1 + 0x2e8) + 0x28))(*(long **)(param_1 + 0x2e8),&local_68);
    FUN_00f00298(&local_68,&local_6c);
    FUN_00f13f08((ulong)local_68 & 0xffffffff,local_6c,*(undefined8 *)(param_1 + 0x2e8));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

