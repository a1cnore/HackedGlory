// functions/009dc — 32 functions
#include "libGameKindred.h"




undefined8 FUN_009dc004(undefined8 param_1)

{
  FUN_009db4cc();
  return param_1;
}




void FUN_009dc028(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009dc030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009dc034(undefined8 *param_1)

{
  ushort *puVar1;
  
  *param_1 = &PTR_FUN_027c3730;
  puVar1 = (ushort *)(param_1 + 5);
  param_1[0x15] = FUN_009dc25c;
  *(undefined2 *)(param_1 + 0x22) = 4;
  *(undefined4 *)(param_1 + 0xd) = 1;
  *(undefined4 *)(param_1 + 0x14) = 3;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 2;
  param_1[7] = FUN_009dc190;
  param_1[8] = 0;
  param_1[0x29] = param_1;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined2 *)((long)param_1 + 0x32) = 0;
  param_1[0xe] = FUN_009dc1f0;
  param_1[0xf] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = FUN_009dc2c8;
  *(undefined2 *)((long)param_1 + 0xda) = 0;
  param_1[0x1e] = FUN_009dc308;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = FUN_009dc3d0;
  *(undefined2 *)((long)param_1 + 0x112) = 0;
  param_1[0x25] = FUN_009dc410;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *puVar1 = *puVar1 & 0x8000 | 0x17ff;
  FUN_009dc4d8(puVar1,0,1);
  FUN_009dc4d8(puVar1,1,2);
  FUN_009dc4d8(puVar1,2,3);
  FUN_009dc4d8(puVar1,3,4);
  FUN_009dc4d8(puVar1,4,1);
  FUN_009dc560(puVar1,0,0,0);
  return;
}




void FUN_009dc190(long param_1)

{
  long lVar1;
  
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + 0xa4) == DAT_02c09220)) &&
     (lVar1 = FUN_00d5bae0(), lVar1 != 0)) {
    FUN_009dc560(param_1 + 0x28,1,0,0);
    return;
  }
  return;
}




void FUN_009dc1f0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c09220) {
    lVar2 = 0;
  }
  uVar1 = FUN_00d5867c(lVar2,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_009dc560(param_1 + 0x28,2,0,0);
  return;
}




void FUN_009dc25c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c09220) {
    lVar2 = 0;
  }
  uVar1 = FUN_00d5867c(lVar2,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_009dc560(param_1 + 0x28,4,0,0);
  return;
}




void FUN_009dc2c8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_009dc7cc();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_009dc560(param_1 + 0x28,3,0,0);
  return;
}




void FUN_009dc308(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c09220) {
    lVar3 = 0;
  }
  plVar4 = *(long **)(lVar3 + 0x18);
  while ((plVar4 != (long *)0x0 && (*(int *)(plVar4[1] + 0xa4) != DAT_0312e4a8))) {
    plVar4 = (long *)plVar4[4];
  }
  iVar1 = rand();
  puVar5 = (&PTR_s_build___Sounds_Kraken_assetbundl_02be32c0)[iVar1 % 4];
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d09638(*(undefined4 *)(lVar3 + 0x100));
  uVar2 = (**(code **)(*plVar4 + 0x188))(plVar4);
  FUN_009ac6b8(uVar6,plVar4,puVar5,0,1,0x10ed,1,uVar2);
  return;
}




void FUN_009dc3d0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_009dc7cc();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_009dc560(param_1 + 0x28,1,0,0);
  return;
}




void FUN_009dc410(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c09220) {
    lVar3 = 0;
  }
  plVar4 = *(long **)(lVar3 + 0x18);
  while ((plVar4 != (long *)0x0 && (*(int *)(plVar4[1] + 0xa4) != DAT_0312e4a8))) {
    plVar4 = (long *)plVar4[4];
  }
  iVar1 = rand();
  puVar5 = (&PTR_s_build___Sounds_Kraken_assetbundl_02be32e0)[iVar1 % 4];
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d09638(*(undefined4 *)(lVar3 + 0x100));
  uVar2 = (**(code **)(*plVar4 + 0x188))(plVar4);
  FUN_009ac6b8(uVar6,plVar4,puVar5,0,1,0x10ed,1,uVar2);
  return;
}




void FUN_009dc4d8(ushort *param_1,uint param_2,uint param_3)

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
      if (*puVar4 == param_2) goto LAB_009dc50c;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x1c;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_009dc50c:
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




