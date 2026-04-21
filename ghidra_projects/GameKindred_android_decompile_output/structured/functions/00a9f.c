// functions/00a9f — 35 functions
#include "libGameKindred.h"




long FUN_00a9f020(long param_1,short param_2)

{
  long lVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0x2770) != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0x2778) + (ulong)uVar2 * 8);
      if ((lVar1 == 0) || ((*(int *)(lVar1 + 0x84) << 1) >> 0x10 == (int)param_2)) {
        return lVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x2770));
  }
  return 0;
}




void FUN_00a9f064(long param_1,short param_2)

{
  long lVar1;
  ulong uVar2;
  
  *(short *)(param_1 + 0x2788) = param_2;
  if (*(int *)(param_1 + 0x2770) != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0x2778) + uVar2 * 8);
      FUN_00a9e314(lVar1,(*(int *)(lVar1 + 0x84) << 1) >> 0x10 == (int)param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x2770));
  }
  FUN_00b2118c(param_1 + 800,(int)param_2);
  FUN_00a9e810(param_1);
  return;
}




void FUN_00a9f0e4(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x2770) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x2778) + (ulong)uVar3 * 8);
      if (lVar2 == 0) break;
      local_40[0] = 0xff808080;
      FUN_00f0d7fc(lVar2 + 0x270,local_40);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x2770));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9f170(long param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x2770);
  if (*(uint *)(param_1 + 0x2770) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x2778) + uVar3 * 8);
      if ((*(int *)(lVar2 + 0x84) << 1) >> 0x10 == param_2 && lVar2 != 0) {
        FUN_00b1a8e8(lVar2 + 0x3a0,param_3);
        uVar1 = (ulong)*(uint *)(param_1 + 0x2770);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}




void FUN_00a9f1e0(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x2770);
  if (*(uint *)(param_1 + 0x2770) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x2778) + uVar3 * 8);
      if ((*(int *)(lVar2 + 0x84) << 1) >> 0x10 == param_2 && lVar2 != 0) {
        FUN_00b1a8f0(lVar2 + 0x3a0);
        uVar1 = (ulong)*(uint *)(param_1 + 0x2770);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}




undefined8 FUN_00a9f248(long param_1,short param_2)

