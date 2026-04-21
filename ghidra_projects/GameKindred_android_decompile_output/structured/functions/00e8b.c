// functions/00e8b — 8 functions
#include "libGameKindred.h"




ulong FUN_00e8b060(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_70 [16];
  void *local_60;
  byte local_58 [16];
  void *local_48;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e8b14c:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return uVar4;
      }
      goto LAB_00e8b17c;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8b14c;
  local_3c = FUN_00e84f88(param_1 + 0x2c48);
  FUN_008fa54c(local_58,"queryPartyInfo");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e8762c(local_70,lVar1);
  uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_58,local_70,0,&local_3c,0x5a,0)
  ;
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4 & 0xffffffff;
  }
LAB_00e8b17c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e8b180(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_70 [16];
  void *local_60;
  byte local_58 [16];
  void *local_48;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e8b26c:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return uVar4;
      }
      goto LAB_00e8b29c;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8b26c;
  local_3c = FUN_00e84f88(param_1 + 0x2c48);
  FUN_008fa54c(local_58,"queryPartyInvites");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e8762c(local_70,lVar1);
  uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_58,local_70,0,&local_3c,0x5a,0)
  ;
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4 & 0xffffffff;
  }
LAB_00e8b29c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e8b2a0(long param_1,long param_2,int param_3)

{
  long lVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  char *__s2;
  char *pcVar6;
  long lVar7;
  void *__s1;
  undefined8 uVar8;
  long lVar9;
  byte local_100 [16];
  void *local_f0;
  byte local_e8 [16];
  void *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  char *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 4;
  if (0 < param_3) {
    lVar9 = 0;
    do {
      lVar1 = param_2 + lVar9 * 0x40;
      bVar3 = *(byte *)(lVar1 + 0x18);
      __n = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        __n = *(size_t *)(lVar1 + 0x20);
      }
      sVar2 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar2 = DAT_0320ffb0;
      }
      if (__n == sVar2) {
        __s1 = *(void **)(lVar1 + 0x28);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(lVar1 + 0x19);
        }
        __s2 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          __s2 = &DAT_0320ffa9;
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) break;
          pcVar6 = (char *)(lVar1 + 0x19);
          lVar7 = -(ulong)(bVar3 >> 1);
          while (*pcVar6 == *__s2) {
            pcVar6 = pcVar6 + 1;
            lVar7 = lVar7 + 1;
            __s2 = __s2 + 1;
            if (lVar7 == 0) goto LAB_00e8b548;
          }
        }
        else if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) break;
      }
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 3;
      FUN_008fcdb8(local_e8,(byte *)(lVar1 + 0x18));
      local_78 = 0x100005;
      local_88 = "site";
      local_80 = 4;
      FUN_00ceef7c(&local_d0,&local_88,local_e8,uVar8);
      if ((local_e8[0] & 1) != 0) {
        operator_delete(local_d8);
      }
      lVar1 = param_2 + lVar9 * 0x40;
      FUN_008fcdb8(local_100,lVar1);
      local_78 = 0x100005;
      local_88 = "host";
      local_80 = 4;
      FUN_00ceef7c(&local_d0,&local_88,local_100,uVar8);
      if ((local_100[0] & 1) != 0) {
        operator_delete(local_f0);
      }
      local_88 = (char *)(double)*(float *)(lVar1 + 0x30);
      local_90 = 0x100005;
      local_a0 = "avg";
      local_98 = 3;
      local_80 = 0;
      local_78 = 0x4206;
      FUN_00cb9d40(&local_d0,&local_a0,&local_88,uVar8);
      local_a0 = "stdDev";
      local_88 = (char *)(double)*(float *)(lVar1 + 0x34);
      local_90 = 0x100005;
      local_98 = 6;
      local_80 = 0;
      local_78 = 0x4206;
      FUN_00cb9d40(&local_d0,&local_a0,&local_88,uVar8);
      local_88 = (char *)(double)*(float *)(lVar1 + 0x38);
      local_90 = 0x100005;
      local_a0 = "max";
      local_98 = 3;
      local_80 = 0;
      local_78 = 0x4206;
      FUN_00cb9d40(&local_d0,&local_a0,&local_88,uVar8);
      local_a0 = "current";
      local_88 = (char *)(double)*(float *)(lVar1 + 0x3c);
      local_90 = 0x100005;
      local_98 = 7;
      local_80 = 0;
      local_78 = 0x4206;
      FUN_00cb9d40(&local_d0,&local_a0,&local_88,uVar8);
      FUN_00ceeba8(&local_b8,&local_d0,uVar8);
      lVar9 = lVar9 + 1;
    } while (lVar9 < param_3);
  }
