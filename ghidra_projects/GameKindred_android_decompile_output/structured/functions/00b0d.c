// functions/00b0d — 24 functions
#include "libGameKindred.h"




bool FUN_00b0d010(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined **local_d8;
  undefined1 auStack_d0 [16];
  byte local_c0 [16];
  void *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  byte local_78;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00975578(&local_d8);
  uVar3 = FUN_0096bf40(param_1 + 0x24b8,&local_d8);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    FUN_008fce60(param_2,local_c0);
    *(undefined8 *)(param_2 + 0x20) = uStack_a0;
    *(undefined8 *)(param_2 + 0x18) = local_a8;
    *(undefined8 *)(param_2 + 0x30) = uStack_90;
    *(undefined8 *)(param_2 + 0x28) = local_98;
    *(undefined8 *)(param_2 + 0x40) = uStack_80;
    *(undefined8 *)(param_2 + 0x38) = local_88;
  }
  local_d8 = &PTR_FUN_027bca90;
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
    local_50 = 0;
    local_48 = (void *)0x0;
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
    local_60 = 0;
    local_58 = (void *)0x0;
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  FUN_00977ea0(auStack_d0,1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00b0d110(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined **local_d8;
  undefined1 auStack_d0 [16];
  byte local_c0;
  void *local_b0;
  undefined1 auStack_a8 [48];
  byte local_78;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00975578(&local_d8);
  uVar3 = FUN_0096bf40(param_1 + 0x24b8,&local_d8);
  if ((uVar3 & 1) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_00cab944(auStack_a8);
  }
  local_d8 = &PTR_FUN_027bca90;
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
    local_50 = 0;
    local_48 = (void *)0x0;
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
    local_60 = 0;
    local_58 = (void *)0x0;
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  FUN_00977ea0(auStack_d0,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b0d1f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fcdb8(local_68);
  FUN_008fcdb8(local_50,param_3);
  FUN_00ae2124(param_1 + 0x2478,local_68);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b0d28c(long param_1)

{
  FUN_00ab9858();
  if (*(char *)(param_1 + 0x24f5) != '\0') {
    return;
  }
  FUN_00b0c58c(param_1);
  return;
}




void FUN_00b0d2c8(long *param_1,uint param_2)

{
  long *plVar1;
  
  FUN_00ab7ca8(param_1,param_2 & 1);
  (**(code **)(*param_1 + 0x168))(param_1);
  plVar1 = param_1 + 0x49a;
  if ((param_2 & 1) == 0) {
    plVar1 = param_1 + 0x49c;
  }
  FUN_00ab7498(param_1,plVar1);
  FUN_00b0cbbc(param_1);
  return;
}




void FUN_00b0d324(long param_1)

{
  size_t __n;
  size_t __n_00;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  size_t sVar13;
  size_t sVar14;
  ulong uVar15;
  byte local_98 [8];
  size_t local_90;
  char *local_88;
  byte local_80 [8];
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar9 = 0;
  if (*(int *)(param_1 + 0x2478) != 0) {
    uVar15 = 0;
    uVar9 = 1;
    pcVar10 = (char *)((ulong)local_98 | 1);
    do {
      FUN_008fcdb8(local_80,*(long *)(param_1 + 0x2480) + uVar15 * 0x30);
      FUN_008fcdb8(local_98,*(long *)(param_1 + 0x2480) + uVar15 * 0x30 + 0x18);
      sVar13 = local_78;
      bVar2 = local_80[0];
      bVar4 = DAT_0320ffa8;
      sVar14 = (size_t)(local_80[0] >> 1);
      __n = sVar14;
      if ((local_80[0] & 1) != 0) {
        __n = local_78;
      }
      __n_00 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        __n_00 = DAT_0320ffb0;
      }
      if (__n == __n_00) {
        pcVar12 = (char *)((ulong)local_80 | 1);
        if ((local_80[0] & 1) != 0) {
          pcVar12 = local_70;
        }
        pcVar8 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          pcVar8 = &DAT_0320ffa9;
        }
        if ((local_80[0] & 1) == 0) {
          if (__n != 0) {
            lVar11 = -sVar14;
            pcVar12 = (char *)((ulong)local_80 | 1);
            do {
              if (*pcVar12 != *pcVar8) goto LAB_00b0d444;
              pcVar12 = pcVar12 + 1;
              lVar11 = lVar11 + 1;
              pcVar8 = pcVar8 + 1;
            } while (lVar11 != 0);
          }
        }
        else if ((__n != 0) && (iVar5 = memcmp(pcVar12,pcVar8,__n), iVar5 != 0)) goto LAB_00b0d444;
      }
      else {
LAB_00b0d444:
        sVar1 = (ulong)(local_98[0] >> 1);
        if ((local_98[0] & 1) != 0) {
          sVar1 = local_90;
        }
        if (sVar1 == __n_00) {
          pcVar12 = pcVar10;
          if ((local_98[0] & 1) != 0) {
            pcVar12 = local_88;
          }
          pcVar8 = DAT_0320ffb8;
          if ((bVar4 & 1) == 0) {
            pcVar8 = &DAT_0320ffa9;
          }
          if ((local_98[0] & 1) == 0) {
            if (__n_00 != 0) {
              lVar11 = -(ulong)(local_98[0] >> 1);
              pcVar12 = pcVar10;
              do {
                if (*pcVar12 != *pcVar8) goto LAB_00b0d4c0;
                pcVar12 = pcVar12 + 1;
                lVar11 = lVar11 + 1;
                pcVar8 = pcVar8 + 1;
              } while (lVar11 != 0);
            }
          }
          else if ((__n_00 != 0) && (iVar5 = memcmp(pcVar12,pcVar8,__n_00), iVar5 != 0))
          goto LAB_00b0d4c0;
        }
        else {
LAB_00b0d4c0:
          if (__n == 4) {
            iVar5 = FUN_0090d610(local_80,0,0xffffffffffffffff,"hero",4);
            if (iVar5 != 0) {
              sVar14 = (size_t)(local_80[0] >> 1);
              sVar13 = local_78;
              bVar2 = local_80[0];
              goto LAB_00b0d4f8;
            }
            uVar7 = FUN_009580b8();
            pcVar12 = pcVar10;
            if ((local_98[0] & 1) != 0) {
              pcVar12 = local_88;
            }
            uVar6 = FUN_00961804(uVar7,pcVar12,1);
          }
          else {
LAB_00b0d4f8:
            if ((bVar2 & 1) != 0) {
              sVar14 = sVar13;
            }
            if (sVar14 == 4) {
              iVar5 = FUN_0090d610(local_80,0,0xffffffffffffffff,&DAT_01b9230f,4);
              uVar7 = FUN_009580b8();
              if (iVar5 == 0) {
                uVar6 = FUN_00961744(uVar7,local_98);
                goto LAB_00b0d57c;
              }
            }
            else {
              uVar7 = FUN_009580b8();
            }
            pcVar12 = pcVar10;
            if ((local_98[0] & 1) != 0) {
              pcVar12 = local_88;
            }
            uVar6 = FUN_00961758(uVar7,pcVar12);
          }
LAB_00b0d57c:
          uVar9 = uVar9 & uVar6;
        }
      }
      if ((local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(param_1 + 0x2478));
  }
  *(char *)(param_1 + 0x24f6) = (char)uVar9;
  *(uint *)(param_1 + 0x84) =
       *(uint *)(param_1 + 0x84) & 0xfffffff8 | *(uint *)(param_1 + 0x84) & 3 | (uVar9 ^ 1) << 2;
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b0d608(long param_1,uint param_2)

{
  *(byte *)(param_1 + 0x24f6) = (byte)param_2 & 1;
  *(uint *)(param_1 + 0x84) =
       *(uint *)(param_1 + 0x84) & 0xfffffff8 | *(uint *)(param_1 + 0x84) & 3 | (~param_2 & 1) << 2;
  return;
}




void FUN_00b0d62c(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 0x24f0) = param_2;
  thunk_FUN_00e7051c(&local_38,&DAT_03210450);
  FUN_00e70e18(&local_38,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0x24f0));
  FUN_00f0d75c(param_1 + 0x2168,&local_38);
  FUN_00b0cbbc(param_1);
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b0d6c4(long param_1)

{
  FUN_00b0c58c(param_1 + -0x1ef0);
  return;
}




void FUN_00b0d6d0(long *param_1,undefined8 param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  size_t sVar3;
  size_t sVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  char *__s2;
  long lVar11;
  char *pcVar12;
  byte *pbVar13;
  ulong uVar14;
  void *pvVar15;
  byte *pbVar16;
  ulong uVar17;
  byte local_248 [16];
  void *local_238;
  byte local_228 [8];
  ulong local_220;
  void *local_218;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  FUN_00b0cb60(param_1,0,&DAT_03210450);
  pbVar2 = (byte *)(param_1 + 0x491);
  bVar6 = *pbVar2;
  bVar7 = *param_3;
  sVar3 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    sVar3 = param_1[0x492];
  }
  sVar4 = (ulong)(bVar7 >> 1);
  if ((bVar7 & 1) != 0) {
    sVar4 = *(size_t *)(param_3 + 8);
  }
  if (sVar3 != sVar4) goto LAB_00b0da00;
  pvVar15 = (void *)param_1[0x493];
  pbVar16 = *(byte **)(param_3 + 0x10);
  pbVar1 = (byte *)((long)param_1 + 0x2489);
  if ((bVar6 & 1) == 0) {
    pvVar15 = (void *)((long)param_1 + 0x2489);
  }
  if ((bVar7 & 1) == 0) {
    pbVar16 = param_3 + 1;
  }
  if ((bVar6 & 1) == 0) {
    if (sVar3 != 0) {
      lVar11 = -(ulong)(bVar6 >> 1);
      pbVar13 = pbVar1;
      do {
        if (*pbVar13 != *pbVar16) goto LAB_00b0da00;
        pbVar13 = pbVar13 + 1;
        lVar11 = lVar11 + 1;
        pbVar16 = pbVar16 + 1;
      } while (lVar11 != 0);
    }
  }
  else if ((sVar3 != 0) && (iVar9 = memcmp(pvVar15,pbVar16,sVar3), iVar9 != 0)) goto LAB_00b0da00;
  bVar6 = *(byte *)(param_1 + 0x494);
  sVar3 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    sVar3 = param_1[0x495];
  }
  sVar4 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar4 = DAT_0320ffb0;
  }
  if (sVar3 == sVar4) {
    pvVar15 = (void *)param_1[0x496];
    if ((bVar6 & 1) == 0) {
      pvVar15 = (void *)((long)param_1 + 0x24a1);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar6 & 1) == 0) {
      if (sVar3 != 0) {
        pcVar12 = (char *)((long)param_1 + 0x24a1);
        lVar11 = -(ulong)(bVar6 >> 1);
        do {
          if (*pcVar12 != *__s2) goto LAB_00b0d840;
          pcVar12 = pcVar12 + 1;
          lVar11 = lVar11 + 1;
          __s2 = __s2 + 1;
        } while (lVar11 != 0);
      }
    }
    else if ((sVar3 != 0) && (iVar9 = memcmp(pvVar15,__s2,sVar3), iVar9 != 0)) goto LAB_00b0d840;
  }
  else {
LAB_00b0d840:
    FUN_00b63fc0(local_228);
    FUN_00caef54(local_228,param_1 + 0x494);
    FUN_00f048e0(local_248,DAT_0313375c,local_228);
    FUN_00f04760(param_1,local_248,1);
    FUN_0096910c(local_228);
  }
  if ((int)param_1[0x48f] != 0) {
    lVar11 = 0;
    uVar17 = 0;
    do {
      FUN_008fcdb8(local_228,param_1[0x490] + lVar11);
      FUN_008fcdb8(local_248,param_1[0x490] + lVar11 + 0x18);
      uVar14 = (ulong)(local_228[0] >> 1);
      uVar5 = uVar14;
      if ((local_228[0] & 1) != 0) {
        uVar5 = local_220;
      }
      if (uVar5 == 4) {
        iVar9 = FUN_0090d610(local_228,0,0xffffffffffffffff,"hero",4);
        if (iVar9 != 0) {
          uVar14 = (ulong)(local_228[0] >> 1);
          goto LAB_00b0d920;
        }
        pvVar15 = (void *)((ulong)local_248 | 1);
        if ((local_248[0] & 1) != 0) {
          pvVar15 = local_238;
        }
        pbVar16 = pbVar1;
        if ((*pbVar2 & 1) != 0) {
          pbVar16 = (byte *)param_1[0x493];
        }
        FUN_0090219c(pvVar15,pbVar16);
      }
      else {
LAB_00b0d920:
        if ((local_228[0] & 1) != 0) {
          uVar14 = local_220;
        }
        if (((uVar14 == 4) &&
            (iVar9 = FUN_0090d610(local_228,0,0xffffffffffffffff,&DAT_01b9230f,4), iVar9 == 0)) &&
           (lVar10 = FUN_00cc8184(local_248), lVar10 != 0)) {
          pvVar15 = (void *)((ulong)local_248 | 1);
          if ((local_248[0] & 1) != 0) {
            pvVar15 = local_238;
          }
          pbVar16 = pbVar1;
          if ((*pbVar2 & 1) != 0) {
            pbVar16 = (byte *)param_1[0x493];
          }
          FUN_00903764(pvVar15,*(undefined4 *)(lVar10 + 0xa0),pbVar16);
        }
      }
      if ((local_248[0] & 1) != 0) {
        operator_delete(local_238);
      }
      if ((local_228[0] & 1) != 0) {
        operator_delete(local_218);
      }
      uVar17 = uVar17 + 1;
      lVar11 = lVar11 + 0x30;
    } while (uVar17 < *(uint *)(param_1 + 0x48f));
  }
  FUN_00f048e0(local_228,DAT_03139b40,0);
  FUN_00f04760(param_1,local_228,1);
