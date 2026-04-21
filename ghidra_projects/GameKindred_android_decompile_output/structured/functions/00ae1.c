// functions/00ae1 — 23 functions
#include "libGameKindred.h"




void FUN_00ae118c(long param_1)

{
  long lVar1;
  
  for (lVar1 = FUN_00afbdd0(param_1 + 0x408); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x30)) {
    FUN_00ae11d0(lVar1,&DAT_03210450);
  }
  return;
}




void FUN_00ae11d0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0x3410;
  FUN_00910394(lVar1);
  thunk_FUN_00e7051c(&local_48,param_1 + 0x3430);
  FUN_00e705c8(&local_58,"[PRICE]");
  FUN_00e713f0(&local_48,0,&local_58,lVar1);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00f0d75c(param_1 + 0x4b8,&local_48);
  FUN_00910394(&local_48,param_1 + 0x3440);
  FUN_00e705c8(&local_58,"[PRICE]");
  FUN_00e713f0(&local_48,0,&local_58,lVar1);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00f0d75c(param_1 + 0x5e8,&local_48);
  FUN_00910394(&local_48,param_1 + 0x3450);
  FUN_00e705c8(&local_58,"[PRICE]");
  FUN_00e713f0(&local_48,0,&local_58,lVar1);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00ab7498(param_1 + 0x718,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ae132c(long param_1)

{
  FUN_00ae0f58(param_1 + -600);
  return;
}




void FUN_00ae1334(long param_1,undefined8 param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  size_t sVar3;
  ulong uVar4;
  size_t sVar5;
  byte bVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  char *__s2;
  byte *pbVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  void *pvVar18;
  byte *pbVar19;
  ulong uVar20;
  undefined1 auStack_248 [32];
  undefined1 auStack_228 [440];
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  lVar9 = FUN_00afbdd0(param_1 + 0x408);
  if (lVar9 != 0) {
    sVar5 = *(size_t *)(param_3 + 8);
    pbVar11 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar11 = param_3 + 1;
      sVar5 = (ulong)(*param_3 >> 1);
    }
    do {
      pbVar2 = (byte *)(lVar9 + 0x3518);
      bVar6 = *pbVar2;
      uVar20 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        uVar20 = *(ulong *)(lVar9 + 0x3520);
      }
      if (uVar20 == sVar5) {
        pvVar18 = *(void **)(lVar9 + 0x3528);
        pbVar1 = (byte *)(lVar9 + 0x3519);
        if ((bVar6 & 1) == 0) {
          pvVar18 = (void *)(lVar9 + 0x3519);
        }
        if ((bVar6 & 1) == 0) {
          if (sVar5 == 0) {
LAB_00ae141c:
            bVar6 = *(byte *)(lVar9 + 0x3490);
            sVar5 = (ulong)(bVar6 >> 1);
            if ((bVar6 & 1) != 0) {
              sVar5 = *(size_t *)(lVar9 + 0x3498);
            }
            sVar3 = (ulong)(DAT_0320ffa8 >> 1);
            if ((DAT_0320ffa8 & 1) != 0) {
              sVar3 = DAT_0320ffb0;
            }
            if (sVar5 != sVar3) goto LAB_00ae14b4;
            pvVar18 = *(void **)(lVar9 + 0x34a0);
            if ((bVar6 & 1) == 0) {
              pvVar18 = (void *)(lVar9 + 0x3491);
            }
            __s2 = DAT_0320ffb8;
            if ((DAT_0320ffa8 & 1) == 0) {
              __s2 = &DAT_0320ffa9;
            }
            if ((bVar6 & 1) == 0) {
              if (sVar5 == 0) goto LAB_00ae14f8;
              pcVar13 = (char *)(lVar9 + 0x3491);
              lVar12 = -(ulong)(bVar6 >> 1);
              goto LAB_00ae1484;
            }
            if ((sVar5 == 0) || (iVar8 = memcmp(pvVar18,__s2,sVar5), iVar8 == 0)) goto LAB_00ae14f8;
            goto LAB_00ae14b4;
          }
          lVar12 = -(ulong)(bVar6 >> 1);
          pbVar16 = pbVar11;
          pbVar19 = pbVar1;
          while (*pbVar19 == *pbVar16) {
            pbVar19 = pbVar19 + 1;
            lVar12 = lVar12 + 1;
            pbVar16 = pbVar16 + 1;
            if (lVar12 == 0) goto LAB_00ae141c;
          }
        }
        else if ((sVar5 == 0) || (iVar8 = memcmp(pvVar18,pbVar11,sVar5), iVar8 == 0))
        goto LAB_00ae141c;
      }
      lVar9 = *(long *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  goto LAB_00ae1648;
LAB_00ae14b4:
  FUN_00b63fc0(auStack_228);
  FUN_00caef54(auStack_228,(byte *)(lVar9 + 0x3490));
  FUN_00f048e0(auStack_248,DAT_0313375c,auStack_228);
  FUN_00f04760(param_1,auStack_248,1);
  FUN_0096910c(auStack_228);
  goto LAB_00ae14f8;
  while( true ) {
    pcVar13 = pcVar13 + 1;
    lVar12 = lVar12 + 1;
    __s2 = __s2 + 1;
    if (lVar12 == 0) break;
LAB_00ae1484:
    if (*pcVar13 != *__s2) goto LAB_00ae14b4;
  }
LAB_00ae14f8:
  if (*(int *)(lVar9 + 0x3530) != 0) {
    lVar12 = 0;
    uVar20 = 0;
    do {
      pbVar11 = (byte *)(*(long *)(lVar9 + 0x3538) + lVar12);
      bVar6 = *pbVar11;
      uVar14 = *(ulong *)(pbVar11 + 8);
      uVar17 = (ulong)(bVar6 >> 1);
      uVar4 = uVar17;
      if ((bVar6 & 1) != 0) {
        uVar4 = uVar14;
      }
      if (uVar4 == 4) {
        iVar8 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"hero",4);
        if (iVar8 != 0) {
          pbVar11 = (byte *)(*(long *)(lVar9 + 0x3538) + lVar12);
          bVar6 = *pbVar11;
          uVar14 = *(ulong *)(pbVar11 + 8);
          uVar17 = (ulong)(bVar6 >> 1);
          goto LAB_00ae157c;
        }
        lVar10 = *(long *)(lVar9 + 0x3538) + lVar12;
        if ((*(byte *)(lVar10 + 0x18) & 1) == 0) {
          lVar10 = lVar10 + 0x19;
        }
        else {
          lVar10 = *(long *)(lVar10 + 0x28);
        }
        pbVar11 = pbVar1;
        if ((*pbVar2 & 1) != 0) {
          pbVar11 = *(byte **)(lVar9 + 0x3528);
        }
        FUN_0090219c(lVar10,pbVar11);
      }
      else {
        pbVar11 = (byte *)(*(long *)(lVar9 + 0x3538) + uVar20 * 0x30);
LAB_00ae157c:
        if ((bVar6 & 1) != 0) {
          uVar17 = uVar14;
        }
        if (((uVar17 == 4) &&
            (iVar8 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,&DAT_01b9230f,4), iVar8 == 0)) &&
           (lVar10 = FUN_00cc8184(*(long *)(lVar9 + 0x3538) + lVar12 + 0x18), lVar10 != 0)) {
          lVar15 = *(long *)(lVar9 + 0x3538) + lVar12;
          if ((*(byte *)(lVar15 + 0x18) & 1) == 0) {
            lVar15 = lVar15 + 0x19;
          }
          else {
            lVar15 = *(long *)(lVar15 + 0x28);
          }
          pbVar11 = pbVar1;
          if ((*pbVar2 & 1) != 0) {
            pbVar11 = *(byte **)(lVar9 + 0x3528);
          }
          FUN_00903764(lVar15,*(undefined4 *)(lVar10 + 0xa0),pbVar11);
        }
      }
      uVar20 = uVar20 + 1;
      lVar12 = lVar12 + 0x30;
    } while (uVar20 < *(uint *)(lVar9 + 0x3530));
  }
  lVar9 = FUN_009580b8();
  FUN_009658c8(lVar9 + 0x18);
  FUN_00a9a950(param_1 + 0x1a0);
LAB_00ae1648:
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ae167c(long param_1)

{
  FUN_00ae1334(param_1 + -600);
  return;
}




void FUN_00ae1684(void)

{
  return;
}




void FUN_00ae1688(void)

{
  return;
}




void FUN_00ae168c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
  uVar2 = FUN_00e6ce7c("MARKET_GOLD_STORE_TRANSACTION_ERROR_BODY",0);
  uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar1,uVar2,uVar3,0,0);
  return;
}




