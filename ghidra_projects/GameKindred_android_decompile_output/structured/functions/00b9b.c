// functions/00b9b — 4 functions
#include "libGameKindred.h"




void FUN_00b9b754(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  size_t sVar5;
  long lVar6;
  ushort uVar7;
  long lVar8;
  ushort *puVar9;
  char *__s;
  ulong uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_194 [4];
  float local_190;
  undefined1 auStack_18c [4];
  long local_188;
  void *local_180;
  undefined8 local_178;
  void *local_170;
  undefined **local_168;
  undefined1 auStack_160 [16];
  long local_150;
  code *pcStack_148;
  long local_138;
  undefined8 local_118;
  void *local_110;
  byte local_108;
  void *local_f8;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  ulong local_b8;
  void *local_b0;
  byte local_a8;
  undefined7 uStack_a7;
  void *local_98;
  undefined4 local_90;
  undefined8 local_8c;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  if (param_2 != 0) {
    FUN_00b26098(&local_168);
    uVar3 = FUN_00e6ce7c("MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TITLE",0);
    thunk_FUN_00e7051c(&local_178,uVar3);
    thunk_FUN_00e7051c(&local_b8,&local_178);
    FUN_008fcdb8(&local_a8,&DAT_0320ffa8);
    local_90 = 0;
    local_8c = 0xc120000041000000;
    FUN_009c82b4(auStack_160,&local_b8);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_b0 != (void *)0x0) {
      operator_delete__(local_b0);
      local_b8 = 0;
      local_b0 = (void *)0x0;
    }
    uVar10 = (ulong)*(uint *)(param_2 + 0x3cb0);
    if (*(uint *)(param_2 + 0x3cb0) != 0) {
      lVar8 = 0;
      do {
        thunk_FUN_00e7051c(&local_188,*(long *)(param_2 + 0x3cb8) + lVar8);
        uVar4 = FUN_00e70b34(&local_188,param_2 + 0x3ce0);
        if ((uVar4 & 1) == 0) {
          thunk_FUN_00e7051c(&local_b8,&local_188);
          FUN_008fcdb8(&local_a8,&DAT_0320ffa8);
          local_90 = 1;
          local_8c = 0x41f0000041000000;
          FUN_009c82b4(auStack_160,&local_b8);
          if ((local_a8 & 1) != 0) {
            operator_delete(local_98);
          }
          if (local_b0 != (void *)0x0) {
            operator_delete__(local_b0);
            local_b8 = 0;
            local_b0 = (void *)0x0;
          }
        }
        if (local_180 != (void *)0x0) {
          operator_delete__(local_180);
          local_188 = 0;
          local_180 = (void *)0x0;
        }
        uVar10 = uVar10 - 1;
        lVar8 = lVar8 + 0x10;
      } while (uVar10 != 0);
      thunk_FUN_00e7051c(&local_b8,param_2 + 0x3ce0);
      FUN_008fcdb8(&local_a8,&DAT_0320ffa8);
      local_90 = 1;
      local_8c = 0x41f0000041000000;
      FUN_009c82b4(auStack_160,&local_b8);
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
      if (local_b0 != (void *)0x0) {
        operator_delete__(local_b0);
        local_b8 = 0;
        local_b0 = (void *)0x0;
      }
    }
    FUN_008fa54c(&local_b8,"friendInMatchInformation");
    if ((*(byte *)(param_2 + 0x3d80) & 1) == 0) {
      __s = (char *)(param_2 + 0x3d81);
    }
    else {
      __s = *(char **)(param_2 + 0x3d90);
    }
    sVar5 = strlen(__s);
    FUN_0090de84(&local_b8,__s,sVar5);
    local_138 = param_2 + 0xb8;
    local_c0 = 3;
    uVar10 = FUN_0092ea9c();
    local_d4 = 0x44160000;
    if ((uVar10 & 1) == 0) {
      local_d4 = 0x44100000;
    }
    uVar10 = FUN_0093d810();
    if ((uVar10 & 1) != 0) {
      uVar3 = FUN_00e6ce7c("MENU_FRIENDS_SPECTATE",0);
      FUN_00910394(&local_118,uVar3);
      pcStack_148 = FUN_00b9fd10;
      local_150 = param_1;
    }
    uVar2 = FUN_0092e8e0();
    FUN_00a9bd24(param_1,uVar2 & 1,auStack_18c,&local_190,auStack_194);
    lVar8 = FUN_00965ecc(param_2);
    fVar12 = *(float *)(lVar8 + 0xc);
    lVar6 = FUN_00965ecc(param_1);
    lVar8 = DAT_03210d00;
    fVar11 = local_190 - *(float *)(param_1 + 0x12654);
    fVar12 = (fVar12 / *(float *)(lVar6 + 0x14) + DAT_0313a260 * 0.5) - fVar11;
    if (0.0 < fVar12) {
      uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar7 == 0xffff) {
        puVar9 = (ushort *)0x0;
      }
      else {
        puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
        if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar9;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
        *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
        FUN_00efd6a4(puVar9);
        *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
      }
      FUN_00efcac4(0x3dcccccd,puVar9);
      local_188 = (ulong)(uint)-fVar12 << 0x20;
      FUN_00efd6ec(puVar9,&local_188);
      FUN_00f022a0(param_1 + 0x38b0,puVar9);
      fVar11 = local_190 - *(float *)(param_1 + 0x12654);
    }
    local_c4 = 0;
    lVar8 = FUN_00965ecc(param_1);
    local_c8 = (fVar11 + -16.0) * *(float *)(lVar8 + 0x14);
    local_d8 = 0x3e051eb8;
    if ((param_3 & 1) == 0) {
      FUN_00b28094(param_1 + 0x12448,&local_b8,&local_168);
    }
    else {
      FUN_00b281f8();
    }
    if ((local_b8 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_a7,local_a8));
    }
    if (local_170 != (void *)0x0) {
      operator_delete__(local_170);
      local_178 = 0;
      local_170 = (void *)0x0;
    }
    local_168 = &PTR_FUN_027de7f0;
    if ((local_108 & 1) != 0) {
      operator_delete(local_f8);
    }
    if (local_110 != (void *)0x0) {
      operator_delete__(local_110);
      local_110 = (void *)0x0;
      local_118 = 0;
    }
    FUN_009c8464(auStack_160,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b9bc0c(long param_1)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ushort uVar7;
  ushort *puVar8;
  
  puVar1 = (uint *)(param_1 + 0x1213c);
  uVar6 = *puVar1;
  param_1 = param_1 + 0x120b8;
  if ((uVar6 & 0x7f80) != 0) {
    *puVar1 = uVar6 & 0xffff807f;
    FUN_0091ada4(param_1);
    uVar6 = *puVar1;
  }
  *puVar1 = uVar6 | 4;
  uVar3 = FUN_00efee28(0x3f800000,0x3ecccccd,FUN_0091aa80);
  uVar4 = FUN_00efed6c(0x40000000);
  uVar5 = FUN_00efee28(0,0x3f800000,FUN_009a71a4);
  lVar2 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_02825148;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00f01980(param_1);
  FUN_00f02308(param_1,uVar3,uVar4,uVar5,puVar8,0);
  return;
}




