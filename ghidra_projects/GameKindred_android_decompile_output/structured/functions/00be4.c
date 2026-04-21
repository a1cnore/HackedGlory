// functions/00be4 — 14 functions
#include "libGameKindred.h"




void FUN_00be4004(void)

{
  FUN_00e6ce7c("MAIN_MENU_SOCIAL",0);
  return;
}




void FUN_00be4024(void)

{
  FUN_00e6ce7c("MAIN_MENU_SOCIAL",0);
  return;
}




void FUN_00be4044(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    FUN_00b1a8e8(param_2,param_1 + 0xa1);
    return;
  }
  FUN_00b1a8e8(param_2,*(undefined8 *)(param_1 + 0xb0));
  return;
}




void FUN_00be4068(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    FUN_00b1a8e8(param_2,param_1 + 0x91);
    return;
  }
  FUN_00b1a8e8(param_2,*(undefined8 *)(param_1 + 0xa0));
  return;
}




void FUN_00be408c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6)

{
  long lVar1;
  long lVar2;
  byte local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_0090dab8(local_98,&DAT_01b9349c);
  FUN_008fcdb8(local_80,local_98);
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  lVar2 = param_1 + 0xf0;
  FUN_008fce60(lVar2,param_2);
  FUN_008fce60(param_1 + 0x108,param_3);
  *(byte *)(param_1 + 0x120) = param_6 & 1;
  if ((param_6 & 1) != 0) {
    FUN_008fce60(lVar2,local_80);
  }
  lVar2 = FUN_00be6d48(param_1 + 0xc0,lVar2);
  if (param_1 + 200 != lVar2) {
    FUN_00be6eb0(param_1 + 0xc0,lVar2);
  }
  FUN_00c5c138(*(undefined8 *)(param_1 + 8),1);
  FUN_00bf9290(*(long *)(param_1 + 8) + 0x39c0,param_2,param_1 + 0x108,param_4,param_5,param_6 & 1);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be41d0(long param_1)

{
  FUN_008fce60(param_1 + 0xf0,&DAT_0320ffa8);
  FUN_008fce60(param_1 + 0x108,&DAT_0320ffa8);
  *(undefined1 *)(param_1 + 0x120) = 0;
  return;
}




void FUN_00be4218(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e6ce7c("MENU_FRIENDS_ADD_FRIEND_INPUT_CAPTION",0);
  uVar2 = FUN_00e6ce7c("MENU_FRIENDS_ADD_FRIEND_INPUT_MESSAGE",0);
  FUN_00aa1574(param_1 + 0xd8,uVar1,uVar2,&DAT_03210450,0,0,0,0,param_1,thunk_FUN_00be42c0,
               FUN_00be42b4,param_1 + 0xe0);
  return;
}




void thunk_FUN_00be42c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar5 = 0;
    lVar6 = 0xac;
    do {
      uVar1 = FUN_00e70b34(param_3,*(long *)(param_1 + 0x78) + lVar6 + -0x8c);
      if (((uVar1 & 1) != 0) && (*(int *)(*(long *)(param_1 + 0x78) + lVar6) == 3)) {
        uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
        uVar3 = FUN_00e6ce7c("MENU_FRIENDS_ADD_FRIEND_DUPLICATE_ERROR",0);
        uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00a9b8b8(uVar2,uVar3,uVar4,0,0);
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x188;
    } while (uVar5 < *(uint *)(param_1 + 0x70));
  }
  FUN_00916048(param_3);
  FUN_00910394(param_1 + 0xe0,param_3);
  return;
}




void FUN_00be42b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00910394(param_1 + 0xe0,param_3);
  return;
}




void FUN_00be42c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar5 = 0;
    lVar6 = 0xac;
    do {
      uVar1 = FUN_00e70b34(param_3,*(long *)(param_1 + 0x78) + lVar6 + -0x8c);
      if (((uVar1 & 1) != 0) && (*(int *)(*(long *)(param_1 + 0x78) + lVar6) == 3)) {
        uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
        uVar3 = FUN_00e6ce7c("MENU_FRIENDS_ADD_FRIEND_DUPLICATE_ERROR",0);
        uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00a9b8b8(uVar2,uVar3,uVar4,0,0);
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x188;
    } while (uVar5 < *(uint *)(param_1 + 0x70));
  }
  FUN_00916048(param_3);
  FUN_00910394(param_1 + 0xe0,param_3);
  return;
}




void FUN_00be43a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00910394(param_1 + 0xe0,param_3);
  return;
}