LAB_00e8b548:
  local_78 = 0x100005;
  local_88 = "sites";
  local_80 = 5;
  FUN_00cb9d40(param_1,&local_88,&local_b8,uVar8);
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e8b5ac(long param_1,uint *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  byte local_100 [16];
  void *local_f0;
  byte local_e8 [16];
  void *local_d8;
  ulong local_d0 [2];
  void *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 4;
  local_d0[1] = 0;
  local_c0 = (void *)0x0;
  local_d0[0] = 0;
  if (*param_2 != 0) {
    lVar4 = 0;
    uVar3 = 0;
    do {
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 3;
      FUN_00e70a24(*(long *)(param_2 + 2) + lVar4 + 0x18,local_d0);
      FUN_008fcdb8(local_e8,*(long *)(param_2 + 2) + lVar4);
      local_88 = "playerId";
      local_78 = 0x100005;
      local_80 = 8;
      FUN_00ceef7c(&local_b8,&local_88,local_e8,uVar2);
      if ((local_e8[0] & 1) != 0) {
        operator_delete(local_d8);
      }
      FUN_008fcdb8(local_100,local_d0);
      local_78 = 0x100005;
      local_88 = "handle";
      local_80 = 6;
      FUN_00ceef7c(&local_b8,&local_88,local_100,uVar2);
      if ((local_100[0] & 1) != 0) {
        operator_delete(local_f0);
      }
      FUN_00e8b800(&local_b8,"userTeam",8,*(undefined4 *)(*(long *)(param_2 + 2) + lVar4 + 0x30),
                   uVar2);
      FUN_00e8b800(&local_b8,"slot",4,*(undefined4 *)(*(long *)(param_2 + 2) + lVar4 + 0x34),uVar2);
      FUN_00e8b800(&local_b8,"isCaptain",9,*(undefined1 *)(*(long *)(param_2 + 2) + lVar4 + 0x29),
                   uVar2);
      FUN_00e8b880(&local_b8,"status",6,*(undefined4 *)(*(long *)(param_2 + 2) + lVar4 + 0x2c),uVar2
                  );
      FUN_00ceeba8(&local_a0,&local_b8,uVar2);
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x88;
    } while (uVar3 < *param_2);
  }
  local_78 = 0x100005;
  local_88 = "partyMembers";
  local_80 = 0xc;
  FUN_00cb9d40(param_1,&local_88,&local_a0,uVar2);
  if ((local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e8b800(undefined8 param_1,undefined8 param_2,uint param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 local_58;
  ulong local_50;
  undefined4 local_48;
  long local_40 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = (long)param_4;
  local_48 = 0x100005;
  local_50 = (ulong)param_3;
  local_40[1] = 0;
  local_30 = 0x1606;
  if (-1 < param_4) {
    local_30 = 0x3e06;
  }
  local_58 = param_2;
  FUN_00cb9d40(param_1,&local_58,local_40,param_5);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e8b880(undefined8 param_1,undefined8 param_2,uint param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 local_58;
  ulong local_50;
  undefined4 local_48;
  long local_40 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = (long)param_4;
  local_48 = 0x100005;
  local_50 = (ulong)param_3;
  local_40[1] = 0;
  local_30 = 0x1606;
  if (-1 < param_4) {
    local_30 = 0x3e06;
  }
  local_58 = param_2;
  FUN_00cb9d40(param_1,&local_58,local_40,param_5);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e8b900(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char *__s2;
  char *pcVar8;
  long lVar9;
  long lVar10;
  void *__s1;
  char local_1b0 [8];
  void *pvStack_1a8;
  void *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  byte local_180 [16];
  void *local_170;
  byte local_168 [16];
  void *local_158;
  byte local_150 [16];
  void *local_140;
  byte local_138 [16];
  void *local_128;
  byte local_120 [16];
  void *local_110;
  byte local_108 [16];
  void *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  void *local_78;
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  local_a8 = 0;
  uStack_a0 = 0x400;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  local_98 = 0;
  local_90 = 0;
  puVar6 = operator_new(0x28);
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[1] = 0x10000;
  puVar6[2] = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  *puVar6 = 0;
  local_e0 = 3;
  uVar1 = (ulong)(*(byte *)(param_3 + 0x30) >> 1);
  if ((*(byte *)(param_3 + 0x30) & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 0x38);
  }
  local_d8 = puVar6;
  local_d0 = puVar6;
  if (uVar1 != 0) {
    FUN_008fcdb8(local_108);
    local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
    local_88 = "lobby";
    local_80 = 5;
    FUN_00ceef7c(&local_f0,&local_88,local_108,puVar6);
    if ((local_108[0] & 1) != 0) {
      operator_delete(local_f8);
    }
    FUN_00e8b800(&local_f0,&DAT_01bef494,3,*(undefined4 *)(param_3 + 0x498),puVar6);
    FUN_008fcdb8(local_120,param_3 + 0x4a0);
    local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
    local_88 = "playerHandle";
    local_80 = 0xc;
    FUN_00ceef7c(&local_f0,&local_88,local_120,puVar6);
    if ((local_120[0] & 1) != 0) {
      operator_delete(local_110);
    }
    FUN_008fcdb8(local_138,param_3 + 0x4b8);
    local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
    local_88 = "equippedHat";
    local_80 = 0xb;
    FUN_00ceef7c(&local_f0,&local_88,local_138,puVar6);
    if ((local_138[0] & 1) != 0) {
      operator_delete(local_128);
    }
    FUN_008fcdb8(local_150,param_3 + 0x4d0);
    local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
    local_88 = "equippedEmoji";
    local_80 = 0xd;
    FUN_00ceef7c(&local_f0,&local_88,local_150,puVar6);
    if ((local_150[0] & 1) != 0) {
      operator_delete(local_140);
    }
    FUN_008fcdb8(local_168,param_3 + 0x4e8);
    local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
    local_88 = "equippedPingPack";
    local_80 = 0x10;
    FUN_00ceef7c(&local_f0,&local_88,local_168,puVar6);
    if ((local_168[0] & 1) != 0) {
      operator_delete(local_158);
    }
  }
  uVar1 = (ulong)(*(byte *)(param_3 + 0x48) >> 1);
  if ((*(byte *)(param_3 + 0x48) & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 0x50);
  }
  if (uVar1 != 0) {
    FUN_008fcdb8(local_180);
    local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
    local_88 = "difficulty";
    local_80 = 10;
    FUN_00ceef7c(&local_f0,&local_88,local_180,puVar6);
    if ((local_180[0] & 1) != 0) {
      operator_delete(local_170);
    }
  }
  bVar3 = *(byte *)(param_3 + 0x78);
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_3 + 0x80);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    __s1 = *(void **)(param_3 + 0x88);
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)(param_3 + 0x79);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar8 = (char *)(param_3 + 0x79);
        lVar10 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar8 != *__s2) goto LAB_00e8bc10;
          pcVar8 = pcVar8 + 1;
          lVar10 = lVar10 + 1;
          __s2 = __s2 + 1;
        } while (lVar10 != 0);
      }
      goto LAB_00e8bc20;
    }
    if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) goto LAB_00e8bc20;
  }
