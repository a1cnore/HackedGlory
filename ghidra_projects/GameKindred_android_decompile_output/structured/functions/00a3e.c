// functions/00a3e — 28 functions
#include "libGameKindred.h"




void FUN_00a3e474(void)

{
  return;
}




byte FUN_00a3e47c(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = FUN_00da2c48();
  if ((iVar2 == 2) || (uVar3 = FUN_009f1f70(0x16), (uVar3 & 1) == 0)) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x22a68) >> 4 & 1;
  }
  return bVar1;
}




void FUN_00a3e4c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&fStack_3c,&local_40);
  uVar2 = FUN_00bbf3c8(param_1 + 0x21b50);
  if ((*(byte *)(param_1 + 0x22a68) & 0x60) == 0) {
    FUN_00f13f08(fStack_3c * 0.5,local_40,uVar2);
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    fVar5 = *(float *)(*(long *)(param_1 + 0x21b58) + 0x4f8);
    fVar5 = fVar5 + fVar5;
    FUN_00f13f08(fVar5,fVar5,uVar2);
    param_1 = FUN_00bbf3e0(param_1 + 0x21b50);
    uVar3 = 8;
    uVar4 = 8;
  }
  FUN_00f07940(0,0,uVar2,uVar3,param_1,uVar4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_00a3e5c0(long param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar1 = FUN_0092ea9c();
  auVar4 = FUN_00a49ff0(param_1 + 0xf430,uVar1 & 1);
  uVar7 = auVar4._8_8_;
  uVar6 = auVar4._0_8_;
  iVar2 = FUN_0092f2b8();
  if (iVar2 < 2) goto LAB_00a3e67c;
  fVar3 = (float)FUN_009f1fa8(0x11);
  if (0.5 <= fVar3) {
    if (0.5 < fVar3) {
      fVar3 = fVar3 + -0.5 + fVar3 + -0.5 + 0.0;
      fVar5 = (1.0 - fVar3) * 1.25;
      fVar3 = fVar3 + fVar3;
      goto LAB_00a3e668;
    }
    fVar3 = 1.25;
  }
  else {
    fVar3 = fVar3 + fVar3 + 0.0;
    fVar5 = (1.0 - fVar3) * 0.6;
    fVar3 = fVar3 * 1.25;
LAB_00a3e668:
    fVar3 = fVar3 + fVar5;
  }
  uVar6 = (ulong)(uint)(auVar4._0_4_ * fVar3);
  uVar7 = 0;
LAB_00a3e67c:
  auVar4._8_8_ = uVar7;
  auVar4._0_8_ = uVar6;
  return auVar4;
}




bool FUN_00a3e694(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_0092e750();
  bVar1 = false;
  if ((uVar2 & 1) != 0) {
    bVar1 = (*(byte *)(param_1 + 0x22a68) & 0x10) == 0;
  }
  return bVar1;
}




void FUN_00a3e6d4(undefined8 param_1,long param_2,uint param_3,uint param_4,ulong param_5)

{
  long lVar1;
  byte *pbVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  FUN_00f00298(auStack_7c,auStack_80);
  uVar6 = FUN_00a3e47c(param_2);
  pbVar2 = (byte *)(param_2 + 0x22a68);
  bVar4 = *pbVar2;
  FUN_00a49d60(param_1,param_2 + 0xf430,param_3 & (param_4 & 0x20) >> 5,~uVar6 & 1,1);
  uVar9 = param_3 & (param_4 & 8) >> 3;
  FUN_00b89d24(param_1,param_2 + 0x1f5a8,uVar9,uVar6 & 1,1);
  FUN_00b89d24(param_1,param_2 + 0x1f060,param_3 & (param_4 & 0x10) >> 4,1,1);
  FUN_00b89d24(param_1,param_2 + 0x1f670,param_3 & (param_4 & 0x8000) >> 0xf,uVar6 & 1,1);
  FUN_00b89d24(param_1,param_2 + 0x1f738,param_3 & 1,4,1);
  FUN_00a49634(param_1,param_2 + 0xfd68,uVar9,2,1);
  lVar1 = param_2 + 0x2c8;
  uVar9 = param_3 & (param_4 & 4) >> 2;
  FUN_00a2e778(param_1,lVar1,uVar9,3,1);
  FUN_00a459a0(param_1,param_2 + 0x19a68,param_3 & (param_4 & 0x40) >> 6,-(bVar4 >> 4 & 1) & 3,1);
  FUN_00a38d68(param_1,param_2 + 0xc460,param_3 & (param_4 & 0x80) >> 7,0,1);
  FUN_00a3170c(param_1,param_2 + 0x15640,param_3 & (param_4 & 0x4000) >> 0xe,1,1);
  FUN_00b89d24(param_1,param_2 + 0x22688,uVar9,1,1);
  FUN_00b89d24(param_1,param_2 + 0x21a88,param_3 & (param_4 & 0x100000) >> 0x14,0,1);
  FUN_00b89d24(param_1,param_2 + 0x21b90,param_3 & (param_4 & 0x200000) >> 0x15,1,1);
  if ((param_3 & 1) == 0) {
    FUN_00a681e4(param_1,param_2 + 0x15c40,0,4,1);
    *(uint *)(param_2 + 0x1fc1c) = *(uint *)(param_2 + 0x1fc1c) & 0xfffffffb;
    FUN_00bbcde4(param_2 + 0x8840,0);
    FUN_00c002b0(*(undefined8 *)(param_2 + 0x15618),0);
    if ((param_5 & 1) == 0) goto LAB_00a3ec24;
  }
  else {
    FUN_00a681e4(param_1,param_2 + 0x15c40,param_4 >> 0xd & (*pbVar2 & 2) >> 1,4,1);
    FUN_00ceace8();
    uVar8 = FUN_00ceae88();
    uVar9 = param_4 >> 0x1a & 4;
    if ((uVar8 & 1) == 0) {
      uVar9 = 0;
    }
    *(uint *)(param_2 + 0x1fc1c) = *(uint *)(param_2 + 0x1fc1c) & 0xfffffffb | uVar9;
    FUN_00ceace8();
    uVar8 = FUN_00ceae88();
    uVar9 = 0;
    if ((uVar8 & 1) == 0) {
      uVar8 = FUN_00a3bb40(uVar8,0);
      uVar9 = 0;
      if ((uVar8 & 1) != 0) {
        uVar9 = param_4 >> 0x1d & 1;
      }
    }
    FUN_00bbcde4(param_2 + 0x8840,uVar9);
    bVar3 = (param_4 >> 0x16 & 1) != 0;
    if (bVar3) {
      FUN_00a2f654(lVar1,0);
    }
    else {
      FUN_00a2f668();
    }
    FUN_00c865e0(param_2 + 0x22750,0,bVar3);
    bVar3 = (param_4 >> 0x17 & 1) != 0;
    if (bVar3) {
      FUN_00a2f654(lVar1,1);
    }
    else {
      FUN_00a2f668();
    }
    FUN_00c865e0(param_2 + 0x22750,1,bVar3);
    bVar3 = (param_4 >> 0x18 & 1) != 0;
    if (bVar3) {
      FUN_00a2f654(lVar1,2);
    }
    else {
      FUN_00a2f668();
    }
    FUN_00c865e0(param_2 + 0x22750,2,bVar3);
    uVar9 = param_4 >> 0x1a & 1;
    FUN_00a2f67c(lVar1,uVar9);
    FUN_00c86b64(param_2 + 0x228e0,uVar9);
    uVar9 = param_4 >> 0x1b & 1;
    FUN_00a2f6b0(lVar1,uVar9);
    FUN_00c86b88(param_2 + 0x228e0,uVar9);
    uVar9 = 0;
    if ((*pbVar2 >> 4 & 1) != 0) {
      iVar7 = FUN_009f1f94(0x21);
      uVar9 = 0;
      if (iVar7 == 0) {
        uVar9 = param_4 >> 0x17 & 4;
      }
    }
    *(uint *)(param_2 + 0x21f94) = *(uint *)(param_2 + 0x21f94) & 0xfffffffb | uVar9;
    uVar9 = 0;
    if ((*pbVar2 >> 4 & 1) != 0) {
      iVar7 = FUN_009f1f94(0x21);
      uVar9 = 0;
      if (iVar7 == 0) {
        uVar9 = param_4 >> 0x17 & 4;
      }
    }
    *(uint *)(param_2 + 0x2223c) = *(uint *)(param_2 + 0x2223c) & 0xfffffffb | uVar9;
    *(uint *)(param_2 + 0x8c44) =
         *(uint *)(param_2 + 0x8c44) & 0xfffffff8 |
         *(uint *)(param_2 + 0x8c44) & 3 | (param_4 >> 8 & 1) << 2;
    *(uint *)(param_2 + 0x8d44) =
         *(uint *)(param_2 + 0x8d44) & 0xfffffff8 |
         *(uint *)(param_2 + 0x8d44) & 3 | (param_4 >> 9 & 1) << 2;
    *(uint *)(param_2 + 0x8f44) =
         *(uint *)(param_2 + 0x8f44) & 0xfffffff8 |
         *(uint *)(param_2 + 0x8f44) & 3 | (param_4 >> 10 & 1) << 2;
    *(uint *)(param_2 + 0x8b44) =
         *(uint *)(param_2 + 0x8b44) & 0xfffffff8 |
         *(uint *)(param_2 + 0x8b44) & 3 | (param_4 >> 0xb & 1) << 2;
    iVar7 = FUN_009f1f94(0x1a);
    *(uint *)(param_2 + 0x9044) =
         *(uint *)(param_2 + 0x9044) & 0xfffffff8 |
         *(uint *)(param_2 + 0x9044) & 3 | ((uint)(iVar7 != 2) & param_4 >> 0xc) << 2;
  }
  FUN_00a3635c(param_1,param_2 + 0x13fc0,param_3 & (param_4 & 0x40000) >> 0x12,2,1);
LAB_00a3ec24:
  bVar4 = (byte)(param_4 >> 0xc) & 8;
  if ((param_3 & 1) == 0) {
    bVar4 = 0;
  }
  *pbVar2 = bVar4 | (byte)((param_3 & 1) << 2) | *pbVar2 & 0xf3;
  FUN_00a3bbf0(param_2);
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




byte FUN_00a3ec88(long param_1)

{
  return *(byte *)(param_1 + 0x22a68) >> 2 & 1;
}




void FUN_00a3ec9c(long param_1,uint param_2)

{
  FUN_00a2e788(param_1 + 0x2c8,param_2 & 1);
  FUN_00a38d80(param_1 + 0xc460,param_2 & 1);
  return;
}




void FUN_00a3ecd4(long param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  
  FUN_00a49644(param_1 + 0xfd68);
  FUN_00a3201c(param_1 + 0x15640,param_2,param_3);
  uVar1 = FUN_00ced270(*(undefined4 *)(param_2 + 0x260));
  if ((uVar1 & 1) != 0) {
    *(byte *)(param_1 + 0x22a68) = *(byte *)(param_1 + 0x22a68) & 0x7f;
    FUN_00a3ee28(param_1);
    return;
  }
  return;
}




void FUN_00a3ed58(long param_1,char param_2)

{
  *(byte *)(param_1 + 0x22a68) = *(byte *)(param_1 + 0x22a68) & 0x7f | param_2 << 7;
  FUN_00a3ee28();
  return;
}




void FUN_00a3ed70(long param_1)

{
  FUN_00a32b0c(param_1 + 0x15640);
  return;
}




void FUN_00a3ed80(long param_1)

{
  FUN_00a32fe0(param_1 + 0x15640);
  return;
}




void FUN_00a3ed90(long param_1,long param_2)

{
  *(byte *)(param_1 + 0x22a68) =
       *(byte *)(param_1 + 0x22a68) & 0xfd | (*(int *)(param_2 + 4) != 0) << 1;
  FUN_00a68810(param_1 + 0x15c40);
  FUN_00a681e4(0x3f000000,param_1 + 0x15c40,*(byte *)(param_1 + 0x22a68) >> 1 & 1,4,1);
  FUN_00bbd834(param_1 + 0x15610,*(int *)(param_2 + 4) == 2);
  return;
}




void FUN_00a3ee24(void)

{
  return;
}




void FUN_00a3ee28(long param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  
  uVar1 = FUN_00a1bcec();
  if ((uVar1 & 1) != 0) {
    uVar3 = (uint)((*(byte *)(param_1 + 0x22a68) & 0xe0) == 0x80);
    *(uint *)(param_1 + 0x13c) =
         *(uint *)(param_1 + 0x13c) & 0xffffffe0 | *(uint *)(param_1 + 0x13c) & 0xf | uVar3 << 4;
    lVar2 = FUN_00bbf3c8(param_1 + 0x21b70);
    *(uint *)(lVar2 + 0x84) =
         *(uint *)(lVar2 + 0x84) & 0xffffffe0 | *(uint *)(lVar2 + 0x84) & 0xf | uVar3 << 4;
    FUN_00a3e4c8(param_1);
    lVar2 = FUN_00bbf3c8(param_1 + 0x21b50);
    *(uint *)(lVar2 + 0x84) =
         *(uint *)(lVar2 + 0x84) & 0xffffffe0 |
         *(uint *)(lVar2 + 0x84) & 0xf | (uint)(*(byte *)(param_1 + 0x22a68) >> 7) << 4;
    lVar2 = FUN_00bbf3c8(param_1 + 0x21c58);
    *(uint *)(lVar2 + 0x84) =
         *(uint *)(lVar2 + 0x84) & 0xffffffe0 |
         *(uint *)(lVar2 + 0x84) & 0xf | (uint)(*(byte *)(param_1 + 0x22a68) >> 7) << 4;
  }
  return;
}




void FUN_00a3eeec(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00a3bb40();
  if ((uVar1 & 1) != 0) {
    FUN_00bfe520(*(undefined8 *)(param_1 + 0x8848));
    return;
  }
  return;
}




void FUN_00a3ef24(long param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  
  FUN_00ceace8();
  uVar1 = FUN_00ceaf3c();
  if ((uVar1 & 1) != 0) {
    FUN_00a49a74(param_1 + 0x13e00);
  }
  uVar1 = FUN_00f02540(param_1 + 0x13fc0);
  if ((uVar1 & 1) != 0) {
    puVar2 = (undefined4 *)FUN_00d70a78();
    FUN_00a36264(*puVar2,puVar2[0x3e],param_1 + 0x13fc0,1);
    return;
  }
  return;
}




void FUN_00a3ef94(long param_1)

{
  FUN_00a2e97c(param_1 + 0x2c8);
  return;
}




void FUN_00a3ef9c(long param_1)

{
  FUN_00a2ea94(param_1 + 0x2c8);
  return;
}




void FUN_00a3efa4(long param_1)

{
  FUN_00a2ead8(param_1 + 0x2c8,0);
  return;
}




void FUN_00a3efb0(long param_1)

{
  FUN_00a2e880(param_1 + 0x2c8);
  return;
}




void FUN_00a3efb8(long param_1)

{
  FUN_00a2e8c8(param_1 + 0x2c8);
  return;
}




void FUN_00a3efc0(long param_1)

{
  FUN_00a2e920(param_1 + 0x2c8);
  return;
}




void FUN_00a3efc8(long param_1)

{
  FUN_00a2e968(param_1 + 0x2c8);
  return;
}




void FUN_00a3efd0(long param_1)

{
  FUN_00a2f654(param_1 + 0x2c8);
  return;
}




void FUN_00a3efd8(long param_1)

{
  FUN_00a2f668(param_1 + 0x2c8);
  return;
}




void FUN_00a3efe0(long param_1)

{
  FUN_00c865ac(param_1 + 0x22750);
  return;
}




void FUN_00a3eff0(long param_1)

{
  FUN_00c865c4(param_1 + 0x22750);
  return;
}