void FUN_009dc560(ushort *param_1,uint param_2)

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
      if (*puVar6 == param_2) goto LAB_009dc5a8;
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 < (uVar2 >> 10 & 0x1f));
  }
  uVar3 = 0x1f;
LAB_009dc5a8:
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
                       *(long *)(*(long *)(param_1 + 0x90) +
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
                       *(long *)(*(long *)(param_1 + 0x90) +
                                ((long)*(ulong *)(param_1 + uVar7 * 0x1c + 0x14) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x009dc614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_009dc698(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c3730;
  FUN_01985bd0();
  return;
}




void FUN_009dc6ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c3730;
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_009dc6e0(long param_1)

{
  long lVar1;
  
  DAT_0312eb30 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312eb30 + 1;
  lVar1 = param_1 + (ulong)DAT_0312eb30 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009dc894;
  *(code **)(lVar1 + 0xb8) = FUN_009dc8b8;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 2;
  *(uint *)(lVar1 + 0xa4) = DAT_0312eb30;
  *(undefined4 *)(lVar1 + 0xa8) = 0x150;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,3,FUN_009dc750,0);
  return;
}




void FUN_009dc750(long param_1)

{
  FUN_009dc758(param_1 + 0x28);
  return;
}




void FUN_009dc758(ushort *param_1)

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
                       *(long *)(*(long *)(param_1 + 0x90) +
                                ((long)*(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x009dc798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




long FUN_009dc7a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c09220) {
      lVar1 = 0;
    }
    return lVar1;
  }
  return 0;
}




void FUN_009dc7cc(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_248 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c09220) {
    lVar4 = 0;
  }
  uVar3 = FUN_01985cbc(lVar4,local_248,0x40,DAT_0312ebc0);
  if ((int)uVar3 != 0) {
    uVar5 = 0;
    do {
      iVar2 = FUN_009db468(local_248[uVar5]);
      if (iVar2 == 0x10ed) {
        uVar3 = 1;
        goto LAB_009dc868;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uVar3 & 0xffffffff));
    uVar3 = 0;
  }
LAB_009dc868:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}




undefined8 FUN_009dc894(undefined8 param_1)

{
  FUN_009dc034();
  return param_1;
}




void FUN_009dc8b8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009dc8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 FUN_009dc8c4(void)

{
  return DAT_0312fb40;
}




bool FUN_009dc8d0(void)

{
  return DAT_0312fb40 != 0;
}




void FUN_009dc8e4(undefined8 param_1,undefined4 param_2)

{
  if (DAT_0312fb40 != 0) {
    FUN_00a7322c(DAT_0312fb40 + 0x138,param_1,param_2);
    return;
  }
  return;
}




void FUN_009dc904(long param_1)

{
  FUN_00a7322c(param_1 + 0x138);
  return;
}




void FUN_009dc90c(undefined8 param_1,undefined4 param_2)

{
  if (DAT_0312fb40 != 0) {
    FUN_00a73238(DAT_0312fb40 + 0x138,param_1,param_2);
    return;
  }
  return;
}




void FUN_009dc92c(long param_1)

{
  FUN_00a73238(param_1 + 0x138);
  return;
}




void FUN_009dc934(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_0312fb40 != 0) {
    FUN_00a73244(DAT_0312fb40 + 0x138,param_1,param_2,param_3);
    return;
  }
  return;
}




void FUN_009dc958(long param_1)

{
  FUN_00a73244(param_1 + 0x138);
  return;
}




void FUN_009dc960(void)

{
  return;
}




void FUN_009dc964(void)

{
  return;
}




