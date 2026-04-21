// functions/00b3d — 8 functions
#include "libGameKindred.h"




void thunk_FUN_00b3d460(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  char *pcVar12;
  void *__s1;
  char *__s2;
  undefined **ppuStack_280;
  undefined1 auStack_278 [8];
  void *pvStack_270;
  long lStack_250;
  undefined8 uStack_230;
  void *pvStack_228;
  byte bStack_220;
  void *pvStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1d8;
  undefined1 uStack_1d3;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  ulong auStack_1b8 [2];
  void *pvStack_1a8;
  ulong auStack_1a0 [2];
  void *pvStack_190;
  ulong uStack_188;
  void *pvStack_180;
  byte bStack_178;
  undefined7 uStack_177;
  void *pvStack_168;
  undefined4 uStack_160;
  undefined8 uStack_15c;
  undefined1 auStack_150 [8];
  uint uStack_148;
  long lStack_140;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [200];
  
  lVar4 = tpidr_el0;
  lVar11 = *(long *)(lVar4 + 0x28);
  lVar8 = FUN_00969248();
  if (0 < *(int *)(lVar8 + 0x38)) goto LAB_00b3d804;
  FUN_00976588(auStack_150);
  FUN_008fa54c(&ppuStack_280,"player_fame_buff_100pct_timed");
  uVar9 = FUN_0096bf64(&ppuStack_280,auStack_150);
  if (((ulong)ppuStack_280 & 1) != 0) {
    operator_delete(pvStack_270);
  }
  if ((uVar9 & 1) != 0) {
    FUN_00b26098(&ppuStack_280);
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    auStack_1a0[1] = 0;
    pvStack_190 = (void *)0x0;
    ppuStack_280 = &PTR_FUN_027dc678;
    pvStack_1a8 = (void *)0x0;
    auStack_1a0[0] = 0;
    auStack_1b8[0] = 0;
    auStack_1b8[1] = 0;
    uVar9 = FUN_0092ea9c();
    lStack_250 = param_1 + 0xeb8;
    uStack_1d8 = 3;
    bVar5 = (uVar9 & 1) == 0;
    uStack_1f0 = 0x3e99999a;
    uStack_208 = 0x42200000;
    if (bVar5) {
      uStack_208 = 0x41a00000;
    }
    uStack_200 = 0;
    uStack_1ec = 0x442f0000;
    if (bVar5) {
      uStack_200 = 0xc1a00000;
      uStack_1ec = 0x441b8000;
    }
    uStack_1fc = 0;
    uStack_1d3 = 1;
    uStack_204 = uStack_208;
    FUN_008fa54c(&uStack_188,"boost_badge_guild_fame");
    FUN_008fce60(auStack_1b8,&uStack_188);
    if ((uStack_188 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_177,bStack_178));
    }
    uStack_1c0 = 1;
    FUN_008fce60(auStack_1a0,param_1 + 0x2598);
    thunk_FUN_00e7051c(&uStack_188,auStack_138);
    FUN_008fcdb8(&bStack_178,&DAT_0320ffa8);
    uStack_160 = 0;
    uStack_15c = 0x41a00000;
    FUN_009c82b4(auStack_278,&uStack_188);
    if ((bStack_178 & 1) != 0) {
      operator_delete(pvStack_168);
    }
    if (pvStack_180 != (void *)0x0) {
      operator_delete__(pvStack_180);
      uStack_188 = 0;
      pvStack_180 = (void *)0x0;
    }
    lVar8 = FUN_009580b8();
    bVar2 = *(byte *)(param_1 + 0x2580);
    bVar3 = *(byte *)(lVar8 + 0x5508);
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(param_1 + 0x2588);
    }
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(lVar8 + 0x5510);
    }
    if (__n == sVar1) {
      __s1 = *(void **)(param_1 + 0x2590);
      __s2 = *(char **)(lVar8 + 0x5518);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(param_1 + 0x2581);
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (char *)(lVar8 + 0x5509);
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar12 = (char *)(param_1 + 0x2581);
          lVar8 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar12 != *__s2) goto LAB_00b3d6b8;
            pcVar12 = pcVar12 + 1;
            lVar8 = lVar8 + 1;
            __s2 = __s2 + 1;
          } while (lVar8 != 0);
        }
      }
      else if ((__n != 0) && (iVar6 = memcmp(__s1,__s2,__n), iVar6 != 0)) goto LAB_00b3d6b8;
      puVar10 = auStack_128;
    }
    else {
LAB_00b3d6b8:
      puVar10 = (undefined1 *)FUN_00e6ce7c("MENU_PROFILE_GUILD_GIFT_FAME_BOOST_TOOLTIP",0);
    }
    thunk_FUN_00e7051c(&uStack_188,puVar10);
    FUN_008fcdb8(&bStack_178,&DAT_0320ffa8);
    uStack_160 = 1;
    uStack_15c = 0x41a00000;
    FUN_009c82b4(auStack_278,&uStack_188);
    if ((bStack_178 & 1) != 0) {
      operator_delete(pvStack_168);
    }
    if (pvStack_180 != (void *)0x0) {
      operator_delete__(pvStack_180);
      uStack_188 = 0;
      pvStack_180 = (void *)0x0;
    }
    if (uStack_148 != 0) {
      lVar8 = 0;
      uVar9 = 0;
      do {
        FUN_00976638(&uStack_1d0,lStack_140 + lVar8);
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0xa0;
      } while (uVar9 < uStack_148);
    }
    uVar7 = FUN_00f048a4("EVENT_DISPLAY_TOOLTIP");
    FUN_00f048e0(&uStack_188,uVar7,&ppuStack_280);
    FUN_00f04760(param_1,&uStack_188,1);
    ppuStack_280 = &PTR_FUN_027dc678;
    if ((auStack_1a0[0] & 1) != 0) {
      operator_delete(pvStack_190);
    }
    if ((auStack_1b8[0] & 1) != 0) {
      operator_delete(pvStack_1a8);
    }
    FUN_00977fa4(&uStack_1d0,1);
    ppuStack_280 = &PTR_FUN_027de7f0;
    if ((bStack_220 & 1) != 0) {
      operator_delete(pvStack_210);
    }
    if (pvStack_228 != (void *)0x0) {
      operator_delete__(pvStack_228);
      uStack_230 = 0;
      pvStack_228 = (void *)0x0;
    }
    FUN_009c8464(auStack_278,1);
  }
  FUN_009767f4(auStack_150);