void FUN_00be43ac(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar7 = FUN_00be4550();
  if ((uVar7 & 1) != 0) {
    lVar10 = *(long *)(param_1 + 0x78);
    puVar1 = (uint *)(param_1 + 0x70);
    if (lVar10 != 0) {
      if (*puVar1 != 0) {
        lVar12 = (ulong)*puVar1 * 0x188;
        do {
          FUN_0091587c(lVar10);
          lVar12 = lVar12 + -0x188;
          lVar10 = lVar10 + 0x188;
        } while (lVar12 != 0);
      }
      *puVar1 = 0;
    }
    lVar10 = *(long *)(param_1 + 0x88);
    puVar2 = (uint *)(param_1 + 0x80);
    if (lVar10 != 0) {
      if (*puVar2 != 0) {
        lVar12 = (ulong)*puVar2 * 0x188;
        do {
          FUN_0091587c(lVar10);
          lVar12 = lVar12 + -0x188;
          lVar10 = lVar10 + 0x188;
        } while (lVar12 != 0);
      }
      *puVar2 = 0;
    }
    uVar4 = FUN_00915fe4();
    *(undefined4 *)(param_1 + 0x158) = uVar4;
    iVar5 = FUN_00915ff4();
    if (iVar5 != 0) {
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar4 = FUN_00915ff4();
      FUN_00b625e0(&local_58,uVar4,0);
      iVar5 = FUN_00915ff4();
      if (iVar5 != 0) {
        uVar7 = 0;
        do {
          uVar8 = FUN_00916004(uVar7 & 0xffffffff);
          *(undefined8 *)((long)local_50 + uVar7 * 8) = uVar8;
          uVar7 = uVar7 + 1;
          uVar9 = FUN_00915ff4();
        } while (uVar7 < (uVar9 & 0xffffffff));
      }
      qsort(local_50,local_58 & 0xffffffff,8,FUN_0091593c);
      if ((int)local_58 != 0) {
        uVar7 = 0;
        do {
          FUN_0091564c(puVar1,*(undefined8 *)((long)local_50 + uVar7 * 8));
          uVar7 = uVar7 + 1;
        } while (uVar7 < (local_58 & 0xffffffff));
      }
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
    }
    iVar5 = FUN_00916098();
    if (iVar5 != 0) {
      uVar11 = 0;
      do {
        uVar8 = FUN_009160a8(uVar11);
        FUN_0091564c(puVar2,uVar8);
        uVar11 = uVar11 + 1;
        uVar6 = FUN_00916098();
      } while (uVar11 < uVar6);
    }
    FUN_00be4630(param_1);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00be4550(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  iVar2 = *(int *)(param_1 + 0x70);
  iVar3 = FUN_00915ff4();
  if ((iVar2 == iVar3) && (iVar2 = *(int *)(param_1 + 0x80), iVar3 = FUN_00916098(), iVar2 == iVar3)
     ) {
    if (*(int *)(param_1 + 0x70) != 0) {
      lVar7 = 0;
      uVar8 = 0;
      do {
        lVar1 = *(long *)(param_1 + 0x78) + lVar7;
        lVar4 = FUN_00916034(lVar1 + 8);
        if ((lVar4 == 0) || (uVar5 = FUN_00916114(lVar4,lVar1), (uVar5 & 1) == 0))
        goto LAB_00be4614;
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x188;
      } while (uVar8 < *(uint *)(param_1 + 0x70));
    }
    if (*(int *)(param_1 + 0x80) == 0) {
      uVar6 = 0;
    }
    else {
      lVar7 = 0;
      uVar8 = 0;
      do {
        lVar1 = *(long *)(param_1 + 0x88) + lVar7;
        lVar4 = FUN_009160d8(lVar1 + 8);
        if ((lVar4 == 0) || (uVar5 = FUN_00916114(lVar4,lVar1), (uVar5 & 1) == 0))
        goto LAB_00be4614;
        uVar8 = uVar8 + 1;
        uVar6 = 0;
        lVar7 = lVar7 + 0x188;
      } while (uVar8 < *(uint *)(param_1 + 0x80));
    }
  }
  else {
LAB_00be4614:
    uVar6 = 1;
  }
  return uVar6;
}




void FUN_00be4630(long param_1)

{
  byte *pbVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  void *pvVar4;
  char *pcVar5;
  size_t sVar6;
  size_t sVar7;
  undefined4 uVar8;
  byte bVar9;
  byte bVar10;
  long lVar11;
  void *pvVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  long lVar18;
  long *plVar19;
  void *pvVar20;
  char *pcVar21;
  char *pcVar22;
  undefined8 uVar23;
  long lVar24;
  short *psVar25;
  uint uVar26;
  long lVar27;
  undefined8 uVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 local_c0;
  void *local_b8;
  ulong local_b0;
  void *local_a8;
  char *local_a0;
  ulong local_98;
  void *local_90;
  void *local_88;
  long local_80;
  
  lVar11 = tpidr_el0;
  local_80 = *(long *)(lVar11 + 0x28);
  if (*(char *)(param_1 + 0x15c) == '\0') goto LAB_00be5690;
  FUN_00c5bfc8(*(undefined8 *)(param_1 + 8),"REQUESTS");
  if (*(int *)(param_1 + 0x80) != 0) {
    lVar27 = 0;
    uVar29 = 0;
    do {
      uVar23 = *(undefined8 *)(param_1 + 8);
      puVar2 = (ulong *)(*(long *)(param_1 + 0x88) + lVar27);
      FUN_00e70570(&local_98,puVar2 + 10);
      FUN_00e70570(&local_b0,puVar2 + 0x11);
      FUN_00c5d518(uVar23,puVar2 + 4,puVar2 + 1,puVar2 + 8,&local_98,puVar2 + 0xf,&local_b0,
                   *puVar2 >> 0x20 & 1);
      if (local_a8 != (void *)0x0) {
        operator_delete__(local_a8);
        local_b0 = 0;
        local_a8 = (void *)0x0;
      }
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
        local_98 = 0;
        local_90 = (void *)0x0;
      }
      uVar29 = uVar29 + 1;
      lVar27 = lVar27 + 0x188;
    } while (uVar29 < *(uint *)(param_1 + 0x80));
  }
  uVar23 = FUN_00e6ce7c("MENU_FRIENDS_REQUESTS_TITLE",0);
  thunk_FUN_00e7051c(&local_98,uVar23);
  FUN_00e70510(&local_b0);
  uVar23 = FUN_00c5bfbc(*(undefined8 *)(param_1 + 8),"REQUESTS");
  iVar15 = FUN_00b2db68(uVar23,0);
  if (iVar15 < 1) {
    FUN_00e70e18(&local_b0,&DAT_01e277f2);
  }
  else {
    uVar23 = FUN_00c5bfbc(*(undefined8 *)(param_1 + 8),"REQUESTS");
    iVar15 = FUN_00b2db68(uVar23,0);
    if (iVar15 < 0xb) {
      uVar23 = FUN_00c5bfbc(*(undefined8 *)(param_1 + 8),"REQUESTS");
      uVar16 = FUN_00b2db68(uVar23,0);
      pcVar21 = " (%d)";
    }
    else {
      pcVar21 = " (%d+)";
      uVar16 = 10;
    }
    FUN_00e70e18(&local_b0,pcVar21,uVar16);
  }
  FUN_00e70c34(&local_98,&local_b0);
  FUN_00c5bff0(*(undefined8 *)(param_1 + 8),"REQUESTS",&local_98);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  FUN_00c5bfc8(*(undefined8 *)(param_1 + 8),"TEAM");
  lVar27 = FUN_009580b8();
  bVar9 = *(byte *)(lVar27 + 0x5490);
  sVar6 = (ulong)(bVar9 >> 1);
  if ((bVar9 & 1) != 0) {
    sVar6 = *(size_t *)(lVar27 + 0x5498);
  }
  sVar7 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar7 = DAT_0320ffb0;
  }
  if (sVar6 == sVar7) {
    pvVar20 = *(void **)(lVar27 + 0x54a0);
    if ((bVar9 & 1) == 0) {
      pvVar20 = (void *)(lVar27 + 0x5491);
    }
    pcVar21 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar21 = &DAT_0320ffa9;
    }
    if ((bVar9 & 1) == 0) {
      if (sVar6 != 0) {
        pcVar22 = (char *)(lVar27 + 0x5491);
        lVar27 = -(ulong)(bVar9 >> 1);
        do {
          if (*pcVar22 != *pcVar21) goto LAB_00be48cc;
          pcVar22 = pcVar22 + 1;
          lVar27 = lVar27 + 1;
          pcVar21 = pcVar21 + 1;
        } while (lVar27 != 0);
      }
    }
    else if ((sVar6 != 0) && (iVar15 = memcmp(pvVar20,pcVar21,sVar6), iVar15 != 0))
    goto LAB_00be48cc;
  }
  else {
LAB_00be48cc:
    local_98 = 0;
    local_90 = (void *)0x0;
    local_88 = (void *)0x0;
    uVar23 = FUN_00e6ce7c("MENU_FRIENDS_TEAM_CONVERSATION",0);
    FUN_00e70a24(uVar23,&local_98);
    FUN_00be61b0(&local_b0,param_1);
    lVar27 = FUN_00be6d48(param_1 + 0xc0,&local_b0);
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    uVar23 = *(undefined8 *)(param_1 + 8);
    lVar24 = FUN_009580b8();
    lVar18 = FUN_009580b8();
    plVar19 = (long *)FUN_00c5d478(uVar23,lVar24 + 0x5490,lVar18 + 0x5308,&local_98,
                                   param_1 + 200 != lVar27);
    if (plVar19 != (long *)0x0) {
      lVar27 = FUN_009580b8();
      FUN_0090dab8(&local_b0,&DAT_01b9349c,lVar27 + 0x5490);
      bVar9 = *(byte *)(param_1 + 0xf0);
      pvVar12 = (void *)(local_b0 >> 1 & 0x7f);
      pvVar20 = pvVar12;
      if ((local_b0 & 1) != 0) {
        pvVar20 = local_a8;
      }
      pvVar4 = (void *)(ulong)(bVar9 >> 1);
      if ((bVar9 & 1) != 0) {
        pvVar4 = *(void **)(param_1 + 0xf8);
      }
      if (pvVar20 == pvVar4) {
        pcVar22 = *(char **)(param_1 + 0x100);
        pcVar21 = (char *)((ulong)&local_b0 | 1);
        pcVar5 = pcVar21;
        if ((local_b0 & 1) != 0) {
          pcVar5 = local_a0;
        }
        if ((bVar9 & 1) == 0) {
          pcVar22 = (char *)(param_1 + 0xf1);
        }
        if ((local_b0 & 1) == 0) {
          if (pvVar20 != (void *)0x0) {
            lVar27 = -(long)pvVar12;
            do {
              if (*pcVar21 != *pcVar22) goto LAB_00be4a2c;
              pcVar21 = pcVar21 + 1;
              lVar27 = lVar27 + 1;
              pcVar22 = pcVar22 + 1;
            } while (lVar27 != 0);
            bVar13 = true;
            if ((local_b0 & 1) == 0) goto LAB_00be4a38;
LAB_00be4a30:
            operator_delete(local_a0);
            goto LAB_00be4a38;
          }
        }
        else {
          if (pvVar20 != (void *)0x0) {
            iVar15 = memcmp(pcVar5,pcVar22,(size_t)pvVar20);
            bVar13 = iVar15 == 0;
            goto LAB_00be4a30;
          }
          operator_delete(local_a0);
        }
      }
      else {
LAB_00be4a2c:
        bVar13 = false;
        if ((local_b0 & 1) != 0) goto LAB_00be4a30;
LAB_00be4a38:
        if (!bVar13) goto LAB_00be4a50;
      }
      (**(code **)(*plVar19 + 0x138))(plVar19,1);
    }
LAB_00be4a50:
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
  }
  uVar23 = FUN_00e6ce7c("MENU_TEAM_TITLE",0);
  thunk_FUN_00e7051c(&local_98,uVar23);
  thunk_FUN_00e7051c(&local_b0,&DAT_03210450);
  uVar23 = FUN_00c5bfbc(*(undefined8 *)(param_1 + 8),"TEAM");
  iVar15 = FUN_00b2db68(uVar23,0);
  if (iVar15 < 1) {
    FUN_00e70e18(&local_b0,&DAT_01e277f2);
  }
  else {
    uVar23 = FUN_00c5bfbc(*(undefined8 *)(param_1 + 8),"TEAM");
    uVar16 = FUN_00b2db68(uVar23,0);
    FUN_00e70e18(&local_b0," (%d)",uVar16);
  }
  FUN_00e70c34(&local_98,&local_b0);
  FUN_00c5bff0(*(undefined8 *)(param_1 + 8),"TEAM",&local_98);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  FUN_00c5bfc8(*(undefined8 *)(param_1 + 8),"GUILD");
  lVar27 = FUN_009580b8();
  bVar9 = *(byte *)(lVar27 + 0x5478);
  sVar6 = (ulong)(bVar9 >> 1);
  if ((bVar9 & 1) != 0) {
    sVar6 = *(size_t *)(lVar27 + 0x5480);
  }
  sVar7 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar7 = DAT_0320ffb0;
  }
  if (sVar6 == sVar7) {
    pvVar20 = *(void **)(lVar27 + 0x5488);
    if ((bVar9 & 1) == 0) {
      pvVar20 = (void *)(lVar27 + 0x5479);
    }
    pcVar21 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar21 = &DAT_0320ffa9;
    }
    if ((bVar9 & 1) == 0) {
      if (sVar6 != 0) {
        pcVar22 = (char *)(lVar27 + 0x5479);
        lVar27 = -(ulong)(bVar9 >> 1);
        do {
          if (*pcVar22 != *pcVar21) goto LAB_00be4be4;
          pcVar22 = pcVar22 + 1;
          lVar27 = lVar27 + 1;
          pcVar21 = pcVar21 + 1;
        } while (lVar27 != 0);
      }
    }
    else if ((sVar6 != 0) && (iVar15 = memcmp(pvVar20,pcVar21,sVar6), iVar15 != 0))
    goto LAB_00be4be4;
  }
  else {
LAB_00be4be4:
    local_98 = 0;
    local_90 = (void *)0x0;
    local_88 = (void *)0x0;
    uVar23 = FUN_00e6ce7c("MENU_FRIENDS_GUILD_CONVERSATION",0);
    FUN_00e70a24(uVar23,&local_98);
    FUN_00be6200(&local_b0,param_1);
    lVar27 = FUN_00be6d48(param_1 + 0xc0,&local_b0);
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    uVar23 = *(undefined8 *)(param_1 + 8);
    lVar24 = FUN_009580b8();
    lVar18 = FUN_009580b8();
    plVar19 = (long *)FUN_00c5d3d8(uVar23,lVar24 + 0x5478,lVar18 + 0x50c8,&local_98,
                                   param_1 + 200 != lVar27);
    if (plVar19 != (long *)0x0) {
      lVar27 = FUN_009580b8();
      FUN_0090dab8(&local_b0,&DAT_01b9349c,lVar27 + 0x5478);
      bVar9 = *(byte *)(param_1 + 0xf0);
      pvVar12 = (void *)(local_b0 >> 1 & 0x7f);
      pvVar20 = pvVar12;
      if ((local_b0 & 1) != 0) {
        pvVar20 = local_a8;
      }
      pvVar4 = (void *)(ulong)(bVar9 >> 1);
      if ((bVar9 & 1) != 0) {
        pvVar4 = *(void **)(param_1 + 0xf8);
      }
      if (pvVar20 == pvVar4) {
        pcVar22 = *(char **)(param_1 + 0x100);
        pcVar21 = (char *)((ulong)&local_b0 | 1);
        pcVar5 = pcVar21;
        if ((local_b0 & 1) != 0) {
          pcVar5 = local_a0;
        }
        if ((bVar9 & 1) == 0) {
          pcVar22 = (char *)(param_1 + 0xf1);
        }
        if ((local_b0 & 1) == 0) {
          if (pvVar20 != (void *)0x0) {
            lVar27 = -(long)pvVar12;
            do {
              if (*pcVar21 != *pcVar22) goto LAB_00be4d44;
              pcVar21 = pcVar21 + 1;
              lVar27 = lVar27 + 1;
              pcVar22 = pcVar22 + 1;
            } while (lVar27 != 0);
            bVar13 = true;
            if ((local_b0 & 1) == 0) goto LAB_00be4d50;
LAB_00be4d48:
            operator_delete(local_a0);
            goto LAB_00be4d50;
          }
        }
        else {
          if (pvVar20 != (void *)0x0) {
            iVar15 = memcmp(pcVar5,pcVar22,(size_t)pvVar20);
            bVar13 = iVar15 == 0;
            goto LAB_00be4d48;
          }
          operator_delete(local_a0);
        }
      }
      else {
LAB_00be4d44:
        bVar13 = false;
        if ((local_b0 & 1) != 0) goto LAB_00be4d48;
LAB_00be4d50:
        if (!bVar13) goto LAB_00be4d68;
      }
      (**(code **)(*plVar19 + 0x138))(plVar19,1);
    }
LAB_00be4d68:
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
  }
  uVar23 = FUN_00e6ce7c("MENU_GUILD_TITLE",0);
  thunk_FUN_00e7051c(&local_98,uVar23);
  thunk_FUN_00e7051c(&local_b0,&DAT_03210450);
  uVar23 = FUN_00c5bfbc(*(undefined8 *)(param_1 + 8),"GUILD");
  iVar15 = FUN_00b2db68(uVar23,0);
  if (iVar15 < 1) {
    FUN_00e70e18(&local_b0,&DAT_01e277f2);
  }
  else {
    uVar23 = FUN_00c5bfbc(*(undefined8 *)(param_1 + 8),"GUILD");
    uVar16 = FUN_00b2db68(uVar23,0);
    FUN_00e70e18(&local_b0," (%d)",uVar16);
  }
  FUN_00e70c34(&local_98,&local_b0);
  FUN_00c5bff0(*(undefined8 *)(param_1 + 8),"GUILD",&local_98);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  FUN_00c5bfc8(*(undefined8 *)(param_1 + 8),"RECENTS");
  if (*(int *)(param_1 + 0x90) != 0) {
    uVar29 = 0;
    lVar27 = 0x35;
    do {
      puVar3 = (undefined1 *)(*(long *)(param_1 + 0x98) + lVar27);
      FUN_00c5d5d0(*(undefined8 *)(param_1 + 8),puVar3 + -0x15,puVar3 + -0x2d,*puVar3);
      uVar29 = uVar29 + 1;
      lVar27 = lVar27 + 0x38;
    } while (uVar29 < *(uint *)(param_1 + 0x90));
  }
  uVar23 = FUN_00e6ce7c("MENU_FRIENDS_RECENTS_TITLE",0);
  thunk_FUN_00e7051c(&local_98,uVar23);
  thunk_FUN_00e7051c(&local_b0,&DAT_03210450);
  uVar23 = FUN_00c5bfbc(*(undefined8 *)(param_1 + 8),"RECENTS");
  iVar15 = FUN_00b2db68(uVar23,0);
  if (iVar15 < 1) {
    FUN_00e70e18(&local_b0,&DAT_01e277f2);
  }
  else {
    uVar23 = FUN_00c5bfbc(*(undefined8 *)(param_1 + 8),"RECENTS");
    uVar16 = FUN_00b2db68(uVar23,0);
    FUN_00e70e18(&local_b0," (%d)",uVar16);
  }
  FUN_00e70c34(&local_98,&local_b0);
  FUN_00c5bff0(*(undefined8 *)(param_1 + 8),"RECENTS",&local_98);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  FUN_00c5bfc8(*(undefined8 *)(param_1 + 8),"ONLINE_FRIENDS");
  FUN_00c5bfc8(*(undefined8 *)(param_1 + 8),"OFFLINE_FRIENDS");
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar29 = 0;
    do {
      lVar24 = *(long *)(param_1 + 0x78);
      psVar25 = (short *)(lVar24 + uVar29 * 0x188);
      pbVar1 = (byte *)(psVar25 + 4);
      lVar27 = FUN_00be6d48(param_1 + 0xc0,pbVar1);
      uVar23 = *(undefined8 *)(param_1 + 8);
      iVar15 = 0x41;
      if (*(int *)(psVar25 + 0xa4) != -1) {
        iVar15 = *(int *)(psVar25 + 0xa4);
      }
      FUN_00e70570(&local_98,psVar25 + 0x28);
      FUN_00e70570(&local_b0,psVar25 + 0x44);
      uVar16 = *(undefined4 *)(psVar25 + 0x74);
      uVar28 = *(undefined8 *)psVar25;
      uVar32 = *(undefined8 *)(psVar25 + 0x50);
      uVar8 = *(undefined4 *)(psVar25 + 0x5c);
      uVar26 = (uint)uVar28;
      lVar18 = FUN_009580b8();
      bVar9 = *(byte *)(lVar18 + 0x5478);
      sVar6 = (ulong)(bVar9 >> 1);
      if ((bVar9 & 1) != 0) {
        sVar6 = *(size_t *)(lVar18 + 0x5480);
      }
      sVar7 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar7 = DAT_0320ffb0;
      }
      if (sVar6 == sVar7) {
        pvVar20 = *(void **)(lVar18 + 0x5488);
        if ((bVar9 & 1) == 0) {
          pvVar20 = (void *)(lVar18 + 0x5479);
        }
        pcVar21 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          pcVar21 = &DAT_0320ffa9;
        }
        if ((bVar9 & 1) == 0) {
          if (sVar6 != 0) {
            pcVar22 = (char *)(lVar18 + 0x5479);
            lVar18 = -(ulong)(bVar9 >> 1);
            do {
              if (*pcVar22 != *pcVar21) goto LAB_00be50e0;
              pcVar22 = pcVar22 + 1;
              lVar18 = lVar18 + 1;
              pcVar21 = pcVar21 + 1;
            } while (lVar18 != 0);
          }
        }
        else if ((sVar6 != 0) && (iVar17 = memcmp(pvVar20,pcVar21,sVar6), iVar17 != 0))
        goto LAB_00be50e0;
