// functions/00e89 — 9 functions
#include "libGameKindred.h"




void FUN_00e890a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  size_t __n;
  size_t sVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char *__s2;
  char *pcVar8;
  long lVar9;
  void *__s1;
  char local_138 [8];
  void *pvStack_130;
  void *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
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
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
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
  bVar3 = *(byte *)(param_3 + 0x60);
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_3 + 0x68);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  local_d8 = puVar6;
  local_d0 = puVar6;
  if (__n == sVar1) {
    __s1 = *(void **)(param_3 + 0x70);
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)(param_3 + 0x61);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar8 = (char *)(param_3 + 0x61);
        lVar9 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar8 != *__s2) goto LAB_00e891a8;
          pcVar8 = pcVar8 + 1;
          lVar9 = lVar9 + 1;
          __s2 = __s2 + 1;
        } while (lVar9 != 0);
      }
      goto LAB_00e891b8;
    }
    if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) goto LAB_00e891b8;
  }
LAB_00e891a8:
  FUN_00e8b2a0(&local_f0,param_3 + 0x48,0x10);
LAB_00e891b8:
  bVar3 = *(byte *)(param_3 + 0x28);
  uVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(param_3 + 0x30);
  }
  if (uVar2 != 0) {
    FUN_008fcdb8(local_108,(byte *)(param_3 + 0x28));
    local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
    local_88 = "quintCode";
    local_80 = 9;
    FUN_00ceef7c(&local_f0,&local_88,local_108,puVar6);
    if ((local_108[0] & 1) != 0) {
      operator_delete(local_f8);
    }
  }
  local_118 = 0;
  uStack_110 = 0x100;
  local_88 = local_138;
  local_80 = 0;
  uStack_120 = 0;
  local_128 = (void *)0x0;
  pvStack_130 = (void *)0x0;
  local_138[0] = '\0';
  local_138[1] = '\0';
  local_138[2] = '\0';
  local_138[3] = '\0';
  local_138[4] = '\0';
  local_138[5] = '\0';
  local_138[6] = '\0';
  local_138[7] = '\0';
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (void *)0x0;
  local_70 = (void *)0x0;
  local_58 = 0x200;
  local_50 = 0;
  FUN_00914ff4(&local_f0,&local_88);
  uVar7 = FUN_009155f8(local_138);
  FUN_008fa54c(param_1,uVar7);
  free(local_70);
  if (local_78 != (void *)0x0) {
    operator_delete(local_78);
  }
  free(local_128);
  if (pvStack_130 != (void *)0x0) {
    operator_delete(pvStack_130);
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
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00e892f0(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e8940c:
      FUN_00e83324(0xfffffff9);
      uVar5 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar5;
      }
      goto LAB_00e89440;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8940c;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_2);
  uVar4 = FUN_008fa54c(local_68,"joinQuintParty");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e89444(local_98,uVar4,param_2);
  FUN_00e87404(local_80,lVar1,local_98);
  uVar5 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_68,local_80,0,&local_4c,0x5a,0)
  ;
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar5 & 0xffffffff;
  }
LAB_00e89440:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e89444(undefined8 param_1,undefined8 param_2,long param_3)

{
  size_t __n;
  size_t sVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char *__s2;
  long lVar8;
  char *pcVar9;
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
  lVar8 = *(long *)(lVar4 + 0x28);
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
  bVar3 = *(byte *)(param_3 + 0xd8);
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_3 + 0xe0);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  local_d8 = puVar6;
  local_d0 = puVar6;
  if (__n == sVar1) {
    __s1 = *(void **)(param_3 + 0xe8);
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)(param_3 + 0xd9);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar9 = (char *)(param_3 + 0xd9);
        lVar10 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar9 != *__s2) goto LAB_00e89550;
          pcVar9 = pcVar9 + 1;
          lVar10 = lVar10 + 1;
          __s2 = __s2 + 1;
        } while (lVar10 != 0);
      }
      goto LAB_00e89560;
    }
    if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) goto LAB_00e89560;
  }
LAB_00e89550:
  FUN_00e8b2a0(&local_f0,param_3 + 0xc0,0x10);
