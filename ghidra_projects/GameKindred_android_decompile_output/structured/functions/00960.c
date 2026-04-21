// functions/00960 — 22 functions
#include "libGameKindred.h"




void FUN_0096005c(long param_1,byte *param_2,byte *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e80f6c();
  if ((uVar2 & 1) != 0) {
    FUN_00938a34();
    FUN_0096589c(param_1 + 0x18,1);
    uVar3 = FUN_009482e4();
    FUN_008fcdb8(local_50,uVar3);
    FUN_0094800c();
    FUN_009480a8();
    FUN_00948078();
    FUN_009482f4(local_50);
    FUN_009481cc(1);
    pbVar4 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar4 = param_2 + 1;
    }
    FUN_008fa54c(local_68,pbVar4);
    pbVar4 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar4 = param_3 + 1;
    }
    FUN_008fa54c(local_80,pbVar4);
    FUN_00948110(local_68,local_80);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    FUN_00900b68(0);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00960168(long param_1)

{
  FUN_008fce60(param_1 + 0x5478,&DAT_0320ffa8);
  *(undefined4 *)(param_1 + 0x5634) = 0xffffffff;
  FUN_00e84dec(param_1 + 0x5088);
  FUN_008fce60(param_1 + 0x5490,&DAT_0320ffa8);
  *(undefined4 *)(param_1 + 0x5638) = 0xffffffff;
  FUN_00e84dec(param_1 + 0x52c8);
  return;
}




void FUN_009601dc(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_00e84e4c(param_1 + 0x478);
    if ((uVar1 & 1) == 0) {
      FUN_00e81424(param_1 + 0x478);
      return;
    }
  }
  return;
}




void FUN_00960220(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_00e84e4c(param_1 + 0x4b8);
    if ((uVar1 & 1) == 0) {
      FUN_00e81494(param_2,param_3 & 1,param_1 + 0x4b8);
      return;
    }
  }
  return;
}




void FUN_00960280(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    FUN_00e8153c(param_2,param_1 + 0x5f8);
    return;
  }
  return;
}