LAB_00be517c:
        bVar13 = false;
      }
      else {
LAB_00be50e0:
        lVar18 = FUN_009580b8();
        bVar9 = *(byte *)(lVar18 + 0x5478);
        bVar10 = *(byte *)(psVar25 + 0x28);
        sVar6 = (ulong)(bVar9 >> 1);
        if ((bVar9 & 1) != 0) {
          sVar6 = *(size_t *)(lVar18 + 0x5480);
        }
        sVar7 = (ulong)(bVar10 >> 1);
        if ((bVar10 & 1) != 0) {
          sVar7 = *(size_t *)(lVar24 + uVar29 * 0x188 + 0x58);
        }
        bVar13 = false;
        if (sVar6 == sVar7) {
          pvVar20 = *(void **)(lVar18 + 0x5488);
          pcVar21 = *(char **)(lVar24 + uVar29 * 0x188 + 0x60);
          if ((bVar9 & 1) == 0) {
            pvVar20 = (void *)(lVar18 + 0x5479);
          }
          if ((bVar10 & 1) == 0) {
            pcVar21 = (char *)((long)psVar25 + 0x51);
          }
          if ((bVar9 & 1) == 0) {
            if (sVar6 != 0) {
              pcVar22 = (char *)(lVar18 + 0x5479);
              lVar18 = -(ulong)(bVar9 >> 1);
              do {
                if (*pcVar22 != *pcVar21) goto LAB_00be517c;
                pcVar22 = pcVar22 + 1;
                lVar18 = lVar18 + 1;
                pcVar21 = pcVar21 + 1;
              } while (lVar18 != 0);
            }
          }
          else if (sVar6 != 0) {
            iVar17 = memcmp(pvVar20,pcVar21,sVar6);
            bVar13 = iVar17 == 0;
            goto LAB_00be519c;
          }
          bVar13 = true;
        }
      }
