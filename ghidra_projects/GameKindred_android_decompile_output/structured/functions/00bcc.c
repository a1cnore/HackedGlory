// functions/00bcc — 13 functions
#include "libGameKindred.h"




void FUN_00bcc1d8(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  uint local_70 [2];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puVar1 = (undefined8 *)(param_1 + 0x1340);
  plVar2 = (long *)(param_1 + 0x1348);
  FUN_00bce69c(puVar1,*(undefined8 *)(param_1 + 0x1348));
  *(long **)(param_1 + 0x1340) = plVar2;
  *(undefined8 *)(param_1 + 0x1350) = 0;
  *(undefined8 *)(param_1 + 0x1348) = 0;
  cVar8 = FUN_009e0d70(*(undefined8 *)(param_1 + 0x13c8));
  lVar14 = 0;
  do {
    lVar10 = param_1 + lVar14 * 0xa6;
    if (*(char *)(lVar10 + 0x2f8) == cVar8) {
      lVar13 = 0;
      do {
        lVar3 = param_1 + lVar14 * 0x18 + lVar13 * 4;
        uVar4 = *(uint *)(lVar3 + 0x200);
        if (uVar4 != 0xffff) {
          plVar11 = (long *)*plVar2;
          uVar5 = *(uint *)(lVar3 + 0xa56);
          plVar12 = plVar2;
          if (plVar11 == (long *)0x0) {
LAB_00bcc2e4:
            local_70[1] = 1;
            local_70[0] = uVar4;
            FUN_00bce9f8(puVar1,local_70,local_70);
          }
          else {
            do {
              bVar7 = *(uint *)((long)plVar11 + 0x1c) < uVar4;
              if (!bVar7) {
                plVar12 = plVar11;
              }
              plVar11 = (long *)plVar11[bVar7];
            } while (plVar11 != (long *)0x0);
            if ((plVar12 == plVar2) || (uVar4 < *(uint *)((long)plVar12 + 0x1c))) goto LAB_00bcc2e4;
            *(int *)(plVar12 + 4) = (int)plVar12[4] + 1;
          }
          if ((uVar4 != uVar5) && (*(char *)(param_1 + 0xa3c) == '\x01')) {
            uVar9 = FUN_00c243f0(*(undefined8 *)(param_1 + 8));
            uVar5 = 0;
            if (uVar9 != 0) {
              uVar5 = (uint)lVar14 / uVar9;
            }
            if (*(char *)(param_1 + (ulong)((uint)lVar14 - uVar5 * uVar9) * 0x28 + 0x4b) == '\0') {
              FUN_00bcd744(param_1,uVar4,lVar10 + 0x2f0);
            }
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 != 6);
    }
    lVar14 = lVar14 + 1;
    if (lVar14 == 10) {
      if (*(char *)(param_1 + 0xa3c) == '\x01') {
        plVar12 = (long *)*puVar1;
        while (plVar12 != plVar2) {
          lVar14 = FUN_00c249c0(*(undefined8 *)(param_1 + 8),*(undefined4 *)((long)plVar12 + 0x1c));
          if (lVar14 != 0) {
            FUN_00aa99e8(lVar14,(int)plVar12[4]);
          }
          plVar11 = (long *)plVar12[1];
          if ((long *)plVar12[1] == (long *)0x0) {
            plVar11 = plVar12 + 2;
            bVar7 = *(long **)*plVar11 != plVar12;
            plVar12 = (long *)*plVar11;
            if (bVar7) {
              do {
                lVar14 = *plVar11;
                plVar11 = (long *)(lVar14 + 0x10);
                plVar12 = (long *)*plVar11;
              } while (*plVar12 != lVar14);
            }
          }
          else {
            do {
              plVar12 = plVar11;
              plVar11 = (long *)*plVar12;
            } while ((long *)*plVar12 != (long *)0x0);
          }
        }
      }
      if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}




void FUN_00bcc40c(long param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  char cVar11;
  
  if (*(char *)(param_1 + 0x1421) == '\0') {
    lVar10 = 0;
    cVar11 = '\0';
    do {
      lVar9 = param_1 + lVar10;
      bVar1 = *(byte *)(lVar9 + 0x391);
      uVar7 = FUN_00c243f0(*(undefined8 *)(param_1 + 8));
      if (*(char *)(lVar9 + 0x2f0) != '\0') {
        cVar2 = *(char *)(lVar9 + 0x2f8);
        cVar6 = FUN_009e0d70(*(undefined8 *)(param_1 + 0x13c8));
        if (cVar2 == cVar6) {
          uVar3 = 0;
          if (uVar7 != 0) {
            uVar3 = bVar1 / uVar7;
          }
          uVar7 = (uint)bVar1 - uVar3 * uVar7;
          uVar8 = (ulong)*(byte *)(param_1 + lVar10 + 0x2f1);
          lVar9 = param_1 + (ulong)uVar7 * 0x28;
          cVar2 = *(char *)(param_1 + 0x96c + (long)*(int *)(param_1 + 0x1400) * 10 + uVar8);
          bVar4 = *(char *)(lVar9 + 0x4b) == '\0';
          bVar5 = *(char *)(param_1 + 0x96c + uVar8 * 10 + (long)*(int *)(param_1 + 0x1400)) == '\0'
          ;
          if (bVar4 && !bVar5) {
            if (*(char *)(param_1 + 0x1423) == '\0') {
              FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_trade_want.mp3",0,0
                          );
            }
            cVar11 = '\x01';
          }
          if (*(uint *)(param_1 + 0x141c) != uVar7) {
            lVar9 = lVar9 + 0x28;
            if (!bVar4 || bVar5) {
              if (bVar4 && cVar2 != '\0') {
                FUN_00bd590c(lVar9,1);
              }
              else {
                FUN_00bd589c(lVar9,0,0);
              }
            }
            else {
              FUN_00bd58fc(lVar9,1);
            }
          }
        }
      }
      lVar10 = lVar10 + 0xa6;
    } while (lVar10 != 0x67c);
    *(char *)(param_1 + 0x1423) = cVar11;
  }
  return;
}




void FUN_00bcc578(long param_1)

{
  char cVar1;
  long lVar2;
  char cVar3;
  char *pcVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  thunk_FUN_00e7051c(&local_48,&DAT_03210450);
  lVar7 = 0;
  iVar6 = -1;
  lVar8 = 0x393;
  do {
    pcVar4 = (char *)(param_1 + lVar8);
    lVar8 = lVar8 + 0xa6;
    if (*pcVar4 != '\0') {
      iVar6 = (int)lVar7;
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 10);
  if (iVar6 == -1) {
    if (*(char *)(param_1 + 0xa3c) != '\x03') goto LAB_00bcc710;
    pcVar4 = "MENU_DRAFT_LOBBY_HERO_SWAP_PROMPT";
    goto LAB_00bcc6fc;
  }
  lVar8 = param_1 + (long)iVar6 * 0xa6 + 0x2f0;
  if (*(char *)(param_1 + 0xa3c) == '\x02') {
    if (*(char *)(param_1 + 0x1337) != '\0') {
      if (*(int *)(param_1 + 0x1414) == 0xffff) {
        pcVar4 = "MENU_DRAFT_LOBBY_LABEL_SELECT_A_HERO";
      }
      else {
        if (*(char *)(param_1 + 0x1297) != '\0') goto LAB_00bcc6a0;
        pcVar4 = "MENU_DRAFT_LOBBY_LABEL_LOCK_IN_A_HERO";
      }
LAB_00bcc6fc:
      uVar5 = FUN_00e6ce7c(pcVar4,0);
      FUN_00910394(&local_48,uVar5);
      goto LAB_00bcc710;
    }
LAB_00bcc6a0:
    cVar1 = *(char *)(param_1 + (long)iVar6 * 0xa6 + 0x2f8);
    cVar3 = FUN_009e0d70(*(undefined8 *)(param_1 + 0x13c8));
    if ((cVar1 != cVar3) && (*(char *)(param_1 + 0x1421) == '\0')) {
      pcVar4 = "MENU_DRAFT_LOBBY_LABEL_NAMED_ENEMY_SELECTING";
LAB_00bcc764:
      uVar5 = FUN_00e6ce7c(pcVar4,0);
      FUN_00910394(&local_48,uVar5);
      FUN_00bcd67c(param_1,&local_48,lVar8);
      goto LAB_00bcc710;
    }
    pcVar4 = "MENU_DRAFT_LOBBY_LABEL_NAMED_ALLY_SELECTING";
  }
  else {
    if (*(char *)(param_1 + 0xa3c) != '\x01') goto LAB_00bcc710;
    if (*(char *)(param_1 + 0x1337) != '\0') {
      pcVar4 = "MENU_DRAFT_LOBBY_LABEL_BAN_A_HERO";
      goto LAB_00bcc6fc;
    }
    cVar1 = *(char *)(param_1 + (long)iVar6 * 0xa6 + 0x2f8);
    cVar3 = FUN_009e0d70(*(undefined8 *)(param_1 + 0x13c8));
    if ((cVar1 != cVar3) && (*(char *)(param_1 + 0x1421) == '\0')) {
      pcVar4 = "MENU_DRAFT_LOBBY_LABEL_NAMED_ENEMY_BANNING";
      goto LAB_00bcc764;
    }
    pcVar4 = "MENU_DRAFT_LOBBY_LABEL_NAMED_ALLY_BANNING";
  }
  uVar5 = FUN_00e6ce7c(pcVar4,0);
  uVar5 = FUN_00910394(&local_48,uVar5);
  FUN_00bcd524(uVar5,&local_48,lVar8);
LAB_00bcc710:
  FUN_00c24e70(*(undefined8 *)(param_1 + 8),&local_48);
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




int FUN_00bcc790(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_00c243f0(*(undefined8 *)(param_1 + 8));
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = param_2 / uVar2;
  }
  return param_2 - uVar1 * uVar2;
}




void FUN_00bcc7bc(long param_1)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  byte *pbVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined1 local_c4 [4];
  byte local_c0 [16];
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  local_80 = (void *)0x0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  lVar9 = FUN_00ceace8();
  if (lVar9 == 0) {
    uVar14 = 4;
  }
  else {
    FUN_00ceace8();
    uVar10 = FUN_00ceaf9c();
    uVar14 = 4;
    if ((uVar10 & 1) == 0) {
      uVar14 = 2;
    }
  }
  uVar10 = 0;
  do {
    cVar1 = *(char *)(param_1 + uVar10 + 0x1e8);
    cVar5 = FUN_009e0d70(*(undefined8 *)(param_1 + 0x13c8));
    iVar8 = *(int *)(param_1 + uVar10 * 4 + 0x1ec);
    iVar4 = 0xffff;
    if (((iVar8 != 0xffff) &&
        (lVar9 = FUN_00c249c0(*(undefined8 *)(param_1 + 8),iVar8), iVar4 = iVar8, lVar9 != 0)) &&
       (*(char *)(param_1 + uVar10 + 0x1fc) != '\0')) {
      FUN_00aa9c70(lVar9,cVar1 == cVar5);
    }
    FUN_00cae2c8(local_c0,iVar4);
    if (cVar1 == cVar5) {
      FUN_0096204c(&local_78,local_c0);
      local_c4[0] = *(char *)(param_1 + uVar10 + 0x1fc) != '\0';
      FUN_00bccdcc(&local_88,local_c4);
    }
    else {
      if (*(char *)(param_1 + uVar10 + 0x1fc) == '\0') {
        local_c4[0] = 0;
        FUN_00bccdcc(&local_a8,local_c4);
        pbVar12 = &DAT_0320ffa8;
      }
      else {
        local_c4[0] = 1;
        FUN_00bccdcc(&local_a8,local_c4);
        pbVar12 = local_c0;
      }
      FUN_0096204c(&local_98,pbVar12);
    }
    if ((local_c0[0] & 1) != 0) {
      operator_delete(local_b0);
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < uVar14);
  FUN_00c24e88(*(undefined8 *)(param_1 + 8),&local_78,&local_88,0);
  FUN_00c24e88(*(undefined8 *)(param_1 + 8),&local_98,&local_a8,1);
  cVar5 = *(char *)(param_1 + (ulong)*(byte *)(param_1 + 0xa3d) + 0x1e7);
  cVar6 = FUN_009e0d70(*(undefined8 *)(param_1 + 0x13c8));
  cVar1 = *(char *)(param_1 + 0x1e8);
  cVar7 = FUN_009e0d70(*(undefined8 *)(param_1 + 0x13c8));
  bVar2 = *(byte *)(param_1 + 0xa3d) >> 1;
  uVar11 = (uint)bVar2;
  if (cVar1 == cVar7) {
    if (cVar5 == cVar6) {
LAB_00bcc9b8:
      uVar13 = 0;
      goto LAB_00bcc9cc;
    }
    uVar11 = bVar2 - 1;
  }
  else if (cVar5 == cVar6) {
    uVar11 = bVar2 - 1;
    goto LAB_00bcc9b8;
  }
  uVar13 = 1;
LAB_00bcc9cc:
  FUN_00c245f4(*(undefined8 *)(param_1 + 8),uVar11,uVar13);
  iVar8 = FUN_00bcce54(param_1);
  if (((iVar8 == -1) && (*(char *)(param_1 + 0xb43) != '\0')) &&
     (*(char *)(param_1 + 0x1292) == '\x01')) {
    bVar2 = *(byte *)(param_1 + 0x1293);
    if ((bVar2 != *(byte *)(param_1 + 0xa3d)) && (*(char *)(param_1 + (ulong)bVar2 + 0x1fb) == '\0')
       ) {
      uVar13 = FUN_00ceace8();
      FUN_00908214(uVar13,*(byte *)(param_1 + 0x1293));
    }
  }
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  FUN_00951534(&local_98,1);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  FUN_00951534(&local_78,1);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bcca98(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x13f8) != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    uVar3 = 0;
    do {
      if (iVar1 == 4) {
        uVar2 = FUN_00ceacc4();
      }
      else {
        uVar2 = FUN_00ceaca0(uVar3 & 0xffffffff);
      }
      if ((uVar2 & 1) != 0) {
        FUN_00cbe338(*(undefined8 *)(param_1 + 0x13f8),uVar3 & 0xffffffff,
                     *(undefined4 *)(param_1 + 0x13a8 + uVar3 * 4));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 7);
  }
  return;
}




void FUN_00bccb10(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = 0;
  do {
    lVar3 = param_1 + lVar2;
    lVar4 = *(long *)(lVar3 + 0x30);
    lVar2 = lVar2 + 0x28;
    uVar1 = *(uint *)(lVar4 + 0x121c);
    *(uint *)(lVar4 + 0x121c) =
         uVar1 & 0xfffffff8 | uVar1 & 3 | (uint)(*(char *)(param_1 + 0xa3c) == '\x02') << 2;
    lVar3 = *(long *)(lVar3 + 0xf8);
    uVar1 = *(uint *)(lVar3 + 0x121c);
    *(uint *)(lVar3 + 0x121c) =
         uVar1 & 0xfffffff8 | uVar1 & 3 | (uint)(*(char *)(param_1 + 0xa3c) == '\x02') << 2;
  } while (lVar2 != 200);
  if (*(char *)(param_1 + 0xa3c) != '\x01') {
    FUN_00c245f4(*(undefined8 *)(param_1 + 8),0xffffffff,1);
    FUN_00c245f4(*(undefined8 *)(param_1 + 8),0xffffffff,0);
    if (*(char *)(param_1 + 0xa3c) == '\x03') {
      FUN_00bcd9a0(param_1,0xffff);
      FUN_00c23bd0(*(undefined8 *)(param_1 + 8),0);
      return;
    }
  }
  return;
}




void FUN_00bccbd8(long param_1,char param_2)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_009580c4();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00e829e0();
    FUN_008fcdb8(local_50,lVar4 + 0xa8);
    FUN_0090dab8(local_80,&DAT_01b9349c,local_50);
    FUN_008fcdb8(local_68,local_80);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if (param_2 == '\x02') {
      pcVar5 = "teamright";
      uVar6 = 9;
    }
    else if (param_2 == '\x01') {
      pcVar5 = "teamleft";
      uVar6 = 8;
    }
    else {
      pcVar5 = "default";
      uVar6 = 7;
    }
    FUN_0090de84(local_68,pcVar5,uVar6);
    pbVar1 = (byte *)(param_1 + 0x13d0);
    FUN_008fce60(pbVar1,local_68);
    if ((*pbVar1 & 1) == 0) {
      lVar4 = param_1 + 0x13d1;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x13e0);
    }
    FUN_0090d918(lVar4);
    FUN_00bc4f10(*(undefined8 *)(param_1 + 0x13e8),pbVar1);
    FUN_00bc4f10(*(undefined8 *)(param_1 + 0x13f0),pbVar1);
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bccd24(long param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  
  puVar5 = (undefined8 *)FUN_00ce9af4();
  plVar8 = (long *)*puVar5;
  if (*plVar8 != 0) {
    do {
      uVar6 = FUN_0093d7f8();
      if (((uVar6 & 1) == 0) || (*(char *)((undefined8 *)*plVar8 + 1) != '\0')) {
        bVar2 = (**(code **)(**(long **)(param_1 + 0x13c8) + 0x48))
                          (*(long **)(param_1 + 0x13c8),*(undefined8 *)*plVar8);
        bVar3 = FUN_00e80f58();
        cVar1 = *(char *)(param_1 + 0x1421);
        uVar7 = FUN_00d6eb50();
        uVar4 = FUN_00d6e9d4(uVar7,*(undefined8 *)*plVar8);
        FUN_00c24940(*(undefined8 *)(param_1 + 8),uVar4,(bVar2 | bVar3 ^ 0xff) & 1 | cVar1 != '\0');
      }
      plVar8 = plVar8 + 1;
    } while (*plVar8 != 0);
  }
  return;
}




void FUN_00bccdcc(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00bce980(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined1 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) + -1) = *param_2;
  return;
}




ulong FUN_00bcce54(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined2 *puVar3;
  
  uVar2 = 0;
  puVar3 = (undefined2 *)(param_1 + 0x2fb);
  do {
    if ((*(char *)((long)puVar3 + -0xb) != '\0') &&
       (uVar1 = FUN_00ced270(*puVar3), (uVar1 & 1) != 0)) goto LAB_00bcce90;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 0x53;
  } while (uVar2 < 10);
  uVar2 = 0xffffffff;
LAB_00bcce90:
  return uVar2 & 0xffffffff;
}




void FUN_00bccea0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c("MENU_DRAFT_LOBBY_NEXT_TURN_MESSAGE",0);
  thunk_FUN_00e7051c(&local_38,uVar2);
  FUN_00e705c8(&local_48,&DAT_01b9db64);
  FUN_00e705c8(&local_58,"{210, 180, 39, 255}");
  FUN_00e713f0(&local_38,0,&local_48,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  FUN_00e705c8(&local_48,"[/EM]");
  FUN_00e705c8(&local_58,&DAT_01bd12d3);
  FUN_00e713f0(&local_38,0,&local_48,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if ((*(byte *)(param_1 + 0x13d0) & 1) == 0) {
    param_1 = param_1 + 0x13d1;
  }
  else {
    param_1 = *(long *)(param_1 + 0x13e0);
  }
  FUN_0090dd30(param_1,&local_38);
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




void FUN_00bccfdc(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  char *pcVar2;
  byte bVar3;
  
  if (*(char *)(param_1 + 0x1424) == '\0') {
    if (*(char *)(param_3 + 0xa3) == '\0') {
      FUN_00aa132c("VO_Vainglory_Draft_Begins");
      goto LAB_00bcd004;
    }
  }
  else {
LAB_00bcd004:
    if (*(char *)(param_3 + 0xa3) == '\0') goto LAB_00bcd0c4;
  }
  if (*(char *)(param_2 + 0xa3) != '\0') goto LAB_00bcd0c4;
  bVar3 = *(byte *)(param_1 + 0xa3c);
  if (bVar3 - 1 < 2) {
    uVar1 = FUN_0092e7ac();
    if ((uVar1 & 1) != 0) {
      thunk_FUN_00eca230();
    }
    bVar3 = *(byte *)(param_1 + 0xa3c);
  }
  if (bVar3 == 1) {
    pcVar2 = "VO_Vainglory_Draft_Ban";
LAB_00bcd0a8:
    FUN_00aa132c(pcVar2);
  }
  else if (bVar3 == 2) {
    if ((*(short *)(param_3 + 9) == -1) &&
       (uVar1 = FUN_00bcd110(param_1,*(undefined4 *)(param_1 + 0x1414)), (uVar1 & 1) == 0)) {
      pcVar2 = "VO_Vainglory_SelectHero";
    }
    else {
      pcVar2 = "VO_Vainglory_LockInHero";
    }
    goto LAB_00bcd0a8;
  }
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_alert_turn.mp3",0,0);
LAB_00bcd0c4:
  if ((*(char *)(param_2 + 3) != '\0') && (*(short *)(param_2 + 9) != *(short *)(param_3 + 9))) {
    FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_trade.mp3",0,0);
    return;
  }
  return;
}