LAB_00b0da00:
  (**(code **)(*param_1 + 0x170))(param_1);
  if (*(long *)(lVar8 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b0da44(long param_1)

{
  FUN_00b0d6d0(param_1 + -0x1ef0);
  return;
}




void FUN_00b0da50(undefined8 param_1)

{
  FUN_00b0cb60(param_1,0,&DAT_03210450);
  return;
}




void FUN_00b0da60(long param_1)

{
  FUN_00b0cb60(param_1 + -0x1ef0,0,&DAT_03210450);
  return;
}




void FUN_00b0da78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
  uVar2 = FUN_00e6ce7c("MARKET_GOLD_STORE_TRANSACTION_ERROR_BODY",0);
  uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar1,uVar2,uVar3,0,0);
  FUN_00b0cb60(param_1,0,&DAT_03210450);
  return;
}




void FUN_00b0dafc(long param_1)

{
  FUN_00b0da78(param_1 + -0x1ef0);
  return;
}




void FUN_00b0db08(undefined8 param_1)

{
  FUN_00b0cb60(param_1,0,&DAT_03210450);
  return;
}




void FUN_00b0db18(long param_1)

{
  FUN_00b0cb60(param_1 + -0x1ef0,0,&DAT_03210450);
  return;
}




void thunk_FUN_00b0db40(long *param_1)