LAB_00e89560:
  uVar2 = (ulong)(*(byte *)(param_3 + 0x28) >> 1);
  if ((*(byte *)(param_3 + 0x28) & 1) != 0) {
    uVar2 = *(ulong *)(param_3 + 0x30);
  }
  if (uVar2 != 0) {
    FUN_008fcdb8(local_108);
    local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
    local_88 = "quintCode";
    local_80 = 9;
    FUN_00ceef7c(&local_f0,&local_88,local_108,puVar6);
    if ((local_108[0] & 1) != 0) {
      operator_delete(local_f8);
    }
    FUN_008fcdb8(local_120,param_3 + 0x40);
    local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
    local_88 = "playerHandle";
    local_80 = 0xc;
    FUN_00ceef7c(&local_f0,&local_88,local_120,puVar6);
    if ((local_120[0] & 1) != 0) {
      operator_delete(local_110);
    }
    FUN_008fcdb8(local_138,param_3 + 0x58);
    local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
    local_88 = "gameMode";
    local_80 = 8;
    FUN_00ceef7c(&local_f0,&local_88,local_138,puVar6);
    if ((local_138[0] & 1) != 0) {
      operator_delete(local_128);
    }
    FUN_008fcdb8(local_150,param_3 + 0x70);
    local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
    local_88 = "equippedHat";
    local_80 = 0xb;
    FUN_00ceef7c(&local_f0,&local_88,local_150,puVar6);
    if ((local_150[0] & 1) != 0) {
      operator_delete(local_140);
    }
    FUN_008fcdb8(local_168,param_3 + 0x88);
    local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
    local_88 = "equippedEmoji";
    local_80 = 0xd;
    FUN_00ceef7c(&local_f0,&local_88,local_168,puVar6);
    if ((local_168[0] & 1) != 0) {
      operator_delete(local_158);
    }
    FUN_008fcdb8(local_180,param_3 + 0xa0);
    local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
    local_88 = "equippedPingPack";
    local_80 = 0x10;
    FUN_00ceef7c(&local_f0,&local_88,local_180,puVar6);
    if ((local_180[0] & 1) != 0) {
      operator_delete(local_170);
    }
  }
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
  if (*(long *)(lVar4 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00e897fc(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e89918:
      FUN_00e83324(0xfffffff9);
      uVar5 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar5;
      }
      goto LAB_00e8994c;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e89918;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_2);
  uVar4 = FUN_008fa54c(local_68,"updateQuintPartyState");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e89950(local_98,uVar4,param_2);
  FUN_00e87404(local_80,lVar1,local_98);
  uVar5 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_68,local_80,0,&local_4c,0x5a,0)
  ;
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar5 & 0xffffffff;
  }
LAB_00e8994c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e89950(undefined8 param_1,undefined8 param_2,long param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  char *__s2;
  char *pcVar7;
  long lVar8;
  void *__s1;
  undefined8 local_110;
  void *pvStack_108;
  void *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined8 uStack_70;
  void *local_68;
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_98 = 0;
  uStack_90 = 0x400;
  uStack_a0 = 0;
  local_a8 = (void *)0x0;
  pvStack_b0 = (void *)0x0;
  local_b8 = 0;
  local_88 = 0;
  local_80 = 0;
  local_c8 = operator_new(0x28);
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[1] = 0x10000;
  local_c8[2] = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  *local_c8 = 0;
  local_d0 = 3;
  bVar2 = *(byte *)(param_3 + 0x50);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_3 + 0x58);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  local_c0 = local_c8;
  if (__n == sVar1) {
    __s1 = *(void **)(param_3 + 0x60);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_3 + 0x51);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar7 = (char *)(param_3 + 0x51);
        lVar8 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar7 != *__s2) goto LAB_00e89a50;
          pcVar7 = pcVar7 + 1;
          lVar8 = lVar8 + 1;
          __s2 = __s2 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_00e89a60;
    }
    if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) goto LAB_00e89a60;
  }
LAB_00e89a50:
  FUN_00e8b2a0(&local_e0,param_3 + 0x38,0x10);