LAB_00be519c:
      lVar18 = FUN_009580b8();
      bVar9 = *(byte *)(lVar18 + 0x5490);
      sVar6 = (ulong)(bVar9 >> 1);
      if ((bVar9 & 1) != 0) {
        sVar6 = *(size_t *)(lVar18 + 0x5498);
      }
      sVar7 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar7 = DAT_0320ffb0;
      }
      if (sVar6 == sVar7) {
        pvVar20 = *(void **)(lVar18 + 0x54a0);
        if ((bVar9 & 1) == 0) {
          pvVar20 = (void *)(lVar18 + 0x5491);
        }
        pcVar21 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          pcVar21 = &DAT_0320ffa9;
        }
        if ((bVar9 & 1) == 0) {
          if (sVar6 != 0) {
            pcVar22 = (char *)(lVar18 + 0x5491);
            lVar18 = -(ulong)(bVar9 >> 1);
            do {
              if (*pcVar22 != *pcVar21) goto LAB_00be5248;
              pcVar22 = pcVar22 + 1;
              lVar18 = lVar18 + 1;
              pcVar21 = pcVar21 + 1;
            } while (lVar18 != 0);
          }
        }
        else if ((sVar6 != 0) && (iVar17 = memcmp(pvVar20,pcVar21,sVar6), iVar17 != 0))
        goto LAB_00be5248;