LAB_00b3d804:
  if (*(long *)(lVar4 + 0x28) == lVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b3d2f0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00f08be8(param_1 + 0x248);
  thunk_FUN_00e7051c(&uStack_48,uVar3);
  uVar4 = FUN_00e70b88(&uStack_48,&DAT_03210450);
  if ((uVar4 & 1) != 0) {
    FUN_00916048(&uStack_48);
  }
  param_1 = param_1 + 0x1ba8;
  FUN_00b09454(param_1,0);
  FUN_00f01980(param_1);
  uVar3 = FUN_00efee28(0,0x3e99999a,0);
  FUN_00f022a0(param_1,uVar3);
  lVar2 = DAT_03210d00;
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
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_02825148;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00f022a0(param_1,puVar6);
  if (pvStack_40 != (void *)0x0) {
    operator_delete__(pvStack_40);
    uStack_48 = 0;
    pvStack_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b3d2f0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00f08be8(param_1 + 0x248);
  thunk_FUN_00e7051c(&local_48,uVar3);
  uVar4 = FUN_00e70b88(&local_48,&DAT_03210450);
  if ((uVar4 & 1) != 0) {
    FUN_00916048(&local_48);
  }
  param_1 = param_1 + 0x1ba8;
  FUN_00b09454(param_1,0);
  FUN_00f01980(param_1);
  uVar3 = FUN_00efee28(0,0x3e99999a,0);
  FUN_00f022a0(param_1,uVar3);
  lVar2 = DAT_03210d00;
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
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_02825148;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00f022a0(param_1,puVar6);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b3d460(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  char *pcVar12;
  void *__s1;
  char *__s2;
  undefined **local_280;
  undefined1 auStack_278 [8];
  void *local_270;
  long local_250;
  undefined8 local_230;
  void *local_228;
  byte local_220;
  void *local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1d8;
  undefined1 local_1d3;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  ulong local_1b8 [2];
  void *local_1a8;
  ulong local_1a0 [2];
  void *local_190;
  ulong local_188;
  void *local_180;
  byte local_178;
  undefined7 uStack_177;
  void *local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined1 auStack_150 [8];
  uint local_148;
  long local_140;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [200];
  
  lVar4 = tpidr_el0;
  lVar11 = *(long *)(lVar4 + 0x28);
  lVar8 = FUN_00969248();
  if (0 < *(int *)(lVar8 + 0x38)) goto LAB_00b3d804;
  FUN_00976588(auStack_150);
  FUN_008fa54c(&local_280,"player_fame_buff_100pct_timed");
  uVar9 = FUN_0096bf64(&local_280,auStack_150);
  if (((ulong)local_280 & 1) != 0) {
    operator_delete(local_270);
  }
  if ((uVar9 & 1) != 0) {
    FUN_00b26098(&local_280);
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1a0[1] = 0;
    local_190 = (void *)0x0;
    local_280 = &PTR_FUN_027dc678;
    local_1a8 = (void *)0x0;
    local_1a0[0] = 0;
    local_1b8[0] = 0;
    local_1b8[1] = 0;
    uVar9 = FUN_0092ea9c();
    local_250 = param_1 + 0xeb8;
    local_1d8 = 3;
    bVar5 = (uVar9 & 1) == 0;
    local_1f0 = 0x3e99999a;
    local_208 = 0x42200000;
    if (bVar5) {
      local_208 = 0x41a00000;
    }
    local_200 = 0;
    local_1ec = 0x442f0000;
    if (bVar5) {
      local_200 = 0xc1a00000;
      local_1ec = 0x441b8000;
    }
    uStack_1fc = 0;
    local_1d3 = 1;
    uStack_204 = local_208;
    FUN_008fa54c(&local_188,"boost_badge_guild_fame");
    FUN_008fce60(local_1b8,&local_188);
    if ((local_188 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_177,local_178));
    }
    local_1c0 = 1;
    FUN_008fce60(local_1a0,param_1 + 0x2598);
    thunk_FUN_00e7051c(&local_188,auStack_138);
    FUN_008fcdb8(&local_178,&DAT_0320ffa8);
    local_160 = 0;
    local_15c = 0x41a00000;
    FUN_009c82b4(auStack_278,&local_188);
    if ((local_178 & 1) != 0) {
      operator_delete(local_168);
    }
    if (local_180 != (void *)0x0) {
      operator_delete__(local_180);
      local_188 = 0;
      local_180 = (void *)0x0;
    }
    lVar8 = FUN_009580b8();
    bVar2 = *(byte *)(param_1 + 0x2580);
    bVar3 = *(byte *)(lVar8 + 0x5508);
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(param_1 + 0x2588);
    }
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(lVar8 + 0x5510);
    }
    if (__n == sVar1) {
      __s1 = *(void **)(param_1 + 0x2590);
      __s2 = *(char **)(lVar8 + 0x5518);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(param_1 + 0x2581);
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (char *)(lVar8 + 0x5509);
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar12 = (char *)(param_1 + 0x2581);
          lVar8 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar12 != *__s2) goto LAB_00b3d6b8;
            pcVar12 = pcVar12 + 1;
            lVar8 = lVar8 + 1;
            __s2 = __s2 + 1;
          } while (lVar8 != 0);
        }
      }
      else if ((__n != 0) && (iVar6 = memcmp(__s1,__s2,__n), iVar6 != 0)) goto LAB_00b3d6b8;
      puVar10 = auStack_128;
    }
    else {
LAB_00b3d6b8:
      puVar10 = (undefined1 *)FUN_00e6ce7c("MENU_PROFILE_GUILD_GIFT_FAME_BOOST_TOOLTIP",0);
    }
    thunk_FUN_00e7051c(&local_188,puVar10);
    FUN_008fcdb8(&local_178,&DAT_0320ffa8);
    local_160 = 1;
    local_15c = 0x41a00000;
    FUN_009c82b4(auStack_278,&local_188);
    if ((local_178 & 1) != 0) {
      operator_delete(local_168);
    }
    if (local_180 != (void *)0x0) {
      operator_delete__(local_180);
      local_188 = 0;
      local_180 = (void *)0x0;
    }
    if (local_148 != 0) {
      lVar8 = 0;
      uVar9 = 0;
      do {
        FUN_00976638(&local_1d0,local_140 + lVar8);
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0xa0;
      } while (uVar9 < local_148);
    }
    uVar7 = FUN_00f048a4("EVENT_DISPLAY_TOOLTIP");
    FUN_00f048e0(&local_188,uVar7,&local_280);
    FUN_00f04760(param_1,&local_188,1);
    local_280 = &PTR_FUN_027dc678;
    if ((local_1a0[0] & 1) != 0) {
      operator_delete(local_190);
    }
    if ((local_1b8[0] & 1) != 0) {
      operator_delete(local_1a8);
    }
    FUN_00977fa4(&local_1d0,1);
    local_280 = &PTR_FUN_027de7f0;
    if ((local_220 & 1) != 0) {
      operator_delete(local_210);
    }
    if (local_228 != (void *)0x0) {
      operator_delete__(local_228);
      local_230 = 0;
      local_228 = (void *)0x0;
    }
    FUN_009c8464(auStack_278,1);
  }
  FUN_009767f4(auStack_150);