LAB_00e89a60:
  if (*(int *)(param_3 + 0x28) != 0) {
    FUN_00e8b5ac(&local_e0,(int *)(param_3 + 0x28));
  }
  local_f0 = 0;
  uStack_e8 = 0x100;
  uStack_70 = 0;
  pvStack_108 = (void *)0x0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = (void *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (void *)0x0;
  local_60 = (void *)0x0;
  local_48 = 0x200;
  local_40 = 0;
  local_78 = (undefined1 *)&local_110;
  FUN_00914ff4(&local_e0,&local_78);
  uVar6 = FUN_009155f8(&local_110);
  FUN_008fa54c(param_1,uVar6);
  free(local_60);
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
  }
  free(local_100);
  if (pvStack_108 != (void *)0x0) {
    operator_delete(pvStack_108);
  }
  puVar4 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_c0);
    operator_delete(puVar4);
  }
  free(local_a8);
  if (pvStack_b0 != (void *)0x0) {
    operator_delete(pvStack_b0);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00e89b3c(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e89c58:
      FUN_00e83324(0xfffffff9);
      uVar5 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar5;
      }
      goto LAB_00e89c8c;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e89c58;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_2);
  uVar4 = FUN_008fa54c(local_68,"createParty");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e89c90(local_98,uVar4,param_2);
  FUN_00e87404(local_80,lVar1,local_98);
  uVar5 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_68,local_80,0,&local_4c,0x5a,0)
  ;
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar5 & 0xffffffff;
  }
LAB_00e89c8c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e89c90(undefined8 param_1,undefined8 param_2,long param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  char *__s2;
  char *pcVar7;
  long lVar8;
  void *__s1;
  undefined8 local_110;
  void *pvStack_108;
  void *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined8 uStack_70;
  void *local_68;
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_98 = 0;
  uStack_90 = 0x400;
  uStack_a0 = 0;
  local_a8 = (void *)0x0;
  pvStack_b0 = (void *)0x0;
  local_b8 = 0;
  local_88 = 0;
  local_80 = 0;
  local_c8 = operator_new(0x28);
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[1] = 0x10000;
  local_c8[2] = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  *local_c8 = 0;
  local_d0 = 3;
  bVar2 = *(byte *)(param_3 + 0x48);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_3 + 0x50);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  local_c0 = local_c8;
  if (__n == sVar1) {
    __s1 = *(void **)(param_3 + 0x58);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_3 + 0x49);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar7 = (char *)(param_3 + 0x49);
        lVar8 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar7 != *__s2) goto LAB_00e89d90;
          pcVar7 = pcVar7 + 1;
          lVar8 = lVar8 + 1;
          __s2 = __s2 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_00e89da0;
    }
    if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) goto LAB_00e89da0;
  }
LAB_00e89d90:
  FUN_00e8b2a0(&local_e0,param_3 + 0x30,0x10);
LAB_00e89da0:
  local_f0 = 0;
  uStack_e8 = 0x100;
  uStack_70 = 0;
  pvStack_108 = (void *)0x0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = (void *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (void *)0x0;
  local_60 = (void *)0x0;
  local_48 = 0x200;
  local_40 = 0;
  local_78 = (undefined1 *)&local_110;
  FUN_00914ff4(&local_e0,&local_78);
  uVar6 = FUN_009155f8(&local_110);
  FUN_008fa54c(param_1,uVar6);
  free(local_60);
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
  }
  free(local_100);
  if (pvStack_108 != (void *)0x0) {
    operator_delete(pvStack_108);
  }
  puVar4 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_c0);
    operator_delete(puVar4);
  }
  free(local_a8);
  if (pvStack_b0 != (void *)0x0) {
    operator_delete(pvStack_b0);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00e89e68(long param_1)

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
LAB_00e89f54:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return uVar4;
      }
      goto LAB_00e89f84;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e89f54;
  local_3c = FUN_00e84f88(param_1 + 0x2c48);
  FUN_008fa54c(local_58,"leaveParty");
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
LAB_00e89f84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e89f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e8a0ac:
      FUN_00e83324(0xfffffff9);
      uVar5 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar5;
      }
      goto LAB_00e8a0e0;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8a0ac;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  uVar4 = FUN_008fa54c(local_68,"destroyQuintParty");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e89950(local_98,uVar4,param_3);
  FUN_00e8a0e4(local_80,lVar1,param_2,local_98);
  uVar5 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_68,local_80,0,&local_4c,0x5a,0)
  ;
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar5 & 0xffffffff;
  }
LAB_00e8a0e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