LAB_00e8bc10:
  FUN_00e8b2a0(&local_f0,param_3 + 0x60,0x10);
LAB_00e8bc20:
  local_190 = 0;
  uStack_188 = 0x100;
  local_88 = local_1b0;
  local_80 = 0;
  pvStack_1a8 = (void *)0x0;
  local_1b0[0] = '\0';
  local_1b0[1] = '\0';
  local_1b0[2] = '\0';
  local_1b0[3] = '\0';
  local_1b0[4] = '\0';
  local_1b0[5] = '\0';
  local_1b0[6] = '\0';
  local_1b0[7] = '\0';
  uStack_198 = 0;
  local_1a0 = (void *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (void *)0x0;
  local_70 = (void *)0x0;
  local_58 = 0x200;
  local_50 = 0;
  FUN_00914ff4(&local_f0,&local_88);
  uVar7 = FUN_009155f8(local_1b0);
  FUN_008fa54c(param_1,uVar7);
  free(local_70);
  if (local_78 != (void *)0x0) {
    operator_delete(local_78);
  }
  free(local_1a0);
  if (pvStack_1a8 != (void *)0x0) {
    operator_delete(pvStack_1a8);
  }
  puVar6 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_d0);
    operator_delete(puVar6);
  }
  free(local_b8);
  if (pvStack_c0 != (void *)0x0) {
    operator_delete(pvStack_c0);
  }
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e8bcec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char *__s2;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  void *__s1;
  long lVar12;
  byte local_238 [16];
  void *local_228;
  byte local_220 [16];
  void *local_210;
  byte local_208 [16];
  void *local_1f8;
  byte local_1f0 [16];
  void *local_1e0;
  byte local_1d8 [16];
  void *local_1c8;
  byte local_1c0 [16];
  void *local_1b0;
  ulong local_1a8 [2];
  void *local_198;
  byte local_190 [16];
  void *local_180;
  byte local_178 [16];
  void *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 local_138;
  void *pvStack_130;
  void *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  void *local_e8;
  void *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  char local_b8 [8];
  void *pvStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  local_118 = 0;
  uStack_110 = 0x400;
  uStack_120 = 0;
  local_128 = (void *)0x0;
  pvStack_130 = (void *)0x0;
  local_138 = 0;
  local_108 = 0;
  local_100 = 0;
  puVar6 = operator_new(0x28);
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[1] = 0x10000;
  puVar6[2] = 0;
  local_160 = 0;
  uStack_158 = 0;
  *puVar6 = 0;
  local_150 = 3;
  if ((*(byte *)(param_3 + 0x58) & 1) == 0) {
    uVar10 = (ulong)(*(byte *)(param_3 + 0x58) >> 1);
  }
  else {
    uVar10 = *(ulong *)(param_3 + 0x60);
  }
  local_148 = puVar6;
  local_140 = puVar6;
  if (uVar10 != 0) {
    FUN_008fcdb8(local_178);
    local_e8 = (void *)CONCAT44(local_e8._4_4_,0x100005);
    local_f8 = "lobby";
    local_f0 = 5;
    FUN_00ceef7c(&local_160,&local_f8,local_178,puVar6);
    if ((local_178[0] & 1) != 0) {
      operator_delete(local_168);
    }
    FUN_008fcdb8(local_190,param_3 + 0x38);
    local_e8 = (void *)CONCAT44(local_e8._4_4_,0x100005);
    local_f8 = "quintCode";
    local_f0 = 9;
    FUN_00ceef7c(&local_160,&local_f8,local_190,puVar6);
    if ((local_190[0] & 1) != 0) {
      operator_delete(local_180);
    }
    local_b8[0] = '\0';
    local_b8[1] = '\0';
    local_b8[2] = '\0';
    local_b8[3] = '\0';
    local_b8[4] = '\0';
    local_b8[5] = '\0';
    local_b8[6] = '\0';
    local_b8[7] = '\0';
    pvStack_b0 = (void *)0x0;
    local_1a8[1] = 0;
    local_198 = (void *)0x0;
    local_a8 = (void *)CONCAT44(local_a8._4_4_,4);
    local_1a8[0] = 0;
    uVar8 = *(uint *)(param_3 + 0x28);
    if (uVar8 != 0) {
      lVar12 = 0;
      uVar10 = 0;
      do {
        lVar1 = *(long *)(param_3 + 0x30) + lVar12;
        if (*(int *)(lVar1 + 0x2c) == 1) {
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 3;
          FUN_00e70a24(lVar1 + 0x18,local_1a8);
          FUN_008fcdb8(local_1c0,*(long *)(param_3 + 0x30) + lVar12);
          local_f8 = "playerId";
          local_e8 = (void *)CONCAT44(local_e8._4_4_,0x100005);
          local_f0 = 8;
          FUN_00ceef7c(&local_88,&local_f8,local_1c0,puVar6);
          if ((local_1c0[0] & 1) != 0) {
            operator_delete(local_1b0);
          }
          FUN_008fcdb8(local_1d8,local_1a8);
          local_f8 = "handle";
          local_e8 = (void *)CONCAT44(local_e8._4_4_,0x100005);
          local_f0 = 6;
          FUN_00ceef7c(&local_88,&local_f8,local_1d8,puVar6);
          if ((local_1d8[0] & 1) != 0) {
            operator_delete(local_1c8);
          }
          FUN_00e8b800(&local_88,&DAT_01bef494,3,
                       *(undefined4 *)(*(long *)(param_3 + 0x30) + lVar12 + 0x3c),puVar6);
          FUN_008fcdb8(local_1f0,*(long *)(param_3 + 0x30) + lVar12 + 0x70);
          local_e8 = (void *)CONCAT44(local_e8._4_4_,0x100005);
          local_f8 = "equippedEmoji";
          local_f0 = 0xd;
          FUN_00ceef7c(&local_88,&local_f8,local_1f0,puVar6);
          if ((local_1f0[0] & 1) != 0) {
            operator_delete(local_1e0);
          }
          FUN_008fcdb8(local_208,*(long *)(param_3 + 0x30) + lVar12 + 0x58);
          local_f8 = "equippedHat";
          local_e8 = (void *)CONCAT44(local_e8._4_4_,0x100005);
          local_f0 = 0xb;
          FUN_00ceef7c(&local_88,&local_f8,local_208,puVar6);
          if ((local_208[0] & 1) != 0) {
            operator_delete(local_1f8);
          }
          FUN_008fcdb8(local_220,*(long *)(param_3 + 0x30) + lVar12 + 0x40);
          local_f8 = "equippedPingPack";
          local_e8 = (void *)CONCAT44(local_e8._4_4_,0x100005);
          local_f0 = 0x10;
          FUN_00ceef7c(&local_88,&local_f8,local_220,puVar6);
          if ((local_220[0] & 1) != 0) {
            operator_delete(local_210);
          }
          FUN_00ceeba8(local_b8,&local_88,puVar6);
          uVar8 = *(uint *)(param_3 + 0x28);
        }
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 0x88;
      } while (uVar10 < uVar8);
    }
    local_e8 = (void *)CONCAT44(local_e8._4_4_,0x100005);
    local_f8 = "partyMembers";
    local_f0 = 0xc;
    FUN_00cb9d40(&local_160,&local_f8,local_b8,puVar6);
    if ((local_1a8[0] & 1) != 0) {
      operator_delete(local_198);
    }
  }
  if ((*(byte *)(param_3 + 0x70) & 1) == 0) {
    if (*(byte *)(param_3 + 0x70) >> 1 != 0) {
LAB_00e8c09c:
      FUN_008fcdb8(local_238);
      local_e8 = (void *)CONCAT44(local_e8._4_4_,0x100005);
      local_f8 = "difficulty";
      local_f0 = 10;
      FUN_00ceef7c(&local_160,&local_f8,local_238,puVar6);
      if ((local_238[0] & 1) != 0) {
        operator_delete(local_228);
      }
    }
  }
  else if (*(long *)(param_3 + 0x78) != 0) goto LAB_00e8c09c;
  bVar3 = *(byte *)(param_3 + 0xa0);
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_3 + 0xa8);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    __s1 = *(void **)(param_3 + 0xb0);
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)(param_3 + 0xa1);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar11 = (char *)(param_3 + 0xa1);
        lVar12 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar11 != *__s2) goto LAB_00e8c174;
          pcVar11 = pcVar11 + 1;
          lVar12 = lVar12 + 1;
          __s2 = __s2 + 1;
        } while (lVar12 != 0);
      }
      goto LAB_00e8c184;
    }
    if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) goto LAB_00e8c184;
  }
