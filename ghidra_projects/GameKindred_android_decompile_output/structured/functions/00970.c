// functions/00970 — 3 functions
#include "libGameKindred.h"




void FUN_00970848(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bc950;
  FUN_008fcdb8(param_1 + 1,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 4,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 7,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 10,&DAT_0320ffa8);
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xff000000;
  *(undefined4 *)((long)param_1 + 0x6c) = 0xff000000;
  *(undefined4 *)(param_1 + 0xe) = 0xff000000;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  return;
}




void FUN_009708cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bc950;
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    operator_delete((void *)param_1[0xc]);
  }
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[9]);
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}




void FUN_00970940(long param_1,long param_2,long *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined4 uVar15;
  ulong uVar16;
  ulong uVar17;
  double dVar18;
  undefined **local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined **local_170;
  undefined **ppuStack_168;
  void *local_160;
  void *local_158;
  void *local_150;
  uint uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  byte local_138;
  undefined7 uStack_137;
  byte local_130;
  void *local_128;
  byte local_120;
  undefined7 uStack_11f;
  byte local_118;
  void *local_110;
  void *local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined2 uStack_f0;
  undefined2 uStack_ee;
  undefined4 local_ec;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined6 uStack_e4;
  undefined2 uStack_de;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [56];
  
  lVar4 = tpidr_el0;
  lVar12 = *(long *)(lVar4 + 0x28);
  FUN_0097374c(param_1);
  uVar15 = *(undefined4 *)(param_2 + 0x4fc);
  lVar7 = FUN_008fd190(param_3,"x");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1bf21c4;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x1;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1bf21c4;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x1;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x4fc) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x500);
  lVar7 = FUN_008fd190(param_3,"y");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1e3b149;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x1;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1e3b149;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x1;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x500) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x504);
  lVar7 = FUN_008fd190(param_3,"width");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96bb9;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x5;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96bb9;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x5;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x504) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x508);
  lVar7 = FUN_008fd190(param_3,"height");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96bbf;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x6;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96bbf;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x6;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x508) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x50c);
  lVar7 = FUN_008fd190(param_3,"minPlayerLevel");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96d80;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0xe;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96d80;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0xe;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x50c) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x510);
  lVar7 = FUN_008fd190(param_3,"maxPlayerLevel");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96d8f;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0xe;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96d8f;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0xe;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x510) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x514);
  lVar7 = FUN_008fd190(param_3,"lifetimeSpendUSDMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96d9e;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x13;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96d9e;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x13;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x514) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x518);
  lVar7 = FUN_008fd190(param_3,"lifetimeSpendUSDMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96db2;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x13;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96db2;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x13;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x518) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x51c);
  lVar7 = FUN_008fd190(param_3,"lifetimeVIPPointsMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96dc6;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x14;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96dc6;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x14;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x51c) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x520);
  lVar7 = FUN_008fd190(param_3,"lifetimeVIPPointsMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96ddb;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x14;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96ddb;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x14;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x520) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x524);
  lVar7 = FUN_008fd190(param_3,"cohortMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96df0;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x9;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96df0;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x9;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x524) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x528);
  lVar7 = FUN_008fd190(param_3,"cohortMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96dfa;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x9;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96dfa;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x9;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x528) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x52c);
  lVar7 = FUN_008fd190(param_3,"lastLoginTimeMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96e04;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)&DAT_00000010;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96e04;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)&DAT_00000010;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x52c) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x530);
  lVar7 = FUN_008fd190(param_3,"lastLoginTimeMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96e15;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)&DAT_00000010;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96e15;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)&DAT_00000010;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x530) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x534);
  lVar7 = FUN_008fd190(param_3,"spenderLevelMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96e26;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0xf;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96e26;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0xf;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x534) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x538);
  lVar7 = FUN_008fd190(param_3,"spenderLevelMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96e36;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0xf;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96e36;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0xf;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x538) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x53c);
  lVar7 = FUN_008fd190(param_3,"lastSpendDaysMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96e46;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)&DAT_00000010;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96e46;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)&DAT_00000010;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x53c) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x540);
  lVar7 = FUN_008fd190(param_3,"lastSpendDaysMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96e57;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)&DAT_00000010;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96e57;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)&DAT_00000010;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x540) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x544);
  lVar7 = FUN_008fd190(param_3,"spendCountMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96e68;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0xd;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96e68;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0xd;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x544) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x548);
  lVar7 = FUN_008fd190(param_3,"spendCountMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96e76;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0xd;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96e76;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0xd;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x548) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x54c);
  lVar7 = FUN_008fd190(param_3,"heroesOwnedMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96e84;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0xe;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96e84;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0xe;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x54c) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x550);
  lVar7 = FUN_008fd190(param_3,"heroesOwnedMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96e93;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0xe;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96e93;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0xe;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x550) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x554);
  lVar7 = FUN_008fd190(param_3,"nonLESkinsOwnedMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96ea2;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x12;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96ea2;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x12;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x554) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x558);
  lVar7 = FUN_008fd190(param_3,"nonLESkinsOwnedMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96eb5;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x12;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96eb5;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x12;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x558) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x55c);
  lVar7 = FUN_008fd190(param_3,"heroesUnownedMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96ec8;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)&DAT_00000010;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96ec8;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)&DAT_00000010;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x55c) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x560);
  lVar7 = FUN_008fd190(param_3,"heroesUnownedMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96ed9;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)&DAT_00000010;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96ed9;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)&DAT_00000010;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x560) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x564);
  lVar7 = FUN_008fd190(param_3,"nonLESkinsUnownedMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96eea;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x14;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96eea;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x14;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x564) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x568);
  lVar7 = FUN_008fd190(param_3,"nonLESkinsUnownedMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96eff;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x14;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96eff;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x14;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x568) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x56c);
  lVar7 = FUN_008fd190(param_3,"minAscensionRank");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96f14;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)&DAT_00000010;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96f14;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)&DAT_00000010;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x56c) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x570);
  lVar7 = FUN_008fd190(param_3,"maxAscensionRank");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96f25;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)&DAT_00000010;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b96f25;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)&DAT_00000010;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x570) = uVar15;
  bVar5 = *(char *)(param_2 + 0x58e) != '\0';
  lVar7 = FUN_008fd190(param_3,"requireAAP");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96f36;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0xa;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
      local_170 = (undefined **)0x1b96f36;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0xa;
      lVar7 = FUN_008feca4(param_3,&local_170);
      bVar5 = *(int *)(lVar7 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x58e) = bVar5;
  if ((*(byte *)(param_2 + 0x3a8) & 1) == 0) {
    plVar9 = (long *)(param_2 + 0x3a9);
  }
  else {
    plVar9 = *(long **)(param_2 + 0x3b8);
  }
  lVar7 = FUN_008fd190(param_3,"type");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1e4cd21;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x4;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_170 = (undefined **)0x1e4cd21;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x4;
      plVar9 = (long *)FUN_008feca4(param_3,&local_170);
      if ((*(byte *)((long)plVar9 + 0x12) >> 6 & 1) == 0) {
        plVar9 = (long *)*plVar9;
      }
    }
  }
  FUN_008fa54c(&local_170,plVar9);
  FUN_008fce60(param_1 + 0x3a8,&local_170);
  if (((ulong)local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if ((*(byte *)(param_2 + 0x3c0) & 1) == 0) {
    plVar9 = (long *)(param_2 + 0x3c1);
  }
  else {
    plVar9 = *(long **)(param_2 + 0x3d0);
  }
  lVar7 = FUN_008fd190(param_3,&DAT_01b96f41);
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)&DAT_01b96f41;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x3;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_170 = (undefined **)&DAT_01b96f41;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x3;
      plVar9 = (long *)FUN_008feca4(param_3,&local_170);
      if ((*(byte *)((long)plVar9 + 0x12) >> 6 & 1) == 0) {
        plVar9 = (long *)*plVar9;
      }
    }
  }
  FUN_008fa54c(&local_170,plVar9);
  FUN_008fce60(param_1 + 0x3c0,&local_170);
  if (((ulong)local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if ((*(byte *)(param_2 + 0x438) & 1) == 0) {
    plVar9 = (long *)(param_2 + 0x439);
  }
  else {
    plVar9 = *(long **)(param_2 + 0x448);
  }
  lVar7 = FUN_008fd190(param_3,"timestamp");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96f45;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x9;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_170 = (undefined **)0x1b96f45;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x9;
      plVar9 = (long *)FUN_008feca4(param_3,&local_170);
      if ((*(byte *)((long)plVar9 + 0x12) >> 6 & 1) == 0) {
        plVar9 = (long *)*plVar9;
      }
    }
  }
  FUN_008fa54c(&local_170,plVar9);
  FUN_008fce60(param_1 + 0x438,&local_170);
  if (((ulong)local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if ((*(byte *)(param_2 + 0x420) & 1) == 0) {
    plVar9 = (long *)(param_2 + 0x421);
  }
  else {
    plVar9 = *(long **)(param_2 + 0x430);
  }
  lVar7 = FUN_008fd190(param_3,"particleEffect");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96f4f;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0xe;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_170 = (undefined **)0x1b96f4f;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0xe;
      plVar9 = (long *)FUN_008feca4(param_3,&local_170);
      if ((*(byte *)((long)plVar9 + 0x12) >> 6 & 1) == 0) {
        plVar9 = (long *)*plVar9;
      }
    }
  }
  FUN_008fa54c(&local_170,plVar9);
  FUN_008fce60(param_1 + 0x420,&local_170);
  if (((ulong)local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if ((*(byte *)(param_2 + 0x3d8) & 1) == 0) {
    plVar9 = (long *)(param_2 + 0x3d9);
  }
  else {
    plVar9 = *(long **)(param_2 + 1000);
  }
  lVar7 = FUN_008fd190(param_3,&DAT_01b96aa3);
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)&DAT_01b96aa3;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x4;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_170 = (undefined **)&DAT_01b96aa3;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x4;
      plVar9 = (long *)FUN_008feca4(param_3,&local_170);
      if ((*(byte *)((long)plVar9 + 0x12) >> 6 & 1) == 0) {
        plVar9 = (long *)*plVar9;
      }
    }
  }
  FUN_008fa54c(&local_170,plVar9);
  FUN_008fce60(param_1 + 0x3d8,&local_170);
  if (((ulong)local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if ((*(byte *)(param_2 + 0x3f0) & 1) == 0) {
    plVar9 = (long *)(param_2 + 0x3f1);
  }
  else {
    plVar9 = *(long **)(param_2 + 0x400);
  }
  lVar7 = FUN_008fd190(param_3,"key");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1e454bb;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x3;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_170 = (undefined **)0x1e454bb;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x3;
      plVar9 = (long *)FUN_008feca4(param_3,&local_170);
      if ((*(byte *)((long)plVar9 + 0x12) >> 6 & 1) == 0) {
        plVar9 = (long *)*plVar9;
      }
    }
  }
  FUN_008fa54c(&local_170,plVar9);
  FUN_008fce60(param_1 + 0x3f0,&local_170);
  if (((ulong)local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if ((*(byte *)(param_2 + 0x408) & 1) == 0) {
    plVar9 = (long *)(param_2 + 0x409);
  }
  else {
    plVar9 = *(long **)(param_2 + 0x418);
  }
  lVar7 = FUN_008fd190(param_3,"tag");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1e46d3b;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x3;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_170 = (undefined **)0x1e46d3b;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x3;
      plVar9 = (long *)FUN_008feca4(param_3,&local_170);
      if ((*(byte *)((long)plVar9 + 0x12) >> 6 & 1) == 0) {
        plVar9 = (long *)*plVar9;
      }
    }
  }
  FUN_008fa54c(&local_170,plVar9);
  FUN_008fce60(param_1 + 0x408,&local_170);
  if (((ulong)local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  puVar10 = DAT_0320ffb8;
  if ((DAT_0320ffa8 & 1) == 0) {
    puVar10 = (undefined8 *)&DAT_0320ffa9;
  }
  lVar7 = FUN_008fd190(param_3,"tab_title");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96f5e;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x9;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_170 = (undefined **)0x1b96f5e;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x9;
      puVar10 = (undefined8 *)FUN_008feca4(param_3,&local_170);
      if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
        puVar10 = (undefined8 *)*puVar10;
      }
    }
  }
  FUN_00e705c8(&local_170,puVar10);
  FUN_00910394(param_1 + 0x4c8,&local_170);
  if (ppuStack_168 != (undefined **)0x0) {
    operator_delete__(ppuStack_168);
    local_170 = (undefined **)0x0;
    ppuStack_168 = (undefined **)0x0;
  }
  bVar5 = *(char *)(param_2 + 0x58f) != '\0';
  lVar7 = FUN_008fd190(param_3,"bMuteMusic");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96f68;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0xa;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
      local_170 = (undefined **)0x1b96f68;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0xa;
      lVar7 = FUN_008feca4(param_3,&local_170);
      bVar5 = *(int *)(lVar7 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x58f) = bVar5;
  bVar5 = *(char *)(param_2 + 0x590) != '\0';
  lVar7 = FUN_008fd190(param_3,"hideTile");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96f73;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x8;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
      local_170 = (undefined **)0x1b96f73;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x8;
      lVar7 = FUN_008feca4(param_3,&local_170);
      bVar5 = *(int *)(lVar7 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x590) = bVar5;
  bVar5 = *(char *)(param_2 + 0x591) != '\0';
  lVar7 = FUN_008fd190(param_3,"popupIfAvailable");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96f7c;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)&DAT_00000010;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
      local_170 = (undefined **)0x1b96f7c;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)&DAT_00000010;
      lVar7 = FUN_008feca4(param_3,&local_170);
      bVar5 = *(int *)(lVar7 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x591) = bVar5;
  if ((*(byte *)(param_2 + 0x450) & 1) == 0) {
    plVar9 = (long *)(param_2 + 0x451);
  }
  else {
    plVar9 = *(long **)(param_2 + 0x460);
  }
  lVar7 = FUN_008fd190(param_3,&DAT_01b92fa6);
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)&DAT_01b92fa6;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x4;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_170 = (undefined **)&DAT_01b92fa6;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x4;
      plVar9 = (long *)FUN_008feca4(param_3,&local_170);
      if ((*(byte *)((long)plVar9 + 0x12) >> 6 & 1) == 0) {
        plVar9 = (long *)*plVar9;
      }
    }
  }
  FUN_008fa54c(&local_170,plVar9);
  FUN_008fce60(param_1 + 0x450,&local_170);
  if (((ulong)local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if ((*(byte *)(param_2 + 0x468) & 1) == 0) {
    plVar9 = (long *)(param_2 + 0x469);
  }
  else {
    plVar9 = *(long **)(param_2 + 0x478);
  }
  lVar7 = FUN_008fd190(param_3,"tag");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1e46d3b;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x3;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_170 = (undefined **)0x1e46d3b;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x3;
      plVar9 = (long *)FUN_008feca4(param_3,&local_170);
      if ((*(byte *)((long)plVar9 + 0x12) >> 6 & 1) == 0) {
        plVar9 = (long *)*plVar9;
      }
    }
  }
  FUN_008fa54c(&local_170,plVar9);
  FUN_008fce60(param_1 + 0x468,&local_170);
  if (((ulong)local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if ((*(byte *)(param_2 + 0x480) & 1) == 0) {
    plVar9 = (long *)(param_2 + 0x481);
  }
  else {
    plVar9 = *(long **)(param_2 + 0x490);
  }
  lVar7 = FUN_008fd190(param_3,"testName");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96f8d;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x8;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_170 = (undefined **)0x1b96f8d;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x8;
      plVar9 = (long *)FUN_008feca4(param_3,&local_170);
      if ((*(byte *)((long)plVar9 + 0x12) >> 6 & 1) == 0) {
        plVar9 = (long *)*plVar9;
      }
    }
  }
  FUN_008fa54c(&local_170,plVar9);
  FUN_008fce60(param_1 + 0x480,&local_170);
  if (((ulong)local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if ((*(byte *)(param_2 + 0x498) & 1) == 0) {
    plVar9 = (long *)(param_2 + 0x499);
  }
  else {
    plVar9 = *(long **)(param_2 + 0x4a8);
  }
  lVar7 = FUN_008fd190(param_3,"testGroup");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96f96;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x9;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_170 = (undefined **)0x1b96f96;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x9;
      plVar9 = (long *)FUN_008feca4(param_3,&local_170);
      if ((*(byte *)((long)plVar9 + 0x12) >> 6 & 1) == 0) {
        plVar9 = (long *)*plVar9;
      }
    }
  }
  FUN_008fa54c(&local_170,plVar9);
  FUN_008fce60(param_1 + 0x498,&local_170);
  if (((ulong)local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if ((*(byte *)(param_2 + 0x390) & 1) == 0) {
    plVar9 = (long *)(param_2 + 0x391);
  }
  else {
    plVar9 = *(long **)(param_2 + 0x3a0);
  }
  lVar7 = FUN_008fd190(param_3,"deeplinkTargetId");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96fa0;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)&DAT_00000010;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_170 = (undefined **)0x1b96fa0;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)&DAT_00000010;
      plVar9 = (long *)FUN_008feca4(param_3,&local_170);
      if ((*(byte *)((long)plVar9 + 0x12) >> 6 & 1) == 0) {
        plVar9 = (long *)*plVar9;
      }
    }
  }
  FUN_008fa54c(&local_170,plVar9);
  FUN_008fce60(param_1 + 0x390,&local_170);
  if (((ulong)local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if ((*(byte *)(param_2 + 0x378) & 1) == 0) {
    plVar9 = (long *)(param_2 + 0x379);
  }
  else {
    plVar9 = *(long **)(param_2 + 0x388);
  }
  lVar7 = FUN_008fd190(param_3,"tile_id");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b92404;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x7;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_170 = (undefined **)0x1b92404;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x7;
      plVar9 = (long *)FUN_008feca4(param_3,&local_170);
      if ((*(byte *)((long)plVar9 + 0x12) >> 6 & 1) == 0) {
        plVar9 = (long *)*plVar9;
      }
    }
  }
  FUN_008fa54c(&local_170,plVar9);
  FUN_008fce60(param_1 + 0x378,&local_170);
  if (((ulong)local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  bVar5 = *(char *)(param_2 + 0x592) != '\0';
  lVar7 = FUN_008fd190(param_3,"useRelativeCohortTime");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96fb1;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x15;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
      local_170 = (undefined **)0x1b96fb1;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x15;
      lVar7 = FUN_008feca4(param_3,&local_170);
      bVar5 = *(int *)(lVar7 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x592) = bVar5;
  bVar5 = *(char *)(param_2 + 0x593) != '\0';
  lVar7 = FUN_008fd190(param_3,"useRelativeLastLoginTime");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96fc7;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x18;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
      local_170 = (undefined **)0x1b96fc7;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x18;
      lVar7 = FUN_008feca4(param_3,&local_170);
      bVar5 = *(int *)(lVar7 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x593) = bVar5;
  bVar5 = *(char *)(param_2 + 0x594) != '\0';
  lVar7 = FUN_008fd190(param_3,"useRelativeLastSpendTime");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96fe0;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x18;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
      local_170 = (undefined **)0x1b96fe0;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x18;
      lVar7 = FUN_008feca4(param_3,&local_170);
      bVar5 = *(int *)(lVar7 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x594) = bVar5;
  bVar5 = *(char *)(param_2 + 0x595) != '\0';
  lVar7 = FUN_008fd190(param_3,"openUrlInApp");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96ad2;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0xc;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
      local_170 = (undefined **)0x1b96ad2;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0xc;
      lVar7 = FUN_008feca4(param_3,&local_170);
      bVar5 = *(int *)(lVar7 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x595) = bVar5;
  if ((*(byte *)(param_2 + 0x4b0) & 1) == 0) {
    plVar9 = (long *)(param_2 + 0x4b1);
  }
  else {
    plVar9 = *(long **)(param_2 + 0x4c0);
  }
  lVar7 = FUN_008fd190(param_3,"filter_leaderboard_id");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b96ff9;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x15;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      local_170 = (undefined **)0x1b96ff9;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x15;
      plVar9 = (long *)FUN_008feca4(param_3,&local_170);
      if ((*(byte *)((long)plVar9 + 0x12) >> 6 & 1) == 0) {
        plVar9 = (long *)*plVar9;
      }
    }
  }
  FUN_008fa54c(&local_170,plVar9);
  FUN_008fce60(param_1 + 0x4b0,&local_170);
  if (((ulong)local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  uVar15 = *(undefined4 *)(param_2 + 0x574);
  lVar7 = FUN_008fd190(param_3,"filter_leaderboard_score_min");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b9700f;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x1c;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b9700f;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x1c;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x574) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x578);
  lVar7 = FUN_008fd190(param_3,"filter_leaderboard_score_max");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b9702c;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x1c;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b9702c;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x1c;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x578) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x57c);
  lVar7 = FUN_008fd190(param_3,"filter_leaderboard_rank_min");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b97049;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x1b;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b97049;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x1b;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x57c) = uVar15;
  uVar15 = *(undefined4 *)(param_2 + 0x580);
  lVar7 = FUN_008fd190(param_3,"filter_leaderboard_rank_max");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b97065;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x1b;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
      local_170 = (undefined **)0x1b97065;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x1b;
      puVar8 = (undefined4 *)FUN_008feca4(param_3,&local_170);
      uVar15 = *puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x580) = uVar15;
  dVar18 = (double)*(float *)(param_2 + 0x584);
  lVar7 = FUN_008fd190(param_3,"filter_leaderboard_percentile_min");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b97081;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x21;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 1 & 1) != 0) {
      local_170 = (undefined **)0x1b97081;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x21;
      FUN_008feca4(param_3,&local_170);
      dVar18 = (double)FUN_008fc0f0();
    }
  }
  *(float *)(param_1 + 0x584) = (float)dVar18;
  dVar18 = (double)*(float *)(param_2 + 0x588);
  lVar7 = FUN_008fd190(param_3,"filter_leaderboard_percentile_max");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b970a3;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x21;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) >> 1 & 1) != 0) {
      local_170 = (undefined **)0x1b970a3;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x21;
      FUN_008feca4(param_3,&local_170);
      dVar18 = (double)FUN_008fc0f0();
    }
  }
  *(float *)(param_1 + 0x588) = (float)dVar18;
  bVar5 = *(char *)(param_2 + 0x58c) != '\0';
  lVar7 = FUN_008fd190(param_3,"filter_leaderboard_no_score");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b970c5;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x1b;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
      local_170 = (undefined **)0x1b970c5;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x1b;
      lVar7 = FUN_008feca4(param_3,&local_170);
      bVar5 = *(int *)(lVar7 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x58c) = bVar5;
  bVar5 = *(char *)(param_2 + 0x58d) != '\0';
  lVar7 = FUN_008fd190(param_3,"filter_leaderboard_unranked");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b970e1;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x1b;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
      local_170 = (undefined **)0x1b970e1;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x1b;
      lVar7 = FUN_008feca4(param_3,&local_170);
      bVar5 = *(int *)(lVar7 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x58d) = bVar5;
  lVar7 = FUN_008fd190(param_3,"text");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1e46c4a;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x4;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if (*(int *)(lVar7 + 0x10) == 3) {
      local_170 = (undefined **)0x1e46c4a;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x4;
      FUN_008feca4(param_3,&local_170);
      FUN_0097390c(&local_170);
      FUN_008fce60(param_1 + 0x30,&ppuStack_168);
      FUN_008fce60(param_1 + 0x48,&local_150);
      FUN_008fce60(param_1 + 0x60,&local_138);
      FUN_008fce60(param_1 + 0x78,&local_120);
      local_170 = &PTR_FUN_027bc950;
      *(ulong *)(param_1 + 0xb4) = CONCAT26(uStack_de,uStack_e4);
      *(ulong *)(param_1 + 0xac) = CONCAT26(uStack_e6,CONCAT24(uStack_e8,local_ec));
      *(undefined8 *)(param_1 + 0x98) = uStack_100;
      *(void **)(param_1 + 0x90) = local_108;
      *(ulong *)(param_1 + 0xa8) = CONCAT44(local_ec,CONCAT22(uStack_ee,uStack_f0));
      *(undefined8 *)(param_1 + 0xa0) = uStack_f8;
      if ((local_120 & 1) != 0) {
        operator_delete(local_110);
      }
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      if (((ulong)local_150 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_13c,local_140));
      }
      if (((ulong)ppuStack_168 & 1) != 0) {
        operator_delete(local_158);
      }
    }
  }
  lVar7 = FUN_008fd190(param_3,"topBanner");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b970fd;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x9;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if (*(int *)(lVar7 + 0x10) == 3) {
      local_170 = (undefined **)0x1b970fd;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x9;
      FUN_008feca4(param_3,&local_170);
      FUN_0096fdcc(&local_170);
      FUN_008fce60(param_1 + 200,&ppuStack_168);
      FUN_008fce60(param_1 + 0xe0,&local_150);
      FUN_008fce60(param_1 + 0xf8,&local_138);
      FUN_008fce60(param_1 + 0x110,&local_120);
      local_170 = &PTR_FUN_027bc900;
      *(undefined8 *)(param_1 + 0x130) = uStack_100;
      *(void **)(param_1 + 0x128) = local_108;
      if ((local_120 & 1) != 0) {
        operator_delete(local_110);
      }
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      if (((ulong)local_150 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_13c,local_140));
      }
      if (((ulong)ppuStack_168 & 1) != 0) {
        operator_delete(local_158);
      }
    }
  }
  lVar7 = FUN_008fd190(param_3,"bottomBanner");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b97107;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0xc;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if (*(int *)(lVar7 + 0x10) == 3) {
      local_170 = (undefined **)0x1b97107;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0xc;
      FUN_008feca4(param_3,&local_170);
      FUN_0096fdcc(&local_170);
      FUN_008fce60(param_1 + 0x140,&ppuStack_168);
      FUN_008fce60(param_1 + 0x158,&local_150);
      FUN_008fce60(param_1 + 0x170,&local_138);
      FUN_008fce60(param_1 + 0x188,&local_120);
      local_170 = &PTR_FUN_027bc900;
      *(undefined8 *)(param_1 + 0x1a8) = uStack_100;
      *(void **)(param_1 + 0x1a0) = local_108;
      if ((local_120 & 1) != 0) {
        operator_delete(local_110);
      }
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      if (((ulong)local_150 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_13c,local_140));
      }
      if (((ulong)ppuStack_168 & 1) != 0) {
        operator_delete(local_158);
      }
    }
  }
  lVar7 = FUN_008fd190(param_3,"ribbons");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b97114;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x7;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if (*(int *)(lVar7 + 0x10) == 4) {
      local_170 = (undefined **)0x1b97114;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x7;
      plVar9 = (long *)FUN_008feca4(param_3,&local_170);
      if ((int)plVar9[1] != 0) {
        lVar7 = 0;
        uVar17 = 0;
        do {
          FUN_00973aac(&local_170,*plVar9 + lVar7);
          FUN_009739c4(param_1 + 0x18,&local_170);
          ppuStack_168 = &PTR_FUN_027bc900;
          local_170 = &PTR_FUN_027bc928;
          if ((local_118 & 1) != 0) {
            operator_delete(local_108);
          }
          if ((local_130 & 1) != 0) {
            operator_delete((void *)CONCAT71(uStack_11f,local_120));
          }
          if ((uStack_148 & 1) != 0) {
            operator_delete((void *)CONCAT71(uStack_137,local_138));
          }
          if (((ulong)local_160 & 1) != 0) {
            operator_delete(local_150);
          }
          uVar17 = uVar17 + 1;
          lVar7 = lVar7 + 0x18;
        } while (uVar17 < *(uint *)(plVar9 + 1));
      }
    }
  }
  lVar7 = FUN_008fd190(param_3,"preview");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b9711c;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x7;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if (*(int *)(lVar7 + 0x10) == 3) {
      local_170 = (undefined **)0x1b9711c;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x7;
      FUN_008feca4(param_3,&local_170);
      FUN_00973b84(&local_170);
      FUN_008fce60(param_1 + 0x1b8,&ppuStack_168);
      FUN_008fce60(param_1 + 0x1d0,&local_150);
      FUN_008fce60(param_1 + 0x1e8,&local_138);
      FUN_008fce60(param_1 + 0x200,&local_120);
      FUN_008fce60(param_1 + 0x218,&local_108);
      FUN_008fce60(param_1 + 0x230,&uStack_f0);
      FUN_008fce60(param_1 + 0x248,auStack_d8);
      FUN_008fce60(param_1 + 0x260,auStack_c0);
      FUN_008fce60(param_1 + 0x278,auStack_a8);
      FUN_0096e1d8(&local_170);
    }
  }
  lVar7 = FUN_008fd190(param_3,"progressBar");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b97124;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0xb;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if (*(int *)(lVar7 + 0x10) == 3) {
      local_170 = (undefined **)0x1b97124;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0xb;
      FUN_008feca4(param_3,&local_170);
      FUN_00973bf4(&local_170);
      FUN_008fce60(param_1 + 0x298,&ppuStack_168);
      FUN_008fce60(param_1 + 0x2b0,&local_150);
      FUN_008fce60(param_1 + 0x2c8,&local_138);
      FUN_008fce60(param_1 + 0x2e0,&local_120);
      local_170 = &PTR_FUN_027bc9a0;
      *(ulong *)(param_1 + 0x31a) = CONCAT62(uStack_e4,uStack_e6);
      *(ulong *)(param_1 + 0x312) = CONCAT26(uStack_e8,CONCAT42(local_ec,uStack_ee));
      *(ulong *)(param_1 + 0x310) = CONCAT44(local_ec,CONCAT22(uStack_ee,uStack_f0));
      *(undefined8 *)(param_1 + 0x308) = uStack_f8;
      *(undefined8 *)(param_1 + 0x300) = uStack_100;
      *(void **)(param_1 + 0x2f8) = local_108;
      if ((local_120 & 1) != 0) {
        operator_delete(local_110);
      }
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      if (((ulong)local_150 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_13c,local_140));
      }
      if (((ulong)ppuStack_168 & 1) != 0) {
        operator_delete(local_158);
      }
    }
  }
  lVar7 = FUN_008fd190(param_3,"arenaChallenge");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b97130;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0xe;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if (*(int *)(lVar7 + 0x10) == 3) {
      local_170 = (undefined **)0x1b97130;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0xe;
      FUN_008feca4(param_3,&local_170);
      FUN_00973cac(&local_170);
      FUN_008fce60(param_1 + 0x330,&ppuStack_168);
      local_170 = &PTR_FUN_027bc9c8;
      *(undefined4 *)(param_1 + 0x358) = local_140;
      *(ulong *)(param_1 + 0x350) = CONCAT44(uStack_144,uStack_148);
      *(void **)(param_1 + 0x348) = local_150;
      if (((ulong)ppuStack_168 & 1) != 0) {
        operator_delete(local_158);
      }
    }
  }
  lVar7 = FUN_008fd190(param_3,"osVersionRequirement");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b9713f;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x14;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if (*(int *)(lVar7 + 0x10) == 3) {
      local_170 = (undefined **)0x1b9713f;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x14;
      uVar11 = FUN_008feca4(param_3,&local_170);
      local_170 = &PTR_FUN_027bc9f0;
      ppuStack_168 = (undefined **)0x0;
      local_160 = (void *)0x0;
      FUN_0096f1c8(&local_1a0,&local_170,uVar11);
      *(undefined8 *)(param_1 + 0x370) = uStack_190;
      *(undefined8 *)(param_1 + 0x368) = local_198;
    }
  }
  lVar7 = FUN_008fd190(param_3,"ctaGroups");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b97154;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x9;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if (*(int *)(lVar7 + 0x10) == 4) {
      local_170 = (undefined **)0x1b97154;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x9;
      plVar9 = (long *)FUN_008feca4(param_3,&local_170);
      if ((int)plVar9[1] != 0) {
        lVar7 = 0;
        uVar17 = 0;
        do {
          local_170 = &PTR_FUN_027bc8d8;
          uStack_148 = 0;
          local_160 = (void *)0x0;
          ppuStack_168 = (undefined **)0x0;
          local_150 = (void *)0x0;
          local_158 = (void *)0x0;
          uStack_144 = CONCAT31(uStack_144._1_3_,1);
          FUN_0096d45c(&local_1a0,&local_170,*plVar9 + lVar7);
          local_170 = &PTR_FUN_027bc8d8;
          FUN_00977cbc(&ppuStack_168,1);
          FUN_00973d54(param_1 + 8,&local_1a0);
          local_1a0 = &PTR_FUN_027bc8d8;
          FUN_00977cbc(&local_198,1);
          uVar17 = uVar17 + 1;
          lVar7 = lVar7 + 0x18;
        } while (uVar17 < *(uint *)(plVar9 + 1));
      }
    }
  }
  lVar7 = FUN_008fd190(param_3,"entitlementFilterProducts");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b9715e;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x19;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if (*(int *)(lVar7 + 0x10) == 4) {
      local_170 = (undefined **)0x1b9715e;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0x19;
      plVar9 = (long *)FUN_008feca4(param_3,&local_170);
      if ((int)plVar9[1] != 0) {
        lVar7 = 0;
        uVar17 = 0;
        do {
          FUN_0096d2f8(&local_170,*plVar9 + lVar7);
          FUN_0096d24c(param_1 + 0x4e8,&local_170);
          local_170 = &PTR_FUN_027bc888;
          if (((ulong)local_150 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_13c,local_140));
          }
          if (((ulong)ppuStack_168 & 1) != 0) {
            operator_delete(local_158);
          }
          uVar17 = uVar17 + 1;
          lVar7 = lVar7 + 0x18;
        } while (uVar17 < *(uint *)(plVar9 + 1));
      }
    }
  }
  lVar7 = FUN_008fd190(param_3,"targetCountries");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b97178;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0xf;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if (*(int *)(lVar7 + 0x10) == 4) {
      local_170 = (undefined **)0x1b97178;
      local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
      ppuStack_168 = (undefined **)0xf;
      plVar9 = (long *)FUN_008feca4(param_3,&local_170);
      uVar17 = (ulong)*(uint *)(plVar9 + 1);
      if (*(uint *)(plVar9 + 1) != 0) {
        lVar7 = 0;
        uVar16 = 0;
        do {
          lVar13 = *plVar9;
          uVar2 = *(uint *)(lVar13 + lVar7 + 0x10);
          if ((uVar2 >> 0x14 & 1) != 0) {
            if ((uVar2 >> 0x16 & 1) == 0) {
              lVar13 = *(long *)(lVar13 + lVar7);
            }
            else {
              lVar13 = lVar13 + lVar7;
            }
            FUN_008fa54c(&local_170,lVar13);
            FUN_0096204c(param_1 + 0x4d8,&local_170);
            if (((ulong)local_170 & 1) != 0) {
              operator_delete(local_160);
            }
            uVar17 = (ulong)*(uint *)(plVar9 + 1);
          }
          uVar16 = uVar16 + 1;
          lVar7 = lVar7 + 0x18;
        } while (uVar16 < uVar17);
      }
    }
  }
  lVar7 = FUN_008fd190(param_3,"entitlementFilterMode");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar7) {
    local_170 = (undefined **)0x1b97188;
    local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
    ppuStack_168 = (undefined **)0x15;
    lVar7 = FUN_008feca4(param_3,&local_170);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
      lVar7 = FUN_008fd190(param_3,"entitlementFilterMode");
      if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar7) {
LAB_00973530:
        puVar10 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_170 = (undefined **)0x1b97188;
        local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
        ppuStack_168 = (undefined **)0x15;
        lVar7 = FUN_008feca4(param_3,&local_170);
        if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) goto LAB_00973530;
        local_170 = (undefined **)0x1b97188;
        local_160 = (void *)CONCAT44(local_160._4_4_,0x100005);
        ppuStack_168 = (undefined **)0x15;
        puVar10 = (undefined8 *)FUN_008feca4(param_3,&local_170);
        if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
          puVar10 = (undefined8 *)*puVar10;
        }
      }
      FUN_008fa54c(&local_170,puVar10);
      ppuVar14 = (undefined **)(ulong)((byte)local_170 >> 1);
      ppuVar1 = ppuVar14;
      if (((ulong)local_170 & 1) != 0) {
        ppuVar1 = ppuStack_168;
      }
      if (ppuVar1 == (undefined **)0x9) {
        iVar6 = FUN_0090d610(&local_170,0,0xffffffffffffffff,"showIfAll",9);
        if (iVar6 != 0) {
          ppuVar14 = (undefined **)(ulong)((byte)local_170 >> 1);
          goto LAB_00973594;
        }
        uVar15 = 1;
LAB_00973730:
        *(undefined4 *)(param_1 + 0x4f8) = uVar15;
      }
      else {
LAB_00973594:
        ppuVar1 = ppuVar14;
        if (((byte)local_170 & 1) != 0) {
          ppuVar1 = ppuStack_168;
        }
        bVar3 = (byte)local_170;
        if (ppuVar1 == (undefined **)0x9) {
          iVar6 = FUN_0090d610(&local_170,0,0xffffffffffffffff,"showIfAny",9);
          if (iVar6 == 0) {
            uVar15 = 2;
            goto LAB_00973730;
          }
          ppuVar14 = (undefined **)(ulong)((byte)local_170 >> 1);
          bVar3 = (byte)local_170;
        }
        ppuVar1 = ppuVar14;
        if ((bVar3 & 1) != 0) {
          ppuVar1 = ppuStack_168;
        }
        if (ppuVar1 == (undefined **)&DAT_00000010) {
          iVar6 = FUN_0090d610(&local_170,0,0xffffffffffffffff,"showIfSomeNotAll",0x10);
          if (iVar6 == 0) {
            uVar15 = 3;
            goto LAB_00973730;
          }
          ppuVar14 = (undefined **)(ulong)((byte)local_170 >> 1);
          bVar3 = (byte)local_170;
        }
        ppuVar1 = ppuVar14;
        if ((bVar3 & 1) != 0) {
          ppuVar1 = ppuStack_168;
        }
        if (ppuVar1 == (undefined **)0x9) {
          iVar6 = FUN_0090d610(&local_170,0,0xffffffffffffffff,"hideIfAll",9);
          if (iVar6 == 0) {
            uVar15 = 4;
            goto LAB_00973730;
          }
          ppuVar14 = (undefined **)(ulong)((byte)local_170 >> 1);
          bVar3 = (byte)local_170;
        }
        ppuVar1 = ppuVar14;
        if ((bVar3 & 1) != 0) {
          ppuVar1 = ppuStack_168;
        }
        if (ppuVar1 == (undefined **)0x9) {
          iVar6 = FUN_0090d610(&local_170,0,0xffffffffffffffff,"hideIfAny",9);
          if (iVar6 == 0) {
            uVar15 = 5;
            goto LAB_00973730;
          }
          ppuVar14 = (undefined **)(ulong)((byte)local_170 >> 1);
          bVar3 = (byte)local_170;
        }
        if ((bVar3 & 1) != 0) {
          ppuVar14 = ppuStack_168;
        }
        if (ppuVar14 == (undefined **)&DAT_00000010) {
          iVar6 = FUN_0090d610(&local_170,0,0xffffffffffffffff,"hideIfSomeNotAll",0x10);
          if (iVar6 == 0) {
            *(undefined4 *)(param_1 + 0x4f8) = 6;
            goto LAB_00973734;
          }
        }
        *(undefined4 *)(param_1 + 0x4f8) = 0;
      }
LAB_00973734:
      if (((ulong)local_170 & 1) != 0) {
        operator_delete(local_160);
      }
      goto LAB_009734a8;
    }
  }
  *(undefined4 *)(param_1 + 0x4f8) = 0;
LAB_009734a8:
  if (*(long *)(lVar4 + 0x28) != lVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

