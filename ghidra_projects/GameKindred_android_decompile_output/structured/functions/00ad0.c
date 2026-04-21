// functions/00ad0 — 11 functions
#include "libGameKindred.h"




void thunk_FUN_00ad0a48(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  void *pvVar11;
  undefined **ppuStack_150;
  undefined1 auStack_148 [40];
  long lStack_120;
  undefined8 uStack_100;
  void *pvStack_f8;
  byte bStack_f0;
  void *pvStack_e0;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_a8;
  ulong uStack_a0;
  void *pvStack_98;
  byte bStack_90;
  undefined7 uStack_8f;
  void *pvStack_80;
  undefined4 uStack_78;
  undefined8 uStack_74;
  
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
  FUN_00b26098(&ppuStack_150);
  uVar5 = FUN_00e6ce7c("MENU_GUILD_SEARCH_TILE_GUILD_TYPE_INFO_TITLE",0);
  thunk_FUN_00e7051c(&uStack_a0,uVar5);
  FUN_008fcdb8(&bStack_90,&DAT_0320ffa8);
  uStack_78 = 0;
  uStack_74 = 0x41a00000;
  FUN_009c82b4(auStack_148,&uStack_a0);
  if ((bStack_90 & 1) != 0) {
    operator_delete(pvStack_80);
  }
  if (pvStack_98 != (void *)0x0) {
    operator_delete__(pvStack_98);
    uStack_a0 = 0;
    pvStack_98 = (void *)0x0;
  }
  uVar5 = FUN_00e6ce7c("MENU_GUILD_SEARCH_TILE_GUILD_TYPE_INFO_BODY",0);
  thunk_FUN_00e7051c(&uStack_a0,uVar5);
  FUN_008fcdb8(&bStack_90,&DAT_0320ffa8);
  uStack_78 = 1;
  uStack_74 = 0x41a00000;
  FUN_009c82b4(auStack_148,&uStack_a0);
  if ((bStack_90 & 1) != 0) {
    operator_delete(pvStack_80);
  }
  if (pvStack_98 != (void *)0x0) {
    operator_delete__(pvStack_98);
    uStack_a0 = 0;
    pvStack_98 = (void *)0x0;
  }
  bVar2 = *(byte *)(param_1 + 0x5d08);
  uVar7 = (ulong)(bVar2 >> 1);
  __n = uVar7;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x5d10);
  }
  sVar1 = (ulong)(DAT_03210718 >> 1);
  if ((DAT_03210718 & 1) != 0) {
    sVar1 = DAT_03210720;
  }
  if (__n == sVar1) {
    pvVar11 = *(void **)(param_1 + 0x5d18);
    if ((bVar2 & 1) == 0) {
      pvVar11 = (void *)(param_1 + 0x5d09);
    }
    pcVar6 = DAT_03210728;
    if ((DAT_03210718 & 1) == 0) {
      pcVar6 = &DAT_03210719;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar9 = (char *)(param_1 + 0x5d09);
        lVar10 = -uVar7;
        do {
          if (*pcVar9 != *pcVar6) goto LAB_00ad0bfc;
          pcVar9 = pcVar9 + 1;
          lVar10 = lVar10 + 1;
          pcVar6 = pcVar6 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pvVar11,pcVar6,__n), iVar4 != 0)) goto LAB_00ad0bfc;
    pcVar6 = "MENU_GUILD_SEARCH_TILE_GUILD_TYPE_CASUAL_INFO_BODY";
  }
  else {
LAB_00ad0bfc:
    sVar1 = (ulong)(DAT_03210730 >> 1);
    if ((DAT_03210730 & 1) != 0) {
      sVar1 = DAT_03210738;
    }
    if (__n == sVar1) {
      pvVar11 = *(void **)(param_1 + 0x5d18);
      if ((bVar2 & 1) == 0) {
        pvVar11 = (void *)(param_1 + 0x5d09);
      }
      pcVar6 = DAT_03210740;
      if ((DAT_03210730 & 1) == 0) {
        pcVar6 = &DAT_03210731;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar9 = (char *)(param_1 + 0x5d09);
          lVar10 = -uVar7;
          do {
            if (*pcVar9 != *pcVar6) goto LAB_00ad0c88;
            pcVar9 = pcVar9 + 1;
            lVar10 = lVar10 + 1;
            pcVar6 = pcVar6 + 1;
          } while (lVar10 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pvVar11,pcVar6,__n), iVar4 != 0)) goto LAB_00ad0c88;
      pcVar6 = "MENU_GUILD_SEARCH_TILE_GUILD_TYPE_MIDCORE_INFO_BODY";
    }
    else {
LAB_00ad0c88:
      sVar1 = (ulong)(DAT_03210748 >> 1);
      if ((DAT_03210748 & 1) != 0) {
        sVar1 = DAT_03210750;
      }
      if (__n == sVar1) {
        pvVar11 = *(void **)(param_1 + 0x5d18);
        if ((bVar2 & 1) == 0) {
          pvVar11 = (void *)(param_1 + 0x5d09);
        }
        pcVar6 = DAT_03210758;
        if ((DAT_03210748 & 1) == 0) {
          pcVar6 = &DAT_03210749;
        }
        if ((bVar2 & 1) == 0) {
          if (__n != 0) {
            pcVar9 = (char *)(param_1 + 0x5d09);
            lVar10 = -uVar7;
            do {
              if (*pcVar9 != *pcVar6) goto LAB_00ad0d14;
              pcVar9 = pcVar9 + 1;
              lVar10 = lVar10 + 1;
              pcVar6 = pcVar6 + 1;
            } while (lVar10 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pvVar11,pcVar6,__n), iVar4 != 0)) goto LAB_00ad0d14;
        pcVar6 = "MENU_GUILD_SEARCH_TILE_GUILD_TYPE_COMPETITIVE_INFO_BODY";
      }
      else {
LAB_00ad0d14:
        sVar1 = (ulong)(DAT_03210760 >> 1);
        if ((DAT_03210760 & 1) != 0) {
          sVar1 = DAT_03210768;
        }
        if (__n != sVar1) goto LAB_00ad0e08;
        pvVar11 = *(void **)(param_1 + 0x5d18);
        if ((bVar2 & 1) == 0) {
          pvVar11 = (void *)(param_1 + 0x5d09);
        }
        pcVar6 = DAT_03210770;
        if ((DAT_03210760 & 1) == 0) {
          pcVar6 = &DAT_03210761;
        }
        if ((bVar2 & 1) == 0) {
          if (__n != 0) {
            pcVar9 = (char *)(param_1 + 0x5d09);
            lVar10 = -uVar7;
            do {
              if (*pcVar9 != *pcVar6) goto LAB_00ad0e08;
              pcVar9 = pcVar9 + 1;
              lVar10 = lVar10 + 1;
              pcVar6 = pcVar6 + 1;
            } while (lVar10 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pvVar11,pcVar6,__n), iVar4 != 0)) goto LAB_00ad0e08;
        pcVar6 = "MENU_GUILD_SEARCH_TILE_GUILD_TYPE_UNIVERSITY_INFO_BODY";
      }
    }
  }
  uVar5 = FUN_00e6ce7c(pcVar6,0);
  thunk_FUN_00e7051c(&uStack_a0,uVar5);
  FUN_008fcdb8(&bStack_90,&DAT_0320ffa8);
  uStack_78 = 1;
  uStack_74 = 0x41a00000;
  FUN_009c82b4(auStack_148,&uStack_a0);
  if ((bStack_90 & 1) != 0) {
    operator_delete(pvStack_80);
  }
  if (pvStack_98 != (void *)0x0) {
    operator_delete__(pvStack_98);
    uStack_a0 = 0;
    pvStack_98 = (void *)0x0;
  }
