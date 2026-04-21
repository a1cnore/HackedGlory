// functions/00c26 — 17 functions
#include "libGameKindred.h"




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c260b4(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027f8c88;
  FUN_00f0e4a8(plVar1);
  FUN_00af6b6c(param_1 + 0x2f);
  param_1[0x2f] = (long)&PTR_FUN_027f8da8;
  param_1[0x40] = (long)&PTR_FUN_027f8ec0;
  FUN_00f0e4a8(param_1 + 0x4c);
  uVar5 = FUN_00e6ce7c("NEW_BUBBLE_ALERT",0);
  FUN_00b1bfec(param_1 + 0x6a,uVar5);
  lVar4 = _DAT_03218ef8;
  param_1[0xc0] = 0;
  param_1[0xbf] = lVar4;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  *(undefined8 *)((long)param_1 + 0x624) = 0;
  *(undefined8 *)((long)param_1 + 0x61c) = 0;
  *(undefined1 *)((long)param_1 + 0x62c) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2f,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4c,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x6a,1);
  *(uint *)((long)param_1 + 0x3d4) = *(uint *)((long)param_1 + 0x3d4) & 0xfffffffb;
  FUN_00f0e540(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530);
  FUN_00f0e578(plVar1,"dialog_background");
  uVar2 = *(uint *)((long)param_1 + 0x10c);
  if ((uVar2 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x10c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5280;
    FUN_0091ada4(plVar1);
  }
  *(uint *)((long)param_1 + 0x2e4) = *(uint *)((long)param_1 + 0x2e4) & 0xfffffffb;
  local_50 = FUN_00f048a4("UI::EVENT_FEED_IMAGE_LOADED");
  local_78 = FUN_00c26298;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 0x30,&local_78);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c26298(long param_1)

{
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffffb;
  return;
}