LAB_00b3d804:
  if (*(long *)(lVar4 + 0x28) == lVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b3d83c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027e0bf8;
  if ((*(byte *)(param_1 + 0x4b3) & 1) != 0) {
    operator_delete((void *)param_1[0x4b5]);
  }
  if ((*(byte *)(param_1 + 0x4b0) & 1) != 0) {
    operator_delete((void *)param_1[0x4b2]);
  }
  param_1[0x492] = &PTR_FUN_028266f0;
  param_1[0x4a9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4ac);
  FUN_00f13d08(param_1 + 0x492);
  param_1[0x474] = &PTR_FUN_028266f0;
  param_1[0x48b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x48e);
  FUN_00f13d08(param_1 + 0x474);
  param_1[0x456] = &PTR_FUN_028266f0;
  param_1[0x46d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x470);
  FUN_00f13d08(param_1 + 0x456);
  FUN_00f01868(param_1 + 0x445);
  FUN_00f01868(param_1 + 0x434);
  param_1[0x410] = &PTR_FUN_028266f0;
  param_1[0x427] = &PTR_FUN_02826850;
  param_1[0x375] = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0x42a);
  FUN_00f13d08(param_1 + 0x410);
  param_1[0x3f2] = &PTR_FUN_028266f0;
  param_1[0x409] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x40c);
  FUN_00f13d08(param_1 + 0x3f2);
  param_1[0x3d4] = &PTR_FUN_028266f0;
  param_1[0x3eb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3ee);
  FUN_00f13d08(param_1 + 0x3d4);
  FUN_00f01868(param_1 + 0x3c3);
  FUN_009c825c(param_1 + 0x375);
  FUN_00ab3254(param_1 + 0x2fb);
  FUN_00ab3254(param_1 + 0x281);
  param_1[0x225] = &PTR_FUN_027d8bf8;
  FUN_00f0d3a4(param_1 + 0x25a);
  param_1[0x23c] = &PTR_FUN_028266f0;
  param_1[0x253] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x256);
  FUN_00f13d08(param_1 + 0x23c);
  FUN_00f13d08(param_1 + 0x225);
  FUN_009c825c(param_1 + 0x1d7);
  param_1[0x1b9] = &PTR_FUN_028266f0;
  param_1[0x1d0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1d3);
  FUN_00f13d08(param_1 + 0x1b9);
  param_1[0x19b] = &PTR_FUN_028266f0;
  param_1[0x1b2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1b5);
  FUN_00f13d08(param_1 + 0x19b);
  param_1[0x17d] = &PTR_FUN_028266f0;
  param_1[0x194] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x197);
  FUN_00f13d08(param_1 + 0x17d);
  FUN_00f0d3a4(param_1 + 0x157);
  param_1[0x139] = &PTR_FUN_028266f0;
  param_1[0x150] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x153);
  FUN_00f13d08(param_1 + 0x139);
  lVar1 = 0x898;
  do {
    FUN_00f0d3a4((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != 0x2a8);
  FUN_00f0d3a4(param_1 + 0x55);
  FUN_00f0d3a4(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00b3db04(void *param_1)

{
  FUN_00b3d83c();
  operator_delete(param_1);
  return;
}




void FUN_00b3db28(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00b3dba8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  undefined **ppuVar27;
  uint uVar28;
  undefined4 uVar29;
  long lVar30;
  undefined **ppuVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  uint uVar34;
  ulong uVar35;
  undefined8 uVar36;
  long *plVar37;
  float fVar38;
  byte local_d8 [16];
  void *local_c8;
  code *local_c0;
  long *plStack_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  long local_90;
  
  lVar30 = tpidr_el0;
  local_90 = *(long *)(lVar30 + 0x28);
  FUN_00b89cd8();
  FUN_00a99760(param_1 + 0x19);
  FUN_00e83560(param_1 + 0x1c);
  plVar37 = param_1 + 0x1f;
  *param_1 = (long)&PTR_FUN_027e0cf8;
  param_1[0x19] = (long)&PTR_FUN_027e0e78;
  param_1[0x1c] = (long)&PTR_FUN_027e0ea0;
  FUN_00f11234(plVar37);
  plVar1 = param_1 + 0x53;
  FUN_00ecfd6c(plVar1,0);
  plVar2 = param_1 + 0xfa;
  FUN_00ac5ab8(plVar2,0);
  plVar3 = param_1 + 0x27b;
  FUN_00f0e4a8();
  plVar4 = param_1 + 0x299;
  FUN_00f0d160();
  plVar5 = param_1 + 0x2bf;
  FUN_00abaee8(plVar5,0);
  plVar6 = param_1 + 0x37e;
  FUN_00abaee8(plVar6,0);
  plVar7 = param_1 + 0x43d;
  FUN_00f13ca4(plVar7);
  plVar8 = param_1 + 0x454;
  FUN_00af8b20();
  plVar9 = param_1 + 0x4ca;
  FUN_00f0d160();
  FUN_00b43a24();
  plVar10 = param_1 + 0x57d;
  FUN_00abaee8(plVar10,0);
  plVar11 = param_1 + 0x63c;
  FUN_00f0e4a8(plVar11);
  plVar12 = param_1 + 0x65a;
  FUN_00f0d160();
  plVar13 = param_1 + 0x680;
  FUN_00b09580();
  plVar14 = param_1 + 0x8e3;
  FUN_00f0e4a8(plVar14);
  plVar15 = param_1 + 0x901;
  FUN_00f0d160(plVar15);
  plVar16 = param_1 + 0x927;
  FUN_00f13ca4(plVar16);
  plVar17 = param_1 + 0x93e;
  FUN_00f0d160();
  plVar18 = param_1 + 0x964;
  FUN_00b0108c();
  plVar19 = param_1 + 0xaa4;
  FUN_00abaee8(plVar19,0);
  plVar20 = param_1 + 0xb63;
  FUN_00aba378(plVar20,0);
  plVar21 = param_1 + 0xff1;
  FUN_00f0d160();
  plVar22 = param_1 + 0x1017;
  FUN_00ab6c24(plVar22,0);
  plVar23 = param_1 + 0x12cf;
  FUN_00f0bdbc(plVar23,1);
  plVar24 = param_1 + 0x12e8;
  *plVar23 = (long)&PTR_FUN_027ccd08;
  FUN_00f0d160();
  plVar25 = param_1 + 0x130e;
  FUN_00f0d160();
  plVar26 = param_1 + 0x1334;
  FUN_00f0d160();
  FUN_00ad2afc();
  FUN_00bb8c00();
  FUN_00f017e8(param_1 + 0x69f1);
  FUN_00b356dc();
  *(undefined4 *)(param_1 + 0x6a81) = 0;
  param_1[0x6a80] = 0;
  param_1[0x6a7f] = 0;
  param_1[0x6a7e] = 0;
  FUN_0099ce88(param_1 + 0x6a82);
  param_1[0x6a86] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6a87) = 0x10100;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x69f1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar37,1);
  FUN_00f023ec(plVar37,plVar1,1);
  FUN_00ed026c(plVar1,plVar7,1);
  FUN_00f023ec(plVar7,plVar8,1);
  FUN_00f023ec(plVar7,plVar11,1);
  FUN_00f023ec(plVar7,plVar14,1);
  FUN_00f023ec(plVar7,param_1 + 0x4f0,1);
  FUN_00f023ec(plVar7,plVar9,1);
  FUN_00f023ec(plVar7,plVar10,1);
  FUN_00f023ec(plVar7,plVar15,1);
  FUN_00f023ec(plVar7,plVar12,1);
  FUN_00ed026c(plVar1,plVar3,1);
  FUN_00ed026c(plVar1,plVar2,1);
  FUN_00ed026c(plVar1,plVar4,1);
  uVar35 = FUN_0093d880();
  if ((uVar35 & 1) != 0) {
    FUN_00ed026c(plVar1,plVar5,1);
    FUN_00ed026c(plVar1,plVar6,1);
  }
  FUN_00ed026c(plVar1,plVar13,1);
  FUN_00ed026c(plVar1,plVar16,1);
  FUN_00f023ec(plVar16,plVar18,1);
  FUN_00f023ec(plVar16,plVar17,1);
  FUN_00f023ec(plVar16,plVar19,1);
  FUN_00f023ec(plVar16,plVar20,1);
  FUN_00f023ec(plVar16,plVar21,1);
  FUN_00f023ec(plVar1,plVar22,1);
  FUN_00ed026c(plVar1,plVar23,1);
  FUN_00f023ec(plVar23,plVar24,1);
  FUN_00f023ec(plVar23,plVar25,1);
  FUN_00f023ec(plVar23,plVar26,1);
  FUN_00ed026c(plVar1,param_1 + 0x135a,1);
  FUN_00ed026c(plVar1,param_1 + 0x6a02,1);
  uVar34 = FUN_0092ea9c();
  FUN_00ed04d8(plVar1,0,*(byte *)((long)param_1 + 0x35439));
  *(uint *)((long)param_1 + 0x31c) =
       *(uint *)((long)param_1 + 0x31c) & 0xffffffef | (uint)*(byte *)((long)param_1 + 0x35439) << 4
  ;
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_fuzzy_dot");
  uVar28 = *(uint *)((long)param_1 + 0x145c);
  if ((uVar28 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x145c) = uVar28 & 0xffff8000 | uVar28 & 0x7f | 0x6600;
    FUN_0091ada4(plVar3);
  }
  FUN_00f13f08(0x44c58000,0x44020000,plVar3);
  if ((*(float *)(param_1 + 0x285) != 0.5) || (*(float *)((long)param_1 + 0x142c) != 0.5)) {
    param_1[0x285] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0d9a4(plVar4,0);
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9cd8,&DAT_01bee7fa);
  FUN_00ac5da8(plVar2,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10);
  uVar35 = FUN_0093d880();
  if ((uVar35 & 1) != 0) {
    FUN_00f0e578(param_1 + 0x35a,"edit_handle");
    *(uint *)((long)param_1 + 0x1a64) = *(uint *)((long)param_1 + 0x1a64) & 0xfffffffb;
    FUN_00b09144(0x3ecccccd,plVar5);
    uVar28 = *(uint *)((long)param_1 + 0x167c);
    if ((uVar28 & 0x7f80) != 0x4c80) {
      *(uint *)((long)param_1 + 0x167c) = uVar28 & 0xffff8000 | uVar28 & 0x7f | 0x4c80;
      FUN_0091ada4(plVar5);
    }
    uVar29 = DAT_03210c64;
    local_c0 = thunk_FUN_00b41400;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b0 = (void *)0x0;
    plStack_b8 = param_1;
    local_98 = uVar29;
    FUN_009693a0(param_1 + 0x2c0,&local_c0);
    FUN_00b0914c(plVar5,1);
    FUN_00f0e578(param_1 + 0x419,"edit_handle");
    *(uint *)((long)param_1 + 0x205c) = *(uint *)((long)param_1 + 0x205c) & 0xfffffffb;
    FUN_00b09144(0x3ecccccd,plVar6);
    uVar28 = *(uint *)((long)param_1 + 0x1c74);
    if ((uVar28 & 0x7f80) != 0x4c80) {
      *(uint *)((long)param_1 + 0x1c74) = uVar28 & 0xffff8000 | uVar28 & 0x7f | 0x4c80;
      FUN_0091ada4(plVar6);
    }
    local_c0 = thunk_FUN_00b41478;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b0 = (void *)0x0;
    plStack_b8 = param_1;
    local_98 = uVar29;
    FUN_009693a0(param_1 + 0x37f,&local_c0);
    FUN_00b0914c(plVar6,1);
  }
  FUN_00b0a930(0x44480000,0x42580000,plVar13,0,100,0,0);
  uVar36 = FUN_00d6eb50();
  uVar36 = FUN_00d6eb5c(uVar36,"*KindredMenuGuildBannerMesh*");
  FUN_00af9124(plVar8,uVar36);
  *(uint *)((long)param_1 + 0x2324) = *(uint *)((long)param_1 + 0x2324) | 4;
  FUN_00af9aa0(plVar8,"GUILD_BANNERS");
  local_98 = DAT_03210f60;
  *(uint *)((long)param_1 + 0x2804) = *(uint *)((long)param_1 + 0x2804) | 0x10;
  local_c0 = FUN_00b3ee18;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = (void *)0x0;
  plStack_b8 = param_1;
  FUN_009693a0(param_1 + 0x4f1,&local_c0);
  local_c0 = FUN_00b3ee18;
  local_98 = DAT_03210f8c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = (void *)0x0;
  plStack_b8 = param_1;
  FUN_009693a0(param_1 + 0x4f1,&local_c0);
  local_c0 = (code *)CONCAT44(local_c0._4_4_,0xffe3e9f0);
  FUN_00f0d92c(plVar9,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce0,&local_c0);
  FUN_00f0da30(plVar9,1);
  local_c0 = (code *)NEON_fmov(0x40800000,4);
  FUN_00f0da8c(plVar9,&local_c0);
  local_c0 = (code *)CONCAT44(local_c0._4_4_,0xff464d4f);
  FUN_00f0da80(plVar9,&local_c0);
  uVar28 = *(uint *)((long)param_1 + 0x26d4);
  if ((uVar28 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x26d4) = uVar28 & 0xffff8000 | uVar28 & 0x7f | 0x6600;
    FUN_0091ada4(plVar9);
  }
  FUN_00b0b848(0x3fef684c,plVar13,"xp_bar_current","xp_bar_new");
  *(undefined2 *)(param_1 + 0x8e2) = 0;
  FUN_00f0e548(plVar14,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_fuzzy_dot");
  uVar28 = *(uint *)((long)param_1 + 0x479c);
  if ((~uVar28 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x479c) = uVar28 | 0x7f80;
    FUN_0091ada4(plVar14);
  }
  FUN_00f13f08(0x43960000,0x43820000,plVar14);
  if ((*(float *)(param_1 + 0x8ed) != 0.5) || (*(float *)((long)param_1 + 0x476c) != 0.5)) {
    param_1[0x8ed] = 0x3f0000003f000000;
    FUN_0091ada4(plVar14);
  }
  FUN_00f0d92c(plVar15,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
  FUN_00f0e548(plVar11,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_fuzzy_dot");
  uVar28 = *(uint *)((long)param_1 + 0x3264);
  if ((uVar28 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x3264) = uVar28 & 0xffff8000 | uVar28 & 0x7f | 0x6600;
    FUN_0091ada4(plVar11);
  }
  FUN_00f13f08(0x43960000,0x43820000,plVar11);
  if ((*(float *)(param_1 + 0x646) != 0.5) || (*(float *)((long)param_1 + 0x3234) != 0.5)) {
    param_1[0x646] = 0x3f0000003f000000;
    FUN_0091ada4(plVar11);
  }
  FUN_00f0d92c(plVar12,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
  FUN_00f0da30(plVar12,1);
  local_c0 = (code *)0x4000000040000000;
  FUN_00f0da8c(plVar12,&local_c0);
  local_c0 = (code *)CONCAT44(local_c0._4_4_,0xff323232);
  FUN_00f0da80(plVar12,&local_c0);
  FUN_00f0e578(param_1 + 0x618,"circle_button_question");
  uVar28 = *(uint *)((long)param_1 + 0x2c6c);
  if ((uVar28 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x2c6c) = uVar28 & 0xffff8000 | uVar28 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar10);
  }
  FUN_00b09144(0xbf800000,plVar10);
  uVar29 = DAT_03210c64;
  local_c0 = thunk_FUN_00b4181c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = (void *)0x0;
  plStack_b8 = param_1;
  local_98 = uVar29;
  FUN_009693a0(param_1 + 0x57e,&local_c0);
  FUN_00b0914c(plVar10,1);
  FUN_00b3ee24(0x3f23d70a,plVar18);
  local_98 = FUN_00f048a4("UI::EVENT_MENU_OPEN_CHEST");
  local_c0 = thunk_FUN_00b41fe4;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = (void *)0x0;
  plStack_b8 = param_1;
  FUN_009693a0(param_1 + 0x965,&local_c0);
  FUN_00b028dc(plVar18,0);
  FUN_008fa54c(&local_c0,"guild");
  FUN_00b01884(plVar18,&local_c0);
  if (((ulong)local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  FUN_008fa54c(&local_c0,"IDLE_CLOSED");
  FUN_00b013a0(0x3f333333,plVar18,&local_c0);
  if (((ulong)local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  ppuVar27 = &PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20;
  if ((uVar34 & 1) == 0) {
    ppuVar27 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  }
  FUN_00f0d92c(plVar17,*ppuVar27,&DAT_01bee7fa);
  uVar28 = *(uint *)((long)param_1 + 0x4a74);
  if ((uVar28 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x4a74) = uVar28 & 0xffff8000 | uVar28 & 0x7f | 0x6600;
    FUN_0091ada4(plVar17);
  }
  FUN_00f0da30(plVar17,1);
  uVar36 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_REWARD_CHEST_TITLE",0);
  FUN_00f0d75c(plVar17,uVar36);
  FUN_00f0e578(param_1 + 0xb3f,"circle_button_question");
  uVar28 = *(uint *)((long)param_1 + 0x55a4);
  if ((uVar28 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x55a4) = uVar28 & 0xffff8000 | uVar28 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar19);
  }
  FUN_00b09144(0xbf800000,plVar19);
  local_c0 = thunk_FUN_00b420b0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = (void *)0x0;
  plStack_b8 = param_1;
  local_98 = uVar29;
  FUN_009693a0(param_1 + 0xaa5,&local_c0);
  fVar38 = DAT_02be3668;
  if ((uVar34 & 1) == 0) {
    fVar38 = 1.0;
  }
  fVar38 = fVar38 * 0.7;
  if ((*(float *)(param_1 + 0xaad) != fVar38) || (*(float *)((long)param_1 + 0x556c) != fVar38)) {
    *(float *)(param_1 + 0xaad) = fVar38;
    *(float *)((long)param_1 + 0x556c) = fVar38;
    FUN_0091ada4(plVar19);
  }
  FUN_00b0914c(plVar19,1);
  uVar36 = FUN_00e6ce7c("GENERIC_DIALOG_OPEN",0);
  FUN_00ab703c(0x41c00000,0x438c0000,0x445c0000,plVar20,0,uVar36,&DAT_01bee7fa,&DAT_03218ef8,0);
  FUN_00ab7628(0x42ef3333,plVar20);
  FUN_00f0d92c(param_1 + 0xc47,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  local_98 = DAT_03210c90;
  local_c0 = thunk_FUN_00b41fe4;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = (void *)0x0;
  plStack_b8 = param_1;
  FUN_009693a0(param_1 + 0xb64,&local_c0);
  FUN_00ab95f4(0,plVar20);
  FUN_00b0914c(plVar20,1);
  ppuVar27 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar34 & 1) == 0) {
    ppuVar27 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(plVar21,*ppuVar27);
  uVar28 = *(uint *)((long)param_1 + 0x800c);
  if ((uVar28 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x800c) = uVar28 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar21);
  }
  ppuVar27 = &PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20;
  ppuVar31 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0;
  uVar32 = 0x43380000;
  uVar33 = 0x44480000;
  if ((uVar34 & 1) == 0) {
    ppuVar27 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
    ppuVar31 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
    uVar32 = 0x4300cccd;
    uVar33 = 0x43dc0000;
  }
  FUN_00f0dad0(uVar33,plVar21,1);
  FUN_00f0dac8(plVar21,3);
  uVar36 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_JOIN",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x44960000,plVar22,0,uVar36,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_c0 = thunk_FUN_00b414f0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = (void *)0x0;
  plStack_b8 = param_1;
  local_98 = uVar29;
  FUN_009693a0(param_1 + 0x1018,&local_c0);
  FUN_00f0d378(param_1 + 0x10fb,*ppuVar31);
  FUN_00ab7628(uVar32,plVar22);
  FUN_00b0914c(plVar22,1);
  FUN_00f0d378(plVar24,*ppuVar27);
  uVar36 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_PRIMETIME_TITLE",0);
  FUN_00f0d75c(plVar24,uVar36);
  uVar28 = *(uint *)((long)param_1 + 0x97c4);
  if ((uVar28 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x97c4) = uVar28 & 0xffff8000 | uVar28 & 0x7f | 0x5900;
    FUN_0091ada4(plVar24);
  }
  FUN_00f0dac8(plVar24,3);
  ppuVar27 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar34 & 1) == 0) {
    ppuVar27 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d378(plVar25,*ppuVar27);
  uVar36 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_PRIMETIME_LABEL",0);
  FUN_00f0d75c(plVar25,uVar36);
  uVar28 = *(uint *)((long)param_1 + 0x98f4);
  if ((uVar28 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x98f4) = uVar28 & 0xffff8000 | uVar28 & 0x7f | 0x5900;
    FUN_0091ada4(plVar25);
  }
  FUN_00f0dac8(plVar25,3);
  FUN_00f0dad0(0x43fa0000,plVar25,1);
  ppuVar27 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar34 & 1) == 0) {
    ppuVar27 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  }
  FUN_00f0d378(plVar26,*ppuVar27);
  FUN_00f0dac8(plVar26,3);
  local_98 = FUN_00f048a4("UI::EVENT_EDIT_GUILD");
  plVar1 = param_1 + 0x135b;
  local_c0 = FUN_00b3eeb4;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = (void *)0x0;
  plStack_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_98 = FUN_00f048a4("UI::EVENT_GUILD_JOIN");
  local_c0 = thunk_FUN_00b414f0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = (void *)0x0;
  plStack_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_98 = FUN_00f048a4("UI::EVENT_GUILD_DECLINE");
  local_c0 = FUN_00b3eee4;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = (void *)0x0;
  plStack_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_98 = FUN_00f048a4("UI::EVENT_EXPAND_GUILD_SETTINGS");
  local_c0 = FUN_00b3ef24;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = (void *)0x0;
  plStack_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_98 = FUN_00f048a4("UI::EVENT_COLLAPSE_GUILD_SETTINGS");
  local_c0 = FUN_00b3ef2c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = (void *)0x0;
  plStack_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  FUN_00af603c(param_1 + 0x2ee5,&DAT_01bb3780);
  local_98 = FUN_00f048a4("UI::GUILD_SETTINGS_CHANGED");
  local_c0 = FUN_00b3ef34;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = (void *)0x0;
  plStack_b8 = param_1;
  FUN_009693a0(param_1 + 0x2ee6,&local_c0);
  FUN_008fa54c(local_d8,"MENU_NEWS_FEED_TAB_NAME_GUILD_DETAILS");
  FUN_00b3605c(param_1 + 0x6a02,local_d8);
  local_98 = FUN_00f048a4("UI::EVENT_FEED_SIZE_UPDATE");
  local_c0 = thunk_FUN_00b42364;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = (void *)0x0;
  plStack_b8 = param_1;
  FUN_009693a0(param_1 + 0x6a03,&local_c0);
  if ((local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  if (*(long *)(lVar30 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