void FUN_009602bc(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte abStack_498 [16];
  undefined8 uStack_488;
  byte abStack_480 [16];
  undefined8 auStack_470 [131];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar3 = 0;
  do {
    lVar1 = lVar3 + 0x40;
    *(undefined8 *)((long)auStack_470 + lVar3 + 0x30) = 0;
    *(undefined8 *)((long)auStack_470 + lVar3 + 0x28) = 0;
    *(undefined8 *)((long)auStack_470 + lVar3 + 0x40) = 0;
    *(undefined8 *)((long)auStack_470 + lVar3 + 0x38) = 0;
    *(undefined8 *)((long)auStack_470 + lVar3 + 0x20) = 0;
    *(undefined8 *)((long)auStack_470 + lVar3 + 0x18) = 0;
    lVar3 = lVar1;
  } while (lVar1 != 0x400);
  FUN_00943b58(auStack_470 + 3);
  if (param_2 != 0) {
    uVar5 = 0;
    param_1 = param_1 + 0x18;
    puVar4 = auStack_470 + 6;
    do {
      if (uVar5 < 0x10) {
        FUN_008fce60(param_1 + -0x18,puVar4 + -3);
        FUN_008fce60(param_1,puVar4);
        uVar6 = puVar4[3];
        *(undefined8 *)(param_1 + 0x20) = puVar4[4];
        *(undefined8 *)(param_1 + 0x18) = uVar6;
      }
      else {
        FUN_008fce60(param_1 + -0x18,&DAT_0320ffa8);
        FUN_008fce60(param_1,&DAT_0320ffa8);
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      uVar5 = uVar5 + 1;
      param_1 = param_1 + 0x40;
      puVar4 = puVar4 + 8;
    } while (param_2 != uVar5);
  }
  lVar3 = 0x400;
  do {
    if ((abStack_480[lVar3] & 1) != 0) {
      operator_delete(*(void **)((long)auStack_470 + lVar3));
    }
    if ((abStack_498[lVar3] & 1) != 0) {
      operator_delete(*(void **)((long)&uStack_488 + lVar3));
    }
    lVar3 = lVar3 + -0x40;
  } while (lVar3 != 0);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009603f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte local_180 [16];
  void *local_170;
  byte local_168 [16];
  void *local_158;
  ulong local_150;
  ulong local_148;
  void *local_140;
  ulong local_138 [2];
  void *local_128;
  ulong local_120 [2];
  void *local_110;
  ulong local_108 [2];
  void *local_f8;
  byte local_f0 [16];
  void *local_e0;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00e80f6c();
  if ((uVar4 & 1) != 0) {
    FUN_009602bc(param_1 + 0x6c8,0x10);
    local_108[0] = 0;
    local_108[1] = 0;
    local_f8 = (void *)0x0;
    local_120[0] = 0;
    local_120[1] = 0;
    local_110 = (void *)0x0;
    local_138[0] = 0;
    local_138[1] = 0;
    local_128 = (void *)0x0;
    local_150 = 0;
    local_148 = 0;
    local_140 = (void *)0x0;
    uVar4 = FUN_0093dbe8();
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      FUN_0090dab8(local_f0,&DAT_01b9662a,param_2);
      FUN_008fcdb8(local_168,local_f0);
      if ((local_f0[0] & 1) != 0) {
        operator_delete(local_e0);
      }
      pvVar1 = (void *)((ulong)local_168 | 1);
      if ((local_168[0] & 1) != 0) {
        pvVar1 = local_158;
      }
      uVar3 = FUN_00937424(pvVar1,0);
      uVar5 = FUN_0095fdf0(param_1);
      FUN_00e70a24(uVar5,local_108);
      FUN_009375d4("EquipedHat",local_f0,0x80,0);
      FUN_008fa54c(local_180,local_f0);
      FUN_008fce60(local_120,local_180);
      if ((local_180[0] & 1) != 0) {
        operator_delete(local_170);
      }
      FUN_009375d4("CharmEquipedEmoji",local_f0,0x80,0);
      FUN_008fa54c(local_180,local_f0);
      FUN_008fce60(local_138,local_180);
      if ((local_180[0] & 1) != 0) {
        operator_delete(local_170);
      }
      FUN_009375d4("SocialPingEquipedPack",local_f0,0x80,0);
      FUN_008fa54c(local_180,local_f0);
      FUN_008fce60(&local_150,local_180);
      if ((local_180[0] & 1) != 0) {
        operator_delete(local_170);
      }
      uVar4 = local_150 >> 1 & 0x7f;
      if ((local_150 & 1) != 0) {
        uVar4 = local_148;
      }
      if (uVar4 == 0) {
        FUN_008fa54c(local_180,"SOCIAL_PINGS_DEFAULT_PACK");
        FUN_008fce60(&local_150,local_180);
        if ((local_180[0] & 1) != 0) {
          operator_delete(local_170);
        }
      }
      if ((local_168[0] & 1) != 0) {
        operator_delete(local_158);
      }
    }
    FUN_008fce60(param_1 + 0x698,param_2);
    FUN_008fce60(param_1 + 0x6b0,param_3);
    *(undefined4 *)(param_1 + 0xb00) = uVar3;
    FUN_008fce60(param_1 + 0xb08,local_108);
    FUN_008fce60(param_1 + 0xb20,local_120);
    FUN_008fce60(param_1 + 0xb38,local_138);
    FUN_008fce60(param_1 + 0xb50,&local_150);
    FUN_008fce60(param_1 + 0x54a8,param_2);
    FUN_00e82600(param_1 + 0x668);
    if ((local_150 & 1) != 0) {
      operator_delete(local_140);
    }
    if ((local_138[0] & 1) != 0) {
      operator_delete(local_128);
    }
    if ((local_120[0] & 1) != 0) {
      operator_delete(local_110);
    }
    if ((local_108[0] & 1) != 0) {
      operator_delete(local_f8);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009606dc(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_00e84e4c(param_1 + 0xb68);
    if ((uVar1 & 1) == 0) {
      FUN_00e82634(param_1 + 0xb68);
    }
    FUN_00900434(*(undefined4 *)(param_1 + 0x567c),param_1 + 0x54a8,param_2 & 1);
    return;
  }
  return;
}




void FUN_00960748(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    FUN_008fce60(param_1 + 0x1068,param_2);
    FUN_008fce60(param_1 + 0x14b8,param_3);
    FUN_00e817ac(param_1 + 0x1040);
    return;
  }
  return;
}




void FUN_009607b8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte local_150 [16];
  void *local_140;
  ulong local_138;
  ulong local_130;
  void *local_128;
  ulong local_120 [2];
  void *local_110;
  ulong local_108 [2];
  void *local_f8;
  ulong local_f0 [2];
  void *local_e0;
  undefined1 auStack_d8 [128];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e80f6c();
  if ((uVar2 & 1) != 0) {
    local_f0[0] = 0;
    local_f0[1] = 0;
    local_e0 = (void *)0x0;
    local_108[0] = 0;
    local_108[1] = 0;
    local_f8 = (void *)0x0;
    local_120[0] = 0;
    local_120[1] = 0;
    local_110 = (void *)0x0;
    local_138 = 0;
    local_130 = 0;
    local_128 = (void *)0x0;
    uVar2 = FUN_0093dbe8();
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_0095fdf0(param_1);
      FUN_00e70a24(uVar3,local_f0);
      FUN_009375d4("EquipedHat",auStack_d8,0x80,0);
      FUN_008fa54c(local_150,auStack_d8);
      FUN_008fce60(local_108,local_150);
      if ((local_150[0] & 1) != 0) {
        operator_delete(local_140);
      }
      FUN_009375d4("CharmEquipedEmoji",auStack_d8,0x80,0);
      FUN_008fa54c(local_150,auStack_d8);
      FUN_008fce60(local_120,local_150);
      if ((local_150[0] & 1) != 0) {
        operator_delete(local_140);
      }
      FUN_009375d4("SocialPingEquipedPack",auStack_d8,0x80,0);
      FUN_008fa54c(local_150,auStack_d8);
      FUN_008fce60(&local_138,local_150);
      if ((local_150[0] & 1) != 0) {
        operator_delete(local_140);
      }
      uVar2 = local_138 >> 1 & 0x7f;
      if ((local_138 & 1) != 0) {
        uVar2 = local_130;
      }
      if (uVar2 == 0) {
        FUN_008fa54c(local_150,"SOCIAL_PINGS_DEFAULT_PACK");
        FUN_008fce60(&local_138,local_150);
        if ((local_150[0] & 1) != 0) {
          operator_delete(local_140);
        }
      }
    }
    FUN_008fce60(param_1 + 0x14f8,param_2);
    FUN_008fce60(param_1 + 0x1510,local_f0);
    FUN_008fce60(param_1 + 0x1540,local_108);
    FUN_008fce60(param_1 + 0x1558,local_120);
    FUN_008fce60(param_1 + 0x1570,&local_138);
    FUN_00e817e0(param_1 + 0x14d0);
    if ((local_138 & 1) != 0) {
      operator_delete(local_128);
    }
    if ((local_120[0] & 1) != 0) {
      operator_delete(local_110);
    }
    if ((local_108[0] & 1) != 0) {
      operator_delete(local_f8);
    }
    if ((local_f0[0] & 1) != 0) {
      operator_delete(local_e0);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00960a18(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    FUN_009653b0(param_1 + 0x19d0,param_2);
    FUN_00e81814(param_1 + 0x19a8);
    return;
  }
  return;
}




void FUN_00960a74(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    FUN_008fce60(param_1 + 0x1e28,param_2);
    FUN_00e818e8(param_1 + 0x1e00);
    FUN_0096589c(param_1 + 0x278,1);
    return;
  }
  return;
}