void FUN_00c262a8(undefined1 param_1 [16],float param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined4 param_7,byte *param_8,
                 byte *param_9,byte *param_10,byte param_11)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_70;
  float fStack_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  FUN_00c266a8();
  *(undefined4 *)((long)param_3 + 0x624) = param_6;
  *(undefined4 *)(param_3 + 0xc5) = param_7;
  *(uint *)((long)param_3 + 0x3d4) =
       *(uint *)((long)param_3 + 0x3d4) & 0xfffffff8 |
       *(uint *)((long)param_3 + 0x3d4) & 3 | (param_11 & 1) << 2;
  bVar2 = *param_8;
  uVar6 = *(ulong *)(param_8 + 8);
  uVar7 = (ulong)(bVar2 >> 1);
  uVar1 = uVar7;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar6;
  }
  if (uVar1 == 4) {
    iVar4 = FUN_0090d610(param_8,0,0xffffffffffffffff,"news",4);
    if (iVar4 == 0) {
      *(undefined4 *)(param_3 + 0xc3) = 0;
      goto LAB_00c26540;
    }
    bVar2 = *param_8;
    uVar6 = *(ulong *)(param_8 + 8);
    uVar7 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar7;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar6;
  }
  if (uVar1 == 7) {
    iVar4 = FUN_0090d610(param_8,0,0xffffffffffffffff,"academy",7);
    if (iVar4 != 0) {
      bVar2 = *param_8;
      uVar6 = *(ulong *)(param_8 + 8);
      uVar7 = (ulong)(bVar2 >> 1);
      goto LAB_00c263a0;
    }
    uVar5 = 1;
  }
  else {
LAB_00c263a0:
    uVar1 = uVar7;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar6;
    }
    if (uVar1 == 6) {
      iVar4 = FUN_0090d610(param_8,0,0xffffffffffffffff,"market",6);
      if (iVar4 != 0) {
        bVar2 = *param_8;
        uVar6 = *(ulong *)(param_8 + 8);
        uVar7 = (ulong)(bVar2 >> 1);
        goto LAB_00c263e0;
      }
    }
    else {
LAB_00c263e0:
      uVar1 = uVar7;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar6;
      }
      if (uVar1 == 0xc) {
        iVar4 = FUN_0090d610(param_8,0,0xffffffffffffffff,"market_chest",0xc);
        if (iVar4 == 0) {
          uVar5 = 3;
          goto LAB_00c2653c;
        }
        bVar2 = *param_8;
        uVar6 = *(ulong *)(param_8 + 8);
        uVar7 = (ulong)(bVar2 >> 1);
      }
      uVar1 = uVar7;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar6;
      }
      if (uVar1 == 0x11) {
        iVar4 = FUN_0090d610(param_8,0,0xffffffffffffffff,"market_daily_pick",0x11);
        if (iVar4 == 0) {
          uVar5 = 4;
          goto LAB_00c2653c;
        }
        bVar2 = *param_8;
        uVar6 = *(ulong *)(param_8 + 8);
        uVar7 = (ulong)(bVar2 >> 1);
      }
      uVar1 = uVar7;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar6;
      }
      if (uVar1 == 0x15) {
        iVar4 = FUN_0090d610(param_8,0,0xffffffffffffffff,"market_esports_badges",0x15);
        if (iVar4 == 0) {
          uVar5 = 5;
          goto LAB_00c2653c;
        }
        bVar2 = *param_8;
        uVar6 = *(ulong *)(param_8 + 8);
        uVar7 = (ulong)(bVar2 >> 1);
      }
      uVar1 = uVar7;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar6;
      }
      if (uVar1 == 3) {
        iVar4 = FUN_0090d610(param_8,0,0xffffffffffffffff,"tiv",3);
        if (iVar4 == 0) goto LAB_00c26510;
        bVar2 = *param_8;
        uVar6 = *(ulong *)(param_8 + 8);
        uVar7 = (ulong)(bVar2 >> 1);
      }
      if ((bVar2 & 1) != 0) {
        uVar7 = uVar6;
      }
      if ((uVar7 != 0xd) ||
         (iVar4 = FUN_0090d610(param_8,0,0xffffffffffffffff,"newsfrontpage",0xd), iVar4 != 0))
      goto LAB_00c26540;
    }
LAB_00c26510:
    uVar5 = 2;
  }
LAB_00c2653c:
  *(undefined4 *)(param_3 + 0xc3) = uVar5;
LAB_00c26540:
  local_70 = (**(code **)(*param_3 + 0x48))(param_3);
  fStack_6c = param_2;
  FUN_00f13f18(param_3 + 0x11,&local_70);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00af6d64(param_3 + 0x2f);
  uVar1 = (ulong)(*param_9 >> 1);
  if ((*param_9 & 1) != 0) {
    uVar1 = *(ulong *)(param_9 + 8);
  }
  if (uVar1 == 0) {
    *(uint *)((long)param_3 + 0x10c) = *(uint *)((long)param_3 + 0x10c) & 0xfffffffb;
  }
  else {
    FUN_008fce60(param_3 + 0xc0,param_9);
    uVar1 = (ulong)(*param_10 >> 1);
    if ((*param_10 & 1) != 0) {
      uVar1 = *(ulong *)(param_10 + 8);
    }
    if (uVar1 == 0) {
      param_10 = &DAT_0320ffa8;
    }
    FUN_00c26768(param_3,uVar1 != 0,param_10);
  }
  fVar8 = (float)FUN_00f01c54(param_3 + 0x6a,0,0,1,1);
  fVar9 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar9 = fVar9 - fVar8 * 0.5;
  if ((*(float *)(param_3 + 0x72) != fVar9) || (*(float *)((long)param_3 + 0x394) != param_2 * 0.5))
  {
    *(float *)(param_3 + 0x72) = fVar9;
    *(float *)((long)param_3 + 0x394) = param_2 * 0.5;
    FUN_0091ada4(param_3 + 0x6a);
  }
  FUN_00c268a4(param_3);
  (**(code **)(*param_3 + 0xe8))(param_3);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c266a8(long param_1,uint param_2,undefined4 param_3)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  *(uint *)(param_1 + 0x61c) = param_2;
  *(undefined4 *)(param_1 + 0x620) = param_3;
  uVar1 = FUN_0092e8e0();
  fVar2 = 310.0;
  if ((uVar1 & 1) == 0) {
    fVar2 = 302.0;
  }
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x61c));
  fVar2 = fVar2 * (float)param_2 + fVar3 * 0.0;
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x620));
  fVar3 = fVar3 * 151.0 + fVar3 * 0.0;
  if ((*(float *)(param_1 + 0x40) == fVar2) && (*(float *)(param_1 + 0x44) == fVar3)) {
    return;
  }
  *(float *)(param_1 + 0x40) = fVar2;
  *(float *)(param_1 + 0x44) = fVar3;
  FUN_0091ada4(param_1);
  return;
}