{
  (**(code **)(*param_1 + 0x1b0))();
  FUN_00f01980(param_1 + 0x3fe);
  if ((*(uint *)((long)param_1 + 0x2074) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x2074) = *(uint *)((long)param_1 + 0x2074) & 0xffff807f;
    FUN_0091ada4(param_1 + 0x3fe);
    return;
  }
  return;
}




void thunk_FUN_00b0db9c(long *param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  (**(code **)(*param_1 + 0x1b8))();
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f800000,puVar3);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efdd74(puVar4);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f000000,puVar4);
  FUN_00efddc4(0x3f800000,puVar4);
  param_1 = param_1 + 0x3fe;
  FUN_00f01980(param_1);
  FUN_00f022a0(param_1,puVar3);
  FUN_00f022a0(param_1,puVar4);
  return;
}




void FUN_00b0db38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b0dd34(param_1,param_4);
  return;
}




void FUN_00b0db40(long *param_1)

{
  (**(code **)(*param_1 + 0x1b0))();
  FUN_00f01980(param_1 + 0x3fe);
  if ((*(uint *)((long)param_1 + 0x2074) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x2074) = *(uint *)((long)param_1 + 0x2074) & 0xffff807f;
    FUN_0091ada4(param_1 + 0x3fe);
    return;
  }
  return;
}