void FUN_00960adc(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    FUN_00e81aec(param_1 + 0x628);
    return;
  }
  return;
}




void FUN_00960b10(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_00e80f6c();
  if ((uVar2 & 1) != 0) {
    FUN_009602bc(param_1 + 0xbc8,0x10);
    if (param_2 < *(uint *)(param_1 + 0x53c8)) {
      FUN_00e8191c(*(long *)(param_1 + 0x53d0) + (ulong)param_2 * 0x20,param_1 + 0xb98);
      *(undefined1 *)(*(long *)(param_1 + 0x53d0) + (ulong)param_2 * 0x20 + 0x18) = 1;
      iVar1 = *(int *)(param_1 + 0x5628);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x5628) = iVar1 + -1;
      }
    }
    FUN_0096589c(param_1 + 0x278,1);
    return;
  }
  return;
}




void FUN_00960ba4(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_00e80f6c();
  if (((uVar2 & 1) != 0) && (param_2 < *(uint *)(param_1 + 0x53c8))) {
    FUN_00e81954(*(long *)(param_1 + 0x53d0) + (ulong)param_2 * 0x20,param_1 + 0xfe0);
    *(undefined1 *)(*(long *)(param_1 + 0x53d0) + (ulong)param_2 * 0x20 + 0x18) = 1;
    iVar1 = *(int *)(param_1 + 0x5628);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x5628) = iVar1 + -1;
    }
  }
  return;
}




