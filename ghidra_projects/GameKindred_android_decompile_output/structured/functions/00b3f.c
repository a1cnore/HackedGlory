// functions/00b3f — 10 functions
#include "libGameKindred.h"




void FUN_00b3f690(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027eac08;
  FUN_00936630(param_1 + 0x3aee);
  FUN_00936630(param_1 + 0x3ad1);
  FUN_009c7fa8(param_1 + 0x3819);
  FUN_00f13d08(param_1 + 0x3802);
  lVar2 = -0xb8b0;
  puVar1 = param_1 + 0x3050;
  do {
    FUN_00b43b98(puVar1);
    lVar2 = lVar2 + 0x3d90;
    puVar1 = puVar1 + -0x7b2;
  } while (lVar2 != 0);
  puVar1 = param_1 + 0x1b6a;
  *puVar1 = &PTR_FUN_027e1260;
  FUN_00ac848c(param_1 + 0x1bc5);
  FUN_00f0d3a4(param_1 + 0x1b9f);
  *puVar1 = &PTR_FUN_027ead80;
  param_1[0x1b81] = &PTR_FUN_028266f0;
  param_1[0x1b98] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1b9b);
  FUN_00f13d08(param_1 + 0x1b81);
  FUN_00f13d08(puVar1);
  puVar1 = param_1 + 0x1486;
  *puVar1 = &PTR_FUN_027e13a8;
  FUN_00b03c00(param_1 + 0x14e1);
  FUN_00f0d3a4(param_1 + 0x14bb);
  *puVar1 = &PTR_FUN_027ead80;
  param_1[0x149d] = &PTR_FUN_028266f0;
  param_1[0x14b4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x14b7);
  FUN_00f13d08(param_1 + 0x149d);
  FUN_00f13d08(puVar1);
  param_1[0xda2] = &PTR_FUN_027e13a8;
  FUN_00b03c00(param_1 + 0xdfd);
  FUN_00f0d3a4(param_1 + 0xdd7);
  param_1[0xda2] = &PTR_FUN_027ead80;
  param_1[0xdb9] = &PTR_FUN_028266f0;
  param_1[0xdd0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xdd3);
  FUN_00f13d08(param_1 + 0xdb9);
  FUN_00f13d08(param_1 + 0xda2);
  param_1[0x820] = &PTR_FUN_027e1260;
  FUN_00ac848c(param_1 + 0x87b);
  FUN_00f0d3a4(param_1 + 0x855);
  param_1[0x820] = &PTR_FUN_027ead80;
  param_1[0x837] = &PTR_FUN_028266f0;
  param_1[0x84e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x851);
  FUN_00f13d08(param_1 + 0x837);
  FUN_00f13d08(param_1 + 0x820);
  param_1[0x13c] = &PTR_FUN_027e13a8;
  FUN_00b03c00(param_1 + 0x197);
  FUN_00f0d3a4(param_1 + 0x171);
  param_1[0x13c] = &PTR_FUN_027ead80;
  param_1[0x153] = &PTR_FUN_028266f0;
  param_1[0x16a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x16d);
  FUN_00f13d08(param_1 + 0x153);
  FUN_00f13d08(param_1 + 0x13c);
  *param_1 = &PTR_FUN_027da1e0;
  FUN_00f13d08(param_1 + 0x121);
  FUN_00f01868(param_1 + 0x110);
  FUN_00ed00e0(param_1 + 0x69);
  FUN_00f13d08(param_1 + 0x52);
  param_1[0x34] = &PTR_FUN_028266f0;
  param_1[0x4b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4e);
  FUN_00f13d08(param_1 + 0x34);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b3f95c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e0fd0;
  FUN_00af8c0c(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b3f990(long param_1)

{
  FUN_00b3efe0(param_1 + -200);
  return;
}




void FUN_00b3f998(long param_1)

{
  FUN_00b3efe0(param_1 + -0xe0);
  return;
}




void FUN_00b3f9a0(void *param_1)

{
  FUN_00b3efe0();
  operator_delete(param_1);
  return;
}




void FUN_00b3f9c4(long param_1)

{
  FUN_00b3efe0((void *)(param_1 + -200));
  operator_delete((void *)(param_1 + -200));
  return;
}




void FUN_00b3f9ec(long param_1)

{
  FUN_00b3efe0((void *)(param_1 + -0xe0));
  operator_delete((void *)(param_1 + -0xe0));
  return;
}




void FUN_00b3fa14(void)

{
  return;
}




void FUN_00b3fa18(long param_1,uint param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  void *pvVar13;
  byte *pbVar14;
  
  if ((*(float *)(param_1 + 0x2d8) != 0.0) || (*(float *)(param_1 + 0x2dc) != 0.0)) {
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    FUN_0091ada4(param_1 + 0x298);
  }
  FUN_00f01980(param_1 + 0x22a0);
  if ((param_2 & 1) == 0) {
    FUN_00b359dc(param_1 + 0x35010,0);
    uVar9 = 0;
    goto LAB_00b3fc9c;
  }
  pbVar12 = (byte *)(param_1 + 0x353f0);
  bVar3 = *pbVar12;
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x353f8);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar1 == sVar2) {
    pvVar13 = *(void **)(param_1 + 0x35400);
    if ((bVar3 & 1) == 0) {
      pvVar13 = (void *)(param_1 + 0x353f1);
    }
    pbVar14 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar14 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        lVar11 = -(ulong)(bVar3 >> 1);
        pbVar10 = pbVar12;
        do {
          pbVar10 = pbVar10 + 1;
          if (*pbVar10 != *pbVar14) goto LAB_00b3fb38;
          lVar11 = lVar11 + 1;
          pbVar14 = pbVar14 + 1;
        } while (lVar11 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar6 = memcmp(pvVar13,pbVar14,sVar1), iVar6 != 0)) goto LAB_00b3fb38;
  }
  else {
LAB_00b3fb38:
    uVar7 = FUN_009580c4();
    if ((uVar7 & 1) != 0) {
      uVar8 = FUN_009580b8();
      FUN_0095e21c(uVar8,pbVar12,0);
    }
  }
  uVar8 = FUN_0093618c();
  FUN_00b3fcfc(param_1,uVar8);
  if (*(char *)(param_1 + 0x3543a) == '\0') goto LAB_00b3fc58;
  lVar11 = FUN_009580b8();
  if ((int)*(uint *)(lVar11 + 0x5634) < 0) {
LAB_00b3fc3c:
    bVar5 = false;
  }
  else {
    bVar5 = false;
    if (*(int *)(*(long *)(lVar11 + 0x5268) + (ulong)*(uint *)(lVar11 + 0x5634) * 0x108 + 0x50) == 4
       ) {
      lVar11 = FUN_009580b8();
      bVar3 = *pbVar12;
      bVar4 = *(byte *)(lVar11 + 0x5478);
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(param_1 + 0x353f8);
      }
      sVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar2 = *(size_t *)(lVar11 + 0x5480);
      }
      bVar5 = false;
      if (sVar1 == sVar2) {
        pvVar13 = *(void **)(param_1 + 0x35400);
        pbVar14 = *(byte **)(lVar11 + 0x5488);
        if ((bVar3 & 1) == 0) {
          pvVar13 = (void *)(param_1 + 0x353f1);
        }
        if ((bVar4 & 1) == 0) {
          pbVar14 = (byte *)(lVar11 + 0x5479);
        }
        if ((bVar3 & 1) == 0) {
          if (sVar1 == 0) {
LAB_00b3fc58:
            bVar5 = true;
          }
          else {
            lVar11 = -(ulong)(bVar3 >> 1);
            do {
              pbVar12 = pbVar12 + 1;
              if (*pbVar12 != *pbVar14) goto LAB_00b3fc3c;
              pbVar14 = pbVar14 + 1;
              lVar11 = lVar11 + 1;
              bVar5 = true;
            } while (lVar11 != 0);
          }
        }
        else {
          if (sVar1 == 0) goto LAB_00b3fc58;
          iVar6 = memcmp(pvVar13,pbVar14,sVar1);
          bVar5 = iVar6 == 0;
        }
      }
    }
  }
  FUN_00ad489c(param_1 + 0x9ad0,bVar5);
  FUN_00b40294(param_1);
  FUN_00b359dc(param_1 + 0x35010,1);
  uVar9 = (uint)(0 < *(int *)(param_1 + 0x35430)) << 2;