LAB_00be52e8:
        bVar14 = false;
      }
      else {
LAB_00be5248:
        lVar18 = FUN_009580b8();
        bVar9 = *(byte *)(lVar18 + 0x5490);
        bVar10 = *(byte *)(psVar25 + 0x44);
        sVar6 = (ulong)(bVar9 >> 1);
        if ((bVar9 & 1) != 0) {
          sVar6 = *(size_t *)(lVar18 + 0x5498);
        }
        sVar7 = (ulong)(bVar10 >> 1);
        if ((bVar10 & 1) != 0) {
          sVar7 = *(size_t *)(lVar24 + uVar29 * 0x188 + 0x90);
        }
        bVar14 = false;
        if (sVar6 == sVar7) {
          pvVar20 = *(void **)(lVar18 + 0x54a0);
          pcVar21 = *(char **)(lVar24 + uVar29 * 0x188 + 0x98);
          if ((bVar9 & 1) == 0) {
            pvVar20 = (void *)(lVar18 + 0x5491);
          }
          if ((bVar10 & 1) == 0) {
            pcVar21 = (char *)((long)psVar25 + 0x89);
          }
          if ((bVar9 & 1) == 0) {
            if (sVar6 != 0) {
              pcVar22 = (char *)(lVar18 + 0x5491);
              lVar18 = -(ulong)(bVar9 >> 1);
              do {
                if (*pcVar22 != *pcVar21) goto LAB_00be52e8;
                pcVar22 = pcVar22 + 1;
                lVar18 = lVar18 + 1;
                pcVar21 = pcVar21 + 1;
              } while (lVar18 != 0);
            }
          }
          else if (sVar6 != 0) {
            iVar17 = memcmp(pvVar20,pcVar21,sVar6);
            bVar14 = iVar17 == 0;
            goto LAB_00be530c;
          }
          bVar14 = true;
        }
      }