void thunk_FUN_00ae168c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
  uVar2 = FUN_00e6ce7c("MARKET_GOLD_STORE_TRANSACTION_ERROR_BODY",0);
  uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar1,uVar2,uVar3,0,0);
  return;
}




void FUN_00ae16f4(void)

{
  return;
}




void FUN_00ae16f8(void)

{
  return;
}




void FUN_00ae16fc(long param_1)

{
  FUN_00a9b70c(param_1 + 0x1a0);
  return;
}




void FUN_00ae1704(long param_1)

{
  FUN_00afbcb8(param_1 + 0x408);
  return;
}




void FUN_00ae170c(float param_1,float param_2,long param_3)

{
  if ((*(float *)(param_3 + 0x660) == param_1) && (*(float *)(param_3 + 0x664) == param_2)) {
    return;
  }
  FUN_00ade058();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ae172c(long *param_1)

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
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  code *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar11 = tpidr_el0;
  local_78 = *(long *)(lVar11 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027d8968;
  FUN_00f11234(plVar1);
  FUN_00f0e4a8();
  plVar2 = param_1 + 0x69;
  FUN_00af6b6c(plVar2);
  plVar3 = param_1 + 0x86;
  FUN_00f017e8(plVar3);
  plVar4 = param_1 + 0x97;
  param_1[0x86] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0xbd;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0xe3;
  FUN_00ab6c24(plVar6,0);
  plVar7 = param_1 + 0x39b;
  FUN_00f017e8(plVar7);
  plVar8 = param_1 + 0x3ac;
  param_1[0x39b] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar8);
  plVar9 = param_1 + 0x3ca;
  FUN_00ab6c24(plVar9,0);
  FUN_00e70510(param_1 + 0x682);
  FUN_00e70510(param_1 + 0x684);
  FUN_00e70510(param_1 + 0x686);
  FUN_00e70510(param_1 + 0x688);
  FUN_00e70510(param_1 + 0x68a);
  memset(param_1 + 0x68c,0,0x90);
  param_1[0x69f] = 0x4396000043960000;
  param_1[0x69e] = 0x4396000043960000;
  lVar12 = _DAT_03218ef8;
  param_1[0x6a7] = 0;
  param_1[0x6a6] = 0;
  param_1[0x6a0] = lVar12;
  param_1[0x6a1] = lVar12;
  param_1[0x6a2] = lVar12;
  *(undefined1 *)((long)param_1 + 0x3542) = 0;
  *(undefined2 *)(param_1 + 0x6a8) = 0;
  param_1[0x6a5] = 0;
  param_1[0x6a4] = 0;
  param_1[0x6a3] = 0;
  *(undefined2 *)((long)param_1 + 0x3543) = 0xff;
  *(undefined1 *)((long)param_1 + 0x3545) = 0;
  FUN_00e70510(param_1 + 0x6a9);
  param_1[0x6ad] = 0;
  param_1[0x6ac] = 0;
  param_1[0x6ab] = 0;
  FUN_00e70510(param_1 + 0x6ae);
  FUN_00e70510(param_1 + 0x6b0);
  param_1[0x6b4] = 0;
  param_1[0x6b3] = 0;
  param_1[0x6b2] = 0;
  FUN_00e70510(param_1 + 0x6b5);
  param_1[0x6b9] = 0;
  param_1[0x6b8] = 0;
  param_1[0x6b7] = 0;
  FUN_00e70510(param_1 + 0x6ba);
  param_1[0x6be] = 0;
  param_1[0x6bd] = 0;
  param_1[0x6bc] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x4b,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar3,plVar5,1);
  FUN_00f023ec(plVar3,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_00f023ec(plVar7,plVar8,1);
  FUN_00f023ec(plVar7,plVar9,1);
  FUN_00f112f0(plVar1,1);
  FUN_00f13f18(plVar1,param_1 + 0x69e);
  FUN_00af6d64((int)param_1[0x69f],*(undefined4 *)((long)param_1 + 0x34fc),plVar2);
  *(undefined1 *)(param_1 + 0x85) = 1;
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Light_150__02be9c30,&DAT_01bee7fa);
  FUN_00f0da30(plVar4,1);
  FUN_00f0d92c(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  uVar14 = *(uint *)((long)param_1 + 0x66c);
  if ((uVar14 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x66c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0da30(plVar5,1);
  FUN_00ab703c(0x42a00000,0x43960000,0x44c1c000,plVar6,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,0
              );
  local_90 = 0;
  uStack_88 = 0;
  uVar10 = DAT_03210c64;
  local_a8 = thunk_FUN_00ae1dbc;
  local_98 = 0;
  plStack_a0 = param_1;
  local_80 = uVar10;
  FUN_009693a0(param_1 + 0xe4,&local_a8);
  FUN_00f0d378(param_1 + 0x1c7,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
  FUN_00b09144(0x3f000000,plVar6);
  if ((*(float *)(param_1 + 0xed) != 0.5) || (*(float *)((long)param_1 + 0x76c) != 0.5)) {
    param_1[0xed] = 0x3f0000003f000000;
    FUN_0091ada4(plVar6);
  }
  FUN_00ab7628(0x42e60000,plVar6);
  FUN_00b0914c(plVar6,1);
  *(uint *)((long)param_1 + 0x1d5c) = *(uint *)((long)param_1 + 0x1d5c) & 0xfffffffb;
  FUN_00f0e548(plVar8,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar8,&DAT_01bee7f6,2);
  uVar14 = *(uint *)((long)param_1 + 0x1de4);
  if ((uVar14 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x1de4) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar8);
    uVar14 = *(uint *)((long)param_1 + 0x1de4);
  }
  local_80 = DAT_03210f60;
  *(uint *)((long)param_1 + 0x1de4) = uVar14 | 0x10;
  local_a8 = thunk_FUN_00ae1d4c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_009693a0(param_1 + 0x3ad,&local_a8);
  local_a8 = thunk_FUN_00ae1d4c;
  local_80 = DAT_03210f8c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_009693a0(param_1 + 0x3ad,&local_a8);
  uVar13 = FUN_00e6ce7c("MENU_NEWS_TILE_LEAVE_APP_BUTTON",0);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xffc0c0c0);
  FUN_00ab703c(0x42800000,0,0x44960000,plVar9,0,uVar13,&local_a8,&DAT_03218ef8,0);
  FUN_00ab75e8(plVar9,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
  FUN_00b09454(plVar9,1);
  FUN_00b09144(0x3f000000,plVar9);
  local_a8 = thunk_FUN_00ae20b4;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  local_80 = uVar10;
  FUN_009693a0(param_1 + 0x3cb,&local_a8);
  FUN_00b0914c(plVar9,1);
  if (*(long *)(lVar11 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00ae1dbc(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  char *__s2;
  char *pcVar6;
  long lVar7;
  void *__s1;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar3 = tpidr_el0;
  lStack_28 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x34a8);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x34b0);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x34b8);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x34a9);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar6 = (char *)(param_1 + 0x34a9);
        lVar7 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar6 != *__s2) goto LAB_00ae1e74;
          pcVar6 = pcVar6 + 1;
          lVar7 = lVar7 + 1;
          __s2 = __s2 + 1;
        } while (lVar7 != 0);
      }
      goto LAB_00ae1ea0;
    }
    if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) goto LAB_00ae1ea0;
  }