LAB_00b3fc9c:
  *(uint *)(param_1 + 0x2324) = *(uint *)(param_1 + 0x2324) & 0xfffffffb | uVar9;
  *(uint *)(param_1 + 0x4ba4) =
       *(uint *)(param_1 + 0x4ba4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x4ba4) & 3 | (param_2 & 1) << 2;
  if ((param_2 & 1) != 0) {
    return;
  }
  FUN_00bba958(param_1 + 0x17728,0);
  return;
}




void FUN_00b3fcfc(long param_1,long param_2)

{
  byte *pbVar1;
  size_t sVar2;
  size_t sVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  void *pvVar14;
  ulong local_80;
  void *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  lVar9 = FUN_009b8d90();
  bVar5 = *(byte *)(lVar9 + 0xe1b8);
  uVar11 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar11 = *(ulong *)(lVar9 + 0xe1c0);
  }
  if ((uVar11 == 10) &&
     (uVar10 = FUN_0090d610((byte *)(lVar9 + 0xe1b8),0,0xffffffffffffffff,"guildChest",10),
     (int)uVar10 == 0)) goto LAB_00b40268;
  pbVar1 = (byte *)(param_1 + 0x3543a);
  if (*pbVar1 == 0) {
    uVar10 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_MEMBERS_ONLY",0);
    FUN_00f0d75c(param_1 + 0x7f88,uVar10);
    *(uint *)(param_1 + 0x800c) = *(uint *)(param_1 + 0x800c) | 4;
  }
  else {
    if ((*(int *)(param_2 + 8) == 0) || (*(uint *)(param_2 + 0x10) <= *(uint *)(param_2 + 0xc))) {
      if (*(uint *)(param_2 + 0xc) < *(uint *)(param_2 + 0x10)) {
        uVar10 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_NEXT_LEVEL_CHEST",0);
        thunk_FUN_00e7051c(&local_80,uVar10);
        FUN_00e70510(&local_58);
        FUN_00e70e18(&local_58,&DAT_01bb6d43,*(undefined4 *)(param_2 + 0x14));
        FUN_00e705c8(&local_68,"[LEVEL]");
        FUN_00e71248(&local_80,0,&local_68,&local_58);
        if (local_60 != (void *)0x0) {
          operator_delete__(local_60);
          local_68 = 0;
          local_60 = (void *)0x0;
        }
        FUN_00f0d75c(param_1 + 0x7f88,&local_80);
        *(uint *)(param_1 + 0x800c) =
             *(uint *)(param_1 + 0x800c) & 0xfffffff8 |
             *(uint *)(param_1 + 0x800c) & 3 | (uint)(*(int *)(param_2 + 0x14) != 0) << 2;
        bVar5 = *(byte *)(param_2 + 0x38);
        sVar2 = (ulong)(bVar5 >> 1);
        if ((bVar5 & 1) != 0) {
          sVar2 = *(size_t *)(param_2 + 0x40);
        }
        sVar3 = (ulong)(DAT_0320ffa8 >> 1);
        if ((DAT_0320ffa8 & 1) != 0) {
          sVar3 = DAT_0320ffb0;
        }
        if (sVar2 == sVar3) {
          pvVar14 = *(void **)(param_2 + 0x48);
          if ((bVar5 & 1) == 0) {
            pvVar14 = (void *)(param_2 + 0x39);
          }
          pcVar12 = DAT_0320ffb8;
          if ((DAT_0320ffa8 & 1) == 0) {
            pcVar12 = &DAT_0320ffa9;
          }
          if ((bVar5 & 1) == 0) {
            if (sVar2 != 0) {
              pcVar13 = (char *)(param_2 + 0x39);
              lVar9 = -(ulong)(bVar5 >> 1);
              do {
                if (*pcVar13 != *pcVar12) goto LAB_00b400a8;
                pcVar13 = pcVar13 + 1;
                lVar9 = lVar9 + 1;
                pcVar12 = pcVar12 + 1;
              } while (lVar9 != 0);
            }
          }
          else if ((sVar2 != 0) && (iVar7 = memcmp(pvVar14,pcVar12,sVar2), iVar7 != 0))
          goto LAB_00b400a8;
        }
        else {
LAB_00b400a8:
          lVar9 = FUN_00cce574();
          if (*(char *)(lVar9 + 0x20) != '\0') {
            FUN_00b015a0(param_1 + 0x4b20,(byte *)(param_2 + 0x38));
          }
        }
        FUN_0099cf94(param_1 + 0x35410,0);
        goto LAB_00b400d8;
      }
      uVar10 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_OPENED_MAX_CHESTS",0);
      thunk_FUN_00e7051c(&local_80,uVar10);
      FUN_00f0d75c(param_1 + 0x7f88,&local_80);
      FUN_0099cf94(param_1 + 0x35410,0);
    }
    else {
      FUN_0099cf94(param_1 + 0x35410);
      uVar10 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_NUM_CHESTS_AVAILABLE",0);
      thunk_FUN_00e7051c(&local_80,uVar10);
      FUN_00e70510(&local_58);
      FUN_00e70e18(&local_58,&DAT_01bb6d43,*(undefined4 *)(param_2 + 8));
      FUN_00e705c8(&local_68,"[NUM_CHESTS]");
      FUN_00e71248(&local_80,0,&local_68,&local_58);
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
        local_68 = 0;
        local_60 = (void *)0x0;
      }
      FUN_00f0d75c(param_1 + 0x7f88,&local_80);
      *(uint *)(param_1 + 0x800c) =
           *(uint *)(param_1 + 0x800c) & 0xfffffff8 |
           *(uint *)(param_1 + 0x800c) & 3 | (uint)(1 < *(uint *)(param_2 + 8)) << 2;
      bVar5 = *(byte *)(param_2 + 0x20);
      sVar2 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        sVar2 = *(size_t *)(param_2 + 0x28);
      }
      sVar3 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar3 = DAT_0320ffb0;
      }
      if (sVar2 == sVar3) {
        pvVar14 = *(void **)(param_2 + 0x30);
        if ((bVar5 & 1) == 0) {
          pvVar14 = (void *)(param_2 + 0x21);
        }
        pcVar12 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          pcVar12 = &DAT_0320ffa9;
        }
        if ((bVar5 & 1) == 0) {
          if (sVar2 != 0) {
            pcVar13 = (char *)(param_2 + 0x21);
            lVar9 = -(ulong)(bVar5 >> 1);
            do {
              if (*pcVar13 != *pcVar12) goto LAB_00b4007c;
              pcVar13 = pcVar13 + 1;
              lVar9 = lVar9 + 1;
              pcVar12 = pcVar12 + 1;
            } while (lVar9 != 0);
          }
        }
        else if ((sVar2 != 0) && (iVar7 = memcmp(pvVar14,pcVar12,sVar2), iVar7 != 0))
        goto LAB_00b4007c;
      }
      else {
LAB_00b4007c:
        lVar9 = FUN_00cce574();
        if (*(char *)(lVar9 + 0x20) != '\0') {
          FUN_00b015a0(param_1 + 0x4b20,(byte *)(param_2 + 0x20));
        }
      }