void FUN_009dc968(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  char local_cc [4];
  undefined1 auStack_c8 [4];
  undefined1 auStack_c4 [4];
  code *local_c0;
  undefined8 *puStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  long local_90;
  
  lVar11 = tpidr_el0;
  local_90 = *(long *)(lVar11 + 0x28);
  puVar1 = param_1 + 5;
  *param_1 = &PTR_FUN_027c3760;
  FUN_00f017e8(puVar1);
  puVar2 = param_1 + 0x16;
  param_1[5] = &PTR_FUN_027c1f80;
  FUN_00f017e8(puVar2);
  puVar3 = param_1 + 0x27;
  param_1[0x16] = &PTR_FUN_027c1f80;
  FUN_00a7294c(puVar3);
  FUN_00f017e8();
  puVar4 = param_1 + 0x294;
  param_1[0x283] = &PTR_FUN_027c1f80;
  FUN_00abaee8(puVar4,1);
  puVar5 = param_1 + 0x353;
  FUN_00abaee8(puVar5,1);
  FUN_00a7039c(param_1 + 0x412);
  FUN_00a73448(param_1 + 0x42d);
  FUN_00a787a0(param_1 + 0x6cd);
  FUN_00bbf698();
  FUN_00a6654c(param_1 + 0x1418);
  param_1[0x1bc4] = 0;
  *(undefined2 *)(param_1 + 0x1bc5) = 0xffff;
  *(undefined8 *)((long)param_1 + 0xde2c) = 0x3f800000;
  pbVar6 = (byte *)((long)param_1 + 0xde34);
  *pbVar6 = *pbVar6 & 0xf8;
  DAT_0312fb40 = param_1;
  FUN_00f00298(auStack_c4,auStack_c8);
  uVar12 = FUN_0092ea9c();
  *(uint *)((long)param_1 + 0xac) = *(uint *)((long)param_1 + 0xac) & 0xfffffffb;
  plVar13 = (long *)FUN_00f00438("ingame-effects");
  (**(code **)(*plVar13 + 0x78))(plVar13,param_1 + 0x412,1);
  plVar13 = (long *)FUN_00f00438("ingame-ui");
  (**(code **)(*plVar13 + 0x78))(plVar13,puVar1,1);
  FUN_009b5278(puVar1);
  FUN_00f023ec(puVar1,puVar2,1);
  FUN_00f023ec(puVar2,param_1 + 0x42d,1);
  FUN_00f023ec(puVar2,puVar3,1);
  FUN_00f023ec(puVar2,param_1 + 0x6cd,1);
  FUN_00f023ec(puVar2,puVar4,1);
  FUN_00f023ec(puVar2,puVar5,1);
  FUN_00f023ec(puVar2,param_1 + 0x1418,1);
  FUN_00f023ec(puVar1,param_1 + 0x283,1);
  FUN_00f023ec(param_1 + 0x283,param_1[0x113b],1);
  *(uint *)((long)param_1 + 0x1bc) = *(uint *)((long)param_1 + 0x1bc) | 4;
  FUN_00bbf9ec(param_1 + 0x113a);
  local_a8 = 0;
  uStack_a0 = 0;
  uVar7 = DAT_03210c64;
  local_c0 = FUN_009dd0e4;
  local_b0 = 0;
  puStack_b8 = param_1;
  local_98 = uVar7;
  FUN_009693a0(param_1[0x113b] + 8,&local_c0);
  FUN_00abb1c8(0x3ee66666,puVar4,&DAT_01bee7f6);
  uVar8 = DAT_03210f58;
  local_c0 = thunk_FUN_009dddb4;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  puStack_b8 = param_1;
  local_98 = uVar8;
  FUN_009693a0(param_1 + 0x295,&local_c0);
  local_c0 = thunk_FUN_009dddb4;
  uVar9 = DAT_03210f84;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  puStack_b8 = param_1;
  local_98 = uVar9;
  FUN_009693a0(param_1 + 0x295,&local_c0);
  FUN_00b09144(0,puVar4);
  FUN_00f0e578(param_1 + 0x32f,"hud_icon_score");
  uVar10 = *(uint *)((long)param_1 + 0x19fc);
  if ((uVar10 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x19fc) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x5900;
    FUN_0091ada4(param_1 + 0x32f);
  }
  uVar10 = *(uint *)((long)param_1 + 0x190c);
  if ((uVar10 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x190c) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x2600;
    FUN_0091ada4(param_1 + 0x311);
  }
  if ((*(uint *)((long)param_1 + 0x181c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x181c) = *(uint *)((long)param_1 + 0x181c) & 0xffff807f;
    FUN_0091ada4(param_1 + 0x2f3);
  }
  FUN_00abb218(0x3f800000,0x3fc00000,puVar4);
  fVar15 = (float)FUN_00f01c20(puVar4);
  fVar16 = 10.0;
  fVar17 = 15.0;
  if ((uVar12 & 1) == 0) {
    fVar17 = 10.0;
  }
  fVar18 = fVar17 + fVar15 * 0.5;
  FUN_00f01c20(puVar4);
  fVar15 = fVar17 + fVar16 * 0.5;
  if ((*(float *)(param_1 + 0x29c) != fVar18) || (*(float *)((long)param_1 + 0x14e4) != fVar15)) {
    *(float *)(param_1 + 0x29c) = fVar18;
    *(float *)((long)param_1 + 0x14e4) = fVar15;
    FUN_0091ada4(puVar4);
  }
  local_c0 = (code *)0x3f0000003f000000;
  (**(code **)(param_1[0x294] + 0x28))(puVar4,&local_c0);
  FUN_00abb1c8(0x3ee66666,puVar5,&DAT_01bee7f6);
  local_c0 = thunk_FUN_009dde64;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  puStack_b8 = param_1;
  local_98 = uVar8;
  FUN_009693a0(param_1 + 0x354,&local_c0);
  local_c0 = thunk_FUN_009dde64;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  puStack_b8 = param_1;
  local_98 = uVar9;
  FUN_009693a0(param_1 + 0x354,&local_c0);
  FUN_00b09144(0,puVar5);
  FUN_00f0e578(param_1 + 0x3ee,"hud_icon_replayKit");
  uVar10 = *(uint *)((long)param_1 + 0x1ff4);
  if ((uVar10 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x1ff4) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x3300;
    FUN_0091ada4(param_1 + 0x3ee);
  }
  uVar10 = *(uint *)((long)param_1 + 0x1f04);
  puVar1 = param_1 + 0x3d0;
  if ((uVar10 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1f04) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x2600;
    FUN_0091ada4(puVar1);
  }
  FUN_00f0e670(puVar1,&DAT_01bee7f6,2);
  FUN_00f13f08(0x42ba0000,0x42ba0000,puVar1);
  puVar1 = param_1 + 0x3b2;
  FUN_00f0e578(puVar1,"hud_icon_rings");
  uVar10 = *(uint *)((long)param_1 + 0x1e14);
  if ((uVar10 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1e14) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x2600;
    FUN_0091ada4(puVar1);
  }
  FUN_00f13f08(0x42c20000,0x42c20000,puVar1);
  fVar18 = 1.5;
  FUN_00abb218(0x3f800000,puVar5);
  fVar15 = *(float *)(param_1 + 0x29c);
  fVar16 = (float)FUN_00f01c20(puVar5);
  fVar15 = fVar17 + fVar15 + fVar15 + fVar16 * 0.5;
  FUN_00f01c20(puVar5);
  fVar17 = fVar17 + fVar18 * 0.5;
  if ((*(float *)(param_1 + 0x35b) != fVar15) || (*(float *)((long)param_1 + 0x1adc) != fVar17)) {
    *(float *)(param_1 + 0x35b) = fVar15;
    *(float *)((long)param_1 + 0x1adc) = fVar17;
    FUN_0091ada4(puVar5);
  }
  local_c0 = (code *)0x3f0000003f000000;
  (**(code **)(param_1[0x353] + 0x28))(puVar5,&local_c0);
  local_c0 = FUN_009dd138;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  puStack_b8 = param_1;
  local_98 = uVar7;
  FUN_009693a0(param_1 + 0xe80,&local_c0);
  local_c0 = FUN_009dd16c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  puStack_b8 = param_1;
  local_98 = uVar8;
  FUN_009693a0(param_1 + 0x70b,&local_c0);
  local_c0 = FUN_009dd16c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  puStack_b8 = param_1;
  local_98 = uVar9;
  FUN_009693a0(param_1 + 0x70b,&local_c0);
  uVar14 = FUN_0093d8d0();
  if ((uVar14 & 1) == 0) {
    *(uint *)((long)param_1 + 0x1b1c) = *(uint *)((long)param_1 + 0x1b1c) & 0xfffffffb;
  }
  *(uint *)((long)param_1 + 0xa144) = *(uint *)((long)param_1 + 0xa144) & 0xfffffff3 | 8;
  local_c0 = (code *)CONCAT44(local_c0._4_4_,0x3f800000);
  local_cc[0] = '\0';
  FUN_009399dc((int *)((long)param_1 + 0xde24),0,&local_c0,0,0,0,local_cc,0);
  *pbVar6 = *pbVar6 & 0xfb | local_cc[0] << 2;
  FUN_00a72f90(puVar3,1);
  FUN_00a72fc0((ulong)local_c0 & 0xffffffff,puVar3);
  if (*(int *)((long)param_1 + 0xde24) == 1) {
    *(uint *)((long)param_1 + 0x1524) = *(uint *)((long)param_1 + 0x1524) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x1b1c) = *(uint *)((long)param_1 + 0x1b1c) & 0xfffffffb;
  }
  FUN_009a8334();
  if (*(long *)(lVar11 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