LAB_00ad0e08:
  lStack_120 = param_1 + 0x2560;
  uStack_c0 = 0x3f000000;
  uStack_a8 = 2;
  if (*(int *)(param_1 + 0x5e0c) < 1) {
    uStack_a8 = 3;
  }
  uVar7 = FUN_0092ea9c();
  uStack_bc = 0x44610000;
  if ((uVar7 & 1) == 0) {
    uStack_bc = 0x44548000;
  }
  uVar5 = FUN_009b8d90();
  FUN_008fa54c(&uStack_a0,"guild_search_tile_guild_type_info");
  FUN_009badc0(uVar5,&uStack_a0,&ppuStack_150);
  if ((uStack_a0 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_8f,bStack_90));
  }
  ppuStack_150 = &PTR_FUN_027de7f0;
  if ((bStack_f0 & 1) != 0) {
    operator_delete(pvStack_e0);
  }
  if (pvStack_f8 != (void *)0x0) {
    operator_delete__(pvStack_f8);
    uStack_100 = 0;
    pvStack_f8 = (void *)0x0;
  }
  FUN_009c8464(auStack_148,1);
  if (*(long *)(lVar3 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00ad0f00(long param_1)

{
  void *pvVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  void *pvVar6;
  undefined8 uVar7;
  char *__s2;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  
  bVar3 = *(byte *)(param_1 + 0x5de8);
  uVar10 = *(size_t *)(param_1 + 0x5df0);
  uVar4 = (ulong)(bVar3 >> 1);
  __n = uVar4;
  if ((bVar3 & 1) != 0) {
    __n = uVar10;
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    pvVar11 = *(void **)(param_1 + 0x5df8);
    pvVar6 = pvVar11;
    if ((bVar3 & 1) == 0) {
      pvVar6 = (void *)(param_1 + 0x5de9);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar8 = (char *)(param_1 + 0x5de9);
        lVar9 = -uVar4;
        do {
          if (*pcVar8 != *__s2) goto LAB_00ad0fa0;
          pcVar8 = pcVar8 + 1;
          lVar9 = lVar9 + 1;
          __s2 = __s2 + 1;
        } while (lVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(pvVar6,__s2,__n), iVar5 != 0)) goto LAB_00ad0fc8;
    return;
  }
LAB_00ad0fa0:
  if ((bVar3 & 1) == 0) {
    pvVar11 = (void *)(param_1 + 0x5de9);
    uVar10 = uVar4;
  }
  else {
    pvVar11 = *(void **)(param_1 + 0x5df8);
  }
LAB_00ad0fc8:
  if (2 < (long)uVar10) {
    pvVar1 = (void *)((long)pvVar11 + uVar10);
    pvVar6 = pvVar11;
    do {
      if ((uVar10 - 2 == 0) || (pvVar6 = memchr(pvVar6,0x49,uVar10 - 2), pvVar6 == (void *)0x0))
      break;
      iVar5 = memcmp(pvVar6,&DAT_01baf73c,3);
      if (iVar5 == 0) {
        if ((pvVar6 != pvVar1) && (pvVar6 == pvVar11)) {
          return;
        }
        break;
      }
      pvVar6 = (void *)((long)pvVar6 + 1);
      uVar10 = (long)pvVar1 - (long)pvVar6;
    } while (2 < (long)uVar10);
  }
  uVar7 = FUN_009580b8();
  FUN_0095e21c(uVar7,(byte *)(param_1 + 0x5de8),1);
  return;
}




undefined4 FUN_00ad04d4(undefined8 param_1,int param_2)

{
  if (0x3b < param_2) {
    return 0x3ee66666;
  }
  if (0x31 < param_2) {
    return 0x3f266666;
  }
  return *(undefined4 *)(&DAT_01baf4e8 + (ulong)(0x13 < param_2) * 4);
}




void FUN_00ad0514(undefined8 param_1,long param_2)

{
  long lVar1;
  byte local_1b0 [16];
  void *local_1a0;
  byte local_198 [16];
  void *local_188;
  byte local_180 [16];
  void *local_170;
  byte local_168;
  void *local_158;
  undefined8 local_140;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  memset(auStack_138,0,0xd8);
  memset(local_1b0,0,0x60);
  FUN_00954ec0(&local_140);
  FUN_00954d1c(local_1b0);
  FUN_008fce60(local_198,param_2 + 0x60);
  FUN_008fce60(local_1b0,param_2 + 0x28);
  FUN_008fce60(local_180,param_2 + 0x78);
  local_140 = *(undefined8 *)(param_2 + 0xb8);
  FUN_008fce60(auStack_138,param_2 + 0xc0);
  FUN_008fce60(auStack_120,param_2 + 0xd8);
  FUN_008fce60(auStack_108,param_2 + 0xf0);
  FUN_008fce60(auStack_f0,param_2 + 0x108);
  FUN_008fce60(auStack_d8,param_2 + 0x120);
  FUN_008fce60(auStack_c0,param_2 + 0x138);
  FUN_008fce60(auStack_a8,param_2 + 0x150);
  FUN_008fce60(auStack_90,param_2 + 0x168);
  FUN_008fce60(auStack_78,param_2 + 0x180);
  local_60 = *(undefined1 *)(param_2 + 0x198);
  FUN_00acfe20(param_1,local_1b0,1);
  FUN_00936630(&local_140);
  if ((local_168 & 1) != 0) {
    operator_delete(local_158);
  }
  if ((local_180[0] & 1) != 0) {
    operator_delete(local_170);
  }
  if ((local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  if ((local_1b0[0] & 1) != 0) {
    operator_delete(local_1a0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad06a8(long param_1)

{
  *(uint *)(param_1 + 0x39ac) = *(uint *)(param_1 + 0x39ac) | 4;
  *(uint *)(param_1 + 0x764) = *(uint *)(param_1 + 0x764) & 0xfffffffb;
  *(undefined1 *)(param_1 + 0x5e10) = 1;
  return;
}




void FUN_00ad06d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  
  lVar1 = param_4 + 0xb88;
  FUN_00f01980(lVar1);
  uVar3 = FUN_00eff63c(0,0,param_1,FUN_009a816c);
  FUN_00f022a0(lVar1,uVar3);
  lVar2 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcad4(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_027c1a60;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcac4(param_2,puVar5);
  FUN_00f022a0(lVar1,puVar5);
  uVar3 = FUN_00eff63c(*(undefined4 *)(param_4 + 0x5e08),*(undefined4 *)(param_4 + 0x5e08),param_3,
                       FUN_00ab3980);
  FUN_00f022a0(lVar1,uVar3);
  lVar2 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar4 * 0x40);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_027c27b8;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  *(code **)(puVar5 + 8) = FUN_00ad08d8;
  *(long *)(puVar5 + 0x10) = param_4;
  FUN_00f022a0(lVar1,puVar5);
  return;
}




void FUN_00ad08d8(long param_1)

{
  FUN_00acd880(param_1 + 0xb88);
  return;
}




void FUN_00ad08e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  param_3 = param_3 + 0xb88;
  FUN_00f01980(param_3);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(param_2,puVar4);
  FUN_00f022a0(param_3,puVar4);
  uVar2 = FUN_00eff63c(0,0,param_1,FUN_009a816c);
  FUN_00f022a0(param_3,uVar2);
  return;
}




void FUN_00ad09f0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_00f01980(param_2 + 0xb88);
  uVar1 = FUN_00eff63c(*(undefined4 *)(param_2 + 0x5e08),*(undefined4 *)(param_2 + 0x5e08),param_1,
                       FUN_009a816c);
  FUN_00f022a0(param_2 + 0xb88,uVar1);
  return;
}




void FUN_00ad0a48(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  void *pvVar11;
  undefined **local_150;
  undefined1 auStack_148 [40];
  long local_120;
  undefined8 local_100;
  void *local_f8;
  byte local_f0;
  void *local_e0;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_a8;
  ulong local_a0;
  void *local_98;
  byte local_90;
  undefined7 uStack_8f;
  void *local_80;
  undefined4 local_78;
  undefined8 local_74;
  
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
  FUN_00b26098(&local_150);
  uVar5 = FUN_00e6ce7c("MENU_GUILD_SEARCH_TILE_GUILD_TYPE_INFO_TITLE",0);
  thunk_FUN_00e7051c(&local_a0,uVar5);
  FUN_008fcdb8(&local_90,&DAT_0320ffa8);
  local_78 = 0;
  local_74 = 0x41a00000;
  FUN_009c82b4(auStack_148,&local_a0);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
  }
  uVar5 = FUN_00e6ce7c("MENU_GUILD_SEARCH_TILE_GUILD_TYPE_INFO_BODY",0);
  thunk_FUN_00e7051c(&local_a0,uVar5);
  FUN_008fcdb8(&local_90,&DAT_0320ffa8);
  local_78 = 1;
  local_74 = 0x41a00000;
  FUN_009c82b4(auStack_148,&local_a0);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
  }
  bVar2 = *(byte *)(param_1 + 0x5d08);
  uVar7 = (ulong)(bVar2 >> 1);
  __n = uVar7;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x5d10);
  }
  sVar1 = (ulong)(DAT_03210718 >> 1);
  if ((DAT_03210718 & 1) != 0) {
    sVar1 = DAT_03210720;
  }
  if (__n == sVar1) {
    pvVar11 = *(void **)(param_1 + 0x5d18);
    if ((bVar2 & 1) == 0) {
      pvVar11 = (void *)(param_1 + 0x5d09);
    }
    pcVar6 = DAT_03210728;
    if ((DAT_03210718 & 1) == 0) {
      pcVar6 = &DAT_03210719;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar9 = (char *)(param_1 + 0x5d09);
        lVar10 = -uVar7;
        do {
          if (*pcVar9 != *pcVar6) goto LAB_00ad0bfc;
          pcVar9 = pcVar9 + 1;
          lVar10 = lVar10 + 1;
          pcVar6 = pcVar6 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pvVar11,pcVar6,__n), iVar4 != 0)) goto LAB_00ad0bfc;
    pcVar6 = "MENU_GUILD_SEARCH_TILE_GUILD_TYPE_CASUAL_INFO_BODY";
  }
  else {
LAB_00ad0bfc:
    sVar1 = (ulong)(DAT_03210730 >> 1);
    if ((DAT_03210730 & 1) != 0) {
      sVar1 = DAT_03210738;
    }
    if (__n == sVar1) {
      pvVar11 = *(void **)(param_1 + 0x5d18);
      if ((bVar2 & 1) == 0) {
        pvVar11 = (void *)(param_1 + 0x5d09);
      }
      pcVar6 = DAT_03210740;
      if ((DAT_03210730 & 1) == 0) {
        pcVar6 = &DAT_03210731;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar9 = (char *)(param_1 + 0x5d09);
          lVar10 = -uVar7;
          do {
            if (*pcVar9 != *pcVar6) goto LAB_00ad0c88;
            pcVar9 = pcVar9 + 1;
            lVar10 = lVar10 + 1;
            pcVar6 = pcVar6 + 1;
          } while (lVar10 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pvVar11,pcVar6,__n), iVar4 != 0)) goto LAB_00ad0c88;
      pcVar6 = "MENU_GUILD_SEARCH_TILE_GUILD_TYPE_MIDCORE_INFO_BODY";
    }
    else {
LAB_00ad0c88:
      sVar1 = (ulong)(DAT_03210748 >> 1);
      if ((DAT_03210748 & 1) != 0) {
        sVar1 = DAT_03210750;
      }
      if (__n == sVar1) {
        pvVar11 = *(void **)(param_1 + 0x5d18);
        if ((bVar2 & 1) == 0) {
          pvVar11 = (void *)(param_1 + 0x5d09);
        }
        pcVar6 = DAT_03210758;
        if ((DAT_03210748 & 1) == 0) {
          pcVar6 = &DAT_03210749;
        }
        if ((bVar2 & 1) == 0) {
          if (__n != 0) {
            pcVar9 = (char *)(param_1 + 0x5d09);
            lVar10 = -uVar7;
            do {
              if (*pcVar9 != *pcVar6) goto LAB_00ad0d14;
              pcVar9 = pcVar9 + 1;
              lVar10 = lVar10 + 1;
              pcVar6 = pcVar6 + 1;
            } while (lVar10 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pvVar11,pcVar6,__n), iVar4 != 0)) goto LAB_00ad0d14;
        pcVar6 = "MENU_GUILD_SEARCH_TILE_GUILD_TYPE_COMPETITIVE_INFO_BODY";
      }
      else {
LAB_00ad0d14:
        sVar1 = (ulong)(DAT_03210760 >> 1);
        if ((DAT_03210760 & 1) != 0) {
          sVar1 = DAT_03210768;
        }
        if (__n != sVar1) goto LAB_00ad0e08;
        pvVar11 = *(void **)(param_1 + 0x5d18);
        if ((bVar2 & 1) == 0) {
          pvVar11 = (void *)(param_1 + 0x5d09);
        }
        pcVar6 = DAT_03210770;
        if ((DAT_03210760 & 1) == 0) {
          pcVar6 = &DAT_03210761;
        }
        if ((bVar2 & 1) == 0) {
          if (__n != 0) {
            pcVar9 = (char *)(param_1 + 0x5d09);
            lVar10 = -uVar7;
            do {
              if (*pcVar9 != *pcVar6) goto LAB_00ad0e08;
              pcVar9 = pcVar9 + 1;
              lVar10 = lVar10 + 1;
              pcVar6 = pcVar6 + 1;
            } while (lVar10 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pvVar11,pcVar6,__n), iVar4 != 0)) goto LAB_00ad0e08;
        pcVar6 = "MENU_GUILD_SEARCH_TILE_GUILD_TYPE_UNIVERSITY_INFO_BODY";
      }
    }
  }
  uVar5 = FUN_00e6ce7c(pcVar6,0);
  thunk_FUN_00e7051c(&local_a0,uVar5);
  FUN_008fcdb8(&local_90,&DAT_0320ffa8);
  local_78 = 1;
  local_74 = 0x41a00000;
  FUN_009c82b4(auStack_148,&local_a0);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
  }
