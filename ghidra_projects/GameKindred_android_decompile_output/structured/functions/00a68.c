// functions/00a68 — 9 functions
#include "libGameKindred.h"




void FUN_00a681e4(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  FUN_00b89d24(param_1 + 0x158,param_2 & 1,param_3,param_4 & 1);
  if ((param_2 & 1) != 0) {
    FUN_00a68228(param_1);
    return;
  }
  return;
}




void FUN_00a68228(long param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x3d58) = 0;
  uVar1 = FUN_00a69374(0x3eb33333,0,param_1,param_1 + 0x860,0);
  uVar1 = FUN_00a69374(0x3eb33333,0x3eb33333,uVar1,param_1 + 0x730,1);
  uVar1 = FUN_00a69374(0x3eb33333,0,uVar1,param_1 + 0x1f50,1);
  uVar1 = FUN_00a69374(0x3eb33333,0,uVar1,param_1 + 0x990,1);
  *(uint *)(param_1 + 0x1fd4) = *(uint *)(param_1 + 0x1fd4) | 0x10;
  *(uint *)(param_1 + 0xa14) = *(uint *)(param_1 + 0xa14) | 0x10;
  uVar1 = FUN_00a69374(0x3eb33333,0,uVar1,param_1 + 0x860,0);
  FUN_00a69374(0x3eb33333,0x3eb33333,uVar1,param_1 + 0x730,1);
  return;
}




void FUN_00a682f8(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  
  if (0.0 <= *(float *)(param_1 + 0x3d50)) {
    FUN_00e70e18(param_1 + 0x3d40,&DAT_01bb6d43,(int)*(float *)(param_1 + 0x3d50));
    FUN_00f0d75c(param_1 + 0x578,param_1 + 0x3d40);
    fVar6 = (float)FUN_01988c78();
    *(float *)(param_1 + 0x3d50) = *(float *)(param_1 + 0x3d50) - fVar6;
  }
  else {
    lVar1 = FUN_00a1ffc0();
    plVar2 = (long *)(lVar1 + 0x10);
    plVar3 = (long *)*plVar2;
    plVar4 = plVar2;
    if (plVar3 != (long *)0x0) {
      do {
        if (*(uint *)(plVar3 + 4) >= 0xe5d47eef) {
          plVar4 = plVar3;
        }
        plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xe5d47eef];
      } while (plVar3 != (long *)0x0);
      if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xe5d47ef0)) && ((int)plVar4[5] != 0)) {
        lVar1 = 0;
        uVar5 = 0;
        do {
          (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
          uVar5 = uVar5 + 1;
          lVar1 = lVar1 + 0x10;
        } while (uVar5 < *(uint *)(plVar4 + 5));
      }
    }
  }
  if ((((*(byte *)(param_1 + 0x218) & 1) != 0) && (uVar5 = FUN_01980b08(), (uVar5 & 1) != 0)) &&
     (uVar5 = FUN_01980b3c(1), (uVar5 & 1) != 0)) {
    if (*(int *)(param_1 + 0x3d58) == 1) {
      FUN_00a68228(param_1);
      return;
    }
    FUN_00a68480(param_1,0,param_1 + 0x1f50,param_1 + 0x990);
    return;
  }
  return;
}




void FUN_00a6843c(long param_1)

{
  FUN_00e70e18(param_1 + 0x3d40,&DAT_01bb6d43,(int)*(float *)(param_1 + 0x3d50));
  FUN_00f0d75c(param_1 + 0x578,param_1 + 0x3d40);
  return;
}