void FUN_00b9bd80(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(long **)(param_1 + 0x11fb0) == (long *)0x0) ||
     (iVar2 = (**(code **)(**(long **)(param_1 + 0x11fb0) + 0x40))(), iVar2 != 2)) {
    FUN_008fce60(param_1 + 0x125e0,&DAT_0320ffa8);
    FUN_008fce60(param_1 + 0x125f8,&DAT_0320ffa8);
    lVar3 = FUN_00b9be84(param_1,param_1 + 0x125c8,0);
    FUN_00ac0980(param_1 + 0xdf40,lVar3 == 0);
  }
  FUN_00e70570(&local_48,&DAT_0320ffa8);
  FUN_00910394(param_1 + 0x125b8,&local_48);
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




long FUN_00b9be84(long *param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *__s2;
  byte *pbVar9;
  long lVar10;
  void *__s1;
  long lVar11;
  ulong uVar12;
  long lVar13;
  byte *local_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_78 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_78 = param_2 + 1;
  }
  pbVar7 = (byte *)FUN_00b97198(param_1 + 0x24b0,&local_78);
  if (pbVar7 == (byte *)0x0) {
    FUN_00e70510(&local_78);
    (**(code **)(*param_1 + 0x1d8))(param_1,param_2,&local_78);
    if (*(uint *)(param_1 + 0x2410) != 0) {
      uVar12 = 0;
      do {
        uVar8 = FUN_00e70b34(*(long *)(param_1[0x2411] + uVar12 * 8) + 0x3ce0,&local_78);
        if ((uVar8 & 1) != 0) {
          lVar11 = *(long *)(param_1[0x2411] + uVar12 * 8);
          *(undefined1 *)((long)param_1 + 0x1266b) = 1;
          if (lVar11 != 0) goto LAB_00b9c21c;
          break;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(param_1 + 0x2410));
    }
    if (*(uint *)(param_1 + 0x2414) != 0) {
      uVar12 = 0;
      do {
        uVar8 = FUN_00e70b34(*(long *)(param_1[0x2415] + uVar12 * 8) + 0x3ce0,&local_78);
        if ((uVar8 & 1) != 0) {
          lVar11 = *(long *)(param_1[0x2415] + uVar12 * 8);
          *(undefined1 *)((long)param_1 + 0x1266d) = 1;
          if (lVar11 != 0) goto LAB_00b9c21c;
          break;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(param_1 + 0x2414));
    }
    if (*(uint *)(param_1 + 0x2412) != 0) {
      uVar12 = 0;
      do {
        uVar8 = FUN_00e70b34(*(long *)(param_1[0x2413] + uVar12 * 8) + 0x3ce0,&local_78);
        if ((uVar8 & 1) != 0) {
          lVar11 = *(long *)(param_1[0x2413] + uVar12 * 8);
          *(undefined1 *)((long)param_1 + 0x1266c) = 1;
          if (lVar11 != 0) goto LAB_00b9c21c;
          break;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(param_1 + 0x2412));
    }
    if (*(uint *)(param_1 + 0x240a) != 0) {
      uVar12 = 0;
      do {
        uVar8 = FUN_00e70b34(*(long *)(param_1[0x240b] + uVar12 * 8) + 0x3ce0,&local_78);
        if ((uVar8 & 1) != 0) {
          lVar11 = *(long *)(param_1[0x240b] + uVar12 * 8);
          *(undefined1 *)((long)param_1 + 0x1266e) = 1;
          if (lVar11 != 0) goto LAB_00b9c21c;
          break;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(param_1 + 0x240a));
    }
    if ((*(char *)((long)param_1 + 0x1266f) != '\0') && (*(uint *)(param_1 + 0x240e) != 0)) {
      uVar12 = 0;
      do {
        uVar8 = FUN_00e70b34(*(long *)(param_1[0x240f] + uVar12 * 8) + 0x3ce0,&local_78);
        if ((uVar8 & 1) != 0) {
          lVar11 = *(long *)(param_1[0x240f] + uVar12 * 8);
          goto LAB_00b9c21c;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(param_1 + 0x240e));
    }
    lVar11 = 0;
LAB_00b9c21c:
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
      local_78 = (byte *)0x0;
      local_70 = (void *)0x0;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x2410);
    if (uVar2 != 0) {
      bVar3 = *pbVar7;
      lVar13 = param_1[0x2411];
      uVar12 = 0;
      __n = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        __n = *(size_t *)(pbVar7 + 8);
      }
      do {
        lVar11 = *(long *)(lVar13 + uVar12 * 8);
        bVar4 = *(byte *)(lVar11 + 0x3d80);
        sVar1 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar1 = *(size_t *)(lVar11 + 0x3d88);
        }
        if (sVar1 == __n) {
          __s1 = *(void **)(lVar11 + 0x3d90);
          if ((bVar4 & 1) == 0) {
            __s1 = (void *)(lVar11 + 0x3d81);
          }
          __s2 = pbVar7 + 1;
          if ((bVar3 & 1) != 0) {
            __s2 = *(byte **)(pbVar7 + 0x10);
          }
          if ((bVar4 & 1) == 0) {
            if (__n == 0) {
LAB_00b9c034:
              *(undefined1 *)((long)param_1 + 0x1266b) = 1;
              goto LAB_00b9c22c;
            }
            pbVar9 = (byte *)(lVar11 + 0x3d81);
            lVar10 = -(ulong)(bVar4 >> 1);
            while (*pbVar9 == *__s2) {
              pbVar9 = pbVar9 + 1;
              lVar10 = lVar10 + 1;
              __s2 = __s2 + 1;
              if (lVar10 == 0) goto LAB_00b9c034;
            }
          }
          else if ((__n == 0) || (iVar6 = memcmp(__s1,__s2,__n), iVar6 == 0)) goto LAB_00b9c034;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar2);
    }
    lVar11 = 0;
  }
LAB_00b9c22c:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar11;
}