LAB_00e8c174:
  FUN_00e8b2a0(&local_160,param_3 + 0x88,0x10);
LAB_00e8c184:
  local_98 = 0;
  uStack_90 = 0x100;
  local_f8 = local_b8;
  local_f0 = 0;
  uStack_a0 = 0;
  local_a8 = (void *)0x0;
  pvStack_b0 = (void *)0x0;
  local_b8[0] = '\0';
  local_b8[1] = '\0';
  local_b8[2] = '\0';
  local_b8[3] = '\0';
  local_b8[4] = '\0';
  local_b8[5] = '\0';
  local_b8[6] = '\0';
  local_b8[7] = '\0';
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (void *)0x0;
  local_e0 = (void *)0x0;
  local_c8 = 0x200;
  local_c0 = 0;
  FUN_00914ff4(&local_160,&local_f8);
  uVar7 = FUN_009155f8(local_b8);
  FUN_008fa54c(param_1,uVar7);
  free(local_e0);
  if (local_e8 != (void *)0x0) {
    operator_delete(local_e8);
  }
  free(local_a8);
  if (pvStack_b0 != (void *)0x0) {
    operator_delete(pvStack_b0);
  }
  puVar6 = local_140;
  if (local_140 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_140);
    operator_delete(puVar6);
  }
  free(local_128);
  if (pvStack_130 != (void *)0x0) {
    operator_delete(pvStack_130);
  }
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