LAB_00be530c:
      lVar18 = lVar24 + uVar29 * 0x188;
      puVar3 = (undefined1 *)(lVar18 + 0x168);
      if (*psVar25 != 2) {
        puVar3 = &DAT_0320ffa8;
      }
      plVar19 = (long *)FUN_00c5d66c(uVar32,uVar23,psVar25 + 0x10,pbVar1,psVar25 + 0x20,&local_98,
                                     psVar25 + 0x3c,&local_b0,uVar26 & 0xffff,uVar26 >> 0x18 & 0x7f,
                                     uVar16,uVar8,(byte)((ulong)uVar28 >> 0x20) & 1,bVar13,bVar14,
                                     *(undefined4 *)(lVar18 + 0xa8),param_1 + 200 != lVar27,iVar15,
                                     lVar18 + 0x150,lVar18 + 0x160,puVar3);
      if (local_a8 != (void *)0x0) {
        operator_delete__(local_a8);
        local_b0 = 0;
        local_a8 = (void *)0x0;
      }
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
        local_98 = 0;
        local_90 = (void *)0x0;
      }
      if (plVar19 != (long *)0x0) {
        bVar9 = *pbVar1;
        bVar10 = *(byte *)(param_1 + 0xf0);
        sVar6 = (ulong)(bVar9 >> 1);
        if ((bVar9 & 1) != 0) {
          sVar6 = *(size_t *)(lVar24 + uVar29 * 0x188 + 0x10);
        }
        sVar7 = (ulong)(bVar10 >> 1);
        if ((bVar10 & 1) != 0) {
          sVar7 = *(size_t *)(param_1 + 0xf8);
        }
        if (sVar6 == sVar7) {
          pvVar20 = *(void **)(lVar24 + uVar29 * 0x188 + 0x18);
          if ((bVar9 & 1) == 0) {
            pvVar20 = (void *)((long)psVar25 + 9);
          }
          pcVar21 = (char *)(param_1 + 0xf1);
          if ((bVar10 & 1) != 0) {
            pcVar21 = *(char **)(param_1 + 0x100);
          }
          if ((bVar9 & 1) == 0) {
            if (sVar6 != 0) {
              pcVar22 = (char *)((long)psVar25 + 9);
              lVar27 = -(ulong)(bVar9 >> 1);
              do {
                if (*pcVar22 != *pcVar21) goto LAB_00be547c;
                pcVar22 = pcVar22 + 1;
                lVar27 = lVar27 + 1;
                pcVar21 = pcVar21 + 1;
              } while (lVar27 != 0);
            }
          }
          else if ((sVar6 != 0) && (iVar15 = memcmp(pvVar20,pcVar21,sVar6), iVar15 != 0))
          goto LAB_00be547c;
          (**(code **)(*plVar19 + 0x138))(plVar19,1);
        }
      }