LAB_00ae1e74:
  uVar5 = FUN_00f048a4("EVENT_CTA_BUTTON");
  FUN_00f048e0(auStack_48,uVar5,param_1);
  FUN_00f04760(param_1,auStack_48,1);
LAB_00ae1ea0:
  if (*(long *)(lVar3 + 0x28) != lStack_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00ae1d4c(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_CANCEL_LEAVE");
  FUN_00f048e0(auStack_48,uVar2,param_1);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ae1d34(long param_1)

{
  FUN_008fce60(param_1 + 0x34c0);
  return;
}




void FUN_00ae1d40(long param_1)

{
  FUN_008fce60(param_1 + 0x34d8);
  return;
}




void FUN_00ae1d4c(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_CANCEL_LEAVE");
  FUN_00f048e0(auStack_48,uVar2,param_1);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ae1dbc(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  char *__s2;
  char *pcVar6;
  long lVar7;
  void *__s1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x34a8);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x34b0);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x34b8);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x34a9);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar6 = (char *)(param_1 + 0x34a9);
        lVar7 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar6 != *__s2) goto LAB_00ae1e74;
          pcVar6 = pcVar6 + 1;
          lVar7 = lVar7 + 1;
          __s2 = __s2 + 1;
        } while (lVar7 != 0);
      }
      goto LAB_00ae1ea0;
    }
    if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) goto LAB_00ae1ea0;
  }