void FUN_00a68480(long param_1,ulong param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined1 auStack_88 [32];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_1 + 0x3d58);
  if (iVar1 == 0) {
    uVar6 = FUN_00a69374(0x3eb33333,0,param_1,param_1 + 0x730,0);
    uVar6 = FUN_00a69374(0x3eb33333,0x3eb33333,uVar6,param_1 + 0x860,1);
    FUN_00a69374(0x3eb33333,0,uVar6,param_4,0);
    *(uint *)(param_4 + 0x84) = *(uint *)(param_4 + 0x84) & 0xffffffef;
    lVar3 = DAT_03210d00;
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
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efdd74(puVar8);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00efddc4(0,puVar8);
    FUN_00efcac4(0x3eb33333,puVar8);
    FUN_00efcb24(puVar8,FUN_0091aa80);
    lVar3 = DAT_03210d00;
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
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efdd74(puVar9);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00efddc4(0x3f800000,puVar9);
    FUN_00efcac4(0x3eb33333,puVar9);
    FUN_00efcb24(puVar9,FUN_0091aa80);
    lVar3 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar10 = (ushort *)0x0;
    }
    else {
      puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar10;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efca2c(puVar10);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    *(uint *)(param_3 + 0x84) = *(uint *)(param_3 + 0x84) & 0xffffffef;
    FUN_00f01980(param_3);
    FUN_00f02308(param_3,puVar8,puVar9,puVar10,0);
    uVar5 = 1;
    if ((param_2 & 1) == 0) {
      uVar5 = 2;
    }
    *(undefined4 *)(param_1 + 0x3d58) = uVar5;
  }
  else {
    bVar4 = iVar1 == 1;
    if ((param_2 & 1) == 0) {
      bVar4 = iVar1 == 2;
    }
    if (bVar4) {
      uVar5 = FUN_00f048a4("EVENT_SELECT_SURRENDER");
      FUN_00f048e0(auStack_88,uVar5,0);
      FUN_00f0491c(auStack_88,param_2 & 1);
      param_1 = FUN_00f04760(param_1,auStack_88,1);
    }
    uVar6 = FUN_00a69374(0x3eb33333,0,param_1,param_3,0);
    FUN_00a69374(0x3eb33333,0,uVar6,param_4,0);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a687f4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a687fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_00a68804(undefined8 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00a68228();
    return;
  }
  return;
}