{
  uint uVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x2770) != 0) {
    uVar1 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x2778) + (ulong)uVar1 * 8);
      if (lVar2 == 0) {
        return 0;
      }
      if ((*(int *)(lVar2 + 0x84) << 1) >> 0x10 == (int)param_2) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x2770));
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a9f290(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_027d1438;
  FUN_00f13ca4(param_1 + 0x17);
  plVar1 = param_1 + 0x2e;
  FUN_00f11234(plVar1);
  FUN_00a9e524(param_1 + 0x62);
  FUN_00b8dc50(param_1 + 0x554);
  plVar2 = param_1 + 0x567;
  FUN_00f0e4a8(plVar2);
  *(undefined2 *)(param_1 + 0x585) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x2c2c) = _DAT_03218ef8;
  *(byte *)((long)param_1 + 0x2c34) = *(byte *)((long)param_1 + 0x2c34) & 0xf0 | 8;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x554,1);
  FUN_00f023ec(plVar1,param_1 + 0x62,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  *(uint *)((long)param_1 + 500) = *(uint *)((long)param_1 + 500) | 0x10;
  FUN_00f112f0(plVar1,1);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  *(byte *)(param_1 + 0x582) = *(byte *)(param_1 + 0x582) | 2;
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  uVar3 = *(uint *)((long)param_1 + 0x2bbc);
  if ((uVar3 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x2bbc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5280;
    FUN_0091ada4(plVar2);
  }
  local_60 = FUN_00f048a4("EVENT_SELECT_CONTEXT_MENU_ITEM");
  plVar1 = param_1 + 1;
  local_88 = FUN_00a9f4f4;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(plVar1,&local_88);
  local_60 = DAT_03210c74;
  local_88 = FUN_00a9f530;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(plVar1,&local_88);
  local_60 = DAT_03210c70;
  local_88 = FUN_00a9f544;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(plVar1,&local_88);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9f4f4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_4);
                    /* WARNING: Could not recover jumptable at 0x00a9f52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1,uVar1,&DAT_0320ffa8);
  return;
}




void FUN_00a9f530(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00a9f540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1,param_4,param_5);
  return;
}




void FUN_00a9f544(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00a9f554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))(param_1,param_4,param_5);
  return;
}




void FUN_00a9f558(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d1438;
  param_1[0x567] = &PTR_FUN_028266f0;
  param_1[0x57e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x581);
  FUN_00f13d08(param_1 + 0x567);
  FUN_00f01868(param_1 + 0x554);
  FUN_00a9e6bc(param_1 + 0x62);
  FUN_00f13d08(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a9f5e0(void *param_1)

{
  FUN_00a9f558();
  operator_delete(param_1);
  return;
}




void FUN_00a9f604(long param_1,byte param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00a9f644(param_1);
  }
  *(byte *)(param_1 + 0x2c34) = *(byte *)(param_1 + 0x2c34) & 0xfb | (param_2 & 1) << 2;
  return;
}




void FUN_00a9f644(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  float local_4c;
  float local_48;
  float local_44;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar3 & 1,&local_44,&local_48,&local_4c);
  fVar4 = local_4c + *(float *)(param_1 + 0x2c2c);
  FUN_00f13f08(local_44 - fVar4,local_48,param_1 + 0x170);
  if ((*(float *)(param_1 + 0x1b0) != fVar4) || (*(float *)(param_1 + 0x1b4) != 0.0)) {
    *(float *)(param_1 + 0x1b0) = fVar4;
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    FUN_0091ada4(param_1 + 0x170);
  }
  lVar1 = param_1 + 0x2b38;
  FUN_00f13f08(local_44 - fVar4,0x43480000,lVar1);
  if ((*(float *)(param_1 + 0x2b78) != fVar4) || (*(float *)(param_1 + 0x2b7c) != local_48)) {
    *(float *)(param_1 + 0x2b78) = fVar4;
    *(float *)(param_1 + 0x2b7c) = local_48;
    FUN_0091ada4(lVar1);
  }
  local_40 = 0x3f80000000000000;
  (**(code **)(*(long *)(param_1 + 0x2b38) + 0x28))(lVar1,&local_40);
  FUN_00f13f08(local_44,local_48,param_1 + 0x310);
  FUN_00a9e810(param_1 + 0x310);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9f780(void)

{
  return;
}




void FUN_00a9f784(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x2c34) = *(byte *)(param_1 + 0x2c34) & 0xfd | (param_2 & 1) << 1;
  if (*(short *)(param_1 + 0x2c28) != -1) {
    FUN_00b8e57c(param_1 + 0x2aa0);
    return;
  }
  return;
}




void FUN_00a9f7c0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a9f7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))(param_1,1);
  return;
}




void FUN_00a9f7d0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a9f7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))(param_1,0);
  return;
}




void FUN_00a9f7e0(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  float local_34;
  undefined1 auStack_30 [4];
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar2 & 1,&local_2c,auStack_30,&local_34);
  uVar3 = FUN_0092ea9c();
  fVar4 = 1.5;
  if ((uVar3 & 1) == 0) {
    fVar4 = 1.0;
  }
  *(float *)(param_1 + 0x2a90) = (local_2c - local_34) + (DAT_02be366c * -0.5) / fVar4;
  FUN_00a9f644(param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9f888(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  FUN_00a9ed68(param_1 + 0x310,param_2,param_3,param_1);
  if (param_4 != 0) {
    FUN_00b8dc90(param_1 + 0x2aa0,param_4,param_2 & 0xffffffff);
    return;
  }
  return;
}




void FUN_00a9f8e4(long param_1,short param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 0x2a80) != 0) {
    uVar2 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x2a88) + (ulong)uVar2 * 8);
      if (lVar3 == 0) break;
      if ((*(int *)(lVar3 + 0x84) << 1) >> 0x10 == (int)param_2) {
        FUN_00a9eef8(param_1 + 0x310);
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x2a80));
  }
  uVar1 = FUN_00f02540(param_3);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_00f01a4c(param_3,1);
  return;
}




void FUN_00a9f964(long param_1,undefined4 param_2,byte *param_3)

{
  ulong uVar1;
  
  if ((*(byte *)(param_1 + 0x2c34) & 1) == 0) {
    *(short *)(param_1 + 0x2c28) = (short)param_2;
    FUN_00b8dd44(0x3e4ccccd,param_1 + 0x2aa0,param_2,1,1);
    uVar1 = (ulong)(*param_3 >> 1);
    if ((*param_3 & 1) != 0) {
      uVar1 = *(ulong *)(param_3 + 8);
    }
    if (uVar1 != 0) {
      FUN_00b8e5b4(param_1 + 0x2aa0,param_3);
    }
    FUN_00a9f064(param_1 + 0x310,param_2);
    return;
  }
  return;
}




void FUN_00a9fa04(long param_1,undefined8 param_2,uint param_3)

{
  FUN_00a9efd4(param_1 + 0x310,param_2,param_3 & 1);
  return;
}




void FUN_00a9fa10(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x2c34) = *(byte *)(param_1 + 0x2c34) & 0xfe | param_2 & 1;
  if (*(short *)(param_1 + 0x2c28) != -1) {
    FUN_00b8e544(param_1 + 0x2aa0,*(short *)(param_1 + 0x2c28),param_2 & 1);
    return;
  }
  return;
}




void FUN_00a9fa50(undefined8 param_1,long param_2,long param_3,uint param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  float fVar7;
  undefined1 auStack_64 [4];
  float local_60;
  undefined1 auStack_5c [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar3 & 1,auStack_5c,&local_60,auStack_64);
  if ((param_5 & 1) == 0) {
    if (((param_4 ^ *(byte *)(param_2 + 0x84) >> 2) & 1) != 0) {
      lVar1 = param_2;
      if ((param_4 & 1) == 0) {
        lVar1 = param_3;
      }
      uVar4 = FUN_00efef08(0,0,0x3f4ccccd,FUN_00a36794);
      FUN_00f01980(lVar1);
      *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) | 4;
      FUN_00f022a0(lVar1,uVar4);
      if ((param_4 & 1) == 0) {
        param_3 = param_2;
        local_60 = -local_60;
      }
      uVar4 = FUN_00efef08(0,local_60,0x3f4ccccd,FUN_00a36794);
      lVar1 = DAT_03210d00;
      uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar5 == 0xffff) {
        puVar6 = (ushort *)0x0;
      }
      else {
        puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
        if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar6;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
        *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
        FUN_00efc8e8(puVar6);
        *(undefined ***)puVar6 = &PTR_FUN_02825148;
        *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      }
      FUN_00f01980(param_3);
      FUN_00f02308(param_3,uVar4,puVar6,0);
    }
  }
  else {
    *(uint *)(param_2 + 0x84) =
         *(uint *)(param_2 + 0x84) & 0xfffffff8 | *(uint *)(param_2 + 0x84) & 3 | (param_4 & 1) << 2
    ;
    *(uint *)(param_3 + 0x84) =
         *(uint *)(param_3 + 0x84) & 0xfffffff8 |
         *(uint *)(param_3 + 0x84) & 3 | (~param_4 & 1) << 2;
    fVar7 = 0.0;
    if ((param_4 & 1) == 0) {
      fVar7 = -local_60;
    }
    if (*(float *)(param_2 + 0x44) != fVar7) {
      *(float *)(param_2 + 0x44) = fVar7;
      FUN_0091ada4(param_2);
    }
    if ((param_4 & 1) == 0) {
      local_60 = 0.0;
    }
    if (*(float *)(param_3 + 0x44) != local_60) {
      *(float *)(param_3 + 0x44) = local_60;
      FUN_0091ada4(param_3);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a9fc98(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_2);
                    /* WARNING: Could not recover jumptable at 0x00a9fcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1,uVar1,&DAT_0320ffa8);
  return;
}




void FUN_00a9fcd4(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x2c2c) = *param_2;
  FUN_00a9f644();
  return;
}




void FUN_00a9fce4(long *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00a9fcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1,param_3,&DAT_0320ffa8);
  return;
}




void FUN_00a9fd00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d1170;
  param_1[0x74] = &PTR_FUN_027d15d8;
  FUN_0099ccc4(param_1 + 0x140);
  FUN_00f0d3a4(param_1 + 0x119);
  FUN_00f0d3a4(param_1 + 0xf3);
  FUN_00f0d3a4(param_1 + 0xcd);
  param_1[0xaf] = &PTR_FUN_028266f0;
  param_1[0xc6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc9);
  FUN_00f13d08(param_1 + 0xaf);
  param_1[0x85] = &PTR_FUN_02826f38;
  param_1[0x9c] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x9f);
  FUN_00f13d08(param_1 + 0x85);
  FUN_00f01868(param_1 + 0x74);
  FUN_00f0d3a4(param_1 + 0x4e);
  FUN_009c825c(param_1);
  return;
}




void FUN_00a9fdd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d1170;
  param_1[0x74] = &PTR_FUN_027d15d8;
  FUN_0099ccc4(param_1 + 0x140);
  FUN_00f0d3a4(param_1 + 0x119);
  FUN_00f0d3a4(param_1 + 0xf3);
  FUN_00f0d3a4(param_1 + 0xcd);
  param_1[0xaf] = &PTR_FUN_028266f0;
  param_1[0xc6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc9);
  FUN_00f13d08(param_1 + 0xaf);
  param_1[0x85] = &PTR_FUN_02826f38;
  param_1[0x9c] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x9f);
  FUN_00f13d08(param_1 + 0x85);
  FUN_00f01868(param_1 + 0x74);
  FUN_00f0d3a4(param_1 + 0x4e);
  FUN_009c825c(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a9feb0(void)

{
  return;
}




void FUN_00a9feb4(void)

{
  return;
}




undefined8 FUN_00a9feb8(void)

{
  return 1;
}




void FUN_00a9fec0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d15d8;
  FUN_0099ccc4(param_1 + 0xcc);
  FUN_00f0d3a4(param_1 + 0xa5);
  FUN_00f0d3a4(param_1 + 0x7f);
  FUN_00f0d3a4(param_1 + 0x59);
  param_1[0x3b] = &PTR_FUN_028266f0;
  param_1[0x52] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x55);
  FUN_00f13d08(param_1 + 0x3b);
  param_1[0x11] = &PTR_FUN_02826f38;
  param_1[0x28] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00a9ff68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d15d8;
  FUN_0099ccc4(param_1 + 0xcc);
  FUN_00f0d3a4(param_1 + 0xa5);
  FUN_00f0d3a4(param_1 + 0x7f);
  FUN_00f0d3a4(param_1 + 0x59);
  param_1[0x3b] = &PTR_FUN_028266f0;
  param_1[0x52] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x55);
  FUN_00f13d08(param_1 + 0x3b);
  param_1[0x11] = &PTR_FUN_02826f38;
  param_1[0x28] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}