LAB_00ae1e74:
  uVar5 = FUN_00f048a4("EVENT_CTA_BUTTON");
  FUN_00f048e0(auStack_48,uVar5,param_1);
  FUN_00f04760(param_1,auStack_48,1);
LAB_00ae1ea0:
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ae1ec4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  *(undefined1 *)(param_1 + 0x3545) = 1;
  FUN_00910394(param_1 + 0x3548);
  FUN_008fce60(param_1 + 0x3558,param_3);
  FUN_00910394(param_1 + 0x3570,param_4);
  FUN_00910394(param_1 + 0x3580,param_5);
  FUN_008fce60(param_1 + 0x3590,param_6);
  FUN_00910394(param_1 + 0x35a8,param_7);
  FUN_008fce60(param_1 + 0x35b8,param_8);
  FUN_00910394(param_1 + 0x35d0,param_9);
  FUN_008fce60(param_1 + 0x35e0,param_10);
  return;
}




bool FUN_00ae1fb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x3545) != '\0';
  if (bVar1) {
    FUN_00910394(param_2,param_1 + 0x3548);
    FUN_008fce60(param_3,param_1 + 0x3558);
    FUN_00910394(param_4,param_1 + 0x3570);
    FUN_00910394(param_5,param_1 + 0x3580);
    FUN_008fce60(param_6,param_1 + 0x3590);
    FUN_00910394(param_7,param_1 + 0x35a8);
    FUN_008fce60(param_8,param_1 + 0x35b8);
    FUN_00910394(param_9,param_1 + 0x35d0);
    FUN_008fce60(param_10,param_1 + 0x35e0);
  }
  return bVar1;
}