LAB_00b400d8:
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
    }
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
      local_80 = 0;
      local_78 = (void *)0x0;
    }
  }
  uVar8 = FUN_009367d0();
  uVar11 = FUN_00b433e0();
  lVar9 = param_1 + 0x4b20;
  if ((uVar11 & 1) == 0) {
    FUN_008fa54c(&local_80,"IDLE_CLOSED");
    FUN_00b013a0(0x3f333333,lVar9,&local_80);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    FUN_00b028dc(lVar9,0);
    uVar8 = 0;
    *(uint *)(param_1 + 0x5b9c) = *(uint *)(param_1 + 0x5b9c) & 0xffffffef;
  }
  else {
    pcVar12 = "IDLE_CLOSED";
    if ((uVar8 & 1) == 0) {
      pcVar12 = "IDLE_READY";
    }
    FUN_008fa54c(&local_80,pcVar12);
    FUN_00b013a0(0xbf800000,lVar9,&local_80);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    uVar8 = ~uVar8 & 1;
    FUN_00b028dc(lVar9,uVar8);
  }
  FUN_00b09454(param_1 + 0x5b18,uVar8);
  uVar8 = 0xf2;
  if (((*(byte *)(param_1 + 0x5d84) >> 4 & 1) == 0) && (uVar8 = 0xf2, *pbVar1 != 0)) {
    uVar8 = 0x7f;
  }
  uVar4 = *(uint *)(param_1 + 0x800c);
  if ((uVar4 >> 7 & 0xff) != uVar8) {
    *(uint *)(param_1 + 0x800c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | uVar8 << 7;
    FUN_0091ada4(param_1 + 0x7f88);
  }
  uVar8 = (uint)*pbVar1;
  if (*pbVar1 != 0) {
    if (*(int *)(param_2 + 0x14) == 0) {
      uVar8 = (uint)(0 < *(int *)(param_1 + 0x35428)) << 2;
    }
    else {
      uVar8 = 4;
    }
  }
  uVar10 = 1;
  *(uint *)(param_1 + 0x5b9c) = *(uint *)(param_1 + 0x5b9c) & 0xfffffffb | uVar8;
LAB_00b40268:
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}