LAB_00ad0e08:
  local_120 = param_1 + 0x2560;
  local_c0 = 0x3f000000;
  local_a8 = 2;
  if (*(int *)(param_1 + 0x5e0c) < 1) {
    local_a8 = 3;
  }
  uVar7 = FUN_0092ea9c();
  local_bc = 0x44610000;
  if ((uVar7 & 1) == 0) {
    local_bc = 0x44548000;
  }
  uVar5 = FUN_009b8d90();
  FUN_008fa54c(&local_a0,"guild_search_tile_guild_type_info");
  FUN_009badc0(uVar5,&local_a0,&local_150);
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_8f,local_90));
  }
  local_150 = &PTR_FUN_027de7f0;
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if (local_f8 != (void *)0x0) {
    operator_delete__(local_f8);
    local_100 = 0;
    local_f8 = (void *)0x0;
  }
  FUN_009c8464(auStack_148,1);
  if (*(long *)(lVar3 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ad0f00(long param_1)

{
  void *pvVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  void *pvVar6;
  undefined8 uVar7;
  char *__s2;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  
  bVar3 = *(byte *)(param_1 + 0x5de8);
  uVar10 = *(size_t *)(param_1 + 0x5df0);
  uVar4 = (ulong)(bVar3 >> 1);
  __n = uVar4;
  if ((bVar3 & 1) != 0) {
    __n = uVar10;
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    pvVar11 = *(void **)(param_1 + 0x5df8);
    pvVar6 = pvVar11;
    if ((bVar3 & 1) == 0) {
      pvVar6 = (void *)(param_1 + 0x5de9);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar8 = (char *)(param_1 + 0x5de9);
        lVar9 = -uVar4;
        do {
          if (*pcVar8 != *__s2) goto LAB_00ad0fa0;
          pcVar8 = pcVar8 + 1;
          lVar9 = lVar9 + 1;
          __s2 = __s2 + 1;
        } while (lVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(pvVar6,__s2,__n), iVar5 != 0)) goto LAB_00ad0fc8;
    return;
  }
LAB_00ad0fa0:
  if ((bVar3 & 1) == 0) {
    pvVar11 = (void *)(param_1 + 0x5de9);
    uVar10 = uVar4;
  }
  else {
    pvVar11 = *(void **)(param_1 + 0x5df8);
  }
LAB_00ad0fc8:
  if (2 < (long)uVar10) {
    pvVar1 = (void *)((long)pvVar11 + uVar10);
    pvVar6 = pvVar11;
    do {
      if ((uVar10 - 2 == 0) || (pvVar6 = memchr(pvVar6,0x49,uVar10 - 2), pvVar6 == (void *)0x0))
      break;
      iVar5 = memcmp(pvVar6,&DAT_01baf73c,3);
      if (iVar5 == 0) {
        if ((pvVar6 != pvVar1) && (pvVar6 == pvVar11)) {
          return;
        }
        break;
      }
      pvVar6 = (void *)((long)pvVar6 + 1);
      uVar10 = (long)pvVar1 - (long)pvVar6;
    } while (2 < (long)uVar10);
  }
  uVar7 = FUN_009580b8();
  FUN_0095e21c(uVar7,(byte *)(param_1 + 0x5de8),1);
  return;
}