LAB_00be547c:
      uVar29 = uVar29 + 1;
    } while (uVar29 < *(uint *)(param_1 + 0x70));
  }
  uVar23 = FUN_00e6ce7c("MENU_FRIENDS_ONLINE_TITLE",0);
  thunk_FUN_00e7051c(&local_98,uVar23);
  thunk_FUN_00e7051c(&local_b0,&DAT_03210450);
  uVar23 = FUN_00c5bfbc(*(undefined8 *)(param_1 + 8),"ONLINE_FRIENDS");
  iVar15 = FUN_00b2db68(uVar23,0);
  if (iVar15 < 1) {
    FUN_00e70e18(&local_b0,&DAT_01e277f2);
  }
  else {
    uVar23 = FUN_00c5bfbc(*(undefined8 *)(param_1 + 8),"ONLINE_FRIENDS");
    iVar15 = FUN_00b2db68(uVar23,0);
    uVar23 = FUN_00c5bfbc(*(undefined8 *)(param_1 + 8),"ONLINE_FRIENDS");
    iVar17 = FUN_00b2db68(uVar23,0);
    fVar30 = (float)(uint)(iVar17 - *(int *)(param_1 + 0x158));
    fVar31 = (float)iVar15;
    if (fVar30 <= (float)iVar15) {
      fVar31 = fVar30;
    }
    if (fVar31 <= 1.0) {
      fVar31 = 1.0;
    }
    FUN_00e70e18(&local_b0," (%d)",(int)fVar31);
  }
  FUN_00e70c34(&local_98,&local_b0);
  FUN_00c5bff0(*(undefined8 *)(param_1 + 8),"ONLINE_FRIENDS",&local_98);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  uVar23 = FUN_00e6ce7c("MENU_FRIENDS_OFFLINE_TITLE",0);
  thunk_FUN_00e7051c(&local_98,uVar23);
  thunk_FUN_00e7051c(&local_b0,&DAT_03210450);
  if (*(uint *)(param_1 + 0x158) == 0) {
    FUN_00e70e18(&local_b0,&DAT_01e277f2);
  }
  else if (*(uint *)(param_1 + 0x158) < 0x1f5) {
    FUN_00e70e18(&local_b0,"(%d)");
  }
  else {
    FUN_00e705c8(&local_c0,"(500+)");
    FUN_00910394(&local_b0,&local_c0);
    if (local_b8 != (void *)0x0) {
      operator_delete__(local_b8);
      local_c0 = 0;
      local_b8 = (void *)0x0;
    }
  }
  FUN_00e705c8(&local_c0,"[NUM_OFFLINE]");
  FUN_00e71248(&local_98,0,&local_c0,&local_b0);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = 0;
    local_b8 = (void *)0x0;
  }
  FUN_00c5bff0(*(undefined8 *)(param_1 + 8),"OFFLINE_FRIENDS",&local_98);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
LAB_00be5690:
  if (*(long *)(lVar11 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