void FUN_00b0db9c(long *param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  (**(code **)(*param_1 + 0x1b8))();
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f800000,puVar3);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efdd74(puVar4);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f000000,puVar4);
  FUN_00efddc4(0x3f800000,puVar4);
  param_1 = param_1 + 0x3fe;
  FUN_00f01980(param_1);
  FUN_00f022a0(param_1,puVar3);
  FUN_00f022a0(param_1,puVar4);
  return;
}




void FUN_00b0dd34(long *param_1,undefined8 param_2)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  (**(code **)(*param_1 + 0x1c0))();
  FUN_00f0490c(param_2);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f800000,puVar3);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efdd74(puVar4);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f000000,puVar4);
  FUN_00efddc4(0x3f800000,puVar4);
  param_1 = param_1 + 0x3fe;
  FUN_00f01980(param_1);
  FUN_00f022a0(param_1,puVar3);
  FUN_00f022a0(param_1,puVar4);
  return;
}




void FUN_00b0ded8(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *__s2;
  code *pcVar9;
  char *pcVar10;
  long lVar11;
  void *__s1;
  undefined **local_1d0;
  undefined1 auStack_1c8 [8];
  void *local_1c0;
  byte local_1b8;
  void *local_1a8;
  undefined1 auStack_1a0 [48];
  byte local_170;
  void *local_160;
  undefined8 local_158;
  void *local_150;
  undefined8 local_148;
  void *local_140;
  undefined **local_130;
  undefined1 auStack_128 [16];
  byte local_118 [16];
  void *local_108;
  byte local_d0;
  void *local_c0;
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x2488);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x2490);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x2498);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x2489);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar10 = (char *)(param_1 + 0x2489);
        lVar11 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar10 != *__s2) goto LAB_00b0df98;
          pcVar10 = pcVar10 + 1;
          lVar11 = lVar11 + 1;
          __s2 = __s2 + 1;
        } while (lVar11 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00b0df98;
    lVar11 = FUN_009580b8();
    if ((*(char *)(lVar11 + 0x568c) == '\0') ||
       ((uVar5 = FUN_00969254(), (uVar5 & 1) != 0 &&
        (lVar11 = FUN_00969248(), 0 < *(int *)(lVar11 + 0x38))))) {
      if ((*(char *)(param_1 + 0x24f4) == '\0') || (0.0 < *(float *)(param_1 + 0x1ee8))) {
        FUN_00975578(&local_130);
        uVar5 = FUN_0096bf40(param_1 + 0x24b8,&local_130);
        if ((uVar5 & 1) != 0) {
          uVar5 = FUN_00cabb6c(local_118);
          if ((uVar5 & 1) == 0) {
            FUN_00caf724(local_118,&local_a8);
          }
          else {
            uVar6 = FUN_009580b8();
            FUN_008fa54c(&local_1d0,&DAT_01e277f2);
            FUN_00961494(uVar6,param_1 + 0x24b8,&local_1d0);
            if (((ulong)local_1d0 & 1) != 0) {
              operator_delete(local_1c0);
            }
          }
        }
        local_130 = &PTR_FUN_027bca90;
        if (local_a0 != (void *)0x0) {
          operator_delete__(local_a0);
          local_a8 = 0;
          local_a0 = (void *)0x0;
        }
        if (local_b0 != (void *)0x0) {
          operator_delete__(local_b0);
          local_b8 = 0;
          local_b0 = (void *)0x0;
        }
        if ((local_d0 & 1) != 0) {
          operator_delete(local_c0);
        }
        if ((local_118[0] & 1) != 0) {
          operator_delete(local_108);
        }
        FUN_00977ea0(auStack_128,1);
      }
      else {
        FUN_00976588(&local_130);
        lVar11 = param_1 + 0x24b8;
        uVar5 = FUN_0096bf88(lVar11,&local_130);
        if ((uVar5 & 1) != 0) {
          switch(local_50) {
          case 0:
            FUN_00b0e504(param_1,&local_130);
            break;
          case 1:
            FUN_00b0ebe8(param_1,&local_130);
            break;
          case 2:
            FUN_00975578(&local_1d0);
            uVar5 = FUN_0096bf40(lVar11,&local_1d0);
            if (((uVar5 & 1) != 0) && (lVar11 = FUN_00cc8270(lVar11,auStack_1a0), lVar11 != 0)) {
              FUN_00b0f9d4(param_1,lVar11);
            }
            local_1d0 = &PTR_FUN_027bca90;
            if (local_140 != (void *)0x0) {
              operator_delete__(local_140);
              local_148 = 0;
              local_140 = (void *)0x0;
            }
            if (local_150 != (void *)0x0) {
              operator_delete__(local_150);
              local_158 = 0;
              local_150 = (void *)0x0;
            }
            if ((local_170 & 1) != 0) {
              operator_delete(local_160);
            }
            if ((local_1b8 & 1) != 0) {
              operator_delete(local_1a8);
            }
            FUN_00977ea0(auStack_1c8,1);
            break;
          case 3:
            FUN_00b0f2bc(param_1,&local_130);
          }
        }
        FUN_009767f4(&local_130);
      }
      goto LAB_00b0e134;
    }
LAB_00b0e090:
    uVar7 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TITLE",0);
    uVar6 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TEXT",0);
    uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    param_1 = 0;
    pcVar9 = (code *)0x0;
  }
  else {
LAB_00b0df98:
    uVar5 = FUN_009e5a5c();
    if ((uVar5 & 1) == 0) {
LAB_00b0dfac:
      lVar11 = FUN_009580b8();
      if ((*(char *)(lVar11 + 0x568c) == '\0') ||
         ((uVar5 = FUN_00969254(), (uVar5 & 1) != 0 &&
          (lVar11 = FUN_00969248(), 0 < *(int *)(lVar11 + 0x38))))) {
        FUN_00b0e2ec(param_1);
        goto LAB_00b0e134;
      }
      goto LAB_00b0e090;
    }
    FUN_009e5a50();
    uVar5 = FUN_009e63ac();
    if ((uVar5 & 1) != 0) goto LAB_00b0dfac;
    uVar7 = FUN_00e6ce7c("GOVERNMENT_ID_PURCHASE_MUST_REGISTER_TITLE",0);
    uVar6 = FUN_00e6ce7c("GOVERNMENT_ID_PURCHASE_MUST_REGISTER_TEXT",0);
    uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    pcVar9 = thunk_FUN_00b0fd98;
  }
  FUN_00a9b8b8(uVar7,uVar6,uVar8,param_1,pcVar9);
LAB_00b0e134:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