void FUN_00960c18(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  byte abStack_4a8 [16];
  undefined8 uStack_498;
  byte abStack_490 [16];
  undefined8 auStack_480 [3];
  undefined8 local_468 [3];
  undefined8 auStack_450 [125];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00e80f6c();
  if ((uVar4 & 1) != 0) {
    if (*(int *)(param_1 + 0x55dc) == 2) {
      FUN_009606dc(param_1,0);
    }
    lVar5 = 0;
    do {
      lVar1 = lVar5 + 0x40;
      *(undefined8 *)((long)auStack_450 + lVar5) = 0;
      *(undefined8 *)((long)local_468 + lVar5 + 0x10) = 0;
      *(undefined8 *)((long)auStack_450 + lVar5 + 0x10) = 0;
      *(undefined8 *)((long)auStack_450 + lVar5 + 8) = 0;
      *(undefined8 *)((long)local_468 + lVar5 + 8) = 0;
      *(undefined8 *)((long)local_468 + lVar5) = 0;
      lVar5 = lVar1;
    } while (lVar1 != 0x400);
    FUN_00943b58(local_468);
    lVar5 = 0;
    do {
      FUN_008fce60(param_1 + 0x27a8 + lVar5,(long)local_468 + lVar5);
      FUN_008fce60(param_1 + 0x27c0 + lVar5,(long)auStack_450 + lVar5);
      uVar6 = *(undefined8 *)((long)auStack_450 + lVar5 + 0x18);
      puVar2 = (undefined8 *)(param_1 + 0x27d8 + lVar5);
      puVar2[1] = *(undefined8 *)((long)auStack_450 + lVar5 + 0x20);
      *puVar2 = uVar6;
      lVar5 = lVar5 + 0x40;
    } while (lVar5 != 0x400);
    FUN_00e81880(param_1 + 0x2778);
    FUN_0096589c(param_1 + 0x278,1);
    lVar5 = 0x400;
    do {
      if ((abStack_490[lVar5] & 1) != 0) {
        operator_delete(*(void **)((long)auStack_480 + lVar5));
      }
      if ((abStack_4a8[lVar5] & 1) != 0) {
        operator_delete(*(void **)((long)&uStack_498 + lVar5));
      }
      lVar5 = lVar5 + -0x40;
    } while (lVar5 != 0);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00960d6c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    FUN_00e818b4(param_1 + 0x2bc0);
    FUN_0096589c(param_1 + 0x278,1);
    return;
  }
  return;
}




void FUN_00960db0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_00e84e4c(param_1 + 0x2c20);
    if ((uVar1 & 1) == 0) {
      FUN_00e8198c(param_2,param_1 + 0x2c20);
    }
    FUN_0096589c(param_1 + 0x278,1);
    return;
  }
  return;
}




void FUN_00960e18(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_0093dbe8();
    if ((uVar1 & 1) != 0) {
      FUN_008fce60(param_1 + 0x2ca8,param_3);
    }
    uVar1 = FUN_00e84e4c(param_1 + 0x2c80);
    if ((uVar1 & 1) == 0) {
      FUN_00e819c4(param_2,param_1 + 0x2c80);
    }
    FUN_0096589c(param_1 + 0x278,1);
    return;
  }
  return;
}




void FUN_00960e9c(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_00e84e4c(param_1 + 0x2ce0);
    if ((uVar1 & 1) == 0) {
      FUN_00e819fc(param_2,param_3,param_4,param_5,param_1 + 0x2ce0);
    }
    FUN_0096589c(param_1 + 0x278,1);
    return;
  }
  return;
}




void FUN_00960f28(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_00e84e4c(param_1 + 0x2d40);
    if ((uVar1 & 1) == 0) {
      FUN_00e81a40(param_2,param_3,param_1 + 0x2d40,param_4);
    }
    FUN_0096589c(param_1 + 0x278,1);
    return;
  }
  return;
}




void FUN_00960fac(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_00e84e4c(param_1 + 0x2da0);
    if ((uVar1 & 1) == 0) {
      FUN_00e81a80(param_2,param_1 + 0x2da0);
    }
    FUN_0096589c(param_1 + 0x278,1);
    return;
  }
  return;
}