void FUN_00a68810(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  float local_90;
  int local_8c;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  fVar13 = *(float *)(param_2 + 0x98);
  FUN_009bbfb0();
  fVar12 = (float)FUN_009bc268();
  fVar13 = fVar13 - fVar12;
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  *(float *)(param_1 + 0x3d50) = fVar13;
  uVar4 = FUN_00ceab64();
  if ((uVar4 & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x3d30);
    if (plVar5 == (long *)0x0) {
      lVar9 = 0;
    }
    else if (*(int *)(param_1 + 0x3d38) == (int)plVar5[1]) {
      lVar9 = (**(code **)(*plVar5 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x3d30) = 0;
      lVar9 = 0;
      *(undefined4 *)(param_1 + 0x3d38) = DAT_03214ce8;
    }
    cVar3 = FUN_00d55870(lVar9);
    if (cVar3 == *param_2) {
      lVar10 = 0;
      lVar11 = 0x36c8;
      lVar7 = 0x3710;
      lVar8 = 0x3714;
      uVar14 = NEON_fmov(0x3f800000,4);
      do {
        if (*(int *)(param_2 + lVar10 * 4 + 8) != -1) {
          switch(param_2[lVar10 + 0x48]) {
          case '\0':
            pcVar6 = "hud_surrender_pending";
            break;
          case '\x01':
          case '\x03':
            pcVar6 = "capsule_button_check";
            break;
          case '\x02':
            FUN_00f0e578(param_1 + lVar11,"capsule_button_x");
            if ((*(float *)(param_1 + lVar7) == 0.41379312) &&
               (*(float *)(param_1 + lVar8) == 0.41379312)) goto switchD_00a68ab0_default;
            *(undefined8 *)(param_1 + lVar7) = 0x3ed3dcb13ed3dcb1;
            goto LAB_00a68b28;
          default:
            goto switchD_00a68ab0_default;
          }
          FUN_00f0e578(param_1 + lVar11,pcVar6);
          if ((*(float *)(param_1 + lVar7) != 1.0) || (*(float *)(param_1 + lVar8) != 1.0)) {
            *(undefined8 *)(param_1 + lVar7) = uVar14;
LAB_00a68b28:
            FUN_0091ada4(param_1 + lVar11);
          }
        }
switchD_00a68ab0_default:
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 0xf0;
        lVar7 = lVar7 + 0xf0;
        lVar8 = lVar8 + 0xf0;
      } while (lVar10 != 5);
      iVar1 = *(int *)(param_2 + 4);
      if (iVar1 == 1) {
        FUN_00e70510(&local_a0);
        FUN_00e70e18(&local_a0,&DAT_01bb6d43,*(undefined4 *)(param_2 + 0x9c));
        uVar14 = FUN_00e6ce7c("HUD_SURRENDER_NEED_VOTES",0);
        lVar10 = param_1 + 0x3d40;
        FUN_00910394(lVar10,uVar14);
        FUN_00e705c8(&local_b0,"[VOTES]");
        FUN_00e71248(lVar10,0,&local_b0,&local_a0);
        if (local_a8 != (void *)0x0) {
          operator_delete__(local_a8);
          local_b0 = 0;
          local_a8 = (void *)0x0;
        }
        FUN_00f0d75c(param_1 + 0x3598,lVar10);
        uVar4 = 0;
        do {
          if ((*(int *)(param_2 + uVar4 * 4 + 8) == *(int *)(lVar9 + 0x260)) &&
             (param_2[uVar4 + 0x48] != '\0')) {
            uVar14 = 1;
            goto LAB_00a68db8;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < 5);
        uVar14 = 0;
LAB_00a68db8:
        FUN_00a68dd8(param_1,uVar14);
        if (local_98 != (void *)0x0) {
          operator_delete__(local_98);
          local_a0 = 0;
          local_98 = (void *)0x0;
        }
        goto LAB_00a68d74;
      }
      if (iVar1 == 2) {
        FUN_00a68dd8(param_1,1);
        lVar9 = param_1 + 0x3598;
        pcVar6 = "HUD_SURRENDER_PASSED";
      }
      else {
        if (iVar1 != 3) goto LAB_00a68d74;
        FUN_00a68dd8(param_1,1);
        lVar9 = param_1 + 0x3598;
        pcVar6 = "HUD_SURRENDER_REFUSED";
      }
    }
    else {
      if (*(int *)(param_2 + 4) != 2) goto LAB_00a68d74;
      FUN_00a68dd8(param_1,2);
      lVar9 = param_1 + 0x3c00;
      pcVar6 = "HUD_SURRENDER_ENEMY_SURRENDERED";
    }
    uVar14 = FUN_00e6ce7c(pcVar6,0);
    FUN_00f0d75c(lVar9,uVar14);
    goto LAB_00a68d74;
  }
  if (*(int *)(param_2 + 4) != 2) goto LAB_00a68d74;
  lVar10 = param_1 + 0x36c8;
  lVar9 = 0;
  uVar14 = NEON_fmov(0x3f800000,4);
  do {
    switch(param_2[lVar9 + 0x48]) {
    case '\0':
      pcVar6 = "hud_surrender_pending";
      break;
    case '\x01':
    case '\x03':
      pcVar6 = "capsule_button_check";
      break;
    case '\x02':
      FUN_00f0e578(lVar10,"capsule_button_x");
      if ((*(float *)(lVar10 + 0x48) == 0.41379312) && (*(float *)(lVar10 + 0x4c) == 0.41379312))
      goto switchD_00a688dc_default;
      *(undefined8 *)(lVar10 + 0x48) = 0x3ed3dcb13ed3dcb1;
      goto LAB_00a68940;
    default:
      goto switchD_00a688dc_default;
    }
    FUN_00f0e578(lVar10,pcVar6);
    if ((*(float *)(lVar10 + 0x48) != 1.0) || (*(float *)(lVar10 + 0x4c) != 1.0)) {
      *(undefined8 *)(lVar10 + 0x48) = uVar14;
LAB_00a68940:
      FUN_0091ada4(lVar10);
    }
switchD_00a688dc_default:
    lVar9 = lVar9 + 1;
    lVar10 = lVar10 + 0xf0;
  } while (lVar9 != 5);
  FUN_00f00298(&local_a0,&local_b0);
  uVar4 = FUN_0092ea9c();
  fVar12 = 422.4;
  fVar13 = 245.76;
  if ((uVar4 & 1) == 0) {
    fVar12 = 330.0;
    fVar13 = 192.0;
  }
  local_90 = 1.0;
  local_8c = 0;
  FUN_009399dc(&local_8c,0,&local_90,0,0,0,0,0);
  FUN_00ceace8();
  uVar4 = FUN_00ceaf9c();
  if ((uVar4 & 1) == 0) {
    if (local_8c == 1) goto LAB_00a68bc0;
  }
  else {
    local_8c = 1;
LAB_00a68bc0:
    fVar12 = fVar12 * local_90;
  }
  if (*param_2 == '\x01') {
    if (*(int *)(param_2 + 4) == 2) {
      FUN_00a68dd8(param_1,1);
      uVar14 = FUN_00e6ce7c("HUD_SURRENDER_PASSED",0);
      FUN_00f0d75c(param_1 + 0x3598,uVar14);
    }
  }
  else {
    FUN_00a68dd8(param_1,2);
    uVar14 = FUN_00e6ce7c("HUD_SURRENDER_ENEMY_SURRENDERED",0);
    FUN_00f0d75c(param_1 + 0x3c00,uVar14);
    fVar13 = (float)local_a0 - fVar13;
  }
  if ((*(float *)(param_1 + 0x198) != fVar13) ||
     (*(float *)(param_1 + 0x19c) != (float)local_b0 - fVar12)) {
    *(float *)(param_1 + 0x198) = fVar13;
    *(float *)(param_1 + 0x19c) = (float)local_b0 - fVar12;
    FUN_0091ada4(param_1 + 0x158);
  }
LAB_00a68d74:
  FUN_00f13238(param_1);
  if (*(long *)(lVar2 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a68dd8(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  ushort *puVar6;
  long lVar7;
  ushort *puVar8;
  
  if (*(int *)(param_1 + 0x3d54) == param_2) {
    return;
  }
  if (param_2 == 0) {
    lVar5 = param_1 + 0x3510;
    lVar7 = param_1 + 0x6a8;
    lVar4 = param_1 + 0x3b78;
    *(uint *)(param_1 + 0x7b4) = *(uint *)(param_1 + 0x7b4) | 4;
    FUN_00b09454(param_1 + 0x1f50,1);
    FUN_00b09454(param_1 + 0x990,1);
    *(uint *)(param_1 + 0x41c) = *(uint *)(param_1 + 0x41c) | 0x10;
    *(uint *)(param_1 + 0x50c) = *(uint *)(param_1 + 0x50c) | 0x10;
    if ((~*(uint *)(param_1 + 0x1dc) & 0x7f80) == 0) goto LAB_00a68f04;
    uVar2 = *(uint *)(param_1 + 0x1dc) | 0x7f80;
  }
  else {
    if (param_2 == 2) {
      lVar7 = param_1 + 0x3b78;
      lVar5 = param_1 + 0x3510;
      lVar4 = param_1 + 0x6a8;
    }
    else {
      lVar4 = 0;
      lVar5 = 0;
      lVar7 = 0;
      if (param_2 == 1) {
        lVar5 = param_1 + 0x6a8;
        lVar7 = param_1 + 0x3510;
        lVar4 = param_1 + 0x3b78;
      }
    }
    uVar2 = *(uint *)(param_1 + 0x1dc);
    *(uint *)(param_1 + 0x41c) = *(uint *)(param_1 + 0x41c) & 0xffffffef;
    *(uint *)(param_1 + 0x50c) = *(uint *)(param_1 + 0x50c) & 0xffffffef;
    if ((uVar2 & 0x7f80) == 0x5900) goto LAB_00a68f04;
    uVar2 = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5900;
  }
  *(uint *)(param_1 + 0x1dc) = uVar2;
  FUN_0091ada4(param_1 + 0x158);
LAB_00a68f04:
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f000000,puVar6);
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efdd74(puVar8);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efddc4(0x3f800000,puVar8);
  FUN_00efcac4(0x3f000000,puVar8);
  FUN_00efcb24(puVar8,FUN_0091aa80);
  uVar2 = *(uint *)(lVar7 + 0x84);
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(lVar7 + 0x84) = uVar2 & 0xffff807f;
    FUN_0091ada4(lVar7);
    uVar2 = *(uint *)(lVar7 + 0x84);
  }
  *(uint *)(lVar7 + 0x84) = uVar2 | 4;
  FUN_00f01980(lVar7);
  FUN_00f02308(lVar7,puVar6,puVar8,0);
  lVar7 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar7 + 0x20014) = *(int *)(lVar7 + 0x20014) + 1;
    FUN_00efdd74(puVar6);
    *(int *)(lVar7 + 0x20020) = *(int *)(lVar7 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar6);
  FUN_00efcac4(0x3f000000,puVar6);
  FUN_00efcb24(puVar6,FUN_0091aa80);
  lVar7 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar7 + 0x20014) = *(int *)(lVar7 + 0x20014) + 1;
    FUN_00efc8e8(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_02825148;
    *(int *)(lVar7 + 0x20020) = *(int *)(lVar7 + 0x20020) + 1;
  }
  FUN_00f01980(lVar5);
  FUN_00f02308(lVar5,puVar6,puVar8,0);
  lVar5 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efdd74(puVar6);
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar6);
  FUN_00efcac4(0x3f000000,puVar6);
  FUN_00efcb24(puVar6,FUN_0091aa80);
  lVar5 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efc8e8(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_02825148;
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00f01980(lVar4);
  FUN_00f02308(lVar4,puVar6,puVar8,0);
  *(int *)(param_1 + 0x3d54) = param_2;
  return;
}