void FUN_00c26758(long param_1)

{
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffffb;
  return;
}




void FUN_00c26768(undefined1 param_1 [16],undefined4 param_2,long *param_3,byte param_4,
                 byte *param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  param_4 = param_4 & 1;
  if (*(byte *)((long)param_3 + 0x62c) != param_4) {
    plVar1 = param_3 + 0x4c;
    *(byte *)((long)param_3 + 0x62c) = param_4;
    if (param_3[0x66] != 0) {
      FUN_00f0e628(plVar1);
      param_4 = *(byte *)((long)param_3 + 0x62c);
    }
    if (param_4 == 0) {
      *(uint *)((long)param_3 + 0x2e4) = *(uint *)((long)param_3 + 0x2e4) & 0xfffffffb;
    }
    else {
      FUN_00f01980(plVar1);
      uVar5 = *(uint *)((long)param_3 + 0x2e4);
      if ((uVar5 & 0x7f80) != 0) {
        *(uint *)((long)param_3 + 0x2e4) = uVar5 & 0xffff807f;
        FUN_0091ada4(plVar1);
        uVar5 = *(uint *)((long)param_3 + 0x2e4);
      }
      *(uint *)((long)param_3 + 0x2e4) = uVar5 | 4;
      if ((*(byte *)(param_3 + 0xc0) & 1) == 0) {
        lVar4 = (long)param_3 + 0x601;
      }
      else {
        lVar4 = param_3[0xc2];
      }
      FUN_00f0e540(plVar1,lVar4);
      pbVar6 = *(byte **)(param_5 + 0x10);
      if ((*param_5 & 1) == 0) {
        pbVar6 = param_5 + 1;
      }
      FUN_00f0e578(plVar1,pbVar6);
      local_40 = (**(code **)(*param_3 + 0x48))(param_3);
      uStack_3c = param_2;
      FUN_00f13f18(plVar1,&local_40);
      uVar3 = FUN_00efee28(0x3f800000,0x400ccccd,FUN_00ab3980);
      FUN_00f022a0(plVar1,uVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c268a4(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  if ((*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffff807f;
    FUN_0091ada4(param_1);
  }
  FUN_00f01980(param_1);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_02825100;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    lVar1 = DAT_03210d00;
    uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar2 != 0xffff) {
      puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar4;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdd74(puVar4);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      goto LAB_00c269fc;
    }
  }
  puVar4 = (ushort *)0x0;
LAB_00c269fc:
  FUN_00efddc4(0x3f800000,puVar4);
  FUN_00efcac4(0x3e800000,puVar4);
  FUN_00f02308(param_1,puVar3,puVar4,0);
  return;
}




undefined4 FUN_00c26a34(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0092e8e0();
  uVar2 = 0x439b0000;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x43970000;
  }
  return uVar2;
}




void FUN_00c26a60(long *param_1)

{
  long *plVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  plVar1 = param_1 + 0x2f;
  FUN_00af6c8c(plVar1);
  if ((*(uint *)((long)param_1 + 0x1fc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1fc) = *(uint *)((long)param_1 + 0x1fc) & 0xffff807f;
    FUN_0091ada4(plVar1);
  }
  *(undefined1 *)(param_1 + 0x4b) = 1;
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00af6d64(plVar1);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_02825100;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    lVar2 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 != 0xffff) {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efdd74(puVar5);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      goto LAB_00c26be0;
    }
  }
  puVar5 = (ushort *)0x0;
LAB_00c26be0:
  FUN_00efddc4(0x3f800000,puVar5);
  FUN_00efcac4(0x3f000000,puVar5);
  FUN_00f02308(plVar1,puVar4,puVar5,0);
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xfffffffb;
  return;
}




void FUN_00c26c2c(undefined4 param_1,float param_2,long *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_3 + 0xbf) = param_1;
  *(float *)((long)param_3 + 0x5fc) = param_2;
  local_50 = (**(code **)(*param_3 + 0x48))();
  fStack_4c = param_2;
  FUN_00f13f18(param_3 + 0x11,&local_50);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00af6d64(param_3 + 0x2f);
  local_50 = (**(code **)(*param_3 + 0x48))(param_3);
  fStack_4c = param_2;
  FUN_00f13f18(param_3 + 0x4c,&local_50);
  fVar2 = (float)FUN_00f01c54(param_3 + 0x6a,0,0,1,1);
  fVar3 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar3 = fVar3 - fVar2 * 0.5;
  if ((*(float *)(param_3 + 0x72) != fVar3) || (*(float *)((long)param_3 + 0x394) != param_2 * 0.5))
  {
    *(float *)(param_3 + 0x72) = fVar3;
    *(float *)((long)param_3 + 0x394) = param_2 * 0.5;
    FUN_0091ada4(param_3 + 0x6a);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00c26d54(long param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_1 + 0x5f8);
  if ((fVar3 == DAT_03218ef8) && (*(float *)(param_1 + 0x5fc) == _DAT_03218efc)) {
    uVar1 = *(uint *)(param_1 + 0x624);
    fVar3 = 0.0;
    if (uVar1 != 0) {
      fVar3 = (float)(uVar1 - 1) * 0.0;
    }
    uVar2 = FUN_0092e8e0();
    NEON_ucvtf(*(undefined4 *)(param_1 + 0x628));
    fVar4 = 310.0;
    if ((uVar2 & 1) == 0) {
      fVar4 = 302.0;
    }
    fVar3 = fVar3 + fVar4 * (float)uVar1;
  }
  return fVar3;
}




void FUN_00c26e24(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  uVar2 = FUN_00ed0848(uVar3);
  if ((((uVar2 & 1) == 0) && (uVar2 = FUN_00ed08a8(uVar3), (uVar2 & 1) == 0)) &&
     (uVar2 = FUN_00ed0854(uVar3), (uVar2 & 1) == 0)) {
    FUN_00ed8868(auStack_68,DAT_03210c64,0xffffffff,param_1);
    FUN_00f04760(param_1,auStack_68,1);
  }
  FUN_00f0490c(param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c26ed4(long param_1)

{
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffffb;
  return;
}




void FUN_00c26ee4(void *param_1)

{
  FUN_00c22f2c();
  operator_delete(param_1);
  return;
}




void FUN_00c26f08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027da660;
  param_1[0x11] = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    operator_delete((void *)param_1[0x19]);
  }
  FUN_0199fb94(param_1 + 0x14);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c26f60(undefined8 *param_1)

{
  param_1[-0x11] = &PTR_FUN_027da660;
  *param_1 = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_0199fb94(param_1 + 3);
  FUN_00f01868(param_1 + -0x11);
  return;
}




void FUN_00c26fb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x11;
  *puVar1 = &PTR_FUN_027da660;
  *param_1 = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_0199fb94(param_1 + 3);
  FUN_00f01868(puVar1);
  operator_delete(puVar1);
  return;
}

